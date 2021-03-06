/*
 * Generated by Bluespec Compiler, version 2014.07.A (build 34078, 2014-07-30)
 * 
 * On Sun Jun  4 11:11:32 CST 2017
 * 
 */

/* Generation options: */
#ifndef __mkMatchTable_ModuleIfIfEqual_h__
#define __mkMatchTable_ModuleIfIfEqual_h__

#include "bluesim_types.h"
#include "bs_module.h"
#include "bluesim_primitives.h"
#include "bs_vcd.h"


/* Class declaration for the mkMatchTable_ModuleIfIfEqual module */
class MOD_mkMatchTable_ModuleIfIfEqual : public Module {
 
 /* Clock handles */
 private:
  tClock __clk_handle_0;
 
 /* Clock gate handles */
 public:
  tUInt8 *clk_gate[0];
 
 /* Instantiation parameters */
 public:
  std::string const PARAM_param1;
 
 /* Module state */
 public:
  MOD_Fifo<tUInt64> INST_ret_ifc_delay2_ff;
  MOD_Fifo<tUInt64> INST_ret_ifc_delay_ff;
  MOD_Reg<tUWide> INST_ret_ifc_dmhc_evictee_gslots_0;
  MOD_Reg<tUWide> INST_ret_ifc_dmhc_evictee_gslots_1;
  MOD_Reg<tUWide> INST_ret_ifc_dmhc_evictee_gslots_2;
  MOD_Reg<tUWide> INST_ret_ifc_dmhc_evictee_gslots_3;
  MOD_Reg<tUInt32> INST_ret_ifc_dmhc_evictee_hvals_0;
  MOD_Reg<tUInt32> INST_ret_ifc_dmhc_evictee_hvals_1;
  MOD_Reg<tUInt32> INST_ret_ifc_dmhc_evictee_hvals_2;
  MOD_Reg<tUInt32> INST_ret_ifc_dmhc_evictee_hvals_3;
  MOD_Reg<tUWide> INST_ret_ifc_dmhc_evictee_mslot;
  MOD_BRAM<tUInt32,tUWide,tUInt8> INST_ret_ifc_dmhc_hash_units_0_g_table;
  MOD_Reg<tUInt32> INST_ret_ifc_dmhc_hash_units_0_gslot_counter;
  MOD_Reg<tUInt8> INST_ret_ifc_dmhc_hash_units_0_init;
  MOD_Reg<tUInt8> INST_ret_ifc_dmhc_hash_units_0_is_miss;
  MOD_BRAM<tUInt32,tUWide,tUInt8> INST_ret_ifc_dmhc_hash_units_1_g_table;
  MOD_Reg<tUInt32> INST_ret_ifc_dmhc_hash_units_1_gslot_counter;
  MOD_Reg<tUInt8> INST_ret_ifc_dmhc_hash_units_1_init;
  MOD_Reg<tUInt8> INST_ret_ifc_dmhc_hash_units_1_is_miss;
  MOD_BRAM<tUInt32,tUWide,tUInt8> INST_ret_ifc_dmhc_hash_units_2_g_table;
  MOD_Reg<tUInt32> INST_ret_ifc_dmhc_hash_units_2_gslot_counter;
  MOD_Reg<tUInt8> INST_ret_ifc_dmhc_hash_units_2_init;
  MOD_Reg<tUInt8> INST_ret_ifc_dmhc_hash_units_2_is_miss;
  MOD_BRAM<tUInt32,tUWide,tUInt8> INST_ret_ifc_dmhc_hash_units_3_g_table;
  MOD_Reg<tUInt32> INST_ret_ifc_dmhc_hash_units_3_gslot_counter;
  MOD_Reg<tUInt8> INST_ret_ifc_dmhc_hash_units_3_init;
  MOD_Reg<tUInt8> INST_ret_ifc_dmhc_hash_units_3_is_miss;
  MOD_Reg<tUInt8> INST_ret_ifc_dmhc_inited;
  MOD_Wire<tUInt8> INST_ret_ifc_dmhc_is_hit_wire;
  MOD_Wire<tUInt8> INST_ret_ifc_dmhc_ldvn_abort;
  MOD_Reg<tUInt8> INST_ret_ifc_dmhc_ldvn_start_reg;
  MOD_Reg<tUInt8> INST_ret_ifc_dmhc_ldvn_start_reg_1;
  MOD_Wire<tUInt8> INST_ret_ifc_dmhc_ldvn_start_reg_2;
  MOD_Wire<tUInt8> INST_ret_ifc_dmhc_ldvn_start_wire;
  MOD_Reg<tUInt8> INST_ret_ifc_dmhc_ldvn_state_can_overlap;
  MOD_Reg<tUInt8> INST_ret_ifc_dmhc_ldvn_state_fired;
  MOD_Wire<tUInt8> INST_ret_ifc_dmhc_ldvn_state_fired_1;
  MOD_ConfigReg<tUInt8> INST_ret_ifc_dmhc_ldvn_state_mkFSMstate;
  MOD_Wire<tUInt8> INST_ret_ifc_dmhc_ldvn_state_overlap_pw;
  MOD_Wire<tUInt8> INST_ret_ifc_dmhc_ldvn_state_set_pw;
  MOD_BRAM<tUInt8,tUWide,tUInt8> INST_ret_ifc_dmhc_m_table;
  MOD_Reg<tUInt8> INST_ret_ifc_dmhc_miss_service;
  MOD_Reg<tUInt8> INST_ret_ifc_dmhc_mslot_counter;
  MOD_Wire<tUInt8> INST_ret_ifc_dmhc_mslot_replacement_abort;
  MOD_Reg<tUInt8> INST_ret_ifc_dmhc_mslot_replacement_start_reg;
  MOD_Reg<tUInt8> INST_ret_ifc_dmhc_mslot_replacement_start_reg_1;
  MOD_Wire<tUInt8> INST_ret_ifc_dmhc_mslot_replacement_start_reg_2;
  MOD_Wire<tUInt8> INST_ret_ifc_dmhc_mslot_replacement_start_wire;
  MOD_Reg<tUInt8> INST_ret_ifc_dmhc_mslot_replacement_state_can_overlap;
  MOD_Reg<tUInt8> INST_ret_ifc_dmhc_mslot_replacement_state_fired;
  MOD_Wire<tUInt8> INST_ret_ifc_dmhc_mslot_replacement_state_fired_1;
  MOD_ConfigReg<tUInt8> INST_ret_ifc_dmhc_mslot_replacement_state_mkFSMstate;
  MOD_Wire<tUInt8> INST_ret_ifc_dmhc_mslot_replacement_state_overlap_pw;
  MOD_Wire<tUInt8> INST_ret_ifc_dmhc_mslot_replacement_state_set_pw;
  MOD_Reg<tUWide> INST_ret_ifc_dmhc_mslot_to_repair;
  MOD_Reg<tUWide> INST_ret_ifc_dmhc_new_gslots_0;
  MOD_Reg<tUWide> INST_ret_ifc_dmhc_new_gslots_1;
  MOD_Reg<tUWide> INST_ret_ifc_dmhc_new_gslots_2;
  MOD_Reg<tUWide> INST_ret_ifc_dmhc_new_gslots_3;
  MOD_Reg<tUInt32> INST_ret_ifc_dmhc_new_hvals_0;
  MOD_Reg<tUInt32> INST_ret_ifc_dmhc_new_hvals_1;
  MOD_Reg<tUInt32> INST_ret_ifc_dmhc_new_hvals_2;
  MOD_Reg<tUInt32> INST_ret_ifc_dmhc_new_hvals_3;
  MOD_Reg<tUWide> INST_ret_ifc_dmhc_new_mslot;
  MOD_Wire<tUWide> INST_ret_ifc_dmhc_rec_value;
  MOD_Reg<tUInt8> INST_ret_ifc_dmhc_repair_g_index;
  MOD_Reg<tUWide> INST_ret_ifc_dmhc_repair_gslot;
  MOD_Reg<tUWide> INST_ret_ifc_dmhc_repair_gslots_0;
  MOD_Reg<tUWide> INST_ret_ifc_dmhc_repair_gslots_1;
  MOD_Reg<tUWide> INST_ret_ifc_dmhc_repair_gslots_2;
  MOD_Reg<tUWide> INST_ret_ifc_dmhc_repair_gslots_3;
  MOD_Reg<tUInt32> INST_ret_ifc_dmhc_repair_hvals_0;
  MOD_Reg<tUInt32> INST_ret_ifc_dmhc_repair_hvals_1;
  MOD_Reg<tUInt32> INST_ret_ifc_dmhc_repair_hvals_2;
  MOD_Reg<tUInt32> INST_ret_ifc_dmhc_repair_hvals_3;
  MOD_Reg<tUWide> INST_ret_ifc_dmhc_repair_mslot;
  MOD_Reg<tUInt8> INST_ret_ifc_dmhc_stage;
  MOD_Fifo<tUInt64> INST_ret_ifc_dmhc_stage1_ff;
  MOD_Fifo<tUInt64> INST_ret_ifc_dmhc_stage2_ff;
  MOD_Reg<tUInt8> INST_ret_ifc_dmhc_victim_g_index;
  MOD_Reg<tUWide> INST_ret_ifc_dmhc_victim_gslot;
  MOD_Reg<tUWide> INST_ret_ifc_dmhc_victim_mslot;
  MOD_Reg<tUInt8> INST_ret_ifc_dmhc_victim_mslot_addr;
  MOD_Fifo<tUWide> INST_ret_ifc_readDataFifo;
  MOD_Fifo<tUInt64> INST_ret_ifc_readReqFifo;
 
 /* Constructor */
 public:
  MOD_mkMatchTable_ModuleIfIfEqual(tSimStateHdl simHdl,
				   char const *name,
				   Module *parent,
				   std::string ARG_param1);
 
 /* Symbol init methods */
 private:
  void init_symbols_0();
 
 /* Reset signal definitions */
 private:
  tUInt8 PORT_RST_N;
 
 /* Port definitions */
 public:
  tUInt8 PORT_EN_add_entry_put;
  tUWide PORT_modify_entry_put;
  tUWide PORT_add_entry_put;
  tUWide PORT_lookupPort_response_get;
 
 /* Publicly accessible definitions */
 public:
  tUInt8 DEF_WILL_FIRE_add_entry_put;
  tUInt8 DEF_WILL_FIRE_RL_ret_ifc_dmhc_mslot_replacement_action_l258c9;
  tUInt8 DEF_WILL_FIRE_RL_ret_ifc_dmhc_mslot_replacement_action_l251c9;
  tUInt8 DEF_WILL_FIRE_RL_ret_ifc_dmhc_mslot_replacement_action_l243c9;
  tUInt8 DEF_WILL_FIRE_RL_ret_ifc_dmhc_ldvn_action_l99c9;
  tUInt8 DEF_WILL_FIRE_RL_ret_ifc_dmhc_mslot_replacement_action_l201c9;
  tUInt8 DEF_WILL_FIRE_RL_ret_ifc_dmhc_mslot_replacement_action_l192c9;
  tUInt8 DEF_WILL_FIRE_RL_ret_ifc_dmhc_mslot_replacement_action_l182c9;
  tUInt8 DEF_WILL_FIRE_RL_ret_ifc_dmhc_mslot_replacement_action_l172c9;
  tUInt8 DEF_WILL_FIRE_RL_ret_ifc_dmhc_ldvn_action_l30c9;
  tUInt8 DEF_WILL_FIRE_RL_ret_ifc_dmhc_mslot_replacement_action_l164c9;
  tUInt8 DEF_WILL_FIRE_RL_ret_ifc_dmhc_mslot_replacement_action_l149c9;
  tUInt8 DEF_WILL_FIRE_RL_ret_ifc_dmhc_mslot_replacement_action_l138c9;
  tUInt8 DEF_WILL_FIRE_RL_ret_ifc_dmhc_mslot_replacement_action_l128c9;
  tUInt8 DEF_WILL_FIRE_RL_ret_ifc_dmhc_mslot_replacement_action_l121c9;
  tUInt8 DEF_WILL_FIRE_RL_ret_ifc_dmhc_ldvn_action_l107c9;
  tUInt8 DEF_WILL_FIRE_RL_ret_ifc_dmhc_ldvn_action_l60c9;
  tUInt8 DEF_WILL_FIRE_RL_ret_ifc_dmhc_ldvn_action_l52c9;
  tUInt8 DEF_WILL_FIRE_RL_ret_ifc_dmhc_ldvn_action_l41c9;
  tUInt8 DEF_WILL_FIRE_RL_ret_ifc_dmhc_ldvn_action_l22c9;
  tUInt8 DEF_ret_ifc_dmhc_inited___d758;
  tUInt8 DEF_ret_ifc_dmhc_hash_units_0_init__h386;
  tUWide DEF_ret_ifc_dmhc_victim_gslot___d739;
  tUInt8 DEF_ret_ifc_dmhc_mslot_replacement_state_mkFSMstat_ETC___d326;
  tUInt8 DEF_ret_ifc_dmhc_mslot_replacement_state_fired__h53226;
  tUInt8 DEF_ret_ifc_dmhc_mslot_replacement_abort_whas____d299;
  tUInt8 DEF_ret_ifc_dmhc_mslot_replacement_abort_wget____d300;
  tUInt8 DEF_ret_ifc_dmhc_mslot_replacement_start_reg_1__h53224;
  tUInt8 DEF_ret_ifc_dmhc_mslot_replacement_start_reg__h83992;
  tUInt8 DEF_ret_ifc_dmhc_miss_service__h97337;
  tUInt8 DEF__read_degree__h83470;
  tUInt8 DEF_ret_ifc_dmhc_mslot_replacement_state_mkFSMstat_ETC___d329;
  tUInt8 DEF_ret_ifc_dmhc_victim_gslot_39_BITS_1_TO_0_40_EQ_0___d741;
  tUInt8 DEF_ret_ifc_dmhc_mslot_replacement_abort_whas__99__ETC___d330;
  tUInt8 DEF_ret_ifc_dmhc_mslot_replacement_abort_whas__99__ETC___d301;
  tUInt8 DEF_ret_ifc_dmhc_mslot_replacement_abort_whas__99__ETC___d755;
 
 /* Local definitions */
 private:
  tUInt8 DEF_ret_ifc_dmhc_is_hit_wire_wget____d938;
  tUInt8 DEF_ret_ifc_dmhc_is_hit_wire_whas____d937;
  tUInt8 DEF_x2__h97421;
  tUInt64 DEF_v___1__h97289;
  tUInt64 DEF_v__h97091;
  tUInt64 DEF_v__h96819;
  tUInt64 DEF_v__h96689;
  tUInt64 DEF_v___1__h96520;
  tUInt64 DEF_v__h96430;
  tUInt64 DEF_v___1__h85650;
  tUInt64 DEF_v__h85001;
  tUInt64 DEF_v__h84822;
  tUInt64 DEF_v__h84259;
  tUInt64 DEF_v__h83595;
  tUWide DEF_ret_ifc_dmhc_mslot_to_repair___d64;
  tUWide DEF_ret_ifc_dmhc_new_mslot___d516;
  tUWide DEF_ret_ifc_dmhc_evictee_mslot___d334;
  tUWide DEF_ret_ifc_dmhc_m_table_a_read____d61;
  tUWide DEF_ret_ifc_dmhc_new_gslots_3___d652;
  tUWide DEF_ret_ifc_dmhc_new_gslots_2___d654;
  tUWide DEF_ret_ifc_dmhc_new_gslots_1___d656;
  tUWide DEF_ret_ifc_dmhc_new_gslots_0___d658;
  tUWide DEF_ret_ifc_dmhc_repair_gslots_3___d204;
  tUWide DEF_ret_ifc_dmhc_repair_gslots_2___d206;
  tUWide DEF_ret_ifc_dmhc_repair_gslots_1___d208;
  tUWide DEF_ret_ifc_dmhc_repair_gslots_0___d210;
  tUWide DEF_ret_ifc_dmhc_evictee_gslots_3___d498;
  tUWide DEF_ret_ifc_dmhc_evictee_gslots_2___d489;
  tUWide DEF_ret_ifc_dmhc_evictee_gslots_1___d480;
  tUWide DEF_ret_ifc_dmhc_evictee_gslots_0___d471;
  tUWide DEF_ret_ifc_dmhc_hash_units_3_g_table_a_read____d201;
  tUWide DEF_ret_ifc_dmhc_hash_units_2_g_table_a_read____d200;
  tUWide DEF_ret_ifc_dmhc_hash_units_1_g_table_a_read____d199;
  tUWide DEF_ret_ifc_dmhc_hash_units_0_g_table_a_read____d198;
  tUWide DEF_ret_ifc_readDataFifo_first____d956;
  tUWide DEF_x_wget__h2155;
  tUInt8 DEF_x2__h83651;
  tUWide DEF_ret_ifc_dmhc_evictee_gslots_3_98_BITS_90_TO_2___d503;
  tUWide DEF_ret_ifc_dmhc_evictee_gslots_2_89_BITS_90_TO_2___d494;
  tUWide DEF_ret_ifc_dmhc_evictee_gslots_1_80_BITS_90_TO_2___d485;
  tUWide DEF_ret_ifc_dmhc_evictee_gslots_0_71_BITS_90_TO_2___d476;
  tUWide DEF_ret_ifc_dmhc_new_gslots_0_58_BITS_90_TO_10___d713;
  tUWide DEF_ret_ifc_dmhc_new_gslots_1_56_BITS_90_TO_10___d717;
  tUWide DEF_ret_ifc_dmhc_new_gslots_2_54_BITS_90_TO_10___d721;
  tUWide DEF_ret_ifc_dmhc_new_gslots_3_52_BITS_90_TO_10___d725;
  tUWide DEF_ret_ifc_dmhc_repair_gslots_0_10_BITS_90_TO_10___d257;
  tUWide DEF_ret_ifc_dmhc_repair_gslots_1_08_BITS_90_TO_10___d262;
  tUWide DEF_ret_ifc_dmhc_repair_gslots_3_04_BITS_90_TO_10___d272;
  tUWide DEF_ret_ifc_dmhc_repair_gslots_2_06_BITS_90_TO_10___d267;
  tUWide DEF_x_a_read_value__h17927;
  tUWide DEF__read_value__h68708;
  tUWide DEF__read_value__h18834;
  tUWide DEF_x_a_read_value__h30517;
  tUWide DEF_x_a_read_value__h30400;
  tUWide DEF_x_a_read_value__h30283;
  tUWide DEF_ret_ifc_dmhc_hash_units_0_g_table_a_read__98_B_ETC___d770;
  tUWide DEF__read_value__h80678;
  tUWide DEF__read_value__h80656;
  tUWide DEF__read_value__h80628;
  tUWide DEF__read_value__h80600;
  tUWide DEF__read_value__h30998;
  tUWide DEF__read_value__h30976;
  tUWide DEF__read_value__h30920;
  tUWide DEF__read_value__h30948;
  tUWide DEF_value__h97151;
  tUWide DEF_v_snd__h97320;
  tUInt8 DEF__read_degree__h80681;
  tUInt8 DEF__read_degree__h80659;
  tUInt8 DEF__read_degree__h80631;
  tUInt8 DEF__read_degree__h80603;
  tUInt8 DEF__read_degree__h31001;
  tUInt8 DEF__read_degree__h30979;
  tUInt8 DEF__read_degree__h30923;
  tUInt8 DEF__read_degree__h30951;
  tUWide DEF_IF_ret_ifc_dmhc_victim_g_index_80_EQ_3_82_THEN_ETC___d728;
  tUWide DEF_IF_ret_ifc_dmhc_victim_g_index_80_EQ_3_82_THEN_ETC___d712;
  tUWide DEF_ret_ifc_dmhc_new_gslots_3_52_BITS_90_TO_10_25__ETC___d727;
  tUWide DEF_IF_ret_ifc_dmhc_victim_g_index_80_EQ_2_83_THEN_ETC___d724;
  tUWide DEF_ret_ifc_dmhc_new_gslots_2_54_BITS_90_TO_10_21__ETC___d723;
  tUWide DEF_IF_ret_ifc_dmhc_victim_g_index_80_EQ_1_84_THEN_ETC___d720;
  tUWide DEF_ret_ifc_dmhc_new_gslots_1_56_BITS_90_TO_10_17__ETC___d719;
  tUWide DEF_IF_ret_ifc_dmhc_victim_g_index_80_EQ_0_81_THEN_ETC___d716;
  tUWide DEF_ret_ifc_dmhc_new_gslots_0_58_BITS_90_TO_10_13__ETC___d715;
  tUWide DEF_IF_ret_ifc_dmhc_new_gslots_3_52_BITS_1_TO_0_53_ETC___d667;
  tUWide DEF_IF_ret_ifc_dmhc_new_gslots_2_54_BITS_1_TO_0_55_ETC___d666;
  tUWide DEF_IF_ret_ifc_dmhc_new_gslots_1_56_BITS_1_TO_0_57_ETC___d665;
  tUWide DEF_IF_ret_ifc_dmhc_evictee_gslots_3_98_BITS_1_TO__ETC___d506;
  tUWide DEF_ret_ifc_dmhc_evictee_gslots_3_98_BITS_90_TO_2__ETC___d505;
  tUWide DEF_IF_ret_ifc_dmhc_evictee_gslots_2_89_BITS_1_TO__ETC___d497;
  tUWide DEF_ret_ifc_dmhc_evictee_gslots_2_89_BITS_90_TO_2__ETC___d496;
  tUWide DEF_IF_ret_ifc_dmhc_evictee_gslots_1_80_BITS_1_TO__ETC___d488;
  tUWide DEF_ret_ifc_dmhc_evictee_gslots_1_80_BITS_90_TO_2__ETC___d487;
  tUWide DEF_IF_ret_ifc_dmhc_evictee_gslots_0_71_BITS_1_TO__ETC___d479;
  tUWide DEF_ret_ifc_dmhc_evictee_gslots_0_71_BITS_90_TO_2__ETC___d478;
  tUWide DEF_IF_ret_ifc_dmhc_repair_g_index_25_EQ_3_27_THEN_ETC___d276;
  tUWide DEF_IF_ret_ifc_dmhc_repair_g_index_25_EQ_3_27_THEN_ETC___d256;
  tUWide DEF_ret_ifc_dmhc_repair_gslots_3_04_BITS_90_TO_10__ETC___d275;
  tUWide DEF_IF_ret_ifc_dmhc_repair_g_index_25_EQ_2_28_THEN_ETC___d271;
  tUWide DEF_ret_ifc_dmhc_repair_gslots_2_06_BITS_90_TO_10__ETC___d270;
  tUWide DEF_IF_ret_ifc_dmhc_repair_g_index_25_EQ_0_26_THEN_ETC___d261;
  tUWide DEF_ret_ifc_dmhc_repair_gslots_0_10_BITS_90_TO_10__ETC___d260;
  tUWide DEF_IF_ret_ifc_dmhc_repair_g_index_25_EQ_1_29_THEN_ETC___d266;
  tUWide DEF_ret_ifc_dmhc_repair_gslots_1_08_BITS_90_TO_10__ETC___d265;
  tUWide DEF_IF_ret_ifc_dmhc_repair_gslots_3_04_BITS_1_TO_0_ETC___d219;
  tUWide DEF_IF_ret_ifc_dmhc_repair_gslots_2_06_BITS_1_TO_0_ETC___d218;
  tUWide DEF_IF_ret_ifc_dmhc_repair_gslots_1_08_BITS_1_TO_0_ETC___d217;
  tUWide DEF_IF_ret_ifc_readDataFifo_first__56_BIT_73_57_TH_ETC___d960;
  tUWide DEF_IF_ret_ifc_dmhc_is_hit_wire_whas__37_AND_ret_i_ETC___d948;
  tUInt8 DEF_ret_ifc_dmhc_is_hit_wire_whas__37_AND_ret_ifc__ETC___d939;
  tUWide DEF_IF_ret_ifc_dmhc_rec_value_whas__45_THEN_ret_if_ETC___d947;
  tUWide DEF__theResult_____2_fst_value__h81628;
  tUWide DEF__theResult_____2_fst_value__h81624;
  tUWide DEF__theResult_____2_fst_value__h81592;
  tUWide DEF__theResult_____2_fst_value__h81620;
  tUWide DEF__theResult_____2_fst_value__h81596;
  tUWide DEF__theResult_____2_fst_value__h81616;
  tUWide DEF__theResult_____2_fst_value__h81600;
  tUWide DEF__theResult_____2_fst_value__h31827;
  tUWide DEF__theResult_____2_fst_value__h31823;
  tUWide DEF__theResult_____2_fst_value__h31791;
  tUWide DEF__theResult_____2_fst_value__h31819;
  tUWide DEF__theResult_____2_fst_value__h31795;
  tUWide DEF__theResult_____2_fst_value__h31815;
  tUWide DEF__theResult_____2_fst_value__h31799;
  tUInt8 DEF_x__h83187;
  tUWide DEF__1_CONCAT_add_entry_put___d966;
  tUWide DEF_n_value__h31754;
  tUWide DEF_n_value__h81551;
  tUWide DEF_ret_ifc_dmhc_is_hit_wire_whas__37_AND_ret_ifc__ETC___d949;
  tUWide DEF_re_value__h84534;
  tUWide DEF_ret_ifc_dmhc_hash_units_0_g_table_a_read__98_B_ETC___d774;
  tUWide DEF_ret_ifc_dmhc_hash_units_0_g_table_a_read__98_B_ETC___d772;
 
 /* Rules */
 public:
  void RL_ret_ifc_dmhc_hash_units_0_init_table();
  void RL_ret_ifc_dmhc_hash_units_1_init_table();
  void RL_ret_ifc_dmhc_hash_units_2_init_table();
  void RL_ret_ifc_dmhc_hash_units_3_init_table();
  void RL_ret_ifc_dmhc_ldvn_start_reg__dreg_update();
  void RL_ret_ifc_dmhc_ldvn_state_handle_abort();
  void RL_ret_ifc_dmhc_ldvn_state_fired__dreg_update();
  void RL_ret_ifc_dmhc_ldvn_state_every();
  void RL_ret_ifc_dmhc_ldvn_restart();
  void RL_ret_ifc_dmhc_ldvn_action_l22c9();
  void RL_ret_ifc_dmhc_ldvn_action_l30c9();
  void RL_ret_ifc_dmhc_ldvn_action_l41c9();
  void RL_ret_ifc_dmhc_ldvn_action_l52c9();
  void RL_ret_ifc_dmhc_ldvn_action_l60c9();
  void RL_ret_ifc_dmhc_ldvn_action_l99c9();
  void RL_ret_ifc_dmhc_ldvn_action_l107c9();
  void RL_ret_ifc_dmhc_ldvn_idle_l20c1();
  void RL_ret_ifc_dmhc_ldvn_fsm_start();
  void RL_ret_ifc_dmhc_mslot_replacement_start_reg__dreg_update();
  void RL_ret_ifc_dmhc_mslot_replacement_state_handle_abort();
  void RL_ret_ifc_dmhc_mslot_replacement_state_fired__dreg_update();
  void RL_ret_ifc_dmhc_mslot_replacement_state_every();
  void RL_ret_ifc_dmhc_mslot_replacement_restart();
  void RL_ret_ifc_dmhc_mslot_replacement_action_l121c9();
  void RL_ret_ifc_dmhc_mslot_replacement_action_l128c9();
  void RL_ret_ifc_dmhc_mslot_replacement_action_l138c9();
  void RL_ret_ifc_dmhc_mslot_replacement_action_l149c9();
  void RL_ret_ifc_dmhc_mslot_replacement_action_l164c9();
  void RL_ret_ifc_dmhc_mslot_replacement_action_l172c9();
  void RL_ret_ifc_dmhc_mslot_replacement_action_l182c9();
  void RL_ret_ifc_dmhc_mslot_replacement_action_l192c9();
  void RL_ret_ifc_dmhc_mslot_replacement_action_l201c9();
  void RL_ret_ifc_dmhc_mslot_replacement_action_l243c9();
  void RL_ret_ifc_dmhc_mslot_replacement_action_l251c9();
  void RL_ret_ifc_dmhc_mslot_replacement_action_l258c9();
  void RL_ret_ifc_dmhc_mslot_replacement_idle_l119c1();
  void RL_ret_ifc_dmhc_mslot_replacement_fsm_start();
  void RL_ret_ifc_dmhc_init_tables();
  void RL_ret_ifc_dmhc_lookup_gtables();
  void RL_ret_ifc_dmhc_lookup_mtable();
  void RL_ret_ifc_do_read();
  void RL_ret_ifc_do_delay();
  void RL_ret_ifc_do_resp();
  void __me_check_9();
  void __me_check_10();
  void __me_check_11();
  void __me_check_12();
  void __me_check_13();
  void __me_check_14();
  void __me_check_23();
  void __me_check_24();
  void __me_check_25();
  void __me_check_26();
  void __me_check_27();
  void __me_check_28();
  void __me_check_29();
  void __me_check_30();
  void __me_check_31();
  void __me_check_32();
  void __me_check_33();
 
 /* Methods */
 public:
  void METH_lookupPort_request_put(tUInt64 ARG_lookupPort_request_put);
  tUInt8 METH_RDY_lookupPort_request_put();
  tUWide METH_lookupPort_response_get();
  tUInt8 METH_RDY_lookupPort_response_get();
  void METH_add_entry_put(tUWide ARG_add_entry_put);
  tUInt8 METH_RDY_add_entry_put();
  void METH_delete_entry_put(tUInt8 ARG_delete_entry_put);
  tUInt8 METH_RDY_delete_entry_put();
  void METH_modify_entry_put(tUWide ARG_modify_entry_put);
  tUInt8 METH_RDY_modify_entry_put();
 
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
  void dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mkMatchTable_ModuleIfIfEqual &backing);
  void vcd_defs(tVCDDumpType dt, MOD_mkMatchTable_ModuleIfIfEqual &backing);
  void vcd_prims(tVCDDumpType dt, MOD_mkMatchTable_ModuleIfIfEqual &backing);
};

#endif /* ifndef __mkMatchTable_ModuleIfIfEqual_h__ */
