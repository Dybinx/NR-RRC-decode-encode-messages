/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * tag.c - codec the message of TAG
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "tag.h"


void EncodeTAG(
	TAG_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	EncodeTAG_Id(&i_encoded_field->tag_Id, buff, bits_iter, asn_error);

	EncodeTimeAlignmentTimer(i_encoded_field->timeAlignmentTimer, buff, bits_iter, asn_error);

}

void DecodeTAG(
	TAG_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	DecodeTAG_Id(&o_decoded_field->tag_Id, buff, bits_iter, asn_error);
	DecodeTimeAlignmentTimer(&o_decoded_field->timeAlignmentTimer, buff, bits_iter, asn_error);
	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

