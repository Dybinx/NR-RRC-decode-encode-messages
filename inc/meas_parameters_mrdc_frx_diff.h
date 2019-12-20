/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * meas_parameters_mrdc_frx_diff.h - this is the header file for message: MeasParametersMRDC-FRX-Diff
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _MEAS_PARAMETERS_MRDC_FRX_DIFF_H_
#define _MEAS_PARAMETERS_MRDC_FRX_DIFF_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	MEASPARAMETERSMRDC_FRX_DIFF_SIMULTANEOUSRXDATASSB_DIFFNUMEROLOGY_SUPPORTED,
	MEASPARAMETERSMRDC_FRX_DIFF_SIMULTANEOUSRXDATASSB_DIFFNUMEROLOGY_max = 0x7FFFFFFF
}MeasParametersMRDC_FRX_Diff_simultaneousRxDataSSB_DiffNumerology_e;


typedef struct {
	BOOLEAN                                                            simultaneousRxDataSSB_DiffNumerology_exist;
	MeasParametersMRDC_FRX_Diff_simultaneousRxDataSSB_DiffNumerology_e    simultaneousRxDataSSB_DiffNumerology;
}MeasParametersMRDC_FRX_Diff_t;


extern void EncodeMeasParametersMRDC_FRX_Diff(
	MeasParametersMRDC_FRX_Diff_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeMeasParametersMRDC_FRX_Diff(
	MeasParametersMRDC_FRX_Diff_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
