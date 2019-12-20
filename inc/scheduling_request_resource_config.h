/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * scheduling_request_resource_config.h - this is the header file for message: SchedulingRequestResourceConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _SCHEDULING_REQUEST_RESOURCE_CONFIG_H_
#define _SCHEDULING_REQUEST_RESOURCE_CONFIG_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "scheduling_request_resource_id.h"
#include "scheduling_request_id.h"
#include "pucch_resource_id.h"


typedef struct {
	uint32                                                             dummy;
}SchedulingRequestResourceConfig_sym2_t;


typedef struct {
	uint32                                                             dummy;
}SchedulingRequestResourceConfig_sym6or7_t;


typedef struct {
	uint32                                                             dummy;
}SchedulingRequestResourceConfig_sl1_t;


typedef enum {
	SCHEDULINGREQUESTRESOURCECONFIG_PERIODICITYANDOFFSET_SYM2,
	SCHEDULINGREQUESTRESOURCECONFIG_PERIODICITYANDOFFSET_SYM6OR7,
	SCHEDULINGREQUESTRESOURCECONFIG_PERIODICITYANDOFFSET_SL1,
	SCHEDULINGREQUESTRESOURCECONFIG_PERIODICITYANDOFFSET_SL2,
	SCHEDULINGREQUESTRESOURCECONFIG_PERIODICITYANDOFFSET_SL4,
	SCHEDULINGREQUESTRESOURCECONFIG_PERIODICITYANDOFFSET_SL5,
	SCHEDULINGREQUESTRESOURCECONFIG_PERIODICITYANDOFFSET_SL8,
	SCHEDULINGREQUESTRESOURCECONFIG_PERIODICITYANDOFFSET_SL10,
	SCHEDULINGREQUESTRESOURCECONFIG_PERIODICITYANDOFFSET_SL16,
	SCHEDULINGREQUESTRESOURCECONFIG_PERIODICITYANDOFFSET_SL20,
	SCHEDULINGREQUESTRESOURCECONFIG_PERIODICITYANDOFFSET_SL40,
	SCHEDULINGREQUESTRESOURCECONFIG_PERIODICITYANDOFFSET_SL80,
	SCHEDULINGREQUESTRESOURCECONFIG_PERIODICITYANDOFFSET_SL160,
	SCHEDULINGREQUESTRESOURCECONFIG_PERIODICITYANDOFFSET_SL320,
	SCHEDULINGREQUESTRESOURCECONFIG_PERIODICITYANDOFFSET_SL640,
	SCHEDULINGREQUESTRESOURCECONFIG_PERIODICITYANDOFFSET_max = 0x7FFFFFFF
}SchedulingRequestResourceConfig_periodicityAndOffset_e;


/* union corresponding asn: SchedulingRequestResourceConfig_periodicityAndOffset */
typedef union {
	SchedulingRequestResourceConfig_sym2_t                             sym2;
	SchedulingRequestResourceConfig_sym6or7_t                          sym6or7;
	SchedulingRequestResourceConfig_sl1_t                              sl1;
	uint32                                                             sl2;
	uint32                                                             sl4;
	uint32                                                             sl5;
	uint32                                                             sl8;
	uint32                                                             sl10;
	uint32                                                             sl16;
	uint32                                                             sl20;
	uint32                                                             sl40;
	uint32                                                             sl80;
	uint32                                                             sl160;
	uint32                                                             sl320;
	uint32                                                             sl640;
}SchedulingRequestResourceConfig_periodicityAndOffset_u;


/* struct corresponding asn: SchedulingRequestResourceConfig_periodicityAndOffset */
typedef struct {
	SchedulingRequestResourceConfig_periodicityAndOffset_e             type;
	SchedulingRequestResourceConfig_periodicityAndOffset_u             a;
}SchedulingRequestResourceConfig_periodicityAndOffset_t;


typedef struct {
	SchedulingRequestResourceId_t                                      schedulingRequestResourceId;
	SchedulingRequestId_t                                              schedulingRequestID;
	BOOLEAN                                                            periodicityAndOffset_exist;
	SchedulingRequestResourceConfig_periodicityAndOffset_t             periodicityAndOffset;
	BOOLEAN                                                            resource_exist;
	PUCCH_ResourceId_t                                                 resource;
}SchedulingRequestResourceConfig_t;


extern void EncodeSchedulingRequestResourceConfig(
	SchedulingRequestResourceConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeSchedulingRequestResourceConfig(
	SchedulingRequestResourceConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
