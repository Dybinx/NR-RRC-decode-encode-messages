/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * tdd_ul_dl_config_common.h - this is the header file for message: TDD-UL-DL-ConfigCommon
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _TDD_UL_DL_CONFIG_COMMON_H_
#define _TDD_UL_DL_CONFIG_COMMON_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "subcarrier_spacing.h"
#include "tdd_ul_dl_pattern.h"
#include "tdd_ul_dl_pattern.h"


typedef struct {
	SubcarrierSpacing_e                                                referenceSubcarrierSpacing;
	TDD_UL_DL_Pattern_t                                                pattern1;
	BOOLEAN                                                            pattern2_exist;
	TDD_UL_DL_Pattern_t                                                pattern2;
	/* Extension marker start. */
}TDD_UL_DL_ConfigCommon_t;


extern void EncodeTDD_UL_DL_ConfigCommon(
	TDD_UL_DL_ConfigCommon_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeTDD_UL_DL_ConfigCommon(
	TDD_UL_DL_ConfigCommon_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
