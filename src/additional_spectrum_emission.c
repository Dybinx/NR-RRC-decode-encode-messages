/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * additional_spectrum_emission.c - codec the message of AdditionalSpectrumEmission
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "additional_spectrum_emission.h"


void EncodeAdditionalSpectrumEmission(
	AdditionalSpectrumEmission_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->value, 3, bits_iter);
}

void DecodeAdditionalSpectrumEmission(
	AdditionalSpectrumEmission_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->value = Get_bits(buff, 3, bits_iter);
}

