/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * frequency_info_dl.c - codec the message of FrequencyInfoDL
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "frequency_info_dl.h"


void EncodeFrequencyInfoDL_scs_SpecificCarrierList(
	FrequencyInfoDL_scs_SpecificCarrierList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 3, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeSCS_SpecificCarrier(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeFrequencyInfoDL(
	FrequencyInfoDL_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->absoluteFrequencySSB_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->absoluteFrequencySSB_exist == TRUE)
	{
		EncodeARFCN_ValueNR(&i_encoded_field->absoluteFrequencySSB, buff, bits_iter, asn_error);
	}

	EncodeMultiFrequencyBandListNR(&i_encoded_field->frequencyBandList, buff, bits_iter, asn_error);

	EncodeARFCN_ValueNR(&i_encoded_field->absoluteFrequencyPointA, buff, bits_iter, asn_error);

	EncodeFrequencyInfoDL_scs_SpecificCarrierList(&i_encoded_field->scs_SpecificCarrierList, buff, bits_iter, asn_error);

}

void DecodeFrequencyInfoDL_scs_SpecificCarrierList(
	FrequencyInfoDL_scs_SpecificCarrierList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 3, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeSCS_SpecificCarrier(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeFrequencyInfoDL(
	FrequencyInfoDL_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->absoluteFrequencySSB_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->absoluteFrequencySSB_exist == TRUE)
	{
		DecodeARFCN_ValueNR(&o_decoded_field->absoluteFrequencySSB, buff, bits_iter, asn_error);
	}

	DecodeMultiFrequencyBandListNR(&o_decoded_field->frequencyBandList, buff, bits_iter, asn_error);
	DecodeARFCN_ValueNR(&o_decoded_field->absoluteFrequencyPointA, buff, bits_iter, asn_error);
	DecodeFrequencyInfoDL_scs_SpecificCarrierList(&o_decoded_field->scs_SpecificCarrierList, buff, bits_iter, asn_error);
	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

