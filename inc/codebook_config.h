/* THIS FILE IS PART OF CODEC MESSAGE PROJECT ABOUT 3GPP 36.331
 * codebook_config.h - this is the header file for message: CodebookConfig
 *
 * THIS PROGRAM IS NOT FREE SOFTWARE.
 * YOU SHOULD HAVE RECEIVED A COPY OF LICENSE FROM BINXIAN DUAN, IF NOT, THE BEHAVIOR IS TORT!
 * Copyright (c) 2018 Binxian Duan <binxd@126.com>. All rights reserved.
 */
#ifndef _CODEBOOK_CONFIG_H_
#define _CODEBOOK_CONFIG_H_

#include "types.h"
#include "contants.h" 				
#include "handle_bits.h"


/* struct corresponding asn: CodebookConfig_twoTX_CodebookSubsetRestriction */
/* ASN: BIT STRING SIZE(6) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[1];
}CodebookConfig_twoTX_CodebookSubsetRestriction_t;


typedef struct {
	CodebookConfig_twoTX_CodebookSubsetRestriction_t                   twoTX_CodebookSubsetRestriction;
}CodebookConfig_two_t;


/* struct corresponding asn: CodebookConfig_two_one_TypeI_SinglePanel_Restriction */
/* ASN: BIT STRING SIZE(8) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[1];
}CodebookConfig_two_one_TypeI_SinglePanel_Restriction_t;


/* struct corresponding asn: CodebookConfig_two_two_TypeI_SinglePanel_Restriction */
/* ASN: BIT STRING SIZE(64) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[8];
}CodebookConfig_two_two_TypeI_SinglePanel_Restriction_t;


/* struct corresponding asn: CodebookConfig_four_one_TypeI_SinglePanel_Restriction */
/* ASN: BIT STRING SIZE(16) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[2];
}CodebookConfig_four_one_TypeI_SinglePanel_Restriction_t;


/* struct corresponding asn: CodebookConfig_three_two_TypeI_SinglePanel_Restriction */
/* ASN: BIT STRING SIZE(96) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[12];
}CodebookConfig_three_two_TypeI_SinglePanel_Restriction_t;


/* struct corresponding asn: CodebookConfig_six_one_TypeI_SinglePanel_Restriction */
/* ASN: BIT STRING SIZE(24) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[3];
}CodebookConfig_six_one_TypeI_SinglePanel_Restriction_t;


/* struct corresponding asn: CodebookConfig_four_two_TypeI_SinglePanel_Restriction */
/* ASN: BIT STRING SIZE(128) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[16];
}CodebookConfig_four_two_TypeI_SinglePanel_Restriction_t;


/* struct corresponding asn: CodebookConfig_eight_one_TypeI_SinglePanel_Restriction */
/* ASN: BIT STRING SIZE(32) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[4];
}CodebookConfig_eight_one_TypeI_SinglePanel_Restriction_t;


/* struct corresponding asn: CodebookConfig_four_three_TypeI_SinglePanel_Restriction */
/* ASN: BIT STRING SIZE(192) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[24];
}CodebookConfig_four_three_TypeI_SinglePanel_Restriction_t;


/* struct corresponding asn: CodebookConfig_six_two_TypeI_SinglePanel_Restriction */
/* ASN: BIT STRING SIZE(192) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[24];
}CodebookConfig_six_two_TypeI_SinglePanel_Restriction_t;


/* struct corresponding asn: CodebookConfig_twelve_one_TypeI_SinglePanel_Restriction */
/* ASN: BIT STRING SIZE(48) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[6];
}CodebookConfig_twelve_one_TypeI_SinglePanel_Restriction_t;


/* struct corresponding asn: CodebookConfig_four_four_TypeI_SinglePanel_Restriction */
/* ASN: BIT STRING SIZE(256) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[32];
}CodebookConfig_four_four_TypeI_SinglePanel_Restriction_t;


/* struct corresponding asn: CodebookConfig_eight_two_TypeI_SinglePanel_Restriction */
/* ASN: BIT STRING SIZE(256) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[32];
}CodebookConfig_eight_two_TypeI_SinglePanel_Restriction_t;


/* struct corresponding asn: CodebookConfig_sixteen_one_TypeI_SinglePanel_Restriction */
/* ASN: BIT STRING SIZE(64) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[8];
}CodebookConfig_sixteen_one_TypeI_SinglePanel_Restriction_t;


typedef enum {
	CODEBOOKCONFIG_N1_N2_TWO_ONE_TYPEI_SINGLEPANEL_RESTRICTION,
	CODEBOOKCONFIG_N1_N2_TWO_TWO_TYPEI_SINGLEPANEL_RESTRICTION,
	CODEBOOKCONFIG_N1_N2_FOUR_ONE_TYPEI_SINGLEPANEL_RESTRICTION,
	CODEBOOKCONFIG_N1_N2_THREE_TWO_TYPEI_SINGLEPANEL_RESTRICTION,
	CODEBOOKCONFIG_N1_N2_SIX_ONE_TYPEI_SINGLEPANEL_RESTRICTION,
	CODEBOOKCONFIG_N1_N2_FOUR_TWO_TYPEI_SINGLEPANEL_RESTRICTION,
	CODEBOOKCONFIG_N1_N2_EIGHT_ONE_TYPEI_SINGLEPANEL_RESTRICTION,
	CODEBOOKCONFIG_N1_N2_FOUR_THREE_TYPEI_SINGLEPANEL_RESTRICTION,
	CODEBOOKCONFIG_N1_N2_SIX_TWO_TYPEI_SINGLEPANEL_RESTRICTION,
	CODEBOOKCONFIG_N1_N2_TWELVE_ONE_TYPEI_SINGLEPANEL_RESTRICTION,
	CODEBOOKCONFIG_N1_N2_FOUR_FOUR_TYPEI_SINGLEPANEL_RESTRICTION,
	CODEBOOKCONFIG_N1_N2_EIGHT_TWO_TYPEI_SINGLEPANEL_RESTRICTION,
	CODEBOOKCONFIG_N1_N2_SIXTEEN_ONE_TYPEI_SINGLEPANEL_RESTRICTION,
	CODEBOOKCONFIG_N1_N2_max = 0x7FFFFFFF
}CodebookConfig_n1_n2_e;


/* union corresponding asn: CodebookConfig_n1_n2 */
typedef union {
	CodebookConfig_two_one_TypeI_SinglePanel_Restriction_t             two_one_TypeI_SinglePanel_Restriction;
	CodebookConfig_two_two_TypeI_SinglePanel_Restriction_t             two_two_TypeI_SinglePanel_Restriction;
	CodebookConfig_four_one_TypeI_SinglePanel_Restriction_t            four_one_TypeI_SinglePanel_Restriction;
	CodebookConfig_three_two_TypeI_SinglePanel_Restriction_t           three_two_TypeI_SinglePanel_Restriction;
	CodebookConfig_six_one_TypeI_SinglePanel_Restriction_t             six_one_TypeI_SinglePanel_Restriction;
	CodebookConfig_four_two_TypeI_SinglePanel_Restriction_t            four_two_TypeI_SinglePanel_Restriction;
	CodebookConfig_eight_one_TypeI_SinglePanel_Restriction_t           eight_one_TypeI_SinglePanel_Restriction;
	CodebookConfig_four_three_TypeI_SinglePanel_Restriction_t          four_three_TypeI_SinglePanel_Restriction;
	CodebookConfig_six_two_TypeI_SinglePanel_Restriction_t             six_two_TypeI_SinglePanel_Restriction;
	CodebookConfig_twelve_one_TypeI_SinglePanel_Restriction_t          twelve_one_TypeI_SinglePanel_Restriction;
	CodebookConfig_four_four_TypeI_SinglePanel_Restriction_t           four_four_TypeI_SinglePanel_Restriction;
	CodebookConfig_eight_two_TypeI_SinglePanel_Restriction_t           eight_two_TypeI_SinglePanel_Restriction;
	CodebookConfig_sixteen_one_TypeI_SinglePanel_Restriction_t         sixteen_one_TypeI_SinglePanel_Restriction;
}CodebookConfig_n1_n2_u;


/* struct corresponding asn: CodebookConfig_n1_n2 */
typedef struct {
	CodebookConfig_n1_n2_e                                             type;
	CodebookConfig_n1_n2_u                                             a;
}CodebookConfig_n1_n2_t;


/* struct corresponding asn: CodebookConfig_typeI_SinglePanel_codebookSubsetRestriction_i2 */
/* ASN: BIT STRING SIZE(16) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[2];
}CodebookConfig_typeI_SinglePanel_codebookSubsetRestriction_i2_t;


typedef struct {
	CodebookConfig_n1_n2_t                                             n1_n2;
	BOOLEAN                                                            typeI_SinglePanel_codebookSubsetRestriction_i2_exist;
	CodebookConfig_typeI_SinglePanel_codebookSubsetRestriction_i2_t    typeI_SinglePanel_codebookSubsetRestriction_i2;
}CodebookConfig_moreThanTwo_t;


typedef enum {
	CODEBOOKCONFIG_NROFANTENNAPORTS_TWO,
	CODEBOOKCONFIG_NROFANTENNAPORTS_MORETHANTWO,
	CODEBOOKCONFIG_NROFANTENNAPORTS_max = 0x7FFFFFFF
}CodebookConfig_nrOfAntennaPorts_e;


/* union corresponding asn: CodebookConfig_nrOfAntennaPorts */
typedef union {
	CodebookConfig_two_t                                               two;
	CodebookConfig_moreThanTwo_t                                       moreThanTwo;
}CodebookConfig_nrOfAntennaPorts_u;


/* struct corresponding asn: CodebookConfig_nrOfAntennaPorts */
typedef struct {
	CodebookConfig_nrOfAntennaPorts_e                                  type;
	CodebookConfig_nrOfAntennaPorts_u                                  a;
}CodebookConfig_nrOfAntennaPorts_t;


/* struct corresponding asn: CodebookConfig_typeI_SinglePanel_ri_Restriction */
/* ASN: BIT STRING SIZE(8) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[1];
}CodebookConfig_typeI_SinglePanel_ri_Restriction_t;


typedef struct {
	CodebookConfig_nrOfAntennaPorts_t                                  nrOfAntennaPorts;
	CodebookConfig_typeI_SinglePanel_ri_Restriction_t                  typeI_SinglePanel_ri_Restriction;
}CodebookConfig_typeI_SinglePanel_t;


/* struct corresponding asn: CodebookConfig_two_two_one_TypeI_MultiPanel_Restriction */
/* ASN: BIT STRING SIZE(8) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[1];
}CodebookConfig_two_two_one_TypeI_MultiPanel_Restriction_t;


/* struct corresponding asn: CodebookConfig_two_four_one_TypeI_MultiPanel_Restriction */
/* ASN: BIT STRING SIZE(16) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[2];
}CodebookConfig_two_four_one_TypeI_MultiPanel_Restriction_t;


/* struct corresponding asn: CodebookConfig_four_two_one_TypeI_MultiPanel_Restriction */
/* ASN: BIT STRING SIZE(8) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[1];
}CodebookConfig_four_two_one_TypeI_MultiPanel_Restriction_t;


/* struct corresponding asn: CodebookConfig_two_two_two_TypeI_MultiPanel_Restriction */
/* ASN: BIT STRING SIZE(64) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[8];
}CodebookConfig_two_two_two_TypeI_MultiPanel_Restriction_t;


/* struct corresponding asn: CodebookConfig_two_eight_one_TypeI_MultiPanel_Restriction */
/* ASN: BIT STRING SIZE(32) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[4];
}CodebookConfig_two_eight_one_TypeI_MultiPanel_Restriction_t;


/* struct corresponding asn: CodebookConfig_four_four_one_TypeI_MultiPanel_Restriction */
/* ASN: BIT STRING SIZE(16) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[2];
}CodebookConfig_four_four_one_TypeI_MultiPanel_Restriction_t;


/* struct corresponding asn: CodebookConfig_two_four_two_TypeI_MultiPanel_Restriction */
/* ASN: BIT STRING SIZE(128) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[16];
}CodebookConfig_two_four_two_TypeI_MultiPanel_Restriction_t;


/* struct corresponding asn: CodebookConfig_four_two_two_TypeI_MultiPanel_Restriction */
/* ASN: BIT STRING SIZE(64) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[8];
}CodebookConfig_four_two_two_TypeI_MultiPanel_Restriction_t;


typedef enum {
	CODEBOOKCONFIG_NG_N1_N2_TWO_TWO_ONE_TYPEI_MULTIPANEL_RESTRICTION,
	CODEBOOKCONFIG_NG_N1_N2_TWO_FOUR_ONE_TYPEI_MULTIPANEL_RESTRICTION,
	CODEBOOKCONFIG_NG_N1_N2_FOUR_TWO_ONE_TYPEI_MULTIPANEL_RESTRICTION,
	CODEBOOKCONFIG_NG_N1_N2_TWO_TWO_TWO_TYPEI_MULTIPANEL_RESTRICTION,
	CODEBOOKCONFIG_NG_N1_N2_TWO_EIGHT_ONE_TYPEI_MULTIPANEL_RESTRICTION,
	CODEBOOKCONFIG_NG_N1_N2_FOUR_FOUR_ONE_TYPEI_MULTIPANEL_RESTRICTION,
	CODEBOOKCONFIG_NG_N1_N2_TWO_FOUR_TWO_TYPEI_MULTIPANEL_RESTRICTION,
	CODEBOOKCONFIG_NG_N1_N2_FOUR_TWO_TWO_TYPEI_MULTIPANEL_RESTRICTION,
	CODEBOOKCONFIG_NG_N1_N2_max = 0x7FFFFFFF
}CodebookConfig_ng_n1_n2_e;


/* union corresponding asn: CodebookConfig_ng_n1_n2 */
typedef union {
	CodebookConfig_two_two_one_TypeI_MultiPanel_Restriction_t          two_two_one_TypeI_MultiPanel_Restriction;
	CodebookConfig_two_four_one_TypeI_MultiPanel_Restriction_t         two_four_one_TypeI_MultiPanel_Restriction;
	CodebookConfig_four_two_one_TypeI_MultiPanel_Restriction_t         four_two_one_TypeI_MultiPanel_Restriction;
	CodebookConfig_two_two_two_TypeI_MultiPanel_Restriction_t          two_two_two_TypeI_MultiPanel_Restriction;
	CodebookConfig_two_eight_one_TypeI_MultiPanel_Restriction_t        two_eight_one_TypeI_MultiPanel_Restriction;
	CodebookConfig_four_four_one_TypeI_MultiPanel_Restriction_t        four_four_one_TypeI_MultiPanel_Restriction;
	CodebookConfig_two_four_two_TypeI_MultiPanel_Restriction_t         two_four_two_TypeI_MultiPanel_Restriction;
	CodebookConfig_four_two_two_TypeI_MultiPanel_Restriction_t         four_two_two_TypeI_MultiPanel_Restriction;
}CodebookConfig_ng_n1_n2_u;


/* struct corresponding asn: CodebookConfig_ng_n1_n2 */
typedef struct {
	CodebookConfig_ng_n1_n2_e                                          type;
	CodebookConfig_ng_n1_n2_u                                          a;
}CodebookConfig_ng_n1_n2_t;


/* struct corresponding asn: CodebookConfig_ri_Restriction */
/* ASN: BIT STRING SIZE(4) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[1];
}CodebookConfig_ri_Restriction_t;


typedef struct {
	CodebookConfig_ng_n1_n2_t                                          ng_n1_n2;
	CodebookConfig_ri_Restriction_t                                    ri_Restriction;
}CodebookConfig_typeI_MultiPanel_t;


typedef enum {
	CODEBOOKCONFIG_SUBTYPE_TYPEI_SINGLEPANEL,
	CODEBOOKCONFIG_SUBTYPE_TYPEI_MULTIPANEL,
	CODEBOOKCONFIG_SUBTYPE_max = 0x7FFFFFFF
}CodebookConfig_subType_e;


/* union corresponding asn: CodebookConfig_subType */
typedef union {
	CodebookConfig_typeI_SinglePanel_t                                 typeI_SinglePanel;
	CodebookConfig_typeI_MultiPanel_t                                  typeI_MultiPanel;
}CodebookConfig_subType_u;


/* struct corresponding asn: CodebookConfig_subType */
typedef struct {
	CodebookConfig_subType_e                                           type;
	CodebookConfig_subType_u                                           a;
}CodebookConfig_subType_t;


typedef struct {
	CodebookConfig_subType_t                                           subType;
	uint32                                                             codebookMode;
}CodebookConfig_type1_t;


/* struct corresponding asn: CodebookConfig_two_one */
/* ASN: BIT STRING SIZE(16) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[2];
}CodebookConfig_two_one_t;


/* struct corresponding asn: CodebookConfig_two_two */
/* ASN: BIT STRING SIZE(43) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[6];
}CodebookConfig_two_two_t;


/* struct corresponding asn: CodebookConfig_four_one */
/* ASN: BIT STRING SIZE(32) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[4];
}CodebookConfig_four_one_t;


/* struct corresponding asn: CodebookConfig_three_two */
/* ASN: BIT STRING SIZE(59) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[8];
}CodebookConfig_three_two_t;


/* struct corresponding asn: CodebookConfig_six_one */
/* ASN: BIT STRING SIZE(48) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[6];
}CodebookConfig_six_one_t;


/* struct corresponding asn: CodebookConfig_four_two */
/* ASN: BIT STRING SIZE(75) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[10];
}CodebookConfig_four_two_t;


/* struct corresponding asn: CodebookConfig_eight_one */
/* ASN: BIT STRING SIZE(64) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[8];
}CodebookConfig_eight_one_t;


/* struct corresponding asn: CodebookConfig_four_three */
/* ASN: BIT STRING SIZE(107) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[14];
}CodebookConfig_four_three_t;


/* struct corresponding asn: CodebookConfig_six_two */
/* ASN: BIT STRING SIZE(107) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[14];
}CodebookConfig_six_two_t;


/* struct corresponding asn: CodebookConfig_twelve_one */
/* ASN: BIT STRING SIZE(96) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[12];
}CodebookConfig_twelve_one_t;


/* struct corresponding asn: CodebookConfig_four_four */
/* ASN: BIT STRING SIZE(139) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[18];
}CodebookConfig_four_four_t;


/* struct corresponding asn: CodebookConfig_eight_two */
/* ASN: BIT STRING SIZE(139) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[18];
}CodebookConfig_eight_two_t;


/* struct corresponding asn: CodebookConfig_sixteen_one */
/* ASN: BIT STRING SIZE(128) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[16];
}CodebookConfig_sixteen_one_t;


typedef enum {
	CODEBOOKCONFIG_N1_N2_CODEBOOKSUBSETRESTRICTION_TWO_ONE,
	CODEBOOKCONFIG_N1_N2_CODEBOOKSUBSETRESTRICTION_TWO_TWO,
	CODEBOOKCONFIG_N1_N2_CODEBOOKSUBSETRESTRICTION_FOUR_ONE,
	CODEBOOKCONFIG_N1_N2_CODEBOOKSUBSETRESTRICTION_THREE_TWO,
	CODEBOOKCONFIG_N1_N2_CODEBOOKSUBSETRESTRICTION_SIX_ONE,
	CODEBOOKCONFIG_N1_N2_CODEBOOKSUBSETRESTRICTION_FOUR_TWO,
	CODEBOOKCONFIG_N1_N2_CODEBOOKSUBSETRESTRICTION_EIGHT_ONE,
	CODEBOOKCONFIG_N1_N2_CODEBOOKSUBSETRESTRICTION_FOUR_THREE,
	CODEBOOKCONFIG_N1_N2_CODEBOOKSUBSETRESTRICTION_SIX_TWO,
	CODEBOOKCONFIG_N1_N2_CODEBOOKSUBSETRESTRICTION_TWELVE_ONE,
	CODEBOOKCONFIG_N1_N2_CODEBOOKSUBSETRESTRICTION_FOUR_FOUR,
	CODEBOOKCONFIG_N1_N2_CODEBOOKSUBSETRESTRICTION_EIGHT_TWO,
	CODEBOOKCONFIG_N1_N2_CODEBOOKSUBSETRESTRICTION_SIXTEEN_ONE,
	CODEBOOKCONFIG_N1_N2_CODEBOOKSUBSETRESTRICTION_max = 0x7FFFFFFF
}CodebookConfig_n1_n2_codebookSubsetRestriction_e;


/* union corresponding asn: CodebookConfig_n1_n2_codebookSubsetRestriction */
typedef union {
	CodebookConfig_two_one_t                                           two_one;
	CodebookConfig_two_two_t                                           two_two;
	CodebookConfig_four_one_t                                          four_one;
	CodebookConfig_three_two_t                                         three_two;
	CodebookConfig_six_one_t                                           six_one;
	CodebookConfig_four_two_t                                          four_two;
	CodebookConfig_eight_one_t                                         eight_one;
	CodebookConfig_four_three_t                                        four_three;
	CodebookConfig_six_two_t                                           six_two;
	CodebookConfig_twelve_one_t                                        twelve_one;
	CodebookConfig_four_four_t                                         four_four;
	CodebookConfig_eight_two_t                                         eight_two;
	CodebookConfig_sixteen_one_t                                       sixteen_one;
}CodebookConfig_n1_n2_codebookSubsetRestriction_u;


/* struct corresponding asn: CodebookConfig_n1_n2_codebookSubsetRestriction */
typedef struct {
	CodebookConfig_n1_n2_codebookSubsetRestriction_e                   type;
	CodebookConfig_n1_n2_codebookSubsetRestriction_u                   a;
}CodebookConfig_n1_n2_codebookSubsetRestriction_t;


/* struct corresponding asn: CodebookConfig_typeII_RI_Restriction */
/* ASN: BIT STRING SIZE(2) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[1];
}CodebookConfig_typeII_RI_Restriction_t;


typedef struct {
	CodebookConfig_n1_n2_codebookSubsetRestriction_t                   n1_n2_codebookSubsetRestriction;
	CodebookConfig_typeII_RI_Restriction_t                             typeII_RI_Restriction;
}CodebookConfig_typeII_t;


typedef enum {
	CODEBOOKCONFIG_PORTSELECTIONSAMPLINGSIZE_N1,
	CODEBOOKCONFIG_PORTSELECTIONSAMPLINGSIZE_N2,
	CODEBOOKCONFIG_PORTSELECTIONSAMPLINGSIZE_N3,
	CODEBOOKCONFIG_PORTSELECTIONSAMPLINGSIZE_N4,
	CODEBOOKCONFIG_PORTSELECTIONSAMPLINGSIZE_max = 0x7FFFFFFF
}CodebookConfig_portSelectionSamplingSize_e;


/* struct corresponding asn: CodebookConfig_typeII_PortSelectionRI_Restriction */
/* ASN: BIT STRING SIZE(2) */
typedef struct {
	uint32                                                             bits_num;
	uint8                                                              value[1];
}CodebookConfig_typeII_PortSelectionRI_Restriction_t;


typedef struct {
	BOOLEAN                                                            portSelectionSamplingSize_exist;
	CodebookConfig_portSelectionSamplingSize_e                         portSelectionSamplingSize;
	CodebookConfig_typeII_PortSelectionRI_Restriction_t                typeII_PortSelectionRI_Restriction;
}CodebookConfig_typeII_PortSelection_t;


typedef enum {
	CODEBOOKCONFIG_SUBTYPE_1_TYPEII,
	CODEBOOKCONFIG_SUBTYPE_1_TYPEII_PORTSELECTION,
	CODEBOOKCONFIG_SUBTYPE_1_max = 0x7FFFFFFF
}CodebookConfig_subType_1_e;


/* union corresponding asn: CodebookConfig_subType_1 */
typedef union {
	CodebookConfig_typeII_t                                            typeII;
	CodebookConfig_typeII_PortSelection_t                              typeII_PortSelection;
}CodebookConfig_subType_1_u;


/* struct corresponding asn: CodebookConfig_subType_1 */
typedef struct {
	CodebookConfig_subType_1_e                                         type;
	CodebookConfig_subType_1_u                                         a;
}CodebookConfig_subType_1_t;


typedef enum {
	CODEBOOKCONFIG_PHASEALPHABETSIZE_N4,
	CODEBOOKCONFIG_PHASEALPHABETSIZE_N8,
	CODEBOOKCONFIG_PHASEALPHABETSIZE_max = 0x7FFFFFFF
}CodebookConfig_phaseAlphabetSize_e;


typedef enum {
	CODEBOOKCONFIG_NUMBEROFBEAMS_TWO,
	CODEBOOKCONFIG_NUMBEROFBEAMS_THREE,
	CODEBOOKCONFIG_NUMBEROFBEAMS_FOUR,
	CODEBOOKCONFIG_NUMBEROFBEAMS_max = 0x7FFFFFFF
}CodebookConfig_numberOfBeams_e;


typedef struct {
	CodebookConfig_subType_1_t                                         subType;
	CodebookConfig_phaseAlphabetSize_e                                 phaseAlphabetSize;
	BOOLEAN                                                            subbandAmplitude;
	CodebookConfig_numberOfBeams_e                                     numberOfBeams;
}CodebookConfig_type2_t;


typedef enum {
	CODEBOOKCONFIG_CODEBOOKTYPE_TYPE1,
	CODEBOOKCONFIG_CODEBOOKTYPE_TYPE2,
	CODEBOOKCONFIG_CODEBOOKTYPE_max = 0x7FFFFFFF
}CodebookConfig_codebookType_e;


/* union corresponding asn: CodebookConfig_codebookType */
typedef union {
	CodebookConfig_type1_t                                             type1;
	CodebookConfig_type2_t                                             type2;
}CodebookConfig_codebookType_u;


/* struct corresponding asn: CodebookConfig_codebookType */
typedef struct {
	CodebookConfig_codebookType_e                                      type;
	CodebookConfig_codebookType_u                                      a;
}CodebookConfig_codebookType_t;


typedef struct {
	CodebookConfig_codebookType_t                                      codebookType;
}CodebookConfig_t;


extern void EncodeCodebookConfig(
	CodebookConfig_t *i_encoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);
extern void DecodeCodebookConfig(
	CodebookConfig_t *o_decoded_field, 
	uint8 *buff, 
	BitsIter *bits_iter, 
	void *asn_error);

#endif
