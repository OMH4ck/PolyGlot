
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

static uint8_t x2 = UINT8_MAX;
static int32_t x6 = INT32_MAX;
uint16_t x7 = UINT16_MAX;
uint32_t x10 = 42017U;
int32_t x12 = INT32_MIN;
static int8_t x16 = INT8_MAX;
uint8_t x20 = 1U;
volatile uint64_t x23 = UINT64_MAX;
uint64_t x29 = 22824494LLU;
volatile int16_t x30 = -2599;
int64_t x33 = INT64_MIN;
int8_t x34 = INT8_MAX;
int32_t x35 = -780;
int32_t x39 = INT32_MIN;
int32_t x49 = INT32_MAX;
int8_t x52 = -36;
int64_t x55 = INT64_MIN;
int8_t x58 = 0;
volatile int32_t t15 = -6728442;
uint64_t x68 = 41549874659410LLU;
static int8_t x79 = INT8_MAX;
uint16_t x90 = UINT16_MAX;
int64_t x103 = 11992304935948937LL;
volatile int32_t t25 = -15;
int64_t x110 = INT64_MIN;
int32_t x112 = INT32_MIN;
int32_t t27 = 3153;
volatile int16_t x118 = -1;
int16_t x125 = INT16_MIN;
int32_t t31 = -139361500;
volatile uint64_t x129 = 9698399348969LLU;
int16_t x130 = INT16_MIN;
volatile int32_t t33 = -8254963;
static int8_t x139 = INT8_MAX;
int32_t x150 = 9638862;
volatile int32_t x151 = INT32_MIN;
int32_t x159 = INT32_MAX;
static int32_t t39 = -868120;
int32_t t40 = -1001129997;
int32_t x165 = INT32_MAX;
static int16_t x167 = INT16_MAX;
int32_t t41 = 107926099;
uint8_t x170 = UINT8_MAX;
volatile int32_t t42 = 8145;
int16_t x174 = INT16_MIN;
int32_t t43 = 106984704;
int16_t x177 = -1;
volatile int32_t t44 = 24126;
int32_t x182 = INT32_MAX;
volatile int8_t x183 = INT8_MIN;
int16_t x184 = -1;
static int64_t x185 = INT64_MAX;
int64_t x186 = -1LL;
int8_t x190 = INT8_MIN;
volatile int32_t t48 = 1;
int8_t x198 = INT8_MIN;
volatile int32_t t49 = 3914309;
int32_t x210 = INT32_MIN;
int64_t x211 = 8782375294807004LL;
uint32_t x225 = UINT32_MAX;
static int8_t x227 = INT8_MIN;
int16_t x236 = INT16_MIN;
int32_t t58 = 60;
static int64_t x237 = INT64_MIN;
int16_t x240 = 119;
int16_t x242 = INT16_MIN;
int64_t x243 = -1LL;
uint32_t x244 = UINT32_MAX;
static int16_t x255 = INT16_MIN;
volatile int64_t x263 = INT64_MAX;
static int32_t t65 = -1875;
int32_t x269 = 13;
uint16_t x278 = 11U;
static int32_t t69 = 390672;
static int64_t x290 = -24740641441947LL;
static int8_t x294 = INT8_MIN;
uint64_t x300 = UINT64_MAX;
volatile uint64_t x301 = UINT64_MAX;
int32_t x302 = -168;
int64_t x305 = INT64_MIN;
static int8_t x312 = -1;
volatile int64_t x313 = -1LL;
int8_t x316 = INT8_MAX;
static uint16_t x322 = UINT16_MAX;
volatile uint16_t x331 = 7475U;
volatile int64_t x344 = INT64_MAX;
int32_t t85 = 37;
static int32_t t86 = -5615;
int16_t x350 = 5;
int16_t x356 = INT16_MAX;
static volatile int16_t x357 = INT16_MIN;
uint32_t x370 = 103886U;
int32_t x376 = INT32_MAX;
int8_t x381 = 1;
uint32_t x383 = 8U;
uint8_t x385 = 42U;
uint32_t x388 = UINT32_MAX;
int16_t x390 = INT16_MIN;
int64_t x393 = -1LL;
static int8_t x399 = INT8_MIN;
int32_t t99 = -1141;
int64_t x402 = 27574657054154529LL;
uint32_t x403 = 11U;
uint16_t x404 = 953U;
uint64_t x413 = UINT64_MAX;
volatile int32_t x416 = -1;
static int32_t t103 = 2770;
volatile uint64_t x419 = 515779784326754LLU;
uint32_t x422 = 88U;
static int32_t x425 = INT32_MIN;
int32_t x427 = 0;
int64_t x435 = -508735779576LL;
int8_t x439 = -1;
int8_t x444 = 63;
uint32_t x447 = UINT32_MAX;
static int32_t x457 = 286517;
volatile int16_t x458 = 6356;
static int32_t t114 = -70255;
uint16_t x462 = 27948U;
uint8_t x464 = 16U;
volatile int64_t x466 = INT64_MIN;
static uint32_t x468 = 3940085U;
int32_t x473 = -1;
int64_t x476 = INT64_MIN;
uint16_t x482 = 3337U;
uint8_t x483 = UINT8_MAX;
static uint64_t x486 = 7406668890842418LLU;
static int8_t x490 = INT8_MIN;
static int64_t x494 = -2543532279885LL;
static int32_t t124 = -725;
int64_t x502 = -1LL;
static int32_t x503 = INT32_MAX;
int32_t t125 = 260095;
volatile int32_t t126 = 0;
int16_t x514 = INT16_MIN;
uint32_t x516 = 2466145U;
static volatile uint8_t x520 = UINT8_MAX;
static uint16_t x522 = UINT16_MAX;
int16_t x527 = -8153;
static int8_t x529 = INT8_MAX;
volatile uint32_t x537 = 23234U;
static int64_t x538 = INT64_MAX;
int8_t x539 = INT8_MIN;
uint16_t x541 = UINT16_MAX;
static uint32_t x546 = UINT32_MAX;
static int16_t x547 = -1;
static uint16_t x551 = 29267U;
uint32_t x552 = 102149277U;
uint32_t x554 = UINT32_MAX;
uint64_t x557 = 4328736475284609148LLU;
volatile int32_t t139 = -904875;
volatile int64_t x561 = INT64_MIN;
int32_t x563 = INT32_MIN;
int8_t x565 = 3;
static uint8_t x568 = UINT8_MAX;
int16_t x574 = 1;
static uint8_t x575 = 56U;
static int8_t x582 = INT8_MIN;
uint16_t x593 = 102U;
uint16_t x595 = UINT16_MAX;
uint64_t x599 = UINT64_MAX;
uint16_t x601 = 11823U;
static int32_t x603 = INT32_MAX;
static volatile int32_t x607 = INT32_MAX;
volatile uint8_t x608 = UINT8_MAX;
uint32_t x611 = 77988U;
int32_t t153 = 1;
int64_t x625 = -276732317696LL;
uint64_t x628 = UINT64_MAX;
static int32_t x629 = -1;
uint8_t x631 = UINT8_MAX;
static int64_t x636 = 10196146422LL;
volatile uint32_t x642 = 1748U;
static uint32_t x643 = UINT32_MAX;
int64_t x646 = INT64_MIN;
int16_t x651 = -2004;
uint16_t x652 = 5U;
int64_t x653 = INT64_MIN;
int16_t x656 = -1;
static uint64_t x663 = 221659655475569688LLU;
uint32_t x664 = 1454876433U;
int16_t x667 = -28;
static int64_t x668 = INT64_MIN;
static volatile int32_t t166 = 2039410;
static int8_t x670 = -1;
static uint32_t x671 = 6688U;
int8_t x675 = INT8_MIN;
int32_t x677 = INT32_MAX;
int8_t x689 = INT8_MIN;
int16_t x690 = -14935;
static int32_t x691 = INT32_MAX;
static uint16_t x697 = 8U;
int32_t t174 = -1368;
volatile uint8_t x703 = UINT8_MAX;
volatile int32_t t175 = -1;
volatile uint64_t x708 = 92LLU;
int32_t t176 = 25556;
uint16_t x712 = 1703U;
volatile int32_t t179 = 281;
int16_t x725 = INT16_MAX;
volatile int64_t x727 = INT64_MAX;
int16_t x729 = INT16_MAX;
int32_t x730 = INT32_MIN;
int16_t x736 = -1;
int64_t x737 = INT64_MIN;
static int32_t x740 = -1;
uint16_t x757 = 12U;
static volatile int8_t x759 = INT8_MAX;
uint64_t x760 = 7646LLU;
static int16_t x766 = 29;
int16_t x767 = INT16_MIN;
volatile int32_t t191 = -21896515;
volatile int32_t t193 = -1545;
int64_t x780 = -45635076266860703LL;
static int64_t x782 = -1LL;
static volatile int32_t t195 = 45535;
int16_t x795 = 46;
int32_t t198 = -1472;
uint8_t x800 = 1U;


void f0(void) {
    	int16_t x1 = 26;
	static int8_t x3 = 52;
	uint8_t x4 = 28U;
	int32_t t0 = -3074;

    t0 = (x1==((x2|x3)==x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MIN;
	int64_t x8 = -1LL;
	volatile int32_t t1 = 115636;

    t1 = (x5==((x6|x7)==x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = -54951926;
	int16_t x11 = -1;
	static int32_t t2 = 5061;

    t2 = (x9==((x10|x11)==x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = 0;
	int8_t x14 = -1;
	uint16_t x15 = 22U;
	volatile int32_t t3 = 301159;

    t3 = (x13==((x14|x15)==x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x17 = INT32_MIN;
	int64_t x18 = 593752576558LL;
	static volatile int64_t x19 = INT64_MAX;
	static volatile int32_t t4 = 3045021;

    t4 = (x17==((x18|x19)==x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = UINT64_MAX;
	int8_t x22 = -1;
	int32_t x24 = INT32_MIN;
	static volatile int32_t t5 = 980;

    t5 = (x21==((x22|x23)==x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = 6;
	int16_t x26 = INT16_MIN;
	int16_t x27 = -1;
	uint16_t x28 = UINT16_MAX;
	volatile int32_t t6 = 375;

    t6 = (x25==((x26|x27)==x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x31 = INT16_MIN;
	uint16_t x32 = 384U;
	static int32_t t7 = -2465443;

    t7 = (x29==((x30|x31)==x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x36 = 105629977293LL;
	int32_t t8 = 5003;

    t8 = (x33==((x34|x35)==x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x37 = 93U;
	uint16_t x38 = UINT16_MAX;
	static uint64_t x40 = 130068136784593LLU;
	static int32_t t9 = -2;

    t9 = (x37==((x38|x39)==x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = -1;
	uint64_t x42 = 965656850043882LLU;
	static int16_t x43 = -19;
	static int16_t x44 = -1;
	static int32_t t10 = 24917;

    t10 = (x41==((x42|x43)==x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = INT64_MAX;
	int64_t x46 = INT64_MAX;
	uint32_t x47 = 11U;
	int16_t x48 = -1;
	int32_t t11 = 23296239;

    t11 = (x45==((x46|x47)==x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int64_t x50 = INT64_MIN;
	uint32_t x51 = UINT32_MAX;
	int32_t t12 = -170534;

    t12 = (x49==((x50|x51)==x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x53 = 1LLU;
	uint32_t x54 = 32440564U;
	static uint64_t x56 = 2281058LLU;
	volatile int32_t t13 = -6967;

    t13 = (x53==((x54|x55)==x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x57 = INT64_MAX;
	int8_t x59 = 1;
	static int32_t x60 = 24223;
	volatile int32_t t14 = 3868;

    t14 = (x57==((x58|x59)==x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint8_t x61 = 0U;
	int32_t x62 = -1;
	static volatile int8_t x63 = -1;
	int16_t x64 = 310;

    t15 = (x61==((x62|x63)==x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x65 = INT8_MIN;
	int8_t x66 = -1;
	int32_t x67 = INT32_MAX;
	volatile int32_t t16 = -48;

    t16 = (x65==((x66|x67)==x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = INT64_MIN;
	int16_t x70 = -1;
	static int64_t x71 = INT64_MAX;
	int64_t x72 = 12LL;
	volatile int32_t t17 = 3373;

    t17 = (x69==((x70|x71)==x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint16_t x73 = 60U;
	volatile int16_t x74 = -46;
	static int64_t x75 = INT64_MIN;
	volatile uint64_t x76 = UINT64_MAX;
	volatile int32_t t18 = 37;

    t18 = (x73==((x74|x75)==x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x77 = INT32_MIN;
	int8_t x78 = -1;
	int16_t x80 = -1261;
	static int32_t t19 = 1;

    t19 = (x77==((x78|x79)==x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x81 = -1;
	static volatile int32_t x82 = 78853;
	volatile int64_t x83 = -35389455299883LL;
	int8_t x84 = INT8_MIN;
	int32_t t20 = -9;

    t20 = (x81==((x82|x83)==x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x85 = 1U;
	int16_t x86 = INT16_MIN;
	int64_t x87 = -68952665142LL;
	static int64_t x88 = 1611LL;
	volatile int32_t t21 = 2679736;

    t21 = (x85==((x86|x87)==x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile uint16_t x89 = 3U;
	static int8_t x91 = INT8_MIN;
	int32_t x92 = INT32_MAX;
	int32_t t22 = -14189;

    t22 = (x89==((x90|x91)==x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x93 = INT16_MIN;
	int8_t x94 = INT8_MIN;
	int8_t x95 = INT8_MAX;
	static uint64_t x96 = UINT64_MAX;
	int32_t t23 = -2181523;

    t23 = (x93==((x94|x95)==x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x97 = -56231662LL;
	int16_t x98 = INT16_MIN;
	static int32_t x99 = INT32_MAX;
	uint16_t x100 = 20U;
	int32_t t24 = 757705;

    t24 = (x97==((x98|x99)==x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x101 = 1533U;
	static int16_t x102 = -189;
	int8_t x104 = INT8_MAX;

    t25 = (x101==((x102|x103)==x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x105 = INT8_MIN;
	int8_t x106 = INT8_MIN;
	uint64_t x107 = 3386800776892541032LLU;
	volatile uint64_t x108 = UINT64_MAX;
	static volatile int32_t t26 = -46167798;

    t26 = (x105==((x106|x107)==x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = INT16_MAX;
	static int32_t x111 = INT32_MAX;

    t27 = (x109==((x110|x111)==x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x113 = INT32_MIN;
	uint64_t x114 = 131397335979966519LLU;
	volatile int16_t x115 = INT16_MAX;
	static uint16_t x116 = 30U;
	volatile int32_t t28 = 876082;

    t28 = (x113==((x114|x115)==x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x117 = 2329U;
	volatile int8_t x119 = 18;
	int8_t x120 = -1;
	volatile int32_t t29 = -178087526;

    t29 = (x117==((x118|x119)==x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint8_t x121 = 0U;
	volatile uint32_t x122 = 21123379U;
	static volatile int32_t x123 = 231833191;
	volatile uint64_t x124 = UINT64_MAX;
	volatile int32_t t30 = -52205685;

    t30 = (x121==((x122|x123)==x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x126 = INT16_MIN;
	uint64_t x127 = 8743638415641368LLU;
	int16_t x128 = -1;

    t31 = (x125==((x126|x127)==x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x131 = -4;
	uint8_t x132 = UINT8_MAX;
	volatile int32_t t32 = 21457;

    t32 = (x129==((x130|x131)==x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile int8_t x133 = -8;
	volatile int16_t x134 = INT16_MIN;
	static int64_t x135 = INT64_MIN;
	uint32_t x136 = 1463U;

    t33 = (x133==((x134|x135)==x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x137 = -1;
	int8_t x138 = INT8_MIN;
	int64_t x140 = INT64_MAX;
	volatile int32_t t34 = -2154954;

    t34 = (x137==((x138|x139)==x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x141 = 15839945LLU;
	static uint32_t x142 = 419402U;
	uint32_t x143 = 3U;
	int64_t x144 = 1068569749130671644LL;
	int32_t t35 = 384523324;

    t35 = (x141==((x142|x143)==x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x145 = UINT16_MAX;
	static int64_t x146 = INT64_MIN;
	static int32_t x147 = INT32_MIN;
	static int32_t x148 = -464;
	volatile int32_t t36 = 93830573;

    t36 = (x145==((x146|x147)==x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x149 = UINT32_MAX;
	uint8_t x152 = 1U;
	static volatile int32_t t37 = 1;

    t37 = (x149==((x150|x151)==x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x153 = INT16_MAX;
	volatile int16_t x154 = 5127;
	uint8_t x155 = UINT8_MAX;
	uint32_t x156 = 306084U;
	int32_t t38 = 16078722;

    t38 = (x153==((x154|x155)==x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x157 = INT64_MAX;
	int64_t x158 = -1LL;
	uint64_t x160 = UINT64_MAX;

    t39 = (x157==((x158|x159)==x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x161 = INT8_MAX;
	int16_t x162 = INT16_MIN;
	int16_t x163 = INT16_MIN;
	int16_t x164 = -1;

    t40 = (x161==((x162|x163)==x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x166 = -1;
	volatile uint8_t x168 = 125U;

    t41 = (x165==((x166|x167)==x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x169 = INT16_MIN;
	int32_t x171 = -977337880;
	static int32_t x172 = 861;

    t42 = (x169==((x170|x171)==x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint8_t x173 = 1U;
	static int32_t x175 = 17;
	int32_t x176 = INT32_MIN;

    t43 = (x173==((x174|x175)==x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x178 = 4414303521840LL;
	uint64_t x179 = 590516113LLU;
	static int32_t x180 = INT32_MIN;

    t44 = (x177==((x178|x179)==x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x181 = -1;
	int32_t t45 = 218;

    t45 = (x181==((x182|x183)==x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x187 = 7;
	int8_t x188 = INT8_MIN;
	int32_t t46 = 8475;

    t46 = (x185==((x186|x187)==x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x189 = INT64_MAX;
	int32_t x191 = INT32_MAX;
	int32_t x192 = INT32_MIN;
	volatile int32_t t47 = -1;

    t47 = (x189==((x190|x191)==x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = -892;
	int32_t x194 = INT32_MIN;
	uint64_t x195 = UINT64_MAX;
	int64_t x196 = INT64_MAX;

    t48 = (x193==((x194|x195)==x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = INT64_MIN;
	static int32_t x199 = INT32_MAX;
	volatile uint16_t x200 = UINT16_MAX;

    t49 = (x197==((x198|x199)==x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x201 = INT32_MAX;
	uint64_t x202 = 161544777LLU;
	uint64_t x203 = UINT64_MAX;
	static uint8_t x204 = 0U;
	static volatile int32_t t50 = -422090103;

    t50 = (x201==((x202|x203)==x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x205 = INT16_MAX;
	uint32_t x206 = UINT32_MAX;
	int8_t x207 = 37;
	volatile int64_t x208 = -7295677163699017LL;
	volatile int32_t t51 = 5;

    t51 = (x205==((x206|x207)==x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = INT64_MIN;
	volatile uint32_t x212 = UINT32_MAX;
	volatile int32_t t52 = 7;

    t52 = (x209==((x210|x211)==x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x213 = -1;
	static int8_t x214 = -1;
	int32_t x215 = -1;
	int32_t x216 = 0;
	int32_t t53 = 56;

    t53 = (x213==((x214|x215)==x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile uint64_t x217 = 81484695319384922LLU;
	int64_t x218 = INT64_MIN;
	static int8_t x219 = 5;
	int16_t x220 = -1225;
	int32_t t54 = 2555813;

    t54 = (x217==((x218|x219)==x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x221 = 46256300135893467LL;
	int32_t x222 = -7694168;
	int32_t x223 = -1;
	int32_t x224 = 182750;
	int32_t t55 = 191417;

    t55 = (x221==((x222|x223)==x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x226 = 174284580997947520LL;
	uint8_t x228 = 2U;
	int32_t t56 = 268750439;

    t56 = (x225==((x226|x227)==x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = 1;
	uint16_t x230 = UINT16_MAX;
	static volatile int64_t x231 = -1LL;
	int64_t x232 = INT64_MIN;
	volatile int32_t t57 = -853951040;

    t57 = (x229==((x230|x231)==x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x233 = 38738U;
	uint8_t x234 = UINT8_MAX;
	int8_t x235 = -5;

    t58 = (x233==((x234|x235)==x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x238 = -1;
	int32_t x239 = INT32_MAX;
	int32_t t59 = 48218;

    t59 = (x237==((x238|x239)==x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x241 = -1LL;
	int32_t t60 = 3705481;

    t60 = (x241==((x242|x243)==x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x245 = 82;
	static int16_t x246 = 1;
	uint8_t x247 = 25U;
	int16_t x248 = 1798;
	static volatile int32_t t61 = -144;

    t61 = (x245==((x246|x247)==x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x249 = INT8_MIN;
	uint64_t x250 = 12889598938853LLU;
	int8_t x251 = -5;
	static uint16_t x252 = UINT16_MAX;
	int32_t t62 = -140138;

    t62 = (x249==((x250|x251)==x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x253 = 24U;
	int32_t x254 = INT32_MAX;
	int8_t x256 = 0;
	volatile int32_t t63 = 807943;

    t63 = (x253==((x254|x255)==x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x257 = INT64_MIN;
	static int64_t x258 = INT64_MIN;
	int8_t x259 = INT8_MIN;
	static uint8_t x260 = 22U;
	int32_t t64 = 238000;

    t64 = (x257==((x258|x259)==x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint16_t x261 = 67U;
	int16_t x262 = INT16_MIN;
	uint64_t x264 = UINT64_MAX;

    t65 = (x261==((x262|x263)==x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int16_t x265 = -1;
	int16_t x266 = -2726;
	static int64_t x267 = -1LL;
	static int16_t x268 = -106;
	volatile int32_t t66 = 200663;

    t66 = (x265==((x266|x267)==x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x270 = 6U;
	static volatile uint32_t x271 = 2157453U;
	uint32_t x272 = 217124U;
	static int32_t t67 = -65649384;

    t67 = (x269==((x270|x271)==x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x273 = INT16_MAX;
	static int32_t x274 = INT32_MIN;
	uint64_t x275 = 205546996LLU;
	static int64_t x276 = 3293934819561898LL;
	volatile int32_t t68 = -2048564;

    t68 = (x273==((x274|x275)==x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int64_t x277 = -18368057186LL;
	int16_t x279 = -6035;
	int16_t x280 = 5;

    t69 = (x277==((x278|x279)==x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint8_t x281 = 77U;
	static uint64_t x282 = UINT64_MAX;
	uint64_t x283 = 99261309231171282LLU;
	volatile uint32_t x284 = 1U;
	int32_t t70 = 13105;

    t70 = (x281==((x282|x283)==x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x285 = 7U;
	static int16_t x286 = -1;
	int16_t x287 = 1978;
	int32_t x288 = -1;
	volatile int32_t t71 = 211637;

    t71 = (x285==((x286|x287)==x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint8_t x289 = 58U;
	uint16_t x291 = UINT16_MAX;
	int32_t x292 = 20;
	int32_t t72 = 4763;

    t72 = (x289==((x290|x291)==x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint8_t x293 = UINT8_MAX;
	int8_t x295 = INT8_MIN;
	int8_t x296 = -1;
	int32_t t73 = -25720039;

    t73 = (x293==((x294|x295)==x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x297 = -1LL;
	volatile uint64_t x298 = UINT64_MAX;
	volatile int32_t x299 = -426392;
	int32_t t74 = 10371;

    t74 = (x297==((x298|x299)==x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x303 = -15;
	uint8_t x304 = 2U;
	int32_t t75 = 530115984;

    t75 = (x301==((x302|x303)==x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x306 = 15157;
	int64_t x307 = INT64_MIN;
	volatile int32_t x308 = -828459083;
	static int32_t t76 = 327;

    t76 = (x305==((x306|x307)==x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x309 = -22;
	int8_t x310 = -54;
	static uint64_t x311 = 714863642LLU;
	int32_t t77 = 388;

    t77 = (x309==((x310|x311)==x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x314 = 113U;
	static int8_t x315 = INT8_MAX;
	int32_t t78 = -7773;

    t78 = (x313==((x314|x315)==x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x317 = INT32_MAX;
	int64_t x318 = -16425LL;
	int8_t x319 = INT8_MAX;
	uint8_t x320 = 41U;
	int32_t t79 = 170767176;

    t79 = (x317==((x318|x319)==x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint64_t x321 = 3382695158552757914LLU;
	uint8_t x323 = 0U;
	int16_t x324 = -1;
	volatile int32_t t80 = -207222538;

    t80 = (x321==((x322|x323)==x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x325 = UINT32_MAX;
	int32_t x326 = -91430;
	static volatile int64_t x327 = 23LL;
	static uint32_t x328 = 174922864U;
	volatile int32_t t81 = -497;

    t81 = (x325==((x326|x327)==x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x329 = -1LL;
	uint32_t x330 = 119440U;
	uint8_t x332 = 22U;
	static int32_t t82 = 304085;

    t82 = (x329==((x330|x331)==x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x333 = 63;
	int8_t x334 = -1;
	uint8_t x335 = 4U;
	uint64_t x336 = UINT64_MAX;
	int32_t t83 = -5;

    t83 = (x333==((x334|x335)==x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x337 = 12;
	int64_t x338 = -1LL;
	int64_t x339 = INT64_MIN;
	static int8_t x340 = INT8_MIN;
	static int32_t t84 = -2171530;

    t84 = (x337==((x338|x339)==x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = INT64_MIN;
	uint32_t x342 = 9859417U;
	static uint32_t x343 = 0U;

    t85 = (x341==((x342|x343)==x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x345 = 1;
	int8_t x346 = INT8_MIN;
	int32_t x347 = INT32_MAX;
	uint16_t x348 = 5629U;

    t86 = (x345==((x346|x347)==x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x349 = INT8_MIN;
	uint64_t x351 = UINT64_MAX;
	int8_t x352 = INT8_MIN;
	int32_t t87 = 229;

    t87 = (x349==((x350|x351)==x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x353 = -1;
	volatile int16_t x354 = INT16_MIN;
	static uint8_t x355 = 5U;
	int32_t t88 = -416750;

    t88 = (x353==((x354|x355)==x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint64_t x358 = UINT64_MAX;
	static int64_t x359 = INT64_MIN;
	int32_t x360 = INT32_MIN;
	int32_t t89 = 61692;

    t89 = (x357==((x358|x359)==x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x361 = INT16_MAX;
	int64_t x362 = INT64_MAX;
	volatile uint8_t x363 = 17U;
	static int8_t x364 = INT8_MIN;
	volatile int32_t t90 = -64160;

    t90 = (x361==((x362|x363)==x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x365 = INT16_MAX;
	int16_t x366 = INT16_MIN;
	int64_t x367 = INT64_MIN;
	int32_t x368 = INT32_MAX;
	volatile int32_t t91 = 3;

    t91 = (x365==((x366|x367)==x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint16_t x369 = UINT16_MAX;
	int64_t x371 = -1LL;
	static uint16_t x372 = 10242U;
	volatile int32_t t92 = 578;

    t92 = (x369==((x370|x371)==x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x373 = INT8_MAX;
	int16_t x374 = INT16_MIN;
	int32_t x375 = INT32_MIN;
	int32_t t93 = 0;

    t93 = (x373==((x374|x375)==x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = INT32_MIN;
	int8_t x378 = -45;
	int8_t x379 = 20;
	static uint8_t x380 = UINT8_MAX;
	static int32_t t94 = 0;

    t94 = (x377==((x378|x379)==x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x382 = -1;
	int32_t x384 = -1;
	volatile int32_t t95 = 876;

    t95 = (x381==((x382|x383)==x384));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x386 = INT8_MIN;
	int32_t x387 = -1;
	int32_t t96 = -2;

    t96 = (x385==((x386|x387)==x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x389 = INT32_MIN;
	uint64_t x391 = 16LLU;
	int8_t x392 = -6;
	int32_t t97 = -15426;

    t97 = (x389==((x390|x391)==x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x394 = INT64_MIN;
	int16_t x395 = -101;
	uint16_t x396 = UINT16_MAX;
	volatile int32_t t98 = -692390345;

    t98 = (x393==((x394|x395)==x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x397 = -1;
	uint16_t x398 = UINT16_MAX;
	uint8_t x400 = 31U;

    t99 = (x397==((x398|x399)==x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x401 = 0;
	int32_t t100 = -47469425;

    t100 = (x401==((x402|x403)==x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint32_t x405 = UINT32_MAX;
	int8_t x406 = INT8_MAX;
	volatile uint32_t x407 = 511217088U;
	uint64_t x408 = 110614LLU;
	int32_t t101 = 66333821;

    t101 = (x405==((x406|x407)==x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x409 = INT32_MIN;
	static int16_t x410 = INT16_MIN;
	int8_t x411 = 1;
	static volatile int64_t x412 = INT64_MIN;
	int32_t t102 = -18243923;

    t102 = (x409==((x410|x411)==x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x414 = -1LL;
	int16_t x415 = INT16_MIN;

    t103 = (x413==((x414|x415)==x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x417 = 18640U;
	int8_t x418 = INT8_MIN;
	volatile int32_t x420 = INT32_MIN;
	int32_t t104 = -421;

    t104 = (x417==((x418|x419)==x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x421 = INT32_MIN;
	int64_t x423 = -1LL;
	uint16_t x424 = UINT16_MAX;
	static int32_t t105 = 156;

    t105 = (x421==((x422|x423)==x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x426 = UINT32_MAX;
	int8_t x428 = -12;
	static int32_t t106 = 0;

    t106 = (x425==((x426|x427)==x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x429 = UINT16_MAX;
	int16_t x430 = -1;
	uint16_t x431 = UINT16_MAX;
	int32_t x432 = INT32_MIN;
	volatile int32_t t107 = -468575;

    t107 = (x429==((x430|x431)==x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x433 = INT8_MIN;
	uint16_t x434 = 172U;
	static int64_t x436 = INT64_MIN;
	volatile int32_t t108 = 1117668;

    t108 = (x433==((x434|x435)==x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = -1LL;
	int32_t x438 = INT32_MIN;
	volatile int16_t x440 = -22;
	volatile int32_t t109 = -11;

    t109 = (x437==((x438|x439)==x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int8_t x441 = INT8_MAX;
	uint32_t x442 = UINT32_MAX;
	uint8_t x443 = UINT8_MAX;
	int32_t t110 = -54690;

    t110 = (x441==((x442|x443)==x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x445 = UINT32_MAX;
	uint64_t x446 = UINT64_MAX;
	static int64_t x448 = -767492268119LL;
	static int32_t t111 = 211040905;

    t111 = (x445==((x446|x447)==x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x449 = 1005;
	static int64_t x450 = INT64_MIN;
	volatile int8_t x451 = -1;
	uint32_t x452 = 1693568268U;
	int32_t t112 = 5413;

    t112 = (x449==((x450|x451)==x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x453 = -31175940461678LL;
	int64_t x454 = INT64_MIN;
	uint32_t x455 = 6U;
	uint8_t x456 = 11U;
	int32_t t113 = -104344534;

    t113 = (x453==((x454|x455)==x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x459 = INT64_MAX;
	uint64_t x460 = UINT64_MAX;

    t114 = (x457==((x458|x459)==x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int64_t x461 = INT64_MIN;
	int16_t x463 = -1;
	volatile int32_t t115 = -55508;

    t115 = (x461==((x462|x463)==x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = INT8_MIN;
	uint16_t x467 = 6056U;
	static int32_t t116 = 2659;

    t116 = (x465==((x466|x467)==x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x469 = 167;
	volatile uint16_t x470 = 28U;
	int8_t x471 = INT8_MIN;
	int16_t x472 = -1549;
	static int32_t t117 = 3487870;

    t117 = (x469==((x470|x471)==x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x474 = UINT8_MAX;
	int32_t x475 = INT32_MAX;
	static volatile int32_t t118 = -51726;

    t118 = (x473==((x474|x475)==x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x477 = INT8_MAX;
	int16_t x478 = INT16_MIN;
	int32_t x479 = INT32_MAX;
	int64_t x480 = INT64_MIN;
	int32_t t119 = -1070;

    t119 = (x477==((x478|x479)==x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x481 = INT32_MIN;
	uint8_t x484 = 2U;
	volatile int32_t t120 = 1;

    t120 = (x481==((x482|x483)==x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile int8_t x485 = INT8_MIN;
	uint32_t x487 = 55U;
	uint32_t x488 = 9U;
	volatile int32_t t121 = 84746;

    t121 = (x485==((x486|x487)==x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = INT32_MIN;
	int16_t x491 = -3;
	static uint16_t x492 = UINT16_MAX;
	volatile int32_t t122 = 29018;

    t122 = (x489==((x490|x491)==x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = INT64_MIN;
	uint64_t x495 = 10191370953718857LLU;
	volatile int64_t x496 = -1LL;
	int32_t t123 = 15413613;

    t123 = (x493==((x494|x495)==x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x497 = 17877994806009877LL;
	static uint32_t x498 = 4U;
	static uint64_t x499 = UINT64_MAX;
	volatile int32_t x500 = INT32_MIN;

    t124 = (x497==((x498|x499)==x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x501 = INT32_MIN;
	int64_t x504 = INT64_MAX;

    t125 = (x501==((x502|x503)==x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint32_t x505 = 43U;
	uint32_t x506 = 21002U;
	int32_t x507 = -1;
	int16_t x508 = INT16_MAX;

    t126 = (x505==((x506|x507)==x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x509 = INT64_MAX;
	int32_t x510 = -1;
	int16_t x511 = -40;
	uint32_t x512 = 3U;
	volatile int32_t t127 = -11866;

    t127 = (x509==((x510|x511)==x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x513 = INT64_MIN;
	uint16_t x515 = UINT16_MAX;
	static volatile int32_t t128 = 8;

    t128 = (x513==((x514|x515)==x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x517 = 7548;
	volatile uint64_t x518 = 3836LLU;
	static int32_t x519 = -1;
	int32_t t129 = 528526;

    t129 = (x517==((x518|x519)==x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x521 = -2;
	uint16_t x523 = 4908U;
	uint16_t x524 = 1U;
	volatile int32_t t130 = -36511381;

    t130 = (x521==((x522|x523)==x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x525 = -1;
	int16_t x526 = INT16_MAX;
	int32_t x528 = INT32_MIN;
	int32_t t131 = 144;

    t131 = (x525==((x526|x527)==x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x530 = -1;
	int8_t x531 = -1;
	uint16_t x532 = UINT16_MAX;
	int32_t t132 = -505;

    t132 = (x529==((x530|x531)==x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint16_t x533 = UINT16_MAX;
	uint64_t x534 = 37626373176225LLU;
	static int64_t x535 = INT64_MAX;
	volatile int64_t x536 = INT64_MIN;
	int32_t t133 = 43516;

    t133 = (x533==((x534|x535)==x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x540 = -20;
	static volatile int32_t t134 = -811;

    t134 = (x537==((x538|x539)==x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int16_t x542 = INT16_MIN;
	volatile uint32_t x543 = 94108U;
	int16_t x544 = INT16_MIN;
	int32_t t135 = -107;

    t135 = (x541==((x542|x543)==x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x545 = 0;
	int64_t x548 = INT64_MAX;
	volatile int32_t t136 = -425032415;

    t136 = (x545==((x546|x547)==x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x549 = -1LL;
	int8_t x550 = -12;
	int32_t t137 = 3;

    t137 = (x549==((x550|x551)==x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x553 = UINT16_MAX;
	int32_t x555 = INT32_MAX;
	int8_t x556 = INT8_MAX;
	volatile int32_t t138 = 74197;

    t138 = (x553==((x554|x555)==x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x558 = 6;
	uint64_t x559 = UINT64_MAX;
	int32_t x560 = 113530741;

    t139 = (x557==((x558|x559)==x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x562 = -1;
	volatile int8_t x564 = -1;
	int32_t t140 = 13;

    t140 = (x561==((x562|x563)==x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x566 = 5783;
	static volatile int16_t x567 = 33;
	int32_t t141 = 3955;

    t141 = (x565==((x566|x567)==x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int64_t x569 = -6602079787138825LL;
	int16_t x570 = -15343;
	int64_t x571 = INT64_MIN;
	uint64_t x572 = 1315922730645140889LLU;
	static int32_t t142 = -8;

    t142 = (x569==((x570|x571)==x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x573 = INT8_MIN;
	uint32_t x576 = 8U;
	int32_t t143 = -109998855;

    t143 = (x573==((x574|x575)==x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x577 = INT16_MAX;
	uint32_t x578 = 2110289174U;
	volatile int8_t x579 = INT8_MIN;
	int8_t x580 = INT8_MIN;
	volatile int32_t t144 = -64734712;

    t144 = (x577==((x578|x579)==x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x581 = -5168131;
	static int64_t x583 = INT64_MAX;
	static volatile int16_t x584 = INT16_MIN;
	volatile int32_t t145 = 1991;

    t145 = (x581==((x582|x583)==x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x585 = -1LL;
	int32_t x586 = 3800166;
	int16_t x587 = -1;
	volatile int64_t x588 = INT64_MAX;
	static volatile int32_t t146 = -1;

    t146 = (x585==((x586|x587)==x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x589 = INT8_MIN;
	uint8_t x590 = UINT8_MAX;
	int8_t x591 = INT8_MIN;
	static uint64_t x592 = UINT64_MAX;
	volatile int32_t t147 = 393573;

    t147 = (x589==((x590|x591)==x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int16_t x594 = INT16_MIN;
	static int8_t x596 = INT8_MIN;
	int32_t t148 = 943380735;

    t148 = (x593==((x594|x595)==x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x597 = 1;
	uint32_t x598 = 1385851821U;
	int16_t x600 = INT16_MIN;
	static volatile int32_t t149 = 2201;

    t149 = (x597==((x598|x599)==x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x602 = INT8_MIN;
	int32_t x604 = -2998762;
	volatile int32_t t150 = 185;

    t150 = (x601==((x602|x603)==x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile uint16_t x605 = 4U;
	static int8_t x606 = INT8_MIN;
	volatile int32_t t151 = 4;

    t151 = (x605==((x606|x607)==x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int8_t x609 = -1;
	uint16_t x610 = UINT16_MAX;
	uint16_t x612 = UINT16_MAX;
	int32_t t152 = -39877117;

    t152 = (x609==((x610|x611)==x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint32_t x613 = 1U;
	static int16_t x614 = INT16_MIN;
	volatile int32_t x615 = 58816;
	int8_t x616 = -1;

    t153 = (x613==((x614|x615)==x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x617 = UINT8_MAX;
	int16_t x618 = -1;
	int16_t x619 = INT16_MIN;
	uint64_t x620 = UINT64_MAX;
	volatile int32_t t154 = 42;

    t154 = (x617==((x618|x619)==x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile uint8_t x621 = UINT8_MAX;
	static int32_t x622 = INT32_MAX;
	uint32_t x623 = UINT32_MAX;
	uint64_t x624 = 59133239337091289LLU;
	volatile int32_t t155 = -435631221;

    t155 = (x621==((x622|x623)==x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x626 = INT64_MAX;
	uint32_t x627 = 15370U;
	volatile int32_t t156 = -21;

    t156 = (x625==((x626|x627)==x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int32_t x630 = INT32_MAX;
	uint32_t x632 = 192807447U;
	volatile int32_t t157 = 1020984788;

    t157 = (x629==((x630|x631)==x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x633 = 0;
	int8_t x634 = INT8_MIN;
	int8_t x635 = INT8_MAX;
	volatile int32_t t158 = 48653;

    t158 = (x633==((x634|x635)==x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x637 = INT32_MIN;
	volatile int8_t x638 = INT8_MAX;
	uint32_t x639 = 1397407U;
	volatile int32_t x640 = 11;
	volatile int32_t t159 = 107;

    t159 = (x637==((x638|x639)==x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x641 = INT64_MAX;
	static volatile int32_t x644 = INT32_MAX;
	static volatile int32_t t160 = 0;

    t160 = (x641==((x642|x643)==x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x645 = -724;
	int16_t x647 = INT16_MIN;
	int16_t x648 = -975;
	int32_t t161 = -79;

    t161 = (x645==((x646|x647)==x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x649 = INT8_MAX;
	int16_t x650 = 1100;
	int32_t t162 = 1537;

    t162 = (x649==((x650|x651)==x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int8_t x654 = -27;
	int64_t x655 = 79LL;
	static int32_t t163 = 1;

    t163 = (x653==((x654|x655)==x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x657 = 3905LLU;
	int8_t x658 = -1;
	int16_t x659 = 4770;
	static int8_t x660 = -25;
	int32_t t164 = -3;

    t164 = (x657==((x658|x659)==x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x661 = -1;
	volatile int8_t x662 = -1;
	int32_t t165 = -1;

    t165 = (x661==((x662|x663)==x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint64_t x665 = UINT64_MAX;
	uint64_t x666 = 52927LLU;

    t166 = (x665==((x666|x667)==x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x669 = UINT16_MAX;
	uint16_t x672 = UINT16_MAX;
	static volatile int32_t t167 = 12586201;

    t167 = (x669==((x670|x671)==x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x673 = INT8_MIN;
	int32_t x674 = 2337;
	volatile int8_t x676 = INT8_MIN;
	int32_t t168 = -27306073;

    t168 = (x673==((x674|x675)==x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int64_t x678 = -1LL;
	int64_t x679 = 33513LL;
	static volatile int16_t x680 = 10;
	int32_t t169 = -15598273;

    t169 = (x677==((x678|x679)==x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = 6209;
	static int8_t x682 = -1;
	int32_t x683 = -558978;
	volatile uint32_t x684 = 63U;
	int32_t t170 = -13;

    t170 = (x681==((x682|x683)==x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int16_t x685 = INT16_MAX;
	int16_t x686 = INT16_MAX;
	int8_t x687 = -1;
	volatile int64_t x688 = INT64_MAX;
	int32_t t171 = -48;

    t171 = (x685==((x686|x687)==x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x692 = 1;
	static int32_t t172 = 82;

    t172 = (x689==((x690|x691)==x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x693 = INT64_MAX;
	volatile int64_t x694 = INT64_MIN;
	int16_t x695 = INT16_MIN;
	int32_t x696 = INT32_MIN;
	int32_t t173 = 44;

    t173 = (x693==((x694|x695)==x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x698 = INT16_MIN;
	uint32_t x699 = UINT32_MAX;
	uint16_t x700 = 413U;

    t174 = (x697==((x698|x699)==x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t x701 = INT64_MIN;
	uint8_t x702 = 86U;
	static int8_t x704 = INT8_MIN;

    t175 = (x701==((x702|x703)==x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x705 = 22663495LL;
	volatile int64_t x706 = INT64_MIN;
	static int8_t x707 = 1;

    t176 = (x705==((x706|x707)==x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x709 = UINT8_MAX;
	int32_t x710 = 56;
	int32_t x711 = 135563;
	volatile int32_t t177 = 809242745;

    t177 = (x709==((x710|x711)==x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint16_t x713 = 2U;
	uint8_t x714 = 1U;
	int64_t x715 = INT64_MIN;
	uint32_t x716 = 21U;
	volatile int32_t t178 = 0;

    t178 = (x713==((x714|x715)==x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x717 = -1LL;
	uint16_t x718 = UINT16_MAX;
	int16_t x719 = INT16_MIN;
	uint64_t x720 = UINT64_MAX;

    t179 = (x717==((x718|x719)==x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x721 = INT16_MAX;
	int32_t x722 = INT32_MAX;
	static int16_t x723 = INT16_MIN;
	volatile int32_t x724 = -223099;
	volatile int32_t t180 = 21403138;

    t180 = (x721==((x722|x723)==x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile int16_t x726 = INT16_MAX;
	uint32_t x728 = 4U;
	volatile int32_t t181 = 400935;

    t181 = (x725==((x726|x727)==x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x731 = -851;
	uint64_t x732 = UINT64_MAX;
	volatile int32_t t182 = 50867721;

    t182 = (x729==((x730|x731)==x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x733 = INT16_MIN;
	static int8_t x734 = INT8_MIN;
	static int8_t x735 = INT8_MIN;
	int32_t t183 = -4238;

    t183 = (x733==((x734|x735)==x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x738 = 62152640LLU;
	static int32_t x739 = -1022;
	int32_t t184 = 0;

    t184 = (x737==((x738|x739)==x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x741 = INT64_MAX;
	int8_t x742 = -10;
	static uint16_t x743 = 88U;
	uint8_t x744 = 30U;
	int32_t t185 = -2921;

    t185 = (x741==((x742|x743)==x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x745 = 49717186LLU;
	int32_t x746 = INT32_MIN;
	int32_t x747 = 119904;
	uint32_t x748 = UINT32_MAX;
	static int32_t t186 = 787;

    t186 = (x745==((x746|x747)==x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x749 = 2;
	int16_t x750 = INT16_MAX;
	int32_t x751 = -1;
	static int32_t x752 = INT32_MAX;
	volatile int32_t t187 = 6471206;

    t187 = (x749==((x750|x751)==x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x753 = 1;
	volatile int32_t x754 = INT32_MIN;
	int32_t x755 = -1;
	int16_t x756 = INT16_MIN;
	int32_t t188 = -7671732;

    t188 = (x753==((x754|x755)==x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint32_t x758 = 771791U;
	int32_t t189 = 24;

    t189 = (x757==((x758|x759)==x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x761 = -1;
	uint32_t x762 = 139546258U;
	volatile int32_t x763 = INT32_MIN;
	uint32_t x764 = 437U;
	volatile int32_t t190 = 3587382;

    t190 = (x761==((x762|x763)==x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x765 = INT32_MAX;
	int8_t x768 = -1;

    t191 = (x765==((x766|x767)==x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint32_t x769 = 33887U;
	int64_t x770 = -1LL;
	int8_t x771 = INT8_MIN;
	int8_t x772 = 0;
	int32_t t192 = -1;

    t192 = (x769==((x770|x771)==x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x773 = 45360484365698LL;
	int8_t x774 = -10;
	volatile uint16_t x775 = 3852U;
	uint32_t x776 = UINT32_MAX;

    t193 = (x773==((x774|x775)==x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x777 = -2202950;
	int16_t x778 = INT16_MAX;
	uint32_t x779 = 499444U;
	volatile int32_t t194 = 1;

    t194 = (x777==((x778|x779)==x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x781 = INT16_MAX;
	int64_t x783 = INT64_MIN;
	volatile uint8_t x784 = UINT8_MAX;

    t195 = (x781==((x782|x783)==x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x785 = INT64_MIN;
	int64_t x786 = -1LL;
	volatile uint32_t x787 = UINT32_MAX;
	int64_t x788 = INT64_MIN;
	int32_t t196 = 807150205;

    t196 = (x785==((x786|x787)==x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x789 = 685783;
	volatile int8_t x790 = 4;
	volatile int32_t x791 = 40114;
	int32_t x792 = INT32_MIN;
	volatile int32_t t197 = 6;

    t197 = (x789==((x790|x791)==x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x793 = 6208876503407112742LLU;
	static int32_t x794 = INT32_MIN;
	int64_t x796 = -1LL;

    t198 = (x793==((x794|x795)==x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint64_t x797 = 0LLU;
	uint16_t x798 = UINT16_MAX;
	int32_t x799 = INT32_MIN;
	static int32_t t199 = 31;

    t199 = (x797==((x798|x799)==x800));

    if (t199 != 1) { NG(); } else { ; }
	
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

