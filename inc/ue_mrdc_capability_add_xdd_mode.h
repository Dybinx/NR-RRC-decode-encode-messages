/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * ue_mrdc_capability_add_xdd_mode.h - this is the header file for message: UE-MRDC-CapabilityAddXDD-Mode
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _UE_MRDC_CAPABILITY_ADD_XDD_MODE_H_
#define _UE_MRDC_CAPABILITY_ADD_XDD_MODE_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "meas_parameters_mrdc_xdd_diff.h"
#include "general_parameters_mrdc_xdd_diff.h"


typedef struct {
	BOOLEAN                                                            measParametersMRDC_XDD_Diff_exist;
	MeasParametersMRDC_XDD_Diff_t                                      measParametersMRDC_XDD_Diff;
	BOOLEAN                                                            generalParametersMRDC_XDD_Diff_exist;
	GeneralParametersMRDC_XDD_Diff_t                                   generalParametersMRDC_XDD_Diff;
}UE_MRDC_CapabilityAddXDD_Mode_t;


extern void EncodeUE_MRDC_CapabilityAddXDD_Mode(
	UE_MRDC_CapabilityAddXDD_Mode_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeUE_MRDC_CapabilityAddXDD_Mode(
	UE_MRDC_CapabilityAddXDD_Mode_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
