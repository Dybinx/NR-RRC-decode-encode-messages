/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * scs_specific_carrier.h - this is the header file for message: SCS-SpecificCarrier
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _SCS_SPECIFIC_CARRIER_H_
#define _SCS_SPECIFIC_CARRIER_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "subcarrier_spacing.h"


typedef struct {
	uint32                                                             offsetToCarrier;
	SubcarrierSpacing_e                                                subcarrierSpacing;
	uint32                                                             carrierBandwidth;
	/* Extension marker start. */
}SCS_SpecificCarrier_t;


extern void EncodeSCS_SpecificCarrier(
	SCS_SpecificCarrier_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeSCS_SpecificCarrier(
	SCS_SpecificCarrier_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
