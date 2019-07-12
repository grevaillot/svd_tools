#pragma once 

/* --- MPU: Memory Protection Unit ---------------------------------- */

/** @defgroup mpu_registers Memory Protection Unit Register
@{*/

/** MPU_TYPE MPU Type Register **/
#define MPU_TYPE			MMIO32(MPU_BASE + 0x00)
/** MPU_CTRL MPU Control Register **/
#define MPU_CTRL			MMIO32(MPU_BASE + 0x04)
/** MPU_RNR MPU Region Number Register **/
#define MPU_RNR			MMIO32(MPU_BASE + 0x08)
/** MPU_RBAR MPU Region Base Address Register **/
#define MPU_RBAR			MMIO32(MPU_BASE + 0x0c)
/** MPU_RASR MPU Region Attribute and Size Register **/
#define MPU_RASR			MMIO32(MPU_BASE + 0x10)
/** MPU_RBAR_A1 MPU Alias 1 Region Base Address Register **/
#define MPU_RBAR_A1			MMIO32(MPU_BASE + 0x14)
/** MPU_RASR_A1 MPU Alias 1 Region Attribute and Size Register **/
#define MPU_RASR_A1			MMIO32(MPU_BASE + 0x18)
/** MPU_RBAR_A2 MPU Alias 2 Region Base Address Register **/
#define MPU_RBAR_A2			MMIO32(MPU_BASE + 0x1c)
/** MPU_RASR_A2 MPU Alias 2 Region Attribute and Size Register **/
#define MPU_RASR_A2			MMIO32(MPU_BASE + 0x20)
/** MPU_RBAR_A3 MPU Alias 3 Region Base Address Register **/
#define MPU_RBAR_A3			MMIO32(MPU_BASE + 0x24)
/** MPU_RASR_A3 MPU Alias 3 Region Attribute and Size Register **/
#define MPU_RASR_A3			MMIO32(MPU_BASE + 0x28)

/**@}*/


/** @defgroup mpu_type TYPE MPU Type Register
@{*/


#define MPU_TYPE_IREGION_SHIFT		16
#define MPU_TYPE_IREGION_MASK		0xff
/** @defgroup mpu_type_iregion IREGION Number of Instruction Regions
@{*/
/**@}*/


#define MPU_TYPE_DREGION_SHIFT		8
#define MPU_TYPE_DREGION_MASK		0xff
/** @defgroup mpu_type_dregion DREGION Number of Data Regions
@{*/
/**@}*/

/** MPU_TYPE_SEPARATE Separate instruction and Data Memory MapsRegions **/
#define MPU_TYPE_SEPARATE		(1 << 0)

/**@}*/

/** @defgroup mpu_ctrl CTRL MPU Control Register
@{*/

/** MPU_CTRL_PRIVDEFENA Enables privileged software access to default memory map **/
#define MPU_CTRL_PRIVDEFENA		(1 << 2)
/** MPU_CTRL_HFNMIENA Enable Hard Fault and NMI handlers **/
#define MPU_CTRL_HFNMIENA		(1 << 1)
/** MPU_CTRL_ENABLE MPU Enable **/
#define MPU_CTRL_ENABLE		(1 << 0)

/**@}*/

/** @defgroup mpu_rnr RNR MPU Region Number Register
@{*/


#define MPU_RNR_REGION_SHIFT		0
#define MPU_RNR_REGION_MASK		0xff
/** @defgroup mpu_rnr_region REGION Region referenced by RBAR and RASR
@{*/
/**@}*/


/**@}*/

/** @defgroup mpu_rbar RBAR MPU Region Base Address Register
@{*/


#define MPU_RBAR_ADDR_SHIFT		5
#define MPU_RBAR_ADDR_MASK		0x7ffffff
/** @defgroup mpu_rbar_addr ADDR Region base address
@{*/
/**@}*/

/** MPU_RBAR_VALID Region number valid **/
#define MPU_RBAR_VALID		(1 << 4)

#define MPU_RBAR_REGION_SHIFT		0
#define MPU_RBAR_REGION_MASK		0x0f
/** @defgroup mpu_rbar_region REGION Region number
@{*/
/**@}*/


/**@}*/

/** @defgroup mpu_rasr RASR MPU Region Attribute and Size Register
@{*/

/** MPU_RASR_XN Execute Never Attribute **/
#define MPU_RASR_XN		(1 << 28)

#define MPU_RASR_AP_SHIFT		24
#define MPU_RASR_AP_MASK		0x07
/** @defgroup mpu_rasr_ap AP Access Permission
@{*/
/**@}*/


#define MPU_RASR_TEX_SHIFT		19
#define MPU_RASR_TEX_MASK		0x07
/** @defgroup mpu_rasr_tex TEX TEX bit
@{*/
/**@}*/

/** MPU_RASR_S Shareable bit **/
#define MPU_RASR_S		(1 << 18)
/** MPU_RASR_C Cacheable bit **/
#define MPU_RASR_C		(1 << 17)
/** MPU_RASR_B Bufferable bit **/
#define MPU_RASR_B		(1 << 16)

#define MPU_RASR_SRD_SHIFT		8
#define MPU_RASR_SRD_MASK		0xff
/** @defgroup mpu_rasr_srd SRD Sub-region disable
@{*/
/**@}*/

/** MPU_RASR_SIZE Region Size **/
#define MPU_RASR_SIZE		(1 << 1)
/** MPU_RASR_ENABLE Region Enable **/
#define MPU_RASR_ENABLE		(1 << 0)

/**@}*/

/** @defgroup mpu_rbar_a1 RBARA1 MPU Alias 1 Region Base Address Register
@{*/


#define MPU_RBAR_A1_ADDR_SHIFT		5
#define MPU_RBAR_A1_ADDR_MASK		0x7ffffff
/** @defgroup mpu_rbar_a1_addr ADDR Region base address
@{*/
/**@}*/

/** MPU_RBAR_A1_VALID Region number valid **/
#define MPU_RBAR_A1_VALID		(1 << 4)

#define MPU_RBAR_A1_REGION_SHIFT		0
#define MPU_RBAR_A1_REGION_MASK		0x0f
/** @defgroup mpu_rbar_a1_region REGION Region number
@{*/
/**@}*/


/**@}*/

/** @defgroup mpu_rasr_a1 RASRA1 MPU Alias 1 Region Attribute and Size Register
@{*/

/** MPU_RASR_A1_XN Execute Never Attribute **/
#define MPU_RASR_A1_XN		(1 << 28)

#define MPU_RASR_A1_AP_SHIFT		24
#define MPU_RASR_A1_AP_MASK		0x07
/** @defgroup mpu_rasr_a1_ap AP Access Permission
@{*/
/**@}*/


#define MPU_RASR_A1_TEX_SHIFT		19
#define MPU_RASR_A1_TEX_MASK		0x07
/** @defgroup mpu_rasr_a1_tex TEX TEX bit
@{*/
/**@}*/

/** MPU_RASR_A1_S Shareable bit **/
#define MPU_RASR_A1_S		(1 << 18)
/** MPU_RASR_A1_C Cacheable bit **/
#define MPU_RASR_A1_C		(1 << 17)
/** MPU_RASR_A1_B Bufferable bit **/
#define MPU_RASR_A1_B		(1 << 16)

#define MPU_RASR_A1_SRD_SHIFT		8
#define MPU_RASR_A1_SRD_MASK		0xff
/** @defgroup mpu_rasr_a1_srd SRD Sub-region disable
@{*/
/**@}*/

/** MPU_RASR_A1_SIZE Region Size **/
#define MPU_RASR_A1_SIZE		(1 << 1)
/** MPU_RASR_A1_ENABLE Region Enable **/
#define MPU_RASR_A1_ENABLE		(1 << 0)

/**@}*/

/** @defgroup mpu_rbar_a2 RBARA2 MPU Alias 2 Region Base Address Register
@{*/


#define MPU_RBAR_A2_ADDR_SHIFT		5
#define MPU_RBAR_A2_ADDR_MASK		0x7ffffff
/** @defgroup mpu_rbar_a2_addr ADDR Region base address
@{*/
/**@}*/

/** MPU_RBAR_A2_VALID Region number valid **/
#define MPU_RBAR_A2_VALID		(1 << 4)

#define MPU_RBAR_A2_REGION_SHIFT		0
#define MPU_RBAR_A2_REGION_MASK		0x0f
/** @defgroup mpu_rbar_a2_region REGION Region number
@{*/
/**@}*/


/**@}*/

/** @defgroup mpu_rasr_a2 RASRA2 MPU Alias 2 Region Attribute and Size Register
@{*/

/** MPU_RASR_A2_XN Execute Never Attribute **/
#define MPU_RASR_A2_XN		(1 << 28)

#define MPU_RASR_A2_AP_SHIFT		24
#define MPU_RASR_A2_AP_MASK		0x07
/** @defgroup mpu_rasr_a2_ap AP Access Permission
@{*/
/**@}*/


#define MPU_RASR_A2_TEX_SHIFT		19
#define MPU_RASR_A2_TEX_MASK		0x07
/** @defgroup mpu_rasr_a2_tex TEX TEX bit
@{*/
/**@}*/

/** MPU_RASR_A2_S Shareable bit **/
#define MPU_RASR_A2_S		(1 << 18)
/** MPU_RASR_A2_C Cacheable bit **/
#define MPU_RASR_A2_C		(1 << 17)
/** MPU_RASR_A2_B Bufferable bit **/
#define MPU_RASR_A2_B		(1 << 16)

#define MPU_RASR_A2_SRD_SHIFT		8
#define MPU_RASR_A2_SRD_MASK		0xff
/** @defgroup mpu_rasr_a2_srd SRD Sub-region disable
@{*/
/**@}*/

/** MPU_RASR_A2_SIZE Region Size **/
#define MPU_RASR_A2_SIZE		(1 << 1)
/** MPU_RASR_A2_ENABLE Region Enable **/
#define MPU_RASR_A2_ENABLE		(1 << 0)

/**@}*/

/** @defgroup mpu_rbar_a3 RBARA3 MPU Alias 3 Region Base Address Register
@{*/


#define MPU_RBAR_A3_ADDR_SHIFT		5
#define MPU_RBAR_A3_ADDR_MASK		0x7ffffff
/** @defgroup mpu_rbar_a3_addr ADDR Region base address
@{*/
/**@}*/

/** MPU_RBAR_A3_VALID Region number valid **/
#define MPU_RBAR_A3_VALID		(1 << 4)

#define MPU_RBAR_A3_REGION_SHIFT		0
#define MPU_RBAR_A3_REGION_MASK		0x0f
/** @defgroup mpu_rbar_a3_region REGION Region number
@{*/
/**@}*/


/**@}*/

/** @defgroup mpu_rasr_a3 RASRA3 MPU Alias 3 Region Attribute and Size Register
@{*/

/** MPU_RASR_A3_XN Execute Never Attribute **/
#define MPU_RASR_A3_XN		(1 << 28)

#define MPU_RASR_A3_AP_SHIFT		24
#define MPU_RASR_A3_AP_MASK		0x07
/** @defgroup mpu_rasr_a3_ap AP Access Permission
@{*/
/**@}*/


#define MPU_RASR_A3_TEX_SHIFT		19
#define MPU_RASR_A3_TEX_MASK		0x07
/** @defgroup mpu_rasr_a3_tex TEX TEX bit
@{*/
/**@}*/

/** MPU_RASR_A3_S Shareable bit **/
#define MPU_RASR_A3_S		(1 << 18)
/** MPU_RASR_A3_C Cacheable bit **/
#define MPU_RASR_A3_C		(1 << 17)
/** MPU_RASR_A3_B Bufferable bit **/
#define MPU_RASR_A3_B		(1 << 16)

#define MPU_RASR_A3_SRD_SHIFT		8
#define MPU_RASR_A3_SRD_MASK		0xff
/** @defgroup mpu_rasr_a3_srd SRD Sub-region disable
@{*/
/**@}*/

/** MPU_RASR_A3_SIZE Region Size **/
#define MPU_RASR_A3_SIZE		(1 << 1)
/** MPU_RASR_A3_ENABLE Region Enable **/
#define MPU_RASR_A3_ENABLE		(1 << 0)

/**@}*/
