/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * report_config_to_remove_list.h - this is the header file for message: ReportConfigToRemoveList
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _REPORT_CONFIG_TO_REMOVE_LIST_H_
#define _REPORT_CONFIG_TO_REMOVE_LIST_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "report_config_id.h"


typedef struct {
	uint32                                                             length;
	ReportConfigId_t                                                   elm[maxReportConfigId];
}ReportConfigToRemoveList_t;


extern void EncodeReportConfigToRemoveList(
	ReportConfigToRemoveList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeReportConfigToRemoveList(
	ReportConfigToRemoveList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
