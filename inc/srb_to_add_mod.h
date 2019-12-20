/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * srb_to_add_mod.h - this is the header file for message: SRB-ToAddMod
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _SRB_TO_ADD_MOD_H_
#define _SRB_TO_ADD_MOD_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "srb_identity.h"
#include "pdcp_config.h"


typedef enum {
	SRB_TOADDMOD_REESTABLISHPDCP_TRUE,
	SRB_TOADDMOD_REESTABLISHPDCP_max = 0x7FFFFFFF
}SRB_ToAddMod_reestablishPDCP_e;


typedef enum {
	SRB_TOADDMOD_DISCARDONPDCP_TRUE,
	SRB_TOADDMOD_DISCARDONPDCP_max = 0x7FFFFFFF
}SRB_ToAddMod_discardOnPDCP_e;


typedef struct {
	SRB_Identity_t                                                     srb_Identity;
	BOOLEAN                                                            reestablishPDCP_exist;
	SRB_ToAddMod_reestablishPDCP_e                                     reestablishPDCP;
	BOOLEAN                                                            discardOnPDCP_exist;
	SRB_ToAddMod_discardOnPDCP_e                                       discardOnPDCP;
	BOOLEAN                                                            pdcp_Config_exist;
	PDCP_Config_t                                                      pdcp_Config;
	/* Extension marker start. */
}SRB_ToAddMod_t;


extern void EncodeSRB_ToAddMod(
	SRB_ToAddMod_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeSRB_ToAddMod(
	SRB_ToAddMod_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
