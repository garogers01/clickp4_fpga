/*
 * Generated by Bluespec Compiler, version 2014.07.A (build 34078, 2014-07-30)
 * 
 * On Sun Jun  4 09:28:35 CST 2017
 * 
 */

/* Generation options: */
#ifndef __mkMetaGenChannel_h__
#define __mkMetaGenChannel_h__

#include "bluesim_types.h"
#include "bs_module.h"
#include "bluesim_primitives.h"
#include "bs_vcd.h"
#include "mkParser.h"
#include "mkPacketBuffer_16.h"


/* Class declaration for the mkMetaGenChannel module */
class MOD_mkMetaGenChannel : public Module {
 
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
  MOD_Reg<tUInt32> INST_freq_cnt;
  MOD_ConfigReg<tUInt32> INST_host_cf_verbosity;
  MOD_Fifo<tUWide> INST_host_outReqFifo;
  MOD_mkParser INST_host_parser;
  MOD_mkPacketBuffer_16 INST_host_pktBuff;
  MOD_Fifo<tUInt32> INST_host_pktLenFifo;
  MOD_Fifo<tUWide> INST_host_readDataFifo;
  MOD_Fifo<tUInt32> INST_host_readLenFifo;
  MOD_Fifo<tUInt32> INST_host_readReqFifo;
  MOD_Reg<tUInt8> INST_host_readStarted;
  MOD_Fifo<tUInt32> INST_host_verbose_ff;
  MOD_Fifo<tUWide> INST_host_writeDataFifo;
  MOD_Fifo<tUWide> INST_meta_in_ff;
  MOD_Fifo<tUWide> INST_meta_out_ff;
  MOD_Fifo<tUInt8> INST_pktgen_running;
  MOD_Reg<tUInt32> INST_rg_gap;
  MOD_Reg<tUInt32> INST_rg_iter;
  MOD_Wire<tUInt8> INST_w_send_meta;
 
 /* Constructor */
 public:
  MOD_mkMetaGenChannel(tSimStateHdl simHdl, char const *name, Module *parent);
 
 /* Symbol init methods */
 private:
  void init_symbols_0();
 
 /* Reset signal definitions */
 private:
  tUInt8 PORT_RST_N;
 
 /* Port definitions */
 public:
  tUWide PORT_writeData_enq_v;
  tUWide PORT_next_first;
 
 /* Publicly accessible definitions */
 public:
  tUInt8 DEF_meta_out_ff_i_notEmpty____d849;
  tUInt8 DEF_pktgen_running_notEmpty____d575;
 
 /* Local definitions */
 private:
  tUInt64 DEF_v__h18580;
  tUInt64 DEF_v__h18450;
  tUInt64 DEF_v__h14827;
  tUInt64 DEF_v__h5253;
  tUInt64 DEF_v__h1685;
  tUInt64 DEF_v__h1397;
  tUWide DEF_host_parser_meta_get___d45;
  tUWide DEF_host_pktBuff_readServer_readData_get___d8;
  tUWide DEF_host_outReqFifo_first____d443;
  tUWide DEF_meta_out_ff_first____d719;
  tUWide DEF_meta_in_ff_first____d590;
  tUWide DEF_host_readDataFifo_first____d32;
  tUInt32 DEF_b__h1386;
  tUWide DEF_meta_out_ff_first__19_BITS_1457_TO_1135___d729;
  tUWide DEF_meta_in_ff_first__90_BITS_1457_TO_1135___d600;
  tUWide DEF_host_outReqFifo_first__43_BITS_1457_TO_1135___d453;
  tUWide DEF_host_parser_meta_get_5_BITS_1457_TO_1135___d54;
  tUWide DEF_meta_out_ff_first__19_BITS_1621_TO_1459___d725;
  tUWide DEF_meta_out_ff_first__19_BITS_1133_TO_971___d732;
  tUWide DEF_meta_in_ff_first__90_BITS_1621_TO_1459___d596;
  tUWide DEF_meta_in_ff_first__90_BITS_1133_TO_971___d603;
  tUWide DEF_host_outReqFifo_first__43_BITS_1621_TO_1459___d449;
  tUWide DEF_host_outReqFifo_first__43_BITS_1133_TO_971___d456;
  tUWide DEF_host_parser_meta_get_5_BITS_1621_TO_1459___d50;
  tUWide DEF_host_parser_meta_get_5_BITS_1133_TO_971___d57;
  tUWide DEF_host_readDataFifo_first__2_BITS_145_TO_18___d35;
  tUWide DEF_meta_out_ff_first__19_BITS_1737_TO_1623___d722;
  tUWide DEF_meta_in_ff_first__90_BITS_1737_TO_1623___d593;
  tUWide DEF_host_outReqFifo_first__43_BITS_1737_TO_1623___d446;
  tUWide DEF_host_parser_meta_get_5_BITS_1737_TO_1623___d47;
  tUWide DEF_meta_out_ff_first__19_BITS_826_TO_715___d753;
  tUWide DEF_meta_in_ff_first__90_BITS_826_TO_715___d624;
  tUWide DEF_host_outReqFifo_first__43_BITS_826_TO_715___d477;
  tUWide DEF_host_parser_meta_get_5_BITS_826_TO_715___d78;
  tUWide DEF_meta_out_ff_first__19_BITS_550_TO_447___d767;
  tUWide DEF_meta_in_ff_first__90_BITS_550_TO_447___d638;
  tUWide DEF_host_outReqFifo_first__43_BITS_550_TO_447___d491;
  tUWide DEF_host_parser_meta_get_5_BITS_550_TO_447___d92;
  tUWide DEF_meta_out_ff_first__19_BITS_969_TO_903___d736;
  tUWide DEF_meta_in_ff_first__90_BITS_969_TO_903___d607;
  tUWide DEF_host_outReqFifo_first__43_BITS_969_TO_903___d460;
  tUWide DEF_host_parser_meta_get_5_BITS_969_TO_903___d61;
  tUWide DEF_IF_meta_out_ff_first__19_BIT_1458_28_THEN_meta_ETC___d730;
  tUWide DEF_IF_meta_in_ff_first__90_BIT_1458_99_THEN_meta__ETC___d601;
  tUWide DEF_IF_host_outReqFifo_first__43_BIT_1458_52_THEN__ETC___d454;
  tUWide DEF_IF_host_parser_meta_get_5_BIT_1458_3_THEN_host_ETC___d55;
  tUWide DEF_IF_meta_out_ff_first__19_BIT_1134_31_THEN_meta_ETC___d733;
  tUWide DEF_IF_meta_out_ff_first__19_BIT_1622_24_THEN_meta_ETC___d726;
  tUWide DEF_IF_meta_in_ff_first__90_BIT_1134_02_THEN_meta__ETC___d604;
  tUWide DEF_IF_meta_in_ff_first__90_BIT_1622_95_THEN_meta__ETC___d597;
  tUWide DEF_IF_host_outReqFifo_first__43_BIT_1134_55_THEN__ETC___d457;
  tUWide DEF_IF_host_outReqFifo_first__43_BIT_1622_48_THEN__ETC___d450;
  tUWide DEF_IF_host_parser_meta_get_5_BIT_1622_9_THEN_host_ETC___d51;
  tUWide DEF_IF_host_parser_meta_get_5_BIT_1134_6_THEN_host_ETC___d58;
  tUWide DEF_IF_meta_out_ff_first__19_BIT_1738_21_THEN_meta_ETC___d723;
  tUWide DEF_IF_meta_in_ff_first__90_BIT_1738_92_THEN_meta__ETC___d594;
  tUWide DEF_IF_host_outReqFifo_first__43_BIT_1738_45_THEN__ETC___d447;
  tUWide DEF_IF_host_parser_meta_get_5_BIT_1738_6_THEN_host_ETC___d48;
  tUWide DEF_IF_meta_out_ff_first__19_BIT_827_52_THEN_meta__ETC___d754;
  tUWide DEF_IF_meta_in_ff_first__90_BIT_827_23_THEN_meta_i_ETC___d625;
  tUWide DEF_IF_host_outReqFifo_first__43_BIT_827_76_THEN_h_ETC___d478;
  tUWide DEF_IF_host_parser_meta_get_5_BIT_827_7_THEN_host__ETC___d79;
  tUWide DEF_IF_meta_out_ff_first__19_BIT_551_66_THEN_meta__ETC___d768;
  tUWide DEF_IF_meta_in_ff_first__90_BIT_551_37_THEN_meta_i_ETC___d639;
  tUWide DEF_IF_host_outReqFifo_first__43_BIT_551_90_THEN_h_ETC___d492;
  tUWide DEF_IF_host_parser_meta_get_5_BIT_551_1_THEN_host__ETC___d93;
  tUWide DEF_IF_meta_out_ff_first__19_BIT_970_35_THEN_meta__ETC___d737;
  tUWide DEF_IF_meta_in_ff_first__90_BIT_970_06_THEN_meta_i_ETC___d608;
  tUWide DEF_IF_host_outReqFifo_first__43_BIT_970_59_THEN_h_ETC___d461;
  tUWide DEF_IF_host_parser_meta_get_5_BIT_970_0_THEN_host__ETC___d62;
  tUWide DEF__0_CONCAT_host_pktLenFifo_first__4_CONCAT_host__ETC___d170;
  tUWide DEF_host_parser_meta_get_5_BIT_1738_6_CONCAT_IF_ho_ETC___d65;
  tUWide DEF_host_parser_meta_get_5_BIT_902_6_CONCAT_IF_hos_ETC___d169;
  tUWide DEF_host_outReqFifo_first__43_BITS_1759_TO_1739_44_ETC___d573;
  tUWide DEF_host_outReqFifo_first__43_BIT_1738_45_CONCAT_I_ETC___d464;
  tUWide DEF_host_outReqFifo_first__43_BIT_902_65_CONCAT_IF_ETC___d572;
  tUWide DEF_meta_in_ff_first__90_BITS_1759_TO_1739_91_CONC_ETC___d716;
  tUWide DEF_meta_in_ff_first__90_BIT_1738_92_CONCAT_IF_met_ETC___d611;
  tUWide DEF_meta_in_ff_first__90_BIT_902_12_CONCAT_IF_meta_ETC___d715;
  tUWide DEF_meta_out_ff_first__19_BIT_902_41_CONCAT_IF_met_ETC___d848;
  tUWide DEF_meta_out_ff_first__19_BIT_893_45_CONCAT_IF_met_ETC___d780;
  tUWide DEF_meta_out_ff_first__19_BIT_361_85_CONCAT_IF_met_ETC___d847;
  tUWide DEF_meta_in_ff_first__90_BIT_893_16_CONCAT_IF_meta_ETC___d651;
  tUWide DEF_meta_in_ff_first__90_BIT_361_52_CONCAT_IF_meta_ETC___d714;
  tUWide DEF_host_parser_meta_get_5_BIT_893_0_CONCAT_IF_hos_ETC___d105;
  tUWide DEF_host_parser_meta_get_5_BIT_361_06_CONCAT_IF_ho_ETC___d168;
  tUWide DEF_host_outReqFifo_first__43_BIT_893_69_CONCAT_IF_ETC___d504;
  tUWide DEF_host_outReqFifo_first__43_BIT_361_09_CONCAT_IF_ETC___d571;
  tUWide DEF_meta_out_ff_first__19_BIT_1738_21_CONCAT_IF_me_ETC___d740;
  tUWide DEF_meta_out_ff_first__19_BIT_1622_24_CONCAT_IF_me_ETC___d727;
  tUWide DEF_meta_out_ff_first__19_BIT_1458_28_CONCAT_IF_me_ETC___d739;
  tUWide DEF_meta_in_ff_first__90_BIT_1622_95_CONCAT_IF_met_ETC___d598;
  tUWide DEF_meta_in_ff_first__90_BIT_1458_99_CONCAT_IF_met_ETC___d610;
  tUWide DEF_host_outReqFifo_first__43_BIT_1622_48_CONCAT_I_ETC___d451;
  tUWide DEF_host_outReqFifo_first__43_BIT_1458_52_CONCAT_I_ETC___d463;
  tUWide DEF_host_parser_meta_get_5_BIT_1622_9_CONCAT_IF_ho_ETC___d52;
  tUWide DEF_host_parser_meta_get_5_BIT_1458_3_CONCAT_IF_ho_ETC___d64;
  tUWide DEF_meta_out_ff_first__19_BIT_1134_31_CONCAT_IF_me_ETC___d734;
  tUWide DEF_meta_out_ff_first__19_BIT_970_35_CONCAT_IF_met_ETC___d738;
  tUWide DEF_meta_in_ff_first__90_BIT_1134_02_CONCAT_IF_met_ETC___d605;
  tUWide DEF_meta_in_ff_first__90_BIT_970_06_CONCAT_IF_meta_ETC___d609;
  tUWide DEF_host_outReqFifo_first__43_BIT_1134_55_CONCAT_I_ETC___d458;
  tUWide DEF_host_outReqFifo_first__43_BIT_970_59_CONCAT_IF_ETC___d462;
  tUWide DEF_host_parser_meta_get_5_BIT_1134_6_CONCAT_IF_ho_ETC___d59;
  tUWide DEF_host_parser_meta_get_5_BIT_970_0_CONCAT_IF_hos_ETC___d63;
  tUWide DEF_meta_out_ff_first__19_BIT_827_52_CONCAT_IF_met_ETC___d779;
  tUWide DEF_meta_in_ff_first__90_BIT_827_23_CONCAT_IF_meta_ETC___d650;
  tUWide DEF_host_outReqFifo_first__43_BIT_827_76_CONCAT_IF_ETC___d503;
  tUWide DEF_host_parser_meta_get_5_BIT_827_7_CONCAT_IF_hos_ETC___d104;
  tUWide DEF_meta_out_ff_first__19_BIT_681_59_CONCAT_IF_met_ETC___d778;
  tUWide DEF_meta_in_ff_first__90_BIT_681_30_CONCAT_IF_meta_ETC___d649;
  tUWide DEF_host_outReqFifo_first__43_BIT_681_83_CONCAT_IF_ETC___d502;
  tUWide DEF_host_parser_meta_get_5_BIT_681_4_CONCAT_IF_hos_ETC___d103;
  tUWide DEF_meta_out_ff_first__19_BIT_341_92_CONCAT_IF_met_ETC___d846;
  tUWide DEF_meta_in_ff_first__90_BIT_341_59_CONCAT_IF_meta_ETC___d713;
  tUWide DEF_host_outReqFifo_first__43_BIT_341_16_CONCAT_IF_ETC___d570;
  tUWide DEF_host_parser_meta_get_5_BIT_341_13_CONCAT_IF_ho_ETC___d167;
  tUWide DEF_meta_out_ff_first__19_BIT_275_99_CONCAT_IF_met_ETC___d845;
  tUWide DEF_meta_in_ff_first__90_BIT_275_66_CONCAT_IF_meta_ETC___d712;
  tUWide DEF_host_outReqFifo_first__43_BIT_275_23_CONCAT_IF_ETC___d569;
  tUWide DEF_host_parser_meta_get_5_BIT_275_20_CONCAT_IF_ho_ETC___d166;
  tUWide DEF_meta_out_ff_first__19_BIT_616_62_CONCAT_IF_met_ETC___d765;
  tUWide DEF_meta_out_ff_first__19_BIT_551_66_CONCAT_IF_met_ETC___d777;
  tUWide DEF_meta_in_ff_first__90_BIT_616_33_CONCAT_IF_meta_ETC___d636;
  tUWide DEF_meta_in_ff_first__90_BIT_551_37_CONCAT_IF_meta_ETC___d648;
  tUWide DEF_host_outReqFifo_first__43_BIT_616_86_CONCAT_IF_ETC___d489;
  tUWide DEF_host_outReqFifo_first__43_BIT_551_90_CONCAT_IF_ETC___d501;
  tUWide DEF_host_parser_meta_get_5_BIT_616_7_CONCAT_IF_hos_ETC___d90;
  tUWide DEF_host_parser_meta_get_5_BIT_551_1_CONCAT_IF_hos_ETC___d102;
  tUWide DEF_meta_out_ff_first__19_BIT_256_06_CONCAT_IF_met_ETC___d844;
  tUWide DEF_meta_in_ff_first__90_BIT_256_73_CONCAT_IF_meta_ETC___d711;
  tUWide DEF_host_outReqFifo_first__43_BIT_256_30_CONCAT_IF_ETC___d568;
  tUWide DEF_host_parser_meta_get_5_BIT_256_27_CONCAT_IF_ho_ETC___d165;
  tUWide DEF_meta_out_ff_first__19_BIT_190_13_CONCAT_IF_met_ETC___d843;
  tUWide DEF_meta_in_ff_first__90_BIT_190_80_CONCAT_IF_meta_ETC___d710;
  tUWide DEF_host_outReqFifo_first__43_BIT_190_37_CONCAT_IF_ETC___d567;
  tUWide DEF_host_parser_meta_get_5_BIT_190_34_CONCAT_IF_ho_ETC___d164;
  tUWide DEF_meta_out_ff_first__19_BIT_137_20_CONCAT_IF_met_ETC___d842;
  tUWide DEF_meta_in_ff_first__90_BIT_137_87_CONCAT_IF_meta_ETC___d709;
  tUWide DEF_host_outReqFifo_first__43_BIT_137_44_CONCAT_IF_ETC___d566;
  tUWide DEF_host_parser_meta_get_5_BIT_137_41_CONCAT_IF_ho_ETC___d163;
  tUWide DEF_meta_out_ff_first__19_BIT_436_73_CONCAT_IF_met_ETC___d776;
  tUWide DEF_meta_in_ff_first__90_BIT_436_44_CONCAT_IF_meta_ETC___d647;
  tUWide DEF_host_outReqFifo_first__43_BIT_436_97_CONCAT_IF_ETC___d500;
  tUWide DEF_host_parser_meta_get_5_BIT_436_8_CONCAT_IF_hos_ETC___d101;
  tUWide DEF_meta_out_ff_first__19_BIT_68_27_CONCAT_IF_meta_ETC___d841;
  tUWide DEF_meta_in_ff_first__90_BIT_68_94_CONCAT_IF_meta__ETC___d708;
  tUWide DEF_host_outReqFifo_first__43_BIT_68_51_CONCAT_IF__ETC___d565;
  tUWide DEF_host_parser_meta_get_5_BIT_68_48_CONCAT_IF_hos_ETC___d162;
  tUInt8 DEF_NOT_host_cf_verbosity_read__2_SLE_3_3___d24;
 
 /* Rules */
 public:
  void RL_host_mkConnectionGetPut();
  void RL_host_1_mkConnectionGetPut();
  void RL_host_2_mkConnectionGetPut();
  void RL_host_packetReadStart();
  void RL_host_packetReadInProgress();
  void RL_host_dispatch_packet();
  void RL_host_set_verbose();
  void RL_rl_drain_writeClient();
  void RL_mkConnectionGetPut();
  void RL_rl_freq_ctrl();
  void RL_rl_send_metadata();
 
 /* Methods */
 public:
  void METH_writeData_enq(tUWide ARG_writeData_enq_v);
  tUInt8 METH_RDY_writeData_enq();
  tUInt8 METH_writeData_notFull();
  tUInt8 METH_RDY_writeData_notFull();
  tUWide METH_next_first();
  tUInt8 METH_RDY_next_first();
  void METH_next_deq();
  tUInt8 METH_RDY_next_deq();
  tUInt8 METH_next_notEmpty();
  tUInt8 METH_RDY_next_notEmpty();
  void METH_start(tUInt32 ARG_start_iter, tUInt32 ARG_start_ipg);
  tUInt8 METH_RDY_start();
  void METH_stop();
  tUInt8 METH_RDY_stop();
 
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
  void dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mkMetaGenChannel &backing);
  void vcd_defs(tVCDDumpType dt, MOD_mkMetaGenChannel &backing);
  void vcd_prims(tVCDDumpType dt, MOD_mkMetaGenChannel &backing);
  void vcd_submodules(tVCDDumpType dt, unsigned int levels, MOD_mkMetaGenChannel &backing);
};

#endif /* ifndef __mkMetaGenChannel_h__ */
