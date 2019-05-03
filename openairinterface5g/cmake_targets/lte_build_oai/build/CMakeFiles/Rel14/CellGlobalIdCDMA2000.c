/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "CellGlobalIdCDMA2000.h"

static int
memb_cellGlobalId1XRTT_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 47)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_cellGlobalIdHRPD_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 128)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_cellGlobalId1XRTT_constr_2 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  47,  47 }	/* (SIZE(47..47)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_cellGlobalIdHRPD_constr_3 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  128,  128 }	/* (SIZE(128..128)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_CellGlobalIdCDMA2000_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_CellGlobalIdCDMA2000_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CellGlobalIdCDMA2000, choice.cellGlobalId1XRTT),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_cellGlobalId1XRTT_constraint_1,
		&asn_PER_memb_cellGlobalId1XRTT_constr_2,
		0,
		"cellGlobalId1XRTT"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CellGlobalIdCDMA2000, choice.cellGlobalIdHRPD),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_cellGlobalIdHRPD_constraint_1,
		&asn_PER_memb_cellGlobalIdHRPD_constr_3,
		0,
		"cellGlobalIdHRPD"
		},
};
static asn_TYPE_tag2member_t asn_MAP_CellGlobalIdCDMA2000_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellGlobalId1XRTT at 6293 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* cellGlobalIdHRPD at 6294 */
};
static asn_CHOICE_specifics_t asn_SPC_CellGlobalIdCDMA2000_specs_1 = {
	sizeof(struct CellGlobalIdCDMA2000),
	offsetof(struct CellGlobalIdCDMA2000, _asn_ctx),
	offsetof(struct CellGlobalIdCDMA2000, present),
	sizeof(((struct CellGlobalIdCDMA2000 *)0)->present),
	asn_MAP_CellGlobalIdCDMA2000_tag2el_1,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_CellGlobalIdCDMA2000 = {
	"CellGlobalIdCDMA2000",
	"CellGlobalIdCDMA2000",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_decode_aper,
	CHOICE_encode_aper,
	CHOICE_compare,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_CellGlobalIdCDMA2000_constr_1,
	asn_MBR_CellGlobalIdCDMA2000_1,
	2,	/* Elements count */
	&asn_SPC_CellGlobalIdCDMA2000_specs_1	/* Additional specs */
};

