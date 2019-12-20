/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * sdap_config.h - this is the header file for message: SDAP-Config
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _SDAP_CONFIG_H_
#define _SDAP_CONFIG_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "pdu_session_id.h"
#include "qfi.h"
#include "qfi.h"


typedef enum {
	SDAP_CONFIG_SDAP_HEADERDL_PRESENT,
	SDAP_CONFIG_SDAP_HEADERDL_ABSENT,
	SDAP_CONFIG_SDAP_HEADERDL_max = 0x7FFFFFFF
}SDAP_Config_sdap_HeaderDL_e;


typedef enum {
	SDAP_CONFIG_SDAP_HEADERUL_PRESENT,
	SDAP_CONFIG_SDAP_HEADERUL_ABSENT,
	SDAP_CONFIG_SDAP_HEADERUL_max = 0x7FFFFFFF
}SDAP_Config_sdap_HeaderUL_e;


typedef struct {
	uint32                                                             length;
	QFI_t                                                              elm[maxNrofQFIs];
}SDAP_Config_mappedQoS_FlowsToAdd_t;


typedef struct {
	uint32                                                             length;
	QFI_t                                                              elm[maxNrofQFIs];
}SDAP_Config_mappedQoS_FlowsToRelease_t;


typedef struct {
	PDU_SessionID_t                                                    pdu_Session;
	SDAP_Config_sdap_HeaderDL_e                                        sdap_HeaderDL;
	SDAP_Config_sdap_HeaderUL_e                                        sdap_HeaderUL;
	BOOLEAN                                                            defaultDRB;
	BOOLEAN                                                            mappedQoS_FlowsToAdd_exist;
	SDAP_Config_mappedQoS_FlowsToAdd_t                                 mappedQoS_FlowsToAdd;
	BOOLEAN                                                            mappedQoS_FlowsToRelease_exist;
	SDAP_Config_mappedQoS_FlowsToRelease_t                             mappedQoS_FlowsToRelease;
	/* Extension marker start. */
}SDAP_Config_t;


extern void EncodeSDAP_Config(
	SDAP_Config_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeSDAP_Config(
	SDAP_Config_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
