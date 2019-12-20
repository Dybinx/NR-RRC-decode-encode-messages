/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * mac_parameters_common.h - this is the header file for message: MAC-ParametersCommon
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _MAC_PARAMETERS_COMMON_H_
#define _MAC_PARAMETERS_COMMON_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	MAC_PARAMETERSCOMMON_LCP_RESTRICTION_SUPPORTED,
	MAC_PARAMETERSCOMMON_LCP_RESTRICTION_max = 0x7FFFFFFF
}MAC_ParametersCommon_lcp_Restriction_e;


typedef enum {
	MAC_PARAMETERSCOMMON_PUCCH_SPATIALRELINFOMAC_CE_SUPPORTED,
	MAC_PARAMETERSCOMMON_PUCCH_SPATIALRELINFOMAC_CE_max = 0x7FFFFFFF
}MAC_ParametersCommon_pucch_SpatialRelInfoMAC_CE_e;


typedef struct {
	BOOLEAN                                                            lcp_Restriction_exist;
	MAC_ParametersCommon_lcp_Restriction_e                             lcp_Restriction;
	BOOLEAN                                                            pucch_SpatialRelInfoMAC_CE_exist;
	MAC_ParametersCommon_pucch_SpatialRelInfoMAC_CE_e                  pucch_SpatialRelInfoMAC_CE;
	/* Extension marker start. */
}MAC_ParametersCommon_t;


extern void EncodeMAC_ParametersCommon(
	MAC_ParametersCommon_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeMAC_ParametersCommon(
	MAC_ParametersCommon_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
