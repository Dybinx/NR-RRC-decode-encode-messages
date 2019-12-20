/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * meas_result_scg_failure.h - this is the header file for message: MeasResultSCG-Failure
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _MEAS_RESULT_SCG_FAILURE_H_
#define _MEAS_RESULT_SCG_FAILURE_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "meas_result_list2_nr.h"


typedef struct {
	MeasResultList2NR_t                                                measResultPerMOList;
	/* Extension marker start. */
}MeasResultSCG_Failure_t;


extern void EncodeMeasResultSCG_Failure(
	MeasResultSCG_Failure_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeMeasResultSCG_Failure(
	MeasResultSCG_Failure_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
