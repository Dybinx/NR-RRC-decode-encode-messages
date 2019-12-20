/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * bcch_bch_message.c - codec the message of BCCH-BCH-Message
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#include <assert.h>
#include "mem.h"
#include "bcch_bch_message.h"


void EncodeBCCH_BCH_Message(
	BCCH_BCH_Message_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	EncodeBCCH_BCH_MessageType(&i_encoded_field->message, buff, bits_iter, asn_error);

}

void DecodeBCCH_BCH_Message(
	BCCH_BCH_Message_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error)
{
	DecodeBCCH_BCH_MessageType(&o_decoded_field->message, buff, bits_iter, asn_error);
}

