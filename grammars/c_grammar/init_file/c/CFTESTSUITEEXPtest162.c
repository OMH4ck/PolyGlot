
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

int8_t x2 = INT8_MAX;
int64_t x3 = -1LL;
uint64_t x4 = 242LLU;
static int8_t x8 = 0;
int32_t x9 = 17;
int32_t x11 = -37;
int32_t x18 = -8594142;
volatile uint64_t x19 = 3225384819173346835LLU;
volatile int64_t x20 = INT64_MIN;
int64_t x25 = INT64_MIN;
static uint32_t x30 = 87567U;
volatile int32_t t9 = 22028;
uint8_t x45 = 9U;
static int8_t x48 = INT8_MIN;
static int32_t t11 = -3;
int32_t t12 = 14248912;
int32_t x65 = INT32_MAX;
uint32_t x71 = UINT32_MAX;
uint64_t x75 = UINT64_MAX;
uint32_t x77 = 144U;
int32_t t18 = 19;
static volatile uint64_t x87 = 68897412LLU;
static volatile int64_t x104 = INT64_MAX;
int8_t x106 = -1;
int64_t x116 = INT64_MIN;
static int32_t t25 = 182566698;
int32_t x122 = INT32_MIN;
int32_t x123 = INT32_MAX;
static uint32_t x124 = 308767U;
volatile int8_t x128 = INT8_MIN;
static volatile int32_t t27 = -716;
uint64_t x134 = 3657210333LLU;
volatile int8_t x136 = -1;
volatile int32_t t29 = 471739853;
int64_t x137 = INT64_MAX;
int32_t x139 = -335;
int32_t t30 = -110869321;
int32_t t32 = 14889;
static uint8_t x157 = 33U;
int8_t x167 = -1;
int64_t x170 = INT64_MIN;
int64_t x198 = INT64_MIN;
uint64_t x199 = 1375848LLU;
uint32_t x207 = 2488U;
volatile uint64_t x209 = 5922448081LLU;
uint32_t x210 = 19851U;
static int32_t x212 = -9;
int32_t t45 = -16382;
volatile uint64_t x213 = UINT64_MAX;
int32_t x214 = INT32_MIN;
int64_t x239 = INT64_MIN;
volatile int32_t t52 = 17;
int64_t x241 = INT64_MIN;
volatile uint8_t x242 = 26U;
static int32_t x252 = 121106622;
uint16_t x255 = 6552U;
int32_t t56 = -1;
int32_t x258 = INT32_MAX;
volatile int8_t x272 = INT8_MIN;
int32_t t59 = -4759892;
int8_t x273 = -1;
uint64_t x275 = UINT64_MAX;
int32_t x286 = INT32_MIN;
uint8_t x295 = UINT8_MAX;
static uint16_t x297 = UINT16_MAX;
int8_t x298 = INT8_MAX;
int8_t x305 = -1;
uint16_t x307 = 148U;
int16_t x308 = -57;
int16_t x311 = -4417;
uint32_t x319 = UINT32_MAX;
int32_t x321 = INT32_MIN;
static int32_t x324 = 362;
int32_t x333 = -1;
uint16_t x335 = 219U;
volatile int32_t x336 = INT32_MIN;
volatile int64_t x337 = INT64_MIN;
static int16_t x338 = -24;
int32_t t76 = -32977750;
uint64_t x357 = 738LLU;
int16_t x361 = INT16_MAX;
static int64_t x362 = INT64_MIN;
int32_t t82 = -1941;
uint16_t x377 = 699U;
volatile int32_t t86 = -538584;
uint32_t x394 = UINT32_MAX;
static int64_t x395 = INT64_MIN;
int32_t x399 = INT32_MAX;
int32_t x414 = 2;
int64_t x416 = INT64_MIN;
uint16_t x422 = UINT16_MAX;
static volatile int32_t t95 = 7700;
volatile int64_t x429 = -8LL;
uint32_t x443 = UINT32_MAX;
int16_t x444 = INT16_MAX;
volatile int16_t x445 = -1;
uint16_t x446 = 23991U;
uint64_t x449 = UINT64_MAX;
static int8_t x451 = -1;
volatile uint32_t x459 = 0U;
int16_t x460 = -1;
int8_t x470 = INT8_MAX;
uint8_t x471 = UINT8_MAX;
int64_t x478 = INT64_MIN;
static int64_t x479 = INT64_MAX;
static int64_t x480 = -22132055469LL;
int8_t x481 = INT8_MIN;
static int8_t x486 = INT8_MAX;
volatile int32_t t108 = 5;
volatile int16_t x493 = 7617;
int32_t x501 = INT32_MAX;
uint64_t x506 = 103642491LLU;
int16_t x509 = -273;
static int64_t x511 = INT64_MIN;
volatile int16_t x514 = -1;
int16_t x515 = -2;
volatile int16_t x518 = INT16_MAX;
int32_t x521 = INT32_MIN;
int64_t x527 = -1LL;
int32_t t119 = -1;
volatile uint16_t x537 = 18U;
static uint64_t x541 = 1LLU;
int8_t x546 = 18;
volatile uint32_t x547 = UINT32_MAX;
uint32_t x558 = 98U;
uint32_t x563 = 64U;
uint8_t x567 = UINT8_MAX;
int64_t x574 = INT64_MAX;
static int32_t x581 = -1;
static volatile int16_t x584 = 2;
static int8_t x596 = -1;
volatile int64_t x601 = INT64_MIN;
uint16_t x602 = 3U;
static uint64_t x604 = 8059665252599LLU;
volatile int32_t t135 = -7688;
volatile uint16_t x614 = 3U;
static int32_t t139 = -3;
uint32_t x626 = UINT32_MAX;
int16_t x628 = INT16_MIN;
int64_t x636 = INT64_MIN;
static int64_t x639 = INT64_MIN;
volatile uint32_t x641 = UINT32_MAX;
static int16_t x644 = 0;
volatile int32_t t145 = 3298;
uint64_t x654 = 12LLU;
static int32_t x661 = INT32_MIN;
volatile uint16_t x663 = 3U;
volatile int32_t t149 = 949370;
uint8_t x669 = UINT8_MAX;
uint64_t x670 = 115LLU;
volatile uint64_t x676 = 38693315189LLU;
int32_t x677 = -727191745;
int32_t x685 = -1;
volatile int8_t x686 = -1;
int16_t x713 = 1681;
int32_t t160 = -40052;
int16_t x721 = 6;
volatile int64_t x735 = INT64_MIN;
int32_t x738 = 4218;
uint32_t x739 = 3U;
uint32_t x756 = 0U;
uint64_t x763 = 3985565LLU;
int16_t x764 = 6;
uint64_t x767 = UINT64_MAX;
volatile int32_t t170 = 90;
int32_t x771 = INT32_MIN;
int16_t x772 = 3;
int32_t x773 = 0;
int16_t x775 = INT16_MIN;
static int8_t x776 = 2;
volatile int64_t x782 = INT64_MIN;
volatile int32_t t174 = -20897259;
int64_t x791 = -336LL;
volatile int32_t t177 = -1;
int16_t x807 = INT16_MIN;
int32_t t179 = 0;
volatile int16_t x812 = INT16_MAX;
int64_t x828 = -1LL;
static uint16_t x829 = 1419U;
uint16_t x830 = 945U;
volatile int32_t x834 = 7897;
volatile int8_t x836 = -1;
int8_t x841 = INT8_MAX;
volatile int16_t x842 = 0;
static volatile int32_t t187 = -19;
uint16_t x845 = 10U;
int32_t x846 = 4700290;
uint64_t x853 = 17LLU;
volatile int32_t t190 = 36;
uint8_t x862 = 25U;
volatile int16_t x863 = INT16_MAX;
volatile int64_t x871 = -1LL;
volatile int32_t t193 = 0;
uint16_t x875 = 1U;
int32_t x876 = INT32_MIN;
uint64_t x881 = 3858651658110LLU;
int8_t x882 = -1;
static int64_t x903 = -39LL;
int64_t x910 = 1725422347523160LL;


void f0(void) {
    	static int16_t x1 = INT16_MIN;
	volatile int32_t t0 = 23460819;

    t0 = (x1==((x2+x3)&x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MIN;
	uint8_t x6 = 1U;
	static int16_t x7 = -9033;
	volatile int32_t t1 = 22899256;

    t1 = (x5==((x6+x7)&x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x10 = 10642256360589LL;
	int16_t x12 = INT16_MAX;
	static int32_t t2 = -69;

    t2 = (x9==((x10+x11)&x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint32_t x13 = UINT32_MAX;
	uint64_t x14 = UINT64_MAX;
	uint16_t x15 = 4U;
	int16_t x16 = INT16_MAX;
	int32_t t3 = -2829;

    t3 = (x13==((x14+x15)&x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = UINT64_MAX;
	int32_t t4 = -5;

    t4 = (x17==((x18+x19)&x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = -1;
	int32_t x22 = -1;
	uint8_t x23 = UINT8_MAX;
	int16_t x24 = 1;
	int32_t t5 = 3090438;

    t5 = (x21==((x22+x23)&x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x26 = 12U;
	int16_t x27 = INT16_MIN;
	int16_t x28 = INT16_MIN;
	int32_t t6 = 25337;

    t6 = (x25==((x26+x27)&x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x29 = -1;
	int64_t x31 = -1LL;
	uint32_t x32 = UINT32_MAX;
	static int32_t t7 = -52;

    t7 = (x29==((x30+x31)&x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = INT32_MIN;
	int64_t x34 = INT64_MIN;
	uint64_t x35 = 12LLU;
	uint8_t x36 = 1U;
	volatile int32_t t8 = 814553067;

    t8 = (x33==((x34+x35)&x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x37 = UINT8_MAX;
	uint64_t x38 = 14348LLU;
	static uint8_t x39 = 3U;
	int64_t x40 = INT64_MIN;

    t9 = (x37==((x38+x39)&x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x41 = UINT8_MAX;
	uint32_t x42 = 893576671U;
	int64_t x43 = INT64_MIN;
	volatile int8_t x44 = INT8_MIN;
	volatile int32_t t10 = -157403887;

    t10 = (x41==((x42+x43)&x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x46 = INT16_MIN;
	volatile int16_t x47 = -1466;

    t11 = (x45==((x46+x47)&x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x49 = INT16_MIN;
	static uint64_t x50 = 85866742LLU;
	static int32_t x51 = -147;
	int16_t x52 = 1;

    t12 = (x49==((x50+x51)&x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x57 = -4;
	static uint32_t x58 = 6958953U;
	int16_t x59 = -12;
	uint32_t x60 = 10575U;
	int32_t t13 = -151;

    t13 = (x57==((x58+x59)&x60));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint16_t x61 = 0U;
	static int8_t x62 = INT8_MIN;
	static volatile int8_t x63 = INT8_MIN;
	int16_t x64 = INT16_MIN;
	int32_t t14 = -690;

    t14 = (x61==((x62+x63)&x64));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x66 = UINT32_MAX;
	int8_t x67 = -18;
	static int8_t x68 = -20;
	int32_t t15 = -7181670;

    t15 = (x65==((x66+x67)&x68));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x69 = UINT8_MAX;
	static int8_t x70 = INT8_MIN;
	static int64_t x72 = INT64_MIN;
	int32_t t16 = 370202097;

    t16 = (x69==((x70+x71)&x72));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x73 = -1LL;
	int16_t x74 = INT16_MIN;
	int64_t x76 = 1649505792535464LL;
	int32_t t17 = 11810;

    t17 = (x73==((x74+x75)&x76));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x78 = -706;
	volatile uint16_t x79 = 26337U;
	volatile uint16_t x80 = UINT16_MAX;

    t18 = (x77==((x78+x79)&x80));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x85 = INT8_MIN;
	volatile int64_t x86 = INT64_MIN;
	uint8_t x88 = UINT8_MAX;
	volatile int32_t t19 = 0;

    t19 = (x85==((x86+x87)&x88));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x93 = -1LL;
	static int32_t x94 = INT32_MIN;
	static volatile int64_t x95 = -561874762704126LL;
	int32_t x96 = INT32_MIN;
	int32_t t20 = -13171863;

    t20 = (x93==((x94+x95)&x96));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x97 = 4724842;
	uint64_t x98 = 7126824LLU;
	volatile int16_t x99 = INT16_MIN;
	static int32_t x100 = -128025489;
	int32_t t21 = 1;

    t21 = (x97==((x98+x99)&x100));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x101 = 222698144LLU;
	int32_t x102 = INT32_MAX;
	static int8_t x103 = INT8_MIN;
	volatile int32_t t22 = -50;

    t22 = (x101==((x102+x103)&x104));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x105 = 5088;
	static uint64_t x107 = UINT64_MAX;
	int64_t x108 = -1LL;
	int32_t t23 = 35683435;

    t23 = (x105==((x106+x107)&x108));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x113 = INT16_MIN;
	volatile int8_t x114 = INT8_MIN;
	int8_t x115 = -1;
	int32_t t24 = 10851483;

    t24 = (x113==((x114+x115)&x116));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint32_t x117 = UINT32_MAX;
	int16_t x118 = INT16_MIN;
	static uint16_t x119 = 20U;
	volatile uint64_t x120 = 62871406373432895LLU;

    t25 = (x117==((x118+x119)&x120));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x121 = 1U;
	static int32_t t26 = -1;

    t26 = (x121==((x122+x123)&x124));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile uint16_t x125 = UINT16_MAX;
	uint64_t x126 = 21694590664248010LLU;
	int32_t x127 = INT32_MIN;

    t27 = (x125==((x126+x127)&x128));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x129 = 53U;
	volatile int8_t x130 = -13;
	int8_t x131 = -1;
	int64_t x132 = -1LL;
	volatile int32_t t28 = 0;

    t28 = (x129==((x130+x131)&x132));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int16_t x133 = 16;
	uint16_t x135 = 118U;

    t29 = (x133==((x134+x135)&x136));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint16_t x138 = UINT16_MAX;
	static uint8_t x140 = 1U;

    t30 = (x137==((x138+x139)&x140));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x141 = INT16_MIN;
	static int8_t x142 = INT8_MAX;
	int32_t x143 = 81683708;
	uint32_t x144 = UINT32_MAX;
	static volatile int32_t t31 = 4089568;

    t31 = (x141==((x142+x143)&x144));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x145 = UINT16_MAX;
	static int64_t x146 = -16823LL;
	int64_t x147 = INT64_MAX;
	volatile int16_t x148 = INT16_MIN;

    t32 = (x145==((x146+x147)&x148));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x153 = INT16_MIN;
	uint64_t x154 = UINT64_MAX;
	int16_t x155 = INT16_MIN;
	int16_t x156 = INT16_MIN;
	volatile int32_t t33 = 350185183;

    t33 = (x153==((x154+x155)&x156));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x158 = 4134U;
	uint16_t x159 = 87U;
	uint8_t x160 = 6U;
	int32_t t34 = -765316322;

    t34 = (x157==((x158+x159)&x160));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x165 = 0;
	int64_t x166 = -1LL;
	int16_t x168 = INT16_MIN;
	volatile int32_t t35 = 23253;

    t35 = (x165==((x166+x167)&x168));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x169 = INT8_MIN;
	static uint16_t x171 = 3831U;
	volatile int32_t x172 = INT32_MIN;
	static int32_t t36 = 4;

    t36 = (x169==((x170+x171)&x172));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint16_t x173 = 14U;
	uint16_t x174 = UINT16_MAX;
	volatile int8_t x175 = INT8_MAX;
	int32_t x176 = INT32_MIN;
	static volatile int32_t t37 = -26834;

    t37 = (x173==((x174+x175)&x176));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x177 = 856U;
	uint32_t x178 = 452955U;
	int16_t x179 = INT16_MAX;
	volatile int32_t x180 = -440207;
	static int32_t t38 = 697914;

    t38 = (x177==((x178+x179)&x180));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x181 = -1;
	uint64_t x182 = 27409LLU;
	int64_t x183 = INT64_MIN;
	int8_t x184 = INT8_MAX;
	int32_t t39 = -35129;

    t39 = (x181==((x182+x183)&x184));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x185 = INT32_MAX;
	int8_t x186 = -1;
	int8_t x187 = INT8_MIN;
	int16_t x188 = INT16_MIN;
	volatile int32_t t40 = -503;

    t40 = (x185==((x186+x187)&x188));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x189 = -1;
	uint32_t x190 = UINT32_MAX;
	int16_t x191 = INT16_MIN;
	int16_t x192 = 4;
	int32_t t41 = -224;

    t41 = (x189==((x190+x191)&x192));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x193 = INT64_MIN;
	int16_t x194 = -405;
	volatile uint32_t x195 = 2852615U;
	uint16_t x196 = 741U;
	volatile int32_t t42 = -29247581;

    t42 = (x193==((x194+x195)&x196));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x197 = -963LL;
	uint32_t x200 = UINT32_MAX;
	int32_t t43 = 0;

    t43 = (x197==((x198+x199)&x200));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x205 = INT8_MIN;
	int16_t x206 = INT16_MAX;
	int8_t x208 = -1;
	volatile int32_t t44 = 11827937;

    t44 = (x205==((x206+x207)&x208));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int32_t x211 = -1063;

    t45 = (x209==((x210+x211)&x212));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x215 = 11;
	uint8_t x216 = UINT8_MAX;
	volatile int32_t t46 = -1370;

    t46 = (x213==((x214+x215)&x216));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x217 = -1;
	static int32_t x218 = INT32_MIN;
	volatile uint8_t x219 = UINT8_MAX;
	static int8_t x220 = -1;
	static int32_t t47 = 7707308;

    t47 = (x217==((x218+x219)&x220));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x221 = UINT32_MAX;
	volatile uint16_t x222 = 32U;
	int32_t x223 = -1;
	int32_t x224 = -9;
	int32_t t48 = 1;

    t48 = (x221==((x222+x223)&x224));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile uint32_t x225 = 61006U;
	uint8_t x226 = 41U;
	static uint32_t x227 = 124647425U;
	int8_t x228 = INT8_MIN;
	int32_t t49 = -11;

    t49 = (x225==((x226+x227)&x228));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x229 = UINT16_MAX;
	int8_t x230 = 0;
	volatile int32_t x231 = INT32_MIN;
	int64_t x232 = 2084685788LL;
	volatile int32_t t50 = 0;

    t50 = (x229==((x230+x231)&x232));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x233 = -11962;
	static volatile uint32_t x234 = 3954U;
	int64_t x235 = -2590014176LL;
	static int64_t x236 = -1LL;
	volatile int32_t t51 = 491420;

    t51 = (x233==((x234+x235)&x236));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x237 = INT64_MIN;
	static int16_t x238 = 395;
	uint64_t x240 = 388897358LLU;

    t52 = (x237==((x238+x239)&x240));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x243 = 0;
	int64_t x244 = -1LL;
	volatile int32_t t53 = 23096730;

    t53 = (x241==((x242+x243)&x244));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint32_t x245 = 1888U;
	static int32_t x246 = 24776945;
	int8_t x247 = 0;
	static int32_t x248 = INT32_MIN;
	volatile int32_t t54 = -45513;

    t54 = (x245==((x246+x247)&x248));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x249 = UINT64_MAX;
	uint8_t x250 = UINT8_MAX;
	volatile uint32_t x251 = 50U;
	int32_t t55 = -304877;

    t55 = (x249==((x250+x251)&x252));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x253 = -160412057172364LL;
	static int8_t x254 = INT8_MIN;
	static uint8_t x256 = UINT8_MAX;

    t56 = (x253==((x254+x255)&x256));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x257 = INT32_MAX;
	static int32_t x259 = INT32_MIN;
	uint64_t x260 = 14LLU;
	int32_t t57 = -2;

    t57 = (x257==((x258+x259)&x260));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x265 = 3;
	int8_t x266 = INT8_MIN;
	volatile uint32_t x267 = 55731865U;
	volatile uint64_t x268 = UINT64_MAX;
	int32_t t58 = 12721218;

    t58 = (x265==((x266+x267)&x268));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x269 = -1;
	static int16_t x270 = -44;
	int8_t x271 = -1;

    t59 = (x269==((x270+x271)&x272));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x274 = 8U;
	int64_t x276 = 8133175432LL;
	int32_t t60 = 1;

    t60 = (x273==((x274+x275)&x276));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x281 = INT64_MIN;
	static uint64_t x282 = 54101920571973LLU;
	int16_t x283 = -1;
	volatile int32_t x284 = -1878832;
	int32_t t61 = -998;

    t61 = (x281==((x282+x283)&x284));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x285 = UINT16_MAX;
	int64_t x287 = -1LL;
	int32_t x288 = INT32_MAX;
	static int32_t t62 = -27522016;

    t62 = (x285==((x286+x287)&x288));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x289 = UINT8_MAX;
	volatile int64_t x290 = INT64_MIN;
	static int64_t x291 = INT64_MAX;
	int32_t x292 = 2006;
	volatile int32_t t63 = 12048477;

    t63 = (x289==((x290+x291)&x292));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x293 = 11398U;
	volatile uint32_t x294 = UINT32_MAX;
	int8_t x296 = -1;
	volatile int32_t t64 = 805569;

    t64 = (x293==((x294+x295)&x296));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x299 = UINT16_MAX;
	int32_t x300 = -1;
	static volatile int32_t t65 = 54211;

    t65 = (x297==((x298+x299)&x300));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x301 = INT8_MAX;
	uint64_t x302 = 11LLU;
	int32_t x303 = -1;
	static int32_t x304 = -2;
	int32_t t66 = 303;

    t66 = (x301==((x302+x303)&x304));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x306 = -1;
	volatile int32_t t67 = 52534460;

    t67 = (x305==((x306+x307)&x308));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x309 = -1LL;
	uint32_t x310 = 86510705U;
	volatile uint32_t x312 = UINT32_MAX;
	int32_t t68 = 308;

    t68 = (x309==((x310+x311)&x312));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint32_t x313 = UINT32_MAX;
	volatile int64_t x314 = -1LL;
	int8_t x315 = 29;
	uint8_t x316 = 1U;
	volatile int32_t t69 = 10733755;

    t69 = (x313==((x314+x315)&x316));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int8_t x317 = -1;
	int8_t x318 = 57;
	volatile int32_t x320 = -1;
	int32_t t70 = -22251;

    t70 = (x317==((x318+x319)&x320));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x322 = 23;
	static uint8_t x323 = UINT8_MAX;
	volatile int32_t t71 = 493957716;

    t71 = (x321==((x322+x323)&x324));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x325 = -1;
	static int32_t x326 = INT32_MIN;
	uint8_t x327 = 106U;
	static volatile int64_t x328 = INT64_MIN;
	static volatile int32_t t72 = -353;

    t72 = (x325==((x326+x327)&x328));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x334 = INT8_MAX;
	int32_t t73 = -2026794;

    t73 = (x333==((x334+x335)&x336));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x339 = INT8_MAX;
	volatile uint64_t x340 = 5720424LLU;
	volatile int32_t t74 = -107;

    t74 = (x337==((x338+x339)&x340));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x341 = -6792594255LL;
	uint16_t x342 = 13023U;
	volatile uint64_t x343 = 413380LLU;
	int8_t x344 = INT8_MIN;
	volatile int32_t t75 = 798888637;

    t75 = (x341==((x342+x343)&x344));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x345 = -1;
	uint64_t x346 = UINT64_MAX;
	int8_t x347 = -5;
	int64_t x348 = 4017229685720735LL;

    t76 = (x345==((x346+x347)&x348));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x349 = INT64_MIN;
	uint32_t x350 = 1481U;
	int8_t x351 = -1;
	static uint8_t x352 = UINT8_MAX;
	volatile int32_t t77 = 8259611;

    t77 = (x349==((x350+x351)&x352));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x358 = INT8_MAX;
	int64_t x359 = -1LL;
	static int64_t x360 = -1851LL;
	static volatile int32_t t78 = -7394;

    t78 = (x357==((x358+x359)&x360));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x363 = 7241322U;
	int8_t x364 = -1;
	static int32_t t79 = 247;

    t79 = (x361==((x362+x363)&x364));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x365 = INT16_MIN;
	int32_t x366 = -4024248;
	static int64_t x367 = -77810053534LL;
	int16_t x368 = 257;
	volatile int32_t t80 = 10;

    t80 = (x365==((x366+x367)&x368));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x369 = UINT64_MAX;
	volatile uint32_t x370 = 22826023U;
	int32_t x371 = -1;
	volatile uint16_t x372 = UINT16_MAX;
	volatile int32_t t81 = 42511015;

    t81 = (x369==((x370+x371)&x372));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x373 = 0;
	uint8_t x374 = 4U;
	volatile int32_t x375 = INT32_MIN;
	int8_t x376 = -1;

    t82 = (x373==((x374+x375)&x376));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x378 = -1;
	volatile int64_t x379 = -744580526LL;
	static int64_t x380 = -435365103LL;
	volatile int32_t t83 = -44;

    t83 = (x377==((x378+x379)&x380));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x381 = UINT32_MAX;
	uint32_t x382 = UINT32_MAX;
	int64_t x383 = -881LL;
	static volatile int16_t x384 = -1;
	int32_t t84 = 1004;

    t84 = (x381==((x382+x383)&x384));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x385 = 55761507LLU;
	volatile int8_t x386 = INT8_MIN;
	uint8_t x387 = 2U;
	uint32_t x388 = 92362446U;
	int32_t t85 = 1007255454;

    t85 = (x385==((x386+x387)&x388));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x389 = -72;
	static int16_t x390 = 940;
	uint8_t x391 = 74U;
	volatile uint8_t x392 = 4U;

    t86 = (x389==((x390+x391)&x392));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x393 = INT8_MIN;
	int64_t x396 = -1LL;
	int32_t t87 = 0;

    t87 = (x393==((x394+x395)&x396));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x397 = INT64_MIN;
	int64_t x398 = 108670LL;
	volatile int16_t x400 = 5;
	volatile int32_t t88 = 20;

    t88 = (x397==((x398+x399)&x400));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x401 = INT64_MAX;
	uint8_t x402 = UINT8_MAX;
	static int16_t x403 = 663;
	static uint32_t x404 = UINT32_MAX;
	volatile int32_t t89 = -583908;

    t89 = (x401==((x402+x403)&x404));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x405 = -1;
	int16_t x406 = -1;
	volatile uint16_t x407 = 3883U;
	uint16_t x408 = 164U;
	int32_t t90 = 21385;

    t90 = (x405==((x406+x407)&x408));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x409 = INT32_MIN;
	static volatile int16_t x410 = -5;
	static int16_t x411 = 184;
	uint8_t x412 = UINT8_MAX;
	static int32_t t91 = 904439;

    t91 = (x409==((x410+x411)&x412));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x413 = INT16_MAX;
	int8_t x415 = INT8_MAX;
	int32_t t92 = -2815;

    t92 = (x413==((x414+x415)&x416));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x417 = INT16_MIN;
	uint32_t x418 = UINT32_MAX;
	int16_t x419 = -108;
	int32_t x420 = 3223;
	volatile int32_t t93 = -597010971;

    t93 = (x417==((x418+x419)&x420));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x421 = INT32_MIN;
	uint16_t x423 = 7701U;
	int64_t x424 = INT64_MAX;
	volatile int32_t t94 = 295;

    t94 = (x421==((x422+x423)&x424));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x425 = 38;
	volatile int8_t x426 = INT8_MAX;
	int8_t x427 = 23;
	static volatile int32_t x428 = INT32_MIN;

    t95 = (x425==((x426+x427)&x428));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x430 = INT8_MIN;
	int8_t x431 = INT8_MIN;
	uint16_t x432 = 746U;
	volatile int32_t t96 = -6156;

    t96 = (x429==((x430+x431)&x432));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint16_t x437 = 192U;
	static uint64_t x438 = UINT64_MAX;
	int16_t x439 = INT16_MAX;
	volatile int8_t x440 = 15;
	volatile int32_t t97 = 3516;

    t97 = (x437==((x438+x439)&x440));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x441 = UINT8_MAX;
	int32_t x442 = -1;
	int32_t t98 = -393979300;

    t98 = (x441==((x442+x443)&x444));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x447 = INT32_MIN;
	static int16_t x448 = INT16_MIN;
	int32_t t99 = 377;

    t99 = (x445==((x446+x447)&x448));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x450 = UINT64_MAX;
	uint64_t x452 = 906096312514226LLU;
	volatile int32_t t100 = -382;

    t100 = (x449==((x450+x451)&x452));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint16_t x453 = 4U;
	volatile int8_t x454 = -20;
	int32_t x455 = INT32_MAX;
	uint8_t x456 = 78U;
	volatile int32_t t101 = -3;

    t101 = (x453==((x454+x455)&x456));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x457 = INT32_MIN;
	int32_t x458 = -8312670;
	static int32_t t102 = -11;

    t102 = (x457==((x458+x459)&x460));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x461 = UINT32_MAX;
	static uint16_t x462 = 2U;
	static int64_t x463 = INT64_MIN;
	uint8_t x464 = 0U;
	int32_t t103 = -2226;

    t103 = (x461==((x462+x463)&x464));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x469 = INT8_MIN;
	int32_t x472 = INT32_MIN;
	volatile int32_t t104 = 44763;

    t104 = (x469==((x470+x471)&x472));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x473 = 2U;
	int32_t x474 = -1;
	int16_t x475 = INT16_MIN;
	int64_t x476 = -6695844207833LL;
	int32_t t105 = 3723;

    t105 = (x473==((x474+x475)&x476));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x477 = INT8_MIN;
	volatile int32_t t106 = 5266152;

    t106 = (x477==((x478+x479)&x480));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int8_t x482 = -1;
	static int32_t x483 = -1;
	int8_t x484 = 4;
	int32_t t107 = -46508;

    t107 = (x481==((x482+x483)&x484));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int32_t x485 = -1;
	uint8_t x487 = 4U;
	volatile uint32_t x488 = 46732U;

    t108 = (x485==((x486+x487)&x488));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x489 = INT64_MAX;
	int32_t x490 = -1;
	int16_t x491 = 0;
	int16_t x492 = INT16_MIN;
	int32_t t109 = 48;

    t109 = (x489==((x490+x491)&x492));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile uint16_t x494 = UINT16_MAX;
	int16_t x495 = 0;
	int16_t x496 = INT16_MAX;
	int32_t t110 = -11330572;

    t110 = (x493==((x494+x495)&x496));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x497 = 26;
	static volatile int8_t x498 = -1;
	uint8_t x499 = 14U;
	uint8_t x500 = 0U;
	volatile int32_t t111 = 347045;

    t111 = (x497==((x498+x499)&x500));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int64_t x502 = INT64_MIN;
	static uint16_t x503 = 1U;
	uint64_t x504 = UINT64_MAX;
	int32_t t112 = -64662;

    t112 = (x501==((x502+x503)&x504));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x505 = -256154762;
	int32_t x507 = -1570;
	uint64_t x508 = 0LLU;
	volatile int32_t t113 = -329;

    t113 = (x505==((x506+x507)&x508));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint16_t x510 = 846U;
	volatile int8_t x512 = -1;
	volatile int32_t t114 = -660664;

    t114 = (x509==((x510+x511)&x512));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x513 = INT16_MIN;
	uint32_t x516 = UINT32_MAX;
	volatile int32_t t115 = -20;

    t115 = (x513==((x514+x515)&x516));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint16_t x517 = 5610U;
	int16_t x519 = INT16_MIN;
	uint32_t x520 = UINT32_MAX;
	volatile int32_t t116 = 0;

    t116 = (x517==((x518+x519)&x520));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x522 = INT8_MIN;
	int8_t x523 = INT8_MAX;
	static int16_t x524 = 2574;
	static volatile int32_t t117 = 1;

    t117 = (x521==((x522+x523)&x524));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x525 = INT64_MIN;
	static int32_t x526 = INT32_MIN;
	int16_t x528 = INT16_MAX;
	int32_t t118 = 685650577;

    t118 = (x525==((x526+x527)&x528));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile int32_t x529 = 11;
	uint64_t x530 = 7742170LLU;
	static int64_t x531 = -1LL;
	static int64_t x532 = INT64_MAX;

    t119 = (x529==((x530+x531)&x532));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x533 = -1;
	uint16_t x534 = UINT16_MAX;
	int16_t x535 = INT16_MIN;
	static volatile int8_t x536 = 15;
	volatile int32_t t120 = 53275;

    t120 = (x533==((x534+x535)&x536));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint8_t x538 = UINT8_MAX;
	uint16_t x539 = UINT16_MAX;
	int8_t x540 = INT8_MAX;
	int32_t t121 = -1;

    t121 = (x537==((x538+x539)&x540));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int32_t x542 = INT32_MIN;
	int64_t x543 = -1LL;
	uint16_t x544 = 2896U;
	volatile int32_t t122 = 122100766;

    t122 = (x541==((x542+x543)&x544));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint8_t x545 = 0U;
	int8_t x548 = 15;
	static int32_t t123 = -1049;

    t123 = (x545==((x546+x547)&x548));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x549 = 1;
	uint16_t x550 = 3872U;
	int32_t x551 = -2777668;
	volatile uint16_t x552 = 7330U;
	int32_t t124 = 37304870;

    t124 = (x549==((x550+x551)&x552));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x553 = -1;
	static uint8_t x554 = 2U;
	static uint64_t x555 = 904016757037LLU;
	uint32_t x556 = 50986U;
	volatile int32_t t125 = -937169688;

    t125 = (x553==((x554+x555)&x556));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x557 = INT32_MIN;
	int8_t x559 = INT8_MIN;
	int16_t x560 = INT16_MIN;
	int32_t t126 = 3854;

    t126 = (x557==((x558+x559)&x560));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x561 = 1031139987665710818LL;
	int16_t x562 = 186;
	uint32_t x564 = 640U;
	int32_t t127 = -1;

    t127 = (x561==((x562+x563)&x564));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile uint8_t x565 = UINT8_MAX;
	int64_t x566 = -1LL;
	int64_t x568 = 92863640891933034LL;
	int32_t t128 = -23;

    t128 = (x565==((x566+x567)&x568));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint64_t x569 = 8160849286535775LLU;
	int32_t x570 = -1;
	int8_t x571 = 16;
	uint32_t x572 = 15150107U;
	volatile int32_t t129 = 0;

    t129 = (x569==((x570+x571)&x572));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x573 = UINT16_MAX;
	static volatile int8_t x575 = -1;
	int64_t x576 = INT64_MIN;
	volatile int32_t t130 = 2384646;

    t130 = (x573==((x574+x575)&x576));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int16_t x582 = 125;
	int8_t x583 = 26;
	volatile int32_t t131 = 5156;

    t131 = (x581==((x582+x583)&x584));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x585 = INT16_MIN;
	int16_t x586 = INT16_MAX;
	int64_t x587 = -1980950LL;
	uint16_t x588 = 204U;
	volatile int32_t t132 = 226005;

    t132 = (x585==((x586+x587)&x588));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x593 = -1LL;
	uint16_t x594 = 584U;
	uint32_t x595 = 131438428U;
	int32_t t133 = -15;

    t133 = (x593==((x594+x595)&x596));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x597 = UINT32_MAX;
	uint8_t x598 = 0U;
	uint64_t x599 = 0LLU;
	int32_t x600 = INT32_MIN;
	volatile int32_t t134 = 4105776;

    t134 = (x597==((x598+x599)&x600));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x603 = -1LL;

    t135 = (x601==((x602+x603)&x604));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x605 = UINT8_MAX;
	int8_t x606 = INT8_MIN;
	uint8_t x607 = 1U;
	volatile int32_t x608 = 6;
	int32_t t136 = -468345955;

    t136 = (x605==((x606+x607)&x608));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x613 = -54;
	int16_t x615 = INT16_MIN;
	uint32_t x616 = 1192542U;
	int32_t t137 = -242;

    t137 = (x613==((x614+x615)&x616));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x617 = INT64_MIN;
	volatile int64_t x618 = -189591919LL;
	volatile int16_t x619 = -1;
	uint8_t x620 = 0U;
	static volatile int32_t t138 = -10351547;

    t138 = (x617==((x618+x619)&x620));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x621 = INT64_MIN;
	int64_t x622 = 1LL;
	int8_t x623 = -1;
	int8_t x624 = INT8_MAX;

    t139 = (x621==((x622+x623)&x624));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x625 = -104407708;
	int16_t x627 = INT16_MIN;
	volatile int32_t t140 = 85;

    t140 = (x625==((x626+x627)&x628));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x629 = 98U;
	uint16_t x630 = UINT16_MAX;
	uint8_t x631 = UINT8_MAX;
	volatile int16_t x632 = INT16_MIN;
	volatile int32_t t141 = 1186273;

    t141 = (x629==((x630+x631)&x632));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x633 = INT64_MAX;
	static int32_t x634 = 3;
	int64_t x635 = INT64_MIN;
	int32_t t142 = 79;

    t142 = (x633==((x634+x635)&x636));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint64_t x637 = 130289218753144LLU;
	int32_t x638 = 51491;
	static int64_t x640 = -1LL;
	int32_t t143 = -427904293;

    t143 = (x637==((x638+x639)&x640));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x642 = INT64_MIN;
	static int32_t x643 = 73862467;
	int32_t t144 = 68880;

    t144 = (x641==((x642+x643)&x644));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int32_t x645 = -1;
	int16_t x646 = INT16_MIN;
	static volatile uint64_t x647 = UINT64_MAX;
	uint16_t x648 = 1274U;

    t145 = (x645==((x646+x647)&x648));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x649 = 7U;
	volatile uint64_t x650 = 48456410255551875LLU;
	volatile int8_t x651 = 4;
	uint64_t x652 = 11478LLU;
	int32_t t146 = -750501645;

    t146 = (x649==((x650+x651)&x652));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint16_t x653 = 788U;
	int64_t x655 = 43430394LL;
	static uint64_t x656 = UINT64_MAX;
	volatile int32_t t147 = 28461;

    t147 = (x653==((x654+x655)&x656));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x657 = INT8_MIN;
	int8_t x658 = INT8_MIN;
	int8_t x659 = INT8_MIN;
	int16_t x660 = INT16_MAX;
	int32_t t148 = -120174973;

    t148 = (x657==((x658+x659)&x660));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int64_t x662 = INT64_MIN;
	uint8_t x664 = 0U;

    t149 = (x661==((x662+x663)&x664));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x671 = 37955LLU;
	static uint32_t x672 = 125812877U;
	volatile int32_t t150 = -2675;

    t150 = (x669==((x670+x671)&x672));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int16_t x673 = -1;
	static int32_t x674 = INT32_MAX;
	volatile int8_t x675 = INT8_MIN;
	int32_t t151 = -64514799;

    t151 = (x673==((x674+x675)&x676));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x678 = 6713U;
	int8_t x679 = -1;
	int8_t x680 = 6;
	volatile int32_t t152 = 1;

    t152 = (x677==((x678+x679)&x680));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x681 = -1;
	static uint32_t x682 = 1859U;
	volatile uint8_t x683 = 5U;
	uint8_t x684 = UINT8_MAX;
	int32_t t153 = -40;

    t153 = (x681==((x682+x683)&x684));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x687 = UINT16_MAX;
	int32_t x688 = -1;
	static volatile int32_t t154 = -31791931;

    t154 = (x685==((x686+x687)&x688));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint64_t x689 = UINT64_MAX;
	static int64_t x690 = INT64_MAX;
	int64_t x691 = INT64_MIN;
	static int64_t x692 = -6797208342991LL;
	volatile int32_t t155 = -210953518;

    t155 = (x689==((x690+x691)&x692));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x693 = 0;
	uint8_t x694 = UINT8_MAX;
	uint32_t x695 = 3U;
	uint8_t x696 = 1U;
	int32_t t156 = -169053799;

    t156 = (x693==((x694+x695)&x696));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x697 = INT16_MIN;
	int16_t x698 = INT16_MIN;
	int16_t x699 = 1871;
	static volatile int64_t x700 = 1611LL;
	int32_t t157 = -263529874;

    t157 = (x697==((x698+x699)&x700));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x701 = INT8_MIN;
	static int16_t x702 = INT16_MIN;
	int8_t x703 = -2;
	static uint8_t x704 = 3U;
	volatile int32_t t158 = 249593445;

    t158 = (x701==((x702+x703)&x704));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int16_t x709 = 2;
	uint8_t x710 = 3U;
	uint8_t x711 = UINT8_MAX;
	int32_t x712 = 16630492;
	int32_t t159 = 56;

    t159 = (x709==((x710+x711)&x712));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint64_t x714 = 6928944LLU;
	volatile int32_t x715 = -1;
	static uint64_t x716 = 1724035970290995LLU;

    t160 = (x713==((x714+x715)&x716));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x717 = INT16_MAX;
	int16_t x718 = 2;
	uint16_t x719 = 1307U;
	volatile uint8_t x720 = 97U;
	int32_t t161 = 77;

    t161 = (x717==((x718+x719)&x720));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x722 = 32034195U;
	uint64_t x723 = 14LLU;
	int8_t x724 = INT8_MIN;
	int32_t t162 = -97917;

    t162 = (x721==((x722+x723)&x724));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x725 = 542389;
	static uint16_t x726 = UINT16_MAX;
	uint8_t x727 = 0U;
	uint64_t x728 = 1LLU;
	static int32_t t163 = 1249;

    t163 = (x725==((x726+x727)&x728));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x729 = INT64_MIN;
	int64_t x730 = 37935854086LL;
	uint8_t x731 = 4U;
	uint16_t x732 = UINT16_MAX;
	static int32_t t164 = 835803088;

    t164 = (x729==((x730+x731)&x732));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x733 = -1;
	volatile int16_t x734 = 1;
	uint64_t x736 = 22854932LLU;
	int32_t t165 = 0;

    t165 = (x733==((x734+x735)&x736));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int32_t x737 = INT32_MIN;
	static uint32_t x740 = 256470472U;
	static volatile int32_t t166 = 497550763;

    t166 = (x737==((x738+x739)&x740));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x741 = -1;
	uint32_t x742 = UINT32_MAX;
	static int32_t x743 = -1;
	static int32_t x744 = INT32_MIN;
	volatile int32_t t167 = 144;

    t167 = (x741==((x742+x743)&x744));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x753 = INT32_MIN;
	int8_t x754 = 6;
	uint32_t x755 = 965625406U;
	int32_t t168 = 0;

    t168 = (x753==((x754+x755)&x756));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x761 = INT32_MIN;
	int32_t x762 = INT32_MAX;
	static volatile int32_t t169 = 3168;

    t169 = (x761==((x762+x763)&x764));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x765 = 135U;
	int8_t x766 = -1;
	int32_t x768 = INT32_MIN;

    t170 = (x765==((x766+x767)&x768));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x769 = 1405LL;
	uint16_t x770 = UINT16_MAX;
	int32_t t171 = -2197;

    t171 = (x769==((x770+x771)&x772));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x774 = 1585268766U;
	int32_t t172 = -3126;

    t172 = (x773==((x774+x775)&x776));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x777 = INT8_MAX;
	int16_t x778 = INT16_MAX;
	int16_t x779 = INT16_MIN;
	static volatile int8_t x780 = -1;
	volatile int32_t t173 = -12;

    t173 = (x777==((x778+x779)&x780));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x781 = 2LL;
	uint8_t x783 = 0U;
	int32_t x784 = INT32_MIN;

    t174 = (x781==((x782+x783)&x784));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x785 = INT64_MIN;
	uint64_t x786 = UINT64_MAX;
	static int32_t x787 = 5657;
	uint8_t x788 = 26U;
	int32_t t175 = 3579;

    t175 = (x785==((x786+x787)&x788));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x789 = 10U;
	uint64_t x790 = UINT64_MAX;
	uint16_t x792 = 1U;
	volatile int32_t t176 = -245519194;

    t176 = (x789==((x790+x791)&x792));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x793 = INT8_MIN;
	int16_t x794 = 2368;
	static int64_t x795 = -141317601602LL;
	int32_t x796 = INT32_MIN;

    t177 = (x793==((x794+x795)&x796));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x801 = 0U;
	uint32_t x802 = 973U;
	uint16_t x803 = 2640U;
	volatile int16_t x804 = -928;
	volatile int32_t t178 = -60971791;

    t178 = (x801==((x802+x803)&x804));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x805 = 54;
	uint32_t x806 = 991563351U;
	uint64_t x808 = 20984817078LLU;

    t179 = (x805==((x806+x807)&x808));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x809 = INT32_MIN;
	int32_t x810 = -18001276;
	uint64_t x811 = 209387908280LLU;
	volatile int32_t t180 = -602;

    t180 = (x809==((x810+x811)&x812));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x813 = INT8_MAX;
	int64_t x814 = INT64_MAX;
	volatile int16_t x815 = -1;
	uint8_t x816 = 1U;
	static volatile int32_t t181 = 1;

    t181 = (x813==((x814+x815)&x816));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x817 = -1;
	uint32_t x818 = UINT32_MAX;
	int8_t x819 = INT8_MIN;
	uint16_t x820 = 6085U;
	int32_t t182 = -168;

    t182 = (x817==((x818+x819)&x820));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x825 = 6LLU;
	int16_t x826 = INT16_MAX;
	uint16_t x827 = 1U;
	volatile int32_t t183 = -4;

    t183 = (x825==((x826+x827)&x828));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile uint16_t x831 = 316U;
	static int16_t x832 = 131;
	static int32_t t184 = 6;

    t184 = (x829==((x830+x831)&x832));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int32_t x833 = INT32_MIN;
	uint32_t x835 = UINT32_MAX;
	int32_t t185 = 5;

    t185 = (x833==((x834+x835)&x836));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x837 = 333U;
	volatile int16_t x838 = INT16_MAX;
	uint64_t x839 = 2642934985062033449LLU;
	uint64_t x840 = 1004858846577471LLU;
	volatile int32_t t186 = -187;

    t186 = (x837==((x838+x839)&x840));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x843 = INT32_MAX;
	volatile int32_t x844 = -1;

    t187 = (x841==((x842+x843)&x844));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int32_t x847 = -1;
	uint8_t x848 = UINT8_MAX;
	int32_t t188 = 1;

    t188 = (x845==((x846+x847)&x848));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x849 = -1180215;
	int32_t x850 = INT32_MAX;
	int32_t x851 = -1;
	static int8_t x852 = -1;
	volatile int32_t t189 = 511;

    t189 = (x849==((x850+x851)&x852));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x854 = INT16_MAX;
	static uint8_t x855 = 58U;
	static uint64_t x856 = 1388122753251189807LLU;

    t190 = (x853==((x854+x855)&x856));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint16_t x861 = UINT16_MAX;
	int32_t x864 = INT32_MAX;
	int32_t t191 = -891;

    t191 = (x861==((x862+x863)&x864));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int32_t x865 = -13;
	uint8_t x866 = UINT8_MAX;
	static int32_t x867 = -301085863;
	uint64_t x868 = 2489022412763801LLU;
	volatile int32_t t192 = -366762;

    t192 = (x865==((x866+x867)&x868));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int8_t x869 = INT8_MIN;
	int32_t x870 = INT32_MIN;
	volatile uint32_t x872 = 10U;

    t193 = (x869==((x870+x871)&x872));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x873 = 5830720LLU;
	static uint32_t x874 = 23702926U;
	volatile int32_t t194 = -2140191;

    t194 = (x873==((x874+x875)&x876));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x877 = 3LL;
	static uint32_t x878 = UINT32_MAX;
	uint64_t x879 = 1LLU;
	static int16_t x880 = 2;
	int32_t t195 = -29;

    t195 = (x877==((x878+x879)&x880));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x883 = 0;
	int32_t x884 = -1;
	volatile int32_t t196 = -291147724;

    t196 = (x881==((x882+x883)&x884));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int64_t x897 = 67468816298500255LL;
	static int32_t x898 = INT32_MIN;
	static int64_t x899 = 15612125522LL;
	int8_t x900 = INT8_MIN;
	volatile int32_t t197 = 54650467;

    t197 = (x897==((x898+x899)&x900));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x901 = UINT32_MAX;
	int8_t x902 = INT8_MAX;
	volatile uint64_t x904 = 3036832623573696543LLU;
	static volatile int32_t t198 = -2005191;

    t198 = (x901==((x902+x903)&x904));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x909 = INT16_MIN;
	int8_t x911 = 7;
	int16_t x912 = -1;
	int32_t t199 = -12648004;

    t199 = (x909==((x910+x911)&x912));

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

