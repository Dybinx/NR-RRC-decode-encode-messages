/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * rrc_reconfiguration_i_es.h - this is the header file for message: RRCReconfiguration-IEs
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _RRC_RECONFIGURATION_I_ES_H_
#define _RRC_RECONFIGURATION_I_ES_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "radio_bearer_config.h"
#include "meas_config.h"


/* ASN: OCTET STRING */
typedef struct {
	uint32                                                             octets_num;
	uint8                                                              *value;
}RRCReconfiguration_IEs_secondaryCellGroup_t;
/* ASN: OCTET STRING */
typedef struct {
	uint32                                                             octets_num;
	uint8                                                              *value;
}RRCReconfiguration_IEs_lateNonCriticalExtension_t;
typedef struct {
	uint32                                                             dummy;
}RRCReconfiguration_IEs_nonCriticalExtension_t;


typedef struct {
	BOOLEAN                                                            radioBearerConfig_exist;
	RadioBearerConfig_t                                                radioBearerConfig;
	BOOLEAN                                                            secondaryCellGroup_exist;
	RRCReconfiguration_IEs_secondaryCellGroup_t                        secondaryCellGroup;
	BOOLEAN                                                            measConfig_exist;
	MeasConfig_t                                                       measConfig;
	BOOLEAN                                                            lateNonCriticalExtension_exist;
	RRCReconfiguration_IEs_lateNonCriticalExtension_t                  lateNonCriticalExtension;
	BOOLEAN                                                            nonCriticalExtension_exist;
	RRCReconfiguration_IEs_nonCriticalExtension_t                      nonCriticalExtension;
}RRCReconfiguration_IEs_t;


extern void EncodeRRCReconfiguration_IEs(
	RRCReconfiguration_IEs_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeRRCReconfiguration_IEs(
	RRCReconfiguration_IEs_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
