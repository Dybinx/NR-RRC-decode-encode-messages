/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * rlc_bearer_config.c - codec the message of RLC-BearerConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "rlc_bearer_config.h"


void EncodeRLC_BearerConfig_servedRadioBearer(
	RLC_BearerConfig_servedRadioBearer_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case RLC_BEARERCONFIG_SERVEDRADIOBEARER_SRB_IDENTITY:
		EncodeSRB_Identity(&i_encoded_field->a.srb_Identity, buff, bits_iter, asn_error);
		break;

	case RLC_BEARERCONFIG_SERVEDRADIOBEARER_DRB_IDENTITY:
		EncodeDRB_Identity(&i_encoded_field->a.drb_Identity, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeRLC_BearerConfig_reestablishRLC(
	RLC_BearerConfig_reestablishRLC_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeRLC_BearerConfig(
	RLC_BearerConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->servedRadioBearer_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->reestablishRLC_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->rlc_Config_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->mac_LogicalChannelConfig_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodeLogicalChannelIdentity(&i_encoded_field->logicalChannelIdentity, buff, bits_iter, asn_error);

	if(i_encoded_field->servedRadioBearer_exist == TRUE)
	{
		EncodeRLC_BearerConfig_servedRadioBearer(&i_encoded_field->servedRadioBearer, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->reestablishRLC_exist == TRUE)
	{
		EncodeRLC_BearerConfig_reestablishRLC(i_encoded_field->reestablishRLC, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->rlc_Config_exist == TRUE)
	{
		EncodeRLC_Config(&i_encoded_field->rlc_Config, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->mac_LogicalChannelConfig_exist == TRUE)
	{
		EncodeLogicalChannelConfig(&i_encoded_field->mac_LogicalChannelConfig, buff, bits_iter, asn_error);
	}

}

void DecodeRLC_BearerConfig_servedRadioBearer(
	RLC_BearerConfig_servedRadioBearer_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case RLC_BEARERCONFIG_SERVEDRADIOBEARER_SRB_IDENTITY:
		DecodeSRB_Identity(&o_decoded_field->a.srb_Identity, buff, bits_iter, asn_error);
		break;

	case RLC_BEARERCONFIG_SERVEDRADIOBEARER_DRB_IDENTITY:
		DecodeDRB_Identity(&o_decoded_field->a.drb_Identity, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeRLC_BearerConfig_reestablishRLC(
	RLC_BearerConfig_reestablishRLC_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeRLC_BearerConfig(
	RLC_BearerConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->servedRadioBearer_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->reestablishRLC_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->rlc_Config_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->mac_LogicalChannelConfig_exist = Get_bits(buff, 1, bits_iter);
	DecodeLogicalChannelIdentity(&o_decoded_field->logicalChannelIdentity, buff, bits_iter, asn_error);
	if(o_decoded_field->servedRadioBearer_exist == TRUE)
	{
		DecodeRLC_BearerConfig_servedRadioBearer(&o_decoded_field->servedRadioBearer, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->reestablishRLC_exist == TRUE)
	{
		DecodeRLC_BearerConfig_reestablishRLC(&o_decoded_field->reestablishRLC, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->rlc_Config_exist == TRUE)
	{
		DecodeRLC_Config(&o_decoded_field->rlc_Config, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->mac_LogicalChannelConfig_exist == TRUE)
	{
		DecodeLogicalChannelConfig(&o_decoded_field->mac_LogicalChannelConfig, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

