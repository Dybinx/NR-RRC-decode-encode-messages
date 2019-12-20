/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * csi_rs_resource_mapping.h - this is the header file for message: CSI-RS-ResourceMapping
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _CSI_RS_RESOURCE_MAPPING_H_
#define _CSI_RS_RESOURCE_MAPPING_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "csi_frequency_occupation.h"


/* struct corresponding asn: CSI_RS_ResourceMapping_row1 */
/* ASN: BIT STRING SIZE(4) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[1];
}CSI_RS_ResourceMapping_row1_t;


/* struct corresponding asn: CSI_RS_ResourceMapping_row2 */
/* ASN: BIT STRING SIZE(12) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[2];
}CSI_RS_ResourceMapping_row2_t;


/* struct corresponding asn: CSI_RS_ResourceMapping_row4 */
/* ASN: BIT STRING SIZE(3) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[1];
}CSI_RS_ResourceMapping_row4_t;


/* struct corresponding asn: CSI_RS_ResourceMapping_other */
/* ASN: BIT STRING SIZE(6) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[1];
}CSI_RS_ResourceMapping_other_t;


typedef enum {
	CSI_RS_RESOURCEMAPPING_FREQUENCYDOMAINALLOCATION_ROW1,
	CSI_RS_RESOURCEMAPPING_FREQUENCYDOMAINALLOCATION_ROW2,
	CSI_RS_RESOURCEMAPPING_FREQUENCYDOMAINALLOCATION_ROW4,
	CSI_RS_RESOURCEMAPPING_FREQUENCYDOMAINALLOCATION_OTHER,
	CSI_RS_RESOURCEMAPPING_FREQUENCYDOMAINALLOCATION_max = 0x7FFFFFFF
}CSI_RS_ResourceMapping_frequencyDomainAllocation_e;


/* union corresponding asn: CSI_RS_ResourceMapping_frequencyDomainAllocation */
typedef union {
	CSI_RS_ResourceMapping_row1_t                                      row1;
	CSI_RS_ResourceMapping_row2_t                                      row2;
	CSI_RS_ResourceMapping_row4_t                                      row4;
	CSI_RS_ResourceMapping_other_t                                     other;
}CSI_RS_ResourceMapping_frequencyDomainAllocation_u;


/* struct corresponding asn: CSI_RS_ResourceMapping_frequencyDomainAllocation */
typedef struct {
	CSI_RS_ResourceMapping_frequencyDomainAllocation_e                 type;
	CSI_RS_ResourceMapping_frequencyDomainAllocation_u                 a;
}CSI_RS_ResourceMapping_frequencyDomainAllocation_t;


typedef enum {
	CSI_RS_RESOURCEMAPPING_NROFPORTS_P1,
	CSI_RS_RESOURCEMAPPING_NROFPORTS_P2,
	CSI_RS_RESOURCEMAPPING_NROFPORTS_P4,
	CSI_RS_RESOURCEMAPPING_NROFPORTS_P8,
	CSI_RS_RESOURCEMAPPING_NROFPORTS_P12,
	CSI_RS_RESOURCEMAPPING_NROFPORTS_P16,
	CSI_RS_RESOURCEMAPPING_NROFPORTS_P24,
	CSI_RS_RESOURCEMAPPING_NROFPORTS_P32,
	CSI_RS_RESOURCEMAPPING_NROFPORTS_max = 0x7FFFFFFF
}CSI_RS_ResourceMapping_nrofPorts_e;


typedef enum {
	CSI_RS_RESOURCEMAPPING_CDM_TYPE_NOCDM,
	CSI_RS_RESOURCEMAPPING_CDM_TYPE_FD_CDM2,
	CSI_RS_RESOURCEMAPPING_CDM_TYPE_CDM4_FD2_TD2,
	CSI_RS_RESOURCEMAPPING_CDM_TYPE_CDM8_FD2_TD4,
	CSI_RS_RESOURCEMAPPING_CDM_TYPE_max = 0x7FFFFFFF
}CSI_RS_ResourceMapping_cdm_Type_e;


typedef enum {
	CSI_RS_RESOURCEMAPPING_DOT5_EVENPRBS,
	CSI_RS_RESOURCEMAPPING_DOT5_ODDPRBS,
	CSI_RS_RESOURCEMAPPING_DOT5_max = 0x7FFFFFFF
}CSI_RS_ResourceMapping_dot5_e;


typedef struct {
	uint32                                                             dummy;
}CSI_RS_ResourceMapping_one_t;


typedef struct {
	uint32                                                             dummy;
}CSI_RS_ResourceMapping_three_t;


typedef struct {
	uint32                                                             dummy;
}CSI_RS_ResourceMapping_spare_t;


typedef enum {
	CSI_RS_RESOURCEMAPPING_DENSITY_DOT5,
	CSI_RS_RESOURCEMAPPING_DENSITY_ONE,
	CSI_RS_RESOURCEMAPPING_DENSITY_THREE,
	CSI_RS_RESOURCEMAPPING_DENSITY_SPARE,
	CSI_RS_RESOURCEMAPPING_DENSITY_max = 0x7FFFFFFF
}CSI_RS_ResourceMapping_density_e;


/* union corresponding asn: CSI_RS_ResourceMapping_density */
typedef union {
	CSI_RS_ResourceMapping_dot5_e                                      dot5;
	CSI_RS_ResourceMapping_one_t                                       one;
	CSI_RS_ResourceMapping_three_t                                     three;
	CSI_RS_ResourceMapping_spare_t                                     spare;
}CSI_RS_ResourceMapping_density_u;


/* struct corresponding asn: CSI_RS_ResourceMapping_density */
typedef struct {
	CSI_RS_ResourceMapping_density_e                                   type;
	CSI_RS_ResourceMapping_density_u                                   a;
}CSI_RS_ResourceMapping_density_t;


typedef struct {
	CSI_RS_ResourceMapping_frequencyDomainAllocation_t                 frequencyDomainAllocation;
	CSI_RS_ResourceMapping_nrofPorts_e                                 nrofPorts;
	uint32                                                             firstOFDMSymbolInTimeDomain;
	BOOLEAN                                                            firstOFDMSymbolInTimeDomain2_exist;
	uint32                                                             firstOFDMSymbolInTimeDomain2;
	CSI_RS_ResourceMapping_cdm_Type_e                                  cdm_Type;
	CSI_RS_ResourceMapping_density_t                                   density;
	CSI_FrequencyOccupation_t                                          freqBand;
	/* Extension marker start. */
}CSI_RS_ResourceMapping_t;


extern void EncodeCSI_RS_ResourceMapping(
	CSI_RS_ResourceMapping_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeCSI_RS_ResourceMapping(
	CSI_RS_ResourceMapping_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
