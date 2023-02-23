
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

int16_t x4 = INT16_MIN;
static int32_t x6 = INT32_MIN;
int64_t x8 = INT64_MAX;
int8_t x10 = -60;
int32_t x14 = INT32_MIN;
volatile int16_t x18 = INT16_MIN;
uint32_t x19 = UINT32_MAX;
static volatile int32_t t5 = -30881940;
int32_t x30 = INT32_MAX;
int32_t x33 = INT32_MIN;
static int16_t x35 = INT16_MAX;
uint8_t x42 = 105U;
uint16_t x46 = 8U;
volatile uint16_t x47 = UINT16_MAX;
int64_t x48 = INT64_MIN;
int32_t t11 = -1;
static volatile uint32_t x76 = 38687562U;
volatile int32_t t17 = -1007;
int32_t x78 = INT32_MIN;
int32_t x84 = INT32_MIN;
uint16_t x85 = UINT16_MAX;
int32_t t20 = 3;
static int32_t x89 = -1;
int32_t x100 = INT32_MAX;
int8_t x102 = -1;
static uint64_t x104 = 1764394551485571LLU;
volatile int32_t t24 = 31;
int64_t x107 = INT64_MIN;
static uint8_t x108 = UINT8_MAX;
volatile int32_t t25 = -165462533;
uint32_t x115 = UINT32_MAX;
int64_t x116 = 368119364015630619LL;
static volatile int32_t t27 = -5;
static volatile int32_t t28 = 882;
int32_t x122 = -1;
uint8_t x124 = 1U;
uint8_t x126 = UINT8_MAX;
int16_t x129 = INT16_MIN;
int16_t x133 = INT16_MIN;
static uint8_t x135 = 7U;
int32_t x139 = -8;
uint16_t x140 = 127U;
uint64_t x141 = 1865LLU;
int32_t x152 = 12300;
int8_t x162 = INT8_MIN;
int64_t x164 = 9727LL;
uint16_t x167 = 25U;
uint8_t x168 = UINT8_MAX;
volatile uint32_t x170 = 1426229241U;
int8_t x173 = 6;
int8_t x183 = -8;
static volatile uint64_t x192 = UINT64_MAX;
int64_t x199 = -1LL;
uint16_t x208 = 0U;
int32_t x212 = INT32_MIN;
int16_t x214 = 757;
int32_t x216 = -1;
static int64_t x221 = INT64_MAX;
uint64_t x223 = UINT64_MAX;
volatile int8_t x224 = INT8_MIN;
uint8_t x226 = 66U;
int64_t x227 = INT64_MIN;
int64_t x229 = -1LL;
static volatile uint8_t x231 = UINT8_MAX;
uint64_t x233 = 97LLU;
int64_t x234 = INT64_MAX;
volatile int32_t x236 = -12;
int8_t x237 = INT8_MAX;
uint8_t x238 = 0U;
int8_t x240 = -1;
int32_t x243 = INT32_MAX;
int32_t x244 = INT32_MIN;
int32_t t59 = -1;
int8_t x248 = INT8_MAX;
int8_t x266 = INT8_MAX;
int64_t x268 = INT64_MIN;
uint16_t x272 = UINT16_MAX;
int32_t t64 = -4843993;
uint32_t x278 = UINT32_MAX;
int32_t x280 = -1;
int32_t t66 = -1;
int64_t x286 = INT64_MAX;
int16_t x289 = INT16_MAX;
uint32_t x293 = 255736U;
static int32_t t71 = 67495090;
int32_t x311 = -398;
static uint64_t x317 = UINT64_MAX;
int16_t x322 = -11124;
uint32_t x326 = UINT32_MAX;
uint8_t x332 = UINT8_MAX;
volatile int32_t x341 = -13192251;
int8_t x343 = INT8_MIN;
uint16_t x344 = 1U;
int32_t x349 = -719356907;
int64_t x351 = INT64_MIN;
uint16_t x364 = 3762U;
int32_t t84 = -4527104;
volatile int32_t x377 = INT32_MAX;
int32_t t89 = -454723008;
volatile int32_t t90 = 3987;
int8_t x392 = INT8_MIN;
uint8_t x402 = 51U;
int32_t x403 = -17;
static int8_t x404 = 26;
volatile int32_t t94 = 20587532;
int16_t x412 = -1411;
static int64_t x422 = 3369985LL;
int64_t x426 = INT64_MIN;
int32_t t100 = -10356056;
int32_t x432 = -1;
int32_t t104 = -61229441;
uint8_t x447 = 1U;
static int8_t x456 = INT8_MAX;
static volatile uint8_t x457 = UINT8_MAX;
static int32_t t107 = -318157;
uint32_t x474 = 225832U;
int32_t t112 = -128853;
static volatile int64_t x490 = -63294LL;
uint64_t x493 = 1823875603LLU;
uint64_t x496 = UINT64_MAX;
volatile int64_t x507 = INT64_MIN;
static uint16_t x509 = UINT16_MAX;
int32_t x510 = INT32_MAX;
uint8_t x512 = 114U;
uint64_t x514 = UINT64_MAX;
volatile int32_t x523 = 483;
volatile int16_t x524 = 0;
volatile int32_t x533 = INT32_MIN;
volatile int8_t x538 = INT8_MIN;
int32_t t126 = -707;
uint16_t x546 = UINT16_MAX;
static int8_t x552 = -1;
uint8_t x557 = UINT8_MAX;
int8_t x558 = INT8_MAX;
int32_t x562 = -21023890;
static int32_t x564 = -50;
int8_t x570 = 57;
static volatile int16_t x572 = -1;
int16_t x575 = INT16_MAX;
static int64_t x577 = INT64_MIN;
int64_t x582 = INT64_MIN;
int32_t t137 = -423003;
uint16_t x590 = 153U;
int64_t x593 = 1103999650627967001LL;
int32_t t143 = -3;
int16_t x618 = 0;
int8_t x620 = -1;
volatile int64_t x624 = 2205486700LL;
int16_t x625 = INT16_MIN;
static int32_t x633 = -1;
int8_t x637 = INT8_MIN;
uint32_t x638 = 11336194U;
int32_t t149 = 955445;
int16_t x648 = -1;
static int16_t x656 = 129;
static int64_t x660 = INT64_MIN;
int16_t x661 = INT16_MIN;
int8_t x662 = INT8_MIN;
uint16_t x664 = 27U;
volatile uint32_t x668 = 347670U;
int32_t x684 = INT32_MIN;
int32_t x688 = 27605896;
int8_t x689 = 2;
int32_t x690 = -1;
volatile int32_t t163 = -5892;
uint16_t x701 = 4U;
int8_t x708 = -1;
static int32_t x714 = INT32_MIN;
static uint16_t x716 = 130U;
volatile int32_t t169 = -661188243;
int32_t t170 = 2305;
int16_t x727 = INT16_MIN;
volatile int16_t x730 = INT16_MAX;
uint8_t x736 = 14U;
volatile int32_t t173 = 880;
volatile int32_t t175 = -30;
int64_t x748 = -1LL;
uint8_t x749 = 55U;
volatile int32_t t178 = -74;
static uint16_t x764 = UINT16_MAX;
int32_t t180 = 101;
static int8_t x777 = INT8_MAX;
static uint8_t x778 = 1U;
volatile int32_t x779 = INT32_MAX;
uint8_t x781 = 76U;
int32_t t186 = 228965;
int8_t x800 = 0;
uint64_t x801 = 111719719352945100LLU;
int32_t x803 = 42;
static volatile int8_t x824 = 1;
volatile int64_t x825 = -1LL;
volatile int32_t x832 = INT32_MIN;


void f0(void) {
    	int8_t x1 = INT8_MIN;
	static int32_t x2 = INT32_MAX;
	int64_t x3 = 8092407162LL;
	static volatile int32_t t0 = -12848027;

    t0 = (x1==((x2/x3)>x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MIN;
	int64_t x7 = INT64_MIN;
	volatile int32_t t1 = 4384710;

    t1 = (x5==((x6/x7)>x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = 1U;
	int8_t x11 = INT8_MAX;
	int16_t x12 = 3624;
	int32_t t2 = 65610644;

    t2 = (x9==((x10/x11)>x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint64_t x13 = 2975527927413869LLU;
	static volatile uint64_t x15 = 701076348132057LLU;
	int16_t x16 = INT16_MAX;
	int32_t t3 = 23700;

    t3 = (x13==((x14/x15)>x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint64_t x17 = 91552359673177LLU;
	int8_t x20 = 5;
	static int32_t t4 = -15133549;

    t4 = (x17==((x18/x19)>x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x21 = 213960317;
	int16_t x22 = -927;
	static int64_t x23 = -1532947595850LL;
	int8_t x24 = -1;

    t5 = (x21==((x22/x23)>x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint16_t x25 = UINT16_MAX;
	volatile uint32_t x26 = UINT32_MAX;
	uint16_t x27 = 4276U;
	int32_t x28 = INT32_MIN;
	static volatile int32_t t6 = 83587;

    t6 = (x25==((x26/x27)>x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = INT64_MIN;
	volatile int64_t x31 = 3533788LL;
	static uint32_t x32 = UINT32_MAX;
	volatile int32_t t7 = -6746;

    t7 = (x29==((x30/x31)>x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint64_t x34 = 2685785137540LLU;
	volatile uint8_t x36 = 18U;
	volatile int32_t t8 = 140;

    t8 = (x33==((x34/x35)>x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x41 = 266781619LLU;
	static volatile uint32_t x43 = UINT32_MAX;
	int64_t x44 = 5233357382757LL;
	static int32_t t9 = 415;

    t9 = (x41==((x42/x43)>x44));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x45 = 211U;
	volatile int32_t t10 = -3;

    t10 = (x45==((x46/x47)>x48));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x49 = UINT8_MAX;
	volatile int8_t x50 = 1;
	volatile uint8_t x51 = 108U;
	uint8_t x52 = UINT8_MAX;

    t11 = (x49==((x50/x51)>x52));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint8_t x53 = UINT8_MAX;
	static int64_t x54 = -1LL;
	int64_t x55 = INT64_MAX;
	int64_t x56 = 41846637689369958LL;
	int32_t t12 = -367509;

    t12 = (x53==((x54/x55)>x56));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x57 = 0;
	static volatile int32_t x58 = INT32_MAX;
	static volatile int32_t x59 = INT32_MIN;
	int64_t x60 = INT64_MIN;
	int32_t t13 = 39;

    t13 = (x57==((x58/x59)>x60));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x61 = INT16_MIN;
	int8_t x62 = -1;
	uint8_t x63 = 127U;
	uint16_t x64 = UINT16_MAX;
	static volatile int32_t t14 = -7693;

    t14 = (x61==((x62/x63)>x64));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x65 = -596536725LL;
	int8_t x66 = 41;
	static uint16_t x67 = 1789U;
	int32_t x68 = INT32_MIN;
	volatile int32_t t15 = -2008;

    t15 = (x65==((x66/x67)>x68));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static int16_t x69 = -1;
	volatile uint8_t x70 = 4U;
	static uint32_t x71 = 57230U;
	static volatile int16_t x72 = INT16_MIN;
	static volatile int32_t t16 = -346763;

    t16 = (x69==((x70/x71)>x72));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x73 = INT16_MIN;
	int8_t x74 = -1;
	int64_t x75 = -4232964538391662629LL;

    t17 = (x73==((x74/x75)>x76));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x77 = 0;
	int64_t x79 = INT64_MIN;
	int8_t x80 = INT8_MAX;
	int32_t t18 = -12209;

    t18 = (x77==((x78/x79)>x80));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x81 = -1;
	static volatile int32_t x82 = INT32_MAX;
	uint16_t x83 = 3211U;
	int32_t t19 = -11;

    t19 = (x81==((x82/x83)>x84));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x86 = INT16_MAX;
	uint16_t x87 = UINT16_MAX;
	static int64_t x88 = -12047914587328881LL;

    t20 = (x85==((x86/x87)>x88));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint32_t x90 = 0U;
	int64_t x91 = INT64_MIN;
	static int8_t x92 = INT8_MIN;
	volatile int32_t t21 = -743;

    t21 = (x89==((x90/x91)>x92));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x93 = 2110418;
	uint8_t x94 = 117U;
	int8_t x95 = INT8_MIN;
	uint8_t x96 = 4U;
	volatile int32_t t22 = 18295884;

    t22 = (x93==((x94/x95)>x96));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x97 = -1;
	uint8_t x98 = UINT8_MAX;
	uint32_t x99 = UINT32_MAX;
	volatile int32_t t23 = -27109248;

    t23 = (x97==((x98/x99)>x100));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x101 = INT32_MIN;
	static int16_t x103 = INT16_MAX;

    t24 = (x101==((x102/x103)>x104));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x105 = 60789U;
	volatile int16_t x106 = INT16_MAX;

    t25 = (x105==((x106/x107)>x108));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x109 = 0;
	uint32_t x110 = UINT32_MAX;
	uint32_t x111 = 6U;
	uint16_t x112 = 15U;
	int32_t t26 = 0;

    t26 = (x109==((x110/x111)>x112));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x113 = -11;
	uint64_t x114 = UINT64_MAX;

    t27 = (x113==((x114/x115)>x116));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x117 = UINT8_MAX;
	static uint16_t x118 = UINT16_MAX;
	int64_t x119 = INT64_MAX;
	int16_t x120 = INT16_MIN;

    t28 = (x117==((x118/x119)>x120));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x121 = 0U;
	static uint64_t x123 = 4161611824LLU;
	int32_t t29 = 0;

    t29 = (x121==((x122/x123)>x124));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x125 = UINT8_MAX;
	int64_t x127 = INT64_MIN;
	int64_t x128 = 714616671402801LL;
	volatile int32_t t30 = 2944;

    t30 = (x125==((x126/x127)>x128));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x130 = 37172891665945543LL;
	uint64_t x131 = UINT64_MAX;
	volatile uint16_t x132 = 57U;
	static volatile int32_t t31 = 7597291;

    t31 = (x129==((x130/x131)>x132));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x134 = INT32_MAX;
	uint32_t x136 = 35358307U;
	static int32_t t32 = 35342290;

    t32 = (x133==((x134/x135)>x136));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x137 = -1;
	int16_t x138 = INT16_MIN;
	static int32_t t33 = 197;

    t33 = (x137==((x138/x139)>x140));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint64_t x142 = 1911898LLU;
	uint16_t x143 = 332U;
	volatile int32_t x144 = -14259844;
	static int32_t t34 = -37626;

    t34 = (x141==((x142/x143)>x144));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int32_t x145 = INT32_MAX;
	int64_t x146 = -70110904427LL;
	int8_t x147 = INT8_MIN;
	int8_t x148 = 0;
	int32_t t35 = -27;

    t35 = (x145==((x146/x147)>x148));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x149 = INT64_MIN;
	int8_t x150 = -1;
	static int32_t x151 = -588;
	int32_t t36 = -5;

    t36 = (x149==((x150/x151)>x152));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint64_t x153 = 165752139497LLU;
	int64_t x154 = INT64_MIN;
	uint32_t x155 = 2972080U;
	static volatile int8_t x156 = INT8_MAX;
	int32_t t37 = 17;

    t37 = (x153==((x154/x155)>x156));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x157 = UINT64_MAX;
	int8_t x158 = INT8_MIN;
	uint32_t x159 = 46073460U;
	volatile uint64_t x160 = UINT64_MAX;
	int32_t t38 = 880736159;

    t38 = (x157==((x158/x159)>x160));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x161 = 860U;
	uint16_t x163 = UINT16_MAX;
	static int32_t t39 = -624133908;

    t39 = (x161==((x162/x163)>x164));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x165 = -1;
	int64_t x166 = INT64_MAX;
	volatile int32_t t40 = -2248040;

    t40 = (x165==((x166/x167)>x168));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x169 = UINT8_MAX;
	uint32_t x171 = 522625U;
	int8_t x172 = INT8_MIN;
	static int32_t t41 = -5651;

    t41 = (x169==((x170/x171)>x172));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x174 = INT32_MIN;
	uint16_t x175 = UINT16_MAX;
	int8_t x176 = -9;
	int32_t t42 = 179212;

    t42 = (x173==((x174/x175)>x176));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x177 = INT64_MAX;
	static volatile uint32_t x178 = 182U;
	volatile int8_t x179 = -1;
	volatile uint32_t x180 = 5975U;
	static int32_t t43 = -13;

    t43 = (x177==((x178/x179)>x180));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x181 = INT64_MIN;
	static int16_t x182 = 4;
	static uint32_t x184 = 22137063U;
	static volatile int32_t t44 = -36672806;

    t44 = (x181==((x182/x183)>x184));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x185 = -1;
	int64_t x186 = INT64_MIN;
	static volatile uint16_t x187 = 1U;
	int32_t x188 = 3168;
	static int32_t t45 = 4;

    t45 = (x185==((x186/x187)>x188));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x189 = -1;
	int16_t x190 = INT16_MAX;
	volatile int8_t x191 = 3;
	int32_t t46 = -408;

    t46 = (x189==((x190/x191)>x192));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x193 = 1;
	int8_t x194 = -1;
	static int16_t x195 = -13;
	volatile int8_t x196 = -1;
	volatile int32_t t47 = -1;

    t47 = (x193==((x194/x195)>x196));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x197 = -1;
	static int16_t x198 = INT16_MIN;
	volatile uint64_t x200 = 65008LLU;
	static volatile int32_t t48 = -16038720;

    t48 = (x197==((x198/x199)>x200));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x201 = 642922287;
	static uint32_t x202 = UINT32_MAX;
	static int32_t x203 = -3;
	static volatile int64_t x204 = 7821937800LL;
	volatile int32_t t49 = 724775810;

    t49 = (x201==((x202/x203)>x204));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x205 = INT16_MAX;
	uint16_t x206 = UINT16_MAX;
	int16_t x207 = INT16_MIN;
	int32_t t50 = -224013;

    t50 = (x205==((x206/x207)>x208));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint32_t x209 = 1103318330U;
	volatile uint8_t x210 = UINT8_MAX;
	uint16_t x211 = UINT16_MAX;
	volatile int32_t t51 = -100173;

    t51 = (x209==((x210/x211)>x212));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint8_t x213 = UINT8_MAX;
	static uint16_t x215 = UINT16_MAX;
	static volatile int32_t t52 = 2216;

    t52 = (x213==((x214/x215)>x216));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x217 = -12496;
	static int16_t x218 = -626;
	int8_t x219 = -1;
	uint8_t x220 = 90U;
	volatile int32_t t53 = 2277;

    t53 = (x217==((x218/x219)>x220));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int32_t x222 = INT32_MAX;
	int32_t t54 = -75986746;

    t54 = (x221==((x222/x223)>x224));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x225 = 110U;
	int8_t x228 = INT8_MIN;
	volatile int32_t t55 = 3069154;

    t55 = (x225==((x226/x227)>x228));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x230 = 2082346177744076LLU;
	int8_t x232 = INT8_MIN;
	volatile int32_t t56 = -8149;

    t56 = (x229==((x230/x231)>x232));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x235 = INT8_MAX;
	volatile int32_t t57 = 3484993;

    t57 = (x233==((x234/x235)>x236));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x239 = INT64_MIN;
	volatile int32_t t58 = 27058741;

    t58 = (x237==((x238/x239)>x240));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x241 = 52U;
	volatile uint32_t x242 = 6462922U;

    t59 = (x241==((x242/x243)>x244));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile uint8_t x245 = 61U;
	uint32_t x246 = UINT32_MAX;
	static int8_t x247 = INT8_MIN;
	int32_t t60 = -37;

    t60 = (x245==((x246/x247)>x248));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x253 = -1;
	uint16_t x254 = 30U;
	int64_t x255 = INT64_MIN;
	static int32_t x256 = INT32_MAX;
	static volatile int32_t t61 = 12326;

    t61 = (x253==((x254/x255)>x256));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x257 = 5;
	uint32_t x258 = UINT32_MAX;
	int8_t x259 = -1;
	uint16_t x260 = 0U;
	int32_t t62 = -26725118;

    t62 = (x257==((x258/x259)>x260));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x265 = -23582327531507577LL;
	int64_t x267 = -1LL;
	volatile int32_t t63 = 98220812;

    t63 = (x265==((x266/x267)>x268));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x269 = 3U;
	uint16_t x270 = UINT16_MAX;
	int16_t x271 = 81;

    t64 = (x269==((x270/x271)>x272));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint16_t x273 = UINT16_MAX;
	int64_t x274 = -22139824LL;
	uint64_t x275 = 201451855671463414LLU;
	int32_t x276 = -1;
	volatile int32_t t65 = 0;

    t65 = (x273==((x274/x275)>x276));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile uint8_t x277 = UINT8_MAX;
	int32_t x279 = 3638;

    t66 = (x277==((x278/x279)>x280));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x281 = 118U;
	volatile int8_t x282 = INT8_MIN;
	int64_t x283 = 2LL;
	int64_t x284 = -1LL;
	volatile int32_t t67 = 25603729;

    t67 = (x281==((x282/x283)>x284));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int32_t x285 = INT32_MIN;
	static int8_t x287 = INT8_MAX;
	uint8_t x288 = 0U;
	int32_t t68 = -49836039;

    t68 = (x285==((x286/x287)>x288));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x290 = -3859850;
	volatile int16_t x291 = INT16_MAX;
	uint8_t x292 = 38U;
	volatile int32_t t69 = -943144057;

    t69 = (x289==((x290/x291)>x292));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x294 = 0;
	uint32_t x295 = UINT32_MAX;
	volatile int8_t x296 = INT8_MIN;
	static int32_t t70 = 54956740;

    t70 = (x293==((x294/x295)>x296));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x297 = -1LL;
	uint16_t x298 = UINT16_MAX;
	uint16_t x299 = 3048U;
	volatile int16_t x300 = INT16_MAX;

    t71 = (x297==((x298/x299)>x300));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int16_t x301 = 1;
	volatile int8_t x302 = INT8_MIN;
	static volatile int16_t x303 = INT16_MIN;
	uint8_t x304 = 49U;
	int32_t t72 = 946141500;

    t72 = (x301==((x302/x303)>x304));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x305 = -1;
	volatile int32_t x306 = -1;
	int16_t x307 = -1;
	static int32_t x308 = INT32_MIN;
	volatile int32_t t73 = 2495463;

    t73 = (x305==((x306/x307)>x308));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x309 = INT16_MIN;
	int32_t x310 = INT32_MIN;
	int32_t x312 = INT32_MIN;
	volatile int32_t t74 = 2072240;

    t74 = (x309==((x310/x311)>x312));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x313 = 439354237U;
	volatile uint64_t x314 = 479LLU;
	uint64_t x315 = UINT64_MAX;
	volatile uint64_t x316 = 872263062137352540LLU;
	volatile int32_t t75 = 104004;

    t75 = (x313==((x314/x315)>x316));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x318 = 6530344LL;
	volatile int8_t x319 = INT8_MAX;
	uint32_t x320 = 18U;
	int32_t t76 = 25200497;

    t76 = (x317==((x318/x319)>x320));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x321 = INT64_MIN;
	static volatile uint64_t x323 = UINT64_MAX;
	static int64_t x324 = 0LL;
	volatile int32_t t77 = 933;

    t77 = (x321==((x322/x323)>x324));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x325 = -1;
	static int16_t x327 = INT16_MAX;
	uint32_t x328 = UINT32_MAX;
	int32_t t78 = -1;

    t78 = (x325==((x326/x327)>x328));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x329 = INT16_MAX;
	static int16_t x330 = INT16_MIN;
	static int64_t x331 = INT64_MIN;
	int32_t t79 = -6327602;

    t79 = (x329==((x330/x331)>x332));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x337 = INT32_MAX;
	static uint32_t x338 = 6487214U;
	int64_t x339 = INT64_MIN;
	static volatile int32_t x340 = INT32_MAX;
	volatile int32_t t80 = -835006;

    t80 = (x337==((x338/x339)>x340));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x342 = INT32_MIN;
	static int32_t t81 = 694487;

    t81 = (x341==((x342/x343)>x344));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x350 = -20819939LL;
	volatile int64_t x352 = INT64_MIN;
	volatile int32_t t82 = -4211347;

    t82 = (x349==((x350/x351)>x352));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x357 = INT8_MAX;
	int16_t x358 = -2712;
	int16_t x359 = INT16_MAX;
	uint64_t x360 = 3LLU;
	volatile int32_t t83 = 25;

    t83 = (x357==((x358/x359)>x360));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x361 = 2;
	int32_t x362 = INT32_MAX;
	int32_t x363 = INT32_MIN;

    t84 = (x361==((x362/x363)>x364));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x365 = INT64_MIN;
	int16_t x366 = INT16_MIN;
	uint32_t x367 = 3U;
	uint8_t x368 = 31U;
	static volatile int32_t t85 = 15382140;

    t85 = (x365==((x366/x367)>x368));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x369 = INT16_MAX;
	uint64_t x370 = 845193LLU;
	int8_t x371 = INT8_MAX;
	uint8_t x372 = UINT8_MAX;
	volatile int32_t t86 = 6898;

    t86 = (x369==((x370/x371)>x372));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint64_t x373 = 55LLU;
	static int16_t x374 = INT16_MIN;
	uint64_t x375 = UINT64_MAX;
	uint64_t x376 = 101923670LLU;
	int32_t t87 = -1087197;

    t87 = (x373==((x374/x375)>x376));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x378 = INT16_MAX;
	static volatile int32_t x379 = 253837326;
	volatile uint64_t x380 = UINT64_MAX;
	int32_t t88 = 2;

    t88 = (x377==((x378/x379)>x380));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x381 = -6592;
	uint8_t x382 = 3U;
	volatile int16_t x383 = -23;
	volatile uint64_t x384 = UINT64_MAX;

    t89 = (x381==((x382/x383)>x384));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x385 = 146253467848LLU;
	uint16_t x386 = 16U;
	int16_t x387 = -1;
	int16_t x388 = INT16_MAX;

    t90 = (x385==((x386/x387)>x388));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x389 = INT64_MAX;
	int32_t x390 = -1;
	static uint64_t x391 = 129320LLU;
	volatile int32_t t91 = 986996;

    t91 = (x389==((x390/x391)>x392));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x393 = 4124978294459928LL;
	uint32_t x394 = UINT32_MAX;
	int8_t x395 = -1;
	int8_t x396 = INT8_MIN;
	int32_t t92 = -1503;

    t92 = (x393==((x394/x395)>x396));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x397 = 7535866730LL;
	uint16_t x398 = UINT16_MAX;
	int64_t x399 = INT64_MIN;
	uint8_t x400 = 52U;
	int32_t t93 = -7370;

    t93 = (x397==((x398/x399)>x400));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x401 = INT64_MIN;

    t94 = (x401==((x402/x403)>x404));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x405 = INT32_MIN;
	uint16_t x406 = 1U;
	uint64_t x407 = UINT64_MAX;
	int8_t x408 = INT8_MIN;
	int32_t t95 = -826908597;

    t95 = (x405==((x406/x407)>x408));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint8_t x409 = 2U;
	static uint32_t x410 = UINT32_MAX;
	static int64_t x411 = 43069160LL;
	int32_t t96 = -1142;

    t96 = (x409==((x410/x411)>x412));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x413 = -5;
	volatile int64_t x414 = INT64_MIN;
	int32_t x415 = 260515712;
	int64_t x416 = INT64_MAX;
	int32_t t97 = 3967999;

    t97 = (x413==((x414/x415)>x416));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x417 = 14934U;
	int8_t x418 = 15;
	int16_t x419 = -1;
	int32_t x420 = INT32_MIN;
	volatile int32_t t98 = -249;

    t98 = (x417==((x418/x419)>x420));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x421 = 429662U;
	volatile int8_t x423 = -6;
	static int16_t x424 = -1;
	int32_t t99 = 127;

    t99 = (x421==((x422/x423)>x424));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int64_t x425 = -55941915751459890LL;
	int64_t x427 = INT64_MIN;
	uint16_t x428 = UINT16_MAX;

    t100 = (x425==((x426/x427)>x428));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x429 = INT32_MAX;
	int8_t x430 = -11;
	static int8_t x431 = INT8_MIN;
	volatile int32_t t101 = 106526547;

    t101 = (x429==((x430/x431)>x432));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x433 = INT32_MIN;
	int64_t x434 = INT64_MIN;
	int32_t x435 = INT32_MIN;
	static uint64_t x436 = UINT64_MAX;
	int32_t t102 = -63;

    t102 = (x433==((x434/x435)>x436));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x437 = 4256733176194685LLU;
	int64_t x438 = INT64_MIN;
	int16_t x439 = -7250;
	int64_t x440 = -1LL;
	int32_t t103 = 100953782;

    t103 = (x437==((x438/x439)>x440));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x441 = UINT64_MAX;
	uint64_t x442 = 629669121357LLU;
	uint16_t x443 = 2006U;
	static int32_t x444 = INT32_MIN;

    t104 = (x441==((x442/x443)>x444));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile uint64_t x445 = 7695656754120541LLU;
	int32_t x446 = INT32_MIN;
	int8_t x448 = 0;
	int32_t t105 = -7604;

    t105 = (x445==((x446/x447)>x448));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x453 = INT32_MIN;
	uint32_t x454 = UINT32_MAX;
	volatile int64_t x455 = 167850951826393513LL;
	volatile int32_t t106 = -105;

    t106 = (x453==((x454/x455)>x456));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x458 = INT64_MAX;
	uint16_t x459 = 1U;
	int32_t x460 = INT32_MIN;

    t107 = (x457==((x458/x459)>x460));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x461 = -1;
	int8_t x462 = INT8_MIN;
	int8_t x463 = INT8_MIN;
	static uint16_t x464 = 19U;
	volatile int32_t t108 = 10891;

    t108 = (x461==((x462/x463)>x464));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x465 = 54LLU;
	volatile int8_t x466 = 9;
	int16_t x467 = -1;
	int8_t x468 = INT8_MIN;
	int32_t t109 = -221602124;

    t109 = (x465==((x466/x467)>x468));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint8_t x473 = 50U;
	int64_t x475 = INT64_MIN;
	static uint64_t x476 = 42240987437978LLU;
	volatile int32_t t110 = 426369393;

    t110 = (x473==((x474/x475)>x476));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x477 = INT8_MAX;
	uint16_t x478 = 659U;
	volatile int64_t x479 = 3867743906548LL;
	int64_t x480 = 30364358079708LL;
	volatile int32_t t111 = -237559;

    t111 = (x477==((x478/x479)>x480));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x481 = 2277779LL;
	uint32_t x482 = UINT32_MAX;
	int64_t x483 = -1LL;
	int16_t x484 = -1;

    t112 = (x481==((x482/x483)>x484));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x485 = INT64_MIN;
	uint64_t x486 = 13975863LLU;
	static int16_t x487 = INT16_MAX;
	static uint8_t x488 = 19U;
	static int32_t t113 = 4053;

    t113 = (x485==((x486/x487)>x488));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x489 = 793717272;
	uint8_t x491 = UINT8_MAX;
	int32_t x492 = INT32_MIN;
	int32_t t114 = 10421;

    t114 = (x489==((x490/x491)>x492));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x494 = -1;
	volatile int8_t x495 = -60;
	int32_t t115 = -906447;

    t115 = (x493==((x494/x495)>x496));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint16_t x497 = 6U;
	int16_t x498 = INT16_MAX;
	static int16_t x499 = INT16_MAX;
	int64_t x500 = INT64_MAX;
	int32_t t116 = 106593065;

    t116 = (x497==((x498/x499)>x500));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile int32_t x501 = INT32_MIN;
	volatile uint64_t x502 = 10539911485208LLU;
	uint32_t x503 = UINT32_MAX;
	static uint16_t x504 = UINT16_MAX;
	int32_t t117 = -867128;

    t117 = (x501==((x502/x503)>x504));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x505 = 49U;
	uint16_t x506 = 11U;
	static int32_t x508 = 2442119;
	int32_t t118 = -3875;

    t118 = (x505==((x506/x507)>x508));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x511 = -1LL;
	int32_t t119 = -21427;

    t119 = (x509==((x510/x511)>x512));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x513 = -1LL;
	uint16_t x515 = UINT16_MAX;
	uint64_t x516 = 14674208LLU;
	volatile int32_t t120 = -116;

    t120 = (x513==((x514/x515)>x516));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x521 = 3U;
	int32_t x522 = -584965;
	static int32_t t121 = -3486453;

    t121 = (x521==((x522/x523)>x524));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int32_t x525 = 18734;
	int64_t x526 = -1LL;
	volatile int64_t x527 = 526348091631LL;
	int32_t x528 = -1;
	int32_t t122 = -23688;

    t122 = (x525==((x526/x527)>x528));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x529 = 3;
	int32_t x530 = -26457;
	int32_t x531 = -1574;
	int32_t x532 = INT32_MIN;
	static int32_t t123 = 338;

    t123 = (x529==((x530/x531)>x532));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x534 = INT16_MAX;
	uint64_t x535 = UINT64_MAX;
	static uint32_t x536 = 1001699U;
	int32_t t124 = -1;

    t124 = (x533==((x534/x535)>x536));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint32_t x537 = UINT32_MAX;
	int8_t x539 = INT8_MIN;
	volatile int64_t x540 = INT64_MIN;
	int32_t t125 = -3095;

    t125 = (x537==((x538/x539)>x540));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x541 = 1U;
	int32_t x542 = INT32_MIN;
	uint8_t x543 = 6U;
	volatile int32_t x544 = -1;

    t126 = (x541==((x542/x543)>x544));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x545 = UINT32_MAX;
	int8_t x547 = INT8_MIN;
	int32_t x548 = -1;
	int32_t t127 = -275323;

    t127 = (x545==((x546/x547)>x548));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x549 = INT16_MAX;
	int8_t x550 = -1;
	int8_t x551 = INT8_MAX;
	int32_t t128 = -10;

    t128 = (x549==((x550/x551)>x552));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x553 = INT8_MIN;
	static int8_t x554 = INT8_MIN;
	int32_t x555 = INT32_MIN;
	uint32_t x556 = 621581637U;
	int32_t t129 = 2;

    t129 = (x553==((x554/x555)>x556));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x559 = INT32_MIN;
	static int8_t x560 = -1;
	int32_t t130 = 81;

    t130 = (x557==((x558/x559)>x560));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x561 = INT32_MAX;
	uint8_t x563 = 44U;
	int32_t t131 = 1509314;

    t131 = (x561==((x562/x563)>x564));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x565 = 488311449637178LL;
	uint64_t x566 = 372741734812753151LLU;
	int64_t x567 = -1781840456551855LL;
	int32_t x568 = INT32_MIN;
	int32_t t132 = -519;

    t132 = (x565==((x566/x567)>x568));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x569 = INT16_MAX;
	static uint64_t x571 = 4315825109821675228LLU;
	volatile int32_t t133 = -82241416;

    t133 = (x569==((x570/x571)>x572));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint32_t x573 = 18U;
	int64_t x574 = -2771LL;
	volatile int32_t x576 = INT32_MIN;
	int32_t t134 = 915674458;

    t134 = (x573==((x574/x575)>x576));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x578 = INT32_MIN;
	uint32_t x579 = 326U;
	uint16_t x580 = UINT16_MAX;
	volatile int32_t t135 = 90034;

    t135 = (x577==((x578/x579)>x580));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x581 = 5454048694LL;
	volatile uint32_t x583 = UINT32_MAX;
	int64_t x584 = INT64_MIN;
	int32_t t136 = 249;

    t136 = (x581==((x582/x583)>x584));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x585 = UINT64_MAX;
	int64_t x586 = INT64_MIN;
	int8_t x587 = -2;
	int32_t x588 = INT32_MIN;

    t137 = (x585==((x586/x587)>x588));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x589 = INT32_MIN;
	static int32_t x591 = INT32_MAX;
	int8_t x592 = INT8_MIN;
	int32_t t138 = 489;

    t138 = (x589==((x590/x591)>x592));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x594 = 775538794U;
	int64_t x595 = INT64_MIN;
	static int8_t x596 = 0;
	int32_t t139 = -28672278;

    t139 = (x593==((x594/x595)>x596));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x597 = INT64_MAX;
	uint32_t x598 = 437U;
	static uint64_t x599 = 373279299676407LLU;
	uint8_t x600 = 84U;
	int32_t t140 = 1;

    t140 = (x597==((x598/x599)>x600));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x601 = 5;
	int16_t x602 = -1;
	static int32_t x603 = INT32_MAX;
	int8_t x604 = INT8_MIN;
	volatile int32_t t141 = 104799;

    t141 = (x601==((x602/x603)>x604));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x605 = 39U;
	uint8_t x606 = 25U;
	static int8_t x607 = -5;
	volatile uint16_t x608 = UINT16_MAX;
	volatile int32_t t142 = 572877737;

    t142 = (x605==((x606/x607)>x608));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x609 = INT32_MAX;
	int32_t x610 = 1792;
	volatile uint8_t x611 = UINT8_MAX;
	int32_t x612 = INT32_MIN;

    t143 = (x609==((x610/x611)>x612));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x617 = 48344661592797LLU;
	int8_t x619 = INT8_MIN;
	static volatile int32_t t144 = -3467;

    t144 = (x617==((x618/x619)>x620));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x621 = -1680;
	volatile int64_t x622 = INT64_MIN;
	volatile uint64_t x623 = 203397992196117166LLU;
	static volatile int32_t t145 = 1;

    t145 = (x621==((x622/x623)>x624));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x626 = -1;
	static int64_t x627 = INT64_MIN;
	volatile uint32_t x628 = UINT32_MAX;
	volatile int32_t t146 = -391349608;

    t146 = (x625==((x626/x627)>x628));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int8_t x629 = 25;
	int32_t x630 = INT32_MIN;
	int64_t x631 = -1LL;
	static volatile int64_t x632 = INT64_MIN;
	volatile int32_t t147 = -207652;

    t147 = (x629==((x630/x631)>x632));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x634 = 265;
	int16_t x635 = -1;
	int8_t x636 = 1;
	volatile int32_t t148 = -305834685;

    t148 = (x633==((x634/x635)>x636));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint16_t x639 = UINT16_MAX;
	uint32_t x640 = 3053U;

    t149 = (x637==((x638/x639)>x640));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int32_t x641 = -27;
	int32_t x642 = INT32_MIN;
	int64_t x643 = -1LL;
	static volatile int64_t x644 = 6378677715295981LL;
	volatile int32_t t150 = -1;

    t150 = (x641==((x642/x643)>x644));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile uint32_t x645 = 798585933U;
	int64_t x646 = INT64_MIN;
	int64_t x647 = INT64_MIN;
	int32_t t151 = -3;

    t151 = (x645==((x646/x647)>x648));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int8_t x649 = INT8_MIN;
	int8_t x650 = -1;
	static int16_t x651 = 1332;
	int8_t x652 = INT8_MIN;
	static int32_t t152 = 1;

    t152 = (x649==((x650/x651)>x652));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x653 = 862763LLU;
	int8_t x654 = -1;
	volatile uint16_t x655 = 3U;
	volatile int32_t t153 = -7791888;

    t153 = (x653==((x654/x655)>x656));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x657 = 837271563965590953LLU;
	int64_t x658 = INT64_MIN;
	volatile int32_t x659 = INT32_MIN;
	static volatile int32_t t154 = 29303180;

    t154 = (x657==((x658/x659)>x660));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int32_t x663 = INT32_MAX;
	volatile int32_t t155 = -1176537;

    t155 = (x661==((x662/x663)>x664));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint8_t x665 = 32U;
	volatile int16_t x666 = -1;
	uint8_t x667 = UINT8_MAX;
	volatile int32_t t156 = -25;

    t156 = (x665==((x666/x667)>x668));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x669 = 3;
	uint16_t x670 = 15U;
	uint16_t x671 = UINT16_MAX;
	volatile int16_t x672 = 8876;
	int32_t t157 = 24;

    t157 = (x669==((x670/x671)>x672));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x673 = UINT32_MAX;
	int32_t x674 = 105;
	volatile uint16_t x675 = UINT16_MAX;
	static int8_t x676 = INT8_MIN;
	volatile int32_t t158 = 783494;

    t158 = (x673==((x674/x675)>x676));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x677 = 6LL;
	int8_t x678 = INT8_MIN;
	int64_t x679 = INT64_MIN;
	static int32_t x680 = INT32_MAX;
	int32_t t159 = -24589998;

    t159 = (x677==((x678/x679)>x680));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x681 = UINT8_MAX;
	volatile int8_t x682 = INT8_MAX;
	volatile uint32_t x683 = 105055975U;
	volatile int32_t t160 = 1;

    t160 = (x681==((x682/x683)>x684));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x685 = UINT16_MAX;
	static int8_t x686 = -6;
	volatile int16_t x687 = INT16_MAX;
	int32_t t161 = 23;

    t161 = (x685==((x686/x687)>x688));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x691 = INT8_MIN;
	int16_t x692 = -355;
	int32_t t162 = -2472;

    t162 = (x689==((x690/x691)>x692));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x693 = INT64_MAX;
	uint32_t x694 = 36439U;
	volatile uint8_t x695 = 36U;
	uint32_t x696 = 18406011U;

    t163 = (x693==((x694/x695)>x696));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x697 = -2;
	static int32_t x698 = INT32_MIN;
	static uint8_t x699 = UINT8_MAX;
	int8_t x700 = -2;
	volatile int32_t t164 = -136667425;

    t164 = (x697==((x698/x699)>x700));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x702 = INT64_MIN;
	static volatile uint8_t x703 = 91U;
	volatile uint32_t x704 = 38U;
	volatile int32_t t165 = 3;

    t165 = (x701==((x702/x703)>x704));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x705 = INT64_MIN;
	volatile int32_t x706 = INT32_MAX;
	uint16_t x707 = 5862U;
	volatile int32_t t166 = 1426;

    t166 = (x705==((x706/x707)>x708));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x709 = INT8_MAX;
	volatile int8_t x710 = -1;
	int32_t x711 = INT32_MIN;
	int8_t x712 = INT8_MAX;
	int32_t t167 = -70959179;

    t167 = (x709==((x710/x711)>x712));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x713 = INT16_MAX;
	int64_t x715 = INT64_MAX;
	int32_t t168 = 12523;

    t168 = (x713==((x714/x715)>x716));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint64_t x717 = UINT64_MAX;
	volatile uint8_t x718 = 75U;
	uint32_t x719 = 13866158U;
	static volatile uint8_t x720 = UINT8_MAX;

    t169 = (x717==((x718/x719)>x720));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x721 = -1;
	int64_t x722 = 40LL;
	volatile uint16_t x723 = 7U;
	uint16_t x724 = 440U;

    t170 = (x721==((x722/x723)>x724));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x725 = INT64_MIN;
	static int16_t x726 = -1;
	int8_t x728 = INT8_MIN;
	int32_t t171 = -147783272;

    t171 = (x725==((x726/x727)>x728));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x729 = INT8_MAX;
	int8_t x731 = INT8_MAX;
	volatile uint64_t x732 = UINT64_MAX;
	volatile int32_t t172 = -13;

    t172 = (x729==((x730/x731)>x732));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x733 = -1;
	int8_t x734 = INT8_MIN;
	static int8_t x735 = -1;

    t173 = (x733==((x734/x735)>x736));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x737 = INT16_MIN;
	int8_t x738 = 6;
	volatile int32_t x739 = -206748;
	uint8_t x740 = 2U;
	volatile int32_t t174 = -233334;

    t174 = (x737==((x738/x739)>x740));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x741 = INT32_MIN;
	uint32_t x742 = UINT32_MAX;
	volatile int32_t x743 = -1;
	uint16_t x744 = 4U;

    t175 = (x741==((x742/x743)>x744));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x745 = INT16_MIN;
	volatile int64_t x746 = -55606195242079687LL;
	int16_t x747 = INT16_MIN;
	int32_t t176 = -1792;

    t176 = (x745==((x746/x747)>x748));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x750 = UINT64_MAX;
	uint16_t x751 = 29U;
	int32_t x752 = 743751;
	static int32_t t177 = 117396;

    t177 = (x749==((x750/x751)>x752));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x753 = INT32_MIN;
	int64_t x754 = 1185LL;
	volatile int16_t x755 = INT16_MIN;
	int8_t x756 = INT8_MIN;

    t178 = (x753==((x754/x755)>x756));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x757 = INT32_MIN;
	int32_t x758 = -1;
	int16_t x759 = INT16_MIN;
	uint16_t x760 = 61U;
	volatile int32_t t179 = -4;

    t179 = (x757==((x758/x759)>x760));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x761 = INT32_MIN;
	int16_t x762 = -1340;
	uint32_t x763 = 1072028612U;

    t180 = (x761==((x762/x763)>x764));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x765 = INT16_MIN;
	uint64_t x766 = 171976728065437704LLU;
	volatile uint64_t x767 = 105532883813LLU;
	int32_t x768 = 36142;
	volatile int32_t t181 = 11342798;

    t181 = (x765==((x766/x767)>x768));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x769 = 32951500337720LLU;
	int64_t x770 = INT64_MIN;
	int16_t x771 = -24;
	static uint64_t x772 = 27042320084LLU;
	static volatile int32_t t182 = -18;

    t182 = (x769==((x770/x771)>x772));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x773 = 170793195;
	static int32_t x774 = -1;
	static int8_t x775 = -1;
	uint64_t x776 = UINT64_MAX;
	volatile int32_t t183 = -190765;

    t183 = (x773==((x774/x775)>x776));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x780 = INT8_MIN;
	static int32_t t184 = -3351;

    t184 = (x777==((x778/x779)>x780));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x782 = INT16_MIN;
	static volatile uint64_t x783 = UINT64_MAX;
	uint64_t x784 = 15546LLU;
	int32_t t185 = 64272582;

    t185 = (x781==((x782/x783)>x784));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x789 = 565869047070424LLU;
	volatile uint32_t x790 = 14569020U;
	uint8_t x791 = 4U;
	int64_t x792 = INT64_MAX;

    t186 = (x789==((x790/x791)>x792));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x793 = INT8_MIN;
	int16_t x794 = INT16_MIN;
	static volatile int64_t x795 = -1LL;
	static volatile int8_t x796 = INT8_MIN;
	int32_t t187 = -4166579;

    t187 = (x793==((x794/x795)>x796));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint8_t x797 = 100U;
	static int8_t x798 = -3;
	int8_t x799 = INT8_MAX;
	volatile int32_t t188 = 261698716;

    t188 = (x797==((x798/x799)>x800));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x802 = INT8_MAX;
	static int8_t x804 = INT8_MIN;
	static volatile int32_t t189 = -101755;

    t189 = (x801==((x802/x803)>x804));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x805 = 3;
	volatile int64_t x806 = -1LL;
	static uint64_t x807 = 218LLU;
	static int32_t x808 = -1;
	volatile int32_t t190 = -38099;

    t190 = (x805==((x806/x807)>x808));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x809 = INT64_MAX;
	uint8_t x810 = 13U;
	static uint8_t x811 = 1U;
	static int64_t x812 = -1LL;
	int32_t t191 = 2000250;

    t191 = (x809==((x810/x811)>x812));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x813 = INT64_MIN;
	int64_t x814 = -1LL;
	volatile int8_t x815 = INT8_MAX;
	static int8_t x816 = -11;
	int32_t t192 = 2735;

    t192 = (x813==((x814/x815)>x816));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x817 = UINT32_MAX;
	int8_t x818 = INT8_MIN;
	int16_t x819 = -1;
	static volatile int32_t x820 = 27854916;
	int32_t t193 = 113754;

    t193 = (x817==((x818/x819)>x820));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x821 = UINT64_MAX;
	int64_t x822 = -1LL;
	uint32_t x823 = UINT32_MAX;
	int32_t t194 = -58053;

    t194 = (x821==((x822/x823)>x824));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x826 = UINT32_MAX;
	volatile uint16_t x827 = 1344U;
	volatile uint64_t x828 = 2186LLU;
	static volatile int32_t t195 = -9977;

    t195 = (x825==((x826/x827)>x828));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint8_t x829 = 6U;
	static int32_t x830 = INT32_MIN;
	static volatile int32_t x831 = INT32_MAX;
	volatile int32_t t196 = 2;

    t196 = (x829==((x830/x831)>x832));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x833 = INT32_MAX;
	volatile int64_t x834 = 12141765LL;
	int64_t x835 = INT64_MAX;
	static volatile int64_t x836 = INT64_MAX;
	static volatile int32_t t197 = 70095184;

    t197 = (x833==((x834/x835)>x836));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static int32_t x837 = -1;
	int8_t x838 = INT8_MAX;
	static int64_t x839 = INT64_MIN;
	int8_t x840 = -31;
	volatile int32_t t198 = 104;

    t198 = (x837==((x838/x839)>x840));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int32_t x841 = INT32_MIN;
	static int16_t x842 = 0;
	volatile int32_t x843 = INT32_MIN;
	static uint8_t x844 = 26U;
	int32_t t199 = -8560;

    t199 = (x841==((x842/x843)>x844));

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

