/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * security_config.c - codec the message of SecurityConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "security_config.h"


void EncodeSecurityConfig_keyToUse(
	SecurityConfig_keyToUse_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 1, bits_iter);
}

void EncodeSecurityConfig(
	SecurityConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->securityAlgorithmConfig_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->keyToUse_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->securityAlgorithmConfig_exist == TRUE)
	{
		EncodeSecurityAlgorithmConfig(&i_encoded_field->securityAlgorithmConfig, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->keyToUse_exist == TRUE)
	{
		EncodeSecurityConfig_keyToUse(i_encoded_field->keyToUse, buff, bits_iter, asn_error);
	}

}

void DecodeSecurityConfig_keyToUse(
	SecurityConfig_keyToUse_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 1, bits_iter);
}

void DecodeSecurityConfig(
	SecurityConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->securityAlgorithmConfig_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->keyToUse_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->securityAlgorithmConfig_exist == TRUE)
	{
		DecodeSecurityAlgorithmConfig(&o_decoded_field->securityAlgorithmConfig, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->keyToUse_exist == TRUE)
	{
		DecodeSecurityConfig_keyToUse(&o_decoded_field->keyToUse, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

