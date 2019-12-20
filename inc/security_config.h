/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * security_config.h - this is the header file for message: SecurityConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _SECURITY_CONFIG_H_
#define _SECURITY_CONFIG_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "security_algorithm_config.h"


typedef enum {
	SECURITYCONFIG_KEYTOUSE_KENB,
	SECURITYCONFIG_KEYTOUSE_S_KGNB,
	SECURITYCONFIG_KEYTOUSE_max = 0x7FFFFFFF
}SecurityConfig_keyToUse_e;


typedef struct {
	BOOLEAN                                                            securityAlgorithmConfig_exist;
	SecurityAlgorithmConfig_t                                          securityAlgorithmConfig;
	BOOLEAN                                                            keyToUse_exist;
	SecurityConfig_keyToUse_e                                          keyToUse;
	/* Extension marker start. */
}SecurityConfig_t;


extern void EncodeSecurityConfig(
	SecurityConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeSecurityConfig(
	SecurityConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
