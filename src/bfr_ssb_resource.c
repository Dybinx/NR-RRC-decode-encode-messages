/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * bfr_ssb_resource.c - codec the message of BFR-SSB-Resource
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "bfr_ssb_resource.h"


void EncodeBFR_SSB_Resource(
	BFR_SSB_Resource_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	EncodeSSB_Index(&i_encoded_field->ssb, buff, bits_iter, asn_error);

	PutBits(buff, i_encoded_field->ra_PreambleIndex, 6, bits_iter);

}

void DecodeBFR_SSB_Resource(
	BFR_SSB_Resource_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	DecodeSSB_Index(&o_decoded_field->ssb, buff, bits_iter, asn_error);
	o_decoded_field->ra_PreambleIndex = Get_bits(buff, 6, bits_iter);
	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

