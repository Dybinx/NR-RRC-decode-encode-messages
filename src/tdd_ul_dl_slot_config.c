/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * tdd_ul_dl_slot_config.c - codec the message of TDD-UL-DL-SlotConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "tdd_ul_dl_slot_config.h"


void EncodeTDD_UL_DL_SlotConfig_allDownlink(
	TDD_UL_DL_SlotConfig_allDownlink_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeTDD_UL_DL_SlotConfig_allUplink(
	TDD_UL_DL_SlotConfig_allUplink_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeTDD_UL_DL_SlotConfig_explicit(
	TDD_UL_DL_SlotConfig_explicit_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->nrofDownlinkSymbols_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->nrofUplinkSymbols_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->nrofDownlinkSymbols_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->nrofDownlinkSymbols - 1, 4, bits_iter);
	}

	if(i_encoded_field->nrofUplinkSymbols_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->nrofUplinkSymbols - 1, 4, bits_iter);
	}

}

void EncodeTDD_UL_DL_SlotConfig_symbols(
	TDD_UL_DL_SlotConfig_symbols_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->type, 2, bits_iter);
	switch (i_encoded_field->type)
	{
	case TDD_UL_DL_SLOTCONFIG_SYMBOLS_ALLDOWNLINK:
		EncodeTDD_UL_DL_SlotConfig_allDownlink(&i_encoded_field->a.allDownlink, buff, bits_iter, asn_error);
		break;

	case TDD_UL_DL_SLOTCONFIG_SYMBOLS_ALLUPLINK:
		EncodeTDD_UL_DL_SlotConfig_allUplink(&i_encoded_field->a.allUplink, buff, bits_iter, asn_error);
		break;

	case TDD_UL_DL_SLOTCONFIG_SYMBOLS_EXPLICIT:
		EncodeTDD_UL_DL_SlotConfig_explicit(&i_encoded_field->a.explicit, buff, bits_iter, asn_error);
		break;

	default:
		break;	}
}

void EncodeTDD_UL_DL_SlotConfig(
	TDD_UL_DL_SlotConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeTDD_UL_DL_SlotIndex(&i_encoded_field->slotIndex, buff, bits_iter, asn_error);

	EncodeTDD_UL_DL_SlotConfig_symbols(&i_encoded_field->symbols, buff, bits_iter, asn_error);

}

void DecodeTDD_UL_DL_SlotConfig_allDownlink(
	TDD_UL_DL_SlotConfig_allDownlink_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeTDD_UL_DL_SlotConfig_allUplink(
	TDD_UL_DL_SlotConfig_allUplink_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeTDD_UL_DL_SlotConfig_explicit(
	TDD_UL_DL_SlotConfig_explicit_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->nrofDownlinkSymbols_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->nrofUplinkSymbols_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->nrofDownlinkSymbols_exist == TRUE)
	{
		o_decoded_field->nrofDownlinkSymbols = Get_bits(buff, 4, bits_iter) + 1;
	}

	if(o_decoded_field->nrofUplinkSymbols_exist == TRUE)
	{
		o_decoded_field->nrofUplinkSymbols = Get_bits(buff, 4, bits_iter) + 1;
	}

}

void DecodeTDD_UL_DL_SlotConfig_symbols(
	TDD_UL_DL_SlotConfig_symbols_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    index = 0;

	index = Get_bits(buff, 2, bits_iter);
	o_decoded_field->type = index;
	switch (index)
	{
	case TDD_UL_DL_SLOTCONFIG_SYMBOLS_ALLDOWNLINK:
		DecodeTDD_UL_DL_SlotConfig_allDownlink(&o_decoded_field->a.allDownlink, buff, bits_iter, asn_error);
		break;

	case TDD_UL_DL_SLOTCONFIG_SYMBOLS_ALLUPLINK:
		DecodeTDD_UL_DL_SlotConfig_allUplink(&o_decoded_field->a.allUplink, buff, bits_iter, asn_error);
		break;

	case TDD_UL_DL_SLOTCONFIG_SYMBOLS_EXPLICIT:
		DecodeTDD_UL_DL_SlotConfig_explicit(&o_decoded_field->a.explicit, buff, bits_iter, asn_error);
		break;

	default:
		break;

	}
}

void DecodeTDD_UL_DL_SlotConfig(
	TDD_UL_DL_SlotConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeTDD_UL_DL_SlotIndex(&o_decoded_field->slotIndex, buff, bits_iter, asn_error);
	DecodeTDD_UL_DL_SlotConfig_symbols(&o_decoded_field->symbols, buff, bits_iter, asn_error);
}

