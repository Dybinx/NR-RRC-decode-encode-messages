/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * results_per_csi_rs_index.h - this is the header file for message: ResultsPerCSI-RS-Index
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _RESULTS_PER_CSI_RS_INDEX_H_
#define _RESULTS_PER_CSI_RS_INDEX_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "csi_rs_index.h"
#include "meas_quantity_results.h"


typedef struct {
	CSI_RS_Index_t                                                     csi_RS_Index;
	BOOLEAN                                                            csi_RS_Results_exist;
	MeasQuantityResults_t                                              csi_RS_Results;
}ResultsPerCSI_RS_Index_t;


extern void EncodeResultsPerCSI_RS_Index(
	ResultsPerCSI_RS_Index_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeResultsPerCSI_RS_Index(
	ResultsPerCSI_RS_Index_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
