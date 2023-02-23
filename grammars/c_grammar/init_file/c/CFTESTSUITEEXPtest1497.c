
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

volatile int8_t x8 = INT8_MAX;
uint32_t x12 = 1U;
int8_t x18 = INT8_MIN;
int32_t x19 = INT32_MIN;
int64_t x25 = INT64_MIN;
int8_t x27 = 1;
volatile int64_t x31 = 7887LL;
int8_t x32 = 1;
static int16_t x33 = -4785;
int16_t x39 = INT16_MAX;
volatile int64_t t9 = -9653955363096170LL;
int32_t x47 = INT32_MAX;
static volatile uint64_t t11 = 48LLU;
int64_t t12 = -2596179530347914LL;
int16_t x55 = INT16_MAX;
uint8_t x56 = 62U;
int8_t x58 = -23;
volatile uint64_t x60 = UINT64_MAX;
volatile uint16_t x61 = UINT16_MAX;
int16_t x62 = -1;
int32_t t15 = 10335657;
static int16_t x67 = 2109;
static volatile uint32_t x72 = 0U;
static int16_t x75 = INT16_MIN;
static uint16_t x86 = 7U;
int16_t x87 = 48;
volatile uint8_t x98 = UINT8_MAX;
int32_t t25 = 24;
int64_t x107 = INT64_MAX;
uint32_t x110 = 979U;
volatile int32_t t27 = 4762876;
int32_t t29 = 5102080;
static int8_t x122 = 10;
int16_t x134 = INT16_MAX;
int64_t x142 = INT64_MIN;
int8_t x143 = INT8_MAX;
int16_t x144 = INT16_MIN;
int16_t x148 = INT16_MIN;
volatile int32_t t36 = 759;
static int16_t x153 = 0;
int32_t x156 = 649502424;
int16_t x158 = INT16_MAX;
volatile int64_t x160 = INT64_MAX;
int8_t x163 = INT8_MIN;
volatile int32_t t41 = -1;
static int16_t x171 = INT16_MIN;
uint8_t x177 = 34U;
volatile int8_t x180 = 13;
static uint32_t x182 = 42U;
volatile uint64_t t45 = 565713055935LLU;
volatile int16_t x189 = INT16_MAX;
int16_t x193 = -1;
static volatile int64_t x199 = 25783975876273LL;
int8_t x202 = -2;
volatile uint32_t t50 = 52086U;
int32_t x212 = INT32_MIN;
static int32_t t52 = 28102;
int8_t x216 = 59;
volatile int64_t t53 = 892LL;
volatile int64_t t54 = 1083339LL;
static int64_t x221 = -1LL;
int64_t x229 = -1LL;
volatile uint16_t x233 = 1547U;
int16_t x239 = -885;
uint64_t x244 = 983163809823LLU;
uint32_t x248 = UINT32_MAX;
static int32_t x253 = INT32_MAX;
volatile uint64_t x254 = UINT64_MAX;
int8_t x259 = 1;
static uint32_t x265 = 878523U;
int16_t x268 = INT16_MAX;
uint32_t t66 = 1801892611U;
int16_t x276 = INT16_MIN;
volatile int32_t t68 = -414225;
uint32_t x279 = UINT32_MAX;
int32_t x283 = 0;
int64_t x284 = 6LL;
volatile uint32_t t72 = 1U;
volatile int16_t x294 = INT16_MIN;
volatile int16_t x295 = INT16_MAX;
int8_t x300 = INT8_MAX;
static uint32_t x302 = 37U;
volatile int32_t t75 = 509937;
int64_t x306 = -73779362LL;
uint16_t x314 = UINT16_MAX;
int16_t x315 = INT16_MAX;
int32_t t78 = -53646257;
int32_t t79 = 443;
int32_t x327 = INT32_MAX;
int32_t x331 = 202880532;
static uint64_t t82 = 779750700305544LLU;
static volatile uint64_t x333 = 482384LLU;
int16_t x336 = -5581;
int64_t x337 = INT64_MIN;
int64_t x341 = -1LL;
static volatile int64_t x343 = 333304645LL;
int64_t x344 = INT64_MAX;
volatile uint8_t x346 = 1U;
static int32_t t88 = -246039;
uint32_t x359 = 695U;
static volatile int32_t t89 = INT32_MIN;
int32_t x362 = INT32_MIN;
int8_t x367 = INT8_MAX;
volatile int8_t x372 = 1;
static volatile uint64_t t92 = 5214821047LLU;
static int32_t x373 = INT32_MIN;
static int32_t x385 = -1715;
uint64_t x390 = 39860002429913LLU;
static uint8_t x392 = 4U;
volatile int16_t x394 = INT16_MIN;
volatile int64_t x396 = 761776LL;
int32_t t99 = -54626571;
int8_t x403 = INT8_MIN;
volatile uint16_t x407 = 15U;
int32_t x408 = INT32_MIN;
static volatile int32_t t101 = -137526;
int64_t x414 = INT64_MIN;
static int8_t x416 = INT8_MIN;
volatile int32_t t103 = 9059;
int64_t x417 = -1LL;
int64_t x424 = -33885413386095146LL;
int32_t t105 = 27346;
static volatile uint64_t x429 = 97LLU;
int32_t x433 = -1;
volatile uint32_t x434 = UINT32_MAX;
static volatile int64_t x440 = INT64_MIN;
volatile int32_t t109 = 34;
uint32_t x441 = UINT32_MAX;
uint16_t x443 = UINT16_MAX;
static int16_t x450 = INT16_MAX;
static int64_t x454 = INT64_MIN;
volatile int16_t x462 = 0;
volatile int32_t t115 = 31;
int32_t x465 = INT32_MAX;
volatile uint16_t x466 = 1U;
int64_t x467 = -3LL;
static volatile int32_t t118 = -14;
uint64_t x484 = 59080067679LLU;
uint64_t x488 = 3693165453LLU;
volatile int16_t x489 = -28;
uint16_t x492 = UINT16_MAX;
int8_t x494 = INT8_MIN;
volatile uint32_t t124 = 1466939024U;
int16_t x501 = INT16_MIN;
int8_t x503 = INT8_MAX;
int32_t x505 = INT32_MAX;
volatile int32_t t127 = 741;
int32_t x514 = INT32_MIN;
int64_t t128 = -275445917694835419LL;
int8_t x521 = INT8_MAX;
int64_t x531 = INT64_MAX;
int8_t x532 = 1;
static volatile uint64_t t132 = 72515721781507LLU;
volatile int8_t x533 = INT8_MIN;
int32_t x534 = INT32_MIN;
int64_t x536 = 14785258LL;
static int64_t x552 = INT64_MAX;
uint16_t x556 = 768U;
int32_t t138 = 60;
volatile int64_t x558 = INT64_MAX;
volatile uint8_t x565 = 19U;
static int8_t x568 = 1;
int32_t t141 = -1;
int32_t x572 = -299384483;
uint32_t x575 = 13261513U;
uint16_t x578 = 25U;
int8_t x583 = 55;
static volatile int8_t x584 = -10;
static int64_t x585 = INT64_MIN;
uint16_t x589 = 370U;
static volatile int8_t x594 = INT8_MAX;
int8_t x595 = -55;
int16_t x596 = -1;
int16_t x599 = INT16_MIN;
int8_t x607 = INT8_MAX;
static volatile int32_t t151 = 341;
volatile int32_t t153 = -926970;
static volatile uint32_t x618 = 515U;
int8_t x619 = INT8_MAX;
int32_t x620 = INT32_MIN;
uint8_t x626 = UINT8_MAX;
static int32_t x628 = INT32_MAX;
int8_t x632 = INT8_MIN;
uint32_t t157 = 15U;
static int16_t x636 = INT16_MIN;
uint16_t x637 = 10604U;
int8_t x639 = INT8_MAX;
int16_t x648 = INT16_MIN;
int16_t x650 = INT16_MAX;
volatile int64_t t162 = 8366989399LL;
static volatile uint16_t x656 = 710U;
volatile uint8_t x657 = 6U;
volatile int64_t x664 = 260137688LL;
static uint16_t x668 = 1917U;
int64_t x673 = INT64_MIN;
volatile int16_t x674 = INT16_MIN;
uint32_t x680 = 15499868U;
uint32_t x685 = UINT32_MAX;
int64_t x689 = INT64_MIN;
int64_t x696 = 72898015201664LL;
static int16_t x699 = INT16_MAX;
int64_t x713 = -1LL;
static uint8_t x723 = 0U;
volatile int64_t t182 = -57679275974947604LL;
volatile uint16_t x744 = UINT16_MAX;
uint16_t x747 = 82U;
int8_t x748 = INT8_MIN;
static int32_t x750 = -1;
volatile int32_t x752 = 265;
static volatile uint64_t t187 = UINT64_MAX;
int32_t x761 = INT32_MAX;
uint8_t x765 = UINT8_MAX;
int8_t x766 = INT8_MIN;
int32_t t193 = 108839;
static int16_t x782 = -1;
int8_t x785 = -1;
int8_t x786 = INT8_MIN;
static uint32_t x788 = UINT32_MAX;
int64_t x791 = 17058852123748LL;
static int32_t x796 = -130313;


void f0(void) {
    	int32_t x1 = INT32_MIN;
	volatile int8_t x2 = 4;
	uint8_t x3 = UINT8_MAX;
	uint32_t x4 = 1031432U;
	int32_t t0 = INT32_MIN;

    t0 = (x1|((x2==x3)>x4));

    if (t0 != INT32_MIN) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MIN;
	int32_t x6 = INT32_MIN;
	volatile int32_t x7 = -1;
	static volatile int32_t t1 = -8216758;

    t1 = (x5|((x6==x7)>x8));

    if (t1 != -128) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x9 = -1;
	int64_t x10 = -689060699LL;
	static int16_t x11 = 5;
	volatile int32_t t2 = 1208774;

    t2 = (x9|((x10==x11)>x12));

    if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x13 = INT64_MAX;
	uint8_t x14 = UINT8_MAX;
	int8_t x15 = INT8_MAX;
	int16_t x16 = -1;
	int64_t t3 = INT64_MAX;

    t3 = (x13|((x14==x15)>x16));

    if (t3 != INT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = 3417731U;
	static int16_t x20 = -1;
	static uint32_t t4 = 160989010U;

    t4 = (x17|((x18==x19)>x20));

    if (t4 != 3417731U) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = 1LLU;
	int64_t x22 = INT64_MAX;
	uint8_t x23 = UINT8_MAX;
	static int64_t x24 = INT64_MAX;
	static uint64_t t5 = 543LLU;

    t5 = (x21|((x22==x23)>x24));

    if (t5 != 1LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x26 = -1;
	static int32_t x28 = -1;
	int64_t t6 = 17836LL;

    t6 = (x25|((x26==x27)>x28));

    if (t6 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = INT64_MIN;
	volatile int16_t x30 = 15943;
	int64_t t7 = INT64_MIN;

    t7 = (x29|((x30==x31)>x32));

    if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x34 = UINT32_MAX;
	static uint16_t x35 = 913U;
	uint8_t x36 = 8U;
	int32_t t8 = -24;

    t8 = (x33|((x34==x35)>x36));

    if (t8 != -4785) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = 8516706276782LL;
	volatile int64_t x38 = INT64_MIN;
	int64_t x40 = -363374LL;

    t9 = (x37|((x38==x39)>x40));

    if (t9 != 8516706276783LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x41 = INT8_MIN;
	int64_t x42 = -33991LL;
	int32_t x43 = 5018729;
	int64_t x44 = 34495841LL;
	volatile int32_t t10 = 6;

    t10 = (x41|((x42==x43)>x44));

    if (t10 != -128) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x45 = 1048404746307901923LLU;
	volatile int32_t x46 = -1;
	uint32_t x48 = UINT32_MAX;

    t11 = (x45|((x46==x47)>x48));

    if (t11 != 1048404746307901923LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = INT64_MIN;
	int16_t x50 = -44;
	volatile uint64_t x51 = 200286LLU;
	volatile int64_t x52 = -1LL;

    t12 = (x49|((x50==x51)>x52));

    if (t12 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int16_t x53 = 6350;
	static volatile uint32_t x54 = UINT32_MAX;
	volatile int32_t t13 = -10754;

    t13 = (x53|((x54==x55)>x56));

    if (t13 != 6350) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x57 = 0;
	uint64_t x59 = UINT64_MAX;
	volatile int32_t t14 = -7;

    t14 = (x57|((x58==x59)>x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x63 = INT8_MIN;
	volatile int64_t x64 = INT64_MIN;

    t15 = (x61|((x62==x63)>x64));

    if (t15 != 65535) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = INT8_MIN;
	uint16_t x66 = UINT16_MAX;
	int16_t x68 = -1;
	int32_t t16 = -1762967;

    t16 = (x65|((x66==x67)>x68));

    if (t16 != -127) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile int16_t x69 = -2985;
	int8_t x70 = INT8_MIN;
	volatile int16_t x71 = -1;
	volatile int32_t t17 = -13591;

    t17 = (x69|((x70==x71)>x72));

    if (t17 != -2985) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = INT32_MIN;
	static int8_t x74 = -3;
	int64_t x76 = -37123437LL;
	int32_t t18 = 1665;

    t18 = (x73|((x74==x75)>x76));

    if (t18 != -2147483647) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = 3;
	uint16_t x78 = 5U;
	static uint32_t x79 = UINT32_MAX;
	static int64_t x80 = -1LL;
	static int32_t t19 = -213;

    t19 = (x77|((x78==x79)>x80));

    if (t19 != 3) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = INT64_MIN;
	int32_t x82 = INT32_MIN;
	uint16_t x83 = 1541U;
	volatile int16_t x84 = -1;
	volatile int64_t t20 = 8012676624LL;

    t20 = (x81|((x82==x83)>x84));

    if (t20 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = -1;
	uint16_t x88 = 13U;
	int32_t t21 = 67;

    t21 = (x85|((x86==x87)>x88));

    if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = INT64_MIN;
	int8_t x90 = 0;
	int64_t x91 = -1LL;
	static volatile uint16_t x92 = 3U;
	volatile int64_t t22 = INT64_MIN;

    t22 = (x89|((x90==x91)>x92));

    if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x93 = 1123509488606LLU;
	int64_t x94 = INT64_MIN;
	uint8_t x95 = 45U;
	int64_t x96 = -1LL;
	volatile uint64_t t23 = 97032999571452LLU;

    t23 = (x93|((x94==x95)>x96));

    if (t23 != 1123509488607LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x97 = INT64_MAX;
	uint64_t x99 = 17034553LLU;
	volatile int16_t x100 = INT16_MIN;
	volatile int64_t t24 = INT64_MAX;

    t24 = (x97|((x98==x99)>x100));

    if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x101 = 10134U;
	int64_t x102 = INT64_MIN;
	volatile uint64_t x103 = 128484LLU;
	static int64_t x104 = -43LL;

    t25 = (x101|((x102==x103)>x104));

    if (t25 != 10135) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x105 = UINT8_MAX;
	int8_t x106 = INT8_MIN;
	int8_t x108 = -1;
	int32_t t26 = 354;

    t26 = (x105|((x106==x107)>x108));

    if (t26 != 255) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = INT16_MAX;
	uint16_t x111 = 9U;
	int64_t x112 = -6449333762614102LL;

    t27 = (x109|((x110==x111)>x112));

    if (t27 != 32767) { NG(); } else { ; }
	
}

void f28(void) {
    	static int64_t x113 = INT64_MIN;
	uint8_t x114 = 2U;
	static uint16_t x115 = 11866U;
	int32_t x116 = 37845671;
	volatile int64_t t28 = INT64_MIN;

    t28 = (x113|((x114==x115)>x116));

    if (t28 != INT64_MIN) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x117 = 28U;
	int8_t x118 = -1;
	static volatile int8_t x119 = -8;
	uint64_t x120 = 368103639125921232LLU;

    t29 = (x117|((x118==x119)>x120));

    if (t29 != 28) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = 0;
	static int32_t x123 = INT32_MIN;
	volatile int64_t x124 = INT64_MIN;
	int32_t t30 = -2269;

    t30 = (x121|((x122==x123)>x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = INT64_MAX;
	int16_t x126 = INT16_MIN;
	static volatile int32_t x127 = INT32_MAX;
	int64_t x128 = INT64_MAX;
	volatile int64_t t31 = INT64_MAX;

    t31 = (x125|((x126==x127)>x128));

    if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x129 = INT16_MIN;
	int64_t x130 = -337705262934777LL;
	volatile int8_t x131 = INT8_MIN;
	int16_t x132 = INT16_MIN;
	int32_t t32 = -899287307;

    t32 = (x129|((x130==x131)>x132));

    if (t32 != -32767) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = -1;
	int8_t x135 = INT8_MAX;
	int32_t x136 = INT32_MAX;
	int32_t t33 = 244;

    t33 = (x133|((x134==x135)>x136));

    if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x137 = 0;
	uint8_t x138 = UINT8_MAX;
	int32_t x139 = -535880778;
	static volatile int32_t x140 = -204;
	volatile int32_t t34 = 107;

    t34 = (x137|((x138==x139)>x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = -86;
	static int32_t t35 = -24614242;

    t35 = (x141|((x142==x143)>x144));

    if (t35 != -85) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x145 = INT8_MIN;
	static uint16_t x146 = 73U;
	int16_t x147 = -1;

    t36 = (x145|((x146==x147)>x148));

    if (t36 != -127) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x149 = INT32_MAX;
	static int64_t x150 = -1LL;
	int64_t x151 = INT64_MIN;
	static int32_t x152 = -244144;
	volatile int32_t t37 = INT32_MAX;

    t37 = (x149|((x150==x151)>x152));

    if (t37 != INT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x154 = -1;
	int32_t x155 = -160348;
	static volatile int32_t t38 = -1;

    t38 = (x153|((x154==x155)>x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x157 = INT16_MIN;
	static int8_t x159 = INT8_MIN;
	static volatile int32_t t39 = 1;

    t39 = (x157|((x158==x159)>x160));

    if (t39 != -32768) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x161 = -27;
	uint16_t x162 = 27U;
	int64_t x164 = INT64_MIN;
	volatile int32_t t40 = 27;

    t40 = (x161|((x162==x163)>x164));

    if (t40 != -27) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = -4;
	volatile int16_t x166 = 7;
	uint64_t x167 = UINT64_MAX;
	volatile int64_t x168 = -7LL;

    t41 = (x165|((x166==x167)>x168));

    if (t41 != -3) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x169 = 743775136477470LLU;
	int16_t x170 = -1;
	int8_t x172 = -1;
	uint64_t t42 = 48956197333266LLU;

    t42 = (x169|((x170==x171)>x172));

    if (t42 != 743775136477471LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x173 = INT8_MIN;
	int16_t x174 = 0;
	volatile int16_t x175 = INT16_MIN;
	uint16_t x176 = 2U;
	static volatile int32_t t43 = 106;

    t43 = (x173|((x174==x175)>x176));

    if (t43 != -128) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x178 = 53;
	int8_t x179 = 1;
	volatile int32_t t44 = -3790;

    t44 = (x177|((x178==x179)>x180));

    if (t44 != 34) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x181 = 2499LLU;
	static volatile uint32_t x183 = 12330U;
	uint32_t x184 = 19U;

    t45 = (x181|((x182==x183)>x184));

    if (t45 != 2499LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x185 = INT32_MIN;
	static int64_t x186 = INT64_MAX;
	uint8_t x187 = 3U;
	int64_t x188 = -1LL;
	volatile int32_t t46 = -6;

    t46 = (x185|((x186==x187)>x188));

    if (t46 != -2147483647) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x190 = -1LL;
	volatile int64_t x191 = INT64_MAX;
	int16_t x192 = INT16_MAX;
	static volatile int32_t t47 = 12103;

    t47 = (x189|((x190==x191)>x192));

    if (t47 != 32767) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int32_t x194 = INT32_MIN;
	int32_t x195 = -114732928;
	static volatile int32_t x196 = INT32_MAX;
	volatile int32_t t48 = -11259;

    t48 = (x193|((x194==x195)>x196));

    if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x197 = -1LL;
	uint16_t x198 = 25U;
	uint64_t x200 = UINT64_MAX;
	int64_t t49 = 21865313LL;

    t49 = (x197|((x198==x199)>x200));

    if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x201 = 56972155U;
	volatile uint32_t x203 = 628573905U;
	uint8_t x204 = UINT8_MAX;

    t50 = (x201|((x202==x203)>x204));

    if (t50 != 56972155U) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = -1LL;
	int16_t x206 = INT16_MIN;
	volatile int16_t x207 = INT16_MIN;
	int32_t x208 = INT32_MIN;
	volatile int64_t t51 = -3420684341198299LL;

    t51 = (x205|((x206==x207)>x208));

    if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x209 = 7U;
	int64_t x210 = INT64_MAX;
	uint64_t x211 = 18LLU;

    t52 = (x209|((x210==x211)>x212));

    if (t52 != 7) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x213 = -1LL;
	int64_t x214 = -1LL;
	volatile int32_t x215 = INT32_MIN;

    t53 = (x213|((x214==x215)>x216));

    if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x217 = -308123613LL;
	int8_t x218 = 1;
	int8_t x219 = INT8_MAX;
	int8_t x220 = INT8_MAX;

    t54 = (x217|((x218==x219)>x220));

    if (t54 != -308123613LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x222 = INT16_MIN;
	volatile int16_t x223 = INT16_MIN;
	static int64_t x224 = INT64_MIN;
	static volatile int64_t t55 = 21897966LL;

    t55 = (x221|((x222==x223)>x224));

    if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x225 = UINT64_MAX;
	volatile int32_t x226 = INT32_MIN;
	int16_t x227 = INT16_MIN;
	int8_t x228 = 8;
	volatile uint64_t t56 = UINT64_MAX;

    t56 = (x225|((x226==x227)>x228));

    if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile uint32_t x230 = 533065U;
	int32_t x231 = INT32_MIN;
	int16_t x232 = 0;
	int64_t t57 = 168190455753690188LL;

    t57 = (x229|((x230==x231)>x232));

    if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x234 = -1;
	volatile int64_t x235 = -1LL;
	int32_t x236 = INT32_MIN;
	int32_t t58 = -1003322;

    t58 = (x233|((x234==x235)>x236));

    if (t58 != 1547) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x237 = UINT16_MAX;
	volatile int16_t x238 = 0;
	static uint16_t x240 = UINT16_MAX;
	volatile int32_t t59 = -1;

    t59 = (x237|((x238==x239)>x240));

    if (t59 != 65535) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x241 = INT16_MIN;
	static volatile int32_t x242 = INT32_MIN;
	int32_t x243 = 760;
	int32_t t60 = -2093889;

    t60 = (x241|((x242==x243)>x244));

    if (t60 != -32768) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int64_t x245 = 22LL;
	int16_t x246 = 22;
	int64_t x247 = INT64_MIN;
	int64_t t61 = 0LL;

    t61 = (x245|((x246==x247)>x248));

    if (t61 != 22LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static int32_t x249 = -469;
	static volatile int8_t x250 = INT8_MAX;
	int8_t x251 = -1;
	static int16_t x252 = INT16_MIN;
	static volatile int32_t t62 = -44465279;

    t62 = (x249|((x250==x251)>x252));

    if (t62 != -469) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x255 = INT16_MIN;
	int8_t x256 = INT8_MIN;
	volatile int32_t t63 = INT32_MAX;

    t63 = (x253|((x254==x255)>x256));

    if (t63 != INT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x257 = -1LL;
	int8_t x258 = -1;
	uint8_t x260 = 14U;
	int64_t t64 = -6116LL;

    t64 = (x257|((x258==x259)>x260));

    if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x261 = UINT64_MAX;
	volatile int8_t x262 = INT8_MAX;
	static uint16_t x263 = UINT16_MAX;
	int16_t x264 = -1;
	uint64_t t65 = UINT64_MAX;

    t65 = (x261|((x262==x263)>x264));

    if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x266 = UINT8_MAX;
	uint64_t x267 = UINT64_MAX;

    t66 = (x265|((x266==x267)>x268));

    if (t66 != 878523U) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x269 = 409653441LLU;
	volatile uint32_t x270 = 24997U;
	uint32_t x271 = UINT32_MAX;
	int16_t x272 = -1;
	volatile uint64_t t67 = 12645303420LLU;

    t67 = (x269|((x270==x271)>x272));

    if (t67 != 409653441LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static int32_t x273 = INT32_MIN;
	volatile uint32_t x274 = 42U;
	int64_t x275 = -217LL;

    t68 = (x273|((x274==x275)>x276));

    if (t68 != -2147483647) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = INT8_MIN;
	volatile uint8_t x278 = 31U;
	int8_t x280 = INT8_MAX;
	int32_t t69 = -39;

    t69 = (x277|((x278==x279)>x280));

    if (t69 != -128) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = INT16_MAX;
	static int8_t x282 = INT8_MIN;
	static int32_t t70 = -23099976;

    t70 = (x281|((x282==x283)>x284));

    if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile uint32_t x285 = 28835804U;
	uint32_t x286 = UINT32_MAX;
	int64_t x287 = -1LL;
	int64_t x288 = 431106192791030802LL;
	uint32_t t71 = 2505U;

    t71 = (x285|((x286==x287)>x288));

    if (t71 != 28835804U) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x289 = 66U;
	volatile int64_t x290 = -1LL;
	int32_t x291 = INT32_MIN;
	int8_t x292 = 1;

    t72 = (x289|((x290==x291)>x292));

    if (t72 != 66U) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x293 = UINT64_MAX;
	static int16_t x296 = 10;
	uint64_t t73 = UINT64_MAX;

    t73 = (x293|((x294==x295)>x296));

    if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x297 = 563675402111409LLU;
	int32_t x298 = INT32_MAX;
	static uint8_t x299 = UINT8_MAX;
	volatile uint64_t t74 = 555LLU;

    t74 = (x297|((x298==x299)>x300));

    if (t74 != 563675402111409LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x301 = 16;
	static uint16_t x303 = 4007U;
	static uint16_t x304 = 862U;

    t75 = (x301|((x302==x303)>x304));

    if (t75 != 16) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x305 = INT32_MAX;
	int16_t x307 = -1;
	uint8_t x308 = UINT8_MAX;
	int32_t t76 = INT32_MAX;

    t76 = (x305|((x306==x307)>x308));

    if (t76 != INT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x309 = -1;
	int16_t x310 = -1;
	volatile int64_t x311 = -1LL;
	int64_t x312 = -179LL;
	volatile int32_t t77 = -19;

    t77 = (x309|((x310==x311)>x312));

    if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int8_t x313 = INT8_MAX;
	uint32_t x316 = 1995622713U;

    t78 = (x313|((x314==x315)>x316));

    if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x317 = 232;
	int8_t x318 = INT8_MIN;
	int16_t x319 = INT16_MIN;
	static uint16_t x320 = UINT16_MAX;

    t79 = (x317|((x318==x319)>x320));

    if (t79 != 232) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x321 = 118U;
	volatile uint64_t x322 = 527672924LLU;
	static int64_t x323 = -1LL;
	int64_t x324 = INT64_MIN;
	static volatile int32_t t80 = -267;

    t80 = (x321|((x322==x323)>x324));

    if (t80 != 119) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint16_t x325 = 42U;
	uint32_t x326 = 34789U;
	volatile int32_t x328 = INT32_MAX;
	static volatile int32_t t81 = -19980;

    t81 = (x325|((x326==x327)>x328));

    if (t81 != 42) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint64_t x329 = 496549468672772443LLU;
	volatile int32_t x330 = INT32_MAX;
	static int8_t x332 = INT8_MIN;

    t82 = (x329|((x330==x331)>x332));

    if (t82 != 496549468672772443LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x334 = UINT8_MAX;
	static volatile int16_t x335 = -1277;
	uint64_t t83 = 3528091070LLU;

    t83 = (x333|((x334==x335)>x336));

    if (t83 != 482385LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x338 = INT64_MIN;
	uint16_t x339 = 686U;
	volatile int16_t x340 = INT16_MIN;
	static int64_t t84 = -1174528578LL;

    t84 = (x337|((x338==x339)>x340));

    if (t84 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x342 = -1;
	volatile int64_t t85 = -154244685LL;

    t85 = (x341|((x342==x343)>x344));

    if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x345 = 2011LLU;
	int64_t x347 = -1321522678567388LL;
	int64_t x348 = INT64_MIN;
	volatile uint64_t t86 = 31906363193035911LLU;

    t86 = (x345|((x346==x347)>x348));

    if (t86 != 2011LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int32_t x349 = INT32_MIN;
	int8_t x350 = -3;
	uint64_t x351 = 494LLU;
	int16_t x352 = -1;
	int32_t t87 = 7;

    t87 = (x349|((x350==x351)>x352));

    if (t87 != -2147483647) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = INT8_MAX;
	uint16_t x354 = 189U;
	volatile int16_t x355 = -4875;
	uint8_t x356 = 10U;

    t88 = (x353|((x354==x355)>x356));

    if (t88 != 127) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x357 = INT32_MIN;
	int64_t x358 = 87684LL;
	int8_t x360 = INT8_MAX;

    t89 = (x357|((x358==x359)>x360));

    if (t89 != INT32_MIN) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = 1;
	int32_t x363 = -22632;
	int32_t x364 = 1;
	int32_t t90 = -1289510;

    t90 = (x361|((x362==x363)>x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x365 = INT32_MIN;
	int16_t x366 = -1;
	volatile uint64_t x368 = 7843LLU;
	volatile int32_t t91 = INT32_MIN;

    t91 = (x365|((x366==x367)>x368));

    if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x369 = 413402510681660805LLU;
	int64_t x370 = INT64_MIN;
	uint32_t x371 = 18258U;

    t92 = (x369|((x370==x371)>x372));

    if (t92 != 413402510681660805LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x374 = INT32_MIN;
	static int16_t x375 = 364;
	volatile uint16_t x376 = 11188U;
	int32_t t93 = INT32_MIN;

    t93 = (x373|((x374==x375)>x376));

    if (t93 != INT32_MIN) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = 52;
	uint32_t x378 = 40063665U;
	int32_t x379 = 26078391;
	volatile uint32_t x380 = 409421031U;
	static int32_t t94 = -97;

    t94 = (x377|((x378==x379)>x380));

    if (t94 != 52) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x381 = INT16_MIN;
	int32_t x382 = INT32_MIN;
	uint64_t x383 = 731LLU;
	uint8_t x384 = 1U;
	volatile int32_t t95 = -150868;

    t95 = (x381|((x382==x383)>x384));

    if (t95 != -32768) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x386 = 32U;
	int16_t x387 = -13570;
	int16_t x388 = 15706;
	int32_t t96 = -87898745;

    t96 = (x385|((x386==x387)>x388));

    if (t96 != -1715) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x389 = 2032;
	volatile int8_t x391 = -1;
	int32_t t97 = -6400;

    t97 = (x389|((x390==x391)>x392));

    if (t97 != 2032) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x393 = -1LL;
	int8_t x395 = INT8_MIN;
	int64_t t98 = 28193459816LL;

    t98 = (x393|((x394==x395)>x396));

    if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x397 = 37U;
	uint16_t x398 = UINT16_MAX;
	static int64_t x399 = INT64_MIN;
	int64_t x400 = INT64_MIN;

    t99 = (x397|((x398==x399)>x400));

    if (t99 != 37) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = INT16_MAX;
	int64_t x402 = INT64_MIN;
	volatile uint64_t x404 = 186LLU;
	volatile int32_t t100 = 1;

    t100 = (x401|((x402==x403)>x404));

    if (t100 != 32767) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint8_t x405 = 4U;
	static uint64_t x406 = 819208930LLU;

    t101 = (x405|((x406==x407)>x408));

    if (t101 != 5) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint8_t x409 = UINT8_MAX;
	int64_t x410 = INT64_MAX;
	static int8_t x411 = -12;
	int16_t x412 = -1;
	volatile int32_t t102 = -346687637;

    t102 = (x409|((x410==x411)>x412));

    if (t102 != 255) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x413 = INT16_MIN;
	int16_t x415 = -1;

    t103 = (x413|((x414==x415)>x416));

    if (t103 != -32767) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x418 = INT16_MAX;
	uint64_t x419 = 754098847912LLU;
	static int64_t x420 = -199057976LL;
	static volatile int64_t t104 = 1727295445811LL;

    t104 = (x417|((x418==x419)>x420));

    if (t104 != -1LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x421 = 6U;
	int8_t x422 = 50;
	int8_t x423 = -3;

    t105 = (x421|((x422==x423)>x424));

    if (t105 != 7) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x425 = 942508929LLU;
	static volatile uint64_t x426 = 1320926874159308LLU;
	volatile uint64_t x427 = 27576454239680LLU;
	uint16_t x428 = 1072U;
	uint64_t t106 = 1053738685LLU;

    t106 = (x425|((x426==x427)>x428));

    if (t106 != 942508929LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint16_t x430 = 2425U;
	int64_t x431 = INT64_MAX;
	int16_t x432 = INT16_MIN;
	static uint64_t t107 = 8637LLU;

    t107 = (x429|((x430==x431)>x432));

    if (t107 != 97LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x435 = INT16_MIN;
	uint32_t x436 = 34875U;
	volatile int32_t t108 = -825;

    t108 = (x433|((x434==x435)>x436));

    if (t108 != -1) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x437 = INT8_MIN;
	uint8_t x438 = UINT8_MAX;
	int16_t x439 = -128;

    t109 = (x437|((x438==x439)>x440));

    if (t109 != -127) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x442 = 95LLU;
	volatile int16_t x444 = INT16_MAX;
	static volatile uint32_t t110 = UINT32_MAX;

    t110 = (x441|((x442==x443)>x444));

    if (t110 != UINT32_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x445 = INT8_MIN;
	int32_t x446 = INT32_MAX;
	int8_t x447 = INT8_MAX;
	static uint64_t x448 = UINT64_MAX;
	volatile int32_t t111 = -1968;

    t111 = (x445|((x446==x447)>x448));

    if (t111 != -128) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x449 = 7682188566480357LLU;
	volatile int8_t x451 = 0;
	volatile uint32_t x452 = 2668748U;
	volatile uint64_t t112 = 16446450702082LLU;

    t112 = (x449|((x450==x451)>x452));

    if (t112 != 7682188566480357LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x453 = INT32_MIN;
	static volatile uint32_t x455 = 11U;
	static int32_t x456 = -128477;
	int32_t t113 = 3;

    t113 = (x453|((x454==x455)>x456));

    if (t113 != -2147483647) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int64_t x457 = INT64_MAX;
	int16_t x458 = -1;
	uint64_t x459 = UINT64_MAX;
	static int16_t x460 = -1;
	volatile int64_t t114 = INT64_MAX;

    t114 = (x457|((x458==x459)>x460));

    if (t114 != INT64_MAX) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint16_t x461 = 1U;
	volatile int64_t x463 = INT64_MIN;
	static int32_t x464 = INT32_MAX;

    t115 = (x461|((x462==x463)>x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x468 = -1LL;
	volatile int32_t t116 = INT32_MAX;

    t116 = (x465|((x466==x467)>x468));

    if (t116 != INT32_MAX) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x469 = 5328957U;
	uint8_t x470 = 2U;
	static int64_t x471 = INT64_MIN;
	int8_t x472 = INT8_MIN;
	static uint32_t t117 = 349U;

    t117 = (x469|((x470==x471)>x472));

    if (t117 != 5328957U) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = INT8_MIN;
	volatile uint32_t x474 = 56961U;
	volatile int16_t x475 = INT16_MIN;
	int8_t x476 = -1;

    t118 = (x473|((x474==x475)>x476));

    if (t118 != -127) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint64_t x477 = 1830956875787981578LLU;
	int16_t x478 = INT16_MAX;
	static int8_t x479 = INT8_MIN;
	volatile int64_t x480 = INT64_MIN;
	uint64_t t119 = 897826LLU;

    t119 = (x477|((x478==x479)>x480));

    if (t119 != 1830956875787981579LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x481 = INT8_MIN;
	int8_t x482 = -1;
	int8_t x483 = -1;
	int32_t t120 = 82087;

    t120 = (x481|((x482==x483)>x484));

    if (t120 != -128) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x485 = -5855680262402LL;
	int32_t x486 = -1;
	int8_t x487 = INT8_MIN;
	volatile int64_t t121 = 6738716075705LL;

    t121 = (x485|((x486==x487)>x488));

    if (t121 != -5855680262402LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x490 = -1;
	volatile int8_t x491 = 1;
	volatile int32_t t122 = 819;

    t122 = (x489|((x490==x491)>x492));

    if (t122 != -28) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = INT64_MAX;
	static int16_t x495 = -11793;
	int64_t x496 = 3292641591954222651LL;
	int64_t t123 = INT64_MAX;

    t123 = (x493|((x494==x495)>x496));

    if (t123 != INT64_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint32_t x497 = 39U;
	volatile int32_t x498 = INT32_MAX;
	int16_t x499 = -1;
	int8_t x500 = INT8_MIN;

    t124 = (x497|((x498==x499)>x500));

    if (t124 != 39U) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint8_t x502 = 0U;
	int64_t x504 = -4078574230LL;
	volatile int32_t t125 = -90;

    t125 = (x501|((x502==x503)>x504));

    if (t125 != -32767) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x506 = UINT16_MAX;
	int16_t x507 = INT16_MAX;
	static int32_t x508 = INT32_MAX;
	volatile int32_t t126 = INT32_MAX;

    t126 = (x505|((x506==x507)>x508));

    if (t126 != INT32_MAX) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x509 = INT16_MAX;
	uint16_t x510 = 1U;
	static int8_t x511 = -1;
	uint8_t x512 = 62U;

    t127 = (x509|((x510==x511)>x512));

    if (t127 != 32767) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int64_t x513 = -78026579576LL;
	volatile uint64_t x515 = 2634300LLU;
	int8_t x516 = -8;

    t128 = (x513|((x514==x515)>x516));

    if (t128 != -78026579575LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x517 = INT16_MIN;
	uint64_t x518 = 300839LLU;
	static int8_t x519 = INT8_MIN;
	static volatile int16_t x520 = INT16_MIN;
	int32_t t129 = 7;

    t129 = (x517|((x518==x519)>x520));

    if (t129 != -32767) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint32_t x522 = 1U;
	int32_t x523 = -1;
	volatile int8_t x524 = INT8_MIN;
	static volatile int32_t t130 = 533324366;

    t130 = (x521|((x522==x523)>x524));

    if (t130 != 127) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x525 = INT8_MIN;
	int8_t x526 = -56;
	int8_t x527 = INT8_MIN;
	static int32_t x528 = -1;
	static int32_t t131 = 5402;

    t131 = (x525|((x526==x527)>x528));

    if (t131 != -127) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x529 = 1235613LLU;
	int16_t x530 = -4644;

    t132 = (x529|((x530==x531)>x532));

    if (t132 != 1235613LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x535 = 48268;
	volatile int32_t t133 = -772;

    t133 = (x533|((x534==x535)>x536));

    if (t133 != -128) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x537 = INT16_MIN;
	int16_t x538 = -1;
	static volatile int8_t x539 = INT8_MAX;
	int16_t x540 = INT16_MAX;
	int32_t t134 = -374126064;

    t134 = (x537|((x538==x539)>x540));

    if (t134 != -32768) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = INT16_MIN;
	volatile int64_t x542 = INT64_MIN;
	uint8_t x543 = 0U;
	int64_t x544 = -1LL;
	volatile int32_t t135 = -366124793;

    t135 = (x541|((x542==x543)>x544));

    if (t135 != -32767) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x545 = INT64_MAX;
	int8_t x546 = -1;
	int32_t x547 = -1;
	static int8_t x548 = -1;
	volatile int64_t t136 = INT64_MAX;

    t136 = (x545|((x546==x547)>x548));

    if (t136 != INT64_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x549 = -1;
	int16_t x550 = INT16_MAX;
	int32_t x551 = -1;
	int32_t t137 = -1;

    t137 = (x549|((x550==x551)>x552));

    if (t137 != -1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x553 = UINT8_MAX;
	int8_t x554 = -1;
	int8_t x555 = INT8_MIN;

    t138 = (x553|((x554==x555)>x556));

    if (t138 != 255) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x557 = 10506535LL;
	uint32_t x559 = UINT32_MAX;
	int64_t x560 = INT64_MIN;
	int64_t t139 = 276721832079280154LL;

    t139 = (x557|((x558==x559)>x560));

    if (t139 != 10506535LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x561 = 9273U;
	int32_t x562 = -394;
	static volatile uint32_t x563 = 3077U;
	uint8_t x564 = 82U;
	int32_t t140 = -2216686;

    t140 = (x561|((x562==x563)>x564));

    if (t140 != 9273) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x566 = 892700972046003LLU;
	int64_t x567 = INT64_MIN;

    t141 = (x565|((x566==x567)>x568));

    if (t141 != 19) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x569 = -11;
	volatile int64_t x570 = INT64_MAX;
	uint64_t x571 = 213853952906538LLU;
	volatile int32_t t142 = 494973289;

    t142 = (x569|((x570==x571)>x572));

    if (t142 != -11) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x573 = INT16_MAX;
	uint64_t x574 = UINT64_MAX;
	static int32_t x576 = -1;
	int32_t t143 = 23007;

    t143 = (x573|((x574==x575)>x576));

    if (t143 != 32767) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int32_t x577 = 1423672;
	int64_t x579 = 435917LL;
	int32_t x580 = INT32_MAX;
	int32_t t144 = 141252614;

    t144 = (x577|((x578==x579)>x580));

    if (t144 != 1423672) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x581 = -55944736;
	uint64_t x582 = 53078196832786LLU;
	int32_t t145 = -352249374;

    t145 = (x581|((x582==x583)>x584));

    if (t145 != -55944735) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x586 = 5U;
	static volatile int32_t x587 = -1;
	uint8_t x588 = UINT8_MAX;
	volatile int64_t t146 = INT64_MIN;

    t146 = (x585|((x586==x587)>x588));

    if (t146 != INT64_MIN) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x590 = INT32_MAX;
	int16_t x591 = INT16_MIN;
	int8_t x592 = INT8_MIN;
	static int32_t t147 = 3;

    t147 = (x589|((x590==x591)>x592));

    if (t147 != 371) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x593 = 37U;
	volatile int32_t t148 = -28;

    t148 = (x593|((x594==x595)>x596));

    if (t148 != 37) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint64_t x597 = 28138LLU;
	static int64_t x598 = INT64_MIN;
	uint32_t x600 = UINT32_MAX;
	uint64_t t149 = 342LLU;

    t149 = (x597|((x598==x599)>x600));

    if (t149 != 28138LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x601 = INT16_MIN;
	int32_t x602 = INT32_MIN;
	int16_t x603 = INT16_MAX;
	static int16_t x604 = -1;
	volatile int32_t t150 = -164;

    t150 = (x601|((x602==x603)>x604));

    if (t150 != -32767) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x605 = UINT8_MAX;
	int32_t x606 = INT32_MAX;
	int8_t x608 = INT8_MIN;

    t151 = (x605|((x606==x607)>x608));

    if (t151 != 255) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x609 = -1;
	static volatile int16_t x610 = INT16_MIN;
	int64_t x611 = 396740601461128249LL;
	int8_t x612 = -1;
	volatile int32_t t152 = -1773;

    t152 = (x609|((x610==x611)>x612));

    if (t152 != -1) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x613 = -1;
	static int16_t x614 = 21;
	int32_t x615 = 4;
	int64_t x616 = INT64_MIN;

    t153 = (x613|((x614==x615)>x616));

    if (t153 != -1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint64_t x617 = UINT64_MAX;
	static uint64_t t154 = UINT64_MAX;

    t154 = (x617|((x618==x619)>x620));

    if (t154 != UINT64_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x621 = INT16_MIN;
	static int64_t x622 = -1LL;
	int64_t x623 = -1LL;
	int64_t x624 = INT64_MIN;
	volatile int32_t t155 = -30;

    t155 = (x621|((x622==x623)>x624));

    if (t155 != -32767) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x625 = -3;
	int64_t x627 = INT64_MAX;
	int32_t t156 = 1;

    t156 = (x625|((x626==x627)>x628));

    if (t156 != -3) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint32_t x629 = 556744U;
	volatile int8_t x630 = -1;
	uint32_t x631 = 163U;

    t157 = (x629|((x630==x631)>x632));

    if (t157 != 556745U) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x633 = 6175522;
	int32_t x634 = INT32_MIN;
	volatile uint64_t x635 = 3181LLU;
	volatile int32_t t158 = -1615089;

    t158 = (x633|((x634==x635)>x636));

    if (t158 != 6175523) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x638 = 1U;
	static int64_t x640 = INT64_MIN;
	int32_t t159 = -733391;

    t159 = (x637|((x638==x639)>x640));

    if (t159 != 10605) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x641 = INT32_MIN;
	int8_t x642 = INT8_MIN;
	int64_t x643 = INT64_MIN;
	static int16_t x644 = 17;
	int32_t t160 = INT32_MIN;

    t160 = (x641|((x642==x643)>x644));

    if (t160 != INT32_MIN) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint8_t x645 = 0U;
	uint8_t x646 = UINT8_MAX;
	int64_t x647 = INT64_MIN;
	int32_t t161 = 1508;

    t161 = (x645|((x646==x647)>x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = -1LL;
	int8_t x651 = -8;
	int16_t x652 = -16;

    t162 = (x649|((x650==x651)>x652));

    if (t162 != -1LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x653 = INT16_MIN;
	static volatile int64_t x654 = INT64_MAX;
	static uint8_t x655 = 2U;
	int32_t t163 = 6915;

    t163 = (x653|((x654==x655)>x656));

    if (t163 != -32768) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint16_t x658 = 1311U;
	int16_t x659 = INT16_MAX;
	volatile uint64_t x660 = 1LLU;
	volatile int32_t t164 = -402933228;

    t164 = (x657|((x658==x659)>x660));

    if (t164 != 6) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x661 = INT32_MAX;
	int32_t x662 = -1;
	volatile int32_t x663 = -26;
	int32_t t165 = INT32_MAX;

    t165 = (x661|((x662==x663)>x664));

    if (t165 != INT32_MAX) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x665 = INT32_MAX;
	int8_t x666 = INT8_MIN;
	uint64_t x667 = 48325970455104LLU;
	int32_t t166 = INT32_MAX;

    t166 = (x665|((x666==x667)>x668));

    if (t166 != INT32_MAX) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint8_t x669 = 4U;
	static int8_t x670 = INT8_MAX;
	int16_t x671 = INT16_MAX;
	volatile int64_t x672 = INT64_MAX;
	int32_t t167 = 1677135;

    t167 = (x669|((x670==x671)>x672));

    if (t167 != 4) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int32_t x675 = -1;
	static uint8_t x676 = UINT8_MAX;
	int64_t t168 = INT64_MIN;

    t168 = (x673|((x674==x675)>x676));

    if (t168 != INT64_MIN) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = INT32_MIN;
	int32_t x678 = INT32_MIN;
	static volatile int16_t x679 = 481;
	volatile int32_t t169 = INT32_MIN;

    t169 = (x677|((x678==x679)>x680));

    if (t169 != INT32_MIN) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint8_t x681 = UINT8_MAX;
	int8_t x682 = 0;
	int8_t x683 = 0;
	int16_t x684 = INT16_MIN;
	volatile int32_t t170 = -1;

    t170 = (x681|((x682==x683)>x684));

    if (t170 != 255) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x686 = INT64_MAX;
	static volatile int8_t x687 = -22;
	volatile int64_t x688 = INT64_MIN;
	volatile uint32_t t171 = UINT32_MAX;

    t171 = (x685|((x686==x687)>x688));

    if (t171 != UINT32_MAX) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x690 = 4U;
	int32_t x691 = INT32_MAX;
	uint16_t x692 = UINT16_MAX;
	static int64_t t172 = INT64_MIN;

    t172 = (x689|((x690==x691)>x692));

    if (t172 != INT64_MIN) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x693 = INT8_MIN;
	volatile int8_t x694 = INT8_MAX;
	int16_t x695 = -1;
	volatile int32_t t173 = 32536334;

    t173 = (x693|((x694==x695)>x696));

    if (t173 != -128) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x697 = INT64_MAX;
	int64_t x698 = 10661410LL;
	int64_t x700 = -762916995727332LL;
	static volatile int64_t t174 = INT64_MAX;

    t174 = (x697|((x698==x699)>x700));

    if (t174 != INT64_MAX) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x701 = 0U;
	uint8_t x702 = 6U;
	int64_t x703 = INT64_MIN;
	static volatile int32_t x704 = -1;
	int32_t t175 = 21;

    t175 = (x701|((x702==x703)>x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x705 = INT64_MIN;
	static uint64_t x706 = 807752961802312LLU;
	static int8_t x707 = -1;
	static int64_t x708 = INT64_MIN;
	volatile int64_t t176 = -2078818032LL;

    t176 = (x705|((x706==x707)>x708));

    if (t176 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x709 = UINT8_MAX;
	int8_t x710 = -1;
	uint8_t x711 = 30U;
	int16_t x712 = INT16_MIN;
	static volatile int32_t t177 = 29;

    t177 = (x709|((x710==x711)>x712));

    if (t177 != 255) { NG(); } else { ; }
	
}

void f178(void) {
    	static int64_t x714 = -734260736225702LL;
	int32_t x715 = INT32_MIN;
	uint64_t x716 = 1LLU;
	int64_t t178 = -596LL;

    t178 = (x713|((x714==x715)>x716));

    if (t178 != -1LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint16_t x717 = 1279U;
	uint8_t x718 = 81U;
	static int64_t x719 = -5859LL;
	int16_t x720 = INT16_MIN;
	int32_t t179 = -91400;

    t179 = (x717|((x718==x719)>x720));

    if (t179 != 1279) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile int8_t x721 = INT8_MIN;
	int64_t x722 = INT64_MAX;
	uint32_t x724 = 703164U;
	int32_t t180 = -332;

    t180 = (x721|((x722==x723)>x724));

    if (t180 != -128) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x725 = -1;
	uint64_t x726 = UINT64_MAX;
	int64_t x727 = INT64_MIN;
	int8_t x728 = -1;
	int32_t t181 = -394;

    t181 = (x725|((x726==x727)>x728));

    if (t181 != -1) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile int64_t x729 = -14748778961409LL;
	int8_t x730 = INT8_MIN;
	static uint8_t x731 = 9U;
	static uint32_t x732 = UINT32_MAX;

    t182 = (x729|((x730==x731)>x732));

    if (t182 != -14748778961409LL) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x733 = INT16_MIN;
	volatile uint32_t x734 = UINT32_MAX;
	int16_t x735 = -477;
	volatile int16_t x736 = INT16_MAX;
	volatile int32_t t183 = -1646;

    t183 = (x733|((x734==x735)>x736));

    if (t183 != -32768) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x737 = 26;
	static int64_t x738 = -1LL;
	static int64_t x739 = INT64_MIN;
	uint8_t x740 = 19U;
	static volatile int32_t t184 = 268891;

    t184 = (x737|((x738==x739)>x740));

    if (t184 != 26) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x741 = -1;
	int32_t x742 = 481905340;
	uint32_t x743 = UINT32_MAX;
	volatile int32_t t185 = -4768449;

    t185 = (x741|((x742==x743)>x744));

    if (t185 != -1) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x745 = INT64_MIN;
	volatile uint16_t x746 = UINT16_MAX;
	int64_t t186 = 1730198LL;

    t186 = (x745|((x746==x747)>x748));

    if (t186 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x749 = UINT64_MAX;
	volatile int32_t x751 = -1;

    t187 = (x749|((x750==x751)>x752));

    if (t187 != UINT64_MAX) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x753 = 366U;
	static int64_t x754 = INT64_MAX;
	int16_t x755 = INT16_MAX;
	int16_t x756 = INT16_MIN;
	volatile int32_t t188 = 1072023;

    t188 = (x753|((x754==x755)>x756));

    if (t188 != 367) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x757 = 0U;
	uint32_t x758 = 2U;
	uint64_t x759 = 911397044LLU;
	static volatile int8_t x760 = -5;
	volatile int32_t t189 = 7329457;

    t189 = (x757|((x758==x759)>x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x762 = INT16_MIN;
	uint32_t x763 = UINT32_MAX;
	uint64_t x764 = 2213176938786892158LLU;
	volatile int32_t t190 = INT32_MAX;

    t190 = (x761|((x762==x763)>x764));

    if (t190 != INT32_MAX) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int64_t x767 = INT64_MIN;
	int64_t x768 = -14156686LL;
	volatile int32_t t191 = -99530514;

    t191 = (x765|((x766==x767)>x768));

    if (t191 != 255) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x769 = 4U;
	uint32_t x770 = 90429U;
	int64_t x771 = INT64_MIN;
	static volatile uint64_t x772 = 38162LLU;
	volatile int32_t t192 = 1589511;

    t192 = (x769|((x770==x771)>x772));

    if (t192 != 4) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x773 = -1;
	int8_t x774 = INT8_MIN;
	int64_t x775 = INT64_MAX;
	static volatile int64_t x776 = INT64_MIN;

    t193 = (x773|((x774==x775)>x776));

    if (t193 != -1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x777 = INT8_MIN;
	static int32_t x778 = INT32_MIN;
	static uint32_t x779 = 1172414670U;
	int64_t x780 = -277711256642LL;
	static volatile int32_t t194 = 80;

    t194 = (x777|((x778==x779)>x780));

    if (t194 != -127) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile uint16_t x781 = 104U;
	int64_t x783 = 27556792926LL;
	volatile uint16_t x784 = 97U;
	volatile int32_t t195 = 4;

    t195 = (x781|((x782==x783)>x784));

    if (t195 != 104) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int8_t x787 = -1;
	int32_t t196 = 331;

    t196 = (x785|((x786==x787)>x788));

    if (t196 != -1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x789 = INT64_MAX;
	int16_t x790 = 328;
	volatile uint32_t x792 = 22717U;
	volatile int64_t t197 = INT64_MAX;

    t197 = (x789|((x790==x791)>x792));

    if (t197 != INT64_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x793 = -1;
	int16_t x794 = INT16_MIN;
	static volatile int8_t x795 = INT8_MIN;
	static volatile int32_t t198 = 114474488;

    t198 = (x793|((x794==x795)>x796));

    if (t198 != -1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x797 = 21U;
	int8_t x798 = -1;
	static int16_t x799 = INT16_MIN;
	int16_t x800 = INT16_MAX;
	int32_t t199 = 143;

    t199 = (x797|((x798==x799)>x800));

    if (t199 != 21) { NG(); } else { ; }
	
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

