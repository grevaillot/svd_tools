#pragma once 

/* --- OCTOSPIM: OctoSPI IO Manager --------------------------------- */

/** @defgroup octospim_registers OctoSPI IO Manager Register
@{*/

/** OCTOSPIM_P1CR OctoSPI IO Manager Port 1 Configuration Register **/
#define OCTOSPIM_P1CR			MMIO32(OCTOSPIM_BASE + 0x04)
/** OCTOSPIM_P2CR OctoSPI IO Manager Port 2 Configuration Register **/
#define OCTOSPIM_P2CR			MMIO32(OCTOSPIM_BASE + 0x08)

/**@}*/


/** @defgroup octospim_p1cr P1CR OctoSPI IO Manager Port 1 Configuration Register
@{*/


#define OCTOSPIM_P1CR_IOHSRC_SHIFT		25
#define OCTOSPIM_P1CR_IOHSRC_MASK		0x03
/** @defgroup octospim_p1cr_iohsrc IOHSRC Source for Port
@{*/
/**@}*/

/** OCTOSPIM_P1CR_IOHEN Enable for Port n **/
#define OCTOSPIM_P1CR_IOHEN		(1 << 24)

#define OCTOSPIM_P1CR_IOLSRC_SHIFT		17
#define OCTOSPIM_P1CR_IOLSRC_MASK		0x03
/** @defgroup octospim_p1cr_iolsrc IOLSRC Source for Port
@{*/
/**@}*/

/** OCTOSPIM_P1CR_IOLEN Enable for Port **/
#define OCTOSPIM_P1CR_IOLEN		(1 << 16)
/** OCTOSPIM_P1CR_NCSSRC CS Source for Port **/
#define OCTOSPIM_P1CR_NCSSRC		(1 << 9)
/** OCTOSPIM_P1CR_NCSEN CS Enable for Port **/
#define OCTOSPIM_P1CR_NCSEN		(1 << 8)
/** OCTOSPIM_P1CR_DQSSRC DQS Source for Port **/
#define OCTOSPIM_P1CR_DQSSRC		(1 << 5)
/** OCTOSPIM_P1CR_DQSEN DQS Enable for Port **/
#define OCTOSPIM_P1CR_DQSEN		(1 << 4)
/** OCTOSPIM_P1CR_CLKSRC CLK/CLK Source for Port **/
#define OCTOSPIM_P1CR_CLKSRC		(1 << 1)
/** OCTOSPIM_P1CR_CLKEN CLK/CLK Enable for Port **/
#define OCTOSPIM_P1CR_CLKEN		(1 << 0)

/**@}*/

/** @defgroup octospim_p2cr P2CR OctoSPI IO Manager Port 2 Configuration Register
@{*/


#define OCTOSPIM_P2CR_IOHSRC_SHIFT		25
#define OCTOSPIM_P2CR_IOHSRC_MASK		0x03
/** @defgroup octospim_p2cr_iohsrc IOHSRC Source for Port
@{*/
/**@}*/

/** OCTOSPIM_P2CR_IOHEN Enable for Port n **/
#define OCTOSPIM_P2CR_IOHEN		(1 << 24)

#define OCTOSPIM_P2CR_IOLSRC_SHIFT		17
#define OCTOSPIM_P2CR_IOLSRC_MASK		0x03
/** @defgroup octospim_p2cr_iolsrc IOLSRC Source for Port
@{*/
/**@}*/

/** OCTOSPIM_P2CR_IOLEN Enable for Port **/
#define OCTOSPIM_P2CR_IOLEN		(1 << 16)
/** OCTOSPIM_P2CR_NCSSRC CS Source for Port **/
#define OCTOSPIM_P2CR_NCSSRC		(1 << 9)
/** OCTOSPIM_P2CR_NCSEN CS Enable for Port **/
#define OCTOSPIM_P2CR_NCSEN		(1 << 8)
/** OCTOSPIM_P2CR_DQSSRC DQS Source for Port **/
#define OCTOSPIM_P2CR_DQSSRC		(1 << 5)
/** OCTOSPIM_P2CR_DQSEN DQS Enable for Port **/
#define OCTOSPIM_P2CR_DQSEN		(1 << 4)
/** OCTOSPIM_P2CR_CLKSRC CLK/CLK Source for Port **/
#define OCTOSPIM_P2CR_CLKSRC		(1 << 1)
/** OCTOSPIM_P2CR_CLKEN CLK/CLK Enable for Port **/
#define OCTOSPIM_P2CR_CLKEN		(1 << 0)

/**@}*/
