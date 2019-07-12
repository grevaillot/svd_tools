#pragma once 

/* --- SMC: Static Memory Controller -------------------------------- */

/** @defgroup smc_registers Static Memory Controller Register
@{*/

/** SMC_SMC_CS_NUMBER[0]_SMC_SETUP SMC Setup Register **/
#define SMC_SMC_CS_NUMBER[0]_SMC_SETUP			MMIO32(SMC_BASE + 0x00)
/** SMC_SMC_CS_NUMBER[0]_SMC_PULSE SMC Pulse Register **/
#define SMC_SMC_CS_NUMBER[0]_SMC_PULSE			MMIO32(SMC_BASE + 0x04)
/** SMC_SMC_CS_NUMBER[0]_SMC_CYCLE SMC Cycle Register **/
#define SMC_SMC_CS_NUMBER[0]_SMC_CYCLE			MMIO32(SMC_BASE + 0x08)
/** SMC_SMC_CS_NUMBER[0]_SMC_MODE SMC Mode Register **/
#define SMC_SMC_CS_NUMBER[0]_SMC_MODE			MMIO32(SMC_BASE + 0x0c)
/** SMC_SMC_CS_NUMBER[1]_SMC_SETUP SMC Setup Register **/
#define SMC_SMC_CS_NUMBER[1]_SMC_SETUP			MMIO32(SMC_BASE + 0x10)
/** SMC_SMC_CS_NUMBER[1]_SMC_PULSE SMC Pulse Register **/
#define SMC_SMC_CS_NUMBER[1]_SMC_PULSE			MMIO32(SMC_BASE + 0x14)
/** SMC_SMC_CS_NUMBER[1]_SMC_CYCLE SMC Cycle Register **/
#define SMC_SMC_CS_NUMBER[1]_SMC_CYCLE			MMIO32(SMC_BASE + 0x18)
/** SMC_SMC_CS_NUMBER[1]_SMC_MODE SMC Mode Register **/
#define SMC_SMC_CS_NUMBER[1]_SMC_MODE			MMIO32(SMC_BASE + 0x1c)
/** SMC_SMC_CS_NUMBER[2]_SMC_SETUP SMC Setup Register **/
#define SMC_SMC_CS_NUMBER[2]_SMC_SETUP			MMIO32(SMC_BASE + 0x20)
/** SMC_SMC_CS_NUMBER[2]_SMC_PULSE SMC Pulse Register **/
#define SMC_SMC_CS_NUMBER[2]_SMC_PULSE			MMIO32(SMC_BASE + 0x24)
/** SMC_SMC_CS_NUMBER[2]_SMC_CYCLE SMC Cycle Register **/
#define SMC_SMC_CS_NUMBER[2]_SMC_CYCLE			MMIO32(SMC_BASE + 0x28)
/** SMC_SMC_CS_NUMBER[2]_SMC_MODE SMC Mode Register **/
#define SMC_SMC_CS_NUMBER[2]_SMC_MODE			MMIO32(SMC_BASE + 0x2c)
/** SMC_SMC_CS_NUMBER[3]_SMC_SETUP SMC Setup Register **/
#define SMC_SMC_CS_NUMBER[3]_SMC_SETUP			MMIO32(SMC_BASE + 0x30)
/** SMC_SMC_CS_NUMBER[3]_SMC_PULSE SMC Pulse Register **/
#define SMC_SMC_CS_NUMBER[3]_SMC_PULSE			MMIO32(SMC_BASE + 0x34)
/** SMC_SMC_CS_NUMBER[3]_SMC_CYCLE SMC Cycle Register **/
#define SMC_SMC_CS_NUMBER[3]_SMC_CYCLE			MMIO32(SMC_BASE + 0x38)
/** SMC_SMC_CS_NUMBER[3]_SMC_MODE SMC Mode Register **/
#define SMC_SMC_CS_NUMBER[3]_SMC_MODE			MMIO32(SMC_BASE + 0x3c)
/** SMC_SMC_OCMS SMC Off-Chip Memory Scrambling Register **/
#define SMC_SMC_OCMS			MMIO32(SMC_BASE + 0x80)
/** SMC_SMC_KEY1 SMC Off-Chip Memory Scrambling KEY1 Register **/
#define SMC_SMC_KEY1			MMIO32(SMC_BASE + 0x84)
/** SMC_SMC_KEY2 SMC Off-Chip Memory Scrambling KEY2 Register **/
#define SMC_SMC_KEY2			MMIO32(SMC_BASE + 0x88)
/** SMC_SMC_WPMR SMC Write Protection Mode Register **/
#define SMC_SMC_WPMR			MMIO32(SMC_BASE + 0xe4)
/** SMC_SMC_WPSR SMC Write Protection Status Register **/
#define SMC_SMC_WPSR			MMIO32(SMC_BASE + 0xe8)

/**@}*/


/** @defgroup smc_smc_cs_number[0]_smc_setup SMCCSNUMBER[0]SMCSETUP SMC Setup Register
@{*/


#define SMC_SMC_CS_NUMBER[0]_SMC_SETUP_NCS_RD_SETUP_SHIFT		24
#define SMC_SMC_CS_NUMBER[0]_SMC_SETUP_NCS_RD_SETUP_MASK		0x3f
/** @defgroup smc_smc_cs_number[0]_smc_setup_ncs_rd_setup NCSRDSETUP NCS Setup Length in READ Access
@{*/
/**@}*/


#define SMC_SMC_CS_NUMBER[0]_SMC_SETUP_NRD_SETUP_SHIFT		16
#define SMC_SMC_CS_NUMBER[0]_SMC_SETUP_NRD_SETUP_MASK		0x3f
/** @defgroup smc_smc_cs_number[0]_smc_setup_nrd_setup NRDSETUP NRD Setup Length
@{*/
/**@}*/


#define SMC_SMC_CS_NUMBER[0]_SMC_SETUP_NCS_WR_SETUP_SHIFT		8
#define SMC_SMC_CS_NUMBER[0]_SMC_SETUP_NCS_WR_SETUP_MASK		0x3f
/** @defgroup smc_smc_cs_number[0]_smc_setup_ncs_wr_setup NCSWRSETUP NCS Setup Length in WRITE Access
@{*/
/**@}*/


#define SMC_SMC_CS_NUMBER[0]_SMC_SETUP_NWE_SETUP_SHIFT		0
#define SMC_SMC_CS_NUMBER[0]_SMC_SETUP_NWE_SETUP_MASK		0x3f
/** @defgroup smc_smc_cs_number[0]_smc_setup_nwe_setup NWESETUP NWE Setup Length
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_smc_cs_number[0]_smc_pulse SMCCSNUMBER[0]SMCPULSE SMC Pulse Register
@{*/


#define SMC_SMC_CS_NUMBER[0]_SMC_PULSE_NCS_RD_PULSE_SHIFT		24
#define SMC_SMC_CS_NUMBER[0]_SMC_PULSE_NCS_RD_PULSE_MASK		0x7f
/** @defgroup smc_smc_cs_number[0]_smc_pulse_ncs_rd_pulse NCSRDPULSE NCS Pulse Length in READ Access
@{*/
/**@}*/


#define SMC_SMC_CS_NUMBER[0]_SMC_PULSE_NRD_PULSE_SHIFT		16
#define SMC_SMC_CS_NUMBER[0]_SMC_PULSE_NRD_PULSE_MASK		0x7f
/** @defgroup smc_smc_cs_number[0]_smc_pulse_nrd_pulse NRDPULSE NRD Pulse Length
@{*/
/**@}*/


#define SMC_SMC_CS_NUMBER[0]_SMC_PULSE_NCS_WR_PULSE_SHIFT		8
#define SMC_SMC_CS_NUMBER[0]_SMC_PULSE_NCS_WR_PULSE_MASK		0x7f
/** @defgroup smc_smc_cs_number[0]_smc_pulse_ncs_wr_pulse NCSWRPULSE NCS Pulse Length in WRITE Access
@{*/
/**@}*/


#define SMC_SMC_CS_NUMBER[0]_SMC_PULSE_NWE_PULSE_SHIFT		0
#define SMC_SMC_CS_NUMBER[0]_SMC_PULSE_NWE_PULSE_MASK		0x7f
/** @defgroup smc_smc_cs_number[0]_smc_pulse_nwe_pulse NWEPULSE NWE Pulse Length
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_smc_cs_number[0]_smc_cycle SMCCSNUMBER[0]SMCCYCLE SMC Cycle Register
@{*/


#define SMC_SMC_CS_NUMBER[0]_SMC_CYCLE_NRD_CYCLE_SHIFT		16
#define SMC_SMC_CS_NUMBER[0]_SMC_CYCLE_NRD_CYCLE_MASK		0x1ff
/** @defgroup smc_smc_cs_number[0]_smc_cycle_nrd_cycle NRDCYCLE Total Read Cycle Length
@{*/
/**@}*/


#define SMC_SMC_CS_NUMBER[0]_SMC_CYCLE_NWE_CYCLE_SHIFT		0
#define SMC_SMC_CS_NUMBER[0]_SMC_CYCLE_NWE_CYCLE_MASK		0x1ff
/** @defgroup smc_smc_cs_number[0]_smc_cycle_nwe_cycle NWECYCLE Total Write Cycle Length
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_smc_cs_number[0]_smc_mode SMCCSNUMBER[0]SMCMODE SMC Mode Register
@{*/


#define SMC_SMC_CS_NUMBER[0]_SMC_MODE_PS_SHIFT		28
#define SMC_SMC_CS_NUMBER[0]_SMC_MODE_PS_MASK		0x03
/** @defgroup smc_smc_cs_number[0]_smc_mode_ps PS Page Size
@{*/
/**@}*/

/** SMC_SMC_CS_NUMBER[0]_SMC_MODE_PMEN Page Mode Enabled **/
#define SMC_SMC_CS_NUMBER[0]_SMC_MODE_PMEN		(1 << 24)
/** SMC_SMC_CS_NUMBER[0]_SMC_MODE_TDF_MODE TDF Optimization **/
#define SMC_SMC_CS_NUMBER[0]_SMC_MODE_TDF_MODE		(1 << 20)

#define SMC_SMC_CS_NUMBER[0]_SMC_MODE_TDF_CYCLES_SHIFT		16
#define SMC_SMC_CS_NUMBER[0]_SMC_MODE_TDF_CYCLES_MASK		0x0f
/** @defgroup smc_smc_cs_number[0]_smc_mode_tdf_cycles TDFCYCLES Data Float Time
@{*/
/**@}*/

/** SMC_SMC_CS_NUMBER[0]_SMC_MODE_DBW Data Bus Width **/
#define SMC_SMC_CS_NUMBER[0]_SMC_MODE_DBW		(1 << 12)
/** SMC_SMC_CS_NUMBER[0]_SMC_MODE_BAT Byte Access Type **/
#define SMC_SMC_CS_NUMBER[0]_SMC_MODE_BAT		(1 << 8)

#define SMC_SMC_CS_NUMBER[0]_SMC_MODE_EXNW_MODE_SHIFT		4
#define SMC_SMC_CS_NUMBER[0]_SMC_MODE_EXNW_MODE_MASK		0x03
/** @defgroup smc_smc_cs_number[0]_smc_mode_exnw_mode EXNWMODE NWAIT Mode
@{*/
/**@}*/

/** SMC_SMC_CS_NUMBER[0]_SMC_MODE_WRITE_MODE Write Mode **/
#define SMC_SMC_CS_NUMBER[0]_SMC_MODE_WRITE_MODE		(1 << 1)
/** SMC_SMC_CS_NUMBER[0]_SMC_MODE_READ_MODE Read Mode **/
#define SMC_SMC_CS_NUMBER[0]_SMC_MODE_READ_MODE		(1 << 0)

/**@}*/

/** @defgroup smc_smc_cs_number[1]_smc_setup SMCCSNUMBER[1]SMCSETUP SMC Setup Register
@{*/


#define SMC_SMC_CS_NUMBER[1]_SMC_SETUP_NCS_RD_SETUP_SHIFT		24
#define SMC_SMC_CS_NUMBER[1]_SMC_SETUP_NCS_RD_SETUP_MASK		0x3f
/** @defgroup smc_smc_cs_number[1]_smc_setup_ncs_rd_setup NCSRDSETUP NCS Setup Length in READ Access
@{*/
/**@}*/


#define SMC_SMC_CS_NUMBER[1]_SMC_SETUP_NRD_SETUP_SHIFT		16
#define SMC_SMC_CS_NUMBER[1]_SMC_SETUP_NRD_SETUP_MASK		0x3f
/** @defgroup smc_smc_cs_number[1]_smc_setup_nrd_setup NRDSETUP NRD Setup Length
@{*/
/**@}*/


#define SMC_SMC_CS_NUMBER[1]_SMC_SETUP_NCS_WR_SETUP_SHIFT		8
#define SMC_SMC_CS_NUMBER[1]_SMC_SETUP_NCS_WR_SETUP_MASK		0x3f
/** @defgroup smc_smc_cs_number[1]_smc_setup_ncs_wr_setup NCSWRSETUP NCS Setup Length in WRITE Access
@{*/
/**@}*/


#define SMC_SMC_CS_NUMBER[1]_SMC_SETUP_NWE_SETUP_SHIFT		0
#define SMC_SMC_CS_NUMBER[1]_SMC_SETUP_NWE_SETUP_MASK		0x3f
/** @defgroup smc_smc_cs_number[1]_smc_setup_nwe_setup NWESETUP NWE Setup Length
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_smc_cs_number[1]_smc_pulse SMCCSNUMBER[1]SMCPULSE SMC Pulse Register
@{*/


#define SMC_SMC_CS_NUMBER[1]_SMC_PULSE_NCS_RD_PULSE_SHIFT		24
#define SMC_SMC_CS_NUMBER[1]_SMC_PULSE_NCS_RD_PULSE_MASK		0x7f
/** @defgroup smc_smc_cs_number[1]_smc_pulse_ncs_rd_pulse NCSRDPULSE NCS Pulse Length in READ Access
@{*/
/**@}*/


#define SMC_SMC_CS_NUMBER[1]_SMC_PULSE_NRD_PULSE_SHIFT		16
#define SMC_SMC_CS_NUMBER[1]_SMC_PULSE_NRD_PULSE_MASK		0x7f
/** @defgroup smc_smc_cs_number[1]_smc_pulse_nrd_pulse NRDPULSE NRD Pulse Length
@{*/
/**@}*/


#define SMC_SMC_CS_NUMBER[1]_SMC_PULSE_NCS_WR_PULSE_SHIFT		8
#define SMC_SMC_CS_NUMBER[1]_SMC_PULSE_NCS_WR_PULSE_MASK		0x7f
/** @defgroup smc_smc_cs_number[1]_smc_pulse_ncs_wr_pulse NCSWRPULSE NCS Pulse Length in WRITE Access
@{*/
/**@}*/


#define SMC_SMC_CS_NUMBER[1]_SMC_PULSE_NWE_PULSE_SHIFT		0
#define SMC_SMC_CS_NUMBER[1]_SMC_PULSE_NWE_PULSE_MASK		0x7f
/** @defgroup smc_smc_cs_number[1]_smc_pulse_nwe_pulse NWEPULSE NWE Pulse Length
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_smc_cs_number[1]_smc_cycle SMCCSNUMBER[1]SMCCYCLE SMC Cycle Register
@{*/


#define SMC_SMC_CS_NUMBER[1]_SMC_CYCLE_NRD_CYCLE_SHIFT		16
#define SMC_SMC_CS_NUMBER[1]_SMC_CYCLE_NRD_CYCLE_MASK		0x1ff
/** @defgroup smc_smc_cs_number[1]_smc_cycle_nrd_cycle NRDCYCLE Total Read Cycle Length
@{*/
/**@}*/


#define SMC_SMC_CS_NUMBER[1]_SMC_CYCLE_NWE_CYCLE_SHIFT		0
#define SMC_SMC_CS_NUMBER[1]_SMC_CYCLE_NWE_CYCLE_MASK		0x1ff
/** @defgroup smc_smc_cs_number[1]_smc_cycle_nwe_cycle NWECYCLE Total Write Cycle Length
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_smc_cs_number[1]_smc_mode SMCCSNUMBER[1]SMCMODE SMC Mode Register
@{*/


#define SMC_SMC_CS_NUMBER[1]_SMC_MODE_PS_SHIFT		28
#define SMC_SMC_CS_NUMBER[1]_SMC_MODE_PS_MASK		0x03
/** @defgroup smc_smc_cs_number[1]_smc_mode_ps PS Page Size
@{*/
/**@}*/

/** SMC_SMC_CS_NUMBER[1]_SMC_MODE_PMEN Page Mode Enabled **/
#define SMC_SMC_CS_NUMBER[1]_SMC_MODE_PMEN		(1 << 24)
/** SMC_SMC_CS_NUMBER[1]_SMC_MODE_TDF_MODE TDF Optimization **/
#define SMC_SMC_CS_NUMBER[1]_SMC_MODE_TDF_MODE		(1 << 20)

#define SMC_SMC_CS_NUMBER[1]_SMC_MODE_TDF_CYCLES_SHIFT		16
#define SMC_SMC_CS_NUMBER[1]_SMC_MODE_TDF_CYCLES_MASK		0x0f
/** @defgroup smc_smc_cs_number[1]_smc_mode_tdf_cycles TDFCYCLES Data Float Time
@{*/
/**@}*/

/** SMC_SMC_CS_NUMBER[1]_SMC_MODE_DBW Data Bus Width **/
#define SMC_SMC_CS_NUMBER[1]_SMC_MODE_DBW		(1 << 12)
/** SMC_SMC_CS_NUMBER[1]_SMC_MODE_BAT Byte Access Type **/
#define SMC_SMC_CS_NUMBER[1]_SMC_MODE_BAT		(1 << 8)

#define SMC_SMC_CS_NUMBER[1]_SMC_MODE_EXNW_MODE_SHIFT		4
#define SMC_SMC_CS_NUMBER[1]_SMC_MODE_EXNW_MODE_MASK		0x03
/** @defgroup smc_smc_cs_number[1]_smc_mode_exnw_mode EXNWMODE NWAIT Mode
@{*/
/**@}*/

/** SMC_SMC_CS_NUMBER[1]_SMC_MODE_WRITE_MODE Write Mode **/
#define SMC_SMC_CS_NUMBER[1]_SMC_MODE_WRITE_MODE		(1 << 1)
/** SMC_SMC_CS_NUMBER[1]_SMC_MODE_READ_MODE Read Mode **/
#define SMC_SMC_CS_NUMBER[1]_SMC_MODE_READ_MODE		(1 << 0)

/**@}*/

/** @defgroup smc_smc_cs_number[2]_smc_setup SMCCSNUMBER[2]SMCSETUP SMC Setup Register
@{*/


#define SMC_SMC_CS_NUMBER[2]_SMC_SETUP_NCS_RD_SETUP_SHIFT		24
#define SMC_SMC_CS_NUMBER[2]_SMC_SETUP_NCS_RD_SETUP_MASK		0x3f
/** @defgroup smc_smc_cs_number[2]_smc_setup_ncs_rd_setup NCSRDSETUP NCS Setup Length in READ Access
@{*/
/**@}*/


#define SMC_SMC_CS_NUMBER[2]_SMC_SETUP_NRD_SETUP_SHIFT		16
#define SMC_SMC_CS_NUMBER[2]_SMC_SETUP_NRD_SETUP_MASK		0x3f
/** @defgroup smc_smc_cs_number[2]_smc_setup_nrd_setup NRDSETUP NRD Setup Length
@{*/
/**@}*/


#define SMC_SMC_CS_NUMBER[2]_SMC_SETUP_NCS_WR_SETUP_SHIFT		8
#define SMC_SMC_CS_NUMBER[2]_SMC_SETUP_NCS_WR_SETUP_MASK		0x3f
/** @defgroup smc_smc_cs_number[2]_smc_setup_ncs_wr_setup NCSWRSETUP NCS Setup Length in WRITE Access
@{*/
/**@}*/


#define SMC_SMC_CS_NUMBER[2]_SMC_SETUP_NWE_SETUP_SHIFT		0
#define SMC_SMC_CS_NUMBER[2]_SMC_SETUP_NWE_SETUP_MASK		0x3f
/** @defgroup smc_smc_cs_number[2]_smc_setup_nwe_setup NWESETUP NWE Setup Length
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_smc_cs_number[2]_smc_pulse SMCCSNUMBER[2]SMCPULSE SMC Pulse Register
@{*/


#define SMC_SMC_CS_NUMBER[2]_SMC_PULSE_NCS_RD_PULSE_SHIFT		24
#define SMC_SMC_CS_NUMBER[2]_SMC_PULSE_NCS_RD_PULSE_MASK		0x7f
/** @defgroup smc_smc_cs_number[2]_smc_pulse_ncs_rd_pulse NCSRDPULSE NCS Pulse Length in READ Access
@{*/
/**@}*/


#define SMC_SMC_CS_NUMBER[2]_SMC_PULSE_NRD_PULSE_SHIFT		16
#define SMC_SMC_CS_NUMBER[2]_SMC_PULSE_NRD_PULSE_MASK		0x7f
/** @defgroup smc_smc_cs_number[2]_smc_pulse_nrd_pulse NRDPULSE NRD Pulse Length
@{*/
/**@}*/


#define SMC_SMC_CS_NUMBER[2]_SMC_PULSE_NCS_WR_PULSE_SHIFT		8
#define SMC_SMC_CS_NUMBER[2]_SMC_PULSE_NCS_WR_PULSE_MASK		0x7f
/** @defgroup smc_smc_cs_number[2]_smc_pulse_ncs_wr_pulse NCSWRPULSE NCS Pulse Length in WRITE Access
@{*/
/**@}*/


#define SMC_SMC_CS_NUMBER[2]_SMC_PULSE_NWE_PULSE_SHIFT		0
#define SMC_SMC_CS_NUMBER[2]_SMC_PULSE_NWE_PULSE_MASK		0x7f
/** @defgroup smc_smc_cs_number[2]_smc_pulse_nwe_pulse NWEPULSE NWE Pulse Length
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_smc_cs_number[2]_smc_cycle SMCCSNUMBER[2]SMCCYCLE SMC Cycle Register
@{*/


#define SMC_SMC_CS_NUMBER[2]_SMC_CYCLE_NRD_CYCLE_SHIFT		16
#define SMC_SMC_CS_NUMBER[2]_SMC_CYCLE_NRD_CYCLE_MASK		0x1ff
/** @defgroup smc_smc_cs_number[2]_smc_cycle_nrd_cycle NRDCYCLE Total Read Cycle Length
@{*/
/**@}*/


#define SMC_SMC_CS_NUMBER[2]_SMC_CYCLE_NWE_CYCLE_SHIFT		0
#define SMC_SMC_CS_NUMBER[2]_SMC_CYCLE_NWE_CYCLE_MASK		0x1ff
/** @defgroup smc_smc_cs_number[2]_smc_cycle_nwe_cycle NWECYCLE Total Write Cycle Length
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_smc_cs_number[2]_smc_mode SMCCSNUMBER[2]SMCMODE SMC Mode Register
@{*/


#define SMC_SMC_CS_NUMBER[2]_SMC_MODE_PS_SHIFT		28
#define SMC_SMC_CS_NUMBER[2]_SMC_MODE_PS_MASK		0x03
/** @defgroup smc_smc_cs_number[2]_smc_mode_ps PS Page Size
@{*/
/**@}*/

/** SMC_SMC_CS_NUMBER[2]_SMC_MODE_PMEN Page Mode Enabled **/
#define SMC_SMC_CS_NUMBER[2]_SMC_MODE_PMEN		(1 << 24)
/** SMC_SMC_CS_NUMBER[2]_SMC_MODE_TDF_MODE TDF Optimization **/
#define SMC_SMC_CS_NUMBER[2]_SMC_MODE_TDF_MODE		(1 << 20)

#define SMC_SMC_CS_NUMBER[2]_SMC_MODE_TDF_CYCLES_SHIFT		16
#define SMC_SMC_CS_NUMBER[2]_SMC_MODE_TDF_CYCLES_MASK		0x0f
/** @defgroup smc_smc_cs_number[2]_smc_mode_tdf_cycles TDFCYCLES Data Float Time
@{*/
/**@}*/

/** SMC_SMC_CS_NUMBER[2]_SMC_MODE_DBW Data Bus Width **/
#define SMC_SMC_CS_NUMBER[2]_SMC_MODE_DBW		(1 << 12)
/** SMC_SMC_CS_NUMBER[2]_SMC_MODE_BAT Byte Access Type **/
#define SMC_SMC_CS_NUMBER[2]_SMC_MODE_BAT		(1 << 8)

#define SMC_SMC_CS_NUMBER[2]_SMC_MODE_EXNW_MODE_SHIFT		4
#define SMC_SMC_CS_NUMBER[2]_SMC_MODE_EXNW_MODE_MASK		0x03
/** @defgroup smc_smc_cs_number[2]_smc_mode_exnw_mode EXNWMODE NWAIT Mode
@{*/
/**@}*/

/** SMC_SMC_CS_NUMBER[2]_SMC_MODE_WRITE_MODE Write Mode **/
#define SMC_SMC_CS_NUMBER[2]_SMC_MODE_WRITE_MODE		(1 << 1)
/** SMC_SMC_CS_NUMBER[2]_SMC_MODE_READ_MODE Read Mode **/
#define SMC_SMC_CS_NUMBER[2]_SMC_MODE_READ_MODE		(1 << 0)

/**@}*/

/** @defgroup smc_smc_cs_number[3]_smc_setup SMCCSNUMBER[3]SMCSETUP SMC Setup Register
@{*/


#define SMC_SMC_CS_NUMBER[3]_SMC_SETUP_NCS_RD_SETUP_SHIFT		24
#define SMC_SMC_CS_NUMBER[3]_SMC_SETUP_NCS_RD_SETUP_MASK		0x3f
/** @defgroup smc_smc_cs_number[3]_smc_setup_ncs_rd_setup NCSRDSETUP NCS Setup Length in READ Access
@{*/
/**@}*/


#define SMC_SMC_CS_NUMBER[3]_SMC_SETUP_NRD_SETUP_SHIFT		16
#define SMC_SMC_CS_NUMBER[3]_SMC_SETUP_NRD_SETUP_MASK		0x3f
/** @defgroup smc_smc_cs_number[3]_smc_setup_nrd_setup NRDSETUP NRD Setup Length
@{*/
/**@}*/


#define SMC_SMC_CS_NUMBER[3]_SMC_SETUP_NCS_WR_SETUP_SHIFT		8
#define SMC_SMC_CS_NUMBER[3]_SMC_SETUP_NCS_WR_SETUP_MASK		0x3f
/** @defgroup smc_smc_cs_number[3]_smc_setup_ncs_wr_setup NCSWRSETUP NCS Setup Length in WRITE Access
@{*/
/**@}*/


#define SMC_SMC_CS_NUMBER[3]_SMC_SETUP_NWE_SETUP_SHIFT		0
#define SMC_SMC_CS_NUMBER[3]_SMC_SETUP_NWE_SETUP_MASK		0x3f
/** @defgroup smc_smc_cs_number[3]_smc_setup_nwe_setup NWESETUP NWE Setup Length
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_smc_cs_number[3]_smc_pulse SMCCSNUMBER[3]SMCPULSE SMC Pulse Register
@{*/


#define SMC_SMC_CS_NUMBER[3]_SMC_PULSE_NCS_RD_PULSE_SHIFT		24
#define SMC_SMC_CS_NUMBER[3]_SMC_PULSE_NCS_RD_PULSE_MASK		0x7f
/** @defgroup smc_smc_cs_number[3]_smc_pulse_ncs_rd_pulse NCSRDPULSE NCS Pulse Length in READ Access
@{*/
/**@}*/


#define SMC_SMC_CS_NUMBER[3]_SMC_PULSE_NRD_PULSE_SHIFT		16
#define SMC_SMC_CS_NUMBER[3]_SMC_PULSE_NRD_PULSE_MASK		0x7f
/** @defgroup smc_smc_cs_number[3]_smc_pulse_nrd_pulse NRDPULSE NRD Pulse Length
@{*/
/**@}*/


#define SMC_SMC_CS_NUMBER[3]_SMC_PULSE_NCS_WR_PULSE_SHIFT		8
#define SMC_SMC_CS_NUMBER[3]_SMC_PULSE_NCS_WR_PULSE_MASK		0x7f
/** @defgroup smc_smc_cs_number[3]_smc_pulse_ncs_wr_pulse NCSWRPULSE NCS Pulse Length in WRITE Access
@{*/
/**@}*/


#define SMC_SMC_CS_NUMBER[3]_SMC_PULSE_NWE_PULSE_SHIFT		0
#define SMC_SMC_CS_NUMBER[3]_SMC_PULSE_NWE_PULSE_MASK		0x7f
/** @defgroup smc_smc_cs_number[3]_smc_pulse_nwe_pulse NWEPULSE NWE Pulse Length
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_smc_cs_number[3]_smc_cycle SMCCSNUMBER[3]SMCCYCLE SMC Cycle Register
@{*/


#define SMC_SMC_CS_NUMBER[3]_SMC_CYCLE_NRD_CYCLE_SHIFT		16
#define SMC_SMC_CS_NUMBER[3]_SMC_CYCLE_NRD_CYCLE_MASK		0x1ff
/** @defgroup smc_smc_cs_number[3]_smc_cycle_nrd_cycle NRDCYCLE Total Read Cycle Length
@{*/
/**@}*/


#define SMC_SMC_CS_NUMBER[3]_SMC_CYCLE_NWE_CYCLE_SHIFT		0
#define SMC_SMC_CS_NUMBER[3]_SMC_CYCLE_NWE_CYCLE_MASK		0x1ff
/** @defgroup smc_smc_cs_number[3]_smc_cycle_nwe_cycle NWECYCLE Total Write Cycle Length
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_smc_cs_number[3]_smc_mode SMCCSNUMBER[3]SMCMODE SMC Mode Register
@{*/


#define SMC_SMC_CS_NUMBER[3]_SMC_MODE_PS_SHIFT		28
#define SMC_SMC_CS_NUMBER[3]_SMC_MODE_PS_MASK		0x03
/** @defgroup smc_smc_cs_number[3]_smc_mode_ps PS Page Size
@{*/
/**@}*/

/** SMC_SMC_CS_NUMBER[3]_SMC_MODE_PMEN Page Mode Enabled **/
#define SMC_SMC_CS_NUMBER[3]_SMC_MODE_PMEN		(1 << 24)
/** SMC_SMC_CS_NUMBER[3]_SMC_MODE_TDF_MODE TDF Optimization **/
#define SMC_SMC_CS_NUMBER[3]_SMC_MODE_TDF_MODE		(1 << 20)

#define SMC_SMC_CS_NUMBER[3]_SMC_MODE_TDF_CYCLES_SHIFT		16
#define SMC_SMC_CS_NUMBER[3]_SMC_MODE_TDF_CYCLES_MASK		0x0f
/** @defgroup smc_smc_cs_number[3]_smc_mode_tdf_cycles TDFCYCLES Data Float Time
@{*/
/**@}*/

/** SMC_SMC_CS_NUMBER[3]_SMC_MODE_DBW Data Bus Width **/
#define SMC_SMC_CS_NUMBER[3]_SMC_MODE_DBW		(1 << 12)
/** SMC_SMC_CS_NUMBER[3]_SMC_MODE_BAT Byte Access Type **/
#define SMC_SMC_CS_NUMBER[3]_SMC_MODE_BAT		(1 << 8)

#define SMC_SMC_CS_NUMBER[3]_SMC_MODE_EXNW_MODE_SHIFT		4
#define SMC_SMC_CS_NUMBER[3]_SMC_MODE_EXNW_MODE_MASK		0x03
/** @defgroup smc_smc_cs_number[3]_smc_mode_exnw_mode EXNWMODE NWAIT Mode
@{*/
/**@}*/

/** SMC_SMC_CS_NUMBER[3]_SMC_MODE_WRITE_MODE Write Mode **/
#define SMC_SMC_CS_NUMBER[3]_SMC_MODE_WRITE_MODE		(1 << 1)
/** SMC_SMC_CS_NUMBER[3]_SMC_MODE_READ_MODE Read Mode **/
#define SMC_SMC_CS_NUMBER[3]_SMC_MODE_READ_MODE		(1 << 0)

/**@}*/

/** @defgroup smc_smc_ocms SMCOCMS SMC Off-Chip Memory Scrambling Register
@{*/

/** SMC_SMC_OCMS_CS3SE Chip Select (x = 0 to 3) Scrambling Enable **/
#define SMC_SMC_OCMS_CS3SE		(1 << 11)
/** SMC_SMC_OCMS_CS2SE Chip Select (x = 0 to 3) Scrambling Enable **/
#define SMC_SMC_OCMS_CS2SE		(1 << 10)
/** SMC_SMC_OCMS_CS1SE Chip Select (x = 0 to 3) Scrambling Enable **/
#define SMC_SMC_OCMS_CS1SE		(1 << 9)
/** SMC_SMC_OCMS_CS0SE Chip Select (x = 0 to 3) Scrambling Enable **/
#define SMC_SMC_OCMS_CS0SE		(1 << 8)
/** SMC_SMC_OCMS_SMSE Static Memory Controller Scrambling Enable **/
#define SMC_SMC_OCMS_SMSE		(1 << 0)

/**@}*/

/** @defgroup smc_smc_key1 SMCKEY1 SMC Off-Chip Memory Scrambling KEY1 Register
@{*/


#define SMC_SMC_KEY1_KEY1_SHIFT		0
#define SMC_SMC_KEY1_KEY1_MASK		0xffffffff
/** @defgroup smc_smc_key1_key1 KEY1 Off-Chip Memory Scrambling (OCMS) Key Part 1
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_smc_key2 SMCKEY2 SMC Off-Chip Memory Scrambling KEY2 Register
@{*/


#define SMC_SMC_KEY2_KEY2_SHIFT		0
#define SMC_SMC_KEY2_KEY2_MASK		0xffffffff
/** @defgroup smc_smc_key2_key2 KEY2 Off-Chip Memory Scrambling (OCMS) Key Part 2
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_smc_wpmr SMCWPMR SMC Write Protection Mode Register
@{*/


#define SMC_SMC_WPMR_WPKEY_SHIFT		8
#define SMC_SMC_WPMR_WPKEY_MASK		0xffffff
/** @defgroup smc_smc_wpmr_wpkey WPKEY Write Protection Key
@{*/
/**@}*/

/** SMC_SMC_WPMR_WPEN Write Protect Enable **/
#define SMC_SMC_WPMR_WPEN		(1 << 0)

/**@}*/

/** @defgroup smc_smc_wpsr SMCWPSR SMC Write Protection Status Register
@{*/


#define SMC_SMC_WPSR_WPVSRC_SHIFT		8
#define SMC_SMC_WPSR_WPVSRC_MASK		0xffff
/** @defgroup smc_smc_wpsr_wpvsrc WPVSRC Write Protection Violation Source
@{*/
/**@}*/

/** SMC_SMC_WPSR_WPVS Write Protection Violation Status **/
#define SMC_SMC_WPSR_WPVS		(1 << 0)

/**@}*/
