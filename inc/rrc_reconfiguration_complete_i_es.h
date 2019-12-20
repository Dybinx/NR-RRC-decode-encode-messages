/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * rrc_reconfiguration_complete_i_es.h - this is the header file for message: RRCReconfigurationComplete-IEs
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _RRC_RECONFIGURATION_COMPLETE_I_ES_H_
#define _RRC_RECONFIGURATION_COMPLETE_I_ES_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


/* ASN: OCTET STRING */
typedef struct {
	uint32                                                             octets_num;
	uint8                                                              *value;
}RRCReconfigurationComplete_IEs_lateNonCriticalExtension_t;
typedef struct {
	uint32                                                             dummy;
}RRCReconfigurationComplete_IEs_nonCriticalExtension_t;


typedef struct {
	BOOLEAN                                                            lateNonCriticalExtension_exist;
	RRCReconfigurationComplete_IEs_lateNonCriticalExtension_t          lateNonCriticalExtension;
	BOOLEAN                                                            nonCriticalExtension_exist;
	RRCReconfigurationComplete_IEs_nonCriticalExtension_t              nonCriticalExtension;
}RRCReconfigurationComplete_IEs_t;


extern void EncodeRRCReconfigurationComplete_IEs(
	RRCReconfigurationComplete_IEs_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeRRCReconfigurationComplete_IEs(
	RRCReconfigurationComplete_IEs_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
