/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * csi_aperiodic_trigger_state_list.h - this is the header file for message: CSI-AperiodicTriggerStateList
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _CSI_APERIODIC_TRIGGER_STATE_LIST_H_
#define _CSI_APERIODIC_TRIGGER_STATE_LIST_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "csi_aperiodic_trigger_state.h"


typedef struct {
	uint32                                                             length;
	CSI_AperiodicTriggerState_t                                        elm[maxNrOfCSI_AperiodicTriggers];
}CSI_AperiodicTriggerStateList_t;


extern void EncodeCSI_AperiodicTriggerStateList(
	CSI_AperiodicTriggerStateList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeCSI_AperiodicTriggerStateList(
	CSI_AperiodicTriggerStateList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
