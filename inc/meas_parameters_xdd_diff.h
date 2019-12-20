/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * meas_parameters_xdd_diff.h - this is the header file for message: MeasParametersXDD-Diff
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _MEAS_PARAMETERS_XDD_DIFF_H_
#define _MEAS_PARAMETERS_XDD_DIFF_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	MEASPARAMETERSXDD_DIFF_INTRAANDINTERF_MEASANDREPORT_SUPPORTED,
	MEASPARAMETERSXDD_DIFF_INTRAANDINTERF_MEASANDREPORT_max = 0x7FFFFFFF
}MeasParametersXDD_Diff_intraAndInterF_MeasAndReport_e;


typedef enum {
	MEASPARAMETERSXDD_DIFF_EVENTA_MEASANDREPORT_SUPPORTED,
	MEASPARAMETERSXDD_DIFF_EVENTA_MEASANDREPORT_max = 0x7FFFFFFF
}MeasParametersXDD_Diff_eventA_MeasAndReport_e;


typedef struct {
	BOOLEAN                                                            intraAndInterF_MeasAndReport_exist;
	MeasParametersXDD_Diff_intraAndInterF_MeasAndReport_e              intraAndInterF_MeasAndReport;
	BOOLEAN                                                            eventA_MeasAndReport_exist;
	MeasParametersXDD_Diff_eventA_MeasAndReport_e                      eventA_MeasAndReport;
	/* Extension marker start. */
}MeasParametersXDD_Diff_t;


extern void EncodeMeasParametersXDD_Diff(
	MeasParametersXDD_Diff_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeMeasParametersXDD_Diff(
	MeasParametersXDD_Diff_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
