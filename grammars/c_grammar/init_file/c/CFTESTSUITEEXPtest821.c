
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

static uint8_t x4 = UINT8_MAX;
int8_t x12 = INT8_MAX;
uint8_t x13 = UINT8_MAX;
int32_t x18 = -1;
volatile int64_t x22 = INT64_MAX;
static int32_t x23 = INT32_MIN;
int32_t t8 = -21526;
static int32_t x46 = 13;
uint16_t x49 = 812U;
int8_t x51 = 1;
uint32_t x52 = UINT32_MAX;
volatile int16_t x53 = -31;
static uint16_t x54 = 289U;
volatile uint8_t x64 = 94U;
uint64_t x66 = UINT64_MAX;
int32_t t17 = 671418;
int16_t x79 = INT16_MIN;
int32_t x98 = INT32_MIN;
int32_t t23 = -3083;
uint32_t x104 = 796U;
int32_t t24 = 0;
static int64_t x106 = INT64_MIN;
int64_t x109 = INT64_MAX;
int16_t x110 = INT16_MAX;
static int16_t x114 = -1;
uint32_t x123 = 1U;
int8_t x126 = -1;
int32_t x136 = 1027510;
int64_t x143 = 3756LL;
volatile int32_t t33 = -42;
static uint8_t x160 = 1U;
int32_t x161 = -1;
uint32_t x167 = UINT32_MAX;
static int64_t x168 = -1LL;
static volatile int16_t x181 = INT16_MIN;
int16_t x188 = INT16_MIN;
int32_t t39 = -17729;
volatile int16_t x193 = INT16_MIN;
int8_t x200 = INT8_MIN;
int32_t t41 = 268133094;
int32_t t42 = 12675077;
volatile int32_t x206 = -224923786;
static int32_t x209 = -1;
int32_t x211 = 6;
uint64_t x217 = 138664372LLU;
volatile int32_t x225 = -1711151;
int8_t x229 = INT8_MIN;
int64_t x232 = -199LL;
volatile uint64_t x233 = 1786781282LLU;
static int64_t x234 = -116176352389153588LL;
volatile int32_t t51 = 729;
int64_t x247 = INT64_MIN;
int32_t t53 = 209;
int8_t x253 = 0;
int32_t x272 = -1548514;
int32_t t58 = -732583187;
volatile int32_t t60 = -1485532;
uint32_t x286 = 5261U;
int8_t x287 = -13;
static uint64_t x291 = 1438007LLU;
int8_t x294 = 0;
int64_t x297 = INT64_MIN;
static volatile int16_t x299 = INT16_MAX;
volatile int16_t x300 = INT16_MIN;
int32_t t64 = -2026;
int32_t t65 = -15169;
int32_t t66 = -2467046;
int64_t x315 = -1LL;
volatile uint8_t x325 = UINT8_MAX;
static uint8_t x328 = 7U;
int32_t x330 = -13997;
volatile int16_t x333 = -1;
volatile int64_t x334 = -1LL;
static volatile int64_t x338 = INT64_MAX;
int32_t t72 = 83331163;
uint16_t x348 = UINT16_MAX;
int16_t x350 = INT16_MIN;
static int32_t t75 = -2;
volatile int32_t t76 = 438909179;
static volatile int32_t x364 = INT32_MIN;
volatile int16_t x365 = -11;
int64_t x367 = INT64_MIN;
int32_t t79 = -153884;
uint64_t x382 = 16610899401LLU;
uint32_t x384 = 0U;
int32_t t82 = 13;
static volatile int32_t x385 = -1;
volatile int32_t x388 = INT32_MIN;
uint32_t x389 = UINT32_MAX;
static int64_t x399 = INT64_MIN;
static volatile int32_t t86 = -80;
uint64_t x406 = UINT64_MAX;
volatile int32_t t87 = -794;
volatile int64_t x415 = -1LL;
uint32_t x416 = 6146707U;
volatile int32_t t89 = -25001030;
static uint8_t x417 = UINT8_MAX;
int8_t x428 = INT8_MIN;
volatile int8_t x449 = INT8_MIN;
int8_t x457 = INT8_MAX;
static volatile int8_t x464 = -1;
uint64_t x466 = 8067193LLU;
volatile uint16_t x467 = 128U;
int32_t t99 = -4738029;
int32_t x476 = INT32_MIN;
int16_t x481 = -123;
int32_t x482 = INT32_MIN;
int8_t x488 = INT8_MAX;
static int8_t x498 = INT8_MAX;
int64_t x500 = -12851984612493LL;
uint64_t x503 = 9113561044LLU;
int64_t x515 = 29750387696316LL;
volatile int32_t t110 = -1;
int16_t x524 = -1;
int32_t t111 = 1;
int32_t x525 = INT32_MIN;
int64_t x528 = -1LL;
uint32_t x531 = UINT32_MAX;
int16_t x538 = 3752;
int16_t x543 = 588;
static int8_t x548 = 3;
int8_t x550 = INT8_MIN;
uint8_t x560 = 2U;
volatile int32_t t122 = -659231291;
int64_t x577 = INT64_MIN;
uint64_t x578 = 49348391800LLU;
static int64_t x581 = INT64_MAX;
uint32_t x591 = UINT32_MAX;
volatile int32_t x595 = INT32_MIN;
static volatile int32_t t129 = 2728351;
int64_t x602 = INT64_MIN;
uint32_t x604 = 768046U;
int8_t x605 = -10;
static uint8_t x610 = 119U;
int16_t x619 = 2877;
int16_t x622 = INT16_MAX;
static volatile int64_t x627 = -1LL;
int16_t x628 = -1;
volatile int16_t x629 = 23;
int32_t x634 = INT32_MIN;
int32_t t138 = 331883441;
uint16_t x646 = UINT16_MAX;
volatile int32_t t140 = 15;
int64_t x649 = INT64_MIN;
static volatile int32_t t142 = 54512751;
static uint16_t x659 = 216U;
int8_t x660 = 14;
int32_t t143 = 16053;
static int8_t x661 = 1;
int8_t x663 = INT8_MIN;
int32_t x666 = INT32_MAX;
uint8_t x669 = 42U;
volatile uint8_t x671 = 61U;
int16_t x672 = -13;
static int8_t x679 = -1;
volatile int32_t x688 = -1;
volatile int16_t x689 = INT16_MIN;
int8_t x695 = -52;
static volatile int32_t t152 = -444479605;
static uint8_t x713 = 1U;
static volatile int64_t x722 = -2197044021LL;
int64_t x726 = -563625812087323LL;
volatile int32_t t158 = 33105027;
volatile int8_t x735 = -1;
int16_t x744 = INT16_MIN;
int32_t t161 = 1785097;
volatile int32_t t162 = -69;
int16_t x751 = 21;
int32_t x752 = -3074;
volatile int16_t x759 = 1;
volatile int32_t t166 = 0;
uint64_t x769 = 197960329147999LLU;
volatile uint8_t x785 = 1U;
volatile int16_t x786 = -1;
volatile int64_t x787 = -40384606545LL;
volatile int32_t t172 = 959015479;
uint16_t x789 = UINT16_MAX;
volatile uint16_t x790 = UINT16_MAX;
volatile uint16_t x793 = UINT16_MAX;
int64_t x795 = -15234448605109313LL;
volatile int16_t x811 = INT16_MIN;
uint32_t x814 = UINT32_MAX;
int8_t x818 = INT8_MIN;
int32_t x819 = INT32_MIN;
int32_t t180 = 30;
uint64_t x830 = UINT64_MAX;
uint32_t x839 = 711429U;
static int32_t x844 = -1;
uint64_t x858 = UINT64_MAX;
volatile int32_t t188 = -24;
volatile int32_t x869 = INT32_MAX;
int16_t x884 = INT16_MIN;
int32_t t194 = 1;
int8_t x885 = INT8_MIN;
int32_t t195 = 383239821;
static int32_t x889 = -1;
int16_t x892 = -1;
uint32_t x900 = UINT32_MAX;
volatile int8_t x905 = -1;
static int32_t x907 = INT32_MAX;


void f0(void) {
    	static int32_t x1 = INT32_MIN;
	volatile uint64_t x2 = 1673792162LLU;
	static int64_t x3 = INT64_MIN;
	int32_t t0 = -259854362;

    t0 = (x1>((x2%x3)*x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = -223;
	uint32_t x6 = 81U;
	volatile int32_t x7 = INT32_MIN;
	int32_t x8 = 5;
	volatile int32_t t1 = 139677;

    t1 = (x5>((x6%x7)*x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = 1U;
	static int8_t x10 = INT8_MAX;
	uint64_t x11 = 4186596748LLU;
	int32_t t2 = 44038;

    t2 = (x9>((x10%x11)*x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x14 = UINT16_MAX;
	uint16_t x15 = UINT16_MAX;
	int8_t x16 = INT8_MIN;
	int32_t t3 = 16;

    t3 = (x13>((x14%x15)*x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int16_t x17 = 0;
	static int8_t x19 = INT8_MIN;
	volatile int64_t x20 = INT64_MAX;
	volatile int32_t t4 = -63;

    t4 = (x17>((x18%x19)*x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x21 = -15913LL;
	uint8_t x24 = 8U;
	volatile int32_t t5 = -877578;

    t5 = (x21>((x22%x23)*x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = 23644637120LLU;
	volatile uint32_t x26 = 2208U;
	static uint8_t x27 = 44U;
	int32_t x28 = -69201;
	static volatile int32_t t6 = 6321165;

    t6 = (x25>((x26%x27)*x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = INT64_MIN;
	int64_t x30 = -1LL;
	int8_t x31 = -1;
	uint64_t x32 = 1078265514LLU;
	volatile int32_t t7 = -3333;

    t7 = (x29>((x30%x31)*x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = 101;
	static volatile int8_t x34 = INT8_MAX;
	uint32_t x35 = UINT32_MAX;
	int16_t x36 = INT16_MIN;

    t8 = (x33>((x34%x35)*x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint8_t x41 = 64U;
	static int16_t x42 = 79;
	int32_t x43 = 6031;
	uint8_t x44 = 3U;
	int32_t t9 = -173870792;

    t9 = (x41>((x42%x43)*x44));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x45 = -1;
	int64_t x47 = INT64_MAX;
	int32_t x48 = INT32_MAX;
	static volatile int32_t t10 = -9603980;

    t10 = (x45>((x46%x47)*x48));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x50 = 1U;
	volatile int32_t t11 = 27697;

    t11 = (x49>((x50%x51)*x52));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static int32_t x55 = -1;
	int32_t x56 = INT32_MIN;
	volatile int32_t t12 = 90;

    t12 = (x53>((x54%x55)*x56));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x57 = 0U;
	int16_t x58 = -1;
	volatile int64_t x59 = -1LL;
	uint32_t x60 = UINT32_MAX;
	int32_t t13 = -5107;

    t13 = (x57>((x58%x59)*x60));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x61 = INT8_MIN;
	int64_t x62 = -17440099466566LL;
	uint16_t x63 = 3578U;
	volatile int32_t t14 = -245;

    t14 = (x61>((x62%x63)*x64));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x65 = -24852499;
	uint64_t x67 = 3764LLU;
	int64_t x68 = INT64_MIN;
	static volatile int32_t t15 = 97;

    t15 = (x65>((x66%x67)*x68));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static int16_t x69 = INT16_MAX;
	int16_t x70 = 50;
	uint64_t x71 = 36LLU;
	static int64_t x72 = 1LL;
	volatile int32_t t16 = 409610868;

    t16 = (x69>((x70%x71)*x72));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x73 = INT32_MIN;
	int32_t x74 = -3690;
	int16_t x75 = INT16_MIN;
	int16_t x76 = -1;

    t17 = (x73>((x74%x75)*x76));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int32_t x77 = INT32_MIN;
	int64_t x78 = -1LL;
	static int8_t x80 = INT8_MIN;
	int32_t t18 = 826;

    t18 = (x77>((x78%x79)*x80));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x81 = -1;
	uint8_t x82 = 54U;
	int64_t x83 = -1LL;
	static volatile int64_t x84 = -3102014349LL;
	volatile int32_t t19 = 109;

    t19 = (x81>((x82%x83)*x84));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x85 = 1U;
	volatile int32_t x86 = INT32_MIN;
	int64_t x87 = -71120LL;
	int8_t x88 = 1;
	static int32_t t20 = -368;

    t20 = (x85>((x86%x87)*x88));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x89 = UINT32_MAX;
	uint64_t x90 = 1865918844LLU;
	static uint32_t x91 = 317800U;
	volatile uint8_t x92 = 84U;
	int32_t t21 = -794961968;

    t21 = (x89>((x90%x91)*x92));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x93 = 4011U;
	static int8_t x94 = INT8_MIN;
	uint64_t x95 = 31849566316226LLU;
	int8_t x96 = INT8_MAX;
	volatile int32_t t22 = 0;

    t22 = (x93>((x94%x95)*x96));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint64_t x97 = 43503986956281LLU;
	int64_t x99 = 850291481542243668LL;
	static uint32_t x100 = UINT32_MAX;

    t23 = (x97>((x98%x99)*x100));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x101 = UINT8_MAX;
	static int32_t x102 = INT32_MIN;
	int32_t x103 = -1;

    t24 = (x101>((x102%x103)*x104));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int64_t x105 = -1LL;
	volatile int16_t x107 = -1851;
	static int8_t x108 = -1;
	int32_t t25 = -57;

    t25 = (x105>((x106%x107)*x108));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x111 = 24062310986LL;
	int8_t x112 = INT8_MAX;
	volatile int32_t t26 = 44890;

    t26 = (x109>((x110%x111)*x112));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint64_t x113 = UINT64_MAX;
	int8_t x115 = 1;
	volatile int64_t x116 = -1LL;
	static volatile int32_t t27 = -5204;

    t27 = (x113>((x114%x115)*x116));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x121 = -1;
	uint8_t x122 = 119U;
	int8_t x124 = INT8_MIN;
	static volatile int32_t t28 = -8582999;

    t28 = (x121>((x122%x123)*x124));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x125 = INT8_MIN;
	static int64_t x127 = -1LL;
	int16_t x128 = INT16_MAX;
	static int32_t t29 = -155258;

    t29 = (x125>((x126%x127)*x128));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint8_t x133 = UINT8_MAX;
	static int8_t x134 = -1;
	volatile uint16_t x135 = 2320U;
	volatile int32_t t30 = -1438;

    t30 = (x133>((x134%x135)*x136));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint8_t x137 = 9U;
	uint32_t x138 = 3521900U;
	int64_t x139 = INT64_MAX;
	int16_t x140 = INT16_MIN;
	volatile int32_t t31 = -106782199;

    t31 = (x137>((x138%x139)*x140));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x141 = -1;
	int32_t x142 = INT32_MIN;
	volatile uint8_t x144 = 124U;
	volatile int32_t t32 = -397836;

    t32 = (x141>((x142%x143)*x144));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x149 = 2365;
	int8_t x150 = -1;
	volatile int64_t x151 = 1466006537096LL;
	volatile uint32_t x152 = 65135606U;

    t33 = (x149>((x150%x151)*x152));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x157 = -10064;
	volatile int16_t x158 = INT16_MIN;
	int32_t x159 = -7812730;
	volatile int32_t t34 = 13073173;

    t34 = (x157>((x158%x159)*x160));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x162 = INT16_MAX;
	uint64_t x163 = 29820905042325762LLU;
	uint16_t x164 = 29315U;
	static int32_t t35 = 2;

    t35 = (x161>((x162%x163)*x164));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x165 = INT16_MIN;
	int32_t x166 = 501;
	volatile int32_t t36 = 2549546;

    t36 = (x165>((x166%x167)*x168));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x169 = -1;
	static uint64_t x170 = UINT64_MAX;
	volatile uint32_t x171 = UINT32_MAX;
	int32_t x172 = 315;
	int32_t t37 = 2;

    t37 = (x169>((x170%x171)*x172));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x182 = 83377994U;
	int32_t x183 = INT32_MIN;
	uint16_t x184 = 59U;
	static int32_t t38 = -12267;

    t38 = (x181>((x182%x183)*x184));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x185 = -7;
	static volatile int8_t x186 = INT8_MIN;
	int8_t x187 = -11;

    t39 = (x185>((x186%x187)*x188));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x194 = UINT8_MAX;
	static int16_t x195 = 3;
	int32_t x196 = INT32_MIN;
	int32_t t40 = -11069;

    t40 = (x193>((x194%x195)*x196));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x197 = INT8_MIN;
	uint16_t x198 = 5036U;
	static int32_t x199 = INT32_MAX;

    t41 = (x197>((x198%x199)*x200));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint32_t x201 = 132395U;
	static int16_t x202 = INT16_MIN;
	int16_t x203 = INT16_MAX;
	int64_t x204 = -1LL;

    t42 = (x201>((x202%x203)*x204));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x205 = -6;
	int8_t x207 = INT8_MIN;
	uint32_t x208 = UINT32_MAX;
	volatile int32_t t43 = 217;

    t43 = (x205>((x206%x207)*x208));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x210 = INT64_MIN;
	int8_t x212 = INT8_MIN;
	static volatile int32_t t44 = 28764637;

    t44 = (x209>((x210%x211)*x212));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x213 = -1LL;
	int16_t x214 = INT16_MAX;
	uint32_t x215 = 3U;
	volatile int64_t x216 = INT64_MAX;
	volatile int32_t t45 = 0;

    t45 = (x213>((x214%x215)*x216));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x218 = 135701490069704LLU;
	static int8_t x219 = INT8_MIN;
	uint32_t x220 = 7889U;
	int32_t t46 = 178498;

    t46 = (x217>((x218%x219)*x220));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x221 = INT64_MIN;
	int64_t x222 = -4529782LL;
	volatile uint32_t x223 = 2U;
	int8_t x224 = INT8_MIN;
	static volatile int32_t t47 = 3210;

    t47 = (x221>((x222%x223)*x224));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x226 = INT64_MAX;
	int32_t x227 = INT32_MIN;
	int32_t x228 = INT32_MIN;
	volatile int32_t t48 = 1040311;

    t48 = (x225>((x226%x227)*x228));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x230 = -1;
	uint16_t x231 = 158U;
	int32_t t49 = 495248;

    t49 = (x229>((x230%x231)*x232));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x235 = 3377081224151247954LLU;
	volatile uint16_t x236 = UINT16_MAX;
	static volatile int32_t t50 = -22996365;

    t50 = (x233>((x234%x235)*x236));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x237 = INT8_MAX;
	volatile int64_t x238 = 15205620LL;
	static int16_t x239 = -1;
	volatile int32_t x240 = INT32_MIN;

    t51 = (x237>((x238%x239)*x240));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x241 = UINT64_MAX;
	volatile uint64_t x242 = 5064298783196LLU;
	int64_t x243 = INT64_MIN;
	uint64_t x244 = 388566803692171LLU;
	int32_t t52 = -12;

    t52 = (x241>((x242%x243)*x244));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x245 = 3;
	static int16_t x246 = INT16_MIN;
	uint8_t x248 = 2U;

    t53 = (x245>((x246%x247)*x248));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x249 = INT32_MIN;
	static int64_t x250 = INT64_MIN;
	int8_t x251 = 12;
	volatile int8_t x252 = -6;
	int32_t t54 = 0;

    t54 = (x249>((x250%x251)*x252));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile uint64_t x254 = 59955660134950LLU;
	int64_t x255 = -1LL;
	volatile int64_t x256 = INT64_MIN;
	int32_t t55 = 568708;

    t55 = (x253>((x254%x255)*x256));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x261 = 310;
	int8_t x262 = INT8_MIN;
	int16_t x263 = INT16_MIN;
	int8_t x264 = INT8_MIN;
	static volatile int32_t t56 = -40;

    t56 = (x261>((x262%x263)*x264));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint64_t x269 = 43200151600067396LLU;
	volatile int8_t x270 = INT8_MIN;
	int16_t x271 = INT16_MAX;
	int32_t t57 = -671738775;

    t57 = (x269>((x270%x271)*x272));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x273 = UINT16_MAX;
	int16_t x274 = INT16_MIN;
	volatile uint8_t x275 = UINT8_MAX;
	uint8_t x276 = 7U;

    t58 = (x273>((x274%x275)*x276));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x277 = 2986U;
	volatile int64_t x278 = INT64_MAX;
	volatile int8_t x279 = -1;
	static int8_t x280 = -1;
	int32_t t59 = 234;

    t59 = (x277>((x278%x279)*x280));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x281 = UINT64_MAX;
	static int32_t x282 = -1;
	int8_t x283 = INT8_MIN;
	int32_t x284 = -15977115;

    t60 = (x281>((x282%x283)*x284));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x285 = 47U;
	uint8_t x288 = UINT8_MAX;
	volatile int32_t t61 = -24927;

    t61 = (x285>((x286%x287)*x288));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint16_t x289 = 24037U;
	int16_t x290 = -1;
	int32_t x292 = INT32_MIN;
	static int32_t t62 = -243;

    t62 = (x289>((x290%x291)*x292));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x293 = INT16_MIN;
	int16_t x295 = INT16_MAX;
	uint16_t x296 = 1U;
	int32_t t63 = 1559932;

    t63 = (x293>((x294%x295)*x296));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x298 = -1;

    t64 = (x297>((x298%x299)*x300));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint16_t x301 = 980U;
	int32_t x302 = INT32_MIN;
	static volatile int64_t x303 = INT64_MIN;
	uint16_t x304 = UINT16_MAX;

    t65 = (x301>((x302%x303)*x304));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x305 = INT64_MIN;
	static int64_t x306 = INT64_MIN;
	int8_t x307 = -1;
	volatile int8_t x308 = 1;

    t66 = (x305>((x306%x307)*x308));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x313 = -1LL;
	uint16_t x314 = 581U;
	volatile int16_t x316 = INT16_MAX;
	volatile int32_t t67 = 537;

    t67 = (x313>((x314%x315)*x316));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x321 = INT64_MIN;
	int64_t x322 = INT64_MIN;
	uint8_t x323 = 12U;
	static int8_t x324 = -12;
	int32_t t68 = -984728;

    t68 = (x321>((x322%x323)*x324));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint16_t x326 = 485U;
	int32_t x327 = -1;
	int32_t t69 = -93021;

    t69 = (x325>((x326%x327)*x328));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x329 = 0;
	int64_t x331 = -1LL;
	volatile int64_t x332 = 329845848LL;
	volatile int32_t t70 = -4038500;

    t70 = (x329>((x330%x331)*x332));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x335 = 50U;
	static uint32_t x336 = UINT32_MAX;
	int32_t t71 = -710065511;

    t71 = (x333>((x334%x335)*x336));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x337 = INT32_MIN;
	uint8_t x339 = UINT8_MAX;
	uint16_t x340 = UINT16_MAX;

    t72 = (x337>((x338%x339)*x340));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int16_t x341 = INT16_MIN;
	uint16_t x342 = UINT16_MAX;
	int32_t x343 = -8;
	static int32_t x344 = -1;
	int32_t t73 = 690357000;

    t73 = (x341>((x342%x343)*x344));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x345 = -1;
	uint32_t x346 = UINT32_MAX;
	static volatile int32_t x347 = 4883;
	volatile int32_t t74 = 2601274;

    t74 = (x345>((x346%x347)*x348));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int16_t x349 = INT16_MIN;
	int16_t x351 = INT16_MIN;
	int32_t x352 = INT32_MIN;

    t75 = (x349>((x350%x351)*x352));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x353 = INT8_MAX;
	int8_t x354 = 43;
	volatile uint32_t x355 = UINT32_MAX;
	int32_t x356 = -1;

    t76 = (x353>((x354%x355)*x356));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x357 = -58563;
	int64_t x358 = -7320475LL;
	int32_t x359 = -1;
	int8_t x360 = INT8_MAX;
	volatile int32_t t77 = 0;

    t77 = (x357>((x358%x359)*x360));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int8_t x361 = INT8_MIN;
	uint64_t x362 = 346LLU;
	static uint64_t x363 = 529087940804407LLU;
	static int32_t t78 = -1317;

    t78 = (x361>((x362%x363)*x364));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x366 = -14;
	uint32_t x368 = 503662U;

    t79 = (x365>((x366%x367)*x368));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x369 = INT16_MAX;
	uint16_t x370 = UINT16_MAX;
	int16_t x371 = INT16_MAX;
	static int64_t x372 = INT64_MIN;
	static volatile int32_t t80 = 2;

    t80 = (x369>((x370%x371)*x372));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x373 = INT32_MIN;
	int32_t x374 = INT32_MIN;
	static int32_t x375 = -1;
	uint8_t x376 = 64U;
	int32_t t81 = -504071440;

    t81 = (x373>((x374%x375)*x376));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x381 = INT16_MAX;
	static int8_t x383 = -1;

    t82 = (x381>((x382%x383)*x384));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x386 = INT64_MIN;
	int32_t x387 = INT32_MIN;
	int32_t t83 = 551366;

    t83 = (x385>((x386%x387)*x388));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int8_t x390 = INT8_MIN;
	int16_t x391 = 3127;
	uint64_t x392 = 35567110LLU;
	int32_t t84 = 65;

    t84 = (x389>((x390%x391)*x392));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x397 = INT16_MIN;
	int32_t x398 = 17;
	uint16_t x400 = 125U;
	volatile int32_t t85 = -388992;

    t85 = (x397>((x398%x399)*x400));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x401 = 355LLU;
	volatile int64_t x402 = INT64_MAX;
	volatile int32_t x403 = INT32_MAX;
	volatile int16_t x404 = INT16_MIN;

    t86 = (x401>((x402%x403)*x404));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x405 = 1;
	uint16_t x407 = 158U;
	int8_t x408 = -1;

    t87 = (x405>((x406%x407)*x408));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x409 = UINT32_MAX;
	volatile int64_t x410 = INT64_MAX;
	static int16_t x411 = 1;
	int8_t x412 = -7;
	int32_t t88 = 95;

    t88 = (x409>((x410%x411)*x412));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x413 = INT16_MIN;
	static uint32_t x414 = UINT32_MAX;

    t89 = (x413>((x414%x415)*x416));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x418 = -1;
	int16_t x419 = -673;
	uint64_t x420 = UINT64_MAX;
	int32_t t90 = -1041929;

    t90 = (x417>((x418%x419)*x420));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x421 = UINT8_MAX;
	volatile uint64_t x422 = 3489631879LLU;
	static int32_t x423 = -716119109;
	int8_t x424 = 15;
	int32_t t91 = 1;

    t91 = (x421>((x422%x423)*x424));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x425 = INT64_MAX;
	uint64_t x426 = UINT64_MAX;
	static volatile int32_t x427 = 15307;
	int32_t t92 = -857797;

    t92 = (x425>((x426%x427)*x428));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x429 = 19;
	volatile uint16_t x430 = 1U;
	volatile int64_t x431 = INT64_MIN;
	uint32_t x432 = UINT32_MAX;
	int32_t t93 = -53236;

    t93 = (x429>((x430%x431)*x432));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x437 = -1;
	uint8_t x438 = 26U;
	uint16_t x439 = 6U;
	uint64_t x440 = 30911LLU;
	static int32_t t94 = 70;

    t94 = (x437>((x438%x439)*x440));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x445 = 926U;
	int16_t x446 = INT16_MIN;
	int32_t x447 = -1;
	uint16_t x448 = 1U;
	volatile int32_t t95 = 3438863;

    t95 = (x445>((x446%x447)*x448));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x450 = 19360U;
	static volatile uint16_t x451 = 4064U;
	int64_t x452 = -1LL;
	static volatile int32_t t96 = -1;

    t96 = (x449>((x450%x451)*x452));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x458 = INT8_MIN;
	volatile int64_t x459 = INT64_MIN;
	uint8_t x460 = UINT8_MAX;
	static volatile int32_t t97 = 30516;

    t97 = (x457>((x458%x459)*x460));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x461 = INT8_MIN;
	uint8_t x462 = 0U;
	uint16_t x463 = UINT16_MAX;
	volatile int32_t t98 = 4049;

    t98 = (x461>((x462%x463)*x464));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x465 = -1;
	volatile int16_t x468 = -306;

    t99 = (x465>((x466%x467)*x468));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint8_t x469 = 3U;
	static int8_t x470 = -2;
	int64_t x471 = INT64_MIN;
	int32_t x472 = -116;
	int32_t t100 = 0;

    t100 = (x469>((x470%x471)*x472));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x473 = INT32_MIN;
	static volatile uint8_t x474 = UINT8_MAX;
	static int64_t x475 = INT64_MAX;
	int32_t t101 = 2;

    t101 = (x473>((x474%x475)*x476));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x483 = INT16_MIN;
	int8_t x484 = -1;
	static volatile int32_t t102 = 2;

    t102 = (x481>((x482%x483)*x484));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x485 = 0U;
	int8_t x486 = INT8_MAX;
	int16_t x487 = 37;
	static volatile int32_t t103 = 1;

    t103 = (x485>((x486%x487)*x488));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x489 = UINT8_MAX;
	int32_t x490 = INT32_MAX;
	int8_t x491 = INT8_MIN;
	int16_t x492 = INT16_MIN;
	int32_t t104 = 516260017;

    t104 = (x489>((x490%x491)*x492));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static int64_t x497 = INT64_MIN;
	int16_t x499 = -1;
	volatile int32_t t105 = 12002;

    t105 = (x497>((x498%x499)*x500));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x501 = 273176U;
	int8_t x502 = -1;
	int32_t x504 = INT32_MIN;
	volatile int32_t t106 = -1;

    t106 = (x501>((x502%x503)*x504));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x505 = INT64_MAX;
	int8_t x506 = INT8_MIN;
	volatile uint64_t x507 = UINT64_MAX;
	static volatile int32_t x508 = INT32_MAX;
	int32_t t107 = 5148;

    t107 = (x505>((x506%x507)*x508));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x509 = 1U;
	static int16_t x510 = INT16_MIN;
	int8_t x511 = INT8_MAX;
	int16_t x512 = INT16_MAX;
	static int32_t t108 = 241257390;

    t108 = (x509>((x510%x511)*x512));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x513 = -1;
	int64_t x514 = INT64_MAX;
	int32_t x516 = -1;
	volatile int32_t t109 = 37952859;

    t109 = (x513>((x514%x515)*x516));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint8_t x517 = 122U;
	volatile int32_t x518 = INT32_MAX;
	uint16_t x519 = 27U;
	int8_t x520 = -31;

    t110 = (x517>((x518%x519)*x520));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x521 = INT8_MIN;
	int16_t x522 = -3560;
	uint16_t x523 = UINT16_MAX;

    t111 = (x521>((x522%x523)*x524));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x526 = INT32_MAX;
	volatile uint32_t x527 = 5785U;
	static volatile int32_t t112 = -1290;

    t112 = (x525>((x526%x527)*x528));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x529 = INT32_MAX;
	int32_t x530 = 31018;
	int8_t x532 = INT8_MAX;
	volatile int32_t t113 = -9790933;

    t113 = (x529>((x530%x531)*x532));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x537 = INT16_MIN;
	uint64_t x539 = UINT64_MAX;
	int16_t x540 = 2;
	volatile int32_t t114 = -1649;

    t114 = (x537>((x538%x539)*x540));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x541 = -1;
	int16_t x542 = 1591;
	uint64_t x544 = 376659808925496LLU;
	int32_t t115 = 0;

    t115 = (x541>((x542%x543)*x544));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x545 = -21;
	static int64_t x546 = -1LL;
	volatile int8_t x547 = INT8_MIN;
	static int32_t t116 = -418810210;

    t116 = (x545>((x546%x547)*x548));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x549 = -993801513LL;
	int32_t x551 = INT32_MAX;
	int64_t x552 = -1LL;
	int32_t t117 = -122119;

    t117 = (x549>((x550%x551)*x552));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x553 = INT8_MIN;
	int8_t x554 = -30;
	int8_t x555 = INT8_MIN;
	int16_t x556 = 435;
	volatile int32_t t118 = -355794148;

    t118 = (x553>((x554%x555)*x556));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile int16_t x557 = 1;
	uint16_t x558 = 10U;
	int32_t x559 = INT32_MIN;
	static int32_t t119 = 2;

    t119 = (x557>((x558%x559)*x560));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x561 = INT8_MIN;
	int16_t x562 = 72;
	static int32_t x563 = -1850;
	int16_t x564 = 106;
	volatile int32_t t120 = 42177164;

    t120 = (x561>((x562%x563)*x564));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x565 = INT32_MIN;
	volatile int16_t x566 = 1218;
	static uint16_t x567 = 27767U;
	volatile int16_t x568 = INT16_MAX;
	int32_t t121 = -6;

    t121 = (x565>((x566%x567)*x568));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x569 = 1430066830282LLU;
	static int64_t x570 = INT64_MAX;
	int16_t x571 = -61;
	uint32_t x572 = 29965U;

    t122 = (x569>((x570%x571)*x572));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x573 = 610U;
	uint32_t x574 = UINT32_MAX;
	uint64_t x575 = UINT64_MAX;
	static int8_t x576 = 28;
	static int32_t t123 = 14241;

    t123 = (x573>((x574%x575)*x576));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x579 = -1LL;
	int8_t x580 = INT8_MIN;
	static int32_t t124 = 10003;

    t124 = (x577>((x578%x579)*x580));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int16_t x582 = 355;
	int32_t x583 = INT32_MAX;
	uint8_t x584 = 70U;
	static volatile int32_t t125 = -923827;

    t125 = (x581>((x582%x583)*x584));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x585 = 852;
	volatile uint16_t x586 = UINT16_MAX;
	volatile int32_t x587 = INT32_MAX;
	uint32_t x588 = 138783525U;
	volatile int32_t t126 = 863;

    t126 = (x585>((x586%x587)*x588));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x589 = -1;
	int8_t x590 = -6;
	static volatile uint32_t x592 = 160062494U;
	volatile int32_t t127 = -4019491;

    t127 = (x589>((x590%x591)*x592));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x593 = INT8_MAX;
	int16_t x594 = 2933;
	static int8_t x596 = INT8_MIN;
	volatile int32_t t128 = -298668;

    t128 = (x593>((x594%x595)*x596));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x597 = 5U;
	uint64_t x598 = UINT64_MAX;
	int32_t x599 = -32278153;
	int32_t x600 = INT32_MIN;

    t129 = (x597>((x598%x599)*x600));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x601 = INT64_MAX;
	int16_t x603 = -4235;
	volatile int32_t t130 = -3620370;

    t130 = (x601>((x602%x603)*x604));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint32_t x606 = 1184U;
	uint32_t x607 = UINT32_MAX;
	uint32_t x608 = 470396U;
	volatile int32_t t131 = 684359;

    t131 = (x605>((x606%x607)*x608));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x609 = -2LL;
	int16_t x611 = -1;
	volatile int8_t x612 = -1;
	volatile int32_t t132 = -48663158;

    t132 = (x609>((x610%x611)*x612));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x613 = INT64_MIN;
	uint8_t x614 = 7U;
	int32_t x615 = INT32_MAX;
	int16_t x616 = INT16_MAX;
	volatile int32_t t133 = -561678;

    t133 = (x613>((x614%x615)*x616));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x617 = UINT64_MAX;
	static int16_t x618 = INT16_MIN;
	int16_t x620 = INT16_MAX;
	volatile int32_t t134 = 4100804;

    t134 = (x617>((x618%x619)*x620));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x621 = -1;
	uint16_t x623 = UINT16_MAX;
	int64_t x624 = -1LL;
	volatile int32_t t135 = 5354843;

    t135 = (x621>((x622%x623)*x624));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x625 = INT64_MAX;
	volatile uint16_t x626 = 0U;
	int32_t t136 = 9509128;

    t136 = (x625>((x626%x627)*x628));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int8_t x630 = -1;
	int32_t x631 = 844;
	int32_t x632 = 225861114;
	int32_t t137 = 1;

    t137 = (x629>((x630%x631)*x632));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int32_t x633 = INT32_MIN;
	volatile int16_t x635 = INT16_MIN;
	volatile uint16_t x636 = 10U;

    t138 = (x633>((x634%x635)*x636));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x637 = INT16_MAX;
	int32_t x638 = -199814;
	static int32_t x639 = -1;
	int8_t x640 = -1;
	int32_t t139 = -5352;

    t139 = (x637>((x638%x639)*x640));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x645 = 4U;
	int16_t x647 = -1;
	int8_t x648 = -1;

    t140 = (x645>((x646%x647)*x648));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x650 = 1U;
	int64_t x651 = INT64_MAX;
	uint64_t x652 = 15426753LLU;
	int32_t t141 = -35898;

    t141 = (x649>((x650%x651)*x652));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint8_t x653 = UINT8_MAX;
	int8_t x654 = -1;
	static int64_t x655 = INT64_MIN;
	int16_t x656 = -1;

    t142 = (x653>((x654%x655)*x656));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint32_t x657 = UINT32_MAX;
	uint8_t x658 = 24U;

    t143 = (x657>((x658%x659)*x660));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x662 = 545U;
	uint16_t x664 = 6596U;
	volatile int32_t t144 = 3072;

    t144 = (x661>((x662%x663)*x664));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile uint16_t x665 = UINT16_MAX;
	static int64_t x667 = -1LL;
	uint16_t x668 = 0U;
	int32_t t145 = 534;

    t145 = (x665>((x666%x667)*x668));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x670 = 9659111435021LL;
	int32_t t146 = -915;

    t146 = (x669>((x670%x671)*x672));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x673 = -1LL;
	uint32_t x674 = UINT32_MAX;
	uint64_t x675 = UINT64_MAX;
	static uint32_t x676 = UINT32_MAX;
	static volatile int32_t t147 = 5;

    t147 = (x673>((x674%x675)*x676));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint16_t x677 = 11409U;
	int8_t x678 = INT8_MAX;
	static uint32_t x680 = UINT32_MAX;
	int32_t t148 = 6872402;

    t148 = (x677>((x678%x679)*x680));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x685 = INT16_MIN;
	uint32_t x686 = 112271U;
	static uint32_t x687 = 55282166U;
	static volatile int32_t t149 = -143399450;

    t149 = (x685>((x686%x687)*x688));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x690 = 6568950154976LLU;
	static uint8_t x691 = UINT8_MAX;
	uint16_t x692 = 131U;
	int32_t t150 = -7;

    t150 = (x689>((x690%x691)*x692));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x693 = INT16_MIN;
	int8_t x694 = 7;
	int32_t x696 = 142;
	volatile int32_t t151 = 18505;

    t151 = (x693>((x694%x695)*x696));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x697 = 1LLU;
	volatile int64_t x698 = INT64_MIN;
	static int32_t x699 = -1;
	int16_t x700 = -1;

    t152 = (x697>((x698%x699)*x700));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x705 = -1935984950306LL;
	uint16_t x706 = 3U;
	uint16_t x707 = UINT16_MAX;
	int8_t x708 = 27;
	volatile int32_t t153 = -8388;

    t153 = (x705>((x706%x707)*x708));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x714 = 400;
	int8_t x715 = -1;
	uint32_t x716 = 841U;
	static volatile int32_t t154 = -46904473;

    t154 = (x713>((x714%x715)*x716));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x717 = INT16_MAX;
	int16_t x718 = 476;
	int16_t x719 = INT16_MIN;
	int64_t x720 = -1LL;
	volatile int32_t t155 = -10267188;

    t155 = (x717>((x718%x719)*x720));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static int32_t x721 = INT32_MIN;
	int16_t x723 = INT16_MIN;
	int8_t x724 = -1;
	int32_t t156 = 15365516;

    t156 = (x721>((x722%x723)*x724));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x725 = -1;
	static volatile int8_t x727 = INT8_MIN;
	int64_t x728 = -1091348678300141LL;
	int32_t t157 = -3403342;

    t157 = (x725>((x726%x727)*x728));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x729 = INT32_MIN;
	static int32_t x730 = INT32_MIN;
	static volatile int32_t x731 = -57;
	volatile uint32_t x732 = 28766616U;

    t158 = (x729>((x730%x731)*x732));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x733 = INT8_MIN;
	uint64_t x734 = UINT64_MAX;
	int8_t x736 = -1;
	volatile int32_t t159 = -104501150;

    t159 = (x733>((x734%x735)*x736));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x737 = -1;
	int8_t x738 = -1;
	static volatile uint16_t x739 = 24033U;
	volatile int16_t x740 = INT16_MIN;
	static volatile int32_t t160 = -18374713;

    t160 = (x737>((x738%x739)*x740));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x741 = -1;
	int32_t x742 = INT32_MIN;
	int8_t x743 = -1;

    t161 = (x741>((x742%x743)*x744));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x745 = INT8_MAX;
	volatile uint16_t x746 = UINT16_MAX;
	volatile int32_t x747 = -1;
	int64_t x748 = INT64_MAX;

    t162 = (x745>((x746%x747)*x748));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x749 = -14LL;
	int32_t x750 = -1;
	volatile int32_t t163 = -132620811;

    t163 = (x749>((x750%x751)*x752));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x753 = INT16_MIN;
	int8_t x754 = INT8_MIN;
	int16_t x755 = -6702;
	uint8_t x756 = UINT8_MAX;
	static int32_t t164 = -27120856;

    t164 = (x753>((x754%x755)*x756));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint32_t x757 = UINT32_MAX;
	volatile int64_t x758 = INT64_MAX;
	int16_t x760 = 0;
	volatile int32_t t165 = 1;

    t165 = (x757>((x758%x759)*x760));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x761 = INT64_MIN;
	int8_t x762 = INT8_MIN;
	volatile int32_t x763 = INT32_MAX;
	uint64_t x764 = 182056982937148173LLU;

    t166 = (x761>((x762%x763)*x764));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x765 = -1LL;
	int64_t x766 = 2249LL;
	volatile uint64_t x767 = 350049551759573LLU;
	int8_t x768 = -1;
	static int32_t t167 = 1;

    t167 = (x765>((x766%x767)*x768));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x770 = UINT32_MAX;
	static uint16_t x771 = 1U;
	uint8_t x772 = 5U;
	int32_t t168 = 524;

    t168 = (x769>((x770%x771)*x772));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x773 = UINT8_MAX;
	int8_t x774 = -1;
	int16_t x775 = -692;
	uint32_t x776 = 8U;
	volatile int32_t t169 = -243191;

    t169 = (x773>((x774%x775)*x776));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x777 = INT16_MIN;
	uint32_t x778 = 1U;
	int32_t x779 = -1;
	volatile int32_t x780 = 78183;
	volatile int32_t t170 = 6748;

    t170 = (x777>((x778%x779)*x780));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x781 = 244;
	int64_t x782 = INT64_MIN;
	uint16_t x783 = UINT16_MAX;
	uint32_t x784 = 20474U;
	volatile int32_t t171 = -790;

    t171 = (x781>((x782%x783)*x784));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x788 = -1747;

    t172 = (x785>((x786%x787)*x788));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x791 = 6698254733815LL;
	volatile int16_t x792 = INT16_MIN;
	static volatile int32_t t173 = -3360106;

    t173 = (x789>((x790%x791)*x792));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x794 = -510164157;
	static int32_t x796 = INT32_MAX;
	static volatile int32_t t174 = 1;

    t174 = (x793>((x794%x795)*x796));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x797 = 537128254170LL;
	int32_t x798 = 4250;
	uint64_t x799 = 107631696854154058LLU;
	int32_t x800 = INT32_MIN;
	static volatile int32_t t175 = -20627926;

    t175 = (x797>((x798%x799)*x800));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x801 = 1;
	volatile int32_t x802 = -9351001;
	int64_t x803 = INT64_MIN;
	int8_t x804 = 0;
	static int32_t t176 = -52257;

    t176 = (x801>((x802%x803)*x804));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x809 = 2732LLU;
	int16_t x810 = -1;
	static int32_t x812 = -3602;
	int32_t t177 = -166860714;

    t177 = (x809>((x810%x811)*x812));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint64_t x813 = 7052375468912582727LLU;
	int8_t x815 = INT8_MAX;
	int16_t x816 = INT16_MAX;
	int32_t t178 = 3;

    t178 = (x813>((x814%x815)*x816));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x817 = INT64_MIN;
	int8_t x820 = INT8_MIN;
	int32_t t179 = -450;

    t179 = (x817>((x818%x819)*x820));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x821 = INT8_MAX;
	static int64_t x822 = -1LL;
	int8_t x823 = -1;
	uint32_t x824 = 1569U;

    t180 = (x821>((x822%x823)*x824));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x829 = 599451021U;
	uint16_t x831 = UINT16_MAX;
	static uint32_t x832 = 1U;
	volatile int32_t t181 = 863215;

    t181 = (x829>((x830%x831)*x832));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint64_t x833 = 7475399LLU;
	static int16_t x834 = INT16_MIN;
	uint64_t x835 = 261544206LLU;
	uint16_t x836 = 48U;
	static int32_t t182 = 949;

    t182 = (x833>((x834%x835)*x836));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x837 = -1LL;
	uint32_t x838 = 1431510509U;
	volatile int32_t x840 = 3;
	volatile int32_t t183 = -398777;

    t183 = (x837>((x838%x839)*x840));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x841 = -4;
	int8_t x842 = INT8_MAX;
	int64_t x843 = INT64_MAX;
	volatile int32_t t184 = -67;

    t184 = (x841>((x842%x843)*x844));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x845 = 4;
	int16_t x846 = 30;
	static int64_t x847 = INT64_MIN;
	static int16_t x848 = -1;
	volatile int32_t t185 = 404098232;

    t185 = (x845>((x846%x847)*x848));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int64_t x849 = -22397400630148231LL;
	int64_t x850 = -1LL;
	uint32_t x851 = 124833U;
	uint32_t x852 = UINT32_MAX;
	volatile int32_t t186 = 982;

    t186 = (x849>((x850%x851)*x852));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x853 = -2328359;
	volatile int8_t x854 = INT8_MAX;
	int8_t x855 = INT8_MIN;
	static int8_t x856 = INT8_MIN;
	static int32_t t187 = 26105;

    t187 = (x853>((x854%x855)*x856));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x857 = -1;
	static volatile int32_t x859 = INT32_MAX;
	uint8_t x860 = 1U;

    t188 = (x857>((x858%x859)*x860));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint32_t x861 = UINT32_MAX;
	int64_t x862 = -17927301184122523LL;
	volatile int32_t x863 = 356556;
	int64_t x864 = -964LL;
	int32_t t189 = 14247;

    t189 = (x861>((x862%x863)*x864));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint8_t x865 = 13U;
	int32_t x866 = INT32_MAX;
	static volatile int8_t x867 = -3;
	int8_t x868 = 1;
	static int32_t t190 = -7483970;

    t190 = (x865>((x866%x867)*x868));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint8_t x870 = 7U;
	static int32_t x871 = INT32_MIN;
	uint16_t x872 = UINT16_MAX;
	volatile int32_t t191 = -1;

    t191 = (x869>((x870%x871)*x872));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint16_t x873 = 41U;
	volatile uint8_t x874 = 60U;
	int16_t x875 = INT16_MIN;
	static volatile int16_t x876 = -1;
	volatile int32_t t192 = -44168961;

    t192 = (x873>((x874%x875)*x876));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x877 = -1128;
	int16_t x878 = INT16_MAX;
	uint8_t x879 = 5U;
	uint16_t x880 = UINT16_MAX;
	int32_t t193 = -220794;

    t193 = (x877>((x878%x879)*x880));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x881 = 5083044U;
	int32_t x882 = -108;
	volatile uint32_t x883 = UINT32_MAX;

    t194 = (x881>((x882%x883)*x884));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x886 = UINT64_MAX;
	int64_t x887 = INT64_MIN;
	volatile int16_t x888 = 7026;

    t195 = (x885>((x886%x887)*x888));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x890 = -1;
	static int64_t x891 = -1LL;
	static volatile int32_t t196 = 271117;

    t196 = (x889>((x890%x891)*x892));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int64_t x893 = 4591886LL;
	int32_t x894 = -50691;
	uint8_t x895 = 1U;
	static int8_t x896 = -1;
	volatile int32_t t197 = 272;

    t197 = (x893>((x894%x895)*x896));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x897 = INT8_MIN;
	static int16_t x898 = INT16_MIN;
	volatile int16_t x899 = 1;
	volatile int32_t t198 = -30430;

    t198 = (x897>((x898%x899)*x900));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x906 = -1;
	int8_t x908 = -1;
	int32_t t199 = 1155;

    t199 = (x905>((x906%x907)*x908));

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

