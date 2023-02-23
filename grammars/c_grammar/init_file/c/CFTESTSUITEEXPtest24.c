
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

static int16_t x2 = 12017;
uint16_t x19 = 24225U;
uint16_t x20 = UINT16_MAX;
volatile int32_t t2 = 0;
int64_t x23 = INT64_MIN;
static int32_t x33 = INT32_MIN;
uint64_t x34 = UINT64_MAX;
volatile uint16_t x35 = UINT16_MAX;
volatile uint8_t x51 = UINT8_MAX;
static int32_t x57 = INT32_MAX;
int32_t x58 = INT32_MIN;
int32_t x61 = -2247188;
volatile int32_t x68 = 95;
int8_t x69 = -1;
int64_t x70 = INT64_MIN;
volatile int32_t t10 = 7531;
int64_t x81 = INT64_MIN;
volatile uint64_t x83 = 34170LLU;
uint32_t x84 = 5662U;
volatile int32_t t12 = 5134524;
int8_t x95 = INT8_MIN;
volatile int8_t x96 = INT8_MIN;
static volatile int64_t x104 = -1LL;
int32_t x111 = INT32_MIN;
static int32_t t17 = 5919036;
volatile int32_t x125 = INT32_MIN;
uint32_t x130 = 927737U;
int8_t x157 = INT8_MIN;
int16_t x159 = INT16_MIN;
volatile int32_t t24 = -2;
static uint32_t x163 = UINT32_MAX;
volatile int32_t x175 = INT32_MIN;
static int64_t x176 = 50570618895LL;
int16_t x181 = INT16_MAX;
static volatile int16_t x182 = -23;
int16_t x183 = -1;
uint16_t x186 = 385U;
uint8_t x187 = 74U;
uint8_t x198 = UINT8_MAX;
int8_t x203 = INT8_MIN;
int32_t t35 = 344;
volatile uint32_t x211 = 487728U;
int32_t x212 = INT32_MIN;
int32_t t36 = -570290934;
int8_t x215 = INT8_MIN;
static int8_t x233 = -14;
int64_t x234 = INT64_MIN;
volatile int32_t t43 = -691;
volatile int64_t x258 = INT64_MAX;
int32_t x261 = -7753;
int64_t x264 = -1LL;
static uint64_t x274 = UINT64_MAX;
uint8_t x275 = 5U;
static volatile int16_t x276 = -239;
int8_t x278 = INT8_MIN;
int32_t t48 = 103329037;
int16_t x282 = -1;
int8_t x299 = 1;
volatile int32_t t51 = -792741;
volatile int32_t x301 = INT32_MIN;
volatile int32_t t53 = 199442;
int64_t x313 = -46855LL;
int8_t x331 = INT8_MAX;
uint32_t x332 = 9U;
uint8_t x343 = 4U;
int64_t x347 = INT64_MIN;
int16_t x353 = -1;
volatile int32_t t62 = 32341;
uint16_t x360 = 14960U;
int8_t x370 = INT8_MAX;
volatile uint64_t x374 = 9480927280558372LLU;
static int64_t x380 = INT64_MAX;
int64_t x392 = -1778224762LL;
volatile int32_t t69 = -15187370;
uint8_t x393 = UINT8_MAX;
uint16_t x395 = 8367U;
static int32_t x398 = 2;
volatile int32_t x400 = -1;
int32_t x402 = -1;
static volatile int16_t x409 = 236;
volatile int8_t x410 = 0;
static uint32_t x411 = UINT32_MAX;
static int64_t x412 = INT64_MAX;
volatile int64_t x419 = -5221642659207860LL;
int64_t x464 = 10521273224241133LL;
uint32_t x472 = UINT32_MAX;
static volatile int16_t x478 = 0;
int32_t t87 = -21658;
int32_t t89 = -87129698;
int64_t x494 = INT64_MIN;
static uint64_t x505 = 16718418426193823LLU;
uint64_t x509 = 258LLU;
int32_t x510 = INT32_MIN;
uint32_t x511 = 145580270U;
int32_t t92 = 419402207;
static volatile uint16_t x514 = UINT16_MAX;
static uint8_t x516 = 120U;
static volatile int32_t t93 = 186669076;
uint32_t x521 = 52736U;
volatile int64_t x526 = -1LL;
uint32_t x527 = 1916295U;
static uint8_t x533 = 2U;
static volatile int64_t x536 = INT64_MIN;
volatile int32_t t97 = -2354;
static int8_t x538 = INT8_MIN;
int8_t x552 = 20;
volatile int32_t t101 = 29;
volatile int8_t x560 = -1;
volatile int64_t x562 = INT64_MAX;
static uint32_t x564 = 9U;
static uint8_t x574 = 8U;
uint16_t x576 = UINT16_MAX;
int32_t x579 = -1;
volatile int8_t x580 = INT8_MAX;
int32_t x587 = -1;
int16_t x588 = INT16_MIN;
int32_t x589 = INT32_MIN;
volatile uint8_t x601 = 26U;
int64_t x603 = INT64_MIN;
static int64_t x604 = INT64_MIN;
static int64_t x614 = -1LL;
static int8_t x622 = INT8_MAX;
int16_t x627 = INT16_MIN;
int8_t x629 = INT8_MIN;
int16_t x633 = INT16_MIN;
int32_t x634 = -494559360;
int32_t x639 = INT32_MIN;
int32_t t119 = 112049433;
int8_t x653 = -2;
volatile uint8_t x664 = 0U;
static int32_t x666 = -20205864;
int8_t x669 = -1;
static int16_t x671 = -1;
int32_t x672 = -1;
int64_t x692 = INT64_MAX;
int16_t x702 = INT16_MAX;
static int32_t x710 = 3562;
int8_t x713 = -1;
uint16_t x726 = 1611U;
int16_t x748 = INT16_MAX;
volatile uint64_t x756 = 352677414033356LLU;
volatile int64_t x762 = -1LL;
uint16_t x765 = 10018U;
uint32_t x767 = UINT32_MAX;
static int32_t t141 = -119;
static int64_t x782 = INT64_MIN;
static volatile int8_t x784 = INT8_MIN;
volatile int16_t x787 = -13856;
int64_t x793 = INT64_MIN;
uint64_t x798 = 7605039641885954LLU;
static int32_t t147 = -239423;
int32_t x801 = INT32_MIN;
int32_t t149 = 95312772;
int16_t x825 = -1;
static int64_t x828 = -1LL;
volatile uint16_t x832 = UINT16_MAX;
int32_t t153 = -109420;
int8_t x836 = INT8_MIN;
int32_t x859 = -1;
uint64_t x862 = 2841279695712452LLU;
int32_t t159 = 100;
int32_t t161 = 11861158;
int32_t x876 = INT32_MIN;
int16_t x901 = INT16_MAX;
static volatile uint16_t x902 = 20590U;
uint16_t x910 = 1U;
int64_t x927 = -1LL;
int32_t x928 = INT32_MIN;
uint16_t x930 = 2219U;
volatile int32_t t169 = -15737;
static int8_t x938 = 12;
int32_t t170 = 105;
int16_t x941 = INT16_MIN;
volatile int32_t t172 = -12;
int8_t x949 = 1;
static int32_t t174 = -96171649;
volatile int32_t x960 = INT32_MIN;
int8_t x964 = 1;
volatile int32_t t176 = 84829;
static uint8_t x977 = 125U;
static volatile uint16_t x979 = 0U;
volatile int32_t t179 = 0;
static int16_t x983 = -1;
static uint32_t x988 = UINT32_MAX;
volatile int32_t t181 = -16;
int8_t x991 = -1;
static int32_t t183 = -421;
int64_t x998 = -1LL;
volatile int64_t x999 = -420155461LL;
int16_t x1003 = -1;
static volatile int32_t t186 = -105342761;
uint32_t x1014 = 44826080U;
int8_t x1018 = INT8_MIN;
uint8_t x1026 = 32U;
volatile int64_t x1028 = -1LL;
volatile int32_t t190 = -265081;
uint64_t x1035 = 554417893LLU;
static volatile int8_t x1043 = INT8_MAX;
int8_t x1045 = -1;
int8_t x1046 = -1;
int64_t x1061 = INT64_MIN;
volatile int32_t x1063 = 2180827;
static volatile uint64_t x1064 = 78006899445853LLU;


void f0(void) {
    	int32_t x1 = -23883527;
	volatile uint64_t x3 = 22LLU;
	int64_t x4 = INT64_MAX;
	int32_t t0 = -1656731;

    t0 = (x1<=((x2+x3)-x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x9 = INT8_MAX;
	int8_t x10 = INT8_MIN;
	uint32_t x11 = 125726898U;
	volatile int8_t x12 = INT8_MIN;
	int32_t t1 = -4004966;

    t1 = (x9<=((x10+x11)-x12));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x17 = UINT64_MAX;
	volatile int16_t x18 = INT16_MAX;

    t2 = (x17<=((x18+x19)-x20));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int32_t x21 = INT32_MIN;
	static int16_t x22 = INT16_MAX;
	int64_t x24 = -1LL;
	volatile int32_t t3 = 676;

    t3 = (x21<=((x22+x23)-x24));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint16_t x29 = UINT16_MAX;
	static volatile uint64_t x30 = UINT64_MAX;
	static int16_t x31 = INT16_MIN;
	int16_t x32 = INT16_MAX;
	volatile int32_t t4 = -624;

    t4 = (x29<=((x30+x31)-x32));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x36 = INT16_MIN;
	int32_t t5 = 14238697;

    t5 = (x33<=((x34+x35)-x36));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x49 = -1;
	uint8_t x50 = UINT8_MAX;
	static volatile uint16_t x52 = 0U;
	static volatile int32_t t6 = -1;

    t6 = (x49<=((x50+x51)-x52));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint32_t x59 = 69859463U;
	volatile int16_t x60 = INT16_MIN;
	volatile int32_t t7 = 6362;

    t7 = (x57<=((x58+x59)-x60));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x62 = INT8_MIN;
	uint64_t x63 = 1LLU;
	static int8_t x64 = 3;
	int32_t t8 = 579032424;

    t8 = (x61<=((x62+x63)-x64));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x65 = INT64_MIN;
	int16_t x66 = -1;
	uint16_t x67 = 12337U;
	int32_t t9 = 6799965;

    t9 = (x65<=((x66+x67)-x68));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x71 = UINT64_MAX;
	static int32_t x72 = INT32_MAX;

    t10 = (x69<=((x70+x71)-x72));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x82 = INT64_MIN;
	static int32_t t11 = -113558;

    t11 = (x81<=((x82+x83)-x84));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x85 = INT16_MIN;
	uint16_t x86 = 9U;
	volatile int8_t x87 = INT8_MIN;
	int8_t x88 = -25;

    t12 = (x85<=((x86+x87)-x88));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x89 = -1;
	int64_t x90 = 77356879LL;
	int8_t x91 = INT8_MIN;
	int32_t x92 = 8381;
	int32_t t13 = 15;

    t13 = (x89<=((x90+x91)-x92));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x93 = 2U;
	static int8_t x94 = 0;
	int32_t t14 = -2900;

    t14 = (x93<=((x94+x95)-x96));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x97 = INT64_MIN;
	static int32_t x98 = 15599452;
	uint8_t x99 = 55U;
	int8_t x100 = 1;
	volatile int32_t t15 = 6903;

    t15 = (x97<=((x98+x99)-x100));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x101 = -15;
	static uint32_t x102 = UINT32_MAX;
	int32_t x103 = 3;
	volatile int32_t t16 = 986893;

    t16 = (x101<=((x102+x103)-x104));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x109 = INT32_MAX;
	volatile int32_t x110 = INT32_MAX;
	int16_t x112 = INT16_MAX;

    t17 = (x109<=((x110+x111)-x112));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x117 = INT16_MIN;
	volatile int32_t x118 = 112;
	int16_t x119 = INT16_MAX;
	static uint32_t x120 = 234541325U;
	volatile int32_t t18 = -18;

    t18 = (x117<=((x118+x119)-x120));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x126 = 97;
	uint16_t x127 = 42U;
	uint16_t x128 = UINT16_MAX;
	int32_t t19 = 94360;

    t19 = (x125<=((x126+x127)-x128));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x129 = -1;
	int8_t x131 = 0;
	uint32_t x132 = 3803435U;
	volatile int32_t t20 = -1;

    t20 = (x129<=((x130+x131)-x132));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x133 = -17766150906LL;
	int64_t x134 = -8032550391LL;
	volatile uint8_t x135 = UINT8_MAX;
	int32_t x136 = INT32_MIN;
	static volatile int32_t t21 = -1479;

    t21 = (x133<=((x134+x135)-x136));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x137 = 1;
	uint32_t x138 = 114485U;
	int32_t x139 = -1;
	static uint64_t x140 = 2LLU;
	volatile int32_t t22 = 3976668;

    t22 = (x137<=((x138+x139)-x140));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x141 = 645092413144912037LL;
	volatile uint64_t x142 = 107046514LLU;
	int16_t x143 = INT16_MIN;
	int32_t x144 = -1;
	int32_t t23 = 0;

    t23 = (x141<=((x142+x143)-x144));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile uint64_t x158 = UINT64_MAX;
	int32_t x160 = -3;

    t24 = (x157<=((x158+x159)-x160));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x161 = INT32_MIN;
	int64_t x162 = INT64_MIN;
	static uint8_t x164 = UINT8_MAX;
	volatile int32_t t25 = 1;

    t25 = (x161<=((x162+x163)-x164));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint64_t x169 = 104276112491328366LLU;
	volatile uint8_t x170 = 123U;
	int8_t x171 = -2;
	uint64_t x172 = 79208383LLU;
	volatile int32_t t26 = 24973525;

    t26 = (x169<=((x170+x171)-x172));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x173 = 45U;
	int32_t x174 = 13;
	volatile int32_t t27 = -654591729;

    t27 = (x173<=((x174+x175)-x176));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x177 = INT8_MIN;
	volatile uint64_t x178 = UINT64_MAX;
	int32_t x179 = INT32_MIN;
	int32_t x180 = -1;
	int32_t t28 = -521073637;

    t28 = (x177<=((x178+x179)-x180));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x184 = 3133U;
	volatile int32_t t29 = -35;

    t29 = (x181<=((x182+x183)-x184));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x185 = INT32_MAX;
	int32_t x188 = -1315;
	int32_t t30 = -61;

    t30 = (x185<=((x186+x187)-x188));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x189 = 13692LL;
	int64_t x190 = 0LL;
	uint8_t x191 = UINT8_MAX;
	uint16_t x192 = 5U;
	volatile int32_t t31 = 1033542;

    t31 = (x189<=((x190+x191)-x192));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint8_t x193 = UINT8_MAX;
	static uint64_t x194 = UINT64_MAX;
	static int8_t x195 = INT8_MAX;
	int32_t x196 = -21052781;
	int32_t t32 = -2315;

    t32 = (x193<=((x194+x195)-x196));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x197 = 11U;
	static int16_t x199 = 128;
	int64_t x200 = 7540188038754159LL;
	volatile int32_t t33 = 2;

    t33 = (x197<=((x198+x199)-x200));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x201 = INT8_MIN;
	uint16_t x202 = 1832U;
	uint8_t x204 = 4U;
	volatile int32_t t34 = 60;

    t34 = (x201<=((x202+x203)-x204));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x205 = 1;
	volatile int16_t x206 = -1;
	int32_t x207 = 8529799;
	uint32_t x208 = UINT32_MAX;

    t35 = (x205<=((x206+x207)-x208));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint64_t x209 = 56719525161LLU;
	int16_t x210 = 7938;

    t36 = (x209<=((x210+x211)-x212));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x213 = INT64_MIN;
	uint64_t x214 = UINT64_MAX;
	volatile int16_t x216 = -13;
	int32_t t37 = 59155256;

    t37 = (x213<=((x214+x215)-x216));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x217 = 30;
	uint8_t x218 = UINT8_MAX;
	static int8_t x219 = INT8_MIN;
	static uint8_t x220 = 3U;
	int32_t t38 = 1002206834;

    t38 = (x217<=((x218+x219)-x220));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x225 = INT32_MIN;
	static int8_t x226 = 46;
	static uint64_t x227 = 3153895600090LLU;
	volatile uint16_t x228 = 3U;
	volatile int32_t t39 = 15402;

    t39 = (x225<=((x226+x227)-x228));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x235 = INT64_MAX;
	static int16_t x236 = INT16_MIN;
	volatile int32_t t40 = 47612404;

    t40 = (x233<=((x234+x235)-x236));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x237 = INT32_MIN;
	int64_t x238 = -1LL;
	uint32_t x239 = UINT32_MAX;
	uint32_t x240 = UINT32_MAX;
	int32_t t41 = 9769338;

    t41 = (x237<=((x238+x239)-x240));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x245 = INT8_MAX;
	uint8_t x246 = UINT8_MAX;
	static uint64_t x247 = UINT64_MAX;
	uint8_t x248 = UINT8_MAX;
	volatile int32_t t42 = -28;

    t42 = (x245<=((x246+x247)-x248));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x253 = -2817;
	volatile uint32_t x254 = 2022619U;
	volatile int16_t x255 = INT16_MAX;
	int16_t x256 = -1;

    t43 = (x253<=((x254+x255)-x256));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x257 = INT16_MIN;
	static int64_t x259 = INT64_MIN;
	int8_t x260 = -13;
	volatile int32_t t44 = -49;

    t44 = (x257<=((x258+x259)-x260));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x262 = -1;
	static uint16_t x263 = UINT16_MAX;
	int32_t t45 = 53235964;

    t45 = (x261<=((x262+x263)-x264));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x265 = 3378738555791714708LL;
	static int16_t x266 = INT16_MIN;
	uint8_t x267 = UINT8_MAX;
	uint8_t x268 = UINT8_MAX;
	int32_t t46 = 424927;

    t46 = (x265<=((x266+x267)-x268));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint64_t x273 = UINT64_MAX;
	volatile int32_t t47 = 85321679;

    t47 = (x273<=((x274+x275)-x276));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x277 = INT64_MIN;
	static uint64_t x279 = 6733044580LLU;
	int32_t x280 = -10422;

    t48 = (x277<=((x278+x279)-x280));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x281 = INT8_MAX;
	int16_t x283 = INT16_MIN;
	static uint64_t x284 = 88LLU;
	int32_t t49 = -309944;

    t49 = (x281<=((x282+x283)-x284));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x289 = INT8_MAX;
	uint16_t x290 = 23U;
	int16_t x291 = -1;
	int32_t x292 = -3978;
	volatile int32_t t50 = 4029;

    t50 = (x289<=((x290+x291)-x292));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x297 = INT64_MIN;
	uint8_t x298 = 115U;
	uint8_t x300 = UINT8_MAX;

    t51 = (x297<=((x298+x299)-x300));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int8_t x302 = INT8_MIN;
	uint64_t x303 = 2465310486855513LLU;
	uint16_t x304 = UINT16_MAX;
	int32_t t52 = 102;

    t52 = (x301<=((x302+x303)-x304));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x309 = 1U;
	int16_t x310 = INT16_MIN;
	int64_t x311 = 7323624659LL;
	static int8_t x312 = -1;

    t53 = (x309<=((x310+x311)-x312));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x314 = 1805201U;
	int16_t x315 = -1;
	uint64_t x316 = UINT64_MAX;
	int32_t t54 = 168312098;

    t54 = (x313<=((x314+x315)-x316));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x317 = -33LL;
	int32_t x318 = -1;
	int64_t x319 = -1LL;
	volatile int32_t x320 = -186931;
	volatile int32_t t55 = -3;

    t55 = (x317<=((x318+x319)-x320));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x321 = -1;
	static int8_t x322 = INT8_MAX;
	int8_t x323 = INT8_MAX;
	uint32_t x324 = 212558016U;
	static volatile int32_t t56 = 0;

    t56 = (x321<=((x322+x323)-x324));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x329 = UINT32_MAX;
	int64_t x330 = -1LL;
	int32_t t57 = -60;

    t57 = (x329<=((x330+x331)-x332));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x333 = INT16_MAX;
	int16_t x334 = INT16_MIN;
	static int64_t x335 = 129LL;
	volatile int16_t x336 = 154;
	volatile int32_t t58 = 3;

    t58 = (x333<=((x334+x335)-x336));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x341 = 0;
	int8_t x342 = -1;
	static volatile int16_t x344 = INT16_MIN;
	volatile int32_t t59 = -183345323;

    t59 = (x341<=((x342+x343)-x344));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x345 = -31;
	uint64_t x346 = UINT64_MAX;
	int8_t x348 = 6;
	int32_t t60 = 15705992;

    t60 = (x345<=((x346+x347)-x348));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x349 = UINT16_MAX;
	uint16_t x350 = 3U;
	uint8_t x351 = UINT8_MAX;
	uint16_t x352 = UINT16_MAX;
	volatile int32_t t61 = 1;

    t61 = (x349<=((x350+x351)-x352));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x354 = INT16_MAX;
	int32_t x355 = 834492464;
	static int8_t x356 = INT8_MAX;

    t62 = (x353<=((x354+x355)-x356));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x357 = 45U;
	int16_t x358 = INT16_MAX;
	int64_t x359 = -1LL;
	volatile int32_t t63 = 65393;

    t63 = (x357<=((x358+x359)-x360));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x361 = 1032123177084LL;
	volatile uint16_t x362 = UINT16_MAX;
	int16_t x363 = 2;
	volatile uint64_t x364 = UINT64_MAX;
	volatile int32_t t64 = 92758;

    t64 = (x361<=((x362+x363)-x364));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x369 = INT64_MIN;
	int8_t x371 = INT8_MAX;
	uint32_t x372 = UINT32_MAX;
	static int32_t t65 = 685166367;

    t65 = (x369<=((x370+x371)-x372));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x373 = INT32_MIN;
	uint8_t x375 = 1U;
	static int8_t x376 = INT8_MIN;
	int32_t t66 = 26703;

    t66 = (x373<=((x374+x375)-x376));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x377 = 1625378455265859152LLU;
	int16_t x378 = 1;
	int32_t x379 = 739135;
	int32_t t67 = -26;

    t67 = (x377<=((x378+x379)-x380));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x385 = UINT16_MAX;
	int8_t x386 = 0;
	int32_t x387 = -479066917;
	static uint32_t x388 = UINT32_MAX;
	int32_t t68 = -41;

    t68 = (x385<=((x386+x387)-x388));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x389 = -1;
	int32_t x390 = INT32_MIN;
	int16_t x391 = INT16_MAX;

    t69 = (x389<=((x390+x391)-x392));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x394 = INT32_MIN;
	static volatile int64_t x396 = -48318864569LL;
	volatile int32_t t70 = -2086214;

    t70 = (x393<=((x394+x395)-x396));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x397 = -923749490;
	volatile int8_t x399 = INT8_MAX;
	int32_t t71 = 12857590;

    t71 = (x397<=((x398+x399)-x400));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x401 = INT8_MIN;
	int64_t x403 = INT64_MAX;
	int64_t x404 = 106182733368LL;
	int32_t t72 = 73;

    t72 = (x401<=((x402+x403)-x404));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t t73 = 609463173;

    t73 = (x409<=((x410+x411)-x412));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x413 = INT64_MIN;
	uint32_t x414 = 881U;
	volatile int8_t x415 = -1;
	int8_t x416 = 43;
	int32_t t74 = -10;

    t74 = (x413<=((x414+x415)-x416));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x417 = INT32_MAX;
	int8_t x418 = -1;
	static volatile uint32_t x420 = UINT32_MAX;
	int32_t t75 = 499277;

    t75 = (x417<=((x418+x419)-x420));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x421 = -1;
	static int8_t x422 = -1;
	int16_t x423 = 57;
	static int16_t x424 = INT16_MIN;
	int32_t t76 = -699551778;

    t76 = (x421<=((x422+x423)-x424));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t x425 = -164850771;
	int32_t x426 = -75964;
	volatile uint32_t x427 = 56473U;
	uint32_t x428 = UINT32_MAX;
	int32_t t77 = -988330;

    t77 = (x425<=((x426+x427)-x428));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x429 = UINT16_MAX;
	int16_t x430 = 181;
	uint16_t x431 = 270U;
	volatile uint32_t x432 = 4U;
	volatile int32_t t78 = 26069852;

    t78 = (x429<=((x430+x431)-x432));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x433 = -1;
	int8_t x434 = 3;
	uint64_t x435 = 113680534958168LLU;
	int8_t x436 = -2;
	int32_t t79 = -354586878;

    t79 = (x433<=((x434+x435)-x436));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x437 = INT16_MIN;
	int16_t x438 = 27;
	int8_t x439 = INT8_MIN;
	int16_t x440 = INT16_MIN;
	int32_t t80 = 400521571;

    t80 = (x437<=((x438+x439)-x440));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x441 = INT8_MIN;
	static uint64_t x442 = UINT64_MAX;
	static int64_t x443 = INT64_MAX;
	volatile int16_t x444 = -1;
	volatile int32_t t81 = 469;

    t81 = (x441<=((x442+x443)-x444));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x453 = -1LL;
	int8_t x454 = INT8_MAX;
	volatile uint8_t x455 = 68U;
	uint8_t x456 = 29U;
	static int32_t t82 = 1323;

    t82 = (x453<=((x454+x455)-x456));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x461 = INT16_MAX;
	int64_t x462 = INT64_MIN;
	uint64_t x463 = UINT64_MAX;
	static int32_t t83 = -5;

    t83 = (x461<=((x462+x463)-x464));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x465 = 3601;
	volatile int8_t x466 = INT8_MAX;
	int16_t x467 = 1240;
	uint32_t x468 = 6U;
	volatile int32_t t84 = 155095;

    t84 = (x465<=((x466+x467)-x468));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x469 = INT16_MIN;
	uint32_t x470 = 3U;
	int8_t x471 = -1;
	int32_t t85 = -30;

    t85 = (x469<=((x470+x471)-x472));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x477 = INT16_MIN;
	static uint16_t x479 = UINT16_MAX;
	volatile int64_t x480 = 376108231LL;
	int32_t t86 = 39237;

    t86 = (x477<=((x478+x479)-x480));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x481 = UINT8_MAX;
	static int16_t x482 = 1;
	uint64_t x483 = 391LLU;
	int32_t x484 = 179988;

    t87 = (x481<=((x482+x483)-x484));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x485 = INT32_MIN;
	static uint8_t x486 = UINT8_MAX;
	volatile int32_t x487 = INT32_MIN;
	volatile uint16_t x488 = 4U;
	volatile int32_t t88 = -1;

    t88 = (x485<=((x486+x487)-x488));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int16_t x489 = -1496;
	int64_t x490 = -3638613228313438014LL;
	int16_t x491 = 3386;
	uint64_t x492 = 1794082267LLU;

    t89 = (x489<=((x490+x491)-x492));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile uint16_t x493 = 0U;
	uint16_t x495 = UINT16_MAX;
	uint8_t x496 = 9U;
	volatile int32_t t90 = -21819;

    t90 = (x493<=((x494+x495)-x496));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x506 = 26549791062740246LL;
	volatile int8_t x507 = 0;
	volatile uint8_t x508 = 1U;
	volatile int32_t t91 = 962715;

    t91 = (x505<=((x506+x507)-x508));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x512 = -1;

    t92 = (x509<=((x510+x511)-x512));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x513 = -1;
	uint64_t x515 = 5254LLU;

    t93 = (x513<=((x514+x515)-x516));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int16_t x517 = -1;
	int8_t x518 = -1;
	static int16_t x519 = 674;
	volatile uint16_t x520 = 975U;
	int32_t t94 = -2763068;

    t94 = (x517<=((x518+x519)-x520));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static int8_t x522 = -3;
	uint16_t x523 = 8905U;
	int64_t x524 = -12951994807LL;
	int32_t t95 = 27788;

    t95 = (x521<=((x522+x523)-x524));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x525 = 0U;
	static uint16_t x528 = UINT16_MAX;
	int32_t t96 = 1509;

    t96 = (x525<=((x526+x527)-x528));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x534 = 1U;
	uint64_t x535 = UINT64_MAX;

    t97 = (x533<=((x534+x535)-x536));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x537 = -1LL;
	uint64_t x539 = 217220LLU;
	volatile int64_t x540 = -1LL;
	static volatile int32_t t98 = -713;

    t98 = (x537<=((x538+x539)-x540));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x541 = INT8_MIN;
	int64_t x542 = -1LL;
	static uint8_t x543 = 92U;
	volatile int16_t x544 = INT16_MIN;
	static volatile int32_t t99 = 270;

    t99 = (x541<=((x542+x543)-x544));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x545 = INT8_MIN;
	int16_t x546 = INT16_MAX;
	int64_t x547 = 18803861937LL;
	uint64_t x548 = UINT64_MAX;
	volatile int32_t t100 = -3015067;

    t100 = (x545<=((x546+x547)-x548));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x549 = UINT16_MAX;
	static uint32_t x550 = 145820436U;
	int8_t x551 = INT8_MIN;

    t101 = (x549<=((x550+x551)-x552));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static int64_t x553 = -10LL;
	uint32_t x554 = UINT32_MAX;
	int16_t x555 = 13762;
	static uint32_t x556 = 234U;
	volatile int32_t t102 = 14;

    t102 = (x553<=((x554+x555)-x556));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint64_t x557 = 547923764310LLU;
	int16_t x558 = INT16_MAX;
	uint64_t x559 = UINT64_MAX;
	int32_t t103 = 45728241;

    t103 = (x557<=((x558+x559)-x560));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x561 = -1;
	int16_t x563 = INT16_MIN;
	volatile int32_t t104 = 2924329;

    t104 = (x561<=((x562+x563)-x564));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x569 = UINT8_MAX;
	int8_t x570 = INT8_MIN;
	int64_t x571 = -1LL;
	int32_t x572 = INT32_MIN;
	volatile int32_t t105 = 848753;

    t105 = (x569<=((x570+x571)-x572));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x573 = UINT64_MAX;
	int32_t x575 = -1;
	int32_t t106 = -232;

    t106 = (x573<=((x574+x575)-x576));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int64_t x577 = INT64_MIN;
	static int16_t x578 = -1;
	int32_t t107 = 6;

    t107 = (x577<=((x578+x579)-x580));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x585 = 37577U;
	static int32_t x586 = -1;
	static volatile int32_t t108 = -35464;

    t108 = (x585<=((x586+x587)-x588));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x590 = 11;
	uint64_t x591 = 82171LLU;
	volatile int32_t x592 = INT32_MIN;
	int32_t t109 = -689215;

    t109 = (x589<=((x590+x591)-x592));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x602 = UINT64_MAX;
	volatile int32_t t110 = -95;

    t110 = (x601<=((x602+x603)-x604));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static int64_t x613 = INT64_MIN;
	int32_t x615 = 1;
	uint32_t x616 = 24U;
	int32_t t111 = 3372245;

    t111 = (x613<=((x614+x615)-x616));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x617 = -1;
	volatile int16_t x618 = 14;
	int16_t x619 = 403;
	int16_t x620 = 3032;
	static int32_t t112 = 1455899;

    t112 = (x617<=((x618+x619)-x620));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x621 = 1U;
	uint64_t x623 = UINT64_MAX;
	uint64_t x624 = 35604332LLU;
	int32_t t113 = -14958723;

    t113 = (x621<=((x622+x623)-x624));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int32_t x625 = 18;
	int64_t x626 = -11112638LL;
	static int64_t x628 = 2123072498233606489LL;
	volatile int32_t t114 = 13;

    t114 = (x625<=((x626+x627)-x628));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x630 = 61850198972839041LL;
	int8_t x631 = INT8_MIN;
	static int32_t x632 = 478761;
	int32_t t115 = 112;

    t115 = (x629<=((x630+x631)-x632));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x635 = 25429U;
	int64_t x636 = INT64_MIN;
	volatile int32_t t116 = -3;

    t116 = (x633<=((x634+x635)-x636));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x637 = UINT64_MAX;
	volatile int32_t x638 = 28427;
	int64_t x640 = 88353471777779046LL;
	int32_t t117 = 1;

    t117 = (x637<=((x638+x639)-x640));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int8_t x641 = INT8_MIN;
	static int8_t x642 = INT8_MIN;
	int8_t x643 = INT8_MIN;
	static int64_t x644 = 240943514709840914LL;
	int32_t t118 = 25932;

    t118 = (x641<=((x642+x643)-x644));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x649 = 1952196370571200LLU;
	static int64_t x650 = -6742290802LL;
	static volatile int8_t x651 = 8;
	uint8_t x652 = 24U;

    t119 = (x649<=((x650+x651)-x652));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x654 = 814U;
	int16_t x655 = 2;
	volatile int32_t x656 = 887;
	int32_t t120 = 1;

    t120 = (x653<=((x654+x655)-x656));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile int32_t x661 = INT32_MIN;
	static uint32_t x662 = UINT32_MAX;
	static int32_t x663 = INT32_MIN;
	volatile int32_t t121 = -399;

    t121 = (x661<=((x662+x663)-x664));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x665 = INT32_MIN;
	int16_t x667 = INT16_MIN;
	int16_t x668 = INT16_MAX;
	int32_t t122 = -25588188;

    t122 = (x665<=((x666+x667)-x668));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x670 = INT8_MAX;
	volatile int32_t t123 = 104644;

    t123 = (x669<=((x670+x671)-x672));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x673 = INT8_MAX;
	uint32_t x674 = 283792967U;
	int8_t x675 = INT8_MIN;
	int32_t x676 = INT32_MIN;
	volatile int32_t t124 = -8490096;

    t124 = (x673<=((x674+x675)-x676));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x677 = INT8_MAX;
	int32_t x678 = 9720;
	volatile uint8_t x679 = UINT8_MAX;
	int32_t x680 = INT32_MAX;
	int32_t t125 = 0;

    t125 = (x677<=((x678+x679)-x680));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x689 = INT32_MIN;
	volatile uint64_t x690 = 143899010848LLU;
	volatile int64_t x691 = INT64_MIN;
	volatile int32_t t126 = 9132;

    t126 = (x689<=((x690+x691)-x692));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x701 = INT8_MIN;
	uint8_t x703 = 6U;
	int8_t x704 = -1;
	int32_t t127 = 7;

    t127 = (x701<=((x702+x703)-x704));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x705 = INT64_MAX;
	uint32_t x706 = UINT32_MAX;
	int8_t x707 = INT8_MIN;
	int32_t x708 = INT32_MIN;
	volatile int32_t t128 = 0;

    t128 = (x705<=((x706+x707)-x708));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x709 = -79669615;
	volatile int32_t x711 = 99469997;
	int64_t x712 = -1LL;
	int32_t t129 = 7245;

    t129 = (x709<=((x710+x711)-x712));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x714 = -29;
	uint32_t x715 = 14930U;
	static uint64_t x716 = UINT64_MAX;
	int32_t t130 = -20393;

    t130 = (x713<=((x714+x715)-x716));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t x721 = -248529;
	int16_t x722 = 0;
	int16_t x723 = INT16_MIN;
	uint32_t x724 = 1507315063U;
	volatile int32_t t131 = 18081;

    t131 = (x721<=((x722+x723)-x724));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x725 = 7092471092590404LLU;
	int64_t x727 = 275780016LL;
	volatile int8_t x728 = INT8_MIN;
	int32_t t132 = 3;

    t132 = (x725<=((x726+x727)-x728));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x737 = INT8_MIN;
	static int16_t x738 = -1;
	uint32_t x739 = UINT32_MAX;
	uint64_t x740 = UINT64_MAX;
	int32_t t133 = -58;

    t133 = (x737<=((x738+x739)-x740));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x741 = UINT64_MAX;
	static volatile int64_t x742 = -1LL;
	int8_t x743 = 1;
	int64_t x744 = -1LL;
	int32_t t134 = 388;

    t134 = (x741<=((x742+x743)-x744));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x745 = 2298560U;
	volatile uint16_t x746 = 264U;
	static int32_t x747 = 20548311;
	static int32_t t135 = 13272458;

    t135 = (x745<=((x746+x747)-x748));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x749 = INT16_MAX;
	int32_t x750 = -1;
	int16_t x751 = INT16_MIN;
	volatile uint32_t x752 = 25051U;
	int32_t t136 = -3;

    t136 = (x749<=((x750+x751)-x752));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x753 = 1;
	volatile uint32_t x754 = UINT32_MAX;
	int8_t x755 = 29;
	int32_t t137 = -628420;

    t137 = (x753<=((x754+x755)-x756));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x757 = UINT64_MAX;
	volatile uint64_t x758 = UINT64_MAX;
	uint64_t x759 = UINT64_MAX;
	uint16_t x760 = 31U;
	static int32_t t138 = -159;

    t138 = (x757<=((x758+x759)-x760));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x761 = 32;
	int64_t x763 = -1LL;
	uint64_t x764 = 3530995LLU;
	volatile int32_t t139 = -2;

    t139 = (x761<=((x762+x763)-x764));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x766 = 9U;
	static uint8_t x768 = 48U;
	volatile int32_t t140 = -101685811;

    t140 = (x765<=((x766+x767)-x768));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x769 = 10U;
	uint16_t x770 = 2066U;
	volatile int64_t x771 = -1LL;
	int16_t x772 = INT16_MIN;

    t141 = (x769<=((x770+x771)-x772));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x777 = INT8_MAX;
	int32_t x778 = 5;
	uint8_t x779 = UINT8_MAX;
	static uint32_t x780 = 47097315U;
	volatile int32_t t142 = 15225;

    t142 = (x777<=((x778+x779)-x780));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x781 = 1U;
	uint8_t x783 = 1U;
	static int32_t t143 = -275;

    t143 = (x781<=((x782+x783)-x784));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x785 = INT16_MIN;
	volatile uint8_t x786 = 68U;
	uint16_t x788 = UINT16_MAX;
	int32_t t144 = 52;

    t144 = (x785<=((x786+x787)-x788));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint16_t x789 = 40U;
	int64_t x790 = -1LL;
	int16_t x791 = -901;
	uint32_t x792 = 5284506U;
	volatile int32_t t145 = 7;

    t145 = (x789<=((x790+x791)-x792));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x794 = 1U;
	int8_t x795 = INT8_MAX;
	static volatile int32_t x796 = 2;
	int32_t t146 = -21;

    t146 = (x793<=((x794+x795)-x796));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x797 = -1;
	static int32_t x799 = 34363;
	static int64_t x800 = -398309173035547LL;

    t147 = (x797<=((x798+x799)-x800));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x802 = INT32_MIN;
	int16_t x803 = 431;
	uint64_t x804 = 1201558067LLU;
	volatile int32_t t148 = -124823301;

    t148 = (x801<=((x802+x803)-x804));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint8_t x809 = 16U;
	uint32_t x810 = 14421U;
	uint16_t x811 = UINT16_MAX;
	uint8_t x812 = UINT8_MAX;

    t149 = (x809<=((x810+x811)-x812));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x813 = 3533384946LLU;
	volatile int64_t x814 = INT64_MIN;
	volatile uint8_t x815 = 8U;
	volatile int64_t x816 = 0LL;
	volatile int32_t t150 = 6650;

    t150 = (x813<=((x814+x815)-x816));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x821 = INT64_MIN;
	int16_t x822 = 1962;
	uint16_t x823 = UINT16_MAX;
	uint64_t x824 = UINT64_MAX;
	volatile int32_t t151 = 61371;

    t151 = (x821<=((x822+x823)-x824));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x826 = INT64_MIN;
	static int16_t x827 = INT16_MAX;
	int32_t t152 = -1932;

    t152 = (x825<=((x826+x827)-x828));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x829 = 242;
	uint64_t x830 = 2122066697686283650LLU;
	int16_t x831 = -29;

    t153 = (x829<=((x830+x831)-x832));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x833 = -1LL;
	static volatile int8_t x834 = INT8_MAX;
	uint32_t x835 = 4308381U;
	int32_t t154 = 2501561;

    t154 = (x833<=((x834+x835)-x836));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x845 = 810637382255284LL;
	int64_t x846 = INT64_MAX;
	volatile int8_t x847 = -30;
	uint16_t x848 = 1008U;
	int32_t t155 = -1163;

    t155 = (x845<=((x846+x847)-x848));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x849 = 81279U;
	static volatile int64_t x850 = -1LL;
	uint32_t x851 = UINT32_MAX;
	static int16_t x852 = -8;
	volatile int32_t t156 = -236;

    t156 = (x849<=((x850+x851)-x852));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x853 = UINT16_MAX;
	static uint8_t x854 = 1U;
	static int8_t x855 = 1;
	int16_t x856 = INT16_MAX;
	static int32_t t157 = -244210399;

    t157 = (x853<=((x854+x855)-x856));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x857 = -3734732234651533139LL;
	static uint16_t x858 = 8U;
	int64_t x860 = -1LL;
	int32_t t158 = -178;

    t158 = (x857<=((x858+x859)-x860));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x861 = 1;
	int32_t x863 = 1;
	int32_t x864 = -1;

    t159 = (x861<=((x862+x863)-x864));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x865 = -1LL;
	static int8_t x866 = -1;
	uint64_t x867 = 116715LLU;
	int16_t x868 = INT16_MAX;
	volatile int32_t t160 = -319395156;

    t160 = (x865<=((x866+x867)-x868));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x869 = 4;
	volatile int16_t x870 = INT16_MAX;
	int64_t x871 = INT64_MIN;
	static int64_t x872 = INT64_MIN;

    t161 = (x869<=((x870+x871)-x872));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int64_t x873 = INT64_MAX;
	volatile uint8_t x874 = 81U;
	static int64_t x875 = INT64_MIN;
	static int32_t t162 = 1;

    t162 = (x873<=((x874+x875)-x876));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x881 = INT16_MIN;
	int8_t x882 = INT8_MIN;
	uint8_t x883 = 16U;
	uint8_t x884 = UINT8_MAX;
	volatile int32_t t163 = 6262;

    t163 = (x881<=((x882+x883)-x884));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x903 = UINT64_MAX;
	static uint64_t x904 = 4823922496LLU;
	int32_t t164 = -767765;

    t164 = (x901<=((x902+x903)-x904));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x905 = 8;
	int16_t x906 = INT16_MAX;
	int32_t x907 = -128713;
	uint8_t x908 = 8U;
	volatile int32_t t165 = -455205;

    t165 = (x905<=((x906+x907)-x908));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint32_t x909 = 463531500U;
	int64_t x911 = -15488993841578LL;
	static int32_t x912 = INT32_MIN;
	volatile int32_t t166 = -322;

    t166 = (x909<=((x910+x911)-x912));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x925 = -1;
	uint8_t x926 = 20U;
	volatile int32_t t167 = 1434576;

    t167 = (x925<=((x926+x927)-x928));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int8_t x929 = 1;
	static int16_t x931 = -1;
	int16_t x932 = -1;
	int32_t t168 = -3;

    t168 = (x929<=((x930+x931)-x932));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x933 = INT8_MAX;
	uint64_t x934 = UINT64_MAX;
	int8_t x935 = 44;
	static volatile uint16_t x936 = UINT16_MAX;

    t169 = (x933<=((x934+x935)-x936));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x937 = 32457LL;
	static int16_t x939 = INT16_MAX;
	int8_t x940 = -1;

    t170 = (x937<=((x938+x939)-x940));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x942 = INT64_MIN;
	uint16_t x943 = UINT16_MAX;
	volatile int32_t x944 = INT32_MIN;
	volatile int32_t t171 = -12;

    t171 = (x941<=((x942+x943)-x944));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x945 = INT8_MIN;
	uint16_t x946 = UINT16_MAX;
	int64_t x947 = INT64_MIN;
	volatile uint8_t x948 = 0U;

    t172 = (x945<=((x946+x947)-x948));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x950 = INT64_MAX;
	uint64_t x951 = 2582713LLU;
	uint16_t x952 = 0U;
	static int32_t t173 = -3477;

    t173 = (x949<=((x950+x951)-x952));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x953 = INT16_MAX;
	int16_t x954 = -5;
	static int8_t x955 = INT8_MIN;
	static volatile int64_t x956 = -2185836246337LL;

    t174 = (x953<=((x954+x955)-x956));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x957 = 2U;
	uint64_t x958 = UINT64_MAX;
	volatile int64_t x959 = INT64_MIN;
	volatile int32_t t175 = -7;

    t175 = (x957<=((x958+x959)-x960));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x961 = UINT16_MAX;
	volatile int16_t x962 = 0;
	int64_t x963 = INT64_MAX;

    t176 = (x961<=((x962+x963)-x964));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x965 = INT8_MIN;
	uint8_t x966 = UINT8_MAX;
	uint8_t x967 = 8U;
	static int16_t x968 = INT16_MIN;
	volatile int32_t t177 = 6227989;

    t177 = (x965<=((x966+x967)-x968));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x973 = -1;
	static uint32_t x974 = 96U;
	uint64_t x975 = 974412543457085981LLU;
	int64_t x976 = -1LL;
	int32_t t178 = 3793114;

    t178 = (x973<=((x974+x975)-x976));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x978 = INT64_MIN;
	int64_t x980 = -9136198184LL;

    t179 = (x977<=((x978+x979)-x980));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x981 = INT32_MIN;
	uint64_t x982 = UINT64_MAX;
	static uint64_t x984 = UINT64_MAX;
	volatile int32_t t180 = -394634;

    t180 = (x981<=((x982+x983)-x984));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x985 = INT8_MIN;
	uint16_t x986 = 1605U;
	int8_t x987 = INT8_MAX;

    t181 = (x985<=((x986+x987)-x988));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x989 = -90178LL;
	uint8_t x990 = UINT8_MAX;
	static uint8_t x992 = 24U;
	static volatile int32_t t182 = 0;

    t182 = (x989<=((x990+x991)-x992));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x993 = 288980924U;
	int16_t x994 = INT16_MIN;
	int64_t x995 = -1521208680803399213LL;
	volatile int8_t x996 = INT8_MAX;

    t183 = (x993<=((x994+x995)-x996));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint8_t x997 = 3U;
	uint32_t x1000 = UINT32_MAX;
	volatile int32_t t184 = -10186786;

    t184 = (x997<=((x998+x999)-x1000));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x1001 = INT8_MIN;
	int32_t x1002 = INT32_MAX;
	uint32_t x1004 = 736548U;
	volatile int32_t t185 = 10675628;

    t185 = (x1001<=((x1002+x1003)-x1004));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x1005 = -1LL;
	volatile uint16_t x1006 = UINT16_MAX;
	uint64_t x1007 = UINT64_MAX;
	int64_t x1008 = -10361LL;

    t186 = (x1005<=((x1006+x1007)-x1008));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x1013 = INT64_MAX;
	uint64_t x1015 = UINT64_MAX;
	static uint8_t x1016 = 78U;
	volatile int32_t t187 = 13733512;

    t187 = (x1013<=((x1014+x1015)-x1016));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x1017 = 223096;
	int16_t x1019 = -88;
	int8_t x1020 = INT8_MIN;
	static int32_t t188 = -52;

    t188 = (x1017<=((x1018+x1019)-x1020));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x1021 = UINT64_MAX;
	volatile int32_t x1022 = -1;
	int64_t x1023 = 3065201721307LL;
	uint16_t x1024 = UINT16_MAX;
	static volatile int32_t t189 = -67583411;

    t189 = (x1021<=((x1022+x1023)-x1024));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x1025 = 3LLU;
	static int64_t x1027 = -1LL;

    t190 = (x1025<=((x1026+x1027)-x1028));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x1029 = INT32_MIN;
	uint8_t x1030 = 3U;
	uint8_t x1031 = 2U;
	int8_t x1032 = INT8_MAX;
	volatile int32_t t191 = 4371;

    t191 = (x1029<=((x1030+x1031)-x1032));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1033 = -2;
	volatile int64_t x1034 = -1LL;
	int64_t x1036 = -1LL;
	static volatile int32_t t192 = -2;

    t192 = (x1033<=((x1034+x1035)-x1036));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x1037 = INT64_MIN;
	int16_t x1038 = -1;
	volatile uint16_t x1039 = 362U;
	uint16_t x1040 = 28460U;
	volatile int32_t t193 = -1328;

    t193 = (x1037<=((x1038+x1039)-x1040));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile int16_t x1041 = INT16_MIN;
	uint32_t x1042 = UINT32_MAX;
	uint8_t x1044 = UINT8_MAX;
	volatile int32_t t194 = 6760024;

    t194 = (x1041<=((x1042+x1043)-x1044));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint64_t x1047 = 1311082LLU;
	uint64_t x1048 = UINT64_MAX;
	volatile int32_t t195 = -32172836;

    t195 = (x1045<=((x1046+x1047)-x1048));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x1053 = 2214U;
	uint64_t x1054 = UINT64_MAX;
	int64_t x1055 = -118708LL;
	static volatile int16_t x1056 = INT16_MIN;
	volatile int32_t t196 = -433055046;

    t196 = (x1053<=((x1054+x1055)-x1056));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x1057 = -7188;
	static int16_t x1058 = INT16_MIN;
	static uint32_t x1059 = 213411484U;
	volatile int16_t x1060 = 0;
	int32_t t197 = 3479;

    t197 = (x1057<=((x1058+x1059)-x1060));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x1062 = 96U;
	int32_t t198 = 104358371;

    t198 = (x1061<=((x1062+x1063)-x1064));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x1065 = 1;
	static int8_t x1066 = INT8_MIN;
	uint64_t x1067 = UINT64_MAX;
	uint32_t x1068 = 29053724U;
	volatile int32_t t199 = -34092;

    t199 = (x1065<=((x1066+x1067)-x1068));

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

