/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pusch_code_block_group_transmission.c - codec the message of PUSCH-CodeBlockGroupTransmission
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "pusch_code_block_group_transmission.h"


void EncodePUSCH_CodeBlockGroupTransmission_maxCodeBlockGroupsPerTransportBlock(
	PUSCH_CodeBlockGroupTransmission_maxCodeBlockGroupsPerTransportBlock_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 2, bits_iter);
}

void EncodePUSCH_CodeBlockGroupTransmission(
	PUSCH_CodeBlockGroupTransmission_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	EncodePUSCH_CodeBlockGroupTransmission_maxCodeBlockGroupsPerTransportBlock(i_encoded_field->maxCodeBlockGroupsPerTransportBlock, buff, bits_iter, asn_error);

}

void DecodePUSCH_CodeBlockGroupTransmission_maxCodeBlockGroupsPerTransportBlock(
	PUSCH_CodeBlockGroupTransmission_maxCodeBlockGroupsPerTransportBlock_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 2, bits_iter);
}

void DecodePUSCH_CodeBlockGroupTransmission(
	PUSCH_CodeBlockGroupTransmission_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	DecodePUSCH_CodeBlockGroupTransmission_maxCodeBlockGroupsPerTransportBlock(&o_decoded_field->maxCodeBlockGroupsPerTransportBlock, buff, bits_iter, asn_error);
	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

