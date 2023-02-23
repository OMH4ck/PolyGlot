
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

static volatile int16_t x1 = -1;
uint32_t x5 = UINT32_MAX;
static volatile uint8_t x9 = 3U;
int32_t x10 = -126971;
uint32_t x11 = 0U;
static uint8_t x16 = 24U;
int64_t x18 = INT64_MAX;
int32_t x28 = -1;
static volatile int32_t t8 = INT32_MAX;
int8_t x37 = 62;
int16_t x45 = INT16_MIN;
int64_t x46 = 32491170650124188LL;
static uint8_t x53 = 111U;
uint8_t x54 = UINT8_MAX;
static int32_t t12 = 0;
volatile int8_t x61 = 1;
int32_t t14 = 311688729;
int32_t x75 = INT32_MIN;
int32_t t17 = 27056;
int16_t x77 = INT16_MAX;
int32_t x78 = 3366;
volatile uint16_t x79 = UINT16_MAX;
int64_t x82 = -64691793LL;
int8_t x97 = INT8_MAX;
int32_t x102 = -1;
int16_t x103 = -1;
volatile uint8_t x117 = 9U;
int32_t x130 = INT32_MIN;
int8_t x131 = INT8_MIN;
uint32_t x132 = 21U;
int32_t t29 = 3692;
uint16_t x134 = 176U;
int16_t x140 = -1;
int32_t x146 = INT32_MIN;
int32_t x149 = -363;
int32_t x151 = INT32_MAX;
int8_t x154 = -1;
static uint32_t x158 = 0U;
volatile int64_t t36 = 30948759LL;
int8_t x162 = -1;
uint64_t x163 = 184578273089409LLU;
int32_t x164 = INT32_MAX;
int16_t x172 = INT16_MIN;
static volatile int64_t x179 = -371743155616453859LL;
int16_t x180 = INT16_MIN;
int8_t x184 = INT8_MIN;
static int64_t t42 = 1LL;
int32_t t44 = -4;
int16_t x205 = INT16_MAX;
static int16_t x206 = INT16_MAX;
uint32_t x207 = 3242297U;
int64_t x210 = -9338277490LL;
static uint32_t x212 = 37U;
int8_t x221 = INT8_MIN;
uint32_t x239 = 18857574U;
volatile uint64_t x245 = 429LLU;
int16_t x249 = INT16_MIN;
volatile int32_t x251 = INT32_MAX;
static int32_t t58 = 4;
uint64_t x261 = 647228LLU;
volatile uint64_t t61 = 49415155400914734LLU;
uint8_t x269 = 0U;
int32_t x270 = -1;
volatile uint8_t x276 = UINT8_MAX;
static uint16_t x281 = 2992U;
int32_t x284 = INT32_MAX;
uint64_t x287 = 3866293LLU;
static uint8_t x300 = UINT8_MAX;
int16_t x302 = -7;
int16_t x305 = -2269;
uint32_t x310 = 6415475U;
volatile int32_t t72 = 4166;
volatile int32_t t73 = 55410;
volatile int32_t t75 = 46271062;
static int64_t x326 = INT64_MIN;
int8_t x331 = -15;
volatile int32_t x344 = -1;
static volatile uint16_t x346 = UINT16_MAX;
int16_t x348 = 7902;
static int8_t x349 = 12;
uint16_t x352 = 336U;
int8_t x354 = -3;
int8_t x357 = INT8_MAX;
uint32_t x368 = 7978936U;
int64_t t87 = INT64_MIN;
int8_t x375 = 1;
int8_t x381 = INT8_MIN;
int32_t x385 = INT32_MIN;
volatile int8_t x387 = 1;
int64_t x392 = -33213LL;
int8_t x394 = -1;
static uint32_t x396 = 4652027U;
static int64_t t94 = -31460LL;
static int32_t x402 = INT32_MAX;
static volatile uint8_t x406 = 45U;
uint64_t t96 = 40334LLU;
int32_t x410 = INT32_MIN;
volatile uint64_t x414 = UINT64_MAX;
int32_t x418 = INT32_MIN;
uint16_t x421 = 177U;
int16_t x423 = INT16_MIN;
uint8_t x429 = UINT8_MAX;
volatile int32_t t103 = -356233;
uint64_t x443 = 54046612042398LLU;
static int32_t t105 = 41735877;
static uint32_t x447 = 62538877U;
static int8_t x448 = -1;
volatile int32_t t106 = INT32_MAX;
int32_t x449 = INT32_MIN;
static int16_t x454 = -68;
volatile int32_t t108 = -4933;
int64_t x457 = -1LL;
int8_t x472 = INT8_MAX;
uint64_t x474 = UINT64_MAX;
volatile int64_t x478 = INT64_MIN;
volatile int32_t x492 = -1;
volatile uint32_t t116 = UINT32_MAX;
int16_t x505 = 198;
int32_t x507 = -1;
static int32_t x517 = -1;
int32_t x519 = INT32_MIN;
volatile uint64_t x520 = 3838356LLU;
uint16_t x521 = UINT16_MAX;
static int32_t x526 = -1;
uint16_t x527 = UINT16_MAX;
volatile int32_t t125 = INT32_MIN;
uint32_t x532 = UINT32_MAX;
int64_t t130 = INT64_MIN;
static uint64_t x559 = UINT64_MAX;
static int32_t x563 = -7185411;
uint16_t x565 = 12U;
static int32_t x575 = INT32_MIN;
volatile int32_t t137 = -3;
volatile int32_t t138 = 8;
static int32_t t140 = -68;
static volatile int64_t t143 = INT64_MIN;
int64_t x612 = -1LL;
static int32_t t145 = 5256;
uint64_t x613 = UINT64_MAX;
static int16_t x615 = INT16_MIN;
static int32_t x619 = INT32_MAX;
uint32_t x622 = 1785787488U;
volatile uint32_t x631 = 415248620U;
int32_t x636 = INT32_MIN;
int64_t x637 = -55926620194002079LL;
static int64_t x643 = 687274560407LL;
static volatile uint64_t t154 = 21321996388948405LLU;
int32_t x650 = INT32_MAX;
uint64_t x665 = 256656564949590LLU;
static int32_t x667 = 8;
int64_t x671 = INT64_MAX;
uint16_t x675 = 7559U;
volatile int32_t t161 = -1;
volatile int32_t t162 = 33509910;
static uint64_t x688 = UINT64_MAX;
int16_t x689 = INT16_MIN;
int16_t x696 = -1;
static uint64_t t171 = 1640091145106948369LLU;
int16_t x723 = -1;
static int16_t x725 = INT16_MIN;
static uint32_t x731 = 1965171U;
int64_t x733 = 3221LL;
int32_t x741 = -1;
uint8_t x745 = 39U;
int8_t x750 = 41;
static uint32_t x757 = 107272613U;
volatile int8_t x758 = INT8_MIN;
static volatile int16_t x759 = INT16_MIN;
static int16_t x766 = 1;
int32_t t183 = 22899;
int32_t x775 = INT32_MAX;
volatile int8_t x777 = INT8_MIN;
int32_t t186 = -387;
static volatile uint32_t x796 = 802U;
volatile int32_t t190 = INT32_MIN;
static int32_t t191 = -912250237;
int32_t x802 = 1071497704;
int8_t x804 = INT8_MIN;
int16_t x809 = INT16_MIN;
int32_t x812 = 15;
static int8_t x813 = 13;
volatile int64_t x816 = 12730644268043041LL;
int16_t x818 = -63;
int32_t x819 = -1;
volatile uint8_t x826 = 0U;
volatile uint32_t t199 = 497416307U;


void f0(void) {
    	int8_t x2 = INT8_MIN;
	volatile uint8_t x3 = 3U;
	int64_t x4 = -1LL;
	static volatile int32_t t0 = 3;

    t0 = (x1+((x2|x3)>x4));

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x6 = 659U;
	volatile int8_t x7 = INT8_MIN;
	uint16_t x8 = 11U;
	volatile uint32_t t1 = 87577U;

    t1 = (x5+((x6|x7)>x8));

    if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x12 = -1;
	int32_t t2 = 1;

    t2 = (x9+((x10|x11)>x12));

    if (t2 != 3) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x13 = -1;
	static volatile int64_t x14 = -1LL;
	int8_t x15 = INT8_MIN;
	volatile int32_t t3 = 2747385;

    t3 = (x13+((x14|x15)>x16));

    if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = 20U;
	uint16_t x19 = UINT16_MAX;
	uint8_t x20 = 1U;
	volatile int32_t t4 = -141;

    t4 = (x17+((x18|x19)>x20));

    if (t4 != 21) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = -1;
	int16_t x22 = INT16_MAX;
	int64_t x23 = -1LL;
	int16_t x24 = -1;
	static volatile int32_t t5 = -561669749;

    t5 = (x21+((x22|x23)>x24));

    if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x25 = UINT8_MAX;
	volatile uint32_t x26 = 648726096U;
	volatile uint32_t x27 = UINT32_MAX;
	volatile int32_t t6 = -560996;

    t6 = (x25+((x26|x27)>x28));

    if (t6 != 255) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = INT16_MIN;
	static uint64_t x30 = 1917628512LLU;
	int64_t x31 = INT64_MIN;
	uint64_t x32 = 3664867794706LLU;
	int32_t t7 = -231;

    t7 = (x29+((x30|x31)>x32));

    if (t7 != -32767) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = INT32_MAX;
	int32_t x34 = -14;
	volatile int8_t x35 = INT8_MIN;
	int16_t x36 = -1;

    t8 = (x33+((x34|x35)>x36));

    if (t8 != INT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x38 = UINT32_MAX;
	volatile int8_t x39 = -23;
	uint64_t x40 = UINT64_MAX;
	volatile int32_t t9 = -201894499;

    t9 = (x37+((x38|x39)>x40));

    if (t9 != 62) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = -1;
	uint16_t x42 = 1965U;
	uint32_t x43 = 15U;
	volatile uint16_t x44 = 201U;
	static int32_t t10 = -244797548;

    t10 = (x41+((x42|x43)>x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int16_t x47 = INT16_MIN;
	int16_t x48 = 3065;
	volatile int32_t t11 = 15815;

    t11 = (x45+((x46|x47)>x48));

    if (t11 != -32768) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x55 = INT8_MIN;
	int16_t x56 = -1;

    t12 = (x53+((x54|x55)>x56));

    if (t12 != 111) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x57 = INT8_MIN;
	static volatile int32_t x58 = INT32_MAX;
	int16_t x59 = INT16_MIN;
	int8_t x60 = INT8_MIN;
	int32_t t13 = -18;

    t13 = (x57+((x58|x59)>x60));

    if (t13 != -127) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x62 = INT16_MIN;
	volatile int64_t x63 = INT64_MAX;
	uint32_t x64 = 504396U;

    t14 = (x61+((x62|x63)>x64));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x65 = INT16_MIN;
	int32_t x66 = INT32_MIN;
	static int8_t x67 = INT8_MAX;
	int32_t x68 = 76;
	int32_t t15 = -34847;

    t15 = (x65+((x66|x67)>x68));

    if (t15 != -32768) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x69 = 508;
	int16_t x70 = INT16_MAX;
	static uint16_t x71 = UINT16_MAX;
	int8_t x72 = -1;
	volatile int32_t t16 = -204471;

    t16 = (x69+((x70|x71)>x72));

    if (t16 != 509) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x73 = -1;
	volatile uint16_t x74 = 20U;
	volatile uint64_t x76 = UINT64_MAX;

    t17 = (x73+((x74|x75)>x76));

    if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x80 = -13477;
	static int32_t t18 = 2;

    t18 = (x77+((x78|x79)>x80));

    if (t18 != 32768) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint16_t x81 = 23U;
	int32_t x83 = INT32_MIN;
	volatile uint32_t x84 = UINT32_MAX;
	int32_t t19 = -669;

    t19 = (x81+((x82|x83)>x84));

    if (t19 != 23) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x85 = -109;
	uint8_t x86 = 6U;
	int16_t x87 = INT16_MIN;
	int16_t x88 = -1;
	volatile int32_t t20 = -366978;

    t20 = (x85+((x86|x87)>x88));

    if (t20 != -109) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x89 = INT8_MIN;
	volatile int8_t x90 = INT8_MIN;
	volatile uint8_t x91 = 112U;
	volatile int8_t x92 = INT8_MAX;
	volatile int32_t t21 = 42225795;

    t21 = (x89+((x90|x91)>x92));

    if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x93 = 5000749178414774611LLU;
	uint16_t x94 = UINT16_MAX;
	volatile int64_t x95 = INT64_MAX;
	static int32_t x96 = -1;
	uint64_t t22 = 2423909028820LLU;

    t22 = (x93+((x94|x95)>x96));

    if (t22 != 5000749178414774612LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x98 = INT8_MAX;
	static int16_t x99 = -7;
	int8_t x100 = INT8_MAX;
	int32_t t23 = -228420;

    t23 = (x97+((x98|x99)>x100));

    if (t23 != 127) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x101 = INT8_MIN;
	int64_t x104 = 10235LL;
	int32_t t24 = -73682250;

    t24 = (x101+((x102|x103)>x104));

    if (t24 != -128) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x105 = -1LL;
	int32_t x106 = -22878098;
	static uint32_t x107 = 504053U;
	uint8_t x108 = UINT8_MAX;
	volatile int64_t t25 = -31500260229145LL;

    t25 = (x105+((x106|x107)>x108));

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x109 = 26527819599478LLU;
	static int8_t x110 = 0;
	uint64_t x111 = 948122491815289LLU;
	int16_t x112 = INT16_MAX;
	uint64_t t26 = 18626897650085LLU;

    t26 = (x109+((x110|x111)>x112));

    if (t26 != 26527819599479LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint64_t x113 = 5865234055383316589LLU;
	int32_t x114 = -7035;
	int64_t x115 = INT64_MIN;
	volatile int16_t x116 = -1;
	static volatile uint64_t t27 = 6056LLU;

    t27 = (x113+((x114|x115)>x116));

    if (t27 != 5865234055383316589LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x118 = -1;
	static uint64_t x119 = 34801188043414LLU;
	int64_t x120 = INT64_MAX;
	static volatile int32_t t28 = 1;

    t28 = (x117+((x118|x119)>x120));

    if (t28 != 10) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x129 = UINT8_MAX;

    t29 = (x129+((x130|x131)>x132));

    if (t29 != 256) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t x133 = -7005242LL;
	static int8_t x135 = INT8_MIN;
	uint8_t x136 = UINT8_MAX;
	int64_t t30 = -66LL;

    t30 = (x133+((x134|x135)>x136));

    if (t30 != -7005242LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x137 = -1;
	uint8_t x138 = UINT8_MAX;
	static int16_t x139 = -4;
	int32_t t31 = -367;

    t31 = (x137+((x138|x139)>x140));

    if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x141 = -6269465;
	int32_t x142 = -1;
	int8_t x143 = INT8_MIN;
	volatile int16_t x144 = 3;
	volatile int32_t t32 = -1;

    t32 = (x141+((x142|x143)>x144));

    if (t32 != -6269465) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x145 = 1596957684U;
	int16_t x147 = INT16_MAX;
	uint32_t x148 = 495U;
	uint32_t t33 = 6U;

    t33 = (x145+((x146|x147)>x148));

    if (t33 != 1596957685U) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x150 = 1;
	static int32_t x152 = -66764;
	int32_t t34 = 404862;

    t34 = (x149+((x150|x151)>x152));

    if (t34 != -362) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x153 = UINT32_MAX;
	static uint32_t x155 = 72561170U;
	int16_t x156 = INT16_MIN;
	uint32_t t35 = 482141015U;

    t35 = (x153+((x154|x155)>x156));

    if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x157 = -1LL;
	int32_t x159 = INT32_MAX;
	static int64_t x160 = INT64_MIN;

    t36 = (x157+((x158|x159)>x160));

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x161 = INT16_MIN;
	int32_t t37 = 1226985;

    t37 = (x161+((x162|x163)>x164));

    if (t37 != -32767) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x165 = INT16_MIN;
	uint16_t x166 = 0U;
	static int16_t x167 = -1;
	int64_t x168 = -1LL;
	static volatile int32_t t38 = 1613;

    t38 = (x165+((x166|x167)>x168));

    if (t38 != -32768) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x169 = 17U;
	volatile int32_t x170 = 110705;
	static uint16_t x171 = 0U;
	int32_t t39 = 8846;

    t39 = (x169+((x170|x171)>x172));

    if (t39 != 18) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x173 = 3U;
	volatile int64_t x174 = -1LL;
	uint64_t x175 = 6106431158343LLU;
	int8_t x176 = 0;
	static volatile int32_t t40 = -60654;

    t40 = (x173+((x174|x175)>x176));

    if (t40 != 4) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x177 = 5;
	int16_t x178 = INT16_MIN;
	int32_t t41 = -104680671;

    t41 = (x177+((x178|x179)>x180));

    if (t41 != 6) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x181 = -1LL;
	volatile int16_t x182 = 7;
	int32_t x183 = -1;

    t42 = (x181+((x182|x183)>x184));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x185 = 1077;
	volatile int32_t x186 = INT32_MIN;
	int16_t x187 = -1;
	uint8_t x188 = 0U;
	static int32_t t43 = 2510;

    t43 = (x185+((x186|x187)>x188));

    if (t43 != 1077) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x189 = -1;
	volatile uint32_t x190 = 868699903U;
	uint64_t x191 = 2728LLU;
	int16_t x192 = INT16_MIN;

    t44 = (x189+((x190|x191)>x192));

    if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int16_t x197 = -1;
	uint16_t x198 = 180U;
	int16_t x199 = -3545;
	int8_t x200 = INT8_MAX;
	volatile int32_t t45 = 8747;

    t45 = (x197+((x198|x199)>x200));

    if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x201 = INT32_MIN;
	int16_t x202 = INT16_MIN;
	int64_t x203 = INT64_MIN;
	int16_t x204 = INT16_MIN;
	static int32_t t46 = INT32_MIN;

    t46 = (x201+((x202|x203)>x204));

    if (t46 != INT32_MIN) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint8_t x208 = 1U;
	int32_t t47 = 6563778;

    t47 = (x205+((x206|x207)>x208));

    if (t47 != 32768) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int8_t x209 = -1;
	int64_t x211 = -1LL;
	volatile int32_t t48 = -19352225;

    t48 = (x209+((x210|x211)>x212));

    if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x213 = 363236;
	int8_t x214 = INT8_MAX;
	int64_t x215 = INT64_MIN;
	static uint64_t x216 = 2599041446123736514LLU;
	volatile int32_t t49 = 510738;

    t49 = (x213+((x214|x215)>x216));

    if (t49 != 363237) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint64_t x217 = 58788872218734LLU;
	int32_t x218 = -62989;
	int32_t x219 = 772;
	int16_t x220 = -1;
	static volatile uint64_t t50 = 120583396445LLU;

    t50 = (x217+((x218|x219)>x220));

    if (t50 != 58788872218734LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x222 = INT64_MAX;
	int32_t x223 = INT32_MIN;
	int16_t x224 = INT16_MIN;
	int32_t t51 = 1681446;

    t51 = (x221+((x222|x223)>x224));

    if (t51 != -127) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x225 = 806105617LL;
	static int64_t x226 = INT64_MIN;
	int32_t x227 = -1;
	int32_t x228 = INT32_MAX;
	volatile int64_t t52 = 57502LL;

    t52 = (x225+((x226|x227)>x228));

    if (t52 != 806105617LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x229 = -995086;
	static int64_t x230 = 28621183766569168LL;
	int16_t x231 = INT16_MAX;
	uint32_t x232 = UINT32_MAX;
	static int32_t t53 = 14;

    t53 = (x229+((x230|x231)>x232));

    if (t53 != -995085) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x233 = 0U;
	volatile int8_t x234 = INT8_MAX;
	static volatile int16_t x235 = -1842;
	int64_t x236 = INT64_MIN;
	volatile int32_t t54 = 56984230;

    t54 = (x233+((x234|x235)>x236));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x237 = 1U;
	volatile uint8_t x238 = 120U;
	int16_t x240 = 492;
	int32_t t55 = 2842;

    t55 = (x237+((x238|x239)>x240));

    if (t55 != 2) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x241 = INT32_MAX;
	int32_t x242 = 331659956;
	int64_t x243 = INT64_MIN;
	int16_t x244 = 860;
	static volatile int32_t t56 = INT32_MAX;

    t56 = (x241+((x242|x243)>x244));

    if (t56 != INT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint64_t x246 = UINT64_MAX;
	int8_t x247 = -1;
	volatile int32_t x248 = -3338379;
	uint64_t t57 = 704LLU;

    t57 = (x245+((x246|x247)>x248));

    if (t57 != 430LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x250 = INT8_MIN;
	volatile uint64_t x252 = UINT64_MAX;

    t58 = (x249+((x250|x251)>x252));

    if (t58 != -32768) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x253 = 219901617720188401LL;
	int16_t x254 = INT16_MIN;
	uint32_t x255 = 28447099U;
	int64_t x256 = INT64_MAX;
	static int64_t t59 = -1210817198011857446LL;

    t59 = (x253+((x254|x255)>x256));

    if (t59 != 219901617720188401LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x257 = 0LL;
	uint16_t x258 = 1513U;
	volatile int16_t x259 = INT16_MIN;
	static int64_t x260 = INT64_MAX;
	int64_t t60 = 0LL;

    t60 = (x257+((x258|x259)>x260));

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x262 = INT16_MIN;
	int64_t x263 = -3714293LL;
	int16_t x264 = INT16_MIN;

    t61 = (x261+((x262|x263)>x264));

    if (t61 != 647229LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x265 = -1;
	int16_t x266 = -6939;
	uint32_t x267 = 145U;
	int8_t x268 = 0;
	static volatile int32_t t62 = 1;

    t62 = (x265+((x266|x267)>x268));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x271 = INT8_MAX;
	volatile int16_t x272 = 0;
	int32_t t63 = 170535064;

    t63 = (x269+((x270|x271)>x272));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x273 = INT8_MIN;
	uint8_t x274 = 2U;
	static volatile int64_t x275 = INT64_MIN;
	volatile int32_t t64 = 26408;

    t64 = (x273+((x274|x275)>x276));

    if (t64 != -128) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x277 = 567U;
	volatile int16_t x278 = INT16_MIN;
	int64_t x279 = -1LL;
	int8_t x280 = INT8_MAX;
	int32_t t65 = 999;

    t65 = (x277+((x278|x279)>x280));

    if (t65 != 567) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x282 = 1;
	int64_t x283 = 1LL;
	volatile int32_t t66 = -1231657;

    t66 = (x281+((x282|x283)>x284));

    if (t66 != 2992) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x285 = -51;
	volatile int8_t x286 = -8;
	static int8_t x288 = -2;
	volatile int32_t t67 = 96632;

    t67 = (x285+((x286|x287)>x288));

    if (t67 != -51) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x289 = UINT32_MAX;
	static int8_t x290 = INT8_MAX;
	int16_t x291 = -1;
	int32_t x292 = -299;
	uint32_t t68 = 6674096U;

    t68 = (x289+((x290|x291)>x292));

    if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint32_t x297 = 1U;
	int16_t x298 = INT16_MIN;
	static volatile int32_t x299 = -3810;
	static uint32_t t69 = 0U;

    t69 = (x297+((x298|x299)>x300));

    if (t69 != 1U) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x301 = INT16_MAX;
	int32_t x303 = INT32_MIN;
	static int8_t x304 = 7;
	volatile int32_t t70 = -17;

    t70 = (x301+((x302|x303)>x304));

    if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x306 = INT64_MIN;
	static uint64_t x307 = 269836245094LLU;
	int64_t x308 = -1LL;
	volatile int32_t t71 = 440;

    t71 = (x305+((x306|x307)>x308));

    if (t71 != -2269) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x309 = -9353853;
	int8_t x311 = INT8_MAX;
	static uint8_t x312 = 6U;

    t72 = (x309+((x310|x311)>x312));

    if (t72 != -9353852) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t x313 = -1;
	uint8_t x314 = 22U;
	int16_t x315 = -1;
	int8_t x316 = INT8_MIN;

    t73 = (x313+((x314|x315)>x316));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint64_t x317 = 496LLU;
	uint64_t x318 = UINT64_MAX;
	int64_t x319 = INT64_MAX;
	volatile int8_t x320 = -3;
	volatile uint64_t t74 = 1190340777785LLU;

    t74 = (x317+((x318|x319)>x320));

    if (t74 != 497LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x321 = -71942879;
	int16_t x322 = -1;
	int64_t x323 = INT64_MIN;
	uint64_t x324 = 121LLU;

    t75 = (x321+((x322|x323)>x324));

    if (t75 != -71942878) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x325 = INT16_MIN;
	static int16_t x327 = -1;
	int8_t x328 = -1;
	volatile int32_t t76 = -6839199;

    t76 = (x325+((x326|x327)>x328));

    if (t76 != -32768) { NG(); } else { ; }
	
}

void f77(void) {
    	static int64_t x329 = -75599999607LL;
	static int32_t x330 = -234360312;
	static int16_t x332 = INT16_MIN;
	volatile int64_t t77 = 3193LL;

    t77 = (x329+((x330|x331)>x332));

    if (t77 != -75599999606LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint64_t x333 = 15LLU;
	int64_t x334 = -1LL;
	static int8_t x335 = 10;
	int16_t x336 = -1;
	volatile uint64_t t78 = 1567056137LLU;

    t78 = (x333+((x334|x335)>x336));

    if (t78 != 15LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint64_t x337 = UINT64_MAX;
	int8_t x338 = INT8_MIN;
	static int64_t x339 = -1LL;
	volatile int64_t x340 = -1LL;
	static volatile uint64_t t79 = UINT64_MAX;

    t79 = (x337+((x338|x339)>x340));

    if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x341 = INT32_MIN;
	static int8_t x342 = 45;
	uint16_t x343 = 0U;
	volatile int32_t t80 = -362;

    t80 = (x341+((x342|x343)>x344));

    if (t80 != -2147483647) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x345 = 46U;
	volatile int64_t x347 = INT64_MAX;
	volatile int32_t t81 = -380335807;

    t81 = (x345+((x346|x347)>x348));

    if (t81 != 47) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x350 = -1LL;
	uint8_t x351 = 2U;
	int32_t t82 = -151026;

    t82 = (x349+((x350|x351)>x352));

    if (t82 != 12) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x353 = 1;
	int16_t x355 = INT16_MAX;
	static int32_t x356 = INT32_MIN;
	int32_t t83 = -1;

    t83 = (x353+((x354|x355)>x356));

    if (t83 != 2) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x358 = INT32_MIN;
	int64_t x359 = -1LL;
	int8_t x360 = -3;
	static volatile int32_t t84 = -45864984;

    t84 = (x357+((x358|x359)>x360));

    if (t84 != 128) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x361 = 706000852U;
	int64_t x362 = -1LL;
	volatile uint16_t x363 = 31U;
	int32_t x364 = -11544012;
	volatile uint32_t t85 = 0U;

    t85 = (x361+((x362|x363)>x364));

    if (t85 != 706000853U) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x365 = INT64_MIN;
	int32_t x366 = INT32_MAX;
	static volatile int16_t x367 = INT16_MIN;
	int64_t t86 = 355LL;

    t86 = (x365+((x366|x367)>x368));

    if (t86 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int64_t x369 = INT64_MIN;
	int32_t x370 = 18;
	int16_t x371 = INT16_MIN;
	int8_t x372 = -1;

    t87 = (x369+((x370|x371)>x372));

    if (t87 != INT64_MIN) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x373 = INT16_MIN;
	int8_t x374 = 21;
	int8_t x376 = -1;
	volatile int32_t t88 = -793724004;

    t88 = (x373+((x374|x375)>x376));

    if (t88 != -32767) { NG(); } else { ; }
	
}

void f89(void) {
    	static int32_t x377 = INT32_MIN;
	uint16_t x378 = 107U;
	uint8_t x379 = UINT8_MAX;
	int8_t x380 = -1;
	int32_t t89 = 1168;

    t89 = (x377+((x378|x379)>x380));

    if (t89 != -2147483647) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x382 = INT32_MAX;
	int16_t x383 = -8561;
	int32_t x384 = INT32_MAX;
	int32_t t90 = -1;

    t90 = (x381+((x382|x383)>x384));

    if (t90 != -128) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x386 = 0;
	int8_t x388 = INT8_MIN;
	int32_t t91 = 0;

    t91 = (x385+((x386|x387)>x388));

    if (t91 != -2147483647) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x389 = -1LL;
	static int16_t x390 = 897;
	volatile int8_t x391 = INT8_MAX;
	int64_t t92 = -24361707612390LL;

    t92 = (x389+((x390|x391)>x392));

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x393 = -1;
	volatile uint16_t x395 = UINT16_MAX;
	volatile int32_t t93 = -4;

    t93 = (x393+((x394|x395)>x396));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x397 = -1547799LL;
	volatile uint16_t x398 = UINT16_MAX;
	int8_t x399 = INT8_MIN;
	uint32_t x400 = 12804U;

    t94 = (x397+((x398|x399)>x400));

    if (t94 != -1547798LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x401 = 8995204475LL;
	volatile uint64_t x403 = 377965350146773LLU;
	volatile uint16_t x404 = 5U;
	int64_t t95 = 530743564686LL;

    t95 = (x401+((x402|x403)>x404));

    if (t95 != 8995204476LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x405 = 31191LLU;
	volatile uint16_t x407 = 584U;
	int8_t x408 = INT8_MIN;

    t96 = (x405+((x406|x407)>x408));

    if (t96 != 31192LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x409 = INT16_MIN;
	volatile int64_t x411 = INT64_MIN;
	uint16_t x412 = 463U;
	int32_t t97 = 0;

    t97 = (x409+((x410|x411)>x412));

    if (t97 != -32768) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x413 = INT16_MIN;
	static volatile int64_t x415 = -58271LL;
	int64_t x416 = 949421191716346609LL;
	int32_t t98 = -385903;

    t98 = (x413+((x414|x415)>x416));

    if (t98 != -32767) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x417 = 55LLU;
	int64_t x419 = INT64_MIN;
	int16_t x420 = INT16_MIN;
	uint64_t t99 = 32493LLU;

    t99 = (x417+((x418|x419)>x420));

    if (t99 != 55LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x422 = INT64_MIN;
	int16_t x424 = 29;
	volatile int32_t t100 = -7255;

    t100 = (x421+((x422|x423)>x424));

    if (t100 != 177) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x425 = INT16_MIN;
	uint32_t x426 = 4U;
	int64_t x427 = -1LL;
	uint32_t x428 = UINT32_MAX;
	static int32_t t101 = -3;

    t101 = (x425+((x426|x427)>x428));

    if (t101 != -32768) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x430 = INT8_MIN;
	static int8_t x431 = -1;
	int64_t x432 = -1LL;
	volatile int32_t t102 = -1;

    t102 = (x429+((x430|x431)>x432));

    if (t102 != 255) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x433 = 1;
	static uint16_t x434 = 3655U;
	int32_t x435 = INT32_MIN;
	static int16_t x436 = 1;

    t103 = (x433+((x434|x435)>x436));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x437 = -1;
	static int32_t x438 = -1033;
	int8_t x439 = INT8_MAX;
	volatile uint64_t x440 = UINT64_MAX;
	volatile int32_t t104 = 6;

    t104 = (x437+((x438|x439)>x440));

    if (t104 != -1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int16_t x441 = INT16_MIN;
	int32_t x442 = INT32_MIN;
	static uint16_t x444 = 19883U;

    t105 = (x441+((x442|x443)>x444));

    if (t105 != -32767) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x445 = INT32_MAX;
	int16_t x446 = INT16_MAX;

    t106 = (x445+((x446|x447)>x448));

    if (t106 != INT32_MAX) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint16_t x450 = 138U;
	uint32_t x451 = UINT32_MAX;
	int8_t x452 = INT8_MIN;
	static int32_t t107 = 0;

    t107 = (x449+((x450|x451)>x452));

    if (t107 != -2147483647) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x453 = -1;
	int64_t x455 = INT64_MAX;
	int16_t x456 = INT16_MIN;

    t108 = (x453+((x454|x455)>x456));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x458 = -16;
	int16_t x459 = INT16_MAX;
	int64_t x460 = -827LL;
	volatile int64_t t109 = 20078060057867434LL;

    t109 = (x457+((x458|x459)>x460));

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint8_t x461 = 0U;
	int64_t x462 = -1LL;
	uint64_t x463 = 778513404236776LLU;
	static volatile uint8_t x464 = 6U;
	volatile int32_t t110 = 626054229;

    t110 = (x461+((x462|x463)>x464));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x469 = UINT32_MAX;
	uint16_t x470 = 0U;
	int32_t x471 = 1;
	uint32_t t111 = UINT32_MAX;

    t111 = (x469+((x470|x471)>x472));

    if (t111 != UINT32_MAX) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x473 = INT16_MIN;
	volatile int32_t x475 = INT32_MAX;
	int8_t x476 = INT8_MIN;
	int32_t t112 = -3;

    t112 = (x473+((x474|x475)>x476));

    if (t112 != -32767) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x477 = INT8_MIN;
	static int8_t x479 = -1;
	int32_t x480 = INT32_MIN;
	int32_t t113 = 220489;

    t113 = (x477+((x478|x479)>x480));

    if (t113 != -127) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x481 = INT64_MIN;
	int64_t x482 = 62635027497424LL;
	static volatile uint16_t x483 = UINT16_MAX;
	volatile int8_t x484 = -1;
	volatile int64_t t114 = -6218137831LL;

    t114 = (x481+((x482|x483)>x484));

    if (t114 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x485 = 1U;
	int32_t x486 = -1;
	volatile int64_t x487 = -27998379489LL;
	uint16_t x488 = UINT16_MAX;
	static int32_t t115 = 12;

    t115 = (x485+((x486|x487)>x488));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x489 = UINT32_MAX;
	uint16_t x490 = UINT16_MAX;
	int32_t x491 = INT32_MIN;

    t116 = (x489+((x490|x491)>x492));

    if (t116 != UINT32_MAX) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x493 = 3;
	uint64_t x494 = 489954LLU;
	static int8_t x495 = -1;
	volatile int32_t x496 = INT32_MIN;
	static volatile int32_t t117 = -13164;

    t117 = (x493+((x494|x495)>x496));

    if (t117 != 4) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x497 = 62LLU;
	volatile uint32_t x498 = 46810U;
	uint16_t x499 = UINT16_MAX;
	static int64_t x500 = 5LL;
	uint64_t t118 = 669064494372212869LLU;

    t118 = (x497+((x498|x499)>x500));

    if (t118 != 63LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint16_t x501 = UINT16_MAX;
	int16_t x502 = 8;
	static int32_t x503 = -2;
	volatile int64_t x504 = -9765271775LL;
	volatile int32_t t119 = 0;

    t119 = (x501+((x502|x503)>x504));

    if (t119 != 65536) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x506 = -1;
	static int8_t x508 = -1;
	volatile int32_t t120 = 0;

    t120 = (x505+((x506|x507)>x508));

    if (t120 != 198) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x509 = 692053124U;
	uint8_t x510 = UINT8_MAX;
	uint16_t x511 = UINT16_MAX;
	int32_t x512 = -37376059;
	uint32_t t121 = 247698U;

    t121 = (x509+((x510|x511)>x512));

    if (t121 != 692053125U) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x513 = UINT64_MAX;
	static int8_t x514 = 20;
	int8_t x515 = 0;
	static int32_t x516 = -1;
	volatile uint64_t t122 = 1LLU;

    t122 = (x513+((x514|x515)>x516));

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x518 = 191U;
	int32_t t123 = 756368713;

    t123 = (x517+((x518|x519)>x520));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x522 = INT32_MIN;
	uint32_t x523 = 0U;
	static uint16_t x524 = 8476U;
	int32_t t124 = -7945;

    t124 = (x521+((x522|x523)>x524));

    if (t124 != 65536) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x525 = INT32_MIN;
	int64_t x528 = -1LL;

    t125 = (x525+((x526|x527)>x528));

    if (t125 != INT32_MIN) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x529 = INT64_MIN;
	static int8_t x530 = INT8_MAX;
	volatile int16_t x531 = 1420;
	volatile int64_t t126 = INT64_MIN;

    t126 = (x529+((x530|x531)>x532));

    if (t126 != INT64_MIN) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x537 = INT32_MIN;
	int16_t x538 = INT16_MIN;
	int32_t x539 = 75;
	volatile int64_t x540 = INT64_MAX;
	static int32_t t127 = INT32_MIN;

    t127 = (x537+((x538|x539)>x540));

    if (t127 != INT32_MIN) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x541 = 110183691016108LLU;
	int64_t x542 = INT64_MAX;
	static volatile int8_t x543 = INT8_MAX;
	int16_t x544 = -1;
	uint64_t t128 = 18889345LLU;

    t128 = (x541+((x542|x543)>x544));

    if (t128 != 110183691016109LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x545 = 5;
	uint8_t x546 = 0U;
	int8_t x547 = INT8_MAX;
	int32_t x548 = INT32_MIN;
	static volatile int32_t t129 = 53;

    t129 = (x545+((x546|x547)>x548));

    if (t129 != 6) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x549 = INT64_MIN;
	int8_t x550 = -1;
	int8_t x551 = INT8_MAX;
	int16_t x552 = 116;

    t130 = (x549+((x550|x551)>x552));

    if (t130 != INT64_MIN) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x553 = 47;
	static uint32_t x554 = UINT32_MAX;
	int64_t x555 = INT64_MIN;
	uint64_t x556 = 39LLU;
	volatile int32_t t131 = 84;

    t131 = (x553+((x554|x555)>x556));

    if (t131 != 48) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint8_t x557 = UINT8_MAX;
	int64_t x558 = -35LL;
	volatile int32_t x560 = -1;
	volatile int32_t t132 = -63;

    t132 = (x557+((x558|x559)>x560));

    if (t132 != 255) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x561 = INT8_MIN;
	uint64_t x562 = 0LLU;
	int32_t x564 = 149832;
	volatile int32_t t133 = -16937;

    t133 = (x561+((x562|x563)>x564));

    if (t133 != -127) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x566 = -29;
	uint64_t x567 = UINT64_MAX;
	static volatile int64_t x568 = INT64_MAX;
	static int32_t t134 = -5;

    t134 = (x565+((x566|x567)>x568));

    if (t134 != 13) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x569 = 3U;
	uint8_t x570 = UINT8_MAX;
	static int8_t x571 = INT8_MIN;
	uint64_t x572 = UINT64_MAX;
	int32_t t135 = 340;

    t135 = (x569+((x570|x571)>x572));

    if (t135 != 3) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x573 = 7620U;
	volatile uint16_t x574 = UINT16_MAX;
	static int8_t x576 = INT8_MIN;
	volatile int32_t t136 = 2624572;

    t136 = (x573+((x574|x575)>x576));

    if (t136 != 7620) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint8_t x577 = UINT8_MAX;
	uint64_t x578 = 5184997984LLU;
	int64_t x579 = INT64_MIN;
	static int16_t x580 = INT16_MAX;

    t137 = (x577+((x578|x579)>x580));

    if (t137 != 256) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x581 = INT16_MAX;
	uint8_t x582 = UINT8_MAX;
	int64_t x583 = INT64_MIN;
	volatile uint64_t x584 = 4LLU;

    t138 = (x581+((x582|x583)>x584));

    if (t138 != 32768) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x585 = 31;
	uint32_t x586 = UINT32_MAX;
	int16_t x587 = 22;
	int32_t x588 = -1;
	int32_t t139 = 44;

    t139 = (x585+((x586|x587)>x588));

    if (t139 != 31) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint8_t x589 = 6U;
	uint64_t x590 = 67983961063708831LLU;
	int8_t x591 = 0;
	uint16_t x592 = 43U;

    t140 = (x589+((x590|x591)>x592));

    if (t140 != 7) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x593 = -173217;
	int8_t x594 = INT8_MAX;
	int64_t x595 = INT64_MIN;
	uint8_t x596 = 110U;
	static int32_t t141 = 661573598;

    t141 = (x593+((x594|x595)>x596));

    if (t141 != -173217) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint32_t x597 = UINT32_MAX;
	static int32_t x598 = -5;
	uint16_t x599 = 926U;
	static uint32_t x600 = 15U;
	static volatile uint32_t t142 = 139979720U;

    t142 = (x597+((x598|x599)>x600));

    if (t142 != 0U) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x601 = INT64_MIN;
	uint32_t x602 = UINT32_MAX;
	uint8_t x603 = 73U;
	static uint64_t x604 = 691019468321389986LLU;

    t143 = (x601+((x602|x603)>x604));

    if (t143 != INT64_MIN) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint16_t x605 = 5U;
	static int16_t x606 = -1;
	int64_t x607 = INT64_MIN;
	int8_t x608 = INT8_MIN;
	static int32_t t144 = 3417499;

    t144 = (x605+((x606|x607)>x608));

    if (t144 != 6) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int8_t x609 = INT8_MIN;
	int64_t x610 = 1439LL;
	int64_t x611 = INT64_MAX;

    t145 = (x609+((x610|x611)>x612));

    if (t145 != -127) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x614 = 158;
	uint16_t x616 = 197U;
	uint64_t t146 = UINT64_MAX;

    t146 = (x613+((x614|x615)>x616));

    if (t146 != UINT64_MAX) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x617 = INT8_MAX;
	int64_t x618 = INT64_MAX;
	volatile int32_t x620 = INT32_MIN;
	static volatile int32_t t147 = -373988802;

    t147 = (x617+((x618|x619)>x620));

    if (t147 != 128) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint32_t x621 = 520064U;
	int16_t x623 = -1;
	int32_t x624 = INT32_MIN;
	uint32_t t148 = 3173873U;

    t148 = (x621+((x622|x623)>x624));

    if (t148 != 520065U) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x625 = 710;
	uint32_t x626 = 36910U;
	volatile uint8_t x627 = UINT8_MAX;
	int16_t x628 = -4843;
	volatile int32_t t149 = 1004;

    t149 = (x625+((x626|x627)>x628));

    if (t149 != 710) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint8_t x629 = UINT8_MAX;
	int64_t x630 = INT64_MAX;
	static int8_t x632 = INT8_MAX;
	int32_t t150 = 560207;

    t150 = (x629+((x630|x631)>x632));

    if (t150 != 256) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int8_t x633 = INT8_MAX;
	volatile uint64_t x634 = UINT64_MAX;
	int16_t x635 = INT16_MIN;
	int32_t t151 = -245860337;

    t151 = (x633+((x634|x635)>x636));

    if (t151 != 128) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint32_t x638 = UINT32_MAX;
	uint64_t x639 = 4335922381154601037LLU;
	volatile uint64_t x640 = 3952695LLU;
	static int64_t t152 = 6232466LL;

    t152 = (x637+((x638|x639)>x640));

    if (t152 != -55926620194002078LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint8_t x641 = UINT8_MAX;
	int8_t x642 = INT8_MIN;
	volatile int8_t x644 = -1;
	volatile int32_t t153 = 1;

    t153 = (x641+((x642|x643)>x644));

    if (t153 != 255) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x645 = UINT64_MAX;
	volatile int32_t x646 = -7;
	int32_t x647 = 6408;
	int8_t x648 = -8;

    t154 = (x645+((x646|x647)>x648));

    if (t154 != 0LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x649 = INT8_MIN;
	volatile uint32_t x651 = 19124U;
	volatile int8_t x652 = -2;
	int32_t t155 = 2941;

    t155 = (x649+((x650|x651)>x652));

    if (t155 != -128) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x653 = -1;
	int8_t x654 = INT8_MIN;
	uint16_t x655 = 0U;
	int64_t x656 = INT64_MAX;
	volatile int32_t t156 = 403708;

    t156 = (x653+((x654|x655)>x656));

    if (t156 != -1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x657 = UINT64_MAX;
	uint64_t x658 = UINT64_MAX;
	uint16_t x659 = 7205U;
	int8_t x660 = -1;
	volatile uint64_t t157 = UINT64_MAX;

    t157 = (x657+((x658|x659)>x660));

    if (t157 != UINT64_MAX) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x666 = INT8_MIN;
	int64_t x668 = -305227012715655LL;
	volatile uint64_t t158 = 107041269640850LLU;

    t158 = (x665+((x666|x667)>x668));

    if (t158 != 256656564949591LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint8_t x669 = 29U;
	int16_t x670 = INT16_MAX;
	static int64_t x672 = 120LL;
	volatile int32_t t159 = 1;

    t159 = (x669+((x670|x671)>x672));

    if (t159 != 30) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint64_t x673 = 3LLU;
	int64_t x674 = INT64_MIN;
	volatile uint64_t x676 = 32909266391LLU;
	volatile uint64_t t160 = 5481342LLU;

    t160 = (x673+((x674|x675)>x676));

    if (t160 != 4LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x677 = 4577U;
	static volatile uint32_t x678 = 29U;
	volatile int16_t x679 = 230;
	uint32_t x680 = 205U;

    t161 = (x677+((x678|x679)>x680));

    if (t161 != 4578) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint8_t x681 = 29U;
	int8_t x682 = 32;
	static uint32_t x683 = 992447923U;
	static volatile int64_t x684 = INT64_MIN;

    t162 = (x681+((x682|x683)>x684));

    if (t162 != 30) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x685 = INT64_MIN;
	uint8_t x686 = UINT8_MAX;
	int8_t x687 = INT8_MAX;
	volatile int64_t t163 = INT64_MIN;

    t163 = (x685+((x686|x687)>x688));

    if (t163 != INT64_MIN) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x690 = -11004;
	int32_t x691 = INT32_MIN;
	int16_t x692 = -9691;
	volatile int32_t t164 = 1845;

    t164 = (x689+((x690|x691)>x692));

    if (t164 != -32768) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x693 = INT16_MAX;
	int16_t x694 = INT16_MIN;
	int16_t x695 = -3958;
	int32_t t165 = 259787;

    t165 = (x693+((x694|x695)>x696));

    if (t165 != 32767) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int8_t x697 = INT8_MIN;
	int8_t x698 = INT8_MIN;
	static uint64_t x699 = 5148154260188781LLU;
	uint64_t x700 = UINT64_MAX;
	volatile int32_t t166 = -327972;

    t166 = (x697+((x698|x699)>x700));

    if (t166 != -128) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x701 = INT16_MIN;
	int8_t x702 = INT8_MIN;
	int8_t x703 = -2;
	uint64_t x704 = 48565789422427LLU;
	int32_t t167 = 51836523;

    t167 = (x701+((x702|x703)>x704));

    if (t167 != -32767) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x705 = INT16_MIN;
	volatile int8_t x706 = -28;
	uint16_t x707 = 264U;
	volatile uint16_t x708 = UINT16_MAX;
	static volatile int32_t t168 = 12290;

    t168 = (x705+((x706|x707)>x708));

    if (t168 != -32768) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x709 = INT64_MIN;
	int32_t x710 = INT32_MAX;
	int32_t x711 = INT32_MAX;
	int32_t x712 = INT32_MIN;
	volatile int64_t t169 = -235433141847628906LL;

    t169 = (x709+((x710|x711)>x712));

    if (t169 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x713 = UINT8_MAX;
	int8_t x714 = INT8_MIN;
	static volatile int8_t x715 = INT8_MAX;
	uint64_t x716 = UINT64_MAX;
	volatile int32_t t170 = -26;

    t170 = (x713+((x714|x715)>x716));

    if (t170 != 255) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x717 = 0LLU;
	volatile int8_t x718 = INT8_MIN;
	uint32_t x719 = 632948028U;
	static int8_t x720 = -1;

    t171 = (x717+((x718|x719)>x720));

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint64_t x721 = UINT64_MAX;
	volatile int8_t x722 = -1;
	volatile uint8_t x724 = 4U;
	uint64_t t172 = UINT64_MAX;

    t172 = (x721+((x722|x723)>x724));

    if (t172 != UINT64_MAX) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x726 = INT8_MAX;
	static uint32_t x727 = 45U;
	int32_t x728 = 184428;
	static volatile int32_t t173 = 233;

    t173 = (x725+((x726|x727)>x728));

    if (t173 != -32768) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x729 = INT8_MIN;
	int32_t x730 = 0;
	static volatile uint32_t x732 = 63864402U;
	volatile int32_t t174 = -2608169;

    t174 = (x729+((x730|x731)>x732));

    if (t174 != -128) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile int64_t x734 = INT64_MIN;
	static int8_t x735 = INT8_MIN;
	static int32_t x736 = INT32_MIN;
	volatile int64_t t175 = -17LL;

    t175 = (x733+((x734|x735)>x736));

    if (t175 != 3222LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x737 = INT64_MIN;
	static volatile int8_t x738 = -1;
	int8_t x739 = -1;
	int16_t x740 = 1;
	int64_t t176 = INT64_MIN;

    t176 = (x737+((x738|x739)>x740));

    if (t176 != INT64_MIN) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x742 = UINT8_MAX;
	int64_t x743 = -1LL;
	int32_t x744 = INT32_MAX;
	volatile int32_t t177 = 27643;

    t177 = (x741+((x742|x743)>x744));

    if (t177 != -1) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x746 = INT64_MIN;
	static int64_t x747 = 16223519LL;
	int16_t x748 = INT16_MIN;
	int32_t t178 = -21;

    t178 = (x745+((x746|x747)>x748));

    if (t178 != 39) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile uint8_t x749 = 3U;
	uint64_t x751 = UINT64_MAX;
	uint64_t x752 = 2227231701587LLU;
	static volatile int32_t t179 = 6425541;

    t179 = (x749+((x750|x751)>x752));

    if (t179 != 4) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x753 = -1LL;
	volatile int32_t x754 = -1;
	int16_t x755 = -134;
	static int64_t x756 = 1000930319044LL;
	volatile int64_t t180 = -116276467262LL;

    t180 = (x753+((x754|x755)>x756));

    if (t180 != -1LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x760 = UINT64_MAX;
	volatile uint32_t t181 = 42252408U;

    t181 = (x757+((x758|x759)>x760));

    if (t181 != 107272613U) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x761 = UINT32_MAX;
	uint8_t x762 = 1U;
	static int64_t x763 = INT64_MIN;
	volatile uint32_t x764 = 2U;
	uint32_t t182 = UINT32_MAX;

    t182 = (x761+((x762|x763)>x764));

    if (t182 != UINT32_MAX) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x765 = INT8_MIN;
	int32_t x767 = INT32_MIN;
	static int8_t x768 = INT8_MIN;

    t183 = (x765+((x766|x767)>x768));

    if (t183 != -128) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x769 = INT16_MIN;
	volatile int8_t x770 = -1;
	int8_t x771 = INT8_MIN;
	static int32_t x772 = INT32_MAX;
	int32_t t184 = 48920;

    t184 = (x769+((x770|x771)>x772));

    if (t184 != -32768) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x773 = -1;
	int32_t x774 = 2292445;
	int64_t x776 = 1673628811LL;
	volatile int32_t t185 = -6869;

    t185 = (x773+((x774|x775)>x776));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x778 = INT64_MIN;
	volatile int16_t x779 = -2811;
	int32_t x780 = 1783529;

    t186 = (x777+((x778|x779)>x780));

    if (t186 != -128) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x781 = INT16_MAX;
	volatile uint64_t x782 = 4258376661420194755LLU;
	int16_t x783 = INT16_MIN;
	int32_t x784 = INT32_MIN;
	volatile int32_t t187 = 2714;

    t187 = (x781+((x782|x783)>x784));

    if (t187 != 32768) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x785 = -1094860811726868LL;
	int32_t x786 = 2871739;
	int64_t x787 = INT64_MAX;
	int32_t x788 = -1;
	static volatile int64_t t188 = 80101834251LL;

    t188 = (x785+((x786|x787)>x788));

    if (t188 != -1094860811726867LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x789 = -25299395658LL;
	static uint64_t x790 = 88669754LLU;
	volatile int8_t x791 = -1;
	static int64_t x792 = INT64_MIN;
	int64_t t189 = -3447498650726LL;

    t189 = (x789+((x790|x791)>x792));

    if (t189 != -25299395657LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x793 = INT32_MIN;
	static uint16_t x794 = 244U;
	volatile uint8_t x795 = UINT8_MAX;

    t190 = (x793+((x794|x795)>x796));

    if (t190 != INT32_MIN) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x797 = INT16_MIN;
	static int16_t x798 = INT16_MAX;
	int32_t x799 = INT32_MAX;
	volatile int8_t x800 = INT8_MIN;

    t191 = (x797+((x798|x799)>x800));

    if (t191 != -32767) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x801 = UINT16_MAX;
	volatile uint8_t x803 = UINT8_MAX;
	volatile int32_t t192 = -1;

    t192 = (x801+((x802|x803)>x804));

    if (t192 != 65536) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x805 = 4LL;
	uint32_t x806 = 210U;
	int64_t x807 = INT64_MIN;
	static int16_t x808 = 152;
	volatile int64_t t193 = -4835846LL;

    t193 = (x805+((x806|x807)>x808));

    if (t193 != 4LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x810 = 1649;
	volatile int32_t x811 = INT32_MIN;
	volatile int32_t t194 = 1860650;

    t194 = (x809+((x810|x811)>x812));

    if (t194 != -32768) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x814 = -109013;
	static volatile uint32_t x815 = 12U;
	volatile int32_t t195 = 165;

    t195 = (x813+((x814|x815)>x816));

    if (t195 != 13) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x817 = INT16_MAX;
	static int16_t x820 = INT16_MAX;
	volatile int32_t t196 = -795;

    t196 = (x817+((x818|x819)>x820));

    if (t196 != 32767) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x821 = INT64_MIN;
	volatile int16_t x822 = 4640;
	static volatile uint64_t x823 = 4112344608148975641LLU;
	static int8_t x824 = 2;
	volatile int64_t t197 = 359876LL;

    t197 = (x821+((x822|x823)>x824));

    if (t197 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x825 = -7704608;
	int8_t x827 = INT8_MIN;
	static volatile int16_t x828 = INT16_MAX;
	int32_t t198 = -131;

    t198 = (x825+((x826|x827)>x828));

    if (t198 != -7704608) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint32_t x829 = 22529806U;
	uint16_t x830 = UINT16_MAX;
	volatile uint32_t x831 = 1U;
	int64_t x832 = -1LL;

    t199 = (x829+((x830|x831)>x832));

    if (t199 != 22529807U) { NG(); } else { ; }
	
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

