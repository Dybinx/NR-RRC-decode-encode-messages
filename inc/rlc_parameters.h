/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * rlc_parameters.h - this is the header file for message: RLC-Parameters
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _RLC_PARAMETERS_H_
#define _RLC_PARAMETERS_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	RLC_PARAMETERS_AM_WITHSHORTSN_SUPPORTED,
	RLC_PARAMETERS_AM_WITHSHORTSN_max = 0x7FFFFFFF
}RLC_Parameters_am_WithShortSN_e;


typedef enum {
	RLC_PARAMETERS_UM_WITHSHORTSN_SUPPORTED,
	RLC_PARAMETERS_UM_WITHSHORTSN_max = 0x7FFFFFFF
}RLC_Parameters_um_WithShortSN_e;


typedef enum {
	RLC_PARAMETERS_UM_WITHLONGSN_SUPPORTED,
	RLC_PARAMETERS_UM_WITHLONGSN_max = 0x7FFFFFFF
}RLC_Parameters_um_WIthLongSN_e;


typedef struct {
	BOOLEAN                                                            am_WithShortSN_exist;
	RLC_Parameters_am_WithShortSN_e                                    am_WithShortSN;
	BOOLEAN                                                            um_WithShortSN_exist;
	RLC_Parameters_um_WithShortSN_e                                    um_WithShortSN;
	BOOLEAN                                                            um_WIthLongSN_exist;
	RLC_Parameters_um_WIthLongSN_e                                     um_WIthLongSN;
	/* Extension marker start. */
}RLC_Parameters_t;


extern void EncodeRLC_Parameters(
	RLC_Parameters_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeRLC_Parameters(
	RLC_Parameters_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
