/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * rach_config_common.c - codec the message of RACH-ConfigCommon
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "rach_config_common.h"


void EncodeRACH_ConfigCommon_oneEighth(
	RACH_ConfigCommon_oneEighth_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 4, bits_iter);
}

void EncodeRACH_ConfigCommon_oneFourth(
	RACH_ConfigCommon_oneFourth_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 4, bits_iter);
}

void EncodeRACH_ConfigCommon_oneHalf(
	RACH_ConfigCommon_oneHalf_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 4, bits_iter);
}

void EncodeRACH_ConfigCommon_one(
	RACH_ConfigCommon_one_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 4, bits_iter);
}

void EncodeRACH_ConfigCommon_two(
	RACH_ConfigCommon_two_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 3, bits_iter);
}

void EncodeRACH_ConfigCommon_ssb_perRACH_OccasionAndCB_PreamblesPerSSB(
	RACH_ConfigCommon_ssb_perRACH_OccasionAndCB_PreamblesPerSSB_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 3, bits_iter);
	switch (i_encoded_field->type)
	{
	case RACH_CONFIGCOMMON_SSB_PERRACH_OCCASIONANDCB_PREAMBLESPERSSB_ONEEIGHTH:
		EncodeRACH_ConfigCommon_oneEighth(i_encoded_field->a.oneEighth, buff, bits_iter, asn_error);
		break;

	case RACH_CONFIGCOMMON_SSB_PERRACH_OCCASIONANDCB_PREAMBLESPERSSB_ONEFOURTH:
		EncodeRACH_ConfigCommon_oneFourth(i_encoded_field->a.oneFourth, buff, bits_iter, asn_error);
		break;

	case RACH_CONFIGCOMMON_SSB_PERRACH_OCCASIONANDCB_PREAMBLESPERSSB_ONEHALF:
		EncodeRACH_ConfigCommon_oneHalf(i_encoded_field->a.oneHalf, buff, bits_iter, asn_error);
		break;

	case RACH_CONFIGCOMMON_SSB_PERRACH_OCCASIONANDCB_PREAMBLESPERSSB_ONE:
		EncodeRACH_ConfigCommon_one(i_encoded_field->a.one, buff, bits_iter, asn_error);
		break;

	case RACH_CONFIGCOMMON_SSB_PERRACH_OCCASIONANDCB_PREAMBLESPERSSB_TWO:
		EncodeRACH_ConfigCommon_two(i_encoded_field->a.two, buff, bits_iter, asn_error);
		break;

	case RACH_CONFIGCOMMON_SSB_PERRACH_OCCASIONANDCB_PREAMBLESPERSSB_FOUR:
		PutBits(buff, i_encoded_field->a.four - 1, 4, bits_iter);
		break;

	case RACH_CONFIGCOMMON_SSB_PERRACH_OCCASIONANDCB_PREAMBLESPERSSB_EIGHT:
		PutBits(buff, i_encoded_field->a.eight - 1, 3, bits_iter);
		break;

	case RACH_CONFIGCOMMON_SSB_PERRACH_OCCASIONANDCB_PREAMBLESPERSSB_SIXTEEN:
		PutBits(buff, i_encoded_field->a.sixteen - 1, 2, bits_iter);
		break;

	default:
		break;	}
}

void EncodeRACH_ConfigCommon_ra_Msg3SizeGroupA(
	RACH_ConfigCommon_ra_Msg3SizeGroupA_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 4, bits_iter);
}

void EncodeRACH_ConfigCommon_messagePowerOffsetGroupB(
	RACH_ConfigCommon_messagePowerOffsetGroupB_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 3, bits_iter);
}

void EncodeRACH_ConfigCommon_groupBconfigured(
	RACH_ConfigCommon_groupBconfigured_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeRACH_ConfigCommon_ra_Msg3SizeGroupA(i_encoded_field->ra_Msg3SizeGroupA, buff, bits_iter, asn_error);

	EncodeRACH_ConfigCommon_messagePowerOffsetGroupB(i_encoded_field->messagePowerOffsetGroupB, buff, bits_iter, asn_error);

	PutBits(buff, i_encoded_field->numberOfRA_PreamblesGroupA - 1, 6, bits_iter);

}

void EncodeRACH_ConfigCommon_ra_ContentionResolutionTimer(
	RACH_ConfigCommon_ra_ContentionResolutionTimer_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 3, bits_iter);
}

void EncodeRACH_ConfigCommon_prach_RootSequenceIndex(
	RACH_ConfigCommon_prach_RootSequenceIndex_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case RACH_CONFIGCOMMON_PRACH_ROOTSEQUENCEINDEX_L839:
		PutBits(buff, i_encoded_field->a.l839, 10, bits_iter);
		break;

	case RACH_CONFIGCOMMON_PRACH_ROOTSEQUENCEINDEX_L139:
		PutBits(buff, i_encoded_field->a.l139, 8, bits_iter);
		break;

	default:
		break;	}
}

void EncodeRACH_ConfigCommon_restrictedSetConfig(
	RACH_ConfigCommon_restrictedSetConfig_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeRACH_ConfigCommon_msg3_transformPrecoding(
	RACH_ConfigCommon_msg3_transformPrecoding_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeRACH_ConfigCommon(
	RACH_ConfigCommon_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->totalNumberOfRA_Preambles_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->ssb_perRACH_OccasionAndCB_PreamblesPerSSB_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->groupBconfigured_exist == TRUE)
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

	if(i_encoded_field->rsrp_ThresholdSSB_SUL_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->msg1_SubcarrierSpacing_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->msg3_transformPrecoding_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodeRACH_ConfigGeneric(&i_encoded_field->rach_ConfigGeneric, buff, bits_iter, asn_error);

	if(i_encoded_field->totalNumberOfRA_Preambles_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->totalNumberOfRA_Preambles - 1, 6, bits_iter);
	}

	if(i_encoded_field->ssb_perRACH_OccasionAndCB_PreamblesPerSSB_exist == TRUE)
	{
		EncodeRACH_ConfigCommon_ssb_perRACH_OccasionAndCB_PreamblesPerSSB(&i_encoded_field->ssb_perRACH_OccasionAndCB_PreamblesPerSSB, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->groupBconfigured_exist == TRUE)
	{
		EncodeRACH_ConfigCommon_groupBconfigured(&i_encoded_field->groupBconfigured, buff, bits_iter, asn_error);
	}

	EncodeRACH_ConfigCommon_ra_ContentionResolutionTimer(i_encoded_field->ra_ContentionResolutionTimer, buff, bits_iter, asn_error);

	if(i_encoded_field->rsrp_ThresholdSSB_exist == TRUE)
	{
		EncodeRSRP_Range(&i_encoded_field->rsrp_ThresholdSSB, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->rsrp_ThresholdSSB_SUL_exist == TRUE)
	{
		EncodeRSRP_Range(&i_encoded_field->rsrp_ThresholdSSB_SUL, buff, bits_iter, asn_error);
	}

	EncodeRACH_ConfigCommon_prach_RootSequenceIndex(&i_encoded_field->prach_RootSequenceIndex, buff, bits_iter, asn_error);

	if(i_encoded_field->msg1_SubcarrierSpacing_exist == TRUE)
	{
		EncodeSubcarrierSpacing(i_encoded_field->msg1_SubcarrierSpacing, buff, bits_iter, asn_error);
	}

	EncodeRACH_ConfigCommon_restrictedSetConfig(i_encoded_field->restrictedSetConfig, buff, bits_iter, asn_error);

	if(i_encoded_field->msg3_transformPrecoding_exist == TRUE)
	{
		EncodeRACH_ConfigCommon_msg3_transformPrecoding(i_encoded_field->msg3_transformPrecoding, buff, bits_iter, asn_error);
	}

}

void DecodeRACH_ConfigCommon_oneEighth(
	RACH_ConfigCommon_oneEighth_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 4, bits_iter);
}

void DecodeRACH_ConfigCommon_oneFourth(
	RACH_ConfigCommon_oneFourth_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 4, bits_iter);
}

void DecodeRACH_ConfigCommon_oneHalf(
	RACH_ConfigCommon_oneHalf_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 4, bits_iter);
}

void DecodeRACH_ConfigCommon_one(
	RACH_ConfigCommon_one_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 4, bits_iter);
}

void DecodeRACH_ConfigCommon_two(
	RACH_ConfigCommon_two_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 3, bits_iter);
}

void DecodeRACH_ConfigCommon_ssb_perRACH_OccasionAndCB_PreamblesPerSSB(
	RACH_ConfigCommon_ssb_perRACH_OccasionAndCB_PreamblesPerSSB_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 3, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case RACH_CONFIGCOMMON_SSB_PERRACH_OCCASIONANDCB_PREAMBLESPERSSB_ONEEIGHTH:
		DecodeRACH_ConfigCommon_oneEighth(&o_decoded_field->a.oneEighth, buff, bits_iter, asn_error);
		break;

	case RACH_CONFIGCOMMON_SSB_PERRACH_OCCASIONANDCB_PREAMBLESPERSSB_ONEFOURTH:
		DecodeRACH_ConfigCommon_oneFourth(&o_decoded_field->a.oneFourth, buff, bits_iter, asn_error);
		break;

	case RACH_CONFIGCOMMON_SSB_PERRACH_OCCASIONANDCB_PREAMBLESPERSSB_ONEHALF:
		DecodeRACH_ConfigCommon_oneHalf(&o_decoded_field->a.oneHalf, buff, bits_iter, asn_error);
		break;

	case RACH_CONFIGCOMMON_SSB_PERRACH_OCCASIONANDCB_PREAMBLESPERSSB_ONE:
		DecodeRACH_ConfigCommon_one(&o_decoded_field->a.one, buff, bits_iter, asn_error);
		break;

	case RACH_CONFIGCOMMON_SSB_PERRACH_OCCASIONANDCB_PREAMBLESPERSSB_TWO:
		DecodeRACH_ConfigCommon_two(&o_decoded_field->a.two, buff, bits_iter, asn_error);
		break;

	case RACH_CONFIGCOMMON_SSB_PERRACH_OCCASIONANDCB_PREAMBLESPERSSB_FOUR:
		o_decoded_field->a.four = Get_bits(buff, 4, bits_iter) + 1;
		break;

	case RACH_CONFIGCOMMON_SSB_PERRACH_OCCASIONANDCB_PREAMBLESPERSSB_EIGHT:
		o_decoded_field->a.eight = Get_bits(buff, 3, bits_iter) + 1;
		break;

	case RACH_CONFIGCOMMON_SSB_PERRACH_OCCASIONANDCB_PREAMBLESPERSSB_SIXTEEN:
		o_decoded_field->a.sixteen = Get_bits(buff, 2, bits_iter) + 1;
		break;

	default:
		break;

	}
}

void DecodeRACH_ConfigCommon_ra_Msg3SizeGroupA(
	RACH_ConfigCommon_ra_Msg3SizeGroupA_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 4, bits_iter);
}

void DecodeRACH_ConfigCommon_messagePowerOffsetGroupB(
	RACH_ConfigCommon_messagePowerOffsetGroupB_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 3, bits_iter);
}

void DecodeRACH_ConfigCommon_groupBconfigured(
	RACH_ConfigCommon_groupBconfigured_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeRACH_ConfigCommon_ra_Msg3SizeGroupA(&o_decoded_field->ra_Msg3SizeGroupA, buff, bits_iter, asn_error);
	DecodeRACH_ConfigCommon_messagePowerOffsetGroupB(&o_decoded_field->messagePowerOffsetGroupB, buff, bits_iter, asn_error);
	o_decoded_field->numberOfRA_PreamblesGroupA = Get_bits(buff, 6, bits_iter) + 1;
}

void DecodeRACH_ConfigCommon_ra_ContentionResolutionTimer(
	RACH_ConfigCommon_ra_ContentionResolutionTimer_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 3, bits_iter);
}

void DecodeRACH_ConfigCommon_prach_RootSequenceIndex(
	RACH_ConfigCommon_prach_RootSequenceIndex_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case RACH_CONFIGCOMMON_PRACH_ROOTSEQUENCEINDEX_L839:
		o_decoded_field->a.l839 = Get_bits(buff, 10, bits_iter);
		break;

	case RACH_CONFIGCOMMON_PRACH_ROOTSEQUENCEINDEX_L139:
		o_decoded_field->a.l139 = Get_bits(buff, 8, bits_iter);
		break;

	default:
		break;

	}
}

void DecodeRACH_ConfigCommon_restrictedSetConfig(
	RACH_ConfigCommon_restrictedSetConfig_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeRACH_ConfigCommon_msg3_transformPrecoding(
	RACH_ConfigCommon_msg3_transformPrecoding_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeRACH_ConfigCommon(
	RACH_ConfigCommon_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->totalNumberOfRA_Preambles_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->ssb_perRACH_OccasionAndCB_PreamblesPerSSB_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->groupBconfigured_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->rsrp_ThresholdSSB_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->rsrp_ThresholdSSB_SUL_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->msg1_SubcarrierSpacing_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->msg3_transformPrecoding_exist = Get_bits(buff, 1, bits_iter);
	DecodeRACH_ConfigGeneric(&o_decoded_field->rach_ConfigGeneric, buff, bits_iter, asn_error);
	if(o_decoded_field->totalNumberOfRA_Preambles_exist == TRUE)
	{
		o_decoded_field->totalNumberOfRA_Preambles = Get_bits(buff, 6, bits_iter) + 1;
	}

	if(o_decoded_field->ssb_perRACH_OccasionAndCB_PreamblesPerSSB_exist == TRUE)
	{
		DecodeRACH_ConfigCommon_ssb_perRACH_OccasionAndCB_PreamblesPerSSB(&o_decoded_field->ssb_perRACH_OccasionAndCB_PreamblesPerSSB, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->groupBconfigured_exist == TRUE)
	{
		DecodeRACH_ConfigCommon_groupBconfigured(&o_decoded_field->groupBconfigured, buff, bits_iter, asn_error);
	}

	DecodeRACH_ConfigCommon_ra_ContentionResolutionTimer(&o_decoded_field->ra_ContentionResolutionTimer, buff, bits_iter, asn_error);
	if(o_decoded_field->rsrp_ThresholdSSB_exist == TRUE)
	{
		DecodeRSRP_Range(&o_decoded_field->rsrp_ThresholdSSB, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->rsrp_ThresholdSSB_SUL_exist == TRUE)
	{
		DecodeRSRP_Range(&o_decoded_field->rsrp_ThresholdSSB_SUL, buff, bits_iter, asn_error);
	}

	DecodeRACH_ConfigCommon_prach_RootSequenceIndex(&o_decoded_field->prach_RootSequenceIndex, buff, bits_iter, asn_error);
	if(o_decoded_field->msg1_SubcarrierSpacing_exist == TRUE)
	{
		DecodeSubcarrierSpacing(&o_decoded_field->msg1_SubcarrierSpacing, buff, bits_iter, asn_error);
	}

	DecodeRACH_ConfigCommon_restrictedSetConfig(&o_decoded_field->restrictedSetConfig, buff, bits_iter, asn_error);
	if(o_decoded_field->msg3_transformPrecoding_exist == TRUE)
	{
		DecodeRACH_ConfigCommon_msg3_transformPrecoding(&o_decoded_field->msg3_transformPrecoding, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

