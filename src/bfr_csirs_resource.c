/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * bfr_csirs_resource.c - codec the message of BFR-CSIRS-Resource
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "bfr_csirs_resource.h"


void EncodeBFR_CSIRS_Resource_ra_OccasionList(
	BFR_CSIRS_Resource_ra_OccasionList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 6, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		PutBits(buff, i_encoded_field->elm[i], 9, bits_iter);
	}
}

void EncodeBFR_CSIRS_Resource(
	BFR_CSIRS_Resource_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->ra_OccasionList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->ra_PreambleIndex_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodeNZP_CSI_RS_ResourceId(&i_encoded_field->csi_RS, buff, bits_iter, asn_error);

	if(i_encoded_field->ra_OccasionList_exist == TRUE)
	{
		EncodeBFR_CSIRS_Resource_ra_OccasionList(&i_encoded_field->ra_OccasionList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->ra_PreambleIndex_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->ra_PreambleIndex, 6, bits_iter);
	}

}

void DecodeBFR_CSIRS_Resource_ra_OccasionList(
	BFR_CSIRS_Resource_ra_OccasionList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 6, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		o_decoded_field->elm[i] = Get_bits(buff, 9, bits_iter);
	}
}

void DecodeBFR_CSIRS_Resource(
	BFR_CSIRS_Resource_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->ra_OccasionList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->ra_PreambleIndex_exist = Get_bits(buff, 1, bits_iter);
	DecodeNZP_CSI_RS_ResourceId(&o_decoded_field->csi_RS, buff, bits_iter, asn_error);
	if(o_decoded_field->ra_OccasionList_exist == TRUE)
	{
		DecodeBFR_CSIRS_Resource_ra_OccasionList(&o_decoded_field->ra_OccasionList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->ra_PreambleIndex_exist == TRUE)
	{
		o_decoded_field->ra_PreambleIndex = Get_bits(buff, 6, bits_iter);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

