/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pusch_power_control.h - this is the header file for message: PUSCH-PowerControl
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _PUSCH_POWER_CONTROL_H_
#define _PUSCH_POWER_CONTROL_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "alpha.h"
#include "p0_pusch_alpha_set.h"
#include "pusch_pathloss_reference_rs.h"
#include "pusch_pathloss_reference_rs_id.h"
#include "sri_pusch_power_control.h"
#include "sri_pusch_power_control_id.h"


typedef enum {
	PUSCH_POWERCONTROL_TPC_ACCUMULATION_DISABLED,
	PUSCH_POWERCONTROL_TPC_ACCUMULATION_max = 0x7FFFFFFF
}PUSCH_PowerControl_tpc_Accumulation_e;


typedef struct {
	uint32                                                             length;
	P0_PUSCH_AlphaSet_t                                                elm[maxNrofP0_PUSCH_AlphaSets];
}PUSCH_PowerControl_p0_AlphaSets_t;


typedef struct {
	uint32                                                             length;
	PUSCH_PathlossReferenceRS_t                                        elm[maxNrofPUSCH_PathlossReferenceRSs];
}PUSCH_PowerControl_pathlossReferenceRSToAddModList_t;


typedef struct {
	uint32                                                             length;
	PUSCH_PathlossReferenceRS_Id_t                                     elm[maxNrofPUSCH_PathlossReferenceRSs];
}PUSCH_PowerControl_pathlossReferenceRSToReleaseList_t;


typedef enum {
	PUSCH_POWERCONTROL_TWOPUSCH_PC_ADJUSTMENTSTATES_TWOSTATES,
	PUSCH_POWERCONTROL_TWOPUSCH_PC_ADJUSTMENTSTATES_max = 0x7FFFFFFF
}PUSCH_PowerControl_twoPUSCH_PC_AdjustmentStates_e;


typedef enum {
	PUSCH_POWERCONTROL_DELTAMCS_ENABLED,
	PUSCH_POWERCONTROL_DELTAMCS_max = 0x7FFFFFFF
}PUSCH_PowerControl_deltaMCS_e;


typedef struct {
	uint32                                                             length;
	SRI_PUSCH_PowerControl_t                                           elm[maxNrofSRI_PUSCH_Mappings];
}PUSCH_PowerControl_sri_PUSCH_MappingToAddModList_t;


typedef struct {
	uint32                                                             length;
	SRI_PUSCH_PowerControlId_t                                         elm[maxNrofSRI_PUSCH_Mappings];
}PUSCH_PowerControl_sri_PUSCH_MappingToReleaseList_t;


typedef struct {
	BOOLEAN                                                            tpc_Accumulation_exist;
	PUSCH_PowerControl_tpc_Accumulation_e                              tpc_Accumulation;
	BOOLEAN                                                            msg3_Alpha_exist;
	Alpha_e                                                            msg3_Alpha;
	BOOLEAN                                                            p0_NominalWithoutGrant_exist;
	int32                                                              p0_NominalWithoutGrant;
	BOOLEAN                                                            p0_AlphaSets_exist;
	PUSCH_PowerControl_p0_AlphaSets_t                                  p0_AlphaSets;
	BOOLEAN                                                            pathlossReferenceRSToAddModList_exist;
	PUSCH_PowerControl_pathlossReferenceRSToAddModList_t               pathlossReferenceRSToAddModList;
	BOOLEAN                                                            pathlossReferenceRSToReleaseList_exist;
	PUSCH_PowerControl_pathlossReferenceRSToReleaseList_t              pathlossReferenceRSToReleaseList;
	BOOLEAN                                                            twoPUSCH_PC_AdjustmentStates_exist;
	PUSCH_PowerControl_twoPUSCH_PC_AdjustmentStates_e                  twoPUSCH_PC_AdjustmentStates;
	BOOLEAN                                                            deltaMCS_exist;
	PUSCH_PowerControl_deltaMCS_e                                      deltaMCS;
	BOOLEAN                                                            sri_PUSCH_MappingToAddModList_exist;
	PUSCH_PowerControl_sri_PUSCH_MappingToAddModList_t                 sri_PUSCH_MappingToAddModList;
	BOOLEAN                                                            sri_PUSCH_MappingToReleaseList_exist;
	PUSCH_PowerControl_sri_PUSCH_MappingToReleaseList_t                sri_PUSCH_MappingToReleaseList;
}PUSCH_PowerControl_t;


extern void EncodePUSCH_PowerControl(
	PUSCH_PowerControl_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodePUSCH_PowerControl(
	PUSCH_PowerControl_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
