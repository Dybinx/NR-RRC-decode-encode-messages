/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * rach_config_dedicated.c - codec the message of RACH-ConfigDedicated
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "rach_config_dedicated.h"


void EncodeRACH_ConfigDedicated(
	RACH_ConfigDedicated_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->cfra_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->ra_Prioritization_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->cfra_exist == TRUE)
	{
		EncodeCFRA(&i_encoded_field->cfra, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->ra_Prioritization_exist == TRUE)
	{
		EncodeRA_Prioritization(&i_encoded_field->ra_Prioritization, buff, bits_iter, asn_error);
	}

}

void DecodeRACH_ConfigDedicated(
	RACH_ConfigDedicated_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->cfra_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->ra_Prioritization_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->cfra_exist == TRUE)
	{
		DecodeCFRA(&o_decoded_field->cfra, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->ra_Prioritization_exist == TRUE)
	{
		DecodeRA_Prioritization(&o_decoded_field->ra_Prioritization, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

