/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pusch_tpc_command_config.c - codec the message of PUSCH-TPC-CommandConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "pusch_tpc_command_config.h"


void EncodePUSCH_TPC_CommandConfig(
	PUSCH_TPC_CommandConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->tpc_Index_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->tpc_IndexSUL_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->targetCell_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->tpc_Index_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->tpc_Index - 1, 4, bits_iter);
	}

	if(i_encoded_field->tpc_IndexSUL_exist == TRUE)
	{
		PutBits(buff, i_encoded_field->tpc_IndexSUL - 1, 4, bits_iter);
	}

	if(i_encoded_field->targetCell_exist == TRUE)
	{
		EncodeServCellIndex(&i_encoded_field->targetCell, buff, bits_iter, asn_error);
	}

}

void DecodePUSCH_TPC_CommandConfig(
	PUSCH_TPC_CommandConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->tpc_Index_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->tpc_IndexSUL_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->targetCell_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->tpc_Index_exist == TRUE)
	{
		o_decoded_field->tpc_Index = Get_bits(buff, 4, bits_iter) + 1;
	}

	if(o_decoded_field->tpc_IndexSUL_exist == TRUE)
	{
		o_decoded_field->tpc_IndexSUL = Get_bits(buff, 4, bits_iter) + 1;
	}

	if(o_decoded_field->targetCell_exist == TRUE)
	{
		DecodeServCellIndex(&o_decoded_field->targetCell, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

