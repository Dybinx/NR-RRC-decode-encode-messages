/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * reference_signal_config.h - this is the header file for message: ReferenceSignalConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _REFERENCE_SIGNAL_CONFIG_H_
#define _REFERENCE_SIGNAL_CONFIG_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "ssb_config_mobility.h"
#include "csi_rs_resource_config_mobility.h"


typedef struct {
	uint32                                                             dummy;
}ReferenceSignalConfig_release_t;


typedef enum {
	REFERENCESIGNALCONFIG_CSI_RS_RESOURCECONFIGMOBILITY_RELEASE,
	REFERENCESIGNALCONFIG_CSI_RS_RESOURCECONFIGMOBILITY_SETUP,
	REFERENCESIGNALCONFIG_CSI_RS_RESOURCECONFIGMOBILITY_max = 0x7FFFFFFF
}ReferenceSignalConfig_csi_rs_ResourceConfigMobility_e;


/* union corresponding asn: ReferenceSignalConfig_csi_rs_ResourceConfigMobility */
typedef union {
	ReferenceSignalConfig_release_t                                    release;
	CSI_RS_ResourceConfigMobility_t                                    setup;
}ReferenceSignalConfig_csi_rs_ResourceConfigMobility_u;


/* struct corresponding asn: ReferenceSignalConfig_csi_rs_ResourceConfigMobility */
typedef struct {
	ReferenceSignalConfig_csi_rs_ResourceConfigMobility_e              type;
	ReferenceSignalConfig_csi_rs_ResourceConfigMobility_u              a;
}ReferenceSignalConfig_csi_rs_ResourceConfigMobility_t;


typedef struct {
	BOOLEAN                                                            ssb_ConfigMobility_exist;
	SSB_ConfigMobility_t                                               ssb_ConfigMobility;
	BOOLEAN                                                            csi_rs_ResourceConfigMobility_exist;
	ReferenceSignalConfig_csi_rs_ResourceConfigMobility_t              csi_rs_ResourceConfigMobility;
}ReferenceSignalConfig_t;


extern void EncodeReferenceSignalConfig(
	ReferenceSignalConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeReferenceSignalConfig(
	ReferenceSignalConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
