
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

int32_t x1 = INT32_MIN;
uint16_t x9 = 39U;
int32_t x14 = -25091;
uint16_t x22 = UINT16_MAX;
volatile int32_t t5 = -25;
int8_t x26 = INT8_MIN;
static int16_t x35 = INT16_MIN;
volatile int64_t x36 = -1LL;
uint32_t x37 = UINT32_MAX;
volatile int8_t x39 = INT8_MAX;
int8_t x41 = INT8_MAX;
int32_t x43 = INT32_MIN;
int64_t x54 = 4034181129749803LL;
int32_t x59 = INT32_MIN;
int32_t t14 = 12;
volatile int64_t x64 = 98743687322LL;
volatile int32_t t15 = 29;
static int32_t t17 = -1;
static int8_t x77 = INT8_MIN;
uint16_t x83 = UINT16_MAX;
int32_t t20 = -1;
volatile int32_t t21 = 0;
uint16_t x92 = UINT16_MAX;
int32_t t22 = 14;
int16_t x95 = -1;
int32_t t23 = -117919;
static volatile int32_t x106 = -1;
volatile int64_t x108 = INT64_MAX;
volatile int8_t x120 = 1;
volatile uint32_t x123 = 5764U;
int8_t x127 = INT8_MIN;
int16_t x128 = 3;
int32_t x130 = INT32_MAX;
int32_t x133 = INT32_MIN;
int32_t x134 = 2;
int32_t t33 = 332463;
int32_t t34 = -79;
volatile int32_t t35 = 3750;
int16_t x146 = 2830;
int8_t x148 = -1;
int32_t t36 = -1128550;
static int16_t x149 = -5639;
uint16_t x151 = UINT16_MAX;
volatile int16_t x152 = INT16_MAX;
volatile int64_t x153 = INT64_MAX;
int32_t x156 = INT32_MIN;
int64_t x157 = INT64_MIN;
int64_t x162 = -167496366LL;
static uint64_t x164 = 897630645573402891LLU;
int16_t x165 = INT16_MAX;
volatile int16_t x166 = -1;
static volatile int8_t x167 = 27;
int32_t x171 = 54245;
static volatile int64_t x173 = -1452322245817628LL;
int16_t x174 = 6;
int64_t x176 = INT64_MIN;
volatile int32_t t43 = 3623;
static int8_t x184 = -1;
uint16_t x185 = 17U;
int64_t x188 = -166383596720369717LL;
volatile int32_t t46 = 122;
int32_t x190 = -42050091;
uint16_t x196 = 1005U;
int64_t x201 = -1751081962LL;
int32_t x202 = -1;
int16_t x215 = INT16_MIN;
int8_t x224 = INT8_MAX;
uint16_t x227 = 469U;
uint8_t x233 = UINT8_MAX;
int16_t x237 = INT16_MIN;
volatile int32_t t60 = -78410778;
static volatile uint64_t x256 = 221251008354950LLU;
uint16_t x261 = UINT16_MAX;
int32_t x265 = -41038;
int32_t t66 = -3769472;
int8_t x269 = -1;
int16_t x270 = 0;
volatile int32_t t67 = -2;
uint32_t x275 = UINT32_MAX;
static volatile int16_t x280 = INT16_MIN;
uint64_t x283 = 22LLU;
static int8_t x285 = INT8_MIN;
int8_t x286 = 1;
static int16_t x288 = INT16_MIN;
int32_t x289 = INT32_MIN;
static int32_t x290 = -75548;
int64_t x293 = -15359404LL;
static volatile int64_t x294 = -1LL;
volatile int32_t t74 = -241;
uint64_t x306 = UINT64_MAX;
static int8_t x307 = INT8_MAX;
int16_t x309 = INT16_MIN;
static int16_t x312 = -1;
volatile int32_t t79 = 116024;
uint64_t x326 = 65330923010937LLU;
volatile int32_t t81 = -29564;
uint64_t x332 = 1477001556413LLU;
static int8_t x333 = -3;
uint8_t x345 = UINT8_MAX;
volatile int32_t t86 = -42826521;
int64_t x349 = -1LL;
int16_t x351 = -786;
int64_t x352 = INT64_MIN;
int16_t x362 = 892;
int64_t x363 = INT64_MIN;
volatile uint16_t x371 = UINT16_MAX;
int16_t x377 = -4;
volatile int64_t x387 = INT64_MAX;
volatile int32_t t98 = 2;
int8_t x401 = -14;
int32_t t102 = 413;
volatile int32_t t103 = -11449;
uint64_t x422 = 97548718LLU;
int16_t x426 = INT16_MAX;
volatile int32_t t106 = 1;
volatile int32_t t107 = 1539;
static volatile int32_t t108 = 110148075;
uint8_t x437 = UINT8_MAX;
static int64_t x440 = INT64_MIN;
static int8_t x444 = -1;
int16_t x449 = INT16_MIN;
uint32_t x450 = 4705U;
static int16_t x456 = INT16_MIN;
static int16_t x458 = -442;
static volatile int32_t t114 = 128369;
volatile uint32_t x461 = 27121941U;
int32_t x466 = INT32_MAX;
int32_t x471 = -132457421;
int8_t x473 = INT8_MIN;
static int32_t x478 = 127;
uint64_t x481 = 179453726LLU;
int64_t x487 = INT64_MAX;
volatile int8_t x489 = INT8_MAX;
int16_t x491 = 1;
uint32_t x495 = 2180U;
uint64_t x497 = UINT64_MAX;
static int32_t x505 = INT32_MAX;
static int64_t x512 = INT64_MAX;
uint16_t x514 = UINT16_MAX;
uint8_t x521 = 4U;
int32_t x537 = -26549;
static int8_t x539 = INT8_MIN;
int32_t t134 = -3288887;
uint64_t x543 = UINT64_MAX;
uint32_t x546 = 368611667U;
static int16_t x547 = INT16_MIN;
int8_t x549 = INT8_MAX;
int32_t t137 = 10418976;
int32_t x555 = INT32_MIN;
int8_t x561 = 0;
uint8_t x562 = 1U;
int32_t t140 = -1473;
volatile int64_t x567 = INT64_MIN;
volatile int32_t t141 = 161;
volatile int8_t x569 = -1;
uint32_t x570 = 4U;
int16_t x571 = -1;
uint32_t x580 = 1U;
int32_t x583 = -25184;
static int32_t x585 = 21;
int32_t t146 = -305502;
static uint32_t x589 = 224634U;
int8_t x590 = INT8_MAX;
uint8_t x595 = 1U;
uint16_t x596 = 21693U;
int8_t x597 = INT8_MAX;
volatile int32_t t149 = -1217;
volatile uint8_t x601 = UINT8_MAX;
volatile int8_t x612 = 1;
static int32_t x616 = INT32_MAX;
int32_t x619 = -1;
uint8_t x622 = 53U;
int32_t x625 = INT32_MIN;
static int16_t x626 = INT16_MIN;
int8_t x629 = INT8_MIN;
int8_t x635 = -1;
int64_t x637 = INT64_MIN;
int8_t x642 = INT8_MIN;
int32_t t163 = 657168787;
uint64_t x659 = 805347356720LLU;
uint8_t x660 = 40U;
int32_t t164 = -164177440;
volatile int32_t x665 = -1;
static int32_t x671 = -1;
static int8_t x672 = INT8_MIN;
int16_t x673 = 794;
volatile int32_t t168 = -89;
uint8_t x679 = UINT8_MAX;
int32_t x686 = INT32_MAX;
int16_t x694 = 1;
volatile uint16_t x699 = UINT16_MAX;
int64_t x700 = -526150823535614LL;
static int32_t t174 = -57;
uint64_t x702 = 34099373175302829LLU;
volatile int32_t t175 = -3240208;
static int8_t x707 = INT8_MIN;
uint16_t x713 = 12052U;
volatile int8_t x715 = INT8_MIN;
int8_t x719 = INT8_MIN;
int8_t x721 = INT8_MAX;
int64_t x722 = 1LL;
uint8_t x725 = UINT8_MAX;
uint32_t x726 = 8156738U;
uint64_t x731 = UINT64_MAX;
int32_t x738 = INT32_MIN;
int8_t x741 = INT8_MAX;
int64_t x742 = -1LL;
int32_t t185 = 26563322;
uint8_t x745 = 1U;
static volatile int8_t x748 = -1;
int64_t x751 = 431795530212LL;
static int32_t x753 = INT32_MIN;
uint8_t x755 = UINT8_MAX;
volatile int32_t t190 = 0;
uint8_t x767 = UINT8_MAX;
int8_t x768 = INT8_MAX;
static int64_t x769 = INT64_MIN;
volatile int16_t x773 = INT16_MIN;
uint8_t x776 = UINT8_MAX;
int64_t x780 = INT64_MIN;
int8_t x781 = -1;
int32_t t195 = -2;
int32_t x785 = 6606;
static uint16_t x786 = 36U;
uint16_t x792 = 772U;
uint32_t x797 = 24U;
static uint64_t x800 = 3918392325538LLU;


void f0(void) {
    	int8_t x2 = -2;
	uint32_t x3 = 238623U;
	int64_t x4 = 41852053596LL;
	int32_t t0 = 6037;

    t0 = (x1!=((x2|x3)<=x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = 1;
	uint64_t x6 = UINT64_MAX;
	volatile uint64_t x7 = 15948980330LLU;
	volatile int8_t x8 = INT8_MIN;
	volatile int32_t t1 = -6864437;

    t1 = (x5!=((x6|x7)<=x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint32_t x10 = 2327451U;
	volatile int8_t x11 = -1;
	static uint64_t x12 = 301359242LLU;
	volatile int32_t t2 = -172;

    t2 = (x9!=((x10|x11)<=x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = -228192;
	int8_t x15 = 1;
	uint8_t x16 = 2U;
	int32_t t3 = -3;

    t3 = (x13!=((x14|x15)<=x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MAX;
	int64_t x18 = 16245LL;
	int8_t x19 = -1;
	volatile int8_t x20 = -1;
	int32_t t4 = -5;

    t4 = (x17!=((x18|x19)<=x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x21 = UINT16_MAX;
	int8_t x23 = INT8_MAX;
	int8_t x24 = INT8_MIN;

    t5 = (x21!=((x22|x23)<=x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = -1;
	int64_t x27 = -1LL;
	static int16_t x28 = INT16_MIN;
	int32_t t6 = -3;

    t6 = (x25!=((x26|x27)<=x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = 258;
	static int16_t x30 = INT16_MIN;
	volatile uint32_t x31 = UINT32_MAX;
	static volatile int32_t x32 = INT32_MIN;
	int32_t t7 = -43526847;

    t7 = (x29!=((x30|x31)<=x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = INT64_MAX;
	int8_t x34 = 0;
	static int32_t t8 = 259341;

    t8 = (x33!=((x34|x35)<=x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x38 = -116169937555LL;
	int32_t x40 = INT32_MIN;
	volatile int32_t t9 = -89118564;

    t9 = (x37!=((x38|x39)<=x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int32_t x42 = INT32_MAX;
	volatile int8_t x44 = -1;
	volatile int32_t t10 = -1645;

    t10 = (x41!=((x42|x43)<=x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint16_t x45 = 1276U;
	int16_t x46 = -1;
	static int64_t x47 = INT64_MIN;
	volatile int16_t x48 = INT16_MIN;
	volatile int32_t t11 = 181;

    t11 = (x45!=((x46|x47)<=x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = INT16_MIN;
	volatile int32_t x50 = -2063359;
	int8_t x51 = -1;
	static uint32_t x52 = 17336600U;
	static int32_t t12 = 27;

    t12 = (x49!=((x50|x51)<=x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = INT32_MIN;
	int32_t x55 = -3473;
	int64_t x56 = INT64_MAX;
	int32_t t13 = 800209;

    t13 = (x53!=((x54|x55)<=x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = -1;
	uint64_t x58 = 84LLU;
	volatile uint16_t x60 = UINT16_MAX;

    t14 = (x57!=((x58|x59)<=x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x61 = INT64_MAX;
	volatile int8_t x62 = -7;
	uint16_t x63 = 34U;

    t15 = (x61!=((x62|x63)<=x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x65 = 24U;
	static volatile uint16_t x66 = UINT16_MAX;
	static uint16_t x67 = UINT16_MAX;
	int8_t x68 = INT8_MAX;
	int32_t t16 = 151;

    t16 = (x65!=((x66|x67)<=x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x69 = UINT32_MAX;
	uint8_t x70 = UINT8_MAX;
	int32_t x71 = INT32_MAX;
	int32_t x72 = INT32_MIN;

    t17 = (x69!=((x70|x71)<=x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = -1;
	static volatile int32_t x74 = INT32_MAX;
	uint64_t x75 = UINT64_MAX;
	int8_t x76 = -1;
	volatile int32_t t18 = 7069347;

    t18 = (x73!=((x74|x75)<=x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x78 = INT16_MAX;
	uint64_t x79 = 1683311093LLU;
	volatile int16_t x80 = 8;
	int32_t t19 = -1;

    t19 = (x77!=((x78|x79)<=x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = 0;
	int8_t x82 = INT8_MIN;
	static int64_t x84 = INT64_MIN;

    t20 = (x81!=((x82|x83)<=x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = INT64_MIN;
	volatile uint64_t x86 = 1LLU;
	int16_t x87 = -1;
	static uint8_t x88 = UINT8_MAX;

    t21 = (x85!=((x86|x87)<=x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = INT16_MAX;
	static volatile int8_t x90 = -1;
	int8_t x91 = INT8_MAX;

    t22 = (x89!=((x90|x91)<=x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x93 = 6653U;
	int64_t x94 = 4744729738LL;
	uint8_t x96 = UINT8_MAX;

    t23 = (x93!=((x94|x95)<=x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x97 = INT16_MAX;
	static int8_t x98 = INT8_MIN;
	int64_t x99 = INT64_MAX;
	int32_t x100 = INT32_MIN;
	int32_t t24 = -426746;

    t24 = (x97!=((x98|x99)<=x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x101 = INT8_MIN;
	static int64_t x102 = -469429372LL;
	volatile uint32_t x103 = 53306U;
	volatile uint32_t x104 = UINT32_MAX;
	volatile int32_t t25 = 27486128;

    t25 = (x101!=((x102|x103)<=x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x105 = INT16_MIN;
	volatile uint8_t x107 = 1U;
	int32_t t26 = 1;

    t26 = (x105!=((x106|x107)<=x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = INT16_MIN;
	static int16_t x110 = 9880;
	static volatile int32_t x111 = INT32_MIN;
	int64_t x112 = INT64_MAX;
	int32_t t27 = 1;

    t27 = (x109!=((x110|x111)<=x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = INT64_MIN;
	static uint64_t x114 = UINT64_MAX;
	volatile int8_t x115 = -47;
	static uint8_t x116 = 15U;
	volatile int32_t t28 = -1;

    t28 = (x113!=((x114|x115)<=x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = 1;
	int32_t x118 = INT32_MIN;
	uint8_t x119 = UINT8_MAX;
	volatile int32_t t29 = 0;

    t29 = (x117!=((x118|x119)<=x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = -1;
	int32_t x122 = 49923;
	uint8_t x124 = 1U;
	int32_t t30 = -122490;

    t30 = (x121!=((x122|x123)<=x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = INT32_MIN;
	int8_t x126 = 1;
	static int32_t t31 = 28;

    t31 = (x125!=((x126|x127)<=x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile uint32_t x129 = 939U;
	int64_t x131 = INT64_MIN;
	int64_t x132 = INT64_MAX;
	volatile int32_t t32 = -3733843;

    t32 = (x129!=((x130|x131)<=x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x135 = INT32_MIN;
	static volatile int64_t x136 = INT64_MIN;

    t33 = (x133!=((x134|x135)<=x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x137 = 0;
	uint32_t x138 = 515999980U;
	uint32_t x139 = UINT32_MAX;
	uint32_t x140 = UINT32_MAX;

    t34 = (x137!=((x138|x139)<=x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static int64_t x141 = 1LL;
	uint8_t x142 = 0U;
	static int16_t x143 = -1;
	int16_t x144 = INT16_MIN;

    t35 = (x141!=((x142|x143)<=x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x145 = UINT64_MAX;
	volatile uint32_t x147 = UINT32_MAX;

    t36 = (x145!=((x146|x147)<=x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint16_t x150 = UINT16_MAX;
	volatile int32_t t37 = 7124134;

    t37 = (x149!=((x150|x151)<=x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint16_t x154 = 71U;
	volatile uint64_t x155 = 129603529LLU;
	int32_t t38 = 66092088;

    t38 = (x153!=((x154|x155)<=x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x158 = INT32_MAX;
	uint16_t x159 = 0U;
	uint64_t x160 = UINT64_MAX;
	static int32_t t39 = -2351232;

    t39 = (x157!=((x158|x159)<=x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x161 = -3;
	static volatile int64_t x163 = INT64_MAX;
	volatile int32_t t40 = -3;

    t40 = (x161!=((x162|x163)<=x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x168 = INT8_MIN;
	volatile int32_t t41 = -95800;

    t41 = (x165!=((x166|x167)<=x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x169 = INT16_MIN;
	int32_t x170 = -1;
	int16_t x172 = -293;
	volatile int32_t t42 = 98;

    t42 = (x169!=((x170|x171)<=x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x175 = UINT8_MAX;

    t43 = (x173!=((x174|x175)<=x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile uint16_t x177 = 42U;
	volatile int64_t x178 = INT64_MIN;
	int32_t x179 = 2889199;
	int16_t x180 = 0;
	volatile int32_t t44 = -407926;

    t44 = (x177!=((x178|x179)<=x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x181 = -1;
	int64_t x182 = 6726622383325LL;
	int32_t x183 = INT32_MAX;
	int32_t t45 = -1585920;

    t45 = (x181!=((x182|x183)<=x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x186 = UINT32_MAX;
	int32_t x187 = INT32_MIN;

    t46 = (x185!=((x186|x187)<=x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x189 = 0U;
	int64_t x191 = 1579956487028907LL;
	int64_t x192 = INT64_MIN;
	volatile int32_t t47 = 6378858;

    t47 = (x189!=((x190|x191)<=x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x193 = 435997U;
	int64_t x194 = INT64_MAX;
	uint8_t x195 = UINT8_MAX;
	volatile int32_t t48 = -1;

    t48 = (x193!=((x194|x195)<=x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x197 = 5LLU;
	static uint32_t x198 = 363729537U;
	int32_t x199 = INT32_MIN;
	int32_t x200 = INT32_MIN;
	static int32_t t49 = 437799;

    t49 = (x197!=((x198|x199)<=x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x203 = INT8_MIN;
	uint16_t x204 = 0U;
	volatile int32_t t50 = -5724;

    t50 = (x201!=((x202|x203)<=x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x205 = 380408652724026884LLU;
	int32_t x206 = -972637;
	int64_t x207 = -1LL;
	static uint16_t x208 = UINT16_MAX;
	volatile int32_t t51 = 1941301;

    t51 = (x205!=((x206|x207)<=x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x209 = UINT8_MAX;
	int8_t x210 = -4;
	static uint64_t x211 = 111850876826489LLU;
	int32_t x212 = -1;
	static volatile int32_t t52 = 47;

    t52 = (x209!=((x210|x211)<=x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x213 = INT8_MIN;
	int64_t x214 = INT64_MAX;
	int32_t x216 = INT32_MIN;
	volatile int32_t t53 = -462283;

    t53 = (x213!=((x214|x215)<=x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x217 = 15168LLU;
	volatile uint64_t x218 = UINT64_MAX;
	uint8_t x219 = UINT8_MAX;
	volatile int64_t x220 = -1LL;
	static volatile int32_t t54 = 22450790;

    t54 = (x217!=((x218|x219)<=x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x221 = INT16_MIN;
	uint32_t x222 = 1436365589U;
	int32_t x223 = -1716;
	static volatile int32_t t55 = -1348333;

    t55 = (x221!=((x222|x223)<=x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = INT8_MIN;
	int8_t x226 = INT8_MIN;
	int16_t x228 = INT16_MIN;
	int32_t t56 = -780270;

    t56 = (x225!=((x226|x227)<=x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = INT16_MIN;
	int8_t x230 = -1;
	uint32_t x231 = 0U;
	int64_t x232 = -1110408LL;
	int32_t t57 = 166079941;

    t57 = (x229!=((x230|x231)<=x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint64_t x234 = 4097138405LLU;
	static uint8_t x235 = 28U;
	volatile int64_t x236 = -24658785861LL;
	int32_t t58 = 1;

    t58 = (x233!=((x234|x235)<=x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x238 = INT32_MIN;
	uint32_t x239 = 7147103U;
	static uint64_t x240 = UINT64_MAX;
	int32_t t59 = 316759;

    t59 = (x237!=((x238|x239)<=x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x241 = UINT8_MAX;
	uint16_t x242 = UINT16_MAX;
	static int64_t x243 = INT64_MAX;
	volatile uint64_t x244 = 16080368553750LLU;

    t60 = (x241!=((x242|x243)<=x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x245 = -1;
	int64_t x246 = INT64_MIN;
	uint64_t x247 = 4801179838155933LLU;
	int64_t x248 = -1LL;
	volatile int32_t t61 = -51;

    t61 = (x245!=((x246|x247)<=x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x249 = -1;
	uint16_t x250 = UINT16_MAX;
	int8_t x251 = INT8_MIN;
	int8_t x252 = INT8_MIN;
	int32_t t62 = 12822;

    t62 = (x249!=((x250|x251)<=x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x253 = UINT32_MAX;
	uint64_t x254 = UINT64_MAX;
	int64_t x255 = INT64_MAX;
	int32_t t63 = 4714023;

    t63 = (x253!=((x254|x255)<=x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x257 = INT64_MIN;
	int16_t x258 = 5;
	int16_t x259 = INT16_MIN;
	static int8_t x260 = INT8_MIN;
	volatile int32_t t64 = -6441586;

    t64 = (x257!=((x258|x259)<=x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint64_t x262 = 537202869731LLU;
	uint64_t x263 = 65741516053LLU;
	uint8_t x264 = 1U;
	static int32_t t65 = -51618;

    t65 = (x261!=((x262|x263)<=x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x266 = 1751783395090111LLU;
	uint16_t x267 = 5U;
	uint8_t x268 = 0U;

    t66 = (x265!=((x266|x267)<=x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x271 = INT16_MIN;
	int16_t x272 = INT16_MAX;

    t67 = (x269!=((x270|x271)<=x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x273 = 20U;
	static int64_t x274 = -1LL;
	int8_t x276 = INT8_MIN;
	volatile int32_t t68 = -315687;

    t68 = (x273!=((x274|x275)<=x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = 0;
	int32_t x278 = -3859;
	int16_t x279 = INT16_MIN;
	volatile int32_t t69 = 11096266;

    t69 = (x277!=((x278|x279)<=x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x281 = INT8_MAX;
	uint8_t x282 = 2U;
	int8_t x284 = 0;
	int32_t t70 = 11822121;

    t70 = (x281!=((x282|x283)<=x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x287 = -16662;
	volatile int32_t t71 = 13;

    t71 = (x285!=((x286|x287)<=x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x291 = -7;
	int64_t x292 = -10877303LL;
	static volatile int32_t t72 = -2416678;

    t72 = (x289!=((x290|x291)<=x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x295 = 5057;
	int16_t x296 = INT16_MIN;
	static volatile int32_t t73 = 700392589;

    t73 = (x293!=((x294|x295)<=x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x297 = 3U;
	uint64_t x298 = UINT64_MAX;
	uint32_t x299 = 82U;
	static uint8_t x300 = 82U;

    t74 = (x297!=((x298|x299)<=x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint16_t x301 = 4562U;
	int64_t x302 = -1LL;
	int16_t x303 = INT16_MIN;
	uint16_t x304 = 41U;
	volatile int32_t t75 = -303151;

    t75 = (x301!=((x302|x303)<=x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = -35LL;
	int64_t x308 = INT64_MIN;
	volatile int32_t t76 = -4;

    t76 = (x305!=((x306|x307)<=x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x310 = -1;
	int64_t x311 = INT64_MAX;
	volatile int32_t t77 = -352;

    t77 = (x309!=((x310|x311)<=x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x313 = INT16_MIN;
	static uint32_t x314 = 205U;
	int32_t x315 = -29520;
	uint32_t x316 = 51U;
	volatile int32_t t78 = -4869;

    t78 = (x313!=((x314|x315)<=x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x317 = -243;
	static uint8_t x318 = 2U;
	static uint32_t x319 = 235020610U;
	static int32_t x320 = INT32_MAX;

    t79 = (x317!=((x318|x319)<=x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x321 = 5U;
	int16_t x322 = -1;
	static int16_t x323 = -2611;
	int8_t x324 = 1;
	volatile int32_t t80 = -631585;

    t80 = (x321!=((x322|x323)<=x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x325 = 60702985887564LLU;
	uint8_t x327 = 8U;
	static int8_t x328 = INT8_MIN;

    t81 = (x325!=((x326|x327)<=x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x329 = -1LL;
	int16_t x330 = -15;
	volatile int32_t x331 = 33549283;
	int32_t t82 = -42666134;

    t82 = (x329!=((x330|x331)<=x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x334 = UINT64_MAX;
	int16_t x335 = -1;
	uint32_t x336 = UINT32_MAX;
	int32_t t83 = 319288951;

    t83 = (x333!=((x334|x335)<=x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint16_t x337 = UINT16_MAX;
	int8_t x338 = INT8_MIN;
	int16_t x339 = INT16_MIN;
	static volatile int16_t x340 = -1;
	volatile int32_t t84 = -6605761;

    t84 = (x337!=((x338|x339)<=x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x341 = -1;
	int16_t x342 = -1;
	int8_t x343 = INT8_MAX;
	static int64_t x344 = 47913832720068LL;
	volatile int32_t t85 = 93;

    t85 = (x341!=((x342|x343)<=x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x346 = UINT8_MAX;
	uint32_t x347 = 32770U;
	int32_t x348 = -37507616;

    t86 = (x345!=((x346|x347)<=x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x350 = 1;
	int32_t t87 = 5676;

    t87 = (x349!=((x350|x351)<=x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x353 = 145687141U;
	volatile int32_t x354 = -8426;
	int32_t x355 = INT32_MIN;
	int8_t x356 = -12;
	static volatile int32_t t88 = -5;

    t88 = (x353!=((x354|x355)<=x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x357 = -1;
	uint8_t x358 = 8U;
	volatile uint32_t x359 = 53U;
	int16_t x360 = INT16_MIN;
	volatile int32_t t89 = 1018282;

    t89 = (x357!=((x358|x359)<=x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile int16_t x361 = 1;
	volatile int64_t x364 = 389932217335836LL;
	int32_t t90 = 2869574;

    t90 = (x361!=((x362|x363)<=x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x365 = INT64_MAX;
	uint16_t x366 = 17905U;
	volatile int32_t x367 = INT32_MAX;
	int32_t x368 = -1113;
	int32_t t91 = 41;

    t91 = (x365!=((x366|x367)<=x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x369 = 2U;
	static volatile int64_t x370 = INT64_MAX;
	static uint16_t x372 = 16114U;
	volatile int32_t t92 = -1017;

    t92 = (x369!=((x370|x371)<=x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x373 = -1;
	int32_t x374 = -1;
	static uint32_t x375 = 4147U;
	int8_t x376 = -55;
	volatile int32_t t93 = 5324;

    t93 = (x373!=((x374|x375)<=x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint16_t x378 = 2546U;
	volatile uint8_t x379 = 28U;
	int64_t x380 = -31734165276LL;
	volatile int32_t t94 = 15890;

    t94 = (x377!=((x378|x379)<=x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x381 = INT32_MIN;
	uint64_t x382 = 1743333592000LLU;
	static volatile uint64_t x383 = UINT64_MAX;
	volatile int16_t x384 = 1;
	volatile int32_t t95 = -757352;

    t95 = (x381!=((x382|x383)<=x384));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x385 = INT64_MIN;
	static uint32_t x386 = UINT32_MAX;
	uint16_t x388 = UINT16_MAX;
	volatile int32_t t96 = -1;

    t96 = (x385!=((x386|x387)<=x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x389 = INT16_MIN;
	int64_t x390 = INT64_MIN;
	int32_t x391 = -1;
	int16_t x392 = INT16_MAX;
	volatile int32_t t97 = 1;

    t97 = (x389!=((x390|x391)<=x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x393 = -1LL;
	uint8_t x394 = 37U;
	uint16_t x395 = 32U;
	int16_t x396 = -4;

    t98 = (x393!=((x394|x395)<=x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint8_t x397 = 34U;
	volatile uint16_t x398 = 10407U;
	int64_t x399 = INT64_MAX;
	int64_t x400 = -1LL;
	int32_t t99 = 17788344;

    t99 = (x397!=((x398|x399)<=x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x402 = 41U;
	static int8_t x403 = 4;
	uint8_t x404 = UINT8_MAX;
	volatile int32_t t100 = -7135618;

    t100 = (x401!=((x402|x403)<=x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = INT32_MIN;
	volatile uint8_t x406 = UINT8_MAX;
	int32_t x407 = -159905;
	volatile int64_t x408 = -7740317415662LL;
	static int32_t t101 = 43764923;

    t101 = (x405!=((x406|x407)<=x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int32_t x409 = INT32_MIN;
	volatile uint16_t x410 = 95U;
	static int8_t x411 = INT8_MIN;
	volatile int32_t x412 = INT32_MIN;

    t102 = (x409!=((x410|x411)<=x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x413 = 11004U;
	int64_t x414 = 163336152LL;
	static int64_t x415 = 189LL;
	volatile int32_t x416 = INT32_MAX;

    t103 = (x413!=((x414|x415)<=x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x417 = 1LL;
	int64_t x418 = INT64_MIN;
	static int8_t x419 = INT8_MAX;
	volatile int64_t x420 = -1LL;
	int32_t t104 = -14029;

    t104 = (x417!=((x418|x419)<=x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint8_t x421 = 0U;
	int64_t x423 = INT64_MIN;
	static uint32_t x424 = 259U;
	volatile int32_t t105 = 1;

    t105 = (x421!=((x422|x423)<=x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x425 = INT32_MAX;
	static int16_t x427 = INT16_MIN;
	static int8_t x428 = 27;

    t106 = (x425!=((x426|x427)<=x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x429 = UINT32_MAX;
	int64_t x430 = INT64_MIN;
	int32_t x431 = INT32_MAX;
	int16_t x432 = INT16_MAX;

    t107 = (x429!=((x430|x431)<=x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int64_t x433 = -1LL;
	uint16_t x434 = 4098U;
	int64_t x435 = INT64_MAX;
	static int32_t x436 = -1;

    t108 = (x433!=((x434|x435)<=x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x438 = INT64_MIN;
	int8_t x439 = 1;
	static int32_t t109 = -527042;

    t109 = (x437!=((x438|x439)<=x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x441 = INT8_MAX;
	static uint16_t x442 = 41U;
	int64_t x443 = INT64_MAX;
	int32_t t110 = -11961;

    t110 = (x441!=((x442|x443)<=x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x445 = INT64_MIN;
	uint32_t x446 = UINT32_MAX;
	int64_t x447 = 273471LL;
	int16_t x448 = 1383;
	volatile int32_t t111 = 53655;

    t111 = (x445!=((x446|x447)<=x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x451 = -2531;
	static volatile uint64_t x452 = 1693237328LLU;
	static int32_t t112 = 12247358;

    t112 = (x449!=((x450|x451)<=x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x453 = 115619483U;
	volatile uint64_t x454 = 9757399501LLU;
	static int16_t x455 = -1;
	int32_t t113 = -8;

    t113 = (x453!=((x454|x455)<=x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x457 = INT64_MIN;
	static uint32_t x459 = 3465U;
	static int32_t x460 = 4;

    t114 = (x457!=((x458|x459)<=x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x462 = 5;
	volatile uint32_t x463 = 16U;
	int8_t x464 = 1;
	volatile int32_t t115 = 453;

    t115 = (x461!=((x462|x463)<=x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x465 = INT16_MIN;
	int64_t x467 = -1LL;
	uint8_t x468 = 117U;
	static int32_t t116 = 1;

    t116 = (x465!=((x466|x467)<=x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint32_t x469 = 253089U;
	int32_t x470 = INT32_MIN;
	static int8_t x472 = INT8_MIN;
	static volatile int32_t t117 = -7;

    t117 = (x469!=((x470|x471)<=x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint32_t x474 = 408799809U;
	uint64_t x475 = 183430345972133072LLU;
	volatile int8_t x476 = -17;
	int32_t t118 = -1359;

    t118 = (x473!=((x474|x475)<=x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x477 = INT32_MIN;
	volatile int64_t x479 = INT64_MIN;
	static volatile uint64_t x480 = UINT64_MAX;
	int32_t t119 = -1731564;

    t119 = (x477!=((x478|x479)<=x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x482 = INT32_MIN;
	int32_t x483 = 98326346;
	static int8_t x484 = INT8_MIN;
	volatile int32_t t120 = 48800817;

    t120 = (x481!=((x482|x483)<=x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x485 = INT64_MIN;
	int16_t x486 = 67;
	static uint8_t x488 = UINT8_MAX;
	int32_t t121 = 0;

    t121 = (x485!=((x486|x487)<=x488));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x490 = 22449U;
	volatile int64_t x492 = INT64_MAX;
	volatile int32_t t122 = -44;

    t122 = (x489!=((x490|x491)<=x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x493 = 3148010556554498LLU;
	int32_t x494 = INT32_MIN;
	uint64_t x496 = UINT64_MAX;
	volatile int32_t t123 = -6;

    t123 = (x493!=((x494|x495)<=x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x498 = 1;
	int8_t x499 = INT8_MAX;
	int64_t x500 = 3948462546LL;
	int32_t t124 = -126841434;

    t124 = (x497!=((x498|x499)<=x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x501 = INT32_MAX;
	static int32_t x502 = -1;
	int32_t x503 = -5;
	int64_t x504 = -1LL;
	int32_t t125 = 475946857;

    t125 = (x501!=((x502|x503)<=x504));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static int32_t x506 = INT32_MIN;
	static uint16_t x507 = UINT16_MAX;
	static uint64_t x508 = 23744607679269738LLU;
	volatile int32_t t126 = -3166;

    t126 = (x505!=((x506|x507)<=x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x509 = INT32_MIN;
	int64_t x510 = -693LL;
	int32_t x511 = -1;
	volatile int32_t t127 = 1604944;

    t127 = (x509!=((x510|x511)<=x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static int8_t x513 = 0;
	int64_t x515 = INT64_MAX;
	int16_t x516 = -1;
	static int32_t t128 = 1221031;

    t128 = (x513!=((x514|x515)<=x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint32_t x517 = 31176169U;
	static volatile uint64_t x518 = 69133LLU;
	volatile int16_t x519 = 18;
	static volatile int64_t x520 = INT64_MIN;
	volatile int32_t t129 = 6;

    t129 = (x517!=((x518|x519)<=x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x522 = INT16_MAX;
	static int8_t x523 = -1;
	static volatile uint32_t x524 = 1735U;
	volatile int32_t t130 = 165356;

    t130 = (x521!=((x522|x523)<=x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x525 = INT16_MIN;
	int16_t x526 = INT16_MIN;
	uint32_t x527 = 1181240U;
	int32_t x528 = -1;
	volatile int32_t t131 = -212707;

    t131 = (x525!=((x526|x527)<=x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x529 = INT64_MIN;
	int64_t x530 = 98LL;
	uint8_t x531 = UINT8_MAX;
	uint8_t x532 = 0U;
	volatile int32_t t132 = 10406246;

    t132 = (x529!=((x530|x531)<=x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint32_t x533 = 98351U;
	uint64_t x534 = UINT64_MAX;
	static uint32_t x535 = UINT32_MAX;
	int16_t x536 = -1;
	volatile int32_t t133 = -236216;

    t133 = (x533!=((x534|x535)<=x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x538 = UINT16_MAX;
	int64_t x540 = -2111219481LL;

    t134 = (x537!=((x538|x539)<=x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int8_t x541 = 6;
	int32_t x542 = INT32_MIN;
	int16_t x544 = INT16_MAX;
	static volatile int32_t t135 = -74661;

    t135 = (x541!=((x542|x543)<=x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x545 = 634932374U;
	int16_t x548 = INT16_MIN;
	int32_t t136 = 1;

    t136 = (x545!=((x546|x547)<=x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x550 = -1;
	int16_t x551 = 6475;
	static int64_t x552 = 1633657LL;

    t137 = (x549!=((x550|x551)<=x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x553 = -1;
	int64_t x554 = 906083LL;
	int64_t x556 = -2228918LL;
	volatile int32_t t138 = 1384484;

    t138 = (x553!=((x554|x555)<=x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x557 = INT16_MAX;
	static int64_t x558 = -261566LL;
	int8_t x559 = INT8_MAX;
	int16_t x560 = INT16_MAX;
	static volatile int32_t t139 = 32325;

    t139 = (x557!=((x558|x559)<=x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile int64_t x563 = -1LL;
	volatile uint64_t x564 = 6910966LLU;

    t140 = (x561!=((x562|x563)<=x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x565 = -1;
	volatile int32_t x566 = -1;
	int16_t x568 = INT16_MIN;

    t141 = (x565!=((x566|x567)<=x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x572 = INT64_MIN;
	static volatile int32_t t142 = -30;

    t142 = (x569!=((x570|x571)<=x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int8_t x573 = 8;
	static volatile int64_t x574 = INT64_MIN;
	static uint8_t x575 = 72U;
	volatile int64_t x576 = INT64_MIN;
	int32_t t143 = -7982333;

    t143 = (x573!=((x574|x575)<=x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x577 = -1;
	int32_t x578 = -91810816;
	volatile int32_t x579 = 5406444;
	int32_t t144 = -1625;

    t144 = (x577!=((x578|x579)<=x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x581 = INT8_MAX;
	static volatile int8_t x582 = INT8_MIN;
	uint64_t x584 = UINT64_MAX;
	int32_t t145 = 514749;

    t145 = (x581!=((x582|x583)<=x584));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x586 = INT8_MIN;
	int8_t x587 = -3;
	static int16_t x588 = 15800;

    t146 = (x585!=((x586|x587)<=x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x591 = 1999U;
	uint64_t x592 = UINT64_MAX;
	volatile int32_t t147 = -26;

    t147 = (x589!=((x590|x591)<=x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x593 = UINT32_MAX;
	uint8_t x594 = 5U;
	int32_t t148 = -227384926;

    t148 = (x593!=((x594|x595)<=x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x598 = 0U;
	uint32_t x599 = 0U;
	uint16_t x600 = UINT16_MAX;

    t149 = (x597!=((x598|x599)<=x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x602 = 8129910LLU;
	int16_t x603 = INT16_MIN;
	static int32_t x604 = INT32_MAX;
	int32_t t150 = 506108;

    t150 = (x601!=((x602|x603)<=x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x605 = INT8_MIN;
	static int32_t x606 = -8824;
	static volatile int16_t x607 = -1;
	static int8_t x608 = INT8_MIN;
	static volatile int32_t t151 = -10;

    t151 = (x605!=((x606|x607)<=x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x609 = 14;
	uint8_t x610 = UINT8_MAX;
	static volatile int16_t x611 = INT16_MAX;
	volatile int32_t t152 = -63;

    t152 = (x609!=((x610|x611)<=x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x613 = 6021302U;
	int16_t x614 = INT16_MIN;
	volatile uint64_t x615 = 12427073LLU;
	int32_t t153 = 21650;

    t153 = (x613!=((x614|x615)<=x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x617 = 13U;
	uint16_t x618 = 438U;
	uint16_t x620 = 929U;
	int32_t t154 = -122760;

    t154 = (x617!=((x618|x619)<=x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x621 = -29;
	uint32_t x623 = UINT32_MAX;
	static uint32_t x624 = 52U;
	volatile int32_t t155 = -3476;

    t155 = (x621!=((x622|x623)<=x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x627 = UINT16_MAX;
	int32_t x628 = 1;
	int32_t t156 = 3;

    t156 = (x625!=((x626|x627)<=x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int8_t x630 = -1;
	static int64_t x631 = INT64_MIN;
	int16_t x632 = INT16_MIN;
	static volatile int32_t t157 = -11386020;

    t157 = (x629!=((x630|x631)<=x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x633 = INT32_MAX;
	int16_t x634 = 1;
	volatile int64_t x636 = INT64_MIN;
	volatile int32_t t158 = 7115374;

    t158 = (x633!=((x634|x635)<=x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x638 = INT16_MIN;
	static volatile uint32_t x639 = 444489U;
	static int32_t x640 = INT32_MIN;
	volatile int32_t t159 = -4729;

    t159 = (x637!=((x638|x639)<=x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int64_t x641 = INT64_MIN;
	static int8_t x643 = 29;
	static uint16_t x644 = UINT16_MAX;
	volatile int32_t t160 = -4;

    t160 = (x641!=((x642|x643)<=x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x645 = UINT8_MAX;
	int64_t x646 = -520772418194LL;
	int8_t x647 = INT8_MIN;
	uint32_t x648 = 525U;
	volatile int32_t t161 = 0;

    t161 = (x645!=((x646|x647)<=x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int8_t x649 = -1;
	int8_t x650 = -7;
	static int8_t x651 = 0;
	uint16_t x652 = 229U;
	int32_t t162 = 1928;

    t162 = (x649!=((x650|x651)<=x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x653 = -1;
	int32_t x654 = INT32_MIN;
	int8_t x655 = INT8_MIN;
	int64_t x656 = INT64_MIN;

    t163 = (x653!=((x654|x655)<=x656));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x657 = 35U;
	static int16_t x658 = 0;

    t164 = (x657!=((x658|x659)<=x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint16_t x661 = 7U;
	int16_t x662 = INT16_MAX;
	int32_t x663 = INT32_MIN;
	uint16_t x664 = UINT16_MAX;
	volatile int32_t t165 = 108;

    t165 = (x661!=((x662|x663)<=x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x666 = -60718224009LL;
	uint32_t x667 = 14115U;
	uint64_t x668 = UINT64_MAX;
	int32_t t166 = -1500819;

    t166 = (x665!=((x666|x667)<=x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = INT64_MIN;
	uint8_t x670 = UINT8_MAX;
	static volatile int32_t t167 = -31;

    t167 = (x669!=((x670|x671)<=x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x674 = 3U;
	int8_t x675 = INT8_MAX;
	static int16_t x676 = INT16_MAX;

    t168 = (x673!=((x674|x675)<=x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x677 = UINT8_MAX;
	int16_t x678 = 467;
	static int32_t x680 = INT32_MIN;
	volatile int32_t t169 = 3;

    t169 = (x677!=((x678|x679)<=x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int64_t x681 = INT64_MIN;
	static int8_t x682 = 8;
	volatile int32_t x683 = INT32_MIN;
	static volatile int8_t x684 = INT8_MAX;
	static int32_t t170 = 9;

    t170 = (x681!=((x682|x683)<=x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint64_t x685 = 2698543276876670LLU;
	int32_t x687 = INT32_MIN;
	int8_t x688 = 29;
	static int32_t t171 = 0;

    t171 = (x685!=((x686|x687)<=x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint16_t x689 = UINT16_MAX;
	int8_t x690 = INT8_MAX;
	int32_t x691 = -1289;
	volatile int8_t x692 = INT8_MIN;
	int32_t t172 = -156;

    t172 = (x689!=((x690|x691)<=x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint32_t x693 = 0U;
	volatile int32_t x695 = -1;
	volatile int64_t x696 = INT64_MIN;
	int32_t t173 = 3623;

    t173 = (x693!=((x694|x695)<=x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x697 = 7U;
	uint32_t x698 = 63118651U;

    t174 = (x697!=((x698|x699)<=x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x701 = INT8_MIN;
	static int8_t x703 = INT8_MAX;
	uint8_t x704 = 9U;

    t175 = (x701!=((x702|x703)<=x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static int32_t x705 = -191;
	int8_t x706 = 10;
	int32_t x708 = 14522756;
	int32_t t176 = -6;

    t176 = (x705!=((x706|x707)<=x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x709 = 504768695176743LLU;
	uint64_t x710 = UINT64_MAX;
	uint32_t x711 = 253374U;
	int8_t x712 = 24;
	int32_t t177 = 14;

    t177 = (x709!=((x710|x711)<=x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x714 = INT64_MIN;
	int64_t x716 = INT64_MAX;
	volatile int32_t t178 = -193;

    t178 = (x713!=((x714|x715)<=x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x717 = 240;
	uint16_t x718 = 9U;
	volatile int16_t x720 = INT16_MIN;
	int32_t t179 = 3813807;

    t179 = (x717!=((x718|x719)<=x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x723 = 17;
	int8_t x724 = INT8_MIN;
	static volatile int32_t t180 = 337;

    t180 = (x721!=((x722|x723)<=x724));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint64_t x727 = UINT64_MAX;
	static volatile int8_t x728 = 22;
	volatile int32_t t181 = -6;

    t181 = (x725!=((x726|x727)<=x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x729 = 10892;
	int64_t x730 = 203713LL;
	int64_t x732 = -128639LL;
	volatile int32_t t182 = 319741;

    t182 = (x729!=((x730|x731)<=x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint16_t x733 = 3U;
	volatile uint32_t x734 = 3U;
	volatile int32_t x735 = INT32_MIN;
	volatile uint32_t x736 = 12023U;
	volatile int32_t t183 = -218280248;

    t183 = (x733!=((x734|x735)<=x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x737 = -7360LL;
	volatile int16_t x739 = 6;
	uint8_t x740 = UINT8_MAX;
	int32_t t184 = 73902574;

    t184 = (x737!=((x738|x739)<=x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x743 = INT8_MAX;
	int64_t x744 = INT64_MAX;

    t185 = (x741!=((x742|x743)<=x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x746 = 15;
	volatile int16_t x747 = 1;
	int32_t t186 = 344758;

    t186 = (x745!=((x746|x747)<=x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x749 = INT32_MIN;
	static uint64_t x750 = 78528249356LLU;
	int16_t x752 = -1;
	volatile int32_t t187 = -223617555;

    t187 = (x749!=((x750|x751)<=x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x754 = -23259;
	uint64_t x756 = UINT64_MAX;
	static int32_t t188 = 730;

    t188 = (x753!=((x754|x755)<=x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x757 = 31U;
	uint32_t x758 = UINT32_MAX;
	int32_t x759 = INT32_MIN;
	int64_t x760 = INT64_MIN;
	static volatile int32_t t189 = 60853;

    t189 = (x757!=((x758|x759)<=x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x761 = INT32_MIN;
	int32_t x762 = -1;
	int16_t x763 = INT16_MAX;
	volatile uint16_t x764 = UINT16_MAX;

    t190 = (x761!=((x762|x763)<=x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x765 = -1;
	int16_t x766 = INT16_MAX;
	int32_t t191 = 3;

    t191 = (x765!=((x766|x767)<=x768));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x770 = INT64_MAX;
	uint16_t x771 = UINT16_MAX;
	int8_t x772 = 2;
	int32_t t192 = -14;

    t192 = (x769!=((x770|x771)<=x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x774 = INT32_MAX;
	int32_t x775 = -1;
	static volatile int32_t t193 = 0;

    t193 = (x773!=((x774|x775)<=x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint8_t x777 = UINT8_MAX;
	int32_t x778 = INT32_MAX;
	volatile int16_t x779 = INT16_MIN;
	int32_t t194 = 28;

    t194 = (x777!=((x778|x779)<=x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint16_t x782 = 0U;
	volatile uint32_t x783 = UINT32_MAX;
	static uint64_t x784 = 1800905521LLU;

    t195 = (x781!=((x782|x783)<=x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int8_t x787 = INT8_MIN;
	int32_t x788 = -204357;
	static int32_t t196 = 0;

    t196 = (x785!=((x786|x787)<=x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x789 = 1021660074U;
	int32_t x790 = 0;
	int32_t x791 = INT32_MIN;
	static int32_t t197 = -817762;

    t197 = (x789!=((x790|x791)<=x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x793 = 116U;
	static volatile int16_t x794 = INT16_MIN;
	int16_t x795 = -1;
	int64_t x796 = 1878919LL;
	int32_t t198 = -341541;

    t198 = (x793!=((x794|x795)<=x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint8_t x798 = UINT8_MAX;
	static volatile uint16_t x799 = 228U;
	int32_t t199 = 101;

    t199 = (x797!=((x798|x799)<=x800));

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

