
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

int8_t x1 = INT8_MIN;
static int8_t x3 = INT8_MAX;
uint32_t x21 = 1040349U;
int64_t x27 = INT64_MAX;
int64_t x38 = -1720273118535071LL;
static int64_t x55 = INT64_MAX;
int32_t t4 = -4935;
static volatile int8_t x60 = INT8_MIN;
volatile uint8_t x62 = UINT8_MAX;
volatile int64_t x72 = -793LL;
volatile int32_t t7 = -85023;
int16_t x85 = 9;
volatile uint16_t x86 = UINT16_MAX;
int32_t t8 = 247;
uint64_t x89 = 163159LLU;
static int32_t x90 = -1;
static int64_t x91 = INT64_MAX;
volatile uint64_t t9 = 3956246453704LLU;
volatile int8_t x102 = -1;
static int32_t t12 = 9868114;
static volatile uint64_t t13 = 23216446923LLU;
static int8_t x172 = 0;
static volatile uint64_t t16 = 91126999955197LLU;
volatile int16_t x184 = INT16_MIN;
volatile int64_t x205 = -1LL;
static volatile int32_t x207 = 116896694;
static volatile int64_t t20 = 254973850493459LL;
int16_t x223 = -9;
int16_t x225 = INT16_MIN;
uint8_t x227 = 1U;
static volatile int64_t t24 = INT64_MAX;
uint16_t x238 = UINT16_MAX;
volatile int64_t x266 = -719340404160110LL;
static uint64_t x273 = 50098373LLU;
int16_t x274 = -655;
int64_t x276 = INT64_MIN;
int64_t x296 = INT64_MIN;
static uint16_t x301 = UINT16_MAX;
uint64_t x309 = 59157659983LLU;
int32_t x310 = 15464;
static volatile uint32_t x324 = 6093267U;
uint32_t x333 = 7U;
static int16_t x340 = INT16_MIN;
static volatile int32_t t37 = 135490047;
int32_t x365 = -19728;
int64_t x389 = -80001LL;
static volatile int16_t x391 = 65;
volatile int32_t x392 = INT32_MIN;
uint8_t x393 = 0U;
volatile int8_t x421 = -11;
int32_t x424 = -1;
static uint8_t x428 = 28U;
int8_t x451 = 7;
static int64_t x464 = INT64_MIN;
int32_t x475 = 139967192;
uint64_t x493 = 132313LLU;
uint32_t x504 = 982541303U;
int64_t x510 = INT64_MIN;
int64_t x524 = -224564LL;
static volatile int32_t t60 = -26588;
static uint16_t x575 = 348U;
int16_t x576 = -1;
static int16_t x577 = -1;
int32_t x593 = INT32_MIN;
uint8_t x595 = 1U;
volatile int32_t x597 = INT32_MAX;
static int32_t t67 = 16260596;
int64_t x608 = INT64_MIN;
static int16_t x645 = INT16_MAX;
static volatile int32_t t72 = -474722;
uint16_t x651 = 13061U;
static volatile uint8_t x657 = 0U;
volatile int32_t t74 = -2;
int32_t t75 = 813;
int32_t t77 = INT32_MAX;
volatile uint8_t x697 = 11U;
int16_t x698 = INT16_MIN;
int8_t x709 = INT8_MIN;
int64_t x710 = 179217673246LL;
uint8_t x714 = 2U;
int8_t x721 = INT8_MAX;
uint8_t x723 = UINT8_MAX;
volatile int64_t x724 = -2609715254237LL;
int8_t x732 = -9;
int32_t t83 = 426795096;
uint8_t x744 = 12U;
int64_t x747 = INT64_MAX;
int8_t x748 = -1;
int32_t t86 = 59;
int32_t x763 = -1649630;
uint8_t x768 = UINT8_MAX;
int32_t t88 = 70542;
volatile int32_t t89 = 123903698;
static int16_t x793 = INT16_MIN;
static volatile uint64_t x798 = UINT64_MAX;
uint64_t x800 = 476405LLU;
int16_t x801 = 80;
static int32_t x814 = 414497;
int64_t x830 = INT64_MIN;
int64_t x837 = INT64_MAX;
int32_t x843 = -110;
int8_t x879 = INT8_MIN;
uint16_t x880 = UINT16_MAX;
static int32_t x885 = INT32_MIN;
uint32_t x902 = UINT32_MAX;
uint8_t x913 = 6U;
int8_t x914 = INT8_MIN;
int32_t t103 = -8256;
int16_t x932 = INT16_MIN;
int8_t x941 = 3;
uint32_t x943 = 19225U;
static uint8_t x946 = UINT8_MAX;
int32_t x974 = 0;
int32_t x976 = INT32_MIN;
int8_t x992 = INT8_MIN;
int32_t t109 = 1;
static int32_t t110 = -2168;
static uint32_t x1025 = 1973099034U;
static int64_t x1033 = -1003406664LL;
int32_t x1035 = -29140;
uint16_t x1049 = 191U;
uint64_t t116 = 1099519811052018LLU;
static int8_t x1067 = 1;
int8_t x1081 = -1;
static uint32_t x1084 = 634087U;
static volatile int16_t x1092 = INT16_MIN;
int32_t t120 = -3241458;
uint16_t x1119 = 263U;
volatile int32_t t123 = 47099;
int16_t x1125 = -1;
volatile int32_t x1148 = -2286277;
volatile int8_t x1156 = -1;
int32_t x1177 = -337;
int32_t x1178 = INT32_MIN;
volatile int64_t t130 = -38771LL;
int32_t x1185 = -25536;
static int64_t x1186 = -4LL;
uint64_t x1188 = 1354593LLU;
int32_t x1192 = 0;
int64_t x1193 = INT64_MIN;
int16_t x1217 = INT16_MIN;
volatile int8_t x1229 = INT8_MAX;
volatile int32_t t140 = INT32_MAX;
static volatile int8_t x1255 = -1;
uint64_t x1277 = 2859546927352511200LLU;
static uint16_t x1279 = 60U;
uint32_t t144 = 521265694U;
volatile int16_t x1291 = -1;
int64_t x1297 = 5608LL;
int64_t x1298 = INT64_MIN;
static volatile int8_t x1305 = INT8_MIN;
static int8_t x1306 = INT8_MIN;
static volatile int32_t t149 = 0;
int8_t x1312 = INT8_MIN;
volatile int32_t x1335 = 171526;
int32_t x1338 = 1;
int32_t x1349 = 1;
uint32_t x1377 = 860720411U;
int64_t x1379 = -421223047LL;
static volatile int8_t x1380 = -1;
int32_t x1396 = -1;
int8_t x1400 = INT8_MAX;
volatile int32_t t157 = -5096726;
volatile int8_t x1409 = INT8_MIN;
static int16_t x1410 = INT16_MIN;
int32_t x1413 = -104497477;
uint64_t x1414 = UINT64_MAX;
int32_t t160 = 7676974;
static uint64_t x1429 = 131406293667294654LLU;
int8_t x1462 = -1;
volatile uint8_t x1464 = 2U;
static int16_t x1500 = -3404;
int64_t x1501 = 375633879LL;
volatile uint32_t t170 = UINT32_MAX;
uint64_t x1521 = 11948657159LLU;
uint8_t x1524 = 9U;
volatile uint64_t t172 = 169LLU;
int16_t x1547 = INT16_MAX;
static int32_t x1562 = INT32_MIN;
int32_t x1563 = INT32_MAX;
static int32_t x1574 = -6899;
static int16_t x1627 = INT16_MIN;
volatile uint16_t x1637 = 32396U;
int16_t x1639 = INT16_MAX;
volatile int64_t x1644 = -1LL;
int64_t x1662 = INT64_MAX;
volatile int32_t x1664 = -1;
volatile uint64_t t182 = 207293LLU;
static int32_t t183 = 0;
int16_t x1688 = INT16_MIN;
int64_t x1696 = -10513876126801085LL;
static uint64_t x1702 = UINT64_MAX;
uint64_t x1709 = UINT64_MAX;
int8_t x1729 = INT8_MIN;
int32_t x1744 = INT32_MIN;
int8_t x1753 = 0;
int64_t x1754 = INT64_MAX;
int8_t x1755 = INT8_MIN;
int16_t x1791 = INT16_MIN;
int8_t x1802 = 3;
uint16_t x1803 = 111U;
int32_t t198 = INT32_MIN;
static int32_t x1813 = 0;


void f0(void) {
    	int8_t x2 = -1;
	static volatile int8_t x4 = -1;
	static volatile int32_t t0 = -246666;

    t0 = (x1/((x2&x3)>x4));

    if (t0 != -128) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint16_t x22 = UINT16_MAX;
	volatile int64_t x23 = INT64_MIN;
	int8_t x24 = -1;
	volatile uint32_t t1 = 6630U;

    t1 = (x21/((x22&x23)>x24));

    if (t1 != 1040349U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x25 = 3U;
	static int32_t x26 = INT32_MIN;
	uint8_t x28 = UINT8_MAX;
	static volatile int32_t t2 = 9425;

    t2 = (x25/((x26&x27)>x28));

    if (t2 != 3) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x37 = -79659645963LL;
	volatile uint32_t x39 = 2252U;
	int32_t x40 = INT32_MIN;
	volatile int64_t t3 = -3348517879572364374LL;

    t3 = (x37/((x38&x39)>x40));

    if (t3 != -79659645963LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile uint8_t x53 = 26U;
	int16_t x54 = -1;
	int8_t x56 = -46;

    t4 = (x53/((x54&x55)>x56));

    if (t4 != 26) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x57 = 501U;
	int64_t x58 = -1LL;
	volatile uint32_t x59 = 1473U;
	static uint32_t t5 = 6529U;

    t5 = (x57/((x58&x59)>x60));

    if (t5 != 501U) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x61 = INT16_MAX;
	uint16_t x63 = 7181U;
	int64_t x64 = 0LL;
	volatile int32_t t6 = -2120843;

    t6 = (x61/((x62&x63)>x64));

    if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint8_t x69 = UINT8_MAX;
	int32_t x70 = -5;
	uint32_t x71 = 109569270U;

    t7 = (x69/((x70&x71)>x72));

    if (t7 != 255) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int32_t x87 = INT32_MIN;
	int16_t x88 = INT16_MIN;

    t8 = (x85/((x86&x87)>x88));

    if (t8 != 9) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x92 = INT8_MIN;

    t9 = (x89/((x90&x91)>x92));

    if (t9 != 163159LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static int16_t x101 = 1895;
	volatile uint64_t x103 = UINT64_MAX;
	int8_t x104 = INT8_MAX;
	volatile int32_t t10 = 485520005;

    t10 = (x101/((x102&x103)>x104));

    if (t10 != 1895) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x137 = 59625320391059220LLU;
	volatile int32_t x138 = 189215287;
	int16_t x139 = 1;
	int16_t x140 = -7;
	uint64_t t11 = 13888392107852LLU;

    t11 = (x137/((x138&x139)>x140));

    if (t11 != 59625320391059220LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x145 = 14;
	uint8_t x146 = UINT8_MAX;
	int8_t x147 = 3;
	uint8_t x148 = 0U;

    t12 = (x145/((x146&x147)>x148));

    if (t12 != 14) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x149 = 21617LLU;
	int64_t x150 = INT64_MIN;
	int16_t x151 = -6;
	uint64_t x152 = 892146LLU;

    t13 = (x149/((x150&x151)>x152));

    if (t13 != 21617LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x153 = -1;
	int64_t x154 = -460683LL;
	int16_t x155 = 108;
	int32_t x156 = -1;
	static int32_t t14 = -558699;

    t14 = (x153/((x154&x155)>x156));

    if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x157 = INT16_MAX;
	uint32_t x158 = 126U;
	uint32_t x159 = 3718U;
	volatile int64_t x160 = -46139346307238LL;
	static volatile int32_t t15 = 118504;

    t15 = (x157/((x158&x159)>x160));

    if (t15 != 32767) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x169 = 52056324LLU;
	volatile int32_t x170 = INT32_MAX;
	int16_t x171 = INT16_MIN;

    t16 = (x169/((x170&x171)>x172));

    if (t16 != 52056324LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x177 = 104112742177982198LL;
	int32_t x178 = -114;
	uint64_t x179 = 275088308369476LLU;
	static uint8_t x180 = UINT8_MAX;
	volatile int64_t t17 = -7LL;

    t17 = (x177/((x178&x179)>x180));

    if (t17 != 104112742177982198LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x181 = -1;
	static uint8_t x182 = UINT8_MAX;
	static int32_t x183 = INT32_MAX;
	static int32_t t18 = 1;

    t18 = (x181/((x182&x183)>x184));

    if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x189 = 29393581;
	int16_t x190 = INT16_MIN;
	uint16_t x191 = 29206U;
	int16_t x192 = INT16_MIN;
	static int32_t t19 = 305;

    t19 = (x189/((x190&x191)>x192));

    if (t19 != 29393581) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x206 = INT8_MAX;
	uint16_t x208 = 2U;

    t20 = (x205/((x206&x207)>x208));

    if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x221 = -1;
	int32_t x222 = INT32_MIN;
	int64_t x224 = INT64_MIN;
	static volatile int32_t t21 = -144083481;

    t21 = (x221/((x222&x223)>x224));

    if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x226 = 2211;
	int8_t x228 = INT8_MIN;
	volatile int32_t t22 = -15293540;

    t22 = (x225/((x226&x227)>x228));

    if (t22 != -32768) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x229 = 3LLU;
	volatile int64_t x230 = INT64_MAX;
	uint16_t x231 = 3363U;
	uint16_t x232 = 372U;
	volatile uint64_t t23 = 61602LLU;

    t23 = (x229/((x230&x231)>x232));

    if (t23 != 3LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x233 = INT64_MAX;
	int16_t x234 = INT16_MAX;
	volatile int16_t x235 = 29;
	int64_t x236 = INT64_MIN;

    t24 = (x233/((x234&x235)>x236));

    if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x237 = -1;
	static uint64_t x239 = UINT64_MAX;
	uint32_t x240 = 116U;
	volatile int32_t t25 = -1;

    t25 = (x237/((x238&x239)>x240));

    if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x249 = -7960817866060293LL;
	volatile int8_t x250 = -12;
	volatile uint64_t x251 = 16987LLU;
	static volatile uint8_t x252 = UINT8_MAX;
	static int64_t t26 = -8LL;

    t26 = (x249/((x250&x251)>x252));

    if (t26 != -7960817866060293LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static int32_t x265 = INT32_MIN;
	static volatile uint32_t x267 = UINT32_MAX;
	uint16_t x268 = 19U;
	volatile int32_t t27 = INT32_MIN;

    t27 = (x265/((x266&x267)>x268));

    if (t27 != INT32_MIN) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x275 = 213;
	static uint64_t t28 = 2559892180788LLU;

    t28 = (x273/((x274&x275)>x276));

    if (t28 != 50098373LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x289 = 2685163LLU;
	static int32_t x290 = INT32_MAX;
	int64_t x291 = -1LL;
	int64_t x292 = 945LL;
	uint64_t t29 = 3205228535LLU;

    t29 = (x289/((x290&x291)>x292));

    if (t29 != 2685163LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x293 = 19894158LL;
	int8_t x294 = 0;
	static int16_t x295 = -1;
	int64_t t30 = 11957725527036111LL;

    t30 = (x293/((x294&x295)>x296));

    if (t30 != 19894158LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x302 = 111173LL;
	int64_t x303 = -1LL;
	int32_t x304 = INT32_MIN;
	volatile int32_t t31 = -126546117;

    t31 = (x301/((x302&x303)>x304));

    if (t31 != 65535) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x311 = -1;
	int64_t x312 = INT64_MIN;
	uint64_t t32 = 3454476686655499LLU;

    t32 = (x309/((x310&x311)>x312));

    if (t32 != 59157659983LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x313 = INT8_MIN;
	int16_t x314 = INT16_MAX;
	int8_t x315 = -1;
	int8_t x316 = 16;
	int32_t t33 = 4445;

    t33 = (x313/((x314&x315)>x316));

    if (t33 != -128) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint32_t x321 = UINT32_MAX;
	uint32_t x322 = 98331509U;
	volatile int32_t x323 = INT32_MAX;
	volatile uint32_t t34 = UINT32_MAX;

    t34 = (x321/((x322&x323)>x324));

    if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	static int32_t x334 = -578;
	static int8_t x335 = -3;
	uint32_t x336 = 2U;
	uint32_t t35 = 85575U;

    t35 = (x333/((x334&x335)>x336));

    if (t35 != 7U) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x337 = INT16_MIN;
	uint16_t x338 = 6U;
	int32_t x339 = 48992770;
	volatile int32_t t36 = 584773;

    t36 = (x337/((x338&x339)>x340));

    if (t36 != -32768) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x345 = INT8_MIN;
	int32_t x346 = -287077014;
	uint64_t x347 = 969726749016LLU;
	int8_t x348 = 3;

    t37 = (x345/((x346&x347)>x348));

    if (t37 != -128) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint32_t x349 = 39712U;
	int64_t x350 = 15190LL;
	int64_t x351 = INT64_MIN;
	int16_t x352 = -1;
	static uint32_t t38 = 40U;

    t38 = (x349/((x350&x351)>x352));

    if (t38 != 39712U) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x353 = INT16_MIN;
	int64_t x354 = -127328197LL;
	static volatile int32_t x355 = INT32_MIN;
	uint64_t x356 = 2729408800049298LLU;
	volatile int32_t t39 = -28027328;

    t39 = (x353/((x354&x355)>x356));

    if (t39 != -32768) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x366 = -1;
	int8_t x367 = INT8_MAX;
	static volatile int16_t x368 = INT16_MIN;
	volatile int32_t t40 = 1;

    t40 = (x365/((x366&x367)>x368));

    if (t40 != -19728) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x369 = UINT8_MAX;
	static int16_t x370 = INT16_MIN;
	int32_t x371 = INT32_MIN;
	int64_t x372 = INT64_MIN;
	int32_t t41 = -14052;

    t41 = (x369/((x370&x371)>x372));

    if (t41 != 255) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x373 = INT8_MAX;
	volatile uint8_t x374 = UINT8_MAX;
	uint32_t x375 = 5665U;
	uint8_t x376 = 2U;
	volatile int32_t t42 = 39256;

    t42 = (x373/((x374&x375)>x376));

    if (t42 != 127) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x385 = INT64_MIN;
	int8_t x386 = -1;
	int8_t x387 = INT8_MIN;
	volatile int64_t x388 = -1456272640386117322LL;
	volatile int64_t t43 = INT64_MIN;

    t43 = (x385/((x386&x387)>x388));

    if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint8_t x390 = 4U;
	volatile int64_t t44 = 4104LL;

    t44 = (x389/((x390&x391)>x392));

    if (t44 != -80001LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x394 = INT16_MIN;
	int32_t x395 = INT32_MAX;
	uint16_t x396 = 1U;
	static int32_t t45 = -296388917;

    t45 = (x393/((x394&x395)>x396));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x413 = INT32_MIN;
	volatile int8_t x414 = 1;
	volatile int32_t x415 = 1631480;
	int32_t x416 = INT32_MIN;
	int32_t t46 = INT32_MIN;

    t46 = (x413/((x414&x415)>x416));

    if (t46 != INT32_MIN) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x422 = INT16_MIN;
	uint16_t x423 = 259U;
	volatile int32_t t47 = 1936;

    t47 = (x421/((x422&x423)>x424));

    if (t47 != -11) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x425 = 175478;
	uint64_t x426 = UINT64_MAX;
	int8_t x427 = INT8_MAX;
	volatile int32_t t48 = 692;

    t48 = (x425/((x426&x427)>x428));

    if (t48 != 175478) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x445 = INT32_MIN;
	int64_t x446 = 4LL;
	volatile int8_t x447 = INT8_MIN;
	int32_t x448 = INT32_MIN;
	int32_t t49 = INT32_MIN;

    t49 = (x445/((x446&x447)>x448));

    if (t49 != INT32_MIN) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x449 = INT32_MIN;
	int16_t x450 = 52;
	static int32_t x452 = INT32_MIN;
	int32_t t50 = INT32_MIN;

    t50 = (x449/((x450&x451)>x452));

    if (t50 != INT32_MIN) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x453 = -1;
	volatile int16_t x454 = INT16_MIN;
	uint64_t x455 = UINT64_MAX;
	int32_t x456 = INT32_MIN;
	int32_t t51 = 46866;

    t51 = (x453/((x454&x455)>x456));

    if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x461 = -1;
	volatile int8_t x462 = INT8_MIN;
	int32_t x463 = -1680;
	volatile int32_t t52 = 181887384;

    t52 = (x461/((x462&x463)>x464));

    if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x473 = 86U;
	static volatile int8_t x474 = -1;
	static int8_t x476 = -18;
	static volatile int32_t t53 = 1300313;

    t53 = (x473/((x474&x475)>x476));

    if (t53 != 86) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x477 = -1;
	uint32_t x478 = UINT32_MAX;
	int64_t x479 = -1LL;
	uint32_t x480 = 4002U;
	volatile int32_t t54 = 386653986;

    t54 = (x477/((x478&x479)>x480));

    if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x494 = 8;
	int16_t x495 = 8;
	int8_t x496 = -13;
	static uint64_t t55 = 4265323LLU;

    t55 = (x493/((x494&x495)>x496));

    if (t55 != 132313LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x501 = UINT8_MAX;
	int8_t x502 = -1;
	static int32_t x503 = INT32_MIN;
	int32_t t56 = -549749;

    t56 = (x501/((x502&x503)>x504));

    if (t56 != 255) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int32_t x509 = INT32_MIN;
	int64_t x511 = INT64_MAX;
	volatile int16_t x512 = -1;
	volatile int32_t t57 = INT32_MIN;

    t57 = (x509/((x510&x511)>x512));

    if (t57 != INT32_MIN) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x521 = INT32_MIN;
	int8_t x522 = -1;
	uint8_t x523 = 2U;
	static int32_t t58 = INT32_MIN;

    t58 = (x521/((x522&x523)>x524));

    if (t58 != INT32_MIN) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x525 = UINT64_MAX;
	int32_t x526 = INT32_MIN;
	volatile int16_t x527 = -1;
	int64_t x528 = -33662290215768LL;
	uint64_t t59 = UINT64_MAX;

    t59 = (x525/((x526&x527)>x528));

    if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x533 = -1;
	static uint8_t x534 = UINT8_MAX;
	int8_t x535 = INT8_MIN;
	static int64_t x536 = -793633498281586LL;

    t60 = (x533/((x534&x535)>x536));

    if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x537 = INT64_MIN;
	uint16_t x538 = 368U;
	int32_t x539 = INT32_MAX;
	int8_t x540 = 19;
	static volatile int64_t t61 = INT64_MIN;

    t61 = (x537/((x538&x539)>x540));

    if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x557 = UINT32_MAX;
	volatile int32_t x558 = 674;
	volatile int16_t x559 = 8;
	int32_t x560 = INT32_MIN;
	static uint32_t t62 = UINT32_MAX;

    t62 = (x557/((x558&x559)>x560));

    if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x573 = -34;
	volatile uint8_t x574 = 40U;
	volatile int32_t t63 = -354702;

    t63 = (x573/((x574&x575)>x576));

    if (t63 != -34) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x578 = 1994749390573717000LLU;
	static int8_t x579 = INT8_MIN;
	uint8_t x580 = UINT8_MAX;
	int32_t t64 = -2;

    t64 = (x577/((x578&x579)>x580));

    if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x594 = INT8_MIN;
	int8_t x596 = INT8_MIN;
	int32_t t65 = INT32_MIN;

    t65 = (x593/((x594&x595)>x596));

    if (t65 != INT32_MIN) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x598 = -1;
	int16_t x599 = 7108;
	uint8_t x600 = 61U;
	int32_t t66 = INT32_MAX;

    t66 = (x597/((x598&x599)>x600));

    if (t66 != INT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int16_t x601 = 6630;
	int32_t x602 = INT32_MAX;
	uint32_t x603 = UINT32_MAX;
	volatile int64_t x604 = -1LL;

    t67 = (x601/((x602&x603)>x604));

    if (t67 != 6630) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x605 = 0U;
	int64_t x606 = 1423970456281352LL;
	int16_t x607 = INT16_MIN;
	volatile int32_t t68 = 0;

    t68 = (x605/((x606&x607)>x608));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile uint64_t x617 = 710346LLU;
	int64_t x618 = INT64_MAX;
	int64_t x619 = INT64_MAX;
	volatile uint8_t x620 = 85U;
	uint64_t t69 = 54075LLU;

    t69 = (x617/((x618&x619)>x620));

    if (t69 != 710346LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint32_t x621 = UINT32_MAX;
	volatile int64_t x622 = INT64_MAX;
	uint32_t x623 = 7026789U;
	int32_t x624 = INT32_MIN;
	volatile uint32_t t70 = UINT32_MAX;

    t70 = (x621/((x622&x623)>x624));

    if (t70 != UINT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x629 = UINT32_MAX;
	static int16_t x630 = -1;
	static int8_t x631 = INT8_MIN;
	volatile uint32_t x632 = 14277U;
	volatile uint32_t t71 = UINT32_MAX;

    t71 = (x629/((x630&x631)>x632));

    if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x646 = -10844408LL;
	int16_t x647 = 65;
	volatile int8_t x648 = -1;

    t72 = (x645/((x646&x647)>x648));

    if (t72 != 32767) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x649 = 1U;
	int64_t x650 = -1LL;
	static int8_t x652 = 11;
	int32_t t73 = -17;

    t73 = (x649/((x650&x651)>x652));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int64_t x658 = -47829133LL;
	int8_t x659 = 54;
	int32_t x660 = 0;

    t74 = (x657/((x658&x659)>x660));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x669 = INT8_MIN;
	uint32_t x670 = 95862U;
	int32_t x671 = -1;
	int8_t x672 = INT8_MAX;

    t75 = (x669/((x670&x671)>x672));

    if (t75 != -128) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x681 = 1081455873LLU;
	static int16_t x682 = INT16_MAX;
	int8_t x683 = -1;
	int32_t x684 = INT32_MIN;
	uint64_t t76 = 190LLU;

    t76 = (x681/((x682&x683)>x684));

    if (t76 != 1081455873LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x689 = INT32_MAX;
	uint64_t x690 = 15535260427378407LLU;
	uint32_t x691 = UINT32_MAX;
	uint8_t x692 = UINT8_MAX;

    t77 = (x689/((x690&x691)>x692));

    if (t77 != INT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x699 = 1U;
	static int32_t x700 = INT32_MIN;
	volatile int32_t t78 = 12370;

    t78 = (x697/((x698&x699)>x700));

    if (t78 != 11) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile uint64_t x705 = 16358976LLU;
	uint8_t x706 = 67U;
	int32_t x707 = -1;
	int8_t x708 = INT8_MIN;
	uint64_t t79 = 3114344805371721788LLU;

    t79 = (x705/((x706&x707)>x708));

    if (t79 != 16358976LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint64_t x711 = 5080656571331123719LLU;
	volatile uint8_t x712 = UINT8_MAX;
	int32_t t80 = 2539703;

    t80 = (x709/((x710&x711)>x712));

    if (t80 != -128) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x713 = INT16_MIN;
	int16_t x715 = INT16_MIN;
	int16_t x716 = -1;
	volatile int32_t t81 = -12695567;

    t81 = (x713/((x714&x715)>x716));

    if (t81 != -32768) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x722 = INT32_MIN;
	int32_t t82 = 252595809;

    t82 = (x721/((x722&x723)>x724));

    if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x729 = 9752;
	int8_t x730 = INT8_MAX;
	int64_t x731 = INT64_MIN;

    t83 = (x729/((x730&x731)>x732));

    if (t83 != 9752) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint8_t x741 = UINT8_MAX;
	static int32_t x742 = -1;
	uint64_t x743 = UINT64_MAX;
	int32_t t84 = 6;

    t84 = (x741/((x742&x743)>x744));

    if (t84 != 255) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x745 = -5567214;
	volatile int64_t x746 = INT64_MAX;
	int32_t t85 = 26259;

    t85 = (x745/((x746&x747)>x748));

    if (t85 != -5567214) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x757 = -1;
	volatile int8_t x758 = INT8_MIN;
	volatile int16_t x759 = -1;
	static int16_t x760 = INT16_MIN;

    t86 = (x757/((x758&x759)>x760));

    if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x761 = INT64_MAX;
	volatile uint8_t x762 = UINT8_MAX;
	static volatile int32_t x764 = -1;
	volatile int64_t t87 = INT64_MAX;

    t87 = (x761/((x762&x763)>x764));

    if (t87 != INT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x765 = 1;
	int32_t x766 = INT32_MAX;
	uint32_t x767 = 62029412U;

    t88 = (x765/((x766&x767)>x768));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x773 = -1;
	int64_t x774 = INT64_MIN;
	volatile uint32_t x775 = 24021986U;
	int8_t x776 = INT8_MIN;

    t89 = (x773/((x774&x775)>x776));

    if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x794 = INT16_MIN;
	static uint16_t x795 = UINT16_MAX;
	int8_t x796 = INT8_MIN;
	volatile int32_t t90 = -1;

    t90 = (x793/((x794&x795)>x796));

    if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x797 = INT8_MIN;
	int32_t x799 = -4047;
	static volatile int32_t t91 = 95;

    t91 = (x797/((x798&x799)>x800));

    if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x802 = -1;
	static int8_t x803 = -1;
	int16_t x804 = INT16_MIN;
	volatile int32_t t92 = -45063;

    t92 = (x801/((x802&x803)>x804));

    if (t92 != 80) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x805 = INT8_MIN;
	int8_t x806 = -1;
	int64_t x807 = 10695151670LL;
	int8_t x808 = 6;
	volatile int32_t t93 = 3;

    t93 = (x805/((x806&x807)>x808));

    if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x813 = INT64_MAX;
	uint64_t x815 = UINT64_MAX;
	int8_t x816 = 1;
	int64_t t94 = INT64_MAX;

    t94 = (x813/((x814&x815)>x816));

    if (t94 != INT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int32_t x825 = INT32_MAX;
	volatile uint8_t x826 = UINT8_MAX;
	int32_t x827 = -1;
	int8_t x828 = -1;
	volatile int32_t t95 = INT32_MAX;

    t95 = (x825/((x826&x827)>x828));

    if (t95 != INT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x829 = 44341441349508LLU;
	int32_t x831 = INT32_MAX;
	volatile int8_t x832 = -1;
	uint64_t t96 = 10788323107590LLU;

    t96 = (x829/((x830&x831)>x832));

    if (t96 != 44341441349508LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x838 = -1;
	int64_t x839 = -7783738LL;
	uint64_t x840 = 147494623938LLU;
	volatile int64_t t97 = INT64_MAX;

    t97 = (x837/((x838&x839)>x840));

    if (t97 != INT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x841 = -8460;
	static int8_t x842 = 1;
	int32_t x844 = INT32_MIN;
	int32_t t98 = 0;

    t98 = (x841/((x842&x843)>x844));

    if (t98 != -8460) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x853 = INT16_MIN;
	uint64_t x854 = UINT64_MAX;
	uint16_t x855 = 15U;
	uint16_t x856 = 5U;
	int32_t t99 = 5066;

    t99 = (x853/((x854&x855)>x856));

    if (t99 != -32768) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int32_t x877 = 537;
	int64_t x878 = INT64_MAX;
	static volatile int32_t t100 = 1394;

    t100 = (x877/((x878&x879)>x880));

    if (t100 != 537) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x886 = 33U;
	int64_t x887 = -1LL;
	uint8_t x888 = 7U;
	volatile int32_t t101 = INT32_MIN;

    t101 = (x885/((x886&x887)>x888));

    if (t101 != INT32_MIN) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x901 = INT32_MAX;
	int32_t x903 = INT32_MIN;
	uint8_t x904 = UINT8_MAX;
	int32_t t102 = INT32_MAX;

    t102 = (x901/((x902&x903)>x904));

    if (t102 != INT32_MAX) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x915 = 265497392534144518LL;
	int16_t x916 = -1;

    t103 = (x913/((x914&x915)>x916));

    if (t103 != 6) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint32_t x929 = 1741U;
	int32_t x930 = INT32_MAX;
	int8_t x931 = -1;
	uint32_t t104 = 8U;

    t104 = (x929/((x930&x931)>x932));

    if (t104 != 1741U) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint8_t x933 = UINT8_MAX;
	uint64_t x934 = 4070831836LLU;
	static volatile uint64_t x935 = 585318070392390LLU;
	static uint16_t x936 = 44U;
	static int32_t t105 = 133;

    t105 = (x933/((x934&x935)>x936));

    if (t105 != 255) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x942 = UINT16_MAX;
	int64_t x944 = -94LL;
	int32_t t106 = -1;

    t106 = (x941/((x942&x943)>x944));

    if (t106 != 3) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x945 = -1;
	int32_t x947 = -2997;
	int8_t x948 = INT8_MIN;
	int32_t t107 = -15562;

    t107 = (x945/((x946&x947)>x948));

    if (t107 != -1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x973 = 1;
	int32_t x975 = -55169;
	volatile int32_t t108 = 984;

    t108 = (x973/((x974&x975)>x976));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x989 = -1;
	int16_t x990 = INT16_MIN;
	uint8_t x991 = 1U;

    t109 = (x989/((x990&x991)>x992));

    if (t109 != -1) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x997 = -1;
	int8_t x998 = INT8_MAX;
	static int16_t x999 = -1;
	int64_t x1000 = -13LL;

    t110 = (x997/((x998&x999)>x1000));

    if (t110 != -1) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x1001 = 24;
	int32_t x1002 = 3954085;
	volatile uint8_t x1003 = UINT8_MAX;
	uint8_t x1004 = 46U;
	static int32_t t111 = 6;

    t111 = (x1001/((x1002&x1003)>x1004));

    if (t111 != 24) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x1026 = INT8_MIN;
	volatile int64_t x1027 = 7LL;
	volatile int32_t x1028 = INT32_MIN;
	uint32_t t112 = 9604U;

    t112 = (x1025/((x1026&x1027)>x1028));

    if (t112 != 1973099034U) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int8_t x1034 = -1;
	static int64_t x1036 = -8730433531030LL;
	static int64_t t113 = -65110631374288LL;

    t113 = (x1033/((x1034&x1035)>x1036));

    if (t113 != -1003406664LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x1045 = INT32_MAX;
	static int8_t x1046 = 2;
	uint8_t x1047 = UINT8_MAX;
	int32_t x1048 = -4;
	static int32_t t114 = INT32_MAX;

    t114 = (x1045/((x1046&x1047)>x1048));

    if (t114 != INT32_MAX) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x1050 = 3U;
	static int32_t x1051 = -1;
	uint32_t x1052 = 0U;
	int32_t t115 = 1;

    t115 = (x1049/((x1050&x1051)>x1052));

    if (t115 != 191) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile uint64_t x1057 = 101003LLU;
	volatile int64_t x1058 = INT64_MAX;
	int16_t x1059 = -1;
	static volatile uint8_t x1060 = UINT8_MAX;

    t116 = (x1057/((x1058&x1059)>x1060));

    if (t116 != 101003LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x1065 = 138;
	int16_t x1066 = INT16_MAX;
	int32_t x1068 = -1;
	int32_t t117 = 67512719;

    t117 = (x1065/((x1066&x1067)>x1068));

    if (t117 != 138) { NG(); } else { ; }
	
}

void f118(void) {
    	static int32_t x1069 = INT32_MIN;
	int8_t x1070 = INT8_MIN;
	uint16_t x1071 = 6267U;
	int8_t x1072 = -26;
	static int32_t t118 = INT32_MIN;

    t118 = (x1069/((x1070&x1071)>x1072));

    if (t118 != INT32_MIN) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x1082 = 2541758LL;
	int32_t x1083 = -1;
	static int32_t t119 = 9623175;

    t119 = (x1081/((x1082&x1083)>x1084));

    if (t119 != -1) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x1089 = 0;
	int32_t x1090 = -1;
	uint8_t x1091 = 0U;

    t120 = (x1089/((x1090&x1091)>x1092));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x1105 = 0U;
	static uint16_t x1106 = UINT16_MAX;
	int16_t x1107 = -1;
	uint64_t x1108 = 10LLU;
	volatile int32_t t121 = 96305815;

    t121 = (x1105/((x1106&x1107)>x1108));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int8_t x1109 = INT8_MIN;
	volatile int16_t x1110 = INT16_MIN;
	static int8_t x1111 = INT8_MAX;
	volatile int32_t x1112 = -254;
	volatile int32_t t122 = 2973;

    t122 = (x1109/((x1110&x1111)>x1112));

    if (t122 != -128) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x1117 = INT8_MIN;
	static int8_t x1118 = INT8_MIN;
	int32_t x1120 = INT32_MIN;

    t123 = (x1117/((x1118&x1119)>x1120));

    if (t123 != -128) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x1126 = INT8_MIN;
	int16_t x1127 = -1;
	int64_t x1128 = INT64_MIN;
	int32_t t124 = -1;

    t124 = (x1125/((x1126&x1127)>x1128));

    if (t124 != -1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x1129 = INT16_MIN;
	static volatile uint32_t x1130 = 202U;
	uint16_t x1131 = 6U;
	static uint16_t x1132 = 1U;
	volatile int32_t t125 = -46079269;

    t125 = (x1129/((x1130&x1131)>x1132));

    if (t125 != -32768) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x1141 = INT32_MIN;
	static int32_t x1142 = INT32_MAX;
	int16_t x1143 = INT16_MAX;
	int32_t x1144 = -189900142;
	int32_t t126 = INT32_MIN;

    t126 = (x1141/((x1142&x1143)>x1144));

    if (t126 != INT32_MIN) { NG(); } else { ; }
	
}

void f127(void) {
    	static int16_t x1145 = INT16_MIN;
	volatile uint16_t x1146 = UINT16_MAX;
	int32_t x1147 = INT32_MIN;
	volatile int32_t t127 = 167655;

    t127 = (x1145/((x1146&x1147)>x1148));

    if (t127 != -32768) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int32_t x1153 = INT32_MIN;
	int8_t x1154 = -1;
	uint8_t x1155 = 7U;
	int32_t t128 = INT32_MIN;

    t128 = (x1153/((x1154&x1155)>x1156));

    if (t128 != INT32_MIN) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x1179 = INT64_MAX;
	static int8_t x1180 = 10;
	int32_t t129 = -35;

    t129 = (x1177/((x1178&x1179)>x1180));

    if (t129 != -337) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int64_t x1181 = 2018501874338407LL;
	uint8_t x1182 = 2U;
	int16_t x1183 = -1793;
	int64_t x1184 = INT64_MIN;

    t130 = (x1181/((x1182&x1183)>x1184));

    if (t130 != 2018501874338407LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x1187 = -2385;
	static volatile int32_t t131 = 15962;

    t131 = (x1185/((x1186&x1187)>x1188));

    if (t131 != -25536) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint32_t x1189 = 15U;
	int8_t x1190 = -1;
	uint8_t x1191 = UINT8_MAX;
	static volatile uint32_t t132 = 3162U;

    t132 = (x1189/((x1190&x1191)>x1192));

    if (t132 != 15U) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int64_t x1194 = -6392LL;
	uint32_t x1195 = UINT32_MAX;
	volatile int32_t x1196 = -1;
	int64_t t133 = INT64_MIN;

    t133 = (x1193/((x1194&x1195)>x1196));

    if (t133 != INT64_MIN) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x1209 = 1886453U;
	volatile uint8_t x1210 = 1U;
	int32_t x1211 = INT32_MIN;
	int64_t x1212 = INT64_MIN;
	volatile uint32_t t134 = 386680U;

    t134 = (x1209/((x1210&x1211)>x1212));

    if (t134 != 1886453U) { NG(); } else { ; }
	
}

void f135(void) {
    	static int16_t x1218 = 9;
	uint16_t x1219 = 3744U;
	static volatile int8_t x1220 = -2;
	int32_t t135 = -2174;

    t135 = (x1217/((x1218&x1219)>x1220));

    if (t135 != -32768) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile int8_t x1221 = 0;
	volatile uint8_t x1222 = UINT8_MAX;
	int64_t x1223 = -1LL;
	volatile int8_t x1224 = -1;
	static int32_t t136 = -49572;

    t136 = (x1221/((x1222&x1223)>x1224));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x1225 = 21;
	volatile int32_t x1226 = 1332631;
	static int32_t x1227 = -213614447;
	int16_t x1228 = -1;
	static int32_t t137 = 266;

    t137 = (x1225/((x1226&x1227)>x1228));

    if (t137 != 21) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x1230 = INT32_MAX;
	static volatile int8_t x1231 = INT8_MIN;
	volatile int64_t x1232 = -1LL;
	volatile int32_t t138 = -10677;

    t138 = (x1229/((x1230&x1231)>x1232));

    if (t138 != 127) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x1233 = -1;
	int32_t x1234 = INT32_MAX;
	static int64_t x1235 = -1LL;
	int16_t x1236 = 4682;
	volatile int32_t t139 = 143957057;

    t139 = (x1233/((x1234&x1235)>x1236));

    if (t139 != -1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x1245 = INT32_MAX;
	static int64_t x1246 = -574728LL;
	static uint32_t x1247 = 4381515U;
	int64_t x1248 = -47986115539802407LL;

    t140 = (x1245/((x1246&x1247)>x1248));

    if (t140 != INT32_MAX) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x1253 = 509U;
	int64_t x1254 = 62LL;
	int16_t x1256 = INT16_MIN;
	int32_t t141 = -422132;

    t141 = (x1253/((x1254&x1255)>x1256));

    if (t141 != 509) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x1261 = UINT16_MAX;
	uint8_t x1262 = UINT8_MAX;
	static uint16_t x1263 = 102U;
	uint8_t x1264 = 0U;
	int32_t t142 = 1;

    t142 = (x1261/((x1262&x1263)>x1264));

    if (t142 != 65535) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x1278 = INT64_MIN;
	int8_t x1280 = INT8_MIN;
	uint64_t t143 = 36080517815940683LLU;

    t143 = (x1277/((x1278&x1279)>x1280));

    if (t143 != 2859546927352511200LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint32_t x1281 = 14U;
	int64_t x1282 = 6767886731853LL;
	int8_t x1283 = -3;
	volatile int16_t x1284 = INT16_MIN;

    t144 = (x1281/((x1282&x1283)>x1284));

    if (t144 != 14U) { NG(); } else { ; }
	
}

void f145(void) {
    	static int32_t x1285 = -699139049;
	int64_t x1286 = 11327LL;
	int64_t x1287 = -2191785610589LL;
	static int8_t x1288 = INT8_MAX;
	static volatile int32_t t145 = 113;

    t145 = (x1285/((x1286&x1287)>x1288));

    if (t145 != -699139049) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x1289 = INT64_MIN;
	static int32_t x1290 = 18916636;
	static volatile uint32_t x1292 = 39725U;
	static int64_t t146 = INT64_MIN;

    t146 = (x1289/((x1290&x1291)>x1292));

    if (t146 != INT64_MIN) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x1299 = 250065289160LL;
	static int8_t x1300 = INT8_MIN;
	static volatile int64_t t147 = -5LL;

    t147 = (x1297/((x1298&x1299)>x1300));

    if (t147 != 5608LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x1301 = -1LL;
	volatile uint32_t x1302 = 123446014U;
	int8_t x1303 = INT8_MIN;
	int64_t x1304 = -1LL;
	int64_t t148 = 29373121321598564LL;

    t148 = (x1301/((x1302&x1303)>x1304));

    if (t148 != -1LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x1307 = INT64_MAX;
	int8_t x1308 = -1;

    t149 = (x1305/((x1306&x1307)>x1308));

    if (t149 != -128) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x1309 = 654LL;
	volatile int16_t x1310 = -1;
	uint8_t x1311 = UINT8_MAX;
	int64_t t150 = -121801150267183LL;

    t150 = (x1309/((x1310&x1311)>x1312));

    if (t150 != 654LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x1329 = -1LL;
	int64_t x1330 = -126480LL;
	int8_t x1331 = -1;
	int32_t x1332 = -1774163;
	volatile int64_t t151 = -178164699LL;

    t151 = (x1329/((x1330&x1331)>x1332));

    if (t151 != -1LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x1333 = -640;
	volatile uint32_t x1334 = 44400069U;
	volatile uint32_t x1336 = 169U;
	int32_t t152 = -6;

    t152 = (x1333/((x1334&x1335)>x1336));

    if (t152 != -640) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x1337 = 10U;
	int64_t x1339 = 212530516LL;
	int8_t x1340 = -1;
	volatile int32_t t153 = 14;

    t153 = (x1337/((x1338&x1339)>x1340));

    if (t153 != 10) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x1350 = 8879U;
	volatile uint8_t x1351 = UINT8_MAX;
	int16_t x1352 = INT16_MIN;
	int32_t t154 = 1073404672;

    t154 = (x1349/((x1350&x1351)>x1352));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x1378 = 480857U;
	static volatile uint32_t t155 = 92839839U;

    t155 = (x1377/((x1378&x1379)>x1380));

    if (t155 != 860720411U) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x1393 = -1;
	volatile uint16_t x1394 = 8129U;
	uint16_t x1395 = 3528U;
	static volatile int32_t t156 = 1323;

    t156 = (x1393/((x1394&x1395)>x1396));

    if (t156 != -1) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x1397 = INT8_MIN;
	int16_t x1398 = INT16_MIN;
	uint32_t x1399 = UINT32_MAX;

    t157 = (x1397/((x1398&x1399)>x1400));

    if (t157 != -128) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x1401 = 1;
	uint8_t x1402 = 26U;
	uint8_t x1403 = UINT8_MAX;
	int16_t x1404 = -4;
	static volatile int32_t t158 = 3082505;

    t158 = (x1401/((x1402&x1403)>x1404));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x1411 = UINT32_MAX;
	int8_t x1412 = 25;
	static int32_t t159 = -9676908;

    t159 = (x1409/((x1410&x1411)>x1412));

    if (t159 != -128) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x1415 = -6126884195292LL;
	int16_t x1416 = INT16_MAX;

    t160 = (x1413/((x1414&x1415)>x1416));

    if (t160 != -104497477) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x1425 = INT8_MAX;
	int64_t x1426 = 1223423120026618241LL;
	int32_t x1427 = -1;
	uint8_t x1428 = 4U;
	int32_t t161 = 1302215;

    t161 = (x1425/((x1426&x1427)>x1428));

    if (t161 != 127) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x1430 = 31U;
	int16_t x1431 = -1;
	volatile int8_t x1432 = -1;
	uint64_t t162 = 284LLU;

    t162 = (x1429/((x1430&x1431)>x1432));

    if (t162 != 131406293667294654LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	static int8_t x1445 = -6;
	uint16_t x1446 = UINT16_MAX;
	int32_t x1447 = INT32_MAX;
	int64_t x1448 = 1696LL;
	volatile int32_t t163 = 4043;

    t163 = (x1445/((x1446&x1447)>x1448));

    if (t163 != -6) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x1461 = INT16_MAX;
	int8_t x1463 = 22;
	int32_t t164 = 30717975;

    t164 = (x1461/((x1462&x1463)>x1464));

    if (t164 != 32767) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x1473 = INT64_MIN;
	uint16_t x1474 = UINT16_MAX;
	uint64_t x1475 = 2017948137078LLU;
	uint8_t x1476 = 115U;
	int64_t t165 = INT64_MIN;

    t165 = (x1473/((x1474&x1475)>x1476));

    if (t165 != INT64_MIN) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x1489 = 120U;
	int32_t x1490 = 89478;
	int8_t x1491 = INT8_MIN;
	int64_t x1492 = INT64_MIN;
	volatile int32_t t166 = 44850498;

    t166 = (x1489/((x1490&x1491)>x1492));

    if (t166 != 120) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x1497 = -1;
	int16_t x1498 = -881;
	int16_t x1499 = -7;
	static int32_t t167 = -6820694;

    t167 = (x1497/((x1498&x1499)>x1500));

    if (t167 != -1) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x1502 = 6;
	int32_t x1503 = INT32_MIN;
	volatile int32_t x1504 = INT32_MIN;
	volatile int64_t t168 = -9769697999LL;

    t168 = (x1501/((x1502&x1503)>x1504));

    if (t168 != 375633879LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x1505 = INT64_MIN;
	int64_t x1506 = 186LL;
	int32_t x1507 = INT32_MIN;
	static int32_t x1508 = -505;
	static volatile int64_t t169 = INT64_MIN;

    t169 = (x1505/((x1506&x1507)>x1508));

    if (t169 != INT64_MIN) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x1509 = UINT32_MAX;
	volatile int8_t x1510 = 8;
	int64_t x1511 = -2817329LL;
	uint32_t x1512 = 2U;

    t170 = (x1509/((x1510&x1511)>x1512));

    if (t170 != UINT32_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x1517 = 2U;
	int64_t x1518 = INT64_MIN;
	uint64_t x1519 = UINT64_MAX;
	uint64_t x1520 = 213LLU;
	int32_t t171 = -5715108;

    t171 = (x1517/((x1518&x1519)>x1520));

    if (t171 != 2) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x1522 = 4536U;
	static int8_t x1523 = -1;

    t172 = (x1521/((x1522&x1523)>x1524));

    if (t172 != 11948657159LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x1545 = -1LL;
	static int8_t x1546 = INT8_MIN;
	uint16_t x1548 = 89U;
	int64_t t173 = -160490096LL;

    t173 = (x1545/((x1546&x1547)>x1548));

    if (t173 != -1LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x1561 = INT8_MIN;
	int16_t x1564 = -7;
	static int32_t t174 = -68010054;

    t174 = (x1561/((x1562&x1563)>x1564));

    if (t174 != -128) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x1573 = -1LL;
	int16_t x1575 = INT16_MIN;
	volatile uint32_t x1576 = 75036U;
	static volatile int64_t t175 = -36992LL;

    t175 = (x1573/((x1574&x1575)>x1576));

    if (t175 != -1LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint16_t x1597 = 55U;
	int8_t x1598 = INT8_MAX;
	uint16_t x1599 = 2538U;
	static uint8_t x1600 = 1U;
	volatile int32_t t176 = 0;

    t176 = (x1597/((x1598&x1599)>x1600));

    if (t176 != 55) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint64_t x1605 = 12615049747512LLU;
	static volatile int32_t x1606 = INT32_MAX;
	volatile int64_t x1607 = INT64_MAX;
	uint16_t x1608 = 1186U;
	volatile uint64_t t177 = 270040592874020813LLU;

    t177 = (x1605/((x1606&x1607)>x1608));

    if (t177 != 12615049747512LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x1625 = INT64_MIN;
	static uint16_t x1626 = UINT16_MAX;
	uint8_t x1628 = 1U;
	volatile int64_t t178 = INT64_MIN;

    t178 = (x1625/((x1626&x1627)>x1628));

    if (t178 != INT64_MIN) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x1638 = INT16_MAX;
	volatile int64_t x1640 = INT64_MIN;
	static volatile int32_t t179 = -119;

    t179 = (x1637/((x1638&x1639)>x1640));

    if (t179 != 32396) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x1641 = UINT64_MAX;
	uint16_t x1642 = 363U;
	int8_t x1643 = -22;
	volatile uint64_t t180 = UINT64_MAX;

    t180 = (x1641/((x1642&x1643)>x1644));

    if (t180 != UINT64_MAX) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x1645 = INT32_MAX;
	int64_t x1646 = INT64_MAX;
	static int32_t x1647 = INT32_MIN;
	static int64_t x1648 = 48LL;
	volatile int32_t t181 = INT32_MAX;

    t181 = (x1645/((x1646&x1647)>x1648));

    if (t181 != INT32_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint64_t x1661 = 83613132LLU;
	int64_t x1663 = -13084386344737962LL;

    t182 = (x1661/((x1662&x1663)>x1664));

    if (t182 != 83613132LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x1665 = -1;
	int64_t x1666 = -1LL;
	uint32_t x1667 = UINT32_MAX;
	volatile int32_t x1668 = INT32_MIN;

    t183 = (x1665/((x1666&x1667)>x1668));

    if (t183 != -1) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x1685 = INT8_MIN;
	int32_t x1686 = INT32_MIN;
	static int8_t x1687 = INT8_MAX;
	volatile int32_t t184 = 48323210;

    t184 = (x1685/((x1686&x1687)>x1688));

    if (t184 != -128) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x1689 = -1LL;
	static volatile uint16_t x1690 = 2223U;
	volatile int64_t x1691 = INT64_MAX;
	int64_t x1692 = -1LL;
	volatile int64_t t185 = -3136809237605903848LL;

    t185 = (x1689/((x1690&x1691)>x1692));

    if (t185 != -1LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x1693 = UINT32_MAX;
	int32_t x1694 = INT32_MIN;
	int32_t x1695 = -1;
	uint32_t t186 = UINT32_MAX;

    t186 = (x1693/((x1694&x1695)>x1696));

    if (t186 != UINT32_MAX) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x1701 = INT8_MIN;
	int8_t x1703 = INT8_MIN;
	uint8_t x1704 = 1U;
	int32_t t187 = -6649209;

    t187 = (x1701/((x1702&x1703)>x1704));

    if (t187 != -128) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x1710 = 582LLU;
	volatile int16_t x1711 = INT16_MAX;
	static volatile uint8_t x1712 = UINT8_MAX;
	uint64_t t188 = UINT64_MAX;

    t188 = (x1709/((x1710&x1711)>x1712));

    if (t188 != UINT64_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x1721 = INT16_MIN;
	volatile uint8_t x1722 = UINT8_MAX;
	static uint16_t x1723 = UINT16_MAX;
	uint32_t x1724 = 20U;
	volatile int32_t t189 = -3867;

    t189 = (x1721/((x1722&x1723)>x1724));

    if (t189 != -32768) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint8_t x1725 = 80U;
	uint8_t x1726 = 48U;
	int32_t x1727 = INT32_MIN;
	int8_t x1728 = -1;
	int32_t t190 = -21;

    t190 = (x1725/((x1726&x1727)>x1728));

    if (t190 != 80) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint8_t x1730 = UINT8_MAX;
	int16_t x1731 = 83;
	int64_t x1732 = -16299423LL;
	volatile int32_t t191 = -686;

    t191 = (x1729/((x1730&x1731)>x1732));

    if (t191 != -128) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile uint32_t x1741 = 90812U;
	int8_t x1742 = INT8_MIN;
	uint16_t x1743 = UINT16_MAX;
	volatile uint32_t t192 = 28887620U;

    t192 = (x1741/((x1742&x1743)>x1744));

    if (t192 != 90812U) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int8_t x1756 = -2;
	volatile int32_t t193 = 8406;

    t193 = (x1753/((x1754&x1755)>x1756));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x1761 = -162658699;
	int32_t x1762 = INT32_MAX;
	uint16_t x1763 = 8584U;
	volatile int16_t x1764 = -1;
	volatile int32_t t194 = -527481900;

    t194 = (x1761/((x1762&x1763)>x1764));

    if (t194 != -162658699) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int64_t x1769 = -2668116172725915LL;
	uint64_t x1770 = 72251976902733LLU;
	int64_t x1771 = INT64_MAX;
	uint16_t x1772 = UINT16_MAX;
	int64_t t195 = 1646594LL;

    t195 = (x1769/((x1770&x1771)>x1772));

    if (t195 != -2668116172725915LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x1781 = UINT64_MAX;
	int16_t x1782 = 6;
	volatile int16_t x1783 = -14374;
	uint8_t x1784 = 0U;
	volatile uint64_t t196 = UINT64_MAX;

    t196 = (x1781/((x1782&x1783)>x1784));

    if (t196 != UINT64_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x1789 = UINT64_MAX;
	int8_t x1790 = INT8_MAX;
	int16_t x1792 = INT16_MIN;
	uint64_t t197 = UINT64_MAX;

    t197 = (x1789/((x1790&x1791)>x1792));

    if (t197 != UINT64_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	static int32_t x1801 = INT32_MIN;
	int32_t x1804 = INT32_MIN;

    t198 = (x1801/((x1802&x1803)>x1804));

    if (t198 != INT32_MIN) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x1814 = UINT16_MAX;
	int32_t x1815 = INT32_MIN;
	int64_t x1816 = -86392LL;
	int32_t t199 = -836;

    t199 = (x1813/((x1814&x1815)>x1816));

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

