//
// Generated by Bluespec Compiler, version 2014.07.A (build 34078, 2014-07-30)
//
// On Sun Jun  4 10:41:53 CST 2017
//
// BVI format method schedule info:
// schedule inFromBus_put  CF ( out_0_get, out_1_get, out_2_get, out_3_get );
// schedule inFromBus_put  C ( inFromBus_put );
//
// schedule out_0_get  CF ( inFromBus_put, out_1_get, out_2_get, out_3_get );
// schedule out_0_get  C ( out_0_get );
//
// schedule out_1_get  CF ( inFromBus_put, out_0_get, out_2_get, out_3_get );
// schedule out_1_get  C ( out_1_get );
//
// schedule out_2_get  CF ( inFromBus_put, out_0_get, out_1_get, out_3_get );
// schedule out_2_get  C ( out_2_get );
//
// schedule out_3_get  CF ( inFromBus_put, out_0_get, out_1_get, out_2_get );
// schedule out_3_get  C ( out_3_get );
//
//
// Ports:
// Name                         I/O  size props
// RDY_inFromBus_put              O     1 reg
// out_0_get                      O   153 reg
// RDY_out_0_get                  O     1 reg
// out_1_get                      O   153 reg
// RDY_out_1_get                  O     1 reg
// out_2_get                      O   153 reg
// RDY_out_2_get                  O     1 reg
// out_3_get                      O   153 reg
// RDY_out_3_get                  O     1 reg
// CLK                            I     1 clock
// RST_N                          I     1 reset
// inFromBus_put                  I   153 reg
// EN_inFromBus_put               I     1
// EN_out_0_get                   I     1
// EN_out_1_get                   I     1
// EN_out_2_get                   I     1
// EN_out_3_get                   I     1
//
// No combinational paths from inputs to outputs
//
//

`ifdef BSV_ASSIGNMENT_DELAY
`else
  `define BSV_ASSIGNMENT_DELAY
`endif

`ifdef BSV_POSITIVE_RESET
  `define BSV_RESET_VALUE 1'b1
  `define BSV_RESET_EDGE posedge
`else
  `define BSV_RESET_VALUE 1'b0
  `define BSV_RESET_EDGE negedge
`endif

module mkTLPDispatcher(CLK,
		       RST_N,

		       inFromBus_put,
		       EN_inFromBus_put,
		       RDY_inFromBus_put,

		       EN_out_0_get,
		       out_0_get,
		       RDY_out_0_get,

		       EN_out_1_get,
		       out_1_get,
		       RDY_out_1_get,

		       EN_out_2_get,
		       out_2_get,
		       RDY_out_2_get,

		       EN_out_3_get,
		       out_3_get,
		       RDY_out_3_get);
  input  CLK;
  input  RST_N;

  // action method inFromBus_put
  input  [152 : 0] inFromBus_put;
  input  EN_inFromBus_put;
  output RDY_inFromBus_put;

  // actionvalue method out_0_get
  input  EN_out_0_get;
  output [152 : 0] out_0_get;
  output RDY_out_0_get;

  // actionvalue method out_1_get
  input  EN_out_1_get;
  output [152 : 0] out_1_get;
  output RDY_out_1_get;

  // actionvalue method out_2_get
  input  EN_out_2_get;
  output [152 : 0] out_2_get;
  output RDY_out_2_get;

  // actionvalue method out_3_get
  input  EN_out_3_get;
  output [152 : 0] out_3_get;
  output RDY_out_3_get;

  // signals for module outputs
  wire [152 : 0] out_0_get, out_1_get, out_2_get, out_3_get;
  wire RDY_inFromBus_put,
       RDY_out_0_get,
       RDY_out_1_get,
       RDY_out_2_get,
       RDY_out_3_get;

  // register routeToPort
  reg [2 : 0] routeToPort;
  wire [2 : 0] routeToPort_D_IN;
  wire routeToPort_EN;

  // ports of submodule tlp_in_fifo
  wire [152 : 0] tlp_in_fifo_D_IN, tlp_in_fifo_D_OUT;
  wire tlp_in_fifo_CLR,
       tlp_in_fifo_DEQ,
       tlp_in_fifo_EMPTY_N,
       tlp_in_fifo_ENQ,
       tlp_in_fifo_FULL_N;

  // ports of submodule tlp_out_fifo_0
  wire [152 : 0] tlp_out_fifo_0_D_IN, tlp_out_fifo_0_D_OUT;
  wire tlp_out_fifo_0_CLR,
       tlp_out_fifo_0_DEQ,
       tlp_out_fifo_0_EMPTY_N,
       tlp_out_fifo_0_ENQ,
       tlp_out_fifo_0_FULL_N;

  // ports of submodule tlp_out_fifo_1
  wire [152 : 0] tlp_out_fifo_1_D_IN, tlp_out_fifo_1_D_OUT;
  wire tlp_out_fifo_1_CLR,
       tlp_out_fifo_1_DEQ,
       tlp_out_fifo_1_EMPTY_N,
       tlp_out_fifo_1_ENQ,
       tlp_out_fifo_1_FULL_N;

  // ports of submodule tlp_out_fifo_2
  wire [152 : 0] tlp_out_fifo_2_D_IN, tlp_out_fifo_2_D_OUT;
  wire tlp_out_fifo_2_CLR,
       tlp_out_fifo_2_DEQ,
       tlp_out_fifo_2_EMPTY_N,
       tlp_out_fifo_2_ENQ,
       tlp_out_fifo_2_FULL_N;

  // ports of submodule tlp_out_fifo_3
  wire [152 : 0] tlp_out_fifo_3_D_IN, tlp_out_fifo_3_D_OUT;
  wire tlp_out_fifo_3_CLR,
       tlp_out_fifo_3_DEQ,
       tlp_out_fifo_3_EMPTY_N,
       tlp_out_fifo_3_ENQ,
       tlp_out_fifo_3_FULL_N;

  // remaining internal signals
  reg SEL_ARR_tlp_out_fifo_0_i_notFull__5_tlp_out_fi_ETC___d25;
  wire _dfoo1,
       _dfoo4,
       _dfoo6,
       _dfoo8,
       _dfoo9,
       tlp_in_fifo_first_BIT_152_AND_tlp_in_fifo_firs_ETC___d30,
       tlp_in_fifo_first_BIT_152_AND_tlp_in_fifo_firs_ETC___d39;

  // action method inFromBus_put
  assign RDY_inFromBus_put = tlp_in_fifo_FULL_N ;

  // actionvalue method out_0_get
  assign out_0_get = tlp_out_fifo_0_D_OUT ;
  assign RDY_out_0_get = tlp_out_fifo_0_EMPTY_N ;

  // actionvalue method out_1_get
  assign out_1_get = tlp_out_fifo_1_D_OUT ;
  assign RDY_out_1_get = tlp_out_fifo_1_EMPTY_N ;

  // actionvalue method out_2_get
  assign out_2_get = tlp_out_fifo_2_D_OUT ;
  assign RDY_out_2_get = tlp_out_fifo_2_EMPTY_N ;

  // actionvalue method out_3_get
  assign out_3_get = tlp_out_fifo_3_D_OUT ;
  assign RDY_out_3_get = tlp_out_fifo_3_EMPTY_N ;

  // submodule tlp_in_fifo
  FIFO2 #(.width(32'd153), .guarded(32'd1)) tlp_in_fifo(.RST(RST_N),
							.CLK(CLK),
							.D_IN(tlp_in_fifo_D_IN),
							.ENQ(tlp_in_fifo_ENQ),
							.DEQ(tlp_in_fifo_DEQ),
							.CLR(tlp_in_fifo_CLR),
							.D_OUT(tlp_in_fifo_D_OUT),
							.FULL_N(tlp_in_fifo_FULL_N),
							.EMPTY_N(tlp_in_fifo_EMPTY_N));

  // submodule tlp_out_fifo_0
  FIFO2 #(.width(32'd153), .guarded(32'd1)) tlp_out_fifo_0(.RST(RST_N),
							   .CLK(CLK),
							   .D_IN(tlp_out_fifo_0_D_IN),
							   .ENQ(tlp_out_fifo_0_ENQ),
							   .DEQ(tlp_out_fifo_0_DEQ),
							   .CLR(tlp_out_fifo_0_CLR),
							   .D_OUT(tlp_out_fifo_0_D_OUT),
							   .FULL_N(tlp_out_fifo_0_FULL_N),
							   .EMPTY_N(tlp_out_fifo_0_EMPTY_N));

  // submodule tlp_out_fifo_1
  FIFO2 #(.width(32'd153), .guarded(32'd1)) tlp_out_fifo_1(.RST(RST_N),
							   .CLK(CLK),
							   .D_IN(tlp_out_fifo_1_D_IN),
							   .ENQ(tlp_out_fifo_1_ENQ),
							   .DEQ(tlp_out_fifo_1_DEQ),
							   .CLR(tlp_out_fifo_1_CLR),
							   .D_OUT(tlp_out_fifo_1_D_OUT),
							   .FULL_N(tlp_out_fifo_1_FULL_N),
							   .EMPTY_N(tlp_out_fifo_1_EMPTY_N));

  // submodule tlp_out_fifo_2
  FIFO2 #(.width(32'd153), .guarded(32'd1)) tlp_out_fifo_2(.RST(RST_N),
							   .CLK(CLK),
							   .D_IN(tlp_out_fifo_2_D_IN),
							   .ENQ(tlp_out_fifo_2_ENQ),
							   .DEQ(tlp_out_fifo_2_DEQ),
							   .CLR(tlp_out_fifo_2_CLR),
							   .D_OUT(tlp_out_fifo_2_D_OUT),
							   .FULL_N(tlp_out_fifo_2_FULL_N),
							   .EMPTY_N(tlp_out_fifo_2_EMPTY_N));

  // submodule tlp_out_fifo_3
  FIFO2 #(.width(32'd153), .guarded(32'd1)) tlp_out_fifo_3(.RST(RST_N),
							   .CLK(CLK),
							   .D_IN(tlp_out_fifo_3_D_IN),
							   .ENQ(tlp_out_fifo_3_ENQ),
							   .DEQ(tlp_out_fifo_3_DEQ),
							   .CLR(tlp_out_fifo_3_CLR),
							   .D_OUT(tlp_out_fifo_3_D_OUT),
							   .FULL_N(tlp_out_fifo_3_FULL_N),
							   .EMPTY_N(tlp_out_fifo_3_EMPTY_N));

  // register routeToPort
  assign routeToPort_D_IN =
	     tlp_in_fifo_first_BIT_152_AND_tlp_in_fifo_firs_ETC___d39 ?
	       (tlp_in_fifo_D_OUT[152] ? 3'd4 : 3'd2) :
	       ((tlp_in_fifo_D_OUT[152] &&
		 tlp_in_fifo_D_OUT[150:144] == 7'h04 &&
		 (tlp_in_fifo_D_OUT[126:125] == 2'd0 ||
		  tlp_in_fifo_D_OUT[126:125] == 2'd2 &&
		  tlp_in_fifo_D_OUT[124:120] != 5'd10) &&
		 tlp_out_fifo_1_FULL_N &&
		 !tlp_in_fifo_D_OUT[151]) ?
		  3'd5 :
		  3'd7) ;
  assign routeToPort_EN =
	     tlp_in_fifo_EMPTY_N &&
	     (tlp_in_fifo_first_BIT_152_AND_tlp_in_fifo_firs_ETC___d39 ||
	      _dfoo4) ;

  // submodule tlp_in_fifo
  assign tlp_in_fifo_D_IN = inFromBus_put ;
  assign tlp_in_fifo_ENQ = EN_inFromBus_put ;
  assign tlp_in_fifo_DEQ =
	     tlp_in_fifo_EMPTY_N &&
	     (tlp_in_fifo_first_BIT_152_AND_tlp_in_fifo_firs_ETC___d30 ||
	      _dfoo8) ;
  assign tlp_in_fifo_CLR = 1'b0 ;

  // submodule tlp_out_fifo_0
  assign tlp_out_fifo_0_D_IN = tlp_in_fifo_D_OUT ;
  assign tlp_out_fifo_0_ENQ = tlp_in_fifo_EMPTY_N && _dfoo9 ;
  assign tlp_out_fifo_0_DEQ = EN_out_0_get ;
  assign tlp_out_fifo_0_CLR = 1'b0 ;

  // submodule tlp_out_fifo_1
  assign tlp_out_fifo_1_D_IN = tlp_in_fifo_D_OUT ;
  assign tlp_out_fifo_1_ENQ = tlp_in_fifo_EMPTY_N && _dfoo6 ;
  assign tlp_out_fifo_1_DEQ = EN_out_1_get ;
  assign tlp_out_fifo_1_CLR = 1'b0 ;

  // submodule tlp_out_fifo_2
  assign tlp_out_fifo_2_D_IN = tlp_in_fifo_D_OUT ;
  assign tlp_out_fifo_2_ENQ =
	     tlp_in_fifo_EMPTY_N && routeToPort[1:0] == 2'd2 &&
	     !tlp_in_fifo_D_OUT[152] &&
	     routeToPort[2] &&
	     SEL_ARR_tlp_out_fifo_0_i_notFull__5_tlp_out_fi_ETC___d25 ;
  assign tlp_out_fifo_2_DEQ = EN_out_2_get ;
  assign tlp_out_fifo_2_CLR = 1'b0 ;

  // submodule tlp_out_fifo_3
  assign tlp_out_fifo_3_D_IN = tlp_in_fifo_D_OUT ;
  assign tlp_out_fifo_3_ENQ = tlp_in_fifo_EMPTY_N && _dfoo1 ;
  assign tlp_out_fifo_3_DEQ = EN_out_3_get ;
  assign tlp_out_fifo_3_CLR = 1'b0 ;

  // remaining internal signals
  assign _dfoo1 =
	     tlp_in_fifo_D_OUT[152] && tlp_in_fifo_D_OUT[126:125] == 2'd2 &&
	     tlp_in_fifo_D_OUT[124:120] == 5'd10 &&
	     tlp_out_fifo_3_FULL_N ||
	     routeToPort[1:0] == 2'd3 && !tlp_in_fifo_D_OUT[152] &&
	     routeToPort[2] &&
	     SEL_ARR_tlp_out_fifo_0_i_notFull__5_tlp_out_fi_ETC___d25 ;
  assign _dfoo4 =
	     tlp_in_fifo_D_OUT[152] &&
	     (tlp_in_fifo_D_OUT[150:144] == 7'h04 &&
	      (tlp_in_fifo_D_OUT[126:125] == 2'd0 ||
	       tlp_in_fifo_D_OUT[126:125] == 2'd2 &&
	       tlp_in_fifo_D_OUT[124:120] != 5'd10) &&
	      tlp_out_fifo_1_FULL_N &&
	      !tlp_in_fifo_D_OUT[151] ||
	      tlp_in_fifo_D_OUT[126:125] == 2'd2 &&
	      tlp_in_fifo_D_OUT[124:120] == 5'd10 &&
	      tlp_out_fifo_3_FULL_N &&
	      !tlp_in_fifo_D_OUT[151]) ;
  assign _dfoo6 =
	     tlp_in_fifo_D_OUT[152] && tlp_in_fifo_D_OUT[150:144] == 7'h04 &&
	     (tlp_in_fifo_D_OUT[126:125] == 2'd0 ||
	      tlp_in_fifo_D_OUT[126:125] == 2'd2 &&
	      tlp_in_fifo_D_OUT[124:120] != 5'd10) &&
	     tlp_out_fifo_1_FULL_N ||
	     routeToPort[1:0] == 2'd1 && !tlp_in_fifo_D_OUT[152] &&
	     routeToPort[2] &&
	     SEL_ARR_tlp_out_fifo_0_i_notFull__5_tlp_out_fi_ETC___d25 ;
  assign _dfoo8 =
	     tlp_in_fifo_D_OUT[152] && tlp_in_fifo_D_OUT[150:144] == 7'h04 &&
	     (tlp_in_fifo_D_OUT[126:125] == 2'd0 ||
	      tlp_in_fifo_D_OUT[126:125] == 2'd2 &&
	      tlp_in_fifo_D_OUT[124:120] != 5'd10) &&
	     tlp_out_fifo_1_FULL_N ||
	     tlp_in_fifo_D_OUT[152] &&
	     (tlp_in_fifo_D_OUT[126:125] == 2'd2 &&
	      tlp_in_fifo_D_OUT[124:120] == 5'd10 &&
	      tlp_out_fifo_3_FULL_N ||
	      (tlp_in_fifo_D_OUT[126:125] != 2'd2 ||
	       tlp_in_fifo_D_OUT[124:120] != 5'd10) &&
	      (tlp_in_fifo_D_OUT[150:144] != 7'h04 ||
	       tlp_in_fifo_D_OUT[126:125] != 2'd0 &&
	       (tlp_in_fifo_D_OUT[126:125] != 2'd2 ||
		tlp_in_fifo_D_OUT[124:120] == 5'd10)) &&
	      (tlp_in_fifo_D_OUT[150:144] != 7'h01 ||
	       tlp_in_fifo_D_OUT[126:125] != 2'd0 &&
	       (tlp_in_fifo_D_OUT[126:125] != 2'd2 ||
		tlp_in_fifo_D_OUT[124:120] == 5'd10))) ;
  assign _dfoo9 =
	     tlp_in_fifo_D_OUT[152] && tlp_in_fifo_D_OUT[150:144] == 7'h01 &&
	     (tlp_in_fifo_D_OUT[126:125] == 2'd0 ||
	      tlp_in_fifo_D_OUT[126:125] == 2'd2 &&
	      tlp_in_fifo_D_OUT[124:120] != 5'd10) &&
	     tlp_out_fifo_0_FULL_N ||
	     routeToPort[1:0] == 2'd0 && !tlp_in_fifo_D_OUT[152] &&
	     routeToPort[2] &&
	     SEL_ARR_tlp_out_fifo_0_i_notFull__5_tlp_out_fi_ETC___d25 ;
  assign tlp_in_fifo_first_BIT_152_AND_tlp_in_fifo_firs_ETC___d30 =
	     tlp_in_fifo_D_OUT[152] && tlp_in_fifo_D_OUT[150:144] == 7'h01 &&
	     (tlp_in_fifo_D_OUT[126:125] == 2'd0 ||
	      tlp_in_fifo_D_OUT[126:125] == 2'd2 &&
	      tlp_in_fifo_D_OUT[124:120] != 5'd10) &&
	     tlp_out_fifo_0_FULL_N ||
	     !tlp_in_fifo_D_OUT[152] &&
	     (SEL_ARR_tlp_out_fifo_0_i_notFull__5_tlp_out_fi_ETC___d25 ||
	      !routeToPort[2]) ;
  assign tlp_in_fifo_first_BIT_152_AND_tlp_in_fifo_firs_ETC___d39 =
	     tlp_in_fifo_D_OUT[152] && tlp_in_fifo_D_OUT[150:144] == 7'h01 &&
	     (tlp_in_fifo_D_OUT[126:125] == 2'd0 ||
	      tlp_in_fifo_D_OUT[126:125] == 2'd2 &&
	      tlp_in_fifo_D_OUT[124:120] != 5'd10) &&
	     tlp_out_fifo_0_FULL_N &&
	     !tlp_in_fifo_D_OUT[151] ||
	     !tlp_in_fifo_D_OUT[152] && routeToPort[2] &&
	     SEL_ARR_tlp_out_fifo_0_i_notFull__5_tlp_out_fi_ETC___d25 &&
	     tlp_in_fifo_D_OUT[151] ;
  always@(routeToPort or
	  tlp_out_fifo_0_FULL_N or
	  tlp_out_fifo_1_FULL_N or
	  tlp_out_fifo_2_FULL_N or tlp_out_fifo_3_FULL_N)
  begin
    case (routeToPort[1:0])
      2'd0:
	  SEL_ARR_tlp_out_fifo_0_i_notFull__5_tlp_out_fi_ETC___d25 =
	      tlp_out_fifo_0_FULL_N;
      2'd1:
	  SEL_ARR_tlp_out_fifo_0_i_notFull__5_tlp_out_fi_ETC___d25 =
	      tlp_out_fifo_1_FULL_N;
      2'd2:
	  SEL_ARR_tlp_out_fifo_0_i_notFull__5_tlp_out_fi_ETC___d25 =
	      tlp_out_fifo_2_FULL_N;
      2'd3:
	  SEL_ARR_tlp_out_fifo_0_i_notFull__5_tlp_out_fi_ETC___d25 =
	      tlp_out_fifo_3_FULL_N;
    endcase
  end

  // handling of inlined registers

  always@(posedge CLK)
  begin
    if (RST_N == `BSV_RESET_VALUE)
      begin
        routeToPort <= `BSV_ASSIGNMENT_DELAY 3'd2;
      end
    else
      begin
        if (routeToPort_EN)
	  routeToPort <= `BSV_ASSIGNMENT_DELAY routeToPort_D_IN;
      end
  end

  // synopsys translate_off
  `ifdef BSV_NO_INITIAL_BLOCKS
  `else // not BSV_NO_INITIAL_BLOCKS
  initial
  begin
    routeToPort = 3'h2;
  end
  `endif // BSV_NO_INITIAL_BLOCKS
  // synopsys translate_on
endmodule  // mkTLPDispatcher

