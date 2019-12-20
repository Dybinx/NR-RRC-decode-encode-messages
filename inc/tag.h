/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * tag.h - this is the header file for message: TAG
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _TAG_H_
#define _TAG_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "tag_id.h"
#include "time_alignment_timer.h"


typedef struct {
	TAG_Id_t                                                           tag_Id;
	TimeAlignmentTimer_e                                               timeAlignmentTimer;
	/* Extension marker start. */
}TAG_t;


extern void EncodeTAG(
	TAG_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeTAG(
	TAG_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
