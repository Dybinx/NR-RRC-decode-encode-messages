/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * scheduling_request_config.h - this is the header file for message: SchedulingRequestConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _SCHEDULING_REQUEST_CONFIG_H_
#define _SCHEDULING_REQUEST_CONFIG_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "scheduling_request_to_add_mod.h"
#include "scheduling_request_id.h"


typedef struct {
	uint32                                                             length;
	SchedulingRequestToAddMod_t                                        elm[maxNrofSR_ConfigPerCellGroup];
}SchedulingRequestConfig_schedulingRequestToAddModList_t;


typedef struct {
	uint32                                                             length;
	SchedulingRequestId_t                                              elm[maxNrofSR_ConfigPerCellGroup];
}SchedulingRequestConfig_schedulingRequestToReleaseList_t;


typedef struct {
	BOOLEAN                                                            schedulingRequestToAddModList_exist;
	SchedulingRequestConfig_schedulingRequestToAddModList_t            schedulingRequestToAddModList;
	BOOLEAN                                                            schedulingRequestToReleaseList_exist;
	SchedulingRequestConfig_schedulingRequestToReleaseList_t           schedulingRequestToReleaseList;
}SchedulingRequestConfig_t;


extern void EncodeSchedulingRequestConfig(
	SchedulingRequestConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeSchedulingRequestConfig(
	SchedulingRequestConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
