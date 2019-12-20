/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * csi_semi_persistent_on_pusch_trigger_state_list.h - this is the header file for message: CSI-SemiPersistentOnPUSCH-TriggerStateList
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _CSI_SEMI_PERSISTENT_ON_PUSCH_TRIGGER_STATE_LIST_H_
#define _CSI_SEMI_PERSISTENT_ON_PUSCH_TRIGGER_STATE_LIST_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "csi_semi_persistent_on_pusch_trigger_state.h"


typedef struct {
	uint32                                                             length;
	CSI_SemiPersistentOnPUSCH_TriggerState_t                           elm[maxNrOfSemiPersistentPUSCH_Triggers];
}CSI_SemiPersistentOnPUSCH_TriggerStateList_t;


extern void EncodeCSI_SemiPersistentOnPUSCH_TriggerStateList(
	CSI_SemiPersistentOnPUSCH_TriggerStateList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeCSI_SemiPersistentOnPUSCH_TriggerStateList(
	CSI_SemiPersistentOnPUSCH_TriggerStateList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
