/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * meas_id_to_add_mod_list.h - this is the header file for message: MeasIdToAddModList
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _MEAS_ID_TO_ADD_MOD_LIST_H_
#define _MEAS_ID_TO_ADD_MOD_LIST_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "meas_id_to_add_mod.h"


typedef struct {
	uint32                                                             length;
	MeasIdToAddMod_t                                                   elm[maxNrofMeasId];
}MeasIdToAddModList_t;


extern void EncodeMeasIdToAddModList(
	MeasIdToAddModList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeMeasIdToAddModList(
	MeasIdToAddModList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
