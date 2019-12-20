/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * phy_parameters_frx_diff.c - codec the message of Phy-ParametersFRX-Diff
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "phy_parameters_frx_diff.h"


void EncodePhy_ParametersFRX_Diff_dynamicSFI(
	Phy_ParametersFRX_Diff_dynamicSFI_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersFRX_Diff_oneFL_DMRS_TwoAdditionalDMRS(
	Phy_ParametersFRX_Diff_oneFL_DMRS_TwoAdditionalDMRS_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodePhy_ParametersFRX_Diff_twoFL_DMRS(
	Phy_ParametersFRX_Diff_twoFL_DMRS_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodePhy_ParametersFRX_Diff_twoFL_DMRS_TwoAdditionalDMRS(
	Phy_ParametersFRX_Diff_twoFL_DMRS_TwoAdditionalDMRS_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodePhy_ParametersFRX_Diff_oneFL_DMRS_ThreeAdditionalDMRS(
	Phy_ParametersFRX_Diff_oneFL_DMRS_ThreeAdditionalDMRS_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodePhy_ParametersFRX_Diff_supportedDMRS_TypeDL(
	Phy_ParametersFRX_Diff_supportedDMRS_TypeDL_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodePhy_ParametersFRX_Diff_supportedDMRS_TypeUL(
	Phy_ParametersFRX_Diff_supportedDMRS_TypeUL_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodePhy_ParametersFRX_Diff_semiOpenLoopCSI(
	Phy_ParametersFRX_Diff_semiOpenLoopCSI_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersFRX_Diff_csi_ReportWithoutPMI(
	Phy_ParametersFRX_Diff_csi_ReportWithoutPMI_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersFRX_Diff_csi_ReportWithoutCQI(
	Phy_ParametersFRX_Diff_csi_ReportWithoutCQI_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersFRX_Diff_onePortsPTRS(
	Phy_ParametersFRX_Diff_onePortsPTRS_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodePhy_ParametersFRX_Diff_twoPUCCH_F0_2_ConsecSymbols(
	Phy_ParametersFRX_Diff_twoPUCCH_F0_2_ConsecSymbols_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersFRX_Diff_pucch_F2_WithFH(
	Phy_ParametersFRX_Diff_pucch_F2_WithFH_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersFRX_Diff_pucch_F3_WithFH(
	Phy_ParametersFRX_Diff_pucch_F3_WithFH_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersFRX_Diff_pucch_F4_WithFH(
	Phy_ParametersFRX_Diff_pucch_F4_WithFH_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersFRX_Diff_freqHoppingPUCCH_F0_2(
	Phy_ParametersFRX_Diff_freqHoppingPUCCH_F0_2_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersFRX_Diff_freqHoppingPUCCH_F1_3_4(
	Phy_ParametersFRX_Diff_freqHoppingPUCCH_F1_3_4_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersFRX_Diff_mux_SR_HARQ_ACK_CSI_PUCCH(
	Phy_ParametersFRX_Diff_mux_SR_HARQ_ACK_CSI_PUCCH_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersFRX_Diff_uci_CodeBlockSegmentation(
	Phy_ParametersFRX_Diff_uci_CodeBlockSegmentation_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersFRX_Diff_onePUCCH_LongAndShortFormat(
	Phy_ParametersFRX_Diff_onePUCCH_LongAndShortFormat_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersFRX_Diff_twoPUCCH_AnyOthersInSlot(
	Phy_ParametersFRX_Diff_twoPUCCH_AnyOthersInSlot_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersFRX_Diff_intraSlotFreqHopping_PUSCH(
	Phy_ParametersFRX_Diff_intraSlotFreqHopping_PUSCH_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersFRX_Diff_pusch_LBRM(
	Phy_ParametersFRX_Diff_pusch_LBRM_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersFRX_Diff_pdcch_BlindDetectionCA(
	Phy_ParametersFRX_Diff_pdcch_BlindDetectionCA_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersFRX_Diff_tpc_PUSCH_RNTI(
	Phy_ParametersFRX_Diff_tpc_PUSCH_RNTI_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersFRX_Diff_tpc_PUCCH_RNTI(
	Phy_ParametersFRX_Diff_tpc_PUCCH_RNTI_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersFRX_Diff_tpc_SRS_RNTI(
	Phy_ParametersFRX_Diff_tpc_SRS_RNTI_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersFRX_Diff_absoluteTPC_Command(
	Phy_ParametersFRX_Diff_absoluteTPC_Command_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersFRX_Diff_twoDifferentTPC_Loop_PUSCH(
	Phy_ParametersFRX_Diff_twoDifferentTPC_Loop_PUSCH_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersFRX_Diff_twoDifferentTPC_Loop_PUCCH(
	Phy_ParametersFRX_Diff_twoDifferentTPC_Loop_PUCCH_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersFRX_Diff_pusch_HalfPi_BPSK(
	Phy_ParametersFRX_Diff_pusch_HalfPi_BPSK_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersFRX_Diff_pucch_F3_4_HalfPi_BPSK(
	Phy_ParametersFRX_Diff_pucch_F3_4_HalfPi_BPSK_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersFRX_Diff_almostContiguousCP_OFDM_UL(
	Phy_ParametersFRX_Diff_almostContiguousCP_OFDM_UL_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersFRX_Diff_sp_CSI_RS(
	Phy_ParametersFRX_Diff_sp_CSI_RS_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersFRX_Diff_sp_CSI_IM(
	Phy_ParametersFRX_Diff_sp_CSI_IM_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersFRX_Diff_tdd_MultiDL_UL_SwitchPerSlot(
	Phy_ParametersFRX_Diff_tdd_MultiDL_UL_SwitchPerSlot_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersFRX_Diff_multipleCORESET(
	Phy_ParametersFRX_Diff_multipleCORESET_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersFRX_Diff(
	Phy_ParametersFRX_Diff_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->dynamicSFI_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->oneFL_DMRS_TwoAdditionalDMRS_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->twoFL_DMRS_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->twoFL_DMRS_TwoAdditionalDMRS_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->oneFL_DMRS_ThreeAdditionalDMRS_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->supportedDMRS_TypeDL_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->supportedDMRS_TypeUL_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->semiOpenLoopCSI_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->csi_ReportWithoutPMI_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->csi_ReportWithoutCQI_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->onePortsPTRS_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->twoPUCCH_F0_2_ConsecSymbols_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->pucch_F2_WithFH_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->pucch_F3_WithFH_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->pucch_F4_WithFH_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->freqHoppingPUCCH_F0_2_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->freqHoppingPUCCH_F1_3_4_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->mux_SR_HARQ_ACK_CSI_PUCCH_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->uci_CodeBlockSegmentation_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->onePUCCH_LongAndShortFormat_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->twoPUCCH_AnyOthersInSlot_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->intraSlotFreqHopping_PUSCH_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->pusch_LBRM_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->pdcch_BlindDetectionCA_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->tpc_PUSCH_RNTI_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->tpc_PUCCH_RNTI_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->tpc_SRS_RNTI_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->absoluteTPC_Command_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->twoDifferentTPC_Loop_PUSCH_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->twoDifferentTPC_Loop_PUCCH_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->pusch_HalfPi_BPSK_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->pucch_F3_4_HalfPi_BPSK_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->almostContiguousCP_OFDM_UL_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->sp_CSI_RS_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->sp_CSI_IM_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->tdd_MultiDL_UL_SwitchPerSlot_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->multipleCORESET_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->dynamicSFI_exist == TRUE)
	{
		EncodePhy_ParametersFRX_Diff_dynamicSFI(i_encoded_field->dynamicSFI, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->oneFL_DMRS_TwoAdditionalDMRS_exist == TRUE)
	{
		EncodePhy_ParametersFRX_Diff_oneFL_DMRS_TwoAdditionalDMRS(&i_encoded_field->oneFL_DMRS_TwoAdditionalDMRS, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->twoFL_DMRS_exist == TRUE)
	{
		EncodePhy_ParametersFRX_Diff_twoFL_DMRS(&i_encoded_field->twoFL_DMRS, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->twoFL_DMRS_TwoAdditionalDMRS_exist == TRUE)
	{
		EncodePhy_ParametersFRX_Diff_twoFL_DMRS_TwoAdditionalDMRS(&i_encoded_field->twoFL_DMRS_TwoAdditionalDMRS, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->oneFL_DMRS_ThreeAdditionalDMRS_exist == TRUE)
	{
		EncodePhy_ParametersFRX_Diff_oneFL_DMRS_ThreeAdditionalDMRS(&i_encoded_field->oneFL_DMRS_ThreeAdditionalDMRS, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->supportedDMRS_TypeDL_exist == TRUE)
	{
		EncodePhy_ParametersFRX_Diff_supportedDMRS_TypeDL(i_encoded_field->supportedDMRS_TypeDL, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->supportedDMRS_TypeUL_exist == TRUE)
	{
		EncodePhy_ParametersFRX_Diff_supportedDMRS_TypeUL(i_encoded_field->supportedDMRS_TypeUL, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->semiOpenLoopCSI_exist == TRUE)
	{
		EncodePhy_ParametersFRX_Diff_semiOpenLoopCSI(i_encoded_field->semiOpenLoopCSI, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->csi_ReportWithoutPMI_exist == TRUE)
	{
		EncodePhy_ParametersFRX_Diff_csi_ReportWithoutPMI(i_encoded_field->csi_ReportWithoutPMI, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->csi_ReportWithoutCQI_exist == TRUE)
	{
		EncodePhy_ParametersFRX_Diff_csi_ReportWithoutCQI(i_encoded_field->csi_ReportWithoutCQI, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->onePortsPTRS_exist == TRUE)
	{
		EncodePhy_ParametersFRX_Diff_onePortsPTRS(&i_encoded_field->onePortsPTRS, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->twoPUCCH_F0_2_ConsecSymbols_exist == TRUE)
	{
		EncodePhy_ParametersFRX_Diff_twoPUCCH_F0_2_ConsecSymbols(i_encoded_field->twoPUCCH_F0_2_ConsecSymbols, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->pucch_F2_WithFH_exist == TRUE)
	{
		EncodePhy_ParametersFRX_Diff_pucch_F2_WithFH(i_encoded_field->pucch_F2_WithFH, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->pucch_F3_WithFH_exist == TRUE)
	{
		EncodePhy_ParametersFRX_Diff_pucch_F3_WithFH(i_encoded_field->pucch_F3_WithFH, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->pucch_F4_WithFH_exist == TRUE)
	{
		EncodePhy_ParametersFRX_Diff_pucch_F4_WithFH(i_encoded_field->pucch_F4_WithFH, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->freqHoppingPUCCH_F0_2_exist == TRUE)
	{
		EncodePhy_ParametersFRX_Diff_freqHoppingPUCCH_F0_2(i_encoded_field->freqHoppingPUCCH_F0_2, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->freqHoppingPUCCH_F1_3_4_exist == TRUE)
	{
		EncodePhy_ParametersFRX_Diff_freqHoppingPUCCH_F1_3_4(i_encoded_field->freqHoppingPUCCH_F1_3_4, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->mux_SR_HARQ_ACK_CSI_PUCCH_exist == TRUE)
	{
		EncodePhy_ParametersFRX_Diff_mux_SR_HARQ_ACK_CSI_PUCCH(i_encoded_field->mux_SR_HARQ_ACK_CSI_PUCCH, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->uci_CodeBlockSegmentation_exist == TRUE)
	{
		EncodePhy_ParametersFRX_Diff_uci_CodeBlockSegmentation(i_encoded_field->uci_CodeBlockSegmentation, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->onePUCCH_LongAndShortFormat_exist == TRUE)
	{
		EncodePhy_ParametersFRX_Diff_onePUCCH_LongAndShortFormat(i_encoded_field->onePUCCH_LongAndShortFormat, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->twoPUCCH_AnyOthersInSlot_exist == TRUE)
	{
		EncodePhy_ParametersFRX_Diff_twoPUCCH_AnyOthersInSlot(i_encoded_field->twoPUCCH_AnyOthersInSlot, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->intraSlotFreqHopping_PUSCH_exist == TRUE)
	{
		EncodePhy_ParametersFRX_Diff_intraSlotFreqHopping_PUSCH(i_encoded_field->intraSlotFreqHopping_PUSCH, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->pusch_LBRM_exist == TRUE)
	{
		EncodePhy_ParametersFRX_Diff_pusch_LBRM(i_encoded_field->pusch_LBRM, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->pdcch_BlindDetectionCA_exist == TRUE)
	{
		EncodePhy_ParametersFRX_Diff_pdcch_BlindDetectionCA(i_encoded_field->pdcch_BlindDetectionCA, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->tpc_PUSCH_RNTI_exist == TRUE)
	{
		EncodePhy_ParametersFRX_Diff_tpc_PUSCH_RNTI(i_encoded_field->tpc_PUSCH_RNTI, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->tpc_PUCCH_RNTI_exist == TRUE)
	{
		EncodePhy_ParametersFRX_Diff_tpc_PUCCH_RNTI(i_encoded_field->tpc_PUCCH_RNTI, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->tpc_SRS_RNTI_exist == TRUE)
	{
		EncodePhy_ParametersFRX_Diff_tpc_SRS_RNTI(i_encoded_field->tpc_SRS_RNTI, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->absoluteTPC_Command_exist == TRUE)
	{
		EncodePhy_ParametersFRX_Diff_absoluteTPC_Command(i_encoded_field->absoluteTPC_Command, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->twoDifferentTPC_Loop_PUSCH_exist == TRUE)
	{
		EncodePhy_ParametersFRX_Diff_twoDifferentTPC_Loop_PUSCH(i_encoded_field->twoDifferentTPC_Loop_PUSCH, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->twoDifferentTPC_Loop_PUCCH_exist == TRUE)
	{
		EncodePhy_ParametersFRX_Diff_twoDifferentTPC_Loop_PUCCH(i_encoded_field->twoDifferentTPC_Loop_PUCCH, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->pusch_HalfPi_BPSK_exist == TRUE)
	{
		EncodePhy_ParametersFRX_Diff_pusch_HalfPi_BPSK(i_encoded_field->pusch_HalfPi_BPSK, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->pucch_F3_4_HalfPi_BPSK_exist == TRUE)
	{
		EncodePhy_ParametersFRX_Diff_pucch_F3_4_HalfPi_BPSK(i_encoded_field->pucch_F3_4_HalfPi_BPSK, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->almostContiguousCP_OFDM_UL_exist == TRUE)
	{
		EncodePhy_ParametersFRX_Diff_almostContiguousCP_OFDM_UL(i_encoded_field->almostContiguousCP_OFDM_UL, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->sp_CSI_RS_exist == TRUE)
	{
		EncodePhy_ParametersFRX_Diff_sp_CSI_RS(i_encoded_field->sp_CSI_RS, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->sp_CSI_IM_exist == TRUE)
	{
		EncodePhy_ParametersFRX_Diff_sp_CSI_IM(i_encoded_field->sp_CSI_IM, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->tdd_MultiDL_UL_SwitchPerSlot_exist == TRUE)
	{
		EncodePhy_ParametersFRX_Diff_tdd_MultiDL_UL_SwitchPerSlot(i_encoded_field->tdd_MultiDL_UL_SwitchPerSlot, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->multipleCORESET_exist == TRUE)
	{
		EncodePhy_ParametersFRX_Diff_multipleCORESET(i_encoded_field->multipleCORESET, buff, bits_iter, asn_error);
	}

}

void DecodePhy_ParametersFRX_Diff_dynamicSFI(
	Phy_ParametersFRX_Diff_dynamicSFI_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersFRX_Diff_oneFL_DMRS_TwoAdditionalDMRS(
	Phy_ParametersFRX_Diff_oneFL_DMRS_TwoAdditionalDMRS_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;

	bits_num = 2;
	o_decoded_field->bits_num = bits_num;
	o_decoded_field->value[0] = Get_bits(buff, bits_num, bits_iter);

}

void DecodePhy_ParametersFRX_Diff_twoFL_DMRS(
	Phy_ParametersFRX_Diff_twoFL_DMRS_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;

	bits_num = 2;
	o_decoded_field->bits_num = bits_num;
	o_decoded_field->value[0] = Get_bits(buff, bits_num, bits_iter);

}

void DecodePhy_ParametersFRX_Diff_twoFL_DMRS_TwoAdditionalDMRS(
	Phy_ParametersFRX_Diff_twoFL_DMRS_TwoAdditionalDMRS_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;

	bits_num = 2;
	o_decoded_field->bits_num = bits_num;
	o_decoded_field->value[0] = Get_bits(buff, bits_num, bits_iter);

}

void DecodePhy_ParametersFRX_Diff_oneFL_DMRS_ThreeAdditionalDMRS(
	Phy_ParametersFRX_Diff_oneFL_DMRS_ThreeAdditionalDMRS_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;

	bits_num = 2;
	o_decoded_field->bits_num = bits_num;
	o_decoded_field->value[0] = Get_bits(buff, bits_num, bits_iter);

}

void DecodePhy_ParametersFRX_Diff_supportedDMRS_TypeDL(
	Phy_ParametersFRX_Diff_supportedDMRS_TypeDL_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodePhy_ParametersFRX_Diff_supportedDMRS_TypeUL(
	Phy_ParametersFRX_Diff_supportedDMRS_TypeUL_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodePhy_ParametersFRX_Diff_semiOpenLoopCSI(
	Phy_ParametersFRX_Diff_semiOpenLoopCSI_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersFRX_Diff_csi_ReportWithoutPMI(
	Phy_ParametersFRX_Diff_csi_ReportWithoutPMI_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersFRX_Diff_csi_ReportWithoutCQI(
	Phy_ParametersFRX_Diff_csi_ReportWithoutCQI_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersFRX_Diff_onePortsPTRS(
	Phy_ParametersFRX_Diff_onePortsPTRS_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;

	bits_num = 2;
	o_decoded_field->bits_num = bits_num;
	o_decoded_field->value[0] = Get_bits(buff, bits_num, bits_iter);

}

void DecodePhy_ParametersFRX_Diff_twoPUCCH_F0_2_ConsecSymbols(
	Phy_ParametersFRX_Diff_twoPUCCH_F0_2_ConsecSymbols_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersFRX_Diff_pucch_F2_WithFH(
	Phy_ParametersFRX_Diff_pucch_F2_WithFH_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersFRX_Diff_pucch_F3_WithFH(
	Phy_ParametersFRX_Diff_pucch_F3_WithFH_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersFRX_Diff_pucch_F4_WithFH(
	Phy_ParametersFRX_Diff_pucch_F4_WithFH_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersFRX_Diff_freqHoppingPUCCH_F0_2(
	Phy_ParametersFRX_Diff_freqHoppingPUCCH_F0_2_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersFRX_Diff_freqHoppingPUCCH_F1_3_4(
	Phy_ParametersFRX_Diff_freqHoppingPUCCH_F1_3_4_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersFRX_Diff_mux_SR_HARQ_ACK_CSI_PUCCH(
	Phy_ParametersFRX_Diff_mux_SR_HARQ_ACK_CSI_PUCCH_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersFRX_Diff_uci_CodeBlockSegmentation(
	Phy_ParametersFRX_Diff_uci_CodeBlockSegmentation_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersFRX_Diff_onePUCCH_LongAndShortFormat(
	Phy_ParametersFRX_Diff_onePUCCH_LongAndShortFormat_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersFRX_Diff_twoPUCCH_AnyOthersInSlot(
	Phy_ParametersFRX_Diff_twoPUCCH_AnyOthersInSlot_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersFRX_Diff_intraSlotFreqHopping_PUSCH(
	Phy_ParametersFRX_Diff_intraSlotFreqHopping_PUSCH_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersFRX_Diff_pusch_LBRM(
	Phy_ParametersFRX_Diff_pusch_LBRM_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersFRX_Diff_pdcch_BlindDetectionCA(
	Phy_ParametersFRX_Diff_pdcch_BlindDetectionCA_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersFRX_Diff_tpc_PUSCH_RNTI(
	Phy_ParametersFRX_Diff_tpc_PUSCH_RNTI_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersFRX_Diff_tpc_PUCCH_RNTI(
	Phy_ParametersFRX_Diff_tpc_PUCCH_RNTI_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersFRX_Diff_tpc_SRS_RNTI(
	Phy_ParametersFRX_Diff_tpc_SRS_RNTI_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersFRX_Diff_absoluteTPC_Command(
	Phy_ParametersFRX_Diff_absoluteTPC_Command_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersFRX_Diff_twoDifferentTPC_Loop_PUSCH(
	Phy_ParametersFRX_Diff_twoDifferentTPC_Loop_PUSCH_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersFRX_Diff_twoDifferentTPC_Loop_PUCCH(
	Phy_ParametersFRX_Diff_twoDifferentTPC_Loop_PUCCH_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersFRX_Diff_pusch_HalfPi_BPSK(
	Phy_ParametersFRX_Diff_pusch_HalfPi_BPSK_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersFRX_Diff_pucch_F3_4_HalfPi_BPSK(
	Phy_ParametersFRX_Diff_pucch_F3_4_HalfPi_BPSK_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersFRX_Diff_almostContiguousCP_OFDM_UL(
	Phy_ParametersFRX_Diff_almostContiguousCP_OFDM_UL_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersFRX_Diff_sp_CSI_RS(
	Phy_ParametersFRX_Diff_sp_CSI_RS_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersFRX_Diff_sp_CSI_IM(
	Phy_ParametersFRX_Diff_sp_CSI_IM_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersFRX_Diff_tdd_MultiDL_UL_SwitchPerSlot(
	Phy_ParametersFRX_Diff_tdd_MultiDL_UL_SwitchPerSlot_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersFRX_Diff_multipleCORESET(
	Phy_ParametersFRX_Diff_multipleCORESET_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersFRX_Diff(
	Phy_ParametersFRX_Diff_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->dynamicSFI_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->oneFL_DMRS_TwoAdditionalDMRS_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->twoFL_DMRS_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->twoFL_DMRS_TwoAdditionalDMRS_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->oneFL_DMRS_ThreeAdditionalDMRS_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->supportedDMRS_TypeDL_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->supportedDMRS_TypeUL_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->semiOpenLoopCSI_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->csi_ReportWithoutPMI_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->csi_ReportWithoutCQI_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->onePortsPTRS_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->twoPUCCH_F0_2_ConsecSymbols_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->pucch_F2_WithFH_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->pucch_F3_WithFH_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->pucch_F4_WithFH_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->freqHoppingPUCCH_F0_2_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->freqHoppingPUCCH_F1_3_4_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->mux_SR_HARQ_ACK_CSI_PUCCH_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->uci_CodeBlockSegmentation_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->onePUCCH_LongAndShortFormat_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->twoPUCCH_AnyOthersInSlot_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->intraSlotFreqHopping_PUSCH_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->pusch_LBRM_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->pdcch_BlindDetectionCA_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->tpc_PUSCH_RNTI_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->tpc_PUCCH_RNTI_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->tpc_SRS_RNTI_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->absoluteTPC_Command_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->twoDifferentTPC_Loop_PUSCH_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->twoDifferentTPC_Loop_PUCCH_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->pusch_HalfPi_BPSK_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->pucch_F3_4_HalfPi_BPSK_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->almostContiguousCP_OFDM_UL_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->sp_CSI_RS_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->sp_CSI_IM_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->tdd_MultiDL_UL_SwitchPerSlot_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->multipleCORESET_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->dynamicSFI_exist == TRUE)
	{
		DecodePhy_ParametersFRX_Diff_dynamicSFI(&o_decoded_field->dynamicSFI, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->oneFL_DMRS_TwoAdditionalDMRS_exist == TRUE)
	{
		DecodePhy_ParametersFRX_Diff_oneFL_DMRS_TwoAdditionalDMRS(&o_decoded_field->oneFL_DMRS_TwoAdditionalDMRS, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->twoFL_DMRS_exist == TRUE)
	{
		DecodePhy_ParametersFRX_Diff_twoFL_DMRS(&o_decoded_field->twoFL_DMRS, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->twoFL_DMRS_TwoAdditionalDMRS_exist == TRUE)
	{
		DecodePhy_ParametersFRX_Diff_twoFL_DMRS_TwoAdditionalDMRS(&o_decoded_field->twoFL_DMRS_TwoAdditionalDMRS, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->oneFL_DMRS_ThreeAdditionalDMRS_exist == TRUE)
	{
		DecodePhy_ParametersFRX_Diff_oneFL_DMRS_ThreeAdditionalDMRS(&o_decoded_field->oneFL_DMRS_ThreeAdditionalDMRS, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->supportedDMRS_TypeDL_exist == TRUE)
	{
		DecodePhy_ParametersFRX_Diff_supportedDMRS_TypeDL(&o_decoded_field->supportedDMRS_TypeDL, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->supportedDMRS_TypeUL_exist == TRUE)
	{
		DecodePhy_ParametersFRX_Diff_supportedDMRS_TypeUL(&o_decoded_field->supportedDMRS_TypeUL, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->semiOpenLoopCSI_exist == TRUE)
	{
		DecodePhy_ParametersFRX_Diff_semiOpenLoopCSI(&o_decoded_field->semiOpenLoopCSI, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->csi_ReportWithoutPMI_exist == TRUE)
	{
		DecodePhy_ParametersFRX_Diff_csi_ReportWithoutPMI(&o_decoded_field->csi_ReportWithoutPMI, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->csi_ReportWithoutCQI_exist == TRUE)
	{
		DecodePhy_ParametersFRX_Diff_csi_ReportWithoutCQI(&o_decoded_field->csi_ReportWithoutCQI, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->onePortsPTRS_exist == TRUE)
	{
		DecodePhy_ParametersFRX_Diff_onePortsPTRS(&o_decoded_field->onePortsPTRS, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->twoPUCCH_F0_2_ConsecSymbols_exist == TRUE)
	{
		DecodePhy_ParametersFRX_Diff_twoPUCCH_F0_2_ConsecSymbols(&o_decoded_field->twoPUCCH_F0_2_ConsecSymbols, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->pucch_F2_WithFH_exist == TRUE)
	{
		DecodePhy_ParametersFRX_Diff_pucch_F2_WithFH(&o_decoded_field->pucch_F2_WithFH, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->pucch_F3_WithFH_exist == TRUE)
	{
		DecodePhy_ParametersFRX_Diff_pucch_F3_WithFH(&o_decoded_field->pucch_F3_WithFH, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->pucch_F4_WithFH_exist == TRUE)
	{
		DecodePhy_ParametersFRX_Diff_pucch_F4_WithFH(&o_decoded_field->pucch_F4_WithFH, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->freqHoppingPUCCH_F0_2_exist == TRUE)
	{
		DecodePhy_ParametersFRX_Diff_freqHoppingPUCCH_F0_2(&o_decoded_field->freqHoppingPUCCH_F0_2, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->freqHoppingPUCCH_F1_3_4_exist == TRUE)
	{
		DecodePhy_ParametersFRX_Diff_freqHoppingPUCCH_F1_3_4(&o_decoded_field->freqHoppingPUCCH_F1_3_4, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->mux_SR_HARQ_ACK_CSI_PUCCH_exist == TRUE)
	{
		DecodePhy_ParametersFRX_Diff_mux_SR_HARQ_ACK_CSI_PUCCH(&o_decoded_field->mux_SR_HARQ_ACK_CSI_PUCCH, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->uci_CodeBlockSegmentation_exist == TRUE)
	{
		DecodePhy_ParametersFRX_Diff_uci_CodeBlockSegmentation(&o_decoded_field->uci_CodeBlockSegmentation, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->onePUCCH_LongAndShortFormat_exist == TRUE)
	{
		DecodePhy_ParametersFRX_Diff_onePUCCH_LongAndShortFormat(&o_decoded_field->onePUCCH_LongAndShortFormat, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->twoPUCCH_AnyOthersInSlot_exist == TRUE)
	{
		DecodePhy_ParametersFRX_Diff_twoPUCCH_AnyOthersInSlot(&o_decoded_field->twoPUCCH_AnyOthersInSlot, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->intraSlotFreqHopping_PUSCH_exist == TRUE)
	{
		DecodePhy_ParametersFRX_Diff_intraSlotFreqHopping_PUSCH(&o_decoded_field->intraSlotFreqHopping_PUSCH, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->pusch_LBRM_exist == TRUE)
	{
		DecodePhy_ParametersFRX_Diff_pusch_LBRM(&o_decoded_field->pusch_LBRM, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->pdcch_BlindDetectionCA_exist == TRUE)
	{
		DecodePhy_ParametersFRX_Diff_pdcch_BlindDetectionCA(&o_decoded_field->pdcch_BlindDetectionCA, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->tpc_PUSCH_RNTI_exist == TRUE)
	{
		DecodePhy_ParametersFRX_Diff_tpc_PUSCH_RNTI(&o_decoded_field->tpc_PUSCH_RNTI, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->tpc_PUCCH_RNTI_exist == TRUE)
	{
		DecodePhy_ParametersFRX_Diff_tpc_PUCCH_RNTI(&o_decoded_field->tpc_PUCCH_RNTI, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->tpc_SRS_RNTI_exist == TRUE)
	{
		DecodePhy_ParametersFRX_Diff_tpc_SRS_RNTI(&o_decoded_field->tpc_SRS_RNTI, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->absoluteTPC_Command_exist == TRUE)
	{
		DecodePhy_ParametersFRX_Diff_absoluteTPC_Command(&o_decoded_field->absoluteTPC_Command, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->twoDifferentTPC_Loop_PUSCH_exist == TRUE)
	{
		DecodePhy_ParametersFRX_Diff_twoDifferentTPC_Loop_PUSCH(&o_decoded_field->twoDifferentTPC_Loop_PUSCH, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->twoDifferentTPC_Loop_PUCCH_exist == TRUE)
	{
		DecodePhy_ParametersFRX_Diff_twoDifferentTPC_Loop_PUCCH(&o_decoded_field->twoDifferentTPC_Loop_PUCCH, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->pusch_HalfPi_BPSK_exist == TRUE)
	{
		DecodePhy_ParametersFRX_Diff_pusch_HalfPi_BPSK(&o_decoded_field->pusch_HalfPi_BPSK, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->pucch_F3_4_HalfPi_BPSK_exist == TRUE)
	{
		DecodePhy_ParametersFRX_Diff_pucch_F3_4_HalfPi_BPSK(&o_decoded_field->pucch_F3_4_HalfPi_BPSK, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->almostContiguousCP_OFDM_UL_exist == TRUE)
	{
		DecodePhy_ParametersFRX_Diff_almostContiguousCP_OFDM_UL(&o_decoded_field->almostContiguousCP_OFDM_UL, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->sp_CSI_RS_exist == TRUE)
	{
		DecodePhy_ParametersFRX_Diff_sp_CSI_RS(&o_decoded_field->sp_CSI_RS, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->sp_CSI_IM_exist == TRUE)
	{
		DecodePhy_ParametersFRX_Diff_sp_CSI_IM(&o_decoded_field->sp_CSI_IM, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->tdd_MultiDL_UL_SwitchPerSlot_exist == TRUE)
	{
		DecodePhy_ParametersFRX_Diff_tdd_MultiDL_UL_SwitchPerSlot(&o_decoded_field->tdd_MultiDL_UL_SwitchPerSlot, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->multipleCORESET_exist == TRUE)
	{
		DecodePhy_ParametersFRX_Diff_multipleCORESET(&o_decoded_field->multipleCORESET, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

