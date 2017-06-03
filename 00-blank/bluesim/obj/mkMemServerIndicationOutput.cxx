/*
 * Generated by Bluespec Compiler, version 2014.07.A (build 34078, 2014-07-30)
 * 
 * On Sat Jun  3 15:34:15 CST 2017
 * 
 */
#include "bluesim_primitives.h"
#include "mkMemServerIndicationOutput.h"


/* Constructor */
MOD_mkMemServerIndicationOutput::MOD_mkMemServerIndicationOutput(tSimStateHdl simHdl,
								 char const *name,
								 Module *parent)
  : Module(simHdl, name, parent),
    __clk_handle_0(BAD_CLOCK_HANDLE),
    INST_indicationPipes(simHdl, "indicationPipes", this),
    PORT_RST_N((tUInt8)1u),
    DEF_ifc_error_code_CONCAT_ifc_error_sglId_CONCAT_i_ETC___d2(192u),
    DEF_ifc_error_offset_CONCAT_ifc_error_extra___d1(128u)
{
  PORT_ifc_reportStateDbg_rec.setSize(128u);
  PORT_ifc_reportStateDbg_rec.clear();
  symbol_count = 2u;
  symbols = new tSym[symbol_count];
  init_symbols_0();
}


/* Symbol init fns */

void MOD_mkMemServerIndicationOutput::init_symbols_0()
{
  init_symbol(&symbols[0u], "ifc_reportStateDbg_rec", SYM_PORT, &PORT_ifc_reportStateDbg_rec, 128u);
  init_symbol(&symbols[1u], "indicationPipes", SYM_MODULE, &INST_indicationPipes);
}


/* Rule actions */


/* Methods */

tUInt32 MOD_mkMemServerIndicationOutput::METH_portalIfc_messageSize_size(tUInt32 ARG_portalIfc_messageSize_size_methodNumber)
{
  tUInt32 PORT_portalIfc_messageSize_size;
  PORT_portalIfc_messageSize_size = INST_indicationPipes.METH_portalIfc_messageSize_size(ARG_portalIfc_messageSize_size_methodNumber);
  return PORT_portalIfc_messageSize_size;
}

tUInt8 MOD_mkMemServerIndicationOutput::METH_RDY_portalIfc_messageSize_size()
{
  tUInt8 PORT_RDY_portalIfc_messageSize_size;
  tUInt8 DEF_CAN_FIRE_portalIfc_messageSize_size;
  DEF_CAN_FIRE_portalIfc_messageSize_size = (tUInt8)1u;
  PORT_RDY_portalIfc_messageSize_size = DEF_CAN_FIRE_portalIfc_messageSize_size;
  return PORT_RDY_portalIfc_messageSize_size;
}

tUInt32 MOD_mkMemServerIndicationOutput::METH_portalIfc_indications_0_first()
{
  tUInt32 PORT_portalIfc_indications_0_first;
  PORT_portalIfc_indications_0_first = INST_indicationPipes.METH_portalIfc_indications_0_first();
  return PORT_portalIfc_indications_0_first;
}

tUInt8 MOD_mkMemServerIndicationOutput::METH_RDY_portalIfc_indications_0_first()
{
  tUInt8 DEF_CAN_FIRE_portalIfc_indications_0_first;
  tUInt8 PORT_RDY_portalIfc_indications_0_first;
  DEF_CAN_FIRE_portalIfc_indications_0_first = INST_indicationPipes.METH_RDY_portalIfc_indications_0_first();
  PORT_RDY_portalIfc_indications_0_first = DEF_CAN_FIRE_portalIfc_indications_0_first;
  return PORT_RDY_portalIfc_indications_0_first;
}

void MOD_mkMemServerIndicationOutput::METH_portalIfc_indications_0_deq()
{
  INST_indicationPipes.METH_portalIfc_indications_0_deq();
}

tUInt8 MOD_mkMemServerIndicationOutput::METH_RDY_portalIfc_indications_0_deq()
{
  tUInt8 DEF_CAN_FIRE_portalIfc_indications_0_deq;
  tUInt8 PORT_RDY_portalIfc_indications_0_deq;
  DEF_CAN_FIRE_portalIfc_indications_0_deq = INST_indicationPipes.METH_RDY_portalIfc_indications_0_deq();
  PORT_RDY_portalIfc_indications_0_deq = DEF_CAN_FIRE_portalIfc_indications_0_deq;
  return PORT_RDY_portalIfc_indications_0_deq;
}

tUInt8 MOD_mkMemServerIndicationOutput::METH_portalIfc_indications_0_notEmpty()
{
  tUInt8 PORT_portalIfc_indications_0_notEmpty;
  PORT_portalIfc_indications_0_notEmpty = INST_indicationPipes.METH_portalIfc_indications_0_notEmpty();
  return PORT_portalIfc_indications_0_notEmpty;
}

tUInt8 MOD_mkMemServerIndicationOutput::METH_RDY_portalIfc_indications_0_notEmpty()
{
  tUInt8 DEF_CAN_FIRE_portalIfc_indications_0_notEmpty;
  tUInt8 PORT_RDY_portalIfc_indications_0_notEmpty;
  DEF_CAN_FIRE_portalIfc_indications_0_notEmpty = (tUInt8)1u;
  PORT_RDY_portalIfc_indications_0_notEmpty = DEF_CAN_FIRE_portalIfc_indications_0_notEmpty;
  return PORT_RDY_portalIfc_indications_0_notEmpty;
}

tUInt32 MOD_mkMemServerIndicationOutput::METH_portalIfc_indications_1_first()
{
  tUInt32 PORT_portalIfc_indications_1_first;
  PORT_portalIfc_indications_1_first = INST_indicationPipes.METH_portalIfc_indications_1_first();
  return PORT_portalIfc_indications_1_first;
}

tUInt8 MOD_mkMemServerIndicationOutput::METH_RDY_portalIfc_indications_1_first()
{
  tUInt8 DEF_CAN_FIRE_portalIfc_indications_1_first;
  tUInt8 PORT_RDY_portalIfc_indications_1_first;
  DEF_CAN_FIRE_portalIfc_indications_1_first = INST_indicationPipes.METH_RDY_portalIfc_indications_1_first();
  PORT_RDY_portalIfc_indications_1_first = DEF_CAN_FIRE_portalIfc_indications_1_first;
  return PORT_RDY_portalIfc_indications_1_first;
}

void MOD_mkMemServerIndicationOutput::METH_portalIfc_indications_1_deq()
{
  INST_indicationPipes.METH_portalIfc_indications_1_deq();
}

tUInt8 MOD_mkMemServerIndicationOutput::METH_RDY_portalIfc_indications_1_deq()
{
  tUInt8 DEF_CAN_FIRE_portalIfc_indications_1_deq;
  tUInt8 PORT_RDY_portalIfc_indications_1_deq;
  DEF_CAN_FIRE_portalIfc_indications_1_deq = INST_indicationPipes.METH_RDY_portalIfc_indications_1_deq();
  PORT_RDY_portalIfc_indications_1_deq = DEF_CAN_FIRE_portalIfc_indications_1_deq;
  return PORT_RDY_portalIfc_indications_1_deq;
}

tUInt8 MOD_mkMemServerIndicationOutput::METH_portalIfc_indications_1_notEmpty()
{
  tUInt8 PORT_portalIfc_indications_1_notEmpty;
  PORT_portalIfc_indications_1_notEmpty = INST_indicationPipes.METH_portalIfc_indications_1_notEmpty();
  return PORT_portalIfc_indications_1_notEmpty;
}

tUInt8 MOD_mkMemServerIndicationOutput::METH_RDY_portalIfc_indications_1_notEmpty()
{
  tUInt8 DEF_CAN_FIRE_portalIfc_indications_1_notEmpty;
  tUInt8 PORT_RDY_portalIfc_indications_1_notEmpty;
  DEF_CAN_FIRE_portalIfc_indications_1_notEmpty = (tUInt8)1u;
  PORT_RDY_portalIfc_indications_1_notEmpty = DEF_CAN_FIRE_portalIfc_indications_1_notEmpty;
  return PORT_RDY_portalIfc_indications_1_notEmpty;
}

tUInt32 MOD_mkMemServerIndicationOutput::METH_portalIfc_indications_2_first()
{
  tUInt32 PORT_portalIfc_indications_2_first;
  PORT_portalIfc_indications_2_first = INST_indicationPipes.METH_portalIfc_indications_2_first();
  return PORT_portalIfc_indications_2_first;
}

tUInt8 MOD_mkMemServerIndicationOutput::METH_RDY_portalIfc_indications_2_first()
{
  tUInt8 DEF_CAN_FIRE_portalIfc_indications_2_first;
  tUInt8 PORT_RDY_portalIfc_indications_2_first;
  DEF_CAN_FIRE_portalIfc_indications_2_first = INST_indicationPipes.METH_RDY_portalIfc_indications_2_first();
  PORT_RDY_portalIfc_indications_2_first = DEF_CAN_FIRE_portalIfc_indications_2_first;
  return PORT_RDY_portalIfc_indications_2_first;
}

void MOD_mkMemServerIndicationOutput::METH_portalIfc_indications_2_deq()
{
  INST_indicationPipes.METH_portalIfc_indications_2_deq();
}

tUInt8 MOD_mkMemServerIndicationOutput::METH_RDY_portalIfc_indications_2_deq()
{
  tUInt8 DEF_CAN_FIRE_portalIfc_indications_2_deq;
  tUInt8 PORT_RDY_portalIfc_indications_2_deq;
  DEF_CAN_FIRE_portalIfc_indications_2_deq = INST_indicationPipes.METH_RDY_portalIfc_indications_2_deq();
  PORT_RDY_portalIfc_indications_2_deq = DEF_CAN_FIRE_portalIfc_indications_2_deq;
  return PORT_RDY_portalIfc_indications_2_deq;
}

tUInt8 MOD_mkMemServerIndicationOutput::METH_portalIfc_indications_2_notEmpty()
{
  tUInt8 PORT_portalIfc_indications_2_notEmpty;
  PORT_portalIfc_indications_2_notEmpty = INST_indicationPipes.METH_portalIfc_indications_2_notEmpty();
  return PORT_portalIfc_indications_2_notEmpty;
}

tUInt8 MOD_mkMemServerIndicationOutput::METH_RDY_portalIfc_indications_2_notEmpty()
{
  tUInt8 DEF_CAN_FIRE_portalIfc_indications_2_notEmpty;
  tUInt8 PORT_RDY_portalIfc_indications_2_notEmpty;
  DEF_CAN_FIRE_portalIfc_indications_2_notEmpty = (tUInt8)1u;
  PORT_RDY_portalIfc_indications_2_notEmpty = DEF_CAN_FIRE_portalIfc_indications_2_notEmpty;
  return PORT_RDY_portalIfc_indications_2_notEmpty;
}

tUInt32 MOD_mkMemServerIndicationOutput::METH_portalIfc_indications_3_first()
{
  tUInt32 PORT_portalIfc_indications_3_first;
  PORT_portalIfc_indications_3_first = INST_indicationPipes.METH_portalIfc_indications_3_first();
  return PORT_portalIfc_indications_3_first;
}

tUInt8 MOD_mkMemServerIndicationOutput::METH_RDY_portalIfc_indications_3_first()
{
  tUInt8 DEF_CAN_FIRE_portalIfc_indications_3_first;
  tUInt8 PORT_RDY_portalIfc_indications_3_first;
  DEF_CAN_FIRE_portalIfc_indications_3_first = INST_indicationPipes.METH_RDY_portalIfc_indications_3_first();
  PORT_RDY_portalIfc_indications_3_first = DEF_CAN_FIRE_portalIfc_indications_3_first;
  return PORT_RDY_portalIfc_indications_3_first;
}

void MOD_mkMemServerIndicationOutput::METH_portalIfc_indications_3_deq()
{
  INST_indicationPipes.METH_portalIfc_indications_3_deq();
}

tUInt8 MOD_mkMemServerIndicationOutput::METH_RDY_portalIfc_indications_3_deq()
{
  tUInt8 DEF_CAN_FIRE_portalIfc_indications_3_deq;
  tUInt8 PORT_RDY_portalIfc_indications_3_deq;
  DEF_CAN_FIRE_portalIfc_indications_3_deq = INST_indicationPipes.METH_RDY_portalIfc_indications_3_deq();
  PORT_RDY_portalIfc_indications_3_deq = DEF_CAN_FIRE_portalIfc_indications_3_deq;
  return PORT_RDY_portalIfc_indications_3_deq;
}

tUInt8 MOD_mkMemServerIndicationOutput::METH_portalIfc_indications_3_notEmpty()
{
  tUInt8 PORT_portalIfc_indications_3_notEmpty;
  PORT_portalIfc_indications_3_notEmpty = INST_indicationPipes.METH_portalIfc_indications_3_notEmpty();
  return PORT_portalIfc_indications_3_notEmpty;
}

tUInt8 MOD_mkMemServerIndicationOutput::METH_RDY_portalIfc_indications_3_notEmpty()
{
  tUInt8 DEF_CAN_FIRE_portalIfc_indications_3_notEmpty;
  tUInt8 PORT_RDY_portalIfc_indications_3_notEmpty;
  DEF_CAN_FIRE_portalIfc_indications_3_notEmpty = (tUInt8)1u;
  PORT_RDY_portalIfc_indications_3_notEmpty = DEF_CAN_FIRE_portalIfc_indications_3_notEmpty;
  return PORT_RDY_portalIfc_indications_3_notEmpty;
}

tUInt8 MOD_mkMemServerIndicationOutput::METH_portalIfc_intr_status()
{
  tUInt8 PORT_portalIfc_intr_status;
  PORT_portalIfc_intr_status = INST_indicationPipes.METH_portalIfc_intr_status();
  return PORT_portalIfc_intr_status;
}

tUInt8 MOD_mkMemServerIndicationOutput::METH_RDY_portalIfc_intr_status()
{
  tUInt8 PORT_RDY_portalIfc_intr_status;
  tUInt8 DEF_CAN_FIRE_portalIfc_intr_status;
  DEF_CAN_FIRE_portalIfc_intr_status = (tUInt8)1u;
  PORT_RDY_portalIfc_intr_status = DEF_CAN_FIRE_portalIfc_intr_status;
  return PORT_RDY_portalIfc_intr_status;
}

tUInt32 MOD_mkMemServerIndicationOutput::METH_portalIfc_intr_channel()
{
  tUInt32 PORT_portalIfc_intr_channel;
  PORT_portalIfc_intr_channel = INST_indicationPipes.METH_portalIfc_intr_channel();
  return PORT_portalIfc_intr_channel;
}

tUInt8 MOD_mkMemServerIndicationOutput::METH_RDY_portalIfc_intr_channel()
{
  tUInt8 PORT_RDY_portalIfc_intr_channel;
  tUInt8 DEF_CAN_FIRE_portalIfc_intr_channel;
  DEF_CAN_FIRE_portalIfc_intr_channel = (tUInt8)1u;
  PORT_RDY_portalIfc_intr_channel = DEF_CAN_FIRE_portalIfc_intr_channel;
  return PORT_RDY_portalIfc_intr_channel;
}

void MOD_mkMemServerIndicationOutput::METH_ifc_addrResponse(tUInt64 ARG_ifc_addrResponse_physAddr)
{
  INST_indicationPipes.METH_methods_addrResponse_enq(ARG_ifc_addrResponse_physAddr);
}

tUInt8 MOD_mkMemServerIndicationOutput::METH_RDY_ifc_addrResponse()
{
  tUInt8 PORT_RDY_ifc_addrResponse;
  tUInt8 DEF_CAN_FIRE_ifc_addrResponse;
  DEF_CAN_FIRE_ifc_addrResponse = INST_indicationPipes.METH_RDY_methods_addrResponse_enq();
  PORT_RDY_ifc_addrResponse = DEF_CAN_FIRE_ifc_addrResponse;
  return PORT_RDY_ifc_addrResponse;
}

void MOD_mkMemServerIndicationOutput::METH_ifc_reportStateDbg(tUWide ARG_ifc_reportStateDbg_rec)
{
  PORT_ifc_reportStateDbg_rec = ARG_ifc_reportStateDbg_rec;
  INST_indicationPipes.METH_methods_reportStateDbg_enq(ARG_ifc_reportStateDbg_rec);
}

tUInt8 MOD_mkMemServerIndicationOutput::METH_RDY_ifc_reportStateDbg()
{
  tUInt8 PORT_RDY_ifc_reportStateDbg;
  tUInt8 DEF_CAN_FIRE_ifc_reportStateDbg;
  DEF_CAN_FIRE_ifc_reportStateDbg = INST_indicationPipes.METH_RDY_methods_reportStateDbg_enq();
  PORT_RDY_ifc_reportStateDbg = DEF_CAN_FIRE_ifc_reportStateDbg;
  return PORT_RDY_ifc_reportStateDbg;
}

void MOD_mkMemServerIndicationOutput::METH_ifc_reportMemoryTraffic(tUInt64 ARG_ifc_reportMemoryTraffic_words)
{
  INST_indicationPipes.METH_methods_reportMemoryTraffic_enq(ARG_ifc_reportMemoryTraffic_words);
}

tUInt8 MOD_mkMemServerIndicationOutput::METH_RDY_ifc_reportMemoryTraffic()
{
  tUInt8 PORT_RDY_ifc_reportMemoryTraffic;
  tUInt8 DEF_CAN_FIRE_ifc_reportMemoryTraffic;
  DEF_CAN_FIRE_ifc_reportMemoryTraffic = INST_indicationPipes.METH_RDY_methods_reportMemoryTraffic_enq();
  PORT_RDY_ifc_reportMemoryTraffic = DEF_CAN_FIRE_ifc_reportMemoryTraffic;
  return PORT_RDY_ifc_reportMemoryTraffic;
}

void MOD_mkMemServerIndicationOutput::METH_ifc_error(tUInt32 ARG_ifc_error_code,
						     tUInt32 ARG_ifc_error_sglId,
						     tUInt64 ARG_ifc_error_offset,
						     tUInt64 ARG_ifc_error_extra)
{
  DEF_ifc_error_offset_CONCAT_ifc_error_extra___d1.set_whole_word((tUInt32)(ARG_ifc_error_offset >> 32u),
								  3u).build_concat((((tUInt64)((tUInt32)(ARG_ifc_error_offset))) << 32u) | (tUInt64)((tUInt32)(ARG_ifc_error_extra >> 32u)),
										   32u,
										   64u).set_whole_word((tUInt32)(ARG_ifc_error_extra),
												       0u);
  DEF_ifc_error_code_CONCAT_ifc_error_sglId_CONCAT_i_ETC___d2.build_concat(bs_wide_tmp(96u).set_whole_word(ARG_ifc_error_code,
													   2u).set_whole_word(ARG_ifc_error_sglId,
															      1u).set_whole_word(DEF_ifc_error_offset_CONCAT_ifc_error_extra___d1.get_whole_word(3u),
																		 0u),
									   96u,
									   96u).set_whole_word(DEF_ifc_error_offset_CONCAT_ifc_error_extra___d1.get_whole_word(2u),
											       2u).set_whole_word(DEF_ifc_error_offset_CONCAT_ifc_error_extra___d1.get_whole_word(1u),
														  1u).set_whole_word(DEF_ifc_error_offset_CONCAT_ifc_error_extra___d1.get_whole_word(0u),
																     0u);
  INST_indicationPipes.METH_methods_error_enq(DEF_ifc_error_code_CONCAT_ifc_error_sglId_CONCAT_i_ETC___d2);
}

tUInt8 MOD_mkMemServerIndicationOutput::METH_RDY_ifc_error()
{
  tUInt8 PORT_RDY_ifc_error;
  tUInt8 DEF_CAN_FIRE_ifc_error;
  DEF_CAN_FIRE_ifc_error = INST_indicationPipes.METH_RDY_methods_error_enq();
  PORT_RDY_ifc_error = DEF_CAN_FIRE_ifc_error;
  return PORT_RDY_ifc_error;
}


/* Reset routines */

void MOD_mkMemServerIndicationOutput::reset_RST_N(tUInt8 ARG_rst_in)
{
  PORT_RST_N = ARG_rst_in;
  INST_indicationPipes.reset_RST_N(ARG_rst_in);
}


/* Static handles to reset routines */


/* Functions for the parent module to register its reset fns */


/* Functions to set the elaborated clock id */

void MOD_mkMemServerIndicationOutput::set_clk_0(char const *s)
{
  __clk_handle_0 = bk_get_or_define_clock(sim_hdl, s);
}


/* State dumping routine */
void MOD_mkMemServerIndicationOutput::dump_state(unsigned int indent)
{
  printf("%*s%s:\n", indent, "", inst_name);
  INST_indicationPipes.dump_state(indent + 2u);
}


/* VCD dumping routines */

unsigned int MOD_mkMemServerIndicationOutput::dump_VCD_defs(unsigned int levels)
{
  vcd_write_scope_start(sim_hdl, inst_name);
  vcd_num = vcd_reserve_ids(sim_hdl, 4u);
  unsigned int num = vcd_num;
  for (unsigned int clk = 0u; clk < bk_num_clocks(sim_hdl); ++clk)
    vcd_add_clock_def(sim_hdl, this, bk_clock_name(sim_hdl, clk), bk_clock_vcd_num(sim_hdl, clk));
  vcd_write_def(sim_hdl, bk_clock_vcd_num(sim_hdl, __clk_handle_0), "CLK", 1u);
  vcd_write_def(sim_hdl, num++, "RST_N", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "ifc_error_code_CONCAT_ifc_error_sglId_CONCAT_i_ETC___d2", 192u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "ifc_error_offset_CONCAT_ifc_error_extra___d1", 128u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "ifc_reportStateDbg_rec", 128u);
  if (levels != 1u)
  {
    unsigned int l = levels == 0u ? 0u : levels - 1u;
    num = INST_indicationPipes.dump_VCD_defs(l);
  }
  vcd_write_scope_end(sim_hdl);
  return num;
}

void MOD_mkMemServerIndicationOutput::dump_VCD(tVCDDumpType dt,
					       unsigned int levels,
					       MOD_mkMemServerIndicationOutput &backing)
{
  vcd_defs(dt, backing);
  if (levels != 1u)
    vcd_submodules(dt, levels - 1u, backing);
}

void MOD_mkMemServerIndicationOutput::vcd_defs(tVCDDumpType dt,
					       MOD_mkMemServerIndicationOutput &backing)
{
  unsigned int num = vcd_num;
  if (dt == VCD_DUMP_XS)
  {
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 192u);
    vcd_write_x(sim_hdl, num++, 128u);
    vcd_write_x(sim_hdl, num++, 128u);
  }
  else
    if (dt == VCD_DUMP_CHANGES)
    {
      if ((backing.PORT_RST_N) != PORT_RST_N)
      {
	vcd_write_val(sim_hdl, num, PORT_RST_N, 1u);
	backing.PORT_RST_N = PORT_RST_N;
      }
      ++num;
      if ((backing.DEF_ifc_error_code_CONCAT_ifc_error_sglId_CONCAT_i_ETC___d2) != DEF_ifc_error_code_CONCAT_ifc_error_sglId_CONCAT_i_ETC___d2)
      {
	vcd_write_val(sim_hdl, num, DEF_ifc_error_code_CONCAT_ifc_error_sglId_CONCAT_i_ETC___d2, 192u);
	backing.DEF_ifc_error_code_CONCAT_ifc_error_sglId_CONCAT_i_ETC___d2 = DEF_ifc_error_code_CONCAT_ifc_error_sglId_CONCAT_i_ETC___d2;
      }
      ++num;
      if ((backing.DEF_ifc_error_offset_CONCAT_ifc_error_extra___d1) != DEF_ifc_error_offset_CONCAT_ifc_error_extra___d1)
      {
	vcd_write_val(sim_hdl, num, DEF_ifc_error_offset_CONCAT_ifc_error_extra___d1, 128u);
	backing.DEF_ifc_error_offset_CONCAT_ifc_error_extra___d1 = DEF_ifc_error_offset_CONCAT_ifc_error_extra___d1;
      }
      ++num;
      if ((backing.PORT_ifc_reportStateDbg_rec) != PORT_ifc_reportStateDbg_rec)
      {
	vcd_write_val(sim_hdl, num, PORT_ifc_reportStateDbg_rec, 128u);
	backing.PORT_ifc_reportStateDbg_rec = PORT_ifc_reportStateDbg_rec;
      }
      ++num;
    }
    else
    {
      vcd_write_val(sim_hdl, num++, PORT_RST_N, 1u);
      backing.PORT_RST_N = PORT_RST_N;
      vcd_write_val(sim_hdl, num++, DEF_ifc_error_code_CONCAT_ifc_error_sglId_CONCAT_i_ETC___d2, 192u);
      backing.DEF_ifc_error_code_CONCAT_ifc_error_sglId_CONCAT_i_ETC___d2 = DEF_ifc_error_code_CONCAT_ifc_error_sglId_CONCAT_i_ETC___d2;
      vcd_write_val(sim_hdl, num++, DEF_ifc_error_offset_CONCAT_ifc_error_extra___d1, 128u);
      backing.DEF_ifc_error_offset_CONCAT_ifc_error_extra___d1 = DEF_ifc_error_offset_CONCAT_ifc_error_extra___d1;
      vcd_write_val(sim_hdl, num++, PORT_ifc_reportStateDbg_rec, 128u);
      backing.PORT_ifc_reportStateDbg_rec = PORT_ifc_reportStateDbg_rec;
    }
}

void MOD_mkMemServerIndicationOutput::vcd_submodules(tVCDDumpType dt,
						     unsigned int levels,
						     MOD_mkMemServerIndicationOutput &backing)
{
  INST_indicationPipes.dump_VCD(dt, levels, backing.INST_indicationPipes);
}
