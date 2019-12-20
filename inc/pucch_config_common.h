/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pucch_config_common.h - this is the header file for message: PUCCH-ConfigCommon
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _PUCCH_CONFIG_COMMON_H_
#define _PUCCH_CONFIG_COMMON_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	PUCCH_CONFIGCOMMON_PUCCH_GROUPHOPPING_NEITHER,
	PUCCH_CONFIGCOMMON_PUCCH_GROUPHOPPING_ENABLE,
	PUCCH_CONFIGCOMMON_PUCCH_GROUPHOPPING_DISABLE,
	PUCCH_CONFIGCOMMON_PUCCH_GROUPHOPPING_max = 0x7FFFFFFF
}PUCCH_ConfigCommon_pucch_GroupHopping_e;


typedef struct {
	BOOLEAN                                                            pucch_ResourceCommon_exist;
	uint32                                                             pucch_ResourceCommon;
	PUCCH_ConfigCommon_pucch_GroupHopping_e                            pucch_GroupHopping;
	BOOLEAN                                                            hoppingId_exist;
	uint32                                                             hoppingId;
	BOOLEAN                                                            p0_nominal_exist;
	int32                                                              p0_nominal;
	/* Extension marker start. */
}PUCCH_ConfigCommon_t;


extern void EncodePUCCH_ConfigCommon(
	PUCCH_ConfigCommon_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodePUCCH_ConfigCommon(
	PUCCH_ConfigCommon_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
