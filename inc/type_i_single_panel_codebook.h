/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * type_i_single_panel_codebook.h - this is the header file for message: TypeI-SinglePanelCodebook
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _TYPE_I_SINGLE_PANEL_CODEBOOK_H_
#define _TYPE_I_SINGLE_PANEL_CODEBOOK_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	TYPEI_SINGLEPANELCODEBOOK_MAXNUMBERTXPORTSPERRESOURCE_P2,
	TYPEI_SINGLEPANELCODEBOOK_MAXNUMBERTXPORTSPERRESOURCE_P4,
	TYPEI_SINGLEPANELCODEBOOK_MAXNUMBERTXPORTSPERRESOURCE_P8,
	TYPEI_SINGLEPANELCODEBOOK_MAXNUMBERTXPORTSPERRESOURCE_P12,
	TYPEI_SINGLEPANELCODEBOOK_MAXNUMBERTXPORTSPERRESOURCE_P16,
	TYPEI_SINGLEPANELCODEBOOK_MAXNUMBERTXPORTSPERRESOURCE_P24,
	TYPEI_SINGLEPANELCODEBOOK_MAXNUMBERTXPORTSPERRESOURCE_P32,
	TYPEI_SINGLEPANELCODEBOOK_MAXNUMBERTXPORTSPERRESOURCE_max = 0x7FFFFFFF
}TypeI_SinglePanelCodebook_maxNumberTxPortsPerResource_e;


typedef enum {
	TYPEI_SINGLEPANELCODEBOOK_SUPPORTEDCODEBOOKMODE_MODE1,
	TYPEI_SINGLEPANELCODEBOOK_SUPPORTEDCODEBOOKMODE_MODE1ANDMODE2,
	TYPEI_SINGLEPANELCODEBOOK_SUPPORTEDCODEBOOKMODE_max = 0x7FFFFFFF
}TypeI_SinglePanelCodebook_supportedCodebookMode_e;


typedef struct {
	TypeI_SinglePanelCodebook_maxNumberTxPortsPerResource_e            maxNumberTxPortsPerResource;
	uint32                                                             maxNumberResources;
	uint32                                                             totalNumberTxPorts;
	TypeI_SinglePanelCodebook_supportedCodebookMode_e                  supportedCodebookMode;
	uint32                                                             maxNumberCSI_RS_PerResourceSet;
}TypeI_SinglePanelCodebook_t;


extern void EncodeTypeI_SinglePanelCodebook(
	TypeI_SinglePanelCodebook_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeTypeI_SinglePanelCodebook(
	TypeI_SinglePanelCodebook_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
