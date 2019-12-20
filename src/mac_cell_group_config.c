/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * mac_cell_group_config.c - codec the message of MAC-CellGroupConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "mac_cell_group_config.h"


void EncodeMAC_CellGroupConfig_release(
	MAC_CellGroupConfig_release_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeMAC_CellGroupConfig_drx_Config(
	MAC_CellGroupConfig_drx_Config_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case MAC_CELLGROUPCONFIG_DRX_CONFIG_RELEASE:
		EncodeMAC_CellGroupConfig_release(&i_encoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case MAC_CELLGROUPCONFIG_DRX_CONFIG_SETUP:
		EncodeDRX_Config(&i_encoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeMAC_CellGroupConfig_release_1(
	MAC_CellGroupConfig_release_1_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeMAC_CellGroupConfig_phr_Config(
	MAC_CellGroupConfig_phr_Config_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case MAC_CELLGROUPCONFIG_PHR_CONFIG_RELEASE:
		EncodeMAC_CellGroupConfig_release_1(&i_encoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case MAC_CELLGROUPCONFIG_PHR_CONFIG_SETUP:
		EncodePHR_Config(&i_encoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeMAC_CellGroupConfig(
	MAC_CellGroupConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->drx_Config_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->schedulingRequestConfig_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->bsr_Config_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->tag_Config_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->phr_Config_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->drx_Config_exist == TRUE)
	{
		EncodeMAC_CellGroupConfig_drx_Config(&i_encoded_field->drx_Config, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->schedulingRequestConfig_exist == TRUE)
	{
		EncodeSchedulingRequestConfig(&i_encoded_field->schedulingRequestConfig, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->bsr_Config_exist == TRUE)
	{
		EncodeBSR_Config(&i_encoded_field->bsr_Config, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->tag_Config_exist == TRUE)
	{
		EncodeTAG_Config(&i_encoded_field->tag_Config, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->phr_Config_exist == TRUE)
	{
		EncodeMAC_CellGroupConfig_phr_Config(&i_encoded_field->phr_Config, buff, bits_iter, asn_error);
	}

	PutBits(buff, i_encoded_field->skipUplinkTxDynamic, 1, bits_iter);

}

void DecodeMAC_CellGroupConfig_release(
	MAC_CellGroupConfig_release_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeMAC_CellGroupConfig_drx_Config(
	MAC_CellGroupConfig_drx_Config_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case MAC_CELLGROUPCONFIG_DRX_CONFIG_RELEASE:
		DecodeMAC_CellGroupConfig_release(&o_decoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case MAC_CELLGROUPCONFIG_DRX_CONFIG_SETUP:
		DecodeDRX_Config(&o_decoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeMAC_CellGroupConfig_release_1(
	MAC_CellGroupConfig_release_1_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeMAC_CellGroupConfig_phr_Config(
	MAC_CellGroupConfig_phr_Config_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case MAC_CELLGROUPCONFIG_PHR_CONFIG_RELEASE:
		DecodeMAC_CellGroupConfig_release_1(&o_decoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case MAC_CELLGROUPCONFIG_PHR_CONFIG_SETUP:
		DecodePHR_Config(&o_decoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeMAC_CellGroupConfig(
	MAC_CellGroupConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->drx_Config_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->schedulingRequestConfig_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->bsr_Config_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->tag_Config_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->phr_Config_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->drx_Config_exist == TRUE)
	{
		DecodeMAC_CellGroupConfig_drx_Config(&o_decoded_field->drx_Config, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->schedulingRequestConfig_exist == TRUE)
	{
		DecodeSchedulingRequestConfig(&o_decoded_field->schedulingRequestConfig, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->bsr_Config_exist == TRUE)
	{
		DecodeBSR_Config(&o_decoded_field->bsr_Config, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->tag_Config_exist == TRUE)
	{
		DecodeTAG_Config(&o_decoded_field->tag_Config, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->phr_Config_exist == TRUE)
	{
		DecodeMAC_CellGroupConfig_phr_Config(&o_decoded_field->phr_Config, buff, bits_iter, asn_error);
	}

	o_decoded_field->skipUplinkTxDynamic = Get_bits(buff, 1, bits_iter);
	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

