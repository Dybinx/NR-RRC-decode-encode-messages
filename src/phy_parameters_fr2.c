/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * phy_parameters_fr2.c - codec the message of Phy-ParametersFR2
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "phy_parameters_fr2.h"


void EncodePhy_ParametersFR2_calibrationGapPA(
	Phy_ParametersFR2_calibrationGapPA_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersFR2_pdsch_RE_MappingFR2(
	Phy_ParametersFR2_pdsch_RE_MappingFR2_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodePhy_ParametersFR2(
	Phy_ParametersFR2_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->calibrationGapPA_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->pdsch_RE_MappingFR2_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->calibrationGapPA_exist == TRUE)
	{
		EncodePhy_ParametersFR2_calibrationGapPA(i_encoded_field->calibrationGapPA, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->pdsch_RE_MappingFR2_exist == TRUE)
	{
		EncodePhy_ParametersFR2_pdsch_RE_MappingFR2(i_encoded_field->pdsch_RE_MappingFR2, buff, bits_iter, asn_error);
	}

}

void DecodePhy_ParametersFR2_calibrationGapPA(
	Phy_ParametersFR2_calibrationGapPA_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersFR2_pdsch_RE_MappingFR2(
	Phy_ParametersFR2_pdsch_RE_MappingFR2_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodePhy_ParametersFR2(
	Phy_ParametersFR2_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->calibrationGapPA_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->pdsch_RE_MappingFR2_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->calibrationGapPA_exist == TRUE)
	{
		DecodePhy_ParametersFR2_calibrationGapPA(&o_decoded_field->calibrationGapPA, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->pdsch_RE_MappingFR2_exist == TRUE)
	{
		DecodePhy_ParametersFR2_pdsch_RE_MappingFR2(&o_decoded_field->pdsch_RE_MappingFR2, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

