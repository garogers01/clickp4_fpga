/*
 * Generated by Bluespec Compiler, version 2014.07.A (build 34078, 2014-07-30)
 * 
 * On Thu Jun  1 21:50:39 CST 2017
 * 
 */
#include "bluesim_primitives.h"
#include "mkMainIndicationOutputPipes.h"


/* Literal declarations */
static unsigned int const UWide_literal_192_h0_arr[] = { 0u, 0u, 0u, 0u, 0u, 0u };
static tUWide const UWide_literal_192_h0(192u, UWide_literal_192_h0_arr);


/* Constructor */
MOD_mkMainIndicationOutputPipes::MOD_mkMainIndicationOutputPipes(tSimStateHdl simHdl,
								 char const *name,
								 Module *parent)
  : Module(simHdl, name, parent),
    __clk_handle_0(BAD_CLOCK_HANDLE),
    INST_read_pktcap_perf_info_resp_responseAdapter_bits(simHdl,
							 "read_pktcap_perf_info_resp_responseAdapter_bits",
							 this,
							 192u,
							 UWide_literal_192_h0,
							 (tUInt8)0u),
    INST_read_pktcap_perf_info_resp_responseAdapter_count(simHdl,
							  "read_pktcap_perf_info_resp_responseAdapter_count",
							  this,
							  3u,
							  (tUInt8)0u,
							  (tUInt8)0u),
    INST_read_pktcap_perf_info_resp_responseAdapter_notEmptyReg(simHdl,
								"read_pktcap_perf_info_resp_responseAdapter_notEmptyReg",
								this,
								1u,
								(tUInt8)0u,
								(tUInt8)0u),
    INST_read_pktcap_perf_info_resp_responseAdapter_shift(simHdl,
							  "read_pktcap_perf_info_resp_responseAdapter_shift",
							  this,
							  9u,
							  0u,
							  (tUInt8)0u),
    INST_read_version_rsp_responseAdapter_bits(simHdl,
					       "read_version_rsp_responseAdapter_bits",
					       this,
					       32u,
					       0u,
					       (tUInt8)0u),
    INST_read_version_rsp_responseAdapter_notEmptyReg(simHdl,
						      "read_version_rsp_responseAdapter_notEmptyReg",
						      this,
						      1u,
						      (tUInt8)0u,
						      (tUInt8)0u),
    INST_read_version_rsp_responseAdapter_shift(simHdl,
						"read_version_rsp_responseAdapter_shift",
						this,
						6u,
						(tUInt8)0u,
						(tUInt8)0u),
    PORT_RST_N((tUInt8)1u),
    DEF_x__h825(192u),
    DEF_read_pktcap_perf_info_resp_responseAdapter_bits_BITS_159_TO_0___h956(160u),
    DEF_x__h941(192u)
{
  PORT_methods_read_pktcap_perf_info_resp_enq_v.setSize(192u);
  PORT_methods_read_pktcap_perf_info_resp_enq_v.clear();
  symbol_count = 10u;
  symbols = new tSym[symbol_count];
  init_symbols_0();
}


/* Symbol init fns */

void MOD_mkMainIndicationOutputPipes::init_symbols_0()
{
  init_symbol(&symbols[0u],
	      "methods_read_pktcap_perf_info_resp_enq_v",
	      SYM_PORT,
	      &PORT_methods_read_pktcap_perf_info_resp_enq_v,
	      192u);
  init_symbol(&symbols[1u],
	      "read_pktcap_perf_info_resp_responseAdapter_bits",
	      SYM_MODULE,
	      &INST_read_pktcap_perf_info_resp_responseAdapter_bits);
  init_symbol(&symbols[2u],
	      "read_pktcap_perf_info_resp_responseAdapter_count",
	      SYM_MODULE,
	      &INST_read_pktcap_perf_info_resp_responseAdapter_count);
  init_symbol(&symbols[3u],
	      "read_pktcap_perf_info_resp_responseAdapter_notEmptyReg",
	      SYM_MODULE,
	      &INST_read_pktcap_perf_info_resp_responseAdapter_notEmptyReg);
  init_symbol(&symbols[4u],
	      "read_pktcap_perf_info_resp_responseAdapter_notEmptyReg__h545",
	      SYM_DEF,
	      &DEF_read_pktcap_perf_info_resp_responseAdapter_notEmptyReg__h545,
	      1u);
  init_symbol(&symbols[5u],
	      "read_pktcap_perf_info_resp_responseAdapter_shift",
	      SYM_MODULE,
	      &INST_read_pktcap_perf_info_resp_responseAdapter_shift);
  init_symbol(&symbols[6u],
	      "read_version_rsp_responseAdapter_bits",
	      SYM_MODULE,
	      &INST_read_version_rsp_responseAdapter_bits);
  init_symbol(&symbols[7u],
	      "read_version_rsp_responseAdapter_notEmptyReg",
	      SYM_MODULE,
	      &INST_read_version_rsp_responseAdapter_notEmptyReg);
  init_symbol(&symbols[8u],
	      "read_version_rsp_responseAdapter_notEmptyReg__h491",
	      SYM_DEF,
	      &DEF_read_version_rsp_responseAdapter_notEmptyReg__h491,
	      1u);
  init_symbol(&symbols[9u],
	      "read_version_rsp_responseAdapter_shift",
	      SYM_MODULE,
	      &INST_read_version_rsp_responseAdapter_shift);
}


/* Rule actions */


/* Methods */

tUInt32 MOD_mkMainIndicationOutputPipes::METH_portalIfc_messageSize_size(tUInt32 ARG_portalIfc_messageSize_size_methodNumber)
{
  tUInt8 DEF_portalIfc_messageSize_size_methodNumber_EQ_0___d5;
  tUInt32 PORT_portalIfc_messageSize_size;
  DEF_portalIfc_messageSize_size_methodNumber_EQ_0___d5 = ARG_portalIfc_messageSize_size_methodNumber == 0u;
  PORT_portalIfc_messageSize_size = DEF_portalIfc_messageSize_size_methodNumber_EQ_0___d5 ? 32u : 192u;
  return PORT_portalIfc_messageSize_size;
}

tUInt8 MOD_mkMainIndicationOutputPipes::METH_RDY_portalIfc_messageSize_size()
{
  tUInt8 PORT_RDY_portalIfc_messageSize_size;
  tUInt8 DEF_CAN_FIRE_portalIfc_messageSize_size;
  DEF_CAN_FIRE_portalIfc_messageSize_size = (tUInt8)1u;
  PORT_RDY_portalIfc_messageSize_size = DEF_CAN_FIRE_portalIfc_messageSize_size;
  return PORT_RDY_portalIfc_messageSize_size;
}

void MOD_mkMainIndicationOutputPipes::METH_methods_read_version_rsp_enq(tUInt32 ARG_methods_read_version_rsp_enq_v)
{
  INST_read_version_rsp_responseAdapter_bits.METH_write(ARG_methods_read_version_rsp_enq_v);
  INST_read_version_rsp_responseAdapter_notEmptyReg.METH_write((tUInt8)1u);
}

tUInt8 MOD_mkMainIndicationOutputPipes::METH_RDY_methods_read_version_rsp_enq()
{
  tUInt8 DEF_CAN_FIRE_methods_read_version_rsp_enq;
  tUInt8 PORT_RDY_methods_read_version_rsp_enq;
  DEF_read_version_rsp_responseAdapter_notEmptyReg__h491 = INST_read_version_rsp_responseAdapter_notEmptyReg.METH_read();
  DEF_NOT_read_version_rsp_responseAdapter_notEmptyReg___d2 = !DEF_read_version_rsp_responseAdapter_notEmptyReg__h491;
  DEF_CAN_FIRE_methods_read_version_rsp_enq = DEF_NOT_read_version_rsp_responseAdapter_notEmptyReg___d2;
  PORT_RDY_methods_read_version_rsp_enq = DEF_CAN_FIRE_methods_read_version_rsp_enq;
  return PORT_RDY_methods_read_version_rsp_enq;
}

tUInt8 MOD_mkMainIndicationOutputPipes::METH_methods_read_version_rsp_notFull()
{
  tUInt8 PORT_methods_read_version_rsp_notFull;
  DEF_read_version_rsp_responseAdapter_notEmptyReg__h491 = INST_read_version_rsp_responseAdapter_notEmptyReg.METH_read();
  DEF_NOT_read_version_rsp_responseAdapter_notEmptyReg___d2 = !DEF_read_version_rsp_responseAdapter_notEmptyReg__h491;
  PORT_methods_read_version_rsp_notFull = DEF_NOT_read_version_rsp_responseAdapter_notEmptyReg___d2;
  return PORT_methods_read_version_rsp_notFull;
}

tUInt8 MOD_mkMainIndicationOutputPipes::METH_RDY_methods_read_version_rsp_notFull()
{
  tUInt8 DEF_CAN_FIRE_methods_read_version_rsp_notFull;
  tUInt8 PORT_RDY_methods_read_version_rsp_notFull;
  DEF_CAN_FIRE_methods_read_version_rsp_notFull = (tUInt8)1u;
  PORT_RDY_methods_read_version_rsp_notFull = DEF_CAN_FIRE_methods_read_version_rsp_notFull;
  return PORT_RDY_methods_read_version_rsp_notFull;
}

void MOD_mkMainIndicationOutputPipes::METH_methods_read_pktcap_perf_info_resp_enq(tUWide ARG_methods_read_pktcap_perf_info_resp_enq_v)
{
  PORT_methods_read_pktcap_perf_info_resp_enq_v = ARG_methods_read_pktcap_perf_info_resp_enq_v;
  INST_read_pktcap_perf_info_resp_responseAdapter_bits.METH_write(ARG_methods_read_pktcap_perf_info_resp_enq_v);
  INST_read_pktcap_perf_info_resp_responseAdapter_notEmptyReg.METH_write((tUInt8)1u);
}

tUInt8 MOD_mkMainIndicationOutputPipes::METH_RDY_methods_read_pktcap_perf_info_resp_enq()
{
  tUInt8 DEF_CAN_FIRE_methods_read_pktcap_perf_info_resp_enq;
  tUInt8 PORT_RDY_methods_read_pktcap_perf_info_resp_enq;
  DEF_read_pktcap_perf_info_resp_responseAdapter_notEmptyReg__h545 = INST_read_pktcap_perf_info_resp_responseAdapter_notEmptyReg.METH_read();
  DEF_NOT_read_pktcap_perf_info_resp_responseAdapter_ETC___d4 = !DEF_read_pktcap_perf_info_resp_responseAdapter_notEmptyReg__h545;
  DEF_CAN_FIRE_methods_read_pktcap_perf_info_resp_enq = DEF_NOT_read_pktcap_perf_info_resp_responseAdapter_ETC___d4;
  PORT_RDY_methods_read_pktcap_perf_info_resp_enq = DEF_CAN_FIRE_methods_read_pktcap_perf_info_resp_enq;
  return PORT_RDY_methods_read_pktcap_perf_info_resp_enq;
}

tUInt8 MOD_mkMainIndicationOutputPipes::METH_methods_read_pktcap_perf_info_resp_notFull()
{
  tUInt8 PORT_methods_read_pktcap_perf_info_resp_notFull;
  DEF_read_pktcap_perf_info_resp_responseAdapter_notEmptyReg__h545 = INST_read_pktcap_perf_info_resp_responseAdapter_notEmptyReg.METH_read();
  DEF_NOT_read_pktcap_perf_info_resp_responseAdapter_ETC___d4 = !DEF_read_pktcap_perf_info_resp_responseAdapter_notEmptyReg__h545;
  PORT_methods_read_pktcap_perf_info_resp_notFull = DEF_NOT_read_pktcap_perf_info_resp_responseAdapter_ETC___d4;
  return PORT_methods_read_pktcap_perf_info_resp_notFull;
}

tUInt8 MOD_mkMainIndicationOutputPipes::METH_RDY_methods_read_pktcap_perf_info_resp_notFull()
{
  tUInt8 DEF_CAN_FIRE_methods_read_pktcap_perf_info_resp_notFull;
  tUInt8 PORT_RDY_methods_read_pktcap_perf_info_resp_notFull;
  DEF_CAN_FIRE_methods_read_pktcap_perf_info_resp_notFull = (tUInt8)1u;
  PORT_RDY_methods_read_pktcap_perf_info_resp_notFull = DEF_CAN_FIRE_methods_read_pktcap_perf_info_resp_notFull;
  return PORT_RDY_methods_read_pktcap_perf_info_resp_notFull;
}

tUInt32 MOD_mkMainIndicationOutputPipes::METH_portalIfc_indications_0_first()
{
  tUInt32 PORT_portalIfc_indications_0_first;
  PORT_portalIfc_indications_0_first = INST_read_version_rsp_responseAdapter_bits.METH_read();
  return PORT_portalIfc_indications_0_first;
}

tUInt8 MOD_mkMainIndicationOutputPipes::METH_RDY_portalIfc_indications_0_first()
{
  tUInt8 DEF_CAN_FIRE_portalIfc_indications_0_first;
  tUInt8 PORT_RDY_portalIfc_indications_0_first;
  DEF_read_version_rsp_responseAdapter_notEmptyReg__h491 = INST_read_version_rsp_responseAdapter_notEmptyReg.METH_read();
  DEF_CAN_FIRE_portalIfc_indications_0_first = DEF_read_version_rsp_responseAdapter_notEmptyReg__h491;
  PORT_RDY_portalIfc_indications_0_first = DEF_CAN_FIRE_portalIfc_indications_0_first;
  return PORT_RDY_portalIfc_indications_0_first;
}

void MOD_mkMainIndicationOutputPipes::METH_portalIfc_indications_0_deq()
{
  INST_read_version_rsp_responseAdapter_notEmptyReg.METH_write((tUInt8)0u);
}

tUInt8 MOD_mkMainIndicationOutputPipes::METH_RDY_portalIfc_indications_0_deq()
{
  tUInt8 DEF_CAN_FIRE_portalIfc_indications_0_deq;
  tUInt8 PORT_RDY_portalIfc_indications_0_deq;
  DEF_read_version_rsp_responseAdapter_notEmptyReg__h491 = INST_read_version_rsp_responseAdapter_notEmptyReg.METH_read();
  DEF_CAN_FIRE_portalIfc_indications_0_deq = DEF_read_version_rsp_responseAdapter_notEmptyReg__h491;
  PORT_RDY_portalIfc_indications_0_deq = DEF_CAN_FIRE_portalIfc_indications_0_deq;
  return PORT_RDY_portalIfc_indications_0_deq;
}

tUInt8 MOD_mkMainIndicationOutputPipes::METH_portalIfc_indications_0_notEmpty()
{
  tUInt8 PORT_portalIfc_indications_0_notEmpty;
  DEF_read_version_rsp_responseAdapter_notEmptyReg__h491 = INST_read_version_rsp_responseAdapter_notEmptyReg.METH_read();
  PORT_portalIfc_indications_0_notEmpty = DEF_read_version_rsp_responseAdapter_notEmptyReg__h491;
  return PORT_portalIfc_indications_0_notEmpty;
}

tUInt8 MOD_mkMainIndicationOutputPipes::METH_RDY_portalIfc_indications_0_notEmpty()
{
  tUInt8 DEF_CAN_FIRE_portalIfc_indications_0_notEmpty;
  tUInt8 PORT_RDY_portalIfc_indications_0_notEmpty;
  DEF_CAN_FIRE_portalIfc_indications_0_notEmpty = (tUInt8)1u;
  PORT_RDY_portalIfc_indications_0_notEmpty = DEF_CAN_FIRE_portalIfc_indications_0_notEmpty;
  return PORT_RDY_portalIfc_indications_0_notEmpty;
}

tUInt32 MOD_mkMainIndicationOutputPipes::METH_portalIfc_indications_1_first()
{
  tUInt32 PORT_portalIfc_indications_1_first;
  DEF_x__h825 = INST_read_pktcap_perf_info_resp_responseAdapter_bits.METH_read();
  PORT_portalIfc_indications_1_first = DEF_x__h825.get_whole_word(5u);
  return PORT_portalIfc_indications_1_first;
}

tUInt8 MOD_mkMainIndicationOutputPipes::METH_RDY_portalIfc_indications_1_first()
{
  tUInt8 DEF_CAN_FIRE_portalIfc_indications_1_first;
  tUInt8 PORT_RDY_portalIfc_indications_1_first;
  DEF_read_pktcap_perf_info_resp_responseAdapter_notEmptyReg__h545 = INST_read_pktcap_perf_info_resp_responseAdapter_notEmptyReg.METH_read();
  DEF_CAN_FIRE_portalIfc_indications_1_first = DEF_read_pktcap_perf_info_resp_responseAdapter_notEmptyReg__h545;
  PORT_RDY_portalIfc_indications_1_first = DEF_CAN_FIRE_portalIfc_indications_1_first;
  return PORT_RDY_portalIfc_indications_1_first;
}

void MOD_mkMainIndicationOutputPipes::METH_portalIfc_indications_1_deq()
{
  tUInt32 DEF_x__h926;
  tUInt8 DEF_NOT_read_pktcap_perf_info_resp_responseAdapter_ETC___d11;
  tUInt8 DEF_x__h893;
  tUInt8 DEF_read_pktcap_perf_info_resp_responseAdapter_cou_ETC___d8;
  tUInt8 DEF_IF_read_pktcap_perf_info_resp_responseAdapter__ETC___d10;
  tUInt8 DEF__read__h364;
  tUInt32 DEF__read__h413;
  DEF_x__h825 = INST_read_pktcap_perf_info_resp_responseAdapter_bits.METH_read();
  DEF__read__h413 = INST_read_pktcap_perf_info_resp_responseAdapter_shift.METH_read();
  DEF__read__h364 = INST_read_pktcap_perf_info_resp_responseAdapter_count.METH_read();
  wop_primExtractWide(160u,
		      192u,
		      DEF_x__h825,
		      32u,
		      159u,
		      32u,
		      0u,
		      DEF_read_pktcap_perf_info_resp_responseAdapter_bits_BITS_159_TO_0___h956);
  DEF_read_pktcap_perf_info_resp_responseAdapter_cou_ETC___d8 = DEF__read__h364 == (tUInt8)5u;
  DEF_x__h893 = (tUInt8)7u & (DEF__read__h364 + (tUInt8)1u);
  DEF_IF_read_pktcap_perf_info_resp_responseAdapter__ETC___d10 = DEF_read_pktcap_perf_info_resp_responseAdapter_cou_ETC___d8 ? (tUInt8)0u : DEF_x__h893;
  DEF_x__h941.set_whole_word(DEF_read_pktcap_perf_info_resp_responseAdapter_bits_BITS_159_TO_0___h956.get_whole_word(4u),
			     5u).set_whole_word(DEF_read_pktcap_perf_info_resp_responseAdapter_bits_BITS_159_TO_0___h956.get_whole_word(3u),
						4u).set_whole_word(DEF_read_pktcap_perf_info_resp_responseAdapter_bits_BITS_159_TO_0___h956.get_whole_word(2u),
								   3u).set_whole_word(DEF_read_pktcap_perf_info_resp_responseAdapter_bits_BITS_159_TO_0___h956.get_whole_word(1u),
										      2u).build_concat((((tUInt64)(DEF_read_pktcap_perf_info_resp_responseAdapter_bits_BITS_159_TO_0___h956.get_whole_word(0u))) << 32u) | (tUInt64)(0u),
												       0u,
												       64u);
  DEF_NOT_read_pktcap_perf_info_resp_responseAdapter_ETC___d11 = !DEF_read_pktcap_perf_info_resp_responseAdapter_cou_ETC___d8;
  DEF_x__h926 = 511u & (DEF__read__h413 + 32u);
  INST_read_pktcap_perf_info_resp_responseAdapter_count.METH_write(DEF_IF_read_pktcap_perf_info_resp_responseAdapter__ETC___d10);
  if (DEF_read_pktcap_perf_info_resp_responseAdapter_cou_ETC___d8)
    INST_read_pktcap_perf_info_resp_responseAdapter_notEmptyReg.METH_write((tUInt8)0u);
  if (DEF_NOT_read_pktcap_perf_info_resp_responseAdapter_ETC___d11)
    INST_read_pktcap_perf_info_resp_responseAdapter_shift.METH_write(DEF_x__h926);
  if (DEF_NOT_read_pktcap_perf_info_resp_responseAdapter_ETC___d11)
    INST_read_pktcap_perf_info_resp_responseAdapter_bits.METH_write(DEF_x__h941);
}

tUInt8 MOD_mkMainIndicationOutputPipes::METH_RDY_portalIfc_indications_1_deq()
{
  tUInt8 DEF_CAN_FIRE_portalIfc_indications_1_deq;
  tUInt8 PORT_RDY_portalIfc_indications_1_deq;
  DEF_read_pktcap_perf_info_resp_responseAdapter_notEmptyReg__h545 = INST_read_pktcap_perf_info_resp_responseAdapter_notEmptyReg.METH_read();
  DEF_CAN_FIRE_portalIfc_indications_1_deq = DEF_read_pktcap_perf_info_resp_responseAdapter_notEmptyReg__h545;
  PORT_RDY_portalIfc_indications_1_deq = DEF_CAN_FIRE_portalIfc_indications_1_deq;
  return PORT_RDY_portalIfc_indications_1_deq;
}

tUInt8 MOD_mkMainIndicationOutputPipes::METH_portalIfc_indications_1_notEmpty()
{
  tUInt8 PORT_portalIfc_indications_1_notEmpty;
  DEF_read_pktcap_perf_info_resp_responseAdapter_notEmptyReg__h545 = INST_read_pktcap_perf_info_resp_responseAdapter_notEmptyReg.METH_read();
  PORT_portalIfc_indications_1_notEmpty = DEF_read_pktcap_perf_info_resp_responseAdapter_notEmptyReg__h545;
  return PORT_portalIfc_indications_1_notEmpty;
}

tUInt8 MOD_mkMainIndicationOutputPipes::METH_RDY_portalIfc_indications_1_notEmpty()
{
  tUInt8 DEF_CAN_FIRE_portalIfc_indications_1_notEmpty;
  tUInt8 PORT_RDY_portalIfc_indications_1_notEmpty;
  DEF_CAN_FIRE_portalIfc_indications_1_notEmpty = (tUInt8)1u;
  PORT_RDY_portalIfc_indications_1_notEmpty = DEF_CAN_FIRE_portalIfc_indications_1_notEmpty;
  return PORT_RDY_portalIfc_indications_1_notEmpty;
}

tUInt8 MOD_mkMainIndicationOutputPipes::METH_portalIfc_intr_status()
{
  tUInt8 PORT_portalIfc_intr_status;
  DEF_read_pktcap_perf_info_resp_responseAdapter_notEmptyReg__h545 = INST_read_pktcap_perf_info_resp_responseAdapter_notEmptyReg.METH_read();
  DEF_read_version_rsp_responseAdapter_notEmptyReg__h491 = INST_read_version_rsp_responseAdapter_notEmptyReg.METH_read();
  PORT_portalIfc_intr_status = DEF_read_version_rsp_responseAdapter_notEmptyReg__h491 || DEF_read_pktcap_perf_info_resp_responseAdapter_notEmptyReg__h545;
  return PORT_portalIfc_intr_status;
}

tUInt8 MOD_mkMainIndicationOutputPipes::METH_RDY_portalIfc_intr_status()
{
  tUInt8 PORT_RDY_portalIfc_intr_status;
  tUInt8 DEF_CAN_FIRE_portalIfc_intr_status;
  DEF_CAN_FIRE_portalIfc_intr_status = (tUInt8)1u;
  PORT_RDY_portalIfc_intr_status = DEF_CAN_FIRE_portalIfc_intr_status;
  return PORT_RDY_portalIfc_intr_status;
}

tUInt32 MOD_mkMainIndicationOutputPipes::METH_portalIfc_intr_channel()
{
  tUInt32 DEF_IF_read_pktcap_perf_info_resp_responseAdapter__ETC___d16;
  tUInt32 PORT_portalIfc_intr_channel;
  DEF_read_pktcap_perf_info_resp_responseAdapter_notEmptyReg__h545 = INST_read_pktcap_perf_info_resp_responseAdapter_notEmptyReg.METH_read();
  DEF_read_version_rsp_responseAdapter_notEmptyReg__h491 = INST_read_version_rsp_responseAdapter_notEmptyReg.METH_read();
  DEF_IF_read_pktcap_perf_info_resp_responseAdapter__ETC___d16 = DEF_read_pktcap_perf_info_resp_responseAdapter_notEmptyReg__h545 ? 1u : 4294967295u;
  PORT_portalIfc_intr_channel = DEF_read_version_rsp_responseAdapter_notEmptyReg__h491 ? 0u : DEF_IF_read_pktcap_perf_info_resp_responseAdapter__ETC___d16;
  return PORT_portalIfc_intr_channel;
}

tUInt8 MOD_mkMainIndicationOutputPipes::METH_RDY_portalIfc_intr_channel()
{
  tUInt8 PORT_RDY_portalIfc_intr_channel;
  tUInt8 DEF_CAN_FIRE_portalIfc_intr_channel;
  DEF_CAN_FIRE_portalIfc_intr_channel = (tUInt8)1u;
  PORT_RDY_portalIfc_intr_channel = DEF_CAN_FIRE_portalIfc_intr_channel;
  return PORT_RDY_portalIfc_intr_channel;
}


/* Reset routines */

void MOD_mkMainIndicationOutputPipes::reset_RST_N(tUInt8 ARG_rst_in)
{
  PORT_RST_N = ARG_rst_in;
  INST_read_version_rsp_responseAdapter_shift.reset_RST(ARG_rst_in);
  INST_read_version_rsp_responseAdapter_notEmptyReg.reset_RST(ARG_rst_in);
  INST_read_version_rsp_responseAdapter_bits.reset_RST(ARG_rst_in);
  INST_read_pktcap_perf_info_resp_responseAdapter_shift.reset_RST(ARG_rst_in);
  INST_read_pktcap_perf_info_resp_responseAdapter_notEmptyReg.reset_RST(ARG_rst_in);
  INST_read_pktcap_perf_info_resp_responseAdapter_count.reset_RST(ARG_rst_in);
  INST_read_pktcap_perf_info_resp_responseAdapter_bits.reset_RST(ARG_rst_in);
}


/* Static handles to reset routines */


/* Functions for the parent module to register its reset fns */


/* Functions to set the elaborated clock id */

void MOD_mkMainIndicationOutputPipes::set_clk_0(char const *s)
{
  __clk_handle_0 = bk_get_or_define_clock(sim_hdl, s);
}


/* State dumping routine */
void MOD_mkMainIndicationOutputPipes::dump_state(unsigned int indent)
{
  printf("%*s%s:\n", indent, "", inst_name);
  INST_read_pktcap_perf_info_resp_responseAdapter_bits.dump_state(indent + 2u);
  INST_read_pktcap_perf_info_resp_responseAdapter_count.dump_state(indent + 2u);
  INST_read_pktcap_perf_info_resp_responseAdapter_notEmptyReg.dump_state(indent + 2u);
  INST_read_pktcap_perf_info_resp_responseAdapter_shift.dump_state(indent + 2u);
  INST_read_version_rsp_responseAdapter_bits.dump_state(indent + 2u);
  INST_read_version_rsp_responseAdapter_notEmptyReg.dump_state(indent + 2u);
  INST_read_version_rsp_responseAdapter_shift.dump_state(indent + 2u);
}


/* VCD dumping routines */

unsigned int MOD_mkMainIndicationOutputPipes::dump_VCD_defs(unsigned int levels)
{
  vcd_write_scope_start(sim_hdl, inst_name);
  vcd_num = vcd_reserve_ids(sim_hdl, 16u);
  unsigned int num = vcd_num;
  for (unsigned int clk = 0u; clk < bk_num_clocks(sim_hdl); ++clk)
    vcd_add_clock_def(sim_hdl, this, bk_clock_name(sim_hdl, clk), bk_clock_vcd_num(sim_hdl, clk));
  vcd_write_def(sim_hdl, bk_clock_vcd_num(sim_hdl, __clk_handle_0), "CLK", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "NOT_read_pktcap_perf_info_resp_responseAdapter_ETC___d4", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "NOT_read_version_rsp_responseAdapter_notEmptyReg___d2", 1u);
  vcd_write_def(sim_hdl, num++, "RST_N", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl,
		num++,
		"read_pktcap_perf_info_resp_responseAdapter_bits_BITS_159_TO_0___h956",
		160u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "read_pktcap_perf_info_resp_responseAdapter_notEmptyReg__h545", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "read_version_rsp_responseAdapter_notEmptyReg__h491", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "x__h825", 192u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "x__h941", 192u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "methods_read_pktcap_perf_info_resp_enq_v", 192u);
  num = INST_read_pktcap_perf_info_resp_responseAdapter_bits.dump_VCD_defs(num);
  num = INST_read_pktcap_perf_info_resp_responseAdapter_count.dump_VCD_defs(num);
  num = INST_read_pktcap_perf_info_resp_responseAdapter_notEmptyReg.dump_VCD_defs(num);
  num = INST_read_pktcap_perf_info_resp_responseAdapter_shift.dump_VCD_defs(num);
  num = INST_read_version_rsp_responseAdapter_bits.dump_VCD_defs(num);
  num = INST_read_version_rsp_responseAdapter_notEmptyReg.dump_VCD_defs(num);
  num = INST_read_version_rsp_responseAdapter_shift.dump_VCD_defs(num);
  vcd_write_scope_end(sim_hdl);
  return num;
}

void MOD_mkMainIndicationOutputPipes::dump_VCD(tVCDDumpType dt,
					       unsigned int levels,
					       MOD_mkMainIndicationOutputPipes &backing)
{
  vcd_defs(dt, backing);
  vcd_prims(dt, backing);
}

void MOD_mkMainIndicationOutputPipes::vcd_defs(tVCDDumpType dt,
					       MOD_mkMainIndicationOutputPipes &backing)
{
  unsigned int num = vcd_num;
  if (dt == VCD_DUMP_XS)
  {
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 160u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 192u);
    vcd_write_x(sim_hdl, num++, 192u);
    vcd_write_x(sim_hdl, num++, 192u);
  }
  else
    if (dt == VCD_DUMP_CHANGES)
    {
      if ((backing.DEF_NOT_read_pktcap_perf_info_resp_responseAdapter_ETC___d4) != DEF_NOT_read_pktcap_perf_info_resp_responseAdapter_ETC___d4)
      {
	vcd_write_val(sim_hdl, num, DEF_NOT_read_pktcap_perf_info_resp_responseAdapter_ETC___d4, 1u);
	backing.DEF_NOT_read_pktcap_perf_info_resp_responseAdapter_ETC___d4 = DEF_NOT_read_pktcap_perf_info_resp_responseAdapter_ETC___d4;
      }
      ++num;
      if ((backing.DEF_NOT_read_version_rsp_responseAdapter_notEmptyReg___d2) != DEF_NOT_read_version_rsp_responseAdapter_notEmptyReg___d2)
      {
	vcd_write_val(sim_hdl, num, DEF_NOT_read_version_rsp_responseAdapter_notEmptyReg___d2, 1u);
	backing.DEF_NOT_read_version_rsp_responseAdapter_notEmptyReg___d2 = DEF_NOT_read_version_rsp_responseAdapter_notEmptyReg___d2;
      }
      ++num;
      if ((backing.PORT_RST_N) != PORT_RST_N)
      {
	vcd_write_val(sim_hdl, num, PORT_RST_N, 1u);
	backing.PORT_RST_N = PORT_RST_N;
      }
      ++num;
      if ((backing.DEF_read_pktcap_perf_info_resp_responseAdapter_bits_BITS_159_TO_0___h956) != DEF_read_pktcap_perf_info_resp_responseAdapter_bits_BITS_159_TO_0___h956)
      {
	vcd_write_val(sim_hdl,
		      num,
		      DEF_read_pktcap_perf_info_resp_responseAdapter_bits_BITS_159_TO_0___h956,
		      160u);
	backing.DEF_read_pktcap_perf_info_resp_responseAdapter_bits_BITS_159_TO_0___h956 = DEF_read_pktcap_perf_info_resp_responseAdapter_bits_BITS_159_TO_0___h956;
      }
      ++num;
      if ((backing.DEF_read_pktcap_perf_info_resp_responseAdapter_notEmptyReg__h545) != DEF_read_pktcap_perf_info_resp_responseAdapter_notEmptyReg__h545)
      {
	vcd_write_val(sim_hdl, num, DEF_read_pktcap_perf_info_resp_responseAdapter_notEmptyReg__h545, 1u);
	backing.DEF_read_pktcap_perf_info_resp_responseAdapter_notEmptyReg__h545 = DEF_read_pktcap_perf_info_resp_responseAdapter_notEmptyReg__h545;
      }
      ++num;
      if ((backing.DEF_read_version_rsp_responseAdapter_notEmptyReg__h491) != DEF_read_version_rsp_responseAdapter_notEmptyReg__h491)
      {
	vcd_write_val(sim_hdl, num, DEF_read_version_rsp_responseAdapter_notEmptyReg__h491, 1u);
	backing.DEF_read_version_rsp_responseAdapter_notEmptyReg__h491 = DEF_read_version_rsp_responseAdapter_notEmptyReg__h491;
      }
      ++num;
      if ((backing.DEF_x__h825) != DEF_x__h825)
      {
	vcd_write_val(sim_hdl, num, DEF_x__h825, 192u);
	backing.DEF_x__h825 = DEF_x__h825;
      }
      ++num;
      if ((backing.DEF_x__h941) != DEF_x__h941)
      {
	vcd_write_val(sim_hdl, num, DEF_x__h941, 192u);
	backing.DEF_x__h941 = DEF_x__h941;
      }
      ++num;
      if ((backing.PORT_methods_read_pktcap_perf_info_resp_enq_v) != PORT_methods_read_pktcap_perf_info_resp_enq_v)
      {
	vcd_write_val(sim_hdl, num, PORT_methods_read_pktcap_perf_info_resp_enq_v, 192u);
	backing.PORT_methods_read_pktcap_perf_info_resp_enq_v = PORT_methods_read_pktcap_perf_info_resp_enq_v;
      }
      ++num;
    }
    else
    {
      vcd_write_val(sim_hdl, num++, DEF_NOT_read_pktcap_perf_info_resp_responseAdapter_ETC___d4, 1u);
      backing.DEF_NOT_read_pktcap_perf_info_resp_responseAdapter_ETC___d4 = DEF_NOT_read_pktcap_perf_info_resp_responseAdapter_ETC___d4;
      vcd_write_val(sim_hdl, num++, DEF_NOT_read_version_rsp_responseAdapter_notEmptyReg___d2, 1u);
      backing.DEF_NOT_read_version_rsp_responseAdapter_notEmptyReg___d2 = DEF_NOT_read_version_rsp_responseAdapter_notEmptyReg___d2;
      vcd_write_val(sim_hdl, num++, PORT_RST_N, 1u);
      backing.PORT_RST_N = PORT_RST_N;
      vcd_write_val(sim_hdl,
		    num++,
		    DEF_read_pktcap_perf_info_resp_responseAdapter_bits_BITS_159_TO_0___h956,
		    160u);
      backing.DEF_read_pktcap_perf_info_resp_responseAdapter_bits_BITS_159_TO_0___h956 = DEF_read_pktcap_perf_info_resp_responseAdapter_bits_BITS_159_TO_0___h956;
      vcd_write_val(sim_hdl, num++, DEF_read_pktcap_perf_info_resp_responseAdapter_notEmptyReg__h545, 1u);
      backing.DEF_read_pktcap_perf_info_resp_responseAdapter_notEmptyReg__h545 = DEF_read_pktcap_perf_info_resp_responseAdapter_notEmptyReg__h545;
      vcd_write_val(sim_hdl, num++, DEF_read_version_rsp_responseAdapter_notEmptyReg__h491, 1u);
      backing.DEF_read_version_rsp_responseAdapter_notEmptyReg__h491 = DEF_read_version_rsp_responseAdapter_notEmptyReg__h491;
      vcd_write_val(sim_hdl, num++, DEF_x__h825, 192u);
      backing.DEF_x__h825 = DEF_x__h825;
      vcd_write_val(sim_hdl, num++, DEF_x__h941, 192u);
      backing.DEF_x__h941 = DEF_x__h941;
      vcd_write_val(sim_hdl, num++, PORT_methods_read_pktcap_perf_info_resp_enq_v, 192u);
      backing.PORT_methods_read_pktcap_perf_info_resp_enq_v = PORT_methods_read_pktcap_perf_info_resp_enq_v;
    }
}

void MOD_mkMainIndicationOutputPipes::vcd_prims(tVCDDumpType dt,
						MOD_mkMainIndicationOutputPipes &backing)
{
  INST_read_pktcap_perf_info_resp_responseAdapter_bits.dump_VCD(dt,
								backing.INST_read_pktcap_perf_info_resp_responseAdapter_bits);
  INST_read_pktcap_perf_info_resp_responseAdapter_count.dump_VCD(dt,
								 backing.INST_read_pktcap_perf_info_resp_responseAdapter_count);
  INST_read_pktcap_perf_info_resp_responseAdapter_notEmptyReg.dump_VCD(dt,
								       backing.INST_read_pktcap_perf_info_resp_responseAdapter_notEmptyReg);
  INST_read_pktcap_perf_info_resp_responseAdapter_shift.dump_VCD(dt,
								 backing.INST_read_pktcap_perf_info_resp_responseAdapter_shift);
  INST_read_version_rsp_responseAdapter_bits.dump_VCD(dt,
						      backing.INST_read_version_rsp_responseAdapter_bits);
  INST_read_version_rsp_responseAdapter_notEmptyReg.dump_VCD(dt,
							     backing.INST_read_version_rsp_responseAdapter_notEmptyReg);
  INST_read_version_rsp_responseAdapter_shift.dump_VCD(dt,
						       backing.INST_read_version_rsp_responseAdapter_shift);
}
