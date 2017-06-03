/*
 * Generated by Bluespec Compiler, version 2014.07.A (build 34078, 2014-07-30)
 * 
 * On Sat Jun  3 21:38:32 CST 2017
 * 
 */
#include "bluesim_primitives.h"
#include "mkBoardSynth.h"


/* Constructor */
MOD_mkBoardSynth::MOD_mkBoardSynth(tSimStateHdl simHdl, char const *name, Module *parent)
  : Module(simHdl, name, parent),
    __clk_handle_0(BAD_CLOCK_HANDLE),
    __clk_handle_1(BAD_CLOCK_HANDLE),
    __clk_handle_2(BAD_CLOCK_HANDLE),
    __clk_handle_3(BAD_CLOCK_HANDLE),
    __clk_handle_4(BAD_CLOCK_HANDLE),
    INST__unnamed_(simHdl, "_unnamed_", this, 1u, (tUInt8)0u),
    INST_clocks_clock156mhz(simHdl, "clocks_clock156mhz", this, 8u, 8u, 0u, 0u, 1u),
    INST_clocks_clock50mhz(simHdl, "clocks_clock50mhz", this, 25u, 25u, 0u, 0u, 1u),
    INST_clocks_clock644mhz(simHdl, "clocks_clock644mhz", this, 2u, 2u, 0u, 0u, 1u),
    INST_clocks_reset156n(simHdl, "clocks_reset156n", this, 1u, (tUInt8)0u),
    INST_clocks_reset50n(simHdl, "clocks_reset50n", this, 1u, (tUInt8)0u),
    INST_mgmtReset(simHdl, "mgmtReset", this, 1u, (tUInt8)0u),
    INST_phyReset(simHdl, "phyReset", this, 1u, (tUInt8)0u),
    PORT_mgmtReset$OUT_RST((tUInt8)1u),
    PORT_phyReset$OUT_RST((tUInt8)1u),
    PORT__unnamed_$OUT_RST((tUInt8)1u),
    PORT_clocks_reset156n$OUT_RST((tUInt8)1u),
    PORT_clocks_reset50n$OUT_RST((tUInt8)1u),
    PORT_RST_N((tUInt8)1u)
{
  INST__unnamed_.set_reset_fn_gen_rst(&static_reset__unnamed_$OUT_RST);
  INST_clocks_reset156n.set_reset_fn_gen_rst(&static_reset_clocks_reset156n$OUT_RST);
  INST_clocks_reset50n.set_reset_fn_gen_rst(&static_reset_clocks_reset50n$OUT_RST);
  INST_mgmtReset.set_reset_fn_gen_rst(&static_reset_mgmtReset$OUT_RST);
  INST_phyReset.set_reset_fn_gen_rst(&static_reset_phyReset$OUT_RST);
  reset_fn_txReset = NULL;
  reset_fn_rxReset = NULL;
  symbol_count = 8u;
  symbols = new tSym[symbol_count];
  init_symbols_0();
}


/* Symbol init fns */

void MOD_mkBoardSynth::init_symbols_0()
{
  init_symbol(&symbols[0u], "_unnamed_", SYM_MODULE, &INST__unnamed_);
  init_symbol(&symbols[1u], "clocks_clock156mhz", SYM_MODULE, &INST_clocks_clock156mhz);
  init_symbol(&symbols[2u], "clocks_clock50mhz", SYM_MODULE, &INST_clocks_clock50mhz);
  init_symbol(&symbols[3u], "clocks_clock644mhz", SYM_MODULE, &INST_clocks_clock644mhz);
  init_symbol(&symbols[4u], "clocks_reset156n", SYM_MODULE, &INST_clocks_reset156n);
  init_symbol(&symbols[5u], "clocks_reset50n", SYM_MODULE, &INST_clocks_reset50n);
  init_symbol(&symbols[6u], "mgmtReset", SYM_MODULE, &INST_mgmtReset);
  init_symbol(&symbols[7u], "phyReset", SYM_MODULE, &INST_phyReset);
}


/* Rule actions */


/* Methods */


/* Reset routines */

void MOD_mkBoardSynth::reset_mgmtReset$OUT_RST(tUInt8 ARG_rst_in)
{
  PORT_mgmtReset$OUT_RST = ARG_rst_in;
}

void MOD_mkBoardSynth::reset_phyReset$OUT_RST(tUInt8 ARG_rst_in)
{
  PORT_phyReset$OUT_RST = ARG_rst_in;
}

void MOD_mkBoardSynth::reset__unnamed_$OUT_RST(tUInt8 ARG_rst_in)
{
  PORT__unnamed_$OUT_RST = ARG_rst_in;
  if (reset_fn_txReset)
    reset_fn_txReset(parent, ARG_rst_in);
  if (reset_fn_rxReset)
    reset_fn_rxReset(parent, ARG_rst_in);
}

void MOD_mkBoardSynth::reset_clocks_reset156n$OUT_RST(tUInt8 ARG_rst_in)
{
  PORT_clocks_reset156n$OUT_RST = ARG_rst_in;
}

void MOD_mkBoardSynth::reset_clocks_reset50n$OUT_RST(tUInt8 ARG_rst_in)
{
  PORT_clocks_reset50n$OUT_RST = ARG_rst_in;
}

void MOD_mkBoardSynth::reset_RST_N(tUInt8 ARG_rst_in)
{
  PORT_RST_N = ARG_rst_in;
  INST_phyReset.reset_IN_RST(ARG_rst_in);
  INST_mgmtReset.reset_IN_RST(ARG_rst_in);
  INST_clocks_reset50n.reset_IN_RST(ARG_rst_in);
  INST_clocks_reset156n.reset_IN_RST(ARG_rst_in);
  INST__unnamed_.reset_IN_RST(ARG_rst_in);
}


/* Static handles to reset routines */

void MOD_mkBoardSynth::static_reset_mgmtReset$OUT_RST(void *my_this, tUInt8 ARG_rst_in)
{
  (((MOD_mkBoardSynth *)(my_this))->reset_mgmtReset$OUT_RST)(ARG_rst_in);
}

void MOD_mkBoardSynth::static_reset_phyReset$OUT_RST(void *my_this, tUInt8 ARG_rst_in)
{
  (((MOD_mkBoardSynth *)(my_this))->reset_phyReset$OUT_RST)(ARG_rst_in);
}

void MOD_mkBoardSynth::static_reset__unnamed_$OUT_RST(void *my_this, tUInt8 ARG_rst_in)
{
  (((MOD_mkBoardSynth *)(my_this))->reset__unnamed_$OUT_RST)(ARG_rst_in);
}

void MOD_mkBoardSynth::static_reset_clocks_reset156n$OUT_RST(void *my_this, tUInt8 ARG_rst_in)
{
  (((MOD_mkBoardSynth *)(my_this))->reset_clocks_reset156n$OUT_RST)(ARG_rst_in);
}

void MOD_mkBoardSynth::static_reset_clocks_reset50n$OUT_RST(void *my_this, tUInt8 ARG_rst_in)
{
  (((MOD_mkBoardSynth *)(my_this))->reset_clocks_reset50n$OUT_RST)(ARG_rst_in);
}


/* Functions for the parent module to register its reset fns */

void MOD_mkBoardSynth::set_reset_fn_txReset(tResetFn fn)
{
  reset_fn_txReset = fn;
}

void MOD_mkBoardSynth::set_reset_fn_rxReset(tResetFn fn)
{
  reset_fn_rxReset = fn;
}


/* Functions to set the elaborated clock id */

void MOD_mkBoardSynth::set_clk_0(char const *s)
{
  __clk_handle_0 = bk_get_or_define_clock(sim_hdl, s);
}

void MOD_mkBoardSynth::set_clk_1(char const *s)
{
  __clk_handle_1 = bk_get_or_define_clock(sim_hdl, s);
}

void MOD_mkBoardSynth::set_clk_2(char const *s)
{
  __clk_handle_2 = bk_get_or_define_clock(sim_hdl, s);
}

void MOD_mkBoardSynth::set_clk_3(char const *s)
{
  __clk_handle_3 = bk_get_or_define_clock(sim_hdl, s);
}

void MOD_mkBoardSynth::set_clk_4(char const *s)
{
  __clk_handle_4 = bk_get_or_define_clock(sim_hdl, s);
}


/* State dumping routine */
void MOD_mkBoardSynth::dump_state(unsigned int indent)
{
  printf("%*s%s:\n", indent, "", inst_name);
  INST__unnamed_.dump_state(indent + 2u);
  INST_clocks_clock156mhz.dump_state(indent + 2u);
  INST_clocks_clock50mhz.dump_state(indent + 2u);
  INST_clocks_clock644mhz.dump_state(indent + 2u);
  INST_clocks_reset156n.dump_state(indent + 2u);
  INST_clocks_reset50n.dump_state(indent + 2u);
  INST_mgmtReset.dump_state(indent + 2u);
  INST_phyReset.dump_state(indent + 2u);
}


/* VCD dumping routines */

unsigned int MOD_mkBoardSynth::dump_VCD_defs(unsigned int levels)
{
  vcd_write_scope_start(sim_hdl, inst_name);
  vcd_num = vcd_reserve_ids(sim_hdl, 14u);
  unsigned int num = vcd_num;
  for (unsigned int clk = 0u; clk < bk_num_clocks(sim_hdl); ++clk)
    vcd_add_clock_def(sim_hdl, this, bk_clock_name(sim_hdl, clk), bk_clock_vcd_num(sim_hdl, clk));
  vcd_write_def(sim_hdl, bk_clock_vcd_num(sim_hdl, __clk_handle_1), "CLK_mgmtClock", 1u);
  vcd_write_def(sim_hdl, bk_clock_vcd_num(sim_hdl, __clk_handle_0), "CLK", 1u);
  vcd_write_def(sim_hdl, num++, "RST_N", 1u);
  vcd_write_def(sim_hdl, num++, "_unnamed_$OUT_RST", 1u);
  vcd_write_def(sim_hdl, num++, "clocks_reset156n$OUT_RST", 1u);
  vcd_write_def(sim_hdl, num++, "clocks_reset50n$OUT_RST", 1u);
  vcd_write_def(sim_hdl, num++, "mgmtReset$OUT_RST", 1u);
  vcd_write_def(sim_hdl, num++, "phyReset$OUT_RST", 1u);
  num = INST__unnamed_.dump_VCD_defs(num);
  num = INST_clocks_clock156mhz.dump_VCD_defs(num);
  num = INST_clocks_clock50mhz.dump_VCD_defs(num);
  num = INST_clocks_clock644mhz.dump_VCD_defs(num);
  num = INST_clocks_reset156n.dump_VCD_defs(num);
  num = INST_clocks_reset50n.dump_VCD_defs(num);
  num = INST_mgmtReset.dump_VCD_defs(num);
  num = INST_phyReset.dump_VCD_defs(num);
  vcd_write_scope_end(sim_hdl);
  return num;
}

void MOD_mkBoardSynth::dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mkBoardSynth &backing)
{
  vcd_defs(dt, backing);
  vcd_prims(dt, backing);
}

void MOD_mkBoardSynth::vcd_defs(tVCDDumpType dt, MOD_mkBoardSynth &backing)
{
  unsigned int num = vcd_num;
  if (dt == VCD_DUMP_XS)
  {
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
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
      if ((backing.PORT__unnamed_$OUT_RST) != PORT__unnamed_$OUT_RST)
      {
	vcd_write_val(sim_hdl, num, PORT__unnamed_$OUT_RST, 1u);
	backing.PORT__unnamed_$OUT_RST = PORT__unnamed_$OUT_RST;
      }
      ++num;
      if ((backing.PORT_clocks_reset156n$OUT_RST) != PORT_clocks_reset156n$OUT_RST)
      {
	vcd_write_val(sim_hdl, num, PORT_clocks_reset156n$OUT_RST, 1u);
	backing.PORT_clocks_reset156n$OUT_RST = PORT_clocks_reset156n$OUT_RST;
      }
      ++num;
      if ((backing.PORT_clocks_reset50n$OUT_RST) != PORT_clocks_reset50n$OUT_RST)
      {
	vcd_write_val(sim_hdl, num, PORT_clocks_reset50n$OUT_RST, 1u);
	backing.PORT_clocks_reset50n$OUT_RST = PORT_clocks_reset50n$OUT_RST;
      }
      ++num;
      if ((backing.PORT_mgmtReset$OUT_RST) != PORT_mgmtReset$OUT_RST)
      {
	vcd_write_val(sim_hdl, num, PORT_mgmtReset$OUT_RST, 1u);
	backing.PORT_mgmtReset$OUT_RST = PORT_mgmtReset$OUT_RST;
      }
      ++num;
      if ((backing.PORT_phyReset$OUT_RST) != PORT_phyReset$OUT_RST)
      {
	vcd_write_val(sim_hdl, num, PORT_phyReset$OUT_RST, 1u);
	backing.PORT_phyReset$OUT_RST = PORT_phyReset$OUT_RST;
      }
      ++num;
    }
    else
    {
      vcd_write_val(sim_hdl, num++, PORT_RST_N, 1u);
      backing.PORT_RST_N = PORT_RST_N;
      vcd_write_val(sim_hdl, num++, PORT__unnamed_$OUT_RST, 1u);
      backing.PORT__unnamed_$OUT_RST = PORT__unnamed_$OUT_RST;
      vcd_write_val(sim_hdl, num++, PORT_clocks_reset156n$OUT_RST, 1u);
      backing.PORT_clocks_reset156n$OUT_RST = PORT_clocks_reset156n$OUT_RST;
      vcd_write_val(sim_hdl, num++, PORT_clocks_reset50n$OUT_RST, 1u);
      backing.PORT_clocks_reset50n$OUT_RST = PORT_clocks_reset50n$OUT_RST;
      vcd_write_val(sim_hdl, num++, PORT_mgmtReset$OUT_RST, 1u);
      backing.PORT_mgmtReset$OUT_RST = PORT_mgmtReset$OUT_RST;
      vcd_write_val(sim_hdl, num++, PORT_phyReset$OUT_RST, 1u);
      backing.PORT_phyReset$OUT_RST = PORT_phyReset$OUT_RST;
    }
}

void MOD_mkBoardSynth::vcd_prims(tVCDDumpType dt, MOD_mkBoardSynth &backing)
{
  INST__unnamed_.dump_VCD(dt, backing.INST__unnamed_);
  INST_clocks_clock156mhz.dump_VCD(dt, backing.INST_clocks_clock156mhz);
  INST_clocks_clock50mhz.dump_VCD(dt, backing.INST_clocks_clock50mhz);
  INST_clocks_clock644mhz.dump_VCD(dt, backing.INST_clocks_clock644mhz);
  INST_clocks_reset156n.dump_VCD(dt, backing.INST_clocks_reset156n);
  INST_clocks_reset50n.dump_VCD(dt, backing.INST_clocks_reset50n);
  INST_mgmtReset.dump_VCD(dt, backing.INST_mgmtReset);
  INST_phyReset.dump_VCD(dt, backing.INST_phyReset);
}
