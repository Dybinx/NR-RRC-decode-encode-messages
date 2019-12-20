/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * ssb_config_mobility.c - codec the message of SSB-ConfigMobility
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "ssb_config_mobility.h"


void EncodeSSB_ConfigMobility_release(
	SSB_ConfigMobility_release_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeSSB_ConfigMobility_ssb_ToMeasure(
	SSB_ConfigMobility_ssb_ToMeasure_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case SSB_CONFIGMOBILITY_SSB_TOMEASURE_RELEASE:
		EncodeSSB_ConfigMobility_release(&i_encoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case SSB_CONFIGMOBILITY_SSB_TOMEASURE_SETUP:
		EncodeSSB_ToMeasure(&i_encoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeSSB_ConfigMobility(
	SSB_ConfigMobility_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->ssb_ToMeasure_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->ss_RSSI_Measurement_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->ssb_ToMeasure_exist == TRUE)
	{
		EncodeSSB_ConfigMobility_ssb_ToMeasure(&i_encoded_field->ssb_ToMeasure, buff, bits_iter, asn_error);
	}

	PutBits(buff, i_encoded_field->useServingCellTimingForSync, 1, bits_iter);

	if(i_encoded_field->ss_RSSI_Measurement_exist == TRUE)
	{
		EncodeSS_RSSI_Measurement(&i_encoded_field->ss_RSSI_Measurement, buff, bits_iter, asn_error);
	}

}

void DecodeSSB_ConfigMobility_release(
	SSB_ConfigMobility_release_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeSSB_ConfigMobility_ssb_ToMeasure(
	SSB_ConfigMobility_ssb_ToMeasure_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case SSB_CONFIGMOBILITY_SSB_TOMEASURE_RELEASE:
		DecodeSSB_ConfigMobility_release(&o_decoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case SSB_CONFIGMOBILITY_SSB_TOMEASURE_SETUP:
		DecodeSSB_ToMeasure(&o_decoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeSSB_ConfigMobility(
	SSB_ConfigMobility_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->ssb_ToMeasure_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->ss_RSSI_Measurement_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->ssb_ToMeasure_exist == TRUE)
	{
		DecodeSSB_ConfigMobility_ssb_ToMeasure(&o_decoded_field->ssb_ToMeasure, buff, bits_iter, asn_error);
	}

	o_decoded_field->useServingCellTimingForSync = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->ss_RSSI_Measurement_exist == TRUE)
	{
		DecodeSS_RSSI_Measurement(&o_decoded_field->ss_RSSI_Measurement, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

