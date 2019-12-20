/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * meas_result_list_nr.h - this is the header file for message: MeasResultListNR
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _MEAS_RESULT_LIST_NR_H_
#define _MEAS_RESULT_LIST_NR_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "meas_result_nr.h"


typedef struct {
	uint32                                                             length;
	MeasResultNR_t                                                     elm[maxCellReport];
}MeasResultListNR_t;


extern void EncodeMeasResultListNR(
	MeasResultListNR_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeMeasResultListNR(
	MeasResultListNR_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
