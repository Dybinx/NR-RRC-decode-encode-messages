/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * meas_config.c - codec the message of MeasConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "meas_config.h"


void EncodeMeasConfig_s_MeasureConfig(
	MeasConfig_s_MeasureConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case MEASCONFIG_S_MEASURECONFIG_SSB_RSRP:
		EncodeRSRP_Range(&i_encoded_field->a.ssb_RSRP, buff, bits_iter, asn_error);
		break;

	case MEASCONFIG_S_MEASURECONFIG_CSI_RSRP:
		EncodeRSRP_Range(&i_encoded_field->a.csi_RSRP, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeMeasConfig(
	MeasConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->measObjectToRemoveList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->measObjectToAddModList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->reportConfigToRemoveList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->reportConfigToAddModList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->measIdToRemoveList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->measIdToAddModList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->s_MeasureConfig_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->quantityConfig_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->measGapConfig_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->measGapSharingConfig_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->measObjectToRemoveList_exist == TRUE)
	{
		EncodeMeasObjectToRemoveList(&i_encoded_field->measObjectToRemoveList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->measObjectToAddModList_exist == TRUE)
	{
		EncodeMeasObjectToAddModList(&i_encoded_field->measObjectToAddModList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->reportConfigToRemoveList_exist == TRUE)
	{
		EncodeReportConfigToRemoveList(&i_encoded_field->reportConfigToRemoveList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->reportConfigToAddModList_exist == TRUE)
	{
		EncodeReportConfigToAddModList(&i_encoded_field->reportConfigToAddModList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->measIdToRemoveList_exist == TRUE)
	{
		EncodeMeasIdToRemoveList(&i_encoded_field->measIdToRemoveList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->measIdToAddModList_exist == TRUE)
	{
		EncodeMeasIdToAddModList(&i_encoded_field->measIdToAddModList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->s_MeasureConfig_exist == TRUE)
	{
		EncodeMeasConfig_s_MeasureConfig(&i_encoded_field->s_MeasureConfig, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->quantityConfig_exist == TRUE)
	{
		EncodeQuantityConfig(&i_encoded_field->quantityConfig, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->measGapConfig_exist == TRUE)
	{
		EncodeMeasGapConfig(&i_encoded_field->measGapConfig, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->measGapSharingConfig_exist == TRUE)
	{
		EncodeMeasGapSharingConfig(&i_encoded_field->measGapSharingConfig, buff, bits_iter, asn_error);
	}

}

void DecodeMeasConfig_s_MeasureConfig(
	MeasConfig_s_MeasureConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case MEASCONFIG_S_MEASURECONFIG_SSB_RSRP:
		DecodeRSRP_Range(&o_decoded_field->a.ssb_RSRP, buff, bits_iter, asn_error);
		break;

	case MEASCONFIG_S_MEASURECONFIG_CSI_RSRP:
		DecodeRSRP_Range(&o_decoded_field->a.csi_RSRP, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeMeasConfig(
	MeasConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->measObjectToRemoveList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->measObjectToAddModList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->reportConfigToRemoveList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->reportConfigToAddModList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->measIdToRemoveList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->measIdToAddModList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->s_MeasureConfig_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->quantityConfig_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->measGapConfig_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->measGapSharingConfig_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->measObjectToRemoveList_exist == TRUE)
	{
		DecodeMeasObjectToRemoveList(&o_decoded_field->measObjectToRemoveList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->measObjectToAddModList_exist == TRUE)
	{
		DecodeMeasObjectToAddModList(&o_decoded_field->measObjectToAddModList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->reportConfigToRemoveList_exist == TRUE)
	{
		DecodeReportConfigToRemoveList(&o_decoded_field->reportConfigToRemoveList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->reportConfigToAddModList_exist == TRUE)
	{
		DecodeReportConfigToAddModList(&o_decoded_field->reportConfigToAddModList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->measIdToRemoveList_exist == TRUE)
	{
		DecodeMeasIdToRemoveList(&o_decoded_field->measIdToRemoveList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->measIdToAddModList_exist == TRUE)
	{
		DecodeMeasIdToAddModList(&o_decoded_field->measIdToAddModList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->s_MeasureConfig_exist == TRUE)
	{
		DecodeMeasConfig_s_MeasureConfig(&o_decoded_field->s_MeasureConfig, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->quantityConfig_exist == TRUE)
	{
		DecodeQuantityConfig(&o_decoded_field->quantityConfig, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->measGapConfig_exist == TRUE)
	{
		DecodeMeasGapConfig(&o_decoded_field->measGapConfig, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->measGapSharingConfig_exist == TRUE)
	{
		DecodeMeasGapSharingConfig(&o_decoded_field->measGapSharingConfig, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

