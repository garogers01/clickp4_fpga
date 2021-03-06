/*
 * Generated by Bluespec Compiler, version 2014.07.A (build 34078, 2014-07-30)
 * 
 * On Sun Jun  4 09:28:35 CST 2017
 * 
 */

/* Generation options: */
#ifndef __mkDeparser_h__
#define __mkDeparser_h__

#include "bluesim_types.h"
#include "bs_module.h"
#include "bluesim_primitives.h"
#include "bs_vcd.h"


/* Class declaration for the mkDeparser module */
class MOD_mkDeparser : public Module {
 
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
  MOD_Reg<tUInt8> INST_data_ff_cntr_r;
  MOD_Wire<tUInt8> INST_data_ff_dequeueing;
  MOD_Wire<tUInt8> INST_data_ff_enqueueing;
  MOD_Reg<tUWide> INST_data_ff_q_0;
  MOD_Reg<tUWide> INST_data_ff_q_1;
  MOD_Wire<tUWide> INST_data_ff_x_wire;
  MOD_Fifo<tUWide> INST_data_in_ff;
  MOD_Fifo<tUWide> INST_data_out_ff;
  MOD_Reg<tUInt8> INST_deparse_done;
  MOD_CReg<tUInt8> INST_deparse_state_ff_rv;
  MOD_Reg<tUInt8> INST_deparsing;
  MOD_Reg<tUWide> INST_eoh_mask;
  MOD_Reg<tUInt8> INST_header_done;
  MOD_Fifo<tUWide> INST_meta_in_ff;
  MOD_Reg<tUInt32> INST_rg_beat;
  MOD_Reg<tUInt32> INST_rg_buffered;
  MOD_Reg<tUInt8> INST_rg_eop;
  MOD_Reg<tUWide> INST_rg_metadata;
  MOD_Reg<tUInt32> INST_rg_processed;
  MOD_Reg<tUInt32> INST_rg_shift_amt;
  MOD_Reg<tUInt8> INST_rg_sop;
  MOD_Reg<tUWide> INST_rg_stage3;
  MOD_Reg<tUWide> INST_rg_tmp;
  MOD_Fifo<tUWide> INST_stage1_ff;
  MOD_Fifo<tUWide> INST_stage2_ff;
  MOD_Fifo<tUWide> INST_stage3_ff;
 
 /* Constructor */
 public:
  MOD_mkDeparser(tSimStateHdl simHdl, char const *name, Module *parent);
 
 /* Symbol init methods */
 private:
  void init_symbols_0();
 
 /* Reset signal definitions */
 private:
  tUInt8 PORT_RST_N;
 
 /* Port definitions */
 public:
  tUWide PORT_writeServer_enq_v;
  tUWide PORT_metadata_enq_v;
  tUWide PORT_writeClient_first;
 
 /* Publicly accessible definitions */
 public:
  tUInt8 DEF_data_out_ff_i_notEmpty____d638;
  tUWide DEF_data_in_ff_first____d36;
  tUInt32 DEF_x__h10552;
  tUInt32 DEF_x__h10890;
  tUInt8 DEF_data_in_ff_first__6_BIT_1___d37;
 
 /* Local definitions */
 private:
  tUInt8 DEF_x__h777;
  tUWide DEF__dfoo4;
  tUWide DEF_data_ff_q_1_8_BIT_128_9_CONCAT_IF_data_ff_q_1__ETC___d22;
  tUWide DEF_data_ff_x_wire_wget__0_BIT_128_1_CONCAT_IF_dat_ETC___d14;
  tUWide DEF__dfoo2;
  tUWide DEF__0_CONCAT_DONTCARE___d23;
  tUInt64 DEF_v__h11061;
  tUInt64 DEF_v__h11000;
  tUInt64 DEF_v__h10744;
  tUInt64 DEF_v__h10508;
  tUInt64 DEF_v__h10449;
  tUInt64 DEF_v__h10208;
  tUInt64 DEF_v___1__h10176;
  tUInt64 DEF_v___1__h9975;
  tUInt64 DEF_v__h9797;
  tUInt64 DEF_v__h9586;
  tUInt64 DEF_v__h7665;
  tUWide DEF_stage2_ff_first____d451;
  tUWide DEF_meta_in_ff_first____d40;
  tUWide DEF_stage3_ff_first____d459;
  tUWide DEF_x__h10784;
  tUWide DEF_x__h11098;
  tUWide DEF_data_ff_x_wire_wget____d10;
  tUWide DEF_data_ff_q_1___d18;
  tUInt32 DEF_b__h7654;
  tUInt32 DEF__read__h3140;
  tUInt8 DEF_rg_sop__h10359;
  tUWide DEF_meta_in_ff_first__0_BITS_1457_TO_1135___d49;
  tUWide DEF_metadata_enq_v_BITS_1457_TO_1135___d519;
  tUWide DEF_stage2_ff_first__51_BITS_2006_TO_1739___d454;
  tUWide DEF_stage2_ff_first__51_BITS_2004_TO_1749___d452;
  tUWide DEF_stage3_ff_first__59_BITS_265_TO_10___d460;
  tUWide DEF_meta_in_ff_first__0_BITS_1621_TO_1459___d46;
  tUWide DEF_meta_in_ff_first__0_BITS_1133_TO_971___d53;
  tUWide DEF_metadata_enq_v_BITS_1621_TO_1459___d516;
  tUWide DEF_metadata_enq_v_BITS_1133_TO_971___d523;
  tUWide DEF_data__h10973;
  tUWide DEF_rg_stage3_BITS_255_TO_128___h10270;
  tUWide DEF_x_data__h10780;
  tUWide DEF_data_in_ff_first__6_BITS_145_TO_18___d441;
  tUWide DEF_data_ff_x_wire_wget__0_BITS_127_TO_0___d12;
  tUWide DEF_data_ff_q_1_8_BITS_127_TO_0___d20;
  tUWide DEF_meta_in_ff_first__0_BITS_1737_TO_1623___d42;
  tUWide DEF_metadata_enq_v_BITS_1737_TO_1623___d512;
  tUWide DEF_meta_in_ff_first__0_BITS_826_TO_715___d71;
  tUWide DEF_metadata_enq_v_BITS_826_TO_715___d541;
  tUWide DEF_meta_in_ff_first__0_BITS_550_TO_447___d85;
  tUWide DEF_metadata_enq_v_BITS_550_TO_447___d555;
  tUWide DEF_meta_in_ff_first__0_BITS_969_TO_903___d56;
  tUWide DEF_metadata_enq_v_BITS_969_TO_903___d526;
  tUInt8 DEF_data_ff_x_wire_wget__0_BIT_128___d11;
  tUInt8 DEF_data_ff_q_1_8_BIT_128___d19;
  tUWide DEF_IF_metadata_enq_v_BIT_1458_18_THEN_metadata_en_ETC___d520;
  tUWide DEF_IF_meta_in_ff_first__0_BIT_1458_8_THEN_meta_in_ETC___d50;
  tUWide DEF_IF_metadata_enq_v_BIT_1134_22_THEN_metadata_en_ETC___d524;
  tUWide DEF_IF_metadata_enq_v_BIT_1622_15_THEN_metadata_en_ETC___d517;
  tUWide DEF_IF_meta_in_ff_first__0_BIT_1622_5_THEN_meta_in_ETC___d47;
  tUWide DEF_IF_meta_in_ff_first__0_BIT_1134_2_THEN_meta_in_ETC___d54;
  tUWide DEF_IF_data_ff_x_wire_wget__0_BIT_128_1_THEN_data__ETC___d13;
  tUWide DEF_IF_data_ff_q_1_8_BIT_128_9_THEN_data_ff_q_1_8__ETC___d21;
  tUWide DEF_IF_metadata_enq_v_BIT_1738_11_THEN_metadata_en_ETC___d513;
  tUWide DEF_IF_meta_in_ff_first__0_BIT_1738_1_THEN_meta_in_ETC___d43;
  tUWide DEF_IF_metadata_enq_v_BIT_827_40_THEN_metadata_enq_ETC___d542;
  tUWide DEF_IF_meta_in_ff_first__0_BIT_827_0_THEN_meta_in__ETC___d72;
  tUWide DEF_IF_metadata_enq_v_BIT_551_54_THEN_metadata_enq_ETC___d556;
  tUWide DEF_IF_meta_in_ff_first__0_BIT_551_4_THEN_meta_in__ETC___d86;
  tUWide DEF_IF_metadata_enq_v_BIT_970_25_THEN_metadata_enq_ETC___d527;
  tUWide DEF_IF_meta_in_ff_first__0_BIT_970_5_THEN_meta_in__ETC___d57;
  tUInt8 DEF_data_ff_cntr_r_MINUS_1___d24;
  tUInt8 DEF_data_ff_cntr_r_EQ_1___d15;
  tUWide DEF_meta_in_ff_first__0_BIT_1738_1_CONCAT_IF_meta__ETC___d167;
  tUWide DEF_meta_in_ff_first__0_BIT_1738_1_CONCAT_IF_meta__ETC___d44;
  tUWide DEF_meta_in_ff_first__0_BIT_1622_5_CONCAT_IF_meta__ETC___d59;
  tUWide DEF_meta_in_ff_first__0_BIT_902_0_CONCAT_IF_meta_i_ETC___d98;
  tUWide DEF_meta_in_ff_first__0_BIT_371_9_CONCAT_IF_meta_i_ETC___d166;
  tUWide DEF_metadata_enq_v_BIT_1738_11_CONCAT_IF_metadata__ETC___d637;
  tUWide DEF_metadata_enq_v_BIT_1738_11_CONCAT_IF_metadata__ETC___d514;
  tUWide DEF_metadata_enq_v_BIT_1622_15_CONCAT_IF_metadata__ETC___d529;
  tUWide DEF_metadata_enq_v_BIT_902_30_CONCAT_IF_metadata_e_ETC___d568;
  tUWide DEF_metadata_enq_v_BIT_371_69_CONCAT_IF_metadata_e_ETC___d636;
  tUWide DEF_metadata_enq_v_BIT_1458_18_CONCAT_IF_metadata__ETC___d521;
  tUWide DEF_metadata_enq_v_BIT_1134_22_CONCAT_IF_metadata__ETC___d528;
  tUWide DEF_meta_in_ff_first__0_BIT_1458_8_CONCAT_IF_meta__ETC___d51;
  tUWide DEF_meta_in_ff_first__0_BIT_1134_2_CONCAT_IF_meta__ETC___d58;
  tUWide DEF_metadata_enq_v_BIT_860_37_CONCAT_IF_metadata_e_ETC___d567;
  tUWide DEF_meta_in_ff_first__0_BIT_860_7_CONCAT_IF_meta_i_ETC___d97;
  tUWide DEF_metadata_enq_v_BIT_827_40_CONCAT_IF_metadata_e_ETC___d543;
  tUWide DEF_metadata_enq_v_BIT_714_44_CONCAT_IF_metadata_e_ETC___d566;
  tUWide DEF_meta_in_ff_first__0_BIT_827_0_CONCAT_IF_meta_i_ETC___d73;
  tUWide DEF_meta_in_ff_first__0_BIT_714_4_CONCAT_IF_meta_i_ETC___d96;
  tUWide DEF_metadata_enq_v_BIT_351_76_CONCAT_IF_metadata_e_ETC___d635;
  tUWide DEF_meta_in_ff_first__0_BIT_351_06_CONCAT_IF_meta__ETC___d165;
  tUWide DEF_metadata_enq_v_BIT_308_83_CONCAT_IF_metadata_e_ETC___d634;
  tUWide DEF_meta_in_ff_first__0_BIT_308_13_CONCAT_IF_meta__ETC___d164;
  tUWide DEF_metadata_enq_v_BIT_681_47_CONCAT_IF_metadata_e_ETC___d550;
  tUWide DEF_metadata_enq_v_BIT_616_51_CONCAT_IF_metadata_e_ETC___d565;
  tUWide DEF_meta_in_ff_first__0_BIT_681_7_CONCAT_IF_meta_i_ETC___d80;
  tUWide DEF_meta_in_ff_first__0_BIT_616_1_CONCAT_IF_meta_i_ETC___d95;
  tUWide DEF_metadata_enq_v_BIT_273_90_CONCAT_IF_metadata_e_ETC___d633;
  tUWide DEF_meta_in_ff_first__0_BIT_273_20_CONCAT_IF_meta__ETC___d163;
  tUWide DEF_metadata_enq_v_BIT_223_97_CONCAT_IF_metadata_e_ETC___d632;
  tUWide DEF_meta_in_ff_first__0_BIT_223_27_CONCAT_IF_meta__ETC___d162;
  tUWide DEF_x__h10249;
  tUWide DEF_metadata_enq_v_BIT_551_54_CONCAT_IF_metadata_e_ETC___d557;
  tUWide DEF_metadata_enq_v_BIT_446_58_CONCAT_IF_metadata_e_ETC___d564;
  tUWide DEF_meta_in_ff_first__0_BIT_551_4_CONCAT_IF_meta_i_ETC___d87;
  tUWide DEF_meta_in_ff_first__0_BIT_446_8_CONCAT_IF_meta_i_ETC___d94;
  tUWide DEF_metadata_enq_v_BIT_170_04_CONCAT_IF_metadata_e_ETC___d631;
  tUWide DEF_meta_in_ff_first__0_BIT_170_34_CONCAT_IF_meta__ETC___d161;
  tUWide DEF__0_CONCAT_rg_tmp_03_BITS_127_TO_0_05_CONCAT_INV_ETC___d510;
  tUWide DEF__0_CONCAT_rg_stage3_71_BITS_127_TO_0_79_CONCAT__ETC___d483;
  tUWide DEF__0_CONCAT_rg_stage3_71_BITS_127_TO_0_79_CONCAT__ETC___d492;
  tUWide DEF_metadata_enq_v_BIT_117_11_CONCAT_IF_metadata_e_ETC___d630;
  tUWide DEF_meta_in_ff_first__0_BIT_117_41_CONCAT_IF_meta__ETC___d160;
  tUInt8 DEF_rg_sop_77_CONCAT_0___d481;
  tUInt8 DEF_NOT_cf_verbosity_read__68_SLE_4_69___d170;
 
 /* Rules */
 public:
  void RL_data_ff_incCtr();
  void RL_data_ff_decCtr();
  void RL_data_ff_both();
  void RL_rl_deparse_start();
  void RL_rl_deparse_payload();
  void RL_rl_stage2_apply_metadata();
  void RL_rl_stage3_begin();
  void RL_rl_stage3_cont();
  void RL_rl_stage3_end();
  void RL_rl_header_completion();
 
 /* Methods */
 public:
  tUInt64 METH_read_perf_info();
  tUInt8 METH_RDY_read_perf_info();
  void METH_metadata_enq(tUWide ARG_metadata_enq_v);
  tUInt8 METH_RDY_metadata_enq();
  tUInt8 METH_metadata_notFull();
  tUInt8 METH_RDY_metadata_notFull();
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
  void dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mkDeparser &backing);
  void vcd_defs(tVCDDumpType dt, MOD_mkDeparser &backing);
  void vcd_prims(tVCDDumpType dt, MOD_mkDeparser &backing);
};

#endif /* ifndef __mkDeparser_h__ */
