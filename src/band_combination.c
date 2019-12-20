/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * band_combination.c - codec the message of BandCombination
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "band_combination.h"


void EncodeBandCombination_bandList(
	BandCombination_bandList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 5, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeBandParameters(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeBandCombination_supportedBandwidthCombinationSet(
	BandCombination_supportedBandwidthCombinationSet_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/* set the length field. */
	PutBits(buff, i_encoded_field->bits_num - 1, 5, bits_iter);
	/* set the contents field. */
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeBandCombination(
	BandCombination_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->ca_ParametersEUTRA_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->ca_ParametersNR_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->mrdc_Parameters_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->supportedBandwidthCombinationSet_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodeBandCombination_bandList(&i_encoded_field->bandList, buff, bits_iter, asn_error);

	EncodeFeatureSetCombinationId(&i_encoded_field->featureSetCombination, buff, bits_iter, asn_error);

	if(i_encoded_field->ca_ParametersEUTRA_exist == TRUE)
	{
		EncodeCA_ParametersEUTRA(&i_encoded_field->ca_ParametersEUTRA, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->ca_ParametersNR_exist == TRUE)
	{
		EncodeCA_ParametersNR(&i_encoded_field->ca_ParametersNR, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->mrdc_Parameters_exist == TRUE)
	{
		EncodeMRDC_Parameters(&i_encoded_field->mrdc_Parameters, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->supportedBandwidthCombinationSet_exist == TRUE)
	{
		EncodeBandCombination_supportedBandwidthCombinationSet(&i_encoded_field->supportedBandwidthCombinationSet, buff, bits_iter, asn_error);
	}

}

void DecodeBandCombination_bandList(
	BandCombination_bandList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 5, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeBandParameters(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeBandCombination_supportedBandwidthCombinationSet(
	BandCombination_supportedBandwidthCombinationSet_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;
	uint32    octets_num = 0;
	uint32    i = 0;

	bits_num = Get_bits(buff, 5, bits_iter) + 1;
	o_decoded_field->bits_num = bits_num;
	octets_num = bits_num / 8 + (bits_num % 8 == 0 ? 0 : 1);

	if(bits_num % 8 != 0)
	{
		o_decoded_field->value[0] = Get_bits(buff, bits_num % 8, bits_iter);
		i = 1;
	}

	for(; i < octets_num; i++)
	{
		o_decoded_field->value[i] = Get_bits(buff, 8, bits_iter);
	}
}

void DecodeBandCombination(
	BandCombination_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->ca_ParametersEUTRA_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->ca_ParametersNR_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->mrdc_Parameters_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->supportedBandwidthCombinationSet_exist = Get_bits(buff, 1, bits_iter);
	DecodeBandCombination_bandList(&o_decoded_field->bandList, buff, bits_iter, asn_error);
	DecodeFeatureSetCombinationId(&o_decoded_field->featureSetCombination, buff, bits_iter, asn_error);
	if(o_decoded_field->ca_ParametersEUTRA_exist == TRUE)
	{
		DecodeCA_ParametersEUTRA(&o_decoded_field->ca_ParametersEUTRA, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->ca_ParametersNR_exist == TRUE)
	{
		DecodeCA_ParametersNR(&o_decoded_field->ca_ParametersNR, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->mrdc_Parameters_exist == TRUE)
	{
		DecodeMRDC_Parameters(&o_decoded_field->mrdc_Parameters, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->supportedBandwidthCombinationSet_exist == TRUE)
	{
		DecodeBandCombination_supportedBandwidthCombinationSet(&o_decoded_field->supportedBandwidthCombinationSet, buff, bits_iter, asn_error);
	}

}

