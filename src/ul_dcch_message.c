/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * ul_dcch_message.c - codec the message of UL-DCCH-Message
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "ul_dcch_message.h"


void EncodeUL_DCCH_Message(
	UL_DCCH_Message_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeUL_DCCH_MessageType(&i_encoded_field->message, buff, bits_iter, asn_error);

}

void DecodeUL_DCCH_Message(
	UL_DCCH_Message_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeUL_DCCH_MessageType(&o_decoded_field->message, buff, bits_iter, asn_error);
}

