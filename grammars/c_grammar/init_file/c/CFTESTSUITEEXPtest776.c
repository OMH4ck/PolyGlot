
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

volatile int32_t t1 = -1;
uint64_t x230 = UINT64_MAX;
int8_t x231 = INT8_MIN;
static volatile uint8_t x232 = 1U;
int32_t t3 = 8584;
static uint64_t t5 = 25LLU;
int16_t x647 = -1;
int16_t x803 = INT16_MIN;
uint8_t x853 = UINT8_MAX;
int32_t x855 = INT32_MIN;
int16_t x856 = 9;
static int32_t t8 = -42751056;
int16_t x1037 = 479;
uint8_t x1039 = 53U;
static uint8_t x1042 = UINT8_MAX;
int32_t t11 = -3245845;
uint64_t x1169 = 185304503LLU;
int8_t x1395 = INT8_MIN;
volatile int16_t x1915 = INT16_MIN;
volatile uint8_t x1916 = 15U;
volatile int8_t x2037 = 12;
uint8_t x2038 = 32U;
volatile int32_t t18 = 28769;
int16_t x2150 = 52;
static uint8_t x2152 = 29U;
int32_t t20 = -110;
uint8_t x2301 = 38U;
uint64_t x2303 = UINT64_MAX;
int8_t x2412 = 3;
volatile int32_t t22 = -7045;
uint32_t x2932 = 23U;
int32_t t25 = -1598;
int8_t x2954 = -8;
volatile int32_t t26 = -36;
int16_t x3357 = INT16_MAX;
int64_t x3359 = -288179392280437042LL;
uint8_t x3372 = 3U;
static uint32_t x3642 = 0U;
int32_t x3643 = -1;
static uint32_t x3842 = 775U;
uint8_t x3892 = 4U;
volatile int64_t x4107 = -1LL;
volatile uint64_t t39 = 5051423425309LLU;
static uint64_t x4248 = UINT64_MAX;
uint8_t x4605 = UINT8_MAX;
static int64_t x4608 = -1LL;
uint16_t x4609 = 2U;
int32_t x4693 = 10243;
int32_t x4695 = INT32_MIN;
uint8_t x4696 = 1U;
int8_t x4813 = 1;
volatile int32_t t45 = -90403;
int8_t x5115 = -1;
volatile uint8_t x5241 = 36U;
int32_t t47 = -25450;
int16_t x5503 = 1193;
volatile uint16_t x5554 = 115U;
int8_t x5573 = 5;
uint8_t x5576 = 19U;


void f0(void) {
    	int32_t x109 = 21;
	int32_t x110 = 112;
	volatile int64_t x111 = -6798919LL;
	int32_t x112 = 10;
	volatile int32_t t0 = 62;

    t0 = (x109<<((x110/x111)^x112));

    if (t0 != 21504) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile uint16_t x169 = UINT16_MAX;
	uint32_t x170 = UINT32_MAX;
	int32_t x171 = INT32_MAX;
	uint16_t x172 = 5U;

    t1 = (x169<<((x170/x171)^x172));

    if (t1 != 8388480) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x217 = 7LLU;
	int64_t x218 = INT64_MIN;
	static uint32_t x219 = UINT32_MAX;
	volatile int32_t x220 = INT32_MIN;
	uint64_t t2 = 311851420LLU;

    t2 = (x217<<((x218/x219)^x220));

    if (t2 != 7LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x229 = 783;

    t3 = (x229<<((x230/x231)^x232));

    if (t3 != 783) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint64_t x357 = UINT64_MAX;
	static int8_t x358 = INT8_MIN;
	int16_t x359 = 14258;
	int8_t x360 = 42;
	volatile uint64_t t4 = 20491383748609985LLU;

    t4 = (x357<<((x358/x359)^x360));

    if (t4 != 18446739675663040512LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x449 = 737LLU;
	uint64_t x450 = 371295LLU;
	int64_t x451 = -1LL;
	int16_t x452 = 6;

    t5 = (x449<<((x450/x451)^x452));

    if (t5 != 47168LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile uint32_t x645 = UINT32_MAX;
	int32_t x646 = -1;
	static uint32_t x648 = 7U;
	volatile uint32_t t6 = 257889462U;

    t6 = (x645<<((x646/x647)^x648));

    if (t6 != 4294967232U) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x801 = UINT64_MAX;
	volatile int8_t x802 = -28;
	int64_t x804 = 2LL;
	volatile uint64_t t7 = 3LLU;

    t7 = (x801<<((x802/x803)^x804));

    if (t7 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint16_t x854 = UINT16_MAX;

    t8 = (x853<<((x854/x855)^x856));

    if (t8 != 130560) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x981 = 15;
	static uint8_t x982 = 4U;
	int16_t x983 = -1;
	int8_t x984 = -2;
	int32_t t9 = 496;

    t9 = (x981<<((x982/x983)^x984));

    if (t9 != 60) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x1038 = 1U;
	uint8_t x1040 = 0U;
	volatile int32_t t10 = 1;

    t10 = (x1037<<((x1038/x1039)^x1040));

    if (t10 != 479) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint16_t x1041 = 1U;
	int8_t x1043 = INT8_MIN;
	int8_t x1044 = -1;

    t11 = (x1041<<((x1042/x1043)^x1044));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x1170 = 0U;
	uint16_t x1171 = 43U;
	volatile uint16_t x1172 = 20U;
	uint64_t t12 = 233241LLU;

    t12 = (x1169<<((x1170/x1171)^x1172));

    if (t12 != 194305854537728LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x1393 = 3LLU;
	int16_t x1394 = 806;
	static int16_t x1396 = -1;
	static uint64_t t13 = 1268502286403283940LLU;

    t13 = (x1393<<((x1394/x1395)^x1396));

    if (t13 != 96LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x1613 = 28753075958LLU;
	uint16_t x1614 = 75U;
	volatile int8_t x1615 = INT8_MIN;
	uint8_t x1616 = 21U;
	uint64_t t14 = 5445LLU;

    t14 = (x1613<<((x1614/x1615)^x1616));

    if (t14 != 60299570751471616LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x1913 = 28U;
	int16_t x1914 = 1062;
	int32_t t15 = -717214462;

    t15 = (x1913<<((x1914/x1915)^x1916));

    if (t15 != 917504) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x2039 = 911465473814071120LLU;
	uint8_t x2040 = 3U;
	volatile int32_t t16 = -93273510;

    t16 = (x2037<<((x2038/x2039)^x2040));

    if (t16 != 96) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x2121 = 0;
	uint8_t x2122 = 0U;
	static int16_t x2123 = INT16_MIN;
	volatile int32_t x2124 = 10;
	int32_t t17 = 0;

    t17 = (x2121<<((x2122/x2123)^x2124));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x2129 = INT16_MAX;
	int32_t x2130 = 1;
	int32_t x2131 = -1;
	int32_t x2132 = -1;

    t18 = (x2129<<((x2130/x2131)^x2132));

    if (t18 != 32767) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint32_t x2149 = 43U;
	static int8_t x2151 = INT8_MAX;
	static volatile uint32_t t19 = 1012U;

    t19 = (x2149<<((x2150/x2151)^x2152));

    if (t19 != 1610612736U) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x2261 = 487U;
	int32_t x2262 = 160;
	volatile uint64_t x2263 = 92096LLU;
	uint8_t x2264 = 7U;

    t20 = (x2261<<((x2262/x2263)^x2264));

    if (t20 != 62336) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x2302 = 15528852284LLU;
	int16_t x2304 = 21;
	volatile int32_t t21 = -114;

    t21 = (x2301<<((x2302/x2303)^x2304));

    if (t21 != 79691776) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x2409 = 4;
	int8_t x2410 = INT8_MAX;
	uint64_t x2411 = 134LLU;

    t22 = (x2409<<((x2410/x2411)^x2412));

    if (t22 != 32) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x2413 = 661031U;
	static int16_t x2414 = -12;
	uint16_t x2415 = 422U;
	volatile uint32_t x2416 = 15U;
	uint32_t t23 = 9913U;

    t23 = (x2413<<((x2414/x2415)^x2416));

    if (t23 != 185827328U) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint16_t x2553 = UINT16_MAX;
	uint16_t x2554 = UINT16_MAX;
	int64_t x2555 = -740438685254LL;
	uint16_t x2556 = 1U;
	volatile int32_t t24 = -1;

    t24 = (x2553<<((x2554/x2555)^x2556));

    if (t24 != 131070) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint8_t x2929 = UINT8_MAX;
	int32_t x2930 = INT32_MAX;
	static uint64_t x2931 = 142875904946151259LLU;

    t25 = (x2929<<((x2930/x2931)^x2932));

    if (t25 != 2139095040) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint8_t x2953 = 5U;
	volatile int16_t x2955 = INT16_MIN;
	volatile int8_t x2956 = 0;

    t26 = (x2953<<((x2954/x2955)^x2956));

    if (t26 != 5) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x2965 = UINT8_MAX;
	int8_t x2966 = INT8_MIN;
	int64_t x2967 = INT64_MAX;
	uint8_t x2968 = 4U;
	volatile int32_t t27 = -353904;

    t27 = (x2965<<((x2966/x2967)^x2968));

    if (t27 != 4080) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t x3221 = 16558872;
	int16_t x3222 = -449;
	int8_t x3223 = INT8_MAX;
	int32_t x3224 = -1;
	int32_t t28 = -62918064;

    t28 = (x3221<<((x3222/x3223)^x3224));

    if (t28 != 66235488) { NG(); } else { ; }
	
}

void f29(void) {
    	static int8_t x3358 = INT8_MIN;
	volatile int8_t x3360 = 1;
	volatile int32_t t29 = 150685;

    t29 = (x3357<<((x3358/x3359)^x3360));

    if (t29 != 65534) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint64_t x3369 = 354362580030LLU;
	int16_t x3370 = 0;
	int32_t x3371 = INT32_MIN;
	volatile uint64_t t30 = 67581628665LLU;

    t30 = (x3369<<((x3370/x3371)^x3372));

    if (t30 != 2834900640240LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x3449 = INT16_MAX;
	int16_t x3450 = INT16_MIN;
	int16_t x3451 = INT16_MAX;
	static int16_t x3452 = -1;
	int32_t t31 = -1;

    t31 = (x3449<<((x3450/x3451)^x3452));

    if (t31 != 32767) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x3625 = 0;
	static int32_t x3626 = INT32_MIN;
	static uint64_t x3627 = UINT64_MAX;
	static uint16_t x3628 = 20U;
	int32_t t32 = 1412624;

    t32 = (x3625<<((x3626/x3627)^x3628));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint64_t x3641 = 910170LLU;
	int32_t x3644 = 1;
	volatile uint64_t t33 = 118271LLU;

    t33 = (x3641<<((x3642/x3643)^x3644));

    if (t33 != 1820340LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x3801 = 14;
	static uint32_t x3802 = UINT32_MAX;
	volatile int8_t x3803 = INT8_MIN;
	int32_t x3804 = 15;
	int32_t t34 = -20;

    t34 = (x3801<<((x3802/x3803)^x3804));

    if (t34 != 229376) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x3817 = 1U;
	static volatile int32_t x3818 = INT32_MIN;
	volatile int64_t x3819 = INT64_MIN;
	volatile uint8_t x3820 = 25U;
	int32_t t35 = -5414;

    t35 = (x3817<<((x3818/x3819)^x3820));

    if (t35 != 33554432) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint16_t x3841 = 4U;
	uint32_t x3843 = 2451U;
	uint32_t x3844 = 4U;
	int32_t t36 = -104;

    t36 = (x3841<<((x3842/x3843)^x3844));

    if (t36 != 64) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint32_t x3849 = 412U;
	volatile uint64_t x3850 = UINT64_MAX;
	int32_t x3851 = 1;
	int32_t x3852 = -1;
	volatile uint32_t t37 = 2U;

    t37 = (x3849<<((x3850/x3851)^x3852));

    if (t37 != 412U) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x3889 = UINT8_MAX;
	int8_t x3890 = INT8_MIN;
	int32_t x3891 = INT32_MIN;
	int32_t t38 = 7497;

    t38 = (x3889<<((x3890/x3891)^x3892));

    if (t38 != 4080) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x4105 = 250420821106626LLU;
	int8_t x4106 = -1;
	uint8_t x4108 = 42U;

    t39 = (x4105<<((x4106/x4107)^x4108));

    if (t39 != 12753648786945867776LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int16_t x4113 = INT16_MAX;
	uint32_t x4114 = 6140U;
	int16_t x4115 = -1;
	uint8_t x4116 = 1U;
	static int32_t t40 = -3494;

    t40 = (x4113<<((x4114/x4115)^x4116));

    if (t40 != 65534) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint64_t x4245 = UINT64_MAX;
	int16_t x4246 = 3543;
	int8_t x4247 = INT8_MIN;
	uint64_t t41 = 11LLU;

    t41 = (x4245<<((x4246/x4247)^x4248));

    if (t41 != 18446744073642442752LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int16_t x4606 = -1;
	int8_t x4607 = 1;
	int32_t t42 = -240461375;

    t42 = (x4605<<((x4606/x4607)^x4608));

    if (t42 != 255) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint64_t x4610 = 9LLU;
	volatile uint32_t x4611 = 24U;
	uint16_t x4612 = 0U;
	volatile int32_t t43 = -63086;

    t43 = (x4609<<((x4610/x4611)^x4612));

    if (t43 != 2) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x4694 = 96025938;
	volatile int32_t t44 = -1358;

    t44 = (x4693<<((x4694/x4695)^x4696));

    if (t44 != 20486) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x4814 = UINT8_MAX;
	static int8_t x4815 = INT8_MAX;
	int16_t x4816 = 0;

    t45 = (x4813<<((x4814/x4815)^x4816));

    if (t45 != 4) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x5113 = 2984U;
	int8_t x5114 = INT8_MAX;
	volatile int8_t x5116 = INT8_MIN;
	volatile int32_t t46 = 43;

    t46 = (x5113<<((x5114/x5115)^x5116));

    if (t46 != 5968) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x5242 = -14;
	int16_t x5243 = INT16_MIN;
	uint16_t x5244 = 4U;

    t47 = (x5241<<((x5242/x5243)^x5244));

    if (t47 != 576) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x5381 = INT8_MAX;
	uint16_t x5382 = UINT16_MAX;
	volatile int16_t x5383 = INT16_MIN;
	static uint32_t x5384 = UINT32_MAX;
	int32_t t48 = -51276;

    t48 = (x5381<<((x5382/x5383)^x5384));

    if (t48 != 127) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x5501 = 23133LLU;
	volatile uint16_t x5502 = UINT16_MAX;
	uint64_t x5504 = 0LLU;
	static uint64_t t49 = 561031555337747LLU;

    t49 = (x5501<<((x5502/x5503)^x5504));

    if (t49 != 10898711098236600320LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x5553 = 1904684525617LLU;
	volatile uint8_t x5555 = 30U;
	uint16_t x5556 = 0U;
	volatile uint64_t t50 = 884884631LLU;

    t50 = (x5553<<((x5554/x5555)^x5556));

    if (t50 != 15237476204936LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x5574 = UINT8_MAX;
	int32_t x5575 = INT32_MIN;
	int32_t t51 = 6759;

    t51 = (x5573<<((x5574/x5575)^x5576));

    if (t51 != 2621440) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x5593 = 375U;
	int8_t x5594 = -31;
	volatile uint16_t x5595 = 247U;
	uint8_t x5596 = 2U;
	volatile uint32_t t52 = 244131660U;

    t52 = (x5593<<((x5594/x5595)^x5596));

    if (t52 != 1500U) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x5601 = 15751277684865LLU;
	uint32_t x5602 = 43U;
	int64_t x5603 = INT64_MAX;
	uint8_t x5604 = 6U;
	volatile uint64_t t53 = 93LLU;

    t53 = (x5601<<((x5602/x5603)^x5604));

    if (t53 != 1008081771831360LLU) { NG(); } else { ; }
	
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


    return 0;
}

