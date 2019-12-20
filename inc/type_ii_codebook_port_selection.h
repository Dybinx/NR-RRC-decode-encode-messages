/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * type_ii_codebook_port_selection.h - this is the header file for message: TypeII-CodebookPortSelection
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _TYPE_II_CODEBOOK_PORT_SELECTION_H_
#define _TYPE_II_CODEBOOK_PORT_SELECTION_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	TYPEII_CODEBOOKPORTSELECTION_MAXNUMBERTXPORTSPERRESOURCE_P4,
	TYPEII_CODEBOOKPORTSELECTION_MAXNUMBERTXPORTSPERRESOURCE_P8,
	TYPEII_CODEBOOKPORTSELECTION_MAXNUMBERTXPORTSPERRESOURCE_P12,
	TYPEII_CODEBOOKPORTSELECTION_MAXNUMBERTXPORTSPERRESOURCE_P16,
	TYPEII_CODEBOOKPORTSELECTION_MAXNUMBERTXPORTSPERRESOURCE_P24,
	TYPEII_CODEBOOKPORTSELECTION_MAXNUMBERTXPORTSPERRESOURCE_P32,
	TYPEII_CODEBOOKPORTSELECTION_MAXNUMBERTXPORTSPERRESOURCE_max = 0x7FFFFFFF
}TypeII_CodebookPortSelection_maxNumberTxPortsPerResource_e;


typedef enum {
	TYPEII_CODEBOOKPORTSELECTION_AMPLITUDESCALINGTYPE_WIDEBAND,
	TYPEII_CODEBOOKPORTSELECTION_AMPLITUDESCALINGTYPE_WIDEBANDANDSUBBAND,
	TYPEII_CODEBOOKPORTSELECTION_AMPLITUDESCALINGTYPE_max = 0x7FFFFFFF
}TypeII_CodebookPortSelection_amplitudeScalingType_e;


typedef struct {
	TypeII_CodebookPortSelection_maxNumberTxPortsPerResource_e         maxNumberTxPortsPerResource;
	uint32                                                             maxNumberResources;
	uint32                                                             totalNumberTxPorts;
	uint32                                                             parameterLx;
	TypeII_CodebookPortSelection_amplitudeScalingType_e                amplitudeScalingType;
	uint32                                                             maxNumberCSI_RS_PerResourceSet;
}TypeII_CodebookPortSelection_t;


extern void EncodeTypeII_CodebookPortSelection(
	TypeII_CodebookPortSelection_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeTypeII_CodebookPortSelection(
	TypeII_CodebookPortSelection_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
