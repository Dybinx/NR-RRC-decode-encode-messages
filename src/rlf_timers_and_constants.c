/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * rlf_timers_and_constants.c - codec the message of RLF-TimersAndConstants
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "rlf_timers_and_constants.h"


void EncodeRLF_TimersAndConstants_t310(
	RLF_TimersAndConstants_t310_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 4, bits_iter);
}

void EncodeRLF_TimersAndConstants_n310(
	RLF_TimersAndConstants_n310_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 3, bits_iter);
}

void EncodeRLF_TimersAndConstants_n311(
	RLF_TimersAndConstants_n311_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 3, bits_iter);
}

void EncodeRLF_TimersAndConstants(
	RLF_TimersAndConstants_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	EncodeRLF_TimersAndConstants_t310(i_encoded_field->t310, buff, bits_iter, asn_error);

	EncodeRLF_TimersAndConstants_n310(i_encoded_field->n310, buff, bits_iter, asn_error);

	EncodeRLF_TimersAndConstants_n311(i_encoded_field->n311, buff, bits_iter, asn_error);

}

void DecodeRLF_TimersAndConstants_t310(
	RLF_TimersAndConstants_t310_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 4, bits_iter);
}

void DecodeRLF_TimersAndConstants_n310(
	RLF_TimersAndConstants_n310_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 3, bits_iter);
}

void DecodeRLF_TimersAndConstants_n311(
	RLF_TimersAndConstants_n311_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 3, bits_iter);
}

void DecodeRLF_TimersAndConstants(
	RLF_TimersAndConstants_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	DecodeRLF_TimersAndConstants_t310(&o_decoded_field->t310, buff, bits_iter, asn_error);
	DecodeRLF_TimersAndConstants_n310(&o_decoded_field->n310, buff, bits_iter, asn_error);
	DecodeRLF_TimersAndConstants_n311(&o_decoded_field->n311, buff, bits_iter, asn_error);
	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

