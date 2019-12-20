/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * mimo_parameters_per_band.c - codec the message of MIMO-ParametersPerBand
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "mimo_parameters_per_band.h"


void EncodeMIMO_ParametersPerBand_maxNumberConfiguredTCIstatesPerCC(
	MIMO_ParametersPerBand_maxNumberConfiguredTCIstatesPerCC_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 3, bits_iter);
}

void EncodeMIMO_ParametersPerBand_maxNumberActiveTCI_PerBWP(
	MIMO_ParametersPerBand_maxNumberActiveTCI_PerBWP_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeMIMO_ParametersPerBand_tci_StatePDSCH(
	MIMO_ParametersPerBand_tci_StatePDSCH_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->maxNumberConfiguredTCIstatesPerCC_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->maxNumberActiveTCI_PerBWP_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->maxNumberConfiguredTCIstatesPerCC_exist == TRUE)
	{
		EncodeMIMO_ParametersPerBand_maxNumberConfiguredTCIstatesPerCC(i_encoded_field->maxNumberConfiguredTCIstatesPerCC, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->maxNumberActiveTCI_PerBWP_exist == TRUE)
	{
		EncodeMIMO_ParametersPerBand_maxNumberActiveTCI_PerBWP(i_encoded_field->maxNumberActiveTCI_PerBWP, buff, bits_iter, asn_error);
	}

}

void EncodeMIMO_ParametersPerBand_additionalActiveTCI_StatePDCCH(
	MIMO_ParametersPerBand_additionalActiveTCI_StatePDCCH_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeMIMO_ParametersPerBand_pusch_TransCoherence(
	MIMO_ParametersPerBand_pusch_TransCoherence_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeMIMO_ParametersPerBand_beamCorrespondence(
	MIMO_ParametersPerBand_beamCorrespondence_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeMIMO_ParametersPerBand_periodicBeamReport(
	MIMO_ParametersPerBand_periodicBeamReport_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeMIMO_ParametersPerBand_aperiodicBeamReport(
	MIMO_ParametersPerBand_aperiodicBeamReport_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeMIMO_ParametersPerBand_sp_BeamReportPUCCH(
	MIMO_ParametersPerBand_sp_BeamReportPUCCH_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeMIMO_ParametersPerBand_sp_BeamReportPUSCH(
	MIMO_ParametersPerBand_sp_BeamReportPUSCH_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeMIMO_ParametersPerBand_scs_15kHz(
	MIMO_ParametersPerBand_scs_15kHz_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeMIMO_ParametersPerBand_scs_30kHz(
	MIMO_ParametersPerBand_scs_30kHz_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeMIMO_ParametersPerBand_scs_60kHz(
	MIMO_ParametersPerBand_scs_60kHz_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeMIMO_ParametersPerBand_scs_120kHz(
	MIMO_ParametersPerBand_scs_120kHz_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeMIMO_ParametersPerBand_scs_240kHz(
	MIMO_ParametersPerBand_scs_240kHz_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeMIMO_ParametersPerBand_maxNumberRxTxBeamSwitchDL(
	MIMO_ParametersPerBand_maxNumberRxTxBeamSwitchDL_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->scs_15kHz_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->scs_30kHz_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->scs_60kHz_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->scs_120kHz_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->scs_240kHz_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->scs_15kHz_exist == TRUE)
	{
		EncodeMIMO_ParametersPerBand_scs_15kHz(i_encoded_field->scs_15kHz, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->scs_30kHz_exist == TRUE)
	{
		EncodeMIMO_ParametersPerBand_scs_30kHz(i_encoded_field->scs_30kHz, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->scs_60kHz_exist == TRUE)
	{
		EncodeMIMO_ParametersPerBand_scs_60kHz(i_encoded_field->scs_60kHz, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->scs_120kHz_exist == TRUE)
	{
		EncodeMIMO_ParametersPerBand_scs_120kHz(i_encoded_field->scs_120kHz, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->scs_240kHz_exist == TRUE)
	{
		EncodeMIMO_ParametersPerBand_scs_240kHz(i_encoded_field->scs_240kHz, buff, bits_iter, asn_error);
	}

}

void EncodeMIMO_ParametersPerBand_maxNumberNonGroupBeamReporting(
	MIMO_ParametersPerBand_maxNumberNonGroupBeamReporting_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeMIMO_ParametersPerBand_groupBeamReporting(
	MIMO_ParametersPerBand_groupBeamReporting_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeMIMO_ParametersPerBand_maxNumberSRS_ResourcePerSet(
	MIMO_ParametersPerBand_maxNumberSRS_ResourcePerSet_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 3, bits_iter);
}

void EncodeMIMO_ParametersPerBand_uplinkBeamManagement(
	MIMO_ParametersPerBand_uplinkBeamManagement_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeMIMO_ParametersPerBand_maxNumberSRS_ResourcePerSet(i_encoded_field->maxNumberSRS_ResourcePerSet, buff, bits_iter, asn_error);

	PutBits(buff, i_encoded_field->maxNumberSRS_ResourceSet - 1, 3, bits_iter);

}

void EncodeMIMO_ParametersPerBand_twoPortsPTRS_DL(
	MIMO_ParametersPerBand_twoPortsPTRS_DL_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeMIMO_ParametersPerBand_twoPortsPTRS_UL(
	MIMO_ParametersPerBand_twoPortsPTRS_UL_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeMIMO_ParametersPerBand_scs_15kHz_1(
	MIMO_ParametersPerBand_scs_15kHz_1_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeMIMO_ParametersPerBand_scs_30kHz_1(
	MIMO_ParametersPerBand_scs_30kHz_1_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeMIMO_ParametersPerBand_scs_60kHz_1(
	MIMO_ParametersPerBand_scs_60kHz_1_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeMIMO_ParametersPerBand_scs_120kHz_1(
	MIMO_ParametersPerBand_scs_120kHz_1_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeMIMO_ParametersPerBand_beamReportTiming(
	MIMO_ParametersPerBand_beamReportTiming_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->scs_15kHz_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->scs_30kHz_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->scs_60kHz_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->scs_120kHz_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->scs_15kHz_exist == TRUE)
	{
		EncodeMIMO_ParametersPerBand_scs_15kHz_1(i_encoded_field->scs_15kHz, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->scs_30kHz_exist == TRUE)
	{
		EncodeMIMO_ParametersPerBand_scs_30kHz_1(i_encoded_field->scs_30kHz, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->scs_60kHz_exist == TRUE)
	{
		EncodeMIMO_ParametersPerBand_scs_60kHz_1(i_encoded_field->scs_60kHz, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->scs_120kHz_exist == TRUE)
	{
		EncodeMIMO_ParametersPerBand_scs_120kHz_1(i_encoded_field->scs_120kHz, buff, bits_iter, asn_error);
	}

}

void EncodeMIMO_ParametersPerBand_ptrs_DensityRecommendationSetDL(
	MIMO_ParametersPerBand_ptrs_DensityRecommendationSetDL_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->scs_15kHz_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->scs_30kHz_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->scs_60kHz_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->scs_120kHz_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->scs_15kHz_exist == TRUE)
	{
		EncodePTRS_DensityRecommendationDL(&i_encoded_field->scs_15kHz, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->scs_30kHz_exist == TRUE)
	{
		EncodePTRS_DensityRecommendationDL(&i_encoded_field->scs_30kHz, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->scs_60kHz_exist == TRUE)
	{
		EncodePTRS_DensityRecommendationDL(&i_encoded_field->scs_60kHz, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->scs_120kHz_exist == TRUE)
	{
		EncodePTRS_DensityRecommendationDL(&i_encoded_field->scs_120kHz, buff, bits_iter, asn_error);
	}

}

void EncodeMIMO_ParametersPerBand_ptrs_DensityRecommendationSetUL(
	MIMO_ParametersPerBand_ptrs_DensityRecommendationSetUL_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->scs_15kHz_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->scs_30kHz_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->scs_60kHz_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->scs_120kHz_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->scs_15kHz_exist == TRUE)
	{
		EncodePTRS_DensityRecommendationUL(&i_encoded_field->scs_15kHz, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->scs_30kHz_exist == TRUE)
	{
		EncodePTRS_DensityRecommendationUL(&i_encoded_field->scs_30kHz, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->scs_60kHz_exist == TRUE)
	{
		EncodePTRS_DensityRecommendationUL(&i_encoded_field->scs_60kHz, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->scs_120kHz_exist == TRUE)
	{
		EncodePTRS_DensityRecommendationUL(&i_encoded_field->scs_120kHz, buff, bits_iter, asn_error);
	}

}

void EncodeMIMO_ParametersPerBand_aperiodicTRS(
	MIMO_ParametersPerBand_aperiodicTRS_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeMIMO_ParametersPerBand(
	MIMO_ParametersPerBand_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->tci_StatePDSCH_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->additionalActiveTCI_StatePDCCH_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->pusch_TransCoherence_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->beamCorrespondence_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->periodicBeamReport_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->aperiodicBeamReport_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->sp_BeamReportPUCCH_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->sp_BeamReportPUSCH_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->beamManagementSSB_CSI_RS_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->maxNumberRxBeam_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->maxNumberRxTxBeamSwitchDL_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->maxNumberNonGroupBeamReporting_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->groupBeamReporting_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->uplinkBeamManagement_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->maxNumberCSI_RS_BFR_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->maxNumberSSB_BFR_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->maxNumberCSI_RS_SSB_BFR_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->twoPortsPTRS_DL_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->twoPortsPTRS_UL_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->supportedSRS_Resources_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->srs_TxSwitch_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->maxNumberSimultaneousSRS_PerCC_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->beamReportTiming_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->ptrs_DensityRecommendationSetDL_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->ptrs_DensityRecommendationSetUL_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->csi_RS_ForTracking_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->aperiodicTRS_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->tci_StatePDSCH_exist == TRUE)
	{
		EncodeMIMO_ParametersPerBand_tci_StatePDSCH(&i_encoded_field->tci_StatePDSCH, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->additionalActiveTCI_StatePDCCH_exist == TRUE)
	{
		EncodeMIMO_ParametersPerBand_additionalActiveTCI_StatePDCCH(i_encoded_field->additionalActiveTCI_StatePDCCH, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->pusch_TransCoherence_exist == TRUE)
	{
		EncodeMIMO_ParametersPerBand_pusch_TransCoherence(i_encoded_field->pusch_TransCoherence, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->beamCorrespondence_exist == TRUE)
	{
		EncodeMIMO_ParametersPerBand_beamCorrespondence(i_encoded_field->beamCorrespondence, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->periodicBeamReport_exist == TRUE)
	{
		EncodeMIMO_ParametersPerBand_periodicBeamReport(i_encoded_field->periodicBeamReport, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->aperiodicBeamReport_exist == TRUE)
	{
		EncodeMIMO_ParametersPerBand_aperiodicBeamReport(i_encoded_field->aperiodicBeamReport, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->sp_BeamReportPUCCH_exist == TRUE)
	{
		EncodeMIMO_ParametersPerBand_sp_BeamReportPUCCH(i_encoded_field->sp_BeamReportPUCCH, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->sp_BeamReportPUSCH_exist == TRUE)
	{
		EncodeMIMO_ParametersPerBand_sp_BeamReportPUSCH(i_encoded_field->sp_BeamReportPUSCH, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->beamManagementSSB_CSI_RS_exist == TRUE)
	{
		EncodeBeamManagementSSB_CSI_RS(&i_encoded_field->beamManagementSSB_CSI_RS, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->maxNumberRxBeam_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->maxNumberRxBeam - 2, 3, bits_iter);
	}

	if(i_encoded_field->maxNumberRxTxBeamSwitchDL_exist == TRUE)
	{
		EncodeMIMO_ParametersPerBand_maxNumberRxTxBeamSwitchDL(&i_encoded_field->maxNumberRxTxBeamSwitchDL, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->maxNumberNonGroupBeamReporting_exist == TRUE)
	{
		EncodeMIMO_ParametersPerBand_maxNumberNonGroupBeamReporting(i_encoded_field->maxNumberNonGroupBeamReporting, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->groupBeamReporting_exist == TRUE)
	{
		EncodeMIMO_ParametersPerBand_groupBeamReporting(i_encoded_field->groupBeamReporting, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->uplinkBeamManagement_exist == TRUE)
	{
		EncodeMIMO_ParametersPerBand_uplinkBeamManagement(&i_encoded_field->uplinkBeamManagement, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->maxNumberCSI_RS_BFR_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->maxNumberCSI_RS_BFR - 1, 6, bits_iter);
	}

	if(i_encoded_field->maxNumberSSB_BFR_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->maxNumberSSB_BFR - 1, 6, bits_iter);
	}

	if(i_encoded_field->maxNumberCSI_RS_SSB_BFR_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->maxNumberCSI_RS_SSB_BFR - 1, 8, bits_iter);
	}

	if(i_encoded_field->twoPortsPTRS_DL_exist == TRUE)
	{
		EncodeMIMO_ParametersPerBand_twoPortsPTRS_DL(i_encoded_field->twoPortsPTRS_DL, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->twoPortsPTRS_UL_exist == TRUE)
	{
		EncodeMIMO_ParametersPerBand_twoPortsPTRS_UL(i_encoded_field->twoPortsPTRS_UL, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->supportedSRS_Resources_exist == TRUE)
	{
		EncodeSRS_Resources(&i_encoded_field->supportedSRS_Resources, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->srs_TxSwitch_exist == TRUE)
	{
		EncodeSRS_TxSwitch(&i_encoded_field->srs_TxSwitch, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->maxNumberSimultaneousSRS_PerCC_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->maxNumberSimultaneousSRS_PerCC - 1, 2, bits_iter);
	}

	if(i_encoded_field->beamReportTiming_exist == TRUE)
	{
		EncodeMIMO_ParametersPerBand_beamReportTiming(&i_encoded_field->beamReportTiming, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->ptrs_DensityRecommendationSetDL_exist == TRUE)
	{
		EncodeMIMO_ParametersPerBand_ptrs_DensityRecommendationSetDL(&i_encoded_field->ptrs_DensityRecommendationSetDL, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->ptrs_DensityRecommendationSetUL_exist == TRUE)
	{
		EncodeMIMO_ParametersPerBand_ptrs_DensityRecommendationSetUL(&i_encoded_field->ptrs_DensityRecommendationSetUL, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->csi_RS_ForTracking_exist == TRUE)
	{
		EncodeCSI_RS_ForTracking(&i_encoded_field->csi_RS_ForTracking, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->aperiodicTRS_exist == TRUE)
	{
		EncodeMIMO_ParametersPerBand_aperiodicTRS(i_encoded_field->aperiodicTRS, buff, bits_iter, asn_error);
	}

}

void DecodeMIMO_ParametersPerBand_maxNumberConfiguredTCIstatesPerCC(
	MIMO_ParametersPerBand_maxNumberConfiguredTCIstatesPerCC_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 3, bits_iter);
}

void DecodeMIMO_ParametersPerBand_maxNumberActiveTCI_PerBWP(
	MIMO_ParametersPerBand_maxNumberActiveTCI_PerBWP_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeMIMO_ParametersPerBand_tci_StatePDSCH(
	MIMO_ParametersPerBand_tci_StatePDSCH_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->maxNumberConfiguredTCIstatesPerCC_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->maxNumberActiveTCI_PerBWP_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->maxNumberConfiguredTCIstatesPerCC_exist == TRUE)
	{
		DecodeMIMO_ParametersPerBand_maxNumberConfiguredTCIstatesPerCC(&o_decoded_field->maxNumberConfiguredTCIstatesPerCC, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->maxNumberActiveTCI_PerBWP_exist == TRUE)
	{
		DecodeMIMO_ParametersPerBand_maxNumberActiveTCI_PerBWP(&o_decoded_field->maxNumberActiveTCI_PerBWP, buff, bits_iter, asn_error);
	}

}

void DecodeMIMO_ParametersPerBand_additionalActiveTCI_StatePDCCH(
	MIMO_ParametersPerBand_additionalActiveTCI_StatePDCCH_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeMIMO_ParametersPerBand_pusch_TransCoherence(
	MIMO_ParametersPerBand_pusch_TransCoherence_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeMIMO_ParametersPerBand_beamCorrespondence(
	MIMO_ParametersPerBand_beamCorrespondence_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeMIMO_ParametersPerBand_periodicBeamReport(
	MIMO_ParametersPerBand_periodicBeamReport_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeMIMO_ParametersPerBand_aperiodicBeamReport(
	MIMO_ParametersPerBand_aperiodicBeamReport_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeMIMO_ParametersPerBand_sp_BeamReportPUCCH(
	MIMO_ParametersPerBand_sp_BeamReportPUCCH_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeMIMO_ParametersPerBand_sp_BeamReportPUSCH(
	MIMO_ParametersPerBand_sp_BeamReportPUSCH_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeMIMO_ParametersPerBand_scs_15kHz(
	MIMO_ParametersPerBand_scs_15kHz_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeMIMO_ParametersPerBand_scs_30kHz(
	MIMO_ParametersPerBand_scs_30kHz_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeMIMO_ParametersPerBand_scs_60kHz(
	MIMO_ParametersPerBand_scs_60kHz_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeMIMO_ParametersPerBand_scs_120kHz(
	MIMO_ParametersPerBand_scs_120kHz_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeMIMO_ParametersPerBand_scs_240kHz(
	MIMO_ParametersPerBand_scs_240kHz_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeMIMO_ParametersPerBand_maxNumberRxTxBeamSwitchDL(
	MIMO_ParametersPerBand_maxNumberRxTxBeamSwitchDL_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->scs_15kHz_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->scs_30kHz_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->scs_60kHz_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->scs_120kHz_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->scs_240kHz_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->scs_15kHz_exist == TRUE)
	{
		DecodeMIMO_ParametersPerBand_scs_15kHz(&o_decoded_field->scs_15kHz, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->scs_30kHz_exist == TRUE)
	{
		DecodeMIMO_ParametersPerBand_scs_30kHz(&o_decoded_field->scs_30kHz, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->scs_60kHz_exist == TRUE)
	{
		DecodeMIMO_ParametersPerBand_scs_60kHz(&o_decoded_field->scs_60kHz, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->scs_120kHz_exist == TRUE)
	{
		DecodeMIMO_ParametersPerBand_scs_120kHz(&o_decoded_field->scs_120kHz, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->scs_240kHz_exist == TRUE)
	{
		DecodeMIMO_ParametersPerBand_scs_240kHz(&o_decoded_field->scs_240kHz, buff, bits_iter, asn_error);
	}

}

void DecodeMIMO_ParametersPerBand_maxNumberNonGroupBeamReporting(
	MIMO_ParametersPerBand_maxNumberNonGroupBeamReporting_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeMIMO_ParametersPerBand_groupBeamReporting(
	MIMO_ParametersPerBand_groupBeamReporting_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeMIMO_ParametersPerBand_maxNumberSRS_ResourcePerSet(
	MIMO_ParametersPerBand_maxNumberSRS_ResourcePerSet_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 3, bits_iter);
}

void DecodeMIMO_ParametersPerBand_uplinkBeamManagement(
	MIMO_ParametersPerBand_uplinkBeamManagement_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeMIMO_ParametersPerBand_maxNumberSRS_ResourcePerSet(&o_decoded_field->maxNumberSRS_ResourcePerSet, buff, bits_iter, asn_error);
	o_decoded_field->maxNumberSRS_ResourceSet = Get_bits(buff, 3, bits_iter) + 1;
}

void DecodeMIMO_ParametersPerBand_twoPortsPTRS_DL(
	MIMO_ParametersPerBand_twoPortsPTRS_DL_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeMIMO_ParametersPerBand_twoPortsPTRS_UL(
	MIMO_ParametersPerBand_twoPortsPTRS_UL_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeMIMO_ParametersPerBand_scs_15kHz_1(
	MIMO_ParametersPerBand_scs_15kHz_1_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeMIMO_ParametersPerBand_scs_30kHz_1(
	MIMO_ParametersPerBand_scs_30kHz_1_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeMIMO_ParametersPerBand_scs_60kHz_1(
	MIMO_ParametersPerBand_scs_60kHz_1_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeMIMO_ParametersPerBand_scs_120kHz_1(
	MIMO_ParametersPerBand_scs_120kHz_1_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeMIMO_ParametersPerBand_beamReportTiming(
	MIMO_ParametersPerBand_beamReportTiming_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->scs_15kHz_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->scs_30kHz_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->scs_60kHz_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->scs_120kHz_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->scs_15kHz_exist == TRUE)
	{
		DecodeMIMO_ParametersPerBand_scs_15kHz_1(&o_decoded_field->scs_15kHz, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->scs_30kHz_exist == TRUE)
	{
		DecodeMIMO_ParametersPerBand_scs_30kHz_1(&o_decoded_field->scs_30kHz, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->scs_60kHz_exist == TRUE)
	{
		DecodeMIMO_ParametersPerBand_scs_60kHz_1(&o_decoded_field->scs_60kHz, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->scs_120kHz_exist == TRUE)
	{
		DecodeMIMO_ParametersPerBand_scs_120kHz_1(&o_decoded_field->scs_120kHz, buff, bits_iter, asn_error);
	}

}

void DecodeMIMO_ParametersPerBand_ptrs_DensityRecommendationSetDL(
	MIMO_ParametersPerBand_ptrs_DensityRecommendationSetDL_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->scs_15kHz_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->scs_30kHz_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->scs_60kHz_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->scs_120kHz_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->scs_15kHz_exist == TRUE)
	{
		DecodePTRS_DensityRecommendationDL(&o_decoded_field->scs_15kHz, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->scs_30kHz_exist == TRUE)
	{
		DecodePTRS_DensityRecommendationDL(&o_decoded_field->scs_30kHz, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->scs_60kHz_exist == TRUE)
	{
		DecodePTRS_DensityRecommendationDL(&o_decoded_field->scs_60kHz, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->scs_120kHz_exist == TRUE)
	{
		DecodePTRS_DensityRecommendationDL(&o_decoded_field->scs_120kHz, buff, bits_iter, asn_error);
	}

}

void DecodeMIMO_ParametersPerBand_ptrs_DensityRecommendationSetUL(
	MIMO_ParametersPerBand_ptrs_DensityRecommendationSetUL_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->scs_15kHz_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->scs_30kHz_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->scs_60kHz_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->scs_120kHz_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->scs_15kHz_exist == TRUE)
	{
		DecodePTRS_DensityRecommendationUL(&o_decoded_field->scs_15kHz, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->scs_30kHz_exist == TRUE)
	{
		DecodePTRS_DensityRecommendationUL(&o_decoded_field->scs_30kHz, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->scs_60kHz_exist == TRUE)
	{
		DecodePTRS_DensityRecommendationUL(&o_decoded_field->scs_60kHz, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->scs_120kHz_exist == TRUE)
	{
		DecodePTRS_DensityRecommendationUL(&o_decoded_field->scs_120kHz, buff, bits_iter, asn_error);
	}

}

void DecodeMIMO_ParametersPerBand_aperiodicTRS(
	MIMO_ParametersPerBand_aperiodicTRS_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeMIMO_ParametersPerBand(
	MIMO_ParametersPerBand_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->tci_StatePDSCH_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->additionalActiveTCI_StatePDCCH_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->pusch_TransCoherence_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->beamCorrespondence_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->periodicBeamReport_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->aperiodicBeamReport_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->sp_BeamReportPUCCH_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->sp_BeamReportPUSCH_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->beamManagementSSB_CSI_RS_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->maxNumberRxBeam_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->maxNumberRxTxBeamSwitchDL_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->maxNumberNonGroupBeamReporting_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->groupBeamReporting_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->uplinkBeamManagement_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->maxNumberCSI_RS_BFR_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->maxNumberSSB_BFR_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->maxNumberCSI_RS_SSB_BFR_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->twoPortsPTRS_DL_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->twoPortsPTRS_UL_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->supportedSRS_Resources_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->srs_TxSwitch_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->maxNumberSimultaneousSRS_PerCC_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->beamReportTiming_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->ptrs_DensityRecommendationSetDL_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->ptrs_DensityRecommendationSetUL_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->csi_RS_ForTracking_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->aperiodicTRS_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->tci_StatePDSCH_exist == TRUE)
	{
		DecodeMIMO_ParametersPerBand_tci_StatePDSCH(&o_decoded_field->tci_StatePDSCH, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->additionalActiveTCI_StatePDCCH_exist == TRUE)
	{
		DecodeMIMO_ParametersPerBand_additionalActiveTCI_StatePDCCH(&o_decoded_field->additionalActiveTCI_StatePDCCH, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->pusch_TransCoherence_exist == TRUE)
	{
		DecodeMIMO_ParametersPerBand_pusch_TransCoherence(&o_decoded_field->pusch_TransCoherence, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->beamCorrespondence_exist == TRUE)
	{
		DecodeMIMO_ParametersPerBand_beamCorrespondence(&o_decoded_field->beamCorrespondence, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->periodicBeamReport_exist == TRUE)
	{
		DecodeMIMO_ParametersPerBand_periodicBeamReport(&o_decoded_field->periodicBeamReport, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->aperiodicBeamReport_exist == TRUE)
	{
		DecodeMIMO_ParametersPerBand_aperiodicBeamReport(&o_decoded_field->aperiodicBeamReport, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->sp_BeamReportPUCCH_exist == TRUE)
	{
		DecodeMIMO_ParametersPerBand_sp_BeamReportPUCCH(&o_decoded_field->sp_BeamReportPUCCH, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->sp_BeamReportPUSCH_exist == TRUE)
	{
		DecodeMIMO_ParametersPerBand_sp_BeamReportPUSCH(&o_decoded_field->sp_BeamReportPUSCH, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->beamManagementSSB_CSI_RS_exist == TRUE)
	{
		DecodeBeamManagementSSB_CSI_RS(&o_decoded_field->beamManagementSSB_CSI_RS, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->maxNumberRxBeam_exist == TRUE)
	{
		o_decoded_field->maxNumberRxBeam = Get_bits(buff, 3, bits_iter) + 2;
	}

	if(o_decoded_field->maxNumberRxTxBeamSwitchDL_exist == TRUE)
	{
		DecodeMIMO_ParametersPerBand_maxNumberRxTxBeamSwitchDL(&o_decoded_field->maxNumberRxTxBeamSwitchDL, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->maxNumberNonGroupBeamReporting_exist == TRUE)
	{
		DecodeMIMO_ParametersPerBand_maxNumberNonGroupBeamReporting(&o_decoded_field->maxNumberNonGroupBeamReporting, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->groupBeamReporting_exist == TRUE)
	{
		DecodeMIMO_ParametersPerBand_groupBeamReporting(&o_decoded_field->groupBeamReporting, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->uplinkBeamManagement_exist == TRUE)
	{
		DecodeMIMO_ParametersPerBand_uplinkBeamManagement(&o_decoded_field->uplinkBeamManagement, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->maxNumberCSI_RS_BFR_exist == TRUE)
	{
		o_decoded_field->maxNumberCSI_RS_BFR = Get_bits(buff, 6, bits_iter) + 1;
	}

	if(o_decoded_field->maxNumberSSB_BFR_exist == TRUE)
	{
		o_decoded_field->maxNumberSSB_BFR = Get_bits(buff, 6, bits_iter) + 1;
	}

	if(o_decoded_field->maxNumberCSI_RS_SSB_BFR_exist == TRUE)
	{
		o_decoded_field->maxNumberCSI_RS_SSB_BFR = Get_bits(buff, 8, bits_iter) + 1;
	}

	if(o_decoded_field->twoPortsPTRS_DL_exist == TRUE)
	{
		DecodeMIMO_ParametersPerBand_twoPortsPTRS_DL(&o_decoded_field->twoPortsPTRS_DL, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->twoPortsPTRS_UL_exist == TRUE)
	{
		DecodeMIMO_ParametersPerBand_twoPortsPTRS_UL(&o_decoded_field->twoPortsPTRS_UL, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->supportedSRS_Resources_exist == TRUE)
	{
		DecodeSRS_Resources(&o_decoded_field->supportedSRS_Resources, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->srs_TxSwitch_exist == TRUE)
	{
		DecodeSRS_TxSwitch(&o_decoded_field->srs_TxSwitch, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->maxNumberSimultaneousSRS_PerCC_exist == TRUE)
	{
		o_decoded_field->maxNumberSimultaneousSRS_PerCC = Get_bits(buff, 2, bits_iter) + 1;
	}

	if(o_decoded_field->beamReportTiming_exist == TRUE)
	{
		DecodeMIMO_ParametersPerBand_beamReportTiming(&o_decoded_field->beamReportTiming, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->ptrs_DensityRecommendationSetDL_exist == TRUE)
	{
		DecodeMIMO_ParametersPerBand_ptrs_DensityRecommendationSetDL(&o_decoded_field->ptrs_DensityRecommendationSetDL, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->ptrs_DensityRecommendationSetUL_exist == TRUE)
	{
		DecodeMIMO_ParametersPerBand_ptrs_DensityRecommendationSetUL(&o_decoded_field->ptrs_DensityRecommendationSetUL, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->csi_RS_ForTracking_exist == TRUE)
	{
		DecodeCSI_RS_ForTracking(&o_decoded_field->csi_RS_ForTracking, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->aperiodicTRS_exist == TRUE)
	{
		DecodeMIMO_ParametersPerBand_aperiodicTRS(&o_decoded_field->aperiodicTRS, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

