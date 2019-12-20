/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * ue_nr_capability_add_frx_mode.h - this is the header file for message: UE-NR-CapabilityAddFRX-Mode
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _UE_NR_CAPABILITY_ADD_FRX_MODE_H_
#define _UE_NR_CAPABILITY_ADD_FRX_MODE_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "phy_parameters_frx_diff.h"
#include "meas_parameters_frx_diff.h"


typedef struct {
	BOOLEAN                                                            phy_ParametersFRX_Diff_exist;
	Phy_ParametersFRX_Diff_t                                           phy_ParametersFRX_Diff;
	BOOLEAN                                                            measParametersFRX_Diff_exist;
	MeasParametersFRX_Diff_t                                           measParametersFRX_Diff;
}UE_NR_CapabilityAddFRX_Mode_t;


extern void EncodeUE_NR_CapabilityAddFRX_Mode(
	UE_NR_CapabilityAddFRX_Mode_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeUE_NR_CapabilityAddFRX_Mode(
	UE_NR_CapabilityAddFRX_Mode_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
