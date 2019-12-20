/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * type_ii_codebook.h - this is the header file for message: TypeII-Codebook
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _TYPE_II_CODEBOOK_H_
#define _TYPE_II_CODEBOOK_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	TYPEII_CODEBOOK_MAXNUMBERTXPORTSPERRESOURCE_P4,
	TYPEII_CODEBOOK_MAXNUMBERTXPORTSPERRESOURCE_P8,
	TYPEII_CODEBOOK_MAXNUMBERTXPORTSPERRESOURCE_P12,
	TYPEII_CODEBOOK_MAXNUMBERTXPORTSPERRESOURCE_P16,
	TYPEII_CODEBOOK_MAXNUMBERTXPORTSPERRESOURCE_P24,
	TYPEII_CODEBOOK_MAXNUMBERTXPORTSPERRESOURCE_P32,
	TYPEII_CODEBOOK_MAXNUMBERTXPORTSPERRESOURCE_max = 0x7FFFFFFF
}TypeII_Codebook_maxNumberTxPortsPerResource_e;


typedef enum {
	TYPEII_CODEBOOK_AMPLITUDESCALINGTYPE_WIDEBAND,
	TYPEII_CODEBOOK_AMPLITUDESCALINGTYPE_WIDEBANDANDSUBBAND,
	TYPEII_CODEBOOK_AMPLITUDESCALINGTYPE_max = 0x7FFFFFFF
}TypeII_Codebook_amplitudeScalingType_e;


typedef enum {
	TYPEII_CODEBOOK_AMPLITUDESUBSETRESTRICTION_SUPPORTED,
	TYPEII_CODEBOOK_AMPLITUDESUBSETRESTRICTION_max = 0x7FFFFFFF
}TypeII_Codebook_amplitudeSubsetRestriction_e;


typedef struct {
	TypeII_Codebook_maxNumberTxPortsPerResource_e                      maxNumberTxPortsPerResource;
	uint32                                                             maxNumberResources;
	uint32                                                             totalNumberTxPorts;
	uint32                                                             parameterLx;
	TypeII_Codebook_amplitudeScalingType_e                             amplitudeScalingType;
	BOOLEAN                                                            amplitudeSubsetRestriction_exist;
	TypeII_Codebook_amplitudeSubsetRestriction_e                       amplitudeSubsetRestriction;
	uint32                                                             maxNumberCSI_RS_PerResourceSet;
}TypeII_Codebook_t;


extern void EncodeTypeII_Codebook(
	TypeII_Codebook_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeTypeII_Codebook(
	TypeII_Codebook_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
