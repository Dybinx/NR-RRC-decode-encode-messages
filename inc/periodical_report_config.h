/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * periodical_report_config.h - this is the header file for message: PeriodicalReportConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _PERIODICAL_REPORT_CONFIG_H_
#define _PERIODICAL_REPORT_CONFIG_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "nr_rs_type.h"
#include "report_interval.h"
#include "meas_report_quantity.h"
#include "meas_report_quantity.h"


typedef enum {
	PERIODICALREPORTCONFIG_REPORTAMOUNT_R1,
	PERIODICALREPORTCONFIG_REPORTAMOUNT_R2,
	PERIODICALREPORTCONFIG_REPORTAMOUNT_R4,
	PERIODICALREPORTCONFIG_REPORTAMOUNT_R8,
	PERIODICALREPORTCONFIG_REPORTAMOUNT_R16,
	PERIODICALREPORTCONFIG_REPORTAMOUNT_R32,
	PERIODICALREPORTCONFIG_REPORTAMOUNT_R64,
	PERIODICALREPORTCONFIG_REPORTAMOUNT_INFINITY,
	PERIODICALREPORTCONFIG_REPORTAMOUNT_max = 0x7FFFFFFF
}PeriodicalReportConfig_reportAmount_e;


typedef struct {
	NR_RS_Type_e                                                       rsType;
	ReportInterval_e                                                   reportInterval;
	PeriodicalReportConfig_reportAmount_e                              reportAmount;
	MeasReportQuantity_t                                               reportQuantityCell;
	uint32                                                             maxReportCells;
	BOOLEAN                                                            reportQuantityRsIndexes_exist;
	MeasReportQuantity_t                                               reportQuantityRsIndexes;
	BOOLEAN                                                            maxNrofRsIndexesToReport_exist;
	uint32                                                             maxNrofRsIndexesToReport;
	BOOLEAN                                                            includeBeamMeasurements;
	BOOLEAN                                                            useWhiteCellList;
	/* Extension marker start. */
}PeriodicalReportConfig_t;


extern void EncodePeriodicalReportConfig(
	PeriodicalReportConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodePeriodicalReportConfig(
	PeriodicalReportConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
