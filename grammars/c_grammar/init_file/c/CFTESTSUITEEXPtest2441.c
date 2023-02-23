
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

int8_t x7 = 0;
volatile int16_t x10 = -83;
int32_t x11 = INT32_MIN;
int64_t x24 = INT64_MIN;
volatile int64_t t4 = -141LL;
int32_t t5 = 450209;
volatile int32_t x29 = INT32_MIN;
int32_t x30 = INT32_MIN;
static volatile int32_t t6 = 2459;
static volatile int32_t t7 = 13;
volatile int16_t x41 = INT16_MIN;
uint16_t x43 = 4243U;
static int32_t t12 = 716;
volatile int32_t t13 = 8;
uint8_t x71 = UINT8_MAX;
static int16_t x76 = INT16_MAX;
static uint16_t x77 = 6913U;
int8_t x79 = 3;
int32_t x80 = -64;
static int8_t x90 = 0;
uint64_t x91 = 1LLU;
uint16_t x99 = UINT16_MAX;
int64_t t22 = -801389848357LL;
int16_t x107 = INT16_MAX;
uint64_t x111 = UINT64_MAX;
int8_t x117 = INT8_MIN;
int16_t x119 = INT16_MAX;
int16_t x120 = -32;
volatile int16_t x122 = -1;
int32_t t27 = 1;
static volatile int64_t x133 = -1LL;
static int8_t x135 = INT8_MIN;
int64_t t29 = -3811087228341LL;
uint8_t x142 = 1U;
static uint16_t x144 = 640U;
static volatile int16_t x147 = -1;
volatile int32_t t32 = -3;
int32_t x150 = -60199666;
int32_t t33 = -21494;
static uint64_t x154 = 1023LLU;
static int64_t x159 = 198824432923432LL;
volatile int32_t t38 = -8442;
uint16_t x179 = 32638U;
volatile int64_t x181 = 16535740704851809LL;
volatile int64_t x189 = 47LL;
volatile uint64_t x192 = 899894374406532LLU;
volatile int64_t t43 = 836232234063459LL;
static volatile int16_t x200 = INT16_MIN;
volatile uint8_t x201 = 28U;
int16_t x202 = INT16_MAX;
volatile int32_t t46 = 134;
uint16_t x210 = UINT16_MAX;
volatile int32_t t47 = 2745;
int64_t x213 = -1LL;
volatile int64_t x215 = -1LL;
volatile int64_t t48 = 1412464465847770LL;
volatile uint8_t x224 = 0U;
static int64_t x227 = 3LL;
uint8_t x233 = UINT8_MAX;
static int8_t x239 = 10;
static volatile int64_t t53 = 287LL;
static int32_t x241 = INT32_MIN;
volatile uint32_t t55 = 77038794U;
uint32_t x249 = UINT32_MAX;
static uint16_t x250 = UINT16_MAX;
int8_t x251 = 37;
int16_t x254 = -6;
int64_t x256 = -1LL;
static uint64_t x257 = 54614436370LLU;
int16_t x260 = INT16_MIN;
int32_t x271 = -1;
volatile int32_t t60 = -66963;
int8_t x275 = INT8_MAX;
int32_t t61 = 9073115;
static int8_t x278 = -1;
int64_t x281 = INT64_MIN;
volatile int8_t x284 = INT8_MAX;
int64_t x292 = INT64_MAX;
int64_t x293 = -1LL;
volatile int64_t x302 = INT64_MAX;
int64_t x305 = INT64_MIN;
uint32_t x319 = 172U;
static int32_t x321 = INT32_MIN;
static int8_t x325 = INT8_MIN;
volatile uint8_t x327 = UINT8_MAX;
int8_t x328 = INT8_MIN;
uint64_t x331 = 183424300088LLU;
int32_t t74 = -37037;
int32_t x334 = -273859;
volatile uint16_t x339 = UINT16_MAX;
int32_t x342 = -1;
int64_t x343 = INT64_MIN;
int16_t x344 = 3177;
static int16_t x345 = -1;
int32_t x350 = INT32_MAX;
volatile int32_t t79 = -322;
static volatile int64_t x361 = -1LL;
static volatile uint16_t x368 = UINT16_MAX;
int8_t x370 = -1;
static uint32_t x379 = 598246U;
uint32_t x384 = 20U;
volatile int8_t x390 = 17;
int32_t x392 = INT32_MAX;
uint8_t x393 = 6U;
uint64_t x397 = 3565LLU;
int8_t x399 = -1;
uint16_t x401 = UINT16_MAX;
int32_t x402 = 3;
int32_t t91 = 46855;
uint64_t x410 = 1959610380242657LLU;
int32_t x412 = -459;
int64_t x413 = INT64_MAX;
uint64_t x420 = 223LLU;
int32_t t97 = 877399722;
int8_t x431 = INT8_MAX;
uint32_t x432 = UINT32_MAX;
volatile int32_t t98 = 5391819;
static int16_t x435 = INT16_MIN;
volatile int16_t x440 = INT16_MIN;
volatile int64_t x445 = -1LL;
int8_t x446 = INT8_MAX;
uint16_t x452 = 2U;
uint32_t x461 = 3182999U;
uint32_t x471 = 312587U;
uint64_t x472 = 245134278LLU;
static int32_t t107 = 1;
uint8_t x479 = 0U;
volatile int8_t x481 = INT8_MAX;
int64_t x482 = 260LL;
static int16_t x487 = INT16_MIN;
static int8_t x491 = 0;
int64_t t113 = -4265352830513145264LL;
volatile int16_t x498 = -1;
volatile int16_t x508 = 7860;
uint8_t x509 = 0U;
int32_t t117 = 3648;
static int16_t x520 = INT16_MAX;
uint64_t x524 = UINT64_MAX;
int32_t t119 = 2070;
int32_t x530 = 182062249;
static uint32_t x533 = 32317462U;
int16_t x535 = INT16_MAX;
static int8_t x542 = INT8_MIN;
static uint8_t x543 = 98U;
int8_t x544 = -1;
uint16_t x545 = 1033U;
int64_t x548 = -57788074009895975LL;
int32_t x555 = -21320;
volatile uint32_t t126 = 24967U;
static int8_t x565 = INT8_MIN;
static int32_t x570 = 175;
static uint16_t x571 = 4221U;
volatile int32_t t134 = 1;
volatile int32_t x590 = -1;
int64_t x593 = INT64_MIN;
int8_t x596 = INT8_MAX;
static int64_t t136 = -934976LL;
uint16_t x600 = 9761U;
int32_t x601 = -56;
uint32_t x603 = 32382U;
int32_t x604 = 223;
static int32_t x606 = 381;
int8_t x607 = 0;
int16_t x608 = -6780;
volatile int32_t t139 = 7647748;
int16_t x615 = -1;
static uint16_t x623 = UINT16_MAX;
int16_t x624 = INT16_MIN;
volatile int8_t x625 = -3;
int32_t x640 = -1;
int32_t x645 = -2;
int16_t x647 = 0;
uint16_t x648 = UINT16_MAX;
uint32_t x652 = 498930U;
static int16_t x655 = INT16_MAX;
volatile uint64_t x657 = UINT64_MAX;
uint16_t x658 = 93U;
uint32_t x660 = UINT32_MAX;
volatile int16_t x664 = INT16_MAX;
static int16_t x684 = INT16_MIN;
uint8_t x699 = UINT8_MAX;
uint8_t x709 = 10U;
volatile int32_t x718 = 1377600;
volatile int8_t x724 = INT8_MIN;
static volatile int32_t x725 = INT32_MIN;
uint32_t x728 = UINT32_MAX;
static uint64_t x729 = UINT64_MAX;
uint32_t x733 = UINT32_MAX;
volatile int16_t x734 = INT16_MAX;
volatile int32_t t168 = 38905533;
int8_t x743 = 9;
uint64_t x744 = 3058933LLU;
volatile int32_t t169 = 1420;
int64_t x745 = INT64_MIN;
static volatile int64_t t170 = 197LL;
static int32_t t171 = -163;
uint16_t x754 = UINT16_MAX;
static volatile uint32_t x755 = UINT32_MAX;
uint8_t x756 = 9U;
volatile int32_t t173 = 6;
static int32_t t174 = 206856;
uint8_t x766 = 0U;
int32_t x769 = 28352;
uint64_t x772 = UINT64_MAX;
static int8_t x776 = INT8_MIN;
int32_t t177 = 737920589;
int8_t x786 = INT8_MIN;
int16_t x796 = 1014;
int32_t t182 = 703681;
int16_t x803 = -1;
static int16_t x804 = -1046;
static volatile uint16_t x805 = 2789U;
int8_t x807 = INT8_MIN;
int32_t x819 = 8059;
int16_t x820 = -1;
static int32_t t188 = -130794;
static volatile int32_t t189 = -389413;
int64_t x829 = INT64_MAX;
int8_t x836 = INT8_MAX;
uint32_t x837 = UINT32_MAX;
uint32_t t192 = 1U;
volatile uint32_t t194 = 30U;
static int64_t x853 = INT64_MIN;
uint16_t x854 = UINT16_MAX;
int32_t x856 = -1;
uint8_t x864 = 1U;
uint32_t x865 = 223396U;
static uint32_t t199 = 1U;


void f0(void) {
    	volatile uint8_t x1 = UINT8_MAX;
	uint32_t x2 = 792709489U;
	uint32_t x3 = UINT32_MAX;
	static uint32_t x4 = 37961852U;
	static volatile int32_t t0 = 1;

    t0 = (x1%((x2|x3)!=x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x5 = INT32_MIN;
	int16_t x6 = INT16_MAX;
	uint16_t x8 = UINT16_MAX;
	volatile int32_t t1 = 8217;

    t1 = (x5%((x6|x7)!=x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MAX;
	volatile int64_t x12 = -1LL;
	volatile int64_t t2 = -25560308400054187LL;

    t2 = (x9%((x10|x11)!=x12));

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x17 = -125489463;
	volatile int16_t x18 = 3230;
	uint8_t x19 = 59U;
	uint8_t x20 = 57U;
	volatile int32_t t3 = 28826743;

    t3 = (x17%((x18|x19)!=x20));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x21 = INT64_MIN;
	volatile int16_t x22 = -1;
	int16_t x23 = -1;

    t4 = (x21%((x22|x23)!=x24));

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x25 = INT32_MIN;
	static volatile int16_t x26 = INT16_MIN;
	uint8_t x27 = 6U;
	int64_t x28 = 12073LL;

    t5 = (x25%((x26|x27)!=x28));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x31 = UINT64_MAX;
	int16_t x32 = INT16_MIN;

    t6 = (x29%((x30|x31)!=x32));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x33 = INT8_MIN;
	uint32_t x34 = 504U;
	int16_t x35 = 91;
	int64_t x36 = -1LL;

    t7 = (x33%((x34|x35)!=x36));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x37 = INT8_MIN;
	int16_t x38 = INT16_MIN;
	int8_t x39 = INT8_MIN;
	int32_t x40 = INT32_MIN;
	int32_t t8 = 146177909;

    t8 = (x37%((x38|x39)!=x40));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x42 = INT16_MIN;
	uint8_t x44 = 50U;
	int32_t t9 = -46393;

    t9 = (x41%((x42|x43)!=x44));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint64_t x45 = 51642613388LLU;
	static int64_t x46 = 27341908814493LL;
	volatile int16_t x47 = INT16_MIN;
	int8_t x48 = INT8_MIN;
	volatile uint64_t t10 = 993038184LLU;

    t10 = (x45%((x46|x47)!=x48));

    if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x49 = INT16_MIN;
	int8_t x50 = INT8_MAX;
	int8_t x51 = INT8_MIN;
	static int32_t x52 = INT32_MIN;
	static volatile int32_t t11 = -245225;

    t11 = (x49%((x50|x51)!=x52));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static int32_t x53 = -1;
	uint16_t x54 = 6506U;
	volatile int64_t x55 = INT64_MIN;
	uint8_t x56 = UINT8_MAX;

    t12 = (x53%((x54|x55)!=x56));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x57 = INT8_MIN;
	int8_t x58 = -1;
	volatile int16_t x59 = INT16_MIN;
	uint32_t x60 = 14U;

    t13 = (x57%((x58|x59)!=x60));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x61 = INT64_MIN;
	int32_t x62 = 69;
	int64_t x63 = -818485LL;
	static uint64_t x64 = UINT64_MAX;
	volatile int64_t t14 = -1856246LL;

    t14 = (x61%((x62|x63)!=x64));

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x65 = 42U;
	int16_t x66 = -1;
	static int16_t x67 = INT16_MAX;
	static int32_t x68 = INT32_MAX;
	int32_t t15 = 277276;

    t15 = (x65%((x66|x67)!=x68));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x69 = -1;
	uint16_t x70 = 4465U;
	int16_t x72 = -53;
	int32_t t16 = -8919;

    t16 = (x69%((x70|x71)!=x72));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x73 = 970U;
	int16_t x74 = 23;
	int64_t x75 = INT64_MIN;
	uint32_t t17 = 316695175U;

    t17 = (x73%((x74|x75)!=x76));

    if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x78 = 1392738LLU;
	int32_t t18 = -58;

    t18 = (x77%((x78|x79)!=x80));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x81 = 16063LL;
	int16_t x82 = INT16_MIN;
	static int64_t x83 = INT64_MAX;
	int64_t x84 = INT64_MIN;
	int64_t t19 = 8377131336232487LL;

    t19 = (x81%((x82|x83)!=x84));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x89 = INT16_MAX;
	int16_t x92 = INT16_MAX;
	volatile int32_t t20 = 2915;

    t20 = (x89%((x90|x91)!=x92));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x97 = INT32_MAX;
	int32_t x98 = 15496;
	static int16_t x100 = INT16_MAX;
	volatile int32_t t21 = -660800;

    t21 = (x97%((x98|x99)!=x100));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int64_t x101 = INT64_MAX;
	int8_t x102 = INT8_MIN;
	int32_t x103 = -1;
	uint16_t x104 = 14699U;

    t22 = (x101%((x102|x103)!=x104));

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile int16_t x105 = INT16_MIN;
	int64_t x106 = -364830643170415772LL;
	static int16_t x108 = -2054;
	int32_t t23 = 5425787;

    t23 = (x105%((x106|x107)!=x108));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x109 = 1;
	uint64_t x110 = UINT64_MAX;
	int32_t x112 = INT32_MAX;
	int32_t t24 = 3230;

    t24 = (x109%((x110|x111)!=x112));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x113 = 4203123262523275781LLU;
	int64_t x114 = -1LL;
	int16_t x115 = INT16_MIN;
	int32_t x116 = INT32_MAX;
	static volatile uint64_t t25 = 1LLU;

    t25 = (x113%((x114|x115)!=x116));

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x118 = INT32_MIN;
	int32_t t26 = 571041907;

    t26 = (x117%((x118|x119)!=x120));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x121 = INT16_MAX;
	int16_t x123 = -121;
	volatile uint64_t x124 = 3923295075LLU;

    t27 = (x121%((x122|x123)!=x124));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint64_t x129 = UINT64_MAX;
	uint16_t x130 = 1U;
	uint16_t x131 = 123U;
	static int32_t x132 = INT32_MIN;
	static uint64_t t28 = 3LLU;

    t28 = (x129%((x130|x131)!=x132));

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x134 = -2061519710497LL;
	volatile int16_t x136 = -52;

    t29 = (x133%((x134|x135)!=x136));

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x137 = 10538124U;
	int16_t x138 = INT16_MAX;
	int16_t x139 = INT16_MAX;
	int64_t x140 = INT64_MIN;
	static volatile uint32_t t30 = 593143152U;

    t30 = (x137%((x138|x139)!=x140));

    if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x141 = 2;
	volatile uint8_t x143 = 16U;
	int32_t t31 = -24;

    t31 = (x141%((x142|x143)!=x144));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x145 = INT8_MIN;
	int64_t x146 = INT64_MIN;
	uint64_t x148 = 34373762599LLU;

    t32 = (x145%((x146|x147)!=x148));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x149 = 1;
	uint8_t x151 = 1U;
	static uint32_t x152 = UINT32_MAX;

    t33 = (x149%((x150|x151)!=x152));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x153 = INT8_MAX;
	int32_t x155 = INT32_MAX;
	int8_t x156 = INT8_MIN;
	volatile int32_t t34 = 55;

    t34 = (x153%((x154|x155)!=x156));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint16_t x157 = 1411U;
	uint64_t x158 = UINT64_MAX;
	uint16_t x160 = 741U;
	volatile int32_t t35 = 114;

    t35 = (x157%((x158|x159)!=x160));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x161 = INT16_MIN;
	static int16_t x162 = INT16_MIN;
	volatile uint16_t x163 = 64U;
	int64_t x164 = INT64_MIN;
	int32_t t36 = 8;

    t36 = (x161%((x162|x163)!=x164));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint64_t x165 = 616705369525LLU;
	int64_t x166 = -1871084730966206LL;
	uint8_t x167 = UINT8_MAX;
	int8_t x168 = 42;
	uint64_t t37 = 37793262LLU;

    t37 = (x165%((x166|x167)!=x168));

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x169 = INT16_MAX;
	static int32_t x170 = INT32_MAX;
	int32_t x171 = INT32_MAX;
	volatile int8_t x172 = INT8_MIN;

    t38 = (x169%((x170|x171)!=x172));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x173 = INT16_MIN;
	static int32_t x174 = INT32_MIN;
	int16_t x175 = -7;
	volatile uint64_t x176 = UINT64_MAX;
	static int32_t t39 = 4104645;

    t39 = (x173%((x174|x175)!=x176));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x177 = INT32_MIN;
	uint16_t x178 = UINT16_MAX;
	int64_t x180 = INT64_MIN;
	volatile int32_t t40 = -1926;

    t40 = (x177%((x178|x179)!=x180));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint8_t x182 = 1U;
	int16_t x183 = -1;
	uint64_t x184 = 27237883232921194LLU;
	volatile int64_t t41 = -2844157LL;

    t41 = (x181%((x182|x183)!=x184));

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x185 = INT64_MIN;
	int32_t x186 = INT32_MIN;
	int16_t x187 = INT16_MIN;
	int16_t x188 = INT16_MAX;
	volatile int64_t t42 = -2563045960150LL;

    t42 = (x185%((x186|x187)!=x188));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x190 = UINT16_MAX;
	int32_t x191 = INT32_MAX;

    t43 = (x189%((x190|x191)!=x192));

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x197 = 0U;
	uint64_t x198 = 392522LLU;
	int32_t x199 = 3597857;
	volatile int32_t t44 = 9;

    t44 = (x197%((x198|x199)!=x200));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x203 = 3U;
	int8_t x204 = 17;
	volatile int32_t t45 = -12785;

    t45 = (x201%((x202|x203)!=x204));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x205 = INT16_MIN;
	static uint8_t x206 = 26U;
	int8_t x207 = INT8_MAX;
	int32_t x208 = INT32_MIN;

    t46 = (x205%((x206|x207)!=x208));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x209 = INT16_MIN;
	volatile int32_t x211 = INT32_MIN;
	volatile uint8_t x212 = UINT8_MAX;

    t47 = (x209%((x210|x211)!=x212));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x214 = 14U;
	int32_t x216 = 55551;

    t48 = (x213%((x214|x215)!=x216));

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x217 = INT16_MIN;
	int64_t x218 = -1328LL;
	int16_t x219 = INT16_MIN;
	static uint64_t x220 = 73415638LLU;
	int32_t t49 = 1;

    t49 = (x217%((x218|x219)!=x220));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x221 = INT8_MIN;
	static volatile uint16_t x222 = UINT16_MAX;
	volatile uint8_t x223 = 0U;
	volatile int32_t t50 = 663864438;

    t50 = (x221%((x222|x223)!=x224));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x225 = 6614844204LLU;
	static volatile int8_t x226 = INT8_MIN;
	int32_t x228 = -1;
	volatile uint64_t t51 = 10780036LLU;

    t51 = (x225%((x226|x227)!=x228));

    if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x234 = INT8_MIN;
	volatile int8_t x235 = -1;
	int64_t x236 = INT64_MIN;
	static volatile int32_t t52 = 103617;

    t52 = (x233%((x234|x235)!=x236));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int64_t x237 = INT64_MAX;
	uint32_t x238 = 7U;
	uint8_t x240 = 1U;

    t53 = (x237%((x238|x239)!=x240));

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x242 = UINT16_MAX;
	volatile int32_t x243 = INT32_MIN;
	volatile uint32_t x244 = 1816830U;
	volatile int32_t t54 = 103968895;

    t54 = (x241%((x242|x243)!=x244));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x245 = 738531U;
	uint64_t x246 = 1796179736255LLU;
	static volatile uint32_t x247 = UINT32_MAX;
	static uint16_t x248 = UINT16_MAX;

    t55 = (x245%((x246|x247)!=x248));

    if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint8_t x252 = 15U;
	uint32_t t56 = 202U;

    t56 = (x249%((x250|x251)!=x252));

    if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x253 = INT16_MAX;
	static uint8_t x255 = 6U;
	int32_t t57 = 1635;

    t57 = (x253%((x254|x255)!=x256));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x258 = -1;
	uint32_t x259 = 77923674U;
	static uint64_t t58 = 3184580873127299933LLU;

    t58 = (x257%((x258|x259)!=x260));

    if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x261 = INT8_MAX;
	static uint32_t x262 = 128392U;
	volatile int64_t x263 = 1896LL;
	volatile uint16_t x264 = 116U;
	volatile int32_t t59 = 23751;

    t59 = (x261%((x262|x263)!=x264));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x269 = 173638;
	int64_t x270 = INT64_MIN;
	int8_t x272 = -4;

    t60 = (x269%((x270|x271)!=x272));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x273 = INT32_MAX;
	int32_t x274 = INT32_MIN;
	volatile int32_t x276 = -1;

    t61 = (x273%((x274|x275)!=x276));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x277 = 26;
	uint16_t x279 = UINT16_MAX;
	int8_t x280 = INT8_MIN;
	static volatile int32_t t62 = -109935;

    t62 = (x277%((x278|x279)!=x280));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x282 = -58;
	uint64_t x283 = 1LLU;
	int64_t t63 = -1LL;

    t63 = (x281%((x282|x283)!=x284));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x289 = UINT8_MAX;
	volatile int64_t x290 = -1LL;
	volatile uint32_t x291 = UINT32_MAX;
	int32_t t64 = -471811587;

    t64 = (x289%((x290|x291)!=x292));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x294 = INT32_MIN;
	uint16_t x295 = 3U;
	volatile int64_t x296 = 5207478418528LL;
	volatile int64_t t65 = -1158696954254LL;

    t65 = (x293%((x294|x295)!=x296));

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x297 = INT64_MIN;
	static int8_t x298 = -1;
	int8_t x299 = 31;
	int8_t x300 = INT8_MIN;
	int64_t t66 = -5992048452853876LL;

    t66 = (x297%((x298|x299)!=x300));

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x301 = -1;
	uint64_t x303 = 1971907329734102LLU;
	static uint32_t x304 = UINT32_MAX;
	int32_t t67 = 132903915;

    t67 = (x301%((x302|x303)!=x304));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int32_t x306 = -3;
	static int32_t x307 = INT32_MIN;
	int16_t x308 = INT16_MIN;
	static int64_t t68 = -1LL;

    t68 = (x305%((x306|x307)!=x308));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x309 = INT64_MIN;
	volatile int64_t x310 = -1LL;
	int64_t x311 = -1337491LL;
	int64_t x312 = 44338073935LL;
	static int64_t t69 = 7LL;

    t69 = (x309%((x310|x311)!=x312));

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int8_t x313 = INT8_MIN;
	int32_t x314 = INT32_MIN;
	int64_t x315 = 189799552035242664LL;
	volatile uint32_t x316 = 8235185U;
	volatile int32_t t70 = -36528;

    t70 = (x313%((x314|x315)!=x316));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x317 = INT8_MIN;
	uint32_t x318 = UINT32_MAX;
	uint64_t x320 = 15971060LLU;
	volatile int32_t t71 = 790963987;

    t71 = (x317%((x318|x319)!=x320));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint32_t x322 = 15139930U;
	int64_t x323 = 15917333267LL;
	uint32_t x324 = UINT32_MAX;
	volatile int32_t t72 = 0;

    t72 = (x321%((x322|x323)!=x324));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint64_t x326 = 0LLU;
	int32_t t73 = 0;

    t73 = (x325%((x326|x327)!=x328));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x329 = INT32_MIN;
	int32_t x330 = -1;
	uint64_t x332 = 66786878870311LLU;

    t74 = (x329%((x330|x331)!=x332));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint16_t x333 = 3637U;
	int8_t x335 = -1;
	static int8_t x336 = INT8_MIN;
	static volatile int32_t t75 = -187;

    t75 = (x333%((x334|x335)!=x336));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x337 = INT64_MIN;
	static int16_t x338 = -82;
	int16_t x340 = 4;
	int64_t t76 = 0LL;

    t76 = (x337%((x338|x339)!=x340));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x341 = INT64_MAX;
	static volatile int64_t t77 = 306597213LL;

    t77 = (x341%((x342|x343)!=x344));

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x346 = UINT32_MAX;
	volatile int64_t x347 = -138925779561686LL;
	int8_t x348 = INT8_MAX;
	int32_t t78 = 3;

    t78 = (x345%((x346|x347)!=x348));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x349 = 0U;
	uint8_t x351 = 1U;
	int16_t x352 = INT16_MIN;

    t79 = (x349%((x350|x351)!=x352));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x353 = INT64_MAX;
	int32_t x354 = INT32_MIN;
	static volatile int32_t x355 = INT32_MAX;
	uint16_t x356 = 695U;
	volatile int64_t t80 = -61894LL;

    t80 = (x353%((x354|x355)!=x356));

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x357 = INT64_MAX;
	uint8_t x358 = 0U;
	uint16_t x359 = 1471U;
	int64_t x360 = 123968444LL;
	int64_t t81 = -13857206010LL;

    t81 = (x357%((x358|x359)!=x360));

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x362 = 52321901846LLU;
	volatile int32_t x363 = 128972147;
	int16_t x364 = -1;
	volatile int64_t t82 = 513550280236LL;

    t82 = (x361%((x362|x363)!=x364));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint8_t x365 = 0U;
	int16_t x366 = 1;
	uint64_t x367 = 5076645120LLU;
	int32_t t83 = -1795;

    t83 = (x365%((x366|x367)!=x368));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x369 = INT32_MAX;
	uint32_t x371 = UINT32_MAX;
	int16_t x372 = INT16_MIN;
	static int32_t t84 = -3;

    t84 = (x369%((x370|x371)!=x372));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x373 = -196521368814LL;
	int16_t x374 = INT16_MIN;
	volatile int8_t x375 = INT8_MAX;
	uint16_t x376 = 12273U;
	volatile int64_t t85 = 112548LL;

    t85 = (x373%((x374|x375)!=x376));

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x377 = -1;
	int8_t x378 = 0;
	int64_t x380 = INT64_MIN;
	int32_t t86 = 266575470;

    t86 = (x377%((x378|x379)!=x380));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x381 = INT64_MIN;
	int32_t x382 = INT32_MIN;
	int64_t x383 = INT64_MAX;
	static int64_t t87 = 6131352LL;

    t87 = (x381%((x382|x383)!=x384));

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x389 = 1;
	int32_t x391 = INT32_MIN;
	int32_t t88 = 782478183;

    t88 = (x389%((x390|x391)!=x392));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x394 = 401338LL;
	volatile uint32_t x395 = UINT32_MAX;
	uint16_t x396 = 8236U;
	int32_t t89 = -47243891;

    t89 = (x393%((x394|x395)!=x396));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x398 = -224LL;
	int64_t x400 = 2LL;
	uint64_t t90 = 8977LLU;

    t90 = (x397%((x398|x399)!=x400));

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x403 = -1;
	int16_t x404 = 0;

    t91 = (x401%((x402|x403)!=x404));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static int64_t x405 = -252935278628974LL;
	int16_t x406 = -1;
	int64_t x407 = INT64_MAX;
	int8_t x408 = -5;
	int64_t t92 = 5LL;

    t92 = (x405%((x406|x407)!=x408));

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static int32_t x409 = INT32_MIN;
	uint64_t x411 = 91599860392896LLU;
	volatile int32_t t93 = 144215619;

    t93 = (x409%((x410|x411)!=x412));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int16_t x414 = INT16_MIN;
	int8_t x415 = -1;
	volatile int8_t x416 = 3;
	int64_t t94 = 159909034LL;

    t94 = (x413%((x414|x415)!=x416));

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static int16_t x417 = INT16_MIN;
	int8_t x418 = -1;
	static int16_t x419 = INT16_MIN;
	int32_t t95 = -1947014;

    t95 = (x417%((x418|x419)!=x420));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x421 = UINT16_MAX;
	volatile int16_t x422 = -42;
	int16_t x423 = INT16_MIN;
	int8_t x424 = INT8_MIN;
	volatile int32_t t96 = -22;

    t96 = (x421%((x422|x423)!=x424));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x425 = 61;
	uint16_t x426 = UINT16_MAX;
	static volatile int32_t x427 = -1;
	volatile uint32_t x428 = 45643308U;

    t97 = (x425%((x426|x427)!=x428));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x429 = -1;
	static volatile int64_t x430 = -1LL;

    t98 = (x429%((x430|x431)!=x432));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x433 = -467;
	int16_t x434 = INT16_MIN;
	int64_t x436 = -1LL;
	int32_t t99 = -148872369;

    t99 = (x433%((x434|x435)!=x436));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint32_t x437 = 619955038U;
	static uint64_t x438 = 501907982601339LLU;
	int16_t x439 = INT16_MAX;
	volatile uint32_t t100 = 0U;

    t100 = (x437%((x438|x439)!=x440));

    if (t100 != 0U) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x447 = INT8_MIN;
	int16_t x448 = 6255;
	int64_t t101 = 0LL;

    t101 = (x445%((x446|x447)!=x448));

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x449 = UINT32_MAX;
	volatile int32_t x450 = -1;
	uint16_t x451 = UINT16_MAX;
	uint32_t t102 = 2U;

    t102 = (x449%((x450|x451)!=x452));

    if (t102 != 0U) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x453 = 10;
	volatile int32_t x454 = INT32_MAX;
	static uint64_t x455 = 36LLU;
	int32_t x456 = 2353;
	volatile int32_t t103 = 974;

    t103 = (x453%((x454|x455)!=x456));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint64_t x457 = UINT64_MAX;
	uint32_t x458 = 5622700U;
	static volatile int32_t x459 = INT32_MIN;
	int16_t x460 = INT16_MAX;
	volatile uint64_t t104 = 32728LLU;

    t104 = (x457%((x458|x459)!=x460));

    if (t104 != 0LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int8_t x462 = INT8_MIN;
	volatile uint8_t x463 = UINT8_MAX;
	volatile int8_t x464 = INT8_MIN;
	volatile uint32_t t105 = 1503U;

    t105 = (x461%((x462|x463)!=x464));

    if (t105 != 0U) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x465 = INT16_MIN;
	int8_t x466 = -1;
	uint8_t x467 = UINT8_MAX;
	uint16_t x468 = UINT16_MAX;
	int32_t t106 = -4732123;

    t106 = (x465%((x466|x467)!=x468));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x469 = INT8_MIN;
	static uint64_t x470 = 302617166LLU;

    t107 = (x469%((x470|x471)!=x472));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x473 = INT16_MIN;
	uint8_t x474 = 30U;
	int16_t x475 = 88;
	static volatile uint8_t x476 = 82U;
	volatile int32_t t108 = -53390;

    t108 = (x473%((x474|x475)!=x476));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x477 = UINT16_MAX;
	int64_t x478 = INT64_MIN;
	int8_t x480 = INT8_MIN;
	volatile int32_t t109 = -5;

    t109 = (x477%((x478|x479)!=x480));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int64_t x483 = 25123043101LL;
	int16_t x484 = INT16_MAX;
	int32_t t110 = 85233;

    t110 = (x481%((x482|x483)!=x484));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x485 = 87482933LL;
	int32_t x486 = -1;
	int32_t x488 = INT32_MAX;
	static int64_t t111 = -4156208311822386LL;

    t111 = (x485%((x486|x487)!=x488));

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x489 = UINT16_MAX;
	static volatile int64_t x490 = INT64_MIN;
	volatile int16_t x492 = INT16_MAX;
	volatile int32_t t112 = -204366;

    t112 = (x489%((x490|x491)!=x492));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x493 = INT64_MIN;
	volatile int8_t x494 = INT8_MIN;
	volatile uint16_t x495 = UINT16_MAX;
	static uint32_t x496 = 224U;

    t113 = (x493%((x494|x495)!=x496));

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x497 = INT16_MAX;
	volatile int16_t x499 = INT16_MAX;
	static int16_t x500 = 0;
	volatile int32_t t114 = -1239116;

    t114 = (x497%((x498|x499)!=x500));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint32_t x501 = 8U;
	uint64_t x502 = 897183LLU;
	uint8_t x503 = UINT8_MAX;
	static volatile int64_t x504 = INT64_MIN;
	volatile uint32_t t115 = 1U;

    t115 = (x501%((x502|x503)!=x504));

    if (t115 != 0U) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x505 = INT8_MAX;
	uint32_t x506 = UINT32_MAX;
	int16_t x507 = 7;
	volatile int32_t t116 = 7;

    t116 = (x505%((x506|x507)!=x508));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x510 = UINT16_MAX;
	int8_t x511 = INT8_MIN;
	volatile int8_t x512 = -6;

    t117 = (x509%((x510|x511)!=x512));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x517 = -8LL;
	volatile int16_t x518 = -24;
	uint16_t x519 = 99U;
	static volatile int64_t t118 = 3354522563LL;

    t118 = (x517%((x518|x519)!=x520));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x521 = -1;
	uint8_t x522 = UINT8_MAX;
	volatile int8_t x523 = 21;

    t119 = (x521%((x522|x523)!=x524));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x525 = 0;
	uint64_t x526 = 987LLU;
	uint64_t x527 = UINT64_MAX;
	int32_t x528 = INT32_MAX;
	static int32_t t120 = 12;

    t120 = (x525%((x526|x527)!=x528));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x529 = UINT32_MAX;
	volatile uint32_t x531 = UINT32_MAX;
	uint16_t x532 = UINT16_MAX;
	static volatile uint32_t t121 = 604047U;

    t121 = (x529%((x530|x531)!=x532));

    if (t121 != 0U) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x534 = INT8_MIN;
	uint64_t x536 = 3LLU;
	volatile uint32_t t122 = 11594060U;

    t122 = (x533%((x534|x535)!=x536));

    if (t122 != 0U) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x541 = INT16_MIN;
	int32_t t123 = 1517531;

    t123 = (x541%((x542|x543)!=x544));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int32_t x546 = 771;
	volatile uint64_t x547 = UINT64_MAX;
	static int32_t t124 = 2;

    t124 = (x545%((x546|x547)!=x548));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint16_t x549 = 11U;
	uint32_t x550 = 27609034U;
	uint8_t x551 = 31U;
	int64_t x552 = 9LL;
	volatile int32_t t125 = -211443830;

    t125 = (x549%((x550|x551)!=x552));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint32_t x553 = 53443U;
	static int64_t x554 = -16026826300659LL;
	int32_t x556 = -1;

    t126 = (x553%((x554|x555)!=x556));

    if (t126 != 0U) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x557 = 11477181367920145LLU;
	uint8_t x558 = 2U;
	int32_t x559 = -1;
	static uint32_t x560 = 37022161U;
	uint64_t t127 = 3317662722884LLU;

    t127 = (x557%((x558|x559)!=x560));

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x561 = 695703272;
	static uint16_t x562 = UINT16_MAX;
	int16_t x563 = 19;
	int16_t x564 = -5;
	volatile int32_t t128 = 1;

    t128 = (x561%((x562|x563)!=x564));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint64_t x566 = 12391247702119LLU;
	int16_t x567 = INT16_MIN;
	int64_t x568 = 95596LL;
	volatile int32_t t129 = 0;

    t129 = (x565%((x566|x567)!=x568));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x569 = INT8_MIN;
	uint64_t x572 = 127129725LLU;
	static volatile int32_t t130 = 122028;

    t130 = (x569%((x570|x571)!=x572));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x573 = INT64_MIN;
	int16_t x574 = INT16_MIN;
	static uint32_t x575 = UINT32_MAX;
	int32_t x576 = INT32_MIN;
	int64_t t131 = -377203941123951LL;

    t131 = (x573%((x574|x575)!=x576));

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x577 = INT16_MIN;
	int8_t x578 = INT8_MAX;
	uint8_t x579 = 3U;
	static int16_t x580 = -1;
	int32_t t132 = -162537;

    t132 = (x577%((x578|x579)!=x580));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x581 = 77U;
	uint64_t x582 = 1147228174929879528LLU;
	uint64_t x583 = 7840509722994LLU;
	int16_t x584 = INT16_MIN;
	volatile int32_t t133 = -1690179;

    t133 = (x581%((x582|x583)!=x584));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x585 = 5U;
	int64_t x586 = INT64_MIN;
	int16_t x587 = INT16_MIN;
	volatile uint32_t x588 = UINT32_MAX;

    t134 = (x585%((x586|x587)!=x588));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x589 = 44U;
	int16_t x591 = INT16_MIN;
	int32_t x592 = 5115;
	int32_t t135 = -101861892;

    t135 = (x589%((x590|x591)!=x592));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x594 = INT16_MIN;
	volatile int16_t x595 = -1;

    t136 = (x593%((x594|x595)!=x596));

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint64_t x597 = 1LLU;
	uint64_t x598 = UINT64_MAX;
	int16_t x599 = -1;
	uint64_t t137 = 8322LLU;

    t137 = (x597%((x598|x599)!=x600));

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x602 = -56167;
	int32_t t138 = -433918406;

    t138 = (x601%((x602|x603)!=x604));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x605 = INT8_MIN;

    t139 = (x605%((x606|x607)!=x608));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x613 = INT8_MIN;
	int64_t x614 = -1462512854574LL;
	int32_t x616 = -51953;
	int32_t t140 = 1783113;

    t140 = (x613%((x614|x615)!=x616));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x617 = INT64_MIN;
	static uint8_t x618 = 19U;
	uint32_t x619 = 2045U;
	volatile int16_t x620 = INT16_MIN;
	int64_t t141 = -86034947394474LL;

    t141 = (x617%((x618|x619)!=x620));

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x621 = 1;
	uint32_t x622 = 1998313U;
	static int32_t t142 = -15887;

    t142 = (x621%((x622|x623)!=x624));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x626 = 167457509U;
	uint8_t x627 = UINT8_MAX;
	static int8_t x628 = INT8_MIN;
	volatile int32_t t143 = 7758083;

    t143 = (x625%((x626|x627)!=x628));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int32_t x629 = -208712034;
	int8_t x630 = -12;
	uint32_t x631 = 16744596U;
	volatile int32_t x632 = -1;
	volatile int32_t t144 = 13163;

    t144 = (x629%((x630|x631)!=x632));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x637 = UINT16_MAX;
	int64_t x638 = 163852LL;
	volatile int8_t x639 = INT8_MAX;
	volatile int32_t t145 = -9;

    t145 = (x637%((x638|x639)!=x640));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x641 = INT32_MAX;
	uint32_t x642 = 1414U;
	int8_t x643 = INT8_MIN;
	int64_t x644 = -279565818292409LL;
	volatile int32_t t146 = -125;

    t146 = (x641%((x642|x643)!=x644));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x646 = INT8_MIN;
	int32_t t147 = 65652603;

    t147 = (x645%((x646|x647)!=x648));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x649 = INT16_MIN;
	int32_t x650 = INT32_MAX;
	static int64_t x651 = -1LL;
	volatile int32_t t148 = -192957;

    t148 = (x649%((x650|x651)!=x652));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile uint8_t x653 = UINT8_MAX;
	int32_t x654 = -6235;
	uint8_t x656 = 0U;
	static int32_t t149 = 99703813;

    t149 = (x653%((x654|x655)!=x656));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x659 = INT8_MAX;
	volatile uint64_t t150 = 1325LLU;

    t150 = (x657%((x658|x659)!=x660));

    if (t150 != 0LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x661 = -1LL;
	static uint32_t x662 = UINT32_MAX;
	uint32_t x663 = UINT32_MAX;
	int64_t t151 = -1LL;

    t151 = (x661%((x662|x663)!=x664));

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x665 = INT64_MAX;
	static volatile uint32_t x666 = 162840210U;
	volatile int8_t x667 = INT8_MIN;
	static uint64_t x668 = 89518030036842LLU;
	int64_t t152 = -61LL;

    t152 = (x665%((x666|x667)!=x668));

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint32_t x669 = UINT32_MAX;
	static uint32_t x670 = 64177496U;
	int16_t x671 = INT16_MIN;
	uint8_t x672 = 1U;
	volatile uint32_t t153 = 534U;

    t153 = (x669%((x670|x671)!=x672));

    if (t153 != 0U) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x677 = INT16_MIN;
	volatile int64_t x678 = -168556582LL;
	int16_t x679 = 1;
	uint16_t x680 = 1U;
	static volatile int32_t t154 = 5583861;

    t154 = (x677%((x678|x679)!=x680));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x681 = INT64_MAX;
	uint8_t x682 = UINT8_MAX;
	volatile int64_t x683 = INT64_MIN;
	int64_t t155 = 103832782158168928LL;

    t155 = (x681%((x682|x683)!=x684));

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x685 = 1;
	uint64_t x686 = UINT64_MAX;
	uint32_t x687 = 75783857U;
	static uint8_t x688 = UINT8_MAX;
	volatile int32_t t156 = 0;

    t156 = (x685%((x686|x687)!=x688));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x693 = INT32_MAX;
	static int32_t x694 = INT32_MIN;
	int8_t x695 = INT8_MIN;
	uint16_t x696 = 208U;
	volatile int32_t t157 = 5003;

    t157 = (x693%((x694|x695)!=x696));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x697 = -26;
	uint64_t x698 = 494482488873203LLU;
	int64_t x700 = -1LL;
	int32_t t158 = 585;

    t158 = (x697%((x698|x699)!=x700));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x701 = UINT16_MAX;
	int64_t x702 = INT64_MAX;
	int32_t x703 = INT32_MAX;
	int32_t x704 = INT32_MAX;
	volatile int32_t t159 = -806906330;

    t159 = (x701%((x702|x703)!=x704));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x705 = INT32_MIN;
	static uint32_t x706 = 4U;
	uint16_t x707 = 51U;
	int64_t x708 = -6651582LL;
	static int32_t t160 = 49964;

    t160 = (x705%((x706|x707)!=x708));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x710 = 45687748026LL;
	uint8_t x711 = UINT8_MAX;
	int32_t x712 = INT32_MAX;
	static volatile int32_t t161 = -19985117;

    t161 = (x709%((x710|x711)!=x712));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x713 = -27;
	volatile int16_t x714 = -30;
	static int32_t x715 = INT32_MIN;
	int64_t x716 = INT64_MAX;
	volatile int32_t t162 = 1247229;

    t162 = (x713%((x714|x715)!=x716));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x717 = INT32_MIN;
	volatile uint16_t x719 = UINT16_MAX;
	int8_t x720 = INT8_MIN;
	int32_t t163 = -48;

    t163 = (x717%((x718|x719)!=x720));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x721 = 5U;
	int32_t x722 = INT32_MIN;
	int8_t x723 = 17;
	volatile int32_t t164 = -3002;

    t164 = (x721%((x722|x723)!=x724));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x726 = -1LL;
	uint64_t x727 = 314691812308102405LLU;
	int32_t t165 = -395;

    t165 = (x725%((x726|x727)!=x728));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x730 = 48134U;
	volatile int16_t x731 = INT16_MIN;
	static uint32_t x732 = 14408072U;
	static uint64_t t166 = 869LLU;

    t166 = (x729%((x730|x731)!=x732));

    if (t166 != 0LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile uint8_t x735 = 0U;
	int32_t x736 = -1;
	static volatile uint32_t t167 = 320819U;

    t167 = (x733%((x734|x735)!=x736));

    if (t167 != 0U) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint8_t x737 = 36U;
	static volatile int8_t x738 = -1;
	uint8_t x739 = 75U;
	static volatile int32_t x740 = 60063933;

    t168 = (x737%((x738|x739)!=x740));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x741 = UINT8_MAX;
	int32_t x742 = INT32_MIN;

    t169 = (x741%((x742|x743)!=x744));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x746 = 61234952U;
	volatile int32_t x747 = INT32_MIN;
	int16_t x748 = INT16_MAX;

    t170 = (x745%((x746|x747)!=x748));

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x749 = 8704;
	static uint64_t x750 = UINT64_MAX;
	int16_t x751 = -1;
	static uint64_t x752 = 8462661690905LLU;

    t171 = (x749%((x750|x751)!=x752));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint16_t x753 = 1U;
	volatile int32_t t172 = 52440;

    t172 = (x753%((x754|x755)!=x756));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x757 = -1;
	int8_t x758 = 1;
	volatile int64_t x759 = -1LL;
	uint32_t x760 = UINT32_MAX;

    t173 = (x757%((x758|x759)!=x760));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x761 = UINT16_MAX;
	int32_t x762 = -1342103;
	int8_t x763 = INT8_MAX;
	uint8_t x764 = UINT8_MAX;

    t174 = (x761%((x762|x763)!=x764));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x765 = INT32_MIN;
	int16_t x767 = INT16_MIN;
	int8_t x768 = INT8_MIN;
	static volatile int32_t t175 = -3021260;

    t175 = (x765%((x766|x767)!=x768));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile int32_t x770 = INT32_MIN;
	uint32_t x771 = 106970517U;
	volatile int32_t t176 = -1920;

    t176 = (x769%((x770|x771)!=x772));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint16_t x773 = UINT16_MAX;
	int8_t x774 = -1;
	uint64_t x775 = 136040LLU;

    t177 = (x773%((x774|x775)!=x776));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x777 = UINT16_MAX;
	volatile int64_t x778 = INT64_MIN;
	int16_t x779 = INT16_MIN;
	int32_t x780 = INT32_MIN;
	volatile int32_t t178 = 1641;

    t178 = (x777%((x778|x779)!=x780));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x781 = INT8_MIN;
	int64_t x782 = INT64_MIN;
	static int32_t x783 = -16232283;
	uint16_t x784 = UINT16_MAX;
	int32_t t179 = -23;

    t179 = (x781%((x782|x783)!=x784));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x785 = INT16_MIN;
	uint8_t x787 = UINT8_MAX;
	volatile int32_t x788 = INT32_MIN;
	volatile int32_t t180 = -98393734;

    t180 = (x785%((x786|x787)!=x788));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x789 = INT64_MAX;
	int32_t x790 = INT32_MAX;
	int8_t x791 = -1;
	int64_t x792 = 23247204022024LL;
	volatile int64_t t181 = -3822635LL;

    t181 = (x789%((x790|x791)!=x792));

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x793 = 0;
	uint64_t x794 = UINT64_MAX;
	int8_t x795 = INT8_MIN;

    t182 = (x793%((x794|x795)!=x796));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x797 = -3973;
	int64_t x798 = -6329712685449268LL;
	volatile int16_t x799 = INT16_MIN;
	int16_t x800 = INT16_MAX;
	volatile int32_t t183 = 1433452;

    t183 = (x797%((x798|x799)!=x800));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x801 = 26LL;
	int16_t x802 = INT16_MIN;
	int64_t t184 = 340563LL;

    t184 = (x801%((x802|x803)!=x804));

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x806 = -5538;
	int16_t x808 = -1;
	int32_t t185 = -387;

    t185 = (x805%((x806|x807)!=x808));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x813 = 2586045144546841666LL;
	int64_t x814 = -1LL;
	static uint16_t x815 = UINT16_MAX;
	int16_t x816 = INT16_MIN;
	volatile int64_t t186 = -885LL;

    t186 = (x813%((x814|x815)!=x816));

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x817 = INT32_MIN;
	uint8_t x818 = 23U;
	volatile int32_t t187 = 23;

    t187 = (x817%((x818|x819)!=x820));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x821 = INT32_MIN;
	static int8_t x822 = 5;
	int8_t x823 = INT8_MAX;
	volatile int8_t x824 = INT8_MIN;

    t188 = (x821%((x822|x823)!=x824));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x825 = INT8_MAX;
	static uint32_t x826 = 140U;
	int8_t x827 = 3;
	volatile int64_t x828 = -1LL;

    t189 = (x825%((x826|x827)!=x828));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x830 = 23;
	int32_t x831 = INT32_MAX;
	int64_t x832 = INT64_MAX;
	volatile int64_t t190 = 345929862609988LL;

    t190 = (x829%((x830|x831)!=x832));

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x833 = 247086308U;
	int64_t x834 = INT64_MAX;
	uint64_t x835 = UINT64_MAX;
	static uint32_t t191 = 111U;

    t191 = (x833%((x834|x835)!=x836));

    if (t191 != 0U) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x838 = INT8_MIN;
	int8_t x839 = INT8_MAX;
	int32_t x840 = INT32_MIN;

    t192 = (x837%((x838|x839)!=x840));

    if (t192 != 0U) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x841 = 98512599LLU;
	uint64_t x842 = UINT64_MAX;
	int64_t x843 = 86612LL;
	int8_t x844 = INT8_MAX;
	static uint64_t t193 = 1544662838478754466LLU;

    t193 = (x841%((x842|x843)!=x844));

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x845 = 31100U;
	int16_t x846 = INT16_MIN;
	int8_t x847 = INT8_MIN;
	uint16_t x848 = 80U;

    t194 = (x845%((x846|x847)!=x848));

    if (t194 != 0U) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x849 = -1;
	int8_t x850 = -25;
	int16_t x851 = INT16_MAX;
	uint32_t x852 = 4U;
	volatile int32_t t195 = 3745782;

    t195 = (x849%((x850|x851)!=x852));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x855 = 1194;
	volatile int64_t t196 = -1LL;

    t196 = (x853%((x854|x855)!=x856));

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x857 = -1;
	int32_t x858 = -1;
	volatile int8_t x859 = 1;
	static uint16_t x860 = 6874U;
	static int32_t t197 = -204085;

    t197 = (x857%((x858|x859)!=x860));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x861 = -248;
	int32_t x862 = -501;
	volatile int8_t x863 = 6;
	volatile int32_t t198 = 2090472;

    t198 = (x861%((x862|x863)!=x864));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x866 = INT32_MAX;
	volatile uint16_t x867 = 66U;
	int32_t x868 = -1;

    t199 = (x865%((x866|x867)!=x868));

    if (t199 != 0U) { NG(); } else { ; }
	
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

