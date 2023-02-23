
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

uint16_t x5 = UINT16_MAX;
uint8_t x9 = UINT8_MAX;
static int32_t t2 = 0;
volatile uint16_t x15 = 127U;
volatile uint32_t t4 = 3384644U;
int64_t t5 = -47671396187279826LL;
static int32_t x30 = -1;
uint64_t t7 = 26710894LLU;
int64_t x34 = INT64_MIN;
volatile int32_t t8 = -215380589;
int8_t x42 = -1;
static uint16_t x49 = UINT16_MAX;
int32_t x52 = -397976;
int64_t t13 = -25690553715208LL;
volatile int32_t x69 = -3;
int64_t x70 = -1LL;
volatile int16_t x76 = -7;
volatile int32_t t19 = -22649261;
uint16_t x82 = UINT16_MAX;
static int64_t t20 = -2566LL;
int16_t x85 = 109;
int32_t t21 = -175388;
int64_t x89 = -55272883704835LL;
volatile int8_t x93 = -1;
static int16_t x95 = 223;
int32_t x101 = -16;
uint8_t x106 = UINT8_MAX;
uint8_t x114 = 72U;
volatile int64_t x116 = INT64_MIN;
volatile int64_t t28 = 282LL;
static int16_t x117 = 6731;
static int32_t x121 = INT32_MAX;
uint8_t x130 = 48U;
volatile uint8_t x135 = 2U;
int64_t x136 = INT64_MAX;
volatile int64_t x146 = INT64_MAX;
int32_t t36 = 0;
volatile int32_t t37 = -394;
volatile int8_t x156 = -2;
int16_t x158 = INT16_MIN;
uint16_t x161 = 5U;
int64_t x163 = 19188294075823709LL;
static volatile int32_t t42 = -1;
static volatile uint64_t t43 = 32184488199420LLU;
int32_t x187 = INT32_MIN;
static int32_t t47 = 8329139;
int32_t x193 = INT32_MIN;
static int16_t x194 = -1;
static int64_t t48 = 102358691604860LL;
uint32_t x211 = UINT32_MAX;
volatile int32_t t52 = 2632892;
static uint32_t x213 = 1U;
volatile uint8_t x216 = 3U;
int32_t x218 = INT32_MAX;
int64_t x220 = INT64_MIN;
int8_t x222 = 7;
volatile int64_t x223 = 161123707886LL;
int64_t x230 = -1431475396503LL;
volatile int64_t x235 = 73370LL;
int16_t x236 = -1695;
volatile int32_t t58 = -31191;
int64_t t59 = 1133171322209488894LL;
uint32_t x244 = UINT32_MAX;
uint32_t t60 = 161858098U;
static uint32_t x263 = UINT32_MAX;
volatile int64_t t66 = 323333213154681LL;
static volatile int8_t x269 = -1;
int8_t x285 = 3;
int8_t x299 = -10;
volatile int8_t x312 = -1;
static volatile int64_t t77 = 162404489342LL;
int32_t x324 = INT32_MAX;
volatile int64_t t81 = 25107397457587LL;
uint8_t x334 = 110U;
uint16_t x340 = 1U;
int8_t x342 = -1;
volatile int32_t t85 = 3982;
uint32_t x346 = UINT32_MAX;
static uint16_t x368 = UINT16_MAX;
static int8_t x369 = INT8_MIN;
volatile int32_t t93 = -11948547;
uint8_t x384 = 5U;
uint16_t x387 = UINT16_MAX;
volatile int32_t t99 = -77463;
static uint64_t x401 = 4415278412875626490LLU;
int16_t x403 = -1;
uint16_t x432 = 1U;
static int16_t x434 = INT16_MIN;
int16_t x437 = INT16_MIN;
static volatile int32_t x440 = INT32_MAX;
int16_t x441 = -1632;
int64_t x464 = INT64_MIN;
int8_t x466 = 1;
int32_t x467 = INT32_MIN;
int8_t x468 = INT8_MAX;
int8_t x470 = INT8_MIN;
uint8_t x471 = UINT8_MAX;
uint64_t x477 = 782LLU;
int16_t x488 = INT16_MIN;
volatile uint64_t x500 = UINT64_MAX;
static volatile uint64_t t124 = 133070183796575734LLU;
int64_t x501 = INT64_MAX;
int64_t t125 = -361423368998714LL;
volatile int8_t x512 = INT8_MIN;
volatile int32_t t127 = -5625;
int32_t x516 = INT32_MAX;
uint64_t x521 = 101116LLU;
int8_t x525 = -1;
uint8_t x526 = 1U;
volatile uint64_t x528 = UINT64_MAX;
static int64_t x547 = -29645978726163LL;
int32_t t136 = -34174;
int32_t x549 = -1;
static volatile uint16_t x555 = UINT16_MAX;
int32_t x556 = INT32_MIN;
int8_t x559 = -7;
volatile uint32_t x562 = 54007U;
int8_t x566 = 1;
int8_t x571 = INT8_MIN;
uint16_t x576 = UINT16_MAX;
int32_t t144 = -10;
uint64_t x584 = UINT64_MAX;
int8_t x588 = -1;
int64_t x591 = INT64_MIN;
int8_t x592 = INT8_MIN;
static int32_t x593 = -1;
int16_t x596 = -1;
int64_t x599 = 514457LL;
uint8_t x603 = UINT8_MAX;
int32_t x611 = INT32_MAX;
int16_t x613 = INT16_MAX;
static int32_t t153 = 19466;
int16_t x619 = -106;
int16_t x621 = -287;
int64_t x622 = INT64_MIN;
volatile int32_t x623 = -1;
volatile int32_t t155 = 403905;
uint16_t x625 = 24U;
int32_t t156 = -81;
int64_t x632 = INT64_MIN;
volatile int64_t t157 = 36387611LL;
uint16_t x633 = 3339U;
int32_t x636 = INT32_MIN;
volatile int32_t t158 = -9943;
static int64_t x639 = -52932LL;
volatile int64_t x642 = INT64_MIN;
int16_t x643 = -56;
int8_t x645 = INT8_MIN;
int32_t x646 = 13;
int8_t x649 = -1;
int8_t x650 = INT8_MIN;
uint32_t t164 = 13U;
static uint8_t x661 = 34U;
int32_t x662 = -430165616;
volatile int64_t x667 = 1163552LL;
int32_t x669 = -50425620;
int32_t t167 = -1532;
static int8_t x673 = INT8_MAX;
static int8_t x680 = -2;
int16_t x681 = INT16_MAX;
volatile int32_t t170 = -61221488;
uint64_t x694 = UINT64_MAX;
uint64_t x710 = UINT64_MAX;
int64_t x711 = INT64_MIN;
int32_t t179 = 725;
int32_t x724 = -1;
uint8_t x729 = 20U;
static volatile int8_t x730 = INT8_MIN;
int16_t x738 = -1;
int8_t x739 = INT8_MAX;
static int64_t x741 = INT64_MIN;
static int8_t x747 = INT8_MIN;
int8_t x748 = INT8_MIN;
volatile int8_t x749 = 0;
int64_t t187 = -1395308589482493LL;
static int64_t x754 = -1LL;
int32_t x764 = INT32_MAX;
int64_t x767 = -23969786294690446LL;
uint16_t x777 = UINT16_MAX;
static uint16_t x788 = 0U;
static uint16_t x795 = UINT16_MAX;


void f0(void) {
    	uint16_t x1 = UINT16_MAX;
	int64_t x2 = -644639139004LL;
	int8_t x3 = INT8_MIN;
	uint16_t x4 = 502U;
	static volatile int32_t t0 = -2706;

    t0 = (x1&((x2==x3)*x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x6 = -9;
	int64_t x7 = -1LL;
	uint64_t x8 = UINT64_MAX;
	volatile uint64_t t1 = 407970LLU;

    t1 = (x5&((x6==x7)*x8));

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x10 = INT32_MAX;
	volatile uint32_t x11 = UINT32_MAX;
	int16_t x12 = -1;

    t2 = (x9&((x10==x11)*x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MAX;
	uint16_t x14 = 5156U;
	volatile int32_t x16 = 557765;
	static int32_t t3 = -1996293;

    t3 = (x13&((x14==x15)*x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = UINT32_MAX;
	uint16_t x18 = 5U;
	volatile int8_t x19 = 13;
	volatile int16_t x20 = 104;

    t4 = (x17&((x18==x19)*x20));

    if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = -1LL;
	static volatile int64_t x22 = INT64_MAX;
	volatile int64_t x23 = -1LL;
	uint32_t x24 = 1942909191U;

    t5 = (x21&((x22==x23)*x24));

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x25 = 0U;
	static int16_t x26 = -5961;
	volatile int64_t x27 = -17LL;
	static int8_t x28 = -20;
	volatile int32_t t6 = 415160270;

    t6 = (x25&((x26==x27)*x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x29 = -22;
	uint64_t x31 = 3217351774LLU;
	volatile uint64_t x32 = UINT64_MAX;

    t7 = (x29&((x30==x31)*x32));

    if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static int32_t x33 = 268986796;
	static volatile int16_t x35 = INT16_MAX;
	int16_t x36 = -84;

    t8 = (x33&((x34==x35)*x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x37 = -1LL;
	static uint8_t x38 = UINT8_MAX;
	int16_t x39 = INT16_MAX;
	int16_t x40 = -3441;
	volatile int64_t t9 = -1732082LL;

    t9 = (x37&((x38==x39)*x40));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = INT16_MAX;
	uint16_t x43 = 2146U;
	volatile uint64_t x44 = 2890385LLU;
	uint64_t t10 = 4762741488716239567LLU;

    t10 = (x41&((x42==x43)*x44));

    if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = INT8_MIN;
	int16_t x46 = INT16_MIN;
	static uint8_t x47 = UINT8_MAX;
	uint8_t x48 = 1U;
	volatile int32_t t11 = 924737830;

    t11 = (x45&((x46==x47)*x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x50 = 156U;
	int8_t x51 = INT8_MAX;
	volatile int32_t t12 = 0;

    t12 = (x49&((x50==x51)*x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x53 = INT64_MIN;
	volatile int8_t x54 = -10;
	uint32_t x55 = 1119U;
	uint16_t x56 = 4U;

    t13 = (x53&((x54==x55)*x56));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = INT16_MIN;
	static int64_t x58 = INT64_MAX;
	uint16_t x59 = 94U;
	int8_t x60 = -1;
	volatile int32_t t14 = 876735106;

    t14 = (x57&((x58==x59)*x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = INT16_MIN;
	volatile int64_t x62 = -290795275767726955LL;
	uint16_t x63 = 58U;
	volatile int16_t x64 = INT16_MIN;
	int32_t t15 = -8;

    t15 = (x61&((x62==x63)*x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = INT8_MIN;
	uint32_t x66 = 1694U;
	int64_t x67 = -37073154684662LL;
	int8_t x68 = 1;
	volatile int32_t t16 = 10776;

    t16 = (x65&((x66==x67)*x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x71 = UINT8_MAX;
	static int32_t x72 = 1;
	int32_t t17 = -101895;

    t17 = (x69&((x70==x71)*x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = 136085387236245LL;
	int64_t x74 = -1LL;
	uint8_t x75 = 33U;
	volatile int64_t t18 = -7452839594LL;

    t18 = (x73&((x74==x75)*x76));

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = -2;
	uint64_t x78 = 1025268333032717LLU;
	int64_t x79 = INT64_MAX;
	uint16_t x80 = 9U;

    t19 = (x77&((x78==x79)*x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int16_t x81 = -1;
	uint32_t x83 = UINT32_MAX;
	int64_t x84 = -1LL;

    t20 = (x81&((x82==x83)*x84));

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint16_t x86 = UINT16_MAX;
	uint16_t x87 = UINT16_MAX;
	static uint16_t x88 = 19U;

    t21 = (x85&((x86==x87)*x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x90 = INT64_MIN;
	static int32_t x91 = INT32_MAX;
	uint16_t x92 = UINT16_MAX;
	int64_t t22 = -11LL;

    t22 = (x89&((x90==x91)*x92));

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int32_t x94 = 3646464;
	volatile int16_t x96 = -1;
	volatile int32_t t23 = -92;

    t23 = (x93&((x94==x95)*x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = -207051;
	static int64_t x98 = INT64_MAX;
	int64_t x99 = -1LL;
	int16_t x100 = 110;
	int32_t t24 = -27765;

    t24 = (x97&((x98==x99)*x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x102 = -1;
	int8_t x103 = -1;
	int16_t x104 = -1;
	static volatile int32_t t25 = 3114;

    t25 = (x101&((x102==x103)*x104));

    if (t25 != -16) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = INT16_MIN;
	volatile int64_t x107 = 42901538985970LL;
	volatile int16_t x108 = 12019;
	volatile int32_t t26 = 191700801;

    t26 = (x105&((x106==x107)*x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = INT32_MAX;
	int8_t x110 = INT8_MIN;
	uint8_t x111 = 0U;
	int16_t x112 = 2617;
	static int32_t t27 = 25830243;

    t27 = (x109&((x110==x111)*x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x113 = 139070;
	int8_t x115 = INT8_MIN;

    t28 = (x113&((x114==x115)*x116));

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x118 = INT32_MIN;
	int16_t x119 = INT16_MIN;
	uint16_t x120 = UINT16_MAX;
	static int32_t t29 = 4370188;

    t29 = (x117&((x118==x119)*x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile uint8_t x122 = UINT8_MAX;
	int8_t x123 = -1;
	static volatile int32_t x124 = 44514312;
	int32_t t30 = -54504;

    t30 = (x121&((x122==x123)*x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint64_t x125 = 106238038LLU;
	int64_t x126 = -16825832LL;
	uint16_t x127 = 15086U;
	int64_t x128 = -1LL;
	static uint64_t t31 = 17281653406832LLU;

    t31 = (x125&((x126==x127)*x128));

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint64_t x129 = UINT64_MAX;
	volatile uint16_t x131 = 3601U;
	static volatile uint32_t x132 = UINT32_MAX;
	volatile uint64_t t32 = 27208663571566LLU;

    t32 = (x129&((x130==x131)*x132));

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = -6824284;
	static uint64_t x134 = 8420035265LLU;
	int64_t t33 = 14044656085LL;

    t33 = (x133&((x134==x135)*x136));

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = -1;
	int32_t x138 = INT32_MIN;
	int8_t x139 = 0;
	uint16_t x140 = 24U;
	volatile int32_t t34 = 1070266270;

    t34 = (x137&((x138==x139)*x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x141 = 21394U;
	uint64_t x142 = UINT64_MAX;
	uint8_t x143 = UINT8_MAX;
	int64_t x144 = -513195438265LL;
	int64_t t35 = 98938LL;

    t35 = (x141&((x142==x143)*x144));

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x145 = 28U;
	int8_t x147 = INT8_MIN;
	static volatile int8_t x148 = INT8_MAX;

    t36 = (x145&((x146==x147)*x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x149 = INT32_MIN;
	uint8_t x150 = 31U;
	volatile uint16_t x151 = UINT16_MAX;
	volatile int16_t x152 = INT16_MIN;

    t37 = (x149&((x150==x151)*x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x153 = 13983LLU;
	static volatile uint32_t x154 = 8224926U;
	static uint64_t x155 = 20653106078872LLU;
	volatile uint64_t t38 = 54331303594LLU;

    t38 = (x153&((x154==x155)*x156));

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x157 = INT64_MIN;
	int8_t x159 = INT8_MAX;
	volatile int32_t x160 = 10;
	int64_t t39 = 21382506LL;

    t39 = (x157&((x158==x159)*x160));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x162 = 454697788;
	int8_t x164 = -1;
	int32_t t40 = 2798180;

    t40 = (x161&((x162==x163)*x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile uint64_t x165 = 72948LLU;
	static uint32_t x166 = UINT32_MAX;
	static int16_t x167 = -1;
	int32_t x168 = -1;
	volatile uint64_t t41 = 28056954590460107LLU;

    t41 = (x165&((x166==x167)*x168));

    if (t41 != 72948LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x169 = INT32_MAX;
	int64_t x170 = INT64_MIN;
	int64_t x171 = -1LL;
	int32_t x172 = -1;

    t42 = (x169&((x170==x171)*x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x173 = 225462LL;
	volatile uint8_t x174 = 14U;
	uint64_t x175 = UINT64_MAX;
	volatile uint64_t x176 = UINT64_MAX;

    t43 = (x173&((x174==x175)*x176));

    if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x177 = UINT32_MAX;
	uint64_t x178 = 25LLU;
	static uint32_t x179 = UINT32_MAX;
	uint64_t x180 = 1732676034282LLU;
	volatile uint64_t t44 = 222806244LLU;

    t44 = (x177&((x178==x179)*x180));

    if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x181 = -205;
	int8_t x182 = -1;
	int16_t x183 = INT16_MIN;
	uint64_t x184 = UINT64_MAX;
	uint64_t t45 = 1356209791083742355LLU;

    t45 = (x181&((x182==x183)*x184));

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x185 = INT32_MAX;
	int8_t x186 = 3;
	uint64_t x188 = 1655379206LLU;
	volatile uint64_t t46 = 10LLU;

    t46 = (x185&((x186==x187)*x188));

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = INT16_MAX;
	uint32_t x190 = 12126338U;
	static int16_t x191 = INT16_MAX;
	uint8_t x192 = UINT8_MAX;

    t47 = (x189&((x190==x191)*x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x195 = -8LL;
	int64_t x196 = INT64_MAX;

    t48 = (x193&((x194==x195)*x196));

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static int8_t x197 = INT8_MIN;
	uint64_t x198 = UINT64_MAX;
	volatile uint16_t x199 = 8U;
	static int16_t x200 = INT16_MIN;
	static int32_t t49 = -4;

    t49 = (x197&((x198==x199)*x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x201 = -14;
	uint64_t x202 = 487815818840LLU;
	static volatile int32_t x203 = INT32_MIN;
	int64_t x204 = -371801531134040952LL;
	volatile int64_t t50 = 1LL;

    t50 = (x201&((x202==x203)*x204));

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x205 = 776619568593LLU;
	volatile int64_t x206 = INT64_MIN;
	volatile int8_t x207 = INT8_MAX;
	static uint16_t x208 = UINT16_MAX;
	uint64_t t51 = 320488408520289LLU;

    t51 = (x205&((x206==x207)*x208));

    if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int8_t x209 = -1;
	static int16_t x210 = -1;
	int32_t x212 = -1;

    t52 = (x209&((x210==x211)*x212));

    if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x214 = UINT8_MAX;
	int8_t x215 = INT8_MAX;
	uint32_t t53 = 1710U;

    t53 = (x213&((x214==x215)*x216));

    if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int32_t x217 = -1;
	int32_t x219 = INT32_MAX;
	volatile int64_t t54 = INT64_MIN;

    t54 = (x217&((x218==x219)*x220));

    if (t54 != INT64_MIN) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int32_t x221 = INT32_MIN;
	volatile uint64_t x224 = 238484746034LLU;
	volatile uint64_t t55 = 68238974488LLU;

    t55 = (x221&((x222==x223)*x224));

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x225 = 2467;
	int64_t x226 = INT64_MIN;
	uint16_t x227 = UINT16_MAX;
	int32_t x228 = INT32_MAX;
	static volatile int32_t t56 = 13;

    t56 = (x225&((x226==x227)*x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x229 = INT64_MAX;
	static int32_t x231 = INT32_MIN;
	volatile int16_t x232 = INT16_MIN;
	volatile int64_t t57 = 7005823002109LL;

    t57 = (x229&((x230==x231)*x232));

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint16_t x233 = 393U;
	uint32_t x234 = 1788457U;

    t58 = (x233&((x234==x235)*x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x237 = INT64_MIN;
	static uint64_t x238 = 259441738651LLU;
	volatile uint32_t x239 = 541087736U;
	static int16_t x240 = INT16_MAX;

    t59 = (x237&((x238==x239)*x240));

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x241 = 14757;
	static int8_t x242 = -1;
	static int16_t x243 = -47;

    t60 = (x241&((x242==x243)*x244));

    if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x245 = INT8_MAX;
	volatile int32_t x246 = INT32_MIN;
	uint16_t x247 = UINT16_MAX;
	int8_t x248 = INT8_MIN;
	int32_t t61 = -121842;

    t61 = (x245&((x246==x247)*x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x249 = 1U;
	int32_t x250 = 10;
	int32_t x251 = 81795826;
	int16_t x252 = 79;
	static int32_t t62 = 2028092;

    t62 = (x249&((x250==x251)*x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x253 = -292;
	uint16_t x254 = UINT16_MAX;
	int64_t x255 = INT64_MAX;
	int64_t x256 = INT64_MIN;
	volatile int64_t t63 = -68434211144LL;

    t63 = (x253&((x254==x255)*x256));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x257 = -1;
	volatile uint32_t x258 = 866459718U;
	int32_t x259 = INT32_MAX;
	int64_t x260 = INT64_MAX;
	int64_t t64 = 196789045LL;

    t64 = (x257&((x258==x259)*x260));

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = -1;
	uint8_t x262 = 30U;
	static uint64_t x264 = 267000423922LLU;
	volatile uint64_t t65 = 303919LLU;

    t65 = (x261&((x262==x263)*x264));

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x265 = INT64_MAX;
	volatile int32_t x266 = INT32_MIN;
	volatile int16_t x267 = INT16_MIN;
	static int16_t x268 = 2442;

    t66 = (x265&((x266==x267)*x268));

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x270 = -1;
	volatile int32_t x271 = INT32_MAX;
	uint32_t x272 = 22U;
	volatile uint32_t t67 = 988308U;

    t67 = (x269&((x270==x271)*x272));

    if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x273 = 724002158;
	uint64_t x274 = UINT64_MAX;
	uint64_t x275 = 16929666769004851LLU;
	volatile uint8_t x276 = UINT8_MAX;
	volatile int32_t t68 = 205855275;

    t68 = (x273&((x274==x275)*x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x277 = INT32_MIN;
	int64_t x278 = INT64_MIN;
	uint64_t x279 = 1LLU;
	int16_t x280 = INT16_MIN;
	volatile int32_t t69 = 1757597;

    t69 = (x277&((x278==x279)*x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x281 = 3;
	static int16_t x282 = INT16_MIN;
	static int32_t x283 = INT32_MIN;
	uint64_t x284 = 259LLU;
	volatile uint64_t t70 = 260676374LLU;

    t70 = (x281&((x282==x283)*x284));

    if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x286 = 870459LL;
	uint8_t x287 = 1U;
	uint16_t x288 = UINT16_MAX;
	volatile int32_t t71 = 16328044;

    t71 = (x285&((x286==x287)*x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x289 = INT8_MIN;
	uint64_t x290 = 37314643371LLU;
	uint32_t x291 = 5753U;
	uint64_t x292 = 1915392568285713775LLU;
	uint64_t t72 = 1207LLU;

    t72 = (x289&((x290==x291)*x292));

    if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x293 = 16U;
	int8_t x294 = -1;
	int8_t x295 = INT8_MIN;
	uint8_t x296 = 7U;
	volatile int32_t t73 = -3946493;

    t73 = (x293&((x294==x295)*x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x297 = INT16_MIN;
	volatile int64_t x298 = 901LL;
	int32_t x300 = INT32_MIN;
	volatile int32_t t74 = -2;

    t74 = (x297&((x298==x299)*x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x301 = INT32_MIN;
	int32_t x302 = INT32_MIN;
	volatile int16_t x303 = -1;
	static int16_t x304 = INT16_MIN;
	int32_t t75 = -191615;

    t75 = (x301&((x302==x303)*x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x305 = -1LL;
	static int32_t x306 = INT32_MIN;
	int32_t x307 = INT32_MIN;
	int32_t x308 = INT32_MAX;
	int64_t t76 = -4038LL;

    t76 = (x305&((x306==x307)*x308));

    if (t76 != 2147483647LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x309 = -1LL;
	int16_t x310 = -1;
	int32_t x311 = -1;

    t77 = (x309&((x310==x311)*x312));

    if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x313 = 4U;
	volatile int16_t x314 = INT16_MIN;
	int8_t x315 = -1;
	uint32_t x316 = UINT32_MAX;
	volatile uint32_t t78 = 950496112U;

    t78 = (x313&((x314==x315)*x316));

    if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x317 = 3922513LLU;
	int32_t x318 = INT32_MAX;
	volatile int64_t x319 = INT64_MIN;
	static int32_t x320 = INT32_MIN;
	volatile uint64_t t79 = 2251444146581LLU;

    t79 = (x317&((x318==x319)*x320));

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile int32_t x321 = 121450422;
	int32_t x322 = INT32_MAX;
	int64_t x323 = -1LL;
	volatile int32_t t80 = -850;

    t80 = (x321&((x322==x323)*x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x325 = INT64_MIN;
	int64_t x326 = INT64_MIN;
	static uint16_t x327 = 1U;
	volatile int64_t x328 = -283091236LL;

    t81 = (x325&((x326==x327)*x328));

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x329 = -233962960959066LL;
	int16_t x330 = -887;
	static int32_t x331 = -1;
	int8_t x332 = INT8_MIN;
	int64_t t82 = 2080407LL;

    t82 = (x329&((x330==x331)*x332));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x333 = 1565593684U;
	static volatile int8_t x335 = INT8_MIN;
	uint8_t x336 = UINT8_MAX;
	volatile uint32_t t83 = 35U;

    t83 = (x333&((x334==x335)*x336));

    if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x337 = INT32_MIN;
	static uint64_t x338 = 2041646040LLU;
	volatile uint64_t x339 = 35021073LLU;
	int32_t t84 = 79380;

    t84 = (x337&((x338==x339)*x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static int32_t x341 = -420;
	uint64_t x343 = UINT64_MAX;
	int32_t x344 = -165;

    t85 = (x341&((x342==x343)*x344));

    if (t85 != -424) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x345 = UINT8_MAX;
	int8_t x347 = -1;
	int64_t x348 = INT64_MIN;
	static int64_t t86 = 13719799139LL;

    t86 = (x345&((x346==x347)*x348));

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile uint32_t x349 = 8U;
	int64_t x350 = -1LL;
	uint8_t x351 = 0U;
	int16_t x352 = INT16_MAX;
	static uint32_t t87 = 7424121U;

    t87 = (x349&((x350==x351)*x352));

    if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x353 = 5U;
	static int32_t x354 = -1;
	static int16_t x355 = INT16_MIN;
	uint64_t x356 = 16081960LLU;
	uint64_t t88 = 1781134630378LLU;

    t88 = (x353&((x354==x355)*x356));

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x357 = 13LL;
	int8_t x358 = -22;
	int8_t x359 = -2;
	int32_t x360 = INT32_MIN;
	volatile int64_t t89 = -411635454139LL;

    t89 = (x357&((x358==x359)*x360));

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int8_t x361 = -1;
	uint32_t x362 = 0U;
	volatile uint16_t x363 = UINT16_MAX;
	uint32_t x364 = 105U;
	uint32_t t90 = 122644U;

    t90 = (x361&((x362==x363)*x364));

    if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int8_t x365 = INT8_MIN;
	int16_t x366 = -1;
	int8_t x367 = INT8_MAX;
	static int32_t t91 = 0;

    t91 = (x365&((x366==x367)*x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x370 = UINT64_MAX;
	volatile uint64_t x371 = 18789196LLU;
	volatile uint64_t x372 = 2998343825860LLU;
	volatile uint64_t t92 = 22260583591182693LLU;

    t92 = (x369&((x370==x371)*x372));

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x373 = -457;
	int64_t x374 = 1918483564892789086LL;
	int64_t x375 = -1LL;
	int32_t x376 = 23717305;

    t93 = (x373&((x374==x375)*x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x377 = 64U;
	int16_t x378 = -860;
	volatile int32_t x379 = INT32_MIN;
	static int64_t x380 = -1LL;
	volatile int64_t t94 = -59547278LL;

    t94 = (x377&((x378==x379)*x380));

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint32_t x381 = UINT32_MAX;
	uint32_t x382 = 1464387022U;
	int32_t x383 = -11054;
	uint32_t t95 = 17648U;

    t95 = (x381&((x382==x383)*x384));

    if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x385 = UINT32_MAX;
	int16_t x386 = INT16_MIN;
	int32_t x388 = -1;
	volatile uint32_t t96 = 3U;

    t96 = (x385&((x386==x387)*x388));

    if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x389 = 513354664U;
	uint64_t x390 = 77150321352174LLU;
	uint64_t x391 = 17856LLU;
	int32_t x392 = 0;
	volatile uint32_t t97 = 430049U;

    t97 = (x389&((x390==x391)*x392));

    if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x393 = -1;
	static uint8_t x394 = 62U;
	uint16_t x395 = 116U;
	int8_t x396 = -1;
	int32_t t98 = 20934;

    t98 = (x393&((x394==x395)*x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x397 = INT8_MAX;
	volatile uint64_t x398 = 812936LLU;
	int64_t x399 = -1574011578LL;
	int16_t x400 = INT16_MIN;

    t99 = (x397&((x398==x399)*x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x402 = -426;
	uint16_t x404 = UINT16_MAX;
	uint64_t t100 = 587942083865305LLU;

    t100 = (x401&((x402==x403)*x404));

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x405 = 11233U;
	volatile int32_t x406 = INT32_MIN;
	static volatile int16_t x407 = -1;
	volatile int8_t x408 = 12;
	volatile int32_t t101 = 17184;

    t101 = (x405&((x406==x407)*x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x409 = INT32_MIN;
	static uint32_t x410 = UINT32_MAX;
	int64_t x411 = 479738LL;
	int8_t x412 = 7;
	volatile int32_t t102 = 0;

    t102 = (x409&((x410==x411)*x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x413 = UINT32_MAX;
	static int32_t x414 = INT32_MIN;
	volatile int64_t x415 = INT64_MAX;
	uint16_t x416 = UINT16_MAX;
	uint32_t t103 = 421707531U;

    t103 = (x413&((x414==x415)*x416));

    if (t103 != 0U) { NG(); } else { ; }
	
}

void f104(void) {
    	static int32_t x417 = -682;
	volatile int64_t x418 = -42LL;
	volatile int16_t x419 = -1;
	int64_t x420 = -1LL;
	int64_t t104 = -1LL;

    t104 = (x417&((x418==x419)*x420));

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = INT16_MIN;
	uint64_t x422 = UINT64_MAX;
	int64_t x423 = INT64_MAX;
	static int64_t x424 = -1LL;
	int64_t t105 = 90LL;

    t105 = (x421&((x422==x423)*x424));

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int8_t x425 = 11;
	static int32_t x426 = INT32_MAX;
	static volatile uint64_t x427 = 14LLU;
	uint8_t x428 = 21U;
	volatile int32_t t106 = 1;

    t106 = (x425&((x426==x427)*x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x429 = -1;
	volatile uint32_t x430 = 1U;
	static int16_t x431 = INT16_MIN;
	int32_t t107 = 49393;

    t107 = (x429&((x430==x431)*x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x433 = INT8_MAX;
	int64_t x435 = INT64_MAX;
	uint16_t x436 = 769U;
	volatile int32_t t108 = 59197471;

    t108 = (x433&((x434==x435)*x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint8_t x438 = 9U;
	volatile uint32_t x439 = UINT32_MAX;
	int32_t t109 = 2127420;

    t109 = (x437&((x438==x439)*x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x442 = INT32_MAX;
	uint64_t x443 = 275648221350LLU;
	volatile int32_t x444 = -132082172;
	volatile int32_t t110 = 12816999;

    t110 = (x441&((x442==x443)*x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x445 = -1;
	int32_t x446 = -2;
	static uint16_t x447 = 292U;
	uint64_t x448 = UINT64_MAX;
	static uint64_t t111 = 2193805003LLU;

    t111 = (x445&((x446==x447)*x448));

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint32_t x449 = UINT32_MAX;
	uint8_t x450 = 4U;
	uint16_t x451 = 57U;
	int16_t x452 = INT16_MAX;
	static uint32_t t112 = 104895636U;

    t112 = (x449&((x450==x451)*x452));

    if (t112 != 0U) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x453 = INT8_MIN;
	volatile int32_t x454 = 2243253;
	int64_t x455 = INT64_MIN;
	volatile int8_t x456 = INT8_MIN;
	static int32_t t113 = 0;

    t113 = (x453&((x454==x455)*x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x457 = INT64_MAX;
	int32_t x458 = -1;
	int64_t x459 = INT64_MIN;
	int16_t x460 = INT16_MIN;
	static int64_t t114 = -7802578456062LL;

    t114 = (x457&((x458==x459)*x460));

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x461 = INT32_MAX;
	volatile int16_t x462 = 5717;
	volatile int64_t x463 = INT64_MAX;
	volatile int64_t t115 = 1211LL;

    t115 = (x461&((x462==x463)*x464));

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x465 = INT16_MIN;
	volatile int32_t t116 = -5756803;

    t116 = (x465&((x466==x467)*x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x469 = UINT16_MAX;
	volatile int32_t x472 = INT32_MIN;
	int32_t t117 = 5774079;

    t117 = (x469&((x470==x471)*x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x473 = -34328LL;
	uint32_t x474 = 970858U;
	static uint8_t x475 = 119U;
	int64_t x476 = INT64_MIN;
	int64_t t118 = -12686343LL;

    t118 = (x473&((x474==x475)*x476));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x478 = 0;
	volatile uint32_t x479 = 27U;
	uint64_t x480 = UINT64_MAX;
	uint64_t t119 = 7929LLU;

    t119 = (x477&((x478==x479)*x480));

    if (t119 != 0LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static int32_t x481 = INT32_MIN;
	volatile int64_t x482 = -112665LL;
	static int16_t x483 = INT16_MIN;
	int32_t x484 = INT32_MAX;
	static volatile int32_t t120 = 71261;

    t120 = (x481&((x482==x483)*x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x485 = 6U;
	static int32_t x486 = -4165477;
	uint16_t x487 = 25U;
	volatile int32_t t121 = 112;

    t121 = (x485&((x486==x487)*x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x489 = 1111;
	int16_t x490 = -1;
	static uint8_t x491 = UINT8_MAX;
	volatile uint32_t x492 = 31U;
	volatile uint32_t t122 = 8131U;

    t122 = (x489&((x490==x491)*x492));

    if (t122 != 0U) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x493 = -1;
	volatile uint64_t x494 = 5895857523983LLU;
	volatile uint32_t x495 = 236175U;
	static int8_t x496 = INT8_MIN;
	static int32_t t123 = -68;

    t123 = (x493&((x494==x495)*x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x497 = 1;
	int16_t x498 = -13201;
	uint16_t x499 = 931U;

    t124 = (x497&((x498==x499)*x500));

    if (t124 != 0LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x502 = INT16_MIN;
	int8_t x503 = INT8_MAX;
	int64_t x504 = INT64_MIN;

    t125 = (x501&((x502==x503)*x504));

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x505 = UINT16_MAX;
	static int64_t x506 = 169LL;
	static int16_t x507 = INT16_MIN;
	int16_t x508 = INT16_MIN;
	int32_t t126 = 30;

    t126 = (x505&((x506==x507)*x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint8_t x509 = 1U;
	int8_t x510 = -1;
	static uint32_t x511 = 7U;

    t127 = (x509&((x510==x511)*x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x513 = 4;
	int16_t x514 = -1;
	int32_t x515 = INT32_MIN;
	volatile int32_t t128 = -40278755;

    t128 = (x513&((x514==x515)*x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x517 = 4052711U;
	int64_t x518 = -1LL;
	int32_t x519 = -960265;
	static uint8_t x520 = UINT8_MAX;
	uint32_t t129 = 21235U;

    t129 = (x517&((x518==x519)*x520));

    if (t129 != 0U) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int16_t x522 = INT16_MIN;
	static volatile uint32_t x523 = 286U;
	int8_t x524 = INT8_MIN;
	uint64_t t130 = 634568178833411428LLU;

    t130 = (x521&((x522==x523)*x524));

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x527 = INT64_MIN;
	static uint64_t t131 = 2097353377352639912LLU;

    t131 = (x525&((x526==x527)*x528));

    if (t131 != 0LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x529 = INT32_MIN;
	static uint64_t x530 = 265LLU;
	uint16_t x531 = UINT16_MAX;
	int32_t x532 = -3763192;
	static volatile int32_t t132 = -35612;

    t132 = (x529&((x530==x531)*x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x533 = -1;
	int64_t x534 = INT64_MAX;
	int16_t x535 = INT16_MIN;
	uint64_t x536 = 94050350263629616LLU;
	static uint64_t t133 = 1061239LLU;

    t133 = (x533&((x534==x535)*x536));

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x537 = INT32_MIN;
	uint8_t x538 = 8U;
	int32_t x539 = -1;
	int64_t x540 = INT64_MAX;
	volatile int64_t t134 = 664500746LL;

    t134 = (x537&((x538==x539)*x540));

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = 3;
	int32_t x542 = -21378047;
	int32_t x543 = INT32_MIN;
	volatile int16_t x544 = INT16_MAX;
	int32_t t135 = -6637;

    t135 = (x541&((x542==x543)*x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x545 = INT32_MAX;
	int16_t x546 = INT16_MIN;
	uint8_t x548 = UINT8_MAX;

    t136 = (x545&((x546==x547)*x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x550 = 1LLU;
	int64_t x551 = INT64_MAX;
	int64_t x552 = INT64_MIN;
	int64_t t137 = 1306785874431LL;

    t137 = (x549&((x550==x551)*x552));

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int32_t x553 = INT32_MAX;
	static int8_t x554 = INT8_MAX;
	int32_t t138 = -2;

    t138 = (x553&((x554==x555)*x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x557 = INT8_MAX;
	static uint64_t x558 = 129092754LLU;
	int8_t x560 = INT8_MIN;
	int32_t t139 = -2798;

    t139 = (x557&((x558==x559)*x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x561 = -381393567845443LL;
	uint8_t x563 = 15U;
	uint8_t x564 = 9U;
	volatile int64_t t140 = 867477060130LL;

    t140 = (x561&((x562==x563)*x564));

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x565 = UINT64_MAX;
	int8_t x567 = -7;
	int32_t x568 = 204046228;
	volatile uint64_t t141 = 130052056213LLU;

    t141 = (x565&((x566==x567)*x568));

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x569 = UINT8_MAX;
	volatile uint32_t x570 = 172007739U;
	int16_t x572 = -1;
	volatile int32_t t142 = 1;

    t142 = (x569&((x570==x571)*x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x573 = INT64_MIN;
	static volatile int32_t x574 = INT32_MIN;
	int32_t x575 = 198596;
	int64_t t143 = 14136255204LL;

    t143 = (x573&((x574==x575)*x576));

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int16_t x577 = -3141;
	static uint16_t x578 = 86U;
	uint8_t x579 = UINT8_MAX;
	uint8_t x580 = UINT8_MAX;

    t144 = (x577&((x578==x579)*x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x581 = 442U;
	int16_t x582 = INT16_MIN;
	static volatile int16_t x583 = INT16_MIN;
	static volatile uint64_t t145 = 24LLU;

    t145 = (x581&((x582==x583)*x584));

    if (t145 != 442LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x585 = 1U;
	int32_t x586 = -1;
	volatile int8_t x587 = INT8_MAX;
	int32_t t146 = -4844;

    t146 = (x585&((x586==x587)*x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x589 = 844046LL;
	int32_t x590 = -2285;
	int64_t t147 = -1471786478008846967LL;

    t147 = (x589&((x590==x591)*x592));

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x594 = INT8_MAX;
	int32_t x595 = 4;
	volatile int32_t t148 = 0;

    t148 = (x593&((x594==x595)*x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x597 = INT8_MIN;
	uint16_t x598 = UINT16_MAX;
	volatile int8_t x600 = INT8_MAX;
	static int32_t t149 = 6365;

    t149 = (x597&((x598==x599)*x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x601 = -3;
	uint32_t x602 = 35U;
	int32_t x604 = INT32_MIN;
	int32_t t150 = -15023361;

    t150 = (x601&((x602==x603)*x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x605 = INT8_MIN;
	volatile int64_t x606 = -1LL;
	uint16_t x607 = 0U;
	uint8_t x608 = 2U;
	volatile int32_t t151 = -27;

    t151 = (x605&((x606==x607)*x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x609 = INT16_MAX;
	int32_t x610 = INT32_MIN;
	static int64_t x612 = 4789106LL;
	int64_t t152 = -12838169807206508LL;

    t152 = (x609&((x610==x611)*x612));

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x614 = INT8_MIN;
	int32_t x615 = INT32_MAX;
	static volatile int16_t x616 = -12;

    t153 = (x613&((x614==x615)*x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x617 = 354U;
	static int64_t x618 = INT64_MAX;
	int8_t x620 = 14;
	int32_t t154 = 191631;

    t154 = (x617&((x618==x619)*x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x624 = -8436;

    t155 = (x621&((x622==x623)*x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x626 = INT32_MIN;
	int32_t x627 = INT32_MAX;
	int16_t x628 = INT16_MIN;

    t156 = (x625&((x626==x627)*x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x629 = INT8_MAX;
	int16_t x630 = -1;
	int8_t x631 = 50;

    t157 = (x629&((x630==x631)*x632));

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x634 = 39993;
	int8_t x635 = -12;

    t158 = (x633&((x634==x635)*x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x637 = 3;
	uint8_t x638 = UINT8_MAX;
	volatile uint16_t x640 = 2199U;
	int32_t t159 = 114604190;

    t159 = (x637&((x638==x639)*x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x641 = 269;
	volatile int16_t x644 = -1;
	static int32_t t160 = -15;

    t160 = (x641&((x642==x643)*x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint64_t x647 = 85LLU;
	int64_t x648 = 41LL;
	volatile int64_t t161 = 1300135480538436LL;

    t161 = (x645&((x646==x647)*x648));

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int64_t x651 = -45667300598180LL;
	int32_t x652 = INT32_MIN;
	volatile int32_t t162 = 14037524;

    t162 = (x649&((x650==x651)*x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x653 = INT16_MIN;
	int32_t x654 = INT32_MIN;
	volatile int8_t x655 = -1;
	volatile int32_t x656 = -922503;
	volatile int32_t t163 = -746771;

    t163 = (x653&((x654==x655)*x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint32_t x657 = UINT32_MAX;
	uint32_t x658 = 154664U;
	volatile int16_t x659 = INT16_MIN;
	int8_t x660 = INT8_MIN;

    t164 = (x657&((x658==x659)*x660));

    if (t164 != 0U) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint16_t x663 = UINT16_MAX;
	uint32_t x664 = 7U;
	volatile uint32_t t165 = 1989893U;

    t165 = (x661&((x662==x663)*x664));

    if (t165 != 0U) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x665 = UINT32_MAX;
	uint8_t x666 = 4U;
	static volatile int32_t x668 = INT32_MIN;
	volatile uint32_t t166 = 633012U;

    t166 = (x665&((x666==x667)*x668));

    if (t166 != 0U) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x670 = INT64_MIN;
	int64_t x671 = 62312634930710LL;
	int32_t x672 = -488263;

    t167 = (x669&((x670==x671)*x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x674 = INT64_MIN;
	int64_t x675 = INT64_MIN;
	uint32_t x676 = 471406U;
	volatile uint32_t t168 = 4694U;

    t168 = (x673&((x674==x675)*x676));

    if (t168 != 110U) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x677 = -2572LL;
	static volatile int16_t x678 = INT16_MIN;
	int32_t x679 = -15404;
	volatile int64_t t169 = -65598939270926331LL;

    t169 = (x677&((x678==x679)*x680));

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x682 = -1;
	volatile uint64_t x683 = 2362653200236045LLU;
	static int8_t x684 = -10;

    t170 = (x681&((x682==x683)*x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint8_t x685 = 4U;
	uint8_t x686 = 19U;
	int32_t x687 = INT32_MIN;
	int8_t x688 = INT8_MIN;
	int32_t t171 = 949428905;

    t171 = (x685&((x686==x687)*x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x689 = -1;
	int32_t x690 = INT32_MIN;
	int64_t x691 = INT64_MIN;
	static int8_t x692 = -1;
	int32_t t172 = -3642155;

    t172 = (x689&((x690==x691)*x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x693 = INT8_MIN;
	volatile int64_t x695 = -1LL;
	uint16_t x696 = UINT16_MAX;
	int32_t t173 = -14353;

    t173 = (x693&((x694==x695)*x696));

    if (t173 != 65408) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x697 = INT16_MIN;
	uint64_t x698 = 361672282928LLU;
	uint8_t x699 = 5U;
	int16_t x700 = INT16_MAX;
	volatile int32_t t174 = -997954;

    t174 = (x697&((x698==x699)*x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x701 = 42U;
	int64_t x702 = INT64_MAX;
	volatile int32_t x703 = INT32_MIN;
	static int8_t x704 = INT8_MIN;
	volatile int32_t t175 = 81631;

    t175 = (x701&((x702==x703)*x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x705 = -1;
	int32_t x706 = INT32_MAX;
	int8_t x707 = INT8_MAX;
	static int64_t x708 = 303380607324420LL;
	volatile int64_t t176 = 1LL;

    t176 = (x705&((x706==x707)*x708));

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x709 = 531838652U;
	int16_t x712 = INT16_MIN;
	volatile uint32_t t177 = 70495U;

    t177 = (x709&((x710==x711)*x712));

    if (t177 != 0U) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x713 = -1;
	int32_t x714 = INT32_MIN;
	int16_t x715 = INT16_MIN;
	volatile int8_t x716 = -1;
	static volatile int32_t t178 = -499;

    t178 = (x713&((x714==x715)*x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x717 = INT32_MIN;
	int32_t x718 = -129454;
	int8_t x719 = -1;
	int8_t x720 = -1;

    t179 = (x717&((x718==x719)*x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x721 = 11U;
	volatile int64_t x722 = 129007004071025910LL;
	uint8_t x723 = UINT8_MAX;
	int32_t t180 = 208339789;

    t180 = (x721&((x722==x723)*x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x725 = INT16_MAX;
	volatile uint64_t x726 = 273994LLU;
	int64_t x727 = -1LL;
	int8_t x728 = 7;
	int32_t t181 = 0;

    t181 = (x725&((x726==x727)*x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x731 = UINT16_MAX;
	uint16_t x732 = 0U;
	int32_t t182 = -1;

    t182 = (x729&((x730==x731)*x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x733 = 1;
	static int8_t x734 = INT8_MIN;
	uint8_t x735 = UINT8_MAX;
	int8_t x736 = INT8_MIN;
	volatile int32_t t183 = -3637;

    t183 = (x733&((x734==x735)*x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x737 = 0;
	int16_t x740 = 815;
	static volatile int32_t t184 = -74407759;

    t184 = (x737&((x738==x739)*x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x742 = INT32_MAX;
	int32_t x743 = INT32_MIN;
	uint64_t x744 = UINT64_MAX;
	static volatile uint64_t t185 = 145221520811580329LLU;

    t185 = (x741&((x742==x743)*x744));

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x745 = -1LL;
	static int32_t x746 = INT32_MAX;
	static volatile int64_t t186 = -5437843044863369LL;

    t186 = (x745&((x746==x747)*x748));

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint16_t x750 = 63U;
	uint16_t x751 = 64U;
	int64_t x752 = -1LL;

    t187 = (x749&((x750==x751)*x752));

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static int64_t x753 = -476230312LL;
	int64_t x755 = INT64_MIN;
	volatile int64_t x756 = INT64_MIN;
	int64_t t188 = -130561760220785987LL;

    t188 = (x753&((x754==x755)*x756));

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int8_t x757 = -1;
	uint64_t x758 = 929941848050808LLU;
	int8_t x759 = INT8_MIN;
	uint8_t x760 = 106U;
	int32_t t189 = 4953;

    t189 = (x757&((x758==x759)*x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x761 = 0;
	int64_t x762 = INT64_MAX;
	uint8_t x763 = UINT8_MAX;
	int32_t t190 = 2528;

    t190 = (x761&((x762==x763)*x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint32_t x765 = UINT32_MAX;
	static uint16_t x766 = 5209U;
	int8_t x768 = -49;
	uint32_t t191 = 207421200U;

    t191 = (x765&((x766==x767)*x768));

    if (t191 != 0U) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int32_t x769 = INT32_MIN;
	int16_t x770 = INT16_MAX;
	uint8_t x771 = 4U;
	uint64_t x772 = 3LLU;
	volatile uint64_t t192 = 2981628LLU;

    t192 = (x769&((x770==x771)*x772));

    if (t192 != 0LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x773 = -1;
	int64_t x774 = INT64_MAX;
	volatile uint8_t x775 = UINT8_MAX;
	static uint8_t x776 = 25U;
	volatile int32_t t193 = -5263141;

    t193 = (x773&((x774==x775)*x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x778 = INT64_MAX;
	int8_t x779 = INT8_MIN;
	int64_t x780 = INT64_MIN;
	volatile int64_t t194 = -1LL;

    t194 = (x777&((x778==x779)*x780));

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int64_t x781 = 42175460033LL;
	static uint16_t x782 = 43U;
	volatile int16_t x783 = -1;
	uint8_t x784 = UINT8_MAX;
	volatile int64_t t195 = -1776040333871520LL;

    t195 = (x781&((x782==x783)*x784));

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x785 = INT8_MIN;
	volatile int16_t x786 = -489;
	uint32_t x787 = 3U;
	int32_t t196 = 901754;

    t196 = (x785&((x786==x787)*x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint8_t x789 = UINT8_MAX;
	static int32_t x790 = INT32_MIN;
	static int16_t x791 = INT16_MIN;
	volatile int32_t x792 = INT32_MIN;
	int32_t t197 = 1013;

    t197 = (x789&((x790==x791)*x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint8_t x793 = 103U;
	volatile int16_t x794 = 13;
	static volatile int16_t x796 = INT16_MAX;
	int32_t t198 = 7328655;

    t198 = (x793&((x794==x795)*x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x797 = INT32_MIN;
	int64_t x798 = -3966277157510541063LL;
	int16_t x799 = -3;
	static uint32_t x800 = 11U;
	volatile uint32_t t199 = 3212420U;

    t199 = (x797&((x798==x799)*x800));

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

