
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

int32_t x2 = INT32_MIN;
uint16_t x4 = 0U;
int32_t x5 = -1;
int32_t x16 = -5227246;
uint8_t x25 = 0U;
volatile int32_t t6 = 5;
static uint16_t x40 = UINT16_MAX;
volatile int16_t x43 = -279;
int8_t x44 = INT8_MIN;
int32_t x47 = INT32_MIN;
int8_t x53 = INT8_MIN;
volatile int32_t t13 = -103564;
static volatile int16_t x58 = -33;
uint32_t x59 = 9534U;
int64_t x66 = -1LL;
int64_t x75 = 9998034996314690LL;
volatile uint64_t x78 = 220073023706594LLU;
int8_t x88 = -1;
int16_t x89 = -1;
uint64_t x91 = 128LLU;
int16_t x93 = -1;
static int16_t x95 = 199;
int32_t t23 = 228;
int32_t x101 = -1;
static int64_t x104 = INT64_MIN;
int64_t t26 = 1680816LL;
volatile uint32_t x109 = UINT32_MAX;
volatile int64_t x117 = -1LL;
int64_t x119 = INT64_MAX;
static uint32_t x121 = 147030U;
uint64_t x128 = 20117123984144LLU;
int64_t t32 = INT64_MIN;
static int32_t x134 = INT32_MAX;
int64_t x137 = INT64_MAX;
volatile uint16_t x140 = 19865U;
volatile int32_t t35 = 118;
uint16_t x146 = UINT16_MAX;
uint64_t x155 = UINT64_MAX;
int16_t x158 = INT16_MIN;
int64_t x159 = -1232LL;
int16_t x171 = INT16_MIN;
uint32_t x173 = UINT32_MAX;
uint32_t t43 = UINT32_MAX;
volatile uint16_t x180 = 115U;
int32_t t44 = 4852;
int8_t x185 = INT8_MIN;
int32_t t51 = 273055;
uint32_t x223 = UINT32_MAX;
volatile uint64_t x224 = 3882724LLU;
uint32_t x230 = UINT32_MAX;
uint16_t x231 = 12304U;
static volatile int32_t x232 = -1;
uint32_t x235 = 7259U;
static int8_t x236 = 0;
static uint64_t x241 = 38205720LLU;
int8_t x242 = INT8_MIN;
volatile uint64_t t60 = 2109925978007769LLU;
int32_t x250 = -1;
int16_t x255 = INT16_MIN;
volatile uint64_t t62 = 90437332LLU;
int8_t x257 = INT8_MIN;
int16_t x259 = INT16_MIN;
int8_t x260 = -1;
static volatile int32_t t63 = 5;
static volatile int64_t x267 = -28LL;
volatile int64_t x271 = INT64_MIN;
int16_t x273 = INT16_MIN;
uint8_t x275 = 3U;
uint16_t x279 = 4U;
int32_t x280 = INT32_MIN;
int32_t x287 = INT32_MIN;
int8_t x296 = INT8_MAX;
int64_t x301 = -23497412LL;
uint16_t x306 = UINT16_MAX;
int64_t x307 = -40326465088011385LL;
volatile int32_t t78 = -3998420;
int32_t x329 = 1;
int16_t x335 = INT16_MAX;
uint64_t x339 = UINT64_MAX;
uint32_t x341 = 95405044U;
static int64_t x345 = 50851216930032842LL;
int16_t x351 = -1;
int64_t x360 = -1367057791271467LL;
uint32_t x364 = 46840U;
int32_t t90 = -477228071;
int16_t x387 = INT16_MIN;
volatile uint64_t x388 = 21535973874403044LLU;
static int8_t x393 = INT8_MIN;
static int64_t x395 = 1955957LL;
int32_t x396 = 827;
int16_t x397 = INT16_MAX;
volatile int16_t x399 = -1;
int8_t x402 = -1;
int16_t x403 = -7503;
static uint8_t x406 = UINT8_MAX;
int16_t x408 = 45;
volatile int64_t x410 = -156879235888435LL;
uint64_t x416 = 15826020502LLU;
uint32_t x422 = 7U;
uint16_t x423 = 879U;
volatile int32_t t104 = -7684646;
int32_t x428 = 126396;
static int16_t x433 = INT16_MIN;
int64_t x435 = INT64_MAX;
volatile int32_t t109 = 14120295;
int16_t x453 = INT16_MIN;
volatile uint16_t x455 = UINT16_MAX;
int8_t x459 = INT8_MAX;
uint8_t x465 = 0U;
int64_t x479 = INT64_MAX;
volatile int64_t t118 = -26LL;
int32_t x482 = -77597894;
uint64_t t119 = 12946410239416621LLU;
int16_t x492 = INT16_MAX;
int32_t t122 = 23239456;
static int8_t x497 = INT8_MIN;
static int32_t t123 = -45;
static int32_t x506 = -1;
volatile int32_t t125 = 42;
static int64_t x518 = -183647137682LL;
static int8_t x528 = -1;
uint32_t x531 = 105U;
int32_t x532 = INT32_MAX;
int32_t t133 = 1894;
uint16_t x541 = 705U;
int16_t x547 = 219;
static uint64_t t135 = 6LLU;
static volatile int64_t t139 = 312552834LL;
volatile int8_t x569 = -1;
static int8_t x575 = -4;
int8_t x577 = INT8_MAX;
int32_t t143 = -26;
static uint32_t t144 = 74U;
uint64_t x594 = 3891501098051869793LLU;
int32_t x595 = INT32_MAX;
int32_t t148 = -1;
int16_t x603 = -6;
volatile int16_t x608 = -11;
uint16_t x609 = 5U;
static int8_t x610 = INT8_MIN;
uint32_t x613 = 0U;
int16_t x617 = INT16_MIN;
volatile int32_t t155 = 1802988;
int16_t x634 = INT16_MIN;
static int32_t x647 = 59;
int16_t x648 = 2;
int32_t t160 = -12;
int8_t x658 = INT8_MAX;
int64_t x663 = INT64_MAX;
static int64_t t163 = 7LL;
uint16_t x665 = UINT16_MAX;
volatile int32_t x667 = 1845;
int8_t x670 = 8;
uint8_t x671 = UINT8_MAX;
uint32_t x678 = UINT32_MAX;
int64_t x679 = -64724632497226LL;
uint64_t x682 = UINT64_MAX;
static int32_t x683 = -1;
volatile int32_t t168 = -57625888;
volatile int16_t x688 = INT16_MIN;
int32_t t170 = -3355;
int8_t x699 = 1;
int32_t x705 = -24177;
volatile int8_t x706 = 8;
static uint32_t x707 = UINT32_MAX;
volatile int32_t x708 = -5656389;
int16_t x712 = -1;
int64_t x720 = -1LL;
uint32_t t178 = 12U;
volatile uint16_t x730 = 10U;
uint16_t x742 = 2373U;
static uint32_t x746 = UINT32_MAX;
static int32_t t184 = 7917;
static int8_t x756 = INT8_MAX;
int64_t x758 = INT64_MIN;
int8_t x764 = INT8_MIN;
int64_t t187 = -347970490123536LL;
static uint8_t x768 = UINT8_MAX;
int64_t x773 = 163643923245283622LL;
volatile int32_t x774 = INT32_MIN;
int64_t x775 = -1LL;
volatile int32_t x783 = -1;
int32_t x787 = 35565503;
uint64_t x788 = UINT64_MAX;
static volatile int32_t t193 = -3;
int64_t x792 = -1LL;
static int16_t x793 = INT16_MAX;
volatile int32_t x803 = 5;


void f0(void) {
    	int32_t x1 = -1;
	uint64_t x3 = 9174LLU;
	static int32_t t0 = 7;

    t0 = (x1|((x2%x3)<=x4));

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int32_t x6 = 42280210;
	int32_t x7 = INT32_MIN;
	int16_t x8 = -1;
	volatile int32_t t1 = -935107196;

    t1 = (x5|((x6%x7)<=x8));

    if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x9 = -1;
	static uint16_t x10 = 4U;
	static uint8_t x11 = UINT8_MAX;
	static uint16_t x12 = UINT16_MAX;
	int32_t t2 = 15;

    t2 = (x9|((x10%x11)<=x12));

    if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MIN;
	uint8_t x14 = UINT8_MAX;
	int64_t x15 = INT64_MIN;
	volatile int32_t t3 = INT32_MIN;

    t3 = (x13|((x14%x15)<=x16));

    if (t3 != INT32_MIN) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MIN;
	uint8_t x18 = 1U;
	volatile uint8_t x19 = 12U;
	int16_t x20 = -5;
	int32_t t4 = 152;

    t4 = (x17|((x18%x19)<=x20));

    if (t4 != -32768) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = 43482270U;
	int16_t x22 = 11;
	int8_t x23 = INT8_MIN;
	volatile int64_t x24 = INT64_MIN;
	uint32_t t5 = 221373942U;

    t5 = (x21|((x22%x23)<=x24));

    if (t5 != 43482270U) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x26 = INT16_MIN;
	int8_t x27 = 1;
	volatile uint64_t x28 = 66035140174293248LLU;

    t6 = (x25|((x26%x27)<=x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x29 = INT8_MIN;
	int16_t x30 = 19;
	static int32_t x31 = INT32_MIN;
	uint64_t x32 = UINT64_MAX;
	static int32_t t7 = 17219;

    t7 = (x29|((x30%x31)<=x32));

    if (t7 != -127) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = 4343469938000LL;
	int8_t x34 = INT8_MIN;
	int32_t x35 = INT32_MIN;
	static int8_t x36 = INT8_MAX;
	int64_t t8 = 10098252006LL;

    t8 = (x33|((x34%x35)<=x36));

    if (t8 != 4343469938001LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int16_t x37 = -1;
	uint32_t x38 = 38U;
	static volatile int32_t x39 = INT32_MAX;
	int32_t t9 = 1623;

    t9 = (x37|((x38%x39)<=x40));

    if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = INT32_MAX;
	volatile int32_t x42 = INT32_MAX;
	int32_t t10 = INT32_MAX;

    t10 = (x41|((x42%x43)<=x44));

    if (t10 != INT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x45 = UINT64_MAX;
	uint16_t x46 = UINT16_MAX;
	volatile int32_t x48 = 3;
	volatile uint64_t t11 = UINT64_MAX;

    t11 = (x45|((x46%x47)<=x48));

    if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = INT32_MIN;
	int16_t x50 = -1;
	int64_t x51 = INT64_MAX;
	volatile int64_t x52 = 0LL;
	int32_t t12 = -423;

    t12 = (x49|((x50%x51)<=x52));

    if (t12 != -2147483647) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x54 = UINT32_MAX;
	uint32_t x55 = 81U;
	int16_t x56 = -89;

    t13 = (x53|((x54%x55)<=x56));

    if (t13 != -127) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = 1;
	volatile int16_t x60 = INT16_MIN;
	static int32_t t14 = -63;

    t14 = (x57|((x58%x59)<=x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = 4;
	static int16_t x62 = 2;
	uint8_t x63 = 1U;
	int16_t x64 = -5755;
	volatile int32_t t15 = -17950942;

    t15 = (x61|((x62%x63)<=x64));

    if (t15 != 4) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = -1;
	static uint64_t x67 = UINT64_MAX;
	static volatile uint32_t x68 = 3524337U;
	volatile int32_t t16 = -1788;

    t16 = (x65|((x66%x67)<=x68));

    if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile uint32_t x69 = 441U;
	static int8_t x70 = -24;
	static int32_t x71 = -313820;
	static volatile uint16_t x72 = UINT16_MAX;
	uint32_t t17 = 432U;

    t17 = (x69|((x70%x71)<=x72));

    if (t17 != 441U) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint64_t x73 = 3492428296LLU;
	int32_t x74 = -1;
	static int16_t x76 = INT16_MIN;
	static volatile uint64_t t18 = 2176650686624060LLU;

    t18 = (x73|((x74%x75)<=x76));

    if (t18 != 3492428296LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x77 = UINT64_MAX;
	int32_t x79 = INT32_MAX;
	int16_t x80 = 42;
	uint64_t t19 = UINT64_MAX;

    t19 = (x77|((x78%x79)<=x80));

    if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = 942;
	uint8_t x82 = UINT8_MAX;
	static int32_t x83 = -84621978;
	int16_t x84 = -1;
	static volatile int32_t t20 = 38925;

    t20 = (x81|((x82%x83)<=x84));

    if (t20 != 942) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x85 = 28;
	static int8_t x86 = -1;
	int16_t x87 = INT16_MIN;
	int32_t t21 = -18;

    t21 = (x85|((x86%x87)<=x88));

    if (t21 != 29) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x90 = INT32_MIN;
	int64_t x92 = 3561650296397737043LL;
	volatile int32_t t22 = -364;

    t22 = (x89|((x90%x91)<=x92));

    if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x94 = 59U;
	int32_t x96 = INT32_MIN;

    t23 = (x93|((x94%x95)<=x96));

    if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x97 = INT64_MAX;
	int8_t x98 = 0;
	volatile uint32_t x99 = 1152298127U;
	int64_t x100 = INT64_MIN;
	static int64_t t24 = INT64_MAX;

    t24 = (x97|((x98%x99)<=x100));

    if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x102 = -1815;
	static int32_t x103 = 11;
	volatile int32_t t25 = -451;

    t25 = (x101|((x102%x103)<=x104));

    if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = 90574493099260LL;
	volatile int8_t x106 = INT8_MIN;
	volatile int8_t x107 = -1;
	uint8_t x108 = UINT8_MAX;

    t26 = (x105|((x106%x107)<=x108));

    if (t26 != 90574493099261LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x110 = UINT16_MAX;
	uint8_t x111 = UINT8_MAX;
	static volatile int16_t x112 = -17;
	volatile uint32_t t27 = UINT32_MAX;

    t27 = (x109|((x110%x111)<=x112));

    if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x113 = 30990637;
	volatile int8_t x114 = INT8_MAX;
	static int16_t x115 = INT16_MIN;
	int32_t x116 = -2;
	volatile int32_t t28 = -45274198;

    t28 = (x113|((x114%x115)<=x116));

    if (t28 != 30990637) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int16_t x118 = INT16_MIN;
	int64_t x120 = INT64_MIN;
	int64_t t29 = -15872960LL;

    t29 = (x117|((x118%x119)<=x120));

    if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x122 = 1;
	int64_t x123 = INT64_MIN;
	int64_t x124 = INT64_MIN;
	uint32_t t30 = 2064248920U;

    t30 = (x121|((x122%x123)<=x124));

    if (t30 != 147030U) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = INT16_MIN;
	int8_t x126 = INT8_MIN;
	static int64_t x127 = INT64_MIN;
	volatile int32_t t31 = 467367850;

    t31 = (x125|((x126%x127)<=x128));

    if (t31 != -32768) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = INT64_MIN;
	int8_t x130 = INT8_MAX;
	int32_t x131 = -1;
	int64_t x132 = INT64_MIN;

    t32 = (x129|((x130%x131)<=x132));

    if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = -119;
	int64_t x135 = -1LL;
	uint32_t x136 = UINT32_MAX;
	static volatile int32_t t33 = 1;

    t33 = (x133|((x134%x135)<=x136));

    if (t33 != -119) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int8_t x138 = 1;
	static int16_t x139 = 43;
	int64_t t34 = INT64_MAX;

    t34 = (x137|((x138%x139)<=x140));

    if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int32_t x141 = -38659;
	int16_t x142 = -1;
	uint32_t x143 = 220150337U;
	volatile int64_t x144 = 240485936629295LL;

    t35 = (x141|((x142%x143)<=x144));

    if (t35 != -38659) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint16_t x145 = UINT16_MAX;
	volatile int16_t x147 = INT16_MAX;
	volatile int16_t x148 = -11;
	static int32_t t36 = 24056;

    t36 = (x145|((x146%x147)<=x148));

    if (t36 != 65535) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x149 = -1;
	volatile int32_t x150 = INT32_MIN;
	volatile int8_t x151 = -1;
	uint32_t x152 = UINT32_MAX;
	volatile int32_t t37 = -1968975;

    t37 = (x149|((x150%x151)<=x152));

    if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x153 = 113;
	int16_t x154 = 3;
	uint16_t x156 = 6063U;
	volatile int32_t t38 = -14;

    t38 = (x153|((x154%x155)<=x156));

    if (t38 != 113) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = 0;
	int64_t x160 = 2489284102648LL;
	volatile int32_t t39 = -8248;

    t39 = (x157|((x158%x159)<=x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x161 = -1;
	uint8_t x162 = 118U;
	volatile uint8_t x163 = 27U;
	uint32_t x164 = 1U;
	volatile int32_t t40 = 231011950;

    t40 = (x161|((x162%x163)<=x164));

    if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x165 = UINT16_MAX;
	uint16_t x166 = UINT16_MAX;
	int32_t x167 = INT32_MAX;
	int32_t x168 = -1;
	int32_t t41 = 4;

    t41 = (x165|((x166%x167)<=x168));

    if (t41 != 65535) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x169 = 2U;
	int64_t x170 = INT64_MAX;
	int64_t x172 = -9155117566LL;
	volatile uint32_t t42 = 6463273U;

    t42 = (x169|((x170%x171)<=x172));

    if (t42 != 2U) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x174 = -1;
	int16_t x175 = INT16_MIN;
	int8_t x176 = INT8_MIN;

    t43 = (x173|((x174%x175)<=x176));

    if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x177 = -116903;
	static uint8_t x178 = UINT8_MAX;
	int64_t x179 = 2556337767LL;

    t44 = (x177|((x178%x179)<=x180));

    if (t44 != -116903) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x186 = 159984778LLU;
	static uint64_t x187 = 11229635244455LLU;
	int8_t x188 = -1;
	volatile int32_t t45 = -66187;

    t45 = (x185|((x186%x187)<=x188));

    if (t45 != -127) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x189 = UINT8_MAX;
	int32_t x190 = INT32_MAX;
	volatile int32_t x191 = INT32_MAX;
	int16_t x192 = INT16_MIN;
	volatile int32_t t46 = 2100613;

    t46 = (x189|((x190%x191)<=x192));

    if (t46 != 255) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x193 = 0LL;
	int64_t x194 = INT64_MIN;
	int32_t x195 = INT32_MIN;
	int32_t x196 = 0;
	volatile int64_t t47 = -69086880995LL;

    t47 = (x193|((x194%x195)<=x196));

    if (t47 != 1LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x197 = UINT8_MAX;
	int64_t x198 = INT64_MIN;
	static int8_t x199 = INT8_MIN;
	uint32_t x200 = 6790211U;
	static volatile int32_t t48 = -83006;

    t48 = (x197|((x198%x199)<=x200));

    if (t48 != 255) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x201 = UINT8_MAX;
	int64_t x202 = INT64_MIN;
	static volatile uint64_t x203 = 645782193456LLU;
	volatile uint64_t x204 = UINT64_MAX;
	static volatile int32_t t49 = 1;

    t49 = (x201|((x202%x203)<=x204));

    if (t49 != 255) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x205 = UINT64_MAX;
	uint64_t x206 = 399411081298372032LLU;
	int64_t x207 = INT64_MIN;
	uint16_t x208 = 2U;
	uint64_t t50 = UINT64_MAX;

    t50 = (x205|((x206%x207)<=x208));

    if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x209 = INT16_MIN;
	int8_t x210 = INT8_MIN;
	uint16_t x211 = UINT16_MAX;
	int8_t x212 = 6;

    t51 = (x209|((x210%x211)<=x212));

    if (t51 != -32767) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x213 = -44;
	static int16_t x214 = -16;
	uint64_t x215 = UINT64_MAX;
	int8_t x216 = -1;
	static int32_t t52 = -75;

    t52 = (x213|((x214%x215)<=x216));

    if (t52 != -43) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x217 = INT32_MIN;
	volatile int16_t x218 = -1;
	int16_t x219 = INT16_MIN;
	uint8_t x220 = 0U;
	static int32_t t53 = 25313;

    t53 = (x217|((x218%x219)<=x220));

    if (t53 != -2147483647) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x221 = 6U;
	int8_t x222 = INT8_MIN;
	int32_t t54 = 21526588;

    t54 = (x221|((x222%x223)<=x224));

    if (t54 != 6) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint16_t x225 = 3U;
	int8_t x226 = INT8_MAX;
	volatile int8_t x227 = INT8_MIN;
	static uint32_t x228 = UINT32_MAX;
	int32_t t55 = 1;

    t55 = (x225|((x226%x227)<=x228));

    if (t55 != 3) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x229 = 12U;
	int32_t t56 = 546661;

    t56 = (x229|((x230%x231)<=x232));

    if (t56 != 13) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint64_t x233 = UINT64_MAX;
	uint16_t x234 = 496U;
	volatile uint64_t t57 = UINT64_MAX;

    t57 = (x233|((x234%x235)<=x236));

    if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x237 = INT16_MIN;
	uint16_t x238 = UINT16_MAX;
	int32_t x239 = INT32_MIN;
	int64_t x240 = -1LL;
	int32_t t58 = -2105020;

    t58 = (x237|((x238%x239)<=x240));

    if (t58 != -32768) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x243 = INT8_MIN;
	static uint8_t x244 = 1U;
	uint64_t t59 = 775896623385016564LLU;

    t59 = (x241|((x242%x243)<=x244));

    if (t59 != 38205721LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x245 = 1736750837LLU;
	static int8_t x246 = -1;
	int16_t x247 = -1;
	int16_t x248 = -1;

    t60 = (x245|((x246%x247)<=x248));

    if (t60 != 1736750837LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x249 = INT32_MIN;
	static uint64_t x251 = UINT64_MAX;
	uint8_t x252 = UINT8_MAX;
	volatile int32_t t61 = -167810;

    t61 = (x249|((x250%x251)<=x252));

    if (t61 != -2147483647) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x253 = 5LLU;
	int8_t x254 = INT8_MIN;
	volatile int8_t x256 = INT8_MIN;

    t62 = (x253|((x254%x255)<=x256));

    if (t62 != 5LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x258 = INT32_MIN;

    t63 = (x257|((x258%x259)<=x260));

    if (t63 != -128) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x261 = -1;
	volatile int32_t x262 = INT32_MIN;
	volatile int8_t x263 = INT8_MAX;
	int32_t x264 = INT32_MAX;
	int32_t t64 = -786438;

    t64 = (x261|((x262%x263)<=x264));

    if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int32_t x265 = INT32_MAX;
	uint32_t x266 = UINT32_MAX;
	static int64_t x268 = INT64_MIN;
	static int32_t t65 = INT32_MAX;

    t65 = (x265|((x266%x267)<=x268));

    if (t65 != INT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x269 = 86U;
	int64_t x270 = INT64_MAX;
	static int64_t x272 = 816641383980LL;
	int32_t t66 = 768473;

    t66 = (x269|((x270%x271)<=x272));

    if (t66 != 86) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile uint16_t x274 = 3033U;
	static int16_t x276 = 341;
	int32_t t67 = 1230206;

    t67 = (x273|((x274%x275)<=x276));

    if (t67 != -32767) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint64_t x277 = 99488146810171881LLU;
	uint64_t x278 = 30954208822LLU;
	volatile uint64_t t68 = 4718058865LLU;

    t68 = (x277|((x278%x279)<=x280));

    if (t68 != 99488146810171881LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x281 = INT8_MIN;
	volatile int64_t x282 = 25616LL;
	int64_t x283 = -276541LL;
	int8_t x284 = INT8_MIN;
	volatile int32_t t69 = -37240;

    t69 = (x281|((x282%x283)<=x284));

    if (t69 != -128) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x285 = -10149;
	uint8_t x286 = UINT8_MAX;
	int16_t x288 = INT16_MAX;
	volatile int32_t t70 = 101;

    t70 = (x285|((x286%x287)<=x288));

    if (t70 != -10149) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x289 = -1;
	int8_t x290 = -27;
	uint8_t x291 = UINT8_MAX;
	uint16_t x292 = UINT16_MAX;
	static int32_t t71 = -1202;

    t71 = (x289|((x290%x291)<=x292));

    if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int64_t x293 = -1LL;
	uint64_t x294 = 98193285666LLU;
	uint16_t x295 = UINT16_MAX;
	volatile int64_t t72 = -1969783275861983LL;

    t72 = (x293|((x294%x295)<=x296));

    if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x297 = INT64_MAX;
	static int64_t x298 = INT64_MAX;
	int16_t x299 = -1;
	int8_t x300 = -1;
	volatile int64_t t73 = INT64_MAX;

    t73 = (x297|((x298%x299)<=x300));

    if (t73 != INT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int64_t x302 = INT64_MIN;
	static volatile int16_t x303 = -37;
	static int64_t x304 = INT64_MIN;
	volatile int64_t t74 = -285697LL;

    t74 = (x301|((x302%x303)<=x304));

    if (t74 != -23497412LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int32_t x305 = INT32_MIN;
	uint64_t x308 = 177861678LLU;
	volatile int32_t t75 = -285757498;

    t75 = (x305|((x306%x307)<=x308));

    if (t75 != -2147483647) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x309 = -7798;
	int16_t x310 = -1;
	int64_t x311 = INT64_MAX;
	int16_t x312 = INT16_MAX;
	static volatile int32_t t76 = -715462;

    t76 = (x309|((x310%x311)<=x312));

    if (t76 != -7797) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x313 = 1U;
	int64_t x314 = -1LL;
	uint32_t x315 = 1105301520U;
	int64_t x316 = INT64_MIN;
	int32_t t77 = -98612556;

    t77 = (x313|((x314%x315)<=x316));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x317 = -1;
	volatile uint8_t x318 = 0U;
	static volatile int64_t x319 = INT64_MAX;
	uint32_t x320 = UINT32_MAX;

    t78 = (x317|((x318%x319)<=x320));

    if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x321 = -22LL;
	uint8_t x322 = 0U;
	volatile int16_t x323 = INT16_MIN;
	volatile uint64_t x324 = 4949208315545LLU;
	static volatile int64_t t79 = -223936947159290LL;

    t79 = (x321|((x322%x323)<=x324));

    if (t79 != -21LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x325 = UINT64_MAX;
	int16_t x326 = INT16_MAX;
	uint32_t x327 = 1U;
	int8_t x328 = 7;
	uint64_t t80 = UINT64_MAX;

    t80 = (x325|((x326%x327)<=x328));

    if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x330 = UINT16_MAX;
	static int8_t x331 = INT8_MIN;
	static int64_t x332 = -1LL;
	volatile int32_t t81 = 83;

    t81 = (x329|((x330%x331)<=x332));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x333 = 87U;
	static int8_t x334 = 2;
	static uint64_t x336 = 127935787192LLU;
	volatile uint32_t t82 = 79991019U;

    t82 = (x333|((x334%x335)<=x336));

    if (t82 != 87U) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x337 = -991;
	int32_t x338 = INT32_MIN;
	int32_t x340 = INT32_MIN;
	int32_t t83 = 283953;

    t83 = (x337|((x338%x339)<=x340));

    if (t83 != -991) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x342 = 74;
	volatile uint32_t x343 = 18900U;
	volatile int32_t x344 = INT32_MIN;
	volatile uint32_t t84 = 857U;

    t84 = (x341|((x342%x343)<=x344));

    if (t84 != 95405045U) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x346 = 5084;
	uint32_t x347 = 4U;
	int8_t x348 = 4;
	volatile int64_t t85 = 4899332470276223LL;

    t85 = (x345|((x346%x347)<=x348));

    if (t85 != 50851216930032843LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x349 = 1323374376435LLU;
	uint32_t x350 = 4U;
	uint64_t x352 = 2813LLU;
	static volatile uint64_t t86 = 514470047766334LLU;

    t86 = (x349|((x350%x351)<=x352));

    if (t86 != 1323374376435LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x353 = 723;
	uint8_t x354 = UINT8_MAX;
	static uint16_t x355 = 2U;
	int64_t x356 = 412831139LL;
	volatile int32_t t87 = -17;

    t87 = (x353|((x354%x355)<=x356));

    if (t87 != 723) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x357 = 986;
	uint16_t x358 = 73U;
	int16_t x359 = INT16_MIN;
	int32_t t88 = -7390;

    t88 = (x357|((x358%x359)<=x360));

    if (t88 != 986) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x361 = 9U;
	volatile int64_t x362 = 4162LL;
	uint64_t x363 = 1080LLU;
	int32_t t89 = 0;

    t89 = (x361|((x362%x363)<=x364));

    if (t89 != 9) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x365 = UINT8_MAX;
	int8_t x366 = INT8_MIN;
	uint32_t x367 = UINT32_MAX;
	volatile uint64_t x368 = UINT64_MAX;

    t90 = (x365|((x366%x367)<=x368));

    if (t90 != 255) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x369 = 49U;
	uint64_t x370 = UINT64_MAX;
	int64_t x371 = -1LL;
	uint32_t x372 = UINT32_MAX;
	int32_t t91 = -552335774;

    t91 = (x369|((x370%x371)<=x372));

    if (t91 != 49) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x373 = 1901U;
	int64_t x374 = INT64_MIN;
	int16_t x375 = -1;
	int64_t x376 = 96LL;
	static int32_t t92 = -349526;

    t92 = (x373|((x374%x375)<=x376));

    if (t92 != 1901) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x377 = INT8_MIN;
	int16_t x378 = INT16_MAX;
	int32_t x379 = -249872;
	volatile int16_t x380 = -1;
	volatile int32_t t93 = 2950351;

    t93 = (x377|((x378%x379)<=x380));

    if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint8_t x381 = 9U;
	static uint8_t x382 = UINT8_MAX;
	uint16_t x383 = 492U;
	static uint16_t x384 = 33U;
	volatile int32_t t94 = 23186239;

    t94 = (x381|((x382%x383)<=x384));

    if (t94 != 9) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint32_t x385 = 1U;
	uint8_t x386 = 0U;
	uint32_t t95 = 4295U;

    t95 = (x385|((x386%x387)<=x388));

    if (t95 != 1U) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x389 = UINT8_MAX;
	int64_t x390 = 104LL;
	uint16_t x391 = 9U;
	int8_t x392 = -1;
	volatile int32_t t96 = -1;

    t96 = (x389|((x390%x391)<=x392));

    if (t96 != 255) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x394 = 1U;
	int32_t t97 = -221;

    t97 = (x393|((x394%x395)<=x396));

    if (t97 != -127) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint16_t x398 = 779U;
	volatile int64_t x400 = INT64_MIN;
	volatile int32_t t98 = 6;

    t98 = (x397|((x398%x399)<=x400));

    if (t98 != 32767) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x401 = INT32_MAX;
	static int64_t x404 = -1LL;
	int32_t t99 = INT32_MAX;

    t99 = (x401|((x402%x403)<=x404));

    if (t99 != INT32_MAX) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x405 = 33;
	int32_t x407 = INT32_MIN;
	volatile int32_t t100 = 109159;

    t100 = (x405|((x406%x407)<=x408));

    if (t100 != 33) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x409 = 0U;
	uint16_t x411 = 1U;
	int32_t x412 = 346272273;
	volatile int32_t t101 = 5659;

    t101 = (x409|((x410%x411)<=x412));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static int8_t x413 = INT8_MIN;
	uint8_t x414 = 120U;
	int16_t x415 = INT16_MIN;
	int32_t t102 = 19;

    t102 = (x413|((x414%x415)<=x416));

    if (t102 != -127) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x417 = 4537U;
	int8_t x418 = INT8_MIN;
	static uint16_t x419 = UINT16_MAX;
	uint64_t x420 = 236048471LLU;
	volatile int32_t t103 = 16071705;

    t103 = (x417|((x418%x419)<=x420));

    if (t103 != 4537) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x421 = 1U;
	static int8_t x424 = INT8_MIN;

    t104 = (x421|((x422%x423)<=x424));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint64_t x425 = UINT64_MAX;
	uint16_t x426 = 494U;
	int8_t x427 = -7;
	volatile uint64_t t105 = UINT64_MAX;

    t105 = (x425|((x426%x427)<=x428));

    if (t105 != UINT64_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int32_t x429 = INT32_MAX;
	int16_t x430 = -1;
	static volatile uint32_t x431 = 9138U;
	int8_t x432 = INT8_MAX;
	int32_t t106 = INT32_MAX;

    t106 = (x429|((x430%x431)<=x432));

    if (t106 != INT32_MAX) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x434 = INT8_MAX;
	int16_t x436 = 0;
	volatile int32_t t107 = -420;

    t107 = (x433|((x434%x435)<=x436));

    if (t107 != -32768) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x437 = -1;
	int32_t x438 = -1;
	volatile uint64_t x439 = UINT64_MAX;
	int32_t x440 = -1;
	volatile int32_t t108 = -1064583;

    t108 = (x437|((x438%x439)<=x440));

    if (t108 != -1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint16_t x441 = 42U;
	uint32_t x442 = 2651856U;
	uint32_t x443 = UINT32_MAX;
	uint32_t x444 = 803U;

    t109 = (x441|((x442%x443)<=x444));

    if (t109 != 42) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x445 = INT32_MAX;
	volatile int64_t x446 = 24616LL;
	volatile int32_t x447 = INT32_MIN;
	uint8_t x448 = 33U;
	volatile int32_t t110 = INT32_MAX;

    t110 = (x445|((x446%x447)<=x448));

    if (t110 != INT32_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile uint8_t x449 = 0U;
	uint16_t x450 = 1492U;
	int64_t x451 = 36474501LL;
	volatile uint64_t x452 = 326077752354LLU;
	static int32_t t111 = -6238307;

    t111 = (x449|((x450%x451)<=x452));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int8_t x454 = -1;
	int8_t x456 = INT8_MIN;
	static volatile int32_t t112 = 10138662;

    t112 = (x453|((x454%x455)<=x456));

    if (t112 != -32768) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x457 = INT8_MIN;
	static int64_t x458 = 1141903LL;
	uint64_t x460 = UINT64_MAX;
	int32_t t113 = -16156559;

    t113 = (x457|((x458%x459)<=x460));

    if (t113 != -127) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint8_t x461 = 1U;
	int8_t x462 = -1;
	int16_t x463 = INT16_MAX;
	static uint16_t x464 = 521U;
	volatile int32_t t114 = 162;

    t114 = (x461|((x462%x463)<=x464));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x466 = INT32_MIN;
	int64_t x467 = -1LL;
	int32_t x468 = 378;
	int32_t t115 = -39;

    t115 = (x465|((x466%x467)<=x468));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x469 = INT64_MIN;
	static int64_t x470 = INT64_MAX;
	volatile uint16_t x471 = 18U;
	static uint8_t x472 = 1U;
	int64_t t116 = INT64_MIN;

    t116 = (x469|((x470%x471)<=x472));

    if (t116 != INT64_MIN) { NG(); } else { ; }
	
}

void f117(void) {
    	static int64_t x473 = INT64_MIN;
	int16_t x474 = INT16_MAX;
	volatile int64_t x475 = 637819843LL;
	static int32_t x476 = INT32_MAX;
	int64_t t117 = 31736617LL;

    t117 = (x473|((x474%x475)<=x476));

    if (t117 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x477 = 63LL;
	uint32_t x478 = 12U;
	volatile uint32_t x480 = 649517U;

    t118 = (x477|((x478%x479)<=x480));

    if (t118 != 63LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x481 = 57LLU;
	int64_t x483 = INT64_MIN;
	int64_t x484 = INT64_MAX;

    t119 = (x481|((x482%x483)<=x484));

    if (t119 != 57LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static int64_t x485 = INT64_MIN;
	int8_t x486 = 5;
	int16_t x487 = INT16_MIN;
	static volatile int8_t x488 = -1;
	volatile int64_t t120 = INT64_MIN;

    t120 = (x485|((x486%x487)<=x488));

    if (t120 != INT64_MIN) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x489 = 78322902677758427LLU;
	static int32_t x490 = 24191;
	int8_t x491 = -1;
	volatile uint64_t t121 = 270871637531LLU;

    t121 = (x489|((x490%x491)<=x492));

    if (t121 != 78322902677758427LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int32_t x493 = 137304986;
	volatile uint32_t x494 = 93995U;
	volatile int32_t x495 = -1;
	uint16_t x496 = 113U;

    t122 = (x493|((x494%x495)<=x496));

    if (t122 != 137304986) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x498 = INT16_MAX;
	static volatile int16_t x499 = 4;
	static uint64_t x500 = 8002530378825877LLU;

    t123 = (x497|((x498%x499)<=x500));

    if (t123 != -127) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint64_t x501 = 12050338325LLU;
	static int64_t x502 = -39341323564LL;
	static int16_t x503 = 180;
	static int64_t x504 = -1LL;
	volatile uint64_t t124 = 192815629LLU;

    t124 = (x501|((x502%x503)<=x504));

    if (t124 != 12050338325LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x505 = -10559502;
	uint16_t x507 = UINT16_MAX;
	int16_t x508 = -1;

    t125 = (x505|((x506%x507)<=x508));

    if (t125 != -10559501) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x509 = INT16_MIN;
	static volatile int16_t x510 = INT16_MIN;
	uint8_t x511 = 14U;
	int8_t x512 = 0;
	static volatile int32_t t126 = 746690253;

    t126 = (x509|((x510%x511)<=x512));

    if (t126 != -32767) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x513 = 0;
	volatile int32_t x514 = -238;
	static volatile uint8_t x515 = UINT8_MAX;
	uint8_t x516 = 1U;
	static int32_t t127 = -13547720;

    t127 = (x513|((x514%x515)<=x516));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint8_t x517 = UINT8_MAX;
	int16_t x519 = -1;
	int16_t x520 = INT16_MIN;
	volatile int32_t t128 = -25;

    t128 = (x517|((x518%x519)<=x520));

    if (t128 != 255) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x521 = -1;
	volatile uint16_t x522 = 24839U;
	uint64_t x523 = 14368006358LLU;
	volatile uint8_t x524 = 1U;
	static int32_t t129 = 583185;

    t129 = (x521|((x522%x523)<=x524));

    if (t129 != -1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x525 = UINT64_MAX;
	static int64_t x526 = INT64_MAX;
	uint64_t x527 = 1007868LLU;
	volatile uint64_t t130 = UINT64_MAX;

    t130 = (x525|((x526%x527)<=x528));

    if (t130 != UINT64_MAX) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x529 = 4694;
	int32_t x530 = INT32_MIN;
	int32_t t131 = 23616605;

    t131 = (x529|((x530%x531)<=x532));

    if (t131 != 4695) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x533 = 114U;
	volatile int16_t x534 = INT16_MIN;
	static uint64_t x535 = 245130LLU;
	volatile int16_t x536 = INT16_MIN;
	static volatile int32_t t132 = -2;

    t132 = (x533|((x534%x535)<=x536));

    if (t132 != 115) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x537 = INT8_MIN;
	static volatile int16_t x538 = -1;
	int64_t x539 = 48786201LL;
	uint8_t x540 = UINT8_MAX;

    t133 = (x537|((x538%x539)<=x540));

    if (t133 != -127) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x542 = UINT64_MAX;
	int32_t x543 = INT32_MIN;
	static int8_t x544 = INT8_MIN;
	int32_t t134 = -47327855;

    t134 = (x541|((x542%x543)<=x544));

    if (t134 != 705) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x545 = 1771073LLU;
	static int32_t x546 = 48345677;
	int32_t x548 = -1;

    t135 = (x545|((x546%x547)<=x548));

    if (t135 != 1771073LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x549 = INT8_MIN;
	uint8_t x550 = 0U;
	int16_t x551 = INT16_MIN;
	int8_t x552 = -4;
	int32_t t136 = -269;

    t136 = (x549|((x550%x551)<=x552));

    if (t136 != -128) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x553 = UINT8_MAX;
	int16_t x554 = 2;
	static int64_t x555 = INT64_MIN;
	volatile int16_t x556 = INT16_MAX;
	static int32_t t137 = 370;

    t137 = (x553|((x554%x555)<=x556));

    if (t137 != 255) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x557 = INT8_MIN;
	volatile int32_t x558 = -2761;
	int32_t x559 = -1;
	int64_t x560 = INT64_MAX;
	volatile int32_t t138 = 0;

    t138 = (x557|((x558%x559)<=x560));

    if (t138 != -127) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x561 = INT64_MIN;
	uint32_t x562 = 1210U;
	int16_t x563 = -136;
	volatile int16_t x564 = -3782;

    t139 = (x561|((x562%x563)<=x564));

    if (t139 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint32_t x565 = 27U;
	uint8_t x566 = 3U;
	int64_t x567 = INT64_MIN;
	int64_t x568 = -6711102228557401LL;
	volatile uint32_t t140 = 63U;

    t140 = (x565|((x566%x567)<=x568));

    if (t140 != 27U) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x570 = -20;
	uint16_t x571 = 5888U;
	int64_t x572 = INT64_MAX;
	volatile int32_t t141 = 34803568;

    t141 = (x569|((x570%x571)<=x572));

    if (t141 != -1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x573 = 3600LLU;
	int16_t x574 = 871;
	uint16_t x576 = 14U;
	volatile uint64_t t142 = 6LLU;

    t142 = (x573|((x574%x575)<=x576));

    if (t142 != 3601LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x578 = INT16_MIN;
	volatile int32_t x579 = 8293;
	static int8_t x580 = INT8_MAX;

    t143 = (x577|((x578%x579)<=x580));

    if (t143 != 127) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x581 = 15U;
	int64_t x582 = 1584699106945563LL;
	int64_t x583 = INT64_MIN;
	int8_t x584 = INT8_MIN;

    t144 = (x581|((x582%x583)<=x584));

    if (t144 != 15U) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x585 = -1;
	static volatile int8_t x586 = -3;
	int8_t x587 = -1;
	int8_t x588 = INT8_MIN;
	int32_t t145 = 135;

    t145 = (x585|((x586%x587)<=x588));

    if (t145 != -1) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int16_t x589 = -1;
	int8_t x590 = 2;
	static volatile uint32_t x591 = UINT32_MAX;
	volatile uint64_t x592 = 59911112447346LLU;
	int32_t t146 = -171;

    t146 = (x589|((x590%x591)<=x592));

    if (t146 != -1) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x593 = INT16_MIN;
	int16_t x596 = -1;
	volatile int32_t t147 = -76052608;

    t147 = (x593|((x594%x595)<=x596));

    if (t147 != -32767) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x597 = INT8_MIN;
	int16_t x598 = -1;
	static int8_t x599 = 3;
	volatile int64_t x600 = INT64_MAX;

    t148 = (x597|((x598%x599)<=x600));

    if (t148 != -127) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x601 = INT8_MIN;
	int32_t x602 = INT32_MIN;
	int32_t x604 = INT32_MIN;
	int32_t t149 = 442506804;

    t149 = (x601|((x602%x603)<=x604));

    if (t149 != -128) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x605 = -1;
	int16_t x606 = -1;
	uint8_t x607 = UINT8_MAX;
	int32_t t150 = -1496;

    t150 = (x605|((x606%x607)<=x608));

    if (t150 != -1) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x611 = INT8_MIN;
	int32_t x612 = INT32_MAX;
	int32_t t151 = 1984;

    t151 = (x609|((x610%x611)<=x612));

    if (t151 != 5) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x614 = -132525502LL;
	static volatile uint32_t x615 = UINT32_MAX;
	int8_t x616 = INT8_MAX;
	uint32_t t152 = 501U;

    t152 = (x613|((x614%x615)<=x616));

    if (t152 != 1U) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint64_t x618 = 55133355673339LLU;
	int16_t x619 = INT16_MIN;
	int8_t x620 = 13;
	int32_t t153 = 30;

    t153 = (x617|((x618%x619)<=x620));

    if (t153 != -32768) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x621 = INT16_MIN;
	static uint64_t x622 = 326248945377068LLU;
	int8_t x623 = -1;
	int16_t x624 = 25;
	volatile int32_t t154 = 12;

    t154 = (x621|((x622%x623)<=x624));

    if (t154 != -32768) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x625 = -1;
	volatile int16_t x626 = INT16_MIN;
	int16_t x627 = INT16_MIN;
	static uint8_t x628 = 57U;

    t155 = (x625|((x626%x627)<=x628));

    if (t155 != -1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x629 = 1;
	int16_t x630 = INT16_MIN;
	volatile int64_t x631 = -1LL;
	static int64_t x632 = -1LL;
	int32_t t156 = -1;

    t156 = (x629|((x630%x631)<=x632));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x633 = -1;
	int64_t x635 = -2888361860LL;
	int64_t x636 = -1LL;
	volatile int32_t t157 = 56;

    t157 = (x633|((x634%x635)<=x636));

    if (t157 != -1) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x641 = INT8_MIN;
	int64_t x642 = INT64_MAX;
	int64_t x643 = 15203423047077LL;
	int32_t x644 = INT32_MIN;
	int32_t t158 = 305249;

    t158 = (x641|((x642%x643)<=x644));

    if (t158 != -128) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x645 = INT8_MIN;
	volatile int8_t x646 = INT8_MIN;
	int32_t t159 = 74987566;

    t159 = (x645|((x646%x647)<=x648));

    if (t159 != -127) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x649 = INT8_MAX;
	volatile int8_t x650 = -38;
	int8_t x651 = 5;
	int32_t x652 = -10;

    t160 = (x649|((x650%x651)<=x652));

    if (t160 != 127) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x653 = UINT64_MAX;
	static uint32_t x654 = 89380219U;
	static volatile int8_t x655 = 39;
	static uint8_t x656 = 29U;
	static volatile uint64_t t161 = UINT64_MAX;

    t161 = (x653|((x654%x655)<=x656));

    if (t161 != UINT64_MAX) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x657 = -1LL;
	static volatile uint64_t x659 = UINT64_MAX;
	int16_t x660 = INT16_MIN;
	volatile int64_t t162 = 1LL;

    t162 = (x657|((x658%x659)<=x660));

    if (t162 != -1LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x661 = -1LL;
	uint64_t x662 = UINT64_MAX;
	static volatile uint32_t x664 = UINT32_MAX;

    t163 = (x661|((x662%x663)<=x664));

    if (t163 != -1LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x666 = INT8_MIN;
	volatile uint8_t x668 = 65U;
	static int32_t t164 = 15884;

    t164 = (x665|((x666%x667)<=x668));

    if (t164 != 65535) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x669 = -1;
	static uint8_t x672 = UINT8_MAX;
	volatile int32_t t165 = 123055064;

    t165 = (x669|((x670%x671)<=x672));

    if (t165 != -1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint16_t x673 = 181U;
	static int8_t x674 = 0;
	uint64_t x675 = 14142261099211022LLU;
	int32_t x676 = -7721517;
	static int32_t t166 = -3144;

    t166 = (x673|((x674%x675)<=x676));

    if (t166 != 181) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x677 = -1;
	int32_t x680 = INT32_MAX;
	volatile int32_t t167 = 2453884;

    t167 = (x677|((x678%x679)<=x680));

    if (t167 != -1) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x681 = -2087448;
	static volatile uint8_t x684 = 82U;

    t168 = (x681|((x682%x683)<=x684));

    if (t168 != -2087447) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x685 = 1;
	static int8_t x686 = INT8_MAX;
	int8_t x687 = INT8_MAX;
	int32_t t169 = 14067;

    t169 = (x685|((x686%x687)<=x688));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint8_t x689 = 22U;
	int32_t x690 = INT32_MIN;
	volatile int32_t x691 = INT32_MAX;
	volatile uint16_t x692 = 11U;

    t170 = (x689|((x690%x691)<=x692));

    if (t170 != 23) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int8_t x693 = -1;
	int16_t x694 = -1;
	int32_t x695 = INT32_MIN;
	volatile int32_t x696 = -1;
	static volatile int32_t t171 = 17753;

    t171 = (x693|((x694%x695)<=x696));

    if (t171 != -1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x697 = 774444649693246135LLU;
	int64_t x698 = INT64_MAX;
	int32_t x700 = INT32_MAX;
	static uint64_t t172 = 5830152934563212LLU;

    t172 = (x697|((x698%x699)<=x700));

    if (t172 != 774444649693246135LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x701 = -517663;
	int16_t x702 = -10;
	volatile uint8_t x703 = 5U;
	uint8_t x704 = 2U;
	int32_t t173 = -524;

    t173 = (x701|((x702%x703)<=x704));

    if (t173 != -517663) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t t174 = -88478292;

    t174 = (x705|((x706%x707)<=x708));

    if (t174 != -24177) { NG(); } else { ; }
	
}

void f175(void) {
    	static int16_t x709 = -1;
	int64_t x710 = -170509128923LL;
	static int16_t x711 = -79;
	volatile int32_t t175 = -878;

    t175 = (x709|((x710%x711)<=x712));

    if (t175 != -1) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x713 = 92743784301383858LL;
	int32_t x714 = INT32_MAX;
	int64_t x715 = INT64_MIN;
	volatile int8_t x716 = 0;
	static int64_t t176 = 33935613194378LL;

    t176 = (x713|((x714%x715)<=x716));

    if (t176 != 92743784301383858LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x717 = -22;
	int64_t x718 = 249971872LL;
	int32_t x719 = INT32_MAX;
	int32_t t177 = 53782;

    t177 = (x717|((x718%x719)<=x720));

    if (t177 != -22) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x721 = 3781010U;
	static int32_t x722 = 664;
	uint64_t x723 = 214860LLU;
	volatile uint64_t x724 = UINT64_MAX;

    t178 = (x721|((x722%x723)<=x724));

    if (t178 != 3781011U) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x729 = -113992;
	int16_t x731 = INT16_MAX;
	uint16_t x732 = 57U;
	volatile int32_t t179 = -428596;

    t179 = (x729|((x730%x731)<=x732));

    if (t179 != -113991) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x733 = UINT16_MAX;
	int32_t x734 = 119533;
	int32_t x735 = -6460418;
	int32_t x736 = -286981;
	volatile int32_t t180 = 29793474;

    t180 = (x733|((x734%x735)<=x736));

    if (t180 != 65535) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint32_t x737 = UINT32_MAX;
	uint16_t x738 = 0U;
	uint32_t x739 = 6U;
	static int16_t x740 = -1;
	uint32_t t181 = UINT32_MAX;

    t181 = (x737|((x738%x739)<=x740));

    if (t181 != UINT32_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int16_t x741 = -6549;
	volatile int16_t x743 = INT16_MIN;
	static int32_t x744 = INT32_MIN;
	int32_t t182 = 0;

    t182 = (x741|((x742%x743)<=x744));

    if (t182 != -6549) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x745 = INT32_MIN;
	static int16_t x747 = -1;
	uint32_t x748 = 18887U;
	volatile int32_t t183 = 499;

    t183 = (x745|((x746%x747)<=x748));

    if (t183 != -2147483647) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x749 = UINT16_MAX;
	int8_t x750 = -1;
	static int64_t x751 = INT64_MIN;
	int32_t x752 = -1;

    t184 = (x749|((x750%x751)<=x752));

    if (t184 != 65535) { NG(); } else { ; }
	
}

void f185(void) {
    	static int8_t x753 = INT8_MAX;
	volatile int8_t x754 = INT8_MIN;
	uint64_t x755 = UINT64_MAX;
	volatile int32_t t185 = -60164844;

    t185 = (x753|((x754%x755)<=x756));

    if (t185 != 127) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint32_t x757 = 185759U;
	int64_t x759 = INT64_MIN;
	static int16_t x760 = -1475;
	volatile uint32_t t186 = 39433491U;

    t186 = (x757|((x758%x759)<=x760));

    if (t186 != 185759U) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x761 = -1LL;
	int16_t x762 = INT16_MIN;
	uint32_t x763 = 13U;

    t187 = (x761|((x762%x763)<=x764));

    if (t187 != -1LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x765 = 10246LLU;
	volatile int8_t x766 = -1;
	int32_t x767 = 6;
	volatile uint64_t t188 = 197786343582795LLU;

    t188 = (x765|((x766%x767)<=x768));

    if (t188 != 10247LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x769 = INT16_MAX;
	uint64_t x770 = 10LLU;
	int16_t x771 = -1;
	volatile uint32_t x772 = UINT32_MAX;
	int32_t t189 = 63915;

    t189 = (x769|((x770%x771)<=x772));

    if (t189 != 32767) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x776 = 13969LL;
	int64_t t190 = -1475929642100668LL;

    t190 = (x773|((x774%x775)<=x776));

    if (t190 != 163643923245283623LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x777 = INT8_MIN;
	int64_t x778 = INT64_MIN;
	volatile int8_t x779 = INT8_MIN;
	static volatile uint8_t x780 = UINT8_MAX;
	volatile int32_t t191 = 0;

    t191 = (x777|((x778%x779)<=x780));

    if (t191 != -127) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x781 = INT64_MIN;
	volatile int64_t x782 = 113269LL;
	uint64_t x784 = 11737021663LLU;
	volatile int64_t t192 = 42401395041LL;

    t192 = (x781|((x782%x783)<=x784));

    if (t192 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x785 = 0;
	volatile uint16_t x786 = UINT16_MAX;

    t193 = (x785|((x786%x787)<=x788));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x789 = -964;
	int32_t x790 = -501;
	static uint64_t x791 = UINT64_MAX;
	int32_t t194 = -44;

    t194 = (x789|((x790%x791)<=x792));

    if (t194 != -963) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x794 = 289;
	int8_t x795 = -8;
	static int32_t x796 = 79;
	static volatile int32_t t195 = 0;

    t195 = (x793|((x794%x795)<=x796));

    if (t195 != 32767) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x801 = 54U;
	uint16_t x802 = UINT16_MAX;
	uint16_t x804 = UINT16_MAX;
	int32_t t196 = 52;

    t196 = (x801|((x802%x803)<=x804));

    if (t196 != 55) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int8_t x805 = 7;
	int8_t x806 = INT8_MIN;
	static int16_t x807 = -1963;
	uint64_t x808 = 63055809LLU;
	volatile int32_t t197 = 12650;

    t197 = (x805|((x806%x807)<=x808));

    if (t197 != 7) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x809 = INT64_MIN;
	int64_t x810 = INT64_MIN;
	volatile int64_t x811 = -2579854871134LL;
	uint8_t x812 = 6U;
	int64_t t198 = 349792703072434713LL;

    t198 = (x809|((x810%x811)<=x812));

    if (t198 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x813 = UINT16_MAX;
	static volatile uint32_t x814 = UINT32_MAX;
	int32_t x815 = -1;
	uint8_t x816 = 3U;
	int32_t t199 = 7467095;

    t199 = (x813|((x814%x815)<=x816));

    if (t199 != 65535) { NG(); } else { ; }
	
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

