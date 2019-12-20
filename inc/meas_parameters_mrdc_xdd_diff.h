/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * meas_parameters_mrdc_xdd_diff.h - this is the header file for message: MeasParametersMRDC-XDD-Diff
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _MEAS_PARAMETERS_MRDC_XDD_DIFF_H_
#define _MEAS_PARAMETERS_MRDC_XDD_DIFF_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	MEASPARAMETERSMRDC_XDD_DIFF_SFTD_MEASPSCELL_SUPPORTED,
	MEASPARAMETERSMRDC_XDD_DIFF_SFTD_MEASPSCELL_max = 0x7FFFFFFF
}MeasParametersMRDC_XDD_Diff_sftd_MeasPSCell_e;


typedef enum {
	MEASPARAMETERSMRDC_XDD_DIFF_SFTD_MEASNR_CELL_SUPPORTED,
	MEASPARAMETERSMRDC_XDD_DIFF_SFTD_MEASNR_CELL_max = 0x7FFFFFFF
}MeasParametersMRDC_XDD_Diff_sftd_MeasNR_Cell_e;


typedef struct {
	BOOLEAN                                                            sftd_MeasPSCell_exist;
	MeasParametersMRDC_XDD_Diff_sftd_MeasPSCell_e                      sftd_MeasPSCell;
	BOOLEAN                                                            sftd_MeasNR_Cell_exist;
	MeasParametersMRDC_XDD_Diff_sftd_MeasNR_Cell_e                     sftd_MeasNR_Cell;
}MeasParametersMRDC_XDD_Diff_t;


extern void EncodeMeasParametersMRDC_XDD_Diff(
	MeasParametersMRDC_XDD_Diff_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeMeasParametersMRDC_XDD_Diff(
	MeasParametersMRDC_XDD_Diff_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
