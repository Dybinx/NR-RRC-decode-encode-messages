/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * srs_tpc_command_config.c - codec the message of SRS-TPC-CommandConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "srs_tpc_command_config.h"


void EncodeSRS_TPC_CommandConfig(
	SRS_TPC_CommandConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->startingBitOfFormat2_3_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->fieldTypeFormat2_3_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->startingBitOfFormat2_3_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->startingBitOfFormat2_3 - 1, 5, bits_iter);
	}

	if(i_encoded_field->fieldTypeFormat2_3_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->fieldTypeFormat2_3, 1, bits_iter);
	}

}

void DecodeSRS_TPC_CommandConfig(
	SRS_TPC_CommandConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->startingBitOfFormat2_3_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->fieldTypeFormat2_3_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->startingBitOfFormat2_3_exist == TRUE)
	{
		o_decoded_field->startingBitOfFormat2_3 = Get_bits(buff, 5, bits_iter) + 1;
	}

	if(o_decoded_field->fieldTypeFormat2_3_exist == TRUE)
	{
		o_decoded_field->fieldTypeFormat2_3 = Get_bits(buff, 1, bits_iter);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

