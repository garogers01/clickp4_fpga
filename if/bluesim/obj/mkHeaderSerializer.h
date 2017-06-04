/*
 * Generated by Bluespec Compiler, version 2014.07.A (build 34078, 2014-07-30)
 * 
 * On Sun Jun  4 11:11:32 CST 2017
 * 
 */

/* Generation options: */
#ifndef __mkHeaderSerializer_h__
#define __mkHeaderSerializer_h__

#include "bluesim_types.h"
#include "bs_module.h"
#include "bluesim_primitives.h"
#include "bs_vcd.h"


/* Class declaration for the mkHeaderSerializer module */
class MOD_mkHeaderSerializer : public Module {
 
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
  MOD_Fifo<tUInt8> INST_buff_frame_ff;
  MOD_ConfigReg<tUInt32> INST_cf_verbosity;
  MOD_Reg<tUWide> INST_data_buffered;
  MOD_Fifo<tUWide> INST_data_in_ff;
  MOD_Fifo<tUWide> INST_data_out_ff;
  MOD_Reg<tUInt32> INST_mask_buffered;
  MOD_Fifo<tUInt32> INST_meta_in_ff;
  MOD_Reg<tUInt8> INST_n_bits_buffered;
  MOD_Reg<tUInt8> INST_n_bytes_buffered;
  MOD_Fifo<tUInt8> INST_send_frame_ff;
  MOD_Fifo<tUInt8> INST_send_last1_ff;
  MOD_Fifo<tUInt8> INST_send_last2_ff;
  MOD_Reg<tUInt8> INST_sop_buffered;
  MOD_Fifo<tUWide> INST_stage0_ff;
  MOD_Fifo<tUWide> INST_stage2_ff;
 
 /* Constructor */
 public:
  MOD_mkHeaderSerializer(tSimStateHdl simHdl, char const *name, Module *parent);
 
 /* Symbol init methods */
 private:
  void init_symbols_0();
 
 /* Reset signal definitions */
 private:
  tUInt8 PORT_RST_N;
 
 /* Port definitions */
 public:
  tUWide PORT_writeServer_enq_v;
  tUWide PORT_writeClient_first;
 
 /* Publicly accessible definitions */
 public:
  tUInt8 DEF_data_out_ff_i_notEmpty____d171;
  tUInt8 DEF_WILL_FIRE_RL_rl_eop_partial_frame;
  tUInt8 DEF_WILL_FIRE_RL_rl_eop_full_frame;
  tUInt8 DEF_WILL_FIRE_RL_rl_buffer_partial_frame;
  tUInt8 DEF_WILL_FIRE_RL_rl_send_full_frame;
  tUInt8 DEF_stage0_ff_first__2_BITS_203_TO_199___d84;
  tUWide DEF_stage0_ff_first____d82;
  tUInt8 DEF_stage0_ff_first__2_BIT_0___d83;
  tUInt8 DEF_stage0_ff_first__2_BITS_203_TO_199_4_ULT_16___d85;
 
 /* Local definitions */
 private:
  tUInt64 DEF_v__h5003;
  tUInt64 DEF_v__h4700;
  tUInt64 DEF_v__h4474;
  tUInt64 DEF_v__h4131;
  tUInt64 DEF_v__h4010;
  tUInt64 DEF_v__h3546;
  tUInt64 DEF_v__h3407;
  tUInt64 DEF_v__h3357;
  tUInt64 DEF_v__h2582;
  tUInt64 DEF_v__h2466;
  tUInt64 DEF_v__h2283;
  tUInt64 DEF_v__h2085;
  tUInt8 DEF_unsigned_stage2_ff_first__22_BITS_185_TO_178_23___d124;
  tUInt8 DEF_stage2_ff_first__22_BITS_185_TO_178___d123;
  tUInt8 DEF_unsigned_stage2_ff_first__22_BITS_190_TO_186_25___d126;
  tUInt8 DEF_stage2_ff_first__22_BITS_190_TO_186___d125;
  tUWide DEF_stage2_ff_first____d122;
  tUWide DEF_data_in_ff_first____d4;
  tUWide DEF_y__h4874;
  tUInt32 DEF_b__h3346;
  tUInt32 DEF_y__h4926;
  tUInt32 DEF_egress_port__h4816;
  tUInt8 DEF_sop_buffered__h3806;
  tUWide DEF_stage0_ff_first__2_BITS_190_TO_0___d95;
  tUWide DEF_stage0_ff_first__2_BITS_145_TO_18___d108;
  tUWide DEF_stage2_ff_first__22_BITS_145_TO_18___d127;
  tUInt32 DEF_stage2_ff_first__22_BITS_17_TO_2___d131;
  tUWide DEF_n_bytes_buffered_PLUS_0_CONCAT_data_in_ff_firs_ETC___d79;
  tUWide DEF_n_bytes_buffered_CONCAT_n_bits_buffered_0_CONC_ETC___d78;
  tUWide DEF__0_CONCAT_meta_in_ff_first__34_35_CONCAT_stage2_ETC___d160;
  tUInt32 DEF_eth_user__h4851;
  tUWide DEF_eth_data__h3911;
  tUWide DEF__0_CONCAT_meta_in_ff_first__34_35_CONCAT_stage2_ETC___d140;
  tUWide DEF__0_CONCAT_meta_in_ff_first__34_35_CONCAT_stage2_ETC___d169;
  tUInt32 DEF_mask__h4107;
  tUInt8 DEF_NOT_cf_verbosity_read__02_SLE_3_03___d104;
  tUWide DEF_x__h3616;
  tUWide DEF_x__h3937;
  tUInt32 DEF_x__h4279;
 
 /* Rules */
 public:
  void RL_rl_serialize_stage0();
  void RL_rl_serialize_stage1();
  void RL_rl_send_full_frame();
  void RL_rl_buffer_partial_frame();
  void RL_rl_eop_full_frame();
  void RL_rl_eop_partial_frame();
  void __me_check_2();
  void __me_check_3();
  void __me_check_4();
 
 /* Methods */
 public:
  void METH_metadata_enq(tUInt32 ARG_metadata_enq_v);
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
  void dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mkHeaderSerializer &backing);
  void vcd_defs(tVCDDumpType dt, MOD_mkHeaderSerializer &backing);
  void vcd_prims(tVCDDumpType dt, MOD_mkHeaderSerializer &backing);
};

#endif /* ifndef __mkHeaderSerializer_h__ */
