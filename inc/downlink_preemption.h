/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * downlink_preemption.h - this is the header file for message: DownlinkPreemption
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _DOWNLINK_PREEMPTION_H_
#define _DOWNLINK_PREEMPTION_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "rnti_value.h"
#include "int_configuration_per_serving_cell.h"


typedef enum {
	DOWNLINKPREEMPTION_TIMEFREQUENCYSET_SET0,
	DOWNLINKPREEMPTION_TIMEFREQUENCYSET_SET1,
	DOWNLINKPREEMPTION_TIMEFREQUENCYSET_max = 0x7FFFFFFF
}DownlinkPreemption_timeFrequencySet_e;


typedef struct {
	uint32                                                             length;
	INT_ConfigurationPerServingCell_t                                  elm[maxNrofServingCells];
}DownlinkPreemption_int_ConfigurationPerServingCell_t;


typedef struct {
	RNTI_Value_t                                                       int_RNTI;
	DownlinkPreemption_timeFrequencySet_e                              timeFrequencySet;
	uint32                                                             dci_PayloadSize;
	DownlinkPreemption_int_ConfigurationPerServingCell_t               int_ConfigurationPerServingCell;
	/* Extension marker start. */
}DownlinkPreemption_t;


extern void EncodeDownlinkPreemption(
	DownlinkPreemption_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeDownlinkPreemption(
	DownlinkPreemption_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
