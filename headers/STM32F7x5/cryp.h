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

/** CRYP_K0LR_b255 b255 **/
#define CRYP_K0LR_b255		(1 << 31)
/** CRYP_K0LR_b254 b254 **/
#define CRYP_K0LR_b254		(1 << 30)
/** CRYP_K0LR_b253 b253 **/
#define CRYP_K0LR_b253		(1 << 29)
/** CRYP_K0LR_b252 b252 **/
#define CRYP_K0LR_b252		(1 << 28)
/** CRYP_K0LR_b251 b251 **/
#define CRYP_K0LR_b251		(1 << 27)
/** CRYP_K0LR_b250 b250 **/
#define CRYP_K0LR_b250		(1 << 26)
/** CRYP_K0LR_b249 b249 **/
#define CRYP_K0LR_b249		(1 << 25)
/** CRYP_K0LR_b248 b248 **/
#define CRYP_K0LR_b248		(1 << 24)
/** CRYP_K0LR_b247 b247 **/
#define CRYP_K0LR_b247		(1 << 23)
/** CRYP_K0LR_b246 b246 **/
#define CRYP_K0LR_b246		(1 << 22)
/** CRYP_K0LR_b245 b245 **/
#define CRYP_K0LR_b245		(1 << 21)
/** CRYP_K0LR_b244 b244 **/
#define CRYP_K0LR_b244		(1 << 20)
/** CRYP_K0LR_b243 b243 **/
#define CRYP_K0LR_b243		(1 << 19)
/** CRYP_K0LR_b242 b242 **/
#define CRYP_K0LR_b242		(1 << 18)
/** CRYP_K0LR_b241 b241 **/
#define CRYP_K0LR_b241		(1 << 17)
/** CRYP_K0LR_b240 b240 **/
#define CRYP_K0LR_b240		(1 << 16)
/** CRYP_K0LR_b239 b239 **/
#define CRYP_K0LR_b239		(1 << 15)
/** CRYP_K0LR_b238 b238 **/
#define CRYP_K0LR_b238		(1 << 14)
/** CRYP_K0LR_b237 b237 **/
#define CRYP_K0LR_b237		(1 << 13)
/** CRYP_K0LR_b236 b236 **/
#define CRYP_K0LR_b236		(1 << 12)
/** CRYP_K0LR_b235 b235 **/
#define CRYP_K0LR_b235		(1 << 11)
/** CRYP_K0LR_b234 b234 **/
#define CRYP_K0LR_b234		(1 << 10)
/** CRYP_K0LR_b233 b233 **/
#define CRYP_K0LR_b233		(1 << 9)
/** CRYP_K0LR_b232 b232 **/
#define CRYP_K0LR_b232		(1 << 8)
/** CRYP_K0LR_b231 b231 **/
#define CRYP_K0LR_b231		(1 << 7)
/** CRYP_K0LR_b230 b230 **/
#define CRYP_K0LR_b230		(1 << 6)
/** CRYP_K0LR_b229 b229 **/
#define CRYP_K0LR_b229		(1 << 5)
/** CRYP_K0LR_b228 b228 **/
#define CRYP_K0LR_b228		(1 << 4)
/** CRYP_K0LR_b227 b227 **/
#define CRYP_K0LR_b227		(1 << 3)
/** CRYP_K0LR_b226 b226 **/
#define CRYP_K0LR_b226		(1 << 2)
/** CRYP_K0LR_b225 b225 **/
#define CRYP_K0LR_b225		(1 << 1)
/** CRYP_K0LR_b224 b224 **/
#define CRYP_K0LR_b224		(1 << 0)

/**@}*/

/** @defgroup cryp_k0rr K0RR key registers
@{*/

/** CRYP_K0RR_b223 b223 **/
#define CRYP_K0RR_b223		(1 << 31)
/** CRYP_K0RR_b222 b222 **/
#define CRYP_K0RR_b222		(1 << 30)
/** CRYP_K0RR_b221 b221 **/
#define CRYP_K0RR_b221		(1 << 29)
/** CRYP_K0RR_b220 b220 **/
#define CRYP_K0RR_b220		(1 << 28)
/** CRYP_K0RR_b219 b219 **/
#define CRYP_K0RR_b219		(1 << 27)
/** CRYP_K0RR_b218 b218 **/
#define CRYP_K0RR_b218		(1 << 26)
/** CRYP_K0RR_b217 b217 **/
#define CRYP_K0RR_b217		(1 << 25)
/** CRYP_K0RR_b216 b216 **/
#define CRYP_K0RR_b216		(1 << 24)
/** CRYP_K0RR_b215 b215 **/
#define CRYP_K0RR_b215		(1 << 23)
/** CRYP_K0RR_b214 b214 **/
#define CRYP_K0RR_b214		(1 << 22)
/** CRYP_K0RR_b213 b213 **/
#define CRYP_K0RR_b213		(1 << 21)
/** CRYP_K0RR_b212 b212 **/
#define CRYP_K0RR_b212		(1 << 20)
/** CRYP_K0RR_b211 b211 **/
#define CRYP_K0RR_b211		(1 << 19)
/** CRYP_K0RR_b210 b210 **/
#define CRYP_K0RR_b210		(1 << 18)
/** CRYP_K0RR_b209 b209 **/
#define CRYP_K0RR_b209		(1 << 17)
/** CRYP_K0RR_b208 b208 **/
#define CRYP_K0RR_b208		(1 << 16)
/** CRYP_K0RR_b207 b207 **/
#define CRYP_K0RR_b207		(1 << 15)
/** CRYP_K0RR_b206 b206 **/
#define CRYP_K0RR_b206		(1 << 14)
/** CRYP_K0RR_b205 b205 **/
#define CRYP_K0RR_b205		(1 << 13)
/** CRYP_K0RR_b204 b204 **/
#define CRYP_K0RR_b204		(1 << 12)
/** CRYP_K0RR_b203 b203 **/
#define CRYP_K0RR_b203		(1 << 11)
/** CRYP_K0RR_b202 b202 **/
#define CRYP_K0RR_b202		(1 << 10)
/** CRYP_K0RR_b201 b201 **/
#define CRYP_K0RR_b201		(1 << 9)
/** CRYP_K0RR_b200 b200 **/
#define CRYP_K0RR_b200		(1 << 8)
/** CRYP_K0RR_b199 b199 **/
#define CRYP_K0RR_b199		(1 << 7)
/** CRYP_K0RR_b198 b198 **/
#define CRYP_K0RR_b198		(1 << 6)
/** CRYP_K0RR_b197 b197 **/
#define CRYP_K0RR_b197		(1 << 5)
/** CRYP_K0RR_b196 b196 **/
#define CRYP_K0RR_b196		(1 << 4)
/** CRYP_K0RR_b195 b195 **/
#define CRYP_K0RR_b195		(1 << 3)
/** CRYP_K0RR_b194 b194 **/
#define CRYP_K0RR_b194		(1 << 2)
/** CRYP_K0RR_b193 b193 **/
#define CRYP_K0RR_b193		(1 << 1)
/** CRYP_K0RR_b192 b192 **/
#define CRYP_K0RR_b192		(1 << 0)

/**@}*/

/** @defgroup cryp_k1lr K1LR key registers
@{*/

/** CRYP_K1LR_b191 b191 **/
#define CRYP_K1LR_b191		(1 << 31)
/** CRYP_K1LR_b190 b190 **/
#define CRYP_K1LR_b190		(1 << 30)
/** CRYP_K1LR_b189 b189 **/
#define CRYP_K1LR_b189		(1 << 29)
/** CRYP_K1LR_b188 b188 **/
#define CRYP_K1LR_b188		(1 << 28)
/** CRYP_K1LR_b187 b187 **/
#define CRYP_K1LR_b187		(1 << 27)
/** CRYP_K1LR_b186 b186 **/
#define CRYP_K1LR_b186		(1 << 26)
/** CRYP_K1LR_b185 b185 **/
#define CRYP_K1LR_b185		(1 << 25)
/** CRYP_K1LR_b184 b184 **/
#define CRYP_K1LR_b184		(1 << 24)
/** CRYP_K1LR_b183 b183 **/
#define CRYP_K1LR_b183		(1 << 23)
/** CRYP_K1LR_b182 b182 **/
#define CRYP_K1LR_b182		(1 << 22)
/** CRYP_K1LR_b181 b181 **/
#define CRYP_K1LR_b181		(1 << 21)
/** CRYP_K1LR_b180 b180 **/
#define CRYP_K1LR_b180		(1 << 20)
/** CRYP_K1LR_b179 b179 **/
#define CRYP_K1LR_b179		(1 << 19)
/** CRYP_K1LR_b178 b178 **/
#define CRYP_K1LR_b178		(1 << 18)
/** CRYP_K1LR_b177 b177 **/
#define CRYP_K1LR_b177		(1 << 17)
/** CRYP_K1LR_b176 b176 **/
#define CRYP_K1LR_b176		(1 << 16)
/** CRYP_K1LR_b175 b175 **/
#define CRYP_K1LR_b175		(1 << 15)
/** CRYP_K1LR_b174 b174 **/
#define CRYP_K1LR_b174		(1 << 14)
/** CRYP_K1LR_b173 b173 **/
#define CRYP_K1LR_b173		(1 << 13)
/** CRYP_K1LR_b172 b172 **/
#define CRYP_K1LR_b172		(1 << 12)
/** CRYP_K1LR_b171 b171 **/
#define CRYP_K1LR_b171		(1 << 11)
/** CRYP_K1LR_b170 b170 **/
#define CRYP_K1LR_b170		(1 << 10)
/** CRYP_K1LR_b169 b169 **/
#define CRYP_K1LR_b169		(1 << 9)
/** CRYP_K1LR_b168 b168 **/
#define CRYP_K1LR_b168		(1 << 8)
/** CRYP_K1LR_b167 b167 **/
#define CRYP_K1LR_b167		(1 << 7)
/** CRYP_K1LR_b166 b166 **/
#define CRYP_K1LR_b166		(1 << 6)
/** CRYP_K1LR_b165 b165 **/
#define CRYP_K1LR_b165		(1 << 5)
/** CRYP_K1LR_b164 b164 **/
#define CRYP_K1LR_b164		(1 << 4)
/** CRYP_K1LR_b163 b163 **/
#define CRYP_K1LR_b163		(1 << 3)
/** CRYP_K1LR_b162 b162 **/
#define CRYP_K1LR_b162		(1 << 2)
/** CRYP_K1LR_b161 b161 **/
#define CRYP_K1LR_b161		(1 << 1)
/** CRYP_K1LR_b160 b160 **/
#define CRYP_K1LR_b160		(1 << 0)

/**@}*/

/** @defgroup cryp_k1rr K1RR key registers
@{*/

/** CRYP_K1RR_b159 b159 **/
#define CRYP_K1RR_b159		(1 << 31)
/** CRYP_K1RR_b158 b158 **/
#define CRYP_K1RR_b158		(1 << 30)
/** CRYP_K1RR_b157 b157 **/
#define CRYP_K1RR_b157		(1 << 29)
/** CRYP_K1RR_b156 b156 **/
#define CRYP_K1RR_b156		(1 << 28)
/** CRYP_K1RR_b155 b155 **/
#define CRYP_K1RR_b155		(1 << 27)
/** CRYP_K1RR_b154 b154 **/
#define CRYP_K1RR_b154		(1 << 26)
/** CRYP_K1RR_b153 b153 **/
#define CRYP_K1RR_b153		(1 << 25)
/** CRYP_K1RR_b152 b152 **/
#define CRYP_K1RR_b152		(1 << 24)
/** CRYP_K1RR_b151 b151 **/
#define CRYP_K1RR_b151		(1 << 23)
/** CRYP_K1RR_b150 b150 **/
#define CRYP_K1RR_b150		(1 << 22)
/** CRYP_K1RR_b149 b149 **/
#define CRYP_K1RR_b149		(1 << 21)
/** CRYP_K1RR_b148 b148 **/
#define CRYP_K1RR_b148		(1 << 20)
/** CRYP_K1RR_b147 b147 **/
#define CRYP_K1RR_b147		(1 << 19)
/** CRYP_K1RR_b146 b146 **/
#define CRYP_K1RR_b146		(1 << 18)
/** CRYP_K1RR_b145 b145 **/
#define CRYP_K1RR_b145		(1 << 17)
/** CRYP_K1RR_b144 b144 **/
#define CRYP_K1RR_b144		(1 << 16)
/** CRYP_K1RR_b143 b143 **/
#define CRYP_K1RR_b143		(1 << 15)
/** CRYP_K1RR_b142 b142 **/
#define CRYP_K1RR_b142		(1 << 14)
/** CRYP_K1RR_b141 b141 **/
#define CRYP_K1RR_b141		(1 << 13)
/** CRYP_K1RR_b140 b140 **/
#define CRYP_K1RR_b140		(1 << 12)
/** CRYP_K1RR_b139 b139 **/
#define CRYP_K1RR_b139		(1 << 11)
/** CRYP_K1RR_b138 b138 **/
#define CRYP_K1RR_b138		(1 << 10)
/** CRYP_K1RR_b137 b137 **/
#define CRYP_K1RR_b137		(1 << 9)
/** CRYP_K1RR_b136 b136 **/
#define CRYP_K1RR_b136		(1 << 8)
/** CRYP_K1RR_b135 b135 **/
#define CRYP_K1RR_b135		(1 << 7)
/** CRYP_K1RR_b134 b134 **/
#define CRYP_K1RR_b134		(1 << 6)
/** CRYP_K1RR_b133 b133 **/
#define CRYP_K1RR_b133		(1 << 5)
/** CRYP_K1RR_b132 b132 **/
#define CRYP_K1RR_b132		(1 << 4)
/** CRYP_K1RR_b131 b131 **/
#define CRYP_K1RR_b131		(1 << 3)
/** CRYP_K1RR_b130 b130 **/
#define CRYP_K1RR_b130		(1 << 2)
/** CRYP_K1RR_b129 b129 **/
#define CRYP_K1RR_b129		(1 << 1)
/** CRYP_K1RR_b128 b128 **/
#define CRYP_K1RR_b128		(1 << 0)

/**@}*/

/** @defgroup cryp_k2lr K2LR key registers
@{*/

/** CRYP_K2LR_b127 b127 **/
#define CRYP_K2LR_b127		(1 << 31)
/** CRYP_K2LR_b126 b126 **/
#define CRYP_K2LR_b126		(1 << 30)
/** CRYP_K2LR_b125 b125 **/
#define CRYP_K2LR_b125		(1 << 29)
/** CRYP_K2LR_b124 b124 **/
#define CRYP_K2LR_b124		(1 << 28)
/** CRYP_K2LR_b123 b123 **/
#define CRYP_K2LR_b123		(1 << 27)
/** CRYP_K2LR_b122 b122 **/
#define CRYP_K2LR_b122		(1 << 26)
/** CRYP_K2LR_b121 b121 **/
#define CRYP_K2LR_b121		(1 << 25)
/** CRYP_K2LR_b120 b120 **/
#define CRYP_K2LR_b120		(1 << 24)
/** CRYP_K2LR_b119 b119 **/
#define CRYP_K2LR_b119		(1 << 23)
/** CRYP_K2LR_b118 b118 **/
#define CRYP_K2LR_b118		(1 << 22)
/** CRYP_K2LR_b117 b117 **/
#define CRYP_K2LR_b117		(1 << 21)
/** CRYP_K2LR_b116 b116 **/
#define CRYP_K2LR_b116		(1 << 20)
/** CRYP_K2LR_b115 b115 **/
#define CRYP_K2LR_b115		(1 << 19)
/** CRYP_K2LR_b114 b114 **/
#define CRYP_K2LR_b114		(1 << 18)
/** CRYP_K2LR_b113 b113 **/
#define CRYP_K2LR_b113		(1 << 17)
/** CRYP_K2LR_b112 b112 **/
#define CRYP_K2LR_b112		(1 << 16)
/** CRYP_K2LR_b111 b111 **/
#define CRYP_K2LR_b111		(1 << 15)
/** CRYP_K2LR_b110 b110 **/
#define CRYP_K2LR_b110		(1 << 14)
/** CRYP_K2LR_b109 b109 **/
#define CRYP_K2LR_b109		(1 << 13)
/** CRYP_K2LR_b108 b108 **/
#define CRYP_K2LR_b108		(1 << 12)
/** CRYP_K2LR_b107 b107 **/
#define CRYP_K2LR_b107		(1 << 11)
/** CRYP_K2LR_b106 b106 **/
#define CRYP_K2LR_b106		(1 << 10)
/** CRYP_K2LR_b105 b105 **/
#define CRYP_K2LR_b105		(1 << 9)
/** CRYP_K2LR_b104 b104 **/
#define CRYP_K2LR_b104		(1 << 8)
/** CRYP_K2LR_b103 b103 **/
#define CRYP_K2LR_b103		(1 << 7)
/** CRYP_K2LR_b102 b102 **/
#define CRYP_K2LR_b102		(1 << 6)
/** CRYP_K2LR_b101 b101 **/
#define CRYP_K2LR_b101		(1 << 5)
/** CRYP_K2LR_b100 b100 **/
#define CRYP_K2LR_b100		(1 << 4)
/** CRYP_K2LR_b99 b99 **/
#define CRYP_K2LR_b99		(1 << 3)
/** CRYP_K2LR_b98 b98 **/
#define CRYP_K2LR_b98		(1 << 2)
/** CRYP_K2LR_b97 b97 **/
#define CRYP_K2LR_b97		(1 << 1)
/** CRYP_K2LR_b96 b96 **/
#define CRYP_K2LR_b96		(1 << 0)

/**@}*/

/** @defgroup cryp_k2rr K2RR key registers
@{*/

/** CRYP_K2RR_b95 b95 **/
#define CRYP_K2RR_b95		(1 << 31)
/** CRYP_K2RR_b94 b94 **/
#define CRYP_K2RR_b94		(1 << 30)
/** CRYP_K2RR_b93 b93 **/
#define CRYP_K2RR_b93		(1 << 29)
/** CRYP_K2RR_b92 b92 **/
#define CRYP_K2RR_b92		(1 << 28)
/** CRYP_K2RR_b91 b91 **/
#define CRYP_K2RR_b91		(1 << 27)
/** CRYP_K2RR_b90 b90 **/
#define CRYP_K2RR_b90		(1 << 26)
/** CRYP_K2RR_b89 b89 **/
#define CRYP_K2RR_b89		(1 << 25)
/** CRYP_K2RR_b88 b88 **/
#define CRYP_K2RR_b88		(1 << 24)
/** CRYP_K2RR_b87 b87 **/
#define CRYP_K2RR_b87		(1 << 23)
/** CRYP_K2RR_b86 b86 **/
#define CRYP_K2RR_b86		(1 << 22)
/** CRYP_K2RR_b85 b85 **/
#define CRYP_K2RR_b85		(1 << 21)
/** CRYP_K2RR_b84 b84 **/
#define CRYP_K2RR_b84		(1 << 20)
/** CRYP_K2RR_b83 b83 **/
#define CRYP_K2RR_b83		(1 << 19)
/** CRYP_K2RR_b82 b82 **/
#define CRYP_K2RR_b82		(1 << 18)
/** CRYP_K2RR_b81 b81 **/
#define CRYP_K2RR_b81		(1 << 17)
/** CRYP_K2RR_b80 b80 **/
#define CRYP_K2RR_b80		(1 << 16)
/** CRYP_K2RR_b79 b79 **/
#define CRYP_K2RR_b79		(1 << 15)
/** CRYP_K2RR_b78 b78 **/
#define CRYP_K2RR_b78		(1 << 14)
/** CRYP_K2RR_b77 b77 **/
#define CRYP_K2RR_b77		(1 << 13)
/** CRYP_K2RR_b76 b76 **/
#define CRYP_K2RR_b76		(1 << 12)
/** CRYP_K2RR_b75 b75 **/
#define CRYP_K2RR_b75		(1 << 11)
/** CRYP_K2RR_b74 b74 **/
#define CRYP_K2RR_b74		(1 << 10)
/** CRYP_K2RR_b73 b73 **/
#define CRYP_K2RR_b73		(1 << 9)
/** CRYP_K2RR_b72 b72 **/
#define CRYP_K2RR_b72		(1 << 8)
/** CRYP_K2RR_b71 b71 **/
#define CRYP_K2RR_b71		(1 << 7)
/** CRYP_K2RR_b70 b70 **/
#define CRYP_K2RR_b70		(1 << 6)
/** CRYP_K2RR_b69 b69 **/
#define CRYP_K2RR_b69		(1 << 5)
/** CRYP_K2RR_b68 b68 **/
#define CRYP_K2RR_b68		(1 << 4)
/** CRYP_K2RR_b67 b67 **/
#define CRYP_K2RR_b67		(1 << 3)
/** CRYP_K2RR_b66 b66 **/
#define CRYP_K2RR_b66		(1 << 2)
/** CRYP_K2RR_b65 b65 **/
#define CRYP_K2RR_b65		(1 << 1)
/** CRYP_K2RR_b64 b64 **/
#define CRYP_K2RR_b64		(1 << 0)

/**@}*/

/** @defgroup cryp_k3lr K3LR key registers
@{*/

/** CRYP_K3LR_b63 b63 **/
#define CRYP_K3LR_b63		(1 << 31)
/** CRYP_K3LR_b62 b62 **/
#define CRYP_K3LR_b62		(1 << 30)
/** CRYP_K3LR_b61 b61 **/
#define CRYP_K3LR_b61		(1 << 29)
/** CRYP_K3LR_b60 b60 **/
#define CRYP_K3LR_b60		(1 << 28)
/** CRYP_K3LR_b59 b59 **/
#define CRYP_K3LR_b59		(1 << 27)
/** CRYP_K3LR_b58 b58 **/
#define CRYP_K3LR_b58		(1 << 26)
/** CRYP_K3LR_b57 b57 **/
#define CRYP_K3LR_b57		(1 << 25)
/** CRYP_K3LR_b56 b56 **/
#define CRYP_K3LR_b56		(1 << 24)
/** CRYP_K3LR_b55 b55 **/
#define CRYP_K3LR_b55		(1 << 23)
/** CRYP_K3LR_b54 b54 **/
#define CRYP_K3LR_b54		(1 << 22)
/** CRYP_K3LR_b53 b53 **/
#define CRYP_K3LR_b53		(1 << 21)
/** CRYP_K3LR_b52 b52 **/
#define CRYP_K3LR_b52		(1 << 20)
/** CRYP_K3LR_b51 b51 **/
#define CRYP_K3LR_b51		(1 << 19)
/** CRYP_K3LR_b50 b50 **/
#define CRYP_K3LR_b50		(1 << 18)
/** CRYP_K3LR_b49 b49 **/
#define CRYP_K3LR_b49		(1 << 17)
/** CRYP_K3LR_b48 b48 **/
#define CRYP_K3LR_b48		(1 << 16)
/** CRYP_K3LR_b47 b47 **/
#define CRYP_K3LR_b47		(1 << 15)
/** CRYP_K3LR_b46 b46 **/
#define CRYP_K3LR_b46		(1 << 14)
/** CRYP_K3LR_b45 b45 **/
#define CRYP_K3LR_b45		(1 << 13)
/** CRYP_K3LR_b44 b44 **/
#define CRYP_K3LR_b44		(1 << 12)
/** CRYP_K3LR_b43 b43 **/
#define CRYP_K3LR_b43		(1 << 11)
/** CRYP_K3LR_b42 b42 **/
#define CRYP_K3LR_b42		(1 << 10)
/** CRYP_K3LR_b41 b41 **/
#define CRYP_K3LR_b41		(1 << 9)
/** CRYP_K3LR_b40 b40 **/
#define CRYP_K3LR_b40		(1 << 8)
/** CRYP_K3LR_b39 b39 **/
#define CRYP_K3LR_b39		(1 << 7)
/** CRYP_K3LR_b38 b38 **/
#define CRYP_K3LR_b38		(1 << 6)
/** CRYP_K3LR_b37 b37 **/
#define CRYP_K3LR_b37		(1 << 5)
/** CRYP_K3LR_b36 b36 **/
#define CRYP_K3LR_b36		(1 << 4)
/** CRYP_K3LR_b35 b35 **/
#define CRYP_K3LR_b35		(1 << 3)
/** CRYP_K3LR_b34 b34 **/
#define CRYP_K3LR_b34		(1 << 2)
/** CRYP_K3LR_b33 b33 **/
#define CRYP_K3LR_b33		(1 << 1)
/** CRYP_K3LR_b32 b32 **/
#define CRYP_K3LR_b32		(1 << 0)

/**@}*/

/** @defgroup cryp_k3rr K3RR key registers
@{*/

/** CRYP_K3RR_b31 b31 **/
#define CRYP_K3RR_b31		(1 << 31)
/** CRYP_K3RR_b30 b30 **/
#define CRYP_K3RR_b30		(1 << 30)
/** CRYP_K3RR_b29 b29 **/
#define CRYP_K3RR_b29		(1 << 29)
/** CRYP_K3RR_b28 b28 **/
#define CRYP_K3RR_b28		(1 << 28)
/** CRYP_K3RR_b27 b27 **/
#define CRYP_K3RR_b27		(1 << 27)
/** CRYP_K3RR_b26 b26 **/
#define CRYP_K3RR_b26		(1 << 26)
/** CRYP_K3RR_b25 b25 **/
#define CRYP_K3RR_b25		(1 << 25)
/** CRYP_K3RR_b24 b24 **/
#define CRYP_K3RR_b24		(1 << 24)
/** CRYP_K3RR_b23 b23 **/
#define CRYP_K3RR_b23		(1 << 23)
/** CRYP_K3RR_b22 b22 **/
#define CRYP_K3RR_b22		(1 << 22)
/** CRYP_K3RR_b21 b21 **/
#define CRYP_K3RR_b21		(1 << 21)
/** CRYP_K3RR_b20 b20 **/
#define CRYP_K3RR_b20		(1 << 20)
/** CRYP_K3RR_b19 b19 **/
#define CRYP_K3RR_b19		(1 << 19)
/** CRYP_K3RR_b18 b18 **/
#define CRYP_K3RR_b18		(1 << 18)
/** CRYP_K3RR_b17 b17 **/
#define CRYP_K3RR_b17		(1 << 17)
/** CRYP_K3RR_b16 b16 **/
#define CRYP_K3RR_b16		(1 << 16)
/** CRYP_K3RR_b15 b15 **/
#define CRYP_K3RR_b15		(1 << 15)
/** CRYP_K3RR_b14 b14 **/
#define CRYP_K3RR_b14		(1 << 14)
/** CRYP_K3RR_b13 b13 **/
#define CRYP_K3RR_b13		(1 << 13)
/** CRYP_K3RR_b12 b12 **/
#define CRYP_K3RR_b12		(1 << 12)
/** CRYP_K3RR_b11 b11 **/
#define CRYP_K3RR_b11		(1 << 11)
/** CRYP_K3RR_b10 b10 **/
#define CRYP_K3RR_b10		(1 << 10)
/** CRYP_K3RR_b9 b9 **/
#define CRYP_K3RR_b9		(1 << 9)
/** CRYP_K3RR_b8 b8 **/
#define CRYP_K3RR_b8		(1 << 8)
/** CRYP_K3RR_b7 b7 **/
#define CRYP_K3RR_b7		(1 << 7)
/** CRYP_K3RR_b6 b6 **/
#define CRYP_K3RR_b6		(1 << 6)
/** CRYP_K3RR_b5 b5 **/
#define CRYP_K3RR_b5		(1 << 5)
/** CRYP_K3RR_b4 b4 **/
#define CRYP_K3RR_b4		(1 << 4)
/** CRYP_K3RR_b3 b3 **/
#define CRYP_K3RR_b3		(1 << 3)
/** CRYP_K3RR_b2 b2 **/
#define CRYP_K3RR_b2		(1 << 2)
/** CRYP_K3RR_b1 b1 **/
#define CRYP_K3RR_b1		(1 << 1)
/** CRYP_K3RR_b0 b0 **/
#define CRYP_K3RR_b0		(1 << 0)

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


#define CRYP_CSGCMCCM0R_CSGCMCCM0R_SHIFT		0
#define CRYP_CSGCMCCM0R_CSGCMCCM0R_MASK		0xffffffff
/** @defgroup cryp_csgcmccm0r_csgcmccm0r CSGCMCCM0R CSGCMCCM0R
@{*/
/**@}*/


/**@}*/

/** @defgroup cryp_csgcmccm1r CSGCMCCM1R context swap register
@{*/


#define CRYP_CSGCMCCM1R_CSGCMCCM1R_SHIFT		0
#define CRYP_CSGCMCCM1R_CSGCMCCM1R_MASK		0xffffffff
/** @defgroup cryp_csgcmccm1r_csgcmccm1r CSGCMCCM1R CSGCMCCM1R
@{*/
/**@}*/


/**@}*/

/** @defgroup cryp_csgcmccm2r CSGCMCCM2R context swap register
@{*/


#define CRYP_CSGCMCCM2R_CSGCMCCM2R_SHIFT		0
#define CRYP_CSGCMCCM2R_CSGCMCCM2R_MASK		0xffffffff
/** @defgroup cryp_csgcmccm2r_csgcmccm2r CSGCMCCM2R CSGCMCCM2R
@{*/
/**@}*/


/**@}*/

/** @defgroup cryp_csgcmccm3r CSGCMCCM3R context swap register
@{*/


#define CRYP_CSGCMCCM3R_CSGCMCCM3R_SHIFT		0
#define CRYP_CSGCMCCM3R_CSGCMCCM3R_MASK		0xffffffff
/** @defgroup cryp_csgcmccm3r_csgcmccm3r CSGCMCCM3R CSGCMCCM3R
@{*/
/**@}*/


/**@}*/

/** @defgroup cryp_csgcmccm4r CSGCMCCM4R context swap register
@{*/


#define CRYP_CSGCMCCM4R_CSGCMCCM4R_SHIFT		0
#define CRYP_CSGCMCCM4R_CSGCMCCM4R_MASK		0xffffffff
/** @defgroup cryp_csgcmccm4r_csgcmccm4r CSGCMCCM4R CSGCMCCM4R
@{*/
/**@}*/


/**@}*/

/** @defgroup cryp_csgcmccm5r CSGCMCCM5R context swap register
@{*/


#define CRYP_CSGCMCCM5R_CSGCMCCM5R_SHIFT		0
#define CRYP_CSGCMCCM5R_CSGCMCCM5R_MASK		0xffffffff
/** @defgroup cryp_csgcmccm5r_csgcmccm5r CSGCMCCM5R CSGCMCCM5R
@{*/
/**@}*/


/**@}*/

/** @defgroup cryp_csgcmccm6r CSGCMCCM6R context swap register
@{*/


#define CRYP_CSGCMCCM6R_CSGCMCCM6R_SHIFT		0
#define CRYP_CSGCMCCM6R_CSGCMCCM6R_MASK		0xffffffff
/** @defgroup cryp_csgcmccm6r_csgcmccm6r CSGCMCCM6R CSGCMCCM6R
@{*/
/**@}*/


/**@}*/

/** @defgroup cryp_csgcmccm7r CSGCMCCM7R context swap register
@{*/


#define CRYP_CSGCMCCM7R_CSGCMCCM7R_SHIFT		0
#define CRYP_CSGCMCCM7R_CSGCMCCM7R_MASK		0xffffffff
/** @defgroup cryp_csgcmccm7r_csgcmccm7r CSGCMCCM7R CSGCMCCM7R
@{*/
/**@}*/


/**@}*/

/** @defgroup cryp_csgcm0r CSGCM0R context swap register
@{*/


#define CRYP_CSGCM0R_CSGCM0R_SHIFT		0
#define CRYP_CSGCM0R_CSGCM0R_MASK		0xffffffff
/** @defgroup cryp_csgcm0r_csgcm0r CSGCM0R CSGCM0R
@{*/
/**@}*/


/**@}*/

/** @defgroup cryp_csgcm1r CSGCM1R context swap register
@{*/


#define CRYP_CSGCM1R_CSGCM1R_SHIFT		0
#define CRYP_CSGCM1R_CSGCM1R_MASK		0xffffffff
/** @defgroup cryp_csgcm1r_csgcm1r CSGCM1R CSGCM1R
@{*/
/**@}*/


/**@}*/

/** @defgroup cryp_csgcm2r CSGCM2R context swap register
@{*/


#define CRYP_CSGCM2R_CSGCM2R_SHIFT		0
#define CRYP_CSGCM2R_CSGCM2R_MASK		0xffffffff
/** @defgroup cryp_csgcm2r_csgcm2r CSGCM2R CSGCM2R
@{*/
/**@}*/


/**@}*/

/** @defgroup cryp_csgcm3r CSGCM3R context swap register
@{*/


#define CRYP_CSGCM3R_CSGCM3R_SHIFT		0
#define CRYP_CSGCM3R_CSGCM3R_MASK		0xffffffff
/** @defgroup cryp_csgcm3r_csgcm3r CSGCM3R CSGCM3R
@{*/
/**@}*/


/**@}*/

/** @defgroup cryp_csgcm4r CSGCM4R context swap register
@{*/


#define CRYP_CSGCM4R_CSGCM4R_SHIFT		0
#define CRYP_CSGCM4R_CSGCM4R_MASK		0xffffffff
/** @defgroup cryp_csgcm4r_csgcm4r CSGCM4R CSGCM4R
@{*/
/**@}*/


/**@}*/

/** @defgroup cryp_csgcm5r CSGCM5R context swap register
@{*/


#define CRYP_CSGCM5R_CSGCM5R_SHIFT		0
#define CRYP_CSGCM5R_CSGCM5R_MASK		0xffffffff
/** @defgroup cryp_csgcm5r_csgcm5r CSGCM5R CSGCM5R
@{*/
/**@}*/


/**@}*/

/** @defgroup cryp_csgcm6r CSGCM6R context swap register
@{*/


#define CRYP_CSGCM6R_CSGCM6R_SHIFT		0
#define CRYP_CSGCM6R_CSGCM6R_MASK		0xffffffff
/** @defgroup cryp_csgcm6r_csgcm6r CSGCM6R CSGCM6R
@{*/
/**@}*/


/**@}*/

/** @defgroup cryp_csgcm7r CSGCM7R context swap register
@{*/


#define CRYP_CSGCM7R_CSGCM7R_SHIFT		0
#define CRYP_CSGCM7R_CSGCM7R_MASK		0xffffffff
/** @defgroup cryp_csgcm7r_csgcm7r CSGCM7R CSGCM7R
@{*/
/**@}*/


/**@}*/
