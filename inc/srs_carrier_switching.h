/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * srs_carrier_switching.h - this is the header file for message: SRS-CarrierSwitching
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _SRS_CARRIER_SWITCHING_H_
#define _SRS_CARRIER_SWITCHING_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "srs_tpc_pdcch_config.h"
#include "srs_tpc_pdcch_config.h"
#include "serv_cell_index.h"


typedef enum {
	SRS_CARRIERSWITCHING_SRS_SWITCHFROMCARRIER_SUL,
	SRS_CARRIERSWITCHING_SRS_SWITCHFROMCARRIER_NUL,
	SRS_CARRIERSWITCHING_SRS_SWITCHFROMCARRIER_max = 0x7FFFFFFF
}SRS_CarrierSwitching_srs_SwitchFromCarrier_e;


typedef struct {
	uint32                                                             length;
	SRS_TPC_PDCCH_Config_t                                             elm[32];
}SRS_CarrierSwitching_typeA_t;


typedef enum {
	SRS_CARRIERSWITCHING_SRS_TPC_PDCCH_GROUP_TYPEA,
	SRS_CARRIERSWITCHING_SRS_TPC_PDCCH_GROUP_TYPEB,
	SRS_CARRIERSWITCHING_SRS_TPC_PDCCH_GROUP_max = 0x7FFFFFFF
}SRS_CarrierSwitching_srs_TPC_PDCCH_Group_e;


/* union corresponding asn: SRS_CarrierSwitching_srs_TPC_PDCCH_Group */
typedef union {
	SRS_CarrierSwitching_typeA_t                                       typeA;
	SRS_TPC_PDCCH_Config_t                                             typeB;
}SRS_CarrierSwitching_srs_TPC_PDCCH_Group_u;


/* struct corresponding asn: SRS_CarrierSwitching_srs_TPC_PDCCH_Group */
typedef struct {
	SRS_CarrierSwitching_srs_TPC_PDCCH_Group_e                         type;
	SRS_CarrierSwitching_srs_TPC_PDCCH_Group_u                         a;
}SRS_CarrierSwitching_srs_TPC_PDCCH_Group_t;


typedef struct {
	uint32                                                             length;
	ServCellIndex_t                                                    elm[maxNrofServingCells];
}SRS_CarrierSwitching_monitoringCells_t;


typedef struct {
	BOOLEAN                                                            srs_SwitchFromServCellIndex_exist;
	uint32                                                             srs_SwitchFromServCellIndex;
	SRS_CarrierSwitching_srs_SwitchFromCarrier_e                       srs_SwitchFromCarrier;
	BOOLEAN                                                            srs_TPC_PDCCH_Group_exist;
	SRS_CarrierSwitching_srs_TPC_PDCCH_Group_t                         srs_TPC_PDCCH_Group;
	BOOLEAN                                                            monitoringCells_exist;
	SRS_CarrierSwitching_monitoringCells_t                             monitoringCells;
	/* Extension marker start. */
}SRS_CarrierSwitching_t;


extern void EncodeSRS_CarrierSwitching(
	SRS_CarrierSwitching_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeSRS_CarrierSwitching(
	SRS_CarrierSwitching_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
