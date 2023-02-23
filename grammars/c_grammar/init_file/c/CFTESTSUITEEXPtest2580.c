
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

uint8_t x2 = 14U;
int64_t x3 = 223766749226LL;
uint8_t x6 = UINT8_MAX;
int16_t x7 = -4182;
volatile int64_t t1 = 72LL;
int8_t x10 = -1;
static int32_t x17 = 7;
uint64_t x23 = UINT64_MAX;
uint64_t x24 = 189801LLU;
static volatile uint64_t t5 = 22702516257LLU;
volatile int16_t x29 = INT16_MAX;
uint32_t t7 = 19653U;
int64_t x38 = INT64_MIN;
int64_t t8 = -7942837LL;
volatile int32_t x49 = INT32_MIN;
int16_t x51 = INT16_MIN;
int8_t x53 = INT8_MAX;
int32_t x81 = -1;
static uint32_t x82 = 580661965U;
uint32_t t12 = 2U;
static int8_t x111 = INT8_MIN;
int8_t x118 = INT8_MAX;
volatile int16_t x121 = 40;
volatile int32_t x123 = INT32_MIN;
int64_t x134 = 46875LL;
volatile int32_t x146 = INT32_MIN;
volatile int32_t x181 = -117825253;
int8_t x183 = INT8_MIN;
static volatile int32_t x188 = INT32_MIN;
static volatile uint64_t t25 = 136346LLU;
static int32_t x195 = -805662;
volatile uint32_t x204 = 2239U;
static volatile int64_t x208 = 3LL;
static volatile int64_t t29 = 312LL;
int8_t x216 = 44;
int32_t t30 = -1467;
volatile int8_t x217 = -1;
uint32_t x218 = 506164917U;
static volatile int16_t x221 = 0;
static uint16_t x234 = 5828U;
int8_t x250 = -1;
static volatile int64_t t35 = -12452LL;
static uint16_t x290 = 0U;
int32_t x315 = INT32_MIN;
volatile int16_t x319 = INT16_MIN;
volatile int64_t x330 = -1LL;
int16_t x331 = INT16_MIN;
static uint16_t x349 = 731U;
int64_t x357 = INT64_MAX;
uint64_t t53 = 720460702LLU;
uint16_t x374 = 0U;
static volatile int8_t x376 = INT8_MIN;
int64_t x379 = INT64_MIN;
int64_t x382 = -197708083321939602LL;
static int16_t x393 = -2674;
uint64_t x394 = 1030LLU;
uint64_t t57 = 27LLU;
volatile int16_t x409 = INT16_MIN;
volatile int16_t x419 = 1;
uint16_t x431 = 7907U;
int8_t x433 = INT8_MIN;
volatile int64_t x436 = -17LL;
int64_t x451 = -5LL;
int64_t x465 = INT64_MIN;
uint16_t x466 = 25U;
uint32_t x474 = 13U;
static int8_t x476 = -1;
volatile uint32_t t71 = 6934U;
int8_t x488 = INT8_MAX;
volatile int32_t x495 = INT32_MIN;
static volatile int64_t t76 = 178236725135935LL;
int16_t x511 = INT16_MIN;
int64_t x521 = -1LL;
volatile int16_t x524 = INT16_MIN;
volatile int8_t x530 = INT8_MAX;
int32_t x531 = 690;
int8_t x533 = -1;
volatile int32_t t83 = -6039;
static int64_t x554 = INT64_MIN;
int32_t x587 = -3;
int16_t x601 = 116;
int16_t x603 = INT16_MIN;
static int8_t x608 = INT8_MIN;
int64_t x610 = INT64_MIN;
int16_t x612 = -1;
volatile int32_t t96 = -12385;
static volatile int64_t x662 = 1790LL;
uint64_t x669 = UINT64_MAX;
volatile uint64_t x672 = 2574200739LLU;
int8_t x674 = INT8_MIN;
uint8_t x677 = UINT8_MAX;
volatile uint64_t t102 = 314054227447509LLU;
uint32_t x686 = 0U;
uint64_t x687 = 23308945LLU;
volatile uint16_t x688 = 1758U;
int32_t x694 = -1;
int16_t x696 = INT16_MIN;
static volatile uint8_t x697 = 1U;
uint64_t x700 = 67279731104387297LLU;
uint16_t x708 = 1672U;
int32_t t109 = 21359295;
volatile int64_t x709 = INT64_MAX;
static uint32_t x716 = 5U;
volatile uint32_t t111 = 195129436U;
static volatile int64_t x737 = -1LL;
int64_t t113 = -130979LL;
uint64_t t114 = 8256LLU;
int64_t t116 = -1169647003351529LL;
volatile int8_t x757 = INT8_MIN;
int32_t x758 = -504821861;
volatile uint64_t x760 = 5LLU;
int64_t x761 = -710254153LL;
int8_t x763 = -1;
int32_t x766 = -28310;
int64_t x771 = -1LL;
int64_t x820 = -1LL;
int16_t x837 = 3;
int64_t x840 = -66LL;
int8_t x843 = 0;
uint32_t x844 = 927254U;
static volatile uint32_t t128 = 34277954U;
uint8_t x845 = 2U;
uint64_t x846 = 2162001374LLU;
volatile uint16_t x849 = 1989U;
static int8_t x854 = 2;
int16_t x855 = INT16_MIN;
int32_t x868 = INT32_MIN;
volatile int64_t t133 = 267286069LL;
int8_t x893 = INT8_MIN;
uint64_t x894 = 48481LLU;
volatile uint64_t t136 = 7LLU;
uint16_t x899 = 23U;
volatile uint32_t t140 = 1U;
volatile int8_t x928 = INT8_MAX;
volatile int64_t t141 = 47LL;
int16_t x935 = -1;
volatile int64_t t142 = 117890941765992LL;
uint32_t x944 = 1755409U;
int32_t x950 = 136287012;
volatile uint32_t x954 = 199U;
int8_t x968 = 4;
volatile int32_t x971 = INT32_MIN;
uint64_t t151 = 326LLU;
int64_t x977 = INT64_MIN;
int8_t x980 = INT8_MIN;
uint64_t x987 = 190LLU;
static volatile int64_t x988 = 13LL;
static volatile int16_t x997 = INT16_MAX;
uint64_t x1001 = 67LLU;
int8_t x1004 = INT8_MIN;
uint64_t t156 = 1913781515669732404LLU;
int32_t x1007 = 1271;
uint64_t x1035 = 29LLU;
int16_t x1036 = -1;
int16_t x1039 = INT16_MAX;
volatile uint8_t x1046 = UINT8_MAX;
volatile uint8_t x1047 = 9U;
uint64_t x1048 = UINT64_MAX;
uint64_t t163 = 91076653LLU;
uint64_t x1050 = 88LLU;
int16_t x1059 = -262;
int16_t x1061 = INT16_MAX;
int64_t x1063 = 5LL;
int64_t t166 = -20LL;
uint32_t x1068 = 6U;
uint32_t t167 = 41705397U;
int32_t x1070 = INT32_MIN;
static int16_t x1087 = 6;
int32_t t170 = 203432441;
uint32_t x1097 = 222U;
uint64_t x1101 = 7074743629095555LLU;
static int64_t x1116 = -3523512LL;
int64_t t174 = 10940131873LL;
int16_t x1122 = 57;
int8_t x1134 = INT8_MIN;
volatile int16_t x1141 = 22;
static volatile uint32_t t181 = 10U;
int64_t x1150 = 3159LL;
int32_t x1161 = INT32_MIN;
int16_t x1162 = INT16_MIN;
uint8_t x1163 = 39U;
volatile int16_t x1178 = INT16_MIN;
uint64_t x1186 = UINT64_MAX;
static volatile uint64_t t186 = 57243013949LLU;
int32_t x1205 = INT32_MAX;
int32_t x1206 = INT32_MIN;
int64_t x1209 = -3376LL;
volatile uint16_t x1210 = 1U;
static uint64_t x1211 = 176308428LLU;
static int8_t x1212 = INT8_MIN;
static volatile int64_t t192 = 14027843387998568LL;
static uint8_t x1227 = UINT8_MAX;
volatile int64_t t193 = -43532094LL;
uint8_t x1244 = 6U;
static volatile uint32_t x1252 = 525121400U;
static volatile int64_t x1260 = 1077540027LL;


void f0(void) {
    	volatile uint8_t x1 = UINT8_MAX;
	static uint16_t x4 = 347U;
	int64_t t0 = -152963LL;

    t0 = (x1/((x2^x3)*x4));

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = -604385224391224LL;
	int8_t x8 = -1;

    t1 = (x5/((x6^x7)*x8));

    if (t1 != -141641721207LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MAX;
	volatile uint16_t x11 = UINT16_MAX;
	uint16_t x12 = 12U;
	static int32_t t2 = -8;

    t2 = (x9/((x10^x11)*x12));

    if (t2 != -2730) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x18 = 1679265924561799LL;
	uint64_t x19 = 3005385066479759LLU;
	int8_t x20 = INT8_MAX;
	static volatile uint64_t t3 = 769140302LLU;

    t3 = (x17/((x18^x19)*x20));

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint64_t x21 = 7643943470LLU;
	int16_t x22 = 2157;
	uint64_t t4 = 1876903771653LLU;

    t4 = (x21/((x22^x23)*x24));

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x25 = INT32_MIN;
	int32_t x26 = INT32_MIN;
	int16_t x27 = 901;
	uint64_t x28 = 13LLU;

    t5 = (x25/((x26^x27)*x28));

    if (t5 != 1LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x30 = -15;
	int16_t x31 = INT16_MAX;
	volatile int32_t x32 = -202;
	int32_t t6 = 211256;

    t6 = (x29/((x30^x31)*x32));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x33 = UINT8_MAX;
	volatile int16_t x34 = INT16_MIN;
	int32_t x35 = -51046;
	uint32_t x36 = UINT32_MAX;

    t7 = (x33/((x34^x35)*x36));

    if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x37 = 107;
	int64_t x39 = -1LL;
	static volatile int64_t x40 = -1LL;

    t8 = (x37/((x38^x39)*x40));

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x50 = UINT64_MAX;
	volatile int32_t x52 = 4;
	uint64_t t9 = 2061026148947554429LLU;

    t9 = (x49/((x50^x51)*x52));

    if (t9 != 140741783437315LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint16_t x54 = 92U;
	static int64_t x55 = -731LL;
	int16_t x56 = -1;
	int64_t t10 = 15637310980119LL;

    t10 = (x53/((x54^x55)*x56));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint32_t x77 = 0U;
	uint64_t x78 = UINT64_MAX;
	int32_t x79 = INT32_MAX;
	static int8_t x80 = INT8_MIN;
	uint64_t t11 = 127318LLU;

    t11 = (x77/((x78^x79)*x80));

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x83 = INT16_MIN;
	int8_t x84 = INT8_MAX;

    t12 = (x81/((x82^x83)*x84));

    if (t12 != 1U) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x93 = 1;
	static volatile uint16_t x94 = 959U;
	static uint16_t x95 = 2265U;
	uint8_t x96 = 14U;
	int32_t t13 = 1579;

    t13 = (x93/((x94^x95)*x96));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int16_t x101 = -11784;
	static int16_t x102 = INT16_MIN;
	static int64_t x103 = 8003062992626LL;
	uint64_t x104 = 1332224LLU;
	uint64_t t14 = 5935752LLU;

    t14 = (x101/((x102^x103)*x104));

    if (t14 != 2LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x109 = -61;
	volatile int16_t x110 = -1;
	int16_t x112 = -125;
	int32_t t15 = -7857;

    t15 = (x109/((x110^x111)*x112));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x113 = -47153574396LL;
	uint64_t x114 = 1451020223449298LLU;
	int64_t x115 = INT64_MAX;
	int32_t x116 = -7;
	volatile uint64_t t16 = 7LLU;

    t16 = (x113/((x114^x115)*x116));

    if (t16 != 1LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x117 = UINT16_MAX;
	uint16_t x119 = UINT16_MAX;
	uint32_t x120 = 7176331U;
	uint32_t t17 = 354810U;

    t17 = (x117/((x118^x119)*x120));

    if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x122 = INT16_MAX;
	static uint64_t x124 = 2998844741301LLU;
	volatile uint64_t t18 = 141LLU;

    t18 = (x121/((x122^x123)*x124));

    if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x125 = 6193052LL;
	static uint16_t x126 = UINT16_MAX;
	uint32_t x127 = 25U;
	int8_t x128 = INT8_MIN;
	int64_t t19 = -8LL;

    t19 = (x125/((x126^x127)*x128));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x133 = INT8_MIN;
	volatile int8_t x135 = INT8_MAX;
	uint64_t x136 = 523502628LLU;
	uint64_t t20 = 370163352078364LLU;

    t20 = (x133/((x134^x135)*x136));

    if (t20 != 750557LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x145 = -481301025;
	uint64_t x147 = 14LLU;
	static volatile int64_t x148 = INT64_MAX;
	uint64_t t21 = 152523230733LLU;

    t21 = (x145/((x146^x147)*x148));

    if (t21 != 8589934647LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x153 = INT8_MAX;
	volatile int32_t x154 = -831181;
	int32_t x155 = -1;
	uint8_t x156 = 6U;
	volatile int32_t t22 = -14893;

    t22 = (x153/((x154^x155)*x156));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x161 = 3267;
	int64_t x162 = 7422LL;
	int16_t x163 = -1;
	static int64_t x164 = 9558960120LL;
	static volatile int64_t t23 = 1388810229LL;

    t23 = (x161/((x162^x163)*x164));

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x182 = INT16_MIN;
	int16_t x184 = INT16_MAX;
	volatile int32_t t24 = -677924;

    t24 = (x181/((x182^x183)*x184));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x185 = UINT16_MAX;
	uint64_t x186 = 226435LLU;
	static uint64_t x187 = 2491576925662116LLU;

    t25 = (x185/((x186^x187)*x188));

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint32_t x193 = 2170675U;
	uint64_t x194 = 11480LLU;
	static int64_t x196 = INT64_MAX;
	uint64_t t26 = 1635064770655988LLU;

    t26 = (x193/((x194^x195)*x196));

    if (t26 != 2LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x197 = -971;
	int32_t x198 = -3030;
	static int8_t x199 = 7;
	volatile uint64_t x200 = 671LLU;
	static uint64_t t27 = 8LLU;

    t27 = (x197/((x198^x199)*x200));

    if (t27 != 1LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x201 = 1U;
	volatile int64_t x202 = -1LL;
	static volatile int16_t x203 = -24;
	volatile int64_t t28 = -41924946259427LL;

    t28 = (x201/((x202^x203)*x204));

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x205 = -25;
	int32_t x206 = INT32_MIN;
	int16_t x207 = INT16_MIN;

    t29 = (x205/((x206^x207)*x208));

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x213 = INT16_MIN;
	int16_t x214 = INT16_MIN;
	int8_t x215 = INT8_MIN;

    t30 = (x213/((x214^x215)*x216));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile int16_t x219 = -237;
	int16_t x220 = INT16_MIN;
	volatile uint32_t t31 = 20835977U;

    t31 = (x217/((x218^x219)*x220));

    if (t31 != 1U) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x222 = 30U;
	int16_t x223 = 14716;
	volatile int64_t x224 = -31130231144LL;
	static volatile int64_t t32 = -11666LL;

    t32 = (x221/((x222^x223)*x224));

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile uint8_t x233 = UINT8_MAX;
	uint8_t x235 = 35U;
	int16_t x236 = 3;
	int32_t t33 = -383964710;

    t33 = (x233/((x234^x235)*x236));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x249 = -1LL;
	int64_t x251 = INT64_MIN;
	volatile int8_t x252 = 1;
	static int64_t t34 = 2LL;

    t34 = (x249/((x250^x251)*x252));

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x253 = INT8_MAX;
	uint32_t x254 = 108485U;
	int64_t x255 = 30917891050627LL;
	volatile int16_t x256 = -1;

    t35 = (x253/((x254^x255)*x256));

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x257 = 43;
	volatile uint32_t x258 = 918U;
	static uint64_t x259 = 5938346LLU;
	uint64_t x260 = 21226LLU;
	uint64_t t36 = 1260LLU;

    t36 = (x257/((x258^x259)*x260));

    if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x265 = INT16_MIN;
	uint8_t x266 = 55U;
	static uint32_t x267 = 5U;
	uint16_t x268 = 1022U;
	volatile uint32_t t37 = 100U;

    t37 = (x265/((x266^x267)*x268));

    if (t37 != 84049U) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x269 = 4U;
	int8_t x270 = -1;
	int32_t x271 = 756565;
	int32_t x272 = 1750;
	int32_t t38 = -423;

    t38 = (x269/((x270^x271)*x272));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x277 = INT64_MIN;
	int16_t x278 = -1;
	volatile uint16_t x279 = UINT16_MAX;
	uint64_t x280 = 1628404116LLU;
	volatile uint64_t t39 = 7968194030LLU;

    t39 = (x277/((x278^x279)*x280));

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int32_t x289 = -2044;
	static uint64_t x291 = UINT64_MAX;
	static int64_t x292 = INT64_MAX;
	volatile uint64_t t40 = 332LLU;

    t40 = (x289/((x290^x291)*x292));

    if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x301 = UINT64_MAX;
	static int8_t x302 = INT8_MIN;
	int32_t x303 = -2;
	int16_t x304 = -5;
	uint64_t t41 = 69394576256238080LLU;

    t41 = (x301/((x302^x303)*x304));

    if (t41 != 1LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint32_t x313 = 217901U;
	static volatile int8_t x314 = INT8_MIN;
	volatile uint64_t x316 = 63LLU;
	volatile uint64_t t42 = 359088778814264571LLU;

    t42 = (x313/((x314^x315)*x316));

    if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x317 = 1407U;
	int32_t x318 = 400;
	uint32_t x320 = 47353U;
	uint32_t t43 = 409U;

    t43 = (x317/((x318^x319)*x320));

    if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint8_t x321 = 27U;
	int64_t x322 = -1LL;
	uint16_t x323 = 359U;
	int16_t x324 = INT16_MAX;
	volatile int64_t t44 = -54LL;

    t44 = (x321/((x322^x323)*x324));

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint8_t x325 = 1U;
	static volatile int8_t x326 = INT8_MIN;
	uint64_t x327 = 150LLU;
	static int8_t x328 = INT8_MAX;
	static volatile uint64_t t45 = 912021719LLU;

    t45 = (x325/((x326^x327)*x328));

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x329 = UINT8_MAX;
	volatile int8_t x332 = -1;
	int64_t t46 = 1030851LL;

    t46 = (x329/((x330^x331)*x332));

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x337 = 447594LL;
	uint16_t x338 = 171U;
	int8_t x339 = INT8_MIN;
	int32_t x340 = -1;
	static int64_t t47 = -49915589047806LL;

    t47 = (x337/((x338^x339)*x340));

    if (t47 != 2101LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x341 = INT8_MIN;
	static uint8_t x342 = 24U;
	int64_t x343 = 0LL;
	volatile int16_t x344 = 508;
	volatile int64_t t48 = 602LL;

    t48 = (x341/((x342^x343)*x344));

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x345 = 56;
	static volatile int8_t x346 = 0;
	static uint16_t x347 = UINT16_MAX;
	int8_t x348 = 13;
	int32_t t49 = -522567;

    t49 = (x345/((x346^x347)*x348));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint64_t x350 = UINT64_MAX;
	int64_t x351 = 46153021092LL;
	int8_t x352 = INT8_MAX;
	uint64_t t50 = 172619038845400LLU;

    t50 = (x349/((x350^x351)*x352));

    if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static int32_t x353 = INT32_MAX;
	volatile uint32_t x354 = 1085168U;
	uint8_t x355 = UINT8_MAX;
	int8_t x356 = INT8_MIN;
	volatile uint32_t t51 = 38003650U;

    t51 = (x353/((x354^x355)*x356));

    if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x358 = INT16_MIN;
	int16_t x359 = INT16_MAX;
	uint32_t x360 = 598163180U;
	int64_t t52 = -355LL;

    t52 = (x357/((x358^x359)*x360));

    if (t52 != 2494958279LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x361 = UINT16_MAX;
	static int16_t x362 = -1;
	static uint64_t x363 = 140414592397475638LLU;
	volatile int8_t x364 = -1;

    t53 = (x361/((x362^x363)*x364));

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x373 = -1;
	volatile int8_t x375 = INT8_MIN;
	volatile int32_t t54 = 2;

    t54 = (x373/((x374^x375)*x376));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x377 = INT8_MAX;
	volatile int32_t x378 = -1;
	int64_t x380 = -1LL;
	volatile int64_t t55 = -17253783554836639LL;

    t55 = (x377/((x378^x379)*x380));

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x381 = 1464015615315LLU;
	uint32_t x383 = 666886U;
	uint8_t x384 = 3U;
	uint64_t t56 = 55603170479271736LLU;

    t56 = (x381/((x382^x383)*x384));

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x395 = 1;
	uint8_t x396 = 9U;

    t57 = (x393/((x394^x395)*x396));

    if (t57 != 1988009922805210LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint8_t x397 = UINT8_MAX;
	volatile uint16_t x398 = UINT16_MAX;
	volatile uint32_t x399 = UINT32_MAX;
	static uint8_t x400 = 2U;
	uint32_t t58 = 167207196U;

    t58 = (x397/((x398^x399)*x400));

    if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x401 = 51;
	volatile uint8_t x402 = UINT8_MAX;
	static int16_t x403 = 475;
	uint64_t x404 = 1037845159LLU;
	static volatile uint64_t t59 = 256670022077683334LLU;

    t59 = (x401/((x402^x403)*x404));

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x410 = 1;
	int8_t x411 = -1;
	int16_t x412 = -1121;
	static int32_t t60 = 2334592;

    t60 = (x409/((x410^x411)*x412));

    if (t60 != -14) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x413 = -330465;
	int64_t x414 = 54735027877420889LL;
	int64_t x415 = INT64_MAX;
	volatile int16_t x416 = -1;
	int64_t t61 = 83626LL;

    t61 = (x413/((x414^x415)*x416));

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint8_t x417 = UINT8_MAX;
	uint64_t x418 = 625579246554196298LLU;
	uint32_t x420 = UINT32_MAX;
	volatile uint64_t t62 = 826057000LLU;

    t62 = (x417/((x418^x419)*x420));

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x429 = INT8_MAX;
	int16_t x430 = 1971;
	uint32_t x432 = 28514029U;
	volatile uint32_t t63 = 38349U;

    t63 = (x429/((x430^x431)*x432));

    if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x434 = INT32_MIN;
	volatile int8_t x435 = 29;
	int64_t t64 = 1LL;

    t64 = (x433/((x434^x435)*x436));

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint64_t x441 = 1233892848858LLU;
	volatile int64_t x442 = -1LL;
	int64_t x443 = -117218176716LL;
	volatile uint64_t x444 = UINT64_MAX;
	uint64_t t65 = 5023162859LLU;

    t65 = (x441/((x442^x443)*x444));

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x449 = 6U;
	uint64_t x450 = 66286827070006LLU;
	int8_t x452 = -4;
	volatile uint64_t t66 = 161246LLU;

    t66 = (x449/((x450^x451)*x452));

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x453 = 1U;
	int8_t x454 = INT8_MAX;
	uint8_t x455 = UINT8_MAX;
	int16_t x456 = INT16_MIN;
	static volatile int32_t t67 = 2;

    t67 = (x453/((x454^x455)*x456));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x457 = INT64_MAX;
	int32_t x458 = -1;
	static volatile int32_t x459 = INT32_MIN;
	int8_t x460 = -1;
	volatile int64_t t68 = -30611709LL;

    t68 = (x457/((x458^x459)*x460));

    if (t68 != -4294967298LL) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x467 = INT8_MIN;
	uint8_t x468 = 22U;
	int64_t t69 = 1886LL;

    t69 = (x465/((x466^x467)*x468));

    if (t69 != 4070331878576688LL) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x473 = INT32_MIN;
	volatile uint64_t x475 = 95LLU;
	static uint64_t t70 = 34861129025661LLU;

    t70 = (x473/((x474^x475)*x476));

    if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x477 = 142669676U;
	uint32_t x478 = 459628797U;
	int32_t x479 = INT32_MIN;
	uint32_t x480 = 238739120U;

    t71 = (x477/((x478^x479)*x480));

    if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x485 = -1253;
	static volatile int32_t x486 = -2719254;
	uint64_t x487 = 495105290279LLU;
	uint64_t t72 = 3995652503245LLU;

    t72 = (x485/((x486^x487)*x488));

    if (t72 != 1LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint8_t x489 = UINT8_MAX;
	int8_t x490 = INT8_MAX;
	uint8_t x491 = 26U;
	volatile uint16_t x492 = 62U;
	static int32_t t73 = -2825;

    t73 = (x489/((x490^x491)*x492));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x493 = INT8_MIN;
	int8_t x494 = INT8_MAX;
	uint32_t x496 = 367163U;
	volatile uint32_t t74 = 2U;

    t74 = (x493/((x494^x495)*x496));

    if (t74 != 1U) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x497 = INT8_MIN;
	uint8_t x498 = UINT8_MAX;
	static int32_t x499 = 23;
	int16_t x500 = -1;
	static volatile int32_t t75 = 199277756;

    t75 = (x497/((x498^x499)*x500));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x501 = -52LL;
	int8_t x502 = 11;
	static int8_t x503 = INT8_MAX;
	int8_t x504 = 3;

    t76 = (x501/((x502^x503)*x504));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x509 = UINT64_MAX;
	volatile uint64_t x510 = 26LLU;
	volatile uint8_t x512 = 6U;
	volatile uint64_t t77 = 323LLU;

    t77 = (x509/((x510^x511)*x512));

    if (t77 != 1LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x522 = -1LL;
	int16_t x523 = -67;
	volatile int64_t t78 = -9861512588LL;

    t78 = (x521/((x522^x523)*x524));

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x525 = INT64_MIN;
	int32_t x526 = INT32_MIN;
	int64_t x527 = -33920328LL;
	int32_t x528 = INT32_MIN;
	static volatile int64_t t79 = 12183251113918897LL;

    t79 = (x525/((x526^x527)*x528));

    if (t79 != 2LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x529 = INT32_MIN;
	uint8_t x532 = UINT8_MAX;
	int32_t t80 = -600;

    t80 = (x529/((x530^x531)*x532));

    if (t80 != -11745) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x534 = INT8_MIN;
	int64_t x535 = INT64_MAX;
	static uint8_t x536 = 1U;
	int64_t t81 = -1001LL;

    t81 = (x533/((x534^x535)*x536));

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x537 = -634737042134200864LL;
	int8_t x538 = 1;
	uint8_t x539 = 108U;
	uint64_t x540 = 47387425959344516LLU;
	static uint64_t t82 = 340700314742309107LLU;

    t82 = (x537/((x538^x539)*x540));

    if (t82 != 3LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x545 = -1;
	static uint16_t x546 = UINT16_MAX;
	uint8_t x547 = 0U;
	static int16_t x548 = -1;

    t83 = (x545/((x546^x547)*x548));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x549 = INT32_MIN;
	uint64_t x550 = 8154855669816LLU;
	int8_t x551 = INT8_MAX;
	int64_t x552 = -1LL;
	uint64_t t84 = 14894356LLU;

    t84 = (x549/((x550^x551)*x552));

    if (t84 != 1LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x553 = -1;
	volatile int8_t x555 = -1;
	int32_t x556 = -1;
	static int64_t t85 = -21LL;

    t85 = (x553/((x554^x555)*x556));

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x557 = UINT16_MAX;
	volatile int64_t x558 = INT64_MIN;
	uint64_t x559 = 236724255LLU;
	uint32_t x560 = 2448643U;
	volatile uint64_t t86 = 39639750779090178LLU;

    t86 = (x557/((x558^x559)*x560));

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x561 = 48U;
	uint16_t x562 = UINT16_MAX;
	int8_t x563 = 17;
	uint64_t x564 = 13539908269391761LLU;
	uint64_t t87 = 1069113946LLU;

    t87 = (x561/((x562^x563)*x564));

    if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x565 = UINT16_MAX;
	int8_t x566 = -1;
	uint64_t x567 = 2078159474173LLU;
	int32_t x568 = INT32_MAX;
	static uint64_t t88 = 7492278050920119816LLU;

    t88 = (x565/((x566^x567)*x568));

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x569 = -13748;
	uint8_t x570 = 8U;
	uint8_t x571 = 83U;
	int16_t x572 = INT16_MIN;
	volatile int32_t t89 = -180763;

    t89 = (x569/((x570^x571)*x572));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x585 = 1473876690LLU;
	int8_t x586 = 1;
	int32_t x588 = -309;
	uint64_t t90 = 48895665721LLU;

    t90 = (x585/((x586^x587)*x588));

    if (t90 != 1192456LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x597 = 100534323208LL;
	int8_t x598 = 1;
	static int16_t x599 = INT16_MIN;
	uint64_t x600 = 186933LLU;
	static uint64_t t91 = 12334535103010LLU;

    t91 = (x597/((x598^x599)*x600));

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static int64_t x602 = 223872LL;
	static volatile uint8_t x604 = 59U;
	static int64_t t92 = -26LL;

    t92 = (x601/((x602^x603)*x604));

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static int32_t x605 = 5;
	int16_t x606 = INT16_MAX;
	int8_t x607 = INT8_MIN;
	volatile int32_t t93 = -14163;

    t93 = (x605/((x606^x607)*x608));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x609 = INT16_MIN;
	volatile int8_t x611 = -1;
	static int64_t t94 = -699701LL;

    t94 = (x609/((x610^x611)*x612));

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x613 = INT16_MAX;
	uint64_t x614 = 109LLU;
	volatile uint32_t x615 = UINT32_MAX;
	static int16_t x616 = 862;
	uint64_t t95 = 116790211599435LLU;

    t95 = (x613/((x614^x615)*x616));

    if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x637 = UINT8_MAX;
	int16_t x638 = INT16_MIN;
	int8_t x639 = -1;
	int16_t x640 = -1;

    t96 = (x637/((x638^x639)*x640));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x641 = INT16_MIN;
	volatile int64_t x642 = -6225621LL;
	int8_t x643 = -1;
	int8_t x644 = -1;
	int64_t t97 = -775697945060LL;

    t97 = (x641/((x642^x643)*x644));

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x649 = INT32_MIN;
	int8_t x650 = INT8_MIN;
	static uint64_t x651 = 13650982428506597LLU;
	int16_t x652 = 43;
	uint64_t t98 = 373LLU;

    t98 = (x649/((x650^x651)*x652));

    if (t98 != 1LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x661 = INT8_MIN;
	static int32_t x663 = -1;
	volatile int32_t x664 = INT32_MIN;
	static volatile int64_t t99 = -301103510917982LL;

    t99 = (x661/((x662^x663)*x664));

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x670 = 231;
	volatile uint32_t x671 = 39U;
	volatile uint64_t t100 = 0LLU;

    t100 = (x669/((x670^x671)*x672));

    if (t100 != 37322960LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x673 = INT32_MAX;
	int8_t x675 = 2;
	uint64_t x676 = UINT64_MAX;
	static uint64_t t101 = 1725600135165346076LLU;

    t101 = (x673/((x674^x675)*x676));

    if (t101 != 17043521LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x678 = 7LLU;
	static uint64_t x679 = 35678739394386407LLU;
	static uint8_t x680 = 2U;

    t102 = (x677/((x678^x679)*x680));

    if (t102 != 0LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x681 = 3;
	int64_t x682 = 2077801LL;
	int8_t x683 = INT8_MIN;
	static uint8_t x684 = 6U;
	int64_t t103 = -10618760702684LL;

    t103 = (x681/((x682^x683)*x684));

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x685 = UINT64_MAX;
	uint64_t t104 = 449835964490721LLU;

    t104 = (x685/((x686^x687)*x688));

    if (t104 != 450171746LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x689 = 219077524414LLU;
	int64_t x690 = 1LL;
	volatile uint16_t x691 = 25126U;
	static int64_t x692 = -1LL;
	static volatile uint64_t t105 = 1223616485018619LLU;

    t105 = (x689/((x690^x691)*x692));

    if (t105 != 0LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x693 = 45U;
	uint8_t x695 = 1U;
	static int32_t t106 = 48638968;

    t106 = (x693/((x694^x695)*x696));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int64_t x698 = 67130877531LL;
	int32_t x699 = INT32_MAX;
	volatile uint64_t t107 = 2407342871813LLU;

    t107 = (x697/((x698^x699)*x700));

    if (t107 != 0LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static int64_t x701 = -1LL;
	uint32_t x702 = 1537650U;
	static volatile int64_t x703 = 41229190480394LL;
	static int64_t x704 = 9131LL;
	static volatile int64_t t108 = -4332536087008819LL;

    t108 = (x701/((x702^x703)*x704));

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x705 = 13;
	uint8_t x706 = 3U;
	uint16_t x707 = 5U;

    t109 = (x705/((x706^x707)*x708));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint8_t x710 = 21U;
	int16_t x711 = INT16_MAX;
	volatile int16_t x712 = INT16_MAX;
	int64_t t110 = 1892989615639815LL;

    t110 = (x709/((x710^x711)*x712));

    if (t110 != 8595967962LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x713 = INT32_MAX;
	static volatile uint16_t x714 = UINT16_MAX;
	int8_t x715 = -1;

    t111 = (x713/((x714^x715)*x716));

    if (t111 != 0U) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x729 = UINT32_MAX;
	int32_t x730 = INT32_MIN;
	int16_t x731 = INT16_MAX;
	static int16_t x732 = -1;
	uint32_t t112 = 1236773214U;

    t112 = (x729/((x730^x731)*x732));

    if (t112 != 2U) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x738 = -62;
	volatile int64_t x739 = -17115557LL;
	int32_t x740 = -3832;

    t113 = (x737/((x738^x739)*x740));

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint64_t x745 = 909832LLU;
	static volatile uint8_t x746 = UINT8_MAX;
	static int16_t x747 = -1;
	int8_t x748 = INT8_MIN;

    t114 = (x745/((x746^x747)*x748));

    if (t114 != 27LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint64_t x749 = UINT64_MAX;
	volatile int32_t x750 = -112741988;
	uint64_t x751 = 266816180LLU;
	static uint16_t x752 = 3414U;
	static volatile uint64_t t115 = 1LLU;

    t115 = (x749/((x750^x751)*x752));

    if (t115 != 1LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x753 = 57U;
	volatile int64_t x754 = 750LL;
	int64_t x755 = -1LL;
	int8_t x756 = INT8_MIN;

    t116 = (x753/((x754^x755)*x756));

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x759 = 7365U;
	uint64_t t117 = 175LLU;

    t117 = (x757/((x758^x759)*x760));

    if (t117 != 1LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint8_t x762 = 109U;
	int16_t x764 = INT16_MIN;
	volatile int64_t t118 = -1633348023014941654LL;

    t118 = (x761/((x762^x763)*x764));

    if (t118 != -197LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x765 = INT8_MAX;
	static int64_t x767 = -64750LL;
	int8_t x768 = INT8_MIN;
	volatile int64_t t119 = 47921288966LL;

    t119 = (x765/((x766^x767)*x768));

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x769 = 2258LL;
	static volatile int8_t x770 = -5;
	int32_t x772 = -2;
	int64_t t120 = 3429575062795LL;

    t120 = (x769/((x770^x771)*x772));

    if (t120 != -282LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x781 = INT64_MIN;
	int64_t x782 = -1LL;
	volatile int32_t x783 = -7;
	uint64_t x784 = 7628907438LLU;
	static volatile uint64_t t121 = 7LLU;

    t121 = (x781/((x782^x783)*x784));

    if (t121 != 201500501LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x789 = 5100;
	int8_t x790 = 11;
	static int64_t x791 = -1LL;
	static int32_t x792 = INT32_MIN;
	volatile int64_t t122 = -235554089LL;

    t122 = (x789/((x790^x791)*x792));

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x817 = INT64_MIN;
	int32_t x818 = INT32_MAX;
	static int16_t x819 = -1;
	volatile int64_t t123 = 174002762647LL;

    t123 = (x817/((x818^x819)*x820));

    if (t123 != -4294967296LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int32_t x821 = INT32_MIN;
	uint16_t x822 = UINT16_MAX;
	int8_t x823 = 2;
	int16_t x824 = 951;
	static volatile int32_t t124 = 1653082;

    t124 = (x821/((x822^x823)*x824));

    if (t124 != -34) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x829 = INT16_MIN;
	volatile int32_t x830 = INT32_MAX;
	int16_t x831 = -4145;
	volatile uint64_t x832 = 42257122627735716LLU;
	static volatile uint64_t t125 = 559820050198LLU;

    t125 = (x829/((x830^x831)*x832));

    if (t125 != 1LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x833 = INT64_MIN;
	int8_t x834 = -19;
	uint16_t x835 = UINT16_MAX;
	uint32_t x836 = 10644U;
	int64_t t126 = 33060332801057LL;

    t126 = (x833/((x834^x835)*x836));

    if (t126 != -2563761446LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x838 = -1LL;
	static int8_t x839 = -2;
	volatile int64_t t127 = -42453610LL;

    t127 = (x837/((x838^x839)*x840));

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x841 = UINT16_MAX;
	volatile int16_t x842 = -221;

    t128 = (x841/((x842^x843)*x844));

    if (t128 != 0U) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int16_t x847 = INT16_MIN;
	uint32_t x848 = 1U;
	uint64_t t129 = 85483618434533LLU;

    t129 = (x845/((x846^x847)*x848));

    if (t129 != 0LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x850 = -1;
	int8_t x851 = -8;
	volatile int16_t x852 = -1;
	int32_t t130 = 16253653;

    t130 = (x849/((x850^x851)*x852));

    if (t130 != -284) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x853 = INT8_MAX;
	int8_t x856 = INT8_MIN;
	int32_t t131 = 344;

    t131 = (x853/((x854^x855)*x856));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x865 = INT32_MIN;
	int64_t x866 = -107602350LL;
	int8_t x867 = -1;
	int64_t t132 = -879772317LL;

    t132 = (x865/((x866^x867)*x868));

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x873 = INT8_MIN;
	static int64_t x874 = -1LL;
	volatile int16_t x875 = -11;
	static int16_t x876 = INT16_MAX;

    t133 = (x873/((x874^x875)*x876));

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x881 = -1LL;
	volatile int64_t x882 = 3660687360159014LL;
	int8_t x883 = -1;
	static int8_t x884 = -54;
	volatile int64_t t134 = 18311261LL;

    t134 = (x881/((x882^x883)*x884));

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint16_t x889 = 5630U;
	volatile int8_t x890 = INT8_MIN;
	volatile int64_t x891 = -1LL;
	static int8_t x892 = -1;
	int64_t t135 = 250130081465052375LL;

    t135 = (x889/((x890^x891)*x892));

    if (t135 != -44LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x895 = 6628670158610LL;
	volatile int64_t x896 = 985089LL;

    t136 = (x893/((x894^x895)*x896));

    if (t136 != 2LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x897 = INT16_MIN;
	uint32_t x898 = 227495558U;
	int8_t x900 = -1;
	volatile uint32_t t137 = 121666U;

    t137 = (x897/((x898^x899)*x900));

    if (t137 != 1U) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint16_t x901 = 1017U;
	int16_t x902 = -1088;
	int64_t x903 = INT64_MIN;
	int8_t x904 = -1;
	int64_t t138 = 1LL;

    t138 = (x901/((x902^x903)*x904));

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x905 = INT64_MIN;
	int8_t x906 = INT8_MIN;
	uint8_t x907 = 1U;
	volatile int32_t x908 = 1;
	volatile int64_t t139 = -1LL;

    t139 = (x905/((x906^x907)*x908));

    if (t139 != 72624976668147841LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static int8_t x913 = INT8_MAX;
	uint8_t x914 = UINT8_MAX;
	uint32_t x915 = 4725U;
	int16_t x916 = INT16_MIN;

    t140 = (x913/((x914^x915)*x916));

    if (t140 != 0U) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x925 = INT32_MIN;
	int64_t x926 = -1LL;
	uint32_t x927 = 1102U;

    t141 = (x925/((x926^x927)*x928));

    if (t141 != 15330LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x933 = -19;
	volatile int64_t x934 = -14LL;
	static int16_t x936 = 724;

    t142 = (x933/((x934^x935)*x936));

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static int32_t x937 = INT32_MAX;
	uint32_t x938 = 16118U;
	volatile int8_t x939 = 1;
	int64_t x940 = -50815LL;
	volatile int64_t t143 = 462LL;

    t143 = (x937/((x938^x939)*x940));

    if (t143 != -2LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x941 = INT8_MAX;
	uint8_t x942 = 4U;
	uint32_t x943 = 2235218U;
	static uint32_t t144 = 56U;

    t144 = (x941/((x942^x943)*x944));

    if (t144 != 0U) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x949 = -634;
	int64_t x951 = 20LL;
	int32_t x952 = 19142;
	int64_t t145 = 772211113024LL;

    t145 = (x949/((x950^x951)*x952));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x953 = UINT8_MAX;
	uint32_t x955 = 22U;
	volatile int8_t x956 = INT8_MAX;
	uint32_t t146 = 216U;

    t146 = (x953/((x954^x955)*x956));

    if (t146 != 0U) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x957 = INT32_MIN;
	int32_t x958 = -19906255;
	int32_t x959 = -65476;
	int32_t x960 = -8;
	int32_t t147 = 801996;

    t147 = (x957/((x958^x959)*x960));

    if (t147 != 13) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x961 = INT8_MIN;
	int8_t x962 = INT8_MAX;
	static int64_t x963 = -1LL;
	uint16_t x964 = 23U;
	volatile int64_t t148 = -2357307971LL;

    t148 = (x961/((x962^x963)*x964));

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint16_t x965 = 58U;
	volatile int8_t x966 = INT8_MIN;
	volatile uint32_t x967 = 222689U;
	volatile uint32_t t149 = 6U;

    t149 = (x965/((x966^x967)*x968));

    if (t149 != 0U) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x969 = -15;
	volatile int16_t x970 = INT16_MIN;
	volatile uint64_t x972 = UINT64_MAX;
	volatile uint64_t t150 = 7889071970152LLU;

    t150 = (x969/((x970^x971)*x972));

    if (t150 != 1LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint64_t x973 = 301171682947LLU;
	int8_t x974 = 1;
	uint32_t x975 = UINT32_MAX;
	static volatile int32_t x976 = 21760;

    t151 = (x973/((x974^x975)*x976));

    if (t151 != 70LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x978 = -1;
	int16_t x979 = INT16_MIN;
	static int64_t t152 = -1171603339485575LL;

    t152 = (x977/((x978^x979)*x980));

    if (t152 != 2199090366464LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x981 = -1;
	uint32_t x982 = 1365373U;
	static volatile int16_t x983 = INT16_MIN;
	int8_t x984 = INT8_MAX;
	static volatile uint32_t t153 = 4531U;

    t153 = (x981/((x982^x983)*x984));

    if (t153 != 1U) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int32_t x985 = -1;
	static int8_t x986 = INT8_MIN;
	uint64_t t154 = 566LLU;

    t154 = (x985/((x986^x987)*x988));

    if (t154 != 1LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x998 = INT8_MAX;
	int8_t x999 = INT8_MIN;
	volatile int64_t x1000 = INT64_MAX;
	volatile int64_t t155 = -346991280767LL;

    t155 = (x997/((x998^x999)*x1000));

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x1002 = INT8_MAX;
	int64_t x1003 = -1LL;

    t156 = (x1001/((x1002^x1003)*x1004));

    if (t156 != 0LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x1005 = 1;
	int64_t x1006 = -1LL;
	uint64_t x1008 = 67242028283LLU;
	uint64_t t157 = 9825LLU;

    t157 = (x1005/((x1006^x1007)*x1008));

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x1009 = -1;
	volatile uint8_t x1010 = 1U;
	volatile int64_t x1011 = -1LL;
	uint64_t x1012 = UINT64_MAX;
	uint64_t t158 = 4LLU;

    t158 = (x1009/((x1010^x1011)*x1012));

    if (t158 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x1025 = INT32_MIN;
	static uint8_t x1026 = UINT8_MAX;
	volatile int64_t x1027 = -56LL;
	int16_t x1028 = INT16_MIN;
	volatile int64_t t159 = -59247105894LL;

    t159 = (x1025/((x1026^x1027)*x1028));

    if (t159 != -326LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x1033 = UINT64_MAX;
	int32_t x1034 = -8391;
	uint64_t t160 = 4064LLU;

    t160 = (x1033/((x1034^x1035)*x1036));

    if (t160 != 2192908235105747LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x1037 = -1;
	uint8_t x1038 = 77U;
	uint8_t x1040 = 5U;
	int32_t t161 = -6939981;

    t161 = (x1037/((x1038^x1039)*x1040));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int16_t x1041 = 1989;
	static int64_t x1042 = INT64_MAX;
	int64_t x1043 = INT64_MIN;
	volatile int64_t x1044 = -6172487455LL;
	volatile int64_t t162 = -449496049LL;

    t162 = (x1041/((x1042^x1043)*x1044));

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x1045 = 23378U;

    t163 = (x1045/((x1046^x1047)*x1048));

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint16_t x1049 = 5U;
	int32_t x1051 = -1;
	int8_t x1052 = INT8_MAX;
	volatile uint64_t t164 = 133803876LLU;

    t164 = (x1049/((x1050^x1051)*x1052));

    if (t164 != 0LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x1057 = INT16_MIN;
	static uint8_t x1058 = 1U;
	int8_t x1060 = INT8_MIN;
	int32_t t165 = 1590977;

    t165 = (x1057/((x1058^x1059)*x1060));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x1062 = 635U;
	volatile uint32_t x1064 = UINT32_MAX;

    t166 = (x1061/((x1062^x1063)*x1064));

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x1065 = -1;
	int16_t x1066 = 1476;
	int8_t x1067 = 10;

    t167 = (x1065/((x1066^x1067)*x1068));

    if (t167 != 481714U) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x1069 = -520063177540969LL;
	int16_t x1071 = INT16_MAX;
	int16_t x1072 = -1;
	volatile int64_t t168 = -170LL;

    t168 = (x1069/((x1070^x1071)*x1072));

    if (t168 != -242176LL) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint64_t x1077 = 892110LLU;
	int64_t x1078 = -18487LL;
	int32_t x1079 = -1;
	static int32_t x1080 = INT32_MIN;
	uint64_t t169 = 246161991749685108LLU;

    t169 = (x1077/((x1078^x1079)*x1080));

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	static int32_t x1085 = -39;
	int8_t x1086 = INT8_MIN;
	volatile int16_t x1088 = -13;

    t170 = (x1085/((x1086^x1087)*x1088));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x1098 = INT8_MIN;
	volatile int16_t x1099 = INT16_MIN;
	volatile int16_t x1100 = INT16_MAX;
	volatile uint32_t t171 = 2U;

    t171 = (x1097/((x1098^x1099)*x1100));

    if (t171 != 0U) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x1102 = 93467U;
	static volatile int32_t x1103 = INT32_MIN;
	uint16_t x1104 = UINT16_MAX;
	static volatile uint64_t t172 = 17459196342231356LLU;

    t172 = (x1101/((x1102^x1103)*x1104));

    if (t172 != 1778522LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x1105 = 10725;
	uint8_t x1106 = UINT8_MAX;
	volatile int32_t x1107 = 2;
	int64_t x1108 = 25420LL;
	static int64_t t173 = -4317510397829461394LL;

    t173 = (x1105/((x1106^x1107)*x1108));

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int16_t x1113 = 480;
	volatile uint32_t x1114 = 58885U;
	uint8_t x1115 = UINT8_MAX;

    t174 = (x1113/((x1114^x1115)*x1116));

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint64_t x1117 = UINT64_MAX;
	int32_t x1118 = 91917;
	uint32_t x1119 = 1218922U;
	static int16_t x1120 = -12;
	uint64_t t175 = 29896827763762806LLU;

    t175 = (x1117/((x1118^x1119)*x1120));

    if (t175 != 4310748803LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x1121 = INT64_MIN;
	static int64_t x1123 = 76259LL;
	uint16_t x1124 = UINT16_MAX;
	static int64_t t176 = -1071909669385220LL;

    t176 = (x1121/((x1122^x1123)*x1124));

    if (t176 != -1845765716LL) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x1125 = 2;
	uint32_t x1126 = 0U;
	int16_t x1127 = -1;
	int16_t x1128 = INT16_MIN;
	volatile uint32_t t177 = 81U;

    t177 = (x1125/((x1126^x1127)*x1128));

    if (t177 != 0U) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x1129 = 14;
	uint64_t x1130 = UINT64_MAX;
	int16_t x1131 = INT16_MIN;
	volatile uint64_t x1132 = 4095LLU;
	volatile uint64_t t178 = 2238193277049554LLU;

    t178 = (x1129/((x1130^x1131)*x1132));

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x1133 = 2410907959LLU;
	uint8_t x1135 = UINT8_MAX;
	static uint32_t x1136 = 32U;
	uint64_t t179 = 6326500412LLU;

    t179 = (x1133/((x1134^x1135)*x1136));

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x1142 = UINT8_MAX;
	uint8_t x1143 = 89U;
	int8_t x1144 = INT8_MIN;
	int32_t t180 = -8578;

    t180 = (x1141/((x1142^x1143)*x1144));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile int32_t x1145 = -131936;
	int16_t x1146 = 7947;
	int8_t x1147 = -1;
	uint32_t x1148 = 399886U;

    t181 = (x1145/((x1146^x1147)*x1148));

    if (t181 != 3U) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint8_t x1149 = 1U;
	int32_t x1151 = INT32_MAX;
	int16_t x1152 = -159;
	int64_t t182 = -1LL;

    t182 = (x1149/((x1150^x1151)*x1152));

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x1164 = INT16_MAX;
	int32_t t183 = -1216;

    t183 = (x1161/((x1162^x1163)*x1164));

    if (t183 != 2) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x1173 = 57U;
	uint64_t x1174 = 2637LLU;
	volatile int64_t x1175 = INT64_MIN;
	static int32_t x1176 = INT32_MAX;
	static uint64_t t184 = 15011560571LLU;

    t184 = (x1173/((x1174^x1175)*x1176));

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x1177 = INT64_MIN;
	uint32_t x1179 = 0U;
	int8_t x1180 = 5;
	int64_t t185 = -2102614726633LL;

    t185 = (x1177/((x1178^x1179)*x1180));

    if (t185 != -2147565571LL) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x1185 = -1;
	static int8_t x1187 = INT8_MAX;
	uint16_t x1188 = 32342U;

    t186 = (x1185/((x1186^x1187)*x1188));

    if (t186 != 1LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x1197 = -1;
	uint8_t x1198 = UINT8_MAX;
	int8_t x1199 = INT8_MIN;
	static int64_t x1200 = -61080776658024LL;
	volatile int64_t t187 = 0LL;

    t187 = (x1197/((x1198^x1199)*x1200));

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static int64_t x1201 = 87LL;
	uint32_t x1202 = 95701508U;
	uint16_t x1203 = 247U;
	int64_t x1204 = -294871LL;
	volatile int64_t t188 = 523919930LL;

    t188 = (x1201/((x1202^x1203)*x1204));

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int8_t x1207 = -18;
	uint64_t x1208 = UINT64_MAX;
	volatile uint64_t t189 = 20587769536750LLU;

    t189 = (x1205/((x1206^x1207)*x1208));

    if (t189 != 0LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t t190 = 446572LLU;

    t190 = (x1209/((x1210^x1211)*x1212));

    if (t190 != 1LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static int64_t x1213 = 834617300253021LL;
	static int32_t x1214 = -39723839;
	int8_t x1215 = 3;
	int16_t x1216 = -1;
	int64_t t191 = -2813LL;

    t191 = (x1213/((x1214^x1215)*x1216));

    if (t191 != 21010489LL) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int32_t x1221 = INT32_MIN;
	uint16_t x1222 = 2U;
	static uint8_t x1223 = 3U;
	int64_t x1224 = INT64_MAX;

    t192 = (x1221/((x1222^x1223)*x1224));

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x1225 = INT64_MIN;
	int16_t x1226 = -1;
	volatile uint8_t x1228 = UINT8_MAX;

    t193 = (x1225/((x1226^x1227)*x1228));

    if (t193 != 141289400074368LL) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x1229 = INT8_MAX;
	uint32_t x1230 = 17U;
	volatile uint8_t x1231 = 78U;
	uint8_t x1232 = 18U;
	volatile uint32_t t194 = 3152U;

    t194 = (x1229/((x1230^x1231)*x1232));

    if (t194 != 0U) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x1241 = UINT16_MAX;
	static uint8_t x1242 = UINT8_MAX;
	volatile int32_t x1243 = -1;
	int32_t t195 = 93;

    t195 = (x1241/((x1242^x1243)*x1244));

    if (t195 != -42) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x1249 = 1;
	int8_t x1250 = -1;
	volatile int8_t x1251 = INT8_MIN;
	uint32_t t196 = 4U;

    t196 = (x1249/((x1250^x1251)*x1252));

    if (t196 != 0U) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x1253 = 39535969;
	int32_t x1254 = INT32_MIN;
	uint32_t x1255 = 1U;
	int16_t x1256 = -1;
	uint32_t t197 = 19516635U;

    t197 = (x1253/((x1254^x1255)*x1256));

    if (t197 != 0U) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x1257 = INT16_MIN;
	volatile int64_t x1258 = 7723LL;
	static int8_t x1259 = -1;
	int64_t t198 = -30414490008929LL;

    t198 = (x1257/((x1258^x1259)*x1260));

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x1265 = 393U;
	uint16_t x1266 = UINT16_MAX;
	uint8_t x1267 = UINT8_MAX;
	static int32_t x1268 = 15807;
	int32_t t199 = 926;

    t199 = (x1265/((x1266^x1267)*x1268));

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

