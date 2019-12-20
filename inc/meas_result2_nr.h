/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * meas_result2_nr.h - this is the header file for message: MeasResult2NR
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _MEAS_RESULT2_NR_H_
#define _MEAS_RESULT2_NR_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "arfcn_value_nr.h"
#include "arfcn_value_nr.h"
#include "meas_result_nr.h"
#include "meas_result_list_nr.h"


typedef struct {
	BOOLEAN                                                            ssbFrequency_exist;
	ARFCN_ValueNR_t                                                    ssbFrequency;
	BOOLEAN                                                            refFreqCSI_RS_exist;
	ARFCN_ValueNR_t                                                    refFreqCSI_RS;
	BOOLEAN                                                            measResultServingCell_exist;
	MeasResultNR_t                                                     measResultServingCell;
	MeasResultListNR_t                                                 measResultNeighCellListNR;
}MeasResult2NR_t;


extern void EncodeMeasResult2NR(
	MeasResult2NR_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeMeasResult2NR(
	MeasResult2NR_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
