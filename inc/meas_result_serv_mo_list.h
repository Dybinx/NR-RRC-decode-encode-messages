/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * meas_result_serv_mo_list.h - this is the header file for message: MeasResultServMOList
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _MEAS_RESULT_SERV_MO_LIST_H_
#define _MEAS_RESULT_SERV_MO_LIST_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "meas_result_serv_mo.h"


typedef struct {
	uint32                                                             length;
	MeasResultServMO_t                                                 elm[maxNrofServingCells];
}MeasResultServMOList_t;


extern void EncodeMeasResultServMOList(
	MeasResultServMOList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeMeasResultServMOList(
	MeasResultServMOList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
