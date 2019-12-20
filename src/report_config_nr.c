/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * report_config_nr.c - codec the message of ReportConfigNR
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "report_config_nr.h"


void EncodeReportConfigNR_reportType(
	ReportConfigNR_reportType_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root.*/
	PutBits(buff, 0, 1, bits_iter);
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case REPORTCONFIGNR_REPORTTYPE_PERIODICAL:
		EncodePeriodicalReportConfig(&i_encoded_field->a.periodical, buff, bits_iter, asn_error);
		break;

	case REPORTCONFIGNR_REPORTTYPE_EVENTTRIGGERED:
		EncodeEventTriggerConfig(&i_encoded_field->a.eventTriggered, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeReportConfigNR(
	ReportConfigNR_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeReportConfigNR_reportType(&i_encoded_field->reportType, buff, bits_iter, asn_error);

}

void DecodeReportConfigNR_reportType(
	ReportConfigNR_reportType_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;
	uint8    ext_flag = 0;
	uint8    flag = 0;

	ext_flag = Get_bits(buff, 1, bits_iter);
	if(ext_flag == 0)
	{
		index = Get_bits(buff, 1, bits_iter);
	}
	else
	{
		//need to handle this asn error.
	}

	o_decoded_field->type = index;
	switch (index)
	{
	case REPORTCONFIGNR_REPORTTYPE_PERIODICAL:
		DecodePeriodicalReportConfig(&o_decoded_field->a.periodical, buff, bits_iter, asn_error);
		break;

	case REPORTCONFIGNR_REPORTTYPE_EVENTTRIGGERED:
		DecodeEventTriggerConfig(&o_decoded_field->a.eventTriggered, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeReportConfigNR(
	ReportConfigNR_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeReportConfigNR_reportType(&o_decoded_field->reportType, buff, bits_iter, asn_error);
}

