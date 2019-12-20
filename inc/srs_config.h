/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * srs_config.h - this is the header file for message: SRS-Config
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _SRS_CONFIG_H_
#define _SRS_CONFIG_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "srs_resource_set_id.h"
#include "srs_resource_set.h"
#include "srs_resource_id.h"
#include "srs_resource.h"


typedef struct {
	uint32                                                             length;
	SRS_ResourceSetId_t                                                elm[maxNrofSRS_ResourceSets];
}SRS_Config_srs_ResourceSetToReleaseList_t;


typedef struct {
	uint32                                                             length;
	SRS_ResourceSet_t                                                  elm[maxNrofSRS_ResourceSets];
}SRS_Config_srs_ResourceSetToAddModList_t;


typedef struct {
	uint32                                                             length;
	SRS_ResourceId_t                                                   elm[maxNrofSRS_Resources];
}SRS_Config_srs_ResourceToReleaseList_t;


typedef struct {
	uint32                                                             length;
	SRS_Resource_t                                                     elm[maxNrofSRS_Resources];
}SRS_Config_srs_ResourceToAddModList_t;


typedef enum {
	SRS_CONFIG_TPC_ACCUMULATION_DISABLED,
	SRS_CONFIG_TPC_ACCUMULATION_max = 0x7FFFFFFF
}SRS_Config_tpc_Accumulation_e;


typedef struct {
	BOOLEAN                                                            srs_ResourceSetToReleaseList_exist;
	SRS_Config_srs_ResourceSetToReleaseList_t                          srs_ResourceSetToReleaseList;
	BOOLEAN                                                            srs_ResourceSetToAddModList_exist;
	SRS_Config_srs_ResourceSetToAddModList_t                           srs_ResourceSetToAddModList;
	BOOLEAN                                                            srs_ResourceToReleaseList_exist;
	SRS_Config_srs_ResourceToReleaseList_t                             srs_ResourceToReleaseList;
	BOOLEAN                                                            srs_ResourceToAddModList_exist;
	SRS_Config_srs_ResourceToAddModList_t                              srs_ResourceToAddModList;
	BOOLEAN                                                            tpc_Accumulation_exist;
	SRS_Config_tpc_Accumulation_e                                      tpc_Accumulation;
	/* Extension marker start. */
}SRS_Config_t;


extern void EncodeSRS_Config(
	SRS_Config_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeSRS_Config(
	SRS_Config_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
