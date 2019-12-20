/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * csi_report_periodicity_and_offset.h - this is the header file for message: CSI-ReportPeriodicityAndOffset
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _CSI_REPORT_PERIODICITY_AND_OFFSET_H_
#define _CSI_REPORT_PERIODICITY_AND_OFFSET_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	CSI_REPORTPERIODICITYANDOFFSET_SLOTS4,
	CSI_REPORTPERIODICITYANDOFFSET_SLOTS5,
	CSI_REPORTPERIODICITYANDOFFSET_SLOTS8,
	CSI_REPORTPERIODICITYANDOFFSET_SLOTS10,
	CSI_REPORTPERIODICITYANDOFFSET_SLOTS16,
	CSI_REPORTPERIODICITYANDOFFSET_SLOTS20,
	CSI_REPORTPERIODICITYANDOFFSET_SLOTS40,
	CSI_REPORTPERIODICITYANDOFFSET_SLOTS80,
	CSI_REPORTPERIODICITYANDOFFSET_SLOTS160,
	CSI_REPORTPERIODICITYANDOFFSET_SLOTS320,
	CSI_REPORTPERIODICITYANDOFFSET_max = 0x7FFFFFFF
}CSI_ReportPeriodicityAndOffset_e;


/* union corresponding asn: CSI_ReportPeriodicityAndOffset */
typedef union {
	uint32                                                             slots4;
	uint32                                                             slots5;
	uint32                                                             slots8;
	uint32                                                             slots10;
	uint32                                                             slots16;
	uint32                                                             slots20;
	uint32                                                             slots40;
	uint32                                                             slots80;
	uint32                                                             slots160;
	uint32                                                             slots320;
}CSI_ReportPeriodicityAndOffset_u;


/* struct corresponding asn: CSI_ReportPeriodicityAndOffset */
typedef struct {
	CSI_ReportPeriodicityAndOffset_e                                   type;
	CSI_ReportPeriodicityAndOffset_u                                   a;
}CSI_ReportPeriodicityAndOffset_t;


extern void EncodeCSI_ReportPeriodicityAndOffset(
	CSI_ReportPeriodicityAndOffset_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeCSI_ReportPeriodicityAndOffset(
	CSI_ReportPeriodicityAndOffset_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
