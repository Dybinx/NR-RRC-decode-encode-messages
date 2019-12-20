/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * srb_to_add_mod.c - codec the message of SRB-ToAddMod
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "srb_to_add_mod.h"


void EncodeSRB_ToAddMod_reestablishPDCP(
	SRB_ToAddMod_reestablishPDCP_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeSRB_ToAddMod_discardOnPDCP(
	SRB_ToAddMod_discardOnPDCP_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeSRB_ToAddMod(
	SRB_ToAddMod_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->reestablishPDCP_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->discardOnPDCP_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->pdcp_Config_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodeSRB_Identity(&i_encoded_field->srb_Identity, buff, bits_iter, asn_error);

	if(i_encoded_field->reestablishPDCP_exist == TRUE)
	{
		EncodeSRB_ToAddMod_reestablishPDCP(i_encoded_field->reestablishPDCP, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->discardOnPDCP_exist == TRUE)
	{
		EncodeSRB_ToAddMod_discardOnPDCP(i_encoded_field->discardOnPDCP, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->pdcp_Config_exist == TRUE)
	{
		EncodePDCP_Config(&i_encoded_field->pdcp_Config, buff, bits_iter, asn_error);
	}

}

void DecodeSRB_ToAddMod_reestablishPDCP(
	SRB_ToAddMod_reestablishPDCP_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeSRB_ToAddMod_discardOnPDCP(
	SRB_ToAddMod_discardOnPDCP_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeSRB_ToAddMod(
	SRB_ToAddMod_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->reestablishPDCP_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->discardOnPDCP_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->pdcp_Config_exist = Get_bits(buff, 1, bits_iter);
	DecodeSRB_Identity(&o_decoded_field->srb_Identity, buff, bits_iter, asn_error);
	if(o_decoded_field->reestablishPDCP_exist == TRUE)
	{
		DecodeSRB_ToAddMod_reestablishPDCP(&o_decoded_field->reestablishPDCP, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->discardOnPDCP_exist == TRUE)
	{
		DecodeSRB_ToAddMod_discardOnPDCP(&o_decoded_field->discardOnPDCP, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->pdcp_Config_exist == TRUE)
	{
		DecodePDCP_Config(&o_decoded_field->pdcp_Config, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

