#pragma once 

/* --- OTG_FS_HOST: USB on the go full speed ------------------------ */

/** @defgroup otg_fs_host_registers USB on the go full speed Register
@{*/

/** OTG_FS_HOST_OTG_FS_HCFG OTG_FS host configuration register (OTG_FS_HCFG) **/
#define OTG_FS_HOST_OTG_FS_HCFG			MMIO32(OTG_FS_HOST_BASE + 0x00)
/** OTG_FS_HOST_OTG_FS_HFIR OTG_FS Host frame interval register **/
#define OTG_FS_HOST_OTG_FS_HFIR			MMIO32(OTG_FS_HOST_BASE + 0x04)
/** OTG_FS_HOST_OTG_FS_HFNUM OTG_FS host frame number/frame time remaining register (OTG_FS_HFNUM) **/
#define OTG_FS_HOST_OTG_FS_HFNUM			MMIO32(OTG_FS_HOST_BASE + 0x08)
/** OTG_FS_HOST_OTG_FS_HPTXSTS OTG_FS_Host periodic transmit FIFO/queue status register (OTG_FS_HPTXSTS) **/
#define OTG_FS_HOST_OTG_FS_HPTXSTS			MMIO32(OTG_FS_HOST_BASE + 0x10)
/** OTG_FS_HOST_OTG_FS_HAINT OTG_FS Host all channels interrupt register **/
#define OTG_FS_HOST_OTG_FS_HAINT			MMIO32(OTG_FS_HOST_BASE + 0x14)
/** OTG_FS_HOST_OTG_FS_HAINTMSK OTG_FS host all channels interrupt mask register **/
#define OTG_FS_HOST_OTG_FS_HAINTMSK			MMIO32(OTG_FS_HOST_BASE + 0x18)
/** OTG_FS_HOST_OTG_FS_HPRT OTG_FS host port control and status register (OTG_FS_HPRT) **/
#define OTG_FS_HOST_OTG_FS_HPRT			MMIO32(OTG_FS_HOST_BASE + 0x40)
/** OTG_FS_HOST_OTG_FS_HCCHAR0 OTG_FS host channel-0 characteristics register (OTG_FS_HCCHAR0) **/
#define OTG_FS_HOST_OTG_FS_HCCHAR0			MMIO32(OTG_FS_HOST_BASE + 0x100)
/** OTG_FS_HOST_OTG_FS_HCINT0 OTG_FS host channel-0 interrupt register (OTG_FS_HCINT0) **/
#define OTG_FS_HOST_OTG_FS_HCINT0			MMIO32(OTG_FS_HOST_BASE + 0x108)
/** OTG_FS_HOST_OTG_FS_HCINTMSK0 OTG_FS host channel-0 mask register (OTG_FS_HCINTMSK0) **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK0			MMIO32(OTG_FS_HOST_BASE + 0x10c)
/** OTG_FS_HOST_OTG_FS_HCTSIZ0 OTG_FS host channel-0 transfer size register **/
#define OTG_FS_HOST_OTG_FS_HCTSIZ0			MMIO32(OTG_FS_HOST_BASE + 0x110)
/** OTG_FS_HOST_OTG_FS_HCCHAR1 OTG_FS host channel-1 characteristics register (OTG_FS_HCCHAR1) **/
#define OTG_FS_HOST_OTG_FS_HCCHAR1			MMIO32(OTG_FS_HOST_BASE + 0x120)
/** OTG_FS_HOST_OTG_FS_HCINT1 OTG_FS host channel-1 interrupt register (OTG_FS_HCINT1) **/
#define OTG_FS_HOST_OTG_FS_HCINT1			MMIO32(OTG_FS_HOST_BASE + 0x128)
/** OTG_FS_HOST_OTG_FS_HCINTMSK1 OTG_FS host channel-1 mask register (OTG_FS_HCINTMSK1) **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK1			MMIO32(OTG_FS_HOST_BASE + 0x12c)
/** OTG_FS_HOST_OTG_FS_HCTSIZ1 OTG_FS host channel-1 transfer size register **/
#define OTG_FS_HOST_OTG_FS_HCTSIZ1			MMIO32(OTG_FS_HOST_BASE + 0x130)
/** OTG_FS_HOST_OTG_FS_HCCHAR2 OTG_FS host channel-2 characteristics register (OTG_FS_HCCHAR2) **/
#define OTG_FS_HOST_OTG_FS_HCCHAR2			MMIO32(OTG_FS_HOST_BASE + 0x140)
/** OTG_FS_HOST_OTG_FS_HCINT2 OTG_FS host channel-2 interrupt register (OTG_FS_HCINT2) **/
#define OTG_FS_HOST_OTG_FS_HCINT2			MMIO32(OTG_FS_HOST_BASE + 0x148)
/** OTG_FS_HOST_OTG_FS_HCINTMSK2 OTG_FS host channel-2 mask register (OTG_FS_HCINTMSK2) **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK2			MMIO32(OTG_FS_HOST_BASE + 0x14c)
/** OTG_FS_HOST_OTG_FS_HCTSIZ2 OTG_FS host channel-2 transfer size register **/
#define OTG_FS_HOST_OTG_FS_HCTSIZ2			MMIO32(OTG_FS_HOST_BASE + 0x150)
/** OTG_FS_HOST_OTG_FS_HCCHAR3 OTG_FS host channel-3 characteristics register (OTG_FS_HCCHAR3) **/
#define OTG_FS_HOST_OTG_FS_HCCHAR3			MMIO32(OTG_FS_HOST_BASE + 0x160)
/** OTG_FS_HOST_OTG_FS_HCINT3 OTG_FS host channel-3 interrupt register (OTG_FS_HCINT3) **/
#define OTG_FS_HOST_OTG_FS_HCINT3			MMIO32(OTG_FS_HOST_BASE + 0x168)
/** OTG_FS_HOST_OTG_FS_HCINTMSK3 OTG_FS host channel-3 mask register (OTG_FS_HCINTMSK3) **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK3			MMIO32(OTG_FS_HOST_BASE + 0x16c)
/** OTG_FS_HOST_OTG_FS_HCTSIZ3 OTG_FS host channel-3 transfer size register **/
#define OTG_FS_HOST_OTG_FS_HCTSIZ3			MMIO32(OTG_FS_HOST_BASE + 0x170)
/** OTG_FS_HOST_OTG_FS_HCCHAR4 OTG_FS host channel-4 characteristics register (OTG_FS_HCCHAR4) **/
#define OTG_FS_HOST_OTG_FS_HCCHAR4			MMIO32(OTG_FS_HOST_BASE + 0x180)
/** OTG_FS_HOST_OTG_FS_HCINT4 OTG_FS host channel-4 interrupt register (OTG_FS_HCINT4) **/
#define OTG_FS_HOST_OTG_FS_HCINT4			MMIO32(OTG_FS_HOST_BASE + 0x188)
/** OTG_FS_HOST_OTG_FS_HCINTMSK4 OTG_FS host channel-4 mask register (OTG_FS_HCINTMSK4) **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK4			MMIO32(OTG_FS_HOST_BASE + 0x18c)
/** OTG_FS_HOST_OTG_FS_HCTSIZ4 OTG_FS host channel-x transfer size register **/
#define OTG_FS_HOST_OTG_FS_HCTSIZ4			MMIO32(OTG_FS_HOST_BASE + 0x190)
/** OTG_FS_HOST_OTG_FS_HCCHAR5 OTG_FS host channel-5 characteristics register (OTG_FS_HCCHAR5) **/
#define OTG_FS_HOST_OTG_FS_HCCHAR5			MMIO32(OTG_FS_HOST_BASE + 0x1a0)
/** OTG_FS_HOST_OTG_FS_HCINT5 OTG_FS host channel-5 interrupt register (OTG_FS_HCINT5) **/
#define OTG_FS_HOST_OTG_FS_HCINT5			MMIO32(OTG_FS_HOST_BASE + 0x1a8)
/** OTG_FS_HOST_OTG_FS_HCINTMSK5 OTG_FS host channel-5 mask register (OTG_FS_HCINTMSK5) **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK5			MMIO32(OTG_FS_HOST_BASE + 0x1ac)
/** OTG_FS_HOST_OTG_FS_HCTSIZ5 OTG_FS host channel-5 transfer size register **/
#define OTG_FS_HOST_OTG_FS_HCTSIZ5			MMIO32(OTG_FS_HOST_BASE + 0x1b0)
/** OTG_FS_HOST_OTG_FS_HCCHAR6 OTG_FS host channel-6 characteristics register (OTG_FS_HCCHAR6) **/
#define OTG_FS_HOST_OTG_FS_HCCHAR6			MMIO32(OTG_FS_HOST_BASE + 0x1c0)
/** OTG_FS_HOST_OTG_FS_HCINT6 OTG_FS host channel-6 interrupt register (OTG_FS_HCINT6) **/
#define OTG_FS_HOST_OTG_FS_HCINT6			MMIO32(OTG_FS_HOST_BASE + 0x1c8)
/** OTG_FS_HOST_OTG_FS_HCINTMSK6 OTG_FS host channel-6 mask register (OTG_FS_HCINTMSK6) **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK6			MMIO32(OTG_FS_HOST_BASE + 0x1cc)
/** OTG_FS_HOST_OTG_FS_HCTSIZ6 OTG_FS host channel-6 transfer size register **/
#define OTG_FS_HOST_OTG_FS_HCTSIZ6			MMIO32(OTG_FS_HOST_BASE + 0x1d0)
/** OTG_FS_HOST_OTG_FS_HCCHAR7 OTG_FS host channel-7 characteristics register (OTG_FS_HCCHAR7) **/
#define OTG_FS_HOST_OTG_FS_HCCHAR7			MMIO32(OTG_FS_HOST_BASE + 0x1e0)
/** OTG_FS_HOST_OTG_FS_HCINT7 OTG_FS host channel-7 interrupt register (OTG_FS_HCINT7) **/
#define OTG_FS_HOST_OTG_FS_HCINT7			MMIO32(OTG_FS_HOST_BASE + 0x1e8)
/** OTG_FS_HOST_OTG_FS_HCINTMSK7 OTG_FS host channel-7 mask register (OTG_FS_HCINTMSK7) **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK7			MMIO32(OTG_FS_HOST_BASE + 0x1ec)
/** OTG_FS_HOST_OTG_FS_HCTSIZ7 OTG_FS host channel-7 transfer size register **/
#define OTG_FS_HOST_OTG_FS_HCTSIZ7			MMIO32(OTG_FS_HOST_BASE + 0x1f0)
/** OTG_FS_HOST_OTG_FS_HCCHAR8 OTG_FS host channel-8 characteristics register **/
#define OTG_FS_HOST_OTG_FS_HCCHAR8			MMIO32(OTG_FS_HOST_BASE + 0x200)
/** OTG_FS_HOST_OTG_FS_HCINT8 OTG_FS host channel-8 interrupt register **/
#define OTG_FS_HOST_OTG_FS_HCINT8			MMIO32(OTG_FS_HOST_BASE + 0x208)
/** OTG_FS_HOST_OTG_FS_HCINTMSK8 OTG_FS host channel-8 mask register **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK8			MMIO32(OTG_FS_HOST_BASE + 0x20c)
/** OTG_FS_HOST_OTG_FS_HCTSIZ8 OTG_FS host channel-8 transfer size register **/
#define OTG_FS_HOST_OTG_FS_HCTSIZ8			MMIO32(OTG_FS_HOST_BASE + 0x210)
/** OTG_FS_HOST_OTG_FS_HCCHAR9 OTG_FS host channel-9 characteristics register **/
#define OTG_FS_HOST_OTG_FS_HCCHAR9			MMIO32(OTG_FS_HOST_BASE + 0x220)
/** OTG_FS_HOST_OTG_FS_HCINT9 OTG_FS host channel-9 interrupt register **/
#define OTG_FS_HOST_OTG_FS_HCINT9			MMIO32(OTG_FS_HOST_BASE + 0x228)
/** OTG_FS_HOST_OTG_FS_HCINTMSK9 OTG_FS host channel-9 mask register **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK9			MMIO32(OTG_FS_HOST_BASE + 0x22c)
/** OTG_FS_HOST_OTG_FS_HCTSIZ9 OTG_FS host channel-9 transfer size register **/
#define OTG_FS_HOST_OTG_FS_HCTSIZ9			MMIO32(OTG_FS_HOST_BASE + 0x230)
/** OTG_FS_HOST_OTG_FS_HCCHAR10 OTG_FS host channel-10 characteristics register **/
#define OTG_FS_HOST_OTG_FS_HCCHAR10			MMIO32(OTG_FS_HOST_BASE + 0x240)
/** OTG_FS_HOST_OTG_FS_HCINT10 OTG_FS host channel-10 interrupt register **/
#define OTG_FS_HOST_OTG_FS_HCINT10			MMIO32(OTG_FS_HOST_BASE + 0x248)
/** OTG_FS_HOST_OTG_FS_HCINTMSK10 OTG_FS host channel-10 mask register **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK10			MMIO32(OTG_FS_HOST_BASE + 0x24c)
/** OTG_FS_HOST_OTG_FS_HCTSIZ10 OTG_FS host channel-10 transfer size register **/
#define OTG_FS_HOST_OTG_FS_HCTSIZ10			MMIO32(OTG_FS_HOST_BASE + 0x250)
/** OTG_FS_HOST_OTG_FS_HCCHAR11 OTG_FS host channel-11 characteristics register **/
#define OTG_FS_HOST_OTG_FS_HCCHAR11			MMIO32(OTG_FS_HOST_BASE + 0x260)
/** OTG_FS_HOST_OTG_FS_HCINT11 OTG_FS host channel-11 interrupt register **/
#define OTG_FS_HOST_OTG_FS_HCINT11			MMIO32(OTG_FS_HOST_BASE + 0x268)
/** OTG_FS_HOST_OTG_FS_HCINTMSK11 OTG_FS host channel-11 mask register **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK11			MMIO32(OTG_FS_HOST_BASE + 0x26c)
/** OTG_FS_HOST_OTG_FS_HCTSIZ11 OTG_FS host channel-11 transfer size register **/
#define OTG_FS_HOST_OTG_FS_HCTSIZ11			MMIO32(OTG_FS_HOST_BASE + 0x270)

/**@}*/


/** @defgroup otg_fs_host_otg_fs_hcfg OTGFSHCFG OTG_FS host configuration register (OTG_FS_HCFG)
@{*/

/** OTG_FS_HOST_OTG_FS_HCFG_FSLSS FS- and LS-only support **/
#define OTG_FS_HOST_OTG_FS_HCFG_FSLSS		(1 << 2)

#define OTG_FS_HOST_OTG_FS_HCFG_FSLSPCS_SHIFT		0
#define OTG_FS_HOST_OTG_FS_HCFG_FSLSPCS_MASK		0x03
/** @defgroup otg_fs_host_otg_fs_hcfg_fslspcs FSLSPCS FS/LS PHY clock select
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_host_otg_fs_hfir OTGFSHFIR OTG_FS Host frame interval register
@{*/


#define OTG_FS_HOST_OTG_FS_HFIR_FRIVL_SHIFT		0
#define OTG_FS_HOST_OTG_FS_HFIR_FRIVL_MASK		0xffff
/** @defgroup otg_fs_host_otg_fs_hfir_frivl FRIVL Frame interval
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_host_otg_fs_hfnum OTGFSHFNUM OTG_FS host frame number/frame time remaining register (OTG_FS_HFNUM)
@{*/


#define OTG_FS_HOST_OTG_FS_HFNUM_FTREM_SHIFT		16
#define OTG_FS_HOST_OTG_FS_HFNUM_FTREM_MASK		0xffff
/** @defgroup otg_fs_host_otg_fs_hfnum_ftrem FTREM Frame time remaining
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HFNUM_FRNUM_SHIFT		0
#define OTG_FS_HOST_OTG_FS_HFNUM_FRNUM_MASK		0xffff
/** @defgroup otg_fs_host_otg_fs_hfnum_frnum FRNUM Frame number
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_host_otg_fs_hptxsts OTGFSHPTXSTS OTG_FS_Host periodic transmit FIFO/queue status register (OTG_FS_HPTXSTS)
@{*/


#define OTG_FS_HOST_OTG_FS_HPTXSTS_PTXQTOP_SHIFT		24
#define OTG_FS_HOST_OTG_FS_HPTXSTS_PTXQTOP_MASK		0xff
/** @defgroup otg_fs_host_otg_fs_hptxsts_ptxqtop PTXQTOP Top of the periodic transmit request queue
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HPTXSTS_PTXQSAV_SHIFT		16
#define OTG_FS_HOST_OTG_FS_HPTXSTS_PTXQSAV_MASK		0xff
/** @defgroup otg_fs_host_otg_fs_hptxsts_ptxqsav PTXQSAV Periodic transmit request queue space available
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HPTXSTS_PTXFSAVL_SHIFT		0
#define OTG_FS_HOST_OTG_FS_HPTXSTS_PTXFSAVL_MASK		0xffff
/** @defgroup otg_fs_host_otg_fs_hptxsts_ptxfsavl PTXFSAVL Periodic transmit data FIFO space available
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_host_otg_fs_haint OTGFSHAINT OTG_FS Host all channels interrupt register
@{*/


#define OTG_FS_HOST_OTG_FS_HAINT_HAINT_SHIFT		0
#define OTG_FS_HOST_OTG_FS_HAINT_HAINT_MASK		0xffff
/** @defgroup otg_fs_host_otg_fs_haint_haint HAINT Channel interrupts
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_host_otg_fs_haintmsk OTGFSHAINTMSK OTG_FS host all channels interrupt mask register
@{*/


#define OTG_FS_HOST_OTG_FS_HAINTMSK_HAINTM_SHIFT		0
#define OTG_FS_HOST_OTG_FS_HAINTMSK_HAINTM_MASK		0xffff
/** @defgroup otg_fs_host_otg_fs_haintmsk_haintm HAINTM Channel interrupt mask
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_host_otg_fs_hprt OTGFSHPRT OTG_FS host port control and status register (OTG_FS_HPRT)
@{*/


#define OTG_FS_HOST_OTG_FS_HPRT_PSPD_SHIFT		17
#define OTG_FS_HOST_OTG_FS_HPRT_PSPD_MASK		0x03
/** @defgroup otg_fs_host_otg_fs_hprt_pspd PSPD Port speed
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HPRT_PTCTL_SHIFT		13
#define OTG_FS_HOST_OTG_FS_HPRT_PTCTL_MASK		0x0f
/** @defgroup otg_fs_host_otg_fs_hprt_ptctl PTCTL Port test control
@{*/
/**@}*/

/** OTG_FS_HOST_OTG_FS_HPRT_PPWR Port power **/
#define OTG_FS_HOST_OTG_FS_HPRT_PPWR		(1 << 12)

#define OTG_FS_HOST_OTG_FS_HPRT_PLSTS_SHIFT		10
#define OTG_FS_HOST_OTG_FS_HPRT_PLSTS_MASK		0x03
/** @defgroup otg_fs_host_otg_fs_hprt_plsts PLSTS Port line status
@{*/
/**@}*/

/** OTG_FS_HOST_OTG_FS_HPRT_PRST Port reset **/
#define OTG_FS_HOST_OTG_FS_HPRT_PRST		(1 << 8)
/** OTG_FS_HOST_OTG_FS_HPRT_PSUSP Port suspend **/
#define OTG_FS_HOST_OTG_FS_HPRT_PSUSP		(1 << 7)
/** OTG_FS_HOST_OTG_FS_HPRT_PRES Port resume **/
#define OTG_FS_HOST_OTG_FS_HPRT_PRES		(1 << 6)
/** OTG_FS_HOST_OTG_FS_HPRT_POCCHNG Port overcurrent change **/
#define OTG_FS_HOST_OTG_FS_HPRT_POCCHNG		(1 << 5)
/** OTG_FS_HOST_OTG_FS_HPRT_POCA Port overcurrent active **/
#define OTG_FS_HOST_OTG_FS_HPRT_POCA		(1 << 4)
/** OTG_FS_HOST_OTG_FS_HPRT_PENCHNG Port enable/disable change **/
#define OTG_FS_HOST_OTG_FS_HPRT_PENCHNG		(1 << 3)
/** OTG_FS_HOST_OTG_FS_HPRT_PENA Port enable **/
#define OTG_FS_HOST_OTG_FS_HPRT_PENA		(1 << 2)
/** OTG_FS_HOST_OTG_FS_HPRT_PCDET Port connect detected **/
#define OTG_FS_HOST_OTG_FS_HPRT_PCDET		(1 << 1)
/** OTG_FS_HOST_OTG_FS_HPRT_PCSTS Port connect status **/
#define OTG_FS_HOST_OTG_FS_HPRT_PCSTS		(1 << 0)

/**@}*/

/** @defgroup otg_fs_host_otg_fs_hcchar0 OTGFSHCCHAR0 OTG_FS host channel-0 characteristics register (OTG_FS_HCCHAR0)
@{*/

/** OTG_FS_HOST_OTG_FS_HCCHAR0_CHENA Channel enable **/
#define OTG_FS_HOST_OTG_FS_HCCHAR0_CHENA		(1 << 31)
/** OTG_FS_HOST_OTG_FS_HCCHAR0_CHDIS Channel disable **/
#define OTG_FS_HOST_OTG_FS_HCCHAR0_CHDIS		(1 << 30)
/** OTG_FS_HOST_OTG_FS_HCCHAR0_ODDFRM Odd frame **/
#define OTG_FS_HOST_OTG_FS_HCCHAR0_ODDFRM		(1 << 29)

#define OTG_FS_HOST_OTG_FS_HCCHAR0_DAD_SHIFT		22
#define OTG_FS_HOST_OTG_FS_HCCHAR0_DAD_MASK		0x7f
/** @defgroup otg_fs_host_otg_fs_hcchar0_dad DAD Device address
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HCCHAR0_MCNT_SHIFT		20
#define OTG_FS_HOST_OTG_FS_HCCHAR0_MCNT_MASK		0x03
/** @defgroup otg_fs_host_otg_fs_hcchar0_mcnt MCNT Multicount
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HCCHAR0_EPTYP_SHIFT		18
#define OTG_FS_HOST_OTG_FS_HCCHAR0_EPTYP_MASK		0x03
/** @defgroup otg_fs_host_otg_fs_hcchar0_eptyp EPTYP Endpoint type
@{*/
/**@}*/

/** OTG_FS_HOST_OTG_FS_HCCHAR0_LSDEV Low-speed device **/
#define OTG_FS_HOST_OTG_FS_HCCHAR0_LSDEV		(1 << 17)
/** OTG_FS_HOST_OTG_FS_HCCHAR0_EPDIR Endpoint direction **/
#define OTG_FS_HOST_OTG_FS_HCCHAR0_EPDIR		(1 << 15)

#define OTG_FS_HOST_OTG_FS_HCCHAR0_EPNUM_SHIFT		11
#define OTG_FS_HOST_OTG_FS_HCCHAR0_EPNUM_MASK		0x0f
/** @defgroup otg_fs_host_otg_fs_hcchar0_epnum EPNUM Endpoint number
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HCCHAR0_MPSIZ_SHIFT		0
#define OTG_FS_HOST_OTG_FS_HCCHAR0_MPSIZ_MASK		0x7ff
/** @defgroup otg_fs_host_otg_fs_hcchar0_mpsiz MPSIZ Maximum packet size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_host_otg_fs_hcint0 OTGFSHCINT0 OTG_FS host channel-0 interrupt register (OTG_FS_HCINT0)
@{*/

/** OTG_FS_HOST_OTG_FS_HCINT0_DTERR Data toggle error **/
#define OTG_FS_HOST_OTG_FS_HCINT0_DTERR		(1 << 10)
/** OTG_FS_HOST_OTG_FS_HCINT0_FRMOR Frame overrun **/
#define OTG_FS_HOST_OTG_FS_HCINT0_FRMOR		(1 << 9)
/** OTG_FS_HOST_OTG_FS_HCINT0_BBERR Babble error **/
#define OTG_FS_HOST_OTG_FS_HCINT0_BBERR		(1 << 8)
/** OTG_FS_HOST_OTG_FS_HCINT0_TXERR Transaction error **/
#define OTG_FS_HOST_OTG_FS_HCINT0_TXERR		(1 << 7)
/** OTG_FS_HOST_OTG_FS_HCINT0_ACK ACK response received/transmitted interrupt **/
#define OTG_FS_HOST_OTG_FS_HCINT0_ACK		(1 << 5)
/** OTG_FS_HOST_OTG_FS_HCINT0_NAK NAK response received interrupt **/
#define OTG_FS_HOST_OTG_FS_HCINT0_NAK		(1 << 4)
/** OTG_FS_HOST_OTG_FS_HCINT0_STALL STALL response received interrupt **/
#define OTG_FS_HOST_OTG_FS_HCINT0_STALL		(1 << 3)
/** OTG_FS_HOST_OTG_FS_HCINT0_CHH Channel halted **/
#define OTG_FS_HOST_OTG_FS_HCINT0_CHH		(1 << 1)
/** OTG_FS_HOST_OTG_FS_HCINT0_XFRC Transfer completed **/
#define OTG_FS_HOST_OTG_FS_HCINT0_XFRC		(1 << 0)

/**@}*/

/** @defgroup otg_fs_host_otg_fs_hcintmsk0 OTGFSHCINTMSK0 OTG_FS host channel-0 mask register (OTG_FS_HCINTMSK0)
@{*/

/** OTG_FS_HOST_OTG_FS_HCINTMSK0_DTERRM Data toggle error mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK0_DTERRM		(1 << 10)
/** OTG_FS_HOST_OTG_FS_HCINTMSK0_FRMORM Frame overrun mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK0_FRMORM		(1 << 9)
/** OTG_FS_HOST_OTG_FS_HCINTMSK0_BBERRM Babble error mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK0_BBERRM		(1 << 8)
/** OTG_FS_HOST_OTG_FS_HCINTMSK0_TXERRM Transaction error mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK0_TXERRM		(1 << 7)
/** OTG_FS_HOST_OTG_FS_HCINTMSK0_NYET response received interrupt mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK0_NYET		(1 << 6)
/** OTG_FS_HOST_OTG_FS_HCINTMSK0_ACKM ACK response received/transmitted interrupt mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK0_ACKM		(1 << 5)
/** OTG_FS_HOST_OTG_FS_HCINTMSK0_NAKM NAK response received interrupt mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK0_NAKM		(1 << 4)
/** OTG_FS_HOST_OTG_FS_HCINTMSK0_STALLM STALL response received interrupt mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK0_STALLM		(1 << 3)
/** OTG_FS_HOST_OTG_FS_HCINTMSK0_CHHM Channel halted mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK0_CHHM		(1 << 1)
/** OTG_FS_HOST_OTG_FS_HCINTMSK0_XFRCM Transfer completed mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK0_XFRCM		(1 << 0)

/**@}*/

/** @defgroup otg_fs_host_otg_fs_hctsiz0 OTGFSHCTSIZ0 OTG_FS host channel-0 transfer size register
@{*/


#define OTG_FS_HOST_OTG_FS_HCTSIZ0_DPID_SHIFT		29
#define OTG_FS_HOST_OTG_FS_HCTSIZ0_DPID_MASK		0x03
/** @defgroup otg_fs_host_otg_fs_hctsiz0_dpid DPID Data PID
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HCTSIZ0_PKTCNT_SHIFT		19
#define OTG_FS_HOST_OTG_FS_HCTSIZ0_PKTCNT_MASK		0x3ff
/** @defgroup otg_fs_host_otg_fs_hctsiz0_pktcnt PKTCNT Packet count
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HCTSIZ0_XFRSIZ_SHIFT		0
#define OTG_FS_HOST_OTG_FS_HCTSIZ0_XFRSIZ_MASK		0x7ffff
/** @defgroup otg_fs_host_otg_fs_hctsiz0_xfrsiz XFRSIZ Transfer size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_host_otg_fs_hcchar1 OTGFSHCCHAR1 OTG_FS host channel-1 characteristics register (OTG_FS_HCCHAR1)
@{*/

/** OTG_FS_HOST_OTG_FS_HCCHAR1_CHENA Channel enable **/
#define OTG_FS_HOST_OTG_FS_HCCHAR1_CHENA		(1 << 31)
/** OTG_FS_HOST_OTG_FS_HCCHAR1_CHDIS Channel disable **/
#define OTG_FS_HOST_OTG_FS_HCCHAR1_CHDIS		(1 << 30)
/** OTG_FS_HOST_OTG_FS_HCCHAR1_ODDFRM Odd frame **/
#define OTG_FS_HOST_OTG_FS_HCCHAR1_ODDFRM		(1 << 29)

#define OTG_FS_HOST_OTG_FS_HCCHAR1_DAD_SHIFT		22
#define OTG_FS_HOST_OTG_FS_HCCHAR1_DAD_MASK		0x7f
/** @defgroup otg_fs_host_otg_fs_hcchar1_dad DAD Device address
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HCCHAR1_MCNT_SHIFT		20
#define OTG_FS_HOST_OTG_FS_HCCHAR1_MCNT_MASK		0x03
/** @defgroup otg_fs_host_otg_fs_hcchar1_mcnt MCNT Multicount
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HCCHAR1_EPTYP_SHIFT		18
#define OTG_FS_HOST_OTG_FS_HCCHAR1_EPTYP_MASK		0x03
/** @defgroup otg_fs_host_otg_fs_hcchar1_eptyp EPTYP Endpoint type
@{*/
/**@}*/

/** OTG_FS_HOST_OTG_FS_HCCHAR1_LSDEV Low-speed device **/
#define OTG_FS_HOST_OTG_FS_HCCHAR1_LSDEV		(1 << 17)
/** OTG_FS_HOST_OTG_FS_HCCHAR1_EPDIR Endpoint direction **/
#define OTG_FS_HOST_OTG_FS_HCCHAR1_EPDIR		(1 << 15)

#define OTG_FS_HOST_OTG_FS_HCCHAR1_EPNUM_SHIFT		11
#define OTG_FS_HOST_OTG_FS_HCCHAR1_EPNUM_MASK		0x0f
/** @defgroup otg_fs_host_otg_fs_hcchar1_epnum EPNUM Endpoint number
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HCCHAR1_MPSIZ_SHIFT		0
#define OTG_FS_HOST_OTG_FS_HCCHAR1_MPSIZ_MASK		0x7ff
/** @defgroup otg_fs_host_otg_fs_hcchar1_mpsiz MPSIZ Maximum packet size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_host_otg_fs_hcint1 OTGFSHCINT1 OTG_FS host channel-1 interrupt register (OTG_FS_HCINT1)
@{*/

/** OTG_FS_HOST_OTG_FS_HCINT1_DTERR Data toggle error **/
#define OTG_FS_HOST_OTG_FS_HCINT1_DTERR		(1 << 10)
/** OTG_FS_HOST_OTG_FS_HCINT1_FRMOR Frame overrun **/
#define OTG_FS_HOST_OTG_FS_HCINT1_FRMOR		(1 << 9)
/** OTG_FS_HOST_OTG_FS_HCINT1_BBERR Babble error **/
#define OTG_FS_HOST_OTG_FS_HCINT1_BBERR		(1 << 8)
/** OTG_FS_HOST_OTG_FS_HCINT1_TXERR Transaction error **/
#define OTG_FS_HOST_OTG_FS_HCINT1_TXERR		(1 << 7)
/** OTG_FS_HOST_OTG_FS_HCINT1_ACK ACK response received/transmitted interrupt **/
#define OTG_FS_HOST_OTG_FS_HCINT1_ACK		(1 << 5)
/** OTG_FS_HOST_OTG_FS_HCINT1_NAK NAK response received interrupt **/
#define OTG_FS_HOST_OTG_FS_HCINT1_NAK		(1 << 4)
/** OTG_FS_HOST_OTG_FS_HCINT1_STALL STALL response received interrupt **/
#define OTG_FS_HOST_OTG_FS_HCINT1_STALL		(1 << 3)
/** OTG_FS_HOST_OTG_FS_HCINT1_CHH Channel halted **/
#define OTG_FS_HOST_OTG_FS_HCINT1_CHH		(1 << 1)
/** OTG_FS_HOST_OTG_FS_HCINT1_XFRC Transfer completed **/
#define OTG_FS_HOST_OTG_FS_HCINT1_XFRC		(1 << 0)

/**@}*/

/** @defgroup otg_fs_host_otg_fs_hcintmsk1 OTGFSHCINTMSK1 OTG_FS host channel-1 mask register (OTG_FS_HCINTMSK1)
@{*/

/** OTG_FS_HOST_OTG_FS_HCINTMSK1_DTERRM Data toggle error mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK1_DTERRM		(1 << 10)
/** OTG_FS_HOST_OTG_FS_HCINTMSK1_FRMORM Frame overrun mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK1_FRMORM		(1 << 9)
/** OTG_FS_HOST_OTG_FS_HCINTMSK1_BBERRM Babble error mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK1_BBERRM		(1 << 8)
/** OTG_FS_HOST_OTG_FS_HCINTMSK1_TXERRM Transaction error mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK1_TXERRM		(1 << 7)
/** OTG_FS_HOST_OTG_FS_HCINTMSK1_NYET response received interrupt mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK1_NYET		(1 << 6)
/** OTG_FS_HOST_OTG_FS_HCINTMSK1_ACKM ACK response received/transmitted interrupt mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK1_ACKM		(1 << 5)
/** OTG_FS_HOST_OTG_FS_HCINTMSK1_NAKM NAK response received interrupt mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK1_NAKM		(1 << 4)
/** OTG_FS_HOST_OTG_FS_HCINTMSK1_STALLM STALL response received interrupt mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK1_STALLM		(1 << 3)
/** OTG_FS_HOST_OTG_FS_HCINTMSK1_CHHM Channel halted mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK1_CHHM		(1 << 1)
/** OTG_FS_HOST_OTG_FS_HCINTMSK1_XFRCM Transfer completed mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK1_XFRCM		(1 << 0)

/**@}*/

/** @defgroup otg_fs_host_otg_fs_hctsiz1 OTGFSHCTSIZ1 OTG_FS host channel-1 transfer size register
@{*/


#define OTG_FS_HOST_OTG_FS_HCTSIZ1_DPID_SHIFT		29
#define OTG_FS_HOST_OTG_FS_HCTSIZ1_DPID_MASK		0x03
/** @defgroup otg_fs_host_otg_fs_hctsiz1_dpid DPID Data PID
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HCTSIZ1_PKTCNT_SHIFT		19
#define OTG_FS_HOST_OTG_FS_HCTSIZ1_PKTCNT_MASK		0x3ff
/** @defgroup otg_fs_host_otg_fs_hctsiz1_pktcnt PKTCNT Packet count
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HCTSIZ1_XFRSIZ_SHIFT		0
#define OTG_FS_HOST_OTG_FS_HCTSIZ1_XFRSIZ_MASK		0x7ffff
/** @defgroup otg_fs_host_otg_fs_hctsiz1_xfrsiz XFRSIZ Transfer size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_host_otg_fs_hcchar2 OTGFSHCCHAR2 OTG_FS host channel-2 characteristics register (OTG_FS_HCCHAR2)
@{*/

/** OTG_FS_HOST_OTG_FS_HCCHAR2_CHENA Channel enable **/
#define OTG_FS_HOST_OTG_FS_HCCHAR2_CHENA		(1 << 31)
/** OTG_FS_HOST_OTG_FS_HCCHAR2_CHDIS Channel disable **/
#define OTG_FS_HOST_OTG_FS_HCCHAR2_CHDIS		(1 << 30)
/** OTG_FS_HOST_OTG_FS_HCCHAR2_ODDFRM Odd frame **/
#define OTG_FS_HOST_OTG_FS_HCCHAR2_ODDFRM		(1 << 29)

#define OTG_FS_HOST_OTG_FS_HCCHAR2_DAD_SHIFT		22
#define OTG_FS_HOST_OTG_FS_HCCHAR2_DAD_MASK		0x7f
/** @defgroup otg_fs_host_otg_fs_hcchar2_dad DAD Device address
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HCCHAR2_MCNT_SHIFT		20
#define OTG_FS_HOST_OTG_FS_HCCHAR2_MCNT_MASK		0x03
/** @defgroup otg_fs_host_otg_fs_hcchar2_mcnt MCNT Multicount
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HCCHAR2_EPTYP_SHIFT		18
#define OTG_FS_HOST_OTG_FS_HCCHAR2_EPTYP_MASK		0x03
/** @defgroup otg_fs_host_otg_fs_hcchar2_eptyp EPTYP Endpoint type
@{*/
/**@}*/

/** OTG_FS_HOST_OTG_FS_HCCHAR2_LSDEV Low-speed device **/
#define OTG_FS_HOST_OTG_FS_HCCHAR2_LSDEV		(1 << 17)
/** OTG_FS_HOST_OTG_FS_HCCHAR2_EPDIR Endpoint direction **/
#define OTG_FS_HOST_OTG_FS_HCCHAR2_EPDIR		(1 << 15)

#define OTG_FS_HOST_OTG_FS_HCCHAR2_EPNUM_SHIFT		11
#define OTG_FS_HOST_OTG_FS_HCCHAR2_EPNUM_MASK		0x0f
/** @defgroup otg_fs_host_otg_fs_hcchar2_epnum EPNUM Endpoint number
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HCCHAR2_MPSIZ_SHIFT		0
#define OTG_FS_HOST_OTG_FS_HCCHAR2_MPSIZ_MASK		0x7ff
/** @defgroup otg_fs_host_otg_fs_hcchar2_mpsiz MPSIZ Maximum packet size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_host_otg_fs_hcint2 OTGFSHCINT2 OTG_FS host channel-2 interrupt register (OTG_FS_HCINT2)
@{*/

/** OTG_FS_HOST_OTG_FS_HCINT2_DTERR Data toggle error **/
#define OTG_FS_HOST_OTG_FS_HCINT2_DTERR		(1 << 10)
/** OTG_FS_HOST_OTG_FS_HCINT2_FRMOR Frame overrun **/
#define OTG_FS_HOST_OTG_FS_HCINT2_FRMOR		(1 << 9)
/** OTG_FS_HOST_OTG_FS_HCINT2_BBERR Babble error **/
#define OTG_FS_HOST_OTG_FS_HCINT2_BBERR		(1 << 8)
/** OTG_FS_HOST_OTG_FS_HCINT2_TXERR Transaction error **/
#define OTG_FS_HOST_OTG_FS_HCINT2_TXERR		(1 << 7)
/** OTG_FS_HOST_OTG_FS_HCINT2_ACK ACK response received/transmitted interrupt **/
#define OTG_FS_HOST_OTG_FS_HCINT2_ACK		(1 << 5)
/** OTG_FS_HOST_OTG_FS_HCINT2_NAK NAK response received interrupt **/
#define OTG_FS_HOST_OTG_FS_HCINT2_NAK		(1 << 4)
/** OTG_FS_HOST_OTG_FS_HCINT2_STALL STALL response received interrupt **/
#define OTG_FS_HOST_OTG_FS_HCINT2_STALL		(1 << 3)
/** OTG_FS_HOST_OTG_FS_HCINT2_CHH Channel halted **/
#define OTG_FS_HOST_OTG_FS_HCINT2_CHH		(1 << 1)
/** OTG_FS_HOST_OTG_FS_HCINT2_XFRC Transfer completed **/
#define OTG_FS_HOST_OTG_FS_HCINT2_XFRC		(1 << 0)

/**@}*/

/** @defgroup otg_fs_host_otg_fs_hcintmsk2 OTGFSHCINTMSK2 OTG_FS host channel-2 mask register (OTG_FS_HCINTMSK2)
@{*/

/** OTG_FS_HOST_OTG_FS_HCINTMSK2_DTERRM Data toggle error mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK2_DTERRM		(1 << 10)
/** OTG_FS_HOST_OTG_FS_HCINTMSK2_FRMORM Frame overrun mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK2_FRMORM		(1 << 9)
/** OTG_FS_HOST_OTG_FS_HCINTMSK2_BBERRM Babble error mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK2_BBERRM		(1 << 8)
/** OTG_FS_HOST_OTG_FS_HCINTMSK2_TXERRM Transaction error mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK2_TXERRM		(1 << 7)
/** OTG_FS_HOST_OTG_FS_HCINTMSK2_NYET response received interrupt mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK2_NYET		(1 << 6)
/** OTG_FS_HOST_OTG_FS_HCINTMSK2_ACKM ACK response received/transmitted interrupt mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK2_ACKM		(1 << 5)
/** OTG_FS_HOST_OTG_FS_HCINTMSK2_NAKM NAK response received interrupt mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK2_NAKM		(1 << 4)
/** OTG_FS_HOST_OTG_FS_HCINTMSK2_STALLM STALL response received interrupt mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK2_STALLM		(1 << 3)
/** OTG_FS_HOST_OTG_FS_HCINTMSK2_CHHM Channel halted mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK2_CHHM		(1 << 1)
/** OTG_FS_HOST_OTG_FS_HCINTMSK2_XFRCM Transfer completed mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK2_XFRCM		(1 << 0)

/**@}*/

/** @defgroup otg_fs_host_otg_fs_hctsiz2 OTGFSHCTSIZ2 OTG_FS host channel-2 transfer size register
@{*/


#define OTG_FS_HOST_OTG_FS_HCTSIZ2_DPID_SHIFT		29
#define OTG_FS_HOST_OTG_FS_HCTSIZ2_DPID_MASK		0x03
/** @defgroup otg_fs_host_otg_fs_hctsiz2_dpid DPID Data PID
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HCTSIZ2_PKTCNT_SHIFT		19
#define OTG_FS_HOST_OTG_FS_HCTSIZ2_PKTCNT_MASK		0x3ff
/** @defgroup otg_fs_host_otg_fs_hctsiz2_pktcnt PKTCNT Packet count
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HCTSIZ2_XFRSIZ_SHIFT		0
#define OTG_FS_HOST_OTG_FS_HCTSIZ2_XFRSIZ_MASK		0x7ffff
/** @defgroup otg_fs_host_otg_fs_hctsiz2_xfrsiz XFRSIZ Transfer size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_host_otg_fs_hcchar3 OTGFSHCCHAR3 OTG_FS host channel-3 characteristics register (OTG_FS_HCCHAR3)
@{*/

/** OTG_FS_HOST_OTG_FS_HCCHAR3_CHENA Channel enable **/
#define OTG_FS_HOST_OTG_FS_HCCHAR3_CHENA		(1 << 31)
/** OTG_FS_HOST_OTG_FS_HCCHAR3_CHDIS Channel disable **/
#define OTG_FS_HOST_OTG_FS_HCCHAR3_CHDIS		(1 << 30)
/** OTG_FS_HOST_OTG_FS_HCCHAR3_ODDFRM Odd frame **/
#define OTG_FS_HOST_OTG_FS_HCCHAR3_ODDFRM		(1 << 29)

#define OTG_FS_HOST_OTG_FS_HCCHAR3_DAD_SHIFT		22
#define OTG_FS_HOST_OTG_FS_HCCHAR3_DAD_MASK		0x7f
/** @defgroup otg_fs_host_otg_fs_hcchar3_dad DAD Device address
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HCCHAR3_MCNT_SHIFT		20
#define OTG_FS_HOST_OTG_FS_HCCHAR3_MCNT_MASK		0x03
/** @defgroup otg_fs_host_otg_fs_hcchar3_mcnt MCNT Multicount
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HCCHAR3_EPTYP_SHIFT		18
#define OTG_FS_HOST_OTG_FS_HCCHAR3_EPTYP_MASK		0x03
/** @defgroup otg_fs_host_otg_fs_hcchar3_eptyp EPTYP Endpoint type
@{*/
/**@}*/

/** OTG_FS_HOST_OTG_FS_HCCHAR3_LSDEV Low-speed device **/
#define OTG_FS_HOST_OTG_FS_HCCHAR3_LSDEV		(1 << 17)
/** OTG_FS_HOST_OTG_FS_HCCHAR3_EPDIR Endpoint direction **/
#define OTG_FS_HOST_OTG_FS_HCCHAR3_EPDIR		(1 << 15)

#define OTG_FS_HOST_OTG_FS_HCCHAR3_EPNUM_SHIFT		11
#define OTG_FS_HOST_OTG_FS_HCCHAR3_EPNUM_MASK		0x0f
/** @defgroup otg_fs_host_otg_fs_hcchar3_epnum EPNUM Endpoint number
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HCCHAR3_MPSIZ_SHIFT		0
#define OTG_FS_HOST_OTG_FS_HCCHAR3_MPSIZ_MASK		0x7ff
/** @defgroup otg_fs_host_otg_fs_hcchar3_mpsiz MPSIZ Maximum packet size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_host_otg_fs_hcint3 OTGFSHCINT3 OTG_FS host channel-3 interrupt register (OTG_FS_HCINT3)
@{*/

/** OTG_FS_HOST_OTG_FS_HCINT3_DTERR Data toggle error **/
#define OTG_FS_HOST_OTG_FS_HCINT3_DTERR		(1 << 10)
/** OTG_FS_HOST_OTG_FS_HCINT3_FRMOR Frame overrun **/
#define OTG_FS_HOST_OTG_FS_HCINT3_FRMOR		(1 << 9)
/** OTG_FS_HOST_OTG_FS_HCINT3_BBERR Babble error **/
#define OTG_FS_HOST_OTG_FS_HCINT3_BBERR		(1 << 8)
/** OTG_FS_HOST_OTG_FS_HCINT3_TXERR Transaction error **/
#define OTG_FS_HOST_OTG_FS_HCINT3_TXERR		(1 << 7)
/** OTG_FS_HOST_OTG_FS_HCINT3_ACK ACK response received/transmitted interrupt **/
#define OTG_FS_HOST_OTG_FS_HCINT3_ACK		(1 << 5)
/** OTG_FS_HOST_OTG_FS_HCINT3_NAK NAK response received interrupt **/
#define OTG_FS_HOST_OTG_FS_HCINT3_NAK		(1 << 4)
/** OTG_FS_HOST_OTG_FS_HCINT3_STALL STALL response received interrupt **/
#define OTG_FS_HOST_OTG_FS_HCINT3_STALL		(1 << 3)
/** OTG_FS_HOST_OTG_FS_HCINT3_CHH Channel halted **/
#define OTG_FS_HOST_OTG_FS_HCINT3_CHH		(1 << 1)
/** OTG_FS_HOST_OTG_FS_HCINT3_XFRC Transfer completed **/
#define OTG_FS_HOST_OTG_FS_HCINT3_XFRC		(1 << 0)

/**@}*/

/** @defgroup otg_fs_host_otg_fs_hcintmsk3 OTGFSHCINTMSK3 OTG_FS host channel-3 mask register (OTG_FS_HCINTMSK3)
@{*/

/** OTG_FS_HOST_OTG_FS_HCINTMSK3_DTERRM Data toggle error mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK3_DTERRM		(1 << 10)
/** OTG_FS_HOST_OTG_FS_HCINTMSK3_FRMORM Frame overrun mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK3_FRMORM		(1 << 9)
/** OTG_FS_HOST_OTG_FS_HCINTMSK3_BBERRM Babble error mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK3_BBERRM		(1 << 8)
/** OTG_FS_HOST_OTG_FS_HCINTMSK3_TXERRM Transaction error mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK3_TXERRM		(1 << 7)
/** OTG_FS_HOST_OTG_FS_HCINTMSK3_NYET response received interrupt mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK3_NYET		(1 << 6)
/** OTG_FS_HOST_OTG_FS_HCINTMSK3_ACKM ACK response received/transmitted interrupt mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK3_ACKM		(1 << 5)
/** OTG_FS_HOST_OTG_FS_HCINTMSK3_NAKM NAK response received interrupt mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK3_NAKM		(1 << 4)
/** OTG_FS_HOST_OTG_FS_HCINTMSK3_STALLM STALL response received interrupt mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK3_STALLM		(1 << 3)
/** OTG_FS_HOST_OTG_FS_HCINTMSK3_CHHM Channel halted mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK3_CHHM		(1 << 1)
/** OTG_FS_HOST_OTG_FS_HCINTMSK3_XFRCM Transfer completed mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK3_XFRCM		(1 << 0)

/**@}*/

/** @defgroup otg_fs_host_otg_fs_hctsiz3 OTGFSHCTSIZ3 OTG_FS host channel-3 transfer size register
@{*/


#define OTG_FS_HOST_OTG_FS_HCTSIZ3_DPID_SHIFT		29
#define OTG_FS_HOST_OTG_FS_HCTSIZ3_DPID_MASK		0x03
/** @defgroup otg_fs_host_otg_fs_hctsiz3_dpid DPID Data PID
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HCTSIZ3_PKTCNT_SHIFT		19
#define OTG_FS_HOST_OTG_FS_HCTSIZ3_PKTCNT_MASK		0x3ff
/** @defgroup otg_fs_host_otg_fs_hctsiz3_pktcnt PKTCNT Packet count
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HCTSIZ3_XFRSIZ_SHIFT		0
#define OTG_FS_HOST_OTG_FS_HCTSIZ3_XFRSIZ_MASK		0x7ffff
/** @defgroup otg_fs_host_otg_fs_hctsiz3_xfrsiz XFRSIZ Transfer size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_host_otg_fs_hcchar4 OTGFSHCCHAR4 OTG_FS host channel-4 characteristics register (OTG_FS_HCCHAR4)
@{*/

/** OTG_FS_HOST_OTG_FS_HCCHAR4_CHENA Channel enable **/
#define OTG_FS_HOST_OTG_FS_HCCHAR4_CHENA		(1 << 31)
/** OTG_FS_HOST_OTG_FS_HCCHAR4_CHDIS Channel disable **/
#define OTG_FS_HOST_OTG_FS_HCCHAR4_CHDIS		(1 << 30)
/** OTG_FS_HOST_OTG_FS_HCCHAR4_ODDFRM Odd frame **/
#define OTG_FS_HOST_OTG_FS_HCCHAR4_ODDFRM		(1 << 29)

#define OTG_FS_HOST_OTG_FS_HCCHAR4_DAD_SHIFT		22
#define OTG_FS_HOST_OTG_FS_HCCHAR4_DAD_MASK		0x7f
/** @defgroup otg_fs_host_otg_fs_hcchar4_dad DAD Device address
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HCCHAR4_MCNT_SHIFT		20
#define OTG_FS_HOST_OTG_FS_HCCHAR4_MCNT_MASK		0x03
/** @defgroup otg_fs_host_otg_fs_hcchar4_mcnt MCNT Multicount
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HCCHAR4_EPTYP_SHIFT		18
#define OTG_FS_HOST_OTG_FS_HCCHAR4_EPTYP_MASK		0x03
/** @defgroup otg_fs_host_otg_fs_hcchar4_eptyp EPTYP Endpoint type
@{*/
/**@}*/

/** OTG_FS_HOST_OTG_FS_HCCHAR4_LSDEV Low-speed device **/
#define OTG_FS_HOST_OTG_FS_HCCHAR4_LSDEV		(1 << 17)
/** OTG_FS_HOST_OTG_FS_HCCHAR4_EPDIR Endpoint direction **/
#define OTG_FS_HOST_OTG_FS_HCCHAR4_EPDIR		(1 << 15)

#define OTG_FS_HOST_OTG_FS_HCCHAR4_EPNUM_SHIFT		11
#define OTG_FS_HOST_OTG_FS_HCCHAR4_EPNUM_MASK		0x0f
/** @defgroup otg_fs_host_otg_fs_hcchar4_epnum EPNUM Endpoint number
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HCCHAR4_MPSIZ_SHIFT		0
#define OTG_FS_HOST_OTG_FS_HCCHAR4_MPSIZ_MASK		0x7ff
/** @defgroup otg_fs_host_otg_fs_hcchar4_mpsiz MPSIZ Maximum packet size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_host_otg_fs_hcint4 OTGFSHCINT4 OTG_FS host channel-4 interrupt register (OTG_FS_HCINT4)
@{*/

/** OTG_FS_HOST_OTG_FS_HCINT4_DTERR Data toggle error **/
#define OTG_FS_HOST_OTG_FS_HCINT4_DTERR		(1 << 10)
/** OTG_FS_HOST_OTG_FS_HCINT4_FRMOR Frame overrun **/
#define OTG_FS_HOST_OTG_FS_HCINT4_FRMOR		(1 << 9)
/** OTG_FS_HOST_OTG_FS_HCINT4_BBERR Babble error **/
#define OTG_FS_HOST_OTG_FS_HCINT4_BBERR		(1 << 8)
/** OTG_FS_HOST_OTG_FS_HCINT4_TXERR Transaction error **/
#define OTG_FS_HOST_OTG_FS_HCINT4_TXERR		(1 << 7)
/** OTG_FS_HOST_OTG_FS_HCINT4_ACK ACK response received/transmitted interrupt **/
#define OTG_FS_HOST_OTG_FS_HCINT4_ACK		(1 << 5)
/** OTG_FS_HOST_OTG_FS_HCINT4_NAK NAK response received interrupt **/
#define OTG_FS_HOST_OTG_FS_HCINT4_NAK		(1 << 4)
/** OTG_FS_HOST_OTG_FS_HCINT4_STALL STALL response received interrupt **/
#define OTG_FS_HOST_OTG_FS_HCINT4_STALL		(1 << 3)
/** OTG_FS_HOST_OTG_FS_HCINT4_CHH Channel halted **/
#define OTG_FS_HOST_OTG_FS_HCINT4_CHH		(1 << 1)
/** OTG_FS_HOST_OTG_FS_HCINT4_XFRC Transfer completed **/
#define OTG_FS_HOST_OTG_FS_HCINT4_XFRC		(1 << 0)

/**@}*/

/** @defgroup otg_fs_host_otg_fs_hcintmsk4 OTGFSHCINTMSK4 OTG_FS host channel-4 mask register (OTG_FS_HCINTMSK4)
@{*/

/** OTG_FS_HOST_OTG_FS_HCINTMSK4_DTERRM Data toggle error mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK4_DTERRM		(1 << 10)
/** OTG_FS_HOST_OTG_FS_HCINTMSK4_FRMORM Frame overrun mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK4_FRMORM		(1 << 9)
/** OTG_FS_HOST_OTG_FS_HCINTMSK4_BBERRM Babble error mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK4_BBERRM		(1 << 8)
/** OTG_FS_HOST_OTG_FS_HCINTMSK4_TXERRM Transaction error mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK4_TXERRM		(1 << 7)
/** OTG_FS_HOST_OTG_FS_HCINTMSK4_NYET response received interrupt mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK4_NYET		(1 << 6)
/** OTG_FS_HOST_OTG_FS_HCINTMSK4_ACKM ACK response received/transmitted interrupt mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK4_ACKM		(1 << 5)
/** OTG_FS_HOST_OTG_FS_HCINTMSK4_NAKM NAK response received interrupt mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK4_NAKM		(1 << 4)
/** OTG_FS_HOST_OTG_FS_HCINTMSK4_STALLM STALL response received interrupt mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK4_STALLM		(1 << 3)
/** OTG_FS_HOST_OTG_FS_HCINTMSK4_CHHM Channel halted mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK4_CHHM		(1 << 1)
/** OTG_FS_HOST_OTG_FS_HCINTMSK4_XFRCM Transfer completed mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK4_XFRCM		(1 << 0)

/**@}*/

/** @defgroup otg_fs_host_otg_fs_hctsiz4 OTGFSHCTSIZ4 OTG_FS host channel-x transfer size register
@{*/


#define OTG_FS_HOST_OTG_FS_HCTSIZ4_DPID_SHIFT		29
#define OTG_FS_HOST_OTG_FS_HCTSIZ4_DPID_MASK		0x03
/** @defgroup otg_fs_host_otg_fs_hctsiz4_dpid DPID Data PID
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HCTSIZ4_PKTCNT_SHIFT		19
#define OTG_FS_HOST_OTG_FS_HCTSIZ4_PKTCNT_MASK		0x3ff
/** @defgroup otg_fs_host_otg_fs_hctsiz4_pktcnt PKTCNT Packet count
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HCTSIZ4_XFRSIZ_SHIFT		0
#define OTG_FS_HOST_OTG_FS_HCTSIZ4_XFRSIZ_MASK		0x7ffff
/** @defgroup otg_fs_host_otg_fs_hctsiz4_xfrsiz XFRSIZ Transfer size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_host_otg_fs_hcchar5 OTGFSHCCHAR5 OTG_FS host channel-5 characteristics register (OTG_FS_HCCHAR5)
@{*/

/** OTG_FS_HOST_OTG_FS_HCCHAR5_CHENA Channel enable **/
#define OTG_FS_HOST_OTG_FS_HCCHAR5_CHENA		(1 << 31)
/** OTG_FS_HOST_OTG_FS_HCCHAR5_CHDIS Channel disable **/
#define OTG_FS_HOST_OTG_FS_HCCHAR5_CHDIS		(1 << 30)
/** OTG_FS_HOST_OTG_FS_HCCHAR5_ODDFRM Odd frame **/
#define OTG_FS_HOST_OTG_FS_HCCHAR5_ODDFRM		(1 << 29)

#define OTG_FS_HOST_OTG_FS_HCCHAR5_DAD_SHIFT		22
#define OTG_FS_HOST_OTG_FS_HCCHAR5_DAD_MASK		0x7f
/** @defgroup otg_fs_host_otg_fs_hcchar5_dad DAD Device address
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HCCHAR5_MCNT_SHIFT		20
#define OTG_FS_HOST_OTG_FS_HCCHAR5_MCNT_MASK		0x03
/** @defgroup otg_fs_host_otg_fs_hcchar5_mcnt MCNT Multicount
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HCCHAR5_EPTYP_SHIFT		18
#define OTG_FS_HOST_OTG_FS_HCCHAR5_EPTYP_MASK		0x03
/** @defgroup otg_fs_host_otg_fs_hcchar5_eptyp EPTYP Endpoint type
@{*/
/**@}*/

/** OTG_FS_HOST_OTG_FS_HCCHAR5_LSDEV Low-speed device **/
#define OTG_FS_HOST_OTG_FS_HCCHAR5_LSDEV		(1 << 17)
/** OTG_FS_HOST_OTG_FS_HCCHAR5_EPDIR Endpoint direction **/
#define OTG_FS_HOST_OTG_FS_HCCHAR5_EPDIR		(1 << 15)

#define OTG_FS_HOST_OTG_FS_HCCHAR5_EPNUM_SHIFT		11
#define OTG_FS_HOST_OTG_FS_HCCHAR5_EPNUM_MASK		0x0f
/** @defgroup otg_fs_host_otg_fs_hcchar5_epnum EPNUM Endpoint number
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HCCHAR5_MPSIZ_SHIFT		0
#define OTG_FS_HOST_OTG_FS_HCCHAR5_MPSIZ_MASK		0x7ff
/** @defgroup otg_fs_host_otg_fs_hcchar5_mpsiz MPSIZ Maximum packet size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_host_otg_fs_hcint5 OTGFSHCINT5 OTG_FS host channel-5 interrupt register (OTG_FS_HCINT5)
@{*/

/** OTG_FS_HOST_OTG_FS_HCINT5_DTERR Data toggle error **/
#define OTG_FS_HOST_OTG_FS_HCINT5_DTERR		(1 << 10)
/** OTG_FS_HOST_OTG_FS_HCINT5_FRMOR Frame overrun **/
#define OTG_FS_HOST_OTG_FS_HCINT5_FRMOR		(1 << 9)
/** OTG_FS_HOST_OTG_FS_HCINT5_BBERR Babble error **/
#define OTG_FS_HOST_OTG_FS_HCINT5_BBERR		(1 << 8)
/** OTG_FS_HOST_OTG_FS_HCINT5_TXERR Transaction error **/
#define OTG_FS_HOST_OTG_FS_HCINT5_TXERR		(1 << 7)
/** OTG_FS_HOST_OTG_FS_HCINT5_ACK ACK response received/transmitted interrupt **/
#define OTG_FS_HOST_OTG_FS_HCINT5_ACK		(1 << 5)
/** OTG_FS_HOST_OTG_FS_HCINT5_NAK NAK response received interrupt **/
#define OTG_FS_HOST_OTG_FS_HCINT5_NAK		(1 << 4)
/** OTG_FS_HOST_OTG_FS_HCINT5_STALL STALL response received interrupt **/
#define OTG_FS_HOST_OTG_FS_HCINT5_STALL		(1 << 3)
/** OTG_FS_HOST_OTG_FS_HCINT5_CHH Channel halted **/
#define OTG_FS_HOST_OTG_FS_HCINT5_CHH		(1 << 1)
/** OTG_FS_HOST_OTG_FS_HCINT5_XFRC Transfer completed **/
#define OTG_FS_HOST_OTG_FS_HCINT5_XFRC		(1 << 0)

/**@}*/

/** @defgroup otg_fs_host_otg_fs_hcintmsk5 OTGFSHCINTMSK5 OTG_FS host channel-5 mask register (OTG_FS_HCINTMSK5)
@{*/

/** OTG_FS_HOST_OTG_FS_HCINTMSK5_DTERRM Data toggle error mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK5_DTERRM		(1 << 10)
/** OTG_FS_HOST_OTG_FS_HCINTMSK5_FRMORM Frame overrun mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK5_FRMORM		(1 << 9)
/** OTG_FS_HOST_OTG_FS_HCINTMSK5_BBERRM Babble error mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK5_BBERRM		(1 << 8)
/** OTG_FS_HOST_OTG_FS_HCINTMSK5_TXERRM Transaction error mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK5_TXERRM		(1 << 7)
/** OTG_FS_HOST_OTG_FS_HCINTMSK5_NYET response received interrupt mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK5_NYET		(1 << 6)
/** OTG_FS_HOST_OTG_FS_HCINTMSK5_ACKM ACK response received/transmitted interrupt mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK5_ACKM		(1 << 5)
/** OTG_FS_HOST_OTG_FS_HCINTMSK5_NAKM NAK response received interrupt mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK5_NAKM		(1 << 4)
/** OTG_FS_HOST_OTG_FS_HCINTMSK5_STALLM STALL response received interrupt mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK5_STALLM		(1 << 3)
/** OTG_FS_HOST_OTG_FS_HCINTMSK5_CHHM Channel halted mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK5_CHHM		(1 << 1)
/** OTG_FS_HOST_OTG_FS_HCINTMSK5_XFRCM Transfer completed mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK5_XFRCM		(1 << 0)

/**@}*/

/** @defgroup otg_fs_host_otg_fs_hctsiz5 OTGFSHCTSIZ5 OTG_FS host channel-5 transfer size register
@{*/


#define OTG_FS_HOST_OTG_FS_HCTSIZ5_DPID_SHIFT		29
#define OTG_FS_HOST_OTG_FS_HCTSIZ5_DPID_MASK		0x03
/** @defgroup otg_fs_host_otg_fs_hctsiz5_dpid DPID Data PID
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HCTSIZ5_PKTCNT_SHIFT		19
#define OTG_FS_HOST_OTG_FS_HCTSIZ5_PKTCNT_MASK		0x3ff
/** @defgroup otg_fs_host_otg_fs_hctsiz5_pktcnt PKTCNT Packet count
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HCTSIZ5_XFRSIZ_SHIFT		0
#define OTG_FS_HOST_OTG_FS_HCTSIZ5_XFRSIZ_MASK		0x7ffff
/** @defgroup otg_fs_host_otg_fs_hctsiz5_xfrsiz XFRSIZ Transfer size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_host_otg_fs_hcchar6 OTGFSHCCHAR6 OTG_FS host channel-6 characteristics register (OTG_FS_HCCHAR6)
@{*/

/** OTG_FS_HOST_OTG_FS_HCCHAR6_CHENA Channel enable **/
#define OTG_FS_HOST_OTG_FS_HCCHAR6_CHENA		(1 << 31)
/** OTG_FS_HOST_OTG_FS_HCCHAR6_CHDIS Channel disable **/
#define OTG_FS_HOST_OTG_FS_HCCHAR6_CHDIS		(1 << 30)
/** OTG_FS_HOST_OTG_FS_HCCHAR6_ODDFRM Odd frame **/
#define OTG_FS_HOST_OTG_FS_HCCHAR6_ODDFRM		(1 << 29)

#define OTG_FS_HOST_OTG_FS_HCCHAR6_DAD_SHIFT		22
#define OTG_FS_HOST_OTG_FS_HCCHAR6_DAD_MASK		0x7f
/** @defgroup otg_fs_host_otg_fs_hcchar6_dad DAD Device address
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HCCHAR6_MCNT_SHIFT		20
#define OTG_FS_HOST_OTG_FS_HCCHAR6_MCNT_MASK		0x03
/** @defgroup otg_fs_host_otg_fs_hcchar6_mcnt MCNT Multicount
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HCCHAR6_EPTYP_SHIFT		18
#define OTG_FS_HOST_OTG_FS_HCCHAR6_EPTYP_MASK		0x03
/** @defgroup otg_fs_host_otg_fs_hcchar6_eptyp EPTYP Endpoint type
@{*/
/**@}*/

/** OTG_FS_HOST_OTG_FS_HCCHAR6_LSDEV Low-speed device **/
#define OTG_FS_HOST_OTG_FS_HCCHAR6_LSDEV		(1 << 17)
/** OTG_FS_HOST_OTG_FS_HCCHAR6_EPDIR Endpoint direction **/
#define OTG_FS_HOST_OTG_FS_HCCHAR6_EPDIR		(1 << 15)

#define OTG_FS_HOST_OTG_FS_HCCHAR6_EPNUM_SHIFT		11
#define OTG_FS_HOST_OTG_FS_HCCHAR6_EPNUM_MASK		0x0f
/** @defgroup otg_fs_host_otg_fs_hcchar6_epnum EPNUM Endpoint number
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HCCHAR6_MPSIZ_SHIFT		0
#define OTG_FS_HOST_OTG_FS_HCCHAR6_MPSIZ_MASK		0x7ff
/** @defgroup otg_fs_host_otg_fs_hcchar6_mpsiz MPSIZ Maximum packet size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_host_otg_fs_hcint6 OTGFSHCINT6 OTG_FS host channel-6 interrupt register (OTG_FS_HCINT6)
@{*/

/** OTG_FS_HOST_OTG_FS_HCINT6_DTERR Data toggle error **/
#define OTG_FS_HOST_OTG_FS_HCINT6_DTERR		(1 << 10)
/** OTG_FS_HOST_OTG_FS_HCINT6_FRMOR Frame overrun **/
#define OTG_FS_HOST_OTG_FS_HCINT6_FRMOR		(1 << 9)
/** OTG_FS_HOST_OTG_FS_HCINT6_BBERR Babble error **/
#define OTG_FS_HOST_OTG_FS_HCINT6_BBERR		(1 << 8)
/** OTG_FS_HOST_OTG_FS_HCINT6_TXERR Transaction error **/
#define OTG_FS_HOST_OTG_FS_HCINT6_TXERR		(1 << 7)
/** OTG_FS_HOST_OTG_FS_HCINT6_ACK ACK response received/transmitted interrupt **/
#define OTG_FS_HOST_OTG_FS_HCINT6_ACK		(1 << 5)
/** OTG_FS_HOST_OTG_FS_HCINT6_NAK NAK response received interrupt **/
#define OTG_FS_HOST_OTG_FS_HCINT6_NAK		(1 << 4)
/** OTG_FS_HOST_OTG_FS_HCINT6_STALL STALL response received interrupt **/
#define OTG_FS_HOST_OTG_FS_HCINT6_STALL		(1 << 3)
/** OTG_FS_HOST_OTG_FS_HCINT6_CHH Channel halted **/
#define OTG_FS_HOST_OTG_FS_HCINT6_CHH		(1 << 1)
/** OTG_FS_HOST_OTG_FS_HCINT6_XFRC Transfer completed **/
#define OTG_FS_HOST_OTG_FS_HCINT6_XFRC		(1 << 0)

/**@}*/

/** @defgroup otg_fs_host_otg_fs_hcintmsk6 OTGFSHCINTMSK6 OTG_FS host channel-6 mask register (OTG_FS_HCINTMSK6)
@{*/

/** OTG_FS_HOST_OTG_FS_HCINTMSK6_DTERRM Data toggle error mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK6_DTERRM		(1 << 10)
/** OTG_FS_HOST_OTG_FS_HCINTMSK6_FRMORM Frame overrun mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK6_FRMORM		(1 << 9)
/** OTG_FS_HOST_OTG_FS_HCINTMSK6_BBERRM Babble error mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK6_BBERRM		(1 << 8)
/** OTG_FS_HOST_OTG_FS_HCINTMSK6_TXERRM Transaction error mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK6_TXERRM		(1 << 7)
/** OTG_FS_HOST_OTG_FS_HCINTMSK6_NYET response received interrupt mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK6_NYET		(1 << 6)
/** OTG_FS_HOST_OTG_FS_HCINTMSK6_ACKM ACK response received/transmitted interrupt mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK6_ACKM		(1 << 5)
/** OTG_FS_HOST_OTG_FS_HCINTMSK6_NAKM NAK response received interrupt mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK6_NAKM		(1 << 4)
/** OTG_FS_HOST_OTG_FS_HCINTMSK6_STALLM STALL response received interrupt mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK6_STALLM		(1 << 3)
/** OTG_FS_HOST_OTG_FS_HCINTMSK6_CHHM Channel halted mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK6_CHHM		(1 << 1)
/** OTG_FS_HOST_OTG_FS_HCINTMSK6_XFRCM Transfer completed mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK6_XFRCM		(1 << 0)

/**@}*/

/** @defgroup otg_fs_host_otg_fs_hctsiz6 OTGFSHCTSIZ6 OTG_FS host channel-6 transfer size register
@{*/


#define OTG_FS_HOST_OTG_FS_HCTSIZ6_DPID_SHIFT		29
#define OTG_FS_HOST_OTG_FS_HCTSIZ6_DPID_MASK		0x03
/** @defgroup otg_fs_host_otg_fs_hctsiz6_dpid DPID Data PID
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HCTSIZ6_PKTCNT_SHIFT		19
#define OTG_FS_HOST_OTG_FS_HCTSIZ6_PKTCNT_MASK		0x3ff
/** @defgroup otg_fs_host_otg_fs_hctsiz6_pktcnt PKTCNT Packet count
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HCTSIZ6_XFRSIZ_SHIFT		0
#define OTG_FS_HOST_OTG_FS_HCTSIZ6_XFRSIZ_MASK		0x7ffff
/** @defgroup otg_fs_host_otg_fs_hctsiz6_xfrsiz XFRSIZ Transfer size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_host_otg_fs_hcchar7 OTGFSHCCHAR7 OTG_FS host channel-7 characteristics register (OTG_FS_HCCHAR7)
@{*/

/** OTG_FS_HOST_OTG_FS_HCCHAR7_CHENA Channel enable **/
#define OTG_FS_HOST_OTG_FS_HCCHAR7_CHENA		(1 << 31)
/** OTG_FS_HOST_OTG_FS_HCCHAR7_CHDIS Channel disable **/
#define OTG_FS_HOST_OTG_FS_HCCHAR7_CHDIS		(1 << 30)
/** OTG_FS_HOST_OTG_FS_HCCHAR7_ODDFRM Odd frame **/
#define OTG_FS_HOST_OTG_FS_HCCHAR7_ODDFRM		(1 << 29)

#define OTG_FS_HOST_OTG_FS_HCCHAR7_DAD_SHIFT		22
#define OTG_FS_HOST_OTG_FS_HCCHAR7_DAD_MASK		0x7f
/** @defgroup otg_fs_host_otg_fs_hcchar7_dad DAD Device address
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HCCHAR7_MCNT_SHIFT		20
#define OTG_FS_HOST_OTG_FS_HCCHAR7_MCNT_MASK		0x03
/** @defgroup otg_fs_host_otg_fs_hcchar7_mcnt MCNT Multicount
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HCCHAR7_EPTYP_SHIFT		18
#define OTG_FS_HOST_OTG_FS_HCCHAR7_EPTYP_MASK		0x03
/** @defgroup otg_fs_host_otg_fs_hcchar7_eptyp EPTYP Endpoint type
@{*/
/**@}*/

/** OTG_FS_HOST_OTG_FS_HCCHAR7_LSDEV Low-speed device **/
#define OTG_FS_HOST_OTG_FS_HCCHAR7_LSDEV		(1 << 17)
/** OTG_FS_HOST_OTG_FS_HCCHAR7_EPDIR Endpoint direction **/
#define OTG_FS_HOST_OTG_FS_HCCHAR7_EPDIR		(1 << 15)

#define OTG_FS_HOST_OTG_FS_HCCHAR7_EPNUM_SHIFT		11
#define OTG_FS_HOST_OTG_FS_HCCHAR7_EPNUM_MASK		0x0f
/** @defgroup otg_fs_host_otg_fs_hcchar7_epnum EPNUM Endpoint number
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HCCHAR7_MPSIZ_SHIFT		0
#define OTG_FS_HOST_OTG_FS_HCCHAR7_MPSIZ_MASK		0x7ff
/** @defgroup otg_fs_host_otg_fs_hcchar7_mpsiz MPSIZ Maximum packet size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_host_otg_fs_hcint7 OTGFSHCINT7 OTG_FS host channel-7 interrupt register (OTG_FS_HCINT7)
@{*/

/** OTG_FS_HOST_OTG_FS_HCINT7_DTERR Data toggle error **/
#define OTG_FS_HOST_OTG_FS_HCINT7_DTERR		(1 << 10)
/** OTG_FS_HOST_OTG_FS_HCINT7_FRMOR Frame overrun **/
#define OTG_FS_HOST_OTG_FS_HCINT7_FRMOR		(1 << 9)
/** OTG_FS_HOST_OTG_FS_HCINT7_BBERR Babble error **/
#define OTG_FS_HOST_OTG_FS_HCINT7_BBERR		(1 << 8)
/** OTG_FS_HOST_OTG_FS_HCINT7_TXERR Transaction error **/
#define OTG_FS_HOST_OTG_FS_HCINT7_TXERR		(1 << 7)
/** OTG_FS_HOST_OTG_FS_HCINT7_ACK ACK response received/transmitted interrupt **/
#define OTG_FS_HOST_OTG_FS_HCINT7_ACK		(1 << 5)
/** OTG_FS_HOST_OTG_FS_HCINT7_NAK NAK response received interrupt **/
#define OTG_FS_HOST_OTG_FS_HCINT7_NAK		(1 << 4)
/** OTG_FS_HOST_OTG_FS_HCINT7_STALL STALL response received interrupt **/
#define OTG_FS_HOST_OTG_FS_HCINT7_STALL		(1 << 3)
/** OTG_FS_HOST_OTG_FS_HCINT7_CHH Channel halted **/
#define OTG_FS_HOST_OTG_FS_HCINT7_CHH		(1 << 1)
/** OTG_FS_HOST_OTG_FS_HCINT7_XFRC Transfer completed **/
#define OTG_FS_HOST_OTG_FS_HCINT7_XFRC		(1 << 0)

/**@}*/

/** @defgroup otg_fs_host_otg_fs_hcintmsk7 OTGFSHCINTMSK7 OTG_FS host channel-7 mask register (OTG_FS_HCINTMSK7)
@{*/

/** OTG_FS_HOST_OTG_FS_HCINTMSK7_DTERRM Data toggle error mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK7_DTERRM		(1 << 10)
/** OTG_FS_HOST_OTG_FS_HCINTMSK7_FRMORM Frame overrun mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK7_FRMORM		(1 << 9)
/** OTG_FS_HOST_OTG_FS_HCINTMSK7_BBERRM Babble error mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK7_BBERRM		(1 << 8)
/** OTG_FS_HOST_OTG_FS_HCINTMSK7_TXERRM Transaction error mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK7_TXERRM		(1 << 7)
/** OTG_FS_HOST_OTG_FS_HCINTMSK7_NYET response received interrupt mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK7_NYET		(1 << 6)
/** OTG_FS_HOST_OTG_FS_HCINTMSK7_ACKM ACK response received/transmitted interrupt mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK7_ACKM		(1 << 5)
/** OTG_FS_HOST_OTG_FS_HCINTMSK7_NAKM NAK response received interrupt mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK7_NAKM		(1 << 4)
/** OTG_FS_HOST_OTG_FS_HCINTMSK7_STALLM STALL response received interrupt mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK7_STALLM		(1 << 3)
/** OTG_FS_HOST_OTG_FS_HCINTMSK7_CHHM Channel halted mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK7_CHHM		(1 << 1)
/** OTG_FS_HOST_OTG_FS_HCINTMSK7_XFRCM Transfer completed mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK7_XFRCM		(1 << 0)

/**@}*/

/** @defgroup otg_fs_host_otg_fs_hctsiz7 OTGFSHCTSIZ7 OTG_FS host channel-7 transfer size register
@{*/


#define OTG_FS_HOST_OTG_FS_HCTSIZ7_DPID_SHIFT		29
#define OTG_FS_HOST_OTG_FS_HCTSIZ7_DPID_MASK		0x03
/** @defgroup otg_fs_host_otg_fs_hctsiz7_dpid DPID Data PID
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HCTSIZ7_PKTCNT_SHIFT		19
#define OTG_FS_HOST_OTG_FS_HCTSIZ7_PKTCNT_MASK		0x3ff
/** @defgroup otg_fs_host_otg_fs_hctsiz7_pktcnt PKTCNT Packet count
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HCTSIZ7_XFRSIZ_SHIFT		0
#define OTG_FS_HOST_OTG_FS_HCTSIZ7_XFRSIZ_MASK		0x7ffff
/** @defgroup otg_fs_host_otg_fs_hctsiz7_xfrsiz XFRSIZ Transfer size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_host_otg_fs_hcchar8 OTGFSHCCHAR8 OTG_FS host channel-8 characteristics register
@{*/

/** OTG_FS_HOST_OTG_FS_HCCHAR8_CHENA Channel enable **/
#define OTG_FS_HOST_OTG_FS_HCCHAR8_CHENA		(1 << 31)
/** OTG_FS_HOST_OTG_FS_HCCHAR8_CHDIS Channel disable **/
#define OTG_FS_HOST_OTG_FS_HCCHAR8_CHDIS		(1 << 30)
/** OTG_FS_HOST_OTG_FS_HCCHAR8_ODDFRM Odd frame **/
#define OTG_FS_HOST_OTG_FS_HCCHAR8_ODDFRM		(1 << 29)

#define OTG_FS_HOST_OTG_FS_HCCHAR8_DAD_SHIFT		22
#define OTG_FS_HOST_OTG_FS_HCCHAR8_DAD_MASK		0x7f
/** @defgroup otg_fs_host_otg_fs_hcchar8_dad DAD Device address
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HCCHAR8_MCNT_SHIFT		20
#define OTG_FS_HOST_OTG_FS_HCCHAR8_MCNT_MASK		0x03
/** @defgroup otg_fs_host_otg_fs_hcchar8_mcnt MCNT Multicount
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HCCHAR8_EPTYP_SHIFT		18
#define OTG_FS_HOST_OTG_FS_HCCHAR8_EPTYP_MASK		0x03
/** @defgroup otg_fs_host_otg_fs_hcchar8_eptyp EPTYP Endpoint type
@{*/
/**@}*/

/** OTG_FS_HOST_OTG_FS_HCCHAR8_LSDEV Low-speed device **/
#define OTG_FS_HOST_OTG_FS_HCCHAR8_LSDEV		(1 << 17)
/** OTG_FS_HOST_OTG_FS_HCCHAR8_EPDIR Endpoint direction **/
#define OTG_FS_HOST_OTG_FS_HCCHAR8_EPDIR		(1 << 15)

#define OTG_FS_HOST_OTG_FS_HCCHAR8_EPNUM_SHIFT		11
#define OTG_FS_HOST_OTG_FS_HCCHAR8_EPNUM_MASK		0x0f
/** @defgroup otg_fs_host_otg_fs_hcchar8_epnum EPNUM Endpoint number
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HCCHAR8_MPSIZ_SHIFT		0
#define OTG_FS_HOST_OTG_FS_HCCHAR8_MPSIZ_MASK		0x7ff
/** @defgroup otg_fs_host_otg_fs_hcchar8_mpsiz MPSIZ Maximum packet size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_host_otg_fs_hcint8 OTGFSHCINT8 OTG_FS host channel-8 interrupt register
@{*/

/** OTG_FS_HOST_OTG_FS_HCINT8_DTERR Data toggle error **/
#define OTG_FS_HOST_OTG_FS_HCINT8_DTERR		(1 << 10)
/** OTG_FS_HOST_OTG_FS_HCINT8_FRMOR Frame overrun **/
#define OTG_FS_HOST_OTG_FS_HCINT8_FRMOR		(1 << 9)
/** OTG_FS_HOST_OTG_FS_HCINT8_BBERR Babble error **/
#define OTG_FS_HOST_OTG_FS_HCINT8_BBERR		(1 << 8)
/** OTG_FS_HOST_OTG_FS_HCINT8_TXERR Transaction error **/
#define OTG_FS_HOST_OTG_FS_HCINT8_TXERR		(1 << 7)
/** OTG_FS_HOST_OTG_FS_HCINT8_ACK ACK response received/transmitted interrupt **/
#define OTG_FS_HOST_OTG_FS_HCINT8_ACK		(1 << 5)
/** OTG_FS_HOST_OTG_FS_HCINT8_NAK NAK response received interrupt **/
#define OTG_FS_HOST_OTG_FS_HCINT8_NAK		(1 << 4)
/** OTG_FS_HOST_OTG_FS_HCINT8_STALL STALL response received interrupt **/
#define OTG_FS_HOST_OTG_FS_HCINT8_STALL		(1 << 3)
/** OTG_FS_HOST_OTG_FS_HCINT8_CHH Channel halted **/
#define OTG_FS_HOST_OTG_FS_HCINT8_CHH		(1 << 1)
/** OTG_FS_HOST_OTG_FS_HCINT8_XFRC Transfer completed **/
#define OTG_FS_HOST_OTG_FS_HCINT8_XFRC		(1 << 0)

/**@}*/

/** @defgroup otg_fs_host_otg_fs_hcintmsk8 OTGFSHCINTMSK8 OTG_FS host channel-8 mask register
@{*/

/** OTG_FS_HOST_OTG_FS_HCINTMSK8_DTERRM Data toggle error mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK8_DTERRM		(1 << 10)
/** OTG_FS_HOST_OTG_FS_HCINTMSK8_FRMORM Frame overrun mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK8_FRMORM		(1 << 9)
/** OTG_FS_HOST_OTG_FS_HCINTMSK8_BBERRM Babble error mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK8_BBERRM		(1 << 8)
/** OTG_FS_HOST_OTG_FS_HCINTMSK8_TXERRM Transaction error **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK8_TXERRM		(1 << 7)
/** OTG_FS_HOST_OTG_FS_HCINTMSK8_NYET response received interrupt mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK8_NYET		(1 << 6)
/** OTG_FS_HOST_OTG_FS_HCINTMSK8_ACKM ACK response received/transmitted interrupt mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK8_ACKM		(1 << 5)
/** OTG_FS_HOST_OTG_FS_HCINTMSK8_NAKM NAK response received interrupt mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK8_NAKM		(1 << 4)
/** OTG_FS_HOST_OTG_FS_HCINTMSK8_STALLM STALL response received interrupt mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK8_STALLM		(1 << 3)
/** OTG_FS_HOST_OTG_FS_HCINTMSK8_CHHM Channel halted mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK8_CHHM		(1 << 1)
/** OTG_FS_HOST_OTG_FS_HCINTMSK8_XFRCM Transfer completed mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK8_XFRCM		(1 << 0)

/**@}*/

/** @defgroup otg_fs_host_otg_fs_hctsiz8 OTGFSHCTSIZ8 OTG_FS host channel-8 transfer size register
@{*/


#define OTG_FS_HOST_OTG_FS_HCTSIZ8_DPID_SHIFT		29
#define OTG_FS_HOST_OTG_FS_HCTSIZ8_DPID_MASK		0x03
/** @defgroup otg_fs_host_otg_fs_hctsiz8_dpid DPID Data PID
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HCTSIZ8_PKTCNT_SHIFT		19
#define OTG_FS_HOST_OTG_FS_HCTSIZ8_PKTCNT_MASK		0x3ff
/** @defgroup otg_fs_host_otg_fs_hctsiz8_pktcnt PKTCNT Packet count
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HCTSIZ8_XFRSIZ_SHIFT		0
#define OTG_FS_HOST_OTG_FS_HCTSIZ8_XFRSIZ_MASK		0x7ffff
/** @defgroup otg_fs_host_otg_fs_hctsiz8_xfrsiz XFRSIZ Transfer size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_host_otg_fs_hcchar9 OTGFSHCCHAR9 OTG_FS host channel-9 characteristics register
@{*/

/** OTG_FS_HOST_OTG_FS_HCCHAR9_CHENA Channel enable **/
#define OTG_FS_HOST_OTG_FS_HCCHAR9_CHENA		(1 << 31)
/** OTG_FS_HOST_OTG_FS_HCCHAR9_CHDIS Channel disable **/
#define OTG_FS_HOST_OTG_FS_HCCHAR9_CHDIS		(1 << 30)
/** OTG_FS_HOST_OTG_FS_HCCHAR9_ODDFRM Odd frame **/
#define OTG_FS_HOST_OTG_FS_HCCHAR9_ODDFRM		(1 << 29)

#define OTG_FS_HOST_OTG_FS_HCCHAR9_DAD_SHIFT		22
#define OTG_FS_HOST_OTG_FS_HCCHAR9_DAD_MASK		0x7f
/** @defgroup otg_fs_host_otg_fs_hcchar9_dad DAD Device address
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HCCHAR9_MCNT_SHIFT		20
#define OTG_FS_HOST_OTG_FS_HCCHAR9_MCNT_MASK		0x03
/** @defgroup otg_fs_host_otg_fs_hcchar9_mcnt MCNT Multicount
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HCCHAR9_EPTYP_SHIFT		18
#define OTG_FS_HOST_OTG_FS_HCCHAR9_EPTYP_MASK		0x03
/** @defgroup otg_fs_host_otg_fs_hcchar9_eptyp EPTYP Endpoint type
@{*/
/**@}*/

/** OTG_FS_HOST_OTG_FS_HCCHAR9_LSDEV Low-speed device **/
#define OTG_FS_HOST_OTG_FS_HCCHAR9_LSDEV		(1 << 17)
/** OTG_FS_HOST_OTG_FS_HCCHAR9_EPDIR Endpoint direction **/
#define OTG_FS_HOST_OTG_FS_HCCHAR9_EPDIR		(1 << 15)

#define OTG_FS_HOST_OTG_FS_HCCHAR9_EPNUM_SHIFT		11
#define OTG_FS_HOST_OTG_FS_HCCHAR9_EPNUM_MASK		0x0f
/** @defgroup otg_fs_host_otg_fs_hcchar9_epnum EPNUM Endpoint number
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HCCHAR9_MPSIZ_SHIFT		0
#define OTG_FS_HOST_OTG_FS_HCCHAR9_MPSIZ_MASK		0x7ff
/** @defgroup otg_fs_host_otg_fs_hcchar9_mpsiz MPSIZ Maximum packet size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_host_otg_fs_hcint9 OTGFSHCINT9 OTG_FS host channel-9 interrupt register
@{*/

/** OTG_FS_HOST_OTG_FS_HCINT9_DTERR Data toggle error **/
#define OTG_FS_HOST_OTG_FS_HCINT9_DTERR		(1 << 10)
/** OTG_FS_HOST_OTG_FS_HCINT9_FRMOR Frame overrun **/
#define OTG_FS_HOST_OTG_FS_HCINT9_FRMOR		(1 << 9)
/** OTG_FS_HOST_OTG_FS_HCINT9_BBERR Babble error **/
#define OTG_FS_HOST_OTG_FS_HCINT9_BBERR		(1 << 8)
/** OTG_FS_HOST_OTG_FS_HCINT9_TXERR Transaction error **/
#define OTG_FS_HOST_OTG_FS_HCINT9_TXERR		(1 << 7)
/** OTG_FS_HOST_OTG_FS_HCINT9_ACK ACK response received/transmitted interrupt **/
#define OTG_FS_HOST_OTG_FS_HCINT9_ACK		(1 << 5)
/** OTG_FS_HOST_OTG_FS_HCINT9_NAK NAK response received interrupt **/
#define OTG_FS_HOST_OTG_FS_HCINT9_NAK		(1 << 4)
/** OTG_FS_HOST_OTG_FS_HCINT9_STALL STALL response received interrupt **/
#define OTG_FS_HOST_OTG_FS_HCINT9_STALL		(1 << 3)
/** OTG_FS_HOST_OTG_FS_HCINT9_CHH Channel halted **/
#define OTG_FS_HOST_OTG_FS_HCINT9_CHH		(1 << 1)
/** OTG_FS_HOST_OTG_FS_HCINT9_XFRC Transfer completed **/
#define OTG_FS_HOST_OTG_FS_HCINT9_XFRC		(1 << 0)

/**@}*/

/** @defgroup otg_fs_host_otg_fs_hcintmsk9 OTGFSHCINTMSK9 OTG_FS host channel-9 mask register
@{*/

/** OTG_FS_HOST_OTG_FS_HCINTMSK9_DTERRM Data toggle error mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK9_DTERRM		(1 << 10)
/** OTG_FS_HOST_OTG_FS_HCINTMSK9_FRMORM Frame overrun mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK9_FRMORM		(1 << 9)
/** OTG_FS_HOST_OTG_FS_HCINTMSK9_BBERRM Babble error mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK9_BBERRM		(1 << 8)
/** OTG_FS_HOST_OTG_FS_HCINTMSK9_TXERRM Transaction error mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK9_TXERRM		(1 << 7)
/** OTG_FS_HOST_OTG_FS_HCINTMSK9_NYET response received interrupt mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK9_NYET		(1 << 6)
/** OTG_FS_HOST_OTG_FS_HCINTMSK9_ACKM ACK response received/transmitted interrupt mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK9_ACKM		(1 << 5)
/** OTG_FS_HOST_OTG_FS_HCINTMSK9_NAKM NAK response received interrupt mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK9_NAKM		(1 << 4)
/** OTG_FS_HOST_OTG_FS_HCINTMSK9_STALLM STALL response received interrupt mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK9_STALLM		(1 << 3)
/** OTG_FS_HOST_OTG_FS_HCINTMSK9_CHHM Channel halted mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK9_CHHM		(1 << 1)
/** OTG_FS_HOST_OTG_FS_HCINTMSK9_XFRCM Transfer completed mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK9_XFRCM		(1 << 0)

/**@}*/

/** @defgroup otg_fs_host_otg_fs_hctsiz9 OTGFSHCTSIZ9 OTG_FS host channel-9 transfer size register
@{*/


#define OTG_FS_HOST_OTG_FS_HCTSIZ9_DPID_SHIFT		29
#define OTG_FS_HOST_OTG_FS_HCTSIZ9_DPID_MASK		0x03
/** @defgroup otg_fs_host_otg_fs_hctsiz9_dpid DPID Data PID
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HCTSIZ9_PKTCNT_SHIFT		19
#define OTG_FS_HOST_OTG_FS_HCTSIZ9_PKTCNT_MASK		0x3ff
/** @defgroup otg_fs_host_otg_fs_hctsiz9_pktcnt PKTCNT Packet count
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HCTSIZ9_XFRSIZ_SHIFT		0
#define OTG_FS_HOST_OTG_FS_HCTSIZ9_XFRSIZ_MASK		0x7ffff
/** @defgroup otg_fs_host_otg_fs_hctsiz9_xfrsiz XFRSIZ Transfer size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_host_otg_fs_hcchar10 OTGFSHCCHAR10 OTG_FS host channel-10 characteristics register
@{*/

/** OTG_FS_HOST_OTG_FS_HCCHAR10_CHENA Channel enable **/
#define OTG_FS_HOST_OTG_FS_HCCHAR10_CHENA		(1 << 31)
/** OTG_FS_HOST_OTG_FS_HCCHAR10_CHDIS Channel disable **/
#define OTG_FS_HOST_OTG_FS_HCCHAR10_CHDIS		(1 << 30)
/** OTG_FS_HOST_OTG_FS_HCCHAR10_ODDFRM Odd frame **/
#define OTG_FS_HOST_OTG_FS_HCCHAR10_ODDFRM		(1 << 29)

#define OTG_FS_HOST_OTG_FS_HCCHAR10_DAD_SHIFT		22
#define OTG_FS_HOST_OTG_FS_HCCHAR10_DAD_MASK		0x7f
/** @defgroup otg_fs_host_otg_fs_hcchar10_dad DAD Device address
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HCCHAR10_MCNT_SHIFT		20
#define OTG_FS_HOST_OTG_FS_HCCHAR10_MCNT_MASK		0x03
/** @defgroup otg_fs_host_otg_fs_hcchar10_mcnt MCNT Multicount
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HCCHAR10_EPTYP_SHIFT		18
#define OTG_FS_HOST_OTG_FS_HCCHAR10_EPTYP_MASK		0x03
/** @defgroup otg_fs_host_otg_fs_hcchar10_eptyp EPTYP Endpoint type
@{*/
/**@}*/

/** OTG_FS_HOST_OTG_FS_HCCHAR10_LSDEV Low-speed device **/
#define OTG_FS_HOST_OTG_FS_HCCHAR10_LSDEV		(1 << 17)
/** OTG_FS_HOST_OTG_FS_HCCHAR10_EPDIR Endpoint direction **/
#define OTG_FS_HOST_OTG_FS_HCCHAR10_EPDIR		(1 << 15)

#define OTG_FS_HOST_OTG_FS_HCCHAR10_EPNUM_SHIFT		11
#define OTG_FS_HOST_OTG_FS_HCCHAR10_EPNUM_MASK		0x0f
/** @defgroup otg_fs_host_otg_fs_hcchar10_epnum EPNUM Endpoint number
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HCCHAR10_MPSIZ_SHIFT		0
#define OTG_FS_HOST_OTG_FS_HCCHAR10_MPSIZ_MASK		0x7ff
/** @defgroup otg_fs_host_otg_fs_hcchar10_mpsiz MPSIZ Maximum packet size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_host_otg_fs_hcint10 OTGFSHCINT10 OTG_FS host channel-10 interrupt register
@{*/

/** OTG_FS_HOST_OTG_FS_HCINT10_DTERR Data toggle error **/
#define OTG_FS_HOST_OTG_FS_HCINT10_DTERR		(1 << 10)
/** OTG_FS_HOST_OTG_FS_HCINT10_FRMOR Frame overrun **/
#define OTG_FS_HOST_OTG_FS_HCINT10_FRMOR		(1 << 9)
/** OTG_FS_HOST_OTG_FS_HCINT10_BBERR Babble error **/
#define OTG_FS_HOST_OTG_FS_HCINT10_BBERR		(1 << 8)
/** OTG_FS_HOST_OTG_FS_HCINT10_TXERR Transaction error **/
#define OTG_FS_HOST_OTG_FS_HCINT10_TXERR		(1 << 7)
/** OTG_FS_HOST_OTG_FS_HCINT10_ACK ACK response received/transmitted interrupt **/
#define OTG_FS_HOST_OTG_FS_HCINT10_ACK		(1 << 5)
/** OTG_FS_HOST_OTG_FS_HCINT10_NAK NAK response received interrupt **/
#define OTG_FS_HOST_OTG_FS_HCINT10_NAK		(1 << 4)
/** OTG_FS_HOST_OTG_FS_HCINT10_STALL STALL response received interrupt **/
#define OTG_FS_HOST_OTG_FS_HCINT10_STALL		(1 << 3)
/** OTG_FS_HOST_OTG_FS_HCINT10_CHH Channel halted **/
#define OTG_FS_HOST_OTG_FS_HCINT10_CHH		(1 << 1)
/** OTG_FS_HOST_OTG_FS_HCINT10_XFRC Transfer completed **/
#define OTG_FS_HOST_OTG_FS_HCINT10_XFRC		(1 << 0)

/**@}*/

/** @defgroup otg_fs_host_otg_fs_hcintmsk10 OTGFSHCINTMSK10 OTG_FS host channel-10 mask register
@{*/

/** OTG_FS_HOST_OTG_FS_HCINTMSK10_DTERRM Data toggle error mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK10_DTERRM		(1 << 10)
/** OTG_FS_HOST_OTG_FS_HCINTMSK10_FRMORM Frame overrun mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK10_FRMORM		(1 << 9)
/** OTG_FS_HOST_OTG_FS_HCINTMSK10_BBERRM Babble error mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK10_BBERRM		(1 << 8)
/** OTG_FS_HOST_OTG_FS_HCINTMSK10_TXERRM Transaction error mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK10_TXERRM		(1 << 7)
/** OTG_FS_HOST_OTG_FS_HCINTMSK10_NYET response received interrupt mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK10_NYET		(1 << 6)
/** OTG_FS_HOST_OTG_FS_HCINTMSK10_ACKM ACK response received/transmitted interrupt mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK10_ACKM		(1 << 5)
/** OTG_FS_HOST_OTG_FS_HCINTMSK10_NAKM NAK response received interrupt mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK10_NAKM		(1 << 4)
/** OTG_FS_HOST_OTG_FS_HCINTMSK10_STALLM STALL response received interrupt mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK10_STALLM		(1 << 3)
/** OTG_FS_HOST_OTG_FS_HCINTMSK10_CHHM Channel halted mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK10_CHHM		(1 << 1)
/** OTG_FS_HOST_OTG_FS_HCINTMSK10_XFRCM Transfer completed mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK10_XFRCM		(1 << 0)

/**@}*/

/** @defgroup otg_fs_host_otg_fs_hctsiz10 OTGFSHCTSIZ10 OTG_FS host channel-10 transfer size register
@{*/


#define OTG_FS_HOST_OTG_FS_HCTSIZ10_DPID_SHIFT		29
#define OTG_FS_HOST_OTG_FS_HCTSIZ10_DPID_MASK		0x03
/** @defgroup otg_fs_host_otg_fs_hctsiz10_dpid DPID Data PID
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HCTSIZ10_PKTCNT_SHIFT		19
#define OTG_FS_HOST_OTG_FS_HCTSIZ10_PKTCNT_MASK		0x3ff
/** @defgroup otg_fs_host_otg_fs_hctsiz10_pktcnt PKTCNT Packet count
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HCTSIZ10_XFRSIZ_SHIFT		0
#define OTG_FS_HOST_OTG_FS_HCTSIZ10_XFRSIZ_MASK		0x7ffff
/** @defgroup otg_fs_host_otg_fs_hctsiz10_xfrsiz XFRSIZ Transfer size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_host_otg_fs_hcchar11 OTGFSHCCHAR11 OTG_FS host channel-11 characteristics register
@{*/

/** OTG_FS_HOST_OTG_FS_HCCHAR11_CHENA Channel enable **/
#define OTG_FS_HOST_OTG_FS_HCCHAR11_CHENA		(1 << 31)
/** OTG_FS_HOST_OTG_FS_HCCHAR11_CHDIS Channel disable **/
#define OTG_FS_HOST_OTG_FS_HCCHAR11_CHDIS		(1 << 30)
/** OTG_FS_HOST_OTG_FS_HCCHAR11_ODDFRM Odd frame **/
#define OTG_FS_HOST_OTG_FS_HCCHAR11_ODDFRM		(1 << 29)

#define OTG_FS_HOST_OTG_FS_HCCHAR11_DAD_SHIFT		22
#define OTG_FS_HOST_OTG_FS_HCCHAR11_DAD_MASK		0x7f
/** @defgroup otg_fs_host_otg_fs_hcchar11_dad DAD Device address
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HCCHAR11_MCNT_SHIFT		20
#define OTG_FS_HOST_OTG_FS_HCCHAR11_MCNT_MASK		0x03
/** @defgroup otg_fs_host_otg_fs_hcchar11_mcnt MCNT Multicount
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HCCHAR11_EPTYP_SHIFT		18
#define OTG_FS_HOST_OTG_FS_HCCHAR11_EPTYP_MASK		0x03
/** @defgroup otg_fs_host_otg_fs_hcchar11_eptyp EPTYP Endpoint type
@{*/
/**@}*/

/** OTG_FS_HOST_OTG_FS_HCCHAR11_LSDEV Low-speed device **/
#define OTG_FS_HOST_OTG_FS_HCCHAR11_LSDEV		(1 << 17)
/** OTG_FS_HOST_OTG_FS_HCCHAR11_EPDIR Endpoint direction **/
#define OTG_FS_HOST_OTG_FS_HCCHAR11_EPDIR		(1 << 15)

#define OTG_FS_HOST_OTG_FS_HCCHAR11_EPNUM_SHIFT		11
#define OTG_FS_HOST_OTG_FS_HCCHAR11_EPNUM_MASK		0x0f
/** @defgroup otg_fs_host_otg_fs_hcchar11_epnum EPNUM Endpoint number
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HCCHAR11_MPSIZ_SHIFT		0
#define OTG_FS_HOST_OTG_FS_HCCHAR11_MPSIZ_MASK		0x7ff
/** @defgroup otg_fs_host_otg_fs_hcchar11_mpsiz MPSIZ Maximum packet size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_host_otg_fs_hcint11 OTGFSHCINT11 OTG_FS host channel-11 interrupt register
@{*/

/** OTG_FS_HOST_OTG_FS_HCINT11_DTERR Data toggle error **/
#define OTG_FS_HOST_OTG_FS_HCINT11_DTERR		(1 << 10)
/** OTG_FS_HOST_OTG_FS_HCINT11_FRMOR Frame overrun **/
#define OTG_FS_HOST_OTG_FS_HCINT11_FRMOR		(1 << 9)
/** OTG_FS_HOST_OTG_FS_HCINT11_BBERR Babble error **/
#define OTG_FS_HOST_OTG_FS_HCINT11_BBERR		(1 << 8)
/** OTG_FS_HOST_OTG_FS_HCINT11_TXERR Transaction error **/
#define OTG_FS_HOST_OTG_FS_HCINT11_TXERR		(1 << 7)
/** OTG_FS_HOST_OTG_FS_HCINT11_ACK ACK response received/transmitted interrupt **/
#define OTG_FS_HOST_OTG_FS_HCINT11_ACK		(1 << 5)
/** OTG_FS_HOST_OTG_FS_HCINT11_NAK NAK response received interrupt **/
#define OTG_FS_HOST_OTG_FS_HCINT11_NAK		(1 << 4)
/** OTG_FS_HOST_OTG_FS_HCINT11_STALL STALL response received interrupt **/
#define OTG_FS_HOST_OTG_FS_HCINT11_STALL		(1 << 3)
/** OTG_FS_HOST_OTG_FS_HCINT11_CHH Channel halted **/
#define OTG_FS_HOST_OTG_FS_HCINT11_CHH		(1 << 1)
/** OTG_FS_HOST_OTG_FS_HCINT11_XFRC Transfer completed **/
#define OTG_FS_HOST_OTG_FS_HCINT11_XFRC		(1 << 0)

/**@}*/

/** @defgroup otg_fs_host_otg_fs_hcintmsk11 OTGFSHCINTMSK11 OTG_FS host channel-11 mask register
@{*/

/** OTG_FS_HOST_OTG_FS_HCINTMSK11_DTERRM Data toggle error mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK11_DTERRM		(1 << 10)
/** OTG_FS_HOST_OTG_FS_HCINTMSK11_FRMORM Frame overrun mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK11_FRMORM		(1 << 9)
/** OTG_FS_HOST_OTG_FS_HCINTMSK11_BBERRM Babble error mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK11_BBERRM		(1 << 8)
/** OTG_FS_HOST_OTG_FS_HCINTMSK11_TXERRM Transaction error mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK11_TXERRM		(1 << 7)
/** OTG_FS_HOST_OTG_FS_HCINTMSK11_NYET response received interrupt mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK11_NYET		(1 << 6)
/** OTG_FS_HOST_OTG_FS_HCINTMSK11_ACKM ACK response received/transmitted interrupt mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK11_ACKM		(1 << 5)
/** OTG_FS_HOST_OTG_FS_HCINTMSK11_NAKM NAK response received interrupt mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK11_NAKM		(1 << 4)
/** OTG_FS_HOST_OTG_FS_HCINTMSK11_STALLM STALL response received interrupt mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK11_STALLM		(1 << 3)
/** OTG_FS_HOST_OTG_FS_HCINTMSK11_CHHM Channel halted mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK11_CHHM		(1 << 1)
/** OTG_FS_HOST_OTG_FS_HCINTMSK11_XFRCM Transfer completed mask **/
#define OTG_FS_HOST_OTG_FS_HCINTMSK11_XFRCM		(1 << 0)

/**@}*/

/** @defgroup otg_fs_host_otg_fs_hctsiz11 OTGFSHCTSIZ11 OTG_FS host channel-11 transfer size register
@{*/


#define OTG_FS_HOST_OTG_FS_HCTSIZ11_DPID_SHIFT		29
#define OTG_FS_HOST_OTG_FS_HCTSIZ11_DPID_MASK		0x03
/** @defgroup otg_fs_host_otg_fs_hctsiz11_dpid DPID Data PID
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HCTSIZ11_PKTCNT_SHIFT		19
#define OTG_FS_HOST_OTG_FS_HCTSIZ11_PKTCNT_MASK		0x3ff
/** @defgroup otg_fs_host_otg_fs_hctsiz11_pktcnt PKTCNT Packet count
@{*/
/**@}*/


#define OTG_FS_HOST_OTG_FS_HCTSIZ11_XFRSIZ_SHIFT		0
#define OTG_FS_HOST_OTG_FS_HCTSIZ11_XFRSIZ_MASK		0x7ffff
/** @defgroup otg_fs_host_otg_fs_hctsiz11_xfrsiz XFRSIZ Transfer size
@{*/
/**@}*/


/**@}*/
