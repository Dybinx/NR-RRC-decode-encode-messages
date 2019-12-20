/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * meas_object_to_add_mod.h - this is the header file for message: MeasObjectToAddMod
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _MEAS_OBJECT_TO_ADD_MOD_H_
#define _MEAS_OBJECT_TO_ADD_MOD_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "meas_object_id.h"
#include "meas_object_nr.h"


typedef enum {
	MEASOBJECTTOADDMOD_MEASOBJECT_MEASOBJECTNR,
	/* Extension marker start. */
	MEASOBJECTTOADDMOD_MEASOBJECT_max = 0x7FFFFFFF
}MeasObjectToAddMod_measObject_e;


/* union corresponding asn: MeasObjectToAddMod_measObject */
typedef union {
	MeasObjectNR_t                                                     measObjectNR;
	/* Extension marker start. */
}MeasObjectToAddMod_measObject_u;


/* struct corresponding asn: MeasObjectToAddMod_measObject */
typedef struct {
	MeasObjectToAddMod_measObject_e                                    type;
	MeasObjectToAddMod_measObject_u                                    a;
}MeasObjectToAddMod_measObject_t;


typedef struct {
	MeasObjectId_t                                                     measObjectId;
	MeasObjectToAddMod_measObject_t                                    measObject;
}MeasObjectToAddMod_t;


extern void EncodeMeasObjectToAddMod(
	MeasObjectToAddMod_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeMeasObjectToAddMod(
	MeasObjectToAddMod_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
