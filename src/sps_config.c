/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * sps_config.c - codec the message of SPS-Config
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "sps_config.h"


void EncodeSPS_Config_periodicity(
	SPS_Config_periodicity_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 4, bits_iter);
}

void EncodeSPS_Config(
	SPS_Config_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->n1PUCCH_AN_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodeSPS_Config_periodicity(i_encoded_field->periodicity, buff, bits_iter, asn_error);

	PutBits(buff, i_encoded_field->nrofHARQ_Processes - 1, 3, bits_iter);

	if(i_encoded_field->n1PUCCH_AN_exist == TRUE)
	{
		EncodePUCCH_ResourceId(&i_encoded_field->n1PUCCH_AN, buff, bits_iter, asn_error);
	}

}

void DecodeSPS_Config_periodicity(
	SPS_Config_periodicity_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 4, bits_iter);
}

void DecodeSPS_Config(
	SPS_Config_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->n1PUCCH_AN_exist = Get_bits(buff, 1, bits_iter);
	DecodeSPS_Config_periodicity(&o_decoded_field->periodicity, buff, bits_iter, asn_error);
	o_decoded_field->nrofHARQ_Processes = Get_bits(buff, 3, bits_iter) + 1;
	if(o_decoded_field->n1PUCCH_AN_exist == TRUE)
	{
		DecodePUCCH_ResourceId(&o_decoded_field->n1PUCCH_AN, buff, bits_iter, asn_error);
	}

}

