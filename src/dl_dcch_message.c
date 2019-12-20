/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * dl_dcch_message.c - codec the message of DL-DCCH-Message
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "dl_dcch_message.h"


void EncodeDL_DCCH_Message(
	DL_DCCH_Message_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeDL_DCCH_MessageType(&i_encoded_field->message, buff, bits_iter, asn_error);

}

void DecodeDL_DCCH_Message(
	DL_DCCH_Message_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeDL_DCCH_MessageType(&o_decoded_field->message, buff, bits_iter, asn_error);
}

