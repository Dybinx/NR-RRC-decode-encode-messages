/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * serving_cell_config_common.c - codec the message of ServingCellConfigCommon
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "serving_cell_config_common.h"


void EncodeServingCellConfigCommon_n_TimingAdvanceOffset(
	ServingCellConfigCommon_n_TimingAdvanceOffset_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodeServingCellConfigCommon_shortBitmap(
	ServingCellConfigCommon_shortBitmap_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeServingCellConfigCommon_mediumBitmap(
	ServingCellConfigCommon_mediumBitmap_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeServingCellConfigCommon_longBitmap(
	ServingCellConfigCommon_longBitmap_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBitsMore(buff, i_encoded_field->value, i_encoded_field->bits_num, bits_iter);
}

void EncodeServingCellConfigCommon_ssb_PositionsInBurst(
	ServingCellConfigCommon_ssb_PositionsInBurst_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 2, bits_iter);
	switch (i_encoded_field->type)
	{
	case SERVINGCELLCONFIGCOMMON_SSB_POSITIONSINBURST_SHORTBITMAP:
		EncodeServingCellConfigCommon_shortBitmap(&i_encoded_field->a.shortBitmap, buff, bits_iter, asn_error);
		break;

	case SERVINGCELLCONFIGCOMMON_SSB_POSITIONSINBURST_MEDIUMBITMAP:
		EncodeServingCellConfigCommon_mediumBitmap(&i_encoded_field->a.mediumBitmap, buff, bits_iter, asn_error);
		break;

	case SERVINGCELLCONFIGCOMMON_SSB_POSITIONSINBURST_LONGBITMAP:
		EncodeServingCellConfigCommon_longBitmap(&i_encoded_field->a.longBitmap, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeServingCellConfigCommon_ssb_periodicityServingCell(
	ServingCellConfigCommon_ssb_periodicityServingCell_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 3, bits_iter);
}

void EncodeServingCellConfigCommon_dmrs_TypeA_Position(
	ServingCellConfigCommon_dmrs_TypeA_Position_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodeServingCellConfigCommon_release(
	ServingCellConfigCommon_release_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeServingCellConfigCommon_lte_CRS_ToMatchAround(
	ServingCellConfigCommon_lte_CRS_ToMatchAround_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case SERVINGCELLCONFIGCOMMON_LTE_CRS_TOMATCHAROUND_RELEASE:
		EncodeServingCellConfigCommon_release(&i_encoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case SERVINGCELLCONFIGCOMMON_LTE_CRS_TOMATCHAROUND_SETUP:
		EncodeRateMatchPatternLTE_CRS(&i_encoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeServingCellConfigCommon_rateMatchPatternToAddModList(
	ServingCellConfigCommon_rateMatchPatternToAddModList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 2, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeRateMatchPattern(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeServingCellConfigCommon_rateMatchPatternToReleaseList(
	ServingCellConfigCommon_rateMatchPatternToReleaseList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 2, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeRateMatchPatternId(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeServingCellConfigCommon(
	ServingCellConfigCommon_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->physCellId_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->downlinkConfigCommon_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->uplinkConfigCommon_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->supplementaryUplinkConfig_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->n_TimingAdvanceOffset_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->ssb_PositionsInBurst_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->ssb_periodicityServingCell_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->lte_CRS_ToMatchAround_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->rateMatchPatternToAddModList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->rateMatchPatternToReleaseList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->subcarrierSpacing_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->tdd_UL_DL_ConfigurationCommon_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->physCellId_exist == TRUE)
	{
		EncodePhysCellId(&i_encoded_field->physCellId, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->downlinkConfigCommon_exist == TRUE)
	{
		EncodeDownlinkConfigCommon(&i_encoded_field->downlinkConfigCommon, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->uplinkConfigCommon_exist == TRUE)
	{
		EncodeUplinkConfigCommon(&i_encoded_field->uplinkConfigCommon, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->supplementaryUplinkConfig_exist == TRUE)
	{
		EncodeUplinkConfigCommon(&i_encoded_field->supplementaryUplinkConfig, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->n_TimingAdvanceOffset_exist == TRUE)
	{
		EncodeServingCellConfigCommon_n_TimingAdvanceOffset(i_encoded_field->n_TimingAdvanceOffset, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->ssb_PositionsInBurst_exist == TRUE)
	{
		EncodeServingCellConfigCommon_ssb_PositionsInBurst(&i_encoded_field->ssb_PositionsInBurst, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->ssb_periodicityServingCell_exist == TRUE)
	{
		EncodeServingCellConfigCommon_ssb_periodicityServingCell(i_encoded_field->ssb_periodicityServingCell, buff, bits_iter, asn_error);
	}

	EncodeServingCellConfigCommon_dmrs_TypeA_Position(i_encoded_field->dmrs_TypeA_Position, buff, bits_iter, asn_error);

	if(i_encoded_field->lte_CRS_ToMatchAround_exist == TRUE)
	{
		EncodeServingCellConfigCommon_lte_CRS_ToMatchAround(&i_encoded_field->lte_CRS_ToMatchAround, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->rateMatchPatternToAddModList_exist == TRUE)
	{
		EncodeServingCellConfigCommon_rateMatchPatternToAddModList(&i_encoded_field->rateMatchPatternToAddModList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->rateMatchPatternToReleaseList_exist == TRUE)
	{
		EncodeServingCellConfigCommon_rateMatchPatternToReleaseList(&i_encoded_field->rateMatchPatternToReleaseList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->subcarrierSpacing_exist == TRUE)
	{
		EncodeSubcarrierSpacing(i_encoded_field->subcarrierSpacing, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->tdd_UL_DL_ConfigurationCommon_exist == TRUE)
	{
		EncodeTDD_UL_DL_ConfigCommon(&i_encoded_field->tdd_UL_DL_ConfigurationCommon, buff, bits_iter, asn_error);
	}

	PutBits(buff, i_encoded_field->ss_PBCH_BlockPower + 60, 7, bits_iter);

}

void DecodeServingCellConfigCommon_n_TimingAdvanceOffset(
	ServingCellConfigCommon_n_TimingAdvanceOffset_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodeServingCellConfigCommon_shortBitmap(
	ServingCellConfigCommon_shortBitmap_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;

	bits_num = 4;
	o_decoded_field->bits_num = bits_num;
	o_decoded_field->value[0] = Get_bits(buff, bits_num, bits_iter);

}

void DecodeServingCellConfigCommon_mediumBitmap(
	ServingCellConfigCommon_mediumBitmap_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;

	bits_num = 8;
	o_decoded_field->bits_num = bits_num;
	o_decoded_field->value[0] = Get_bits(buff, bits_num, bits_iter);

}

void DecodeServingCellConfigCommon_longBitmap(
	ServingCellConfigCommon_longBitmap_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    bits_num = 0;
	uint32    octets_num = 0;
	uint32    i = 0;

	bits_num = 64;
	o_decoded_field->bits_num = bits_num;
	octets_num = bits_num / 8 + (bits_num % 8 == 0 ? 0 : 1);

	if(bits_num % 8 != 0)
	{
		o_decoded_field->value[0] = Get_bits(buff, bits_num % 8, bits_iter);
		i = 1;
	}

	for(; i < octets_num; i++)
	{
		o_decoded_field->value[i] = Get_bits(buff, 8, bits_iter);
	}
}

void DecodeServingCellConfigCommon_ssb_PositionsInBurst(
	ServingCellConfigCommon_ssb_PositionsInBurst_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 2, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case SERVINGCELLCONFIGCOMMON_SSB_POSITIONSINBURST_SHORTBITMAP:
		DecodeServingCellConfigCommon_shortBitmap(&o_decoded_field->a.shortBitmap, buff, bits_iter, asn_error);
		break;

	case SERVINGCELLCONFIGCOMMON_SSB_POSITIONSINBURST_MEDIUMBITMAP:
		DecodeServingCellConfigCommon_mediumBitmap(&o_decoded_field->a.mediumBitmap, buff, bits_iter, asn_error);
		break;

	case SERVINGCELLCONFIGCOMMON_SSB_POSITIONSINBURST_LONGBITMAP:
		DecodeServingCellConfigCommon_longBitmap(&o_decoded_field->a.longBitmap, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeServingCellConfigCommon_ssb_periodicityServingCell(
	ServingCellConfigCommon_ssb_periodicityServingCell_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 3, bits_iter);
}

void DecodeServingCellConfigCommon_dmrs_TypeA_Position(
	ServingCellConfigCommon_dmrs_TypeA_Position_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodeServingCellConfigCommon_release(
	ServingCellConfigCommon_release_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeServingCellConfigCommon_lte_CRS_ToMatchAround(
	ServingCellConfigCommon_lte_CRS_ToMatchAround_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case SERVINGCELLCONFIGCOMMON_LTE_CRS_TOMATCHAROUND_RELEASE:
		DecodeServingCellConfigCommon_release(&o_decoded_field->a.release, buff, bits_iter, asn_error);
		break;

	case SERVINGCELLCONFIGCOMMON_LTE_CRS_TOMATCHAROUND_SETUP:
		DecodeRateMatchPatternLTE_CRS(&o_decoded_field->a.setup, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeServingCellConfigCommon_rateMatchPatternToAddModList(
	ServingCellConfigCommon_rateMatchPatternToAddModList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 2, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeRateMatchPattern(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeServingCellConfigCommon_rateMatchPatternToReleaseList(
	ServingCellConfigCommon_rateMatchPatternToReleaseList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 2, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeRateMatchPatternId(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeServingCellConfigCommon(
	ServingCellConfigCommon_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->physCellId_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->downlinkConfigCommon_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->uplinkConfigCommon_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->supplementaryUplinkConfig_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->n_TimingAdvanceOffset_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->ssb_PositionsInBurst_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->ssb_periodicityServingCell_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->lte_CRS_ToMatchAround_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->rateMatchPatternToAddModList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->rateMatchPatternToReleaseList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->subcarrierSpacing_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->tdd_UL_DL_ConfigurationCommon_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->physCellId_exist == TRUE)
	{
		DecodePhysCellId(&o_decoded_field->physCellId, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->downlinkConfigCommon_exist == TRUE)
	{
		DecodeDownlinkConfigCommon(&o_decoded_field->downlinkConfigCommon, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->uplinkConfigCommon_exist == TRUE)
	{
		DecodeUplinkConfigCommon(&o_decoded_field->uplinkConfigCommon, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->supplementaryUplinkConfig_exist == TRUE)
	{
		DecodeUplinkConfigCommon(&o_decoded_field->supplementaryUplinkConfig, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->n_TimingAdvanceOffset_exist == TRUE)
	{
		DecodeServingCellConfigCommon_n_TimingAdvanceOffset(&o_decoded_field->n_TimingAdvanceOffset, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->ssb_PositionsInBurst_exist == TRUE)
	{
		DecodeServingCellConfigCommon_ssb_PositionsInBurst(&o_decoded_field->ssb_PositionsInBurst, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->ssb_periodicityServingCell_exist == TRUE)
	{
		DecodeServingCellConfigCommon_ssb_periodicityServingCell(&o_decoded_field->ssb_periodicityServingCell, buff, bits_iter, asn_error);
	}

	DecodeServingCellConfigCommon_dmrs_TypeA_Position(&o_decoded_field->dmrs_TypeA_Position, buff, bits_iter, asn_error);
	if(o_decoded_field->lte_CRS_ToMatchAround_exist == TRUE)
	{
		DecodeServingCellConfigCommon_lte_CRS_ToMatchAround(&o_decoded_field->lte_CRS_ToMatchAround, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->rateMatchPatternToAddModList_exist == TRUE)
	{
		DecodeServingCellConfigCommon_rateMatchPatternToAddModList(&o_decoded_field->rateMatchPatternToAddModList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->rateMatchPatternToReleaseList_exist == TRUE)
	{
		DecodeServingCellConfigCommon_rateMatchPatternToReleaseList(&o_decoded_field->rateMatchPatternToReleaseList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->subcarrierSpacing_exist == TRUE)
	{
		DecodeSubcarrierSpacing(&o_decoded_field->subcarrierSpacing, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->tdd_UL_DL_ConfigurationCommon_exist == TRUE)
	{
		DecodeTDD_UL_DL_ConfigCommon(&o_decoded_field->tdd_UL_DL_ConfigurationCommon, buff, bits_iter, asn_error);
	}

	o_decoded_field->ss_PBCH_BlockPower = Get_bits(buff, 7, bits_iter) - 60;
	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

