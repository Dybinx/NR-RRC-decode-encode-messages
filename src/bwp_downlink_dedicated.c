/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * bwp_downlink_dedicated.c - codec the message of BWP-DownlinkDedicated
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "bwp_downlink_dedicated.h"


void EncodeBWP_DownlinkDedicated_release(
	BWP_DownlinkDedicated_release_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeBWP_DownlinkDedicated_pdcch_Config(
	BWP_DownlinkDedicated_pdcch_Config_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case BWP_DOWNLINKDEDICATED_PDCCH_CONFIG_RELEASE:
		EncodeBWP_DownlinkDedicated_release(&i_encoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case BWP_DOWNLINKDEDICATED_PDCCH_CONFIG_SETUP:
		EncodePDCCH_Config(&i_encoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeBWP_DownlinkDedicated_release_1(
	BWP_DownlinkDedicated_release_1_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeBWP_DownlinkDedicated_pdsch_Config(
	BWP_DownlinkDedicated_pdsch_Config_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case BWP_DOWNLINKDEDICATED_PDSCH_CONFIG_RELEASE:
		EncodeBWP_DownlinkDedicated_release_1(&i_encoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case BWP_DOWNLINKDEDICATED_PDSCH_CONFIG_SETUP:
		EncodePDSCH_Config(&i_encoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeBWP_DownlinkDedicated_release_2(
	BWP_DownlinkDedicated_release_2_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeBWP_DownlinkDedicated_sps_Config(
	BWP_DownlinkDedicated_sps_Config_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case BWP_DOWNLINKDEDICATED_SPS_CONFIG_RELEASE:
		EncodeBWP_DownlinkDedicated_release_2(&i_encoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case BWP_DOWNLINKDEDICATED_SPS_CONFIG_SETUP:
		EncodeSPS_Config(&i_encoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeBWP_DownlinkDedicated_release_3(
	BWP_DownlinkDedicated_release_3_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeBWP_DownlinkDedicated_radioLinkMonitoringConfig(
	BWP_DownlinkDedicated_radioLinkMonitoringConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case BWP_DOWNLINKDEDICATED_RADIOLINKMONITORINGCONFIG_RELEASE:
		EncodeBWP_DownlinkDedicated_release_3(&i_encoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case BWP_DOWNLINKDEDICATED_RADIOLINKMONITORINGCONFIG_SETUP:
		EncodeRadioLinkMonitoringConfig(&i_encoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeBWP_DownlinkDedicated(
	BWP_DownlinkDedicated_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->pdcch_Config_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->pdsch_Config_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->sps_Config_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->radioLinkMonitoringConfig_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->pdcch_Config_exist == TRUE)
	{
		EncodeBWP_DownlinkDedicated_pdcch_Config(&i_encoded_field->pdcch_Config, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->pdsch_Config_exist == TRUE)
	{
		EncodeBWP_DownlinkDedicated_pdsch_Config(&i_encoded_field->pdsch_Config, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->sps_Config_exist == TRUE)
	{
		EncodeBWP_DownlinkDedicated_sps_Config(&i_encoded_field->sps_Config, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->radioLinkMonitoringConfig_exist == TRUE)
	{
		EncodeBWP_DownlinkDedicated_radioLinkMonitoringConfig(&i_encoded_field->radioLinkMonitoringConfig, buff, bits_iter, asn_error);
	}

}

void DecodeBWP_DownlinkDedicated_release(
	BWP_DownlinkDedicated_release_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeBWP_DownlinkDedicated_pdcch_Config(
	BWP_DownlinkDedicated_pdcch_Config_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case BWP_DOWNLINKDEDICATED_PDCCH_CONFIG_RELEASE:
		DecodeBWP_DownlinkDedicated_release(&o_decoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case BWP_DOWNLINKDEDICATED_PDCCH_CONFIG_SETUP:
		DecodePDCCH_Config(&o_decoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeBWP_DownlinkDedicated_release_1(
	BWP_DownlinkDedicated_release_1_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeBWP_DownlinkDedicated_pdsch_Config(
	BWP_DownlinkDedicated_pdsch_Config_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case BWP_DOWNLINKDEDICATED_PDSCH_CONFIG_RELEASE:
		DecodeBWP_DownlinkDedicated_release_1(&o_decoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case BWP_DOWNLINKDEDICATED_PDSCH_CONFIG_SETUP:
		DecodePDSCH_Config(&o_decoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeBWP_DownlinkDedicated_release_2(
	BWP_DownlinkDedicated_release_2_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeBWP_DownlinkDedicated_sps_Config(
	BWP_DownlinkDedicated_sps_Config_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case BWP_DOWNLINKDEDICATED_SPS_CONFIG_RELEASE:
		DecodeBWP_DownlinkDedicated_release_2(&o_decoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case BWP_DOWNLINKDEDICATED_SPS_CONFIG_SETUP:
		DecodeSPS_Config(&o_decoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeBWP_DownlinkDedicated_release_3(
	BWP_DownlinkDedicated_release_3_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeBWP_DownlinkDedicated_radioLinkMonitoringConfig(
	BWP_DownlinkDedicated_radioLinkMonitoringConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case BWP_DOWNLINKDEDICATED_RADIOLINKMONITORINGCONFIG_RELEASE:
		DecodeBWP_DownlinkDedicated_release_3(&o_decoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case BWP_DOWNLINKDEDICATED_RADIOLINKMONITORINGCONFIG_SETUP:
		DecodeRadioLinkMonitoringConfig(&o_decoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeBWP_DownlinkDedicated(
	BWP_DownlinkDedicated_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->pdcch_Config_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->pdsch_Config_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->sps_Config_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->radioLinkMonitoringConfig_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->pdcch_Config_exist == TRUE)
	{
		DecodeBWP_DownlinkDedicated_pdcch_Config(&o_decoded_field->pdcch_Config, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->pdsch_Config_exist == TRUE)
	{
		DecodeBWP_DownlinkDedicated_pdsch_Config(&o_decoded_field->pdsch_Config, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->sps_Config_exist == TRUE)
	{
		DecodeBWP_DownlinkDedicated_sps_Config(&o_decoded_field->sps_Config, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->radioLinkMonitoringConfig_exist == TRUE)
	{
		DecodeBWP_DownlinkDedicated_radioLinkMonitoringConfig(&o_decoded_field->radioLinkMonitoringConfig, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

