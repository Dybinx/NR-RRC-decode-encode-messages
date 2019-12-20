/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * beta_offsets.c - codec the message of BetaOffsets
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "beta_offsets.h"


void EncodeBetaOffsets(
	BetaOffsets_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->betaOffsetACK_Index1_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->betaOffsetACK_Index2_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->betaOffsetACK_Index3_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->betaOffsetCSI_Part1_Index1_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->betaOffsetCSI_Part1_Index2_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->betaOffsetCSI_Part2_Index1_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->betaOffsetCSI_Part2_Index2_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->betaOffsetACK_Index1_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->betaOffsetACK_Index1, 5, bits_iter);
	}

	if(i_encoded_field->betaOffsetACK_Index2_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->betaOffsetACK_Index2, 5, bits_iter);
	}

	if(i_encoded_field->betaOffsetACK_Index3_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->betaOffsetACK_Index3, 5, bits_iter);
	}

	if(i_encoded_field->betaOffsetCSI_Part1_Index1_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->betaOffsetCSI_Part1_Index1, 5, bits_iter);
	}

	if(i_encoded_field->betaOffsetCSI_Part1_Index2_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->betaOffsetCSI_Part1_Index2, 5, bits_iter);
	}

	if(i_encoded_field->betaOffsetCSI_Part2_Index1_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->betaOffsetCSI_Part2_Index1, 5, bits_iter);
	}

	if(i_encoded_field->betaOffsetCSI_Part2_Index2_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->betaOffsetCSI_Part2_Index2, 5, bits_iter);
	}

}

void DecodeBetaOffsets(
	BetaOffsets_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->betaOffsetACK_Index1_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->betaOffsetACK_Index2_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->betaOffsetACK_Index3_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->betaOffsetCSI_Part1_Index1_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->betaOffsetCSI_Part1_Index2_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->betaOffsetCSI_Part2_Index1_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->betaOffsetCSI_Part2_Index2_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->betaOffsetACK_Index1_exist == TRUE)
	{
		o_decoded_field->betaOffsetACK_Index1 = Get_bits(buff, 5, bits_iter);
	}

	if(o_decoded_field->betaOffsetACK_Index2_exist == TRUE)
	{
		o_decoded_field->betaOffsetACK_Index2 = Get_bits(buff, 5, bits_iter);
	}

	if(o_decoded_field->betaOffsetACK_Index3_exist == TRUE)
	{
		o_decoded_field->betaOffsetACK_Index3 = Get_bits(buff, 5, bits_iter);
	}

	if(o_decoded_field->betaOffsetCSI_Part1_Index1_exist == TRUE)
	{
		o_decoded_field->betaOffsetCSI_Part1_Index1 = Get_bits(buff, 5, bits_iter);
	}

	if(o_decoded_field->betaOffsetCSI_Part1_Index2_exist == TRUE)
	{
		o_decoded_field->betaOffsetCSI_Part1_Index2 = Get_bits(buff, 5, bits_iter);
	}

	if(o_decoded_field->betaOffsetCSI_Part2_Index1_exist == TRUE)
	{
		o_decoded_field->betaOffsetCSI_Part2_Index1 = Get_bits(buff, 5, bits_iter);
	}

	if(o_decoded_field->betaOffsetCSI_Part2_Index2_exist == TRUE)
	{
		o_decoded_field->betaOffsetCSI_Part2_Index2 = Get_bits(buff, 5, bits_iter);
	}

}

