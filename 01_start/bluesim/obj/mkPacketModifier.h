/*
 * Generated by Bluespec Compiler, version 2014.07.A (build 34078, 2014-07-30)
 * 
 * On Sun Jun  4 09:28:35 CST 2017
 * 
 */

/* Generation options: */
#ifndef __mkPacketModifier_h__
#define __mkPacketModifier_h__

#include "bluesim_types.h"
#include "bs_module.h"
#include "bluesim_primitives.h"
#include "bs_vcd.h"
#include "mkDeparser.h"
#include "mkHeaderSerializer.h"


/* Class declaration for the mkPacketModifier module */
class MOD_mkPacketModifier : public Module {
 
 /* Clock handles */
 private:
  tClock __clk_handle_0;
 
 /* Clock gate handles */
 public:
  tUInt8 *clk_gate[0];
 
 /* Instantiation parameters */
 public:
 
 /* Module state */
 public:
  MOD_ConfigReg<tUInt32> INST_cf_verbosity;
  MOD_mkDeparser INST_deparser;
  MOD_Fifo<tUWide> INST_req_ff;
  MOD_mkHeaderSerializer INST_serializer;
 
 /* Constructor */
 public:
  MOD_mkPacketModifier(tSimStateHdl simHdl, char const *name, Module *parent);
 
 /* Symbol init methods */
 private:
  void init_symbols_0();
 
 /* Reset signal definitions */
 private:
  tUInt8 PORT_RST_N;
 
 /* Port definitions */
 public:
  tUWide PORT_writeServer_enq_v;
  tUWide PORT_prev_enq_v;
  tUWide PORT_writeClient_first;
 
 /* Publicly accessible definitions */
 public:
 
 /* Local definitions */
 private:
  tUInt64 DEF_v__h11500;
  tUInt64 DEF_v__h6079;
  tUInt64 DEF_v__h490;
  tUWide DEF_req_ff_first____d7;
  tUWide DEF_deparser_writeClient_first____d413;
  tUWide DEF_req_ff_first_BITS_1457_TO_1135___d244;
  tUWide DEF_prev_enq_v_BITS_1457_TO_1135___d423;
  tUWide DEF_req_ff_first_BITS_1621_TO_1459___d242;
  tUWide DEF_req_ff_first_BITS_1133_TO_971___d247;
  tUWide DEF_prev_enq_v_BITS_1621_TO_1459___d419;
  tUWide DEF_prev_enq_v_BITS_1133_TO_971___d426;
  tUWide DEF_req_ff_first_BITS_1737_TO_1623___d239;
  tUWide DEF_prev_enq_v_BITS_1737_TO_1623___d416;
  tUWide DEF_req_ff_first_BITS_826_TO_715___d257;
  tUWide DEF_prev_enq_v_BITS_826_TO_715___d447;
  tUWide DEF_req_ff_first_BITS_550_TO_447___d266;
  tUWide DEF_prev_enq_v_BITS_550_TO_447___d461;
  tUWide DEF_req_ff_first_BITS_969_TO_903___d249;
  tUWide DEF_prev_enq_v_BITS_969_TO_903___d430;
  tUWide DEF_IF_prev_enq_v_BIT_1458_22_THEN_prev_enq_v_BITS_ETC___d424;
  tUWide DEF_IF_req_ff_first_BIT_1458_3_THEN_req_ff_first_B_ETC___d245;
  tUWide DEF_IF_prev_enq_v_BIT_1134_25_THEN_prev_enq_v_BITS_ETC___d427;
  tUWide DEF_IF_prev_enq_v_BIT_1622_18_THEN_prev_enq_v_BITS_ETC___d420;
  tUWide DEF_IF_req_ff_first_BIT_1134_2_THEN_req_ff_first_B_ETC___d248;
  tUWide DEF_IF_req_ff_first_BIT_1622_2_THEN_req_ff_first_B_ETC___d243;
  tUWide DEF_IF_prev_enq_v_BIT_1738_15_THEN_prev_enq_v_BITS_ETC___d417;
  tUWide DEF_IF_req_ff_first_BIT_1738_0_THEN_req_ff_first_B_ETC___d240;
  tUWide DEF_IF_prev_enq_v_BIT_827_46_THEN_prev_enq_v_BITS__ETC___d448;
  tUWide DEF_IF_req_ff_first_BIT_827_53_THEN_req_ff_first_B_ETC___d258;
  tUWide DEF_IF_prev_enq_v_BIT_551_60_THEN_prev_enq_v_BITS__ETC___d462;
  tUWide DEF_IF_req_ff_first_BIT_551_70_THEN_req_ff_first_B_ETC___d267;
  tUWide DEF_IF_prev_enq_v_BIT_970_29_THEN_prev_enq_v_BITS__ETC___d431;
  tUWide DEF_IF_req_ff_first_BIT_970_21_THEN_req_ff_first_B_ETC___d250;
  tUWide DEF_prev_enq_v_BITS_1759_TO_1739_14_CONCAT_prev_en_ETC___d543;
  tUWide DEF_prev_enq_v_BIT_1738_15_CONCAT_IF_prev_enq_v_BI_ETC___d434;
  tUWide DEF_prev_enq_v_BIT_902_35_CONCAT_IF_prev_enq_v_BIT_ETC___d542;
  tUWide DEF_req_ff_first_BIT_1738_0_CONCAT_IF_req_ff_first_ETC___d312;
  tUWide DEF_req_ff_first_BIT_1738_0_CONCAT_IF_req_ff_first_ETC___d241;
  tUWide DEF_req_ff_first_BIT_1622_2_CONCAT_IF_req_ff_first_ETC___d252;
  tUWide DEF_req_ff_first_BIT_902_44_CONCAT_IF_req_ff_first_ETC___d277;
  tUWide DEF_req_ff_first_BIT_371_88_CONCAT_IF_req_ff_first_ETC___d311;
  tUWide DEF_prev_enq_v_BIT_893_39_CONCAT_IF_prev_enq_v_BIT_ETC___d474;
  tUWide DEF_prev_enq_v_BIT_361_79_CONCAT_IF_prev_enq_v_BIT_ETC___d541;
  tUWide DEF_prev_enq_v_BIT_1622_18_CONCAT_IF_prev_enq_v_BI_ETC___d421;
  tUWide DEF_prev_enq_v_BIT_1458_22_CONCAT_IF_prev_enq_v_BI_ETC___d433;
  tUWide DEF_req_ff_first_BIT_1458_3_CONCAT_IF_req_ff_first_ETC___d246;
  tUWide DEF_req_ff_first_BIT_1134_2_CONCAT_IF_req_ff_first_ETC___d251;
  tUWide DEF_prev_enq_v_BIT_1134_25_CONCAT_IF_prev_enq_v_BI_ETC___d428;
  tUWide DEF_prev_enq_v_BIT_970_29_CONCAT_IF_prev_enq_v_BIT_ETC___d432;
  tUWide DEF_req_ff_first_BIT_860_50_CONCAT_IF_req_ff_first_ETC___d276;
  tUWide DEF_prev_enq_v_BIT_827_46_CONCAT_IF_prev_enq_v_BIT_ETC___d473;
  tUWide DEF_req_ff_first_BIT_827_53_CONCAT_IF_req_ff_first_ETC___d259;
  tUWide DEF_req_ff_first_BIT_714_59_CONCAT_IF_req_ff_first_ETC___d275;
  tUWide DEF_prev_enq_v_BIT_681_53_CONCAT_IF_prev_enq_v_BIT_ETC___d472;
  tUWide DEF_req_ff_first_BIT_351_94_CONCAT_IF_req_ff_first_ETC___d310;
  tUWide DEF_prev_enq_v_BIT_341_86_CONCAT_IF_prev_enq_v_BIT_ETC___d540;
  tUWide DEF_req_ff_first_BIT_308_00_CONCAT_IF_req_ff_first_ETC___d309;
  tUWide DEF_req_ff_first_BIT_681_62_CONCAT_IF_req_ff_first_ETC___d263;
  tUWide DEF_req_ff_first_BIT_616_66_CONCAT_IF_req_ff_first_ETC___d274;
  tUWide DEF_prev_enq_v_BIT_275_93_CONCAT_IF_prev_enq_v_BIT_ETC___d539;
  tUWide DEF_prev_enq_v_BIT_616_56_CONCAT_IF_prev_enq_v_BIT_ETC___d459;
  tUWide DEF_prev_enq_v_BIT_551_60_CONCAT_IF_prev_enq_v_BIT_ETC___d471;
  tUWide DEF_req_ff_first_BIT_273_06_CONCAT_IF_req_ff_first_ETC___d308;
  tUWide DEF_prev_enq_v_BIT_256_00_CONCAT_IF_prev_enq_v_BIT_ETC___d538;
  tUWide DEF_req_ff_first_BIT_223_12_CONCAT_IF_req_ff_first_ETC___d307;
  tUWide DEF_prev_enq_v_BIT_190_07_CONCAT_IF_prev_enq_v_BIT_ETC___d537;
  tUWide DEF_req_ff_first_BIT_551_70_CONCAT_IF_req_ff_first_ETC___d268;
  tUWide DEF_req_ff_first_BIT_446_78_CONCAT_IF_req_ff_first_ETC___d273;
  tUWide DEF_req_ff_first_BIT_170_18_CONCAT_IF_req_ff_first_ETC___d306;
  tUWide DEF_prev_enq_v_BIT_137_14_CONCAT_IF_prev_enq_v_BIT_ETC___d536;
  tUWide DEF_prev_enq_v_BIT_436_67_CONCAT_IF_prev_enq_v_BIT_ETC___d470;
  tUWide DEF_req_ff_first_BIT_117_24_CONCAT_IF_req_ff_first_ETC___d305;
  tUWide DEF_prev_enq_v_BIT_68_21_CONCAT_IF_prev_enq_v_BIT__ETC___d535;
 
 /* Rules */
 public:
  void RL_rl_req();
  void RL_deparse_to_serializer();
 
 /* Methods */
 public:
  void METH_prev_enq(tUWide ARG_prev_enq_v);
  tUInt8 METH_RDY_prev_enq();
  tUInt8 METH_prev_notFull();
  tUInt8 METH_RDY_prev_notFull();
  void METH_writeServer_enq(tUWide ARG_writeServer_enq_v);
  tUInt8 METH_RDY_writeServer_enq();
  tUInt8 METH_writeServer_notFull();
  tUInt8 METH_RDY_writeServer_notFull();
  tUWide METH_writeClient_first();
  tUInt8 METH_RDY_writeClient_first();
  void METH_writeClient_deq();
  tUInt8 METH_RDY_writeClient_deq();
  tUInt8 METH_writeClient_notEmpty();
  tUInt8 METH_RDY_writeClient_notEmpty();
  void METH_set_verbosity(tUInt32 ARG_set_verbosity_verbosity);
  tUInt8 METH_RDY_set_verbosity();
 
 /* Reset routines */
 public:
  void reset_RST_N(tUInt8 ARG_rst_in);
 
 /* Static handles to reset routines */
 public:
 
 /* Pointers to reset fns in parent module for asserting output resets */
 private:
 
 /* Functions for the parent module to register its reset fns */
 public:
 
 /* Functions to set the elaborated clock id */
 public:
  void set_clk_0(char const *s);
 
 /* State dumping routine */
 public:
  void dump_state(unsigned int indent);
 
 /* VCD dumping routines */
 public:
  unsigned int dump_VCD_defs(unsigned int levels);
  void dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mkPacketModifier &backing);
  void vcd_defs(tVCDDumpType dt, MOD_mkPacketModifier &backing);
  void vcd_prims(tVCDDumpType dt, MOD_mkPacketModifier &backing);
  void vcd_submodules(tVCDDumpType dt, unsigned int levels, MOD_mkPacketModifier &backing);
};

#endif /* ifndef __mkPacketModifier_h__ */
