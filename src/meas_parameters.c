/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * meas_parameters.c - codec the message of MeasParameters
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "meas_parameters.h"


void EncodeMeasParameters(
	MeasParameters_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->measParametersCommon_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->measParametersXDD_Diff_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->measParametersFRX_Diff_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->measParametersCommon_exist == TRUE)
	{
		EncodeMeasParametersCommon(&i_encoded_field->measParametersCommon, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->measParametersXDD_Diff_exist == TRUE)
	{
		EncodeMeasParametersXDD_Diff(&i_encoded_field->measParametersXDD_Diff, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->measParametersFRX_Diff_exist == TRUE)
	{
		EncodeMeasParametersFRX_Diff(&i_encoded_field->measParametersFRX_Diff, buff, bits_iter, asn_error);
	}

}

void DecodeMeasParameters(
	MeasParameters_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->measParametersCommon_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->measParametersXDD_Diff_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->measParametersFRX_Diff_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->measParametersCommon_exist == TRUE)
	{
		DecodeMeasParametersCommon(&o_decoded_field->measParametersCommon, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->measParametersXDD_Diff_exist == TRUE)
	{
		DecodeMeasParametersXDD_Diff(&o_decoded_field->measParametersXDD_Diff, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->measParametersFRX_Diff_exist == TRUE)
	{
		DecodeMeasParametersFRX_Diff(&o_decoded_field->measParametersFRX_Diff, buff, bits_iter, asn_error);
	}

}

