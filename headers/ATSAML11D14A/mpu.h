#pragma once 

/* --- MPU: Memory Protection Unit ---------------------------------- */

/** @defgroup mpu_registers Memory Protection Unit Register
@{*/

/** MPU_MPU_TYPE MPU Type Register **/
#define MPU_MPU_TYPE			MMIO32(MPU_BASE + 0x00)
/** MPU_MPU_CTRL MPU Control Register **/
#define MPU_MPU_CTRL			MMIO32(MPU_BASE + 0x04)
/** MPU_MPU_RNR MPU Region Number Register **/
#define MPU_MPU_RNR			MMIO32(MPU_BASE + 0x08)
/** MPU_MPU_RBAR MPU Region Base Address Register **/
#define MPU_MPU_RBAR			MMIO32(MPU_BASE + 0x0c)
/** MPU_MPU_RLAR MPU Region Limit Address Register **/
#define MPU_MPU_RLAR			MMIO32(MPU_BASE + 0x10)
/** MPU_MPU_MAIR0 MPU Memory Attribute Indirection Register 0 **/
#define MPU_MPU_MAIR0			MMIO32(MPU_BASE + 0x30)
/** MPU_MPU_MAIR1 MPU Memory Attribute Indirection Register 1 **/
#define MPU_MPU_MAIR1			MMIO32(MPU_BASE + 0x34)

/**@}*/


/** @defgroup mpu_mpu_type MPUTYPE MPU Type Register
@{*/


#define MPU_MPU_TYPE_DREGION_SHIFT		8
#define MPU_MPU_TYPE_DREGION_MASK		0xff
/** @defgroup mpu_mpu_type_dregion DREGION Number of MPU data regions
@{*/
/**@}*/

/** MPU_MPU_TYPE_SEPARATE Separate instructions and data address regions **/
#define MPU_MPU_TYPE_SEPARATE		(1 << 0)

/**@}*/

/** @defgroup mpu_mpu_ctrl MPUCTRL MPU Control Register
@{*/

/** MPU_MPU_CTRL_PRIVDEFENA Privileged default enable **/
#define MPU_MPU_CTRL_PRIVDEFENA		(1 << 2)
/** MPU_MPU_CTRL_HFNMIENA HardFault, NMI enable **/
#define MPU_MPU_CTRL_HFNMIENA		(1 << 1)
/** MPU_MPU_CTRL_ENABLE MPU enable **/
#define MPU_MPU_CTRL_ENABLE		(1 << 0)

/**@}*/

/** @defgroup mpu_mpu_rnr MPURNR MPU Region Number Register
@{*/


#define MPU_MPU_RNR_REGION_SHIFT		0
#define MPU_MPU_RNR_REGION_MASK		0xff
/** @defgroup mpu_mpu_rnr_region REGION Selected region number
@{*/
/**@}*/


/**@}*/

/** @defgroup mpu_mpu_rbar MPURBAR MPU Region Base Address Register
@{*/


#define MPU_MPU_RBAR_BASE_SHIFT		5
#define MPU_MPU_RBAR_BASE_MASK		0x7ffffff
/** @defgroup mpu_mpu_rbar_base BASE Base address
@{*/
/**@}*/


#define MPU_MPU_RBAR_SH_SHIFT		3
#define MPU_MPU_RBAR_SH_MASK		0x03
/** @defgroup mpu_mpu_rbar_sh SH Shareability
@{*/
/**@}*/


#define MPU_MPU_RBAR_AP_SHIFT		1
#define MPU_MPU_RBAR_AP_MASK		0x03
/** @defgroup mpu_mpu_rbar_ap AP Access permissions
@{*/
/**@}*/

/** MPU_MPU_RBAR_XN Execute Never **/
#define MPU_MPU_RBAR_XN		(1 << 0)

/**@}*/

/** @defgroup mpu_mpu_rlar MPURLAR MPU Region Limit Address Register
@{*/


#define MPU_MPU_RLAR_LIMIT_SHIFT		5
#define MPU_MPU_RLAR_LIMIT_MASK		0x7ffffff
/** @defgroup mpu_mpu_rlar_limit LIMIT Limit address
@{*/
/**@}*/


#define MPU_MPU_RLAR_AttrInd_SHIFT		1
#define MPU_MPU_RLAR_AttrInd_MASK		0x07
/** @defgroup mpu_mpu_rlar_attrind AttrInd Attribute Index
@{*/
/**@}*/

/** MPU_MPU_RLAR_EN Region enable **/
#define MPU_MPU_RLAR_EN		(1 << 0)

/**@}*/

/** @defgroup mpu_mpu_mair0 MPUMAIR0 MPU Memory Attribute Indirection Register 0
@{*/


#define MPU_MPU_MAIR0_Attr3_SHIFT		24
#define MPU_MPU_MAIR0_Attr3_MASK		0xff
/** @defgroup mpu_mpu_mair0_attr3 Attr3 Attribute of MPU region 3
@{*/
/**@}*/


#define MPU_MPU_MAIR0_Attr2_SHIFT		16
#define MPU_MPU_MAIR0_Attr2_MASK		0xff
/** @defgroup mpu_mpu_mair0_attr2 Attr2 Attribute of MPU region 2
@{*/
/**@}*/


#define MPU_MPU_MAIR0_Attr1_SHIFT		8
#define MPU_MPU_MAIR0_Attr1_MASK		0xff
/** @defgroup mpu_mpu_mair0_attr1 Attr1 Attribute of MPU region 1
@{*/
/**@}*/


#define MPU_MPU_MAIR0_Attr0_SHIFT		0
#define MPU_MPU_MAIR0_Attr0_MASK		0xff
/** @defgroup mpu_mpu_mair0_attr0 Attr0 Attribute of MPU region 0
@{*/
/**@}*/


/**@}*/

/** @defgroup mpu_mpu_mair1 MPUMAIR1 MPU Memory Attribute Indirection Register 1
@{*/


/**@}*/
