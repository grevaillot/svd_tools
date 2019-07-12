#pragma once 

/* --- TPI: Trace Port Interface Register --------------------------- */

/** @defgroup tpi_registers Trace Port Interface Register Register
@{*/

/** TPI_SSPSR Supported Parallel Port Size Register **/
#define TPI_SSPSR			MMIO32(TPI_BASE + 0x00)
/** TPI_CSPSR Current Parallel Port Size Register **/
#define TPI_CSPSR			MMIO32(TPI_BASE + 0x04)
/** TPI_ACPR Asynchronous Clock Prescaler Register **/
#define TPI_ACPR			MMIO32(TPI_BASE + 0x10)
/** TPI_SPPR Selected Pin Protocol Register **/
#define TPI_SPPR			MMIO32(TPI_BASE + 0xf0)
/** TPI_FFSR Formatter and Flush Status Register **/
#define TPI_FFSR			MMIO32(TPI_BASE + 0x300)
/** TPI_FFCR Formatter and Flush Control Register **/
#define TPI_FFCR			MMIO32(TPI_BASE + 0x304)
/** TPI_FSCR Formatter Synchronization Counter Register **/
#define TPI_FSCR			MMIO32(TPI_BASE + 0x308)
/** TPI_TRIGGER TRIGGER **/
#define TPI_TRIGGER			MMIO32(TPI_BASE + 0xee8)
/** TPI_FIFO0 Integration ETM Data **/
#define TPI_FIFO0			MMIO32(TPI_BASE + 0xeec)
/** TPI_ITATBCTR2 ITATBCTR2 **/
#define TPI_ITATBCTR2			MMIO32(TPI_BASE + 0xef0)
/** TPI_ITATBCTR0 ITATBCTR0 **/
#define TPI_ITATBCTR0			MMIO32(TPI_BASE + 0xef8)
/** TPI_FIFO1 Integration ITM Data **/
#define TPI_FIFO1			MMIO32(TPI_BASE + 0xefc)
/** TPI_ITCTRL Integration Mode Control **/
#define TPI_ITCTRL			MMIO32(TPI_BASE + 0xf00)
/** TPI_CLAIMSET Claim tag set **/
#define TPI_CLAIMSET			MMIO32(TPI_BASE + 0xfa0)
/** TPI_CLAIMCLR Claim tag clear **/
#define TPI_CLAIMCLR			MMIO32(TPI_BASE + 0xfa4)
/** TPI_DEVID TPIU_DEVID **/
#define TPI_DEVID			MMIO32(TPI_BASE + 0xfc8)
/** TPI_DEVTYPE TPIU_DEVTYPE **/
#define TPI_DEVTYPE			MMIO32(TPI_BASE + 0xfcc)

/**@}*/


/** @defgroup tpi_sspsr SSPSR Supported Parallel Port Size Register
@{*/


/**@}*/

/** @defgroup tpi_cspsr CSPSR Current Parallel Port Size Register
@{*/


/**@}*/

/** @defgroup tpi_acpr ACPR Asynchronous Clock Prescaler Register
@{*/


#define TPI_ACPR_PRESCALER_SHIFT		0
#define TPI_ACPR_PRESCALER_MASK		0x1fff
/** @defgroup tpi_acpr_prescaler PRESCALER 
@{*/
/**@}*/


/**@}*/

/** @defgroup tpi_sppr SPPR Selected Pin Protocol Register
@{*/


#define TPI_SPPR_TXMODE_SHIFT		0
#define TPI_SPPR_TXMODE_MASK		0x03
/** @defgroup tpi_sppr_txmode TXMODE 
@{*/
/**@}*/


/**@}*/

/** @defgroup tpi_ffsr FFSR Formatter and Flush Status Register
@{*/

/** TPI_FFSR_FtNonStop  **/
#define TPI_FFSR_FtNonStop		(1 << 3)
/** TPI_FFSR_TCPresent  **/
#define TPI_FFSR_TCPresent		(1 << 2)
/** TPI_FFSR_FtStopped  **/
#define TPI_FFSR_FtStopped		(1 << 1)
/** TPI_FFSR_FlInProg  **/
#define TPI_FFSR_FlInProg		(1 << 0)

/**@}*/

/** @defgroup tpi_ffcr FFCR Formatter and Flush Control Register
@{*/

/** TPI_FFCR_TrigIn  **/
#define TPI_FFCR_TrigIn		(1 << 8)
/** TPI_FFCR_EnFCont  **/
#define TPI_FFCR_EnFCont		(1 << 1)

/**@}*/

/** @defgroup tpi_fscr FSCR Formatter Synchronization Counter Register
@{*/


/**@}*/

/** @defgroup tpi_trigger TRIGGER TRIGGER
@{*/

/** TPI_TRIGGER_TRIGGER  **/
#define TPI_TRIGGER_TRIGGER		(1 << 0)

/**@}*/

/** @defgroup tpi_fifo0 FIFO0 Integration ETM Data
@{*/

/** TPI_FIFO0_ITM_ATVALID  **/
#define TPI_FIFO0_ITM_ATVALID		(1 << 29)

#define TPI_FIFO0_ITM_bytecount_SHIFT		27
#define TPI_FIFO0_ITM_bytecount_MASK		0x03
/** @defgroup tpi_fifo0_itm_bytecount ITMbytecount 
@{*/
/**@}*/

/** TPI_FIFO0_ETM_ATVALID  **/
#define TPI_FIFO0_ETM_ATVALID		(1 << 26)

#define TPI_FIFO0_ETM_bytecount_SHIFT		24
#define TPI_FIFO0_ETM_bytecount_MASK		0x03
/** @defgroup tpi_fifo0_etm_bytecount ETMbytecount 
@{*/
/**@}*/


#define TPI_FIFO0_ETM2_SHIFT		16
#define TPI_FIFO0_ETM2_MASK		0xff
/** @defgroup tpi_fifo0_etm2 ETM2 
@{*/
/**@}*/


#define TPI_FIFO0_ETM1_SHIFT		8
#define TPI_FIFO0_ETM1_MASK		0xff
/** @defgroup tpi_fifo0_etm1 ETM1 
@{*/
/**@}*/


#define TPI_FIFO0_ETM0_SHIFT		0
#define TPI_FIFO0_ETM0_MASK		0xff
/** @defgroup tpi_fifo0_etm0 ETM0 
@{*/
/**@}*/


/**@}*/

/** @defgroup tpi_itatbctr2 ITATBCTR2 ITATBCTR2
@{*/

/** TPI_ITATBCTR2_ATREADY  **/
#define TPI_ITATBCTR2_ATREADY		(1 << 0)

/**@}*/

/** @defgroup tpi_itatbctr0 ITATBCTR0 ITATBCTR0
@{*/

/** TPI_ITATBCTR0_ATREADY  **/
#define TPI_ITATBCTR0_ATREADY		(1 << 0)

/**@}*/

/** @defgroup tpi_fifo1 FIFO1 Integration ITM Data
@{*/

/** TPI_FIFO1_ITM_ATVALID  **/
#define TPI_FIFO1_ITM_ATVALID		(1 << 29)

#define TPI_FIFO1_ITM_bytecount_SHIFT		27
#define TPI_FIFO1_ITM_bytecount_MASK		0x03
/** @defgroup tpi_fifo1_itm_bytecount ITMbytecount 
@{*/
/**@}*/

/** TPI_FIFO1_ETM_ATVALID  **/
#define TPI_FIFO1_ETM_ATVALID		(1 << 26)

#define TPI_FIFO1_ETM_bytecount_SHIFT		24
#define TPI_FIFO1_ETM_bytecount_MASK		0x03
/** @defgroup tpi_fifo1_etm_bytecount ETMbytecount 
@{*/
/**@}*/


#define TPI_FIFO1_ITM2_SHIFT		16
#define TPI_FIFO1_ITM2_MASK		0xff
/** @defgroup tpi_fifo1_itm2 ITM2 
@{*/
/**@}*/


#define TPI_FIFO1_ITM1_SHIFT		8
#define TPI_FIFO1_ITM1_MASK		0xff
/** @defgroup tpi_fifo1_itm1 ITM1 
@{*/
/**@}*/


#define TPI_FIFO1_ITM0_SHIFT		0
#define TPI_FIFO1_ITM0_MASK		0xff
/** @defgroup tpi_fifo1_itm0 ITM0 
@{*/
/**@}*/


/**@}*/

/** @defgroup tpi_itctrl ITCTRL Integration Mode Control
@{*/

/** TPI_ITCTRL_Mode  **/
#define TPI_ITCTRL_Mode		(1 << 0)

/**@}*/

/** @defgroup tpi_claimset CLAIMSET Claim tag set
@{*/


/**@}*/

/** @defgroup tpi_claimclr CLAIMCLR Claim tag clear
@{*/


/**@}*/

/** @defgroup tpi_devid DEVID TPIU_DEVID
@{*/

/** TPI_DEVID_NRZVALID  **/
#define TPI_DEVID_NRZVALID		(1 << 11)
/** TPI_DEVID_MANCVALID  **/
#define TPI_DEVID_MANCVALID		(1 << 10)
/** TPI_DEVID_PTINVALID  **/
#define TPI_DEVID_PTINVALID		(1 << 9)

#define TPI_DEVID_MinBufSz_SHIFT		6
#define TPI_DEVID_MinBufSz_MASK		0x07
/** @defgroup tpi_devid_minbufsz MinBufSz 
@{*/
/**@}*/

/** TPI_DEVID_AsynClkIn  **/
#define TPI_DEVID_AsynClkIn		(1 << 5)
/** TPI_DEVID_NrTraceInput  **/
#define TPI_DEVID_NrTraceInput		(1 << 0)

/**@}*/

/** @defgroup tpi_devtype DEVTYPE TPIU_DEVTYPE
@{*/


#define TPI_DEVTYPE_MajorType_SHIFT		4
#define TPI_DEVTYPE_MajorType_MASK		0x0f
/** @defgroup tpi_devtype_majortype MajorType 
@{*/
/**@}*/


#define TPI_DEVTYPE_SubType_SHIFT		0
#define TPI_DEVTYPE_SubType_MASK		0x0f
/** @defgroup tpi_devtype_subtype SubType 
@{*/
/**@}*/


/**@}*/
