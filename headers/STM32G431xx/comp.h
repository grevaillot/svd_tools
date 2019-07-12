#pragma once 

/* --- COMP: Comparator control and status register ----------------- */

/** @defgroup comp_registers Comparator control and status register Register
@{*/

/** COMP_COMP_C1CSR Comparator control/status register **/
#define COMP_COMP_C1CSR			MMIO32(COMP_BASE + 0x00)
/** COMP_COMP_C2CSR Comparator control/status register **/
#define COMP_COMP_C2CSR			MMIO32(COMP_BASE + 0x04)
/** COMP_COMP_C3CSR Comparator control/status register **/
#define COMP_COMP_C3CSR			MMIO32(COMP_BASE + 0x08)
/** COMP_COMP_C4CSR Comparator control/status register **/
#define COMP_COMP_C4CSR			MMIO32(COMP_BASE + 0x12)

/**@}*/


/** @defgroup comp_comp_c1csr COMPC1CSR Comparator control/status register
@{*/

/** COMP_COMP_C1CSR_LOCK LOCK **/
#define COMP_COMP_C1CSR_LOCK		(1 << 31)
/** COMP_COMP_C1CSR_VALUE VALUE **/
#define COMP_COMP_C1CSR_VALUE		(1 << 30)
/** COMP_COMP_C1CSR_SCALEN SCALEN **/
#define COMP_COMP_C1CSR_SCALEN		(1 << 23)
/** COMP_COMP_C1CSR_BRGEN BRGEN **/
#define COMP_COMP_C1CSR_BRGEN		(1 << 22)

#define COMP_COMP_C1CSR_BLANKSEL_SHIFT		19
#define COMP_COMP_C1CSR_BLANKSEL_MASK		0x07
/** @defgroup comp_comp_c1csr_blanksel BLANKSEL BLANKSEL
@{*/
/**@}*/


#define COMP_COMP_C1CSR_HYST_SHIFT		16
#define COMP_COMP_C1CSR_HYST_MASK		0x07
/** @defgroup comp_comp_c1csr_hyst HYST HYST
@{*/
/**@}*/

/** COMP_COMP_C1CSR_POL POL **/
#define COMP_COMP_C1CSR_POL		(1 << 15)
/** COMP_COMP_C1CSR_INPSEL INPSEL **/
#define COMP_COMP_C1CSR_INPSEL		(1 << 8)

#define COMP_COMP_C1CSR_INMSEL_SHIFT		4
#define COMP_COMP_C1CSR_INMSEL_MASK		0x07
/** @defgroup comp_comp_c1csr_inmsel INMSEL INMSEL
@{*/
/**@}*/

/** COMP_COMP_C1CSR_COMP_DEGLITCH_EN COMP_DEGLITCH_EN **/
#define COMP_COMP_C1CSR_COMP_DEGLITCH_EN		(1 << 1)
/** COMP_COMP_C1CSR_EN EN **/
#define COMP_COMP_C1CSR_EN		(1 << 0)

/**@}*/

/** @defgroup comp_comp_c2csr COMPC2CSR Comparator control/status register
@{*/

/** COMP_COMP_C2CSR_LOCK LOCK **/
#define COMP_COMP_C2CSR_LOCK		(1 << 31)
/** COMP_COMP_C2CSR_VALUE VALUE **/
#define COMP_COMP_C2CSR_VALUE		(1 << 30)
/** COMP_COMP_C2CSR_SCALEN SCALEN **/
#define COMP_COMP_C2CSR_SCALEN		(1 << 23)
/** COMP_COMP_C2CSR_BRGEN BRGEN **/
#define COMP_COMP_C2CSR_BRGEN		(1 << 22)

#define COMP_COMP_C2CSR_BLANKSEL_SHIFT		19
#define COMP_COMP_C2CSR_BLANKSEL_MASK		0x07
/** @defgroup comp_comp_c2csr_blanksel BLANKSEL BLANKSEL
@{*/
/**@}*/


#define COMP_COMP_C2CSR_HYST_SHIFT		16
#define COMP_COMP_C2CSR_HYST_MASK		0x07
/** @defgroup comp_comp_c2csr_hyst HYST HYST
@{*/
/**@}*/

/** COMP_COMP_C2CSR_POL POL **/
#define COMP_COMP_C2CSR_POL		(1 << 15)
/** COMP_COMP_C2CSR_INPSEL INPSEL **/
#define COMP_COMP_C2CSR_INPSEL		(1 << 8)

#define COMP_COMP_C2CSR_INMSEL_SHIFT		4
#define COMP_COMP_C2CSR_INMSEL_MASK		0x07
/** @defgroup comp_comp_c2csr_inmsel INMSEL INMSEL
@{*/
/**@}*/

/** COMP_COMP_C2CSR_COMP_DEGLITCH_EN COMP_DEGLITCH_EN **/
#define COMP_COMP_C2CSR_COMP_DEGLITCH_EN		(1 << 1)
/** COMP_COMP_C2CSR_EN EN **/
#define COMP_COMP_C2CSR_EN		(1 << 0)

/**@}*/

/** @defgroup comp_comp_c3csr COMPC3CSR Comparator control/status register
@{*/

/** COMP_COMP_C3CSR_LOCK LOCK **/
#define COMP_COMP_C3CSR_LOCK		(1 << 31)
/** COMP_COMP_C3CSR_VALUE VALUE **/
#define COMP_COMP_C3CSR_VALUE		(1 << 30)
/** COMP_COMP_C3CSR_SCALEN SCALEN **/
#define COMP_COMP_C3CSR_SCALEN		(1 << 23)
/** COMP_COMP_C3CSR_BRGEN BRGEN **/
#define COMP_COMP_C3CSR_BRGEN		(1 << 22)

#define COMP_COMP_C3CSR_BLANKSEL_SHIFT		19
#define COMP_COMP_C3CSR_BLANKSEL_MASK		0x07
/** @defgroup comp_comp_c3csr_blanksel BLANKSEL BLANKSEL
@{*/
/**@}*/


#define COMP_COMP_C3CSR_HYST_SHIFT		16
#define COMP_COMP_C3CSR_HYST_MASK		0x07
/** @defgroup comp_comp_c3csr_hyst HYST HYST
@{*/
/**@}*/

/** COMP_COMP_C3CSR_POL POL **/
#define COMP_COMP_C3CSR_POL		(1 << 15)
/** COMP_COMP_C3CSR_INPSEL INPSEL **/
#define COMP_COMP_C3CSR_INPSEL		(1 << 8)

#define COMP_COMP_C3CSR_INMSEL_SHIFT		4
#define COMP_COMP_C3CSR_INMSEL_MASK		0x07
/** @defgroup comp_comp_c3csr_inmsel INMSEL INMSEL
@{*/
/**@}*/

/** COMP_COMP_C3CSR_COMP_DEGLITCH_EN COMP_DEGLITCH_EN **/
#define COMP_COMP_C3CSR_COMP_DEGLITCH_EN		(1 << 1)
/** COMP_COMP_C3CSR_EN EN **/
#define COMP_COMP_C3CSR_EN		(1 << 0)

/**@}*/

/** @defgroup comp_comp_c4csr COMPC4CSR Comparator control/status register
@{*/

/** COMP_COMP_C4CSR_LOCK LOCK **/
#define COMP_COMP_C4CSR_LOCK		(1 << 31)
/** COMP_COMP_C4CSR_VALUE VALUE **/
#define COMP_COMP_C4CSR_VALUE		(1 << 30)
/** COMP_COMP_C4CSR_SCALEN SCALEN **/
#define COMP_COMP_C4CSR_SCALEN		(1 << 23)
/** COMP_COMP_C4CSR_BRGEN BRGEN **/
#define COMP_COMP_C4CSR_BRGEN		(1 << 22)

#define COMP_COMP_C4CSR_BLANKSEL_SHIFT		19
#define COMP_COMP_C4CSR_BLANKSEL_MASK		0x07
/** @defgroup comp_comp_c4csr_blanksel BLANKSEL BLANKSEL
@{*/
/**@}*/


#define COMP_COMP_C4CSR_HYST_SHIFT		16
#define COMP_COMP_C4CSR_HYST_MASK		0x07
/** @defgroup comp_comp_c4csr_hyst HYST HYST
@{*/
/**@}*/

/** COMP_COMP_C4CSR_POL POL **/
#define COMP_COMP_C4CSR_POL		(1 << 15)
/** COMP_COMP_C4CSR_INPSEL INPSEL **/
#define COMP_COMP_C4CSR_INPSEL		(1 << 8)

#define COMP_COMP_C4CSR_INMSEL_SHIFT		4
#define COMP_COMP_C4CSR_INMSEL_MASK		0x07
/** @defgroup comp_comp_c4csr_inmsel INMSEL INMSEL
@{*/
/**@}*/

/** COMP_COMP_C4CSR_COMP_DEGLITCH_EN COMP_DEGLITCH_EN **/
#define COMP_COMP_C4CSR_COMP_DEGLITCH_EN		(1 << 1)
/** COMP_COMP_C4CSR_EN EN **/
#define COMP_COMP_C4CSR_EN		(1 << 0)

/**@}*/