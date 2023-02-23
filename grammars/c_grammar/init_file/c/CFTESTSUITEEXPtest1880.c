
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

static int32_t x29 = -1;
int32_t x30 = -1;
int16_t x50 = INT16_MAX;
uint8_t x51 = 30U;
volatile int64_t t5 = -41282011LL;
volatile int64_t t7 = INT64_MIN;
int16_t x64 = INT16_MIN;
volatile int32_t x66 = 75871;
int64_t x68 = -1LL;
int32_t t10 = 326231127;
static uint64_t x75 = 1184125243192LLU;
volatile int8_t x82 = INT8_MAX;
volatile int32_t t12 = 345;
int8_t x116 = INT8_MIN;
volatile int32_t t14 = INT32_MIN;
uint32_t x129 = 0U;
int64_t x131 = 105LL;
volatile int64_t t16 = INT64_MIN;
int16_t x162 = -1;
int32_t t18 = -262600;
static volatile uint8_t x175 = UINT8_MAX;
int32_t t21 = -695;
int32_t x200 = -963;
int16_t x236 = -1045;
int64_t x241 = INT64_MAX;
uint64_t x295 = UINT64_MAX;
volatile uint64_t t32 = 898690LLU;
static int16_t x327 = INT16_MIN;
int64_t x329 = INT64_MIN;
int32_t x345 = 10723;
uint16_t x351 = UINT16_MAX;
static int16_t x359 = 859;
volatile int32_t x360 = INT32_MIN;
volatile int16_t x365 = -1;
static volatile int32_t x367 = -104909;
static int16_t x372 = -1;
int64_t x376 = -1LL;
volatile int32_t x381 = INT32_MIN;
int16_t x382 = 0;
int8_t x413 = INT8_MAX;
volatile int32_t t47 = -359590;
uint8_t x423 = 126U;
volatile int64_t x446 = -6LL;
uint64_t x459 = UINT64_MAX;
static int32_t x460 = -3;
int16_t x463 = -5;
uint8_t x464 = 0U;
static int16_t x474 = INT16_MIN;
uint32_t x475 = 189U;
volatile int32_t x479 = INT32_MIN;
static uint32_t x513 = UINT32_MAX;
static volatile uint8_t x514 = 1U;
int32_t x520 = -1;
int32_t x534 = INT32_MIN;
volatile int8_t x557 = 50;
static int64_t x564 = -109LL;
volatile int16_t x584 = -1;
int32_t t67 = -2591721;
volatile int64_t x600 = -1LL;
volatile int8_t x609 = INT8_MAX;
int16_t x610 = 7;
int16_t x611 = -1;
int64_t x619 = INT64_MIN;
volatile int16_t x624 = INT16_MIN;
static int16_t x655 = INT16_MAX;
static volatile int32_t x678 = INT32_MIN;
int32_t t76 = -28728466;
static int32_t x736 = -1;
int64_t x746 = -3094192723181621630LL;
int16_t x752 = -7527;
static int16_t x755 = 1576;
static volatile uint32_t t81 = 994051U;
int64_t x761 = -1312LL;
static int64_t t83 = -183151262009517195LL;
int64_t x773 = 3939075LL;
uint16_t x779 = UINT16_MAX;
volatile int32_t t88 = 4;
int16_t x793 = INT16_MIN;
int16_t x795 = INT16_MAX;
volatile int32_t t89 = -48012674;
static int32_t x804 = INT32_MIN;
uint32_t x817 = UINT32_MAX;
int64_t x820 = INT64_MIN;
int64_t x822 = INT64_MIN;
int16_t x827 = INT16_MIN;
static int8_t x828 = -1;
int32_t t94 = INT32_MIN;
uint16_t x834 = 200U;
uint32_t x835 = 1231U;
volatile int32_t t95 = 16;
uint16_t x850 = UINT16_MAX;
int8_t x857 = 23;
int64_t x858 = -27771019373067106LL;
int8_t x876 = -1;
static int32_t t100 = -10789566;
int16_t x877 = INT16_MAX;
int16_t x880 = INT16_MIN;
static volatile uint16_t x881 = 29U;
int32_t x884 = -1;
int64_t x885 = -4LL;
volatile uint32_t t104 = 5999839U;
uint8_t x898 = 1U;
int32_t x907 = INT32_MAX;
static int64_t x920 = -353006LL;
int16_t x932 = -1;
volatile int32_t x938 = INT32_MIN;
volatile int8_t x940 = -1;
volatile uint16_t x942 = 32U;
int16_t x943 = INT16_MIN;
int64_t x954 = INT64_MIN;
uint32_t x969 = 993053908U;
static int16_t x990 = INT16_MAX;
uint16_t x995 = UINT16_MAX;
volatile int32_t x998 = INT32_MIN;
static int64_t t116 = INT64_MIN;
int32_t t117 = INT32_MIN;
static int32_t x1021 = 392758;
uint32_t x1022 = 16956U;
volatile int64_t t121 = INT64_MIN;
volatile uint64_t x1034 = UINT64_MAX;
volatile int8_t x1035 = -1;
int32_t x1036 = -1;
int32_t x1066 = -1029837;
int16_t x1076 = -1;
int64_t x1121 = -6705838103883LL;
uint16_t x1122 = 5U;
int64_t x1140 = -1LL;
int16_t x1145 = 0;
static uint8_t x1147 = 2U;
int16_t x1175 = -1;
volatile int64_t t135 = INT64_MIN;
static int16_t x1187 = INT16_MIN;
volatile uint8_t x1194 = UINT8_MAX;
static int64_t x1200 = -579357879108836LL;
static int64_t x1203 = -180533807717387478LL;
static volatile uint32_t x1257 = UINT32_MAX;
int16_t x1268 = INT16_MIN;
static int16_t x1272 = INT16_MIN;
int16_t x1274 = INT16_MIN;
int32_t x1276 = INT32_MIN;
int8_t x1297 = INT8_MIN;
uint16_t x1298 = 0U;
static int16_t x1304 = -7534;
volatile int32_t t152 = 151671093;
uint64_t x1319 = UINT64_MAX;
int8_t x1325 = INT8_MIN;
int64_t x1340 = -1063236634780914284LL;
int64_t x1370 = -1LL;
int64_t x1372 = INT64_MIN;
volatile int64_t t158 = INT64_MAX;
volatile uint16_t x1378 = 3U;
volatile int32_t t159 = INT32_MIN;
int16_t x1382 = 36;
int32_t x1396 = INT32_MIN;
int32_t t164 = -11011046;
int32_t x1416 = -7;
int32_t x1422 = INT32_MAX;
static int32_t x1424 = -1;
static int64_t x1425 = 2334326624902303078LL;
static int64_t t168 = 45LL;
int64_t x1440 = INT64_MIN;
static int32_t t169 = -3;
volatile int32_t t170 = -561367470;
volatile uint64_t x1474 = 23624LLU;
uint64_t x1475 = UINT64_MAX;
static int8_t x1488 = INT8_MIN;
int16_t x1492 = INT16_MIN;
int64_t t173 = 51243080791753920LL;
volatile int32_t x1519 = INT32_MAX;
volatile int64_t x1521 = -1LL;
int64_t t179 = -57587171718LL;
int64_t x1525 = INT64_MAX;
int32_t x1529 = INT32_MIN;
int32_t x1530 = 417152434;
int32_t t181 = INT32_MIN;
int64_t x1535 = -1169602LL;
int16_t x1536 = -1;
volatile int32_t t182 = INT32_MAX;
uint64_t x1541 = 58811071062142486LLU;
static uint64_t t183 = 169216LLU;
static int8_t x1549 = INT8_MIN;
int8_t x1552 = INT8_MIN;
volatile uint32_t x1554 = UINT32_MAX;
uint64_t x1561 = 60589290153648LLU;
int8_t x1564 = INT8_MIN;
uint64_t t186 = 168207358231674LLU;
volatile int16_t x1567 = INT16_MIN;
int32_t x1591 = -2;
static uint32_t x1610 = 256663686U;
volatile int32_t x1611 = 3328;
int32_t t191 = 18021;
int32_t x1640 = INT32_MIN;
int16_t x1684 = INT16_MIN;
int16_t x1689 = INT16_MAX;
int32_t x1710 = -76839;
int64_t x1716 = -1LL;


void f0(void) {
    	int64_t x9 = INT64_MIN;
	uint32_t x10 = 9U;
	uint16_t x11 = UINT16_MAX;
	int32_t x12 = -1;
	int64_t t0 = INT64_MIN;

    t0 = (x9/((x10<=x11)>x12));

    if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x21 = INT64_MIN;
	static int32_t x22 = INT32_MIN;
	uint8_t x23 = 1U;
	int32_t x24 = -1;
	int64_t t1 = INT64_MIN;

    t1 = (x21/((x22<=x23)>x24));

    if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x31 = 41LL;
	int64_t x32 = INT64_MIN;
	int32_t t2 = -15;

    t2 = (x29/((x30<=x31)>x32));

    if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x33 = 18151672LLU;
	int64_t x34 = INT64_MIN;
	uint8_t x35 = 51U;
	int32_t x36 = -1385;
	uint64_t t3 = 737747246LLU;

    t3 = (x33/((x34<=x35)>x36));

    if (t3 != 18151672LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x41 = INT8_MIN;
	static volatile int64_t x42 = INT64_MIN;
	static uint16_t x43 = 29U;
	int16_t x44 = -1;
	int32_t t4 = -5;

    t4 = (x41/((x42<=x43)>x44));

    if (t4 != -128) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x49 = -4322030444890LL;
	int16_t x52 = -13;

    t5 = (x49/((x50<=x51)>x52));

    if (t5 != -4322030444890LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x53 = UINT32_MAX;
	volatile int32_t x54 = INT32_MAX;
	int64_t x55 = -6086781018687695LL;
	int64_t x56 = -1LL;
	uint32_t t6 = UINT32_MAX;

    t6 = (x53/((x54<=x55)>x56));

    if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x57 = INT64_MIN;
	static int8_t x58 = INT8_MIN;
	int16_t x59 = INT16_MIN;
	volatile int16_t x60 = INT16_MIN;

    t7 = (x57/((x58<=x59)>x60));

    if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x61 = UINT16_MAX;
	volatile uint8_t x62 = 127U;
	uint32_t x63 = 0U;
	int32_t t8 = -507274389;

    t8 = (x61/((x62<=x63)>x64));

    if (t8 != 65535) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x65 = INT64_MAX;
	static volatile int8_t x67 = INT8_MAX;
	volatile int64_t t9 = INT64_MAX;

    t9 = (x65/((x66<=x67)>x68));

    if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x69 = -2;
	int32_t x70 = -208512;
	int32_t x71 = INT32_MAX;
	int32_t x72 = INT32_MIN;

    t10 = (x69/((x70<=x71)>x72));

    if (t10 != -2) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x73 = INT16_MAX;
	uint32_t x74 = 7U;
	int8_t x76 = -51;
	volatile int32_t t11 = -961;

    t11 = (x73/((x74<=x75)>x76));

    if (t11 != 32767) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x81 = 3664U;
	volatile int8_t x83 = INT8_MIN;
	int32_t x84 = INT32_MIN;

    t12 = (x81/((x82<=x83)>x84));

    if (t12 != 3664) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x101 = INT16_MIN;
	int8_t x102 = INT8_MIN;
	int32_t x103 = -100;
	static volatile int64_t x104 = INT64_MIN;
	static int32_t t13 = 30;

    t13 = (x101/((x102<=x103)>x104));

    if (t13 != -32768) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x113 = INT32_MIN;
	static int64_t x114 = -1LL;
	static int16_t x115 = INT16_MIN;

    t14 = (x113/((x114<=x115)>x116));

    if (t14 != INT32_MIN) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x130 = UINT16_MAX;
	int8_t x132 = INT8_MIN;
	static volatile uint32_t t15 = 0U;

    t15 = (x129/((x130<=x131)>x132));

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	static int64_t x141 = INT64_MIN;
	volatile int32_t x142 = 2;
	static uint8_t x143 = 1U;
	int16_t x144 = -3;

    t16 = (x141/((x142<=x143)>x144));

    if (t16 != INT64_MIN) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x157 = 5U;
	static int32_t x158 = INT32_MIN;
	int16_t x159 = 176;
	volatile int16_t x160 = INT16_MIN;
	int32_t t17 = 3177;

    t17 = (x157/((x158<=x159)>x160));

    if (t17 != 5) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x161 = -53;
	volatile int32_t x163 = -1;
	static int64_t x164 = -767787631LL;

    t18 = (x161/((x162<=x163)>x164));

    if (t18 != -53) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x173 = 21LLU;
	uint64_t x174 = UINT64_MAX;
	int32_t x176 = -26;
	static volatile uint64_t t19 = 82LLU;

    t19 = (x173/((x174<=x175)>x176));

    if (t19 != 21LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x177 = INT64_MAX;
	uint64_t x178 = 268077007988LLU;
	static int32_t x179 = -5470734;
	volatile int16_t x180 = -176;
	static volatile int64_t t20 = INT64_MAX;

    t20 = (x177/((x178<=x179)>x180));

    if (t20 != INT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x185 = INT8_MIN;
	uint32_t x186 = 3U;
	static int32_t x187 = INT32_MIN;
	int32_t x188 = INT32_MIN;

    t21 = (x185/((x186<=x187)>x188));

    if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int8_t x197 = INT8_MAX;
	static uint8_t x198 = 1U;
	int16_t x199 = -1;
	int32_t t22 = -475136;

    t22 = (x197/((x198<=x199)>x200));

    if (t22 != 127) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x201 = -1;
	static int16_t x202 = 13958;
	uint32_t x203 = 1114781316U;
	volatile int32_t x204 = INT32_MIN;
	int32_t t23 = 192650;

    t23 = (x201/((x202<=x203)>x204));

    if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x213 = -1;
	volatile uint16_t x214 = 1U;
	volatile int8_t x215 = -1;
	int8_t x216 = INT8_MIN;
	int32_t t24 = 785398;

    t24 = (x213/((x214<=x215)>x216));

    if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int64_t x225 = -1LL;
	static uint64_t x226 = UINT64_MAX;
	static uint8_t x227 = 67U;
	int32_t x228 = INT32_MIN;
	int64_t t25 = 13002LL;

    t25 = (x225/((x226<=x227)>x228));

    if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint64_t x229 = 9996181584500198LLU;
	uint32_t x230 = UINT32_MAX;
	uint16_t x231 = UINT16_MAX;
	volatile int8_t x232 = INT8_MIN;
	uint64_t t26 = 1155498712253LLU;

    t26 = (x229/((x230<=x231)>x232));

    if (t26 != 9996181584500198LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x233 = INT16_MIN;
	uint8_t x234 = 24U;
	int16_t x235 = INT16_MIN;
	static int32_t t27 = -212256;

    t27 = (x233/((x234<=x235)>x236));

    if (t27 != -32768) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x242 = UINT32_MAX;
	int32_t x243 = INT32_MAX;
	volatile int64_t x244 = -1LL;
	static int64_t t28 = INT64_MAX;

    t28 = (x241/((x242<=x243)>x244));

    if (t28 != INT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int64_t x253 = INT64_MIN;
	int8_t x254 = 0;
	int16_t x255 = -1857;
	int32_t x256 = -1;
	int64_t t29 = INT64_MIN;

    t29 = (x253/((x254<=x255)>x256));

    if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x273 = 22194U;
	int8_t x274 = -1;
	volatile int64_t x275 = 102846674287108751LL;
	volatile int32_t x276 = INT32_MIN;
	volatile uint32_t t30 = 1038652525U;

    t30 = (x273/((x274<=x275)>x276));

    if (t30 != 22194U) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x289 = UINT64_MAX;
	int32_t x290 = INT32_MAX;
	uint32_t x291 = UINT32_MAX;
	int16_t x292 = INT16_MIN;
	static volatile uint64_t t31 = UINT64_MAX;

    t31 = (x289/((x290<=x291)>x292));

    if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x293 = 3261150139611LLU;
	uint32_t x294 = 22399U;
	int64_t x296 = -7119546289955437LL;

    t32 = (x293/((x294<=x295)>x296));

    if (t32 != 3261150139611LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile int64_t x297 = INT64_MIN;
	int8_t x298 = 0;
	int16_t x299 = -1;
	static int16_t x300 = INT16_MIN;
	static int64_t t33 = INT64_MIN;

    t33 = (x297/((x298<=x299)>x300));

    if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x317 = -1;
	static int32_t x318 = -63020272;
	uint32_t x319 = 12U;
	int8_t x320 = INT8_MIN;
	int32_t t34 = 301438499;

    t34 = (x317/((x318<=x319)>x320));

    if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x325 = 0;
	volatile int32_t x326 = INT32_MIN;
	int16_t x328 = -435;
	volatile int32_t t35 = 0;

    t35 = (x325/((x326<=x327)>x328));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint32_t x330 = 419182683U;
	int64_t x331 = -1435LL;
	volatile int32_t x332 = -42956837;
	static volatile int64_t t36 = INT64_MIN;

    t36 = (x329/((x330<=x331)>x332));

    if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x346 = INT32_MIN;
	uint16_t x347 = UINT16_MAX;
	int64_t x348 = -1LL;
	volatile int32_t t37 = 107006;

    t37 = (x345/((x346<=x347)>x348));

    if (t37 != 10723) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x349 = INT8_MAX;
	static int64_t x350 = 5501LL;
	int16_t x352 = INT16_MIN;
	volatile int32_t t38 = 34;

    t38 = (x349/((x350<=x351)>x352));

    if (t38 != 127) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x353 = INT16_MIN;
	volatile int16_t x354 = -3643;
	int8_t x355 = 1;
	int32_t x356 = INT32_MIN;
	volatile int32_t t39 = -182875;

    t39 = (x353/((x354<=x355)>x356));

    if (t39 != -32768) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x357 = INT16_MIN;
	uint64_t x358 = UINT64_MAX;
	static int32_t t40 = 0;

    t40 = (x357/((x358<=x359)>x360));

    if (t40 != -32768) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x361 = 2798932325LLU;
	int16_t x362 = INT16_MIN;
	int64_t x363 = INT64_MAX;
	volatile uint32_t x364 = 0U;
	static volatile uint64_t t41 = 129LLU;

    t41 = (x361/((x362<=x363)>x364));

    if (t41 != 2798932325LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x366 = 1060LLU;
	volatile int32_t x368 = INT32_MIN;
	static int32_t t42 = 7936;

    t42 = (x365/((x366<=x367)>x368));

    if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x369 = INT64_MIN;
	int64_t x370 = INT64_MAX;
	uint16_t x371 = 10U;
	int64_t t43 = INT64_MIN;

    t43 = (x369/((x370<=x371)>x372));

    if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint8_t x373 = UINT8_MAX;
	static int8_t x374 = INT8_MIN;
	static uint8_t x375 = UINT8_MAX;
	static int32_t t44 = -30414657;

    t44 = (x373/((x374<=x375)>x376));

    if (t44 != 255) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int32_t x383 = INT32_MIN;
	static int32_t x384 = INT32_MIN;
	int32_t t45 = INT32_MIN;

    t45 = (x381/((x382<=x383)>x384));

    if (t45 != INT32_MIN) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint8_t x393 = 13U;
	uint32_t x394 = 7U;
	uint8_t x395 = 61U;
	int8_t x396 = -11;
	int32_t t46 = -29;

    t46 = (x393/((x394<=x395)>x396));

    if (t46 != 13) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x414 = -1;
	uint16_t x415 = 7335U;
	int64_t x416 = INT64_MIN;

    t47 = (x413/((x414<=x415)>x416));

    if (t47 != 127) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x417 = INT64_MAX;
	int64_t x418 = -1LL;
	int32_t x419 = INT32_MAX;
	int32_t x420 = INT32_MIN;
	volatile int64_t t48 = INT64_MAX;

    t48 = (x417/((x418<=x419)>x420));

    if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint8_t x421 = UINT8_MAX;
	int64_t x422 = INT64_MIN;
	volatile int8_t x424 = INT8_MIN;
	volatile int32_t t49 = -242;

    t49 = (x421/((x422<=x423)>x424));

    if (t49 != 255) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x445 = INT8_MAX;
	int8_t x447 = INT8_MIN;
	int64_t x448 = INT64_MIN;
	static volatile int32_t t50 = 654777;

    t50 = (x445/((x446<=x447)>x448));

    if (t50 != 127) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x457 = INT8_MIN;
	int8_t x458 = INT8_MAX;
	volatile int32_t t51 = -1652;

    t51 = (x457/((x458<=x459)>x460));

    if (t51 != -128) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x461 = 48;
	int8_t x462 = INT8_MIN;
	volatile int32_t t52 = -6446;

    t52 = (x461/((x462<=x463)>x464));

    if (t52 != 48) { NG(); } else { ; }
	
}

void f53(void) {
    	static int32_t x469 = 3;
	uint16_t x470 = 4U;
	uint8_t x471 = 10U;
	int64_t x472 = INT64_MIN;
	volatile int32_t t53 = -2049;

    t53 = (x469/((x470<=x471)>x472));

    if (t53 != 3) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x473 = INT8_MAX;
	int32_t x476 = INT32_MIN;
	volatile int32_t t54 = -79279442;

    t54 = (x473/((x474<=x475)>x476));

    if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x477 = -1;
	int8_t x478 = INT8_MIN;
	static int8_t x480 = -1;
	static int32_t t55 = -1;

    t55 = (x477/((x478<=x479)>x480));

    if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x481 = INT16_MIN;
	int16_t x482 = -1;
	static int64_t x483 = INT64_MAX;
	volatile int8_t x484 = INT8_MIN;
	static volatile int32_t t56 = -1;

    t56 = (x481/((x482<=x483)>x484));

    if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x493 = -1;
	uint32_t x494 = 5U;
	int64_t x495 = INT64_MAX;
	volatile int64_t x496 = -1229755209626205757LL;
	int32_t t57 = -1784;

    t57 = (x493/((x494<=x495)>x496));

    if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x515 = INT16_MAX;
	int8_t x516 = INT8_MIN;
	volatile uint32_t t58 = UINT32_MAX;

    t58 = (x513/((x514<=x515)>x516));

    if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x517 = 6203245;
	int32_t x518 = 2994737;
	volatile int16_t x519 = INT16_MAX;
	int32_t t59 = -228;

    t59 = (x517/((x518<=x519)>x520));

    if (t59 != 6203245) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x525 = -219320647528LL;
	static int64_t x526 = INT64_MAX;
	uint8_t x527 = 12U;
	int32_t x528 = INT32_MIN;
	volatile int64_t t60 = 2LL;

    t60 = (x525/((x526<=x527)>x528));

    if (t60 != -219320647528LL) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x529 = INT64_MAX;
	int64_t x530 = INT64_MIN;
	uint32_t x531 = 76161U;
	int32_t x532 = -89451;
	volatile int64_t t61 = INT64_MAX;

    t61 = (x529/((x530<=x531)>x532));

    if (t61 != INT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int16_t x533 = INT16_MIN;
	int8_t x535 = INT8_MIN;
	int16_t x536 = INT16_MIN;
	volatile int32_t t62 = 0;

    t62 = (x533/((x534<=x535)>x536));

    if (t62 != -32768) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x558 = -58;
	int64_t x559 = INT64_MIN;
	static int16_t x560 = -17;
	int32_t t63 = 3;

    t63 = (x557/((x558<=x559)>x560));

    if (t63 != 50) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint16_t x561 = UINT16_MAX;
	volatile int64_t x562 = -1LL;
	int32_t x563 = -1;
	static volatile int32_t t64 = 353926;

    t64 = (x561/((x562<=x563)>x564));

    if (t64 != 65535) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x565 = INT64_MIN;
	static uint8_t x566 = UINT8_MAX;
	volatile uint16_t x567 = UINT16_MAX;
	int32_t x568 = -1617;
	volatile int64_t t65 = INT64_MIN;

    t65 = (x565/((x566<=x567)>x568));

    if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x577 = -1;
	static int64_t x578 = 64446525393521LL;
	uint8_t x579 = 14U;
	volatile int64_t x580 = -1LL;
	volatile int32_t t66 = -433424;

    t66 = (x577/((x578<=x579)>x580));

    if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x581 = 915770615;
	uint32_t x582 = UINT32_MAX;
	int16_t x583 = 11;

    t67 = (x581/((x582<=x583)>x584));

    if (t67 != 915770615) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x597 = -1;
	static volatile uint16_t x598 = UINT16_MAX;
	uint32_t x599 = 1478739U;
	volatile int32_t t68 = 356;

    t68 = (x597/((x598<=x599)>x600));

    if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int32_t x612 = INT32_MIN;
	int32_t t69 = 22;

    t69 = (x609/((x610<=x611)>x612));

    if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x617 = UINT64_MAX;
	int32_t x618 = INT32_MAX;
	int16_t x620 = -1243;
	static volatile uint64_t t70 = UINT64_MAX;

    t70 = (x617/((x618<=x619)>x620));

    if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x621 = INT8_MIN;
	uint32_t x622 = 120U;
	uint16_t x623 = 1856U;
	int32_t t71 = -20764627;

    t71 = (x621/((x622<=x623)>x624));

    if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x625 = UINT16_MAX;
	int64_t x626 = 1189847LL;
	volatile int64_t x627 = INT64_MIN;
	int64_t x628 = INT64_MIN;
	volatile int32_t t72 = -30911148;

    t72 = (x625/((x626<=x627)>x628));

    if (t72 != 65535) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x641 = INT32_MIN;
	int16_t x642 = -35;
	int16_t x643 = INT16_MAX;
	int32_t x644 = INT32_MIN;
	int32_t t73 = INT32_MIN;

    t73 = (x641/((x642<=x643)>x644));

    if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint64_t x653 = 219LLU;
	uint64_t x654 = 287914407953094LLU;
	int64_t x656 = -1LL;
	uint64_t t74 = 24884813LLU;

    t74 = (x653/((x654<=x655)>x656));

    if (t74 != 219LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x661 = INT8_MIN;
	static volatile int8_t x662 = INT8_MIN;
	uint32_t x663 = 15721658U;
	int32_t x664 = -31622985;
	volatile int32_t t75 = 29307577;

    t75 = (x661/((x662<=x663)>x664));

    if (t75 != -128) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x677 = 16;
	int8_t x679 = 6;
	int8_t x680 = -24;

    t76 = (x677/((x678<=x679)>x680));

    if (t76 != 16) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x717 = 14016U;
	uint16_t x718 = 454U;
	static uint16_t x719 = 25602U;
	int8_t x720 = -1;
	static volatile uint32_t t77 = 489374919U;

    t77 = (x717/((x718<=x719)>x720));

    if (t77 != 14016U) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x733 = 8156005;
	int8_t x734 = INT8_MIN;
	uint64_t x735 = 1940768909LLU;
	static int32_t t78 = -3;

    t78 = (x733/((x734<=x735)>x736));

    if (t78 != 8156005) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x745 = 2504706469LLU;
	int64_t x747 = INT64_MIN;
	int16_t x748 = -1;
	uint64_t t79 = 340932604LLU;

    t79 = (x745/((x746<=x747)>x748));

    if (t79 != 2504706469LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x749 = 12636345LLU;
	int8_t x750 = INT8_MIN;
	uint32_t x751 = 16258U;
	uint64_t t80 = 645241865522590LLU;

    t80 = (x749/((x750<=x751)>x752));

    if (t80 != 12636345LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x753 = 153U;
	int8_t x754 = INT8_MIN;
	volatile int32_t x756 = -1;

    t81 = (x753/((x754<=x755)>x756));

    if (t81 != 153U) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x757 = INT16_MAX;
	static uint64_t x758 = 59575831992LLU;
	static int8_t x759 = INT8_MIN;
	static int32_t x760 = -1;
	volatile int32_t t82 = -874209910;

    t82 = (x757/((x758<=x759)>x760));

    if (t82 != 32767) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x762 = -81;
	int8_t x763 = -1;
	int32_t x764 = -1;

    t83 = (x761/((x762<=x763)>x764));

    if (t83 != -1312LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x765 = INT32_MIN;
	int64_t x766 = -24916LL;
	static uint32_t x767 = 272828U;
	static int32_t x768 = INT32_MIN;
	int32_t t84 = INT32_MIN;

    t84 = (x765/((x766<=x767)>x768));

    if (t84 != INT32_MIN) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x769 = UINT8_MAX;
	int8_t x770 = 0;
	int16_t x771 = -1;
	volatile int32_t x772 = INT32_MIN;
	static volatile int32_t t85 = -7100234;

    t85 = (x769/((x770<=x771)>x772));

    if (t85 != 255) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x774 = -17;
	int8_t x775 = INT8_MAX;
	int8_t x776 = INT8_MIN;
	int64_t t86 = 8110353002147048LL;

    t86 = (x773/((x774<=x775)>x776));

    if (t86 != 3939075LL) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x777 = INT8_MAX;
	static volatile int32_t x778 = 3319;
	volatile int8_t x780 = -1;
	static int32_t t87 = 19630;

    t87 = (x777/((x778<=x779)>x780));

    if (t87 != 127) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x785 = UINT8_MAX;
	int16_t x786 = INT16_MIN;
	uint32_t x787 = UINT32_MAX;
	int32_t x788 = INT32_MIN;

    t88 = (x785/((x786<=x787)>x788));

    if (t88 != 255) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x794 = 28060104811LLU;
	static int32_t x796 = INT32_MIN;

    t89 = (x793/((x794<=x795)>x796));

    if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x801 = -14563;
	uint32_t x802 = UINT32_MAX;
	static uint8_t x803 = UINT8_MAX;
	volatile int32_t t90 = -50355229;

    t90 = (x801/((x802<=x803)>x804));

    if (t90 != -14563) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x818 = 1U;
	uint64_t x819 = 56894LLU;
	volatile uint32_t t91 = UINT32_MAX;

    t91 = (x817/((x818<=x819)>x820));

    if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x821 = INT64_MAX;
	int16_t x823 = -1;
	int8_t x824 = -30;
	int64_t t92 = INT64_MAX;

    t92 = (x821/((x822<=x823)>x824));

    if (t92 != INT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x825 = -1;
	uint32_t x826 = 300980U;
	volatile int32_t t93 = 2336;

    t93 = (x825/((x826<=x827)>x828));

    if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int32_t x829 = INT32_MIN;
	int16_t x830 = INT16_MIN;
	static int8_t x831 = 1;
	volatile int8_t x832 = INT8_MIN;

    t94 = (x829/((x830<=x831)>x832));

    if (t94 != INT32_MIN) { NG(); } else { ; }
	
}

void f95(void) {
    	static int16_t x833 = -87;
	int64_t x836 = INT64_MIN;

    t95 = (x833/((x834<=x835)>x836));

    if (t95 != -87) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x845 = INT32_MIN;
	static uint16_t x846 = UINT16_MAX;
	static uint16_t x847 = UINT16_MAX;
	int32_t x848 = -1;
	volatile int32_t t96 = INT32_MIN;

    t96 = (x845/((x846<=x847)>x848));

    if (t96 != INT32_MIN) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x849 = INT32_MIN;
	volatile uint16_t x851 = UINT16_MAX;
	uint16_t x852 = 0U;
	volatile int32_t t97 = INT32_MIN;

    t97 = (x849/((x850<=x851)>x852));

    if (t97 != INT32_MIN) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x859 = -6;
	int64_t x860 = -1LL;
	volatile int32_t t98 = 1037;

    t98 = (x857/((x858<=x859)>x860));

    if (t98 != 23) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x865 = 779206618U;
	volatile uint64_t x866 = 7LLU;
	int16_t x867 = INT16_MIN;
	int64_t x868 = INT64_MIN;
	uint32_t t99 = 456U;

    t99 = (x865/((x866<=x867)>x868));

    if (t99 != 779206618U) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x873 = INT8_MIN;
	int64_t x874 = -1LL;
	int64_t x875 = 6910LL;

    t100 = (x873/((x874<=x875)>x876));

    if (t100 != -128) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint16_t x878 = 6U;
	int16_t x879 = 0;
	volatile int32_t t101 = -529739;

    t101 = (x877/((x878<=x879)>x880));

    if (t101 != 32767) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x882 = -1;
	volatile uint64_t x883 = 1LLU;
	volatile int32_t t102 = 37587746;

    t102 = (x881/((x882<=x883)>x884));

    if (t102 != 29) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x886 = -1795930LL;
	static volatile uint8_t x887 = 61U;
	int64_t x888 = INT64_MIN;
	volatile int64_t t103 = -1972239207LL;

    t103 = (x885/((x886<=x887)>x888));

    if (t103 != -4LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x893 = 14728777U;
	int32_t x894 = 36;
	int16_t x895 = INT16_MAX;
	volatile int16_t x896 = -15;

    t104 = (x893/((x894<=x895)>x896));

    if (t104 != 14728777U) { NG(); } else { ; }
	
}

void f105(void) {
    	static int32_t x897 = INT32_MAX;
	static int8_t x899 = -1;
	int8_t x900 = -1;
	volatile int32_t t105 = INT32_MAX;

    t105 = (x897/((x898<=x899)>x900));

    if (t105 != INT32_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x905 = 1LLU;
	int8_t x906 = INT8_MIN;
	int64_t x908 = -165511627590105LL;
	static volatile uint64_t t106 = 23119LLU;

    t106 = (x905/((x906<=x907)>x908));

    if (t106 != 1LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x917 = INT8_MIN;
	int16_t x918 = -1;
	volatile uint16_t x919 = UINT16_MAX;
	int32_t t107 = 27;

    t107 = (x917/((x918<=x919)>x920));

    if (t107 != -128) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint32_t x921 = 1466384U;
	static int16_t x922 = -1;
	static int8_t x923 = 37;
	int64_t x924 = -1LL;
	static volatile uint32_t t108 = 829884736U;

    t108 = (x921/((x922<=x923)>x924));

    if (t108 != 1466384U) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x929 = INT32_MIN;
	uint8_t x930 = 4U;
	int64_t x931 = 22638143429207LL;
	volatile int32_t t109 = INT32_MIN;

    t109 = (x929/((x930<=x931)>x932));

    if (t109 != INT32_MIN) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int32_t x937 = 1030860;
	int8_t x939 = INT8_MAX;
	volatile int32_t t110 = -3;

    t110 = (x937/((x938<=x939)>x940));

    if (t110 != 1030860) { NG(); } else { ; }
	
}

void f111(void) {
    	static int16_t x941 = -130;
	int16_t x944 = INT16_MIN;
	int32_t t111 = 52402468;

    t111 = (x941/((x942<=x943)>x944));

    if (t111 != -130) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x953 = -1LL;
	volatile int16_t x955 = -1;
	static volatile int32_t x956 = -504331713;
	volatile int64_t t112 = 79150071814837424LL;

    t112 = (x953/((x954<=x955)>x956));

    if (t112 != -1LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x970 = INT8_MAX;
	uint64_t x971 = 371348100940LLU;
	int8_t x972 = INT8_MIN;
	volatile uint32_t t113 = 148906926U;

    t113 = (x969/((x970<=x971)>x972));

    if (t113 != 993053908U) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x989 = UINT16_MAX;
	volatile uint16_t x991 = UINT16_MAX;
	static int32_t x992 = -2277;
	static volatile int32_t t114 = -7788016;

    t114 = (x989/((x990<=x991)>x992));

    if (t114 != 65535) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint8_t x993 = 4U;
	static int8_t x994 = -1;
	int64_t x996 = -1LL;
	static int32_t t115 = -20598986;

    t115 = (x993/((x994<=x995)>x996));

    if (t115 != 4) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x997 = INT64_MIN;
	uint64_t x999 = 13LLU;
	int64_t x1000 = -1LL;

    t116 = (x997/((x998<=x999)>x1000));

    if (t116 != INT64_MIN) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x1001 = INT32_MIN;
	int64_t x1002 = -1987505704356920LL;
	uint64_t x1003 = 322998999135LLU;
	int16_t x1004 = INT16_MIN;

    t117 = (x1001/((x1002<=x1003)>x1004));

    if (t117 != INT32_MIN) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x1013 = -1;
	uint16_t x1014 = 1U;
	volatile int16_t x1015 = INT16_MAX;
	int32_t x1016 = -19036;
	int32_t t118 = -360336;

    t118 = (x1013/((x1014<=x1015)>x1016));

    if (t118 != -1) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x1023 = 7143895401LL;
	int8_t x1024 = INT8_MIN;
	int32_t t119 = -4584555;

    t119 = (x1021/((x1022<=x1023)>x1024));

    if (t119 != 392758) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x1025 = -6;
	uint32_t x1026 = 55473U;
	int8_t x1027 = INT8_MIN;
	int64_t x1028 = -10969454349LL;
	volatile int32_t t120 = 225314;

    t120 = (x1025/((x1026<=x1027)>x1028));

    if (t120 != -6) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x1029 = INT64_MIN;
	int8_t x1030 = INT8_MAX;
	static uint32_t x1031 = 717842423U;
	int8_t x1032 = INT8_MIN;

    t121 = (x1029/((x1030<=x1031)>x1032));

    if (t121 != INT64_MIN) { NG(); } else { ; }
	
}

void f122(void) {
    	static int16_t x1033 = 59;
	int32_t t122 = 0;

    t122 = (x1033/((x1034<=x1035)>x1036));

    if (t122 != 59) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x1041 = 112U;
	uint16_t x1042 = 6264U;
	int64_t x1043 = INT64_MAX;
	static volatile int16_t x1044 = -2993;
	int32_t t123 = 1348603;

    t123 = (x1041/((x1042<=x1043)>x1044));

    if (t123 != 112) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x1065 = -1LL;
	int64_t x1067 = INT64_MAX;
	volatile int64_t x1068 = INT64_MIN;
	volatile int64_t t124 = 1205LL;

    t124 = (x1065/((x1066<=x1067)>x1068));

    if (t124 != -1LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x1073 = INT64_MAX;
	volatile uint16_t x1074 = 1U;
	static int16_t x1075 = -1;
	volatile int64_t t125 = INT64_MAX;

    t125 = (x1073/((x1074<=x1075)>x1076));

    if (t125 != INT64_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x1081 = 466410LLU;
	volatile uint16_t x1082 = 0U;
	volatile int8_t x1083 = 63;
	int32_t x1084 = INT32_MIN;
	volatile uint64_t t126 = 2099LLU;

    t126 = (x1081/((x1082<=x1083)>x1084));

    if (t126 != 466410LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int64_t x1085 = 29465602217LL;
	uint16_t x1086 = 2200U;
	uint64_t x1087 = 175130225008371LLU;
	static int64_t x1088 = -3717667294LL;
	int64_t t127 = -85335795097441882LL;

    t127 = (x1085/((x1086<=x1087)>x1088));

    if (t127 != 29465602217LL) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x1089 = INT16_MIN;
	static volatile int32_t x1090 = INT32_MIN;
	uint32_t x1091 = 28591943U;
	int32_t x1092 = -1;
	volatile int32_t t128 = 20599;

    t128 = (x1089/((x1090<=x1091)>x1092));

    if (t128 != -32768) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint64_t x1097 = UINT64_MAX;
	int8_t x1098 = INT8_MIN;
	int8_t x1099 = -1;
	static int64_t x1100 = INT64_MIN;
	uint64_t t129 = UINT64_MAX;

    t129 = (x1097/((x1098<=x1099)>x1100));

    if (t129 != UINT64_MAX) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x1105 = INT16_MIN;
	volatile uint64_t x1106 = 107650739823LLU;
	volatile int16_t x1107 = INT16_MIN;
	int16_t x1108 = INT16_MIN;
	volatile int32_t t130 = 61941042;

    t130 = (x1105/((x1106<=x1107)>x1108));

    if (t130 != -32768) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x1123 = 15U;
	static int32_t x1124 = INT32_MIN;
	volatile int64_t t131 = 954LL;

    t131 = (x1121/((x1122<=x1123)>x1124));

    if (t131 != -6705838103883LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x1125 = INT32_MIN;
	int64_t x1126 = -468985268LL;
	int64_t x1127 = INT64_MIN;
	int32_t x1128 = -213451;
	int32_t t132 = INT32_MIN;

    t132 = (x1125/((x1126<=x1127)>x1128));

    if (t132 != INT32_MIN) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x1137 = INT8_MAX;
	int8_t x1138 = -1;
	volatile uint64_t x1139 = UINT64_MAX;
	int32_t t133 = 131256;

    t133 = (x1137/((x1138<=x1139)>x1140));

    if (t133 != 127) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x1146 = INT8_MIN;
	int16_t x1148 = INT16_MIN;
	int32_t t134 = 335;

    t134 = (x1145/((x1146<=x1147)>x1148));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x1173 = INT64_MIN;
	uint8_t x1174 = UINT8_MAX;
	int8_t x1176 = INT8_MIN;

    t135 = (x1173/((x1174<=x1175)>x1176));

    if (t135 != INT64_MIN) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x1177 = UINT8_MAX;
	int8_t x1178 = INT8_MIN;
	uint32_t x1179 = 316U;
	static int8_t x1180 = -1;
	static int32_t t136 = -3834898;

    t136 = (x1177/((x1178<=x1179)>x1180));

    if (t136 != 255) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x1185 = INT8_MIN;
	uint16_t x1186 = UINT16_MAX;
	int8_t x1188 = INT8_MIN;
	static int32_t t137 = 0;

    t137 = (x1185/((x1186<=x1187)>x1188));

    if (t137 != -128) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x1193 = 125U;
	int64_t x1195 = INT64_MIN;
	volatile int32_t x1196 = INT32_MIN;
	static int32_t t138 = -73989;

    t138 = (x1193/((x1194<=x1195)>x1196));

    if (t138 != 125) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x1197 = -3;
	int64_t x1198 = INT64_MAX;
	static int16_t x1199 = INT16_MIN;
	int32_t t139 = -1;

    t139 = (x1197/((x1198<=x1199)>x1200));

    if (t139 != -3) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x1201 = INT32_MAX;
	int32_t x1202 = INT32_MIN;
	int16_t x1204 = -30;
	int32_t t140 = INT32_MAX;

    t140 = (x1201/((x1202<=x1203)>x1204));

    if (t140 != INT32_MAX) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x1205 = -26;
	int32_t x1206 = INT32_MIN;
	volatile int32_t x1207 = -1;
	int8_t x1208 = -1;
	int32_t t141 = 16;

    t141 = (x1205/((x1206<=x1207)>x1208));

    if (t141 != -26) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x1209 = -482286700126LL;
	int16_t x1210 = 1;
	int16_t x1211 = -1;
	int16_t x1212 = INT16_MIN;
	volatile int64_t t142 = -91212LL;

    t142 = (x1209/((x1210<=x1211)>x1212));

    if (t142 != -482286700126LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x1221 = 22852U;
	int16_t x1222 = -1;
	static uint32_t x1223 = 112218962U;
	int64_t x1224 = INT64_MIN;
	volatile uint32_t t143 = 570008U;

    t143 = (x1221/((x1222<=x1223)>x1224));

    if (t143 != 22852U) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x1258 = -1;
	int32_t x1259 = INT32_MIN;
	int64_t x1260 = -1LL;
	static volatile uint32_t t144 = UINT32_MAX;

    t144 = (x1257/((x1258<=x1259)>x1260));

    if (t144 != UINT32_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint64_t x1265 = 223438LLU;
	uint8_t x1266 = UINT8_MAX;
	int8_t x1267 = 0;
	volatile uint64_t t145 = 10009LLU;

    t145 = (x1265/((x1266<=x1267)>x1268));

    if (t145 != 223438LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x1269 = -1LL;
	int8_t x1270 = INT8_MAX;
	volatile int32_t x1271 = -1;
	int64_t t146 = -9379LL;

    t146 = (x1269/((x1270<=x1271)>x1272));

    if (t146 != -1LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x1273 = 5693661840892LLU;
	volatile int8_t x1275 = INT8_MIN;
	uint64_t t147 = 0LLU;

    t147 = (x1273/((x1274<=x1275)>x1276));

    if (t147 != 5693661840892LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	static int8_t x1289 = -1;
	int16_t x1290 = INT16_MAX;
	uint32_t x1291 = 363903264U;
	volatile int16_t x1292 = INT16_MIN;
	int32_t t148 = 40634391;

    t148 = (x1289/((x1290<=x1291)>x1292));

    if (t148 != -1) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x1293 = 459284323LL;
	int32_t x1294 = -267968218;
	int8_t x1295 = 12;
	int64_t x1296 = INT64_MIN;
	volatile int64_t t149 = 118737LL;

    t149 = (x1293/((x1294<=x1295)>x1296));

    if (t149 != 459284323LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x1299 = UINT16_MAX;
	int8_t x1300 = INT8_MIN;
	volatile int32_t t150 = -1;

    t150 = (x1297/((x1298<=x1299)>x1300));

    if (t150 != -128) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x1301 = UINT16_MAX;
	static uint32_t x1302 = 3587139U;
	static int64_t x1303 = INT64_MIN;
	int32_t t151 = 45733;

    t151 = (x1301/((x1302<=x1303)>x1304));

    if (t151 != 65535) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x1313 = INT16_MAX;
	volatile int64_t x1314 = -1LL;
	int8_t x1315 = INT8_MIN;
	int32_t x1316 = INT32_MIN;

    t152 = (x1313/((x1314<=x1315)>x1316));

    if (t152 != 32767) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint64_t x1317 = UINT64_MAX;
	int8_t x1318 = INT8_MIN;
	int16_t x1320 = -1;
	volatile uint64_t t153 = UINT64_MAX;

    t153 = (x1317/((x1318<=x1319)>x1320));

    if (t153 != UINT64_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x1321 = INT64_MAX;
	int16_t x1322 = INT16_MAX;
	uint16_t x1323 = 3605U;
	static int16_t x1324 = -1;
	int64_t t154 = INT64_MAX;

    t154 = (x1321/((x1322<=x1323)>x1324));

    if (t154 != INT64_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x1326 = INT64_MIN;
	volatile uint8_t x1327 = 12U;
	int8_t x1328 = -39;
	volatile int32_t t155 = 15;

    t155 = (x1325/((x1326<=x1327)>x1328));

    if (t155 != -128) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x1329 = -3;
	int32_t x1330 = -1;
	int32_t x1331 = -46;
	int8_t x1332 = -1;
	volatile int32_t t156 = 158;

    t156 = (x1329/((x1330<=x1331)>x1332));

    if (t156 != -3) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x1337 = INT8_MAX;
	static uint64_t x1338 = 519664692055LLU;
	int64_t x1339 = -232560957LL;
	int32_t t157 = -249929;

    t157 = (x1337/((x1338<=x1339)>x1340));

    if (t157 != 127) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x1369 = INT64_MAX;
	static int32_t x1371 = 5034968;

    t158 = (x1369/((x1370<=x1371)>x1372));

    if (t158 != INT64_MAX) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x1377 = INT32_MIN;
	uint64_t x1379 = 13586LLU;
	int64_t x1380 = -1LL;

    t159 = (x1377/((x1378<=x1379)>x1380));

    if (t159 != INT32_MIN) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x1381 = INT8_MIN;
	uint8_t x1383 = 1U;
	int64_t x1384 = INT64_MIN;
	volatile int32_t t160 = 8942587;

    t160 = (x1381/((x1382<=x1383)>x1384));

    if (t160 != -128) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x1385 = 115661U;
	uint64_t x1386 = UINT64_MAX;
	int32_t x1387 = -1;
	static int32_t x1388 = INT32_MIN;
	uint32_t t161 = 31192002U;

    t161 = (x1385/((x1386<=x1387)>x1388));

    if (t161 != 115661U) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x1389 = INT8_MIN;
	uint64_t x1390 = 89467596255173LLU;
	int32_t x1391 = -5;
	volatile int8_t x1392 = INT8_MIN;
	int32_t t162 = -1;

    t162 = (x1389/((x1390<=x1391)>x1392));

    if (t162 != -128) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x1393 = INT64_MIN;
	static uint16_t x1394 = UINT16_MAX;
	int16_t x1395 = INT16_MAX;
	static volatile int64_t t163 = INT64_MIN;

    t163 = (x1393/((x1394<=x1395)>x1396));

    if (t163 != INT64_MIN) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint16_t x1409 = 5U;
	uint64_t x1410 = 19463037178LLU;
	int32_t x1411 = -1;
	volatile int16_t x1412 = -1;

    t164 = (x1409/((x1410<=x1411)>x1412));

    if (t164 != 5) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x1413 = 1;
	uint32_t x1414 = 437U;
	int8_t x1415 = 4;
	int32_t t165 = 28182102;

    t165 = (x1413/((x1414<=x1415)>x1416));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int32_t x1417 = INT32_MIN;
	int16_t x1418 = INT16_MIN;
	static int64_t x1419 = INT64_MIN;
	int16_t x1420 = -1;
	int32_t t166 = INT32_MIN;

    t166 = (x1417/((x1418<=x1419)>x1420));

    if (t166 != INT32_MIN) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x1421 = 984671831102LLU;
	int16_t x1423 = -1;
	volatile uint64_t t167 = 387587734LLU;

    t167 = (x1421/((x1422<=x1423)>x1424));

    if (t167 != 984671831102LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x1426 = INT64_MIN;
	int32_t x1427 = INT32_MIN;
	int64_t x1428 = -1LL;

    t168 = (x1425/((x1426<=x1427)>x1428));

    if (t168 != 2334326624902303078LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x1437 = 0;
	static volatile int32_t x1438 = INT32_MAX;
	volatile int32_t x1439 = -1;

    t169 = (x1437/((x1438<=x1439)>x1440));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint8_t x1465 = UINT8_MAX;
	int8_t x1466 = -1;
	int32_t x1467 = 2517;
	static volatile int32_t x1468 = -1;

    t170 = (x1465/((x1466<=x1467)>x1468));

    if (t170 != 255) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x1473 = INT16_MAX;
	int32_t x1476 = -5997;
	int32_t t171 = 5;

    t171 = (x1473/((x1474<=x1475)>x1476));

    if (t171 != 32767) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x1485 = 0;
	static int8_t x1486 = -1;
	static volatile int64_t x1487 = 15417LL;
	int32_t t172 = 19394;

    t172 = (x1485/((x1486<=x1487)>x1488));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x1489 = -1LL;
	int8_t x1490 = INT8_MAX;
	int16_t x1491 = -2;

    t173 = (x1489/((x1490<=x1491)>x1492));

    if (t173 != -1LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x1493 = 38;
	static uint64_t x1494 = 8985186029390038345LLU;
	int16_t x1495 = INT16_MIN;
	int64_t x1496 = INT64_MIN;
	int32_t t174 = -715599491;

    t174 = (x1493/((x1494<=x1495)>x1496));

    if (t174 != 38) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x1497 = INT64_MIN;
	uint8_t x1498 = 10U;
	int32_t x1499 = INT32_MIN;
	volatile int64_t x1500 = INT64_MIN;
	volatile int64_t t175 = INT64_MIN;

    t175 = (x1497/((x1498<=x1499)>x1500));

    if (t175 != INT64_MIN) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x1505 = INT32_MIN;
	int16_t x1506 = INT16_MIN;
	int16_t x1507 = INT16_MAX;
	int64_t x1508 = INT64_MIN;
	int32_t t176 = INT32_MIN;

    t176 = (x1505/((x1506<=x1507)>x1508));

    if (t176 != INT32_MIN) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x1513 = 1LLU;
	static uint64_t x1514 = 9527086106LLU;
	uint16_t x1515 = 29U;
	int16_t x1516 = -1;
	uint64_t t177 = 373098379LLU;

    t177 = (x1513/((x1514<=x1515)>x1516));

    if (t177 != 1LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint32_t x1517 = 2U;
	static uint32_t x1518 = 96U;
	static volatile int32_t x1520 = -1;
	static volatile uint32_t t178 = 4818U;

    t178 = (x1517/((x1518<=x1519)>x1520));

    if (t178 != 2U) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x1522 = INT32_MIN;
	uint32_t x1523 = 50U;
	int64_t x1524 = INT64_MIN;

    t179 = (x1521/((x1522<=x1523)>x1524));

    if (t179 != -1LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x1526 = 49984490;
	static uint8_t x1527 = 106U;
	int64_t x1528 = -31805500830165294LL;
	volatile int64_t t180 = INT64_MAX;

    t180 = (x1525/((x1526<=x1527)>x1528));

    if (t180 != INT64_MAX) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x1531 = INT8_MAX;
	int16_t x1532 = -1;

    t181 = (x1529/((x1530<=x1531)>x1532));

    if (t181 != INT32_MIN) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x1533 = INT32_MAX;
	uint64_t x1534 = UINT64_MAX;

    t182 = (x1533/((x1534<=x1535)>x1536));

    if (t182 != INT32_MAX) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x1542 = 1LL;
	int16_t x1543 = INT16_MIN;
	int8_t x1544 = INT8_MIN;

    t183 = (x1541/((x1542<=x1543)>x1544));

    if (t183 != 58811071062142486LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x1550 = INT64_MIN;
	int16_t x1551 = -703;
	int32_t t184 = 192675707;

    t184 = (x1549/((x1550<=x1551)>x1552));

    if (t184 != -128) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x1553 = INT64_MIN;
	static int8_t x1555 = -1;
	volatile int16_t x1556 = -1;
	int64_t t185 = INT64_MIN;

    t185 = (x1553/((x1554<=x1555)>x1556));

    if (t185 != INT64_MIN) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint64_t x1562 = UINT64_MAX;
	uint64_t x1563 = 1819775226LLU;

    t186 = (x1561/((x1562<=x1563)>x1564));

    if (t186 != 60589290153648LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile uint32_t x1565 = 5U;
	static int8_t x1566 = 1;
	int8_t x1568 = -1;
	volatile uint32_t t187 = 3475U;

    t187 = (x1565/((x1566<=x1567)>x1568));

    if (t187 != 5U) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile uint16_t x1569 = 178U;
	static int64_t x1570 = -1LL;
	uint16_t x1571 = 2472U;
	int32_t x1572 = INT32_MIN;
	int32_t t188 = -450945995;

    t188 = (x1569/((x1570<=x1571)>x1572));

    if (t188 != 178) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x1589 = 1;
	uint32_t x1590 = 1483U;
	int8_t x1592 = -1;
	int32_t t189 = -4;

    t189 = (x1589/((x1590<=x1591)>x1592));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x1605 = -1;
	static int32_t x1606 = INT32_MAX;
	int64_t x1607 = INT64_MIN;
	int32_t x1608 = INT32_MIN;
	volatile int32_t t190 = 3937336;

    t190 = (x1605/((x1606<=x1607)>x1608));

    if (t190 != -1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x1609 = -1;
	int8_t x1612 = INT8_MIN;

    t191 = (x1609/((x1610<=x1611)>x1612));

    if (t191 != -1) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x1617 = INT16_MAX;
	int16_t x1618 = 1;
	volatile uint16_t x1619 = 2U;
	int32_t x1620 = -506245563;
	static volatile int32_t t192 = -1018583;

    t192 = (x1617/((x1618<=x1619)>x1620));

    if (t192 != 32767) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x1621 = INT16_MIN;
	static int16_t x1622 = -1;
	uint32_t x1623 = 10026115U;
	int32_t x1624 = -1;
	int32_t t193 = 382061;

    t193 = (x1621/((x1622<=x1623)>x1624));

    if (t193 != -32768) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint16_t x1625 = 8U;
	volatile int64_t x1626 = INT64_MAX;
	uint8_t x1627 = 3U;
	int16_t x1628 = -7;
	int32_t t194 = 988;

    t194 = (x1625/((x1626<=x1627)>x1628));

    if (t194 != 8) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint16_t x1637 = UINT16_MAX;
	int8_t x1638 = INT8_MAX;
	int64_t x1639 = INT64_MAX;
	volatile int32_t t195 = -10;

    t195 = (x1637/((x1638<=x1639)>x1640));

    if (t195 != 65535) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x1681 = INT32_MAX;
	volatile int8_t x1682 = 1;
	volatile int16_t x1683 = INT16_MAX;
	volatile int32_t t196 = INT32_MAX;

    t196 = (x1681/((x1682<=x1683)>x1684));

    if (t196 != INT32_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int16_t x1690 = INT16_MAX;
	int8_t x1691 = -1;
	volatile int8_t x1692 = -1;
	volatile int32_t t197 = 1;

    t197 = (x1689/((x1690<=x1691)>x1692));

    if (t197 != 32767) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x1709 = 63U;
	volatile int64_t x1711 = 125776867258LL;
	int16_t x1712 = -228;
	volatile int32_t t198 = 1;

    t198 = (x1709/((x1710<=x1711)>x1712));

    if (t198 != 63) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x1713 = -1;
	int64_t x1714 = -11875570LL;
	uint8_t x1715 = UINT8_MAX;
	volatile int32_t t199 = -2431521;

    t199 = (x1713/((x1714<=x1715)>x1716));

    if (t199 != -1) { NG(); } else { ; }
	
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

