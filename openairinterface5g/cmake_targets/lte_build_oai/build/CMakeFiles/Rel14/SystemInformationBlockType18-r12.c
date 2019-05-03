/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "SystemInformationBlockType18-r12.h"

static int
commTxResourceUC_ReqAllowed_r13_11_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
commTxResourceUC_ReqAllowed_r13_11_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	td->aper_decoder   = asn_DEF_NativeEnumerated.aper_decoder;
	td->aper_encoder   = asn_DEF_NativeEnumerated.aper_encoder;
	td->compare        = asn_DEF_NativeEnumerated.compare;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
commTxResourceUC_ReqAllowed_r13_11_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	commTxResourceUC_ReqAllowed_r13_11_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
commTxResourceUC_ReqAllowed_r13_11_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	commTxResourceUC_ReqAllowed_r13_11_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
commTxResourceUC_ReqAllowed_r13_11_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	commTxResourceUC_ReqAllowed_r13_11_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
commTxResourceUC_ReqAllowed_r13_11_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	commTxResourceUC_ReqAllowed_r13_11_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
commTxResourceUC_ReqAllowed_r13_11_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	commTxResourceUC_ReqAllowed_r13_11_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
commTxResourceUC_ReqAllowed_r13_11_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	commTxResourceUC_ReqAllowed_r13_11_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
commTxResourceUC_ReqAllowed_r13_11_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	commTxResourceUC_ReqAllowed_r13_11_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
commTxResourceUC_ReqAllowed_r13_11_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	commTxResourceUC_ReqAllowed_r13_11_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
commTxResourceUC_ReqAllowed_r13_11_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	commTxResourceUC_ReqAllowed_r13_11_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_comp_rval_t * 
commTxResourceUC_ReqAllowed_r13_11_compare(asn_TYPE_descriptor_t *td1,
		const void *structure1,
		asn_TYPE_descriptor_t *td2,
		const void *structure2) {
	asn_comp_rval_t * res  = NULL;
	commTxResourceUC_ReqAllowed_r13_11_inherit_TYPE_descriptor(td1);
	commTxResourceUC_ReqAllowed_r13_11_inherit_TYPE_descriptor(td2);
	res = td1->compare(td1, structure1, td2, structure2);
	return res;
}

static asn_dec_rval_t
commTxResourceUC_ReqAllowed_r13_11_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	commTxResourceUC_ReqAllowed_r13_11_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static int
commTxAllowRelayCommon_r13_13_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
commTxAllowRelayCommon_r13_13_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	td->aper_decoder   = asn_DEF_NativeEnumerated.aper_decoder;
	td->aper_encoder   = asn_DEF_NativeEnumerated.aper_encoder;
	td->compare        = asn_DEF_NativeEnumerated.compare;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
commTxAllowRelayCommon_r13_13_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	commTxAllowRelayCommon_r13_13_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
commTxAllowRelayCommon_r13_13_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	commTxAllowRelayCommon_r13_13_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
commTxAllowRelayCommon_r13_13_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	commTxAllowRelayCommon_r13_13_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
commTxAllowRelayCommon_r13_13_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	commTxAllowRelayCommon_r13_13_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
commTxAllowRelayCommon_r13_13_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	commTxAllowRelayCommon_r13_13_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
commTxAllowRelayCommon_r13_13_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	commTxAllowRelayCommon_r13_13_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
commTxAllowRelayCommon_r13_13_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	commTxAllowRelayCommon_r13_13_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
commTxAllowRelayCommon_r13_13_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	commTxAllowRelayCommon_r13_13_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
commTxAllowRelayCommon_r13_13_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	commTxAllowRelayCommon_r13_13_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_comp_rval_t * 
commTxAllowRelayCommon_r13_13_compare(asn_TYPE_descriptor_t *td1,
		const void *structure1,
		asn_TYPE_descriptor_t *td2,
		const void *structure2) {
	asn_comp_rval_t * res  = NULL;
	commTxAllowRelayCommon_r13_13_inherit_TYPE_descriptor(td1);
	commTxAllowRelayCommon_r13_13_inherit_TYPE_descriptor(td2);
	res = td1->compare(td1, structure1, td2, structure2);
	return res;
}

static asn_dec_rval_t
commTxAllowRelayCommon_r13_13_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	commTxAllowRelayCommon_r13_13_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_per_constraints_t asn_PER_type_commTxResourceUC_ReqAllowed_r13_constr_11 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_commTxAllowRelayCommon_r13_constr_13 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_commConfig_r12_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType18_r12__commConfig_r12, commRxPool_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_CommRxPoolList_r12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"commRxPool-r12"
		},
	{ ATF_POINTER, 3, offsetof(struct SystemInformationBlockType18_r12__commConfig_r12, commTxPoolNormalCommon_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_CommTxPoolList_r12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"commTxPoolNormalCommon-r12"
		},
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType18_r12__commConfig_r12, commTxPoolExceptional_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_CommTxPoolList_r12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"commTxPoolExceptional-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType18_r12__commConfig_r12, commSyncConfig_r12),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_SyncConfigList_r12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"commSyncConfig-r12"
		},
};
static int asn_MAP_commConfig_r12_oms_2[] = { 1, 2, 3 };
static ber_tlv_tag_t asn_DEF_commConfig_r12_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_commConfig_r12_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* commRxPool-r12 at 3149 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* commTxPoolNormalCommon-r12 at 3150 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* commTxPoolExceptional-r12 at 3151 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* commSyncConfig-r12 at 3152 */
};
static asn_SEQUENCE_specifics_t asn_SPC_commConfig_r12_specs_2 = {
	sizeof(struct SystemInformationBlockType18_r12__commConfig_r12),
	offsetof(struct SystemInformationBlockType18_r12__commConfig_r12, _asn_ctx),
	asn_MAP_commConfig_r12_tag2el_2,
	4,	/* Count of tags in the map */
	asn_MAP_commConfig_r12_oms_2,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_commConfig_r12_2 = {
	"commConfig-r12",
	"commConfig-r12",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	SEQUENCE_decode_aper,
	SEQUENCE_encode_aper,
	SEQUENCE_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_commConfig_r12_tags_2,
	sizeof(asn_DEF_commConfig_r12_tags_2)
		/sizeof(asn_DEF_commConfig_r12_tags_2[0]) - 1, /* 1 */
	asn_DEF_commConfig_r12_tags_2,	/* Same as above */
	sizeof(asn_DEF_commConfig_r12_tags_2)
		/sizeof(asn_DEF_commConfig_r12_tags_2[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_commConfig_r12_2,
	4,	/* Elements count */
	&asn_SPC_commConfig_r12_specs_2	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_commTxResourceUC_ReqAllowed_r13_value2enum_11[] = {
	{ 0,	4,	"true" }
};
static unsigned int asn_MAP_commTxResourceUC_ReqAllowed_r13_enum2value_11[] = {
	0	/* true(0) */
};
static asn_INTEGER_specifics_t asn_SPC_commTxResourceUC_ReqAllowed_r13_specs_11 = {
	asn_MAP_commTxResourceUC_ReqAllowed_r13_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_commTxResourceUC_ReqAllowed_r13_enum2value_11,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_commTxResourceUC_ReqAllowed_r13_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_commTxResourceUC_ReqAllowed_r13_11 = {
	"commTxResourceUC-ReqAllowed-r13",
	"commTxResourceUC-ReqAllowed-r13",
	commTxResourceUC_ReqAllowed_r13_11_free,
	commTxResourceUC_ReqAllowed_r13_11_print,
	commTxResourceUC_ReqAllowed_r13_11_constraint,
	commTxResourceUC_ReqAllowed_r13_11_decode_ber,
	commTxResourceUC_ReqAllowed_r13_11_encode_der,
	commTxResourceUC_ReqAllowed_r13_11_decode_xer,
	commTxResourceUC_ReqAllowed_r13_11_encode_xer,
	commTxResourceUC_ReqAllowed_r13_11_decode_uper,
	commTxResourceUC_ReqAllowed_r13_11_encode_uper,
	commTxResourceUC_ReqAllowed_r13_11_decode_aper,
	commTxResourceUC_ReqAllowed_r13_11_encode_aper,
	commTxResourceUC_ReqAllowed_r13_11_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_commTxResourceUC_ReqAllowed_r13_tags_11,
	sizeof(asn_DEF_commTxResourceUC_ReqAllowed_r13_tags_11)
		/sizeof(asn_DEF_commTxResourceUC_ReqAllowed_r13_tags_11[0]) - 1, /* 1 */
	asn_DEF_commTxResourceUC_ReqAllowed_r13_tags_11,	/* Same as above */
	sizeof(asn_DEF_commTxResourceUC_ReqAllowed_r13_tags_11)
		/sizeof(asn_DEF_commTxResourceUC_ReqAllowed_r13_tags_11[0]), /* 2 */
	&asn_PER_type_commTxResourceUC_ReqAllowed_r13_constr_11,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_commTxResourceUC_ReqAllowed_r13_specs_11	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_commTxAllowRelayCommon_r13_value2enum_13[] = {
	{ 0,	4,	"true" }
};
static unsigned int asn_MAP_commTxAllowRelayCommon_r13_enum2value_13[] = {
	0	/* true(0) */
};
static asn_INTEGER_specifics_t asn_SPC_commTxAllowRelayCommon_r13_specs_13 = {
	asn_MAP_commTxAllowRelayCommon_r13_value2enum_13,	/* "tag" => N; sorted by tag */
	asn_MAP_commTxAllowRelayCommon_r13_enum2value_13,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_commTxAllowRelayCommon_r13_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_commTxAllowRelayCommon_r13_13 = {
	"commTxAllowRelayCommon-r13",
	"commTxAllowRelayCommon-r13",
	commTxAllowRelayCommon_r13_13_free,
	commTxAllowRelayCommon_r13_13_print,
	commTxAllowRelayCommon_r13_13_constraint,
	commTxAllowRelayCommon_r13_13_decode_ber,
	commTxAllowRelayCommon_r13_13_encode_der,
	commTxAllowRelayCommon_r13_13_decode_xer,
	commTxAllowRelayCommon_r13_13_encode_xer,
	commTxAllowRelayCommon_r13_13_decode_uper,
	commTxAllowRelayCommon_r13_13_encode_uper,
	commTxAllowRelayCommon_r13_13_decode_aper,
	commTxAllowRelayCommon_r13_13_encode_aper,
	commTxAllowRelayCommon_r13_13_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_commTxAllowRelayCommon_r13_tags_13,
	sizeof(asn_DEF_commTxAllowRelayCommon_r13_tags_13)
		/sizeof(asn_DEF_commTxAllowRelayCommon_r13_tags_13[0]) - 1, /* 1 */
	asn_DEF_commTxAllowRelayCommon_r13_tags_13,	/* Same as above */
	sizeof(asn_DEF_commTxAllowRelayCommon_r13_tags_13)
		/sizeof(asn_DEF_commTxAllowRelayCommon_r13_tags_13[0]), /* 2 */
	&asn_PER_type_commTxAllowRelayCommon_r13_constr_13,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_commTxAllowRelayCommon_r13_specs_13	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext1_9[] = {
	{ ATF_POINTER, 3, offsetof(struct SystemInformationBlockType18_r12__ext1, commTxPoolNormalCommonExt_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_CommTxPoolListExt_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"commTxPoolNormalCommonExt-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType18_r12__ext1, commTxResourceUC_ReqAllowed_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_commTxResourceUC_ReqAllowed_r13_11,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"commTxResourceUC-ReqAllowed-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType18_r12__ext1, commTxAllowRelayCommon_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_commTxAllowRelayCommon_r13_13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"commTxAllowRelayCommon-r13"
		},
};
static int asn_MAP_ext1_oms_9[] = { 0, 1, 2 };
static ber_tlv_tag_t asn_DEF_ext1_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_9[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* commTxPoolNormalCommonExt-r13 at 3156 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* commTxResourceUC-ReqAllowed-r13 at 3157 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* commTxAllowRelayCommon-r13 at 3158 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_9 = {
	sizeof(struct SystemInformationBlockType18_r12__ext1),
	offsetof(struct SystemInformationBlockType18_r12__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_9,
	3,	/* Count of tags in the map */
	asn_MAP_ext1_oms_9,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_9 = {
	"ext1",
	"ext1",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	SEQUENCE_decode_aper,
	SEQUENCE_encode_aper,
	SEQUENCE_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_ext1_tags_9,
	sizeof(asn_DEF_ext1_tags_9)
		/sizeof(asn_DEF_ext1_tags_9[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_9,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_9)
		/sizeof(asn_DEF_ext1_tags_9[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_ext1_9,
	3,	/* Elements count */
	&asn_SPC_ext1_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SystemInformationBlockType18_r12_1[] = {
	{ ATF_POINTER, 3, offsetof(struct SystemInformationBlockType18_r12, commConfig_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_commConfig_r12_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"commConfig-r12"
		},
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType18_r12, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType18_r12, ext1),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_ext1_9,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ext1"
		},
};
static int asn_MAP_SystemInformationBlockType18_r12_oms_1[] = { 0, 1, 2 };
static ber_tlv_tag_t asn_DEF_SystemInformationBlockType18_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_SystemInformationBlockType18_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* commConfig-r12 at 3149 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* lateNonCriticalExtension at 3154 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ext1 at 3156 */
};
static asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType18_r12_specs_1 = {
	sizeof(struct SystemInformationBlockType18_r12),
	offsetof(struct SystemInformationBlockType18_r12, _asn_ctx),
	asn_MAP_SystemInformationBlockType18_r12_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_SystemInformationBlockType18_r12_oms_1,	/* Optional members */
	2, 1,	/* Root/Additions */
	1,	/* Start extensions */
	4	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType18_r12 = {
	"SystemInformationBlockType18-r12",
	"SystemInformationBlockType18-r12",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	SEQUENCE_decode_aper,
	SEQUENCE_encode_aper,
	SEQUENCE_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_SystemInformationBlockType18_r12_tags_1,
	sizeof(asn_DEF_SystemInformationBlockType18_r12_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType18_r12_tags_1[0]), /* 1 */
	asn_DEF_SystemInformationBlockType18_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_SystemInformationBlockType18_r12_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType18_r12_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SystemInformationBlockType18_r12_1,
	3,	/* Elements count */
	&asn_SPC_SystemInformationBlockType18_r12_specs_1	/* Additional specs */
};

