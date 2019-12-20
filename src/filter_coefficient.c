/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * filter_coefficient.c - codec the message of FilterCoefficient
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "filter_coefficient.h"


void EncodeFilterCoefficient(
	FilterCoefficient_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root.*/
	PutBits(buff, 0, 1, bits_iter);
	PutBits(buff, i_encoded_field, 4, bits_iter);
}

void DecodeFilterCoefficient(
	FilterCoefficient_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    ext_flag = 0;
	uint8    flag = 0;
	uint32    value = 0;

	ext_flag = Get_bits(buff, 1, bits_iter);

	if(ext_flag == 0)
	{
		*o_decoded_field = Get_bits(buff, 5, bits_iter);
	}
	else/* extension marker == 1 */
	{
		//need to handle the asn error.
	}
}

