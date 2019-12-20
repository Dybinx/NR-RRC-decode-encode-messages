/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * threshold_nr.h - this is the header file for message: ThresholdNR
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _THRESHOLD_NR_H_
#define _THRESHOLD_NR_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "rsrp_range.h"
#include "rsrq_range.h"
#include "sinr_range.h"


typedef struct {
	BOOLEAN                                                            thresholdRSRP_exist;
	RSRP_Range_t                                                       thresholdRSRP;
	BOOLEAN                                                            thresholdRSRQ_exist;
	RSRQ_Range_t                                                       thresholdRSRQ;
	BOOLEAN                                                            thresholdSINR_exist;
	SINR_Range_t                                                       thresholdSINR;
}ThresholdNR_t;


extern void EncodeThresholdNR(
	ThresholdNR_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeThresholdNR(
	ThresholdNR_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
