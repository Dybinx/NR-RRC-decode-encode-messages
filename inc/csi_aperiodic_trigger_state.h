/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * csi_aperiodic_trigger_state.h - this is the header file for message: CSI-AperiodicTriggerState
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _CSI_APERIODIC_TRIGGER_STATE_H_
#define _CSI_APERIODIC_TRIGGER_STATE_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "csi_associated_report_config_info.h"


typedef struct {
	uint32                                                             length;
	CSI_AssociatedReportConfigInfo_t                                   elm[maxNrofReportConfigPerAperiodicTrigger];
}CSI_AperiodicTriggerState_associatedReportConfigInfoList_t;


typedef struct {
	CSI_AperiodicTriggerState_associatedReportConfigInfoList_t         associatedReportConfigInfoList;
	/* Extension marker start. */
}CSI_AperiodicTriggerState_t;


extern void EncodeCSI_AperiodicTriggerState(
	CSI_AperiodicTriggerState_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeCSI_AperiodicTriggerState(
	CSI_AperiodicTriggerState_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
