/*!
 * \file ini.cc
 * \brief This function parses an INI file into easy-to-access name/value pairs.
 * \author Brush Technologies, 2009.
 *
 * inih (INI Not Invented Here) is a simple .INI file parser written in C++.
 * It's only a couple of pages of code, and it was designed to be small
 * and simple, so it's good for embedded systems. To use it, just give
 * ini_parse() an INI file, and it will call a callback for every
 * name=value pair parsed, giving you strings for the section, name,
 * and value. It's done this way because it works well on low-memory
 * embedded systems, but also because it makes for a KISS implementation.
 * Parse given INI-style file. May have [section]s, name=value pairs
 * (whitespace stripped), and comments starting with ';' (semicolon).
 * Section is "" if name=value pair parsed before any section heading.
 * For each name=value pair parsed, call handler function with given user
 * pointer as well as section, name, and value (data only valid for duration
 * of handler call). Handler should return nonzero on success, zero on error.
 * Returns 0 on success, line number of first error on parse error, or -1 on
 * file open error
 *
 * -----------------------------------------------------------------------------
 * inih and INIReader are released under the New BSD license:
 *
 * Copyright (c) 2009, Brush Technology
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 * Go to the project home page for more info:
 *
 * https://github.com/benhoyt/inih
 * -----------------------------------------------------------------------------
 */

#include "ini.h"
#include <array>
#include <cctype>
#include <fstream>
#include <string>


#define MAX_LINE 200
#define MAX_SECTION 50
#define MAX_NAME 50

/* Strip whitespace chars off end of given string, in place. Return s. */
static char* rstrip(char* s)
{
    char* p = s + std::char_traits<char>::length(s);
    while (p > s && isspace(*--p))
        {
            *p = '\0';
        }
    return s;
}

/* Return pointer to first non-whitespace char in given string. */
static char* lskip(char* s)
{
    while (*s && isspace(*s))
        {
            s++;
        }
    return static_cast<char*>(s);
}

/* Return pointer to first char c or ';' in given string, or pointer to
   null at end of string if neither found. */
static char* find_char_or_comment(char* s, char c)
{
    while (*s && *s != c && *s != ';')
        {
            s++;
        }
    return static_cast<char*>(s);
}

/* Version of strncpy that ensures dest (size bytes) is null-terminated. */
static char* strncpy0(char* dest, const char* src, size_t size)
{
    for (size_t i = 0; i < size - 1; i++)
        {
            dest[i] = src[i];
        }
    dest[size - 1] = '\0';
    return dest;
}

/* See documentation in header file. */
int ini_parse(const char* filename,
    int (*handler)(void*, const char*, const char*, const char*),
    void* user)
{
    /* Uses a fair bit of stack (use heap instead if you need to) */
    std::array<char, MAX_LINE> line{};
    std::array<char, MAX_SECTION> section{};
    std::array<char, MAX_NAME> prev_name{};

    std::ifstream file;
    char* start;
    char* end;
    char* name;
    char* value;
    int lineno = 0;
    int error = 0;
    std::string line_str;

    file.open(filename, std::fstream::in);
    if (!file.is_open())
        {
            return -1;
        }

    /* Scan through file line by line */
    while (std::getline(file, line_str))
        {
            lineno++;
            int len_str = line_str.length();
            const char* read_line = line_str.data();
            if (len_str > (MAX_LINE - 1))
                {
                    len_str = MAX_LINE - 1;
                }
            int i;
            for (i = 0; i < len_str; i++)
                {
                    line[i] = read_line[i];
                }
            line[len_str] = '\0';
            start = lskip(rstrip(line.data()));

#if INI_ALLOW_MULTILINE
            if (prev_name.data() && *start && start > line.data())
                {
                    /* Non-black line with leading whitespace, treat as continuation
                       of previous name's value (as per Python ConfigParser). */
                    if (!handler(user, section.data(), prev_name.data(), start) && !error)
                        {
                            error = lineno;
                        }
                }
            else
#endif
                if (*start == '[')
                {
                    /* A "[section]" line */
                    end = find_char_or_comment(start + 1, ']');
                    if (*end == ']')
                        {
                            *end = '\0';
                            strncpy0(section.data(), start + 1, section.size());
                            prev_name[MAX_NAME - 1] = '\0';
                        }
                    else if (!error)
                        {
                            /* No ']' found on section line */
                            error = lineno;
                        }
                }
            else if (*start && *start != ';')
                {
                    /* Not a comment, must be a name=value pair */
                    end = find_char_or_comment(start, '=');
                    if (*end == '=')
                        {
                            *end = '\0';
                            name = rstrip(start);
                            value = lskip(end + 1);
                            end = find_char_or_comment(value, ';');
                            if (*end == ';')
                                {
                                    *end = '\0';
                                }
                            rstrip(value);

                            /* Valid name=value pair found, call handler */
                            strncpy0(prev_name.data(), name, prev_name.size());
                            if (!handler(user, section.data(), name, value) && !error)
                                {
                                    error = lineno;
                                }
                        }
                    else if (!error)
                        {
                            /* No '=' found on name=value line */
                            error = lineno;
                        }
                }
        }

    file.close();

    return error;
}
