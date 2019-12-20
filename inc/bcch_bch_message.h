/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * bcch_bch_message.h - this is the header file for message: BCCH-BCH-Message
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _BCCH_BCH_MESSAGE_H_
#define _BCCH_BCH_MESSAGE_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "bcch_bch_message_type.h"


typedef struct {
	BCCH_BCH_MessageType_t                                             message;
}BCCH_BCH_Message_t;


extern void EncodeBCCH_BCH_Message(
	BCCH_BCH_Message_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeBCCH_BCH_Message(
	BCCH_BCH_Message_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
