
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

static int32_t x1 = -1;
static int16_t x2 = INT16_MIN;
int16_t x3 = -1;
volatile int32_t x12 = INT32_MIN;
volatile int64_t x17 = 158974884654LL;
int32_t x28 = -10545;
static volatile int32_t t6 = 3;
int16_t x50 = INT16_MIN;
int64_t x52 = -1LL;
int64_t t12 = -2304366723562LL;
static int64_t t13 = 14320759694376LL;
static volatile int16_t x59 = -1;
int32_t x60 = -1;
int16_t x66 = 967;
static int8_t x71 = 1;
volatile int64_t t19 = -458471481LL;
int64_t x83 = 811629602276208LL;
volatile int16_t x85 = INT16_MAX;
static uint16_t x88 = UINT16_MAX;
int32_t t21 = -79777;
int16_t x91 = INT16_MIN;
int32_t x99 = INT32_MAX;
static uint32_t t24 = 43412U;
volatile int64_t x105 = INT64_MIN;
int16_t x106 = -212;
int8_t x115 = -4;
int8_t x126 = 5;
int32_t x131 = 36868478;
static volatile int64_t x132 = INT64_MAX;
volatile int64_t t32 = -7554117768LL;
static int64_t x144 = -50297766LL;
static int16_t x154 = 667;
volatile int64_t x158 = INT64_MAX;
int32_t x159 = INT32_MAX;
static volatile int16_t x161 = INT16_MIN;
volatile uint64_t x169 = 895117987LLU;
uint64_t t41 = 1221251LLU;
int64_t x175 = INT64_MIN;
uint8_t x176 = UINT8_MAX;
uint16_t x177 = 8098U;
int16_t x180 = 5845;
static volatile int32_t t43 = -27;
volatile uint64_t t45 = 246108858791LLU;
int8_t x190 = INT8_MIN;
uint64_t x191 = 299626077694468739LLU;
int8_t x198 = INT8_MIN;
volatile uint64_t x205 = UINT64_MAX;
volatile uint16_t x207 = 336U;
volatile uint64_t t50 = 275770797775831621LLU;
volatile int32_t x212 = INT32_MIN;
uint64_t x213 = UINT64_MAX;
static volatile uint64_t t52 = 33127512924803897LLU;
volatile int32_t x229 = INT32_MIN;
volatile uint16_t x230 = 3319U;
uint8_t x232 = 5U;
static int32_t t56 = 47;
volatile int8_t x233 = INT8_MIN;
int64_t x234 = INT64_MIN;
static int16_t x236 = INT16_MIN;
static int64_t x239 = INT64_MIN;
static uint32_t t58 = 34801938U;
uint32_t x243 = 155032U;
volatile int64_t x244 = INT64_MAX;
int16_t x245 = INT16_MIN;
int8_t x248 = INT8_MIN;
int16_t x251 = 8;
static int16_t x256 = -90;
uint16_t x259 = 7U;
volatile int64_t x261 = INT64_MIN;
int8_t x263 = INT8_MIN;
static int64_t x266 = INT64_MAX;
uint64_t x272 = UINT64_MAX;
int8_t x273 = 0;
int64_t x280 = INT64_MAX;
static int64_t t68 = 1LL;
volatile uint8_t x290 = UINT8_MAX;
int16_t x291 = -1;
uint8_t x297 = 1U;
volatile int32_t t75 = 11;
static volatile int32_t t77 = -2540;
static volatile int64_t t79 = -134178LL;
volatile int16_t x331 = -243;
static volatile int64_t t83 = 32389430762416LL;
static uint64_t x344 = 1281LLU;
static uint64_t x346 = 66LLU;
uint8_t x350 = 1U;
int8_t x351 = -19;
volatile uint32_t x356 = 62503818U;
volatile int16_t x359 = INT16_MAX;
static int64_t x360 = -1LL;
static volatile int64_t t88 = 53460501350918818LL;
static volatile int64_t x368 = -535543247099LL;
int32_t x373 = INT32_MIN;
int16_t x375 = -1;
uint64_t t92 = 468LLU;
volatile uint64_t x380 = 4542LLU;
int16_t x381 = INT16_MIN;
uint8_t x383 = 7U;
volatile int32_t t94 = 360912;
int32_t x390 = -1;
int32_t t98 = 154;
int32_t x402 = INT32_MIN;
volatile int16_t x403 = 1299;
uint8_t x404 = UINT8_MAX;
int64_t x407 = -34108866853869LL;
uint16_t x408 = UINT16_MAX;
volatile int64_t t104 = -116014352LL;
int16_t x433 = 212;
static int32_t t107 = -19204;
uint32_t x441 = UINT32_MAX;
int64_t x442 = -1LL;
int64_t x448 = INT64_MAX;
int64_t t109 = -4701LL;
uint8_t x469 = 0U;
static int32_t x472 = -1;
uint64_t t115 = 326LLU;
uint8_t x477 = 21U;
int64_t x479 = INT64_MIN;
int16_t x482 = 3536;
uint32_t x483 = 0U;
int16_t x500 = INT16_MIN;
int32_t t121 = -7900637;
int32_t x502 = 123642;
uint8_t x509 = UINT8_MAX;
uint64_t x517 = 6603818515243921577LLU;
int32_t x522 = INT32_MIN;
int64_t t127 = -824916LL;
uint64_t x527 = 684LLU;
static volatile int32_t x538 = INT32_MAX;
static volatile uint16_t x540 = UINT16_MAX;
int32_t x541 = INT32_MAX;
uint32_t x542 = 1240577779U;
int8_t x543 = 3;
int32_t x546 = INT32_MIN;
int32_t x562 = INT32_MIN;
uint32_t x570 = 170397751U;
uint64_t x571 = 967239058317LLU;
int64_t t139 = INT64_MIN;
volatile uint32_t x575 = 486U;
static int8_t x579 = INT8_MIN;
int32_t x582 = -943;
static int8_t x585 = 1;
static int32_t x586 = -1;
volatile int32_t t143 = -209;
int32_t x600 = -1;
volatile int64_t t146 = -7764702LL;
int64_t x604 = -673446803163531LL;
uint32_t x611 = 45355U;
int64_t t148 = 8LL;
uint64_t x613 = 2855326295459152385LLU;
int8_t x619 = INT8_MIN;
int16_t x621 = -1;
int32_t t151 = 7519142;
static uint32_t t152 = 3U;
int32_t t154 = -4;
int8_t x639 = INT8_MAX;
volatile uint64_t x640 = 3LLU;
volatile uint64_t t155 = 13576711LLU;
uint32_t x650 = 453626271U;
int64_t x653 = INT64_MAX;
int64_t x659 = INT64_MIN;
int8_t x666 = 40;
static int8_t x668 = 14;
uint64_t x671 = UINT64_MAX;
static volatile uint16_t x675 = UINT16_MAX;
int8_t x679 = 1;
static int32_t x681 = -43;
static int32_t x682 = INT32_MIN;
uint32_t x690 = UINT32_MAX;
int64_t x697 = INT64_MIN;
int8_t x705 = 0;
int32_t x715 = INT32_MAX;
uint64_t x720 = 26544LLU;
int32_t x722 = INT32_MIN;
int64_t x725 = -204LL;
int16_t x726 = -6;
int64_t x733 = 3880418LL;
static int64_t x735 = INT64_MIN;
volatile int64_t t178 = 141374577934840206LL;
int8_t x739 = -26;
uint32_t x741 = UINT32_MAX;
int64_t x746 = -1803864984624LL;
static int32_t x747 = -1;
volatile int8_t x752 = INT8_MAX;
static volatile int32_t t184 = 92602947;
uint64_t x766 = 3LLU;
int32_t t186 = -12848;
uint32_t x774 = 795811657U;
int16_t x788 = -1;
static volatile int32_t t193 = 86808;
int8_t x801 = -1;
int16_t x803 = INT16_MIN;
static uint64_t t195 = 76575790LLU;
volatile int16_t x807 = INT16_MAX;
static uint16_t x808 = 22U;
int16_t x816 = 1535;


void f0(void) {
    	volatile uint64_t x4 = 8814LLU;
	uint64_t t0 = 97230LLU;

    t0 = (x1&((x2!=x3)/x4));

    if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MIN;
	int8_t x6 = -1;
	volatile int32_t x7 = INT32_MAX;
	int16_t x8 = INT16_MIN;
	static volatile int32_t t1 = -1;

    t1 = (x5&((x6!=x7)/x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = UINT64_MAX;
	int32_t x10 = INT32_MIN;
	int8_t x11 = 3;
	volatile uint64_t t2 = 1LLU;

    t2 = (x9&((x10!=x11)/x12));

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = -52;
	volatile int32_t x14 = INT32_MAX;
	uint8_t x15 = 14U;
	int64_t x16 = INT64_MIN;
	int64_t t3 = -279209LL;

    t3 = (x13&((x14!=x15)/x16));

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int8_t x18 = INT8_MIN;
	static volatile int16_t x19 = INT16_MIN;
	int64_t x20 = INT64_MAX;
	static volatile int64_t t4 = 132202684625084LL;

    t4 = (x17&((x18!=x19)/x20));

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = -1;
	static int16_t x22 = INT16_MIN;
	uint8_t x23 = UINT8_MAX;
	static int64_t x24 = INT64_MIN;
	int64_t t5 = 43602226769069LL;

    t5 = (x21&((x22!=x23)/x24));

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = INT32_MAX;
	volatile uint32_t x26 = 118U;
	static int8_t x27 = -1;

    t6 = (x25&((x26!=x27)/x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x29 = 743324599044976594LLU;
	volatile uint32_t x30 = 114903U;
	int32_t x31 = 28;
	int64_t x32 = INT64_MAX;
	uint64_t t7 = 17224797484237640LLU;

    t7 = (x29&((x30!=x31)/x32));

    if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = 13341;
	static volatile int64_t x34 = INT64_MIN;
	int16_t x35 = INT16_MIN;
	int32_t x36 = -348647;
	volatile int32_t t8 = 116;

    t8 = (x33&((x34!=x35)/x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x37 = INT64_MAX;
	int64_t x38 = INT64_MIN;
	uint64_t x39 = UINT64_MAX;
	volatile int16_t x40 = 130;
	static volatile int64_t t9 = -1102LL;

    t9 = (x37&((x38!=x39)/x40));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = INT32_MAX;
	volatile int16_t x42 = INT16_MAX;
	uint16_t x43 = 20455U;
	int8_t x44 = -1;
	static volatile int32_t t10 = INT32_MAX;

    t10 = (x41&((x42!=x43)/x44));

    if (t10 != INT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x45 = INT16_MIN;
	static volatile uint64_t x46 = 48528050674609LLU;
	static int8_t x47 = -5;
	volatile int64_t x48 = 527LL;
	int64_t t11 = -3360LL;

    t11 = (x45&((x46!=x47)/x48));

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int32_t x49 = INT32_MAX;
	uint8_t x51 = 7U;

    t12 = (x49&((x50!=x51)/x52));

    if (t12 != 2147483647LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = INT64_MIN;
	int16_t x54 = INT16_MIN;
	static int16_t x55 = INT16_MIN;
	int16_t x56 = INT16_MIN;

    t13 = (x53&((x54!=x55)/x56));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int32_t x57 = -1;
	static int32_t x58 = 39765517;
	int32_t t14 = 7119;

    t14 = (x57&((x58!=x59)/x60));

    if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = 48;
	uint8_t x62 = UINT8_MAX;
	static volatile int16_t x63 = -1;
	uint64_t x64 = 9828LLU;
	static uint64_t t15 = 2056784LLU;

    t15 = (x61&((x62!=x63)/x64));

    if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = INT32_MIN;
	int8_t x67 = 57;
	int64_t x68 = INT64_MIN;
	int64_t t16 = -268413547LL;

    t16 = (x65&((x66!=x67)/x68));

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile int64_t x69 = INT64_MIN;
	int64_t x70 = 4212LL;
	volatile uint32_t x72 = UINT32_MAX;
	volatile int64_t t17 = 4817031993LL;

    t17 = (x69&((x70!=x71)/x72));

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = INT16_MAX;
	int8_t x74 = -2;
	int32_t x75 = -1;
	int8_t x76 = INT8_MIN;
	volatile int32_t t18 = -976;

    t18 = (x73&((x74!=x75)/x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = INT16_MIN;
	int16_t x78 = INT16_MIN;
	int64_t x79 = INT64_MAX;
	static int64_t x80 = 2LL;

    t19 = (x77&((x78!=x79)/x80));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = 2;
	static int32_t x82 = INT32_MIN;
	int8_t x84 = INT8_MIN;
	int32_t t20 = 92081;

    t20 = (x81&((x82!=x83)/x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x86 = UINT64_MAX;
	static uint16_t x87 = 12U;

    t21 = (x85&((x86!=x87)/x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = INT64_MIN;
	int32_t x90 = INT32_MAX;
	int64_t x92 = INT64_MAX;
	int64_t t22 = -25442202306296590LL;

    t22 = (x89&((x90!=x91)/x92));

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint16_t x93 = UINT16_MAX;
	int64_t x94 = INT64_MIN;
	static volatile uint64_t x95 = UINT64_MAX;
	volatile int64_t x96 = -1455418578765719LL;
	volatile int64_t t23 = -345586210389840LL;

    t23 = (x93&((x94!=x95)/x96));

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x97 = 80354U;
	static uint64_t x98 = 1202357935791LLU;
	uint32_t x100 = 216796U;

    t24 = (x97&((x98!=x99)/x100));

    if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x101 = INT32_MAX;
	int16_t x102 = INT16_MIN;
	int8_t x103 = 63;
	volatile int8_t x104 = INT8_MIN;
	int32_t t25 = -557;

    t25 = (x101&((x102!=x103)/x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint8_t x107 = 0U;
	int32_t x108 = 114;
	int64_t t26 = -1035524147LL;

    t26 = (x105&((x106!=x107)/x108));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = INT32_MIN;
	volatile uint16_t x110 = 645U;
	volatile int16_t x111 = INT16_MIN;
	static uint32_t x112 = 2U;
	volatile uint32_t t27 = 1346U;

    t27 = (x109&((x110!=x111)/x112));

    if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x113 = UINT32_MAX;
	uint8_t x114 = UINT8_MAX;
	volatile int16_t x116 = INT16_MIN;
	volatile uint32_t t28 = 99U;

    t28 = (x113&((x114!=x115)/x116));

    if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = INT8_MIN;
	static volatile uint16_t x118 = 64U;
	uint64_t x119 = 1666740549LLU;
	int8_t x120 = INT8_MIN;
	volatile int32_t t29 = -4332047;

    t29 = (x117&((x118!=x119)/x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint8_t x121 = UINT8_MAX;
	static int64_t x122 = INT64_MAX;
	int64_t x123 = 35LL;
	volatile int8_t x124 = -3;
	int32_t t30 = 1;

    t30 = (x121&((x122!=x123)/x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = 6578725;
	volatile int32_t x127 = -1;
	static uint32_t x128 = 30U;
	static uint32_t t31 = 76169U;

    t31 = (x125&((x126!=x127)/x128));

    if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile int64_t x129 = INT64_MAX;
	uint16_t x130 = UINT16_MAX;

    t32 = (x129&((x130!=x131)/x132));

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x137 = -1;
	int8_t x138 = INT8_MIN;
	static volatile uint8_t x139 = 1U;
	volatile int32_t x140 = INT32_MIN;
	static volatile int32_t t33 = -158897;

    t33 = (x137&((x138!=x139)/x140));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint8_t x141 = 0U;
	int16_t x142 = 6875;
	static volatile int8_t x143 = INT8_MIN;
	int64_t t34 = 140296143115754401LL;

    t34 = (x141&((x142!=x143)/x144));

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int64_t x145 = INT64_MIN;
	uint64_t x146 = UINT64_MAX;
	uint8_t x147 = UINT8_MAX;
	uint16_t x148 = UINT16_MAX;
	static int64_t t35 = 42569484593127586LL;

    t35 = (x145&((x146!=x147)/x148));

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint32_t x149 = 14U;
	int16_t x150 = INT16_MAX;
	int32_t x151 = INT32_MIN;
	uint16_t x152 = 4U;
	uint32_t t36 = 1162406U;

    t36 = (x149&((x150!=x151)/x152));

    if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x153 = INT8_MIN;
	uint64_t x155 = UINT64_MAX;
	uint32_t x156 = 196939005U;
	uint32_t t37 = 31566329U;

    t37 = (x153&((x154!=x155)/x156));

    if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x157 = INT64_MIN;
	static int8_t x160 = -1;
	int64_t t38 = INT64_MIN;

    t38 = (x157&((x158!=x159)/x160));

    if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint32_t x162 = UINT32_MAX;
	volatile int64_t x163 = INT64_MIN;
	uint16_t x164 = 1356U;
	int32_t t39 = 5972;

    t39 = (x161&((x162!=x163)/x164));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x165 = 0U;
	volatile int32_t x166 = 14321715;
	int32_t x167 = -403916223;
	volatile uint32_t x168 = UINT32_MAX;
	volatile uint32_t t40 = 5815U;

    t40 = (x165&((x166!=x167)/x168));

    if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x170 = -131305389;
	volatile int32_t x171 = INT32_MIN;
	volatile uint16_t x172 = UINT16_MAX;

    t41 = (x169&((x170!=x171)/x172));

    if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x173 = -10;
	static int32_t x174 = 1799089;
	volatile int32_t t42 = 0;

    t42 = (x173&((x174!=x175)/x176));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x178 = UINT32_MAX;
	volatile int32_t x179 = INT32_MAX;

    t43 = (x177&((x178!=x179)/x180));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x181 = 115U;
	uint16_t x182 = 634U;
	static int32_t x183 = -1;
	uint8_t x184 = 12U;
	int32_t t44 = 13;

    t44 = (x181&((x182!=x183)/x184));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x185 = 29LLU;
	int8_t x186 = 0;
	uint16_t x187 = 30U;
	int32_t x188 = -1;

    t45 = (x185&((x186!=x187)/x188));

    if (t45 != 29LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x189 = INT16_MIN;
	int16_t x192 = -7;
	int32_t t46 = 1022141;

    t46 = (x189&((x190!=x191)/x192));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int64_t x193 = 22091393LL;
	int64_t x194 = INT64_MIN;
	static volatile int16_t x195 = -1;
	int32_t x196 = INT32_MIN;
	static int64_t t47 = -378767141339LL;

    t47 = (x193&((x194!=x195)/x196));

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint8_t x197 = 2U;
	volatile int64_t x199 = INT64_MIN;
	int32_t x200 = INT32_MAX;
	volatile int32_t t48 = -1453;

    t48 = (x197&((x198!=x199)/x200));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x201 = INT16_MIN;
	uint16_t x202 = UINT16_MAX;
	static volatile int16_t x203 = -28;
	int16_t x204 = -6;
	volatile int32_t t49 = -604705;

    t49 = (x201&((x202!=x203)/x204));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x206 = -1;
	uint16_t x208 = UINT16_MAX;

    t50 = (x205&((x206!=x207)/x208));

    if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int16_t x209 = 43;
	int8_t x210 = -1;
	uint32_t x211 = UINT32_MAX;
	volatile int32_t t51 = 212;

    t51 = (x209&((x210!=x211)/x212));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x214 = 104503LL;
	int8_t x215 = -4;
	static int8_t x216 = INT8_MIN;

    t52 = (x213&((x214!=x215)/x216));

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static int64_t x217 = INT64_MIN;
	int32_t x218 = INT32_MAX;
	static uint8_t x219 = 3U;
	volatile uint64_t x220 = UINT64_MAX;
	uint64_t t53 = 1580470350362962447LLU;

    t53 = (x217&((x218!=x219)/x220));

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x221 = INT16_MAX;
	volatile int32_t x222 = INT32_MIN;
	int32_t x223 = -1;
	int64_t x224 = -1LL;
	volatile int64_t t54 = 3LL;

    t54 = (x221&((x222!=x223)/x224));

    if (t54 != 32767LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x225 = -1;
	uint8_t x226 = 4U;
	static uint32_t x227 = UINT32_MAX;
	static int8_t x228 = INT8_MAX;
	static int32_t t55 = -233679450;

    t55 = (x225&((x226!=x227)/x228));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x231 = 864506LLU;

    t56 = (x229&((x230!=x231)/x232));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x235 = 1;
	int32_t t57 = -146371071;

    t57 = (x233&((x234!=x235)/x236));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x237 = INT16_MAX;
	int32_t x238 = -1;
	uint32_t x240 = 62020U;

    t58 = (x237&((x238!=x239)/x240));

    if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int8_t x241 = -34;
	int64_t x242 = 70137598510958LL;
	volatile int64_t t59 = 98LL;

    t59 = (x241&((x242!=x243)/x244));

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x246 = INT8_MAX;
	volatile uint64_t x247 = 809569554620560LLU;
	volatile int32_t t60 = 5680825;

    t60 = (x245&((x246!=x247)/x248));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x249 = UINT64_MAX;
	static int16_t x250 = INT16_MIN;
	int32_t x252 = -23656;
	uint64_t t61 = 139300165011702LLU;

    t61 = (x249&((x250!=x251)/x252));

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x253 = INT16_MIN;
	uint8_t x254 = 11U;
	uint64_t x255 = 15827354498694664LLU;
	int32_t t62 = -29035959;

    t62 = (x253&((x254!=x255)/x256));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x257 = INT64_MIN;
	uint8_t x258 = 4U;
	int16_t x260 = INT16_MIN;
	volatile int64_t t63 = 1108991721441207LL;

    t63 = (x257&((x258!=x259)/x260));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x262 = INT32_MIN;
	int32_t x264 = -1;
	int64_t t64 = INT64_MIN;

    t64 = (x261&((x262!=x263)/x264));

    if (t64 != INT64_MIN) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint16_t x265 = UINT16_MAX;
	int32_t x267 = -340924;
	uint8_t x268 = 38U;
	volatile int32_t t65 = -2597041;

    t65 = (x265&((x266!=x267)/x268));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x269 = UINT64_MAX;
	int16_t x270 = INT16_MAX;
	static int16_t x271 = INT16_MAX;
	static uint64_t t66 = 659274736980590494LLU;

    t66 = (x269&((x270!=x271)/x272));

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x274 = -28;
	int16_t x275 = -3;
	static int16_t x276 = INT16_MIN;
	volatile int32_t t67 = 1059564015;

    t67 = (x273&((x274!=x275)/x276));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x277 = INT16_MAX;
	int16_t x278 = -1;
	int64_t x279 = INT64_MAX;

    t68 = (x277&((x278!=x279)/x280));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x281 = INT32_MIN;
	static uint8_t x282 = 24U;
	volatile uint16_t x283 = 1U;
	uint64_t x284 = 12LLU;
	volatile uint64_t t69 = 114930039081082471LLU;

    t69 = (x281&((x282!=x283)/x284));

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile uint16_t x285 = 0U;
	uint32_t x286 = 233U;
	uint64_t x287 = 4516LLU;
	int32_t x288 = INT32_MIN;
	int32_t t70 = -7;

    t70 = (x285&((x286!=x287)/x288));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile int16_t x289 = -1;
	static int64_t x292 = INT64_MIN;
	static int64_t t71 = 4890459694LL;

    t71 = (x289&((x290!=x291)/x292));

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x293 = 2U;
	static int8_t x294 = -1;
	int16_t x295 = INT16_MAX;
	int64_t x296 = 21727LL;
	int64_t t72 = -2487LL;

    t72 = (x293&((x294!=x295)/x296));

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x298 = INT8_MIN;
	int64_t x299 = INT64_MIN;
	int64_t x300 = INT64_MIN;
	int64_t t73 = 407LL;

    t73 = (x297&((x298!=x299)/x300));

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x301 = INT32_MAX;
	static uint32_t x302 = UINT32_MAX;
	int16_t x303 = -819;
	static int8_t x304 = INT8_MIN;
	int32_t t74 = 69862994;

    t74 = (x301&((x302!=x303)/x304));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x305 = INT32_MAX;
	int32_t x306 = -1;
	volatile uint16_t x307 = UINT16_MAX;
	volatile uint16_t x308 = 5011U;

    t75 = (x305&((x306!=x307)/x308));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x309 = -28;
	int8_t x310 = -1;
	uint8_t x311 = 21U;
	volatile int8_t x312 = INT8_MIN;
	int32_t t76 = -2;

    t76 = (x309&((x310!=x311)/x312));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x313 = 1U;
	uint32_t x314 = UINT32_MAX;
	uint16_t x315 = 18068U;
	int16_t x316 = INT16_MAX;

    t77 = (x313&((x314!=x315)/x316));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint16_t x317 = 14U;
	int32_t x318 = INT32_MIN;
	int32_t x319 = INT32_MIN;
	volatile uint64_t x320 = 192LLU;
	uint64_t t78 = 2578311696LLU;

    t78 = (x317&((x318!=x319)/x320));

    if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x321 = 29;
	volatile int16_t x322 = INT16_MIN;
	int8_t x323 = INT8_MIN;
	int64_t x324 = -4LL;

    t79 = (x321&((x322!=x323)/x324));

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x325 = 534306190894826030LL;
	static int16_t x326 = -1;
	static int16_t x327 = 242;
	static int64_t x328 = INT64_MIN;
	static int64_t t80 = 56LL;

    t80 = (x325&((x326!=x327)/x328));

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x329 = INT32_MIN;
	int64_t x330 = -3213550LL;
	volatile int32_t x332 = 653636034;
	static int32_t t81 = -2430;

    t81 = (x329&((x330!=x331)/x332));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x333 = INT32_MAX;
	int16_t x334 = INT16_MIN;
	static uint16_t x335 = 4172U;
	uint16_t x336 = 109U;
	static volatile int32_t t82 = -25034;

    t82 = (x333&((x334!=x335)/x336));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x337 = -1LL;
	int64_t x338 = INT64_MIN;
	static uint16_t x339 = 11543U;
	uint8_t x340 = UINT8_MAX;

    t83 = (x337&((x338!=x339)/x340));

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x341 = 670LLU;
	int8_t x342 = INT8_MIN;
	int32_t x343 = INT32_MIN;
	volatile uint64_t t84 = 12LLU;

    t84 = (x341&((x342!=x343)/x344));

    if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x345 = INT8_MIN;
	int64_t x347 = INT64_MIN;
	int32_t x348 = INT32_MAX;
	static volatile int32_t t85 = 40417894;

    t85 = (x345&((x346!=x347)/x348));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x349 = 489U;
	uint16_t x352 = 82U;
	uint32_t t86 = 297U;

    t86 = (x349&((x350!=x351)/x352));

    if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x353 = -1;
	uint32_t x354 = 24273U;
	int64_t x355 = INT64_MIN;
	static volatile uint32_t t87 = 3562277U;

    t87 = (x353&((x354!=x355)/x356));

    if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile uint16_t x357 = 8129U;
	int64_t x358 = INT64_MAX;

    t88 = (x357&((x358!=x359)/x360));

    if (t88 != 8129LL) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int16_t x361 = INT16_MIN;
	int32_t x362 = INT32_MAX;
	uint64_t x363 = 2625080968LLU;
	static uint32_t x364 = UINT32_MAX;
	static uint32_t t89 = 91758U;

    t89 = (x361&((x362!=x363)/x364));

    if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x365 = -44025;
	static int8_t x366 = -1;
	uint8_t x367 = UINT8_MAX;
	volatile int64_t t90 = -99951175531694299LL;

    t90 = (x365&((x366!=x367)/x368));

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x369 = INT8_MIN;
	int8_t x370 = INT8_MIN;
	int64_t x371 = -1LL;
	int32_t x372 = -71837445;
	int32_t t91 = 5518127;

    t91 = (x369&((x370!=x371)/x372));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile int64_t x374 = INT64_MAX;
	uint64_t x376 = 258201393463LLU;

    t92 = (x373&((x374!=x375)/x376));

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x377 = UINT64_MAX;
	uint8_t x378 = 1U;
	int32_t x379 = INT32_MIN;
	volatile uint64_t t93 = 127LLU;

    t93 = (x377&((x378!=x379)/x380));

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x382 = 2U;
	uint16_t x384 = 15U;

    t94 = (x381&((x382!=x383)/x384));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x385 = 384U;
	static volatile int64_t x386 = INT64_MAX;
	static uint32_t x387 = UINT32_MAX;
	int64_t x388 = -1LL;
	volatile int64_t t95 = 233856281427LL;

    t95 = (x385&((x386!=x387)/x388));

    if (t95 != 384LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x389 = INT8_MIN;
	int32_t x391 = -4024075;
	int16_t x392 = -40;
	static volatile int32_t t96 = 62472244;

    t96 = (x389&((x390!=x391)/x392));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x393 = 1;
	int8_t x394 = INT8_MIN;
	static int16_t x395 = -1;
	uint32_t x396 = 1327321666U;
	volatile uint32_t t97 = 8U;

    t97 = (x393&((x394!=x395)/x396));

    if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x397 = 294140;
	volatile uint16_t x398 = 121U;
	int16_t x399 = INT16_MAX;
	int16_t x400 = 22;

    t98 = (x397&((x398!=x399)/x400));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x401 = 0U;
	int32_t t99 = 1;

    t99 = (x401&((x402!=x403)/x404));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x405 = INT64_MAX;
	int32_t x406 = 197;
	static int64_t t100 = -95204963072228LL;

    t100 = (x405&((x406!=x407)/x408));

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x409 = 19;
	static int8_t x410 = INT8_MAX;
	int16_t x411 = INT16_MIN;
	static int8_t x412 = INT8_MAX;
	static int32_t t101 = 953;

    t101 = (x409&((x410!=x411)/x412));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x413 = UINT8_MAX;
	int32_t x414 = INT32_MIN;
	uint64_t x415 = 1823LLU;
	uint8_t x416 = 3U;
	static int32_t t102 = 71029153;

    t102 = (x413&((x414!=x415)/x416));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x421 = INT8_MIN;
	int8_t x422 = INT8_MIN;
	uint8_t x423 = 15U;
	uint16_t x424 = 1U;
	volatile int32_t t103 = -3340;

    t103 = (x421&((x422!=x423)/x424));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x425 = INT8_MAX;
	uint16_t x426 = 1006U;
	uint64_t x427 = UINT64_MAX;
	int64_t x428 = 63253211818LL;

    t104 = (x425&((x426!=x427)/x428));

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static int32_t x429 = INT32_MAX;
	int8_t x430 = INT8_MAX;
	uint32_t x431 = 430U;
	static uint16_t x432 = 24U;
	static int32_t t105 = 128929;

    t105 = (x429&((x430!=x431)/x432));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x434 = INT32_MIN;
	static int16_t x435 = 12;
	uint64_t x436 = UINT64_MAX;
	uint64_t t106 = 187765LLU;

    t106 = (x433&((x434!=x435)/x436));

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x437 = INT8_MAX;
	int32_t x438 = INT32_MIN;
	uint8_t x439 = 0U;
	int16_t x440 = 167;

    t107 = (x437&((x438!=x439)/x440));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint16_t x443 = UINT16_MAX;
	uint16_t x444 = 3U;
	static volatile uint32_t t108 = 25U;

    t108 = (x441&((x442!=x443)/x444));

    if (t108 != 0U) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x445 = UINT8_MAX;
	static int8_t x446 = INT8_MIN;
	int16_t x447 = INT16_MIN;

    t109 = (x445&((x446!=x447)/x448));

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x449 = INT32_MAX;
	static uint8_t x450 = UINT8_MAX;
	uint64_t x451 = 109763463962766LLU;
	int32_t x452 = INT32_MIN;
	volatile int32_t t110 = -2112966;

    t110 = (x449&((x450!=x451)/x452));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x457 = -1;
	int8_t x458 = INT8_MIN;
	volatile int16_t x459 = INT16_MAX;
	uint32_t x460 = 259U;
	uint32_t t111 = 241U;

    t111 = (x457&((x458!=x459)/x460));

    if (t111 != 0U) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint64_t x461 = UINT64_MAX;
	static uint16_t x462 = 13U;
	int32_t x463 = INT32_MIN;
	uint32_t x464 = 3028U;
	volatile uint64_t t112 = 2734LLU;

    t112 = (x461&((x462!=x463)/x464));

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint8_t x465 = UINT8_MAX;
	static uint32_t x466 = 181563U;
	uint8_t x467 = UINT8_MAX;
	int32_t x468 = INT32_MIN;
	int32_t t113 = -1600800;

    t113 = (x465&((x466!=x467)/x468));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x470 = -1;
	volatile int16_t x471 = INT16_MAX;
	volatile int32_t t114 = -86981434;

    t114 = (x469&((x470!=x471)/x472));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint32_t x473 = 0U;
	int32_t x474 = 1356;
	uint8_t x475 = 2U;
	static volatile uint64_t x476 = UINT64_MAX;

    t115 = (x473&((x474!=x475)/x476));

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x478 = INT8_MIN;
	static uint32_t x480 = 152U;
	volatile uint32_t t116 = 592736U;

    t116 = (x477&((x478!=x479)/x480));

    if (t116 != 0U) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x481 = -1;
	static volatile uint16_t x484 = 624U;
	volatile int32_t t117 = -2;

    t117 = (x481&((x482!=x483)/x484));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x485 = INT64_MAX;
	int16_t x486 = INT16_MAX;
	static volatile int32_t x487 = INT32_MIN;
	volatile int16_t x488 = INT16_MIN;
	volatile int64_t t118 = -1324LL;

    t118 = (x485&((x486!=x487)/x488));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x489 = INT8_MIN;
	volatile int32_t x490 = INT32_MAX;
	int32_t x491 = -1;
	volatile int64_t x492 = 4209402301210056LL;
	int64_t t119 = 30400512271286LL;

    t119 = (x489&((x490!=x491)/x492));

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x493 = 7183991U;
	static int8_t x494 = 4;
	uint8_t x495 = UINT8_MAX;
	volatile int8_t x496 = INT8_MIN;
	uint32_t t120 = 8937625U;

    t120 = (x493&((x494!=x495)/x496));

    if (t120 != 0U) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x497 = 0;
	static int64_t x498 = INT64_MIN;
	int64_t x499 = -1LL;

    t121 = (x497&((x498!=x499)/x500));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x501 = -76;
	uint16_t x503 = 15789U;
	static int8_t x504 = -1;
	static int32_t t122 = -220;

    t122 = (x501&((x502!=x503)/x504));

    if (t122 != -76) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x505 = -97LL;
	static int16_t x506 = INT16_MIN;
	int8_t x507 = INT8_MIN;
	int64_t x508 = INT64_MIN;
	int64_t t123 = 1630847575789688LL;

    t123 = (x505&((x506!=x507)/x508));

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int64_t x510 = INT64_MAX;
	int8_t x511 = 6;
	int32_t x512 = -596975;
	volatile int32_t t124 = 48225608;

    t124 = (x509&((x510!=x511)/x512));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x513 = INT16_MAX;
	int32_t x514 = -1324;
	static uint16_t x515 = 15817U;
	int16_t x516 = INT16_MIN;
	volatile int32_t t125 = 1;

    t125 = (x513&((x514!=x515)/x516));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x518 = UINT64_MAX;
	uint8_t x519 = 74U;
	uint16_t x520 = UINT16_MAX;
	uint64_t t126 = 1LLU;

    t126 = (x517&((x518!=x519)/x520));

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x521 = INT64_MIN;
	uint8_t x523 = 1U;
	int64_t x524 = INT64_MIN;

    t127 = (x521&((x522!=x523)/x524));

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x525 = UINT32_MAX;
	volatile uint32_t x526 = 2041U;
	volatile uint8_t x528 = 113U;
	uint32_t t128 = 464443028U;

    t128 = (x525&((x526!=x527)/x528));

    if (t128 != 0U) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x529 = 125;
	int64_t x530 = INT64_MAX;
	int8_t x531 = INT8_MAX;
	static volatile int8_t x532 = INT8_MIN;
	int32_t t129 = 919;

    t129 = (x529&((x530!=x531)/x532));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x533 = 987337U;
	volatile uint32_t x534 = 148711127U;
	static uint64_t x535 = UINT64_MAX;
	int16_t x536 = -973;
	volatile uint32_t t130 = 21792U;

    t130 = (x533&((x534!=x535)/x536));

    if (t130 != 0U) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x537 = -75073135216LL;
	int16_t x539 = -1746;
	int64_t t131 = 868681553396LL;

    t131 = (x537&((x538!=x539)/x540));

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x544 = INT64_MAX;
	volatile int64_t t132 = -2133869471842924LL;

    t132 = (x541&((x542!=x543)/x544));

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x545 = 0;
	uint16_t x547 = 376U;
	uint64_t x548 = 479820436472860LLU;
	static volatile uint64_t t133 = 449673154878311575LLU;

    t133 = (x545&((x546!=x547)/x548));

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x549 = INT32_MIN;
	uint8_t x550 = 4U;
	int64_t x551 = INT64_MAX;
	uint32_t x552 = UINT32_MAX;
	volatile uint32_t t134 = 23426U;

    t134 = (x549&((x550!=x551)/x552));

    if (t134 != 0U) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x553 = -2410LL;
	uint16_t x554 = 9U;
	uint16_t x555 = 34U;
	int64_t x556 = INT64_MIN;
	volatile int64_t t135 = -12LL;

    t135 = (x553&((x554!=x555)/x556));

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x557 = -1LL;
	static int32_t x558 = 450;
	volatile int8_t x559 = INT8_MAX;
	int32_t x560 = INT32_MIN;
	volatile int64_t t136 = -928245094423393LL;

    t136 = (x557&((x558!=x559)/x560));

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x561 = INT32_MIN;
	uint8_t x563 = 26U;
	int16_t x564 = INT16_MIN;
	volatile int32_t t137 = 15648037;

    t137 = (x561&((x562!=x563)/x564));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x565 = 2176217857020LL;
	int32_t x566 = INT32_MIN;
	uint64_t x567 = 3404687948LLU;
	int16_t x568 = INT16_MIN;
	int64_t t138 = -62460LL;

    t138 = (x565&((x566!=x567)/x568));

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x569 = INT64_MIN;
	int32_t x572 = -1;

    t139 = (x569&((x570!=x571)/x572));

    if (t139 != INT64_MIN) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x573 = 805640357637LL;
	static uint64_t x574 = UINT64_MAX;
	int16_t x576 = INT16_MIN;
	int64_t t140 = -2143680768947724LL;

    t140 = (x573&((x574!=x575)/x576));

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x577 = INT8_MIN;
	static int16_t x578 = INT16_MIN;
	int16_t x580 = -1;
	volatile int32_t t141 = 727874;

    t141 = (x577&((x578!=x579)/x580));

    if (t141 != -128) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint16_t x581 = 4627U;
	uint64_t x583 = UINT64_MAX;
	volatile int8_t x584 = INT8_MAX;
	int32_t t142 = -20162;

    t142 = (x581&((x582!=x583)/x584));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x587 = 153652LLU;
	int8_t x588 = INT8_MIN;

    t143 = (x585&((x586!=x587)/x588));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile int64_t x589 = INT64_MIN;
	static int64_t x590 = -1LL;
	uint16_t x591 = 75U;
	int16_t x592 = INT16_MIN;
	volatile int64_t t144 = 1LL;

    t144 = (x589&((x590!=x591)/x592));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x593 = INT8_MIN;
	volatile int16_t x594 = -1;
	uint8_t x595 = UINT8_MAX;
	volatile uint64_t x596 = 755673389984709LLU;
	volatile uint64_t t145 = 42207LLU;

    t145 = (x593&((x594!=x595)/x596));

    if (t145 != 0LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x597 = 118LL;
	int32_t x598 = 590473225;
	int32_t x599 = -112436292;

    t146 = (x597&((x598!=x599)/x600));

    if (t146 != 118LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x601 = 54U;
	static int64_t x602 = -2110177346202482LL;
	uint8_t x603 = UINT8_MAX;
	static int64_t t147 = -20611464515LL;

    t147 = (x601&((x602!=x603)/x604));

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x609 = -1LL;
	static int16_t x610 = -1;
	int16_t x612 = INT16_MIN;

    t148 = (x609&((x610!=x611)/x612));

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x614 = INT32_MAX;
	uint16_t x615 = 106U;
	int64_t x616 = -14432851822LL;
	volatile uint64_t t149 = 1LLU;

    t149 = (x613&((x614!=x615)/x616));

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x617 = -1;
	uint32_t x618 = 287U;
	static uint32_t x620 = 73U;
	uint32_t t150 = 612478U;

    t150 = (x617&((x618!=x619)/x620));

    if (t150 != 0U) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int32_t x622 = INT32_MIN;
	volatile int64_t x623 = 3460886522020070LL;
	uint8_t x624 = 5U;

    t151 = (x621&((x622!=x623)/x624));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint32_t x625 = 14U;
	static uint64_t x626 = 1LLU;
	volatile int16_t x627 = INT16_MAX;
	int8_t x628 = INT8_MAX;

    t152 = (x625&((x626!=x627)/x628));

    if (t152 != 0U) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x629 = INT8_MIN;
	int64_t x630 = 525692425LL;
	static uint8_t x631 = 19U;
	uint8_t x632 = UINT8_MAX;
	int32_t t153 = 1789;

    t153 = (x629&((x630!=x631)/x632));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int32_t x633 = INT32_MAX;
	uint16_t x634 = 962U;
	int64_t x635 = -1342631947898027LL;
	int32_t x636 = INT32_MAX;

    t154 = (x633&((x634!=x635)/x636));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x637 = INT32_MIN;
	static uint16_t x638 = 1U;

    t155 = (x637&((x638!=x639)/x640));

    if (t155 != 0LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x641 = 879;
	int64_t x642 = INT64_MAX;
	int32_t x643 = 66329;
	volatile int64_t x644 = INT64_MIN;
	volatile int64_t t156 = -707897LL;

    t156 = (x641&((x642!=x643)/x644));

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x645 = 29981444191507LLU;
	int32_t x646 = INT32_MIN;
	static int32_t x647 = INT32_MIN;
	uint8_t x648 = 100U;
	uint64_t t157 = 801279688803354396LLU;

    t157 = (x645&((x646!=x647)/x648));

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x649 = 63U;
	int64_t x651 = INT64_MIN;
	uint32_t x652 = 1072941604U;
	volatile uint32_t t158 = 29852U;

    t158 = (x649&((x650!=x651)/x652));

    if (t158 != 0U) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x654 = INT16_MIN;
	volatile int32_t x655 = INT32_MAX;
	int8_t x656 = INT8_MAX;
	int64_t t159 = -139443LL;

    t159 = (x653&((x654!=x655)/x656));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x657 = -1;
	static int64_t x658 = INT64_MAX;
	int16_t x660 = INT16_MIN;
	int32_t t160 = -3383;

    t160 = (x657&((x658!=x659)/x660));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x661 = -53968882;
	uint8_t x662 = UINT8_MAX;
	uint8_t x663 = 19U;
	int32_t x664 = INT32_MIN;
	volatile int32_t t161 = 0;

    t161 = (x661&((x662!=x663)/x664));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int64_t x665 = INT64_MIN;
	uint8_t x667 = 81U;
	volatile int64_t t162 = 1LL;

    t162 = (x665&((x666!=x667)/x668));

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x669 = 606678U;
	int8_t x670 = 47;
	uint32_t x672 = 56U;
	uint32_t t163 = 577207U;

    t163 = (x669&((x670!=x671)/x672));

    if (t163 != 0U) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x673 = INT64_MAX;
	volatile uint32_t x674 = 2005832U;
	int16_t x676 = -649;
	volatile int64_t t164 = -12035868LL;

    t164 = (x673&((x674!=x675)/x676));

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x677 = 235;
	int16_t x678 = INT16_MAX;
	int64_t x680 = INT64_MIN;
	volatile int64_t t165 = -52159856LL;

    t165 = (x677&((x678!=x679)/x680));

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x683 = INT8_MIN;
	static int16_t x684 = -6;
	int32_t t166 = 757;

    t166 = (x681&((x682!=x683)/x684));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x685 = 2;
	volatile int8_t x686 = INT8_MIN;
	int64_t x687 = INT64_MAX;
	uint32_t x688 = 251692979U;
	volatile uint32_t t167 = 243556621U;

    t167 = (x685&((x686!=x687)/x688));

    if (t167 != 0U) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x689 = 454636215619723602LLU;
	static uint64_t x691 = UINT64_MAX;
	volatile uint64_t x692 = 281312841392877LLU;
	uint64_t t168 = 1712897LLU;

    t168 = (x689&((x690!=x691)/x692));

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t x693 = 150490114;
	int32_t x694 = 2912;
	int8_t x695 = -1;
	int64_t x696 = INT64_MIN;
	volatile int64_t t169 = -1569644406257438LL;

    t169 = (x693&((x694!=x695)/x696));

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x698 = INT32_MAX;
	volatile uint16_t x699 = 293U;
	uint8_t x700 = 51U;
	volatile int64_t t170 = -229LL;

    t170 = (x697&((x698!=x699)/x700));

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x701 = 5954U;
	volatile int8_t x702 = -1;
	uint16_t x703 = 12U;
	int16_t x704 = -104;
	static uint32_t t171 = 11U;

    t171 = (x701&((x702!=x703)/x704));

    if (t171 != 0U) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x706 = -1;
	static int32_t x707 = INT32_MIN;
	int8_t x708 = 1;
	int32_t t172 = 1905;

    t172 = (x705&((x706!=x707)/x708));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x713 = INT16_MAX;
	uint16_t x714 = UINT16_MAX;
	int16_t x716 = -1;
	static volatile int32_t t173 = 157202693;

    t173 = (x713&((x714!=x715)/x716));

    if (t173 != 32767) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x717 = INT32_MIN;
	int32_t x718 = INT32_MIN;
	int16_t x719 = INT16_MIN;
	uint64_t t174 = 723826806755426740LLU;

    t174 = (x717&((x718!=x719)/x720));

    if (t174 != 0LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x721 = UINT64_MAX;
	uint64_t x723 = 107984507821LLU;
	volatile int8_t x724 = INT8_MIN;
	uint64_t t175 = 1018LLU;

    t175 = (x721&((x722!=x723)/x724));

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x727 = INT64_MIN;
	uint8_t x728 = 58U;
	volatile int64_t t176 = -144780LL;

    t176 = (x725&((x726!=x727)/x728));

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x729 = -408;
	static int64_t x730 = INT64_MIN;
	static uint8_t x731 = UINT8_MAX;
	int16_t x732 = INT16_MIN;
	volatile int32_t t177 = 3319306;

    t177 = (x729&((x730!=x731)/x732));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x734 = -1;
	volatile int16_t x736 = INT16_MIN;

    t178 = (x733&((x734!=x735)/x736));

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x737 = 197375;
	static volatile int32_t x738 = INT32_MIN;
	int64_t x740 = INT64_MAX;
	volatile int64_t t179 = -33283283359LL;

    t179 = (x737&((x738!=x739)/x740));

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x742 = INT8_MIN;
	uint16_t x743 = 35U;
	uint64_t x744 = 2736811LLU;
	volatile uint64_t t180 = 1782307023LLU;

    t180 = (x741&((x742!=x743)/x744));

    if (t180 != 0LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x745 = INT8_MAX;
	int8_t x748 = -1;
	static volatile int32_t t181 = -1;

    t181 = (x745&((x746!=x747)/x748));

    if (t181 != 127) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile int32_t x749 = 0;
	uint16_t x750 = 16269U;
	static uint8_t x751 = UINT8_MAX;
	volatile int32_t t182 = 3;

    t182 = (x749&((x750!=x751)/x752));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x753 = INT32_MIN;
	int64_t x754 = -1LL;
	uint8_t x755 = UINT8_MAX;
	volatile int64_t x756 = -167360LL;
	int64_t t183 = 60277408423LL;

    t183 = (x753&((x754!=x755)/x756));

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x757 = INT8_MIN;
	int8_t x758 = INT8_MIN;
	static uint16_t x759 = UINT16_MAX;
	int16_t x760 = INT16_MIN;

    t184 = (x757&((x758!=x759)/x760));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x761 = -9;
	uint32_t x762 = UINT32_MAX;
	int16_t x763 = INT16_MIN;
	uint64_t x764 = 5167062008LLU;
	static volatile uint64_t t185 = 367247714157165LLU;

    t185 = (x761&((x762!=x763)/x764));

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x765 = -49;
	int64_t x767 = INT64_MIN;
	int8_t x768 = -1;

    t186 = (x765&((x766!=x767)/x768));

    if (t186 != -49) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x769 = -5811523355423LL;
	int16_t x770 = -1;
	int16_t x771 = 546;
	uint64_t x772 = UINT64_MAX;
	volatile uint64_t t187 = 8LLU;

    t187 = (x769&((x770!=x771)/x772));

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x773 = INT8_MAX;
	uint64_t x775 = UINT64_MAX;
	uint32_t x776 = 49U;
	uint32_t t188 = 59U;

    t188 = (x773&((x774!=x775)/x776));

    if (t188 != 0U) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x777 = INT8_MIN;
	int64_t x778 = -1LL;
	static int32_t x779 = -91527982;
	uint32_t x780 = 821U;
	uint32_t t189 = 4289282U;

    t189 = (x777&((x778!=x779)/x780));

    if (t189 != 0U) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x781 = -1;
	uint64_t x782 = 1183734781290394LLU;
	int32_t x783 = -54;
	int8_t x784 = INT8_MIN;
	volatile int32_t t190 = -61308332;

    t190 = (x781&((x782!=x783)/x784));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint64_t x785 = 635LLU;
	volatile int32_t x786 = -19;
	static uint64_t x787 = UINT64_MAX;
	volatile uint64_t t191 = 4521612941301072450LLU;

    t191 = (x785&((x786!=x787)/x788));

    if (t191 != 635LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x789 = -637345;
	uint8_t x790 = UINT8_MAX;
	int8_t x791 = 40;
	static volatile int16_t x792 = INT16_MAX;
	int32_t t192 = 110003685;

    t192 = (x789&((x790!=x791)/x792));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x793 = INT32_MIN;
	uint32_t x794 = 53U;
	volatile int8_t x795 = INT8_MIN;
	int32_t x796 = INT32_MIN;

    t193 = (x793&((x794!=x795)/x796));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x797 = 1U;
	volatile uint64_t x798 = 1296035724LLU;
	uint8_t x799 = 4U;
	static int32_t x800 = INT32_MIN;
	int32_t t194 = 0;

    t194 = (x797&((x798!=x799)/x800));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x802 = UINT64_MAX;
	uint64_t x804 = UINT64_MAX;

    t195 = (x801&((x802!=x803)/x804));

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x805 = -32032366168770LL;
	int64_t x806 = -73LL;
	volatile int64_t t196 = -1252608LL;

    t196 = (x805&((x806!=x807)/x808));

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x809 = UINT8_MAX;
	uint16_t x810 = 930U;
	uint16_t x811 = UINT16_MAX;
	uint16_t x812 = UINT16_MAX;
	int32_t t197 = -48167;

    t197 = (x809&((x810!=x811)/x812));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x813 = 6;
	uint32_t x814 = UINT32_MAX;
	static uint16_t x815 = 5U;
	int32_t t198 = 0;

    t198 = (x813&((x814!=x815)/x816));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x817 = UINT16_MAX;
	int64_t x818 = -230173LL;
	int8_t x819 = INT8_MIN;
	int64_t x820 = 188675808LL;
	volatile int64_t t199 = 50230056735LL;

    t199 = (x817&((x818!=x819)/x820));

    if (t199 != 0LL) { NG(); } else { ; }
	
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

