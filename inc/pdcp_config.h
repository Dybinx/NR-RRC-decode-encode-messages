/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pdcp_config.h - this is the header file for message: PDCP-Config
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _PDCP_CONFIG_H_
#define _PDCP_CONFIG_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"
#include "cell_group_id.h"
#include "logical_channel_identity.h"
#include "ul_data_split_threshold.h"


typedef enum {
	PDCP_CONFIG_DISCARDTIMER_MS10,
	PDCP_CONFIG_DISCARDTIMER_MS20,
	PDCP_CONFIG_DISCARDTIMER_MS30,
	PDCP_CONFIG_DISCARDTIMER_MS40,
	PDCP_CONFIG_DISCARDTIMER_MS50,
	PDCP_CONFIG_DISCARDTIMER_MS60,
	PDCP_CONFIG_DISCARDTIMER_MS75,
	PDCP_CONFIG_DISCARDTIMER_MS100,
	PDCP_CONFIG_DISCARDTIMER_MS150,
	PDCP_CONFIG_DISCARDTIMER_MS200,
	PDCP_CONFIG_DISCARDTIMER_MS250,
	PDCP_CONFIG_DISCARDTIMER_MS300,
	PDCP_CONFIG_DISCARDTIMER_MS500,
	PDCP_CONFIG_DISCARDTIMER_MS750,
	PDCP_CONFIG_DISCARDTIMER_MS1500,
	PDCP_CONFIG_DISCARDTIMER_INFINITY,
	PDCP_CONFIG_DISCARDTIMER_max = 0x7FFFFFFF
}PDCP_Config_discardTimer_e;


typedef enum {
	PDCP_CONFIG_PDCP_SN_SIZEUL_LEN12BITS,
	PDCP_CONFIG_PDCP_SN_SIZEUL_LEN18BITS,
	PDCP_CONFIG_PDCP_SN_SIZEUL_max = 0x7FFFFFFF
}PDCP_Config_pdcp_SN_SizeUL_e;


typedef enum {
	PDCP_CONFIG_PDCP_SN_SIZEDL_LEN12BITS,
	PDCP_CONFIG_PDCP_SN_SIZEDL_LEN18BITS,
	PDCP_CONFIG_PDCP_SN_SIZEDL_max = 0x7FFFFFFF
}PDCP_Config_pdcp_SN_SizeDL_e;


typedef struct {
	uint32                                                             dummy;
}PDCP_Config_notUsed_t;


typedef struct {
	BOOLEAN                                                            profile0x0001;
	BOOLEAN                                                            profile0x0002;
	BOOLEAN                                                            profile0x0003;
	BOOLEAN                                                            profile0x0004;
	BOOLEAN                                                            profile0x0006;
	BOOLEAN                                                            profile0x0101;
	BOOLEAN                                                            profile0x0102;
	BOOLEAN                                                            profile0x0103;
	BOOLEAN                                                            profile0x0104;
}PDCP_Config_profiles_t;


typedef enum {
	PDCP_CONFIG_DRB_CONTINUEROHC_TRUE,
	PDCP_CONFIG_DRB_CONTINUEROHC_max = 0x7FFFFFFF
}PDCP_Config_drb_ContinueROHC_e;


typedef struct {
	BOOLEAN                                                            maxCID_exist;
	uint32                                                             maxCID;
	PDCP_Config_profiles_t                                             profiles;
	BOOLEAN                                                            drb_ContinueROHC_exist;
	PDCP_Config_drb_ContinueROHC_e                                     drb_ContinueROHC;
}PDCP_Config_rohc_t;


typedef struct {
	BOOLEAN                                                            profile0x0006;
}PDCP_Config_profiles_1_t;


typedef enum {
	PDCP_CONFIG_DRB_CONTINUEROHC_1_TRUE,
	PDCP_CONFIG_DRB_CONTINUEROHC_1_max = 0x7FFFFFFF
}PDCP_Config_drb_ContinueROHC_1_e;


typedef struct {
	BOOLEAN                                                            maxCID_exist;
	uint32                                                             maxCID;
	PDCP_Config_profiles_1_t                                           profiles;
	BOOLEAN                                                            drb_ContinueROHC_exist;
	PDCP_Config_drb_ContinueROHC_1_e                                   drb_ContinueROHC;
}PDCP_Config_uplinkOnlyROHC_t;


typedef enum {
	PDCP_CONFIG_HEADERCOMPRESSION_NOTUSED,
	PDCP_CONFIG_HEADERCOMPRESSION_ROHC,
	PDCP_CONFIG_HEADERCOMPRESSION_UPLINKONLYROHC,
	/* Extension marker start. */
	PDCP_CONFIG_HEADERCOMPRESSION_max = 0x7FFFFFFF
}PDCP_Config_headerCompression_e;


/* union corresponding asn: PDCP_Config_headerCompression */
typedef union {
	PDCP_Config_notUsed_t                                              notUsed;
	PDCP_Config_rohc_t                                                 rohc;
	PDCP_Config_uplinkOnlyROHC_t                                       uplinkOnlyROHC;
	/* Extension marker start. */
}PDCP_Config_headerCompression_u;


/* struct corresponding asn: PDCP_Config_headerCompression */
typedef struct {
	PDCP_Config_headerCompression_e                                    type;
	PDCP_Config_headerCompression_u                                    a;
}PDCP_Config_headerCompression_t;


typedef enum {
	PDCP_CONFIG_INTEGRITYPROTECTION_ENABLED,
	PDCP_CONFIG_INTEGRITYPROTECTION_max = 0x7FFFFFFF
}PDCP_Config_integrityProtection_e;


typedef enum {
	PDCP_CONFIG_STATUSREPORTREQUIRED_TRUE,
	PDCP_CONFIG_STATUSREPORTREQUIRED_max = 0x7FFFFFFF
}PDCP_Config_statusReportRequired_e;


typedef enum {
	PDCP_CONFIG_OUTOFORDERDELIVERY_TRUE,
	PDCP_CONFIG_OUTOFORDERDELIVERY_max = 0x7FFFFFFF
}PDCP_Config_outOfOrderDelivery_e;


typedef struct {
	BOOLEAN                                                            discardTimer_exist;
	PDCP_Config_discardTimer_e                                         discardTimer;
	BOOLEAN                                                            pdcp_SN_SizeUL_exist;
	PDCP_Config_pdcp_SN_SizeUL_e                                       pdcp_SN_SizeUL;
	BOOLEAN                                                            pdcp_SN_SizeDL_exist;
	PDCP_Config_pdcp_SN_SizeDL_e                                       pdcp_SN_SizeDL;
	PDCP_Config_headerCompression_t                                    headerCompression;
	BOOLEAN                                                            integrityProtection_exist;
	PDCP_Config_integrityProtection_e                                  integrityProtection;
	BOOLEAN                                                            statusReportRequired_exist;
	PDCP_Config_statusReportRequired_e                                 statusReportRequired;
	BOOLEAN                                                            outOfOrderDelivery_exist;
	PDCP_Config_outOfOrderDelivery_e                                   outOfOrderDelivery;
}PDCP_Config_drb_t;


typedef struct {
	BOOLEAN                                                            cellGroup_exist;
	CellGroupId_t                                                      cellGroup;
	BOOLEAN                                                            logicalChannel_exist;
	LogicalChannelIdentity_t                                           logicalChannel;
}PDCP_Config_primaryPath_t;


typedef struct {
	PDCP_Config_primaryPath_t                                          primaryPath;
	BOOLEAN                                                            ul_DataSplitThreshold_exist;
	UL_DataSplitThreshold_e                                            ul_DataSplitThreshold;
	BOOLEAN                                                            pdcp_Duplication_exist;
	BOOLEAN                                                            pdcp_Duplication;
}PDCP_Config_moreThanOneRLC_t;


typedef enum {
	PDCP_CONFIG_T_REORDERING_MS0,
	PDCP_CONFIG_T_REORDERING_MS1,
	PDCP_CONFIG_T_REORDERING_MS2,
	PDCP_CONFIG_T_REORDERING_MS4,
	PDCP_CONFIG_T_REORDERING_MS5,
	PDCP_CONFIG_T_REORDERING_MS8,
	PDCP_CONFIG_T_REORDERING_MS10,
	PDCP_CONFIG_T_REORDERING_MS15,
	PDCP_CONFIG_T_REORDERING_MS20,
	PDCP_CONFIG_T_REORDERING_MS30,
	PDCP_CONFIG_T_REORDERING_MS40,
	PDCP_CONFIG_T_REORDERING_MS50,
	PDCP_CONFIG_T_REORDERING_MS60,
	PDCP_CONFIG_T_REORDERING_MS80,
	PDCP_CONFIG_T_REORDERING_MS100,
	PDCP_CONFIG_T_REORDERING_MS120,
	PDCP_CONFIG_T_REORDERING_MS140,
	PDCP_CONFIG_T_REORDERING_MS160,
	PDCP_CONFIG_T_REORDERING_MS180,
	PDCP_CONFIG_T_REORDERING_MS200,
	PDCP_CONFIG_T_REORDERING_MS220,
	PDCP_CONFIG_T_REORDERING_MS240,
	PDCP_CONFIG_T_REORDERING_MS260,
	PDCP_CONFIG_T_REORDERING_MS280,
	PDCP_CONFIG_T_REORDERING_MS300,
	PDCP_CONFIG_T_REORDERING_MS500,
	PDCP_CONFIG_T_REORDERING_MS750,
	PDCP_CONFIG_T_REORDERING_MS1000,
	PDCP_CONFIG_T_REORDERING_MS1250,
	PDCP_CONFIG_T_REORDERING_MS1500,
	PDCP_CONFIG_T_REORDERING_MS1750,
	PDCP_CONFIG_T_REORDERING_MS2000,
	PDCP_CONFIG_T_REORDERING_MS2250,
	PDCP_CONFIG_T_REORDERING_MS2500,
	PDCP_CONFIG_T_REORDERING_MS2750,
	PDCP_CONFIG_T_REORDERING_MS3000,
	PDCP_CONFIG_T_REORDERING_SPARE28,
	PDCP_CONFIG_T_REORDERING_SPARE27,
	PDCP_CONFIG_T_REORDERING_SPARE26,
	PDCP_CONFIG_T_REORDERING_SPARE25,
	PDCP_CONFIG_T_REORDERING_SPARE24,
	PDCP_CONFIG_T_REORDERING_SPARE23,
	PDCP_CONFIG_T_REORDERING_SPARE22,
	PDCP_CONFIG_T_REORDERING_SPARE21,
	PDCP_CONFIG_T_REORDERING_SPARE20,
	PDCP_CONFIG_T_REORDERING_SPARE19,
	PDCP_CONFIG_T_REORDERING_SPARE18,
	PDCP_CONFIG_T_REORDERING_SPARE17,
	PDCP_CONFIG_T_REORDERING_SPARE16,
	PDCP_CONFIG_T_REORDERING_SPARE15,
	PDCP_CONFIG_T_REORDERING_SPARE14,
	PDCP_CONFIG_T_REORDERING_SPARE13,
	PDCP_CONFIG_T_REORDERING_SPARE12,
	PDCP_CONFIG_T_REORDERING_SPARE11,
	PDCP_CONFIG_T_REORDERING_SPARE10,
	PDCP_CONFIG_T_REORDERING_SPARE09,
	PDCP_CONFIG_T_REORDERING_SPARE08,
	PDCP_CONFIG_T_REORDERING_SPARE07,
	PDCP_CONFIG_T_REORDERING_SPARE06,
	PDCP_CONFIG_T_REORDERING_SPARE05,
	PDCP_CONFIG_T_REORDERING_SPARE04,
	PDCP_CONFIG_T_REORDERING_SPARE03,
	PDCP_CONFIG_T_REORDERING_SPARE02,
	PDCP_CONFIG_T_REORDERING_SPARE01,
	PDCP_CONFIG_T_REORDERING_max = 0x7FFFFFFF
}PDCP_Config_t_Reordering_e;


typedef struct {
	BOOLEAN                                                            drb_exist;
	PDCP_Config_drb_t                                                  drb;
	BOOLEAN                                                            moreThanOneRLC_exist;
	PDCP_Config_moreThanOneRLC_t                                       moreThanOneRLC;
	BOOLEAN                                                            t_Reordering_exist;
	PDCP_Config_t_Reordering_e                                         t_Reordering;
	/* Extension marker start. */
}PDCP_Config_t;


extern void EncodePDCP_Config(
	PDCP_Config_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodePDCP_Config(
	PDCP_Config_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
