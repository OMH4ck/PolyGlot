
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

int32_t x3 = -1;
int8_t x5 = -5;
static uint8_t x19 = 4U;
int8_t x28 = 12;
volatile int8_t x29 = 0;
volatile int16_t x32 = 2568;
int64_t x34 = -57852649265LL;
int64_t x36 = INT64_MIN;
volatile int32_t t8 = 270;
int32_t x39 = -51791;
static int16_t x43 = 0;
static uint8_t x49 = UINT8_MAX;
static int8_t x55 = 3;
int16_t x65 = 14;
int16_t x68 = INT16_MIN;
int16_t x70 = -1;
int16_t x78 = INT16_MIN;
volatile int32_t x85 = 222959;
int32_t x86 = -139;
int32_t x89 = INT32_MIN;
uint32_t x90 = 25349711U;
int64_t x92 = -247326606686485516LL;
static int32_t t19 = 3;
volatile int8_t x108 = -6;
static int8_t x110 = -1;
volatile uint64_t x119 = 396791016481814599LLU;
int64_t x120 = 2LL;
uint32_t x124 = 225848227U;
volatile uint64_t x127 = UINT64_MAX;
uint32_t x130 = 2621335U;
int32_t x131 = INT32_MIN;
uint32_t x134 = 1913U;
uint16_t x147 = UINT16_MAX;
int32_t x149 = INT32_MAX;
static int16_t x159 = -1;
int16_t x160 = INT16_MIN;
volatile int16_t x161 = INT16_MIN;
int64_t x162 = 0LL;
volatile uint64_t x179 = UINT64_MAX;
int32_t t40 = -7;
uint64_t x195 = 1208020353739563469LLU;
uint16_t x198 = 1635U;
uint16_t x199 = UINT16_MAX;
int16_t x206 = INT16_MIN;
static int8_t x213 = -1;
uint8_t x226 = 1U;
volatile uint16_t x227 = 197U;
int16_t x228 = -1;
static uint8_t x231 = 3U;
int32_t x232 = INT32_MIN;
int32_t t49 = 119;
uint64_t x237 = UINT64_MAX;
static uint64_t x240 = 3LLU;
static int32_t x244 = INT32_MAX;
static uint64_t x249 = 1LLU;
int8_t x250 = INT8_MAX;
int32_t t52 = 370308;
static uint64_t x253 = UINT64_MAX;
int32_t x255 = INT32_MAX;
int32_t t53 = 1931;
int64_t x265 = INT64_MAX;
uint64_t x271 = UINT64_MAX;
static int64_t x272 = INT64_MIN;
static uint16_t x273 = 1729U;
int32_t x294 = -63821067;
volatile int8_t x307 = INT8_MAX;
static uint8_t x308 = 0U;
static volatile uint32_t x309 = 220546086U;
static uint32_t x319 = UINT32_MAX;
uint16_t x321 = 11933U;
int16_t x322 = INT16_MAX;
int8_t x324 = INT8_MIN;
uint8_t x334 = 3U;
volatile int64_t x337 = INT64_MAX;
static volatile uint64_t x347 = 219929895LLU;
static volatile int32_t t74 = -339;
static volatile int32_t x352 = INT32_MAX;
volatile int32_t t75 = -81920;
int16_t x355 = -1;
static volatile int64_t x373 = INT64_MIN;
int8_t x383 = 29;
int8_t x390 = 0;
uint8_t x392 = 0U;
volatile uint16_t x395 = UINT16_MAX;
int16_t x399 = 7;
int32_t x403 = -1;
static volatile int8_t x404 = 42;
volatile uint16_t x422 = UINT16_MAX;
int8_t x423 = INT8_MAX;
static int32_t x428 = 1672;
int8_t x434 = INT8_MIN;
uint16_t x436 = 53U;
int32_t t93 = 3818;
int8_t x438 = -1;
int8_t x441 = 53;
int32_t x450 = 110065;
static int16_t x457 = -6612;
int8_t x459 = -2;
int32_t x462 = -1;
int8_t x464 = INT8_MAX;
int16_t x482 = INT16_MIN;
volatile int32_t t104 = 404061564;
volatile uint64_t x499 = UINT64_MAX;
volatile int32_t t107 = -279530438;
uint64_t x505 = 40583981978096LLU;
int32_t t109 = -1;
int32_t x523 = -1;
volatile int32_t t112 = 3045869;
uint32_t x529 = 1168326910U;
volatile int32_t t114 = -7;
int32_t x545 = INT32_MIN;
int8_t x556 = INT8_MAX;
uint8_t x561 = 0U;
static int8_t x563 = INT8_MIN;
uint8_t x569 = 1U;
int64_t x578 = -1LL;
int64_t x582 = -1LL;
int32_t t126 = -439;
static int8_t x613 = -2;
static uint8_t x614 = 46U;
static int16_t x616 = -1;
static uint8_t x622 = 6U;
int64_t x624 = INT64_MAX;
int32_t t134 = 16696;
volatile int32_t x625 = INT32_MIN;
int8_t x630 = -1;
int16_t x635 = -219;
static int8_t x640 = INT8_MIN;
int16_t x645 = -1;
int16_t x652 = INT16_MAX;
uint64_t x654 = 50396249820LLU;
int32_t x656 = INT32_MAX;
int64_t x665 = -1LL;
int32_t x668 = -32933;
static uint8_t x672 = 1U;
volatile int32_t t143 = -1166767;
volatile uint8_t x675 = 4U;
static int32_t t146 = 1749;
volatile int32_t t148 = -187166;
static int8_t x701 = INT8_MAX;
int8_t x722 = INT8_MIN;
static int64_t x727 = 445187017LL;
volatile int64_t x738 = 1366628103078LL;
volatile uint16_t x743 = UINT16_MAX;
static int32_t x744 = INT32_MIN;
int32_t t156 = 13888;
volatile int32_t x750 = -1;
static volatile int32_t x763 = -44181828;
int32_t x764 = -1;
int32_t t159 = 97;
int64_t x767 = 79887140983LL;
uint16_t x773 = 599U;
static volatile int32_t t161 = 94217697;
static int16_t x786 = INT16_MIN;
int16_t x788 = INT16_MIN;
uint32_t x790 = 645447U;
uint16_t x791 = UINT16_MAX;
volatile int16_t x793 = INT16_MIN;
static int32_t t165 = 6;
uint16_t x800 = 2666U;
int32_t t166 = -935351;
static int32_t t167 = -428011170;
static int32_t x811 = INT32_MIN;
static int64_t x820 = INT64_MAX;
uint64_t x833 = 514738012176LLU;
int64_t x834 = INT64_MIN;
int32_t x839 = INT32_MAX;
volatile int32_t t174 = -1584270;
static int8_t x843 = INT8_MIN;
int32_t t175 = -10;
int32_t t176 = -58869;
uint16_t x860 = UINT16_MAX;
static int16_t x862 = -1;
uint32_t x867 = UINT32_MAX;
volatile uint32_t x868 = 169U;
int32_t t180 = 0;
static volatile int32_t t181 = 3917727;
uint16_t x874 = 14U;
uint64_t x875 = 1301057500544270LLU;
volatile uint16_t x877 = 4U;
uint64_t x885 = 216809LLU;
int32_t x891 = INT32_MIN;
int16_t x907 = INT16_MIN;
int64_t x912 = -4291301278440721459LL;
uint32_t x916 = 104408U;
int32_t t191 = -6;
int32_t x926 = -56;
uint64_t x927 = UINT64_MAX;
static volatile int32_t t193 = -901;
int32_t t194 = 118;
static int8_t x937 = INT8_MIN;
uint8_t x938 = UINT8_MAX;
int32_t t196 = -1;
int64_t x951 = 11019649190LL;
int8_t x954 = -1;


void f0(void) {
    	int8_t x1 = -1;
	int16_t x2 = 408;
	uint64_t x4 = 199875171LLU;
	volatile int32_t t0 = -47085;

    t0 = (x1!=((x2+x3)&x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x6 = INT8_MAX;
	int16_t x7 = INT16_MAX;
	volatile int16_t x8 = INT16_MIN;
	int32_t t1 = -7090;

    t1 = (x5!=((x6+x7)&x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint32_t x9 = 23274832U;
	static int32_t x10 = -218;
	int64_t x11 = -1LL;
	uint64_t x12 = 0LLU;
	volatile int32_t t2 = 0;

    t2 = (x9!=((x10+x11)&x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = UINT64_MAX;
	volatile uint32_t x14 = UINT32_MAX;
	int8_t x15 = INT8_MIN;
	static uint8_t x16 = 3U;
	static volatile int32_t t3 = 747196309;

    t3 = (x13!=((x14+x15)&x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x17 = INT8_MIN;
	int32_t x18 = INT32_MIN;
	int8_t x20 = 1;
	int32_t t4 = -21387;

    t4 = (x17!=((x18+x19)&x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x21 = -1;
	int16_t x22 = INT16_MAX;
	int64_t x23 = -21311LL;
	static int64_t x24 = -4865260852764512LL;
	int32_t t5 = 239153461;

    t5 = (x21!=((x22+x23)&x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x25 = -1;
	int64_t x26 = 150990009717444791LL;
	int16_t x27 = 279;
	int32_t t6 = 214533;

    t6 = (x25!=((x26+x27)&x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x30 = INT16_MAX;
	static int8_t x31 = INT8_MIN;
	int32_t t7 = -256;

    t7 = (x29!=((x30+x31)&x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int32_t x33 = INT32_MAX;
	int64_t x35 = -1LL;

    t8 = (x33!=((x34+x35)&x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x37 = 20U;
	uint16_t x38 = 15U;
	volatile int16_t x40 = INT16_MAX;
	volatile int32_t t9 = 11;

    t9 = (x37!=((x38+x39)&x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x41 = 4U;
	uint64_t x42 = UINT64_MAX;
	int8_t x44 = 40;
	volatile int32_t t10 = -393647817;

    t10 = (x41!=((x42+x43)&x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x45 = 79U;
	volatile int16_t x46 = 387;
	volatile int16_t x47 = INT16_MAX;
	int32_t x48 = INT32_MAX;
	int32_t t11 = -22;

    t11 = (x45!=((x46+x47)&x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x50 = UINT32_MAX;
	volatile int8_t x51 = INT8_MIN;
	volatile int32_t x52 = INT32_MAX;
	volatile int32_t t12 = 894541;

    t12 = (x49!=((x50+x51)&x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint8_t x53 = 93U;
	uint16_t x54 = 4348U;
	volatile int32_t x56 = -1;
	int32_t t13 = -74430724;

    t13 = (x53!=((x54+x55)&x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x66 = INT32_MIN;
	volatile int64_t x67 = -1LL;
	int32_t t14 = 246;

    t14 = (x65!=((x66+x67)&x68));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x69 = INT32_MIN;
	volatile int8_t x71 = INT8_MIN;
	uint16_t x72 = 223U;
	int32_t t15 = 104679888;

    t15 = (x69!=((x70+x71)&x72));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x73 = INT32_MAX;
	uint16_t x74 = UINT16_MAX;
	int32_t x75 = -149836019;
	static volatile int16_t x76 = 15;
	int32_t t16 = 14970422;

    t16 = (x73!=((x74+x75)&x76));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x77 = -1;
	static uint8_t x79 = 0U;
	int64_t x80 = -654444LL;
	int32_t t17 = 7160590;

    t17 = (x77!=((x78+x79)&x80));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x87 = 1;
	uint64_t x88 = 210875517494LLU;
	static volatile int32_t t18 = -147111098;

    t18 = (x85!=((x86+x87)&x88));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x91 = INT32_MIN;

    t19 = (x89!=((x90+x91)&x92));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x93 = INT8_MAX;
	int16_t x94 = -1;
	int8_t x95 = INT8_MIN;
	int32_t x96 = INT32_MIN;
	static int32_t t20 = -235;

    t20 = (x93!=((x94+x95)&x96));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint64_t x101 = 2069213201785391588LLU;
	uint64_t x102 = 34624111476963767LLU;
	volatile int8_t x103 = INT8_MAX;
	int64_t x104 = -3909308165LL;
	volatile int32_t t21 = 111264894;

    t21 = (x101!=((x102+x103)&x104));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x105 = -1;
	int32_t x106 = -2413633;
	static uint8_t x107 = 0U;
	volatile int32_t t22 = -595497633;

    t22 = (x105!=((x106+x107)&x108));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint64_t x109 = 113842LLU;
	static volatile int16_t x111 = -392;
	volatile int16_t x112 = INT16_MAX;
	static int32_t t23 = -12;

    t23 = (x109!=((x110+x111)&x112));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x113 = 9877191LLU;
	uint32_t x114 = 15169U;
	volatile int64_t x115 = -736153469649LL;
	int32_t x116 = 12913;
	volatile int32_t t24 = 42;

    t24 = (x113!=((x114+x115)&x116));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x117 = INT64_MIN;
	int32_t x118 = -1133118;
	int32_t t25 = 9516813;

    t25 = (x117!=((x118+x119)&x120));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x121 = 0U;
	static volatile int8_t x122 = INT8_MIN;
	uint64_t x123 = 7347673LLU;
	int32_t t26 = -1001521;

    t26 = (x121!=((x122+x123)&x124));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x125 = 326U;
	int32_t x126 = INT32_MAX;
	int64_t x128 = INT64_MAX;
	volatile int32_t t27 = -35507;

    t27 = (x125!=((x126+x127)&x128));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x129 = INT16_MIN;
	static volatile int32_t x132 = -412;
	int32_t t28 = 209596;

    t28 = (x129!=((x130+x131)&x132));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x133 = INT16_MIN;
	int8_t x135 = INT8_MIN;
	int64_t x136 = -1LL;
	static int32_t t29 = -62639168;

    t29 = (x133!=((x134+x135)&x136));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x137 = 81501;
	int64_t x138 = -1LL;
	int8_t x139 = INT8_MIN;
	uint16_t x140 = 0U;
	static int32_t t30 = 122;

    t30 = (x137!=((x138+x139)&x140));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x141 = 7U;
	uint32_t x142 = 1U;
	int8_t x143 = INT8_MIN;
	static uint32_t x144 = 66953305U;
	volatile int32_t t31 = -26;

    t31 = (x141!=((x142+x143)&x144));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x145 = INT64_MIN;
	int8_t x146 = INT8_MIN;
	static int16_t x148 = -1;
	int32_t t32 = 3;

    t32 = (x145!=((x146+x147)&x148));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x150 = -1;
	int32_t x151 = -306779732;
	int64_t x152 = -1528LL;
	static int32_t t33 = -3430268;

    t33 = (x149!=((x150+x151)&x152));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x157 = 1U;
	volatile int32_t x158 = 75;
	volatile int32_t t34 = 1546695;

    t34 = (x157!=((x158+x159)&x160));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint8_t x163 = 8U;
	int64_t x164 = INT64_MAX;
	static volatile int32_t t35 = -16542;

    t35 = (x161!=((x162+x163)&x164));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x165 = UINT32_MAX;
	uint64_t x166 = 59389225262LLU;
	uint32_t x167 = 1415868U;
	int16_t x168 = -1;
	static int32_t t36 = 1;

    t36 = (x165!=((x166+x167)&x168));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x169 = INT32_MAX;
	uint16_t x170 = 492U;
	static int8_t x171 = -37;
	uint64_t x172 = 32471LLU;
	volatile int32_t t37 = 608654;

    t37 = (x169!=((x170+x171)&x172));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x177 = 10U;
	int32_t x178 = INT32_MAX;
	uint32_t x180 = UINT32_MAX;
	int32_t t38 = 52655131;

    t38 = (x177!=((x178+x179)&x180));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x181 = -1;
	int64_t x182 = -1LL;
	int16_t x183 = -1;
	int64_t x184 = -1LL;
	int32_t t39 = -1;

    t39 = (x181!=((x182+x183)&x184));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x189 = 9239806343684LLU;
	uint16_t x190 = 3801U;
	uint32_t x191 = 11U;
	int8_t x192 = INT8_MIN;

    t40 = (x189!=((x190+x191)&x192));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint32_t x193 = 737458829U;
	int16_t x194 = INT16_MIN;
	int16_t x196 = -1;
	volatile int32_t t41 = 1472;

    t41 = (x193!=((x194+x195)&x196));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x197 = 115552398LL;
	uint8_t x200 = 3U;
	static volatile int32_t t42 = 6;

    t42 = (x197!=((x198+x199)&x200));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x201 = -28;
	static uint32_t x202 = 1779U;
	volatile uint8_t x203 = 73U;
	uint16_t x204 = 643U;
	volatile int32_t t43 = -13901;

    t43 = (x201!=((x202+x203)&x204));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x205 = 570531LL;
	uint64_t x207 = UINT64_MAX;
	static uint32_t x208 = UINT32_MAX;
	int32_t t44 = -1;

    t44 = (x205!=((x206+x207)&x208));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x209 = 9U;
	static volatile int32_t x210 = INT32_MAX;
	int16_t x211 = INT16_MIN;
	int16_t x212 = INT16_MIN;
	static volatile int32_t t45 = 32108073;

    t45 = (x209!=((x210+x211)&x212));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint32_t x214 = 6142U;
	static volatile uint64_t x215 = 184648346652546LLU;
	uint8_t x216 = 0U;
	volatile int32_t t46 = -1627418;

    t46 = (x213!=((x214+x215)&x216));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x221 = -262;
	int32_t x222 = -115;
	int32_t x223 = 20;
	uint32_t x224 = UINT32_MAX;
	static int32_t t47 = -109;

    t47 = (x221!=((x222+x223)&x224));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x225 = INT8_MIN;
	static int32_t t48 = 1;

    t48 = (x225!=((x226+x227)&x228));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x229 = UINT16_MAX;
	uint8_t x230 = 78U;

    t49 = (x229!=((x230+x231)&x232));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x238 = 12U;
	int16_t x239 = INT16_MAX;
	volatile int32_t t50 = 2;

    t50 = (x237!=((x238+x239)&x240));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile uint64_t x241 = 117397LLU;
	static uint16_t x242 = UINT16_MAX;
	static uint8_t x243 = 30U;
	int32_t t51 = -708;

    t51 = (x241!=((x242+x243)&x244));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint8_t x251 = 14U;
	static int32_t x252 = 1;

    t52 = (x249!=((x250+x251)&x252));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int64_t x254 = -1LL;
	uint32_t x256 = 491878503U;

    t53 = (x253!=((x254+x255)&x256));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x257 = INT16_MAX;
	int32_t x258 = 166754827;
	int16_t x259 = 7639;
	uint64_t x260 = UINT64_MAX;
	int32_t t54 = -72;

    t54 = (x257!=((x258+x259)&x260));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x261 = INT64_MIN;
	int8_t x262 = 0;
	static uint32_t x263 = UINT32_MAX;
	int32_t x264 = -1;
	int32_t t55 = -264;

    t55 = (x261!=((x262+x263)&x264));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint8_t x266 = 93U;
	int8_t x267 = -12;
	uint8_t x268 = 6U;
	static int32_t t56 = -20380920;

    t56 = (x265!=((x266+x267)&x268));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x269 = 0;
	static uint16_t x270 = UINT16_MAX;
	int32_t t57 = 434892053;

    t57 = (x269!=((x270+x271)&x272));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x274 = -1;
	static int16_t x275 = -2785;
	volatile int64_t x276 = INT64_MAX;
	int32_t t58 = 39457018;

    t58 = (x273!=((x274+x275)&x276));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x277 = -1;
	int32_t x278 = -1;
	uint32_t x279 = 10521537U;
	uint64_t x280 = 86370982784346LLU;
	volatile int32_t t59 = -57706;

    t59 = (x277!=((x278+x279)&x280));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x285 = INT64_MIN;
	int32_t x286 = -1;
	static uint8_t x287 = 85U;
	volatile int16_t x288 = -1;
	int32_t t60 = -222909;

    t60 = (x285!=((x286+x287)&x288));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x293 = 62518114LLU;
	volatile int64_t x295 = -1LL;
	int16_t x296 = -1;
	int32_t t61 = 82;

    t61 = (x293!=((x294+x295)&x296));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x297 = 12;
	int32_t x298 = INT32_MAX;
	volatile int64_t x299 = INT64_MIN;
	int32_t x300 = INT32_MIN;
	int32_t t62 = 47377161;

    t62 = (x297!=((x298+x299)&x300));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x301 = UINT32_MAX;
	volatile uint32_t x302 = UINT32_MAX;
	volatile int8_t x303 = -1;
	int16_t x304 = 906;
	int32_t t63 = 826670;

    t63 = (x301!=((x302+x303)&x304));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x305 = UINT32_MAX;
	int8_t x306 = INT8_MIN;
	volatile int32_t t64 = 21;

    t64 = (x305!=((x306+x307)&x308));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x310 = INT16_MIN;
	uint16_t x311 = UINT16_MAX;
	int64_t x312 = INT64_MIN;
	int32_t t65 = 3;

    t65 = (x309!=((x310+x311)&x312));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint32_t x313 = UINT32_MAX;
	int16_t x314 = -110;
	volatile int64_t x315 = -8778LL;
	static int32_t x316 = INT32_MIN;
	volatile int32_t t66 = 432151870;

    t66 = (x313!=((x314+x315)&x316));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x317 = 95137;
	static int32_t x318 = INT32_MIN;
	uint16_t x320 = 2060U;
	static volatile int32_t t67 = 8120880;

    t67 = (x317!=((x318+x319)&x320));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x323 = -11;
	static int32_t t68 = 11583;

    t68 = (x321!=((x322+x323)&x324));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x325 = 7;
	uint64_t x326 = 3704244LLU;
	volatile uint16_t x327 = 98U;
	int32_t x328 = INT32_MIN;
	int32_t t69 = -10334316;

    t69 = (x325!=((x326+x327)&x328));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x329 = INT16_MIN;
	static uint32_t x330 = 0U;
	static int64_t x331 = INT64_MAX;
	int64_t x332 = -12701649852164LL;
	static int32_t t70 = 3;

    t70 = (x329!=((x330+x331)&x332));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x333 = INT64_MIN;
	uint32_t x335 = 26U;
	volatile int16_t x336 = -2;
	int32_t t71 = 132104334;

    t71 = (x333!=((x334+x335)&x336));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x338 = INT64_MIN;
	int8_t x339 = 0;
	volatile int16_t x340 = -1;
	int32_t t72 = 1900862;

    t72 = (x337!=((x338+x339)&x340));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x341 = UINT32_MAX;
	int32_t x342 = INT32_MIN;
	volatile uint16_t x343 = UINT16_MAX;
	volatile int32_t x344 = INT32_MIN;
	static int32_t t73 = -1;

    t73 = (x341!=((x342+x343)&x344));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint32_t x345 = UINT32_MAX;
	int16_t x346 = INT16_MAX;
	static uint16_t x348 = 17U;

    t74 = (x345!=((x346+x347)&x348));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x349 = 51;
	uint8_t x350 = 0U;
	uint16_t x351 = 13U;

    t75 = (x349!=((x350+x351)&x352));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x353 = INT16_MIN;
	int16_t x354 = INT16_MIN;
	static uint32_t x356 = UINT32_MAX;
	volatile int32_t t76 = -3853;

    t76 = (x353!=((x354+x355)&x356));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x361 = 1365;
	int8_t x362 = INT8_MIN;
	int8_t x363 = INT8_MIN;
	uint32_t x364 = 17U;
	static volatile int32_t t77 = 4085;

    t77 = (x361!=((x362+x363)&x364));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x365 = 0;
	uint8_t x366 = 85U;
	volatile int32_t x367 = 5746923;
	uint32_t x368 = 116698154U;
	int32_t t78 = -2779;

    t78 = (x365!=((x366+x367)&x368));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x369 = -86004LL;
	uint64_t x370 = UINT64_MAX;
	uint32_t x371 = 1012971781U;
	int64_t x372 = -1LL;
	int32_t t79 = -21;

    t79 = (x369!=((x370+x371)&x372));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint32_t x374 = UINT32_MAX;
	volatile int64_t x375 = INT64_MIN;
	uint32_t x376 = 220U;
	volatile int32_t t80 = 393;

    t80 = (x373!=((x374+x375)&x376));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int64_t x377 = 9350222317734LL;
	static uint64_t x378 = UINT64_MAX;
	int64_t x379 = INT64_MIN;
	int8_t x380 = INT8_MIN;
	int32_t t81 = -4458;

    t81 = (x377!=((x378+x379)&x380));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint8_t x381 = 117U;
	uint32_t x382 = 42U;
	int16_t x384 = -1375;
	static int32_t t82 = 14875;

    t82 = (x381!=((x382+x383)&x384));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x389 = 587;
	int32_t x391 = INT32_MIN;
	int32_t t83 = -15273;

    t83 = (x389!=((x390+x391)&x392));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x393 = -4544479;
	int16_t x394 = 6;
	int32_t x396 = INT32_MIN;
	int32_t t84 = -86;

    t84 = (x393!=((x394+x395)&x396));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x397 = INT8_MAX;
	uint64_t x398 = 301489243840LLU;
	int64_t x400 = INT64_MIN;
	static volatile int32_t t85 = 44981;

    t85 = (x397!=((x398+x399)&x400));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x401 = INT32_MIN;
	static uint16_t x402 = UINT16_MAX;
	int32_t t86 = -445759663;

    t86 = (x401!=((x402+x403)&x404));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x409 = -1;
	uint16_t x410 = 2052U;
	int64_t x411 = -1LL;
	int16_t x412 = -37;
	int32_t t87 = -3;

    t87 = (x409!=((x410+x411)&x412));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x413 = 7571414;
	static uint32_t x414 = UINT32_MAX;
	int64_t x415 = -1LL;
	volatile int8_t x416 = INT8_MIN;
	volatile int32_t t88 = -15;

    t88 = (x413!=((x414+x415)&x416));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x417 = INT64_MIN;
	uint16_t x418 = 0U;
	volatile int8_t x419 = -1;
	int64_t x420 = -112081708696LL;
	volatile int32_t t89 = 37334;

    t89 = (x417!=((x418+x419)&x420));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x421 = INT32_MIN;
	int32_t x424 = -1;
	static int32_t t90 = 110;

    t90 = (x421!=((x422+x423)&x424));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x425 = INT16_MIN;
	int64_t x426 = INT64_MAX;
	int64_t x427 = INT64_MIN;
	volatile int32_t t91 = 12;

    t91 = (x425!=((x426+x427)&x428));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x429 = INT64_MAX;
	static int64_t x430 = INT64_MAX;
	static volatile int64_t x431 = -28590468460383LL;
	static int16_t x432 = 71;
	volatile int32_t t92 = 428571;

    t92 = (x429!=((x430+x431)&x432));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x433 = -307489LL;
	int16_t x435 = -1;

    t93 = (x433!=((x434+x435)&x436));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x437 = -58;
	uint8_t x439 = 115U;
	uint8_t x440 = UINT8_MAX;
	int32_t t94 = -1;

    t94 = (x437!=((x438+x439)&x440));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x442 = -1;
	int16_t x443 = INT16_MIN;
	int64_t x444 = -3058295874533755305LL;
	int32_t t95 = 68;

    t95 = (x441!=((x442+x443)&x444));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x445 = INT8_MIN;
	uint16_t x446 = 3U;
	volatile int16_t x447 = -1;
	uint32_t x448 = 21217U;
	int32_t t96 = -21;

    t96 = (x445!=((x446+x447)&x448));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x449 = INT32_MAX;
	int64_t x451 = -5754063718LL;
	int16_t x452 = 0;
	static int32_t t97 = -80824;

    t97 = (x449!=((x450+x451)&x452));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint64_t x453 = UINT64_MAX;
	uint64_t x454 = UINT64_MAX;
	int64_t x455 = 500896366501293LL;
	int32_t x456 = 373525;
	int32_t t98 = -386599994;

    t98 = (x453!=((x454+x455)&x456));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile int32_t x458 = -1;
	int8_t x460 = 28;
	static int32_t t99 = 1;

    t99 = (x457!=((x458+x459)&x460));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x461 = INT16_MIN;
	int8_t x463 = -14;
	int32_t t100 = -148503944;

    t100 = (x461!=((x462+x463)&x464));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int32_t x465 = 0;
	int8_t x466 = INT8_MIN;
	static uint64_t x467 = 121173966525LLU;
	uint64_t x468 = 7796381897LLU;
	volatile int32_t t101 = -48481739;

    t101 = (x465!=((x466+x467)&x468));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile uint64_t x473 = 10562026LLU;
	int32_t x474 = INT32_MAX;
	uint64_t x475 = 41LLU;
	uint8_t x476 = 93U;
	int32_t t102 = -1;

    t102 = (x473!=((x474+x475)&x476));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x477 = -1;
	int32_t x478 = INT32_MIN;
	int64_t x479 = 5067168726190002LL;
	int32_t x480 = INT32_MIN;
	int32_t t103 = -31;

    t103 = (x477!=((x478+x479)&x480));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x481 = 1U;
	uint8_t x483 = 0U;
	uint32_t x484 = 2628542U;

    t104 = (x481!=((x482+x483)&x484));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static int32_t x489 = -252004;
	int8_t x490 = -1;
	int8_t x491 = -1;
	int8_t x492 = -1;
	static volatile int32_t t105 = 15;

    t105 = (x489!=((x490+x491)&x492));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int8_t x493 = 1;
	volatile int16_t x494 = -2371;
	static int8_t x495 = 0;
	int16_t x496 = INT16_MAX;
	volatile int32_t t106 = 0;

    t106 = (x493!=((x494+x495)&x496));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x497 = INT64_MIN;
	int64_t x498 = 241431748181937473LL;
	static uint8_t x500 = 11U;

    t107 = (x497!=((x498+x499)&x500));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x501 = INT32_MIN;
	int32_t x502 = -1;
	int32_t x503 = 0;
	int16_t x504 = INT16_MAX;
	int32_t t108 = -86;

    t108 = (x501!=((x502+x503)&x504));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x506 = INT16_MIN;
	volatile uint8_t x507 = 55U;
	uint32_t x508 = 3232U;

    t109 = (x505!=((x506+x507)&x508));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x509 = -23;
	int16_t x510 = INT16_MIN;
	static uint16_t x511 = 39U;
	volatile uint64_t x512 = 1310337763270221LLU;
	volatile int32_t t110 = -118;

    t110 = (x509!=((x510+x511)&x512));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x517 = 26U;
	volatile uint16_t x518 = 2574U;
	static int64_t x519 = 44257665287368LL;
	int16_t x520 = INT16_MIN;
	int32_t t111 = -80909;

    t111 = (x517!=((x518+x519)&x520));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint64_t x521 = UINT64_MAX;
	int32_t x522 = INT32_MAX;
	int64_t x524 = 325588188LL;

    t112 = (x521!=((x522+x523)&x524));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint32_t x525 = 17161U;
	int64_t x526 = INT64_MIN;
	static uint8_t x527 = 0U;
	uint64_t x528 = UINT64_MAX;
	static volatile int32_t t113 = 3479019;

    t113 = (x525!=((x526+x527)&x528));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x530 = -1;
	int64_t x531 = -89018861574LL;
	int8_t x532 = -6;

    t114 = (x529!=((x530+x531)&x532));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x533 = 21U;
	int8_t x534 = INT8_MIN;
	int8_t x535 = INT8_MIN;
	uint8_t x536 = 8U;
	volatile int32_t t115 = -128;

    t115 = (x533!=((x534+x535)&x536));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int32_t x546 = 156;
	uint8_t x547 = 17U;
	uint16_t x548 = 16361U;
	int32_t t116 = -1032;

    t116 = (x545!=((x546+x547)&x548));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x549 = 38830U;
	int64_t x550 = -1LL;
	static volatile int16_t x551 = INT16_MIN;
	int32_t x552 = 19922329;
	int32_t t117 = -1;

    t117 = (x549!=((x550+x551)&x552));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x553 = 0;
	static uint64_t x554 = 32LLU;
	uint32_t x555 = 14181631U;
	int32_t t118 = 3045;

    t118 = (x553!=((x554+x555)&x556));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile int64_t x557 = 2735942287961574LL;
	static int16_t x558 = INT16_MIN;
	volatile int8_t x559 = -1;
	uint16_t x560 = 636U;
	volatile int32_t t119 = 253601;

    t119 = (x557!=((x558+x559)&x560));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x562 = -33;
	uint64_t x564 = 1405LLU;
	volatile int32_t t120 = -9;

    t120 = (x561!=((x562+x563)&x564));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint8_t x565 = 78U;
	int8_t x566 = 1;
	int16_t x567 = 1414;
	int8_t x568 = INT8_MIN;
	volatile int32_t t121 = -52842;

    t121 = (x565!=((x566+x567)&x568));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x570 = 235272LLU;
	int8_t x571 = -1;
	int8_t x572 = -1;
	int32_t t122 = 59620650;

    t122 = (x569!=((x570+x571)&x572));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static int64_t x573 = INT64_MAX;
	int8_t x574 = INT8_MIN;
	volatile int8_t x575 = 8;
	int64_t x576 = 1LL;
	volatile int32_t t123 = -48;

    t123 = (x573!=((x574+x575)&x576));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x577 = 21169U;
	static uint16_t x579 = 51U;
	static uint8_t x580 = 97U;
	static volatile int32_t t124 = -3509142;

    t124 = (x577!=((x578+x579)&x580));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x581 = INT8_MAX;
	int8_t x583 = INT8_MAX;
	int32_t x584 = 963;
	int32_t t125 = 4;

    t125 = (x581!=((x582+x583)&x584));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int16_t x589 = INT16_MIN;
	int64_t x590 = -2213382LL;
	static int64_t x591 = -8634LL;
	int16_t x592 = INT16_MIN;

    t126 = (x589!=((x590+x591)&x592));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x593 = INT8_MIN;
	int64_t x594 = -1LL;
	volatile int32_t x595 = INT32_MIN;
	static int8_t x596 = -6;
	int32_t t127 = 42;

    t127 = (x593!=((x594+x595)&x596));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint64_t x597 = UINT64_MAX;
	int32_t x598 = 9374552;
	int64_t x599 = -212932966396LL;
	static uint64_t x600 = 16079409507LLU;
	static volatile int32_t t128 = 4;

    t128 = (x597!=((x598+x599)&x600));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x601 = INT32_MIN;
	uint16_t x602 = UINT16_MAX;
	int8_t x603 = 8;
	static int32_t x604 = INT32_MAX;
	int32_t t129 = -63490;

    t129 = (x601!=((x602+x603)&x604));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint32_t x605 = 39U;
	volatile uint64_t x606 = UINT64_MAX;
	int16_t x607 = 1621;
	int64_t x608 = INT64_MAX;
	volatile int32_t t130 = 14;

    t130 = (x605!=((x606+x607)&x608));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x609 = -471434;
	int64_t x610 = INT64_MIN;
	volatile int32_t x611 = INT32_MAX;
	int16_t x612 = INT16_MIN;
	volatile int32_t t131 = -15895;

    t131 = (x609!=((x610+x611)&x612));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x615 = INT8_MIN;
	static volatile int32_t t132 = 350932484;

    t132 = (x613!=((x614+x615)&x616));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x617 = 3U;
	static uint64_t x618 = 7776519LLU;
	int64_t x619 = INT64_MIN;
	int64_t x620 = INT64_MIN;
	int32_t t133 = 4056;

    t133 = (x617!=((x618+x619)&x620));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x621 = UINT8_MAX;
	int32_t x623 = INT32_MIN;

    t134 = (x621!=((x622+x623)&x624));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x626 = 11U;
	uint64_t x627 = 6LLU;
	int8_t x628 = INT8_MIN;
	int32_t t135 = 1797568;

    t135 = (x625!=((x626+x627)&x628));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x629 = 53;
	uint8_t x631 = UINT8_MAX;
	static volatile int64_t x632 = -1LL;
	int32_t t136 = 18965005;

    t136 = (x629!=((x630+x631)&x632));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x633 = INT32_MAX;
	int8_t x634 = -6;
	static int16_t x636 = INT16_MIN;
	volatile int32_t t137 = -842;

    t137 = (x633!=((x634+x635)&x636));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x637 = INT64_MIN;
	int8_t x638 = -12;
	uint64_t x639 = 6564034194LLU;
	int32_t t138 = 437;

    t138 = (x637!=((x638+x639)&x640));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x646 = INT64_MIN;
	uint32_t x647 = UINT32_MAX;
	int64_t x648 = INT64_MIN;
	volatile int32_t t139 = 1121633;

    t139 = (x645!=((x646+x647)&x648));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x649 = -1;
	int16_t x650 = INT16_MIN;
	volatile int32_t x651 = INT32_MAX;
	int32_t t140 = -7;

    t140 = (x649!=((x650+x651)&x652));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x653 = -1LL;
	int8_t x655 = -25;
	static volatile int32_t t141 = 365;

    t141 = (x653!=((x654+x655)&x656));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x666 = INT16_MIN;
	int64_t x667 = -1LL;
	int32_t t142 = -103968;

    t142 = (x665!=((x666+x667)&x668));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x669 = 424829329839364225LL;
	int16_t x670 = INT16_MIN;
	int16_t x671 = 0;

    t143 = (x669!=((x670+x671)&x672));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x673 = INT8_MAX;
	int16_t x674 = INT16_MAX;
	int32_t x676 = INT32_MAX;
	volatile int32_t t144 = 75249;

    t144 = (x673!=((x674+x675)&x676));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x677 = -138;
	static int32_t x678 = INT32_MAX;
	int8_t x679 = INT8_MIN;
	int8_t x680 = -1;
	volatile int32_t t145 = -44778112;

    t145 = (x677!=((x678+x679)&x680));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x689 = -1;
	volatile int32_t x690 = INT32_MIN;
	volatile uint64_t x691 = 1648363LLU;
	static uint64_t x692 = 1902LLU;

    t146 = (x689!=((x690+x691)&x692));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x693 = 6445U;
	uint16_t x694 = 29946U;
	int8_t x695 = 0;
	static uint8_t x696 = 77U;
	static int32_t t147 = 122864;

    t147 = (x693!=((x694+x695)&x696));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x697 = UINT64_MAX;
	volatile int32_t x698 = INT32_MIN;
	int64_t x699 = -81LL;
	static uint32_t x700 = 2028330973U;

    t148 = (x697!=((x698+x699)&x700));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int16_t x702 = -62;
	int8_t x703 = 9;
	int64_t x704 = INT64_MIN;
	int32_t t149 = 23643;

    t149 = (x701!=((x702+x703)&x704));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint64_t x705 = UINT64_MAX;
	uint8_t x706 = 3U;
	int8_t x707 = INT8_MIN;
	volatile int32_t x708 = INT32_MAX;
	static volatile int32_t t150 = 51521;

    t150 = (x705!=((x706+x707)&x708));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x721 = -92;
	volatile uint8_t x723 = UINT8_MAX;
	static int16_t x724 = INT16_MIN;
	static volatile int32_t t151 = 508117;

    t151 = (x721!=((x722+x723)&x724));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x725 = -1;
	uint64_t x726 = 417908468909LLU;
	int64_t x728 = 1LL;
	static int32_t t152 = -142270;

    t152 = (x725!=((x726+x727)&x728));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint64_t x729 = 556662358096884826LLU;
	uint64_t x730 = 66569845902LLU;
	volatile int64_t x731 = INT64_MAX;
	static int64_t x732 = INT64_MAX;
	volatile int32_t t153 = 653244;

    t153 = (x729!=((x730+x731)&x732));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x733 = 2625U;
	uint32_t x734 = 6U;
	static int64_t x735 = INT64_MIN;
	uint32_t x736 = 6837243U;
	volatile int32_t t154 = -81450691;

    t154 = (x733!=((x734+x735)&x736));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x737 = 7;
	int32_t x739 = 24045549;
	int32_t x740 = INT32_MIN;
	int32_t t155 = -76269;

    t155 = (x737!=((x738+x739)&x740));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int16_t x741 = INT16_MAX;
	static int64_t x742 = INT64_MIN;

    t156 = (x741!=((x742+x743)&x744));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x745 = UINT16_MAX;
	uint64_t x746 = 1654455407LLU;
	int32_t x747 = -1;
	static int8_t x748 = -1;
	static volatile int32_t t157 = 10;

    t157 = (x745!=((x746+x747)&x748));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint64_t x749 = 1854611138LLU;
	int16_t x751 = INT16_MAX;
	int8_t x752 = INT8_MIN;
	int32_t t158 = 507748709;

    t158 = (x749!=((x750+x751)&x752));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x761 = INT8_MIN;
	uint8_t x762 = 13U;

    t159 = (x761!=((x762+x763)&x764));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint16_t x765 = 1085U;
	uint32_t x766 = UINT32_MAX;
	int8_t x768 = -1;
	static volatile int32_t t160 = -75471996;

    t160 = (x765!=((x766+x767)&x768));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x774 = INT16_MAX;
	uint32_t x775 = 288750689U;
	volatile int32_t x776 = -1;

    t161 = (x773!=((x774+x775)&x776));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int32_t x781 = INT32_MIN;
	int16_t x782 = -1;
	volatile uint64_t x783 = 220627LLU;
	int16_t x784 = INT16_MIN;
	volatile int32_t t162 = 9;

    t162 = (x781!=((x782+x783)&x784));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x785 = 1260387LL;
	static int64_t x787 = -40314582587LL;
	volatile int32_t t163 = -217;

    t163 = (x785!=((x786+x787)&x788));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile uint8_t x789 = 11U;
	int64_t x792 = INT64_MIN;
	int32_t t164 = 1783;

    t164 = (x789!=((x790+x791)&x792));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x794 = 704633;
	int64_t x795 = 13LL;
	int8_t x796 = -1;

    t165 = (x793!=((x794+x795)&x796));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x797 = INT64_MIN;
	volatile int32_t x798 = 3819513;
	int8_t x799 = INT8_MAX;

    t166 = (x797!=((x798+x799)&x800));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x801 = -4;
	static volatile int16_t x802 = INT16_MAX;
	static volatile uint64_t x803 = UINT64_MAX;
	int32_t x804 = 24;

    t167 = (x801!=((x802+x803)&x804));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x809 = INT8_MAX;
	static volatile uint8_t x810 = 0U;
	static int64_t x812 = -1LL;
	int32_t t168 = 3978;

    t168 = (x809!=((x810+x811)&x812));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x817 = 1;
	uint32_t x818 = UINT32_MAX;
	static volatile int16_t x819 = 207;
	int32_t t169 = 230213570;

    t169 = (x817!=((x818+x819)&x820));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint32_t x821 = 74U;
	int16_t x822 = INT16_MAX;
	int16_t x823 = INT16_MAX;
	int32_t x824 = INT32_MAX;
	int32_t t170 = 175349;

    t170 = (x821!=((x822+x823)&x824));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x825 = INT16_MIN;
	volatile uint8_t x826 = 3U;
	int8_t x827 = -1;
	uint16_t x828 = UINT16_MAX;
	static volatile int32_t t171 = 341098;

    t171 = (x825!=((x826+x827)&x828));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x829 = INT64_MIN;
	static uint64_t x830 = UINT64_MAX;
	int8_t x831 = INT8_MIN;
	int16_t x832 = -1;
	static int32_t t172 = -2;

    t172 = (x829!=((x830+x831)&x832));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x835 = INT64_MAX;
	int16_t x836 = -124;
	volatile int32_t t173 = 11357067;

    t173 = (x833!=((x834+x835)&x836));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x837 = 1;
	int16_t x838 = -12495;
	static uint64_t x840 = 5524139094123772LLU;

    t174 = (x837!=((x838+x839)&x840));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint16_t x841 = UINT16_MAX;
	int64_t x842 = INT64_MAX;
	int16_t x844 = INT16_MAX;

    t175 = (x841!=((x842+x843)&x844));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x845 = UINT64_MAX;
	int16_t x846 = INT16_MIN;
	uint64_t x847 = 6135LLU;
	volatile uint64_t x848 = 134360495682LLU;

    t176 = (x845!=((x846+x847)&x848));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x849 = -34;
	static volatile int16_t x850 = INT16_MAX;
	uint8_t x851 = 60U;
	int32_t x852 = -1;
	static volatile int32_t t177 = -805301;

    t177 = (x849!=((x850+x851)&x852));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x857 = INT64_MIN;
	int16_t x858 = -119;
	int8_t x859 = -1;
	volatile int32_t t178 = -24306987;

    t178 = (x857!=((x858+x859)&x860));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x861 = INT8_MIN;
	uint8_t x863 = UINT8_MAX;
	int8_t x864 = INT8_MIN;
	static volatile int32_t t179 = 3;

    t179 = (x861!=((x862+x863)&x864));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x865 = INT64_MIN;
	int8_t x866 = -1;

    t180 = (x865!=((x866+x867)&x868));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x869 = -1LL;
	int32_t x870 = -3;
	int64_t x871 = 175424654709946926LL;
	volatile int8_t x872 = -1;

    t181 = (x869!=((x870+x871)&x872));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int16_t x873 = INT16_MIN;
	volatile int32_t x876 = 44857876;
	volatile int32_t t182 = 0;

    t182 = (x873!=((x874+x875)&x876));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int32_t x878 = INT32_MIN;
	static volatile uint64_t x879 = 2543887LLU;
	int8_t x880 = INT8_MIN;
	volatile int32_t t183 = -1;

    t183 = (x877!=((x878+x879)&x880));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x886 = UINT64_MAX;
	static int16_t x887 = INT16_MIN;
	int16_t x888 = -14;
	int32_t t184 = -1247;

    t184 = (x885!=((x886+x887)&x888));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x889 = -1;
	volatile int64_t x890 = -57917045LL;
	static uint32_t x892 = UINT32_MAX;
	volatile int32_t t185 = -19624;

    t185 = (x889!=((x890+x891)&x892));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x897 = INT64_MAX;
	int64_t x898 = -15526LL;
	int16_t x899 = 2;
	int64_t x900 = INT64_MIN;
	int32_t t186 = -12184035;

    t186 = (x897!=((x898+x899)&x900));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x901 = 1638U;
	uint16_t x902 = UINT16_MAX;
	static volatile int32_t x903 = INT32_MIN;
	int64_t x904 = INT64_MAX;
	static volatile int32_t t187 = 39178844;

    t187 = (x901!=((x902+x903)&x904));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x905 = -427;
	volatile int64_t x906 = 112LL;
	int64_t x908 = -1LL;
	int32_t t188 = -26;

    t188 = (x905!=((x906+x907)&x908));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x909 = INT32_MIN;
	int64_t x910 = INT64_MIN;
	uint8_t x911 = 1U;
	volatile int32_t t189 = 22091230;

    t189 = (x909!=((x910+x911)&x912));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x913 = INT32_MAX;
	volatile int32_t x914 = -1;
	uint8_t x915 = 30U;
	int32_t t190 = -32330493;

    t190 = (x913!=((x914+x915)&x916));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x921 = INT16_MIN;
	int8_t x922 = -28;
	uint16_t x923 = UINT16_MAX;
	uint16_t x924 = 87U;

    t191 = (x921!=((x922+x923)&x924));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x925 = -1;
	int32_t x928 = 6993290;
	int32_t t192 = 78679;

    t192 = (x925!=((x926+x927)&x928));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint16_t x929 = 1070U;
	int16_t x930 = -1;
	static int64_t x931 = -1LL;
	int64_t x932 = INT64_MIN;

    t193 = (x929!=((x930+x931)&x932));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x933 = INT16_MIN;
	volatile int64_t x934 = -331LL;
	uint16_t x935 = UINT16_MAX;
	static uint16_t x936 = UINT16_MAX;

    t194 = (x933!=((x934+x935)&x936));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int32_t x939 = -3000441;
	volatile uint32_t x940 = 105U;
	int32_t t195 = -1;

    t195 = (x937!=((x938+x939)&x940));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x941 = INT8_MIN;
	int8_t x942 = INT8_MAX;
	volatile int8_t x943 = -1;
	int32_t x944 = -1;

    t196 = (x941!=((x942+x943)&x944));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x945 = INT8_MAX;
	int8_t x946 = -1;
	volatile int8_t x947 = INT8_MIN;
	uint8_t x948 = 0U;
	int32_t t197 = -880;

    t197 = (x945!=((x946+x947)&x948));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x949 = -209;
	int64_t x950 = -783004149886222210LL;
	uint64_t x952 = 1572484LLU;
	volatile int32_t t198 = -3890901;

    t198 = (x949!=((x950+x951)&x952));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int32_t x953 = -62526;
	int16_t x955 = -1;
	int8_t x956 = INT8_MIN;
	int32_t t199 = -2;

    t199 = (x953!=((x954+x955)&x956));

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

