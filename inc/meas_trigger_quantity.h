/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * meas_trigger_quantity.h - this is the header file for message: MeasTriggerQuantity
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _MEAS_TRIGGER_QUANTITY_H_
#define _MEAS_TRIGGER_QUANTITY_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "rsrp_range.h"
#include "rsrq_range.h"
#include "sinr_range.h"


typedef enum {
	MEASTRIGGERQUANTITY_RSRP,
	MEASTRIGGERQUANTITY_RSRQ,
	MEASTRIGGERQUANTITY_SINR,
	MEASTRIGGERQUANTITY_max = 0x7FFFFFFF
}MeasTriggerQuantity_e;


/* union corresponding asn: MeasTriggerQuantity */
typedef union {
	RSRP_Range_t                                                       rsrp;
	RSRQ_Range_t                                                       rsrq;
	SINR_Range_t                                                       sinr;
}MeasTriggerQuantity_u;


/* struct corresponding asn: MeasTriggerQuantity */
typedef struct {
	MeasTriggerQuantity_e                                              type;
	MeasTriggerQuantity_u                                              a;
}MeasTriggerQuantity_t;


extern void EncodeMeasTriggerQuantity(
	MeasTriggerQuantity_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeMeasTriggerQuantity(
	MeasTriggerQuantity_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
