/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * dl_um_rlc.c - codec the message of DL-UM-RLC
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "dl_um_rlc.h"


void EncodeDL_UM_RLC(
	DL_UM_RLC_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->sn_FieldLength_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->sn_FieldLength_exist == TRUE)
	{
		EncodeSN_FieldLengthUM(i_encoded_field->sn_FieldLength, buff, bits_iter, asn_error);
	}

	EncodeT_Reassembly(i_encoded_field->t_Reassembly, buff, bits_iter, asn_error);

}

void DecodeDL_UM_RLC(
	DL_UM_RLC_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->sn_FieldLength_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->sn_FieldLength_exist == TRUE)
	{
		DecodeSN_FieldLengthUM(&o_decoded_field->sn_FieldLength, buff, bits_iter, asn_error);
	}

	DecodeT_Reassembly(&o_decoded_field->t_Reassembly, buff, bits_iter, asn_error);
}

