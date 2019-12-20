/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * meas_object_to_remove_list.h - this is the header file for message: MeasObjectToRemoveList
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _MEAS_OBJECT_TO_REMOVE_LIST_H_
#define _MEAS_OBJECT_TO_REMOVE_LIST_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "meas_object_id.h"


typedef struct {
	uint32                                                             length;
	MeasObjectId_t                                                     elm[maxNrofObjectId];
}MeasObjectToRemoveList_t;


extern void EncodeMeasObjectToRemoveList(
	MeasObjectToRemoveList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeMeasObjectToRemoveList(
	MeasObjectToRemoveList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
