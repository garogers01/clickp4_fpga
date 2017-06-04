/*
 * Generated by Bluespec Compiler, version 2014.07.A (build 34078, 2014-07-30)
 * 
 * On Sun Jun  4 11:11:32 CST 2017
 * 
 */

/* Generation options: */
#ifndef __mkStreamGearboxUp_32_64_h__
#define __mkStreamGearboxUp_32_64_h__

#include "bluesim_types.h"
#include "bs_module.h"
#include "bluesim_primitives.h"
#include "bs_vcd.h"


/* Class declaration for the mkStreamGearboxUp_32_64 module */
class MOD_mkStreamGearboxUp_32_64 : public Module {
 
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
  MOD_Reg<tUInt64> INST_data_bytes;
  MOD_Reg<tUInt64> INST_eopCount;
  MOD_Reg<tUInt64> INST_idle_cycles;
  MOD_Reg<tUInt8> INST_inProgress;
  MOD_Fifo<tUWide> INST_in_ff;
  MOD_Reg<tUInt8> INST_oddBeat;
  MOD_Fifo<tUWide> INST_out_ff;
  MOD_Reg<tUInt64> INST_sopCount;
  MOD_Reg<tUWide> INST_v_prev;
 
 /* Constructor */
 public:
  MOD_mkStreamGearboxUp_32_64(tSimStateHdl simHdl, char const *name, Module *parent);
 
 /* Symbol init methods */
 private:
  void init_symbols_0();
 
 /* Reset signal definitions */
 private:
  tUInt8 PORT_RST_N;
 
 /* Port definitions */
 public:
  tUWide PORT_datain_put;
  tUWide PORT_dataout_get;
 
 /* Publicly accessible definitions */
 public:
  tUWide DEF_in_ff_first____d5;
  tUInt8 DEF_oddBeat__h767;
  tUInt8 DEF_in_ff_first_BIT_0___d10;
  tUInt8 DEF_NOT_in_ff_first_BIT_0_0___d11;
  tUInt8 DEF_NOT_oddBeat_5___d124;
 
 /* Local definitions */
 private:
  tUInt8 DEF_x__h954;
  tUInt64 DEF_x__h731;
  tUInt8 DEF_b__h1058;
  tUInt8 DEF_b__h1046;
  tUInt8 DEF_b__h1034;
  tUInt8 DEF_b__h1022;
  tUInt8 DEF_b__h1010;
  tUInt8 DEF_b__h998;
  tUInt8 DEF_b__h986;
  tUInt8 DEF_b__h974;
  tUInt8 DEF_b__h962;
  tUInt8 DEF_b__h950;
  tUInt8 DEF_b__h938;
  tUInt8 DEF_b__h926;
  tUInt8 DEF_b__h914;
  tUInt8 DEF_b__h902;
  tUInt8 DEF_b__h890;
  tUInt8 DEF_b__h878;
  tUInt64 DEF_x__h845;
  tUInt64 DEF_y__h856;
  tUInt8 DEF_x__h859;
  tUInt8 DEF_x__h882;
  tUInt8 DEF_y__h883;
  tUInt8 DEF_x__h894;
  tUInt8 DEF_y__h895;
  tUInt8 DEF_x__h906;
  tUInt8 DEF_y__h907;
  tUInt8 DEF_x__h918;
  tUInt8 DEF_y__h919;
  tUInt8 DEF_x__h930;
  tUInt8 DEF_y__h931;
  tUInt8 DEF_x__h942;
  tUInt8 DEF_y__h943;
  tUInt8 DEF_y__h955;
  tUInt8 DEF_x__h966;
  tUInt8 DEF_y__h967;
  tUInt8 DEF_x__h978;
  tUInt8 DEF_y__h979;
  tUInt8 DEF_x__h990;
  tUInt8 DEF_y__h991;
  tUInt8 DEF_x__h1002;
  tUInt8 DEF_y__h1003;
  tUInt8 DEF_x__h1014;
  tUInt8 DEF_y__h1015;
  tUInt8 DEF_x__h1026;
  tUInt8 DEF_y__h1027;
  tUInt8 DEF_x__h1038;
  tUInt8 DEF_y__h1039;
  tUInt8 DEF_x__h1050;
  tUInt8 DEF_y__h1051;
  tUWide DEF_v_prev___d128;
  tUInt64 DEF_x__h2857;
  tUInt64 DEF_x__h4680;
  tUInt64 DEF_x__h4732;
  tUWide DEF__read_data__h4409;
  tUWide DEF_in_ff_first_BITS_289_TO_34___d117;
  tUInt8 DEF_b__h1250;
  tUInt8 DEF_b__h1238;
  tUInt8 DEF_b__h1226;
  tUInt8 DEF_b__h1214;
  tUInt8 DEF_b__h1202;
  tUInt8 DEF_b__h1190;
  tUInt8 DEF_b__h1178;
  tUInt8 DEF_b__h1166;
  tUInt8 DEF_b__h1154;
  tUInt8 DEF_b__h1142;
  tUInt8 DEF_b__h1130;
  tUInt8 DEF_b__h1118;
  tUInt8 DEF_b__h1106;
  tUInt8 DEF_b__h1094;
  tUInt8 DEF_b__h1082;
  tUInt8 DEF_b__h1070;
  tUInt64 DEF_x__h4670;
  tUInt8 DEF_x__h1062;
  tUInt8 DEF_y__h1063;
  tUInt8 DEF_x__h1074;
  tUInt8 DEF_y__h1075;
  tUInt8 DEF_x__h1086;
  tUInt8 DEF_y__h1087;
  tUInt8 DEF_x__h1098;
  tUInt8 DEF_y__h1099;
  tUInt8 DEF_x__h1110;
  tUInt8 DEF_y__h1111;
  tUInt8 DEF_x__h1122;
  tUInt8 DEF_y__h1123;
  tUInt8 DEF_x__h1134;
  tUInt8 DEF_y__h1135;
  tUInt8 DEF_x__h1146;
  tUInt8 DEF_y__h1147;
  tUInt8 DEF_x__h1158;
  tUInt8 DEF_y__h1159;
  tUInt8 DEF_x__h1170;
  tUInt8 DEF_y__h1171;
  tUInt8 DEF_x__h1182;
  tUInt8 DEF_y__h1183;
  tUInt8 DEF_x__h1194;
  tUInt8 DEF_y__h1195;
  tUInt8 DEF_x__h1206;
  tUInt8 DEF_y__h1207;
  tUInt8 DEF_x__h1218;
  tUInt8 DEF_y__h1219;
  tUInt8 DEF_x__h1230;
  tUInt8 DEF_y__h1231;
  tUInt8 DEF_x__h1242;
  tUInt8 DEF_y__h1243;
  tUWide DEF_in_ff_first_BITS_321_TO_290_16_CONCAT_0_CONCAT_ETC___d121;
  tUWide DEF_x_data__h2272;
  tUWide DEF__0_CONCAT_in_ff_first_BITS_33_TO_0_19___d120;
  tUWide DEF_v_prev_28_BITS_321_TO_290_29_CONCAT_in_ff_firs_ETC___d139;
  tUWide DEF_x_data__h4220;
  tUWide DEF_in_ff_first_BITS_33_TO_2_32_CONCAT_v_prev_28_B_ETC___d138;
  tUWide DEF_dataout_get__avValue1;
 
 /* Rules */
 public:
  void RL_startOfPacket();
  void RL_readPacketOdd();
  void RL_readPacketEven();
  void RL_count_idle_cycles();
 
 /* Methods */
 public:
  void METH_datain_put(tUWide ARG_datain_put);
  tUInt8 METH_RDY_datain_put();
  tUWide METH_dataout_get();
  tUInt8 METH_RDY_dataout_get();
  tUInt64 METH_getEopCount();
  tUInt8 METH_RDY_getEopCount();
  tUInt64 METH_getSopCount();
  tUInt8 METH_RDY_getSopCount();
  tUInt64 METH_getIdleCount();
  tUInt8 METH_RDY_getIdleCount();
  tUInt64 METH_getDataCount();
  tUInt8 METH_RDY_getDataCount();
 
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
  void dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mkStreamGearboxUp_32_64 &backing);
  void vcd_defs(tVCDDumpType dt, MOD_mkStreamGearboxUp_32_64 &backing);
  void vcd_prims(tVCDDumpType dt, MOD_mkStreamGearboxUp_32_64 &backing);
};

#endif /* ifndef __mkStreamGearboxUp_32_64_h__ */
