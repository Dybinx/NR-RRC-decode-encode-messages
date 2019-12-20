/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * csi_report_framework.h - this is the header file for message: CSI-ReportFramework
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _CSI_REPORT_FRAMEWORK_H_
#define _CSI_REPORT_FRAMEWORK_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef struct {
	uint32                                                             maxNumberPeriodicCSI_ReportPerBWP;
	uint32                                                             maxNumberAperiodicCSI_ReportPerBWP;
	uint32                                                             maxNumberSemiPersistentCSI_ReportPerBWP;
	uint32                                                             simultaneousCSI_ReportsAllCC;
}CSI_ReportFramework_t;


extern void EncodeCSI_ReportFramework(
	CSI_ReportFramework_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeCSI_ReportFramework(
	CSI_ReportFramework_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
