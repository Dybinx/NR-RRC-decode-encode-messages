/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * control_resource_set.h - this is the header file for message: ControlResourceSet
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _CONTROL_RESOURCE_SET_H_
#define _CONTROL_RESOURCE_SET_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "control_resource_set_id.h"
#include "tci_state_id.h"
#include "tci_state_id.h"


/* struct corresponding asn: ControlResourceSet_frequencyDomainResources */
/* ASN: BIT STRING SIZE(45) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[6];
}ControlResourceSet_frequencyDomainResources_t;


typedef enum {
	CONTROLRESOURCESET_REG_BUNDLESIZE_N2,
	CONTROLRESOURCESET_REG_BUNDLESIZE_N3,
	CONTROLRESOURCESET_REG_BUNDLESIZE_N6,
	CONTROLRESOURCESET_REG_BUNDLESIZE_max = 0x7FFFFFFF
}ControlResourceSet_reg_BundleSize_e;


typedef enum {
	CONTROLRESOURCESET_INTERLEAVERSIZE_N2,
	CONTROLRESOURCESET_INTERLEAVERSIZE_N3,
	CONTROLRESOURCESET_INTERLEAVERSIZE_N6,
	CONTROLRESOURCESET_INTERLEAVERSIZE_max = 0x7FFFFFFF
}ControlResourceSet_interleaverSize_e;


typedef struct {
	ControlResourceSet_reg_BundleSize_e                                reg_BundleSize;
	ControlResourceSet_interleaverSize_e                               interleaverSize;
	BOOLEAN                                                            shiftIndex_exist;
	uint32                                                             shiftIndex;
}ControlResourceSet_interleaved_t;


typedef struct {
	uint32                                                             dummy;
}ControlResourceSet_nonInterleaved_t;


typedef enum {
	CONTROLRESOURCESET_CCE_REG_MAPPINGTYPE_INTERLEAVED,
	CONTROLRESOURCESET_CCE_REG_MAPPINGTYPE_NONINTERLEAVED,
	CONTROLRESOURCESET_CCE_REG_MAPPINGTYPE_max = 0x7FFFFFFF
}ControlResourceSet_cce_REG_MappingType_e;


/* union corresponding asn: ControlResourceSet_cce_REG_MappingType */
typedef union {
	ControlResourceSet_interleaved_t                                   interleaved;
	ControlResourceSet_nonInterleaved_t                                nonInterleaved;
}ControlResourceSet_cce_REG_MappingType_u;


/* struct corresponding asn: ControlResourceSet_cce_REG_MappingType */
typedef struct {
	ControlResourceSet_cce_REG_MappingType_e                           type;
	ControlResourceSet_cce_REG_MappingType_u                           a;
}ControlResourceSet_cce_REG_MappingType_t;


typedef enum {
	CONTROLRESOURCESET_PRECODERGRANULARITY_SAMEASREG_BUNDLE,
	CONTROLRESOURCESET_PRECODERGRANULARITY_ALLCONTIGUOUSRBS,
	CONTROLRESOURCESET_PRECODERGRANULARITY_max = 0x7FFFFFFF
}ControlResourceSet_precoderGranularity_e;


typedef struct {
	uint32                                                             length;
	TCI_StateId_t                                                      elm[maxNrofTCI_StatesPDCCH];
}ControlResourceSet_tci_StatesPDCCH_ToAddList_t;


typedef struct {
	uint32                                                             length;
	TCI_StateId_t                                                      elm[maxNrofTCI_StatesPDCCH];
}ControlResourceSet_tci_StatesPDCCH_ToReleaseList_t;


typedef enum {
	CONTROLRESOURCESET_TCI_PRESENTINDCI_ENABLED,
	CONTROLRESOURCESET_TCI_PRESENTINDCI_max = 0x7FFFFFFF
}ControlResourceSet_tci_PresentInDCI_e;


typedef struct {
	ControlResourceSetId_t                                             controlResourceSetId;
	ControlResourceSet_frequencyDomainResources_t                      frequencyDomainResources;
	uint32                                                             duration;
	ControlResourceSet_cce_REG_MappingType_t                           cce_REG_MappingType;
	ControlResourceSet_precoderGranularity_e                           precoderGranularity;
	BOOLEAN                                                            tci_StatesPDCCH_ToAddList_exist;
	ControlResourceSet_tci_StatesPDCCH_ToAddList_t                     tci_StatesPDCCH_ToAddList;
	BOOLEAN                                                            tci_StatesPDCCH_ToReleaseList_exist;
	ControlResourceSet_tci_StatesPDCCH_ToReleaseList_t                 tci_StatesPDCCH_ToReleaseList;
	BOOLEAN                                                            tci_PresentInDCI_exist;
	ControlResourceSet_tci_PresentInDCI_e                              tci_PresentInDCI;
	BOOLEAN                                                            pdcch_DMRS_ScramblingID_exist;
	uint32                                                             pdcch_DMRS_ScramblingID;
	/* Extension marker start. */
}ControlResourceSet_t;


extern void EncodeControlResourceSet(
	ControlResourceSet_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeControlResourceSet(
	ControlResourceSet_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
