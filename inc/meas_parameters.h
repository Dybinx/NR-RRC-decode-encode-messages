/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * meas_parameters.h - this is the header file for message: MeasParameters
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _MEAS_PARAMETERS_H_
#define _MEAS_PARAMETERS_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "meas_parameters_common.h"
#include "meas_parameters_xdd_diff.h"
#include "meas_parameters_frx_diff.h"


typedef struct {
	BOOLEAN                                                            measParametersCommon_exist;
	MeasParametersCommon_t                                             measParametersCommon;
	BOOLEAN                                                            measParametersXDD_Diff_exist;
	MeasParametersXDD_Diff_t                                           measParametersXDD_Diff;
	BOOLEAN                                                            measParametersFRX_Diff_exist;
	MeasParametersFRX_Diff_t                                           measParametersFRX_Diff;
}MeasParameters_t;


extern void EncodeMeasParameters(
	MeasParameters_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeMeasParameters(
	MeasParameters_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
