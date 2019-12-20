/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * measurement_report_i_es.h - this is the header file for message: MeasurementReport-IEs
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _MEASUREMENT_REPORT_I_ES_H_
#define _MEASUREMENT_REPORT_I_ES_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "meas_results.h"


/* ASN: OCTET STRING */
typedef struct {
	uint32                                                             octets_num;
	uint8                                                              *value;
}MeasurementReport_IEs_lateNonCriticalExtension_t;
typedef struct {
	uint32                                                             dummy;
}MeasurementReport_IEs_nonCriticalExtension_t;


typedef struct {
	MeasResults_t                                                      measResults;
	BOOLEAN                                                            lateNonCriticalExtension_exist;
	MeasurementReport_IEs_lateNonCriticalExtension_t                   lateNonCriticalExtension;
	BOOLEAN                                                            nonCriticalExtension_exist;
	MeasurementReport_IEs_nonCriticalExtension_t                       nonCriticalExtension;
}MeasurementReport_IEs_t;


extern void EncodeMeasurementReport_IEs(
	MeasurementReport_IEs_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeMeasurementReport_IEs(
	MeasurementReport_IEs_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
