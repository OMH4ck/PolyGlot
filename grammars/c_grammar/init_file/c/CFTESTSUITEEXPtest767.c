
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

static uint64_t x101 = 124750608500911259LLU;
static uint64_t x201 = UINT64_MAX;
uint64_t t1 = 8132014LLU;
uint8_t x357 = 117U;
uint32_t x395 = 93639U;
uint8_t x396 = 1U;
int64_t t3 = 62451LL;
int8_t x404 = 1;
int32_t x411 = INT32_MAX;
uint8_t x744 = 4U;
volatile uint32_t t6 = 79760782U;
static int64_t x810 = 4007843442996504LL;
volatile int8_t x1062 = -1;
static volatile int32_t t9 = -32999969;
int8_t x1229 = INT8_MAX;
int64_t x1232 = 0LL;
volatile uint16_t x1258 = 179U;
static volatile uint64_t t13 = 283122LLU;
uint16_t x1275 = UINT16_MAX;
int32_t t14 = 0;
uint16_t x1366 = 6U;
int32_t x1455 = 131;
int64_t x1495 = INT64_MIN;
uint16_t x1524 = 1U;
int8_t x1534 = -43;
uint16_t x1622 = 29U;
volatile uint32_t x1625 = 2597405U;
int64_t x1626 = -1LL;
volatile int32_t t23 = 195364;
static int32_t x1841 = 7836;
int32_t t24 = -41786;
static int8_t x1993 = 0;
static int8_t x2062 = INT8_MIN;
uint16_t x2125 = UINT16_MAX;
volatile uint16_t x2401 = UINT16_MAX;
int8_t x2577 = 1;
int32_t t32 = -87452;
static uint8_t x2617 = UINT8_MAX;
uint64_t x2618 = 345372765461696366LLU;
static uint64_t x2652 = 2LLU;
int16_t x2971 = INT16_MIN;
int16_t x3099 = INT16_MIN;
int8_t x3188 = 0;
int32_t t38 = 528159920;
volatile int16_t x3268 = 6;
volatile int32_t x3332 = 29;
volatile uint32_t t41 = 52859U;
static int64_t x3337 = 6331LL;
int8_t x3340 = 1;
static volatile int64_t t42 = -46815LL;
int32_t x3487 = -1;
uint8_t x3488 = 2U;
uint16_t x3629 = 51U;
volatile int32_t t44 = 29748;
volatile int64_t t46 = 3679416LL;
uint64_t x3887 = 54742617077615310LLU;
int32_t x3953 = INT32_MAX;
volatile int32_t t48 = INT32_MAX;
int32_t x3983 = INT32_MAX;


void f0(void) {
    	int32_t x102 = -1;
	int64_t x103 = INT64_MIN;
	int16_t x104 = 2;
	uint64_t t0 = 1674LLU;

    t0 = (x101>>((x102/x103)|x104));

    if (t0 != 31187652125227814LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x202 = 195U;
	int64_t x203 = INT64_MIN;
	static int16_t x204 = 1;

    t1 = (x201>>((x202/x203)|x204));

    if (t1 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x358 = -1;
	static int16_t x359 = -1;
	int8_t x360 = 26;
	int32_t t2 = -236720;

    t2 = (x357>>((x358/x359)|x360));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x393 = 66166598480822LL;
	static volatile uint8_t x394 = 10U;

    t3 = (x393>>((x394/x395)|x396));

    if (t3 != 33083299240411LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x401 = 188LLU;
	uint32_t x402 = UINT32_MAX;
	int8_t x403 = -35;
	uint64_t t4 = 865266120194843443LLU;

    t4 = (x401>>((x402/x403)|x404));

    if (t4 != 94LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x409 = 170775805U;
	uint16_t x410 = 33U;
	int8_t x412 = 0;
	static volatile uint32_t t5 = 5085U;

    t5 = (x409>>((x410/x411)|x412));

    if (t5 != 170775805U) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile uint32_t x741 = 1456U;
	uint8_t x742 = UINT8_MAX;
	volatile int64_t x743 = 11886LL;

    t6 = (x741>>((x742/x743)|x744));

    if (t6 != 91U) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint8_t x809 = UINT8_MAX;
	uint64_t x811 = 238361749120707LLU;
	int8_t x812 = 5;
	int32_t t7 = -68091;

    t7 = (x809>>((x810/x811)|x812));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint8_t x885 = 12U;
	static int64_t x886 = 2919LL;
	volatile uint64_t x887 = 3239591748379130LLU;
	int8_t x888 = 17;
	volatile int32_t t8 = -353;

    t8 = (x885>>((x886/x887)|x888));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x1061 = 1U;
	int32_t x1063 = INT32_MAX;
	uint16_t x1064 = 1U;

    t9 = (x1061>>((x1062/x1063)|x1064));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x1137 = 1395LLU;
	volatile uint8_t x1138 = 1U;
	static uint32_t x1139 = 217U;
	static volatile uint8_t x1140 = 0U;
	volatile uint64_t t10 = 8043350893924794641LLU;

    t10 = (x1137>>((x1138/x1139)|x1140));

    if (t10 != 1395LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x1230 = 6178017U;
	static int16_t x1231 = INT16_MIN;
	static volatile int32_t t11 = 162935;

    t11 = (x1229>>((x1230/x1231)|x1232));

    if (t11 != 127) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x1253 = UINT16_MAX;
	int8_t x1254 = INT8_MIN;
	int32_t x1255 = 3308705;
	static int32_t x1256 = 1;
	int32_t t12 = 504252329;

    t12 = (x1253>>((x1254/x1255)|x1256));

    if (t12 != 32767) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x1257 = 975227282994283999LLU;
	int8_t x1259 = INT8_MAX;
	int8_t x1260 = 1;

    t13 = (x1257>>((x1258/x1259)|x1260));

    if (t13 != 487613641497141999LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x1273 = 792U;
	uint8_t x1274 = 0U;
	uint8_t x1276 = 15U;

    t14 = (x1273>>((x1274/x1275)|x1276));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x1365 = 3;
	int16_t x1367 = -46;
	int8_t x1368 = 5;
	int32_t t15 = -220899;

    t15 = (x1365>>((x1366/x1367)|x1368));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x1453 = INT8_MAX;
	uint8_t x1454 = UINT8_MAX;
	int8_t x1456 = 15;
	static volatile int32_t t16 = 396873915;

    t16 = (x1453>>((x1454/x1455)|x1456));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x1493 = UINT32_MAX;
	int32_t x1494 = INT32_MAX;
	volatile int8_t x1496 = 1;
	volatile uint32_t t17 = 127988U;

    t17 = (x1493>>((x1494/x1495)|x1496));

    if (t17 != 2147483647U) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x1521 = UINT16_MAX;
	int8_t x1522 = INT8_MIN;
	uint8_t x1523 = UINT8_MAX;
	volatile int32_t t18 = -2657334;

    t18 = (x1521>>((x1522/x1523)|x1524));

    if (t18 != 32767) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x1533 = 1056482341924138133LL;
	int8_t x1535 = INT8_MIN;
	int8_t x1536 = 1;
	int64_t t19 = 456680763021LL;

    t19 = (x1533>>((x1534/x1535)|x1536));

    if (t19 != 528241170962069066LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x1577 = INT32_MAX;
	int8_t x1578 = 0;
	uint16_t x1579 = 12645U;
	uint16_t x1580 = 13U;
	volatile int32_t t20 = 244903;

    t20 = (x1577>>((x1578/x1579)|x1580));

    if (t20 != 262143) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x1621 = UINT64_MAX;
	uint8_t x1623 = UINT8_MAX;
	uint8_t x1624 = 15U;
	volatile uint64_t t21 = 3174537689394955LLU;

    t21 = (x1621>>((x1622/x1623)|x1624));

    if (t21 != 562949953421311LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x1627 = 5U;
	uint16_t x1628 = 0U;
	uint32_t t22 = 17U;

    t22 = (x1625>>((x1626/x1627)|x1628));

    if (t22 != 2597405U) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x1633 = 62;
	uint64_t x1634 = 168LLU;
	volatile int32_t x1635 = -1;
	static volatile int16_t x1636 = 0;

    t23 = (x1633>>((x1634/x1635)|x1636));

    if (t23 != 62) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x1842 = 0;
	int8_t x1843 = -10;
	int8_t x1844 = 29;

    t24 = (x1841>>((x1842/x1843)|x1844));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x1873 = 2354;
	static uint32_t x1874 = 4635U;
	volatile uint16_t x1875 = UINT16_MAX;
	static uint16_t x1876 = 15U;
	int32_t t25 = -12;

    t25 = (x1873>>((x1874/x1875)|x1876));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x1994 = 67U;
	int64_t x1995 = 581401103LL;
	static int8_t x1996 = 0;
	volatile int32_t t26 = 85969;

    t26 = (x1993>>((x1994/x1995)|x1996));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x2061 = INT32_MAX;
	static uint32_t x2063 = UINT32_MAX;
	volatile int64_t x2064 = 10LL;
	int32_t t27 = -22;

    t27 = (x2061>>((x2062/x2063)|x2064));

    if (t27 != 2097151) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x2126 = 1491U;
	volatile int64_t x2127 = INT64_MIN;
	uint16_t x2128 = 29U;
	int32_t t28 = -741;

    t28 = (x2125>>((x2126/x2127)|x2128));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int64_t x2193 = INT64_MAX;
	int16_t x2194 = -967;
	volatile uint64_t x2195 = UINT64_MAX;
	static int8_t x2196 = 6;
	volatile int64_t t29 = 5123045LL;

    t29 = (x2193>>((x2194/x2195)|x2196));

    if (t29 != 144115188075855871LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x2402 = -15712;
	static int64_t x2403 = INT64_MAX;
	uint16_t x2404 = 9U;
	volatile int32_t t30 = 3;

    t30 = (x2401>>((x2402/x2403)|x2404));

    if (t30 != 127) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x2557 = 9062209330952953865LLU;
	int64_t x2558 = 2864597LL;
	volatile uint64_t x2559 = 21835301730333469LLU;
	volatile uint16_t x2560 = 18U;
	volatile uint64_t t31 = 566442808060847366LLU;

    t31 = (x2557>>((x2558/x2559)|x2560));

    if (t31 != 34569585155307LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x2578 = 1U;
	int64_t x2579 = INT64_MAX;
	uint8_t x2580 = 15U;

    t32 = (x2577>>((x2578/x2579)|x2580));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x2619 = -232714971568LL;
	volatile int8_t x2620 = 1;
	volatile int32_t t33 = 780;

    t33 = (x2617>>((x2618/x2619)|x2620));

    if (t33 != 127) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x2649 = 0LL;
	int8_t x2650 = -1;
	int64_t x2651 = 1101263472268446703LL;
	int64_t t34 = -853LL;

    t34 = (x2649>>((x2650/x2651)|x2652));

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x2969 = 286;
	int32_t x2970 = -223;
	static volatile uint16_t x2972 = 18U;
	int32_t t35 = 337192;

    t35 = (x2969>>((x2970/x2971)|x2972));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x3097 = UINT8_MAX;
	uint8_t x3098 = UINT8_MAX;
	uint8_t x3100 = 14U;
	int32_t t36 = 5334780;

    t36 = (x3097>>((x3098/x3099)|x3100));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x3185 = 27446U;
	uint16_t x3186 = 45U;
	uint8_t x3187 = 3U;
	volatile int32_t t37 = -233546971;

    t37 = (x3185>>((x3186/x3187)|x3188));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x3201 = INT8_MAX;
	int16_t x3202 = INT16_MIN;
	static int64_t x3203 = INT64_MIN;
	int8_t x3204 = 1;

    t38 = (x3201>>((x3202/x3203)|x3204));

    if (t38 != 63) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x3205 = INT64_MAX;
	int16_t x3206 = INT16_MAX;
	int64_t x3207 = INT64_MIN;
	int8_t x3208 = 10;
	static volatile int64_t t39 = 203166203LL;

    t39 = (x3205>>((x3206/x3207)|x3208));

    if (t39 != 9007199254740991LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x3265 = 11;
	uint32_t x3266 = 708795U;
	uint32_t x3267 = 5213356U;
	static volatile int32_t t40 = -4158690;

    t40 = (x3265>>((x3266/x3267)|x3268));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x3329 = 499U;
	int8_t x3330 = -4;
	int16_t x3331 = -116;

    t41 = (x3329>>((x3330/x3331)|x3332));

    if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint16_t x3338 = 6U;
	uint64_t x3339 = UINT64_MAX;

    t42 = (x3337>>((x3338/x3339)|x3340));

    if (t42 != 3165LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint64_t x3485 = UINT64_MAX;
	uint32_t x3486 = 54U;
	volatile uint64_t t43 = 567694LLU;

    t43 = (x3485>>((x3486/x3487)|x3488));

    if (t43 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int8_t x3630 = INT8_MIN;
	volatile uint32_t x3631 = UINT32_MAX;
	volatile uint8_t x3632 = 5U;

    t44 = (x3629>>((x3630/x3631)|x3632));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x3685 = INT16_MAX;
	volatile int8_t x3686 = 6;
	int32_t x3687 = INT32_MIN;
	uint8_t x3688 = 28U;
	volatile int32_t t45 = -201;

    t45 = (x3685>>((x3686/x3687)|x3688));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x3773 = INT64_MAX;
	int16_t x3774 = -920;
	uint16_t x3775 = UINT16_MAX;
	int32_t x3776 = 21;

    t46 = (x3773>>((x3774/x3775)|x3776));

    if (t46 != 4398046511103LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x3885 = INT8_MAX;
	volatile int8_t x3886 = 1;
	uint8_t x3888 = 5U;
	volatile int32_t t47 = 507658;

    t47 = (x3885>>((x3886/x3887)|x3888));

    if (t47 != 3) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x3954 = -1;
	int64_t x3955 = 33857439244928LL;
	int8_t x3956 = 0;

    t48 = (x3953>>((x3954/x3955)|x3956));

    if (t48 != INT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x3981 = 844780506710029LLU;
	static volatile int16_t x3982 = INT16_MAX;
	static volatile int8_t x3984 = 3;
	uint64_t t49 = 1624441094LLU;

    t49 = (x3981>>((x3982/x3983)|x3984));

    if (t49 != 105597563338753LLU) { NG(); } else { ; }
	
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


    return 0;
}

