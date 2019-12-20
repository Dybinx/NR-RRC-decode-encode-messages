/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * feature_set_eutra_uplink_id.h - this is the header file for message: FeatureSetEUTRA-UplinkId
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _FEATURE_SET_EUTRA_UPLINK_ID_H_
#define _FEATURE_SET_EUTRA_UPLINK_ID_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef struct {
	uint32                                                             value;
}FeatureSetEUTRA_UplinkId_t;
extern void EncodeFeatureSetEUTRA_UplinkId(
	FeatureSetEUTRA_UplinkId_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeFeatureSetEUTRA_UplinkId(
	FeatureSetEUTRA_UplinkId_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif