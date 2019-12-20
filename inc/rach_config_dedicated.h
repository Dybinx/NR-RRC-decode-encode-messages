/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * rach_config_dedicated.h - this is the header file for message: RACH-ConfigDedicated
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _RACH_CONFIG_DEDICATED_H_
#define _RACH_CONFIG_DEDICATED_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "cfra.h"
#include "ra_prioritization.h"


typedef struct {
	BOOLEAN                                                            cfra_exist;
	CFRA_t                                                             cfra;
	BOOLEAN                                                            ra_Prioritization_exist;
	RA_Prioritization_t                                                ra_Prioritization;
	/* Extension marker start. */
}RACH_ConfigDedicated_t;


extern void EncodeRACH_ConfigDedicated(
	RACH_ConfigDedicated_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeRACH_ConfigDedicated(
	RACH_ConfigDedicated_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
