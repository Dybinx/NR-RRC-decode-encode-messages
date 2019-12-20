/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * band_parameters.c - codec the message of BandParameters
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "band_parameters.h"


void EncodeBandParameters_eutra(
	BandParameters_eutra_t *i_encoded_field, 
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

void EncodeBandParameters_nr(
	BandParameters_nr_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->ca_BandwidthClassDL_NR_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->ca_BandwidthClassUL_NR_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodeFreqBandIndicatorNR(&i_encoded_field->bandNR, buff, bits_iter, asn_error);

	if(i_encoded_field->ca_BandwidthClassDL_NR_exist == TRUE)
	{
		EncodeCA_BandwidthClassNR(i_encoded_field->ca_BandwidthClassDL_NR, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->ca_BandwidthClassUL_NR_exist == TRUE)
	{
		EncodeCA_BandwidthClassNR(i_encoded_field->ca_BandwidthClassUL_NR, buff, bits_iter, asn_error);
	}

}

void EncodeBandParameters(
	BandParameters_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case BANDPARAMETERS_EUTRA:
		EncodeBandParameters_eutra(&i_encoded_field->a.eutra, buff, bits_iter, asn_error);
		break;

	case BANDPARAMETERS_NR:
		EncodeBandParameters_nr(&i_encoded_field->a.nr, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void DecodeBandParameters_eutra(
	BandParameters_eutra_t *o_decoded_field, 
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

void DecodeBandParameters_nr(
	BandParameters_nr_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->ca_BandwidthClassDL_NR_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->ca_BandwidthClassUL_NR_exist = Get_bits(buff, 1, bits_iter);
	DecodeFreqBandIndicatorNR(&o_decoded_field->bandNR, buff, bits_iter, asn_error);
	if(o_decoded_field->ca_BandwidthClassDL_NR_exist == TRUE)
	{
		DecodeCA_BandwidthClassNR(&o_decoded_field->ca_BandwidthClassDL_NR, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->ca_BandwidthClassUL_NR_exist == TRUE)
	{
		DecodeCA_BandwidthClassNR(&o_decoded_field->ca_BandwidthClassUL_NR, buff, bits_iter, asn_error);
	}

}

void DecodeBandParameters(
	BandParameters_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case BANDPARAMETERS_EUTRA:
		DecodeBandParameters_eutra(&o_decoded_field->a.eutra, buff, bits_iter, asn_error);
		break;

	case BANDPARAMETERS_NR:
		DecodeBandParameters_nr(&o_decoded_field->a.nr, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

