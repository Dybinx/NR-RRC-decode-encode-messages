/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * mrdc_parameters.h - this is the header file for message: MRDC-Parameters
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _MRDC_PARAMETERS_H_
#define _MRDC_PARAMETERS_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef enum {
	MRDC_PARAMETERS_SINGLEUL_TRANSMISSION_SUPPORTED,
	MRDC_PARAMETERS_SINGLEUL_TRANSMISSION_max = 0x7FFFFFFF
}MRDC_Parameters_singleUL_Transmission_e;


typedef enum {
	MRDC_PARAMETERS_DYNAMICPOWERSHARING_SUPPORTED,
	MRDC_PARAMETERS_DYNAMICPOWERSHARING_max = 0x7FFFFFFF
}MRDC_Parameters_dynamicPowerSharing_e;


typedef enum {
	MRDC_PARAMETERS_TDM_PATTERN_SUPPORTED,
	MRDC_PARAMETERS_TDM_PATTERN_max = 0x7FFFFFFF
}MRDC_Parameters_tdm_Pattern_e;


typedef enum {
	MRDC_PARAMETERS_UL_SHARINGEUTRA_NR_TDM,
	MRDC_PARAMETERS_UL_SHARINGEUTRA_NR_FDM,
	MRDC_PARAMETERS_UL_SHARINGEUTRA_NR_BOTH,
	MRDC_PARAMETERS_UL_SHARINGEUTRA_NR_max = 0x7FFFFFFF
}MRDC_Parameters_ul_SharingEUTRA_NR_e;


typedef enum {
	MRDC_PARAMETERS_UL_SWITCHINGTIMEEUTRA_NR_TYPE1,
	MRDC_PARAMETERS_UL_SWITCHINGTIMEEUTRA_NR_TYPE2,
	MRDC_PARAMETERS_UL_SWITCHINGTIMEEUTRA_NR_max = 0x7FFFFFFF
}MRDC_Parameters_ul_SwitchingTimeEUTRA_NR_e;


typedef enum {
	MRDC_PARAMETERS_SIMULTANEOUSRXTXINTERBANDENDC_SUPPORTED,
	MRDC_PARAMETERS_SIMULTANEOUSRXTXINTERBANDENDC_max = 0x7FFFFFFF
}MRDC_Parameters_simultaneousRxTxInterBandENDC_e;


typedef enum {
	MRDC_PARAMETERS_ASYNCINTRABANDENDC_SUPPORTED,
	MRDC_PARAMETERS_ASYNCINTRABANDENDC_max = 0x7FFFFFFF
}MRDC_Parameters_asyncIntraBandENDC_e;


typedef struct {
	BOOLEAN                                                            singleUL_Transmission_exist;
	MRDC_Parameters_singleUL_Transmission_e                            singleUL_Transmission;
	BOOLEAN                                                            dynamicPowerSharing_exist;
	MRDC_Parameters_dynamicPowerSharing_e                              dynamicPowerSharing;
	BOOLEAN                                                            tdm_Pattern_exist;
	MRDC_Parameters_tdm_Pattern_e                                      tdm_Pattern;
	BOOLEAN                                                            ul_SharingEUTRA_NR_exist;
	MRDC_Parameters_ul_SharingEUTRA_NR_e                               ul_SharingEUTRA_NR;
	BOOLEAN                                                            ul_SwitchingTimeEUTRA_NR_exist;
	MRDC_Parameters_ul_SwitchingTimeEUTRA_NR_e                         ul_SwitchingTimeEUTRA_NR;
	BOOLEAN                                                            simultaneousRxTxInterBandENDC_exist;
	MRDC_Parameters_simultaneousRxTxInterBandENDC_e                    simultaneousRxTxInterBandENDC;
	BOOLEAN                                                            asyncIntraBandENDC_exist;
	MRDC_Parameters_asyncIntraBandENDC_e                               asyncIntraBandENDC;
	/* Extension marker start. */
}MRDC_Parameters_t;


extern void EncodeMRDC_Parameters(
	MRDC_Parameters_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeMRDC_Parameters(
	MRDC_Parameters_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
