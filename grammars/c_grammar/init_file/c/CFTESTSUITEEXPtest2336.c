
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

static volatile uint8_t x2 = UINT8_MAX;
int64_t x4 = -238LL;
volatile uint32_t x8 = UINT32_MAX;
uint8_t x14 = 36U;
volatile uint64_t x22 = 6LLU;
int64_t x23 = INT64_MIN;
int8_t x26 = INT8_MAX;
uint8_t x31 = 2U;
int64_t x33 = INT64_MIN;
int8_t x42 = -28;
int16_t x53 = 1;
static int16_t x55 = -1;
int16_t x59 = INT16_MIN;
volatile int64_t t14 = -3732580LL;
int32_t x65 = INT32_MIN;
static volatile int64_t x67 = INT64_MAX;
int8_t x70 = INT8_MIN;
static int32_t x71 = 493;
static uint32_t x72 = 1U;
volatile int16_t x80 = 14681;
volatile int32_t t19 = 369099577;
volatile int8_t x83 = INT8_MIN;
int64_t x87 = INT64_MAX;
uint8_t x92 = 1U;
uint32_t x93 = 230282U;
uint8_t x96 = 7U;
uint64_t t24 = 2921429084621171038LLU;
static uint16_t x101 = UINT16_MAX;
int32_t x116 = -1;
int8_t x118 = -1;
int16_t x120 = INT16_MIN;
uint64_t t30 = 485112797201886LLU;
int64_t x138 = -1LL;
static uint64_t x141 = 3106LLU;
int16_t x146 = INT16_MAX;
int64_t x150 = INT64_MAX;
static int32_t x154 = -1;
volatile int8_t x157 = INT8_MIN;
int64_t x164 = INT64_MIN;
static int16_t x166 = INT16_MAX;
volatile int16_t x171 = INT16_MAX;
volatile int64_t x172 = 1549481270322687LL;
volatile int64_t t42 = 31344343LL;
static int32_t x173 = INT32_MIN;
static int64_t x174 = INT64_MIN;
static int64_t x176 = INT64_MIN;
uint64_t x180 = 626039082LLU;
int64_t x187 = INT64_MAX;
int32_t x188 = -1;
int64_t t46 = -1581475LL;
uint64_t x193 = UINT64_MAX;
volatile int32_t x194 = INT32_MIN;
int8_t x195 = -1;
int32_t x198 = INT32_MIN;
static int16_t x200 = -8;
static uint16_t x207 = 14302U;
int32_t t51 = 1931;
uint32_t x209 = 256015U;
volatile int16_t x214 = INT16_MAX;
int64_t t53 = 18712325600124LL;
uint16_t x221 = 1U;
volatile int16_t x226 = INT16_MIN;
int32_t t57 = -653502;
volatile int8_t x242 = 51;
volatile int64_t x243 = INT64_MIN;
uint32_t x254 = 1191U;
int32_t x256 = -1;
uint64_t t63 = UINT64_MAX;
static int32_t x269 = INT32_MIN;
int8_t x270 = INT8_MIN;
uint16_t x271 = 563U;
int32_t x274 = -56461;
int64_t x275 = INT64_MIN;
static int64_t t68 = 67131106151LL;
int16_t x278 = INT16_MAX;
volatile uint32_t x279 = 10769U;
int64_t x280 = INT64_MAX;
uint32_t x281 = 0U;
uint32_t x283 = UINT32_MAX;
int32_t x284 = -1;
uint16_t x286 = 2U;
volatile uint32_t x291 = 107U;
volatile uint8_t x293 = 81U;
uint32_t x294 = 12096U;
volatile int8_t x300 = INT8_MAX;
volatile uint64_t t74 = 3915LLU;
uint32_t x302 = 3235U;
static int8_t x303 = 0;
static uint64_t t76 = 10140LLU;
uint32_t x313 = UINT32_MAX;
static uint32_t x316 = UINT32_MAX;
volatile int64_t t80 = -71LL;
int64_t x328 = -1LL;
static uint32_t x329 = 143715720U;
int8_t x331 = -7;
int64_t t82 = 12LL;
int64_t x342 = INT64_MIN;
int8_t x343 = INT8_MIN;
int8_t x349 = -1;
int64_t x355 = -1LL;
int64_t x359 = 224462833LL;
static int64_t x367 = INT64_MAX;
int64_t t92 = INT64_MIN;
uint32_t x376 = 3976219U;
uint64_t t93 = 1045LLU;
uint64_t x380 = 17411238LLU;
uint16_t x383 = 0U;
volatile int16_t x384 = -1;
uint32_t x389 = 8200723U;
uint64_t t97 = 192LLU;
int16_t x396 = 1927;
int64_t x397 = -2754925381393454LL;
volatile uint8_t x414 = 4U;
static int32_t x417 = -1;
int64_t x424 = INT64_MIN;
volatile uint8_t x428 = 1U;
uint8_t x440 = 14U;
uint8_t x444 = 84U;
int8_t x445 = -4;
static volatile uint8_t x447 = UINT8_MAX;
static int32_t x449 = -1;
int8_t x450 = 0;
int8_t x451 = -1;
int8_t x454 = INT8_MAX;
volatile int8_t x456 = INT8_MIN;
int64_t x457 = -1LL;
static uint64_t x462 = 126LLU;
int64_t x469 = INT64_MAX;
static uint32_t x472 = 1040U;
int16_t x482 = INT16_MAX;
int64_t x485 = INT64_MIN;
int64_t x499 = -1LL;
int64_t t124 = -98931974LL;
static volatile uint32_t t126 = 46U;
int8_t x513 = -1;
uint8_t x517 = 13U;
int32_t x523 = INT32_MIN;
volatile int16_t x526 = 3266;
int32_t x531 = 6264987;
uint16_t x537 = 3U;
static int64_t t134 = -3790130127LL;
volatile int32_t t135 = -1;
int64_t x545 = 62953060LL;
int8_t x549 = INT8_MIN;
uint8_t x550 = UINT8_MAX;
int8_t x556 = INT8_MIN;
static uint16_t x557 = 2550U;
int32_t x564 = -1;
volatile int32_t t140 = INT32_MAX;
int32_t x566 = -1;
int32_t x569 = -1;
volatile uint32_t t142 = 534740715U;
volatile uint16_t x587 = 44U;
volatile int32_t x590 = 1007410;
int64_t x599 = 11816645971LL;
int64_t x600 = -1LL;
uint64_t x602 = 234881030293LLU;
uint8_t x607 = 27U;
volatile int64_t t151 = 696843291045845195LL;
static volatile int16_t x610 = 3;
int64_t x611 = -1LL;
volatile uint32_t t153 = 730U;
volatile int64_t t154 = -1LL;
int16_t x634 = INT16_MAX;
uint64_t x635 = UINT64_MAX;
volatile uint32_t t159 = 71U;
static uint64_t t160 = 16090080502951697LLU;
int8_t x648 = 1;
volatile int64_t t161 = -36LL;
uint8_t x649 = 0U;
int64_t x661 = -1LL;
static int16_t x663 = -1992;
static int16_t x668 = INT16_MAX;
volatile int64_t x687 = 116597910862LL;
static uint32_t x689 = 6976871U;
int32_t x694 = INT32_MIN;
volatile int16_t x698 = 0;
int8_t x704 = 19;
volatile uint8_t x713 = 7U;
volatile int16_t x714 = -1;
int32_t t178 = 21;
int64_t t181 = 2LL;
int32_t x738 = INT32_MIN;
static int8_t x739 = -3;
int64_t t184 = INT64_MIN;
int16_t x741 = -420;
int8_t x743 = INT8_MAX;
volatile int8_t x745 = 15;
static int16_t x748 = -3;
int32_t x750 = INT32_MIN;
static uint8_t x752 = UINT8_MAX;
static int64_t x753 = INT64_MAX;
int64_t x761 = INT64_MIN;
int64_t x769 = -1LL;
int64_t x771 = -929288976LL;
int16_t x776 = INT16_MIN;
volatile uint32_t t193 = 39U;
static uint64_t x784 = 1594179775968721LLU;
volatile uint32_t x792 = UINT32_MAX;
uint32_t x794 = 7494797U;
static int8_t x800 = -1;


void f0(void) {
    	int16_t x1 = INT16_MIN;
	int64_t x3 = INT64_MAX;
	volatile int64_t t0 = -558747896722556LL;

    t0 = (x1&((x2&x3)|x4));

    if (t0 != -32768LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x5 = INT32_MIN;
	int16_t x6 = INT16_MAX;
	static uint8_t x7 = UINT8_MAX;
	uint32_t t1 = 580370U;

    t1 = (x5&((x6&x7)|x8));

    if (t1 != 2147483648U) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MIN;
	int32_t x10 = 6;
	volatile int32_t x11 = INT32_MAX;
	int16_t x12 = -1;
	static volatile int64_t t2 = INT64_MIN;

    t2 = (x9&((x10&x11)|x12));

    if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x13 = 45;
	int8_t x15 = INT8_MIN;
	static int16_t x16 = 24;
	static int32_t t3 = -9349;

    t3 = (x13&((x14&x15)|x16));

    if (t3 != 8) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = 22580315;
	uint16_t x18 = 31U;
	static int16_t x19 = 2778;
	uint16_t x20 = 22301U;
	int32_t t4 = 923794;

    t4 = (x17&((x18&x19)|x20));

    if (t4 != 1051) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x21 = INT64_MAX;
	int32_t x24 = INT32_MAX;
	volatile uint64_t t5 = 3885332751177275LLU;

    t5 = (x21&((x22&x23)|x24));

    if (t5 != 2147483647LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = 171LLU;
	uint64_t x27 = UINT64_MAX;
	volatile int64_t x28 = -15897007303LL;
	uint64_t t6 = 0LLU;

    t6 = (x25&((x26&x27)|x28));

    if (t6 != 43LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = 1624120585LL;
	int16_t x30 = INT16_MIN;
	volatile int16_t x32 = INT16_MAX;
	volatile int64_t t7 = -2739682212149327LL;

    t7 = (x29&((x30&x31)|x32));

    if (t7 != 7433LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x34 = INT16_MIN;
	int32_t x35 = INT32_MAX;
	uint16_t x36 = UINT16_MAX;
	volatile int64_t t8 = 51950619995325LL;

    t8 = (x33&((x34&x35)|x36));

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x37 = UINT8_MAX;
	int32_t x38 = INT32_MIN;
	static uint32_t x39 = UINT32_MAX;
	int8_t x40 = INT8_MIN;
	static volatile uint32_t t9 = 9U;

    t9 = (x37&((x38&x39)|x40));

    if (t9 != 128U) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = INT16_MIN;
	volatile int16_t x43 = INT16_MAX;
	int8_t x44 = -3;
	int32_t t10 = 696;

    t10 = (x41&((x42&x43)|x44));

    if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x45 = INT8_MIN;
	uint16_t x46 = 857U;
	static int64_t x47 = INT64_MIN;
	int8_t x48 = INT8_MIN;
	int64_t t11 = 9937310476633LL;

    t11 = (x45&((x46&x47)|x48));

    if (t11 != -128LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x49 = UINT32_MAX;
	volatile int16_t x50 = INT16_MIN;
	volatile int16_t x51 = INT16_MIN;
	static int64_t x52 = INT64_MIN;
	volatile int64_t t12 = -5LL;

    t12 = (x49&((x50&x51)|x52));

    if (t12 != 4294934528LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x54 = UINT8_MAX;
	uint32_t x56 = UINT32_MAX;
	volatile uint32_t t13 = 8281U;

    t13 = (x53&((x54&x55)|x56));

    if (t13 != 1U) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int16_t x57 = INT16_MIN;
	volatile int16_t x58 = -1;
	int64_t x60 = INT64_MIN;

    t14 = (x57&((x58&x59)|x60));

    if (t14 != -32768LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = INT8_MAX;
	uint16_t x62 = 7U;
	uint64_t x63 = 19799361118438315LLU;
	volatile int64_t x64 = INT64_MIN;
	uint64_t t15 = 291907229584LLU;

    t15 = (x61&((x62&x63)|x64));

    if (t15 != 3LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x66 = INT32_MAX;
	volatile uint64_t x68 = UINT64_MAX;
	uint64_t t16 = 10928883953683LLU;

    t16 = (x65&((x66&x67)|x68));

    if (t16 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint32_t x69 = 20130U;
	static volatile uint32_t t17 = 3526549U;

    t17 = (x69&((x70&x71)|x72));

    if (t17 != 128U) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = 0;
	int32_t x74 = INT32_MAX;
	static uint64_t x75 = 3529441LLU;
	volatile int64_t x76 = INT64_MIN;
	volatile uint64_t t18 = 104511101570072617LLU;

    t18 = (x73&((x74&x75)|x76));

    if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = INT16_MAX;
	int8_t x78 = -14;
	uint8_t x79 = UINT8_MAX;

    t19 = (x77&((x78&x79)|x80));

    if (t19 != 14843) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = -418;
	int16_t x82 = -1;
	int16_t x84 = -1;
	static volatile int32_t t20 = 482;

    t20 = (x81&((x82&x83)|x84));

    if (t20 != -418) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = INT32_MAX;
	static int32_t x86 = -20067331;
	int16_t x88 = INT16_MIN;
	int64_t t21 = -486739LL;

    t21 = (x85&((x86&x87)|x88));

    if (t21 != 2147470333LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = 1;
	uint32_t x90 = UINT32_MAX;
	uint64_t x91 = UINT64_MAX;
	static uint64_t t22 = 110343307700LLU;

    t22 = (x89&((x90&x91)|x92));

    if (t22 != 1LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x94 = INT8_MIN;
	int32_t x95 = -20112;
	uint32_t t23 = 27751U;

    t23 = (x93&((x94&x95)|x96));

    if (t23 != 229634U) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint64_t x97 = 396316692LLU;
	uint8_t x98 = UINT8_MAX;
	int32_t x99 = -1;
	int64_t x100 = -1LL;

    t24 = (x97&((x98&x99)|x100));

    if (t24 != 396316692LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x102 = -1LL;
	int32_t x103 = INT32_MIN;
	volatile int16_t x104 = 115;
	int64_t t25 = -107245782020125574LL;

    t25 = (x101&((x102&x103)|x104));

    if (t25 != 115LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = -704942208;
	int16_t x106 = 228;
	static int64_t x107 = 1732387LL;
	int8_t x108 = INT8_MAX;
	volatile int64_t t26 = 7LL;

    t26 = (x105&((x106&x107)|x108));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = INT8_MAX;
	static uint64_t x110 = 67682050505LLU;
	int8_t x111 = INT8_MIN;
	uint32_t x112 = UINT32_MAX;
	uint64_t t27 = 3466583683869929717LLU;

    t27 = (x109&((x110&x111)|x112));

    if (t27 != 127LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x113 = 6;
	int64_t x114 = INT64_MAX;
	volatile int16_t x115 = 4;
	volatile int64_t t28 = 1186753473423LL;

    t28 = (x113&((x114&x115)|x116));

    if (t28 != 6LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = -1019;
	uint64_t x119 = UINT64_MAX;
	uint64_t t29 = 3890567018LLU;

    t29 = (x117&((x118&x119)|x120));

    if (t29 != 18446744073709550597LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = INT64_MAX;
	int64_t x122 = INT64_MIN;
	uint8_t x123 = 0U;
	static volatile uint64_t x124 = UINT64_MAX;

    t30 = (x121&((x122&x123)|x124));

    if (t30 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = INT8_MAX;
	int32_t x126 = -2630589;
	uint64_t x127 = UINT64_MAX;
	uint16_t x128 = 560U;
	uint64_t t31 = 688741601124LLU;

    t31 = (x125&((x126&x127)|x128));

    if (t31 != 115LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint64_t x129 = UINT64_MAX;
	uint32_t x130 = UINT32_MAX;
	static int32_t x131 = INT32_MAX;
	int64_t x132 = INT64_MIN;
	volatile uint64_t t32 = 255919802LLU;

    t32 = (x129&((x130&x131)|x132));

    if (t32 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x133 = -1;
	volatile uint64_t x134 = UINT64_MAX;
	volatile int16_t x135 = -27;
	uint16_t x136 = 18007U;
	volatile uint64_t t33 = 39222093077323LLU;

    t33 = (x133&((x134&x135)|x136));

    if (t33 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = -1LL;
	int32_t x139 = INT32_MAX;
	static int8_t x140 = 22;
	int64_t t34 = 52894876LL;

    t34 = (x137&((x138&x139)|x140));

    if (t34 != 2147483647LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint64_t x142 = UINT64_MAX;
	volatile int16_t x143 = -24;
	int32_t x144 = -327121;
	uint64_t t35 = 6683791LLU;

    t35 = (x141&((x142&x143)|x144));

    if (t35 != 3106LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x145 = 46U;
	uint16_t x147 = 11U;
	int16_t x148 = INT16_MIN;
	int32_t t36 = -12;

    t36 = (x145&((x146&x147)|x148));

    if (t36 != 10) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = INT64_MAX;
	uint64_t x151 = 282LLU;
	static int8_t x152 = INT8_MIN;
	volatile uint64_t t37 = 2168LLU;

    t37 = (x149&((x150&x151)|x152));

    if (t37 != 9223372036854775706LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t x153 = 10LL;
	uint16_t x155 = 442U;
	uint32_t x156 = 3U;
	int64_t t38 = -34LL;

    t38 = (x153&((x154&x155)|x156));

    if (t38 != 10LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x158 = UINT16_MAX;
	static int64_t x159 = INT64_MAX;
	uint32_t x160 = UINT32_MAX;
	volatile int64_t t39 = -847952LL;

    t39 = (x157&((x158&x159)|x160));

    if (t39 != 4294967168LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x161 = INT64_MAX;
	int32_t x162 = INT32_MAX;
	int32_t x163 = INT32_MAX;
	int64_t t40 = -15864575196282654LL;

    t40 = (x161&((x162&x163)|x164));

    if (t40 != 2147483647LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint64_t x165 = 7043482LLU;
	static int8_t x167 = INT8_MIN;
	uint16_t x168 = 670U;
	uint64_t t41 = 626458546207085LLU;

    t41 = (x165&((x166&x167)|x168));

    if (t41 != 31130LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x169 = -1LL;
	uint8_t x170 = UINT8_MAX;

    t42 = (x169&((x170&x171)|x172));

    if (t42 != 1549481270322687LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint16_t x175 = 14U;
	static int64_t t43 = INT64_MIN;

    t43 = (x173&((x174&x175)|x176));

    if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x177 = -1;
	static int8_t x178 = -1;
	uint64_t x179 = UINT64_MAX;
	uint64_t t44 = UINT64_MAX;

    t44 = (x177&((x178&x179)|x180));

    if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = -1LL;
	volatile int32_t x182 = INT32_MIN;
	volatile uint16_t x183 = 947U;
	int32_t x184 = -27;
	int64_t t45 = -107256032LL;

    t45 = (x181&((x182&x183)|x184));

    if (t45 != -27LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int32_t x185 = 17;
	int16_t x186 = -1;

    t46 = (x185&((x186&x187)|x188));

    if (t46 != 17LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x189 = 714408;
	int64_t x190 = -71531731681803528LL;
	int64_t x191 = 9250238971916769LL;
	int64_t x192 = 28775739550756LL;
	int64_t t47 = 1127LL;

    t47 = (x189&((x190&x191)|x192));

    if (t47 != 713888LL) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint32_t x196 = 19U;
	volatile uint64_t t48 = 23971599973LLU;

    t48 = (x193&((x194&x195)|x196));

    if (t48 != 2147483667LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = 28107680LL;
	static volatile int16_t x199 = INT16_MIN;
	volatile int64_t t49 = 5053474355590694LL;

    t49 = (x197&((x198&x199)|x200));

    if (t49 != 28107680LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x201 = 2308603352138674740LL;
	static int64_t x202 = INT64_MIN;
	static int8_t x203 = -1;
	int16_t x204 = 1;
	int64_t t50 = -186579362LL;

    t50 = (x201&((x202&x203)|x204));

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x205 = INT8_MIN;
	int8_t x206 = INT8_MAX;
	volatile int16_t x208 = -1;

    t51 = (x205&((x206&x207)|x208));

    if (t51 != -128) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint16_t x210 = 27347U;
	volatile int32_t x211 = INT32_MIN;
	int32_t x212 = 62;
	uint32_t t52 = 28U;

    t52 = (x209&((x210&x211)|x212));

    if (t52 != 14U) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint8_t x213 = UINT8_MAX;
	static volatile int64_t x215 = INT64_MAX;
	static volatile int8_t x216 = INT8_MIN;

    t53 = (x213&((x214&x215)|x216));

    if (t53 != 255LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x217 = INT32_MIN;
	static int8_t x218 = -1;
	static int32_t x219 = INT32_MAX;
	int32_t x220 = INT32_MIN;
	static int32_t t54 = INT32_MIN;

    t54 = (x217&((x218&x219)|x220));

    if (t54 != INT32_MIN) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x222 = 1;
	int16_t x223 = -83;
	static int32_t x224 = INT32_MIN;
	int32_t t55 = -35248;

    t55 = (x221&((x222&x223)|x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = -1;
	volatile int32_t x227 = -1;
	static uint16_t x228 = 106U;
	volatile int32_t t56 = 356206589;

    t56 = (x225&((x226&x227)|x228));

    if (t56 != -32662) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x229 = UINT16_MAX;
	volatile int16_t x230 = INT16_MAX;
	int8_t x231 = 4;
	uint8_t x232 = 0U;

    t57 = (x229&((x230&x231)|x232));

    if (t57 != 4) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x233 = INT16_MIN;
	int8_t x234 = INT8_MIN;
	int64_t x235 = -113673454232913LL;
	uint16_t x236 = UINT16_MAX;
	static int64_t t58 = 7LL;

    t58 = (x233&((x234&x235)|x236));

    if (t58 != -113673454256128LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x237 = 1;
	static int16_t x238 = INT16_MIN;
	volatile int8_t x239 = INT8_MAX;
	volatile uint64_t x240 = UINT64_MAX;
	uint64_t t59 = 1LLU;

    t59 = (x237&((x238&x239)|x240));

    if (t59 != 1LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = INT8_MIN;
	int32_t x244 = INT32_MAX;
	int64_t t60 = 925144LL;

    t60 = (x241&((x242&x243)|x244));

    if (t60 != 2147483520LL) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint64_t x245 = 262951191490488LLU;
	int8_t x246 = 1;
	uint64_t x247 = 127959535823370LLU;
	int32_t x248 = 1626;
	static volatile uint64_t t61 = 2261324704LLU;

    t61 = (x245&((x246&x247)|x248));

    if (t61 != 1560LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint8_t x249 = UINT8_MAX;
	int64_t x250 = -1076487647456LL;
	int16_t x251 = INT16_MIN;
	uint16_t x252 = 1179U;
	volatile int64_t t62 = -16033236263LL;

    t62 = (x249&((x250&x251)|x252));

    if (t62 != 155LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x253 = UINT64_MAX;
	int64_t x255 = -111731357863LL;

    t63 = (x253&((x254&x255)|x256));

    if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x257 = INT16_MAX;
	volatile int8_t x258 = -1;
	static int16_t x259 = INT16_MIN;
	static uint64_t x260 = 334010876857LLU;
	volatile uint64_t t64 = 21411LLU;

    t64 = (x257&((x258&x259)|x260));

    if (t64 != 953LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x261 = 0;
	static int64_t x262 = INT64_MAX;
	static volatile int32_t x263 = INT32_MIN;
	static int16_t x264 = -13;
	int64_t t65 = -15652595LL;

    t65 = (x261&((x262&x263)|x264));

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x265 = -1;
	uint32_t x266 = 117U;
	int16_t x267 = -1;
	int64_t x268 = INT64_MIN;
	volatile int64_t t66 = 40256451375LL;

    t66 = (x265&((x266&x267)|x268));

    if (t66 != -9223372036854775691LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x272 = 138U;
	static int32_t t67 = -1130755;

    t67 = (x269&((x270&x271)|x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile uint32_t x273 = UINT32_MAX;
	int8_t x276 = -1;

    t68 = (x273&((x274&x275)|x276));

    if (t68 != 4294967295LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x277 = 1407284089831LL;
	int64_t t69 = -233LL;

    t69 = (x277&((x278&x279)|x280));

    if (t69 != 1407284089831LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x282 = INT64_MIN;
	static int64_t t70 = 2LL;

    t70 = (x281&((x282&x283)|x284));

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint64_t x285 = UINT64_MAX;
	uint8_t x287 = 31U;
	int32_t x288 = INT32_MIN;
	uint64_t t71 = 14565543386917LLU;

    t71 = (x285&((x286&x287)|x288));

    if (t71 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x289 = -579;
	volatile int16_t x290 = -121;
	static volatile int32_t x292 = INT32_MIN;
	volatile uint32_t t72 = 111U;

    t72 = (x289&((x290&x291)|x292));

    if (t72 != 2147483649U) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x295 = 3494LL;
	static volatile int16_t x296 = INT16_MIN;
	volatile int64_t t73 = 47328989034LL;

    t73 = (x293&((x294&x295)|x296));

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x297 = INT16_MIN;
	uint64_t x298 = UINT64_MAX;
	volatile int16_t x299 = -1;

    t74 = (x297&((x298&x299)|x300));

    if (t74 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x301 = 1786611U;
	volatile uint8_t x304 = 1U;
	static volatile uint32_t t75 = 1653U;

    t75 = (x301&((x302&x303)|x304));

    if (t75 != 1U) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x305 = 13;
	uint64_t x306 = 903742LLU;
	int32_t x307 = INT32_MAX;
	uint16_t x308 = UINT16_MAX;

    t76 = (x305&((x306&x307)|x308));

    if (t76 != 13LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint8_t x309 = 0U;
	int8_t x310 = INT8_MIN;
	volatile int8_t x311 = INT8_MIN;
	int32_t x312 = INT32_MAX;
	static int32_t t77 = -1;

    t77 = (x309&((x310&x311)|x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x314 = INT64_MIN;
	static int64_t x315 = 1089917113060LL;
	volatile int64_t t78 = 19LL;

    t78 = (x313&((x314&x315)|x316));

    if (t78 != 4294967295LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x317 = 3858967LLU;
	int16_t x318 = -1;
	volatile uint16_t x319 = UINT16_MAX;
	static int16_t x320 = -4433;
	volatile uint64_t t79 = 936316523847387LLU;

    t79 = (x317&((x318&x319)|x320));

    if (t79 != 3858967LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x321 = -1LL;
	volatile int64_t x322 = 3395656502226672LL;
	volatile int64_t x323 = -1LL;
	uint8_t x324 = 20U;

    t80 = (x321&((x322&x323)|x324));

    if (t80 != 3395656502226676LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x325 = -373;
	int64_t x326 = INT64_MAX;
	volatile int16_t x327 = -11;
	static int64_t t81 = 4LL;

    t81 = (x325&((x326&x327)|x328));

    if (t81 != -373LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x330 = 8197023LL;
	volatile int16_t x332 = -1;

    t82 = (x329&((x330&x331)|x332));

    if (t82 != 143715720LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x333 = INT64_MAX;
	static int8_t x334 = INT8_MAX;
	int16_t x335 = INT16_MAX;
	static int64_t x336 = 57522955LL;
	int64_t t83 = -950419803973206571LL;

    t83 = (x333&((x334&x335)|x336));

    if (t83 != 57523071LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = 118215670LL;
	int64_t x338 = INT64_MIN;
	volatile int8_t x339 = -1;
	uint8_t x340 = UINT8_MAX;
	static int64_t t84 = 176362244922LL;

    t84 = (x337&((x338&x339)|x340));

    if (t84 != 246LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint64_t x341 = 250240857196446617LLU;
	uint64_t x344 = 1151962263LLU;
	uint64_t t85 = 45296417100LLU;

    t85 = (x341&((x342&x343)|x344));

    if (t85 != 1076461713LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x345 = -81040;
	int16_t x346 = INT16_MAX;
	int32_t x347 = INT32_MIN;
	uint32_t x348 = 2269292U;
	static uint32_t t86 = 539U;

    t86 = (x345&((x346&x347)|x348));

    if (t86 != 2261088U) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x350 = -1;
	int16_t x351 = INT16_MAX;
	volatile int16_t x352 = INT16_MIN;
	volatile int32_t t87 = 660717053;

    t87 = (x349&((x350&x351)|x352));

    if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
    	static int8_t x353 = INT8_MAX;
	static int64_t x354 = -837920712289863LL;
	int8_t x356 = 0;
	volatile int64_t t88 = -3161607795233380LL;

    t88 = (x353&((x354&x355)|x356));

    if (t88 != 57LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x357 = UINT8_MAX;
	uint8_t x358 = 9U;
	static volatile int8_t x360 = INT8_MIN;
	volatile int64_t t89 = -2157724972498070LL;

    t89 = (x357&((x358&x359)|x360));

    if (t89 != 129LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x361 = UINT32_MAX;
	static int32_t x362 = -39408919;
	int16_t x363 = 0;
	int32_t x364 = 18562024;
	volatile uint32_t t90 = 20113U;

    t90 = (x361&((x362&x363)|x364));

    if (t90 != 18562024U) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x365 = UINT16_MAX;
	static uint32_t x366 = UINT32_MAX;
	static uint16_t x368 = UINT16_MAX;
	volatile int64_t t91 = -71LL;

    t91 = (x365&((x366&x367)|x368));

    if (t91 != 65535LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x369 = INT64_MIN;
	int32_t x370 = INT32_MAX;
	int64_t x371 = -1LL;
	int64_t x372 = INT64_MIN;

    t92 = (x369&((x370&x371)|x372));

    if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x373 = 706U;
	uint16_t x374 = 1U;
	uint64_t x375 = 45247LLU;

    t93 = (x373&((x374&x375)|x376));

    if (t93 != 2LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int16_t x377 = INT16_MIN;
	int16_t x378 = INT16_MAX;
	int8_t x379 = INT8_MAX;
	uint64_t t94 = 1672965548065291256LLU;

    t94 = (x377&((x378&x379)|x380));

    if (t94 != 17399808LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x381 = INT8_MAX;
	uint8_t x382 = 7U;
	static int32_t t95 = 407181;

    t95 = (x381&((x382&x383)|x384));

    if (t95 != 127) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x385 = 18;
	volatile int8_t x386 = INT8_MAX;
	volatile int16_t x387 = -13336;
	int8_t x388 = -1;
	volatile int32_t t96 = 444083783;

    t96 = (x385&((x386&x387)|x388));

    if (t96 != 18) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x390 = UINT32_MAX;
	uint32_t x391 = 1977985577U;
	static uint64_t x392 = 97558LLU;

    t97 = (x389&((x390&x391)|x392));

    if (t97 != 6627859LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x393 = 26292U;
	int8_t x394 = 0;
	uint32_t x395 = UINT32_MAX;
	volatile uint32_t t98 = 59829282U;

    t98 = (x393&((x394&x395)|x396));

    if (t98 != 1668U) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x398 = INT16_MAX;
	static uint16_t x399 = 1016U;
	int32_t x400 = 9167955;
	int64_t t99 = -19160987626362LL;

    t99 = (x397&((x398&x399)|x400));

    if (t99 != 156626LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x401 = 29439U;
	uint8_t x402 = 114U;
	int64_t x403 = INT64_MIN;
	int64_t x404 = INT64_MIN;
	volatile int64_t t100 = -280LL;

    t100 = (x401&((x402&x403)|x404));

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = INT32_MIN;
	static int32_t x406 = 35423970;
	static int8_t x407 = INT8_MIN;
	int16_t x408 = -943;
	volatile int32_t t101 = INT32_MIN;

    t101 = (x405&((x406&x407)|x408));

    if (t101 != INT32_MIN) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x409 = UINT64_MAX;
	static int8_t x410 = -1;
	int8_t x411 = INT8_MAX;
	uint32_t x412 = 220U;
	volatile uint64_t t102 = 4864451785679862LLU;

    t102 = (x409&((x410&x411)|x412));

    if (t102 != 255LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x413 = 52517U;
	int32_t x415 = INT32_MIN;
	int64_t x416 = -1LL;
	int64_t t103 = 16969724035281606LL;

    t103 = (x413&((x414&x415)|x416));

    if (t103 != 52517LL) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint32_t x418 = 158U;
	int64_t x419 = INT64_MAX;
	int64_t x420 = INT64_MIN;
	volatile int64_t t104 = 3331546517LL;

    t104 = (x417&((x418&x419)|x420));

    if (t104 != -9223372036854775650LL) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int64_t x421 = 3877704987LL;
	static int32_t x422 = INT32_MIN;
	static int8_t x423 = INT8_MIN;
	static int64_t t105 = -45662077566207910LL;

    t105 = (x421&((x422&x423)|x424));

    if (t105 != 2147483648LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x425 = UINT32_MAX;
	static uint32_t x426 = 368017U;
	uint64_t x427 = 0LLU;
	volatile uint64_t t106 = 235375310284LLU;

    t106 = (x425&((x426&x427)|x428));

    if (t106 != 1LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint16_t x429 = 3964U;
	int64_t x430 = INT64_MIN;
	volatile int16_t x431 = INT16_MIN;
	static int32_t x432 = INT32_MIN;
	volatile int64_t t107 = 1LL;

    t107 = (x429&((x430&x431)|x432));

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x433 = -1LL;
	int32_t x434 = INT32_MIN;
	int8_t x435 = -1;
	uint8_t x436 = UINT8_MAX;
	volatile int64_t t108 = 3465290463LL;

    t108 = (x433&((x434&x435)|x436));

    if (t108 != -2147483393LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x437 = INT16_MIN;
	volatile int16_t x438 = 16205;
	volatile int16_t x439 = -1;
	volatile int32_t t109 = 8;

    t109 = (x437&((x438&x439)|x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x441 = 7143U;
	int16_t x442 = INT16_MAX;
	uint32_t x443 = UINT32_MAX;
	static volatile uint32_t t110 = 40745U;

    t110 = (x441&((x442&x443)|x444));

    if (t110 != 7143U) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int16_t x446 = INT16_MAX;
	int16_t x448 = 2499;
	int32_t t111 = -861067493;

    t111 = (x445&((x446&x447)|x448));

    if (t111 != 2556) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x452 = INT64_MAX;
	int64_t t112 = INT64_MAX;

    t112 = (x449&((x450&x451)|x452));

    if (t112 != INT64_MAX) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x453 = UINT32_MAX;
	uint32_t x455 = UINT32_MAX;
	static volatile uint32_t t113 = UINT32_MAX;

    t113 = (x453&((x454&x455)|x456));

    if (t113 != UINT32_MAX) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x458 = 1;
	static int32_t x459 = INT32_MIN;
	int32_t x460 = INT32_MAX;
	volatile int64_t t114 = 400479561545288680LL;

    t114 = (x457&((x458&x459)|x460));

    if (t114 != 2147483647LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x461 = -1;
	uint16_t x463 = 2U;
	int16_t x464 = INT16_MIN;
	uint64_t t115 = 3076567824LLU;

    t115 = (x461&((x462&x463)|x464));

    if (t115 != 18446744073709518850LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x465 = INT8_MIN;
	static uint32_t x466 = UINT32_MAX;
	static volatile int8_t x467 = INT8_MAX;
	volatile uint16_t x468 = 76U;
	volatile uint32_t t116 = 7U;

    t116 = (x465&((x466&x467)|x468));

    if (t116 != 0U) { NG(); } else { ; }
	
}

void f117(void) {
    	static int32_t x470 = -181273281;
	int16_t x471 = INT16_MIN;
	volatile int64_t t117 = -75947520229LL;

    t117 = (x469&((x470&x471)|x472));

    if (t117 != 4113662992LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint8_t x473 = 0U;
	static int8_t x474 = INT8_MIN;
	int8_t x475 = -1;
	int8_t x476 = INT8_MAX;
	int32_t t118 = 0;

    t118 = (x473&((x474&x475)|x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = -1LL;
	static uint64_t x478 = UINT64_MAX;
	uint32_t x479 = UINT32_MAX;
	uint8_t x480 = UINT8_MAX;
	uint64_t t119 = 21813LLU;

    t119 = (x477&((x478&x479)|x480));

    if (t119 != 4294967295LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile uint16_t x481 = 10094U;
	int64_t x483 = INT64_MAX;
	int64_t x484 = 3082979448197485327LL;
	volatile int64_t t120 = -1185013183077783LL;

    t120 = (x481&((x482&x483)|x484));

    if (t120 != 10094LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x486 = INT32_MAX;
	uint8_t x487 = UINT8_MAX;
	volatile uint32_t x488 = 6450U;
	volatile int64_t t121 = 36336112308LL;

    t121 = (x485&((x486&x487)|x488));

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static int16_t x489 = -1;
	int16_t x490 = INT16_MIN;
	static int8_t x491 = 13;
	int8_t x492 = INT8_MIN;
	volatile int32_t t122 = 0;

    t122 = (x489&((x490&x491)|x492));

    if (t122 != -128) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x493 = -1;
	uint16_t x494 = 15U;
	static uint32_t x495 = UINT32_MAX;
	static int8_t x496 = -1;
	volatile uint32_t t123 = UINT32_MAX;

    t123 = (x493&((x494&x495)|x496));

    if (t123 != UINT32_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x497 = -151765;
	volatile uint32_t x498 = UINT32_MAX;
	int64_t x500 = 635093405646LL;

    t124 = (x497&((x498&x499)|x500));

    if (t124 != 635655008043LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int8_t x501 = -1;
	uint16_t x502 = UINT16_MAX;
	volatile int8_t x503 = INT8_MIN;
	uint64_t x504 = 26LLU;
	uint64_t t125 = 8046LLU;

    t125 = (x501&((x502&x503)|x504));

    if (t125 != 65434LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x505 = 3U;
	uint32_t x506 = 399361U;
	volatile uint16_t x507 = UINT16_MAX;
	int32_t x508 = INT32_MAX;

    t126 = (x505&((x506&x507)|x508));

    if (t126 != 3U) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x509 = 3157U;
	static int64_t x510 = -4145101LL;
	int64_t x511 = -1LL;
	uint8_t x512 = 1U;
	int64_t t127 = -9264417LL;

    t127 = (x509&((x510&x511)|x512));

    if (t127 != 17LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x514 = INT64_MAX;
	static int64_t x515 = -359625719858LL;
	int8_t x516 = INT8_MIN;
	int64_t t128 = 168LL;

    t128 = (x513&((x514&x515)|x516));

    if (t128 != -50LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x518 = 1;
	int8_t x519 = INT8_MIN;
	static int64_t x520 = 28LL;
	static int64_t t129 = -6LL;

    t129 = (x517&((x518&x519)|x520));

    if (t129 != 12LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x521 = UINT8_MAX;
	int16_t x522 = INT16_MAX;
	volatile uint8_t x524 = UINT8_MAX;
	static int32_t t130 = 642;

    t130 = (x521&((x522&x523)|x524));

    if (t130 != 255) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x525 = 0LL;
	int32_t x527 = -1;
	volatile uint64_t x528 = 4033752148LLU;
	volatile uint64_t t131 = 6LLU;

    t131 = (x525&((x526&x527)|x528));

    if (t131 != 0LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x529 = INT64_MIN;
	volatile uint8_t x530 = UINT8_MAX;
	static uint64_t x532 = 753475497LLU;
	static volatile uint64_t t132 = 246761621LLU;

    t132 = (x529&((x530&x531)|x532));

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int8_t x533 = INT8_MIN;
	int8_t x534 = -1;
	int16_t x535 = INT16_MIN;
	volatile uint16_t x536 = 273U;
	static volatile int32_t t133 = 2739315;

    t133 = (x533&((x534&x535)|x536));

    if (t133 != -32512) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x538 = UINT8_MAX;
	int16_t x539 = -1;
	int64_t x540 = INT64_MAX;

    t134 = (x537&((x538&x539)|x540));

    if (t134 != 3LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = -4;
	uint16_t x542 = 25934U;
	int32_t x543 = INT32_MIN;
	int8_t x544 = INT8_MAX;

    t135 = (x541&((x542&x543)|x544));

    if (t135 != 124) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x546 = 14;
	uint16_t x547 = 135U;
	int16_t x548 = 3925;
	volatile int64_t t136 = -19711449LL;

    t136 = (x545&((x546&x547)|x548));

    if (t136 != 1604LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x551 = UINT64_MAX;
	int16_t x552 = -1;
	static volatile uint64_t t137 = 70754666460273LLU;

    t137 = (x549&((x550&x551)|x552));

    if (t137 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x553 = INT8_MAX;
	static int64_t x554 = INT64_MIN;
	int64_t x555 = -1168656021428499806LL;
	static int64_t t138 = 50787472975LL;

    t138 = (x553&((x554&x555)|x556));

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x558 = 6;
	static int64_t x559 = 67953807314804895LL;
	uint64_t x560 = 13608154619252LLU;
	volatile uint64_t t139 = 472216623LLU;

    t139 = (x557&((x558&x559)|x560));

    if (t139 != 2422LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x561 = INT32_MAX;
	int8_t x562 = INT8_MIN;
	int16_t x563 = INT16_MIN;

    t140 = (x561&((x562&x563)|x564));

    if (t140 != INT32_MAX) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x565 = 1U;
	int8_t x567 = INT8_MAX;
	uint16_t x568 = UINT16_MAX;
	volatile int32_t t141 = -1886901;

    t141 = (x565&((x566&x567)|x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x570 = -1;
	uint32_t x571 = 4U;
	static volatile uint8_t x572 = 125U;

    t142 = (x569&((x570&x571)|x572));

    if (t142 != 125U) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x573 = -117374684LL;
	uint16_t x574 = 77U;
	static volatile uint64_t x575 = 62776LLU;
	int32_t x576 = INT32_MAX;
	static uint64_t t143 = 113597737300779LLU;

    t143 = (x573&((x574&x575)|x576));

    if (t143 != 2030108964LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x577 = -1;
	int8_t x578 = INT8_MAX;
	static int8_t x579 = -1;
	static int32_t x580 = -2819648;
	int32_t t144 = 90208;

    t144 = (x577&((x578&x579)|x580));

    if (t144 != -2819585) { NG(); } else { ; }
	
}

void f145(void) {
    	static int32_t x581 = INT32_MIN;
	uint16_t x582 = 1U;
	int64_t x583 = 361530111LL;
	int8_t x584 = -14;
	volatile int64_t t145 = -650869500885LL;

    t145 = (x581&((x582&x583)|x584));

    if (t145 != -2147483648LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x585 = 5U;
	int8_t x586 = 6;
	static int8_t x588 = INT8_MIN;
	volatile int32_t t146 = -87105;

    t146 = (x585&((x586&x587)|x588));

    if (t146 != 4) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x589 = INT64_MIN;
	static volatile uint8_t x591 = 1U;
	volatile uint16_t x592 = UINT16_MAX;
	volatile int64_t t147 = -17571688102LL;

    t147 = (x589&((x590&x591)|x592));

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x593 = 3;
	volatile int32_t x594 = -1;
	static int8_t x595 = -19;
	int32_t x596 = INT32_MAX;
	int32_t t148 = -62;

    t148 = (x593&((x594&x595)|x596));

    if (t148 != 3) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x597 = 17U;
	uint32_t x598 = 833U;
	static int64_t t149 = 23LL;

    t149 = (x597&((x598&x599)|x600));

    if (t149 != 17LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x601 = 40U;
	uint16_t x603 = 5012U;
	int16_t x604 = -1;
	static volatile uint64_t t150 = 135LLU;

    t150 = (x601&((x602&x603)|x604));

    if (t150 != 40LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x605 = -1LL;
	int8_t x606 = -1;
	uint16_t x608 = UINT16_MAX;

    t151 = (x605&((x606&x607)|x608));

    if (t151 != 65535LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x609 = 63868740543411257LL;
	int16_t x612 = INT16_MAX;
	int64_t t152 = -622877498LL;

    t152 = (x609&((x610&x611)|x612));

    if (t152 != 29753LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x613 = INT32_MIN;
	uint32_t x614 = 90479536U;
	static int16_t x615 = INT16_MIN;
	static int16_t x616 = INT16_MIN;

    t153 = (x613&((x614&x615)|x616));

    if (t153 != 2147483648U) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x617 = 3U;
	static int16_t x618 = -1;
	int64_t x619 = -1444906947756LL;
	int32_t x620 = -6598;

    t154 = (x617&((x618&x619)|x620));

    if (t154 != 2LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x621 = -25;
	int64_t x622 = -95719704706LL;
	int16_t x623 = -1;
	volatile uint32_t x624 = 26U;
	static volatile int64_t t155 = 31414454LL;

    t155 = (x621&((x622&x623)|x624));

    if (t155 != -95719704730LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x625 = -1LL;
	int32_t x626 = 41;
	int8_t x627 = INT8_MAX;
	int32_t x628 = INT32_MIN;
	static int64_t t156 = -445539192221991LL;

    t156 = (x625&((x626&x627)|x628));

    if (t156 != -2147483607LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int64_t x629 = INT64_MIN;
	volatile int16_t x630 = INT16_MIN;
	int16_t x631 = INT16_MAX;
	int32_t x632 = -6557;
	int64_t t157 = INT64_MIN;

    t157 = (x629&((x630&x631)|x632));

    if (t157 != INT64_MIN) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x633 = 50;
	int32_t x636 = 188210208;
	uint64_t t158 = 1893207LLU;

    t158 = (x633&((x634&x635)|x636));

    if (t158 != 50LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int8_t x637 = 0;
	static int8_t x638 = INT8_MAX;
	int8_t x639 = INT8_MIN;
	uint32_t x640 = 608128U;

    t159 = (x637&((x638&x639)|x640));

    if (t159 != 0U) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x641 = INT64_MIN;
	static uint64_t x642 = UINT64_MAX;
	uint64_t x643 = 186875883123620453LLU;
	int16_t x644 = -1;

    t160 = (x641&((x642&x643)|x644));

    if (t160 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int16_t x645 = INT16_MAX;
	int64_t x646 = INT64_MIN;
	int16_t x647 = 0;

    t161 = (x645&((x646&x647)|x648));

    if (t161 != 1LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x650 = INT16_MAX;
	int16_t x651 = 42;
	int64_t x652 = -230444897229510109LL;
	static int64_t t162 = 155LL;

    t162 = (x649&((x650&x651)|x652));

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x653 = INT64_MIN;
	volatile int64_t x654 = INT64_MIN;
	uint32_t x655 = 26U;
	uint8_t x656 = 14U;
	int64_t t163 = -26271LL;

    t163 = (x653&((x654&x655)|x656));

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static int32_t x657 = INT32_MIN;
	int16_t x658 = 930;
	uint32_t x659 = UINT32_MAX;
	uint8_t x660 = 0U;
	volatile uint32_t t164 = 951311U;

    t164 = (x657&((x658&x659)|x660));

    if (t164 != 0U) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x662 = 3U;
	int16_t x664 = INT16_MAX;
	volatile int64_t t165 = -312725LL;

    t165 = (x661&((x662&x663)|x664));

    if (t165 != 32767LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x665 = -1LL;
	int16_t x666 = INT16_MAX;
	uint16_t x667 = 52U;
	static int64_t t166 = -34136LL;

    t166 = (x665&((x666&x667)|x668));

    if (t166 != 32767LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x669 = 21U;
	static volatile int32_t x670 = INT32_MIN;
	int16_t x671 = -2;
	uint64_t x672 = UINT64_MAX;
	uint64_t t167 = 57890429992LLU;

    t167 = (x669&((x670&x671)|x672));

    if (t167 != 21LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x673 = 4294;
	int32_t x674 = INT32_MAX;
	static int16_t x675 = INT16_MIN;
	uint64_t x676 = 3937576251LLU;
	uint64_t t168 = 262059872588453544LLU;

    t168 = (x673&((x674&x675)|x676));

    if (t168 != 2LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x677 = 8U;
	static uint16_t x678 = 29U;
	uint64_t x679 = 5LLU;
	static uint32_t x680 = 31062U;
	static volatile uint64_t t169 = 45746034LLU;

    t169 = (x677&((x678&x679)|x680));

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint32_t x681 = 114284U;
	static int8_t x682 = INT8_MIN;
	int8_t x683 = 1;
	volatile int64_t x684 = -12682989732993428LL;
	int64_t t170 = -4540LL;

    t170 = (x681&((x682&x683)|x684));

    if (t170 != 9836LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x685 = -1;
	uint8_t x686 = UINT8_MAX;
	uint8_t x688 = 0U;
	volatile int64_t t171 = 43200670797689078LL;

    t171 = (x685&((x686&x687)|x688));

    if (t171 != 78LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static int16_t x690 = INT16_MIN;
	int16_t x691 = -587;
	static int64_t x692 = INT64_MIN;
	int64_t t172 = 690021964413LL;

    t172 = (x689&((x690&x691)|x692));

    if (t172 != 6946816LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x693 = INT64_MIN;
	int8_t x695 = -4;
	volatile int16_t x696 = INT16_MIN;
	volatile int64_t t173 = INT64_MIN;

    t173 = (x693&((x694&x695)|x696));

    if (t173 != INT64_MIN) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x697 = 15;
	uint32_t x699 = 93872982U;
	int16_t x700 = INT16_MAX;
	uint32_t t174 = 163032U;

    t174 = (x697&((x698&x699)|x700));

    if (t174 != 15U) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint16_t x701 = 2U;
	volatile int32_t x702 = INT32_MIN;
	int32_t x703 = INT32_MIN;
	static volatile int32_t t175 = 74047492;

    t175 = (x701&((x702&x703)|x704));

    if (t175 != 2) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x705 = -1;
	int32_t x706 = -1;
	volatile int64_t x707 = -1LL;
	volatile int16_t x708 = INT16_MIN;
	static int64_t t176 = 4908417981966LL;

    t176 = (x705&((x706&x707)|x708));

    if (t176 != -1LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x709 = INT8_MAX;
	static int32_t x710 = INT32_MAX;
	static int64_t x711 = INT64_MIN;
	int32_t x712 = INT32_MIN;
	volatile int64_t t177 = -1213005538927614LL;

    t177 = (x709&((x710&x711)|x712));

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int32_t x715 = 2049537;
	int32_t x716 = INT32_MIN;

    t178 = (x713&((x714&x715)|x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x717 = 104U;
	int32_t x718 = INT32_MIN;
	uint64_t x719 = 98990994116574LLU;
	static int32_t x720 = INT32_MIN;
	uint64_t t179 = 887794599564LLU;

    t179 = (x717&((x718&x719)|x720));

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint16_t x721 = UINT16_MAX;
	volatile uint16_t x722 = UINT16_MAX;
	uint64_t x723 = UINT64_MAX;
	uint8_t x724 = 9U;
	volatile uint64_t t180 = 830914LLU;

    t180 = (x721&((x722&x723)|x724));

    if (t180 != 65535LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x725 = -87746411;
	volatile uint16_t x726 = 1U;
	static uint8_t x727 = 45U;
	static int64_t x728 = -1LL;

    t181 = (x725&((x726&x727)|x728));

    if (t181 != -87746411LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x729 = -1LL;
	int8_t x730 = INT8_MIN;
	int16_t x731 = 1;
	int64_t x732 = INT64_MIN;
	volatile int64_t t182 = INT64_MIN;

    t182 = (x729&((x730&x731)|x732));

    if (t182 != INT64_MIN) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint8_t x733 = UINT8_MAX;
	int16_t x734 = INT16_MIN;
	volatile int16_t x735 = INT16_MIN;
	int64_t x736 = INT64_MIN;
	volatile int64_t t183 = 211247500LL;

    t183 = (x733&((x734&x735)|x736));

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x737 = INT64_MIN;
	int32_t x740 = INT32_MIN;

    t184 = (x737&((x738&x739)|x740));

    if (t184 != INT64_MIN) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x742 = 1666401529U;
	int8_t x744 = INT8_MIN;
	uint32_t t185 = 297U;

    t185 = (x741&((x742&x743)|x744));

    if (t185 != 4294966872U) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x746 = -1LL;
	int16_t x747 = -1;
	int64_t t186 = 4632176LL;

    t186 = (x745&((x746&x747)|x748));

    if (t186 != 15LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x749 = 129;
	int32_t x751 = INT32_MIN;
	volatile int32_t t187 = -1705;

    t187 = (x749&((x750&x751)|x752));

    if (t187 != 129) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x754 = -5985742;
	static int32_t x755 = -1;
	int8_t x756 = 3;
	volatile int64_t t188 = -42095919652407126LL;

    t188 = (x753&((x754&x755)|x756));

    if (t188 != 9223372036848790067LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x757 = INT16_MIN;
	static int64_t x758 = -1LL;
	volatile int32_t x759 = -1;
	int64_t x760 = -1LL;
	int64_t t189 = 195437253339936LL;

    t189 = (x757&((x758&x759)|x760));

    if (t189 != -32768LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x762 = -1;
	static int32_t x763 = INT32_MAX;
	int8_t x764 = INT8_MIN;
	volatile int64_t t190 = INT64_MIN;

    t190 = (x761&((x762&x763)|x764));

    if (t190 != INT64_MIN) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x765 = 321U;
	uint64_t x766 = 1113284015399147020LLU;
	volatile int64_t x767 = 150889875997592022LL;
	static uint64_t x768 = 940045LLU;
	volatile uint64_t t191 = 136451LLU;

    t191 = (x765&((x766&x767)|x768));

    if (t191 != 1LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x770 = 10U;
	uint32_t x772 = UINT32_MAX;
	volatile int64_t t192 = -114091230366LL;

    t192 = (x769&((x770&x771)|x772));

    if (t192 != 4294967295LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint32_t x773 = 96700U;
	static int8_t x774 = INT8_MAX;
	int8_t x775 = INT8_MIN;

    t193 = (x773&((x774&x775)|x776));

    if (t193 != 65536U) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x777 = -1;
	volatile int64_t x778 = INT64_MIN;
	int64_t x779 = INT64_MAX;
	int32_t x780 = 0;
	int64_t t194 = 13544042357526590LL;

    t194 = (x777&((x778&x779)|x780));

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static int32_t x781 = INT32_MIN;
	volatile uint32_t x782 = UINT32_MAX;
	uint32_t x783 = 7940U;
	uint64_t t195 = 15313LLU;

    t195 = (x781&((x782&x783)|x784));

    if (t195 != 1594178043641856LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x785 = 33;
	uint8_t x786 = 113U;
	static uint8_t x787 = 0U;
	volatile int16_t x788 = INT16_MIN;
	int32_t t196 = -259160008;

    t196 = (x785&((x786&x787)|x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x789 = 1U;
	uint32_t x790 = UINT32_MAX;
	int32_t x791 = 977;
	static uint32_t t197 = 3198573U;

    t197 = (x789&((x790&x791)|x792));

    if (t197 != 1U) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x793 = -1704835;
	static int8_t x795 = 8;
	int64_t x796 = INT64_MIN;
	int64_t t198 = 29712245LL;

    t198 = (x793&((x794&x795)|x796));

    if (t198 != -9223372036854775800LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x797 = INT32_MIN;
	uint16_t x798 = UINT16_MAX;
	uint16_t x799 = UINT16_MAX;
	int32_t t199 = INT32_MIN;

    t199 = (x797&((x798&x799)|x800));

    if (t199 != INT32_MIN) { NG(); } else { ; }
	
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

