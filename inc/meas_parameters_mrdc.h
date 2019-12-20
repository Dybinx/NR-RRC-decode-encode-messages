/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * meas_parameters_mrdc.h - this is the header file for message: MeasParametersMRDC
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _MEAS_PARAMETERS_MRDC_H_
#define _MEAS_PARAMETERS_MRDC_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "meas_parameters_mrdc_common.h"
#include "meas_parameters_mrdc_xdd_diff.h"
#include "meas_parameters_mrdc_frx_diff.h"


typedef struct {
	BOOLEAN                                                            measParametersMRDC_Common_exist;
	MeasParametersMRDC_Common_t                                        measParametersMRDC_Common;
	BOOLEAN                                                            measParametersMRDC_XDD_Diff_exist;
	MeasParametersMRDC_XDD_Diff_t                                      measParametersMRDC_XDD_Diff;
	BOOLEAN                                                            measParametersMRDC_FRX_Diff_exist;
	MeasParametersMRDC_FRX_Diff_t                                      measParametersMRDC_FRX_Diff;
}MeasParametersMRDC_t;


extern void EncodeMeasParametersMRDC(
	MeasParametersMRDC_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeMeasParametersMRDC(
	MeasParametersMRDC_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
