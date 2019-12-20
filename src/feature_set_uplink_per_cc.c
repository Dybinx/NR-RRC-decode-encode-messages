/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * feature_set_uplink_per_cc.c - codec the message of FeatureSetUplinkPerCC
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "feature_set_uplink_per_cc.h"


void EncodeFeatureSetUplinkPerCC_channelBW_90mhz(
	FeatureSetUplinkPerCC_channelBW_90mhz_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeFeatureSetUplinkPerCC_mimo_CB_PUSCH(
	FeatureSetUplinkPerCC_mimo_CB_PUSCH_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->maxNumberMIMO_LayersCB_PUSCH_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->maxNumberMIMO_LayersCB_PUSCH_exist == TRUE)
	{
		EncodeMIMO_LayersUL(i_encoded_field->maxNumberMIMO_LayersCB_PUSCH, buff, bits_iter, asn_error);
	}

	PutBits(buff, i_encoded_field->maxNumberSRS_ResourcePerSet - 1, 1, bits_iter);

}

void EncodeFeatureSetUplinkPerCC_simultaneousTxSUL_NonSUL(
	FeatureSetUplinkPerCC_simultaneousTxSUL_NonSUL_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeFeatureSetUplinkPerCC(
	FeatureSetUplinkPerCC_t *i_encoded_field, 
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

	if(i_encoded_field->mimo_CB_PUSCH_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->maxNumberMIMO_LayersNonCB_PUSCH_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->supportedModulationOrderUL_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->simultaneousTxSUL_NonSUL_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodeSubcarrierSpacing(i_encoded_field->supportedSubcarrierSpacingUL, buff, bits_iter, asn_error);

	EncodeSupportedBandwidth(&i_encoded_field->supportedBandwidthUL, buff, bits_iter, asn_error);

	if(i_encoded_field->channelBW_90mhz_exist == TRUE)
	{
		EncodeFeatureSetUplinkPerCC_channelBW_90mhz(i_encoded_field->channelBW_90mhz, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->mimo_CB_PUSCH_exist == TRUE)
	{
		EncodeFeatureSetUplinkPerCC_mimo_CB_PUSCH(&i_encoded_field->mimo_CB_PUSCH, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->maxNumberMIMO_LayersNonCB_PUSCH_exist == TRUE)
	{
		EncodeMIMO_LayersUL(i_encoded_field->maxNumberMIMO_LayersNonCB_PUSCH, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->supportedModulationOrderUL_exist == TRUE)
	{
		EncodeModulationOrder(i_encoded_field->supportedModulationOrderUL, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->simultaneousTxSUL_NonSUL_exist == TRUE)
	{
		EncodeFeatureSetUplinkPerCC_simultaneousTxSUL_NonSUL(i_encoded_field->simultaneousTxSUL_NonSUL, buff, bits_iter, asn_error);
	}

}

void DecodeFeatureSetUplinkPerCC_channelBW_90mhz(
	FeatureSetUplinkPerCC_channelBW_90mhz_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeFeatureSetUplinkPerCC_mimo_CB_PUSCH(
	FeatureSetUplinkPerCC_mimo_CB_PUSCH_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->maxNumberMIMO_LayersCB_PUSCH_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->maxNumberMIMO_LayersCB_PUSCH_exist == TRUE)
	{
		DecodeMIMO_LayersUL(&o_decoded_field->maxNumberMIMO_LayersCB_PUSCH, buff, bits_iter, asn_error);
	}

	o_decoded_field->maxNumberSRS_ResourcePerSet = Get_bits(buff, 1, bits_iter) + 1;
}

void DecodeFeatureSetUplinkPerCC_simultaneousTxSUL_NonSUL(
	FeatureSetUplinkPerCC_simultaneousTxSUL_NonSUL_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeFeatureSetUplinkPerCC(
	FeatureSetUplinkPerCC_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->channelBW_90mhz_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->mimo_CB_PUSCH_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->maxNumberMIMO_LayersNonCB_PUSCH_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->supportedModulationOrderUL_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->simultaneousTxSUL_NonSUL_exist = Get_bits(buff, 1, bits_iter);
	DecodeSubcarrierSpacing(&o_decoded_field->supportedSubcarrierSpacingUL, buff, bits_iter, asn_error);
	DecodeSupportedBandwidth(&o_decoded_field->supportedBandwidthUL, buff, bits_iter, asn_error);
	if(o_decoded_field->channelBW_90mhz_exist == TRUE)
	{
		DecodeFeatureSetUplinkPerCC_channelBW_90mhz(&o_decoded_field->channelBW_90mhz, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->mimo_CB_PUSCH_exist == TRUE)
	{
		DecodeFeatureSetUplinkPerCC_mimo_CB_PUSCH(&o_decoded_field->mimo_CB_PUSCH, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->maxNumberMIMO_LayersNonCB_PUSCH_exist == TRUE)
	{
		DecodeMIMO_LayersUL(&o_decoded_field->maxNumberMIMO_LayersNonCB_PUSCH, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->supportedModulationOrderUL_exist == TRUE)
	{
		DecodeModulationOrder(&o_decoded_field->supportedModulationOrderUL, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->simultaneousTxSUL_NonSUL_exist == TRUE)
	{
		DecodeFeatureSetUplinkPerCC_simultaneousTxSUL_NonSUL(&o_decoded_field->simultaneousTxSUL_NonSUL, buff, bits_iter, asn_error);
	}

}

