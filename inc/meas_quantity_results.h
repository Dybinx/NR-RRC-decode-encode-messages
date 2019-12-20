/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * meas_quantity_results.h - this is the header file for message: MeasQuantityResults
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _MEAS_QUANTITY_RESULTS_H_
#define _MEAS_QUANTITY_RESULTS_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "rsrp_range.h"
#include "rsrq_range.h"
#include "sinr_range.h"


typedef struct {
	BOOLEAN                                                            rsrp_exist;
	RSRP_Range_t                                                       rsrp;
	BOOLEAN                                                            rsrq_exist;
	RSRQ_Range_t                                                       rsrq;
	BOOLEAN                                                            sinr_exist;
	SINR_Range_t                                                       sinr;
}MeasQuantityResults_t;


extern void EncodeMeasQuantityResults(
	MeasQuantityResults_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeMeasQuantityResults(
	MeasQuantityResults_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
