/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * meas_result_cell_sftd.h - this is the header file for message: MeasResultCellSFTD
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _MEAS_RESULT_CELL_SFTD_H_
#define _MEAS_RESULT_CELL_SFTD_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "phys_cell_id.h"
#include "rsrp_range.h"


typedef struct {
	PhysCellId_t                                                       physCellId;
	uint32                                                             sfn_OffsetResult;
	int32                                                              frameBoundaryOffsetResult;
	BOOLEAN                                                            rsrp_Result_exist;
	RSRP_Range_t                                                       rsrp_Result;
}MeasResultCellSFTD_t;


extern void EncodeMeasResultCellSFTD(
	MeasResultCellSFTD_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeMeasResultCellSFTD(
	MeasResultCellSFTD_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
