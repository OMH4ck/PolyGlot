
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

int8_t x4 = -1;
volatile uint8_t x5 = 63U;
volatile int32_t x10 = -622;
int8_t x11 = INT8_MIN;
int16_t x12 = INT16_MIN;
static uint16_t x13 = UINT16_MAX;
volatile int32_t x20 = 12;
volatile int32_t x21 = INT32_MIN;
int16_t x23 = INT16_MIN;
uint64_t x25 = 4LLU;
static int8_t x26 = INT8_MIN;
int64_t x27 = 1026368831530307LL;
uint32_t x30 = UINT32_MAX;
int32_t x33 = -1;
volatile int8_t x35 = 10;
int8_t x39 = 49;
static volatile int64_t x40 = -1LL;
int32_t t10 = -28632;
uint16_t x45 = 1409U;
static volatile int32_t t11 = -854;
static int8_t x49 = INT8_MAX;
volatile int32_t t13 = -29570622;
uint8_t x62 = UINT8_MAX;
uint8_t x66 = UINT8_MAX;
int32_t t16 = -606484474;
uint32_t x69 = 345979934U;
static volatile uint32_t x76 = 934U;
uint16_t x81 = UINT16_MAX;
uint32_t x88 = 119U;
volatile int32_t t23 = -8332983;
int64_t x108 = -1637849850794LL;
static int8_t x110 = INT8_MAX;
uint64_t x113 = 338571125608LLU;
int32_t x116 = INT32_MIN;
volatile int32_t t28 = -1869093;
static int16_t x119 = INT16_MAX;
static volatile int8_t x121 = -1;
int32_t t30 = 3094146;
int64_t x130 = INT64_MIN;
volatile int16_t x133 = INT16_MIN;
int64_t x134 = 31425722LL;
volatile int32_t t33 = -13;
int32_t x138 = INT32_MAX;
int8_t x140 = -1;
int16_t x143 = INT16_MAX;
static int8_t x147 = -1;
volatile int32_t t36 = 50799655;
int32_t x149 = -32559;
volatile uint16_t x151 = UINT16_MAX;
volatile int32_t x153 = INT32_MAX;
int64_t x159 = INT64_MAX;
int64_t x162 = -892LL;
volatile uint16_t x163 = UINT16_MAX;
int16_t x167 = 777;
int32_t t41 = 60500194;
int64_t x174 = INT64_MIN;
static int32_t x178 = INT32_MIN;
int8_t x179 = -55;
uint64_t x186 = UINT64_MAX;
uint8_t x191 = 1U;
int16_t x193 = INT16_MIN;
volatile uint64_t x202 = 254286993LLU;
int8_t x208 = -63;
volatile int32_t t51 = 340;
int16_t x211 = INT16_MIN;
static int64_t x219 = -1779LL;
static uint64_t x223 = UINT64_MAX;
int64_t x224 = -1LL;
int16_t x226 = INT16_MAX;
volatile int32_t t56 = -253178481;
static int8_t x232 = INT8_MAX;
int32_t x241 = INT32_MIN;
int32_t x243 = -1;
static volatile int32_t t60 = 701;
int8_t x254 = -28;
int16_t x256 = -3;
int8_t x265 = INT8_MAX;
static uint32_t x271 = UINT32_MAX;
uint64_t x276 = UINT64_MAX;
int32_t x288 = -13934;
volatile int8_t x290 = -1;
int16_t x296 = -1;
uint64_t x297 = 9LLU;
int8_t x298 = -1;
static int8_t x304 = 3;
int32_t x305 = -83;
static int16_t x306 = INT16_MIN;
uint32_t x310 = 804608070U;
static uint64_t x311 = UINT64_MAX;
uint64_t x313 = UINT64_MAX;
static int8_t x314 = 1;
volatile uint16_t x319 = 5U;
int16_t x324 = INT16_MAX;
static int16_t x328 = INT16_MIN;
int32_t x333 = -2155;
int16_t x334 = 12;
static uint8_t x337 = 2U;
int32_t x342 = 81852;
uint8_t x346 = 55U;
uint64_t x347 = UINT64_MAX;
static volatile int32_t t86 = 23259977;
int16_t x351 = 1304;
volatile uint16_t x366 = 709U;
volatile int8_t x371 = INT8_MIN;
int32_t t92 = 7;
static int32_t x382 = -56041050;
int16_t x383 = -1;
int16_t x384 = INT16_MIN;
static uint64_t x390 = 17789780461328301LLU;
int32_t t100 = -260106;
int16_t x408 = INT16_MAX;
int8_t x409 = 0;
static int16_t x413 = INT16_MIN;
int32_t x415 = 27727517;
volatile int16_t x420 = INT16_MAX;
static volatile uint16_t x421 = UINT16_MAX;
int16_t x422 = -5277;
int32_t x425 = INT32_MIN;
int8_t x429 = INT8_MAX;
int8_t x432 = -2;
int32_t t107 = -4;
int32_t t109 = -108011;
volatile uint16_t x443 = 26703U;
uint16_t x449 = 25U;
int32_t t112 = 7171369;
int64_t x466 = -1LL;
volatile int16_t x471 = INT16_MIN;
int32_t x476 = 5;
uint32_t x484 = 184U;
int32_t x488 = INT32_MIN;
int16_t x489 = 0;
static volatile int32_t t122 = -6;
int16_t x494 = -1;
static int32_t t123 = 1710;
int64_t x498 = INT64_MAX;
uint8_t x501 = 8U;
int16_t x506 = 0;
uint8_t x524 = 1U;
volatile uint64_t x525 = 205LLU;
static int32_t t132 = -15966;
volatile int8_t x533 = INT8_MAX;
static volatile int32_t x537 = INT32_MIN;
static volatile uint64_t x539 = UINT64_MAX;
volatile uint32_t x540 = 18167U;
uint32_t x544 = 29U;
volatile int32_t t136 = 852286619;
static uint32_t x551 = 19645994U;
int16_t x559 = -1;
static volatile int32_t t139 = -116047125;
static int8_t x566 = -1;
volatile int8_t x568 = INT8_MIN;
int32_t t141 = 0;
uint32_t x570 = 6034039U;
int64_t x571 = -1LL;
static uint64_t x572 = 134045235497065702LLU;
static volatile int32_t x575 = -1;
volatile int16_t x579 = INT16_MIN;
uint32_t x583 = UINT32_MAX;
volatile int64_t x584 = INT64_MIN;
int8_t x587 = INT8_MIN;
int16_t x588 = -1;
int64_t x591 = -4178975LL;
int32_t x596 = INT32_MIN;
volatile int16_t x598 = -1;
int16_t x599 = -2256;
uint8_t x601 = 4U;
int32_t x604 = INT32_MIN;
static volatile int32_t t150 = 250384986;
int64_t x608 = -607938LL;
int32_t t151 = 171807034;
uint16_t x616 = 109U;
int32_t t153 = -15352;
int8_t x617 = -1;
volatile int32_t t154 = 120518327;
volatile int32_t x623 = 133729;
int32_t x624 = -1;
volatile int32_t t155 = 25134;
volatile int16_t x629 = INT16_MIN;
uint32_t x631 = 167U;
int16_t x632 = INT16_MAX;
volatile uint16_t x633 = UINT16_MAX;
int64_t x638 = INT64_MIN;
int32_t t160 = 882590;
static volatile int32_t t162 = -8272354;
int16_t x660 = INT16_MIN;
volatile uint64_t x664 = 6382631496LLU;
static uint16_t x665 = 28642U;
volatile uint16_t x669 = 375U;
int32_t t169 = -7006181;
int16_t x688 = INT16_MIN;
volatile int8_t x691 = INT8_MIN;
int16_t x695 = 1;
int8_t x698 = INT8_MAX;
static int16_t x702 = INT16_MIN;
uint8_t x709 = 10U;
int8_t x715 = INT8_MIN;
uint8_t x716 = 25U;
static volatile int32_t t178 = 238574276;
int64_t x725 = INT64_MAX;
int8_t x729 = INT8_MIN;
int32_t x733 = INT32_MIN;
uint32_t x737 = UINT32_MAX;
static int32_t x738 = -34;
static int8_t x740 = INT8_MIN;
static uint8_t x748 = 24U;
int64_t x752 = -1LL;
int64_t x754 = INT64_MIN;
volatile int32_t x756 = INT32_MIN;
int32_t x758 = INT32_MAX;
volatile int32_t x762 = 14788;
volatile int32_t x767 = INT32_MIN;
int32_t x770 = 496764;
int16_t x773 = INT16_MIN;
uint32_t x774 = 2768037U;
static uint32_t x780 = 1962726868U;
static int64_t x791 = -64575LL;
volatile uint16_t x803 = 374U;


void f0(void) {
    	uint64_t x1 = 239849LLU;
	static int64_t x2 = -196769628186230LL;
	int64_t x3 = INT64_MIN;
	volatile int32_t t0 = -3;

    t0 = (x1<=((x2<=x3)%x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x6 = INT64_MAX;
	volatile int64_t x7 = INT64_MIN;
	int32_t x8 = 3;
	static int32_t t1 = -38801443;

    t1 = (x5<=((x6<=x7)%x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = 127286461391881194LL;
	volatile int32_t t2 = -2509;

    t2 = (x9<=((x10<=x11)%x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x14 = 2532U;
	int8_t x15 = 2;
	int64_t x16 = INT64_MIN;
	int32_t t3 = 1601;

    t3 = (x13<=((x14<=x15)%x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = INT8_MAX;
	int16_t x18 = INT16_MIN;
	static int64_t x19 = -1LL;
	int32_t t4 = -1;

    t4 = (x17<=((x18<=x19)%x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint8_t x22 = 51U;
	int32_t x24 = 18137595;
	volatile int32_t t5 = 13459;

    t5 = (x21<=((x22<=x23)%x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x28 = 97822LL;
	static int32_t t6 = -137313;

    t6 = (x25<=((x26<=x27)%x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x29 = 32U;
	uint32_t x31 = UINT32_MAX;
	static int16_t x32 = INT16_MAX;
	volatile int32_t t7 = -2575;

    t7 = (x29<=((x30<=x31)%x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int8_t x34 = 49;
	int8_t x36 = INT8_MAX;
	volatile int32_t t8 = 5;

    t8 = (x33<=((x34<=x35)%x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x37 = UINT32_MAX;
	volatile int16_t x38 = -252;
	volatile int32_t t9 = -444358490;

    t9 = (x37<=((x38<=x39)%x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = INT16_MIN;
	int16_t x42 = 203;
	int8_t x43 = 1;
	volatile int64_t x44 = -1124306302914226411LL;

    t10 = (x41<=((x42<=x43)%x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x46 = INT32_MAX;
	volatile int64_t x47 = INT64_MAX;
	static int8_t x48 = 1;

    t11 = (x45<=((x46<=x47)%x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint64_t x50 = 3LLU;
	uint8_t x51 = 0U;
	int16_t x52 = INT16_MIN;
	int32_t t12 = 14;

    t12 = (x49<=((x50<=x51)%x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint64_t x53 = 77241449LLU;
	int8_t x54 = -13;
	int8_t x55 = INT8_MIN;
	int16_t x56 = -661;

    t13 = (x53<=((x54<=x55)%x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x57 = 13874LLU;
	int16_t x58 = INT16_MIN;
	int64_t x59 = INT64_MIN;
	int32_t x60 = INT32_MIN;
	int32_t t14 = 29243590;

    t14 = (x57<=((x58<=x59)%x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = INT64_MIN;
	int64_t x63 = INT64_MIN;
	static volatile int8_t x64 = INT8_MIN;
	static int32_t t15 = -98027791;

    t15 = (x61<=((x62<=x63)%x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = -1;
	int64_t x67 = -24189LL;
	uint16_t x68 = 6692U;

    t16 = (x65<=((x66<=x67)%x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x70 = 7529026;
	volatile uint32_t x71 = 17U;
	uint64_t x72 = UINT64_MAX;
	int32_t t17 = -1595319;

    t17 = (x69<=((x70<=x71)%x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = INT32_MIN;
	int64_t x74 = INT64_MAX;
	int16_t x75 = INT16_MAX;
	int32_t t18 = 13056;

    t18 = (x73<=((x74<=x75)%x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = -2;
	static int64_t x78 = 998LL;
	int8_t x79 = -2;
	int16_t x80 = 2;
	int32_t t19 = -25099;

    t19 = (x77<=((x78<=x79)%x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x82 = UINT64_MAX;
	uint32_t x83 = 994514568U;
	int16_t x84 = INT16_MIN;
	int32_t t20 = -8154;

    t20 = (x81<=((x82<=x83)%x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x85 = 13U;
	int8_t x86 = -1;
	uint32_t x87 = 8338287U;
	volatile int32_t t21 = -260046464;

    t21 = (x85<=((x86<=x87)%x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = 352;
	static uint32_t x90 = UINT32_MAX;
	static int32_t x91 = INT32_MIN;
	uint8_t x92 = UINT8_MAX;
	static volatile int32_t t22 = -3;

    t22 = (x89<=((x90<=x91)%x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile int32_t x93 = INT32_MIN;
	volatile uint32_t x94 = 6414U;
	int32_t x95 = INT32_MIN;
	int64_t x96 = 8865023437860352LL;

    t23 = (x93<=((x94<=x95)%x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint16_t x97 = 1084U;
	int64_t x98 = 116LL;
	static volatile uint64_t x99 = 3504713543155LLU;
	volatile int16_t x100 = INT16_MAX;
	volatile int32_t t24 = -209130124;

    t24 = (x97<=((x98<=x99)%x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x101 = 2093889903U;
	volatile uint8_t x102 = UINT8_MAX;
	int16_t x103 = INT16_MIN;
	static uint8_t x104 = 35U;
	int32_t t25 = -722;

    t25 = (x101<=((x102<=x103)%x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = INT64_MIN;
	int32_t x106 = INT32_MIN;
	uint8_t x107 = 24U;
	int32_t t26 = 130959;

    t26 = (x105<=((x106<=x107)%x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint64_t x109 = 1030213509LLU;
	int64_t x111 = INT64_MAX;
	static int32_t x112 = INT32_MIN;
	static volatile int32_t t27 = 5;

    t27 = (x109<=((x110<=x111)%x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x114 = 261;
	static uint32_t x115 = UINT32_MAX;

    t28 = (x113<=((x114<=x115)%x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x117 = 1984815261663LLU;
	int64_t x118 = -443614843309LL;
	static int16_t x120 = -158;
	volatile int32_t t29 = 3477;

    t29 = (x117<=((x118<=x119)%x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint32_t x122 = UINT32_MAX;
	uint32_t x123 = 10176007U;
	volatile int32_t x124 = INT32_MIN;

    t30 = (x121<=((x122<=x123)%x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x125 = 69180U;
	uint32_t x126 = 4U;
	int32_t x127 = 0;
	volatile int8_t x128 = -62;
	volatile int32_t t31 = -9;

    t31 = (x125<=((x126<=x127)%x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x129 = UINT8_MAX;
	volatile uint32_t x131 = 325877U;
	int64_t x132 = INT64_MIN;
	int32_t t32 = 898725;

    t32 = (x129<=((x130<=x131)%x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x135 = -5731;
	int64_t x136 = INT64_MIN;

    t33 = (x133<=((x134<=x135)%x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x137 = 117U;
	int8_t x139 = 29;
	static int32_t t34 = -242;

    t34 = (x137<=((x138<=x139)%x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x141 = UINT64_MAX;
	int8_t x142 = 0;
	static uint64_t x144 = 1970LLU;
	volatile int32_t t35 = -78139;

    t35 = (x141<=((x142<=x143)%x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = INT64_MIN;
	uint64_t x146 = 1689793268069831LLU;
	int32_t x148 = INT32_MIN;

    t36 = (x145<=((x146<=x147)%x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x150 = INT32_MIN;
	int64_t x152 = INT64_MIN;
	volatile int32_t t37 = 803;

    t37 = (x149<=((x150<=x151)%x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x154 = 1;
	volatile int8_t x155 = -6;
	uint16_t x156 = 418U;
	int32_t t38 = -91258;

    t38 = (x153<=((x154<=x155)%x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x157 = 2LLU;
	static int32_t x158 = INT32_MIN;
	int32_t x160 = -1;
	int32_t t39 = -71686601;

    t39 = (x157<=((x158<=x159)%x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int32_t x161 = INT32_MAX;
	int16_t x164 = -1;
	volatile int32_t t40 = -770626;

    t40 = (x161<=((x162<=x163)%x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = INT16_MIN;
	int32_t x166 = 6;
	uint16_t x168 = UINT16_MAX;

    t41 = (x165<=((x166<=x167)%x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x169 = 1621;
	int64_t x170 = INT64_MAX;
	uint32_t x171 = 143552U;
	uint64_t x172 = 513258011092291LLU;
	volatile int32_t t42 = -17;

    t42 = (x169<=((x170<=x171)%x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint32_t x173 = 3199107U;
	int16_t x175 = INT16_MIN;
	int32_t x176 = INT32_MIN;
	int32_t t43 = -130;

    t43 = (x173<=((x174<=x175)%x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = -1LL;
	int8_t x180 = INT8_MIN;
	static int32_t t44 = -8699;

    t44 = (x177<=((x178<=x179)%x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint8_t x181 = 39U;
	uint64_t x182 = UINT64_MAX;
	static uint16_t x183 = 16148U;
	int8_t x184 = INT8_MIN;
	int32_t t45 = -66994778;

    t45 = (x181<=((x182<=x183)%x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x185 = INT16_MIN;
	int8_t x187 = INT8_MAX;
	int16_t x188 = INT16_MAX;
	volatile int32_t t46 = -176;

    t46 = (x185<=((x186<=x187)%x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x189 = 0;
	uint64_t x190 = 64978LLU;
	int64_t x192 = -1LL;
	volatile int32_t t47 = 190612;

    t47 = (x189<=((x190<=x191)%x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x194 = UINT16_MAX;
	volatile uint8_t x195 = 1U;
	static uint8_t x196 = 1U;
	static volatile int32_t t48 = -26;

    t48 = (x193<=((x194<=x195)%x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x197 = INT16_MIN;
	uint32_t x198 = 3U;
	int64_t x199 = INT64_MAX;
	int8_t x200 = -1;
	int32_t t49 = 4068;

    t49 = (x197<=((x198<=x199)%x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x201 = UINT16_MAX;
	int64_t x203 = -1LL;
	int8_t x204 = INT8_MAX;
	volatile int32_t t50 = -807400807;

    t50 = (x201<=((x202<=x203)%x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x205 = 1U;
	int8_t x206 = INT8_MIN;
	int64_t x207 = -1LL;

    t51 = (x205<=((x206<=x207)%x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x209 = INT32_MIN;
	int16_t x210 = 150;
	uint8_t x212 = 1U;
	int32_t t52 = 52251726;

    t52 = (x209<=((x210<=x211)%x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x213 = -1;
	int16_t x214 = INT16_MIN;
	static volatile int64_t x215 = INT64_MIN;
	int8_t x216 = INT8_MIN;
	int32_t t53 = 126;

    t53 = (x213<=((x214<=x215)%x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x217 = 2772U;
	uint64_t x218 = UINT64_MAX;
	uint8_t x220 = 2U;
	int32_t t54 = -25659;

    t54 = (x217<=((x218<=x219)%x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x221 = UINT32_MAX;
	uint16_t x222 = 0U;
	volatile int32_t t55 = 14287;

    t55 = (x221<=((x222<=x223)%x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x225 = UINT32_MAX;
	static volatile int16_t x227 = -356;
	static uint8_t x228 = UINT8_MAX;

    t56 = (x225<=((x226<=x227)%x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int32_t x229 = INT32_MIN;
	int32_t x230 = -23227826;
	uint32_t x231 = UINT32_MAX;
	volatile int32_t t57 = -42617;

    t57 = (x229<=((x230<=x231)%x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x233 = -1170;
	uint32_t x234 = 500921U;
	int32_t x235 = INT32_MIN;
	uint32_t x236 = UINT32_MAX;
	volatile int32_t t58 = -14;

    t58 = (x233<=((x234<=x235)%x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = -12131;
	int16_t x238 = 2;
	int16_t x239 = INT16_MAX;
	int8_t x240 = 8;
	volatile int32_t t59 = -19792;

    t59 = (x237<=((x238<=x239)%x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x242 = -655930;
	uint32_t x244 = 75382009U;

    t60 = (x241<=((x242<=x243)%x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x245 = 0;
	uint32_t x246 = UINT32_MAX;
	int32_t x247 = INT32_MIN;
	volatile int16_t x248 = INT16_MIN;
	int32_t t61 = 64;

    t61 = (x245<=((x246<=x247)%x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x249 = 225LLU;
	static uint32_t x250 = 372462U;
	int32_t x251 = -1;
	int64_t x252 = -1LL;
	int32_t t62 = 54543492;

    t62 = (x249<=((x250<=x251)%x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x253 = INT8_MIN;
	volatile int16_t x255 = INT16_MIN;
	volatile int32_t t63 = 53655086;

    t63 = (x253<=((x254<=x255)%x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x257 = 399U;
	static uint8_t x258 = 2U;
	int8_t x259 = INT8_MIN;
	int16_t x260 = INT16_MAX;
	volatile int32_t t64 = -810227;

    t64 = (x257<=((x258<=x259)%x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = INT32_MAX;
	int8_t x262 = INT8_MAX;
	volatile int8_t x263 = -1;
	volatile int32_t x264 = INT32_MAX;
	int32_t t65 = 646165903;

    t65 = (x261<=((x262<=x263)%x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint8_t x266 = UINT8_MAX;
	int16_t x267 = 0;
	int64_t x268 = -131068009067LL;
	volatile int32_t t66 = 25138;

    t66 = (x265<=((x266<=x267)%x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int32_t x269 = -1;
	static uint64_t x270 = UINT64_MAX;
	int8_t x272 = INT8_MAX;
	static int32_t t67 = -76205664;

    t67 = (x269<=((x270<=x271)%x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x273 = INT64_MIN;
	int16_t x274 = INT16_MIN;
	int32_t x275 = INT32_MIN;
	static int32_t t68 = -1;

    t68 = (x273<=((x274<=x275)%x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x277 = -33;
	int8_t x278 = INT8_MIN;
	static volatile uint8_t x279 = 15U;
	uint8_t x280 = UINT8_MAX;
	volatile int32_t t69 = -34972;

    t69 = (x277<=((x278<=x279)%x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = INT16_MIN;
	uint8_t x282 = 14U;
	int32_t x283 = -22955;
	static uint64_t x284 = UINT64_MAX;
	volatile int32_t t70 = 0;

    t70 = (x281<=((x282<=x283)%x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x285 = -340LL;
	int64_t x286 = INT64_MIN;
	volatile uint32_t x287 = 2151142U;
	static volatile int32_t t71 = -1552;

    t71 = (x285<=((x286<=x287)%x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x289 = INT8_MIN;
	static int32_t x291 = -140104;
	int8_t x292 = -1;
	static volatile int32_t t72 = -175;

    t72 = (x289<=((x290<=x291)%x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint64_t x293 = 379999672661672LLU;
	int64_t x294 = 3631777250730LL;
	volatile int8_t x295 = INT8_MAX;
	static volatile int32_t t73 = 0;

    t73 = (x293<=((x294<=x295)%x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x299 = -1;
	int64_t x300 = INT64_MAX;
	int32_t t74 = 346174;

    t74 = (x297<=((x298<=x299)%x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x301 = INT8_MIN;
	int32_t x302 = -1;
	int16_t x303 = -12;
	int32_t t75 = 75595862;

    t75 = (x301<=((x302<=x303)%x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile uint64_t x307 = 237451198814185LLU;
	uint8_t x308 = UINT8_MAX;
	int32_t t76 = 295004;

    t76 = (x305<=((x306<=x307)%x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x309 = INT64_MAX;
	int64_t x312 = -6LL;
	int32_t t77 = -67670427;

    t77 = (x309<=((x310<=x311)%x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int32_t x315 = -1;
	int8_t x316 = 9;
	volatile int32_t t78 = -751467191;

    t78 = (x313<=((x314<=x315)%x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x317 = INT32_MIN;
	volatile int16_t x318 = INT16_MIN;
	uint16_t x320 = 27554U;
	static int32_t t79 = -55165390;

    t79 = (x317<=((x318<=x319)%x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x321 = -1;
	static int32_t x322 = INT32_MIN;
	int64_t x323 = -66LL;
	static volatile int32_t t80 = 14148;

    t80 = (x321<=((x322<=x323)%x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x325 = INT32_MIN;
	int8_t x326 = INT8_MAX;
	int32_t x327 = INT32_MAX;
	volatile int32_t t81 = 19;

    t81 = (x325<=((x326<=x327)%x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x329 = -1;
	int32_t x330 = INT32_MIN;
	uint64_t x331 = UINT64_MAX;
	int64_t x332 = -1LL;
	volatile int32_t t82 = 215917219;

    t82 = (x329<=((x330<=x331)%x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x335 = INT16_MIN;
	volatile int16_t x336 = -14;
	volatile int32_t t83 = -82065166;

    t83 = (x333<=((x334<=x335)%x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x338 = -1LL;
	volatile uint32_t x339 = 805U;
	int64_t x340 = -70969983567010LL;
	int32_t t84 = -2937864;

    t84 = (x337<=((x338<=x339)%x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x341 = INT8_MAX;
	volatile int64_t x343 = -70473323LL;
	uint8_t x344 = 9U;
	static volatile int32_t t85 = -12;

    t85 = (x341<=((x342<=x343)%x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x345 = 1771U;
	int32_t x348 = -117067674;

    t86 = (x345<=((x346<=x347)%x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x349 = INT64_MAX;
	int64_t x350 = 8303520194LL;
	uint64_t x352 = 2496036326LLU;
	int32_t t87 = 20;

    t87 = (x349<=((x350<=x351)%x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint8_t x353 = 3U;
	static int32_t x354 = -1;
	static uint8_t x355 = 14U;
	volatile int8_t x356 = INT8_MIN;
	volatile int32_t t88 = 27912;

    t88 = (x353<=((x354<=x355)%x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x357 = -6;
	int32_t x358 = -1;
	int8_t x359 = INT8_MAX;
	int64_t x360 = -1LL;
	int32_t t89 = -121892;

    t89 = (x357<=((x358<=x359)%x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x361 = 101091LLU;
	int16_t x362 = 1;
	int16_t x363 = INT16_MAX;
	uint8_t x364 = UINT8_MAX;
	int32_t t90 = -38260;

    t90 = (x361<=((x362<=x363)%x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x365 = INT64_MIN;
	int8_t x367 = INT8_MAX;
	volatile int64_t x368 = INT64_MIN;
	static volatile int32_t t91 = -251818;

    t91 = (x365<=((x366<=x367)%x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x369 = 3U;
	int16_t x370 = INT16_MIN;
	static int64_t x372 = INT64_MIN;

    t92 = (x369<=((x370<=x371)%x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x373 = 58133LLU;
	static int8_t x374 = INT8_MIN;
	int32_t x375 = INT32_MAX;
	volatile int8_t x376 = INT8_MAX;
	int32_t t93 = 12;

    t93 = (x373<=((x374<=x375)%x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x377 = -1;
	uint16_t x378 = UINT16_MAX;
	uint16_t x379 = UINT16_MAX;
	int8_t x380 = 5;
	volatile int32_t t94 = 1;

    t94 = (x377<=((x378<=x379)%x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x381 = INT32_MIN;
	static int32_t t95 = 101463128;

    t95 = (x381<=((x382<=x383)%x384));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x385 = INT32_MAX;
	volatile int64_t x386 = -358892361779LL;
	static volatile int16_t x387 = INT16_MAX;
	static uint16_t x388 = UINT16_MAX;
	static volatile int32_t t96 = 516877;

    t96 = (x385<=((x386<=x387)%x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint64_t x389 = 34068365512104LLU;
	uint16_t x391 = UINT16_MAX;
	int64_t x392 = INT64_MIN;
	static int32_t t97 = -22717;

    t97 = (x389<=((x390<=x391)%x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x393 = INT32_MAX;
	uint32_t x394 = UINT32_MAX;
	static uint16_t x395 = 1870U;
	static volatile int64_t x396 = INT64_MIN;
	int32_t t98 = 906;

    t98 = (x393<=((x394<=x395)%x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x397 = INT32_MAX;
	static uint16_t x398 = 374U;
	static int64_t x399 = INT64_MIN;
	int16_t x400 = INT16_MIN;
	int32_t t99 = 4;

    t99 = (x397<=((x398<=x399)%x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x401 = 3582U;
	static volatile int32_t x402 = INT32_MIN;
	volatile int8_t x403 = -9;
	int16_t x404 = INT16_MAX;

    t100 = (x401<=((x402<=x403)%x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x405 = UINT16_MAX;
	static uint8_t x406 = UINT8_MAX;
	uint8_t x407 = 23U;
	int32_t t101 = 0;

    t101 = (x405<=((x406<=x407)%x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x410 = UINT16_MAX;
	volatile uint64_t x411 = UINT64_MAX;
	volatile int16_t x412 = INT16_MIN;
	int32_t t102 = 124294711;

    t102 = (x409<=((x410<=x411)%x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x414 = INT16_MIN;
	int32_t x416 = 1;
	int32_t t103 = -282;

    t103 = (x413<=((x414<=x415)%x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x417 = -48184985597398LL;
	volatile uint64_t x418 = 6LLU;
	int16_t x419 = INT16_MAX;
	volatile int32_t t104 = -50;

    t104 = (x417<=((x418<=x419)%x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint8_t x423 = 26U;
	uint32_t x424 = UINT32_MAX;
	int32_t t105 = 177732719;

    t105 = (x421<=((x422<=x423)%x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint64_t x426 = 25290149LLU;
	uint32_t x427 = UINT32_MAX;
	int16_t x428 = 15996;
	volatile int32_t t106 = 922936;

    t106 = (x425<=((x426<=x427)%x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x430 = 51680273LLU;
	static int8_t x431 = 0;

    t107 = (x429<=((x430<=x431)%x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x433 = -26725088;
	volatile uint64_t x434 = 18420184571LLU;
	int32_t x435 = INT32_MAX;
	uint16_t x436 = UINT16_MAX;
	volatile int32_t t108 = 22251;

    t108 = (x433<=((x434<=x435)%x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = -1;
	int16_t x438 = INT16_MIN;
	static volatile int8_t x439 = -51;
	uint8_t x440 = UINT8_MAX;

    t109 = (x437<=((x438<=x439)%x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x441 = INT16_MAX;
	int32_t x442 = -1;
	static uint64_t x444 = 60027LLU;
	int32_t t110 = 6;

    t110 = (x441<=((x442<=x443)%x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x445 = -8;
	int32_t x446 = INT32_MAX;
	int64_t x447 = -1LL;
	volatile int8_t x448 = -1;
	int32_t t111 = 30540;

    t111 = (x445<=((x446<=x447)%x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static int64_t x450 = -230152960LL;
	uint64_t x451 = 2667747202LLU;
	volatile int16_t x452 = 10;

    t112 = (x449<=((x450<=x451)%x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x453 = 146U;
	static uint32_t x454 = 1511U;
	uint64_t x455 = 3431398625267317LLU;
	int16_t x456 = INT16_MIN;
	volatile int32_t t113 = 1;

    t113 = (x453<=((x454<=x455)%x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x457 = INT64_MAX;
	volatile int32_t x458 = -2469;
	int8_t x459 = INT8_MIN;
	int16_t x460 = INT16_MIN;
	volatile int32_t t114 = -553670;

    t114 = (x457<=((x458<=x459)%x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x461 = INT8_MIN;
	uint32_t x462 = 10U;
	uint64_t x463 = 125921656600LLU;
	volatile int64_t x464 = -1LL;
	volatile int32_t t115 = -2411;

    t115 = (x461<=((x462<=x463)%x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = INT8_MIN;
	volatile int64_t x467 = 20488871LL;
	uint16_t x468 = 20476U;
	volatile int32_t t116 = 249865258;

    t116 = (x465<=((x466<=x467)%x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x469 = INT8_MIN;
	int32_t x470 = -107680;
	static uint32_t x472 = UINT32_MAX;
	int32_t t117 = -72328298;

    t117 = (x469<=((x470<=x471)%x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x473 = -1;
	static volatile uint8_t x474 = 21U;
	volatile int8_t x475 = INT8_MIN;
	int32_t t118 = 1;

    t118 = (x473<=((x474<=x475)%x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x477 = 574809407788LLU;
	volatile int32_t x478 = INT32_MIN;
	int16_t x479 = -8;
	volatile int32_t x480 = -1;
	int32_t t119 = -8017;

    t119 = (x477<=((x478<=x479)%x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int64_t x481 = INT64_MIN;
	volatile uint8_t x482 = 2U;
	static uint32_t x483 = 21337U;
	volatile int32_t t120 = 89637;

    t120 = (x481<=((x482<=x483)%x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint32_t x485 = UINT32_MAX;
	int8_t x486 = 2;
	int64_t x487 = 3390928697LL;
	static volatile int32_t t121 = -1249143;

    t121 = (x485<=((x486<=x487)%x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x490 = 0U;
	int32_t x491 = INT32_MIN;
	uint64_t x492 = 217630206LLU;

    t122 = (x489<=((x490<=x491)%x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = -1LL;
	int8_t x495 = -1;
	uint64_t x496 = UINT64_MAX;

    t123 = (x493<=((x494<=x495)%x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x497 = INT8_MIN;
	int64_t x499 = 232LL;
	int64_t x500 = INT64_MAX;
	int32_t t124 = 54;

    t124 = (x497<=((x498<=x499)%x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x502 = 1958820092416507618LLU;
	volatile int64_t x503 = INT64_MIN;
	int64_t x504 = -1LL;
	static volatile int32_t t125 = -631394885;

    t125 = (x501<=((x502<=x503)%x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint64_t x505 = UINT64_MAX;
	uint64_t x507 = 51LLU;
	volatile uint16_t x508 = 3774U;
	volatile int32_t t126 = -42196;

    t126 = (x505<=((x506<=x507)%x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x509 = 0U;
	uint8_t x510 = 4U;
	uint16_t x511 = UINT16_MAX;
	int64_t x512 = 193690622601654752LL;
	static int32_t t127 = -71606;

    t127 = (x509<=((x510<=x511)%x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x513 = INT16_MIN;
	uint32_t x514 = UINT32_MAX;
	int64_t x515 = -1LL;
	uint32_t x516 = UINT32_MAX;
	volatile int32_t t128 = -172647763;

    t128 = (x513<=((x514<=x515)%x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x517 = 37;
	static volatile uint32_t x518 = 309313484U;
	static int32_t x519 = INT32_MIN;
	volatile uint16_t x520 = 44U;
	volatile int32_t t129 = 840313;

    t129 = (x517<=((x518<=x519)%x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x521 = -1LL;
	int64_t x522 = INT64_MIN;
	volatile uint32_t x523 = 61U;
	int32_t t130 = 914673;

    t130 = (x521<=((x522<=x523)%x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t x526 = INT32_MAX;
	int8_t x527 = -7;
	volatile int8_t x528 = INT8_MIN;
	int32_t t131 = -776309430;

    t131 = (x525<=((x526<=x527)%x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int32_t x529 = INT32_MAX;
	int8_t x530 = -1;
	int16_t x531 = INT16_MIN;
	int16_t x532 = -254;

    t132 = (x529<=((x530<=x531)%x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint16_t x534 = 1691U;
	int16_t x535 = INT16_MIN;
	int32_t x536 = 63;
	static volatile int32_t t133 = -477;

    t133 = (x533<=((x534<=x535)%x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x538 = -382386234143925LL;
	int32_t t134 = 1;

    t134 = (x537<=((x538<=x539)%x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x541 = 4;
	int16_t x542 = -13034;
	static uint64_t x543 = UINT64_MAX;
	volatile int32_t t135 = 781906821;

    t135 = (x541<=((x542<=x543)%x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile int16_t x545 = -1;
	uint64_t x546 = 1LLU;
	int8_t x547 = INT8_MAX;
	int32_t x548 = INT32_MIN;

    t136 = (x545<=((x546<=x547)%x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x549 = INT64_MIN;
	int16_t x550 = -15;
	volatile uint8_t x552 = 9U;
	int32_t t137 = 15427406;

    t137 = (x549<=((x550<=x551)%x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x553 = 11;
	int32_t x554 = INT32_MIN;
	int16_t x555 = 113;
	volatile uint64_t x556 = 229LLU;
	volatile int32_t t138 = 380;

    t138 = (x553<=((x554<=x555)%x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x557 = INT64_MAX;
	volatile uint32_t x558 = 1508U;
	int32_t x560 = INT32_MIN;

    t139 = (x557<=((x558<=x559)%x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x561 = 6;
	volatile int32_t x562 = INT32_MIN;
	int8_t x563 = 10;
	uint8_t x564 = 67U;
	volatile int32_t t140 = -2647;

    t140 = (x561<=((x562<=x563)%x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = INT32_MIN;
	int8_t x567 = INT8_MIN;

    t141 = (x565<=((x566<=x567)%x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint8_t x569 = 0U;
	volatile int32_t t142 = -26711148;

    t142 = (x569<=((x570<=x571)%x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint16_t x573 = 125U;
	int16_t x574 = INT16_MAX;
	volatile int16_t x576 = INT16_MIN;
	int32_t t143 = -113;

    t143 = (x573<=((x574<=x575)%x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x577 = UINT64_MAX;
	int8_t x578 = -28;
	int8_t x580 = INT8_MIN;
	int32_t t144 = 1359;

    t144 = (x577<=((x578<=x579)%x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x581 = 16701U;
	int32_t x582 = 1;
	int32_t t145 = -21275070;

    t145 = (x581<=((x582<=x583)%x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x585 = INT16_MIN;
	static uint8_t x586 = 29U;
	volatile int32_t t146 = 188989;

    t146 = (x585<=((x586<=x587)%x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x589 = INT64_MIN;
	int64_t x590 = INT64_MAX;
	static int32_t x592 = INT32_MIN;
	int32_t t147 = -627664;

    t147 = (x589<=((x590<=x591)%x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint32_t x593 = UINT32_MAX;
	int64_t x594 = 251545768237035LL;
	volatile int16_t x595 = -9852;
	volatile int32_t t148 = -433940;

    t148 = (x593<=((x594<=x595)%x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint32_t x597 = UINT32_MAX;
	int64_t x600 = -1LL;
	volatile int32_t t149 = -441382170;

    t149 = (x597<=((x598<=x599)%x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x602 = INT8_MIN;
	uint8_t x603 = 56U;

    t150 = (x601<=((x602<=x603)%x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x605 = INT8_MIN;
	int64_t x606 = -815989185529580749LL;
	int16_t x607 = -1;

    t151 = (x605<=((x606<=x607)%x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x609 = INT16_MIN;
	int16_t x610 = -1;
	volatile int32_t x611 = -1;
	static int32_t x612 = INT32_MIN;
	int32_t t152 = 7870;

    t152 = (x609<=((x610<=x611)%x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x613 = -1;
	static uint32_t x614 = UINT32_MAX;
	static int64_t x615 = INT64_MIN;

    t153 = (x613<=((x614<=x615)%x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x618 = INT64_MIN;
	int8_t x619 = 0;
	static int32_t x620 = INT32_MIN;

    t154 = (x617<=((x618<=x619)%x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x621 = INT8_MAX;
	int8_t x622 = -1;

    t155 = (x621<=((x622<=x623)%x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x625 = INT8_MIN;
	static uint8_t x626 = UINT8_MAX;
	uint16_t x627 = UINT16_MAX;
	int64_t x628 = -29740LL;
	static volatile int32_t t156 = 3;

    t156 = (x625<=((x626<=x627)%x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x630 = 10513486108655LL;
	static int32_t t157 = -153673629;

    t157 = (x629<=((x630<=x631)%x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x634 = UINT32_MAX;
	volatile uint32_t x635 = 30U;
	int16_t x636 = -14;
	volatile int32_t t158 = -238961;

    t158 = (x633<=((x634<=x635)%x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x637 = -1;
	volatile int64_t x639 = 1564946570813LL;
	int64_t x640 = -1LL;
	int32_t t159 = 146;

    t159 = (x637<=((x638<=x639)%x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x641 = INT32_MIN;
	int16_t x642 = -1;
	uint16_t x643 = UINT16_MAX;
	uint8_t x644 = UINT8_MAX;

    t160 = (x641<=((x642<=x643)%x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x645 = INT16_MIN;
	static int8_t x646 = -1;
	int32_t x647 = INT32_MIN;
	volatile uint16_t x648 = 71U;
	volatile int32_t t161 = 70990654;

    t161 = (x645<=((x646<=x647)%x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x649 = INT32_MIN;
	uint32_t x650 = UINT32_MAX;
	static uint16_t x651 = UINT16_MAX;
	int64_t x652 = -1LL;

    t162 = (x649<=((x650<=x651)%x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint16_t x653 = 36U;
	uint32_t x654 = 2U;
	int8_t x655 = INT8_MIN;
	int32_t x656 = 94633;
	volatile int32_t t163 = 54965160;

    t163 = (x653<=((x654<=x655)%x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x657 = 3U;
	int8_t x658 = INT8_MAX;
	int16_t x659 = 18;
	int32_t t164 = 3;

    t164 = (x657<=((x658<=x659)%x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x661 = INT32_MIN;
	uint16_t x662 = 1052U;
	volatile int8_t x663 = -1;
	int32_t t165 = -1;

    t165 = (x661<=((x662<=x663)%x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x666 = -1LL;
	int16_t x667 = INT16_MAX;
	int16_t x668 = INT16_MIN;
	int32_t t166 = 64629933;

    t166 = (x665<=((x666<=x667)%x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x670 = INT32_MIN;
	volatile uint16_t x671 = 6024U;
	uint64_t x672 = 124178586304461LLU;
	int32_t t167 = 1987377;

    t167 = (x669<=((x670<=x671)%x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int64_t x677 = 10452402393955225LL;
	int8_t x678 = -1;
	static uint8_t x679 = 26U;
	uint16_t x680 = UINT16_MAX;
	int32_t t168 = -31;

    t168 = (x677<=((x678<=x679)%x680));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x681 = UINT32_MAX;
	static uint16_t x682 = 16U;
	volatile uint32_t x683 = 241501243U;
	uint16_t x684 = 2473U;

    t169 = (x681<=((x682<=x683)%x684));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x685 = INT64_MAX;
	int32_t x686 = INT32_MIN;
	int32_t x687 = INT32_MAX;
	int32_t t170 = -704012;

    t170 = (x685<=((x686<=x687)%x688));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x689 = -258290082;
	volatile int32_t x690 = 3920827;
	int32_t x692 = INT32_MIN;
	int32_t t171 = -21307;

    t171 = (x689<=((x690<=x691)%x692));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x693 = INT8_MAX;
	uint32_t x694 = 17U;
	int64_t x696 = -118LL;
	int32_t t172 = 0;

    t172 = (x693<=((x694<=x695)%x696));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x697 = 38;
	uint16_t x699 = 1U;
	uint8_t x700 = UINT8_MAX;
	static int32_t t173 = -7701;

    t173 = (x697<=((x698<=x699)%x700));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x701 = -238;
	uint16_t x703 = 225U;
	int32_t x704 = INT32_MIN;
	volatile int32_t t174 = -129739;

    t174 = (x701<=((x702<=x703)%x704));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile int8_t x705 = INT8_MAX;
	static int8_t x706 = INT8_MAX;
	uint16_t x707 = UINT16_MAX;
	int8_t x708 = 1;
	int32_t t175 = -338752;

    t175 = (x705<=((x706<=x707)%x708));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x710 = INT64_MIN;
	uint16_t x711 = UINT16_MAX;
	int64_t x712 = -1LL;
	volatile int32_t t176 = 812300601;

    t176 = (x709<=((x710<=x711)%x712));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x713 = INT8_MAX;
	int8_t x714 = -1;
	volatile int32_t t177 = 4429514;

    t177 = (x713<=((x714<=x715)%x716));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x717 = INT32_MIN;
	int32_t x718 = -1;
	int8_t x719 = -3;
	volatile uint32_t x720 = UINT32_MAX;

    t178 = (x717<=((x718<=x719)%x720));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x721 = UINT64_MAX;
	int16_t x722 = INT16_MAX;
	uint32_t x723 = 13301U;
	int8_t x724 = INT8_MIN;
	volatile int32_t t179 = 197698840;

    t179 = (x721<=((x722<=x723)%x724));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x726 = 1;
	int32_t x727 = -1;
	uint16_t x728 = UINT16_MAX;
	int32_t t180 = 286;

    t180 = (x725<=((x726<=x727)%x728));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x730 = INT16_MIN;
	uint8_t x731 = UINT8_MAX;
	int8_t x732 = INT8_MIN;
	static volatile int32_t t181 = 11;

    t181 = (x729<=((x730<=x731)%x732));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x734 = INT8_MIN;
	int32_t x735 = -1;
	static uint8_t x736 = 1U;
	int32_t t182 = -3862150;

    t182 = (x733<=((x734<=x735)%x736));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x739 = 6045U;
	int32_t t183 = 538397231;

    t183 = (x737<=((x738<=x739)%x740));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x741 = INT8_MIN;
	uint8_t x742 = UINT8_MAX;
	int16_t x743 = INT16_MIN;
	int32_t x744 = -281750;
	static int32_t t184 = 15102;

    t184 = (x741<=((x742<=x743)%x744));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x745 = -1LL;
	uint64_t x746 = UINT64_MAX;
	volatile int16_t x747 = INT16_MAX;
	volatile int32_t t185 = 5614;

    t185 = (x745<=((x746<=x747)%x748));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x749 = INT16_MIN;
	int32_t x750 = 8144;
	int16_t x751 = INT16_MAX;
	volatile int32_t t186 = -1;

    t186 = (x749<=((x750<=x751)%x752));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x753 = 5495940780726533LL;
	int16_t x755 = -1;
	int32_t t187 = 979862;

    t187 = (x753<=((x754<=x755)%x756));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x757 = 2290990926903199LL;
	volatile int64_t x759 = INT64_MIN;
	int64_t x760 = 2893428LL;
	static volatile int32_t t188 = -27341031;

    t188 = (x757<=((x758<=x759)%x760));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x761 = 815LLU;
	int16_t x763 = -6521;
	int64_t x764 = INT64_MIN;
	volatile int32_t t189 = -3811143;

    t189 = (x761<=((x762<=x763)%x764));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x765 = INT64_MIN;
	static volatile int64_t x766 = INT64_MIN;
	int8_t x768 = INT8_MIN;
	volatile int32_t t190 = 68726;

    t190 = (x765<=((x766<=x767)%x768));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x769 = -6000791;
	uint8_t x771 = UINT8_MAX;
	volatile int64_t x772 = -179183337LL;
	volatile int32_t t191 = -684049139;

    t191 = (x769<=((x770<=x771)%x772));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static int64_t x775 = -1LL;
	static int8_t x776 = INT8_MAX;
	static volatile int32_t t192 = 973;

    t192 = (x773<=((x774<=x775)%x776));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x777 = INT64_MIN;
	volatile uint8_t x778 = 0U;
	int64_t x779 = INT64_MIN;
	volatile int32_t t193 = 291;

    t193 = (x777<=((x778<=x779)%x780));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x781 = INT32_MAX;
	int32_t x782 = -1;
	volatile int32_t x783 = INT32_MAX;
	int8_t x784 = INT8_MIN;
	int32_t t194 = 46910;

    t194 = (x781<=((x782<=x783)%x784));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x785 = INT64_MIN;
	int64_t x786 = 3009865763595511603LL;
	int32_t x787 = INT32_MAX;
	volatile int16_t x788 = 30;
	volatile int32_t t195 = -29279;

    t195 = (x785<=((x786<=x787)%x788));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int32_t x789 = INT32_MIN;
	volatile int16_t x790 = 1;
	int8_t x792 = INT8_MIN;
	static volatile int32_t t196 = 373;

    t196 = (x789<=((x790<=x791)%x792));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x793 = 11977230057652LLU;
	int8_t x794 = INT8_MIN;
	uint32_t x795 = 118533U;
	uint16_t x796 = 52U;
	int32_t t197 = -2353;

    t197 = (x793<=((x794<=x795)%x796));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x801 = -1;
	uint16_t x802 = 0U;
	int64_t x804 = INT64_MIN;
	volatile int32_t t198 = -1;

    t198 = (x801<=((x802<=x803)%x804));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x805 = UINT16_MAX;
	int16_t x806 = INT16_MAX;
	static int16_t x807 = INT16_MIN;
	int32_t x808 = INT32_MIN;
	int32_t t199 = -1;

    t199 = (x805<=((x806<=x807)%x808));

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

