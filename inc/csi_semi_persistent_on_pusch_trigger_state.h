/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * csi_semi_persistent_on_pusch_trigger_state.h - this is the header file for message: CSI-SemiPersistentOnPUSCH-TriggerState
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _CSI_SEMI_PERSISTENT_ON_PUSCH_TRIGGER_STATE_H_
#define _CSI_SEMI_PERSISTENT_ON_PUSCH_TRIGGER_STATE_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "csi_report_config_id.h"


typedef struct {
	CSI_ReportConfigId_t                                               associatedReportConfigInfo;
	/* Extension marker start. */
}CSI_SemiPersistentOnPUSCH_TriggerState_t;


extern void EncodeCSI_SemiPersistentOnPUSCH_TriggerState(
	CSI_SemiPersistentOnPUSCH_TriggerState_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeCSI_SemiPersistentOnPUSCH_TriggerState(
	CSI_SemiPersistentOnPUSCH_TriggerState_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
