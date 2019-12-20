/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * report_config_to_add_mod.c - codec the message of ReportConfigToAddMod
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "report_config_to_add_mod.h"


void EncodeReportConfigToAddMod_reportConfig(
	ReportConfigToAddMod_reportConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root.*/
	PutBits(buff, 0, 1, bits_iter);
	PutBits(buff, i_encoded_field->type, 0, bits_iter);
	switch (i_encoded_field->type)
	{
	case REPORTCONFIGTOADDMOD_REPORTCONFIG_REPORTCONFIGNR:
		EncodeReportConfigNR(&i_encoded_field->a.reportConfigNR, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeReportConfigToAddMod(
	ReportConfigToAddMod_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeReportConfigId(&i_encoded_field->reportConfigId, buff, bits_iter, asn_error);

	EncodeReportConfigToAddMod_reportConfig(&i_encoded_field->reportConfig, buff, bits_iter, asn_error);

}

void DecodeReportConfigToAddMod_reportConfig(
	ReportConfigToAddMod_reportConfig_t *o_decoded_field, 
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
		index = 0;
	}
	else
	{
		//need to handle this asn error.
	}

	o_decoded_field->type = index;
	switch (index)
	{
	case REPORTCONFIGTOADDMOD_REPORTCONFIG_REPORTCONFIGNR:
		DecodeReportConfigNR(&o_decoded_field->a.reportConfigNR, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeReportConfigToAddMod(
	ReportConfigToAddMod_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeReportConfigId(&o_decoded_field->reportConfigId, buff, bits_iter, asn_error);
	DecodeReportConfigToAddMod_reportConfig(&o_decoded_field->reportConfig, buff, bits_iter, asn_error);
}

