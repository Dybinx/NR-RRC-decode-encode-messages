/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * tdd_ul_dl_pattern.c - codec the message of TDD-UL-DL-Pattern
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "tdd_ul_dl_pattern.h"


void EncodeTDD_UL_DL_Pattern_dl_UL_TransmissionPeriodicity(
	TDD_UL_DL_Pattern_dl_UL_TransmissionPeriodicity_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 3, bits_iter);
}

void EncodeTDD_UL_DL_Pattern(
	TDD_UL_DL_Pattern_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	EncodeTDD_UL_DL_Pattern_dl_UL_TransmissionPeriodicity(i_encoded_field->dl_UL_TransmissionPeriodicity, buff, bits_iter, asn_error);

	PutBits(buff, i_encoded_field->nrofDownlinkSlots, 9, bits_iter);

	PutBits(buff, i_encoded_field->nrofDownlinkSymbols, 4, bits_iter);

	PutBits(buff, i_encoded_field->nrofUplinkSlots, 9, bits_iter);

	PutBits(buff, i_encoded_field->nrofUplinkSymbols, 4, bits_iter);

}

void DecodeTDD_UL_DL_Pattern_dl_UL_TransmissionPeriodicity(
	TDD_UL_DL_Pattern_dl_UL_TransmissionPeriodicity_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 3, bits_iter);
}

void DecodeTDD_UL_DL_Pattern(
	TDD_UL_DL_Pattern_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	DecodeTDD_UL_DL_Pattern_dl_UL_TransmissionPeriodicity(&o_decoded_field->dl_UL_TransmissionPeriodicity, buff, bits_iter, asn_error);
	o_decoded_field->nrofDownlinkSlots = Get_bits(buff, 9, bits_iter);
	o_decoded_field->nrofDownlinkSymbols = Get_bits(buff, 4, bits_iter);
	o_decoded_field->nrofUplinkSlots = Get_bits(buff, 9, bits_iter);
	o_decoded_field->nrofUplinkSymbols = Get_bits(buff, 4, bits_iter);
	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

