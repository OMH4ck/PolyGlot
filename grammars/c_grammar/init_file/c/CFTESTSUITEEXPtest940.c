
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MIN;
int8_t x12 = -1;
volatile uint16_t x18 = 0U;
uint32_t x23 = 2306060U;
static int16_t x28 = -14;
volatile int32_t t6 = 201973152;
int8_t x35 = 15;
int8_t x46 = 7;
int32_t x50 = INT32_MIN;
static uint32_t x64 = 2019U;
static volatile int16_t x67 = INT16_MAX;
static volatile int64_t x70 = -1LL;
uint8_t x71 = UINT8_MAX;
volatile int64_t t16 = 33178904LL;
volatile int32_t t17 = -1032995470;
int64_t x84 = INT64_MIN;
volatile int64_t t19 = -177LL;
static uint8_t x92 = UINT8_MAX;
int8_t x94 = INT8_MAX;
uint32_t x99 = UINT32_MAX;
static int64_t x100 = INT64_MIN;
static int64_t t23 = -167438881LL;
volatile int32_t x104 = INT32_MIN;
uint32_t t24 = 22U;
int16_t x109 = -1;
int32_t x113 = -1;
int8_t x116 = 0;
int16_t x117 = -1;
uint32_t x121 = UINT32_MAX;
volatile int8_t x133 = -1;
int64_t x135 = -197LL;
int64_t t32 = 722681520LL;
int8_t x140 = INT8_MIN;
int32_t x141 = -1;
int64_t x154 = 8288180926451LL;
uint32_t x164 = 296614U;
volatile int32_t t40 = 125304;
static volatile uint16_t x169 = 1704U;
static uint16_t x175 = 63U;
static uint64_t x178 = 5888808743760213LLU;
static int16_t x181 = INT16_MAX;
uint16_t x191 = UINT16_MAX;
int32_t x192 = 46708296;
uint64_t x198 = UINT64_MAX;
static volatile uint64_t t47 = 6975125468LLU;
uint64_t t48 = 5814144962772685LLU;
int32_t x216 = -1;
static uint32_t x217 = 144505171U;
uint32_t x219 = 67928U;
static int8_t x220 = -7;
volatile int8_t x228 = INT8_MIN;
uint64_t t52 = 119237147LLU;
volatile int32_t x229 = INT32_MIN;
int8_t x235 = -2;
int64_t x239 = INT64_MIN;
static int64_t x240 = INT64_MIN;
int64_t x241 = INT64_MAX;
int8_t x245 = -1;
int8_t x250 = 0;
int32_t t58 = -31;
volatile int32_t x253 = INT32_MAX;
static int32_t x256 = -1;
volatile uint8_t x264 = 7U;
int32_t t61 = 312527;
int64_t x266 = -1LL;
volatile int64_t t62 = -22096735LL;
volatile int16_t x269 = INT16_MIN;
volatile uint64_t x270 = 161160591311597LLU;
volatile int64_t t64 = 118546328360713742LL;
uint64_t x280 = 15048900LLU;
int8_t x282 = INT8_MIN;
int64_t x289 = INT64_MIN;
uint16_t x290 = 141U;
uint64_t x299 = UINT64_MAX;
static int16_t x301 = INT16_MAX;
int32_t x312 = INT32_MIN;
volatile int8_t x315 = INT8_MIN;
static uint8_t x323 = 3U;
volatile int8_t x324 = -13;
volatile uint64_t t75 = 45657620467837237LLU;
int8_t x331 = -1;
int8_t x334 = 7;
int64_t x337 = -45LL;
uint16_t x341 = 88U;
volatile int64_t t81 = -348LL;
uint64_t t82 = 2099870273LLU;
volatile uint64_t x369 = 114605875LLU;
int32_t x372 = INT32_MIN;
volatile int32_t x374 = INT32_MIN;
int32_t x377 = -158679;
volatile int32_t t86 = -24341661;
int8_t x392 = -27;
int64_t t89 = -58371055915LL;
volatile int32_t x397 = -1;
volatile int32_t t91 = 11476;
static int8_t x403 = -1;
volatile int64_t t92 = 2279121485137LL;
volatile int32_t x409 = INT32_MIN;
volatile int32_t x411 = INT32_MIN;
static int64_t x413 = INT64_MIN;
static int8_t x416 = INT8_MIN;
static volatile uint64_t t97 = UINT64_MAX;
int8_t x437 = -3;
volatile int8_t x443 = INT8_MAX;
uint32_t x446 = 3921U;
int16_t x451 = INT16_MAX;
int32_t t103 = -4182637;
volatile uint8_t x458 = 7U;
int32_t x459 = INT32_MAX;
int8_t x481 = -1;
volatile uint16_t x497 = 14889U;
static int64_t x499 = INT64_MAX;
static uint8_t x503 = 22U;
static uint8_t x507 = UINT8_MAX;
static int32_t x509 = -1;
int16_t x513 = 19;
static int32_t x519 = INT32_MAX;
int8_t x520 = 2;
uint16_t x522 = UINT16_MAX;
uint16_t x523 = 55U;
volatile uint16_t x531 = UINT16_MAX;
volatile uint64_t t124 = 343516818914LLU;
volatile int32_t x549 = INT32_MIN;
uint8_t x554 = UINT8_MAX;
int8_t x557 = INT8_MAX;
static int16_t x565 = 0;
volatile int64_t t131 = 2LL;
uint16_t x578 = 623U;
int64_t t132 = 108764713541559904LL;
int64_t x583 = -8838109LL;
int64_t t133 = -5411042618241LL;
static int8_t x593 = 5;
static int16_t x603 = INT16_MAX;
int64_t t137 = 4826061561424871LL;
static uint64_t x614 = UINT64_MAX;
uint64_t x615 = UINT64_MAX;
static uint64_t t139 = 987LLU;
uint64_t x618 = UINT64_MAX;
int16_t x623 = INT16_MAX;
int16_t x627 = -2;
volatile int64_t t142 = 1476283LL;
static int32_t x631 = -11;
volatile int64_t t143 = -16498629LL;
static volatile int32_t t146 = -247;
uint64_t t149 = 1102477192200LLU;
int8_t x668 = INT8_MIN;
volatile int64_t t150 = -5745LL;
uint16_t x670 = 3U;
static volatile int64_t t152 = 230036915545132267LL;
uint16_t x678 = UINT16_MAX;
uint64_t x680 = UINT64_MAX;
int64_t x686 = INT64_MAX;
uint8_t x694 = 6U;
static uint8_t x695 = UINT8_MAX;
static uint8_t x702 = UINT8_MAX;
static volatile uint64_t x705 = UINT64_MAX;
volatile uint32_t x707 = 587028U;
uint16_t x708 = 163U;
volatile uint64_t t160 = UINT64_MAX;
static int64_t x709 = -1LL;
int16_t x711 = 28;
static int8_t x718 = -1;
int8_t x719 = -12;
static int8_t x724 = -1;
static uint16_t x727 = UINT16_MAX;
uint64_t t165 = UINT64_MAX;
int16_t x733 = 1288;
uint64_t x734 = 294776693106269LLU;
int8_t x735 = -1;
int16_t x740 = INT16_MAX;
volatile uint32_t t168 = 2U;
volatile int64_t x743 = INT64_MIN;
uint32_t t170 = 25982176U;
volatile uint64_t t171 = 29LLU;
int64_t t174 = 16109LL;
volatile int32_t x766 = INT32_MAX;
static uint16_t x769 = 10291U;
int8_t x772 = INT8_MIN;
int32_t x773 = -1;
int32_t x774 = INT32_MAX;
int32_t x776 = 7451;
volatile int32_t t177 = -764;
uint16_t x779 = 2223U;
static uint64_t t178 = 9333346582850LLU;
int8_t x788 = 0;
int16_t x796 = 4;
int32_t x798 = -54086170;
uint16_t x799 = 16171U;
static int32_t x805 = INT32_MIN;
uint16_t x806 = 1614U;
int16_t x809 = INT16_MAX;
uint64_t x812 = 43428289204782152LLU;
uint16_t x813 = UINT16_MAX;
static uint16_t x828 = UINT16_MAX;
static uint32_t x832 = 460U;
uint16_t x833 = 546U;
static volatile uint16_t x845 = 0U;
volatile int32_t t193 = -4443545;
int16_t x854 = 1;
int32_t x872 = -198785484;


void f0(void) {
    	int64_t x2 = INT64_MIN;
	static int64_t x3 = INT64_MIN;
	volatile int8_t x4 = -1;
	volatile int64_t t0 = 16562631469276918LL;

    t0 = (x1-((x2%x3)&x4));

    if (t0 != -32768LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x5 = INT64_MAX;
	uint16_t x6 = 1U;
	int32_t x7 = INT32_MIN;
	static volatile int16_t x8 = 1;
	int64_t t1 = 44LL;

    t1 = (x5-((x6%x7)&x8));

    if (t1 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint32_t x9 = 538U;
	volatile int16_t x10 = 10961;
	volatile int16_t x11 = -1;
	uint32_t t2 = 21529U;

    t2 = (x9-((x10%x11)&x12));

    if (t2 != 538U) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint64_t x13 = 3258410481102556095LLU;
	int64_t x14 = INT64_MIN;
	int16_t x15 = INT16_MAX;
	int64_t x16 = INT64_MAX;
	static volatile uint64_t t3 = 4538277LLU;

    t3 = (x13-((x14%x15)&x16));

    if (t3 != 12481782517957331911LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MIN;
	volatile int64_t x19 = INT64_MIN;
	int16_t x20 = INT16_MIN;
	volatile int64_t t4 = 7666990535LL;

    t4 = (x17-((x18%x19)&x20));

    if (t4 != -32768LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = -3776;
	uint64_t x22 = 910529687406LLU;
	volatile int32_t x24 = INT32_MAX;
	uint64_t t5 = 464909LLU;

    t5 = (x21-((x22%x23)&x24));

    if (t5 != 18446744073709202954LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = -7;
	int8_t x26 = 0;
	uint16_t x27 = 1534U;

    t6 = (x25-((x26%x27)&x28));

    if (t6 != -7) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = INT16_MIN;
	uint32_t x30 = 59937U;
	int64_t x31 = -1LL;
	uint32_t x32 = 134U;
	int64_t t7 = -42LL;

    t7 = (x29-((x30%x31)&x32));

    if (t7 != -32768LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = -188073LL;
	int64_t x34 = INT64_MAX;
	volatile int16_t x36 = INT16_MAX;
	int64_t t8 = -31834067LL;

    t8 = (x33-((x34%x35)&x36));

    if (t8 != -188080LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int64_t x37 = -1LL;
	int8_t x38 = -3;
	uint32_t x39 = UINT32_MAX;
	uint64_t x40 = UINT64_MAX;
	static volatile uint64_t t9 = 9130778LLU;

    t9 = (x37-((x38%x39)&x40));

    if (t9 != 18446744069414584322LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x45 = 404LL;
	volatile int32_t x47 = -10;
	uint8_t x48 = 1U;
	volatile int64_t t10 = -166111752432LL;

    t10 = (x45-((x46%x47)&x48));

    if (t10 != 403LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x49 = 133345;
	int16_t x51 = INT16_MIN;
	int64_t x52 = INT64_MAX;
	int64_t t11 = 3057862LL;

    t11 = (x49-((x50%x51)&x52));

    if (t11 != 133345LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint8_t x53 = 6U;
	int16_t x54 = -1;
	static volatile int16_t x55 = INT16_MIN;
	static volatile int16_t x56 = -1;
	volatile int32_t t12 = 10;

    t12 = (x53-((x54%x55)&x56));

    if (t12 != 7) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int64_t x57 = -128225426661LL;
	static int8_t x58 = 1;
	static uint64_t x59 = UINT64_MAX;
	int16_t x60 = INT16_MAX;
	uint64_t t13 = 14601800038LLU;

    t13 = (x57-((x58%x59)&x60));

    if (t13 != 18446743945484124954LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x61 = -18;
	int32_t x62 = 2;
	int16_t x63 = 37;
	volatile uint32_t t14 = 19U;

    t14 = (x61-((x62%x63)&x64));

    if (t14 != 4294967276U) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x65 = 6;
	volatile uint8_t x66 = UINT8_MAX;
	static volatile int32_t x68 = INT32_MAX;
	int32_t t15 = 15;

    t15 = (x65-((x66%x67)&x68));

    if (t15 != -249) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x69 = -62LL;
	volatile int64_t x72 = -1LL;

    t16 = (x69-((x70%x71)&x72));

    if (t16 != -61LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x73 = INT8_MIN;
	int16_t x74 = INT16_MIN;
	int32_t x75 = -1;
	int8_t x76 = -1;

    t17 = (x73-((x74%x75)&x76));

    if (t17 != -128) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x77 = -1;
	int8_t x78 = INT8_MIN;
	int32_t x79 = INT32_MIN;
	volatile uint32_t x80 = 52930U;
	static volatile uint32_t t18 = 90140U;

    t18 = (x77-((x78%x79)&x80));

    if (t18 != 4294914431U) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x81 = -1;
	static int64_t x82 = 56549261886456LL;
	int8_t x83 = -1;

    t19 = (x81-((x82%x83)&x84));

    if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x85 = INT16_MIN;
	int8_t x86 = INT8_MAX;
	static int32_t x87 = INT32_MIN;
	int64_t x88 = INT64_MAX;
	volatile int64_t t20 = 1LL;

    t20 = (x85-((x86%x87)&x88));

    if (t20 != -32895LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint32_t x89 = 76689U;
	int8_t x90 = 8;
	int32_t x91 = -1;
	uint32_t t21 = 753761186U;

    t21 = (x89-((x90%x91)&x92));

    if (t21 != 76689U) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x93 = -114717352370466LL;
	uint16_t x95 = 26796U;
	int8_t x96 = INT8_MIN;
	volatile int64_t t22 = -20125LL;

    t22 = (x93-((x94%x95)&x96));

    if (t22 != -114717352370466LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint8_t x97 = 1U;
	uint16_t x98 = UINT16_MAX;

    t23 = (x97-((x98%x99)&x100));

    if (t23 != 1LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x101 = INT8_MAX;
	uint32_t x102 = 24685U;
	int8_t x103 = INT8_MIN;

    t24 = (x101-((x102%x103)&x104));

    if (t24 != 127U) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x105 = -1;
	int16_t x106 = -1;
	uint8_t x107 = UINT8_MAX;
	static int16_t x108 = INT16_MIN;
	volatile int32_t t25 = 9894659;

    t25 = (x105-((x106%x107)&x108));

    if (t25 != 32767) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x110 = 0;
	volatile int8_t x111 = -1;
	int8_t x112 = -1;
	int32_t t26 = 7765;

    t26 = (x109-((x110%x111)&x112));

    if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint16_t x114 = 1177U;
	volatile int32_t x115 = -3936368;
	static volatile int32_t t27 = 152797871;

    t27 = (x113-((x114%x115)&x116));

    if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x118 = -146449741260038LL;
	uint32_t x119 = UINT32_MAX;
	static int16_t x120 = INT16_MIN;
	static volatile int64_t t28 = -1LL;

    t28 = (x117-((x118%x119)&x120));

    if (t28 != 4241424383LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x122 = 15;
	uint16_t x123 = UINT16_MAX;
	static volatile int16_t x124 = 7;
	static uint32_t t29 = 1U;

    t29 = (x121-((x122%x123)&x124));

    if (t29 != 4294967288U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x125 = UINT64_MAX;
	uint32_t x126 = UINT32_MAX;
	volatile int16_t x127 = INT16_MIN;
	static int8_t x128 = INT8_MAX;
	volatile uint64_t t30 = 45679759LLU;

    t30 = (x125-((x126%x127)&x128));

    if (t30 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x129 = -224098463;
	uint64_t x130 = 66832053802053071LLU;
	static volatile int8_t x131 = INT8_MIN;
	static int8_t x132 = -1;
	volatile uint64_t t31 = 95925861126834647LLU;

    t31 = (x129-((x130%x131)&x132));

    if (t31 != 18379912019683400082LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x134 = -1;
	volatile int8_t x136 = -15;

    t32 = (x133-((x134%x135)&x136));

    if (t32 != 14LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x137 = 28U;
	int16_t x138 = INT16_MIN;
	int8_t x139 = -1;
	uint32_t t33 = 460764U;

    t33 = (x137-((x138%x139)&x140));

    if (t33 != 28U) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x142 = 10674U;
	int8_t x143 = -1;
	int32_t x144 = INT32_MIN;
	uint32_t t34 = UINT32_MAX;

    t34 = (x141-((x142%x143)&x144));

    if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x145 = -304296;
	int8_t x146 = INT8_MIN;
	int8_t x147 = INT8_MIN;
	volatile int16_t x148 = INT16_MIN;
	volatile int32_t t35 = -229;

    t35 = (x145-((x146%x147)&x148));

    if (t35 != -304296) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x149 = 66U;
	int64_t x150 = INT64_MIN;
	int32_t x151 = -1;
	static int32_t x152 = -259;
	int64_t t36 = -3038476063480050LL;

    t36 = (x149-((x150%x151)&x152));

    if (t36 != 66LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x153 = UINT32_MAX;
	int32_t x155 = INT32_MIN;
	int16_t x156 = INT16_MIN;
	static int64_t t37 = -1429802056406239LL;

    t37 = (x153-((x154%x155)&x156));

    if (t37 != 3253469183LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x157 = 121513265166804073LLU;
	uint64_t x158 = 435374965543LLU;
	int16_t x159 = -1;
	volatile uint64_t x160 = 1LLU;
	uint64_t t38 = 994140476LLU;

    t38 = (x157-((x158%x159)&x160));

    if (t38 != 121513265166804072LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint8_t x161 = UINT8_MAX;
	int64_t x162 = -1LL;
	uint64_t x163 = 306627424LLU;
	volatile uint64_t t39 = 1668674LLU;

    t39 = (x161-((x162%x163)&x164));

    if (t39 != 18446744073709288665LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x165 = -2033;
	int8_t x166 = -1;
	int8_t x167 = INT8_MIN;
	volatile int32_t x168 = -1;

    t40 = (x165-((x166%x167)&x168));

    if (t40 != -2032) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint16_t x170 = UINT16_MAX;
	static int64_t x171 = -1LL;
	static uint32_t x172 = 825693544U;
	int64_t t41 = -261665342031LL;

    t41 = (x169-((x170%x171)&x172));

    if (t41 != 1704LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x173 = -1;
	int16_t x174 = INT16_MIN;
	static int32_t x176 = INT32_MAX;
	int32_t t42 = -66;

    t42 = (x173-((x174%x175)&x176));

    if (t42 != -2147483641) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x177 = 2116754112570876LL;
	int16_t x179 = INT16_MIN;
	uint32_t x180 = 123498010U;
	uint64_t t43 = 1670325660928835490LLU;

    t43 = (x177-((x178%x179)&x180));

    if (t43 != 2116754090526188LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x182 = INT8_MAX;
	volatile uint16_t x183 = 1U;
	int8_t x184 = 0;
	static int32_t t44 = -1;

    t44 = (x181-((x182%x183)&x184));

    if (t44 != 32767) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x189 = 520737U;
	static volatile int16_t x190 = INT16_MIN;
	static volatile uint32_t t45 = 6U;

    t45 = (x189-((x190%x191)&x192));

    if (t45 != 4248793633U) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x193 = 1;
	uint8_t x194 = UINT8_MAX;
	volatile int16_t x195 = INT16_MIN;
	int32_t x196 = INT32_MAX;
	volatile int32_t t46 = 10560;

    t46 = (x193-((x194%x195)&x196));

    if (t46 != -254) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int32_t x197 = INT32_MIN;
	static int32_t x199 = -1;
	static int8_t x200 = -1;

    t47 = (x197-((x198%x199)&x200));

    if (t47 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint64_t x201 = 208283713177LLU;
	int32_t x202 = INT32_MAX;
	int64_t x203 = INT64_MAX;
	volatile int8_t x204 = INT8_MIN;

    t48 = (x201-((x202%x203)&x204));

    if (t48 != 206136229657LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x209 = INT16_MIN;
	uint32_t x210 = UINT32_MAX;
	uint8_t x211 = 3U;
	int8_t x212 = -1;
	volatile uint32_t t49 = 90741684U;

    t49 = (x209-((x210%x211)&x212));

    if (t49 != 4294934528U) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x213 = -1;
	static int64_t x214 = -1LL;
	int32_t x215 = INT32_MAX;
	volatile int64_t t50 = -195836854713606703LL;

    t50 = (x213-((x214%x215)&x216));

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x218 = -1;
	uint32_t t51 = 12134754U;

    t51 = (x217-((x218%x219)&x220));

    if (t51 != 144489466U) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint64_t x225 = UINT64_MAX;
	static int64_t x226 = 64465235981299493LL;
	volatile uint16_t x227 = 6612U;

    t52 = (x225-((x226%x227)&x228));

    if (t52 != 18446744073709545471LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x230 = INT32_MAX;
	static int16_t x231 = 84;
	static int64_t x232 = -1LL;
	volatile int64_t t53 = -36172350LL;

    t53 = (x229-((x230%x231)&x232));

    if (t53 != -2147483691LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x233 = INT16_MIN;
	uint32_t x234 = 6U;
	int64_t x236 = -11584763688241296LL;
	int64_t t54 = 372617286007LL;

    t54 = (x233-((x234%x235)&x236));

    if (t54 != -32768LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x237 = 2880;
	uint32_t x238 = 2477362U;
	int64_t t55 = -1261449548949355234LL;

    t55 = (x237-((x238%x239)&x240));

    if (t55 != 2880LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x242 = -1;
	static volatile int64_t x243 = INT64_MIN;
	volatile int8_t x244 = 3;
	volatile int64_t t56 = -2105074230605185096LL;

    t56 = (x241-((x242%x243)&x244));

    if (t56 != 9223372036854775804LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int8_t x246 = -1;
	static uint16_t x247 = 84U;
	int32_t x248 = -30910669;
	volatile int32_t t57 = 37;

    t57 = (x245-((x246%x247)&x248));

    if (t57 != 30910668) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x249 = 0;
	int8_t x251 = INT8_MAX;
	static int8_t x252 = INT8_MAX;

    t58 = (x249-((x250%x251)&x252));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint64_t x254 = 14201LLU;
	static volatile int32_t x255 = INT32_MIN;
	uint64_t t59 = 15LLU;

    t59 = (x253-((x254%x255)&x256));

    if (t59 != 2147469446LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x257 = -4;
	int64_t x258 = INT64_MIN;
	int8_t x259 = -1;
	static uint64_t x260 = UINT64_MAX;
	static uint64_t t60 = 707424913089823487LLU;

    t60 = (x257-((x258%x259)&x260));

    if (t60 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x261 = -1583;
	int8_t x262 = INT8_MIN;
	int16_t x263 = 9;

    t61 = (x261-((x262%x263)&x264));

    if (t61 != -1589) { NG(); } else { ; }
	
}

void f62(void) {
    	static int32_t x265 = -1;
	int16_t x267 = INT16_MAX;
	int8_t x268 = INT8_MAX;

    t62 = (x265-((x266%x267)&x268));

    if (t62 != -128LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x271 = INT32_MIN;
	volatile int32_t x272 = INT32_MIN;
	static volatile uint64_t t63 = 5747063LLU;

    t63 = (x269-((x270%x271)&x272));

    if (t63 != 18446582913651671040LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x273 = 27080464999627LL;
	static int8_t x274 = -27;
	static uint16_t x275 = UINT16_MAX;
	int64_t x276 = -7LL;

    t64 = (x273-((x274%x275)&x276));

    if (t64 != 27080464999658LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x277 = 416869U;
	uint32_t x278 = UINT32_MAX;
	uint32_t x279 = 11U;
	static uint64_t t65 = 24824572348LLU;

    t65 = (x277-((x278%x279)&x280));

    if (t65 != 416869LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x281 = INT64_MIN;
	int8_t x283 = INT8_MIN;
	static int8_t x284 = INT8_MAX;
	static volatile int64_t t66 = INT64_MIN;

    t66 = (x281-((x282%x283)&x284));

    if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x285 = 78U;
	static uint32_t x286 = UINT32_MAX;
	volatile int32_t x287 = -1;
	volatile uint8_t x288 = UINT8_MAX;
	volatile uint32_t t67 = 135467353U;

    t67 = (x285-((x286%x287)&x288));

    if (t67 != 78U) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x291 = -1LL;
	volatile uint16_t x292 = 1388U;
	static int64_t t68 = INT64_MIN;

    t68 = (x289-((x290%x291)&x292));

    if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x293 = -1;
	volatile uint64_t x294 = 2264261474971LLU;
	static int16_t x295 = -1;
	int16_t x296 = INT16_MIN;
	static uint64_t t69 = 2594525255LLU;

    t69 = (x293-((x294%x295)&x296));

    if (t69 != 18446741809448091647LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x297 = UINT32_MAX;
	int32_t x298 = INT32_MIN;
	static uint16_t x300 = 5U;
	static volatile uint64_t t70 = 15LLU;

    t70 = (x297-((x298%x299)&x300));

    if (t70 != 4294967295LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x302 = INT16_MIN;
	int32_t x303 = -11;
	int32_t x304 = -211387;
	volatile int32_t t71 = 1147135;

    t71 = (x301-((x302%x303)&x304));

    if (t71 != 244155) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x309 = INT16_MAX;
	int64_t x310 = INT64_MAX;
	int64_t x311 = INT64_MAX;
	volatile int64_t t72 = -3859058946LL;

    t72 = (x309-((x310%x311)&x312));

    if (t72 != 32767LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint16_t x313 = 15U;
	uint8_t x314 = UINT8_MAX;
	int8_t x316 = INT8_MIN;
	volatile int32_t t73 = -1403837;

    t73 = (x313-((x314%x315)&x316));

    if (t73 != 15) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x321 = INT32_MIN;
	static volatile int8_t x322 = -51;
	volatile int32_t t74 = INT32_MIN;

    t74 = (x321-((x322%x323)&x324));

    if (t74 != INT32_MIN) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x325 = 143319533;
	int32_t x326 = 1;
	uint64_t x327 = UINT64_MAX;
	static uint16_t x328 = 319U;

    t75 = (x325-((x326%x327)&x328));

    if (t75 != 143319532LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x329 = -1;
	int64_t x330 = INT64_MIN;
	int64_t x332 = -1LL;
	int64_t t76 = -3618LL;

    t76 = (x329-((x330%x331)&x332));

    if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x333 = 1U;
	static uint32_t x335 = UINT32_MAX;
	int64_t x336 = INT64_MIN;
	int64_t t77 = -18LL;

    t77 = (x333-((x334%x335)&x336));

    if (t77 != 1LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int32_t x338 = -1;
	int16_t x339 = -3;
	uint64_t x340 = UINT64_MAX;
	static volatile uint64_t t78 = 32570354LLU;

    t78 = (x337-((x338%x339)&x340));

    if (t78 != 18446744073709551572LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint32_t x342 = 748174U;
	static int16_t x343 = INT16_MIN;
	int32_t x344 = INT32_MAX;
	volatile uint32_t t79 = 4775U;

    t79 = (x341-((x342%x343)&x344));

    if (t79 != 4294219210U) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x345 = INT8_MIN;
	volatile int8_t x346 = 36;
	volatile int16_t x347 = -1;
	volatile int16_t x348 = -1;
	int32_t t80 = 2;

    t80 = (x345-((x346%x347)&x348));

    if (t80 != -128) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int32_t x353 = INT32_MIN;
	uint16_t x354 = 1U;
	uint32_t x355 = 8257033U;
	volatile int64_t x356 = INT64_MIN;

    t81 = (x353-((x354%x355)&x356));

    if (t81 != -2147483648LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x357 = 30;
	uint64_t x358 = 49699LLU;
	static int8_t x359 = INT8_MIN;
	static volatile int32_t x360 = -112449;

    t82 = (x357-((x358%x359)&x360));

    if (t82 != 18446744073709535227LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int32_t x365 = -1632833;
	int16_t x366 = INT16_MIN;
	volatile int16_t x367 = INT16_MIN;
	int16_t x368 = 2836;
	int32_t t83 = -11441;

    t83 = (x365-((x366%x367)&x368));

    if (t83 != -1632833) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x370 = -22;
	volatile int8_t x371 = INT8_MAX;
	uint64_t t84 = 0LLU;

    t84 = (x369-((x370%x371)&x372));

    if (t84 != 2262089523LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x373 = -1LL;
	int8_t x375 = -13;
	volatile int16_t x376 = -1;
	static int64_t t85 = -138LL;

    t85 = (x373-((x374%x375)&x376));

    if (t85 != 10LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x378 = 5U;
	int32_t x379 = -1;
	static int32_t x380 = INT32_MIN;

    t86 = (x377-((x378%x379)&x380));

    if (t86 != -158679) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x381 = INT16_MAX;
	uint8_t x382 = 62U;
	int8_t x383 = -1;
	int32_t x384 = INT32_MAX;
	int32_t t87 = 16789243;

    t87 = (x381-((x382%x383)&x384));

    if (t87 != 32767) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x385 = INT16_MAX;
	uint32_t x386 = 107803630U;
	uint8_t x387 = 13U;
	int32_t x388 = INT32_MIN;
	static uint32_t t88 = 199U;

    t88 = (x385-((x386%x387)&x388));

    if (t88 != 32767U) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x389 = INT8_MAX;
	uint8_t x390 = 0U;
	int64_t x391 = -1LL;

    t89 = (x389-((x390%x391)&x392));

    if (t89 != 127LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x393 = 14U;
	int64_t x394 = -1LL;
	volatile int64_t x395 = 9872853413LL;
	uint32_t x396 = 430U;
	volatile int64_t t90 = 1LL;

    t90 = (x393-((x394%x395)&x396));

    if (t90 != -416LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x398 = 290;
	int8_t x399 = INT8_MIN;
	static uint8_t x400 = UINT8_MAX;

    t91 = (x397-((x398%x399)&x400));

    if (t91 != -35) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x401 = -33072133;
	int8_t x402 = INT8_MIN;
	volatile int64_t x404 = INT64_MIN;

    t92 = (x401-((x402%x403)&x404));

    if (t92 != -33072133LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x405 = 1U;
	uint32_t x406 = 17290619U;
	static int16_t x407 = -14267;
	volatile uint16_t x408 = 18681U;
	uint32_t t93 = 3005282U;

    t93 = (x405-((x406%x407)&x408));

    if (t93 != 4294950792U) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x410 = 5U;
	uint8_t x412 = UINT8_MAX;
	volatile uint32_t t94 = 24U;

    t94 = (x409-((x410%x411)&x412));

    if (t94 != 2147483643U) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x414 = -1;
	int64_t x415 = 503357LL;
	volatile int64_t t95 = -184240268652722LL;

    t95 = (x413-((x414%x415)&x416));

    if (t95 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x421 = 32271LLU;
	uint64_t x422 = UINT64_MAX;
	int32_t x423 = -1;
	int32_t x424 = INT32_MAX;
	volatile uint64_t t96 = 521006LLU;

    t96 = (x421-((x422%x423)&x424));

    if (t96 != 32271LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint64_t x425 = UINT64_MAX;
	static volatile int32_t x426 = INT32_MAX;
	uint8_t x427 = 58U;
	int16_t x428 = INT16_MIN;

    t97 = (x425-((x426%x427)&x428));

    if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x429 = 2386;
	int32_t x430 = 2372;
	static int16_t x431 = INT16_MAX;
	static volatile int8_t x432 = -58;
	volatile int32_t t98 = -1576600;

    t98 = (x429-((x430%x431)&x432));

    if (t98 != 14) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint64_t x433 = UINT64_MAX;
	volatile int16_t x434 = INT16_MIN;
	int64_t x435 = -28405478LL;
	uint16_t x436 = 247U;
	volatile uint64_t t99 = UINT64_MAX;

    t99 = (x433-((x434%x435)&x436));

    if (t99 != UINT64_MAX) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int16_t x438 = 1;
	int8_t x439 = -1;
	static int16_t x440 = -1818;
	volatile int32_t t100 = -31325;

    t100 = (x437-((x438%x439)&x440));

    if (t100 != -3) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x441 = 1;
	volatile int16_t x442 = INT16_MIN;
	int8_t x444 = INT8_MIN;
	int32_t t101 = 1105;

    t101 = (x441-((x442%x443)&x444));

    if (t101 != 129) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int64_t x445 = -1LL;
	int16_t x447 = INT16_MIN;
	int64_t x448 = INT64_MAX;
	static int64_t t102 = 6LL;

    t102 = (x445-((x446%x447)&x448));

    if (t102 != -3922LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x449 = -1;
	int8_t x450 = INT8_MAX;
	volatile int32_t x452 = INT32_MIN;

    t103 = (x449-((x450%x451)&x452));

    if (t103 != -1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x453 = 8U;
	int8_t x454 = 1;
	int32_t x455 = INT32_MIN;
	uint32_t x456 = UINT32_MAX;
	uint32_t t104 = 14817467U;

    t104 = (x453-((x454%x455)&x456));

    if (t104 != 7U) { NG(); } else { ; }
	
}

void f105(void) {
    	static int32_t x457 = -1;
	volatile int16_t x460 = 1;
	volatile int32_t t105 = -237797;

    t105 = (x457-((x458%x459)&x460));

    if (t105 != -2) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x465 = INT64_MIN;
	static uint64_t x466 = 1800352126306272505LLU;
	static int32_t x467 = INT32_MIN;
	static int32_t x468 = INT32_MIN;
	static uint64_t t106 = 566044LLU;

    t106 = (x465-((x466%x467)&x468));

    if (t106 != 7423019912144093184LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int8_t x473 = INT8_MIN;
	int64_t x474 = -1LL;
	int64_t x475 = -7538LL;
	volatile int16_t x476 = INT16_MIN;
	int64_t t107 = 1836042LL;

    t107 = (x473-((x474%x475)&x476));

    if (t107 != 32640LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x482 = INT32_MIN;
	int8_t x483 = 15;
	static int32_t x484 = 1955120;
	volatile int32_t t108 = -14955593;

    t108 = (x481-((x482%x483)&x484));

    if (t108 != -1955121) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x485 = UINT32_MAX;
	int32_t x486 = INT32_MAX;
	static uint16_t x487 = UINT16_MAX;
	int8_t x488 = -8;
	uint32_t t109 = 522569944U;

    t109 = (x485-((x486%x487)&x488));

    if (t109 != 4294934535U) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint8_t x489 = UINT8_MAX;
	uint8_t x490 = 5U;
	uint8_t x491 = UINT8_MAX;
	int16_t x492 = 1;
	volatile int32_t t110 = 25707;

    t110 = (x489-((x490%x491)&x492));

    if (t110 != 254) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int16_t x493 = INT16_MIN;
	static int64_t x494 = INT64_MIN;
	volatile int32_t x495 = 13743;
	static int32_t x496 = INT32_MAX;
	int64_t t111 = 68405LL;

    t111 = (x493-((x494%x495)&x496));

    if (t111 != -2147510666LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x498 = -1;
	static volatile int8_t x500 = INT8_MAX;
	static int64_t t112 = 2LL;

    t112 = (x497-((x498%x499)&x500));

    if (t112 != 14762LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x501 = INT8_MAX;
	static uint8_t x502 = UINT8_MAX;
	uint8_t x504 = 57U;
	int32_t t113 = -172166;

    t113 = (x501-((x502%x503)&x504));

    if (t113 != 118) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int64_t x505 = -1LL;
	uint16_t x506 = 1U;
	int64_t x508 = INT64_MAX;
	static volatile int64_t t114 = -1LL;

    t114 = (x505-((x506%x507)&x508));

    if (t114 != -2LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x510 = INT32_MAX;
	uint8_t x511 = 2U;
	int64_t x512 = INT64_MIN;
	int64_t t115 = -172300749LL;

    t115 = (x509-((x510%x511)&x512));

    if (t115 != -1LL) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int32_t x514 = -1;
	int8_t x515 = 40;
	volatile uint8_t x516 = 23U;
	static volatile int32_t t116 = -4095293;

    t116 = (x513-((x514%x515)&x516));

    if (t116 != -4) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x517 = 2528;
	volatile int32_t x518 = 172;
	static int32_t t117 = 1752553;

    t117 = (x517-((x518%x519)&x520));

    if (t117 != 2528) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x521 = -1;
	int64_t x524 = -1LL;
	int64_t t118 = -195339249LL;

    t118 = (x521-((x522%x523)&x524));

    if (t118 != -31LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x525 = -1;
	volatile int8_t x526 = INT8_MIN;
	uint32_t x527 = UINT32_MAX;
	volatile uint16_t x528 = 14U;
	static volatile uint32_t t119 = UINT32_MAX;

    t119 = (x525-((x526%x527)&x528));

    if (t119 != UINT32_MAX) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint16_t x529 = 6997U;
	int64_t x530 = INT64_MIN;
	volatile int8_t x532 = -6;
	int64_t t120 = 63046210488729086LL;

    t120 = (x529-((x530%x531)&x532));

    if (t120 != 39765LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x533 = INT16_MAX;
	volatile uint64_t x534 = 254868568842940LLU;
	int32_t x535 = INT32_MAX;
	static uint64_t x536 = UINT64_MAX;
	uint64_t t121 = 73967086LLU;

    t121 = (x533-((x534%x535)&x536));

    if (t121 != 18446744072794934697LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	static int32_t x537 = -20516;
	static uint32_t x538 = UINT32_MAX;
	int8_t x539 = INT8_MIN;
	int16_t x540 = -24;
	uint32_t t122 = 236U;

    t122 = (x537-((x538%x539)&x540));

    if (t122 != 4294946676U) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x541 = 280052239801LL;
	int8_t x542 = INT8_MIN;
	static int8_t x543 = -7;
	uint16_t x544 = UINT16_MAX;
	int64_t t123 = -8049LL;

    t123 = (x541-((x542%x543)&x544));

    if (t123 != 280052174267LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static int16_t x545 = INT16_MIN;
	uint64_t x546 = UINT64_MAX;
	uint32_t x547 = 204996U;
	uint16_t x548 = UINT16_MAX;

    t124 = (x545-((x546%x547)&x548));

    if (t124 != 18446744073709509721LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x550 = 2382500U;
	static int32_t x551 = INT32_MIN;
	int64_t x552 = 228439572LL;
	int64_t t125 = 887513936270816LL;

    t125 = (x549-((x550%x551)&x552));

    if (t125 != -2147750404LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x553 = UINT16_MAX;
	int16_t x555 = -12030;
	static uint64_t x556 = UINT64_MAX;
	volatile uint64_t t126 = 400050654366244055LLU;

    t126 = (x553-((x554%x555)&x556));

    if (t126 != 65280LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x558 = INT8_MAX;
	static uint64_t x559 = 2531LLU;
	static uint32_t x560 = 2023466768U;
	volatile uint64_t t127 = 144496068LLU;

    t127 = (x557-((x558%x559)&x560));

    if (t127 != 111LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x561 = -1;
	static int64_t x562 = -21100950434599LL;
	uint32_t x563 = 212673059U;
	volatile int16_t x564 = 42;
	static volatile int64_t t128 = -741LL;

    t128 = (x561-((x562%x563)&x564));

    if (t128 != -41LL) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int16_t x566 = INT16_MIN;
	volatile uint8_t x567 = UINT8_MAX;
	volatile int64_t x568 = 125150311549LL;
	static int64_t t129 = 10LL;

    t129 = (x565-((x566%x567)&x568));

    if (t129 != -125150311424LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x569 = UINT16_MAX;
	uint8_t x570 = UINT8_MAX;
	int16_t x571 = INT16_MIN;
	static int8_t x572 = INT8_MIN;
	static volatile int32_t t130 = 423862560;

    t130 = (x569-((x570%x571)&x572));

    if (t130 != 65407) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x573 = UINT32_MAX;
	volatile int64_t x574 = INT64_MAX;
	int8_t x575 = -1;
	int64_t x576 = INT64_MAX;

    t131 = (x573-((x574%x575)&x576));

    if (t131 != 4294967295LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x577 = 4620159745889LL;
	static int32_t x579 = -1;
	static volatile int16_t x580 = -25;

    t132 = (x577-((x578%x579)&x580));

    if (t132 != 4620159745889LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x581 = INT16_MIN;
	int32_t x582 = -1;
	int8_t x584 = INT8_MAX;

    t133 = (x581-((x582%x583)&x584));

    if (t133 != -32895LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x585 = 423U;
	int64_t x586 = INT64_MIN;
	static int32_t x587 = -1;
	int64_t x588 = -44LL;
	volatile int64_t t134 = -13158581527479418LL;

    t134 = (x585-((x586%x587)&x588));

    if (t134 != 423LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x594 = 22U;
	uint16_t x595 = UINT16_MAX;
	int8_t x596 = INT8_MIN;
	volatile int32_t t135 = -41500183;

    t135 = (x593-((x594%x595)&x596));

    if (t135 != 5) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x601 = -1;
	uint64_t x602 = 1037165637520LLU;
	int16_t x604 = -2127;
	uint64_t t136 = 3LLU;

    t136 = (x601-((x602%x603)&x604));

    if (t136 != 18446744073709542638LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x605 = INT8_MAX;
	int64_t x606 = INT64_MIN;
	volatile int16_t x607 = -1;
	int16_t x608 = INT16_MIN;

    t137 = (x605-((x606%x607)&x608));

    if (t137 != 127LL) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint64_t x609 = UINT64_MAX;
	volatile int16_t x610 = INT16_MAX;
	int32_t x611 = INT32_MAX;
	uint8_t x612 = 66U;
	uint64_t t138 = 976507LLU;

    t138 = (x609-((x610%x611)&x612));

    if (t138 != 18446744073709551549LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x613 = INT64_MIN;
	int8_t x616 = 55;

    t139 = (x613-((x614%x615)&x616));

    if (t139 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x617 = INT8_MIN;
	static volatile int8_t x619 = -11;
	int8_t x620 = INT8_MAX;
	static uint64_t t140 = 26862LLU;

    t140 = (x617-((x618%x619)&x620));

    if (t140 != 18446744073709551478LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static int64_t x621 = INT64_MAX;
	static volatile int64_t x622 = INT64_MAX;
	int64_t x624 = -1LL;
	static int64_t t141 = 1LL;

    t141 = (x621-((x622%x623)&x624));

    if (t141 != 9223372036854775800LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x625 = INT32_MIN;
	int64_t x626 = 2LL;
	int8_t x628 = INT8_MIN;

    t142 = (x625-((x626%x627)&x628));

    if (t142 != -2147483648LL) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int8_t x629 = -34;
	int64_t x630 = -110492415LL;
	static uint32_t x632 = 448U;

    t143 = (x629-((x630%x631)&x632));

    if (t143 != -34LL) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int16_t x633 = -1;
	static int64_t x634 = INT64_MAX;
	uint8_t x635 = 1U;
	volatile int8_t x636 = INT8_MIN;
	int64_t t144 = 1756719668129362LL;

    t144 = (x633-((x634%x635)&x636));

    if (t144 != -1LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x637 = -705956204;
	int8_t x638 = INT8_MIN;
	uint32_t x639 = UINT32_MAX;
	uint32_t x640 = 1U;
	static uint32_t t145 = 0U;

    t145 = (x637-((x638%x639)&x640));

    if (t145 != 3589011092U) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x641 = INT8_MIN;
	volatile uint16_t x642 = 9U;
	static int8_t x643 = -6;
	uint16_t x644 = UINT16_MAX;

    t146 = (x641-((x642%x643)&x644));

    if (t146 != -131) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x645 = INT16_MAX;
	int8_t x646 = INT8_MIN;
	uint32_t x647 = UINT32_MAX;
	static int8_t x648 = -12;
	uint32_t t147 = 298128U;

    t147 = (x645-((x646%x647)&x648));

    if (t147 != 32895U) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x649 = INT8_MAX;
	static int8_t x650 = INT8_MAX;
	int64_t x651 = -1876030LL;
	int64_t x652 = INT64_MAX;
	volatile int64_t t148 = -6863988LL;

    t148 = (x649-((x650%x651)&x652));

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint64_t x661 = 413725073424LLU;
	int8_t x662 = -1;
	int8_t x663 = -1;
	int32_t x664 = -144654;

    t149 = (x661-((x662%x663)&x664));

    if (t149 != 413725073424LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x665 = -10LL;
	volatile int16_t x666 = INT16_MIN;
	int32_t x667 = INT32_MIN;

    t150 = (x665-((x666%x667)&x668));

    if (t150 != 32758LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x669 = -1;
	int64_t x671 = -1LL;
	static uint8_t x672 = 100U;
	volatile int64_t t151 = 206201900LL;

    t151 = (x669-((x670%x671)&x672));

    if (t151 != -1LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x673 = UINT32_MAX;
	volatile int64_t x674 = -1LL;
	uint8_t x675 = UINT8_MAX;
	int16_t x676 = 262;

    t152 = (x673-((x674%x675)&x676));

    if (t152 != 4294967033LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x677 = INT16_MIN;
	int64_t x679 = INT64_MIN;
	volatile uint64_t t153 = 13LLU;

    t153 = (x677-((x678%x679)&x680));

    if (t153 != 18446744073709453313LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x681 = INT16_MIN;
	int64_t x682 = INT64_MIN;
	uint32_t x683 = UINT32_MAX;
	int32_t x684 = -493;
	volatile int64_t t154 = 158LL;

    t154 = (x681-((x682%x683)&x684));

    if (t154 != 2147450880LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x685 = UINT32_MAX;
	int32_t x687 = INT32_MIN;
	uint16_t x688 = 1548U;
	int64_t t155 = -1912993413276249566LL;

    t155 = (x685-((x686%x687)&x688));

    if (t155 != 4294965747LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x689 = INT8_MIN;
	uint64_t x690 = 416LLU;
	int16_t x691 = -1;
	static uint8_t x692 = UINT8_MAX;
	static uint64_t t156 = 23LLU;

    t156 = (x689-((x690%x691)&x692));

    if (t156 != 18446744073709551328LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x693 = 1U;
	int64_t x696 = 416557359559940071LL;
	volatile int64_t t157 = 3399094245LL;

    t157 = (x693-((x694%x695)&x696));

    if (t157 != -5LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x697 = INT16_MIN;
	int64_t x698 = INT64_MIN;
	volatile int8_t x699 = INT8_MAX;
	static int16_t x700 = INT16_MIN;
	volatile int64_t t158 = -880519LL;

    t158 = (x697-((x698%x699)&x700));

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x701 = -1;
	int16_t x703 = INT16_MIN;
	static int8_t x704 = -32;
	static volatile int32_t t159 = 300642;

    t159 = (x701-((x702%x703)&x704));

    if (t159 != -225) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x706 = 334936;

    t160 = (x705-((x706%x707)&x708));

    if (t160 != UINT64_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x710 = INT8_MIN;
	static int32_t x712 = INT32_MIN;
	static int64_t t161 = 1LL;

    t161 = (x709-((x710%x711)&x712));

    if (t161 != 2147483647LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint32_t x713 = 2099545932U;
	int8_t x714 = 52;
	uint16_t x715 = UINT16_MAX;
	static int64_t x716 = 1052670LL;
	volatile int64_t t162 = 28072348276296166LL;

    t162 = (x713-((x714%x715)&x716));

    if (t162 != 2099545880LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x717 = -1;
	int32_t x720 = 66689213;
	volatile int32_t t163 = -4;

    t163 = (x717-((x718%x719)&x720));

    if (t163 != -66689214) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x721 = -1;
	int16_t x722 = -212;
	static int32_t x723 = -1;
	int32_t t164 = -298167789;

    t164 = (x721-((x722%x723)&x724));

    if (t164 != -1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x725 = UINT64_MAX;
	static int16_t x726 = INT16_MIN;
	int16_t x728 = 588;

    t165 = (x725-((x726%x727)&x728));

    if (t165 != UINT64_MAX) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x729 = 18946U;
	static uint16_t x730 = 7476U;
	int8_t x731 = INT8_MAX;
	volatile int8_t x732 = INT8_MAX;
	static volatile int32_t t166 = -43271615;

    t166 = (x729-((x730%x731)&x732));

    if (t166 != 18836) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint8_t x736 = 1U;
	uint64_t t167 = 231LLU;

    t167 = (x733-((x734%x735)&x736));

    if (t167 != 1287LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x737 = 65089001U;
	static int8_t x738 = -1;
	int32_t x739 = 270257093;

    t168 = (x737-((x738%x739)&x740));

    if (t168 != 65056234U) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x741 = INT32_MIN;
	static int32_t x742 = INT32_MIN;
	int64_t x744 = INT64_MIN;
	volatile int64_t t169 = -10LL;

    t169 = (x741-((x742%x743)&x744));

    if (t169 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x745 = 1975U;
	int8_t x746 = 0;
	volatile int16_t x747 = -1;
	int8_t x748 = INT8_MIN;

    t170 = (x745-((x746%x747)&x748));

    if (t170 != 1975U) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int8_t x749 = 0;
	uint64_t x750 = UINT64_MAX;
	uint16_t x751 = 17564U;
	int16_t x752 = INT16_MAX;

    t171 = (x749-((x750%x751)&x752));

    if (t171 != 18446744073709534473LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x753 = 0U;
	int8_t x754 = -1;
	int16_t x755 = INT16_MAX;
	int32_t x756 = -315770;
	volatile int32_t t172 = 0;

    t172 = (x753-((x754%x755)&x756));

    if (t172 != 315770) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x757 = UINT8_MAX;
	static int64_t x758 = -1LL;
	static uint8_t x759 = 74U;
	int32_t x760 = -174658490;
	int64_t t173 = -1020LL;

    t173 = (x757-((x758%x759)&x760));

    if (t173 != 174658745LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x761 = -1;
	int64_t x762 = -2365LL;
	int8_t x763 = INT8_MIN;
	int32_t x764 = -230786;

    t174 = (x761-((x762%x763)&x764));

    if (t174 != 230845LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x765 = 23120LLU;
	int64_t x767 = INT64_MIN;
	int32_t x768 = 767;
	static volatile uint64_t t175 = 49618977178674759LLU;

    t175 = (x765-((x766%x767)&x768));

    if (t175 != 22353LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile int64_t x770 = -1LL;
	uint8_t x771 = 1U;
	int64_t t176 = 4148LL;

    t176 = (x769-((x770%x771)&x772));

    if (t176 != 10291LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x775 = INT32_MAX;

    t177 = (x773-((x774%x775)&x776));

    if (t177 != -1) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x777 = INT16_MIN;
	int32_t x778 = -1;
	uint64_t x780 = 0LLU;

    t178 = (x777-((x778%x779)&x780));

    if (t178 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x781 = -1;
	uint64_t x782 = 5923021626390LLU;
	int32_t x783 = -1;
	int8_t x784 = INT8_MIN;
	volatile uint64_t t179 = 161026LLU;

    t179 = (x781-((x782%x783)&x784));

    if (t179 != 18446738150687925247LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x785 = INT32_MIN;
	int16_t x786 = -5941;
	static int64_t x787 = 1699LL;
	volatile int64_t t180 = -4364102566LL;

    t180 = (x785-((x786%x787)&x788));

    if (t180 != -2147483648LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x793 = 32;
	int16_t x794 = -3076;
	static int32_t x795 = -68116756;
	int32_t t181 = 1;

    t181 = (x793-((x794%x795)&x796));

    if (t181 != 28) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x797 = -1LL;
	int16_t x800 = INT16_MIN;
	volatile int64_t t182 = 172354423974698LL;

    t182 = (x797-((x798%x799)&x800));

    if (t182 != 32767LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static int64_t x807 = INT64_MIN;
	static int64_t x808 = -2392620780081888194LL;
	static volatile int64_t t183 = -8122724266648LL;

    t183 = (x805-((x806%x807)&x808));

    if (t183 != -2147484686LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x810 = 26078085LL;
	static int32_t x811 = INT32_MIN;
	uint64_t t184 = 3585022LLU;

    t184 = (x809-((x810%x811)&x812));

    if (t184 != 18446744073692741631LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x814 = UINT8_MAX;
	static int64_t x815 = -1LL;
	static int32_t x816 = -1841;
	int64_t t185 = -107122LL;

    t185 = (x813-((x814%x815)&x816));

    if (t185 != 65535LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint16_t x817 = 1919U;
	int32_t x818 = INT32_MAX;
	static int16_t x819 = -1;
	uint64_t x820 = UINT64_MAX;
	uint64_t t186 = 22236032001951537LLU;

    t186 = (x817-((x818%x819)&x820));

    if (t186 != 1919LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x821 = 0;
	int8_t x822 = 4;
	static int16_t x823 = -1;
	int32_t x824 = INT32_MIN;
	static volatile int32_t t187 = 14;

    t187 = (x821-((x822%x823)&x824));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint32_t x825 = UINT32_MAX;
	uint64_t x826 = UINT64_MAX;
	int8_t x827 = INT8_MAX;
	volatile uint64_t t188 = 258434368521678166LLU;

    t188 = (x825-((x826%x827)&x828));

    if (t188 != 4294967294LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x829 = 599364837856683889LL;
	uint16_t x830 = 47U;
	volatile int32_t x831 = INT32_MIN;
	int64_t t189 = 0LL;

    t189 = (x829-((x830%x831)&x832));

    if (t189 != 599364837856683877LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x834 = 15;
	uint16_t x835 = 1U;
	int64_t x836 = INT64_MIN;
	volatile int64_t t190 = -4144731LL;

    t190 = (x833-((x834%x835)&x836));

    if (t190 != 546LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x837 = 113955204723LL;
	int8_t x838 = INT8_MAX;
	uint16_t x839 = 10165U;
	static int64_t x840 = INT64_MIN;
	volatile int64_t t191 = -169823LL;

    t191 = (x837-((x838%x839)&x840));

    if (t191 != 113955204723LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x841 = 593911235165293360LLU;
	int8_t x842 = INT8_MIN;
	static uint32_t x843 = UINT32_MAX;
	volatile int64_t x844 = INT64_MIN;
	uint64_t t192 = 122752915028LLU;

    t192 = (x841-((x842%x843)&x844));

    if (t192 != 593911235165293360LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x846 = INT32_MAX;
	int16_t x847 = INT16_MIN;
	static volatile int32_t x848 = -25996929;

    t193 = (x845-((x846%x847)&x848));

    if (t193 != -20863) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int64_t x853 = -1LL;
	uint8_t x855 = UINT8_MAX;
	int8_t x856 = INT8_MIN;
	static int64_t t194 = 82250LL;

    t194 = (x853-((x854%x855)&x856));

    if (t194 != -1LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x857 = INT8_MIN;
	uint8_t x858 = 47U;
	int8_t x859 = INT8_MAX;
	int16_t x860 = INT16_MAX;
	int32_t t195 = 581;

    t195 = (x857-((x858%x859)&x860));

    if (t195 != -175) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x861 = 1501195476U;
	int64_t x862 = 169795943100LL;
	volatile int16_t x863 = INT16_MAX;
	static volatile int16_t x864 = -1;
	volatile int64_t t196 = 2466LL;

    t196 = (x861-((x862%x863)&x864));

    if (t196 != 1501192249LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x865 = 11U;
	static volatile uint16_t x866 = UINT16_MAX;
	int8_t x867 = -12;
	static int32_t x868 = INT32_MIN;
	volatile int32_t t197 = -51799258;

    t197 = (x865-((x866%x867)&x868));

    if (t197 != 11) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x869 = 3060441U;
	volatile int32_t x870 = 162574;
	static int64_t x871 = -1LL;
	volatile int64_t t198 = 290302357328LL;

    t198 = (x869-((x870%x871)&x872));

    if (t198 != 3060441LL) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x873 = -1;
	int64_t x874 = -1LL;
	volatile int32_t x875 = -1;
	volatile int16_t x876 = -19;
	volatile int64_t t199 = -243LL;

    t199 = (x873-((x874%x875)&x876));

    if (t199 != -1LL) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

