/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * pdcp_parameters.h - this is the header file for message: PDCP-Parameters
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _PDCP_PARAMETERS_H_
#define _PDCP_PARAMETERS_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


typedef struct {
	BOOLEAN                                                            profile0x0000;
	BOOLEAN                                                            profile0x0001;
	BOOLEAN                                                            profile0x0002;
	BOOLEAN                                                            profile0x0003;
	BOOLEAN                                                            profile0x0004;
	BOOLEAN                                                            profile0x0006;
	BOOLEAN                                                            profile0x0101;
	BOOLEAN                                                            profile0x0102;
	BOOLEAN                                                            profile0x0103;
	BOOLEAN                                                            profile0x0104;
}PDCP_Parameters_supportedROHC_Profiles_t;


typedef enum {
	PDCP_PARAMETERS_MAXNUMBERROHC_CONTEXTSESSIONS_CS2,
	PDCP_PARAMETERS_MAXNUMBERROHC_CONTEXTSESSIONS_CS4,
	PDCP_PARAMETERS_MAXNUMBERROHC_CONTEXTSESSIONS_CS8,
	PDCP_PARAMETERS_MAXNUMBERROHC_CONTEXTSESSIONS_CS12,
	PDCP_PARAMETERS_MAXNUMBERROHC_CONTEXTSESSIONS_CS16,
	PDCP_PARAMETERS_MAXNUMBERROHC_CONTEXTSESSIONS_CS24,
	PDCP_PARAMETERS_MAXNUMBERROHC_CONTEXTSESSIONS_CS32,
	PDCP_PARAMETERS_MAXNUMBERROHC_CONTEXTSESSIONS_CS48,
	PDCP_PARAMETERS_MAXNUMBERROHC_CONTEXTSESSIONS_CS64,
	PDCP_PARAMETERS_MAXNUMBERROHC_CONTEXTSESSIONS_CS128,
	PDCP_PARAMETERS_MAXNUMBERROHC_CONTEXTSESSIONS_CS256,
	PDCP_PARAMETERS_MAXNUMBERROHC_CONTEXTSESSIONS_CS512,
	PDCP_PARAMETERS_MAXNUMBERROHC_CONTEXTSESSIONS_CS1024,
	PDCP_PARAMETERS_MAXNUMBERROHC_CONTEXTSESSIONS_CS16384,
	PDCP_PARAMETERS_MAXNUMBERROHC_CONTEXTSESSIONS_SPARE2,
	PDCP_PARAMETERS_MAXNUMBERROHC_CONTEXTSESSIONS_SPARE1,
	PDCP_PARAMETERS_MAXNUMBERROHC_CONTEXTSESSIONS_max = 0x7FFFFFFF
}PDCP_Parameters_maxNumberROHC_ContextSessions_e;


typedef enum {
	PDCP_PARAMETERS_UPLINKONLYROHC_PROFILES_SUPPORTED,
	PDCP_PARAMETERS_UPLINKONLYROHC_PROFILES_max = 0x7FFFFFFF
}PDCP_Parameters_uplinkOnlyROHC_Profiles_e;


typedef enum {
	PDCP_PARAMETERS_CONTINUEROHC_CONTEXT_SUPPORTED,
	PDCP_PARAMETERS_CONTINUEROHC_CONTEXT_max = 0x7FFFFFFF
}PDCP_Parameters_continueROHC_Context_e;


typedef enum {
	PDCP_PARAMETERS_OUTOFORDERDELIVERY_SUPPORTED,
	PDCP_PARAMETERS_OUTOFORDERDELIVERY_max = 0x7FFFFFFF
}PDCP_Parameters_outOfOrderDelivery_e;


typedef enum {
	PDCP_PARAMETERS_SHORTSN_SUPPORTED,
	PDCP_PARAMETERS_SHORTSN_max = 0x7FFFFFFF
}PDCP_Parameters_shortSN_e;


typedef struct {
	PDCP_Parameters_supportedROHC_Profiles_t                           supportedROHC_Profiles;
	PDCP_Parameters_maxNumberROHC_ContextSessions_e                    maxNumberROHC_ContextSessions;
	BOOLEAN                                                            uplinkOnlyROHC_Profiles_exist;
	PDCP_Parameters_uplinkOnlyROHC_Profiles_e                          uplinkOnlyROHC_Profiles;
	BOOLEAN                                                            continueROHC_Context_exist;
	PDCP_Parameters_continueROHC_Context_e                             continueROHC_Context;
	BOOLEAN                                                            outOfOrderDelivery_exist;
	PDCP_Parameters_outOfOrderDelivery_e                               outOfOrderDelivery;
	BOOLEAN                                                            shortSN_exist;
	PDCP_Parameters_shortSN_e                                          shortSN;
	/* Extension marker start. */
}PDCP_Parameters_t;


extern void EncodePDCP_Parameters(
	PDCP_Parameters_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodePDCP_Parameters(
	PDCP_Parameters_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
