/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * meas_result_cell_list_sftd.h - this is the header file for message: MeasResultCellListSFTD
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _MEAS_RESULT_CELL_LIST_SFTD_H_
#define _MEAS_RESULT_CELL_LIST_SFTD_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "meas_result_cell_sftd.h"


typedef struct {
	uint32                                                             length;
	MeasResultCellSFTD_t                                               elm[maxCellSFTD];
}MeasResultCellListSFTD_t;


extern void EncodeMeasResultCellListSFTD(
	MeasResultCellListSFTD_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeMeasResultCellListSFTD(
	MeasResultCellListSFTD_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
