/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * results_per_ssb_index_list.h - this is the header file for message: ResultsPerSSB-IndexList
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _RESULTS_PER_SSB_INDEX_LIST_H_
#define _RESULTS_PER_SSB_INDEX_LIST_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "results_per_ssb_index.h"


typedef struct {
	uint32                                                             length;
	ResultsPerSSB_Index_t                                              elm[maxNrofSSBs];
}ResultsPerSSB_IndexList_t;


extern void EncodeResultsPerSSB_IndexList(
	ResultsPerSSB_IndexList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeResultsPerSSB_IndexList(
	ResultsPerSSB_IndexList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
