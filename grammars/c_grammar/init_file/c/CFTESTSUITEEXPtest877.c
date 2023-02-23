
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

static volatile uint8_t x9 = 7U;
int16_t x12 = -1;
int32_t x18 = -1;
volatile int8_t x24 = 0;
static uint8_t x30 = UINT8_MAX;
volatile int32_t t7 = 134709;
static uint16_t x33 = 1U;
static uint32_t x35 = 2888266U;
volatile int32_t t8 = 46693415;
int32_t x42 = -1;
uint64_t x44 = 1715LLU;
static int16_t x45 = -5724;
volatile uint64_t x46 = UINT64_MAX;
int32_t x48 = -1;
volatile int32_t t12 = 47817371;
static uint64_t x58 = UINT64_MAX;
volatile int64_t x59 = INT64_MIN;
int16_t x62 = -1;
static int8_t x65 = 13;
volatile int32_t t17 = -103;
int8_t x74 = INT8_MAX;
int32_t x75 = -5255467;
uint32_t x76 = 9460U;
int64_t x80 = -60525687LL;
int8_t x81 = INT8_MAX;
uint64_t x83 = 168LLU;
int32_t x86 = INT32_MIN;
int32_t t21 = -214307;
static uint16_t x90 = 782U;
volatile int16_t x101 = 823;
int8_t x106 = INT8_MAX;
int32_t x108 = INT32_MAX;
int32_t t26 = -594715;
uint32_t x113 = UINT32_MAX;
int32_t x115 = -401666866;
int32_t x116 = INT32_MAX;
int32_t x120 = -786;
static volatile int32_t t29 = -29;
int8_t x124 = -1;
int32_t t30 = 10112;
int8_t x125 = INT8_MIN;
uint32_t x126 = UINT32_MAX;
volatile int8_t x127 = INT8_MAX;
static int32_t t31 = -894;
static uint16_t x134 = 4994U;
uint8_t x138 = 4U;
static int64_t x141 = INT64_MAX;
int8_t x162 = -1;
uint64_t x164 = 359725LLU;
int32_t x166 = INT32_MAX;
int32_t t40 = 10230703;
static int16_t x171 = INT16_MIN;
static uint8_t x177 = 16U;
int32_t x182 = INT32_MAX;
int8_t x184 = INT8_MIN;
volatile int32_t t44 = 40494;
int64_t x189 = INT64_MAX;
int32_t t46 = -78;
static volatile int16_t x203 = INT16_MAX;
int32_t x206 = INT32_MIN;
uint8_t x209 = 8U;
int32_t t50 = -5712;
int8_t x223 = -6;
static int32_t t52 = -114957;
uint64_t x226 = 3958990199618LLU;
uint8_t x227 = 106U;
int16_t x230 = INT16_MIN;
int64_t x234 = INT64_MAX;
static int32_t t55 = 2046416;
volatile int32_t t56 = -17423189;
volatile int32_t t57 = -126471975;
int8_t x249 = 3;
int32_t t60 = -1;
volatile int32_t t61 = -1;
volatile int8_t x263 = -1;
volatile int32_t t62 = 1;
int16_t x265 = INT16_MAX;
int64_t x271 = -1LL;
static int16_t x274 = 0;
int16_t x280 = 6;
int32_t t66 = 1;
uint8_t x281 = 79U;
int16_t x282 = -1;
int8_t x285 = -3;
volatile uint16_t x288 = 1773U;
static int32_t t70 = -3232;
int64_t x299 = INT64_MAX;
int16_t x300 = 3;
uint16_t x305 = 7403U;
static uint8_t x311 = UINT8_MAX;
uint8_t x314 = UINT8_MAX;
static uint64_t x322 = UINT64_MAX;
volatile int32_t t78 = 7513;
volatile uint32_t x329 = 28U;
static volatile int32_t x330 = -1;
volatile int16_t x336 = -1;
volatile uint8_t x337 = 48U;
static volatile uint16_t x343 = 229U;
volatile int32_t t82 = 101562955;
uint32_t x351 = 8025U;
int16_t x353 = INT16_MAX;
static uint32_t x361 = 1797U;
int8_t x364 = INT8_MIN;
volatile int32_t t89 = -12589264;
int8_t x375 = INT8_MIN;
int8_t x378 = -21;
int32_t t91 = -210449;
volatile int32_t t93 = 632;
static int16_t x395 = -1;
uint64_t x398 = UINT64_MAX;
volatile uint64_t x401 = 58028LLU;
static uint8_t x407 = 103U;
volatile int32_t x409 = INT32_MIN;
int64_t x414 = -870639774935913LL;
volatile int32_t t101 = 3552456;
int8_t x426 = -1;
static int32_t x437 = 7527;
int32_t x442 = INT32_MIN;
int64_t x444 = INT64_MIN;
int32_t t107 = 12;
uint16_t x448 = 7204U;
volatile int32_t t109 = -89069016;
uint32_t x455 = 1937U;
int8_t x461 = INT8_MAX;
int64_t x464 = 3992374LL;
int32_t x465 = -3752;
volatile int8_t x467 = 22;
int8_t x474 = -1;
volatile int64_t x478 = -1LL;
static int32_t x480 = -1;
uint32_t x481 = UINT32_MAX;
int32_t x485 = -11693605;
volatile int16_t x487 = -2380;
static int16_t x494 = -1;
static int8_t x503 = INT8_MIN;
int8_t x507 = INT8_MAX;
int16_t x508 = INT16_MAX;
int32_t x510 = INT32_MIN;
static int16_t x512 = 19;
uint64_t x515 = UINT64_MAX;
int16_t x516 = INT16_MAX;
int32_t x537 = -1;
uint32_t x539 = 830U;
int64_t x541 = INT64_MAX;
uint8_t x548 = 74U;
int32_t t133 = 177715384;
uint16_t x554 = 1U;
volatile int32_t t136 = 2604;
static uint8_t x561 = UINT8_MAX;
uint64_t x569 = UINT64_MAX;
volatile uint64_t x571 = 2202094714916LLU;
static volatile int32_t t139 = 787;
volatile uint64_t x574 = 1426763016630LLU;
static int32_t t141 = 1084;
volatile int32_t t142 = 48;
volatile int32_t x585 = -284;
static int64_t x590 = -1LL;
int64_t x593 = 19446LL;
int8_t x594 = 1;
int64_t x595 = INT64_MAX;
uint16_t x596 = 896U;
volatile int32_t t148 = -1;
volatile int64_t x625 = INT64_MIN;
uint32_t x631 = 441U;
int8_t x635 = -4;
volatile int64_t x642 = -1LL;
volatile int32_t t156 = -1;
int64_t x648 = INT64_MIN;
int64_t x661 = 835771580779LL;
volatile uint32_t x665 = 7U;
uint32_t x668 = UINT32_MAX;
int16_t x669 = INT16_MAX;
volatile int8_t x673 = INT8_MIN;
static volatile int16_t x676 = -267;
int8_t x681 = 0;
volatile int64_t x683 = -5LL;
volatile int32_t t166 = -787;
int32_t x691 = -119174;
int32_t x695 = INT32_MAX;
static int8_t x696 = -1;
volatile int32_t t169 = 103249680;
int8_t x699 = INT8_MIN;
uint16_t x700 = 1U;
static volatile int32_t t170 = -5;
volatile uint8_t x701 = UINT8_MAX;
int64_t x704 = INT64_MAX;
volatile int32_t t171 = 6742;
uint64_t x714 = UINT64_MAX;
static uint32_t x720 = UINT32_MAX;
uint8_t x723 = UINT8_MAX;
int8_t x727 = -1;
static int16_t x731 = INT16_MAX;
volatile uint8_t x732 = 9U;
int32_t t179 = -166303088;
int8_t x737 = INT8_MAX;
int16_t x744 = -1339;
volatile int32_t t181 = -434386;
volatile int32_t t182 = 27844216;
uint8_t x750 = 60U;
volatile int32_t t183 = 3814101;
uint32_t x762 = 2311486U;
volatile uint32_t x764 = UINT32_MAX;
int16_t x770 = -15240;
uint8_t x773 = UINT8_MAX;
uint8_t x778 = 3U;
int16_t x780 = INT16_MIN;
int64_t x784 = INT64_MIN;
int32_t x785 = INT32_MIN;
volatile int32_t t192 = -62;
static uint16_t x790 = 0U;
static uint8_t x798 = 1U;
volatile int64_t x810 = -1LL;
uint64_t x815 = UINT64_MAX;


void f0(void) {
    	int64_t x1 = INT64_MAX;
	volatile uint64_t x2 = UINT64_MAX;
	int32_t x3 = -1;
	uint8_t x4 = 11U;
	static int32_t t0 = -19812130;

    t0 = (x1>((x2%x3)!=x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MIN;
	int8_t x6 = INT8_MIN;
	volatile int8_t x7 = INT8_MIN;
	int64_t x8 = -1423034605005LL;
	int32_t t1 = 4;

    t1 = (x5>((x6%x7)!=x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x10 = -1;
	uint16_t x11 = 62U;
	int32_t t2 = 3449;

    t2 = (x9>((x10%x11)!=x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = 414U;
	volatile int16_t x14 = 0;
	int64_t x15 = INT64_MIN;
	volatile int64_t x16 = -256952367270832LL;
	volatile int32_t t3 = -14109038;

    t3 = (x13>((x14%x15)!=x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x17 = -1;
	int32_t x19 = 101;
	int64_t x20 = INT64_MIN;
	volatile int32_t t4 = 307;

    t4 = (x17>((x18%x19)!=x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = 357999697;
	int8_t x22 = INT8_MIN;
	int64_t x23 = INT64_MIN;
	volatile int32_t t5 = 5785;

    t5 = (x21>((x22%x23)!=x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x25 = INT32_MAX;
	uint32_t x26 = 15U;
	uint32_t x27 = 9U;
	int64_t x28 = INT64_MIN;
	static int32_t t6 = -117009;

    t6 = (x25>((x26%x27)!=x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = INT64_MIN;
	uint32_t x31 = 271806U;
	volatile int64_t x32 = INT64_MIN;

    t7 = (x29>((x30%x31)!=x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x34 = 1U;
	int64_t x36 = 3507724361LL;

    t8 = (x33>((x34%x35)!=x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x37 = -39340675;
	int64_t x38 = 248570660908229LL;
	static uint8_t x39 = 3U;
	uint64_t x40 = 140769963014LLU;
	int32_t t9 = -2878578;

    t9 = (x37>((x38%x39)!=x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = -1;
	static uint16_t x43 = 1U;
	int32_t t10 = 62;

    t10 = (x41>((x42%x43)!=x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x47 = 1711;
	volatile int32_t t11 = 683590474;

    t11 = (x45>((x46%x47)!=x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = -16;
	volatile int16_t x50 = -1;
	int16_t x51 = -7;
	int64_t x52 = INT64_MAX;

    t12 = (x49>((x50%x51)!=x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = 369786044669641586LL;
	uint8_t x54 = 2U;
	volatile int8_t x55 = -1;
	int32_t x56 = -6;
	int32_t t13 = 6;

    t13 = (x53>((x54%x55)!=x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = -2;
	volatile int32_t x60 = INT32_MIN;
	volatile int32_t t14 = -478798;

    t14 = (x57>((x58%x59)!=x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = INT8_MAX;
	uint64_t x63 = 5505837258454LLU;
	static int16_t x64 = -6169;
	volatile int32_t t15 = -16043376;

    t15 = (x61>((x62%x63)!=x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x66 = INT16_MIN;
	int8_t x67 = INT8_MAX;
	int32_t x68 = INT32_MIN;
	int32_t t16 = -233165;

    t16 = (x65>((x66%x67)!=x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x69 = INT64_MIN;
	int8_t x70 = -1;
	int8_t x71 = INT8_MIN;
	uint8_t x72 = UINT8_MAX;

    t17 = (x69>((x70%x71)!=x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint32_t x73 = 21U;
	static int32_t t18 = 87;

    t18 = (x73>((x74%x75)!=x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint64_t x77 = 8553447LLU;
	int64_t x78 = -1LL;
	uint32_t x79 = UINT32_MAX;
	int32_t t19 = 29330;

    t19 = (x77>((x78%x79)!=x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x82 = INT64_MIN;
	static int64_t x84 = INT64_MIN;
	int32_t t20 = -75027473;

    t20 = (x81>((x82%x83)!=x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = INT32_MIN;
	int32_t x87 = -1;
	static uint16_t x88 = UINT16_MAX;

    t21 = (x85>((x86%x87)!=x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = INT8_MAX;
	int64_t x91 = INT64_MIN;
	uint32_t x92 = 53812973U;
	int32_t t22 = -178810;

    t22 = (x89>((x90%x91)!=x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x93 = 1991U;
	static uint16_t x94 = 280U;
	int32_t x95 = INT32_MIN;
	int64_t x96 = INT64_MIN;
	volatile int32_t t23 = 40;

    t23 = (x93>((x94%x95)!=x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x97 = INT16_MIN;
	uint16_t x98 = 922U;
	static int8_t x99 = -1;
	int64_t x100 = 6871082916LL;
	int32_t t24 = 381110;

    t24 = (x97>((x98%x99)!=x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x102 = INT32_MAX;
	uint16_t x103 = 2963U;
	static int8_t x104 = INT8_MAX;
	static volatile int32_t t25 = 12;

    t25 = (x101>((x102%x103)!=x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = 23;
	static int8_t x107 = -20;

    t26 = (x105>((x106%x107)!=x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = INT8_MAX;
	uint64_t x110 = UINT64_MAX;
	int32_t x111 = -1;
	uint64_t x112 = UINT64_MAX;
	int32_t t27 = -10875815;

    t27 = (x109>((x110%x111)!=x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x114 = INT16_MIN;
	static int32_t t28 = -3;

    t28 = (x113>((x114%x115)!=x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int32_t x117 = -1934472;
	static volatile int16_t x118 = 1753;
	int8_t x119 = INT8_MIN;

    t29 = (x117>((x118%x119)!=x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = -1019;
	int8_t x122 = INT8_MAX;
	int32_t x123 = -1;

    t30 = (x121>((x122%x123)!=x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x128 = 3561U;

    t31 = (x125>((x126%x127)!=x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x133 = 89129754718698LLU;
	static int32_t x135 = INT32_MIN;
	uint64_t x136 = 8292095555372LLU;
	volatile int32_t t32 = 125608155;

    t32 = (x133>((x134%x135)!=x136));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x137 = 19648U;
	static volatile int64_t x139 = -252448445542091LL;
	int8_t x140 = -1;
	static int32_t t33 = -6582947;

    t33 = (x137>((x138%x139)!=x140));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x142 = 1793775247LLU;
	int64_t x143 = 582133LL;
	int16_t x144 = -6;
	volatile int32_t t34 = 8652;

    t34 = (x141>((x142%x143)!=x144));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint64_t x145 = UINT64_MAX;
	int64_t x146 = INT64_MIN;
	static int8_t x147 = -1;
	uint8_t x148 = 41U;
	volatile int32_t t35 = -1;

    t35 = (x145>((x146%x147)!=x148));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x149 = 253308U;
	static int64_t x150 = INT64_MIN;
	int64_t x151 = -1LL;
	static uint32_t x152 = 4188U;
	int32_t t36 = 23614412;

    t36 = (x149>((x150%x151)!=x152));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x153 = -78;
	int64_t x154 = -37466652518LL;
	int64_t x155 = INT64_MIN;
	int8_t x156 = -54;
	volatile int32_t t37 = 876708;

    t37 = (x153>((x154%x155)!=x156));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x157 = INT16_MIN;
	int8_t x158 = 28;
	volatile uint8_t x159 = UINT8_MAX;
	uint16_t x160 = 1640U;
	static int32_t t38 = 98028227;

    t38 = (x157>((x158%x159)!=x160));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x161 = 12;
	static volatile uint16_t x163 = UINT16_MAX;
	int32_t t39 = -1641600;

    t39 = (x161>((x162%x163)!=x164));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x165 = INT64_MAX;
	int32_t x167 = -1;
	int8_t x168 = -1;

    t40 = (x165>((x166%x167)!=x168));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x169 = -1083129433080316LL;
	static volatile int64_t x170 = -1LL;
	static int16_t x172 = INT16_MAX;
	int32_t t41 = -221842518;

    t41 = (x169>((x170%x171)!=x172));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x178 = INT32_MIN;
	volatile int32_t x179 = -1;
	static uint64_t x180 = UINT64_MAX;
	int32_t t42 = 49;

    t42 = (x177>((x178%x179)!=x180));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x181 = INT16_MIN;
	volatile int32_t x183 = INT32_MIN;
	volatile int32_t t43 = 428990;

    t43 = (x181>((x182%x183)!=x184));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x185 = INT32_MIN;
	uint32_t x186 = UINT32_MAX;
	int16_t x187 = INT16_MIN;
	int16_t x188 = INT16_MIN;

    t44 = (x185>((x186%x187)!=x188));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint32_t x190 = UINT32_MAX;
	static volatile int64_t x191 = INT64_MIN;
	volatile int8_t x192 = 0;
	int32_t t45 = 1;

    t45 = (x189>((x190%x191)!=x192));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x193 = INT32_MIN;
	volatile int16_t x194 = INT16_MIN;
	uint8_t x195 = 13U;
	uint8_t x196 = UINT8_MAX;

    t46 = (x193>((x194%x195)!=x196));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x197 = 28;
	static uint64_t x198 = UINT64_MAX;
	volatile uint64_t x199 = 2128445392LLU;
	uint32_t x200 = 71U;
	volatile int32_t t47 = -227965334;

    t47 = (x197>((x198%x199)!=x200));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x201 = INT64_MAX;
	uint8_t x202 = UINT8_MAX;
	uint64_t x204 = 8933943067693715773LLU;
	volatile int32_t t48 = -2;

    t48 = (x201>((x202%x203)!=x204));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x205 = INT64_MIN;
	int32_t x207 = -1;
	int64_t x208 = INT64_MIN;
	int32_t t49 = -420308;

    t49 = (x205>((x206%x207)!=x208));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x210 = INT16_MIN;
	uint16_t x211 = 14805U;
	int8_t x212 = INT8_MIN;

    t50 = (x209>((x210%x211)!=x212));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x213 = 9598826392596LLU;
	volatile int32_t x214 = INT32_MAX;
	int8_t x215 = INT8_MAX;
	int16_t x216 = 1668;
	int32_t t51 = -1386;

    t51 = (x213>((x214%x215)!=x216));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int32_t x221 = INT32_MIN;
	int64_t x222 = INT64_MAX;
	int64_t x224 = INT64_MIN;

    t52 = (x221>((x222%x223)!=x224));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x225 = 823026967;
	int32_t x228 = 129574155;
	int32_t t53 = -21515;

    t53 = (x225>((x226%x227)!=x228));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x229 = INT8_MAX;
	int64_t x231 = 17510101413LL;
	static uint8_t x232 = 31U;
	static int32_t t54 = 6;

    t54 = (x229>((x230%x231)!=x232));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x233 = 0;
	volatile uint64_t x235 = UINT64_MAX;
	int16_t x236 = INT16_MIN;

    t55 = (x233>((x234%x235)!=x236));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x237 = -1;
	uint8_t x238 = 0U;
	static uint32_t x239 = 12080U;
	int8_t x240 = 6;

    t56 = (x237>((x238%x239)!=x240));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x241 = 29457U;
	int16_t x242 = INT16_MIN;
	static int16_t x243 = INT16_MAX;
	int64_t x244 = -128584LL;

    t57 = (x241>((x242%x243)!=x244));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x245 = -1;
	volatile uint32_t x246 = UINT32_MAX;
	volatile uint64_t x247 = 573698455466910197LLU;
	static volatile uint16_t x248 = UINT16_MAX;
	int32_t t58 = -644;

    t58 = (x245>((x246%x247)!=x248));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x250 = -1LL;
	int16_t x251 = 14;
	int8_t x252 = INT8_MIN;
	volatile int32_t t59 = -7;

    t59 = (x249>((x250%x251)!=x252));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x253 = INT8_MIN;
	int8_t x254 = -48;
	int64_t x255 = INT64_MIN;
	volatile int32_t x256 = -1;

    t60 = (x253>((x254%x255)!=x256));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x257 = 80910LLU;
	static uint32_t x258 = UINT32_MAX;
	uint16_t x259 = UINT16_MAX;
	int32_t x260 = -103191;

    t61 = (x257>((x258%x259)!=x260));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x261 = INT8_MIN;
	int32_t x262 = -127072165;
	int32_t x264 = INT32_MAX;

    t62 = (x261>((x262%x263)!=x264));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x266 = 1054U;
	int32_t x267 = -1;
	int16_t x268 = -1;
	int32_t t63 = 0;

    t63 = (x265>((x266%x267)!=x268));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x269 = INT16_MIN;
	int32_t x270 = INT32_MIN;
	static uint64_t x272 = 2676312LLU;
	int32_t t64 = -1458;

    t64 = (x269>((x270%x271)!=x272));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x273 = 72146996LLU;
	int16_t x275 = -1;
	int8_t x276 = INT8_MIN;
	int32_t t65 = 0;

    t65 = (x273>((x274%x275)!=x276));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x277 = -1;
	int16_t x278 = -1059;
	int8_t x279 = INT8_MIN;

    t66 = (x277>((x278%x279)!=x280));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x283 = -1;
	uint8_t x284 = UINT8_MAX;
	volatile int32_t t67 = 40;

    t67 = (x281>((x282%x283)!=x284));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x286 = -254319255;
	uint16_t x287 = 192U;
	volatile int32_t t68 = -5811118;

    t68 = (x285>((x286%x287)!=x288));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x289 = INT8_MAX;
	static uint64_t x290 = UINT64_MAX;
	int32_t x291 = INT32_MIN;
	static int32_t x292 = INT32_MIN;
	volatile int32_t t69 = 33;

    t69 = (x289>((x290%x291)!=x292));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x293 = INT8_MAX;
	uint8_t x294 = UINT8_MAX;
	int64_t x295 = INT64_MIN;
	uint64_t x296 = UINT64_MAX;

    t70 = (x293>((x294%x295)!=x296));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x297 = -1;
	static int16_t x298 = -1;
	int32_t t71 = -685369647;

    t71 = (x297>((x298%x299)!=x300));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x301 = 0;
	volatile int64_t x302 = INT64_MIN;
	int8_t x303 = INT8_MIN;
	static int8_t x304 = INT8_MIN;
	static volatile int32_t t72 = 0;

    t72 = (x301>((x302%x303)!=x304));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x306 = UINT64_MAX;
	int32_t x307 = INT32_MIN;
	uint16_t x308 = 3U;
	int32_t t73 = -115530;

    t73 = (x305>((x306%x307)!=x308));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint8_t x309 = UINT8_MAX;
	int32_t x310 = -1;
	static volatile uint32_t x312 = 0U;
	int32_t t74 = -295032;

    t74 = (x309>((x310%x311)!=x312));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int64_t x313 = INT64_MIN;
	volatile int64_t x315 = INT64_MIN;
	static int64_t x316 = 1538058801666LL;
	volatile int32_t t75 = 0;

    t75 = (x313>((x314%x315)!=x316));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x317 = -13;
	int16_t x318 = -1;
	volatile uint8_t x319 = UINT8_MAX;
	int64_t x320 = INT64_MIN;
	volatile int32_t t76 = 90223316;

    t76 = (x317>((x318%x319)!=x320));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x321 = INT16_MIN;
	int32_t x323 = -1;
	int16_t x324 = 15;
	int32_t t77 = 42650811;

    t77 = (x321>((x322%x323)!=x324));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x325 = -1LL;
	static int8_t x326 = INT8_MIN;
	uint8_t x327 = 7U;
	static uint32_t x328 = 751827U;

    t78 = (x325>((x326%x327)!=x328));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x331 = INT16_MAX;
	volatile int8_t x332 = -1;
	int32_t t79 = -1;

    t79 = (x329>((x330%x331)!=x332));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x333 = 13LLU;
	static int32_t x334 = -1;
	uint8_t x335 = 1U;
	volatile int32_t t80 = 22725;

    t80 = (x333>((x334%x335)!=x336));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x338 = -1;
	static int8_t x339 = INT8_MIN;
	static int8_t x340 = -1;
	volatile int32_t t81 = -114710565;

    t81 = (x337>((x338%x339)!=x340));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x341 = INT8_MIN;
	static uint32_t x342 = 2018U;
	volatile uint32_t x344 = 689989U;

    t82 = (x341>((x342%x343)!=x344));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint8_t x345 = 24U;
	uint32_t x346 = UINT32_MAX;
	uint16_t x347 = UINT16_MAX;
	int8_t x348 = -1;
	int32_t t83 = -1720;

    t83 = (x345>((x346%x347)!=x348));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x349 = -1;
	int32_t x350 = -1;
	int64_t x352 = -1LL;
	int32_t t84 = 2;

    t84 = (x349>((x350%x351)!=x352));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x354 = 418164790725LL;
	static int8_t x355 = INT8_MAX;
	int64_t x356 = INT64_MIN;
	int32_t t85 = 389;

    t85 = (x353>((x354%x355)!=x356));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x357 = INT32_MIN;
	int16_t x358 = -155;
	int8_t x359 = INT8_MIN;
	uint8_t x360 = 4U;
	volatile int32_t t86 = -1;

    t86 = (x357>((x358%x359)!=x360));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int16_t x362 = -1;
	static int32_t x363 = 409;
	volatile int32_t t87 = -9243630;

    t87 = (x361>((x362%x363)!=x364));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static int8_t x365 = INT8_MIN;
	int8_t x366 = -1;
	int64_t x367 = INT64_MIN;
	volatile uint16_t x368 = 30108U;
	int32_t t88 = 17338;

    t88 = (x365>((x366%x367)!=x368));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x369 = INT16_MIN;
	static int64_t x370 = -4551573306LL;
	static uint32_t x371 = UINT32_MAX;
	static uint64_t x372 = 281093873857082LLU;

    t89 = (x369>((x370%x371)!=x372));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int8_t x373 = 22;
	uint64_t x374 = 2880105009LLU;
	uint64_t x376 = 6018334679503532LLU;
	int32_t t90 = 886;

    t90 = (x373>((x374%x375)!=x376));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int64_t x377 = INT64_MAX;
	uint64_t x379 = 2706733953LLU;
	int8_t x380 = 53;

    t91 = (x377>((x378%x379)!=x380));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint64_t x381 = 214LLU;
	uint32_t x382 = 10U;
	int32_t x383 = -1;
	uint16_t x384 = 1828U;
	static volatile int32_t t92 = 28;

    t92 = (x381>((x382%x383)!=x384));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x385 = INT16_MAX;
	int16_t x386 = INT16_MIN;
	int32_t x387 = INT32_MAX;
	static int8_t x388 = -5;

    t93 = (x385>((x386%x387)!=x388));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x389 = 0U;
	static int16_t x390 = INT16_MIN;
	int64_t x391 = INT64_MIN;
	uint16_t x392 = UINT16_MAX;
	static int32_t t94 = 624758261;

    t94 = (x389>((x390%x391)!=x392));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x393 = INT16_MIN;
	int64_t x394 = -174025063521LL;
	uint32_t x396 = UINT32_MAX;
	volatile int32_t t95 = 273794765;

    t95 = (x393>((x394%x395)!=x396));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x397 = INT8_MIN;
	int32_t x399 = 18;
	volatile uint64_t x400 = 102877029452321950LLU;
	int32_t t96 = 21;

    t96 = (x397>((x398%x399)!=x400));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x402 = -1;
	static volatile uint16_t x403 = UINT16_MAX;
	volatile int16_t x404 = INT16_MIN;
	volatile int32_t t97 = 21163;

    t97 = (x401>((x402%x403)!=x404));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x405 = 22;
	uint32_t x406 = UINT32_MAX;
	uint8_t x408 = 106U;
	volatile int32_t t98 = 284555612;

    t98 = (x405>((x406%x407)!=x408));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x410 = INT8_MIN;
	int8_t x411 = INT8_MIN;
	static int8_t x412 = -1;
	int32_t t99 = -374605;

    t99 = (x409>((x410%x411)!=x412));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x413 = 0LLU;
	int8_t x415 = -1;
	static int64_t x416 = INT64_MIN;
	volatile int32_t t100 = -822444943;

    t100 = (x413>((x414%x415)!=x416));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x417 = INT8_MIN;
	uint32_t x418 = UINT32_MAX;
	int8_t x419 = 4;
	static int8_t x420 = 58;

    t101 = (x417>((x418%x419)!=x420));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x421 = 1;
	volatile int64_t x422 = -1074LL;
	int8_t x423 = -1;
	int64_t x424 = -1LL;
	static volatile int32_t t102 = 6568337;

    t102 = (x421>((x422%x423)!=x424));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x425 = INT32_MIN;
	uint8_t x427 = 9U;
	uint32_t x428 = 2914U;
	volatile int32_t t103 = -87420559;

    t103 = (x425>((x426%x427)!=x428));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x429 = UINT16_MAX;
	static int16_t x430 = -1;
	volatile int16_t x431 = -668;
	uint64_t x432 = UINT64_MAX;
	volatile int32_t t104 = 1033038956;

    t104 = (x429>((x430%x431)!=x432));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x433 = -1;
	int8_t x434 = INT8_MIN;
	uint64_t x435 = 1119995LLU;
	static int64_t x436 = -1LL;
	int32_t t105 = 247361395;

    t105 = (x433>((x434%x435)!=x436));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x438 = -862447LL;
	uint64_t x439 = UINT64_MAX;
	uint32_t x440 = 1U;
	int32_t t106 = -1271836;

    t106 = (x437>((x438%x439)!=x440));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint8_t x441 = UINT8_MAX;
	static uint32_t x443 = UINT32_MAX;

    t107 = (x441>((x442%x443)!=x444));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x445 = INT64_MIN;
	int8_t x446 = 0;
	uint16_t x447 = 743U;
	static volatile int32_t t108 = 6555345;

    t108 = (x445>((x446%x447)!=x448));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile uint64_t x449 = 11597200827LLU;
	int32_t x450 = INT32_MIN;
	uint32_t x451 = UINT32_MAX;
	int64_t x452 = INT64_MAX;

    t109 = (x449>((x450%x451)!=x452));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x453 = INT16_MIN;
	uint16_t x454 = 6U;
	uint16_t x456 = UINT16_MAX;
	int32_t t110 = 520974336;

    t110 = (x453>((x454%x455)!=x456));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x457 = -1;
	int16_t x458 = 9934;
	int32_t x459 = 26888630;
	uint32_t x460 = UINT32_MAX;
	volatile int32_t t111 = -16;

    t111 = (x457>((x458%x459)!=x460));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x462 = 183450LLU;
	uint32_t x463 = 203U;
	volatile int32_t t112 = -50128;

    t112 = (x461>((x462%x463)!=x464));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint8_t x466 = UINT8_MAX;
	uint8_t x468 = 38U;
	volatile int32_t t113 = 251340;

    t113 = (x465>((x466%x467)!=x468));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x469 = INT32_MIN;
	int64_t x470 = INT64_MAX;
	uint32_t x471 = UINT32_MAX;
	static uint64_t x472 = UINT64_MAX;
	volatile int32_t t114 = 9974361;

    t114 = (x469>((x470%x471)!=x472));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x473 = INT8_MAX;
	volatile int32_t x475 = INT32_MIN;
	int16_t x476 = -3779;
	int32_t t115 = 330795;

    t115 = (x473>((x474%x475)!=x476));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x477 = 3799U;
	uint32_t x479 = 282055U;
	int32_t t116 = 2;

    t116 = (x477>((x478%x479)!=x480));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x482 = 105708LLU;
	int8_t x483 = -1;
	uint32_t x484 = UINT32_MAX;
	volatile int32_t t117 = 176989470;

    t117 = (x481>((x482%x483)!=x484));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint32_t x486 = UINT32_MAX;
	volatile uint64_t x488 = UINT64_MAX;
	int32_t t118 = -6027;

    t118 = (x485>((x486%x487)!=x488));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint8_t x489 = UINT8_MAX;
	int32_t x490 = 1058719;
	static volatile uint8_t x491 = UINT8_MAX;
	int32_t x492 = INT32_MAX;
	volatile int32_t t119 = 1358427;

    t119 = (x489>((x490%x491)!=x492));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x493 = INT8_MIN;
	int64_t x495 = 890707307179LL;
	volatile uint64_t x496 = UINT64_MAX;
	int32_t t120 = 1237158;

    t120 = (x493>((x494%x495)!=x496));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t x497 = -1LL;
	int8_t x498 = -56;
	int32_t x499 = INT32_MIN;
	uint16_t x500 = 247U;
	int32_t t121 = -26;

    t121 = (x497>((x498%x499)!=x500));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int32_t x501 = INT32_MAX;
	uint32_t x502 = 85369064U;
	int16_t x504 = INT16_MIN;
	volatile int32_t t122 = -253422828;

    t122 = (x501>((x502%x503)!=x504));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x505 = INT64_MAX;
	static int8_t x506 = -1;
	int32_t t123 = 2616;

    t123 = (x505>((x506%x507)!=x508));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x509 = INT8_MAX;
	static int64_t x511 = -88685958267946LL;
	int32_t t124 = -55;

    t124 = (x509>((x510%x511)!=x512));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x513 = UINT8_MAX;
	volatile int64_t x514 = 834485LL;
	int32_t t125 = 1427679;

    t125 = (x513>((x514%x515)!=x516));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x517 = INT16_MIN;
	static int32_t x518 = INT32_MIN;
	volatile uint8_t x519 = 94U;
	volatile int32_t x520 = INT32_MAX;
	volatile int32_t t126 = -776377339;

    t126 = (x517>((x518%x519)!=x520));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int32_t x521 = INT32_MIN;
	uint8_t x522 = 122U;
	static int64_t x523 = -315104LL;
	int64_t x524 = INT64_MAX;
	volatile int32_t t127 = -65;

    t127 = (x521>((x522%x523)!=x524));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x525 = -1;
	volatile int64_t x526 = INT64_MIN;
	int32_t x527 = -18871;
	static volatile int32_t x528 = INT32_MIN;
	static volatile int32_t t128 = -20638;

    t128 = (x525>((x526%x527)!=x528));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x529 = 10795;
	int32_t x530 = 25148335;
	int64_t x531 = INT64_MIN;
	uint8_t x532 = UINT8_MAX;
	volatile int32_t t129 = 232823528;

    t129 = (x529>((x530%x531)!=x532));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x533 = 13;
	int8_t x534 = 6;
	uint32_t x535 = UINT32_MAX;
	volatile int64_t x536 = INT64_MIN;
	volatile int32_t t130 = -3904;

    t130 = (x533>((x534%x535)!=x536));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x538 = 39224909855LL;
	int64_t x540 = INT64_MAX;
	volatile int32_t t131 = 14;

    t131 = (x537>((x538%x539)!=x540));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x542 = INT8_MIN;
	uint8_t x543 = 4U;
	int64_t x544 = INT64_MIN;
	static volatile int32_t t132 = -46;

    t132 = (x541>((x542%x543)!=x544));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x545 = 9U;
	int16_t x546 = 74;
	static int16_t x547 = INT16_MAX;

    t133 = (x545>((x546%x547)!=x548));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint32_t x549 = UINT32_MAX;
	uint8_t x550 = 28U;
	uint64_t x551 = 7212326066LLU;
	int16_t x552 = -1;
	volatile int32_t t134 = -33916;

    t134 = (x549>((x550%x551)!=x552));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static int16_t x553 = INT16_MAX;
	int8_t x555 = INT8_MIN;
	volatile int64_t x556 = -58122LL;
	int32_t t135 = -6;

    t135 = (x553>((x554%x555)!=x556));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x557 = UINT8_MAX;
	uint64_t x558 = UINT64_MAX;
	uint16_t x559 = UINT16_MAX;
	static int32_t x560 = 92;

    t136 = (x557>((x558%x559)!=x560));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x562 = -1;
	static uint64_t x563 = UINT64_MAX;
	uint32_t x564 = 3U;
	static volatile int32_t t137 = -238;

    t137 = (x561>((x562%x563)!=x564));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x565 = 4;
	int8_t x566 = INT8_MIN;
	volatile int64_t x567 = 4199286LL;
	int8_t x568 = INT8_MAX;
	int32_t t138 = 9;

    t138 = (x565>((x566%x567)!=x568));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x570 = -850;
	int64_t x572 = -672087548482LL;

    t139 = (x569>((x570%x571)!=x572));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x573 = INT64_MIN;
	int8_t x575 = INT8_MAX;
	volatile int16_t x576 = INT16_MAX;
	int32_t t140 = 15;

    t140 = (x573>((x574%x575)!=x576));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x577 = INT8_MIN;
	int16_t x578 = INT16_MIN;
	volatile int32_t x579 = -1;
	int8_t x580 = INT8_MIN;

    t141 = (x577>((x578%x579)!=x580));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile uint16_t x581 = 14U;
	static int32_t x582 = 325232;
	uint32_t x583 = UINT32_MAX;
	volatile int64_t x584 = INT64_MIN;

    t142 = (x581>((x582%x583)!=x584));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int64_t x586 = -1824712912620LL;
	uint16_t x587 = 7060U;
	volatile uint16_t x588 = 0U;
	volatile int32_t t143 = 1;

    t143 = (x585>((x586%x587)!=x588));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint64_t x589 = 456429254139078LLU;
	static volatile int64_t x591 = -1969LL;
	int64_t x592 = -8239989554LL;
	volatile int32_t t144 = -3173681;

    t144 = (x589>((x590%x591)!=x592));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t t145 = 17728;

    t145 = (x593>((x594%x595)!=x596));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x597 = 89655762;
	uint32_t x598 = UINT32_MAX;
	uint32_t x599 = 3236U;
	uint32_t x600 = 1846539U;
	volatile int32_t t146 = -3;

    t146 = (x597>((x598%x599)!=x600));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x601 = INT32_MAX;
	int64_t x602 = -1LL;
	static int16_t x603 = -1;
	uint32_t x604 = UINT32_MAX;
	volatile int32_t t147 = 0;

    t147 = (x601>((x602%x603)!=x604));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x605 = 20429376U;
	static volatile uint8_t x606 = 24U;
	int16_t x607 = 3;
	uint8_t x608 = 3U;

    t148 = (x605>((x606%x607)!=x608));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x609 = -1;
	int16_t x610 = 18;
	uint16_t x611 = UINT16_MAX;
	uint64_t x612 = 967505364229865LLU;
	int32_t t149 = -14329516;

    t149 = (x609>((x610%x611)!=x612));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x613 = UINT8_MAX;
	static int16_t x614 = INT16_MAX;
	volatile int16_t x615 = -922;
	int16_t x616 = INT16_MIN;
	volatile int32_t t150 = -2993107;

    t150 = (x613>((x614%x615)!=x616));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x617 = 5U;
	volatile int16_t x618 = -4201;
	volatile int16_t x619 = INT16_MAX;
	volatile int32_t x620 = INT32_MIN;
	static int32_t t151 = 52046;

    t151 = (x617>((x618%x619)!=x620));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x626 = INT16_MIN;
	static int16_t x627 = INT16_MIN;
	int32_t x628 = INT32_MIN;
	volatile int32_t t152 = -8063;

    t152 = (x625>((x626%x627)!=x628));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x629 = INT16_MAX;
	static int8_t x630 = INT8_MIN;
	static uint8_t x632 = UINT8_MAX;
	int32_t t153 = 518054;

    t153 = (x629>((x630%x631)!=x632));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x633 = INT8_MAX;
	volatile uint16_t x634 = UINT16_MAX;
	volatile uint32_t x636 = UINT32_MAX;
	volatile int32_t t154 = 6433;

    t154 = (x633>((x634%x635)!=x636));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x637 = UINT16_MAX;
	int8_t x638 = 57;
	int8_t x639 = -1;
	int64_t x640 = INT64_MIN;
	int32_t t155 = -1071713090;

    t155 = (x637>((x638%x639)!=x640));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x641 = 6U;
	static int64_t x643 = -105724500136869599LL;
	int64_t x644 = INT64_MAX;

    t156 = (x641>((x642%x643)!=x644));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x645 = -23340869;
	int8_t x646 = INT8_MIN;
	uint16_t x647 = UINT16_MAX;
	volatile int32_t t157 = -4077;

    t157 = (x645>((x646%x647)!=x648));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x649 = -2;
	static volatile uint16_t x650 = 475U;
	uint64_t x651 = 807783026408174198LLU;
	uint16_t x652 = UINT16_MAX;
	volatile int32_t t158 = -1869756;

    t158 = (x649>((x650%x651)!=x652));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x653 = 795U;
	int8_t x654 = 1;
	static int32_t x655 = -4847;
	int32_t x656 = INT32_MIN;
	volatile int32_t t159 = -6213;

    t159 = (x653>((x654%x655)!=x656));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int32_t x657 = 4;
	volatile uint64_t x658 = UINT64_MAX;
	int64_t x659 = 1LL;
	static volatile int64_t x660 = -1LL;
	int32_t t160 = -11623545;

    t160 = (x657>((x658%x659)!=x660));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x662 = 0;
	uint32_t x663 = UINT32_MAX;
	uint8_t x664 = 3U;
	volatile int32_t t161 = 1;

    t161 = (x661>((x662%x663)!=x664));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x666 = UINT8_MAX;
	volatile uint32_t x667 = 28587857U;
	static volatile int32_t t162 = -3121088;

    t162 = (x665>((x666%x667)!=x668));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x670 = -1;
	int64_t x671 = -4212713907LL;
	volatile int64_t x672 = -1LL;
	int32_t t163 = 1;

    t163 = (x669>((x670%x671)!=x672));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile uint16_t x674 = UINT16_MAX;
	static volatile uint64_t x675 = 2584846172LLU;
	int32_t t164 = -114;

    t164 = (x673>((x674%x675)!=x676));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x677 = 0;
	int8_t x678 = INT8_MAX;
	int32_t x679 = INT32_MIN;
	static volatile uint8_t x680 = UINT8_MAX;
	volatile int32_t t165 = 4657;

    t165 = (x677>((x678%x679)!=x680));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x682 = INT32_MIN;
	static int64_t x684 = INT64_MIN;

    t166 = (x681>((x682%x683)!=x684));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x685 = INT8_MAX;
	uint32_t x686 = 236927U;
	int32_t x687 = 374;
	int64_t x688 = INT64_MIN;
	volatile int32_t t167 = 17785476;

    t167 = (x685>((x686%x687)!=x688));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x689 = 107U;
	static uint32_t x690 = UINT32_MAX;
	int64_t x692 = INT64_MAX;
	volatile int32_t t168 = 1110;

    t168 = (x689>((x690%x691)!=x692));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x693 = INT32_MIN;
	int64_t x694 = -1LL;

    t169 = (x693>((x694%x695)!=x696));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x697 = -1;
	volatile uint64_t x698 = 66211214LLU;

    t170 = (x697>((x698%x699)!=x700));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x702 = -1;
	volatile int16_t x703 = INT16_MAX;

    t171 = (x701>((x702%x703)!=x704));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x705 = INT64_MIN;
	int32_t x706 = -1;
	uint32_t x707 = 5435U;
	int64_t x708 = -175528778LL;
	int32_t t172 = -32106744;

    t172 = (x705>((x706%x707)!=x708));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x709 = 186U;
	int8_t x710 = 0;
	int64_t x711 = INT64_MIN;
	uint64_t x712 = 8319378877900LLU;
	int32_t t173 = 0;

    t173 = (x709>((x710%x711)!=x712));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x713 = INT32_MIN;
	int16_t x715 = 1;
	uint16_t x716 = 802U;
	volatile int32_t t174 = 665985;

    t174 = (x713>((x714%x715)!=x716));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint64_t x717 = UINT64_MAX;
	int8_t x718 = INT8_MIN;
	uint16_t x719 = 1U;
	int32_t t175 = -10979;

    t175 = (x717>((x718%x719)!=x720));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x721 = -1;
	uint64_t x722 = UINT64_MAX;
	int16_t x724 = 0;
	int32_t t176 = -47784;

    t176 = (x721>((x722%x723)!=x724));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int16_t x725 = INT16_MIN;
	uint64_t x726 = UINT64_MAX;
	static uint64_t x728 = 39971LLU;
	volatile int32_t t177 = 0;

    t177 = (x725>((x726%x727)!=x728));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x729 = INT32_MAX;
	int16_t x730 = -1;
	volatile int32_t t178 = -634;

    t178 = (x729>((x730%x731)!=x732));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x733 = INT16_MIN;
	uint64_t x734 = UINT64_MAX;
	int8_t x735 = 2;
	int64_t x736 = INT64_MIN;

    t179 = (x733>((x734%x735)!=x736));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x738 = INT32_MIN;
	int32_t x739 = INT32_MAX;
	int64_t x740 = INT64_MAX;
	int32_t t180 = 678573554;

    t180 = (x737>((x738%x739)!=x740));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int32_t x741 = 19321;
	int32_t x742 = -126;
	uint64_t x743 = 1392031LLU;

    t181 = (x741>((x742%x743)!=x744));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x745 = UINT32_MAX;
	static int8_t x746 = 28;
	volatile int32_t x747 = INT32_MAX;
	volatile uint16_t x748 = 8334U;

    t182 = (x745>((x746%x747)!=x748));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x749 = UINT16_MAX;
	int8_t x751 = -3;
	static uint64_t x752 = 336494359215LLU;

    t183 = (x749>((x750%x751)!=x752));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x753 = INT16_MIN;
	int64_t x754 = INT64_MAX;
	int8_t x755 = -1;
	static volatile uint16_t x756 = UINT16_MAX;
	static int32_t t184 = 597367293;

    t184 = (x753>((x754%x755)!=x756));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x757 = 2548177947LLU;
	int8_t x758 = -50;
	int16_t x759 = INT16_MIN;
	static volatile int64_t x760 = -1LL;
	int32_t t185 = 224939;

    t185 = (x757>((x758%x759)!=x760));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x761 = INT64_MAX;
	int32_t x763 = INT32_MIN;
	int32_t t186 = -22465;

    t186 = (x761>((x762%x763)!=x764));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x765 = -51;
	uint16_t x766 = UINT16_MAX;
	int64_t x767 = 1293354119897LL;
	int64_t x768 = INT64_MIN;
	int32_t t187 = 1067022917;

    t187 = (x765>((x766%x767)!=x768));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x769 = -1LL;
	uint64_t x771 = 492066024671LLU;
	volatile int32_t x772 = -20;
	volatile int32_t t188 = -444;

    t188 = (x769>((x770%x771)!=x772));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x774 = INT64_MIN;
	int8_t x775 = INT8_MIN;
	int8_t x776 = INT8_MIN;
	int32_t t189 = 131785723;

    t189 = (x773>((x774%x775)!=x776));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x777 = -6;
	volatile int16_t x779 = -4;
	volatile int32_t t190 = 2115555;

    t190 = (x777>((x778%x779)!=x780));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int32_t x781 = INT32_MAX;
	uint8_t x782 = 22U;
	volatile int16_t x783 = INT16_MIN;
	static volatile int32_t t191 = -1531;

    t191 = (x781>((x782%x783)!=x784));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x786 = INT64_MIN;
	int16_t x787 = INT16_MIN;
	static uint8_t x788 = 3U;

    t192 = (x785>((x786%x787)!=x788));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int64_t x789 = -1LL;
	int32_t x791 = INT32_MIN;
	volatile uint16_t x792 = UINT16_MAX;
	int32_t t193 = 148856191;

    t193 = (x789>((x790%x791)!=x792));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x793 = INT8_MAX;
	int16_t x794 = INT16_MAX;
	int64_t x795 = INT64_MIN;
	volatile uint32_t x796 = 2393438U;
	volatile int32_t t194 = 853026;

    t194 = (x793>((x794%x795)!=x796));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x797 = 10;
	int32_t x799 = INT32_MIN;
	int32_t x800 = -1;
	int32_t t195 = 21;

    t195 = (x797>((x798%x799)!=x800));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x801 = INT64_MIN;
	uint16_t x802 = 3U;
	int32_t x803 = -54507;
	int64_t x804 = -1LL;
	int32_t t196 = 55438779;

    t196 = (x801>((x802%x803)!=x804));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x805 = 5;
	int64_t x806 = -1LL;
	volatile int16_t x807 = 6;
	uint32_t x808 = UINT32_MAX;
	volatile int32_t t197 = -88115;

    t197 = (x805>((x806%x807)!=x808));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static int8_t x809 = INT8_MAX;
	int8_t x811 = INT8_MIN;
	static int32_t x812 = INT32_MIN;
	int32_t t198 = 79255004;

    t198 = (x809>((x810%x811)!=x812));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x813 = INT8_MAX;
	uint8_t x814 = 114U;
	int64_t x816 = -2072934811519LL;
	volatile int32_t t199 = -2;

    t199 = (x813>((x814%x815)!=x816));

    if (t199 != 1) { NG(); } else { ; }
	
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

