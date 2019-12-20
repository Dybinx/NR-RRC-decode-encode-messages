/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * drb_to_add_mod.h - this is the header file for message: DRB-ToAddMod
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _DRB_TO_ADD_MOD_H_
#define _DRB_TO_ADD_MOD_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "sdap_config.h"
#include "drb_identity.h"
#include "pdcp_config.h"


typedef enum {
	DRB_TOADDMOD_CNASSOCIATION_EPS_BEARERIDENTITY,
	DRB_TOADDMOD_CNASSOCIATION_SDAP_CONFIG,
	DRB_TOADDMOD_CNASSOCIATION_max = 0x7FFFFFFF
}DRB_ToAddMod_cnAssociation_e;


/* union corresponding asn: DRB_ToAddMod_cnAssociation */
typedef union {
	uint32                                                             eps_BearerIdentity;
	SDAP_Config_t                                                      sdap_Config;
}DRB_ToAddMod_cnAssociation_u;


/* struct corresponding asn: DRB_ToAddMod_cnAssociation */
typedef struct {
	DRB_ToAddMod_cnAssociation_e                                       type;
	DRB_ToAddMod_cnAssociation_u                                       a;
}DRB_ToAddMod_cnAssociation_t;


typedef enum {
	DRB_TOADDMOD_REESTABLISHPDCP_TRUE,
	DRB_TOADDMOD_REESTABLISHPDCP_max = 0x7FFFFFFF
}DRB_ToAddMod_reestablishPDCP_e;


typedef enum {
	DRB_TOADDMOD_RECOVERPDCP_TRUE,
	DRB_TOADDMOD_RECOVERPDCP_max = 0x7FFFFFFF
}DRB_ToAddMod_recoverPDCP_e;


typedef struct {
	BOOLEAN                                                            cnAssociation_exist;
	DRB_ToAddMod_cnAssociation_t                                       cnAssociation;
	DRB_Identity_t                                                     drb_Identity;
	BOOLEAN                                                            reestablishPDCP_exist;
	DRB_ToAddMod_reestablishPDCP_e                                     reestablishPDCP;
	BOOLEAN                                                            recoverPDCP_exist;
	DRB_ToAddMod_recoverPDCP_e                                         recoverPDCP;
	BOOLEAN                                                            pdcp_Config_exist;
	PDCP_Config_t                                                      pdcp_Config;
	/* Extension marker start. */
}DRB_ToAddMod_t;


extern void EncodeDRB_ToAddMod(
	DRB_ToAddMod_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeDRB_ToAddMod(
	DRB_ToAddMod_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
