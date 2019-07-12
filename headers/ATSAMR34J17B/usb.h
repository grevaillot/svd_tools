#pragma once 

/* --- USB: Universal Serial Bus ------------------------------------ */

/** @defgroup usb_registers Universal Serial Bus Register
@{*/

/** USB_DEVICE_CTRLA Control A **/
#define USB_DEVICE_CTRLA			MMIO32(USB_BASE + 0x00)
/** USB_HOST_CTRLA Control A **/
#define USB_HOST_CTRLA			MMIO32(USB_BASE + 0x00)
/** USB_DEVICE_SYNCBUSY Synchronization Busy **/
#define USB_DEVICE_SYNCBUSY			MMIO32(USB_BASE + 0x02)
/** USB_HOST_SYNCBUSY Synchronization Busy **/
#define USB_HOST_SYNCBUSY			MMIO32(USB_BASE + 0x02)
/** USB_DEVICE_QOSCTRL USB Quality Of Service **/
#define USB_DEVICE_QOSCTRL			MMIO32(USB_BASE + 0x03)
/** USB_HOST_QOSCTRL USB Quality Of Service **/
#define USB_HOST_QOSCTRL			MMIO32(USB_BASE + 0x03)
/** USB_DEVICE_CTRLB DEVICE Control B **/
#define USB_DEVICE_CTRLB			MMIO32(USB_BASE + 0x08)
/** USB_HOST_CTRLB HOST Control B **/
#define USB_HOST_CTRLB			MMIO32(USB_BASE + 0x08)
/** USB_DEVICE_DADD DEVICE Device Address **/
#define USB_DEVICE_DADD			MMIO32(USB_BASE + 0x0a)
/** USB_HOST_HSOFC HOST Host Start Of Frame Control **/
#define USB_HOST_HSOFC			MMIO32(USB_BASE + 0x0a)
/** USB_DEVICE_STATUS DEVICE Status **/
#define USB_DEVICE_STATUS			MMIO32(USB_BASE + 0x0c)
/** USB_HOST_STATUS HOST Status **/
#define USB_HOST_STATUS			MMIO32(USB_BASE + 0x0c)
/** USB_DEVICE_FSMSTATUS Finite State Machine Status **/
#define USB_DEVICE_FSMSTATUS			MMIO32(USB_BASE + 0x0d)
/** USB_HOST_FSMSTATUS Finite State Machine Status **/
#define USB_HOST_FSMSTATUS			MMIO32(USB_BASE + 0x0d)
/** USB_DEVICE_FNUM DEVICE Device Frame Number **/
#define USB_DEVICE_FNUM			MMIO32(USB_BASE + 0x10)
/** USB_HOST_FNUM HOST Host Frame Number **/
#define USB_HOST_FNUM			MMIO32(USB_BASE + 0x10)
/** USB_HOST_FLENHIGH HOST Host Frame Length **/
#define USB_HOST_FLENHIGH			MMIO32(USB_BASE + 0x12)
/** USB_DEVICE_INTENCLR DEVICE Device Interrupt Enable Clear **/
#define USB_DEVICE_INTENCLR			MMIO32(USB_BASE + 0x14)
/** USB_HOST_INTENCLR HOST Host Interrupt Enable Clear **/
#define USB_HOST_INTENCLR			MMIO32(USB_BASE + 0x14)
/** USB_DEVICE_INTENSET DEVICE Device Interrupt Enable Set **/
#define USB_DEVICE_INTENSET			MMIO32(USB_BASE + 0x18)
/** USB_HOST_INTENSET HOST Host Interrupt Enable Set **/
#define USB_HOST_INTENSET			MMIO32(USB_BASE + 0x18)
/** USB_DEVICE_INTFLAG DEVICE Device Interrupt Flag **/
#define USB_DEVICE_INTFLAG			MMIO32(USB_BASE + 0x1c)
/** USB_HOST_INTFLAG HOST Host Interrupt Flag **/
#define USB_HOST_INTFLAG			MMIO32(USB_BASE + 0x1c)
/** USB_DEVICE_EPINTSMRY DEVICE End Point Interrupt Summary **/
#define USB_DEVICE_EPINTSMRY			MMIO32(USB_BASE + 0x20)
/** USB_HOST_PINTSMRY HOST Pipe Interrupt Summary **/
#define USB_HOST_PINTSMRY			MMIO32(USB_BASE + 0x20)
/** USB_DEVICE_DESCADD Descriptor Address **/
#define USB_DEVICE_DESCADD			MMIO32(USB_BASE + 0x24)
/** USB_HOST_DESCADD Descriptor Address **/
#define USB_HOST_DESCADD			MMIO32(USB_BASE + 0x24)
/** USB_DEVICE_PADCAL USB PAD Calibration **/
#define USB_DEVICE_PADCAL			MMIO32(USB_BASE + 0x28)
/** USB_HOST_PADCAL USB PAD Calibration **/
#define USB_HOST_PADCAL			MMIO32(USB_BASE + 0x28)
/** USB_DEVICE_EPCFG%s DEVICE End Point Configuration **/
#define USB_DEVICE_EPCFG%s			MMIO32(USB_BASE + 0x100)
/** USB_HOST_PCFG%s HOST End Point Configuration **/
#define USB_HOST_PCFG%s			MMIO32(USB_BASE + 0x100)
/** USB_HOST_BINTERVAL%s HOST Bus Access Period of Pipe **/
#define USB_HOST_BINTERVAL%s			MMIO32(USB_BASE + 0x103)
/** USB_DEVICE_EPSTATUSCLR%s DEVICE End Point Pipe Status Clear **/
#define USB_DEVICE_EPSTATUSCLR%s			MMIO32(USB_BASE + 0x104)
/** USB_HOST_PSTATUSCLR%s HOST End Point Pipe Status Clear **/
#define USB_HOST_PSTATUSCLR%s			MMIO32(USB_BASE + 0x104)
/** USB_DEVICE_EPSTATUSSET%s DEVICE End Point Pipe Status Set **/
#define USB_DEVICE_EPSTATUSSET%s			MMIO32(USB_BASE + 0x105)
/** USB_HOST_PSTATUSSET%s HOST End Point Pipe Status Set **/
#define USB_HOST_PSTATUSSET%s			MMIO32(USB_BASE + 0x105)
/** USB_DEVICE_EPSTATUS%s DEVICE End Point Pipe Status **/
#define USB_DEVICE_EPSTATUS%s			MMIO32(USB_BASE + 0x106)
/** USB_HOST_PSTATUS%s HOST End Point Pipe Status **/
#define USB_HOST_PSTATUS%s			MMIO32(USB_BASE + 0x106)
/** USB_DEVICE_EPINTFLAG%s DEVICE End Point Interrupt Flag **/
#define USB_DEVICE_EPINTFLAG%s			MMIO32(USB_BASE + 0x107)
/** USB_HOST_PINTFLAG%s HOST Pipe Interrupt Flag **/
#define USB_HOST_PINTFLAG%s			MMIO32(USB_BASE + 0x107)
/** USB_DEVICE_EPINTENCLR%s DEVICE End Point Interrupt Clear Flag **/
#define USB_DEVICE_EPINTENCLR%s			MMIO32(USB_BASE + 0x108)
/** USB_HOST_PINTENCLR%s HOST Pipe Interrupt Flag Clear **/
#define USB_HOST_PINTENCLR%s			MMIO32(USB_BASE + 0x108)
/** USB_DEVICE_EPINTENSET%s DEVICE End Point Interrupt Set Flag **/
#define USB_DEVICE_EPINTENSET%s			MMIO32(USB_BASE + 0x109)
/** USB_HOST_PINTENSET%s HOST Pipe Interrupt Flag Set **/
#define USB_HOST_PINTENSET%s			MMIO32(USB_BASE + 0x109)

/**@}*/


/** @defgroup usb_device_ctrla DEVICECTRLA Control A
@{*/

/** USB_DEVICE_CTRLA_MODE Operating Mode **/
#define USB_DEVICE_CTRLA_MODE		(1 << 7)
/** USB_DEVICE_CTRLA_RUNSTDBY Run in Standby Mode **/
#define USB_DEVICE_CTRLA_RUNSTDBY		(1 << 2)
/** USB_DEVICE_CTRLA_ENABLE Enable **/
#define USB_DEVICE_CTRLA_ENABLE		(1 << 1)
/** USB_DEVICE_CTRLA_SWRST Software Reset **/
#define USB_DEVICE_CTRLA_SWRST		(1 << 0)

/**@}*/

/** @defgroup usb_host_ctrla HOSTCTRLA Control A
@{*/

/** USB_HOST_CTRLA_MODE Operating Mode **/
#define USB_HOST_CTRLA_MODE		(1 << 7)
/** USB_HOST_CTRLA_RUNSTDBY Run in Standby Mode **/
#define USB_HOST_CTRLA_RUNSTDBY		(1 << 2)
/** USB_HOST_CTRLA_ENABLE Enable **/
#define USB_HOST_CTRLA_ENABLE		(1 << 1)
/** USB_HOST_CTRLA_SWRST Software Reset **/
#define USB_HOST_CTRLA_SWRST		(1 << 0)

/**@}*/

/** @defgroup usb_device_syncbusy DEVICESYNCBUSY Synchronization Busy
@{*/

/** USB_DEVICE_SYNCBUSY_ENABLE Enable Synchronization Busy **/
#define USB_DEVICE_SYNCBUSY_ENABLE		(1 << 1)
/** USB_DEVICE_SYNCBUSY_SWRST Software Reset Synchronization Busy **/
#define USB_DEVICE_SYNCBUSY_SWRST		(1 << 0)

/**@}*/

/** @defgroup usb_host_syncbusy HOSTSYNCBUSY Synchronization Busy
@{*/

/** USB_HOST_SYNCBUSY_ENABLE Enable Synchronization Busy **/
#define USB_HOST_SYNCBUSY_ENABLE		(1 << 1)
/** USB_HOST_SYNCBUSY_SWRST Software Reset Synchronization Busy **/
#define USB_HOST_SYNCBUSY_SWRST		(1 << 0)

/**@}*/

/** @defgroup usb_device_qosctrl DEVICEQOSCTRL USB Quality Of Service
@{*/


#define USB_DEVICE_QOSCTRL_DQOS_SHIFT		2
#define USB_DEVICE_QOSCTRL_DQOS_MASK		0x03
/** @defgroup usb_device_qosctrl_dqos DQOS Data Quality of Service
@{*/
/**@}*/


#define USB_DEVICE_QOSCTRL_CQOS_SHIFT		0
#define USB_DEVICE_QOSCTRL_CQOS_MASK		0x03
/** @defgroup usb_device_qosctrl_cqos CQOS Configuration Quality of Service
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_host_qosctrl HOSTQOSCTRL USB Quality Of Service
@{*/


#define USB_HOST_QOSCTRL_DQOS_SHIFT		2
#define USB_HOST_QOSCTRL_DQOS_MASK		0x03
/** @defgroup usb_host_qosctrl_dqos DQOS Data Quality of Service
@{*/
/**@}*/


#define USB_HOST_QOSCTRL_CQOS_SHIFT		0
#define USB_HOST_QOSCTRL_CQOS_MASK		0x03
/** @defgroup usb_host_qosctrl_cqos CQOS Configuration Quality of Service
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_device_ctrlb DEVICECTRLB DEVICE Control B
@{*/


#define USB_DEVICE_CTRLB_LPMHDSK_SHIFT		10
#define USB_DEVICE_CTRLB_LPMHDSK_MASK		0x03
/** @defgroup usb_device_ctrlb_lpmhdsk LPMHDSK Link Power Management Handshake
@{*/
/**@}*/

/** USB_DEVICE_CTRLB_GNAK Global NAK **/
#define USB_DEVICE_CTRLB_GNAK		(1 << 9)
/** USB_DEVICE_CTRLB_OPMODE2 Specific Operational Mode **/
#define USB_DEVICE_CTRLB_OPMODE2		(1 << 8)
/** USB_DEVICE_CTRLB_TSTPCKT Test packet mode **/
#define USB_DEVICE_CTRLB_TSTPCKT		(1 << 7)
/** USB_DEVICE_CTRLB_TSTK Test mode K **/
#define USB_DEVICE_CTRLB_TSTK		(1 << 6)
/** USB_DEVICE_CTRLB_TSTJ Test mode J **/
#define USB_DEVICE_CTRLB_TSTJ		(1 << 5)
/** USB_DEVICE_CTRLB_NREPLY No Reply **/
#define USB_DEVICE_CTRLB_NREPLY		(1 << 4)

#define USB_DEVICE_CTRLB_SPDCONF_SHIFT		2
#define USB_DEVICE_CTRLB_SPDCONF_MASK		0x03
/** @defgroup usb_device_ctrlb_spdconf SPDCONF Speed Configuration
@{*/
/**@}*/

/** USB_DEVICE_CTRLB_UPRSM Upstream Resume **/
#define USB_DEVICE_CTRLB_UPRSM		(1 << 1)
/** USB_DEVICE_CTRLB_DETACH Detach **/
#define USB_DEVICE_CTRLB_DETACH		(1 << 0)

/**@}*/

/** @defgroup usb_host_ctrlb HOSTCTRLB HOST Control B
@{*/

/** USB_HOST_CTRLB_L1RESUME Send L1 Resume **/
#define USB_HOST_CTRLB_L1RESUME		(1 << 11)
/** USB_HOST_CTRLB_VBUSOK VBUS is OK **/
#define USB_HOST_CTRLB_VBUSOK		(1 << 10)
/** USB_HOST_CTRLB_BUSRESET Send USB Reset **/
#define USB_HOST_CTRLB_BUSRESET		(1 << 9)
/** USB_HOST_CTRLB_SOFE Start of Frame Generation Enable **/
#define USB_HOST_CTRLB_SOFE		(1 << 8)
/** USB_HOST_CTRLB_TSTK Test mode K **/
#define USB_HOST_CTRLB_TSTK		(1 << 6)
/** USB_HOST_CTRLB_TSTJ Test mode J **/
#define USB_HOST_CTRLB_TSTJ		(1 << 5)
/** USB_HOST_CTRLB_AUTORESUME Auto Resume Enable **/
#define USB_HOST_CTRLB_AUTORESUME		(1 << 4)

#define USB_HOST_CTRLB_SPDCONF_SHIFT		2
#define USB_HOST_CTRLB_SPDCONF_MASK		0x03
/** @defgroup usb_host_ctrlb_spdconf SPDCONF Speed Configuration for Host
@{*/
/**@}*/

/** USB_HOST_CTRLB_RESUME Send USB Resume **/
#define USB_HOST_CTRLB_RESUME		(1 << 1)

/**@}*/

/** @defgroup usb_device_dadd DEVICEDADD DEVICE Device Address
@{*/

/** USB_DEVICE_DADD_ADDEN Device Address Enable **/
#define USB_DEVICE_DADD_ADDEN		(1 << 7)

#define USB_DEVICE_DADD_DADD_SHIFT		0
#define USB_DEVICE_DADD_DADD_MASK		0x7f
/** @defgroup usb_device_dadd_dadd DADD Device Address
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_host_hsofc HOSTHSOFC HOST Host Start Of Frame Control
@{*/

/** USB_HOST_HSOFC_FLENCE Frame Length Control Enable **/
#define USB_HOST_HSOFC_FLENCE		(1 << 7)

#define USB_HOST_HSOFC_FLENC_SHIFT		0
#define USB_HOST_HSOFC_FLENC_MASK		0x0f
/** @defgroup usb_host_hsofc_flenc FLENC Frame Length Control
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_device_status DEVICESTATUS DEVICE Status
@{*/


#define USB_DEVICE_STATUS_LINESTATE_SHIFT		6
#define USB_DEVICE_STATUS_LINESTATE_MASK		0x03
/** @defgroup usb_device_status_linestate LINESTATE USB Line State Status
@{*/
/**@}*/


#define USB_DEVICE_STATUS_SPEED_SHIFT		2
#define USB_DEVICE_STATUS_SPEED_MASK		0x03
/** @defgroup usb_device_status_speed SPEED Speed Status
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_host_status HOSTSTATUS HOST Status
@{*/


#define USB_HOST_STATUS_LINESTATE_SHIFT		6
#define USB_HOST_STATUS_LINESTATE_MASK		0x03
/** @defgroup usb_host_status_linestate LINESTATE USB Line State Status
@{*/
/**@}*/


#define USB_HOST_STATUS_SPEED_SHIFT		2
#define USB_HOST_STATUS_SPEED_MASK		0x03
/** @defgroup usb_host_status_speed SPEED Speed Status
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_device_fsmstatus DEVICEFSMSTATUS Finite State Machine Status
@{*/


#define USB_DEVICE_FSMSTATUS_FSMSTATE_SHIFT		0
#define USB_DEVICE_FSMSTATUS_FSMSTATE_MASK		0x7f
/** @defgroup usb_device_fsmstatus_fsmstate FSMSTATE Fine State Machine Status
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_host_fsmstatus HOSTFSMSTATUS Finite State Machine Status
@{*/


#define USB_HOST_FSMSTATUS_FSMSTATE_SHIFT		0
#define USB_HOST_FSMSTATUS_FSMSTATE_MASK		0x7f
/** @defgroup usb_host_fsmstatus_fsmstate FSMSTATE Fine State Machine Status
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_device_fnum DEVICEFNUM DEVICE Device Frame Number
@{*/

/** USB_DEVICE_FNUM_FNCERR Frame Number CRC Error **/
#define USB_DEVICE_FNUM_FNCERR		(1 << 15)

#define USB_DEVICE_FNUM_FNUM_SHIFT		3
#define USB_DEVICE_FNUM_FNUM_MASK		0x7ff
/** @defgroup usb_device_fnum_fnum FNUM Frame Number
@{*/
/**@}*/


#define USB_DEVICE_FNUM_MFNUM_SHIFT		0
#define USB_DEVICE_FNUM_MFNUM_MASK		0x07
/** @defgroup usb_device_fnum_mfnum MFNUM Micro Frame Number
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_host_fnum HOSTFNUM HOST Host Frame Number
@{*/


#define USB_HOST_FNUM_FNUM_SHIFT		3
#define USB_HOST_FNUM_FNUM_MASK		0x7ff
/** @defgroup usb_host_fnum_fnum FNUM Frame Number
@{*/
/**@}*/


#define USB_HOST_FNUM_MFNUM_SHIFT		0
#define USB_HOST_FNUM_MFNUM_MASK		0x07
/** @defgroup usb_host_fnum_mfnum MFNUM Micro Frame Number
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_host_flenhigh HOSTFLENHIGH HOST Host Frame Length
@{*/


#define USB_HOST_FLENHIGH_FLENHIGH_SHIFT		0
#define USB_HOST_FLENHIGH_FLENHIGH_MASK		0xff
/** @defgroup usb_host_flenhigh_flenhigh FLENHIGH Frame Length
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_device_intenclr DEVICEINTENCLR DEVICE Device Interrupt Enable Clear
@{*/

/** USB_DEVICE_INTENCLR_LPMSUSP Link Power Management Suspend Interrupt Enable **/
#define USB_DEVICE_INTENCLR_LPMSUSP		(1 << 9)
/** USB_DEVICE_INTENCLR_LPMNYET Link Power Management Not Yet Interrupt Enable **/
#define USB_DEVICE_INTENCLR_LPMNYET		(1 << 8)
/** USB_DEVICE_INTENCLR_RAMACER Ram Access Interrupt Enable **/
#define USB_DEVICE_INTENCLR_RAMACER		(1 << 7)
/** USB_DEVICE_INTENCLR_UPRSM Upstream Resume Interrupt Enable **/
#define USB_DEVICE_INTENCLR_UPRSM		(1 << 6)
/** USB_DEVICE_INTENCLR_EORSM End Of Resume Interrupt Enable **/
#define USB_DEVICE_INTENCLR_EORSM		(1 << 5)
/** USB_DEVICE_INTENCLR_WAKEUP Wake Up Interrupt Enable **/
#define USB_DEVICE_INTENCLR_WAKEUP		(1 << 4)
/** USB_DEVICE_INTENCLR_EORST End of Reset Interrupt Enable **/
#define USB_DEVICE_INTENCLR_EORST		(1 << 3)
/** USB_DEVICE_INTENCLR_SOF Start Of Frame Interrupt Enable **/
#define USB_DEVICE_INTENCLR_SOF		(1 << 2)
/** USB_DEVICE_INTENCLR_MSOF Micro Start of Frame Interrupt Enable in High Speed Mode **/
#define USB_DEVICE_INTENCLR_MSOF		(1 << 1)
/** USB_DEVICE_INTENCLR_SUSPEND Suspend Interrupt Enable **/
#define USB_DEVICE_INTENCLR_SUSPEND		(1 << 0)

/**@}*/

/** @defgroup usb_host_intenclr HOSTINTENCLR HOST Host Interrupt Enable Clear
@{*/

/** USB_HOST_INTENCLR_DDISC Device Disconnection Interrupt Disable **/
#define USB_HOST_INTENCLR_DDISC		(1 << 9)
/** USB_HOST_INTENCLR_DCONN Device Connection Interrupt Disable **/
#define USB_HOST_INTENCLR_DCONN		(1 << 8)
/** USB_HOST_INTENCLR_RAMACER Ram Access Interrupt Disable **/
#define USB_HOST_INTENCLR_RAMACER		(1 << 7)
/** USB_HOST_INTENCLR_UPRSM Upstream Resume from Device Interrupt Disable **/
#define USB_HOST_INTENCLR_UPRSM		(1 << 6)
/** USB_HOST_INTENCLR_DNRSM DownStream to Device Interrupt Disable **/
#define USB_HOST_INTENCLR_DNRSM		(1 << 5)
/** USB_HOST_INTENCLR_WAKEUP Wake Up Interrupt Disable **/
#define USB_HOST_INTENCLR_WAKEUP		(1 << 4)
/** USB_HOST_INTENCLR_RST BUS Reset Interrupt Disable **/
#define USB_HOST_INTENCLR_RST		(1 << 3)
/** USB_HOST_INTENCLR_HSOF Host Start Of Frame Interrupt Disable **/
#define USB_HOST_INTENCLR_HSOF		(1 << 2)

/**@}*/

/** @defgroup usb_device_intenset DEVICEINTENSET DEVICE Device Interrupt Enable Set
@{*/

/** USB_DEVICE_INTENSET_LPMSUSP Link Power Management Suspend Interrupt Enable **/
#define USB_DEVICE_INTENSET_LPMSUSP		(1 << 9)
/** USB_DEVICE_INTENSET_LPMNYET Link Power Management Not Yet Interrupt Enable **/
#define USB_DEVICE_INTENSET_LPMNYET		(1 << 8)
/** USB_DEVICE_INTENSET_RAMACER Ram Access Interrupt Enable **/
#define USB_DEVICE_INTENSET_RAMACER		(1 << 7)
/** USB_DEVICE_INTENSET_UPRSM Upstream Resume Interrupt Enable **/
#define USB_DEVICE_INTENSET_UPRSM		(1 << 6)
/** USB_DEVICE_INTENSET_EORSM End Of Resume Interrupt Enable **/
#define USB_DEVICE_INTENSET_EORSM		(1 << 5)
/** USB_DEVICE_INTENSET_WAKEUP Wake Up Interrupt Enable **/
#define USB_DEVICE_INTENSET_WAKEUP		(1 << 4)
/** USB_DEVICE_INTENSET_EORST End of Reset Interrupt Enable **/
#define USB_DEVICE_INTENSET_EORST		(1 << 3)
/** USB_DEVICE_INTENSET_SOF Start Of Frame Interrupt Enable **/
#define USB_DEVICE_INTENSET_SOF		(1 << 2)
/** USB_DEVICE_INTENSET_MSOF Micro Start of Frame Interrupt Enable in High Speed Mode **/
#define USB_DEVICE_INTENSET_MSOF		(1 << 1)
/** USB_DEVICE_INTENSET_SUSPEND Suspend Interrupt Enable **/
#define USB_DEVICE_INTENSET_SUSPEND		(1 << 0)

/**@}*/

/** @defgroup usb_host_intenset HOSTINTENSET HOST Host Interrupt Enable Set
@{*/

/** USB_HOST_INTENSET_DDISC Device Disconnection Interrupt Enable **/
#define USB_HOST_INTENSET_DDISC		(1 << 9)
/** USB_HOST_INTENSET_DCONN Link Power Management Interrupt Enable **/
#define USB_HOST_INTENSET_DCONN		(1 << 8)
/** USB_HOST_INTENSET_RAMACER Ram Access Interrupt Enable **/
#define USB_HOST_INTENSET_RAMACER		(1 << 7)
/** USB_HOST_INTENSET_UPRSM Upstream Resume fromthe device Interrupt Enable **/
#define USB_HOST_INTENSET_UPRSM		(1 << 6)
/** USB_HOST_INTENSET_DNRSM DownStream to the Device Interrupt Enable **/
#define USB_HOST_INTENSET_DNRSM		(1 << 5)
/** USB_HOST_INTENSET_WAKEUP Wake Up Interrupt Enable **/
#define USB_HOST_INTENSET_WAKEUP		(1 << 4)
/** USB_HOST_INTENSET_RST Bus Reset Interrupt Enable **/
#define USB_HOST_INTENSET_RST		(1 << 3)
/** USB_HOST_INTENSET_HSOF Host Start Of Frame Interrupt Enable **/
#define USB_HOST_INTENSET_HSOF		(1 << 2)

/**@}*/

/** @defgroup usb_device_intflag DEVICEINTFLAG DEVICE Device Interrupt Flag
@{*/

/** USB_DEVICE_INTFLAG_LPMSUSP Link Power Management Suspend **/
#define USB_DEVICE_INTFLAG_LPMSUSP		(1 << 9)
/** USB_DEVICE_INTFLAG_LPMNYET Link Power Management Not Yet **/
#define USB_DEVICE_INTFLAG_LPMNYET		(1 << 8)
/** USB_DEVICE_INTFLAG_RAMACER Ram Access **/
#define USB_DEVICE_INTFLAG_RAMACER		(1 << 7)
/** USB_DEVICE_INTFLAG_UPRSM Upstream Resume **/
#define USB_DEVICE_INTFLAG_UPRSM		(1 << 6)
/** USB_DEVICE_INTFLAG_EORSM End Of Resume **/
#define USB_DEVICE_INTFLAG_EORSM		(1 << 5)
/** USB_DEVICE_INTFLAG_WAKEUP Wake Up **/
#define USB_DEVICE_INTFLAG_WAKEUP		(1 << 4)
/** USB_DEVICE_INTFLAG_EORST End of Reset **/
#define USB_DEVICE_INTFLAG_EORST		(1 << 3)
/** USB_DEVICE_INTFLAG_SOF Start Of Frame **/
#define USB_DEVICE_INTFLAG_SOF		(1 << 2)
/** USB_DEVICE_INTFLAG_MSOF Micro Start of Frame in High Speed Mode **/
#define USB_DEVICE_INTFLAG_MSOF		(1 << 1)
/** USB_DEVICE_INTFLAG_SUSPEND Suspend **/
#define USB_DEVICE_INTFLAG_SUSPEND		(1 << 0)

/**@}*/

/** @defgroup usb_host_intflag HOSTINTFLAG HOST Host Interrupt Flag
@{*/

/** USB_HOST_INTFLAG_DDISC Device Disconnection **/
#define USB_HOST_INTFLAG_DDISC		(1 << 9)
/** USB_HOST_INTFLAG_DCONN Device Connection **/
#define USB_HOST_INTFLAG_DCONN		(1 << 8)
/** USB_HOST_INTFLAG_RAMACER Ram Access **/
#define USB_HOST_INTFLAG_RAMACER		(1 << 7)
/** USB_HOST_INTFLAG_UPRSM Upstream Resume from the Device **/
#define USB_HOST_INTFLAG_UPRSM		(1 << 6)
/** USB_HOST_INTFLAG_DNRSM Downstream **/
#define USB_HOST_INTFLAG_DNRSM		(1 << 5)
/** USB_HOST_INTFLAG_WAKEUP Wake Up **/
#define USB_HOST_INTFLAG_WAKEUP		(1 << 4)
/** USB_HOST_INTFLAG_RST Bus Reset **/
#define USB_HOST_INTFLAG_RST		(1 << 3)
/** USB_HOST_INTFLAG_HSOF Host Start Of Frame **/
#define USB_HOST_INTFLAG_HSOF		(1 << 2)

/**@}*/

/** @defgroup usb_device_epintsmry DEVICEEPINTSMRY DEVICE End Point Interrupt Summary
@{*/

/** USB_DEVICE_EPINTSMRY_EPINT7 End Point 7 Interrupt **/
#define USB_DEVICE_EPINTSMRY_EPINT7		(1 << 7)
/** USB_DEVICE_EPINTSMRY_EPINT6 End Point 6 Interrupt **/
#define USB_DEVICE_EPINTSMRY_EPINT6		(1 << 6)
/** USB_DEVICE_EPINTSMRY_EPINT5 End Point 5 Interrupt **/
#define USB_DEVICE_EPINTSMRY_EPINT5		(1 << 5)
/** USB_DEVICE_EPINTSMRY_EPINT4 End Point 4 Interrupt **/
#define USB_DEVICE_EPINTSMRY_EPINT4		(1 << 4)
/** USB_DEVICE_EPINTSMRY_EPINT3 End Point 3 Interrupt **/
#define USB_DEVICE_EPINTSMRY_EPINT3		(1 << 3)
/** USB_DEVICE_EPINTSMRY_EPINT2 End Point 2 Interrupt **/
#define USB_DEVICE_EPINTSMRY_EPINT2		(1 << 2)
/** USB_DEVICE_EPINTSMRY_EPINT1 End Point 1 Interrupt **/
#define USB_DEVICE_EPINTSMRY_EPINT1		(1 << 1)
/** USB_DEVICE_EPINTSMRY_EPINT0 End Point 0 Interrupt **/
#define USB_DEVICE_EPINTSMRY_EPINT0		(1 << 0)

/**@}*/

/** @defgroup usb_host_pintsmry HOSTPINTSMRY HOST Pipe Interrupt Summary
@{*/

/** USB_HOST_PINTSMRY_EPINT7 Pipe 7 Interrupt **/
#define USB_HOST_PINTSMRY_EPINT7		(1 << 7)
/** USB_HOST_PINTSMRY_EPINT6 Pipe 6 Interrupt **/
#define USB_HOST_PINTSMRY_EPINT6		(1 << 6)
/** USB_HOST_PINTSMRY_EPINT5 Pipe 5 Interrupt **/
#define USB_HOST_PINTSMRY_EPINT5		(1 << 5)
/** USB_HOST_PINTSMRY_EPINT4 Pipe 4 Interrupt **/
#define USB_HOST_PINTSMRY_EPINT4		(1 << 4)
/** USB_HOST_PINTSMRY_EPINT3 Pipe 3 Interrupt **/
#define USB_HOST_PINTSMRY_EPINT3		(1 << 3)
/** USB_HOST_PINTSMRY_EPINT2 Pipe 2 Interrupt **/
#define USB_HOST_PINTSMRY_EPINT2		(1 << 2)
/** USB_HOST_PINTSMRY_EPINT1 Pipe 1 Interrupt **/
#define USB_HOST_PINTSMRY_EPINT1		(1 << 1)
/** USB_HOST_PINTSMRY_EPINT0 Pipe 0 Interrupt **/
#define USB_HOST_PINTSMRY_EPINT0		(1 << 0)

/**@}*/

/** @defgroup usb_device_descadd DEVICEDESCADD Descriptor Address
@{*/


#define USB_DEVICE_DESCADD_DESCADD_SHIFT		0
#define USB_DEVICE_DESCADD_DESCADD_MASK		0xffffffff
/** @defgroup usb_device_descadd_descadd DESCADD Descriptor Address Value
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_host_descadd HOSTDESCADD Descriptor Address
@{*/


#define USB_HOST_DESCADD_DESCADD_SHIFT		0
#define USB_HOST_DESCADD_DESCADD_MASK		0xffffffff
/** @defgroup usb_host_descadd_descadd DESCADD Descriptor Address Value
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_device_padcal DEVICEPADCAL USB PAD Calibration
@{*/


#define USB_DEVICE_PADCAL_TRIM_SHIFT		12
#define USB_DEVICE_PADCAL_TRIM_MASK		0x07
/** @defgroup usb_device_padcal_trim TRIM USB Pad Trim calibration
@{*/
/**@}*/


#define USB_DEVICE_PADCAL_TRANSN_SHIFT		6
#define USB_DEVICE_PADCAL_TRANSN_MASK		0x1f
/** @defgroup usb_device_padcal_transn TRANSN USB Pad Transn calibration
@{*/
/**@}*/


#define USB_DEVICE_PADCAL_TRANSP_SHIFT		0
#define USB_DEVICE_PADCAL_TRANSP_MASK		0x1f
/** @defgroup usb_device_padcal_transp TRANSP USB Pad Transp calibration
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_host_padcal HOSTPADCAL USB PAD Calibration
@{*/


#define USB_HOST_PADCAL_TRIM_SHIFT		12
#define USB_HOST_PADCAL_TRIM_MASK		0x07
/** @defgroup usb_host_padcal_trim TRIM USB Pad Trim calibration
@{*/
/**@}*/


#define USB_HOST_PADCAL_TRANSN_SHIFT		6
#define USB_HOST_PADCAL_TRANSN_MASK		0x1f
/** @defgroup usb_host_padcal_transn TRANSN USB Pad Transn calibration
@{*/
/**@}*/


#define USB_HOST_PADCAL_TRANSP_SHIFT		0
#define USB_HOST_PADCAL_TRANSP_MASK		0x1f
/** @defgroup usb_host_padcal_transp TRANSP USB Pad Transp calibration
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_device_epcfg%s DEVICEEPCFG%s DEVICE End Point Configuration
@{*/

/** USB_DEVICE_EPCFG%s_NYETDIS NYET Token Disable **/
#define USB_DEVICE_EPCFG%s_NYETDIS		(1 << 7)

#define USB_DEVICE_EPCFG%s_EPTYPE1_SHIFT		4
#define USB_DEVICE_EPCFG%s_EPTYPE1_MASK		0x07
/** @defgroup usb_device_epcfg%s_eptype1 EPTYPE1 End Point Type1
@{*/
/**@}*/


#define USB_DEVICE_EPCFG%s_EPTYPE0_SHIFT		0
#define USB_DEVICE_EPCFG%s_EPTYPE0_MASK		0x07
/** @defgroup usb_device_epcfg%s_eptype0 EPTYPE0 End Point Type0
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_host_pcfg%s HOSTPCFG%s HOST End Point Configuration
@{*/


#define USB_HOST_PCFG%s_PTYPE_SHIFT		3
#define USB_HOST_PCFG%s_PTYPE_MASK		0x07
/** @defgroup usb_host_pcfg%s_ptype PTYPE Pipe Type
@{*/
/**@}*/

/** USB_HOST_PCFG%s_BK Pipe Bank **/
#define USB_HOST_PCFG%s_BK		(1 << 2)

#define USB_HOST_PCFG%s_PTOKEN_SHIFT		0
#define USB_HOST_PCFG%s_PTOKEN_MASK		0x03
/** @defgroup usb_host_pcfg%s_ptoken PTOKEN Pipe Token
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_host_binterval%s HOSTBINTERVAL%s HOST Bus Access Period of Pipe
@{*/


#define USB_HOST_BINTERVAL%s_BITINTERVAL_SHIFT		0
#define USB_HOST_BINTERVAL%s_BITINTERVAL_MASK		0xff
/** @defgroup usb_host_binterval%s_bitinterval BITINTERVAL Bit Interval
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_device_epstatusclr%s DEVICEEPSTATUSCLR%s DEVICE End Point Pipe Status Clear
@{*/

/** USB_DEVICE_EPSTATUSCLR%s_BK1RDY Bank 1 Ready Clear **/
#define USB_DEVICE_EPSTATUSCLR%s_BK1RDY		(1 << 7)
/** USB_DEVICE_EPSTATUSCLR%s_BK0RDY Bank 0 Ready Clear **/
#define USB_DEVICE_EPSTATUSCLR%s_BK0RDY		(1 << 6)
/** USB_DEVICE_EPSTATUSCLR%s_STALLRQ1 Stall 1 Request Clear **/
#define USB_DEVICE_EPSTATUSCLR%s_STALLRQ1		(1 << 5)
/** USB_DEVICE_EPSTATUSCLR%s_STALLRQ0 Stall 0 Request Clear **/
#define USB_DEVICE_EPSTATUSCLR%s_STALLRQ0		(1 << 4)
/** USB_DEVICE_EPSTATUSCLR%s_CURBK Current Bank Clear **/
#define USB_DEVICE_EPSTATUSCLR%s_CURBK		(1 << 2)
/** USB_DEVICE_EPSTATUSCLR%s_DTGLIN Data Toggle IN Clear **/
#define USB_DEVICE_EPSTATUSCLR%s_DTGLIN		(1 << 1)
/** USB_DEVICE_EPSTATUSCLR%s_DTGLOUT Data Toggle OUT Clear **/
#define USB_DEVICE_EPSTATUSCLR%s_DTGLOUT		(1 << 0)

/**@}*/

/** @defgroup usb_host_pstatusclr%s HOSTPSTATUSCLR%s HOST End Point Pipe Status Clear
@{*/

/** USB_HOST_PSTATUSCLR%s_BK1RDY Bank 1 Ready Clear **/
#define USB_HOST_PSTATUSCLR%s_BK1RDY		(1 << 7)
/** USB_HOST_PSTATUSCLR%s_BK0RDY Bank 0 Ready Clear **/
#define USB_HOST_PSTATUSCLR%s_BK0RDY		(1 << 6)
/** USB_HOST_PSTATUSCLR%s_PFREEZE Pipe Freeze Clear **/
#define USB_HOST_PSTATUSCLR%s_PFREEZE		(1 << 4)
/** USB_HOST_PSTATUSCLR%s_CURBK Curren Bank clear **/
#define USB_HOST_PSTATUSCLR%s_CURBK		(1 << 2)
/** USB_HOST_PSTATUSCLR%s_DTGL Data Toggle clear **/
#define USB_HOST_PSTATUSCLR%s_DTGL		(1 << 0)

/**@}*/

/** @defgroup usb_device_epstatusset%s DEVICEEPSTATUSSET%s DEVICE End Point Pipe Status Set
@{*/

/** USB_DEVICE_EPSTATUSSET%s_BK1RDY Bank 1 Ready Set **/
#define USB_DEVICE_EPSTATUSSET%s_BK1RDY		(1 << 7)
/** USB_DEVICE_EPSTATUSSET%s_BK0RDY Bank 0 Ready Set **/
#define USB_DEVICE_EPSTATUSSET%s_BK0RDY		(1 << 6)
/** USB_DEVICE_EPSTATUSSET%s_STALLRQ1 Stall 1 Request Set **/
#define USB_DEVICE_EPSTATUSSET%s_STALLRQ1		(1 << 5)
/** USB_DEVICE_EPSTATUSSET%s_STALLRQ0 Stall 0 Request Set **/
#define USB_DEVICE_EPSTATUSSET%s_STALLRQ0		(1 << 4)
/** USB_DEVICE_EPSTATUSSET%s_CURBK Current Bank Set **/
#define USB_DEVICE_EPSTATUSSET%s_CURBK		(1 << 2)
/** USB_DEVICE_EPSTATUSSET%s_DTGLIN Data Toggle IN Set **/
#define USB_DEVICE_EPSTATUSSET%s_DTGLIN		(1 << 1)
/** USB_DEVICE_EPSTATUSSET%s_DTGLOUT Data Toggle OUT Set **/
#define USB_DEVICE_EPSTATUSSET%s_DTGLOUT		(1 << 0)

/**@}*/

/** @defgroup usb_host_pstatusset%s HOSTPSTATUSSET%s HOST End Point Pipe Status Set
@{*/

/** USB_HOST_PSTATUSSET%s_BK1RDY Bank 1 Ready Set **/
#define USB_HOST_PSTATUSSET%s_BK1RDY		(1 << 7)
/** USB_HOST_PSTATUSSET%s_BK0RDY Bank 0 Ready Set **/
#define USB_HOST_PSTATUSSET%s_BK0RDY		(1 << 6)
/** USB_HOST_PSTATUSSET%s_PFREEZE Pipe Freeze Set **/
#define USB_HOST_PSTATUSSET%s_PFREEZE		(1 << 4)
/** USB_HOST_PSTATUSSET%s_CURBK Current Bank Set **/
#define USB_HOST_PSTATUSSET%s_CURBK		(1 << 2)
/** USB_HOST_PSTATUSSET%s_DTGL Data Toggle Set **/
#define USB_HOST_PSTATUSSET%s_DTGL		(1 << 0)

/**@}*/

/** @defgroup usb_device_epstatus%s DEVICEEPSTATUS%s DEVICE End Point Pipe Status
@{*/

/** USB_DEVICE_EPSTATUS%s_BK1RDY Bank 1 ready **/
#define USB_DEVICE_EPSTATUS%s_BK1RDY		(1 << 7)
/** USB_DEVICE_EPSTATUS%s_BK0RDY Bank 0 ready **/
#define USB_DEVICE_EPSTATUS%s_BK0RDY		(1 << 6)
/** USB_DEVICE_EPSTATUS%s_STALLRQ1 Stall 1 Request **/
#define USB_DEVICE_EPSTATUS%s_STALLRQ1		(1 << 5)
/** USB_DEVICE_EPSTATUS%s_STALLRQ0 Stall 0 Request **/
#define USB_DEVICE_EPSTATUS%s_STALLRQ0		(1 << 4)
/** USB_DEVICE_EPSTATUS%s_CURBK Current Bank **/
#define USB_DEVICE_EPSTATUS%s_CURBK		(1 << 2)
/** USB_DEVICE_EPSTATUS%s_DTGLIN Data Toggle In **/
#define USB_DEVICE_EPSTATUS%s_DTGLIN		(1 << 1)
/** USB_DEVICE_EPSTATUS%s_DTGLOUT Data Toggle Out **/
#define USB_DEVICE_EPSTATUS%s_DTGLOUT		(1 << 0)

/**@}*/

/** @defgroup usb_host_pstatus%s HOSTPSTATUS%s HOST End Point Pipe Status
@{*/

/** USB_HOST_PSTATUS%s_BK1RDY Bank 1 ready **/
#define USB_HOST_PSTATUS%s_BK1RDY		(1 << 7)
/** USB_HOST_PSTATUS%s_BK0RDY Bank 0 ready **/
#define USB_HOST_PSTATUS%s_BK0RDY		(1 << 6)
/** USB_HOST_PSTATUS%s_PFREEZE Pipe Freeze **/
#define USB_HOST_PSTATUS%s_PFREEZE		(1 << 4)
/** USB_HOST_PSTATUS%s_CURBK Current Bank **/
#define USB_HOST_PSTATUS%s_CURBK		(1 << 2)
/** USB_HOST_PSTATUS%s_DTGL Data Toggle **/
#define USB_HOST_PSTATUS%s_DTGL		(1 << 0)

/**@}*/

/** @defgroup usb_device_epintflag%s DEVICEEPINTFLAG%s DEVICE End Point Interrupt Flag
@{*/

/** USB_DEVICE_EPINTFLAG%s_STALL1 Stall 1 In/out **/
#define USB_DEVICE_EPINTFLAG%s_STALL1		(1 << 6)
/** USB_DEVICE_EPINTFLAG%s_STALL0 Stall 0 In/out **/
#define USB_DEVICE_EPINTFLAG%s_STALL0		(1 << 5)
/** USB_DEVICE_EPINTFLAG%s_RXSTP Received Setup **/
#define USB_DEVICE_EPINTFLAG%s_RXSTP		(1 << 4)
/** USB_DEVICE_EPINTFLAG%s_TRFAIL1 Error Flow 1 **/
#define USB_DEVICE_EPINTFLAG%s_TRFAIL1		(1 << 3)
/** USB_DEVICE_EPINTFLAG%s_TRFAIL0 Error Flow 0 **/
#define USB_DEVICE_EPINTFLAG%s_TRFAIL0		(1 << 2)
/** USB_DEVICE_EPINTFLAG%s_TRCPT1 Transfer Complete 1 **/
#define USB_DEVICE_EPINTFLAG%s_TRCPT1		(1 << 1)
/** USB_DEVICE_EPINTFLAG%s_TRCPT0 Transfer Complete 0 **/
#define USB_DEVICE_EPINTFLAG%s_TRCPT0		(1 << 0)

/**@}*/

/** @defgroup usb_host_pintflag%s HOSTPINTFLAG%s HOST Pipe Interrupt Flag
@{*/

/** USB_HOST_PINTFLAG%s_STALL Stall Interrupt Flag **/
#define USB_HOST_PINTFLAG%s_STALL		(1 << 5)
/** USB_HOST_PINTFLAG%s_TXSTP Transmit Setup Interrupt Flag **/
#define USB_HOST_PINTFLAG%s_TXSTP		(1 << 4)
/** USB_HOST_PINTFLAG%s_PERR Pipe Error Interrupt Flag **/
#define USB_HOST_PINTFLAG%s_PERR		(1 << 3)
/** USB_HOST_PINTFLAG%s_TRFAIL Error Flow Interrupt Flag **/
#define USB_HOST_PINTFLAG%s_TRFAIL		(1 << 2)
/** USB_HOST_PINTFLAG%s_TRCPT1 Transfer Complete 1 Interrupt Flag **/
#define USB_HOST_PINTFLAG%s_TRCPT1		(1 << 1)
/** USB_HOST_PINTFLAG%s_TRCPT0 Transfer Complete 0 Interrupt Flag **/
#define USB_HOST_PINTFLAG%s_TRCPT0		(1 << 0)

/**@}*/

/** @defgroup usb_device_epintenclr%s DEVICEEPINTENCLR%s DEVICE End Point Interrupt Clear Flag
@{*/

/** USB_DEVICE_EPINTENCLR%s_STALL1 Stall 1 In/Out Interrupt Disable **/
#define USB_DEVICE_EPINTENCLR%s_STALL1		(1 << 6)
/** USB_DEVICE_EPINTENCLR%s_STALL0 Stall 0 In/Out Interrupt Disable **/
#define USB_DEVICE_EPINTENCLR%s_STALL0		(1 << 5)
/** USB_DEVICE_EPINTENCLR%s_RXSTP Received Setup Interrupt Disable **/
#define USB_DEVICE_EPINTENCLR%s_RXSTP		(1 << 4)
/** USB_DEVICE_EPINTENCLR%s_TRFAIL1 Error Flow 1 Interrupt Disable **/
#define USB_DEVICE_EPINTENCLR%s_TRFAIL1		(1 << 3)
/** USB_DEVICE_EPINTENCLR%s_TRFAIL0 Error Flow 0 Interrupt Disable **/
#define USB_DEVICE_EPINTENCLR%s_TRFAIL0		(1 << 2)
/** USB_DEVICE_EPINTENCLR%s_TRCPT1 Transfer Complete 1 Interrupt Disable **/
#define USB_DEVICE_EPINTENCLR%s_TRCPT1		(1 << 1)
/** USB_DEVICE_EPINTENCLR%s_TRCPT0 Transfer Complete 0 Interrupt Disable **/
#define USB_DEVICE_EPINTENCLR%s_TRCPT0		(1 << 0)

/**@}*/

/** @defgroup usb_host_pintenclr%s HOSTPINTENCLR%s HOST Pipe Interrupt Flag Clear
@{*/

/** USB_HOST_PINTENCLR%s_STALL Stall Inetrrupt Disable **/
#define USB_HOST_PINTENCLR%s_STALL		(1 << 5)
/** USB_HOST_PINTENCLR%s_TXSTP Transmit Setup Interrupt Disable **/
#define USB_HOST_PINTENCLR%s_TXSTP		(1 << 4)
/** USB_HOST_PINTENCLR%s_PERR Pipe Error Interrupt Disable **/
#define USB_HOST_PINTENCLR%s_PERR		(1 << 3)
/** USB_HOST_PINTENCLR%s_TRFAIL Error Flow Interrupt Disable **/
#define USB_HOST_PINTENCLR%s_TRFAIL		(1 << 2)
/** USB_HOST_PINTENCLR%s_TRCPT1 Transfer Complete 1 Disable **/
#define USB_HOST_PINTENCLR%s_TRCPT1		(1 << 1)
/** USB_HOST_PINTENCLR%s_TRCPT0 Transfer Complete 0 Disable **/
#define USB_HOST_PINTENCLR%s_TRCPT0		(1 << 0)

/**@}*/

/** @defgroup usb_device_epintenset%s DEVICEEPINTENSET%s DEVICE End Point Interrupt Set Flag
@{*/

/** USB_DEVICE_EPINTENSET%s_STALL1 Stall 1 In/out Interrupt enable **/
#define USB_DEVICE_EPINTENSET%s_STALL1		(1 << 6)
/** USB_DEVICE_EPINTENSET%s_STALL0 Stall 0 In/out Interrupt enable **/
#define USB_DEVICE_EPINTENSET%s_STALL0		(1 << 5)
/** USB_DEVICE_EPINTENSET%s_RXSTP Received Setup Interrupt Enable **/
#define USB_DEVICE_EPINTENSET%s_RXSTP		(1 << 4)
/** USB_DEVICE_EPINTENSET%s_TRFAIL1 Error Flow 1 Interrupt Enable **/
#define USB_DEVICE_EPINTENSET%s_TRFAIL1		(1 << 3)
/** USB_DEVICE_EPINTENSET%s_TRFAIL0 Error Flow 0 Interrupt Enable **/
#define USB_DEVICE_EPINTENSET%s_TRFAIL0		(1 << 2)
/** USB_DEVICE_EPINTENSET%s_TRCPT1 Transfer Complete 1 Interrupt Enable **/
#define USB_DEVICE_EPINTENSET%s_TRCPT1		(1 << 1)
/** USB_DEVICE_EPINTENSET%s_TRCPT0 Transfer Complete 0 Interrupt Enable **/
#define USB_DEVICE_EPINTENSET%s_TRCPT0		(1 << 0)

/**@}*/

/** @defgroup usb_host_pintenset%s HOSTPINTENSET%s HOST Pipe Interrupt Flag Set
@{*/

/** USB_HOST_PINTENSET%s_STALL Stall Interrupt Enable **/
#define USB_HOST_PINTENSET%s_STALL		(1 << 5)
/** USB_HOST_PINTENSET%s_TXSTP Transmit Setup Interrupt Enable **/
#define USB_HOST_PINTENSET%s_TXSTP		(1 << 4)
/** USB_HOST_PINTENSET%s_PERR Pipe Error Interrupt Enable **/
#define USB_HOST_PINTENSET%s_PERR		(1 << 3)
/** USB_HOST_PINTENSET%s_TRFAIL Error Flow Interrupt Enable **/
#define USB_HOST_PINTENSET%s_TRFAIL		(1 << 2)
/** USB_HOST_PINTENSET%s_TRCPT1 Transfer Complete 1 Interrupt Enable **/
#define USB_HOST_PINTENSET%s_TRCPT1		(1 << 1)
/** USB_HOST_PINTENSET%s_TRCPT0 Transfer Complete 0 Interrupt Enable **/
#define USB_HOST_PINTENSET%s_TRCPT0		(1 << 0)

/**@}*/
