/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * type_i_multi_panel_codebook.h - this is the header file for message: TypeI-MultiPanelCodebook
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _TYPE_I_MULTI_PANEL_CODEBOOK_H_
#define _TYPE_I_MULTI_PANEL_CODEBOOK_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	TYPEI_MULTIPANELCODEBOOK_MAXNUMBERTXPORTSPERRESOURCE_P8,
	TYPEI_MULTIPANELCODEBOOK_MAXNUMBERTXPORTSPERRESOURCE_P16,
	TYPEI_MULTIPANELCODEBOOK_MAXNUMBERTXPORTSPERRESOURCE_P32,
	TYPEI_MULTIPANELCODEBOOK_MAXNUMBERTXPORTSPERRESOURCE_max = 0x7FFFFFFF
}TypeI_MultiPanelCodebook_maxNumberTxPortsPerResource_e;


typedef enum {
	TYPEI_MULTIPANELCODEBOOK_SUPPORTEDCODEBOOKMODE_MODE1,
	TYPEI_MULTIPANELCODEBOOK_SUPPORTEDCODEBOOKMODE_MODE2,
	TYPEI_MULTIPANELCODEBOOK_SUPPORTEDCODEBOOKMODE_BOTH,
	TYPEI_MULTIPANELCODEBOOK_SUPPORTEDCODEBOOKMODE_max = 0x7FFFFFFF
}TypeI_MultiPanelCodebook_supportedCodebookMode_e;


typedef enum {
	TYPEI_MULTIPANELCODEBOOK_SUPPORTEDNUMBERPANELS_N2,
	TYPEI_MULTIPANELCODEBOOK_SUPPORTEDNUMBERPANELS_N4,
	TYPEI_MULTIPANELCODEBOOK_SUPPORTEDNUMBERPANELS_max = 0x7FFFFFFF
}TypeI_MultiPanelCodebook_supportedNumberPanels_e;


typedef struct {
	TypeI_MultiPanelCodebook_maxNumberTxPortsPerResource_e             maxNumberTxPortsPerResource;
	uint32                                                             maxNumberResources;
	uint32                                                             totalNumberTxPorts;
	TypeI_MultiPanelCodebook_supportedCodebookMode_e                   supportedCodebookMode;
	TypeI_MultiPanelCodebook_supportedNumberPanels_e                   supportedNumberPanels;
	uint32                                                             maxNumberCSI_RS_PerResourceSet;
}TypeI_MultiPanelCodebook_t;


extern void EncodeTypeI_MultiPanelCodebook(
	TypeI_MultiPanelCodebook_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeTypeI_MultiPanelCodebook(
	TypeI_MultiPanelCodebook_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
