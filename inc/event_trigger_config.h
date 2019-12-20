/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * event_trigger_config.h - this is the header file for message: EventTriggerConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _EVENT_TRIGGER_CONFIG_H_
#define _EVENT_TRIGGER_CONFIG_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "meas_trigger_quantity.h"
#include "hysteresis.h"
#include "time_to_trigger.h"
#include "meas_trigger_quantity.h"
#include "hysteresis.h"
#include "time_to_trigger.h"
#include "meas_trigger_quantity_offset.h"
#include "hysteresis.h"
#include "time_to_trigger.h"
#include "meas_trigger_quantity.h"
#include "hysteresis.h"
#include "time_to_trigger.h"
#include "meas_trigger_quantity.h"
#include "meas_trigger_quantity.h"
#include "hysteresis.h"
#include "time_to_trigger.h"
#include "meas_trigger_quantity_offset.h"
#include "hysteresis.h"
#include "time_to_trigger.h"
#include "nr_rs_type.h"
#include "report_interval.h"
#include "meas_report_quantity.h"
#include "meas_report_quantity.h"


typedef struct {
	MeasTriggerQuantity_t                                              a1_Threshold;
	BOOLEAN                                                            reportOnLeave;
	Hysteresis_t                                                       hysteresis;
	TimeToTrigger_e                                                    timeToTrigger;
}EventTriggerConfig_eventA1_t;


typedef struct {
	MeasTriggerQuantity_t                                              a2_Threshold;
	BOOLEAN                                                            reportOnLeave;
	Hysteresis_t                                                       hysteresis;
	TimeToTrigger_e                                                    timeToTrigger;
}EventTriggerConfig_eventA2_t;


typedef struct {
	MeasTriggerQuantityOffset_t                                        a3_Offset;
	BOOLEAN                                                            reportOnLeave;
	Hysteresis_t                                                       hysteresis;
	TimeToTrigger_e                                                    timeToTrigger;
	BOOLEAN                                                            useWhiteCellList;
}EventTriggerConfig_eventA3_t;


typedef struct {
	MeasTriggerQuantity_t                                              a4_Threshold;
	BOOLEAN                                                            reportOnLeave;
	Hysteresis_t                                                       hysteresis;
	TimeToTrigger_e                                                    timeToTrigger;
	BOOLEAN                                                            useWhiteCellList;
}EventTriggerConfig_eventA4_t;


typedef struct {
	MeasTriggerQuantity_t                                              a5_Threshold1;
	MeasTriggerQuantity_t                                              a5_Threshold2;
	BOOLEAN                                                            reportOnLeave;
	Hysteresis_t                                                       hysteresis;
	TimeToTrigger_e                                                    timeToTrigger;
	BOOLEAN                                                            useWhiteCellList;
}EventTriggerConfig_eventA5_t;


typedef struct {
	MeasTriggerQuantityOffset_t                                        a6_Offset;
	BOOLEAN                                                            reportOnLeave;
	Hysteresis_t                                                       hysteresis;
	TimeToTrigger_e                                                    timeToTrigger;
	BOOLEAN                                                            useWhiteCellList;
}EventTriggerConfig_eventA6_t;


typedef enum {
	EVENTTRIGGERCONFIG_EVENTID_EVENTA1,
	EVENTTRIGGERCONFIG_EVENTID_EVENTA2,
	EVENTTRIGGERCONFIG_EVENTID_EVENTA3,
	EVENTTRIGGERCONFIG_EVENTID_EVENTA4,
	EVENTTRIGGERCONFIG_EVENTID_EVENTA5,
	EVENTTRIGGERCONFIG_EVENTID_EVENTA6,
	/* Extension marker start. */
	EVENTTRIGGERCONFIG_EVENTID_max = 0x7FFFFFFF
}EventTriggerConfig_eventId_e;


/* union corresponding asn: EventTriggerConfig_eventId */
typedef union {
	EventTriggerConfig_eventA1_t                                       eventA1;
	EventTriggerConfig_eventA2_t                                       eventA2;
	EventTriggerConfig_eventA3_t                                       eventA3;
	EventTriggerConfig_eventA4_t                                       eventA4;
	EventTriggerConfig_eventA5_t                                       eventA5;
	EventTriggerConfig_eventA6_t                                       eventA6;
	/* Extension marker start. */
}EventTriggerConfig_eventId_u;


/* struct corresponding asn: EventTriggerConfig_eventId */
typedef struct {
	EventTriggerConfig_eventId_e                                       type;
	EventTriggerConfig_eventId_u                                       a;
}EventTriggerConfig_eventId_t;


typedef enum {
	EVENTTRIGGERCONFIG_REPORTAMOUNT_R1,
	EVENTTRIGGERCONFIG_REPORTAMOUNT_R2,
	EVENTTRIGGERCONFIG_REPORTAMOUNT_R4,
	EVENTTRIGGERCONFIG_REPORTAMOUNT_R8,
	EVENTTRIGGERCONFIG_REPORTAMOUNT_R16,
	EVENTTRIGGERCONFIG_REPORTAMOUNT_R32,
	EVENTTRIGGERCONFIG_REPORTAMOUNT_R64,
	EVENTTRIGGERCONFIG_REPORTAMOUNT_INFINITY,
	EVENTTRIGGERCONFIG_REPORTAMOUNT_max = 0x7FFFFFFF
}EventTriggerConfig_reportAmount_e;


typedef enum {
	EVENTTRIGGERCONFIG_REPORTADDNEIGHMEAS_SETUP,
	EVENTTRIGGERCONFIG_REPORTADDNEIGHMEAS_max = 0x7FFFFFFF
}EventTriggerConfig_reportAddNeighMeas_e;


typedef struct {
	EventTriggerConfig_eventId_t                                       eventId;
	NR_RS_Type_e                                                       rsType;
	ReportInterval_e                                                   reportInterval;
	EventTriggerConfig_reportAmount_e                                  reportAmount;
	MeasReportQuantity_t                                               reportQuantityCell;
	uint32                                                             maxReportCells;
	BOOLEAN                                                            reportQuantityRsIndexes_exist;
	MeasReportQuantity_t                                               reportQuantityRsIndexes;
	BOOLEAN                                                            maxNrofRSIndexesToReport_exist;
	uint32                                                             maxNrofRSIndexesToReport;
	BOOLEAN                                                            includeBeamMeasurements;
	BOOLEAN                                                            reportAddNeighMeas_exist;
	EventTriggerConfig_reportAddNeighMeas_e                            reportAddNeighMeas;
	/* Extension marker start. */
}EventTriggerConfig_t;


extern void EncodeEventTriggerConfig(
	EventTriggerConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeEventTriggerConfig(
	EventTriggerConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
