#pragma once 

/* --- DCMI: Digital camera interface ------------------------------- */

/** @defgroup dcmi_registers Digital camera interface Register
@{*/

/** DCMI_CR control register 1 **/
#define DCMI_CR			MMIO32(DCMI_BASE + 0x00)
/** DCMI_SR status register **/
#define DCMI_SR			MMIO32(DCMI_BASE + 0x04)
/** DCMI_RIS raw interrupt status register **/
#define DCMI_RIS			MMIO32(DCMI_BASE + 0x08)
/** DCMI_IER interrupt enable register **/
#define DCMI_IER			MMIO32(DCMI_BASE + 0x0c)
/** DCMI_MIS masked interrupt status register **/
#define DCMI_MIS			MMIO32(DCMI_BASE + 0x10)
/** DCMI_ICR interrupt clear register **/
#define DCMI_ICR			MMIO32(DCMI_BASE + 0x14)
/** DCMI_ESCR embedded synchronization code register **/
#define DCMI_ESCR			MMIO32(DCMI_BASE + 0x18)
/** DCMI_ESUR embedded synchronization unmask register **/
#define DCMI_ESUR			MMIO32(DCMI_BASE + 0x1c)
/** DCMI_CWSTRT crop window start **/
#define DCMI_CWSTRT			MMIO32(DCMI_BASE + 0x20)
/** DCMI_CWSIZE crop window size **/
#define DCMI_CWSIZE			MMIO32(DCMI_BASE + 0x24)
/** DCMI_DR data register **/
#define DCMI_DR			MMIO32(DCMI_BASE + 0x28)

/**@}*/


/** @defgroup dcmi_cr CR control register 1
@{*/

/** DCMI_CR_OELS Odd/Even Line Select **/
#define DCMI_CR_OELS		(1 << 20)
/** DCMI_CR_LSM Line Select mode **/
#define DCMI_CR_LSM		(1 << 19)
/** DCMI_CR_OEBS Odd/Even Byte Select **/
#define DCMI_CR_OEBS		(1 << 18)

#define DCMI_CR_BSM_SHIFT		16
#define DCMI_CR_BSM_MASK		0x03
/** @defgroup dcmi_cr_bsm BSM Byte Select mode
@{*/
/**@}*/

/** DCMI_CR_ENABLE DCMI enable **/
#define DCMI_CR_ENABLE		(1 << 14)

#define DCMI_CR_EDM_SHIFT		10
#define DCMI_CR_EDM_MASK		0x03
/** @defgroup dcmi_cr_edm EDM Extended data mode
@{*/
/**@}*/


#define DCMI_CR_FCRC_SHIFT		8
#define DCMI_CR_FCRC_MASK		0x03
/** @defgroup dcmi_cr_fcrc FCRC Frame capture rate control
@{*/
/**@}*/

/** DCMI_CR_VSPOL Vertical synchronization polarity **/
#define DCMI_CR_VSPOL		(1 << 7)
/** DCMI_CR_HSPOL Horizontal synchronization polarity **/
#define DCMI_CR_HSPOL		(1 << 6)
/** DCMI_CR_PCKPOL Pixel clock polarity **/
#define DCMI_CR_PCKPOL		(1 << 5)
/** DCMI_CR_ESS Embedded synchronization select **/
#define DCMI_CR_ESS		(1 << 4)
/** DCMI_CR_JPEG JPEG format **/
#define DCMI_CR_JPEG		(1 << 3)
/** DCMI_CR_CROP Crop feature **/
#define DCMI_CR_CROP		(1 << 2)
/** DCMI_CR_CM Capture mode **/
#define DCMI_CR_CM		(1 << 1)
/** DCMI_CR_CAPTURE Capture enable **/
#define DCMI_CR_CAPTURE		(1 << 0)

/**@}*/

/** @defgroup dcmi_sr SR status register
@{*/

/** DCMI_SR_FNE FIFO not empty **/
#define DCMI_SR_FNE		(1 << 2)
/** DCMI_SR_VSYNC VSYNC **/
#define DCMI_SR_VSYNC		(1 << 1)
/** DCMI_SR_HSYNC HSYNC **/
#define DCMI_SR_HSYNC		(1 << 0)

/**@}*/

/** @defgroup dcmi_ris RIS raw interrupt status register
@{*/

/** DCMI_RIS_LINE_RIS Line raw interrupt status **/
#define DCMI_RIS_LINE_RIS		(1 << 4)
/** DCMI_RIS_VSYNC_RIS VSYNC raw interrupt status **/
#define DCMI_RIS_VSYNC_RIS		(1 << 3)
/** DCMI_RIS_ERR_RIS Synchronization error raw interrupt status **/
#define DCMI_RIS_ERR_RIS		(1 << 2)
/** DCMI_RIS_OVR_RIS Overrun raw interrupt status **/
#define DCMI_RIS_OVR_RIS		(1 << 1)
/** DCMI_RIS_FRAME_RIS Capture complete raw interrupt status **/
#define DCMI_RIS_FRAME_RIS		(1 << 0)

/**@}*/

/** @defgroup dcmi_ier IER interrupt enable register
@{*/

/** DCMI_IER_LINE_IE Line interrupt enable **/
#define DCMI_IER_LINE_IE		(1 << 4)
/** DCMI_IER_VSYNC_IE VSYNC interrupt enable **/
#define DCMI_IER_VSYNC_IE		(1 << 3)
/** DCMI_IER_ERR_IE Synchronization error interrupt enable **/
#define DCMI_IER_ERR_IE		(1 << 2)
/** DCMI_IER_OVR_IE Overrun interrupt enable **/
#define DCMI_IER_OVR_IE		(1 << 1)
/** DCMI_IER_FRAME_IE Capture complete interrupt enable **/
#define DCMI_IER_FRAME_IE		(1 << 0)

/**@}*/

/** @defgroup dcmi_mis MIS masked interrupt status register
@{*/

/** DCMI_MIS_LINE_MIS Line masked interrupt status **/
#define DCMI_MIS_LINE_MIS		(1 << 4)
/** DCMI_MIS_VSYNC_MIS VSYNC masked interrupt status **/
#define DCMI_MIS_VSYNC_MIS		(1 << 3)
/** DCMI_MIS_ERR_MIS Synchronization error masked interrupt status **/
#define DCMI_MIS_ERR_MIS		(1 << 2)
/** DCMI_MIS_OVR_MIS Overrun masked interrupt status **/
#define DCMI_MIS_OVR_MIS		(1 << 1)
/** DCMI_MIS_FRAME_MIS Capture complete masked interrupt status **/
#define DCMI_MIS_FRAME_MIS		(1 << 0)

/**@}*/

/** @defgroup dcmi_icr ICR interrupt clear register
@{*/

/** DCMI_ICR_LINE_ISC line interrupt status clear **/
#define DCMI_ICR_LINE_ISC		(1 << 4)
/** DCMI_ICR_VSYNC_ISC Vertical synch interrupt status clear **/
#define DCMI_ICR_VSYNC_ISC		(1 << 3)
/** DCMI_ICR_ERR_ISC Synchronization error interrupt status clear **/
#define DCMI_ICR_ERR_ISC		(1 << 2)
/** DCMI_ICR_OVR_ISC Overrun interrupt status clear **/
#define DCMI_ICR_OVR_ISC		(1 << 1)
/** DCMI_ICR_FRAME_ISC Capture complete interrupt status clear **/
#define DCMI_ICR_FRAME_ISC		(1 << 0)

/**@}*/

/** @defgroup dcmi_escr ESCR embedded synchronization code register
@{*/


#define DCMI_ESCR_FEC_SHIFT		24
#define DCMI_ESCR_FEC_MASK		0xff
/** @defgroup dcmi_escr_fec FEC Frame end delimiter code
@{*/
/**@}*/


#define DCMI_ESCR_LEC_SHIFT		16
#define DCMI_ESCR_LEC_MASK		0xff
/** @defgroup dcmi_escr_lec LEC Line end delimiter code
@{*/
/**@}*/


#define DCMI_ESCR_LSC_SHIFT		8
#define DCMI_ESCR_LSC_MASK		0xff
/** @defgroup dcmi_escr_lsc LSC Line start delimiter code
@{*/
/**@}*/


#define DCMI_ESCR_FSC_SHIFT		0
#define DCMI_ESCR_FSC_MASK		0xff
/** @defgroup dcmi_escr_fsc FSC Frame start delimiter code
@{*/
/**@}*/


/**@}*/

/** @defgroup dcmi_esur ESUR embedded synchronization unmask register
@{*/


#define DCMI_ESUR_FEU_SHIFT		24
#define DCMI_ESUR_FEU_MASK		0xff
/** @defgroup dcmi_esur_feu FEU Frame end delimiter unmask
@{*/
/**@}*/


#define DCMI_ESUR_LEU_SHIFT		16
#define DCMI_ESUR_LEU_MASK		0xff
/** @defgroup dcmi_esur_leu LEU Line end delimiter unmask
@{*/
/**@}*/


#define DCMI_ESUR_LSU_SHIFT		8
#define DCMI_ESUR_LSU_MASK		0xff
/** @defgroup dcmi_esur_lsu LSU Line start delimiter unmask
@{*/
/**@}*/


#define DCMI_ESUR_FSU_SHIFT		0
#define DCMI_ESUR_FSU_MASK		0xff
/** @defgroup dcmi_esur_fsu FSU Frame start delimiter unmask
@{*/
/**@}*/


/**@}*/

/** @defgroup dcmi_cwstrt CWSTRT crop window start
@{*/


#define DCMI_CWSTRT_VST_SHIFT		16
#define DCMI_CWSTRT_VST_MASK		0x1fff
/** @defgroup dcmi_cwstrt_vst VST Vertical start line count
@{*/
/**@}*/


#define DCMI_CWSTRT_HOFFCNT_SHIFT		0
#define DCMI_CWSTRT_HOFFCNT_MASK		0x3fff
/** @defgroup dcmi_cwstrt_hoffcnt HOFFCNT Horizontal offset count
@{*/
/**@}*/


/**@}*/

/** @defgroup dcmi_cwsize CWSIZE crop window size
@{*/


#define DCMI_CWSIZE_VLINE_SHIFT		16
#define DCMI_CWSIZE_VLINE_MASK		0x3fff
/** @defgroup dcmi_cwsize_vline VLINE Vertical line count
@{*/
/**@}*/


#define DCMI_CWSIZE_CAPCNT_SHIFT		0
#define DCMI_CWSIZE_CAPCNT_MASK		0x3fff
/** @defgroup dcmi_cwsize_capcnt CAPCNT Capture count
@{*/
/**@}*/


/**@}*/

/** @defgroup dcmi_dr DR data register
@{*/


#define DCMI_DR_Byte3_SHIFT		24
#define DCMI_DR_Byte3_MASK		0xff
/** @defgroup dcmi_dr_byte3 Byte3 Data byte 3
@{*/
/**@}*/


#define DCMI_DR_Byte2_SHIFT		16
#define DCMI_DR_Byte2_MASK		0xff
/** @defgroup dcmi_dr_byte2 Byte2 Data byte 2
@{*/
/**@}*/


#define DCMI_DR_Byte1_SHIFT		8
#define DCMI_DR_Byte1_MASK		0xff
/** @defgroup dcmi_dr_byte1 Byte1 Data byte 1
@{*/
/**@}*/


#define DCMI_DR_Byte0_SHIFT		0
#define DCMI_DR_Byte0_MASK		0xff
/** @defgroup dcmi_dr_byte0 Byte0 Data byte 0
@{*/
/**@}*/


/**@}*/
