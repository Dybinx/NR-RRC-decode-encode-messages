/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * srs_tx_switch.h - this is the header file for message: SRS-TxSwitch
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _SRS_TX_SWITCH_H_
#define _SRS_TX_SWITCH_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	SRS_TXSWITCH_SUPPORTEDSRS_TXPORTSWITCH_T1R2,
	SRS_TXSWITCH_SUPPORTEDSRS_TXPORTSWITCH_T1R4,
	SRS_TXSWITCH_SUPPORTEDSRS_TXPORTSWITCH_T2R4,
	SRS_TXSWITCH_SUPPORTEDSRS_TXPORTSWITCH_T1R4_T2R4,
	SRS_TXSWITCH_SUPPORTEDSRS_TXPORTSWITCH_TR_EQUAL,
	SRS_TXSWITCH_SUPPORTEDSRS_TXPORTSWITCH_max = 0x7FFFFFFF
}SRS_TxSwitch_supportedSRS_TxPortSwitch_e;


typedef enum {
	SRS_TXSWITCH_TXSWITCHIMPACTTORX_TRUE,
	SRS_TXSWITCH_TXSWITCHIMPACTTORX_max = 0x7FFFFFFF
}SRS_TxSwitch_txSwitchImpactToRx_e;


typedef struct {
	SRS_TxSwitch_supportedSRS_TxPortSwitch_e                           supportedSRS_TxPortSwitch;
	BOOLEAN                                                            txSwitchImpactToRx_exist;
	SRS_TxSwitch_txSwitchImpactToRx_e                                  txSwitchImpactToRx;
}SRS_TxSwitch_t;


extern void EncodeSRS_TxSwitch(
	SRS_TxSwitch_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeSRS_TxSwitch(
	SRS_TxSwitch_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
