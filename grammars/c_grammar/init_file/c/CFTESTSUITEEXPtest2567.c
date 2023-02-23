
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

int8_t x1 = -1;
int8_t x2 = INT8_MAX;
static uint32_t x4 = 12U;
int64_t t1 = -112590LL;
uint8_t x10 = 19U;
int32_t x14 = -1;
int16_t x23 = -1;
int8_t x24 = 0;
volatile int16_t x34 = INT16_MAX;
uint8_t x35 = 20U;
uint64_t x37 = 387LLU;
int16_t x38 = 0;
static volatile int32_t x45 = -102152673;
uint16_t x46 = UINT16_MAX;
int16_t x62 = -2625;
volatile uint32_t x64 = 183524U;
uint64_t x65 = UINT64_MAX;
static int64_t x68 = -1LL;
uint64_t t17 = 139890916771099974LLU;
int16_t x84 = 2;
uint64_t x91 = 0LLU;
uint64_t t20 = 967120703LLU;
volatile uint16_t x94 = 9795U;
static volatile int32_t t21 = -10780;
int32_t x99 = INT32_MIN;
int64_t t22 = 0LL;
uint64_t t23 = 3LLU;
volatile uint16_t x108 = UINT16_MAX;
volatile int64_t t24 = 1719315389213576683LL;
volatile int32_t x113 = INT32_MIN;
volatile int8_t x115 = INT8_MIN;
int32_t x126 = INT32_MAX;
volatile int16_t x128 = -2;
int32_t t29 = -680141;
volatile int64_t x143 = INT64_MIN;
int64_t t31 = 1LL;
static int16_t x145 = INT16_MAX;
uint8_t x146 = 1U;
volatile uint16_t x159 = 807U;
static uint64_t x178 = 13873327486992649LLU;
int64_t x183 = 5919658LL;
static uint32_t x184 = 49024065U;
uint64_t x192 = 514260LLU;
static int8_t x207 = INT8_MAX;
uint32_t x217 = 17118U;
int16_t x218 = -1;
volatile uint32_t t49 = 22U;
volatile uint32_t t50 = 235U;
uint8_t x230 = UINT8_MAX;
int64_t x241 = -6555975474813911LL;
int16_t x242 = -1;
int32_t x250 = -1;
static int8_t x251 = 1;
uint64_t t57 = 3LLU;
volatile int32_t x265 = 3;
int8_t x267 = -1;
uint8_t x269 = UINT8_MAX;
int64_t x276 = -1LL;
int8_t x291 = 0;
static volatile int32_t x295 = INT32_MAX;
volatile int64_t t66 = -1319124052260352316LL;
int16_t x300 = -13;
static volatile int32_t x305 = INT32_MIN;
int32_t x307 = 10130;
uint64_t x310 = 570165652469LLU;
int8_t x311 = -1;
static uint16_t x314 = UINT16_MAX;
uint16_t x316 = UINT16_MAX;
int32_t x317 = INT32_MIN;
int32_t x322 = 1483;
static uint16_t x326 = 36U;
uint32_t x338 = 34U;
static int8_t x343 = INT8_MIN;
int32_t t78 = -375105;
volatile int32_t t80 = -1;
volatile int64_t t81 = -5093935391325LL;
int64_t x363 = INT64_MIN;
static volatile int64_t x367 = INT64_MIN;
static uint64_t x371 = 11637LLU;
int32_t x377 = -1;
int64_t x380 = -20465139701199207LL;
uint8_t x393 = 99U;
volatile uint8_t x394 = UINT8_MAX;
volatile int32_t t90 = -759;
uint32_t t91 = 366U;
int32_t x409 = INT32_MAX;
int8_t x424 = -1;
volatile uint64_t x425 = 172455LLU;
volatile int16_t x426 = 2;
int32_t x427 = 67;
static uint64_t t97 = 23203007017939316LLU;
int64_t x429 = 3297LL;
int32_t x432 = -1;
int64_t x434 = INT64_MAX;
uint64_t x436 = 4828249LLU;
int32_t x439 = 377921;
volatile int64_t t101 = 993418693085LL;
int8_t x449 = INT8_MIN;
int16_t x450 = 0;
uint8_t x452 = UINT8_MAX;
uint8_t x455 = 14U;
int16_t x456 = INT16_MIN;
uint8_t x463 = 1U;
volatile int64_t x464 = 43939497430448LL;
int16_t x465 = INT16_MIN;
static uint16_t x468 = 222U;
uint64_t t107 = 1587337838847826LLU;
int8_t x490 = INT8_MIN;
int64_t x499 = 22286180790288LL;
int32_t x519 = INT32_MIN;
volatile int32_t x525 = INT32_MIN;
uint16_t x530 = 1617U;
volatile uint64_t t116 = 185125LLU;
uint8_t x534 = UINT8_MAX;
volatile int8_t x536 = INT8_MIN;
volatile int8_t x552 = INT8_MIN;
int32_t t120 = 3;
int64_t t121 = 1733956952295900198LL;
static uint8_t x561 = 4U;
static int32_t x563 = INT32_MAX;
int32_t t123 = 0;
int64_t t125 = 2847117814554LL;
volatile int64_t x577 = -1LL;
uint8_t x579 = UINT8_MAX;
int8_t x581 = INT8_MAX;
volatile uint16_t x582 = 6772U;
int8_t x585 = 58;
static uint16_t x586 = 50U;
volatile uint64_t t128 = 78LLU;
static uint64_t x591 = UINT64_MAX;
uint8_t x612 = 2U;
uint8_t x613 = UINT8_MAX;
uint64_t t136 = 2284031200LLU;
uint64_t t139 = 7136163150618827LLU;
int64_t x637 = INT64_MIN;
static uint32_t x640 = UINT32_MAX;
volatile int32_t x642 = -1;
uint64_t x648 = UINT64_MAX;
int16_t x655 = INT16_MIN;
volatile uint64_t t146 = 4771741LLU;
uint64_t x663 = 1037269LLU;
int16_t x670 = INT16_MIN;
int64_t t149 = -14146LL;
int64_t x680 = -74082LL;
int32_t x684 = 2;
uint64_t x688 = 26047589995LLU;
int64_t x694 = 7421799436311583LL;
static volatile int64_t x697 = INT64_MIN;
int64_t t156 = -119364LL;
int64_t t157 = -3521LL;
volatile int16_t x716 = INT16_MIN;
uint64_t x731 = 1628481815LLU;
int8_t x739 = 5;
static volatile uint16_t x740 = 392U;
volatile int16_t x745 = -14509;
int64_t x750 = -1LL;
uint16_t x751 = 15U;
uint64_t x754 = UINT64_MAX;
int16_t x756 = 2024;
volatile uint32_t x767 = 111153U;
static int32_t x777 = -1;
volatile uint64_t t172 = 13946LLU;
uint8_t x782 = 1U;
int64_t x785 = -260385180139LL;
uint8_t x790 = 3U;
int16_t x801 = -1;
int16_t x804 = INT16_MAX;
int64_t t178 = 5LL;
int32_t x809 = -14586;
int16_t x811 = INT16_MIN;
static int64_t x817 = -108657577501846LL;
volatile int8_t x821 = INT8_MAX;
volatile int64_t x822 = INT64_MIN;
int64_t x829 = 4158LL;
uint8_t x831 = 2U;
uint64_t x839 = 64LLU;
uint32_t x840 = 7199436U;
static volatile uint64_t t186 = 2878547266300570LLU;
uint8_t x844 = 1U;
int32_t t187 = -3352332;
volatile uint16_t x846 = 14U;
uint32_t x851 = 2839U;
static uint32_t t189 = 510U;
int32_t x857 = 619362720;
static volatile uint32_t t191 = 38324U;
int8_t x861 = INT8_MAX;
volatile int8_t x865 = INT8_MIN;
static int64_t x868 = INT64_MIN;
int8_t x873 = INT8_MIN;
int64_t x875 = -1LL;
int16_t x876 = -51;
int16_t x885 = -297;
int64_t x887 = INT64_MIN;
static int64_t x889 = -324446499149810483LL;
int8_t x892 = INT8_MAX;
static int8_t x893 = INT8_MIN;
int8_t x894 = INT8_MAX;
static int16_t x900 = -1;


void f0(void) {
    	int64_t x3 = -998257562219782764LL;
	int64_t t0 = 20773851122893001LL;

    t0 = (x1%((x2^x3)-x4));

    if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int16_t x5 = INT16_MIN;
	int64_t x6 = INT64_MIN;
	int32_t x7 = INT32_MAX;
	uint8_t x8 = UINT8_MAX;

    t1 = (x5%((x6^x7)-x8));

    if (t1 != -32768LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = -23;
	int16_t x11 = INT16_MIN;
	volatile int8_t x12 = INT8_MIN;
	volatile int32_t t2 = -4947604;

    t2 = (x9%((x10^x11)-x12));

    if (t2 != -23) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile int16_t x13 = -305;
	int32_t x15 = -227927;
	static uint32_t x16 = 24U;
	volatile uint32_t t3 = 140U;

    t3 = (x13%((x14^x15)-x16));

    if (t3 != 153801U) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int32_t x17 = -1;
	static int32_t x18 = INT32_MIN;
	int32_t x19 = INT32_MIN;
	int8_t x20 = 1;
	volatile int32_t t4 = 1;

    t4 = (x17%((x18^x19)-x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = UINT8_MAX;
	uint16_t x22 = 4U;
	int32_t t5 = -1;

    t5 = (x21%((x22^x23)-x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x29 = UINT32_MAX;
	uint8_t x30 = UINT8_MAX;
	uint32_t x31 = 665545342U;
	uint16_t x32 = 5U;
	uint32_t t6 = 2690584U;

    t6 = (x29%((x30^x31)-x32));

    if (t6 != 301695255U) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x33 = -490186;
	uint64_t x36 = UINT64_MAX;
	volatile uint64_t t7 = 41667215LLU;

    t7 = (x33%((x34^x35)-x36));

    if (t7 != 6690LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int32_t x39 = -1;
	static uint8_t x40 = 1U;
	static volatile uint64_t t8 = 27016566668LLU;

    t8 = (x37%((x38^x39)-x40));

    if (t8 != 387LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x41 = UINT8_MAX;
	static int16_t x42 = -3300;
	uint8_t x43 = 5U;
	int8_t x44 = INT8_MIN;
	int32_t t9 = 16363809;

    t9 = (x41%((x42^x43)-x44));

    if (t9 != 255) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x47 = INT8_MIN;
	int64_t x48 = -1311LL;
	volatile int64_t t10 = -63480600906158LL;

    t10 = (x45%((x46^x47)-x48));

    if (t10 != -44559LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x49 = UINT32_MAX;
	int64_t x50 = INT64_MAX;
	int16_t x51 = -1;
	static int32_t x52 = INT32_MIN;
	int64_t t11 = -950430499LL;

    t11 = (x49%((x50^x51)-x52));

    if (t11 != 4294967295LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x53 = INT8_MIN;
	static uint32_t x54 = 598727U;
	int32_t x55 = -1;
	uint8_t x56 = 1U;
	volatile uint32_t t12 = 1990005255U;

    t12 = (x53%((x54^x55)-x56));

    if (t12 != 598601U) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x61 = INT16_MAX;
	int16_t x63 = INT16_MAX;
	uint32_t t13 = 2U;

    t13 = (x61%((x62^x63)-x64));

    if (t13 != 32767U) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x66 = UINT16_MAX;
	static int64_t x67 = INT64_MIN;
	static uint64_t t14 = 4065335809894706853LLU;

    t14 = (x65%((x66^x67)-x68));

    if (t14 != 9223372036854710271LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x69 = INT64_MIN;
	volatile int8_t x70 = INT8_MIN;
	uint32_t x71 = 1053U;
	int64_t x72 = INT64_MAX;
	int64_t t15 = 2287LL;

    t15 = (x69%((x70^x71)-x72));

    if (t15 != -4294966174LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x73 = UINT8_MAX;
	uint8_t x74 = UINT8_MAX;
	int64_t x75 = INT64_MAX;
	static volatile int32_t x76 = 35;
	int64_t t16 = -250885495250828593LL;

    t16 = (x73%((x74^x75)-x76));

    if (t16 != 255LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x77 = UINT64_MAX;
	int64_t x78 = -13LL;
	volatile uint32_t x79 = UINT32_MAX;
	static int64_t x80 = 23684507LL;

    t17 = (x77%((x78^x79)-x80));

    if (t17 != 4318651790LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x81 = -1;
	volatile int64_t x82 = -1LL;
	uint32_t x83 = UINT32_MAX;
	volatile int64_t t18 = -2LL;

    t18 = (x81%((x82^x83)-x84));

    if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x85 = INT16_MIN;
	int64_t x86 = -10163689845358232LL;
	int64_t x87 = INT64_MAX;
	uint8_t x88 = 12U;
	static volatile int64_t t19 = 355711LL;

    t19 = (x85%((x86^x87)-x88));

    if (t19 != -32768LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x89 = INT8_MAX;
	int16_t x90 = INT16_MAX;
	static volatile uint16_t x92 = 2049U;

    t20 = (x89%((x90^x91)-x92));

    if (t20 != 127LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int32_t x93 = INT32_MIN;
	volatile int32_t x95 = INT32_MIN;
	int8_t x96 = -1;

    t21 = (x93%((x94^x95)-x96));

    if (t21 != -9796) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x97 = 1;
	static volatile int64_t x98 = INT64_MIN;
	volatile int16_t x100 = INT16_MIN;

    t22 = (x97%((x98^x99)-x100));

    if (t22 != 1LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x101 = INT16_MAX;
	int8_t x102 = -2;
	uint64_t x103 = UINT64_MAX;
	int16_t x104 = INT16_MAX;

    t23 = (x101%((x102^x103)-x104));

    if (t23 != 32767LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x105 = -1;
	static int64_t x106 = INT64_MAX;
	uint8_t x107 = UINT8_MAX;

    t24 = (x105%((x106^x107)-x108));

    if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x109 = -1;
	uint8_t x110 = 74U;
	int8_t x111 = INT8_MIN;
	int32_t x112 = -1;
	volatile int32_t t25 = -615688377;

    t25 = (x109%((x110^x111)-x112));

    if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x114 = -36;
	int16_t x116 = INT16_MAX;
	volatile int32_t t26 = 263184;

    t26 = (x113%((x114^x115)-x116));

    if (t26 != -17298) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x117 = UINT16_MAX;
	int16_t x118 = INT16_MIN;
	int64_t x119 = INT64_MAX;
	int8_t x120 = INT8_MIN;
	static volatile int64_t t27 = -2895LL;

    t27 = (x117%((x118^x119)-x120));

    if (t27 != 65535LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x125 = INT16_MAX;
	static uint16_t x127 = 31U;
	volatile int32_t t28 = 1973;

    t28 = (x125%((x126^x127)-x128));

    if (t28 != 32767) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint16_t x133 = UINT16_MAX;
	volatile int32_t x134 = -2480;
	int8_t x135 = -1;
	static volatile int16_t x136 = INT16_MIN;

    t29 = (x133%((x134^x135)-x136));

    if (t29 != 30288) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x137 = -66141455986147207LL;
	uint16_t x138 = UINT16_MAX;
	volatile int64_t x139 = INT64_MIN;
	static int32_t x140 = 47;
	static int64_t t30 = 314644628878707265LL;

    t30 = (x137%((x138^x139)-x140));

    if (t30 != -66141455986147207LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x141 = INT64_MIN;
	static int64_t x142 = 8779789LL;
	uint16_t x144 = 8U;

    t31 = (x141%((x142^x143)-x144));

    if (t31 != -8779781LL) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x147 = 1;
	int64_t x148 = -1LL;
	volatile int64_t t32 = 255102848LL;

    t32 = (x145%((x146^x147)-x148));

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x149 = 1029330U;
	int64_t x150 = 1084005667907833007LL;
	volatile uint32_t x151 = 11U;
	static uint8_t x152 = UINT8_MAX;
	int64_t t33 = -533686328426284LL;

    t33 = (x149%((x150^x151)-x152));

    if (t33 != 1029330LL) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint8_t x153 = 1U;
	volatile int16_t x154 = -10199;
	static int64_t x155 = INT64_MIN;
	static int64_t x156 = -1LL;
	volatile int64_t t34 = -59656762LL;

    t34 = (x153%((x154^x155)-x156));

    if (t34 != 1LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x157 = INT32_MIN;
	uint16_t x158 = UINT16_MAX;
	volatile uint64_t x160 = UINT64_MAX;
	uint64_t t35 = 1LLU;

    t35 = (x157%((x158^x159)-x160));

    if (t35 != 39648LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile uint32_t x161 = 7955128U;
	uint16_t x162 = UINT16_MAX;
	int64_t x163 = 10858054577092800LL;
	uint16_t x164 = 1U;
	int64_t t36 = 1818610216LL;

    t36 = (x161%((x162^x163)-x164));

    if (t36 != 7955128LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x169 = -5;
	volatile uint8_t x170 = 2U;
	static int8_t x171 = -15;
	int32_t x172 = 399339;
	static volatile int32_t t37 = -52;

    t37 = (x169%((x170^x171)-x172));

    if (t37 != -5) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x173 = INT32_MIN;
	static int16_t x174 = INT16_MIN;
	uint8_t x175 = UINT8_MAX;
	int8_t x176 = 23;
	static int32_t t38 = -143268758;

    t38 = (x173%((x174^x175)-x176));

    if (t38 != -10040) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x177 = -1LL;
	volatile uint32_t x179 = 7U;
	int32_t x180 = -1;
	uint64_t t39 = 66327282486036682LLU;

    t39 = (x177%((x178^x179)-x180));

    if (t39 != 9091843496313120LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x181 = -1;
	static uint32_t x182 = UINT32_MAX;
	int64_t t40 = 242337582851215084LL;

    t40 = (x181%((x182^x183)-x184));

    if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x185 = INT16_MIN;
	int16_t x186 = INT16_MIN;
	int64_t x187 = -1LL;
	uint16_t x188 = 7051U;
	volatile int64_t t41 = -84666LL;

    t41 = (x185%((x186^x187)-x188));

    if (t41 != -7052LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x189 = INT64_MIN;
	int16_t x190 = INT16_MIN;
	int16_t x191 = INT16_MAX;
	volatile uint64_t t42 = 0LLU;

    t42 = (x189%((x190^x191)-x192));

    if (t42 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x193 = 26;
	uint64_t x194 = 2173202664998LLU;
	int16_t x195 = -1;
	volatile uint16_t x196 = UINT16_MAX;
	static uint64_t t43 = 22309787249LLU;

    t43 = (x193%((x194^x195)-x196));

    if (t43 != 26LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x197 = INT8_MAX;
	uint32_t x198 = 1447U;
	static int64_t x199 = INT64_MIN;
	uint64_t x200 = 830689LLU;
	volatile uint64_t t44 = 61727666619LLU;

    t44 = (x197%((x198^x199)-x200));

    if (t44 != 127LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint32_t x201 = 3U;
	static int8_t x202 = -2;
	int32_t x203 = -1;
	int8_t x204 = INT8_MIN;
	volatile uint32_t t45 = 5U;

    t45 = (x201%((x202^x203)-x204));

    if (t45 != 3U) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x205 = INT64_MAX;
	uint64_t x206 = 128697LLU;
	int64_t x208 = -1LL;
	uint64_t t46 = 309LLU;

    t46 = (x205%((x206^x207)-x208));

    if (t46 != 11315LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x209 = 0;
	uint64_t x210 = 119487480LLU;
	int8_t x211 = 0;
	uint64_t x212 = 10485LLU;
	volatile uint64_t t47 = 219LLU;

    t47 = (x209%((x210^x211)-x212));

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x213 = 1;
	int16_t x214 = INT16_MAX;
	int64_t x215 = 64480997LL;
	int16_t x216 = INT16_MIN;
	volatile int64_t t48 = 223599LL;

    t48 = (x213%((x214^x215)-x216));

    if (t48 != 1LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static int32_t x219 = INT32_MIN;
	uint32_t x220 = 1U;

    t49 = (x217%((x218^x219)-x220));

    if (t49 != 17118U) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x221 = INT8_MIN;
	static uint32_t x222 = 138576U;
	uint8_t x223 = 0U;
	uint8_t x224 = 118U;

    t50 = (x221%((x222^x223)-x224));

    if (t50 != 8U) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x229 = INT64_MIN;
	int16_t x231 = -1;
	volatile int16_t x232 = -1;
	volatile int64_t t51 = 1LL;

    t51 = (x229%((x230^x231)-x232));

    if (t51 != -128LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int16_t x233 = INT16_MIN;
	int64_t x234 = INT64_MIN;
	int32_t x235 = INT32_MIN;
	int32_t x236 = -511494;
	volatile int64_t t52 = -353899041LL;

    t52 = (x233%((x234^x235)-x236));

    if (t52 != -32768LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x237 = -507;
	static uint16_t x238 = 3U;
	volatile uint64_t x239 = 15112755LLU;
	volatile int32_t x240 = 530017651;
	uint64_t t53 = 54LLU;

    t53 = (x237%((x238^x239)-x240));

    if (t53 != 514904392LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x243 = INT8_MIN;
	int64_t x244 = -1LL;
	static int64_t t54 = -1LL;

    t54 = (x241%((x242^x243)-x244));

    if (t54 != -87LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x249 = INT16_MIN;
	int64_t x252 = INT64_MIN;
	static volatile int64_t t55 = 0LL;

    t55 = (x249%((x250^x251)-x252));

    if (t55 != -32768LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x253 = INT8_MIN;
	int16_t x254 = INT16_MIN;
	int8_t x255 = 61;
	int16_t x256 = INT16_MAX;
	volatile int32_t t56 = 1318;

    t56 = (x253%((x254^x255)-x256));

    if (t56 != -128) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x257 = 7572U;
	uint32_t x258 = UINT32_MAX;
	volatile uint8_t x259 = 23U;
	uint64_t x260 = 129783611095230340LLU;

    t57 = (x257%((x258^x259)-x260));

    if (t57 != 7572LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x261 = INT16_MAX;
	int16_t x262 = INT16_MIN;
	volatile int32_t x263 = INT32_MIN;
	int64_t x264 = -1LL;
	volatile int64_t t58 = -905598LL;

    t58 = (x261%((x262^x263)-x264));

    if (t58 != 32767LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x266 = INT32_MAX;
	static volatile int64_t x268 = INT64_MIN;
	static int64_t t59 = 44783951802426LL;

    t59 = (x265%((x266^x267)-x268));

    if (t59 != 3LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static int8_t x270 = -6;
	static volatile int16_t x271 = INT16_MAX;
	int16_t x272 = -1;
	volatile int32_t t60 = -3317996;

    t60 = (x269%((x270^x271)-x272));

    if (t60 != 255) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x273 = 4U;
	uint8_t x274 = UINT8_MAX;
	int16_t x275 = 2922;
	volatile int64_t t61 = 0LL;

    t61 = (x273%((x274^x275)-x276));

    if (t61 != 4LL) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x277 = -1;
	int32_t x278 = INT32_MAX;
	int64_t x279 = -39LL;
	int16_t x280 = INT16_MAX;
	volatile int64_t t62 = -51778LL;

    t62 = (x277%((x278^x279)-x280));

    if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x281 = 676032LLU;
	volatile int8_t x282 = INT8_MIN;
	int32_t x283 = INT32_MIN;
	int16_t x284 = 8155;
	volatile uint64_t t63 = 1181593536223139689LLU;

    t63 = (x281%((x282^x283)-x284));

    if (t63 != 676032LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x285 = INT64_MAX;
	static int32_t x286 = -385326014;
	uint8_t x287 = 0U;
	int16_t x288 = -1;
	volatile int64_t t64 = 54603312229873LL;

    t64 = (x285%((x286^x287)-x288));

    if (t64 != 180478LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x289 = INT8_MIN;
	uint16_t x290 = 23U;
	int16_t x292 = INT16_MIN;
	static int32_t t65 = 371397465;

    t65 = (x289%((x290^x291)-x292));

    if (t65 != -128) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x293 = INT64_MIN;
	static int64_t x294 = INT64_MIN;
	static uint32_t x296 = 10348853U;

    t66 = (x293%((x294^x295)-x296));

    if (t66 != -2137134794LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x297 = INT16_MAX;
	int8_t x298 = INT8_MIN;
	uint64_t x299 = 7606267840351425332LLU;
	volatile uint64_t t67 = 12LLU;

    t67 = (x297%((x298^x299)-x300));

    if (t67 != 32767LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x306 = INT32_MIN;
	static int8_t x308 = 2;
	volatile int32_t t68 = 14367102;

    t68 = (x305%((x306^x307)-x308));

    if (t68 != -10128) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint16_t x309 = UINT16_MAX;
	uint32_t x312 = UINT32_MAX;
	volatile uint64_t t69 = 419313LLU;

    t69 = (x309%((x310^x311)-x312));

    if (t69 != 65535LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x313 = INT16_MIN;
	static volatile uint8_t x315 = 16U;
	int32_t t70 = -588480758;

    t70 = (x313%((x314^x315)-x316));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x318 = -4;
	int8_t x319 = -1;
	static int64_t x320 = INT64_MAX;
	int64_t t71 = 8812LL;

    t71 = (x317%((x318^x319)-x320));

    if (t71 != -2147483648LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static int8_t x321 = INT8_MAX;
	int64_t x323 = INT64_MIN;
	int16_t x324 = -1;
	volatile int64_t t72 = -3117993256261780117LL;

    t72 = (x321%((x322^x323)-x324));

    if (t72 != 127LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x325 = INT64_MIN;
	static int64_t x327 = INT64_MAX;
	static uint16_t x328 = 1104U;
	volatile int64_t t73 = -8487143722LL;

    t73 = (x325%((x326^x327)-x328));

    if (t73 != -1141LL) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint8_t x329 = UINT8_MAX;
	int16_t x330 = -12;
	uint32_t x331 = 12986U;
	int32_t x332 = -84133875;
	uint32_t t74 = 3962U;

    t74 = (x329%((x330^x331)-x332));

    if (t74 != 255U) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x333 = 319;
	uint64_t x334 = UINT64_MAX;
	int16_t x335 = INT16_MAX;
	static uint64_t x336 = 487037303480239281LLU;
	volatile uint64_t t75 = 472695631745800655LLU;

    t75 = (x333%((x334^x335)-x336));

    if (t75 != 319LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int8_t x337 = -1;
	volatile int64_t x339 = INT64_MAX;
	int8_t x340 = -1;
	volatile int64_t t76 = -412LL;

    t76 = (x337%((x338^x339)-x340));

    if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x341 = INT64_MIN;
	volatile int32_t x342 = -1;
	static uint8_t x344 = 59U;
	volatile int64_t t77 = 31LL;

    t77 = (x341%((x342^x343)-x344));

    if (t77 != -60LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x345 = 11U;
	volatile uint16_t x346 = 2909U;
	int32_t x347 = -15;
	int8_t x348 = INT8_MIN;

    t78 = (x345%((x346^x347)-x348));

    if (t78 != 11) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile int32_t x349 = 239;
	uint32_t x350 = 11398546U;
	volatile int16_t x351 = INT16_MIN;
	int32_t x352 = 1;
	static volatile uint32_t t79 = 38U;

    t79 = (x349%((x350^x351)-x352));

    if (t79 != 239U) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x353 = INT16_MIN;
	uint8_t x354 = 28U;
	uint8_t x355 = 8U;
	static uint16_t x356 = 0U;

    t80 = (x353%((x354^x355)-x356));

    if (t80 != -8) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x357 = INT64_MIN;
	int16_t x358 = -1;
	static volatile uint16_t x359 = 646U;
	uint16_t x360 = UINT16_MAX;

    t81 = (x357%((x358^x359)-x360));

    if (t81 != -2708LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x361 = -10;
	uint16_t x362 = 1957U;
	int32_t x364 = -1;
	int64_t t82 = 1054185975237803LL;

    t82 = (x361%((x362^x363)-x364));

    if (t82 != -10LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x365 = INT64_MIN;
	volatile int16_t x366 = -1;
	uint32_t x368 = 134932U;
	int64_t t83 = -855731LL;

    t83 = (x365%((x366^x367)-x368));

    if (t83 != -134933LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x369 = 1886U;
	int16_t x370 = INT16_MIN;
	uint8_t x372 = 4U;
	static uint64_t t84 = 241844661334120761LLU;

    t84 = (x369%((x370^x371)-x372));

    if (t84 != 1886LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x373 = UINT8_MAX;
	uint64_t x374 = 672371683167673076LLU;
	static int8_t x375 = 13;
	static int8_t x376 = INT8_MIN;
	volatile uint64_t t85 = 456146LLU;

    t85 = (x373%((x374^x375)-x376));

    if (t85 != 255LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile uint32_t x378 = 58855U;
	uint64_t x379 = UINT64_MAX;
	uint64_t t86 = 94LLU;

    t86 = (x377%((x378^x379)-x380));

    if (t86 != 7653202982095364LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x381 = -3;
	static int32_t x382 = 4150783;
	static volatile int16_t x383 = INT16_MIN;
	static uint8_t x384 = UINT8_MAX;
	volatile int32_t t87 = -140967789;

    t87 = (x381%((x382^x383)-x384));

    if (t87 != -3) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x385 = INT64_MIN;
	static int32_t x386 = 0;
	int32_t x387 = INT32_MIN;
	int64_t x388 = INT64_MIN;
	volatile int64_t t88 = -2493317745885515LL;

    t88 = (x385%((x386^x387)-x388));

    if (t88 != -2147483648LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x389 = UINT16_MAX;
	int8_t x390 = INT8_MIN;
	uint8_t x391 = UINT8_MAX;
	int8_t x392 = 0;
	int32_t t89 = -59;

    t89 = (x389%((x390^x391)-x392));

    if (t89 != 3) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x395 = UINT8_MAX;
	static volatile uint16_t x396 = 301U;

    t90 = (x393%((x394^x395)-x396));

    if (t90 != 99) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x397 = 4454362U;
	int8_t x398 = 4;
	uint32_t x399 = 4U;
	volatile int32_t x400 = -1;

    t91 = (x397%((x398^x399)-x400));

    if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
    	static int16_t x405 = INT16_MIN;
	uint16_t x406 = UINT16_MAX;
	int64_t x407 = INT64_MIN;
	int8_t x408 = -2;
	volatile int64_t t92 = -29LL;

    t92 = (x405%((x406^x407)-x408));

    if (t92 != -32768LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x410 = INT8_MIN;
	uint64_t x411 = UINT64_MAX;
	static int64_t x412 = -183LL;
	volatile uint64_t t93 = 1LLU;

    t93 = (x409%((x410^x411)-x412));

    if (t93 != 187LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x413 = 1U;
	int32_t x414 = INT32_MAX;
	uint64_t x415 = UINT64_MAX;
	int64_t x416 = -1LL;
	volatile uint64_t t94 = 1295111006870831LLU;

    t94 = (x413%((x414^x415)-x416));

    if (t94 != 1LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x417 = -30;
	uint8_t x418 = 25U;
	volatile int16_t x419 = 850;
	uint8_t x420 = 105U;
	int32_t t95 = -3;

    t95 = (x417%((x418^x419)-x420));

    if (t95 != -30) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x421 = INT16_MAX;
	int32_t x422 = INT32_MIN;
	int64_t x423 = -100198795582908LL;
	int64_t t96 = 395995LL;

    t96 = (x421%((x422^x423)-x424));

    if (t96 != 32767LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x428 = INT16_MIN;

    t97 = (x425%((x426^x427)-x428));

    if (t97 != 8290LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x430 = UINT32_MAX;
	int32_t x431 = -13;
	static volatile int64_t t98 = -898642038LL;

    t98 = (x429%((x430^x431)-x432));

    if (t98 != 8LL) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x433 = INT64_MAX;
	int8_t x435 = INT8_MIN;
	static uint64_t t99 = 30770183606LLU;

    t99 = (x433%((x434^x435)-x436));

    if (t99 != 4828121LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x437 = INT16_MAX;
	static int16_t x438 = INT16_MIN;
	static volatile int16_t x440 = -1;
	volatile int32_t t100 = 125;

    t100 = (x437%((x438^x439)-x440));

    if (t100 != 32767) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x441 = 1U;
	int16_t x442 = -1;
	int32_t x443 = INT32_MAX;
	volatile int64_t x444 = INT64_MIN;

    t101 = (x441%((x442^x443)-x444));

    if (t101 != 1LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x445 = INT64_MAX;
	uint64_t x446 = UINT64_MAX;
	static int16_t x447 = INT16_MIN;
	int64_t x448 = -270704510089257780LL;
	volatile uint64_t t102 = 343LLU;

    t102 = (x445%((x446^x447)-x448));

    if (t102 != 19418693818897209LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint8_t x451 = 2U;
	static volatile int32_t t103 = 130391;

    t103 = (x449%((x450^x451)-x452));

    if (t103 != -128) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x453 = 2;
	int8_t x454 = 10;
	volatile int32_t t104 = 0;

    t104 = (x453%((x454^x455)-x456));

    if (t104 != 2) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x461 = 3000U;
	uint16_t x462 = UINT16_MAX;
	int64_t t105 = -3296586651565007LL;

    t105 = (x461%((x462^x463)-x464));

    if (t105 != 3000LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x466 = -14518;
	static int32_t x467 = INT32_MIN;
	int32_t t106 = 703;

    t106 = (x465%((x466^x467)-x468));

    if (t106 != -32768) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x469 = -2995068204810290LL;
	static volatile int16_t x470 = INT16_MIN;
	int32_t x471 = INT32_MIN;
	volatile uint64_t x472 = 11LLU;

    t107 = (x469%((x470^x471)-x472));

    if (t107 != 852191457LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static int8_t x473 = -29;
	static volatile int64_t x474 = INT64_MIN;
	int64_t x475 = INT64_MIN;
	uint32_t x476 = 3U;
	int64_t t108 = 3LL;

    t108 = (x473%((x474^x475)-x476));

    if (t108 != -2LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x481 = 546LL;
	int32_t x482 = INT32_MIN;
	volatile int32_t x483 = -1;
	int64_t x484 = -372LL;
	volatile int64_t t109 = 117522236LL;

    t109 = (x481%((x482^x483)-x484));

    if (t109 != 546LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x489 = INT64_MAX;
	volatile int64_t x491 = 6667452159253LL;
	volatile int32_t x492 = INT32_MIN;
	volatile int64_t t110 = -39859624589LL;

    t110 = (x489%((x490^x491)-x492));

    if (t110 != 3410289678299LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int8_t x497 = 1;
	volatile uint8_t x498 = UINT8_MAX;
	volatile uint8_t x500 = 13U;
	int64_t t111 = -3380848452LL;

    t111 = (x497%((x498^x499)-x500));

    if (t111 != 1LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x501 = INT8_MIN;
	uint64_t x502 = 1075109252811893LLU;
	volatile uint16_t x503 = UINT16_MAX;
	int8_t x504 = 20;
	uint64_t t112 = 3837LLU;

    t112 = (x501%((x502^x503)-x504));

    if (t112 != 19514635118780LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x517 = 12LL;
	int16_t x518 = INT16_MIN;
	volatile int64_t x520 = -1LL;
	volatile int64_t t113 = -1341114065767672103LL;

    t113 = (x517%((x518^x519)-x520));

    if (t113 != 12LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint32_t x521 = UINT32_MAX;
	uint64_t x522 = UINT64_MAX;
	int64_t x523 = 14LL;
	volatile int8_t x524 = -1;
	volatile uint64_t t114 = 107LLU;

    t114 = (x521%((x522^x523)-x524));

    if (t114 != 4294967295LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x526 = 12373608;
	volatile int64_t x527 = INT64_MIN;
	volatile int64_t x528 = INT64_MIN;
	int64_t t115 = -33086773LL;

    t115 = (x525%((x526^x527)-x528));

    if (t115 != -6849464LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x529 = INT64_MAX;
	int16_t x531 = INT16_MIN;
	uint64_t x532 = 788398906437981495LLU;

    t116 = (x529%((x530^x531)-x532));

    if (t116 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x533 = INT32_MAX;
	uint16_t x535 = UINT16_MAX;
	int32_t t117 = 1067563480;

    t117 = (x533%((x534^x535)-x536));

    if (t117 != 8191) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x537 = 30U;
	volatile int32_t x538 = 72089637;
	uint16_t x539 = UINT16_MAX;
	uint8_t x540 = UINT8_MAX;
	int32_t t118 = -48790;

    t118 = (x537%((x538^x539)-x540));

    if (t118 != 30) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x545 = -14;
	uint16_t x546 = UINT16_MAX;
	volatile int8_t x547 = INT8_MIN;
	int32_t x548 = INT32_MIN;
	static int32_t t119 = -235;

    t119 = (x545%((x546^x547)-x548));

    if (t119 != -14) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x549 = INT16_MIN;
	uint16_t x550 = 19U;
	static int16_t x551 = INT16_MIN;

    t120 = (x549%((x550^x551)-x552));

    if (t120 != -147) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x553 = INT64_MAX;
	uint8_t x554 = 57U;
	static uint8_t x555 = 5U;
	int32_t x556 = -38446;

    t121 = (x553%((x554^x555)-x556));

    if (t121 != 27515LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile uint64_t x557 = UINT64_MAX;
	int16_t x558 = -3566;
	int64_t x559 = INT64_MIN;
	int64_t x560 = -1LL;
	uint64_t t122 = 4224556916446LLU;

    t122 = (x557%((x558^x559)-x560));

    if (t122 != 7129LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint16_t x562 = UINT16_MAX;
	int8_t x564 = -1;

    t123 = (x561%((x562^x563)-x564));

    if (t123 != 4) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x569 = 1U;
	volatile uint16_t x570 = UINT16_MAX;
	static uint32_t x571 = 11800U;
	static uint16_t x572 = 54U;
	uint32_t t124 = 6798245U;

    t124 = (x569%((x570^x571)-x572));

    if (t124 != 1U) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x573 = -1LL;
	static int64_t x574 = -1LL;
	int8_t x575 = INT8_MIN;
	int64_t x576 = -12762LL;

    t125 = (x573%((x574^x575)-x576));

    if (t125 != -1LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static int32_t x578 = INT32_MIN;
	int64_t x580 = INT64_MIN;
	int64_t t126 = -77146573895512LL;

    t126 = (x577%((x578^x579)-x580));

    if (t126 != -1LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x583 = INT8_MAX;
	int16_t x584 = 848;
	int32_t t127 = -39799848;

    t127 = (x581%((x582^x583)-x584));

    if (t127 != 127) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int16_t x587 = INT16_MAX;
	uint64_t x588 = 1703839405923759476LLU;

    t128 = (x585%((x586^x587)-x588));

    if (t128 != 58LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x589 = INT8_MIN;
	int32_t x590 = -1875616;
	int8_t x592 = -15;
	static volatile uint64_t t129 = 58131LLU;

    t129 = (x589%((x590^x591)-x592));

    if (t129 != 1773278LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x593 = 24U;
	uint32_t x594 = UINT32_MAX;
	int32_t x595 = -1;
	volatile int64_t x596 = 6938277010196LL;
	static int64_t t130 = 17400627242549LL;

    t130 = (x593%((x594^x595)-x596));

    if (t130 != 24LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x597 = INT16_MAX;
	int64_t x598 = INT64_MIN;
	uint64_t x599 = 5589050111577573LLU;
	volatile int8_t x600 = -1;
	uint64_t t131 = 54035055756263LLU;

    t131 = (x597%((x598^x599)-x600));

    if (t131 != 32767LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x601 = INT32_MIN;
	int8_t x602 = INT8_MIN;
	volatile int64_t x603 = 4784LL;
	static uint32_t x604 = 73779195U;
	volatile int64_t t132 = 415670LL;

    t132 = (x601%((x602^x603)-x604));

    if (t132 != -7747329LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static int32_t x605 = INT32_MIN;
	volatile int64_t x606 = -318259697LL;
	int8_t x607 = 0;
	int64_t x608 = INT64_MIN;
	int64_t t133 = -373106969LL;

    t133 = (x605%((x606^x607)-x608));

    if (t133 != -2147483648LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x609 = INT16_MAX;
	volatile uint8_t x610 = UINT8_MAX;
	uint16_t x611 = 14175U;
	static int32_t t134 = 12775636;

    t134 = (x609%((x610^x611)-x612));

    if (t134 != 4291) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x614 = INT16_MIN;
	int8_t x615 = -1;
	static int64_t x616 = 120781927LL;
	volatile int64_t t135 = 178753LL;

    t135 = (x613%((x614^x615)-x616));

    if (t135 != 255LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x617 = -1;
	int8_t x618 = INT8_MIN;
	uint64_t x619 = 753668656982982664LLU;
	static int64_t x620 = -2443498249644LL;

    t136 = (x617%((x618^x619)-x620));

    if (t136 != 753666213484733131LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x621 = INT16_MAX;
	int32_t x622 = INT32_MAX;
	static uint64_t x623 = 19843846649588LLU;
	int8_t x624 = 22;
	volatile uint64_t t137 = 20396204667711665LLU;

    t137 = (x621%((x622^x623)-x624));

    if (t137 != 32767LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x625 = 26U;
	int64_t x626 = INT64_MIN;
	volatile uint16_t x627 = UINT16_MAX;
	volatile int8_t x628 = 1;
	int64_t t138 = 1047061312553866195LL;

    t138 = (x625%((x626^x627)-x628));

    if (t138 != 26LL) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x629 = INT8_MIN;
	volatile uint64_t x630 = 16122418LLU;
	uint32_t x631 = UINT32_MAX;
	int32_t x632 = 0;

    t139 = (x629%((x630^x631)-x632));

    if (t139 != 1125823437LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x633 = 351232387U;
	int32_t x634 = 781963;
	volatile uint8_t x635 = UINT8_MAX;
	uint16_t x636 = UINT16_MAX;
	uint32_t t140 = 1515215604U;

    t140 = (x633%((x634^x635)-x636));

    if (t140 != 193937U) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint64_t x638 = 2275982675LLU;
	int8_t x639 = -1;
	volatile uint64_t t141 = 228254LLU;

    t141 = (x637%((x638^x639)-x640));

    if (t141 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x641 = 0;
	volatile int64_t x643 = -372200903LL;
	volatile uint8_t x644 = 0U;
	int64_t t142 = 63LL;

    t142 = (x641%((x642^x643)-x644));

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x645 = INT16_MIN;
	static int8_t x646 = INT8_MIN;
	int16_t x647 = -1;
	uint64_t t143 = 155LLU;

    t143 = (x645%((x646^x647)-x648));

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x649 = 1941U;
	uint32_t x650 = UINT32_MAX;
	int32_t x651 = -1;
	static int64_t x652 = 888007407555LL;
	volatile int64_t t144 = 5047754562LL;

    t144 = (x649%((x650^x651)-x652));

    if (t144 != 1941LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x653 = 5U;
	uint64_t x654 = UINT64_MAX;
	int64_t x656 = INT64_MAX;
	volatile uint64_t t145 = 6050112LLU;

    t145 = (x653%((x654^x655)-x656));

    if (t145 != 5LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x657 = UINT32_MAX;
	int16_t x658 = 55;
	int32_t x659 = INT32_MAX;
	uint64_t x660 = 1280LLU;

    t146 = (x657%((x658^x659)-x660));

    if (t146 != 2671LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x661 = 459;
	int16_t x662 = INT16_MAX;
	volatile int8_t x664 = INT8_MIN;
	uint64_t t147 = 125500LLU;

    t147 = (x661%((x662^x663)-x664));

    if (t147 != 459LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x665 = INT64_MIN;
	uint16_t x666 = 87U;
	volatile uint32_t x667 = 14U;
	uint8_t x668 = 0U;
	int64_t t148 = -142929812012062513LL;

    t148 = (x665%((x666^x667)-x668));

    if (t148 != -78LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x669 = INT64_MAX;
	int32_t x671 = -6422;
	static int64_t x672 = INT64_MAX;

    t149 = (x669%((x670^x671)-x672));

    if (t149 != 26346LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint16_t x673 = UINT16_MAX;
	uint16_t x674 = 942U;
	int16_t x675 = INT16_MIN;
	uint16_t x676 = 20605U;
	volatile int32_t t150 = 9;

    t150 = (x673%((x674^x675)-x676));

    if (t150 != 13104) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int32_t x677 = INT32_MIN;
	int16_t x678 = INT16_MAX;
	int32_t x679 = -68784086;
	int64_t t151 = -550124978681940609LL;

    t151 = (x677%((x678^x679)-x680));

    if (t151 != -16709033LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x681 = 203;
	int32_t x682 = INT32_MIN;
	int32_t x683 = INT32_MIN;
	volatile int32_t t152 = 60;

    t152 = (x681%((x682^x683)-x684));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x685 = 3;
	static volatile int32_t x686 = -1418;
	uint8_t x687 = 13U;
	static volatile uint64_t t153 = 87173046154506LLU;

    t153 = (x685%((x686^x687)-x688));

    if (t153 != 3LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x689 = UINT8_MAX;
	volatile int8_t x690 = INT8_MAX;
	int32_t x691 = INT32_MAX;
	uint32_t x692 = UINT32_MAX;
	uint32_t t154 = 7846U;

    t154 = (x689%((x690^x691)-x692));

    if (t154 != 255U) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int64_t x693 = INT64_MIN;
	static int16_t x695 = INT16_MIN;
	volatile int8_t x696 = INT8_MIN;
	static volatile int64_t t155 = -15270092437776LL;

    t155 = (x693%((x694^x695)-x696));

    if (t155 != -5497136973831014LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x698 = -27609747341LL;
	static int8_t x699 = INT8_MIN;
	uint16_t x700 = 93U;

    t156 = (x697%((x698^x699)-x700));

    if (t156 != -6791268358LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x705 = INT8_MIN;
	int64_t x706 = INT64_MIN;
	uint8_t x707 = 78U;
	volatile int8_t x708 = -13;

    t157 = (x705%((x706^x707)-x708));

    if (t157 != -128LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x709 = 5612483102LLU;
	volatile int8_t x710 = -1;
	int32_t x711 = -73;
	uint16_t x712 = UINT16_MAX;
	volatile uint64_t t158 = 2095730914838385LLU;

    t158 = (x709%((x710^x711)-x712));

    if (t158 != 5612483102LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static int32_t x713 = 254970616;
	uint8_t x714 = 1U;
	static int32_t x715 = INT32_MIN;
	static int32_t t159 = -38711;

    t159 = (x713%((x714^x715)-x716));

    if (t159 != 254970616) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x717 = INT64_MIN;
	volatile uint16_t x718 = 21229U;
	static int8_t x719 = -1;
	static uint16_t x720 = 2012U;
	volatile int64_t t160 = 6LL;

    t160 = (x717%((x718^x719)-x720));

    if (t160 != -7662LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint64_t x721 = 21605255027818052LLU;
	int64_t x722 = -46727497091518796LL;
	uint64_t x723 = 240164LLU;
	int32_t x724 = -1;
	uint64_t t161 = 0LLU;

    t161 = (x721%((x722^x723)-x724));

    if (t161 != 21605255027818052LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x729 = INT64_MAX;
	static int32_t x730 = INT32_MIN;
	uint8_t x732 = 26U;
	static uint64_t t162 = 3LLU;

    t162 = (x729%((x730^x731)-x732));

    if (t162 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x733 = -1;
	int16_t x734 = 14;
	volatile int16_t x735 = INT16_MAX;
	uint64_t x736 = UINT64_MAX;
	volatile uint64_t t163 = 43604952991439436LLU;

    t163 = (x733%((x734^x735)-x736));

    if (t163 != 25083LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x737 = INT32_MIN;
	int8_t x738 = INT8_MIN;
	volatile int32_t t164 = -648248494;

    t164 = (x737%((x738^x739)-x740));

    if (t164 != -83) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile uint8_t x746 = 15U;
	volatile int16_t x747 = -3;
	static int8_t x748 = INT8_MIN;
	volatile int32_t t165 = 123;

    t165 = (x745%((x746^x747)-x748));

    if (t165 != -31) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x749 = -1341576LL;
	int32_t x752 = INT32_MAX;
	volatile int64_t t166 = 256938LL;

    t166 = (x749%((x750^x751)-x752));

    if (t166 != -1341576LL) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint16_t x753 = 6U;
	static uint16_t x755 = 3303U;
	uint64_t t167 = 39451495451LLU;

    t167 = (x753%((x754^x755)-x756));

    if (t167 != 6LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x761 = INT16_MAX;
	int16_t x762 = 1;
	volatile int32_t x763 = INT32_MAX;
	uint32_t x764 = 1930108086U;
	uint32_t t168 = 485368U;

    t168 = (x761%((x762^x763)-x764));

    if (t168 != 32767U) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x765 = 8271904829764LL;
	volatile int64_t x766 = -1LL;
	volatile int64_t x768 = INT64_MIN;
	int64_t t169 = 2843130111981191LL;

    t169 = (x765%((x766^x767)-x768));

    if (t169 != 8271904829764LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x769 = 2;
	uint32_t x770 = 646477U;
	static int8_t x771 = -1;
	int8_t x772 = -1;
	volatile uint32_t t170 = 23U;

    t170 = (x769%((x770^x771)-x772));

    if (t170 != 2U) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x773 = -3;
	uint64_t x774 = 10120226799632LLU;
	volatile int32_t x775 = INT32_MIN;
	uint16_t x776 = 10542U;
	volatile uint64_t t171 = 692LLU;

    t171 = (x773%((x774^x775)-x776));

    if (t171 != 10119806593307LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint32_t x778 = 10636653U;
	volatile uint64_t x779 = 215742663353LLU;
	int16_t x780 = 1664;

    t172 = (x777%((x778^x779)-x780));

    if (t172 != 72324075139LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile uint16_t x781 = 3482U;
	uint32_t x783 = UINT32_MAX;
	int32_t x784 = INT32_MIN;
	uint32_t t173 = 394523595U;

    t173 = (x781%((x782^x783)-x784));

    if (t173 != 3482U) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int16_t x786 = INT16_MIN;
	int8_t x787 = INT8_MIN;
	uint64_t x788 = 7177554879736405416LLU;
	uint64_t t174 = 1985887487185002LLU;

    t174 = (x785%((x786^x787)-x788));

    if (t174 != 7177554619351192637LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x789 = INT64_MIN;
	int16_t x791 = INT16_MAX;
	static int8_t x792 = 20;
	int64_t t175 = -688899593LL;

    t175 = (x789%((x790^x791)-x792));

    if (t175 != -1944LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static int32_t x793 = INT32_MIN;
	uint64_t x794 = 436378643840472053LLU;
	volatile int64_t x795 = INT64_MAX;
	static volatile int32_t x796 = INT32_MIN;
	volatile uint64_t t176 = 765553180LLU;

    t176 = (x793%((x794^x795)-x796));

    if (t176 != 872757281238493164LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x797 = INT8_MAX;
	static uint64_t x798 = UINT64_MAX;
	uint8_t x799 = 28U;
	int16_t x800 = INT16_MIN;
	static uint64_t t177 = 778947834142282LLU;

    t177 = (x797%((x798^x799)-x800));

    if (t177 != 127LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x802 = 1LL;
	uint8_t x803 = 108U;

    t178 = (x801%((x802^x803)-x804));

    if (t178 != -1LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x810 = -1LL;
	uint32_t x812 = 113447U;
	volatile int64_t t179 = 188325442317LL;

    t179 = (x809%((x810^x811)-x812));

    if (t179 != -14586LL) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint8_t x813 = UINT8_MAX;
	volatile int8_t x814 = 44;
	static int32_t x815 = INT32_MIN;
	static volatile int64_t x816 = INT64_MIN;
	int64_t t180 = 1847LL;

    t180 = (x813%((x814^x815)-x816));

    if (t180 != 255LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x818 = UINT64_MAX;
	static int8_t x819 = 2;
	int64_t x820 = -2070942LL;
	uint64_t t181 = 540768354015LLU;

    t181 = (x817%((x818^x819)-x820));

    if (t181 != 387342LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x823 = UINT32_MAX;
	volatile int16_t x824 = INT16_MIN;
	volatile int64_t t182 = 23LL;

    t182 = (x821%((x822^x823)-x824));

    if (t182 != 127LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x825 = INT32_MAX;
	int8_t x826 = INT8_MIN;
	int16_t x827 = INT16_MAX;
	int32_t x828 = -21482206;
	int32_t t183 = 727843002;

    t183 = (x825%((x826^x827)-x828));

    if (t183 != 2527147) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x830 = 43U;
	static int16_t x832 = -1;
	static int64_t t184 = 3853477565584569LL;

    t184 = (x829%((x830^x831)-x832));

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x833 = -1;
	volatile uint8_t x834 = 5U;
	uint64_t x835 = 2101LLU;
	uint32_t x836 = 51861177U;
	static uint64_t t185 = 859346383171572LLU;

    t185 = (x833%((x834^x835)-x836));

    if (t185 != 51859080LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint8_t x837 = UINT8_MAX;
	static int32_t x838 = INT32_MIN;

    t186 = (x837%((x838^x839)-x840));

    if (t186 != 255LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x841 = INT8_MIN;
	int8_t x842 = INT8_MAX;
	int32_t x843 = -1;

    t187 = (x841%((x842^x843)-x844));

    if (t187 != -128) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x845 = INT8_MAX;
	uint64_t x847 = 18912572LLU;
	uint8_t x848 = UINT8_MAX;
	static volatile uint64_t t188 = 9547782LLU;

    t188 = (x845%((x846^x847)-x848));

    if (t188 != 127LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint16_t x849 = 37U;
	int16_t x850 = INT16_MIN;
	uint8_t x852 = UINT8_MAX;

    t189 = (x849%((x850^x851)-x852));

    if (t189 != 37U) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint32_t x853 = 5140U;
	int64_t x854 = INT64_MAX;
	int8_t x855 = INT8_MIN;
	static int64_t x856 = INT64_MIN;
	volatile int64_t t190 = 113662LL;

    t190 = (x853%((x854^x855)-x856));

    if (t190 != 60LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x858 = INT8_MAX;
	int8_t x859 = INT8_MIN;
	uint32_t x860 = 79U;

    t191 = (x857%((x858^x859)-x860));

    if (t191 != 619362720U) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x862 = -1;
	static uint64_t x863 = UINT64_MAX;
	uint8_t x864 = UINT8_MAX;
	uint64_t t192 = 386296LLU;

    t192 = (x861%((x862^x863)-x864));

    if (t192 != 127LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x866 = INT32_MAX;
	int64_t x867 = INT64_MIN;
	static volatile int64_t t193 = -8231104183335LL;

    t193 = (x865%((x866^x867)-x868));

    if (t193 != -128LL) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint64_t x869 = 19943201LLU;
	static int64_t x870 = INT64_MIN;
	int8_t x871 = INT8_MIN;
	int8_t x872 = -1;
	volatile uint64_t t194 = 1LLU;

    t194 = (x869%((x870^x871)-x872));

    if (t194 != 19943201LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x874 = 539151031LL;
	static int64_t t195 = -6492452064216503LL;

    t195 = (x873%((x874^x875)-x876));

    if (t195 != -128LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x886 = -3555908970LL;
	volatile uint64_t x888 = UINT64_MAX;
	uint64_t t196 = 95920137LLU;

    t196 = (x885%((x886^x887)-x888));

    if (t196 != 7111817641LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	static int32_t x890 = INT32_MIN;
	uint32_t x891 = 1414U;
	int64_t t197 = 16899046101585LL;

    t197 = (x889%((x890^x891)-x892));

    if (t197 != -1958890878LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x895 = INT8_MIN;
	uint16_t x896 = 6945U;
	int32_t t198 = 604624;

    t198 = (x893%((x894^x895)-x896));

    if (t198 != -128) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x897 = -1;
	volatile uint8_t x898 = 12U;
	uint64_t x899 = 3LLU;
	uint64_t t199 = 0LLU;

    t199 = (x897%((x898^x899)-x900));

    if (t199 != 15LLU) { NG(); } else { ; }
	
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

