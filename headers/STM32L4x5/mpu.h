#pragma once 

/* --- MPU: Memory protection unit ---------------------------------- */

/** @defgroup mpu_registers Memory protection unit Register
@{*/

/** MPU_MPU_TYPER MPU type register **/
#define MPU_MPU_TYPER			MMIO32(MPU_BASE + 0x00)
/** MPU_MPU_CTRL MPU control register **/
#define MPU_MPU_CTRL			MMIO32(MPU_BASE + 0x04)
/** MPU_MPU_RNR MPU region number register **/
#define MPU_MPU_RNR			MMIO32(MPU_BASE + 0x08)
/** MPU_MPU_RBAR MPU region base address register **/
#define MPU_MPU_RBAR			MMIO32(MPU_BASE + 0x0c)
/** MPU_MPU_RASR MPU region attribute and size register **/
#define MPU_MPU_RASR			MMIO32(MPU_BASE + 0x10)

/**@}*/


/** @defgroup mpu_mpu_typer MPUTYPER MPU type register
@{*/


#define MPU_MPU_TYPER_IREGION_SHIFT		16
#define MPU_MPU_TYPER_IREGION_MASK		0xff
/** @defgroup mpu_mpu_typer_iregion IREGION Number of MPU instruction regions
@{*/
/**@}*/


#define MPU_MPU_TYPER_DREGION_SHIFT		8
#define MPU_MPU_TYPER_DREGION_MASK		0xff
/** @defgroup mpu_mpu_typer_dregion DREGION Number of MPU data regions
@{*/
/**@}*/

/** MPU_MPU_TYPER_SEPARATE Separate flag **/
#define MPU_MPU_TYPER_SEPARATE		(1 << 0)

/**@}*/

/** @defgroup mpu_mpu_ctrl MPUCTRL MPU control register
@{*/

/** MPU_MPU_CTRL_PRIVDEFENA Enable priviliged software access to default memory map **/
#define MPU_MPU_CTRL_PRIVDEFENA		(1 << 2)
/** MPU_MPU_CTRL_HFNMIENA Enables the operation of MPU during hard fault **/
#define MPU_MPU_CTRL_HFNMIENA		(1 << 1)
/** MPU_MPU_CTRL_ENABLE Enables the MPU **/
#define MPU_MPU_CTRL_ENABLE		(1 << 0)

/**@}*/

/** @defgroup mpu_mpu_rnr MPURNR MPU region number register
@{*/


#define MPU_MPU_RNR_REGION_SHIFT		0
#define MPU_MPU_RNR_REGION_MASK		0xff
/** @defgroup mpu_mpu_rnr_region REGION MPU region
@{*/
/**@}*/


/**@}*/

/** @defgroup mpu_mpu_rbar MPURBAR MPU region base address register
@{*/


#define MPU_MPU_RBAR_ADDR_SHIFT		5
#define MPU_MPU_RBAR_ADDR_MASK		0x7ffffff
/** @defgroup mpu_mpu_rbar_addr ADDR Region base address field
@{*/
/**@}*/

/** MPU_MPU_RBAR_VALID MPU region number valid **/
#define MPU_MPU_RBAR_VALID		(1 << 4)

#define MPU_MPU_RBAR_REGION_SHIFT		0
#define MPU_MPU_RBAR_REGION_MASK		0x0f
/** @defgroup mpu_mpu_rbar_region REGION MPU region field
@{*/
/**@}*/


/**@}*/

/** @defgroup mpu_mpu_rasr MPURASR MPU region attribute and size register
@{*/

/** MPU_MPU_RASR_XN Instruction access disable bit **/
#define MPU_MPU_RASR_XN		(1 << 28)

#define MPU_MPU_RASR_AP_SHIFT		24
#define MPU_MPU_RASR_AP_MASK		0x07
/** @defgroup mpu_mpu_rasr_ap AP Access permission
@{*/
/**@}*/


#define MPU_MPU_RASR_TEX_SHIFT		19
#define MPU_MPU_RASR_TEX_MASK		0x07
/** @defgroup mpu_mpu_rasr_tex TEX memory attribute
@{*/
/**@}*/

/** MPU_MPU_RASR_S Shareable memory attribute **/
#define MPU_MPU_RASR_S		(1 << 18)
/** MPU_MPU_RASR_C memory attribute **/
#define MPU_MPU_RASR_C		(1 << 17)
/** MPU_MPU_RASR_B memory attribute **/
#define MPU_MPU_RASR_B		(1 << 16)

#define MPU_MPU_RASR_SRD_SHIFT		8
#define MPU_MPU_RASR_SRD_MASK		0xff
/** @defgroup mpu_mpu_rasr_srd SRD Subregion disable bits
@{*/
/**@}*/


#define MPU_MPU_RASR_SIZE_SHIFT		1
#define MPU_MPU_RASR_SIZE_MASK		0x1f
/** @defgroup mpu_mpu_rasr_size SIZE Size of the MPU protection region
@{*/
/**@}*/

/** MPU_MPU_RASR_ENABLE Region enable bit. **/
#define MPU_MPU_RASR_ENABLE		(1 << 0)

/**@}*/
