/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * phy_parameters_xdd_diff.c - codec the message of Phy-ParametersXDD-Diff
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "phy_parameters_xdd_diff.h"


void EncodePhy_ParametersXDD_Diff_dynamicSFI(
	Phy_ParametersXDD_Diff_dynamicSFI_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersXDD_Diff_twoPUCCH_F0_2_ConsecSymbols(
	Phy_ParametersXDD_Diff_twoPUCCH_F0_2_ConsecSymbols_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersXDD_Diff_twoDifferentTPC_Loop_PUSCH(
	Phy_ParametersXDD_Diff_twoDifferentTPC_Loop_PUSCH_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersXDD_Diff_twoDifferentTPC_Loop_PUCCH(
	Phy_ParametersXDD_Diff_twoDifferentTPC_Loop_PUCCH_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersXDD_Diff(
	Phy_ParametersXDD_Diff_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->dynamicSFI_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->twoPUCCH_F0_2_ConsecSymbols_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->twoDifferentTPC_Loop_PUSCH_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->twoDifferentTPC_Loop_PUCCH_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->dynamicSFI_exist == TRUE)
	{
		EncodePhy_ParametersXDD_Diff_dynamicSFI(i_encoded_field->dynamicSFI, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->twoPUCCH_F0_2_ConsecSymbols_exist == TRUE)
	{
		EncodePhy_ParametersXDD_Diff_twoPUCCH_F0_2_ConsecSymbols(i_encoded_field->twoPUCCH_F0_2_ConsecSymbols, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->twoDifferentTPC_Loop_PUSCH_exist == TRUE)
	{
		EncodePhy_ParametersXDD_Diff_twoDifferentTPC_Loop_PUSCH(i_encoded_field->twoDifferentTPC_Loop_PUSCH, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->twoDifferentTPC_Loop_PUCCH_exist == TRUE)
	{
		EncodePhy_ParametersXDD_Diff_twoDifferentTPC_Loop_PUCCH(i_encoded_field->twoDifferentTPC_Loop_PUCCH, buff, bits_iter, asn_error);
	}

}

void DecodePhy_ParametersXDD_Diff_dynamicSFI(
	Phy_ParametersXDD_Diff_dynamicSFI_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersXDD_Diff_twoPUCCH_F0_2_ConsecSymbols(
	Phy_ParametersXDD_Diff_twoPUCCH_F0_2_ConsecSymbols_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersXDD_Diff_twoDifferentTPC_Loop_PUSCH(
	Phy_ParametersXDD_Diff_twoDifferentTPC_Loop_PUSCH_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersXDD_Diff_twoDifferentTPC_Loop_PUCCH(
	Phy_ParametersXDD_Diff_twoDifferentTPC_Loop_PUCCH_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersXDD_Diff(
	Phy_ParametersXDD_Diff_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->dynamicSFI_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->twoPUCCH_F0_2_ConsecSymbols_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->twoDifferentTPC_Loop_PUSCH_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->twoDifferentTPC_Loop_PUCCH_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->dynamicSFI_exist == TRUE)
	{
		DecodePhy_ParametersXDD_Diff_dynamicSFI(&o_decoded_field->dynamicSFI, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->twoPUCCH_F0_2_ConsecSymbols_exist == TRUE)
	{
		DecodePhy_ParametersXDD_Diff_twoPUCCH_F0_2_ConsecSymbols(&o_decoded_field->twoPUCCH_F0_2_ConsecSymbols, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->twoDifferentTPC_Loop_PUSCH_exist == TRUE)
	{
		DecodePhy_ParametersXDD_Diff_twoDifferentTPC_Loop_PUSCH(&o_decoded_field->twoDifferentTPC_Loop_PUSCH, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->twoDifferentTPC_Loop_PUCCH_exist == TRUE)
	{
		DecodePhy_ParametersXDD_Diff_twoDifferentTPC_Loop_PUCCH(&o_decoded_field->twoDifferentTPC_Loop_PUCCH, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

