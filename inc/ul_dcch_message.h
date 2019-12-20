/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * ul_dcch_message.h - this is the header file for message: UL-DCCH-Message
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _UL_DCCH_MESSAGE_H_
#define _UL_DCCH_MESSAGE_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "ul_dcch_message_type.h"


typedef struct {
	UL_DCCH_MessageType_t                                              message;
}UL_DCCH_Message_t;


extern void EncodeUL_DCCH_Message(
	UL_DCCH_Message_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeUL_DCCH_Message(
	UL_DCCH_Message_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
