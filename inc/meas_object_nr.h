/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * meas_object_nr.h - this is the header file for message: MeasObjectNR
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _MEAS_OBJECT_NR_H_
#define _MEAS_OBJECT_NR_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "arfcn_value_nr.h"
#include "subcarrier_spacing.h"
#include "ssb_mtc.h"
#include "ssb_mtc2.h"
#include "arfcn_value_nr.h"
#include "reference_signal_config.h"
#include "threshold_nr.h"
#include "threshold_nr.h"
#include "q_offset_range_list.h"
#include "pci_list.h"
#include "cells_to_add_mod_list.h"
#include "pci_range_index_list.h"
#include "pci_range_element.h"
#include "pci_range_index_list.h"
#include "pci_range_element.h"


typedef struct {
	uint32                                                             length;
	PCI_RangeElement_t                                                 elm[maxNrofPCI_Ranges];
}MeasObjectNR_blackCellsToAddModList_t;


typedef struct {
	uint32                                                             length;
	PCI_RangeElement_t                                                 elm[maxNrofPCI_Ranges];
}MeasObjectNR_whiteCellsToAddModList_t;


typedef struct {
	BOOLEAN                                                            ssbFrequency_exist;
	ARFCN_ValueNR_t                                                    ssbFrequency;
	BOOLEAN                                                            ssbSubcarrierSpacing_exist;
	SubcarrierSpacing_e                                                ssbSubcarrierSpacing;
	BOOLEAN                                                            smtc1_exist;
	SSB_MTC_t                                                          smtc1;
	BOOLEAN                                                            smtc2_exist;
	SSB_MTC2_t                                                         smtc2;
	BOOLEAN                                                            refFreqCSI_RS_exist;
	ARFCN_ValueNR_t                                                    refFreqCSI_RS;
	ReferenceSignalConfig_t                                            referenceSignalConfig;
	BOOLEAN                                                            absThreshSS_BlocksConsolidation_exist;
	ThresholdNR_t                                                      absThreshSS_BlocksConsolidation;
	BOOLEAN                                                            absThreshCSI_RS_Consolidation_exist;
	ThresholdNR_t                                                      absThreshCSI_RS_Consolidation;
	BOOLEAN                                                            nrofSS_BlocksToAverage_exist;
	uint32                                                             nrofSS_BlocksToAverage;
	BOOLEAN                                                            nrofCSI_RS_ResourcesToAverage_exist;
	uint32                                                             nrofCSI_RS_ResourcesToAverage;
	uint32                                                             quantityConfigIndex;
	Q_OffsetRangeList_t                                                offsetMO;
	BOOLEAN                                                            cellsToRemoveList_exist;
	PCI_List_t                                                         cellsToRemoveList;
	BOOLEAN                                                            cellsToAddModList_exist;
	CellsToAddModList_t                                                cellsToAddModList;
	BOOLEAN                                                            blackCellsToRemoveList_exist;
	PCI_RangeIndexList_t                                               blackCellsToRemoveList;
	BOOLEAN                                                            blackCellsToAddModList_exist;
	MeasObjectNR_blackCellsToAddModList_t                              blackCellsToAddModList;
	BOOLEAN                                                            whiteCellsToRemoveList_exist;
	PCI_RangeIndexList_t                                               whiteCellsToRemoveList;
	BOOLEAN                                                            whiteCellsToAddModList_exist;
	MeasObjectNR_whiteCellsToAddModList_t                              whiteCellsToAddModList;
	/* Extension marker start. */
}MeasObjectNR_t;


extern void EncodeMeasObjectNR(
	MeasObjectNR_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeMeasObjectNR(
	MeasObjectNR_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
