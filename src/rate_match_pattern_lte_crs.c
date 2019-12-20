/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * rate_match_pattern_lte_crs.c - codec the message of RateMatchPatternLTE-CRS
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "rate_match_pattern_lte_crs.h"


void EncodeRateMatchPatternLTE_CRS_carrierBandwidthDL(
	RateMatchPatternLTE_CRS_carrierBandwidthDL_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 3, bits_iter);
}

void EncodeRateMatchPatternLTE_CRS_nrofCRS_Ports(
	RateMatchPatternLTE_CRS_nrofCRS_Ports_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeRateMatchPatternLTE_CRS_v_Shift(
	RateMatchPatternLTE_CRS_v_Shift_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 3, bits_iter);
}

void EncodeRateMatchPatternLTE_CRS(
	RateMatchPatternLTE_CRS_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->mbsfn_SubframeConfigList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	PutBits(buff, i_encoded_field->carrierFreqDL, 14, bits_iter);

	EncodeRateMatchPatternLTE_CRS_carrierBandwidthDL(i_encoded_field->carrierBandwidthDL, buff, bits_iter, asn_error);

	if(i_encoded_field->mbsfn_SubframeConfigList_exist == TRUE)
	{
		EncodeEUTRA_MBSFN_SubframeConfigList(&i_encoded_field->mbsfn_SubframeConfigList, buff, bits_iter, asn_error);
	}

	EncodeRateMatchPatternLTE_CRS_nrofCRS_Ports(i_encoded_field->nrofCRS_Ports, buff, bits_iter, asn_error);

	EncodeRateMatchPatternLTE_CRS_v_Shift(i_encoded_field->v_Shift, buff, bits_iter, asn_error);

}

void DecodeRateMatchPatternLTE_CRS_carrierBandwidthDL(
	RateMatchPatternLTE_CRS_carrierBandwidthDL_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 3, bits_iter);
}

void DecodeRateMatchPatternLTE_CRS_nrofCRS_Ports(
	RateMatchPatternLTE_CRS_nrofCRS_Ports_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeRateMatchPatternLTE_CRS_v_Shift(
	RateMatchPatternLTE_CRS_v_Shift_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 3, bits_iter);
}

void DecodeRateMatchPatternLTE_CRS(
	RateMatchPatternLTE_CRS_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->mbsfn_SubframeConfigList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->carrierFreqDL = Get_bits(buff, 14, bits_iter);
	DecodeRateMatchPatternLTE_CRS_carrierBandwidthDL(&o_decoded_field->carrierBandwidthDL, buff, bits_iter, asn_error);
	if(o_decoded_field->mbsfn_SubframeConfigList_exist == TRUE)
	{
		DecodeEUTRA_MBSFN_SubframeConfigList(&o_decoded_field->mbsfn_SubframeConfigList, buff, bits_iter, asn_error);
	}

	DecodeRateMatchPatternLTE_CRS_nrofCRS_Ports(&o_decoded_field->nrofCRS_Ports, buff, bits_iter, asn_error);
	DecodeRateMatchPatternLTE_CRS_v_Shift(&o_decoded_field->v_Shift, buff, bits_iter, asn_error);
}

