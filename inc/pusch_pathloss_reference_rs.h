/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pusch_pathloss_reference_rs.h - this is the header file for message: PUSCH-PathlossReferenceRS
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _PUSCH_PATHLOSS_REFERENCE_RS_H_
#define _PUSCH_PATHLOSS_REFERENCE_RS_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "pusch_pathloss_reference_rs_id.h"
#include "ssb_index.h"
#include "nzp_csi_rs_resource_id.h"


typedef enum {
	PUSCH_PATHLOSSREFERENCERS_REFERENCESIGNAL_SSB_INDEX,
	PUSCH_PATHLOSSREFERENCERS_REFERENCESIGNAL_CSI_RS_INDEX,
	PUSCH_PATHLOSSREFERENCERS_REFERENCESIGNAL_max = 0x7FFFFFFF
}PUSCH_PathlossReferenceRS_referenceSignal_e;


/* union corresponding asn: PUSCH_PathlossReferenceRS_referenceSignal */
typedef union {
	SSB_Index_t                                                        ssb_Index;
	NZP_CSI_RS_ResourceId_t                                            csi_RS_Index;
}PUSCH_PathlossReferenceRS_referenceSignal_u;


/* struct corresponding asn: PUSCH_PathlossReferenceRS_referenceSignal */
typedef struct {
	PUSCH_PathlossReferenceRS_referenceSignal_e                        type;
	PUSCH_PathlossReferenceRS_referenceSignal_u                        a;
}PUSCH_PathlossReferenceRS_referenceSignal_t;


typedef struct {
	PUSCH_PathlossReferenceRS_Id_t                                     pusch_PathlossReferenceRS_Id;
	PUSCH_PathlossReferenceRS_referenceSignal_t                        referenceSignal;
}PUSCH_PathlossReferenceRS_t;


extern void EncodePUSCH_PathlossReferenceRS(
	PUSCH_PathlossReferenceRS_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodePUSCH_PathlossReferenceRS(
	PUSCH_PathlossReferenceRS_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
