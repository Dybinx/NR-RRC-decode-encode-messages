/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * drb_to_release_list.h - this is the header file for message: DRB-ToReleaseList
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _DRB_TO_RELEASE_LIST_H_
#define _DRB_TO_RELEASE_LIST_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "drb_identity.h"


typedef struct {
	uint32                                                             length;
	DRB_Identity_t                                                     elm[maxDRB];
}DRB_ToReleaseList_t;


extern void EncodeDRB_ToReleaseList(
	DRB_ToReleaseList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeDRB_ToReleaseList(
	DRB_ToReleaseList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
