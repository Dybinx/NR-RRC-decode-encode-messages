/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * meas_gap_sharing_config.c - codec the message of MeasGapSharingConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "meas_gap_sharing_config.h"


void EncodeMeasGapSharingConfig_release(
	MeasGapSharingConfig_release_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeMeasGapSharingConfig_gapSharingFR2(
	MeasGapSharingConfig_gapSharingFR2_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case MEASGAPSHARINGCONFIG_GAPSHARINGFR2_RELEASE:
		EncodeMeasGapSharingConfig_release(&i_encoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case MEASGAPSHARINGCONFIG_GAPSHARINGFR2_SETUP:
		EncodeMeasGapSharingScheme(i_encoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeMeasGapSharingConfig(
	MeasGapSharingConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->gapSharingFR2_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->gapSharingFR2_exist == TRUE)
	{
		EncodeMeasGapSharingConfig_gapSharingFR2(&i_encoded_field->gapSharingFR2, buff, bits_iter, asn_error);
	}

}

void DecodeMeasGapSharingConfig_release(
	MeasGapSharingConfig_release_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeMeasGapSharingConfig_gapSharingFR2(
	MeasGapSharingConfig_gapSharingFR2_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case MEASGAPSHARINGCONFIG_GAPSHARINGFR2_RELEASE:
		DecodeMeasGapSharingConfig_release(&o_decoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case MEASGAPSHARINGCONFIG_GAPSHARINGFR2_SETUP:
		DecodeMeasGapSharingScheme(&o_decoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeMeasGapSharingConfig(
	MeasGapSharingConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->gapSharingFR2_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->gapSharingFR2_exist == TRUE)
	{
		DecodeMeasGapSharingConfig_gapSharingFR2(&o_decoded_field->gapSharingFR2, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

