/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * freq_band_information_nr.c - codec the message of FreqBandInformationNR
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "freq_band_information_nr.h"


void EncodeFreqBandInformationNR(
	FreqBandInformationNR_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->maxBandwidthRequestedDL_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->maxBandwidthRequestedUL_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->maxCarriersRequestedDL_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->maxCarriersRequestedUL_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodeFreqBandIndicatorNR(&i_encoded_field->bandNR, buff, bits_iter, asn_error);

	if(i_encoded_field->maxBandwidthRequestedDL_exist == TRUE)
	{
		EncodeAggregatedBandwith(i_encoded_field->maxBandwidthRequestedDL, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->maxBandwidthRequestedUL_exist == TRUE)
	{
		EncodeAggregatedBandwith(i_encoded_field->maxBandwidthRequestedUL, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->maxCarriersRequestedDL_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->maxCarriersRequestedDL - 1, 5, bits_iter);
	}

	if(i_encoded_field->maxCarriersRequestedUL_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->maxCarriersRequestedUL - 1, 5, bits_iter);
	}

}

void DecodeFreqBandInformationNR(
	FreqBandInformationNR_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->maxBandwidthRequestedDL_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->maxBandwidthRequestedUL_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->maxCarriersRequestedDL_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->maxCarriersRequestedUL_exist = Get_bits(buff, 1, bits_iter);
	DecodeFreqBandIndicatorNR(&o_decoded_field->bandNR, buff, bits_iter, asn_error);
	if(o_decoded_field->maxBandwidthRequestedDL_exist == TRUE)
	{
		DecodeAggregatedBandwith(&o_decoded_field->maxBandwidthRequestedDL, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->maxBandwidthRequestedUL_exist == TRUE)
	{
		DecodeAggregatedBandwith(&o_decoded_field->maxBandwidthRequestedUL, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->maxCarriersRequestedDL_exist == TRUE)
	{
		o_decoded_field->maxCarriersRequestedDL = Get_bits(buff, 5, bits_iter) + 1;
	}

	if(o_decoded_field->maxCarriersRequestedUL_exist == TRUE)
	{
		o_decoded_field->maxCarriersRequestedUL = Get_bits(buff, 5, bits_iter) + 1;
	}

}

