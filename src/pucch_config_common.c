/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pucch_config_common.c - codec the message of PUCCH-ConfigCommon
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "pucch_config_common.h"


void EncodePUCCH_ConfigCommon_pucch_GroupHopping(
	PUCCH_ConfigCommon_pucch_GroupHopping_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodePUCCH_ConfigCommon(
	PUCCH_ConfigCommon_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->pucch_ResourceCommon_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->hoppingId_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->p0_nominal_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->pucch_ResourceCommon_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->pucch_ResourceCommon, 4, bits_iter);
	}

	EncodePUCCH_ConfigCommon_pucch_GroupHopping(i_encoded_field->pucch_GroupHopping, buff, bits_iter, asn_error);

	if(i_encoded_field->hoppingId_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->hoppingId, 11, bits_iter);
	}

	if(i_encoded_field->p0_nominal_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->p0_nominal + 202, 8, bits_iter);
	}

}

void DecodePUCCH_ConfigCommon_pucch_GroupHopping(
	PUCCH_ConfigCommon_pucch_GroupHopping_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodePUCCH_ConfigCommon(
	PUCCH_ConfigCommon_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->pucch_ResourceCommon_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->hoppingId_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->p0_nominal_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->pucch_ResourceCommon_exist == TRUE)
	{
		o_decoded_field->pucch_ResourceCommon = Get_bits(buff, 4, bits_iter);
	}

	DecodePUCCH_ConfigCommon_pucch_GroupHopping(&o_decoded_field->pucch_GroupHopping, buff, bits_iter, asn_error);
	if(o_decoded_field->hoppingId_exist == TRUE)
	{
		o_decoded_field->hoppingId = Get_bits(buff, 11, bits_iter);
	}

	if(o_decoded_field->p0_nominal_exist == TRUE)
	{
		o_decoded_field->p0_nominal = Get_bits(buff, 8, bits_iter) - 202;
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

