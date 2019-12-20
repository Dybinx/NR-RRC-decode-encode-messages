/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pucch_power_control.h - this is the header file for message: PUCCH-PowerControl
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _PUCCH_POWER_CONTROL_H_
#define _PUCCH_POWER_CONTROL_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "p0_pucch.h"
#include "pucch_pathloss_reference_rs.h"


typedef struct {
	uint32                                                             length;
	P0_PUCCH_t                                                         elm[maxNrofPUCCH_P0_PerSet];
}PUCCH_PowerControl_p0_Set_t;


typedef struct {
	uint32                                                             length;
	PUCCH_PathlossReferenceRS_t                                        elm[maxNrofPUCCH_PathlossReferenceRSs];
}PUCCH_PowerControl_pathlossReferenceRSs_t;


typedef enum {
	PUCCH_POWERCONTROL_TWOPUCCH_PC_ADJUSTMENTSTATES_TWOSTATES,
	PUCCH_POWERCONTROL_TWOPUCCH_PC_ADJUSTMENTSTATES_max = 0x7FFFFFFF
}PUCCH_PowerControl_twoPUCCH_PC_AdjustmentStates_e;


typedef struct {
	BOOLEAN                                                            deltaF_PUCCH_f0_exist;
	int32                                                              deltaF_PUCCH_f0;
	BOOLEAN                                                            deltaF_PUCCH_f1_exist;
	int32                                                              deltaF_PUCCH_f1;
	BOOLEAN                                                            deltaF_PUCCH_f2_exist;
	int32                                                              deltaF_PUCCH_f2;
	BOOLEAN                                                            deltaF_PUCCH_f3_exist;
	int32                                                              deltaF_PUCCH_f3;
	BOOLEAN                                                            deltaF_PUCCH_f4_exist;
	int32                                                              deltaF_PUCCH_f4;
	BOOLEAN                                                            p0_Set_exist;
	PUCCH_PowerControl_p0_Set_t                                        p0_Set;
	BOOLEAN                                                            pathlossReferenceRSs_exist;
	PUCCH_PowerControl_pathlossReferenceRSs_t                          pathlossReferenceRSs;
	BOOLEAN                                                            twoPUCCH_PC_AdjustmentStates_exist;
	PUCCH_PowerControl_twoPUCCH_PC_AdjustmentStates_e                  twoPUCCH_PC_AdjustmentStates;
	/* Extension marker start. */
}PUCCH_PowerControl_t;


extern void EncodePUCCH_PowerControl(
	PUCCH_PowerControl_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodePUCCH_PowerControl(
	PUCCH_PowerControl_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
