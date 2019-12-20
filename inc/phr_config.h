/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * phr_config.h - this is the header file for message: PHR-Config
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _PHR_CONFIG_H_
#define _PHR_CONFIG_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	PHR_CONFIG_PHR_PERIODICTIMER_SF10,
	PHR_CONFIG_PHR_PERIODICTIMER_SF20,
	PHR_CONFIG_PHR_PERIODICTIMER_SF50,
	PHR_CONFIG_PHR_PERIODICTIMER_SF100,
	PHR_CONFIG_PHR_PERIODICTIMER_SF200,
	PHR_CONFIG_PHR_PERIODICTIMER_SF500,
	PHR_CONFIG_PHR_PERIODICTIMER_SF1000,
	PHR_CONFIG_PHR_PERIODICTIMER_INFINITY,
	PHR_CONFIG_PHR_PERIODICTIMER_max = 0x7FFFFFFF
}PHR_Config_phr_PeriodicTimer_e;


typedef enum {
	PHR_CONFIG_PHR_PROHIBITTIMER_SF0,
	PHR_CONFIG_PHR_PROHIBITTIMER_SF10,
	PHR_CONFIG_PHR_PROHIBITTIMER_SF20,
	PHR_CONFIG_PHR_PROHIBITTIMER_SF50,
	PHR_CONFIG_PHR_PROHIBITTIMER_SF100,
	PHR_CONFIG_PHR_PROHIBITTIMER_SF200,
	PHR_CONFIG_PHR_PROHIBITTIMER_SF500,
	PHR_CONFIG_PHR_PROHIBITTIMER_SF1000,
	PHR_CONFIG_PHR_PROHIBITTIMER_max = 0x7FFFFFFF
}PHR_Config_phr_ProhibitTimer_e;


typedef enum {
	PHR_CONFIG_PHR_TX_POWERFACTORCHANGE_DB1,
	PHR_CONFIG_PHR_TX_POWERFACTORCHANGE_DB3,
	PHR_CONFIG_PHR_TX_POWERFACTORCHANGE_DB6,
	PHR_CONFIG_PHR_TX_POWERFACTORCHANGE_INFINITY,
	PHR_CONFIG_PHR_TX_POWERFACTORCHANGE_max = 0x7FFFFFFF
}PHR_Config_phr_Tx_PowerFactorChange_e;


typedef enum {
	PHR_CONFIG_PHR_MODEOTHERCG_REAL,
	PHR_CONFIG_PHR_MODEOTHERCG_VIRTUAL,
	PHR_CONFIG_PHR_MODEOTHERCG_max = 0x7FFFFFFF
}PHR_Config_phr_ModeOtherCG_e;


typedef struct {
	PHR_Config_phr_PeriodicTimer_e                                     phr_PeriodicTimer;
	PHR_Config_phr_ProhibitTimer_e                                     phr_ProhibitTimer;
	PHR_Config_phr_Tx_PowerFactorChange_e                              phr_Tx_PowerFactorChange;
	BOOLEAN                                                            multiplePHR;
	BOOLEAN                                                            phr_Type2SpCell;
	BOOLEAN                                                            phr_Type2OtherCell;
	PHR_Config_phr_ModeOtherCG_e                                       phr_ModeOtherCG;
	/* Extension marker start. */
}PHR_Config_t;


extern void EncodePHR_Config(
	PHR_Config_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodePHR_Config(
	PHR_Config_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
