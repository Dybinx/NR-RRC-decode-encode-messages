/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * csi_resource_periodicity_and_offset.h - this is the header file for message: CSI-ResourcePeriodicityAndOffset
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _CSI_RESOURCE_PERIODICITY_AND_OFFSET_H_
#define _CSI_RESOURCE_PERIODICITY_AND_OFFSET_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	CSI_RESOURCEPERIODICITYANDOFFSET_SLOTS4,
	CSI_RESOURCEPERIODICITYANDOFFSET_SLOTS5,
	CSI_RESOURCEPERIODICITYANDOFFSET_SLOTS8,
	CSI_RESOURCEPERIODICITYANDOFFSET_SLOTS10,
	CSI_RESOURCEPERIODICITYANDOFFSET_SLOTS16,
	CSI_RESOURCEPERIODICITYANDOFFSET_SLOTS20,
	CSI_RESOURCEPERIODICITYANDOFFSET_SLOTS32,
	CSI_RESOURCEPERIODICITYANDOFFSET_SLOTS40,
	CSI_RESOURCEPERIODICITYANDOFFSET_SLOTS64,
	CSI_RESOURCEPERIODICITYANDOFFSET_SLOTS80,
	CSI_RESOURCEPERIODICITYANDOFFSET_SLOTS160,
	CSI_RESOURCEPERIODICITYANDOFFSET_SLOTS320,
	CSI_RESOURCEPERIODICITYANDOFFSET_SLOTS640,
	CSI_RESOURCEPERIODICITYANDOFFSET_max = 0x7FFFFFFF
}CSI_ResourcePeriodicityAndOffset_e;


/* union corresponding asn: CSI_ResourcePeriodicityAndOffset */
typedef union {
	uint32                                                             slots4;
	uint32                                                             slots5;
	uint32                                                             slots8;
	uint32                                                             slots10;
	uint32                                                             slots16;
	uint32                                                             slots20;
	uint32                                                             slots32;
	uint32                                                             slots40;
	uint32                                                             slots64;
	uint32                                                             slots80;
	uint32                                                             slots160;
	uint32                                                             slots320;
	uint32                                                             slots640;
}CSI_ResourcePeriodicityAndOffset_u;


/* struct corresponding asn: CSI_ResourcePeriodicityAndOffset */
typedef struct {
	CSI_ResourcePeriodicityAndOffset_e                                 type;
	CSI_ResourcePeriodicityAndOffset_u                                 a;
}CSI_ResourcePeriodicityAndOffset_t;


extern void EncodeCSI_ResourcePeriodicityAndOffset(
	CSI_ResourcePeriodicityAndOffset_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeCSI_ResourcePeriodicityAndOffset(
	CSI_ResourcePeriodicityAndOffset_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
