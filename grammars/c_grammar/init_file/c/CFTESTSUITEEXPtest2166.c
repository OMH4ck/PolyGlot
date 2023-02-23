
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

int64_t x1 = 942967416LL;
int8_t x3 = -1;
volatile int16_t x8 = -1;
static int32_t t1 = -1;
int16_t x14 = INT16_MIN;
int32_t x17 = -122126451;
int8_t x19 = INT8_MIN;
static int8_t x29 = -1;
int64_t x33 = INT64_MIN;
int32_t t8 = 1;
static uint32_t x47 = 0U;
int8_t x53 = INT8_MIN;
uint16_t x55 = UINT16_MAX;
volatile int16_t x60 = INT16_MIN;
static uint64_t x64 = UINT64_MAX;
int64_t x81 = INT64_MAX;
volatile int32_t t18 = 2;
volatile uint64_t x90 = 1LLU;
int32_t x101 = INT32_MIN;
volatile int32_t t24 = 2;
static uint16_t x121 = UINT16_MAX;
uint64_t x124 = 109126776917116073LLU;
uint32_t x138 = 334887289U;
volatile int32_t t30 = 12658;
static volatile int64_t x142 = -229474539946742LL;
volatile int8_t x145 = INT8_MIN;
int32_t t32 = -11;
int32_t t34 = -24;
int8_t x162 = INT8_MIN;
volatile int16_t x163 = -12;
int16_t x165 = -37;
int16_t x167 = -13841;
int32_t t38 = 1;
int16_t x175 = INT16_MIN;
static uint64_t x183 = 7545802686940793551LLU;
int8_t x210 = INT8_MIN;
volatile int64_t x213 = 11685LL;
int32_t x214 = -8;
int64_t x216 = 334854862LL;
uint64_t x218 = UINT64_MAX;
static int64_t x225 = -269237748834782981LL;
int32_t x231 = 1;
volatile int32_t t53 = 20253273;
int8_t x239 = INT8_MIN;
int32_t t54 = 18;
volatile uint64_t x256 = 56787421814464917LLU;
int64_t x257 = 480875LL;
int64_t x270 = 2956463309012893LL;
static int8_t x271 = -8;
int16_t x273 = INT16_MIN;
uint16_t x274 = UINT16_MAX;
volatile uint8_t x283 = UINT8_MAX;
int16_t x284 = -4097;
static int16_t x291 = -1;
int8_t x301 = -7;
volatile int8_t x305 = 1;
uint16_t x308 = UINT16_MAX;
int8_t x316 = 59;
uint64_t x320 = 75796636832LLU;
int16_t x322 = INT16_MIN;
static volatile int16_t x323 = INT16_MIN;
volatile int8_t x324 = -1;
volatile int32_t t73 = 0;
int8_t x325 = -60;
int64_t x328 = INT64_MIN;
uint8_t x329 = UINT8_MAX;
uint16_t x331 = 13U;
volatile int32_t t76 = -1488;
static uint32_t x339 = 214U;
uint64_t x346 = 1900239968613LLU;
int64_t x350 = 2182933LL;
uint32_t x353 = 12349U;
int32_t x356 = 0;
int32_t t82 = -1;
uint8_t x361 = 2U;
static int32_t x368 = -2517589;
int32_t t84 = -1;
volatile int32_t x377 = INT32_MIN;
int16_t x385 = -1;
static int64_t x387 = -1LL;
volatile uint16_t x388 = UINT16_MAX;
int16_t x390 = -6893;
static int64_t x397 = 78LL;
int16_t x409 = INT16_MIN;
static uint64_t x411 = UINT64_MAX;
volatile int32_t t95 = 72532;
int32_t x414 = -1;
volatile int32_t t99 = 4;
volatile int8_t x437 = INT8_MIN;
volatile int32_t t101 = 21;
static uint8_t x442 = 11U;
static volatile int32_t x457 = INT32_MIN;
int8_t x458 = -14;
int64_t x461 = INT64_MAX;
uint64_t x462 = 32772894LLU;
uint32_t x469 = 0U;
int32_t t108 = 723;
volatile int32_t t109 = -31371;
int8_t x477 = INT8_MIN;
static int8_t x484 = -1;
int8_t x485 = 31;
int64_t x488 = -44353217281653521LL;
static volatile uint16_t x489 = UINT16_MAX;
uint32_t x493 = 916727849U;
int8_t x495 = INT8_MIN;
int8_t x503 = INT8_MAX;
static uint16_t x506 = 6U;
int32_t t117 = -2028;
int8_t x518 = 14;
volatile int32_t t119 = -255;
static uint16_t x534 = 152U;
int64_t x537 = INT64_MIN;
int16_t x540 = INT16_MIN;
volatile int16_t x541 = -1;
int64_t x556 = -107803016LL;
volatile uint8_t x557 = 53U;
uint32_t x559 = 1713U;
int32_t t128 = 275;
int32_t t131 = 166796;
uint32_t x587 = 12U;
int16_t x588 = INT16_MAX;
volatile int8_t x589 = INT8_MIN;
static int16_t x602 = INT16_MIN;
int32_t t138 = 384254;
int16_t x607 = -1;
int32_t t141 = -66866906;
volatile uint16_t x619 = UINT16_MAX;
int32_t t142 = -25131976;
uint16_t x621 = 3601U;
int8_t x622 = INT8_MAX;
int8_t x624 = -35;
int32_t x632 = -8940;
int32_t t144 = 5805964;
static int16_t x635 = -469;
uint8_t x638 = UINT8_MAX;
static int64_t x640 = INT64_MIN;
uint16_t x648 = 3U;
int16_t x650 = INT16_MIN;
int32_t t149 = -7;
static int32_t x659 = -243;
uint8_t x660 = 2U;
volatile int32_t t151 = 2063765;
volatile int32_t t154 = -127;
volatile int32_t t155 = 1;
uint64_t x681 = 1079991LLU;
volatile int32_t t157 = 4149211;
int32_t x689 = INT32_MIN;
int32_t x697 = 7839;
int64_t x698 = 1675577242LL;
static int8_t x704 = 9;
static int32_t x711 = INT32_MIN;
int64_t x714 = INT64_MAX;
volatile int32_t t165 = 28;
static int32_t x730 = INT32_MAX;
int16_t x735 = INT16_MIN;
int32_t t168 = -39352;
static uint8_t x738 = 47U;
int8_t x740 = -1;
static uint16_t x759 = 16U;
volatile int32_t t173 = 0;
static int64_t x770 = INT64_MIN;
volatile int32_t t177 = 2504;
uint16_t x783 = 6350U;
volatile int32_t x784 = 17120;
int64_t x787 = INT64_MIN;
int8_t x788 = INT8_MIN;
uint64_t x792 = 55772182LLU;
static volatile int32_t t181 = 346424;
static volatile int16_t x797 = INT16_MIN;
uint32_t x803 = UINT32_MAX;
uint64_t x813 = UINT64_MAX;
static int64_t x823 = INT64_MAX;
volatile int64_t x830 = 2121486810LL;
static int8_t x842 = INT8_MAX;
uint64_t x846 = UINT64_MAX;
int8_t x858 = INT8_MIN;
int8_t x861 = 2;
uint16_t x863 = UINT16_MAX;
int16_t x867 = -1255;
int32_t t199 = 139528252;


void f0(void) {
    	uint8_t x2 = 58U;
	int32_t x4 = -4;
	static volatile int32_t t0 = 1217337;

    t0 = (x1<=((x2&x3)+x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MIN;
	int8_t x6 = INT8_MIN;
	static int64_t x7 = INT64_MAX;

    t1 = (x5<=((x6&x7)+x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MAX;
	int16_t x10 = INT16_MIN;
	int16_t x11 = INT16_MIN;
	static uint64_t x12 = 11678535805938LLU;
	volatile int32_t t2 = 117;

    t2 = (x9<=((x10&x11)+x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x13 = 42;
	uint64_t x15 = UINT64_MAX;
	int64_t x16 = INT64_MIN;
	int32_t t3 = -507;

    t3 = (x13<=((x14&x15)+x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint16_t x18 = 180U;
	int64_t x20 = -8519766424LL;
	int32_t t4 = 10;

    t4 = (x17<=((x18&x19)+x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = INT16_MAX;
	int16_t x22 = INT16_MAX;
	volatile int16_t x23 = 0;
	uint32_t x24 = 174741U;
	volatile int32_t t5 = 460052;

    t5 = (x21<=((x22&x23)+x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint32_t x25 = UINT32_MAX;
	int8_t x26 = -1;
	uint8_t x27 = UINT8_MAX;
	int64_t x28 = 34LL;
	static volatile int32_t t6 = 526687185;

    t6 = (x25<=((x26&x27)+x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint8_t x30 = 54U;
	uint64_t x31 = 18787898832375LLU;
	int64_t x32 = INT64_MIN;
	volatile int32_t t7 = -46158;

    t7 = (x29<=((x30&x31)+x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x34 = 368U;
	int8_t x35 = INT8_MIN;
	int16_t x36 = INT16_MAX;

    t8 = (x33<=((x34&x35)+x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint64_t x37 = 5495442LLU;
	int32_t x38 = 14806;
	static int16_t x39 = INT16_MAX;
	static uint8_t x40 = 6U;
	volatile int32_t t9 = -162;

    t9 = (x37<=((x38&x39)+x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint8_t x41 = 16U;
	uint16_t x42 = UINT16_MAX;
	int64_t x43 = INT64_MIN;
	uint8_t x44 = 1U;
	volatile int32_t t10 = 11594936;

    t10 = (x41<=((x42&x43)+x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = INT16_MIN;
	int8_t x46 = 0;
	uint32_t x48 = UINT32_MAX;
	static volatile int32_t t11 = -113;

    t11 = (x45<=((x46&x47)+x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x54 = INT64_MIN;
	int32_t x56 = INT32_MIN;
	volatile int32_t t12 = -170758;

    t12 = (x53<=((x54&x55)+x56));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x57 = INT32_MIN;
	int64_t x58 = 3LL;
	uint8_t x59 = UINT8_MAX;
	static volatile int32_t t13 = -48616685;

    t13 = (x57<=((x58&x59)+x60));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x61 = -3002767;
	uint32_t x62 = 6547110U;
	static int32_t x63 = -3651305;
	volatile int32_t t14 = 3346973;

    t14 = (x61<=((x62&x63)+x64));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x65 = UINT64_MAX;
	int32_t x66 = INT32_MAX;
	int64_t x67 = -18217860535414LL;
	int8_t x68 = INT8_MIN;
	volatile int32_t t15 = 35;

    t15 = (x65<=((x66&x67)+x68));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x73 = INT64_MIN;
	int8_t x74 = 0;
	static int64_t x75 = INT64_MIN;
	static volatile uint32_t x76 = 469236U;
	int32_t t16 = 21257800;

    t16 = (x73<=((x74&x75)+x76));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x77 = -1LL;
	uint16_t x78 = 1108U;
	uint32_t x79 = UINT32_MAX;
	int16_t x80 = -5;
	int32_t t17 = 1;

    t17 = (x77<=((x78&x79)+x80));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int64_t x82 = INT64_MIN;
	int32_t x83 = INT32_MAX;
	static int8_t x84 = 6;

    t18 = (x81<=((x82&x83)+x84));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x85 = 904U;
	static int32_t x86 = INT32_MAX;
	volatile int16_t x87 = -1;
	static int64_t x88 = -31036079286723LL;
	int32_t t19 = -1093699;

    t19 = (x85<=((x86&x87)+x88));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint32_t x89 = UINT32_MAX;
	int8_t x91 = -1;
	int8_t x92 = INT8_MIN;
	int32_t t20 = -10;

    t20 = (x89<=((x90&x91)+x92));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x97 = -712;
	static volatile uint32_t x98 = UINT32_MAX;
	int16_t x99 = INT16_MIN;
	int16_t x100 = 0;
	volatile int32_t t21 = 556;

    t21 = (x97<=((x98&x99)+x100));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile uint8_t x102 = UINT8_MAX;
	int16_t x103 = INT16_MIN;
	static int32_t x104 = -6;
	static int32_t t22 = -524676682;

    t22 = (x101<=((x102&x103)+x104));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x105 = INT16_MIN;
	volatile int8_t x106 = INT8_MAX;
	int8_t x107 = -4;
	uint16_t x108 = UINT16_MAX;
	int32_t t23 = 1;

    t23 = (x105<=((x106&x107)+x108));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x109 = UINT64_MAX;
	uint8_t x110 = 46U;
	int8_t x111 = 6;
	int8_t x112 = INT8_MIN;

    t24 = (x109<=((x110&x111)+x112));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint32_t x117 = 8635188U;
	uint64_t x118 = UINT64_MAX;
	volatile int32_t x119 = 13482;
	int64_t x120 = -1LL;
	int32_t t25 = -1881;

    t25 = (x117<=((x118&x119)+x120));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x122 = -5;
	int16_t x123 = 11934;
	static int32_t t26 = 435860430;

    t26 = (x121<=((x122&x123)+x124));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x125 = UINT32_MAX;
	volatile int8_t x126 = INT8_MIN;
	volatile int8_t x127 = INT8_MAX;
	int16_t x128 = -1745;
	int32_t t27 = 2886224;

    t27 = (x125<=((x126&x127)+x128));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x129 = INT16_MAX;
	int8_t x130 = -15;
	uint8_t x131 = UINT8_MAX;
	uint32_t x132 = UINT32_MAX;
	static int32_t t28 = -1335097;

    t28 = (x129<=((x130&x131)+x132));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x133 = INT16_MIN;
	uint8_t x134 = 4U;
	uint8_t x135 = 2U;
	int16_t x136 = -1;
	volatile int32_t t29 = 3;

    t29 = (x133<=((x134&x135)+x136));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x137 = -6;
	int16_t x139 = INT16_MAX;
	int32_t x140 = -5;

    t30 = (x137<=((x138&x139)+x140));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x141 = INT16_MIN;
	volatile int64_t x143 = 1105628LL;
	static uint16_t x144 = 3733U;
	volatile int32_t t31 = 293546;

    t31 = (x141<=((x142&x143)+x144));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x146 = INT64_MIN;
	static int8_t x147 = INT8_MIN;
	static uint16_t x148 = UINT16_MAX;

    t32 = (x145<=((x146&x147)+x148));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x149 = UINT8_MAX;
	uint32_t x150 = 6065774U;
	volatile int8_t x151 = -13;
	static volatile int8_t x152 = 1;
	volatile int32_t t33 = -10;

    t33 = (x149<=((x150&x151)+x152));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x153 = INT16_MIN;
	static volatile int16_t x154 = INT16_MIN;
	uint8_t x155 = 54U;
	int16_t x156 = INT16_MAX;

    t34 = (x153<=((x154&x155)+x156));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x157 = UINT64_MAX;
	volatile uint8_t x158 = 1U;
	uint16_t x159 = 15U;
	int32_t x160 = -27028453;
	int32_t t35 = 35;

    t35 = (x157<=((x158&x159)+x160));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x161 = -1047472;
	int16_t x164 = 5712;
	int32_t t36 = -40603487;

    t36 = (x161<=((x162&x163)+x164));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x166 = 7383;
	static int32_t x168 = INT32_MIN;
	int32_t t37 = -9602;

    t37 = (x165<=((x166&x167)+x168));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x169 = 17U;
	static volatile int16_t x170 = 0;
	int8_t x171 = INT8_MAX;
	int16_t x172 = INT16_MIN;

    t38 = (x169<=((x170&x171)+x172));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x173 = INT32_MIN;
	static int16_t x174 = INT16_MIN;
	static int8_t x176 = -1;
	int32_t t39 = -36514104;

    t39 = (x173<=((x174&x175)+x176));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x177 = INT8_MAX;
	int64_t x178 = INT64_MIN;
	int16_t x179 = -194;
	static uint32_t x180 = UINT32_MAX;
	int32_t t40 = 235;

    t40 = (x177<=((x178&x179)+x180));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int64_t x181 = -1LL;
	int32_t x182 = INT32_MIN;
	static uint32_t x184 = 1118006065U;
	int32_t t41 = -1;

    t41 = (x181<=((x182&x183)+x184));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x185 = INT64_MIN;
	static int64_t x186 = INT64_MIN;
	static uint16_t x187 = 26U;
	uint16_t x188 = UINT16_MAX;
	int32_t t42 = -118113;

    t42 = (x185<=((x186&x187)+x188));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x189 = INT32_MIN;
	int16_t x190 = -1;
	static int16_t x191 = -35;
	uint64_t x192 = UINT64_MAX;
	int32_t t43 = 16848;

    t43 = (x189<=((x190&x191)+x192));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x197 = 10U;
	static volatile uint32_t x198 = UINT32_MAX;
	uint32_t x199 = 29U;
	uint16_t x200 = UINT16_MAX;
	volatile int32_t t44 = -5620;

    t44 = (x197<=((x198&x199)+x200));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x201 = -940577255738065LL;
	volatile int16_t x202 = INT16_MAX;
	int32_t x203 = INT32_MAX;
	int16_t x204 = INT16_MIN;
	volatile int32_t t45 = -418993;

    t45 = (x201<=((x202&x203)+x204));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x205 = INT16_MIN;
	int64_t x206 = -19LL;
	int16_t x207 = INT16_MIN;
	uint16_t x208 = UINT16_MAX;
	static volatile int32_t t46 = -24516;

    t46 = (x205<=((x206&x207)+x208));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int64_t x209 = INT64_MIN;
	static int8_t x211 = INT8_MIN;
	volatile uint8_t x212 = UINT8_MAX;
	volatile int32_t t47 = 731435;

    t47 = (x209<=((x210&x211)+x212));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x215 = -1;
	static int32_t t48 = 1;

    t48 = (x213<=((x214&x215)+x216));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x217 = 54280297499390LL;
	volatile int32_t x219 = 17078028;
	uint8_t x220 = UINT8_MAX;
	volatile int32_t t49 = -5;

    t49 = (x217<=((x218&x219)+x220));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x221 = -1;
	static int32_t x222 = -1;
	volatile int16_t x223 = -1;
	volatile uint16_t x224 = 2138U;
	int32_t t50 = 247;

    t50 = (x221<=((x222&x223)+x224));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static int32_t x226 = -2250797;
	uint32_t x227 = UINT32_MAX;
	static int32_t x228 = INT32_MIN;
	int32_t t51 = 522809157;

    t51 = (x225<=((x226&x227)+x228));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int8_t x229 = -17;
	int16_t x230 = 135;
	uint64_t x232 = 21558415987LLU;
	static volatile int32_t t52 = -436036;

    t52 = (x229<=((x230&x231)+x232));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x233 = INT64_MIN;
	int64_t x234 = 544786269144148LL;
	int16_t x235 = INT16_MIN;
	int32_t x236 = INT32_MIN;

    t53 = (x233<=((x234&x235)+x236));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x237 = UINT64_MAX;
	uint16_t x238 = 479U;
	int16_t x240 = INT16_MIN;

    t54 = (x237<=((x238&x239)+x240));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x241 = 44985248657027LL;
	int32_t x242 = INT32_MIN;
	uint8_t x243 = UINT8_MAX;
	static uint8_t x244 = 104U;
	volatile int32_t t55 = 21035;

    t55 = (x241<=((x242&x243)+x244));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x245 = -1LL;
	int32_t x246 = INT32_MIN;
	volatile uint32_t x247 = 3U;
	int16_t x248 = -2511;
	volatile int32_t t56 = -189296346;

    t56 = (x245<=((x246&x247)+x248));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x249 = 26398U;
	static int64_t x250 = -1723594LL;
	uint16_t x251 = 0U;
	volatile int8_t x252 = 0;
	volatile int32_t t57 = 71;

    t57 = (x249<=((x250&x251)+x252));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x253 = INT64_MIN;
	int8_t x254 = 1;
	uint64_t x255 = 18LLU;
	volatile int32_t t58 = -14116637;

    t58 = (x253<=((x254&x255)+x256));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x258 = 1277U;
	static volatile int64_t x259 = -7235LL;
	uint16_t x260 = 25111U;
	static volatile int32_t t59 = -4;

    t59 = (x257<=((x258&x259)+x260));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x261 = INT64_MAX;
	uint64_t x262 = UINT64_MAX;
	int8_t x263 = -13;
	volatile int16_t x264 = INT16_MIN;
	static int32_t t60 = 4335;

    t60 = (x261<=((x262&x263)+x264));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x265 = UINT32_MAX;
	uint64_t x266 = UINT64_MAX;
	static uint64_t x267 = 285616LLU;
	static volatile uint8_t x268 = 1U;
	int32_t t61 = 125203345;

    t61 = (x265<=((x266&x267)+x268));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x269 = -1;
	int32_t x272 = INT32_MIN;
	volatile int32_t t62 = -5;

    t62 = (x269<=((x270&x271)+x272));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x275 = INT8_MIN;
	volatile int64_t x276 = INT64_MIN;
	volatile int32_t t63 = -1;

    t63 = (x273<=((x274&x275)+x276));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint64_t x277 = 203015141LLU;
	int64_t x278 = 7206637598099009LL;
	int64_t x279 = -2002184079LL;
	int8_t x280 = 1;
	static volatile int32_t t64 = 688519056;

    t64 = (x277<=((x278&x279)+x280));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x281 = INT32_MIN;
	int32_t x282 = INT32_MIN;
	volatile int32_t t65 = -109;

    t65 = (x281<=((x282&x283)+x284));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x289 = 292270025LL;
	int16_t x290 = 0;
	volatile uint16_t x292 = UINT16_MAX;
	int32_t t66 = -16281178;

    t66 = (x289<=((x290&x291)+x292));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x293 = INT16_MIN;
	int8_t x294 = -1;
	int32_t x295 = -1;
	int16_t x296 = INT16_MIN;
	volatile int32_t t67 = -40660098;

    t67 = (x293<=((x294&x295)+x296));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint8_t x302 = UINT8_MAX;
	int16_t x303 = -1;
	uint64_t x304 = UINT64_MAX;
	volatile int32_t t68 = 23208;

    t68 = (x301<=((x302&x303)+x304));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x306 = 2686U;
	uint16_t x307 = 57U;
	static int32_t t69 = 22;

    t69 = (x305<=((x306&x307)+x308));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x309 = -1405;
	uint16_t x310 = UINT16_MAX;
	int16_t x311 = INT16_MIN;
	int8_t x312 = -11;
	int32_t t70 = -201656;

    t70 = (x309<=((x310&x311)+x312));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint8_t x313 = 4U;
	static int64_t x314 = INT64_MIN;
	uint32_t x315 = 11218U;
	volatile int32_t t71 = -243982484;

    t71 = (x313<=((x314&x315)+x316));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x317 = INT32_MAX;
	static int8_t x318 = -1;
	uint64_t x319 = 3999521451979025LLU;
	volatile int32_t t72 = -2887056;

    t72 = (x317<=((x318&x319)+x320));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x321 = -25;

    t73 = (x321<=((x322&x323)+x324));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x326 = 2U;
	volatile int32_t x327 = -1;
	int32_t t74 = 954373277;

    t74 = (x325<=((x326&x327)+x328));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint64_t x330 = UINT64_MAX;
	volatile int16_t x332 = INT16_MIN;
	volatile int32_t t75 = -60;

    t75 = (x329<=((x330&x331)+x332));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x333 = INT64_MAX;
	uint64_t x334 = 2704265214187036325LLU;
	int16_t x335 = -3870;
	int8_t x336 = -1;

    t76 = (x333<=((x334&x335)+x336));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x337 = -1264LL;
	int32_t x338 = -18;
	int32_t x340 = INT32_MIN;
	static volatile int32_t t77 = -356;

    t77 = (x337<=((x338&x339)+x340));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x341 = UINT8_MAX;
	int16_t x342 = -3;
	int8_t x343 = INT8_MAX;
	int64_t x344 = 17055LL;
	volatile int32_t t78 = 3449;

    t78 = (x341<=((x342&x343)+x344));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x345 = -1;
	static int64_t x347 = INT64_MAX;
	int64_t x348 = INT64_MIN;
	static volatile int32_t t79 = -13782;

    t79 = (x345<=((x346&x347)+x348));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x349 = 1;
	int64_t x351 = INT64_MAX;
	uint64_t x352 = UINT64_MAX;
	int32_t t80 = -15;

    t80 = (x349<=((x350&x351)+x352));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint8_t x354 = UINT8_MAX;
	int8_t x355 = INT8_MIN;
	static int32_t t81 = 0;

    t81 = (x353<=((x354&x355)+x356));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x357 = -1LL;
	static int16_t x358 = INT16_MIN;
	volatile int32_t x359 = -1;
	volatile int8_t x360 = 15;

    t82 = (x357<=((x358&x359)+x360));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint16_t x362 = UINT16_MAX;
	int8_t x363 = -1;
	static int32_t x364 = INT32_MIN;
	int32_t t83 = -735446;

    t83 = (x361<=((x362&x363)+x364));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x365 = INT64_MAX;
	volatile int16_t x366 = INT16_MIN;
	volatile int8_t x367 = INT8_MIN;

    t84 = (x365<=((x366&x367)+x368));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x369 = INT8_MAX;
	static volatile int32_t x370 = -172572;
	static int32_t x371 = -1;
	volatile uint64_t x372 = 10265804072618LLU;
	volatile int32_t t85 = 1;

    t85 = (x369<=((x370&x371)+x372));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x373 = INT16_MAX;
	int64_t x374 = -31016290957264LL;
	volatile int64_t x375 = 8485690115172LL;
	int64_t x376 = -63128LL;
	volatile int32_t t86 = 0;

    t86 = (x373<=((x374&x375)+x376));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x378 = 41119LLU;
	int64_t x379 = -1LL;
	uint8_t x380 = 0U;
	int32_t t87 = -456;

    t87 = (x377<=((x378&x379)+x380));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x381 = 4276832872262746236LLU;
	int8_t x382 = INT8_MIN;
	volatile uint64_t x383 = 19LLU;
	uint32_t x384 = 122265053U;
	int32_t t88 = 872666;

    t88 = (x381<=((x382&x383)+x384));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint32_t x386 = 1463U;
	volatile int32_t t89 = -23017;

    t89 = (x385<=((x386&x387)+x388));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x389 = INT32_MAX;
	int32_t x391 = -3405;
	static uint32_t x392 = UINT32_MAX;
	int32_t t90 = -847007;

    t90 = (x389<=((x390&x391)+x392));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x393 = -1;
	uint32_t x394 = UINT32_MAX;
	int64_t x395 = INT64_MIN;
	volatile int8_t x396 = 61;
	int32_t t91 = 114279;

    t91 = (x393<=((x394&x395)+x396));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x398 = UINT16_MAX;
	uint64_t x399 = UINT64_MAX;
	static int64_t x400 = 64LL;
	static volatile int32_t t92 = -154375;

    t92 = (x397<=((x398&x399)+x400));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x401 = 12U;
	int64_t x402 = 100642863574192485LL;
	volatile int32_t x403 = INT32_MIN;
	static volatile int64_t x404 = INT64_MIN;
	int32_t t93 = 0;

    t93 = (x401<=((x402&x403)+x404));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x405 = -6;
	int32_t x406 = -1407;
	volatile uint64_t x407 = 98220114600735LLU;
	uint8_t x408 = 3U;
	int32_t t94 = -62648;

    t94 = (x405<=((x406&x407)+x408));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int8_t x410 = INT8_MIN;
	int64_t x412 = 40763501763397092LL;

    t95 = (x409<=((x410&x411)+x412));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint64_t x413 = 5436155320342LLU;
	int8_t x415 = 6;
	static uint32_t x416 = UINT32_MAX;
	static int32_t t96 = 0;

    t96 = (x413<=((x414&x415)+x416));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x421 = INT8_MAX;
	uint64_t x422 = UINT64_MAX;
	volatile int8_t x423 = INT8_MIN;
	static uint16_t x424 = 382U;
	volatile int32_t t97 = -195;

    t97 = (x421<=((x422&x423)+x424));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x425 = UINT32_MAX;
	static uint16_t x426 = 45U;
	int32_t x427 = -1;
	uint64_t x428 = 6961343728LLU;
	int32_t t98 = 454806353;

    t98 = (x425<=((x426&x427)+x428));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x429 = INT64_MAX;
	int8_t x430 = -1;
	uint32_t x431 = 1513271597U;
	int64_t x432 = 2644679806073LL;

    t99 = (x429<=((x430&x431)+x432));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint32_t x433 = UINT32_MAX;
	uint32_t x434 = 363513046U;
	volatile int8_t x435 = -1;
	uint16_t x436 = UINT16_MAX;
	static int32_t t100 = -157231901;

    t100 = (x433<=((x434&x435)+x436));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile int8_t x438 = INT8_MAX;
	uint64_t x439 = 1744759LLU;
	int16_t x440 = INT16_MIN;

    t101 = (x437<=((x438&x439)+x440));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x441 = 62035217598841LLU;
	static uint32_t x443 = 38580634U;
	static volatile uint32_t x444 = 3069151U;
	int32_t t102 = -1;

    t102 = (x441<=((x442&x443)+x444));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int32_t x445 = INT32_MIN;
	uint32_t x446 = UINT32_MAX;
	uint64_t x447 = 7134793425LLU;
	static uint64_t x448 = UINT64_MAX;
	static volatile int32_t t103 = 388274776;

    t103 = (x445<=((x446&x447)+x448));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x453 = -283292;
	int8_t x454 = 0;
	uint8_t x455 = 3U;
	int64_t x456 = 33LL;
	static volatile int32_t t104 = -67749;

    t104 = (x453<=((x454&x455)+x456));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x459 = -1;
	uint32_t x460 = 139U;
	int32_t t105 = -4872620;

    t105 = (x457<=((x458&x459)+x460));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x463 = UINT16_MAX;
	static int16_t x464 = -1;
	static volatile int32_t t106 = -1;

    t106 = (x461<=((x462&x463)+x464));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x465 = INT32_MIN;
	int64_t x466 = INT64_MAX;
	static int64_t x467 = INT64_MIN;
	int64_t x468 = INT64_MIN;
	volatile int32_t t107 = -50;

    t107 = (x465<=((x466&x467)+x468));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint32_t x470 = 132U;
	int8_t x471 = -35;
	static int64_t x472 = INT64_MIN;

    t108 = (x469<=((x470&x471)+x472));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x473 = 1U;
	int32_t x474 = 1;
	uint32_t x475 = UINT32_MAX;
	volatile uint32_t x476 = 2U;

    t109 = (x473<=((x474&x475)+x476));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x478 = INT16_MAX;
	int16_t x479 = -1;
	int64_t x480 = -1LL;
	volatile int32_t t110 = 3155;

    t110 = (x477<=((x478&x479)+x480));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int16_t x481 = -1;
	uint64_t x482 = 116267LLU;
	static uint32_t x483 = 1443U;
	static volatile int32_t t111 = 1;

    t111 = (x481<=((x482&x483)+x484));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x486 = 0U;
	uint8_t x487 = 93U;
	int32_t t112 = -702;

    t112 = (x485<=((x486&x487)+x488));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x490 = 0U;
	uint64_t x491 = 6771545233577461562LLU;
	static int16_t x492 = INT16_MIN;
	static int32_t t113 = -305986;

    t113 = (x489<=((x490&x491)+x492));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x494 = 5U;
	volatile int16_t x496 = INT16_MAX;
	int32_t t114 = 37177822;

    t114 = (x493<=((x494&x495)+x496));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int8_t x497 = -2;
	uint32_t x498 = 654363U;
	static volatile int8_t x499 = INT8_MIN;
	volatile uint32_t x500 = 13706325U;
	static int32_t t115 = -398363;

    t115 = (x497<=((x498&x499)+x500));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x501 = INT16_MAX;
	uint64_t x502 = UINT64_MAX;
	volatile int32_t x504 = INT32_MIN;
	static volatile int32_t t116 = -28772247;

    t116 = (x501<=((x502&x503)+x504));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x505 = INT32_MIN;
	volatile uint16_t x507 = 10U;
	int16_t x508 = -1;

    t117 = (x505<=((x506&x507)+x508));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x509 = 25085910LLU;
	int16_t x510 = 3;
	int64_t x511 = INT64_MAX;
	uint64_t x512 = UINT64_MAX;
	volatile int32_t t118 = -10028;

    t118 = (x509<=((x510&x511)+x512));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x517 = INT64_MIN;
	uint32_t x519 = 190U;
	static uint16_t x520 = 2821U;

    t119 = (x517<=((x518&x519)+x520));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x525 = INT32_MAX;
	static volatile int32_t x526 = INT32_MIN;
	volatile uint32_t x527 = UINT32_MAX;
	static int32_t x528 = INT32_MIN;
	volatile int32_t t120 = 50107383;

    t120 = (x525<=((x526&x527)+x528));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x529 = UINT16_MAX;
	uint8_t x530 = 55U;
	int64_t x531 = -357947225194238080LL;
	int32_t x532 = INT32_MIN;
	int32_t t121 = -955562332;

    t121 = (x529<=((x530&x531)+x532));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int16_t x533 = -1;
	static uint16_t x535 = 23797U;
	int16_t x536 = -1;
	int32_t t122 = -5067;

    t122 = (x533<=((x534&x535)+x536));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x538 = 3U;
	volatile int16_t x539 = INT16_MAX;
	int32_t t123 = -154;

    t123 = (x537<=((x538&x539)+x540));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x542 = INT32_MIN;
	uint32_t x543 = 826U;
	uint64_t x544 = 120190907LLU;
	static volatile int32_t t124 = 3438116;

    t124 = (x541<=((x542&x543)+x544));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x545 = 3274314LLU;
	uint32_t x546 = UINT32_MAX;
	uint16_t x547 = UINT16_MAX;
	int16_t x548 = INT16_MIN;
	volatile int32_t t125 = 4211;

    t125 = (x545<=((x546&x547)+x548));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x549 = 2135LL;
	volatile uint32_t x550 = 146496U;
	volatile uint8_t x551 = 49U;
	uint64_t x552 = UINT64_MAX;
	volatile int32_t t126 = -4344946;

    t126 = (x549<=((x550&x551)+x552));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x553 = -1LL;
	uint64_t x554 = UINT64_MAX;
	static int8_t x555 = INT8_MIN;
	int32_t t127 = -7323;

    t127 = (x553<=((x554&x555)+x556));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x558 = -1;
	volatile uint32_t x560 = 388U;

    t128 = (x557<=((x558&x559)+x560));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x561 = -11;
	volatile int16_t x562 = INT16_MIN;
	uint8_t x563 = 1U;
	static int8_t x564 = 1;
	int32_t t129 = -297424;

    t129 = (x561<=((x562&x563)+x564));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x565 = UINT8_MAX;
	uint8_t x566 = 23U;
	int8_t x567 = 27;
	int16_t x568 = INT16_MAX;
	int32_t t130 = 25;

    t130 = (x565<=((x566&x567)+x568));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x569 = -56775751121144598LL;
	static uint64_t x570 = UINT64_MAX;
	int16_t x571 = INT16_MIN;
	int32_t x572 = 127;

    t131 = (x569<=((x570&x571)+x572));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x573 = INT64_MIN;
	int16_t x574 = INT16_MIN;
	int16_t x575 = -496;
	int64_t x576 = -40661509355LL;
	volatile int32_t t132 = -174192375;

    t132 = (x573<=((x574&x575)+x576));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int8_t x581 = INT8_MIN;
	uint16_t x582 = 21638U;
	uint8_t x583 = 0U;
	uint64_t x584 = UINT64_MAX;
	volatile int32_t t133 = 1054319890;

    t133 = (x581<=((x582&x583)+x584));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint32_t x585 = 91695U;
	int16_t x586 = INT16_MIN;
	int32_t t134 = -24636;

    t134 = (x585<=((x586&x587)+x588));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x590 = 2893429;
	static int64_t x591 = INT64_MIN;
	volatile int8_t x592 = -1;
	int32_t t135 = -2256;

    t135 = (x589<=((x590&x591)+x592));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x593 = INT8_MAX;
	static uint64_t x594 = 167LLU;
	static int32_t x595 = INT32_MIN;
	int32_t x596 = -18205;
	int32_t t136 = -168;

    t136 = (x593<=((x594&x595)+x596));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x597 = 1248175502298LLU;
	int64_t x598 = INT64_MIN;
	int32_t x599 = -1;
	uint64_t x600 = UINT64_MAX;
	int32_t t137 = -486461925;

    t137 = (x597<=((x598&x599)+x600));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static int8_t x601 = -7;
	uint64_t x603 = 1885161116653079LLU;
	int8_t x604 = INT8_MAX;

    t138 = (x601<=((x602&x603)+x604));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x605 = -1;
	static int8_t x606 = -1;
	int32_t x608 = -1;
	int32_t t139 = 1;

    t139 = (x605<=((x606&x607)+x608));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x609 = 10895298LL;
	int32_t x610 = INT32_MAX;
	int32_t x611 = INT32_MAX;
	int32_t x612 = -1;
	volatile int32_t t140 = 55998;

    t140 = (x609<=((x610&x611)+x612));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x613 = INT32_MIN;
	static uint16_t x614 = UINT16_MAX;
	int16_t x615 = -1;
	int8_t x616 = -1;

    t141 = (x613<=((x614&x615)+x616));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int16_t x617 = INT16_MAX;
	int8_t x618 = INT8_MAX;
	int32_t x620 = -76329582;

    t142 = (x617<=((x618&x619)+x620));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x623 = UINT64_MAX;
	static volatile int32_t t143 = -2443265;

    t143 = (x621<=((x622&x623)+x624));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x629 = 10244022U;
	int8_t x630 = -1;
	int16_t x631 = INT16_MAX;

    t144 = (x629<=((x630&x631)+x632));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x633 = 355769064U;
	volatile uint16_t x634 = 2U;
	uint32_t x636 = 3U;
	static int32_t t145 = 10052;

    t145 = (x633<=((x634&x635)+x636));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int64_t x637 = INT64_MIN;
	volatile int8_t x639 = -1;
	static int32_t t146 = 30834;

    t146 = (x637<=((x638&x639)+x640));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x641 = 29136208LLU;
	uint16_t x642 = UINT16_MAX;
	int64_t x643 = INT64_MAX;
	int64_t x644 = -1LL;
	int32_t t147 = 0;

    t147 = (x641<=((x642&x643)+x644));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x645 = 3742171934322559LLU;
	volatile int64_t x646 = INT64_MIN;
	int32_t x647 = INT32_MAX;
	int32_t t148 = 468373551;

    t148 = (x645<=((x646&x647)+x648));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x649 = -10;
	int32_t x651 = 14;
	static uint8_t x652 = 0U;

    t149 = (x649<=((x650&x651)+x652));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x657 = -3605517LL;
	int32_t x658 = INT32_MIN;
	int32_t t150 = -6812618;

    t150 = (x657<=((x658&x659)+x660));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x661 = 5U;
	int32_t x662 = INT32_MIN;
	static int16_t x663 = INT16_MAX;
	static int8_t x664 = INT8_MIN;

    t151 = (x661<=((x662&x663)+x664));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x665 = 1U;
	int32_t x666 = INT32_MAX;
	volatile int64_t x667 = 35546LL;
	volatile uint16_t x668 = UINT16_MAX;
	volatile int32_t t152 = 1578236;

    t152 = (x665<=((x666&x667)+x668));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile uint8_t x669 = 37U;
	int8_t x670 = INT8_MAX;
	volatile int32_t x671 = 52;
	int64_t x672 = 10LL;
	int32_t t153 = 57660;

    t153 = (x669<=((x670&x671)+x672));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x673 = 53;
	volatile int8_t x674 = -5;
	static volatile uint64_t x675 = 91344826091LLU;
	uint64_t x676 = 0LLU;

    t154 = (x673<=((x674&x675)+x676));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x677 = UINT16_MAX;
	int32_t x678 = INT32_MIN;
	int16_t x679 = INT16_MAX;
	int32_t x680 = -1;

    t155 = (x677<=((x678&x679)+x680));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x682 = INT32_MAX;
	int16_t x683 = -1;
	volatile int64_t x684 = INT64_MIN;
	volatile int32_t t156 = 898;

    t156 = (x681<=((x682&x683)+x684));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x685 = 501U;
	int16_t x686 = INT16_MAX;
	uint64_t x687 = 126023496719LLU;
	volatile int32_t x688 = INT32_MIN;

    t157 = (x685<=((x686&x687)+x688));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x690 = INT8_MIN;
	int8_t x691 = INT8_MIN;
	volatile int16_t x692 = INT16_MIN;
	int32_t t158 = -7;

    t158 = (x689<=((x690&x691)+x692));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x699 = 241710877LLU;
	int16_t x700 = -4;
	volatile int32_t t159 = 19;

    t159 = (x697<=((x698&x699)+x700));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int16_t x701 = 7;
	static int64_t x702 = INT64_MIN;
	int8_t x703 = INT8_MIN;
	int32_t t160 = -3014;

    t160 = (x701<=((x702&x703)+x704));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x705 = 1U;
	static volatile int16_t x706 = 1;
	static int64_t x707 = INT64_MAX;
	volatile int32_t x708 = INT32_MAX;
	int32_t t161 = -1;

    t161 = (x705<=((x706&x707)+x708));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x709 = -2;
	int16_t x710 = 1;
	int8_t x712 = INT8_MIN;
	int32_t t162 = 7642008;

    t162 = (x709<=((x710&x711)+x712));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x713 = INT16_MIN;
	int16_t x715 = 6;
	int16_t x716 = -1;
	int32_t t163 = -1;

    t163 = (x713<=((x714&x715)+x716));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x717 = 53U;
	int64_t x718 = 28489852741118548LL;
	int32_t x719 = INT32_MIN;
	volatile int64_t x720 = INT64_MIN;
	static volatile int32_t t164 = 50464;

    t164 = (x717<=((x718&x719)+x720));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x721 = INT8_MAX;
	int32_t x722 = -1;
	volatile uint64_t x723 = 46947400155LLU;
	int16_t x724 = INT16_MAX;

    t165 = (x721<=((x722&x723)+x724));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x725 = 1316U;
	int32_t x726 = -1;
	static int16_t x727 = -1;
	int8_t x728 = INT8_MAX;
	static volatile int32_t t166 = -39632;

    t166 = (x725<=((x726&x727)+x728));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int64_t x729 = -6683273522387389LL;
	static volatile uint64_t x731 = 326916095290338308LLU;
	uint64_t x732 = UINT64_MAX;
	volatile int32_t t167 = -2;

    t167 = (x729<=((x730&x731)+x732));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x733 = 1U;
	static int8_t x734 = 0;
	static int64_t x736 = 0LL;

    t168 = (x733<=((x734&x735)+x736));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x737 = INT16_MAX;
	static int64_t x739 = INT64_MIN;
	static volatile int32_t t169 = 3;

    t169 = (x737<=((x738&x739)+x740));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int64_t x741 = 6278723LL;
	volatile uint64_t x742 = 10340588763LLU;
	uint64_t x743 = 609LLU;
	static uint32_t x744 = 350125U;
	volatile int32_t t170 = -2;

    t170 = (x741<=((x742&x743)+x744));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x745 = INT32_MAX;
	int8_t x746 = -1;
	static int64_t x747 = INT64_MIN;
	int16_t x748 = 56;
	static int32_t t171 = 66544;

    t171 = (x745<=((x746&x747)+x748));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint32_t x753 = UINT32_MAX;
	static int8_t x754 = -14;
	int16_t x755 = INT16_MAX;
	static volatile int8_t x756 = INT8_MAX;
	int32_t t172 = -6540515;

    t172 = (x753<=((x754&x755)+x756));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint16_t x757 = UINT16_MAX;
	volatile uint16_t x758 = UINT16_MAX;
	int64_t x760 = INT64_MIN;

    t173 = (x757<=((x758&x759)+x760));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x761 = 5;
	int16_t x762 = -5462;
	int8_t x763 = INT8_MIN;
	uint8_t x764 = 5U;
	int32_t t174 = 35861369;

    t174 = (x761<=((x762&x763)+x764));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint32_t x765 = 83693269U;
	volatile int16_t x766 = INT16_MIN;
	uint64_t x767 = 431LLU;
	int32_t x768 = -1;
	int32_t t175 = -11;

    t175 = (x765<=((x766&x767)+x768));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x769 = -1;
	int32_t x771 = INT32_MIN;
	uint64_t x772 = 97707560119LLU;
	static int32_t t176 = 161;

    t176 = (x769<=((x770&x771)+x772));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x777 = INT32_MIN;
	int32_t x778 = INT32_MIN;
	uint8_t x779 = 52U;
	volatile int8_t x780 = 1;

    t177 = (x777<=((x778&x779)+x780));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x781 = -963;
	uint32_t x782 = 6411U;
	static volatile int32_t t178 = 151744;

    t178 = (x781<=((x782&x783)+x784));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x785 = -6757;
	volatile int8_t x786 = 2;
	volatile int32_t t179 = -4;

    t179 = (x785<=((x786&x787)+x788));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x789 = INT32_MIN;
	int64_t x790 = -42LL;
	volatile int64_t x791 = -1LL;
	int32_t t180 = 0;

    t180 = (x789<=((x790&x791)+x792));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x793 = 1890U;
	volatile uint64_t x794 = 122227969LLU;
	static uint8_t x795 = 5U;
	int32_t x796 = INT32_MIN;

    t181 = (x793<=((x794&x795)+x796));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x798 = -2003;
	int32_t x799 = INT32_MIN;
	uint32_t x800 = 39649U;
	int32_t t182 = -20;

    t182 = (x797<=((x798&x799)+x800));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int8_t x801 = INT8_MIN;
	uint32_t x802 = 260988U;
	static int32_t x804 = INT32_MAX;
	int32_t t183 = 303210;

    t183 = (x801<=((x802&x803)+x804));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x805 = 28179U;
	uint8_t x806 = 0U;
	int16_t x807 = INT16_MIN;
	int8_t x808 = INT8_MIN;
	int32_t t184 = 2933483;

    t184 = (x805<=((x806&x807)+x808));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x809 = INT8_MIN;
	volatile int32_t x810 = 295;
	uint64_t x811 = UINT64_MAX;
	volatile int32_t x812 = INT32_MAX;
	static int32_t t185 = -58151;

    t185 = (x809<=((x810&x811)+x812));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x814 = INT16_MIN;
	int16_t x815 = INT16_MIN;
	int32_t x816 = -1;
	int32_t t186 = 377905007;

    t186 = (x813<=((x814&x815)+x816));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x817 = INT16_MAX;
	int16_t x818 = INT16_MIN;
	static volatile uint64_t x819 = 33248445916LLU;
	volatile int16_t x820 = -1;
	int32_t t187 = -9;

    t187 = (x817<=((x818&x819)+x820));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x821 = INT8_MAX;
	volatile int64_t x822 = INT64_MIN;
	volatile int64_t x824 = -1646261472873LL;
	static volatile int32_t t188 = -84019;

    t188 = (x821<=((x822&x823)+x824));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int16_t x825 = INT16_MIN;
	int64_t x826 = INT64_MIN;
	uint64_t x827 = UINT64_MAX;
	int64_t x828 = -485LL;
	volatile int32_t t189 = 778;

    t189 = (x825<=((x826&x827)+x828));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int16_t x829 = 671;
	int8_t x831 = -1;
	static int8_t x832 = 0;
	volatile int32_t t190 = 128388;

    t190 = (x829<=((x830&x831)+x832));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x833 = 6U;
	uint16_t x834 = 17U;
	int64_t x835 = 21920817LL;
	volatile int16_t x836 = INT16_MAX;
	int32_t t191 = -53;

    t191 = (x833<=((x834&x835)+x836));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x837 = 272828856U;
	int64_t x838 = -1LL;
	int8_t x839 = -1;
	int8_t x840 = INT8_MIN;
	volatile int32_t t192 = 3;

    t192 = (x837<=((x838&x839)+x840));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x841 = UINT8_MAX;
	int64_t x843 = 2LL;
	static volatile int32_t x844 = -1;
	static int32_t t193 = -169306086;

    t193 = (x841<=((x842&x843)+x844));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint32_t x845 = UINT32_MAX;
	int32_t x847 = 59533261;
	volatile int8_t x848 = INT8_MIN;
	static volatile int32_t t194 = -39;

    t194 = (x845<=((x846&x847)+x848));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x849 = 5791258LL;
	int32_t x850 = 142035;
	int64_t x851 = 246492LL;
	int8_t x852 = 1;
	int32_t t195 = -7;

    t195 = (x849<=((x850&x851)+x852));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x853 = 8421236U;
	volatile int8_t x854 = INT8_MAX;
	int16_t x855 = 0;
	static uint64_t x856 = 8623852661LLU;
	volatile int32_t t196 = 142085208;

    t196 = (x853<=((x854&x855)+x856));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x857 = INT32_MAX;
	static volatile int8_t x859 = 2;
	static int64_t x860 = INT64_MAX;
	int32_t t197 = -15;

    t197 = (x857<=((x858&x859)+x860));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static int8_t x862 = -10;
	int64_t x864 = -1LL;
	static int32_t t198 = 82;

    t198 = (x861<=((x862&x863)+x864));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile int16_t x865 = 8;
	static int16_t x866 = INT16_MIN;
	volatile int8_t x868 = INT8_MIN;

    t199 = (x865<=((x866&x867)+x868));

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

