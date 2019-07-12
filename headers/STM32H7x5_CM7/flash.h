#pragma once 

/* --- Flash: Flash ------------------------------------------------- */

/** @defgroup flash_registers Flash Register
@{*/

/** Flash_ACR Access control register **/
#define Flash_ACR			MMIO32(Flash_BASE + 0x00)
/** Flash_KEYR1 FLASH key register for bank 1 **/
#define Flash_KEYR1			MMIO32(Flash_BASE + 0x04)
/** Flash_OPTKEYR FLASH option key register **/
#define Flash_OPTKEYR			MMIO32(Flash_BASE + 0x08)
/** Flash_CR1 FLASH control register for bank 1 **/
#define Flash_CR1			MMIO32(Flash_BASE + 0x0c)
/** Flash_SR1 FLASH status register for bank 1 **/
#define Flash_SR1			MMIO32(Flash_BASE + 0x10)
/** Flash_CCR1 FLASH clear control register for bank 1 **/
#define Flash_CCR1			MMIO32(Flash_BASE + 0x14)
/** Flash_OPTCR FLASH option control register **/
#define Flash_OPTCR			MMIO32(Flash_BASE + 0x18)
/** Flash_OPTSR_CUR FLASH option status register **/
#define Flash_OPTSR_CUR			MMIO32(Flash_BASE + 0x1c)
/** Flash_OPTSR_PRG FLASH option status register **/
#define Flash_OPTSR_PRG			MMIO32(Flash_BASE + 0x20)
/** Flash_OPTCCR FLASH option clear control register **/
#define Flash_OPTCCR			MMIO32(Flash_BASE + 0x24)
/** Flash_PRAR_CUR1 FLASH protection address for bank 1 **/
#define Flash_PRAR_CUR1			MMIO32(Flash_BASE + 0x28)
/** Flash_PRAR_PRG1 FLASH protection address for bank 1 **/
#define Flash_PRAR_PRG1			MMIO32(Flash_BASE + 0x2c)
/** Flash_PRAR_PRG2 FLASH protection address for bank 2 **/
#define Flash_PRAR_PRG2			MMIO32(Flash_BASE + 0x2c)
/** Flash_SCAR_CUR1 FLASH secure address for bank 1 **/
#define Flash_SCAR_CUR1			MMIO32(Flash_BASE + 0x30)
/** Flash_SCAR_PRG1 FLASH secure address for bank 1 **/
#define Flash_SCAR_PRG1			MMIO32(Flash_BASE + 0x34)
/** Flash_WPSN_CUR1R FLASH write sector protection for bank 1 **/
#define Flash_WPSN_CUR1R			MMIO32(Flash_BASE + 0x38)
/** Flash_WPSN_PRG1R FLASH write sector protection for bank 1 **/
#define Flash_WPSN_PRG1R			MMIO32(Flash_BASE + 0x3c)
/** Flash_BOOT_CURR FLASH register with boot address **/
#define Flash_BOOT_CURR			MMIO32(Flash_BASE + 0x40)
/** Flash_BOOT_PRGR FLASH register with boot address **/
#define Flash_BOOT_PRGR			MMIO32(Flash_BASE + 0x44)
/** Flash_CRCCR1 FLASH CRC control register for bank 1 **/
#define Flash_CRCCR1			MMIO32(Flash_BASE + 0x50)
/** Flash_CRCSADD1R FLASH CRC start address register for bank 1 **/
#define Flash_CRCSADD1R			MMIO32(Flash_BASE + 0x54)
/** Flash_CRCEADD1R FLASH CRC end address register for bank 1 **/
#define Flash_CRCEADD1R			MMIO32(Flash_BASE + 0x58)
/** Flash_CRCDATAR FLASH CRC data register **/
#define Flash_CRCDATAR			MMIO32(Flash_BASE + 0x5c)
/** Flash_ECC_FA1R FLASH ECC fail address for bank 1 **/
#define Flash_ECC_FA1R			MMIO32(Flash_BASE + 0x60)
/** Flash_ACR_ Access control register **/
#define Flash_ACR_			MMIO32(Flash_BASE + 0x100)
/** Flash_KEYR2 FLASH key register for bank 2 **/
#define Flash_KEYR2			MMIO32(Flash_BASE + 0x104)
/** Flash_OPTKEYR_ FLASH option key register **/
#define Flash_OPTKEYR_			MMIO32(Flash_BASE + 0x108)
/** Flash_CR2 FLASH control register for bank 2 **/
#define Flash_CR2			MMIO32(Flash_BASE + 0x10c)
/** Flash_SR2 FLASH status register for bank 2 **/
#define Flash_SR2			MMIO32(Flash_BASE + 0x110)
/** Flash_CCR2 FLASH clear control register for bank 2 **/
#define Flash_CCR2			MMIO32(Flash_BASE + 0x114)
/** Flash_OPTCR_ FLASH option control register **/
#define Flash_OPTCR_			MMIO32(Flash_BASE + 0x118)
/** Flash_OPTSR_CUR_ FLASH option status register **/
#define Flash_OPTSR_CUR_			MMIO32(Flash_BASE + 0x11c)
/** Flash_OPTSR_PRG_ FLASH option status register **/
#define Flash_OPTSR_PRG_			MMIO32(Flash_BASE + 0x120)
/** Flash_OPTCCR_ FLASH option clear control register **/
#define Flash_OPTCCR_			MMIO32(Flash_BASE + 0x124)
/** Flash_PRAR_CUR2 FLASH protection address for bank 1 **/
#define Flash_PRAR_CUR2			MMIO32(Flash_BASE + 0x128)
/** Flash_SCAR_CUR2 FLASH secure address for bank 2 **/
#define Flash_SCAR_CUR2			MMIO32(Flash_BASE + 0x130)
/** Flash_SCAR_PRG2 FLASH secure address for bank 2 **/
#define Flash_SCAR_PRG2			MMIO32(Flash_BASE + 0x134)
/** Flash_WPSN_CUR2R FLASH write sector protection for bank 2 **/
#define Flash_WPSN_CUR2R			MMIO32(Flash_BASE + 0x138)
/** Flash_WPSN_PRG2R FLASH write sector protection for bank 2 **/
#define Flash_WPSN_PRG2R			MMIO32(Flash_BASE + 0x13c)
/** Flash_CRCCR2 FLASH CRC control register for bank 1 **/
#define Flash_CRCCR2			MMIO32(Flash_BASE + 0x150)
/** Flash_CRCSADD2R FLASH CRC start address register for bank 2 **/
#define Flash_CRCSADD2R			MMIO32(Flash_BASE + 0x154)
/** Flash_CRCEADD2R FLASH CRC end address register for bank 2 **/
#define Flash_CRCEADD2R			MMIO32(Flash_BASE + 0x158)
/** Flash_ECC_FA2R FLASH ECC fail address for bank 2 **/
#define Flash_ECC_FA2R			MMIO32(Flash_BASE + 0x160)

/**@}*/


/** @defgroup flash_acr ACR Access control register
@{*/


#define Flash_ACR_WRHIGHFREQ_SHIFT		4
#define Flash_ACR_WRHIGHFREQ_MASK		0x03
/** @defgroup flash_acr_wrhighfreq WRHIGHFREQ Flash signal delay
@{*/
/**@}*/


#define Flash_ACR_LATENCY_SHIFT		0
#define Flash_ACR_LATENCY_MASK		0x07
/** @defgroup flash_acr_latency LATENCY Read latency
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_keyr1 KEYR1 FLASH key register for bank 1
@{*/


#define Flash_KEYR1_KEYR1_SHIFT		0
#define Flash_KEYR1_KEYR1_MASK		0xffffffff
/** @defgroup flash_keyr1_keyr1 KEYR1 Bank 1 access configuration unlock key
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_optkeyr OPTKEYR FLASH option key register
@{*/


#define Flash_OPTKEYR_OPTKEYR_SHIFT		0
#define Flash_OPTKEYR_OPTKEYR_MASK		0xffffffff
/** @defgroup flash_optkeyr_optkeyr OPTKEYR Unlock key option bytes
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_cr1 CR1 FLASH control register for bank 1
@{*/

/** Flash_CR1_CRCENDIE1 Bank 1 end of CRC calculation interrupt enable bit **/
#define Flash_CR1_CRCENDIE1		(1 << 27)
/** Flash_CR1_DBECCERRIE1 Bank 1 ECC double detection error interrupt enable bit **/
#define Flash_CR1_DBECCERRIE1		(1 << 26)
/** Flash_CR1_SNECCERRIE1 Bank 1 ECC single correction error interrupt enable bit **/
#define Flash_CR1_SNECCERRIE1		(1 << 25)
/** Flash_CR1_RDSERRIE1 Bank 1 secure error interrupt enable bit **/
#define Flash_CR1_RDSERRIE1		(1 << 24)
/** Flash_CR1_RDPERRIE1 Bank 1 read protection error interrupt enable bit **/
#define Flash_CR1_RDPERRIE1		(1 << 23)
/** Flash_CR1_OPERRIE1 Bank 1 write/erase error interrupt enable bit **/
#define Flash_CR1_OPERRIE1		(1 << 22)
/** Flash_CR1_INCERRIE1 Bank 1 inconsistency error interrupt enable bit **/
#define Flash_CR1_INCERRIE1		(1 << 21)
/** Flash_CR1_STRBERRIE1 Bank 1 strobe error interrupt enable bit **/
#define Flash_CR1_STRBERRIE1		(1 << 19)
/** Flash_CR1_PGSERRIE1 Bank 1 programming sequence error interrupt enable bit **/
#define Flash_CR1_PGSERRIE1		(1 << 18)
/** Flash_CR1_WRPERRIE1 Bank 1 write protection error interrupt enable bit **/
#define Flash_CR1_WRPERRIE1		(1 << 17)
/** Flash_CR1_EOPIE1 Bank 1 end-of-program interrupt control bit **/
#define Flash_CR1_EOPIE1		(1 << 16)
/** Flash_CR1_CRC_EN Bank 1 CRC control bit **/
#define Flash_CR1_CRC_EN		(1 << 15)

#define Flash_CR1_SNB1_SHIFT		8
#define Flash_CR1_SNB1_MASK		0x07
/** @defgroup flash_cr1_snb1 SNB1 Bank 1 sector erase selection number
@{*/
/**@}*/

/** Flash_CR1_START1 Bank 1 bank or sector erase start control bit **/
#define Flash_CR1_START1		(1 << 7)
/** Flash_CR1_FW1 Bank 1 write forcing control bit **/
#define Flash_CR1_FW1		(1 << 6)

#define Flash_CR1_PSIZE1_SHIFT		4
#define Flash_CR1_PSIZE1_MASK		0x03
/** @defgroup flash_cr1_psize1 PSIZE1 Bank 1 program size
@{*/
/**@}*/

/** Flash_CR1_BER1 Bank 1 erase request **/
#define Flash_CR1_BER1		(1 << 3)
/** Flash_CR1_SER1 Bank 1 sector erase request **/
#define Flash_CR1_SER1		(1 << 2)
/** Flash_CR1_PG1 Bank 1 program enable bit **/
#define Flash_CR1_PG1		(1 << 1)
/** Flash_CR1_LOCK1 Bank 1 configuration lock bit **/
#define Flash_CR1_LOCK1		(1 << 0)

/**@}*/

/** @defgroup flash_sr1 SR1 FLASH status register for bank 1
@{*/

/** Flash_SR1_CRCEND1 Bank 1 CRC-complete flag **/
#define Flash_SR1_CRCEND1		(1 << 27)
/** Flash_SR1_DBECCERR1 Bank 1 ECC double detection error flag **/
#define Flash_SR1_DBECCERR1		(1 << 26)
/** Flash_SR1_SNECCERR11 Bank 1 single correction error flag **/
#define Flash_SR1_SNECCERR11		(1 << 25)
/** Flash_SR1_RDSERR1 Bank 1 secure error flag **/
#define Flash_SR1_RDSERR1		(1 << 24)
/** Flash_SR1_RDPERR1 Bank 1 read protection error flag **/
#define Flash_SR1_RDPERR1		(1 << 23)
/** Flash_SR1_OPERR1 Bank 1 write/erase error flag **/
#define Flash_SR1_OPERR1		(1 << 22)
/** Flash_SR1_INCERR1 Bank 1 inconsistency error flag **/
#define Flash_SR1_INCERR1		(1 << 21)
/** Flash_SR1_STRBERR1 Bank 1 strobe error flag **/
#define Flash_SR1_STRBERR1		(1 << 19)
/** Flash_SR1_PGSERR1 Bank 1 programming sequence error flag **/
#define Flash_SR1_PGSERR1		(1 << 18)
/** Flash_SR1_WRPERR1 Bank 1 write protection error flag **/
#define Flash_SR1_WRPERR1		(1 << 17)
/** Flash_SR1_EOP1 Bank 1 end-of-program flag **/
#define Flash_SR1_EOP1		(1 << 16)
/** Flash_SR1_CRC_BUSY1 Bank 1 CRC busy flag **/
#define Flash_SR1_CRC_BUSY1		(1 << 3)
/** Flash_SR1_QW1 Bank 1 wait queue flag **/
#define Flash_SR1_QW1		(1 << 2)
/** Flash_SR1_WBNE1 Bank 1 write buffer not empty flag **/
#define Flash_SR1_WBNE1		(1 << 1)
/** Flash_SR1_BSY1 Bank 1 ongoing program flag **/
#define Flash_SR1_BSY1		(1 << 0)

/**@}*/

/** @defgroup flash_ccr1 CCR1 FLASH clear control register for bank 1
@{*/

/** Flash_CCR1_CLR_CRCEND1 Bank 1 CRCEND1 flag clear bit **/
#define Flash_CCR1_CLR_CRCEND1		(1 << 27)
/** Flash_CCR1_CLR_DBECCERR1 Bank 1 DBECCERR1 flag clear bit **/
#define Flash_CCR1_CLR_DBECCERR1		(1 << 26)
/** Flash_CCR1_CLR_SNECCERR1 Bank 1 SNECCERR1 flag clear bit **/
#define Flash_CCR1_CLR_SNECCERR1		(1 << 25)
/** Flash_CCR1_CLR_RDSERR1 Bank 1 RDSERR1 flag clear bit **/
#define Flash_CCR1_CLR_RDSERR1		(1 << 24)
/** Flash_CCR1_CLR_RDPERR1 Bank 1 RDPERR1 flag clear bit **/
#define Flash_CCR1_CLR_RDPERR1		(1 << 23)
/** Flash_CCR1_CLR_OPERR1 Bank 1 OPERR1 flag clear bit **/
#define Flash_CCR1_CLR_OPERR1		(1 << 22)
/** Flash_CCR1_CLR_INCERR1 Bank 1 INCERR1 flag clear bit **/
#define Flash_CCR1_CLR_INCERR1		(1 << 21)
/** Flash_CCR1_CLR_STRBERR1 Bank 1 STRBERR1 flag clear bit **/
#define Flash_CCR1_CLR_STRBERR1		(1 << 19)
/** Flash_CCR1_CLR_PGSERR1 Bank 1 PGSERR1 flag clear bi **/
#define Flash_CCR1_CLR_PGSERR1		(1 << 18)
/** Flash_CCR1_CLR_WRPERR1 Bank 1 WRPERR1 flag clear bit **/
#define Flash_CCR1_CLR_WRPERR1		(1 << 17)
/** Flash_CCR1_CLR_EOP1 Bank 1 EOP1 flag clear bit **/
#define Flash_CCR1_CLR_EOP1		(1 << 16)

/**@}*/

/** @defgroup flash_optcr OPTCR FLASH option control register
@{*/

/** Flash_OPTCR_SWAP_BANK Bank swapping configuration bit **/
#define Flash_OPTCR_SWAP_BANK		(1 << 31)
/** Flash_OPTCR_OPTCHANGEERRIE Option byte change error interrupt enable bit **/
#define Flash_OPTCR_OPTCHANGEERRIE		(1 << 30)
/** Flash_OPTCR_MER Flash mass erase enable bit **/
#define Flash_OPTCR_MER		(1 << 4)
/** Flash_OPTCR_OPTSTART Option byte start change option configuration bit **/
#define Flash_OPTCR_OPTSTART		(1 << 1)
/** Flash_OPTCR_OPTLOCK FLASH_OPTCR lock option configuration bit **/
#define Flash_OPTCR_OPTLOCK		(1 << 0)

/**@}*/

/** @defgroup flash_optsr_cur OPTSRCUR FLASH option status register
@{*/

/** Flash_OPTSR_CUR_SWAP_BANK_OPT Bank swapping option status bit **/
#define Flash_OPTSR_CUR_SWAP_BANK_OPT		(1 << 31)
/** Flash_OPTSR_CUR_OPTCHANGEERR Option byte change error flag **/
#define Flash_OPTSR_CUR_OPTCHANGEERR		(1 << 30)
/** Flash_OPTSR_CUR_IO_HSLV I/O high-speed at low-voltage status bit (PRODUCT_BELOW_25V) **/
#define Flash_OPTSR_CUR_IO_HSLV		(1 << 29)
/** Flash_OPTSR_CUR_PERSO_OK Device personalization status bit **/
#define Flash_OPTSR_CUR_PERSO_OK		(1 << 28)
/** Flash_OPTSR_CUR_RSS1 User option bit 1 **/
#define Flash_OPTSR_CUR_RSS1		(1 << 26)
/** Flash_OPTSR_CUR_SECURITY Security enable option status bit **/
#define Flash_OPTSR_CUR_SECURITY		(1 << 21)

#define Flash_OPTSR_CUR_ST_RAM_SIZE_SHIFT		19
#define Flash_OPTSR_CUR_ST_RAM_SIZE_MASK		0x03
/** @defgroup flash_optsr_cur_st_ram_size STRAMSIZE DTCM RAM size option status
@{*/
/**@}*/

/** Flash_OPTSR_CUR_FZ_IWDG_SDBY IWDG Standby mode freeze option status bit **/
#define Flash_OPTSR_CUR_FZ_IWDG_SDBY		(1 << 18)
/** Flash_OPTSR_CUR_FZ_IWDG_STOP IWDG Stop mode freeze option status bit **/
#define Flash_OPTSR_CUR_FZ_IWDG_STOP		(1 << 17)

#define Flash_OPTSR_CUR_RDP_SHIFT		8
#define Flash_OPTSR_CUR_RDP_MASK		0xff
/** @defgroup flash_optsr_cur_rdp RDP Readout protection level option status byte
@{*/
/**@}*/

/** Flash_OPTSR_CUR_nRST_STBY_D1 D1 DStandby entry reset option status bit **/
#define Flash_OPTSR_CUR_nRST_STBY_D1		(1 << 7)
/** Flash_OPTSR_CUR_nRST_STOP_D1 D1 DStop entry reset option status bit **/
#define Flash_OPTSR_CUR_nRST_STOP_D1		(1 << 6)
/** Flash_OPTSR_CUR_IWDG1_HW IWDG1 control option status bit **/
#define Flash_OPTSR_CUR_IWDG1_HW		(1 << 4)

#define Flash_OPTSR_CUR_BOR_LEV_SHIFT		2
#define Flash_OPTSR_CUR_BOR_LEV_MASK		0x03
/** @defgroup flash_optsr_cur_bor_lev BORLEV Brownout level option status bit
@{*/
/**@}*/

/** Flash_OPTSR_CUR_OPT_BUSY Option byte change ongoing flag **/
#define Flash_OPTSR_CUR_OPT_BUSY		(1 << 0)

/**@}*/

/** @defgroup flash_optsr_prg OPTSRPRG FLASH option status register
@{*/

/** Flash_OPTSR_PRG_SWAP_BANK_OPT Bank swapping option configuration bit **/
#define Flash_OPTSR_PRG_SWAP_BANK_OPT		(1 << 31)
/** Flash_OPTSR_PRG_IO_HSLV I/O high-speed at low-voltage (PRODUCT_BELOW_25V) **/
#define Flash_OPTSR_PRG_IO_HSLV		(1 << 29)
/** Flash_OPTSR_PRG_RSS2 User option configuration bit 2 **/
#define Flash_OPTSR_PRG_RSS2		(1 << 27)
/** Flash_OPTSR_PRG_RSS1 User option configuration bit 1 **/
#define Flash_OPTSR_PRG_RSS1		(1 << 26)
/** Flash_OPTSR_PRG_SECURITY Security option configuration bit **/
#define Flash_OPTSR_PRG_SECURITY		(1 << 21)

#define Flash_OPTSR_PRG_ST_RAM_SIZE_SHIFT		19
#define Flash_OPTSR_PRG_ST_RAM_SIZE_MASK		0x03
/** @defgroup flash_optsr_prg_st_ram_size STRAMSIZE DTCM size select option configuration bits
@{*/
/**@}*/

/** Flash_OPTSR_PRG_FZ_IWDG_SDBY IWDG Standby mode freeze option configuration bit **/
#define Flash_OPTSR_PRG_FZ_IWDG_SDBY		(1 << 18)
/** Flash_OPTSR_PRG_FZ_IWDG_STOP IWDG Stop mode freeze option configuration bit **/
#define Flash_OPTSR_PRG_FZ_IWDG_STOP		(1 << 17)

#define Flash_OPTSR_PRG_RDP_SHIFT		8
#define Flash_OPTSR_PRG_RDP_MASK		0xff
/** @defgroup flash_optsr_prg_rdp RDP Readout protection level option configuration byte
@{*/
/**@}*/

/** Flash_OPTSR_PRG_nRST_STBY_D1 Option byte erase after D1 DStandby option configuration bit **/
#define Flash_OPTSR_PRG_nRST_STBY_D1		(1 << 7)
/** Flash_OPTSR_PRG_nRST_STOP_D1 Option byte erase after D1 DStop option configuration bit **/
#define Flash_OPTSR_PRG_nRST_STOP_D1		(1 << 6)
/** Flash_OPTSR_PRG_IWDG1_HW IWDG1 option configuration bit **/
#define Flash_OPTSR_PRG_IWDG1_HW		(1 << 4)

#define Flash_OPTSR_PRG_BOR_LEV_SHIFT		2
#define Flash_OPTSR_PRG_BOR_LEV_MASK		0x03
/** @defgroup flash_optsr_prg_bor_lev BORLEV BOR reset level option configuration bits
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_optccr OPTCCR FLASH option clear control register
@{*/

/** Flash_OPTCCR_CLR_OPTCHANGEERR OPTCHANGEERR reset bit **/
#define Flash_OPTCCR_CLR_OPTCHANGEERR		(1 << 30)

/**@}*/

/** @defgroup flash_prar_cur1 PRARCUR1 FLASH protection address for bank 1
@{*/

/** Flash_PRAR_CUR1_DMEP1 Bank 1 PCROP protected erase enable option status bit **/
#define Flash_PRAR_CUR1_DMEP1		(1 << 31)

#define Flash_PRAR_CUR1_PROT_AREA_END1_SHIFT		16
#define Flash_PRAR_CUR1_PROT_AREA_END1_MASK		0xfff
/** @defgroup flash_prar_cur1_prot_area_end1 PROTAREAEND1 Bank 1 highest PCROP protected address
@{*/
/**@}*/


#define Flash_PRAR_CUR1_PROT_AREA_START1_SHIFT		0
#define Flash_PRAR_CUR1_PROT_AREA_START1_MASK		0xfff
/** @defgroup flash_prar_cur1_prot_area_start1 PROTAREASTART1 Bank 1 lowest PCROP protected address
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_prar_prg1 PRARPRG1 FLASH protection address for bank 1
@{*/

/** Flash_PRAR_PRG1_DMEP1 Bank 1 PCROP protected erase enable option configuration bit **/
#define Flash_PRAR_PRG1_DMEP1		(1 << 31)

#define Flash_PRAR_PRG1_PROT_AREA_END1_SHIFT		16
#define Flash_PRAR_PRG1_PROT_AREA_END1_MASK		0xfff
/** @defgroup flash_prar_prg1_prot_area_end1 PROTAREAEND1 Bank 1 highest PCROP protected address configuration
@{*/
/**@}*/


#define Flash_PRAR_PRG1_PROT_AREA_START1_SHIFT		0
#define Flash_PRAR_PRG1_PROT_AREA_START1_MASK		0xfff
/** @defgroup flash_prar_prg1_prot_area_start1 PROTAREASTART1 Bank 1 lowest PCROP protected address configuration
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_prar_prg2 PRARPRG2 FLASH protection address for bank 2
@{*/

/** Flash_PRAR_PRG2_DMEP2 Bank 2 PCROP protected erase enable option configuration bit **/
#define Flash_PRAR_PRG2_DMEP2		(1 << 31)

#define Flash_PRAR_PRG2_PROT_AREA_END2_SHIFT		16
#define Flash_PRAR_PRG2_PROT_AREA_END2_MASK		0xfff
/** @defgroup flash_prar_prg2_prot_area_end2 PROTAREAEND2 Bank 2 highest PCROP protected address configuration
@{*/
/**@}*/


#define Flash_PRAR_PRG2_PROT_AREA_START2_SHIFT		0
#define Flash_PRAR_PRG2_PROT_AREA_START2_MASK		0xfff
/** @defgroup flash_prar_prg2_prot_area_start2 PROTAREASTART2 Bank 2 lowest PCROP protected address configuration
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_scar_cur1 SCARCUR1 FLASH secure address for bank 1
@{*/

/** Flash_SCAR_CUR1_DMES1 Bank 1 secure protected erase enable option status bit **/
#define Flash_SCAR_CUR1_DMES1		(1 << 31)

#define Flash_SCAR_CUR1_SEC_AREA_END1_SHIFT		16
#define Flash_SCAR_CUR1_SEC_AREA_END1_MASK		0xfff
/** @defgroup flash_scar_cur1_sec_area_end1 SECAREAEND1 Bank 1 highest secure protected address
@{*/
/**@}*/


#define Flash_SCAR_CUR1_SEC_AREA_START1_SHIFT		0
#define Flash_SCAR_CUR1_SEC_AREA_START1_MASK		0xfff
/** @defgroup flash_scar_cur1_sec_area_start1 SECAREASTART1 Bank 1 lowest secure protected address
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_scar_prg1 SCARPRG1 FLASH secure address for bank 1
@{*/

/** Flash_SCAR_PRG1_DMES1 Bank 1 secure protected erase enable option configuration bit **/
#define Flash_SCAR_PRG1_DMES1		(1 << 31)

#define Flash_SCAR_PRG1_SEC_AREA_END1_SHIFT		16
#define Flash_SCAR_PRG1_SEC_AREA_END1_MASK		0xfff
/** @defgroup flash_scar_prg1_sec_area_end1 SECAREAEND1 Bank 1 highest secure protected address configuration
@{*/
/**@}*/


#define Flash_SCAR_PRG1_SEC_AREA_START1_SHIFT		0
#define Flash_SCAR_PRG1_SEC_AREA_START1_MASK		0xfff
/** @defgroup flash_scar_prg1_sec_area_start1 SECAREASTART1 Bank 1 lowest secure protected address configuration
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_wpsn_cur1r WPSNCUR1R FLASH write sector protection for bank 1
@{*/


#define Flash_WPSN_CUR1R_WRPSn1_SHIFT		0
#define Flash_WPSN_CUR1R_WRPSn1_MASK		0xff
/** @defgroup flash_wpsn_cur1r_wrpsn1 WRPSn1 Bank 1 sector write protection option status byte
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_wpsn_prg1r WPSNPRG1R FLASH write sector protection for bank 1
@{*/


#define Flash_WPSN_PRG1R_WRPSn1_SHIFT		0
#define Flash_WPSN_PRG1R_WRPSn1_MASK		0xff
/** @defgroup flash_wpsn_prg1r_wrpsn1 WRPSn1 Bank 1 sector write protection configuration byte
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_boot_curr BOOTCURR FLASH register with boot address
@{*/


#define Flash_BOOT_CURR_BOOT_ADD1_SHIFT		16
#define Flash_BOOT_CURR_BOOT_ADD1_MASK		0xffff
/** @defgroup flash_boot_curr_boot_add1 BOOTADD1 Boot address 1
@{*/
/**@}*/


#define Flash_BOOT_CURR_BOOT_ADD0_SHIFT		0
#define Flash_BOOT_CURR_BOOT_ADD0_MASK		0xffff
/** @defgroup flash_boot_curr_boot_add0 BOOTADD0 Boot address 0
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_boot_prgr BOOTPRGR FLASH register with boot address
@{*/


#define Flash_BOOT_PRGR_BOOT_ADD1_SHIFT		16
#define Flash_BOOT_PRGR_BOOT_ADD1_MASK		0xffff
/** @defgroup flash_boot_prgr_boot_add1 BOOTADD1 Boot address 1
@{*/
/**@}*/


#define Flash_BOOT_PRGR_BOOT_ADD0_SHIFT		0
#define Flash_BOOT_PRGR_BOOT_ADD0_MASK		0xffff
/** @defgroup flash_boot_prgr_boot_add0 BOOTADD0 Boot address 0
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_crccr1 CRCCR1 FLASH CRC control register for bank 1
@{*/


#define Flash_CRCCR1_CRC_BURST_SHIFT		20
#define Flash_CRCCR1_CRC_BURST_MASK		0x03
/** @defgroup flash_crccr1_crc_burst CRCBURST Bank 1 CRC burst size
@{*/
/**@}*/

/** Flash_CRCCR1_CLEAN_CRC Bank 1 CRC clear bit **/
#define Flash_CRCCR1_CLEAN_CRC		(1 << 17)
/** Flash_CRCCR1_START_CRC Bank 1 CRC start bit **/
#define Flash_CRCCR1_START_CRC		(1 << 16)
/** Flash_CRCCR1_CLEAN_SECT Bank 1 CRC sector list clear bit **/
#define Flash_CRCCR1_CLEAN_SECT		(1 << 10)
/** Flash_CRCCR1_ADD_SECT Bank 1 CRC sector select bit **/
#define Flash_CRCCR1_ADD_SECT		(1 << 9)
/** Flash_CRCCR1_CRC_BY_SECT Bank 1 CRC sector mode select bit **/
#define Flash_CRCCR1_CRC_BY_SECT		(1 << 8)
/** Flash_CRCCR1_ALL_BANK Bank 1 CRC select bit **/
#define Flash_CRCCR1_ALL_BANK		(1 << 7)

#define Flash_CRCCR1_CRC_SECT_SHIFT		0
#define Flash_CRCCR1_CRC_SECT_MASK		0x07
/** @defgroup flash_crccr1_crc_sect CRCSECT Bank 1 CRC sector number
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_crcsadd1r CRCSADD1R FLASH CRC start address register for bank 1
@{*/


#define Flash_CRCSADD1R_CRC_START_ADDR_SHIFT		0
#define Flash_CRCSADD1R_CRC_START_ADDR_MASK		0xffffffff
/** @defgroup flash_crcsadd1r_crc_start_addr CRCSTARTADDR CRC start address on bank 1
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_crceadd1r CRCEADD1R FLASH CRC end address register for bank 1
@{*/


#define Flash_CRCEADD1R_CRC_END_ADDR_SHIFT		0
#define Flash_CRCEADD1R_CRC_END_ADDR_MASK		0xffffffff
/** @defgroup flash_crceadd1r_crc_end_addr CRCENDADDR CRC end address on bank 1
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_crcdatar CRCDATAR FLASH CRC data register
@{*/


#define Flash_CRCDATAR_CRC_DATA_SHIFT		0
#define Flash_CRCDATAR_CRC_DATA_MASK		0xffffffff
/** @defgroup flash_crcdatar_crc_data CRCDATA CRC result
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_ecc_fa1r ECCFA1R FLASH ECC fail address for bank 1
@{*/


#define Flash_ECC_FA1R_FAIL_ECC_ADDR1_SHIFT		0
#define Flash_ECC_FA1R_FAIL_ECC_ADDR1_MASK		0x7fff
/** @defgroup flash_ecc_fa1r_fail_ecc_addr1 FAILECCADDR1 Bank 1 ECC error address
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_acr_ ACR Access control register
@{*/


#define Flash_ACR__WRHIGHFREQ_SHIFT		4
#define Flash_ACR__WRHIGHFREQ_MASK		0x03
/** @defgroup flash_acr__wrhighfreq WRHIGHFREQ Flash signal delay
@{*/
/**@}*/


#define Flash_ACR__LATENCY_SHIFT		0
#define Flash_ACR__LATENCY_MASK		0x07
/** @defgroup flash_acr__latency LATENCY Read latency
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_keyr2 KEYR2 FLASH key register for bank 2
@{*/


#define Flash_KEYR2_KEYR2_SHIFT		0
#define Flash_KEYR2_KEYR2_MASK		0xffffffff
/** @defgroup flash_keyr2_keyr2 KEYR2 Bank 2 access configuration unlock key
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_optkeyr_ OPTKEYR FLASH option key register
@{*/


#define Flash_OPTKEYR__OPTKEYR_SHIFT		0
#define Flash_OPTKEYR__OPTKEYR_MASK		0xffffffff
/** @defgroup flash_optkeyr__optkeyr OPTKEYR Unlock key option bytes
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_cr2 CR2 FLASH control register for bank 2
@{*/

/** Flash_CR2_CRCENDIE2 Bank 2 end of CRC calculation interrupt enable bit **/
#define Flash_CR2_CRCENDIE2		(1 << 27)
/** Flash_CR2_DBECCERRIE2 Bank 2 ECC double detection error interrupt enable bit **/
#define Flash_CR2_DBECCERRIE2		(1 << 26)
/** Flash_CR2_SNECCERRIE2 Bank 2 ECC single correction error interrupt enable bit **/
#define Flash_CR2_SNECCERRIE2		(1 << 25)
/** Flash_CR2_RDSERRIE2 Bank 2 secure error interrupt enable bit **/
#define Flash_CR2_RDSERRIE2		(1 << 24)
/** Flash_CR2_RDPERRIE2 Bank 2 read protection error interrupt enable bit **/
#define Flash_CR2_RDPERRIE2		(1 << 23)
/** Flash_CR2_OPERRIE2 Bank 2 write/erase error interrupt enable bit **/
#define Flash_CR2_OPERRIE2		(1 << 22)
/** Flash_CR2_INCERRIE2 Bank 2 inconsistency error interrupt enable bit **/
#define Flash_CR2_INCERRIE2		(1 << 21)
/** Flash_CR2_STRBERRIE2 Bank 2 strobe error interrupt enable bit **/
#define Flash_CR2_STRBERRIE2		(1 << 19)
/** Flash_CR2_PGSERRIE2 Bank 2 programming sequence error interrupt enable bit **/
#define Flash_CR2_PGSERRIE2		(1 << 18)
/** Flash_CR2_WRPERRIE2 Bank 2 write protection error interrupt enable bit **/
#define Flash_CR2_WRPERRIE2		(1 << 17)
/** Flash_CR2_EOPIE2 Bank 2 end-of-program interrupt control bit **/
#define Flash_CR2_EOPIE2		(1 << 16)
/** Flash_CR2_CRC_EN Bank 2 CRC control bit **/
#define Flash_CR2_CRC_EN		(1 << 15)

#define Flash_CR2_SNB2_SHIFT		8
#define Flash_CR2_SNB2_MASK		0x07
/** @defgroup flash_cr2_snb2 SNB2 Bank 2 sector erase selection number
@{*/
/**@}*/

/** Flash_CR2_START2 Bank 2 bank or sector erase start control bit **/
#define Flash_CR2_START2		(1 << 7)
/** Flash_CR2_FW2 Bank 2 write forcing control bit **/
#define Flash_CR2_FW2		(1 << 6)

#define Flash_CR2_PSIZE2_SHIFT		4
#define Flash_CR2_PSIZE2_MASK		0x03
/** @defgroup flash_cr2_psize2 PSIZE2 Bank 2 program size
@{*/
/**@}*/

/** Flash_CR2_BER2 Bank 2 erase request **/
#define Flash_CR2_BER2		(1 << 3)
/** Flash_CR2_SER2 Bank 2 sector erase request **/
#define Flash_CR2_SER2		(1 << 2)
/** Flash_CR2_PG2 Bank 2 program enable bit **/
#define Flash_CR2_PG2		(1 << 1)
/** Flash_CR2_LOCK2 Bank 2 configuration lock bit **/
#define Flash_CR2_LOCK2		(1 << 0)

/**@}*/

/** @defgroup flash_sr2 SR2 FLASH status register for bank 2
@{*/

/** Flash_SR2_CRCEND2 Bank 2 CRC-complete flag **/
#define Flash_SR2_CRCEND2		(1 << 27)
/** Flash_SR2_DBECCERR2 Bank 2 ECC double detection error flag **/
#define Flash_SR2_DBECCERR2		(1 << 26)
/** Flash_SR2_SNECCERR2 Bank 2 single correction error flag **/
#define Flash_SR2_SNECCERR2		(1 << 25)
/** Flash_SR2_RDSERR2 Bank 2 secure error flag **/
#define Flash_SR2_RDSERR2		(1 << 24)
/** Flash_SR2_RDPERR2 Bank 2 read protection error flag **/
#define Flash_SR2_RDPERR2		(1 << 23)
/** Flash_SR2_OPERR2 Bank 2 write/erase error flag **/
#define Flash_SR2_OPERR2		(1 << 22)
/** Flash_SR2_INCERR2 Bank 2 inconsistency error flag **/
#define Flash_SR2_INCERR2		(1 << 21)
/** Flash_SR2_STRBERR2 Bank 2 strobe error flag **/
#define Flash_SR2_STRBERR2		(1 << 19)
/** Flash_SR2_PGSERR2 Bank 2 programming sequence error flag **/
#define Flash_SR2_PGSERR2		(1 << 18)
/** Flash_SR2_WRPERR2 Bank 2 write protection error flag **/
#define Flash_SR2_WRPERR2		(1 << 17)
/** Flash_SR2_EOP2 Bank 2 end-of-program flag **/
#define Flash_SR2_EOP2		(1 << 16)
/** Flash_SR2_CRC_BUSY2 Bank 2 CRC busy flag **/
#define Flash_SR2_CRC_BUSY2		(1 << 3)
/** Flash_SR2_QW2 Bank 2 wait queue flag **/
#define Flash_SR2_QW2		(1 << 2)
/** Flash_SR2_WBNE2 Bank 2 write buffer not empty flag **/
#define Flash_SR2_WBNE2		(1 << 1)
/** Flash_SR2_BSY2 Bank 2 ongoing program flag **/
#define Flash_SR2_BSY2		(1 << 0)

/**@}*/

/** @defgroup flash_ccr2 CCR2 FLASH clear control register for bank 2
@{*/

/** Flash_CCR2_CLR_CRCEND2 Bank 2 CRCEND1 flag clear bit **/
#define Flash_CCR2_CLR_CRCEND2		(1 << 27)
/** Flash_CCR2_CLR_DBECCERR1 Bank 1 DBECCERR1 flag clear bit **/
#define Flash_CCR2_CLR_DBECCERR1		(1 << 26)
/** Flash_CCR2_CLR_SNECCERR2 Bank 2 SNECCERR1 flag clear bit **/
#define Flash_CCR2_CLR_SNECCERR2		(1 << 25)
/** Flash_CCR2_CLR_RDSERR1 Bank 1 RDSERR1 flag clear bit **/
#define Flash_CCR2_CLR_RDSERR1		(1 << 24)
/** Flash_CCR2_CLR_RDPERR2 Bank 2 RDPERR1 flag clear bit **/
#define Flash_CCR2_CLR_RDPERR2		(1 << 23)
/** Flash_CCR2_CLR_OPERR2 Bank 2 OPERR1 flag clear bit **/
#define Flash_CCR2_CLR_OPERR2		(1 << 22)
/** Flash_CCR2_CLR_INCERR2 Bank 2 INCERR1 flag clear bit **/
#define Flash_CCR2_CLR_INCERR2		(1 << 21)
/** Flash_CCR2_CLR_STRBERR2 Bank 2 STRBERR1 flag clear bit **/
#define Flash_CCR2_CLR_STRBERR2		(1 << 19)
/** Flash_CCR2_CLR_PGSERR2 Bank 2 PGSERR1 flag clear bi **/
#define Flash_CCR2_CLR_PGSERR2		(1 << 18)
/** Flash_CCR2_CLR_WRPERR2 Bank 2 WRPERR1 flag clear bit **/
#define Flash_CCR2_CLR_WRPERR2		(1 << 17)
/** Flash_CCR2_CLR_EOP2 Bank 1 EOP1 flag clear bit **/
#define Flash_CCR2_CLR_EOP2		(1 << 16)

/**@}*/

/** @defgroup flash_optcr_ OPTCR FLASH option control register
@{*/

/** Flash_OPTCR__SWAP_BANK Bank swapping configuration bit **/
#define Flash_OPTCR__SWAP_BANK		(1 << 31)
/** Flash_OPTCR__OPTCHANGEERRIE Option byte change error interrupt enable bit **/
#define Flash_OPTCR__OPTCHANGEERRIE		(1 << 30)
/** Flash_OPTCR__MER Flash mass erase enable bit **/
#define Flash_OPTCR__MER		(1 << 4)
/** Flash_OPTCR__OPTSTART Option byte start change option configuration bit **/
#define Flash_OPTCR__OPTSTART		(1 << 1)
/** Flash_OPTCR__OPTLOCK FLASH_OPTCR lock option configuration bit **/
#define Flash_OPTCR__OPTLOCK		(1 << 0)

/**@}*/

/** @defgroup flash_optsr_cur_ OPTSRCUR FLASH option status register
@{*/

/** Flash_OPTSR_CUR__SWAP_BANK_OPT Bank swapping option status bit **/
#define Flash_OPTSR_CUR__SWAP_BANK_OPT		(1 << 31)
/** Flash_OPTSR_CUR__OPTCHANGEERR Option byte change error flag **/
#define Flash_OPTSR_CUR__OPTCHANGEERR		(1 << 30)
/** Flash_OPTSR_CUR__IO_HSLV I/O high-speed at low-voltage status bit (PRODUCT_BELOW_25V) **/
#define Flash_OPTSR_CUR__IO_HSLV		(1 << 29)
/** Flash_OPTSR_CUR__PERSO_OK Device personalization status bit **/
#define Flash_OPTSR_CUR__PERSO_OK		(1 << 28)
/** Flash_OPTSR_CUR__RSS1 User option bit 1 **/
#define Flash_OPTSR_CUR__RSS1		(1 << 26)
/** Flash_OPTSR_CUR__SECURITY Security enable option status bit **/
#define Flash_OPTSR_CUR__SECURITY		(1 << 21)

#define Flash_OPTSR_CUR__ST_RAM_SIZE_SHIFT		19
#define Flash_OPTSR_CUR__ST_RAM_SIZE_MASK		0x03
/** @defgroup flash_optsr_cur__st_ram_size STRAMSIZE DTCM RAM size option status
@{*/
/**@}*/

/** Flash_OPTSR_CUR__FZ_IWDG_SDBY IWDG Standby mode freeze option status bit **/
#define Flash_OPTSR_CUR__FZ_IWDG_SDBY		(1 << 18)
/** Flash_OPTSR_CUR__FZ_IWDG_STOP IWDG Stop mode freeze option status bit **/
#define Flash_OPTSR_CUR__FZ_IWDG_STOP		(1 << 17)

#define Flash_OPTSR_CUR__RDP_SHIFT		8
#define Flash_OPTSR_CUR__RDP_MASK		0xff
/** @defgroup flash_optsr_cur__rdp RDP Readout protection level option status byte
@{*/
/**@}*/

/** Flash_OPTSR_CUR__nRST_STBY_D1 D1 DStandby entry reset option status bit **/
#define Flash_OPTSR_CUR__nRST_STBY_D1		(1 << 7)
/** Flash_OPTSR_CUR__nRST_STOP_D1 D1 DStop entry reset option status bit **/
#define Flash_OPTSR_CUR__nRST_STOP_D1		(1 << 6)
/** Flash_OPTSR_CUR__IWDG1_HW IWDG1 control option status bit **/
#define Flash_OPTSR_CUR__IWDG1_HW		(1 << 4)

#define Flash_OPTSR_CUR__BOR_LEV_SHIFT		2
#define Flash_OPTSR_CUR__BOR_LEV_MASK		0x03
/** @defgroup flash_optsr_cur__bor_lev BORLEV Brownout level option status bit
@{*/
/**@}*/

/** Flash_OPTSR_CUR__OPT_BUSY Option byte change ongoing flag **/
#define Flash_OPTSR_CUR__OPT_BUSY		(1 << 0)

/**@}*/

/** @defgroup flash_optsr_prg_ OPTSRPRG FLASH option status register
@{*/

/** Flash_OPTSR_PRG__SWAP_BANK_OPT Bank swapping option configuration bit **/
#define Flash_OPTSR_PRG__SWAP_BANK_OPT		(1 << 31)
/** Flash_OPTSR_PRG__IO_HSLV I/O high-speed at low-voltage (PRODUCT_BELOW_25V) **/
#define Flash_OPTSR_PRG__IO_HSLV		(1 << 29)
/** Flash_OPTSR_PRG__RSS2 User option configuration bit 2 **/
#define Flash_OPTSR_PRG__RSS2		(1 << 27)
/** Flash_OPTSR_PRG__RSS1 User option configuration bit 1 **/
#define Flash_OPTSR_PRG__RSS1		(1 << 26)
/** Flash_OPTSR_PRG__SECURITY Security option configuration bit **/
#define Flash_OPTSR_PRG__SECURITY		(1 << 21)

#define Flash_OPTSR_PRG__ST_RAM_SIZE_SHIFT		19
#define Flash_OPTSR_PRG__ST_RAM_SIZE_MASK		0x03
/** @defgroup flash_optsr_prg__st_ram_size STRAMSIZE DTCM size select option configuration bits
@{*/
/**@}*/

/** Flash_OPTSR_PRG__FZ_IWDG_SDBY IWDG Standby mode freeze option configuration bit **/
#define Flash_OPTSR_PRG__FZ_IWDG_SDBY		(1 << 18)
/** Flash_OPTSR_PRG__FZ_IWDG_STOP IWDG Stop mode freeze option configuration bit **/
#define Flash_OPTSR_PRG__FZ_IWDG_STOP		(1 << 17)

#define Flash_OPTSR_PRG__RDP_SHIFT		8
#define Flash_OPTSR_PRG__RDP_MASK		0xff
/** @defgroup flash_optsr_prg__rdp RDP Readout protection level option configuration byte
@{*/
/**@}*/

/** Flash_OPTSR_PRG__nRST_STBY_D1 Option byte erase after D1 DStandby option configuration bit **/
#define Flash_OPTSR_PRG__nRST_STBY_D1		(1 << 7)
/** Flash_OPTSR_PRG__nRST_STOP_D1 Option byte erase after D1 DStop option configuration bit **/
#define Flash_OPTSR_PRG__nRST_STOP_D1		(1 << 6)
/** Flash_OPTSR_PRG__IWDG1_HW IWDG1 option configuration bit **/
#define Flash_OPTSR_PRG__IWDG1_HW		(1 << 4)

#define Flash_OPTSR_PRG__BOR_LEV_SHIFT		2
#define Flash_OPTSR_PRG__BOR_LEV_MASK		0x03
/** @defgroup flash_optsr_prg__bor_lev BORLEV BOR reset level option configuration bits
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_optccr_ OPTCCR FLASH option clear control register
@{*/

/** Flash_OPTCCR__CLR_OPTCHANGEERR OPTCHANGEERR reset bit **/
#define Flash_OPTCCR__CLR_OPTCHANGEERR		(1 << 30)

/**@}*/

/** @defgroup flash_prar_cur2 PRARCUR2 FLASH protection address for bank 1
@{*/

/** Flash_PRAR_CUR2_DMEP2 Bank 2 PCROP protected erase enable option status bit **/
#define Flash_PRAR_CUR2_DMEP2		(1 << 31)

#define Flash_PRAR_CUR2_PROT_AREA_END2_SHIFT		16
#define Flash_PRAR_CUR2_PROT_AREA_END2_MASK		0xfff
/** @defgroup flash_prar_cur2_prot_area_end2 PROTAREAEND2 Bank 2 highest PCROP protected address
@{*/
/**@}*/


#define Flash_PRAR_CUR2_PROT_AREA_START2_SHIFT		0
#define Flash_PRAR_CUR2_PROT_AREA_START2_MASK		0xfff
/** @defgroup flash_prar_cur2_prot_area_start2 PROTAREASTART2 Bank 2 lowest PCROP protected address
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_scar_cur2 SCARCUR2 FLASH secure address for bank 2
@{*/

/** Flash_SCAR_CUR2_DMES2 Bank 2 secure protected erase enable option status bit **/
#define Flash_SCAR_CUR2_DMES2		(1 << 31)

#define Flash_SCAR_CUR2_SEC_AREA_END2_SHIFT		16
#define Flash_SCAR_CUR2_SEC_AREA_END2_MASK		0xfff
/** @defgroup flash_scar_cur2_sec_area_end2 SECAREAEND2 Bank 2 highest secure protected address
@{*/
/**@}*/


#define Flash_SCAR_CUR2_SEC_AREA_START2_SHIFT		0
#define Flash_SCAR_CUR2_SEC_AREA_START2_MASK		0xfff
/** @defgroup flash_scar_cur2_sec_area_start2 SECAREASTART2 Bank 2 lowest secure protected address
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_scar_prg2 SCARPRG2 FLASH secure address for bank 2
@{*/

/** Flash_SCAR_PRG2_DMES2 Bank 2 secure protected erase enable option configuration bit **/
#define Flash_SCAR_PRG2_DMES2		(1 << 31)

#define Flash_SCAR_PRG2_SEC_AREA_END2_SHIFT		16
#define Flash_SCAR_PRG2_SEC_AREA_END2_MASK		0xfff
/** @defgroup flash_scar_prg2_sec_area_end2 SECAREAEND2 Bank 2 highest secure protected address configuration
@{*/
/**@}*/


#define Flash_SCAR_PRG2_SEC_AREA_START2_SHIFT		0
#define Flash_SCAR_PRG2_SEC_AREA_START2_MASK		0xfff
/** @defgroup flash_scar_prg2_sec_area_start2 SECAREASTART2 Bank 2 lowest secure protected address configuration
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_wpsn_cur2r WPSNCUR2R FLASH write sector protection for bank 2
@{*/


#define Flash_WPSN_CUR2R_WRPSn2_SHIFT		0
#define Flash_WPSN_CUR2R_WRPSn2_MASK		0xff
/** @defgroup flash_wpsn_cur2r_wrpsn2 WRPSn2 Bank 2 sector write protection option status byte
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_wpsn_prg2r WPSNPRG2R FLASH write sector protection for bank 2
@{*/


#define Flash_WPSN_PRG2R_WRPSn2_SHIFT		0
#define Flash_WPSN_PRG2R_WRPSn2_MASK		0xff
/** @defgroup flash_wpsn_prg2r_wrpsn2 WRPSn2 Bank 2 sector write protection configuration byte
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_crccr2 CRCCR2 FLASH CRC control register for bank 1
@{*/


#define Flash_CRCCR2_CRC_BURST_SHIFT		20
#define Flash_CRCCR2_CRC_BURST_MASK		0x03
/** @defgroup flash_crccr2_crc_burst CRCBURST Bank 2 CRC burst size
@{*/
/**@}*/

/** Flash_CRCCR2_CLEAN_CRC Bank 2 CRC clear bit **/
#define Flash_CRCCR2_CLEAN_CRC		(1 << 17)
/** Flash_CRCCR2_START_CRC Bank 2 CRC start bit **/
#define Flash_CRCCR2_START_CRC		(1 << 16)
/** Flash_CRCCR2_CLEAN_SECT Bank 2 CRC sector list clear bit **/
#define Flash_CRCCR2_CLEAN_SECT		(1 << 10)
/** Flash_CRCCR2_ADD_SECT Bank 2 CRC sector select bit **/
#define Flash_CRCCR2_ADD_SECT		(1 << 9)
/** Flash_CRCCR2_CRC_BY_SECT Bank 2 CRC sector mode select bit **/
#define Flash_CRCCR2_CRC_BY_SECT		(1 << 8)
/** Flash_CRCCR2_ALL_BANK Bank 2 CRC select bit **/
#define Flash_CRCCR2_ALL_BANK		(1 << 7)

#define Flash_CRCCR2_CRC_SECT_SHIFT		0
#define Flash_CRCCR2_CRC_SECT_MASK		0x07
/** @defgroup flash_crccr2_crc_sect CRCSECT Bank 2 CRC sector number
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_crcsadd2r CRCSADD2R FLASH CRC start address register for bank 2
@{*/


#define Flash_CRCSADD2R_CRC_START_ADDR_SHIFT		0
#define Flash_CRCSADD2R_CRC_START_ADDR_MASK		0xffffffff
/** @defgroup flash_crcsadd2r_crc_start_addr CRCSTARTADDR CRC start address on bank 2
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_crceadd2r CRCEADD2R FLASH CRC end address register for bank 2
@{*/


#define Flash_CRCEADD2R_CRC_END_ADDR_SHIFT		0
#define Flash_CRCEADD2R_CRC_END_ADDR_MASK		0xffffffff
/** @defgroup flash_crceadd2r_crc_end_addr CRCENDADDR CRC end address on bank 2
@{*/
/**@}*/


/**@}*/

/** @defgroup flash_ecc_fa2r ECCFA2R FLASH ECC fail address for bank 2
@{*/


#define Flash_ECC_FA2R_FAIL_ECC_ADDR2_SHIFT		0
#define Flash_ECC_FA2R_FAIL_ECC_ADDR2_MASK		0x7fff
/** @defgroup flash_ecc_fa2r_fail_ecc_addr2 FAILECCADDR2 Bank 2 ECC error address
@{*/
/**@}*/


/**@}*/
