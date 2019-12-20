/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * rate_match_pattern_group.h - this is the header file for message: RateMatchPatternGroup
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _RATE_MATCH_PATTERN_GROUP_H_
#define _RATE_MATCH_PATTERN_GROUP_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "rate_match_pattern_id.h"
#include "rate_match_pattern_id.h"


typedef enum {
	RATEMATCHPATTERNGROUP_1_CELLLEVEL,
	RATEMATCHPATTERNGROUP_1_BWPLEVEL,
	RATEMATCHPATTERNGROUP_1_max = 0x7FFFFFFF
}RateMatchPatternGroup_1_e;


/* union corresponding asn: RateMatchPatternGroup_1 */
typedef union {
	RateMatchPatternId_t                                               cellLevel;
	RateMatchPatternId_t                                               bwpLevel;
}RateMatchPatternGroup_1_u;


/* struct corresponding asn: RateMatchPatternGroup_1 */
typedef struct {
	RateMatchPatternGroup_1_e                                          type;
	RateMatchPatternGroup_1_u                                          a;
}RateMatchPatternGroup_1_t;


typedef struct {
	uint32                                                             length;
	RateMatchPatternGroup_1_t                                          elm[maxNrofRateMatchPatternsPerGroup];
}RateMatchPatternGroup_t;


extern void EncodeRateMatchPatternGroup(
	RateMatchPatternGroup_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeRateMatchPatternGroup(
	RateMatchPatternGroup_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
