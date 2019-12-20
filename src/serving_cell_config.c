/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * serving_cell_config.c - codec the message of ServingCellConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "serving_cell_config.h"


void EncodeServingCellConfig_downlinkBWP_ToReleaseList(
	ServingCellConfig_downlinkBWP_ToReleaseList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 2, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeBWP_Id(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeServingCellConfig_downlinkBWP_ToAddModList(
	ServingCellConfig_downlinkBWP_ToAddModList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 2, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeBWP_Downlink(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeServingCellConfig_bwp_InactivityTimer(
	ServingCellConfig_bwp_InactivityTimer_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 5, bits_iter);
}

void EncodeServingCellConfig_release(
	ServingCellConfig_release_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeServingCellConfig_pdcch_ServingCellConfig(
	ServingCellConfig_pdcch_ServingCellConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case SERVINGCELLCONFIG_PDCCH_SERVINGCELLCONFIG_RELEASE:
		EncodeServingCellConfig_release(&i_encoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case SERVINGCELLCONFIG_PDCCH_SERVINGCELLCONFIG_SETUP:
		EncodePDCCH_ServingCellConfig(&i_encoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeServingCellConfig_release_1(
	ServingCellConfig_release_1_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeServingCellConfig_pdsch_ServingCellConfig(
	ServingCellConfig_pdsch_ServingCellConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case SERVINGCELLCONFIG_PDSCH_SERVINGCELLCONFIG_RELEASE:
		EncodeServingCellConfig_release_1(&i_encoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case SERVINGCELLCONFIG_PDSCH_SERVINGCELLCONFIG_SETUP:
		EncodePDSCH_ServingCellConfig(&i_encoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeServingCellConfig_release_2(
	ServingCellConfig_release_2_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeServingCellConfig_csi_MeasConfig(
	ServingCellConfig_csi_MeasConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case SERVINGCELLCONFIG_CSI_MEASCONFIG_RELEASE:
		EncodeServingCellConfig_release_2(&i_encoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case SERVINGCELLCONFIG_CSI_MEASCONFIG_SETUP:
		EncodeCSI_MeasConfig(&i_encoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeServingCellConfig_sCellDeactivationTimer(
	ServingCellConfig_sCellDeactivationTimer_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 4, bits_iter);
}

void EncodeServingCellConfig_ue_BeamLockFunction(
	ServingCellConfig_ue_BeamLockFunction_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeServingCellConfig_pathlossReferenceLinking(
	ServingCellConfig_pathlossReferenceLinking_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodeServingCellConfig(
	ServingCellConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->tdd_UL_DL_ConfigurationDedicated_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->initialDownlinkBWP_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->downlinkBWP_ToReleaseList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->downlinkBWP_ToAddModList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->firstActiveDownlinkBWP_Id_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->bwp_InactivityTimer_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

if(i_encoded_field->defaultDownlinkBWP_Id_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->uplinkConfig_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->supplementaryUplink_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->pdcch_ServingCellConfig_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->pdsch_ServingCellConfig_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->csi_MeasConfig_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->sCellDeactivationTimer_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->crossCarrierSchedulingConfig_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->ue_BeamLockFunction_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->pathlossReferenceLinking_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->servingCellMO_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->tdd_UL_DL_ConfigurationDedicated_exist == TRUE)
	{
		EncodeTDD_UL_DL_ConfigDedicated(&i_encoded_field->tdd_UL_DL_ConfigurationDedicated, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->initialDownlinkBWP_exist == TRUE)
	{
		EncodeBWP_DownlinkDedicated(&i_encoded_field->initialDownlinkBWP, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->downlinkBWP_ToReleaseList_exist == TRUE)
	{
		EncodeServingCellConfig_downlinkBWP_ToReleaseList(&i_encoded_field->downlinkBWP_ToReleaseList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->downlinkBWP_ToAddModList_exist == TRUE)
	{
		EncodeServingCellConfig_downlinkBWP_ToAddModList(&i_encoded_field->downlinkBWP_ToAddModList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->firstActiveDownlinkBWP_Id_exist == TRUE)
	{
		EncodeBWP_Id(&i_encoded_field->firstActiveDownlinkBWP_Id, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->bwp_InactivityTimer_exist == TRUE)
	{
		EncodeServingCellConfig_bwp_InactivityTimer(i_encoded_field->bwp_InactivityTimer, buff, bits_iter, asn_error);
	}

if(i_encoded_field->defaultDownlinkBWP_Id_exist == TRUE)
	{
		EncodeBWP_Id(&i_encoded_field->defaultDownlinkBWP_Id, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->uplinkConfig_exist == TRUE)
	{
		EncodeUplinkConfig(&i_encoded_field->uplinkConfig, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->supplementaryUplink_exist == TRUE)
	{
		EncodeUplinkConfig(&i_encoded_field->supplementaryUplink, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->pdcch_ServingCellConfig_exist == TRUE)
	{
		EncodeServingCellConfig_pdcch_ServingCellConfig(&i_encoded_field->pdcch_ServingCellConfig, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->pdsch_ServingCellConfig_exist == TRUE)
	{
		EncodeServingCellConfig_pdsch_ServingCellConfig(&i_encoded_field->pdsch_ServingCellConfig, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->csi_MeasConfig_exist == TRUE)
	{
		EncodeServingCellConfig_csi_MeasConfig(&i_encoded_field->csi_MeasConfig, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->sCellDeactivationTimer_exist == TRUE)
	{
		EncodeServingCellConfig_sCellDeactivationTimer(i_encoded_field->sCellDeactivationTimer, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->crossCarrierSchedulingConfig_exist == TRUE)
	{
		EncodeCrossCarrierSchedulingConfig(&i_encoded_field->crossCarrierSchedulingConfig, buff, bits_iter, asn_error);
	}

	EncodeTAG_Id(&i_encoded_field->tag_Id, buff, bits_iter, asn_error);

	if(i_encoded_field->ue_BeamLockFunction_exist == TRUE)
	{
		EncodeServingCellConfig_ue_BeamLockFunction(i_encoded_field->ue_BeamLockFunction, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->pathlossReferenceLinking_exist == TRUE)
	{
		EncodeServingCellConfig_pathlossReferenceLinking(i_encoded_field->pathlossReferenceLinking, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->servingCellMO_exist == TRUE)
	{
		EncodeMeasObjectId(&i_encoded_field->servingCellMO, buff, bits_iter, asn_error);
	}

}

void DecodeServingCellConfig_downlinkBWP_ToReleaseList(
	ServingCellConfig_downlinkBWP_ToReleaseList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 2, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeBWP_Id(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeServingCellConfig_downlinkBWP_ToAddModList(
	ServingCellConfig_downlinkBWP_ToAddModList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 2, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeBWP_Downlink(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeServingCellConfig_bwp_InactivityTimer(
	ServingCellConfig_bwp_InactivityTimer_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 5, bits_iter);
}

void DecodeServingCellConfig_release(
	ServingCellConfig_release_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeServingCellConfig_pdcch_ServingCellConfig(
	ServingCellConfig_pdcch_ServingCellConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case SERVINGCELLCONFIG_PDCCH_SERVINGCELLCONFIG_RELEASE:
		DecodeServingCellConfig_release(&o_decoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case SERVINGCELLCONFIG_PDCCH_SERVINGCELLCONFIG_SETUP:
		DecodePDCCH_ServingCellConfig(&o_decoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeServingCellConfig_release_1(
	ServingCellConfig_release_1_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeServingCellConfig_pdsch_ServingCellConfig(
	ServingCellConfig_pdsch_ServingCellConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case SERVINGCELLCONFIG_PDSCH_SERVINGCELLCONFIG_RELEASE:
		DecodeServingCellConfig_release_1(&o_decoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case SERVINGCELLCONFIG_PDSCH_SERVINGCELLCONFIG_SETUP:
		DecodePDSCH_ServingCellConfig(&o_decoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeServingCellConfig_release_2(
	ServingCellConfig_release_2_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeServingCellConfig_csi_MeasConfig(
	ServingCellConfig_csi_MeasConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case SERVINGCELLCONFIG_CSI_MEASCONFIG_RELEASE:
		DecodeServingCellConfig_release_2(&o_decoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case SERVINGCELLCONFIG_CSI_MEASCONFIG_SETUP:
		DecodeCSI_MeasConfig(&o_decoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeServingCellConfig_sCellDeactivationTimer(
	ServingCellConfig_sCellDeactivationTimer_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 4, bits_iter);
}

void DecodeServingCellConfig_ue_BeamLockFunction(
	ServingCellConfig_ue_BeamLockFunction_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeServingCellConfig_pathlossReferenceLinking(
	ServingCellConfig_pathlossReferenceLinking_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodeServingCellConfig(
	ServingCellConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->tdd_UL_DL_ConfigurationDedicated_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->initialDownlinkBWP_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->downlinkBWP_ToReleaseList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->downlinkBWP_ToAddModList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->firstActiveDownlinkBWP_Id_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->bwp_InactivityTimer_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->defaultDownlinkBWP_Id_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->uplinkConfig_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->supplementaryUplink_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->pdcch_ServingCellConfig_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->pdsch_ServingCellConfig_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->csi_MeasConfig_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->sCellDeactivationTimer_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->crossCarrierSchedulingConfig_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->ue_BeamLockFunction_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->pathlossReferenceLinking_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->servingCellMO_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->tdd_UL_DL_ConfigurationDedicated_exist == TRUE)
	{
		DecodeTDD_UL_DL_ConfigDedicated(&o_decoded_field->tdd_UL_DL_ConfigurationDedicated, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->initialDownlinkBWP_exist == TRUE)
	{
		DecodeBWP_DownlinkDedicated(&o_decoded_field->initialDownlinkBWP, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->downlinkBWP_ToReleaseList_exist == TRUE)
	{
		DecodeServingCellConfig_downlinkBWP_ToReleaseList(&o_decoded_field->downlinkBWP_ToReleaseList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->downlinkBWP_ToAddModList_exist == TRUE)
	{
		DecodeServingCellConfig_downlinkBWP_ToAddModList(&o_decoded_field->downlinkBWP_ToAddModList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->firstActiveDownlinkBWP_Id_exist == TRUE)
	{
		DecodeBWP_Id(&o_decoded_field->firstActiveDownlinkBWP_Id, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->bwp_InactivityTimer_exist == TRUE)
	{
		DecodeServingCellConfig_bwp_InactivityTimer(&o_decoded_field->bwp_InactivityTimer, buff, bits_iter, asn_error);
	}

if(o_decoded_field->defaultDownlinkBWP_Id_exist == TRUE)
	{
		DecodeBWP_Id(&o_decoded_field->defaultDownlinkBWP_Id, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->uplinkConfig_exist == TRUE)
	{
		DecodeUplinkConfig(&o_decoded_field->uplinkConfig, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->supplementaryUplink_exist == TRUE)
	{
		DecodeUplinkConfig(&o_decoded_field->supplementaryUplink, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->pdcch_ServingCellConfig_exist == TRUE)
	{
		DecodeServingCellConfig_pdcch_ServingCellConfig(&o_decoded_field->pdcch_ServingCellConfig, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->pdsch_ServingCellConfig_exist == TRUE)
	{
		DecodeServingCellConfig_pdsch_ServingCellConfig(&o_decoded_field->pdsch_ServingCellConfig, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->csi_MeasConfig_exist == TRUE)
	{
		DecodeServingCellConfig_csi_MeasConfig(&o_decoded_field->csi_MeasConfig, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->sCellDeactivationTimer_exist == TRUE)
	{
		DecodeServingCellConfig_sCellDeactivationTimer(&o_decoded_field->sCellDeactivationTimer, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->crossCarrierSchedulingConfig_exist == TRUE)
	{
		DecodeCrossCarrierSchedulingConfig(&o_decoded_field->crossCarrierSchedulingConfig, buff, bits_iter, asn_error);
	}

	DecodeTAG_Id(&o_decoded_field->tag_Id, buff, bits_iter, asn_error);
	if(o_decoded_field->ue_BeamLockFunction_exist == TRUE)
	{
		DecodeServingCellConfig_ue_BeamLockFunction(&o_decoded_field->ue_BeamLockFunction, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->pathlossReferenceLinking_exist == TRUE)
	{
		DecodeServingCellConfig_pathlossReferenceLinking(&o_decoded_field->pathlossReferenceLinking, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->servingCellMO_exist == TRUE)
	{
		DecodeMeasObjectId(&o_decoded_field->servingCellMO, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

