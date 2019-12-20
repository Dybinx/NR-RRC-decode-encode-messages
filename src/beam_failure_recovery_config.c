/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * beam_failure_recovery_config.c - codec the message of BeamFailureRecoveryConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "beam_failure_recovery_config.h"


void EncodeBeamFailureRecoveryConfig_candidateBeamRSList(
	BeamFailureRecoveryConfig_candidateBeamRSList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 4, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodePRACH_ResourceDedicatedBFR(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeBeamFailureRecoveryConfig_ssb_perRACH_Occasion(
	BeamFailureRecoveryConfig_ssb_perRACH_Occasion_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 3, bits_iter);
}

void EncodeBeamFailureRecoveryConfig_beamFailureRecoveryTimer(
	BeamFailureRecoveryConfig_beamFailureRecoveryTimer_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 3, bits_iter);
}

void EncodeBeamFailureRecoveryConfig(
	BeamFailureRecoveryConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->rootSequenceIndex_BFR_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->rach_ConfigBFR_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->rsrp_ThresholdSSB_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->candidateBeamRSList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->ssb_perRACH_Occasion_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->ra_ssb_OccasionMaskIndex_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->recoverySearchSpaceId_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->ra_Prioritization_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->beamFailureRecoveryTimer_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->rootSequenceIndex_BFR_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->rootSequenceIndex_BFR, 8, bits_iter);
	}

	if(i_encoded_field->rach_ConfigBFR_exist == TRUE)
	{
		EncodeRACH_ConfigGeneric(&i_encoded_field->rach_ConfigBFR, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->rsrp_ThresholdSSB_exist == TRUE)
	{
		EncodeRSRP_Range(&i_encoded_field->rsrp_ThresholdSSB, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->candidateBeamRSList_exist == TRUE)
	{
		EncodeBeamFailureRecoveryConfig_candidateBeamRSList(&i_encoded_field->candidateBeamRSList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->ssb_perRACH_Occasion_exist == TRUE)
	{
		EncodeBeamFailureRecoveryConfig_ssb_perRACH_Occasion(i_encoded_field->ssb_perRACH_Occasion, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->ra_ssb_OccasionMaskIndex_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->ra_ssb_OccasionMaskIndex, 4, bits_iter);
	}

	if(i_encoded_field->recoverySearchSpaceId_exist == TRUE)
	{
		EncodeSearchSpaceId(&i_encoded_field->recoverySearchSpaceId, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->ra_Prioritization_exist == TRUE)
	{
		EncodeRA_Prioritization(&i_encoded_field->ra_Prioritization, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->beamFailureRecoveryTimer_exist == TRUE)
	{
		EncodeBeamFailureRecoveryConfig_beamFailureRecoveryTimer(i_encoded_field->beamFailureRecoveryTimer, buff, bits_iter, asn_error);
	}

}

void DecodeBeamFailureRecoveryConfig_candidateBeamRSList(
	BeamFailureRecoveryConfig_candidateBeamRSList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 4, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodePRACH_ResourceDedicatedBFR(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeBeamFailureRecoveryConfig_ssb_perRACH_Occasion(
	BeamFailureRecoveryConfig_ssb_perRACH_Occasion_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 3, bits_iter);
}

void DecodeBeamFailureRecoveryConfig_beamFailureRecoveryTimer(
	BeamFailureRecoveryConfig_beamFailureRecoveryTimer_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 3, bits_iter);
}

void DecodeBeamFailureRecoveryConfig(
	BeamFailureRecoveryConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->rootSequenceIndex_BFR_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->rach_ConfigBFR_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->rsrp_ThresholdSSB_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->candidateBeamRSList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->ssb_perRACH_Occasion_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->ra_ssb_OccasionMaskIndex_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->recoverySearchSpaceId_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->ra_Prioritization_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->beamFailureRecoveryTimer_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->rootSequenceIndex_BFR_exist == TRUE)
	{
		o_decoded_field->rootSequenceIndex_BFR = Get_bits(buff, 8, bits_iter);
	}

	if(o_decoded_field->rach_ConfigBFR_exist == TRUE)
	{
		DecodeRACH_ConfigGeneric(&o_decoded_field->rach_ConfigBFR, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->rsrp_ThresholdSSB_exist == TRUE)
	{
		DecodeRSRP_Range(&o_decoded_field->rsrp_ThresholdSSB, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->candidateBeamRSList_exist == TRUE)
	{
		DecodeBeamFailureRecoveryConfig_candidateBeamRSList(&o_decoded_field->candidateBeamRSList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->ssb_perRACH_Occasion_exist == TRUE)
	{
		DecodeBeamFailureRecoveryConfig_ssb_perRACH_Occasion(&o_decoded_field->ssb_perRACH_Occasion, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->ra_ssb_OccasionMaskIndex_exist == TRUE)
	{
		o_decoded_field->ra_ssb_OccasionMaskIndex = Get_bits(buff, 4, bits_iter);
	}

	if(o_decoded_field->recoverySearchSpaceId_exist == TRUE)
	{
		DecodeSearchSpaceId(&o_decoded_field->recoverySearchSpaceId, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->ra_Prioritization_exist == TRUE)
	{
		DecodeRA_Prioritization(&o_decoded_field->ra_Prioritization, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->beamFailureRecoveryTimer_exist == TRUE)
	{
		DecodeBeamFailureRecoveryConfig_beamFailureRecoveryTimer(&o_decoded_field->beamFailureRecoveryTimer, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

