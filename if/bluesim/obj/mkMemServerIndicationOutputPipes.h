/*
 * Generated by Bluespec Compiler, version 2014.07.A (build 34078, 2014-07-30)
 * 
 * On Sun Jun  4 11:11:32 CST 2017
 * 
 */

/* Generation options: */
#ifndef __mkMemServerIndicationOutputPipes_h__
#define __mkMemServerIndicationOutputPipes_h__

#include "bluesim_types.h"
#include "bs_module.h"
#include "bluesim_primitives.h"
#include "bs_vcd.h"


/* Class declaration for the mkMemServerIndicationOutputPipes module */
class MOD_mkMemServerIndicationOutputPipes : public Module {
 
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
  MOD_Reg<tUInt64> INST_addrResponse_responseAdapter_bits;
  MOD_Reg<tUInt8> INST_addrResponse_responseAdapter_count;
  MOD_Reg<tUInt8> INST_addrResponse_responseAdapter_notEmptyReg;
  MOD_Reg<tUInt8> INST_addrResponse_responseAdapter_shift;
  MOD_Reg<tUWide> INST_error_responseAdapter_bits;
  MOD_Reg<tUInt8> INST_error_responseAdapter_count;
  MOD_Reg<tUInt8> INST_error_responseAdapter_notEmptyReg;
  MOD_Reg<tUInt32> INST_error_responseAdapter_shift;
  MOD_Reg<tUInt64> INST_reportMemoryTraffic_responseAdapter_bits;
  MOD_Reg<tUInt8> INST_reportMemoryTraffic_responseAdapter_count;
  MOD_Reg<tUInt8> INST_reportMemoryTraffic_responseAdapter_notEmptyReg;
  MOD_Reg<tUInt8> INST_reportMemoryTraffic_responseAdapter_shift;
  MOD_Reg<tUWide> INST_reportStateDbg_responseAdapter_bits;
  MOD_Reg<tUInt8> INST_reportStateDbg_responseAdapter_count;
  MOD_Reg<tUInt8> INST_reportStateDbg_responseAdapter_notEmptyReg;
  MOD_Reg<tUInt8> INST_reportStateDbg_responseAdapter_shift;
 
 /* Constructor */
 public:
  MOD_mkMemServerIndicationOutputPipes(tSimStateHdl simHdl, char const *name, Module *parent);
 
 /* Symbol init methods */
 private:
  void init_symbols_0();
 
 /* Reset signal definitions */
 private:
  tUInt8 PORT_RST_N;
 
 /* Port definitions */
 public:
  tUWide PORT_methods_error_enq_v;
  tUWide PORT_methods_reportStateDbg_enq_v;
 
 /* Publicly accessible definitions */
 public:
  tUInt8 DEF_error_responseAdapter_notEmptyReg__h1181;
  tUInt8 DEF_reportMemoryTraffic_responseAdapter_notEmptyReg__h1127;
  tUInt8 DEF_reportStateDbg_responseAdapter_notEmptyReg__h1049;
  tUInt8 DEF_addrResponse_responseAdapter_notEmptyReg__h995;
  tUInt8 DEF_NOT_error_responseAdapter_notEmptyReg___d8;
  tUInt8 DEF_NOT_reportMemoryTraffic_responseAdapter_notEmp_ETC___d6;
  tUInt8 DEF_NOT_reportStateDbg_responseAdapter_notEmptyReg___d4;
  tUInt8 DEF_NOT_addrResponse_responseAdapter_notEmptyReg___d2;
 
 /* Local definitions */
 private:
  tUWide DEF_x__h1927;
  tUWide DEF_x__h1623;
  tUInt64 DEF_x__h1775;
  tUInt64 DEF_x__h1471;
  tUWide DEF_error_responseAdapter_bits_BITS_159_TO_0___h2058;
  tUWide DEF_reportStateDbg_responseAdapter_bits_BITS_95_TO_0___h1754;
  tUWide DEF_x__h2043;
  tUWide DEF_x__h1739;
 
 /* Rules */
 public:
 
 /* Methods */
 public:
  tUInt32 METH_portalIfc_messageSize_size(tUInt32 ARG_portalIfc_messageSize_size_methodNumber);
  tUInt8 METH_RDY_portalIfc_messageSize_size();
  void METH_methods_addrResponse_enq(tUInt64 ARG_methods_addrResponse_enq_v);
  tUInt8 METH_RDY_methods_addrResponse_enq();
  tUInt8 METH_methods_addrResponse_notFull();
  tUInt8 METH_RDY_methods_addrResponse_notFull();
  void METH_methods_reportStateDbg_enq(tUWide ARG_methods_reportStateDbg_enq_v);
  tUInt8 METH_RDY_methods_reportStateDbg_enq();
  tUInt8 METH_methods_reportStateDbg_notFull();
  tUInt8 METH_RDY_methods_reportStateDbg_notFull();
  void METH_methods_reportMemoryTraffic_enq(tUInt64 ARG_methods_reportMemoryTraffic_enq_v);
  tUInt8 METH_RDY_methods_reportMemoryTraffic_enq();
  tUInt8 METH_methods_reportMemoryTraffic_notFull();
  tUInt8 METH_RDY_methods_reportMemoryTraffic_notFull();
  void METH_methods_error_enq(tUWide ARG_methods_error_enq_v);
  tUInt8 METH_RDY_methods_error_enq();
  tUInt8 METH_methods_error_notFull();
  tUInt8 METH_RDY_methods_error_notFull();
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
  tUInt32 METH_portalIfc_indications_2_first();
  tUInt8 METH_RDY_portalIfc_indications_2_first();
  void METH_portalIfc_indications_2_deq();
  tUInt8 METH_RDY_portalIfc_indications_2_deq();
  tUInt8 METH_portalIfc_indications_2_notEmpty();
  tUInt8 METH_RDY_portalIfc_indications_2_notEmpty();
  tUInt32 METH_portalIfc_indications_3_first();
  tUInt8 METH_RDY_portalIfc_indications_3_first();
  void METH_portalIfc_indications_3_deq();
  tUInt8 METH_RDY_portalIfc_indications_3_deq();
  tUInt8 METH_portalIfc_indications_3_notEmpty();
  tUInt8 METH_RDY_portalIfc_indications_3_notEmpty();
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
  void dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mkMemServerIndicationOutputPipes &backing);
  void vcd_defs(tVCDDumpType dt, MOD_mkMemServerIndicationOutputPipes &backing);
  void vcd_prims(tVCDDumpType dt, MOD_mkMemServerIndicationOutputPipes &backing);
};

#endif /* ifndef __mkMemServerIndicationOutputPipes_h__ */
