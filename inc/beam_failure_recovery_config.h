/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * beam_failure_recovery_config.h - this is the header file for message: BeamFailureRecoveryConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _BEAM_FAILURE_RECOVERY_CONFIG_H_
#define _BEAM_FAILURE_RECOVERY_CONFIG_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "rach_config_generic.h"
#include "rsrp_range.h"
#include "prach_resource_dedicated_bfr.h"
#include "search_space_id.h"
#include "ra_prioritization.h"


typedef struct {
	uint32                                                             length;
	PRACH_ResourceDedicatedBFR_t                                       elm[maxNrofCandidateBeams];
}BeamFailureRecoveryConfig_candidateBeamRSList_t;


typedef enum {
	BEAMFAILURERECOVERYCONFIG_SSB_PERRACH_OCCASION_ONEEIGHTH,
	BEAMFAILURERECOVERYCONFIG_SSB_PERRACH_OCCASION_ONEFOURTH,
	BEAMFAILURERECOVERYCONFIG_SSB_PERRACH_OCCASION_ONEHALF,
	BEAMFAILURERECOVERYCONFIG_SSB_PERRACH_OCCASION_ONE,
	BEAMFAILURERECOVERYCONFIG_SSB_PERRACH_OCCASION_TWO,
	BEAMFAILURERECOVERYCONFIG_SSB_PERRACH_OCCASION_FOUR,
	BEAMFAILURERECOVERYCONFIG_SSB_PERRACH_OCCASION_EIGHT,
	BEAMFAILURERECOVERYCONFIG_SSB_PERRACH_OCCASION_SIXTEEN,
	BEAMFAILURERECOVERYCONFIG_SSB_PERRACH_OCCASION_max = 0x7FFFFFFF
}BeamFailureRecoveryConfig_ssb_perRACH_Occasion_e;


typedef enum {
	BEAMFAILURERECOVERYCONFIG_BEAMFAILURERECOVERYTIMER_MS10,
	BEAMFAILURERECOVERYCONFIG_BEAMFAILURERECOVERYTIMER_MS20,
	BEAMFAILURERECOVERYCONFIG_BEAMFAILURERECOVERYTIMER_MS40,
	BEAMFAILURERECOVERYCONFIG_BEAMFAILURERECOVERYTIMER_MS60,
	BEAMFAILURERECOVERYCONFIG_BEAMFAILURERECOVERYTIMER_MS80,
	BEAMFAILURERECOVERYCONFIG_BEAMFAILURERECOVERYTIMER_MS100,
	BEAMFAILURERECOVERYCONFIG_BEAMFAILURERECOVERYTIMER_MS150,
	BEAMFAILURERECOVERYCONFIG_BEAMFAILURERECOVERYTIMER_MS200,
	BEAMFAILURERECOVERYCONFIG_BEAMFAILURERECOVERYTIMER_max = 0x7FFFFFFF
}BeamFailureRecoveryConfig_beamFailureRecoveryTimer_e;


typedef struct {
	BOOLEAN                                                            rootSequenceIndex_BFR_exist;
	uint32                                                             rootSequenceIndex_BFR;
	BOOLEAN                                                            rach_ConfigBFR_exist;
	RACH_ConfigGeneric_t                                               rach_ConfigBFR;
	BOOLEAN                                                            rsrp_ThresholdSSB_exist;
	RSRP_Range_t                                                       rsrp_ThresholdSSB;
	BOOLEAN                                                            candidateBeamRSList_exist;
	BeamFailureRecoveryConfig_candidateBeamRSList_t                    candidateBeamRSList;
	BOOLEAN                                                            ssb_perRACH_Occasion_exist;
	BeamFailureRecoveryConfig_ssb_perRACH_Occasion_e                   ssb_perRACH_Occasion;
	BOOLEAN                                                            ra_ssb_OccasionMaskIndex_exist;
	uint32                                                             ra_ssb_OccasionMaskIndex;
	BOOLEAN                                                            recoverySearchSpaceId_exist;
	SearchSpaceId_t                                                    recoverySearchSpaceId;
	BOOLEAN                                                            ra_Prioritization_exist;
	RA_Prioritization_t                                                ra_Prioritization;
	BOOLEAN                                                            beamFailureRecoveryTimer_exist;
	BeamFailureRecoveryConfig_beamFailureRecoveryTimer_e               beamFailureRecoveryTimer;
	/* Extension marker start. */
}BeamFailureRecoveryConfig_t;


extern void EncodeBeamFailureRecoveryConfig(
	BeamFailureRecoveryConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeBeamFailureRecoveryConfig(
	BeamFailureRecoveryConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
