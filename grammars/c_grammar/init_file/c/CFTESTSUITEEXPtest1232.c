
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

static volatile int8_t x1 = 0;
int32_t x3 = INT32_MIN;
int32_t t0 = 10718492;
uint8_t x7 = UINT8_MAX;
int64_t x13 = INT64_MIN;
static uint32_t x17 = 119391258U;
uint32_t x21 = UINT32_MAX;
int8_t x25 = INT8_MIN;
int32_t x27 = -7925;
volatile int32_t x34 = INT32_MIN;
int64_t x37 = -1261345282003LL;
static volatile uint64_t x40 = 2088921704295LLU;
volatile uint64_t t8 = 1302118421205509716LLU;
volatile int32_t t9 = 379195;
uint16_t x47 = 27U;
static volatile int64_t t10 = 243838733LL;
int8_t x50 = INT8_MIN;
static volatile uint8_t x52 = UINT8_MAX;
volatile uint32_t x57 = UINT32_MAX;
uint16_t x60 = 4773U;
uint32_t t13 = UINT32_MAX;
volatile int8_t x64 = INT8_MIN;
int32_t t14 = INT32_MIN;
uint16_t x69 = UINT16_MAX;
static uint64_t x73 = 3247172LLU;
int16_t x74 = INT16_MIN;
volatile int32_t t18 = 21997;
int8_t x86 = 2;
static uint8_t x87 = UINT8_MAX;
int32_t x89 = -7647;
int16_t x93 = 327;
int64_t x98 = INT64_MAX;
int8_t x108 = -1;
static int32_t x114 = -37077605;
static int64_t x115 = INT64_MIN;
int32_t t27 = -112144700;
int64_t x118 = 63471LL;
uint8_t x122 = 4U;
uint16_t x124 = 855U;
int8_t x135 = INT8_MIN;
int32_t x140 = INT32_MIN;
volatile int64_t t34 = 156509003744685LL;
static volatile int64_t t35 = -861747303284784LL;
int32_t x149 = INT32_MIN;
volatile int8_t x154 = -1;
uint8_t x156 = UINT8_MAX;
static int64_t t37 = -2353267271851291506LL;
static uint8_t x158 = UINT8_MAX;
int16_t x165 = 0;
volatile int16_t x169 = 11;
volatile uint8_t x182 = UINT8_MAX;
static int8_t x185 = 0;
int32_t t45 = -2102183;
static uint64_t x192 = 664670916LLU;
volatile uint64_t t46 = UINT64_MAX;
static int8_t x193 = -15;
static uint64_t x195 = 16652919LLU;
int32_t x199 = -1;
int64_t x201 = INT64_MAX;
uint32_t x211 = UINT32_MAX;
uint16_t x216 = 5U;
volatile uint32_t x222 = 421363U;
int64_t t54 = 5544LL;
int16_t x226 = INT16_MIN;
uint16_t x229 = 46U;
volatile int8_t x230 = INT8_MIN;
static int32_t x231 = -1;
uint32_t x236 = 37810U;
volatile int64_t t60 = INT64_MAX;
int32_t x261 = -1;
volatile int16_t x274 = INT16_MIN;
static int16_t x284 = INT16_MAX;
int8_t x287 = -1;
volatile int32_t t71 = -285672;
volatile int16_t x297 = INT16_MIN;
int16_t x300 = -2;
int16_t x304 = INT16_MIN;
static int64_t t75 = 9335199015926LL;
uint64_t x311 = UINT64_MAX;
volatile uint64_t t76 = 535LLU;
static uint8_t x314 = 3U;
int16_t x318 = INT16_MIN;
int32_t t78 = INT32_MAX;
uint32_t t81 = 22U;
uint16_t x333 = 0U;
volatile int32_t t82 = -970;
int8_t x339 = INT8_MAX;
int16_t x340 = INT16_MIN;
volatile int32_t t83 = 64860423;
static int64_t x347 = INT64_MIN;
volatile int64_t t86 = -756559LL;
volatile int8_t x355 = INT8_MIN;
static volatile int32_t t88 = 670564901;
volatile uint16_t x362 = UINT16_MAX;
int8_t x365 = INT8_MAX;
int64_t x368 = -16016787364953LL;
volatile int32_t x369 = INT32_MIN;
static uint64_t x381 = UINT64_MAX;
int8_t x382 = INT8_MIN;
static int64_t x384 = -393LL;
int64_t x386 = 8LL;
uint64_t t95 = UINT64_MAX;
uint64_t x389 = UINT64_MAX;
uint16_t x398 = 101U;
int64_t t98 = INT64_MIN;
static uint32_t x401 = UINT32_MAX;
int32_t x409 = INT32_MIN;
uint32_t x415 = UINT32_MAX;
int64_t x423 = 1351921378570610739LL;
static uint64_t x424 = UINT64_MAX;
int16_t x425 = -41;
int16_t x434 = -1;
uint32_t x441 = 1U;
int64_t x443 = INT64_MIN;
int32_t x455 = INT32_MAX;
volatile uint16_t x460 = 14725U;
uint8_t x463 = 2U;
int16_t x466 = INT16_MAX;
int32_t x470 = INT32_MIN;
int8_t x481 = INT8_MAX;
volatile int8_t x487 = -1;
int16_t x488 = INT16_MAX;
int64_t x494 = 152LL;
int8_t x497 = INT8_MIN;
static int8_t x500 = INT8_MIN;
uint8_t x502 = UINT8_MAX;
int16_t x506 = INT16_MAX;
volatile int32_t t125 = -26633066;
static int8_t x511 = -1;
uint64_t x513 = 13866526LLU;
int8_t x515 = -1;
uint64_t x518 = 11127LLU;
uint64_t t129 = 47626404388503LLU;
int32_t x533 = 13474;
uint16_t x534 = UINT16_MAX;
int64_t x548 = INT64_MAX;
uint64_t x557 = 12849898055984LLU;
int32_t x559 = INT32_MAX;
uint32_t x564 = UINT32_MAX;
int16_t x565 = 7019;
int32_t t140 = 15;
static volatile int8_t x569 = -1;
volatile int32_t x570 = INT32_MAX;
int8_t x571 = INT8_MIN;
volatile uint32_t x581 = 659402U;
uint64_t x584 = 13197422456LLU;
uint64_t x592 = 278229185809LLU;
static int16_t x593 = INT16_MAX;
volatile int32_t x596 = INT32_MAX;
volatile int32_t x599 = INT32_MIN;
volatile int64_t x603 = INT64_MAX;
uint64_t x606 = 4106318172206LLU;
static uint64_t x608 = UINT64_MAX;
uint64_t t148 = 41638LLU;
int8_t x614 = -1;
int16_t x621 = -1;
uint16_t x628 = UINT16_MAX;
int32_t t154 = 0;
uint32_t t155 = UINT32_MAX;
int8_t x637 = -7;
int64_t x642 = INT64_MIN;
int8_t x643 = INT8_MIN;
volatile int64_t t157 = 25214945221282LL;
static int32_t x650 = INT32_MIN;
static volatile int32_t t159 = -176435371;
int16_t x654 = -1;
volatile uint16_t x655 = UINT16_MAX;
int32_t t161 = -984331604;
volatile int16_t x664 = INT16_MIN;
int64_t x668 = INT64_MAX;
uint64_t t163 = 411LLU;
uint64_t x673 = UINT64_MAX;
static int32_t x680 = -1;
int16_t x683 = INT16_MIN;
uint64_t x684 = 469053465583026248LLU;
static volatile int16_t x685 = INT16_MIN;
int8_t x690 = 1;
int32_t t169 = 34333161;
volatile uint32_t x693 = 27572U;
volatile int32_t x695 = INT32_MIN;
int32_t x696 = INT32_MAX;
int64_t x697 = -1LL;
int16_t x698 = INT16_MAX;
int16_t x713 = -2;
uint8_t x717 = UINT8_MAX;
uint8_t x718 = 55U;
int32_t x719 = INT32_MIN;
int64_t x721 = -7LL;
int64_t x723 = -1LL;
volatile int64_t t177 = -6581898LL;
volatile int8_t x726 = INT8_MAX;
int64_t t179 = -352709LL;
static int16_t x737 = 5;
int64_t x740 = -72865LL;
volatile int64_t x748 = INT64_MIN;
static int16_t x750 = 7;
volatile int64_t x759 = INT64_MAX;
int64_t x761 = INT64_MAX;
volatile uint64_t t187 = 1143003355602LLU;
int32_t x767 = INT32_MIN;
static volatile uint64_t t188 = UINT64_MAX;
uint64_t x770 = 12596453406699202LLU;
int8_t x775 = INT8_MIN;
uint32_t x776 = UINT32_MAX;
uint16_t x779 = 980U;
uint8_t x781 = 8U;
int16_t x798 = -1;
volatile int32_t x801 = 42;
volatile uint8_t x808 = 43U;
volatile int32_t t198 = INT32_MAX;


void f0(void) {
    	int8_t x2 = -12;
	uint8_t x4 = UINT8_MAX;

    t0 = (x1^((x2!=x3)/x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MAX;
	uint16_t x6 = UINT16_MAX;
	uint8_t x8 = UINT8_MAX;
	int32_t t1 = 14;

    t1 = (x5^((x6!=x7)/x8));

    if (t1 != 32767) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x9 = 11;
	int32_t x10 = -1741;
	uint32_t x11 = 1055286475U;
	volatile int8_t x12 = INT8_MIN;
	volatile int32_t t2 = -47;

    t2 = (x9^((x10!=x11)/x12));

    if (t2 != 11) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x14 = INT8_MIN;
	int8_t x15 = 0;
	uint16_t x16 = 38U;
	volatile int64_t t3 = INT64_MIN;

    t3 = (x13^((x14!=x15)/x16));

    if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x18 = 4187885553249527LLU;
	int64_t x19 = INT64_MIN;
	int32_t x20 = 697689402;
	uint32_t t4 = 190U;

    t4 = (x17^((x18!=x19)/x20));

    if (t4 != 119391258U) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x22 = -1;
	int8_t x23 = 7;
	int16_t x24 = -883;
	volatile uint32_t t5 = UINT32_MAX;

    t5 = (x21^((x22!=x23)/x24));

    if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x26 = 5338720225011LL;
	int64_t x28 = INT64_MIN;
	int64_t t6 = -14LL;

    t6 = (x25^((x26!=x27)/x28));

    if (t6 != -128LL) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint32_t x33 = UINT32_MAX;
	static int64_t x35 = 3835884124LL;
	volatile int16_t x36 = INT16_MIN;
	volatile uint32_t t7 = UINT32_MAX;

    t7 = (x33^((x34!=x35)/x36));

    if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint32_t x38 = 969471U;
	static int32_t x39 = -114;

    t8 = (x37^((x38!=x39)/x40));

    if (t8 != 18446742812364269613LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x41 = -1;
	uint32_t x42 = 2598302U;
	int32_t x43 = -1;
	static uint8_t x44 = 56U;

    t9 = (x41^((x42!=x43)/x44));

    if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x45 = INT16_MIN;
	int32_t x46 = INT32_MAX;
	int64_t x48 = INT64_MAX;

    t10 = (x45^((x46!=x47)/x48));

    if (t10 != -32768LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x49 = UINT32_MAX;
	uint64_t x51 = 5168803590579096175LLU;
	uint32_t t11 = UINT32_MAX;

    t11 = (x49^((x50!=x51)/x52));

    if (t11 != UINT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x53 = -1;
	uint8_t x54 = 99U;
	int32_t x55 = INT32_MIN;
	int16_t x56 = INT16_MIN;
	volatile int32_t t12 = 1126;

    t12 = (x53^((x54!=x55)/x56));

    if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x58 = -1966772LL;
	int8_t x59 = INT8_MIN;

    t13 = (x57^((x58!=x59)/x60));

    if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x61 = INT32_MIN;
	int8_t x62 = INT8_MIN;
	uint8_t x63 = 3U;

    t14 = (x61^((x62!=x63)/x64));

    if (t14 != INT32_MIN) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x65 = UINT32_MAX;
	int16_t x66 = INT16_MAX;
	static int8_t x67 = -1;
	int8_t x68 = INT8_MIN;
	volatile uint32_t t15 = UINT32_MAX;

    t15 = (x65^((x66!=x67)/x68));

    if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	static int64_t x70 = -42338496403660LL;
	volatile int32_t x71 = INT32_MIN;
	int8_t x72 = INT8_MIN;
	int32_t t16 = 2;

    t16 = (x69^((x70!=x71)/x72));

    if (t16 != 65535) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x75 = 1175760351078500LL;
	int16_t x76 = 4313;
	volatile uint64_t t17 = 55LLU;

    t17 = (x73^((x74!=x75)/x76));

    if (t17 != 3247172LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x77 = -1;
	volatile uint64_t x78 = UINT64_MAX;
	volatile int64_t x79 = -727635045169694192LL;
	volatile int8_t x80 = INT8_MIN;

    t18 = (x77^((x78!=x79)/x80));

    if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x81 = 10577664962864991LLU;
	volatile int32_t x82 = -1;
	uint32_t x83 = 495332U;
	uint64_t x84 = 12LLU;
	volatile uint64_t t19 = 3042167LLU;

    t19 = (x81^((x82!=x83)/x84));

    if (t19 != 10577664962864991LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint8_t x85 = UINT8_MAX;
	volatile uint8_t x88 = UINT8_MAX;
	int32_t t20 = 36488639;

    t20 = (x85^((x86!=x87)/x88));

    if (t20 != 255) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x90 = UINT8_MAX;
	int32_t x91 = INT32_MIN;
	volatile int16_t x92 = INT16_MAX;
	volatile int32_t t21 = -21045045;

    t21 = (x89^((x90!=x91)/x92));

    if (t21 != -7647) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x94 = 52874710568702940LLU;
	uint64_t x95 = 1043834669001LLU;
	int32_t x96 = -8438101;
	volatile int32_t t22 = -35;

    t22 = (x93^((x94!=x95)/x96));

    if (t22 != 327) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x97 = INT32_MAX;
	int32_t x99 = INT32_MIN;
	uint16_t x100 = 944U;
	volatile int32_t t23 = INT32_MAX;

    t23 = (x97^((x98!=x99)/x100));

    if (t23 != INT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x101 = UINT32_MAX;
	int8_t x102 = -62;
	volatile uint16_t x103 = UINT16_MAX;
	static int32_t x104 = INT32_MIN;
	uint32_t t24 = UINT32_MAX;

    t24 = (x101^((x102!=x103)/x104));

    if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x105 = INT8_MIN;
	int8_t x106 = INT8_MIN;
	uint32_t x107 = UINT32_MAX;
	static int32_t t25 = 240;

    t25 = (x105^((x106!=x107)/x108));

    if (t25 != 127) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x109 = 2358U;
	static uint16_t x110 = 1563U;
	volatile int32_t x111 = -913245566;
	static int16_t x112 = 150;
	int32_t t26 = 30;

    t26 = (x109^((x110!=x111)/x112));

    if (t26 != 2358) { NG(); } else { ; }
	
}

void f27(void) {
    	static int8_t x113 = -1;
	int32_t x116 = INT32_MIN;

    t27 = (x113^((x114!=x115)/x116));

    if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x117 = INT16_MAX;
	int8_t x119 = INT8_MAX;
	volatile uint64_t x120 = 25796342451LLU;
	volatile uint64_t t28 = 124003629335274LLU;

    t28 = (x117^((x118!=x119)/x120));

    if (t28 != 32767LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x121 = INT32_MIN;
	uint64_t x123 = 251LLU;
	int32_t t29 = INT32_MIN;

    t29 = (x121^((x122!=x123)/x124));

    if (t29 != INT32_MIN) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x125 = INT64_MAX;
	static uint16_t x126 = 658U;
	uint16_t x127 = UINT16_MAX;
	static volatile int16_t x128 = INT16_MAX;
	int64_t t30 = INT64_MAX;

    t30 = (x125^((x126!=x127)/x128));

    if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x129 = 52U;
	static int64_t x130 = -1LL;
	uint64_t x131 = 219LLU;
	int16_t x132 = INT16_MAX;
	int32_t t31 = 10139;

    t31 = (x129^((x130!=x131)/x132));

    if (t31 != 52) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x133 = INT16_MIN;
	static int8_t x134 = 7;
	int8_t x136 = 1;
	int32_t t32 = -1;

    t32 = (x133^((x134!=x135)/x136));

    if (t32 != -32767) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x137 = UINT64_MAX;
	static uint16_t x138 = 204U;
	static uint64_t x139 = 500075716998241LLU;
	static volatile uint64_t t33 = UINT64_MAX;

    t33 = (x137^((x138!=x139)/x140));

    if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x141 = -1LL;
	uint32_t x142 = UINT32_MAX;
	int64_t x143 = INT64_MIN;
	int32_t x144 = -48858;

    t34 = (x141^((x142!=x143)/x144));

    if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x145 = -307;
	int8_t x146 = INT8_MAX;
	uint32_t x147 = 550934U;
	int64_t x148 = INT64_MIN;

    t35 = (x145^((x146!=x147)/x148));

    if (t35 != -307LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x150 = INT16_MAX;
	int8_t x151 = -11;
	int64_t x152 = INT64_MIN;
	int64_t t36 = -205530442LL;

    t36 = (x149^((x150!=x151)/x152));

    if (t36 != -2147483648LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x153 = -43727267968LL;
	volatile int8_t x155 = -1;

    t37 = (x153^((x154!=x155)/x156));

    if (t37 != -43727267968LL) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint32_t x157 = 3040493U;
	int8_t x159 = -1;
	int64_t x160 = INT64_MAX;
	int64_t t38 = 935237368295149LL;

    t38 = (x157^((x158!=x159)/x160));

    if (t38 != 3040493LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint32_t x161 = 9U;
	static int8_t x162 = INT8_MAX;
	int32_t x163 = INT32_MAX;
	int64_t x164 = -1LL;
	static volatile int64_t t39 = 5461251186LL;

    t39 = (x161^((x162!=x163)/x164));

    if (t39 != -10LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x166 = -1LL;
	volatile uint8_t x167 = 87U;
	int16_t x168 = -5;
	volatile int32_t t40 = 0;

    t40 = (x165^((x166!=x167)/x168));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x170 = INT64_MIN;
	uint16_t x171 = UINT16_MAX;
	int64_t x172 = INT64_MIN;
	int64_t t41 = -3755376053445893LL;

    t41 = (x169^((x170!=x171)/x172));

    if (t41 != 11LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint32_t x173 = 461034490U;
	uint64_t x174 = 4LLU;
	static volatile int32_t x175 = -171;
	uint16_t x176 = UINT16_MAX;
	uint32_t t42 = 65042U;

    t42 = (x173^((x174!=x175)/x176));

    if (t42 != 461034490U) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x177 = INT16_MIN;
	uint32_t x178 = 105018685U;
	int16_t x179 = -1;
	uint64_t x180 = 12812315LLU;
	volatile uint64_t t43 = 975834815LLU;

    t43 = (x177^((x178!=x179)/x180));

    if (t43 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x181 = UINT32_MAX;
	int8_t x183 = 1;
	int8_t x184 = -22;
	static volatile uint32_t t44 = UINT32_MAX;

    t44 = (x181^((x182!=x183)/x184));

    if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x186 = 0;
	uint64_t x187 = 4252037811306LLU;
	int8_t x188 = 20;

    t45 = (x185^((x186!=x187)/x188));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x189 = -1;
	volatile int32_t x190 = -1;
	uint64_t x191 = UINT64_MAX;

    t46 = (x189^((x190!=x191)/x192));

    if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x194 = 90U;
	uint32_t x196 = UINT32_MAX;
	volatile uint32_t t47 = 1U;

    t47 = (x193^((x194!=x195)/x196));

    if (t47 != 4294967281U) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x197 = UINT16_MAX;
	uint8_t x198 = UINT8_MAX;
	static int32_t x200 = INT32_MAX;
	static int32_t t48 = 0;

    t48 = (x197^((x198!=x199)/x200));

    if (t48 != 65535) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x202 = 57U;
	int16_t x203 = 15086;
	int16_t x204 = -1;
	volatile int64_t t49 = INT64_MIN;

    t49 = (x201^((x202!=x203)/x204));

    if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x205 = 62U;
	int32_t x206 = -1;
	volatile uint64_t x207 = UINT64_MAX;
	int64_t x208 = -1LL;
	volatile int64_t t50 = -1154274LL;

    t50 = (x205^((x206!=x207)/x208));

    if (t50 != 62LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x209 = INT32_MIN;
	static volatile int16_t x210 = INT16_MIN;
	volatile int32_t x212 = INT32_MAX;
	volatile int32_t t51 = INT32_MIN;

    t51 = (x209^((x210!=x211)/x212));

    if (t51 != INT32_MIN) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x213 = UINT8_MAX;
	int64_t x214 = -1LL;
	int16_t x215 = -1;
	volatile int32_t t52 = 610;

    t52 = (x213^((x214!=x215)/x216));

    if (t52 != 255) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x217 = 37U;
	static int16_t x218 = INT16_MAX;
	uint8_t x219 = 3U;
	uint32_t x220 = 8U;
	volatile uint32_t t53 = 2U;

    t53 = (x217^((x218!=x219)/x220));

    if (t53 != 37U) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x221 = -1683869269261449LL;
	int64_t x223 = INT64_MIN;
	static int64_t x224 = -1LL;

    t54 = (x221^((x222!=x223)/x224));

    if (t54 != 1683869269261448LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x225 = UINT64_MAX;
	static uint64_t x227 = 310283039294LLU;
	int32_t x228 = INT32_MAX;
	static volatile uint64_t t55 = UINT64_MAX;

    t55 = (x225^((x226!=x227)/x228));

    if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint32_t x232 = 193400U;
	static uint32_t t56 = 934U;

    t56 = (x229^((x230!=x231)/x232));

    if (t56 != 46U) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x233 = -40561;
	static int8_t x234 = 28;
	static uint8_t x235 = UINT8_MAX;
	uint32_t t57 = 25U;

    t57 = (x233^((x234!=x235)/x236));

    if (t57 != 4294926735U) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x237 = INT64_MIN;
	int64_t x238 = INT64_MAX;
	int32_t x239 = INT32_MIN;
	int32_t x240 = 5520;
	volatile int64_t t58 = INT64_MIN;

    t58 = (x237^((x238!=x239)/x240));

    if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x241 = INT8_MAX;
	volatile uint16_t x242 = 1U;
	int64_t x243 = INT64_MIN;
	int32_t x244 = 283;
	int32_t t59 = -126718785;

    t59 = (x241^((x242!=x243)/x244));

    if (t59 != 127) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x245 = INT64_MAX;
	int32_t x246 = INT32_MIN;
	static int64_t x247 = INT64_MIN;
	static int32_t x248 = INT32_MIN;

    t60 = (x245^((x246!=x247)/x248));

    if (t60 != INT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int32_t x249 = INT32_MAX;
	uint32_t x250 = UINT32_MAX;
	uint8_t x251 = UINT8_MAX;
	int64_t x252 = INT64_MIN;
	int64_t t61 = -1104LL;

    t61 = (x249^((x250!=x251)/x252));

    if (t61 != 2147483647LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x253 = -1353;
	uint8_t x254 = 0U;
	int64_t x255 = -1LL;
	int64_t x256 = INT64_MIN;
	volatile int64_t t62 = -340716074062492LL;

    t62 = (x253^((x254!=x255)/x256));

    if (t62 != -1353LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x257 = 5417U;
	volatile int16_t x258 = INT16_MIN;
	uint32_t x259 = 7644U;
	uint32_t x260 = 3U;
	static uint32_t t63 = 13848418U;

    t63 = (x257^((x258!=x259)/x260));

    if (t63 != 5417U) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x262 = 71U;
	static uint8_t x263 = UINT8_MAX;
	int64_t x264 = -680381131335LL;
	volatile int64_t t64 = 190426LL;

    t64 = (x261^((x262!=x263)/x264));

    if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x265 = 42U;
	int16_t x266 = INT16_MAX;
	volatile int32_t x267 = 12992;
	uint32_t x268 = UINT32_MAX;
	uint32_t t65 = 983419016U;

    t65 = (x265^((x266!=x267)/x268));

    if (t65 != 42U) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x269 = 3854U;
	int8_t x270 = 0;
	int32_t x271 = INT32_MIN;
	int16_t x272 = -1;
	int32_t t66 = 646;

    t66 = (x269^((x270!=x271)/x272));

    if (t66 != -3855) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x273 = INT16_MIN;
	uint32_t x275 = 960U;
	uint64_t x276 = 4433LLU;
	uint64_t t67 = 228469087LLU;

    t67 = (x273^((x274!=x275)/x276));

    if (t67 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x277 = 0LL;
	static int16_t x278 = 2646;
	volatile uint16_t x279 = 2893U;
	int32_t x280 = 5684;
	volatile int64_t t68 = 61895989734781LL;

    t68 = (x277^((x278!=x279)/x280));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x281 = -11841229634956631LL;
	uint16_t x282 = 6542U;
	uint16_t x283 = 497U;
	int64_t t69 = 1950847932LL;

    t69 = (x281^((x282!=x283)/x284));

    if (t69 != -11841229634956631LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x285 = INT16_MIN;
	uint8_t x286 = 9U;
	static int32_t x288 = 14;
	static volatile int32_t t70 = -8562056;

    t70 = (x285^((x286!=x287)/x288));

    if (t70 != -32768) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x289 = -13;
	int64_t x290 = -1LL;
	int32_t x291 = INT32_MAX;
	int32_t x292 = -1;

    t71 = (x289^((x290!=x291)/x292));

    if (t71 != 12) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x293 = UINT64_MAX;
	uint8_t x294 = UINT8_MAX;
	volatile int16_t x295 = -1;
	volatile int8_t x296 = INT8_MIN;
	volatile uint64_t t72 = UINT64_MAX;

    t72 = (x293^((x294!=x295)/x296));

    if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x298 = 664465LL;
	uint64_t x299 = UINT64_MAX;
	int32_t t73 = 310321501;

    t73 = (x297^((x298!=x299)/x300));

    if (t73 != -32768) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x301 = INT8_MIN;
	int32_t x302 = INT32_MAX;
	volatile uint8_t x303 = UINT8_MAX;
	int32_t t74 = -5;

    t74 = (x301^((x302!=x303)/x304));

    if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x305 = 62809928403927LL;
	int32_t x306 = 48944;
	int16_t x307 = INT16_MIN;
	int16_t x308 = INT16_MIN;

    t75 = (x305^((x306!=x307)/x308));

    if (t75 != 62809928403927LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x309 = 158847794LLU;
	static int32_t x310 = 63236;
	uint64_t x312 = 3282981540450400340LLU;

    t76 = (x309^((x310!=x311)/x312));

    if (t76 != 158847794LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint32_t x313 = 784U;
	static int8_t x315 = -1;
	uint64_t x316 = UINT64_MAX;
	uint64_t t77 = 46775432330492LLU;

    t77 = (x313^((x314!=x315)/x316));

    if (t77 != 784LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x317 = INT32_MIN;
	static uint64_t x319 = UINT64_MAX;
	int16_t x320 = -1;

    t78 = (x317^((x318!=x319)/x320));

    if (t78 != INT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int8_t x321 = INT8_MIN;
	static volatile int32_t x322 = -1;
	static int16_t x323 = INT16_MAX;
	static volatile int32_t x324 = INT32_MIN;
	static int32_t t79 = 793;

    t79 = (x321^((x322!=x323)/x324));

    if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile uint64_t x325 = 4857LLU;
	int8_t x326 = INT8_MAX;
	uint64_t x327 = UINT64_MAX;
	static int16_t x328 = INT16_MIN;
	volatile uint64_t t80 = 4085511LLU;

    t80 = (x325^((x326!=x327)/x328));

    if (t80 != 4857LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint32_t x329 = 91306U;
	int16_t x330 = 6;
	int16_t x331 = INT16_MIN;
	int16_t x332 = INT16_MAX;

    t81 = (x329^((x330!=x331)/x332));

    if (t81 != 91306U) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x334 = INT32_MAX;
	uint8_t x335 = UINT8_MAX;
	int16_t x336 = INT16_MIN;

    t82 = (x333^((x334!=x335)/x336));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x337 = INT16_MIN;
	int32_t x338 = INT32_MIN;

    t83 = (x337^((x338!=x339)/x340));

    if (t83 != -32768) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x341 = -1;
	uint64_t x342 = UINT64_MAX;
	static int32_t x343 = INT32_MIN;
	uint32_t x344 = 4U;
	uint32_t t84 = UINT32_MAX;

    t84 = (x341^((x342!=x343)/x344));

    if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int8_t x345 = INT8_MIN;
	volatile int32_t x346 = -31;
	volatile int32_t x348 = -55;
	volatile int32_t t85 = 3;

    t85 = (x345^((x346!=x347)/x348));

    if (t85 != -128) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x349 = 0U;
	volatile uint16_t x350 = UINT16_MAX;
	int64_t x351 = INT64_MAX;
	static int64_t x352 = -86240LL;

    t86 = (x349^((x350!=x351)/x352));

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x353 = UINT32_MAX;
	static int64_t x354 = -1LL;
	static uint32_t x356 = 7U;
	static uint32_t t87 = UINT32_MAX;

    t87 = (x353^((x354!=x355)/x356));

    if (t87 != UINT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x357 = 575U;
	int8_t x358 = INT8_MAX;
	static uint8_t x359 = UINT8_MAX;
	static int32_t x360 = INT32_MIN;

    t88 = (x357^((x358!=x359)/x360));

    if (t88 != 575) { NG(); } else { ; }
	
}

void f89(void) {
    	static int8_t x361 = INT8_MIN;
	volatile uint64_t x363 = 63439875479236377LLU;
	uint32_t x364 = 28022955U;
	volatile uint32_t t89 = 115421148U;

    t89 = (x361^((x362!=x363)/x364));

    if (t89 != 4294967168U) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x366 = -19;
	uint32_t x367 = 1U;
	volatile int64_t t90 = -15828872LL;

    t90 = (x365^((x366!=x367)/x368));

    if (t90 != 127LL) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int32_t x370 = INT32_MIN;
	uint16_t x371 = UINT16_MAX;
	int64_t x372 = INT64_MIN;
	int64_t t91 = 47177LL;

    t91 = (x369^((x370!=x371)/x372));

    if (t91 != -2147483648LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint8_t x373 = 1U;
	int32_t x374 = -1;
	volatile int8_t x375 = INT8_MAX;
	volatile uint16_t x376 = UINT16_MAX;
	volatile int32_t t92 = 39773;

    t92 = (x373^((x374!=x375)/x376));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x377 = INT32_MAX;
	volatile uint8_t x378 = 126U;
	int16_t x379 = -1;
	uint32_t x380 = 263U;
	static volatile uint32_t t93 = 65U;

    t93 = (x377^((x378!=x379)/x380));

    if (t93 != 2147483647U) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x383 = INT32_MIN;
	uint64_t t94 = UINT64_MAX;

    t94 = (x381^((x382!=x383)/x384));

    if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x385 = -1;
	int32_t x387 = INT32_MIN;
	static uint64_t x388 = 562802LLU;

    t95 = (x385^((x386!=x387)/x388));

    if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint16_t x390 = UINT16_MAX;
	volatile int16_t x391 = INT16_MAX;
	static volatile int32_t x392 = -1;
	uint64_t t96 = 451053677825269369LLU;

    t96 = (x389^((x390!=x391)/x392));

    if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x393 = -1;
	volatile int64_t x394 = -1LL;
	int8_t x395 = 1;
	static uint32_t x396 = 634927U;
	volatile uint32_t t97 = UINT32_MAX;

    t97 = (x393^((x394!=x395)/x396));

    if (t97 != UINT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x397 = INT64_MAX;
	int8_t x399 = INT8_MIN;
	int16_t x400 = -1;

    t98 = (x397^((x398!=x399)/x400));

    if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x402 = 67529673108617358LLU;
	static uint8_t x403 = 47U;
	uint32_t x404 = 44U;
	static volatile uint32_t t99 = UINT32_MAX;

    t99 = (x401^((x402!=x403)/x404));

    if (t99 != UINT32_MAX) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint32_t x405 = 126488035U;
	uint64_t x406 = 513864LLU;
	int64_t x407 = -1LL;
	volatile uint32_t x408 = 431U;
	volatile uint32_t t100 = 3U;

    t100 = (x405^((x406!=x407)/x408));

    if (t100 != 126488035U) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x410 = -61;
	int32_t x411 = 162557;
	static int16_t x412 = -1;
	volatile int32_t t101 = INT32_MAX;

    t101 = (x409^((x410!=x411)/x412));

    if (t101 != INT32_MAX) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x413 = 859097375LLU;
	static uint8_t x414 = 0U;
	volatile int8_t x416 = INT8_MIN;
	uint64_t t102 = 21LLU;

    t102 = (x413^((x414!=x415)/x416));

    if (t102 != 859097375LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x417 = -11;
	static int16_t x418 = -1;
	uint64_t x419 = UINT64_MAX;
	int32_t x420 = 205975295;
	volatile int32_t t103 = -3101;

    t103 = (x417^((x418!=x419)/x420));

    if (t103 != -11) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x421 = INT64_MIN;
	uint8_t x422 = 31U;
	volatile uint64_t t104 = 7469079241732171532LLU;

    t104 = (x421^((x422!=x423)/x424));

    if (t104 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x426 = INT32_MIN;
	int32_t x427 = INT32_MAX;
	uint8_t x428 = UINT8_MAX;
	volatile int32_t t105 = -1757;

    t105 = (x425^((x426!=x427)/x428));

    if (t105 != -41) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x429 = -1;
	uint32_t x430 = 8156584U;
	int8_t x431 = 5;
	int16_t x432 = 365;
	volatile int32_t t106 = -15829;

    t106 = (x429^((x430!=x431)/x432));

    if (t106 != -1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x433 = 33130050U;
	static uint32_t x435 = UINT32_MAX;
	int8_t x436 = INT8_MIN;
	static uint32_t t107 = 7324642U;

    t107 = (x433^((x434!=x435)/x436));

    if (t107 != 33130050U) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x437 = INT8_MAX;
	int8_t x438 = -60;
	uint8_t x439 = UINT8_MAX;
	static int16_t x440 = -1;
	static int32_t t108 = 53;

    t108 = (x437^((x438!=x439)/x440));

    if (t108 != -128) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x442 = UINT16_MAX;
	int8_t x444 = -1;
	volatile uint32_t t109 = 1731921771U;

    t109 = (x441^((x442!=x443)/x444));

    if (t109 != 4294967294U) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x445 = 72080;
	int64_t x446 = -36195920400432532LL;
	uint8_t x447 = UINT8_MAX;
	int64_t x448 = INT64_MIN;
	volatile int64_t t110 = -3077988101356005LL;

    t110 = (x445^((x446!=x447)/x448));

    if (t110 != 72080LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x449 = -1;
	int64_t x450 = INT64_MIN;
	int64_t x451 = INT64_MAX;
	static volatile uint8_t x452 = UINT8_MAX;
	int32_t t111 = -529945825;

    t111 = (x449^((x450!=x451)/x452));

    if (t111 != -1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x453 = 0;
	static volatile uint64_t x454 = 13048LLU;
	static uint16_t x456 = UINT16_MAX;
	static volatile int32_t t112 = 12124;

    t112 = (x453^((x454!=x455)/x456));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x457 = 14;
	uint16_t x458 = UINT16_MAX;
	static volatile int8_t x459 = -1;
	int32_t t113 = -16691617;

    t113 = (x457^((x458!=x459)/x460));

    if (t113 != 14) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x461 = 3U;
	uint64_t x462 = 1LLU;
	uint16_t x464 = 980U;
	int32_t t114 = -151907613;

    t114 = (x461^((x462!=x463)/x464));

    if (t114 != 3) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x465 = -1;
	static int8_t x467 = INT8_MIN;
	volatile int32_t x468 = INT32_MAX;
	int32_t t115 = -119;

    t115 = (x465^((x466!=x467)/x468));

    if (t115 != -1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x469 = 10U;
	int16_t x471 = -1;
	int64_t x472 = 2324613030LL;
	volatile int64_t t116 = 8828277888303269LL;

    t116 = (x469^((x470!=x471)/x472));

    if (t116 != 10LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x473 = INT64_MAX;
	uint32_t x474 = 64U;
	int8_t x475 = -1;
	uint16_t x476 = UINT16_MAX;
	static volatile int64_t t117 = INT64_MAX;

    t117 = (x473^((x474!=x475)/x476));

    if (t117 != INT64_MAX) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x477 = INT32_MIN;
	volatile uint64_t x478 = 53146008784172LLU;
	static int32_t x479 = INT32_MAX;
	int64_t x480 = -1LL;
	int64_t t118 = 2876128356LL;

    t118 = (x477^((x478!=x479)/x480));

    if (t118 != 2147483647LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x482 = -1LL;
	uint16_t x483 = 0U;
	static volatile int16_t x484 = INT16_MIN;
	int32_t t119 = 241;

    t119 = (x481^((x482!=x483)/x484));

    if (t119 != 127) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x485 = -1;
	int16_t x486 = INT16_MIN;
	int32_t t120 = 1;

    t120 = (x485^((x486!=x487)/x488));

    if (t120 != -1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x489 = INT8_MAX;
	int32_t x490 = -1;
	uint8_t x491 = 89U;
	int32_t x492 = INT32_MIN;
	int32_t t121 = -156492433;

    t121 = (x489^((x490!=x491)/x492));

    if (t121 != 127) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x493 = INT8_MIN;
	int16_t x495 = 0;
	volatile uint32_t x496 = 9959U;
	uint32_t t122 = 821260U;

    t122 = (x493^((x494!=x495)/x496));

    if (t122 != 4294967168U) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x498 = INT64_MIN;
	static volatile int64_t x499 = INT64_MIN;
	int32_t t123 = 482470451;

    t123 = (x497^((x498!=x499)/x500));

    if (t123 != -128) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x501 = 214328645LL;
	uint64_t x503 = 244527291LLU;
	int64_t x504 = INT64_MIN;
	int64_t t124 = -7266454520944LL;

    t124 = (x501^((x502!=x503)/x504));

    if (t124 != 214328645LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint16_t x505 = 5535U;
	volatile int64_t x507 = INT64_MIN;
	int16_t x508 = 522;

    t125 = (x505^((x506!=x507)/x508));

    if (t125 != 5535) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x509 = 25;
	uint16_t x510 = 131U;
	volatile int32_t x512 = -1;
	int32_t t126 = 63;

    t126 = (x509^((x510!=x511)/x512));

    if (t126 != -26) { NG(); } else { ; }
	
}

void f127(void) {
    	static int8_t x514 = -1;
	static uint8_t x516 = 16U;
	volatile uint64_t t127 = 0LLU;

    t127 = (x513^((x514!=x515)/x516));

    if (t127 != 13866526LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x517 = INT32_MIN;
	uint16_t x519 = UINT16_MAX;
	static uint64_t x520 = 127089258579LLU;
	uint64_t t128 = 0LLU;

    t128 = (x517^((x518!=x519)/x520));

    if (t128 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint64_t x521 = UINT64_MAX;
	uint8_t x522 = UINT8_MAX;
	int8_t x523 = 15;
	int64_t x524 = -1LL;

    t129 = (x521^((x522!=x523)/x524));

    if (t129 != 0LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x525 = INT16_MIN;
	int64_t x526 = -1LL;
	int64_t x527 = INT64_MIN;
	int16_t x528 = INT16_MIN;
	int32_t t130 = -352636399;

    t130 = (x525^((x526!=x527)/x528));

    if (t130 != -32768) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x529 = INT64_MIN;
	uint32_t x530 = 29U;
	int32_t x531 = INT32_MIN;
	volatile int64_t x532 = INT64_MAX;
	int64_t t131 = INT64_MIN;

    t131 = (x529^((x530!=x531)/x532));

    if (t131 != INT64_MIN) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x535 = -1;
	int16_t x536 = 341;
	static volatile int32_t t132 = -206510;

    t132 = (x533^((x534!=x535)/x536));

    if (t132 != 13474) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x537 = 2U;
	int32_t x538 = 1;
	static int16_t x539 = INT16_MAX;
	uint32_t x540 = 30401U;
	volatile uint32_t t133 = 6U;

    t133 = (x537^((x538!=x539)/x540));

    if (t133 != 2U) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x541 = -5;
	int32_t x542 = INT32_MIN;
	int32_t x543 = INT32_MAX;
	int16_t x544 = INT16_MAX;
	volatile int32_t t134 = -4603;

    t134 = (x541^((x542!=x543)/x544));

    if (t134 != -5) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint8_t x545 = 0U;
	int32_t x546 = INT32_MAX;
	int8_t x547 = 38;
	static int64_t t135 = -3273LL;

    t135 = (x545^((x546!=x547)/x548));

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint8_t x549 = 2U;
	uint8_t x550 = 36U;
	static int16_t x551 = -1;
	int8_t x552 = -2;
	int32_t t136 = 7;

    t136 = (x549^((x550!=x551)/x552));

    if (t136 != 2) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x553 = 698472062040751775LL;
	int32_t x554 = -1;
	int8_t x555 = INT8_MIN;
	static volatile int64_t x556 = -108153LL;
	volatile int64_t t137 = -17735LL;

    t137 = (x553^((x554!=x555)/x556));

    if (t137 != 698472062040751775LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x558 = -14;
	int8_t x560 = 2;
	volatile uint64_t t138 = 1LLU;

    t138 = (x557^((x558!=x559)/x560));

    if (t138 != 12849898055984LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x561 = 6U;
	volatile uint8_t x562 = 0U;
	int64_t x563 = INT64_MIN;
	uint32_t t139 = 9594U;

    t139 = (x561^((x562!=x563)/x564));

    if (t139 != 6U) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x566 = UINT32_MAX;
	int8_t x567 = 0;
	int8_t x568 = INT8_MIN;

    t140 = (x565^((x566!=x567)/x568));

    if (t140 != 7019) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x572 = -1;
	int32_t t141 = 432;

    t141 = (x569^((x570!=x571)/x572));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint8_t x573 = 0U;
	static int64_t x574 = 52533406633533147LL;
	volatile int64_t x575 = 3215996239004LL;
	volatile int8_t x576 = INT8_MIN;
	static volatile int32_t t142 = 12606481;

    t142 = (x573^((x574!=x575)/x576));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x582 = INT32_MIN;
	int32_t x583 = 32980;
	volatile uint64_t t143 = 12349LLU;

    t143 = (x581^((x582!=x583)/x584));

    if (t143 != 659402LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x589 = 12;
	uint64_t x590 = UINT64_MAX;
	static uint64_t x591 = UINT64_MAX;
	volatile uint64_t t144 = 4802277LLU;

    t144 = (x589^((x590!=x591)/x592));

    if (t144 != 12LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint8_t x594 = UINT8_MAX;
	uint8_t x595 = 0U;
	volatile int32_t t145 = 11304568;

    t145 = (x593^((x594!=x595)/x596));

    if (t145 != 32767) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x597 = INT16_MIN;
	int64_t x598 = -1737LL;
	int64_t x600 = -5181895802961728LL;
	volatile int64_t t146 = -264586LL;

    t146 = (x597^((x598!=x599)/x600));

    if (t146 != -32768LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint64_t x601 = 718201123059LLU;
	volatile int64_t x602 = 381396LL;
	int8_t x604 = 3;
	uint64_t t147 = 175506938060LLU;

    t147 = (x601^((x602!=x603)/x604));

    if (t147 != 718201123059LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x605 = -46LL;
	volatile uint64_t x607 = 587116141328471LLU;

    t148 = (x605^((x606!=x607)/x608));

    if (t148 != 18446744073709551570LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint64_t x609 = 16041LLU;
	int8_t x610 = INT8_MAX;
	volatile uint32_t x611 = 1799189U;
	int16_t x612 = -88;
	uint64_t t149 = 18163303409LLU;

    t149 = (x609^((x610!=x611)/x612));

    if (t149 != 16041LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x613 = 749U;
	int16_t x615 = -130;
	static uint16_t x616 = 456U;
	uint32_t t150 = 4133236U;

    t150 = (x613^((x614!=x615)/x616));

    if (t150 != 749U) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint8_t x617 = 83U;
	int32_t x618 = 40;
	uint16_t x619 = UINT16_MAX;
	volatile uint16_t x620 = UINT16_MAX;
	volatile int32_t t151 = 944107093;

    t151 = (x617^((x618!=x619)/x620));

    if (t151 != 83) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x622 = 2U;
	int64_t x623 = 2781533887829540446LL;
	int32_t x624 = INT32_MIN;
	volatile int32_t t152 = -8117163;

    t152 = (x621^((x622!=x623)/x624));

    if (t152 != -1) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x625 = 10;
	int16_t x626 = INT16_MIN;
	uint8_t x627 = UINT8_MAX;
	int32_t t153 = -1;

    t153 = (x625^((x626!=x627)/x628));

    if (t153 != 10) { NG(); } else { ; }
	
}

void f154(void) {
    	static int8_t x629 = 35;
	uint8_t x630 = 38U;
	int64_t x631 = -1LL;
	int16_t x632 = -1;

    t154 = (x629^((x630!=x631)/x632));

    if (t154 != -36) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint32_t x633 = UINT32_MAX;
	int64_t x634 = INT64_MIN;
	volatile uint8_t x635 = 4U;
	int8_t x636 = INT8_MIN;

    t155 = (x633^((x634!=x635)/x636));

    if (t155 != UINT32_MAX) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x638 = INT32_MIN;
	uint32_t x639 = 974U;
	int64_t x640 = 1LL;
	int64_t t156 = -12588505962635LL;

    t156 = (x637^((x638!=x639)/x640));

    if (t156 != -8LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x641 = 23376LL;
	static int64_t x644 = -789450543618LL;

    t157 = (x641^((x642!=x643)/x644));

    if (t157 != 23376LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x645 = INT32_MIN;
	uint16_t x646 = UINT16_MAX;
	uint16_t x647 = UINT16_MAX;
	volatile int8_t x648 = INT8_MAX;
	volatile int32_t t158 = INT32_MIN;

    t158 = (x645^((x646!=x647)/x648));

    if (t158 != INT32_MIN) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x649 = INT8_MIN;
	volatile int32_t x651 = 60581692;
	static volatile int32_t x652 = INT32_MIN;

    t159 = (x649^((x650!=x651)/x652));

    if (t159 != -128) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x653 = -1;
	int32_t x656 = INT32_MIN;
	int32_t t160 = 3;

    t160 = (x653^((x654!=x655)/x656));

    if (t160 != -1) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x657 = -1;
	static volatile int64_t x658 = -1LL;
	uint64_t x659 = 2766807267479660139LLU;
	int8_t x660 = -11;

    t161 = (x657^((x658!=x659)/x660));

    if (t161 != -1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int16_t x661 = -1;
	static int16_t x662 = 0;
	int32_t x663 = -1;
	volatile int32_t t162 = -315;

    t162 = (x661^((x662!=x663)/x664));

    if (t162 != -1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint64_t x665 = 101964769443LLU;
	uint32_t x666 = UINT32_MAX;
	static uint8_t x667 = 2U;

    t163 = (x665^((x666!=x667)/x668));

    if (t163 != 101964769443LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x669 = INT64_MAX;
	uint8_t x670 = UINT8_MAX;
	int8_t x671 = -1;
	static volatile int8_t x672 = -1;
	int64_t t164 = INT64_MIN;

    t164 = (x669^((x670!=x671)/x672));

    if (t164 != INT64_MIN) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint64_t x674 = 30510LLU;
	static int32_t x675 = INT32_MIN;
	int16_t x676 = -235;
	uint64_t t165 = UINT64_MAX;

    t165 = (x673^((x674!=x675)/x676));

    if (t165 != UINT64_MAX) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x677 = 3134LLU;
	static int32_t x678 = -9;
	static uint32_t x679 = UINT32_MAX;
	volatile uint64_t t166 = 109LLU;

    t166 = (x677^((x678!=x679)/x680));

    if (t166 != 18446744073709548481LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x681 = 459U;
	int8_t x682 = INT8_MIN;
	uint64_t t167 = 767LLU;

    t167 = (x681^((x682!=x683)/x684));

    if (t167 != 459LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x686 = 56753654342735LLU;
	uint32_t x687 = 1642U;
	static uint8_t x688 = 100U;
	static int32_t t168 = -6321;

    t168 = (x685^((x686!=x687)/x688));

    if (t168 != -32768) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x689 = INT16_MIN;
	uint16_t x691 = 935U;
	volatile int8_t x692 = INT8_MIN;

    t169 = (x689^((x690!=x691)/x692));

    if (t169 != -32768) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x694 = 0;
	volatile uint32_t t170 = 60445281U;

    t170 = (x693^((x694!=x695)/x696));

    if (t170 != 27572U) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x699 = INT8_MAX;
	int8_t x700 = 1;
	int64_t t171 = 11931416809LL;

    t171 = (x697^((x698!=x699)/x700));

    if (t171 != -2LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x701 = 0;
	int16_t x702 = INT16_MAX;
	int32_t x703 = INT32_MIN;
	uint32_t x704 = 6142129U;
	volatile uint32_t t172 = 984383U;

    t172 = (x701^((x702!=x703)/x704));

    if (t172 != 0U) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x705 = INT8_MAX;
	uint64_t x706 = UINT64_MAX;
	volatile int16_t x707 = -1;
	static uint64_t x708 = 141478LLU;
	volatile uint64_t t173 = 30LLU;

    t173 = (x705^((x706!=x707)/x708));

    if (t173 != 127LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static int32_t x709 = INT32_MAX;
	int32_t x710 = -1;
	uint64_t x711 = 4590916662824310547LLU;
	static int32_t x712 = -1;
	volatile int32_t t174 = INT32_MIN;

    t174 = (x709^((x710!=x711)/x712));

    if (t174 != INT32_MIN) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint64_t x714 = 1172646122120188LLU;
	int16_t x715 = 0;
	uint32_t x716 = UINT32_MAX;
	uint32_t t175 = 38033644U;

    t175 = (x713^((x714!=x715)/x716));

    if (t175 != 4294967294U) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x720 = UINT32_MAX;
	uint32_t t176 = 1226797U;

    t176 = (x717^((x718!=x719)/x720));

    if (t176 != 255U) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint64_t x722 = UINT64_MAX;
	int16_t x724 = INT16_MIN;

    t177 = (x721^((x722!=x723)/x724));

    if (t177 != -7LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x725 = UINT8_MAX;
	int64_t x727 = INT64_MIN;
	int8_t x728 = INT8_MIN;
	int32_t t178 = 0;

    t178 = (x725^((x726!=x727)/x728));

    if (t178 != 255) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x729 = UINT16_MAX;
	volatile int32_t x730 = INT32_MIN;
	int8_t x731 = INT8_MIN;
	int64_t x732 = 1510796783238074532LL;

    t179 = (x729^((x730!=x731)/x732));

    if (t179 != 65535LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x733 = INT8_MIN;
	static volatile int16_t x734 = 497;
	static uint16_t x735 = 7U;
	int64_t x736 = 2LL;
	int64_t t180 = -567440569657688614LL;

    t180 = (x733^((x734!=x735)/x736));

    if (t180 != -128LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint16_t x738 = 3164U;
	volatile int32_t x739 = INT32_MIN;
	volatile int64_t t181 = -272501166040583LL;

    t181 = (x737^((x738!=x739)/x740));

    if (t181 != 5LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x741 = 7456557;
	uint32_t x742 = 497054U;
	uint64_t x743 = 1123931025628780561LLU;
	int32_t x744 = INT32_MAX;
	int32_t t182 = -18653224;

    t182 = (x741^((x742!=x743)/x744));

    if (t182 != 7456557) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int16_t x745 = 2;
	int8_t x746 = INT8_MAX;
	static int64_t x747 = -5775591239483033LL;
	int64_t t183 = -340915947LL;

    t183 = (x745^((x746!=x747)/x748));

    if (t183 != 2LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x749 = 15453U;
	int64_t x751 = -1LL;
	int64_t x752 = INT64_MIN;
	static int64_t t184 = 4624909LL;

    t184 = (x749^((x750!=x751)/x752));

    if (t184 != 15453LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x753 = INT32_MAX;
	int16_t x754 = INT16_MIN;
	int32_t x755 = -1;
	uint16_t x756 = 920U;
	int32_t t185 = INT32_MAX;

    t185 = (x753^((x754!=x755)/x756));

    if (t185 != INT32_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x757 = -16432762077043LL;
	int32_t x758 = -1;
	int64_t x760 = INT64_MIN;
	static volatile int64_t t186 = 634013653943759LL;

    t186 = (x757^((x758!=x759)/x760));

    if (t186 != -16432762077043LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x762 = -1;
	static int32_t x763 = -52660536;
	uint64_t x764 = 388981124792LLU;

    t187 = (x761^((x762!=x763)/x764));

    if (t187 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x765 = -1;
	uint64_t x766 = UINT64_MAX;
	uint64_t x768 = UINT64_MAX;

    t188 = (x765^((x766!=x767)/x768));

    if (t188 != UINT64_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x769 = UINT8_MAX;
	uint32_t x771 = UINT32_MAX;
	int64_t x772 = INT64_MAX;
	int64_t t189 = 1830980018753598260LL;

    t189 = (x769^((x770!=x771)/x772));

    if (t189 != 255LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x773 = INT16_MIN;
	int64_t x774 = INT64_MIN;
	volatile uint32_t t190 = 289009U;

    t190 = (x773^((x774!=x775)/x776));

    if (t190 != 4294934528U) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x777 = UINT16_MAX;
	int64_t x778 = INT64_MIN;
	int32_t x780 = INT32_MIN;
	volatile int32_t t191 = -1;

    t191 = (x777^((x778!=x779)/x780));

    if (t191 != 65535) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x782 = INT64_MIN;
	volatile int64_t x783 = -1LL;
	int16_t x784 = INT16_MAX;
	volatile int32_t t192 = 12938527;

    t192 = (x781^((x782!=x783)/x784));

    if (t192 != 8) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x785 = INT32_MAX;
	static uint16_t x786 = 21228U;
	int32_t x787 = INT32_MIN;
	int32_t x788 = -1;
	volatile int32_t t193 = INT32_MIN;

    t193 = (x785^((x786!=x787)/x788));

    if (t193 != INT32_MIN) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x789 = -1LL;
	uint8_t x790 = UINT8_MAX;
	volatile int64_t x791 = -42379LL;
	uint8_t x792 = 12U;
	volatile int64_t t194 = -3778575LL;

    t194 = (x789^((x790!=x791)/x792));

    if (t194 != -1LL) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x793 = -1;
	int8_t x794 = 46;
	static uint64_t x795 = 885581LLU;
	static int32_t x796 = INT32_MIN;
	int32_t t195 = -3;

    t195 = (x793^((x794!=x795)/x796));

    if (t195 != -1) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint64_t x797 = 93937256240560594LLU;
	static uint64_t x799 = 100525373LLU;
	int64_t x800 = INT64_MIN;
	static uint64_t t196 = 1025092LLU;

    t196 = (x797^((x798!=x799)/x800));

    if (t196 != 93937256240560594LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int64_t x802 = INT64_MIN;
	uint64_t x803 = 119LLU;
	volatile uint64_t x804 = 131LLU;
	volatile uint64_t t197 = 472580101626LLU;

    t197 = (x801^((x802!=x803)/x804));

    if (t197 != 42LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x805 = INT32_MAX;
	static int8_t x806 = INT8_MIN;
	int64_t x807 = -1LL;

    t198 = (x805^((x806!=x807)/x808));

    if (t198 != INT32_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x809 = -1;
	volatile uint8_t x810 = 6U;
	int8_t x811 = INT8_MIN;
	static uint16_t x812 = 878U;
	volatile int32_t t199 = 1;

    t199 = (x809^((x810!=x811)/x812));

    if (t199 != -1) { NG(); } else { ; }
	
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

