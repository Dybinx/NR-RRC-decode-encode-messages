/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * report_interval.h - this is the header file for message: ReportInterval
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _REPORT_INTERVAL_H_
#define _REPORT_INTERVAL_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	REPORTINTERVAL_MS120,
	REPORTINTERVAL_MS240,
	REPORTINTERVAL_MS480,
	REPORTINTERVAL_MS640,
	REPORTINTERVAL_MS1024,
	REPORTINTERVAL_MS2048,
	REPORTINTERVAL_MS5120,
	REPORTINTERVAL_MS10240,
	REPORTINTERVAL_MS20480,
	REPORTINTERVAL_MS40960,
	REPORTINTERVAL_MIN1,
	REPORTINTERVAL_MIN6,
	REPORTINTERVAL_MIN12,
	REPORTINTERVAL_MIN30,
	REPORTINTERVAL_max = 0x7FFFFFFF
}ReportInterval_e;


extern void EncodeReportInterval(
	ReportInterval_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeReportInterval(
	ReportInterval_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
