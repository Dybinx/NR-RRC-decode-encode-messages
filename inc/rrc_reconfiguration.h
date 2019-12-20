/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * rrc_reconfiguration.h - this is the header file for message: RRCReconfiguration
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _RRC_RECONFIGURATION_H_
#define _RRC_RECONFIGURATION_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "rrc_transaction_identifier.h"
#include "rrc_reconfiguration_i_es.h"


typedef struct {
	uint32                                                             dummy;
}RRCReconfiguration_criticalExtensionsFuture_t;


typedef enum {
	RRCRECONFIGURATION_CRITICALEXTENSIONS_RRCRECONFIGURATION,
	RRCRECONFIGURATION_CRITICALEXTENSIONS_CRITICALEXTENSIONSFUTURE,
	RRCRECONFIGURATION_CRITICALEXTENSIONS_max = 0x7FFFFFFF
}RRCReconfiguration_criticalExtensions_e;


/* union corresponding asn: RRCReconfiguration_criticalExtensions */
typedef union {
	RRCReconfiguration_IEs_t                                           rrcReconfiguration;
	RRCReconfiguration_criticalExtensionsFuture_t                      criticalExtensionsFuture;
}RRCReconfiguration_criticalExtensions_u;


/* struct corresponding asn: RRCReconfiguration_criticalExtensions */
typedef struct {
	RRCReconfiguration_criticalExtensions_e                            type;
	RRCReconfiguration_criticalExtensions_u                            a;
}RRCReconfiguration_criticalExtensions_t;


typedef struct {
	RRC_TransactionIdentifier_t                                        rrc_TransactionIdentifier;
	RRCReconfiguration_criticalExtensions_t                            criticalExtensions;
}RRCReconfiguration_t;


extern void EncodeRRCReconfiguration(
	RRCReconfiguration_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeRRCReconfiguration(
	RRCReconfiguration_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
