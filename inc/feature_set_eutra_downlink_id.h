/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * feature_set_eutra_downlink_id.h - this is the header file for message: FeatureSetEUTRA-DownlinkId
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _FEATURE_SET_EUTRA_DOWNLINK_ID_H_
#define _FEATURE_SET_EUTRA_DOWNLINK_ID_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef struct {
	uint32                                                             value;
}FeatureSetEUTRA_DownlinkId_t;
extern void EncodeFeatureSetEUTRA_DownlinkId(
	FeatureSetEUTRA_DownlinkId_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeFeatureSetEUTRA_DownlinkId(
	FeatureSetEUTRA_DownlinkId_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
