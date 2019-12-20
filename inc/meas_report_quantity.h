/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * meas_report_quantity.h - this is the header file for message: MeasReportQuantity
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _MEAS_REPORT_QUANTITY_H_
#define _MEAS_REPORT_QUANTITY_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef struct {
	BOOLEAN                                                            rsrp;
	BOOLEAN                                                            rsrq;
	BOOLEAN                                                            sinr;
}MeasReportQuantity_t;


extern void EncodeMeasReportQuantity(
	MeasReportQuantity_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeMeasReportQuantity(
	MeasReportQuantity_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
