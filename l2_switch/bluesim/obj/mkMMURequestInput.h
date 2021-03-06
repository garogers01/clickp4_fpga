/*
 * Generated by Bluespec Compiler, version 2014.07.A (build 34078, 2014-07-30)
 * 
 * On Sun Jun  4 00:06:35 CST 2017
 * 
 */

/* Generation options: */
#ifndef __mkMMURequestInput_h__
#define __mkMMURequestInput_h__

#include "bluesim_types.h"
#include "bs_module.h"
#include "bluesim_primitives.h"
#include "bs_vcd.h"


/* Class declaration for the mkMMURequestInput module */
class MOD_mkMMURequestInput : public Module {
 
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
  MOD_Reg<tUInt32> INST_idRequest_requestAdapter_fbnbuff;
  MOD_Fifo<tUInt32> INST_idRequest_requestAdapter_fifo;
  MOD_Reg<tUInt32> INST_idReturn_requestAdapter_fbnbuff;
  MOD_Fifo<tUInt32> INST_idReturn_requestAdapter_fifo;
  MOD_Reg<tUInt8> INST_region_requestAdapter_count;
  MOD_Reg<tUWide> INST_region_requestAdapter_fbnbuff;
  MOD_Fifo<tUWide> INST_region_requestAdapter_fifo;
  MOD_Reg<tUInt8> INST_setInterface_requestAdapter_count;
  MOD_Reg<tUInt64> INST_setInterface_requestAdapter_fbnbuff;
  MOD_Fifo<tUInt64> INST_setInterface_requestAdapter_fifo;
  MOD_Reg<tUInt8> INST_sglist_requestAdapter_count;
  MOD_Reg<tUWide> INST_sglist_requestAdapter_fbnbuff;
  MOD_Fifo<tUWide> INST_sglist_requestAdapter_fifo;
 
 /* Constructor */
 public:
  MOD_mkMMURequestInput(tSimStateHdl simHdl, char const *name, Module *parent);
 
 /* Symbol init methods */
 private:
  void init_symbols_0();
 
 /* Reset signal definitions */
 private:
  tUInt8 PORT_RST_N;
 
 /* Port definitions */
 public:
  tUWide PORT_pipes_region_PipeOut_first;
  tUWide PORT_pipes_sglist_PipeOut_first;
 
 /* Publicly accessible definitions */
 public:
  tUInt8 DEF_setInterface_requestAdapter_fifo_i_notEmpty____d53;
  tUInt8 DEF_idReturn_requestAdapter_fifo_i_notEmpty____d52;
  tUInt8 DEF_idRequest_requestAdapter_fifo_i_notEmpty____d51;
  tUInt8 DEF_region_requestAdapter_fifo_i_notEmpty____d50;
  tUInt8 DEF_sglist_requestAdapter_fifo_i_notEmpty____d49;
  tUInt8 DEF_idReturn_requestAdapter_fifo_notFull____d36;
  tUInt8 DEF_idRequest_requestAdapter_fifo_notFull____d34;
  tUInt8 DEF__read__h341;
  tUInt8 DEF__read__h133;
  tUInt8 DEF_setInterface_requestAdapter_fifo_notFull____d45;
  tUInt8 DEF_setInterface_requestAdapter_count__h1794;
  tUInt8 DEF_region_requestAdapter_fifo_notFull____d29;
  tUInt8 DEF_sglist_requestAdapter_fifo_notFull____d16;
  tUInt8 DEF_region_requestAdapter_count_4_EQ_12___d25;
  tUInt8 DEF_sglist_requestAdapter_count_1_EQ_4___d12;
  tUInt8 DEF_NOT_setInterface_requestAdapter_count_1___d42;
 
 /* Local definitions */
 private:
  tUWide DEF__read__h292;
  tUWide DEF__read__h84;
  tUWide DEF__read_BITS_383_TO_0___h1459;
  tUWide DEF__read_BITS_127_TO_0___h1339;
  tUWide DEF_newbuff__h1432;
  tUWide DEF_newbuff__h1312;
 
 /* Rules */
 public:
 
 /* Methods */
 public:
  tUInt32 METH_portalIfc_messageSize_size(tUInt32 ARG_portalIfc_messageSize_size_methodNumber);
  tUInt8 METH_RDY_portalIfc_messageSize_size();
  tUInt8 METH_portalIfc_intr_status();
  tUInt8 METH_RDY_portalIfc_intr_status();
  tUInt32 METH_portalIfc_intr_channel();
  tUInt8 METH_RDY_portalIfc_intr_channel();
  void METH_portalIfc_requests_0_enq(tUInt32 ARG_portalIfc_requests_0_enq_v);
  tUInt8 METH_RDY_portalIfc_requests_0_enq();
  tUInt8 METH_portalIfc_requests_0_notFull();
  tUInt8 METH_RDY_portalIfc_requests_0_notFull();
  void METH_portalIfc_requests_1_enq(tUInt32 ARG_portalIfc_requests_1_enq_v);
  tUInt8 METH_RDY_portalIfc_requests_1_enq();
  tUInt8 METH_portalIfc_requests_1_notFull();
  tUInt8 METH_RDY_portalIfc_requests_1_notFull();
  void METH_portalIfc_requests_2_enq(tUInt32 ARG_portalIfc_requests_2_enq_v);
  tUInt8 METH_RDY_portalIfc_requests_2_enq();
  tUInt8 METH_portalIfc_requests_2_notFull();
  tUInt8 METH_RDY_portalIfc_requests_2_notFull();
  void METH_portalIfc_requests_3_enq(tUInt32 ARG_portalIfc_requests_3_enq_v);
  tUInt8 METH_RDY_portalIfc_requests_3_enq();
  tUInt8 METH_portalIfc_requests_3_notFull();
  tUInt8 METH_RDY_portalIfc_requests_3_notFull();
  void METH_portalIfc_requests_4_enq(tUInt32 ARG_portalIfc_requests_4_enq_v);
  tUInt8 METH_RDY_portalIfc_requests_4_enq();
  tUInt8 METH_portalIfc_requests_4_notFull();
  tUInt8 METH_RDY_portalIfc_requests_4_notFull();
  tUWide METH_pipes_sglist_PipeOut_first();
  tUInt8 METH_RDY_pipes_sglist_PipeOut_first();
  void METH_pipes_sglist_PipeOut_deq();
  tUInt8 METH_RDY_pipes_sglist_PipeOut_deq();
  tUInt8 METH_pipes_sglist_PipeOut_notEmpty();
  tUInt8 METH_RDY_pipes_sglist_PipeOut_notEmpty();
  tUWide METH_pipes_region_PipeOut_first();
  tUInt8 METH_RDY_pipes_region_PipeOut_first();
  void METH_pipes_region_PipeOut_deq();
  tUInt8 METH_RDY_pipes_region_PipeOut_deq();
  tUInt8 METH_pipes_region_PipeOut_notEmpty();
  tUInt8 METH_RDY_pipes_region_PipeOut_notEmpty();
  tUInt32 METH_pipes_idRequest_PipeOut_first();
  tUInt8 METH_RDY_pipes_idRequest_PipeOut_first();
  void METH_pipes_idRequest_PipeOut_deq();
  tUInt8 METH_RDY_pipes_idRequest_PipeOut_deq();
  tUInt8 METH_pipes_idRequest_PipeOut_notEmpty();
  tUInt8 METH_RDY_pipes_idRequest_PipeOut_notEmpty();
  tUInt32 METH_pipes_idReturn_PipeOut_first();
  tUInt8 METH_RDY_pipes_idReturn_PipeOut_first();
  void METH_pipes_idReturn_PipeOut_deq();
  tUInt8 METH_RDY_pipes_idReturn_PipeOut_deq();
  tUInt8 METH_pipes_idReturn_PipeOut_notEmpty();
  tUInt8 METH_RDY_pipes_idReturn_PipeOut_notEmpty();
  tUInt64 METH_pipes_setInterface_PipeOut_first();
  tUInt8 METH_RDY_pipes_setInterface_PipeOut_first();
  void METH_pipes_setInterface_PipeOut_deq();
  tUInt8 METH_RDY_pipes_setInterface_PipeOut_deq();
  tUInt8 METH_pipes_setInterface_PipeOut_notEmpty();
  tUInt8 METH_RDY_pipes_setInterface_PipeOut_notEmpty();
 
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
  void dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mkMMURequestInput &backing);
  void vcd_defs(tVCDDumpType dt, MOD_mkMMURequestInput &backing);
  void vcd_prims(tVCDDumpType dt, MOD_mkMMURequestInput &backing);
};

#endif /* ifndef __mkMMURequestInput_h__ */
