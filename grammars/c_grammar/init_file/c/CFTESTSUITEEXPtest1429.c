
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

int16_t x6 = -102;
volatile int32_t t0 = 1;
static uint8_t x10 = 0U;
volatile int32_t x12 = INT32_MIN;
int8_t x19 = INT8_MIN;
static int16_t x25 = -1;
volatile int32_t x31 = INT32_MIN;
static volatile uint16_t x32 = UINT16_MAX;
volatile int64_t t7 = -1455LL;
volatile int64_t t9 = INT64_MIN;
static int16_t x46 = INT16_MIN;
int64_t x47 = INT64_MAX;
static volatile uint16_t x51 = UINT16_MAX;
int16_t x54 = 1;
int64_t x63 = INT64_MAX;
static int64_t x68 = INT64_MAX;
int64_t t15 = 559267597408113LL;
int64_t x77 = -1LL;
static int32_t x78 = -565;
int32_t x86 = -1;
int32_t x92 = -1;
uint8_t x93 = 7U;
volatile int32_t x100 = INT32_MAX;
volatile int32_t t23 = INT32_MAX;
uint16_t x101 = 7381U;
int16_t x105 = INT16_MIN;
volatile uint16_t x107 = 6329U;
volatile int32_t t26 = -9192;
volatile int32_t t27 = -426993476;
int64_t x118 = INT64_MIN;
int64_t x120 = -190LL;
int64_t t29 = INT64_MIN;
static uint64_t x126 = UINT64_MAX;
volatile int32_t x133 = INT32_MIN;
int16_t x134 = INT16_MAX;
static uint32_t x139 = UINT32_MAX;
int16_t x142 = 601;
int32_t t34 = -27768263;
int32_t t36 = -3;
int64_t x164 = 129753867170LL;
int64_t t39 = INT64_MAX;
volatile int64_t x165 = -15859558401LL;
int32_t x168 = 892997;
int16_t x188 = -1;
uint64_t x189 = 115963553601LLU;
volatile uint64_t t46 = 94186736836LLU;
volatile int8_t x193 = -1;
int8_t x194 = INT8_MAX;
int8_t x198 = INT8_MIN;
int16_t x199 = INT16_MIN;
int32_t x206 = -193080981;
int8_t x211 = INT8_MIN;
volatile int32_t x213 = INT32_MIN;
int64_t x216 = INT64_MIN;
int32_t x217 = INT32_MAX;
volatile int64_t x225 = 28246189587LL;
int8_t x226 = INT8_MIN;
volatile uint64_t x227 = 155800688134404512LLU;
int32_t x233 = INT32_MIN;
int64_t t57 = 33873227341591589LL;
static int32_t x239 = INT32_MIN;
uint8_t x244 = 4U;
volatile int16_t x245 = INT16_MIN;
static int32_t x247 = 33;
uint16_t x252 = 4335U;
static int64_t x256 = INT64_MIN;
int64_t x260 = -1991LL;
int64_t x262 = 49468771536LL;
uint32_t x271 = 1232086U;
uint32_t x273 = 47658U;
static int32_t x275 = -40;
uint32_t t67 = 337U;
int64_t x277 = INT64_MIN;
volatile int8_t x278 = INT8_MIN;
int64_t x285 = INT64_MIN;
volatile uint64_t x295 = UINT64_MAX;
static int16_t x298 = INT16_MAX;
int32_t x299 = INT32_MIN;
uint64_t x305 = UINT64_MAX;
static int64_t x309 = 950250236576LL;
int64_t t76 = -69LL;
int32_t t77 = -5;
int8_t x321 = -27;
int16_t x324 = INT16_MIN;
volatile int32_t t79 = -55255;
int16_t x329 = -255;
uint8_t x334 = 5U;
int64_t x335 = INT64_MIN;
int32_t x337 = -1;
int32_t x345 = INT32_MAX;
int32_t x354 = -1;
int32_t x360 = INT32_MAX;
int64_t t88 = INT64_MAX;
volatile int64_t x361 = -205381LL;
int8_t x372 = -54;
int32_t x375 = INT32_MIN;
int16_t x380 = INT16_MIN;
int8_t x383 = -4;
int16_t x389 = -99;
uint8_t x393 = 1U;
int64_t x402 = 42794LL;
int64_t t100 = -293443935446443702LL;
int32_t x414 = INT32_MIN;
uint8_t x415 = 0U;
int32_t t101 = 226657;
int64_t x417 = INT64_MIN;
static int8_t x418 = -1;
static uint64_t x420 = UINT64_MAX;
uint64_t t102 = 75LLU;
int8_t x435 = -1;
uint8_t x438 = 57U;
uint8_t x440 = 47U;
int32_t x444 = INT32_MAX;
int64_t x447 = -1LL;
int32_t x455 = INT32_MAX;
int8_t x460 = -1;
static volatile uint64_t t113 = 15358LLU;
static int16_t x488 = -1;
volatile int32_t t119 = -347453;
int16_t x499 = -9;
int16_t x500 = -1;
int16_t x501 = INT16_MIN;
uint8_t x511 = UINT8_MAX;
static int64_t x512 = INT64_MIN;
volatile uint32_t x514 = 405205U;
int16_t x517 = INT16_MIN;
static volatile int8_t x518 = -60;
volatile uint32_t x523 = UINT32_MAX;
int8_t x524 = 6;
uint64_t x529 = 432097420LLU;
static int8_t x531 = -2;
volatile uint64_t t133 = UINT64_MAX;
volatile int64_t x551 = INT64_MAX;
volatile int16_t x553 = -1;
uint32_t x555 = 146267U;
uint64_t x558 = 3635004439LLU;
volatile uint8_t x559 = UINT8_MAX;
volatile int32_t t137 = -37891840;
volatile uint8_t x565 = 111U;
int8_t x570 = 26;
int64_t x581 = -1LL;
int8_t x594 = -1;
static int16_t x606 = -28;
int16_t x611 = INT16_MIN;
int32_t t150 = INT32_MIN;
uint32_t x624 = 17U;
volatile int16_t x629 = INT16_MIN;
int64_t x632 = 31873233LL;
int8_t x638 = -3;
uint32_t x640 = UINT32_MAX;
uint32_t t156 = 29666228U;
static uint32_t t157 = 87U;
uint8_t x645 = UINT8_MAX;
volatile int32_t t158 = -6568;
int32_t x664 = INT32_MIN;
volatile uint64_t t167 = 12245LLU;
uint32_t x686 = 633848U;
volatile int64_t x693 = -322642909LL;
int16_t x694 = INT16_MAX;
int64_t x713 = -31415587LL;
uint16_t x716 = 27U;
int64_t t175 = -9298LL;
int16_t x724 = 27;
static uint8_t x731 = 13U;
int64_t t179 = 750220LL;
static uint64_t x734 = 207759584922080LLU;
static uint32_t x736 = UINT32_MAX;
int32_t x741 = 54061995;
uint64_t x744 = UINT64_MAX;
static int8_t x746 = INT8_MAX;
volatile int8_t x750 = -1;
uint64_t x753 = 2LLU;
static uint32_t x754 = 3U;
int32_t t188 = -1286785;
volatile int8_t x785 = 1;
volatile uint32_t x786 = 72887U;
volatile uint16_t x789 = UINT16_MAX;
int8_t x792 = INT8_MIN;
volatile int32_t x794 = INT32_MAX;
volatile uint64_t t195 = 61046366216597915LLU;
int64_t t196 = 3632924797807LL;
int32_t x807 = INT32_MIN;
uint32_t x809 = 17431U;
static volatile int64_t x810 = INT64_MIN;
uint8_t x811 = 5U;


void f0(void) {
    	int16_t x5 = -1;
	static uint32_t x7 = UINT32_MAX;
	volatile uint16_t x8 = UINT16_MAX;

    t0 = (x5+((x6==x7)%x8));

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x9 = 14030228424405LL;
	int8_t x11 = 9;
	volatile int64_t t1 = 7656LL;

    t1 = (x9+((x10==x11)%x12));

    if (t1 != 14030228424405LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x13 = -1;
	uint32_t x14 = 1U;
	static int64_t x15 = INT64_MIN;
	int8_t x16 = 7;
	int32_t t2 = -204;

    t2 = (x13+((x14==x15)%x16));

    if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x17 = 3492U;
	int16_t x18 = INT16_MIN;
	int8_t x20 = INT8_MAX;
	int32_t t3 = -248;

    t3 = (x17+((x18==x19)%x20));

    if (t3 != 3492) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x21 = 942337799463LLU;
	static int16_t x22 = 18;
	volatile int8_t x23 = INT8_MIN;
	uint64_t x24 = 86756694306724LLU;
	volatile uint64_t t4 = 2617345075645516884LLU;

    t4 = (x21+((x22==x23)%x24));

    if (t4 != 942337799463LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x26 = INT64_MIN;
	volatile int64_t x27 = INT64_MIN;
	int32_t x28 = -1;
	volatile int32_t t5 = 56716726;

    t5 = (x25+((x26==x27)%x28));

    if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x29 = 20327U;
	int16_t x30 = INT16_MIN;
	volatile int32_t t6 = 7169;

    t6 = (x29+((x30==x31)%x32));

    if (t6 != 20327) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint16_t x33 = 1259U;
	volatile uint16_t x34 = 9674U;
	static int64_t x35 = -1LL;
	int64_t x36 = INT64_MIN;

    t7 = (x33+((x34==x35)%x36));

    if (t7 != 1259LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x37 = -1;
	volatile int8_t x38 = 3;
	int8_t x39 = -1;
	volatile int16_t x40 = -1;
	volatile int32_t t8 = 3990;

    t8 = (x37+((x38==x39)%x40));

    if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x41 = INT64_MIN;
	static uint32_t x42 = UINT32_MAX;
	volatile uint16_t x43 = UINT16_MAX;
	uint16_t x44 = UINT16_MAX;

    t9 = (x41+((x42==x43)%x44));

    if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x45 = -1LL;
	int32_t x48 = INT32_MAX;
	volatile int64_t t10 = 11LL;

    t10 = (x45+((x46==x47)%x48));

    if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x49 = INT8_MAX;
	volatile int64_t x50 = -161548178598282LL;
	int8_t x52 = -2;
	volatile int32_t t11 = 178327000;

    t11 = (x49+((x50==x51)%x52));

    if (t11 != 127) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x53 = INT32_MIN;
	int16_t x55 = 25;
	int16_t x56 = -1;
	int32_t t12 = INT32_MIN;

    t12 = (x53+((x54==x55)%x56));

    if (t12 != INT32_MIN) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint32_t x57 = UINT32_MAX;
	int32_t x58 = INT32_MAX;
	static int8_t x59 = -3;
	int32_t x60 = -1335647;
	volatile uint32_t t13 = UINT32_MAX;

    t13 = (x57+((x58==x59)%x60));

    if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int16_t x61 = INT16_MIN;
	int32_t x62 = INT32_MAX;
	int8_t x64 = INT8_MIN;
	volatile int32_t t14 = 20870;

    t14 = (x61+((x62==x63)%x64));

    if (t14 != -32768) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x65 = -1;
	volatile int64_t x66 = -1LL;
	int16_t x67 = -1;

    t15 = (x65+((x66==x67)%x68));

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x69 = -3890813LL;
	int8_t x70 = INT8_MIN;
	static int32_t x71 = INT32_MIN;
	int64_t x72 = -615915230761000551LL;
	volatile int64_t t16 = 1LL;

    t16 = (x69+((x70==x71)%x72));

    if (t16 != -3890813LL) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x73 = 0;
	int64_t x74 = INT64_MAX;
	static volatile uint32_t x75 = 777407U;
	volatile int64_t x76 = 15036LL;
	static volatile int64_t t17 = -17788723243LL;

    t17 = (x73+((x74==x75)%x76));

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x79 = INT8_MIN;
	volatile uint32_t x80 = 61U;
	int64_t t18 = -279LL;

    t18 = (x77+((x78==x79)%x80));

    if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x81 = INT16_MIN;
	volatile int64_t x82 = -707972787020351LL;
	int8_t x83 = INT8_MIN;
	int32_t x84 = 7733783;
	static volatile int32_t t19 = -327724052;

    t19 = (x81+((x82==x83)%x84));

    if (t19 != -32768) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x85 = 40U;
	static volatile uint32_t x87 = 170U;
	static int32_t x88 = -1;
	volatile int32_t t20 = -108359;

    t20 = (x85+((x86==x87)%x88));

    if (t20 != 40) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint32_t x89 = 60U;
	volatile int8_t x90 = INT8_MIN;
	uint8_t x91 = UINT8_MAX;
	volatile uint32_t t21 = 137665815U;

    t21 = (x89+((x90==x91)%x92));

    if (t21 != 60U) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x94 = -2;
	static uint32_t x95 = UINT32_MAX;
	int32_t x96 = -1;
	int32_t t22 = 26759421;

    t22 = (x93+((x94==x95)%x96));

    if (t22 != 7) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x97 = INT32_MAX;
	volatile uint8_t x98 = UINT8_MAX;
	static uint16_t x99 = 438U;

    t23 = (x97+((x98==x99)%x100));

    if (t23 != INT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint16_t x102 = 22U;
	uint8_t x103 = UINT8_MAX;
	volatile int8_t x104 = 1;
	int32_t t24 = 771220;

    t24 = (x101+((x102==x103)%x104));

    if (t24 != 7381) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x106 = -1LL;
	uint8_t x108 = 43U;
	int32_t t25 = 14546;

    t25 = (x105+((x106==x107)%x108));

    if (t25 != -32768) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint8_t x109 = UINT8_MAX;
	uint16_t x110 = UINT16_MAX;
	int8_t x111 = 20;
	uint8_t x112 = 2U;

    t26 = (x109+((x110==x111)%x112));

    if (t26 != 255) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x113 = INT8_MAX;
	static int8_t x114 = -2;
	int64_t x115 = INT64_MIN;
	static uint8_t x116 = UINT8_MAX;

    t27 = (x113+((x114==x115)%x116));

    if (t27 != 127) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x117 = INT32_MIN;
	static volatile uint8_t x119 = 17U;
	static volatile int64_t t28 = -1767LL;

    t28 = (x117+((x118==x119)%x120));

    if (t28 != -2147483648LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int64_t x121 = INT64_MIN;
	volatile int64_t x122 = -65182LL;
	int8_t x123 = 0;
	volatile uint32_t x124 = 424405U;

    t29 = (x121+((x122==x123)%x124));

    if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint32_t x125 = 61U;
	uint16_t x127 = UINT16_MAX;
	static int8_t x128 = INT8_MAX;
	volatile uint32_t t30 = 102420351U;

    t30 = (x125+((x126==x127)%x128));

    if (t30 != 61U) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile int8_t x129 = -1;
	int32_t x130 = INT32_MAX;
	int64_t x131 = 108887558708999LL;
	int16_t x132 = -2850;
	int32_t t31 = 2;

    t31 = (x129+((x130==x131)%x132));

    if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x135 = INT64_MAX;
	static int32_t x136 = 1003192272;
	volatile int32_t t32 = INT32_MIN;

    t32 = (x133+((x134==x135)%x136));

    if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x137 = INT64_MIN;
	static int16_t x138 = -1;
	uint64_t x140 = 27740480LLU;
	uint64_t t33 = 788741123482535269LLU;

    t33 = (x137+((x138==x139)%x140));

    if (t33 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x141 = 245;
	volatile uint8_t x143 = UINT8_MAX;
	int16_t x144 = INT16_MAX;

    t34 = (x141+((x142==x143)%x144));

    if (t34 != 245) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x145 = INT8_MAX;
	uint16_t x146 = 2U;
	volatile int64_t x147 = -1LL;
	int8_t x148 = INT8_MAX;
	int32_t t35 = -10;

    t35 = (x145+((x146==x147)%x148));

    if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x149 = -1;
	int64_t x150 = INT64_MIN;
	volatile int16_t x151 = INT16_MIN;
	uint16_t x152 = UINT16_MAX;

    t36 = (x149+((x150==x151)%x152));

    if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x153 = INT32_MIN;
	int32_t x154 = -59;
	int16_t x155 = 6;
	int64_t x156 = -1LL;
	volatile int64_t t37 = -1270230071104406421LL;

    t37 = (x153+((x154==x155)%x156));

    if (t37 != -2147483648LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x157 = -1;
	int64_t x158 = -12010285LL;
	static int32_t x159 = INT32_MIN;
	static int64_t x160 = -516573LL;
	volatile int64_t t38 = -1081830020596LL;

    t38 = (x157+((x158==x159)%x160));

    if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x161 = INT64_MAX;
	int16_t x162 = INT16_MAX;
	uint64_t x163 = 141238744254587629LLU;

    t39 = (x161+((x162==x163)%x164));

    if (t39 != INT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x166 = UINT64_MAX;
	uint16_t x167 = UINT16_MAX;
	volatile int64_t t40 = 319052329285925822LL;

    t40 = (x165+((x166==x167)%x168));

    if (t40 != -15859558401LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int32_t x169 = -1;
	uint16_t x170 = UINT16_MAX;
	uint64_t x171 = 243834245596959LLU;
	int16_t x172 = INT16_MAX;
	int32_t t41 = 625028460;

    t41 = (x169+((x170==x171)%x172));

    if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x173 = -1;
	int64_t x174 = -32845177LL;
	uint64_t x175 = 4327068740290LLU;
	int8_t x176 = -32;
	volatile int32_t t42 = -3327338;

    t42 = (x173+((x174==x175)%x176));

    if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile uint16_t x177 = UINT16_MAX;
	uint64_t x178 = UINT64_MAX;
	int32_t x179 = 0;
	int16_t x180 = -5910;
	static volatile int32_t t43 = -2;

    t43 = (x177+((x178==x179)%x180));

    if (t43 != 65535) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x181 = INT32_MIN;
	int16_t x182 = -15;
	int16_t x183 = INT16_MIN;
	int64_t x184 = 64828180116996LL;
	volatile int64_t t44 = 0LL;

    t44 = (x181+((x182==x183)%x184));

    if (t44 != -2147483648LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile uint32_t x185 = 3U;
	uint32_t x186 = UINT32_MAX;
	static uint32_t x187 = UINT32_MAX;
	volatile uint32_t t45 = 23480002U;

    t45 = (x185+((x186==x187)%x188));

    if (t45 != 3U) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x190 = 11;
	int64_t x191 = -3836918040LL;
	int32_t x192 = INT32_MIN;

    t46 = (x189+((x190==x191)%x192));

    if (t46 != 115963553601LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x195 = INT64_MIN;
	volatile int16_t x196 = 1;
	int32_t t47 = -1;

    t47 = (x193+((x194==x195)%x196));

    if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x197 = INT32_MIN;
	static uint32_t x200 = 1842369581U;
	uint32_t t48 = 7U;

    t48 = (x197+((x198==x199)%x200));

    if (t48 != 2147483648U) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int16_t x201 = -260;
	int16_t x202 = -2;
	static int8_t x203 = 2;
	int32_t x204 = 669;
	int32_t t49 = 645;

    t49 = (x201+((x202==x203)%x204));

    if (t49 != -260) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x205 = INT64_MAX;
	volatile int8_t x207 = INT8_MIN;
	uint16_t x208 = 7023U;
	int64_t t50 = INT64_MAX;

    t50 = (x205+((x206==x207)%x208));

    if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int16_t x209 = INT16_MIN;
	static int64_t x210 = INT64_MIN;
	int8_t x212 = INT8_MIN;
	int32_t t51 = -7;

    t51 = (x209+((x210==x211)%x212));

    if (t51 != -32768) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x214 = 1;
	uint16_t x215 = UINT16_MAX;
	int64_t t52 = 1239LL;

    t52 = (x213+((x214==x215)%x216));

    if (t52 != -2147483648LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x218 = -1;
	uint32_t x219 = 43856U;
	int32_t x220 = -1;
	volatile int32_t t53 = INT32_MAX;

    t53 = (x217+((x218==x219)%x220));

    if (t53 != INT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint8_t x221 = UINT8_MAX;
	static volatile int64_t x222 = 31632440285LL;
	static uint16_t x223 = 52U;
	int64_t x224 = INT64_MIN;
	static volatile int64_t t54 = -657414331336676709LL;

    t54 = (x221+((x222==x223)%x224));

    if (t54 != 255LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x228 = -1LL;
	volatile int64_t t55 = -6039086611761418LL;

    t55 = (x225+((x226==x227)%x228));

    if (t55 != 28246189587LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x229 = INT32_MIN;
	static int16_t x230 = -1;
	static int64_t x231 = 23650267LL;
	static int16_t x232 = INT16_MAX;
	int32_t t56 = INT32_MIN;

    t56 = (x229+((x230==x231)%x232));

    if (t56 != INT32_MIN) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x234 = -16;
	int16_t x235 = 221;
	int64_t x236 = INT64_MIN;

    t57 = (x233+((x234==x235)%x236));

    if (t57 != -2147483648LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x237 = 203156027U;
	uint16_t x238 = 235U;
	int8_t x240 = -1;
	volatile uint32_t t58 = 1854696U;

    t58 = (x237+((x238==x239)%x240));

    if (t58 != 203156027U) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x241 = UINT64_MAX;
	volatile int16_t x242 = 2531;
	int64_t x243 = INT64_MIN;
	static uint64_t t59 = UINT64_MAX;

    t59 = (x241+((x242==x243)%x244));

    if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x246 = 1;
	int16_t x248 = 2540;
	int32_t t60 = -154539211;

    t60 = (x245+((x246==x247)%x248));

    if (t60 != -32768) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x249 = -30;
	int64_t x250 = -11989LL;
	static int8_t x251 = INT8_MAX;
	int32_t t61 = 353103;

    t61 = (x249+((x250==x251)%x252));

    if (t61 != -30) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x253 = 27U;
	volatile int8_t x254 = INT8_MIN;
	uint64_t x255 = 842331533637939884LLU;
	volatile int64_t t62 = 145728537288523131LL;

    t62 = (x253+((x254==x255)%x256));

    if (t62 != 27LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x257 = INT8_MIN;
	int8_t x258 = 8;
	static int16_t x259 = 43;
	int64_t t63 = -7041279993311LL;

    t63 = (x257+((x258==x259)%x260));

    if (t63 != -128LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x261 = -1;
	volatile uint32_t x263 = 32872180U;
	int16_t x264 = INT16_MIN;
	int32_t t64 = -11911;

    t64 = (x261+((x262==x263)%x264));

    if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x265 = INT32_MIN;
	int32_t x266 = INT32_MIN;
	static int64_t x267 = 5639938774213819LL;
	static int8_t x268 = INT8_MAX;
	volatile int32_t t65 = INT32_MIN;

    t65 = (x265+((x266==x267)%x268));

    if (t65 != INT32_MIN) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x269 = -63;
	static int32_t x270 = -415486;
	int16_t x272 = INT16_MAX;
	volatile int32_t t66 = 11004627;

    t66 = (x269+((x270==x271)%x272));

    if (t66 != -63) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x274 = -1;
	static int16_t x276 = INT16_MAX;

    t67 = (x273+((x274==x275)%x276));

    if (t67 != 47658U) { NG(); } else { ; }
	
}

void f68(void) {
    	static int32_t x279 = INT32_MIN;
	volatile int32_t x280 = INT32_MIN;
	volatile int64_t t68 = INT64_MIN;

    t68 = (x277+((x278==x279)%x280));

    if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint16_t x281 = 4862U;
	int32_t x282 = INT32_MAX;
	static uint8_t x283 = 14U;
	volatile int32_t x284 = INT32_MAX;
	volatile int32_t t69 = -29;

    t69 = (x281+((x282==x283)%x284));

    if (t69 != 4862) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x286 = -1;
	uint64_t x287 = UINT64_MAX;
	int16_t x288 = -1;
	int64_t t70 = INT64_MIN;

    t70 = (x285+((x286==x287)%x288));

    if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x289 = 4749100U;
	volatile uint64_t x290 = 44846086709799LLU;
	volatile uint16_t x291 = UINT16_MAX;
	static int16_t x292 = -1;
	static volatile uint32_t t71 = 271475U;

    t71 = (x289+((x290==x291)%x292));

    if (t71 != 4749100U) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x293 = 409297355;
	int32_t x294 = -1;
	int8_t x296 = 1;
	static volatile int32_t t72 = -2898;

    t72 = (x293+((x294==x295)%x296));

    if (t72 != 409297355) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x297 = -7854LL;
	uint64_t x300 = 49147152LLU;
	static volatile uint64_t t73 = 12017628419721803LLU;

    t73 = (x297+((x298==x299)%x300));

    if (t73 != 18446744073709543762LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x301 = INT32_MIN;
	int64_t x302 = -1LL;
	int16_t x303 = INT16_MIN;
	uint16_t x304 = 2253U;
	volatile int32_t t74 = INT32_MIN;

    t74 = (x301+((x302==x303)%x304));

    if (t74 != INT32_MIN) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint32_t x306 = 18373870U;
	int8_t x307 = INT8_MAX;
	uint32_t x308 = 1U;
	uint64_t t75 = UINT64_MAX;

    t75 = (x305+((x306==x307)%x308));

    if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x310 = INT32_MAX;
	static int16_t x311 = -1;
	int64_t x312 = INT64_MIN;

    t76 = (x309+((x310==x311)%x312));

    if (t76 != 950250236576LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x313 = 31;
	volatile int8_t x314 = INT8_MAX;
	uint16_t x315 = UINT16_MAX;
	int16_t x316 = 14400;

    t77 = (x313+((x314==x315)%x316));

    if (t77 != 31) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint32_t x317 = 1543258247U;
	int8_t x318 = INT8_MIN;
	static volatile uint32_t x319 = 135768U;
	volatile int64_t x320 = 27377760LL;
	static volatile int64_t t78 = -2LL;

    t78 = (x317+((x318==x319)%x320));

    if (t78 != 1543258247LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x322 = -1;
	volatile int32_t x323 = -110;

    t79 = (x321+((x322==x323)%x324));

    if (t79 != -27) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x325 = 322U;
	uint64_t x326 = 391LLU;
	int64_t x327 = -1LL;
	static uint16_t x328 = 9U;
	uint32_t t80 = 8900U;

    t80 = (x325+((x326==x327)%x328));

    if (t80 != 322U) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x330 = -23910026LL;
	static int8_t x331 = 0;
	uint16_t x332 = 20U;
	static volatile int32_t t81 = 17083799;

    t81 = (x329+((x330==x331)%x332));

    if (t81 != -255) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x333 = INT16_MAX;
	static uint64_t x336 = 54529229956229LLU;
	volatile uint64_t t82 = 223656820836319LLU;

    t82 = (x333+((x334==x335)%x336));

    if (t82 != 32767LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x338 = 7U;
	static int64_t x339 = INT64_MIN;
	int64_t x340 = INT64_MIN;
	volatile int64_t t83 = 801750887442LL;

    t83 = (x337+((x338==x339)%x340));

    if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x341 = -1;
	uint64_t x342 = UINT64_MAX;
	int64_t x343 = INT64_MIN;
	static int16_t x344 = INT16_MIN;
	volatile int32_t t84 = 210996;

    t84 = (x341+((x342==x343)%x344));

    if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x346 = 15U;
	uint32_t x347 = 517267U;
	int64_t x348 = 7LL;
	int64_t t85 = 494662513449LL;

    t85 = (x345+((x346==x347)%x348));

    if (t85 != 2147483647LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint8_t x349 = 1U;
	volatile int16_t x350 = -828;
	int8_t x351 = INT8_MAX;
	volatile int64_t x352 = -15809248658LL;
	volatile int64_t t86 = -12502039534LL;

    t86 = (x349+((x350==x351)%x352));

    if (t86 != 1LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile int16_t x353 = 513;
	volatile int64_t x355 = INT64_MIN;
	int64_t x356 = 34471188155357061LL;
	volatile int64_t t87 = 7926LL;

    t87 = (x353+((x354==x355)%x356));

    if (t87 != 513LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int64_t x357 = INT64_MAX;
	uint16_t x358 = UINT16_MAX;
	int16_t x359 = 1;

    t88 = (x357+((x358==x359)%x360));

    if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x362 = 166;
	volatile int64_t x363 = INT64_MAX;
	uint8_t x364 = UINT8_MAX;
	volatile int64_t t89 = 121370LL;

    t89 = (x361+((x362==x363)%x364));

    if (t89 != -205381LL) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x365 = 403149828;
	int64_t x366 = 166950415LL;
	int16_t x367 = INT16_MIN;
	static int32_t x368 = INT32_MAX;
	static int32_t t90 = -1;

    t90 = (x365+((x366==x367)%x368));

    if (t90 != 403149828) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint16_t x369 = 281U;
	int16_t x370 = -1;
	static int32_t x371 = -532016690;
	static volatile int32_t t91 = 149;

    t91 = (x369+((x370==x371)%x372));

    if (t91 != 281) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x373 = INT32_MAX;
	int8_t x374 = -1;
	uint64_t x376 = 44036980900693626LLU;
	uint64_t t92 = 32536790887LLU;

    t92 = (x373+((x374==x375)%x376));

    if (t92 != 2147483647LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x377 = -378016739;
	uint16_t x378 = UINT16_MAX;
	int8_t x379 = -1;
	int32_t t93 = -7;

    t93 = (x377+((x378==x379)%x380));

    if (t93 != -378016739) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x381 = -1LL;
	int16_t x382 = INT16_MIN;
	volatile int16_t x384 = INT16_MIN;
	int64_t t94 = -525422952911826LL;

    t94 = (x381+((x382==x383)%x384));

    if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static int8_t x385 = INT8_MAX;
	int8_t x386 = 3;
	volatile int32_t x387 = 1188528;
	int64_t x388 = INT64_MAX;
	static volatile int64_t t95 = 7287457235LL;

    t95 = (x385+((x386==x387)%x388));

    if (t95 != 127LL) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint8_t x390 = 8U;
	volatile int64_t x391 = INT64_MIN;
	static int32_t x392 = -1;
	volatile int32_t t96 = -103472529;

    t96 = (x389+((x390==x391)%x392));

    if (t96 != -99) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint8_t x394 = 0U;
	int16_t x395 = INT16_MAX;
	uint64_t x396 = 3325718LLU;
	volatile uint64_t t97 = 563270840901619842LLU;

    t97 = (x393+((x394==x395)%x396));

    if (t97 != 1LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x397 = INT16_MAX;
	int64_t x398 = -1LL;
	uint32_t x399 = UINT32_MAX;
	int16_t x400 = INT16_MIN;
	volatile int32_t t98 = 16951;

    t98 = (x397+((x398==x399)%x400));

    if (t98 != 32767) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x401 = UINT64_MAX;
	volatile uint16_t x403 = UINT16_MAX;
	static volatile int64_t x404 = -1LL;
	volatile uint64_t t99 = UINT64_MAX;

    t99 = (x401+((x402==x403)%x404));

    if (t99 != UINT64_MAX) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x405 = -1LL;
	int64_t x406 = INT64_MAX;
	volatile uint8_t x407 = UINT8_MAX;
	int32_t x408 = -1;

    t100 = (x405+((x406==x407)%x408));

    if (t100 != -1LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x413 = UINT8_MAX;
	int32_t x416 = -1;

    t101 = (x413+((x414==x415)%x416));

    if (t101 != 255) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x419 = INT64_MIN;

    t102 = (x417+((x418==x419)%x420));

    if (t102 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x421 = INT16_MIN;
	int64_t x422 = -29563839414394LL;
	static int64_t x423 = INT64_MIN;
	static int32_t x424 = INT32_MAX;
	volatile int32_t t103 = 266486434;

    t103 = (x421+((x422==x423)%x424));

    if (t103 != -32768) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x425 = -4LL;
	static volatile uint8_t x426 = 94U;
	volatile int32_t x427 = 414429197;
	int8_t x428 = INT8_MIN;
	int64_t t104 = -21093349685746LL;

    t104 = (x425+((x426==x427)%x428));

    if (t104 != -4LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x429 = 39988LL;
	int16_t x430 = INT16_MAX;
	static uint16_t x431 = 38U;
	volatile uint16_t x432 = 20689U;
	volatile int64_t t105 = -373336201865LL;

    t105 = (x429+((x430==x431)%x432));

    if (t105 != 39988LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x433 = INT16_MAX;
	volatile int16_t x434 = INT16_MAX;
	int16_t x436 = 10012;
	static volatile int32_t t106 = -47095;

    t106 = (x433+((x434==x435)%x436));

    if (t106 != 32767) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x437 = 0;
	uint32_t x439 = UINT32_MAX;
	int32_t t107 = 42;

    t107 = (x437+((x438==x439)%x440));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int64_t x441 = -1052944112492910LL;
	static uint8_t x442 = UINT8_MAX;
	volatile int64_t x443 = INT64_MAX;
	int64_t t108 = 565668826299569079LL;

    t108 = (x441+((x442==x443)%x444));

    if (t108 != -1052944112492910LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x445 = 94;
	int16_t x446 = 125;
	volatile uint32_t x448 = 8836U;
	volatile uint32_t t109 = 556U;

    t109 = (x445+((x446==x447)%x448));

    if (t109 != 94U) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x449 = -1;
	uint32_t x450 = 355U;
	int64_t x451 = INT64_MAX;
	int8_t x452 = INT8_MIN;
	int32_t t110 = 1;

    t110 = (x449+((x450==x451)%x452));

    if (t110 != -1) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile uint8_t x453 = 1U;
	uint32_t x454 = 7075382U;
	int16_t x456 = -1;
	int32_t t111 = 29071;

    t111 = (x453+((x454==x455)%x456));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x457 = 2870741;
	volatile int8_t x458 = INT8_MIN;
	volatile uint64_t x459 = UINT64_MAX;
	volatile int32_t t112 = 5617432;

    t112 = (x457+((x458==x459)%x460));

    if (t112 != 2870741) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint64_t x461 = 3091026424412848LLU;
	volatile uint64_t x462 = 365006928372LLU;
	int8_t x463 = 38;
	uint16_t x464 = UINT16_MAX;

    t113 = (x461+((x462==x463)%x464));

    if (t113 != 3091026424412848LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x465 = INT32_MAX;
	int32_t x466 = INT32_MIN;
	volatile uint64_t x467 = 17972719103284975LLU;
	int16_t x468 = INT16_MIN;
	int32_t t114 = INT32_MAX;

    t114 = (x465+((x466==x467)%x468));

    if (t114 != INT32_MAX) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x469 = INT64_MIN;
	uint8_t x470 = 1U;
	volatile int16_t x471 = -1;
	uint64_t x472 = 193921738563LLU;
	uint64_t t115 = 8626067366437LLU;

    t115 = (x469+((x470==x471)%x472));

    if (t115 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x473 = -1LL;
	static uint64_t x474 = 120275090LLU;
	static int16_t x475 = -1;
	int64_t x476 = INT64_MIN;
	static volatile int64_t t116 = 0LL;

    t116 = (x473+((x474==x475)%x476));

    if (t116 != -1LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x477 = INT16_MIN;
	uint64_t x478 = UINT64_MAX;
	int16_t x479 = -1;
	volatile int32_t x480 = INT32_MAX;
	static volatile int32_t t117 = 156375905;

    t117 = (x477+((x478==x479)%x480));

    if (t117 != -32767) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x481 = -1;
	int32_t x482 = -1;
	volatile int64_t x483 = -1LL;
	int8_t x484 = INT8_MIN;
	volatile int32_t t118 = 0;

    t118 = (x481+((x482==x483)%x484));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x485 = UINT16_MAX;
	uint16_t x486 = 14U;
	uint64_t x487 = 221590423699138LLU;

    t119 = (x485+((x486==x487)%x488));

    if (t119 != 65535) { NG(); } else { ; }
	
}

void f120(void) {
    	static int32_t x489 = INT32_MAX;
	volatile int8_t x490 = -62;
	uint16_t x491 = UINT16_MAX;
	int32_t x492 = INT32_MIN;
	int32_t t120 = INT32_MAX;

    t120 = (x489+((x490==x491)%x492));

    if (t120 != INT32_MAX) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x493 = -1;
	static int8_t x494 = INT8_MAX;
	static int16_t x495 = INT16_MAX;
	volatile uint8_t x496 = 8U;
	int32_t t121 = 1;

    t121 = (x493+((x494==x495)%x496));

    if (t121 != -1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x497 = INT64_MIN;
	volatile int32_t x498 = -919;
	int64_t t122 = INT64_MIN;

    t122 = (x497+((x498==x499)%x500));

    if (t122 != INT64_MIN) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x502 = 570U;
	int16_t x503 = -17;
	int8_t x504 = -5;
	int32_t t123 = 38;

    t123 = (x501+((x502==x503)%x504));

    if (t123 != -32768) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x505 = INT64_MAX;
	int32_t x506 = INT32_MIN;
	uint64_t x507 = 11LLU;
	uint32_t x508 = 108302610U;
	volatile int64_t t124 = INT64_MAX;

    t124 = (x505+((x506==x507)%x508));

    if (t124 != INT64_MAX) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x509 = UINT16_MAX;
	uint64_t x510 = 517524552196LLU;
	int64_t t125 = 11228506078040LL;

    t125 = (x509+((x510==x511)%x512));

    if (t125 != 65535LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x513 = -1LL;
	int16_t x515 = INT16_MIN;
	uint16_t x516 = 266U;
	volatile int64_t t126 = -479302774435657LL;

    t126 = (x513+((x514==x515)%x516));

    if (t126 != -1LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x519 = 1U;
	int64_t x520 = INT64_MIN;
	int64_t t127 = 4511826755LL;

    t127 = (x517+((x518==x519)%x520));

    if (t127 != -32768LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x521 = 88;
	int32_t x522 = -13985566;
	static int32_t t128 = -3;

    t128 = (x521+((x522==x523)%x524));

    if (t128 != 88) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint64_t x525 = 13978670566495572LLU;
	static volatile uint64_t x526 = UINT64_MAX;
	int32_t x527 = INT32_MIN;
	static volatile uint64_t x528 = 1426167LLU;
	uint64_t t129 = 8338891228666479605LLU;

    t129 = (x525+((x526==x527)%x528));

    if (t129 != 13978670566495572LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x530 = INT16_MIN;
	int32_t x532 = 17490;
	volatile uint64_t t130 = 893230LLU;

    t130 = (x529+((x530==x531)%x532));

    if (t130 != 432097420LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x533 = 0U;
	uint32_t x534 = 17476U;
	static uint8_t x535 = UINT8_MAX;
	int64_t x536 = -1LL;
	int64_t t131 = -8853288034198014LL;

    t131 = (x533+((x534==x535)%x536));

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint32_t x537 = 41957525U;
	int16_t x538 = INT16_MAX;
	uint64_t x539 = 5080480316567LLU;
	int32_t x540 = INT32_MAX;
	uint32_t t132 = 2161U;

    t132 = (x537+((x538==x539)%x540));

    if (t132 != 41957525U) { NG(); } else { ; }
	
}

void f133(void) {
    	static int32_t x541 = -1;
	static uint8_t x542 = UINT8_MAX;
	uint64_t x543 = 12348484LLU;
	uint64_t x544 = 13LLU;

    t133 = (x541+((x542==x543)%x544));

    if (t133 != UINT64_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x549 = INT16_MIN;
	int8_t x550 = -31;
	int16_t x552 = INT16_MAX;
	static volatile int32_t t134 = 992320;

    t134 = (x549+((x550==x551)%x552));

    if (t134 != -32768) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x554 = -1LL;
	int64_t x556 = -4141468445024LL;
	static int64_t t135 = -53002549577316558LL;

    t135 = (x553+((x554==x555)%x556));

    if (t135 != -1LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x557 = INT16_MAX;
	static uint64_t x560 = UINT64_MAX;
	static volatile uint64_t t136 = 97285LLU;

    t136 = (x557+((x558==x559)%x560));

    if (t136 != 32767LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint8_t x561 = 17U;
	int16_t x562 = INT16_MAX;
	int32_t x563 = -22563;
	uint16_t x564 = 7336U;

    t137 = (x561+((x562==x563)%x564));

    if (t137 != 17) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x566 = -29LL;
	int8_t x567 = INT8_MAX;
	uint8_t x568 = UINT8_MAX;
	volatile int32_t t138 = 29886;

    t138 = (x565+((x566==x567)%x568));

    if (t138 != 111) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x569 = 29;
	uint32_t x571 = 1068052235U;
	static volatile int8_t x572 = 2;
	int32_t t139 = 103605;

    t139 = (x569+((x570==x571)%x572));

    if (t139 != 29) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x573 = INT8_MIN;
	volatile uint32_t x574 = 523686U;
	static int64_t x575 = -1240972119526LL;
	static int32_t x576 = INT32_MIN;
	int32_t t140 = -932;

    t140 = (x573+((x574==x575)%x576));

    if (t140 != -128) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x577 = UINT8_MAX;
	int32_t x578 = INT32_MIN;
	int64_t x579 = INT64_MIN;
	int32_t x580 = 6;
	int32_t t141 = -18958;

    t141 = (x577+((x578==x579)%x580));

    if (t141 != 255) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x582 = 24216555427981LL;
	int32_t x583 = 704421075;
	int16_t x584 = INT16_MIN;
	volatile int64_t t142 = 3208130920818393LL;

    t142 = (x581+((x582==x583)%x584));

    if (t142 != -1LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x585 = 0;
	uint32_t x586 = 124973U;
	int16_t x587 = 1;
	int64_t x588 = INT64_MIN;
	volatile int64_t t143 = 27020515LL;

    t143 = (x585+((x586==x587)%x588));

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x589 = INT64_MAX;
	int8_t x590 = -1;
	int16_t x591 = -1798;
	int8_t x592 = -11;
	volatile int64_t t144 = INT64_MAX;

    t144 = (x589+((x590==x591)%x592));

    if (t144 != INT64_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	static int64_t x593 = -1LL;
	int16_t x595 = INT16_MAX;
	static int64_t x596 = INT64_MIN;
	int64_t t145 = 8445089026LL;

    t145 = (x593+((x594==x595)%x596));

    if (t145 != -1LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x597 = UINT32_MAX;
	volatile uint8_t x598 = 17U;
	uint8_t x599 = 7U;
	uint64_t x600 = 58101346398LLU;
	volatile uint64_t t146 = 61LLU;

    t146 = (x597+((x598==x599)%x600));

    if (t146 != 4294967295LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x601 = INT32_MIN;
	uint16_t x602 = 193U;
	uint8_t x603 = 36U;
	uint16_t x604 = UINT16_MAX;
	static int32_t t147 = INT32_MIN;

    t147 = (x601+((x602==x603)%x604));

    if (t147 != INT32_MIN) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x605 = 110291905;
	uint16_t x607 = 6U;
	volatile int16_t x608 = -1;
	static volatile int32_t t148 = -3444;

    t148 = (x605+((x606==x607)%x608));

    if (t148 != 110291905) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x609 = INT8_MIN;
	static uint16_t x610 = UINT16_MAX;
	int64_t x612 = 16548LL;
	int64_t t149 = -52295751957LL;

    t149 = (x609+((x610==x611)%x612));

    if (t149 != -128LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x613 = INT32_MIN;
	uint8_t x614 = 3U;
	volatile int64_t x615 = 145029888490734657LL;
	int16_t x616 = INT16_MIN;

    t150 = (x613+((x614==x615)%x616));

    if (t150 != INT32_MIN) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x617 = INT64_MIN;
	int8_t x618 = INT8_MIN;
	uint16_t x619 = 10U;
	int16_t x620 = INT16_MAX;
	int64_t t151 = INT64_MIN;

    t151 = (x617+((x618==x619)%x620));

    if (t151 != INT64_MIN) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x621 = -1LL;
	int32_t x622 = -1;
	int8_t x623 = 1;
	volatile int64_t t152 = 5123639477128769LL;

    t152 = (x621+((x622==x623)%x624));

    if (t152 != -1LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x625 = INT64_MAX;
	int64_t x626 = INT64_MIN;
	int64_t x627 = 4093928314044661536LL;
	int64_t x628 = 518484662037033LL;
	volatile int64_t t153 = INT64_MAX;

    t153 = (x625+((x626==x627)%x628));

    if (t153 != INT64_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x630 = 580944;
	int16_t x631 = -1;
	volatile int64_t t154 = -3LL;

    t154 = (x629+((x630==x631)%x632));

    if (t154 != -32768LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int32_t x633 = INT32_MIN;
	volatile uint16_t x634 = 17864U;
	volatile uint8_t x635 = UINT8_MAX;
	static int8_t x636 = 1;
	volatile int32_t t155 = INT32_MIN;

    t155 = (x633+((x634==x635)%x636));

    if (t155 != INT32_MIN) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint8_t x637 = 11U;
	uint16_t x639 = UINT16_MAX;

    t156 = (x637+((x638==x639)%x640));

    if (t156 != 11U) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x641 = INT8_MIN;
	int8_t x642 = INT8_MIN;
	int16_t x643 = INT16_MIN;
	static uint32_t x644 = 496608750U;

    t157 = (x641+((x642==x643)%x644));

    if (t157 != 4294967168U) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x646 = INT8_MAX;
	volatile uint8_t x647 = UINT8_MAX;
	int16_t x648 = INT16_MIN;

    t158 = (x645+((x646==x647)%x648));

    if (t158 != 255) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x649 = 1;
	volatile int32_t x650 = INT32_MIN;
	uint8_t x651 = 4U;
	static uint16_t x652 = UINT16_MAX;
	int32_t t159 = -3251;

    t159 = (x649+((x650==x651)%x652));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x653 = 1344U;
	int64_t x654 = -1LL;
	static int16_t x655 = INT16_MIN;
	uint32_t x656 = 245U;
	volatile uint32_t t160 = 27590U;

    t160 = (x653+((x654==x655)%x656));

    if (t160 != 1344U) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x657 = -1;
	int64_t x658 = -66648100719LL;
	volatile int32_t x659 = INT32_MIN;
	int32_t x660 = -1;
	volatile int32_t t161 = -498860;

    t161 = (x657+((x658==x659)%x660));

    if (t161 != -1) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x661 = -3842052;
	int64_t x662 = INT64_MAX;
	static volatile int64_t x663 = INT64_MAX;
	volatile int32_t t162 = -16;

    t162 = (x661+((x662==x663)%x664));

    if (t162 != -3842051) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x665 = 1077;
	int8_t x666 = -1;
	int16_t x667 = 31;
	int64_t x668 = -1LL;
	volatile int64_t t163 = -748237296718LL;

    t163 = (x665+((x666==x667)%x668));

    if (t163 != 1077LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x669 = 3835LL;
	int32_t x670 = 470408;
	int32_t x671 = INT32_MIN;
	uint64_t x672 = UINT64_MAX;
	volatile uint64_t t164 = 132976925LLU;

    t164 = (x669+((x670==x671)%x672));

    if (t164 != 3835LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint64_t x673 = 16409130LLU;
	static int64_t x674 = -1LL;
	int8_t x675 = 1;
	static uint32_t x676 = UINT32_MAX;
	uint64_t t165 = 6363944048173LLU;

    t165 = (x673+((x674==x675)%x676));

    if (t165 != 16409130LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x677 = 61U;
	int8_t x678 = 0;
	int32_t x679 = INT32_MIN;
	static int16_t x680 = INT16_MAX;
	static int32_t t166 = 0;

    t166 = (x677+((x678==x679)%x680));

    if (t166 != 61) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint16_t x681 = 7U;
	int8_t x682 = -1;
	static volatile uint32_t x683 = 12U;
	uint64_t x684 = 919091525587813803LLU;

    t167 = (x681+((x682==x683)%x684));

    if (t167 != 7LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x685 = -1;
	volatile int64_t x687 = INT64_MIN;
	int64_t x688 = -1LL;
	volatile int64_t t168 = -2292760LL;

    t168 = (x685+((x686==x687)%x688));

    if (t168 != -1LL) { NG(); } else { ; }
	
}

void f169(void) {
    	static int8_t x689 = INT8_MIN;
	int64_t x690 = INT64_MAX;
	int32_t x691 = INT32_MAX;
	int8_t x692 = INT8_MIN;
	static int32_t t169 = -163122;

    t169 = (x689+((x690==x691)%x692));

    if (t169 != -128) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x695 = INT32_MIN;
	int8_t x696 = -14;
	volatile int64_t t170 = -1LL;

    t170 = (x693+((x694==x695)%x696));

    if (t170 != -322642909LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x697 = 1U;
	volatile int64_t x698 = 10083834846LL;
	int64_t x699 = INT64_MIN;
	int8_t x700 = 1;
	volatile int32_t t171 = 1;

    t171 = (x697+((x698==x699)%x700));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x701 = 9;
	static volatile int16_t x702 = INT16_MIN;
	int8_t x703 = -2;
	uint8_t x704 = UINT8_MAX;
	volatile int32_t t172 = -24897865;

    t172 = (x701+((x702==x703)%x704));

    if (t172 != 9) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x705 = -1;
	uint8_t x706 = UINT8_MAX;
	uint32_t x707 = UINT32_MAX;
	int64_t x708 = INT64_MIN;
	int64_t t173 = -5511045LL;

    t173 = (x705+((x706==x707)%x708));

    if (t173 != -1LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x709 = 0U;
	uint32_t x710 = UINT32_MAX;
	int32_t x711 = INT32_MIN;
	uint32_t x712 = 59684U;
	uint32_t t174 = 45416672U;

    t174 = (x709+((x710==x711)%x712));

    if (t174 != 0U) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x714 = INT8_MIN;
	uint32_t x715 = UINT32_MAX;

    t175 = (x713+((x714==x715)%x716));

    if (t175 != -31415587LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x717 = INT32_MIN;
	int64_t x718 = -1LL;
	static volatile int32_t x719 = INT32_MAX;
	int32_t x720 = -432672657;
	volatile int32_t t176 = INT32_MIN;

    t176 = (x717+((x718==x719)%x720));

    if (t176 != INT32_MIN) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint64_t x721 = UINT64_MAX;
	int16_t x722 = INT16_MIN;
	uint8_t x723 = UINT8_MAX;
	volatile uint64_t t177 = UINT64_MAX;

    t177 = (x721+((x722==x723)%x724));

    if (t177 != UINT64_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile uint64_t x725 = UINT64_MAX;
	volatile int8_t x726 = -1;
	static int64_t x727 = INT64_MAX;
	volatile int8_t x728 = -1;
	uint64_t t178 = UINT64_MAX;

    t178 = (x725+((x726==x727)%x728));

    if (t178 != UINT64_MAX) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x729 = 269802381LL;
	volatile uint8_t x730 = 6U;
	int64_t x732 = INT64_MIN;

    t179 = (x729+((x730==x731)%x732));

    if (t179 != 269802381LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x733 = 1116973U;
	static int16_t x735 = -1;
	volatile uint32_t t180 = 4298U;

    t180 = (x733+((x734==x735)%x736));

    if (t180 != 1116973U) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint8_t x737 = 5U;
	uint8_t x738 = 9U;
	int8_t x739 = -27;
	static uint16_t x740 = 14U;
	int32_t t181 = -14388;

    t181 = (x737+((x738==x739)%x740));

    if (t181 != 5) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint32_t x742 = 7218U;
	uint8_t x743 = UINT8_MAX;
	volatile uint64_t t182 = 1198736352LLU;

    t182 = (x741+((x742==x743)%x744));

    if (t182 != 54061995LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x745 = -1182;
	uint16_t x747 = UINT16_MAX;
	static uint64_t x748 = UINT64_MAX;
	volatile uint64_t t183 = 83909257653650LLU;

    t183 = (x745+((x746==x747)%x748));

    if (t183 != 18446744073709550434LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x749 = UINT16_MAX;
	int8_t x751 = 1;
	uint32_t x752 = 2222702U;
	static volatile uint32_t t184 = 70412398U;

    t184 = (x749+((x750==x751)%x752));

    if (t184 != 65535U) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x755 = INT32_MIN;
	volatile uint32_t x756 = 35061961U;
	volatile uint64_t t185 = 417687LLU;

    t185 = (x753+((x754==x755)%x756));

    if (t185 != 2LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x757 = 7U;
	volatile int64_t x758 = INT64_MAX;
	int32_t x759 = INT32_MIN;
	int64_t x760 = INT64_MIN;
	int64_t t186 = -16545871363890054LL;

    t186 = (x757+((x758==x759)%x760));

    if (t186 != 7LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile uint64_t x761 = 25183952699948696LLU;
	uint8_t x762 = 17U;
	uint8_t x763 = 3U;
	uint32_t x764 = 796U;
	static volatile uint64_t t187 = 16512253300964907LLU;

    t187 = (x761+((x762==x763)%x764));

    if (t187 != 25183952699948696LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x765 = INT8_MAX;
	int16_t x766 = 1736;
	int8_t x767 = 29;
	int16_t x768 = INT16_MIN;

    t188 = (x765+((x766==x767)%x768));

    if (t188 != 127) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x769 = 9036;
	int32_t x770 = -1;
	static volatile int64_t x771 = -1LL;
	uint8_t x772 = 3U;
	int32_t t189 = -1433;

    t189 = (x769+((x770==x771)%x772));

    if (t189 != 9037) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x773 = UINT16_MAX;
	int16_t x774 = INT16_MIN;
	int8_t x775 = 1;
	int32_t x776 = INT32_MIN;
	static int32_t t190 = 1;

    t190 = (x773+((x774==x775)%x776));

    if (t190 != 65535) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x777 = 1013270;
	uint16_t x778 = 3721U;
	int64_t x779 = INT64_MIN;
	static int16_t x780 = 1103;
	volatile int32_t t191 = 128174;

    t191 = (x777+((x778==x779)%x780));

    if (t191 != 1013270) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x781 = 27;
	int8_t x782 = -1;
	int32_t x783 = 32370;
	int16_t x784 = INT16_MAX;
	volatile int32_t t192 = -27132495;

    t192 = (x781+((x782==x783)%x784));

    if (t192 != 27) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x787 = -53;
	volatile uint64_t x788 = 564941LLU;
	volatile uint64_t t193 = 104324632495LLU;

    t193 = (x785+((x786==x787)%x788));

    if (t193 != 1LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x790 = INT16_MAX;
	volatile uint8_t x791 = 0U;
	static int32_t t194 = 14934;

    t194 = (x789+((x790==x791)%x792));

    if (t194 != 65535) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x793 = -27443919064680205LL;
	static int64_t x795 = INT64_MIN;
	uint64_t x796 = 27939999726326LLU;

    t195 = (x793+((x794==x795)%x796));

    if (t195 != 18419300154644871411LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x797 = 24U;
	static volatile int32_t x798 = INT32_MIN;
	static uint16_t x799 = 3U;
	int64_t x800 = INT64_MAX;

    t196 = (x797+((x798==x799)%x800));

    if (t196 != 24LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x801 = 7;
	int32_t x802 = INT32_MAX;
	volatile int8_t x803 = INT8_MIN;
	int64_t x804 = -133LL;
	static int64_t t197 = -913LL;

    t197 = (x801+((x802==x803)%x804));

    if (t197 != 7LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x805 = 1939909;
	int8_t x806 = INT8_MAX;
	static int8_t x808 = -1;
	volatile int32_t t198 = -107887469;

    t198 = (x805+((x806==x807)%x808));

    if (t198 != 1939909) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x812 = INT16_MIN;
	uint32_t t199 = 25457143U;

    t199 = (x809+((x810==x811)%x812));

    if (t199 != 17431U) { NG(); } else { ; }
	
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

