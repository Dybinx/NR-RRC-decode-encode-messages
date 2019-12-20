/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * meas_parameters_xdd_diff.c - codec the message of MeasParametersXDD-Diff
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "meas_parameters_xdd_diff.h"


void EncodeMeasParametersXDD_Diff_intraAndInterF_MeasAndReport(
	MeasParametersXDD_Diff_intraAndInterF_MeasAndReport_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeMeasParametersXDD_Diff_eventA_MeasAndReport(
	MeasParametersXDD_Diff_eventA_MeasAndReport_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeMeasParametersXDD_Diff(
	MeasParametersXDD_Diff_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->intraAndInterF_MeasAndReport_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->eventA_MeasAndReport_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->intraAndInterF_MeasAndReport_exist == TRUE)
	{
		EncodeMeasParametersXDD_Diff_intraAndInterF_MeasAndReport(i_encoded_field->intraAndInterF_MeasAndReport, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->eventA_MeasAndReport_exist == TRUE)
	{
		EncodeMeasParametersXDD_Diff_eventA_MeasAndReport(i_encoded_field->eventA_MeasAndReport, buff, bits_iter, asn_error);
	}

}

void DecodeMeasParametersXDD_Diff_intraAndInterF_MeasAndReport(
	MeasParametersXDD_Diff_intraAndInterF_MeasAndReport_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeMeasParametersXDD_Diff_eventA_MeasAndReport(
	MeasParametersXDD_Diff_eventA_MeasAndReport_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeMeasParametersXDD_Diff(
	MeasParametersXDD_Diff_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->intraAndInterF_MeasAndReport_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->eventA_MeasAndReport_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->intraAndInterF_MeasAndReport_exist == TRUE)
	{
		DecodeMeasParametersXDD_Diff_intraAndInterF_MeasAndReport(&o_decoded_field->intraAndInterF_MeasAndReport, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->eventA_MeasAndReport_exist == TRUE)
	{
		DecodeMeasParametersXDD_Diff_eventA_MeasAndReport(&o_decoded_field->eventA_MeasAndReport, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

