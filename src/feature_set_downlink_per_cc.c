/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * feature_set_downlink_per_cc.c - codec the message of FeatureSetDownlinkPerCC
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "feature_set_downlink_per_cc.h"


void EncodeFeatureSetDownlinkPerCC_channelBW_90mhz(
	FeatureSetDownlinkPerCC_channelBW_90mhz_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeFeatureSetDownlinkPerCC(
	FeatureSetDownlinkPerCC_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->channelBW_90mhz_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->maxNumberMIMO_LayersPDSCH_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->supportedModulationOrderDL_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodeSubcarrierSpacing(i_encoded_field->supportedSubcarrierSpacingDL, buff, bits_iter, asn_error);

	EncodeSupportedBandwidth(&i_encoded_field->supportedBandwidthDL, buff, bits_iter, asn_error);

	if(i_encoded_field->channelBW_90mhz_exist == TRUE)
	{
		EncodeFeatureSetDownlinkPerCC_channelBW_90mhz(i_encoded_field->channelBW_90mhz, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->maxNumberMIMO_LayersPDSCH_exist == TRUE)
	{
		EncodeMIMO_LayersDL(i_encoded_field->maxNumberMIMO_LayersPDSCH, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->supportedModulationOrderDL_exist == TRUE)
	{
		EncodeModulationOrder(i_encoded_field->supportedModulationOrderDL, buff, bits_iter, asn_error);
	}

}

void DecodeFeatureSetDownlinkPerCC_channelBW_90mhz(
	FeatureSetDownlinkPerCC_channelBW_90mhz_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeFeatureSetDownlinkPerCC(
	FeatureSetDownlinkPerCC_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->channelBW_90mhz_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->maxNumberMIMO_LayersPDSCH_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->supportedModulationOrderDL_exist = Get_bits(buff, 1, bits_iter);
	DecodeSubcarrierSpacing(&o_decoded_field->supportedSubcarrierSpacingDL, buff, bits_iter, asn_error);
	DecodeSupportedBandwidth(&o_decoded_field->supportedBandwidthDL, buff, bits_iter, asn_error);
	if(o_decoded_field->channelBW_90mhz_exist == TRUE)
	{
		DecodeFeatureSetDownlinkPerCC_channelBW_90mhz(&o_decoded_field->channelBW_90mhz, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->maxNumberMIMO_LayersPDSCH_exist == TRUE)
	{
		DecodeMIMO_LayersDL(&o_decoded_field->maxNumberMIMO_LayersPDSCH, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->supportedModulationOrderDL_exist == TRUE)
	{
		DecodeModulationOrder(&o_decoded_field->supportedModulationOrderDL, buff, bits_iter, asn_error);
	}

}

