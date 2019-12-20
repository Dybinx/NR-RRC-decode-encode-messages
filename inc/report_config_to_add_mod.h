/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * report_config_to_add_mod.h - this is the header file for message: ReportConfigToAddMod
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _REPORT_CONFIG_TO_ADD_MOD_H_
#define _REPORT_CONFIG_TO_ADD_MOD_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "report_config_id.h"
#include "report_config_nr.h"


typedef enum {
	REPORTCONFIGTOADDMOD_REPORTCONFIG_REPORTCONFIGNR,
	/* Extension marker start. */
	REPORTCONFIGTOADDMOD_REPORTCONFIG_max = 0x7FFFFFFF
}ReportConfigToAddMod_reportConfig_e;


/* union corresponding asn: ReportConfigToAddMod_reportConfig */
typedef union {
	ReportConfigNR_t                                                   reportConfigNR;
	/* Extension marker start. */
}ReportConfigToAddMod_reportConfig_u;


/* struct corresponding asn: ReportConfigToAddMod_reportConfig */
typedef struct {
	ReportConfigToAddMod_reportConfig_e                                type;
	ReportConfigToAddMod_reportConfig_u                                a;
}ReportConfigToAddMod_reportConfig_t;


typedef struct {
	ReportConfigId_t                                                   reportConfigId;
	ReportConfigToAddMod_reportConfig_t                                reportConfig;
}ReportConfigToAddMod_t;


extern void EncodeReportConfigToAddMod(
	ReportConfigToAddMod_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeReportConfigToAddMod(
	ReportConfigToAddMod_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
