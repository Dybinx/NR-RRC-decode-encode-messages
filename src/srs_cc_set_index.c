/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * srs_cc_set_index.c - codec the message of SRS-CC-SetIndex
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "srs_cc_set_index.h"


void EncodeSRS_CC_SetIndex(
	SRS_CC_SetIndex_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->cc_SetIndex_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->cc_IndexInOneCC_Set_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->cc_SetIndex_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->cc_SetIndex, 2, bits_iter);
	}

	if(i_encoded_field->cc_IndexInOneCC_Set_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->cc_IndexInOneCC_Set, 3, bits_iter);
	}

}

void DecodeSRS_CC_SetIndex(
	SRS_CC_SetIndex_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->cc_SetIndex_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->cc_IndexInOneCC_Set_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->cc_SetIndex_exist == TRUE)
	{
		o_decoded_field->cc_SetIndex = Get_bits(buff, 2, bits_iter);
	}

	if(o_decoded_field->cc_IndexInOneCC_Set_exist == TRUE)
	{
		o_decoded_field->cc_IndexInOneCC_Set = Get_bits(buff, 3, bits_iter);
	}

}

