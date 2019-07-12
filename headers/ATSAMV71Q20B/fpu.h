#pragma once 

/* --- FPU: Floating Point Unit ------------------------------------- */

/** @defgroup fpu_registers Floating Point Unit Register
@{*/

/** FPU_FPCCR Floating-point Context Control Register **/
#define FPU_FPCCR			MMIO32(FPU_BASE + 0x04)
/** FPU_FPCAR Floating-point Context Address Register **/
#define FPU_FPCAR			MMIO32(FPU_BASE + 0x08)
/** FPU_FPDSCR Floating-point Default Status Control Register **/
#define FPU_FPDSCR			MMIO32(FPU_BASE + 0x0c)
/** FPU_MVFR0 Media and VFP Feature Register 0 **/
#define FPU_MVFR0			MMIO32(FPU_BASE + 0x10)
/** FPU_MVFR1 Media and VFP Feature Register 1 **/
#define FPU_MVFR1			MMIO32(FPU_BASE + 0x14)
/** FPU_MVFR2 Media and VFP Feature Register 2 **/
#define FPU_MVFR2			MMIO32(FPU_BASE + 0x18)

/**@}*/


/** @defgroup fpu_fpccr FPCCR Floating-point Context Control Register
@{*/

/** FPU_FPCCR_ASPEN Enables CONTROL.FPCA setting on execution of a floating-point instruction. This results in automatic hardware state preservation and restoration, for floating-point context, on exception entry and exit. **/
#define FPU_FPCCR_ASPEN		(1 << 31)
/** FPU_FPCCR_LSPEN Enable automatic lazy state preservation for floating-point context. **/
#define FPU_FPCCR_LSPEN		(1 << 30)
/** FPU_FPCCR_MONRDY DebugMonitor is enabled and priority permits setting MON_PEND when the floating-point stack frame was allocated. **/
#define FPU_FPCCR_MONRDY		(1 << 8)
/** FPU_FPCCR_BFRDY BusFault is enabled and priority permitted setting the BusFault handler to the pending state when the floating-point stack frame was allocated. **/
#define FPU_FPCCR_BFRDY		(1 << 6)
/** FPU_FPCCR_MMRDY MemManage is enabled and priority permitted setting the MemManage handler to the pending state when the floating-point stack frame was allocated. **/
#define FPU_FPCCR_MMRDY		(1 << 5)
/** FPU_FPCCR_HFRDY Priority permitted setting the HardFault handler to the pending state when the floating-point stack frame was allocated. **/
#define FPU_FPCCR_HFRDY		(1 << 4)
/** FPU_FPCCR_THREAD Mode was Thread Mode when the floating-point stack frame was allocated. **/
#define FPU_FPCCR_THREAD		(1 << 3)
/** FPU_FPCCR_USER Privilege level was user when the floating-point stack frame was allocated. **/
#define FPU_FPCCR_USER		(1 << 1)
/** FPU_FPCCR_LSPACT Lazy state preservation is active. Floating-point stack frame has been allocated but saving state to it has been deferred. **/
#define FPU_FPCCR_LSPACT		(1 << 0)

/**@}*/

/** @defgroup fpu_fpcar FPCAR Floating-point Context Address Register
@{*/


#define FPU_FPCAR_ADDRESS_SHIFT		3
#define FPU_FPCAR_ADDRESS_MASK		0x1fffffff
/** @defgroup fpu_fpcar_address ADDRESS The location of the unpopulated floating-point register space allocated on an exception stack frame.
@{*/
/**@}*/


/**@}*/

/** @defgroup fpu_fpdscr FPDSCR Floating-point Default Status Control Register
@{*/

/** FPU_FPDSCR_AHP Default value for FPSCR.AHP. **/
#define FPU_FPDSCR_AHP		(1 << 26)
/** FPU_FPDSCR_DN Default value for FPSCR.DN. **/
#define FPU_FPDSCR_DN		(1 << 25)
/** FPU_FPDSCR_FZ Default value for FPSCR.FZ. **/
#define FPU_FPDSCR_FZ		(1 << 24)

#define FPU_FPDSCR_RMode_SHIFT		22
#define FPU_FPDSCR_RMode_MASK		0x03
/** @defgroup fpu_fpdscr_rmode RMode Default value for FPSCR.RMode.
@{*/
/**@}*/


/**@}*/

/** @defgroup fpu_mvfr0 MVFR0 Media and VFP Feature Register 0
@{*/


#define FPU_MVFR0_FP_rounding_modes_SHIFT		28
#define FPU_MVFR0_FP_rounding_modes_MASK		0x0f
/** @defgroup fpu_mvfr0_fp_rounding_modes FProundingmodes Indicates the rounding modes supported by the FP floating-point hardware
@{*/
/**@}*/


#define FPU_MVFR0_Short_vectors_SHIFT		24
#define FPU_MVFR0_Short_vectors_MASK		0x0f
/** @defgroup fpu_mvfr0_short_vectors Shortvectors Indicates the hardware support for FP short vectors
@{*/
/**@}*/


#define FPU_MVFR0_Square_root_SHIFT		20
#define FPU_MVFR0_Square_root_MASK		0x0f
/** @defgroup fpu_mvfr0_square_root Squareroot Indicates the hardware support for FP square root operations
@{*/
/**@}*/


#define FPU_MVFR0_Divide_SHIFT		16
#define FPU_MVFR0_Divide_MASK		0x0f
/** @defgroup fpu_mvfr0_divide Divide Indicates the hardware support for FP divide operations
@{*/
/**@}*/


#define FPU_MVFR0_FP_excep_trapping_SHIFT		12
#define FPU_MVFR0_FP_excep_trapping_MASK		0x0f
/** @defgroup fpu_mvfr0_fp_excep_trapping FPexceptrapping Indicates whether the FP hardware implementation supports exception trapping
@{*/
/**@}*/


#define FPU_MVFR0_Double_precision_SHIFT		8
#define FPU_MVFR0_Double_precision_MASK		0x0f
/** @defgroup fpu_mvfr0_double_precision Doubleprecision Indicates the hardware support for FP double-precision operations
@{*/
/**@}*/


#define FPU_MVFR0_Single_precision_SHIFT		4
#define FPU_MVFR0_Single_precision_MASK		0x0f
/** @defgroup fpu_mvfr0_single_precision Singleprecision Indicates the hardware support for FP single-precision operations
@{*/
/**@}*/


#define FPU_MVFR0_A_SIMD_registers_SHIFT		0
#define FPU_MVFR0_A_SIMD_registers_MASK		0x0f
/** @defgroup fpu_mvfr0_a_simd_registers ASIMDregisters Indicates the size of the FP register bank
@{*/
/**@}*/


/**@}*/

/** @defgroup fpu_mvfr1 MVFR1 Media and VFP Feature Register 1
@{*/


#define FPU_MVFR1_FP_fused_MAC_SHIFT		28
#define FPU_MVFR1_FP_fused_MAC_MASK		0x0f
/** @defgroup fpu_mvfr1_fp_fused_mac FPfusedMAC Indicates whether the FP supports fused multiply accumulate operations
@{*/
/**@}*/


#define FPU_MVFR1_FP_HPFP_SHIFT		24
#define FPU_MVFR1_FP_HPFP_MASK		0x0f
/** @defgroup fpu_mvfr1_fp_hpfp FPHPFP Floating Point Half-Precision and double-precision
@{*/
/**@}*/


#define FPU_MVFR1_D_NaN_mode_SHIFT		4
#define FPU_MVFR1_D_NaN_mode_MASK		0x0f
/** @defgroup fpu_mvfr1_d_nan_mode DNaNmode Indicates whether the FP hardware implementation supports only the Default NaN mode
@{*/
/**@}*/


#define FPU_MVFR1_FtZ_mode_SHIFT		0
#define FPU_MVFR1_FtZ_mode_MASK		0x0f
/** @defgroup fpu_mvfr1_ftz_mode FtZmode Indicates whether the FP hardware implementation supports only the Flush-to-Zero mode of operation
@{*/
/**@}*/


/**@}*/

/** @defgroup fpu_mvfr2 MVFR2 Media and VFP Feature Register 2
@{*/


#define FPU_MVFR2_VFP_Misc_SHIFT		4
#define FPU_MVFR2_VFP_Misc_MASK		0x0f
/** @defgroup fpu_mvfr2_vfp_misc VFPMisc Indicates the hardware support for FP miscellaneous features
@{*/
/**@}*/


/**@}*/
