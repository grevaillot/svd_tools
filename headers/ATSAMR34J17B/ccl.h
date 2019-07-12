#pragma once 

/* --- CCL: Configurable Custom Logic ------------------------------- */

/** @defgroup ccl_registers Configurable Custom Logic Register
@{*/

/** CCL_CTRL Control **/
#define CCL_CTRL			MMIO32(CCL_BASE + 0x00)
/** CCL_SEQCTRL0 SEQ Control x **/
#define CCL_SEQCTRL0			MMIO32(CCL_BASE + 0x04)
/** CCL_SEQCTRL1 SEQ Control x **/
#define CCL_SEQCTRL1			MMIO32(CCL_BASE + 0x05)
/** CCL_LUTCTRL0 LUT Control x **/
#define CCL_LUTCTRL0			MMIO32(CCL_BASE + 0x08)
/** CCL_LUTCTRL1 LUT Control x **/
#define CCL_LUTCTRL1			MMIO32(CCL_BASE + 0x0c)
/** CCL_LUTCTRL2 LUT Control x **/
#define CCL_LUTCTRL2			MMIO32(CCL_BASE + 0x10)
/** CCL_LUTCTRL3 LUT Control x **/
#define CCL_LUTCTRL3			MMIO32(CCL_BASE + 0x14)

/**@}*/


/** @defgroup ccl_ctrl CTRL Control
@{*/

/** CCL_CTRL_RUNSTDBY Run during Standby **/
#define CCL_CTRL_RUNSTDBY		(1 << 6)
/** CCL_CTRL_ENABLE Enable **/
#define CCL_CTRL_ENABLE		(1 << 1)
/** CCL_CTRL_SWRST Software Reset **/
#define CCL_CTRL_SWRST		(1 << 0)

/**@}*/

/** @defgroup ccl_seqctrl0 SEQCTRL0 SEQ Control x
@{*/


#define CCL_SEQCTRL0_SEQSEL_SHIFT		0
#define CCL_SEQCTRL0_SEQSEL_MASK		0x0f
/** @defgroup ccl_seqctrl0_seqsel SEQSEL Sequential Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup ccl_seqctrl1 SEQCTRL1 SEQ Control x
@{*/


#define CCL_SEQCTRL1_SEQSEL_SHIFT		0
#define CCL_SEQCTRL1_SEQSEL_MASK		0x0f
/** @defgroup ccl_seqctrl1_seqsel SEQSEL Sequential Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup ccl_lutctrl0 LUTCTRL0 LUT Control x
@{*/


#define CCL_LUTCTRL0_TRUTH_SHIFT		24
#define CCL_LUTCTRL0_TRUTH_MASK		0xff
/** @defgroup ccl_lutctrl0_truth TRUTH Truth Value
@{*/
/**@}*/

/** CCL_LUTCTRL0_LUTEO Event Output Enable **/
#define CCL_LUTCTRL0_LUTEO		(1 << 22)
/** CCL_LUTCTRL0_LUTEI Event Input Enable **/
#define CCL_LUTCTRL0_LUTEI		(1 << 21)
/** CCL_LUTCTRL0_INVEI Input Event Invert **/
#define CCL_LUTCTRL0_INVEI		(1 << 20)

#define CCL_LUTCTRL0_INSEL2_SHIFT		16
#define CCL_LUTCTRL0_INSEL2_MASK		0x0f
/** @defgroup ccl_lutctrl0_insel2 INSEL2 Input Selection 2
@{*/
/**@}*/


#define CCL_LUTCTRL0_INSEL1_SHIFT		12
#define CCL_LUTCTRL0_INSEL1_MASK		0x0f
/** @defgroup ccl_lutctrl0_insel1 INSEL1 Input Selection 1
@{*/
/**@}*/


#define CCL_LUTCTRL0_INSEL0_SHIFT		8
#define CCL_LUTCTRL0_INSEL0_MASK		0x0f
/** @defgroup ccl_lutctrl0_insel0 INSEL0 Input Selection 0
@{*/
/**@}*/

/** CCL_LUTCTRL0_EDGESEL Edge Selection **/
#define CCL_LUTCTRL0_EDGESEL		(1 << 7)

#define CCL_LUTCTRL0_FILTSEL_SHIFT		4
#define CCL_LUTCTRL0_FILTSEL_MASK		0x03
/** @defgroup ccl_lutctrl0_filtsel FILTSEL Filter Selection
@{*/
/**@}*/

/** CCL_LUTCTRL0_ENABLE LUT Enable **/
#define CCL_LUTCTRL0_ENABLE		(1 << 1)

/**@}*/

/** @defgroup ccl_lutctrl1 LUTCTRL1 LUT Control x
@{*/


#define CCL_LUTCTRL1_TRUTH_SHIFT		24
#define CCL_LUTCTRL1_TRUTH_MASK		0xff
/** @defgroup ccl_lutctrl1_truth TRUTH Truth Value
@{*/
/**@}*/

/** CCL_LUTCTRL1_LUTEO Event Output Enable **/
#define CCL_LUTCTRL1_LUTEO		(1 << 22)
/** CCL_LUTCTRL1_LUTEI Event Input Enable **/
#define CCL_LUTCTRL1_LUTEI		(1 << 21)
/** CCL_LUTCTRL1_INVEI Input Event Invert **/
#define CCL_LUTCTRL1_INVEI		(1 << 20)

#define CCL_LUTCTRL1_INSEL2_SHIFT		16
#define CCL_LUTCTRL1_INSEL2_MASK		0x0f
/** @defgroup ccl_lutctrl1_insel2 INSEL2 Input Selection 2
@{*/
/**@}*/


#define CCL_LUTCTRL1_INSEL1_SHIFT		12
#define CCL_LUTCTRL1_INSEL1_MASK		0x0f
/** @defgroup ccl_lutctrl1_insel1 INSEL1 Input Selection 1
@{*/
/**@}*/


#define CCL_LUTCTRL1_INSEL0_SHIFT		8
#define CCL_LUTCTRL1_INSEL0_MASK		0x0f
/** @defgroup ccl_lutctrl1_insel0 INSEL0 Input Selection 0
@{*/
/**@}*/

/** CCL_LUTCTRL1_EDGESEL Edge Selection **/
#define CCL_LUTCTRL1_EDGESEL		(1 << 7)

#define CCL_LUTCTRL1_FILTSEL_SHIFT		4
#define CCL_LUTCTRL1_FILTSEL_MASK		0x03
/** @defgroup ccl_lutctrl1_filtsel FILTSEL Filter Selection
@{*/
/**@}*/

/** CCL_LUTCTRL1_ENABLE LUT Enable **/
#define CCL_LUTCTRL1_ENABLE		(1 << 1)

/**@}*/

/** @defgroup ccl_lutctrl2 LUTCTRL2 LUT Control x
@{*/


#define CCL_LUTCTRL2_TRUTH_SHIFT		24
#define CCL_LUTCTRL2_TRUTH_MASK		0xff
/** @defgroup ccl_lutctrl2_truth TRUTH Truth Value
@{*/
/**@}*/

/** CCL_LUTCTRL2_LUTEO Event Output Enable **/
#define CCL_LUTCTRL2_LUTEO		(1 << 22)
/** CCL_LUTCTRL2_LUTEI Event Input Enable **/
#define CCL_LUTCTRL2_LUTEI		(1 << 21)
/** CCL_LUTCTRL2_INVEI Input Event Invert **/
#define CCL_LUTCTRL2_INVEI		(1 << 20)

#define CCL_LUTCTRL2_INSEL2_SHIFT		16
#define CCL_LUTCTRL2_INSEL2_MASK		0x0f
/** @defgroup ccl_lutctrl2_insel2 INSEL2 Input Selection 2
@{*/
/**@}*/


#define CCL_LUTCTRL2_INSEL1_SHIFT		12
#define CCL_LUTCTRL2_INSEL1_MASK		0x0f
/** @defgroup ccl_lutctrl2_insel1 INSEL1 Input Selection 1
@{*/
/**@}*/


#define CCL_LUTCTRL2_INSEL0_SHIFT		8
#define CCL_LUTCTRL2_INSEL0_MASK		0x0f
/** @defgroup ccl_lutctrl2_insel0 INSEL0 Input Selection 0
@{*/
/**@}*/

/** CCL_LUTCTRL2_EDGESEL Edge Selection **/
#define CCL_LUTCTRL2_EDGESEL		(1 << 7)

#define CCL_LUTCTRL2_FILTSEL_SHIFT		4
#define CCL_LUTCTRL2_FILTSEL_MASK		0x03
/** @defgroup ccl_lutctrl2_filtsel FILTSEL Filter Selection
@{*/
/**@}*/

/** CCL_LUTCTRL2_ENABLE LUT Enable **/
#define CCL_LUTCTRL2_ENABLE		(1 << 1)

/**@}*/

/** @defgroup ccl_lutctrl3 LUTCTRL3 LUT Control x
@{*/


#define CCL_LUTCTRL3_TRUTH_SHIFT		24
#define CCL_LUTCTRL3_TRUTH_MASK		0xff
/** @defgroup ccl_lutctrl3_truth TRUTH Truth Value
@{*/
/**@}*/

/** CCL_LUTCTRL3_LUTEO Event Output Enable **/
#define CCL_LUTCTRL3_LUTEO		(1 << 22)
/** CCL_LUTCTRL3_LUTEI Event Input Enable **/
#define CCL_LUTCTRL3_LUTEI		(1 << 21)
/** CCL_LUTCTRL3_INVEI Input Event Invert **/
#define CCL_LUTCTRL3_INVEI		(1 << 20)

#define CCL_LUTCTRL3_INSEL2_SHIFT		16
#define CCL_LUTCTRL3_INSEL2_MASK		0x0f
/** @defgroup ccl_lutctrl3_insel2 INSEL2 Input Selection 2
@{*/
/**@}*/


#define CCL_LUTCTRL3_INSEL1_SHIFT		12
#define CCL_LUTCTRL3_INSEL1_MASK		0x0f
/** @defgroup ccl_lutctrl3_insel1 INSEL1 Input Selection 1
@{*/
/**@}*/


#define CCL_LUTCTRL3_INSEL0_SHIFT		8
#define CCL_LUTCTRL3_INSEL0_MASK		0x0f
/** @defgroup ccl_lutctrl3_insel0 INSEL0 Input Selection 0
@{*/
/**@}*/

/** CCL_LUTCTRL3_EDGESEL Edge Selection **/
#define CCL_LUTCTRL3_EDGESEL		(1 << 7)

#define CCL_LUTCTRL3_FILTSEL_SHIFT		4
#define CCL_LUTCTRL3_FILTSEL_MASK		0x03
/** @defgroup ccl_lutctrl3_filtsel FILTSEL Filter Selection
@{*/
/**@}*/

/** CCL_LUTCTRL3_ENABLE LUT Enable **/
#define CCL_LUTCTRL3_ENABLE		(1 << 1)

/**@}*/
