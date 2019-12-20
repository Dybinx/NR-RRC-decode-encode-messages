/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * rate_match_pattern.h - this is the header file for message: RateMatchPattern
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _RATE_MATCH_PATTERN_H_
#define _RATE_MATCH_PATTERN_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "rate_match_pattern_id.h"
#include "control_resource_set_id.h"
#include "subcarrier_spacing.h"


/* struct corresponding asn: RateMatchPattern_resourceBlocks */
/* ASN: BIT STRING SIZE(275) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[35];
}RateMatchPattern_resourceBlocks_t;


/* struct corresponding asn: RateMatchPattern_oneSlot */
/* ASN: BIT STRING SIZE(14) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[2];
}RateMatchPattern_oneSlot_t;


/* struct corresponding asn: RateMatchPattern_twoSlots */
/* ASN: BIT STRING SIZE(28) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[4];
}RateMatchPattern_twoSlots_t;


typedef enum {
	RATEMATCHPATTERN_SYMBOLSINRESOURCEBLOCK_ONESLOT,
	RATEMATCHPATTERN_SYMBOLSINRESOURCEBLOCK_TWOSLOTS,
	RATEMATCHPATTERN_SYMBOLSINRESOURCEBLOCK_max = 0x7FFFFFFF
}RateMatchPattern_symbolsInResourceBlock_e;


/* union corresponding asn: RateMatchPattern_symbolsInResourceBlock */
typedef union {
	RateMatchPattern_oneSlot_t                                         oneSlot;
	RateMatchPattern_twoSlots_t                                        twoSlots;
}RateMatchPattern_symbolsInResourceBlock_u;


/* struct corresponding asn: RateMatchPattern_symbolsInResourceBlock */
typedef struct {
	RateMatchPattern_symbolsInResourceBlock_e                          type;
	RateMatchPattern_symbolsInResourceBlock_u                          a;
}RateMatchPattern_symbolsInResourceBlock_t;


/* struct corresponding asn: RateMatchPattern_n2 */
/* ASN: BIT STRING SIZE(2) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[1];
}RateMatchPattern_n2_t;


/* struct corresponding asn: RateMatchPattern_n4 */
/* ASN: BIT STRING SIZE(4) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[1];
}RateMatchPattern_n4_t;


/* struct corresponding asn: RateMatchPattern_n5 */
/* ASN: BIT STRING SIZE(5) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[1];
}RateMatchPattern_n5_t;


/* struct corresponding asn: RateMatchPattern_n8 */
/* ASN: BIT STRING SIZE(8) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[1];
}RateMatchPattern_n8_t;


/* struct corresponding asn: RateMatchPattern_n10 */
/* ASN: BIT STRING SIZE(10) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[2];
}RateMatchPattern_n10_t;


/* struct corresponding asn: RateMatchPattern_n20 */
/* ASN: BIT STRING SIZE(20) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[3];
}RateMatchPattern_n20_t;


/* struct corresponding asn: RateMatchPattern_n40 */
/* ASN: BIT STRING SIZE(40) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[5];
}RateMatchPattern_n40_t;


typedef enum {
	RATEMATCHPATTERN_PERIODICITYANDPATTERN_N2,
	RATEMATCHPATTERN_PERIODICITYANDPATTERN_N4,
	RATEMATCHPATTERN_PERIODICITYANDPATTERN_N5,
	RATEMATCHPATTERN_PERIODICITYANDPATTERN_N8,
	RATEMATCHPATTERN_PERIODICITYANDPATTERN_N10,
	RATEMATCHPATTERN_PERIODICITYANDPATTERN_N20,
	RATEMATCHPATTERN_PERIODICITYANDPATTERN_N40,
	RATEMATCHPATTERN_PERIODICITYANDPATTERN_max = 0x7FFFFFFF
}RateMatchPattern_periodicityAndPattern_e;


/* union corresponding asn: RateMatchPattern_periodicityAndPattern */
typedef union {
	RateMatchPattern_n2_t                                              n2;
	RateMatchPattern_n4_t                                              n4;
	RateMatchPattern_n5_t                                              n5;
	RateMatchPattern_n8_t                                              n8;
	RateMatchPattern_n10_t                                             n10;
	RateMatchPattern_n20_t                                             n20;
	RateMatchPattern_n40_t                                             n40;
}RateMatchPattern_periodicityAndPattern_u;


/* struct corresponding asn: RateMatchPattern_periodicityAndPattern */
typedef struct {
	RateMatchPattern_periodicityAndPattern_e                           type;
	RateMatchPattern_periodicityAndPattern_u                           a;
}RateMatchPattern_periodicityAndPattern_t;


typedef struct {
	RateMatchPattern_resourceBlocks_t                                  resourceBlocks;
	RateMatchPattern_symbolsInResourceBlock_t                          symbolsInResourceBlock;
	BOOLEAN                                                            periodicityAndPattern_exist;
	RateMatchPattern_periodicityAndPattern_t                           periodicityAndPattern;
	/* Extension marker start. */
}RateMatchPattern_bitmaps_t;


typedef enum {
	RATEMATCHPATTERN_PATTERNTYPE_BITMAPS,
	RATEMATCHPATTERN_PATTERNTYPE_CONTROLRESOURCESET,
	RATEMATCHPATTERN_PATTERNTYPE_max = 0x7FFFFFFF
}RateMatchPattern_patternType_e;


/* union corresponding asn: RateMatchPattern_patternType */
typedef union {
	RateMatchPattern_bitmaps_t                                         bitmaps;
	ControlResourceSetId_t                                             controlResourceSet;
}RateMatchPattern_patternType_u;


/* struct corresponding asn: RateMatchPattern_patternType */
typedef struct {
	RateMatchPattern_patternType_e                                     type;
	RateMatchPattern_patternType_u                                     a;
}RateMatchPattern_patternType_t;


typedef enum {
	RATEMATCHPATTERN_MODE_DYNAMIC,
	RATEMATCHPATTERN_MODE_SEMISTATIC,
	RATEMATCHPATTERN_MODE_max = 0x7FFFFFFF
}RateMatchPattern_mode_e;


typedef struct {
	RateMatchPatternId_t                                               rateMatchPatternId;
	RateMatchPattern_patternType_t                                     patternType;
	BOOLEAN                                                            subcarrierSpacing_exist;
	SubcarrierSpacing_e                                                subcarrierSpacing;
	RateMatchPattern_mode_e                                            mode;
	/* Extension marker start. */
}RateMatchPattern_t;


extern void EncodeRateMatchPattern(
	RateMatchPattern_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeRateMatchPattern(
	RateMatchPattern_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
