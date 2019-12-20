/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * meas_parameters_mrdc.c - codec the message of MeasParametersMRDC
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "meas_parameters_mrdc.h"


void EncodeMeasParametersMRDC(
	MeasParametersMRDC_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->measParametersMRDC_Common_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->measParametersMRDC_XDD_Diff_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->measParametersMRDC_FRX_Diff_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->measParametersMRDC_Common_exist == TRUE)
	{
		EncodeMeasParametersMRDC_Common(&i_encoded_field->measParametersMRDC_Common, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->measParametersMRDC_XDD_Diff_exist == TRUE)
	{
		EncodeMeasParametersMRDC_XDD_Diff(&i_encoded_field->measParametersMRDC_XDD_Diff, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->measParametersMRDC_FRX_Diff_exist == TRUE)
	{
		EncodeMeasParametersMRDC_FRX_Diff(&i_encoded_field->measParametersMRDC_FRX_Diff, buff, bits_iter, asn_error);
	}

}

void DecodeMeasParametersMRDC(
	MeasParametersMRDC_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->measParametersMRDC_Common_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->measParametersMRDC_XDD_Diff_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->measParametersMRDC_FRX_Diff_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->measParametersMRDC_Common_exist == TRUE)
	{
		DecodeMeasParametersMRDC_Common(&o_decoded_field->measParametersMRDC_Common, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->measParametersMRDC_XDD_Diff_exist == TRUE)
	{
		DecodeMeasParametersMRDC_XDD_Diff(&o_decoded_field->measParametersMRDC_XDD_Diff, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->measParametersMRDC_FRX_Diff_exist == TRUE)
	{
		DecodeMeasParametersMRDC_FRX_Diff(&o_decoded_field->measParametersMRDC_FRX_Diff, buff, bits_iter, asn_error);
	}

}

