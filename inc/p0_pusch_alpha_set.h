/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * p0_pusch_alpha_set.h - this is the header file for message: P0-PUSCH-AlphaSet
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _P0_PUSCH_ALPHA_SET_H_
#define _P0_PUSCH_ALPHA_SET_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "p0_pusch_alpha_set_id.h"
#include "alpha.h"


typedef struct {
	P0_PUSCH_AlphaSetId_t                                              p0_PUSCH_AlphaSetId;
	BOOLEAN                                                            p0_exist;
	int32                                                              p0;
	BOOLEAN                                                            alpha_exist;
	Alpha_e                                                            alpha;
}P0_PUSCH_AlphaSet_t;


extern void EncodeP0_PUSCH_AlphaSet(
	P0_PUSCH_AlphaSet_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeP0_PUSCH_AlphaSet(
	P0_PUSCH_AlphaSet_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
