/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * mimo_layers_dl.h - this is the header file for message: MIMO-LayersDL
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _MIMO_LAYERS_DL_H_
#define _MIMO_LAYERS_DL_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	MIMO_LAYERSDL_TWOLAYERS,
	MIMO_LAYERSDL_FOURLAYERS,
	MIMO_LAYERSDL_EIGHTLAYERS,
	MIMO_LAYERSDL_max = 0x7FFFFFFF
}MIMO_LayersDL_e;


extern void EncodeMIMO_LayersDL(
	MIMO_LayersDL_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeMIMO_LayersDL(
	MIMO_LayersDL_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
