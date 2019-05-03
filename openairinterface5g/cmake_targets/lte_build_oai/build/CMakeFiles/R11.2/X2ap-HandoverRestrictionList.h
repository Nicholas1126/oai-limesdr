/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/mnt/sda/sources/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R11.2/X2AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_X2ap_HandoverRestrictionList_H_
#define	_X2ap_HandoverRestrictionList_H_


#include <asn_application.h>

/* Including external dependencies */
#include "X2ap-PLMN-Identity.h"
#include "X2ap-ForbiddenInterRATs.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct X2ap_EPLMNs;
struct X2ap_ForbiddenTAs;
struct X2ap_ForbiddenLAs;
struct X2ap_IE_Extensions;

/* X2ap-HandoverRestrictionList */
typedef struct X2ap_HandoverRestrictionList {
	X2ap_PLMN_Identity_t	 servingPLMN;
	struct X2ap_EPLMNs	*equivalentPLMNs	/* OPTIONAL */;
	struct X2ap_ForbiddenTAs	*forbiddenTAs	/* OPTIONAL */;
	struct X2ap_ForbiddenLAs	*forbiddenLAs	/* OPTIONAL */;
	X2ap_ForbiddenInterRATs_t	*forbiddenInterRATs	/* OPTIONAL */;
	struct X2ap_IE_Extensions	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2ap_HandoverRestrictionList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2ap_HandoverRestrictionList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "X2ap-EPLMNs.h"
#include "X2ap-ForbiddenTAs.h"
#include "X2ap-ForbiddenLAs.h"
#include "X2ap-IE-Extensions.h"

#endif	/* _X2ap_HandoverRestrictionList_H_ */
#include <asn_internal.h>
