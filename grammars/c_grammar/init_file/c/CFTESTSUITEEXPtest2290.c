
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

int32_t x2 = INT32_MIN;
int8_t x7 = 4;
volatile int32_t t4 = -67;
int64_t x24 = INT64_MIN;
uint16_t x25 = 1U;
uint8_t x32 = 25U;
int8_t x33 = 1;
uint64_t x35 = 358123169936LLU;
int64_t x43 = INT64_MIN;
int64_t x46 = INT64_MIN;
volatile int8_t x51 = INT8_MAX;
uint64_t x52 = 264323455LLU;
volatile uint32_t x53 = 7573U;
static int32_t t13 = 1499;
int8_t x64 = -1;
volatile int32_t t15 = 3;
uint64_t x71 = UINT64_MAX;
int64_t x73 = INT64_MIN;
int32_t t18 = 438;
int8_t x87 = -12;
volatile int32_t t22 = 948249791;
int64_t x99 = INT64_MAX;
int32_t t24 = -825;
int16_t x101 = 1;
int32_t t26 = -32544;
static int8_t x124 = INT8_MAX;
static uint64_t x127 = 16134775228LLU;
int32_t x129 = -17260587;
static uint16_t x131 = UINT16_MAX;
volatile int8_t x132 = -50;
int32_t x134 = -675612206;
int8_t x135 = -1;
uint64_t x138 = 54912124899LLU;
int64_t x140 = INT64_MIN;
int64_t x142 = -1LL;
static int8_t x149 = -1;
volatile uint32_t x154 = UINT32_MAX;
static uint32_t x162 = UINT32_MAX;
uint8_t x165 = 0U;
uint32_t x167 = UINT32_MAX;
uint16_t x168 = 1U;
static volatile uint64_t x171 = 15534LLU;
uint64_t x172 = 11451852625879551LLU;
volatile int16_t x173 = -1;
uint16_t x181 = 3101U;
int16_t x189 = INT16_MIN;
static int8_t x195 = INT8_MIN;
volatile int32_t t48 = 28125;
volatile int32_t x202 = INT32_MAX;
int8_t x218 = 20;
volatile uint16_t x225 = 31U;
uint64_t x233 = 304450116407547302LLU;
volatile int32_t t58 = -363958799;
int16_t x241 = 31;
volatile int32_t x244 = -1;
int32_t x248 = INT32_MIN;
volatile int32_t t61 = 312403;
uint8_t x253 = 15U;
int64_t x256 = INT64_MIN;
int32_t x258 = 1260596;
uint64_t x264 = 1886040359393LLU;
int8_t x271 = -3;
int32_t t68 = -802060483;
int32_t x278 = INT32_MIN;
volatile int32_t t69 = 1177503;
static uint64_t x283 = 1071826070LLU;
volatile uint16_t x293 = UINT16_MAX;
static uint8_t x295 = 5U;
volatile uint64_t x313 = 77392090581861635LLU;
uint16_t x314 = 21715U;
int32_t t78 = -524884;
volatile int32_t x319 = INT32_MAX;
int16_t x321 = 0;
int16_t x322 = INT16_MIN;
int8_t x323 = INT8_MIN;
uint8_t x325 = 21U;
uint16_t x328 = UINT16_MAX;
int16_t x329 = -2;
uint32_t x330 = 1378543450U;
static int32_t x332 = -1;
volatile int32_t t83 = 701629;
volatile uint16_t x337 = UINT16_MAX;
int32_t x338 = INT32_MAX;
uint64_t x345 = 3LLU;
int8_t x348 = -15;
int8_t x349 = -1;
static int16_t x351 = INT16_MAX;
uint64_t x372 = UINT64_MAX;
int32_t x376 = -1;
static int32_t x380 = INT32_MIN;
uint32_t x383 = 280554U;
volatile int32_t t96 = -1633;
static int8_t x389 = INT8_MAX;
uint64_t x393 = 99801684329LLU;
int8_t x396 = -1;
int64_t x399 = 470404650352556366LL;
static int32_t x403 = 28291040;
int64_t x409 = -1LL;
int64_t x412 = INT64_MAX;
volatile int32_t t103 = 23;
static int16_t x417 = INT16_MAX;
int16_t x427 = INT16_MIN;
volatile int32_t x441 = INT32_MIN;
uint8_t x443 = 1U;
uint64_t x446 = UINT64_MAX;
uint8_t x449 = 0U;
volatile int64_t x457 = INT64_MIN;
static volatile int32_t x460 = -3075;
int8_t x469 = INT8_MIN;
int8_t x487 = INT8_MIN;
static uint16_t x492 = 201U;
volatile int32_t t122 = 493967;
static int8_t x496 = -1;
static int16_t x505 = -12;
uint64_t x513 = UINT64_MAX;
int64_t x514 = INT64_MIN;
uint32_t x520 = 24U;
int8_t x523 = 4;
int64_t x524 = INT64_MIN;
int32_t x543 = INT32_MAX;
int32_t x545 = 6;
int64_t x550 = -1LL;
uint64_t x558 = UINT64_MAX;
volatile int32_t t139 = -369;
int32_t t140 = 115;
int16_t x568 = -6105;
int64_t x575 = INT64_MIN;
int16_t x579 = 0;
volatile uint16_t x582 = 9U;
int64_t x583 = INT64_MAX;
int32_t x586 = -88869;
int32_t x591 = -46;
int16_t x596 = 5643;
int32_t x600 = INT32_MIN;
static uint64_t x601 = 4508887662515749296LLU;
volatile int16_t x602 = -9723;
uint8_t x604 = 12U;
int32_t x606 = INT32_MAX;
volatile int32_t t151 = 215478;
int16_t x614 = INT16_MIN;
volatile int32_t t153 = 872127250;
int16_t x621 = INT16_MIN;
int32_t x627 = 34;
static volatile int32_t t156 = 6612059;
int32_t t157 = 1922;
uint8_t x640 = 22U;
volatile int32_t t159 = -55236;
int8_t x643 = INT8_MIN;
int32_t x644 = -1;
int8_t x652 = INT8_MIN;
volatile int8_t x654 = INT8_MAX;
volatile int32_t t163 = 20927;
static int16_t x659 = INT16_MIN;
int32_t x667 = INT32_MAX;
volatile int16_t x671 = -39;
int16_t x675 = -1;
int16_t x677 = INT16_MAX;
int32_t x687 = INT32_MAX;
uint32_t x689 = UINT32_MAX;
int64_t x691 = INT64_MIN;
volatile int32_t t173 = 6;
int16_t x699 = 6;
static volatile uint8_t x700 = UINT8_MAX;
volatile int32_t t174 = 73;
static volatile uint16_t x703 = UINT16_MAX;
uint32_t x708 = 147U;
volatile uint32_t x709 = UINT32_MAX;
int16_t x711 = INT16_MIN;
int16_t x718 = 18;
volatile int32_t t180 = 808;
uint64_t x725 = 3585399354LLU;
volatile int8_t x731 = INT8_MIN;
static volatile uint16_t x738 = 45U;
int64_t x742 = INT64_MAX;
uint16_t x749 = 0U;
int32_t x751 = -2;
volatile int8_t x755 = 9;
int64_t x756 = -825863005550722529LL;
volatile int32_t t188 = 1344;
int8_t x778 = -29;
int32_t t194 = -301274834;
static int32_t x783 = INT32_MIN;
int64_t x784 = 1047523018261174LL;
static int8_t x787 = INT8_MIN;
uint16_t x790 = 2U;


void f0(void) {
    	uint64_t x1 = 2710350LLU;
	int32_t x3 = INT32_MIN;
	int64_t x4 = -90370080403426303LL;
	volatile int32_t t0 = -100459229;

    t0 = (x1==((x2&x3)<=x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int64_t x5 = INT64_MIN;
	uint32_t x6 = 5U;
	int64_t x8 = -1LL;
	static volatile int32_t t1 = -1;

    t1 = (x5==((x6&x7)<=x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = 32LLU;
	volatile uint32_t x10 = 0U;
	static int64_t x11 = INT64_MIN;
	int8_t x12 = -1;
	volatile int32_t t2 = 97716;

    t2 = (x9==((x10&x11)<=x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint8_t x13 = 3U;
	int64_t x14 = -63LL;
	int32_t x15 = 32;
	int16_t x16 = 1819;
	volatile int32_t t3 = 20914633;

    t3 = (x13==((x14&x15)<=x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = -1LL;
	int16_t x18 = INT16_MIN;
	int32_t x19 = 10473209;
	int16_t x20 = INT16_MIN;

    t4 = (x17==((x18&x19)<=x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = INT8_MIN;
	int8_t x22 = 5;
	static int64_t x23 = INT64_MAX;
	int32_t t5 = -768;

    t5 = (x21==((x22&x23)<=x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x26 = INT8_MAX;
	static uint32_t x27 = 233462U;
	int32_t x28 = INT32_MAX;
	int32_t t6 = 54519671;

    t6 = (x25==((x26&x27)<=x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = INT8_MAX;
	static int16_t x30 = INT16_MIN;
	int16_t x31 = INT16_MIN;
	volatile int32_t t7 = -24518410;

    t7 = (x29==((x30&x31)<=x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x34 = INT16_MAX;
	int16_t x36 = 1668;
	int32_t t8 = -19631301;

    t8 = (x33==((x34&x35)<=x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x37 = 62771057680566LL;
	uint8_t x38 = UINT8_MAX;
	uint32_t x39 = 401886U;
	static volatile uint8_t x40 = 37U;
	static int32_t t9 = 0;

    t9 = (x37==((x38&x39)<=x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = INT32_MAX;
	uint64_t x42 = 350095977LLU;
	uint32_t x44 = 2146470138U;
	int32_t t10 = 18236;

    t10 = (x41==((x42&x43)<=x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x45 = INT8_MIN;
	int8_t x47 = 5;
	static uint16_t x48 = 86U;
	static volatile int32_t t11 = -13374;

    t11 = (x45==((x46&x47)<=x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = -1;
	int64_t x50 = -1LL;
	int32_t t12 = -17;

    t12 = (x49==((x50&x51)<=x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x54 = -1LL;
	uint16_t x55 = 16U;
	volatile uint32_t x56 = 0U;

    t13 = (x53==((x54&x55)<=x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x57 = 0;
	int64_t x58 = -1LL;
	int8_t x59 = -1;
	uint64_t x60 = 56LLU;
	volatile int32_t t14 = 20709;

    t14 = (x57==((x58&x59)<=x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x61 = INT32_MIN;
	volatile int16_t x62 = INT16_MAX;
	static int32_t x63 = 162658241;

    t15 = (x61==((x62&x63)<=x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint8_t x65 = 97U;
	int8_t x66 = -1;
	int16_t x67 = INT16_MAX;
	int8_t x68 = INT8_MIN;
	static volatile int32_t t16 = -27;

    t16 = (x65==((x66&x67)<=x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = -903208927123LL;
	int64_t x70 = 3753LL;
	int16_t x72 = INT16_MIN;
	volatile int32_t t17 = 874;

    t17 = (x69==((x70&x71)<=x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x74 = INT16_MIN;
	int16_t x75 = INT16_MIN;
	uint32_t x76 = 60721023U;

    t18 = (x73==((x74&x75)<=x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = 5603;
	int8_t x78 = -1;
	int32_t x79 = -1;
	int32_t x80 = INT32_MIN;
	volatile int32_t t19 = -55239944;

    t19 = (x77==((x78&x79)<=x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x81 = 0LL;
	uint64_t x82 = 323707204438634525LLU;
	uint32_t x83 = 16976U;
	int16_t x84 = 9;
	int32_t t20 = 1;

    t20 = (x81==((x82&x83)<=x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint8_t x85 = 2U;
	int32_t x86 = -3;
	uint16_t x88 = 207U;
	static int32_t t21 = 0;

    t21 = (x85==((x86&x87)<=x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x89 = UINT16_MAX;
	int8_t x90 = -3;
	static uint64_t x91 = 53506LLU;
	int32_t x92 = -2775;

    t22 = (x89==((x90&x91)<=x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x93 = 1520;
	uint16_t x94 = UINT16_MAX;
	volatile uint16_t x95 = 0U;
	int8_t x96 = -1;
	int32_t t23 = -15786733;

    t23 = (x93==((x94&x95)<=x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = -1;
	int16_t x98 = INT16_MIN;
	static int64_t x100 = INT64_MAX;

    t24 = (x97==((x98&x99)<=x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x102 = -13;
	static volatile uint8_t x103 = 44U;
	int64_t x104 = INT64_MAX;
	volatile int32_t t25 = 65;

    t25 = (x101==((x102&x103)<=x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint8_t x105 = 12U;
	volatile int8_t x106 = INT8_MIN;
	uint64_t x107 = 1731LLU;
	uint16_t x108 = UINT16_MAX;

    t26 = (x105==((x106&x107)<=x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint32_t x109 = 1U;
	static int16_t x110 = INT16_MIN;
	int32_t x111 = INT32_MIN;
	int16_t x112 = -1;
	static volatile int32_t t27 = -4;

    t27 = (x109==((x110&x111)<=x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x113 = 11U;
	uint16_t x114 = 17543U;
	uint16_t x115 = 4U;
	int32_t x116 = INT32_MIN;
	int32_t t28 = -114;

    t28 = (x113==((x114&x115)<=x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static int64_t x117 = -1LL;
	int64_t x118 = -3627603215836LL;
	static uint64_t x119 = 9866LLU;
	static int8_t x120 = 0;
	int32_t t29 = 199057505;

    t29 = (x117==((x118&x119)<=x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = -1;
	static uint8_t x122 = 57U;
	volatile int16_t x123 = -1;
	int32_t t30 = -1;

    t30 = (x121==((x122&x123)<=x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x125 = 5;
	static int8_t x126 = -49;
	static int8_t x128 = INT8_MAX;
	int32_t t31 = -59509;

    t31 = (x125==((x126&x127)<=x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x130 = INT64_MIN;
	static volatile int32_t t32 = -4;

    t32 = (x129==((x130&x131)<=x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = INT32_MIN;
	static volatile int16_t x136 = -1;
	volatile int32_t t33 = 54237;

    t33 = (x133==((x134&x135)<=x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x137 = INT16_MIN;
	int8_t x139 = -1;
	volatile int32_t t34 = -2508889;

    t34 = (x137==((x138&x139)<=x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = -1;
	uint32_t x143 = 53023U;
	int16_t x144 = -1;
	static int32_t t35 = -3037861;

    t35 = (x141==((x142&x143)<=x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = INT32_MIN;
	int64_t x146 = INT64_MIN;
	int8_t x147 = INT8_MIN;
	int8_t x148 = INT8_MAX;
	static volatile int32_t t36 = 203;

    t36 = (x145==((x146&x147)<=x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x150 = 366242U;
	volatile uint16_t x151 = 0U;
	static int32_t x152 = -1;
	static int32_t t37 = 31778110;

    t37 = (x149==((x150&x151)<=x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint32_t x153 = 9U;
	static volatile uint32_t x155 = 9U;
	int16_t x156 = 3226;
	volatile int32_t t38 = 458214642;

    t38 = (x153==((x154&x155)<=x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x157 = INT16_MIN;
	volatile uint8_t x158 = UINT8_MAX;
	int8_t x159 = INT8_MAX;
	static int16_t x160 = INT16_MIN;
	volatile int32_t t39 = -2091;

    t39 = (x157==((x158&x159)<=x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x161 = UINT32_MAX;
	uint8_t x163 = 0U;
	uint64_t x164 = 23084LLU;
	int32_t t40 = -1;

    t40 = (x161==((x162&x163)<=x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x166 = INT32_MIN;
	int32_t t41 = -22;

    t41 = (x165==((x166&x167)<=x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x169 = INT32_MAX;
	int8_t x170 = INT8_MAX;
	int32_t t42 = 1034;

    t42 = (x169==((x170&x171)<=x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x174 = INT8_MIN;
	static int16_t x175 = 0;
	volatile uint16_t x176 = 841U;
	int32_t t43 = 1918;

    t43 = (x173==((x174&x175)<=x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint16_t x177 = UINT16_MAX;
	static int64_t x178 = -657LL;
	volatile int64_t x179 = -39LL;
	int8_t x180 = INT8_MIN;
	static volatile int32_t t44 = 122437398;

    t44 = (x177==((x178&x179)<=x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x182 = -1;
	static int32_t x183 = -50978;
	int8_t x184 = -1;
	int32_t t45 = -12042631;

    t45 = (x181==((x182&x183)<=x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int8_t x185 = INT8_MIN;
	int32_t x186 = INT32_MAX;
	int64_t x187 = -1335943LL;
	static int32_t x188 = -1;
	volatile int32_t t46 = -1662;

    t46 = (x185==((x186&x187)<=x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x190 = INT32_MAX;
	int32_t x191 = -1;
	uint16_t x192 = 774U;
	int32_t t47 = 6006;

    t47 = (x189==((x190&x191)<=x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x193 = 199722;
	static int8_t x194 = 0;
	volatile int16_t x196 = 15123;

    t48 = (x193==((x194&x195)<=x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x197 = UINT16_MAX;
	int64_t x198 = -1LL;
	uint8_t x199 = 1U;
	int8_t x200 = INT8_MIN;
	int32_t t49 = 1;

    t49 = (x197==((x198&x199)<=x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x201 = -584732397344549133LL;
	int64_t x203 = INT64_MIN;
	int8_t x204 = INT8_MAX;
	int32_t t50 = 3;

    t50 = (x201==((x202&x203)<=x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x205 = -87;
	static uint8_t x206 = UINT8_MAX;
	int32_t x207 = -27;
	static int32_t x208 = 1534116;
	int32_t t51 = -1;

    t51 = (x205==((x206&x207)<=x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x209 = INT32_MAX;
	int16_t x210 = -1;
	int16_t x211 = INT16_MIN;
	static volatile int64_t x212 = INT64_MIN;
	int32_t t52 = -2643;

    t52 = (x209==((x210&x211)<=x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x213 = -1;
	int16_t x214 = INT16_MIN;
	int32_t x215 = 1891390;
	static int8_t x216 = -1;
	int32_t t53 = -170;

    t53 = (x213==((x214&x215)<=x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x217 = 6;
	uint8_t x219 = 48U;
	int64_t x220 = INT64_MAX;
	volatile int32_t t54 = 6276;

    t54 = (x217==((x218&x219)<=x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x221 = 0U;
	int16_t x222 = -1;
	int64_t x223 = INT64_MAX;
	static int64_t x224 = -1LL;
	volatile int32_t t55 = -7;

    t55 = (x221==((x222&x223)<=x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint32_t x226 = 781028722U;
	static int32_t x227 = -1;
	uint8_t x228 = UINT8_MAX;
	volatile int32_t t56 = -3;

    t56 = (x225==((x226&x227)<=x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x229 = 3U;
	int64_t x230 = INT64_MIN;
	int8_t x231 = INT8_MIN;
	volatile int64_t x232 = INT64_MIN;
	volatile int32_t t57 = 160607;

    t57 = (x229==((x230&x231)<=x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x234 = UINT16_MAX;
	int8_t x235 = -1;
	static uint32_t x236 = 371U;

    t58 = (x233==((x234&x235)<=x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x237 = INT64_MIN;
	int32_t x238 = 9;
	uint32_t x239 = UINT32_MAX;
	uint32_t x240 = 17U;
	volatile int32_t t59 = 11152149;

    t59 = (x237==((x238&x239)<=x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int64_t x242 = 76795461031806597LL;
	int64_t x243 = INT64_MIN;
	int32_t t60 = 134651;

    t60 = (x241==((x242&x243)<=x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = -1LL;
	static uint32_t x246 = UINT32_MAX;
	static uint32_t x247 = UINT32_MAX;

    t61 = (x245==((x246&x247)<=x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x249 = -380;
	volatile uint64_t x250 = 48273856LLU;
	int64_t x251 = 46364960875477977LL;
	uint8_t x252 = 1U;
	volatile int32_t t62 = 1653;

    t62 = (x249==((x250&x251)<=x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int16_t x254 = INT16_MIN;
	volatile int8_t x255 = INT8_MIN;
	volatile int32_t t63 = -870;

    t63 = (x253==((x254&x255)<=x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x257 = INT64_MIN;
	uint32_t x259 = 8756942U;
	int32_t x260 = -29472;
	int32_t t64 = -52418;

    t64 = (x257==((x258&x259)<=x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x261 = 790671122LL;
	static int32_t x262 = 1;
	static uint8_t x263 = 2U;
	volatile int32_t t65 = -1230482;

    t65 = (x261==((x262&x263)<=x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x265 = -1;
	int16_t x266 = -1;
	int64_t x267 = -1LL;
	int16_t x268 = INT16_MIN;
	volatile int32_t t66 = -1340569;

    t66 = (x265==((x266&x267)<=x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int16_t x269 = 4308;
	int16_t x270 = -243;
	uint16_t x272 = 126U;
	volatile int32_t t67 = -199;

    t67 = (x269==((x270&x271)<=x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x273 = INT8_MIN;
	uint8_t x274 = 50U;
	volatile uint8_t x275 = UINT8_MAX;
	int64_t x276 = -2848515LL;

    t68 = (x273==((x274&x275)<=x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x277 = 0U;
	int64_t x279 = -262160249111LL;
	uint64_t x280 = UINT64_MAX;

    t69 = (x277==((x278&x279)<=x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = INT64_MIN;
	volatile int8_t x282 = INT8_MIN;
	int32_t x284 = -49073018;
	volatile int32_t t70 = -3797440;

    t70 = (x281==((x282&x283)<=x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint16_t x285 = UINT16_MAX;
	int32_t x286 = INT32_MAX;
	int16_t x287 = 61;
	static uint32_t x288 = 503U;
	volatile int32_t t71 = -4;

    t71 = (x285==((x286&x287)<=x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x289 = 7;
	static volatile int16_t x290 = INT16_MAX;
	int16_t x291 = 0;
	int16_t x292 = INT16_MIN;
	int32_t t72 = -1;

    t72 = (x289==((x290&x291)<=x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x294 = UINT64_MAX;
	int32_t x296 = -1;
	int32_t t73 = -8732;

    t73 = (x293==((x294&x295)<=x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x297 = 1LL;
	int64_t x298 = INT64_MIN;
	static int16_t x299 = INT16_MIN;
	int8_t x300 = INT8_MIN;
	int32_t t74 = -176;

    t74 = (x297==((x298&x299)<=x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x301 = 4U;
	static int64_t x302 = -1LL;
	volatile uint16_t x303 = 223U;
	volatile int16_t x304 = INT16_MIN;
	volatile int32_t t75 = -39633;

    t75 = (x301==((x302&x303)<=x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint16_t x305 = 4U;
	uint16_t x306 = UINT16_MAX;
	int16_t x307 = 5153;
	static int32_t x308 = 448105;
	static volatile int32_t t76 = -36;

    t76 = (x305==((x306&x307)<=x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x309 = -1;
	int64_t x310 = INT64_MIN;
	volatile int8_t x311 = 22;
	uint8_t x312 = 16U;
	int32_t t77 = -73;

    t77 = (x309==((x310&x311)<=x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x315 = INT16_MIN;
	static int8_t x316 = INT8_MAX;

    t78 = (x313==((x314&x315)<=x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x317 = -6;
	int16_t x318 = INT16_MIN;
	volatile uint16_t x320 = 498U;
	int32_t t79 = 0;

    t79 = (x317==((x318&x319)<=x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x324 = UINT16_MAX;
	volatile int32_t t80 = -2607;

    t80 = (x321==((x322&x323)<=x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x326 = INT16_MIN;
	int8_t x327 = 0;
	int32_t t81 = 506095;

    t81 = (x325==((x326&x327)<=x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int8_t x331 = 1;
	int32_t t82 = 6675;

    t82 = (x329==((x330&x331)<=x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x333 = -6;
	uint32_t x334 = 260465265U;
	volatile int64_t x335 = -1LL;
	uint16_t x336 = 12751U;

    t83 = (x333==((x334&x335)<=x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x339 = -1;
	static int8_t x340 = -1;
	int32_t t84 = -147;

    t84 = (x337==((x338&x339)<=x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x341 = INT64_MIN;
	uint8_t x342 = UINT8_MAX;
	static volatile uint32_t x343 = 1525021U;
	static int64_t x344 = INT64_MIN;
	static int32_t t85 = -389;

    t85 = (x341==((x342&x343)<=x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile int32_t x346 = INT32_MIN;
	uint8_t x347 = 0U;
	int32_t t86 = -1;

    t86 = (x345==((x346&x347)<=x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x350 = 10735U;
	int64_t x352 = INT64_MIN;
	static int32_t t87 = 976664;

    t87 = (x349==((x350&x351)<=x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x353 = INT16_MAX;
	uint32_t x354 = 7142U;
	volatile uint32_t x355 = 106841U;
	volatile int16_t x356 = -88;
	int32_t t88 = 648;

    t88 = (x353==((x354&x355)<=x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x357 = 67U;
	uint8_t x358 = UINT8_MAX;
	volatile int32_t x359 = INT32_MIN;
	int32_t x360 = INT32_MAX;
	volatile int32_t t89 = -346;

    t89 = (x357==((x358&x359)<=x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x361 = 1080433368612LLU;
	int64_t x362 = INT64_MIN;
	uint32_t x363 = 518U;
	uint64_t x364 = 170437491LLU;
	static int32_t t90 = 556;

    t90 = (x361==((x362&x363)<=x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int64_t x365 = INT64_MIN;
	uint8_t x366 = 15U;
	static uint8_t x367 = 31U;
	volatile uint64_t x368 = 7011902465623056LLU;
	volatile int32_t t91 = -8;

    t91 = (x365==((x366&x367)<=x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x369 = 6U;
	volatile int64_t x370 = 26658LL;
	volatile int32_t x371 = INT32_MAX;
	volatile int32_t t92 = 1072288992;

    t92 = (x369==((x370&x371)<=x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x373 = INT8_MIN;
	uint8_t x374 = UINT8_MAX;
	static int8_t x375 = INT8_MIN;
	int32_t t93 = -118676;

    t93 = (x373==((x374&x375)<=x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int16_t x377 = -1;
	int16_t x378 = INT16_MAX;
	static volatile int64_t x379 = INT64_MAX;
	int32_t t94 = 1400;

    t94 = (x377==((x378&x379)<=x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static int16_t x381 = INT16_MIN;
	int16_t x382 = INT16_MAX;
	uint8_t x384 = 67U;
	int32_t t95 = 0;

    t95 = (x381==((x382&x383)<=x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x385 = INT32_MIN;
	uint64_t x386 = 933LLU;
	int64_t x387 = INT64_MIN;
	static int64_t x388 = INT64_MIN;

    t96 = (x385==((x386&x387)<=x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x390 = INT8_MIN;
	static uint64_t x391 = UINT64_MAX;
	int32_t x392 = -1821;
	int32_t t97 = 214;

    t97 = (x389==((x390&x391)<=x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x394 = 98U;
	uint8_t x395 = 9U;
	volatile int32_t t98 = -2067650;

    t98 = (x393==((x394&x395)<=x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x397 = 7U;
	int64_t x398 = INT64_MIN;
	uint64_t x400 = UINT64_MAX;
	static volatile int32_t t99 = 48594339;

    t99 = (x397==((x398&x399)<=x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = 56;
	volatile int32_t x402 = 98393;
	volatile uint8_t x404 = 1U;
	volatile int32_t t100 = 27135980;

    t100 = (x401==((x402&x403)<=x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x405 = 570153746U;
	int64_t x406 = -428326LL;
	int32_t x407 = 8060808;
	int64_t x408 = INT64_MIN;
	volatile int32_t t101 = -9487402;

    t101 = (x405==((x406&x407)<=x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint64_t x410 = 27860938521053128LLU;
	uint16_t x411 = 2176U;
	volatile int32_t t102 = 310449226;

    t102 = (x409==((x410&x411)<=x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x413 = -498;
	uint64_t x414 = UINT64_MAX;
	uint16_t x415 = UINT16_MAX;
	static int64_t x416 = -1LL;

    t103 = (x413==((x414&x415)<=x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x418 = -14393;
	int8_t x419 = -1;
	uint32_t x420 = 4405431U;
	int32_t t104 = -110660;

    t104 = (x417==((x418&x419)<=x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x421 = 1;
	int8_t x422 = -1;
	int16_t x423 = 2249;
	int16_t x424 = 27;
	int32_t t105 = 5;

    t105 = (x421==((x422&x423)<=x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x425 = INT32_MIN;
	int8_t x426 = INT8_MIN;
	int16_t x428 = INT16_MIN;
	static int32_t t106 = 7;

    t106 = (x425==((x426&x427)<=x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x429 = INT16_MIN;
	int8_t x430 = INT8_MAX;
	int64_t x431 = -52LL;
	int32_t x432 = INT32_MIN;
	int32_t t107 = 1;

    t107 = (x429==((x430&x431)<=x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x433 = -1;
	static uint32_t x434 = UINT32_MAX;
	uint16_t x435 = 24106U;
	int32_t x436 = -6802577;
	int32_t t108 = -8;

    t108 = (x433==((x434&x435)<=x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x437 = 228U;
	uint32_t x438 = 28179865U;
	volatile int64_t x439 = INT64_MAX;
	static int32_t x440 = -542393136;
	volatile int32_t t109 = 737;

    t109 = (x437==((x438&x439)<=x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x442 = -1;
	int32_t x444 = -139;
	int32_t t110 = 22;

    t110 = (x441==((x442&x443)<=x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x445 = INT8_MAX;
	volatile int16_t x447 = 146;
	int32_t x448 = INT32_MAX;
	static volatile int32_t t111 = -4;

    t111 = (x445==((x446&x447)<=x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x450 = -1;
	int16_t x451 = INT16_MIN;
	int8_t x452 = INT8_MAX;
	int32_t t112 = 395630;

    t112 = (x449==((x450&x451)<=x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x453 = INT16_MIN;
	uint32_t x454 = UINT32_MAX;
	uint8_t x455 = 33U;
	int64_t x456 = 59699LL;
	volatile int32_t t113 = 452896755;

    t113 = (x453==((x454&x455)<=x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int32_t x458 = INT32_MIN;
	static int8_t x459 = -1;
	static volatile int32_t t114 = 473899323;

    t114 = (x457==((x458&x459)<=x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x461 = UINT16_MAX;
	volatile int32_t x462 = INT32_MIN;
	uint64_t x463 = UINT64_MAX;
	uint32_t x464 = UINT32_MAX;
	volatile int32_t t115 = 407126979;

    t115 = (x461==((x462&x463)<=x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x465 = UINT64_MAX;
	uint32_t x466 = 4511U;
	uint16_t x467 = UINT16_MAX;
	int64_t x468 = 3366LL;
	int32_t t116 = 2463403;

    t116 = (x465==((x466&x467)<=x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x470 = -1;
	static uint64_t x471 = 2021296LLU;
	int32_t x472 = 0;
	int32_t t117 = -682416550;

    t117 = (x469==((x470&x471)<=x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x473 = INT32_MAX;
	uint64_t x474 = 3093739LLU;
	static uint32_t x475 = UINT32_MAX;
	uint32_t x476 = UINT32_MAX;
	static int32_t t118 = 68;

    t118 = (x473==((x474&x475)<=x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x477 = -1;
	volatile int64_t x478 = INT64_MIN;
	uint64_t x479 = 7331674632194LLU;
	int32_t x480 = INT32_MIN;
	int32_t t119 = 221832955;

    t119 = (x477==((x478&x479)<=x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x481 = -1;
	int32_t x482 = -1;
	int64_t x483 = INT64_MAX;
	int8_t x484 = 0;
	int32_t t120 = 44;

    t120 = (x481==((x482&x483)<=x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = -250;
	int16_t x486 = INT16_MAX;
	int16_t x488 = -5418;
	volatile int32_t t121 = 104533;

    t121 = (x485==((x486&x487)<=x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x489 = INT64_MAX;
	uint16_t x490 = 27U;
	uint64_t x491 = 2LLU;

    t122 = (x489==((x490&x491)<=x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x493 = 51U;
	int64_t x494 = -537050536316LL;
	int8_t x495 = -1;
	volatile int32_t t123 = 634891;

    t123 = (x493==((x494&x495)<=x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x497 = INT8_MIN;
	int64_t x498 = 1017296589235641LL;
	uint8_t x499 = 18U;
	uint16_t x500 = 20U;
	static int32_t t124 = 19003;

    t124 = (x497==((x498&x499)<=x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x501 = 37;
	uint16_t x502 = 3423U;
	int64_t x503 = INT64_MIN;
	uint32_t x504 = UINT32_MAX;
	int32_t t125 = -5;

    t125 = (x501==((x502&x503)<=x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x506 = INT64_MIN;
	static volatile int16_t x507 = -1;
	static uint8_t x508 = UINT8_MAX;
	static int32_t t126 = -7982608;

    t126 = (x505==((x506&x507)<=x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int16_t x509 = INT16_MIN;
	int64_t x510 = 665806897976673LL;
	static int8_t x511 = -1;
	int16_t x512 = INT16_MIN;
	static int32_t t127 = -60531;

    t127 = (x509==((x510&x511)<=x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x515 = INT16_MIN;
	int64_t x516 = INT64_MIN;
	static int32_t t128 = -6;

    t128 = (x513==((x514&x515)<=x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int64_t x517 = -1LL;
	volatile int8_t x518 = 0;
	static int16_t x519 = INT16_MIN;
	static int32_t t129 = 812839070;

    t129 = (x517==((x518&x519)<=x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x521 = INT64_MIN;
	uint16_t x522 = UINT16_MAX;
	volatile int32_t t130 = -7;

    t130 = (x521==((x522&x523)<=x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint16_t x525 = UINT16_MAX;
	volatile uint16_t x526 = 6U;
	volatile int8_t x527 = -5;
	uint32_t x528 = UINT32_MAX;
	static int32_t t131 = -31622988;

    t131 = (x525==((x526&x527)<=x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x529 = -1;
	static int32_t x530 = -1;
	uint16_t x531 = 6U;
	static int8_t x532 = -1;
	static volatile int32_t t132 = -1;

    t132 = (x529==((x530&x531)<=x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x533 = UINT16_MAX;
	uint64_t x534 = UINT64_MAX;
	int8_t x535 = -1;
	int64_t x536 = 3982897058LL;
	int32_t t133 = 13138146;

    t133 = (x533==((x534&x535)<=x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x537 = INT64_MAX;
	uint64_t x538 = 1865983096938666LLU;
	uint8_t x539 = 4U;
	int16_t x540 = INT16_MAX;
	volatile int32_t t134 = -201;

    t134 = (x537==((x538&x539)<=x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint32_t x541 = UINT32_MAX;
	int64_t x542 = INT64_MAX;
	uint8_t x544 = 1U;
	int32_t t135 = 116822;

    t135 = (x541==((x542&x543)<=x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x546 = UINT16_MAX;
	int8_t x547 = INT8_MAX;
	volatile int16_t x548 = INT16_MIN;
	int32_t t136 = 174070547;

    t136 = (x545==((x546&x547)<=x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x549 = 3573604067272LLU;
	int8_t x551 = -1;
	int32_t x552 = INT32_MIN;
	volatile int32_t t137 = 11459;

    t137 = (x549==((x550&x551)<=x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x553 = -179279006;
	int32_t x554 = 1289097;
	uint16_t x555 = 2U;
	static uint32_t x556 = 504U;
	static int32_t t138 = 48;

    t138 = (x553==((x554&x555)<=x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint16_t x557 = 3652U;
	uint64_t x559 = 14589742LLU;
	volatile int64_t x560 = INT64_MIN;

    t139 = (x557==((x558&x559)<=x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x561 = INT32_MAX;
	int8_t x562 = -13;
	int16_t x563 = INT16_MIN;
	volatile uint64_t x564 = 3947838070330503954LLU;

    t140 = (x561==((x562&x563)<=x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = INT32_MAX;
	static int32_t x566 = INT32_MIN;
	volatile int8_t x567 = -1;
	volatile int32_t t141 = 400645;

    t141 = (x565==((x566&x567)<=x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x569 = 93114724812461LL;
	static int32_t x570 = INT32_MAX;
	int32_t x571 = -62;
	uint32_t x572 = 12U;
	volatile int32_t t142 = -8056569;

    t142 = (x569==((x570&x571)<=x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x573 = 62745676540837LL;
	static int16_t x574 = INT16_MIN;
	static int32_t x576 = INT32_MAX;
	volatile int32_t t143 = -852470397;

    t143 = (x573==((x574&x575)<=x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x577 = 418U;
	uint32_t x578 = 1483500U;
	int64_t x580 = INT64_MIN;
	int32_t t144 = -44;

    t144 = (x577==((x578&x579)<=x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x581 = 6U;
	int32_t x584 = INT32_MIN;
	volatile int32_t t145 = 388;

    t145 = (x581==((x582&x583)<=x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = INT16_MIN;
	int64_t x587 = INT64_MIN;
	int8_t x588 = INT8_MIN;
	volatile int32_t t146 = 63867;

    t146 = (x585==((x586&x587)<=x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x589 = -1;
	uint64_t x590 = 2395830725954473LLU;
	int16_t x592 = -1;
	int32_t t147 = -891;

    t147 = (x589==((x590&x591)<=x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x593 = INT8_MIN;
	volatile uint32_t x594 = 12667U;
	static volatile int32_t x595 = INT32_MIN;
	int32_t t148 = -14;

    t148 = (x593==((x594&x595)<=x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x597 = 22;
	volatile uint8_t x598 = 0U;
	static int8_t x599 = 3;
	static int32_t t149 = -233;

    t149 = (x597==((x598&x599)<=x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint16_t x603 = 0U;
	int32_t t150 = 233066676;

    t150 = (x601==((x602&x603)<=x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x605 = INT64_MAX;
	static int8_t x607 = INT8_MIN;
	volatile uint16_t x608 = 6056U;

    t151 = (x605==((x606&x607)<=x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint64_t x609 = 21414LLU;
	volatile int32_t x610 = -1;
	int16_t x611 = INT16_MIN;
	uint16_t x612 = 21799U;
	static int32_t t152 = -738666;

    t152 = (x609==((x610&x611)<=x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x613 = 0;
	static int32_t x615 = INT32_MAX;
	int64_t x616 = INT64_MAX;

    t153 = (x613==((x614&x615)<=x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x617 = -1;
	int64_t x618 = INT64_MAX;
	uint16_t x619 = 30U;
	int64_t x620 = 1819868LL;
	volatile int32_t t154 = 22;

    t154 = (x617==((x618&x619)<=x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x622 = INT16_MAX;
	int32_t x623 = -1;
	volatile int32_t x624 = INT32_MAX;
	static volatile int32_t t155 = -11458;

    t155 = (x621==((x622&x623)<=x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint8_t x625 = 0U;
	volatile int8_t x626 = INT8_MAX;
	static uint8_t x628 = 33U;

    t156 = (x625==((x626&x627)<=x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint16_t x629 = 0U;
	uint8_t x630 = UINT8_MAX;
	int16_t x631 = -1;
	static int8_t x632 = INT8_MAX;

    t157 = (x629==((x630&x631)<=x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile uint16_t x633 = UINT16_MAX;
	static volatile uint32_t x634 = 3385U;
	int32_t x635 = INT32_MIN;
	int32_t x636 = INT32_MIN;
	int32_t t158 = 88978956;

    t158 = (x633==((x634&x635)<=x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x637 = UINT16_MAX;
	static int8_t x638 = -1;
	uint16_t x639 = 4631U;

    t159 = (x637==((x638&x639)<=x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x641 = -1;
	int64_t x642 = -1299LL;
	static volatile int32_t t160 = -105413;

    t160 = (x641==((x642&x643)<=x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x645 = INT16_MAX;
	uint64_t x646 = 119015729979915159LLU;
	static uint8_t x647 = 0U;
	int16_t x648 = -7578;
	int32_t t161 = -45;

    t161 = (x645==((x646&x647)<=x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = -1;
	volatile int16_t x650 = INT16_MIN;
	int8_t x651 = -1;
	static int32_t t162 = -7215445;

    t162 = (x649==((x650&x651)<=x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x653 = INT32_MAX;
	uint8_t x655 = 1U;
	volatile uint8_t x656 = UINT8_MAX;

    t163 = (x653==((x654&x655)<=x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x657 = INT8_MIN;
	uint64_t x658 = 389515012420662LLU;
	int32_t x660 = -65280829;
	int32_t t164 = 47;

    t164 = (x657==((x658&x659)<=x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x661 = 0;
	uint8_t x662 = 1U;
	int64_t x663 = -454482LL;
	int16_t x664 = 7;
	static volatile int32_t t165 = 17;

    t165 = (x661==((x662&x663)<=x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int64_t x665 = INT64_MIN;
	uint8_t x666 = 1U;
	uint16_t x668 = 13872U;
	int32_t t166 = -1562;

    t166 = (x665==((x666&x667)<=x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x669 = INT16_MIN;
	static int16_t x670 = INT16_MAX;
	int32_t x672 = INT32_MAX;
	int32_t t167 = 2;

    t167 = (x669==((x670&x671)<=x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int64_t x673 = -1LL;
	int64_t x674 = -177203540280LL;
	int8_t x676 = INT8_MIN;
	volatile int32_t t168 = -39920313;

    t168 = (x673==((x674&x675)<=x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x678 = INT16_MIN;
	static int8_t x679 = 1;
	volatile uint16_t x680 = UINT16_MAX;
	int32_t t169 = 3841709;

    t169 = (x677==((x678&x679)<=x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x681 = INT8_MIN;
	uint64_t x682 = 504170LLU;
	int8_t x683 = -1;
	static int64_t x684 = INT64_MAX;
	int32_t t170 = -367;

    t170 = (x681==((x682&x683)<=x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x685 = 1376LL;
	int64_t x686 = INT64_MIN;
	int16_t x688 = -1;
	volatile int32_t t171 = 3702;

    t171 = (x685==((x686&x687)<=x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x690 = 5710004850239886LLU;
	static uint8_t x692 = 26U;
	int32_t t172 = 1197591;

    t172 = (x689==((x690&x691)<=x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x693 = -110;
	int32_t x694 = INT32_MIN;
	static uint16_t x695 = UINT16_MAX;
	static int32_t x696 = 351;

    t173 = (x693==((x694&x695)<=x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x697 = -1;
	int8_t x698 = INT8_MIN;

    t174 = (x697==((x698&x699)<=x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x701 = 843120388LLU;
	uint32_t x702 = 232U;
	int64_t x704 = INT64_MAX;
	static volatile int32_t t175 = -637161149;

    t175 = (x701==((x702&x703)<=x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x705 = 0U;
	int16_t x706 = INT16_MAX;
	uint16_t x707 = 387U;
	int32_t t176 = -59648;

    t176 = (x705==((x706&x707)<=x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint64_t x710 = 3105LLU;
	uint16_t x712 = 3U;
	int32_t t177 = 1023545;

    t177 = (x709==((x710&x711)<=x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x713 = INT32_MAX;
	int32_t x714 = 5541;
	uint16_t x715 = 23U;
	static int64_t x716 = -1430394LL;
	static int32_t t178 = -5;

    t178 = (x713==((x714&x715)<=x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x717 = INT8_MAX;
	int64_t x719 = 991337345LL;
	uint32_t x720 = 145U;
	volatile int32_t t179 = -1;

    t179 = (x717==((x718&x719)<=x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x721 = -1LL;
	int16_t x722 = INT16_MIN;
	int8_t x723 = 23;
	volatile int32_t x724 = -1;

    t180 = (x721==((x722&x723)<=x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x726 = INT8_MIN;
	volatile int8_t x727 = INT8_MAX;
	int8_t x728 = -1;
	static int32_t t181 = 4100625;

    t181 = (x725==((x726&x727)<=x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int32_t x729 = INT32_MIN;
	int64_t x730 = -562LL;
	uint32_t x732 = 847298U;
	volatile int32_t t182 = -9832935;

    t182 = (x729==((x730&x731)<=x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x733 = INT16_MAX;
	volatile int16_t x734 = 2658;
	uint8_t x735 = UINT8_MAX;
	int8_t x736 = 23;
	int32_t t183 = -120736663;

    t183 = (x733==((x734&x735)<=x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x737 = INT16_MAX;
	int16_t x739 = INT16_MAX;
	int8_t x740 = INT8_MIN;
	volatile int32_t t184 = 33685;

    t184 = (x737==((x738&x739)<=x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x741 = UINT32_MAX;
	uint16_t x743 = 587U;
	volatile uint8_t x744 = 84U;
	int32_t t185 = -126958;

    t185 = (x741==((x742&x743)<=x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x745 = -1;
	int32_t x746 = INT32_MIN;
	int16_t x747 = -178;
	uint16_t x748 = 6513U;
	int32_t t186 = 8008;

    t186 = (x745==((x746&x747)<=x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint8_t x750 = 25U;
	volatile int16_t x752 = -1;
	volatile int32_t t187 = 31;

    t187 = (x749==((x750&x751)<=x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x753 = -27LL;
	int64_t x754 = INT64_MIN;

    t188 = (x753==((x754&x755)<=x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x757 = -1LL;
	int64_t x758 = -3992943220881983795LL;
	uint64_t x759 = UINT64_MAX;
	uint64_t x760 = UINT64_MAX;
	int32_t t189 = 753;

    t189 = (x757==((x758&x759)<=x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int64_t x761 = INT64_MIN;
	int8_t x762 = INT8_MAX;
	int32_t x763 = -1;
	int16_t x764 = 59;
	int32_t t190 = 561;

    t190 = (x761==((x762&x763)<=x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x765 = -4261;
	volatile int32_t x766 = INT32_MAX;
	int64_t x767 = -136981251769507315LL;
	int32_t x768 = 406288;
	volatile int32_t t191 = -14713;

    t191 = (x765==((x766&x767)<=x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x769 = INT8_MIN;
	int32_t x770 = INT32_MAX;
	int32_t x771 = INT32_MIN;
	int8_t x772 = -1;
	int32_t t192 = 27;

    t192 = (x769==((x770&x771)<=x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x773 = -257624;
	uint32_t x774 = 102365872U;
	int64_t x775 = -1LL;
	static uint16_t x776 = UINT16_MAX;
	volatile int32_t t193 = -3582;

    t193 = (x773==((x774&x775)<=x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x777 = INT16_MAX;
	volatile int64_t x779 = INT64_MIN;
	static int16_t x780 = INT16_MIN;

    t194 = (x777==((x778&x779)<=x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x781 = INT64_MIN;
	int64_t x782 = INT64_MAX;
	volatile int32_t t195 = 8;

    t195 = (x781==((x782&x783)<=x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = INT16_MIN;
	volatile uint32_t x786 = UINT32_MAX;
	static uint16_t x788 = 70U;
	volatile int32_t t196 = -29;

    t196 = (x785==((x786&x787)<=x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint64_t x789 = 294834153017234LLU;
	int8_t x791 = -43;
	int64_t x792 = -1LL;
	static int32_t t197 = 215143;

    t197 = (x789==((x790&x791)<=x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x793 = INT64_MAX;
	static int8_t x794 = 6;
	uint16_t x795 = UINT16_MAX;
	uint32_t x796 = 3U;
	int32_t t198 = -108071535;

    t198 = (x793==((x794&x795)<=x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x797 = 1;
	volatile uint8_t x798 = 2U;
	int8_t x799 = INT8_MIN;
	int8_t x800 = INT8_MIN;
	volatile int32_t t199 = -12;

    t199 = (x797==((x798&x799)<=x800));

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

