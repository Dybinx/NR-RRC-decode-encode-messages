/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * meas_object_nr.c - codec the message of MeasObjectNR
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "meas_object_nr.h"


void EncodeMeasObjectNR_blackCellsToAddModList(
	MeasObjectNR_blackCellsToAddModList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 3, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodePCI_RangeElement(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeMeasObjectNR_whiteCellsToAddModList(
	MeasObjectNR_whiteCellsToAddModList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 3, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodePCI_RangeElement(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeMeasObjectNR(
	MeasObjectNR_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->ssbFrequency_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->ssbSubcarrierSpacing_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->smtc1_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->smtc2_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->refFreqCSI_RS_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->absThreshSS_BlocksConsolidation_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->absThreshCSI_RS_Consolidation_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->nrofSS_BlocksToAverage_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->nrofCSI_RS_ResourcesToAverage_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->cellsToRemoveList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->cellsToAddModList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->blackCellsToRemoveList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->blackCellsToAddModList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->whiteCellsToRemoveList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->whiteCellsToAddModList_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->ssbFrequency_exist == TRUE)
	{
		EncodeARFCN_ValueNR(&i_encoded_field->ssbFrequency, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->ssbSubcarrierSpacing_exist == TRUE)
	{
		EncodeSubcarrierSpacing(i_encoded_field->ssbSubcarrierSpacing, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->smtc1_exist == TRUE)
	{
		EncodeSSB_MTC(&i_encoded_field->smtc1, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->smtc2_exist == TRUE)
	{
		EncodeSSB_MTC2(&i_encoded_field->smtc2, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->refFreqCSI_RS_exist == TRUE)
	{
		EncodeARFCN_ValueNR(&i_encoded_field->refFreqCSI_RS, buff, bits_iter, asn_error);
	}

	EncodeReferenceSignalConfig(&i_encoded_field->referenceSignalConfig, buff, bits_iter, asn_error);

	if(i_encoded_field->absThreshSS_BlocksConsolidation_exist == TRUE)
	{
		EncodeThresholdNR(&i_encoded_field->absThreshSS_BlocksConsolidation, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->absThreshCSI_RS_Consolidation_exist == TRUE)
	{
		EncodeThresholdNR(&i_encoded_field->absThreshCSI_RS_Consolidation, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->nrofSS_BlocksToAverage_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->nrofSS_BlocksToAverage - 2, 4, bits_iter);
	}

	if(i_encoded_field->nrofCSI_RS_ResourcesToAverage_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->nrofCSI_RS_ResourcesToAverage - 2, 4, bits_iter);
	}

	PutBits(buff, i_encoded_field->quantityConfigIndex - 1, 1, bits_iter);

	EncodeQ_OffsetRangeList(&i_encoded_field->offsetMO, buff, bits_iter, asn_error);

	if(i_encoded_field->cellsToRemoveList_exist == TRUE)
	{
		EncodePCI_List(&i_encoded_field->cellsToRemoveList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->cellsToAddModList_exist == TRUE)
	{
		EncodeCellsToAddModList(&i_encoded_field->cellsToAddModList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->blackCellsToRemoveList_exist == TRUE)
	{
		EncodePCI_RangeIndexList(&i_encoded_field->blackCellsToRemoveList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->blackCellsToAddModList_exist == TRUE)
	{
		EncodeMeasObjectNR_blackCellsToAddModList(&i_encoded_field->blackCellsToAddModList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->whiteCellsToRemoveList_exist == TRUE)
	{
		EncodePCI_RangeIndexList(&i_encoded_field->whiteCellsToRemoveList, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->whiteCellsToAddModList_exist == TRUE)
	{
		EncodeMeasObjectNR_whiteCellsToAddModList(&i_encoded_field->whiteCellsToAddModList, buff, bits_iter, asn_error);
	}

}

void DecodeMeasObjectNR_blackCellsToAddModList(
	MeasObjectNR_blackCellsToAddModList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 3, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodePCI_RangeElement(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeMeasObjectNR_whiteCellsToAddModList(
	MeasObjectNR_whiteCellsToAddModList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 3, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodePCI_RangeElement(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeMeasObjectNR(
	MeasObjectNR_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->ssbFrequency_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->ssbSubcarrierSpacing_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->smtc1_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->smtc2_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->refFreqCSI_RS_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->absThreshSS_BlocksConsolidation_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->absThreshCSI_RS_Consolidation_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->nrofSS_BlocksToAverage_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->nrofCSI_RS_ResourcesToAverage_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->cellsToRemoveList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->cellsToAddModList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->blackCellsToRemoveList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->blackCellsToAddModList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->whiteCellsToRemoveList_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->whiteCellsToAddModList_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->ssbFrequency_exist == TRUE)
	{
		DecodeARFCN_ValueNR(&o_decoded_field->ssbFrequency, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->ssbSubcarrierSpacing_exist == TRUE)
	{
		DecodeSubcarrierSpacing(&o_decoded_field->ssbSubcarrierSpacing, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->smtc1_exist == TRUE)
	{
		DecodeSSB_MTC(&o_decoded_field->smtc1, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->smtc2_exist == TRUE)
	{
		DecodeSSB_MTC2(&o_decoded_field->smtc2, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->refFreqCSI_RS_exist == TRUE)
	{
		DecodeARFCN_ValueNR(&o_decoded_field->refFreqCSI_RS, buff, bits_iter, asn_error);
	}

	DecodeReferenceSignalConfig(&o_decoded_field->referenceSignalConfig, buff, bits_iter, asn_error);
	if(o_decoded_field->absThreshSS_BlocksConsolidation_exist == TRUE)
	{
		DecodeThresholdNR(&o_decoded_field->absThreshSS_BlocksConsolidation, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->absThreshCSI_RS_Consolidation_exist == TRUE)
	{
		DecodeThresholdNR(&o_decoded_field->absThreshCSI_RS_Consolidation, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->nrofSS_BlocksToAverage_exist == TRUE)
	{
		o_decoded_field->nrofSS_BlocksToAverage = Get_bits(buff, 4, bits_iter) + 2;
	}

	if(o_decoded_field->nrofCSI_RS_ResourcesToAverage_exist == TRUE)
	{
		o_decoded_field->nrofCSI_RS_ResourcesToAverage = Get_bits(buff, 4, bits_iter) + 2;
	}

	o_decoded_field->quantityConfigIndex = Get_bits(buff, 1, bits_iter) + 1;
	DecodeQ_OffsetRangeList(&o_decoded_field->offsetMO, buff, bits_iter, asn_error);
	if(o_decoded_field->cellsToRemoveList_exist == TRUE)
	{
		DecodePCI_List(&o_decoded_field->cellsToRemoveList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->cellsToAddModList_exist == TRUE)
	{
		DecodeCellsToAddModList(&o_decoded_field->cellsToAddModList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->blackCellsToRemoveList_exist == TRUE)
	{
		DecodePCI_RangeIndexList(&o_decoded_field->blackCellsToRemoveList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->blackCellsToAddModList_exist == TRUE)
	{
		DecodeMeasObjectNR_blackCellsToAddModList(&o_decoded_field->blackCellsToAddModList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->whiteCellsToRemoveList_exist == TRUE)
	{
		DecodePCI_RangeIndexList(&o_decoded_field->whiteCellsToRemoveList, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->whiteCellsToAddModList_exist == TRUE)
	{
		DecodeMeasObjectNR_whiteCellsToAddModList(&o_decoded_field->whiteCellsToAddModList, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

