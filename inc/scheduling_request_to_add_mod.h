/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * scheduling_request_to_add_mod.h - this is the header file for message: SchedulingRequestToAddMod
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _SCHEDULING_REQUEST_TO_ADD_MOD_H_
#define _SCHEDULING_REQUEST_TO_ADD_MOD_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "scheduling_request_id.h"


typedef enum {
	SCHEDULINGREQUESTTOADDMOD_SR_PROHIBITTIMER_MS1,
	SCHEDULINGREQUESTTOADDMOD_SR_PROHIBITTIMER_MS2,
	SCHEDULINGREQUESTTOADDMOD_SR_PROHIBITTIMER_MS4,
	SCHEDULINGREQUESTTOADDMOD_SR_PROHIBITTIMER_MS8,
	SCHEDULINGREQUESTTOADDMOD_SR_PROHIBITTIMER_MS16,
	SCHEDULINGREQUESTTOADDMOD_SR_PROHIBITTIMER_MS32,
	SCHEDULINGREQUESTTOADDMOD_SR_PROHIBITTIMER_MS64,
	SCHEDULINGREQUESTTOADDMOD_SR_PROHIBITTIMER_MS128,
	SCHEDULINGREQUESTTOADDMOD_SR_PROHIBITTIMER_max = 0x7FFFFFFF
}SchedulingRequestToAddMod_sr_ProhibitTimer_e;


typedef enum {
	SCHEDULINGREQUESTTOADDMOD_SR_TRANSMAX_N4,
	SCHEDULINGREQUESTTOADDMOD_SR_TRANSMAX_N8,
	SCHEDULINGREQUESTTOADDMOD_SR_TRANSMAX_N16,
	SCHEDULINGREQUESTTOADDMOD_SR_TRANSMAX_N32,
	SCHEDULINGREQUESTTOADDMOD_SR_TRANSMAX_N64,
	SCHEDULINGREQUESTTOADDMOD_SR_TRANSMAX_SPARE3,
	SCHEDULINGREQUESTTOADDMOD_SR_TRANSMAX_SPARE2,
	SCHEDULINGREQUESTTOADDMOD_SR_TRANSMAX_SPARE1,
	SCHEDULINGREQUESTTOADDMOD_SR_TRANSMAX_max = 0x7FFFFFFF
}SchedulingRequestToAddMod_sr_TransMax_e;


typedef struct {
	SchedulingRequestId_t                                              schedulingRequestId;
	BOOLEAN                                                            sr_ProhibitTimer_exist;
	SchedulingRequestToAddMod_sr_ProhibitTimer_e                       sr_ProhibitTimer;
	SchedulingRequestToAddMod_sr_TransMax_e                            sr_TransMax;
}SchedulingRequestToAddMod_t;


extern void EncodeSchedulingRequestToAddMod(
	SchedulingRequestToAddMod_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeSchedulingRequestToAddMod(
	SchedulingRequestToAddMod_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
