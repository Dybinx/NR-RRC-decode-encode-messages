/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * measurement_report.h - this is the header file for message: MeasurementReport
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _MEASUREMENT_REPORT_H_
#define _MEASUREMENT_REPORT_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "measurement_report_i_es.h"


typedef struct {
	uint32                                                             dummy;
}MeasurementReport_criticalExtensionsFuture_t;


typedef enum {
	MEASUREMENTREPORT_CRITICALEXTENSIONS_MEASUREMENTREPORT,
	MEASUREMENTREPORT_CRITICALEXTENSIONS_CRITICALEXTENSIONSFUTURE,
	MEASUREMENTREPORT_CRITICALEXTENSIONS_max = 0x7FFFFFFF
}MeasurementReport_criticalExtensions_e;


/* union corresponding asn: MeasurementReport_criticalExtensions */
typedef union {
	MeasurementReport_IEs_t                                            measurementReport;
	MeasurementReport_criticalExtensionsFuture_t                       criticalExtensionsFuture;
}MeasurementReport_criticalExtensions_u;


/* struct corresponding asn: MeasurementReport_criticalExtensions */
typedef struct {
	MeasurementReport_criticalExtensions_e                             type;
	MeasurementReport_criticalExtensions_u                             a;
}MeasurementReport_criticalExtensions_t;


typedef struct {
	MeasurementReport_criticalExtensions_t                             criticalExtensions;
}MeasurementReport_t;


extern void EncodeMeasurementReport(
	MeasurementReport_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeMeasurementReport(
	MeasurementReport_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
