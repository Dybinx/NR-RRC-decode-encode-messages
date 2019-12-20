/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * feature_set_uplink.c - codec the message of FeatureSetUplink
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "feature_set_uplink.h"


void EncodeFeatureSetUplink_featureSetListPerUplinkCC(
	FeatureSetUplink_featureSetListPerUplinkCC_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 5, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeFeatureSetUplinkPerCC_Id(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeFeatureSetUplink_scalingFactor(
	FeatureSetUplink_scalingFactor_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeFeatureSetUplink_crossCarrierSchedulingUL_OtherSCS(
	FeatureSetUplink_crossCarrierSchedulingUL_OtherSCS_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeFeatureSetUplink_searchSpaceSharingCA_UL(
	FeatureSetUplink_searchSpaceSharingCA_UL_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeFeatureSetUplink_twoPUCCH_Group(
	FeatureSetUplink_twoPUCCH_Group_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeFeatureSetUplink_dynamicSwitchSUL(
	FeatureSetUplink_dynamicSwitchSUL_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeFeatureSetUplink_scs_15kHz(
	FeatureSetUplink_scs_15kHz_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeFeatureSetUplink_scs_30kHz(
	FeatureSetUplink_scs_30kHz_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeFeatureSetUplink_scs_60kHz(
	FeatureSetUplink_scs_60kHz_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeFeatureSetUplink_scs_120kHz(
	FeatureSetUplink_scs_120kHz_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeFeatureSetUplink_pusch_DifferentTB_PerSlot(
	FeatureSetUplink_pusch_DifferentTB_PerSlot_t *i_encoded_field, 
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
		EncodeFeatureSetUplink_scs_15kHz(i_encoded_field->scs_15kHz, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->scs_30kHz_exist == TRUE)
	{
		EncodeFeatureSetUplink_scs_30kHz(i_encoded_field->scs_30kHz, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->scs_60kHz_exist == TRUE)
	{
		EncodeFeatureSetUplink_scs_60kHz(i_encoded_field->scs_60kHz, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->scs_120kHz_exist == TRUE)
	{
		EncodeFeatureSetUplink_scs_120kHz(i_encoded_field->scs_120kHz, buff, bits_iter, asn_error);
	}

}

void EncodeFeatureSetUplink(
	FeatureSetUplink_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->scalingFactor_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->crossCarrierSchedulingUL_OtherSCS_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->intraBandFreqSeparationUL_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->searchSpaceSharingCA_UL_exist == TRUE)
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

	if(i_encoded_field->supportedSRS_Resources_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->twoPUCCH_Group_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->dynamicSwitchSUL_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->pusch_DifferentTB_PerSlot_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->csi_ReportFramework_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodeFeatureSetUplink_featureSetListPerUplinkCC(&i_encoded_field->featureSetListPerUplinkCC, buff, bits_iter, asn_error);

	if(i_encoded_field->scalingFactor_exist == TRUE)
	{
		EncodeFeatureSetUplink_scalingFactor(i_encoded_field->scalingFactor, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->crossCarrierSchedulingUL_OtherSCS_exist == TRUE)
	{
		EncodeFeatureSetUplink_crossCarrierSchedulingUL_OtherSCS(i_encoded_field->crossCarrierSchedulingUL_OtherSCS, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->intraBandFreqSeparationUL_exist == TRUE)
	{
		EncodeFreqSeparationClass(i_encoded_field->intraBandFreqSeparationUL, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->searchSpaceSharingCA_UL_exist == TRUE)
	{
		EncodeFeatureSetUplink_searchSpaceSharingCA_UL(i_encoded_field->searchSpaceSharingCA_UL, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->srs_TxSwitch_exist == TRUE)
	{
		EncodeSRS_TxSwitch(&i_encoded_field->srs_TxSwitch, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->supportedSRS_Resources_exist == TRUE)
	{
		EncodeSRS_Resources(&i_encoded_field->supportedSRS_Resources, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->twoPUCCH_Group_exist == TRUE)
	{
		EncodeFeatureSetUplink_twoPUCCH_Group(i_encoded_field->twoPUCCH_Group, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->dynamicSwitchSUL_exist == TRUE)
	{
		EncodeFeatureSetUplink_dynamicSwitchSUL(i_encoded_field->dynamicSwitchSUL, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->pusch_DifferentTB_PerSlot_exist == TRUE)
	{
		EncodeFeatureSetUplink_pusch_DifferentTB_PerSlot(&i_encoded_field->pusch_DifferentTB_PerSlot, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->csi_ReportFramework_exist == TRUE)
	{
		EncodeCSI_ReportFramework(&i_encoded_field->csi_ReportFramework, buff, bits_iter, asn_error);
	}

}

void DecodeFeatureSetUplink_featureSetListPerUplinkCC(
	FeatureSetUplink_featureSetListPerUplinkCC_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 5, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeFeatureSetUplinkPerCC_Id(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeFeatureSetUplink_scalingFactor(
	FeatureSetUplink_scalingFactor_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeFeatureSetUplink_crossCarrierSchedulingUL_OtherSCS(
	FeatureSetUplink_crossCarrierSchedulingUL_OtherSCS_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeFeatureSetUplink_searchSpaceSharingCA_UL(
	FeatureSetUplink_searchSpaceSharingCA_UL_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeFeatureSetUplink_twoPUCCH_Group(
	FeatureSetUplink_twoPUCCH_Group_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeFeatureSetUplink_dynamicSwitchSUL(
	FeatureSetUplink_dynamicSwitchSUL_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeFeatureSetUplink_scs_15kHz(
	FeatureSetUplink_scs_15kHz_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeFeatureSetUplink_scs_30kHz(
	FeatureSetUplink_scs_30kHz_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeFeatureSetUplink_scs_60kHz(
	FeatureSetUplink_scs_60kHz_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeFeatureSetUplink_scs_120kHz(
	FeatureSetUplink_scs_120kHz_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeFeatureSetUplink_pusch_DifferentTB_PerSlot(
	FeatureSetUplink_pusch_DifferentTB_PerSlot_t *o_decoded_field, 
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
		DecodeFeatureSetUplink_scs_15kHz(&o_decoded_field->scs_15kHz, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->scs_30kHz_exist == TRUE)
	{
		DecodeFeatureSetUplink_scs_30kHz(&o_decoded_field->scs_30kHz, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->scs_60kHz_exist == TRUE)
	{
		DecodeFeatureSetUplink_scs_60kHz(&o_decoded_field->scs_60kHz, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->scs_120kHz_exist == TRUE)
	{
		DecodeFeatureSetUplink_scs_120kHz(&o_decoded_field->scs_120kHz, buff, bits_iter, asn_error);
	}

}

void DecodeFeatureSetUplink(
	FeatureSetUplink_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->scalingFactor_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->crossCarrierSchedulingUL_OtherSCS_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->intraBandFreqSeparationUL_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->searchSpaceSharingCA_UL_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->srs_TxSwitch_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->supportedSRS_Resources_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->twoPUCCH_Group_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->dynamicSwitchSUL_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->pusch_DifferentTB_PerSlot_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->csi_ReportFramework_exist = Get_bits(buff, 1, bits_iter);
	DecodeFeatureSetUplink_featureSetListPerUplinkCC(&o_decoded_field->featureSetListPerUplinkCC, buff, bits_iter, asn_error);
	if(o_decoded_field->scalingFactor_exist == TRUE)
	{
		DecodeFeatureSetUplink_scalingFactor(&o_decoded_field->scalingFactor, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->crossCarrierSchedulingUL_OtherSCS_exist == TRUE)
	{
		DecodeFeatureSetUplink_crossCarrierSchedulingUL_OtherSCS(&o_decoded_field->crossCarrierSchedulingUL_OtherSCS, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->intraBandFreqSeparationUL_exist == TRUE)
	{
		DecodeFreqSeparationClass(&o_decoded_field->intraBandFreqSeparationUL, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->searchSpaceSharingCA_UL_exist == TRUE)
	{
		DecodeFeatureSetUplink_searchSpaceSharingCA_UL(&o_decoded_field->searchSpaceSharingCA_UL, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->srs_TxSwitch_exist == TRUE)
	{
		DecodeSRS_TxSwitch(&o_decoded_field->srs_TxSwitch, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->supportedSRS_Resources_exist == TRUE)
	{
		DecodeSRS_Resources(&o_decoded_field->supportedSRS_Resources, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->twoPUCCH_Group_exist == TRUE)
	{
		DecodeFeatureSetUplink_twoPUCCH_Group(&o_decoded_field->twoPUCCH_Group, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->dynamicSwitchSUL_exist == TRUE)
	{
		DecodeFeatureSetUplink_dynamicSwitchSUL(&o_decoded_field->dynamicSwitchSUL, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->pusch_DifferentTB_PerSlot_exist == TRUE)
	{
		DecodeFeatureSetUplink_pusch_DifferentTB_PerSlot(&o_decoded_field->pusch_DifferentTB_PerSlot, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->csi_ReportFramework_exist == TRUE)
	{
		DecodeCSI_ReportFramework(&o_decoded_field->csi_ReportFramework, buff, bits_iter, asn_error);
	}

}

