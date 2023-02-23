
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

int32_t x5 = -1;
int64_t x6 = -1LL;
volatile int64_t x7 = -1LL;
static int8_t x17 = INT8_MIN;
volatile int16_t x23 = INT16_MAX;
volatile int32_t t6 = 5;
volatile uint32_t x36 = UINT32_MAX;
int64_t x37 = -512429375329LL;
volatile int32_t t9 = 11507;
uint32_t x47 = UINT32_MAX;
static int32_t t11 = 4416219;
int8_t x50 = INT8_MIN;
static volatile int32_t t14 = 13131864;
static int32_t t15 = -90264044;
volatile uint16_t x65 = 29712U;
static uint64_t x67 = 54187519390LLU;
static int64_t x78 = INT64_MIN;
volatile int64_t x83 = -217445LL;
static volatile int32_t t19 = 161;
int16_t x88 = 1;
volatile uint64_t x91 = UINT64_MAX;
int16_t x105 = -1;
uint8_t x108 = 115U;
uint32_t x112 = UINT32_MAX;
static int64_t x126 = 38LL;
uint16_t x127 = 1394U;
volatile int16_t x129 = -1;
volatile int64_t x130 = INT64_MIN;
uint16_t x134 = UINT16_MAX;
volatile uint16_t x142 = 802U;
static uint16_t x151 = 6982U;
int32_t x154 = INT32_MIN;
int32_t t38 = 1;
int16_t x172 = INT16_MIN;
int32_t t41 = -2;
volatile uint64_t x173 = 2210021LLU;
int16_t x174 = INT16_MIN;
static int32_t x176 = 51578;
volatile uint32_t x178 = 8410U;
uint8_t x184 = 125U;
static uint8_t x186 = 3U;
uint8_t x190 = 4U;
static uint8_t x204 = UINT8_MAX;
uint64_t x209 = UINT64_MAX;
volatile uint8_t x212 = UINT8_MAX;
uint16_t x219 = 19693U;
int16_t x228 = INT16_MIN;
int32_t t55 = -13423633;
int32_t x232 = 8991080;
volatile int8_t x242 = -47;
static uint32_t x244 = UINT32_MAX;
uint8_t x254 = 53U;
volatile uint8_t x256 = 52U;
static uint8_t x260 = 24U;
int64_t x264 = -1LL;
int32_t x270 = -54;
static uint64_t x281 = 383965904741LLU;
int32_t t68 = -48421;
static volatile int8_t x286 = INT8_MAX;
uint64_t x287 = UINT64_MAX;
static int8_t x290 = INT8_MIN;
int8_t x292 = INT8_MIN;
volatile int32_t x293 = -5647918;
int16_t x298 = -1;
int32_t t75 = 15562495;
int16_t x324 = 1;
volatile int64_t x330 = -1LL;
static volatile int8_t x336 = 0;
int32_t t80 = 68;
volatile int32_t t81 = -18476278;
int8_t x349 = INT8_MAX;
volatile uint32_t x351 = 6U;
uint64_t x352 = UINT64_MAX;
uint32_t x359 = 52704354U;
uint32_t x362 = UINT32_MAX;
static int8_t x364 = -1;
int16_t x368 = 4;
static int16_t x371 = -1;
volatile int32_t t91 = -7296;
int64_t x385 = -1LL;
static int8_t x388 = -3;
volatile int32_t t93 = -3;
static int16_t x393 = INT16_MIN;
volatile int8_t x394 = 1;
int64_t x396 = -1LL;
uint32_t x397 = 3976U;
volatile uint64_t x403 = 25903841LLU;
static int32_t x407 = INT32_MAX;
static uint16_t x410 = 2995U;
int32_t x412 = INT32_MIN;
static int16_t x419 = INT16_MIN;
volatile int32_t t100 = -94;
static uint32_t x422 = 1U;
static volatile uint32_t x424 = UINT32_MAX;
volatile int64_t x426 = INT64_MIN;
int8_t x427 = -3;
static int8_t x445 = -1;
static int64_t x452 = -1LL;
volatile int32_t x460 = -1;
static uint8_t x468 = 1U;
volatile int8_t x482 = INT8_MIN;
int32_t x486 = INT32_MAX;
uint32_t x487 = 87603816U;
uint16_t x489 = 13573U;
volatile int32_t t116 = 2048281;
static volatile int8_t x494 = INT8_MAX;
int8_t x496 = INT8_MAX;
static int32_t t117 = -1;
volatile int32_t t118 = -1;
int16_t x505 = 354;
int32_t x507 = INT32_MIN;
int16_t x512 = INT16_MAX;
int8_t x514 = INT8_MAX;
int32_t x516 = -1;
int32_t t124 = -2970;
int16_t x526 = 3;
int8_t x532 = INT8_MIN;
int64_t x533 = -1LL;
volatile uint8_t x534 = UINT8_MAX;
volatile int32_t t127 = 142738021;
volatile int32_t x539 = -1;
uint32_t x541 = 432326045U;
int32_t x550 = INT32_MIN;
uint32_t x551 = 10U;
int32_t x554 = INT32_MIN;
volatile int16_t x555 = -4000;
uint64_t x557 = 859195218735663599LLU;
int32_t t133 = 8173;
int8_t x569 = -1;
uint8_t x570 = 1U;
static int32_t x575 = INT32_MIN;
int32_t x583 = 1;
static int32_t t138 = 8811323;
int16_t x588 = -203;
int8_t x589 = -9;
static int32_t x590 = -371;
int32_t t141 = -31114;
volatile int8_t x608 = INT8_MIN;
static uint32_t x609 = UINT32_MAX;
static int8_t x611 = -1;
volatile int32_t x616 = -114688263;
static int64_t x619 = INT64_MIN;
volatile int32_t t151 = -2535;
static int16_t x641 = INT16_MAX;
static int8_t x644 = INT8_MIN;
static volatile int8_t x645 = 0;
static int64_t x651 = -128207LL;
volatile int32_t t155 = -28022;
static uint64_t x655 = 55101639640286355LLU;
volatile int16_t x659 = INT16_MIN;
uint64_t x660 = UINT64_MAX;
volatile int32_t t157 = 12816;
static int8_t x661 = -1;
volatile int32_t x664 = -2707;
uint8_t x668 = 9U;
int32_t t160 = -5516081;
static int32_t t161 = 123930;
volatile uint8_t x685 = 0U;
int32_t x689 = -4;
int16_t x693 = INT16_MIN;
volatile int32_t t166 = 246881;
uint64_t x710 = 468LLU;
int32_t x711 = INT32_MIN;
uint64_t x723 = UINT64_MAX;
volatile uint32_t x728 = 0U;
volatile uint16_t x729 = 28U;
uint32_t x734 = UINT32_MAX;
int32_t x738 = -1;
uint32_t x739 = 38U;
int32_t t174 = 537112;
static volatile int32_t x743 = INT32_MIN;
volatile int32_t t178 = -689;
static int8_t x758 = 0;
volatile int8_t x761 = INT8_MIN;
static uint8_t x764 = 0U;
int32_t t181 = -2;
int8_t x769 = INT8_MIN;
uint16_t x771 = 10U;
uint32_t x773 = 6088U;
volatile int8_t x774 = 10;
int32_t t183 = 813875;
int16_t x780 = INT16_MIN;
int8_t x781 = -34;
int64_t x785 = -508LL;
volatile int32_t t186 = 1;
int8_t x789 = INT8_MIN;
static uint16_t x795 = 0U;
int16_t x798 = -4170;
int64_t x809 = -1LL;
static int32_t t192 = -1;
int16_t x818 = 9026;
static uint16_t x823 = 3U;
static int8_t x826 = -1;
int8_t x830 = -1;
int8_t x834 = -3;
uint8_t x836 = UINT8_MAX;


void f0(void) {
    	static uint64_t x1 = 44384LLU;
	volatile uint64_t x2 = 51LLU;
	int32_t x3 = -76;
	static int16_t x4 = INT16_MIN;
	int32_t t0 = 50921237;

    t0 = (x1!=((x2|x3)-x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x8 = INT32_MIN;
	int32_t t1 = 16;

    t1 = (x5!=((x6|x7)-x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = -1;
	int16_t x10 = INT16_MAX;
	volatile int16_t x11 = -15841;
	static volatile int8_t x12 = 15;
	int32_t t2 = 3;

    t2 = (x9!=((x10|x11)-x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile uint32_t x13 = 19159705U;
	int32_t x14 = INT32_MAX;
	int16_t x15 = -1;
	int64_t x16 = 61594382774495LL;
	volatile int32_t t3 = -2229568;

    t3 = (x13!=((x14|x15)-x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x18 = INT8_MIN;
	int32_t x19 = INT32_MIN;
	int32_t x20 = INT32_MIN;
	static volatile int32_t t4 = -265146473;

    t4 = (x17!=((x18|x19)-x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = -1LL;
	uint32_t x22 = 127789640U;
	volatile int8_t x24 = INT8_MIN;
	static volatile int32_t t5 = 1;

    t5 = (x21!=((x22|x23)-x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x25 = 1U;
	int8_t x26 = 1;
	volatile uint16_t x27 = UINT16_MAX;
	static uint16_t x28 = 105U;

    t6 = (x25!=((x26|x27)-x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x29 = 2036U;
	volatile uint32_t x30 = UINT32_MAX;
	int64_t x31 = 869671594691466187LL;
	static uint16_t x32 = 29U;
	int32_t t7 = 160102;

    t7 = (x29!=((x30|x31)-x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x33 = 1U;
	static uint8_t x34 = 0U;
	static uint64_t x35 = 328309385266878452LLU;
	volatile int32_t t8 = -8267735;

    t8 = (x33!=((x34|x35)-x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x38 = 0;
	static int64_t x39 = -1LL;
	int16_t x40 = INT16_MIN;

    t9 = (x37!=((x38|x39)-x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = -25378131736LL;
	int8_t x42 = INT8_MIN;
	int8_t x43 = 11;
	volatile int64_t x44 = -7410LL;
	volatile int32_t t10 = -14567;

    t10 = (x41!=((x42|x43)-x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x45 = 1990294;
	int16_t x46 = INT16_MAX;
	static int32_t x48 = INT32_MAX;

    t11 = (x45!=((x46|x47)-x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = -1;
	int32_t x51 = INT32_MIN;
	uint64_t x52 = UINT64_MAX;
	volatile int32_t t12 = 934553923;

    t12 = (x49!=((x50|x51)-x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x53 = 16096U;
	uint32_t x54 = 298822U;
	volatile int64_t x55 = -1LL;
	static uint64_t x56 = 19206525836643LLU;
	volatile int32_t t13 = 12;

    t13 = (x53!=((x54|x55)-x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = -1LL;
	uint16_t x58 = UINT16_MAX;
	uint64_t x59 = UINT64_MAX;
	uint32_t x60 = 197U;

    t14 = (x57!=((x58|x59)-x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint16_t x61 = UINT16_MAX;
	uint64_t x62 = 8681760961LLU;
	int64_t x63 = INT64_MIN;
	volatile int8_t x64 = INT8_MIN;

    t15 = (x61!=((x62|x63)-x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint32_t x66 = 8012U;
	uint8_t x68 = 1U;
	volatile int32_t t16 = -163929;

    t16 = (x65!=((x66|x67)-x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x73 = INT64_MIN;
	volatile uint64_t x74 = 15196LLU;
	uint8_t x75 = 3U;
	int64_t x76 = -135456002425LL;
	volatile int32_t t17 = -32080224;

    t17 = (x73!=((x74|x75)-x76));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x77 = 18U;
	volatile int64_t x79 = -11039249328417367LL;
	volatile int16_t x80 = INT16_MAX;
	int32_t t18 = -12239;

    t18 = (x77!=((x78|x79)-x80));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x81 = INT8_MAX;
	uint16_t x82 = UINT16_MAX;
	int16_t x84 = -1;

    t19 = (x81!=((x82|x83)-x84));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x85 = 374523LL;
	int32_t x86 = INT32_MAX;
	int16_t x87 = -1;
	int32_t t20 = 87;

    t20 = (x85!=((x86|x87)-x88));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint64_t x89 = 553368991082548LLU;
	int16_t x90 = INT16_MIN;
	uint16_t x92 = 1U;
	volatile int32_t t21 = 4341507;

    t21 = (x89!=((x90|x91)-x92));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x93 = INT64_MIN;
	int32_t x94 = INT32_MIN;
	int16_t x95 = INT16_MAX;
	uint32_t x96 = 16723535U;
	int32_t t22 = 1;

    t22 = (x93!=((x94|x95)-x96));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x97 = INT8_MIN;
	static uint64_t x98 = 3418LLU;
	int64_t x99 = INT64_MIN;
	uint16_t x100 = UINT16_MAX;
	volatile int32_t t23 = -17;

    t23 = (x97!=((x98|x99)-x100));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x101 = INT16_MAX;
	int16_t x102 = INT16_MAX;
	int8_t x103 = INT8_MIN;
	uint64_t x104 = 437LLU;
	int32_t t24 = 29667;

    t24 = (x101!=((x102|x103)-x104));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x106 = -1;
	uint8_t x107 = UINT8_MAX;
	int32_t t25 = -2478;

    t25 = (x105!=((x106|x107)-x108));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint8_t x109 = UINT8_MAX;
	uint16_t x110 = 7371U;
	volatile int32_t x111 = INT32_MIN;
	int32_t t26 = 187798;

    t26 = (x109!=((x110|x111)-x112));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x113 = -4526638099942174240LL;
	int64_t x114 = -1LL;
	int8_t x115 = -7;
	static int8_t x116 = INT8_MIN;
	volatile int32_t t27 = 1508;

    t27 = (x113!=((x114|x115)-x116));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x117 = 30U;
	int16_t x118 = 891;
	volatile int8_t x119 = -7;
	int64_t x120 = -1LL;
	int32_t t28 = 661;

    t28 = (x117!=((x118|x119)-x120));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x121 = UINT8_MAX;
	uint32_t x122 = 1648U;
	uint64_t x123 = 3867465855273LLU;
	int64_t x124 = -53846582162759LL;
	int32_t t29 = -1;

    t29 = (x121!=((x122|x123)-x124));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x125 = UINT8_MAX;
	volatile int32_t x128 = 741;
	volatile int32_t t30 = 6;

    t30 = (x125!=((x126|x127)-x128));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x131 = 686LL;
	uint8_t x132 = 14U;
	volatile int32_t t31 = -1;

    t31 = (x129!=((x130|x131)-x132));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x133 = INT64_MIN;
	uint64_t x135 = 80677LLU;
	uint8_t x136 = 5U;
	int32_t t32 = 10;

    t32 = (x133!=((x134|x135)-x136));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x137 = INT16_MIN;
	volatile uint16_t x138 = 1765U;
	int8_t x139 = INT8_MAX;
	int16_t x140 = -7485;
	volatile int32_t t33 = -33189;

    t33 = (x137!=((x138|x139)-x140));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x141 = -19;
	volatile int32_t x143 = -1;
	int16_t x144 = -5;
	int32_t t34 = 15151;

    t34 = (x141!=((x142|x143)-x144));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x145 = -1LL;
	int16_t x146 = 237;
	volatile int64_t x147 = INT64_MIN;
	static volatile int8_t x148 = INT8_MIN;
	static int32_t t35 = -12186398;

    t35 = (x145!=((x146|x147)-x148));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x149 = INT16_MIN;
	int16_t x150 = INT16_MIN;
	volatile uint32_t x152 = 393366838U;
	volatile int32_t t36 = 673433;

    t36 = (x149!=((x150|x151)-x152));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x153 = UINT32_MAX;
	static int16_t x155 = INT16_MIN;
	int8_t x156 = -1;
	int32_t t37 = -588688;

    t37 = (x153!=((x154|x155)-x156));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint64_t x157 = 2402344LLU;
	int16_t x158 = 42;
	static int8_t x159 = INT8_MIN;
	static uint64_t x160 = 15748127869348541LLU;

    t38 = (x157!=((x158|x159)-x160));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint64_t x161 = UINT64_MAX;
	int32_t x162 = INT32_MIN;
	uint8_t x163 = UINT8_MAX;
	static int16_t x164 = -247;
	int32_t t39 = 24881;

    t39 = (x161!=((x162|x163)-x164));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x165 = UINT32_MAX;
	int8_t x166 = INT8_MIN;
	uint32_t x167 = 16213876U;
	static int16_t x168 = 2;
	int32_t t40 = 47077;

    t40 = (x165!=((x166|x167)-x168));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x169 = INT64_MAX;
	uint16_t x170 = 103U;
	int8_t x171 = INT8_MIN;

    t41 = (x169!=((x170|x171)-x172));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x175 = -1;
	int32_t t42 = -232578;

    t42 = (x173!=((x174|x175)-x176));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x177 = 44LLU;
	static int16_t x179 = -1;
	int16_t x180 = 0;
	volatile int32_t t43 = 30581;

    t43 = (x177!=((x178|x179)-x180));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x181 = -59848LL;
	volatile int64_t x182 = INT64_MIN;
	volatile int16_t x183 = -6;
	int32_t t44 = -4775;

    t44 = (x181!=((x182|x183)-x184));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x185 = 1;
	static volatile int32_t x187 = INT32_MIN;
	int16_t x188 = -295;
	volatile int32_t t45 = -1234896;

    t45 = (x185!=((x186|x187)-x188));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint32_t x189 = 4U;
	int16_t x191 = -98;
	static int32_t x192 = INT32_MIN;
	static int32_t t46 = -2850;

    t46 = (x189!=((x190|x191)-x192));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x193 = 0U;
	int32_t x194 = -387203;
	uint8_t x195 = UINT8_MAX;
	int64_t x196 = 0LL;
	int32_t t47 = -63793;

    t47 = (x193!=((x194|x195)-x196));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x197 = INT32_MIN;
	static volatile int64_t x198 = INT64_MIN;
	int8_t x199 = 1;
	int64_t x200 = -1LL;
	static volatile int32_t t48 = -2;

    t48 = (x197!=((x198|x199)-x200));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint8_t x201 = UINT8_MAX;
	int16_t x202 = INT16_MIN;
	int64_t x203 = -1LL;
	int32_t t49 = -14;

    t49 = (x201!=((x202|x203)-x204));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint8_t x205 = 76U;
	int8_t x206 = -7;
	int32_t x207 = INT32_MAX;
	static int64_t x208 = INT64_MAX;
	static int32_t t50 = 41541353;

    t50 = (x205!=((x206|x207)-x208));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static int32_t x210 = INT32_MAX;
	volatile uint8_t x211 = 20U;
	volatile int32_t t51 = -199963820;

    t51 = (x209!=((x210|x211)-x212));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x213 = -1;
	int16_t x214 = 222;
	uint8_t x215 = 13U;
	volatile int64_t x216 = 1050116965619939LL;
	int32_t t52 = -195728548;

    t52 = (x213!=((x214|x215)-x216));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x217 = 10;
	static int16_t x218 = 0;
	int8_t x220 = INT8_MIN;
	int32_t t53 = -92429;

    t53 = (x217!=((x218|x219)-x220));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x221 = -352997LL;
	static int16_t x222 = INT16_MAX;
	int32_t x223 = -1;
	uint16_t x224 = UINT16_MAX;
	volatile int32_t t54 = -7078457;

    t54 = (x221!=((x222|x223)-x224));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile uint32_t x225 = 0U;
	int32_t x226 = 18936;
	static volatile int16_t x227 = -8;

    t55 = (x225!=((x226|x227)-x228));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x229 = -11;
	volatile uint64_t x230 = 20210902LLU;
	static volatile int16_t x231 = INT16_MIN;
	static int32_t t56 = -3196963;

    t56 = (x229!=((x230|x231)-x232));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x233 = -1LL;
	static int8_t x234 = -1;
	volatile uint64_t x235 = 1022347152LLU;
	int16_t x236 = INT16_MIN;
	volatile int32_t t57 = 317;

    t57 = (x233!=((x234|x235)-x236));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x237 = INT32_MAX;
	int16_t x238 = 3;
	int16_t x239 = 0;
	int32_t x240 = -4391;
	static int32_t t58 = -15663;

    t58 = (x237!=((x238|x239)-x240));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x241 = UINT16_MAX;
	static int32_t x243 = -1;
	volatile int32_t t59 = -1;

    t59 = (x241!=((x242|x243)-x244));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x249 = 71413;
	volatile uint16_t x250 = UINT16_MAX;
	uint8_t x251 = 5U;
	int8_t x252 = -1;
	volatile int32_t t60 = -5;

    t60 = (x249!=((x250|x251)-x252));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x253 = 1090524454106782756LL;
	int8_t x255 = INT8_MIN;
	int32_t t61 = -105858567;

    t61 = (x253!=((x254|x255)-x256));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int16_t x257 = -1346;
	int8_t x258 = INT8_MIN;
	volatile int8_t x259 = 1;
	volatile int32_t t62 = -25785556;

    t62 = (x257!=((x258|x259)-x260));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint16_t x261 = 111U;
	volatile int64_t x262 = INT64_MIN;
	static uint8_t x263 = UINT8_MAX;
	volatile int32_t t63 = -217294;

    t63 = (x261!=((x262|x263)-x264));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x265 = 31527U;
	int32_t x266 = INT32_MIN;
	uint16_t x267 = 2535U;
	int32_t x268 = INT32_MIN;
	volatile int32_t t64 = -1553;

    t64 = (x265!=((x266|x267)-x268));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x269 = INT32_MAX;
	uint32_t x271 = 1104U;
	int16_t x272 = 33;
	int32_t t65 = -1364245;

    t65 = (x269!=((x270|x271)-x272));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x273 = INT16_MAX;
	int64_t x274 = -4135370LL;
	static uint16_t x275 = 25U;
	volatile int64_t x276 = -1LL;
	volatile int32_t t66 = 103918;

    t66 = (x273!=((x274|x275)-x276));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int8_t x277 = -1;
	volatile int8_t x278 = INT8_MIN;
	volatile uint32_t x279 = UINT32_MAX;
	int16_t x280 = INT16_MIN;
	int32_t t67 = 22;

    t67 = (x277!=((x278|x279)-x280));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint16_t x282 = 6745U;
	volatile uint16_t x283 = 1U;
	int32_t x284 = INT32_MAX;

    t68 = (x281!=((x282|x283)-x284));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x285 = INT64_MIN;
	int16_t x288 = INT16_MAX;
	static int32_t t69 = -170838008;

    t69 = (x285!=((x286|x287)-x288));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x289 = INT64_MIN;
	int32_t x291 = INT32_MIN;
	int32_t t70 = -3305;

    t70 = (x289!=((x290|x291)-x292));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint32_t x294 = UINT32_MAX;
	int16_t x295 = -1992;
	int8_t x296 = INT8_MIN;
	int32_t t71 = 0;

    t71 = (x293!=((x294|x295)-x296));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x297 = -1;
	static int32_t x299 = 92277938;
	static volatile int8_t x300 = -1;
	volatile int32_t t72 = -23;

    t72 = (x297!=((x298|x299)-x300));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x301 = UINT32_MAX;
	static int64_t x302 = -229527LL;
	int16_t x303 = INT16_MIN;
	static int32_t x304 = INT32_MIN;
	int32_t t73 = -9469;

    t73 = (x301!=((x302|x303)-x304));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x305 = 0LL;
	static int16_t x306 = -1;
	uint16_t x307 = 26U;
	static uint64_t x308 = UINT64_MAX;
	int32_t t74 = 39275;

    t74 = (x305!=((x306|x307)-x308));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x309 = INT64_MIN;
	static int16_t x310 = INT16_MAX;
	volatile uint16_t x311 = 214U;
	int8_t x312 = -1;

    t75 = (x309!=((x310|x311)-x312));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x317 = 16461070LL;
	int16_t x318 = INT16_MIN;
	uint8_t x319 = 2U;
	int32_t x320 = INT32_MIN;
	volatile int32_t t76 = 2356;

    t76 = (x317!=((x318|x319)-x320));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x321 = 399;
	static int8_t x322 = INT8_MAX;
	int64_t x323 = INT64_MIN;
	volatile int32_t t77 = 10176835;

    t77 = (x321!=((x322|x323)-x324));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x325 = INT32_MAX;
	int16_t x326 = INT16_MAX;
	int8_t x327 = INT8_MIN;
	int64_t x328 = INT64_MIN;
	volatile int32_t t78 = 6;

    t78 = (x325!=((x326|x327)-x328));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint8_t x329 = UINT8_MAX;
	int64_t x331 = 103521448960LL;
	int64_t x332 = -2970536774660LL;
	volatile int32_t t79 = 135;

    t79 = (x329!=((x330|x331)-x332));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x333 = 72654LL;
	int8_t x334 = INT8_MIN;
	static int8_t x335 = -1;

    t80 = (x333!=((x334|x335)-x336));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x337 = INT16_MIN;
	int8_t x338 = 18;
	int16_t x339 = -1;
	volatile uint32_t x340 = 1122439341U;

    t81 = (x337!=((x338|x339)-x340));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x341 = INT16_MIN;
	int64_t x342 = -1LL;
	int8_t x343 = INT8_MIN;
	int64_t x344 = -1LL;
	int32_t t82 = 0;

    t82 = (x341!=((x342|x343)-x344));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x350 = -20;
	static int32_t t83 = -1313807;

    t83 = (x349!=((x350|x351)-x352));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x353 = 123U;
	int16_t x354 = -1;
	volatile int8_t x355 = -1;
	static int32_t x356 = -1;
	static volatile int32_t t84 = 1;

    t84 = (x353!=((x354|x355)-x356));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int32_t x357 = INT32_MIN;
	int16_t x358 = -1;
	uint16_t x360 = UINT16_MAX;
	static int32_t t85 = 1071931597;

    t85 = (x357!=((x358|x359)-x360));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile int8_t x361 = -1;
	static int64_t x363 = INT64_MIN;
	volatile int32_t t86 = -17055344;

    t86 = (x361!=((x362|x363)-x364));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint16_t x365 = UINT16_MAX;
	int32_t x366 = -1;
	uint16_t x367 = 0U;
	volatile int32_t t87 = -367;

    t87 = (x365!=((x366|x367)-x368));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x369 = -24;
	int8_t x370 = 1;
	int32_t x372 = 2;
	int32_t t88 = 0;

    t88 = (x369!=((x370|x371)-x372));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x373 = 4015U;
	int8_t x374 = -1;
	uint16_t x375 = UINT16_MAX;
	int16_t x376 = -1;
	int32_t t89 = 807837;

    t89 = (x373!=((x374|x375)-x376));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int8_t x377 = -1;
	int64_t x378 = 18474412LL;
	uint16_t x379 = 350U;
	uint64_t x380 = 9678237009271LLU;
	int32_t t90 = 537;

    t90 = (x377!=((x378|x379)-x380));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint64_t x381 = 525LLU;
	int8_t x382 = INT8_MAX;
	uint8_t x383 = 7U;
	uint8_t x384 = 0U;

    t91 = (x381!=((x382|x383)-x384));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x386 = 11;
	int8_t x387 = -1;
	volatile int32_t t92 = 3;

    t92 = (x385!=((x386|x387)-x388));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint64_t x389 = 8862875318585810LLU;
	static int64_t x390 = INT64_MIN;
	int16_t x391 = -1;
	int8_t x392 = INT8_MIN;

    t93 = (x389!=((x390|x391)-x392));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x395 = 59;
	volatile int32_t t94 = -7;

    t94 = (x393!=((x394|x395)-x396));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x398 = -248;
	int8_t x399 = INT8_MAX;
	int16_t x400 = 1;
	int32_t t95 = 435011;

    t95 = (x397!=((x398|x399)-x400));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x401 = 483U;
	uint16_t x402 = 1U;
	int32_t x404 = INT32_MAX;
	volatile int32_t t96 = -1286;

    t96 = (x401!=((x402|x403)-x404));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint8_t x405 = 23U;
	int16_t x406 = -1;
	static uint16_t x408 = UINT16_MAX;
	int32_t t97 = -8251841;

    t97 = (x405!=((x406|x407)-x408));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x409 = INT32_MAX;
	static uint64_t x411 = 12073220117LLU;
	volatile int32_t t98 = 24630;

    t98 = (x409!=((x410|x411)-x412));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x413 = 1064098706LL;
	volatile uint16_t x414 = 5148U;
	uint16_t x415 = UINT16_MAX;
	int16_t x416 = INT16_MIN;
	int32_t t99 = -637437;

    t99 = (x413!=((x414|x415)-x416));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x417 = 55;
	volatile int32_t x418 = 327526288;
	uint32_t x420 = UINT32_MAX;

    t100 = (x417!=((x418|x419)-x420));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x421 = -1LL;
	int16_t x423 = INT16_MIN;
	volatile int32_t t101 = 413865;

    t101 = (x421!=((x422|x423)-x424));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x425 = INT8_MAX;
	int8_t x428 = -8;
	int32_t t102 = -285161;

    t102 = (x425!=((x426|x427)-x428));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint8_t x429 = UINT8_MAX;
	int64_t x430 = 2478361962239244LL;
	volatile int32_t x431 = -808108;
	int64_t x432 = INT64_MIN;
	static int32_t t103 = 35;

    t103 = (x429!=((x430|x431)-x432));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x433 = -1LL;
	uint64_t x434 = 126984530804354LLU;
	volatile int64_t x435 = 4511966455936239637LL;
	uint32_t x436 = 105U;
	static int32_t t104 = 31015811;

    t104 = (x433!=((x434|x435)-x436));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x437 = 22;
	int32_t x438 = INT32_MIN;
	uint32_t x439 = 172U;
	static int16_t x440 = INT16_MIN;
	volatile int32_t t105 = -15770;

    t105 = (x437!=((x438|x439)-x440));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x446 = 0;
	int32_t x447 = -733609573;
	volatile uint32_t x448 = 93U;
	int32_t t106 = -310;

    t106 = (x445!=((x446|x447)-x448));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x449 = INT8_MIN;
	uint8_t x450 = 67U;
	int8_t x451 = INT8_MAX;
	static int32_t t107 = -829548;

    t107 = (x449!=((x450|x451)-x452));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x453 = INT64_MAX;
	int32_t x454 = -1;
	int64_t x455 = -1LL;
	int32_t x456 = INT32_MAX;
	volatile int32_t t108 = 29;

    t108 = (x453!=((x454|x455)-x456));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x457 = INT32_MIN;
	int8_t x458 = -2;
	static uint8_t x459 = 22U;
	volatile int32_t t109 = -1;

    t109 = (x457!=((x458|x459)-x460));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x461 = UINT16_MAX;
	volatile int32_t x462 = -1;
	int8_t x463 = INT8_MIN;
	int8_t x464 = -1;
	int32_t t110 = -582684119;

    t110 = (x461!=((x462|x463)-x464));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int32_t x465 = 44855645;
	int32_t x466 = -1;
	int16_t x467 = INT16_MIN;
	volatile int32_t t111 = 595;

    t111 = (x465!=((x466|x467)-x468));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x469 = UINT16_MAX;
	uint64_t x470 = UINT64_MAX;
	int8_t x471 = INT8_MIN;
	int8_t x472 = INT8_MIN;
	int32_t t112 = 2085535;

    t112 = (x469!=((x470|x471)-x472));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x477 = UINT64_MAX;
	uint16_t x478 = 3U;
	volatile int64_t x479 = -1LL;
	int32_t x480 = -7298;
	static volatile int32_t t113 = -857204517;

    t113 = (x477!=((x478|x479)-x480));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint32_t x481 = 36U;
	static uint32_t x483 = UINT32_MAX;
	uint64_t x484 = 2058969861LLU;
	static int32_t t114 = 319833883;

    t114 = (x481!=((x482|x483)-x484));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x485 = INT8_MIN;
	int32_t x488 = 180;
	volatile int32_t t115 = -861546348;

    t115 = (x485!=((x486|x487)-x488));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x490 = INT16_MAX;
	static uint8_t x491 = 3U;
	int64_t x492 = 221663LL;

    t116 = (x489!=((x490|x491)-x492));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x493 = INT8_MIN;
	static uint16_t x495 = 63U;

    t117 = (x493!=((x494|x495)-x496));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x497 = INT16_MIN;
	int8_t x498 = 3;
	int32_t x499 = -3;
	static uint8_t x500 = 1U;

    t118 = (x497!=((x498|x499)-x500));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x501 = INT64_MAX;
	uint8_t x502 = 1U;
	int8_t x503 = -1;
	int8_t x504 = -1;
	volatile int32_t t119 = -6;

    t119 = (x501!=((x502|x503)-x504));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static int32_t x506 = INT32_MIN;
	uint64_t x508 = 2801LLU;
	static volatile int32_t t120 = -15108280;

    t120 = (x505!=((x506|x507)-x508));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x509 = INT64_MAX;
	uint32_t x510 = 283045086U;
	int32_t x511 = 5059;
	int32_t t121 = 123824520;

    t121 = (x509!=((x510|x511)-x512));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x513 = INT16_MIN;
	int16_t x515 = INT16_MAX;
	volatile int32_t t122 = 2867933;

    t122 = (x513!=((x514|x515)-x516));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint16_t x517 = 0U;
	volatile int32_t x518 = -754348407;
	volatile int16_t x519 = -392;
	static int32_t x520 = INT32_MIN;
	volatile int32_t t123 = 1;

    t123 = (x517!=((x518|x519)-x520));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static int32_t x521 = 0;
	int32_t x522 = INT32_MAX;
	static uint32_t x523 = UINT32_MAX;
	int8_t x524 = -1;

    t124 = (x521!=((x522|x523)-x524));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x525 = INT16_MIN;
	int16_t x527 = INT16_MAX;
	static int32_t x528 = -1;
	int32_t t125 = -5;

    t125 = (x525!=((x526|x527)-x528));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x529 = INT32_MAX;
	uint16_t x530 = 11957U;
	static int16_t x531 = INT16_MIN;
	volatile int32_t t126 = 511;

    t126 = (x529!=((x530|x531)-x532));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint16_t x535 = 13226U;
	int64_t x536 = 9LL;

    t127 = (x533!=((x534|x535)-x536));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x537 = INT16_MAX;
	int64_t x538 = INT64_MIN;
	int8_t x540 = 50;
	int32_t t128 = 28927;

    t128 = (x537!=((x538|x539)-x540));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x542 = UINT32_MAX;
	int32_t x543 = INT32_MIN;
	volatile int16_t x544 = INT16_MAX;
	volatile int32_t t129 = 59012248;

    t129 = (x541!=((x542|x543)-x544));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x545 = 1U;
	int8_t x546 = INT8_MIN;
	int8_t x547 = INT8_MIN;
	int32_t x548 = INT32_MIN;
	int32_t t130 = 13392;

    t130 = (x545!=((x546|x547)-x548));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x549 = 31996U;
	volatile uint64_t x552 = 7313696LLU;
	volatile int32_t t131 = -4790;

    t131 = (x549!=((x550|x551)-x552));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x553 = INT16_MAX;
	uint64_t x556 = 4007LLU;
	static int32_t t132 = -6;

    t132 = (x553!=((x554|x555)-x556));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x558 = 532;
	volatile int32_t x559 = -1;
	uint64_t x560 = 0LLU;

    t133 = (x557!=((x558|x559)-x560));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x561 = 27204U;
	uint32_t x562 = 197768U;
	uint64_t x563 = 103708LLU;
	volatile int64_t x564 = INT64_MAX;
	int32_t t134 = 992391243;

    t134 = (x561!=((x562|x563)-x564));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x571 = 1;
	uint32_t x572 = 410308823U;
	static int32_t t135 = 2862;

    t135 = (x569!=((x570|x571)-x572));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x573 = UINT16_MAX;
	volatile int8_t x574 = INT8_MIN;
	uint16_t x576 = 2U;
	int32_t t136 = 57103995;

    t136 = (x573!=((x574|x575)-x576));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x577 = 15;
	uint8_t x578 = 115U;
	int64_t x579 = 26101LL;
	int32_t x580 = INT32_MIN;
	int32_t t137 = -400;

    t137 = (x577!=((x578|x579)-x580));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x581 = INT8_MIN;
	volatile uint16_t x582 = 26U;
	volatile int64_t x584 = -1LL;

    t138 = (x581!=((x582|x583)-x584));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x585 = -1;
	int32_t x586 = -1;
	uint64_t x587 = UINT64_MAX;
	volatile int32_t t139 = 31184657;

    t139 = (x585!=((x586|x587)-x588));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x591 = 40319380100811LLU;
	uint8_t x592 = 1U;
	static volatile int32_t t140 = -98;

    t140 = (x589!=((x590|x591)-x592));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x593 = INT8_MIN;
	int8_t x594 = -1;
	int16_t x595 = INT16_MIN;
	volatile uint32_t x596 = UINT32_MAX;

    t141 = (x593!=((x594|x595)-x596));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x597 = 42U;
	volatile int32_t x598 = INT32_MIN;
	uint64_t x599 = UINT64_MAX;
	int64_t x600 = INT64_MIN;
	volatile int32_t t142 = -52;

    t142 = (x597!=((x598|x599)-x600));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x601 = UINT8_MAX;
	volatile uint16_t x602 = 58U;
	uint32_t x603 = UINT32_MAX;
	volatile int64_t x604 = 30211110LL;
	volatile int32_t t143 = -31;

    t143 = (x601!=((x602|x603)-x604));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile uint32_t x605 = UINT32_MAX;
	int32_t x606 = -1;
	volatile int32_t x607 = INT32_MIN;
	int32_t t144 = 19152;

    t144 = (x605!=((x606|x607)-x608));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint16_t x610 = 62U;
	static int64_t x612 = INT64_MAX;
	volatile int32_t t145 = -16;

    t145 = (x609!=((x610|x611)-x612));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x613 = -1;
	static volatile int64_t x614 = INT64_MIN;
	int16_t x615 = -1;
	int32_t t146 = 222287233;

    t146 = (x613!=((x614|x615)-x616));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x617 = INT8_MAX;
	int32_t x618 = INT32_MIN;
	int64_t x620 = INT64_MIN;
	volatile int32_t t147 = 251;

    t147 = (x617!=((x618|x619)-x620));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x621 = INT8_MIN;
	static volatile int16_t x622 = INT16_MAX;
	int16_t x623 = -36;
	uint8_t x624 = UINT8_MAX;
	volatile int32_t t148 = 9151;

    t148 = (x621!=((x622|x623)-x624));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int16_t x625 = INT16_MIN;
	volatile int8_t x626 = 7;
	volatile uint32_t x627 = UINT32_MAX;
	int8_t x628 = INT8_MIN;
	int32_t t149 = -6;

    t149 = (x625!=((x626|x627)-x628));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x629 = -1;
	int8_t x630 = INT8_MIN;
	uint8_t x631 = 17U;
	static int8_t x632 = INT8_MIN;
	int32_t t150 = -405044;

    t150 = (x629!=((x630|x631)-x632));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x633 = INT64_MIN;
	static uint32_t x634 = 427731U;
	uint32_t x635 = UINT32_MAX;
	uint8_t x636 = 3U;

    t151 = (x633!=((x634|x635)-x636));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x637 = 195U;
	volatile int16_t x638 = 1319;
	static uint32_t x639 = 1739221286U;
	uint64_t x640 = 121LLU;
	volatile int32_t t152 = 494;

    t152 = (x637!=((x638|x639)-x640));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x642 = INT64_MIN;
	int64_t x643 = INT64_MIN;
	int32_t t153 = 923363;

    t153 = (x641!=((x642|x643)-x644));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x646 = INT64_MIN;
	uint64_t x647 = 63LLU;
	int16_t x648 = INT16_MAX;
	int32_t t154 = 5781179;

    t154 = (x645!=((x646|x647)-x648));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x649 = 2U;
	int8_t x650 = 31;
	int32_t x652 = -1;

    t155 = (x649!=((x650|x651)-x652));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x653 = INT8_MAX;
	int64_t x654 = 7553898974623475LL;
	static int16_t x656 = -10357;
	int32_t t156 = -2478696;

    t156 = (x653!=((x654|x655)-x656));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x657 = 10;
	volatile int64_t x658 = 923623LL;

    t157 = (x657!=((x658|x659)-x660));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x662 = 336U;
	int64_t x663 = INT64_MIN;
	volatile int32_t t158 = -3517507;

    t158 = (x661!=((x662|x663)-x664));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x665 = INT16_MIN;
	int64_t x666 = INT64_MIN;
	int64_t x667 = -1LL;
	volatile int32_t t159 = -315808;

    t159 = (x665!=((x666|x667)-x668));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x673 = -1;
	int8_t x674 = INT8_MAX;
	volatile int32_t x675 = INT32_MIN;
	static int64_t x676 = -1LL;

    t160 = (x673!=((x674|x675)-x676));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x677 = 2U;
	uint16_t x678 = 1U;
	int8_t x679 = INT8_MIN;
	static uint16_t x680 = 524U;

    t161 = (x677!=((x678|x679)-x680));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int8_t x681 = 48;
	static int32_t x682 = INT32_MIN;
	static int64_t x683 = -1LL;
	int8_t x684 = -5;
	static int32_t t162 = -5;

    t162 = (x681!=((x682|x683)-x684));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x686 = INT16_MIN;
	int64_t x687 = -1LL;
	int8_t x688 = -1;
	static volatile int32_t t163 = -118925948;

    t163 = (x685!=((x686|x687)-x688));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x690 = 23U;
	static uint64_t x691 = UINT64_MAX;
	int32_t x692 = 25;
	volatile int32_t t164 = 34;

    t164 = (x689!=((x690|x691)-x692));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x694 = -1;
	volatile int16_t x695 = INT16_MAX;
	int32_t x696 = -8068873;
	static volatile int32_t t165 = 199846;

    t165 = (x693!=((x694|x695)-x696));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int8_t x697 = -1;
	int16_t x698 = -4;
	static uint64_t x699 = 33449839296LLU;
	uint16_t x700 = UINT16_MAX;

    t166 = (x697!=((x698|x699)-x700));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x709 = -34227778094LL;
	volatile uint32_t x712 = 579588U;
	int32_t t167 = -2658677;

    t167 = (x709!=((x710|x711)-x712));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x713 = INT32_MIN;
	uint32_t x714 = 499777U;
	int64_t x715 = -4706566101LL;
	static uint8_t x716 = UINT8_MAX;
	volatile int32_t t168 = -9779068;

    t168 = (x713!=((x714|x715)-x716));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x717 = UINT16_MAX;
	uint16_t x718 = UINT16_MAX;
	volatile uint64_t x719 = 35LLU;
	uint64_t x720 = 250LLU;
	int32_t t169 = 2;

    t169 = (x717!=((x718|x719)-x720));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x721 = INT64_MAX;
	uint32_t x722 = 95U;
	int64_t x724 = 1930521844571553LL;
	static volatile int32_t t170 = 15328;

    t170 = (x721!=((x722|x723)-x724));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x725 = UINT32_MAX;
	uint32_t x726 = 23921748U;
	uint64_t x727 = UINT64_MAX;
	volatile int32_t t171 = 2;

    t171 = (x725!=((x726|x727)-x728));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x730 = -1;
	volatile int16_t x731 = -1;
	static volatile int64_t x732 = -793794289388704LL;
	static int32_t t172 = 15;

    t172 = (x729!=((x730|x731)-x732));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x733 = UINT32_MAX;
	uint64_t x735 = 13940439927927324LLU;
	int32_t x736 = INT32_MAX;
	static int32_t t173 = 78026205;

    t173 = (x733!=((x734|x735)-x736));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x737 = -2288;
	int16_t x740 = INT16_MIN;

    t174 = (x737!=((x738|x739)-x740));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x741 = -263016289710LL;
	int8_t x742 = -1;
	int32_t x744 = INT32_MIN;
	volatile int32_t t175 = -218942359;

    t175 = (x741!=((x742|x743)-x744));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x745 = -1;
	int16_t x746 = 1;
	int16_t x747 = INT16_MIN;
	int32_t x748 = INT32_MIN;
	volatile int32_t t176 = 13951;

    t176 = (x745!=((x746|x747)-x748));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x749 = -1;
	volatile int64_t x750 = INT64_MIN;
	int64_t x751 = 0LL;
	static int64_t x752 = -1LL;
	int32_t t177 = 28332683;

    t177 = (x749!=((x750|x751)-x752));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x753 = 26747253874LLU;
	uint16_t x754 = UINT16_MAX;
	uint8_t x755 = 2U;
	static int8_t x756 = -1;

    t178 = (x753!=((x754|x755)-x756));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x757 = -1;
	int8_t x759 = -1;
	int64_t x760 = -1LL;
	volatile int32_t t179 = -57;

    t179 = (x757!=((x758|x759)-x760));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x762 = INT64_MAX;
	int64_t x763 = 860922LL;
	volatile int32_t t180 = 21036489;

    t180 = (x761!=((x762|x763)-x764));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x765 = INT16_MIN;
	int8_t x766 = INT8_MIN;
	uint64_t x767 = UINT64_MAX;
	int64_t x768 = 25872250LL;

    t181 = (x765!=((x766|x767)-x768));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x770 = INT64_MIN;
	int32_t x772 = -1;
	volatile int32_t t182 = 10759;

    t182 = (x769!=((x770|x771)-x772));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int16_t x775 = INT16_MAX;
	static int64_t x776 = INT64_MAX;

    t183 = (x773!=((x774|x775)-x776));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x777 = -1LL;
	uint8_t x778 = 45U;
	int16_t x779 = INT16_MIN;
	int32_t t184 = -159;

    t184 = (x777!=((x778|x779)-x780));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x782 = 31355829LL;
	volatile int16_t x783 = 1;
	static uint8_t x784 = UINT8_MAX;
	static volatile int32_t t185 = -489;

    t185 = (x781!=((x782|x783)-x784));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x786 = -1;
	static volatile int8_t x787 = INT8_MAX;
	int64_t x788 = -1LL;

    t186 = (x785!=((x786|x787)-x788));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x790 = -5566;
	uint16_t x791 = UINT16_MAX;
	uint16_t x792 = 236U;
	volatile int32_t t187 = 188307000;

    t187 = (x789!=((x790|x791)-x792));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x793 = 4430257LLU;
	int64_t x794 = INT64_MAX;
	static uint64_t x796 = 7833LLU;
	static volatile int32_t t188 = 1804;

    t188 = (x793!=((x794|x795)-x796));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x797 = UINT8_MAX;
	static uint64_t x799 = 1720524775LLU;
	int8_t x800 = -1;
	int32_t t189 = -279282;

    t189 = (x797!=((x798|x799)-x800));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x805 = 5720;
	int64_t x806 = -1LL;
	int16_t x807 = INT16_MAX;
	int64_t x808 = -5512623LL;
	volatile int32_t t190 = -5333;

    t190 = (x805!=((x806|x807)-x808));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint32_t x810 = 16430024U;
	static uint32_t x811 = UINT32_MAX;
	uint16_t x812 = UINT16_MAX;
	static int32_t t191 = 8632612;

    t191 = (x809!=((x810|x811)-x812));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int32_t x813 = 1;
	int16_t x814 = INT16_MIN;
	uint64_t x815 = 2803882787052002319LLU;
	volatile int64_t x816 = INT64_MIN;

    t192 = (x813!=((x814|x815)-x816));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x817 = -1LL;
	static int8_t x819 = INT8_MIN;
	uint8_t x820 = 29U;
	volatile int32_t t193 = 2208;

    t193 = (x817!=((x818|x819)-x820));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile int32_t x821 = INT32_MIN;
	int16_t x822 = INT16_MIN;
	uint16_t x824 = UINT16_MAX;
	volatile int32_t t194 = -9371;

    t194 = (x821!=((x822|x823)-x824));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x825 = -6300;
	volatile int64_t x827 = -24296161820910166LL;
	static uint32_t x828 = UINT32_MAX;
	int32_t t195 = -918;

    t195 = (x825!=((x826|x827)-x828));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint8_t x829 = 3U;
	volatile uint16_t x831 = UINT16_MAX;
	uint16_t x832 = UINT16_MAX;
	volatile int32_t t196 = -1239;

    t196 = (x829!=((x830|x831)-x832));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x833 = INT32_MIN;
	volatile int16_t x835 = 1;
	int32_t t197 = -31542686;

    t197 = (x833!=((x834|x835)-x836));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x837 = 120301214U;
	int16_t x838 = INT16_MAX;
	static volatile uint8_t x839 = UINT8_MAX;
	static volatile uint16_t x840 = 863U;
	static volatile int32_t t198 = 28;

    t198 = (x837!=((x838|x839)-x840));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x841 = -1;
	volatile uint16_t x842 = UINT16_MAX;
	static volatile int8_t x843 = -31;
	int8_t x844 = 1;
	int32_t t199 = 518870;

    t199 = (x841!=((x842|x843)-x844));

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

