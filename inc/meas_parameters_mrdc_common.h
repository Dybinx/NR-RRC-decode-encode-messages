/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * meas_parameters_mrdc_common.h - this is the header file for message: MeasParametersMRDC-Common
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _MEAS_PARAMETERS_MRDC_COMMON_H_
#define _MEAS_PARAMETERS_MRDC_COMMON_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	MEASPARAMETERSMRDC_COMMON_INDEPENDENTGAPCONFIG_SUPPORTED,
	MEASPARAMETERSMRDC_COMMON_INDEPENDENTGAPCONFIG_max = 0x7FFFFFFF
}MeasParametersMRDC_Common_independentGapConfig_e;


typedef struct {
	BOOLEAN                                                            independentGapConfig_exist;
	MeasParametersMRDC_Common_independentGapConfig_e                   independentGapConfig;
}MeasParametersMRDC_Common_t;


extern void EncodeMeasParametersMRDC_Common(
	MeasParametersMRDC_Common_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeMeasParametersMRDC_Common(
	MeasParametersMRDC_Common_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
