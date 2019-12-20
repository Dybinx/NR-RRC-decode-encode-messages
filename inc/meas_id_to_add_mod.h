/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * meas_id_to_add_mod.h - this is the header file for message: MeasIdToAddMod
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _MEAS_ID_TO_ADD_MOD_H_
#define _MEAS_ID_TO_ADD_MOD_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "meas_id.h"
#include "meas_object_id.h"
#include "report_config_id.h"


typedef struct {
	MeasId_t                                                           measId;
	MeasObjectId_t                                                     measObjectId;
	ReportConfigId_t                                                   reportConfigId;
}MeasIdToAddMod_t;


extern void EncodeMeasIdToAddMod(
	MeasIdToAddMod_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeMeasIdToAddMod(
	MeasIdToAddMod_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
