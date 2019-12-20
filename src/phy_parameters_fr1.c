/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * phy_parameters_fr1.c - codec the message of Phy-ParametersFR1
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "phy_parameters_fr1.h"


void EncodePhy_ParametersFR1_pdcchMonitoringSingleOccasion(
	Phy_ParametersFR1_pdcchMonitoringSingleOccasion_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersFR1_scs_60kHz(
	Phy_ParametersFR1_scs_60kHz_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersFR1_pdsch_256QAM_FR1(
	Phy_ParametersFR1_pdsch_256QAM_FR1_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodePhy_ParametersFR1_pdsch_RE_MappingFR1(
	Phy_ParametersFR1_pdsch_RE_MappingFR1_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodePhy_ParametersFR1(
	Phy_ParametersFR1_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->pdcchMonitoringSingleOccasion_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->scs_60kHz_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->pdsch_256QAM_FR1_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->pdsch_RE_MappingFR1_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->pdcchMonitoringSingleOccasion_exist == TRUE)
	{
		EncodePhy_ParametersFR1_pdcchMonitoringSingleOccasion(i_encoded_field->pdcchMonitoringSingleOccasion, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->scs_60kHz_exist == TRUE)
	{
		EncodePhy_ParametersFR1_scs_60kHz(i_encoded_field->scs_60kHz, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->pdsch_256QAM_FR1_exist == TRUE)
	{
		EncodePhy_ParametersFR1_pdsch_256QAM_FR1(i_encoded_field->pdsch_256QAM_FR1, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->pdsch_RE_MappingFR1_exist == TRUE)
	{
		EncodePhy_ParametersFR1_pdsch_RE_MappingFR1(i_encoded_field->pdsch_RE_MappingFR1, buff, bits_iter, asn_error);
	}

}

void DecodePhy_ParametersFR1_pdcchMonitoringSingleOccasion(
	Phy_ParametersFR1_pdcchMonitoringSingleOccasion_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersFR1_scs_60kHz(
	Phy_ParametersFR1_scs_60kHz_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersFR1_pdsch_256QAM_FR1(
	Phy_ParametersFR1_pdsch_256QAM_FR1_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodePhy_ParametersFR1_pdsch_RE_MappingFR1(
	Phy_ParametersFR1_pdsch_RE_MappingFR1_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodePhy_ParametersFR1(
	Phy_ParametersFR1_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->pdcchMonitoringSingleOccasion_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->scs_60kHz_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->pdsch_256QAM_FR1_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->pdsch_RE_MappingFR1_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->pdcchMonitoringSingleOccasion_exist == TRUE)
	{
		DecodePhy_ParametersFR1_pdcchMonitoringSingleOccasion(&o_decoded_field->pdcchMonitoringSingleOccasion, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->scs_60kHz_exist == TRUE)
	{
		DecodePhy_ParametersFR1_scs_60kHz(&o_decoded_field->scs_60kHz, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->pdsch_256QAM_FR1_exist == TRUE)
	{
		DecodePhy_ParametersFR1_pdsch_256QAM_FR1(&o_decoded_field->pdsch_256QAM_FR1, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->pdsch_RE_MappingFR1_exist == TRUE)
	{
		DecodePhy_ParametersFR1_pdsch_RE_MappingFR1(&o_decoded_field->pdsch_RE_MappingFR1, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

