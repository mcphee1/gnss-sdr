/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../ulp.asn1"
 */

#include "GANSSIonoStormFlags.h"

static int
memb_ionoStormFlag1_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_ionoStormFlag2_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_ionoStormFlag3_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_ionoStormFlag4_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_ionoStormFlag5_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_ionoStormFlag1_constr_2 CC_NOTUSED = {
	{ 1, 1 }	/* (0..1) */,
	-1};
static asn_per_constraints_t asn_PER_memb_ionoStormFlag1_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ionoStormFlag2_constr_3 CC_NOTUSED = {
	{ 1, 1 }	/* (0..1) */,
	-1};
static asn_per_constraints_t asn_PER_memb_ionoStormFlag2_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ionoStormFlag3_constr_4 CC_NOTUSED = {
	{ 1, 1 }	/* (0..1) */,
	-1};
static asn_per_constraints_t asn_PER_memb_ionoStormFlag3_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ionoStormFlag4_constr_5 CC_NOTUSED = {
	{ 1, 1 }	/* (0..1) */,
	-1};
static asn_per_constraints_t asn_PER_memb_ionoStormFlag4_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_ionoStormFlag5_constr_6 CC_NOTUSED = {
	{ 1, 1 }	/* (0..1) */,
	-1};
static asn_per_constraints_t asn_PER_memb_ionoStormFlag5_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_GANSSIonoStormFlags_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct GANSSIonoStormFlags, ionoStormFlag1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_ionoStormFlag1_constr_2, &asn_PER_memb_ionoStormFlag1_constr_2,  memb_ionoStormFlag1_constraint_1 },
		0, 0, /* No default value */
		"ionoStormFlag1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GANSSIonoStormFlags, ionoStormFlag2),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_ionoStormFlag2_constr_3, &asn_PER_memb_ionoStormFlag2_constr_3,  memb_ionoStormFlag2_constraint_1 },
		0, 0, /* No default value */
		"ionoStormFlag2"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GANSSIonoStormFlags, ionoStormFlag3),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_ionoStormFlag3_constr_4, &asn_PER_memb_ionoStormFlag3_constr_4,  memb_ionoStormFlag3_constraint_1 },
		0, 0, /* No default value */
		"ionoStormFlag3"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GANSSIonoStormFlags, ionoStormFlag4),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_ionoStormFlag4_constr_5, &asn_PER_memb_ionoStormFlag4_constr_5,  memb_ionoStormFlag4_constraint_1 },
		0, 0, /* No default value */
		"ionoStormFlag4"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct GANSSIonoStormFlags, ionoStormFlag5),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_ionoStormFlag5_constr_6, &asn_PER_memb_ionoStormFlag5_constr_6,  memb_ionoStormFlag5_constraint_1 },
		0, 0, /* No default value */
		"ionoStormFlag5"
		},
};
static const ber_tlv_tag_t asn_DEF_GANSSIonoStormFlags_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_GANSSIonoStormFlags_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ionoStormFlag1 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ionoStormFlag2 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ionoStormFlag3 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ionoStormFlag4 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* ionoStormFlag5 */
};
asn_SEQUENCE_specifics_t asn_SPC_GANSSIonoStormFlags_specs_1 = {
	sizeof(struct GANSSIonoStormFlags),
	offsetof(struct GANSSIonoStormFlags, _asn_ctx),
	asn_MAP_GANSSIonoStormFlags_tag2el_1,
	5,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_GANSSIonoStormFlags = {
	"GANSSIonoStormFlags",
	"GANSSIonoStormFlags",
	&asn_OP_SEQUENCE,
	asn_DEF_GANSSIonoStormFlags_tags_1,
	sizeof(asn_DEF_GANSSIonoStormFlags_tags_1)
		/sizeof(asn_DEF_GANSSIonoStormFlags_tags_1[0]), /* 1 */
	asn_DEF_GANSSIonoStormFlags_tags_1,	/* Same as above */
	sizeof(asn_DEF_GANSSIonoStormFlags_tags_1)
		/sizeof(asn_DEF_GANSSIonoStormFlags_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_GANSSIonoStormFlags_1,
	5,	/* Elements count */
	&asn_SPC_GANSSIonoStormFlags_specs_1	/* Additional specs */
};
