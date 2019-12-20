/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * meas_parameters_mrdc_xdd_diff.c - codec the message of MeasParametersMRDC-XDD-Diff
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "meas_parameters_mrdc_xdd_diff.h"


void EncodeMeasParametersMRDC_XDD_Diff_sftd_MeasPSCell(
	MeasParametersMRDC_XDD_Diff_sftd_MeasPSCell_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeMeasParametersMRDC_XDD_Diff_sftd_MeasNR_Cell(
	MeasParametersMRDC_XDD_Diff_sftd_MeasNR_Cell_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeMeasParametersMRDC_XDD_Diff(
	MeasParametersMRDC_XDD_Diff_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->sftd_MeasPSCell_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->sftd_MeasNR_Cell_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->sftd_MeasPSCell_exist == TRUE)
	{
		EncodeMeasParametersMRDC_XDD_Diff_sftd_MeasPSCell(i_encoded_field->sftd_MeasPSCell, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->sftd_MeasNR_Cell_exist == TRUE)
	{
		EncodeMeasParametersMRDC_XDD_Diff_sftd_MeasNR_Cell(i_encoded_field->sftd_MeasNR_Cell, buff, bits_iter, asn_error);
	}

}

void DecodeMeasParametersMRDC_XDD_Diff_sftd_MeasPSCell(
	MeasParametersMRDC_XDD_Diff_sftd_MeasPSCell_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeMeasParametersMRDC_XDD_Diff_sftd_MeasNR_Cell(
	MeasParametersMRDC_XDD_Diff_sftd_MeasNR_Cell_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeMeasParametersMRDC_XDD_Diff(
	MeasParametersMRDC_XDD_Diff_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->sftd_MeasPSCell_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->sftd_MeasNR_Cell_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->sftd_MeasPSCell_exist == TRUE)
	{
		DecodeMeasParametersMRDC_XDD_Diff_sftd_MeasPSCell(&o_decoded_field->sftd_MeasPSCell, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->sftd_MeasNR_Cell_exist == TRUE)
	{
		DecodeMeasParametersMRDC_XDD_Diff_sftd_MeasNR_Cell(&o_decoded_field->sftd_MeasNR_Cell, buff, bits_iter, asn_error);
	}

}

