/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * meas_result_serv_mo_list.c - codec the message of MeasResultServMOList
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "meas_result_serv_mo_list.h"


void EncodeMeasResultServMOList(
	MeasResultServMOList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field->length - 1, 5, bits_iter);
	for(uint32 i = 0; i < i_encoded_field->length; i++)
	{
		EncodeMeasResultServMO(&i_encoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

void DecodeMeasResultServMOList(
	MeasResultServMOList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint32    count = 0;
	count = Get_bits(buff, 5, bits_iter) + 1;
	o_decoded_field->length = count;

	for(uint32 i = 0; i < count; i++)
	{
		DecodeMeasResultServMO(&o_decoded_field->elm[i], buff, bits_iter, asn_error);
	}
}

