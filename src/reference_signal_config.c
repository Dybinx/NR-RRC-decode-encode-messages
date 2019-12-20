/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * reference_signal_config.c - codec the message of ReferenceSignalConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "reference_signal_config.h"


void EncodeReferenceSignalConfig_release(
	ReferenceSignalConfig_release_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeReferenceSignalConfig_csi_rs_ResourceConfigMobility(
	ReferenceSignalConfig_csi_rs_ResourceConfigMobility_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case REFERENCESIGNALCONFIG_CSI_RS_RESOURCECONFIGMOBILITY_RELEASE:
		EncodeReferenceSignalConfig_release(&i_encoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case REFERENCESIGNALCONFIG_CSI_RS_RESOURCECONFIGMOBILITY_SETUP:
		EncodeCSI_RS_ResourceConfigMobility(&i_encoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeReferenceSignalConfig(
	ReferenceSignalConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->ssb_ConfigMobility_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->csi_rs_ResourceConfigMobility_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->ssb_ConfigMobility_exist == TRUE)
	{
		EncodeSSB_ConfigMobility(&i_encoded_field->ssb_ConfigMobility, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->csi_rs_ResourceConfigMobility_exist == TRUE)
	{
		EncodeReferenceSignalConfig_csi_rs_ResourceConfigMobility(&i_encoded_field->csi_rs_ResourceConfigMobility, buff, bits_iter, asn_error);
	}

}

void DecodeReferenceSignalConfig_release(
	ReferenceSignalConfig_release_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeReferenceSignalConfig_csi_rs_ResourceConfigMobility(
	ReferenceSignalConfig_csi_rs_ResourceConfigMobility_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case REFERENCESIGNALCONFIG_CSI_RS_RESOURCECONFIGMOBILITY_RELEASE:
		DecodeReferenceSignalConfig_release(&o_decoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case REFERENCESIGNALCONFIG_CSI_RS_RESOURCECONFIGMOBILITY_SETUP:
		DecodeCSI_RS_ResourceConfigMobility(&o_decoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeReferenceSignalConfig(
	ReferenceSignalConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->ssb_ConfigMobility_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->csi_rs_ResourceConfigMobility_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->ssb_ConfigMobility_exist == TRUE)
	{
		DecodeSSB_ConfigMobility(&o_decoded_field->ssb_ConfigMobility, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->csi_rs_ResourceConfigMobility_exist == TRUE)
	{
		DecodeReferenceSignalConfig_csi_rs_ResourceConfigMobility(&o_decoded_field->csi_rs_ResourceConfigMobility, buff, bits_iter, asn_error);
	}

}

