/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * meas_parameters_common.h - this is the header file for message: MeasParametersCommon
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _MEAS_PARAMETERS_COMMON_H_
#define _MEAS_PARAMETERS_COMMON_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


/* struct corresponding asn: MeasParametersCommon_supportedGapPattern */
/* ASN: BIT STRING SIZE(22) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[3];
}MeasParametersCommon_supportedGapPattern_t;


typedef struct {
	BOOLEAN                                                            supportedGapPattern_exist;
	MeasParametersCommon_supportedGapPattern_t                         supportedGapPattern;
	/* Extension marker start. */
}MeasParametersCommon_t;


extern void EncodeMeasParametersCommon(
	MeasParametersCommon_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeMeasParametersCommon(
	MeasParametersCommon_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
