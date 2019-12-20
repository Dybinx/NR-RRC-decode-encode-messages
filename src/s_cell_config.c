/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * s_cell_config.c - codec the message of SCellConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "s_cell_config.h"


void EncodeSCellConfig(
	SCellConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->sCellConfigCommon_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->sCellConfigDedicated_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodeSCellIndex(&i_encoded_field->sCellIndex, buff, bits_iter, asn_error);

	if(i_encoded_field->sCellConfigCommon_exist == TRUE)
	{
		EncodeServingCellConfigCommon(&i_encoded_field->sCellConfigCommon, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->sCellConfigDedicated_exist == TRUE)
	{
		EncodeServingCellConfig(&i_encoded_field->sCellConfigDedicated, buff, bits_iter, asn_error);
	}

}

void DecodeSCellConfig(
	SCellConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->sCellConfigCommon_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->sCellConfigDedicated_exist = Get_bits(buff, 1, bits_iter);
	DecodeSCellIndex(&o_decoded_field->sCellIndex, buff, bits_iter, asn_error);
	if(o_decoded_field->sCellConfigCommon_exist == TRUE)
	{
		DecodeServingCellConfigCommon(&o_decoded_field->sCellConfigCommon, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->sCellConfigDedicated_exist == TRUE)
	{
		DecodeServingCellConfig(&o_decoded_field->sCellConfigDedicated, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

