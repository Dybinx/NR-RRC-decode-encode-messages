/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * phy_parameters.c - codec the message of Phy-Parameters
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "phy_parameters.h"


void EncodePhy_Parameters(
	Phy_Parameters_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->phy_ParametersCommon_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->phy_ParametersXDD_Diff_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->phy_ParametersFRX_Diff_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->phy_ParametersFR1_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->phy_ParametersFR2_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->phy_ParametersCommon_exist == TRUE)
	{
		EncodePhy_ParametersCommon(&i_encoded_field->phy_ParametersCommon, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->phy_ParametersXDD_Diff_exist == TRUE)
	{
		EncodePhy_ParametersXDD_Diff(&i_encoded_field->phy_ParametersXDD_Diff, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->phy_ParametersFRX_Diff_exist == TRUE)
	{
		EncodePhy_ParametersFRX_Diff(&i_encoded_field->phy_ParametersFRX_Diff, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->phy_ParametersFR1_exist == TRUE)
	{
		EncodePhy_ParametersFR1(&i_encoded_field->phy_ParametersFR1, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->phy_ParametersFR2_exist == TRUE)
	{
		EncodePhy_ParametersFR2(&i_encoded_field->phy_ParametersFR2, buff, bits_iter, asn_error);
	}

}

void DecodePhy_Parameters(
	Phy_Parameters_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->phy_ParametersCommon_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->phy_ParametersXDD_Diff_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->phy_ParametersFRX_Diff_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->phy_ParametersFR1_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->phy_ParametersFR2_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->phy_ParametersCommon_exist == TRUE)
	{
		DecodePhy_ParametersCommon(&o_decoded_field->phy_ParametersCommon, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->phy_ParametersXDD_Diff_exist == TRUE)
	{
		DecodePhy_ParametersXDD_Diff(&o_decoded_field->phy_ParametersXDD_Diff, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->phy_ParametersFRX_Diff_exist == TRUE)
	{
		DecodePhy_ParametersFRX_Diff(&o_decoded_field->phy_ParametersFRX_Diff, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->phy_ParametersFR1_exist == TRUE)
	{
		DecodePhy_ParametersFR1(&o_decoded_field->phy_ParametersFR1, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->phy_ParametersFR2_exist == TRUE)
	{
		DecodePhy_ParametersFR2(&o_decoded_field->phy_ParametersFR2, buff, bits_iter, asn_error);
	}

}

