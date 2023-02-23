
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

static int8_t x11 = INT8_MIN;
uint32_t x13 = 1438631U;
int8_t x26 = -17;
int8_t x30 = 1;
uint64_t t7 = 254LLU;
int16_t x33 = -1;
int16_t x35 = 0;
volatile uint32_t t8 = UINT32_MAX;
int16_t x40 = -1;
static volatile int32_t t10 = 24332353;
uint64_t x52 = UINT64_MAX;
static uint64_t t12 = 5285834901276955760LLU;
static int64_t x58 = INT64_MAX;
int8_t x59 = INT8_MIN;
static int32_t t14 = 193671;
int8_t x64 = 54;
static volatile int64_t x70 = -1LL;
uint32_t x71 = 823787483U;
int32_t x72 = INT32_MAX;
int16_t x73 = 15;
uint32_t x74 = UINT32_MAX;
uint64_t x75 = 3230457089182560LLU;
int64_t t18 = 267082598LL;
static uint8_t x82 = UINT8_MAX;
volatile int32_t t20 = INT32_MAX;
int8_t x87 = INT8_MAX;
int32_t t21 = -12803;
int8_t x90 = INT8_MIN;
int32_t x97 = INT32_MIN;
volatile uint16_t x98 = 1U;
volatile uint8_t x100 = UINT8_MAX;
int32_t t24 = INT32_MIN;
int64_t x109 = INT64_MIN;
static int8_t x110 = 14;
uint64_t x127 = 179579931876512LLU;
static volatile uint32_t t30 = UINT32_MAX;
int16_t x135 = INT16_MIN;
static int32_t x138 = -1;
int64_t x139 = INT64_MIN;
volatile uint8_t x140 = UINT8_MAX;
static volatile int8_t x141 = INT8_MIN;
int16_t x147 = -1;
volatile int32_t x156 = INT32_MIN;
int32_t t38 = INT32_MIN;
volatile uint64_t x161 = UINT64_MAX;
uint64_t x162 = UINT64_MAX;
uint64_t t39 = UINT64_MAX;
volatile uint16_t x167 = UINT16_MAX;
int32_t x169 = -1;
int64_t x170 = -190425650210245702LL;
volatile int32_t t41 = 13096;
static int8_t x173 = 13;
static int8_t x185 = INT8_MAX;
volatile uint16_t x191 = 1U;
int8_t x195 = -1;
volatile int64_t t47 = 64851287964LL;
static volatile int64_t x200 = 65673574LL;
static int16_t x204 = INT16_MIN;
static uint8_t x206 = 0U;
static int32_t t50 = -1;
int16_t x210 = INT16_MIN;
uint8_t x212 = UINT8_MAX;
static uint64_t x217 = UINT64_MAX;
int16_t x226 = INT16_MIN;
volatile int64_t x229 = INT64_MAX;
uint8_t x234 = 5U;
int64_t x235 = INT64_MIN;
volatile int64_t t58 = INT64_MAX;
static volatile uint64_t x251 = UINT64_MAX;
int64_t x254 = -1LL;
uint8_t x256 = 50U;
volatile int16_t x262 = -126;
static volatile uint64_t x263 = UINT64_MAX;
volatile int32_t t65 = 2;
uint8_t x283 = 0U;
uint16_t x289 = UINT16_MAX;
static int32_t x290 = -1;
int32_t t71 = 11487387;
int8_t x295 = INT8_MAX;
volatile int64_t t72 = -2410183567620LL;
int32_t x301 = INT32_MIN;
int32_t x306 = INT32_MAX;
volatile int64_t x309 = INT64_MIN;
static uint64_t t77 = 272911872714LLU;
int16_t x321 = INT16_MAX;
int16_t x323 = -2195;
int64_t x326 = -318216497129LL;
static int32_t x330 = INT32_MIN;
volatile int8_t x331 = 1;
uint32_t x333 = 1246U;
uint64_t t82 = 22234873LLU;
uint32_t x339 = UINT32_MAX;
uint32_t t84 = 55U;
int16_t x349 = INT16_MAX;
volatile int8_t x364 = INT8_MIN;
volatile int16_t x365 = INT16_MAX;
volatile int8_t x366 = INT8_MIN;
int32_t t89 = 831;
uint64_t x371 = 1LLU;
int8_t x376 = 53;
volatile int64_t x377 = INT64_MIN;
int32_t t94 = -92578;
int64_t x391 = 65LL;
uint8_t x392 = 1U;
int64_t x393 = INT64_MIN;
uint16_t x398 = 3827U;
int64_t x399 = INT64_MIN;
int32_t x400 = -1;
uint8_t x402 = 2U;
volatile int8_t x404 = 8;
int32_t x408 = INT32_MAX;
static volatile int32_t t100 = 805;
volatile int32_t x419 = -1;
static int16_t x436 = -1;
int64_t x437 = -1LL;
int8_t x457 = INT8_MIN;
volatile int8_t x458 = INT8_MIN;
int32_t x459 = -1;
int32_t x463 = -102031637;
int16_t x464 = 1;
static int16_t x466 = -378;
volatile int32_t t114 = -3;
static volatile int8_t x476 = INT8_MAX;
int64_t x477 = INT64_MIN;
volatile uint8_t x478 = UINT8_MAX;
int16_t x481 = -1;
int8_t x488 = -1;
int32_t x489 = -1;
int32_t x495 = INT32_MAX;
uint8_t x496 = 15U;
int64_t x497 = INT64_MIN;
static int64_t t122 = INT64_MIN;
int32_t x501 = 2024082;
volatile uint32_t t123 = 283U;
volatile int32_t x507 = -1;
uint32_t x508 = UINT32_MAX;
uint32_t t124 = UINT32_MAX;
int64_t t125 = INT64_MAX;
volatile int64_t t126 = -55136540477726LL;
uint16_t x518 = 3U;
static volatile int64_t x519 = -131342359742564LL;
static int64_t t127 = INT64_MIN;
int64_t x524 = INT64_MAX;
volatile int32_t t129 = -301200277;
int64_t x539 = -1LL;
uint16_t x546 = 9U;
int8_t x548 = 48;
static volatile uint8_t x555 = 5U;
uint8_t x557 = 24U;
int64_t x564 = INT64_MAX;
static volatile int64_t t137 = -22LL;
volatile uint64_t x570 = 3354030633338537972LLU;
uint32_t x572 = UINT32_MAX;
static volatile uint8_t x578 = UINT8_MAX;
static uint64_t x583 = 4003413853999136LLU;
static int64_t t142 = INT64_MAX;
int32_t x587 = INT32_MIN;
int64_t t144 = -32274619289882871LL;
uint64_t x595 = 273573460621LLU;
int64_t t145 = -13480286LL;
int64_t x599 = -1LL;
uint32_t x603 = UINT32_MAX;
int16_t x604 = INT16_MIN;
volatile int64_t t149 = -279196599965018727LL;
volatile int16_t x620 = -1;
uint8_t x622 = UINT8_MAX;
static uint32_t x624 = 27U;
int64_t x630 = -1LL;
uint32_t x635 = 1971U;
static int32_t x636 = 10;
static uint32_t t156 = 25293050U;
int32_t x646 = -1;
uint32_t x658 = 4025U;
static int64_t x661 = INT64_MIN;
static uint8_t x662 = UINT8_MAX;
int32_t x663 = -1;
static int64_t t162 = INT64_MIN;
int16_t x668 = INT16_MAX;
volatile int32_t t163 = -1256399;
uint32_t x670 = UINT32_MAX;
volatile uint32_t x683 = UINT32_MAX;
int16_t x685 = -1;
int32_t x702 = INT32_MIN;
static uint16_t x705 = UINT16_MAX;
int8_t x710 = INT8_MIN;
static uint16_t x714 = 6U;
int32_t x719 = INT32_MAX;
static volatile int64_t x722 = -1LL;
int32_t x727 = INT32_MAX;
static uint64_t x728 = 9078LLU;
uint64_t t178 = 27LLU;
int16_t x729 = 7755;
volatile uint8_t x731 = 3U;
static int64_t x732 = INT64_MIN;
uint32_t x735 = UINT32_MAX;
int32_t t180 = -2510;
static int8_t x740 = 34;
int32_t t181 = 882562;
int32_t x742 = INT32_MAX;
static int8_t x747 = INT8_MIN;
int8_t x751 = INT8_MIN;
static int32_t x757 = -4;
uint16_t x763 = 3066U;
uint32_t x768 = UINT32_MAX;
int32_t x770 = INT32_MIN;
int32_t x772 = -432805940;
int8_t x777 = -47;
uint16_t x783 = UINT16_MAX;
int8_t x796 = INT8_MIN;
volatile int8_t x798 = INT8_MIN;
volatile uint16_t x799 = UINT16_MAX;
volatile uint64_t t198 = 16569297080LLU;


void f0(void) {
    	uint32_t x1 = UINT32_MAX;
	volatile uint8_t x2 = UINT8_MAX;
	static uint64_t x3 = UINT64_MAX;
	int64_t x4 = INT64_MIN;
	volatile int64_t t0 = -15430290716525740LL;

    t0 = (x1-((x2==x3)/x4));

    if (t0 != 4294967295LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MIN;
	int32_t x6 = 267045;
	uint16_t x7 = 28673U;
	volatile uint64_t x8 = 417826393387709733LLU;
	uint64_t t1 = 8860123311190264389LLU;

    t1 = (x5-((x6==x7)/x8));

    if (t1 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = 31U;
	int64_t x10 = -1LL;
	volatile int8_t x12 = INT8_MIN;
	static volatile int32_t t2 = -25285;

    t2 = (x9-((x10==x11)/x12));

    if (t2 != 31) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x14 = -2595;
	int16_t x15 = 10763;
	volatile int16_t x16 = INT16_MAX;
	uint32_t t3 = 19U;

    t3 = (x13-((x14==x15)/x16));

    if (t3 != 1438631U) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x17 = -1;
	volatile uint32_t x18 = 2U;
	uint32_t x19 = UINT32_MAX;
	static int64_t x20 = -1LL;
	volatile int64_t t4 = -475664050LL;

    t4 = (x17-((x18==x19)/x20));

    if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = 39428U;
	static int8_t x22 = INT8_MAX;
	static int32_t x23 = INT32_MIN;
	int32_t x24 = -4;
	volatile uint32_t t5 = 1489951317U;

    t5 = (x21-((x22==x23)/x24));

    if (t5 != 39428U) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = INT8_MIN;
	uint8_t x27 = 1U;
	volatile int64_t x28 = 1019248645137LL;
	static int64_t t6 = 2966LL;

    t6 = (x25-((x26==x27)/x28));

    if (t6 != -128LL) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x29 = INT64_MAX;
	static int32_t x31 = INT32_MIN;
	static volatile uint64_t x32 = UINT64_MAX;

    t7 = (x29-((x30==x31)/x32));

    if (t7 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x34 = -1LL;
	volatile uint32_t x36 = 29U;

    t8 = (x33-((x34==x35)/x36));

    if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int16_t x37 = INT16_MAX;
	int64_t x38 = -382024832971LL;
	int64_t x39 = -1LL;
	volatile int32_t t9 = -328266;

    t9 = (x37-((x38==x39)/x40));

    if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x41 = 3;
	uint64_t x42 = 2590LLU;
	int16_t x43 = INT16_MIN;
	volatile int8_t x44 = INT8_MAX;

    t10 = (x41-((x42==x43)/x44));

    if (t10 != 3) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = INT16_MIN;
	volatile int16_t x46 = -1;
	volatile uint32_t x47 = 304408909U;
	uint64_t x48 = UINT64_MAX;
	uint64_t t11 = 9971964562856LLU;

    t11 = (x45-((x46==x47)/x48));

    if (t11 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = INT16_MIN;
	uint16_t x50 = UINT16_MAX;
	int32_t x51 = INT32_MIN;

    t12 = (x49-((x50==x51)/x52));

    if (t12 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = INT8_MAX;
	static volatile int16_t x54 = -21;
	volatile uint64_t x55 = UINT64_MAX;
	int16_t x56 = INT16_MIN;
	volatile int32_t t13 = 6753446;

    t13 = (x53-((x54==x55)/x56));

    if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x57 = UINT8_MAX;
	uint16_t x60 = 14U;

    t14 = (x57-((x58==x59)/x60));

    if (t14 != 255) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = -72243506014LL;
	int64_t x62 = -5923634040LL;
	int64_t x63 = INT64_MIN;
	int64_t t15 = 71862LL;

    t15 = (x61-((x62==x63)/x64));

    if (t15 != -72243506014LL) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x65 = INT32_MIN;
	int8_t x66 = INT8_MAX;
	int32_t x67 = INT32_MIN;
	uint64_t x68 = 17545378892315LLU;
	volatile uint64_t t16 = 191965488LLU;

    t16 = (x65-((x66==x67)/x68));

    if (t16 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int16_t x69 = 53;
	static volatile int32_t t17 = 60750952;

    t17 = (x69-((x70==x71)/x72));

    if (t17 != 53) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x76 = INT64_MIN;

    t18 = (x73-((x74==x75)/x76));

    if (t18 != 15LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = INT32_MIN;
	static uint8_t x78 = 30U;
	volatile int16_t x79 = -340;
	uint32_t x80 = 99U;
	volatile uint32_t t19 = 127871U;

    t19 = (x77-((x78==x79)/x80));

    if (t19 != 2147483648U) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x81 = INT32_MAX;
	uint16_t x83 = 6224U;
	int16_t x84 = 1476;

    t20 = (x81-((x82==x83)/x84));

    if (t20 != INT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = INT8_MIN;
	int8_t x86 = -36;
	volatile int16_t x88 = INT16_MAX;

    t21 = (x85-((x86==x87)/x88));

    if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = INT8_MIN;
	static int16_t x91 = -3;
	int16_t x92 = INT16_MIN;
	int32_t t22 = 0;

    t22 = (x89-((x90==x91)/x92));

    if (t22 != -128) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = INT16_MAX;
	volatile int8_t x94 = INT8_MIN;
	int16_t x95 = INT16_MAX;
	static int16_t x96 = -1;
	volatile int32_t t23 = 16920;

    t23 = (x93-((x94==x95)/x96));

    if (t23 != 32767) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x99 = INT64_MIN;

    t24 = (x97-((x98==x99)/x100));

    if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x101 = INT8_MIN;
	int16_t x102 = INT16_MIN;
	uint8_t x103 = 85U;
	static uint32_t x104 = 9430U;
	volatile uint32_t t25 = 107410U;

    t25 = (x101-((x102==x103)/x104));

    if (t25 != 4294967168U) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x105 = 26U;
	volatile int64_t x106 = INT64_MAX;
	static volatile uint16_t x107 = 1684U;
	int32_t x108 = -1;
	volatile int32_t t26 = -24438;

    t26 = (x105-((x106==x107)/x108));

    if (t26 != 26) { NG(); } else { ; }
	
}

void f27(void) {
    	static int8_t x111 = INT8_MAX;
	uint8_t x112 = UINT8_MAX;
	volatile int64_t t27 = INT64_MIN;

    t27 = (x109-((x110==x111)/x112));

    if (t27 != INT64_MIN) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x117 = INT32_MAX;
	uint64_t x118 = 31107508063LLU;
	uint32_t x119 = 154475U;
	int32_t x120 = -875027;
	volatile int32_t t28 = INT32_MAX;

    t28 = (x117-((x118==x119)/x120));

    if (t28 != INT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	static int64_t x121 = 0LL;
	volatile uint64_t x122 = 88258860448152LLU;
	volatile int16_t x123 = INT16_MAX;
	int64_t x124 = INT64_MIN;
	volatile int64_t t29 = -1397578575563551311LL;

    t29 = (x121-((x122==x123)/x124));

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x125 = UINT32_MAX;
	int32_t x126 = INT32_MAX;
	static int8_t x128 = INT8_MAX;

    t30 = (x125-((x126==x127)/x128));

    if (t30 != UINT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x129 = -8592;
	uint64_t x130 = 52LLU;
	int16_t x131 = 1521;
	int16_t x132 = INT16_MIN;
	static int32_t t31 = 310766512;

    t31 = (x129-((x130==x131)/x132));

    if (t31 != -8592) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint64_t x133 = 13LLU;
	volatile int8_t x134 = INT8_MAX;
	uint32_t x136 = 7U;
	uint64_t t32 = 1819410992019445LLU;

    t32 = (x133-((x134==x135)/x136));

    if (t32 != 13LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint64_t x137 = 5655763701661029LLU;
	uint64_t t33 = 48574155471LLU;

    t33 = (x137-((x138==x139)/x140));

    if (t33 != 5655763701661029LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x142 = 39545;
	static int16_t x143 = INT16_MAX;
	static uint8_t x144 = UINT8_MAX;
	volatile int32_t t34 = -690678;

    t34 = (x141-((x142==x143)/x144));

    if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint8_t x145 = UINT8_MAX;
	int8_t x146 = INT8_MAX;
	static int8_t x148 = INT8_MIN;
	int32_t t35 = -1;

    t35 = (x145-((x146==x147)/x148));

    if (t35 != 255) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x149 = 2U;
	static uint64_t x150 = 16158026037779LLU;
	int16_t x151 = INT16_MIN;
	uint64_t x152 = 152944141656379LLU;
	volatile uint64_t t36 = 347011766077047LLU;

    t36 = (x149-((x150==x151)/x152));

    if (t36 != 2LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x153 = UINT64_MAX;
	int64_t x154 = 59LL;
	uint64_t x155 = 217311122397LLU;
	static uint64_t t37 = UINT64_MAX;

    t37 = (x153-((x154==x155)/x156));

    if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x157 = INT32_MIN;
	int8_t x158 = -1;
	int32_t x159 = INT32_MIN;
	int16_t x160 = -10316;

    t38 = (x157-((x158==x159)/x160));

    if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x163 = -7186;
	static int32_t x164 = 1486;

    t39 = (x161-((x162==x163)/x164));

    if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x165 = INT64_MIN;
	volatile int64_t x166 = INT64_MAX;
	int64_t x168 = 53770907LL;
	volatile int64_t t40 = INT64_MIN;

    t40 = (x165-((x166==x167)/x168));

    if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x171 = INT16_MIN;
	static int8_t x172 = INT8_MAX;

    t41 = (x169-((x170==x171)/x172));

    if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x174 = INT8_MIN;
	uint64_t x175 = 151824888039LLU;
	volatile uint32_t x176 = UINT32_MAX;
	static volatile uint32_t t42 = 50215978U;

    t42 = (x173-((x174==x175)/x176));

    if (t42 != 13U) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x177 = INT16_MIN;
	volatile int8_t x178 = INT8_MIN;
	int64_t x179 = -1LL;
	int64_t x180 = INT64_MIN;
	static int64_t t43 = 253210561134584LL;

    t43 = (x177-((x178==x179)/x180));

    if (t43 != -32768LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x181 = INT32_MAX;
	volatile uint16_t x182 = 12U;
	int8_t x183 = INT8_MIN;
	volatile uint64_t x184 = 2432516497523461LLU;
	volatile uint64_t t44 = 1415851932LLU;

    t44 = (x181-((x182==x183)/x184));

    if (t44 != 2147483647LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x186 = 110698;
	uint32_t x187 = 4147077U;
	uint64_t x188 = 9LLU;
	uint64_t t45 = 950019326832907371LLU;

    t45 = (x185-((x186==x187)/x188));

    if (t45 != 127LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint32_t x189 = 54526962U;
	static int8_t x190 = INT8_MIN;
	static uint32_t x192 = UINT32_MAX;
	static uint32_t t46 = 6U;

    t46 = (x189-((x190==x191)/x192));

    if (t46 != 54526962U) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x193 = INT32_MIN;
	uint32_t x194 = UINT32_MAX;
	int64_t x196 = 8697918575820785LL;

    t47 = (x193-((x194==x195)/x196));

    if (t47 != -2147483648LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x197 = 0;
	int64_t x198 = INT64_MAX;
	int32_t x199 = INT32_MIN;
	int64_t t48 = 592809214LL;

    t48 = (x197-((x198==x199)/x200));

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x201 = 1U;
	volatile int32_t x202 = 0;
	int8_t x203 = 3;
	volatile int32_t t49 = 407;

    t49 = (x201-((x202==x203)/x204));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x205 = -1;
	int64_t x207 = -1LL;
	static volatile int16_t x208 = -1;

    t50 = (x205-((x206==x207)/x208));

    if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile uint64_t x209 = 573310090199524LLU;
	volatile int32_t x211 = INT32_MAX;
	uint64_t t51 = 6718469286LLU;

    t51 = (x209-((x210==x211)/x212));

    if (t51 != 573310090199524LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x213 = -1;
	uint64_t x214 = UINT64_MAX;
	volatile int8_t x215 = INT8_MIN;
	int8_t x216 = -15;
	int32_t t52 = 9687;

    t52 = (x213-((x214==x215)/x216));

    if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x218 = INT32_MIN;
	volatile int64_t x219 = INT64_MAX;
	static volatile uint32_t x220 = 92156U;
	uint64_t t53 = UINT64_MAX;

    t53 = (x217-((x218==x219)/x220));

    if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x221 = -123;
	volatile uint64_t x222 = 530122865LLU;
	static uint32_t x223 = 2008U;
	uint64_t x224 = 1877948LLU;
	static uint64_t t54 = 35LLU;

    t54 = (x221-((x222==x223)/x224));

    if (t54 != 18446744073709551493LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x225 = 10U;
	int32_t x227 = -426;
	uint8_t x228 = 3U;
	int32_t t55 = 366578;

    t55 = (x225-((x226==x227)/x228));

    if (t55 != 10) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x230 = -1LL;
	int64_t x231 = INT64_MIN;
	int64_t x232 = INT64_MAX;
	volatile int64_t t56 = INT64_MAX;

    t56 = (x229-((x230==x231)/x232));

    if (t56 != INT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x233 = UINT64_MAX;
	uint64_t x236 = UINT64_MAX;
	static volatile uint64_t t57 = UINT64_MAX;

    t57 = (x233-((x234==x235)/x236));

    if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x237 = INT64_MAX;
	int32_t x238 = 3;
	uint16_t x239 = 42U;
	int8_t x240 = 26;

    t58 = (x237-((x238==x239)/x240));

    if (t58 != INT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint32_t x241 = UINT32_MAX;
	int32_t x242 = -1178;
	int64_t x243 = 2271561163396LL;
	uint32_t x244 = 14U;
	uint32_t t59 = UINT32_MAX;

    t59 = (x241-((x242==x243)/x244));

    if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x245 = 13U;
	volatile uint32_t x246 = UINT32_MAX;
	static uint64_t x247 = UINT64_MAX;
	static int8_t x248 = 2;
	volatile uint32_t t60 = 713122480U;

    t60 = (x245-((x246==x247)/x248));

    if (t60 != 13U) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x249 = -21521;
	volatile int32_t x250 = INT32_MIN;
	int16_t x252 = -1;
	int32_t t61 = 6352;

    t61 = (x249-((x250==x251)/x252));

    if (t61 != -21521) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint32_t x253 = 19958295U;
	int8_t x255 = INT8_MIN;
	volatile uint32_t t62 = 6382145U;

    t62 = (x253-((x254==x255)/x256));

    if (t62 != 19958295U) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x257 = 33;
	static int16_t x258 = 273;
	int32_t x259 = 13949153;
	volatile int16_t x260 = INT16_MIN;
	static int32_t t63 = 820180932;

    t63 = (x257-((x258==x259)/x260));

    if (t63 != 33) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int64_t x261 = 5225LL;
	int64_t x264 = INT64_MIN;
	volatile int64_t t64 = 417706670026739LL;

    t64 = (x261-((x262==x263)/x264));

    if (t64 != 5225LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x265 = INT16_MAX;
	uint8_t x266 = UINT8_MAX;
	int8_t x267 = INT8_MIN;
	uint16_t x268 = UINT16_MAX;

    t65 = (x265-((x266==x267)/x268));

    if (t65 != 32767) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int16_t x269 = INT16_MIN;
	int16_t x270 = 16148;
	int32_t x271 = -1;
	uint32_t x272 = 342294277U;
	volatile uint32_t t66 = 42683U;

    t66 = (x269-((x270==x271)/x272));

    if (t66 != 4294934528U) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x273 = 61;
	int32_t x274 = INT32_MAX;
	uint16_t x275 = 619U;
	int32_t x276 = INT32_MIN;
	volatile int32_t t67 = -11389251;

    t67 = (x273-((x274==x275)/x276));

    if (t67 != 61) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x277 = UINT32_MAX;
	volatile int32_t x278 = INT32_MAX;
	volatile int8_t x279 = INT8_MAX;
	uint8_t x280 = 32U;
	volatile uint32_t t68 = UINT32_MAX;

    t68 = (x277-((x278==x279)/x280));

    if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x281 = 3;
	static uint64_t x282 = 2210422576LLU;
	uint8_t x284 = 1U;
	volatile int32_t t69 = 153436;

    t69 = (x281-((x282==x283)/x284));

    if (t69 != 3) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x285 = INT32_MIN;
	int32_t x286 = -184241883;
	static volatile uint64_t x287 = 1995840809015524929LLU;
	int8_t x288 = 1;
	volatile int32_t t70 = INT32_MIN;

    t70 = (x285-((x286==x287)/x288));

    if (t70 != INT32_MIN) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x291 = 1U;
	volatile uint16_t x292 = 109U;

    t71 = (x289-((x290==x291)/x292));

    if (t71 != 65535) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x293 = -1;
	uint64_t x294 = 3266LLU;
	int64_t x296 = -135015582237078LL;

    t72 = (x293-((x294==x295)/x296));

    if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint64_t x297 = 3336486305387LLU;
	volatile uint32_t x298 = 309560U;
	uint8_t x299 = 12U;
	uint32_t x300 = 1475452697U;
	uint64_t t73 = 78392807479997LLU;

    t73 = (x297-((x298==x299)/x300));

    if (t73 != 3336486305387LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static int32_t x302 = INT32_MAX;
	int16_t x303 = -583;
	int8_t x304 = -1;
	static int32_t t74 = INT32_MIN;

    t74 = (x301-((x302==x303)/x304));

    if (t74 != INT32_MIN) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint64_t x305 = 1744928LLU;
	int16_t x307 = -1;
	static volatile int16_t x308 = INT16_MIN;
	uint64_t t75 = 33632389LLU;

    t75 = (x305-((x306==x307)/x308));

    if (t75 != 1744928LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint8_t x310 = UINT8_MAX;
	volatile int8_t x311 = INT8_MIN;
	static int16_t x312 = INT16_MAX;
	int64_t t76 = INT64_MIN;

    t76 = (x309-((x310==x311)/x312));

    if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x313 = 3250887282829LLU;
	volatile int64_t x314 = INT64_MIN;
	int16_t x315 = INT16_MIN;
	int64_t x316 = 2149657223567426LL;

    t77 = (x313-((x314==x315)/x316));

    if (t77 != 3250887282829LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x317 = -1;
	int64_t x318 = INT64_MAX;
	volatile uint8_t x319 = 50U;
	int8_t x320 = 3;
	volatile int32_t t78 = -26772425;

    t78 = (x317-((x318==x319)/x320));

    if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x322 = -1;
	volatile int32_t x324 = INT32_MIN;
	int32_t t79 = 6299;

    t79 = (x321-((x322==x323)/x324));

    if (t79 != 32767) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint8_t x325 = UINT8_MAX;
	int16_t x327 = INT16_MIN;
	volatile int8_t x328 = -3;
	volatile int32_t t80 = -698551122;

    t80 = (x325-((x326==x327)/x328));

    if (t80 != 255) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x329 = -1;
	uint8_t x332 = 39U;
	volatile int32_t t81 = 4;

    t81 = (x329-((x330==x331)/x332));

    if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int8_t x334 = -22;
	int8_t x335 = INT8_MIN;
	static uint64_t x336 = UINT64_MAX;

    t82 = (x333-((x334==x335)/x336));

    if (t82 != 1246LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x337 = -1975393;
	static uint32_t x338 = 15851U;
	int64_t x340 = INT64_MAX;
	int64_t t83 = -14520LL;

    t83 = (x337-((x338==x339)/x340));

    if (t83 != -1975393LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x341 = 81678U;
	volatile int32_t x342 = INT32_MAX;
	uint16_t x343 = 467U;
	volatile uint32_t x344 = 830650U;

    t84 = (x341-((x342==x343)/x344));

    if (t84 != 81678U) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint64_t x345 = 6170333389272LLU;
	static int16_t x346 = INT16_MIN;
	static volatile int64_t x347 = -1LL;
	int64_t x348 = INT64_MIN;
	static uint64_t t85 = 10150789343395LLU;

    t85 = (x345-((x346==x347)/x348));

    if (t85 != 6170333389272LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x350 = UINT64_MAX;
	volatile uint64_t x351 = UINT64_MAX;
	int32_t x352 = 18697;
	volatile int32_t t86 = -11533551;

    t86 = (x349-((x350==x351)/x352));

    if (t86 != 32767) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x357 = -1;
	static int32_t x358 = INT32_MAX;
	uint32_t x359 = 53U;
	int32_t x360 = INT32_MIN;
	int32_t t87 = -71640;

    t87 = (x357-((x358==x359)/x360));

    if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x361 = INT8_MIN;
	int64_t x362 = -1LL;
	int32_t x363 = -1;
	int32_t t88 = 37319;

    t88 = (x361-((x362==x363)/x364));

    if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x367 = 20U;
	int32_t x368 = INT32_MAX;

    t89 = (x365-((x366==x367)/x368));

    if (t89 != 32767) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile int64_t x369 = -1LL;
	int64_t x370 = 12LL;
	static volatile int32_t x372 = INT32_MIN;
	int64_t t90 = 7LL;

    t90 = (x369-((x370==x371)/x372));

    if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x373 = 2U;
	uint64_t x374 = 1532619252386639LLU;
	int8_t x375 = 4;
	int32_t t91 = 358961;

    t91 = (x373-((x374==x375)/x376));

    if (t91 != 2) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x378 = INT16_MIN;
	static uint8_t x379 = 2U;
	uint8_t x380 = 43U;
	static int64_t t92 = INT64_MIN;

    t92 = (x377-((x378==x379)/x380));

    if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x381 = 7906U;
	int16_t x382 = INT16_MIN;
	volatile int64_t x383 = INT64_MIN;
	int16_t x384 = INT16_MIN;
	volatile uint32_t t93 = 292226327U;

    t93 = (x381-((x382==x383)/x384));

    if (t93 != 7906U) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x385 = 3;
	int16_t x386 = -1;
	uint16_t x387 = UINT16_MAX;
	static int16_t x388 = INT16_MIN;

    t94 = (x385-((x386==x387)/x388));

    if (t94 != 3) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x389 = -141723834;
	static int32_t x390 = INT32_MIN;
	static volatile int32_t t95 = -268269836;

    t95 = (x389-((x390==x391)/x392));

    if (t95 != -141723834) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x394 = INT64_MIN;
	uint16_t x395 = UINT16_MAX;
	uint8_t x396 = UINT8_MAX;
	volatile int64_t t96 = INT64_MIN;

    t96 = (x393-((x394==x395)/x396));

    if (t96 != INT64_MIN) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile int8_t x397 = -3;
	static int32_t t97 = -278473547;

    t97 = (x397-((x398==x399)/x400));

    if (t97 != -3) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x401 = INT32_MIN;
	uint32_t x403 = 124U;
	static volatile int32_t t98 = INT32_MIN;

    t98 = (x401-((x402==x403)/x404));

    if (t98 != INT32_MIN) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x405 = 0;
	static int32_t x406 = INT32_MIN;
	uint64_t x407 = 1874446639998826LLU;
	volatile int32_t t99 = 65;

    t99 = (x405-((x406==x407)/x408));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x409 = INT16_MIN;
	static int16_t x410 = INT16_MAX;
	int32_t x411 = -17020208;
	int32_t x412 = INT32_MAX;

    t100 = (x409-((x410==x411)/x412));

    if (t100 != -32768) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x413 = UINT32_MAX;
	int16_t x414 = INT16_MIN;
	int32_t x415 = -23177;
	int8_t x416 = INT8_MIN;
	volatile uint32_t t101 = UINT32_MAX;

    t101 = (x413-((x414==x415)/x416));

    if (t101 != UINT32_MAX) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x417 = INT16_MAX;
	int16_t x418 = 1201;
	static int8_t x420 = -1;
	int32_t t102 = 4133;

    t102 = (x417-((x418==x419)/x420));

    if (t102 != 32767) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x421 = -1;
	volatile int32_t x422 = INT32_MIN;
	volatile uint8_t x423 = 41U;
	static int32_t x424 = 5528417;
	volatile int32_t t103 = -123454240;

    t103 = (x421-((x422==x423)/x424));

    if (t103 != -1) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x425 = -1;
	uint32_t x426 = 0U;
	int64_t x427 = 1LL;
	uint64_t x428 = 2040250743559LLU;
	volatile uint64_t t104 = UINT64_MAX;

    t104 = (x425-((x426==x427)/x428));

    if (t104 != UINT64_MAX) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x429 = UINT64_MAX;
	uint8_t x430 = 0U;
	uint64_t x431 = 106886010256943057LLU;
	int32_t x432 = INT32_MIN;
	volatile uint64_t t105 = UINT64_MAX;

    t105 = (x429-((x430==x431)/x432));

    if (t105 != UINT64_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x433 = INT8_MAX;
	volatile uint16_t x434 = 6U;
	static int8_t x435 = INT8_MAX;
	volatile int32_t t106 = 160;

    t106 = (x433-((x434==x435)/x436));

    if (t106 != 127) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x438 = INT16_MIN;
	int32_t x439 = INT32_MIN;
	int8_t x440 = 52;
	int64_t t107 = 68687661413987338LL;

    t107 = (x437-((x438==x439)/x440));

    if (t107 != -1LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x441 = UINT32_MAX;
	uint64_t x442 = 403392518957490LLU;
	static int16_t x443 = -1;
	volatile int64_t x444 = 7152542482LL;
	int64_t t108 = 34271568934562237LL;

    t108 = (x441-((x442==x443)/x444));

    if (t108 != 4294967295LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x445 = -14;
	uint8_t x446 = 72U;
	static volatile int16_t x447 = -1;
	volatile int64_t x448 = -114LL;
	volatile int64_t t109 = 604770541253LL;

    t109 = (x445-((x446==x447)/x448));

    if (t109 != -14LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x449 = -1;
	static uint32_t x450 = 4U;
	volatile int64_t x451 = INT64_MIN;
	int16_t x452 = -3679;
	int32_t t110 = -11;

    t110 = (x449-((x450==x451)/x452));

    if (t110 != -1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x453 = UINT64_MAX;
	static int32_t x454 = -14356305;
	int32_t x455 = 1599;
	int32_t x456 = INT32_MIN;
	volatile uint64_t t111 = UINT64_MAX;

    t111 = (x453-((x454==x455)/x456));

    if (t111 != UINT64_MAX) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint16_t x460 = UINT16_MAX;
	int32_t t112 = 12422;

    t112 = (x457-((x458==x459)/x460));

    if (t112 != -128) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x461 = INT64_MIN;
	static int16_t x462 = -1;
	int64_t t113 = INT64_MIN;

    t113 = (x461-((x462==x463)/x464));

    if (t113 != INT64_MIN) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint16_t x465 = 14U;
	int64_t x467 = -584244918165036504LL;
	static int16_t x468 = -2;

    t114 = (x465-((x466==x467)/x468));

    if (t114 != 14) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x469 = 2116U;
	int64_t x470 = -1LL;
	int64_t x471 = -15100LL;
	int8_t x472 = -1;
	static int32_t t115 = -5689;

    t115 = (x469-((x470==x471)/x472));

    if (t115 != 2116) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x473 = UINT32_MAX;
	static int8_t x474 = -1;
	int8_t x475 = INT8_MIN;
	uint32_t t116 = UINT32_MAX;

    t116 = (x473-((x474==x475)/x476));

    if (t116 != UINT32_MAX) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x479 = 549571898959538LLU;
	volatile int16_t x480 = INT16_MAX;
	volatile int64_t t117 = INT64_MIN;

    t117 = (x477-((x478==x479)/x480));

    if (t117 != INT64_MIN) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x482 = -2;
	uint16_t x483 = 67U;
	uint64_t x484 = 74773246121354LLU;
	static volatile uint64_t t118 = UINT64_MAX;

    t118 = (x481-((x482==x483)/x484));

    if (t118 != UINT64_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x485 = 6989836797808240970LLU;
	int8_t x486 = INT8_MIN;
	static int32_t x487 = INT32_MIN;
	static volatile uint64_t t119 = 1LLU;

    t119 = (x485-((x486==x487)/x488));

    if (t119 != 6989836797808240970LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x490 = 10U;
	int32_t x491 = -1066064622;
	volatile uint32_t x492 = 278U;
	volatile uint32_t t120 = UINT32_MAX;

    t120 = (x489-((x490==x491)/x492));

    if (t120 != UINT32_MAX) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x493 = INT32_MAX;
	int32_t x494 = INT32_MIN;
	int32_t t121 = INT32_MAX;

    t121 = (x493-((x494==x495)/x496));

    if (t121 != INT32_MAX) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x498 = INT64_MIN;
	int32_t x499 = INT32_MIN;
	static int16_t x500 = INT16_MIN;

    t122 = (x497-((x498==x499)/x500));

    if (t122 != INT64_MIN) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x502 = 180;
	int32_t x503 = INT32_MIN;
	uint32_t x504 = 7789U;

    t123 = (x501-((x502==x503)/x504));

    if (t123 != 2024082U) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x505 = -1;
	int16_t x506 = 38;

    t124 = (x505-((x506==x507)/x508));

    if (t124 != UINT32_MAX) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x509 = INT64_MAX;
	volatile uint16_t x510 = 274U;
	int32_t x511 = INT32_MIN;
	uint32_t x512 = 2U;

    t125 = (x509-((x510==x511)/x512));

    if (t125 != INT64_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x513 = INT8_MIN;
	static volatile uint32_t x514 = UINT32_MAX;
	int16_t x515 = INT16_MIN;
	static int64_t x516 = INT64_MIN;

    t126 = (x513-((x514==x515)/x516));

    if (t126 != -128LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x517 = INT64_MIN;
	volatile int16_t x520 = INT16_MAX;

    t127 = (x517-((x518==x519)/x520));

    if (t127 != INT64_MIN) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x521 = UINT32_MAX;
	uint8_t x522 = 11U;
	int16_t x523 = -1;
	static volatile int64_t t128 = -20667212044673LL;

    t128 = (x521-((x522==x523)/x524));

    if (t128 != 4294967295LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x529 = 30U;
	volatile int64_t x530 = 51767LL;
	int16_t x531 = INT16_MAX;
	int16_t x532 = 6;

    t129 = (x529-((x530==x531)/x532));

    if (t129 != 30) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x533 = 5564035715399647747LLU;
	int16_t x534 = INT16_MAX;
	static uint32_t x535 = 220U;
	int16_t x536 = INT16_MIN;
	uint64_t t130 = 213663463039362711LLU;

    t130 = (x533-((x534==x535)/x536));

    if (t130 != 5564035715399647747LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int8_t x537 = -1;
	static int8_t x538 = INT8_MIN;
	static int16_t x540 = -102;
	volatile int32_t t131 = 2698;

    t131 = (x537-((x538==x539)/x540));

    if (t131 != -1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x541 = UINT16_MAX;
	volatile uint64_t x542 = 96328659265190LLU;
	uint32_t x543 = 2U;
	uint16_t x544 = 6980U;
	static volatile int32_t t132 = -2055;

    t132 = (x541-((x542==x543)/x544));

    if (t132 != 65535) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x545 = 3U;
	static uint32_t x547 = 111728664U;
	static volatile int32_t t133 = -35500;

    t133 = (x545-((x546==x547)/x548));

    if (t133 != 3) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x549 = UINT64_MAX;
	uint32_t x550 = 244U;
	int32_t x551 = -1;
	volatile int32_t x552 = INT32_MAX;
	volatile uint64_t t134 = UINT64_MAX;

    t134 = (x549-((x550==x551)/x552));

    if (t134 != UINT64_MAX) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x553 = 10083U;
	volatile int8_t x554 = INT8_MAX;
	uint64_t x556 = 552LLU;
	static volatile uint64_t t135 = 134289450791689LLU;

    t135 = (x553-((x554==x555)/x556));

    if (t135 != 10083LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint32_t x558 = 0U;
	int32_t x559 = INT32_MIN;
	int32_t x560 = INT32_MAX;
	static int32_t t136 = -28;

    t136 = (x557-((x558==x559)/x560));

    if (t136 != 24) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x561 = UINT16_MAX;
	int8_t x562 = 1;
	volatile int8_t x563 = INT8_MAX;

    t137 = (x561-((x562==x563)/x564));

    if (t137 != 65535LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x565 = UINT16_MAX;
	uint64_t x566 = 282744733107915426LLU;
	int32_t x567 = 15;
	volatile uint8_t x568 = UINT8_MAX;
	int32_t t138 = -962801495;

    t138 = (x565-((x566==x567)/x568));

    if (t138 != 65535) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x569 = UINT16_MAX;
	static uint16_t x571 = UINT16_MAX;
	uint32_t t139 = 194283U;

    t139 = (x569-((x570==x571)/x572));

    if (t139 != 65535U) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x573 = INT32_MIN;
	int8_t x574 = 1;
	volatile uint16_t x575 = 1046U;
	volatile int8_t x576 = INT8_MIN;
	int32_t t140 = INT32_MIN;

    t140 = (x573-((x574==x575)/x576));

    if (t140 != INT32_MIN) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x577 = INT16_MAX;
	int16_t x579 = 15;
	static uint64_t x580 = 172615819484676941LLU;
	uint64_t t141 = 133305713173959LLU;

    t141 = (x577-((x578==x579)/x580));

    if (t141 != 32767LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int64_t x581 = INT64_MAX;
	int16_t x582 = -23;
	int64_t x584 = INT64_MAX;

    t142 = (x581-((x582==x583)/x584));

    if (t142 != INT64_MAX) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x585 = 18U;
	uint8_t x586 = UINT8_MAX;
	volatile int16_t x588 = 47;
	int32_t t143 = 2834632;

    t143 = (x585-((x586==x587)/x588));

    if (t143 != 18) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint8_t x589 = 14U;
	static int64_t x590 = 26570LL;
	int16_t x591 = INT16_MIN;
	int64_t x592 = -1LL;

    t144 = (x589-((x590==x591)/x592));

    if (t144 != 14LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint16_t x593 = UINT16_MAX;
	int32_t x594 = INT32_MAX;
	static volatile int64_t x596 = INT64_MIN;

    t145 = (x593-((x594==x595)/x596));

    if (t145 != 65535LL) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x597 = -1;
	int16_t x598 = -5;
	static uint64_t x600 = 10072461734731766LLU;
	volatile uint64_t t146 = UINT64_MAX;

    t146 = (x597-((x598==x599)/x600));

    if (t146 != UINT64_MAX) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x601 = 4;
	int16_t x602 = INT16_MIN;
	volatile int32_t t147 = -6572183;

    t147 = (x601-((x602==x603)/x604));

    if (t147 != 4) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint16_t x605 = 810U;
	int16_t x606 = -1;
	int16_t x607 = -16;
	int8_t x608 = INT8_MAX;
	volatile int32_t t148 = -173;

    t148 = (x605-((x606==x607)/x608));

    if (t148 != 810) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint16_t x609 = UINT16_MAX;
	int8_t x610 = -1;
	uint16_t x611 = 10U;
	volatile int64_t x612 = INT64_MAX;

    t149 = (x609-((x610==x611)/x612));

    if (t149 != 65535LL) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint8_t x613 = 70U;
	int8_t x614 = INT8_MAX;
	uint8_t x615 = 27U;
	uint32_t x616 = UINT32_MAX;
	uint32_t t150 = 30280U;

    t150 = (x613-((x614==x615)/x616));

    if (t150 != 70U) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint64_t x617 = 1491LLU;
	int32_t x618 = 89982;
	int8_t x619 = -1;
	volatile uint64_t t151 = 5824610481066297LLU;

    t151 = (x617-((x618==x619)/x620));

    if (t151 != 1491LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x621 = 51;
	static int16_t x623 = 1;
	volatile uint32_t t152 = 14804683U;

    t152 = (x621-((x622==x623)/x624));

    if (t152 != 51U) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x625 = 221U;
	volatile int16_t x626 = INT16_MIN;
	int8_t x627 = 1;
	int32_t x628 = INT32_MIN;
	volatile int32_t t153 = -28093;

    t153 = (x625-((x626==x627)/x628));

    if (t153 != 221) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x629 = 45;
	static uint16_t x631 = 190U;
	uint8_t x632 = 5U;
	static int32_t t154 = 370052209;

    t154 = (x629-((x630==x631)/x632));

    if (t154 != 45) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x633 = INT8_MAX;
	volatile int16_t x634 = 7163;
	static volatile int32_t t155 = -189;

    t155 = (x633-((x634==x635)/x636));

    if (t155 != 127) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x637 = 83723267U;
	int16_t x638 = -1;
	uint64_t x639 = 553115LLU;
	int8_t x640 = INT8_MIN;

    t156 = (x637-((x638==x639)/x640));

    if (t156 != 83723267U) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x641 = 1;
	int16_t x642 = -1;
	int8_t x643 = 1;
	int32_t x644 = -1;
	static volatile int32_t t157 = -42;

    t157 = (x641-((x642==x643)/x644));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x645 = INT32_MIN;
	static uint64_t x647 = 806LLU;
	uint32_t x648 = 760U;
	uint32_t t158 = 104807733U;

    t158 = (x645-((x646==x647)/x648));

    if (t158 != 2147483648U) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int16_t x649 = -1;
	volatile int64_t x650 = INT64_MAX;
	uint32_t x651 = 1825468552U;
	int8_t x652 = INT8_MIN;
	static volatile int32_t t159 = 211694577;

    t159 = (x649-((x650==x651)/x652));

    if (t159 != -1) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x653 = INT32_MIN;
	static volatile int32_t x654 = -3943904;
	int32_t x655 = -1;
	static uint8_t x656 = UINT8_MAX;
	int32_t t160 = INT32_MIN;

    t160 = (x653-((x654==x655)/x656));

    if (t160 != INT32_MIN) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x657 = -1287LL;
	volatile int8_t x659 = 1;
	static int32_t x660 = INT32_MAX;
	static int64_t t161 = 32114078096020518LL;

    t161 = (x657-((x658==x659)/x660));

    if (t161 != -1287LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x664 = 125491650;

    t162 = (x661-((x662==x663)/x664));

    if (t162 != INT64_MIN) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x665 = -12;
	uint32_t x666 = UINT32_MAX;
	static int32_t x667 = -1;

    t163 = (x665-((x666==x667)/x668));

    if (t163 != -12) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x669 = 23U;
	int64_t x671 = -1LL;
	static volatile int8_t x672 = INT8_MIN;
	uint32_t t164 = 29305842U;

    t164 = (x669-((x670==x671)/x672));

    if (t164 != 23U) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x673 = -1;
	int8_t x674 = 0;
	uint32_t x675 = 1079088U;
	static int64_t x676 = -234416332340887LL;
	volatile int64_t t165 = 101515580189LL;

    t165 = (x673-((x674==x675)/x676));

    if (t165 != -1LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x677 = -6;
	int16_t x678 = 4528;
	int16_t x679 = 230;
	volatile int16_t x680 = 1;
	volatile int32_t t166 = -19;

    t166 = (x677-((x678==x679)/x680));

    if (t166 != -6) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x681 = 1;
	int8_t x682 = -2;
	int16_t x684 = 12;
	int32_t t167 = 3186;

    t167 = (x681-((x682==x683)/x684));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint32_t x686 = UINT32_MAX;
	int64_t x687 = -34385584869936700LL;
	volatile int32_t x688 = -1;
	int32_t t168 = 125556;

    t168 = (x685-((x686==x687)/x688));

    if (t168 != -1) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x689 = 1;
	volatile int8_t x690 = INT8_MAX;
	static int64_t x691 = INT64_MIN;
	static int64_t x692 = -11850561LL;
	volatile int64_t t169 = -21972027006LL;

    t169 = (x689-((x690==x691)/x692));

    if (t169 != 1LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x693 = INT16_MAX;
	int64_t x694 = -1LL;
	int8_t x695 = 5;
	int8_t x696 = INT8_MAX;
	int32_t t170 = 1;

    t170 = (x693-((x694==x695)/x696));

    if (t170 != 32767) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x697 = INT8_MAX;
	int32_t x698 = INT32_MIN;
	uint32_t x699 = 1094U;
	volatile int16_t x700 = 880;
	int32_t t171 = -5595;

    t171 = (x697-((x698==x699)/x700));

    if (t171 != 127) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x701 = -1;
	static uint32_t x703 = UINT32_MAX;
	static volatile uint16_t x704 = 2490U;
	int32_t t172 = 586;

    t172 = (x701-((x702==x703)/x704));

    if (t172 != -1) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x706 = 81653LL;
	static int8_t x707 = -2;
	volatile int32_t x708 = -1;
	volatile int32_t t173 = 1428632;

    t173 = (x705-((x706==x707)/x708));

    if (t173 != 65535) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint32_t x709 = 3472540U;
	uint32_t x711 = 11628U;
	uint64_t x712 = UINT64_MAX;
	uint64_t t174 = 2802LLU;

    t174 = (x709-((x710==x711)/x712));

    if (t174 != 3472540LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x713 = INT64_MIN;
	int8_t x715 = INT8_MIN;
	int16_t x716 = -476;
	volatile int64_t t175 = INT64_MIN;

    t175 = (x713-((x714==x715)/x716));

    if (t175 != INT64_MIN) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x717 = -1;
	int32_t x718 = INT32_MIN;
	static int32_t x720 = -1;
	volatile int32_t t176 = -1311419;

    t176 = (x717-((x718==x719)/x720));

    if (t176 != -1) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile uint8_t x721 = UINT8_MAX;
	volatile int8_t x723 = -1;
	int32_t x724 = -1;
	int32_t t177 = -275904099;

    t177 = (x721-((x722==x723)/x724));

    if (t177 != 256) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x725 = 4;
	static uint8_t x726 = UINT8_MAX;

    t178 = (x725-((x726==x727)/x728));

    if (t178 != 4LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x730 = 0;
	volatile int64_t t179 = -2246683345747489942LL;

    t179 = (x729-((x730==x731)/x732));

    if (t179 != 7755LL) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x733 = 21;
	int64_t x734 = -1LL;
	int16_t x736 = INT16_MIN;

    t180 = (x733-((x734==x735)/x736));

    if (t180 != 21) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int32_t x737 = 6;
	volatile int16_t x738 = -1;
	int32_t x739 = INT32_MAX;

    t181 = (x737-((x738==x739)/x740));

    if (t181 != 6) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x741 = 88360U;
	static int32_t x743 = INT32_MIN;
	int32_t x744 = INT32_MIN;
	volatile uint32_t t182 = 32042156U;

    t182 = (x741-((x742==x743)/x744));

    if (t182 != 88360U) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x745 = 7U;
	volatile int8_t x746 = -1;
	int64_t x748 = 190013761165276LL;
	int64_t t183 = 6372590171613510LL;

    t183 = (x745-((x746==x747)/x748));

    if (t183 != 7LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x749 = -1;
	volatile int32_t x750 = 7;
	uint16_t x752 = UINT16_MAX;
	volatile int32_t t184 = -122705179;

    t184 = (x749-((x750==x751)/x752));

    if (t184 != -1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x753 = UINT32_MAX;
	static volatile int8_t x754 = -1;
	uint64_t x755 = 4763989446252089LLU;
	int64_t x756 = -3288749894959LL;
	int64_t t185 = -23566146118755964LL;

    t185 = (x753-((x754==x755)/x756));

    if (t185 != 4294967295LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x758 = -1;
	int64_t x759 = -129597428LL;
	int64_t x760 = 132LL;
	volatile int64_t t186 = 1432LL;

    t186 = (x757-((x758==x759)/x760));

    if (t186 != -4LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x761 = -1LL;
	int8_t x762 = INT8_MAX;
	int64_t x764 = INT64_MAX;
	int64_t t187 = 207326321195843433LL;

    t187 = (x761-((x762==x763)/x764));

    if (t187 != -1LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x765 = UINT32_MAX;
	static volatile uint32_t x766 = 5916872U;
	uint8_t x767 = 1U;
	uint32_t t188 = UINT32_MAX;

    t188 = (x765-((x766==x767)/x768));

    if (t188 != UINT32_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x769 = INT16_MAX;
	int16_t x771 = 0;
	int32_t t189 = -491913;

    t189 = (x769-((x770==x771)/x772));

    if (t189 != 32767) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x773 = INT32_MIN;
	volatile int16_t x774 = INT16_MIN;
	uint64_t x775 = 159706996263325441LLU;
	volatile int8_t x776 = INT8_MIN;
	volatile int32_t t190 = INT32_MIN;

    t190 = (x773-((x774==x775)/x776));

    if (t190 != INT32_MIN) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x778 = 15;
	int64_t x779 = -1LL;
	int16_t x780 = 45;
	volatile int32_t t191 = 211305;

    t191 = (x777-((x778==x779)/x780));

    if (t191 != -47) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x781 = -1;
	uint8_t x782 = 14U;
	uint32_t x784 = UINT32_MAX;
	uint32_t t192 = UINT32_MAX;

    t192 = (x781-((x782==x783)/x784));

    if (t192 != UINT32_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x785 = INT16_MAX;
	int32_t x786 = 4775;
	uint8_t x787 = 2U;
	uint32_t x788 = 448322577U;
	volatile uint32_t t193 = 23885U;

    t193 = (x785-((x786==x787)/x788));

    if (t193 != 32767U) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x789 = 1381673U;
	int8_t x790 = -18;
	uint64_t x791 = 12208497234LLU;
	uint8_t x792 = UINT8_MAX;
	volatile uint32_t t194 = 0U;

    t194 = (x789-((x790==x791)/x792));

    if (t194 != 1381673U) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x793 = INT32_MIN;
	uint64_t x794 = 18363147165333LLU;
	int32_t x795 = -1;
	volatile int32_t t195 = INT32_MIN;

    t195 = (x793-((x794==x795)/x796));

    if (t195 != INT32_MIN) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x797 = INT32_MAX;
	int8_t x800 = -3;
	int32_t t196 = INT32_MAX;

    t196 = (x797-((x798==x799)/x800));

    if (t196 != INT32_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x801 = -1;
	static uint8_t x802 = 28U;
	int32_t x803 = INT32_MAX;
	int64_t x804 = INT64_MAX;
	int64_t t197 = 6455443950354LL;

    t197 = (x801-((x802==x803)/x804));

    if (t197 != -1LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x805 = 1943771LLU;
	int16_t x806 = INT16_MAX;
	uint32_t x807 = UINT32_MAX;
	volatile int64_t x808 = INT64_MIN;

    t198 = (x805-((x806==x807)/x808));

    if (t198 != 1943771LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x809 = -2;
	uint64_t x810 = UINT64_MAX;
	int32_t x811 = 2398324;
	volatile uint16_t x812 = 12622U;
	int32_t t199 = -176;

    t199 = (x809-((x810==x811)/x812));

    if (t199 != -2) { NG(); } else { ; }
	
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

