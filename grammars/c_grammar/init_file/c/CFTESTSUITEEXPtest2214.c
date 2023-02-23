
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

uint8_t x4 = UINT8_MAX;
uint32_t x9 = 87U;
int8_t x16 = INT8_MIN;
int64_t x19 = INT64_MIN;
int16_t x27 = INT16_MAX;
uint64_t t5 = 11LLU;
static int8_t x36 = INT8_MIN;
int64_t x43 = INT64_MIN;
int8_t x46 = 0;
uint16_t x48 = UINT16_MAX;
int32_t x52 = 1;
uint8_t x63 = 1U;
int32_t x64 = INT32_MIN;
static volatile uint16_t x68 = UINT16_MAX;
uint64_t t14 = 385477736434LLU;
int16_t x81 = INT16_MIN;
int16_t x82 = INT16_MIN;
static volatile int64_t x91 = INT64_MAX;
int16_t x94 = 16;
static volatile uint64_t t19 = 5548LLU;
static volatile uint32_t x97 = UINT32_MAX;
volatile int16_t x100 = INT16_MIN;
int16_t x101 = -1;
static uint16_t x102 = 9838U;
int64_t x103 = 54139249769673LL;
int32_t x111 = -115;
static uint32_t x114 = 14509U;
static int64_t x115 = -1LL;
uint64_t x116 = 2131678853LLU;
int32_t x123 = INT32_MIN;
volatile uint8_t x124 = 1U;
int64_t x125 = -1LL;
int32_t x126 = INT32_MAX;
volatile int64_t t27 = -759943LL;
int8_t x129 = INT8_MIN;
int64_t x130 = -1LL;
volatile uint8_t x138 = 65U;
int64_t t31 = 2914615168611894779LL;
int16_t x146 = INT16_MIN;
int16_t x154 = -15;
int64_t t34 = -199324LL;
volatile int64_t x161 = INT64_MIN;
int16_t x162 = -53;
static volatile uint64_t x163 = 11399012800940215LLU;
static int16_t x167 = INT16_MIN;
volatile uint64_t t37 = 22760820199LLU;
uint64_t t38 = 21248379LLU;
int8_t x174 = INT8_MIN;
uint16_t x177 = 24546U;
volatile int64_t t40 = 36353788LL;
uint64_t x185 = UINT64_MAX;
volatile uint64_t t42 = UINT64_MAX;
static volatile int64_t x195 = INT64_MAX;
static int16_t x200 = -1;
int32_t x205 = 656662929;
static uint32_t x213 = 93066U;
uint32_t t49 = 0U;
static int32_t x217 = INT32_MIN;
int64_t x218 = -90106079001LL;
uint64_t x219 = UINT64_MAX;
int16_t x221 = 658;
uint8_t x224 = 51U;
volatile uint64_t x228 = 558966165634LLU;
uint32_t x236 = 428514U;
static int64_t t54 = 808LL;
volatile int64_t x239 = -1LL;
int32_t x241 = INT32_MAX;
static volatile int32_t x244 = INT32_MIN;
volatile uint64_t x245 = UINT64_MAX;
uint16_t x248 = 4634U;
uint16_t x251 = 6U;
static int32_t x259 = -189;
volatile uint32_t x272 = 60510U;
static int32_t x276 = INT32_MIN;
static int8_t x283 = 0;
volatile uint64_t t66 = 3645588919154551LLU;
int16_t x291 = INT16_MAX;
uint64_t x301 = 1313391189LLU;
int16_t x307 = -1;
volatile int32_t t69 = INT32_MIN;
volatile int64_t t70 = 1455762367107LL;
int16_t x313 = INT16_MIN;
uint64_t x316 = 4451498891586510LLU;
uint8_t x322 = 24U;
uint64_t x323 = 3669439776275LLU;
int16_t x332 = -2601;
volatile int32_t t74 = 317820;
static uint64_t x333 = UINT64_MAX;
volatile uint64_t x336 = UINT64_MAX;
volatile uint64_t t75 = 18543534LLU;
uint16_t x340 = 33U;
static volatile uint8_t x344 = 23U;
volatile int64_t x353 = -549310063LL;
volatile int64_t x356 = -1LL;
uint64_t t80 = 215LLU;
volatile int8_t x371 = INT8_MIN;
int64_t x372 = INT64_MIN;
int8_t x374 = 42;
int8_t x380 = -1;
volatile int16_t x383 = INT16_MAX;
volatile int64_t x384 = INT64_MIN;
uint32_t t88 = 9U;
static uint16_t x391 = UINT16_MAX;
uint64_t x396 = UINT64_MAX;
int8_t x400 = INT8_MAX;
volatile uint32_t t91 = UINT32_MAX;
volatile int8_t x412 = -1;
volatile int32_t t92 = -30;
static uint64_t x415 = 23448936637LLU;
static volatile int8_t x419 = -1;
volatile uint8_t x421 = UINT8_MAX;
volatile int16_t x424 = INT16_MAX;
int32_t x431 = -1;
int32_t t98 = -83539;
static volatile int64_t x439 = INT64_MIN;
int32_t x445 = INT32_MIN;
static int8_t x453 = INT8_MAX;
volatile uint32_t x454 = 6935510U;
uint64_t x455 = UINT64_MAX;
int64_t x458 = -1LL;
volatile int16_t x460 = -1;
uint16_t x462 = UINT16_MAX;
int16_t x468 = INT16_MIN;
int32_t x483 = 0;
static volatile uint64_t t110 = 11883083LLU;
uint64_t x495 = UINT64_MAX;
volatile uint32_t t112 = 967U;
volatile int64_t x502 = INT64_MIN;
int32_t x503 = INT32_MIN;
int32_t x508 = -1;
int64_t t118 = 54038506455LL;
uint8_t x536 = 73U;
uint32_t x537 = UINT32_MAX;
int8_t x551 = INT8_MIN;
int32_t x553 = -2116;
volatile int8_t x556 = INT8_MIN;
int16_t x562 = -6;
static int32_t x566 = -244405376;
int32_t x567 = INT32_MAX;
uint32_t t128 = 13854861U;
volatile int32_t x577 = INT32_MAX;
volatile int64_t t132 = -17553683587228058LL;
volatile int8_t x590 = INT8_MIN;
uint8_t x593 = 54U;
int32_t x596 = INT32_MIN;
int64_t t137 = 2161124177243LL;
volatile int64_t x605 = -1LL;
int64_t x606 = -1392975385145126LL;
int16_t x612 = INT16_MIN;
static int64_t t139 = 3392833961LL;
static volatile uint8_t x614 = UINT8_MAX;
int32_t x617 = 54634880;
static volatile uint64_t x618 = UINT64_MAX;
volatile int32_t x619 = -19124873;
static int16_t x623 = -1;
int64_t t148 = 173674120979909043LL;
volatile uint64_t t149 = 9067359LLU;
uint32_t t150 = 581U;
volatile int16_t x657 = -1;
int8_t x660 = 1;
int64_t x661 = -390LL;
static int64_t x675 = INT64_MIN;
static int16_t x679 = INT16_MIN;
int16_t x687 = -1;
static uint32_t t159 = 468898U;
int32_t x695 = INT32_MAX;
int64_t x699 = INT64_MAX;
uint16_t x700 = 394U;
volatile int8_t x705 = INT8_MAX;
int8_t x706 = -1;
volatile int8_t x707 = INT8_MAX;
static uint16_t x711 = 7989U;
static uint32_t x714 = 37151751U;
uint16_t x717 = 12U;
int32_t x719 = INT32_MIN;
int16_t x723 = -700;
uint32_t x738 = 28U;
volatile int64_t x739 = -1LL;
int32_t x743 = INT32_MIN;
volatile uint16_t x757 = 775U;
static uint8_t x769 = 1U;
volatile int64_t x779 = -2121636762LL;
int16_t x780 = INT16_MAX;
uint64_t x782 = 14479232985481811LLU;
volatile uint64_t t181 = UINT64_MAX;
volatile uint64_t x786 = 440341303980623852LLU;
int8_t x789 = 1;
int16_t x792 = INT16_MAX;
volatile int32_t t183 = -2644939;
int32_t x797 = 262419;
int32_t x799 = INT32_MAX;
uint32_t t185 = 31U;
volatile uint32_t x805 = 206404U;
int8_t x808 = INT8_MIN;
uint64_t t188 = 29521319557823LLU;
static int8_t x815 = -1;
static uint64_t x816 = UINT64_MAX;
int32_t x819 = INT32_MIN;
volatile int16_t x833 = INT16_MIN;
static uint16_t x838 = 62U;
volatile int32_t x842 = -1;
uint32_t x847 = 146275137U;
int64_t x848 = -1LL;
volatile int64_t t197 = 30552790495118521LL;
static int16_t x859 = -1;


void f0(void) {
    	static uint64_t x1 = 3516434388LLU;
	static int64_t x2 = INT64_MIN;
	volatile int64_t x3 = 1747997LL;
	uint64_t t0 = 32119134721LLU;

    t0 = (x1-((x2&x3)%x4));

    if (t0 != 3516434388LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x5 = -1;
	volatile uint64_t x6 = 197LLU;
	int8_t x7 = -1;
	int64_t x8 = -1LL;
	volatile uint64_t t1 = 62265210607LLU;

    t1 = (x5-((x6&x7)%x8));

    if (t1 != 18446744073709551418LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x10 = 4U;
	int32_t x11 = 45867;
	int8_t x12 = INT8_MIN;
	volatile uint32_t t2 = 2U;

    t2 = (x9-((x10&x11)%x12));

    if (t2 != 87U) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = 88502734LLU;
	uint16_t x14 = UINT16_MAX;
	static int64_t x15 = -2317197707909LL;
	volatile uint64_t t3 = 11023LLU;

    t3 = (x13-((x14&x15)%x16));

    if (t3 != 88502611LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = 94299LLU;
	int64_t x18 = 584505648959572LL;
	int16_t x20 = -127;
	uint64_t t4 = 9018181LLU;

    t4 = (x17-((x18&x19)%x20));

    if (t4 != 94299LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x25 = 6;
	int16_t x26 = 10312;
	uint64_t x28 = 3649141455707765LLU;

    t5 = (x25-((x26&x27)%x28));

    if (t5 != 18446744073709541310LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint16_t x29 = 111U;
	int64_t x30 = INT64_MIN;
	int32_t x31 = INT32_MIN;
	volatile int32_t x32 = 96993;
	volatile int64_t t6 = 812024LL;

    t6 = (x29-((x30&x31)%x32));

    if (t6 != 9011LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x33 = 100543LL;
	int16_t x34 = -1;
	int8_t x35 = INT8_MIN;
	int64_t t7 = 3228739749LL;

    t7 = (x33-((x34&x35)%x36));

    if (t7 != 100543LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x37 = INT8_MAX;
	volatile int16_t x38 = INT16_MAX;
	uint16_t x39 = 1U;
	uint16_t x40 = UINT16_MAX;
	int32_t t8 = 20;

    t8 = (x37-((x38&x39)%x40));

    if (t8 != 126) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x41 = 1;
	uint32_t x42 = 4U;
	static int16_t x44 = INT16_MIN;
	volatile int64_t t9 = -90437610LL;

    t9 = (x41-((x42&x43)%x44));

    if (t9 != 1LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x45 = UINT32_MAX;
	int8_t x47 = -39;
	volatile uint32_t t10 = UINT32_MAX;

    t10 = (x45-((x46&x47)%x48));

    if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x49 = 123061;
	uint64_t x50 = 1617332826854814LLU;
	int32_t x51 = INT32_MAX;
	uint64_t t11 = 11LLU;

    t11 = (x49-((x50&x51)%x52));

    if (t11 != 123061LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int8_t x57 = INT8_MIN;
	int32_t x58 = INT32_MIN;
	int16_t x59 = INT16_MIN;
	int32_t x60 = -1;
	int32_t t12 = 143069359;

    t12 = (x57-((x58&x59)%x60));

    if (t12 != -128) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x61 = 402393162875172227LLU;
	uint8_t x62 = UINT8_MAX;
	volatile uint64_t t13 = 838555869015LLU;

    t13 = (x61-((x62&x63)%x64));

    if (t13 != 402393162875172226LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x65 = INT32_MIN;
	int64_t x66 = -1LL;
	uint64_t x67 = UINT64_MAX;

    t14 = (x65-((x66&x67)%x68));

    if (t14 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x73 = INT32_MAX;
	int64_t x74 = INT64_MIN;
	int8_t x75 = INT8_MAX;
	uint16_t x76 = 904U;
	int64_t t15 = 6180LL;

    t15 = (x73-((x74&x75)%x76));

    if (t15 != 2147483647LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x77 = UINT64_MAX;
	volatile uint64_t x78 = UINT64_MAX;
	static volatile uint64_t x79 = 9285158477563591LLU;
	int32_t x80 = INT32_MAX;
	uint64_t t16 = 3784812743998LLU;

    t16 = (x77-((x78&x79)%x80));

    if (t16 != 18446744071880900510LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x83 = 167429U;
	int16_t x84 = -1;
	static uint32_t t17 = 1259199156U;

    t17 = (x81-((x82&x83)%x84));

    if (t17 != 4294770688U) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x89 = INT32_MIN;
	int8_t x90 = INT8_MIN;
	uint64_t x92 = 48441149LLU;
	volatile uint64_t t18 = 573457859632631826LLU;

    t18 = (x89-((x90&x91)%x92));

    if (t18 != 18446744071543383103LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x93 = 2;
	uint64_t x95 = 1310LLU;
	int32_t x96 = INT32_MIN;

    t19 = (x93-((x94&x95)%x96));

    if (t19 != 18446744073709551602LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x98 = INT64_MIN;
	static int64_t x99 = 77162185898LL;
	int64_t t20 = 1143946388639LL;

    t20 = (x97-((x98&x99)%x100));

    if (t20 != 4294967295LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x104 = UINT16_MAX;
	volatile int64_t t21 = -19504897405592997LL;

    t21 = (x101-((x102&x103)%x104));

    if (t21 != -9289LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x105 = 3U;
	uint64_t x106 = 443728113031510LLU;
	int8_t x107 = INT8_MAX;
	int64_t x108 = INT64_MIN;
	static uint64_t t22 = 107835068082874LLU;

    t22 = (x105-((x106&x107)%x108));

    if (t22 != 18446744073709551533LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint64_t x109 = UINT64_MAX;
	uint64_t x110 = 538462338380360080LLU;
	uint64_t x112 = UINT64_MAX;
	uint64_t t23 = 1938970154767LLU;

    t23 = (x109-((x110&x111)%x112));

    if (t23 != 17908281735329191551LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x113 = UINT64_MAX;
	volatile uint64_t t24 = 270914914754466518LLU;

    t24 = (x113-((x114&x115)%x116));

    if (t24 != 18446744073709537106LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x117 = UINT64_MAX;
	uint8_t x118 = 9U;
	int8_t x119 = -1;
	static int64_t x120 = INT64_MIN;
	static volatile uint64_t t25 = 682959197103LLU;

    t25 = (x117-((x118&x119)%x120));

    if (t25 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x121 = 7742LLU;
	volatile uint8_t x122 = 68U;
	static volatile uint64_t t26 = 502610310LLU;

    t26 = (x121-((x122&x123)%x124));

    if (t26 != 7742LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x127 = UINT8_MAX;
	static int64_t x128 = INT64_MIN;

    t27 = (x125-((x126&x127)%x128));

    if (t27 != -256LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x131 = 281LL;
	int16_t x132 = -1;
	int64_t t28 = -272663476929628783LL;

    t28 = (x129-((x130&x131)%x132));

    if (t28 != -128LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x133 = 172U;
	int64_t x134 = INT64_MIN;
	int16_t x135 = INT16_MIN;
	static uint16_t x136 = 48U;
	volatile int64_t t29 = -8063592LL;

    t29 = (x133-((x134&x135)%x136));

    if (t29 != 204LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint8_t x137 = 94U;
	int8_t x139 = -1;
	static int64_t x140 = 30LL;
	int64_t t30 = -21357286300967LL;

    t30 = (x137-((x138&x139)%x140));

    if (t30 != 89LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x141 = 3U;
	int64_t x142 = -1LL;
	int16_t x143 = -1;
	uint32_t x144 = UINT32_MAX;

    t31 = (x141-((x142&x143)%x144));

    if (t31 != 4LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x145 = 1255266U;
	int8_t x147 = -1;
	int8_t x148 = INT8_MAX;
	uint32_t t32 = 1476U;

    t32 = (x145-((x146&x147)%x148));

    if (t32 != 1255268U) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x149 = INT8_MAX;
	volatile int32_t x150 = 2;
	int32_t x151 = 86;
	uint8_t x152 = UINT8_MAX;
	int32_t t33 = 17181;

    t33 = (x149-((x150&x151)%x152));

    if (t33 != 125) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int64_t x153 = 80049598398276LL;
	volatile int8_t x155 = INT8_MAX;
	int64_t x156 = INT64_MIN;

    t34 = (x153-((x154&x155)%x156));

    if (t34 != 80049598398163LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint16_t x157 = 19U;
	volatile uint64_t x158 = UINT64_MAX;
	static int64_t x159 = INT64_MIN;
	int64_t x160 = 51104541766637895LL;
	volatile uint64_t t35 = 875LLU;

    t35 = (x157-((x158&x159)%x160));

    if (t35 != 18422189554849596927LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x164 = -46LL;
	volatile uint64_t t36 = 1LLU;

    t36 = (x161-((x162&x163)%x164));

    if (t36 != 9211973024053835645LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x165 = 5414591896LLU;
	uint64_t x166 = UINT64_MAX;
	int64_t x168 = INT64_MIN;

    t37 = (x165-((x166&x167)%x168));

    if (t37 != 9223372042269400472LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint64_t x169 = UINT64_MAX;
	uint64_t x170 = UINT64_MAX;
	int8_t x171 = -1;
	static int64_t x172 = INT64_MIN;

    t38 = (x169-((x170&x171)%x172));

    if (t38 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x173 = INT16_MAX;
	int64_t x175 = -1LL;
	int32_t x176 = INT32_MIN;
	static int64_t t39 = 524LL;

    t39 = (x173-((x174&x175)%x176));

    if (t39 != 32895LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint8_t x178 = UINT8_MAX;
	volatile int16_t x179 = INT16_MIN;
	volatile int64_t x180 = INT64_MIN;

    t40 = (x177-((x178&x179)%x180));

    if (t40 != 24546LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x181 = 7140837405LLU;
	uint16_t x182 = 5308U;
	volatile int16_t x183 = INT16_MIN;
	int16_t x184 = INT16_MAX;
	volatile uint64_t t41 = 6526145087230LLU;

    t41 = (x181-((x182&x183)%x184));

    if (t41 != 7140837405LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x186 = 0;
	int16_t x187 = -870;
	volatile int8_t x188 = INT8_MIN;

    t42 = (x185-((x186&x187)%x188));

    if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x189 = -1;
	int64_t x190 = 1LL;
	volatile uint32_t x191 = UINT32_MAX;
	static int8_t x192 = -1;
	int64_t t43 = 2162LL;

    t43 = (x189-((x190&x191)%x192));

    if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x193 = 33663255;
	int32_t x194 = -1;
	volatile uint8_t x196 = UINT8_MAX;
	static volatile int64_t t44 = 153738469733LL;

    t44 = (x193-((x194&x195)%x196));

    if (t44 != 33663128LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x197 = -1;
	int16_t x198 = INT16_MAX;
	int64_t x199 = -20269851374869LL;
	volatile int64_t t45 = -135408691302131276LL;

    t45 = (x197-((x198&x199)%x200));

    if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x201 = 1384032;
	static int8_t x202 = INT8_MIN;
	int32_t x203 = INT32_MAX;
	uint64_t x204 = 755225750277565LLU;
	uint64_t t46 = 11398502415484431LLU;

    t46 = (x201-((x202&x203)%x204));

    if (t46 != 18446744071563452128LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x206 = INT16_MIN;
	static uint64_t x207 = 5983849967000272LLU;
	volatile int64_t x208 = INT64_MAX;
	volatile uint64_t t47 = 183514951LLU;

    t47 = (x205-((x206&x207)%x208));

    if (t47 != 18440760224399221137LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x209 = -1;
	int64_t x210 = INT64_MIN;
	int16_t x211 = 3570;
	int32_t x212 = -1;
	static volatile int64_t t48 = 893946LL;

    t48 = (x209-((x210&x211)%x212));

    if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x214 = INT8_MIN;
	int8_t x215 = 1;
	int32_t x216 = 55883;

    t49 = (x213-((x214&x215)%x216));

    if (t49 != 93066U) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x220 = UINT16_MAX;
	uint64_t t50 = 389550LLU;

    t50 = (x217-((x218&x219)%x220));

    if (t50 != 18446744071562043883LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x222 = INT64_MIN;
	int8_t x223 = INT8_MAX;
	volatile int64_t t51 = 949558LL;

    t51 = (x221-((x222&x223)%x224));

    if (t51 != 658LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x225 = -1;
	uint8_t x226 = UINT8_MAX;
	static uint64_t x227 = 229057436LLU;
	static volatile uint64_t t52 = 102406167LLU;

    t52 = (x225-((x226&x227)%x228));

    if (t52 != 18446744073709551459LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x229 = -963;
	int8_t x230 = -1;
	int64_t x231 = 535LL;
	int32_t x232 = -3004;
	int64_t t53 = 504766209LL;

    t53 = (x229-((x230&x231)%x232));

    if (t53 != -1498LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x233 = 36LL;
	int16_t x234 = 391;
	int32_t x235 = INT32_MIN;

    t54 = (x233-((x234&x235)%x236));

    if (t54 != 36LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x237 = -1LL;
	int64_t x238 = INT64_MAX;
	uint16_t x240 = 16U;
	static volatile int64_t t55 = 2026LL;

    t55 = (x237-((x238&x239)%x240));

    if (t55 != -16LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x242 = 61U;
	volatile uint16_t x243 = 9677U;
	volatile int32_t t56 = 93690128;

    t56 = (x241-((x242&x243)%x244));

    if (t56 != 2147483634) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x246 = INT64_MIN;
	static volatile int64_t x247 = INT64_MIN;
	uint64_t t57 = 31237680282935223LLU;

    t57 = (x245-((x246&x247)%x248));

    if (t57 != 7LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile uint16_t x249 = 55U;
	volatile int8_t x250 = -1;
	static int64_t x252 = -1LL;
	int64_t t58 = 1880257102LL;

    t58 = (x249-((x250&x251)%x252));

    if (t58 != 55LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x253 = 58U;
	int8_t x254 = -26;
	uint32_t x255 = 8546436U;
	int16_t x256 = -1;
	static volatile uint32_t t59 = 7180U;

    t59 = (x253-((x254&x255)%x256));

    if (t59 != 4286420918U) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x257 = UINT64_MAX;
	static int16_t x258 = INT16_MAX;
	static uint8_t x260 = UINT8_MAX;
	volatile uint64_t t60 = 3737766141024383969LLU;

    t60 = (x257-((x258&x259)%x260));

    if (t60 != 18446744073709551421LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x265 = 1;
	uint16_t x266 = UINT16_MAX;
	int32_t x267 = INT32_MIN;
	static int32_t x268 = INT32_MIN;
	volatile int32_t t61 = -18025;

    t61 = (x265-((x266&x267)%x268));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x269 = 7025305601982LL;
	static int8_t x270 = 1;
	int8_t x271 = -1;
	int64_t t62 = -8842549015LL;

    t62 = (x269-((x270&x271)%x272));

    if (t62 != 7025305601981LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x273 = INT32_MAX;
	int32_t x274 = 51;
	volatile uint8_t x275 = 0U;
	volatile int32_t t63 = INT32_MAX;

    t63 = (x273-((x274&x275)%x276));

    if (t63 != INT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x277 = 1;
	static volatile int32_t x278 = INT32_MAX;
	int8_t x279 = INT8_MIN;
	int16_t x280 = 1;
	static int32_t t64 = -934324591;

    t64 = (x277-((x278&x279)%x280));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x281 = 430U;
	volatile int64_t x282 = INT64_MIN;
	int16_t x284 = INT16_MIN;
	static int64_t t65 = -66533188LL;

    t65 = (x281-((x282&x283)%x284));

    if (t65 != 430LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile uint64_t x285 = 78LLU;
	int8_t x286 = INT8_MIN;
	static int16_t x287 = 184;
	int32_t x288 = -10;

    t66 = (x285-((x286&x287)%x288));

    if (t66 != 70LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int32_t x289 = INT32_MIN;
	int16_t x290 = INT16_MIN;
	int16_t x292 = 321;
	volatile int32_t t67 = INT32_MIN;

    t67 = (x289-((x290&x291)%x292));

    if (t67 != INT32_MIN) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x302 = INT8_MIN;
	int32_t x303 = INT32_MIN;
	int8_t x304 = INT8_MAX;
	static volatile uint64_t t68 = 1044091647LLU;

    t68 = (x301-((x302&x303)%x304));

    if (t68 != 1313391197LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int32_t x305 = INT32_MIN;
	volatile int32_t x306 = -1;
	int32_t x308 = -1;

    t69 = (x305-((x306&x307)%x308));

    if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x309 = -1LL;
	volatile int64_t x310 = -447LL;
	int8_t x311 = INT8_MIN;
	int8_t x312 = -1;

    t70 = (x309-((x310&x311)%x312));

    if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x314 = -90707021;
	int32_t x315 = -80;
	volatile uint64_t t71 = 2913952LLU;

    t71 = (x313-((x314&x315)%x316));

    if (t71 != 18442559907933585186LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x317 = 798;
	uint16_t x318 = UINT16_MAX;
	int64_t x319 = INT64_MAX;
	int8_t x320 = -10;
	static int64_t t72 = 4417481726857349923LL;

    t72 = (x317-((x318&x319)%x320));

    if (t72 != 793LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x321 = 2U;
	uint32_t x324 = 636555U;
	uint64_t t73 = 40026745291460453LLU;

    t73 = (x321-((x322&x323)%x324));

    if (t73 != 18446744073709551602LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x329 = 1;
	static uint16_t x330 = 20790U;
	uint8_t x331 = 29U;

    t74 = (x329-((x330&x331)%x332));

    if (t74 != -19) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x334 = UINT8_MAX;
	int16_t x335 = INT16_MAX;

    t75 = (x333-((x334&x335)%x336));

    if (t75 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x337 = -1;
	int64_t x338 = INT64_MIN;
	int16_t x339 = -541;
	static int64_t t76 = 4587395808049402LL;

    t76 = (x337-((x338&x339)%x340));

    if (t76 != 7LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile int32_t x341 = -1;
	volatile uint16_t x342 = UINT16_MAX;
	static uint16_t x343 = UINT16_MAX;
	int32_t t77 = 1;

    t77 = (x341-((x342&x343)%x344));

    if (t77 != -9) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint32_t x345 = UINT32_MAX;
	int64_t x346 = INT64_MIN;
	volatile uint32_t x347 = 1583U;
	volatile uint8_t x348 = 2U;
	volatile int64_t t78 = 0LL;

    t78 = (x345-((x346&x347)%x348));

    if (t78 != 4294967295LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x349 = 2790LLU;
	int32_t x350 = INT32_MIN;
	volatile int16_t x351 = INT16_MIN;
	int64_t x352 = -66357082444288500LL;
	static uint64_t t79 = 452LLU;

    t79 = (x349-((x350&x351)%x352));

    if (t79 != 2147486438LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint64_t x354 = 503618LLU;
	uint8_t x355 = UINT8_MAX;

    t80 = (x353-((x354&x355)%x356));

    if (t80 != 18446744073160241487LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x357 = -257215;
	int8_t x358 = INT8_MIN;
	int16_t x359 = -1;
	int16_t x360 = -132;
	volatile int32_t t81 = 2;

    t81 = (x357-((x358&x359)%x360));

    if (t81 != -257087) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x361 = UINT16_MAX;
	uint32_t x362 = 194U;
	static int16_t x363 = INT16_MIN;
	uint64_t x364 = 3265471601LLU;
	static volatile uint64_t t82 = 566LLU;

    t82 = (x361-((x362&x363)%x364));

    if (t82 != 65535LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x365 = 0U;
	uint32_t x366 = 362074U;
	int8_t x367 = -1;
	int16_t x368 = 12;
	uint32_t t83 = 2U;

    t83 = (x365-((x366&x367)%x368));

    if (t83 != 4294967286U) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x369 = INT16_MIN;
	int16_t x370 = INT16_MIN;
	volatile int64_t t84 = -30272756557394807LL;

    t84 = (x369-((x370&x371)%x372));

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x373 = INT16_MAX;
	volatile int64_t x375 = -85LL;
	uint32_t x376 = 1201457611U;
	int64_t t85 = -28LL;

    t85 = (x373-((x374&x375)%x376));

    if (t85 != 32725LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x377 = INT8_MAX;
	int64_t x378 = 6952897857934LL;
	uint16_t x379 = UINT16_MAX;
	int64_t t86 = -113511LL;

    t86 = (x377-((x378&x379)%x380));

    if (t86 != 127LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile int16_t x381 = INT16_MIN;
	int8_t x382 = 0;
	volatile int64_t t87 = 1752506LL;

    t87 = (x381-((x382&x383)%x384));

    if (t87 != -32768LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x385 = INT8_MIN;
	int8_t x386 = 11;
	int8_t x387 = INT8_MIN;
	static uint32_t x388 = 24380069U;

    t88 = (x385-((x386&x387)%x388));

    if (t88 != 4294967168U) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x389 = INT32_MAX;
	int16_t x390 = -1;
	uint16_t x392 = UINT16_MAX;
	int32_t t89 = INT32_MAX;

    t89 = (x389-((x390&x391)%x392));

    if (t89 != INT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint32_t x393 = UINT32_MAX;
	static int8_t x394 = INT8_MAX;
	int16_t x395 = INT16_MIN;
	volatile uint64_t t90 = 1398572LLU;

    t90 = (x393-((x394&x395)%x396));

    if (t90 != 4294967295LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x397 = -1;
	static volatile uint32_t x398 = 78916U;
	int32_t x399 = 1;

    t91 = (x397-((x398&x399)%x400));

    if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint16_t x409 = 7U;
	uint8_t x410 = 5U;
	int16_t x411 = -2;

    t92 = (x409-((x410&x411)%x412));

    if (t92 != 7) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint16_t x413 = 865U;
	uint32_t x414 = UINT32_MAX;
	int16_t x416 = INT16_MIN;
	volatile uint64_t t93 = 30607084091465105LLU;

    t93 = (x413-((x414&x415)%x416));

    if (t93 != 18446744071735452324LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x417 = INT64_MIN;
	static int32_t x418 = -1634750;
	int32_t x420 = INT32_MAX;
	volatile int64_t t94 = 838162926848LL;

    t94 = (x417-((x418&x419)%x420));

    if (t94 != -9223372036853141058LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x422 = UINT16_MAX;
	int32_t x423 = -1;
	volatile int32_t t95 = 7900898;

    t95 = (x421-((x422&x423)%x424));

    if (t95 != 254) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint16_t x425 = UINT16_MAX;
	int32_t x426 = INT32_MIN;
	volatile uint64_t x427 = 6401271LLU;
	int64_t x428 = INT64_MAX;
	static volatile uint64_t t96 = 328808337313529LLU;

    t96 = (x425-((x426&x427)%x428));

    if (t96 != 65535LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x429 = INT8_MIN;
	volatile uint64_t x430 = UINT64_MAX;
	uint8_t x432 = 1U;
	uint64_t t97 = 20886338LLU;

    t97 = (x429-((x430&x431)%x432));

    if (t97 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x433 = INT8_MAX;
	volatile int16_t x434 = INT16_MIN;
	static int8_t x435 = 1;
	int16_t x436 = INT16_MIN;

    t98 = (x433-((x434&x435)%x436));

    if (t98 != 127) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x437 = INT8_MAX;
	int32_t x438 = -18986;
	int8_t x440 = 2;
	volatile int64_t t99 = -11767646889628779LL;

    t99 = (x437-((x438&x439)%x440));

    if (t99 != 127LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x446 = -9;
	uint8_t x447 = UINT8_MAX;
	int16_t x448 = -1;
	int32_t t100 = INT32_MIN;

    t100 = (x445-((x446&x447)%x448));

    if (t100 != INT32_MIN) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x449 = 42254317;
	static uint64_t x450 = UINT64_MAX;
	int32_t x451 = 234;
	static int8_t x452 = INT8_MAX;
	uint64_t t101 = 23094145192078165LLU;

    t101 = (x449-((x450&x451)%x452));

    if (t101 != 42254210LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int8_t x456 = -1;
	volatile uint64_t t102 = 127374LLU;

    t102 = (x453-((x454&x455)%x456));

    if (t102 != 18446744073702616233LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x457 = 10961905U;
	volatile int32_t x459 = INT32_MAX;
	volatile int64_t t103 = 8519996068073LL;

    t103 = (x457-((x458&x459)%x460));

    if (t103 != 10961905LL) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x461 = INT64_MIN;
	uint64_t x463 = 0LLU;
	volatile int64_t x464 = -1LL;
	uint64_t t104 = 12374LLU;

    t104 = (x461-((x462&x463)%x464));

    if (t104 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x465 = -1;
	int16_t x466 = INT16_MIN;
	int64_t x467 = 40447291LL;
	int64_t t105 = -43714453404634LL;

    t105 = (x465-((x466&x467)%x468));

    if (t105 != -1LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x469 = 21746U;
	int64_t x470 = -1LL;
	static uint32_t x471 = 618760224U;
	int16_t x472 = INT16_MIN;
	volatile int64_t t106 = 40653LL;

    t106 = (x469-((x470&x471)%x472));

    if (t106 != 19666LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x473 = INT8_MIN;
	static volatile int8_t x474 = -5;
	int32_t x475 = 3;
	volatile uint8_t x476 = 20U;
	int32_t t107 = 26548536;

    t107 = (x473-((x474&x475)%x476));

    if (t107 != -131) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x477 = UINT16_MAX;
	static int16_t x478 = -1;
	int64_t x479 = INT64_MAX;
	int64_t x480 = -1LL;
	int64_t t108 = -12LL;

    t108 = (x477-((x478&x479)%x480));

    if (t108 != 65535LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x481 = INT16_MIN;
	uint32_t x482 = 44424133U;
	volatile int32_t x484 = INT32_MIN;
	uint32_t t109 = 1143179505U;

    t109 = (x481-((x482&x483)%x484));

    if (t109 != 4294934528U) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x485 = UINT32_MAX;
	volatile int32_t x486 = 250;
	uint64_t x487 = 623758704585090338LLU;
	uint16_t x488 = 5U;

    t110 = (x485-((x486&x487)%x488));

    if (t110 != 4294967291LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x493 = INT16_MAX;
	int32_t x494 = 91;
	int64_t x496 = -34684986775573328LL;
	uint64_t t111 = 0LLU;

    t111 = (x493-((x494&x495)%x496));

    if (t111 != 32676LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x497 = INT8_MIN;
	int16_t x498 = INT16_MIN;
	int32_t x499 = INT32_MAX;
	uint32_t x500 = 50614U;

    t112 = (x497-((x498&x499)%x500));

    if (t112 != 4294967080U) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x501 = INT32_MIN;
	uint16_t x504 = UINT16_MAX;
	int64_t t113 = 1967837305LL;

    t113 = (x501-((x502&x503)%x504));

    if (t113 != -2147450880LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x505 = INT8_MAX;
	int32_t x506 = INT32_MIN;
	uint64_t x507 = UINT64_MAX;
	volatile uint64_t t114 = 1797LLU;

    t114 = (x505-((x506&x507)%x508));

    if (t114 != 2147483775LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x509 = -1;
	volatile uint64_t x510 = UINT64_MAX;
	static volatile int64_t x511 = -1LL;
	volatile int8_t x512 = 6;
	volatile uint64_t t115 = 6636350668424837408LLU;

    t115 = (x509-((x510&x511)%x512));

    if (t115 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x513 = INT32_MIN;
	int64_t x514 = -20399406818146LL;
	volatile uint64_t x515 = 636643565LLU;
	static int32_t x516 = INT32_MAX;
	uint64_t t116 = 2LLU;

    t116 = (x513-((x514&x515)%x516));

    if (t116 != 18446744070948501364LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint16_t x517 = UINT16_MAX;
	static uint32_t x518 = 14316991U;
	int32_t x519 = INT32_MIN;
	int16_t x520 = 4;
	volatile uint32_t t117 = 1831802243U;

    t117 = (x517-((x518&x519)%x520));

    if (t117 != 65535U) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x521 = INT32_MIN;
	volatile int32_t x522 = INT32_MIN;
	volatile int64_t x523 = -1LL;
	int8_t x524 = INT8_MIN;

    t118 = (x521-((x522&x523)%x524));

    if (t118 != -2147483648LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x525 = INT64_MAX;
	uint64_t x526 = 131195000LLU;
	int16_t x527 = 316;
	int32_t x528 = INT32_MAX;
	static volatile uint64_t t119 = 219002215991LLU;

    t119 = (x525-((x526&x527)%x528));

    if (t119 != 9223372036854775751LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x529 = UINT64_MAX;
	int8_t x530 = INT8_MAX;
	int64_t x531 = 13476500905LL;
	int64_t x532 = INT64_MIN;
	uint64_t t120 = 1707436LLU;

    t120 = (x529-((x530&x531)%x532));

    if (t120 != 18446744073709551574LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x533 = -19;
	static int64_t x534 = -1LL;
	volatile int32_t x535 = INT32_MIN;
	static volatile int64_t t121 = -247481LL;

    t121 = (x533-((x534&x535)%x536));

    if (t121 != -3LL) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int32_t x538 = INT32_MAX;
	volatile uint64_t x539 = UINT64_MAX;
	int16_t x540 = INT16_MAX;
	uint64_t t122 = 2152385350374195736LLU;

    t122 = (x537-((x538&x539)%x540));

    if (t122 != 4294967294LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x541 = INT32_MIN;
	uint64_t x542 = 321642397917878LLU;
	int16_t x543 = INT16_MIN;
	int8_t x544 = INT8_MAX;
	static volatile uint64_t t123 = 1585219115978700LLU;

    t123 = (x541-((x542&x543)%x544));

    if (t123 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x545 = 100029LLU;
	static int64_t x546 = INT64_MAX;
	int32_t x547 = 8117375;
	uint8_t x548 = UINT8_MAX;
	uint64_t t124 = 212537385LLU;

    t124 = (x545-((x546&x547)%x548));

    if (t124 != 99814LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x549 = INT16_MIN;
	int64_t x550 = -10066681142508LL;
	int64_t x552 = INT64_MIN;
	static int64_t t125 = -45309779040LL;

    t125 = (x549-((x550&x551)%x552));

    if (t125 != 10066681109760LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x554 = INT8_MAX;
	static uint64_t x555 = 2LLU;
	volatile uint64_t t126 = 10892179193LLU;

    t126 = (x553-((x554&x555)%x556));

    if (t126 != 18446744073709549498LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x561 = INT16_MAX;
	volatile uint64_t x563 = 19786865127LLU;
	int16_t x564 = 1;
	volatile uint64_t t127 = 7450LLU;

    t127 = (x561-((x562&x563)%x564));

    if (t127 != 32767LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x565 = 909U;
	int32_t x568 = 234264;

    t128 = (x565-((x566&x567)%x568));

    if (t128 != 4294816405U) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x569 = INT32_MIN;
	static volatile int32_t x570 = INT32_MIN;
	uint16_t x571 = 1U;
	int16_t x572 = 958;
	static volatile int32_t t129 = INT32_MIN;

    t129 = (x569-((x570&x571)%x572));

    if (t129 != INT32_MIN) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x573 = INT16_MIN;
	volatile int16_t x574 = 361;
	volatile int8_t x575 = -1;
	volatile int32_t x576 = -1;
	int32_t t130 = 7;

    t130 = (x573-((x574&x575)%x576));

    if (t130 != -32768) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint32_t x578 = 383U;
	static uint16_t x579 = UINT16_MAX;
	int64_t x580 = INT64_MAX;
	volatile int64_t t131 = -2177084036907395LL;

    t131 = (x577-((x578&x579)%x580));

    if (t131 != 2147483264LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x581 = 4U;
	int64_t x582 = 3679638464947385093LL;
	uint8_t x583 = UINT8_MAX;
	static int16_t x584 = INT16_MIN;

    t132 = (x581-((x582&x583)%x584));

    if (t132 != -1LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x585 = -1;
	volatile uint64_t x586 = UINT64_MAX;
	volatile uint32_t x587 = 1U;
	int32_t x588 = INT32_MIN;
	volatile uint64_t t133 = 0LLU;

    t133 = (x585-((x586&x587)%x588));

    if (t133 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x589 = 259997968LLU;
	int32_t x591 = INT32_MIN;
	static int32_t x592 = -1;
	uint64_t t134 = 369924LLU;

    t134 = (x589-((x590&x591)%x592));

    if (t134 != 259997968LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint32_t x594 = UINT32_MAX;
	int64_t x595 = INT64_MIN;
	volatile int64_t t135 = -1781LL;

    t135 = (x593-((x594&x595)%x596));

    if (t135 != 54LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x597 = INT16_MIN;
	int32_t x598 = INT32_MAX;
	int32_t x599 = INT32_MAX;
	int16_t x600 = INT16_MIN;
	int32_t t136 = 574582;

    t136 = (x597-((x598&x599)%x600));

    if (t136 != -65535) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x601 = INT32_MIN;
	int64_t x602 = INT64_MIN;
	uint8_t x603 = UINT8_MAX;
	volatile int32_t x604 = -367;

    t137 = (x601-((x602&x603)%x604));

    if (t137 != -2147483648LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint16_t x607 = UINT16_MAX;
	uint8_t x608 = UINT8_MAX;
	volatile int64_t t138 = 559283102LL;

    t138 = (x605-((x606&x607)%x608));

    if (t138 != -172LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x609 = 1976542U;
	int64_t x610 = INT64_MIN;
	int64_t x611 = INT64_MIN;

    t139 = (x609-((x610&x611)%x612));

    if (t139 != 1976542LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static int8_t x613 = INT8_MIN;
	int16_t x615 = 163;
	volatile int16_t x616 = INT16_MIN;
	int32_t t140 = 52;

    t140 = (x613-((x614&x615)%x616));

    if (t140 != -291) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x620 = INT8_MIN;
	uint64_t t141 = 13997537091LLU;

    t141 = (x617-((x618&x619)%x620));

    if (t141 != 73759753LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x621 = 7LL;
	uint32_t x622 = UINT32_MAX;
	int8_t x624 = -1;
	int64_t t142 = -53796018525LL;

    t142 = (x621-((x622&x623)%x624));

    if (t142 != 7LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x625 = -1;
	int64_t x626 = -1LL;
	uint16_t x627 = 7U;
	uint8_t x628 = 3U;
	static volatile int64_t t143 = 54547944LL;

    t143 = (x625-((x626&x627)%x628));

    if (t143 != -2LL) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int16_t x629 = -1;
	uint8_t x630 = 4U;
	int32_t x631 = INT32_MIN;
	volatile uint64_t x632 = 3048003133605087268LLU;
	static volatile uint64_t t144 = UINT64_MAX;

    t144 = (x629-((x630&x631)%x632));

    if (t144 != UINT64_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x633 = UINT16_MAX;
	static uint64_t x634 = 969861LLU;
	uint8_t x635 = 53U;
	int8_t x636 = INT8_MIN;
	uint64_t t145 = 3968084714490174LLU;

    t145 = (x633-((x634&x635)%x636));

    if (t145 != 65530LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x637 = INT64_MAX;
	volatile uint32_t x638 = UINT32_MAX;
	uint8_t x639 = 10U;
	int32_t x640 = -1;
	volatile int64_t t146 = -132259632LL;

    t146 = (x637-((x638&x639)%x640));

    if (t146 != 9223372036854775797LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x641 = -1;
	int64_t x642 = INT64_MIN;
	int8_t x643 = INT8_MIN;
	volatile int64_t x644 = INT64_MIN;
	int64_t t147 = -1102750562436699LL;

    t147 = (x641-((x642&x643)%x644));

    if (t147 != -1LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x645 = INT16_MIN;
	static volatile int16_t x646 = INT16_MIN;
	static uint16_t x647 = 1U;
	int64_t x648 = INT64_MIN;

    t148 = (x645-((x646&x647)%x648));

    if (t148 != -32768LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x649 = -2218396795304LL;
	volatile int64_t x650 = 2566013LL;
	static uint64_t x651 = 278574702LLU;
	int32_t x652 = -28249;

    t149 = (x649-((x650&x651)%x652));

    if (t149 != 18446741855312615404LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint16_t x653 = 13U;
	uint16_t x654 = 32493U;
	uint32_t x655 = UINT32_MAX;
	volatile uint32_t x656 = 3027050U;

    t150 = (x653-((x654&x655)%x656));

    if (t150 != 4294934816U) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int64_t x658 = INT64_MAX;
	volatile int32_t x659 = INT32_MIN;
	int64_t t151 = -10618462328473556LL;

    t151 = (x657-((x658&x659)%x660));

    if (t151 != -1LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x662 = 103U;
	volatile int64_t x663 = -1LL;
	volatile int64_t x664 = -1LL;
	int64_t t152 = -1LL;

    t152 = (x661-((x662&x663)%x664));

    if (t152 != -390LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x665 = -1;
	int16_t x666 = INT16_MIN;
	uint16_t x667 = UINT16_MAX;
	volatile int64_t x668 = -1LL;
	int64_t t153 = -13022LL;

    t153 = (x665-((x666&x667)%x668));

    if (t153 != -1LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x669 = 1;
	int64_t x670 = INT64_MIN;
	volatile int32_t x671 = INT32_MIN;
	int8_t x672 = 47;
	static int64_t t154 = -2089516230543448LL;

    t154 = (x669-((x670&x671)%x672));

    if (t154 != 37LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x673 = INT8_MIN;
	int16_t x674 = -7579;
	int64_t x676 = INT64_MIN;
	int64_t t155 = 1706524100391748443LL;

    t155 = (x673-((x674&x675)%x676));

    if (t155 != -128LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint64_t x677 = 51104384LLU;
	volatile int32_t x678 = -1011;
	static uint8_t x680 = 2U;
	uint64_t t156 = 70831LLU;

    t156 = (x677-((x678&x679)%x680));

    if (t156 != 51104384LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x681 = 1485976304100914LLU;
	uint64_t x682 = UINT64_MAX;
	int32_t x683 = -1;
	uint64_t x684 = UINT64_MAX;
	static volatile uint64_t t157 = 729173396LLU;

    t157 = (x681-((x682&x683)%x684));

    if (t157 != 1485976304100914LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x685 = INT8_MIN;
	int32_t x686 = INT32_MAX;
	int16_t x688 = INT16_MIN;
	static volatile int32_t t158 = 196;

    t158 = (x685-((x686&x687)%x688));

    if (t158 != -32895) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint16_t x689 = 380U;
	int8_t x690 = -1;
	volatile int32_t x691 = INT32_MIN;
	uint32_t x692 = UINT32_MAX;

    t159 = (x689-((x690&x691)%x692));

    if (t159 != 2147484028U) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x693 = 32077683U;
	int32_t x694 = INT32_MIN;
	int64_t x696 = INT64_MAX;
	volatile int64_t t160 = 17LL;

    t160 = (x693-((x694&x695)%x696));

    if (t160 != 32077683LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x697 = INT8_MAX;
	int32_t x698 = INT32_MIN;
	volatile int64_t t161 = 553082309439765LL;

    t161 = (x697-((x698&x699)%x700));

    if (t161 != -155LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x708 = INT32_MAX;
	int32_t t162 = 267129;

    t162 = (x705-((x706&x707)%x708));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int32_t x709 = INT32_MIN;
	uint32_t x710 = 2U;
	volatile int8_t x712 = INT8_MIN;
	volatile uint32_t t163 = 74493U;

    t163 = (x709-((x710&x711)%x712));

    if (t163 != 2147483648U) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x713 = 1;
	uint32_t x715 = UINT32_MAX;
	int64_t x716 = -864055967LL;
	volatile int64_t t164 = -107375256559054133LL;

    t164 = (x713-((x714&x715)%x716));

    if (t164 != -37151750LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x718 = UINT16_MAX;
	int8_t x720 = -18;
	int32_t t165 = 840360;

    t165 = (x717-((x718&x719)%x720));

    if (t165 != 12) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x721 = INT8_MAX;
	int64_t x722 = -1LL;
	uint16_t x724 = 700U;
	volatile int64_t t166 = -59559LL;

    t166 = (x721-((x722&x723)%x724));

    if (t166 != 127LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x725 = -55;
	uint16_t x726 = 33U;
	static volatile int8_t x727 = -1;
	volatile uint8_t x728 = UINT8_MAX;
	int32_t t167 = 16868;

    t167 = (x725-((x726&x727)%x728));

    if (t167 != -88) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint64_t x729 = UINT64_MAX;
	static volatile uint64_t x730 = UINT64_MAX;
	int64_t x731 = -840674LL;
	int16_t x732 = INT16_MAX;
	volatile uint64_t t168 = 946462LLU;

    t168 = (x729-((x730&x731)%x732));

    if (t168 != 18446744073709540331LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x733 = INT8_MAX;
	static int16_t x734 = INT16_MIN;
	static int16_t x735 = INT16_MAX;
	int32_t x736 = INT32_MIN;
	static volatile int32_t t169 = 344;

    t169 = (x733-((x734&x735)%x736));

    if (t169 != 127) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int16_t x737 = INT16_MIN;
	static int64_t x740 = 5585007598LL;
	int64_t t170 = 1728880731925558LL;

    t170 = (x737-((x738&x739)%x740));

    if (t170 != -32796LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x741 = -1;
	static int32_t x742 = -1;
	static int32_t x744 = -1;
	volatile int32_t t171 = 68292156;

    t171 = (x741-((x742&x743)%x744));

    if (t171 != -1) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t x745 = INT32_MIN;
	int32_t x746 = INT32_MIN;
	int8_t x747 = -16;
	uint8_t x748 = UINT8_MAX;
	volatile int32_t t172 = -86406;

    t172 = (x745-((x746&x747)%x748));

    if (t172 != -2147483520) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x749 = INT16_MIN;
	volatile int64_t x750 = INT64_MIN;
	volatile uint16_t x751 = UINT16_MAX;
	int8_t x752 = -48;
	int64_t t173 = 60364555491987LL;

    t173 = (x749-((x750&x751)%x752));

    if (t173 != -32768LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x753 = INT64_MAX;
	int32_t x754 = INT32_MIN;
	int16_t x755 = INT16_MAX;
	int32_t x756 = -1;
	static volatile int64_t t174 = INT64_MAX;

    t174 = (x753-((x754&x755)%x756));

    if (t174 != INT64_MAX) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x758 = -1;
	int16_t x759 = INT16_MIN;
	volatile uint16_t x760 = UINT16_MAX;
	static int32_t t175 = 1;

    t175 = (x757-((x758&x759)%x760));

    if (t175 != 33543) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x761 = INT16_MAX;
	int64_t x762 = INT64_MAX;
	volatile int32_t x763 = INT32_MAX;
	int16_t x764 = 46;
	int64_t t176 = -1894347LL;

    t176 = (x761-((x762&x763)%x764));

    if (t176 != 32762LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x765 = -1865;
	volatile int64_t x766 = -1LL;
	int8_t x767 = INT8_MAX;
	int32_t x768 = INT32_MAX;
	int64_t t177 = -32400457970392795LL;

    t177 = (x765-((x766&x767)%x768));

    if (t177 != -1992LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static int8_t x770 = -1;
	uint16_t x771 = 42U;
	uint64_t x772 = UINT64_MAX;
	volatile uint64_t t178 = 4212589LLU;

    t178 = (x769-((x770&x771)%x772));

    if (t178 != 18446744073709551575LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x773 = INT64_MAX;
	int8_t x774 = INT8_MIN;
	uint16_t x775 = 1935U;
	int8_t x776 = INT8_MIN;
	volatile int64_t t179 = INT64_MAX;

    t179 = (x773-((x774&x775)%x776));

    if (t179 != INT64_MAX) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile uint16_t x777 = 10U;
	uint64_t x778 = 1638666LLU;
	volatile uint64_t t180 = 2LLU;

    t180 = (x777-((x778&x779)%x780));

    if (t180 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x781 = -1;
	uint8_t x783 = 0U;
	static int32_t x784 = -14;

    t181 = (x781-((x782&x783)%x784));

    if (t181 != UINT64_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint64_t x785 = 44LLU;
	uint16_t x787 = 3U;
	int32_t x788 = INT32_MAX;
	uint64_t t182 = 8207210298063LLU;

    t182 = (x785-((x786&x787)%x788));

    if (t182 != 44LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x790 = INT32_MIN;
	static int16_t x791 = INT16_MIN;

    t183 = (x789-((x790&x791)%x792));

    if (t183 != 3) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint16_t x793 = 3U;
	int32_t x794 = INT32_MAX;
	uint32_t x795 = 82133U;
	int16_t x796 = 7165;
	uint32_t t184 = 644U;

    t184 = (x793-((x794&x795)%x796));

    if (t184 != 4294963981U) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x798 = 1490U;
	int32_t x800 = INT32_MIN;

    t185 = (x797-((x798&x799)%x800));

    if (t185 != 260929U) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x801 = -1;
	int16_t x802 = -889;
	static uint16_t x803 = 26U;
	static volatile int32_t x804 = -1;
	int32_t t186 = -54562452;

    t186 = (x801-((x802&x803)%x804));

    if (t186 != -1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x806 = 19LLU;
	int16_t x807 = INT16_MIN;
	uint64_t t187 = 7018673747320385744LLU;

    t187 = (x805-((x806&x807)%x808));

    if (t187 != 206404LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x809 = INT16_MAX;
	int8_t x810 = INT8_MIN;
	uint64_t x811 = 687391LLU;
	uint16_t x812 = 13310U;

    t188 = (x809-((x810&x811)%x812));

    if (t188 != 24217LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x813 = 446716U;
	int64_t x814 = -2174399691064571LL;
	static uint64_t t189 = 3488449662189130376LLU;

    t189 = (x813-((x814&x815)%x816));

    if (t189 != 2174399691511287LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint8_t x817 = 2U;
	int32_t x818 = INT32_MAX;
	static int64_t x820 = INT64_MIN;
	int64_t t190 = 487506934067780531LL;

    t190 = (x817-((x818&x819)%x820));

    if (t190 != 2LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint8_t x821 = 56U;
	uint64_t x822 = UINT64_MAX;
	int32_t x823 = -1;
	int8_t x824 = 1;
	volatile uint64_t t191 = 446073723818688514LLU;

    t191 = (x821-((x822&x823)%x824));

    if (t191 != 56LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x825 = INT8_MIN;
	static int16_t x826 = INT16_MIN;
	static int16_t x827 = INT16_MAX;
	int32_t x828 = INT32_MIN;
	static int32_t t192 = 113;

    t192 = (x825-((x826&x827)%x828));

    if (t192 != -128) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x829 = -1LL;
	static volatile int64_t x830 = INT64_MIN;
	uint16_t x831 = 29631U;
	int32_t x832 = INT32_MAX;
	volatile int64_t t193 = 10340LL;

    t193 = (x829-((x830&x831)%x832));

    if (t193 != -1LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x834 = INT32_MIN;
	static volatile int32_t x835 = -1;
	uint8_t x836 = 1U;
	int32_t t194 = 4;

    t194 = (x833-((x834&x835)%x836));

    if (t194 != -32768) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x837 = 65;
	int8_t x839 = INT8_MIN;
	uint8_t x840 = 67U;
	volatile int32_t t195 = -43;

    t195 = (x837-((x838&x839)%x840));

    if (t195 != 65) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x841 = INT32_MAX;
	int64_t x843 = 38828349LL;
	int8_t x844 = INT8_MIN;
	int64_t t196 = 61968301371288426LL;

    t196 = (x841-((x842&x843)%x844));

    if (t196 != 2147483586LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x845 = INT8_MIN;
	volatile int64_t x846 = 1067730LL;

    t197 = (x845-((x846&x847)%x848));

    if (t197 != -128LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x849 = 1642;
	uint32_t x850 = 890473U;
	volatile uint16_t x851 = 7U;
	int8_t x852 = INT8_MAX;
	uint32_t t198 = 387U;

    t198 = (x849-((x850&x851)%x852));

    if (t198 != 1641U) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x857 = INT16_MIN;
	uint64_t x858 = UINT64_MAX;
	static volatile uint64_t x860 = 5745216LLU;
	uint64_t t199 = 0LLU;

    t199 = (x857-((x858&x859)%x860));

    if (t199 != 18446744073703789313LLU) { NG(); } else { ; }
	
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

