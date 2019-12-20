/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * srs_tpc_pdcch_config.c - codec the message of SRS-TPC-PDCCH-Config
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "srs_tpc_pdcch_config.h"


void EncodeSRS_TPC_PDCCH_Config_srs_CC_SetIndexlist(
	SRS_TPC_PDCCH_Config_srs_CC_SetIndexlist_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 2, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeSRS_CC_SetIndex(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void EncodeSRS_TPC_PDCCH_Config(
	SRS_TPC_PDCCH_Config_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->srs_CC_SetIndexlist_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->srs_CC_SetIndexlist_exist == TRUE)
	{
		EncodeSRS_TPC_PDCCH_Config_srs_CC_SetIndexlist(&i_encoded_field->srs_CC_SetIndexlist, buff, bits_iter, asn_error);
	}

}

void DecodeSRS_TPC_PDCCH_Config_srs_CC_SetIndexlist(
	SRS_TPC_PDCCH_Config_srs_CC_SetIndexlist_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 2, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeSRS_CC_SetIndex(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeSRS_TPC_PDCCH_Config(
	SRS_TPC_PDCCH_Config_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->srs_CC_SetIndexlist_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->srs_CC_SetIndexlist_exist == TRUE)
	{
		DecodeSRS_TPC_PDCCH_Config_srs_CC_SetIndexlist(&o_decoded_field->srs_CC_SetIndexlist, buff, bits_iter, asn_error);
	}

}

