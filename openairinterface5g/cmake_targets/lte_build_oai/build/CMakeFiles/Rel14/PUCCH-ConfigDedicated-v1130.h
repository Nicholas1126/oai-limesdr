/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_PUCCH_ConfigDedicated_v1130_H_
#define	_PUCCH_ConfigDedicated_v1130_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeInteger.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PUCCH_ConfigDedicated_v1130__n1PUCCH_AN_CS_v1130_PR {
	PUCCH_ConfigDedicated_v1130__n1PUCCH_AN_CS_v1130_PR_NOTHING,	/* No components present */
	PUCCH_ConfigDedicated_v1130__n1PUCCH_AN_CS_v1130_PR_release,
	PUCCH_ConfigDedicated_v1130__n1PUCCH_AN_CS_v1130_PR_setup
} PUCCH_ConfigDedicated_v1130__n1PUCCH_AN_CS_v1130_PR;
typedef enum PUCCH_ConfigDedicated_v1130__nPUCCH_Param_r11_PR {
	PUCCH_ConfigDedicated_v1130__nPUCCH_Param_r11_PR_NOTHING,	/* No components present */
	PUCCH_ConfigDedicated_v1130__nPUCCH_Param_r11_PR_release,
	PUCCH_ConfigDedicated_v1130__nPUCCH_Param_r11_PR_setup
} PUCCH_ConfigDedicated_v1130__nPUCCH_Param_r11_PR;

/* PUCCH-ConfigDedicated-v1130 */
typedef struct PUCCH_ConfigDedicated_v1130 {
	struct PUCCH_ConfigDedicated_v1130__n1PUCCH_AN_CS_v1130 {
		PUCCH_ConfigDedicated_v1130__n1PUCCH_AN_CS_v1130_PR present;
		union PUCCH_ConfigDedicated_v1130__n1PUCCH_AN_CS_v1130_u {
			NULL_t	 release;
			struct PUCCH_ConfigDedicated_v1130__n1PUCCH_AN_CS_v1130__setup {
				struct PUCCH_ConfigDedicated_v1130__n1PUCCH_AN_CS_v1130__setup__n1PUCCH_AN_CS_ListP1_r11 {
					A_SEQUENCE_OF(long) list;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} n1PUCCH_AN_CS_ListP1_r11;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *n1PUCCH_AN_CS_v1130;
	struct PUCCH_ConfigDedicated_v1130__nPUCCH_Param_r11 {
		PUCCH_ConfigDedicated_v1130__nPUCCH_Param_r11_PR present;
		union PUCCH_ConfigDedicated_v1130__nPUCCH_Param_r11_u {
			NULL_t	 release;
			struct PUCCH_ConfigDedicated_v1130__nPUCCH_Param_r11__setup {
				long	 nPUCCH_Identity_r11;
				long	 n1PUCCH_AN_r11;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nPUCCH_Param_r11;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PUCCH_ConfigDedicated_v1130_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PUCCH_ConfigDedicated_v1130;

#ifdef __cplusplus
}
#endif

#endif	/* _PUCCH_ConfigDedicated_v1130_H_ */
#include <asn_internal.h>
