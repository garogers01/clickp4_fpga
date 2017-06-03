/*
 * Generated by Bluespec Compiler, version 2014.07.A (build 34078, 2014-07-30)
 * 
 * On Sat Jun  3 21:38:32 CST 2017
 * 
 */

/* Generation options: */
#ifndef __mkParser_h__
#define __mkParser_h__

#include "bluesim_types.h"
#include "bs_module.h"
#include "bluesim_primitives.h"
#include "bs_vcd.h"


/* Class declaration for the mkParser module */
class MOD_mkParser : public Module {
 
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
  MOD_CReg<tUInt8> INST_data_in_tmp;
  MOD_Fifo<tUInt8> INST_delay_ff;
  MOD_Reg<tUInt8> INST_ethernet_out_ff_cntr_r;
  MOD_Wire<tUInt8> INST_ethernet_out_ff_dequeueing;
  MOD_Wire<tUInt8> INST_ethernet_out_ff_enqueueing;
  MOD_Reg<tUWide> INST_ethernet_out_ff_q_0;
  MOD_Reg<tUWide> INST_ethernet_out_ff_q_1;
  MOD_Wire<tUWide> INST_ethernet_out_ff_x_wire;
  MOD_Reg<tUInt8> INST_ipv4_out_ff_cntr_r;
  MOD_Wire<tUInt8> INST_ipv4_out_ff_dequeueing;
  MOD_Wire<tUInt8> INST_ipv4_out_ff_enqueueing;
  MOD_Reg<tUWide> INST_ipv4_out_ff_q_0;
  MOD_Reg<tUWide> INST_ipv4_out_ff_q_1;
  MOD_Wire<tUWide> INST_ipv4_out_ff_x_wire;
  MOD_Reg<tUInt8> INST_ipv6_out_ff_cntr_r;
  MOD_Wire<tUInt8> INST_ipv6_out_ff_dequeueing;
  MOD_Wire<tUInt8> INST_ipv6_out_ff_enqueueing;
  MOD_Reg<tUWide> INST_ipv6_out_ff_q_0;
  MOD_Reg<tUWide> INST_ipv6_out_ff_q_1;
  MOD_Wire<tUWide> INST_ipv6_out_ff_x_wire;
  MOD_Fifo<tUWide> INST_meta_in_ff;
  MOD_CReg<tUInt8> INST_parse_done;
  MOD_CReg<tUInt8> INST_parse_state_ff_rv;
  MOD_CReg<tUInt32> INST_rg_buffered;
  MOD_Reg<tUWide> INST_rg_click_metadata;
  MOD_Reg<tUWide> INST_rg_intrinsic_metadata;
  MOD_CReg<tUInt32> INST_rg_next_header_len;
  MOD_Reg<tUInt32> INST_rg_security_metadata;
  MOD_Reg<tUWide> INST_rg_tmp;
  MOD_Reg<tUInt8> INST_tcp_out_ff_cntr_r;
  MOD_Wire<tUInt8> INST_tcp_out_ff_dequeueing;
  MOD_Wire<tUInt8> INST_tcp_out_ff_enqueueing;
  MOD_Reg<tUWide> INST_tcp_out_ff_q_0;
  MOD_Reg<tUWide> INST_tcp_out_ff_q_1;
  MOD_Wire<tUWide> INST_tcp_out_ff_x_wire;
  MOD_Reg<tUInt8> INST_udp_out_ff_cntr_r;
  MOD_Wire<tUInt8> INST_udp_out_ff_dequeueing;
  MOD_Wire<tUInt8> INST_udp_out_ff_enqueueing;
  MOD_Reg<tUWide> INST_udp_out_ff_q_0;
  MOD_Reg<tUWide> INST_udp_out_ff_q_1;
  MOD_Wire<tUWide> INST_udp_out_ff_x_wire;
  MOD_Wire<tUInt8> INST_w_load_header;
  MOD_Wire<tUInt8> INST_w_parse_done;
  MOD_Wire<tUInt8> INST_w_parse_ethernet_accept;
  MOD_Wire<tUInt8> INST_w_parse_ethernet_parse_ipv4;
  MOD_Wire<tUInt8> INST_w_parse_ethernet_parse_ipv6;
  MOD_Wire<tUInt8> INST_w_parse_header_done;
  MOD_Wire<tUInt8> INST_w_parse_ipv4_accept;
  MOD_Wire<tUInt8> INST_w_parse_ipv4_parse_tcp;
  MOD_Wire<tUInt8> INST_w_parse_ipv4_parse_udp;
  MOD_Wire<tUInt8> INST_w_parse_ipv6_accept;
  MOD_Wire<tUInt8> INST_w_parse_ipv6_parse_udp;
  MOD_Wire<tUInt8> INST_w_parse_tcp_accept;
  MOD_Wire<tUInt8> INST_w_parse_udp_accept;
  MOD_Wire<tUInt8> INST_w_start_parse_ethernet;
 
 /* Constructor */
 public:
  MOD_mkParser(tSimStateHdl simHdl, char const *name, Module *parent);
 
 /* Symbol init methods */
 private:
  void init_symbols_0();
 
 /* Reset signal definitions */
 private:
  tUInt8 PORT_RST_N;
 
 /* Port definitions */
 public:
  tUWide PORT_frameIn_put;
  tUWide PORT_meta_get;
 
 /* Publicly accessible definitions */
 public:
  tUInt8 DEF_data_in_tmp_port0__read____d290;
  tUInt8 DEF_cf_verbosity_read__96_SLE_4___d197;
  tUInt8 DEF_NOT_udp_out_ff_cntr_r_61_EQ_2_82___d183;
  tUInt8 DEF_x__h13671;
  tUInt8 DEF_NOT_tcp_out_ff_cntr_r_31_EQ_2_51___d152;
  tUInt8 DEF_x__h12074;
  tUInt8 DEF_NOT_ipv6_out_ff_cntr_r_00_EQ_2_21___d122;
  tUInt8 DEF_x__h6632;
  tUInt8 DEF_NOT_ipv4_out_ff_cntr_r_9_EQ_2_0___d91;
  tUInt8 DEF_x__h4962;
  tUInt8 DEF_NOT_ethernet_out_ff_cntr_r_8_EQ_2_9___d60;
  tUInt8 DEF_x__h3623;
  tUWide DEF_data_in_ff_first____d205;
  tUInt32 DEF_b__h14900;
  tUInt32 DEF_x_port1__read__h14811;
  tUInt32 DEF_x_port1__read__h14827;
  tUInt8 DEF_parse_state_ff_rv_port0__read____d288;
  tUInt8 DEF_parse_state_ff_rv_port0__read__88_BITS_2_TO_0___d297;
 
 /* Local definitions */
 private:
  tUWide DEF__dfoo4;
  tUWide DEF_data_ff_q_1_8_BIT_128_9_CONCAT_IF_data_ff_q_1__ETC___d22;
  tUWide DEF_data_ff_x_wire_wget__0_BIT_128_1_CONCAT_IF_dat_ETC___d14;
  tUWide DEF__dfoo2;
  tUWide DEF__0_CONCAT_DONTCARE___d23;
  tUWide DEF_data_ff_x_wire_wget____d10;
  tUWide DEF_data_ff_q_1___d18;
  tUWide DEF_data_ff_x_wire_wget__0_BITS_127_TO_0___d12;
  tUWide DEF_data_ff_q_1_8_BITS_127_TO_0___d20;
  tUInt8 DEF_data_ff_x_wire_wget__0_BIT_128___d11;
  tUInt8 DEF_data_ff_q_1_8_BIT_128___d19;
  tUWide DEF_IF_data_ff_x_wire_wget__0_BIT_128_1_THEN_data__ETC___d13;
  tUWide DEF_IF_data_ff_q_1_8_BIT_128_9_THEN_data_ff_q_1_8__ETC___d21;
  tUInt8 DEF_data_ff_cntr_r_MINUS_1___d24;
  tUInt8 DEF_data_ff_cntr_r_EQ_1___d15;
  tUInt8 DEF_x__h980;
  tUWide DEF__dfoo24;
  tUWide DEF_udp_out_ff_q_1_72_BIT_67_73_CONCAT_IF_udp_out__ETC___d176;
  tUWide DEF_udp_out_ff_x_wire_wget__64_BIT_67_65_CONCAT_IF_ETC___d168;
  tUWide DEF__dfoo22;
  tUWide DEF__0_CONCAT_DONTCARE___d177;
  tUWide DEF__dfoo20;
  tUWide DEF_tcp_out_ff_q_1_42_BIT_163_43_CONCAT_IF_tcp_out_ETC___d146;
  tUWide DEF_tcp_out_ff_x_wire_wget__34_BIT_163_35_CONCAT_I_ETC___d138;
  tUWide DEF__dfoo18;
  tUWide DEF__0_CONCAT_DONTCARE___d85;
  tUWide DEF__dfoo16;
  tUWide DEF_ipv6_out_ff_q_1_11_BIT_323_12_CONCAT_IF_ipv6_o_ETC___d115;
  tUWide DEF_ipv6_out_ff_x_wire_wget__03_BIT_323_04_CONCAT__ETC___d107;
  tUWide DEF__dfoo14;
  tUWide DEF__0_CONCAT_DONTCARE___d116;
  tUWide DEF__dfoo12;
  tUWide DEF_ipv4_out_ff_q_1_0_BIT_163_1_CONCAT_IF_ipv4_out_ETC___d84;
  tUWide DEF_ipv4_out_ff_x_wire_wget__2_BIT_163_3_CONCAT_IF_ETC___d76;
  tUWide DEF__dfoo10;
  tUWide DEF__dfoo8;
  tUWide DEF_ethernet_out_ff_q_1_9_BIT_115_0_CONCAT_IF_ethe_ETC___d53;
  tUWide DEF_ethernet_out_ff_x_wire_wget__1_BIT_115_2_CONCA_ETC___d45;
  tUWide DEF__dfoo6;
  tUWide DEF__0_CONCAT_DONTCARE___d54;
  tUInt64 DEF_v__h43714;
  tUInt64 DEF_v__h40923;
  tUInt64 DEF_v__h39701;
  tUInt64 DEF_v__h35840;
  tUInt64 DEF_v__h34619;
  tUInt64 DEF_v__h26826;
  tUInt64 DEF_v__h25745;
  tUInt64 DEF_v__h21949;
  tUInt64 DEF_v__h21142;
  tUInt64 DEF_v__h19403;
  tUInt64 DEF_v__h15262;
  tUInt64 DEF_v__h14911;
  tUWide DEF_meta_in_ff_first____d457;
  tUWide DEF_y__h44006;
  tUWide DEF_ipv6_out_ff_x_wire_wget____d103;
  tUWide DEF_ipv6_out_ff_q_1___d111;
  tUWide DEF_ipv6_out_ff_q_0___d243;
  tUWide DEF_tcp_out_ff_x_wire_wget____d134;
  tUWide DEF_tcp_out_ff_q_1___d142;
  tUWide DEF_tcp_out_ff_q_0___d248;
  tUWide DEF_ipv4_out_ff_x_wire_wget____d72;
  tUWide DEF_ipv4_out_ff_q_1___d80;
  tUWide DEF_ipv4_out_ff_q_0___d239;
  tUWide DEF_ethernet_out_ff_x_wire_wget____d41;
  tUWide DEF_ethernet_out_ff_q_1___d49;
  tUWide DEF_ethernet_out_ff_q_0___d234;
  tUWide DEF_rg_click_metadata___d259;
  tUWide DEF_rg_intrinsic_metadata___d263;
  tUWide DEF_udp_out_ff_x_wire_wget____d164;
  tUWide DEF_udp_out_ff_q_1___d172;
  tUWide DEF_udp_out_ff_q_0___d252;
  tUInt32 DEF_y__h44009;
  tUWide DEF_rg_tmp_BITS_511_TO_1___h16067;
  tUWide DEF_meta_in_ff_first__57_BITS_1196_TO_874___d466;
  tUWide DEF_ipv6_out_ff_q_0_43_BITS_322_TO_0___d245;
  tUWide DEF_ipv6_out_ff_x_wire_wget__03_BITS_322_TO_0___d105;
  tUWide DEF_ipv6_out_ff_q_1_11_BITS_322_TO_0___d113;
  tUWide DEF_meta_in_ff_first__57_BITS_1360_TO_1198___d463;
  tUWide DEF_meta_in_ff_first__57_BITS_872_TO_710___d470;
  tUWide DEF_tcp_out_ff_q_0_48_BITS_162_TO_0___d250;
  tUWide DEF_ipv4_out_ff_q_0_39_BITS_162_TO_0___d241;
  tUWide DEF_tcp_out_ff_q_1_42_BITS_162_TO_0___d144;
  tUWide DEF_tcp_out_ff_x_wire_wget__34_BITS_162_TO_0___d136;
  tUWide DEF_ipv4_out_ff_x_wire_wget__2_BITS_162_TO_0___d74;
  tUWide DEF_ipv4_out_ff_q_1_0_BITS_162_TO_0___d82;
  tUWide DEF_data_this_cycle__h14745;
  tUWide DEF_meta_in_ff_first__57_BITS_1476_TO_1362___d459;
  tUWide DEF_ethernet_out_ff_q_0_34_BITS_114_TO_0___d236;
  tUWide DEF_ethernet_out_ff_x_wire_wget__1_BITS_114_TO_0___d43;
  tUWide DEF_ethernet_out_ff_q_1_9_BITS_114_TO_0___d51;
  tUWide DEF_meta_in_ff_first__57_BITS_598_TO_487___d485;
  tUWide DEF_rg_click_metadata_59_BITS_111_TO_0___d261;
  tUWide DEF_meta_in_ff_first__57_BITS_485_TO_382___d488;
  tUWide DEF_rg_intrinsic_metadata_63_BITS_103_TO_0___d265;
  tUWide DEF_meta_in_ff_first__57_BITS_708_TO_642___d473;
  tUWide DEF_udp_out_ff_q_0_52_BITS_66_TO_0___d254;
  tUWide DEF_udp_out_ff_x_wire_wget__64_BITS_66_TO_0___d166;
  tUWide DEF_udp_out_ff_q_1_72_BITS_66_TO_0___d174;
  tUWide DEF_v__h19164;
  tUInt8 DEF_v_BITS_159_TO_152___h25531;
  tUInt8 DEF_v_BITS_151_TO_144___h25442;
  tUInt8 DEF_v_BITS_143_TO_136___h25353;
  tUInt8 DEF_v_BITS_135_TO_128___h25264;
  tUInt8 DEF_v_BITS_127_TO_120___h25175;
  tUInt8 DEF_v_BITS_119_TO_112___h25086;
  tUInt8 DEF_tcp_flags__h22104;
  tUInt8 DEF_v_BITS_103_TO_96___h24908;
  tUInt8 DEF_v_BITS_95_TO_88___h24819;
  tUInt8 DEF_v_BITS_87_TO_80___h24730;
  tUInt8 DEF_v_BITS_79_TO_72___h24641;
  tUInt8 DEF_v_BITS_71_TO_64___h24552;
  tUInt8 DEF_v_BITS_63_TO_56___h20957;
  tUInt8 DEF_v_BITS_55_TO_48___h20868;
  tUInt8 DEF_v_BITS_47_TO_40___h20779;
  tUInt8 DEF_v_BITS_39_TO_32___h20690;
  tUInt8 DEF_v_BITS_31_TO_24___h20601;
  tUInt8 DEF_v_BITS_23_TO_16___h20512;
  tUInt8 DEF_v_BITS_15_TO_8___h20423;
  tUInt8 DEF_v_BITS_7_TO_0___h20334;
  tUInt8 DEF_ipv6_version__h26972;
  tUInt8 DEF_x__h39427;
  tUInt8 DEF_ipv6_out_ff_x_wire_wget__03_BIT_323___d104;
  tUInt8 DEF_ipv6_out_ff_q_1_11_BIT_323___d112;
  tUInt8 DEF_tcp_out_ff_q_1_42_BIT_163___d143;
  tUInt8 DEF_tcp_out_ff_x_wire_wget__34_BIT_163___d135;
  tUInt8 DEF_ipv4_out_ff_x_wire_wget__2_BIT_163___d73;
  tUInt8 DEF_ipv4_out_ff_q_1_0_BIT_163___d81;
  tUInt8 DEF_ethernet_out_ff_x_wire_wget__1_BIT_115___d42;
  tUInt8 DEF_ethernet_out_ff_q_1_9_BIT_115___d50;
  tUInt8 DEF_udp_out_ff_x_wire_wget__64_BIT_67___d165;
  tUInt8 DEF_udp_out_ff_q_1_72_BIT_67___d173;
  tUWide DEF_v__h19238;
  tUWide DEF_IF_meta_in_ff_first__57_BIT_1197_65_THEN_meta__ETC___d467;
  tUWide DEF_IF_ipv6_out_ff_q_0_43_BIT_323_44_THEN_ipv6_out_ETC___d246;
  tUWide DEF_IF_ipv6_out_ff_x_wire_wget__03_BIT_323_04_THEN_ETC___d106;
  tUWide DEF_IF_ipv6_out_ff_q_1_11_BIT_323_12_THEN_ipv6_out_ETC___d114;
  tUWide DEF_IF_meta_in_ff_first__57_BIT_873_69_THEN_meta_i_ETC___d471;
  tUWide DEF_IF_meta_in_ff_first__57_BIT_1361_62_THEN_meta__ETC___d464;
  tUWide DEF_IF_tcp_out_ff_q_0_48_BIT_163_49_THEN_tcp_out_f_ETC___d251;
  tUWide DEF_IF_ipv4_out_ff_q_0_39_BIT_163_40_THEN_ipv4_out_ETC___d242;
  tUWide DEF_IF_tcp_out_ff_q_1_42_BIT_163_43_THEN_tcp_out_f_ETC___d145;
  tUWide DEF_IF_tcp_out_ff_x_wire_wget__34_BIT_163_35_THEN__ETC___d137;
  tUWide DEF_IF_ipv4_out_ff_x_wire_wget__2_BIT_163_3_THEN_i_ETC___d75;
  tUWide DEF_IF_ipv4_out_ff_q_1_0_BIT_163_1_THEN_ipv4_out_f_ETC___d83;
  tUWide DEF_IF_meta_in_ff_first__57_BIT_1477_58_THEN_meta__ETC___d460;
  tUWide DEF_IF_ethernet_out_ff_q_0_34_BIT_115_35_THEN_ethe_ETC___d237;
  tUWide DEF_IF_ethernet_out_ff_x_wire_wget__1_BIT_115_2_TH_ETC___d44;
  tUWide DEF_IF_ethernet_out_ff_q_1_9_BIT_115_0_THEN_ethern_ETC___d52;
  tUWide DEF_IF_rg_click_metadata_59_BIT_112_60_THEN_rg_cli_ETC___d262;
  tUWide DEF_IF_meta_in_ff_first__57_BIT_599_84_THEN_meta_i_ETC___d486;
  tUWide DEF_IF_rg_intrinsic_metadata_63_BIT_104_64_THEN_rg_ETC___d266;
  tUWide DEF_IF_meta_in_ff_first__57_BIT_486_87_THEN_meta_i_ETC___d489;
  tUWide DEF_IF_meta_in_ff_first__57_BIT_709_72_THEN_meta_i_ETC___d474;
  tUWide DEF_IF_udp_out_ff_q_0_52_BIT_67_53_THEN_udp_out_ff_ETC___d255;
  tUWide DEF_IF_udp_out_ff_x_wire_wget__64_BIT_67_65_THEN_u_ETC___d167;
  tUWide DEF_IF_udp_out_ff_q_1_72_BIT_67_73_THEN_udp_out_ff_ETC___d175;
  tUInt32 DEF_ethernet_eth_type__h41067;
  tUInt8 DEF_udp_out_ff_cntr_r_61_MINUS_1___d178;
  tUInt8 DEF_udp_out_ff_cntr_r_61_EQ_1___d169;
  tUInt8 DEF_udp_out_ff_cntr_r_61_EQ_0___d163;
  tUInt8 DEF_tcp_out_ff_cntr_r_31_MINUS_1___d147;
  tUInt8 DEF_tcp_out_ff_cntr_r_31_EQ_1___d139;
  tUInt8 DEF_tcp_out_ff_cntr_r_31_EQ_0___d133;
  tUInt8 DEF_ipv6_out_ff_cntr_r_00_MINUS_1___d117;
  tUInt8 DEF_ipv6_out_ff_cntr_r_00_EQ_1___d108;
  tUInt8 DEF_ipv6_out_ff_cntr_r_00_EQ_0___d102;
  tUInt8 DEF_ipv4_out_ff_cntr_r_9_MINUS_1___d86;
  tUInt8 DEF_ipv4_out_ff_cntr_r_9_EQ_1___d77;
  tUInt8 DEF_ipv4_out_ff_cntr_r_9_EQ_0___d71;
  tUInt8 DEF_ethernet_out_ff_cntr_r_8_MINUS_1___d55;
  tUInt8 DEF_ethernet_out_ff_cntr_r_8_EQ_1___d46;
  tUInt8 DEF_ethernet_out_ff_cntr_r_8_EQ_0___d40;
  tUWide DEF_ethernet_out_ff_q_0_34_BIT_115_35_CONCAT_IF_et_ETC___d287;
  tUWide DEF_ethernet_out_ff_q_0_34_BIT_115_35_CONCAT_IF_et_ETC___d238;
  tUWide DEF_ipv4_out_ff_q_0_39_BIT_163_40_CONCAT_IF_ipv4_o_ETC___d257;
  tUWide DEF__0_CONCAT_DONTCARE_CONCAT_0_CONCAT_DONTCARE_58__ETC___d274;
  tUWide DEF__0_CONCAT_DONTCARE_75_CONCAT_0_CONCAT_DONTCARE__ETC___d286;
  tUWide DEF_meta_in_ff_first__57_BIT_1361_62_CONCAT_IF_met_ETC___d476;
  tUWide DEF_meta_in_ff_first__57_BIT_1197_65_CONCAT_IF_met_ETC___d468;
  tUWide DEF_meta_in_ff_first__57_BIT_873_69_CONCAT_IF_meta_ETC___d475;
  tUWide DEF_ipv6_out_ff_q_0_43_BIT_323_44_CONCAT_IF_ipv6_o_ETC___d247;
  tUWide DEF_tcp_out_ff_q_0_48_BIT_163_49_CONCAT_IF_tcp_out_ETC___d256;
  tUWide DEF_x__h19340;
  tUWide DEF_x__h16016;
  tUWide DEF__0_CONCAT_DONTCARE_75_CONCAT_0_CONCAT_DONTCARE__ETC___d285;
  tUWide DEF_meta_in_ff_first__57_BIT_371_97_CONCAT_IF_meta_ETC___d564;
  tUWide DEF_meta_in_ff_first__57_BIT_351_04_CONCAT_IF_meta_ETC___d563;
  tUWide DEF__0_CONCAT_DONTCARE_58_CONCAT_0_CONCAT_DONTCARE__ETC___d284;
  tUWide DEF_meta_in_ff_first__57_BIT_308_11_CONCAT_IF_meta_ETC___d562;
  tUWide DEF__9_CONCAT_IF_data_in_tmp_port0__read__90_THEN_0_ETC___d404;
  tUWide DEF_IF_data_in_tmp_port0__read__90_THEN_0_CONCAT_d_ETC___d403;
  tUWide DEF_IF_data_in_tmp_port0__read__90_THEN_0_CONCAT_d_ETC___d402;
  tUWide DEF__0_CONCAT_DONTCARE_77_CONCAT_0_CONCAT_DONTCARE__ETC___d283;
  tUWide DEF_meta_in_ff_first__57_BIT_273_18_CONCAT_IF_meta_ETC___d561;
  tUInt32 DEF_ipv6_payload_len__h26975;
  tUInt32 DEF_x__h20966;
  tUWide DEF_IF_data_in_tmp_port0__read__90_THEN_0_CONCAT_d_ETC___d401;
  tUWide DEF__0_CONCAT_DONTCARE_58_CONCAT_0_CONCAT_DONTCARE__ETC___d282;
  tUWide DEF_meta_in_ff_first__57_BIT_223_25_CONCAT_IF_meta_ETC___d560;
  tUWide DEF_rg_click_metadata_59_BIT_112_60_CONCAT_IF_rg_c_ETC___d273;
  tUWide DEF_meta_in_ff_first__57_BIT_641_77_CONCAT_IF_meta_ETC___d496;
  tUWide DEF_meta_in_ff_first__57_BIT_599_84_CONCAT_IF_meta_ETC___d495;
  tUWide DEF_rg_intrinsic_metadata_63_BIT_104_64_CONCAT_IF__ETC___d267;
  tUWide DEF_meta_in_ff_first__57_BIT_486_87_CONCAT_IF_meta_ETC___d490;
  tUWide DEF__0_CONCAT_DONTCARE_58_CONCAT_0_CONCAT_DONTCARE__ETC___d281;
  tUWide DEF_meta_in_ff_first__57_BIT_170_32_CONCAT_IF_meta_ETC___d559;
  tUWide DEF__0_CONCAT_DONTCARE_CONCAT_0_CONCAT_DONTCARE_58__ETC___d280;
  tUWide DEF_meta_in_ff_first__57_BIT_117_39_CONCAT_IF_meta_ETC___d558;
  tUWide DEF__9_CONCAT_IF_data_in_tmp_port0__read__90_THEN_0_ETC___d351;
  tUInt32 DEF_x__h22085;
  tUWide DEF_IF_data_in_tmp_port0__read__90_THEN_0_CONCAT_d_ETC___d350;
  tUWide DEF__9_CONCAT_IF_data_in_tmp_port0__read__90_THEN_0_ETC___d428;
  tUWide DEF_IF_data_in_tmp_port0__read__90_THEN_0_CONCAT_d_ETC___d427;
  tUInt32 DEF_x__h39435;
  tUWide DEF_IF_data_in_tmp_port0__read__90_THEN_0_CONCAT_d_ETC___d426;
  tUWide DEF_IF_data_in_tmp_port0__read__90_THEN_0_CONCAT_d_ETC___d349;
  tUWide DEF_IF_data_in_tmp_port0__read__90_THEN_0_CONCAT_d_ETC___d425;
  tUWide DEF__9_CONCAT_IF_data_in_tmp_port0__read__90_THEN_0_ETC___d450;
  tUWide DEF_meta_in_ff_first__57_BIT_1477_58_CONCAT_IF_met_ETC___d461;
  tUInt32 DEF_IF_data_in_tmp_port0__read__90_THEN_0_CONCAT_d_ETC___d331;
  tUWide DEF_IF_data_in_tmp_port0__read__90_THEN_0_CONCAT_d_ETC___d424;
  tUInt32 DEF_x__h25540;
  tUInt32 DEF_x__h39465;
  tUWide DEF__9_CONCAT_IF_data_in_tmp_port0__read__90_THEN_0_ETC___d320;
  tUInt32 DEF_x__h25559;
  tUInt8 DEF__0_CONCAT_DONTCARE___d322;
  tUInt8 DEF_NOT_cf_verbosity_read__96_SLE_4_97___d198;
  tUWide DEF_x__h19337;
 
 /* Rules */
 public:
  void RL_data_ff_incCtr();
  void RL_data_ff_decCtr();
  void RL_data_ff_both();
  void RL_ethernet_out_ff_incCtr();
  void RL_ethernet_out_ff_decCtr();
  void RL_ethernet_out_ff_both();
  void RL_ipv4_out_ff_incCtr();
  void RL_ipv4_out_ff_decCtr();
  void RL_ipv4_out_ff_both();
  void RL_ipv6_out_ff_incCtr();
  void RL_ipv6_out_ff_decCtr();
  void RL_ipv6_out_ff_both();
  void RL_tcp_out_ff_incCtr();
  void RL_tcp_out_ff_decCtr();
  void RL_tcp_out_ff_both();
  void RL_udp_out_ff_incCtr();
  void RL_udp_out_ff_decCtr();
  void RL_udp_out_ff_both();
  void RL_rl_data_ff_load();
  void RL_rl_start_state_deq();
  void RL_rl_start_state_idle();
  void RL_rl_delay();
  void RL_rl_accept();
  void RL_fsmrl_rl_extract();
  void RL_fsmrl_rl_extract_1();
  void RL_fsmrl_rl_accept();
  void RL_fsmrl_rl_cont();
  void RL_fsmrl_rl_extract_2();
  void RL_fsmrl_rl_accept_1();
  void RL_fsmrl_rl_cont_1();
  void RL_fsmrl_rl_cont_2();
  void RL_fsmrl_rl_extract_3();
  void RL_fsmrl_rl_accept_2();
  void RL_fsmrl_rl_cont_3();
  void RL_fsmrl_rl_cont_4();
  void RL_fsmrl_rl_extract_4();
 
 /* Methods */
 public:
  tUInt64 METH_read_perf_info();
  tUInt8 METH_RDY_read_perf_info();
  void METH_frameIn_put(tUWide ARG_frameIn_put);
  tUInt8 METH_RDY_frameIn_put();
  tUWide METH_meta_get();
  tUInt8 METH_RDY_meta_get();
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
  void dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mkParser &backing);
  void vcd_defs(tVCDDumpType dt, MOD_mkParser &backing);
  void vcd_prims(tVCDDumpType dt, MOD_mkParser &backing);
};

#endif /* ifndef __mkParser_h__ */
