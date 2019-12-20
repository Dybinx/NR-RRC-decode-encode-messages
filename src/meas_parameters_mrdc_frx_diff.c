/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * meas_parameters_mrdc_frx_diff.c - codec the message of MeasParametersMRDC-FRX-Diff
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "meas_parameters_mrdc_frx_diff.h"


void EncodeMeasParametersMRDC_FRX_Diff_simultaneousRxDataSSB_DiffNumerology(
	MeasParametersMRDC_FRX_Diff_simultaneousRxDataSSB_DiffNumerology_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeMeasParametersMRDC_FRX_Diff(
	MeasParametersMRDC_FRX_Diff_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->simultaneousRxDataSSB_DiffNumerology_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->simultaneousRxDataSSB_DiffNumerology_exist == TRUE)
	{
		EncodeMeasParametersMRDC_FRX_Diff_simultaneousRxDataSSB_DiffNumerology(i_encoded_field->simultaneousRxDataSSB_DiffNumerology, buff, bits_iter, asn_error);
	}

}

void DecodeMeasParametersMRDC_FRX_Diff_simultaneousRxDataSSB_DiffNumerology(
	MeasParametersMRDC_FRX_Diff_simultaneousRxDataSSB_DiffNumerology_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeMeasParametersMRDC_FRX_Diff(
	MeasParametersMRDC_FRX_Diff_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->simultaneousRxDataSSB_DiffNumerology_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->simultaneousRxDataSSB_DiffNumerology_exist == TRUE)
	{
		DecodeMeasParametersMRDC_FRX_Diff_simultaneousRxDataSSB_DiffNumerology(&o_decoded_field->simultaneousRxDataSSB_DiffNumerology, buff, bits_iter, asn_error);
	}

}

