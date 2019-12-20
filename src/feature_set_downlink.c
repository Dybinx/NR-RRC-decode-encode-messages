/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * feature_set_downlink.c - codec the message of FeatureSetDownlink
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "feature_set_downlink.h"


void EncodeFeatureSetDownlink_featureSetListPerDownlinkCC(
	FeatureSetDownlink_featureSetListPerDownlinkCC_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 5, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeFeatureSetDownlinkPerCC_Id(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeFeatureSetDownlink_scalingFactor(
	FeatureSetDownlink_scalingFactor_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeFeatureSetDownlink_crossCarrierSchedulingDL_OtherSCS(
	FeatureSetDownlink_crossCarrierSchedulingDL_OtherSCS_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeFeatureSetDownlink_scellWithoutSSB(
	FeatureSetDownlink_scellWithoutSSB_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeFeatureSetDownlink_csi_RS_MeasSCellWithoutSSB(
	FeatureSetDownlink_csi_RS_MeasSCellWithoutSSB_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeFeatureSetDownlink_srs_AssocCSI_RS(
	FeatureSetDownlink_srs_AssocCSI_RS_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeFeatureSetDownlink_type1_3_CSS(
	FeatureSetDownlink_type1_3_CSS_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeFeatureSetDownlink_pdcchMonitoringAnyOccasions(
	FeatureSetDownlink_pdcchMonitoringAnyOccasions_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodeFeatureSetDownlink_pdcchMonitoringAnyOccasionsWithSpanGap(
	FeatureSetDownlink_pdcchMonitoringAnyOccasionsWithSpanGap_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeFeatureSetDownlink_ue_SpecificUL_DL_Assignment(
	FeatureSetDownlink_ue_SpecificUL_DL_Assignment_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeFeatureSetDownlink_searchSpaceSharingCA_DL(
	FeatureSetDownlink_searchSpaceSharingCA_DL_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeFeatureSetDownlink_scs_60kHz(
	FeatureSetDownlink_scs_60kHz_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeFeatureSetDownlink_sch_120kHz(
	FeatureSetDownlink_sch_120kHz_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodeFeatureSetDownlink_timeDurationForQCL(
	FeatureSetDownlink_timeDurationForQCL_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->scs_60kHz_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->sch_120kHz_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->scs_60kHz_exist == TRUE)
	{
		EncodeFeatureSetDownlink_scs_60kHz(i_encoded_field->scs_60kHz, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->sch_120kHz_exist == TRUE)
	{
		EncodeFeatureSetDownlink_sch_120kHz(i_encoded_field->sch_120kHz, buff, bits_iter, asn_error);
	}

}

void EncodeFeatureSetDownlink_scs_15kHz(
	FeatureSetDownlink_scs_15kHz_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeFeatureSetDownlink_scs_30kHz(
	FeatureSetDownlink_scs_30kHz_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeFeatureSetDownlink_scs_60kHz_1(
	FeatureSetDownlink_scs_60kHz_1_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeFeatureSetDownlink_scs_120kHz(
	FeatureSetDownlink_scs_120kHz_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeFeatureSetDownlink_pdsch_DifferentTB_PerSlot(
	FeatureSetDownlink_pdsch_DifferentTB_PerSlot_t *i_encoded_field, 
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
		EncodeFeatureSetDownlink_scs_15kHz(i_encoded_field->scs_15kHz, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->scs_30kHz_exist == TRUE)
	{
		EncodeFeatureSetDownlink_scs_30kHz(i_encoded_field->scs_30kHz, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->scs_60kHz_exist == TRUE)
	{
		EncodeFeatureSetDownlink_scs_60kHz_1(i_encoded_field->scs_60kHz, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->scs_120kHz_exist == TRUE)
	{
		EncodeFeatureSetDownlink_scs_120kHz(i_encoded_field->scs_120kHz, buff, bits_iter, asn_error);
	}

}

void EncodeFeatureSetDownlink_typeI_SinglePanelCodebookList(
	FeatureSetDownlink_typeI_SinglePanelCodebookList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 4, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeTypeI_SinglePanelCodebook(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeFeatureSetDownlink_typeI_MultiPanelCodebookList(
	FeatureSetDownlink_typeI_MultiPanelCodebookList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 4, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeTypeI_MultiPanelCodebook(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeFeatureSetDownlink_typeII_CodebookList(
	FeatureSetDownlink_typeII_CodebookList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 4, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeTypeII_Codebook(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeFeatureSetDownlink_typeII_CodebookPortSelectionList(
	FeatureSetDownlink_typeII_CodebookPortSelectionList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 4, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeTypeII_CodebookPortSelection(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeFeatureSetDownlink(
	FeatureSetDownlink_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->intraBandFreqSeparationDL_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->scalingFactor_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->crossCarrierSchedulingDL_OtherSCS_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->scellWithoutSSB_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->csi_RS_MeasSCellWithoutSSB_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->srs_AssocCSI_RS_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->type1_3_CSS_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->pdcchMonitoringAnyOccasions_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->pdcchMonitoringAnyOccasionsWithSpanGap_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->ue_SpecificUL_DL_Assignment_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->searchSpaceSharingCA_DL_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->timeDurationForQCL_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->pdsch_DifferentTB_PerSlot_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->csi_RS_IM_ReceptionForFeedback_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->typeI_SinglePanelCodebookList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->typeI_MultiPanelCodebookList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->typeII_CodebookList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->typeII_CodebookPortSelectionList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodeFeatureSetDownlink_featureSetListPerDownlinkCC(&i_encoded_field->featureSetListPerDownlinkCC, buff, bits_iter, asn_error);

	if(i_encoded_field->intraBandFreqSeparationDL_exist == TRUE)
	{
		EncodeFreqSeparationClass(i_encoded_field->intraBandFreqSeparationDL, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->scalingFactor_exist == TRUE)
	{
		EncodeFeatureSetDownlink_scalingFactor(i_encoded_field->scalingFactor, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->crossCarrierSchedulingDL_OtherSCS_exist == TRUE)
	{
		EncodeFeatureSetDownlink_crossCarrierSchedulingDL_OtherSCS(i_encoded_field->crossCarrierSchedulingDL_OtherSCS, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->scellWithoutSSB_exist == TRUE)
	{
		EncodeFeatureSetDownlink_scellWithoutSSB(i_encoded_field->scellWithoutSSB, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->csi_RS_MeasSCellWithoutSSB_exist == TRUE)
	{
		EncodeFeatureSetDownlink_csi_RS_MeasSCellWithoutSSB(i_encoded_field->csi_RS_MeasSCellWithoutSSB, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->srs_AssocCSI_RS_exist == TRUE)
	{
		EncodeFeatureSetDownlink_srs_AssocCSI_RS(i_encoded_field->srs_AssocCSI_RS, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->type1_3_CSS_exist == TRUE)
	{
		EncodeFeatureSetDownlink_type1_3_CSS(i_encoded_field->type1_3_CSS, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->pdcchMonitoringAnyOccasions_exist == TRUE)
	{
		EncodeFeatureSetDownlink_pdcchMonitoringAnyOccasions(i_encoded_field->pdcchMonitoringAnyOccasions, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->pdcchMonitoringAnyOccasionsWithSpanGap_exist == TRUE)
	{
		EncodeFeatureSetDownlink_pdcchMonitoringAnyOccasionsWithSpanGap(i_encoded_field->pdcchMonitoringAnyOccasionsWithSpanGap, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->ue_SpecificUL_DL_Assignment_exist == TRUE)
	{
		EncodeFeatureSetDownlink_ue_SpecificUL_DL_Assignment(i_encoded_field->ue_SpecificUL_DL_Assignment, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->searchSpaceSharingCA_DL_exist == TRUE)
	{
		EncodeFeatureSetDownlink_searchSpaceSharingCA_DL(i_encoded_field->searchSpaceSharingCA_DL, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->timeDurationForQCL_exist == TRUE)
	{
		EncodeFeatureSetDownlink_timeDurationForQCL(&i_encoded_field->timeDurationForQCL, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->pdsch_DifferentTB_PerSlot_exist == TRUE)
	{
		EncodeFeatureSetDownlink_pdsch_DifferentTB_PerSlot(&i_encoded_field->pdsch_DifferentTB_PerSlot, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->csi_RS_IM_ReceptionForFeedback_exist == TRUE)
	{
		EncodeCSI_RS_IM_ReceptionForFeedback(&i_encoded_field->csi_RS_IM_ReceptionForFeedback, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->typeI_SinglePanelCodebookList_exist == TRUE)
	{
		EncodeFeatureSetDownlink_typeI_SinglePanelCodebookList(&i_encoded_field->typeI_SinglePanelCodebookList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->typeI_MultiPanelCodebookList_exist == TRUE)
	{
		EncodeFeatureSetDownlink_typeI_MultiPanelCodebookList(&i_encoded_field->typeI_MultiPanelCodebookList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->typeII_CodebookList_exist == TRUE)
	{
		EncodeFeatureSetDownlink_typeII_CodebookList(&i_encoded_field->typeII_CodebookList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->typeII_CodebookPortSelectionList_exist == TRUE)
	{
		EncodeFeatureSetDownlink_typeII_CodebookPortSelectionList(&i_encoded_field->typeII_CodebookPortSelectionList, buff, bits_iter, asn_error);
	}

}

void DecodeFeatureSetDownlink_featureSetListPerDownlinkCC(
	FeatureSetDownlink_featureSetListPerDownlinkCC_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 5, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeFeatureSetDownlinkPerCC_Id(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeFeatureSetDownlink_scalingFactor(
	FeatureSetDownlink_scalingFactor_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeFeatureSetDownlink_crossCarrierSchedulingDL_OtherSCS(
	FeatureSetDownlink_crossCarrierSchedulingDL_OtherSCS_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeFeatureSetDownlink_scellWithoutSSB(
	FeatureSetDownlink_scellWithoutSSB_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeFeatureSetDownlink_csi_RS_MeasSCellWithoutSSB(
	FeatureSetDownlink_csi_RS_MeasSCellWithoutSSB_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeFeatureSetDownlink_srs_AssocCSI_RS(
	FeatureSetDownlink_srs_AssocCSI_RS_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeFeatureSetDownlink_type1_3_CSS(
	FeatureSetDownlink_type1_3_CSS_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeFeatureSetDownlink_pdcchMonitoringAnyOccasions(
	FeatureSetDownlink_pdcchMonitoringAnyOccasions_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodeFeatureSetDownlink_pdcchMonitoringAnyOccasionsWithSpanGap(
	FeatureSetDownlink_pdcchMonitoringAnyOccasionsWithSpanGap_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeFeatureSetDownlink_ue_SpecificUL_DL_Assignment(
	FeatureSetDownlink_ue_SpecificUL_DL_Assignment_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeFeatureSetDownlink_searchSpaceSharingCA_DL(
	FeatureSetDownlink_searchSpaceSharingCA_DL_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeFeatureSetDownlink_scs_60kHz(
	FeatureSetDownlink_scs_60kHz_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeFeatureSetDownlink_sch_120kHz(
	FeatureSetDownlink_sch_120kHz_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodeFeatureSetDownlink_timeDurationForQCL(
	FeatureSetDownlink_timeDurationForQCL_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->scs_60kHz_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->sch_120kHz_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->scs_60kHz_exist == TRUE)
	{
		DecodeFeatureSetDownlink_scs_60kHz(&o_decoded_field->scs_60kHz, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->sch_120kHz_exist == TRUE)
	{
		DecodeFeatureSetDownlink_sch_120kHz(&o_decoded_field->sch_120kHz, buff, bits_iter, asn_error);
	}

}

void DecodeFeatureSetDownlink_scs_15kHz(
	FeatureSetDownlink_scs_15kHz_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeFeatureSetDownlink_scs_30kHz(
	FeatureSetDownlink_scs_30kHz_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeFeatureSetDownlink_scs_60kHz_1(
	FeatureSetDownlink_scs_60kHz_1_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeFeatureSetDownlink_scs_120kHz(
	FeatureSetDownlink_scs_120kHz_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeFeatureSetDownlink_pdsch_DifferentTB_PerSlot(
	FeatureSetDownlink_pdsch_DifferentTB_PerSlot_t *o_decoded_field, 
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
		DecodeFeatureSetDownlink_scs_15kHz(&o_decoded_field->scs_15kHz, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->scs_30kHz_exist == TRUE)
	{
		DecodeFeatureSetDownlink_scs_30kHz(&o_decoded_field->scs_30kHz, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->scs_60kHz_exist == TRUE)
	{
		DecodeFeatureSetDownlink_scs_60kHz_1(&o_decoded_field->scs_60kHz, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->scs_120kHz_exist == TRUE)
	{
		DecodeFeatureSetDownlink_scs_120kHz(&o_decoded_field->scs_120kHz, buff, bits_iter, asn_error);
	}

}

void DecodeFeatureSetDownlink_typeI_SinglePanelCodebookList(
	FeatureSetDownlink_typeI_SinglePanelCodebookList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 4, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeTypeI_SinglePanelCodebook(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeFeatureSetDownlink_typeI_MultiPanelCodebookList(
	FeatureSetDownlink_typeI_MultiPanelCodebookList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 4, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeTypeI_MultiPanelCodebook(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeFeatureSetDownlink_typeII_CodebookList(
	FeatureSetDownlink_typeII_CodebookList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 4, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeTypeII_Codebook(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeFeatureSetDownlink_typeII_CodebookPortSelectionList(
	FeatureSetDownlink_typeII_CodebookPortSelectionList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 4, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeTypeII_CodebookPortSelection(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeFeatureSetDownlink(
	FeatureSetDownlink_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->intraBandFreqSeparationDL_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->scalingFactor_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->crossCarrierSchedulingDL_OtherSCS_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->scellWithoutSSB_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->csi_RS_MeasSCellWithoutSSB_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->srs_AssocCSI_RS_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type1_3_CSS_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->pdcchMonitoringAnyOccasions_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->pdcchMonitoringAnyOccasionsWithSpanGap_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->ue_SpecificUL_DL_Assignment_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->searchSpaceSharingCA_DL_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->timeDurationForQCL_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->pdsch_DifferentTB_PerSlot_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->csi_RS_IM_ReceptionForFeedback_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->typeI_SinglePanelCodebookList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->typeI_MultiPanelCodebookList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->typeII_CodebookList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->typeII_CodebookPortSelectionList_exist = Get_bits(buff, 1, bits_iter);
	DecodeFeatureSetDownlink_featureSetListPerDownlinkCC(&o_decoded_field->featureSetListPerDownlinkCC, buff, bits_iter, asn_error);
	if(o_decoded_field->intraBandFreqSeparationDL_exist == TRUE)
	{
		DecodeFreqSeparationClass(&o_decoded_field->intraBandFreqSeparationDL, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->scalingFactor_exist == TRUE)
	{
		DecodeFeatureSetDownlink_scalingFactor(&o_decoded_field->scalingFactor, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->crossCarrierSchedulingDL_OtherSCS_exist == TRUE)
	{
		DecodeFeatureSetDownlink_crossCarrierSchedulingDL_OtherSCS(&o_decoded_field->crossCarrierSchedulingDL_OtherSCS, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->scellWithoutSSB_exist == TRUE)
	{
		DecodeFeatureSetDownlink_scellWithoutSSB(&o_decoded_field->scellWithoutSSB, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->csi_RS_MeasSCellWithoutSSB_exist == TRUE)
	{
		DecodeFeatureSetDownlink_csi_RS_MeasSCellWithoutSSB(&o_decoded_field->csi_RS_MeasSCellWithoutSSB, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->srs_AssocCSI_RS_exist == TRUE)
	{
		DecodeFeatureSetDownlink_srs_AssocCSI_RS(&o_decoded_field->srs_AssocCSI_RS, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->type1_3_CSS_exist == TRUE)
	{
		DecodeFeatureSetDownlink_type1_3_CSS(&o_decoded_field->type1_3_CSS, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->pdcchMonitoringAnyOccasions_exist == TRUE)
	{
		DecodeFeatureSetDownlink_pdcchMonitoringAnyOccasions(&o_decoded_field->pdcchMonitoringAnyOccasions, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->pdcchMonitoringAnyOccasionsWithSpanGap_exist == TRUE)
	{
		DecodeFeatureSetDownlink_pdcchMonitoringAnyOccasionsWithSpanGap(&o_decoded_field->pdcchMonitoringAnyOccasionsWithSpanGap, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->ue_SpecificUL_DL_Assignment_exist == TRUE)
	{
		DecodeFeatureSetDownlink_ue_SpecificUL_DL_Assignment(&o_decoded_field->ue_SpecificUL_DL_Assignment, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->searchSpaceSharingCA_DL_exist == TRUE)
	{
		DecodeFeatureSetDownlink_searchSpaceSharingCA_DL(&o_decoded_field->searchSpaceSharingCA_DL, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->timeDurationForQCL_exist == TRUE)
	{
		DecodeFeatureSetDownlink_timeDurationForQCL(&o_decoded_field->timeDurationForQCL, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->pdsch_DifferentTB_PerSlot_exist == TRUE)
	{
		DecodeFeatureSetDownlink_pdsch_DifferentTB_PerSlot(&o_decoded_field->pdsch_DifferentTB_PerSlot, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->csi_RS_IM_ReceptionForFeedback_exist == TRUE)
	{
		DecodeCSI_RS_IM_ReceptionForFeedback(&o_decoded_field->csi_RS_IM_ReceptionForFeedback, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->typeI_SinglePanelCodebookList_exist == TRUE)
	{
		DecodeFeatureSetDownlink_typeI_SinglePanelCodebookList(&o_decoded_field->typeI_SinglePanelCodebookList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->typeI_MultiPanelCodebookList_exist == TRUE)
	{
		DecodeFeatureSetDownlink_typeI_MultiPanelCodebookList(&o_decoded_field->typeI_MultiPanelCodebookList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->typeII_CodebookList_exist == TRUE)
	{
		DecodeFeatureSetDownlink_typeII_CodebookList(&o_decoded_field->typeII_CodebookList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->typeII_CodebookPortSelectionList_exist == TRUE)
	{
		DecodeFeatureSetDownlink_typeII_CodebookPortSelectionList(&o_decoded_field->typeII_CodebookPortSelectionList, buff, bits_iter, asn_error);
	}

}

