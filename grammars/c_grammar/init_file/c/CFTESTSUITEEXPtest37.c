
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

int8_t x7 = 1;
volatile int32_t x13 = 0;
static int16_t x24 = -54;
uint32_t x39 = 4U;
uint64_t x41 = UINT64_MAX;
int16_t x49 = INT16_MIN;
int8_t x51 = INT8_MAX;
volatile uint16_t x58 = UINT16_MAX;
volatile int8_t x63 = 0;
static volatile int8_t x64 = -2;
volatile int8_t x83 = -1;
volatile int16_t x84 = INT16_MAX;
volatile int16_t x87 = INT16_MAX;
static int16_t x88 = -1;
uint8_t x90 = 65U;
int8_t x92 = INT8_MAX;
int8_t x98 = 0;
uint64_t x100 = 342053501025627933LLU;
volatile uint32_t x102 = UINT32_MAX;
uint16_t x105 = 48U;
volatile uint8_t x113 = 9U;
int32_t t23 = -23496438;
static volatile int8_t x141 = 0;
uint8_t x142 = 74U;
uint16_t x150 = 1U;
static uint64_t x151 = 448091LLU;
int8_t x162 = INT8_MAX;
int64_t x165 = -1LL;
int64_t x166 = INT64_MAX;
volatile int64_t x175 = 79997291990585LL;
static int32_t t35 = 31905238;
int32_t x206 = INT32_MIN;
uint8_t x218 = UINT8_MAX;
uint32_t x219 = UINT32_MAX;
int32_t x223 = -1;
int8_t x224 = -1;
int8_t x235 = INT8_MIN;
volatile int32_t t41 = -13565354;
int64_t x255 = INT64_MIN;
uint32_t x260 = 2050798U;
static volatile int16_t x261 = -1;
uint64_t x262 = 122603113837LLU;
volatile int16_t x263 = -1;
int32_t t46 = 7556275;
int32_t t47 = 67755;
int8_t x278 = 3;
int16_t x279 = -122;
int16_t x281 = INT16_MIN;
static uint16_t x283 = UINT16_MAX;
int8_t x299 = INT8_MAX;
int64_t x302 = -1LL;
int32_t x303 = INT32_MIN;
int16_t x304 = 416;
int64_t x313 = -1LL;
volatile int8_t x315 = -15;
static uint64_t x333 = UINT64_MAX;
volatile int32_t t57 = 5271690;
uint64_t x342 = 6LLU;
int16_t x348 = INT16_MAX;
volatile int32_t t61 = 1149;
static uint64_t x365 = 4338301523597LLU;
int32_t x366 = INT32_MIN;
volatile int32_t t64 = -876547;
int16_t x370 = INT16_MIN;
int32_t t66 = -1;
volatile int8_t x380 = -1;
uint64_t x381 = 681803280585175048LLU;
static uint16_t x382 = 31851U;
int32_t x390 = INT32_MIN;
int16_t x403 = -4008;
int16_t x405 = -1;
int64_t x406 = -1LL;
int32_t x410 = -1;
static int32_t t73 = -509385732;
int32_t t74 = -52606;
int64_t x419 = 2903875LL;
int32_t t75 = 2105;
static int8_t x421 = INT8_MAX;
int16_t x423 = INT16_MIN;
static volatile int16_t x424 = -5;
static volatile int32_t t76 = 66873403;
int32_t x430 = 403;
int32_t t77 = -117492;
static int16_t x433 = -1;
volatile int64_t x434 = -1LL;
uint32_t x441 = 5126150U;
static uint16_t x448 = 171U;
int8_t x449 = 1;
int64_t x471 = -1LL;
static volatile int32_t t86 = 18189;
volatile int8_t x479 = -3;
int8_t x490 = INT8_MIN;
static uint32_t x492 = 15U;
volatile uint8_t x495 = 0U;
int32_t t91 = -13;
int32_t x503 = -1332;
int8_t x508 = INT8_MIN;
volatile int32_t t95 = -15696;
static int64_t x520 = INT64_MAX;
int16_t x541 = INT16_MIN;
int64_t x542 = -5462792115326LL;
static int64_t x546 = 15LL;
uint64_t x548 = UINT64_MAX;
volatile int32_t t101 = 6428;
uint8_t x586 = UINT8_MAX;
static uint32_t x590 = 196628080U;
static int32_t x593 = INT32_MIN;
volatile int64_t x603 = 180869359479347LL;
volatile int64_t x609 = 110545444703LL;
int16_t x610 = INT16_MAX;
int32_t x614 = INT32_MIN;
int32_t t113 = -280474107;
static int32_t t115 = -48213633;
volatile int64_t x625 = INT64_MIN;
int8_t x626 = INT8_MAX;
volatile uint64_t x627 = UINT64_MAX;
int32_t x628 = INT32_MAX;
int16_t x631 = 8;
int8_t x632 = 0;
int32_t t118 = 626804274;
uint8_t x649 = UINT8_MAX;
static uint32_t x652 = 292U;
volatile int32_t t120 = -6012;
volatile int32_t t122 = 317953681;
static int64_t x674 = INT64_MIN;
int32_t t124 = 1;
volatile int8_t x705 = INT8_MIN;
int32_t t126 = 7;
static int32_t t128 = 80776050;
static volatile int32_t x752 = 1897754;
int8_t x759 = INT8_MIN;
int32_t x761 = INT32_MIN;
static uint32_t x762 = 16015405U;
int64_t x786 = INT64_MIN;
uint16_t x788 = 0U;
int32_t t137 = 3;
int8_t x792 = -1;
static uint32_t x797 = 128U;
uint64_t x799 = UINT64_MAX;
int64_t x802 = INT64_MAX;
uint16_t x804 = 382U;
uint8_t x805 = 41U;
volatile uint64_t x813 = UINT64_MAX;
volatile int32_t x817 = -1;
int16_t x818 = INT16_MIN;
uint64_t x821 = UINT64_MAX;
uint64_t x822 = 12124606726455578LLU;
int32_t t147 = -221;
static volatile int32_t t149 = 112;
int16_t x853 = INT16_MAX;
int16_t x875 = -1;
int32_t x909 = -1;
uint64_t x919 = UINT64_MAX;
uint16_t x922 = 14U;
uint64_t x937 = UINT64_MAX;
int16_t x939 = INT16_MIN;
int32_t x941 = INT32_MIN;
int16_t x959 = -6664;
int32_t x963 = 1;
static uint64_t x964 = 678317554LLU;
uint32_t x972 = 46U;
static int8_t x989 = INT8_MIN;
static volatile uint64_t x993 = 48139971937LLU;
int32_t x994 = 945;
volatile int16_t x1000 = INT16_MIN;
volatile int32_t t173 = 950;
volatile int64_t x1002 = -1LL;
static volatile uint8_t x1035 = 49U;
static uint64_t x1041 = 182LLU;
int16_t x1045 = -10513;
volatile int32_t t179 = 17;
static int16_t x1055 = 2;
volatile int32_t x1073 = -5818164;
uint64_t x1081 = UINT64_MAX;
int16_t x1082 = 133;
int32_t x1086 = INT32_MAX;
int32_t x1087 = -109295;
int32_t t185 = 280921107;
volatile uint16_t x1096 = 1013U;
int16_t x1101 = -661;
int64_t x1104 = -1LL;
static uint8_t x1105 = UINT8_MAX;
int8_t x1111 = 3;
volatile int16_t x1117 = INT16_MAX;
uint8_t x1119 = 3U;
static int64_t x1122 = -1LL;
static uint16_t x1124 = 0U;
uint64_t x1129 = 30LLU;
int64_t x1131 = -11739294618910LL;
int16_t x1134 = -1;
int64_t x1139 = INT64_MIN;
uint64_t x1145 = UINT64_MAX;
static int32_t t197 = -1;
volatile uint8_t x1156 = UINT8_MAX;
int16_t x1157 = INT16_MAX;
int32_t x1158 = 1;


void f0(void) {
    	volatile uint32_t x1 = UINT32_MAX;
	static uint8_t x2 = UINT8_MAX;
	int16_t x3 = INT16_MAX;
	uint16_t x4 = 175U;
	static volatile int32_t t0 = 223;

    t0 = (x1>((x2+x3)*x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MIN;
	int32_t x6 = INT32_MIN;
	static uint64_t x8 = UINT64_MAX;
	int32_t t1 = -25156;

    t1 = (x5>((x6+x7)*x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MAX;
	uint64_t x10 = 9668LLU;
	static int16_t x11 = INT16_MIN;
	uint8_t x12 = 3U;
	int32_t t2 = -1027297013;

    t2 = (x9>((x10+x11)*x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x14 = INT8_MAX;
	int16_t x15 = INT16_MIN;
	volatile int8_t x16 = -14;
	volatile int32_t t3 = -30872;

    t3 = (x13>((x14+x15)*x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint16_t x17 = UINT16_MAX;
	int8_t x18 = INT8_MIN;
	int16_t x19 = INT16_MIN;
	int8_t x20 = -1;
	int32_t t4 = -462;

    t4 = (x17>((x18+x19)*x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint8_t x21 = 7U;
	volatile int8_t x22 = INT8_MIN;
	int16_t x23 = 719;
	int32_t t5 = 445252;

    t5 = (x21>((x22+x23)*x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = 8882548LL;
	static int16_t x26 = INT16_MAX;
	int64_t x27 = 222010977425LL;
	int8_t x28 = INT8_MIN;
	volatile int32_t t6 = -22481778;

    t6 = (x25>((x26+x27)*x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x33 = 1U;
	volatile uint16_t x34 = 2U;
	static uint32_t x35 = UINT32_MAX;
	uint8_t x36 = 34U;
	int32_t t7 = 11325;

    t7 = (x33>((x34+x35)*x36));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x37 = 326;
	static uint32_t x38 = 10156646U;
	int16_t x40 = -1;
	int32_t t8 = -822455957;

    t8 = (x37>((x38+x39)*x40));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x42 = -1;
	int16_t x43 = INT16_MAX;
	uint32_t x44 = 25455569U;
	int32_t t9 = -21578183;

    t9 = (x41>((x42+x43)*x44));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x45 = INT16_MIN;
	uint64_t x46 = UINT64_MAX;
	volatile int32_t x47 = -1;
	int64_t x48 = INT64_MIN;
	int32_t t10 = -2064;

    t10 = (x45>((x46+x47)*x48));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x50 = INT8_MAX;
	int8_t x52 = INT8_MAX;
	volatile int32_t t11 = 7;

    t11 = (x49>((x50+x51)*x52));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x57 = -1;
	int8_t x59 = INT8_MAX;
	int8_t x60 = INT8_MAX;
	int32_t t12 = -10541;

    t12 = (x57>((x58+x59)*x60));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x61 = INT64_MIN;
	uint16_t x62 = 3237U;
	int32_t t13 = 85036107;

    t13 = (x61>((x62+x63)*x64));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x69 = INT16_MIN;
	int16_t x70 = INT16_MAX;
	int64_t x71 = -1LL;
	int16_t x72 = INT16_MIN;
	int32_t t14 = 3;

    t14 = (x69>((x70+x71)*x72));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x73 = INT32_MIN;
	uint64_t x74 = UINT64_MAX;
	static int32_t x75 = INT32_MIN;
	uint64_t x76 = 17509LLU;
	int32_t t15 = -16;

    t15 = (x73>((x74+x75)*x76));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x81 = -1LL;
	static volatile uint16_t x82 = 2U;
	volatile int32_t t16 = 8191951;

    t16 = (x81>((x82+x83)*x84));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x85 = INT64_MIN;
	volatile int64_t x86 = 121LL;
	volatile int32_t t17 = -11311;

    t17 = (x85>((x86+x87)*x88));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x89 = INT32_MAX;
	int64_t x91 = -1LL;
	int32_t t18 = -282;

    t18 = (x89>((x90+x91)*x92));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint32_t x97 = UINT32_MAX;
	int64_t x99 = -1LL;
	int32_t t19 = 1;

    t19 = (x97>((x98+x99)*x100));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint16_t x101 = 0U;
	uint64_t x103 = 1658315231LLU;
	static uint16_t x104 = 120U;
	int32_t t20 = 82701;

    t20 = (x101>((x102+x103)*x104));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x106 = UINT64_MAX;
	static int16_t x107 = INT16_MIN;
	uint8_t x108 = 21U;
	volatile int32_t t21 = 185185;

    t21 = (x105>((x106+x107)*x108));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint32_t x114 = 3U;
	int16_t x115 = INT16_MAX;
	static volatile int16_t x116 = -1;
	volatile int32_t t22 = 63213142;

    t22 = (x113>((x114+x115)*x116));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint64_t x117 = 168522435333167661LLU;
	uint64_t x118 = UINT64_MAX;
	int64_t x119 = -1LL;
	uint16_t x120 = 1401U;

    t23 = (x117>((x118+x119)*x120));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x125 = INT32_MIN;
	uint8_t x126 = UINT8_MAX;
	uint16_t x127 = 415U;
	volatile uint32_t x128 = UINT32_MAX;
	static int32_t t24 = -43783;

    t24 = (x125>((x126+x127)*x128));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x137 = 2592;
	int8_t x138 = -6;
	int8_t x139 = INT8_MIN;
	uint8_t x140 = UINT8_MAX;
	int32_t t25 = -444895044;

    t25 = (x137>((x138+x139)*x140));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x143 = 12138827U;
	int32_t x144 = INT32_MAX;
	int32_t t26 = 168481525;

    t26 = (x141>((x142+x143)*x144));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int32_t x149 = -2853;
	volatile int8_t x152 = INT8_MIN;
	static int32_t t27 = -10363211;

    t27 = (x149>((x150+x151)*x152));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x161 = -38119363985878758LL;
	int64_t x163 = -1LL;
	int8_t x164 = INT8_MIN;
	volatile int32_t t28 = 3;

    t28 = (x161>((x162+x163)*x164));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x167 = -677;
	volatile int32_t x168 = -1;
	int32_t t29 = 267841;

    t29 = (x165>((x166+x167)*x168));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint8_t x173 = 2U;
	int32_t x174 = -7041;
	static volatile int16_t x176 = -1;
	int32_t t30 = 770955;

    t30 = (x173>((x174+x175)*x176));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x177 = 5727753U;
	uint32_t x178 = 2059163305U;
	int8_t x179 = INT8_MIN;
	volatile int32_t x180 = -1;
	int32_t t31 = 599540;

    t31 = (x177>((x178+x179)*x180));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x181 = -1LL;
	int32_t x182 = INT32_MAX;
	int8_t x183 = INT8_MIN;
	static int64_t x184 = 0LL;
	volatile int32_t t32 = -17037800;

    t32 = (x181>((x182+x183)*x184));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x185 = INT64_MIN;
	int64_t x186 = -439LL;
	static int64_t x187 = -1LL;
	int64_t x188 = -1LL;
	volatile int32_t t33 = -98;

    t33 = (x185>((x186+x187)*x188));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x193 = 15532334LL;
	uint32_t x194 = 1784U;
	uint64_t x195 = UINT64_MAX;
	static int16_t x196 = INT16_MIN;
	int32_t t34 = 3;

    t34 = (x193>((x194+x195)*x196));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x197 = 6U;
	static int8_t x198 = 24;
	int8_t x199 = 0;
	int8_t x200 = -1;

    t35 = (x197>((x198+x199)*x200));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int32_t x201 = 603;
	static uint32_t x202 = 15731647U;
	volatile uint16_t x203 = UINT16_MAX;
	int64_t x204 = -1LL;
	int32_t t36 = 2123;

    t36 = (x201>((x202+x203)*x204));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x205 = INT8_MIN;
	int32_t x207 = INT32_MAX;
	int16_t x208 = -1;
	volatile int32_t t37 = -11;

    t37 = (x205>((x206+x207)*x208));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x217 = INT16_MIN;
	uint8_t x220 = 123U;
	volatile int32_t t38 = 22;

    t38 = (x217>((x218+x219)*x220));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x221 = INT16_MIN;
	volatile uint32_t x222 = UINT32_MAX;
	int32_t t39 = -358007881;

    t39 = (x221>((x222+x223)*x224));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x225 = -1;
	int32_t x226 = INT32_MIN;
	uint16_t x227 = 55U;
	volatile int8_t x228 = 1;
	volatile int32_t t40 = -1045611514;

    t40 = (x225>((x226+x227)*x228));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x233 = -2;
	volatile int64_t x234 = INT64_MAX;
	uint64_t x236 = 50976609974LLU;

    t41 = (x233>((x234+x235)*x236));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x245 = INT64_MIN;
	uint8_t x246 = UINT8_MAX;
	int64_t x247 = -1LL;
	volatile uint64_t x248 = UINT64_MAX;
	int32_t t42 = 140515;

    t42 = (x245>((x246+x247)*x248));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x253 = INT32_MAX;
	uint64_t x254 = UINT64_MAX;
	int32_t x256 = -989716;
	static volatile int32_t t43 = 26263443;

    t43 = (x253>((x254+x255)*x256));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x257 = INT64_MAX;
	int32_t x258 = INT32_MIN;
	uint16_t x259 = UINT16_MAX;
	int32_t t44 = 22;

    t44 = (x257>((x258+x259)*x260));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x264 = 23U;
	static volatile int32_t t45 = -1449;

    t45 = (x261>((x262+x263)*x264));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x265 = 884LL;
	int8_t x266 = 23;
	uint8_t x267 = UINT8_MAX;
	int16_t x268 = 0;

    t46 = (x265>((x266+x267)*x268));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int32_t x273 = 4140446;
	int64_t x274 = -1LL;
	static int8_t x275 = 1;
	volatile int16_t x276 = INT16_MIN;

    t47 = (x273>((x274+x275)*x276));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x277 = INT64_MIN;
	int8_t x280 = INT8_MIN;
	volatile int32_t t48 = 55212;

    t48 = (x277>((x278+x279)*x280));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x282 = UINT32_MAX;
	uint8_t x284 = 38U;
	volatile int32_t t49 = -45885;

    t49 = (x281>((x282+x283)*x284));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x289 = 1990;
	uint8_t x290 = UINT8_MAX;
	int16_t x291 = INT16_MAX;
	volatile uint32_t x292 = UINT32_MAX;
	volatile int32_t t50 = 14058;

    t50 = (x289>((x290+x291)*x292));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x297 = 3127U;
	uint8_t x298 = 3U;
	uint32_t x300 = 22U;
	int32_t t51 = -1;

    t51 = (x297>((x298+x299)*x300));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x301 = 6U;
	int32_t t52 = 6601;

    t52 = (x301>((x302+x303)*x304));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x314 = UINT32_MAX;
	uint64_t x316 = 3927420627736LLU;
	volatile int32_t t53 = -18;

    t53 = (x313>((x314+x315)*x316));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x317 = INT8_MAX;
	int64_t x318 = -1LL;
	uint16_t x319 = 29776U;
	uint8_t x320 = UINT8_MAX;
	volatile int32_t t54 = -3;

    t54 = (x317>((x318+x319)*x320));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x325 = UINT16_MAX;
	volatile uint8_t x326 = UINT8_MAX;
	static volatile int16_t x327 = INT16_MIN;
	int32_t x328 = 19;
	int32_t t55 = -3;

    t55 = (x325>((x326+x327)*x328));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x329 = -1;
	volatile int16_t x330 = -1;
	uint32_t x331 = 3619361U;
	volatile int16_t x332 = INT16_MIN;
	int32_t t56 = -55942;

    t56 = (x329>((x330+x331)*x332));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint32_t x334 = 27006U;
	static volatile int16_t x335 = INT16_MIN;
	int16_t x336 = -1;

    t57 = (x333>((x334+x335)*x336));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x337 = INT16_MAX;
	volatile uint32_t x338 = 20U;
	uint64_t x339 = UINT64_MAX;
	int64_t x340 = 3359LL;
	int32_t t58 = 18;

    t58 = (x337>((x338+x339)*x340));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int8_t x341 = INT8_MIN;
	int32_t x343 = 13414724;
	int16_t x344 = INT16_MIN;
	int32_t t59 = -267026176;

    t59 = (x341>((x342+x343)*x344));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x345 = 4;
	int32_t x346 = INT32_MIN;
	int64_t x347 = -1LL;
	int32_t t60 = 16174;

    t60 = (x345>((x346+x347)*x348));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x353 = -6;
	int32_t x354 = INT32_MIN;
	int64_t x355 = 213027672LL;
	volatile uint64_t x356 = 2120409311LLU;

    t61 = (x353>((x354+x355)*x356));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x357 = -31;
	int16_t x358 = INT16_MAX;
	int16_t x359 = INT16_MIN;
	static volatile int8_t x360 = INT8_MIN;
	int32_t t62 = 128570265;

    t62 = (x357>((x358+x359)*x360));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int64_t x361 = -190491690LL;
	int8_t x362 = 1;
	int32_t x363 = 1;
	uint64_t x364 = 1636LLU;
	int32_t t63 = 126;

    t63 = (x361>((x362+x363)*x364));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x367 = 4499U;
	int8_t x368 = INT8_MIN;

    t64 = (x365>((x366+x367)*x368));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x369 = INT32_MIN;
	int64_t x371 = 206721774LL;
	int32_t x372 = INT32_MAX;
	static volatile int32_t t65 = 102;

    t65 = (x369>((x370+x371)*x372));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x373 = INT64_MIN;
	int16_t x374 = -680;
	int8_t x375 = INT8_MAX;
	int8_t x376 = -1;

    t66 = (x373>((x374+x375)*x376));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int32_t x377 = 31981088;
	static uint16_t x378 = UINT16_MAX;
	uint16_t x379 = 2372U;
	volatile int32_t t67 = 1;

    t67 = (x377>((x378+x379)*x380));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x383 = INT16_MIN;
	int16_t x384 = -78;
	int32_t t68 = -113272;

    t68 = (x381>((x382+x383)*x384));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint8_t x385 = 7U;
	uint32_t x386 = 11166996U;
	int32_t x387 = -1;
	int16_t x388 = 66;
	volatile int32_t t69 = 216469278;

    t69 = (x385>((x386+x387)*x388));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x389 = -25;
	uint64_t x391 = 463LLU;
	int64_t x392 = -188048193348277173LL;
	volatile int32_t t70 = 1929;

    t70 = (x389>((x390+x391)*x392));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x401 = -1;
	uint8_t x402 = 102U;
	static int16_t x404 = INT16_MAX;
	int32_t t71 = -1;

    t71 = (x401>((x402+x403)*x404));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint64_t x407 = 93LLU;
	uint8_t x408 = 2U;
	volatile int32_t t72 = -112;

    t72 = (x405>((x406+x407)*x408));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x409 = INT16_MIN;
	volatile int16_t x411 = INT16_MIN;
	static volatile uint8_t x412 = 37U;

    t73 = (x409>((x410+x411)*x412));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x413 = INT64_MIN;
	uint64_t x414 = 121950121082LLU;
	volatile uint32_t x415 = 1U;
	int64_t x416 = -1LL;

    t74 = (x413>((x414+x415)*x416));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x417 = 1;
	uint32_t x418 = 1094944474U;
	static volatile int8_t x420 = INT8_MIN;

    t75 = (x417>((x418+x419)*x420));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint16_t x422 = UINT16_MAX;

    t76 = (x421>((x422+x423)*x424));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint8_t x429 = UINT8_MAX;
	volatile uint32_t x431 = UINT32_MAX;
	static int64_t x432 = -879730927184077LL;

    t77 = (x429>((x430+x431)*x432));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x435 = 7;
	int16_t x436 = 3;
	static int32_t t78 = -7671695;

    t78 = (x433>((x434+x435)*x436));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x442 = INT8_MIN;
	uint8_t x443 = 16U;
	static uint16_t x444 = 16229U;
	volatile int32_t t79 = 49331292;

    t79 = (x441>((x442+x443)*x444));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x445 = 40U;
	uint8_t x446 = 1U;
	int32_t x447 = -1;
	volatile int32_t t80 = -55;

    t80 = (x445>((x446+x447)*x448));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x450 = UINT32_MAX;
	uint8_t x451 = 11U;
	volatile int16_t x452 = INT16_MIN;
	static volatile int32_t t81 = 7055504;

    t81 = (x449>((x450+x451)*x452));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x457 = 272;
	volatile int64_t x458 = -2LL;
	static int8_t x459 = INT8_MIN;
	uint8_t x460 = 5U;
	int32_t t82 = -170;

    t82 = (x457>((x458+x459)*x460));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x461 = 3;
	static uint32_t x462 = UINT32_MAX;
	int8_t x463 = INT8_MIN;
	uint64_t x464 = UINT64_MAX;
	int32_t t83 = 46631;

    t83 = (x461>((x462+x463)*x464));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x465 = -1;
	uint8_t x466 = 118U;
	uint16_t x467 = UINT16_MAX;
	static int32_t x468 = -1;
	int32_t t84 = 335027;

    t84 = (x465>((x466+x467)*x468));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x469 = 29494U;
	int8_t x470 = -53;
	int32_t x472 = -1;
	int32_t t85 = 39;

    t85 = (x469>((x470+x471)*x472));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x473 = 54759652387LLU;
	int64_t x474 = -1LL;
	volatile uint8_t x475 = 1U;
	int64_t x476 = 403578405307LL;

    t86 = (x473>((x474+x475)*x476));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint32_t x477 = 633U;
	volatile uint8_t x478 = UINT8_MAX;
	uint64_t x480 = 86689LLU;
	int32_t t87 = -12;

    t87 = (x477>((x478+x479)*x480));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x481 = INT64_MIN;
	static int16_t x482 = INT16_MAX;
	uint32_t x483 = 49834090U;
	uint16_t x484 = 16U;
	volatile int32_t t88 = -7;

    t88 = (x481>((x482+x483)*x484));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint8_t x485 = 10U;
	static uint16_t x486 = 9U;
	volatile uint16_t x487 = 1U;
	int16_t x488 = INT16_MAX;
	int32_t t89 = -86671;

    t89 = (x485>((x486+x487)*x488));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x489 = 353952;
	volatile int16_t x491 = INT16_MAX;
	volatile int32_t t90 = -13;

    t90 = (x489>((x490+x491)*x492));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x493 = INT64_MAX;
	volatile uint8_t x494 = 11U;
	uint32_t x496 = UINT32_MAX;

    t91 = (x493>((x494+x495)*x496));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x497 = INT8_MAX;
	uint8_t x498 = UINT8_MAX;
	int64_t x499 = -18373LL;
	int32_t x500 = -3;
	volatile int32_t t92 = 0;

    t92 = (x497>((x498+x499)*x500));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x501 = -42186327556LL;
	int16_t x502 = -1;
	static uint32_t x504 = 3759U;
	int32_t t93 = -2;

    t93 = (x501>((x502+x503)*x504));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t x505 = 255004186089382LL;
	static int32_t x506 = -1;
	uint64_t x507 = 32722LLU;
	int32_t t94 = -38135;

    t94 = (x505>((x506+x507)*x508));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x509 = 5932U;
	uint16_t x510 = 3971U;
	int8_t x511 = INT8_MAX;
	volatile uint16_t x512 = 5166U;

    t95 = (x509>((x510+x511)*x512));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x513 = -1;
	static volatile int8_t x514 = -1;
	uint64_t x515 = 2629966765697LLU;
	int64_t x516 = INT64_MAX;
	static int32_t t96 = 71;

    t96 = (x513>((x514+x515)*x516));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x517 = -1;
	int16_t x518 = -1;
	uint16_t x519 = 1U;
	int32_t t97 = 20;

    t97 = (x517>((x518+x519)*x520));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x525 = UINT64_MAX;
	uint16_t x526 = 1444U;
	int8_t x527 = INT8_MAX;
	uint64_t x528 = 1961489151533247355LLU;
	int32_t t98 = 5;

    t98 = (x525>((x526+x527)*x528));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x529 = INT64_MAX;
	int16_t x530 = INT16_MAX;
	int8_t x531 = INT8_MIN;
	int16_t x532 = -1;
	volatile int32_t t99 = 2;

    t99 = (x529>((x530+x531)*x532));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x543 = INT16_MAX;
	static uint32_t x544 = 1U;
	volatile int32_t t100 = 8493;

    t100 = (x541>((x542+x543)*x544));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x545 = -408247203292498749LL;
	int64_t x547 = -1LL;

    t101 = (x545>((x546+x547)*x548));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x549 = -1;
	volatile int8_t x550 = INT8_MAX;
	uint64_t x551 = UINT64_MAX;
	uint8_t x552 = 10U;
	volatile int32_t t102 = -1;

    t102 = (x549>((x550+x551)*x552));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x557 = INT16_MIN;
	volatile uint64_t x558 = 635LLU;
	static uint32_t x559 = 1901555U;
	volatile int16_t x560 = INT16_MIN;
	int32_t t103 = -535166829;

    t103 = (x557>((x558+x559)*x560));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x561 = -1;
	int64_t x562 = -1LL;
	uint64_t x563 = 22876326383098LLU;
	static int64_t x564 = -1LL;
	volatile int32_t t104 = -76614;

    t104 = (x561>((x562+x563)*x564));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x565 = -1LL;
	volatile int8_t x566 = INT8_MIN;
	static int8_t x567 = INT8_MIN;
	volatile uint8_t x568 = 1U;
	static volatile int32_t t105 = 0;

    t105 = (x565>((x566+x567)*x568));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x569 = 16;
	int64_t x570 = 1194905LL;
	uint32_t x571 = 63U;
	int32_t x572 = INT32_MAX;
	static int32_t t106 = -940;

    t106 = (x569>((x570+x571)*x572));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x573 = 0U;
	int64_t x574 = INT64_MAX;
	int64_t x575 = -1LL;
	volatile int16_t x576 = -1;
	int32_t t107 = -95;

    t107 = (x573>((x574+x575)*x576));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x585 = INT32_MIN;
	int64_t x587 = -1LL;
	int64_t x588 = 83924LL;
	volatile int32_t t108 = -672887;

    t108 = (x585>((x586+x587)*x588));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x589 = -1;
	uint16_t x591 = 643U;
	uint64_t x592 = 0LLU;
	volatile int32_t t109 = 1;

    t109 = (x589>((x590+x591)*x592));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x594 = 75958303620846527LLU;
	int64_t x595 = INT64_MIN;
	int32_t x596 = -1;
	static volatile int32_t t110 = -7636;

    t110 = (x593>((x594+x595)*x596));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x601 = 82585044804494LLU;
	int8_t x602 = 0;
	int16_t x604 = INT16_MIN;
	int32_t t111 = -4532;

    t111 = (x601>((x602+x603)*x604));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint32_t x611 = UINT32_MAX;
	int16_t x612 = -1;
	int32_t t112 = 25;

    t112 = (x609>((x610+x611)*x612));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x613 = UINT32_MAX;
	int64_t x615 = -33702016655LL;
	int8_t x616 = -1;

    t113 = (x613>((x614+x615)*x616));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint32_t x617 = 64465847U;
	int64_t x618 = -23798822413063LL;
	uint8_t x619 = UINT8_MAX;
	uint64_t x620 = 1888967469LLU;
	volatile int32_t t114 = 44279360;

    t114 = (x617>((x618+x619)*x620));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint64_t x621 = 46356450LLU;
	uint32_t x622 = 14178U;
	uint64_t x623 = 120566730LLU;
	uint32_t x624 = UINT32_MAX;

    t115 = (x621>((x622+x623)*x624));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t t116 = -5;

    t116 = (x625>((x626+x627)*x628));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x629 = INT8_MIN;
	static int16_t x630 = INT16_MIN;
	int32_t t117 = 1;

    t117 = (x629>((x630+x631)*x632));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x633 = INT8_MIN;
	int16_t x634 = INT16_MIN;
	int32_t x635 = -1;
	volatile uint32_t x636 = UINT32_MAX;

    t118 = (x633>((x634+x635)*x636));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x637 = 0LL;
	static uint64_t x638 = 2996003903181759LLU;
	volatile uint64_t x639 = 7587LLU;
	volatile int32_t x640 = -1;
	static int32_t t119 = 2900;

    t119 = (x637>((x638+x639)*x640));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x650 = -1;
	static int16_t x651 = INT16_MIN;

    t120 = (x649>((x650+x651)*x652));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x653 = -1;
	int16_t x654 = -2594;
	static int16_t x655 = INT16_MIN;
	int64_t x656 = 845LL;
	int32_t t121 = -720;

    t121 = (x653>((x654+x655)*x656));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static int32_t x665 = INT32_MIN;
	int32_t x666 = -864494;
	static uint8_t x667 = UINT8_MAX;
	static int8_t x668 = 1;

    t122 = (x665>((x666+x667)*x668));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x673 = INT16_MIN;
	int64_t x675 = INT64_MAX;
	static uint64_t x676 = 65138LLU;
	int32_t t123 = -98856;

    t123 = (x673>((x674+x675)*x676));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x689 = INT8_MIN;
	int64_t x690 = -2677290LL;
	uint32_t x691 = 729829901U;
	static volatile int8_t x692 = INT8_MIN;

    t124 = (x689>((x690+x691)*x692));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x706 = INT8_MIN;
	int16_t x707 = INT16_MIN;
	int16_t x708 = INT16_MIN;
	int32_t t125 = 1725;

    t125 = (x705>((x706+x707)*x708));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x713 = INT32_MAX;
	int16_t x714 = -1;
	uint8_t x715 = UINT8_MAX;
	int32_t x716 = -1;

    t126 = (x713>((x714+x715)*x716));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x721 = -1LL;
	static int32_t x722 = -1;
	int16_t x723 = -1;
	uint32_t x724 = 5469876U;
	int32_t t127 = 1757854;

    t127 = (x721>((x722+x723)*x724));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x729 = 3807604U;
	static volatile int16_t x730 = -1;
	int8_t x731 = -1;
	uint64_t x732 = 208LLU;

    t128 = (x729>((x730+x731)*x732));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x733 = 1355354002LLU;
	volatile uint64_t x734 = UINT64_MAX;
	volatile uint64_t x735 = 43060407LLU;
	int16_t x736 = INT16_MAX;
	int32_t t129 = -102783;

    t129 = (x733>((x734+x735)*x736));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint64_t x741 = 158774065461LLU;
	static uint64_t x742 = 7454821326467LLU;
	int8_t x743 = INT8_MIN;
	static int64_t x744 = -1LL;
	int32_t t130 = -1884701;

    t130 = (x741>((x742+x743)*x744));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x749 = 249;
	int8_t x750 = INT8_MAX;
	int64_t x751 = -1LL;
	int32_t t131 = 31;

    t131 = (x749>((x750+x751)*x752));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x757 = 5U;
	uint16_t x758 = 3436U;
	uint16_t x760 = UINT16_MAX;
	static int32_t t132 = 31987066;

    t132 = (x757>((x758+x759)*x760));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x763 = 116;
	volatile int16_t x764 = 0;
	volatile int32_t t133 = 741526;

    t133 = (x761>((x762+x763)*x764));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x769 = 57032171LL;
	static uint64_t x770 = 5855767532576235937LLU;
	uint32_t x771 = 2987U;
	int32_t x772 = -151131;
	volatile int32_t t134 = 249974;

    t134 = (x769>((x770+x771)*x772));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint16_t x773 = 1U;
	int16_t x774 = INT16_MIN;
	volatile uint8_t x775 = 1U;
	uint8_t x776 = 99U;
	volatile int32_t t135 = 1060352;

    t135 = (x773>((x774+x775)*x776));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x781 = 189567;
	uint32_t x782 = UINT32_MAX;
	uint8_t x783 = UINT8_MAX;
	volatile uint32_t x784 = UINT32_MAX;
	volatile int32_t t136 = -56;

    t136 = (x781>((x782+x783)*x784));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x785 = 1LLU;
	int32_t x787 = INT32_MAX;

    t137 = (x785>((x786+x787)*x788));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x789 = INT32_MIN;
	int32_t x790 = INT32_MIN;
	int8_t x791 = 4;
	int32_t t138 = -9251039;

    t138 = (x789>((x790+x791)*x792));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t x793 = -463;
	uint32_t x794 = UINT32_MAX;
	int8_t x795 = 31;
	int8_t x796 = INT8_MIN;
	volatile int32_t t139 = 693824675;

    t139 = (x793>((x794+x795)*x796));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x798 = INT32_MIN;
	int64_t x800 = INT64_MAX;
	int32_t t140 = 140;

    t140 = (x797>((x798+x799)*x800));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x801 = -63;
	int64_t x803 = INT64_MIN;
	static volatile int32_t t141 = 86;

    t141 = (x801>((x802+x803)*x804));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x806 = UINT64_MAX;
	int16_t x807 = 0;
	int8_t x808 = INT8_MAX;
	static int32_t t142 = 938506;

    t142 = (x805>((x806+x807)*x808));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x814 = INT32_MIN;
	int64_t x815 = 4870370LL;
	int32_t x816 = -1;
	int32_t t143 = -480;

    t143 = (x813>((x814+x815)*x816));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x819 = -197;
	volatile uint64_t x820 = 2672190599LLU;
	int32_t t144 = 21442;

    t144 = (x817>((x818+x819)*x820));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int64_t x823 = -1LL;
	int8_t x824 = INT8_MIN;
	volatile int32_t t145 = 170;

    t145 = (x821>((x822+x823)*x824));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint32_t x825 = UINT32_MAX;
	int32_t x826 = -1;
	uint64_t x827 = 107377023532099LLU;
	volatile int64_t x828 = INT64_MAX;
	int32_t t146 = 48402128;

    t146 = (x825>((x826+x827)*x828));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x833 = INT8_MIN;
	volatile int8_t x834 = INT8_MIN;
	uint64_t x835 = 0LLU;
	int8_t x836 = 1;

    t147 = (x833>((x834+x835)*x836));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x837 = 96U;
	int64_t x838 = -18971070296LL;
	volatile int32_t x839 = -1;
	uint8_t x840 = 14U;
	int32_t t148 = -59975677;

    t148 = (x837>((x838+x839)*x840));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x841 = INT64_MIN;
	volatile uint32_t x842 = UINT32_MAX;
	uint8_t x843 = 21U;
	static int32_t x844 = INT32_MIN;

    t149 = (x841>((x842+x843)*x844));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static int32_t x849 = -1;
	int16_t x850 = -1;
	uint32_t x851 = 879765230U;
	static uint32_t x852 = 110U;
	int32_t t150 = 222829149;

    t150 = (x849>((x850+x851)*x852));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static int16_t x854 = INT16_MAX;
	volatile uint8_t x855 = 57U;
	static int8_t x856 = -1;
	int32_t t151 = 853284436;

    t151 = (x853>((x854+x855)*x856));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x857 = INT8_MIN;
	int16_t x858 = INT16_MAX;
	int16_t x859 = INT16_MIN;
	volatile int8_t x860 = INT8_MAX;
	static volatile int32_t t152 = -29972400;

    t152 = (x857>((x858+x859)*x860));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x861 = 7U;
	int8_t x862 = INT8_MIN;
	uint8_t x863 = UINT8_MAX;
	uint32_t x864 = 460U;
	volatile int32_t t153 = 8202206;

    t153 = (x861>((x862+x863)*x864));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x869 = 0U;
	volatile uint64_t x870 = UINT64_MAX;
	static int32_t x871 = -11775;
	volatile int64_t x872 = 8039265703397114LL;
	int32_t t154 = 38;

    t154 = (x869>((x870+x871)*x872));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x873 = 710002626;
	volatile uint64_t x874 = 800LLU;
	static uint64_t x876 = 224123212313899390LLU;
	int32_t t155 = -15;

    t155 = (x873>((x874+x875)*x876));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x897 = INT8_MIN;
	int32_t x898 = INT32_MIN;
	uint8_t x899 = 66U;
	volatile uint64_t x900 = UINT64_MAX;
	int32_t t156 = 12;

    t156 = (x897>((x898+x899)*x900));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x910 = 1664204013321079LLU;
	volatile uint32_t x911 = UINT32_MAX;
	static uint8_t x912 = UINT8_MAX;
	int32_t t157 = 7006520;

    t157 = (x909>((x910+x911)*x912));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static int64_t x917 = -1LL;
	static int32_t x918 = INT32_MIN;
	volatile uint8_t x920 = 71U;
	int32_t t158 = -15947879;

    t158 = (x917>((x918+x919)*x920));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x921 = -1;
	volatile uint32_t x923 = UINT32_MAX;
	uint32_t x924 = UINT32_MAX;
	volatile int32_t t159 = 30889422;

    t159 = (x921>((x922+x923)*x924));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x925 = INT16_MIN;
	int8_t x926 = INT8_MIN;
	volatile uint64_t x927 = UINT64_MAX;
	volatile uint8_t x928 = UINT8_MAX;
	static int32_t t160 = -45;

    t160 = (x925>((x926+x927)*x928));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x929 = INT16_MIN;
	volatile uint8_t x930 = 6U;
	int32_t x931 = -1;
	int16_t x932 = 879;
	volatile int32_t t161 = 30898026;

    t161 = (x929>((x930+x931)*x932));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x933 = INT64_MIN;
	int16_t x934 = -1;
	volatile uint8_t x935 = 3U;
	volatile int8_t x936 = 27;
	static volatile int32_t t162 = 3;

    t162 = (x933>((x934+x935)*x936));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint16_t x938 = 382U;
	uint64_t x940 = 7037286095098781LLU;
	volatile int32_t t163 = -487;

    t163 = (x937>((x938+x939)*x940));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x942 = 696378;
	static uint16_t x943 = UINT16_MAX;
	uint16_t x944 = 450U;
	volatile int32_t t164 = -241874503;

    t164 = (x941>((x942+x943)*x944));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x945 = INT16_MAX;
	volatile int64_t x946 = 167299LL;
	uint16_t x947 = 5U;
	int8_t x948 = -1;
	volatile int32_t t165 = 141773;

    t165 = (x945>((x946+x947)*x948));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x949 = -1;
	volatile uint32_t x950 = 232791722U;
	volatile uint8_t x951 = UINT8_MAX;
	uint64_t x952 = 853LLU;
	int32_t t166 = 41;

    t166 = (x949>((x950+x951)*x952));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x957 = 7U;
	int8_t x958 = INT8_MIN;
	int16_t x960 = INT16_MIN;
	volatile int32_t t167 = -227765;

    t167 = (x957>((x958+x959)*x960));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x961 = 808U;
	int64_t x962 = 29374597LL;
	static volatile int32_t t168 = 75288;

    t168 = (x961>((x962+x963)*x964));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x969 = 27089;
	volatile uint8_t x970 = 15U;
	int32_t x971 = 0;
	static int32_t t169 = 4665435;

    t169 = (x969>((x970+x971)*x972));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x981 = INT8_MIN;
	uint8_t x982 = UINT8_MAX;
	uint32_t x983 = UINT32_MAX;
	static int32_t x984 = INT32_MAX;
	static volatile int32_t t170 = -11492;

    t170 = (x981>((x982+x983)*x984));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x990 = -1LL;
	uint32_t x991 = 16011U;
	uint32_t x992 = UINT32_MAX;
	int32_t t171 = 904;

    t171 = (x989>((x990+x991)*x992));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x995 = 28179U;
	static int16_t x996 = 651;
	static volatile int32_t t172 = -22;

    t172 = (x993>((x994+x995)*x996));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x997 = INT16_MAX;
	volatile int64_t x998 = INT64_MIN;
	uint64_t x999 = UINT64_MAX;

    t173 = (x997>((x998+x999)*x1000));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint32_t x1001 = 1512U;
	int32_t x1003 = 442131469;
	int8_t x1004 = -1;
	int32_t t174 = 199;

    t174 = (x1001>((x1002+x1003)*x1004));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint8_t x1013 = 37U;
	int8_t x1014 = INT8_MAX;
	int64_t x1015 = -1LL;
	int16_t x1016 = INT16_MIN;
	int32_t t175 = -340;

    t175 = (x1013>((x1014+x1015)*x1016));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x1029 = 126417LLU;
	int32_t x1030 = INT32_MIN;
	volatile uint64_t x1031 = 811295156000775LLU;
	int64_t x1032 = INT64_MIN;
	int32_t t176 = 27923;

    t176 = (x1029>((x1030+x1031)*x1032));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x1033 = 1124;
	uint8_t x1034 = UINT8_MAX;
	static uint16_t x1036 = 209U;
	volatile int32_t t177 = -10;

    t177 = (x1033>((x1034+x1035)*x1036));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x1042 = INT16_MIN;
	static int8_t x1043 = -1;
	int32_t x1044 = -1;
	volatile int32_t t178 = -3140;

    t178 = (x1041>((x1042+x1043)*x1044));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x1046 = UINT8_MAX;
	int8_t x1047 = INT8_MAX;
	uint16_t x1048 = UINT16_MAX;

    t179 = (x1045>((x1046+x1047)*x1048));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x1053 = -53;
	uint64_t x1054 = UINT64_MAX;
	uint32_t x1056 = 147765483U;
	volatile int32_t t180 = -9897;

    t180 = (x1053>((x1054+x1055)*x1056));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x1061 = -311013270LL;
	int32_t x1062 = -3;
	int16_t x1063 = 722;
	uint32_t x1064 = UINT32_MAX;
	int32_t t181 = -4169612;

    t181 = (x1061>((x1062+x1063)*x1064));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int64_t x1065 = -1LL;
	uint16_t x1066 = 9U;
	static int64_t x1067 = -158469449381LL;
	uint16_t x1068 = UINT16_MAX;
	static int32_t t182 = 0;

    t182 = (x1065>((x1066+x1067)*x1068));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint8_t x1074 = UINT8_MAX;
	static volatile uint8_t x1075 = 88U;
	uint8_t x1076 = UINT8_MAX;
	volatile int32_t t183 = -424;

    t183 = (x1073>((x1074+x1075)*x1076));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x1083 = 148;
	volatile uint16_t x1084 = 3670U;
	static volatile int32_t t184 = 166;

    t184 = (x1081>((x1082+x1083)*x1084));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x1085 = -1LL;
	static int64_t x1088 = -1LL;

    t185 = (x1085>((x1086+x1087)*x1088));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x1089 = -683189000;
	int8_t x1090 = -1;
	uint64_t x1091 = UINT64_MAX;
	int8_t x1092 = INT8_MAX;
	int32_t t186 = 1;

    t186 = (x1089>((x1090+x1091)*x1092));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x1093 = -31229LL;
	int16_t x1094 = 1;
	uint32_t x1095 = UINT32_MAX;
	int32_t t187 = -30400;

    t187 = (x1093>((x1094+x1095)*x1096));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x1102 = -1LL;
	static int16_t x1103 = 224;
	static volatile int32_t t188 = -38436;

    t188 = (x1101>((x1102+x1103)*x1104));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x1106 = -11617015640910LL;
	int32_t x1107 = INT32_MIN;
	int16_t x1108 = -1;
	volatile int32_t t189 = 28996589;

    t189 = (x1105>((x1106+x1107)*x1108));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x1109 = -3463173169817465LL;
	volatile uint16_t x1110 = 7781U;
	static int16_t x1112 = -1;
	int32_t t190 = 25;

    t190 = (x1109>((x1110+x1111)*x1112));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x1113 = INT64_MAX;
	static int16_t x1114 = -1;
	uint16_t x1115 = 0U;
	static int16_t x1116 = 13;
	volatile int32_t t191 = -3297085;

    t191 = (x1113>((x1114+x1115)*x1116));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x1118 = 78;
	int64_t x1120 = 11030311941928LL;
	int32_t t192 = 167;

    t192 = (x1117>((x1118+x1119)*x1120));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x1121 = UINT8_MAX;
	uint64_t x1123 = 187320LLU;
	volatile int32_t t193 = 912270545;

    t193 = (x1121>((x1122+x1123)*x1124));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x1130 = INT16_MAX;
	static uint64_t x1132 = 937932LLU;
	volatile int32_t t194 = 5003;

    t194 = (x1129>((x1130+x1131)*x1132));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int8_t x1133 = INT8_MIN;
	int8_t x1135 = INT8_MAX;
	int16_t x1136 = INT16_MIN;
	int32_t t195 = -371497294;

    t195 = (x1133>((x1134+x1135)*x1136));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x1137 = 8024552;
	static int32_t x1138 = INT32_MAX;
	volatile int16_t x1140 = -1;
	int32_t t196 = -292647;

    t196 = (x1137>((x1138+x1139)*x1140));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint32_t x1146 = UINT32_MAX;
	volatile uint8_t x1147 = 8U;
	static int32_t x1148 = INT32_MIN;

    t197 = (x1145>((x1146+x1147)*x1148));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x1153 = -5463;
	int8_t x1154 = INT8_MIN;
	uint16_t x1155 = 2199U;
	int32_t t198 = -1;

    t198 = (x1153>((x1154+x1155)*x1156));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x1159 = INT16_MIN;
	int16_t x1160 = -2319;
	static volatile int32_t t199 = -188682;

    t199 = (x1157>((x1158+x1159)*x1160));

    if (t199 != 0) { NG(); } else { ; }
	
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

