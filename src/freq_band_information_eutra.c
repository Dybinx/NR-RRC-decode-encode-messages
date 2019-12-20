/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * freq_band_information_eutra.c - codec the message of FreqBandInformationEUTRA
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "freq_band_information_eutra.h"


void EncodeFreqBandInformationEUTRA(
	FreqBandInformationEUTRA_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->ca_BandwidthClassDL_EUTRA_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->ca_BandwidthClassUL_EUTRA_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodeFreqBandIndicatorEUTRA(&i_encoded_field->bandEUTRA, buff, bits_iter, asn_error);

	if(i_encoded_field->ca_BandwidthClassDL_EUTRA_exist == TRUE)
	{
		EncodeCA_BandwidthClassEUTRA(i_encoded_field->ca_BandwidthClassDL_EUTRA, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->ca_BandwidthClassUL_EUTRA_exist == TRUE)
	{
		EncodeCA_BandwidthClassEUTRA(i_encoded_field->ca_BandwidthClassUL_EUTRA, buff, bits_iter, asn_error);
	}

}

void DecodeFreqBandInformationEUTRA(
	FreqBandInformationEUTRA_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->ca_BandwidthClassDL_EUTRA_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->ca_BandwidthClassUL_EUTRA_exist = Get_bits(buff, 1, bits_iter);
	DecodeFreqBandIndicatorEUTRA(&o_decoded_field->bandEUTRA, buff, bits_iter, asn_error);
	if(o_decoded_field->ca_BandwidthClassDL_EUTRA_exist == TRUE)
	{
		DecodeCA_BandwidthClassEUTRA(&o_decoded_field->ca_BandwidthClassDL_EUTRA, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->ca_BandwidthClassUL_EUTRA_exist == TRUE)
	{
		DecodeCA_BandwidthClassEUTRA(&o_decoded_field->ca_BandwidthClassUL_EUTRA, buff, bits_iter, asn_error);
	}

}

