#pragma once 

/* --- OctoSPII_O_Manager: OctoSPI IO Manager ----------------------- */

/** @defgroup octospii_o_manager_registers OctoSPI IO Manager Register
@{*/

/** OctoSPII_O_Manager_CR OctoSPI IO Manager Control Register **/
#define OctoSPII_O_Manager_CR			MMIO32(OctoSPII_O_Manager_BASE + 0x00)
/** OctoSPII_O_Manager_P1CR OctoSPI IO Manager Port 1 configuration register **/
#define OctoSPII_O_Manager_P1CR			MMIO32(OctoSPII_O_Manager_BASE + 0x04)
/** OctoSPII_O_Manager_P2CR OctoSPI IO Manager Port 2 configuration register **/
#define OctoSPII_O_Manager_P2CR			MMIO32(OctoSPII_O_Manager_BASE + 0x08)

/**@}*/


/** @defgroup octospii_o_manager_cr CR OctoSPI IO Manager Control Register
@{*/


#define OctoSPII_O_Manager_CR_REQ2ACK_TIME_SHIFT		16
#define OctoSPII_O_Manager_CR_REQ2ACK_TIME_MASK		0xff
/** @defgroup octospii_o_manager_cr_req2ack_time REQ2ACKTIME REQ to ACK Time
@{*/
/**@}*/

/** OctoSPII_O_Manager_CR_MUXEN Multiplexed mode Enable **/
#define OctoSPII_O_Manager_CR_MUXEN		(1 << 0)

/**@}*/

/** @defgroup octospii_o_manager_p1cr P1CR OctoSPI IO Manager Port 1 configuration register
@{*/


#define OctoSPII_O_Manager_P1CR_IOHSRC_SHIFT		25
#define OctoSPII_O_Manager_P1CR_IOHSRC_MASK		0x03
/** @defgroup octospii_o_manager_p1cr_iohsrc IOHSRC IOHSRC
@{*/
/**@}*/

/** OctoSPII_O_Manager_P1CR_IOHEN IOHEN **/
#define OctoSPII_O_Manager_P1CR_IOHEN		(1 << 24)

#define OctoSPII_O_Manager_P1CR_IOLSRC_SHIFT		17
#define OctoSPII_O_Manager_P1CR_IOLSRC_MASK		0x03
/** @defgroup octospii_o_manager_p1cr_iolsrc IOLSRC IOLSRC
@{*/
/**@}*/

/** OctoSPII_O_Manager_P1CR_IOLEN IOLEN **/
#define OctoSPII_O_Manager_P1CR_IOLEN		(1 << 16)
/** OctoSPII_O_Manager_P1CR_NCSSRC NCSSRC **/
#define OctoSPII_O_Manager_P1CR_NCSSRC		(1 << 9)
/** OctoSPII_O_Manager_P1CR_NCSEN NCSEN **/
#define OctoSPII_O_Manager_P1CR_NCSEN		(1 << 8)
/** OctoSPII_O_Manager_P1CR_DQSSRC DQSSRC **/
#define OctoSPII_O_Manager_P1CR_DQSSRC		(1 << 5)
/** OctoSPII_O_Manager_P1CR_DQSEN DQSEN **/
#define OctoSPII_O_Manager_P1CR_DQSEN		(1 << 4)
/** OctoSPII_O_Manager_P1CR_CLKSRC CLK/CLKn Source for Port n **/
#define OctoSPII_O_Manager_P1CR_CLKSRC		(1 << 1)
/** OctoSPII_O_Manager_P1CR_CLKEN CLK/CLKn Enable for Port n **/
#define OctoSPII_O_Manager_P1CR_CLKEN		(1 << 0)

/**@}*/

/** @defgroup octospii_o_manager_p2cr P2CR OctoSPI IO Manager Port 2 configuration register
@{*/


#define OctoSPII_O_Manager_P2CR_IOHSRC_SHIFT		25
#define OctoSPII_O_Manager_P2CR_IOHSRC_MASK		0x03
/** @defgroup octospii_o_manager_p2cr_iohsrc IOHSRC IOHSRC
@{*/
/**@}*/

/** OctoSPII_O_Manager_P2CR_IOHEN IOHEN **/
#define OctoSPII_O_Manager_P2CR_IOHEN		(1 << 24)

#define OctoSPII_O_Manager_P2CR_IOLSRC_SHIFT		17
#define OctoSPII_O_Manager_P2CR_IOLSRC_MASK		0x03
/** @defgroup octospii_o_manager_p2cr_iolsrc IOLSRC IOLSRC
@{*/
/**@}*/

/** OctoSPII_O_Manager_P2CR_IOLEN IOLEN **/
#define OctoSPII_O_Manager_P2CR_IOLEN		(1 << 16)
/** OctoSPII_O_Manager_P2CR_NCSSRC NCSSRC **/
#define OctoSPII_O_Manager_P2CR_NCSSRC		(1 << 9)
/** OctoSPII_O_Manager_P2CR_NCSEN NCSEN **/
#define OctoSPII_O_Manager_P2CR_NCSEN		(1 << 8)
/** OctoSPII_O_Manager_P2CR_DQSSRC DQSSRC **/
#define OctoSPII_O_Manager_P2CR_DQSSRC		(1 << 5)
/** OctoSPII_O_Manager_P2CR_DQSEN DQSEN **/
#define OctoSPII_O_Manager_P2CR_DQSEN		(1 << 4)
/** OctoSPII_O_Manager_P2CR_CLKSRC CLKSRC **/
#define OctoSPII_O_Manager_P2CR_CLKSRC		(1 << 1)
/** OctoSPII_O_Manager_P2CR_CLKEN CLKEN **/
#define OctoSPII_O_Manager_P2CR_CLKEN		(1 << 0)

/**@}*/
