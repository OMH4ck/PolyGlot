
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

static int32_t t0 = 0;
uint8_t x12 = UINT8_MAX;
int8_t x19 = 13;
uint8_t x23 = 12U;
int32_t t5 = 273283;
int16_t x27 = -1;
volatile uint8_t x36 = 1U;
static int64_t x39 = INT64_MIN;
uint64_t t9 = 2899LLU;
int8_t x42 = INT8_MIN;
int64_t x43 = INT64_MAX;
int16_t x48 = -1;
static int32_t t11 = 7;
int32_t t12 = -20;
static uint16_t x60 = 3U;
int64_t x61 = INT64_MIN;
volatile int16_t x87 = INT16_MIN;
uint32_t x89 = 24127U;
uint32_t x90 = UINT32_MAX;
volatile int16_t x92 = 107;
volatile uint32_t t22 = 797375U;
static int64_t t23 = INT64_MIN;
int16_t x99 = INT16_MIN;
static volatile uint32_t t25 = UINT32_MAX;
volatile int16_t x108 = -1;
uint32_t x111 = 5362U;
int8_t x112 = -1;
static int32_t t27 = -57141;
volatile int32_t t29 = 0;
volatile int32_t t34 = -1591864;
uint32_t x142 = 11U;
static volatile int64_t x143 = -1LL;
uint64_t x148 = 4LLU;
uint16_t x160 = 493U;
uint8_t x161 = UINT8_MAX;
static int16_t x163 = INT16_MIN;
static volatile int8_t x165 = INT8_MIN;
static int32_t x169 = -1031;
volatile uint8_t x171 = 116U;
uint32_t x173 = UINT32_MAX;
int16_t x180 = -1;
static int16_t x181 = INT16_MIN;
int16_t x182 = -1;
static uint64_t x186 = 189083LLU;
static int32_t x192 = INT32_MIN;
static volatile int32_t t47 = 43647;
volatile int16_t x195 = 4884;
volatile int32_t t48 = -1;
static int8_t x200 = -10;
uint64_t x201 = 20659197180LLU;
int32_t x202 = INT32_MIN;
static uint64_t t50 = 966361LLU;
static int16_t x211 = -3;
uint16_t x215 = UINT16_MAX;
int32_t t53 = 10;
volatile uint8_t x224 = UINT8_MAX;
volatile int32_t t57 = -7681;
int16_t x233 = INT16_MIN;
int64_t x235 = INT64_MAX;
int32_t t58 = -2;
int16_t x245 = INT16_MIN;
int32_t t62 = INT32_MAX;
int8_t x254 = -6;
int32_t t63 = 50;
static int8_t x259 = INT8_MAX;
int64_t x265 = 9LL;
int64_t x281 = INT64_MAX;
uint32_t x283 = 135804440U;
uint16_t x285 = 47U;
static volatile int32_t t71 = -453;
volatile int8_t x289 = -1;
int16_t x293 = -1;
uint32_t x299 = 14895135U;
int8_t x300 = -1;
static int32_t x305 = 123;
int32_t x308 = INT32_MIN;
static int64_t x310 = -443425828048LL;
volatile uint64_t t77 = UINT64_MAX;
static uint16_t x313 = 182U;
int8_t x315 = INT8_MIN;
volatile int16_t x318 = 619;
int16_t x322 = INT16_MIN;
volatile int32_t t81 = -853134433;
uint64_t x333 = UINT64_MAX;
uint32_t x337 = 304219840U;
static uint32_t t84 = 3233U;
static uint32_t x342 = UINT32_MAX;
int16_t x349 = -1;
int64_t x350 = INT64_MAX;
int8_t x357 = INT8_MIN;
static uint64_t x371 = UINT64_MAX;
static int32_t x377 = -1;
volatile int32_t t94 = -8;
static uint64_t x387 = UINT64_MAX;
static int16_t x392 = -1;
static uint64_t x394 = UINT64_MAX;
int64_t x397 = INT64_MIN;
static uint16_t x398 = 857U;
volatile int64_t t100 = INT64_MIN;
static int64_t x422 = INT64_MAX;
int8_t x425 = INT8_MAX;
uint64_t x430 = 32698LLU;
int16_t x433 = INT16_MIN;
int32_t t109 = -7203;
volatile int64_t x444 = -195575213LL;
volatile int64_t t110 = -2077130914217921LL;
uint8_t x451 = 18U;
static uint32_t x457 = 602762816U;
volatile uint16_t x466 = 7U;
uint8_t x469 = 40U;
static int64_t x472 = -48560LL;
int32_t t117 = 927829;
volatile int32_t x478 = INT32_MIN;
uint16_t x485 = 12U;
static int32_t x488 = -1;
int16_t x495 = INT16_MIN;
int32_t x496 = 3146618;
volatile int16_t x499 = INT16_MIN;
volatile int32_t x500 = INT32_MIN;
uint32_t t124 = 1001257U;
int16_t x505 = INT16_MAX;
volatile int32_t t126 = 148;
int32_t x513 = INT32_MAX;
volatile int64_t x519 = -6907874048891LL;
volatile uint64_t x520 = 6332832641580145029LLU;
uint8_t x521 = 1U;
volatile int32_t t130 = 5;
volatile uint32_t x530 = UINT32_MAX;
uint8_t x531 = 0U;
int32_t t132 = -164984;
int8_t x533 = -1;
int32_t x536 = INT32_MIN;
int32_t t133 = -1173;
int32_t x539 = -659875;
static volatile int64_t t135 = 8478481051787976LL;
static int32_t x547 = INT32_MIN;
static int64_t x556 = -21401946031622LL;
uint64_t x559 = 946234425546419LLU;
volatile int8_t x564 = INT8_MIN;
uint32_t x573 = UINT32_MAX;
static int16_t x581 = INT16_MIN;
uint16_t x583 = 0U;
volatile int32_t t146 = -79057;
static int8_t x591 = -1;
int32_t x593 = -1;
int64_t x595 = INT64_MIN;
volatile int32_t t148 = 36960;
int64_t x599 = INT64_MAX;
int8_t x601 = -1;
int16_t x606 = -4;
static int16_t x611 = INT16_MAX;
static int8_t x614 = -5;
uint16_t x622 = 1521U;
uint32_t x625 = 53645U;
uint64_t x630 = 1847824518716908030LLU;
uint32_t x635 = UINT32_MAX;
int16_t x638 = INT16_MAX;
volatile uint32_t x640 = 402876U;
int32_t x645 = -70773119;
int8_t x646 = INT8_MIN;
int32_t x653 = 248;
int16_t x654 = -1;
static volatile int16_t x657 = -1;
volatile uint8_t x661 = 16U;
int64_t x666 = INT64_MIN;
uint64_t x671 = 12830LLU;
uint32_t t167 = 29U;
uint8_t x676 = 58U;
volatile int16_t x679 = INT16_MAX;
int8_t x684 = -1;
int32_t x692 = -1;
int16_t x694 = -13;
int64_t x696 = INT64_MIN;
volatile int64_t t173 = 261446727LL;
volatile int8_t x697 = 20;
int16_t x698 = INT16_MIN;
uint32_t x699 = 416U;
volatile int32_t t174 = -442;
volatile int8_t x703 = -3;
volatile int8_t x707 = INT8_MAX;
int64_t x708 = INT64_MIN;
uint8_t x711 = 22U;
int8_t x715 = -12;
int32_t t178 = 64728371;
int32_t t179 = -1;
volatile uint64_t x722 = UINT64_MAX;
volatile int8_t x729 = -7;
int64_t x738 = 163546LL;
int8_t x740 = -1;
int32_t t184 = -41059493;
static int8_t x742 = INT8_MIN;
int16_t x745 = INT16_MIN;
uint16_t x751 = 3U;
volatile int32_t t189 = -483652896;
int8_t x767 = -1;
static volatile int8_t x768 = INT8_MIN;
int8_t x776 = -2;
static int64_t x784 = -1LL;
volatile int32_t x790 = INT32_MIN;
static volatile int32_t t198 = 1;


void f0(void) {
    	static uint8_t x1 = UINT8_MAX;
	uint64_t x2 = 43490015897800752LLU;
	uint16_t x3 = 140U;
	int8_t x4 = INT8_MAX;

    t0 = (x1-((x2|x3)==x4));

    if (t0 != 255) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MAX;
	uint32_t x6 = 1024U;
	int32_t x7 = INT32_MIN;
	static volatile int64_t x8 = INT64_MIN;
	volatile int32_t t1 = INT32_MAX;

    t1 = (x5-((x6|x7)==x8));

    if (t1 != INT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = UINT32_MAX;
	int32_t x10 = -1;
	static volatile uint16_t x11 = 15070U;
	volatile uint32_t t2 = UINT32_MAX;

    t2 = (x9-((x10|x11)==x12));

    if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = -957LL;
	int64_t x14 = INT64_MIN;
	volatile int64_t x15 = 531830033LL;
	static volatile uint32_t x16 = 8512258U;
	volatile int64_t t3 = 30470699151515034LL;

    t3 = (x13-((x14|x15)==x16));

    if (t3 != -957LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static int16_t x17 = -1;
	static int64_t x18 = INT64_MIN;
	uint32_t x20 = 103416952U;
	volatile int32_t t4 = -276538;

    t4 = (x17-((x18|x19)==x20));

    if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = INT8_MIN;
	volatile uint16_t x22 = 1693U;
	int64_t x24 = 8852702565554397LL;

    t5 = (x21-((x22|x23)==x24));

    if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x25 = 38U;
	static int16_t x26 = INT16_MIN;
	uint64_t x28 = UINT64_MAX;
	volatile int32_t t6 = -745743;

    t6 = (x25-((x26|x27)==x28));

    if (t6 != 37) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint32_t x29 = UINT32_MAX;
	static int8_t x30 = -3;
	int16_t x31 = INT16_MAX;
	uint16_t x32 = 83U;
	uint32_t t7 = UINT32_MAX;

    t7 = (x29-((x30|x31)==x32));

    if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x33 = -1LL;
	static int64_t x34 = INT64_MIN;
	volatile int32_t x35 = INT32_MIN;
	volatile int64_t t8 = 20530995086LL;

    t8 = (x33-((x34|x35)==x36));

    if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x37 = 118762488LLU;
	int16_t x38 = INT16_MAX;
	static uint64_t x40 = UINT64_MAX;

    t9 = (x37-((x38|x39)==x40));

    if (t9 != 118762488LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static int16_t x41 = -1;
	int8_t x44 = INT8_MIN;
	int32_t t10 = 739362;

    t10 = (x41-((x42|x43)==x44));

    if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x45 = 68;
	static volatile uint8_t x46 = 0U;
	int16_t x47 = 63;

    t11 = (x45-((x46|x47)==x48));

    if (t11 != 68) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = INT16_MAX;
	volatile uint64_t x50 = UINT64_MAX;
	int32_t x51 = 2921068;
	int32_t x52 = INT32_MIN;

    t12 = (x49-((x50|x51)==x52));

    if (t12 != 32767) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x53 = INT32_MIN;
	volatile int32_t x54 = -27945675;
	int16_t x55 = 0;
	uint8_t x56 = 112U;
	volatile int32_t t13 = INT32_MIN;

    t13 = (x53-((x54|x55)==x56));

    if (t13 != INT32_MIN) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = 238;
	static volatile int64_t x58 = -1LL;
	volatile int32_t x59 = INT32_MIN;
	static int32_t t14 = -528;

    t14 = (x57-((x58|x59)==x60));

    if (t14 != 238) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x62 = 1252504;
	static int64_t x63 = INT64_MIN;
	int16_t x64 = INT16_MAX;
	int64_t t15 = INT64_MIN;

    t15 = (x61-((x62|x63)==x64));

    if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = 161209;
	volatile int32_t x66 = INT32_MAX;
	static uint64_t x67 = UINT64_MAX;
	static volatile uint8_t x68 = UINT8_MAX;
	int32_t t16 = 803648245;

    t16 = (x65-((x66|x67)==x68));

    if (t16 != 161209) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x69 = 27027LLU;
	static volatile int16_t x70 = INT16_MIN;
	int16_t x71 = 55;
	int64_t x72 = INT64_MIN;
	volatile uint64_t t17 = 212LLU;

    t17 = (x69-((x70|x71)==x72));

    if (t17 != 27027LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = -6;
	int32_t x74 = -1;
	volatile int64_t x75 = -1LL;
	static uint64_t x76 = UINT64_MAX;
	int32_t t18 = -20438451;

    t18 = (x73-((x74|x75)==x76));

    if (t18 != -7) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = -1LL;
	int16_t x78 = INT16_MAX;
	static uint32_t x79 = 2045683604U;
	int64_t x80 = 13008164826LL;
	volatile int64_t t19 = -2720371619512651LL;

    t19 = (x77-((x78|x79)==x80));

    if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint16_t x81 = UINT16_MAX;
	int8_t x82 = INT8_MAX;
	int32_t x83 = -29;
	static int16_t x84 = INT16_MIN;
	int32_t t20 = 205;

    t20 = (x81-((x82|x83)==x84));

    if (t20 != 65535) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x85 = 1;
	static int8_t x86 = -29;
	int64_t x88 = -1LL;
	static int32_t t21 = -4;

    t21 = (x85-((x86|x87)==x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x91 = INT16_MAX;

    t22 = (x89-((x90|x91)==x92));

    if (t22 != 24127U) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int64_t x93 = INT64_MIN;
	int16_t x94 = -1;
	int64_t x95 = 1999LL;
	uint8_t x96 = UINT8_MAX;

    t23 = (x93-((x94|x95)==x96));

    if (t23 != INT64_MIN) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x97 = 872U;
	uint64_t x98 = 343732923697534LLU;
	int16_t x100 = -1;
	volatile uint32_t t24 = 217U;

    t24 = (x97-((x98|x99)==x100));

    if (t24 != 872U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x101 = UINT32_MAX;
	uint8_t x102 = UINT8_MAX;
	int8_t x103 = INT8_MIN;
	int8_t x104 = INT8_MIN;

    t25 = (x101-((x102|x103)==x104));

    if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x105 = 85LLU;
	int8_t x106 = -1;
	uint32_t x107 = 81697138U;
	static uint64_t t26 = 61LLU;

    t26 = (x105-((x106|x107)==x108));

    if (t26 != 84LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int8_t x109 = 20;
	static int32_t x110 = 2376279;

    t27 = (x109-((x110|x111)==x112));

    if (t27 != 20) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x113 = -1;
	uint32_t x114 = 2374U;
	int16_t x115 = INT16_MIN;
	uint16_t x116 = 0U;
	volatile int32_t t28 = 28;

    t28 = (x113-((x114|x115)==x116));

    if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = -3;
	static int16_t x118 = INT16_MIN;
	static int8_t x119 = INT8_MIN;
	uint64_t x120 = 14317165LLU;

    t29 = (x117-((x118|x119)==x120));

    if (t29 != -3) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x121 = INT8_MIN;
	uint8_t x122 = 106U;
	uint64_t x123 = 19307957256695505LLU;
	static int8_t x124 = INT8_MIN;
	volatile int32_t t30 = -57081529;

    t30 = (x121-((x122|x123)==x124));

    if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x125 = 17715U;
	int8_t x126 = -1;
	int32_t x127 = INT32_MAX;
	uint16_t x128 = 23199U;
	volatile int32_t t31 = -74;

    t31 = (x125-((x126|x127)==x128));

    if (t31 != 17715) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int64_t x129 = INT64_MAX;
	int32_t x130 = -1;
	int32_t x131 = INT32_MIN;
	uint64_t x132 = 3278774LLU;
	volatile int64_t t32 = INT64_MAX;

    t32 = (x129-((x130|x131)==x132));

    if (t32 != INT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x133 = 1021729496920419LLU;
	int64_t x134 = -54647462254476LL;
	volatile uint16_t x135 = 911U;
	volatile int16_t x136 = -8693;
	volatile uint64_t t33 = 3131112499LLU;

    t33 = (x133-((x134|x135)==x136));

    if (t33 != 1021729496920419LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x137 = INT16_MAX;
	static int16_t x138 = -1;
	uint16_t x139 = UINT16_MAX;
	uint64_t x140 = 0LLU;

    t34 = (x137-((x138|x139)==x140));

    if (t34 != 32767) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = -173;
	int32_t x144 = 200775465;
	volatile int32_t t35 = -1782;

    t35 = (x141-((x142|x143)==x144));

    if (t35 != -173) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x145 = -16;
	static int64_t x146 = INT64_MIN;
	uint64_t x147 = UINT64_MAX;
	int32_t t36 = 28864234;

    t36 = (x145-((x146|x147)==x148));

    if (t36 != -16) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x149 = INT32_MIN;
	uint16_t x150 = UINT16_MAX;
	static int64_t x151 = 5415151LL;
	volatile uint8_t x152 = 107U;
	int32_t t37 = INT32_MIN;

    t37 = (x149-((x150|x151)==x152));

    if (t37 != INT32_MIN) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = INT32_MAX;
	int32_t x154 = -1;
	static int8_t x155 = INT8_MIN;
	uint16_t x156 = 9459U;
	int32_t t38 = INT32_MAX;

    t38 = (x153-((x154|x155)==x156));

    if (t38 != INT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint16_t x157 = 1416U;
	static int64_t x158 = -1LL;
	static volatile uint8_t x159 = UINT8_MAX;
	volatile int32_t t39 = 271530186;

    t39 = (x157-((x158|x159)==x160));

    if (t39 != 1416) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x162 = -1;
	int8_t x164 = -2;
	volatile int32_t t40 = 3;

    t40 = (x161-((x162|x163)==x164));

    if (t40 != 255) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x166 = 186524;
	uint32_t x167 = 30621912U;
	int32_t x168 = -1;
	int32_t t41 = 17125187;

    t41 = (x165-((x166|x167)==x168));

    if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x170 = INT8_MIN;
	static volatile int32_t x172 = -1;
	volatile int32_t t42 = -20293;

    t42 = (x169-((x170|x171)==x172));

    if (t42 != -1031) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x174 = INT8_MIN;
	int32_t x175 = INT32_MAX;
	static volatile int16_t x176 = -1;
	static uint32_t t43 = 3U;

    t43 = (x173-((x174|x175)==x176));

    if (t43 != 4294967294U) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x177 = -196;
	int8_t x178 = 1;
	volatile int32_t x179 = 243585;
	int32_t t44 = 22556465;

    t44 = (x177-((x178|x179)==x180));

    if (t44 != -196) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x183 = INT16_MAX;
	int64_t x184 = INT64_MIN;
	volatile int32_t t45 = 13013;

    t45 = (x181-((x182|x183)==x184));

    if (t45 != -32768) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x185 = -1;
	static int8_t x187 = INT8_MIN;
	volatile uint16_t x188 = 44U;
	volatile int32_t t46 = -744;

    t46 = (x185-((x186|x187)==x188));

    if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint16_t x189 = 5778U;
	int32_t x190 = INT32_MIN;
	int32_t x191 = INT32_MIN;

    t47 = (x189-((x190|x191)==x192));

    if (t47 != 5777) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = 3;
	uint64_t x194 = 10260044266181LLU;
	int16_t x196 = -1177;

    t48 = (x193-((x194|x195)==x196));

    if (t48 != 3) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x197 = -323;
	int32_t x198 = -143470006;
	static uint8_t x199 = 111U;
	static volatile int32_t t49 = -3903080;

    t49 = (x197-((x198|x199)==x200));

    if (t49 != -323) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x203 = -61908790485LL;
	static volatile int64_t x204 = 14842741LL;

    t50 = (x201-((x202|x203)==x204));

    if (t50 != 20659197180LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x205 = INT16_MAX;
	static uint16_t x206 = 172U;
	int32_t x207 = 513940458;
	volatile uint64_t x208 = 14LLU;
	volatile int32_t t51 = 33573;

    t51 = (x205-((x206|x207)==x208));

    if (t51 != 32767) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x209 = 122U;
	int64_t x210 = INT64_MIN;
	uint64_t x212 = UINT64_MAX;
	volatile int32_t t52 = -17828;

    t52 = (x209-((x210|x211)==x212));

    if (t52 != 122) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x213 = -892;
	int8_t x214 = -1;
	uint64_t x216 = UINT64_MAX;

    t53 = (x213-((x214|x215)==x216));

    if (t53 != -893) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x217 = -5332;
	static int16_t x218 = INT16_MAX;
	uint8_t x219 = 1U;
	uint16_t x220 = 6U;
	int32_t t54 = -5830492;

    t54 = (x217-((x218|x219)==x220));

    if (t54 != -5332) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = INT32_MAX;
	int32_t x222 = INT32_MAX;
	int16_t x223 = INT16_MAX;
	volatile int32_t t55 = INT32_MAX;

    t55 = (x221-((x222|x223)==x224));

    if (t55 != INT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = 3;
	int16_t x226 = INT16_MAX;
	int8_t x227 = -1;
	static int64_t x228 = INT64_MIN;
	int32_t t56 = -356;

    t56 = (x225-((x226|x227)==x228));

    if (t56 != 3) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x229 = 408;
	uint32_t x230 = 8030339U;
	static uint64_t x231 = UINT64_MAX;
	uint16_t x232 = 140U;

    t57 = (x229-((x230|x231)==x232));

    if (t57 != 408) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x234 = 6;
	int64_t x236 = INT64_MAX;

    t58 = (x233-((x234|x235)==x236));

    if (t58 != -32769) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x237 = -1LL;
	uint8_t x238 = UINT8_MAX;
	volatile int16_t x239 = -101;
	uint64_t x240 = UINT64_MAX;
	volatile int64_t t59 = 109541960LL;

    t59 = (x237-((x238|x239)==x240));

    if (t59 != -2LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int16_t x241 = -1;
	static int32_t x242 = INT32_MIN;
	uint16_t x243 = UINT16_MAX;
	int8_t x244 = -1;
	int32_t t60 = 122045;

    t60 = (x241-((x242|x243)==x244));

    if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x246 = 117;
	volatile uint64_t x247 = UINT64_MAX;
	int32_t x248 = INT32_MIN;
	volatile int32_t t61 = 0;

    t61 = (x245-((x246|x247)==x248));

    if (t61 != -32768) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x249 = INT32_MAX;
	volatile int32_t x250 = INT32_MIN;
	volatile uint8_t x251 = UINT8_MAX;
	uint32_t x252 = UINT32_MAX;

    t62 = (x249-((x250|x251)==x252));

    if (t62 != INT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x253 = -27;
	int16_t x255 = -11975;
	int16_t x256 = INT16_MAX;

    t63 = (x253-((x254|x255)==x256));

    if (t63 != -27) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = 428;
	volatile int64_t x258 = INT64_MIN;
	int16_t x260 = -1;
	int32_t t64 = -322;

    t64 = (x257-((x258|x259)==x260));

    if (t64 != 428) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = INT32_MAX;
	int8_t x262 = INT8_MAX;
	int16_t x263 = INT16_MIN;
	int64_t x264 = INT64_MIN;
	volatile int32_t t65 = INT32_MAX;

    t65 = (x261-((x262|x263)==x264));

    if (t65 != INT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x266 = 211215911U;
	int32_t x267 = INT32_MIN;
	static uint16_t x268 = 359U;
	volatile int64_t t66 = -1717029384LL;

    t66 = (x265-((x266|x267)==x268));

    if (t66 != 9LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x269 = INT8_MIN;
	int8_t x270 = INT8_MAX;
	int16_t x271 = 1;
	int8_t x272 = -1;
	volatile int32_t t67 = 14304871;

    t67 = (x269-((x270|x271)==x272));

    if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = 234792959707LL;
	static int64_t x274 = INT64_MIN;
	static volatile uint32_t x275 = 4064U;
	int64_t x276 = INT64_MIN;
	volatile int64_t t68 = 33017926227LL;

    t68 = (x273-((x274|x275)==x276));

    if (t68 != 234792959707LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x277 = 58;
	volatile int16_t x278 = INT16_MAX;
	int16_t x279 = INT16_MIN;
	static volatile int16_t x280 = INT16_MIN;
	static volatile int32_t t69 = -29780489;

    t69 = (x277-((x278|x279)==x280));

    if (t69 != 58) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile uint16_t x282 = UINT16_MAX;
	int64_t x284 = INT64_MIN;
	int64_t t70 = INT64_MAX;

    t70 = (x281-((x282|x283)==x284));

    if (t70 != INT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
    	static int8_t x286 = -1;
	int8_t x287 = INT8_MIN;
	static uint64_t x288 = 119530258LLU;

    t71 = (x285-((x286|x287)==x288));

    if (t71 != 47) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x290 = INT32_MIN;
	int64_t x291 = INT64_MAX;
	int8_t x292 = 3;
	static volatile int32_t t72 = -3864;

    t72 = (x289-((x290|x291)==x292));

    if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x294 = -1;
	volatile int8_t x295 = INT8_MAX;
	volatile uint16_t x296 = UINT16_MAX;
	volatile int32_t t73 = -29796532;

    t73 = (x293-((x294|x295)==x296));

    if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x297 = -1;
	int8_t x298 = -1;
	int32_t t74 = 330245;

    t74 = (x297-((x298|x299)==x300));

    if (t74 != -2) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x301 = UINT16_MAX;
	int64_t x302 = INT64_MIN;
	uint16_t x303 = 238U;
	int16_t x304 = 635;
	volatile int32_t t75 = 207;

    t75 = (x301-((x302|x303)==x304));

    if (t75 != 65535) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x306 = -449;
	int32_t x307 = INT32_MIN;
	volatile int32_t t76 = 21306146;

    t76 = (x305-((x306|x307)==x308));

    if (t76 != 123) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x309 = UINT64_MAX;
	int16_t x311 = -7;
	int8_t x312 = -1;

    t77 = (x309-((x310|x311)==x312));

    if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x314 = INT32_MIN;
	uint8_t x316 = 0U;
	int32_t t78 = 44810593;

    t78 = (x313-((x314|x315)==x316));

    if (t78 != 182) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x317 = INT8_MIN;
	uint8_t x319 = 43U;
	static int64_t x320 = -1321519729LL;
	static int32_t t79 = -3896;

    t79 = (x317-((x318|x319)==x320));

    if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x321 = INT64_MIN;
	volatile int8_t x323 = INT8_MIN;
	uint16_t x324 = 31162U;
	volatile int64_t t80 = INT64_MIN;

    t80 = (x321-((x322|x323)==x324));

    if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x325 = -1;
	int64_t x326 = -1LL;
	static int16_t x327 = -77;
	static int8_t x328 = -1;

    t81 = (x325-((x326|x327)==x328));

    if (t81 != -2) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x329 = INT32_MAX;
	int16_t x330 = INT16_MIN;
	uint16_t x331 = UINT16_MAX;
	int64_t x332 = -1LL;
	volatile int32_t t82 = 6943;

    t82 = (x329-((x330|x331)==x332));

    if (t82 != 2147483646) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x334 = -1;
	int16_t x335 = -1;
	volatile int16_t x336 = -11;
	uint64_t t83 = UINT64_MAX;

    t83 = (x333-((x334|x335)==x336));

    if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x338 = -1;
	int32_t x339 = 9349;
	int32_t x340 = 7;

    t84 = (x337-((x338|x339)==x340));

    if (t84 != 304219840U) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x341 = INT16_MIN;
	int64_t x343 = INT64_MAX;
	static uint16_t x344 = UINT16_MAX;
	static volatile int32_t t85 = -72;

    t85 = (x341-((x342|x343)==x344));

    if (t85 != -32768) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x345 = INT8_MAX;
	static uint8_t x346 = UINT8_MAX;
	int8_t x347 = INT8_MIN;
	int16_t x348 = INT16_MIN;
	volatile int32_t t86 = -6618318;

    t86 = (x345-((x346|x347)==x348));

    if (t86 != 127) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x351 = INT8_MIN;
	static int8_t x352 = -1;
	int32_t t87 = -41588;

    t87 = (x349-((x350|x351)==x352));

    if (t87 != -2) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x353 = 17620115U;
	volatile uint16_t x354 = 11520U;
	static uint32_t x355 = 39U;
	int64_t x356 = INT64_MIN;
	volatile uint32_t t88 = 4U;

    t88 = (x353-((x354|x355)==x356));

    if (t88 != 17620115U) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x358 = -1LL;
	int64_t x359 = INT64_MIN;
	int8_t x360 = -1;
	volatile int32_t t89 = -210011;

    t89 = (x357-((x358|x359)==x360));

    if (t89 != -129) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = INT8_MIN;
	uint8_t x362 = UINT8_MAX;
	volatile uint64_t x363 = 24239788643422480LLU;
	int64_t x364 = INT64_MAX;
	int32_t t90 = 0;

    t90 = (x361-((x362|x363)==x364));

    if (t90 != -128) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x365 = 112507LLU;
	int64_t x366 = INT64_MIN;
	static int64_t x367 = INT64_MAX;
	int8_t x368 = -1;
	static uint64_t t91 = 3807643104616467391LLU;

    t91 = (x365-((x366|x367)==x368));

    if (t91 != 112506LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x369 = -1;
	int32_t x370 = -41;
	int32_t x372 = INT32_MAX;
	int32_t t92 = 896;

    t92 = (x369-((x370|x371)==x372));

    if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x373 = UINT64_MAX;
	int32_t x374 = INT32_MAX;
	int64_t x375 = INT64_MIN;
	uint32_t x376 = UINT32_MAX;
	static volatile uint64_t t93 = UINT64_MAX;

    t93 = (x373-((x374|x375)==x376));

    if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x378 = -1LL;
	static uint16_t x379 = 13U;
	int32_t x380 = -1639821;

    t94 = (x377-((x378|x379)==x380));

    if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint32_t x381 = UINT32_MAX;
	int64_t x382 = -1LL;
	uint32_t x383 = 461U;
	int64_t x384 = INT64_MIN;
	uint32_t t95 = UINT32_MAX;

    t95 = (x381-((x382|x383)==x384));

    if (t95 != UINT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x385 = 248714165;
	uint16_t x386 = 208U;
	volatile uint16_t x388 = 60U;
	int32_t t96 = 0;

    t96 = (x385-((x386|x387)==x388));

    if (t96 != 248714165) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x389 = INT64_MAX;
	int32_t x390 = -40132795;
	static volatile uint32_t x391 = 38559U;
	int64_t t97 = INT64_MAX;

    t97 = (x389-((x390|x391)==x392));

    if (t97 != INT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x393 = INT32_MAX;
	volatile int8_t x395 = -1;
	int64_t x396 = INT64_MAX;
	volatile int32_t t98 = INT32_MAX;

    t98 = (x393-((x394|x395)==x396));

    if (t98 != INT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x399 = -1;
	uint16_t x400 = UINT16_MAX;
	volatile int64_t t99 = INT64_MIN;

    t99 = (x397-((x398|x399)==x400));

    if (t99 != INT64_MIN) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int64_t x401 = INT64_MIN;
	volatile int64_t x402 = INT64_MAX;
	int64_t x403 = INT64_MIN;
	int8_t x404 = INT8_MIN;

    t100 = (x401-((x402|x403)==x404));

    if (t100 != INT64_MIN) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x405 = INT8_MIN;
	int8_t x406 = INT8_MIN;
	static int16_t x407 = -5;
	volatile int32_t x408 = -9;
	int32_t t101 = -29;

    t101 = (x405-((x406|x407)==x408));

    if (t101 != -128) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x409 = UINT8_MAX;
	int32_t x410 = -1;
	static uint32_t x411 = UINT32_MAX;
	static uint32_t x412 = 122134U;
	int32_t t102 = 8;

    t102 = (x409-((x410|x411)==x412));

    if (t102 != 255) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x413 = 32U;
	volatile int32_t x414 = -1;
	uint16_t x415 = UINT16_MAX;
	volatile int32_t x416 = INT32_MAX;
	static volatile int32_t t103 = -50;

    t103 = (x413-((x414|x415)==x416));

    if (t103 != 32) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile int8_t x417 = INT8_MAX;
	uint8_t x418 = 51U;
	static int32_t x419 = -9524;
	int8_t x420 = 62;
	volatile int32_t t104 = -1587;

    t104 = (x417-((x418|x419)==x420));

    if (t104 != 127) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x421 = INT32_MIN;
	static uint16_t x423 = UINT16_MAX;
	int8_t x424 = INT8_MIN;
	int32_t t105 = INT32_MIN;

    t105 = (x421-((x422|x423)==x424));

    if (t105 != INT32_MIN) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x426 = INT16_MIN;
	int64_t x427 = INT64_MIN;
	volatile int8_t x428 = INT8_MIN;
	volatile int32_t t106 = 145420;

    t106 = (x425-((x426|x427)==x428));

    if (t106 != 127) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x429 = 8;
	uint64_t x431 = 89380581897540513LLU;
	int16_t x432 = INT16_MIN;
	volatile int32_t t107 = -67;

    t107 = (x429-((x430|x431)==x432));

    if (t107 != 8) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x434 = -10;
	static volatile uint64_t x435 = UINT64_MAX;
	volatile uint16_t x436 = UINT16_MAX;
	static int32_t t108 = -28589;

    t108 = (x433-((x434|x435)==x436));

    if (t108 != -32768) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = -1943;
	int16_t x438 = -1;
	static uint8_t x439 = 0U;
	static int32_t x440 = INT32_MIN;

    t109 = (x437-((x438|x439)==x440));

    if (t109 != -1943) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x441 = 16329340307LL;
	int64_t x442 = INT64_MAX;
	int8_t x443 = INT8_MAX;

    t110 = (x441-((x442|x443)==x444));

    if (t110 != 16329340307LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int32_t x445 = INT32_MIN;
	static int16_t x446 = 0;
	volatile int64_t x447 = -125741184LL;
	int64_t x448 = -1LL;
	volatile int32_t t111 = INT32_MIN;

    t111 = (x445-((x446|x447)==x448));

    if (t111 != INT32_MIN) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t x449 = -6824;
	uint32_t x450 = UINT32_MAX;
	int8_t x452 = INT8_MIN;
	int32_t t112 = -71;

    t112 = (x449-((x450|x451)==x452));

    if (t112 != -6824) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x453 = INT32_MIN;
	int32_t x454 = INT32_MIN;
	static volatile uint16_t x455 = 43U;
	uint64_t x456 = 638381805944321818LLU;
	int32_t t113 = INT32_MIN;

    t113 = (x453-((x454|x455)==x456));

    if (t113 != INT32_MIN) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x458 = -1330929;
	int64_t x459 = INT64_MAX;
	int32_t x460 = INT32_MIN;
	uint32_t t114 = 15552063U;

    t114 = (x457-((x458|x459)==x460));

    if (t114 != 602762816U) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x461 = INT64_MIN;
	int32_t x462 = -1;
	volatile uint32_t x463 = 96041110U;
	int8_t x464 = INT8_MAX;
	static volatile int64_t t115 = INT64_MIN;

    t115 = (x461-((x462|x463)==x464));

    if (t115 != INT64_MIN) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = -37;
	volatile int16_t x467 = -1;
	int64_t x468 = -1LL;
	int32_t t116 = -7252;

    t116 = (x465-((x466|x467)==x468));

    if (t116 != -38) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x470 = 1138LL;
	uint8_t x471 = UINT8_MAX;

    t117 = (x469-((x470|x471)==x472));

    if (t117 != 40) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint32_t x473 = UINT32_MAX;
	uint32_t x474 = 371U;
	static int16_t x475 = -1877;
	volatile int16_t x476 = INT16_MAX;
	volatile uint32_t t118 = UINT32_MAX;

    t118 = (x473-((x474|x475)==x476));

    if (t118 != UINT32_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x477 = -7959;
	int16_t x479 = INT16_MIN;
	static int64_t x480 = INT64_MAX;
	static volatile int32_t t119 = -906783006;

    t119 = (x477-((x478|x479)==x480));

    if (t119 != -7959) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x481 = -1;
	int32_t x482 = -1;
	uint64_t x483 = 16383LLU;
	static int64_t x484 = -12LL;
	volatile int32_t t120 = 49135;

    t120 = (x481-((x482|x483)==x484));

    if (t120 != -1) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x486 = INT32_MIN;
	int16_t x487 = INT16_MAX;
	int32_t t121 = 1002436;

    t121 = (x485-((x486|x487)==x488));

    if (t121 != 12) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x489 = 3U;
	int32_t x490 = 17525;
	uint32_t x491 = UINT32_MAX;
	int64_t x492 = -1LL;
	volatile int32_t t122 = 169788345;

    t122 = (x489-((x490|x491)==x492));

    if (t122 != 3) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x493 = 94U;
	int16_t x494 = INT16_MIN;
	static int32_t t123 = -1;

    t123 = (x493-((x494|x495)==x496));

    if (t123 != 94) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile uint32_t x497 = 121U;
	uint64_t x498 = UINT64_MAX;

    t124 = (x497-((x498|x499)==x500));

    if (t124 != 121U) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint16_t x501 = 3U;
	volatile int16_t x502 = -7;
	int8_t x503 = INT8_MAX;
	static int8_t x504 = -1;
	int32_t t125 = -47119568;

    t125 = (x501-((x502|x503)==x504));

    if (t125 != 2) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x506 = INT16_MIN;
	uint16_t x507 = 9U;
	int64_t x508 = INT64_MAX;

    t126 = (x505-((x506|x507)==x508));

    if (t126 != 32767) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x509 = INT64_MAX;
	uint8_t x510 = 1U;
	volatile uint64_t x511 = UINT64_MAX;
	uint64_t x512 = 102967484LLU;
	static int64_t t127 = INT64_MAX;

    t127 = (x509-((x510|x511)==x512));

    if (t127 != INT64_MAX) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint8_t x514 = UINT8_MAX;
	volatile uint16_t x515 = 0U;
	volatile int64_t x516 = -455633335227256800LL;
	volatile int32_t t128 = INT32_MAX;

    t128 = (x513-((x514|x515)==x516));

    if (t128 != INT32_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = INT32_MIN;
	volatile uint8_t x518 = 17U;
	static int32_t t129 = INT32_MIN;

    t129 = (x517-((x518|x519)==x520));

    if (t129 != INT32_MIN) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x522 = UINT16_MAX;
	static volatile uint32_t x523 = 38U;
	static volatile uint8_t x524 = UINT8_MAX;

    t130 = (x521-((x522|x523)==x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x525 = INT64_MIN;
	int8_t x526 = INT8_MIN;
	int16_t x527 = INT16_MIN;
	static uint16_t x528 = 23099U;
	volatile int64_t t131 = INT64_MIN;

    t131 = (x525-((x526|x527)==x528));

    if (t131 != INT64_MIN) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x529 = UINT16_MAX;
	int16_t x532 = INT16_MAX;

    t132 = (x529-((x530|x531)==x532));

    if (t132 != 65535) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x534 = INT16_MIN;
	uint64_t x535 = 164964210LLU;

    t133 = (x533-((x534|x535)==x536));

    if (t133 != -1) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x537 = -1;
	int16_t x538 = 98;
	int16_t x540 = 0;
	volatile int32_t t134 = -8622;

    t134 = (x537-((x538|x539)==x540));

    if (t134 != -1) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x541 = 6325LL;
	int8_t x542 = -1;
	uint32_t x543 = UINT32_MAX;
	static int8_t x544 = INT8_MIN;

    t135 = (x541-((x542|x543)==x544));

    if (t135 != 6325LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x545 = INT16_MIN;
	int64_t x546 = -13266907208LL;
	uint16_t x548 = 12685U;
	int32_t t136 = 50482;

    t136 = (x545-((x546|x547)==x548));

    if (t136 != -32768) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x549 = INT8_MAX;
	static volatile int32_t x550 = INT32_MIN;
	uint8_t x551 = 0U;
	int32_t x552 = INT32_MIN;
	int32_t t137 = -153651;

    t137 = (x549-((x550|x551)==x552));

    if (t137 != 126) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x553 = 2933575;
	int32_t x554 = -317;
	volatile int8_t x555 = INT8_MIN;
	int32_t t138 = 28928;

    t138 = (x553-((x554|x555)==x556));

    if (t138 != 2933575) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint16_t x557 = 6389U;
	volatile uint16_t x558 = UINT16_MAX;
	int32_t x560 = 423;
	volatile int32_t t139 = -64704;

    t139 = (x557-((x558|x559)==x560));

    if (t139 != 6389) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x561 = -1;
	int8_t x562 = 1;
	int16_t x563 = INT16_MAX;
	volatile int32_t t140 = 3573897;

    t140 = (x561-((x562|x563)==x564));

    if (t140 != -1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = INT32_MIN;
	int16_t x566 = INT16_MIN;
	int16_t x567 = 7;
	uint64_t x568 = 922LLU;
	int32_t t141 = INT32_MIN;

    t141 = (x565-((x566|x567)==x568));

    if (t141 != INT32_MIN) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x569 = 29U;
	int64_t x570 = -1189657LL;
	volatile uint16_t x571 = UINT16_MAX;
	int8_t x572 = -1;
	volatile int32_t t142 = 1707;

    t142 = (x569-((x570|x571)==x572));

    if (t142 != 29) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x574 = 77;
	uint8_t x575 = UINT8_MAX;
	int8_t x576 = INT8_MAX;
	uint32_t t143 = UINT32_MAX;

    t143 = (x573-((x574|x575)==x576));

    if (t143 != UINT32_MAX) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x577 = 3703U;
	uint8_t x578 = 6U;
	int16_t x579 = INT16_MAX;
	static int8_t x580 = INT8_MAX;
	volatile uint32_t t144 = 3440U;

    t144 = (x577-((x578|x579)==x580));

    if (t144 != 3703U) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x582 = 24U;
	int32_t x584 = -4;
	volatile int32_t t145 = -3493042;

    t145 = (x581-((x582|x583)==x584));

    if (t145 != -32768) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x585 = 11U;
	uint16_t x586 = UINT16_MAX;
	int8_t x587 = 16;
	volatile int64_t x588 = INT64_MIN;

    t146 = (x585-((x586|x587)==x588));

    if (t146 != 11) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x589 = -12;
	volatile int64_t x590 = INT64_MIN;
	static volatile int8_t x592 = -1;
	volatile int32_t t147 = -10152849;

    t147 = (x589-((x590|x591)==x592));

    if (t147 != -13) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x594 = INT32_MIN;
	int32_t x596 = INT32_MAX;

    t148 = (x593-((x594|x595)==x596));

    if (t148 != -1) { NG(); } else { ; }
	
}

void f149(void) {
    	static int32_t x597 = -1;
	uint64_t x598 = 4734438776696780067LLU;
	int64_t x600 = INT64_MIN;
	static volatile int32_t t149 = 261918;

    t149 = (x597-((x598|x599)==x600));

    if (t149 != -1) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x602 = -1;
	int32_t x603 = INT32_MIN;
	int32_t x604 = INT32_MIN;
	volatile int32_t t150 = 2933;

    t150 = (x601-((x602|x603)==x604));

    if (t150 != -1) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x605 = -40;
	volatile int8_t x607 = -14;
	uint32_t x608 = 4461595U;
	int32_t t151 = 266972204;

    t151 = (x605-((x606|x607)==x608));

    if (t151 != -40) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile uint64_t x609 = UINT64_MAX;
	volatile uint64_t x610 = 41015310835LLU;
	int64_t x612 = INT64_MIN;
	volatile uint64_t t152 = UINT64_MAX;

    t152 = (x609-((x610|x611)==x612));

    if (t152 != UINT64_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x613 = INT16_MIN;
	int64_t x615 = -7LL;
	uint32_t x616 = 4923U;
	volatile int32_t t153 = -3276;

    t153 = (x613-((x614|x615)==x616));

    if (t153 != -32768) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x617 = INT64_MAX;
	int8_t x618 = 0;
	static uint64_t x619 = 881612764088462670LLU;
	uint32_t x620 = 314U;
	int64_t t154 = INT64_MAX;

    t154 = (x617-((x618|x619)==x620));

    if (t154 != INT64_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint8_t x621 = UINT8_MAX;
	uint16_t x623 = 5843U;
	int64_t x624 = -1LL;
	int32_t t155 = -900364013;

    t155 = (x621-((x622|x623)==x624));

    if (t155 != 255) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x626 = INT8_MAX;
	uint16_t x627 = 24U;
	int64_t x628 = -34206032296LL;
	uint32_t t156 = 2037533655U;

    t156 = (x625-((x626|x627)==x628));

    if (t156 != 53645U) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x629 = UINT8_MAX;
	static int8_t x631 = INT8_MAX;
	uint8_t x632 = 6U;
	int32_t t157 = 1;

    t157 = (x629-((x630|x631)==x632));

    if (t157 != 255) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x633 = -113;
	volatile uint64_t x634 = UINT64_MAX;
	int32_t x636 = -1037914;
	static volatile int32_t t158 = -32709;

    t158 = (x633-((x634|x635)==x636));

    if (t158 != -113) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x637 = UINT32_MAX;
	uint8_t x639 = 7U;
	volatile uint32_t t159 = UINT32_MAX;

    t159 = (x637-((x638|x639)==x640));

    if (t159 != UINT32_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x641 = INT16_MAX;
	int8_t x642 = -27;
	uint16_t x643 = UINT16_MAX;
	uint16_t x644 = 20U;
	volatile int32_t t160 = 160;

    t160 = (x641-((x642|x643)==x644));

    if (t160 != 32767) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x647 = INT32_MIN;
	static volatile uint16_t x648 = 6U;
	int32_t t161 = -2979531;

    t161 = (x645-((x646|x647)==x648));

    if (t161 != -70773119) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile uint16_t x649 = 398U;
	int64_t x650 = INT64_MIN;
	volatile int64_t x651 = 1LL;
	volatile int8_t x652 = -53;
	volatile int32_t t162 = 261522;

    t162 = (x649-((x650|x651)==x652));

    if (t162 != 398) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x655 = UINT64_MAX;
	uint32_t x656 = 427U;
	static volatile int32_t t163 = 1530156;

    t163 = (x653-((x654|x655)==x656));

    if (t163 != 248) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x658 = -1LL;
	volatile uint8_t x659 = UINT8_MAX;
	uint32_t x660 = UINT32_MAX;
	static volatile int32_t t164 = -916277710;

    t164 = (x657-((x658|x659)==x660));

    if (t164 != -1) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x662 = -64;
	static int8_t x663 = 1;
	volatile uint32_t x664 = 215542U;
	static int32_t t165 = 1;

    t165 = (x661-((x662|x663)==x664));

    if (t165 != 16) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x665 = 1LLU;
	volatile uint32_t x667 = UINT32_MAX;
	int32_t x668 = -1;
	uint64_t t166 = 7497LLU;

    t166 = (x665-((x666|x667)==x668));

    if (t166 != 1LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x669 = 26U;
	static int32_t x670 = INT32_MIN;
	int16_t x672 = INT16_MIN;

    t167 = (x669-((x670|x671)==x672));

    if (t167 != 26U) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x673 = UINT16_MAX;
	uint8_t x674 = 104U;
	int16_t x675 = -1;
	int32_t t168 = -30704848;

    t168 = (x673-((x674|x675)==x676));

    if (t168 != 65535) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = -107531416;
	static int64_t x678 = -99633340887139812LL;
	int16_t x680 = INT16_MIN;
	int32_t t169 = 394621366;

    t169 = (x677-((x678|x679)==x680));

    if (t169 != -107531416) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x681 = UINT16_MAX;
	volatile int64_t x682 = -1LL;
	int8_t x683 = INT8_MAX;
	static volatile int32_t t170 = 4925;

    t170 = (x681-((x682|x683)==x684));

    if (t170 != 65534) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x685 = -1LL;
	int32_t x686 = 104;
	int64_t x687 = 2335874914822987368LL;
	int64_t x688 = INT64_MAX;
	int64_t t171 = -2192283226705068LL;

    t171 = (x685-((x686|x687)==x688));

    if (t171 != -1LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x689 = 3U;
	int64_t x690 = -64793104055828LL;
	int64_t x691 = 557976670LL;
	volatile int32_t t172 = -12;

    t172 = (x689-((x690|x691)==x692));

    if (t172 != 3) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x693 = -1LL;
	static int8_t x695 = INT8_MAX;

    t173 = (x693-((x694|x695)==x696));

    if (t173 != -1LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x700 = 190LL;

    t174 = (x697-((x698|x699)==x700));

    if (t174 != 20) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x701 = 27;
	volatile uint32_t x702 = UINT32_MAX;
	int64_t x704 = -23LL;
	int32_t t175 = -1254383;

    t175 = (x701-((x702|x703)==x704));

    if (t175 != 27) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x705 = UINT16_MAX;
	int16_t x706 = INT16_MIN;
	int32_t t176 = 320702;

    t176 = (x705-((x706|x707)==x708));

    if (t176 != 65535) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x709 = 31;
	static volatile int64_t x710 = INT64_MAX;
	int64_t x712 = INT64_MIN;
	int32_t t177 = -94411;

    t177 = (x709-((x710|x711)==x712));

    if (t177 != 31) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x713 = -1;
	volatile uint64_t x714 = 11315658394901LLU;
	uint8_t x716 = UINT8_MAX;

    t178 = (x713-((x714|x715)==x716));

    if (t178 != -1) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x717 = INT8_MIN;
	volatile int64_t x718 = INT64_MIN;
	static uint32_t x719 = 12387748U;
	uint8_t x720 = 3U;

    t179 = (x717-((x718|x719)==x720));

    if (t179 != -128) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x721 = -1LL;
	uint64_t x723 = UINT64_MAX;
	static int8_t x724 = -5;
	volatile int64_t t180 = -4LL;

    t180 = (x721-((x722|x723)==x724));

    if (t180 != -1LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x725 = INT32_MIN;
	volatile int64_t x726 = INT64_MIN;
	int16_t x727 = 7259;
	int8_t x728 = INT8_MAX;
	static volatile int32_t t181 = INT32_MIN;

    t181 = (x725-((x726|x727)==x728));

    if (t181 != INT32_MIN) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x730 = 7099049LL;
	volatile int32_t x731 = INT32_MAX;
	uint16_t x732 = UINT16_MAX;
	int32_t t182 = 4130676;

    t182 = (x729-((x730|x731)==x732));

    if (t182 != -7) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int8_t x733 = -1;
	static int64_t x734 = INT64_MAX;
	int32_t x735 = 3277966;
	uint64_t x736 = 104102LLU;
	int32_t t183 = -7;

    t183 = (x733-((x734|x735)==x736));

    if (t183 != -1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x737 = 1U;
	int64_t x739 = INT64_MIN;

    t184 = (x737-((x738|x739)==x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x741 = INT16_MAX;
	static int64_t x743 = INT64_MIN;
	int16_t x744 = INT16_MIN;
	volatile int32_t t185 = 6410598;

    t185 = (x741-((x742|x743)==x744));

    if (t185 != 32767) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x746 = -7571;
	uint16_t x747 = 73U;
	static int64_t x748 = INT64_MIN;
	int32_t t186 = -95;

    t186 = (x745-((x746|x747)==x748));

    if (t186 != -32768) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x749 = UINT64_MAX;
	int8_t x750 = INT8_MIN;
	int64_t x752 = INT64_MIN;
	volatile uint64_t t187 = UINT64_MAX;

    t187 = (x749-((x750|x751)==x752));

    if (t187 != UINT64_MAX) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x753 = 3LLU;
	volatile uint32_t x754 = 0U;
	static volatile int8_t x755 = -1;
	uint16_t x756 = 771U;
	volatile uint64_t t188 = 8152831777LLU;

    t188 = (x753-((x754|x755)==x756));

    if (t188 != 3LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x757 = 67U;
	int64_t x758 = 356502581243079263LL;
	static volatile int16_t x759 = -1;
	static uint32_t x760 = 5837062U;

    t189 = (x757-((x758|x759)==x760));

    if (t189 != 67) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile uint32_t x761 = 1615U;
	static volatile int32_t x762 = INT32_MAX;
	int32_t x763 = INT32_MIN;
	int8_t x764 = 0;
	volatile uint32_t t190 = 1180U;

    t190 = (x761-((x762|x763)==x764));

    if (t190 != 1615U) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x765 = 1;
	static uint32_t x766 = 8820U;
	int32_t t191 = 6870;

    t191 = (x765-((x766|x767)==x768));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x769 = INT32_MAX;
	int32_t x770 = -1;
	static int64_t x771 = INT64_MIN;
	uint16_t x772 = 3333U;
	int32_t t192 = INT32_MAX;

    t192 = (x769-((x770|x771)==x772));

    if (t192 != INT32_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x773 = INT32_MAX;
	int8_t x774 = 3;
	volatile uint16_t x775 = 2U;
	static volatile int32_t t193 = INT32_MAX;

    t193 = (x773-((x774|x775)==x776));

    if (t193 != INT32_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x777 = INT32_MAX;
	static int8_t x778 = INT8_MIN;
	int8_t x779 = INT8_MIN;
	int32_t x780 = INT32_MIN;
	volatile int32_t t194 = INT32_MAX;

    t194 = (x777-((x778|x779)==x780));

    if (t194 != INT32_MAX) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x781 = INT8_MAX;
	int32_t x782 = 58197;
	static int32_t x783 = INT32_MIN;
	int32_t t195 = 514;

    t195 = (x781-((x782|x783)==x784));

    if (t195 != 127) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = INT16_MIN;
	static int32_t x786 = -1;
	volatile int64_t x787 = INT64_MAX;
	static volatile int64_t x788 = -161900806012638LL;
	volatile int32_t t196 = 249633385;

    t196 = (x785-((x786|x787)==x788));

    if (t196 != -32768) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x789 = INT32_MIN;
	int32_t x791 = INT32_MAX;
	int16_t x792 = 121;
	int32_t t197 = INT32_MIN;

    t197 = (x789-((x790|x791)==x792));

    if (t197 != INT32_MIN) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x793 = INT16_MIN;
	uint16_t x794 = UINT16_MAX;
	volatile int8_t x795 = 0;
	static uint8_t x796 = 42U;

    t198 = (x793-((x794|x795)==x796));

    if (t198 != -32768) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x797 = -1;
	int16_t x798 = INT16_MIN;
	int32_t x799 = 3291;
	uint32_t x800 = 1946000U;
	volatile int32_t t199 = -3;

    t199 = (x797-((x798|x799)==x800));

    if (t199 != -1) { NG(); } else { ; }
	
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

