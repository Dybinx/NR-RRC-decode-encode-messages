/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * ptrs_uplink_config.h - this is the header file for message: PTRS-UplinkConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _PTRS_UPLINK_CONFIG_H_
#define _PTRS_UPLINK_CONFIG_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef struct {
	uint32                                                             length;
	uint32                                                             elm[2];
}PTRS_UplinkConfig_frequencyDensity_t;


typedef struct {
	uint32                                                             length;
	uint32                                                             elm[3];
}PTRS_UplinkConfig_timeDensity_t;


typedef enum {
	PTRS_UPLINKCONFIG_MAXNROFPORTS_N1,
	PTRS_UPLINKCONFIG_MAXNROFPORTS_N2,
	PTRS_UPLINKCONFIG_MAXNROFPORTS_max = 0x7FFFFFFF
}PTRS_UplinkConfig_maxNrofPorts_e;


typedef enum {
	PTRS_UPLINKCONFIG_RESOURCEELEMENTOFFSET_OFFSET01,
	PTRS_UPLINKCONFIG_RESOURCEELEMENTOFFSET_OFFSET10,
	PTRS_UPLINKCONFIG_RESOURCEELEMENTOFFSET_OFFSET11,
	PTRS_UPLINKCONFIG_RESOURCEELEMENTOFFSET_max = 0x7FFFFFFF
}PTRS_UplinkConfig_resourceElementOffset_e;


typedef enum {
	PTRS_UPLINKCONFIG_PTRS_POWER_P00,
	PTRS_UPLINKCONFIG_PTRS_POWER_P01,
	PTRS_UPLINKCONFIG_PTRS_POWER_P10,
	PTRS_UPLINKCONFIG_PTRS_POWER_P11,
	PTRS_UPLINKCONFIG_PTRS_POWER_max = 0x7FFFFFFF
}PTRS_UplinkConfig_ptrs_Power_e;


typedef struct {
	BOOLEAN                                                            frequencyDensity_exist;
	PTRS_UplinkConfig_frequencyDensity_t                               frequencyDensity;
	BOOLEAN                                                            timeDensity_exist;
	PTRS_UplinkConfig_timeDensity_t                                    timeDensity;
	PTRS_UplinkConfig_maxNrofPorts_e                                   maxNrofPorts;
	BOOLEAN                                                            resourceElementOffset_exist;
	PTRS_UplinkConfig_resourceElementOffset_e                          resourceElementOffset;
	PTRS_UplinkConfig_ptrs_Power_e                                     ptrs_Power;
}PTRS_UplinkConfig_cp_OFDM_t;


typedef struct {
	uint32                                                             length;
	uint32                                                             elm[5];
}PTRS_UplinkConfig_sampleDensity_t;


typedef enum {
	PTRS_UPLINKCONFIG_TIMEDENSITYTRANSFORMPRECODING_D2,
	PTRS_UPLINKCONFIG_TIMEDENSITYTRANSFORMPRECODING_max = 0x7FFFFFFF
}PTRS_UplinkConfig_timeDensityTransformPrecoding_e;


typedef struct {
	PTRS_UplinkConfig_sampleDensity_t                                  sampleDensity;
	BOOLEAN                                                            timeDensityTransformPrecoding_exist;
	PTRS_UplinkConfig_timeDensityTransformPrecoding_e                  timeDensityTransformPrecoding;
}PTRS_UplinkConfig_dft_S_OFDM_t;


typedef enum {
	PTRS_UPLINKCONFIG_MODESPECIFICPARAMETERS_CP_OFDM,
	PTRS_UPLINKCONFIG_MODESPECIFICPARAMETERS_DFT_S_OFDM,
	PTRS_UPLINKCONFIG_MODESPECIFICPARAMETERS_max = 0x7FFFFFFF
}PTRS_UplinkConfig_modeSpecificParameters_e;


/* union corresponding asn: PTRS_UplinkConfig_modeSpecificParameters */
typedef union {
	PTRS_UplinkConfig_cp_OFDM_t                                        cp_OFDM;
	PTRS_UplinkConfig_dft_S_OFDM_t                                     dft_S_OFDM;
}PTRS_UplinkConfig_modeSpecificParameters_u;


/* struct corresponding asn: PTRS_UplinkConfig_modeSpecificParameters */
typedef struct {
	PTRS_UplinkConfig_modeSpecificParameters_e                         type;
	PTRS_UplinkConfig_modeSpecificParameters_u                         a;
}PTRS_UplinkConfig_modeSpecificParameters_t;


typedef struct {
	BOOLEAN                                                            modeSpecificParameters_exist;
	PTRS_UplinkConfig_modeSpecificParameters_t                         modeSpecificParameters;
	/* Extension marker start. */
}PTRS_UplinkConfig_t;


extern void EncodePTRS_UplinkConfig(
	PTRS_UplinkConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodePTRS_UplinkConfig(
	PTRS_UplinkConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
