/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * ue_mrdc_capability_add_frx_mode.h - this is the header file for message: UE-MRDC-CapabilityAddFRX-Mode
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _UE_MRDC_CAPABILITY_ADD_FRX_MODE_H_
#define _UE_MRDC_CAPABILITY_ADD_FRX_MODE_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "meas_parameters_mrdc_frx_diff.h"


typedef struct {
	MeasParametersMRDC_FRX_Diff_t                                      measParametersMRDC_FRX_Diff;
}UE_MRDC_CapabilityAddFRX_Mode_t;


extern void EncodeUE_MRDC_CapabilityAddFRX_Mode(
	UE_MRDC_CapabilityAddFRX_Mode_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeUE_MRDC_CapabilityAddFRX_Mode(
	UE_MRDC_CapabilityAddFRX_Mode_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
