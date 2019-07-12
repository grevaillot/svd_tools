#pragma once 

/* --- AXI: AXI interconnect registers ------------------------------ */

/** @defgroup axi_registers AXI interconnect registers Register
@{*/

/** AXI_AXI_PERIPH_ID_4 AXI interconnect - peripheral ID4 register **/
#define AXI_AXI_PERIPH_ID_4			MMIO32(AXI_BASE + 0x1fd0)
/** AXI_AXI_PERIPH_ID_0 AXI interconnect - peripheral ID0 register **/
#define AXI_AXI_PERIPH_ID_0			MMIO32(AXI_BASE + 0x1fe0)
/** AXI_AXI_PERIPH_ID_1 AXI interconnect - peripheral ID1 register **/
#define AXI_AXI_PERIPH_ID_1			MMIO32(AXI_BASE + 0x1fe4)
/** AXI_AXI_PERIPH_ID_2 AXI interconnect - peripheral ID2 register **/
#define AXI_AXI_PERIPH_ID_2			MMIO32(AXI_BASE + 0x1fe8)
/** AXI_AXI_PERIPH_ID_3 AXI interconnect - peripheral ID3 register **/
#define AXI_AXI_PERIPH_ID_3			MMIO32(AXI_BASE + 0x1fec)
/** AXI_AXI_COMP_ID_0 AXI interconnect - component ID0 register **/
#define AXI_AXI_COMP_ID_0			MMIO32(AXI_BASE + 0x1ff0)
/** AXI_AXI_COMP_ID_1 AXI interconnect - component ID1 register **/
#define AXI_AXI_COMP_ID_1			MMIO32(AXI_BASE + 0x1ff4)
/** AXI_AXI_COMP_ID_2 AXI interconnect - component ID2 register **/
#define AXI_AXI_COMP_ID_2			MMIO32(AXI_BASE + 0x1ff8)
/** AXI_AXI_COMP_ID_3 AXI interconnect - component ID3 register **/
#define AXI_AXI_COMP_ID_3			MMIO32(AXI_BASE + 0x1ffc)
/** AXI_AXI_TARG1_FN_MOD_ISS_BM AXI interconnect - TARG x bus matrix issuing functionality register **/
#define AXI_AXI_TARG1_FN_MOD_ISS_BM			MMIO32(AXI_BASE + 0x2008)
/** AXI_AXI_TARG1_FN_MOD2 AXI interconnect - TARG x bus matrix functionality 2 register **/
#define AXI_AXI_TARG1_FN_MOD2			MMIO32(AXI_BASE + 0x2024)
/** AXI_AXI_TARG1_FN_MOD_LB AXI interconnect - TARG x long burst functionality modification **/
#define AXI_AXI_TARG1_FN_MOD_LB			MMIO32(AXI_BASE + 0x202c)
/** AXI_AXI_TARG1_FN_MOD AXI interconnect - TARG x long burst functionality modification **/
#define AXI_AXI_TARG1_FN_MOD			MMIO32(AXI_BASE + 0x2108)
/** AXI_AXI_TARG2_FN_MOD_ISS_BM AXI interconnect - TARG x bus matrix issuing functionality register **/
#define AXI_AXI_TARG2_FN_MOD_ISS_BM			MMIO32(AXI_BASE + 0x3008)
/** AXI_AXI_TARG2_FN_MOD2 AXI interconnect - TARG x bus matrix functionality 2 register **/
#define AXI_AXI_TARG2_FN_MOD2			MMIO32(AXI_BASE + 0x3024)
/** AXI_AXI_TARG2_FN_MOD_LB AXI interconnect - TARG x long burst functionality modification **/
#define AXI_AXI_TARG2_FN_MOD_LB			MMIO32(AXI_BASE + 0x302c)
/** AXI_AXI_TARG2_FN_MOD AXI interconnect - TARG x long burst functionality modification **/
#define AXI_AXI_TARG2_FN_MOD			MMIO32(AXI_BASE + 0x3108)
/** AXI_AXI_TARG3_FN_MOD_ISS_BM AXI interconnect - TARG x bus matrix issuing functionality register **/
#define AXI_AXI_TARG3_FN_MOD_ISS_BM			MMIO32(AXI_BASE + 0x4008)
/** AXI_AXI_TARG4_FN_MOD_ISS_BM AXI interconnect - TARG x bus matrix issuing functionality register **/
#define AXI_AXI_TARG4_FN_MOD_ISS_BM			MMIO32(AXI_BASE + 0x5008)
/** AXI_AXI_TARG5_FN_MOD_ISS_BM AXI interconnect - TARG x bus matrix issuing functionality register **/
#define AXI_AXI_TARG5_FN_MOD_ISS_BM			MMIO32(AXI_BASE + 0x6008)
/** AXI_AXI_TARG6_FN_MOD_ISS_BM AXI interconnect - TARG x bus matrix issuing functionality register **/
#define AXI_AXI_TARG6_FN_MOD_ISS_BM			MMIO32(AXI_BASE + 0x7008)
/** AXI_AXI_TARG7_FN_MOD_ISS_BM AXI interconnect - TARG x bus matrix issuing functionality register **/
#define AXI_AXI_TARG7_FN_MOD_ISS_BM			MMIO32(AXI_BASE + 0x800c)
/** AXI_AXI_TARG7_FN_MOD2 AXI interconnect - TARG x bus matrix functionality 2 register **/
#define AXI_AXI_TARG7_FN_MOD2			MMIO32(AXI_BASE + 0x8024)
/** AXI_AXI_TARG7_FN_MOD AXI interconnect - TARG x long burst functionality modification **/
#define AXI_AXI_TARG7_FN_MOD			MMIO32(AXI_BASE + 0x8108)
/** AXI_AXI_INI1_FN_MOD2 AXI interconnect - INI x functionality modification 2 register **/
#define AXI_AXI_INI1_FN_MOD2			MMIO32(AXI_BASE + 0x42024)
/** AXI_AXI_INI1_FN_MOD_AHB AXI interconnect - INI x AHB functionality modification register **/
#define AXI_AXI_INI1_FN_MOD_AHB			MMIO32(AXI_BASE + 0x42028)
/** AXI_AXI_INI1_READ_QOS AXI interconnect - INI x read QoS register **/
#define AXI_AXI_INI1_READ_QOS			MMIO32(AXI_BASE + 0x42100)
/** AXI_AXI_INI1_WRITE_QOS AXI interconnect - INI x write QoS register **/
#define AXI_AXI_INI1_WRITE_QOS			MMIO32(AXI_BASE + 0x42104)
/** AXI_AXI_INI1_FN_MOD AXI interconnect - INI x issuing functionality modification register **/
#define AXI_AXI_INI1_FN_MOD			MMIO32(AXI_BASE + 0x42108)
/** AXI_AXI_INI2_READ_QOS AXI interconnect - INI x read QoS register **/
#define AXI_AXI_INI2_READ_QOS			MMIO32(AXI_BASE + 0x43100)
/** AXI_AXI_INI2_WRITE_QOS AXI interconnect - INI x write QoS register **/
#define AXI_AXI_INI2_WRITE_QOS			MMIO32(AXI_BASE + 0x43104)
/** AXI_AXI_INI2_FN_MOD AXI interconnect - INI x issuing functionality modification register **/
#define AXI_AXI_INI2_FN_MOD			MMIO32(AXI_BASE + 0x43108)
/** AXI_AXI_INI3_FN_MOD2 AXI interconnect - INI x functionality modification 2 register **/
#define AXI_AXI_INI3_FN_MOD2			MMIO32(AXI_BASE + 0x44024)
/** AXI_AXI_INI3_FN_MOD_AHB AXI interconnect - INI x AHB functionality modification register **/
#define AXI_AXI_INI3_FN_MOD_AHB			MMIO32(AXI_BASE + 0x44028)
/** AXI_AXI_INI3_READ_QOS AXI interconnect - INI x read QoS register **/
#define AXI_AXI_INI3_READ_QOS			MMIO32(AXI_BASE + 0x44100)
/** AXI_AXI_INI3_WRITE_QOS AXI interconnect - INI x write QoS register **/
#define AXI_AXI_INI3_WRITE_QOS			MMIO32(AXI_BASE + 0x44104)
/** AXI_AXI_INI3_FN_MOD AXI interconnect - INI x issuing functionality modification register **/
#define AXI_AXI_INI3_FN_MOD			MMIO32(AXI_BASE + 0x44108)
/** AXI_AXI_INI4_READ_QOS AXI interconnect - INI x read QoS register **/
#define AXI_AXI_INI4_READ_QOS			MMIO32(AXI_BASE + 0x45100)
/** AXI_AXI_INI4_WRITE_QOS AXI interconnect - INI x write QoS register **/
#define AXI_AXI_INI4_WRITE_QOS			MMIO32(AXI_BASE + 0x45104)
/** AXI_AXI_INI4_FN_MOD AXI interconnect - INI x issuing functionality modification register **/
#define AXI_AXI_INI4_FN_MOD			MMIO32(AXI_BASE + 0x45108)
/** AXI_AXI_INI5_READ_QOS AXI interconnect - INI x read QoS register **/
#define AXI_AXI_INI5_READ_QOS			MMIO32(AXI_BASE + 0x46100)
/** AXI_AXI_INI5_WRITE_QOS AXI interconnect - INI x write QoS register **/
#define AXI_AXI_INI5_WRITE_QOS			MMIO32(AXI_BASE + 0x46104)
/** AXI_AXI_INI5_FN_MOD AXI interconnect - INI x issuing functionality modification register **/
#define AXI_AXI_INI5_FN_MOD			MMIO32(AXI_BASE + 0x46108)
/** AXI_AXI_INI6_READ_QOS AXI interconnect - INI x read QoS register **/
#define AXI_AXI_INI6_READ_QOS			MMIO32(AXI_BASE + 0x47100)
/** AXI_AXI_INI6_WRITE_QOS AXI interconnect - INI x write QoS register **/
#define AXI_AXI_INI6_WRITE_QOS			MMIO32(AXI_BASE + 0x47104)
/** AXI_AXI_INI6_FN_MOD AXI interconnect - INI x issuing functionality modification register **/
#define AXI_AXI_INI6_FN_MOD			MMIO32(AXI_BASE + 0x47108)

/**@}*/


/** @defgroup axi_axi_periph_id_4 AXIPERIPHID4 AXI interconnect - peripheral ID4 register
@{*/


#define AXI_AXI_PERIPH_ID_4_KCOUNT4_SHIFT		4
#define AXI_AXI_PERIPH_ID_4_KCOUNT4_MASK		0x0f
/** @defgroup axi_axi_periph_id_4_kcount4 KCOUNT4 Register file size
@{*/
/**@}*/


#define AXI_AXI_PERIPH_ID_4_JEP106CON_SHIFT		0
#define AXI_AXI_PERIPH_ID_4_JEP106CON_MASK		0x0f
/** @defgroup axi_axi_periph_id_4_jep106con JEP106CON JEP106 continuation code
@{*/
/**@}*/


/**@}*/

/** @defgroup axi_axi_periph_id_0 AXIPERIPHID0 AXI interconnect - peripheral ID0 register
@{*/


#define AXI_AXI_PERIPH_ID_0_PARTNUM_SHIFT		0
#define AXI_AXI_PERIPH_ID_0_PARTNUM_MASK		0xff
/** @defgroup axi_axi_periph_id_0_partnum PARTNUM Peripheral part number bits 0 to 7
@{*/
/**@}*/


/**@}*/

/** @defgroup axi_axi_periph_id_1 AXIPERIPHID1 AXI interconnect - peripheral ID1 register
@{*/


#define AXI_AXI_PERIPH_ID_1_JEP106I_SHIFT		4
#define AXI_AXI_PERIPH_ID_1_JEP106I_MASK		0x0f
/** @defgroup axi_axi_periph_id_1_jep106i JEP106I JEP106 identity bits 0 to 3
@{*/
/**@}*/


#define AXI_AXI_PERIPH_ID_1_PARTNUM_SHIFT		0
#define AXI_AXI_PERIPH_ID_1_PARTNUM_MASK		0x0f
/** @defgroup axi_axi_periph_id_1_partnum PARTNUM Peripheral part number bits 8 to 11
@{*/
/**@}*/


/**@}*/

/** @defgroup axi_axi_periph_id_2 AXIPERIPHID2 AXI interconnect - peripheral ID2 register
@{*/


#define AXI_AXI_PERIPH_ID_2_REVISION_SHIFT		4
#define AXI_AXI_PERIPH_ID_2_REVISION_MASK		0x0f
/** @defgroup axi_axi_periph_id_2_revision REVISION Peripheral revision number
@{*/
/**@}*/

/** AXI_AXI_PERIPH_ID_2_JEDEC JEP106 code flag **/
#define AXI_AXI_PERIPH_ID_2_JEDEC		(1 << 3)

#define AXI_AXI_PERIPH_ID_2_JEP106ID_SHIFT		0
#define AXI_AXI_PERIPH_ID_2_JEP106ID_MASK		0x07
/** @defgroup axi_axi_periph_id_2_jep106id JEP106ID JEP106 Identity bits 4 to 6
@{*/
/**@}*/


/**@}*/

/** @defgroup axi_axi_periph_id_3 AXIPERIPHID3 AXI interconnect - peripheral ID3 register
@{*/


#define AXI_AXI_PERIPH_ID_3_REV_AND_SHIFT		4
#define AXI_AXI_PERIPH_ID_3_REV_AND_MASK		0x0f
/** @defgroup axi_axi_periph_id_3_rev_and REVAND Customer version
@{*/
/**@}*/


#define AXI_AXI_PERIPH_ID_3_CUST_MOD_NUM_SHIFT		0
#define AXI_AXI_PERIPH_ID_3_CUST_MOD_NUM_MASK		0x0f
/** @defgroup axi_axi_periph_id_3_cust_mod_num CUSTMODNUM Customer modification
@{*/
/**@}*/


/**@}*/

/** @defgroup axi_axi_comp_id_0 AXICOMPID0 AXI interconnect - component ID0 register
@{*/


#define AXI_AXI_COMP_ID_0_PREAMBLE_SHIFT		0
#define AXI_AXI_COMP_ID_0_PREAMBLE_MASK		0xff
/** @defgroup axi_axi_comp_id_0_preamble PREAMBLE Preamble bits 0 to 7
@{*/
/**@}*/


/**@}*/

/** @defgroup axi_axi_comp_id_1 AXICOMPID1 AXI interconnect - component ID1 register
@{*/


#define AXI_AXI_COMP_ID_1_CLASS_SHIFT		4
#define AXI_AXI_COMP_ID_1_CLASS_MASK		0x0f
/** @defgroup axi_axi_comp_id_1_class CLASS Component class
@{*/
/**@}*/


#define AXI_AXI_COMP_ID_1_PREAMBLE_SHIFT		0
#define AXI_AXI_COMP_ID_1_PREAMBLE_MASK		0x0f
/** @defgroup axi_axi_comp_id_1_preamble PREAMBLE Preamble bits 8 to 11
@{*/
/**@}*/


/**@}*/

/** @defgroup axi_axi_comp_id_2 AXICOMPID2 AXI interconnect - component ID2 register
@{*/


#define AXI_AXI_COMP_ID_2_PREAMBLE_SHIFT		0
#define AXI_AXI_COMP_ID_2_PREAMBLE_MASK		0xff
/** @defgroup axi_axi_comp_id_2_preamble PREAMBLE Preamble bits 12 to 19
@{*/
/**@}*/


/**@}*/

/** @defgroup axi_axi_comp_id_3 AXICOMPID3 AXI interconnect - component ID3 register
@{*/


#define AXI_AXI_COMP_ID_3_PREAMBLE_SHIFT		0
#define AXI_AXI_COMP_ID_3_PREAMBLE_MASK		0xff
/** @defgroup axi_axi_comp_id_3_preamble PREAMBLE Preamble bits 20 to 27
@{*/
/**@}*/


/**@}*/

/** @defgroup axi_axi_targ1_fn_mod_iss_bm AXITARG1FNMODISSBM AXI interconnect - TARG x bus matrix issuing functionality register
@{*/

/** AXI_AXI_TARG1_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE Switch matrix write issuing override for target **/
#define AXI_AXI_TARG1_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE		(1 << 1)
/** AXI_AXI_TARG1_FN_MOD_ISS_BM_READ_ISS_OVERRIDE READ_ISS_OVERRIDE **/
#define AXI_AXI_TARG1_FN_MOD_ISS_BM_READ_ISS_OVERRIDE		(1 << 0)

/**@}*/

/** @defgroup axi_axi_targ1_fn_mod2 AXITARG1FNMOD2 AXI interconnect - TARG x bus matrix functionality 2 register
@{*/

/** AXI_AXI_TARG1_FN_MOD2_BYPASS_MERGE Disable packing of beats to match the output data width **/
#define AXI_AXI_TARG1_FN_MOD2_BYPASS_MERGE		(1 << 0)

/**@}*/

/** @defgroup axi_axi_targ1_fn_mod_lb AXITARG1FNMODLB AXI interconnect - TARG x long burst functionality modification
@{*/

/** AXI_AXI_TARG1_FN_MOD_LB_FN_MOD_LB Controls burst breaking of long bursts **/
#define AXI_AXI_TARG1_FN_MOD_LB_FN_MOD_LB		(1 << 0)

/**@}*/

/** @defgroup axi_axi_targ1_fn_mod AXITARG1FNMOD AXI interconnect - TARG x long burst functionality modification
@{*/

/** AXI_AXI_TARG1_FN_MOD_WRITE_ISS_OVERRIDE Override AMIB write issuing capability **/
#define AXI_AXI_TARG1_FN_MOD_WRITE_ISS_OVERRIDE		(1 << 1)
/** AXI_AXI_TARG1_FN_MOD_READ_ISS_OVERRIDE Override AMIB read issuing capability **/
#define AXI_AXI_TARG1_FN_MOD_READ_ISS_OVERRIDE		(1 << 0)

/**@}*/

/** @defgroup axi_axi_targ2_fn_mod_iss_bm AXITARG2FNMODISSBM AXI interconnect - TARG x bus matrix issuing functionality register
@{*/

/** AXI_AXI_TARG2_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE Switch matrix write issuing override for target **/
#define AXI_AXI_TARG2_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE		(1 << 1)
/** AXI_AXI_TARG2_FN_MOD_ISS_BM_READ_ISS_OVERRIDE READ_ISS_OVERRIDE **/
#define AXI_AXI_TARG2_FN_MOD_ISS_BM_READ_ISS_OVERRIDE		(1 << 0)

/**@}*/

/** @defgroup axi_axi_targ2_fn_mod2 AXITARG2FNMOD2 AXI interconnect - TARG x bus matrix functionality 2 register
@{*/

/** AXI_AXI_TARG2_FN_MOD2_BYPASS_MERGE Disable packing of beats to match the output data width **/
#define AXI_AXI_TARG2_FN_MOD2_BYPASS_MERGE		(1 << 0)

/**@}*/

/** @defgroup axi_axi_targ2_fn_mod_lb AXITARG2FNMODLB AXI interconnect - TARG x long burst functionality modification
@{*/

/** AXI_AXI_TARG2_FN_MOD_LB_FN_MOD_LB Controls burst breaking of long bursts **/
#define AXI_AXI_TARG2_FN_MOD_LB_FN_MOD_LB		(1 << 0)

/**@}*/

/** @defgroup axi_axi_targ2_fn_mod AXITARG2FNMOD AXI interconnect - TARG x long burst functionality modification
@{*/

/** AXI_AXI_TARG2_FN_MOD_WRITE_ISS_OVERRIDE Override AMIB write issuing capability **/
#define AXI_AXI_TARG2_FN_MOD_WRITE_ISS_OVERRIDE		(1 << 1)
/** AXI_AXI_TARG2_FN_MOD_READ_ISS_OVERRIDE Override AMIB read issuing capability **/
#define AXI_AXI_TARG2_FN_MOD_READ_ISS_OVERRIDE		(1 << 0)

/**@}*/

/** @defgroup axi_axi_targ3_fn_mod_iss_bm AXITARG3FNMODISSBM AXI interconnect - TARG x bus matrix issuing functionality register
@{*/

/** AXI_AXI_TARG3_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE Switch matrix write issuing override for target **/
#define AXI_AXI_TARG3_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE		(1 << 1)
/** AXI_AXI_TARG3_FN_MOD_ISS_BM_READ_ISS_OVERRIDE READ_ISS_OVERRIDE **/
#define AXI_AXI_TARG3_FN_MOD_ISS_BM_READ_ISS_OVERRIDE		(1 << 0)

/**@}*/

/** @defgroup axi_axi_targ4_fn_mod_iss_bm AXITARG4FNMODISSBM AXI interconnect - TARG x bus matrix issuing functionality register
@{*/

/** AXI_AXI_TARG4_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE Switch matrix write issuing override for target **/
#define AXI_AXI_TARG4_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE		(1 << 1)
/** AXI_AXI_TARG4_FN_MOD_ISS_BM_READ_ISS_OVERRIDE READ_ISS_OVERRIDE **/
#define AXI_AXI_TARG4_FN_MOD_ISS_BM_READ_ISS_OVERRIDE		(1 << 0)

/**@}*/

/** @defgroup axi_axi_targ5_fn_mod_iss_bm AXITARG5FNMODISSBM AXI interconnect - TARG x bus matrix issuing functionality register
@{*/

/** AXI_AXI_TARG5_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE Switch matrix write issuing override for target **/
#define AXI_AXI_TARG5_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE		(1 << 1)
/** AXI_AXI_TARG5_FN_MOD_ISS_BM_READ_ISS_OVERRIDE READ_ISS_OVERRIDE **/
#define AXI_AXI_TARG5_FN_MOD_ISS_BM_READ_ISS_OVERRIDE		(1 << 0)

/**@}*/

/** @defgroup axi_axi_targ6_fn_mod_iss_bm AXITARG6FNMODISSBM AXI interconnect - TARG x bus matrix issuing functionality register
@{*/

/** AXI_AXI_TARG6_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE Switch matrix write issuing override for target **/
#define AXI_AXI_TARG6_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE		(1 << 1)
/** AXI_AXI_TARG6_FN_MOD_ISS_BM_READ_ISS_OVERRIDE READ_ISS_OVERRIDE **/
#define AXI_AXI_TARG6_FN_MOD_ISS_BM_READ_ISS_OVERRIDE		(1 << 0)

/**@}*/

/** @defgroup axi_axi_targ7_fn_mod_iss_bm AXITARG7FNMODISSBM AXI interconnect - TARG x bus matrix issuing functionality register
@{*/

/** AXI_AXI_TARG7_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE Switch matrix write issuing override for target **/
#define AXI_AXI_TARG7_FN_MOD_ISS_BM_WRITE_ISS_OVERRIDE		(1 << 1)
/** AXI_AXI_TARG7_FN_MOD_ISS_BM_READ_ISS_OVERRIDE READ_ISS_OVERRIDE **/
#define AXI_AXI_TARG7_FN_MOD_ISS_BM_READ_ISS_OVERRIDE		(1 << 0)

/**@}*/

/** @defgroup axi_axi_targ7_fn_mod2 AXITARG7FNMOD2 AXI interconnect - TARG x bus matrix functionality 2 register
@{*/

/** AXI_AXI_TARG7_FN_MOD2_BYPASS_MERGE Disable packing of beats to match the output data width **/
#define AXI_AXI_TARG7_FN_MOD2_BYPASS_MERGE		(1 << 0)

/**@}*/

/** @defgroup axi_axi_targ7_fn_mod AXITARG7FNMOD AXI interconnect - TARG x long burst functionality modification
@{*/

/** AXI_AXI_TARG7_FN_MOD_WRITE_ISS_OVERRIDE Override AMIB write issuing capability **/
#define AXI_AXI_TARG7_FN_MOD_WRITE_ISS_OVERRIDE		(1 << 1)
/** AXI_AXI_TARG7_FN_MOD_READ_ISS_OVERRIDE Override AMIB read issuing capability **/
#define AXI_AXI_TARG7_FN_MOD_READ_ISS_OVERRIDE		(1 << 0)

/**@}*/

/** @defgroup axi_axi_ini1_fn_mod2 AXIINI1FNMOD2 AXI interconnect - INI x functionality modification 2 register
@{*/

/** AXI_AXI_INI1_FN_MOD2_BYPASS_MERGE Disables alteration of transactions by the up-sizer unless required by the protocol **/
#define AXI_AXI_INI1_FN_MOD2_BYPASS_MERGE		(1 << 0)

/**@}*/

/** @defgroup axi_axi_ini1_fn_mod_ahb AXIINI1FNMODAHB AXI interconnect - INI x AHB functionality modification register
@{*/

/** AXI_AXI_INI1_FN_MOD_AHB_WR_INC_OVERRIDE Converts all AHB-Lite read transactions to a series of single beat AXI **/
#define AXI_AXI_INI1_FN_MOD_AHB_WR_INC_OVERRIDE		(1 << 1)
/** AXI_AXI_INI1_FN_MOD_AHB_RD_INC_OVERRIDE Converts all AHB-Lite write transactions to a series of single beat AXI **/
#define AXI_AXI_INI1_FN_MOD_AHB_RD_INC_OVERRIDE		(1 << 0)

/**@}*/

/** @defgroup axi_axi_ini1_read_qos AXIINI1READQOS AXI interconnect - INI x read QoS register
@{*/


#define AXI_AXI_INI1_READ_QOS_AR_QOS_SHIFT		0
#define AXI_AXI_INI1_READ_QOS_AR_QOS_MASK		0x0f
/** @defgroup axi_axi_ini1_read_qos_ar_qos ARQOS Read channel QoS setting
@{*/
/**@}*/


/**@}*/

/** @defgroup axi_axi_ini1_write_qos AXIINI1WRITEQOS AXI interconnect - INI x write QoS register
@{*/


#define AXI_AXI_INI1_WRITE_QOS_AW_QOS_SHIFT		0
#define AXI_AXI_INI1_WRITE_QOS_AW_QOS_MASK		0x0f
/** @defgroup axi_axi_ini1_write_qos_aw_qos AWQOS Write channel QoS setting
@{*/
/**@}*/


/**@}*/

/** @defgroup axi_axi_ini1_fn_mod AXIINI1FNMOD AXI interconnect - INI x issuing functionality modification register
@{*/

/** AXI_AXI_INI1_FN_MOD_WRITE_ISS_OVERRIDE Override ASIB write issuing capability **/
#define AXI_AXI_INI1_FN_MOD_WRITE_ISS_OVERRIDE		(1 << 1)
/** AXI_AXI_INI1_FN_MOD_READ_ISS_OVERRIDE Override ASIB read issuing capability **/
#define AXI_AXI_INI1_FN_MOD_READ_ISS_OVERRIDE		(1 << 0)

/**@}*/

/** @defgroup axi_axi_ini2_read_qos AXIINI2READQOS AXI interconnect - INI x read QoS register
@{*/


#define AXI_AXI_INI2_READ_QOS_AR_QOS_SHIFT		0
#define AXI_AXI_INI2_READ_QOS_AR_QOS_MASK		0x0f
/** @defgroup axi_axi_ini2_read_qos_ar_qos ARQOS Read channel QoS setting
@{*/
/**@}*/


/**@}*/

/** @defgroup axi_axi_ini2_write_qos AXIINI2WRITEQOS AXI interconnect - INI x write QoS register
@{*/


#define AXI_AXI_INI2_WRITE_QOS_AW_QOS_SHIFT		0
#define AXI_AXI_INI2_WRITE_QOS_AW_QOS_MASK		0x0f
/** @defgroup axi_axi_ini2_write_qos_aw_qos AWQOS Write channel QoS setting
@{*/
/**@}*/


/**@}*/

/** @defgroup axi_axi_ini2_fn_mod AXIINI2FNMOD AXI interconnect - INI x issuing functionality modification register
@{*/

/** AXI_AXI_INI2_FN_MOD_WRITE_ISS_OVERRIDE Override ASIB write issuing capability **/
#define AXI_AXI_INI2_FN_MOD_WRITE_ISS_OVERRIDE		(1 << 1)
/** AXI_AXI_INI2_FN_MOD_READ_ISS_OVERRIDE Override ASIB read issuing capability **/
#define AXI_AXI_INI2_FN_MOD_READ_ISS_OVERRIDE		(1 << 0)

/**@}*/

/** @defgroup axi_axi_ini3_fn_mod2 AXIINI3FNMOD2 AXI interconnect - INI x functionality modification 2 register
@{*/

/** AXI_AXI_INI3_FN_MOD2_BYPASS_MERGE Disables alteration of transactions by the up-sizer unless required by the protocol **/
#define AXI_AXI_INI3_FN_MOD2_BYPASS_MERGE		(1 << 0)

/**@}*/

/** @defgroup axi_axi_ini3_fn_mod_ahb AXIINI3FNMODAHB AXI interconnect - INI x AHB functionality modification register
@{*/

/** AXI_AXI_INI3_FN_MOD_AHB_WR_INC_OVERRIDE Converts all AHB-Lite read transactions to a series of single beat AXI **/
#define AXI_AXI_INI3_FN_MOD_AHB_WR_INC_OVERRIDE		(1 << 1)
/** AXI_AXI_INI3_FN_MOD_AHB_RD_INC_OVERRIDE Converts all AHB-Lite write transactions to a series of single beat AXI **/
#define AXI_AXI_INI3_FN_MOD_AHB_RD_INC_OVERRIDE		(1 << 0)

/**@}*/

/** @defgroup axi_axi_ini3_read_qos AXIINI3READQOS AXI interconnect - INI x read QoS register
@{*/


#define AXI_AXI_INI3_READ_QOS_AR_QOS_SHIFT		0
#define AXI_AXI_INI3_READ_QOS_AR_QOS_MASK		0x0f
/** @defgroup axi_axi_ini3_read_qos_ar_qos ARQOS Read channel QoS setting
@{*/
/**@}*/


/**@}*/

/** @defgroup axi_axi_ini3_write_qos AXIINI3WRITEQOS AXI interconnect - INI x write QoS register
@{*/


#define AXI_AXI_INI3_WRITE_QOS_AW_QOS_SHIFT		0
#define AXI_AXI_INI3_WRITE_QOS_AW_QOS_MASK		0x0f
/** @defgroup axi_axi_ini3_write_qos_aw_qos AWQOS Write channel QoS setting
@{*/
/**@}*/


/**@}*/

/** @defgroup axi_axi_ini3_fn_mod AXIINI3FNMOD AXI interconnect - INI x issuing functionality modification register
@{*/

/** AXI_AXI_INI3_FN_MOD_WRITE_ISS_OVERRIDE Override ASIB write issuing capability **/
#define AXI_AXI_INI3_FN_MOD_WRITE_ISS_OVERRIDE		(1 << 1)
/** AXI_AXI_INI3_FN_MOD_READ_ISS_OVERRIDE Override ASIB read issuing capability **/
#define AXI_AXI_INI3_FN_MOD_READ_ISS_OVERRIDE		(1 << 0)

/**@}*/

/** @defgroup axi_axi_ini4_read_qos AXIINI4READQOS AXI interconnect - INI x read QoS register
@{*/


#define AXI_AXI_INI4_READ_QOS_AR_QOS_SHIFT		0
#define AXI_AXI_INI4_READ_QOS_AR_QOS_MASK		0x0f
/** @defgroup axi_axi_ini4_read_qos_ar_qos ARQOS Read channel QoS setting
@{*/
/**@}*/


/**@}*/

/** @defgroup axi_axi_ini4_write_qos AXIINI4WRITEQOS AXI interconnect - INI x write QoS register
@{*/


#define AXI_AXI_INI4_WRITE_QOS_AW_QOS_SHIFT		0
#define AXI_AXI_INI4_WRITE_QOS_AW_QOS_MASK		0x0f
/** @defgroup axi_axi_ini4_write_qos_aw_qos AWQOS Write channel QoS setting
@{*/
/**@}*/


/**@}*/

/** @defgroup axi_axi_ini4_fn_mod AXIINI4FNMOD AXI interconnect - INI x issuing functionality modification register
@{*/

/** AXI_AXI_INI4_FN_MOD_WRITE_ISS_OVERRIDE Override ASIB write issuing capability **/
#define AXI_AXI_INI4_FN_MOD_WRITE_ISS_OVERRIDE		(1 << 1)
/** AXI_AXI_INI4_FN_MOD_READ_ISS_OVERRIDE Override ASIB read issuing capability **/
#define AXI_AXI_INI4_FN_MOD_READ_ISS_OVERRIDE		(1 << 0)

/**@}*/

/** @defgroup axi_axi_ini5_read_qos AXIINI5READQOS AXI interconnect - INI x read QoS register
@{*/


#define AXI_AXI_INI5_READ_QOS_AR_QOS_SHIFT		0
#define AXI_AXI_INI5_READ_QOS_AR_QOS_MASK		0x0f
/** @defgroup axi_axi_ini5_read_qos_ar_qos ARQOS Read channel QoS setting
@{*/
/**@}*/


/**@}*/

/** @defgroup axi_axi_ini5_write_qos AXIINI5WRITEQOS AXI interconnect - INI x write QoS register
@{*/


#define AXI_AXI_INI5_WRITE_QOS_AW_QOS_SHIFT		0
#define AXI_AXI_INI5_WRITE_QOS_AW_QOS_MASK		0x0f
/** @defgroup axi_axi_ini5_write_qos_aw_qos AWQOS Write channel QoS setting
@{*/
/**@}*/


/**@}*/

/** @defgroup axi_axi_ini5_fn_mod AXIINI5FNMOD AXI interconnect - INI x issuing functionality modification register
@{*/

/** AXI_AXI_INI5_FN_MOD_WRITE_ISS_OVERRIDE Override ASIB write issuing capability **/
#define AXI_AXI_INI5_FN_MOD_WRITE_ISS_OVERRIDE		(1 << 1)
/** AXI_AXI_INI5_FN_MOD_READ_ISS_OVERRIDE Override ASIB read issuing capability **/
#define AXI_AXI_INI5_FN_MOD_READ_ISS_OVERRIDE		(1 << 0)

/**@}*/

/** @defgroup axi_axi_ini6_read_qos AXIINI6READQOS AXI interconnect - INI x read QoS register
@{*/


#define AXI_AXI_INI6_READ_QOS_AR_QOS_SHIFT		0
#define AXI_AXI_INI6_READ_QOS_AR_QOS_MASK		0x0f
/** @defgroup axi_axi_ini6_read_qos_ar_qos ARQOS Read channel QoS setting
@{*/
/**@}*/


/**@}*/

/** @defgroup axi_axi_ini6_write_qos AXIINI6WRITEQOS AXI interconnect - INI x write QoS register
@{*/


#define AXI_AXI_INI6_WRITE_QOS_AW_QOS_SHIFT		0
#define AXI_AXI_INI6_WRITE_QOS_AW_QOS_MASK		0x0f
/** @defgroup axi_axi_ini6_write_qos_aw_qos AWQOS Write channel QoS setting
@{*/
/**@}*/


/**@}*/

/** @defgroup axi_axi_ini6_fn_mod AXIINI6FNMOD AXI interconnect - INI x issuing functionality modification register
@{*/

/** AXI_AXI_INI6_FN_MOD_WRITE_ISS_OVERRIDE Override ASIB write issuing capability **/
#define AXI_AXI_INI6_FN_MOD_WRITE_ISS_OVERRIDE		(1 << 1)
/** AXI_AXI_INI6_FN_MOD_READ_ISS_OVERRIDE Override ASIB read issuing capability **/
#define AXI_AXI_INI6_FN_MOD_READ_ISS_OVERRIDE		(1 << 0)

/**@}*/
