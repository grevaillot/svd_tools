#pragma once 

/* --- CCL: Configurable Custom Logic ------------------------------- */

/** @defgroup ccl_registers Configurable Custom Logic Register
@{*/

/** CCL_CTRL Control **/
#define CCL_CTRL			MMIO32(CCL_BASE + 0x00)
/** CCL_SEQCTRL[0] SEQ Control x **/
#define CCL_SEQCTRL[0]			MMIO32(CCL_BASE + 0x04)
/** CCL_LUTCTRL[0] LUT Control x **/
#define CCL_LUTCTRL[0]			MMIO32(CCL_BASE + 0x08)
/** CCL_LUTCTRL[1] LUT Control x **/
#define CCL_LUTCTRL[1]			MMIO32(CCL_BASE + 0x0c)

/**@}*/


/** @defgroup ccl_ctrl CTRL Control
@{*/

/** CCL_CTRL_RUNSTDBY Run in Standby **/
#define CCL_CTRL_RUNSTDBY		(1 << 6)
/** CCL_CTRL_ENABLE Enable **/
#define CCL_CTRL_ENABLE		(1 << 1)
/** CCL_CTRL_SWRST Software Reset **/
#define CCL_CTRL_SWRST		(1 << 0)

/**@}*/

/** @defgroup ccl_seqctrl[0] SEQCTRL[0] SEQ Control x
@{*/


#define CCL_SEQCTRL[0]_SEQSEL_SHIFT		0
#define CCL_SEQCTRL[0]_SEQSEL_MASK		0x0f
/** @defgroup ccl_seqctrl[0]_seqsel SEQSEL Sequential Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup ccl_lutctrl[0] LUTCTRL[0] LUT Control x
@{*/


#define CCL_LUTCTRL[0]_TRUTH_SHIFT		24
#define CCL_LUTCTRL[0]_TRUTH_MASK		0xff
/** @defgroup ccl_lutctrl[0]_truth TRUTH Truth Value
@{*/
/**@}*/

/** CCL_LUTCTRL[0]_LUTEO LUT Event Output Enable **/
#define CCL_LUTCTRL[0]_LUTEO		(1 << 22)
/** CCL_LUTCTRL[0]_LUTEI LUT Event Input Enable **/
#define CCL_LUTCTRL[0]_LUTEI		(1 << 21)
/** CCL_LUTCTRL[0]_INVEI Inverted Event Input Enable **/
#define CCL_LUTCTRL[0]_INVEI		(1 << 20)

#define CCL_LUTCTRL[0]_INSEL2_SHIFT		16
#define CCL_LUTCTRL[0]_INSEL2_MASK		0x0f
/** @defgroup ccl_lutctrl[0]_insel2 INSEL2 Input Selection 2
@{*/
/**@}*/


#define CCL_LUTCTRL[0]_INSEL1_SHIFT		12
#define CCL_LUTCTRL[0]_INSEL1_MASK		0x0f
/** @defgroup ccl_lutctrl[0]_insel1 INSEL1 Input Selection 1
@{*/
/**@}*/


#define CCL_LUTCTRL[0]_INSEL0_SHIFT		8
#define CCL_LUTCTRL[0]_INSEL0_MASK		0x0f
/** @defgroup ccl_lutctrl[0]_insel0 INSEL0 Input Selection 0
@{*/
/**@}*/

/** CCL_LUTCTRL[0]_EDGESEL Edge Selection **/
#define CCL_LUTCTRL[0]_EDGESEL		(1 << 7)

#define CCL_LUTCTRL[0]_FILTSEL_SHIFT		4
#define CCL_LUTCTRL[0]_FILTSEL_MASK		0x03
/** @defgroup ccl_lutctrl[0]_filtsel FILTSEL Filter Selection
@{*/
/**@}*/

/** CCL_LUTCTRL[0]_ENABLE LUT Enable **/
#define CCL_LUTCTRL[0]_ENABLE		(1 << 1)

/**@}*/

/** @defgroup ccl_lutctrl[1] LUTCTRL[1] LUT Control x
@{*/


#define CCL_LUTCTRL[1]_TRUTH_SHIFT		24
#define CCL_LUTCTRL[1]_TRUTH_MASK		0xff
/** @defgroup ccl_lutctrl[1]_truth TRUTH Truth Value
@{*/
/**@}*/

/** CCL_LUTCTRL[1]_LUTEO LUT Event Output Enable **/
#define CCL_LUTCTRL[1]_LUTEO		(1 << 22)
/** CCL_LUTCTRL[1]_LUTEI LUT Event Input Enable **/
#define CCL_LUTCTRL[1]_LUTEI		(1 << 21)
/** CCL_LUTCTRL[1]_INVEI Inverted Event Input Enable **/
#define CCL_LUTCTRL[1]_INVEI		(1 << 20)

#define CCL_LUTCTRL[1]_INSEL2_SHIFT		16
#define CCL_LUTCTRL[1]_INSEL2_MASK		0x0f
/** @defgroup ccl_lutctrl[1]_insel2 INSEL2 Input Selection 2
@{*/
/**@}*/


#define CCL_LUTCTRL[1]_INSEL1_SHIFT		12
#define CCL_LUTCTRL[1]_INSEL1_MASK		0x0f
/** @defgroup ccl_lutctrl[1]_insel1 INSEL1 Input Selection 1
@{*/
/**@}*/


#define CCL_LUTCTRL[1]_INSEL0_SHIFT		8
#define CCL_LUTCTRL[1]_INSEL0_MASK		0x0f
/** @defgroup ccl_lutctrl[1]_insel0 INSEL0 Input Selection 0
@{*/
/**@}*/

/** CCL_LUTCTRL[1]_EDGESEL Edge Selection **/
#define CCL_LUTCTRL[1]_EDGESEL		(1 << 7)

#define CCL_LUTCTRL[1]_FILTSEL_SHIFT		4
#define CCL_LUTCTRL[1]_FILTSEL_MASK		0x03
/** @defgroup ccl_lutctrl[1]_filtsel FILTSEL Filter Selection
@{*/
/**@}*/

/** CCL_LUTCTRL[1]_ENABLE LUT Enable **/
#define CCL_LUTCTRL[1]_ENABLE		(1 << 1)

/**@}*/
