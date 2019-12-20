/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * csi_frequency_occupation.h - this is the header file for message: CSI-FrequencyOccupation
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _CSI_FREQUENCY_OCCUPATION_H_
#define _CSI_FREQUENCY_OCCUPATION_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef struct {
	uint32                                                             startingRB;
	uint32                                                             nrofRBs;
	/* Extension marker start. */
}CSI_FrequencyOccupation_t;


extern void EncodeCSI_FrequencyOccupation(
	CSI_FrequencyOccupation_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeCSI_FrequencyOccupation(
	CSI_FrequencyOccupation_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
