/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pdsch_serving_cell_config.h - this is the header file for message: PDSCH-ServingCellConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _PDSCH_SERVING_CELL_CONFIG_H_
#define _PDSCH_SERVING_CELL_CONFIG_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "pdsch_code_block_group_transmission.h"
#include "serv_cell_index.h"


typedef struct {
	uint32                                                             dummy;
}PDSCH_ServingCellConfig_release_t;


typedef enum {
	PDSCH_SERVINGCELLCONFIG_CODEBLOCKGROUPTRANSMISSION_RELEASE,
	PDSCH_SERVINGCELLCONFIG_CODEBLOCKGROUPTRANSMISSION_SETUP,
	PDSCH_SERVINGCELLCONFIG_CODEBLOCKGROUPTRANSMISSION_max = 0x7FFFFFFF
}PDSCH_ServingCellConfig_codeBlockGroupTransmission_e;


/* union corresponding asn: PDSCH_ServingCellConfig_codeBlockGroupTransmission */
typedef union {
	PDSCH_ServingCellConfig_release_t                                  release;
	PDSCH_CodeBlockGroupTransmission_t                                 setup;
}PDSCH_ServingCellConfig_codeBlockGroupTransmission_u;


/* struct corresponding asn: PDSCH_ServingCellConfig_codeBlockGroupTransmission */
typedef struct {
	PDSCH_ServingCellConfig_codeBlockGroupTransmission_e               type;
	PDSCH_ServingCellConfig_codeBlockGroupTransmission_u               a;
}PDSCH_ServingCellConfig_codeBlockGroupTransmission_t;


typedef enum {
	PDSCH_SERVINGCELLCONFIG_XOVERHEAD_XOH6,
	PDSCH_SERVINGCELLCONFIG_XOVERHEAD_XOH12,
	PDSCH_SERVINGCELLCONFIG_XOVERHEAD_XOH18,
	PDSCH_SERVINGCELLCONFIG_XOVERHEAD_max = 0x7FFFFFFF
}PDSCH_ServingCellConfig_xOverhead_e;


typedef enum {
	PDSCH_SERVINGCELLCONFIG_NROFHARQ_PROCESSESFORPDSCH_N2,
	PDSCH_SERVINGCELLCONFIG_NROFHARQ_PROCESSESFORPDSCH_N4,
	PDSCH_SERVINGCELLCONFIG_NROFHARQ_PROCESSESFORPDSCH_N6,
	PDSCH_SERVINGCELLCONFIG_NROFHARQ_PROCESSESFORPDSCH_N10,
	PDSCH_SERVINGCELLCONFIG_NROFHARQ_PROCESSESFORPDSCH_N12,
	PDSCH_SERVINGCELLCONFIG_NROFHARQ_PROCESSESFORPDSCH_N16,
	PDSCH_SERVINGCELLCONFIG_NROFHARQ_PROCESSESFORPDSCH_max = 0x7FFFFFFF
}PDSCH_ServingCellConfig_nrofHARQ_ProcessesForPDSCH_e;


typedef struct {
	BOOLEAN                                                            codeBlockGroupTransmission_exist;
	PDSCH_ServingCellConfig_codeBlockGroupTransmission_t               codeBlockGroupTransmission;
	BOOLEAN                                                            xOverhead_exist;
	PDSCH_ServingCellConfig_xOverhead_e                                xOverhead;
	BOOLEAN                                                            nrofHARQ_ProcessesForPDSCH_exist;
	PDSCH_ServingCellConfig_nrofHARQ_ProcessesForPDSCH_e               nrofHARQ_ProcessesForPDSCH;
	BOOLEAN                                                            pucch_Cell_exist;
	ServCellIndex_t                                                    pucch_Cell;
	/* Extension marker start. */
}PDSCH_ServingCellConfig_t;


extern void EncodePDSCH_ServingCellConfig(
	PDSCH_ServingCellConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodePDSCH_ServingCellConfig(
	PDSCH_ServingCellConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
