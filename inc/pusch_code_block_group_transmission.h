/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pusch_code_block_group_transmission.h - this is the header file for message: PUSCH-CodeBlockGroupTransmission
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _PUSCH_CODE_BLOCK_GROUP_TRANSMISSION_H_
#define _PUSCH_CODE_BLOCK_GROUP_TRANSMISSION_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	PUSCH_CODEBLOCKGROUPTRANSMISSION_MAXCODEBLOCKGROUPSPERTRANSPORTBLOCK_N2,
	PUSCH_CODEBLOCKGROUPTRANSMISSION_MAXCODEBLOCKGROUPSPERTRANSPORTBLOCK_N4,
	PUSCH_CODEBLOCKGROUPTRANSMISSION_MAXCODEBLOCKGROUPSPERTRANSPORTBLOCK_N6,
	PUSCH_CODEBLOCKGROUPTRANSMISSION_MAXCODEBLOCKGROUPSPERTRANSPORTBLOCK_N8,
	PUSCH_CODEBLOCKGROUPTRANSMISSION_MAXCODEBLOCKGROUPSPERTRANSPORTBLOCK_max = 0x7FFFFFFF
}PUSCH_CodeBlockGroupTransmission_maxCodeBlockGroupsPerTransportBlock_e;


typedef struct {
	PUSCH_CodeBlockGroupTransmission_maxCodeBlockGroupsPerTransportBlock_e    maxCodeBlockGroupsPerTransportBlock;
	/* Extension marker start. */
}PUSCH_CodeBlockGroupTransmission_t;


extern void EncodePUSCH_CodeBlockGroupTransmission(
	PUSCH_CodeBlockGroupTransmission_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodePUSCH_CodeBlockGroupTransmission(
	PUSCH_CodeBlockGroupTransmission_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
