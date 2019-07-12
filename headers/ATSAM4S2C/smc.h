#pragma once 

/* --- SMC: Static Memory Controller -------------------------------- */

/** @defgroup smc_registers Static Memory Controller Register
@{*/

/** SMC_SETUP0 SMC Setup Register (CS_number = 0) **/
#define SMC_SETUP0			MMIO32(SMC_BASE + 0x00)
/** SMC_PULSE0 SMC Pulse Register (CS_number = 0) **/
#define SMC_PULSE0			MMIO32(SMC_BASE + 0x04)
/** SMC_CYCLE0 SMC Cycle Register (CS_number = 0) **/
#define SMC_CYCLE0			MMIO32(SMC_BASE + 0x08)
/** SMC_MODE0 SMC MODE Register (CS_number = 0) **/
#define SMC_MODE0			MMIO32(SMC_BASE + 0x0c)
/** SMC_SETUP1 SMC Setup Register (CS_number = 1) **/
#define SMC_SETUP1			MMIO32(SMC_BASE + 0x10)
/** SMC_PULSE1 SMC Pulse Register (CS_number = 1) **/
#define SMC_PULSE1			MMIO32(SMC_BASE + 0x14)
/** SMC_CYCLE1 SMC Cycle Register (CS_number = 1) **/
#define SMC_CYCLE1			MMIO32(SMC_BASE + 0x18)
/** SMC_MODE1 SMC MODE Register (CS_number = 1) **/
#define SMC_MODE1			MMIO32(SMC_BASE + 0x1c)
/** SMC_SETUP2 SMC Setup Register (CS_number = 2) **/
#define SMC_SETUP2			MMIO32(SMC_BASE + 0x20)
/** SMC_PULSE2 SMC Pulse Register (CS_number = 2) **/
#define SMC_PULSE2			MMIO32(SMC_BASE + 0x24)
/** SMC_CYCLE2 SMC Cycle Register (CS_number = 2) **/
#define SMC_CYCLE2			MMIO32(SMC_BASE + 0x28)
/** SMC_MODE2 SMC MODE Register (CS_number = 2) **/
#define SMC_MODE2			MMIO32(SMC_BASE + 0x2c)
/** SMC_SETUP3 SMC Setup Register (CS_number = 3) **/
#define SMC_SETUP3			MMIO32(SMC_BASE + 0x30)
/** SMC_PULSE3 SMC Pulse Register (CS_number = 3) **/
#define SMC_PULSE3			MMIO32(SMC_BASE + 0x34)
/** SMC_CYCLE3 SMC Cycle Register (CS_number = 3) **/
#define SMC_CYCLE3			MMIO32(SMC_BASE + 0x38)
/** SMC_MODE3 SMC MODE Register (CS_number = 3) **/
#define SMC_MODE3			MMIO32(SMC_BASE + 0x3c)
/** SMC_OCMS SMC OCMS MODE Register **/
#define SMC_OCMS			MMIO32(SMC_BASE + 0x80)
/** SMC_KEY1 SMC OCMS KEY1 Register **/
#define SMC_KEY1			MMIO32(SMC_BASE + 0x84)
/** SMC_KEY2 SMC OCMS KEY2 Register **/
#define SMC_KEY2			MMIO32(SMC_BASE + 0x88)
/** SMC_WPMR SMC Write Protection Mode Register **/
#define SMC_WPMR			MMIO32(SMC_BASE + 0xe4)
/** SMC_WPSR SMC Write Protection Status Register **/
#define SMC_WPSR			MMIO32(SMC_BASE + 0xe8)

/**@}*/


/** @defgroup smc_setup0 SETUP0 SMC Setup Register (CS_number = 0)
@{*/


#define SMC_SETUP0_NCS_RD_SETUP_SHIFT		24
#define SMC_SETUP0_NCS_RD_SETUP_MASK		0x3f
/** @defgroup smc_setup0_ncs_rd_setup NCSRDSETUP NCS Setup Length in READ Access
@{*/
/**@}*/


#define SMC_SETUP0_NRD_SETUP_SHIFT		16
#define SMC_SETUP0_NRD_SETUP_MASK		0x3f
/** @defgroup smc_setup0_nrd_setup NRDSETUP NRD Setup Length
@{*/
/**@}*/


#define SMC_SETUP0_NCS_WR_SETUP_SHIFT		8
#define SMC_SETUP0_NCS_WR_SETUP_MASK		0x3f
/** @defgroup smc_setup0_ncs_wr_setup NCSWRSETUP NCS Setup Length in WRITE Access
@{*/
/**@}*/


#define SMC_SETUP0_NWE_SETUP_SHIFT		0
#define SMC_SETUP0_NWE_SETUP_MASK		0x3f
/** @defgroup smc_setup0_nwe_setup NWESETUP NWE Setup Length
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_pulse0 PULSE0 SMC Pulse Register (CS_number = 0)
@{*/


#define SMC_PULSE0_NCS_RD_PULSE_SHIFT		24
#define SMC_PULSE0_NCS_RD_PULSE_MASK		0x7f
/** @defgroup smc_pulse0_ncs_rd_pulse NCSRDPULSE NCS Pulse Length in READ Access
@{*/
/**@}*/


#define SMC_PULSE0_NRD_PULSE_SHIFT		16
#define SMC_PULSE0_NRD_PULSE_MASK		0x7f
/** @defgroup smc_pulse0_nrd_pulse NRDPULSE NRD Pulse Length
@{*/
/**@}*/


#define SMC_PULSE0_NCS_WR_PULSE_SHIFT		8
#define SMC_PULSE0_NCS_WR_PULSE_MASK		0x7f
/** @defgroup smc_pulse0_ncs_wr_pulse NCSWRPULSE NCS Pulse Length in WRITE Access
@{*/
/**@}*/


#define SMC_PULSE0_NWE_PULSE_SHIFT		0
#define SMC_PULSE0_NWE_PULSE_MASK		0x7f
/** @defgroup smc_pulse0_nwe_pulse NWEPULSE NWE Pulse Length
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_cycle0 CYCLE0 SMC Cycle Register (CS_number = 0)
@{*/


#define SMC_CYCLE0_NRD_CYCLE_SHIFT		16
#define SMC_CYCLE0_NRD_CYCLE_MASK		0x1ff
/** @defgroup smc_cycle0_nrd_cycle NRDCYCLE Total Read Cycle Length
@{*/
/**@}*/


#define SMC_CYCLE0_NWE_CYCLE_SHIFT		0
#define SMC_CYCLE0_NWE_CYCLE_MASK		0x1ff
/** @defgroup smc_cycle0_nwe_cycle NWECYCLE Total Write Cycle Length
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_mode0 MODE0 SMC MODE Register (CS_number = 0)
@{*/


#define SMC_MODE0_PS_SHIFT		28
#define SMC_MODE0_PS_MASK		0x03
/** @defgroup smc_mode0_ps PS Page Size
@{*/
/**@}*/

/** SMC_MODE0_PMEN Page Mode Enabled **/
#define SMC_MODE0_PMEN		(1 << 24)
/** SMC_MODE0_TDF_MODE TDF Optimization **/
#define SMC_MODE0_TDF_MODE		(1 << 20)

#define SMC_MODE0_TDF_CYCLES_SHIFT		16
#define SMC_MODE0_TDF_CYCLES_MASK		0x0f
/** @defgroup smc_mode0_tdf_cycles TDFCYCLES Data Float Time
@{*/
/**@}*/


#define SMC_MODE0_EXNW_MODE_SHIFT		4
#define SMC_MODE0_EXNW_MODE_MASK		0x03
/** @defgroup smc_mode0_exnw_mode EXNWMODE NWAIT Mode
@{*/
/**@}*/

/** SMC_MODE0_WRITE_MODE Write Mode **/
#define SMC_MODE0_WRITE_MODE		(1 << 1)
/** SMC_MODE0_READ_MODE Read Mode **/
#define SMC_MODE0_READ_MODE		(1 << 0)

/**@}*/

/** @defgroup smc_setup1 SETUP1 SMC Setup Register (CS_number = 1)
@{*/


#define SMC_SETUP1_NCS_RD_SETUP_SHIFT		24
#define SMC_SETUP1_NCS_RD_SETUP_MASK		0x3f
/** @defgroup smc_setup1_ncs_rd_setup NCSRDSETUP NCS Setup Length in READ Access
@{*/
/**@}*/


#define SMC_SETUP1_NRD_SETUP_SHIFT		16
#define SMC_SETUP1_NRD_SETUP_MASK		0x3f
/** @defgroup smc_setup1_nrd_setup NRDSETUP NRD Setup Length
@{*/
/**@}*/


#define SMC_SETUP1_NCS_WR_SETUP_SHIFT		8
#define SMC_SETUP1_NCS_WR_SETUP_MASK		0x3f
/** @defgroup smc_setup1_ncs_wr_setup NCSWRSETUP NCS Setup Length in WRITE Access
@{*/
/**@}*/


#define SMC_SETUP1_NWE_SETUP_SHIFT		0
#define SMC_SETUP1_NWE_SETUP_MASK		0x3f
/** @defgroup smc_setup1_nwe_setup NWESETUP NWE Setup Length
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_pulse1 PULSE1 SMC Pulse Register (CS_number = 1)
@{*/


#define SMC_PULSE1_NCS_RD_PULSE_SHIFT		24
#define SMC_PULSE1_NCS_RD_PULSE_MASK		0x7f
/** @defgroup smc_pulse1_ncs_rd_pulse NCSRDPULSE NCS Pulse Length in READ Access
@{*/
/**@}*/


#define SMC_PULSE1_NRD_PULSE_SHIFT		16
#define SMC_PULSE1_NRD_PULSE_MASK		0x7f
/** @defgroup smc_pulse1_nrd_pulse NRDPULSE NRD Pulse Length
@{*/
/**@}*/


#define SMC_PULSE1_NCS_WR_PULSE_SHIFT		8
#define SMC_PULSE1_NCS_WR_PULSE_MASK		0x7f
/** @defgroup smc_pulse1_ncs_wr_pulse NCSWRPULSE NCS Pulse Length in WRITE Access
@{*/
/**@}*/


#define SMC_PULSE1_NWE_PULSE_SHIFT		0
#define SMC_PULSE1_NWE_PULSE_MASK		0x7f
/** @defgroup smc_pulse1_nwe_pulse NWEPULSE NWE Pulse Length
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_cycle1 CYCLE1 SMC Cycle Register (CS_number = 1)
@{*/


#define SMC_CYCLE1_NRD_CYCLE_SHIFT		16
#define SMC_CYCLE1_NRD_CYCLE_MASK		0x1ff
/** @defgroup smc_cycle1_nrd_cycle NRDCYCLE Total Read Cycle Length
@{*/
/**@}*/


#define SMC_CYCLE1_NWE_CYCLE_SHIFT		0
#define SMC_CYCLE1_NWE_CYCLE_MASK		0x1ff
/** @defgroup smc_cycle1_nwe_cycle NWECYCLE Total Write Cycle Length
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_mode1 MODE1 SMC MODE Register (CS_number = 1)
@{*/


#define SMC_MODE1_PS_SHIFT		28
#define SMC_MODE1_PS_MASK		0x03
/** @defgroup smc_mode1_ps PS Page Size
@{*/
/**@}*/

/** SMC_MODE1_PMEN Page Mode Enabled **/
#define SMC_MODE1_PMEN		(1 << 24)
/** SMC_MODE1_TDF_MODE TDF Optimization **/
#define SMC_MODE1_TDF_MODE		(1 << 20)

#define SMC_MODE1_TDF_CYCLES_SHIFT		16
#define SMC_MODE1_TDF_CYCLES_MASK		0x0f
/** @defgroup smc_mode1_tdf_cycles TDFCYCLES Data Float Time
@{*/
/**@}*/


#define SMC_MODE1_EXNW_MODE_SHIFT		4
#define SMC_MODE1_EXNW_MODE_MASK		0x03
/** @defgroup smc_mode1_exnw_mode EXNWMODE NWAIT Mode
@{*/
/**@}*/

/** SMC_MODE1_WRITE_MODE Write Mode **/
#define SMC_MODE1_WRITE_MODE		(1 << 1)
/** SMC_MODE1_READ_MODE Read Mode **/
#define SMC_MODE1_READ_MODE		(1 << 0)

/**@}*/

/** @defgroup smc_setup2 SETUP2 SMC Setup Register (CS_number = 2)
@{*/


#define SMC_SETUP2_NCS_RD_SETUP_SHIFT		24
#define SMC_SETUP2_NCS_RD_SETUP_MASK		0x3f
/** @defgroup smc_setup2_ncs_rd_setup NCSRDSETUP NCS Setup Length in READ Access
@{*/
/**@}*/


#define SMC_SETUP2_NRD_SETUP_SHIFT		16
#define SMC_SETUP2_NRD_SETUP_MASK		0x3f
/** @defgroup smc_setup2_nrd_setup NRDSETUP NRD Setup Length
@{*/
/**@}*/


#define SMC_SETUP2_NCS_WR_SETUP_SHIFT		8
#define SMC_SETUP2_NCS_WR_SETUP_MASK		0x3f
/** @defgroup smc_setup2_ncs_wr_setup NCSWRSETUP NCS Setup Length in WRITE Access
@{*/
/**@}*/


#define SMC_SETUP2_NWE_SETUP_SHIFT		0
#define SMC_SETUP2_NWE_SETUP_MASK		0x3f
/** @defgroup smc_setup2_nwe_setup NWESETUP NWE Setup Length
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_pulse2 PULSE2 SMC Pulse Register (CS_number = 2)
@{*/


#define SMC_PULSE2_NCS_RD_PULSE_SHIFT		24
#define SMC_PULSE2_NCS_RD_PULSE_MASK		0x7f
/** @defgroup smc_pulse2_ncs_rd_pulse NCSRDPULSE NCS Pulse Length in READ Access
@{*/
/**@}*/


#define SMC_PULSE2_NRD_PULSE_SHIFT		16
#define SMC_PULSE2_NRD_PULSE_MASK		0x7f
/** @defgroup smc_pulse2_nrd_pulse NRDPULSE NRD Pulse Length
@{*/
/**@}*/


#define SMC_PULSE2_NCS_WR_PULSE_SHIFT		8
#define SMC_PULSE2_NCS_WR_PULSE_MASK		0x7f
/** @defgroup smc_pulse2_ncs_wr_pulse NCSWRPULSE NCS Pulse Length in WRITE Access
@{*/
/**@}*/


#define SMC_PULSE2_NWE_PULSE_SHIFT		0
#define SMC_PULSE2_NWE_PULSE_MASK		0x7f
/** @defgroup smc_pulse2_nwe_pulse NWEPULSE NWE Pulse Length
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_cycle2 CYCLE2 SMC Cycle Register (CS_number = 2)
@{*/


#define SMC_CYCLE2_NRD_CYCLE_SHIFT		16
#define SMC_CYCLE2_NRD_CYCLE_MASK		0x1ff
/** @defgroup smc_cycle2_nrd_cycle NRDCYCLE Total Read Cycle Length
@{*/
/**@}*/


#define SMC_CYCLE2_NWE_CYCLE_SHIFT		0
#define SMC_CYCLE2_NWE_CYCLE_MASK		0x1ff
/** @defgroup smc_cycle2_nwe_cycle NWECYCLE Total Write Cycle Length
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_mode2 MODE2 SMC MODE Register (CS_number = 2)
@{*/


#define SMC_MODE2_PS_SHIFT		28
#define SMC_MODE2_PS_MASK		0x03
/** @defgroup smc_mode2_ps PS Page Size
@{*/
/**@}*/

/** SMC_MODE2_PMEN Page Mode Enabled **/
#define SMC_MODE2_PMEN		(1 << 24)
/** SMC_MODE2_TDF_MODE TDF Optimization **/
#define SMC_MODE2_TDF_MODE		(1 << 20)

#define SMC_MODE2_TDF_CYCLES_SHIFT		16
#define SMC_MODE2_TDF_CYCLES_MASK		0x0f
/** @defgroup smc_mode2_tdf_cycles TDFCYCLES Data Float Time
@{*/
/**@}*/


#define SMC_MODE2_EXNW_MODE_SHIFT		4
#define SMC_MODE2_EXNW_MODE_MASK		0x03
/** @defgroup smc_mode2_exnw_mode EXNWMODE NWAIT Mode
@{*/
/**@}*/

/** SMC_MODE2_WRITE_MODE Write Mode **/
#define SMC_MODE2_WRITE_MODE		(1 << 1)
/** SMC_MODE2_READ_MODE Read Mode **/
#define SMC_MODE2_READ_MODE		(1 << 0)

/**@}*/

/** @defgroup smc_setup3 SETUP3 SMC Setup Register (CS_number = 3)
@{*/


#define SMC_SETUP3_NCS_RD_SETUP_SHIFT		24
#define SMC_SETUP3_NCS_RD_SETUP_MASK		0x3f
/** @defgroup smc_setup3_ncs_rd_setup NCSRDSETUP NCS Setup Length in READ Access
@{*/
/**@}*/


#define SMC_SETUP3_NRD_SETUP_SHIFT		16
#define SMC_SETUP3_NRD_SETUP_MASK		0x3f
/** @defgroup smc_setup3_nrd_setup NRDSETUP NRD Setup Length
@{*/
/**@}*/


#define SMC_SETUP3_NCS_WR_SETUP_SHIFT		8
#define SMC_SETUP3_NCS_WR_SETUP_MASK		0x3f
/** @defgroup smc_setup3_ncs_wr_setup NCSWRSETUP NCS Setup Length in WRITE Access
@{*/
/**@}*/


#define SMC_SETUP3_NWE_SETUP_SHIFT		0
#define SMC_SETUP3_NWE_SETUP_MASK		0x3f
/** @defgroup smc_setup3_nwe_setup NWESETUP NWE Setup Length
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_pulse3 PULSE3 SMC Pulse Register (CS_number = 3)
@{*/


#define SMC_PULSE3_NCS_RD_PULSE_SHIFT		24
#define SMC_PULSE3_NCS_RD_PULSE_MASK		0x7f
/** @defgroup smc_pulse3_ncs_rd_pulse NCSRDPULSE NCS Pulse Length in READ Access
@{*/
/**@}*/


#define SMC_PULSE3_NRD_PULSE_SHIFT		16
#define SMC_PULSE3_NRD_PULSE_MASK		0x7f
/** @defgroup smc_pulse3_nrd_pulse NRDPULSE NRD Pulse Length
@{*/
/**@}*/


#define SMC_PULSE3_NCS_WR_PULSE_SHIFT		8
#define SMC_PULSE3_NCS_WR_PULSE_MASK		0x7f
/** @defgroup smc_pulse3_ncs_wr_pulse NCSWRPULSE NCS Pulse Length in WRITE Access
@{*/
/**@}*/


#define SMC_PULSE3_NWE_PULSE_SHIFT		0
#define SMC_PULSE3_NWE_PULSE_MASK		0x7f
/** @defgroup smc_pulse3_nwe_pulse NWEPULSE NWE Pulse Length
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_cycle3 CYCLE3 SMC Cycle Register (CS_number = 3)
@{*/


#define SMC_CYCLE3_NRD_CYCLE_SHIFT		16
#define SMC_CYCLE3_NRD_CYCLE_MASK		0x1ff
/** @defgroup smc_cycle3_nrd_cycle NRDCYCLE Total Read Cycle Length
@{*/
/**@}*/


#define SMC_CYCLE3_NWE_CYCLE_SHIFT		0
#define SMC_CYCLE3_NWE_CYCLE_MASK		0x1ff
/** @defgroup smc_cycle3_nwe_cycle NWECYCLE Total Write Cycle Length
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_mode3 MODE3 SMC MODE Register (CS_number = 3)
@{*/


#define SMC_MODE3_PS_SHIFT		28
#define SMC_MODE3_PS_MASK		0x03
/** @defgroup smc_mode3_ps PS Page Size
@{*/
/**@}*/

/** SMC_MODE3_PMEN Page Mode Enabled **/
#define SMC_MODE3_PMEN		(1 << 24)
/** SMC_MODE3_TDF_MODE TDF Optimization **/
#define SMC_MODE3_TDF_MODE		(1 << 20)

#define SMC_MODE3_TDF_CYCLES_SHIFT		16
#define SMC_MODE3_TDF_CYCLES_MASK		0x0f
/** @defgroup smc_mode3_tdf_cycles TDFCYCLES Data Float Time
@{*/
/**@}*/


#define SMC_MODE3_EXNW_MODE_SHIFT		4
#define SMC_MODE3_EXNW_MODE_MASK		0x03
/** @defgroup smc_mode3_exnw_mode EXNWMODE NWAIT Mode
@{*/
/**@}*/

/** SMC_MODE3_WRITE_MODE Write Mode **/
#define SMC_MODE3_WRITE_MODE		(1 << 1)
/** SMC_MODE3_READ_MODE Read Mode **/
#define SMC_MODE3_READ_MODE		(1 << 0)

/**@}*/

/** @defgroup smc_ocms OCMS SMC OCMS MODE Register
@{*/

/** SMC_OCMS_CS3SE Chip Select (x = 0 to 3) Scrambling Enable **/
#define SMC_OCMS_CS3SE		(1 << 19)
/** SMC_OCMS_CS2SE Chip Select (x = 0 to 3) Scrambling Enable **/
#define SMC_OCMS_CS2SE		(1 << 18)
/** SMC_OCMS_CS1SE Chip Select (x = 0 to 3) Scrambling Enable **/
#define SMC_OCMS_CS1SE		(1 << 17)
/** SMC_OCMS_CS0SE Chip Select (x = 0 to 3) Scrambling Enable **/
#define SMC_OCMS_CS0SE		(1 << 16)
/** SMC_OCMS_SMSE Static Memory Controller Scrambling Enable **/
#define SMC_OCMS_SMSE		(1 << 0)

/**@}*/

/** @defgroup smc_key1 KEY1 SMC OCMS KEY1 Register
@{*/


#define SMC_KEY1_KEY1_SHIFT		0
#define SMC_KEY1_KEY1_MASK		0xffffffff
/** @defgroup smc_key1_key1 KEY1 Off Chip Memory Scrambling (OCMS) Key Part 1
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_key2 KEY2 SMC OCMS KEY2 Register
@{*/


#define SMC_KEY2_KEY2_SHIFT		0
#define SMC_KEY2_KEY2_MASK		0xffffffff
/** @defgroup smc_key2_key2 KEY2 Off Chip Memory Scrambling (OCMS) Key Part 2
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_wpmr WPMR SMC Write Protection Mode Register
@{*/


#define SMC_WPMR_WPKEY_SHIFT		8
#define SMC_WPMR_WPKEY_MASK		0xffffff
/** @defgroup smc_wpmr_wpkey WPKEY Write Protection Key
@{*/
/**@}*/

/** SMC_WPMR_WPEN Write Protect Enable **/
#define SMC_WPMR_WPEN		(1 << 0)

/**@}*/

/** @defgroup smc_wpsr WPSR SMC Write Protection Status Register
@{*/


#define SMC_WPSR_WPVSRC_SHIFT		8
#define SMC_WPSR_WPVSRC_MASK		0xffff
/** @defgroup smc_wpsr_wpvsrc WPVSRC Write Protection Violation Source
@{*/
/**@}*/

/** SMC_WPSR_WPVS Write Protection Violation Status **/
#define SMC_WPSR_WPVS		(1 << 0)

/**@}*/
