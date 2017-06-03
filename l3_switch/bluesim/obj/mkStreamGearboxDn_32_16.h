/*
 * Generated by Bluespec Compiler, version 2014.07.A (build 34078, 2014-07-30)
 * 
 * On Sun Jun  4 01:29:13 CST 2017
 * 
 */

/* Generation options: */
#ifndef __mkStreamGearboxDn_32_16_h__
#define __mkStreamGearboxDn_32_16_h__

#include "bluesim_types.h"
#include "bs_module.h"
#include "bluesim_primitives.h"
#include "bs_vcd.h"


/* Class declaration for the mkStreamGearboxDn_32_16 module */
class MOD_mkStreamGearboxDn_32_16 : public Module {
 
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
  MOD_Reg<tUWide> INST_fifoTxData_block0;
  MOD_Reg<tUInt8> INST_fifoTxData_block0_status;
  MOD_Reg<tUWide> INST_fifoTxData_block1;
  MOD_Reg<tUInt8> INST_fifoTxData_block1_status;
  MOD_ResetEither INST_fifoTxData_dCombinedReset;
  MOD_SyncReset0 INST_fifoTxData_dCrossedsReset;
  MOD_Wire<tUInt8> INST_fifoTxData_dInReset;
  MOD_Reg<tUInt8> INST_fifoTxData_dInReset_pre_isInReset;
  MOD_Reg<tUInt8> INST_fifoTxData_elem0_status_0;
  MOD_Reg<tUInt8> INST_fifoTxData_elem0_status_1;
  MOD_Reg<tUInt8> INST_fifoTxData_elem1_status_0;
  MOD_Reg<tUInt8> INST_fifoTxData_elem1_status_1;
  MOD_Reg<tUInt8> INST_fifoTxData_read_block;
  MOD_ResetEither INST_fifoTxData_sCombinedReset;
  MOD_SyncReset0 INST_fifoTxData_sCrosseddReset;
  MOD_Wire<tUInt8> INST_fifoTxData_sInReset;
  MOD_Reg<tUInt8> INST_fifoTxData_sInReset_pre_isInReset;
  MOD_Reg<tUInt8> INST_fifoTxData_write_block;
  MOD_Fifo<tUWide> INST_in_ff;
  MOD_Fifo<tUWide> INST_out_ff;
  MOD_Fifo<tUWide> INST_pipe_ff;
 
 /* Constructor */
 public:
  MOD_mkStreamGearboxDn_32_16(tSimStateHdl simHdl, char const *name, Module *parent);
 
 /* Symbol init methods */
 private:
  void init_symbols_0();
 
 /* Reset signal definitions */
 private:
  tUInt8 PORT_fifoTxData_dCombinedReset$RST_OUT;
  tUInt8 PORT_fifoTxData_sCombinedReset$RST_OUT;
  tUInt8 PORT_fifoTxData_dCrossedsReset$OUT_RST;
  tUInt8 PORT_fifoTxData_sCrosseddReset$OUT_RST;
  tUInt8 PORT_RST_N;
 
 /* Port definitions */
 public:
  tUWide PORT_datain_put;
  tUWide PORT_dataout_get;
 
 /* Publicly accessible definitions */
 public:
  tUInt8 DEF_fifoTxData_dInReset_pre_isInReset__h2164;
  tUInt8 DEF_fifoTxData_sInReset_pre_isInReset__h2061;
  tUInt8 DEF_fifoTxData_elem0_status_1__read__4_EQ_fifoTxDa_ETC___d46;
  tUInt8 DEF_fifoTxData_elem1_status_1__read__3_EQ_fifoTxDa_ETC___d55;
  tUInt8 DEF_fifoTxData_elem1_status_0__read__6_EQ_fifoTxDa_ETC___d57;
  tUInt8 DEF_fifoTxData_write_block__h2920;
  tUWide DEF_pipe_ff_first____d101;
  tUInt8 DEF_fifoTxData_elem1_status_0__read____d56;
  tUInt8 DEF_fifoTxData_block1_status_crossed____d54;
  tUInt8 DEF_fifoTxData_block1_status__read____d14;
  tUInt8 DEF_fifoTxData_elem0_status_0__read____d47;
  tUInt8 DEF_fifoTxData_block0_status_crossed____d45;
  tUInt8 DEF_fifoTxData_block0_status__read____d6;
  tUInt8 DEF_fifoTxData_read_block__h4929;
  tUInt8 DEF_fifoTxData_elem0_status_0__read__7_EQ_fifoTxDa_ETC___d48;
  tUInt8 DEF_pipe_ff_first__01_BITS_17_TO_2_02_EQ_0___d103;
  tUInt8 DEF_NOT_fifoTxData_read_block_2___d43;
  tUInt8 DEF_NOT_fifoTxData_write_block___d4;
 
 /* Local definitions */
 private:
  tUWide DEF_fifoTxData_block1_crossed____d73;
  tUWide DEF_fifoTxData_block0_crossed____d87;
  tUWide DEF_in_ff_first____d28;
  tUWide DEF_fifoTxData_block0_crossed__7_BITS_355_TO_178___d88;
  tUWide DEF_fifoTxData_block0_crossed__7_BITS_177_TO_0___d96;
  tUWide DEF_fifoTxData_block1_crossed__3_BITS_355_TO_178___d74;
  tUWide DEF_fifoTxData_block1_crossed__3_BITS_177_TO_0___d82;
  tUWide DEF_n_data__h6781;
  tUWide DEF_n_data__h6890;
  tUWide DEF_n_data__h3789;
  tUWide DEF_n_data__h4108;
  tUWide DEF_IF_NOT_fifoTxData_elem0_status_1__read__4_EQ_f_ETC___d98;
  tUWide DEF_IF_fifoTxData_elem0_status_0__read__7_EQ_fifoT_ETC___d97;
  tUWide DEF_IF_NOT_fifoTxData_elem1_status_1__read__3_EQ_f_ETC___d84;
  tUWide DEF_IF_fifoTxData_elem1_status_0__read__6_EQ_fifoT_ETC___d83;
  tUWide DEF_DONTCARE_CONCAT_DONTCARE_CONCAT_DONTCARE_CONCA_ETC___d81;
  tUWide DEF_DONTCARE_CONCAT_DONTCARE_CONCAT_DONTCARE_CONCA_ETC___d95;
  tUWide DEF_IF_fifoTxData_read_block_2_THEN_IF_NOT_fifoTxD_ETC___d99;
  tUWide DEF_in_ff_first__8_BITS_321_TO_290_9_CONCAT_in_ff__ETC___d39;
  tUWide DEF_in_ff_first__8_BITS_289_TO_162_0_CONCAT_in_ff__ETC___d33;
  tUWide DEF_in_ff_first__8_BITS_161_TO_34_4_CONCAT_in_ff_f_ETC___d38;
  tUWide DEF_dataout_get__avValue1;
 
 /* Rules */
 public:
  void RL_fifoTxData_sInReset_pre_isResetAssertedUpdate();
  void RL_fifoTxData_dInReset_pre_isResetAssertedUpdate();
  void RL_fifoTxData_launder_sInReset();
  void RL_fifoTxData_launder_dInReset();
  void RL_process_incoming_packet();
  void RL_process_outgoing_packet();
  void RL_send_data();
 
 /* Methods */
 public:
  tUInt64 METH_getEopCount();
  tUInt8 METH_RDY_getEopCount();
  tUInt64 METH_getSopCount();
  tUInt8 METH_RDY_getSopCount();
  tUInt64 METH_getIdleCount();
  tUInt8 METH_RDY_getIdleCount();
  tUInt64 METH_getDataCount();
  tUInt8 METH_RDY_getDataCount();
  void METH_datain_put(tUWide ARG_datain_put);
  tUInt8 METH_RDY_datain_put();
  tUWide METH_dataout_get();
  tUInt8 METH_RDY_dataout_get();
 
 /* Reset routines */
 public:
  void reset_fifoTxData_dCombinedReset$RST_OUT(tUInt8 ARG_rst_in);
  void reset_fifoTxData_sCombinedReset$RST_OUT(tUInt8 ARG_rst_in);
  void reset_fifoTxData_dCrossedsReset$OUT_RST(tUInt8 ARG_rst_in);
  void reset_fifoTxData_sCrosseddReset$OUT_RST(tUInt8 ARG_rst_in);
  void reset_RST_N(tUInt8 ARG_rst_in);
 
 /* Static handles to reset routines */
 public:
  static void static_reset_fifoTxData_dCombinedReset$RST_OUT(void *my_this, tUInt8 ARG_rst_in);
  static void static_reset_fifoTxData_sCombinedReset$RST_OUT(void *my_this, tUInt8 ARG_rst_in);
  static void static_reset_fifoTxData_dCrossedsReset$OUT_RST(void *my_this, tUInt8 ARG_rst_in);
  static void static_reset_fifoTxData_sCrosseddReset$OUT_RST(void *my_this, tUInt8 ARG_rst_in);
 
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
  void dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mkStreamGearboxDn_32_16 &backing);
  void vcd_defs(tVCDDumpType dt, MOD_mkStreamGearboxDn_32_16 &backing);
  void vcd_prims(tVCDDumpType dt, MOD_mkStreamGearboxDn_32_16 &backing);
};

#endif /* ifndef __mkStreamGearboxDn_32_16_h__ */
