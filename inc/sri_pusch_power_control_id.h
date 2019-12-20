/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * sri_pusch_power_control_id.h - this is the header file for message: SRI-PUSCH-PowerControlId
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _SRI_PUSCH_POWER_CONTROL_ID_H_
#define _SRI_PUSCH_POWER_CONTROL_ID_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef struct {
	uint32                                                             value;
}SRI_PUSCH_PowerControlId_t;
extern void EncodeSRI_PUSCH_PowerControlId(
	SRI_PUSCH_PowerControlId_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeSRI_PUSCH_PowerControlId(
	SRI_PUSCH_PowerControlId_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
