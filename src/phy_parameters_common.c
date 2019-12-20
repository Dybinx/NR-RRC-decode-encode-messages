/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * phy_parameters_common.c - codec the message of Phy-ParametersCommon
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "phy_parameters_common.h"


void EncodePhy_ParametersCommon_csi_RS_CFRA_ForHO(
	Phy_ParametersCommon_csi_RS_CFRA_ForHO_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersCommon_dynamicPRB_BundlingDL(
	Phy_ParametersCommon_dynamicPRB_BundlingDL_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersCommon_sp_CSI_ReportPUCCH(
	Phy_ParametersCommon_sp_CSI_ReportPUCCH_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersCommon_sp_CSI_ReportPUSCH(
	Phy_ParametersCommon_sp_CSI_ReportPUSCH_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersCommon_nzp_CSI_RS_IntefMgmt(
	Phy_ParametersCommon_nzp_CSI_RS_IntefMgmt_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersCommon_type2_SP_CSI_Feedback_LongPUCCH(
	Phy_ParametersCommon_type2_SP_CSI_Feedback_LongPUCCH_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersCommon_precoderGranularityCORESET(
	Phy_ParametersCommon_precoderGranularityCORESET_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersCommon_dynamicHARQ_ACK_Codebook(
	Phy_ParametersCommon_dynamicHARQ_ACK_Codebook_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersCommon_semiStaticHARQ_ACK_Codebook(
	Phy_ParametersCommon_semiStaticHARQ_ACK_Codebook_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersCommon_spatialBundlingHARQ_ACK(
	Phy_ParametersCommon_spatialBundlingHARQ_ACK_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersCommon_dynamicBetaOffsetInd_HARQ_ACK_CSI(
	Phy_ParametersCommon_dynamicBetaOffsetInd_HARQ_ACK_CSI_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersCommon_pucch_Repetition_F1_3_4(
	Phy_ParametersCommon_pucch_Repetition_F1_3_4_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersCommon_ra_Type0_PUSCH(
	Phy_ParametersCommon_ra_Type0_PUSCH_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersCommon_dynamicSwitchRA_Type0_1_PDSCH(
	Phy_ParametersCommon_dynamicSwitchRA_Type0_1_PDSCH_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersCommon_dynamicSwitchRA_Type0_1_PUSCH(
	Phy_ParametersCommon_dynamicSwitchRA_Type0_1_PUSCH_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersCommon_pdsch_MappingTypeA(
	Phy_ParametersCommon_pdsch_MappingTypeA_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersCommon_pdsch_MappingTypeB(
	Phy_ParametersCommon_pdsch_MappingTypeB_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersCommon_interleavingVRB_ToPRB_PDSCH(
	Phy_ParametersCommon_interleavingVRB_ToPRB_PDSCH_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersCommon_interSlotFreqHopping_PUSCH(
	Phy_ParametersCommon_interSlotFreqHopping_PUSCH_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersCommon_type1_PUSCH_RepetitionMultiSlots(
	Phy_ParametersCommon_type1_PUSCH_RepetitionMultiSlots_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersCommon_type2_PUSCH_RepetitionMultiSlots(
	Phy_ParametersCommon_type2_PUSCH_RepetitionMultiSlots_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersCommon_pusch_RepetitionMultiSlots(
	Phy_ParametersCommon_pusch_RepetitionMultiSlots_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersCommon_pdsch_RepetitionMultiSlots(
	Phy_ParametersCommon_pdsch_RepetitionMultiSlots_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersCommon_downlinkSPS(
	Phy_ParametersCommon_downlinkSPS_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersCommon_configuredUL_GrantType1(
	Phy_ParametersCommon_configuredUL_GrantType1_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersCommon_configuredUL_GrantType2(
	Phy_ParametersCommon_configuredUL_GrantType2_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersCommon_pre_EmptIndication_DL(
	Phy_ParametersCommon_pre_EmptIndication_DL_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersCommon_cbg_TransIndication_DL(
	Phy_ParametersCommon_cbg_TransIndication_DL_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersCommon_cbg_TransIndication_UL(
	Phy_ParametersCommon_cbg_TransIndication_UL_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersCommon_cbg_FlushIndication_DL(
	Phy_ParametersCommon_cbg_FlushIndication_DL_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersCommon_dynamicHARQ_ACK_CodeB_CBG_Retx_DL(
	Phy_ParametersCommon_dynamicHARQ_ACK_CodeB_CBG_Retx_DL_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersCommon_rateMatchingResrcSetSemi_Static(
	Phy_ParametersCommon_rateMatchingResrcSetSemi_Static_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersCommon_rateMatchingResrcSetDynamic(
	Phy_ParametersCommon_rateMatchingResrcSetDynamic_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersCommon_bwp_SwitchingDelay(
	Phy_ParametersCommon_bwp_SwitchingDelay_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodePhy_ParametersCommon(
	Phy_ParametersCommon_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->csi_RS_CFRA_ForHO_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->dynamicPRB_BundlingDL_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->sp_CSI_ReportPUCCH_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->sp_CSI_ReportPUSCH_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->nzp_CSI_RS_IntefMgmt_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->type2_SP_CSI_Feedback_LongPUCCH_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->precoderGranularityCORESET_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->dynamicHARQ_ACK_Codebook_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->semiStaticHARQ_ACK_Codebook_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->spatialBundlingHARQ_ACK_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->dynamicBetaOffsetInd_HARQ_ACK_CSI_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->pucch_Repetition_F1_3_4_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->ra_Type0_PUSCH_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->dynamicSwitchRA_Type0_1_PDSCH_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->dynamicSwitchRA_Type0_1_PUSCH_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->pdsch_MappingTypeA_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->pdsch_MappingTypeB_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->interleavingVRB_ToPRB_PDSCH_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->interSlotFreqHopping_PUSCH_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->type1_PUSCH_RepetitionMultiSlots_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->type2_PUSCH_RepetitionMultiSlots_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->pusch_RepetitionMultiSlots_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->pdsch_RepetitionMultiSlots_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->downlinkSPS_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->configuredUL_GrantType1_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->configuredUL_GrantType2_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->pre_EmptIndication_DL_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->cbg_TransIndication_DL_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->cbg_TransIndication_UL_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->cbg_FlushIndication_DL_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->dynamicHARQ_ACK_CodeB_CBG_Retx_DL_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->rateMatchingResrcSetSemi_Static_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->rateMatchingResrcSetDynamic_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->bwp_SwitchingDelay_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->csi_RS_CFRA_ForHO_exist == TRUE)
	{
		EncodePhy_ParametersCommon_csi_RS_CFRA_ForHO(i_encoded_field->csi_RS_CFRA_ForHO, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->dynamicPRB_BundlingDL_exist == TRUE)
	{
		EncodePhy_ParametersCommon_dynamicPRB_BundlingDL(i_encoded_field->dynamicPRB_BundlingDL, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->sp_CSI_ReportPUCCH_exist == TRUE)
	{
		EncodePhy_ParametersCommon_sp_CSI_ReportPUCCH(i_encoded_field->sp_CSI_ReportPUCCH, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->sp_CSI_ReportPUSCH_exist == TRUE)
	{
		EncodePhy_ParametersCommon_sp_CSI_ReportPUSCH(i_encoded_field->sp_CSI_ReportPUSCH, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->nzp_CSI_RS_IntefMgmt_exist == TRUE)
	{
		EncodePhy_ParametersCommon_nzp_CSI_RS_IntefMgmt(i_encoded_field->nzp_CSI_RS_IntefMgmt, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->type2_SP_CSI_Feedback_LongPUCCH_exist == TRUE)
	{
		EncodePhy_ParametersCommon_type2_SP_CSI_Feedback_LongPUCCH(i_encoded_field->type2_SP_CSI_Feedback_LongPUCCH, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->precoderGranularityCORESET_exist == TRUE)
	{
		EncodePhy_ParametersCommon_precoderGranularityCORESET(i_encoded_field->precoderGranularityCORESET, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->dynamicHARQ_ACK_Codebook_exist == TRUE)
	{
		EncodePhy_ParametersCommon_dynamicHARQ_ACK_Codebook(i_encoded_field->dynamicHARQ_ACK_Codebook, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->semiStaticHARQ_ACK_Codebook_exist == TRUE)
	{
		EncodePhy_ParametersCommon_semiStaticHARQ_ACK_Codebook(i_encoded_field->semiStaticHARQ_ACK_Codebook, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->spatialBundlingHARQ_ACK_exist == TRUE)
	{
		EncodePhy_ParametersCommon_spatialBundlingHARQ_ACK(i_encoded_field->spatialBundlingHARQ_ACK, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->dynamicBetaOffsetInd_HARQ_ACK_CSI_exist == TRUE)
	{
		EncodePhy_ParametersCommon_dynamicBetaOffsetInd_HARQ_ACK_CSI(i_encoded_field->dynamicBetaOffsetInd_HARQ_ACK_CSI, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->pucch_Repetition_F1_3_4_exist == TRUE)
	{
		EncodePhy_ParametersCommon_pucch_Repetition_F1_3_4(i_encoded_field->pucch_Repetition_F1_3_4, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->ra_Type0_PUSCH_exist == TRUE)
	{
		EncodePhy_ParametersCommon_ra_Type0_PUSCH(i_encoded_field->ra_Type0_PUSCH, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->dynamicSwitchRA_Type0_1_PDSCH_exist == TRUE)
	{
		EncodePhy_ParametersCommon_dynamicSwitchRA_Type0_1_PDSCH(i_encoded_field->dynamicSwitchRA_Type0_1_PDSCH, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->dynamicSwitchRA_Type0_1_PUSCH_exist == TRUE)
	{
		EncodePhy_ParametersCommon_dynamicSwitchRA_Type0_1_PUSCH(i_encoded_field->dynamicSwitchRA_Type0_1_PUSCH, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->pdsch_MappingTypeA_exist == TRUE)
	{
		EncodePhy_ParametersCommon_pdsch_MappingTypeA(i_encoded_field->pdsch_MappingTypeA, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->pdsch_MappingTypeB_exist == TRUE)
	{
		EncodePhy_ParametersCommon_pdsch_MappingTypeB(i_encoded_field->pdsch_MappingTypeB, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->interleavingVRB_ToPRB_PDSCH_exist == TRUE)
	{
		EncodePhy_ParametersCommon_interleavingVRB_ToPRB_PDSCH(i_encoded_field->interleavingVRB_ToPRB_PDSCH, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->interSlotFreqHopping_PUSCH_exist == TRUE)
	{
		EncodePhy_ParametersCommon_interSlotFreqHopping_PUSCH(i_encoded_field->interSlotFreqHopping_PUSCH, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->type1_PUSCH_RepetitionMultiSlots_exist == TRUE)
	{
		EncodePhy_ParametersCommon_type1_PUSCH_RepetitionMultiSlots(i_encoded_field->type1_PUSCH_RepetitionMultiSlots, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->type2_PUSCH_RepetitionMultiSlots_exist == TRUE)
	{
		EncodePhy_ParametersCommon_type2_PUSCH_RepetitionMultiSlots(i_encoded_field->type2_PUSCH_RepetitionMultiSlots, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->pusch_RepetitionMultiSlots_exist == TRUE)
	{
		EncodePhy_ParametersCommon_pusch_RepetitionMultiSlots(i_encoded_field->pusch_RepetitionMultiSlots, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->pdsch_RepetitionMultiSlots_exist == TRUE)
	{
		EncodePhy_ParametersCommon_pdsch_RepetitionMultiSlots(i_encoded_field->pdsch_RepetitionMultiSlots, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->downlinkSPS_exist == TRUE)
	{
		EncodePhy_ParametersCommon_downlinkSPS(i_encoded_field->downlinkSPS, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->configuredUL_GrantType1_exist == TRUE)
	{
		EncodePhy_ParametersCommon_configuredUL_GrantType1(i_encoded_field->configuredUL_GrantType1, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->configuredUL_GrantType2_exist == TRUE)
	{
		EncodePhy_ParametersCommon_configuredUL_GrantType2(i_encoded_field->configuredUL_GrantType2, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->pre_EmptIndication_DL_exist == TRUE)
	{
		EncodePhy_ParametersCommon_pre_EmptIndication_DL(i_encoded_field->pre_EmptIndication_DL, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->cbg_TransIndication_DL_exist == TRUE)
	{
		EncodePhy_ParametersCommon_cbg_TransIndication_DL(i_encoded_field->cbg_TransIndication_DL, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->cbg_TransIndication_UL_exist == TRUE)
	{
		EncodePhy_ParametersCommon_cbg_TransIndication_UL(i_encoded_field->cbg_TransIndication_UL, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->cbg_FlushIndication_DL_exist == TRUE)
	{
		EncodePhy_ParametersCommon_cbg_FlushIndication_DL(i_encoded_field->cbg_FlushIndication_DL, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->dynamicHARQ_ACK_CodeB_CBG_Retx_DL_exist == TRUE)
	{
		EncodePhy_ParametersCommon_dynamicHARQ_ACK_CodeB_CBG_Retx_DL(i_encoded_field->dynamicHARQ_ACK_CodeB_CBG_Retx_DL, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->rateMatchingResrcSetSemi_Static_exist == TRUE)
	{
		EncodePhy_ParametersCommon_rateMatchingResrcSetSemi_Static(i_encoded_field->rateMatchingResrcSetSemi_Static, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->rateMatchingResrcSetDynamic_exist == TRUE)
	{
		EncodePhy_ParametersCommon_rateMatchingResrcSetDynamic(i_encoded_field->rateMatchingResrcSetDynamic, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->bwp_SwitchingDelay_exist == TRUE)
	{
		EncodePhy_ParametersCommon_bwp_SwitchingDelay(i_encoded_field->bwp_SwitchingDelay, buff, bits_iter, asn_error);
	}

}

void DecodePhy_ParametersCommon_csi_RS_CFRA_ForHO(
	Phy_ParametersCommon_csi_RS_CFRA_ForHO_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersCommon_dynamicPRB_BundlingDL(
	Phy_ParametersCommon_dynamicPRB_BundlingDL_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersCommon_sp_CSI_ReportPUCCH(
	Phy_ParametersCommon_sp_CSI_ReportPUCCH_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersCommon_sp_CSI_ReportPUSCH(
	Phy_ParametersCommon_sp_CSI_ReportPUSCH_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersCommon_nzp_CSI_RS_IntefMgmt(
	Phy_ParametersCommon_nzp_CSI_RS_IntefMgmt_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersCommon_type2_SP_CSI_Feedback_LongPUCCH(
	Phy_ParametersCommon_type2_SP_CSI_Feedback_LongPUCCH_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersCommon_precoderGranularityCORESET(
	Phy_ParametersCommon_precoderGranularityCORESET_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersCommon_dynamicHARQ_ACK_Codebook(
	Phy_ParametersCommon_dynamicHARQ_ACK_Codebook_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersCommon_semiStaticHARQ_ACK_Codebook(
	Phy_ParametersCommon_semiStaticHARQ_ACK_Codebook_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersCommon_spatialBundlingHARQ_ACK(
	Phy_ParametersCommon_spatialBundlingHARQ_ACK_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersCommon_dynamicBetaOffsetInd_HARQ_ACK_CSI(
	Phy_ParametersCommon_dynamicBetaOffsetInd_HARQ_ACK_CSI_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersCommon_pucch_Repetition_F1_3_4(
	Phy_ParametersCommon_pucch_Repetition_F1_3_4_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersCommon_ra_Type0_PUSCH(
	Phy_ParametersCommon_ra_Type0_PUSCH_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersCommon_dynamicSwitchRA_Type0_1_PDSCH(
	Phy_ParametersCommon_dynamicSwitchRA_Type0_1_PDSCH_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersCommon_dynamicSwitchRA_Type0_1_PUSCH(
	Phy_ParametersCommon_dynamicSwitchRA_Type0_1_PUSCH_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersCommon_pdsch_MappingTypeA(
	Phy_ParametersCommon_pdsch_MappingTypeA_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersCommon_pdsch_MappingTypeB(
	Phy_ParametersCommon_pdsch_MappingTypeB_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersCommon_interleavingVRB_ToPRB_PDSCH(
	Phy_ParametersCommon_interleavingVRB_ToPRB_PDSCH_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersCommon_interSlotFreqHopping_PUSCH(
	Phy_ParametersCommon_interSlotFreqHopping_PUSCH_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersCommon_type1_PUSCH_RepetitionMultiSlots(
	Phy_ParametersCommon_type1_PUSCH_RepetitionMultiSlots_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersCommon_type2_PUSCH_RepetitionMultiSlots(
	Phy_ParametersCommon_type2_PUSCH_RepetitionMultiSlots_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersCommon_pusch_RepetitionMultiSlots(
	Phy_ParametersCommon_pusch_RepetitionMultiSlots_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersCommon_pdsch_RepetitionMultiSlots(
	Phy_ParametersCommon_pdsch_RepetitionMultiSlots_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersCommon_downlinkSPS(
	Phy_ParametersCommon_downlinkSPS_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersCommon_configuredUL_GrantType1(
	Phy_ParametersCommon_configuredUL_GrantType1_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersCommon_configuredUL_GrantType2(
	Phy_ParametersCommon_configuredUL_GrantType2_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersCommon_pre_EmptIndication_DL(
	Phy_ParametersCommon_pre_EmptIndication_DL_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersCommon_cbg_TransIndication_DL(
	Phy_ParametersCommon_cbg_TransIndication_DL_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersCommon_cbg_TransIndication_UL(
	Phy_ParametersCommon_cbg_TransIndication_UL_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersCommon_cbg_FlushIndication_DL(
	Phy_ParametersCommon_cbg_FlushIndication_DL_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersCommon_dynamicHARQ_ACK_CodeB_CBG_Retx_DL(
	Phy_ParametersCommon_dynamicHARQ_ACK_CodeB_CBG_Retx_DL_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersCommon_rateMatchingResrcSetSemi_Static(
	Phy_ParametersCommon_rateMatchingResrcSetSemi_Static_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersCommon_rateMatchingResrcSetDynamic(
	Phy_ParametersCommon_rateMatchingResrcSetDynamic_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersCommon_bwp_SwitchingDelay(
	Phy_ParametersCommon_bwp_SwitchingDelay_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodePhy_ParametersCommon(
	Phy_ParametersCommon_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->csi_RS_CFRA_ForHO_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->dynamicPRB_BundlingDL_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->sp_CSI_ReportPUCCH_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->sp_CSI_ReportPUSCH_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->nzp_CSI_RS_IntefMgmt_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type2_SP_CSI_Feedback_LongPUCCH_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->precoderGranularityCORESET_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->dynamicHARQ_ACK_Codebook_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->semiStaticHARQ_ACK_Codebook_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->spatialBundlingHARQ_ACK_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->dynamicBetaOffsetInd_HARQ_ACK_CSI_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->pucch_Repetition_F1_3_4_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->ra_Type0_PUSCH_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->dynamicSwitchRA_Type0_1_PDSCH_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->dynamicSwitchRA_Type0_1_PUSCH_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->pdsch_MappingTypeA_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->pdsch_MappingTypeB_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->interleavingVRB_ToPRB_PDSCH_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->interSlotFreqHopping_PUSCH_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type1_PUSCH_RepetitionMultiSlots_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type2_PUSCH_RepetitionMultiSlots_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->pusch_RepetitionMultiSlots_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->pdsch_RepetitionMultiSlots_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->downlinkSPS_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->configuredUL_GrantType1_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->configuredUL_GrantType2_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->pre_EmptIndication_DL_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->cbg_TransIndication_DL_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->cbg_TransIndication_UL_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->cbg_FlushIndication_DL_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->dynamicHARQ_ACK_CodeB_CBG_Retx_DL_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->rateMatchingResrcSetSemi_Static_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->rateMatchingResrcSetDynamic_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->bwp_SwitchingDelay_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->csi_RS_CFRA_ForHO_exist == TRUE)
	{
		DecodePhy_ParametersCommon_csi_RS_CFRA_ForHO(&o_decoded_field->csi_RS_CFRA_ForHO, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->dynamicPRB_BundlingDL_exist == TRUE)
	{
		DecodePhy_ParametersCommon_dynamicPRB_BundlingDL(&o_decoded_field->dynamicPRB_BundlingDL, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->sp_CSI_ReportPUCCH_exist == TRUE)
	{
		DecodePhy_ParametersCommon_sp_CSI_ReportPUCCH(&o_decoded_field->sp_CSI_ReportPUCCH, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->sp_CSI_ReportPUSCH_exist == TRUE)
	{
		DecodePhy_ParametersCommon_sp_CSI_ReportPUSCH(&o_decoded_field->sp_CSI_ReportPUSCH, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->nzp_CSI_RS_IntefMgmt_exist == TRUE)
	{
		DecodePhy_ParametersCommon_nzp_CSI_RS_IntefMgmt(&o_decoded_field->nzp_CSI_RS_IntefMgmt, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->type2_SP_CSI_Feedback_LongPUCCH_exist == TRUE)
	{
		DecodePhy_ParametersCommon_type2_SP_CSI_Feedback_LongPUCCH(&o_decoded_field->type2_SP_CSI_Feedback_LongPUCCH, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->precoderGranularityCORESET_exist == TRUE)
	{
		DecodePhy_ParametersCommon_precoderGranularityCORESET(&o_decoded_field->precoderGranularityCORESET, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->dynamicHARQ_ACK_Codebook_exist == TRUE)
	{
		DecodePhy_ParametersCommon_dynamicHARQ_ACK_Codebook(&o_decoded_field->dynamicHARQ_ACK_Codebook, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->semiStaticHARQ_ACK_Codebook_exist == TRUE)
	{
		DecodePhy_ParametersCommon_semiStaticHARQ_ACK_Codebook(&o_decoded_field->semiStaticHARQ_ACK_Codebook, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->spatialBundlingHARQ_ACK_exist == TRUE)
	{
		DecodePhy_ParametersCommon_spatialBundlingHARQ_ACK(&o_decoded_field->spatialBundlingHARQ_ACK, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->dynamicBetaOffsetInd_HARQ_ACK_CSI_exist == TRUE)
	{
		DecodePhy_ParametersCommon_dynamicBetaOffsetInd_HARQ_ACK_CSI(&o_decoded_field->dynamicBetaOffsetInd_HARQ_ACK_CSI, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->pucch_Repetition_F1_3_4_exist == TRUE)
	{
		DecodePhy_ParametersCommon_pucch_Repetition_F1_3_4(&o_decoded_field->pucch_Repetition_F1_3_4, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->ra_Type0_PUSCH_exist == TRUE)
	{
		DecodePhy_ParametersCommon_ra_Type0_PUSCH(&o_decoded_field->ra_Type0_PUSCH, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->dynamicSwitchRA_Type0_1_PDSCH_exist == TRUE)
	{
		DecodePhy_ParametersCommon_dynamicSwitchRA_Type0_1_PDSCH(&o_decoded_field->dynamicSwitchRA_Type0_1_PDSCH, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->dynamicSwitchRA_Type0_1_PUSCH_exist == TRUE)
	{
		DecodePhy_ParametersCommon_dynamicSwitchRA_Type0_1_PUSCH(&o_decoded_field->dynamicSwitchRA_Type0_1_PUSCH, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->pdsch_MappingTypeA_exist == TRUE)
	{
		DecodePhy_ParametersCommon_pdsch_MappingTypeA(&o_decoded_field->pdsch_MappingTypeA, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->pdsch_MappingTypeB_exist == TRUE)
	{
		DecodePhy_ParametersCommon_pdsch_MappingTypeB(&o_decoded_field->pdsch_MappingTypeB, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->interleavingVRB_ToPRB_PDSCH_exist == TRUE)
	{
		DecodePhy_ParametersCommon_interleavingVRB_ToPRB_PDSCH(&o_decoded_field->interleavingVRB_ToPRB_PDSCH, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->interSlotFreqHopping_PUSCH_exist == TRUE)
	{
		DecodePhy_ParametersCommon_interSlotFreqHopping_PUSCH(&o_decoded_field->interSlotFreqHopping_PUSCH, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->type1_PUSCH_RepetitionMultiSlots_exist == TRUE)
	{
		DecodePhy_ParametersCommon_type1_PUSCH_RepetitionMultiSlots(&o_decoded_field->type1_PUSCH_RepetitionMultiSlots, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->type2_PUSCH_RepetitionMultiSlots_exist == TRUE)
	{
		DecodePhy_ParametersCommon_type2_PUSCH_RepetitionMultiSlots(&o_decoded_field->type2_PUSCH_RepetitionMultiSlots, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->pusch_RepetitionMultiSlots_exist == TRUE)
	{
		DecodePhy_ParametersCommon_pusch_RepetitionMultiSlots(&o_decoded_field->pusch_RepetitionMultiSlots, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->pdsch_RepetitionMultiSlots_exist == TRUE)
	{
		DecodePhy_ParametersCommon_pdsch_RepetitionMultiSlots(&o_decoded_field->pdsch_RepetitionMultiSlots, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->downlinkSPS_exist == TRUE)
	{
		DecodePhy_ParametersCommon_downlinkSPS(&o_decoded_field->downlinkSPS, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->configuredUL_GrantType1_exist == TRUE)
	{
		DecodePhy_ParametersCommon_configuredUL_GrantType1(&o_decoded_field->configuredUL_GrantType1, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->configuredUL_GrantType2_exist == TRUE)
	{
		DecodePhy_ParametersCommon_configuredUL_GrantType2(&o_decoded_field->configuredUL_GrantType2, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->pre_EmptIndication_DL_exist == TRUE)
	{
		DecodePhy_ParametersCommon_pre_EmptIndication_DL(&o_decoded_field->pre_EmptIndication_DL, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->cbg_TransIndication_DL_exist == TRUE)
	{
		DecodePhy_ParametersCommon_cbg_TransIndication_DL(&o_decoded_field->cbg_TransIndication_DL, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->cbg_TransIndication_UL_exist == TRUE)
	{
		DecodePhy_ParametersCommon_cbg_TransIndication_UL(&o_decoded_field->cbg_TransIndication_UL, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->cbg_FlushIndication_DL_exist == TRUE)
	{
		DecodePhy_ParametersCommon_cbg_FlushIndication_DL(&o_decoded_field->cbg_FlushIndication_DL, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->dynamicHARQ_ACK_CodeB_CBG_Retx_DL_exist == TRUE)
	{
		DecodePhy_ParametersCommon_dynamicHARQ_ACK_CodeB_CBG_Retx_DL(&o_decoded_field->dynamicHARQ_ACK_CodeB_CBG_Retx_DL, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->rateMatchingResrcSetSemi_Static_exist == TRUE)
	{
		DecodePhy_ParametersCommon_rateMatchingResrcSetSemi_Static(&o_decoded_field->rateMatchingResrcSetSemi_Static, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->rateMatchingResrcSetDynamic_exist == TRUE)
	{
		DecodePhy_ParametersCommon_rateMatchingResrcSetDynamic(&o_decoded_field->rateMatchingResrcSetDynamic, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->bwp_SwitchingDelay_exist == TRUE)
	{
		DecodePhy_ParametersCommon_bwp_SwitchingDelay(&o_decoded_field->bwp_SwitchingDelay, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

