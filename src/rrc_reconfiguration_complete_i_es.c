/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * rrc_reconfiguration_complete_i_es.c - codec the message of RRCReconfigurationComplete-IEs
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "rrc_reconfiguration_complete_i_es.h"


void EncodeRRCReconfigurationComplete_IEs_lateNonCriticalExtension(
	RRCReconfigurationComplete_IEs_lateNonCriticalExtension_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->octets_num <= 127)
	{
		PutBits(buff, 0, 1, bits_iter);
		PutBits(buff, i_encoded_field->octets_num, 7, bits_iter);
	}
	else if(i_encoded_field->octets_num < 16 *1024)
	{
		PutBits(buff, 10, 2, bits_iter);
		PutBits(buff, i_encoded_field->octets_num, 14, bits_iter);
	}
	else
	{
		//the octets_num is too long.
	}

	PutOctets(buff, i_encoded_field->value, i_encoded_field->octets_num, bits_iter);
}

void EncodeRRCReconfigurationComplete_IEs_nonCriticalExtension(
	RRCReconfigurationComplete_IEs_nonCriticalExtension_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void EncodeRRCReconfigurationComplete_IEs(
	RRCReconfigurationComplete_IEs_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	if(i_encoded_field->lateNonCriticalExtension_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->nonCriticalExtension_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	if(i_encoded_field->lateNonCriticalExtension_exist == TRUE)
	{
		EncodeRRCReconfigurationComplete_IEs_lateNonCriticalExtension(&i_encoded_field->lateNonCriticalExtension, buff, bits_iter, asn_error);
	}

	if(i_encoded_field->nonCriticalExtension_exist == TRUE)
	{
	}

}

void DecodeRRCReconfigurationComplete_IEs_lateNonCriticalExtension(
	RRCReconfigurationComplete_IEs_lateNonCriticalExtension_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint32    octet_num = 0;

	flag = Get_bits(buff, 1, bits_iter);
	if(flag == 0)
	{
		octet_num = Get_bits(buff, 7, bits_iter);
	}
	else
	{
		flag = Get_bits(buff, 1, bits_iter);
		if(flag == 0)
		{
			octet_num = Get_bits(buff, 14, bits_iter);
		}
		else
		{
			//the count is too long.
		}
	}

	o_decoded_field->octets_num = octet_num;
	o_decoded_field->value = AsnMalloc(octet_num);

	for(uint32 i = 0; i < octet_num; i++)
	{
		o_decoded_field->value[i] = Get_bits(buff, 8, bits_iter);
	}
}

void DecodeRRCReconfigurationComplete_IEs_nonCriticalExtension(
	RRCReconfigurationComplete_IEs_nonCriticalExtension_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
}

void DecodeRRCReconfigurationComplete_IEs(
	RRCReconfigurationComplete_IEs_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	o_decoded_field->lateNonCriticalExtension_exist = Get_bits(buff, 1, bits_iter);
	o_decoded_field->nonCriticalExtension_exist = Get_bits(buff, 1, bits_iter);
	if(o_decoded_field->lateNonCriticalExtension_exist == TRUE)
	{
		DecodeRRCReconfigurationComplete_IEs_lateNonCriticalExtension(&o_decoded_field->lateNonCriticalExtension, buff, bits_iter, asn_error);
	}

	if(o_decoded_field->nonCriticalExtension_exist == TRUE)
	{
	}

}

