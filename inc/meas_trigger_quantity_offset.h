/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * meas_trigger_quantity_offset.h - this is the header file for message: MeasTriggerQuantityOffset
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _MEAS_TRIGGER_QUANTITY_OFFSET_H_
#define _MEAS_TRIGGER_QUANTITY_OFFSET_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	MEASTRIGGERQUANTITYOFFSET_RSRP,
	MEASTRIGGERQUANTITYOFFSET_RSRQ,
	MEASTRIGGERQUANTITYOFFSET_SINR,
	MEASTRIGGERQUANTITYOFFSET_max = 0x7FFFFFFF
}MeasTriggerQuantityOffset_e;


/* union corresponding asn: MeasTriggerQuantityOffset */
typedef union {
	int32                                                              rsrp;
	int32                                                              rsrq;
	int32                                                              sinr;
}MeasTriggerQuantityOffset_u;


/* struct corresponding asn: MeasTriggerQuantityOffset */
typedef struct {
	MeasTriggerQuantityOffset_e                                        type;
	MeasTriggerQuantityOffset_u                                        a;
}MeasTriggerQuantityOffset_t;


extern void EncodeMeasTriggerQuantityOffset(
	MeasTriggerQuantityOffset_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeMeasTriggerQuantityOffset(
	MeasTriggerQuantityOffset_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
