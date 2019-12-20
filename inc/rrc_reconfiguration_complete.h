/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * rrc_reconfiguration_complete.h - this is the header file for message: RRCReconfigurationComplete
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _RRC_RECONFIGURATION_COMPLETE_H_
#define _RRC_RECONFIGURATION_COMPLETE_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "rrc_transaction_identifier.h"
#include "rrc_reconfiguration_complete_i_es.h"


typedef struct {
	uint32                                                             dummy;
}RRCReconfigurationComplete_criticalExtensionsFuture_t;


typedef enum {
	RRCRECONFIGURATIONCOMPLETE_CRITICALEXTENSIONS_RRCRECONFIGURATIONCOMPLETE,
	RRCRECONFIGURATIONCOMPLETE_CRITICALEXTENSIONS_CRITICALEXTENSIONSFUTURE,
	RRCRECONFIGURATIONCOMPLETE_CRITICALEXTENSIONS_max = 0x7FFFFFFF
}RRCReconfigurationComplete_criticalExtensions_e;


/* union corresponding asn: RRCReconfigurationComplete_criticalExtensions */
typedef union {
	RRCReconfigurationComplete_IEs_t                                   rrcReconfigurationComplete;
	RRCReconfigurationComplete_criticalExtensionsFuture_t              criticalExtensionsFuture;
}RRCReconfigurationComplete_criticalExtensions_u;


/* struct corresponding asn: RRCReconfigurationComplete_criticalExtensions */
typedef struct {
	RRCReconfigurationComplete_criticalExtensions_e                    type;
	RRCReconfigurationComplete_criticalExtensions_u                    a;
}RRCReconfigurationComplete_criticalExtensions_t;


typedef struct {
	RRC_TransactionIdentifier_t                                        rrc_TransactionIdentifier;
	RRCReconfigurationComplete_criticalExtensions_t                    criticalExtensions;
}RRCReconfigurationComplete_t;


extern void EncodeRRCReconfigurationComplete(
	RRCReconfigurationComplete_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeRRCReconfigurationComplete(
	RRCReconfigurationComplete_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
