
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

int8_t x6 = INT8_MAX;
int16_t x7 = -1;
static int32_t x10 = INT32_MIN;
volatile int32_t x12 = INT32_MIN;
int64_t x13 = -16776LL;
int16_t x16 = 205;
uint16_t x30 = UINT16_MAX;
static volatile uint32_t t5 = 78722U;
static volatile int64_t x35 = INT64_MAX;
volatile int64_t x36 = INT64_MAX;
volatile int32_t x37 = 22954137;
int32_t t7 = -24744409;
static int64_t x44 = -1LL;
int64_t x47 = 276299517632LL;
static int32_t x48 = -1;
int64_t t10 = -127LL;
volatile int16_t x54 = -181;
volatile int64_t t13 = 69524771249606LL;
static uint16_t x65 = UINT16_MAX;
int8_t x70 = INT8_MAX;
volatile int64_t t16 = 9258798520LL;
volatile uint64_t t17 = 3760779785562LLU;
int16_t x82 = INT16_MIN;
volatile int32_t t18 = 0;
static int16_t x89 = -1;
int8_t x93 = INT8_MIN;
volatile int64_t t22 = -3763121120435843929LL;
int16_t x103 = INT16_MAX;
uint32_t t23 = 125054176U;
int32_t x127 = 364;
int64_t t28 = -102013620LL;
int64_t x133 = -1LL;
uint8_t x134 = 5U;
volatile uint16_t x139 = 17699U;
uint32_t x143 = UINT32_MAX;
int32_t x145 = 961929;
static int8_t x148 = 0;
static uint16_t x149 = 9U;
uint32_t t34 = 44U;
static volatile int32_t x163 = INT32_MIN;
static volatile int64_t t39 = -373012203541LL;
static uint64_t t40 = 160505266LLU;
volatile uint32_t x189 = UINT32_MAX;
int64_t x200 = 31LL;
int64_t t43 = 1LL;
static uint64_t t44 = 8593925800404LLU;
static uint32_t x206 = 1987295U;
int16_t x212 = 0;
int32_t x214 = INT32_MAX;
uint64_t x215 = UINT64_MAX;
uint64_t t47 = 3LLU;
static int16_t x223 = -1;
volatile uint32_t x226 = 3U;
uint32_t x228 = UINT32_MAX;
int16_t x229 = INT16_MAX;
int16_t x231 = 1;
int32_t x236 = INT32_MIN;
volatile uint8_t x239 = 7U;
volatile uint32_t x244 = 2058270371U;
static uint32_t t53 = 1437U;
int32_t x248 = INT32_MIN;
uint16_t x250 = 440U;
uint16_t x251 = 26U;
volatile int32_t x254 = INT32_MAX;
volatile int16_t x256 = INT16_MIN;
volatile int16_t x258 = INT16_MIN;
uint32_t x260 = 16070U;
static int64_t t57 = 2214312217814495545LL;
static uint8_t x261 = UINT8_MAX;
uint64_t x263 = UINT64_MAX;
static int32_t x266 = -1;
uint32_t t59 = 1547U;
static int16_t x269 = INT16_MIN;
static volatile uint64_t x270 = UINT64_MAX;
volatile int32_t x280 = INT32_MIN;
uint64_t x285 = 135594913LLU;
int8_t x288 = INT8_MIN;
static uint64_t x289 = 1077LLU;
int64_t x291 = -1LL;
uint64_t t64 = 185LLU;
int32_t x293 = -1;
volatile uint32_t x295 = UINT32_MAX;
volatile uint32_t t65 = 8U;
int64_t x298 = INT64_MIN;
uint16_t x312 = UINT16_MAX;
static int8_t x314 = -44;
static int8_t x323 = INT8_MAX;
int64_t t70 = 650610422497LL;
int32_t x325 = -1;
int16_t x328 = 61;
uint16_t x333 = 3U;
int8_t x340 = -1;
static int32_t t74 = -2;
static volatile uint32_t t77 = 196U;
volatile int32_t t81 = -1;
int32_t x380 = 192267;
volatile uint64_t x389 = 26498961198LLU;
int16_t x390 = INT16_MIN;
volatile uint32_t x406 = 49712U;
volatile int8_t x410 = INT8_MIN;
uint8_t x413 = 52U;
int8_t x414 = 1;
static uint32_t t89 = 750968U;
int16_t x417 = INT16_MIN;
volatile int8_t x419 = -9;
static int32_t t90 = -5;
static int8_t x423 = 18;
volatile int64_t t91 = 12881840LL;
uint16_t x427 = 9U;
uint32_t x435 = UINT32_MAX;
static uint64_t x438 = UINT64_MAX;
uint64_t t95 = 1LLU;
volatile int64_t x444 = -167911171LL;
int32_t x445 = INT32_MIN;
volatile int64_t t97 = -5950464266937143LL;
static uint32_t x451 = 43468055U;
static int8_t x453 = INT8_MIN;
int16_t x455 = INT16_MAX;
volatile uint64_t x462 = 7756185629913462LLU;
int32_t x463 = 3;
uint32_t x482 = 327799U;
int64_t t104 = -3760395LL;
static int16_t x489 = INT16_MIN;
uint64_t x491 = UINT64_MAX;
volatile int16_t x492 = INT16_MAX;
volatile int16_t x496 = 27;
static volatile int64_t x497 = INT64_MIN;
int8_t x498 = INT8_MIN;
static int8_t x499 = 21;
int64_t t107 = 69280033LL;
int8_t x504 = -1;
int32_t x505 = INT32_MAX;
uint64_t x512 = 465841459892598546LLU;
static int64_t x517 = 206951LL;
volatile int32_t x522 = -2;
volatile int64_t x523 = 126LL;
volatile int64_t x545 = 26230318287LL;
static int64_t x549 = INT64_MAX;
int16_t x551 = INT16_MIN;
int32_t x564 = INT32_MIN;
volatile int64_t t121 = 502726910043LL;
int8_t x576 = INT8_MAX;
volatile int64_t t123 = 2183963203028827856LL;
uint64_t x581 = 6973152640LLU;
static volatile int8_t x584 = 1;
static int16_t x602 = 0;
uint8_t x607 = 0U;
uint64_t t131 = 61650504LLU;
uint32_t x613 = 1044U;
int16_t x616 = INT16_MIN;
int32_t x620 = -1;
int32_t x622 = INT32_MIN;
static volatile int64_t x623 = -58LL;
volatile int64_t t135 = 13402723LL;
int8_t x630 = INT8_MIN;
volatile int64_t t136 = 0LL;
static int32_t x634 = INT32_MIN;
static volatile int64_t t137 = 5229412011LL;
static uint16_t x643 = 30U;
int64_t x649 = -1LL;
volatile int64_t t145 = 34033943634659LL;
uint32_t x681 = UINT32_MAX;
int64_t x686 = -1LL;
int16_t x691 = 14;
int8_t x701 = INT8_MIN;
int16_t x704 = INT16_MIN;
int64_t x712 = INT64_MIN;
static volatile uint64_t x715 = UINT64_MAX;
static int32_t x716 = INT32_MIN;
int64_t x719 = INT64_MIN;
int32_t x721 = -1;
int8_t x725 = INT8_MIN;
uint8_t x731 = 14U;
uint64_t x734 = UINT64_MAX;
int8_t x743 = INT8_MIN;
uint8_t x752 = 3U;
volatile int32_t t161 = 1931;
int64_t x759 = -1LL;
static int8_t x774 = 44;
int8_t x779 = -11;
static int64_t x780 = INT64_MIN;
uint64_t x783 = 339734662656858103LLU;
volatile int16_t x785 = -1;
int64_t t169 = -105483298396736619LL;
volatile uint16_t x789 = 85U;
uint32_t x790 = 1940942U;
static uint8_t x793 = UINT8_MAX;
uint8_t x795 = UINT8_MAX;
int16_t x800 = -1;
int64_t t172 = 376LL;
int32_t x804 = -11949573;
int32_t x815 = 74705465;
int64_t x820 = INT64_MIN;
static int32_t x837 = 0;
int16_t x856 = INT16_MIN;
static int8_t x857 = 7;
static int8_t x865 = INT8_MIN;
uint8_t x867 = 0U;
uint64_t x868 = 54182LLU;
uint32_t x869 = UINT32_MAX;
uint64_t x888 = 2366251846LLU;
uint32_t x896 = 172302U;
volatile uint64_t t191 = 520755181LLU;
int32_t x897 = 1054;
uint16_t x900 = 1996U;
int32_t x902 = INT32_MIN;
int16_t x904 = -1;
static int32_t x906 = INT32_MIN;
int64_t x912 = -793167LL;
uint64_t x914 = 3645433114228405LLU;
static uint32_t x916 = 552U;
uint64_t t196 = 326245LLU;
volatile uint64_t t197 = 486409654602269752LLU;
int64_t x924 = -1LL;
int16_t x925 = INT16_MIN;
int8_t x928 = 0;


void f0(void) {
    	int32_t x1 = INT32_MIN;
	int8_t x2 = INT8_MIN;
	uint8_t x3 = 11U;
	uint64_t x4 = 13538LLU;
	uint64_t t0 = 7930630004314LLU;

    t0 = (x1^((x2+x3)+x4));

    if (t0 != 18446744071562081389LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint32_t x5 = 31U;
	int16_t x8 = -1;
	volatile uint32_t t1 = 798U;

    t1 = (x5^((x6+x7)+x8));

    if (t1 != 98U) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x9 = INT64_MIN;
	static volatile int64_t x11 = INT64_MAX;
	volatile int64_t t2 = 3024LL;

    t2 = (x9^((x10+x11)+x12));

    if (t2 != -4294967297LL) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x14 = INT16_MIN;
	volatile uint8_t x15 = 20U;
	volatile int64_t t3 = 2LL;

    t3 = (x13^((x14+x15)+x16));

    if (t3 != 16025LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = 51937LLU;
	static int8_t x18 = -1;
	int8_t x19 = INT8_MIN;
	volatile uint64_t x20 = 196270638484289987LLU;
	volatile uint64_t t4 = 6LLU;

    t4 = (x17^((x18+x19)+x20));

    if (t4 != 196270638484239267LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x29 = INT16_MIN;
	uint32_t x31 = UINT32_MAX;
	int16_t x32 = -16;

    t5 = (x29^((x30+x31)+x32));

    if (t5 != 4294934510U) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x33 = -1;
	int64_t x34 = INT64_MIN;
	volatile int64_t t6 = -160995837061043LL;

    t6 = (x33^((x34+x35)+x36));

    if (t6 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x38 = INT8_MAX;
	int16_t x39 = INT16_MIN;
	int32_t x40 = -1;

    t7 = (x37^((x38+x39)+x40));

    if (t7 != -22953753) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x41 = INT64_MIN;
	uint8_t x42 = 117U;
	static uint16_t x43 = 735U;
	int64_t t8 = -167627785LL;

    t8 = (x41^((x42+x43)+x44));

    if (t8 != -9223372036854774957LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x45 = INT32_MAX;
	int16_t x46 = 646;
	int64_t t9 = 2691797332085256555LL;

    t9 = (x45^((x46+x47)+x48));

    if (t9 != 275603779258LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x49 = INT16_MAX;
	static volatile int64_t x50 = INT64_MAX;
	volatile int8_t x51 = INT8_MIN;
	uint32_t x52 = 50U;

    t10 = (x49^((x50+x51)+x52));

    if (t10 != 9223372036854743118LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint32_t x53 = 199446U;
	int32_t x55 = 498774;
	uint16_t x56 = UINT16_MAX;
	volatile uint32_t t11 = 663455835U;

    t11 = (x53^((x54+x55)+x56));

    if (t11 != 757942U) { NG(); } else { ; }
	
}

void f12(void) {
    	static int32_t x57 = INT32_MIN;
	static int16_t x58 = -6217;
	uint8_t x59 = UINT8_MAX;
	static uint8_t x60 = UINT8_MAX;
	static volatile int32_t t12 = 913;

    t12 = (x57^((x58+x59)+x60));

    if (t12 != 2147477941) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile uint32_t x61 = UINT32_MAX;
	int16_t x62 = INT16_MAX;
	static int32_t x63 = -1;
	int64_t x64 = INT64_MIN;

    t13 = (x61^((x62+x63)+x64));

    if (t13 != -9223372032559841279LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x66 = INT8_MAX;
	uint64_t x67 = 0LLU;
	static int64_t x68 = INT64_MAX;
	volatile uint64_t t14 = 1549LLU;

    t14 = (x65^((x66+x67)+x68));

    if (t14 != 9223372036854841217LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x69 = INT32_MAX;
	int32_t x71 = 1;
	int32_t x72 = INT32_MIN;
	volatile int32_t t15 = -2055632;

    t15 = (x69^((x70+x71)+x72));

    if (t15 != -129) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x73 = -1750LL;
	uint16_t x74 = 3358U;
	static int16_t x75 = INT16_MIN;
	int32_t x76 = -1;

    t16 = (x73^((x74+x75)+x76));

    if (t16 != 29751LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x77 = UINT64_MAX;
	int8_t x78 = INT8_MIN;
	uint32_t x79 = UINT32_MAX;
	int64_t x80 = INT64_MIN;

    t17 = (x77^((x78+x79)+x80));

    if (t17 != 9223372032559808640LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x81 = INT32_MIN;
	uint8_t x83 = 88U;
	int16_t x84 = INT16_MIN;

    t18 = (x81^((x82+x83)+x84));

    if (t18 != 2147418200) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x85 = INT8_MIN;
	static volatile int8_t x86 = INT8_MIN;
	volatile uint64_t x87 = UINT64_MAX;
	int32_t x88 = INT32_MIN;
	static uint64_t t19 = 8494027774226701343LLU;

    t19 = (x85^((x86+x87)+x88));

    if (t19 != 2147483903LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x90 = -1LL;
	int16_t x91 = -1;
	uint8_t x92 = UINT8_MAX;
	volatile int64_t t20 = 3944542947416231858LL;

    t20 = (x89^((x90+x91)+x92));

    if (t20 != -254LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x94 = -1;
	uint8_t x95 = 7U;
	uint64_t x96 = 2958347LLU;
	static volatile uint64_t t21 = 64911756LLU;

    t21 = (x93^((x94+x95)+x96));

    if (t21 != 18446744073706593169LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x97 = INT16_MIN;
	volatile int64_t x98 = INT64_MIN;
	static volatile int32_t x99 = INT32_MAX;
	int8_t x100 = -1;

    t22 = (x97^((x98+x99)+x100));

    if (t22 != 9223372034707324926LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint8_t x101 = 4U;
	int16_t x102 = INT16_MAX;
	uint32_t x104 = UINT32_MAX;

    t23 = (x101^((x102+x103)+x104));

    if (t23 != 65529U) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x105 = 1;
	uint32_t x106 = UINT32_MAX;
	int64_t x107 = -1564044817LL;
	volatile uint64_t x108 = UINT64_MAX;
	uint64_t t24 = 3681529353554927025LLU;

    t24 = (x105^((x106+x107)+x108));

    if (t24 != 2730922476LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x109 = 350LL;
	static volatile int16_t x110 = INT16_MAX;
	uint64_t x111 = 5511LLU;
	int8_t x112 = -1;
	static volatile uint64_t t25 = 254244LLU;

    t25 = (x109^((x110+x111)+x112));

    if (t25 != 38107LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x113 = -1;
	uint64_t x114 = UINT64_MAX;
	uint32_t x115 = UINT32_MAX;
	int8_t x116 = -1;
	uint64_t t26 = 870651059059LLU;

    t26 = (x113^((x114+x115)+x116));

    if (t26 != 18446744069414584322LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x121 = -1;
	static volatile int32_t x122 = -13591794;
	uint32_t x123 = UINT32_MAX;
	int16_t x124 = INT16_MIN;
	static volatile uint32_t t27 = 50672962U;

    t27 = (x121^((x122+x123)+x124));

    if (t27 != 13624562U) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x125 = 31;
	int64_t x126 = INT64_MIN;
	int64_t x128 = INT64_MAX;

    t28 = (x125^((x126+x127)+x128));

    if (t28 != 372LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x129 = INT32_MAX;
	uint64_t x130 = 1LLU;
	int16_t x131 = INT16_MIN;
	uint32_t x132 = 1447770U;
	uint64_t t29 = 126LLU;

    t29 = (x129^((x130+x131)+x132));

    if (t29 != 2146068644LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x135 = -6;
	volatile uint32_t x136 = UINT32_MAX;
	volatile int64_t t30 = -595LL;

    t30 = (x133^((x134+x135)+x136));

    if (t30 != -4294967295LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x137 = 4963184577995883LLU;
	volatile uint8_t x138 = 1U;
	static int32_t x140 = 61418;
	volatile uint64_t t31 = 761LLU;

    t31 = (x137^((x138+x139)+x140));

    if (t31 != 4963184577925477LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint32_t x141 = 35521U;
	int16_t x142 = -1;
	static uint8_t x144 = 21U;
	static volatile uint32_t t32 = 1826115301U;

    t32 = (x141^((x142+x143)+x144));

    if (t32 != 35538U) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile uint8_t x146 = UINT8_MAX;
	volatile uint32_t x147 = 1902500U;
	uint32_t t33 = 96227U;

    t33 = (x145^((x146+x147)+x148));

    if (t33 != 1287466U) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x150 = INT32_MAX;
	uint32_t x151 = 760848U;
	uint32_t x152 = 8121307U;

    t34 = (x149^((x150+x151)+x152));

    if (t34 != 2156365795U) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x161 = -118731;
	static int64_t x162 = -2LL;
	uint16_t x164 = 122U;
	volatile int64_t t35 = 133236920552671LL;

    t35 = (x161^((x162+x163)+x164));

    if (t35 != 2147364941LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint8_t x165 = 1U;
	int16_t x166 = 7;
	uint64_t x167 = UINT64_MAX;
	int16_t x168 = -1;
	uint64_t t36 = 6837188LLU;

    t36 = (x165^((x166+x167)+x168));

    if (t36 != 4LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x169 = 7829209LL;
	uint32_t x170 = 9U;
	int32_t x171 = -1;
	static int16_t x172 = INT16_MIN;
	volatile int64_t t37 = -484256047630LL;

    t37 = (x169^((x170+x171)+x172));

    if (t37 != 4287166161LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x177 = 1U;
	static int8_t x178 = 0;
	int16_t x179 = INT16_MIN;
	uint16_t x180 = UINT16_MAX;
	volatile int32_t t38 = -245394157;

    t38 = (x177^((x178+x179)+x180));

    if (t38 != 32766) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x181 = INT64_MIN;
	static uint16_t x182 = 1447U;
	uint8_t x183 = 0U;
	int16_t x184 = -1;

    t39 = (x181^((x182+x183)+x184));

    if (t39 != -9223372036854774362LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint64_t x185 = 62409980687939364LLU;
	int32_t x186 = INT32_MIN;
	uint16_t x187 = 222U;
	volatile int16_t x188 = INT16_MAX;

    t40 = (x185^((x186+x187)+x188));

    if (t40 != 18384334094945712121LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x190 = 0;
	int16_t x191 = -2;
	int32_t x192 = -1;
	uint32_t t41 = 5170578U;

    t41 = (x189^((x190+x191)+x192));

    if (t41 != 2U) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x193 = UINT64_MAX;
	uint64_t x194 = 7722LLU;
	int64_t x195 = INT64_MAX;
	int64_t x196 = INT64_MIN;
	uint64_t t42 = 116824869429405460LLU;

    t42 = (x193^((x194+x195)+x196));

    if (t42 != 18446744073709543894LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x197 = INT16_MIN;
	static uint8_t x198 = UINT8_MAX;
	int8_t x199 = INT8_MAX;

    t43 = (x197^((x198+x199)+x200));

    if (t43 != -32355LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x201 = 1685;
	int16_t x202 = 26;
	static uint64_t x203 = UINT64_MAX;
	int32_t x204 = 735384;

    t44 = (x201^((x202+x203)+x204));

    if (t44 != 736804LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x205 = 0U;
	int8_t x207 = INT8_MAX;
	static uint32_t x208 = 5742979U;
	uint32_t t45 = 335U;

    t45 = (x205^((x206+x207)+x208));

    if (t45 != 7730401U) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int64_t x209 = 47LL;
	uint64_t x210 = 882542984403069LLU;
	static volatile int32_t x211 = 16121;
	uint64_t t46 = 187645248373LLU;

    t46 = (x209^((x210+x211)+x212));

    if (t46 != 882542984419161LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int32_t x213 = INT32_MAX;
	static volatile int8_t x216 = -1;

    t47 = (x213^((x214+x215)+x216));

    if (t47 != 2LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x221 = 26215U;
	uint64_t x222 = 418114292107819LLU;
	volatile int16_t x224 = -204;
	static uint64_t t48 = 2661904925LLU;

    t48 = (x221^((x222+x223)+x224));

    if (t48 != 418114292100921LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint8_t x225 = 1U;
	uint64_t x227 = 176311221527405292LLU;
	uint64_t t49 = 2607LLU;

    t49 = (x225^((x226+x227)+x228));

    if (t49 != 176311225822372591LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x230 = 4383;
	int16_t x232 = 489;
	volatile int32_t t50 = -443719;

    t50 = (x229^((x230+x231)+x232));

    if (t50 != 27894) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x233 = INT32_MAX;
	volatile int16_t x234 = INT16_MIN;
	uint64_t x235 = 59124337754809LLU;
	uint64_t t51 = 17081062652388LLU;

    t51 = (x233^((x234+x235)+x236));

    if (t51 != 59120406904134LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x237 = 6;
	int64_t x238 = -4016843343634102LL;
	uint16_t x240 = 292U;
	volatile int64_t t52 = 519260LL;

    t52 = (x237^((x238+x239)+x240));

    if (t52 != -4016843343633805LL) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint8_t x241 = UINT8_MAX;
	int32_t x242 = 14524;
	uint8_t x243 = 0U;

    t53 = (x241^((x242+x243)+x244));

    if (t53 != 2058284960U) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x245 = UINT64_MAX;
	volatile uint8_t x246 = UINT8_MAX;
	uint32_t x247 = 1549675810U;
	static volatile uint64_t t54 = 203022496014LLU;

    t54 = (x245^((x246+x247)+x248));

    if (t54 != 18446744070012391902LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x249 = INT8_MAX;
	volatile int8_t x252 = 36;
	static int32_t t55 = 1;

    t55 = (x249^((x250+x251)+x252));

    if (t55 != 393) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x253 = 52U;
	uint32_t x255 = UINT32_MAX;
	volatile uint32_t t56 = 116U;

    t56 = (x253^((x254+x255)+x256));

    if (t56 != 2147450826U) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x257 = INT8_MIN;
	int64_t x259 = -2292084LL;

    t57 = (x257^((x258+x259)+x260));

    if (t57 != 2308818LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint64_t x262 = 65176493915017LLU;
	static uint64_t x264 = 3546LLU;
	volatile uint64_t t58 = 25188637LLU;

    t58 = (x261^((x262+x263)+x264));

    if (t58 != 65176493918621LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint16_t x265 = 8886U;
	uint16_t x267 = UINT16_MAX;
	uint32_t x268 = 6128U;

    t59 = (x265^((x266+x267)+x268));

    if (t59 != 79192U) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint64_t x271 = UINT64_MAX;
	int64_t x272 = INT64_MIN;
	uint64_t t60 = 1110734LLU;

    t60 = (x269^((x270+x271)+x272));

    if (t60 != 9223372036854808574LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x277 = 0;
	uint64_t x278 = 17LLU;
	int16_t x279 = INT16_MIN;
	static uint64_t t61 = 19492985401829LLU;

    t61 = (x277^((x278+x279)+x280));

    if (t61 != 18446744071562035217LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static int32_t x281 = -184135;
	int8_t x282 = INT8_MAX;
	volatile uint16_t x283 = UINT16_MAX;
	static int16_t x284 = INT16_MIN;
	volatile int32_t t62 = 1;

    t62 = (x281^((x282+x283)+x284));

    if (t62 != -151353) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint32_t x286 = UINT32_MAX;
	static uint32_t x287 = 5U;
	static volatile uint64_t t63 = 138025938240168LLU;

    t63 = (x285^((x286+x287)+x288));

    if (t63 != 4159372325LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x290 = 0U;
	int32_t x292 = INT32_MIN;

    t64 = (x289^((x290+x291)+x292));

    if (t64 != 18446744071562066890LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x294 = -3;
	uint8_t x296 = 1U;

    t65 = (x293^((x294+x295)+x296));

    if (t65 != 2U) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x297 = -1;
	uint64_t x299 = 2390915177727LLU;
	volatile uint64_t x300 = UINT64_MAX;
	volatile uint64_t t66 = 36350273464LLU;

    t66 = (x297^((x298+x299)+x300));

    if (t66 != 9223369645939598081LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x309 = INT16_MIN;
	volatile int16_t x310 = -1;
	int8_t x311 = INT8_MIN;
	int32_t t67 = 20337;

    t67 = (x309^((x310+x311)+x312));

    if (t67 != -32898) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x313 = INT32_MAX;
	int8_t x315 = INT8_MIN;
	uint64_t x316 = 18302288545LLU;
	uint64_t t68 = 4LLU;

    t68 = (x313^((x314+x315)+x316));

    if (t68 != 18204933642LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x317 = INT8_MAX;
	volatile int32_t x318 = INT32_MIN;
	static uint32_t x319 = 603915U;
	static int64_t x320 = 9538849234626305LL;
	int64_t t69 = 222LL;

    t69 = (x317^((x318+x319)+x320));

    if (t69 != 9538851382713971LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x321 = -3160;
	int64_t x322 = 3063526130209LL;
	int32_t x324 = 104293880;

    t70 = (x321^((x322+x323)+x324));

    if (t70 != -3063630423248LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x326 = 1U;
	uint16_t x327 = UINT16_MAX;
	uint32_t t71 = 273565U;

    t71 = (x325^((x326+x327)+x328));

    if (t71 != 4294901698U) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x329 = 6268;
	uint32_t x330 = UINT32_MAX;
	static int32_t x331 = INT32_MIN;
	int32_t x332 = -1;
	volatile uint32_t t72 = 144U;

    t72 = (x329^((x330+x331)+x332));

    if (t72 != 2147477378U) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x334 = -88294;
	int8_t x335 = -54;
	uint8_t x336 = UINT8_MAX;
	int32_t t73 = 21;

    t73 = (x333^((x334+x335)+x336));

    if (t73 != -88096) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x337 = UINT16_MAX;
	uint8_t x338 = 5U;
	static int16_t x339 = 15220;

    t74 = (x337^((x338+x339)+x340));

    if (t74 != 50311) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x341 = INT8_MAX;
	uint32_t x342 = UINT32_MAX;
	static int8_t x343 = INT8_MAX;
	int64_t x344 = INT64_MIN;
	static volatile int64_t t75 = -2003028745682LL;

    t75 = (x341^((x342+x343)+x344));

    if (t75 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint8_t x345 = UINT8_MAX;
	volatile uint64_t x346 = 153013LLU;
	int16_t x347 = -1;
	uint16_t x348 = 47U;
	uint64_t t76 = 56753219LLU;

    t76 = (x345^((x346+x347)+x348));

    if (t76 != 152860LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint32_t x349 = UINT32_MAX;
	int16_t x350 = -1;
	uint32_t x351 = UINT32_MAX;
	static uint32_t x352 = 392U;

    t77 = (x349^((x350+x351)+x352));

    if (t77 != 4294966905U) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x353 = INT16_MIN;
	volatile int32_t x354 = -91683;
	static volatile uint16_t x355 = UINT16_MAX;
	int8_t x356 = INT8_MIN;
	volatile int32_t t78 = 54982;

    t78 = (x353^((x354+x355)+x356));

    if (t78 != 6492) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x357 = INT16_MIN;
	int16_t x358 = INT16_MIN;
	volatile uint16_t x359 = UINT16_MAX;
	int8_t x360 = INT8_MAX;
	volatile int32_t t79 = -4025;

    t79 = (x357^((x358+x359)+x360));

    if (t79 != -65410) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x369 = -86;
	uint64_t x370 = UINT64_MAX;
	static volatile int32_t x371 = INT32_MIN;
	int32_t x372 = -1;
	static volatile uint64_t t80 = 354708105LLU;

    t80 = (x369^((x370+x371)+x372));

    if (t80 != 2147483732LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x373 = INT32_MIN;
	static volatile int32_t x374 = INT32_MIN;
	int32_t x375 = INT32_MAX;
	volatile int32_t x376 = 218957;

    t81 = (x373^((x374+x375)+x376));

    if (t81 != -2147264692) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x377 = -1;
	int32_t x378 = INT32_MIN;
	volatile uint32_t x379 = UINT32_MAX;
	uint32_t t82 = 119153U;

    t82 = (x377^((x378+x379)+x380));

    if (t82 != 2147291381U) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x385 = 1LL;
	uint16_t x386 = 685U;
	uint32_t x387 = 900484U;
	uint16_t x388 = UINT16_MAX;
	int64_t t83 = 3941956798LL;

    t83 = (x385^((x386+x387)+x388));

    if (t83 != 966705LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x391 = INT64_MAX;
	volatile uint8_t x392 = 0U;
	uint64_t t84 = 203329350371LLU;

    t84 = (x389^((x390+x391)+x392));

    if (t84 != 9223372010355781841LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x393 = 8U;
	volatile uint32_t x394 = 102U;
	int64_t x395 = INT64_MIN;
	volatile uint32_t x396 = 212U;
	volatile int64_t t85 = 4108LL;

    t85 = (x393^((x394+x395)+x396));

    if (t85 != -9223372036854775502LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile uint64_t x397 = 2702739065LLU;
	volatile uint16_t x398 = UINT16_MAX;
	uint32_t x399 = 5U;
	uint64_t x400 = UINT64_MAX;
	volatile uint64_t t86 = 6111519651LLU;

    t86 = (x397^((x398+x399)+x400));

    if (t86 != 2702804602LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x405 = -1;
	uint32_t x407 = 158U;
	static volatile int32_t x408 = INT32_MIN;
	static uint32_t t87 = 10333U;

    t87 = (x405^((x406+x407)+x408));

    if (t87 != 2147433777U) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x409 = 46;
	uint16_t x411 = 5291U;
	static int64_t x412 = INT64_MIN;
	int64_t t88 = 394294005522791LL;

    t88 = (x409^((x410+x411)+x412));

    if (t88 != -9223372036854770683LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x415 = INT16_MAX;
	uint32_t x416 = UINT32_MAX;

    t89 = (x413^((x414+x415)+x416));

    if (t89 != 32715U) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x418 = -15082;
	int16_t x420 = INT16_MIN;

    t90 = (x417^((x418+x419)+x420));

    if (t90 != 50445) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x421 = INT64_MIN;
	int64_t x422 = -1706951LL;
	volatile int64_t x424 = -226415003LL;

    t91 = (x421^((x422+x423)+x424));

    if (t91 != 9223372036626653872LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x425 = UINT32_MAX;
	volatile uint32_t x426 = 6656U;
	static int16_t x428 = -3;
	static uint32_t t92 = 148U;

    t92 = (x425^((x426+x427)+x428));

    if (t92 != 4294960633U) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint64_t x429 = 2140LLU;
	uint8_t x430 = 3U;
	static int64_t x431 = -1LL;
	int64_t x432 = INT64_MIN;
	static uint64_t t93 = 55526LLU;

    t93 = (x429^((x430+x431)+x432));

    if (t93 != 9223372036854777950LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x433 = 7U;
	static uint8_t x434 = UINT8_MAX;
	uint64_t x436 = UINT64_MAX;
	static volatile uint64_t t94 = 64446852108693673LLU;

    t94 = (x433^((x434+x435)+x436));

    if (t94 != 250LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int8_t x437 = -1;
	uint8_t x439 = 1U;
	uint16_t x440 = 657U;

    t95 = (x437^((x438+x439)+x440));

    if (t95 != 18446744073709550958LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x441 = INT8_MAX;
	int16_t x442 = INT16_MIN;
	int64_t x443 = INT64_MAX;
	int64_t t96 = -47732867035120780LL;

    t96 = (x441^((x442+x443)+x444));

    if (t96 != 9223372036686831747LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x446 = INT8_MIN;
	int64_t x447 = 17997LL;
	uint16_t x448 = UINT16_MAX;

    t97 = (x445^((x446+x447)+x448));

    if (t97 != -2147400244LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x449 = -4;
	uint64_t x450 = 23639LLU;
	int16_t x452 = INT16_MIN;
	uint64_t t98 = 1431719693LLU;

    t98 = (x449^((x450+x451)+x452));

    if (t98 != 18446744073666092690LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x454 = -1932740089502455LL;
	int32_t x456 = 4042293;
	int64_t t99 = -53978LL;

    t99 = (x453^((x454+x455)+x456));

    if (t99 != 1932740085427389LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x457 = -1;
	static uint16_t x458 = 21286U;
	volatile int8_t x459 = -32;
	int32_t x460 = 10443980;
	volatile int32_t t100 = 237;

    t100 = (x457^((x458+x459)+x460));

    if (t100 != -10465235) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x461 = INT32_MAX;
	static uint8_t x464 = UINT8_MAX;
	volatile uint64_t t101 = 12378LLU;

    t101 = (x461^((x462+x463)+x464));

    if (t101 != 7756186123734407LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint64_t x465 = 133811435LLU;
	uint32_t x466 = UINT32_MAX;
	static volatile int16_t x467 = INT16_MIN;
	volatile int16_t x468 = -1;
	uint64_t t102 = 34590249LLU;

    t102 = (x465^((x466+x467)+x468));

    if (t102 != 4161188629LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint16_t x469 = UINT16_MAX;
	static uint32_t x470 = 84U;
	int16_t x471 = -1;
	uint64_t x472 = 3598346522905876LLU;
	volatile uint64_t t103 = 5039199615543360LLU;

    t103 = (x469^((x470+x471)+x472));

    if (t103 != 3598346522866328LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x481 = -1;
	int64_t x483 = INT64_MIN;
	int32_t x484 = 1;

    t104 = (x481^((x482+x483)+x484));

    if (t104 != 9223372036854448007LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static int32_t x490 = 31;
	static uint64_t t105 = 701926004LLU;

    t105 = (x489^((x490+x491)+x492));

    if (t105 != 18446744073709486109LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x493 = -6978932856297LL;
	static volatile int8_t x494 = -1;
	int32_t x495 = -609640;
	volatile int64_t t106 = -119337825863914LL;

    t106 = (x493^((x494+x495)+x496));

    if (t106 != 6978933430437LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x500 = INT16_MAX;

    t107 = (x497^((x498+x499)+x500));

    if (t107 != -9223372036854743148LL) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x501 = 224;
	volatile int16_t x502 = INT16_MIN;
	static uint32_t x503 = 99764U;
	volatile uint32_t t108 = 13588608U;

    t108 = (x501^((x502+x503)+x504));

    if (t108 != 66899U) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x506 = INT16_MIN;
	uint32_t x507 = 244U;
	static int8_t x508 = INT8_MIN;
	static volatile uint32_t t109 = 27U;

    t109 = (x505^((x506+x507)+x508));

    if (t109 != 2147516299U) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x509 = INT64_MIN;
	volatile int32_t x510 = INT32_MIN;
	uint8_t x511 = UINT8_MAX;
	uint64_t t110 = 460050LLU;

    t110 = (x509^((x510+x511)+x512));

    if (t110 != 9689213494599890961LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x513 = -1;
	int64_t x514 = -283936287392880445LL;
	volatile int16_t x515 = 229;
	static volatile int16_t x516 = INT16_MAX;
	static volatile int64_t t111 = 522279635790LL;

    t111 = (x513^((x514+x515)+x516));

    if (t111 != 283936287392847448LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x518 = -1304662019LL;
	static int16_t x519 = INT16_MIN;
	int16_t x520 = 1219;
	volatile int64_t t112 = 516063985280671LL;

    t112 = (x517^((x518+x519)+x520));

    if (t112 != -1304896345LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x521 = 16522834827859368LLU;
	uint16_t x524 = 6U;
	volatile uint64_t t113 = 968662261323232645LLU;

    t113 = (x521^((x522+x523)+x524));

    if (t113 != 16522834827859242LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x525 = INT8_MIN;
	uint8_t x526 = UINT8_MAX;
	int8_t x527 = INT8_MIN;
	uint8_t x528 = 7U;
	static volatile int32_t t114 = -5;

    t114 = (x525^((x526+x527)+x528));

    if (t114 != -250) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x529 = INT16_MIN;
	int8_t x530 = -38;
	int8_t x531 = INT8_MIN;
	static int16_t x532 = -1;
	volatile int32_t t115 = -61482;

    t115 = (x529^((x530+x531)+x532));

    if (t115 != 32601) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint16_t x533 = 116U;
	int64_t x534 = 1LL;
	int32_t x535 = -1;
	int32_t x536 = -1;
	volatile int64_t t116 = -150720512LL;

    t116 = (x533^((x534+x535)+x536));

    if (t116 != -117LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x541 = INT8_MIN;
	int8_t x542 = INT8_MIN;
	int64_t x543 = -43576652198200315LL;
	int32_t x544 = 965153808;
	int64_t t117 = 65139LL;

    t117 = (x541^((x542+x543)+x544));

    if (t117 != 43576651233046549LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x546 = -24212504300192LL;
	int32_t x547 = 6;
	uint32_t x548 = 6U;
	int64_t t118 = -715351249544520LL;

    t118 = (x545^((x546+x547)+x548));

    if (t118 != -24204066238045LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x550 = UINT64_MAX;
	int16_t x552 = -2275;
	uint64_t t119 = 143LLU;

    t119 = (x549^((x550+x551)+x552));

    if (t119 != 9223372036854810851LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint16_t x557 = UINT16_MAX;
	volatile int8_t x558 = INT8_MAX;
	int64_t x559 = -1LL;
	static volatile uint32_t x560 = 2123U;
	volatile int64_t t120 = -3309384425632613LL;

    t120 = (x557^((x558+x559)+x560));

    if (t120 != 63286LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x561 = INT32_MAX;
	int64_t x562 = INT64_MAX;
	static int8_t x563 = -8;

    t121 = (x561^((x562+x563)+x564));

    if (t121 != 9223372032559808520LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x565 = INT16_MIN;
	int16_t x566 = -1;
	int16_t x567 = INT16_MAX;
	int16_t x568 = 663;
	int32_t t122 = 157492858;

    t122 = (x565^((x566+x567)+x568));

    if (t122 != -64875) { NG(); } else { ; }
	
}

void f123(void) {
    	static int16_t x573 = INT16_MAX;
	int16_t x574 = 160;
	int64_t x575 = 14937601321941832LL;

    t123 = (x573^((x574+x575)+x576));

    if (t123 != 14937601321943960LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint8_t x577 = 1U;
	static int32_t x578 = 45395577;
	static int32_t x579 = -27;
	int32_t x580 = INT32_MIN;
	volatile int32_t t124 = 76;

    t124 = (x577^((x578+x579)+x580));

    if (t124 != -2102088097) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x582 = 1;
	uint16_t x583 = UINT16_MAX;
	volatile uint64_t t125 = 14758656717990LLU;

    t125 = (x581^((x582+x583)+x584));

    if (t125 != 6973087105LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x585 = INT16_MAX;
	int64_t x586 = INT64_MIN;
	static int32_t x587 = INT32_MAX;
	int8_t x588 = 1;
	static volatile int64_t t126 = 4773387997793LL;

    t126 = (x585^((x586+x587)+x588));

    if (t126 != -9223372034707259393LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x589 = UINT8_MAX;
	int8_t x590 = -1;
	static volatile uint8_t x591 = 20U;
	int8_t x592 = -1;
	volatile int32_t t127 = -388828;

    t127 = (x589^((x590+x591)+x592));

    if (t127 != 237) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int8_t x593 = 1;
	volatile uint8_t x594 = 1U;
	int16_t x595 = INT16_MIN;
	uint8_t x596 = UINT8_MAX;
	int32_t t128 = 251;

    t128 = (x593^((x594+x595)+x596));

    if (t128 != -32511) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x597 = -1;
	volatile int64_t x598 = -750296LL;
	int8_t x599 = INT8_MAX;
	static int64_t x600 = -1LL;
	volatile int64_t t129 = -243989279499139LL;

    t129 = (x597^((x598+x599)+x600));

    if (t129 != 750169LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x601 = -1LL;
	int64_t x603 = INT64_MIN;
	int64_t x604 = 6080660631900407LL;
	static int64_t t130 = -330535265540LL;

    t130 = (x601^((x602+x603)+x604));

    if (t130 != 9217291376222875400LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x605 = INT64_MAX;
	volatile uint64_t x606 = UINT64_MAX;
	int16_t x608 = INT16_MIN;

    t131 = (x605^((x606+x607)+x608));

    if (t131 != 9223372036854808576LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x609 = 18002;
	volatile int32_t x610 = INT32_MIN;
	static volatile uint16_t x611 = 1U;
	int32_t x612 = -1;
	volatile int32_t t132 = -466;

    t132 = (x609^((x610+x611)+x612));

    if (t132 != -2147465646) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x614 = 2LL;
	static int32_t x615 = -1;
	static volatile int64_t t133 = 93LL;

    t133 = (x613^((x614+x615)+x616));

    if (t133 != -31723LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x617 = -1418;
	volatile int64_t x618 = -1172575LL;
	volatile int8_t x619 = -31;
	volatile int64_t t134 = 11840LL;

    t134 = (x617^((x618+x619)+x620));

    if (t134 != 1171959LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x621 = 104U;
	static int32_t x624 = INT32_MAX;

    t135 = (x621^((x622+x623)+x624));

    if (t135 != -83LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x629 = -1;
	int64_t x631 = 0LL;
	uint8_t x632 = 13U;

    t136 = (x629^((x630+x631)+x632));

    if (t136 != 114LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x633 = INT32_MIN;
	uint8_t x635 = 64U;
	static int64_t x636 = 55771813LL;

    t137 = (x633^((x634+x635)+x636));

    if (t137 != 55771877LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile int8_t x641 = -18;
	static volatile uint32_t x642 = 64326091U;
	volatile int64_t x644 = -1987140746635214LL;
	int64_t t138 = -84LL;

    t138 = (x641^((x642+x643)+x644));

    if (t138 != 1987140682309109LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x650 = -1LL;
	int8_t x651 = INT8_MIN;
	int16_t x652 = INT16_MIN;
	static int64_t t139 = 366938955LL;

    t139 = (x649^((x650+x651)+x652));

    if (t139 != 32896LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x653 = INT32_MIN;
	volatile int64_t x654 = -460366361409270LL;
	int32_t x655 = INT32_MIN;
	uint32_t x656 = 14U;
	volatile int64_t t140 = 117614219625210LL;

    t140 = (x653^((x654+x655)+x656));

    if (t140 != 460367252670744LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x657 = 230U;
	uint8_t x658 = UINT8_MAX;
	volatile int16_t x659 = INT16_MIN;
	uint64_t x660 = 379723877LLU;
	static volatile uint64_t t141 = 38865269290LLU;

    t141 = (x657^((x658+x659)+x660));

    if (t141 != 379691394LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x661 = 0;
	int64_t x662 = INT64_MIN;
	int64_t x663 = INT64_MAX;
	static volatile int16_t x664 = INT16_MAX;
	static volatile int64_t t142 = 83654837LL;

    t142 = (x661^((x662+x663)+x664));

    if (t142 != 32766LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x665 = UINT64_MAX;
	static int32_t x666 = INT32_MIN;
	static uint8_t x667 = 20U;
	static uint16_t x668 = 13U;
	static volatile uint64_t t143 = 598034964LLU;

    t143 = (x665^((x666+x667)+x668));

    if (t143 != 2147483614LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x669 = INT32_MIN;
	int8_t x670 = 1;
	volatile uint8_t x671 = UINT8_MAX;
	volatile uint32_t x672 = UINT32_MAX;
	uint32_t t144 = 13U;

    t144 = (x669^((x670+x671)+x672));

    if (t144 != 2147483903U) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x673 = INT16_MAX;
	int64_t x674 = -1LL;
	uint8_t x675 = 11U;
	int8_t x676 = 0;

    t145 = (x673^((x674+x675)+x676));

    if (t145 != 32757LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x677 = 13U;
	int16_t x678 = INT16_MAX;
	int64_t x679 = -335952628498167398LL;
	uint64_t x680 = UINT64_MAX;
	volatile uint64_t t146 = 711143856654666527LLU;

    t146 = (x677^((x678+x679)+x680));

    if (t146 != 18110791445211416981LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int16_t x682 = INT16_MIN;
	static int8_t x683 = INT8_MIN;
	int64_t x684 = 479836261899461745LL;
	int64_t t147 = 1985580534863689885LL;

    t147 = (x681^((x682+x683)+x684));

    if (t147 != 479836260125514766LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x685 = INT64_MIN;
	uint8_t x687 = UINT8_MAX;
	int16_t x688 = -1;
	static volatile int64_t t148 = -1LL;

    t148 = (x685^((x686+x687)+x688));

    if (t148 != -9223372036854775555LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x689 = -1LL;
	uint8_t x690 = UINT8_MAX;
	volatile uint32_t x692 = UINT32_MAX;
	static volatile int64_t t149 = 6390050939945371LL;

    t149 = (x689^((x690+x691)+x692));

    if (t149 != -269LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint8_t x702 = UINT8_MAX;
	volatile int64_t x703 = -1LL;
	volatile int64_t t150 = 57795LL;

    t150 = (x701^((x702+x703)+x704));

    if (t150 != 32638LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x705 = 0U;
	uint8_t x706 = 1U;
	uint16_t x707 = 434U;
	uint8_t x708 = 6U;
	volatile int32_t t151 = 12440;

    t151 = (x705^((x706+x707)+x708));

    if (t151 != 441) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x709 = -1LL;
	uint8_t x710 = UINT8_MAX;
	volatile int16_t x711 = -1;
	static volatile int64_t t152 = 1LL;

    t152 = (x709^((x710+x711)+x712));

    if (t152 != 9223372036854775553LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x713 = INT64_MIN;
	uint32_t x714 = 81714516U;
	volatile uint64_t t153 = 1LLU;

    t153 = (x713^((x714+x715)+x716));

    if (t153 != 9223372034789006675LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x717 = UINT32_MAX;
	uint32_t x718 = UINT32_MAX;
	static int32_t x720 = -1;
	volatile int64_t t154 = 486LL;

    t154 = (x717^((x718+x719)+x720));

    if (t154 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x722 = UINT64_MAX;
	static volatile int16_t x723 = -1;
	static int64_t x724 = -1LL;
	uint64_t t155 = 62131087170970013LLU;

    t155 = (x721^((x722+x723)+x724));

    if (t155 != 2LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x726 = INT16_MAX;
	uint32_t x727 = 3U;
	int64_t x728 = -1LL;
	int64_t t156 = 89454748523LL;

    t156 = (x725^((x726+x727)+x728));

    if (t156 != -32895LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x729 = -1;
	volatile uint32_t x730 = UINT32_MAX;
	static int32_t x732 = INT32_MIN;
	volatile uint32_t t157 = 6090U;

    t157 = (x729^((x730+x731)+x732));

    if (t157 != 2147483634U) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int8_t x733 = -1;
	static int64_t x735 = 287997LL;
	uint64_t x736 = UINT64_MAX;
	uint64_t t158 = 2972124411732006378LLU;

    t158 = (x733^((x734+x735)+x736));

    if (t158 != 18446744073709263620LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x741 = 846754U;
	volatile int64_t x742 = -216978144LL;
	volatile uint16_t x744 = UINT16_MAX;
	static volatile int64_t t159 = -4090938821567598LL;

    t159 = (x741^((x742+x743)+x744));

    if (t159 != -216086723LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x745 = INT32_MIN;
	uint16_t x746 = 0U;
	int64_t x747 = -1LL;
	volatile int16_t x748 = INT16_MIN;
	int64_t t160 = 52433554624044539LL;

    t160 = (x745^((x746+x747)+x748));

    if (t160 != 2147450879LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x749 = INT16_MAX;
	int8_t x750 = -2;
	int8_t x751 = INT8_MIN;

    t161 = (x749^((x750+x751)+x752));

    if (t161 != -32642) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile uint16_t x757 = UINT16_MAX;
	volatile int64_t x758 = -2428LL;
	volatile uint8_t x760 = 29U;
	int64_t t162 = 32LL;

    t162 = (x757^((x758+x759)+x760));

    if (t162 != -63137LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x761 = -1;
	int64_t x762 = 1939348162LL;
	uint16_t x763 = 83U;
	int16_t x764 = INT16_MAX;
	volatile int64_t t163 = 11251026813LL;

    t163 = (x761^((x762+x763)+x764));

    if (t163 != -1939381013LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x765 = -1;
	int32_t x766 = 791665;
	int16_t x767 = INT16_MIN;
	uint8_t x768 = UINT8_MAX;
	static int32_t t164 = 800146;

    t164 = (x765^((x766+x767)+x768));

    if (t164 != -759153) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x769 = INT8_MAX;
	int32_t x770 = INT32_MAX;
	int32_t x771 = -1;
	uint64_t x772 = 1486023460497LLU;
	volatile uint64_t t165 = 1LLU;

    t165 = (x769^((x770+x771)+x772));

    if (t165 != 1488170944240LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x773 = INT32_MAX;
	static int8_t x775 = 24;
	int8_t x776 = 0;
	int32_t t166 = 1;

    t166 = (x773^((x774+x775)+x776));

    if (t166 != 2147483579) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint8_t x777 = UINT8_MAX;
	uint8_t x778 = 111U;
	int64_t t167 = 973006225166124469LL;

    t167 = (x777^((x778+x779)+x780));

    if (t167 != -9223372036854775653LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x781 = INT16_MIN;
	int64_t x782 = INT64_MIN;
	int64_t x784 = INT64_MIN;
	uint64_t t168 = 218LLU;

    t168 = (x781^((x782+x783)+x784));

    if (t168 != 18107009411052673015LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x786 = -1LL;
	volatile int32_t x787 = INT32_MIN;
	uint32_t x788 = 7514U;

    t169 = (x785^((x786+x787)+x788));

    if (t169 != 2147476134LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x791 = INT64_MIN;
	int16_t x792 = 0;
	int64_t t170 = 3879366397080LL;

    t170 = (x789^((x790+x791)+x792));

    if (t170 != -9223372036852834917LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x794 = INT64_MIN;
	int8_t x796 = -1;
	int64_t t171 = -1473985481LL;

    t171 = (x793^((x794+x795)+x796));

    if (t171 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x797 = INT16_MIN;
	volatile int64_t x798 = INT64_MAX;
	volatile int8_t x799 = INT8_MIN;

    t172 = (x797^((x798+x799)+x800));

    if (t172 != -9223372036854743170LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x801 = INT32_MIN;
	uint16_t x802 = UINT16_MAX;
	int16_t x803 = -1;
	volatile int32_t t173 = -32572;

    t173 = (x801^((x802+x803)+x804));

    if (t173 != 2135599609) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x809 = INT64_MIN;
	uint64_t x810 = 2285468045646221574LLU;
	volatile int8_t x811 = INT8_MIN;
	int32_t x812 = INT32_MAX;
	uint64_t t174 = 1378LLU;

    t174 = (x809^((x810+x811)+x812));

    if (t174 != 11508840084648480901LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x813 = -1;
	static int16_t x814 = -1;
	int64_t x816 = INT64_MIN;
	int64_t t175 = -76071970LL;

    t175 = (x813^((x814+x815)+x816));

    if (t175 != 9223372036780070343LL) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint16_t x817 = UINT16_MAX;
	uint8_t x818 = 3U;
	volatile uint64_t x819 = 36749LLU;
	uint64_t t176 = 97168828430LLU;

    t176 = (x817^((x818+x819)+x820));

    if (t176 != 9223372036854804591LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x825 = 125U;
	static int64_t x826 = -1LL;
	uint16_t x827 = 1095U;
	static uint32_t x828 = 51170U;
	int64_t t177 = 2902718LL;

    t177 = (x825^((x826+x827)+x828));

    if (t177 != 52309LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x833 = INT32_MIN;
	uint16_t x834 = UINT16_MAX;
	volatile int16_t x835 = INT16_MIN;
	uint16_t x836 = 204U;
	volatile int32_t t178 = -952;

    t178 = (x833^((x834+x835)+x836));

    if (t178 != -2147450677) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x838 = INT16_MAX;
	volatile int64_t x839 = 3966LL;
	static uint64_t x840 = 27575228192834791LLU;
	uint64_t t179 = 585982839LLU;

    t179 = (x837^((x838+x839)+x840));

    if (t179 != 27575228192871524LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x841 = INT32_MIN;
	int8_t x842 = INT8_MAX;
	int8_t x843 = -1;
	uint32_t x844 = 511147647U;
	uint32_t t180 = 7U;

    t180 = (x841^((x842+x843)+x844));

    if (t180 != 2658631421U) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint16_t x845 = UINT16_MAX;
	volatile int64_t x846 = 8458508451LL;
	int32_t x847 = -763421;
	volatile int8_t x848 = INT8_MIN;
	int64_t t181 = 708813274593551LL;

    t181 = (x845^((x846+x847)+x848));

    if (t181 != 8457686521LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x849 = INT64_MAX;
	volatile int32_t x850 = INT32_MAX;
	static int8_t x851 = -1;
	static int64_t x852 = -44034664084272LL;
	volatile int64_t t182 = -2135104LL;

    t182 = (x849^((x850+x851)+x852));

    if (t182 != -9223328004338175183LL) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x853 = 2806701375748540342LL;
	int64_t x854 = -41513702736LL;
	volatile uint8_t x855 = 102U;
	int64_t t183 = -6386885457562LL;

    t183 = (x853^((x854+x855)+x856));

    if (t183 != -2806701404108804960LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x858 = -1LL;
	static volatile uint32_t x859 = 55U;
	volatile int32_t x860 = INT32_MAX;
	static int64_t t184 = 2061097LL;

    t184 = (x857^((x858+x859)+x860));

    if (t184 != 2147483698LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x866 = 25U;
	uint64_t t185 = 1141373LLU;

    t185 = (x865^((x866+x867)+x868));

    if (t185 != 18446744073709497407LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	static int8_t x870 = INT8_MIN;
	volatile uint16_t x871 = 553U;
	int64_t x872 = 259725456262LL;
	static volatile int64_t t186 = 4027556812LL;

    t186 = (x869^((x870+x871)+x872));

    if (t186 != 259965586128LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x873 = INT8_MAX;
	uint16_t x874 = UINT16_MAX;
	uint8_t x875 = 51U;
	int64_t x876 = -1LL;
	static volatile int64_t t187 = 846829833828434LL;

    t187 = (x873^((x874+x875)+x876));

    if (t187 != 65614LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x877 = UINT8_MAX;
	static uint64_t x878 = UINT64_MAX;
	static int64_t x879 = INT64_MIN;
	uint8_t x880 = 0U;
	uint64_t t188 = 28994719435346811LLU;

    t188 = (x877^((x878+x879)+x880));

    if (t188 != 9223372036854775552LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x885 = INT8_MIN;
	volatile int8_t x886 = -1;
	int64_t x887 = -27LL;
	volatile uint64_t t189 = 20358LLU;

    t189 = (x885^((x886+x887)+x888));

    if (t189 != 18446744071343299754LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x889 = -1;
	static volatile int64_t x890 = 27LL;
	int32_t x891 = INT32_MIN;
	int8_t x892 = -1;
	int64_t t190 = 0LL;

    t190 = (x889^((x890+x891)+x892));

    if (t190 != 2147483621LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x893 = 7375U;
	volatile int16_t x894 = INT16_MIN;
	uint64_t x895 = 216344759890LLU;

    t191 = (x893^((x894+x895)+x896));

    if (t191 != 216344900527LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x898 = INT16_MIN;
	uint64_t x899 = 1329081508008611LLU;
	uint64_t t192 = 787827820930LLU;

    t192 = (x897^((x898+x899)+x900));

    if (t192 != 1329081507978865LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x901 = 1;
	int8_t x903 = 2;
	static volatile int32_t t193 = INT32_MIN;

    t193 = (x901^((x902+x903)+x904));

    if (t193 != INT32_MIN) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint32_t x905 = UINT32_MAX;
	int64_t x907 = INT64_MAX;
	volatile int8_t x908 = INT8_MIN;
	volatile int64_t t194 = -69298089403535LL;

    t194 = (x905^((x906+x907)+x908));

    if (t194 != 9223372034707292288LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x909 = INT16_MIN;
	static uint64_t x910 = 303019485611972853LLU;
	static int16_t x911 = 1229;
	uint64_t t195 = 5LLU;

    t195 = (x909^((x910+x911)+x912));

    if (t195 != 18143724588098372467LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint8_t x913 = UINT8_MAX;
	static int64_t x915 = INT64_MAX;

    t196 = (x913^((x914+x915)+x916));

    if (t196 != 9227017469969004579LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x917 = -1;
	volatile int16_t x918 = 123;
	volatile uint64_t x919 = 79839905202LLU;
	uint64_t x920 = UINT64_MAX;

    t197 = (x917^((x918+x919)+x920));

    if (t197 != 18446743993869646291LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x921 = INT64_MIN;
	uint32_t x922 = UINT32_MAX;
	volatile int8_t x923 = INT8_MAX;
	volatile int64_t t198 = -44518651711967933LL;

    t198 = (x921^((x922+x923)+x924));

    if (t198 != -9223372036854775683LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint32_t x926 = UINT32_MAX;
	int32_t x927 = INT32_MIN;
	volatile uint32_t t199 = 209U;

    t199 = (x925^((x926+x927)+x928));

    if (t199 != 2147516415U) { NG(); } else { ; }
	
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

