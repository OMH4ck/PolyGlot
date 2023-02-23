
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

volatile int32_t x1 = INT32_MIN;
int64_t x2 = INT64_MIN;
int64_t x4 = INT64_MIN;
int64_t x6 = INT64_MIN;
int16_t x9 = INT16_MIN;
volatile int32_t x12 = -1;
int32_t x13 = -1;
static int64_t x14 = INT64_MAX;
uint32_t x18 = UINT32_MAX;
volatile int32_t t6 = -88052;
int8_t x31 = INT8_MAX;
static int64_t x36 = -135974897203LL;
int32_t t8 = -440862825;
uint32_t x37 = UINT32_MAX;
uint32_t x41 = UINT32_MAX;
volatile int64_t x43 = INT64_MIN;
int32_t x45 = INT32_MIN;
int16_t x46 = INT16_MAX;
int16_t x49 = INT16_MIN;
int64_t x51 = -1LL;
static volatile int32_t t12 = 257632141;
int64_t x54 = -357262LL;
int8_t x57 = INT8_MIN;
int32_t x64 = INT32_MIN;
volatile int32_t t15 = INT32_MAX;
int32_t t16 = -145895;
int64_t x72 = INT64_MAX;
volatile int16_t x77 = INT16_MIN;
int32_t x88 = -1;
int8_t x90 = INT8_MIN;
volatile int32_t t23 = INT32_MIN;
int8_t x107 = INT8_MAX;
int64_t x110 = INT64_MIN;
uint16_t x113 = 0U;
int16_t x126 = INT16_MIN;
int64_t x132 = INT64_MIN;
static int64_t x133 = 5507970736976LL;
int64_t x135 = 17286156833LL;
int8_t x137 = INT8_MAX;
int16_t x141 = INT16_MAX;
volatile int16_t x142 = -1;
int64_t x155 = INT64_MIN;
volatile int64_t x156 = -23940673LL;
uint32_t x158 = UINT32_MAX;
int8_t x159 = INT8_MIN;
int8_t x162 = -1;
int64_t x164 = -3LL;
static volatile int64_t t37 = INT64_MAX;
volatile uint16_t x166 = 1484U;
int32_t x168 = 38034314;
int16_t x174 = 1757;
uint64_t x177 = 1926280LLU;
volatile int32_t t42 = -121700737;
int32_t x186 = -1;
volatile uint8_t x187 = 68U;
int64_t x191 = INT64_MIN;
uint64_t x203 = UINT64_MAX;
static volatile int16_t x207 = -1;
int8_t x214 = -22;
int32_t t50 = 1;
volatile int32_t x226 = INT32_MAX;
int16_t x229 = -1566;
uint64_t x231 = UINT64_MAX;
static uint64_t x232 = 67346187175028079LLU;
int32_t x242 = INT32_MIN;
int32_t t58 = -7898035;
uint64_t x255 = 10790LLU;
int8_t x257 = INT8_MAX;
int8_t x258 = INT8_MIN;
int32_t t61 = INT32_MIN;
static uint16_t x266 = UINT16_MAX;
int64_t x279 = 206556419LL;
uint64_t x289 = 3841LLU;
uint16_t x290 = 11510U;
uint8_t x300 = 42U;
int16_t x313 = -1;
int32_t x326 = -1;
int8_t x327 = -1;
uint32_t x329 = 16U;
volatile uint32_t t76 = 820768490U;
int16_t x346 = INT16_MIN;
int32_t x348 = -1;
static int8_t x349 = INT8_MIN;
static uint64_t x351 = UINT64_MAX;
uint64_t x352 = 183799707924525766LLU;
volatile int64_t x354 = INT64_MIN;
volatile int32_t t82 = -194;
uint8_t x358 = 31U;
int32_t t84 = 1045749459;
volatile int8_t x365 = INT8_MAX;
uint32_t x370 = 1056243190U;
static int8_t x382 = INT8_MIN;
int32_t x383 = -1;
int32_t x386 = -29257;
int16_t x399 = -1;
volatile int32_t x400 = INT32_MAX;
static int32_t t95 = -319289;
int64_t x411 = INT64_MAX;
volatile int64_t x418 = INT64_MIN;
int32_t t98 = -5;
static int8_t x428 = -1;
volatile uint32_t t101 = 50315U;
volatile int32_t x439 = -38;
int16_t x446 = INT16_MIN;
volatile int32_t t104 = -18184514;
int64_t x449 = INT64_MIN;
int8_t x450 = INT8_MIN;
volatile uint8_t x454 = 1U;
static int32_t x459 = INT32_MAX;
static int64_t x460 = -1LL;
int16_t x462 = INT16_MIN;
volatile int32_t t109 = -48;
int32_t x473 = 107;
static uint8_t x477 = 6U;
static volatile int32_t x478 = INT32_MIN;
int16_t x490 = INT16_MIN;
volatile int32_t t116 = -110384;
int64_t x500 = INT64_MIN;
int64_t x512 = INT64_MIN;
int32_t x513 = -1;
static uint16_t x515 = 91U;
uint64_t x517 = 3604315044238004LLU;
static int16_t x528 = INT16_MIN;
volatile int32_t t123 = 105393;
int16_t x530 = INT16_MAX;
static int64_t x533 = -1LL;
static volatile int32_t x542 = -1;
volatile int64_t x544 = -477486LL;
int16_t x546 = -1256;
volatile int32_t t128 = 1054880086;
static int8_t x550 = INT8_MAX;
int16_t x552 = INT16_MAX;
volatile uint16_t x553 = 183U;
volatile uint64_t x567 = 14988505690938LLU;
uint8_t x572 = UINT8_MAX;
volatile int16_t x577 = INT16_MAX;
int16_t x580 = INT16_MAX;
uint32_t x582 = UINT32_MAX;
volatile int32_t t138 = -50659;
volatile uint16_t x600 = 443U;
uint8_t x607 = 56U;
int32_t x610 = 33651;
int16_t x618 = INT16_MIN;
int32_t t146 = -1859529;
uint8_t x621 = UINT8_MAX;
static uint8_t x623 = 1U;
uint8_t x625 = 6U;
int32_t x626 = INT32_MAX;
int32_t x629 = INT32_MIN;
int16_t x643 = -4000;
int32_t t153 = INT32_MIN;
static int16_t x650 = INT16_MIN;
int32_t t155 = 191839;
uint16_t x659 = UINT16_MAX;
uint64_t x661 = 186265197074646693LLU;
int32_t x671 = -105;
static int32_t x678 = 1020065904;
int64_t x680 = INT64_MIN;
static int8_t x690 = INT8_MIN;
int16_t x712 = -40;
volatile int8_t x715 = INT8_MIN;
uint32_t x717 = 46U;
int64_t x720 = INT64_MIN;
static volatile int8_t x731 = 62;
int64_t t174 = 221207956156256LL;
int8_t x740 = 9;
volatile int32_t t175 = INT32_MIN;
volatile int16_t x744 = -343;
int16_t x745 = INT16_MIN;
static int32_t x747 = INT32_MAX;
int64_t t178 = 62701LL;
uint32_t x753 = 1609U;
int64_t t180 = INT64_MIN;
int32_t x764 = 36291;
volatile uint16_t x776 = 111U;
int32_t t184 = 78946;
int8_t x777 = INT8_MIN;
volatile int8_t x779 = INT8_MAX;
int32_t t185 = 74;
static volatile int64_t x784 = -1LL;
int32_t t186 = 6;
volatile int32_t x785 = -1669375;
int32_t x789 = -1;
volatile int16_t x794 = INT16_MIN;
int32_t x795 = INT32_MAX;
int32_t x796 = 6190;
int64_t x797 = INT64_MIN;
static volatile int64_t t190 = INT64_MIN;
volatile int64_t x805 = INT64_MIN;
int8_t x808 = INT8_MIN;
int16_t x809 = 10;
int64_t x819 = INT64_MAX;
uint8_t x825 = 2U;
int8_t x833 = INT8_MIN;


void f0(void) {
    	static int32_t x3 = INT32_MIN;
	volatile int32_t t0 = INT32_MIN;

    t0 = (x1/((x2%x3)!=x4));

    if (t0 != INT32_MIN) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = UINT16_MAX;
	volatile int8_t x7 = -1;
	int64_t x8 = INT64_MIN;
	int32_t t1 = -33559;

    t1 = (x5/((x6%x7)!=x8));

    if (t1 != 65535) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x10 = INT16_MIN;
	uint16_t x11 = UINT16_MAX;
	volatile int32_t t2 = 124284351;

    t2 = (x9/((x10%x11)!=x12));

    if (t2 != -32768) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x15 = -1LL;
	int32_t x16 = -41618513;
	int32_t t3 = 94301;

    t3 = (x13/((x14%x15)!=x16));

    if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = 446431LLU;
	static int32_t x19 = -1;
	static int16_t x20 = INT16_MAX;
	volatile uint64_t t4 = 21867LLU;

    t4 = (x17/((x18%x19)!=x20));

    if (t4 != 446431LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint16_t x21 = UINT16_MAX;
	uint8_t x22 = 0U;
	int16_t x23 = INT16_MIN;
	static int8_t x24 = 41;
	volatile int32_t t5 = 1048225623;

    t5 = (x21/((x22%x23)!=x24));

    if (t5 != 65535) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x25 = 0U;
	volatile uint64_t x26 = 161LLU;
	int16_t x27 = INT16_MIN;
	int32_t x28 = INT32_MIN;

    t6 = (x25/((x26%x27)!=x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x29 = 35U;
	int64_t x30 = -1LL;
	int16_t x32 = 1;
	static volatile int32_t t7 = -66207885;

    t7 = (x29/((x30%x31)!=x32));

    if (t7 != 35) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = -227143;
	int8_t x34 = INT8_MIN;
	int64_t x35 = INT64_MIN;

    t8 = (x33/((x34%x35)!=x36));

    if (t8 != -227143) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x38 = UINT32_MAX;
	int8_t x39 = -1;
	int64_t x40 = -1LL;
	volatile uint32_t t9 = UINT32_MAX;

    t9 = (x37/((x38%x39)!=x40));

    if (t9 != UINT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint32_t x42 = 1837U;
	uint64_t x44 = UINT64_MAX;
	volatile uint32_t t10 = UINT32_MAX;

    t10 = (x41/((x42%x43)!=x44));

    if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x47 = 168379LL;
	volatile int16_t x48 = INT16_MIN;
	int32_t t11 = INT32_MIN;

    t11 = (x45/((x46%x47)!=x48));

    if (t11 != INT32_MIN) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int32_t x50 = -13137;
	uint16_t x52 = 18824U;

    t12 = (x49/((x50%x51)!=x52));

    if (t12 != -32768) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int64_t x53 = INT64_MIN;
	int32_t x55 = -1;
	static uint16_t x56 = UINT16_MAX;
	static volatile int64_t t13 = INT64_MIN;

    t13 = (x53/((x54%x55)!=x56));

    if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x58 = INT8_MAX;
	uint16_t x59 = 19802U;
	int8_t x60 = INT8_MIN;
	volatile int32_t t14 = -1;

    t14 = (x57/((x58%x59)!=x60));

    if (t14 != -128) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = INT32_MAX;
	volatile int16_t x62 = -1;
	uint16_t x63 = 6326U;

    t15 = (x61/((x62%x63)!=x64));

    if (t15 != INT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = INT8_MIN;
	static int8_t x66 = -1;
	volatile int8_t x67 = -1;
	volatile int32_t x68 = INT32_MAX;

    t16 = (x65/((x66%x67)!=x68));

    if (t16 != -128) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x69 = 434LLU;
	int32_t x70 = INT32_MAX;
	uint32_t x71 = 44611U;
	uint64_t t17 = 4294588386LLU;

    t17 = (x69/((x70%x71)!=x72));

    if (t17 != 434LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x78 = -49886;
	static int8_t x79 = -61;
	int64_t x80 = INT64_MIN;
	volatile int32_t t18 = -1;

    t18 = (x77/((x78%x79)!=x80));

    if (t18 != -32768) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint16_t x81 = 6U;
	uint8_t x82 = 26U;
	volatile int32_t x83 = -220792;
	static int8_t x84 = INT8_MIN;
	volatile int32_t t19 = -555186;

    t19 = (x81/((x82%x83)!=x84));

    if (t19 != 6) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x85 = INT8_MAX;
	static int64_t x86 = 18226613LL;
	int32_t x87 = INT32_MIN;
	volatile int32_t t20 = 1;

    t20 = (x85/((x86%x87)!=x88));

    if (t20 != 127) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x89 = INT8_MIN;
	uint32_t x91 = UINT32_MAX;
	uint64_t x92 = 16054LLU;
	int32_t t21 = -4184;

    t21 = (x89/((x90%x91)!=x92));

    if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x93 = -1LL;
	uint64_t x94 = 6933954420062LLU;
	static int64_t x95 = INT64_MIN;
	static int64_t x96 = INT64_MIN;
	int64_t t22 = 0LL;

    t22 = (x93/((x94%x95)!=x96));

    if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x97 = INT32_MIN;
	int64_t x98 = INT64_MIN;
	uint32_t x99 = 45165581U;
	volatile uint64_t x100 = 1673593LLU;

    t23 = (x97/((x98%x99)!=x100));

    if (t23 != INT32_MIN) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x105 = INT8_MAX;
	volatile int16_t x106 = INT16_MIN;
	static int32_t x108 = INT32_MAX;
	static int32_t t24 = 103699183;

    t24 = (x105/((x106%x107)!=x108));

    if (t24 != 127) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x109 = INT64_MIN;
	int32_t x111 = INT32_MIN;
	int64_t x112 = INT64_MIN;
	static volatile int64_t t25 = INT64_MIN;

    t25 = (x109/((x110%x111)!=x112));

    if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x114 = UINT8_MAX;
	int32_t x115 = 256;
	uint32_t x116 = UINT32_MAX;
	int32_t t26 = -1513033;

    t26 = (x113/((x114%x115)!=x116));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x117 = -1;
	uint32_t x118 = 5U;
	static int8_t x119 = INT8_MIN;
	int32_t x120 = INT32_MIN;
	int32_t t27 = -86782664;

    t27 = (x117/((x118%x119)!=x120));

    if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x121 = -224377493262166LL;
	int32_t x122 = -3;
	uint16_t x123 = 107U;
	int64_t x124 = -30405951145654790LL;
	int64_t t28 = -113890139336LL;

    t28 = (x121/((x122%x123)!=x124));

    if (t28 != -224377493262166LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x125 = 605212740134619970LL;
	uint16_t x127 = 2013U;
	int8_t x128 = INT8_MAX;
	volatile int64_t t29 = -2893LL;

    t29 = (x125/((x126%x127)!=x128));

    if (t29 != 605212740134619970LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint32_t x129 = 216285U;
	int64_t x130 = INT64_MIN;
	int16_t x131 = INT16_MAX;
	static uint32_t t30 = 209081U;

    t30 = (x129/((x130%x131)!=x132));

    if (t30 != 216285U) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x134 = INT32_MIN;
	uint32_t x136 = 1U;
	int64_t t31 = 2159926546112179LL;

    t31 = (x133/((x134%x135)!=x136));

    if (t31 != 5507970736976LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x138 = INT16_MIN;
	uint16_t x139 = UINT16_MAX;
	int16_t x140 = INT16_MAX;
	volatile int32_t t32 = 26;

    t32 = (x137/((x138%x139)!=x140));

    if (t32 != 127) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x143 = INT32_MAX;
	uint8_t x144 = 5U;
	volatile int32_t t33 = -980;

    t33 = (x141/((x142%x143)!=x144));

    if (t33 != 32767) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x149 = -238;
	int8_t x150 = -1;
	int64_t x151 = -30307416294LL;
	static int16_t x152 = INT16_MIN;
	int32_t t34 = -31744;

    t34 = (x149/((x150%x151)!=x152));

    if (t34 != -238) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x153 = 7U;
	uint64_t x154 = 3853831983560434444LLU;
	volatile int32_t t35 = 1;

    t35 = (x153/((x154%x155)!=x156));

    if (t35 != 7) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x157 = INT32_MAX;
	volatile int16_t x160 = -24;
	static volatile int32_t t36 = INT32_MAX;

    t36 = (x157/((x158%x159)!=x160));

    if (t36 != INT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x161 = INT64_MAX;
	int16_t x163 = -374;

    t37 = (x161/((x162%x163)!=x164));

    if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x165 = INT32_MIN;
	volatile uint32_t x167 = 63U;
	volatile int32_t t38 = INT32_MIN;

    t38 = (x165/((x166%x167)!=x168));

    if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x169 = 13U;
	static int16_t x170 = -21;
	static int32_t x171 = INT32_MIN;
	static int16_t x172 = -31;
	static volatile uint32_t t39 = 364U;

    t39 = (x169/((x170%x171)!=x172));

    if (t39 != 13U) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x173 = 10449;
	static int64_t x175 = INT64_MAX;
	int8_t x176 = INT8_MIN;
	volatile int32_t t40 = 0;

    t40 = (x173/((x174%x175)!=x176));

    if (t40 != 10449) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x178 = -1;
	int8_t x179 = INT8_MAX;
	int32_t x180 = INT32_MIN;
	volatile uint64_t t41 = 8055371500LLU;

    t41 = (x177/((x178%x179)!=x180));

    if (t41 != 1926280LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x181 = INT16_MIN;
	volatile uint16_t x182 = 203U;
	int16_t x183 = 2;
	int64_t x184 = -1LL;

    t42 = (x181/((x182%x183)!=x184));

    if (t42 != -32768) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x185 = 59573866862125504LLU;
	int16_t x188 = -6;
	volatile uint64_t t43 = 1LLU;

    t43 = (x185/((x186%x187)!=x188));

    if (t43 != 59573866862125504LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int64_t x189 = INT64_MIN;
	static uint8_t x190 = 7U;
	static int8_t x192 = 1;
	static volatile int64_t t44 = INT64_MIN;

    t44 = (x189/((x190%x191)!=x192));

    if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint64_t x193 = 18LLU;
	static int64_t x194 = INT64_MIN;
	int16_t x195 = -5;
	int8_t x196 = INT8_MIN;
	volatile uint64_t t45 = 9413LLU;

    t45 = (x193/((x194%x195)!=x196));

    if (t45 != 18LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x197 = 33U;
	int64_t x198 = 12080629214941953LL;
	static uint8_t x199 = 8U;
	volatile uint64_t x200 = 1551254871693LLU;
	uint32_t t46 = 45U;

    t46 = (x197/((x198%x199)!=x200));

    if (t46 != 33U) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint8_t x201 = 6U;
	volatile int16_t x202 = INT16_MIN;
	uint64_t x204 = 31241328060145LLU;
	volatile int32_t t47 = 66690;

    t47 = (x201/((x202%x203)!=x204));

    if (t47 != 6) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x205 = 183968041U;
	static uint8_t x206 = 3U;
	volatile int32_t x208 = 1;
	volatile uint32_t t48 = 14590859U;

    t48 = (x205/((x206%x207)!=x208));

    if (t48 != 183968041U) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x209 = 15031U;
	uint64_t x210 = UINT64_MAX;
	int64_t x211 = -494982655896036LL;
	int64_t x212 = -1081441111LL;
	int32_t t49 = 1701468;

    t49 = (x209/((x210%x211)!=x212));

    if (t49 != 15031) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x213 = -815;
	int32_t x215 = INT32_MIN;
	static int32_t x216 = INT32_MAX;

    t50 = (x213/((x214%x215)!=x216));

    if (t50 != -815) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x217 = INT16_MAX;
	static int16_t x218 = INT16_MAX;
	int32_t x219 = -1;
	int32_t x220 = -1;
	volatile int32_t t51 = 21805069;

    t51 = (x217/((x218%x219)!=x220));

    if (t51 != 32767) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x221 = 1805809997155LLU;
	int16_t x222 = INT16_MIN;
	int16_t x223 = 5;
	static uint32_t x224 = 15U;
	uint64_t t52 = 937614166LLU;

    t52 = (x221/((x222%x223)!=x224));

    if (t52 != 1805809997155LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint32_t x225 = 770U;
	uint16_t x227 = UINT16_MAX;
	int32_t x228 = INT32_MAX;
	volatile uint32_t t53 = 661U;

    t53 = (x225/((x226%x227)!=x228));

    if (t53 != 770U) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x230 = -1;
	volatile int32_t t54 = 21648;

    t54 = (x229/((x230%x231)!=x232));

    if (t54 != -1566) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x237 = INT8_MIN;
	int64_t x238 = -9713LL;
	uint64_t x239 = 391122771076934LLU;
	int32_t x240 = INT32_MIN;
	int32_t t55 = 126;

    t55 = (x237/((x238%x239)!=x240));

    if (t55 != -128) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint64_t x241 = 288LLU;
	static int16_t x243 = INT16_MIN;
	volatile int16_t x244 = 464;
	uint64_t t56 = 15089388LLU;

    t56 = (x241/((x242%x243)!=x244));

    if (t56 != 288LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x245 = -23;
	int16_t x246 = -1;
	int32_t x247 = -63;
	uint16_t x248 = 44U;
	volatile int32_t t57 = 12;

    t57 = (x245/((x246%x247)!=x248));

    if (t57 != -23) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x249 = INT16_MAX;
	volatile int64_t x250 = -196145375495LL;
	volatile int16_t x251 = INT16_MIN;
	int32_t x252 = INT32_MAX;

    t58 = (x249/((x250%x251)!=x252));

    if (t58 != 32767) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x253 = 6U;
	int8_t x254 = 1;
	int32_t x256 = -1;
	volatile int32_t t59 = -3195;

    t59 = (x253/((x254%x255)!=x256));

    if (t59 != 6) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x259 = 21;
	int16_t x260 = -1;
	static int32_t t60 = 15694;

    t60 = (x257/((x258%x259)!=x260));

    if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x261 = INT32_MIN;
	int8_t x262 = 0;
	static volatile uint16_t x263 = 51U;
	int64_t x264 = -1LL;

    t61 = (x261/((x262%x263)!=x264));

    if (t61 != INT32_MIN) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x265 = -7360;
	volatile int32_t x267 = -1;
	volatile uint16_t x268 = 15579U;
	int32_t t62 = 401350;

    t62 = (x265/((x266%x267)!=x268));

    if (t62 != -7360) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x269 = -1;
	int32_t x270 = INT32_MIN;
	static uint16_t x271 = UINT16_MAX;
	int64_t x272 = INT64_MIN;
	int32_t t63 = 1271244;

    t63 = (x269/((x270%x271)!=x272));

    if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x273 = UINT64_MAX;
	static int32_t x274 = -558948926;
	static int16_t x275 = -122;
	volatile uint64_t x276 = UINT64_MAX;
	static uint64_t t64 = UINT64_MAX;

    t64 = (x273/((x274%x275)!=x276));

    if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x277 = 188;
	int32_t x278 = -521;
	static volatile uint32_t x280 = UINT32_MAX;
	int32_t t65 = 56082495;

    t65 = (x277/((x278%x279)!=x280));

    if (t65 != 188) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x285 = INT16_MAX;
	uint32_t x286 = 1U;
	int8_t x287 = INT8_MIN;
	int8_t x288 = -11;
	int32_t t66 = -249;

    t66 = (x285/((x286%x287)!=x288));

    if (t66 != 32767) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x291 = 2;
	int16_t x292 = 6728;
	uint64_t t67 = 30LLU;

    t67 = (x289/((x290%x291)!=x292));

    if (t67 != 3841LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint32_t x293 = UINT32_MAX;
	static uint64_t x294 = 23161930081956829LLU;
	int32_t x295 = -1;
	uint8_t x296 = 15U;
	uint32_t t68 = UINT32_MAX;

    t68 = (x293/((x294%x295)!=x296));

    if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x297 = 2066938591217LL;
	int16_t x298 = INT16_MIN;
	volatile int16_t x299 = INT16_MAX;
	volatile int64_t t69 = -1171989311208LL;

    t69 = (x297/((x298%x299)!=x300));

    if (t69 != 2066938591217LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x301 = INT16_MIN;
	static uint64_t x302 = 3050523821050LLU;
	static volatile int8_t x303 = -9;
	static int16_t x304 = -12;
	int32_t t70 = 0;

    t70 = (x301/((x302%x303)!=x304));

    if (t70 != -32768) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x305 = 1U;
	uint64_t x306 = 838287022566731302LLU;
	int64_t x307 = 1LL;
	volatile int32_t x308 = 30467;
	volatile int32_t t71 = 338;

    t71 = (x305/((x306%x307)!=x308));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x314 = 6143945LL;
	volatile uint16_t x315 = 26669U;
	int32_t x316 = -1;
	int32_t t72 = 2;

    t72 = (x313/((x314%x315)!=x316));

    if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x317 = INT32_MIN;
	volatile uint16_t x318 = 950U;
	int16_t x319 = INT16_MAX;
	static uint32_t x320 = 15U;
	volatile int32_t t73 = INT32_MIN;

    t73 = (x317/((x318%x319)!=x320));

    if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint32_t x321 = UINT32_MAX;
	static int16_t x322 = INT16_MIN;
	uint8_t x323 = 7U;
	int8_t x324 = INT8_MIN;
	uint32_t t74 = UINT32_MAX;

    t74 = (x321/((x322%x323)!=x324));

    if (t74 != UINT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint16_t x325 = UINT16_MAX;
	int8_t x328 = INT8_MIN;
	volatile int32_t t75 = -24892018;

    t75 = (x325/((x326%x327)!=x328));

    if (t75 != 65535) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x330 = INT8_MAX;
	int8_t x331 = -1;
	int8_t x332 = INT8_MIN;

    t76 = (x329/((x330%x331)!=x332));

    if (t76 != 16U) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint32_t x333 = 185812U;
	static int32_t x334 = INT32_MIN;
	int32_t x335 = -218882645;
	uint16_t x336 = 1U;
	uint32_t t77 = 711541U;

    t77 = (x333/((x334%x335)!=x336));

    if (t77 != 185812U) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x337 = INT32_MIN;
	static uint64_t x338 = 9050638294110918179LLU;
	uint8_t x339 = UINT8_MAX;
	uint64_t x340 = 5351334LLU;
	int32_t t78 = INT32_MIN;

    t78 = (x337/((x338%x339)!=x340));

    if (t78 != INT32_MIN) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x341 = 2U;
	static int32_t x342 = INT32_MIN;
	int16_t x343 = -1;
	int64_t x344 = INT64_MIN;
	int32_t t79 = -1697;

    t79 = (x341/((x342%x343)!=x344));

    if (t79 != 2) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x345 = INT16_MIN;
	volatile int16_t x347 = INT16_MIN;
	int32_t t80 = -321;

    t80 = (x345/((x346%x347)!=x348));

    if (t80 != -32768) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x350 = INT64_MIN;
	volatile int32_t t81 = 115951474;

    t81 = (x349/((x350%x351)!=x352));

    if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x353 = 4864;
	volatile int8_t x355 = INT8_MIN;
	uint16_t x356 = UINT16_MAX;

    t82 = (x353/((x354%x355)!=x356));

    if (t82 != 4864) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint16_t x357 = 47U;
	int16_t x359 = -1;
	static int16_t x360 = 1;
	int32_t t83 = -1173;

    t83 = (x357/((x358%x359)!=x360));

    if (t83 != 47) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x361 = INT8_MIN;
	int8_t x362 = INT8_MIN;
	static int64_t x363 = -1LL;
	volatile uint64_t x364 = 5936LLU;

    t84 = (x361/((x362%x363)!=x364));

    if (t84 != -128) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x366 = 6381;
	int32_t x367 = 1123893;
	uint16_t x368 = 129U;
	int32_t t85 = -2200;

    t85 = (x365/((x366%x367)!=x368));

    if (t85 != 127) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x369 = 95625541770733026LL;
	uint64_t x371 = UINT64_MAX;
	int32_t x372 = INT32_MIN;
	static int64_t t86 = -10LL;

    t86 = (x369/((x370%x371)!=x372));

    if (t86 != 95625541770733026LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x373 = INT8_MAX;
	static uint16_t x374 = 902U;
	int8_t x375 = -1;
	int16_t x376 = INT16_MIN;
	static volatile int32_t t87 = 274;

    t87 = (x373/((x374%x375)!=x376));

    if (t87 != 127) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x377 = INT32_MIN;
	uint64_t x378 = 2225219613658260LLU;
	int8_t x379 = 6;
	uint64_t x380 = UINT64_MAX;
	volatile int32_t t88 = INT32_MIN;

    t88 = (x377/((x378%x379)!=x380));

    if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x381 = -1296289865198LL;
	int64_t x384 = 492721056160314LL;
	volatile int64_t t89 = -22872444010023LL;

    t89 = (x381/((x382%x383)!=x384));

    if (t89 != -1296289865198LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x385 = UINT8_MAX;
	int64_t x387 = INT64_MAX;
	uint8_t x388 = 17U;
	int32_t t90 = 107652;

    t90 = (x385/((x386%x387)!=x388));

    if (t90 != 255) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x389 = -1;
	uint64_t x390 = UINT64_MAX;
	int64_t x391 = INT64_MAX;
	uint64_t x392 = 7351LLU;
	int32_t t91 = 648551047;

    t91 = (x389/((x390%x391)!=x392));

    if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint32_t x393 = UINT32_MAX;
	static volatile int64_t x394 = INT64_MAX;
	int32_t x395 = INT32_MIN;
	volatile int16_t x396 = INT16_MIN;
	static uint32_t t92 = UINT32_MAX;

    t92 = (x393/((x394%x395)!=x396));

    if (t92 != UINT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x397 = -23;
	int8_t x398 = INT8_MIN;
	static volatile int32_t t93 = -2;

    t93 = (x397/((x398%x399)!=x400));

    if (t93 != -23) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint32_t x401 = 791U;
	volatile int64_t x402 = INT64_MAX;
	static int8_t x403 = 56;
	static volatile int64_t x404 = INT64_MIN;
	uint32_t t94 = 52963094U;

    t94 = (x401/((x402%x403)!=x404));

    if (t94 != 791U) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int32_t x405 = -1;
	uint64_t x406 = UINT64_MAX;
	static int16_t x407 = INT16_MIN;
	volatile int32_t x408 = -816;

    t95 = (x405/((x406%x407)!=x408));

    if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int64_t x409 = -1LL;
	volatile int64_t x410 = 40887568317LL;
	uint16_t x412 = 27963U;
	volatile int64_t t96 = -44LL;

    t96 = (x409/((x410%x411)!=x412));

    if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x413 = INT8_MIN;
	int32_t x414 = INT32_MAX;
	volatile int64_t x415 = -1LL;
	int64_t x416 = INT64_MIN;
	volatile int32_t t97 = 838478;

    t97 = (x413/((x414%x415)!=x416));

    if (t97 != -128) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x417 = -1;
	volatile int8_t x419 = INT8_MIN;
	uint64_t x420 = UINT64_MAX;

    t98 = (x417/((x418%x419)!=x420));

    if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x421 = UINT8_MAX;
	static int8_t x422 = 33;
	int8_t x423 = -1;
	uint32_t x424 = 93U;
	int32_t t99 = -1;

    t99 = (x421/((x422%x423)!=x424));

    if (t99 != 255) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x425 = -29161005661992LL;
	int8_t x426 = -14;
	static volatile int16_t x427 = 3251;
	volatile int64_t t100 = 1337281000514536302LL;

    t100 = (x425/((x426%x427)!=x428));

    if (t100 != -29161005661992LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x433 = 2133615013U;
	int64_t x434 = INT64_MIN;
	uint64_t x435 = UINT64_MAX;
	uint16_t x436 = 14U;

    t101 = (x433/((x434%x435)!=x436));

    if (t101 != 2133615013U) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x437 = 8127256U;
	static int16_t x438 = INT16_MIN;
	uint8_t x440 = 3U;
	uint32_t t102 = 18856643U;

    t102 = (x437/((x438%x439)!=x440));

    if (t102 != 8127256U) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x441 = -45;
	static uint16_t x442 = UINT16_MAX;
	uint8_t x443 = 24U;
	int16_t x444 = -6814;
	int32_t t103 = 1;

    t103 = (x441/((x442%x443)!=x444));

    if (t103 != -45) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x445 = -1;
	int64_t x447 = INT64_MIN;
	static int32_t x448 = -75488738;

    t104 = (x445/((x446%x447)!=x448));

    if (t104 != -1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x451 = UINT8_MAX;
	int16_t x452 = INT16_MAX;
	static volatile int64_t t105 = INT64_MIN;

    t105 = (x449/((x450%x451)!=x452));

    if (t105 != INT64_MIN) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x453 = INT16_MIN;
	int64_t x455 = INT64_MIN;
	int16_t x456 = 436;
	int32_t t106 = -354316903;

    t106 = (x453/((x454%x455)!=x456));

    if (t106 != -32768) { NG(); } else { ; }
	
}

void f107(void) {
    	static int8_t x457 = 1;
	int8_t x458 = INT8_MAX;
	int32_t t107 = -436081;

    t107 = (x457/((x458%x459)!=x460));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x461 = UINT64_MAX;
	int16_t x463 = -1;
	uint16_t x464 = UINT16_MAX;
	uint64_t t108 = UINT64_MAX;

    t108 = (x461/((x462%x463)!=x464));

    if (t108 != UINT64_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint16_t x465 = 53U;
	volatile int16_t x466 = -13;
	static volatile uint64_t x467 = 1938LLU;
	int64_t x468 = 14572402812159LL;

    t109 = (x465/((x466%x467)!=x468));

    if (t109 != 53) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint32_t x469 = UINT32_MAX;
	volatile int64_t x470 = -1LL;
	int16_t x471 = INT16_MIN;
	uint8_t x472 = 0U;
	volatile uint32_t t110 = UINT32_MAX;

    t110 = (x469/((x470%x471)!=x472));

    if (t110 != UINT32_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int8_t x474 = -1;
	int16_t x475 = 13;
	int64_t x476 = INT64_MAX;
	volatile int32_t t111 = 8017968;

    t111 = (x473/((x474%x475)!=x476));

    if (t111 != 107) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x479 = -1;
	int8_t x480 = INT8_MAX;
	int32_t t112 = 11;

    t112 = (x477/((x478%x479)!=x480));

    if (t112 != 6) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x481 = 28U;
	int8_t x482 = 30;
	int16_t x483 = -1;
	int8_t x484 = INT8_MIN;
	uint32_t t113 = 64786667U;

    t113 = (x481/((x482%x483)!=x484));

    if (t113 != 28U) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int32_t x485 = 9098;
	int16_t x486 = INT16_MIN;
	uint8_t x487 = UINT8_MAX;
	int64_t x488 = -374022514LL;
	int32_t t114 = -6;

    t114 = (x485/((x486%x487)!=x488));

    if (t114 != 9098) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int8_t x489 = INT8_MIN;
	int64_t x491 = INT64_MIN;
	int16_t x492 = 11;
	volatile int32_t t115 = -688730895;

    t115 = (x489/((x490%x491)!=x492));

    if (t115 != -128) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x493 = INT16_MIN;
	static uint16_t x494 = 15U;
	static int64_t x495 = INT64_MAX;
	uint16_t x496 = UINT16_MAX;

    t116 = (x493/((x494%x495)!=x496));

    if (t116 != -32768) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x497 = INT8_MAX;
	volatile int64_t x498 = 4849034986446LL;
	int16_t x499 = INT16_MAX;
	static int32_t t117 = 244;

    t117 = (x497/((x498%x499)!=x500));

    if (t117 != 127) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x505 = -96;
	int16_t x506 = INT16_MIN;
	int16_t x507 = -1;
	int8_t x508 = INT8_MAX;
	int32_t t118 = -2126;

    t118 = (x505/((x506%x507)!=x508));

    if (t118 != -96) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x509 = UINT64_MAX;
	volatile int16_t x510 = -11;
	volatile int16_t x511 = INT16_MIN;
	volatile uint64_t t119 = UINT64_MAX;

    t119 = (x509/((x510%x511)!=x512));

    if (t119 != UINT64_MAX) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x514 = INT32_MIN;
	static uint8_t x516 = 1U;
	int32_t t120 = 934973;

    t120 = (x513/((x514%x515)!=x516));

    if (t120 != -1) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint64_t x518 = UINT64_MAX;
	int64_t x519 = -1LL;
	int64_t x520 = 3478442LL;
	static uint64_t t121 = 780933845133LLU;

    t121 = (x517/((x518%x519)!=x520));

    if (t121 != 3604315044238004LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x521 = 115625;
	int16_t x522 = 53;
	int16_t x523 = -1;
	int64_t x524 = INT64_MIN;
	int32_t t122 = -691165;

    t122 = (x521/((x522%x523)!=x524));

    if (t122 != 115625) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x525 = INT8_MAX;
	int64_t x526 = 564LL;
	volatile uint32_t x527 = 18081U;

    t123 = (x525/((x526%x527)!=x528));

    if (t123 != 127) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x529 = 1035;
	static int32_t x531 = INT32_MAX;
	static int16_t x532 = INT16_MIN;
	int32_t t124 = -27658;

    t124 = (x529/((x530%x531)!=x532));

    if (t124 != 1035) { NG(); } else { ; }
	
}

void f125(void) {
    	static int64_t x534 = INT64_MAX;
	uint8_t x535 = 81U;
	static uint8_t x536 = 45U;
	int64_t t125 = 44551176LL;

    t125 = (x533/((x534%x535)!=x536));

    if (t125 != -1LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x537 = INT8_MIN;
	int16_t x538 = 14638;
	uint16_t x539 = UINT16_MAX;
	volatile uint32_t x540 = 23891U;
	volatile int32_t t126 = -222801562;

    t126 = (x537/((x538%x539)!=x540));

    if (t126 != -128) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x541 = UINT8_MAX;
	int32_t x543 = -1;
	volatile int32_t t127 = 827774397;

    t127 = (x541/((x542%x543)!=x544));

    if (t127 != 255) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x545 = 15U;
	int16_t x547 = INT16_MIN;
	int16_t x548 = 1;

    t128 = (x545/((x546%x547)!=x548));

    if (t128 != 15) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x549 = 1;
	static volatile uint16_t x551 = 989U;
	int32_t t129 = 619413869;

    t129 = (x549/((x550%x551)!=x552));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x554 = 3754;
	uint8_t x555 = 46U;
	static volatile uint32_t x556 = UINT32_MAX;
	int32_t t130 = 17246400;

    t130 = (x553/((x554%x555)!=x556));

    if (t130 != 183) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x557 = INT32_MAX;
	volatile uint64_t x558 = 3389600810677866520LLU;
	uint8_t x559 = 10U;
	int8_t x560 = INT8_MIN;
	volatile int32_t t131 = INT32_MAX;

    t131 = (x557/((x558%x559)!=x560));

    if (t131 != INT32_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x561 = 162;
	static int16_t x562 = -1;
	static volatile int16_t x563 = INT16_MAX;
	uint16_t x564 = UINT16_MAX;
	volatile int32_t t132 = 100864804;

    t132 = (x561/((x562%x563)!=x564));

    if (t132 != 162) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x565 = -1LL;
	int8_t x566 = -1;
	int32_t x568 = INT32_MIN;
	volatile int64_t t133 = -207LL;

    t133 = (x565/((x566%x567)!=x568));

    if (t133 != -1LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x569 = 323U;
	int8_t x570 = INT8_MIN;
	int64_t x571 = INT64_MIN;
	volatile int32_t t134 = -6;

    t134 = (x569/((x570%x571)!=x572));

    if (t134 != 323) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int32_t x573 = INT32_MIN;
	int64_t x574 = -1LL;
	uint64_t x575 = UINT64_MAX;
	int64_t x576 = -1LL;
	int32_t t135 = INT32_MIN;

    t135 = (x573/((x574%x575)!=x576));

    if (t135 != INT32_MIN) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint8_t x578 = 0U;
	int32_t x579 = 595;
	int32_t t136 = -3283750;

    t136 = (x577/((x578%x579)!=x580));

    if (t136 != 32767) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x581 = 4310898551286LLU;
	volatile uint32_t x583 = UINT32_MAX;
	int32_t x584 = -1;
	volatile uint64_t t137 = 64LLU;

    t137 = (x581/((x582%x583)!=x584));

    if (t137 != 4310898551286LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x585 = INT16_MAX;
	int16_t x586 = -1;
	int8_t x587 = -1;
	static int64_t x588 = INT64_MIN;

    t138 = (x585/((x586%x587)!=x588));

    if (t138 != 32767) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x589 = INT8_MIN;
	volatile uint64_t x590 = UINT64_MAX;
	uint8_t x591 = 81U;
	int16_t x592 = -64;
	static volatile int32_t t139 = -373792;

    t139 = (x589/((x590%x591)!=x592));

    if (t139 != -128) { NG(); } else { ; }
	
}

void f140(void) {
    	static int64_t x593 = INT64_MIN;
	volatile uint8_t x594 = UINT8_MAX;
	static int16_t x595 = -1;
	uint16_t x596 = 175U;
	int64_t t140 = INT64_MIN;

    t140 = (x593/((x594%x595)!=x596));

    if (t140 != INT64_MIN) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x597 = INT8_MIN;
	int16_t x598 = 0;
	int32_t x599 = -1;
	volatile int32_t t141 = 2803181;

    t141 = (x597/((x598%x599)!=x600));

    if (t141 != -128) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x601 = -1;
	volatile uint32_t x602 = 643U;
	int64_t x603 = INT64_MIN;
	int8_t x604 = -15;
	volatile int32_t t142 = 4556182;

    t142 = (x601/((x602%x603)!=x604));

    if (t142 != -1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x605 = UINT16_MAX;
	uint32_t x606 = 0U;
	int32_t x608 = INT32_MAX;
	static volatile int32_t t143 = 78459216;

    t143 = (x605/((x606%x607)!=x608));

    if (t143 != 65535) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x609 = INT8_MAX;
	int32_t x611 = -5569;
	volatile int16_t x612 = INT16_MIN;
	int32_t t144 = -10721370;

    t144 = (x609/((x610%x611)!=x612));

    if (t144 != 127) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x613 = UINT64_MAX;
	int8_t x614 = INT8_MIN;
	int64_t x615 = 8610820LL;
	int8_t x616 = 1;
	uint64_t t145 = UINT64_MAX;

    t145 = (x613/((x614%x615)!=x616));

    if (t145 != UINT64_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x617 = -1;
	uint8_t x619 = 31U;
	uint16_t x620 = 11579U;

    t146 = (x617/((x618%x619)!=x620));

    if (t146 != -1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x622 = 26U;
	int64_t x624 = 13075166LL;
	int32_t t147 = -38;

    t147 = (x621/((x622%x623)!=x624));

    if (t147 != 255) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x627 = -1;
	int16_t x628 = INT16_MIN;
	volatile int32_t t148 = -4666;

    t148 = (x625/((x626%x627)!=x628));

    if (t148 != 6) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x630 = 0LLU;
	int64_t x631 = -1LL;
	static uint16_t x632 = 2131U;
	static volatile int32_t t149 = INT32_MIN;

    t149 = (x629/((x630%x631)!=x632));

    if (t149 != INT32_MIN) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x633 = INT8_MIN;
	static volatile uint8_t x634 = UINT8_MAX;
	volatile int64_t x635 = INT64_MAX;
	uint8_t x636 = 7U;
	static volatile int32_t t150 = 7803;

    t150 = (x633/((x634%x635)!=x636));

    if (t150 != -128) { NG(); } else { ; }
	
}

void f151(void) {
    	static int16_t x637 = -1;
	uint64_t x638 = 1898153LLU;
	uint32_t x639 = 73U;
	static uint32_t x640 = 502022U;
	int32_t t151 = 51598;

    t151 = (x637/((x638%x639)!=x640));

    if (t151 != -1) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x641 = 252395747375916LL;
	static uint64_t x642 = 884927014646LLU;
	int32_t x644 = INT32_MIN;
	static volatile int64_t t152 = 3144953LL;

    t152 = (x641/((x642%x643)!=x644));

    if (t152 != 252395747375916LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x645 = INT32_MIN;
	static int8_t x646 = 1;
	int16_t x647 = INT16_MIN;
	volatile int16_t x648 = -1;

    t153 = (x645/((x646%x647)!=x648));

    if (t153 != INT32_MIN) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x649 = 1;
	uint64_t x651 = 124916194880LLU;
	static int64_t x652 = INT64_MIN;
	volatile int32_t t154 = -67053568;

    t154 = (x649/((x650%x651)!=x652));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x653 = 39U;
	int64_t x654 = 71258732LL;
	int32_t x655 = INT32_MAX;
	uint64_t x656 = UINT64_MAX;

    t155 = (x653/((x654%x655)!=x656));

    if (t155 != 39) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x657 = -1;
	int32_t x658 = INT32_MAX;
	uint64_t x660 = 24575997708134365LLU;
	volatile int32_t t156 = 672;

    t156 = (x657/((x658%x659)!=x660));

    if (t156 != -1) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x662 = INT64_MAX;
	int8_t x663 = INT8_MIN;
	int64_t x664 = INT64_MIN;
	volatile uint64_t t157 = 1028159LLU;

    t157 = (x661/((x662%x663)!=x664));

    if (t157 != 186265197074646693LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x665 = -1;
	static int16_t x666 = -1;
	int32_t x667 = -1;
	volatile uint8_t x668 = 19U;
	static volatile int32_t t158 = -367069745;

    t158 = (x665/((x666%x667)!=x668));

    if (t158 != -1) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x669 = 19;
	int16_t x670 = INT16_MIN;
	int8_t x672 = -1;
	volatile int32_t t159 = 30115192;

    t159 = (x669/((x670%x671)!=x672));

    if (t159 != 19) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x673 = INT64_MAX;
	int64_t x674 = -11832717LL;
	int64_t x675 = INT64_MIN;
	int64_t x676 = INT64_MIN;
	volatile int64_t t160 = INT64_MAX;

    t160 = (x673/((x674%x675)!=x676));

    if (t160 != INT64_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x677 = INT32_MIN;
	int64_t x679 = INT64_MAX;
	volatile int32_t t161 = INT32_MIN;

    t161 = (x677/((x678%x679)!=x680));

    if (t161 != INT32_MIN) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x681 = -1LL;
	static int16_t x682 = -1;
	uint64_t x683 = 23080LLU;
	volatile int32_t x684 = INT32_MIN;
	volatile int64_t t162 = 12024130LL;

    t162 = (x681/((x682%x683)!=x684));

    if (t162 != -1LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x685 = INT16_MAX;
	int64_t x686 = INT64_MAX;
	int64_t x687 = 1412363808893LL;
	int16_t x688 = 170;
	static int32_t t163 = -1022;

    t163 = (x685/((x686%x687)!=x688));

    if (t163 != 32767) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x689 = INT16_MAX;
	int8_t x691 = -1;
	static int8_t x692 = -1;
	int32_t t164 = -12874586;

    t164 = (x689/((x690%x691)!=x692));

    if (t164 != 32767) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x693 = -1;
	int32_t x694 = 100237;
	int64_t x695 = -14428LL;
	static int8_t x696 = INT8_MIN;
	volatile int32_t t165 = 233180954;

    t165 = (x693/((x694%x695)!=x696));

    if (t165 != -1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x697 = UINT8_MAX;
	static uint8_t x698 = UINT8_MAX;
	int16_t x699 = INT16_MAX;
	int16_t x700 = INT16_MIN;
	volatile int32_t t166 = -2548;

    t166 = (x697/((x698%x699)!=x700));

    if (t166 != 255) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x701 = 0;
	static int8_t x702 = -1;
	int8_t x703 = -1;
	uint64_t x704 = 11986346LLU;
	volatile int32_t t167 = -13236;

    t167 = (x701/((x702%x703)!=x704));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x705 = 143304410LLU;
	int8_t x706 = 56;
	volatile int16_t x707 = -1;
	uint32_t x708 = 15131293U;
	static uint64_t t168 = 38468387LLU;

    t168 = (x705/((x706%x707)!=x708));

    if (t168 != 143304410LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x709 = -1LL;
	int8_t x710 = INT8_MIN;
	static volatile int16_t x711 = 82;
	int64_t t169 = -171LL;

    t169 = (x709/((x710%x711)!=x712));

    if (t169 != -1LL) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int32_t x713 = INT32_MAX;
	int8_t x714 = INT8_MIN;
	static volatile uint32_t x716 = UINT32_MAX;
	int32_t t170 = INT32_MAX;

    t170 = (x713/((x714%x715)!=x716));

    if (t170 != INT32_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x718 = 1046064723619571LL;
	int32_t x719 = 1;
	uint32_t t171 = 45U;

    t171 = (x717/((x718%x719)!=x720));

    if (t171 != 46U) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x721 = 467;
	uint32_t x722 = UINT32_MAX;
	int64_t x723 = -61646980LL;
	int32_t x724 = INT32_MIN;
	int32_t t172 = 72859285;

    t172 = (x721/((x722%x723)!=x724));

    if (t172 != 467) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x725 = INT64_MIN;
	int32_t x726 = 1752536;
	volatile int8_t x727 = -1;
	uint32_t x728 = UINT32_MAX;
	volatile int64_t t173 = INT64_MIN;

    t173 = (x725/((x726%x727)!=x728));

    if (t173 != INT64_MIN) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x729 = -1LL;
	static volatile int64_t x730 = INT64_MIN;
	int64_t x732 = 5034LL;

    t174 = (x729/((x730%x731)!=x732));

    if (t174 != -1LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x737 = INT32_MIN;
	volatile int64_t x738 = 29406131446LL;
	volatile uint64_t x739 = UINT64_MAX;

    t175 = (x737/((x738%x739)!=x740));

    if (t175 != INT32_MIN) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x741 = -32;
	int8_t x742 = INT8_MAX;
	uint64_t x743 = 747355276LLU;
	int32_t t176 = -423379;

    t176 = (x741/((x742%x743)!=x744));

    if (t176 != -32) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int64_t x746 = 197LL;
	int64_t x748 = 83LL;
	volatile int32_t t177 = 38;

    t177 = (x745/((x746%x747)!=x748));

    if (t177 != -32768) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x749 = -980694358220LL;
	int32_t x750 = INT32_MIN;
	int64_t x751 = -1LL;
	int64_t x752 = -1LL;

    t178 = (x749/((x750%x751)!=x752));

    if (t178 != -980694358220LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x754 = INT16_MIN;
	int16_t x755 = INT16_MIN;
	int16_t x756 = INT16_MIN;
	volatile uint32_t t179 = 0U;

    t179 = (x753/((x754%x755)!=x756));

    if (t179 != 1609U) { NG(); } else { ; }
	
}

void f180(void) {
    	static int64_t x757 = INT64_MIN;
	uint64_t x758 = 452024565553LLU;
	uint8_t x759 = 1U;
	int16_t x760 = INT16_MIN;

    t180 = (x757/((x758%x759)!=x760));

    if (t180 != INT64_MIN) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint32_t x761 = 14386544U;
	uint64_t x762 = UINT64_MAX;
	int16_t x763 = INT16_MIN;
	uint32_t t181 = 39093186U;

    t181 = (x761/((x762%x763)!=x764));

    if (t181 != 14386544U) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint32_t x765 = UINT32_MAX;
	int32_t x766 = INT32_MAX;
	int32_t x767 = INT32_MIN;
	int64_t x768 = INT64_MIN;
	volatile uint32_t t182 = UINT32_MAX;

    t182 = (x765/((x766%x767)!=x768));

    if (t182 != UINT32_MAX) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x769 = INT32_MIN;
	volatile int16_t x770 = INT16_MIN;
	int8_t x771 = -1;
	volatile uint32_t x772 = UINT32_MAX;
	int32_t t183 = INT32_MIN;

    t183 = (x769/((x770%x771)!=x772));

    if (t183 != INT32_MIN) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint16_t x773 = UINT16_MAX;
	static int32_t x774 = INT32_MIN;
	volatile int64_t x775 = 9385552424469570LL;

    t184 = (x773/((x774%x775)!=x776));

    if (t184 != 65535) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x778 = UINT16_MAX;
	static uint64_t x780 = UINT64_MAX;

    t185 = (x777/((x778%x779)!=x780));

    if (t185 != -128) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x781 = INT16_MIN;
	int16_t x782 = INT16_MIN;
	static volatile int16_t x783 = -115;

    t186 = (x781/((x782%x783)!=x784));

    if (t186 != -32768) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x786 = UINT8_MAX;
	static int16_t x787 = INT16_MIN;
	volatile int32_t x788 = INT32_MAX;
	volatile int32_t t187 = -670037871;

    t187 = (x785/((x786%x787)!=x788));

    if (t187 != -1669375) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x790 = 27;
	uint64_t x791 = UINT64_MAX;
	uint32_t x792 = 1543065U;
	static volatile int32_t t188 = -3055960;

    t188 = (x789/((x790%x791)!=x792));

    if (t188 != -1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint64_t x793 = 28744266143424LLU;
	volatile uint64_t t189 = 8961482272598499LLU;

    t189 = (x793/((x794%x795)!=x796));

    if (t189 != 28744266143424LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t x798 = -1;
	int8_t x799 = INT8_MIN;
	volatile int16_t x800 = -516;

    t190 = (x797/((x798%x799)!=x800));

    if (t190 != INT64_MIN) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x801 = UINT8_MAX;
	int32_t x802 = -1;
	uint32_t x803 = UINT32_MAX;
	int64_t x804 = -1LL;
	int32_t t191 = 3206990;

    t191 = (x801/((x802%x803)!=x804));

    if (t191 != 255) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x806 = -1;
	int8_t x807 = INT8_MIN;
	volatile int64_t t192 = INT64_MIN;

    t192 = (x805/((x806%x807)!=x808));

    if (t192 != INT64_MIN) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int8_t x810 = 38;
	volatile uint8_t x811 = 4U;
	volatile int32_t x812 = -3891928;
	int32_t t193 = 29;

    t193 = (x809/((x810%x811)!=x812));

    if (t193 != 10) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x813 = 698018LLU;
	int8_t x814 = INT8_MIN;
	uint8_t x815 = 23U;
	int8_t x816 = INT8_MIN;
	volatile uint64_t t194 = 1717039LLU;

    t194 = (x813/((x814%x815)!=x816));

    if (t194 != 698018LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint16_t x817 = UINT16_MAX;
	int16_t x818 = INT16_MIN;
	int8_t x820 = 20;
	static volatile int32_t t195 = -364114;

    t195 = (x817/((x818%x819)!=x820));

    if (t195 != 65535) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x821 = UINT32_MAX;
	int8_t x822 = -1;
	int16_t x823 = -1;
	int32_t x824 = INT32_MAX;
	volatile uint32_t t196 = UINT32_MAX;

    t196 = (x821/((x822%x823)!=x824));

    if (t196 != UINT32_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x826 = 0U;
	int16_t x827 = INT16_MIN;
	int32_t x828 = -1844505;
	int32_t t197 = -5;

    t197 = (x825/((x826%x827)!=x828));

    if (t197 != 2) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x829 = -9;
	static int16_t x830 = INT16_MAX;
	uint16_t x831 = 32U;
	int64_t x832 = INT64_MAX;
	volatile int32_t t198 = -53;

    t198 = (x829/((x830%x831)!=x832));

    if (t198 != -9) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x834 = UINT8_MAX;
	volatile int64_t x835 = -57226080432LL;
	int16_t x836 = INT16_MAX;
	int32_t t199 = -3058;

    t199 = (x833/((x834%x835)!=x836));

    if (t199 != -128) { NG(); } else { ; }
	
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

