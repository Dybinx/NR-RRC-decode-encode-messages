/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * results_per_ssb_index.c - codec the message of ResultsPerSSB-Index
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "results_per_ssb_index.h"


void EncodeResultsPerSSB_Index(
	ResultsPerSSB_Index_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->ssb_Results_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodeSSB_Index(&i_encoded_field->ssb_Index, buff, bits_iter, asn_error);

	if(i_encoded_field->ssb_Results_exist == TRUE)
	{
		EncodeMeasQuantityResults(&i_encoded_field->ssb_Results, buff, bits_iter, asn_error);
	}

}

void DecodeResultsPerSSB_Index(
	ResultsPerSSB_Index_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->ssb_Results_exist = Get_bits(buff, 1, bits_iter);
	DecodeSSB_Index(&o_decoded_field->ssb_Index, buff, bits_iter, asn_error);
	if(o_decoded_field->ssb_Results_exist == TRUE)
	{
		DecodeMeasQuantityResults(&o_decoded_field->ssb_Results, buff, bits_iter, asn_error);
	}

}

