/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * drb_to_add_mod.c - codec the message of DRB-ToAddMod
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "drb_to_add_mod.h"


void EncodeDRB_ToAddMod_cnAssociation(
	DRB_ToAddMod_cnAssociation_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 1, bits_iter);
	switch (i_encoded_field->type)
	{
	case DRB_TOADDMOD_CNASSOCIATION_EPS_BEARERIDENTITY:
		PutBits(buff, i_encoded_field->a.eps_BearerIdentity, 4, bits_iter);
		break;

	case DRB_TOADDMOD_CNASSOCIATION_SDAP_CONFIG:
		EncodeSDAP_Config(&i_encoded_field->a.sdap_Config, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeDRB_ToAddMod_reestablishPDCP(
	DRB_ToAddMod_reestablishPDCP_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeDRB_ToAddMod_recoverPDCP(
	DRB_ToAddMod_recoverPDCP_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 0, bits_iter);
}

void EncodeDRB_ToAddMod(
	DRB_ToAddMod_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->cnAssociation_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->reestablishPDCP_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->recoverPDCP_exist == TRUE)
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

	if(i_encoded_field->cnAssociation_exist == TRUE)
	{
		EncodeDRB_ToAddMod_cnAssociation(&i_encoded_field->cnAssociation, buff, bits_iter, asn_error);
	}

	EncodeDRB_Identity(&i_encoded_field->drb_Identity, buff, bits_iter, asn_error);

	if(i_encoded_field->reestablishPDCP_exist == TRUE)
	{
		EncodeDRB_ToAddMod_reestablishPDCP(i_encoded_field->reestablishPDCP, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->recoverPDCP_exist == TRUE)
	{
		EncodeDRB_ToAddMod_recoverPDCP(i_encoded_field->recoverPDCP, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->pdcp_Config_exist == TRUE)
	{
		EncodePDCP_Config(&i_encoded_field->pdcp_Config, buff, bits_iter, asn_error);
	}

}

void DecodeDRB_ToAddMod_cnAssociation(
	DRB_ToAddMod_cnAssociation_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 1, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case DRB_TOADDMOD_CNASSOCIATION_EPS_BEARERIDENTITY:
		o_decoded_field->a.eps_BearerIdentity = Get_bits(buff, 4, bits_iter);
		break;

	case DRB_TOADDMOD_CNASSOCIATION_SDAP_CONFIG:
		DecodeSDAP_Config(&o_decoded_field->a.sdap_Config, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeDRB_ToAddMod_reestablishPDCP(
	DRB_ToAddMod_reestablishPDCP_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeDRB_ToAddMod_recoverPDCP(
	DRB_ToAddMod_recoverPDCP_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = 0;
}

void DecodeDRB_ToAddMod(
	DRB_ToAddMod_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->cnAssociation_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->reestablishPDCP_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->recoverPDCP_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->pdcp_Config_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->cnAssociation_exist == TRUE)
	{
		DecodeDRB_ToAddMod_cnAssociation(&o_decoded_field->cnAssociation, buff, bits_iter, asn_error);
	}

	DecodeDRB_Identity(&o_decoded_field->drb_Identity, buff, bits_iter, asn_error);
	if(o_decoded_field->reestablishPDCP_exist == TRUE)
	{
		DecodeDRB_ToAddMod_reestablishPDCP(&o_decoded_field->reestablishPDCP, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->recoverPDCP_exist == TRUE)
	{
		DecodeDRB_ToAddMod_recoverPDCP(&o_decoded_field->recoverPDCP, buff, bits_iter, asn_error);
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

