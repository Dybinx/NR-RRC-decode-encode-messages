/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * aggregated_bandwith.h - this is the header file for message: AggregatedBandwith
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _AGGREGATED_BANDWITH_H_
#define _AGGREGATED_BANDWITH_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	AGGREGATEDBANDWITH_MHZ50,
	AGGREGATEDBANDWITH_MHZ100,
	AGGREGATEDBANDWITH_MHZ150,
	AGGREGATEDBANDWITH_MHZ200,
	AGGREGATEDBANDWITH_MHZ250,
	AGGREGATEDBANDWITH_MHZ300,
	AGGREGATEDBANDWITH_MHZ350,
	AGGREGATEDBANDWITH_MHZ400,
	AGGREGATEDBANDWITH_MHZ450,
	AGGREGATEDBANDWITH_MHZ500,
	AGGREGATEDBANDWITH_MHZ550,
	AGGREGATEDBANDWITH_MHZ600,
	AGGREGATEDBANDWITH_MHZ650,
	AGGREGATEDBANDWITH_MHZ700,
	AGGREGATEDBANDWITH_MHZ750,
	AGGREGATEDBANDWITH_MHZ800,
	AGGREGATEDBANDWITH_max = 0x7FFFFFFF
}AggregatedBandwith_e;


extern void EncodeAggregatedBandwith(
	AggregatedBandwith_e i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeAggregatedBandwith(
	AggregatedBandwith_e *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
