
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

int64_t x1 = INT64_MIN;
int8_t x3 = INT8_MIN;
volatile int8_t x4 = INT8_MAX;
static int16_t x15 = -1;
uint8_t x18 = 3U;
uint16_t x21 = 5937U;
uint16_t x28 = UINT16_MAX;
int8_t x36 = INT8_MAX;
volatile int32_t x42 = INT32_MIN;
volatile int8_t x43 = -1;
uint64_t x57 = 141993LLU;
int16_t x58 = 1;
int32_t x61 = INT32_MIN;
uint32_t x62 = UINT32_MAX;
int16_t x68 = -1;
uint8_t x71 = 47U;
int32_t x90 = INT32_MIN;
volatile int16_t x93 = INT16_MIN;
volatile int32_t x94 = INT32_MIN;
static int32_t t23 = 1039436;
volatile int64_t x103 = -352LL;
int16_t x112 = -15;
volatile int32_t t28 = -37;
int32_t x121 = INT32_MIN;
int32_t t30 = INT32_MAX;
int64_t x126 = -1LL;
static uint32_t x131 = 7477U;
static int8_t x132 = -1;
static int16_t x133 = 15;
volatile int32_t x143 = -1;
int8_t x147 = INT8_MIN;
int16_t x149 = -1;
int32_t t37 = -49;
int8_t x153 = -1;
int32_t x161 = INT32_MIN;
int16_t x163 = INT16_MIN;
uint16_t x164 = UINT16_MAX;
static int32_t x165 = 21578266;
int64_t x167 = INT64_MIN;
volatile int32_t x183 = INT32_MIN;
volatile int64_t t45 = 49040386337504LL;
static uint64_t x187 = UINT64_MAX;
volatile uint16_t x201 = 1764U;
volatile int8_t x202 = -1;
uint16_t x204 = UINT16_MAX;
static volatile int64_t x208 = -3012506LL;
uint32_t x210 = UINT32_MAX;
int64_t x218 = INT64_MIN;
static int8_t x220 = 1;
volatile int32_t t54 = -7358;
int32_t t55 = INT32_MAX;
int64_t x227 = INT64_MIN;
volatile int32_t t57 = 8701340;
uint8_t x233 = UINT8_MAX;
int64_t x240 = INT64_MAX;
uint64_t t59 = 984LLU;
volatile int32_t x243 = INT32_MAX;
uint16_t x247 = 239U;
int32_t x251 = INT32_MAX;
static int16_t x252 = 5;
volatile int32_t t62 = 25174;
int32_t t63 = 3409712;
int64_t x261 = 117931LL;
int32_t x262 = -1;
int8_t x265 = INT8_MAX;
volatile int32_t x269 = INT32_MAX;
uint16_t x271 = UINT16_MAX;
static int16_t x272 = INT16_MAX;
int32_t x273 = INT32_MIN;
volatile int16_t x275 = 3;
int32_t t68 = 718;
volatile uint16_t x285 = 11U;
int32_t t71 = 189939268;
volatile int8_t x289 = -1;
static volatile int64_t x293 = INT64_MIN;
int16_t x298 = INT16_MIN;
volatile int32_t t74 = -26592;
uint16_t x304 = UINT16_MAX;
int32_t x306 = INT32_MIN;
int64_t t77 = INT64_MAX;
uint32_t x313 = UINT32_MAX;
int8_t x316 = -1;
int16_t x318 = -1;
volatile uint16_t x319 = 0U;
int32_t t79 = -31852281;
int16_t x324 = 120;
volatile int64_t t80 = -868LL;
static int64_t x326 = INT64_MAX;
int8_t x331 = 1;
static uint16_t x335 = UINT16_MAX;
static volatile int16_t x342 = -1;
static int16_t x344 = -1;
int32_t x345 = 0;
int64_t x352 = -1LL;
int64_t x354 = 6960547LL;
static int32_t x357 = INT32_MIN;
int8_t x364 = INT8_MIN;
volatile uint32_t t90 = 15U;
int16_t x367 = INT16_MIN;
int32_t t91 = -9788606;
volatile int32_t t92 = -321432;
volatile int64_t t93 = 9501018343555LL;
int8_t x377 = 4;
int64_t x382 = -11LL;
int32_t t96 = -490;
static volatile uint32_t x391 = 333U;
int16_t x399 = 5;
volatile int32_t t99 = -1081;
static uint16_t x403 = 5694U;
int16_t x407 = INT16_MAX;
int32_t x412 = INT32_MAX;
static int8_t x414 = -1;
uint64_t x418 = 175710162767745940LLU;
volatile int64_t x420 = -17LL;
int32_t t105 = -154;
int8_t x427 = INT8_MAX;
uint8_t x429 = 0U;
static uint32_t x430 = 20826U;
volatile int32_t t107 = -1;
volatile int64_t t108 = 12787627841910531LL;
int64_t x444 = -572829652947LL;
int16_t x448 = INT16_MIN;
uint8_t x457 = 22U;
static uint16_t x460 = 315U;
int32_t t114 = -23721665;
static uint32_t x461 = 20045U;
uint8_t x464 = 34U;
static volatile int8_t x465 = INT8_MAX;
volatile int16_t x469 = -1;
uint8_t x474 = 0U;
uint64_t t118 = 239609294665496LLU;
volatile uint8_t x478 = 27U;
int16_t x479 = -6469;
volatile int16_t x483 = INT16_MIN;
static uint32_t x484 = UINT32_MAX;
uint8_t x485 = 13U;
int16_t x488 = INT16_MIN;
volatile uint32_t t123 = 32422U;
volatile uint16_t x497 = 0U;
int8_t x499 = INT8_MIN;
int32_t x504 = -1;
static uint8_t x512 = UINT8_MAX;
uint32_t x513 = UINT32_MAX;
int32_t x514 = INT32_MIN;
int32_t x515 = 161;
volatile int32_t t131 = 678;
static uint32_t x529 = UINT32_MAX;
int64_t x531 = 701LL;
static uint8_t x535 = 2U;
int8_t x538 = 1;
uint64_t x543 = 69LLU;
uint16_t x548 = 1938U;
int64_t x555 = INT64_MIN;
int8_t x558 = INT8_MAX;
int8_t x561 = INT8_MIN;
int32_t x572 = -7;
uint64_t x576 = UINT64_MAX;
uint64_t x583 = UINT64_MAX;
uint16_t x596 = UINT16_MAX;
uint16_t x599 = 1U;
static volatile int64_t x601 = INT64_MIN;
uint8_t x606 = 11U;
volatile int16_t x608 = -1;
int8_t x610 = INT8_MIN;
int8_t x614 = INT8_MIN;
int8_t x618 = -7;
uint64_t x620 = 2LLU;
static volatile int8_t x622 = INT8_MAX;
uint8_t x624 = UINT8_MAX;
volatile uint8_t x631 = 113U;
int64_t x632 = INT64_MIN;
int16_t x634 = INT16_MIN;
uint64_t x638 = UINT64_MAX;
int8_t x646 = -1;
volatile int32_t x648 = -1;
int32_t x653 = -14239480;
int32_t x662 = 240208307;
int8_t x668 = INT8_MAX;
volatile int64_t t166 = 83092491371441655LL;
static int32_t x669 = INT32_MAX;
int8_t x670 = 3;
static int32_t x683 = INT32_MIN;
static int32_t x690 = -1;
static int16_t x691 = -344;
static uint32_t x694 = 67262U;
static uint64_t x696 = 39343183621LLU;
uint64_t x698 = 2LLU;
int32_t x701 = INT32_MAX;
uint16_t x710 = 88U;
static int16_t x714 = INT16_MAX;
uint32_t x718 = UINT32_MAX;
int32_t t180 = 3;
int8_t x733 = -3;
static int16_t x742 = -105;
int8_t x747 = -1;
static int8_t x751 = INT8_MIN;
static volatile uint64_t t187 = 70999429LLU;
uint32_t x767 = 0U;
volatile uint64_t x774 = 17LLU;
uint16_t x778 = 5U;
int64_t x785 = INT64_MIN;
volatile int8_t x788 = INT8_MIN;
int32_t x794 = -1;
volatile uint16_t x799 = UINT16_MAX;
uint64_t x800 = 26053332LLU;
volatile uint64_t t199 = 8249253391051LLU;


void f0(void) {
    	int8_t x2 = -3;
	volatile int64_t t0 = -253216161797LL;

    t0 = (x1^((x2>x3)^x4));

    if (t0 != -9223372036854775682LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = 453069U;
	static uint8_t x6 = UINT8_MAX;
	uint64_t x7 = UINT64_MAX;
	uint8_t x8 = 1U;
	uint32_t t1 = 507460U;

    t1 = (x5^((x6>x7)^x8));

    if (t1 != 453068U) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MAX;
	volatile int32_t x10 = -279849619;
	uint16_t x11 = UINT16_MAX;
	int64_t x12 = INT64_MAX;
	int64_t t2 = -1272508926LL;

    t2 = (x9^((x10>x11)^x12));

    if (t2 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint8_t x13 = 22U;
	volatile int8_t x14 = INT8_MIN;
	volatile int8_t x16 = 7;
	static volatile int32_t t3 = -1229;

    t3 = (x13^((x14>x15)^x16));

    if (t3 != 17) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x17 = 7U;
	uint8_t x19 = 64U;
	volatile uint64_t x20 = UINT64_MAX;
	uint64_t t4 = 17430917220LLU;

    t4 = (x17^((x18>x19)^x20));

    if (t4 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x22 = -1LL;
	int8_t x23 = INT8_MIN;
	int16_t x24 = INT16_MIN;
	int32_t t5 = -1292220;

    t5 = (x21^((x22>x23)^x24));

    if (t5 != -26832) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x25 = INT32_MIN;
	volatile int16_t x26 = -1;
	int64_t x27 = INT64_MAX;
	static int32_t t6 = -76073;

    t6 = (x25^((x26>x27)^x28));

    if (t6 != -2147418113) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = -1LL;
	static int32_t x30 = -1;
	uint16_t x31 = 13U;
	static uint16_t x32 = 0U;
	volatile int64_t t7 = -105465652LL;

    t7 = (x29^((x30>x31)^x32));

    if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = -1;
	static int32_t x34 = -1;
	int64_t x35 = INT64_MIN;
	int32_t t8 = -2;

    t8 = (x33^((x34>x35)^x36));

    if (t8 != -127) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = -64985815078683LL;
	int16_t x38 = 6;
	int16_t x39 = INT16_MIN;
	uint8_t x40 = 57U;
	volatile int64_t t9 = -13033LL;

    t9 = (x37^((x38>x39)^x40));

    if (t9 != -64985815078691LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = 1;
	uint8_t x44 = UINT8_MAX;
	volatile int32_t t10 = -53520;

    t10 = (x41^((x42>x43)^x44));

    if (t10 != 254) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = -1;
	int16_t x46 = INT16_MIN;
	int32_t x47 = INT32_MIN;
	uint16_t x48 = UINT16_MAX;
	volatile int32_t t11 = 135;

    t11 = (x45^((x46>x47)^x48));

    if (t11 != -65535) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint64_t x49 = UINT64_MAX;
	int8_t x50 = INT8_MAX;
	int32_t x51 = -7113;
	int64_t x52 = INT64_MIN;
	volatile uint64_t t12 = 40394LLU;

    t12 = (x49^((x50>x51)^x52));

    if (t12 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = 10;
	uint16_t x54 = 1U;
	uint64_t x55 = UINT64_MAX;
	int16_t x56 = -6;
	int32_t t13 = 0;

    t13 = (x53^((x54>x55)^x56));

    if (t13 != -16) { NG(); } else { ; }
	
}

void f14(void) {
    	static int32_t x59 = INT32_MIN;
	int32_t x60 = 2319;
	uint64_t t14 = 4231921275039672LLU;

    t14 = (x57^((x58>x59)^x60));

    if (t14 != 140199LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static int16_t x63 = INT16_MAX;
	volatile int16_t x64 = -1;
	volatile int32_t t15 = -204586;

    t15 = (x61^((x62>x63)^x64));

    if (t15 != 2147483646) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x65 = 132434402994748834LL;
	int8_t x66 = -6;
	int64_t x67 = -26896401542313LL;
	static int64_t t16 = -23627176LL;

    t16 = (x65^((x66>x67)^x68));

    if (t16 != -132434402994748836LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = INT16_MAX;
	static int32_t x70 = INT32_MIN;
	int32_t x72 = -1;
	volatile int32_t t17 = -1004912482;

    t17 = (x69^((x70>x71)^x72));

    if (t17 != -32768) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x73 = 87U;
	int32_t x74 = INT32_MIN;
	volatile int32_t x75 = INT32_MIN;
	int8_t x76 = 50;
	volatile int32_t t18 = -277184604;

    t18 = (x73^((x74>x75)^x76));

    if (t18 != 101) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x77 = UINT8_MAX;
	static int32_t x78 = INT32_MIN;
	volatile int64_t x79 = -63595890LL;
	int32_t x80 = 973704960;
	volatile int32_t t19 = -59978;

    t19 = (x77^((x78>x79)^x80));

    if (t19 != 973705215) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint16_t x81 = UINT16_MAX;
	uint64_t x82 = UINT64_MAX;
	static volatile uint16_t x83 = UINT16_MAX;
	volatile int8_t x84 = -1;
	volatile int32_t t20 = -1939122;

    t20 = (x81^((x82>x83)^x84));

    if (t20 != -65535) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint16_t x85 = 1U;
	volatile uint32_t x86 = 476U;
	int64_t x87 = 392422035LL;
	uint64_t x88 = 2984LLU;
	static uint64_t t21 = 653297830196136LLU;

    t21 = (x85^((x86>x87)^x88));

    if (t21 != 2985LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x89 = 58620295649220580LLU;
	volatile int32_t x91 = -1;
	uint8_t x92 = UINT8_MAX;
	uint64_t t22 = 3784256LLU;

    t22 = (x89^((x90>x91)^x92));

    if (t22 != 58620295649220379LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x95 = UINT64_MAX;
	static int16_t x96 = 0;

    t23 = (x93^((x94>x95)^x96));

    if (t23 != -32768) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x97 = 26210U;
	volatile int64_t x98 = INT64_MIN;
	int64_t x99 = -8397222069226LL;
	volatile int64_t x100 = INT64_MAX;
	static int64_t t24 = -14528608893LL;

    t24 = (x97^((x98>x99)^x100));

    if (t24 != 9223372036854749597LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = INT64_MAX;
	uint16_t x102 = 4527U;
	int16_t x104 = 7;
	static volatile int64_t t25 = 7LL;

    t25 = (x101^((x102>x103)^x104));

    if (t25 != 9223372036854775801LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = INT64_MAX;
	int16_t x106 = INT16_MIN;
	uint32_t x107 = UINT32_MAX;
	volatile int16_t x108 = 246;
	int64_t t26 = -66LL;

    t26 = (x105^((x106>x107)^x108));

    if (t26 != 9223372036854775561LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = INT16_MIN;
	int64_t x110 = -1LL;
	int32_t x111 = 388141;
	static volatile int32_t t27 = 6;

    t27 = (x109^((x110>x111)^x112));

    if (t27 != 32753) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x113 = -3;
	static int64_t x114 = INT64_MIN;
	int32_t x115 = 14159;
	int32_t x116 = -1;

    t28 = (x113^((x114>x115)^x116));

    if (t28 != 2) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = -5;
	static int16_t x118 = -1;
	static uint32_t x119 = 639U;
	int16_t x120 = 6307;
	volatile int32_t t29 = 14246578;

    t29 = (x117^((x118>x119)^x120));

    if (t29 != -6311) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x122 = 0;
	int64_t x123 = INT64_MAX;
	int8_t x124 = -1;

    t30 = (x121^((x122>x123)^x124));

    if (t30 != INT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x125 = INT16_MIN;
	uint16_t x127 = 133U;
	int32_t x128 = INT32_MAX;
	static int32_t t31 = 1740;

    t31 = (x125^((x126>x127)^x128));

    if (t31 != -2147450881) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x129 = 11682;
	volatile int64_t x130 = 55LL;
	static volatile int32_t t32 = -611692562;

    t32 = (x129^((x130>x131)^x132));

    if (t32 != -11683) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x134 = UINT16_MAX;
	int64_t x135 = -2877310586LL;
	volatile uint64_t x136 = 109977128753LLU;
	volatile uint64_t t33 = 8813308160LLU;

    t33 = (x133^((x134>x135)^x136));

    if (t33 != 109977128767LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x137 = INT16_MIN;
	uint64_t x138 = 16629014262874020LLU;
	int64_t x139 = INT64_MAX;
	int16_t x140 = -1;
	int32_t t34 = -22830918;

    t34 = (x137^((x138>x139)^x140));

    if (t34 != 32767) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x141 = -1;
	static volatile int64_t x142 = -1LL;
	static int8_t x144 = -13;
	volatile int32_t t35 = -555;

    t35 = (x141^((x142>x143)^x144));

    if (t35 != 12) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x145 = INT16_MIN;
	int16_t x146 = -1;
	uint8_t x148 = UINT8_MAX;
	volatile int32_t t36 = -143326150;

    t36 = (x145^((x146>x147)^x148));

    if (t36 != -32514) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x150 = INT64_MAX;
	uint32_t x151 = UINT32_MAX;
	int8_t x152 = INT8_MIN;

    t37 = (x149^((x150>x151)^x152));

    if (t37 != 126) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int16_t x154 = -4711;
	int16_t x155 = INT16_MIN;
	uint64_t x156 = UINT64_MAX;
	volatile uint64_t t38 = 2244311553803172014LLU;

    t38 = (x153^((x154>x155)^x156));

    if (t38 != 1LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint16_t x157 = 990U;
	volatile int16_t x158 = 56;
	static int16_t x159 = 7765;
	volatile int32_t x160 = INT32_MAX;
	volatile int32_t t39 = 8586;

    t39 = (x157^((x158>x159)^x160));

    if (t39 != 2147482657) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x162 = 6U;
	volatile int32_t t40 = -1;

    t40 = (x161^((x162>x163)^x164));

    if (t40 != -2147418114) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x166 = INT16_MIN;
	int32_t x168 = INT32_MIN;
	volatile int32_t t41 = 4866583;

    t41 = (x165^((x166>x167)^x168));

    if (t41 != -2125905381) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x169 = INT32_MAX;
	static int64_t x170 = -6418LL;
	int32_t x171 = -1;
	int32_t x172 = INT32_MIN;
	volatile int32_t t42 = -236454476;

    t42 = (x169^((x170>x171)^x172));

    if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x173 = -36;
	int64_t x174 = -20099979602290957LL;
	volatile int16_t x175 = INT16_MIN;
	static int64_t x176 = -1LL;
	volatile int64_t t43 = -126LL;

    t43 = (x173^((x174>x175)^x176));

    if (t43 != 35LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x177 = -1;
	int32_t x178 = 58;
	int32_t x179 = INT32_MIN;
	int8_t x180 = INT8_MIN;
	static int32_t t44 = -6430;

    t44 = (x177^((x178>x179)^x180));

    if (t44 != 126) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = INT64_MIN;
	uint16_t x182 = UINT16_MAX;
	int32_t x184 = INT32_MIN;

    t45 = (x181^((x182>x183)^x184));

    if (t45 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x185 = 6;
	volatile int32_t x186 = INT32_MIN;
	int16_t x188 = 0;
	static int32_t t46 = -1;

    t46 = (x185^((x186>x187)^x188));

    if (t46 != 6) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x189 = 29U;
	volatile int16_t x190 = -1;
	uint8_t x191 = UINT8_MAX;
	uint32_t x192 = 29U;
	uint32_t t47 = 1017154U;

    t47 = (x189^((x190>x191)^x192));

    if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile uint16_t x193 = UINT16_MAX;
	int16_t x194 = INT16_MIN;
	int32_t x195 = -4963;
	int16_t x196 = 15437;
	static int32_t t48 = 3659;

    t48 = (x193^((x194>x195)^x196));

    if (t48 != 50098) { NG(); } else { ; }
	
}

void f49(void) {
    	static int8_t x197 = -1;
	static int8_t x198 = 1;
	int32_t x199 = INT32_MAX;
	int64_t x200 = INT64_MAX;
	volatile int64_t t49 = INT64_MIN;

    t49 = (x197^((x198>x199)^x200));

    if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x203 = INT8_MAX;
	int32_t t50 = 115;

    t50 = (x201^((x202>x203)^x204));

    if (t50 != 63771) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x205 = INT8_MIN;
	volatile int64_t x206 = INT64_MIN;
	int8_t x207 = INT8_MIN;
	volatile int64_t t51 = -108601124077LL;

    t51 = (x205^((x206>x207)^x208));

    if (t51 != 3012582LL) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint64_t x209 = UINT64_MAX;
	int16_t x211 = 4859;
	volatile uint32_t x212 = 3689827U;
	volatile uint64_t t52 = 250605085540583LLU;

    t52 = (x209^((x210>x211)^x212));

    if (t52 != 18446744073705861789LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x213 = UINT8_MAX;
	int64_t x214 = -1LL;
	int16_t x215 = -1;
	volatile uint8_t x216 = 55U;
	int32_t t53 = -2586;

    t53 = (x213^((x214>x215)^x216));

    if (t53 != 200) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x217 = 14U;
	static int8_t x219 = INT8_MIN;

    t54 = (x217^((x218>x219)^x220));

    if (t54 != 15) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int32_t x221 = INT32_MIN;
	int32_t x222 = -1;
	static int32_t x223 = 1;
	int32_t x224 = -1;

    t55 = (x221^((x222>x223)^x224));

    if (t55 != INT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x225 = 2U;
	int64_t x226 = -1LL;
	int16_t x228 = INT16_MIN;
	int32_t t56 = 12;

    t56 = (x225^((x226>x227)^x228));

    if (t56 != -32765) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x229 = 0;
	static uint64_t x230 = 1968942393620226LLU;
	volatile uint64_t x231 = 57LLU;
	uint16_t x232 = 2U;

    t57 = (x229^((x230>x231)^x232));

    if (t57 != 3) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x234 = 1;
	int16_t x235 = -5384;
	int16_t x236 = -7;
	int32_t t58 = -232241;

    t58 = (x233^((x234>x235)^x236));

    if (t58 != -249) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x237 = UINT64_MAX;
	volatile uint64_t x238 = UINT64_MAX;
	int16_t x239 = 338;

    t59 = (x237^((x238>x239)^x240));

    if (t59 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x241 = -1LL;
	static volatile uint8_t x242 = 3U;
	int64_t x244 = INT64_MIN;
	volatile int64_t t60 = INT64_MAX;

    t60 = (x241^((x242>x243)^x244));

    if (t60 != INT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x245 = 17U;
	int8_t x246 = -1;
	int8_t x248 = 0;
	int32_t t61 = 1;

    t61 = (x245^((x246>x247)^x248));

    if (t61 != 17) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x249 = 1;
	static uint64_t x250 = UINT64_MAX;

    t62 = (x249^((x250>x251)^x252));

    if (t62 != 5) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x253 = -290;
	static uint32_t x254 = 19U;
	int32_t x255 = INT32_MAX;
	int32_t x256 = INT32_MIN;

    t63 = (x253^((x254>x255)^x256));

    if (t63 != 2147483358) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x257 = -128488360;
	int32_t x258 = -507384161;
	uint64_t x259 = 16681590LLU;
	static volatile uint64_t x260 = 272LLU;
	static volatile uint64_t t64 = 263233LLU;

    t64 = (x257^((x258>x259)^x260));

    if (t64 != 18446744073581063497LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x263 = -14515;
	uint16_t x264 = 7U;
	int64_t t65 = -5387646894304677LL;

    t65 = (x261^((x262>x263)^x264));

    if (t65 != 117933LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x266 = 10765U;
	int16_t x267 = 0;
	int64_t x268 = INT64_MAX;
	volatile int64_t t66 = 53861LL;

    t66 = (x265^((x266>x267)^x268));

    if (t66 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int64_t x270 = 421573570LL;
	int32_t t67 = -1;

    t67 = (x269^((x270>x271)^x272));

    if (t67 != 2147450881) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x274 = -1;
	int16_t x276 = INT16_MAX;

    t68 = (x273^((x274>x275)^x276));

    if (t68 != -2147450881) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x277 = 94U;
	volatile int32_t x278 = -99983;
	int8_t x279 = INT8_MIN;
	static uint32_t x280 = UINT32_MAX;
	volatile uint32_t t69 = 16U;

    t69 = (x277^((x278>x279)^x280));

    if (t69 != 4294967201U) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x281 = -1;
	int8_t x282 = -1;
	uint8_t x283 = 1U;
	int8_t x284 = -23;
	volatile int32_t t70 = 992258866;

    t70 = (x281^((x282>x283)^x284));

    if (t70 != 22) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x286 = -1;
	volatile int16_t x287 = INT16_MIN;
	int16_t x288 = -7604;

    t71 = (x285^((x286>x287)^x288));

    if (t71 != -7610) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x290 = UINT32_MAX;
	uint16_t x291 = 1410U;
	volatile int64_t x292 = INT64_MIN;
	int64_t t72 = -93157497637213LL;

    t72 = (x289^((x290>x291)^x292));

    if (t72 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x294 = -1LL;
	int16_t x295 = INT16_MIN;
	static volatile int64_t x296 = INT64_MIN;
	int64_t t73 = -651762LL;

    t73 = (x293^((x294>x295)^x296));

    if (t73 != 1LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x297 = INT16_MAX;
	volatile int8_t x299 = INT8_MIN;
	int32_t x300 = INT32_MIN;

    t74 = (x297^((x298>x299)^x300));

    if (t74 != -2147450881) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x301 = 1278175U;
	int8_t x302 = INT8_MIN;
	static int16_t x303 = INT16_MIN;
	volatile uint32_t t75 = 35U;

    t75 = (x301^((x302>x303)^x304));

    if (t75 != 1277729U) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x305 = 10953U;
	static volatile uint8_t x307 = UINT8_MAX;
	int32_t x308 = INT32_MAX;
	int32_t t76 = 784;

    t76 = (x305^((x306>x307)^x308));

    if (t76 != 2147472694) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x309 = INT64_MAX;
	int32_t x310 = INT32_MIN;
	static volatile int32_t x311 = INT32_MIN;
	uint16_t x312 = 0U;

    t77 = (x309^((x310>x311)^x312));

    if (t77 != INT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x314 = INT64_MIN;
	int32_t x315 = INT32_MIN;
	volatile uint32_t t78 = 24U;

    t78 = (x313^((x314>x315)^x316));

    if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x317 = INT16_MIN;
	static int16_t x320 = INT16_MIN;

    t79 = (x317^((x318>x319)^x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x321 = 264243184596631LL;
	int8_t x322 = 32;
	volatile uint8_t x323 = UINT8_MAX;

    t80 = (x321^((x322>x323)^x324));

    if (t80 != 264243184596719LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x325 = 5;
	volatile int64_t x327 = INT64_MIN;
	static int32_t x328 = INT32_MIN;
	int32_t t81 = -123124961;

    t81 = (x325^((x326>x327)^x328));

    if (t81 != -2147483644) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint16_t x329 = 2277U;
	static int32_t x330 = 68228084;
	volatile int64_t x332 = -377321286670LL;
	volatile int64_t t82 = 4LL;

    t82 = (x329^((x330>x331)^x332));

    if (t82 != -377321284842LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x333 = 1196U;
	uint16_t x334 = UINT16_MAX;
	static int16_t x336 = INT16_MIN;
	volatile int32_t t83 = 1140408;

    t83 = (x333^((x334>x335)^x336));

    if (t83 != -31572) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x337 = INT32_MIN;
	uint64_t x338 = UINT64_MAX;
	int16_t x339 = INT16_MAX;
	uint8_t x340 = 44U;
	int32_t t84 = -9;

    t84 = (x337^((x338>x339)^x340));

    if (t84 != -2147483603) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = 2588832878990630511LL;
	volatile int16_t x343 = INT16_MAX;
	volatile int64_t t85 = -165766LL;

    t85 = (x341^((x342>x343)^x344));

    if (t85 != -2588832878990630512LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x346 = 1944LL;
	int8_t x347 = INT8_MAX;
	uint8_t x348 = UINT8_MAX;
	int32_t t86 = 2081738;

    t86 = (x345^((x346>x347)^x348));

    if (t86 != 254) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x349 = INT64_MIN;
	int16_t x350 = INT16_MIN;
	int64_t x351 = -616509LL;
	static int64_t t87 = -215447689LL;

    t87 = (x349^((x350>x351)^x352));

    if (t87 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = INT8_MAX;
	int32_t x355 = INT32_MIN;
	uint8_t x356 = UINT8_MAX;
	static int32_t t88 = -697400;

    t88 = (x353^((x354>x355)^x356));

    if (t88 != 129) { NG(); } else { ; }
	
}

void f89(void) {
    	static int8_t x358 = -55;
	int32_t x359 = 1863441;
	int8_t x360 = 1;
	static int32_t t89 = 1361352;

    t89 = (x357^((x358>x359)^x360));

    if (t89 != -2147483647) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x361 = 72939U;
	uint8_t x362 = 29U;
	uint16_t x363 = 0U;

    t90 = (x361^((x362>x363)^x364));

    if (t90 != 4294894442U) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x365 = INT32_MAX;
	static int64_t x366 = -11351LL;
	int32_t x368 = INT32_MIN;

    t91 = (x365^((x366>x367)^x368));

    if (t91 != -2) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x369 = 210060191;
	int8_t x370 = 1;
	uint64_t x371 = 4268775048LLU;
	int32_t x372 = INT32_MAX;

    t92 = (x369^((x370>x371)^x372));

    if (t92 != 1937423456) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x373 = INT64_MIN;
	int8_t x374 = -2;
	int32_t x375 = INT32_MIN;
	volatile int64_t x376 = INT64_MAX;

    t93 = (x373^((x374>x375)^x376));

    if (t93 != -2LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x378 = 1545U;
	volatile int32_t x379 = -1475555;
	static int8_t x380 = INT8_MIN;
	static int32_t t94 = 224812279;

    t94 = (x377^((x378>x379)^x380));

    if (t94 != -123) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint16_t x381 = UINT16_MAX;
	int64_t x383 = INT64_MAX;
	volatile int16_t x384 = INT16_MIN;
	volatile int32_t t95 = -6;

    t95 = (x381^((x382>x383)^x384));

    if (t95 != -32769) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x385 = -1;
	int16_t x386 = INT16_MAX;
	int8_t x387 = INT8_MIN;
	int8_t x388 = INT8_MIN;

    t96 = (x385^((x386>x387)^x388));

    if (t96 != 126) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x389 = INT32_MIN;
	volatile uint32_t x390 = 203U;
	volatile int8_t x392 = 6;
	int32_t t97 = -433396;

    t97 = (x389^((x390>x391)^x392));

    if (t97 != -2147483642) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x393 = INT32_MIN;
	uint32_t x394 = UINT32_MAX;
	int8_t x395 = INT8_MAX;
	int32_t x396 = INT32_MIN;
	volatile int32_t t98 = -15519730;

    t98 = (x393^((x394>x395)^x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x397 = 61U;
	int8_t x398 = INT8_MIN;
	int16_t x400 = INT16_MAX;

    t99 = (x397^((x398>x399)^x400));

    if (t99 != 32706) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = -1;
	static uint32_t x402 = 30440624U;
	int32_t x404 = INT32_MAX;
	volatile int32_t t100 = -52965;

    t100 = (x401^((x402>x403)^x404));

    if (t100 != -2147483647) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x405 = 5U;
	uint32_t x406 = 180U;
	int16_t x408 = INT16_MAX;
	volatile int32_t t101 = -3514722;

    t101 = (x405^((x406>x407)^x408));

    if (t101 != 32762) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x409 = 187;
	static uint64_t x410 = 526119LLU;
	volatile int16_t x411 = INT16_MIN;
	int32_t t102 = 0;

    t102 = (x409^((x410>x411)^x412));

    if (t102 != 2147483460) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x413 = INT16_MIN;
	int8_t x415 = -1;
	int64_t x416 = -1LL;
	static int64_t t103 = 16407307916LL;

    t103 = (x413^((x414>x415)^x416));

    if (t103 != 32767LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x417 = 0;
	uint64_t x419 = 125860001756LLU;
	static volatile int64_t t104 = 2171539516166484667LL;

    t104 = (x417^((x418>x419)^x420));

    if (t104 != -18LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static int16_t x421 = INT16_MIN;
	uint64_t x422 = UINT64_MAX;
	uint64_t x423 = 117971152902146538LLU;
	static int32_t x424 = -391;

    t105 = (x421^((x422>x423)^x424));

    if (t105 != 32376) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x425 = 15LLU;
	uint16_t x426 = 961U;
	uint64_t x428 = 69157904713358953LLU;
	static volatile uint64_t t106 = 38LLU;

    t106 = (x425^((x426>x427)^x428));

    if (t106 != 69157904713358951LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x431 = -46;
	static int32_t x432 = 5;

    t107 = (x429^((x430>x431)^x432));

    if (t107 != 5) { NG(); } else { ; }
	
}

void f108(void) {
    	static int64_t x433 = INT64_MAX;
	volatile uint8_t x434 = 58U;
	static volatile int32_t x435 = INT32_MIN;
	uint32_t x436 = UINT32_MAX;

    t108 = (x433^((x434>x435)^x436));

    if (t108 != 9223372032559808513LL) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x437 = INT8_MIN;
	int8_t x438 = INT8_MIN;
	uint8_t x439 = 30U;
	volatile int8_t x440 = -3;
	int32_t t109 = 26723658;

    t109 = (x437^((x438>x439)^x440));

    if (t109 != 125) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x441 = 1;
	static int32_t x442 = -1;
	static int16_t x443 = -1;
	int64_t t110 = -20LL;

    t110 = (x441^((x442>x443)^x444));

    if (t110 != -572829652948LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x445 = 15U;
	uint64_t x446 = 2016664698LLU;
	int64_t x447 = -433130314308396634LL;
	volatile int32_t t111 = 0;

    t111 = (x445^((x446>x447)^x448));

    if (t111 != -32753) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint16_t x449 = 4059U;
	static uint8_t x450 = UINT8_MAX;
	int32_t x451 = -1;
	volatile int32_t x452 = INT32_MIN;
	int32_t t112 = 54073759;

    t112 = (x449^((x450>x451)^x452));

    if (t112 != -2147479590) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int8_t x453 = INT8_MAX;
	int8_t x454 = -1;
	uint32_t x455 = UINT32_MAX;
	static int8_t x456 = 0;
	int32_t t113 = -26897;

    t113 = (x453^((x454>x455)^x456));

    if (t113 != 127) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x458 = UINT8_MAX;
	uint64_t x459 = UINT64_MAX;

    t114 = (x457^((x458>x459)^x460));

    if (t114 != 301) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int8_t x462 = -1;
	volatile int16_t x463 = 165;
	uint32_t t115 = 257950539U;

    t115 = (x461^((x462>x463)^x464));

    if (t115 != 20079U) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x466 = INT8_MAX;
	int64_t x467 = INT64_MIN;
	static int8_t x468 = -3;
	volatile int32_t t116 = -112024154;

    t116 = (x465^((x466>x467)^x468));

    if (t116 != -125) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x470 = UINT8_MAX;
	static int64_t x471 = -1LL;
	static volatile int16_t x472 = -1;
	static int32_t t117 = -8401;

    t117 = (x469^((x470>x471)^x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint64_t x473 = 13026724946104416LLU;
	static volatile int8_t x475 = -11;
	int64_t x476 = 6382997580572088LL;

    t118 = (x473^((x474>x475)^x476));

    if (t118 != 16020922450032089LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x477 = -1;
	uint16_t x480 = UINT16_MAX;
	volatile int32_t t119 = -2979;

    t119 = (x477^((x478>x479)^x480));

    if (t119 != -65535) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int64_t x481 = INT64_MIN;
	int64_t x482 = -1140396LL;
	static volatile int64_t t120 = -7371230921840623LL;

    t120 = (x481^((x482>x483)^x484));

    if (t120 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x486 = 3482;
	uint32_t x487 = 195U;
	int32_t t121 = 375453;

    t121 = (x485^((x486>x487)^x488));

    if (t121 != -32756) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = 71;
	int64_t x490 = INT64_MAX;
	uint8_t x491 = 46U;
	static uint32_t x492 = 0U;
	volatile uint32_t t122 = 86699765U;

    t122 = (x489^((x490>x491)^x492));

    if (t122 != 70U) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int32_t x493 = 4;
	uint16_t x494 = 3461U;
	volatile uint16_t x495 = UINT16_MAX;
	uint32_t x496 = 196252834U;

    t123 = (x493^((x494>x495)^x496));

    if (t123 != 196252838U) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x498 = INT64_MIN;
	uint8_t x500 = 0U;
	volatile int32_t t124 = 137523;

    t124 = (x497^((x498>x499)^x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x501 = 5603244;
	uint64_t x502 = 1339293711118LLU;
	static uint16_t x503 = UINT16_MAX;
	int32_t t125 = -8;

    t125 = (x501^((x502>x503)^x504));

    if (t125 != -5603246) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x505 = 101;
	int64_t x506 = 29818591869LL;
	int32_t x507 = 5369169;
	uint8_t x508 = UINT8_MAX;
	static volatile int32_t t126 = 28520;

    t126 = (x505^((x506>x507)^x508));

    if (t126 != 155) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x509 = INT16_MAX;
	int32_t x510 = -70612;
	uint32_t x511 = 112252U;
	volatile int32_t t127 = -29297988;

    t127 = (x509^((x510>x511)^x512));

    if (t127 != 32513) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint8_t x516 = 16U;
	volatile uint32_t t128 = 612U;

    t128 = (x513^((x514>x515)^x516));

    if (t128 != 4294967279U) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = INT32_MAX;
	int64_t x518 = INT64_MIN;
	volatile int8_t x519 = -1;
	int8_t x520 = INT8_MAX;
	volatile int32_t t129 = -2875073;

    t129 = (x517^((x518>x519)^x520));

    if (t129 != 2147483520) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x521 = -1;
	static volatile int8_t x522 = INT8_MAX;
	uint8_t x523 = 127U;
	uint64_t x524 = 225054579656LLU;
	volatile uint64_t t130 = 24920600268LLU;

    t130 = (x521^((x522>x523)^x524));

    if (t130 != 18446743848654971959LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x525 = UINT16_MAX;
	int16_t x526 = -1;
	int8_t x527 = INT8_MIN;
	volatile int32_t x528 = 79868;

    t131 = (x525^((x526>x527)^x528));

    if (t131 != 116738) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x530 = -1LL;
	volatile int32_t x532 = 386888490;
	static volatile uint32_t t132 = 7813U;

    t132 = (x529^((x530>x531)^x532));

    if (t132 != 3908078805U) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x533 = UINT32_MAX;
	int32_t x534 = INT32_MIN;
	static int8_t x536 = INT8_MIN;
	volatile uint32_t t133 = 5534U;

    t133 = (x533^((x534>x535)^x536));

    if (t133 != 127U) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint32_t x537 = UINT32_MAX;
	uint32_t x539 = UINT32_MAX;
	uint8_t x540 = UINT8_MAX;
	volatile uint32_t t134 = 0U;

    t134 = (x537^((x538>x539)^x540));

    if (t134 != 4294967040U) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = INT16_MIN;
	int32_t x542 = INT32_MIN;
	int32_t x544 = 90906;
	static volatile int32_t t135 = -16726616;

    t135 = (x541^((x542>x543)^x544));

    if (t135 != -72933) { NG(); } else { ; }
	
}

void f136(void) {
    	static int32_t x545 = INT32_MIN;
	int32_t x546 = 4221029;
	int8_t x547 = 0;
	volatile int32_t t136 = 432902;

    t136 = (x545^((x546>x547)^x548));

    if (t136 != -2147481709) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x549 = 7U;
	volatile int32_t x550 = -1;
	static uint16_t x551 = UINT16_MAX;
	uint16_t x552 = 384U;
	volatile uint32_t t137 = 23U;

    t137 = (x549^((x550>x551)^x552));

    if (t137 != 391U) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x553 = 0LLU;
	static int8_t x554 = -1;
	uint8_t x556 = 2U;
	uint64_t t138 = 1115507495828957910LLU;

    t138 = (x553^((x554>x555)^x556));

    if (t138 != 3LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x557 = 13071U;
	volatile int32_t x559 = -280;
	int32_t x560 = 74841;
	static volatile uint32_t t139 = 569U;

    t139 = (x557^((x558>x559)^x560));

    if (t139 != 71511U) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x562 = UINT64_MAX;
	static uint8_t x563 = 61U;
	uint16_t x564 = UINT16_MAX;
	volatile int32_t t140 = 46;

    t140 = (x561^((x562>x563)^x564));

    if (t140 != -65410) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint32_t x565 = UINT32_MAX;
	volatile uint64_t x566 = 25409578710667LLU;
	volatile int64_t x567 = INT64_MAX;
	int64_t x568 = 1LL;
	int64_t t141 = -12LL;

    t141 = (x565^((x566>x567)^x568));

    if (t141 != 4294967294LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x569 = -1;
	static int8_t x570 = 6;
	uint64_t x571 = 1LLU;
	volatile int32_t t142 = 1;

    t142 = (x569^((x570>x571)^x572));

    if (t142 != 7) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x573 = UINT8_MAX;
	int64_t x574 = 513511937668057536LL;
	int16_t x575 = 5;
	uint64_t t143 = 489471997720468LLU;

    t143 = (x573^((x574>x575)^x576));

    if (t143 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x577 = INT64_MAX;
	volatile uint64_t x578 = 168LLU;
	int16_t x579 = INT16_MIN;
	uint16_t x580 = 26888U;
	volatile int64_t t144 = -447LL;

    t144 = (x577^((x578>x579)^x580));

    if (t144 != 9223372036854748919LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x581 = 683942892737021LLU;
	volatile uint16_t x582 = UINT16_MAX;
	uint8_t x584 = 24U;
	volatile uint64_t t145 = 1308645620252314LLU;

    t145 = (x581^((x582>x583)^x584));

    if (t145 != 683942892736997LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x585 = INT64_MIN;
	uint16_t x586 = UINT16_MAX;
	int64_t x587 = -759385344357417LL;
	volatile int8_t x588 = INT8_MAX;
	volatile int64_t t146 = -1615447628479056265LL;

    t146 = (x585^((x586>x587)^x588));

    if (t146 != -9223372036854775682LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint16_t x589 = UINT16_MAX;
	volatile int8_t x590 = 0;
	int64_t x591 = 8LL;
	int64_t x592 = 66896343314094LL;
	volatile int64_t t147 = 44246003276660138LL;

    t147 = (x589^((x590>x591)^x592));

    if (t147 != 66896343290193LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x593 = 28;
	volatile int64_t x594 = INT64_MIN;
	uint32_t x595 = 7313731U;
	volatile int32_t t148 = -30554696;

    t148 = (x593^((x594>x595)^x596));

    if (t148 != 65507) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x597 = 7683408LL;
	int32_t x598 = 14;
	int8_t x600 = -1;
	volatile int64_t t149 = 175338500562755LL;

    t149 = (x597^((x598>x599)^x600));

    if (t149 != -7683410LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile uint64_t x602 = UINT64_MAX;
	volatile int16_t x603 = -394;
	volatile uint64_t x604 = UINT64_MAX;
	uint64_t t150 = 564126652484LLU;

    t150 = (x601^((x602>x603)^x604));

    if (t150 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint64_t x605 = 1972054053048421LLU;
	volatile int16_t x607 = INT16_MAX;
	volatile uint64_t t151 = 1147442681496155050LLU;

    t151 = (x605^((x606>x607)^x608));

    if (t151 != 18444772019656503194LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x609 = INT16_MAX;
	int16_t x611 = -1;
	int64_t x612 = INT64_MIN;
	int64_t t152 = -1379269045926741LL;

    t152 = (x609^((x610>x611)^x612));

    if (t152 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x613 = 2156414336213353LL;
	int8_t x615 = INT8_MIN;
	static int32_t x616 = -1;
	int64_t t153 = -13773226LL;

    t153 = (x613^((x614>x615)^x616));

    if (t153 != -2156414336213354LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x617 = 0U;
	int32_t x619 = INT32_MIN;
	uint64_t t154 = 16325406297LLU;

    t154 = (x617^((x618>x619)^x620));

    if (t154 != 3LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x621 = INT32_MAX;
	int8_t x623 = 10;
	int32_t t155 = 3;

    t155 = (x621^((x622>x623)^x624));

    if (t155 != 2147483393) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x625 = -136599885447000LL;
	int64_t x626 = 255193883332066157LL;
	volatile int8_t x627 = 1;
	int32_t x628 = -127;
	int64_t t156 = -31043LL;

    t156 = (x625^((x626>x627)^x628));

    if (t156 != 136599885446952LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x629 = -11030;
	int32_t x630 = -1;
	volatile int64_t t157 = 7178116386LL;

    t157 = (x629^((x630>x631)^x632));

    if (t157 != 9223372036854764778LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x633 = 4U;
	int32_t x635 = INT32_MIN;
	int32_t x636 = INT32_MAX;
	int32_t t158 = 10;

    t158 = (x633^((x634>x635)^x636));

    if (t158 != 2147483642) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x637 = INT16_MIN;
	int8_t x639 = INT8_MAX;
	int16_t x640 = 1;
	int32_t t159 = -133148111;

    t159 = (x637^((x638>x639)^x640));

    if (t159 != -32768) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x641 = 1425;
	uint64_t x642 = 3679544LLU;
	volatile int32_t x643 = -34512;
	static uint64_t x644 = 1707378399LLU;
	uint64_t t160 = 346LLU;

    t160 = (x641^((x642>x643)^x644));

    if (t160 != 1707377486LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x645 = 7394775025LL;
	static volatile uint8_t x647 = UINT8_MAX;
	static int64_t t161 = -170739LL;

    t161 = (x645^((x646>x647)^x648));

    if (t161 != -7394775026LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int16_t x649 = -176;
	uint32_t x650 = 407U;
	volatile int64_t x651 = INT64_MAX;
	uint64_t x652 = 106095634791LLU;
	volatile uint64_t t162 = 111457808LLU;

    t162 = (x649^((x650>x651)^x652));

    if (t162 != 18446743967613916727LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x654 = 41U;
	static volatile uint32_t x655 = 8168U;
	uint32_t x656 = 176U;
	uint32_t t163 = 234889U;

    t163 = (x653^((x654>x655)^x656));

    if (t163 != 4280727992U) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x657 = 3U;
	int32_t x658 = INT32_MIN;
	int64_t x659 = -26752044LL;
	volatile int64_t x660 = -1LL;
	int64_t t164 = -1683439175LL;

    t164 = (x657^((x658>x659)^x660));

    if (t164 != -4LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x661 = 3115U;
	int16_t x663 = 0;
	int16_t x664 = INT16_MIN;
	uint32_t t165 = 311U;

    t165 = (x661^((x662>x663)^x664));

    if (t165 != 4294937642U) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x665 = INT64_MAX;
	int8_t x666 = INT8_MIN;
	int64_t x667 = INT64_MIN;

    t166 = (x665^((x666>x667)^x668));

    if (t166 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x671 = 180413150;
	uint32_t x672 = 409475291U;
	uint32_t t167 = 750172705U;

    t167 = (x669^((x670>x671)^x672));

    if (t167 != 1738008356U) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x673 = 3491;
	static int16_t x674 = -1;
	int8_t x675 = INT8_MIN;
	static uint32_t x676 = 372258841U;
	uint32_t t168 = 530929U;

    t168 = (x673^((x674>x675)^x676));

    if (t168 != 372258235U) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x677 = -1;
	static uint16_t x678 = 18U;
	volatile int32_t x679 = -899563552;
	uint16_t x680 = UINT16_MAX;
	int32_t t169 = -1684934;

    t169 = (x677^((x678>x679)^x680));

    if (t169 != -65535) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x681 = 26279LLU;
	int64_t x682 = -1LL;
	int8_t x684 = -1;
	volatile uint64_t t170 = 95928133LLU;

    t170 = (x681^((x682>x683)^x684));

    if (t170 != 18446744073709525337LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int8_t x685 = -1;
	uint32_t x686 = 9637U;
	int64_t x687 = 64762684561LL;
	volatile int8_t x688 = INT8_MAX;
	static volatile int32_t t171 = 22758017;

    t171 = (x685^((x686>x687)^x688));

    if (t171 != -128) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x689 = 534529644LLU;
	int64_t x692 = -3729667029767097LL;
	uint64_t t172 = 8983430294LLU;

    t172 = (x689^((x690>x691)^x692));

    if (t172 != 18443014406357068330LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x693 = 15U;
	uint8_t x695 = 0U;
	volatile uint64_t t173 = 15867861357656845LLU;

    t173 = (x693^((x694>x695)^x696));

    if (t173 != 39343183627LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x697 = INT64_MIN;
	static int32_t x699 = -1;
	volatile uint16_t x700 = 29U;
	static volatile int64_t t174 = 141314319419LL;

    t174 = (x697^((x698>x699)^x700));

    if (t174 != -9223372036854775779LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x702 = 113U;
	int8_t x703 = 4;
	int64_t x704 = -48700862200241777LL;
	static int64_t t175 = -3310413882LL;

    t175 = (x701^((x702>x703)^x704));

    if (t175 != -48700863552463247LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x705 = INT64_MIN;
	int8_t x706 = -1;
	static int16_t x707 = -1;
	volatile int32_t x708 = -1;
	volatile int64_t t176 = INT64_MAX;

    t176 = (x705^((x706>x707)^x708));

    if (t176 != INT64_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x709 = -1LL;
	int32_t x711 = INT32_MIN;
	volatile int64_t x712 = INT64_MAX;
	int64_t t177 = 165820475504LL;

    t177 = (x709^((x710>x711)^x712));

    if (t177 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x713 = 1553LL;
	volatile uint16_t x715 = UINT16_MAX;
	uint32_t x716 = UINT32_MAX;
	volatile int64_t t178 = 97121802470LL;

    t178 = (x713^((x714>x715)^x716));

    if (t178 != 4294965742LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x717 = -1;
	int16_t x719 = 0;
	int32_t x720 = 191377024;
	volatile int32_t t179 = -58;

    t179 = (x717^((x718>x719)^x720));

    if (t179 != -191377026) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x721 = 357U;
	volatile int32_t x722 = INT32_MIN;
	int64_t x723 = INT64_MIN;
	static int8_t x724 = INT8_MIN;

    t180 = (x721^((x722>x723)^x724));

    if (t180 != -284) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x725 = -1;
	int16_t x726 = INT16_MIN;
	uint32_t x727 = 723182U;
	int16_t x728 = 3;
	static int32_t t181 = -159477;

    t181 = (x725^((x726>x727)^x728));

    if (t181 != -3) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x729 = -9;
	uint16_t x730 = 119U;
	static int32_t x731 = INT32_MIN;
	volatile int64_t x732 = -8798LL;
	int64_t t182 = -25128386243802LL;

    t182 = (x729^((x730>x731)^x732));

    if (t182 != 8788LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x734 = 467U;
	volatile int16_t x735 = -1;
	int8_t x736 = INT8_MIN;
	volatile int32_t t183 = -2975;

    t183 = (x733^((x734>x735)^x736));

    if (t183 != 125) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x737 = 23;
	int8_t x738 = -1;
	int8_t x739 = INT8_MIN;
	volatile int16_t x740 = -1;
	volatile int32_t t184 = -43741;

    t184 = (x737^((x738>x739)^x740));

    if (t184 != -23) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x741 = UINT32_MAX;
	uint8_t x743 = 122U;
	int8_t x744 = INT8_MAX;
	static volatile uint32_t t185 = 63219U;

    t185 = (x741^((x742>x743)^x744));

    if (t185 != 4294967168U) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x745 = 7U;
	int32_t x746 = INT32_MIN;
	int8_t x748 = 0;
	static uint32_t t186 = 13246U;

    t186 = (x745^((x746>x747)^x748));

    if (t186 != 7U) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x749 = INT8_MIN;
	volatile int8_t x750 = INT8_MIN;
	uint64_t x752 = 2406LLU;

    t187 = (x749^((x750>x751)^x752));

    if (t187 != 18446744073709549286LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x753 = -1;
	int32_t x754 = INT32_MIN;
	int8_t x755 = 2;
	static int32_t x756 = INT32_MAX;
	volatile int32_t t188 = INT32_MIN;

    t188 = (x753^((x754>x755)^x756));

    if (t188 != INT32_MIN) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x757 = 143;
	int16_t x758 = INT16_MAX;
	int32_t x759 = 271;
	int64_t x760 = -1LL;
	static int64_t t189 = 13532279LL;

    t189 = (x757^((x758>x759)^x760));

    if (t189 != -143LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile uint32_t x761 = UINT32_MAX;
	int16_t x762 = INT16_MIN;
	int8_t x763 = INT8_MAX;
	int32_t x764 = INT32_MIN;
	volatile uint32_t t190 = 199402U;

    t190 = (x761^((x762>x763)^x764));

    if (t190 != 2147483647U) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int32_t x765 = -1;
	volatile int16_t x766 = -1;
	int32_t x768 = INT32_MAX;
	int32_t t191 = 1;

    t191 = (x765^((x766>x767)^x768));

    if (t191 != -2147483647) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x769 = -564420385366LL;
	volatile uint16_t x770 = 22365U;
	int8_t x771 = INT8_MIN;
	int32_t x772 = INT32_MIN;
	static volatile int64_t t192 = -7976008402LL;

    t192 = (x769^((x770>x771)^x772));

    if (t192 != 563008529835LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x773 = 0;
	uint32_t x775 = 126050U;
	int8_t x776 = -1;
	volatile int32_t t193 = 58;

    t193 = (x773^((x774>x775)^x776));

    if (t193 != -1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x777 = -1136612207791177537LL;
	int32_t x779 = 0;
	int32_t x780 = INT32_MIN;
	volatile int64_t t194 = -7354327102242LL;

    t194 = (x777^((x778>x779)^x780));

    if (t194 != 1136612206289092798LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x781 = 53U;
	int32_t x782 = INT32_MIN;
	int16_t x783 = 6;
	int16_t x784 = -1;
	int32_t t195 = -117435;

    t195 = (x781^((x782>x783)^x784));

    if (t195 != -54) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x786 = 796LLU;
	static int8_t x787 = 0;
	volatile int64_t t196 = -97LL;

    t196 = (x785^((x786>x787)^x788));

    if (t196 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x789 = -51;
	int16_t x790 = -1;
	volatile int8_t x791 = INT8_MIN;
	int64_t x792 = -456373952901570LL;
	static volatile int64_t t197 = -14416LL;

    t197 = (x789^((x790>x791)^x792));

    if (t197 != 456373952901618LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x793 = INT64_MIN;
	int8_t x795 = -1;
	int8_t x796 = INT8_MIN;
	int64_t t198 = 4250067367518768759LL;

    t198 = (x793^((x794>x795)^x796));

    if (t198 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x797 = INT32_MIN;
	static int64_t x798 = INT64_MIN;

    t199 = (x797^((x798>x799)^x800));

    if (t199 != 18446744071588121300LLU) { NG(); } else { ; }
	
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

