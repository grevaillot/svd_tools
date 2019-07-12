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
/** @defgroup mpu_type_iregion IREGION Indicates the number of supported MPU data regions.
@{*/
/**@}*/


#define MPU_TYPE_DREGION_SHIFT		8
#define MPU_TYPE_DREGION_MASK		0xff
/** @defgroup mpu_type_dregion DREGION Indicates the number of supported MPU instruction regions.
@{*/
/**@}*/

/** MPU_TYPE_SEPARATE Indicates support for unified or separate instruction and date memory maps. **/
#define MPU_TYPE_SEPARATE		(1 << 0)

/**@}*/

/** @defgroup mpu_ctrl CTRL MPU Control Register
@{*/

/** MPU_CTRL_PRIVDEFENA Enables privileged software access to the default memory map. **/
#define MPU_CTRL_PRIVDEFENA		(1 << 2)
/** MPU_CTRL_HFNMIENA Enables the operation of MPU during hard fault, NMI, and FAULTMASK handlers. **/
#define MPU_CTRL_HFNMIENA		(1 << 1)
/** MPU_CTRL_ENABLE Enables the MPU **/
#define MPU_CTRL_ENABLE		(1 << 0)

/**@}*/

/** @defgroup mpu_rnr RNR MPU Region Number Register
@{*/


#define MPU_RNR_REGION_SHIFT		0
#define MPU_RNR_REGION_MASK		0xff
/** @defgroup mpu_rnr_region REGION Indicates the MPU region referenced by the MPU_RBAR and MPU_RASR registers.
@{*/
/**@}*/


/**@}*/

/** @defgroup mpu_rbar RBAR MPU Region Base Address Register
@{*/


#define MPU_RBAR_ADDR_SHIFT		5
#define MPU_RBAR_ADDR_MASK		0x7ffffff
/** @defgroup mpu_rbar_addr ADDR Region base address field.
@{*/
/**@}*/

/** MPU_RBAR_VALID MPU Region Number valid bit. **/
#define MPU_RBAR_VALID		(1 << 4)

#define MPU_RBAR_REGION_SHIFT		0
#define MPU_RBAR_REGION_MASK		0x0f
/** @defgroup mpu_rbar_region REGION MPU region field.
@{*/
/**@}*/


/**@}*/

/** @defgroup mpu_rasr RASR MPU Region Attribute and Size Register
@{*/

/** MPU_RASR_XN Instruction access disable bit. **/
#define MPU_RASR_XN		(1 << 28)

#define MPU_RASR_AP_SHIFT		24
#define MPU_RASR_AP_MASK		0x07
/** @defgroup mpu_rasr_ap AP Access permission field.
@{*/
/**@}*/


#define MPU_RASR_TEX_SHIFT		19
#define MPU_RASR_TEX_MASK		0x07
/** @defgroup mpu_rasr_tex TEX MPU access permission attributes.
@{*/
/**@}*/

/** MPU_RASR_S Shareable bit. **/
#define MPU_RASR_S		(1 << 18)
/** MPU_RASR_C MPU access permission attributes. **/
#define MPU_RASR_C		(1 << 17)
/** MPU_RASR_B MPU access permission attributes. **/
#define MPU_RASR_B		(1 << 16)

#define MPU_RASR_SRD_SHIFT		8
#define MPU_RASR_SRD_MASK		0xff
/** @defgroup mpu_rasr_srd SRD Subregion disable bits.
@{*/
/**@}*/


#define MPU_RASR_SIZE_SHIFT		1
#define MPU_RASR_SIZE_MASK		0x1f
/** @defgroup mpu_rasr_size SIZE Specifies the size of the MPU protection region.
@{*/
/**@}*/

/** MPU_RASR_ENABLE Region enable bit. **/
#define MPU_RASR_ENABLE		(1 << 0)

/**@}*/

/** @defgroup mpu_rbar_a1 RBARA1 MPU Alias 1 Region Base Address Register
@{*/


/**@}*/

/** @defgroup mpu_rasr_a1 RASRA1 MPU Alias 1 Region Attribute and Size Register
@{*/


/**@}*/

/** @defgroup mpu_rbar_a2 RBARA2 MPU Alias 2 Region Base Address Register
@{*/


/**@}*/

/** @defgroup mpu_rasr_a2 RASRA2 MPU Alias 2 Region Attribute and Size Register
@{*/


/**@}*/

/** @defgroup mpu_rbar_a3 RBARA3 MPU Alias 3 Region Base Address Register
@{*/


/**@}*/

/** @defgroup mpu_rasr_a3 RASRA3 MPU Alias 3 Region Attribute and Size Register
@{*/


/**@}*/
