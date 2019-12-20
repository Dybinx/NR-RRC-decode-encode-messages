/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pdcch_config_common.c - codec the message of PDCCH-ConfigCommon
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "pdcch_config_common.h"


void EncodePDCCH_ConfigCommon_commonSearchSpace(
	PDCCH_ConfigCommon_commonSearchSpace_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 2, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeSearchSpace(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodePDCCH_ConfigCommon(
	PDCCH_ConfigCommon_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->controlResourceSetZero_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->commonControlResourceSet_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->searchSpaceZero_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->commonSearchSpace_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->searchSpaceSIB1_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->searchSpaceOtherSystemInformation_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->pagingSearchSpace_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->ra_SearchSpace_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->controlResourceSetZero_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->controlResourceSetZero, 4, bits_iter);
	}

	if(i_encoded_field->commonControlResourceSet_exist == TRUE)
	{
		EncodeControlResourceSet(&i_encoded_field->commonControlResourceSet, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->searchSpaceZero_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->searchSpaceZero, 4, bits_iter);
	}

	if(i_encoded_field->commonSearchSpace_exist == TRUE)
	{
		EncodePDCCH_ConfigCommon_commonSearchSpace(&i_encoded_field->commonSearchSpace, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->searchSpaceSIB1_exist == TRUE)
	{
		EncodeSearchSpaceId(&i_encoded_field->searchSpaceSIB1, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->searchSpaceOtherSystemInformation_exist == TRUE)
	{
		EncodeSearchSpaceId(&i_encoded_field->searchSpaceOtherSystemInformation, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->pagingSearchSpace_exist == TRUE)
	{
		EncodeSearchSpaceId(&i_encoded_field->pagingSearchSpace, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->ra_SearchSpace_exist == TRUE)
	{
		EncodeSearchSpaceId(&i_encoded_field->ra_SearchSpace, buff, bits_iter, asn_error);
	}

}

void DecodePDCCH_ConfigCommon_commonSearchSpace(
	PDCCH_ConfigCommon_commonSearchSpace_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 2, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeSearchSpace(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodePDCCH_ConfigCommon(
	PDCCH_ConfigCommon_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->controlResourceSetZero_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->commonControlResourceSet_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->searchSpaceZero_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->commonSearchSpace_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->searchSpaceSIB1_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->searchSpaceOtherSystemInformation_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->pagingSearchSpace_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->ra_SearchSpace_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->controlResourceSetZero_exist == TRUE)
	{
		o_decoded_field->controlResourceSetZero = Get_bits(buff, 4, bits_iter);
	}

	if(o_decoded_field->commonControlResourceSet_exist == TRUE)
	{
		DecodeControlResourceSet(&o_decoded_field->commonControlResourceSet, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->searchSpaceZero_exist == TRUE)
	{
		o_decoded_field->searchSpaceZero = Get_bits(buff, 4, bits_iter);
	}

	if(o_decoded_field->commonSearchSpace_exist == TRUE)
	{
		DecodePDCCH_ConfigCommon_commonSearchSpace(&o_decoded_field->commonSearchSpace, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->searchSpaceSIB1_exist == TRUE)
	{
		DecodeSearchSpaceId(&o_decoded_field->searchSpaceSIB1, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->searchSpaceOtherSystemInformation_exist == TRUE)
	{
		DecodeSearchSpaceId(&o_decoded_field->searchSpaceOtherSystemInformation, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->pagingSearchSpace_exist == TRUE)
	{
		DecodeSearchSpaceId(&o_decoded_field->pagingSearchSpace, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->ra_SearchSpace_exist == TRUE)
	{
		DecodeSearchSpaceId(&o_decoded_field->ra_SearchSpace, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

