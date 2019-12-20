/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * band_combination_list.h - this is the header file for message: BandCombinationList
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _BAND_COMBINATION_LIST_H_
#define _BAND_COMBINATION_LIST_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "band_combination.h"


typedef struct {
	uint32                                                             length;
	BandCombination_t                                                  elm[maxBandComb];
}BandCombinationList_t;


extern void EncodeBandCombinationList(
	BandCombinationList_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeBandCombinationList(
	BandCombinationList_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
