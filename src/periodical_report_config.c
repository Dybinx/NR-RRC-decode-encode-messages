/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * periodical_report_config.c - codec the message of PeriodicalReportConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "periodical_report_config.h"


void EncodePeriodicalReportConfig_reportAmount(
	PeriodicalReportConfig_reportAmount_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 3, bits_iter);
}

void EncodePeriodicalReportConfig(
	PeriodicalReportConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->reportQuantityRsIndexes_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->maxNrofRsIndexesToReport_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodeNR_RS_Type(i_encoded_field->rsType, buff, bits_iter, asn_error);

	EncodeReportInterval(i_encoded_field->reportInterval, buff, bits_iter, asn_error);

	EncodePeriodicalReportConfig_reportAmount(i_encoded_field->reportAmount, buff, bits_iter, asn_error);

	EncodeMeasReportQuantity(&i_encoded_field->reportQuantityCell, buff, bits_iter, asn_error);

	PutBits(buff, i_encoded_field->maxReportCells - 1, 3, bits_iter);

	if(i_encoded_field->reportQuantityRsIndexes_exist == TRUE)
	{
		EncodeMeasReportQuantity(&i_encoded_field->reportQuantityRsIndexes, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->maxNrofRsIndexesToReport_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->maxNrofRsIndexesToReport - 1, 5, bits_iter);
	}

	PutBits(buff, i_encoded_field->includeBeamMeasurements, 1, bits_iter);

	PutBits(buff, i_encoded_field->useWhiteCellList, 1, bits_iter);

}

void DecodePeriodicalReportConfig_reportAmount(
	PeriodicalReportConfig_reportAmount_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 3, bits_iter);
}

void DecodePeriodicalReportConfig(
	PeriodicalReportConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->reportQuantityRsIndexes_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->maxNrofRsIndexesToReport_exist = Get_bits(buff, 1, bits_iter);
	DecodeNR_RS_Type(&o_decoded_field->rsType, buff, bits_iter, asn_error);
	DecodeReportInterval(&o_decoded_field->reportInterval, buff, bits_iter, asn_error);
	DecodePeriodicalReportConfig_reportAmount(&o_decoded_field->reportAmount, buff, bits_iter, asn_error);
	DecodeMeasReportQuantity(&o_decoded_field->reportQuantityCell, buff, bits_iter, asn_error);
	o_decoded_field->maxReportCells = Get_bits(buff, 3, bits_iter) + 1;
	if(o_decoded_field->reportQuantityRsIndexes_exist == TRUE)
	{
		DecodeMeasReportQuantity(&o_decoded_field->reportQuantityRsIndexes, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->maxNrofRsIndexesToReport_exist == TRUE)
	{
		o_decoded_field->maxNrofRsIndexesToReport = Get_bits(buff, 5, bits_iter) + 1;
	}

	o_decoded_field->includeBeamMeasurements = Get_bits(buff, 1, bits_iter);
	o_decoded_field->useWhiteCellList = Get_bits(buff, 1, bits_iter);
	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

