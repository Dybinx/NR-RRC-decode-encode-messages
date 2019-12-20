/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * bwp_uplink_dedicated.c - codec the message of BWP-UplinkDedicated
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "bwp_uplink_dedicated.h"


void EncodeBWP_UplinkDedicated_release(
	BWP_UplinkDedicated_release_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeBWP_UplinkDedicated_pucch_Config(
	BWP_UplinkDedicated_pucch_Config_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case BWP_UPLINKDEDICATED_PUCCH_CONFIG_RELEASE:
		EncodeBWP_UplinkDedicated_release(&i_encoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case BWP_UPLINKDEDICATED_PUCCH_CONFIG_SETUP:
		EncodePUCCH_Config(&i_encoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeBWP_UplinkDedicated_release_1(
	BWP_UplinkDedicated_release_1_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeBWP_UplinkDedicated_pusch_Config(
	BWP_UplinkDedicated_pusch_Config_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case BWP_UPLINKDEDICATED_PUSCH_CONFIG_RELEASE:
		EncodeBWP_UplinkDedicated_release_1(&i_encoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case BWP_UPLINKDEDICATED_PUSCH_CONFIG_SETUP:
		EncodePUSCH_Config(&i_encoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeBWP_UplinkDedicated_release_2(
	BWP_UplinkDedicated_release_2_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeBWP_UplinkDedicated_configuredGrantConfig(
	BWP_UplinkDedicated_configuredGrantConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case BWP_UPLINKDEDICATED_CONFIGUREDGRANTCONFIG_RELEASE:
		EncodeBWP_UplinkDedicated_release_2(&i_encoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case BWP_UPLINKDEDICATED_CONFIGUREDGRANTCONFIG_SETUP:
		EncodeConfiguredGrantConfig(&i_encoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeBWP_UplinkDedicated_release_3(
	BWP_UplinkDedicated_release_3_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeBWP_UplinkDedicated_srs_Config(
	BWP_UplinkDedicated_srs_Config_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case BWP_UPLINKDEDICATED_SRS_CONFIG_RELEASE:
		EncodeBWP_UplinkDedicated_release_3(&i_encoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case BWP_UPLINKDEDICATED_SRS_CONFIG_SETUP:
		EncodeSRS_Config(&i_encoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeBWP_UplinkDedicated_release_4(
	BWP_UplinkDedicated_release_4_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeBWP_UplinkDedicated_beamFailureRecoveryConfig(
	BWP_UplinkDedicated_beamFailureRecoveryConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case BWP_UPLINKDEDICATED_BEAMFAILURERECOVERYCONFIG_RELEASE:
		EncodeBWP_UplinkDedicated_release_4(&i_encoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case BWP_UPLINKDEDICATED_BEAMFAILURERECOVERYCONFIG_SETUP:
		EncodeBeamFailureRecoveryConfig(&i_encoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeBWP_UplinkDedicated(
	BWP_UplinkDedicated_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->pucch_Config_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->pusch_Config_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->configuredGrantConfig_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->srs_Config_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->beamFailureRecoveryConfig_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->pucch_Config_exist == TRUE)
	{
		EncodeBWP_UplinkDedicated_pucch_Config(&i_encoded_field->pucch_Config, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->pusch_Config_exist == TRUE)
	{
		EncodeBWP_UplinkDedicated_pusch_Config(&i_encoded_field->pusch_Config, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->configuredGrantConfig_exist == TRUE)
	{
		EncodeBWP_UplinkDedicated_configuredGrantConfig(&i_encoded_field->configuredGrantConfig, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->srs_Config_exist == TRUE)
	{
		EncodeBWP_UplinkDedicated_srs_Config(&i_encoded_field->srs_Config, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->beamFailureRecoveryConfig_exist == TRUE)
	{
		EncodeBWP_UplinkDedicated_beamFailureRecoveryConfig(&i_encoded_field->beamFailureRecoveryConfig, buff, bits_iter, asn_error);
	}

}

void DecodeBWP_UplinkDedicated_release(
	BWP_UplinkDedicated_release_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeBWP_UplinkDedicated_pucch_Config(
	BWP_UplinkDedicated_pucch_Config_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case BWP_UPLINKDEDICATED_PUCCH_CONFIG_RELEASE:
		DecodeBWP_UplinkDedicated_release(&o_decoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case BWP_UPLINKDEDICATED_PUCCH_CONFIG_SETUP:
		DecodePUCCH_Config(&o_decoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeBWP_UplinkDedicated_release_1(
	BWP_UplinkDedicated_release_1_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeBWP_UplinkDedicated_pusch_Config(
	BWP_UplinkDedicated_pusch_Config_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case BWP_UPLINKDEDICATED_PUSCH_CONFIG_RELEASE:
		DecodeBWP_UplinkDedicated_release_1(&o_decoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case BWP_UPLINKDEDICATED_PUSCH_CONFIG_SETUP:
		DecodePUSCH_Config(&o_decoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeBWP_UplinkDedicated_release_2(
	BWP_UplinkDedicated_release_2_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeBWP_UplinkDedicated_configuredGrantConfig(
	BWP_UplinkDedicated_configuredGrantConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case BWP_UPLINKDEDICATED_CONFIGUREDGRANTCONFIG_RELEASE:
		DecodeBWP_UplinkDedicated_release_2(&o_decoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case BWP_UPLINKDEDICATED_CONFIGUREDGRANTCONFIG_SETUP:
		DecodeConfiguredGrantConfig(&o_decoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeBWP_UplinkDedicated_release_3(
	BWP_UplinkDedicated_release_3_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeBWP_UplinkDedicated_srs_Config(
	BWP_UplinkDedicated_srs_Config_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case BWP_UPLINKDEDICATED_SRS_CONFIG_RELEASE:
		DecodeBWP_UplinkDedicated_release_3(&o_decoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case BWP_UPLINKDEDICATED_SRS_CONFIG_SETUP:
		DecodeSRS_Config(&o_decoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeBWP_UplinkDedicated_release_4(
	BWP_UplinkDedicated_release_4_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeBWP_UplinkDedicated_beamFailureRecoveryConfig(
	BWP_UplinkDedicated_beamFailureRecoveryConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case BWP_UPLINKDEDICATED_BEAMFAILURERECOVERYCONFIG_RELEASE:
		DecodeBWP_UplinkDedicated_release_4(&o_decoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case BWP_UPLINKDEDICATED_BEAMFAILURERECOVERYCONFIG_SETUP:
		DecodeBeamFailureRecoveryConfig(&o_decoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeBWP_UplinkDedicated(
	BWP_UplinkDedicated_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->pucch_Config_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->pusch_Config_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->configuredGrantConfig_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->srs_Config_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->beamFailureRecoveryConfig_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->pucch_Config_exist == TRUE)
	{
		DecodeBWP_UplinkDedicated_pucch_Config(&o_decoded_field->pucch_Config, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->pusch_Config_exist == TRUE)
	{
		DecodeBWP_UplinkDedicated_pusch_Config(&o_decoded_field->pusch_Config, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->configuredGrantConfig_exist == TRUE)
	{
		DecodeBWP_UplinkDedicated_configuredGrantConfig(&o_decoded_field->configuredGrantConfig, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->srs_Config_exist == TRUE)
	{
		DecodeBWP_UplinkDedicated_srs_Config(&o_decoded_field->srs_Config, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->beamFailureRecoveryConfig_exist == TRUE)
	{
		DecodeBWP_UplinkDedicated_beamFailureRecoveryConfig(&o_decoded_field->beamFailureRecoveryConfig, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

