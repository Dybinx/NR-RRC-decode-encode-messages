/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pdsch_code_block_group_transmission.h - this is the header file for message: PDSCH-CodeBlockGroupTransmission
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _PDSCH_CODE_BLOCK_GROUP_TRANSMISSION_H_
#define _PDSCH_CODE_BLOCK_GROUP_TRANSMISSION_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	PDSCH_CODEBLOCKGROUPTRANSMISSION_MAXCODEBLOCKGROUPSPERTRANSPORTBLOCK_N2,
	PDSCH_CODEBLOCKGROUPTRANSMISSION_MAXCODEBLOCKGROUPSPERTRANSPORTBLOCK_N4,
	PDSCH_CODEBLOCKGROUPTRANSMISSION_MAXCODEBLOCKGROUPSPERTRANSPORTBLOCK_N6,
	PDSCH_CODEBLOCKGROUPTRANSMISSION_MAXCODEBLOCKGROUPSPERTRANSPORTBLOCK_N8,
	PDSCH_CODEBLOCKGROUPTRANSMISSION_MAXCODEBLOCKGROUPSPERTRANSPORTBLOCK_max = 0x7FFFFFFF
}PDSCH_CodeBlockGroupTransmission_maxCodeBlockGroupsPerTransportBlock_e;


typedef struct {
	PDSCH_CodeBlockGroupTransmission_maxCodeBlockGroupsPerTransportBlock_e    maxCodeBlockGroupsPerTransportBlock;
	BOOLEAN                                                            codeBlockGroupFlushIndicator;
	/* Extension marker start. */
}PDSCH_CodeBlockGroupTransmission_t;


extern void EncodePDSCH_CodeBlockGroupTransmission(
	PDSCH_CodeBlockGroupTransmission_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodePDSCH_CodeBlockGroupTransmission(
	PDSCH_CodeBlockGroupTransmission_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
