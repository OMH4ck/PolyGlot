
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

uint16_t x2 = 19628U;
int8_t x8 = INT8_MAX;
int16_t x9 = INT16_MIN;
volatile int32_t t2 = 1;
static uint16_t x13 = UINT16_MAX;
int32_t t5 = 10;
uint8_t x26 = UINT8_MAX;
int8_t x27 = -1;
int64_t x34 = -1LL;
static int32_t x36 = INT32_MIN;
int32_t t8 = INT32_MIN;
uint64_t x48 = UINT64_MAX;
volatile uint8_t x49 = UINT8_MAX;
int64_t x50 = INT64_MIN;
volatile int32_t t11 = 43;
static volatile int8_t x59 = INT8_MAX;
int64_t x61 = -15LL;
volatile int64_t t13 = -237LL;
int32_t x68 = INT32_MAX;
int32_t t15 = 269352867;
volatile uint8_t x75 = 55U;
static volatile int32_t t16 = 932290;
volatile int64_t t17 = -647457072395065LL;
volatile int8_t x84 = INT8_MIN;
int16_t x85 = INT16_MIN;
uint32_t x87 = UINT32_MAX;
static int8_t x89 = INT8_MAX;
int64_t x91 = INT64_MIN;
uint8_t x92 = 26U;
uint32_t x100 = UINT32_MAX;
int16_t x107 = -1;
int8_t x119 = 3;
static int32_t x120 = 453;
volatile int8_t x121 = INT8_MIN;
int32_t x123 = INT32_MIN;
int64_t t31 = -2909630LL;
uint8_t x143 = 3U;
uint16_t x144 = UINT16_MAX;
int8_t x147 = -1;
int8_t x148 = 42;
int32_t t33 = 113618;
volatile uint32_t x150 = 3940163U;
volatile int32_t t35 = -695749;
int64_t x158 = INT64_MAX;
int16_t x159 = 7;
int32_t x163 = 45531;
static int64_t x165 = 28896663884835538LL;
int16_t x167 = INT16_MIN;
int16_t x169 = INT16_MIN;
volatile int32_t x171 = INT32_MIN;
int64_t x175 = INT64_MAX;
volatile int32_t t40 = 1502963;
int16_t x177 = -20;
static volatile int16_t x181 = INT16_MAX;
int16_t x189 = INT16_MIN;
uint8_t x194 = 0U;
int32_t t45 = 12;
volatile int16_t x201 = INT16_MAX;
int16_t x202 = INT16_MAX;
volatile int32_t t47 = -249;
volatile int32_t t53 = 4166;
uint8_t x238 = UINT8_MAX;
int64_t x239 = INT64_MAX;
volatile uint32_t x241 = 359U;
volatile uint64_t x242 = 3485221061838974LLU;
uint64_t x247 = 2LLU;
volatile int32_t t59 = -30434;
int16_t x257 = -1;
uint8_t x262 = UINT8_MAX;
static uint8_t x266 = 17U;
int8_t x271 = -12;
volatile int64_t x281 = -10604870LL;
int64_t x287 = 1609872048152610798LL;
volatile int64_t x289 = INT64_MIN;
static volatile int8_t x290 = -51;
int16_t x293 = INT16_MIN;
static int64_t x298 = INT64_MAX;
uint64_t x300 = 703506489830727035LLU;
int16_t x301 = INT16_MIN;
int64_t x302 = INT64_MAX;
int8_t x303 = INT8_MIN;
int32_t t72 = 38638048;
volatile int32_t x309 = -1;
int16_t x310 = INT16_MIN;
uint8_t x312 = 0U;
int8_t x317 = -1;
int8_t x322 = INT8_MIN;
uint64_t t76 = 3419LLU;
int32_t t79 = -7;
int8_t x347 = -1;
static int8_t x353 = 1;
volatile uint8_t x355 = 38U;
volatile int8_t x361 = 42;
int16_t x362 = INT16_MIN;
int16_t x368 = -1;
static volatile int64_t x373 = -44409LL;
static volatile int64_t t86 = 834LL;
uint64_t x382 = 27648119LLU;
volatile uint8_t x383 = 1U;
static int64_t x384 = 49563850331991471LL;
uint64_t t88 = 5793420672435LLU;
int16_t x389 = INT16_MIN;
uint64_t x390 = UINT64_MAX;
int16_t x393 = INT16_MIN;
static uint8_t x396 = 1U;
int16_t x397 = INT16_MAX;
static uint16_t x398 = 3U;
int32_t t92 = 41584925;
int64_t x401 = -1LL;
int64_t t93 = 1919215021035289LL;
uint64_t x429 = 197026527788967740LLU;
uint64_t x435 = 10168LLU;
int64_t t100 = INT64_MAX;
uint8_t x444 = 0U;
volatile int64_t t105 = -3043LL;
int16_t x462 = INT16_MIN;
int32_t x466 = INT32_MAX;
int32_t t107 = -12243878;
int32_t x474 = -1;
uint64_t x479 = 7404LLU;
volatile int64_t x480 = -1087520369LL;
static int64_t x481 = INT64_MAX;
int16_t x485 = INT16_MAX;
volatile int64_t x488 = 34231732303LL;
volatile int32_t t112 = 8999609;
int32_t t114 = -421406705;
int32_t x503 = -1;
volatile uint16_t x506 = 0U;
volatile int32_t t116 = 1;
int64_t x513 = INT64_MAX;
static uint8_t x515 = UINT8_MAX;
int16_t x526 = -263;
static int64_t x530 = INT64_MAX;
int64_t x532 = INT64_MIN;
int16_t x539 = -189;
uint8_t x551 = UINT8_MAX;
static uint16_t x553 = 25U;
volatile int32_t t128 = 6;
uint64_t x561 = 255470210LLU;
uint64_t x563 = UINT64_MAX;
int16_t x565 = -13191;
int8_t x566 = 0;
static int8_t x567 = INT8_MIN;
volatile int32_t t131 = 130612851;
int32_t t134 = 2051736;
static volatile int8_t x584 = INT8_MAX;
static volatile uint32_t x589 = 33877U;
volatile uint32_t t137 = 58U;
static int32_t x624 = INT32_MAX;
volatile int16_t x633 = INT16_MIN;
volatile int64_t x644 = INT64_MIN;
int8_t x645 = -1;
volatile int32_t t152 = -29;
int16_t x666 = INT16_MIN;
volatile int16_t x679 = -1;
int8_t x681 = INT8_MAX;
volatile uint32_t x694 = UINT32_MAX;
int16_t x695 = -1;
int16_t x697 = -1;
int32_t x699 = INT32_MIN;
int64_t x704 = 24250792636440345LL;
int32_t t161 = -192542284;
uint32_t x722 = UINT32_MAX;
static int64_t x735 = INT64_MAX;
volatile int32_t t169 = 1;
int16_t x738 = -114;
volatile uint8_t x747 = 6U;
uint8_t x757 = 17U;
int64_t x759 = INT64_MAX;
int64_t x763 = INT64_MAX;
static int64_t x767 = INT64_MAX;
int32_t t178 = -598;
volatile int32_t t179 = -38299441;
uint32_t x778 = UINT32_MAX;
uint64_t x781 = 846LLU;
static int16_t x784 = -1;
int32_t x789 = -1;
int8_t x790 = INT8_MIN;
volatile int64_t x796 = INT64_MIN;
int16_t x797 = -1;
uint16_t x799 = 5U;
uint64_t t189 = 4955908478331LLU;
static int64_t x821 = -866567458LL;
int16_t x823 = INT16_MIN;
uint32_t x830 = 1495576U;
volatile uint16_t x832 = 28776U;
volatile int64_t t194 = 49173LL;
int16_t x839 = 6326;
uint8_t x844 = 9U;
int32_t t196 = 289707;
int8_t x855 = 16;


void f0(void) {
    	static int8_t x1 = 27;
	static volatile int32_t x3 = -76;
	static int64_t x4 = INT64_MIN;
	int32_t t0 = 1;

    t0 = (x1-((x2==x3)<=x4));

    if (t0 != 27) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = -1;
	int64_t x6 = 9177525LL;
	volatile uint16_t x7 = UINT16_MAX;
	volatile int32_t t1 = -127373;

    t1 = (x5-((x6==x7)<=x8));

    if (t1 != -2) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x10 = 5588303U;
	volatile uint32_t x11 = UINT32_MAX;
	uint8_t x12 = UINT8_MAX;

    t2 = (x9-((x10==x11)<=x12));

    if (t2 != -32769) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x14 = 41U;
	static int8_t x15 = -63;
	volatile uint16_t x16 = 18376U;
	static int32_t t3 = 0;

    t3 = (x13-((x14==x15)<=x16));

    if (t3 != 65534) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = INT8_MIN;
	int16_t x18 = -3920;
	static uint64_t x19 = UINT64_MAX;
	uint64_t x20 = 3766274741LLU;
	static int32_t t4 = -1;

    t4 = (x17-((x18==x19)<=x20));

    if (t4 != -129) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = -1;
	uint8_t x22 = UINT8_MAX;
	int16_t x23 = INT16_MIN;
	uint16_t x24 = 25U;

    t5 = (x21-((x22==x23)<=x24));

    if (t5 != -2) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x25 = INT8_MIN;
	int16_t x28 = INT16_MIN;
	volatile int32_t t6 = 1003973394;

    t6 = (x25-((x26==x27)<=x28));

    if (t6 != -128) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile int8_t x29 = -1;
	uint8_t x30 = 0U;
	int32_t x31 = INT32_MIN;
	uint16_t x32 = 735U;
	volatile int32_t t7 = 91;

    t7 = (x29-((x30==x31)<=x32));

    if (t7 != -2) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = INT32_MIN;
	int16_t x35 = INT16_MIN;

    t8 = (x33-((x34==x35)<=x36));

    if (t8 != INT32_MIN) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x41 = -1;
	int16_t x42 = INT16_MIN;
	uint64_t x43 = UINT64_MAX;
	volatile uint64_t x44 = 7425152104LLU;
	volatile int32_t t9 = -27499222;

    t9 = (x41-((x42==x43)<=x44));

    if (t9 != -2) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x45 = 114U;
	int64_t x46 = INT64_MIN;
	int8_t x47 = 0;
	static volatile int32_t t10 = 92846569;

    t10 = (x45-((x46==x47)<=x48));

    if (t10 != 113) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x51 = INT64_MIN;
	int8_t x52 = 0;

    t11 = (x49-((x50==x51)<=x52));

    if (t11 != 255) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x57 = INT32_MAX;
	int32_t x58 = 1;
	int8_t x60 = INT8_MIN;
	volatile int32_t t12 = INT32_MAX;

    t12 = (x57-((x58==x59)<=x60));

    if (t12 != INT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x62 = 2U;
	volatile uint16_t x63 = 26260U;
	int16_t x64 = -253;

    t13 = (x61-((x62==x63)<=x64));

    if (t13 != -15LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int16_t x65 = INT16_MAX;
	volatile int64_t x66 = -1LL;
	static int64_t x67 = -421817LL;
	static int32_t t14 = 63181;

    t14 = (x65-((x66==x67)<=x68));

    if (t14 != 32766) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x69 = 14U;
	static uint16_t x70 = 65U;
	volatile uint16_t x71 = UINT16_MAX;
	int32_t x72 = -943;

    t15 = (x69-((x70==x71)<=x72));

    if (t15 != 14) { NG(); } else { ; }
	
}

void f16(void) {
    	static int16_t x73 = INT16_MAX;
	static int8_t x74 = INT8_MIN;
	int32_t x76 = 58047;

    t16 = (x73-((x74==x75)<=x76));

    if (t16 != 32766) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x77 = -1LL;
	volatile uint32_t x78 = 56U;
	int32_t x79 = -1;
	static uint16_t x80 = 14U;

    t17 = (x77-((x78==x79)<=x80));

    if (t17 != -2LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x81 = INT64_MAX;
	static int16_t x82 = INT16_MIN;
	volatile uint64_t x83 = 16801237137927LLU;
	static int64_t t18 = INT64_MAX;

    t18 = (x81-((x82==x83)<=x84));

    if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x86 = INT64_MAX;
	static int8_t x88 = INT8_MIN;
	int32_t t19 = 145021;

    t19 = (x85-((x86==x87)<=x88));

    if (t19 != -32768) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x90 = INT8_MIN;
	volatile int32_t t20 = -84;

    t20 = (x89-((x90==x91)<=x92));

    if (t20 != 126) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint64_t x97 = UINT64_MAX;
	int8_t x98 = INT8_MIN;
	int16_t x99 = -1;
	volatile uint64_t t21 = 11585362LLU;

    t21 = (x97-((x98==x99)<=x100));

    if (t21 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x101 = UINT16_MAX;
	uint32_t x102 = 1355779U;
	int32_t x103 = 739;
	static int16_t x104 = INT16_MIN;
	int32_t t22 = -434057818;

    t22 = (x101-((x102==x103)<=x104));

    if (t22 != 65535) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x105 = UINT16_MAX;
	static volatile int64_t x106 = INT64_MAX;
	uint32_t x108 = UINT32_MAX;
	int32_t t23 = 799883658;

    t23 = (x105-((x106==x107)<=x108));

    if (t23 != 65534) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint32_t x109 = 4072U;
	int64_t x110 = INT64_MAX;
	volatile int8_t x111 = INT8_MIN;
	int32_t x112 = 9983;
	uint32_t t24 = 1U;

    t24 = (x109-((x110==x111)<=x112));

    if (t24 != 4071U) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x113 = INT16_MAX;
	static int8_t x114 = INT8_MAX;
	uint64_t x115 = UINT64_MAX;
	uint8_t x116 = UINT8_MAX;
	int32_t t25 = -81;

    t25 = (x113-((x114==x115)<=x116));

    if (t25 != 32766) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x117 = INT8_MIN;
	int8_t x118 = INT8_MIN;
	volatile int32_t t26 = 146915;

    t26 = (x117-((x118==x119)<=x120));

    if (t26 != -129) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x122 = INT8_MIN;
	volatile uint64_t x124 = 173077796054873LLU;
	int32_t t27 = 12732571;

    t27 = (x121-((x122==x123)<=x124));

    if (t27 != -129) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x125 = -9918;
	static uint8_t x126 = UINT8_MAX;
	int8_t x127 = 58;
	int32_t x128 = INT32_MIN;
	static volatile int32_t t28 = -1643047;

    t28 = (x125-((x126==x127)<=x128));

    if (t28 != -9918) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x129 = -1;
	int64_t x130 = INT64_MIN;
	int32_t x131 = -123825616;
	int64_t x132 = INT64_MIN;
	static int32_t t29 = 3709;

    t29 = (x129-((x130==x131)<=x132));

    if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x133 = 118LL;
	int64_t x134 = INT64_MAX;
	uint32_t x135 = 178849991U;
	uint64_t x136 = 514231636268152532LLU;
	int64_t t30 = 397495LL;

    t30 = (x133-((x134==x135)<=x136));

    if (t30 != 117LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x137 = -20051148184219LL;
	int64_t x138 = 0LL;
	int8_t x139 = INT8_MIN;
	int16_t x140 = INT16_MIN;

    t31 = (x137-((x138==x139)<=x140));

    if (t31 != -20051148184219LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x141 = INT64_MAX;
	int8_t x142 = 1;
	volatile int64_t t32 = 2734431912965133LL;

    t32 = (x141-((x142==x143)<=x144));

    if (t32 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x145 = -7;
	volatile uint32_t x146 = UINT32_MAX;

    t33 = (x145-((x146==x147)<=x148));

    if (t33 != -8) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x149 = INT16_MIN;
	volatile int16_t x151 = 24;
	volatile uint8_t x152 = 61U;
	int32_t t34 = -1;

    t34 = (x149-((x150==x151)<=x152));

    if (t34 != -32769) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x153 = INT16_MAX;
	volatile uint32_t x154 = 483920U;
	int16_t x155 = INT16_MAX;
	volatile int8_t x156 = INT8_MAX;

    t35 = (x153-((x154==x155)<=x156));

    if (t35 != 32766) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x157 = INT16_MIN;
	int32_t x160 = 215332259;
	int32_t t36 = -51;

    t36 = (x157-((x158==x159)<=x160));

    if (t36 != -32769) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x161 = 3;
	int64_t x162 = -16208869934LL;
	uint64_t x164 = 3LLU;
	int32_t t37 = -303068184;

    t37 = (x161-((x162==x163)<=x164));

    if (t37 != 2) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x166 = INT16_MAX;
	static int32_t x168 = -1;
	int64_t t38 = -83413LL;

    t38 = (x165-((x166==x167)<=x168));

    if (t38 != 28896663884835538LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x170 = 110U;
	static int32_t x172 = INT32_MIN;
	static int32_t t39 = 834;

    t39 = (x169-((x170==x171)<=x172));

    if (t39 != -32768) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x173 = -1;
	uint16_t x174 = 8787U;
	static int32_t x176 = -1;

    t40 = (x173-((x174==x175)<=x176));

    if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x178 = -1;
	static int64_t x179 = -1LL;
	int32_t x180 = INT32_MAX;
	int32_t t41 = -165766;

    t41 = (x177-((x178==x179)<=x180));

    if (t41 != -21) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x182 = INT16_MAX;
	int32_t x183 = INT32_MIN;
	int32_t x184 = INT32_MAX;
	static volatile int32_t t42 = 74947699;

    t42 = (x181-((x182==x183)<=x184));

    if (t42 != 32766) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x185 = -76;
	uint16_t x186 = 1U;
	int64_t x187 = 16838731975LL;
	uint32_t x188 = 1010407202U;
	static volatile int32_t t43 = 508337;

    t43 = (x185-((x186==x187)<=x188));

    if (t43 != -77) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x190 = INT32_MAX;
	int8_t x191 = 0;
	int16_t x192 = -1;
	volatile int32_t t44 = -45613453;

    t44 = (x189-((x190==x191)<=x192));

    if (t44 != -32768) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x193 = -67;
	int16_t x195 = INT16_MIN;
	volatile int32_t x196 = INT32_MIN;

    t45 = (x193-((x194==x195)<=x196));

    if (t45 != -67) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x197 = INT8_MAX;
	uint8_t x198 = UINT8_MAX;
	int8_t x199 = 25;
	int64_t x200 = INT64_MIN;
	int32_t t46 = -10238;

    t46 = (x197-((x198==x199)<=x200));

    if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x203 = INT16_MIN;
	int16_t x204 = INT16_MIN;

    t47 = (x201-((x202==x203)<=x204));

    if (t47 != 32767) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x205 = 273;
	volatile int64_t x206 = INT64_MIN;
	volatile uint64_t x207 = UINT64_MAX;
	int8_t x208 = INT8_MIN;
	int32_t t48 = -615268;

    t48 = (x205-((x206==x207)<=x208));

    if (t48 != 273) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x213 = 20489LLU;
	volatile int16_t x214 = -1;
	int16_t x215 = -1;
	uint64_t x216 = 87676LLU;
	static uint64_t t49 = 9552040612901LLU;

    t49 = (x213-((x214==x215)<=x216));

    if (t49 != 20488LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x217 = 332;
	uint8_t x218 = 33U;
	int64_t x219 = INT64_MIN;
	int16_t x220 = -1;
	int32_t t50 = 1;

    t50 = (x217-((x218==x219)<=x220));

    if (t50 != 332) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x221 = -73619509LL;
	int32_t x222 = -5;
	uint8_t x223 = 0U;
	int64_t x224 = -1LL;
	static volatile int64_t t51 = -7LL;

    t51 = (x221-((x222==x223)<=x224));

    if (t51 != -73619509LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x225 = UINT64_MAX;
	int64_t x226 = 1703103585878LL;
	static uint64_t x227 = UINT64_MAX;
	int64_t x228 = -1LL;
	uint64_t t52 = UINT64_MAX;

    t52 = (x225-((x226==x227)<=x228));

    if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x229 = UINT16_MAX;
	uint16_t x230 = UINT16_MAX;
	int8_t x231 = INT8_MIN;
	int32_t x232 = 32;

    t53 = (x229-((x230==x231)<=x232));

    if (t53 != 65534) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x233 = 114741451U;
	int64_t x234 = INT64_MIN;
	int64_t x235 = INT64_MIN;
	static volatile int8_t x236 = 53;
	volatile uint32_t t54 = 25873U;

    t54 = (x233-((x234==x235)<=x236));

    if (t54 != 114741450U) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x237 = -8;
	uint16_t x240 = UINT16_MAX;
	int32_t t55 = 0;

    t55 = (x237-((x238==x239)<=x240));

    if (t55 != -9) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x243 = 24U;
	uint16_t x244 = UINT16_MAX;
	uint32_t t56 = 909U;

    t56 = (x241-((x242==x243)<=x244));

    if (t56 != 358U) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x245 = UINT64_MAX;
	uint64_t x246 = UINT64_MAX;
	uint32_t x248 = UINT32_MAX;
	uint64_t t57 = 8201599903413078LLU;

    t57 = (x245-((x246==x247)<=x248));

    if (t57 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint64_t x249 = 50454432226LLU;
	static int8_t x250 = INT8_MIN;
	uint64_t x251 = 39162535LLU;
	volatile uint16_t x252 = UINT16_MAX;
	static volatile uint64_t t58 = 18058897459969LLU;

    t58 = (x249-((x250==x251)<=x252));

    if (t58 != 50454432225LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x253 = 7U;
	static int8_t x254 = -1;
	volatile int16_t x255 = 1;
	uint64_t x256 = UINT64_MAX;

    t59 = (x253-((x254==x255)<=x256));

    if (t59 != 6) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x258 = 1;
	int32_t x259 = INT32_MIN;
	static uint8_t x260 = 1U;
	volatile int32_t t60 = -31;

    t60 = (x257-((x258==x259)<=x260));

    if (t60 != -2) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x261 = INT64_MIN;
	int32_t x263 = INT32_MIN;
	int8_t x264 = INT8_MIN;
	volatile int64_t t61 = INT64_MIN;

    t61 = (x261-((x262==x263)<=x264));

    if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x265 = -1LL;
	static volatile uint32_t x267 = 464661285U;
	int32_t x268 = -179128;
	int64_t t62 = 998LL;

    t62 = (x265-((x266==x267)<=x268));

    if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x269 = INT32_MAX;
	int64_t x270 = INT64_MIN;
	static int8_t x272 = -38;
	volatile int32_t t63 = INT32_MAX;

    t63 = (x269-((x270==x271)<=x272));

    if (t63 != INT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint32_t x273 = 239U;
	static int32_t x274 = -4486873;
	uint8_t x275 = 105U;
	uint64_t x276 = 3772122985319LLU;
	uint32_t t64 = 1U;

    t64 = (x273-((x274==x275)<=x276));

    if (t64 != 238U) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x277 = 36220U;
	int16_t x278 = INT16_MAX;
	uint64_t x279 = 6921000981780638LLU;
	volatile int32_t x280 = 338;
	volatile uint32_t t65 = 33685U;

    t65 = (x277-((x278==x279)<=x280));

    if (t65 != 36219U) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x282 = -1;
	volatile int64_t x283 = -1LL;
	int16_t x284 = -1;
	volatile int64_t t66 = 5831038285390LL;

    t66 = (x281-((x282==x283)<=x284));

    if (t66 != -10604870LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x285 = UINT8_MAX;
	volatile uint32_t x286 = UINT32_MAX;
	uint64_t x288 = 2541LLU;
	int32_t t67 = -190;

    t67 = (x285-((x286==x287)<=x288));

    if (t67 != 254) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint32_t x291 = 1U;
	int64_t x292 = INT64_MIN;
	static volatile int64_t t68 = INT64_MIN;

    t68 = (x289-((x290==x291)<=x292));

    if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x294 = UINT8_MAX;
	int64_t x295 = INT64_MAX;
	static int16_t x296 = -1;
	volatile int32_t t69 = -1;

    t69 = (x293-((x294==x295)<=x296));

    if (t69 != -32768) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x297 = 0LLU;
	int16_t x299 = INT16_MIN;
	static uint64_t t70 = UINT64_MAX;

    t70 = (x297-((x298==x299)<=x300));

    if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x304 = -1;
	volatile int32_t t71 = 2785704;

    t71 = (x301-((x302==x303)<=x304));

    if (t71 != -32768) { NG(); } else { ; }
	
}

void f72(void) {
    	static int32_t x305 = 1579983;
	int32_t x306 = -218915187;
	static int32_t x307 = -1;
	int32_t x308 = INT32_MIN;

    t72 = (x305-((x306==x307)<=x308));

    if (t72 != 1579983) { NG(); } else { ; }
	
}

void f73(void) {
    	static int16_t x311 = -1;
	int32_t t73 = 1;

    t73 = (x309-((x310==x311)<=x312));

    if (t73 != -2) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x313 = 58192023105424403LLU;
	int8_t x314 = -5;
	volatile int16_t x315 = INT16_MIN;
	static volatile int32_t x316 = INT32_MIN;
	volatile uint64_t t74 = 1734905LLU;

    t74 = (x313-((x314==x315)<=x316));

    if (t74 != 58192023105424403LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile uint16_t x318 = 18972U;
	volatile uint64_t x319 = 267208598030LLU;
	static int8_t x320 = -1;
	static int32_t t75 = 391;

    t75 = (x317-((x318==x319)<=x320));

    if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint64_t x321 = 2247415464879387138LLU;
	static int64_t x323 = INT64_MAX;
	static int8_t x324 = -1;

    t76 = (x321-((x322==x323)<=x324));

    if (t76 != 2247415464879387138LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x329 = INT8_MIN;
	uint64_t x330 = 3957455LLU;
	uint8_t x331 = 1U;
	int32_t x332 = INT32_MIN;
	int32_t t77 = 817443375;

    t77 = (x329-((x330==x331)<=x332));

    if (t77 != -128) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x333 = INT32_MAX;
	uint64_t x334 = 33086042567LLU;
	int64_t x335 = INT64_MIN;
	int16_t x336 = INT16_MAX;
	volatile int32_t t78 = 1063;

    t78 = (x333-((x334==x335)<=x336));

    if (t78 != 2147483646) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x341 = 1U;
	int32_t x342 = -118814918;
	int8_t x343 = -18;
	int8_t x344 = INT8_MIN;

    t79 = (x341-((x342==x343)<=x344));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x345 = -9960491;
	int16_t x346 = 3;
	static int16_t x348 = INT16_MIN;
	int32_t t80 = -139;

    t80 = (x345-((x346==x347)<=x348));

    if (t80 != -9960491) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x349 = -1;
	volatile int32_t x350 = -933478750;
	uint16_t x351 = 22104U;
	uint64_t x352 = 49599LLU;
	volatile int32_t t81 = -2436027;

    t81 = (x349-((x350==x351)<=x352));

    if (t81 != -2) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x354 = INT32_MAX;
	uint16_t x356 = 23756U;
	static volatile int32_t t82 = 76492;

    t82 = (x353-((x354==x355)<=x356));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x357 = UINT32_MAX;
	uint32_t x358 = 494807806U;
	uint64_t x359 = 203905533809LLU;
	int64_t x360 = -751620758325LL;
	static volatile uint32_t t83 = UINT32_MAX;

    t83 = (x357-((x358==x359)<=x360));

    if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint16_t x363 = UINT16_MAX;
	static int16_t x364 = 2;
	int32_t t84 = -271962;

    t84 = (x361-((x362==x363)<=x364));

    if (t84 != 41) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x365 = INT64_MIN;
	static int16_t x366 = -1;
	int8_t x367 = -1;
	static int64_t t85 = INT64_MIN;

    t85 = (x365-((x366==x367)<=x368));

    if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x374 = -1;
	uint16_t x375 = 2012U;
	volatile int8_t x376 = INT8_MAX;

    t86 = (x373-((x374==x375)<=x376));

    if (t86 != -44410LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x377 = INT32_MIN;
	uint16_t x378 = UINT16_MAX;
	int64_t x379 = INT64_MIN;
	int16_t x380 = -1;
	int32_t t87 = INT32_MIN;

    t87 = (x377-((x378==x379)<=x380));

    if (t87 != INT32_MIN) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint64_t x381 = UINT64_MAX;

    t88 = (x381-((x382==x383)<=x384));

    if (t88 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x385 = -1282827473239888LL;
	static int16_t x386 = INT16_MIN;
	int16_t x387 = INT16_MIN;
	uint16_t x388 = UINT16_MAX;
	static volatile int64_t t89 = -1054394714403412LL;

    t89 = (x385-((x386==x387)<=x388));

    if (t89 != -1282827473239889LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile int8_t x391 = -52;
	static int16_t x392 = 0;
	static volatile int32_t t90 = -89;

    t90 = (x389-((x390==x391)<=x392));

    if (t90 != -32769) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x394 = 1;
	static int16_t x395 = -26;
	static volatile int32_t t91 = -1137405;

    t91 = (x393-((x394==x395)<=x396));

    if (t91 != -32769) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint8_t x399 = 10U;
	int8_t x400 = INT8_MAX;

    t92 = (x397-((x398==x399)<=x400));

    if (t92 != 32766) { NG(); } else { ; }
	
}

void f93(void) {
    	static int32_t x402 = INT32_MIN;
	int16_t x403 = INT16_MIN;
	uint64_t x404 = 2934465701LLU;

    t93 = (x401-((x402==x403)<=x404));

    if (t93 != -2LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x405 = 30209465898LLU;
	int16_t x406 = -992;
	static int64_t x407 = INT64_MIN;
	uint32_t x408 = 2905730U;
	volatile uint64_t t94 = 122809LLU;

    t94 = (x405-((x406==x407)<=x408));

    if (t94 != 30209465897LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x409 = INT16_MIN;
	static int16_t x410 = INT16_MIN;
	uint16_t x411 = UINT16_MAX;
	int8_t x412 = INT8_MIN;
	static int32_t t95 = 3;

    t95 = (x409-((x410==x411)<=x412));

    if (t95 != -32768) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x413 = INT16_MIN;
	int16_t x414 = INT16_MIN;
	int32_t x415 = INT32_MAX;
	int32_t x416 = 0;
	static int32_t t96 = 241;

    t96 = (x413-((x414==x415)<=x416));

    if (t96 != -32769) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x417 = 1U;
	volatile uint8_t x418 = 72U;
	int64_t x419 = -1LL;
	uint16_t x420 = 0U;
	int32_t t97 = 0;

    t97 = (x417-((x418==x419)<=x420));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x421 = 104919967U;
	uint64_t x422 = 4966168LLU;
	int8_t x423 = 0;
	uint8_t x424 = 12U;
	static volatile uint32_t t98 = 21279U;

    t98 = (x421-((x422==x423)<=x424));

    if (t98 != 104919966U) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x430 = INT64_MIN;
	static uint64_t x431 = UINT64_MAX;
	int64_t x432 = -1LL;
	volatile uint64_t t99 = 7816LLU;

    t99 = (x429-((x430==x431)<=x432));

    if (t99 != 197026527788967740LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x433 = INT64_MAX;
	uint32_t x434 = 7565001U;
	static int32_t x436 = INT32_MIN;

    t100 = (x433-((x434==x435)<=x436));

    if (t100 != INT64_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x441 = INT8_MIN;
	int8_t x442 = INT8_MIN;
	static int16_t x443 = -11;
	volatile int32_t t101 = 16577;

    t101 = (x441-((x442==x443)<=x444));

    if (t101 != -129) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x445 = INT32_MIN;
	int32_t x446 = INT32_MAX;
	int64_t x447 = INT64_MIN;
	int8_t x448 = INT8_MIN;
	volatile int32_t t102 = INT32_MIN;

    t102 = (x445-((x446==x447)<=x448));

    if (t102 != INT32_MIN) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x449 = INT8_MAX;
	volatile int64_t x450 = INT64_MIN;
	static volatile int64_t x451 = INT64_MIN;
	uint8_t x452 = 12U;
	int32_t t103 = -46356;

    t103 = (x449-((x450==x451)<=x452));

    if (t103 != 126) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x453 = -6;
	volatile uint8_t x454 = UINT8_MAX;
	uint32_t x455 = 32U;
	int8_t x456 = -1;
	volatile int32_t t104 = 115;

    t104 = (x453-((x454==x455)<=x456));

    if (t104 != -6) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x457 = 89623189107977LL;
	int64_t x458 = -1LL;
	int64_t x459 = -210153LL;
	volatile int64_t x460 = INT64_MIN;

    t105 = (x457-((x458==x459)<=x460));

    if (t105 != 89623189107977LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static int32_t x461 = 110;
	int32_t x463 = 327;
	int8_t x464 = 0;
	int32_t t106 = -10;

    t106 = (x461-((x462==x463)<=x464));

    if (t106 != 109) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x465 = 229U;
	uint64_t x467 = 236110LLU;
	uint32_t x468 = 104351U;

    t107 = (x465-((x466==x467)<=x468));

    if (t107 != 228) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x469 = UINT16_MAX;
	uint32_t x470 = 266437107U;
	static uint32_t x471 = 60323U;
	uint16_t x472 = UINT16_MAX;
	int32_t t108 = 1;

    t108 = (x469-((x470==x471)<=x472));

    if (t108 != 65534) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x473 = INT8_MAX;
	uint16_t x475 = 11847U;
	uint8_t x476 = 4U;
	volatile int32_t t109 = 229445645;

    t109 = (x473-((x474==x475)<=x476));

    if (t109 != 126) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x477 = 3242U;
	int16_t x478 = INT16_MIN;
	uint32_t t110 = 2U;

    t110 = (x477-((x478==x479)<=x480));

    if (t110 != 3242U) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x482 = INT16_MAX;
	int32_t x483 = INT32_MIN;
	int64_t x484 = INT64_MAX;
	volatile int64_t t111 = 53487226251207LL;

    t111 = (x481-((x482==x483)<=x484));

    if (t111 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x486 = INT32_MIN;
	static volatile int64_t x487 = INT64_MAX;

    t112 = (x485-((x486==x487)<=x488));

    if (t112 != 32766) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int8_t x489 = INT8_MIN;
	uint64_t x490 = 2354LLU;
	static int32_t x491 = 15857703;
	int64_t x492 = 4LL;
	static int32_t t113 = 1;

    t113 = (x489-((x490==x491)<=x492));

    if (t113 != -129) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x493 = 2;
	int32_t x494 = INT32_MIN;
	int64_t x495 = INT64_MIN;
	volatile int8_t x496 = -42;

    t114 = (x493-((x494==x495)<=x496));

    if (t114 != 2) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x501 = -26;
	int64_t x502 = 68937914793277111LL;
	int16_t x504 = -1;
	int32_t t115 = -880630977;

    t115 = (x501-((x502==x503)<=x504));

    if (t115 != -26) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x505 = INT16_MIN;
	int64_t x507 = INT64_MAX;
	int32_t x508 = INT32_MIN;

    t116 = (x505-((x506==x507)<=x508));

    if (t116 != -32768) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint16_t x509 = 6853U;
	uint32_t x510 = 55U;
	uint8_t x511 = 4U;
	volatile uint32_t x512 = UINT32_MAX;
	volatile int32_t t117 = -33;

    t117 = (x509-((x510==x511)<=x512));

    if (t117 != 6852) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint8_t x514 = UINT8_MAX;
	uint8_t x516 = 9U;
	int64_t t118 = 439LL;

    t118 = (x513-((x514==x515)<=x516));

    if (t118 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x517 = -1;
	uint64_t x518 = 1722822LLU;
	int64_t x519 = INT64_MIN;
	int32_t x520 = INT32_MIN;
	static volatile int32_t t119 = -8192;

    t119 = (x517-((x518==x519)<=x520));

    if (t119 != -1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x521 = UINT64_MAX;
	int16_t x522 = -2476;
	uint64_t x523 = 51355136066LLU;
	int64_t x524 = INT64_MIN;
	static uint64_t t120 = UINT64_MAX;

    t120 = (x521-((x522==x523)<=x524));

    if (t120 != UINT64_MAX) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x525 = 14U;
	static uint8_t x527 = UINT8_MAX;
	volatile int8_t x528 = INT8_MAX;
	int32_t t121 = -9;

    t121 = (x525-((x526==x527)<=x528));

    if (t121 != 13) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x529 = INT64_MIN;
	static int32_t x531 = INT32_MIN;
	static int64_t t122 = INT64_MIN;

    t122 = (x529-((x530==x531)<=x532));

    if (t122 != INT64_MIN) { NG(); } else { ; }
	
}

void f123(void) {
    	static int32_t x533 = -7630;
	uint64_t x534 = UINT64_MAX;
	static int32_t x535 = 160;
	uint16_t x536 = 7U;
	static volatile int32_t t123 = 70;

    t123 = (x533-((x534==x535)<=x536));

    if (t123 != -7631) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x537 = UINT64_MAX;
	volatile int64_t x538 = INT64_MAX;
	int16_t x540 = INT16_MIN;
	uint64_t t124 = UINT64_MAX;

    t124 = (x537-((x538==x539)<=x540));

    if (t124 != UINT64_MAX) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x541 = -29;
	uint8_t x542 = 20U;
	uint16_t x543 = UINT16_MAX;
	uint8_t x544 = 1U;
	int32_t t125 = -3399;

    t125 = (x541-((x542==x543)<=x544));

    if (t125 != -30) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x545 = INT8_MAX;
	uint64_t x546 = 1258298068LLU;
	int32_t x547 = -105070;
	uint32_t x548 = UINT32_MAX;
	volatile int32_t t126 = 0;

    t126 = (x545-((x546==x547)<=x548));

    if (t126 != 126) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x549 = INT32_MAX;
	volatile int8_t x550 = -25;
	uint64_t x552 = 117LLU;
	volatile int32_t t127 = -53827;

    t127 = (x549-((x550==x551)<=x552));

    if (t127 != 2147483646) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x554 = UINT16_MAX;
	static uint32_t x555 = 1U;
	int8_t x556 = INT8_MIN;

    t128 = (x553-((x554==x555)<=x556));

    if (t128 != 25) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x557 = -1LL;
	int16_t x558 = INT16_MIN;
	int32_t x559 = INT32_MAX;
	volatile int32_t x560 = INT32_MIN;
	volatile int64_t t129 = 5821057LL;

    t129 = (x557-((x558==x559)<=x560));

    if (t129 != -1LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x562 = INT16_MAX;
	uint64_t x564 = 24466695667880LLU;
	volatile uint64_t t130 = 171669523729787LLU;

    t130 = (x561-((x562==x563)<=x564));

    if (t130 != 255470209LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x568 = 915;

    t131 = (x565-((x566==x567)<=x568));

    if (t131 != -13192) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x569 = 0U;
	volatile uint32_t x570 = UINT32_MAX;
	uint32_t x571 = UINT32_MAX;
	static int64_t x572 = INT64_MAX;
	static int32_t t132 = 2744484;

    t132 = (x569-((x570==x571)<=x572));

    if (t132 != -1) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint16_t x573 = UINT16_MAX;
	static int8_t x574 = INT8_MIN;
	uint8_t x575 = 1U;
	volatile int16_t x576 = -1986;
	static int32_t t133 = -1190153;

    t133 = (x573-((x574==x575)<=x576));

    if (t133 != 65535) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x577 = 4710;
	int32_t x578 = INT32_MAX;
	static uint8_t x579 = 21U;
	int32_t x580 = INT32_MIN;

    t134 = (x577-((x578==x579)<=x580));

    if (t134 != 4710) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint8_t x581 = 29U;
	volatile uint8_t x582 = 0U;
	int64_t x583 = 130098LL;
	volatile int32_t t135 = 1834143;

    t135 = (x581-((x582==x583)<=x584));

    if (t135 != 28) { NG(); } else { ; }
	
}

void f136(void) {
    	static int8_t x585 = -31;
	uint64_t x586 = 523372277910LLU;
	volatile int8_t x587 = INT8_MIN;
	int8_t x588 = INT8_MIN;
	volatile int32_t t136 = 6;

    t136 = (x585-((x586==x587)<=x588));

    if (t136 != -31) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x590 = 909U;
	uint8_t x591 = 21U;
	int32_t x592 = 33403;

    t137 = (x589-((x590==x591)<=x592));

    if (t137 != 33876U) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x593 = UINT32_MAX;
	uint32_t x594 = UINT32_MAX;
	int8_t x595 = 12;
	static volatile uint32_t x596 = UINT32_MAX;
	volatile uint32_t t138 = 38493U;

    t138 = (x593-((x594==x595)<=x596));

    if (t138 != 4294967294U) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint16_t x597 = 27U;
	int32_t x598 = -1;
	int64_t x599 = -24244673421996LL;
	volatile uint64_t x600 = 2927693378862591LLU;
	int32_t t139 = 525443025;

    t139 = (x597-((x598==x599)<=x600));

    if (t139 != 26) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x601 = 12;
	static int64_t x602 = 8273844415LL;
	int16_t x603 = INT16_MIN;
	int8_t x604 = -1;
	static volatile int32_t t140 = 14305610;

    t140 = (x601-((x602==x603)<=x604));

    if (t140 != 12) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int32_t x605 = -1;
	static int32_t x606 = 1;
	uint16_t x607 = UINT16_MAX;
	volatile int8_t x608 = -3;
	int32_t t141 = -257;

    t141 = (x605-((x606==x607)<=x608));

    if (t141 != -1) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x613 = INT32_MAX;
	int8_t x614 = INT8_MAX;
	int8_t x615 = INT8_MIN;
	static int32_t x616 = 22;
	volatile int32_t t142 = 1;

    t142 = (x613-((x614==x615)<=x616));

    if (t142 != 2147483646) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x617 = 30LLU;
	int16_t x618 = -1;
	static uint16_t x619 = UINT16_MAX;
	int8_t x620 = INT8_MIN;
	static uint64_t t143 = 566946906LLU;

    t143 = (x617-((x618==x619)<=x620));

    if (t143 != 30LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x621 = INT16_MAX;
	volatile int8_t x622 = INT8_MAX;
	uint16_t x623 = UINT16_MAX;
	int32_t t144 = 55;

    t144 = (x621-((x622==x623)<=x624));

    if (t144 != 32766) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile uint32_t x629 = UINT32_MAX;
	int32_t x630 = 11718;
	int32_t x631 = -804918;
	volatile uint64_t x632 = 39726252LLU;
	uint32_t t145 = 6706U;

    t145 = (x629-((x630==x631)<=x632));

    if (t145 != 4294967294U) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x634 = 27223;
	uint32_t x635 = 174221U;
	static volatile int8_t x636 = -1;
	int32_t t146 = -346154;

    t146 = (x633-((x634==x635)<=x636));

    if (t146 != -32768) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint64_t x637 = 8093833961561572LLU;
	volatile int8_t x638 = 1;
	volatile int64_t x639 = INT64_MIN;
	int32_t x640 = INT32_MIN;
	volatile uint64_t t147 = 45452223587232894LLU;

    t147 = (x637-((x638==x639)<=x640));

    if (t147 != 8093833961561572LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x641 = INT64_MIN;
	int32_t x642 = 886377;
	static int32_t x643 = INT32_MAX;
	int64_t t148 = INT64_MIN;

    t148 = (x641-((x642==x643)<=x644));

    if (t148 != INT64_MIN) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x646 = UINT32_MAX;
	static int64_t x647 = 48693891LL;
	volatile int8_t x648 = -1;
	volatile int32_t t149 = -2233;

    t149 = (x645-((x646==x647)<=x648));

    if (t149 != -1) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x653 = INT16_MAX;
	int64_t x654 = 519LL;
	uint16_t x655 = 0U;
	uint64_t x656 = UINT64_MAX;
	volatile int32_t t150 = -592;

    t150 = (x653-((x654==x655)<=x656));

    if (t150 != 32766) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x657 = 5616747191151496310LLU;
	static int32_t x658 = -8;
	uint16_t x659 = 3595U;
	volatile uint64_t x660 = 2281732737LLU;
	uint64_t t151 = 68LLU;

    t151 = (x657-((x658==x659)<=x660));

    if (t151 != 5616747191151496309LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x661 = INT8_MIN;
	int32_t x662 = INT32_MAX;
	volatile int8_t x663 = 15;
	uint32_t x664 = 14298U;

    t152 = (x661-((x662==x663)<=x664));

    if (t152 != -129) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x665 = 4484868358246LL;
	int16_t x667 = INT16_MAX;
	int8_t x668 = INT8_MIN;
	int64_t t153 = 3784055757LL;

    t153 = (x665-((x666==x667)<=x668));

    if (t153 != 4484868358246LL) { NG(); } else { ; }
	
}

void f154(void) {
    	static int64_t x669 = INT64_MIN;
	int16_t x670 = -1;
	uint8_t x671 = 10U;
	int8_t x672 = -1;
	static volatile int64_t t154 = INT64_MIN;

    t154 = (x669-((x670==x671)<=x672));

    if (t154 != INT64_MIN) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x673 = INT8_MIN;
	static volatile int64_t x674 = INT64_MIN;
	static volatile int16_t x675 = INT16_MAX;
	int16_t x676 = -1;
	static int32_t t155 = 98052;

    t155 = (x673-((x674==x675)<=x676));

    if (t155 != -128) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int64_t x677 = -405422058LL;
	uint64_t x678 = UINT64_MAX;
	int32_t x680 = INT32_MAX;
	static volatile int64_t t156 = 770506LL;

    t156 = (x677-((x678==x679)<=x680));

    if (t156 != -405422059LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x682 = UINT32_MAX;
	int16_t x683 = INT16_MIN;
	int16_t x684 = 15;
	volatile int32_t t157 = 165920;

    t157 = (x681-((x682==x683)<=x684));

    if (t157 != 126) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int8_t x685 = INT8_MIN;
	uint16_t x686 = UINT16_MAX;
	uint32_t x687 = 209U;
	int64_t x688 = INT64_MAX;
	int32_t t158 = -45;

    t158 = (x685-((x686==x687)<=x688));

    if (t158 != -129) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x693 = INT8_MAX;
	volatile int16_t x696 = 1;
	volatile int32_t t159 = -1;

    t159 = (x693-((x694==x695)<=x696));

    if (t159 != 126) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint16_t x698 = UINT16_MAX;
	volatile int32_t x700 = INT32_MAX;
	static int32_t t160 = 9;

    t160 = (x697-((x698==x699)<=x700));

    if (t160 != -2) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x701 = -1;
	volatile uint64_t x702 = UINT64_MAX;
	int64_t x703 = -10902150LL;

    t161 = (x701-((x702==x703)<=x704));

    if (t161 != -2) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x705 = 23925U;
	uint64_t x706 = 6LLU;
	volatile int8_t x707 = 3;
	int8_t x708 = INT8_MIN;
	volatile int32_t t162 = -1138813;

    t162 = (x705-((x706==x707)<=x708));

    if (t162 != 23925) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint16_t x709 = 3454U;
	uint8_t x710 = 2U;
	static volatile int32_t x711 = INT32_MIN;
	uint32_t x712 = UINT32_MAX;
	int32_t t163 = -61848738;

    t163 = (x709-((x710==x711)<=x712));

    if (t163 != 3453) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x713 = 13U;
	volatile uint64_t x714 = UINT64_MAX;
	uint8_t x715 = UINT8_MAX;
	static volatile int16_t x716 = INT16_MAX;
	uint32_t t164 = 10321354U;

    t164 = (x713-((x714==x715)<=x716));

    if (t164 != 12U) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint32_t x717 = 1U;
	int8_t x718 = INT8_MIN;
	static int64_t x719 = INT64_MAX;
	volatile int16_t x720 = 9;
	uint32_t t165 = 471U;

    t165 = (x717-((x718==x719)<=x720));

    if (t165 != 0U) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x721 = 2949U;
	uint8_t x723 = 12U;
	static volatile uint16_t x724 = UINT16_MAX;
	int32_t t166 = -5;

    t166 = (x721-((x722==x723)<=x724));

    if (t166 != 2948) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x725 = INT64_MAX;
	int16_t x726 = 1011;
	uint64_t x727 = 61378513472LLU;
	volatile int8_t x728 = 6;
	int64_t t167 = 2LL;

    t167 = (x725-((x726==x727)<=x728));

    if (t167 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x729 = INT16_MIN;
	static int64_t x730 = INT64_MAX;
	int8_t x731 = 1;
	volatile int16_t x732 = INT16_MIN;
	int32_t t168 = -94520730;

    t168 = (x729-((x730==x731)<=x732));

    if (t168 != -32768) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x733 = UINT16_MAX;
	uint32_t x734 = 619U;
	uint32_t x736 = 3651870U;

    t169 = (x733-((x734==x735)<=x736));

    if (t169 != 65534) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x737 = INT32_MIN;
	static int32_t x739 = -1864566;
	static int16_t x740 = INT16_MIN;
	volatile int32_t t170 = INT32_MIN;

    t170 = (x737-((x738==x739)<=x740));

    if (t170 != INT32_MIN) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x741 = INT16_MIN;
	int32_t x742 = 0;
	uint8_t x743 = 5U;
	int32_t x744 = INT32_MIN;
	int32_t t171 = -19061;

    t171 = (x741-((x742==x743)<=x744));

    if (t171 != -32768) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x745 = 32U;
	int32_t x746 = -1;
	volatile int8_t x748 = INT8_MAX;
	int32_t t172 = 112456;

    t172 = (x745-((x746==x747)<=x748));

    if (t172 != 31) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x749 = INT16_MIN;
	int16_t x750 = -1;
	volatile int64_t x751 = -1LL;
	int32_t x752 = -1;
	int32_t t173 = 2;

    t173 = (x749-((x750==x751)<=x752));

    if (t173 != -32768) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x753 = UINT64_MAX;
	uint8_t x754 = UINT8_MAX;
	int64_t x755 = 122LL;
	int16_t x756 = INT16_MIN;
	uint64_t t174 = UINT64_MAX;

    t174 = (x753-((x754==x755)<=x756));

    if (t174 != UINT64_MAX) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint8_t x758 = UINT8_MAX;
	uint16_t x760 = 1U;
	int32_t t175 = -867204;

    t175 = (x757-((x758==x759)<=x760));

    if (t175 != 16) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int8_t x761 = INT8_MAX;
	static int8_t x762 = -17;
	volatile int8_t x764 = -2;
	int32_t t176 = -1;

    t176 = (x761-((x762==x763)<=x764));

    if (t176 != 127) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x765 = 2;
	static uint16_t x766 = 5U;
	volatile uint32_t x768 = UINT32_MAX;
	volatile int32_t t177 = -32633437;

    t177 = (x765-((x766==x767)<=x768));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x769 = UINT16_MAX;
	volatile int8_t x770 = INT8_MIN;
	int16_t x771 = -1;
	volatile int32_t x772 = -5771207;

    t178 = (x769-((x770==x771)<=x772));

    if (t178 != 65535) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x773 = 31U;
	static int64_t x774 = 17285LL;
	uint8_t x775 = 7U;
	int16_t x776 = INT16_MIN;

    t179 = (x773-((x774==x775)<=x776));

    if (t179 != 31) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x777 = 1U;
	uint8_t x779 = UINT8_MAX;
	static int8_t x780 = -19;
	static volatile int32_t t180 = -2;

    t180 = (x777-((x778==x779)<=x780));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x782 = INT8_MIN;
	static int16_t x783 = -6;
	volatile uint64_t t181 = 42711157050996159LLU;

    t181 = (x781-((x782==x783)<=x784));

    if (t181 != 846LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x785 = 1U;
	int32_t x786 = -1;
	volatile int8_t x787 = -1;
	int8_t x788 = INT8_MIN;
	volatile int32_t t182 = -544;

    t182 = (x785-((x786==x787)<=x788));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint64_t x791 = 3034688890106938LLU;
	volatile int8_t x792 = 22;
	int32_t t183 = 59297;

    t183 = (x789-((x790==x791)<=x792));

    if (t183 != -2) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x793 = INT8_MAX;
	int32_t x794 = INT32_MIN;
	static uint64_t x795 = UINT64_MAX;
	volatile int32_t t184 = 14;

    t184 = (x793-((x794==x795)<=x796));

    if (t184 != 127) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x798 = 0;
	int8_t x800 = -1;
	static volatile int32_t t185 = -120399;

    t185 = (x797-((x798==x799)<=x800));

    if (t185 != -1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint64_t x801 = 4199667LLU;
	volatile uint32_t x802 = UINT32_MAX;
	uint64_t x803 = 8998344146LLU;
	uint8_t x804 = UINT8_MAX;
	volatile uint64_t t186 = 8072283811134308LLU;

    t186 = (x801-((x802==x803)<=x804));

    if (t186 != 4199666LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x805 = INT64_MAX;
	int32_t x806 = INT32_MIN;
	static int8_t x807 = 16;
	uint64_t x808 = 134782971638LLU;
	volatile int64_t t187 = 16978206231049LL;

    t187 = (x805-((x806==x807)<=x808));

    if (t187 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint64_t x809 = UINT64_MAX;
	uint16_t x810 = UINT16_MAX;
	int64_t x811 = -1LL;
	static volatile int32_t x812 = INT32_MIN;
	volatile uint64_t t188 = UINT64_MAX;

    t188 = (x809-((x810==x811)<=x812));

    if (t188 != UINT64_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x813 = 926978766655LLU;
	int8_t x814 = 7;
	int16_t x815 = -1;
	uint32_t x816 = 100U;

    t189 = (x813-((x814==x815)<=x816));

    if (t189 != 926978766654LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x817 = 3LL;
	static uint64_t x818 = 58375032839LLU;
	static int8_t x819 = -1;
	uint64_t x820 = 4386841924378LLU;
	volatile int64_t t190 = -369LL;

    t190 = (x817-((x818==x819)<=x820));

    if (t190 != 2LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x822 = -1LL;
	static int8_t x824 = INT8_MAX;
	static volatile int64_t t191 = 32547LL;

    t191 = (x821-((x822==x823)<=x824));

    if (t191 != -866567459LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x825 = INT8_MIN;
	uint16_t x826 = 62U;
	static int16_t x827 = 54;
	static uint64_t x828 = 29258892570229032LLU;
	volatile int32_t t192 = 61;

    t192 = (x825-((x826==x827)<=x828));

    if (t192 != -129) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x829 = 8218LLU;
	int8_t x831 = INT8_MIN;
	volatile uint64_t t193 = 2032372810LLU;

    t193 = (x829-((x830==x831)<=x832));

    if (t193 != 8217LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x833 = 2090589727764368LL;
	int32_t x834 = -456534;
	uint64_t x835 = 6911LLU;
	int16_t x836 = -1;

    t194 = (x833-((x834==x835)<=x836));

    if (t194 != 2090589727764368LL) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint16_t x837 = UINT16_MAX;
	volatile int64_t x838 = 899106315111714LL;
	uint64_t x840 = UINT64_MAX;
	static volatile int32_t t195 = 148033410;

    t195 = (x837-((x838==x839)<=x840));

    if (t195 != 65534) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x841 = 507;
	uint16_t x842 = 1228U;
	static uint64_t x843 = 1410422661LLU;

    t196 = (x841-((x842==x843)<=x844));

    if (t196 != 506) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x845 = -1;
	static int32_t x846 = -161798461;
	int64_t x847 = -1LL;
	int32_t x848 = 857858895;
	static int32_t t197 = -516824752;

    t197 = (x845-((x846==x847)<=x848));

    if (t197 != -2) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x849 = INT16_MAX;
	int32_t x850 = -217;
	static uint64_t x851 = 318183062544969LLU;
	int64_t x852 = -1LL;
	volatile int32_t t198 = -1;

    t198 = (x849-((x850==x851)<=x852));

    if (t198 != 32767) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x853 = 2U;
	uint16_t x854 = 52U;
	int8_t x856 = -7;
	uint32_t t199 = 170831430U;

    t199 = (x853-((x854==x855)<=x856));

    if (t199 != 2U) { NG(); } else { ; }
	
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

