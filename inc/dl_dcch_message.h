/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * dl_dcch_message.h - this is the header file for message: DL-DCCH-Message
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _DL_DCCH_MESSAGE_H_
#define _DL_DCCH_MESSAGE_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "dl_dcch_message_type.h"


typedef struct {
	DL_DCCH_MessageType_t                                              message;
}DL_DCCH_Message_t;


extern void EncodeDL_DCCH_Message(
	DL_DCCH_Message_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeDL_DCCH_Message(
	DL_DCCH_Message_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
