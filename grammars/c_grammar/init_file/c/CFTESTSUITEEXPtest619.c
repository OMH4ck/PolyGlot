
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

int32_t x6 = INT32_MIN;
int64_t x9 = INT64_MIN;
int64_t x16 = INT64_MIN;
int64_t t3 = -2028LL;
uint64_t x20 = 150466LLU;
int8_t x22 = 31;
int8_t x33 = -1;
uint16_t x45 = UINT16_MAX;
volatile uint64_t x52 = UINT64_MAX;
uint16_t x64 = 37U;
int16_t x65 = -1;
int32_t x68 = -467;
static volatile int64_t t14 = -44889210380LL;
int8_t x69 = INT8_MIN;
volatile uint32_t t17 = 96953U;
uint16_t x92 = UINT16_MAX;
int64_t x100 = 35116585LL;
uint64_t t21 = 34449845006234451LLU;
volatile int32_t x106 = 18643752;
static uint32_t x116 = 46980072U;
int16_t x117 = 0;
int16_t x118 = INT16_MAX;
int8_t x123 = INT8_MAX;
volatile int64_t t28 = -257292LL;
volatile int8_t x138 = INT8_MIN;
volatile int16_t x140 = 7;
int32_t t29 = 491704366;
uint64_t x143 = UINT64_MAX;
uint8_t x150 = UINT8_MAX;
volatile int64_t t31 = 102450398508LL;
volatile int16_t x159 = INT16_MIN;
int64_t x161 = INT64_MAX;
uint32_t x163 = 60210308U;
volatile int8_t x173 = -1;
volatile int32_t t36 = 53;
static uint16_t x190 = 6U;
int8_t x193 = INT8_MAX;
uint64_t x205 = 434763LLU;
uint64_t x206 = 21143189046638LLU;
int16_t x226 = 52;
int32_t x232 = -1;
uint8_t x243 = 31U;
uint64_t t46 = 1066805377LLU;
int16_t x254 = INT16_MIN;
static uint64_t x255 = 202519057642710LLU;
static volatile int32_t x270 = -1;
int32_t x271 = INT32_MIN;
static int16_t x275 = INT16_MIN;
uint64_t x302 = 30405488507996LLU;
int64_t x304 = 132180058LL;
uint8_t x312 = 1U;
int8_t x318 = -2;
uint16_t x320 = 450U;
uint32_t t59 = 3191U;
static int16_t x321 = -3695;
int8_t x324 = INT8_MAX;
int16_t x344 = INT16_MIN;
int64_t t65 = 3LL;
int16_t x345 = INT16_MAX;
uint8_t x351 = 115U;
int8_t x353 = -1;
volatile uint64_t x355 = 47419485237953LLU;
static volatile uint32_t x359 = 14194279U;
static volatile int64_t t71 = 68187631976592LL;
int16_t x382 = -1;
volatile int8_t x384 = -1;
volatile uint32_t x385 = 0U;
volatile int16_t x388 = -117;
static volatile int16_t x391 = INT16_MAX;
static volatile uint32_t x396 = 28813U;
int64_t x399 = -1LL;
int32_t x406 = INT32_MIN;
int8_t x407 = 28;
static volatile int64_t t80 = 119802317636LL;
uint32_t x417 = UINT32_MAX;
int8_t x419 = -6;
static uint32_t t82 = 62444U;
int8_t x428 = -1;
volatile int32_t t83 = 16975;
uint8_t x429 = 3U;
volatile int64_t t86 = 4347699717455LL;
static uint16_t x444 = UINT16_MAX;
static int64_t t87 = 5LL;
volatile int32_t x445 = -1;
static volatile int16_t x453 = INT16_MIN;
volatile int16_t x467 = INT16_MAX;
uint16_t x470 = 345U;
static int32_t x472 = 1005;
int32_t x476 = INT32_MAX;
uint32_t t95 = 3884191U;
volatile uint64_t t96 = 249340841564213285LLU;
int64_t x481 = -7995919264LL;
volatile uint8_t x482 = 2U;
volatile uint32_t x488 = 0U;
volatile uint64_t x493 = UINT64_MAX;
int32_t x494 = -557373249;
uint16_t x497 = 15U;
int64_t x498 = 353925384625675LL;
volatile int8_t x502 = -13;
volatile uint64_t x503 = 983612928LLU;
uint32_t x506 = UINT32_MAX;
volatile uint16_t x507 = UINT16_MAX;
int64_t x510 = INT64_MAX;
static int64_t x517 = -1LL;
int32_t x526 = -425989279;
int8_t x527 = 21;
uint64_t x531 = 45770079659238911LLU;
static int64_t x535 = -235563595348585LL;
volatile int32_t t112 = -7279452;
int16_t x548 = INT16_MAX;
int8_t x551 = INT8_MIN;
volatile int64_t x602 = INT64_MAX;
volatile uint64_t t123 = 227LLU;
int16_t x615 = -9;
volatile int32_t t125 = -36440607;
int16_t x619 = 248;
static int16_t x624 = -1;
volatile uint64_t t128 = 21120026591399LLU;
uint64_t x630 = UINT64_MAX;
int64_t x635 = INT64_MIN;
int16_t x638 = INT16_MIN;
int32_t t131 = -29;
uint16_t x645 = 2415U;
static int32_t x648 = INT32_MIN;
volatile int64_t t132 = -3074837099LL;
int32_t x662 = -1;
static int16_t x663 = -1;
int8_t x668 = 1;
int64_t x672 = -1LL;
static uint64_t x675 = 3743174902LLU;
uint8_t x678 = 75U;
int64_t x683 = INT64_MAX;
int64_t x684 = -1LL;
int16_t x687 = -1;
volatile uint64_t t139 = 5LLU;
int64_t x689 = INT64_MIN;
volatile uint64_t x690 = UINT64_MAX;
volatile uint64_t t140 = 48426412442002LLU;
volatile uint64_t t141 = 190528703492539188LLU;
static uint32_t x699 = 7703U;
static uint32_t x701 = 95U;
static int32_t x704 = 106;
static volatile int32_t x723 = 150575092;
static int8_t x729 = -1;
uint64_t x735 = UINT64_MAX;
uint32_t x738 = UINT32_MAX;
static uint64_t t151 = 1734006244LLU;
volatile int32_t x745 = INT32_MIN;
int8_t x762 = 22;
uint32_t t155 = 1225726U;
static uint16_t x778 = UINT16_MAX;
uint8_t x780 = 0U;
uint64_t t157 = 8094000776450337596LLU;
int8_t x790 = -1;
uint32_t t158 = 143U;
static int8_t x806 = INT8_MIN;
static volatile int32_t x808 = INT32_MIN;
int64_t t161 = 13666377430LL;
int32_t x813 = -1946824;
volatile int16_t x816 = INT16_MIN;
static volatile int32_t t163 = 10149;
int64_t x831 = INT64_MAX;
static volatile uint32_t x849 = UINT32_MAX;
static int64_t x850 = -1LL;
int8_t x858 = -1;
volatile int64_t x867 = 50917960872481LL;
int8_t x880 = INT8_MIN;
static uint64_t x882 = 482159516LLU;
static volatile int8_t x884 = -1;
int32_t t175 = 2;
volatile uint32_t t178 = 61U;
volatile int32_t x913 = INT32_MIN;
static int16_t x918 = INT16_MAX;
uint8_t x920 = UINT8_MAX;
uint32_t t181 = 125729U;
int8_t x922 = -1;
static int8_t x930 = -29;
int64_t x931 = INT64_MIN;
int64_t x932 = 3692539LL;
uint16_t x933 = 869U;
int64_t t185 = -120LL;
volatile int8_t x952 = INT8_MAX;
int64_t t186 = 48088LL;
int32_t x964 = INT32_MIN;
static int32_t t188 = -29;
volatile int32_t x985 = -1;
volatile int32_t x986 = -15375;
uint8_t x988 = 34U;
static int64_t t194 = 102960098477LL;
int64_t x1003 = -436704LL;
static volatile int64_t t195 = 56843LL;
int32_t x1007 = 503666258;
volatile int16_t x1008 = INT16_MIN;
volatile uint16_t x1011 = UINT16_MAX;
uint32_t x1012 = UINT32_MAX;
volatile uint32_t t199 = 215820U;


void f0(void) {
    	static volatile int32_t x1 = INT32_MAX;
	uint64_t x2 = 157199403LLU;
	static uint16_t x3 = UINT16_MAX;
	int32_t x4 = -62;
	volatile uint64_t t0 = 2084926742LLU;

    t0 = (x1*((x2/x3)*x4));

    if (t0 != 18446424794430850244LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = -3;
	volatile int16_t x7 = INT16_MAX;
	uint32_t x8 = 1385U;
	volatile uint32_t t1 = 1939910U;

    t1 = (x5*((x6/x7)*x8));

    if (t1 != 272310390U) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x10 = -1;
	uint16_t x11 = UINT16_MAX;
	uint64_t x12 = 24416551LLU;
	volatile uint64_t t2 = 59764776506470898LLU;

    t2 = (x9*((x10/x11)*x12));

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MAX;
	int64_t x14 = -1LL;
	uint8_t x15 = 2U;

    t3 = (x13*((x14/x15)*x16));

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = INT32_MIN;
	int16_t x18 = INT16_MIN;
	int64_t x19 = INT64_MAX;
	volatile uint64_t t4 = 95205208LLU;

    t4 = (x17*((x18/x19)*x20));

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = 5U;
	uint8_t x23 = 72U;
	uint64_t x24 = 140682LLU;
	uint64_t t5 = 1183729552315438LLU;

    t5 = (x21*((x22/x23)*x24));

    if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = 212624770LLU;
	static int16_t x26 = 1;
	volatile int32_t x27 = INT32_MIN;
	uint32_t x28 = UINT32_MAX;
	uint64_t t6 = 1815338985LLU;

    t6 = (x25*((x26/x27)*x28));

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MAX;
	volatile int8_t x30 = 0;
	static int16_t x31 = INT16_MAX;
	volatile int32_t x32 = INT32_MAX;
	static int32_t t7 = -4111;

    t7 = (x29*((x30/x31)*x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint64_t x34 = 30LLU;
	int64_t x35 = -1770LL;
	int8_t x36 = 6;
	uint64_t t8 = 1413205849005LLU;

    t8 = (x33*((x34/x35)*x36));

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x41 = -1;
	int8_t x42 = INT8_MAX;
	int8_t x43 = -30;
	uint8_t x44 = 60U;
	volatile int32_t t9 = -175;

    t9 = (x41*((x42/x43)*x44));

    if (t9 != 240) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x46 = 49774550785233LL;
	static uint32_t x47 = 119U;
	int8_t x48 = INT8_MIN;
	volatile int64_t t10 = 13610400LL;

    t10 = (x45*((x46/x47)*x48));

    if (t10 != -3508679191349164800LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x49 = -12753;
	uint32_t x50 = 0U;
	int64_t x51 = -1LL;
	volatile uint64_t t11 = 2496979358LLU;

    t11 = (x49*((x50/x51)*x52));

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x53 = INT64_MIN;
	int16_t x54 = -1;
	int8_t x55 = INT8_MIN;
	uint8_t x56 = UINT8_MAX;
	int64_t t12 = -12361003LL;

    t12 = (x53*((x54/x55)*x56));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x61 = 4U;
	static uint8_t x62 = UINT8_MAX;
	static int8_t x63 = -40;
	volatile int32_t t13 = 34598;

    t13 = (x61*((x62/x63)*x64));

    if (t13 != -888) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x66 = INT64_MIN;
	int64_t x67 = -28951LL;

    t14 = (x65*((x66/x67)*x68));

    if (t14 != 148779480543372437LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x70 = INT64_MAX;
	static volatile int64_t x71 = -1LL;
	static volatile uint64_t x72 = 266761468413872LLU;
	uint64_t t15 = 5692476299LLU;

    t15 = (x69*((x70/x71)*x72));

    if (t15 != 18412598605752576000LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x73 = INT32_MIN;
	static uint64_t x74 = UINT64_MAX;
	static int8_t x75 = -7;
	int64_t x76 = -1LL;
	uint64_t t16 = 3LLU;

    t16 = (x73*((x74/x75)*x76));

    if (t16 != 2147483648LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x81 = -49;
	volatile uint32_t x82 = 409759723U;
	int16_t x83 = INT16_MIN;
	uint8_t x84 = UINT8_MAX;

    t17 = (x81*((x82/x83)*x84));

    if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x89 = 2;
	uint8_t x90 = UINT8_MAX;
	volatile int64_t x91 = INT64_MAX;
	int64_t t18 = 10074LL;

    t18 = (x89*((x90/x91)*x92));

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x93 = INT16_MIN;
	uint16_t x94 = 381U;
	volatile uint64_t x95 = 752705674028885062LLU;
	static volatile uint8_t x96 = 2U;
	volatile uint64_t t19 = 24LLU;

    t19 = (x93*((x94/x95)*x96));

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x97 = UINT16_MAX;
	int32_t x98 = 2718173;
	uint64_t x99 = 31185047LLU;
	volatile uint64_t t20 = 65774241126842LLU;

    t20 = (x97*((x98/x99)*x100));

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x101 = -1LL;
	uint8_t x102 = 8U;
	uint64_t x103 = 29999180LLU;
	uint64_t x104 = 2741671347LLU;

    t21 = (x101*((x102/x103)*x104));

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x105 = INT64_MAX;
	uint64_t x107 = 1907444586472970LLU;
	static uint64_t x108 = 93428LLU;
	uint64_t t22 = 14536742034LLU;

    t22 = (x105*((x106/x107)*x108));

    if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int64_t x109 = -1LL;
	static int8_t x110 = -1;
	int32_t x111 = -1;
	uint64_t x112 = UINT64_MAX;
	volatile uint64_t t23 = 497152LLU;

    t23 = (x109*((x110/x111)*x112));

    if (t23 != 1LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int64_t x113 = -2167LL;
	int8_t x114 = INT8_MIN;
	volatile int64_t x115 = 2514397357LL;
	volatile int64_t t24 = 3615LL;

    t24 = (x113*((x114/x115)*x116));

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x119 = INT8_MIN;
	uint16_t x120 = UINT16_MAX;
	static volatile int32_t t25 = 492;

    t25 = (x117*((x118/x119)*x120));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint8_t x121 = 13U;
	uint64_t x122 = UINT64_MAX;
	int8_t x124 = INT8_MAX;
	volatile uint64_t t26 = 3556901518696565917LLU;

    t26 = (x121*((x122/x123)*x124));

    if (t26 != 18446744073709551590LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int64_t x125 = -1LL;
	uint32_t x126 = 0U;
	static int8_t x127 = -17;
	uint8_t x128 = UINT8_MAX;
	volatile int64_t t27 = -258763229LL;

    t27 = (x125*((x126/x127)*x128));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x133 = 2;
	int32_t x134 = INT32_MIN;
	int64_t x135 = 229LL;
	static int32_t x136 = -6609;

    t28 = (x133*((x134/x135)*x136));

    if (t28 != 123953870226LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x137 = UINT16_MAX;
	volatile uint16_t x139 = UINT16_MAX;

    t29 = (x137*((x138/x139)*x140));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x141 = -1860706LL;
	int16_t x142 = -274;
	int16_t x144 = INT16_MIN;
	uint64_t t30 = 2LLU;

    t30 = (x141*((x142/x143)*x144));

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x149 = -1LL;
	uint16_t x151 = 12017U;
	static int32_t x152 = -1;

    t31 = (x149*((x150/x151)*x152));

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x157 = 52;
	uint64_t x158 = 698745693933LLU;
	int8_t x160 = INT8_MIN;
	uint64_t t32 = 6908700917577544762LLU;

    t32 = (x157*((x158/x159)*x160));

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x162 = 9212443893LLU;
	int32_t x164 = -593135;
	uint64_t t33 = 288675LLU;

    t33 = (x161*((x162/x163)*x164));

    if (t33 != 9223372036945525463LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x169 = -5;
	volatile int64_t x170 = 11807686590LL;
	int64_t x171 = INT64_MIN;
	volatile int16_t x172 = 3774;
	int64_t t34 = -1430LL;

    t34 = (x169*((x170/x171)*x172));

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x174 = INT8_MIN;
	int64_t x175 = INT64_MIN;
	uint32_t x176 = 4560301U;
	int64_t t35 = 4985824849871104LL;

    t35 = (x173*((x174/x175)*x176));

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint8_t x185 = UINT8_MAX;
	volatile int8_t x186 = INT8_MIN;
	uint16_t x187 = UINT16_MAX;
	static volatile int8_t x188 = -5;

    t36 = (x185*((x186/x187)*x188));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x189 = -1;
	static int32_t x191 = INT32_MAX;
	volatile int32_t x192 = INT32_MIN;
	int32_t t37 = -538211;

    t37 = (x189*((x190/x191)*x192));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t x194 = -26;
	int64_t x195 = 841805329392352LL;
	uint32_t x196 = UINT32_MAX;
	int64_t t38 = 11LL;

    t38 = (x193*((x194/x195)*x196));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x207 = 3673281737LLU;
	int8_t x208 = INT8_MIN;
	static volatile uint64_t t39 = 487036LLU;

    t39 = (x205*((x206/x207)*x208));

    if (t39 != 18446743753445735296LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x217 = INT16_MIN;
	volatile int16_t x218 = -1;
	int8_t x219 = -9;
	uint32_t x220 = 7U;
	volatile uint32_t t40 = 1932953U;

    t40 = (x217*((x218/x219)*x220));

    if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x221 = -44703510LL;
	uint8_t x222 = 118U;
	volatile uint16_t x223 = 4774U;
	static int16_t x224 = 2;
	int64_t t41 = -43342776169674287LL;

    t41 = (x221*((x222/x223)*x224));

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x225 = 30U;
	static int16_t x227 = INT16_MIN;
	uint32_t x228 = UINT32_MAX;
	static volatile uint32_t t42 = 1858406U;

    t42 = (x225*((x226/x227)*x228));

    if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x229 = 3984U;
	static int32_t x230 = INT32_MIN;
	static int32_t x231 = 28;
	uint32_t t43 = 2260U;

    t43 = (x229*((x230/x231)*x232));

    if (t43 != 613564480U) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x233 = INT64_MIN;
	volatile int32_t x234 = 207313;
	static int64_t x235 = INT64_MIN;
	static int8_t x236 = INT8_MIN;
	static int64_t t44 = -2577072025210467435LL;

    t44 = (x233*((x234/x235)*x236));

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x241 = 62427U;
	volatile uint32_t x242 = 1771793019U;
	static uint16_t x244 = 12946U;
	static volatile uint32_t t45 = 15079U;

    t45 = (x241*((x242/x243)*x244));

    if (t45 != 2487029662U) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x245 = 680U;
	uint64_t x246 = 7397340083046501LLU;
	uint32_t x247 = 42U;
	int8_t x248 = INT8_MIN;

    t46 = (x245*((x246/x247)*x248));

    if (t46 != 3116637387319894016LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile uint8_t x249 = 55U;
	uint16_t x250 = 8091U;
	int16_t x251 = INT16_MAX;
	volatile int64_t x252 = INT64_MIN;
	volatile int64_t t47 = 21LL;

    t47 = (x249*((x250/x251)*x252));

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x253 = UINT64_MAX;
	uint16_t x256 = 46U;
	uint64_t t48 = 1LLU;

    t48 = (x253*((x254/x255)*x256));

    if (t48 != 18446744073705361660LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x261 = -1;
	static uint64_t x262 = 52066516792LLU;
	static int8_t x263 = INT8_MAX;
	int32_t x264 = 1179254;
	volatile uint64_t t49 = 1149672922LLU;

    t49 = (x261*((x262/x263)*x264));

    if (t49 != 18446260611912951074LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x269 = INT8_MAX;
	int8_t x272 = -9;
	int32_t t50 = -199772;

    t50 = (x269*((x270/x271)*x272));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x273 = 13329850045450252LL;
	int8_t x274 = INT8_MAX;
	int32_t x276 = -44518145;
	volatile int64_t t51 = -804860240017775LL;

    t51 = (x273*((x274/x275)*x276));

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x281 = INT32_MIN;
	uint16_t x282 = 0U;
	volatile uint16_t x283 = UINT16_MAX;
	static int8_t x284 = INT8_MIN;
	volatile int32_t t52 = -29;

    t52 = (x281*((x282/x283)*x284));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x289 = 31LLU;
	int8_t x290 = INT8_MAX;
	int64_t x291 = 441217470LL;
	static uint32_t x292 = 3044239U;
	static uint64_t t53 = 4971390071337303LLU;

    t53 = (x289*((x290/x291)*x292));

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint64_t x293 = 65003352LLU;
	int16_t x294 = 3561;
	int32_t x295 = INT32_MAX;
	volatile uint64_t x296 = 26324LLU;
	uint64_t t54 = 42229516397LLU;

    t54 = (x293*((x294/x295)*x296));

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x297 = 18365630;
	int32_t x298 = -1;
	volatile int32_t x299 = -1;
	static int64_t x300 = 454575LL;
	int64_t t55 = 1998398776160353218LL;

    t55 = (x297*((x298/x299)*x300));

    if (t55 != 8348556257250LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x301 = INT8_MIN;
	static volatile int8_t x303 = -21;
	uint64_t t56 = 113689270244560LLU;

    t56 = (x301*((x302/x303)*x304));

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int32_t x309 = -1;
	int32_t x310 = INT32_MIN;
	int8_t x311 = INT8_MIN;
	volatile int32_t t57 = -2958819;

    t57 = (x309*((x310/x311)*x312));

    if (t57 != -16777216) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x313 = INT16_MIN;
	int16_t x314 = -3;
	int16_t x315 = INT16_MIN;
	int32_t x316 = -1;
	volatile int32_t t58 = -2467960;

    t58 = (x313*((x314/x315)*x316));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x317 = 10195596U;
	static int32_t x319 = -236;

    t59 = (x317*((x318/x319)*x320));

    if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x322 = 0U;
	volatile uint32_t x323 = 1U;
	volatile uint32_t t60 = 173744U;

    t60 = (x321*((x322/x323)*x324));

    if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x325 = INT8_MAX;
	volatile int8_t x326 = -1;
	volatile int16_t x327 = -2;
	static volatile int16_t x328 = INT16_MIN;
	int32_t t61 = 42;

    t61 = (x325*((x326/x327)*x328));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int8_t x329 = 13;
	uint8_t x330 = 2U;
	int16_t x331 = INT16_MAX;
	static int16_t x332 = INT16_MIN;
	volatile int32_t t62 = -732;

    t62 = (x329*((x330/x331)*x332));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x333 = -1;
	static volatile uint64_t x334 = 1737723LLU;
	static volatile int32_t x335 = -2;
	int32_t x336 = INT32_MIN;
	volatile uint64_t t63 = 21LLU;

    t63 = (x333*((x334/x335)*x336));

    if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x337 = 288;
	static int32_t x338 = INT32_MAX;
	int16_t x339 = INT16_MAX;
	int64_t x340 = -1LL;
	volatile int64_t t64 = -2659017442801LL;

    t64 = (x337*((x338/x339)*x340));

    if (t64 != -18874944LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x341 = 8U;
	volatile int64_t x342 = INT64_MIN;
	int64_t x343 = INT64_MAX;

    t65 = (x341*((x342/x343)*x344));

    if (t65 != 262144LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint16_t x346 = UINT16_MAX;
	int8_t x347 = 9;
	uint32_t x348 = 151U;
	volatile uint32_t t66 = 2U;

    t66 = (x345*((x346/x347)*x348));

    if (t66 != 1665317209U) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x349 = 1;
	int8_t x350 = 3;
	uint16_t x352 = 0U;
	int32_t t67 = -491589852;

    t67 = (x349*((x350/x351)*x352));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x354 = 27U;
	uint32_t x356 = 0U;
	volatile uint64_t t68 = 6385514161LLU;

    t68 = (x353*((x354/x355)*x356));

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x357 = INT32_MIN;
	volatile int8_t x358 = 15;
	int16_t x360 = INT16_MAX;
	volatile uint32_t t69 = 118U;

    t69 = (x357*((x358/x359)*x360));

    if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x361 = INT16_MAX;
	uint64_t x362 = UINT64_MAX;
	static int8_t x363 = 10;
	uint64_t x364 = 279030087LLU;
	volatile uint64_t t70 = 735LLU;

    t70 = (x361*((x362/x363)*x364));

    if (t70 != 16602064180551280017LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x365 = -1LL;
	uint32_t x366 = 973117U;
	int32_t x367 = INT32_MAX;
	int8_t x368 = 28;

    t71 = (x365*((x366/x367)*x368));

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x369 = -1;
	volatile int32_t x370 = INT32_MIN;
	volatile int64_t x371 = INT64_MIN;
	int64_t x372 = -30LL;
	volatile int64_t t72 = 61276900LL;

    t72 = (x369*((x370/x371)*x372));

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x373 = -1LL;
	volatile int8_t x374 = -1;
	volatile int32_t x375 = INT32_MIN;
	int8_t x376 = INT8_MIN;
	volatile int64_t t73 = 16624085109951LL;

    t73 = (x373*((x374/x375)*x376));

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int32_t x381 = INT32_MIN;
	int8_t x383 = 6;
	volatile int32_t t74 = -429630933;

    t74 = (x381*((x382/x383)*x384));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int16_t x386 = -1;
	volatile int32_t x387 = -19527;
	volatile uint32_t t75 = 587162U;

    t75 = (x385*((x386/x387)*x388));

    if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x389 = INT64_MIN;
	int16_t x390 = -1;
	static uint64_t x392 = UINT64_MAX;
	uint64_t t76 = 3497938125717LLU;

    t76 = (x389*((x390/x391)*x392));

    if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x393 = 1049U;
	static int16_t x394 = INT16_MAX;
	int64_t x395 = INT64_MIN;
	volatile int64_t t77 = 1832053376492LL;

    t77 = (x393*((x394/x395)*x396));

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int8_t x397 = 12;
	static volatile int16_t x398 = INT16_MIN;
	volatile int8_t x400 = INT8_MAX;
	int64_t t78 = 1LL;

    t78 = (x397*((x398/x399)*x400));

    if (t78 != 49938432LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x405 = INT32_MIN;
	uint64_t x408 = UINT64_MAX;
	volatile uint64_t t79 = 244LLU;

    t79 = (x405*((x406/x407)*x408));

    if (t79 != 18282041002849992704LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint32_t x409 = UINT32_MAX;
	uint16_t x410 = 47U;
	int64_t x411 = INT64_MIN;
	uint16_t x412 = 0U;

    t80 = (x409*((x410/x411)*x412));

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x413 = INT8_MIN;
	int64_t x414 = INT64_MIN;
	int64_t x415 = INT64_MIN;
	int8_t x416 = INT8_MAX;
	volatile int64_t t81 = 175050025883464LL;

    t81 = (x413*((x414/x415)*x416));

    if (t81 != -16256LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x418 = 353954348U;
	volatile uint32_t x420 = UINT32_MAX;

    t82 = (x417*((x418/x419)*x420));

    if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x425 = 6U;
	int8_t x426 = INT8_MIN;
	static int32_t x427 = INT32_MAX;

    t83 = (x425*((x426/x427)*x428));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x430 = 0;
	static int64_t x431 = 346044LL;
	volatile uint32_t x432 = UINT32_MAX;
	int64_t t84 = -52981878785LL;

    t84 = (x429*((x430/x431)*x432));

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int16_t x433 = INT16_MIN;
	volatile int8_t x434 = INT8_MAX;
	uint16_t x435 = UINT16_MAX;
	int64_t x436 = 82557184586LL;
	int64_t t85 = -2423603158611705584LL;

    t85 = (x433*((x434/x435)*x436));

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x437 = INT32_MIN;
	uint32_t x438 = 6U;
	volatile int64_t x439 = INT64_MAX;
	static int16_t x440 = -22;

    t86 = (x437*((x438/x439)*x440));

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint8_t x441 = UINT8_MAX;
	volatile int16_t x442 = INT16_MAX;
	int64_t x443 = -1LL;

    t87 = (x441*((x442/x443)*x444));

    if (t87 != -547583262975LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x446 = UINT32_MAX;
	int64_t x447 = 7430134701LL;
	int8_t x448 = 3;
	volatile int64_t t88 = 32224179218404881LL;

    t88 = (x445*((x446/x447)*x448));

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint32_t x449 = 14113U;
	int16_t x450 = 0;
	int16_t x451 = 5092;
	int8_t x452 = INT8_MIN;
	static uint32_t t89 = 262460472U;

    t89 = (x449*((x450/x451)*x452));

    if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x454 = -1LL;
	int8_t x455 = INT8_MIN;
	static uint64_t x456 = UINT64_MAX;
	uint64_t t90 = 58202LLU;

    t90 = (x453*((x454/x455)*x456));

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x457 = 1;
	int8_t x458 = INT8_MAX;
	int16_t x459 = INT16_MIN;
	static uint32_t x460 = UINT32_MAX;
	uint32_t t91 = 48U;

    t91 = (x457*((x458/x459)*x460));

    if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x461 = 27U;
	int64_t x462 = -388728486LL;
	uint8_t x463 = 59U;
	volatile int64_t x464 = 188141LL;
	int64_t t92 = 300LL;

    t92 = (x461*((x462/x463)*x464));

    if (t92 != -33468907836726LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x465 = 0;
	int32_t x466 = 371060;
	volatile int8_t x468 = 7;
	int32_t t93 = 170;

    t93 = (x465*((x466/x467)*x468));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x469 = -25;
	static uint64_t x471 = UINT64_MAX;
	volatile uint64_t t94 = 5957688200886821028LLU;

    t94 = (x469*((x470/x471)*x472));

    if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint16_t x473 = UINT16_MAX;
	volatile uint32_t x474 = UINT32_MAX;
	uint8_t x475 = UINT8_MAX;

    t95 = (x473*((x474/x475)*x476));

    if (t95 != 2147483905U) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x477 = INT64_MAX;
	volatile int16_t x478 = INT16_MIN;
	uint64_t x479 = 1LLU;
	volatile uint32_t x480 = 46U;

    t96 = (x477*((x478/x479)*x480));

    if (t96 != 1507328LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x483 = INT32_MAX;
	int8_t x484 = -1;
	volatile int64_t t97 = 143948472412975LL;

    t97 = (x481*((x482/x483)*x484));

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x485 = 22;
	uint8_t x486 = UINT8_MAX;
	uint16_t x487 = 36U;
	static volatile uint32_t t98 = 10140607U;

    t98 = (x485*((x486/x487)*x488));

    if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x489 = 1LLU;
	volatile uint8_t x490 = UINT8_MAX;
	volatile uint32_t x491 = 89894105U;
	uint64_t x492 = 3905LLU;
	static volatile uint64_t t99 = 30714934898LLU;

    t99 = (x489*((x490/x491)*x492));

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x495 = -1;
	uint64_t x496 = 474546774844LLU;
	uint64_t t100 = 174542LLU;

    t100 = (x493*((x494/x495)*x496));

    if (t100 != 12201483408371526084LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x499 = INT8_MIN;
	int32_t x500 = -13;
	volatile int64_t t101 = 424785064LL;

    t101 = (x497*((x498/x499)*x500));

    if (t101 != 539183203140660LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x501 = INT64_MAX;
	static volatile int64_t x504 = INT64_MAX;
	static uint64_t t102 = 3377428LLU;

    t102 = (x501*((x502/x503)*x504));

    if (t102 != 18754068341LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint8_t x505 = 42U;
	uint64_t x508 = 119743756295611LLU;
	static volatile uint64_t t103 = 19LLU;

    t103 = (x505*((x506/x507)*x508));

    if (t103 != 16006506113446863022LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x509 = -193862LL;
	int64_t x511 = INT64_MIN;
	int16_t x512 = 1;
	volatile int64_t t104 = 8334910600LL;

    t104 = (x509*((x510/x511)*x512));

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x513 = -1;
	int16_t x514 = INT16_MIN;
	static uint16_t x515 = UINT16_MAX;
	uint32_t x516 = 73662967U;
	static volatile uint32_t t105 = 12U;

    t105 = (x513*((x514/x515)*x516));

    if (t105 != 0U) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint8_t x518 = 40U;
	int8_t x519 = INT8_MAX;
	static int32_t x520 = -1;
	volatile int64_t t106 = 35030133386LL;

    t106 = (x517*((x518/x519)*x520));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x521 = 440U;
	int8_t x522 = INT8_MIN;
	static int8_t x523 = -1;
	int64_t x524 = 204696LL;
	volatile int64_t t107 = 55687176LL;

    t107 = (x521*((x522/x523)*x524));

    if (t107 != 11528478720LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x525 = 57U;
	static volatile int8_t x528 = -1;
	volatile int32_t t108 = 7693787;

    t108 = (x525*((x526/x527)*x528));

    if (t108 != 1156256571) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x529 = -13;
	volatile int16_t x530 = INT16_MAX;
	uint64_t x532 = 0LLU;
	volatile uint64_t t109 = 445513LLU;

    t109 = (x529*((x530/x531)*x532));

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x533 = -36LL;
	int64_t x534 = INT64_MAX;
	static volatile int8_t x536 = 2;
	int64_t t110 = 11624237199850LL;

    t110 = (x533*((x534/x535)*x536));

    if (t110 != 2819088LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x537 = -17;
	int32_t x538 = INT32_MIN;
	volatile int64_t x539 = -1LL;
	uint16_t x540 = 3U;
	int64_t t111 = -3LL;

    t111 = (x537*((x538/x539)*x540));

    if (t111 != -109521666048LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t x541 = -1;
	int32_t x542 = 0;
	volatile int16_t x543 = -1;
	int8_t x544 = INT8_MIN;

    t112 = (x541*((x542/x543)*x544));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x545 = INT16_MAX;
	int64_t x546 = INT64_MAX;
	uint64_t x547 = 532199LLU;
	volatile uint64_t t113 = 272311196815988460LLU;

    t113 = (x545*((x546/x547)*x548));

    if (t113 != 13225130670820466384LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x549 = 20U;
	volatile uint8_t x550 = UINT8_MAX;
	int8_t x552 = INT8_MIN;
	static volatile uint32_t t114 = 891805U;

    t114 = (x549*((x550/x551)*x552));

    if (t114 != 2560U) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x557 = UINT32_MAX;
	static volatile uint32_t x558 = 42U;
	int8_t x559 = -1;
	int8_t x560 = INT8_MIN;
	uint32_t t115 = 15999U;

    t115 = (x557*((x558/x559)*x560));

    if (t115 != 0U) { NG(); } else { ; }
	
}

void f116(void) {
    	static int64_t x561 = -1LL;
	uint16_t x562 = UINT16_MAX;
	volatile uint8_t x563 = 125U;
	int8_t x564 = INT8_MIN;
	static int64_t t116 = -261742899451LL;

    t116 = (x561*((x562/x563)*x564));

    if (t116 != 67072LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x569 = UINT64_MAX;
	int16_t x570 = -1;
	volatile int64_t x571 = INT64_MAX;
	uint16_t x572 = 59U;
	uint64_t t117 = 78781055911725LLU;

    t117 = (x569*((x570/x571)*x572));

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x577 = UINT16_MAX;
	static int16_t x578 = 3;
	volatile int32_t x579 = INT32_MIN;
	int32_t x580 = -1;
	volatile int32_t t118 = -44221365;

    t118 = (x577*((x578/x579)*x580));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x581 = -1;
	uint8_t x582 = UINT8_MAX;
	int64_t x583 = 42263LL;
	volatile int8_t x584 = 1;
	int64_t t119 = -136142LL;

    t119 = (x581*((x582/x583)*x584));

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint64_t x593 = 1535401462083770731LLU;
	volatile uint16_t x594 = UINT16_MAX;
	int32_t x595 = -11586370;
	volatile int32_t x596 = -1;
	volatile uint64_t t120 = 598LLU;

    t120 = (x593*((x594/x595)*x596));

    if (t120 != 0LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint16_t x597 = 1140U;
	int16_t x598 = 2008;
	static int64_t x599 = -1559093LL;
	static int8_t x600 = 0;
	volatile int64_t t121 = 12370LL;

    t121 = (x597*((x598/x599)*x600));

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x601 = -5;
	static int16_t x603 = INT16_MIN;
	int16_t x604 = 57;
	int64_t t122 = 983177282LL;

    t122 = (x601*((x602/x603)*x604));

    if (t122 != 80220368362536675LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile uint16_t x605 = UINT16_MAX;
	uint64_t x606 = 236509LLU;
	int64_t x607 = INT64_MAX;
	int16_t x608 = INT16_MIN;

    t123 = (x605*((x606/x607)*x608));

    if (t123 != 0LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x609 = -5804624299LL;
	int64_t x610 = INT64_MIN;
	int32_t x611 = INT32_MIN;
	int32_t x612 = 0;
	int64_t t124 = -4344593714173LL;

    t124 = (x609*((x610/x611)*x612));

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int8_t x613 = -1;
	int8_t x614 = 0;
	int32_t x616 = -1;

    t125 = (x613*((x614/x615)*x616));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x617 = 10U;
	uint32_t x618 = 318U;
	int8_t x620 = 12;
	static volatile uint32_t t126 = 3264071U;

    t126 = (x617*((x618/x619)*x620));

    if (t126 != 120U) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x621 = -664302801999LL;
	int32_t x622 = INT32_MAX;
	volatile uint8_t x623 = UINT8_MAX;
	volatile int64_t t127 = 21816LL;

    t127 = (x621*((x622/x623)*x624));

    if (t127 != 5594428704245786496LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x625 = -1;
	int16_t x626 = -1;
	int8_t x627 = INT8_MIN;
	uint64_t x628 = 166196140761396008LLU;

    t128 = (x625*((x626/x627)*x628));

    if (t128 != 0LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x629 = INT32_MAX;
	volatile uint64_t x631 = 116101LLU;
	uint8_t x632 = 16U;
	static uint64_t t129 = 124301404088373846LLU;

    t129 = (x629*((x630/x631)*x632));

    if (t129 != 17764331641081087184LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x633 = -4;
	static int16_t x634 = INT16_MIN;
	int64_t x636 = INT64_MIN;
	int64_t t130 = 219871620995LL;

    t130 = (x633*((x634/x635)*x636));

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x637 = INT16_MIN;
	volatile int16_t x639 = INT16_MIN;
	int16_t x640 = INT16_MAX;

    t131 = (x637*((x638/x639)*x640));

    if (t131 != -1073709056) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x646 = INT32_MAX;
	volatile int64_t x647 = INT64_MIN;

    t132 = (x645*((x646/x647)*x648));

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x661 = -1;
	int8_t x664 = -1;
	int32_t t133 = 138783103;

    t133 = (x661*((x662/x663)*x664));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x665 = -1;
	int16_t x666 = INT16_MAX;
	int16_t x667 = 1;
	static volatile int32_t t134 = 8;

    t134 = (x665*((x666/x667)*x668));

    if (t134 != -32767) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x669 = INT32_MIN;
	int16_t x670 = INT16_MIN;
	static uint32_t x671 = UINT32_MAX;
	int64_t t135 = 1712936004646744485LL;

    t135 = (x669*((x670/x671)*x672));

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static int32_t x673 = 0;
	int32_t x674 = INT32_MAX;
	static volatile int8_t x676 = INT8_MIN;
	volatile uint64_t t136 = 252561440644156382LLU;

    t136 = (x673*((x674/x675)*x676));

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x677 = 2086533213U;
	static int32_t x679 = INT32_MIN;
	int32_t x680 = INT32_MIN;
	static uint32_t t137 = 3906U;

    t137 = (x677*((x678/x679)*x680));

    if (t137 != 0U) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x681 = UINT16_MAX;
	uint32_t x682 = 881050412U;
	int64_t t138 = 21987748LL;

    t138 = (x681*((x682/x683)*x684));

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x685 = UINT64_MAX;
	static uint8_t x686 = 3U;
	volatile int32_t x688 = -1;

    t139 = (x685*((x686/x687)*x688));

    if (t139 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x691 = INT16_MAX;
	int8_t x692 = INT8_MIN;

    t140 = (x689*((x690/x691)*x692));

    if (t140 != 0LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x693 = 76;
	int32_t x694 = -232311558;
	uint64_t x695 = 99009359238349637LLU;
	int8_t x696 = INT8_MIN;

    t141 = (x693*((x694/x695)*x696));

    if (t141 != 18446744073707742208LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint32_t x697 = 23304U;
	static int32_t x698 = INT32_MAX;
	volatile uint64_t x700 = 222LLU;
	uint64_t t142 = 773290399328LLU;

    t142 = (x697*((x698/x699)*x700));

    if (t142 != 1442290852080LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x702 = -2369;
	volatile int32_t x703 = 333732362;
	uint32_t t143 = 1284456075U;

    t143 = (x701*((x702/x703)*x704));

    if (t143 != 0U) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x705 = 794523569726LLU;
	uint16_t x706 = 31544U;
	uint16_t x707 = UINT16_MAX;
	static int32_t x708 = -1;
	volatile uint64_t t144 = 12LLU;

    t144 = (x705*((x706/x707)*x708));

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x713 = INT32_MIN;
	int32_t x714 = INT32_MIN;
	static volatile int64_t x715 = INT64_MAX;
	uint64_t x716 = 14174169187544289LLU;
	uint64_t t145 = 11306293LLU;

    t145 = (x713*((x714/x715)*x716));

    if (t145 != 0LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x721 = UINT16_MAX;
	static uint16_t x722 = 0U;
	uint64_t x724 = 8795686765324150057LLU;
	uint64_t t146 = 15LLU;

    t146 = (x721*((x722/x723)*x724));

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint16_t x725 = 17879U;
	static uint8_t x726 = UINT8_MAX;
	volatile int32_t x727 = -1;
	volatile uint16_t x728 = 7U;
	int32_t t147 = 7364877;

    t147 = (x725*((x726/x727)*x728));

    if (t147 != -31914015) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile uint8_t x730 = UINT8_MAX;
	int32_t x731 = INT32_MIN;
	static int32_t x732 = INT32_MIN;
	static volatile int32_t t148 = 103;

    t148 = (x729*((x730/x731)*x732));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int8_t x733 = -3;
	int16_t x734 = 677;
	volatile int16_t x736 = 92;
	volatile uint64_t t149 = 14LLU;

    t149 = (x733*((x734/x735)*x736));

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x737 = 0U;
	int32_t x739 = 189;
	uint32_t x740 = UINT32_MAX;
	volatile uint32_t t150 = 21925U;

    t150 = (x737*((x738/x739)*x740));

    if (t150 != 0U) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int64_t x741 = 6LL;
	int32_t x742 = INT32_MAX;
	int8_t x743 = INT8_MIN;
	uint64_t x744 = UINT64_MAX;

    t151 = (x741*((x742/x743)*x744));

    if (t151 != 100663290LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x746 = 15315U;
	volatile int32_t x747 = INT32_MIN;
	int64_t x748 = INT64_MAX;
	int64_t t152 = -5871448277LL;

    t152 = (x745*((x746/x747)*x748));

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x749 = -1LL;
	uint32_t x750 = 690095U;
	int8_t x751 = INT8_MIN;
	int8_t x752 = INT8_MAX;
	volatile int64_t t153 = 58034580544LL;

    t153 = (x749*((x750/x751)*x752));

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x753 = -7;
	volatile uint64_t x754 = UINT64_MAX;
	int8_t x755 = INT8_MIN;
	static int64_t x756 = 6512008104359LL;
	volatile uint64_t t154 = 227631644LLU;

    t154 = (x753*((x754/x755)*x756));

    if (t154 != 18446698489652821103LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x761 = INT16_MIN;
	static volatile int32_t x763 = -1;
	uint32_t x764 = UINT32_MAX;

    t155 = (x761*((x762/x763)*x764));

    if (t155 != 4294246400U) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x765 = 14;
	uint16_t x766 = 11203U;
	uint32_t x767 = 245101U;
	int32_t x768 = -7543395;
	uint32_t t156 = 2811U;

    t156 = (x765*((x766/x767)*x768));

    if (t156 != 0U) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x777 = 2730473629239158339LLU;
	int16_t x779 = 5;

    t157 = (x777*((x778/x779)*x780));

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x789 = UINT32_MAX;
	int16_t x791 = INT16_MIN;
	int32_t x792 = 35160;

    t158 = (x789*((x790/x791)*x792));

    if (t158 != 0U) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x797 = -1LL;
	uint64_t x798 = 384921LLU;
	uint16_t x799 = 145U;
	uint64_t x800 = 30329LLU;
	volatile uint64_t t159 = 84LLU;

    t159 = (x797*((x798/x799)*x800));

    if (t159 != 18446744073629058450LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x801 = INT64_MIN;
	int16_t x802 = 1257;
	uint16_t x803 = 29217U;
	static volatile int32_t x804 = INT32_MIN;
	static int64_t t160 = -66LL;

    t160 = (x801*((x802/x803)*x804));

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x805 = 209;
	volatile int64_t x807 = INT64_MIN;

    t161 = (x805*((x806/x807)*x808));

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x809 = UINT32_MAX;
	int32_t x810 = -1;
	int32_t x811 = INT32_MAX;
	uint8_t x812 = UINT8_MAX;
	volatile uint32_t t162 = 4U;

    t162 = (x809*((x810/x811)*x812));

    if (t162 != 0U) { NG(); } else { ; }
	
}

void f163(void) {
    	static int8_t x814 = 3;
	static int32_t x815 = 473965;

    t163 = (x813*((x814/x815)*x816));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x829 = INT32_MIN;
	static int16_t x830 = 21;
	static int16_t x832 = INT16_MIN;
	volatile int64_t t164 = -44340465407770999LL;

    t164 = (x829*((x830/x831)*x832));

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x833 = 341U;
	static int32_t x834 = -1;
	int64_t x835 = -1LL;
	volatile int64_t x836 = -1932608LL;
	static volatile int64_t t165 = 1714626613244LL;

    t165 = (x833*((x834/x835)*x836));

    if (t165 != -659019328LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint64_t x837 = 262571177450105LLU;
	int32_t x838 = -23;
	int8_t x839 = INT8_MAX;
	uint8_t x840 = 11U;
	static uint64_t t166 = 1544981LLU;

    t166 = (x837*((x838/x839)*x840));

    if (t166 != 0LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x841 = -5;
	static int32_t x842 = -1;
	static int16_t x843 = -1;
	static int16_t x844 = -4;
	volatile int32_t t167 = 1384189;

    t167 = (x841*((x842/x843)*x844));

    if (t167 != 20) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x845 = 78122954U;
	uint32_t x846 = 205570U;
	uint64_t x847 = UINT64_MAX;
	uint8_t x848 = UINT8_MAX;
	volatile uint64_t t168 = 1052823LLU;

    t168 = (x845*((x846/x847)*x848));

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x851 = -12640162938192212LL;
	int16_t x852 = 20;
	volatile int64_t t169 = -77LL;

    t169 = (x849*((x850/x851)*x852));

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static int64_t x857 = 209406612LL;
	int16_t x859 = -1;
	volatile int16_t x860 = -185;
	volatile int64_t t170 = 254528264855464LL;

    t170 = (x857*((x858/x859)*x860));

    if (t170 != -38740223220LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x861 = INT8_MIN;
	uint32_t x862 = 235U;
	int8_t x863 = INT8_MAX;
	uint64_t x864 = UINT64_MAX;
	volatile uint64_t t171 = 820651099681405661LLU;

    t171 = (x861*((x862/x863)*x864));

    if (t171 != 128LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x865 = INT8_MAX;
	uint32_t x866 = 720022518U;
	int16_t x868 = INT16_MIN;
	int64_t t172 = 50210877LL;

    t172 = (x865*((x866/x867)*x868));

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x877 = INT32_MIN;
	int16_t x878 = INT16_MAX;
	static int16_t x879 = INT16_MIN;
	volatile int32_t t173 = -59;

    t173 = (x877*((x878/x879)*x880));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x881 = UINT64_MAX;
	int16_t x883 = 15;
	volatile uint64_t t174 = 281117LLU;

    t174 = (x881*((x882/x883)*x884));

    if (t174 != 32143967LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile int16_t x885 = 3;
	int32_t x886 = INT32_MAX;
	volatile int32_t x887 = INT32_MIN;
	int8_t x888 = INT8_MAX;

    t175 = (x885*((x886/x887)*x888));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x889 = -11784114164513860LL;
	uint32_t x890 = UINT32_MAX;
	volatile uint64_t x891 = 35306149928495LLU;
	static int64_t x892 = INT64_MAX;
	volatile uint64_t t176 = 879712LLU;

    t176 = (x889*((x890/x891)*x892));

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x893 = 1U;
	uint16_t x894 = 5U;
	int64_t x895 = INT64_MIN;
	int32_t x896 = INT32_MIN;
	volatile int64_t t177 = -927251050096LL;

    t177 = (x893*((x894/x895)*x896));

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x897 = UINT32_MAX;
	int32_t x898 = -3374;
	volatile int8_t x899 = 29;
	uint32_t x900 = 188218U;

    t178 = (x897*((x898/x899)*x900));

    if (t178 != 21833288U) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x905 = UINT64_MAX;
	static uint16_t x906 = UINT16_MAX;
	int16_t x907 = -1;
	uint32_t x908 = 3U;
	volatile uint64_t t179 = 14LLU;

    t179 = (x905*((x906/x907)*x908));

    if (t179 != 18446744069414780925LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x914 = UINT16_MAX;
	int32_t x915 = INT32_MIN;
	uint32_t x916 = 10U;
	volatile uint32_t t180 = 28972571U;

    t180 = (x913*((x914/x915)*x916));

    if (t180 != 0U) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint32_t x917 = 359972260U;
	int32_t x919 = INT32_MAX;

    t181 = (x917*((x918/x919)*x920));

    if (t181 != 0U) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x921 = INT32_MAX;
	volatile int64_t x923 = 1149345LL;
	volatile int32_t x924 = INT32_MIN;
	volatile int64_t t182 = 17970LL;

    t182 = (x921*((x922/x923)*x924));

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x929 = 30288U;
	volatile int64_t t183 = 24510252664585100LL;

    t183 = (x929*((x930/x931)*x932));

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x934 = INT32_MIN;
	static int64_t x935 = -7128908LL;
	int8_t x936 = 1;
	volatile int64_t t184 = -10811947782LL;

    t184 = (x933*((x934/x935)*x936));

    if (t184 != 261569LL) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x937 = INT8_MAX;
	int64_t x938 = -101145875748333251LL;
	volatile int16_t x939 = 114;
	int8_t x940 = -1;

    t185 = (x937*((x938/x939)*x940));

    if (t185 != 112680054561739622LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x949 = -1LL;
	int32_t x950 = INT32_MIN;
	int64_t x951 = 788LL;

    t186 = (x949*((x950/x951)*x952));

    if (t186 != 346104591LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x953 = UINT32_MAX;
	volatile int16_t x954 = -3226;
	int32_t x955 = 4320702;
	static uint64_t x956 = 125414LLU;
	volatile uint64_t t187 = 1204638002813294444LLU;

    t187 = (x953*((x954/x955)*x956));

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x961 = 0U;
	int16_t x962 = -1;
	static int16_t x963 = INT16_MIN;

    t188 = (x961*((x962/x963)*x964));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x965 = -1;
	int64_t x966 = INT64_MAX;
	uint64_t x967 = 17000152245254188LLU;
	static int8_t x968 = -56;
	static volatile uint64_t t189 = 14265524174LLU;

    t189 = (x965*((x966/x967)*x968));

    if (t189 != 30352LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x969 = 61238U;
	volatile uint8_t x970 = 0U;
	int16_t x971 = -10;
	volatile int64_t x972 = INT64_MIN;
	int64_t t190 = -61849431605LL;

    t190 = (x969*((x970/x971)*x972));

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x973 = -1;
	int32_t x974 = -1;
	uint8_t x975 = UINT8_MAX;
	volatile int16_t x976 = 1;
	volatile int32_t t191 = -24;

    t191 = (x973*((x974/x975)*x976));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint16_t x977 = 2U;
	static int64_t x978 = -726323248166LL;
	volatile int32_t x979 = INT32_MIN;
	int32_t x980 = -1;
	int64_t t192 = 3795536296960139LL;

    t192 = (x977*((x978/x979)*x980));

    if (t192 != -676LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x987 = 58U;
	static int32_t t193 = 8729422;

    t193 = (x985*((x986/x987)*x988));

    if (t193 != 9010) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x989 = -491152072;
	static uint8_t x990 = UINT8_MAX;
	volatile int64_t x991 = INT64_MIN;
	int64_t x992 = -1LL;

    t194 = (x989*((x990/x991)*x992));

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static int32_t x1001 = -1;
	uint8_t x1002 = 1U;
	int16_t x1004 = 10483;

    t195 = (x1001*((x1002/x1003)*x1004));

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x1005 = INT16_MIN;
	volatile int8_t x1006 = INT8_MIN;
	volatile int32_t t196 = -14051;

    t196 = (x1005*((x1006/x1007)*x1008));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x1009 = -1;
	volatile uint8_t x1010 = 1U;
	uint32_t t197 = 453520939U;

    t197 = (x1009*((x1010/x1011)*x1012));

    if (t197 != 0U) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x1013 = 266U;
	uint32_t x1014 = 21361841U;
	volatile uint32_t x1015 = 58U;
	static int64_t x1016 = -1LL;
	int64_t t198 = -6LL;

    t198 = (x1013*((x1014/x1015)*x1016));

    if (t198 != -97969662LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile uint32_t x1017 = 91754250U;
	uint8_t x1018 = 4U;
	int8_t x1019 = INT8_MIN;
	static int8_t x1020 = INT8_MIN;

    t199 = (x1017*((x1018/x1019)*x1020));

    if (t199 != 0U) { NG(); } else { ; }
	
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

