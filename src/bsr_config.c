/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * bsr_config.c - codec the message of BSR-Config
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "bsr_config.h"


void EncodeBSR_Config_periodicBSR_Timer(
	BSR_Config_periodicBSR_Timer_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 4, bits_iter);
}

void EncodeBSR_Config_retxBSR_Timer(
	BSR_Config_retxBSR_Timer_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 4, bits_iter);
}

void EncodeBSR_Config_logicalChannelSR_DelayTimer(
	BSR_Config_logicalChannelSR_DelayTimer_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	PutBits(buff, i_encoded_field, 3, bits_iter);
}

void EncodeBSR_Config(
	BSR_Config_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	/*flag for extension marker, within extension root. */
	PutBits(buff, 0, 1, bits_iter);
	if(i_encoded_field->logicalChannelSR_DelayTimer_exist == TRUE)
	{
		PutBits(buff, 1, 1, bits_iter);
	}
	else
	{
		PutBits(buff, 0, 1, bits_iter);
	}

	EncodeBSR_Config_periodicBSR_Timer(i_encoded_field->periodicBSR_Timer, buff, bits_iter, asn_error);

	EncodeBSR_Config_retxBSR_Timer(i_encoded_field->retxBSR_Timer, buff, bits_iter, asn_error);

	if(i_encoded_field->logicalChannelSR_DelayTimer_exist == TRUE)
	{
		EncodeBSR_Config_logicalChannelSR_DelayTimer(i_encoded_field->logicalChannelSR_DelayTimer, buff, bits_iter, asn_error);
	}

}

void DecodeBSR_Config_periodicBSR_Timer(
	BSR_Config_periodicBSR_Timer_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 4, bits_iter);
}

void DecodeBSR_Config_retxBSR_Timer(
	BSR_Config_retxBSR_Timer_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 4, bits_iter);
}

void DecodeBSR_Config_logicalChannelSR_DelayTimer(
	BSR_Config_logicalChannelSR_DelayTimer_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	*o_decoded_field = Get_bits(buff, 3, bits_iter);
}

void DecodeBSR_Config(
	BSR_Config_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	uint8    flag = 0;
	uint8    ext_flag = 0;
	uint32    bits_width = 0;
	uint32    preamble_bitmap = 0;
	
	ext_flag = Get_bits(buff, 1, bits_iter);

	o_decoded_field->logicalChannelSR_DelayTimer_exist = Get_bits(buff, 1, bits_iter);
	DecodeBSR_Config_periodicBSR_Timer(&o_decoded_field->periodicBSR_Timer, buff, bits_iter, asn_error);
	DecodeBSR_Config_retxBSR_Timer(&o_decoded_field->retxBSR_Timer, buff, bits_iter, asn_error);
	if(o_decoded_field->logicalChannelSR_DelayTimer_exist == TRUE)
	{
		DecodeBSR_Config_logicalChannelSR_DelayTimer(&o_decoded_field->logicalChannelSR_DelayTimer, buff, bits_iter, asn_error);
	}

	if(ext_flag == 1)
	{
		//need to handle asn error.
	}
}

