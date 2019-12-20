/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pucch_spatial_relation_info_id.h - this is the header file for message: PUCCH-SpatialRelationInfoId
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _PUCCH_SPATIAL_RELATION_INFO_ID_H_
#define _PUCCH_SPATIAL_RELATION_INFO_ID_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef struct {
	uint32                                                             value;
}PUCCH_SpatialRelationInfoId_t;
extern void EncodePUCCH_SpatialRelationInfoId(
	PUCCH_SpatialRelationInfoId_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodePUCCH_SpatialRelationInfoId(
	PUCCH_SpatialRelationInfoId_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
