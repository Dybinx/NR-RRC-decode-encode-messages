/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * general_parameters_mrdc_xdd_diff.c - codec the message of GeneralParametersMRDC-XDD-Diff
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "general_parameters_mrdc_xdd_diff.h"


void EncodeGeneralParametersMRDC_XDD_Diff_splitSRB_WithOneUL_Path(
	GeneralParametersMRDC_XDD_Diff_splitSRB_WithOneUL_Path_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeGeneralParametersMRDC_XDD_Diff_splitDRB_withUL_Both_MCG_SCG(
	GeneralParametersMRDC_XDD_Diff_splitDRB_withUL_Both_MCG_SCG_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeGeneralParametersMRDC_XDD_Diff_srb3(
	GeneralParametersMRDC_XDD_Diff_srb3_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeGeneralParametersMRDC_XDD_Diff(
	GeneralParametersMRDC_XDD_Diff_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->splitSRB_WithOneUL_Path_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->splitDRB_withUL_Both_MCG_SCG_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->srb3_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->splitSRB_WithOneUL_Path_exist == TRUE)
	{
		EncodeGeneralParametersMRDC_XDD_Diff_splitSRB_WithOneUL_Path(i_encoded_field->splitSRB_WithOneUL_Path, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->splitDRB_withUL_Both_MCG_SCG_exist == TRUE)
	{
		EncodeGeneralParametersMRDC_XDD_Diff_splitDRB_withUL_Both_MCG_SCG(i_encoded_field->splitDRB_withUL_Both_MCG_SCG, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->srb3_exist == TRUE)
	{
		EncodeGeneralParametersMRDC_XDD_Diff_srb3(i_encoded_field->srb3, buff, bits_iter, asn_error);
	}

}

void DecodeGeneralParametersMRDC_XDD_Diff_splitSRB_WithOneUL_Path(
	GeneralParametersMRDC_XDD_Diff_splitSRB_WithOneUL_Path_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeGeneralParametersMRDC_XDD_Diff_splitDRB_withUL_Both_MCG_SCG(
	GeneralParametersMRDC_XDD_Diff_splitDRB_withUL_Both_MCG_SCG_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeGeneralParametersMRDC_XDD_Diff_srb3(
	GeneralParametersMRDC_XDD_Diff_srb3_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeGeneralParametersMRDC_XDD_Diff(
	GeneralParametersMRDC_XDD_Diff_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->splitSRB_WithOneUL_Path_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->splitDRB_withUL_Both_MCG_SCG_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->srb3_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->splitSRB_WithOneUL_Path_exist == TRUE)
	{
		DecodeGeneralParametersMRDC_XDD_Diff_splitSRB_WithOneUL_Path(&o_decoded_field->splitSRB_WithOneUL_Path, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->splitDRB_withUL_Both_MCG_SCG_exist == TRUE)
	{
		DecodeGeneralParametersMRDC_XDD_Diff_splitDRB_withUL_Both_MCG_SCG(&o_decoded_field->splitDRB_withUL_Both_MCG_SCG, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->srb3_exist == TRUE)
	{
		DecodeGeneralParametersMRDC_XDD_Diff_srb3(&o_decoded_field->srb3, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

