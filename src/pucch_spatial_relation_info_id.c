/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pucch_spatial_relation_info_id.c - codec the message of PUCCH-SpatialRelationInfoId
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "pucch_spatial_relation_info_id.h"


void EncodePUCCH_SpatialRelationInfoId(
	PUCCH_SpatialRelationInfoId_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->value - 1, 3, bits_iter);
}

void DecodePUCCH_SpatialRelationInfoId(
	PUCCH_SpatialRelationInfoId_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->value = Get_bits(buff, 3, bits_iter) + 1;
}

