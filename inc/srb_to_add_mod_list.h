/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * srb_to_add_mod_list.h - this is the header file for message: SRB-ToAddModList
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _SRB_TO_ADD_MOD_LIST_H_
#define _SRB_TO_ADD_MOD_LIST_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "srb_to_add_mod.h"


typedef struct {
	uint32                                                             length;
	SRB_ToAddMod_t                                                     elm[2];
}SRB_ToAddModList_t;


extern void EncodeSRB_ToAddModList(
	SRB_ToAddModList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeSRB_ToAddModList(
	SRB_ToAddModList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
