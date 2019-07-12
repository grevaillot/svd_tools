#pragma once 

/* --- MDIOS: Management data input/output slave -------------------- */

/** @defgroup mdios_registers Management data input/output slave Register
@{*/

/** MDIOS_MDIOS_CR MDIOS configuration register **/
#define MDIOS_MDIOS_CR			MMIO32(MDIOS_BASE + 0x00)
/** MDIOS_MDIOS_WRFR MDIOS write flag register **/
#define MDIOS_MDIOS_WRFR			MMIO32(MDIOS_BASE + 0x04)
/** MDIOS_MDIOS_CWRFR MDIOS clear write flag register **/
#define MDIOS_MDIOS_CWRFR			MMIO32(MDIOS_BASE + 0x08)
/** MDIOS_MDIOS_RDFR MDIOS read flag register **/
#define MDIOS_MDIOS_RDFR			MMIO32(MDIOS_BASE + 0x0c)
/** MDIOS_MDIOS_CRDFR MDIOS clear read flag register **/
#define MDIOS_MDIOS_CRDFR			MMIO32(MDIOS_BASE + 0x10)
/** MDIOS_MDIOS_SR MDIOS status register **/
#define MDIOS_MDIOS_SR			MMIO32(MDIOS_BASE + 0x14)
/** MDIOS_MDIOS_CLRFR MDIOS clear flag register **/
#define MDIOS_MDIOS_CLRFR			MMIO32(MDIOS_BASE + 0x18)
/** MDIOS_MDIOS_DINR0 MDIOS input data register 0 **/
#define MDIOS_MDIOS_DINR0			MMIO32(MDIOS_BASE + 0x1c)
/** MDIOS_MDIOS_DINR1 MDIOS input data register 1 **/
#define MDIOS_MDIOS_DINR1			MMIO32(MDIOS_BASE + 0x20)
/** MDIOS_MDIOS_DINR2 MDIOS input data register 2 **/
#define MDIOS_MDIOS_DINR2			MMIO32(MDIOS_BASE + 0x24)
/** MDIOS_MDIOS_DINR3 MDIOS input data register 3 **/
#define MDIOS_MDIOS_DINR3			MMIO32(MDIOS_BASE + 0x28)
/** MDIOS_MDIOS_DINR4 MDIOS input data register 4 **/
#define MDIOS_MDIOS_DINR4			MMIO32(MDIOS_BASE + 0x2c)
/** MDIOS_MDIOS_DINR5 MDIOS input data register 5 **/
#define MDIOS_MDIOS_DINR5			MMIO32(MDIOS_BASE + 0x30)
/** MDIOS_MDIOS_DINR6 MDIOS input data register 6 **/
#define MDIOS_MDIOS_DINR6			MMIO32(MDIOS_BASE + 0x34)
/** MDIOS_MDIOS_DINR7 MDIOS input data register 7 **/
#define MDIOS_MDIOS_DINR7			MMIO32(MDIOS_BASE + 0x38)
/** MDIOS_MDIOS_DINR8 MDIOS input data register 8 **/
#define MDIOS_MDIOS_DINR8			MMIO32(MDIOS_BASE + 0x3c)
/** MDIOS_MDIOS_DINR9 MDIOS input data register 9 **/
#define MDIOS_MDIOS_DINR9			MMIO32(MDIOS_BASE + 0x40)
/** MDIOS_MDIOS_DINR10 MDIOS input data register 10 **/
#define MDIOS_MDIOS_DINR10			MMIO32(MDIOS_BASE + 0x44)
/** MDIOS_MDIOS_DINR11 MDIOS input data register 11 **/
#define MDIOS_MDIOS_DINR11			MMIO32(MDIOS_BASE + 0x48)
/** MDIOS_MDIOS_DINR12 MDIOS input data register 12 **/
#define MDIOS_MDIOS_DINR12			MMIO32(MDIOS_BASE + 0x4c)
/** MDIOS_MDIOS_DINR13 MDIOS input data register 13 **/
#define MDIOS_MDIOS_DINR13			MMIO32(MDIOS_BASE + 0x50)
/** MDIOS_MDIOS_DINR14 MDIOS input data register 14 **/
#define MDIOS_MDIOS_DINR14			MMIO32(MDIOS_BASE + 0x54)
/** MDIOS_MDIOS_DINR15 MDIOS input data register 15 **/
#define MDIOS_MDIOS_DINR15			MMIO32(MDIOS_BASE + 0x58)
/** MDIOS_MDIOS_DINR16 MDIOS input data register 16 **/
#define MDIOS_MDIOS_DINR16			MMIO32(MDIOS_BASE + 0x5c)
/** MDIOS_MDIOS_DINR17 MDIOS input data register 17 **/
#define MDIOS_MDIOS_DINR17			MMIO32(MDIOS_BASE + 0x60)
/** MDIOS_MDIOS_DINR18 MDIOS input data register 18 **/
#define MDIOS_MDIOS_DINR18			MMIO32(MDIOS_BASE + 0x64)
/** MDIOS_MDIOS_DINR19 MDIOS input data register 19 **/
#define MDIOS_MDIOS_DINR19			MMIO32(MDIOS_BASE + 0x68)
/** MDIOS_MDIOS_DINR20 MDIOS input data register 20 **/
#define MDIOS_MDIOS_DINR20			MMIO32(MDIOS_BASE + 0x6c)
/** MDIOS_MDIOS_DINR21 MDIOS input data register 21 **/
#define MDIOS_MDIOS_DINR21			MMIO32(MDIOS_BASE + 0x70)
/** MDIOS_MDIOS_DINR22 MDIOS input data register 22 **/
#define MDIOS_MDIOS_DINR22			MMIO32(MDIOS_BASE + 0x74)
/** MDIOS_MDIOS_DINR23 MDIOS input data register 23 **/
#define MDIOS_MDIOS_DINR23			MMIO32(MDIOS_BASE + 0x78)
/** MDIOS_MDIOS_DINR24 MDIOS input data register 24 **/
#define MDIOS_MDIOS_DINR24			MMIO32(MDIOS_BASE + 0x7c)
/** MDIOS_MDIOS_DINR25 MDIOS input data register 25 **/
#define MDIOS_MDIOS_DINR25			MMIO32(MDIOS_BASE + 0x80)
/** MDIOS_MDIOS_DINR26 MDIOS input data register 26 **/
#define MDIOS_MDIOS_DINR26			MMIO32(MDIOS_BASE + 0x84)
/** MDIOS_MDIOS_DINR27 MDIOS input data register 27 **/
#define MDIOS_MDIOS_DINR27			MMIO32(MDIOS_BASE + 0x88)
/** MDIOS_MDIOS_DINR28 MDIOS input data register 28 **/
#define MDIOS_MDIOS_DINR28			MMIO32(MDIOS_BASE + 0x8c)
/** MDIOS_MDIOS_DINR29 MDIOS input data register 29 **/
#define MDIOS_MDIOS_DINR29			MMIO32(MDIOS_BASE + 0x90)
/** MDIOS_MDIOS_DINR30 MDIOS input data register 30 **/
#define MDIOS_MDIOS_DINR30			MMIO32(MDIOS_BASE + 0x94)
/** MDIOS_MDIOS_DINR31 MDIOS input data register 31 **/
#define MDIOS_MDIOS_DINR31			MMIO32(MDIOS_BASE + 0x98)
/** MDIOS_MDIOS_DOUTR0 MDIOS output data register 0 **/
#define MDIOS_MDIOS_DOUTR0			MMIO32(MDIOS_BASE + 0x9c)
/** MDIOS_MDIOS_DOUTR1 MDIOS output data register 1 **/
#define MDIOS_MDIOS_DOUTR1			MMIO32(MDIOS_BASE + 0xa0)
/** MDIOS_MDIOS_DOUTR2 MDIOS output data register 2 **/
#define MDIOS_MDIOS_DOUTR2			MMIO32(MDIOS_BASE + 0xa4)
/** MDIOS_MDIOS_DOUTR3 MDIOS output data register 3 **/
#define MDIOS_MDIOS_DOUTR3			MMIO32(MDIOS_BASE + 0xa8)
/** MDIOS_MDIOS_DOUTR4 MDIOS output data register 4 **/
#define MDIOS_MDIOS_DOUTR4			MMIO32(MDIOS_BASE + 0xac)
/** MDIOS_MDIOS_DOUTR5 MDIOS output data register 5 **/
#define MDIOS_MDIOS_DOUTR5			MMIO32(MDIOS_BASE + 0xb0)
/** MDIOS_MDIOS_DOUTR6 MDIOS output data register 6 **/
#define MDIOS_MDIOS_DOUTR6			MMIO32(MDIOS_BASE + 0xb4)
/** MDIOS_MDIOS_DOUTR7 MDIOS output data register 7 **/
#define MDIOS_MDIOS_DOUTR7			MMIO32(MDIOS_BASE + 0xb8)
/** MDIOS_MDIOS_DOUTR8 MDIOS output data register 8 **/
#define MDIOS_MDIOS_DOUTR8			MMIO32(MDIOS_BASE + 0xbc)
/** MDIOS_MDIOS_DOUTR9 MDIOS output data register 9 **/
#define MDIOS_MDIOS_DOUTR9			MMIO32(MDIOS_BASE + 0xc0)
/** MDIOS_MDIOS_DOUTR10 MDIOS output data register 10 **/
#define MDIOS_MDIOS_DOUTR10			MMIO32(MDIOS_BASE + 0xc4)
/** MDIOS_MDIOS_DOUTR11 MDIOS output data register 11 **/
#define MDIOS_MDIOS_DOUTR11			MMIO32(MDIOS_BASE + 0xc8)
/** MDIOS_MDIOS_DOUTR12 MDIOS output data register 12 **/
#define MDIOS_MDIOS_DOUTR12			MMIO32(MDIOS_BASE + 0xcc)
/** MDIOS_MDIOS_DOUTR13 MDIOS output data register 13 **/
#define MDIOS_MDIOS_DOUTR13			MMIO32(MDIOS_BASE + 0xd0)
/** MDIOS_MDIOS_DOUTR14 MDIOS output data register 14 **/
#define MDIOS_MDIOS_DOUTR14			MMIO32(MDIOS_BASE + 0xd4)
/** MDIOS_MDIOS_DOUTR15 MDIOS output data register 15 **/
#define MDIOS_MDIOS_DOUTR15			MMIO32(MDIOS_BASE + 0xd8)
/** MDIOS_MDIOS_DOUTR16 MDIOS output data register 16 **/
#define MDIOS_MDIOS_DOUTR16			MMIO32(MDIOS_BASE + 0xdc)
/** MDIOS_MDIOS_DOUTR17 MDIOS output data register 17 **/
#define MDIOS_MDIOS_DOUTR17			MMIO32(MDIOS_BASE + 0xe0)
/** MDIOS_MDIOS_DOUTR18 MDIOS output data register 18 **/
#define MDIOS_MDIOS_DOUTR18			MMIO32(MDIOS_BASE + 0xe4)
/** MDIOS_MDIOS_DOUTR19 MDIOS output data register 19 **/
#define MDIOS_MDIOS_DOUTR19			MMIO32(MDIOS_BASE + 0xe8)
/** MDIOS_MDIOS_DOUTR20 MDIOS output data register 20 **/
#define MDIOS_MDIOS_DOUTR20			MMIO32(MDIOS_BASE + 0xec)
/** MDIOS_MDIOS_DOUTR21 MDIOS output data register 21 **/
#define MDIOS_MDIOS_DOUTR21			MMIO32(MDIOS_BASE + 0xf0)
/** MDIOS_MDIOS_DOUTR22 MDIOS output data register 22 **/
#define MDIOS_MDIOS_DOUTR22			MMIO32(MDIOS_BASE + 0xf4)
/** MDIOS_MDIOS_DOUTR23 MDIOS output data register 23 **/
#define MDIOS_MDIOS_DOUTR23			MMIO32(MDIOS_BASE + 0xf8)
/** MDIOS_MDIOS_DOUTR24 MDIOS output data register 24 **/
#define MDIOS_MDIOS_DOUTR24			MMIO32(MDIOS_BASE + 0xfc)
/** MDIOS_MDIOS_DOUTR25 MDIOS output data register 25 **/
#define MDIOS_MDIOS_DOUTR25			MMIO32(MDIOS_BASE + 0x100)
/** MDIOS_MDIOS_DOUTR26 MDIOS output data register 26 **/
#define MDIOS_MDIOS_DOUTR26			MMIO32(MDIOS_BASE + 0x104)
/** MDIOS_MDIOS_DOUTR27 MDIOS output data register 27 **/
#define MDIOS_MDIOS_DOUTR27			MMIO32(MDIOS_BASE + 0x108)
/** MDIOS_MDIOS_DOUTR28 MDIOS output data register 28 **/
#define MDIOS_MDIOS_DOUTR28			MMIO32(MDIOS_BASE + 0x10c)
/** MDIOS_MDIOS_DOUTR29 MDIOS output data register 29 **/
#define MDIOS_MDIOS_DOUTR29			MMIO32(MDIOS_BASE + 0x110)
/** MDIOS_MDIOS_DOUTR30 MDIOS output data register 30 **/
#define MDIOS_MDIOS_DOUTR30			MMIO32(MDIOS_BASE + 0x114)
/** MDIOS_MDIOS_DOUTR31 MDIOS output data register 31 **/
#define MDIOS_MDIOS_DOUTR31			MMIO32(MDIOS_BASE + 0x118)

/**@}*/


/** @defgroup mdios_mdios_cr MDIOSCR MDIOS configuration register
@{*/


#define MDIOS_MDIOS_CR_PORT_ADDRESS_SHIFT		8
#define MDIOS_MDIOS_CR_PORT_ADDRESS_MASK		0x1f
/** @defgroup mdios_mdios_cr_port_address PORTADDRESS Slaves's address
@{*/
/**@}*/

/** MDIOS_MDIOS_CR_DPC Disable Preamble Check **/
#define MDIOS_MDIOS_CR_DPC		(1 << 7)
/** MDIOS_MDIOS_CR_EIE Error interrupt enable **/
#define MDIOS_MDIOS_CR_EIE		(1 << 3)
/** MDIOS_MDIOS_CR_RDIE Register Read Interrupt Enable **/
#define MDIOS_MDIOS_CR_RDIE		(1 << 2)
/** MDIOS_MDIOS_CR_WRIE Register write interrupt enable **/
#define MDIOS_MDIOS_CR_WRIE		(1 << 1)
/** MDIOS_MDIOS_CR_EN Peripheral enable **/
#define MDIOS_MDIOS_CR_EN		(1 << 0)

/**@}*/

/** @defgroup mdios_mdios_wrfr MDIOSWRFR MDIOS write flag register
@{*/


#define MDIOS_MDIOS_WRFR_WRF_SHIFT		0
#define MDIOS_MDIOS_WRFR_WRF_MASK		0xffffffff
/** @defgroup mdios_mdios_wrfr_wrf WRF Write flags for MDIO registers 0 to 31
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_cwrfr MDIOSCWRFR MDIOS clear write flag register
@{*/


#define MDIOS_MDIOS_CWRFR_CWRF_SHIFT		0
#define MDIOS_MDIOS_CWRFR_CWRF_MASK		0xffffffff
/** @defgroup mdios_mdios_cwrfr_cwrf CWRF Clear the write flag
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_rdfr MDIOSRDFR MDIOS read flag register
@{*/


#define MDIOS_MDIOS_RDFR_RDF_SHIFT		0
#define MDIOS_MDIOS_RDFR_RDF_MASK		0xffffffff
/** @defgroup mdios_mdios_rdfr_rdf RDF Read flags for MDIO registers 0 to 31
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_crdfr MDIOSCRDFR MDIOS clear read flag register
@{*/


#define MDIOS_MDIOS_CRDFR_CRDF_SHIFT		0
#define MDIOS_MDIOS_CRDFR_CRDF_MASK		0xffffffff
/** @defgroup mdios_mdios_crdfr_crdf CRDF Clear the read flag
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_sr MDIOSSR MDIOS status register
@{*/

/** MDIOS_MDIOS_SR_TERF Turnaround error flag **/
#define MDIOS_MDIOS_SR_TERF		(1 << 2)
/** MDIOS_MDIOS_SR_SERF Start error flag **/
#define MDIOS_MDIOS_SR_SERF		(1 << 1)
/** MDIOS_MDIOS_SR_PERF Preamble error flag **/
#define MDIOS_MDIOS_SR_PERF		(1 << 0)

/**@}*/

/** @defgroup mdios_mdios_clrfr MDIOSCLRFR MDIOS clear flag register
@{*/

/** MDIOS_MDIOS_CLRFR_CTERF Clear the turnaround error flag **/
#define MDIOS_MDIOS_CLRFR_CTERF		(1 << 2)
/** MDIOS_MDIOS_CLRFR_CSERF Clear the start error flag **/
#define MDIOS_MDIOS_CLRFR_CSERF		(1 << 1)
/** MDIOS_MDIOS_CLRFR_CPERF Clear the preamble error flag **/
#define MDIOS_MDIOS_CLRFR_CPERF		(1 << 0)

/**@}*/

/** @defgroup mdios_mdios_dinr0 MDIOSDINR0 MDIOS input data register 0
@{*/


#define MDIOS_MDIOS_DINR0_DIN0_SHIFT		0
#define MDIOS_MDIOS_DINR0_DIN0_MASK		0xffff
/** @defgroup mdios_mdios_dinr0_din0 DIN0 Input data received from MDIO Master during write frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_dinr1 MDIOSDINR1 MDIOS input data register 1
@{*/


#define MDIOS_MDIOS_DINR1_DIN1_SHIFT		0
#define MDIOS_MDIOS_DINR1_DIN1_MASK		0xffff
/** @defgroup mdios_mdios_dinr1_din1 DIN1 Input data received from MDIO Master during write frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_dinr2 MDIOSDINR2 MDIOS input data register 2
@{*/


#define MDIOS_MDIOS_DINR2_DIN2_SHIFT		0
#define MDIOS_MDIOS_DINR2_DIN2_MASK		0xffff
/** @defgroup mdios_mdios_dinr2_din2 DIN2 Input data received from MDIO Master during write frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_dinr3 MDIOSDINR3 MDIOS input data register 3
@{*/


#define MDIOS_MDIOS_DINR3_DIN3_SHIFT		0
#define MDIOS_MDIOS_DINR3_DIN3_MASK		0xffff
/** @defgroup mdios_mdios_dinr3_din3 DIN3 Input data received from MDIO Master during write frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_dinr4 MDIOSDINR4 MDIOS input data register 4
@{*/


#define MDIOS_MDIOS_DINR4_DIN4_SHIFT		0
#define MDIOS_MDIOS_DINR4_DIN4_MASK		0xffff
/** @defgroup mdios_mdios_dinr4_din4 DIN4 Input data received from MDIO Master during write frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_dinr5 MDIOSDINR5 MDIOS input data register 5
@{*/


#define MDIOS_MDIOS_DINR5_DIN5_SHIFT		0
#define MDIOS_MDIOS_DINR5_DIN5_MASK		0xffff
/** @defgroup mdios_mdios_dinr5_din5 DIN5 Input data received from MDIO Master during write frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_dinr6 MDIOSDINR6 MDIOS input data register 6
@{*/


#define MDIOS_MDIOS_DINR6_DIN6_SHIFT		0
#define MDIOS_MDIOS_DINR6_DIN6_MASK		0xffff
/** @defgroup mdios_mdios_dinr6_din6 DIN6 Input data received from MDIO Master during write frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_dinr7 MDIOSDINR7 MDIOS input data register 7
@{*/


#define MDIOS_MDIOS_DINR7_DIN7_SHIFT		0
#define MDIOS_MDIOS_DINR7_DIN7_MASK		0xffff
/** @defgroup mdios_mdios_dinr7_din7 DIN7 Input data received from MDIO Master during write frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_dinr8 MDIOSDINR8 MDIOS input data register 8
@{*/


#define MDIOS_MDIOS_DINR8_DIN8_SHIFT		0
#define MDIOS_MDIOS_DINR8_DIN8_MASK		0xffff
/** @defgroup mdios_mdios_dinr8_din8 DIN8 Input data received from MDIO Master during write frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_dinr9 MDIOSDINR9 MDIOS input data register 9
@{*/


#define MDIOS_MDIOS_DINR9_DIN9_SHIFT		0
#define MDIOS_MDIOS_DINR9_DIN9_MASK		0xffff
/** @defgroup mdios_mdios_dinr9_din9 DIN9 Input data received from MDIO Master during write frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_dinr10 MDIOSDINR10 MDIOS input data register 10
@{*/


#define MDIOS_MDIOS_DINR10_DIN10_SHIFT		0
#define MDIOS_MDIOS_DINR10_DIN10_MASK		0xffff
/** @defgroup mdios_mdios_dinr10_din10 DIN10 Input data received from MDIO Master during write frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_dinr11 MDIOSDINR11 MDIOS input data register 11
@{*/


#define MDIOS_MDIOS_DINR11_DIN11_SHIFT		0
#define MDIOS_MDIOS_DINR11_DIN11_MASK		0xffff
/** @defgroup mdios_mdios_dinr11_din11 DIN11 Input data received from MDIO Master during write frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_dinr12 MDIOSDINR12 MDIOS input data register 12
@{*/


#define MDIOS_MDIOS_DINR12_DIN12_SHIFT		0
#define MDIOS_MDIOS_DINR12_DIN12_MASK		0xffff
/** @defgroup mdios_mdios_dinr12_din12 DIN12 Input data received from MDIO Master during write frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_dinr13 MDIOSDINR13 MDIOS input data register 13
@{*/


#define MDIOS_MDIOS_DINR13_DIN13_SHIFT		0
#define MDIOS_MDIOS_DINR13_DIN13_MASK		0xffff
/** @defgroup mdios_mdios_dinr13_din13 DIN13 Input data received from MDIO Master during write frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_dinr14 MDIOSDINR14 MDIOS input data register 14
@{*/


#define MDIOS_MDIOS_DINR14_DIN14_SHIFT		0
#define MDIOS_MDIOS_DINR14_DIN14_MASK		0xffff
/** @defgroup mdios_mdios_dinr14_din14 DIN14 Input data received from MDIO Master during write frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_dinr15 MDIOSDINR15 MDIOS input data register 15
@{*/


#define MDIOS_MDIOS_DINR15_DIN15_SHIFT		0
#define MDIOS_MDIOS_DINR15_DIN15_MASK		0xffff
/** @defgroup mdios_mdios_dinr15_din15 DIN15 Input data received from MDIO Master during write frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_dinr16 MDIOSDINR16 MDIOS input data register 16
@{*/


#define MDIOS_MDIOS_DINR16_DIN16_SHIFT		0
#define MDIOS_MDIOS_DINR16_DIN16_MASK		0xffff
/** @defgroup mdios_mdios_dinr16_din16 DIN16 Input data received from MDIO Master during write frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_dinr17 MDIOSDINR17 MDIOS input data register 17
@{*/


#define MDIOS_MDIOS_DINR17_DIN17_SHIFT		0
#define MDIOS_MDIOS_DINR17_DIN17_MASK		0xffff
/** @defgroup mdios_mdios_dinr17_din17 DIN17 Input data received from MDIO Master during write frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_dinr18 MDIOSDINR18 MDIOS input data register 18
@{*/


#define MDIOS_MDIOS_DINR18_DIN18_SHIFT		0
#define MDIOS_MDIOS_DINR18_DIN18_MASK		0xffff
/** @defgroup mdios_mdios_dinr18_din18 DIN18 Input data received from MDIO Master during write frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_dinr19 MDIOSDINR19 MDIOS input data register 19
@{*/


#define MDIOS_MDIOS_DINR19_DIN19_SHIFT		0
#define MDIOS_MDIOS_DINR19_DIN19_MASK		0xffff
/** @defgroup mdios_mdios_dinr19_din19 DIN19 Input data received from MDIO Master during write frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_dinr20 MDIOSDINR20 MDIOS input data register 20
@{*/


#define MDIOS_MDIOS_DINR20_DIN20_SHIFT		0
#define MDIOS_MDIOS_DINR20_DIN20_MASK		0xffff
/** @defgroup mdios_mdios_dinr20_din20 DIN20 Input data received from MDIO Master during write frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_dinr21 MDIOSDINR21 MDIOS input data register 21
@{*/


#define MDIOS_MDIOS_DINR21_DIN21_SHIFT		0
#define MDIOS_MDIOS_DINR21_DIN21_MASK		0xffff
/** @defgroup mdios_mdios_dinr21_din21 DIN21 Input data received from MDIO Master during write frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_dinr22 MDIOSDINR22 MDIOS input data register 22
@{*/


#define MDIOS_MDIOS_DINR22_DIN22_SHIFT		0
#define MDIOS_MDIOS_DINR22_DIN22_MASK		0xffff
/** @defgroup mdios_mdios_dinr22_din22 DIN22 Input data received from MDIO Master during write frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_dinr23 MDIOSDINR23 MDIOS input data register 23
@{*/


#define MDIOS_MDIOS_DINR23_DIN23_SHIFT		0
#define MDIOS_MDIOS_DINR23_DIN23_MASK		0xffff
/** @defgroup mdios_mdios_dinr23_din23 DIN23 Input data received from MDIO Master during write frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_dinr24 MDIOSDINR24 MDIOS input data register 24
@{*/


#define MDIOS_MDIOS_DINR24_DIN24_SHIFT		0
#define MDIOS_MDIOS_DINR24_DIN24_MASK		0xffff
/** @defgroup mdios_mdios_dinr24_din24 DIN24 Input data received from MDIO Master during write frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_dinr25 MDIOSDINR25 MDIOS input data register 25
@{*/


#define MDIOS_MDIOS_DINR25_DIN25_SHIFT		0
#define MDIOS_MDIOS_DINR25_DIN25_MASK		0xffff
/** @defgroup mdios_mdios_dinr25_din25 DIN25 Input data received from MDIO Master during write frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_dinr26 MDIOSDINR26 MDIOS input data register 26
@{*/


#define MDIOS_MDIOS_DINR26_DIN26_SHIFT		0
#define MDIOS_MDIOS_DINR26_DIN26_MASK		0xffff
/** @defgroup mdios_mdios_dinr26_din26 DIN26 Input data received from MDIO Master during write frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_dinr27 MDIOSDINR27 MDIOS input data register 27
@{*/


#define MDIOS_MDIOS_DINR27_DIN27_SHIFT		0
#define MDIOS_MDIOS_DINR27_DIN27_MASK		0xffff
/** @defgroup mdios_mdios_dinr27_din27 DIN27 Input data received from MDIO Master during write frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_dinr28 MDIOSDINR28 MDIOS input data register 28
@{*/


#define MDIOS_MDIOS_DINR28_DIN28_SHIFT		0
#define MDIOS_MDIOS_DINR28_DIN28_MASK		0xffff
/** @defgroup mdios_mdios_dinr28_din28 DIN28 Input data received from MDIO Master during write frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_dinr29 MDIOSDINR29 MDIOS input data register 29
@{*/


#define MDIOS_MDIOS_DINR29_DIN29_SHIFT		0
#define MDIOS_MDIOS_DINR29_DIN29_MASK		0xffff
/** @defgroup mdios_mdios_dinr29_din29 DIN29 Input data received from MDIO Master during write frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_dinr30 MDIOSDINR30 MDIOS input data register 30
@{*/


#define MDIOS_MDIOS_DINR30_DIN30_SHIFT		0
#define MDIOS_MDIOS_DINR30_DIN30_MASK		0xffff
/** @defgroup mdios_mdios_dinr30_din30 DIN30 Input data received from MDIO Master during write frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_dinr31 MDIOSDINR31 MDIOS input data register 31
@{*/


#define MDIOS_MDIOS_DINR31_DIN31_SHIFT		0
#define MDIOS_MDIOS_DINR31_DIN31_MASK		0xffff
/** @defgroup mdios_mdios_dinr31_din31 DIN31 Input data received from MDIO Master during write frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_doutr0 MDIOSDOUTR0 MDIOS output data register 0
@{*/


#define MDIOS_MDIOS_DOUTR0_DOUT0_SHIFT		0
#define MDIOS_MDIOS_DOUTR0_DOUT0_MASK		0xffff
/** @defgroup mdios_mdios_doutr0_dout0 DOUT0 Output data sent to MDIO Master during read frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_doutr1 MDIOSDOUTR1 MDIOS output data register 1
@{*/


#define MDIOS_MDIOS_DOUTR1_DOUT1_SHIFT		0
#define MDIOS_MDIOS_DOUTR1_DOUT1_MASK		0xffff
/** @defgroup mdios_mdios_doutr1_dout1 DOUT1 Output data sent to MDIO Master during read frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_doutr2 MDIOSDOUTR2 MDIOS output data register 2
@{*/


#define MDIOS_MDIOS_DOUTR2_DOUT2_SHIFT		0
#define MDIOS_MDIOS_DOUTR2_DOUT2_MASK		0xffff
/** @defgroup mdios_mdios_doutr2_dout2 DOUT2 Output data sent to MDIO Master during read frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_doutr3 MDIOSDOUTR3 MDIOS output data register 3
@{*/


#define MDIOS_MDIOS_DOUTR3_DOUT3_SHIFT		0
#define MDIOS_MDIOS_DOUTR3_DOUT3_MASK		0xffff
/** @defgroup mdios_mdios_doutr3_dout3 DOUT3 Output data sent to MDIO Master during read frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_doutr4 MDIOSDOUTR4 MDIOS output data register 4
@{*/


#define MDIOS_MDIOS_DOUTR4_DOUT4_SHIFT		0
#define MDIOS_MDIOS_DOUTR4_DOUT4_MASK		0xffff
/** @defgroup mdios_mdios_doutr4_dout4 DOUT4 Output data sent to MDIO Master during read frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_doutr5 MDIOSDOUTR5 MDIOS output data register 5
@{*/


#define MDIOS_MDIOS_DOUTR5_DOUT5_SHIFT		0
#define MDIOS_MDIOS_DOUTR5_DOUT5_MASK		0xffff
/** @defgroup mdios_mdios_doutr5_dout5 DOUT5 Output data sent to MDIO Master during read frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_doutr6 MDIOSDOUTR6 MDIOS output data register 6
@{*/


#define MDIOS_MDIOS_DOUTR6_DOUT6_SHIFT		0
#define MDIOS_MDIOS_DOUTR6_DOUT6_MASK		0xffff
/** @defgroup mdios_mdios_doutr6_dout6 DOUT6 Output data sent to MDIO Master during read frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_doutr7 MDIOSDOUTR7 MDIOS output data register 7
@{*/


#define MDIOS_MDIOS_DOUTR7_DOUT7_SHIFT		0
#define MDIOS_MDIOS_DOUTR7_DOUT7_MASK		0xffff
/** @defgroup mdios_mdios_doutr7_dout7 DOUT7 Output data sent to MDIO Master during read frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_doutr8 MDIOSDOUTR8 MDIOS output data register 8
@{*/


#define MDIOS_MDIOS_DOUTR8_DOUT8_SHIFT		0
#define MDIOS_MDIOS_DOUTR8_DOUT8_MASK		0xffff
/** @defgroup mdios_mdios_doutr8_dout8 DOUT8 Output data sent to MDIO Master during read frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_doutr9 MDIOSDOUTR9 MDIOS output data register 9
@{*/


#define MDIOS_MDIOS_DOUTR9_DOUT9_SHIFT		0
#define MDIOS_MDIOS_DOUTR9_DOUT9_MASK		0xffff
/** @defgroup mdios_mdios_doutr9_dout9 DOUT9 Output data sent to MDIO Master during read frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_doutr10 MDIOSDOUTR10 MDIOS output data register 10
@{*/


#define MDIOS_MDIOS_DOUTR10_DOUT10_SHIFT		0
#define MDIOS_MDIOS_DOUTR10_DOUT10_MASK		0xffff
/** @defgroup mdios_mdios_doutr10_dout10 DOUT10 Output data sent to MDIO Master during read frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_doutr11 MDIOSDOUTR11 MDIOS output data register 11
@{*/


#define MDIOS_MDIOS_DOUTR11_DOUT11_SHIFT		0
#define MDIOS_MDIOS_DOUTR11_DOUT11_MASK		0xffff
/** @defgroup mdios_mdios_doutr11_dout11 DOUT11 Output data sent to MDIO Master during read frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_doutr12 MDIOSDOUTR12 MDIOS output data register 12
@{*/


#define MDIOS_MDIOS_DOUTR12_DOUT12_SHIFT		0
#define MDIOS_MDIOS_DOUTR12_DOUT12_MASK		0xffff
/** @defgroup mdios_mdios_doutr12_dout12 DOUT12 Output data sent to MDIO Master during read frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_doutr13 MDIOSDOUTR13 MDIOS output data register 13
@{*/


#define MDIOS_MDIOS_DOUTR13_DOUT13_SHIFT		0
#define MDIOS_MDIOS_DOUTR13_DOUT13_MASK		0xffff
/** @defgroup mdios_mdios_doutr13_dout13 DOUT13 Output data sent to MDIO Master during read frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_doutr14 MDIOSDOUTR14 MDIOS output data register 14
@{*/


#define MDIOS_MDIOS_DOUTR14_DOUT14_SHIFT		0
#define MDIOS_MDIOS_DOUTR14_DOUT14_MASK		0xffff
/** @defgroup mdios_mdios_doutr14_dout14 DOUT14 Output data sent to MDIO Master during read frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_doutr15 MDIOSDOUTR15 MDIOS output data register 15
@{*/


#define MDIOS_MDIOS_DOUTR15_DOUT15_SHIFT		0
#define MDIOS_MDIOS_DOUTR15_DOUT15_MASK		0xffff
/** @defgroup mdios_mdios_doutr15_dout15 DOUT15 Output data sent to MDIO Master during read frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_doutr16 MDIOSDOUTR16 MDIOS output data register 16
@{*/


#define MDIOS_MDIOS_DOUTR16_DOUT16_SHIFT		0
#define MDIOS_MDIOS_DOUTR16_DOUT16_MASK		0xffff
/** @defgroup mdios_mdios_doutr16_dout16 DOUT16 Output data sent to MDIO Master during read frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_doutr17 MDIOSDOUTR17 MDIOS output data register 17
@{*/


#define MDIOS_MDIOS_DOUTR17_DOUT17_SHIFT		0
#define MDIOS_MDIOS_DOUTR17_DOUT17_MASK		0xffff
/** @defgroup mdios_mdios_doutr17_dout17 DOUT17 Output data sent to MDIO Master during read frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_doutr18 MDIOSDOUTR18 MDIOS output data register 18
@{*/


#define MDIOS_MDIOS_DOUTR18_DOUT18_SHIFT		0
#define MDIOS_MDIOS_DOUTR18_DOUT18_MASK		0xffff
/** @defgroup mdios_mdios_doutr18_dout18 DOUT18 Output data sent to MDIO Master during read frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_doutr19 MDIOSDOUTR19 MDIOS output data register 19
@{*/


#define MDIOS_MDIOS_DOUTR19_DOUT19_SHIFT		0
#define MDIOS_MDIOS_DOUTR19_DOUT19_MASK		0xffff
/** @defgroup mdios_mdios_doutr19_dout19 DOUT19 Output data sent to MDIO Master during read frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_doutr20 MDIOSDOUTR20 MDIOS output data register 20
@{*/


#define MDIOS_MDIOS_DOUTR20_DOUT20_SHIFT		0
#define MDIOS_MDIOS_DOUTR20_DOUT20_MASK		0xffff
/** @defgroup mdios_mdios_doutr20_dout20 DOUT20 Output data sent to MDIO Master during read frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_doutr21 MDIOSDOUTR21 MDIOS output data register 21
@{*/


#define MDIOS_MDIOS_DOUTR21_DOUT21_SHIFT		0
#define MDIOS_MDIOS_DOUTR21_DOUT21_MASK		0xffff
/** @defgroup mdios_mdios_doutr21_dout21 DOUT21 Output data sent to MDIO Master during read frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_doutr22 MDIOSDOUTR22 MDIOS output data register 22
@{*/


#define MDIOS_MDIOS_DOUTR22_DOUT22_SHIFT		0
#define MDIOS_MDIOS_DOUTR22_DOUT22_MASK		0xffff
/** @defgroup mdios_mdios_doutr22_dout22 DOUT22 Output data sent to MDIO Master during read frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_doutr23 MDIOSDOUTR23 MDIOS output data register 23
@{*/


#define MDIOS_MDIOS_DOUTR23_DOUT23_SHIFT		0
#define MDIOS_MDIOS_DOUTR23_DOUT23_MASK		0xffff
/** @defgroup mdios_mdios_doutr23_dout23 DOUT23 Output data sent to MDIO Master during read frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_doutr24 MDIOSDOUTR24 MDIOS output data register 24
@{*/


#define MDIOS_MDIOS_DOUTR24_DOUT24_SHIFT		0
#define MDIOS_MDIOS_DOUTR24_DOUT24_MASK		0xffff
/** @defgroup mdios_mdios_doutr24_dout24 DOUT24 Output data sent to MDIO Master during read frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_doutr25 MDIOSDOUTR25 MDIOS output data register 25
@{*/


#define MDIOS_MDIOS_DOUTR25_DOUT25_SHIFT		0
#define MDIOS_MDIOS_DOUTR25_DOUT25_MASK		0xffff
/** @defgroup mdios_mdios_doutr25_dout25 DOUT25 Output data sent to MDIO Master during read frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_doutr26 MDIOSDOUTR26 MDIOS output data register 26
@{*/


#define MDIOS_MDIOS_DOUTR26_DOUT26_SHIFT		0
#define MDIOS_MDIOS_DOUTR26_DOUT26_MASK		0xffff
/** @defgroup mdios_mdios_doutr26_dout26 DOUT26 Output data sent to MDIO Master during read frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_doutr27 MDIOSDOUTR27 MDIOS output data register 27
@{*/


#define MDIOS_MDIOS_DOUTR27_DOUT27_SHIFT		0
#define MDIOS_MDIOS_DOUTR27_DOUT27_MASK		0xffff
/** @defgroup mdios_mdios_doutr27_dout27 DOUT27 Output data sent to MDIO Master during read frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_doutr28 MDIOSDOUTR28 MDIOS output data register 28
@{*/


#define MDIOS_MDIOS_DOUTR28_DOUT28_SHIFT		0
#define MDIOS_MDIOS_DOUTR28_DOUT28_MASK		0xffff
/** @defgroup mdios_mdios_doutr28_dout28 DOUT28 Output data sent to MDIO Master during read frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_doutr29 MDIOSDOUTR29 MDIOS output data register 29
@{*/


#define MDIOS_MDIOS_DOUTR29_DOUT29_SHIFT		0
#define MDIOS_MDIOS_DOUTR29_DOUT29_MASK		0xffff
/** @defgroup mdios_mdios_doutr29_dout29 DOUT29 Output data sent to MDIO Master during read frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_doutr30 MDIOSDOUTR30 MDIOS output data register 30
@{*/


#define MDIOS_MDIOS_DOUTR30_DOUT30_SHIFT		0
#define MDIOS_MDIOS_DOUTR30_DOUT30_MASK		0xffff
/** @defgroup mdios_mdios_doutr30_dout30 DOUT30 Output data sent to MDIO Master during read frames
@{*/
/**@}*/


/**@}*/

/** @defgroup mdios_mdios_doutr31 MDIOSDOUTR31 MDIOS output data register 31
@{*/


#define MDIOS_MDIOS_DOUTR31_DOUT31_SHIFT		0
#define MDIOS_MDIOS_DOUTR31_DOUT31_MASK		0xffff
/** @defgroup mdios_mdios_doutr31_dout31 DOUT31 Output data sent to MDIO Master during read frames
@{*/
/**@}*/


/**@}*/
