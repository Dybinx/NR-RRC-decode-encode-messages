/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * meas_result_nr.h - this is the header file for message: MeasResultNR
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _MEAS_RESULT_NR_H_
#define _MEAS_RESULT_NR_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "phys_cell_id.h"
#include "meas_quantity_results.h"
#include "meas_quantity_results.h"
#include "results_per_ssb_index_list.h"
#include "results_per_csi_rs_index_list.h"


typedef struct {
	BOOLEAN                                                            resultsSSB_Cell_exist;
	MeasQuantityResults_t                                              resultsSSB_Cell;
	BOOLEAN                                                            resultsCSI_RS_Cell_exist;
	MeasQuantityResults_t                                              resultsCSI_RS_Cell;
}MeasResultNR_cellResults_t;


typedef struct {
	BOOLEAN                                                            resultsSSB_Indexes_exist;
	ResultsPerSSB_IndexList_t                                          resultsSSB_Indexes;
	BOOLEAN                                                            resultsCSI_RS_Indexes_exist;
	ResultsPerCSI_RS_IndexList_t                                       resultsCSI_RS_Indexes;
}MeasResultNR_rsIndexResults_t;


typedef struct {
	MeasResultNR_cellResults_t                                         cellResults;
	BOOLEAN                                                            rsIndexResults_exist;
	MeasResultNR_rsIndexResults_t                                      rsIndexResults;
}MeasResultNR_measResult_t;


typedef struct {
	BOOLEAN                                                            physCellId_exist;
	PhysCellId_t                                                       physCellId;
	MeasResultNR_measResult_t                                          measResult;
	/* Extension marker start. */
}MeasResultNR_t;


extern void EncodeMeasResultNR(
	MeasResultNR_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeMeasResultNR(
	MeasResultNR_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
