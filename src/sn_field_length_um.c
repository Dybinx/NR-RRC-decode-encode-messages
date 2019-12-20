/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * sn_field_length_um.c - codec the message of SN-FieldLengthUM
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "sn_field_length_um.h"


void EncodeSN_FieldLengthUM(
	SN_FieldLengthUM_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void DecodeSN_FieldLengthUM(
	SN_FieldLengthUM_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

