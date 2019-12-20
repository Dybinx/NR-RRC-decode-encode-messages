/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * sri_pusch_power_control.h - this is the header file for message: SRI-PUSCH-PowerControl
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _SRI_PUSCH_POWER_CONTROL_H_
#define _SRI_PUSCH_POWER_CONTROL_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "sri_pusch_power_control_id.h"
#include "pusch_pathloss_reference_rs_id.h"
#include "p0_pusch_alpha_set_id.h"


typedef enum {
	SRI_PUSCH_POWERCONTROL_SRI_PUSCH_CLOSEDLOOPINDEX_I0,
	SRI_PUSCH_POWERCONTROL_SRI_PUSCH_CLOSEDLOOPINDEX_I1,
	SRI_PUSCH_POWERCONTROL_SRI_PUSCH_CLOSEDLOOPINDEX_max = 0x7FFFFFFF
}SRI_PUSCH_PowerControl_sri_PUSCH_ClosedLoopIndex_e;


typedef struct {
	SRI_PUSCH_PowerControlId_t                                         sri_PUSCH_PowerControlId;
	PUSCH_PathlossReferenceRS_Id_t                                     sri_PUSCH_PathlossReferenceRS_Id;
	P0_PUSCH_AlphaSetId_t                                              sri_P0_PUSCH_AlphaSetId;
	SRI_PUSCH_PowerControl_sri_PUSCH_ClosedLoopIndex_e                 sri_PUSCH_ClosedLoopIndex;
}SRI_PUSCH_PowerControl_t;


extern void EncodeSRI_PUSCH_PowerControl(
	SRI_PUSCH_PowerControl_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeSRI_PUSCH_PowerControl(
	SRI_PUSCH_PowerControl_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
