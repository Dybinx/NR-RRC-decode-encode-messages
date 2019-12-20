/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * rf_parameters.c - codec the message of RF-Parameters
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "rf_parameters.h"


void EncodeRF_Parameters_supportedBandListNR(
	RF_Parameters_supportedBandListNR_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 10, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeBandNR(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeRF_Parameters(
	RF_Parameters_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->supportedBandCombinationList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->appliedFreqBandListFilter_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodeRF_Parameters_supportedBandListNR(&i_encoded_field->supportedBandListNR, buff, bits_iter, asn_error);

	if(i_encoded_field->supportedBandCombinationList_exist == TRUE)
	{
		EncodeBandCombinationList(&i_encoded_field->supportedBandCombinationList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->appliedFreqBandListFilter_exist == TRUE)
	{
		EncodeFreqBandList(&i_encoded_field->appliedFreqBandListFilter, buff, bits_iter, asn_error);
	}

}

void DecodeRF_Parameters_supportedBandListNR(
	RF_Parameters_supportedBandListNR_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 10, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeBandNR(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeRF_Parameters(
	RF_Parameters_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->supportedBandCombinationList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->appliedFreqBandListFilter_exist = Get_bits(buff, 1, bits_iter);
	DecodeRF_Parameters_supportedBandListNR(&o_decoded_field->supportedBandListNR, buff, bits_iter, asn_error);
	if(o_decoded_field->supportedBandCombinationList_exist == TRUE)
	{
		DecodeBandCombinationList(&o_decoded_field->supportedBandCombinationList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->appliedFreqBandListFilter_exist == TRUE)
	{
		DecodeFreqBandList(&o_decoded_field->appliedFreqBandListFilter, buff, bits_iter, asn_error);
	}

}

