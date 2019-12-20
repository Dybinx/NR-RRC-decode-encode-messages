/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * meas_gap_config.c - codec the message of MeasGapConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "meas_gap_config.h"


void EncodeMeasGapConfig_release(
	MeasGapConfig_release_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeMeasGapConfig_gapFR2(
	MeasGapConfig_gapFR2_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case MEASGAPCONFIG_GAPFR2_RELEASE:
		EncodeMeasGapConfig_release(&i_encoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case MEASGAPCONFIG_GAPFR2_SETUP:
		EncodeGapConfig(&i_encoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeMeasGapConfig(
	MeasGapConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->gapFR2_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->gapFR2_exist == TRUE)
	{
		EncodeMeasGapConfig_gapFR2(&i_encoded_field->gapFR2, buff, bits_iter, asn_error);
	}

}

void DecodeMeasGapConfig_release(
	MeasGapConfig_release_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeMeasGapConfig_gapFR2(
	MeasGapConfig_gapFR2_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case MEASGAPCONFIG_GAPFR2_RELEASE:
		DecodeMeasGapConfig_release(&o_decoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case MEASGAPCONFIG_GAPFR2_SETUP:
		DecodeGapConfig(&o_decoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeMeasGapConfig(
	MeasGapConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->gapFR2_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->gapFR2_exist == TRUE)
	{
		DecodeMeasGapConfig_gapFR2(&o_decoded_field->gapFR2, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

