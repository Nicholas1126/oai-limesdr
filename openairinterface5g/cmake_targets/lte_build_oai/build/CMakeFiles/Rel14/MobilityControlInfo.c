/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "MobilityControlInfo.h"

static int
t304_6_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
t304_6_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
t304_6_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	t304_6_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
t304_6_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	t304_6_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
t304_6_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	t304_6_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
t304_6_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	t304_6_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
t304_6_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	t304_6_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
t304_6_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	t304_6_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
t304_6_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	t304_6_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
t304_6_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	t304_6_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
t304_6_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	t304_6_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_comp_rval_t * 
t304_6_compare(asn_TYPE_descriptor_t *td1,
		const void *structure1,
		asn_TYPE_descriptor_t *td2,
		const void *structure2) {
	asn_comp_rval_t * res  = NULL;
	t304_6_inherit_TYPE_descriptor(td1);
	t304_6_inherit_TYPE_descriptor(td2);
	res = td1->compare(td1, structure1, td2, structure2);
	return res;
}

static asn_dec_rval_t
t304_6_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	t304_6_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static int
drb_ContinueROHC_r11_22_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
drb_ContinueROHC_r11_22_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
drb_ContinueROHC_r11_22_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	drb_ContinueROHC_r11_22_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
drb_ContinueROHC_r11_22_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	drb_ContinueROHC_r11_22_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
drb_ContinueROHC_r11_22_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	drb_ContinueROHC_r11_22_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
drb_ContinueROHC_r11_22_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	drb_ContinueROHC_r11_22_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
drb_ContinueROHC_r11_22_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	drb_ContinueROHC_r11_22_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
drb_ContinueROHC_r11_22_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	drb_ContinueROHC_r11_22_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
drb_ContinueROHC_r11_22_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	drb_ContinueROHC_r11_22_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
drb_ContinueROHC_r11_22_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	drb_ContinueROHC_r11_22_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
drb_ContinueROHC_r11_22_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	drb_ContinueROHC_r11_22_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_comp_rval_t * 
drb_ContinueROHC_r11_22_compare(asn_TYPE_descriptor_t *td1,
		const void *structure1,
		asn_TYPE_descriptor_t *td2,
		const void *structure2) {
	asn_comp_rval_t * res  = NULL;
	drb_ContinueROHC_r11_22_inherit_TYPE_descriptor(td1);
	drb_ContinueROHC_r11_22_inherit_TYPE_descriptor(td2);
	res = td1->compare(td1, structure1, td2, structure2);
	return res;
}

static asn_dec_rval_t
drb_ContinueROHC_r11_22_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	drb_ContinueROHC_r11_22_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_per_constraints_t asn_PER_type_t304_constr_6 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_drb_ContinueROHC_r11_constr_22 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_t304_value2enum_6[] = {
	{ 0,	4,	"ms50" },
	{ 1,	5,	"ms100" },
	{ 2,	5,	"ms150" },
	{ 3,	5,	"ms200" },
	{ 4,	5,	"ms500" },
	{ 5,	6,	"ms1000" },
	{ 6,	6,	"ms2000" },
	{ 7,	13,	"ms10000-v1310" }
};
static unsigned int asn_MAP_t304_enum2value_6[] = {
	1,	/* ms100(1) */
	5,	/* ms1000(5) */
	7,	/* ms10000-v1310(7) */
	2,	/* ms150(2) */
	3,	/* ms200(3) */
	6,	/* ms2000(6) */
	0,	/* ms50(0) */
	4	/* ms500(4) */
};
static asn_INTEGER_specifics_t asn_SPC_t304_specs_6 = {
	asn_MAP_t304_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_t304_enum2value_6,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_t304_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_t304_6 = {
	"t304",
	"t304",
	t304_6_free,
	t304_6_print,
	t304_6_constraint,
	t304_6_decode_ber,
	t304_6_encode_der,
	t304_6_decode_xer,
	t304_6_encode_xer,
	t304_6_decode_uper,
	t304_6_encode_uper,
	t304_6_decode_aper,
	t304_6_encode_aper,
	t304_6_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_t304_tags_6,
	sizeof(asn_DEF_t304_tags_6)
		/sizeof(asn_DEF_t304_tags_6[0]) - 1, /* 1 */
	asn_DEF_t304_tags_6,	/* Same as above */
	sizeof(asn_DEF_t304_tags_6)
		/sizeof(asn_DEF_t304_tags_6[0]), /* 2 */
	&asn_PER_type_t304_constr_6,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_t304_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext1_19[] = {
	{ ATF_POINTER, 1, offsetof(struct MobilityControlInfo__ext1, carrierFreq_v9e0),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CarrierFreqEUTRA_v9e0,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"carrierFreq-v9e0"
		},
};
static int asn_MAP_ext1_oms_19[] = { 0 };
static ber_tlv_tag_t asn_DEF_ext1_tags_19[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_19[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* carrierFreq-v9e0 at 6333 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_19 = {
	sizeof(struct MobilityControlInfo__ext1),
	offsetof(struct MobilityControlInfo__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_19,
	1,	/* Count of tags in the map */
	asn_MAP_ext1_oms_19,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_19 = {
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
	asn_DEF_ext1_tags_19,
	sizeof(asn_DEF_ext1_tags_19)
		/sizeof(asn_DEF_ext1_tags_19[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_19,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_19)
		/sizeof(asn_DEF_ext1_tags_19[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_ext1_19,
	1,	/* Elements count */
	&asn_SPC_ext1_specs_19	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_drb_ContinueROHC_r11_value2enum_22[] = {
	{ 0,	4,	"true" }
};
static unsigned int asn_MAP_drb_ContinueROHC_r11_enum2value_22[] = {
	0	/* true(0) */
};
static asn_INTEGER_specifics_t asn_SPC_drb_ContinueROHC_r11_specs_22 = {
	asn_MAP_drb_ContinueROHC_r11_value2enum_22,	/* "tag" => N; sorted by tag */
	asn_MAP_drb_ContinueROHC_r11_enum2value_22,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_drb_ContinueROHC_r11_tags_22[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_drb_ContinueROHC_r11_22 = {
	"drb-ContinueROHC-r11",
	"drb-ContinueROHC-r11",
	drb_ContinueROHC_r11_22_free,
	drb_ContinueROHC_r11_22_print,
	drb_ContinueROHC_r11_22_constraint,
	drb_ContinueROHC_r11_22_decode_ber,
	drb_ContinueROHC_r11_22_encode_der,
	drb_ContinueROHC_r11_22_decode_xer,
	drb_ContinueROHC_r11_22_encode_xer,
	drb_ContinueROHC_r11_22_decode_uper,
	drb_ContinueROHC_r11_22_encode_uper,
	drb_ContinueROHC_r11_22_decode_aper,
	drb_ContinueROHC_r11_22_encode_aper,
	drb_ContinueROHC_r11_22_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_drb_ContinueROHC_r11_tags_22,
	sizeof(asn_DEF_drb_ContinueROHC_r11_tags_22)
		/sizeof(asn_DEF_drb_ContinueROHC_r11_tags_22[0]) - 1, /* 1 */
	asn_DEF_drb_ContinueROHC_r11_tags_22,	/* Same as above */
	sizeof(asn_DEF_drb_ContinueROHC_r11_tags_22)
		/sizeof(asn_DEF_drb_ContinueROHC_r11_tags_22[0]), /* 2 */
	&asn_PER_type_drb_ContinueROHC_r11_constr_22,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_drb_ContinueROHC_r11_specs_22	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext2_21[] = {
	{ ATF_POINTER, 1, offsetof(struct MobilityControlInfo__ext2, drb_ContinueROHC_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_drb_ContinueROHC_r11_22,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"drb-ContinueROHC-r11"
		},
};
static int asn_MAP_ext2_oms_21[] = { 0 };
static ber_tlv_tag_t asn_DEF_ext2_tags_21[] = {
	(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ext2_tag2el_21[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* drb-ContinueROHC-r11 at 6335 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext2_specs_21 = {
	sizeof(struct MobilityControlInfo__ext2),
	offsetof(struct MobilityControlInfo__ext2, _asn_ctx),
	asn_MAP_ext2_tag2el_21,
	1,	/* Count of tags in the map */
	asn_MAP_ext2_oms_21,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext2_21 = {
	"ext2",
	"ext2",
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
	asn_DEF_ext2_tags_21,
	sizeof(asn_DEF_ext2_tags_21)
		/sizeof(asn_DEF_ext2_tags_21[0]) - 1, /* 1 */
	asn_DEF_ext2_tags_21,	/* Same as above */
	sizeof(asn_DEF_ext2_tags_21)
		/sizeof(asn_DEF_ext2_tags_21[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_ext2_21,
	1,	/* Elements count */
	&asn_SPC_ext2_specs_21	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext3_24[] = {
	{ ATF_POINTER, 1, offsetof(struct MobilityControlInfo__ext3, mobilityControlInfoV2X_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MobilityControlInfoV2X_r14,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mobilityControlInfoV2X-r14"
		},
};
static int asn_MAP_ext3_oms_24[] = { 0 };
static ber_tlv_tag_t asn_DEF_ext3_tags_24[] = {
	(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ext3_tag2el_24[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* mobilityControlInfoV2X-r14 at 6337 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext3_specs_24 = {
	sizeof(struct MobilityControlInfo__ext3),
	offsetof(struct MobilityControlInfo__ext3, _asn_ctx),
	asn_MAP_ext3_tag2el_24,
	1,	/* Count of tags in the map */
	asn_MAP_ext3_oms_24,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext3_24 = {
	"ext3",
	"ext3",
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
	asn_DEF_ext3_tags_24,
	sizeof(asn_DEF_ext3_tags_24)
		/sizeof(asn_DEF_ext3_tags_24[0]) - 1, /* 1 */
	asn_DEF_ext3_tags_24,	/* Same as above */
	sizeof(asn_DEF_ext3_tags_24)
		/sizeof(asn_DEF_ext3_tags_24[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_ext3_24,
	1,	/* Elements count */
	&asn_SPC_ext3_specs_24	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_MobilityControlInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MobilityControlInfo, targetPhysCellId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellId,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"targetPhysCellId"
		},
	{ ATF_POINTER, 3, offsetof(struct MobilityControlInfo, carrierFreq),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CarrierFreqEUTRA,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"carrierFreq"
		},
	{ ATF_POINTER, 2, offsetof(struct MobilityControlInfo, carrierBandwidth),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CarrierBandwidthEUTRA,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"carrierBandwidth"
		},
	{ ATF_POINTER, 1, offsetof(struct MobilityControlInfo, additionalSpectrumEmission),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AdditionalSpectrumEmission,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"additionalSpectrumEmission"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MobilityControlInfo, t304),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_t304_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"t304"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MobilityControlInfo, newUE_Identity),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_C_RNTI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"newUE-Identity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MobilityControlInfo, radioResourceConfigCommon),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RadioResourceConfigCommon,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"radioResourceConfigCommon"
		},
	{ ATF_POINTER, 4, offsetof(struct MobilityControlInfo, rach_ConfigDedicated),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RACH_ConfigDedicated,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rach-ConfigDedicated"
		},
	{ ATF_POINTER, 3, offsetof(struct MobilityControlInfo, ext1),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		0,
		&asn_DEF_ext1_19,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ext1"
		},
	{ ATF_POINTER, 2, offsetof(struct MobilityControlInfo, ext2),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		0,
		&asn_DEF_ext2_21,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ext2"
		},
	{ ATF_POINTER, 1, offsetof(struct MobilityControlInfo, ext3),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		0,
		&asn_DEF_ext3_24,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ext3"
		},
};
static int asn_MAP_MobilityControlInfo_oms_1[] = { 1, 2, 3, 7, 8, 9, 10 };
static ber_tlv_tag_t asn_DEF_MobilityControlInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_MobilityControlInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* targetPhysCellId at 6322 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* carrierFreq at 6323 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* carrierBandwidth at 6324 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* additionalSpectrumEmission at 6325 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* t304 at 6327 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* newUE-Identity at 6329 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* radioResourceConfigCommon at 6330 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* rach-ConfigDedicated at 6331 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* ext1 at 6333 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* ext2 at 6335 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 } /* ext3 at 6337 */
};
static asn_SEQUENCE_specifics_t asn_SPC_MobilityControlInfo_specs_1 = {
	sizeof(struct MobilityControlInfo),
	offsetof(struct MobilityControlInfo, _asn_ctx),
	asn_MAP_MobilityControlInfo_tag2el_1,
	11,	/* Count of tags in the map */
	asn_MAP_MobilityControlInfo_oms_1,	/* Optional members */
	4, 3,	/* Root/Additions */
	7,	/* Start extensions */
	12	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_MobilityControlInfo = {
	"MobilityControlInfo",
	"MobilityControlInfo",
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
	asn_DEF_MobilityControlInfo_tags_1,
	sizeof(asn_DEF_MobilityControlInfo_tags_1)
		/sizeof(asn_DEF_MobilityControlInfo_tags_1[0]), /* 1 */
	asn_DEF_MobilityControlInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_MobilityControlInfo_tags_1)
		/sizeof(asn_DEF_MobilityControlInfo_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_MobilityControlInfo_1,
	11,	/* Elements count */
	&asn_SPC_MobilityControlInfo_specs_1	/* Additional specs */
};

