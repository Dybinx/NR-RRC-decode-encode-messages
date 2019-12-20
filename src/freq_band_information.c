/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * freq_band_information.c - codec the message of FreqBandInformation
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "freq_band_information.h"


void EncodeFreqBandInformation(
	FreqBandInformation_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case FREQBANDINFORMATION_BANDINFORMATIONEUTRA:
		EncodeFreqBandInformationEUTRA(&i_encoded_field->a.bandInformationEUTRA, buff, bits_iter, asn_error);
		break;

	case FREQBANDINFORMATION_BANDINFORMATIONNR:
		EncodeFreqBandInformationNR(&i_encoded_field->a.bandInformationNR, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void DecodeFreqBandInformation(
	FreqBandInformation_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case FREQBANDINFORMATION_BANDINFORMATIONEUTRA:
		DecodeFreqBandInformationEUTRA(&o_decoded_field->a.bandInformationEUTRA, buff, bits_iter, asn_error);
		break;

	case FREQBANDINFORMATION_BANDINFORMATIONNR:
		DecodeFreqBandInformationNR(&o_decoded_field->a.bandInformationNR, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

