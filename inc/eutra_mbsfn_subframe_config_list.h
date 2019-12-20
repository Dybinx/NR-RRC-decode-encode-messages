/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * eutra_mbsfn_subframe_config_list.h - this is the header file for message: EUTRA-MBSFN-SubframeConfigList
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _EUTRA_MBSFN_SUBFRAME_CONFIG_LIST_H_
#define _EUTRA_MBSFN_SUBFRAME_CONFIG_LIST_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "eutra_mbsfn_subframe_config.h"


typedef struct {
	uint32                                                             length;
	EUTRA_MBSFN_SubframeConfig_t                                       elm[maxMBSFN_Allocations];
}EUTRA_MBSFN_SubframeConfigList_t;


extern void EncodeEUTRA_MBSFN_SubframeConfigList(
	EUTRA_MBSFN_SubframeConfigList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeEUTRA_MBSFN_SubframeConfigList(
	EUTRA_MBSFN_SubframeConfigList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
