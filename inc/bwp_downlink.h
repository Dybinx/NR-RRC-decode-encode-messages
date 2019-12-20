/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * bwp_downlink.h - this is the header file for message: BWP-Downlink
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _BWP_DOWNLINK_H_
#define _BWP_DOWNLINK_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "bwp_id.h"
#include "bwp_downlink_common.h"
#include "bwp_downlink_dedicated.h"


typedef struct {
	BWP_Id_t                                                           bwp_Id;
	BOOLEAN                                                            bwp_Common_exist;
	BWP_DownlinkCommon_t                                               bwp_Common;
	BOOLEAN                                                            bwp_Dedicated_exist;
	BWP_DownlinkDedicated_t                                            bwp_Dedicated;
	/* Extension marker start. */
}BWP_Downlink_t;


extern void EncodeBWP_Downlink(
	BWP_Downlink_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeBWP_Downlink(
	BWP_Downlink_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
