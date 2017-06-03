/*
 * Generated by Bluespec Compiler, version 2014.07.A (build 34078, 2014-07-30)
 * 
 * On Sat Jun  3 21:38:32 CST 2017
 * 
 */

/* Generation options: */
#ifndef __mkMainIndicationOutputPipes_h__
#define __mkMainIndicationOutputPipes_h__

#include "bluesim_types.h"
#include "bs_module.h"
#include "bluesim_primitives.h"
#include "bs_vcd.h"


/* Class declaration for the mkMainIndicationOutputPipes module */
class MOD_mkMainIndicationOutputPipes : public Module {
 
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
  MOD_Reg<tUWide> INST_read_pktcap_perf_info_resp_responseAdapter_bits;
  MOD_Reg<tUInt8> INST_read_pktcap_perf_info_resp_responseAdapter_count;
  MOD_Reg<tUInt8> INST_read_pktcap_perf_info_resp_responseAdapter_notEmptyReg;
  MOD_Reg<tUInt32> INST_read_pktcap_perf_info_resp_responseAdapter_shift;
  MOD_Reg<tUInt32> INST_read_version_rsp_responseAdapter_bits;
  MOD_Reg<tUInt8> INST_read_version_rsp_responseAdapter_notEmptyReg;
  MOD_Reg<tUInt8> INST_read_version_rsp_responseAdapter_shift;
 
 /* Constructor */
 public:
  MOD_mkMainIndicationOutputPipes(tSimStateHdl simHdl, char const *name, Module *parent);
 
 /* Symbol init methods */
 private:
  void init_symbols_0();
 
 /* Reset signal definitions */
 private:
  tUInt8 PORT_RST_N;
 
 /* Port definitions */
 public:
  tUWide PORT_methods_read_pktcap_perf_info_resp_enq_v;
 
 /* Publicly accessible definitions */
 public:
  tUInt8 DEF_read_pktcap_perf_info_resp_responseAdapter_notEmptyReg__h545;
  tUInt8 DEF_read_version_rsp_responseAdapter_notEmptyReg__h491;
  tUInt8 DEF_NOT_read_pktcap_perf_info_resp_responseAdapter_ETC___d4;
  tUInt8 DEF_NOT_read_version_rsp_responseAdapter_notEmptyReg___d2;
 
 /* Local definitions */
 private:
  tUWide DEF_x__h825;
  tUWide DEF_read_pktcap_perf_info_resp_responseAdapter_bits_BITS_159_TO_0___h956;
  tUWide DEF_x__h941;
 
 /* Rules */
 public:
 
 /* Methods */
 public:
  tUInt32 METH_portalIfc_messageSize_size(tUInt32 ARG_portalIfc_messageSize_size_methodNumber);
  tUInt8 METH_RDY_portalIfc_messageSize_size();
  void METH_methods_read_version_rsp_enq(tUInt32 ARG_methods_read_version_rsp_enq_v);
  tUInt8 METH_RDY_methods_read_version_rsp_enq();
  tUInt8 METH_methods_read_version_rsp_notFull();
  tUInt8 METH_RDY_methods_read_version_rsp_notFull();
  void METH_methods_read_pktcap_perf_info_resp_enq(tUWide ARG_methods_read_pktcap_perf_info_resp_enq_v);
  tUInt8 METH_RDY_methods_read_pktcap_perf_info_resp_enq();
  tUInt8 METH_methods_read_pktcap_perf_info_resp_notFull();
  tUInt8 METH_RDY_methods_read_pktcap_perf_info_resp_notFull();
  tUInt32 METH_portalIfc_indications_0_first();
  tUInt8 METH_RDY_portalIfc_indications_0_first();
  void METH_portalIfc_indications_0_deq();
  tUInt8 METH_RDY_portalIfc_indications_0_deq();
  tUInt8 METH_portalIfc_indications_0_notEmpty();
  tUInt8 METH_RDY_portalIfc_indications_0_notEmpty();
  tUInt32 METH_portalIfc_indications_1_first();
  tUInt8 METH_RDY_portalIfc_indications_1_first();
  void METH_portalIfc_indications_1_deq();
  tUInt8 METH_RDY_portalIfc_indications_1_deq();
  tUInt8 METH_portalIfc_indications_1_notEmpty();
  tUInt8 METH_RDY_portalIfc_indications_1_notEmpty();
  tUInt8 METH_portalIfc_intr_status();
  tUInt8 METH_RDY_portalIfc_intr_status();
  tUInt32 METH_portalIfc_intr_channel();
  tUInt8 METH_RDY_portalIfc_intr_channel();
 
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
  void dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mkMainIndicationOutputPipes &backing);
  void vcd_defs(tVCDDumpType dt, MOD_mkMainIndicationOutputPipes &backing);
  void vcd_prims(tVCDDumpType dt, MOD_mkMainIndicationOutputPipes &backing);
};

#endif /* ifndef __mkMainIndicationOutputPipes_h__ */
