/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * beta_offsets.h - this is the header file for message: BetaOffsets
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _BETA_OFFSETS_H_
#define _BETA_OFFSETS_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef struct {
	BOOLEAN                                                            betaOffsetACK_Index1_exist;
	uint32                                                             betaOffsetACK_Index1;
	BOOLEAN                                                            betaOffsetACK_Index2_exist;
	uint32                                                             betaOffsetACK_Index2;
	BOOLEAN                                                            betaOffsetACK_Index3_exist;
	uint32                                                             betaOffsetACK_Index3;
	BOOLEAN                                                            betaOffsetCSI_Part1_Index1_exist;
	uint32                                                             betaOffsetCSI_Part1_Index1;
	BOOLEAN                                                            betaOffsetCSI_Part1_Index2_exist;
	uint32                                                             betaOffsetCSI_Part1_Index2;
	BOOLEAN                                                            betaOffsetCSI_Part2_Index1_exist;
	uint32                                                             betaOffsetCSI_Part2_Index1;
	BOOLEAN                                                            betaOffsetCSI_Part2_Index2_exist;
	uint32                                                             betaOffsetCSI_Part2_Index2;
}BetaOffsets_t;


extern void EncodeBetaOffsets(
	BetaOffsets_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeBetaOffsets(
	BetaOffsets_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
