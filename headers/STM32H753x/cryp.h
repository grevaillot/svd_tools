#pragma once 

/* --- CRYP: Cryptographic processor -------------------------------- */

/** @defgroup cryp_registers Cryptographic processor Register
@{*/

/** CRYP_CR control register **/
#define CRYP_CR			MMIO32(CRYP_BASE + 0x00)
/** CRYP_SR status register **/
#define CRYP_SR			MMIO32(CRYP_BASE + 0x04)
/** CRYP_DIN data input register **/
#define CRYP_DIN			MMIO32(CRYP_BASE + 0x08)
/** CRYP_DOUT data output register **/
#define CRYP_DOUT			MMIO32(CRYP_BASE + 0x0c)
/** CRYP_DMACR DMA control register **/
#define CRYP_DMACR			MMIO32(CRYP_BASE + 0x10)
/** CRYP_IMSCR interrupt mask set/clear register **/
#define CRYP_IMSCR			MMIO32(CRYP_BASE + 0x14)
/** CRYP_RISR raw interrupt status register **/
#define CRYP_RISR			MMIO32(CRYP_BASE + 0x18)
/** CRYP_MISR masked interrupt status register **/
#define CRYP_MISR			MMIO32(CRYP_BASE + 0x1c)
/** CRYP_K0LR key registers **/
#define CRYP_K0LR			MMIO32(CRYP_BASE + 0x20)
/** CRYP_K0RR key registers **/
#define CRYP_K0RR			MMIO32(CRYP_BASE + 0x24)
/** CRYP_K1LR key registers **/
#define CRYP_K1LR			MMIO32(CRYP_BASE + 0x28)
/** CRYP_K1RR key registers **/
#define CRYP_K1RR			MMIO32(CRYP_BASE + 0x2c)
/** CRYP_K2LR key registers **/
#define CRYP_K2LR			MMIO32(CRYP_BASE + 0x30)
/** CRYP_K2RR key registers **/
#define CRYP_K2RR			MMIO32(CRYP_BASE + 0x34)
/** CRYP_K3LR key registers **/
#define CRYP_K3LR			MMIO32(CRYP_BASE + 0x38)
/** CRYP_K3RR key registers **/
#define CRYP_K3RR			MMIO32(CRYP_BASE + 0x3c)
/** CRYP_IV0LR initialization vector registers **/
#define CRYP_IV0LR			MMIO32(CRYP_BASE + 0x40)
/** CRYP_IV0RR initialization vector registers **/
#define CRYP_IV0RR			MMIO32(CRYP_BASE + 0x44)
/** CRYP_IV1LR initialization vector registers **/
#define CRYP_IV1LR			MMIO32(CRYP_BASE + 0x48)
/** CRYP_IV1RR initialization vector registers **/
#define CRYP_IV1RR			MMIO32(CRYP_BASE + 0x4c)
/** CRYP_CSGCMCCM0R context swap register **/
#define CRYP_CSGCMCCM0R			MMIO32(CRYP_BASE + 0x50)
/** CRYP_CSGCMCCM1R context swap register **/
#define CRYP_CSGCMCCM1R			MMIO32(CRYP_BASE + 0x54)
/** CRYP_CSGCMCCM2R context swap register **/
#define CRYP_CSGCMCCM2R			MMIO32(CRYP_BASE + 0x58)
/** CRYP_CSGCMCCM3R context swap register **/
#define CRYP_CSGCMCCM3R			MMIO32(CRYP_BASE + 0x5c)
/** CRYP_CSGCMCCM4R context swap register **/
#define CRYP_CSGCMCCM4R			MMIO32(CRYP_BASE + 0x60)
/** CRYP_CSGCMCCM5R context swap register **/
#define CRYP_CSGCMCCM5R			MMIO32(CRYP_BASE + 0x64)
/** CRYP_CSGCMCCM6R context swap register **/
#define CRYP_CSGCMCCM6R			MMIO32(CRYP_BASE + 0x68)
/** CRYP_CSGCMCCM7R context swap register **/
#define CRYP_CSGCMCCM7R			MMIO32(CRYP_BASE + 0x6c)
/** CRYP_CSGCM0R context swap register **/
#define CRYP_CSGCM0R			MMIO32(CRYP_BASE + 0x70)
/** CRYP_CSGCM1R context swap register **/
#define CRYP_CSGCM1R			MMIO32(CRYP_BASE + 0x74)
/** CRYP_CSGCM2R context swap register **/
#define CRYP_CSGCM2R			MMIO32(CRYP_BASE + 0x78)
/** CRYP_CSGCM3R context swap register **/
#define CRYP_CSGCM3R			MMIO32(CRYP_BASE + 0x7c)
/** CRYP_CSGCM4R context swap register **/
#define CRYP_CSGCM4R			MMIO32(CRYP_BASE + 0x80)
/** CRYP_CSGCM5R context swap register **/
#define CRYP_CSGCM5R			MMIO32(CRYP_BASE + 0x84)
/** CRYP_CSGCM6R context swap register **/
#define CRYP_CSGCM6R			MMIO32(CRYP_BASE + 0x88)
/** CRYP_CSGCM7R context swap register **/
#define CRYP_CSGCM7R			MMIO32(CRYP_BASE + 0x8c)

/**@}*/


/** @defgroup cryp_cr CR control register
@{*/

/** CRYP_CR_ALGOMODE3 ALGOMODE **/
#define CRYP_CR_ALGOMODE3		(1 << 19)

#define CRYP_CR_GCM_CCMPH_SHIFT		16
#define CRYP_CR_GCM_CCMPH_MASK		0x03
/** @defgroup cryp_cr_gcm_ccmph GCMCCMPH GCM_CCMPH
@{*/
/**@}*/

/** CRYP_CR_CRYPEN Cryptographic processor enable **/
#define CRYP_CR_CRYPEN		(1 << 15)
/** CRYP_CR_FFLUSH FIFO flush **/
#define CRYP_CR_FFLUSH		(1 << 14)

#define CRYP_CR_KEYSIZE_SHIFT		8
#define CRYP_CR_KEYSIZE_MASK		0x03
/** @defgroup cryp_cr_keysize KEYSIZE Key size selection (AES mode only)
@{*/
/**@}*/


#define CRYP_CR_DATATYPE_SHIFT		6
#define CRYP_CR_DATATYPE_MASK		0x03
/** @defgroup cryp_cr_datatype DATATYPE Data type selection
@{*/
/**@}*/


#define CRYP_CR_ALGOMODE0_SHIFT		3
#define CRYP_CR_ALGOMODE0_MASK		0x07
/** @defgroup cryp_cr_algomode0 ALGOMODE0 Algorithm mode
@{*/
/**@}*/

/** CRYP_CR_ALGODIR Algorithm direction **/
#define CRYP_CR_ALGODIR		(1 << 2)

/**@}*/

/** @defgroup cryp_sr SR status register
@{*/

/** CRYP_SR_BUSY Busy bit **/
#define CRYP_SR_BUSY		(1 << 4)
/** CRYP_SR_OFFU Output FIFO full **/
#define CRYP_SR_OFFU		(1 << 3)
/** CRYP_SR_OFNE Output FIFO not empty **/
#define CRYP_SR_OFNE		(1 << 2)
/** CRYP_SR_IFNF Input FIFO not full **/
#define CRYP_SR_IFNF		(1 << 1)
/** CRYP_SR_IFEM Input FIFO empty **/
#define CRYP_SR_IFEM		(1 << 0)

/**@}*/

/** @defgroup cryp_din DIN data input register
@{*/


#define CRYP_DIN_DATAIN_SHIFT		0
#define CRYP_DIN_DATAIN_MASK		0xffffffff
/** @defgroup cryp_din_datain DATAIN Data input
@{*/
/**@}*/


/**@}*/

/** @defgroup cryp_dout DOUT data output register
@{*/


#define CRYP_DOUT_DATAOUT_SHIFT		0
#define CRYP_DOUT_DATAOUT_MASK		0xffffffff
/** @defgroup cryp_dout_dataout DATAOUT Data output
@{*/
/**@}*/


/**@}*/

/** @defgroup cryp_dmacr DMACR DMA control register
@{*/

/** CRYP_DMACR_DOEN DMA output enable **/
#define CRYP_DMACR_DOEN		(1 << 1)
/** CRYP_DMACR_DIEN DMA input enable **/
#define CRYP_DMACR_DIEN		(1 << 0)

/**@}*/

/** @defgroup cryp_imscr IMSCR interrupt mask set/clear register
@{*/

/** CRYP_IMSCR_OUTIM Output FIFO service interrupt mask **/
#define CRYP_IMSCR_OUTIM		(1 << 1)
/** CRYP_IMSCR_INIM Input FIFO service interrupt mask **/
#define CRYP_IMSCR_INIM		(1 << 0)

/**@}*/

/** @defgroup cryp_risr RISR raw interrupt status register
@{*/

/** CRYP_RISR_OUTRIS Output FIFO service raw interrupt status **/
#define CRYP_RISR_OUTRIS		(1 << 1)
/** CRYP_RISR_INRIS Input FIFO service raw interrupt status **/
#define CRYP_RISR_INRIS		(1 << 0)

/**@}*/

/** @defgroup cryp_misr MISR masked interrupt status register
@{*/

/** CRYP_MISR_OUTMIS Output FIFO service masked interrupt status **/
#define CRYP_MISR_OUTMIS		(1 << 1)
/** CRYP_MISR_INMIS Input FIFO service masked interrupt status **/
#define CRYP_MISR_INMIS		(1 << 0)

/**@}*/

/** @defgroup cryp_k0lr K0LR key registers
@{*/

/** CRYP_K0LR_K255 K255 **/
#define CRYP_K0LR_K255		(1 << 31)
/** CRYP_K0LR_K254 K254 **/
#define CRYP_K0LR_K254		(1 << 30)
/** CRYP_K0LR_K253 K253 **/
#define CRYP_K0LR_K253		(1 << 29)
/** CRYP_K0LR_K252 K252 **/
#define CRYP_K0LR_K252		(1 << 28)
/** CRYP_K0LR_K251 K251 **/
#define CRYP_K0LR_K251		(1 << 27)
/** CRYP_K0LR_K250 K250 **/
#define CRYP_K0LR_K250		(1 << 26)
/** CRYP_K0LR_K249 K249 **/
#define CRYP_K0LR_K249		(1 << 25)
/** CRYP_K0LR_K248 K248 **/
#define CRYP_K0LR_K248		(1 << 24)
/** CRYP_K0LR_K247 K247 **/
#define CRYP_K0LR_K247		(1 << 23)
/** CRYP_K0LR_K246 K246 **/
#define CRYP_K0LR_K246		(1 << 22)
/** CRYP_K0LR_K245 K245 **/
#define CRYP_K0LR_K245		(1 << 21)
/** CRYP_K0LR_K244 K244 **/
#define CRYP_K0LR_K244		(1 << 20)
/** CRYP_K0LR_K243 K243 **/
#define CRYP_K0LR_K243		(1 << 19)
/** CRYP_K0LR_K242 K242 **/
#define CRYP_K0LR_K242		(1 << 18)
/** CRYP_K0LR_K241 K241 **/
#define CRYP_K0LR_K241		(1 << 17)
/** CRYP_K0LR_K240 K240 **/
#define CRYP_K0LR_K240		(1 << 16)
/** CRYP_K0LR_K239 K239 **/
#define CRYP_K0LR_K239		(1 << 15)
/** CRYP_K0LR_K238 K238 **/
#define CRYP_K0LR_K238		(1 << 14)
/** CRYP_K0LR_K237 K237 **/
#define CRYP_K0LR_K237		(1 << 13)
/** CRYP_K0LR_K236 K236 **/
#define CRYP_K0LR_K236		(1 << 12)
/** CRYP_K0LR_K235 K235 **/
#define CRYP_K0LR_K235		(1 << 11)
/** CRYP_K0LR_K234 K234 **/
#define CRYP_K0LR_K234		(1 << 10)
/** CRYP_K0LR_K233 K233 **/
#define CRYP_K0LR_K233		(1 << 9)
/** CRYP_K0LR_K232 K232 **/
#define CRYP_K0LR_K232		(1 << 8)
/** CRYP_K0LR_K231 K231 **/
#define CRYP_K0LR_K231		(1 << 7)
/** CRYP_K0LR_K230 K230 **/
#define CRYP_K0LR_K230		(1 << 6)
/** CRYP_K0LR_K229 K229 **/
#define CRYP_K0LR_K229		(1 << 5)
/** CRYP_K0LR_K228 K228 **/
#define CRYP_K0LR_K228		(1 << 4)
/** CRYP_K0LR_K227 K227 **/
#define CRYP_K0LR_K227		(1 << 3)
/** CRYP_K0LR_K226 K226 **/
#define CRYP_K0LR_K226		(1 << 2)
/** CRYP_K0LR_K225 K225 **/
#define CRYP_K0LR_K225		(1 << 1)
/** CRYP_K0LR_K224 K224 **/
#define CRYP_K0LR_K224		(1 << 0)

/**@}*/

/** @defgroup cryp_k0rr K0RR key registers
@{*/

/** CRYP_K0RR_K223 K223 **/
#define CRYP_K0RR_K223		(1 << 31)
/** CRYP_K0RR_K222 K222 **/
#define CRYP_K0RR_K222		(1 << 30)
/** CRYP_K0RR_K221 K221 **/
#define CRYP_K0RR_K221		(1 << 29)
/** CRYP_K0RR_K220 K220 **/
#define CRYP_K0RR_K220		(1 << 28)
/** CRYP_K0RR_K219 K219 **/
#define CRYP_K0RR_K219		(1 << 27)
/** CRYP_K0RR_K218 K218 **/
#define CRYP_K0RR_K218		(1 << 26)
/** CRYP_K0RR_K217 K217 **/
#define CRYP_K0RR_K217		(1 << 25)
/** CRYP_K0RR_K216 K216 **/
#define CRYP_K0RR_K216		(1 << 24)
/** CRYP_K0RR_K215 K215 **/
#define CRYP_K0RR_K215		(1 << 23)
/** CRYP_K0RR_K214 K214 **/
#define CRYP_K0RR_K214		(1 << 22)
/** CRYP_K0RR_K213 K213 **/
#define CRYP_K0RR_K213		(1 << 21)
/** CRYP_K0RR_K212 K212 **/
#define CRYP_K0RR_K212		(1 << 20)
/** CRYP_K0RR_K211 K211 **/
#define CRYP_K0RR_K211		(1 << 19)
/** CRYP_K0RR_K210 K210 **/
#define CRYP_K0RR_K210		(1 << 18)
/** CRYP_K0RR_K209 K209 **/
#define CRYP_K0RR_K209		(1 << 17)
/** CRYP_K0RR_K208 K208 **/
#define CRYP_K0RR_K208		(1 << 16)
/** CRYP_K0RR_K207 K207 **/
#define CRYP_K0RR_K207		(1 << 15)
/** CRYP_K0RR_K206 K206 **/
#define CRYP_K0RR_K206		(1 << 14)
/** CRYP_K0RR_K205 K205 **/
#define CRYP_K0RR_K205		(1 << 13)
/** CRYP_K0RR_K204 K204 **/
#define CRYP_K0RR_K204		(1 << 12)
/** CRYP_K0RR_K203 K203 **/
#define CRYP_K0RR_K203		(1 << 11)
/** CRYP_K0RR_K202 K202 **/
#define CRYP_K0RR_K202		(1 << 10)
/** CRYP_K0RR_K201 K201 **/
#define CRYP_K0RR_K201		(1 << 9)
/** CRYP_K0RR_K200 K200 **/
#define CRYP_K0RR_K200		(1 << 8)
/** CRYP_K0RR_K199 K199 **/
#define CRYP_K0RR_K199		(1 << 7)
/** CRYP_K0RR_K198 K198 **/
#define CRYP_K0RR_K198		(1 << 6)
/** CRYP_K0RR_K197 K197 **/
#define CRYP_K0RR_K197		(1 << 5)
/** CRYP_K0RR_K196 K196 **/
#define CRYP_K0RR_K196		(1 << 4)
/** CRYP_K0RR_K195 K195 **/
#define CRYP_K0RR_K195		(1 << 3)
/** CRYP_K0RR_K194 K194 **/
#define CRYP_K0RR_K194		(1 << 2)
/** CRYP_K0RR_K193 K193 **/
#define CRYP_K0RR_K193		(1 << 1)
/** CRYP_K0RR_K192 K192 **/
#define CRYP_K0RR_K192		(1 << 0)

/**@}*/

/** @defgroup cryp_k1lr K1LR key registers
@{*/

/** CRYP_K1LR_K191 K191 **/
#define CRYP_K1LR_K191		(1 << 31)
/** CRYP_K1LR_K190 K190 **/
#define CRYP_K1LR_K190		(1 << 30)
/** CRYP_K1LR_K189 K189 **/
#define CRYP_K1LR_K189		(1 << 29)
/** CRYP_K1LR_K188 K188 **/
#define CRYP_K1LR_K188		(1 << 28)
/** CRYP_K1LR_K187 K187 **/
#define CRYP_K1LR_K187		(1 << 27)
/** CRYP_K1LR_K186 K186 **/
#define CRYP_K1LR_K186		(1 << 26)
/** CRYP_K1LR_K185 K185 **/
#define CRYP_K1LR_K185		(1 << 25)
/** CRYP_K1LR_K184 K184 **/
#define CRYP_K1LR_K184		(1 << 24)
/** CRYP_K1LR_K183 K183 **/
#define CRYP_K1LR_K183		(1 << 23)
/** CRYP_K1LR_K182 K182 **/
#define CRYP_K1LR_K182		(1 << 22)
/** CRYP_K1LR_K181 K181 **/
#define CRYP_K1LR_K181		(1 << 21)
/** CRYP_K1LR_K180 K180 **/
#define CRYP_K1LR_K180		(1 << 20)
/** CRYP_K1LR_K179 K179 **/
#define CRYP_K1LR_K179		(1 << 19)
/** CRYP_K1LR_K178 K178 **/
#define CRYP_K1LR_K178		(1 << 18)
/** CRYP_K1LR_K177 K177 **/
#define CRYP_K1LR_K177		(1 << 17)
/** CRYP_K1LR_K176 K176 **/
#define CRYP_K1LR_K176		(1 << 16)
/** CRYP_K1LR_K175 K175 **/
#define CRYP_K1LR_K175		(1 << 15)
/** CRYP_K1LR_K174 K174 **/
#define CRYP_K1LR_K174		(1 << 14)
/** CRYP_K1LR_K173 K173 **/
#define CRYP_K1LR_K173		(1 << 13)
/** CRYP_K1LR_K172 K172 **/
#define CRYP_K1LR_K172		(1 << 12)
/** CRYP_K1LR_K171 K171 **/
#define CRYP_K1LR_K171		(1 << 11)
/** CRYP_K1LR_K170 K170 **/
#define CRYP_K1LR_K170		(1 << 10)
/** CRYP_K1LR_K169 K169 **/
#define CRYP_K1LR_K169		(1 << 9)
/** CRYP_K1LR_K168 K168 **/
#define CRYP_K1LR_K168		(1 << 8)
/** CRYP_K1LR_K167 K167 **/
#define CRYP_K1LR_K167		(1 << 7)
/** CRYP_K1LR_K166 K166 **/
#define CRYP_K1LR_K166		(1 << 6)
/** CRYP_K1LR_K165 K165 **/
#define CRYP_K1LR_K165		(1 << 5)
/** CRYP_K1LR_K164 K164 **/
#define CRYP_K1LR_K164		(1 << 4)
/** CRYP_K1LR_K163 K163 **/
#define CRYP_K1LR_K163		(1 << 3)
/** CRYP_K1LR_K162 K162 **/
#define CRYP_K1LR_K162		(1 << 2)
/** CRYP_K1LR_K161 K161 **/
#define CRYP_K1LR_K161		(1 << 1)
/** CRYP_K1LR_K160 K160 **/
#define CRYP_K1LR_K160		(1 << 0)

/**@}*/

/** @defgroup cryp_k1rr K1RR key registers
@{*/

/** CRYP_K1RR_K159 K159 **/
#define CRYP_K1RR_K159		(1 << 31)
/** CRYP_K1RR_K158 K158 **/
#define CRYP_K1RR_K158		(1 << 30)
/** CRYP_K1RR_K157 K157 **/
#define CRYP_K1RR_K157		(1 << 29)
/** CRYP_K1RR_K156 K156 **/
#define CRYP_K1RR_K156		(1 << 28)
/** CRYP_K1RR_K155 K155 **/
#define CRYP_K1RR_K155		(1 << 27)
/** CRYP_K1RR_K154 K154 **/
#define CRYP_K1RR_K154		(1 << 26)
/** CRYP_K1RR_K153 K153 **/
#define CRYP_K1RR_K153		(1 << 25)
/** CRYP_K1RR_K152 K152 **/
#define CRYP_K1RR_K152		(1 << 24)
/** CRYP_K1RR_K151 K151 **/
#define CRYP_K1RR_K151		(1 << 23)
/** CRYP_K1RR_K150 K150 **/
#define CRYP_K1RR_K150		(1 << 22)
/** CRYP_K1RR_K149 K149 **/
#define CRYP_K1RR_K149		(1 << 21)
/** CRYP_K1RR_K148 K148 **/
#define CRYP_K1RR_K148		(1 << 20)
/** CRYP_K1RR_K147 K147 **/
#define CRYP_K1RR_K147		(1 << 19)
/** CRYP_K1RR_K146 K146 **/
#define CRYP_K1RR_K146		(1 << 18)
/** CRYP_K1RR_K145 K145 **/
#define CRYP_K1RR_K145		(1 << 17)
/** CRYP_K1RR_K144 K144 **/
#define CRYP_K1RR_K144		(1 << 16)
/** CRYP_K1RR_K143 K143 **/
#define CRYP_K1RR_K143		(1 << 15)
/** CRYP_K1RR_K142 K142 **/
#define CRYP_K1RR_K142		(1 << 14)
/** CRYP_K1RR_K141 K141 **/
#define CRYP_K1RR_K141		(1 << 13)
/** CRYP_K1RR_K140 K140 **/
#define CRYP_K1RR_K140		(1 << 12)
/** CRYP_K1RR_K139 K139 **/
#define CRYP_K1RR_K139		(1 << 11)
/** CRYP_K1RR_K138 K138 **/
#define CRYP_K1RR_K138		(1 << 10)
/** CRYP_K1RR_K137 K137 **/
#define CRYP_K1RR_K137		(1 << 9)
/** CRYP_K1RR_K136 K136 **/
#define CRYP_K1RR_K136		(1 << 8)
/** CRYP_K1RR_K135 K135 **/
#define CRYP_K1RR_K135		(1 << 7)
/** CRYP_K1RR_K134 K134 **/
#define CRYP_K1RR_K134		(1 << 6)
/** CRYP_K1RR_K133 K133 **/
#define CRYP_K1RR_K133		(1 << 5)
/** CRYP_K1RR_K132 K132 **/
#define CRYP_K1RR_K132		(1 << 4)
/** CRYP_K1RR_K131 K131 **/
#define CRYP_K1RR_K131		(1 << 3)
/** CRYP_K1RR_K130 K130 **/
#define CRYP_K1RR_K130		(1 << 2)
/** CRYP_K1RR_K129 K129 **/
#define CRYP_K1RR_K129		(1 << 1)
/** CRYP_K1RR_K128 K128 **/
#define CRYP_K1RR_K128		(1 << 0)

/**@}*/

/** @defgroup cryp_k2lr K2LR key registers
@{*/

/** CRYP_K2LR_K127 K127 **/
#define CRYP_K2LR_K127		(1 << 31)
/** CRYP_K2LR_K126 K126 **/
#define CRYP_K2LR_K126		(1 << 30)
/** CRYP_K2LR_K125 K125 **/
#define CRYP_K2LR_K125		(1 << 29)
/** CRYP_K2LR_K124 K124 **/
#define CRYP_K2LR_K124		(1 << 28)
/** CRYP_K2LR_K123 K123 **/
#define CRYP_K2LR_K123		(1 << 27)
/** CRYP_K2LR_K122 K122 **/
#define CRYP_K2LR_K122		(1 << 26)
/** CRYP_K2LR_K121 K121 **/
#define CRYP_K2LR_K121		(1 << 25)
/** CRYP_K2LR_K120 K120 **/
#define CRYP_K2LR_K120		(1 << 24)
/** CRYP_K2LR_K119 K119 **/
#define CRYP_K2LR_K119		(1 << 23)
/** CRYP_K2LR_K118 K118 **/
#define CRYP_K2LR_K118		(1 << 22)
/** CRYP_K2LR_K117 K117 **/
#define CRYP_K2LR_K117		(1 << 21)
/** CRYP_K2LR_K116 K116 **/
#define CRYP_K2LR_K116		(1 << 20)
/** CRYP_K2LR_K115 K115 **/
#define CRYP_K2LR_K115		(1 << 19)
/** CRYP_K2LR_K114 K114 **/
#define CRYP_K2LR_K114		(1 << 18)
/** CRYP_K2LR_K113 K113 **/
#define CRYP_K2LR_K113		(1 << 17)
/** CRYP_K2LR_K112 K112 **/
#define CRYP_K2LR_K112		(1 << 16)
/** CRYP_K2LR_K111 K111 **/
#define CRYP_K2LR_K111		(1 << 15)
/** CRYP_K2LR_K110 K110 **/
#define CRYP_K2LR_K110		(1 << 14)
/** CRYP_K2LR_K109 K109 **/
#define CRYP_K2LR_K109		(1 << 13)
/** CRYP_K2LR_K108 K108 **/
#define CRYP_K2LR_K108		(1 << 12)
/** CRYP_K2LR_K107 K107 **/
#define CRYP_K2LR_K107		(1 << 11)
/** CRYP_K2LR_K106 K106 **/
#define CRYP_K2LR_K106		(1 << 10)
/** CRYP_K2LR_K105 K105 **/
#define CRYP_K2LR_K105		(1 << 9)
/** CRYP_K2LR_K104 K104 **/
#define CRYP_K2LR_K104		(1 << 8)
/** CRYP_K2LR_K103 K103 **/
#define CRYP_K2LR_K103		(1 << 7)
/** CRYP_K2LR_K102 K102 **/
#define CRYP_K2LR_K102		(1 << 6)
/** CRYP_K2LR_K101 K101 **/
#define CRYP_K2LR_K101		(1 << 5)
/** CRYP_K2LR_K100 K100 **/
#define CRYP_K2LR_K100		(1 << 4)
/** CRYP_K2LR_K99 K99 **/
#define CRYP_K2LR_K99		(1 << 3)
/** CRYP_K2LR_K98 K98 **/
#define CRYP_K2LR_K98		(1 << 2)
/** CRYP_K2LR_K97 K97 **/
#define CRYP_K2LR_K97		(1 << 1)
/** CRYP_K2LR_K96 K96 **/
#define CRYP_K2LR_K96		(1 << 0)

/**@}*/

/** @defgroup cryp_k2rr K2RR key registers
@{*/

/** CRYP_K2RR_K95 K95 **/
#define CRYP_K2RR_K95		(1 << 31)
/** CRYP_K2RR_K94 K94 **/
#define CRYP_K2RR_K94		(1 << 30)
/** CRYP_K2RR_K93 K93 **/
#define CRYP_K2RR_K93		(1 << 29)
/** CRYP_K2RR_K92 K92 **/
#define CRYP_K2RR_K92		(1 << 28)
/** CRYP_K2RR_K91 K91 **/
#define CRYP_K2RR_K91		(1 << 27)
/** CRYP_K2RR_K90 K90 **/
#define CRYP_K2RR_K90		(1 << 26)
/** CRYP_K2RR_K89 K89 **/
#define CRYP_K2RR_K89		(1 << 25)
/** CRYP_K2RR_K88 K88 **/
#define CRYP_K2RR_K88		(1 << 24)
/** CRYP_K2RR_K87 K87 **/
#define CRYP_K2RR_K87		(1 << 23)
/** CRYP_K2RR_K86 K86 **/
#define CRYP_K2RR_K86		(1 << 22)
/** CRYP_K2RR_K85 K85 **/
#define CRYP_K2RR_K85		(1 << 21)
/** CRYP_K2RR_K84 K84 **/
#define CRYP_K2RR_K84		(1 << 20)
/** CRYP_K2RR_K83 K83 **/
#define CRYP_K2RR_K83		(1 << 19)
/** CRYP_K2RR_K82 K82 **/
#define CRYP_K2RR_K82		(1 << 18)
/** CRYP_K2RR_K81 K81 **/
#define CRYP_K2RR_K81		(1 << 17)
/** CRYP_K2RR_K80 K80 **/
#define CRYP_K2RR_K80		(1 << 16)
/** CRYP_K2RR_K79 K79 **/
#define CRYP_K2RR_K79		(1 << 15)
/** CRYP_K2RR_K78 K78 **/
#define CRYP_K2RR_K78		(1 << 14)
/** CRYP_K2RR_K77 K77 **/
#define CRYP_K2RR_K77		(1 << 13)
/** CRYP_K2RR_K76 K76 **/
#define CRYP_K2RR_K76		(1 << 12)
/** CRYP_K2RR_K75 K75 **/
#define CRYP_K2RR_K75		(1 << 11)
/** CRYP_K2RR_K74 K74 **/
#define CRYP_K2RR_K74		(1 << 10)
/** CRYP_K2RR_K73 K73 **/
#define CRYP_K2RR_K73		(1 << 9)
/** CRYP_K2RR_K72 K72 **/
#define CRYP_K2RR_K72		(1 << 8)
/** CRYP_K2RR_K71 K71 **/
#define CRYP_K2RR_K71		(1 << 7)
/** CRYP_K2RR_K70 K70 **/
#define CRYP_K2RR_K70		(1 << 6)
/** CRYP_K2RR_K69 K69 **/
#define CRYP_K2RR_K69		(1 << 5)
/** CRYP_K2RR_K68 K68 **/
#define CRYP_K2RR_K68		(1 << 4)
/** CRYP_K2RR_K67 K67 **/
#define CRYP_K2RR_K67		(1 << 3)
/** CRYP_K2RR_K66 K66 **/
#define CRYP_K2RR_K66		(1 << 2)
/** CRYP_K2RR_K65 K65 **/
#define CRYP_K2RR_K65		(1 << 1)
/** CRYP_K2RR_K64 K64 **/
#define CRYP_K2RR_K64		(1 << 0)

/**@}*/

/** @defgroup cryp_k3lr K3LR key registers
@{*/

/** CRYP_K3LR_K63 K63 **/
#define CRYP_K3LR_K63		(1 << 31)
/** CRYP_K3LR_K62 K62 **/
#define CRYP_K3LR_K62		(1 << 30)
/** CRYP_K3LR_K61 K61 **/
#define CRYP_K3LR_K61		(1 << 29)
/** CRYP_K3LR_K60 K60 **/
#define CRYP_K3LR_K60		(1 << 28)
/** CRYP_K3LR_K59 K59 **/
#define CRYP_K3LR_K59		(1 << 27)
/** CRYP_K3LR_K58 K58 **/
#define CRYP_K3LR_K58		(1 << 26)
/** CRYP_K3LR_K57 K57 **/
#define CRYP_K3LR_K57		(1 << 25)
/** CRYP_K3LR_K56 K56 **/
#define CRYP_K3LR_K56		(1 << 24)
/** CRYP_K3LR_K55 K55 **/
#define CRYP_K3LR_K55		(1 << 23)
/** CRYP_K3LR_K54 K54 **/
#define CRYP_K3LR_K54		(1 << 22)
/** CRYP_K3LR_K53 K53 **/
#define CRYP_K3LR_K53		(1 << 21)
/** CRYP_K3LR_K52 K52 **/
#define CRYP_K3LR_K52		(1 << 20)
/** CRYP_K3LR_K51 K51 **/
#define CRYP_K3LR_K51		(1 << 19)
/** CRYP_K3LR_K50 K50 **/
#define CRYP_K3LR_K50		(1 << 18)
/** CRYP_K3LR_K49 K49 **/
#define CRYP_K3LR_K49		(1 << 17)
/** CRYP_K3LR_K48 K48 **/
#define CRYP_K3LR_K48		(1 << 16)
/** CRYP_K3LR_K47 K47 **/
#define CRYP_K3LR_K47		(1 << 15)
/** CRYP_K3LR_K46 K46 **/
#define CRYP_K3LR_K46		(1 << 14)
/** CRYP_K3LR_K45 K45 **/
#define CRYP_K3LR_K45		(1 << 13)
/** CRYP_K3LR_K44 K44 **/
#define CRYP_K3LR_K44		(1 << 12)
/** CRYP_K3LR_K43 K43 **/
#define CRYP_K3LR_K43		(1 << 11)
/** CRYP_K3LR_K42 K42 **/
#define CRYP_K3LR_K42		(1 << 10)
/** CRYP_K3LR_K41 K41 **/
#define CRYP_K3LR_K41		(1 << 9)
/** CRYP_K3LR_K40 K40 **/
#define CRYP_K3LR_K40		(1 << 8)
/** CRYP_K3LR_K39 K39 **/
#define CRYP_K3LR_K39		(1 << 7)
/** CRYP_K3LR_K38 K38 **/
#define CRYP_K3LR_K38		(1 << 6)
/** CRYP_K3LR_K37 K37 **/
#define CRYP_K3LR_K37		(1 << 5)
/** CRYP_K3LR_K36 K36 **/
#define CRYP_K3LR_K36		(1 << 4)
/** CRYP_K3LR_K35 K35 **/
#define CRYP_K3LR_K35		(1 << 3)
/** CRYP_K3LR_K34 K34 **/
#define CRYP_K3LR_K34		(1 << 2)
/** CRYP_K3LR_K33 K33 **/
#define CRYP_K3LR_K33		(1 << 1)
/** CRYP_K3LR_K32 K32 **/
#define CRYP_K3LR_K32		(1 << 0)

/**@}*/

/** @defgroup cryp_k3rr K3RR key registers
@{*/

/** CRYP_K3RR_K31 K31 **/
#define CRYP_K3RR_K31		(1 << 31)
/** CRYP_K3RR_K30 K30 **/
#define CRYP_K3RR_K30		(1 << 30)
/** CRYP_K3RR_K29 K29 **/
#define CRYP_K3RR_K29		(1 << 29)
/** CRYP_K3RR_K28 K28 **/
#define CRYP_K3RR_K28		(1 << 28)
/** CRYP_K3RR_K27 K27 **/
#define CRYP_K3RR_K27		(1 << 27)
/** CRYP_K3RR_K26 K26 **/
#define CRYP_K3RR_K26		(1 << 26)
/** CRYP_K3RR_K25 K25 **/
#define CRYP_K3RR_K25		(1 << 25)
/** CRYP_K3RR_K24 K24 **/
#define CRYP_K3RR_K24		(1 << 24)
/** CRYP_K3RR_K23 K23 **/
#define CRYP_K3RR_K23		(1 << 23)
/** CRYP_K3RR_K22 K22 **/
#define CRYP_K3RR_K22		(1 << 22)
/** CRYP_K3RR_K21 K21 **/
#define CRYP_K3RR_K21		(1 << 21)
/** CRYP_K3RR_K20 K20 **/
#define CRYP_K3RR_K20		(1 << 20)
/** CRYP_K3RR_K19 K19 **/
#define CRYP_K3RR_K19		(1 << 19)
/** CRYP_K3RR_K18 K18 **/
#define CRYP_K3RR_K18		(1 << 18)
/** CRYP_K3RR_K17 K17 **/
#define CRYP_K3RR_K17		(1 << 17)
/** CRYP_K3RR_K16 K16 **/
#define CRYP_K3RR_K16		(1 << 16)
/** CRYP_K3RR_K15 K15 **/
#define CRYP_K3RR_K15		(1 << 15)
/** CRYP_K3RR_K14 K14 **/
#define CRYP_K3RR_K14		(1 << 14)
/** CRYP_K3RR_K13 K13 **/
#define CRYP_K3RR_K13		(1 << 13)
/** CRYP_K3RR_K12 K12 **/
#define CRYP_K3RR_K12		(1 << 12)
/** CRYP_K3RR_K11 K11 **/
#define CRYP_K3RR_K11		(1 << 11)
/** CRYP_K3RR_K10 K10 **/
#define CRYP_K3RR_K10		(1 << 10)
/** CRYP_K3RR_K9 K9 **/
#define CRYP_K3RR_K9		(1 << 9)
/** CRYP_K3RR_K8 K8 **/
#define CRYP_K3RR_K8		(1 << 8)
/** CRYP_K3RR_K7 K7 **/
#define CRYP_K3RR_K7		(1 << 7)
/** CRYP_K3RR_K6 K6 **/
#define CRYP_K3RR_K6		(1 << 6)
/** CRYP_K3RR_K5 K5 **/
#define CRYP_K3RR_K5		(1 << 5)
/** CRYP_K3RR_K4 K4 **/
#define CRYP_K3RR_K4		(1 << 4)
/** CRYP_K3RR_K3 K3 **/
#define CRYP_K3RR_K3		(1 << 3)
/** CRYP_K3RR_K2 K2 **/
#define CRYP_K3RR_K2		(1 << 2)
/** CRYP_K3RR_K1 K1 **/
#define CRYP_K3RR_K1		(1 << 1)
/** CRYP_K3RR_K0 K0 **/
#define CRYP_K3RR_K0		(1 << 0)

/**@}*/

/** @defgroup cryp_iv0lr IV0LR initialization vector registers
@{*/

/** CRYP_IV0LR_IV0 IV0 **/
#define CRYP_IV0LR_IV0		(1 << 31)
/** CRYP_IV0LR_IV1 IV1 **/
#define CRYP_IV0LR_IV1		(1 << 30)
/** CRYP_IV0LR_IV2 IV2 **/
#define CRYP_IV0LR_IV2		(1 << 29)
/** CRYP_IV0LR_IV3 IV3 **/
#define CRYP_IV0LR_IV3		(1 << 28)
/** CRYP_IV0LR_IV4 IV4 **/
#define CRYP_IV0LR_IV4		(1 << 27)
/** CRYP_IV0LR_IV5 IV5 **/
#define CRYP_IV0LR_IV5		(1 << 26)
/** CRYP_IV0LR_IV6 IV6 **/
#define CRYP_IV0LR_IV6		(1 << 25)
/** CRYP_IV0LR_IV7 IV7 **/
#define CRYP_IV0LR_IV7		(1 << 24)
/** CRYP_IV0LR_IV8 IV8 **/
#define CRYP_IV0LR_IV8		(1 << 23)
/** CRYP_IV0LR_IV9 IV9 **/
#define CRYP_IV0LR_IV9		(1 << 22)
/** CRYP_IV0LR_IV10 IV10 **/
#define CRYP_IV0LR_IV10		(1 << 21)
/** CRYP_IV0LR_IV11 IV11 **/
#define CRYP_IV0LR_IV11		(1 << 20)
/** CRYP_IV0LR_IV12 IV12 **/
#define CRYP_IV0LR_IV12		(1 << 19)
/** CRYP_IV0LR_IV13 IV13 **/
#define CRYP_IV0LR_IV13		(1 << 18)
/** CRYP_IV0LR_IV14 IV14 **/
#define CRYP_IV0LR_IV14		(1 << 17)
/** CRYP_IV0LR_IV15 IV15 **/
#define CRYP_IV0LR_IV15		(1 << 16)
/** CRYP_IV0LR_IV16 IV16 **/
#define CRYP_IV0LR_IV16		(1 << 15)
/** CRYP_IV0LR_IV17 IV17 **/
#define CRYP_IV0LR_IV17		(1 << 14)
/** CRYP_IV0LR_IV18 IV18 **/
#define CRYP_IV0LR_IV18		(1 << 13)
/** CRYP_IV0LR_IV19 IV19 **/
#define CRYP_IV0LR_IV19		(1 << 12)
/** CRYP_IV0LR_IV20 IV20 **/
#define CRYP_IV0LR_IV20		(1 << 11)
/** CRYP_IV0LR_IV21 IV21 **/
#define CRYP_IV0LR_IV21		(1 << 10)
/** CRYP_IV0LR_IV22 IV22 **/
#define CRYP_IV0LR_IV22		(1 << 9)
/** CRYP_IV0LR_IV23 IV23 **/
#define CRYP_IV0LR_IV23		(1 << 8)
/** CRYP_IV0LR_IV24 IV24 **/
#define CRYP_IV0LR_IV24		(1 << 7)
/** CRYP_IV0LR_IV25 IV25 **/
#define CRYP_IV0LR_IV25		(1 << 6)
/** CRYP_IV0LR_IV26 IV26 **/
#define CRYP_IV0LR_IV26		(1 << 5)
/** CRYP_IV0LR_IV27 IV27 **/
#define CRYP_IV0LR_IV27		(1 << 4)
/** CRYP_IV0LR_IV28 IV28 **/
#define CRYP_IV0LR_IV28		(1 << 3)
/** CRYP_IV0LR_IV29 IV29 **/
#define CRYP_IV0LR_IV29		(1 << 2)
/** CRYP_IV0LR_IV30 IV30 **/
#define CRYP_IV0LR_IV30		(1 << 1)
/** CRYP_IV0LR_IV31 IV31 **/
#define CRYP_IV0LR_IV31		(1 << 0)

/**@}*/

/** @defgroup cryp_iv0rr IV0RR initialization vector registers
@{*/

/** CRYP_IV0RR_IV32 IV32 **/
#define CRYP_IV0RR_IV32		(1 << 31)
/** CRYP_IV0RR_IV33 IV33 **/
#define CRYP_IV0RR_IV33		(1 << 30)
/** CRYP_IV0RR_IV34 IV34 **/
#define CRYP_IV0RR_IV34		(1 << 29)
/** CRYP_IV0RR_IV35 IV35 **/
#define CRYP_IV0RR_IV35		(1 << 28)
/** CRYP_IV0RR_IV36 IV36 **/
#define CRYP_IV0RR_IV36		(1 << 27)
/** CRYP_IV0RR_IV37 IV37 **/
#define CRYP_IV0RR_IV37		(1 << 26)
/** CRYP_IV0RR_IV38 IV38 **/
#define CRYP_IV0RR_IV38		(1 << 25)
/** CRYP_IV0RR_IV39 IV39 **/
#define CRYP_IV0RR_IV39		(1 << 24)
/** CRYP_IV0RR_IV40 IV40 **/
#define CRYP_IV0RR_IV40		(1 << 23)
/** CRYP_IV0RR_IV41 IV41 **/
#define CRYP_IV0RR_IV41		(1 << 22)
/** CRYP_IV0RR_IV42 IV42 **/
#define CRYP_IV0RR_IV42		(1 << 21)
/** CRYP_IV0RR_IV43 IV43 **/
#define CRYP_IV0RR_IV43		(1 << 20)
/** CRYP_IV0RR_IV44 IV44 **/
#define CRYP_IV0RR_IV44		(1 << 19)
/** CRYP_IV0RR_IV45 IV45 **/
#define CRYP_IV0RR_IV45		(1 << 18)
/** CRYP_IV0RR_IV46 IV46 **/
#define CRYP_IV0RR_IV46		(1 << 17)
/** CRYP_IV0RR_IV47 IV47 **/
#define CRYP_IV0RR_IV47		(1 << 16)
/** CRYP_IV0RR_IV48 IV48 **/
#define CRYP_IV0RR_IV48		(1 << 15)
/** CRYP_IV0RR_IV49 IV49 **/
#define CRYP_IV0RR_IV49		(1 << 14)
/** CRYP_IV0RR_IV50 IV50 **/
#define CRYP_IV0RR_IV50		(1 << 13)
/** CRYP_IV0RR_IV51 IV51 **/
#define CRYP_IV0RR_IV51		(1 << 12)
/** CRYP_IV0RR_IV52 IV52 **/
#define CRYP_IV0RR_IV52		(1 << 11)
/** CRYP_IV0RR_IV53 IV53 **/
#define CRYP_IV0RR_IV53		(1 << 10)
/** CRYP_IV0RR_IV54 IV54 **/
#define CRYP_IV0RR_IV54		(1 << 9)
/** CRYP_IV0RR_IV55 IV55 **/
#define CRYP_IV0RR_IV55		(1 << 8)
/** CRYP_IV0RR_IV56 IV56 **/
#define CRYP_IV0RR_IV56		(1 << 7)
/** CRYP_IV0RR_IV57 IV57 **/
#define CRYP_IV0RR_IV57		(1 << 6)
/** CRYP_IV0RR_IV58 IV58 **/
#define CRYP_IV0RR_IV58		(1 << 5)
/** CRYP_IV0RR_IV59 IV59 **/
#define CRYP_IV0RR_IV59		(1 << 4)
/** CRYP_IV0RR_IV60 IV60 **/
#define CRYP_IV0RR_IV60		(1 << 3)
/** CRYP_IV0RR_IV61 IV61 **/
#define CRYP_IV0RR_IV61		(1 << 2)
/** CRYP_IV0RR_IV62 IV62 **/
#define CRYP_IV0RR_IV62		(1 << 1)
/** CRYP_IV0RR_IV63 IV63 **/
#define CRYP_IV0RR_IV63		(1 << 0)

/**@}*/

/** @defgroup cryp_iv1lr IV1LR initialization vector registers
@{*/

/** CRYP_IV1LR_IV64 IV64 **/
#define CRYP_IV1LR_IV64		(1 << 31)
/** CRYP_IV1LR_IV65 IV65 **/
#define CRYP_IV1LR_IV65		(1 << 30)
/** CRYP_IV1LR_IV66 IV66 **/
#define CRYP_IV1LR_IV66		(1 << 29)
/** CRYP_IV1LR_IV67 IV67 **/
#define CRYP_IV1LR_IV67		(1 << 28)
/** CRYP_IV1LR_IV68 IV68 **/
#define CRYP_IV1LR_IV68		(1 << 27)
/** CRYP_IV1LR_IV69 IV69 **/
#define CRYP_IV1LR_IV69		(1 << 26)
/** CRYP_IV1LR_IV70 IV70 **/
#define CRYP_IV1LR_IV70		(1 << 25)
/** CRYP_IV1LR_IV71 IV71 **/
#define CRYP_IV1LR_IV71		(1 << 24)
/** CRYP_IV1LR_IV72 IV72 **/
#define CRYP_IV1LR_IV72		(1 << 23)
/** CRYP_IV1LR_IV73 IV73 **/
#define CRYP_IV1LR_IV73		(1 << 22)
/** CRYP_IV1LR_IV74 IV74 **/
#define CRYP_IV1LR_IV74		(1 << 21)
/** CRYP_IV1LR_IV75 IV75 **/
#define CRYP_IV1LR_IV75		(1 << 20)
/** CRYP_IV1LR_IV76 IV76 **/
#define CRYP_IV1LR_IV76		(1 << 19)
/** CRYP_IV1LR_IV77 IV77 **/
#define CRYP_IV1LR_IV77		(1 << 18)
/** CRYP_IV1LR_IV78 IV78 **/
#define CRYP_IV1LR_IV78		(1 << 17)
/** CRYP_IV1LR_IV79 IV79 **/
#define CRYP_IV1LR_IV79		(1 << 16)
/** CRYP_IV1LR_IV80 IV80 **/
#define CRYP_IV1LR_IV80		(1 << 15)
/** CRYP_IV1LR_IV81 IV81 **/
#define CRYP_IV1LR_IV81		(1 << 14)
/** CRYP_IV1LR_IV82 IV82 **/
#define CRYP_IV1LR_IV82		(1 << 13)
/** CRYP_IV1LR_IV83 IV83 **/
#define CRYP_IV1LR_IV83		(1 << 12)
/** CRYP_IV1LR_IV84 IV84 **/
#define CRYP_IV1LR_IV84		(1 << 11)
/** CRYP_IV1LR_IV85 IV85 **/
#define CRYP_IV1LR_IV85		(1 << 10)
/** CRYP_IV1LR_IV86 IV86 **/
#define CRYP_IV1LR_IV86		(1 << 9)
/** CRYP_IV1LR_IV87 IV87 **/
#define CRYP_IV1LR_IV87		(1 << 8)
/** CRYP_IV1LR_IV88 IV88 **/
#define CRYP_IV1LR_IV88		(1 << 7)
/** CRYP_IV1LR_IV89 IV89 **/
#define CRYP_IV1LR_IV89		(1 << 6)
/** CRYP_IV1LR_IV90 IV90 **/
#define CRYP_IV1LR_IV90		(1 << 5)
/** CRYP_IV1LR_IV91 IV91 **/
#define CRYP_IV1LR_IV91		(1 << 4)
/** CRYP_IV1LR_IV92 IV92 **/
#define CRYP_IV1LR_IV92		(1 << 3)
/** CRYP_IV1LR_IV93 IV93 **/
#define CRYP_IV1LR_IV93		(1 << 2)
/** CRYP_IV1LR_IV94 IV94 **/
#define CRYP_IV1LR_IV94		(1 << 1)
/** CRYP_IV1LR_IV95 IV95 **/
#define CRYP_IV1LR_IV95		(1 << 0)

/**@}*/

/** @defgroup cryp_iv1rr IV1RR initialization vector registers
@{*/

/** CRYP_IV1RR_IV96 IV96 **/
#define CRYP_IV1RR_IV96		(1 << 31)
/** CRYP_IV1RR_IV97 IV97 **/
#define CRYP_IV1RR_IV97		(1 << 30)
/** CRYP_IV1RR_IV98 IV98 **/
#define CRYP_IV1RR_IV98		(1 << 29)
/** CRYP_IV1RR_IV99 IV99 **/
#define CRYP_IV1RR_IV99		(1 << 28)
/** CRYP_IV1RR_IV100 IV100 **/
#define CRYP_IV1RR_IV100		(1 << 27)
/** CRYP_IV1RR_IV101 IV101 **/
#define CRYP_IV1RR_IV101		(1 << 26)
/** CRYP_IV1RR_IV102 IV102 **/
#define CRYP_IV1RR_IV102		(1 << 25)
/** CRYP_IV1RR_IV103 IV103 **/
#define CRYP_IV1RR_IV103		(1 << 24)
/** CRYP_IV1RR_IV104 IV104 **/
#define CRYP_IV1RR_IV104		(1 << 23)
/** CRYP_IV1RR_IV105 IV105 **/
#define CRYP_IV1RR_IV105		(1 << 22)
/** CRYP_IV1RR_IV106 IV106 **/
#define CRYP_IV1RR_IV106		(1 << 21)
/** CRYP_IV1RR_IV107 IV107 **/
#define CRYP_IV1RR_IV107		(1 << 20)
/** CRYP_IV1RR_IV108 IV108 **/
#define CRYP_IV1RR_IV108		(1 << 19)
/** CRYP_IV1RR_IV109 IV109 **/
#define CRYP_IV1RR_IV109		(1 << 18)
/** CRYP_IV1RR_IV110 IV110 **/
#define CRYP_IV1RR_IV110		(1 << 17)
/** CRYP_IV1RR_IV111 IV111 **/
#define CRYP_IV1RR_IV111		(1 << 16)
/** CRYP_IV1RR_IV112 IV112 **/
#define CRYP_IV1RR_IV112		(1 << 15)
/** CRYP_IV1RR_IV113 IV113 **/
#define CRYP_IV1RR_IV113		(1 << 14)
/** CRYP_IV1RR_IV114 IV114 **/
#define CRYP_IV1RR_IV114		(1 << 13)
/** CRYP_IV1RR_IV115 IV115 **/
#define CRYP_IV1RR_IV115		(1 << 12)
/** CRYP_IV1RR_IV116 IV116 **/
#define CRYP_IV1RR_IV116		(1 << 11)
/** CRYP_IV1RR_IV117 IV117 **/
#define CRYP_IV1RR_IV117		(1 << 10)
/** CRYP_IV1RR_IV118 IV118 **/
#define CRYP_IV1RR_IV118		(1 << 9)
/** CRYP_IV1RR_IV119 IV119 **/
#define CRYP_IV1RR_IV119		(1 << 8)
/** CRYP_IV1RR_IV120 IV120 **/
#define CRYP_IV1RR_IV120		(1 << 7)
/** CRYP_IV1RR_IV121 IV121 **/
#define CRYP_IV1RR_IV121		(1 << 6)
/** CRYP_IV1RR_IV122 IV122 **/
#define CRYP_IV1RR_IV122		(1 << 5)
/** CRYP_IV1RR_IV123 IV123 **/
#define CRYP_IV1RR_IV123		(1 << 4)
/** CRYP_IV1RR_IV124 IV124 **/
#define CRYP_IV1RR_IV124		(1 << 3)
/** CRYP_IV1RR_IV125 IV125 **/
#define CRYP_IV1RR_IV125		(1 << 2)
/** CRYP_IV1RR_IV126 IV126 **/
#define CRYP_IV1RR_IV126		(1 << 1)
/** CRYP_IV1RR_IV127 IV127 **/
#define CRYP_IV1RR_IV127		(1 << 0)

/**@}*/

/** @defgroup cryp_csgcmccm0r CSGCMCCM0R context swap register
@{*/


#define CRYP_CSGCMCCM0R_CSGCMCCM0_SHIFT		0
#define CRYP_CSGCMCCM0R_CSGCMCCM0_MASK		0xffffffff
/** @defgroup cryp_csgcmccm0r_csgcmccm0 CSGCMCCM0 CSGCMCCM0
@{*/
/**@}*/


/**@}*/

/** @defgroup cryp_csgcmccm1r CSGCMCCM1R context swap register
@{*/


#define CRYP_CSGCMCCM1R_CSGCMCCM1_SHIFT		0
#define CRYP_CSGCMCCM1R_CSGCMCCM1_MASK		0xffffffff
/** @defgroup cryp_csgcmccm1r_csgcmccm1 CSGCMCCM1 CSGCMCCM1
@{*/
/**@}*/


/**@}*/

/** @defgroup cryp_csgcmccm2r CSGCMCCM2R context swap register
@{*/


#define CRYP_CSGCMCCM2R_CSGCMCCM2_SHIFT		0
#define CRYP_CSGCMCCM2R_CSGCMCCM2_MASK		0xffffffff
/** @defgroup cryp_csgcmccm2r_csgcmccm2 CSGCMCCM2 CSGCMCCM2
@{*/
/**@}*/


/**@}*/

/** @defgroup cryp_csgcmccm3r CSGCMCCM3R context swap register
@{*/


#define CRYP_CSGCMCCM3R_CSGCMCCM3_SHIFT		0
#define CRYP_CSGCMCCM3R_CSGCMCCM3_MASK		0xffffffff
/** @defgroup cryp_csgcmccm3r_csgcmccm3 CSGCMCCM3 CSGCMCCM3
@{*/
/**@}*/


/**@}*/

/** @defgroup cryp_csgcmccm4r CSGCMCCM4R context swap register
@{*/


#define CRYP_CSGCMCCM4R_CSGCMCCM4_SHIFT		0
#define CRYP_CSGCMCCM4R_CSGCMCCM4_MASK		0xffffffff
/** @defgroup cryp_csgcmccm4r_csgcmccm4 CSGCMCCM4 CSGCMCCM4
@{*/
/**@}*/


/**@}*/

/** @defgroup cryp_csgcmccm5r CSGCMCCM5R context swap register
@{*/


#define CRYP_CSGCMCCM5R_CSGCMCCM5_SHIFT		0
#define CRYP_CSGCMCCM5R_CSGCMCCM5_MASK		0xffffffff
/** @defgroup cryp_csgcmccm5r_csgcmccm5 CSGCMCCM5 CSGCMCCM5
@{*/
/**@}*/


/**@}*/

/** @defgroup cryp_csgcmccm6r CSGCMCCM6R context swap register
@{*/


#define CRYP_CSGCMCCM6R_CSGCMCCM6_SHIFT		0
#define CRYP_CSGCMCCM6R_CSGCMCCM6_MASK		0xffffffff
/** @defgroup cryp_csgcmccm6r_csgcmccm6 CSGCMCCM6 CSGCMCCM6
@{*/
/**@}*/


/**@}*/

/** @defgroup cryp_csgcmccm7r CSGCMCCM7R context swap register
@{*/


#define CRYP_CSGCMCCM7R_CSGCMCCM7_SHIFT		0
#define CRYP_CSGCMCCM7R_CSGCMCCM7_MASK		0xffffffff
/** @defgroup cryp_csgcmccm7r_csgcmccm7 CSGCMCCM7 CSGCMCCM7
@{*/
/**@}*/


/**@}*/

/** @defgroup cryp_csgcm0r CSGCM0R context swap register
@{*/


#define CRYP_CSGCM0R_CSGCM0_SHIFT		0
#define CRYP_CSGCM0R_CSGCM0_MASK		0xffffffff
/** @defgroup cryp_csgcm0r_csgcm0 CSGCM0 CSGCM0
@{*/
/**@}*/


/**@}*/

/** @defgroup cryp_csgcm1r CSGCM1R context swap register
@{*/


#define CRYP_CSGCM1R_CSGCM1_SHIFT		0
#define CRYP_CSGCM1R_CSGCM1_MASK		0xffffffff
/** @defgroup cryp_csgcm1r_csgcm1 CSGCM1 CSGCM1
@{*/
/**@}*/


/**@}*/

/** @defgroup cryp_csgcm2r CSGCM2R context swap register
@{*/


#define CRYP_CSGCM2R_CSGCM2_SHIFT		0
#define CRYP_CSGCM2R_CSGCM2_MASK		0xffffffff
/** @defgroup cryp_csgcm2r_csgcm2 CSGCM2 CSGCM2
@{*/
/**@}*/


/**@}*/

/** @defgroup cryp_csgcm3r CSGCM3R context swap register
@{*/


#define CRYP_CSGCM3R_CSGCM3_SHIFT		0
#define CRYP_CSGCM3R_CSGCM3_MASK		0xffffffff
/** @defgroup cryp_csgcm3r_csgcm3 CSGCM3 CSGCM3
@{*/
/**@}*/


/**@}*/

/** @defgroup cryp_csgcm4r CSGCM4R context swap register
@{*/


#define CRYP_CSGCM4R_CSGCM4_SHIFT		0
#define CRYP_CSGCM4R_CSGCM4_MASK		0xffffffff
/** @defgroup cryp_csgcm4r_csgcm4 CSGCM4 CSGCM4
@{*/
/**@}*/


/**@}*/

/** @defgroup cryp_csgcm5r CSGCM5R context swap register
@{*/


#define CRYP_CSGCM5R_CSGCM5_SHIFT		0
#define CRYP_CSGCM5R_CSGCM5_MASK		0xffffffff
/** @defgroup cryp_csgcm5r_csgcm5 CSGCM5 CSGCM5
@{*/
/**@}*/


/**@}*/

/** @defgroup cryp_csgcm6r CSGCM6R context swap register
@{*/


#define CRYP_CSGCM6R_CSGCM6_SHIFT		0
#define CRYP_CSGCM6R_CSGCM6_MASK		0xffffffff
/** @defgroup cryp_csgcm6r_csgcm6 CSGCM6 CSGCM6
@{*/
/**@}*/


/**@}*/

/** @defgroup cryp_csgcm7r CSGCM7R context swap register
@{*/


#define CRYP_CSGCM7R_CSGCM7_SHIFT		0
#define CRYP_CSGCM7R_CSGCM7_MASK		0xffffffff
/** @defgroup cryp_csgcm7r_csgcm7 CSGCM7 CSGCM7
@{*/
/**@}*/


/**@}*/
