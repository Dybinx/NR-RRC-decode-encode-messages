/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * report_config_nr.h - this is the header file for message: ReportConfigNR
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _REPORT_CONFIG_NR_H_
#define _REPORT_CONFIG_NR_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "periodical_report_config.h"
#include "event_trigger_config.h"


typedef enum {
	REPORTCONFIGNR_REPORTTYPE_PERIODICAL,
	REPORTCONFIGNR_REPORTTYPE_EVENTTRIGGERED,
	/* Extension marker start. */
	REPORTCONFIGNR_REPORTTYPE_max = 0x7FFFFFFF
}ReportConfigNR_reportType_e;


/* union corresponding asn: ReportConfigNR_reportType */
typedef union {
	PeriodicalReportConfig_t                                           periodical;
	EventTriggerConfig_t                                               eventTriggered;
	/* Extension marker start. */
}ReportConfigNR_reportType_u;


/* struct corresponding asn: ReportConfigNR_reportType */
typedef struct {
	ReportConfigNR_reportType_e                                        type;
	ReportConfigNR_reportType_u                                        a;
}ReportConfigNR_reportType_t;


typedef struct {
	ReportConfigNR_reportType_t                                        reportType;
}ReportConfigNR_t;


extern void EncodeReportConfigNR(
	ReportConfigNR_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeReportConfigNR(
	ReportConfigNR_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
