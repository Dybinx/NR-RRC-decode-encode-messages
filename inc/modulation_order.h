/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * modulation_order.h - this is the header file for message: ModulationOrder
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _MODULATION_ORDER_H_
#define _MODULATION_ORDER_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	MODULATIONORDER_BPSK_HALFPI,
	MODULATIONORDER_BPSK,
	MODULATIONORDER_QPSK,
	MODULATIONORDER_QAM16,
	MODULATIONORDER_QAM64,
	MODULATIONORDER_QAM256,
	MODULATIONORDER_max = 0x7FFFFFFF
}ModulationOrder_e;


extern void EncodeModulationOrder(
	ModulationOrder_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeModulationOrder(
	ModulationOrder_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
