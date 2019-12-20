/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * meas_result_serv_mo.h - this is the header file for message: MeasResultServMO
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _MEAS_RESULT_SERV_MO_H_
#define _MEAS_RESULT_SERV_MO_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "serv_cell_index.h"
#include "meas_result_nr.h"
#include "meas_result_nr.h"


typedef struct {
	ServCellIndex_t                                                    servCellId;
	MeasResultNR_t                                                     measResultServingCell;
	BOOLEAN                                                            measResultBestNeighCell_exist;
	MeasResultNR_t                                                     measResultBestNeighCell;
	/* Extension marker start. */
}MeasResultServMO_t;


extern void EncodeMeasResultServMO(
	MeasResultServMO_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeMeasResultServMO(
	MeasResultServMO_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
