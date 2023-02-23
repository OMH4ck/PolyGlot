
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

int16_t x2 = INT16_MIN;
uint8_t x3 = 0U;
int64_t x5 = INT64_MAX;
volatile int8_t x6 = INT8_MAX;
volatile uint8_t x13 = 111U;
static volatile int32_t x14 = -1;
uint32_t x15 = UINT32_MAX;
static int16_t x20 = INT16_MAX;
static volatile int16_t x28 = 2;
static int8_t x34 = -1;
static int16_t x37 = -75;
static int16_t x49 = 10329;
static int8_t x51 = INT8_MIN;
int8_t x52 = -1;
static int32_t t9 = 3393;
uint8_t x68 = 17U;
int32_t t11 = -2;
volatile uint16_t x83 = 1U;
volatile int32_t t14 = -28;
static volatile uint8_t x97 = 1U;
int8_t x100 = INT8_MAX;
volatile int64_t x107 = INT64_MAX;
int8_t x124 = -1;
uint8_t x125 = UINT8_MAX;
int8_t x127 = -1;
static volatile int8_t x130 = -1;
int32_t x132 = INT32_MIN;
int64_t x135 = -44083910676765311LL;
uint16_t x140 = 9770U;
int32_t x155 = -30604;
uint64_t x165 = 13727518676400LLU;
volatile int32_t x168 = INT32_MIN;
volatile uint64_t t24 = 136062923043LLU;
uint64_t x175 = 7LLU;
static int64_t x179 = -3398410324808LL;
volatile int32_t t27 = 6;
volatile uint64_t x182 = UINT64_MAX;
uint16_t x183 = 9U;
int16_t x188 = -319;
uint32_t x190 = UINT32_MAX;
int32_t x191 = INT32_MAX;
uint32_t x193 = 2864305U;
volatile uint32_t x194 = UINT32_MAX;
int16_t x214 = -1;
uint8_t x215 = 0U;
int16_t x216 = -1;
int32_t t34 = 0;
uint8_t x217 = UINT8_MAX;
uint64_t x219 = 5LLU;
static int64_t t36 = 487334078366943LL;
int16_t x230 = -65;
int32_t t38 = 6093375;
int32_t t39 = -5;
int64_t x242 = 14030498829629LL;
volatile int32_t x246 = -1;
static volatile int8_t x256 = INT8_MIN;
volatile int64_t t42 = 25985974275LL;
uint16_t x259 = UINT16_MAX;
uint32_t x260 = 330903U;
int64_t t43 = INT64_MIN;
volatile int32_t x262 = INT32_MAX;
int8_t x271 = -1;
uint32_t x277 = UINT32_MAX;
int32_t x278 = -1;
int64_t x281 = INT64_MAX;
static int64_t t47 = INT64_MAX;
int16_t x296 = -2;
int32_t t49 = -20;
int16_t x297 = 256;
static volatile int32_t t50 = 510;
uint16_t x301 = 31U;
volatile int32_t t51 = 170;
static uint64_t x328 = 12036330116808252LLU;
volatile int64_t t58 = 25087LL;
int32_t x351 = -1;
static int64_t t59 = 837LL;
int64_t x357 = INT64_MAX;
uint8_t x359 = 1U;
volatile int32_t x360 = INT32_MAX;
int64_t t61 = INT64_MAX;
int16_t x363 = 287;
int32_t t62 = 402039;
uint8_t x368 = UINT8_MAX;
static int32_t x371 = 17300;
int16_t x372 = INT16_MIN;
volatile uint16_t x374 = 6U;
uint32_t x393 = 0U;
int8_t x394 = -1;
int16_t x399 = INT16_MIN;
uint64_t t69 = 0LLU;
volatile int32_t x405 = INT32_MIN;
volatile int32_t t71 = 4235;
volatile int32_t t72 = -236696204;
uint32_t x418 = UINT32_MAX;
volatile uint8_t x421 = 0U;
int64_t x428 = -1LL;
uint8_t x435 = 7U;
uint8_t x440 = UINT8_MAX;
static int32_t x450 = -1;
volatile int8_t x464 = -46;
static int64_t x469 = INT64_MAX;
int32_t x472 = 0;
int32_t t85 = -15764203;
int32_t t87 = -409467237;
volatile uint64_t x532 = 24LLU;
volatile int64_t x543 = -1LL;
int16_t x551 = -5564;
int32_t x555 = 4766144;
volatile int64_t x560 = 12163LL;
uint16_t x564 = 7U;
uint64_t x565 = UINT64_MAX;
volatile uint64_t t99 = UINT64_MAX;
volatile uint16_t x571 = 19431U;
uint8_t x575 = UINT8_MAX;
volatile int32_t x577 = INT32_MAX;
static uint64_t x579 = 26007007502537LLU;
int32_t x585 = 231058;
volatile uint16_t x591 = UINT16_MAX;
uint32_t x600 = 47379U;
uint32_t x601 = 3520010U;
int8_t x602 = -53;
static uint32_t x603 = 252U;
int16_t x612 = -2786;
uint32_t x625 = 150U;
int16_t x638 = -1;
volatile uint64_t t115 = 40300LLU;
volatile int8_t x649 = 1;
int32_t x656 = INT32_MIN;
volatile int8_t x658 = 53;
static volatile uint32_t x676 = UINT32_MAX;
static uint64_t x677 = 1485744646333854085LLU;
int16_t x679 = INT16_MIN;
int64_t x681 = INT64_MIN;
static int32_t x688 = INT32_MIN;
static uint32_t x700 = 425259U;
volatile int64_t t127 = -403610354541LL;
int64_t x702 = 6272LL;
volatile int32_t t128 = -128;
static volatile int16_t x711 = INT16_MIN;
uint64_t x726 = UINT64_MAX;
volatile uint32_t x728 = 1397U;
static volatile int64_t t131 = 3651085515056LL;
uint64_t x731 = 22281LLU;
static int32_t x741 = -1;
int8_t x749 = INT8_MIN;
int16_t x750 = 31;
int64_t x752 = -1LL;
int8_t x758 = INT8_MAX;
int8_t x763 = 0;
uint64_t t140 = 20656436542LLU;
uint32_t x774 = 1U;
static int8_t x780 = INT8_MAX;
int32_t t143 = 374;
uint64_t x786 = 279421867119328LLU;
volatile int32_t t144 = 317;
int16_t x796 = INT16_MIN;
int8_t x805 = INT8_MIN;
volatile int32_t t149 = -1052528362;
int32_t t150 = 698;
static int8_t x818 = INT8_MAX;
int16_t x822 = INT16_MAX;
static volatile int32_t t153 = 0;
int8_t x826 = -14;
uint16_t x828 = 27566U;
int16_t x835 = INT16_MIN;
int8_t x846 = -14;
volatile int16_t x855 = INT16_MAX;
int32_t x860 = INT32_MAX;
int32_t x863 = -156714;
volatile int32_t t160 = 2606606;
uint8_t x866 = 12U;
int64_t x871 = INT64_MIN;
volatile uint8_t x874 = UINT8_MAX;
static volatile int64_t x876 = INT64_MIN;
int64_t x890 = -4030LL;
int16_t x893 = INT16_MAX;
uint64_t x895 = 6LLU;
int32_t x899 = INT32_MIN;
volatile int32_t t166 = INT32_MIN;
volatile int32_t x904 = -20;
static int64_t x908 = INT64_MIN;
int16_t x909 = 0;
int8_t x915 = INT8_MAX;
uint32_t t172 = 344953492U;
uint64_t x944 = 2176331181013LLU;
int32_t t177 = -991;
int32_t x958 = INT32_MAX;
uint32_t x979 = UINT32_MAX;
volatile int32_t t180 = 5891;
int32_t x983 = INT32_MAX;
int16_t x986 = -32;
int64_t t182 = INT64_MIN;
int16_t x993 = INT16_MIN;
int32_t x999 = 15;
int8_t x1017 = 2;
int64_t x1041 = -1829853095LL;
int32_t x1042 = -1;
uint8_t x1045 = 8U;
int32_t t193 = 204;
static volatile int32_t t194 = -3789;
uint64_t x1054 = 777LLU;
static int8_t x1060 = -52;
int64_t x1064 = -14LL;
int32_t x1071 = -35922;


void f0(void) {
    	volatile int16_t x1 = -1;
	int64_t x4 = INT64_MIN;
	static int32_t t0 = -283;

    t0 = (x1^((x2*x3)<=x4));

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x7 = -2;
	int16_t x8 = INT16_MAX;
	int64_t t1 = 3LL;

    t1 = (x5^((x6*x7)<=x8));

    if (t1 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x16 = INT16_MIN;
	int32_t t2 = 836;

    t2 = (x13^((x14*x15)<=x16));

    if (t2 != 110) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x17 = INT8_MIN;
	int16_t x18 = INT16_MAX;
	uint8_t x19 = 3U;
	volatile int32_t t3 = -73925069;

    t3 = (x17^((x18*x19)<=x20));

    if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x21 = 3;
	volatile int64_t x22 = 12919091LL;
	static int16_t x23 = -1;
	uint16_t x24 = UINT16_MAX;
	volatile int32_t t4 = -124110;

    t4 = (x21^((x22*x23)<=x24));

    if (t4 != 2) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x25 = -4;
	int64_t x26 = 617515586433198LL;
	volatile int32_t x27 = -1;
	int32_t t5 = 1;

    t5 = (x25^((x26*x27)<=x28));

    if (t5 != -3) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x33 = INT16_MAX;
	uint8_t x35 = UINT8_MAX;
	static volatile int16_t x36 = -1;
	int32_t t6 = -2161713;

    t6 = (x33^((x34*x35)<=x36));

    if (t6 != 32766) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x38 = INT16_MIN;
	int64_t x39 = 50257914LL;
	static int16_t x40 = 1;
	volatile int32_t t7 = 1374892;

    t7 = (x37^((x38*x39)<=x40));

    if (t7 != -76) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x50 = INT16_MAX;
	int32_t t8 = -49;

    t8 = (x49^((x50*x51)<=x52));

    if (t8 != 10328) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x53 = INT8_MAX;
	volatile uint64_t x54 = 497155586868LLU;
	uint16_t x55 = 8704U;
	int32_t x56 = -3363;

    t9 = (x53^((x54*x55)<=x56));

    if (t9 != 126) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x61 = -1;
	uint64_t x62 = 367453383274LLU;
	int32_t x63 = INT32_MIN;
	volatile int64_t x64 = -46825385761445648LL;
	volatile int32_t t10 = -20734085;

    t10 = (x61^((x62*x63)<=x64));

    if (t10 != -2) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x65 = 3629652;
	static uint32_t x66 = UINT32_MAX;
	int8_t x67 = INT8_MIN;

    t11 = (x65^((x66*x67)<=x68));

    if (t11 != 3629652) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x81 = UINT32_MAX;
	static volatile uint8_t x82 = 2U;
	volatile int64_t x84 = -64737389LL;
	volatile uint32_t t12 = UINT32_MAX;

    t12 = (x81^((x82*x83)<=x84));

    if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x85 = 15524661;
	static volatile uint16_t x86 = 28U;
	static volatile int32_t x87 = 45523773;
	static volatile int8_t x88 = 10;
	int32_t t13 = 9;

    t13 = (x85^((x86*x87)<=x88));

    if (t13 != 15524661) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x93 = INT16_MAX;
	volatile uint8_t x94 = 52U;
	static int16_t x95 = INT16_MAX;
	int32_t x96 = INT32_MAX;

    t14 = (x93^((x94*x95)<=x96));

    if (t14 != 32766) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x98 = 8817U;
	volatile int16_t x99 = INT16_MIN;
	volatile int32_t t15 = 480031;

    t15 = (x97^((x98*x99)<=x100));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x105 = -2;
	int16_t x106 = -1;
	static uint32_t x108 = UINT32_MAX;
	volatile int32_t t16 = 403524;

    t16 = (x105^((x106*x107)<=x108));

    if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x117 = -1;
	int64_t x118 = INT64_MIN;
	static uint64_t x119 = 4262897477729259917LLU;
	static volatile uint16_t x120 = 11U;
	volatile int32_t t17 = -8455;

    t17 = (x117^((x118*x119)<=x120));

    if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x121 = INT16_MIN;
	volatile uint32_t x122 = UINT32_MAX;
	int16_t x123 = 12;
	volatile int32_t t18 = 22708749;

    t18 = (x121^((x122*x123)<=x124));

    if (t18 != -32767) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x126 = INT16_MAX;
	int16_t x128 = INT16_MIN;
	int32_t t19 = -3510080;

    t19 = (x125^((x126*x127)<=x128));

    if (t19 != 255) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint16_t x129 = 5736U;
	uint8_t x131 = 3U;
	volatile int32_t t20 = -223422;

    t20 = (x129^((x130*x131)<=x132));

    if (t20 != 5736) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x133 = UINT16_MAX;
	uint64_t x134 = UINT64_MAX;
	int32_t x136 = INT32_MAX;
	volatile int32_t t21 = 87;

    t21 = (x133^((x134*x135)<=x136));

    if (t21 != 65535) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint64_t x137 = 996667206838476LLU;
	volatile int16_t x138 = INT16_MAX;
	volatile uint64_t x139 = 4246LLU;
	static volatile uint64_t t22 = 1363390LLU;

    t22 = (x137^((x138*x139)<=x140));

    if (t22 != 996667206838476LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint8_t x153 = UINT8_MAX;
	uint64_t x154 = UINT64_MAX;
	int16_t x156 = INT16_MIN;
	volatile int32_t t23 = -4;

    t23 = (x153^((x154*x155)<=x156));

    if (t23 != 254) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x166 = 1U;
	static int16_t x167 = 679;

    t24 = (x165^((x166*x167)<=x168));

    if (t24 != 13727518676400LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x169 = 9617U;
	int16_t x170 = 0;
	static int64_t x171 = INT64_MIN;
	int16_t x172 = INT16_MIN;
	static int32_t t25 = -16171369;

    t25 = (x169^((x170*x171)<=x172));

    if (t25 != 9617) { NG(); } else { ; }
	
}

void f26(void) {
    	static int64_t x173 = 852347201938376LL;
	int32_t x174 = INT32_MAX;
	int8_t x176 = INT8_MAX;
	static int64_t t26 = -22796553776249954LL;

    t26 = (x173^((x174*x175)<=x176));

    if (t26 != 852347201938376LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x177 = -1;
	int8_t x178 = 26;
	uint8_t x180 = 0U;

    t27 = (x177^((x178*x179)<=x180));

    if (t27 != -2) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x181 = INT64_MAX;
	volatile int16_t x184 = INT16_MIN;
	int64_t t28 = INT64_MAX;

    t28 = (x181^((x182*x183)<=x184));

    if (t28 != INT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int16_t x185 = -1;
	static int16_t x186 = INT16_MIN;
	uint8_t x187 = 3U;
	int32_t t29 = 1;

    t29 = (x185^((x186*x187)<=x188));

    if (t29 != -2) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x189 = -14380LL;
	int8_t x192 = INT8_MIN;
	volatile int64_t t30 = -15300672825670315LL;

    t30 = (x189^((x190*x191)<=x192));

    if (t30 != -14379LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x195 = 6U;
	int64_t x196 = INT64_MIN;
	static uint32_t t31 = 57050537U;

    t31 = (x193^((x194*x195)<=x196));

    if (t31 != 2864305U) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x201 = INT8_MIN;
	int64_t x202 = INT64_MAX;
	static int16_t x203 = 0;
	int64_t x204 = -43195564106LL;
	volatile int32_t t32 = -3894;

    t32 = (x201^((x202*x203)<=x204));

    if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x205 = INT32_MIN;
	uint32_t x206 = 860889U;
	static uint8_t x207 = 1U;
	uint64_t x208 = 334817LLU;
	int32_t t33 = INT32_MIN;

    t33 = (x205^((x206*x207)<=x208));

    if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x213 = 845;

    t34 = (x213^((x214*x215)<=x216));

    if (t34 != 845) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x218 = INT64_MIN;
	int16_t x220 = 197;
	static volatile int32_t t35 = 12665234;

    t35 = (x217^((x218*x219)<=x220));

    if (t35 != 255) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x225 = -1LL;
	static uint8_t x226 = UINT8_MAX;
	static volatile int16_t x227 = INT16_MIN;
	uint8_t x228 = 3U;

    t36 = (x225^((x226*x227)<=x228));

    if (t36 != -2LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x229 = -1;
	static volatile uint64_t x231 = 822299LLU;
	static volatile uint64_t x232 = 22850648LLU;
	volatile int32_t t37 = 6639;

    t37 = (x229^((x230*x231)<=x232));

    if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x233 = INT16_MIN;
	static int16_t x234 = INT16_MIN;
	int16_t x235 = INT16_MAX;
	int64_t x236 = -1LL;

    t38 = (x233^((x234*x235)<=x236));

    if (t38 != -32767) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x237 = 0U;
	int16_t x238 = INT16_MAX;
	int8_t x239 = INT8_MIN;
	volatile int16_t x240 = -1;

    t39 = (x237^((x238*x239)<=x240));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x241 = -53;
	uint64_t x243 = 958780562LLU;
	volatile int8_t x244 = 6;
	volatile int32_t t40 = -10849;

    t40 = (x241^((x242*x243)<=x244));

    if (t40 != -53) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x245 = 12645LLU;
	static int32_t x247 = INT32_MAX;
	int64_t x248 = -15171LL;
	uint64_t t41 = 39629LLU;

    t41 = (x245^((x246*x247)<=x248));

    if (t41 != 12644LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x253 = -4248425611959LL;
	uint8_t x254 = 17U;
	uint64_t x255 = 35LLU;

    t42 = (x253^((x254*x255)<=x256));

    if (t42 != -4248425611960LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x257 = INT64_MIN;
	int8_t x258 = INT8_MAX;

    t43 = (x257^((x258*x259)<=x260));

    if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint8_t x261 = 21U;
	static uint64_t x263 = 2563294LLU;
	uint16_t x264 = 1U;
	static volatile int32_t t44 = -19;

    t44 = (x261^((x262*x263)<=x264));

    if (t44 != 21) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x269 = INT8_MIN;
	uint8_t x270 = 18U;
	int64_t x272 = 17585457996LL;
	volatile int32_t t45 = -1;

    t45 = (x269^((x270*x271)<=x272));

    if (t45 != -127) { NG(); } else { ; }
	
}

void f46(void) {
    	static int8_t x279 = -1;
	int8_t x280 = -1;
	uint32_t t46 = UINT32_MAX;

    t46 = (x277^((x278*x279)<=x280));

    if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint32_t x282 = UINT32_MAX;
	int16_t x283 = INT16_MIN;
	int64_t x284 = -85256545LL;

    t47 = (x281^((x282*x283)<=x284));

    if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x289 = INT32_MIN;
	uint64_t x290 = UINT64_MAX;
	volatile int64_t x291 = INT64_MIN;
	static int16_t x292 = INT16_MAX;
	volatile int32_t t48 = INT32_MIN;

    t48 = (x289^((x290*x291)<=x292));

    if (t48 != INT32_MIN) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint16_t x293 = UINT16_MAX;
	volatile int64_t x294 = INT64_MAX;
	static uint64_t x295 = 40534165051113LLU;

    t49 = (x293^((x294*x295)<=x296));

    if (t49 != 65534) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x298 = 1;
	int32_t x299 = INT32_MIN;
	int8_t x300 = -1;

    t50 = (x297^((x298*x299)<=x300));

    if (t50 != 257) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x302 = -1LL;
	int32_t x303 = -1;
	int64_t x304 = INT64_MIN;

    t51 = (x301^((x302*x303)<=x304));

    if (t51 != 31) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x305 = -28;
	static volatile uint8_t x306 = 29U;
	int64_t x307 = 2923127550947226LL;
	int8_t x308 = INT8_MIN;
	static volatile int32_t t52 = -597;

    t52 = (x305^((x306*x307)<=x308));

    if (t52 != -28) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint16_t x309 = UINT16_MAX;
	volatile uint8_t x310 = 0U;
	int16_t x311 = -1;
	volatile int16_t x312 = INT16_MIN;
	int32_t t53 = -3;

    t53 = (x309^((x310*x311)<=x312));

    if (t53 != 65535) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x313 = -1;
	uint8_t x314 = 9U;
	int64_t x315 = -1LL;
	static uint8_t x316 = 1U;
	static volatile int32_t t54 = -340;

    t54 = (x313^((x314*x315)<=x316));

    if (t54 != -2) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x321 = UINT8_MAX;
	int64_t x322 = INT64_MAX;
	volatile uint64_t x323 = UINT64_MAX;
	uint32_t x324 = 9751U;
	volatile int32_t t55 = -1490;

    t55 = (x321^((x322*x323)<=x324));

    if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x325 = -1LL;
	uint32_t x326 = UINT32_MAX;
	int32_t x327 = INT32_MIN;
	volatile int64_t t56 = 575LL;

    t56 = (x325^((x326*x327)<=x328));

    if (t56 != -2LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x337 = -386LL;
	int8_t x338 = -1;
	int16_t x339 = -1;
	volatile uint16_t x340 = 6U;
	int64_t t57 = 12609015782LL;

    t57 = (x337^((x338*x339)<=x340));

    if (t57 != -385LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x341 = INT64_MIN;
	uint8_t x342 = 31U;
	int64_t x343 = -1LL;
	volatile int64_t x344 = 3283193074365937LL;

    t58 = (x341^((x342*x343)<=x344));

    if (t58 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x349 = -108474LL;
	int32_t x350 = INT32_MAX;
	uint64_t x352 = UINT64_MAX;

    t59 = (x349^((x350*x351)<=x352));

    if (t59 != -108473LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x353 = 122596746U;
	volatile int8_t x354 = INT8_MIN;
	static int64_t x355 = 217302LL;
	uint16_t x356 = 4U;
	uint32_t t60 = 3679U;

    t60 = (x353^((x354*x355)<=x356));

    if (t60 != 122596747U) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x358 = INT64_MAX;

    t61 = (x357^((x358*x359)<=x360));

    if (t61 != INT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x361 = INT16_MAX;
	uint8_t x362 = 5U;
	volatile uint32_t x364 = 643312737U;

    t62 = (x361^((x362*x363)<=x364));

    if (t62 != 32766) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x365 = UINT16_MAX;
	int64_t x366 = -6007LL;
	volatile int8_t x367 = INT8_MIN;
	static int32_t t63 = 4501;

    t63 = (x365^((x366*x367)<=x368));

    if (t63 != 65535) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x369 = INT8_MIN;
	int8_t x370 = -1;
	volatile int32_t t64 = 2466;

    t64 = (x369^((x370*x371)<=x372));

    if (t64 != -128) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x373 = -1;
	static uint32_t x375 = UINT32_MAX;
	uint32_t x376 = 13657603U;
	int32_t t65 = 49656235;

    t65 = (x373^((x374*x375)<=x376));

    if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x377 = INT32_MIN;
	static volatile uint32_t x378 = 204056U;
	uint16_t x379 = 1U;
	uint16_t x380 = 4U;
	int32_t t66 = INT32_MIN;

    t66 = (x377^((x378*x379)<=x380));

    if (t66 != INT32_MIN) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x385 = -716097;
	uint32_t x386 = UINT32_MAX;
	int32_t x387 = INT32_MAX;
	int8_t x388 = INT8_MIN;
	volatile int32_t t67 = 354929192;

    t67 = (x385^((x386*x387)<=x388));

    if (t67 != -716098) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x395 = -1LL;
	uint64_t x396 = 33227325195LLU;
	volatile uint32_t t68 = 956891685U;

    t68 = (x393^((x394*x395)<=x396));

    if (t68 != 1U) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x397 = 1283941146041LLU;
	static int8_t x398 = 47;
	static int16_t x400 = -1;

    t69 = (x397^((x398*x399)<=x400));

    if (t69 != 1283941146040LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int8_t x406 = 34;
	int32_t x407 = 66;
	int16_t x408 = INT16_MIN;
	int32_t t70 = INT32_MIN;

    t70 = (x405^((x406*x407)<=x408));

    if (t70 != INT32_MIN) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x409 = 1143;
	int16_t x410 = -1;
	int8_t x411 = 0;
	int8_t x412 = INT8_MIN;

    t71 = (x409^((x410*x411)<=x412));

    if (t71 != 1143) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x413 = 1;
	static uint8_t x414 = 11U;
	int64_t x415 = 15704341664523831LL;
	int8_t x416 = -46;

    t72 = (x413^((x414*x415)<=x416));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x417 = INT8_MIN;
	volatile int16_t x419 = -1;
	volatile int16_t x420 = -1;
	int32_t t73 = -55226;

    t73 = (x417^((x418*x419)<=x420));

    if (t73 != -127) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x422 = 0U;
	int16_t x423 = -1;
	uint16_t x424 = 6923U;
	volatile int32_t t74 = 1;

    t74 = (x421^((x422*x423)<=x424));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x425 = INT8_MIN;
	volatile int16_t x426 = INT16_MAX;
	volatile int16_t x427 = -1109;
	int32_t t75 = 0;

    t75 = (x425^((x426*x427)<=x428));

    if (t75 != -127) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint16_t x433 = 3936U;
	int16_t x434 = INT16_MIN;
	volatile uint32_t x436 = 320U;
	static int32_t t76 = -11356;

    t76 = (x433^((x434*x435)<=x436));

    if (t76 != 3936) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x437 = UINT64_MAX;
	uint8_t x438 = 44U;
	int16_t x439 = -1;
	volatile uint64_t t77 = 512026707172LLU;

    t77 = (x437^((x438*x439)<=x440));

    if (t77 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static int64_t x441 = -1LL;
	int8_t x442 = 1;
	int64_t x443 = INT64_MAX;
	uint64_t x444 = 154586524718LLU;
	int64_t t78 = 4262360344LL;

    t78 = (x441^((x442*x443)<=x444));

    if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x445 = 59024;
	int8_t x446 = INT8_MIN;
	volatile int8_t x447 = -15;
	int8_t x448 = INT8_MIN;
	volatile int32_t t79 = -6309;

    t79 = (x445^((x446*x447)<=x448));

    if (t79 != 59024) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x449 = -11;
	static uint32_t x451 = 31671U;
	int16_t x452 = -2;
	volatile int32_t t80 = 824391;

    t80 = (x449^((x450*x451)<=x452));

    if (t80 != -12) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x461 = INT64_MIN;
	int64_t x462 = 67625683LL;
	uint64_t x463 = UINT64_MAX;
	static volatile int64_t t81 = 3753034LL;

    t81 = (x461^((x462*x463)<=x464));

    if (t81 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x470 = UINT32_MAX;
	uint16_t x471 = UINT16_MAX;
	int64_t t82 = INT64_MAX;

    t82 = (x469^((x470*x471)<=x472));

    if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint32_t x481 = 52004959U;
	uint16_t x482 = 64U;
	static uint16_t x483 = UINT16_MAX;
	int32_t x484 = INT32_MIN;
	volatile uint32_t t83 = 43442128U;

    t83 = (x481^((x482*x483)<=x484));

    if (t83 != 52004959U) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x485 = -10966;
	static uint16_t x486 = UINT16_MAX;
	volatile uint64_t x487 = 10LLU;
	int16_t x488 = 1;
	volatile int32_t t84 = 12486790;

    t84 = (x485^((x486*x487)<=x488));

    if (t84 != -10966) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x489 = INT16_MAX;
	volatile int32_t x490 = 19001;
	uint16_t x491 = 15384U;
	static int32_t x492 = -1;

    t85 = (x489^((x490*x491)<=x492));

    if (t85 != 32767) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x493 = -1;
	uint16_t x494 = 3181U;
	volatile int16_t x495 = 0;
	volatile int64_t x496 = -1LL;
	int32_t t86 = 112821;

    t86 = (x493^((x494*x495)<=x496));

    if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x501 = INT32_MIN;
	uint32_t x502 = 29U;
	volatile int64_t x503 = -706440581115LL;
	volatile int8_t x504 = 0;

    t87 = (x501^((x502*x503)<=x504));

    if (t87 != -2147483647) { NG(); } else { ; }
	
}

void f88(void) {
    	static int32_t x505 = INT32_MAX;
	static int16_t x506 = INT16_MIN;
	volatile uint64_t x507 = 7454228237448135LLU;
	int16_t x508 = 420;
	static volatile int32_t t88 = INT32_MAX;

    t88 = (x505^((x506*x507)<=x508));

    if (t88 != INT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint32_t x521 = 1U;
	static int16_t x522 = 1;
	volatile uint16_t x523 = 230U;
	uint64_t x524 = 549178867006LLU;
	static uint32_t t89 = 48U;

    t89 = (x521^((x522*x523)<=x524));

    if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile uint64_t x525 = UINT64_MAX;
	uint64_t x526 = 191080LLU;
	uint16_t x527 = 5864U;
	int8_t x528 = INT8_MIN;
	volatile uint64_t t90 = 3990438541LLU;

    t90 = (x525^((x526*x527)<=x528));

    if (t90 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x529 = INT16_MAX;
	static int64_t x530 = -13707068067LL;
	int8_t x531 = 3;
	static volatile int32_t t91 = -1493093;

    t91 = (x529^((x530*x531)<=x532));

    if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x537 = UINT32_MAX;
	static int8_t x538 = -22;
	uint64_t x539 = UINT64_MAX;
	int16_t x540 = INT16_MAX;
	volatile uint32_t t92 = 12860U;

    t92 = (x537^((x538*x539)<=x540));

    if (t92 != 4294967294U) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x541 = INT16_MIN;
	int16_t x542 = INT16_MIN;
	int8_t x544 = 1;
	static int32_t t93 = -1;

    t93 = (x541^((x542*x543)<=x544));

    if (t93 != -32768) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int16_t x545 = -413;
	static uint64_t x546 = 1394047953597LLU;
	int8_t x547 = INT8_MIN;
	int16_t x548 = 72;
	static volatile int32_t t94 = -6733;

    t94 = (x545^((x546*x547)<=x548));

    if (t94 != -413) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint32_t x549 = 114U;
	int8_t x550 = INT8_MIN;
	int16_t x552 = 5604;
	volatile uint32_t t95 = 915U;

    t95 = (x549^((x550*x551)<=x552));

    if (t95 != 114U) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x553 = INT32_MAX;
	uint64_t x554 = 3LLU;
	volatile uint64_t x556 = UINT64_MAX;
	volatile int32_t t96 = 47761516;

    t96 = (x553^((x554*x555)<=x556));

    if (t96 != 2147483646) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint16_t x557 = 0U;
	uint8_t x558 = UINT8_MAX;
	int64_t x559 = 7376425198668182LL;
	int32_t t97 = 160;

    t97 = (x557^((x558*x559)<=x560));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x561 = INT32_MIN;
	static int8_t x562 = -1;
	uint32_t x563 = 23086415U;
	int32_t t98 = INT32_MIN;

    t98 = (x561^((x562*x563)<=x564));

    if (t98 != INT32_MIN) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x566 = 11U;
	volatile int32_t x567 = 22021920;
	static uint16_t x568 = 13693U;

    t99 = (x565^((x566*x567)<=x568));

    if (t99 != UINT64_MAX) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint64_t x569 = UINT64_MAX;
	uint8_t x570 = 2U;
	static int16_t x572 = -1;
	volatile uint64_t t100 = UINT64_MAX;

    t100 = (x569^((x570*x571)<=x572));

    if (t100 != UINT64_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x573 = -153;
	int8_t x574 = -22;
	int32_t x576 = 30486961;
	int32_t t101 = 0;

    t101 = (x573^((x574*x575)<=x576));

    if (t101 != -154) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint16_t x578 = 21202U;
	volatile int32_t x580 = -1;
	static int32_t t102 = 364;

    t102 = (x577^((x578*x579)<=x580));

    if (t102 != 2147483646) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int8_t x581 = -11;
	uint16_t x582 = UINT16_MAX;
	static int64_t x583 = 781LL;
	int32_t x584 = -4768;
	volatile int32_t t103 = -11916;

    t103 = (x581^((x582*x583)<=x584));

    if (t103 != -11) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x586 = -13;
	uint16_t x587 = 2843U;
	int32_t x588 = INT32_MIN;
	static volatile int32_t t104 = -120715185;

    t104 = (x585^((x586*x587)<=x588));

    if (t104 != 231058) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x589 = 3U;
	int64_t x590 = -1LL;
	int16_t x592 = -1;
	volatile int32_t t105 = -6;

    t105 = (x589^((x590*x591)<=x592));

    if (t105 != 2) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x593 = -1;
	int8_t x594 = -25;
	volatile int64_t x595 = -1LL;
	volatile uint32_t x596 = 1381U;
	volatile int32_t t106 = -242258;

    t106 = (x593^((x594*x595)<=x596));

    if (t106 != -2) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x597 = INT64_MAX;
	int64_t x598 = -1LL;
	uint32_t x599 = UINT32_MAX;
	volatile int64_t t107 = -1257LL;

    t107 = (x597^((x598*x599)<=x600));

    if (t107 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint32_t x604 = 89U;
	uint32_t t108 = 0U;

    t108 = (x601^((x602*x603)<=x604));

    if (t108 != 3520010U) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int64_t x605 = 1990292598321247710LL;
	int8_t x606 = -1;
	static int16_t x607 = -1;
	int16_t x608 = 8135;
	int64_t t109 = 32390LL;

    t109 = (x605^((x606*x607)<=x608));

    if (t109 != 1990292598321247711LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile uint16_t x609 = UINT16_MAX;
	int16_t x610 = -1;
	volatile int16_t x611 = 47;
	volatile int32_t t110 = -1307154;

    t110 = (x609^((x610*x611)<=x612));

    if (t110 != 65535) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x613 = UINT64_MAX;
	uint8_t x614 = UINT8_MAX;
	int16_t x615 = 248;
	int32_t x616 = INT32_MAX;
	volatile uint64_t t111 = 986261264LLU;

    t111 = (x613^((x614*x615)<=x616));

    if (t111 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x617 = INT16_MIN;
	volatile int32_t x618 = 123;
	int8_t x619 = INT8_MIN;
	static int8_t x620 = INT8_MAX;
	int32_t t112 = -6012;

    t112 = (x617^((x618*x619)<=x620));

    if (t112 != -32767) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint16_t x626 = 192U;
	int8_t x627 = 9;
	uint16_t x628 = 5812U;
	static volatile uint32_t t113 = 2106997U;

    t113 = (x625^((x626*x627)<=x628));

    if (t113 != 151U) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int32_t x629 = INT32_MAX;
	uint32_t x630 = 489U;
	int8_t x631 = -1;
	volatile int64_t x632 = INT64_MIN;
	volatile int32_t t114 = INT32_MAX;

    t114 = (x629^((x630*x631)<=x632));

    if (t114 != INT32_MAX) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint64_t x637 = 5726221LLU;
	static uint16_t x639 = 21U;
	int32_t x640 = -1;

    t115 = (x637^((x638*x639)<=x640));

    if (t115 != 5726220LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x641 = INT16_MIN;
	static int32_t x642 = INT32_MIN;
	int64_t x643 = -1LL;
	int32_t x644 = -5161;
	volatile int32_t t116 = -617769979;

    t116 = (x641^((x642*x643)<=x644));

    if (t116 != -32768) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x645 = 530231403237929790LL;
	int64_t x646 = -1LL;
	volatile int32_t x647 = INT32_MAX;
	static int64_t x648 = INT64_MIN;
	volatile int64_t t117 = 122407874388019LL;

    t117 = (x645^((x646*x647)<=x648));

    if (t117 != 530231403237929790LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x650 = 908654;
	volatile uint32_t x651 = 3922U;
	static uint32_t x652 = UINT32_MAX;
	volatile int32_t t118 = 1;

    t118 = (x649^((x650*x651)<=x652));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x653 = 301899LL;
	int64_t x654 = 2512834577762LL;
	static uint8_t x655 = UINT8_MAX;
	int64_t t119 = 118LL;

    t119 = (x653^((x654*x655)<=x656));

    if (t119 != 301899LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x657 = 5U;
	static int64_t x659 = -102853LL;
	static volatile uint8_t x660 = 63U;
	volatile int32_t t120 = 198700402;

    t120 = (x657^((x658*x659)<=x660));

    if (t120 != 4) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x669 = INT32_MIN;
	int64_t x670 = -1LL;
	uint32_t x671 = 232841458U;
	int64_t x672 = -104020010597LL;
	int32_t t121 = INT32_MIN;

    t121 = (x669^((x670*x671)<=x672));

    if (t121 != INT32_MIN) { NG(); } else { ; }
	
}

void f122(void) {
    	static int8_t x673 = INT8_MIN;
	int64_t x674 = -95634634445LL;
	uint32_t x675 = 16579U;
	int32_t t122 = -11597;

    t122 = (x673^((x674*x675)<=x676));

    if (t122 != -127) { NG(); } else { ; }
	
}

void f123(void) {
    	static int16_t x678 = INT16_MAX;
	int32_t x680 = -13806502;
	volatile uint64_t t123 = 4498579248119717603LLU;

    t123 = (x677^((x678*x679)<=x680));

    if (t123 != 1485744646333854084LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x682 = 10;
	uint32_t x683 = 14191678U;
	static int16_t x684 = INT16_MIN;
	int64_t t124 = 112LL;

    t124 = (x681^((x682*x683)<=x684));

    if (t124 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x685 = INT32_MIN;
	volatile int8_t x686 = -1;
	int8_t x687 = INT8_MIN;
	int32_t t125 = INT32_MIN;

    t125 = (x685^((x686*x687)<=x688));

    if (t125 != INT32_MIN) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x693 = 179062760566613LLU;
	uint32_t x694 = UINT32_MAX;
	uint8_t x695 = UINT8_MAX;
	int8_t x696 = -57;
	uint64_t t126 = 3577959329LLU;

    t126 = (x693^((x694*x695)<=x696));

    if (t126 != 179062760566612LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x697 = INT64_MIN;
	static int32_t x698 = 299;
	int64_t x699 = -409973LL;

    t127 = (x697^((x698*x699)<=x700));

    if (t127 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x701 = 75;
	int16_t x703 = INT16_MIN;
	uint64_t x704 = UINT64_MAX;

    t128 = (x701^((x702*x703)<=x704));

    if (t128 != 74) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x709 = -1;
	int16_t x710 = -1;
	int16_t x712 = INT16_MIN;
	int32_t t129 = 0;

    t129 = (x709^((x710*x711)<=x712));

    if (t129 != -1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x717 = INT8_MAX;
	uint8_t x718 = UINT8_MAX;
	static int32_t x719 = 607;
	int64_t x720 = 51760496LL;
	int32_t t130 = 41546384;

    t130 = (x717^((x718*x719)<=x720));

    if (t130 != 126) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x725 = -1LL;
	static int32_t x727 = INT32_MIN;

    t131 = (x725^((x726*x727)<=x728));

    if (t131 != -1LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x729 = INT64_MIN;
	volatile uint8_t x730 = 7U;
	uint16_t x732 = 24462U;
	volatile int64_t t132 = INT64_MIN;

    t132 = (x729^((x730*x731)<=x732));

    if (t132 != INT64_MIN) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x733 = INT8_MIN;
	int8_t x734 = -1;
	uint16_t x735 = 1630U;
	volatile int32_t x736 = INT32_MAX;
	int32_t t133 = -1;

    t133 = (x733^((x734*x735)<=x736));

    if (t133 != -127) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x742 = INT32_MIN;
	volatile int8_t x743 = 1;
	int64_t x744 = -4871271LL;
	int32_t t134 = 34;

    t134 = (x741^((x742*x743)<=x744));

    if (t134 != -2) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x745 = 2U;
	int8_t x746 = -1;
	static int64_t x747 = -6789687311LL;
	int64_t x748 = INT64_MIN;
	int32_t t135 = -549506481;

    t135 = (x745^((x746*x747)<=x748));

    if (t135 != 2) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint16_t x751 = 15061U;
	volatile int32_t t136 = 8491715;

    t136 = (x749^((x750*x751)<=x752));

    if (t136 != -128) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x753 = -1;
	volatile int8_t x754 = INT8_MIN;
	uint64_t x755 = 64810982981LLU;
	int8_t x756 = 4;
	int32_t t137 = 178;

    t137 = (x753^((x754*x755)<=x756));

    if (t137 != -1) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x757 = INT16_MIN;
	uint32_t x759 = UINT32_MAX;
	uint32_t x760 = 22603736U;
	volatile int32_t t138 = 798401;

    t138 = (x757^((x758*x759)<=x760));

    if (t138 != -32768) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int16_t x761 = -71;
	int8_t x762 = -1;
	static uint16_t x764 = 30735U;
	volatile int32_t t139 = 353138688;

    t139 = (x761^((x762*x763)<=x764));

    if (t139 != -72) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile uint64_t x765 = 479LLU;
	static uint8_t x766 = 51U;
	static volatile int64_t x767 = -1LL;
	uint8_t x768 = UINT8_MAX;

    t140 = (x765^((x766*x767)<=x768));

    if (t140 != 478LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x773 = -1;
	static int16_t x775 = -66;
	static int8_t x776 = -1;
	int32_t t141 = -22;

    t141 = (x773^((x774*x775)<=x776));

    if (t141 != -2) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint64_t x777 = 4225484061700LLU;
	uint64_t x778 = 208930177LLU;
	uint16_t x779 = UINT16_MAX;
	uint64_t t142 = 108132973531LLU;

    t142 = (x777^((x778*x779)<=x780));

    if (t142 != 4225484061700LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x781 = 11086;
	static int64_t x782 = -472878950540250901LL;
	uint8_t x783 = 3U;
	int64_t x784 = INT64_MIN;

    t143 = (x781^((x782*x783)<=x784));

    if (t143 != 11086) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x785 = 57U;
	uint64_t x787 = 231LLU;
	uint8_t x788 = 1U;

    t144 = (x785^((x786*x787)<=x788));

    if (t144 != 57) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x789 = INT32_MIN;
	volatile int8_t x790 = INT8_MIN;
	uint32_t x791 = 596U;
	int8_t x792 = -1;
	volatile int32_t t145 = 456;

    t145 = (x789^((x790*x791)<=x792));

    if (t145 != -2147483647) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int64_t x793 = 606LL;
	int64_t x794 = -1LL;
	static uint32_t x795 = UINT32_MAX;
	volatile int64_t t146 = 54060LL;

    t146 = (x793^((x794*x795)<=x796));

    if (t146 != 607LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static int8_t x797 = -1;
	static int64_t x798 = -1LL;
	int16_t x799 = 15876;
	volatile int8_t x800 = INT8_MIN;
	int32_t t147 = -2;

    t147 = (x797^((x798*x799)<=x800));

    if (t147 != -2) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x801 = -1;
	int8_t x802 = 1;
	int16_t x803 = -1;
	uint8_t x804 = 1U;
	int32_t t148 = 14414597;

    t148 = (x801^((x802*x803)<=x804));

    if (t148 != -2) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x806 = 4088710071LL;
	int16_t x807 = INT16_MIN;
	static uint64_t x808 = UINT64_MAX;

    t149 = (x805^((x806*x807)<=x808));

    if (t149 != -127) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x809 = -1;
	int32_t x810 = -5;
	uint8_t x811 = 1U;
	int64_t x812 = INT64_MAX;

    t150 = (x809^((x810*x811)<=x812));

    if (t150 != -2) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x813 = 195U;
	int32_t x814 = 23456;
	volatile int64_t x815 = 20534625210LL;
	int64_t x816 = INT64_MIN;
	volatile uint32_t t151 = 10U;

    t151 = (x813^((x814*x815)<=x816));

    if (t151 != 195U) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x817 = -675;
	uint16_t x819 = UINT16_MAX;
	static int16_t x820 = INT16_MIN;
	int32_t t152 = 42535;

    t152 = (x817^((x818*x819)<=x820));

    if (t152 != -675) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint16_t x821 = 12928U;
	static int8_t x823 = -1;
	int64_t x824 = INT64_MIN;

    t153 = (x821^((x822*x823)<=x824));

    if (t153 != 12928) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x825 = INT16_MAX;
	volatile int8_t x827 = INT8_MAX;
	static volatile int32_t t154 = 123;

    t154 = (x825^((x826*x827)<=x828));

    if (t154 != 32766) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x833 = UINT16_MAX;
	int16_t x834 = -1;
	int64_t x836 = INT64_MIN;
	volatile int32_t t155 = 6377231;

    t155 = (x833^((x834*x835)<=x836));

    if (t155 != 65535) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint8_t x845 = UINT8_MAX;
	int8_t x847 = 0;
	int8_t x848 = INT8_MAX;
	int32_t t156 = -226;

    t156 = (x845^((x846*x847)<=x848));

    if (t156 != 254) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x849 = 10U;
	uint8_t x850 = 2U;
	volatile uint16_t x851 = 1366U;
	int16_t x852 = 1281;
	static int32_t t157 = 3425966;

    t157 = (x849^((x850*x851)<=x852));

    if (t157 != 10) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x853 = 0U;
	volatile uint16_t x854 = UINT16_MAX;
	static volatile int16_t x856 = INT16_MIN;
	static volatile int32_t t158 = 1519456;

    t158 = (x853^((x854*x855)<=x856));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x857 = UINT32_MAX;
	int64_t x858 = -1LL;
	int8_t x859 = 1;
	volatile uint32_t t159 = 4U;

    t159 = (x857^((x858*x859)<=x860));

    if (t159 != 4294967294U) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x861 = -1;
	static uint64_t x862 = UINT64_MAX;
	uint8_t x864 = 1U;

    t160 = (x861^((x862*x863)<=x864));

    if (t160 != -1) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x865 = -5;
	int8_t x867 = INT8_MIN;
	uint16_t x868 = 6U;
	int32_t t161 = 1;

    t161 = (x865^((x866*x867)<=x868));

    if (t161 != -6) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x869 = INT64_MAX;
	static uint8_t x870 = 0U;
	int64_t x872 = INT64_MIN;
	static int64_t t162 = INT64_MAX;

    t162 = (x869^((x870*x871)<=x872));

    if (t162 != INT64_MAX) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x873 = INT32_MIN;
	static uint16_t x875 = 7660U;
	volatile int32_t t163 = INT32_MIN;

    t163 = (x873^((x874*x875)<=x876));

    if (t163 != INT32_MIN) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x889 = INT16_MIN;
	volatile int8_t x891 = 7;
	static volatile uint32_t x892 = UINT32_MAX;
	int32_t t164 = -85681;

    t164 = (x889^((x890*x891)<=x892));

    if (t164 != -32767) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x894 = INT64_MIN;
	int32_t x896 = 415602;
	int32_t t165 = -422971;

    t165 = (x893^((x894*x895)<=x896));

    if (t165 != 32766) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x897 = INT32_MIN;
	int64_t x898 = -1LL;
	volatile int8_t x900 = -1;

    t166 = (x897^((x898*x899)<=x900));

    if (t166 != INT32_MIN) { NG(); } else { ; }
	
}

void f167(void) {
    	static int64_t x901 = INT64_MIN;
	volatile uint16_t x902 = UINT16_MAX;
	uint8_t x903 = UINT8_MAX;
	int64_t t167 = INT64_MIN;

    t167 = (x901^((x902*x903)<=x904));

    if (t167 != INT64_MIN) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x905 = -25;
	volatile uint64_t x906 = 115894111LLU;
	uint64_t x907 = UINT64_MAX;
	int32_t t168 = 899;

    t168 = (x905^((x906*x907)<=x908));

    if (t168 != -25) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x910 = INT16_MAX;
	volatile int16_t x911 = 4091;
	static int8_t x912 = -1;
	volatile int32_t t169 = 19;

    t169 = (x909^((x910*x911)<=x912));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x913 = -1286;
	static volatile uint16_t x914 = 26004U;
	int64_t x916 = -1LL;
	static volatile int32_t t170 = -92998;

    t170 = (x913^((x914*x915)<=x916));

    if (t170 != -1286) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x921 = 3LL;
	uint8_t x922 = UINT8_MAX;
	int64_t x923 = -1LL;
	int32_t x924 = -200;
	volatile int64_t t171 = 419047827LL;

    t171 = (x921^((x922*x923)<=x924));

    if (t171 != 2LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint32_t x925 = 6U;
	int32_t x926 = INT32_MAX;
	uint64_t x927 = UINT64_MAX;
	volatile int16_t x928 = -1;

    t172 = (x925^((x926*x927)<=x928));

    if (t172 != 7U) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x929 = UINT64_MAX;
	volatile int64_t x930 = -7LL;
	int32_t x931 = 510711;
	int32_t x932 = INT32_MIN;
	uint64_t t173 = UINT64_MAX;

    t173 = (x929^((x930*x931)<=x932));

    if (t173 != UINT64_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x933 = -248;
	uint16_t x934 = 6274U;
	int8_t x935 = INT8_MIN;
	int16_t x936 = INT16_MIN;
	int32_t t174 = -8997616;

    t174 = (x933^((x934*x935)<=x936));

    if (t174 != -247) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x937 = UINT8_MAX;
	int32_t x938 = -1;
	uint8_t x939 = UINT8_MAX;
	static int8_t x940 = INT8_MAX;
	int32_t t175 = 6046;

    t175 = (x937^((x938*x939)<=x940));

    if (t175 != 254) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x941 = -8682;
	uint64_t x942 = 299068680LLU;
	int32_t x943 = INT32_MIN;
	volatile int32_t t176 = -510357284;

    t176 = (x941^((x942*x943)<=x944));

    if (t176 != -8682) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x949 = 130941827;
	uint16_t x950 = UINT16_MAX;
	int16_t x951 = -1;
	static uint16_t x952 = UINT16_MAX;

    t177 = (x949^((x950*x951)<=x952));

    if (t177 != 130941826) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x957 = 307867980064LL;
	volatile int64_t x959 = -1LL;
	volatile uint16_t x960 = 104U;
	static volatile int64_t t178 = -1LL;

    t178 = (x957^((x958*x959)<=x960));

    if (t178 != 307867980065LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int32_t x961 = INT32_MIN;
	static volatile uint8_t x962 = 27U;
	static uint8_t x963 = UINT8_MAX;
	int64_t x964 = INT64_MIN;
	static volatile int32_t t179 = INT32_MIN;

    t179 = (x961^((x962*x963)<=x964));

    if (t179 != INT32_MIN) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x977 = -29;
	int32_t x978 = INT32_MAX;
	int8_t x980 = -1;

    t180 = (x977^((x978*x979)<=x980));

    if (t180 != -30) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int32_t x981 = -256783;
	uint64_t x982 = 127LLU;
	int16_t x984 = -1;
	int32_t t181 = -690628536;

    t181 = (x981^((x982*x983)<=x984));

    if (t181 != -256784) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile int64_t x985 = INT64_MIN;
	int32_t x987 = 295;
	volatile uint64_t x988 = 7870819607050307253LLU;

    t182 = (x985^((x986*x987)<=x988));

    if (t182 != INT64_MIN) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x989 = INT16_MAX;
	int8_t x990 = INT8_MAX;
	static int8_t x991 = -7;
	int8_t x992 = 11;
	int32_t t183 = 214;

    t183 = (x989^((x990*x991)<=x992));

    if (t183 != 32766) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x994 = -1LL;
	uint16_t x995 = 0U;
	volatile uint16_t x996 = 1412U;
	volatile int32_t t184 = -3;

    t184 = (x993^((x994*x995)<=x996));

    if (t184 != -32767) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile uint32_t x997 = UINT32_MAX;
	volatile uint16_t x998 = UINT16_MAX;
	uint32_t x1000 = 34711354U;
	volatile uint32_t t185 = 479U;

    t185 = (x997^((x998*x999)<=x1000));

    if (t185 != 4294967294U) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x1001 = INT32_MAX;
	static uint16_t x1002 = 4U;
	uint32_t x1003 = 1805U;
	static uint64_t x1004 = 8LLU;
	int32_t t186 = INT32_MAX;

    t186 = (x1001^((x1002*x1003)<=x1004));

    if (t186 != INT32_MAX) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x1005 = -1;
	int64_t x1006 = 1LL;
	int64_t x1007 = INT64_MIN;
	int16_t x1008 = INT16_MIN;
	volatile int32_t t187 = 641254;

    t187 = (x1005^((x1006*x1007)<=x1008));

    if (t187 != -2) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x1009 = INT64_MIN;
	static volatile uint8_t x1010 = 40U;
	int8_t x1011 = INT8_MIN;
	volatile int8_t x1012 = 1;
	static int64_t t188 = -285494332875LL;

    t188 = (x1009^((x1010*x1011)<=x1012));

    if (t188 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x1013 = UINT64_MAX;
	static uint8_t x1014 = 1U;
	int16_t x1015 = 0;
	static int16_t x1016 = -1;
	static uint64_t t189 = UINT64_MAX;

    t189 = (x1013^((x1014*x1015)<=x1016));

    if (t189 != UINT64_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int64_t x1018 = -1LL;
	uint8_t x1019 = UINT8_MAX;
	int64_t x1020 = INT64_MIN;
	int32_t t190 = 1101023;

    t190 = (x1017^((x1018*x1019)<=x1020));

    if (t190 != 2) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int64_t x1029 = 48943LL;
	int16_t x1030 = -6;
	int64_t x1031 = -1LL;
	int32_t x1032 = -57112;
	volatile int64_t t191 = 0LL;

    t191 = (x1029^((x1030*x1031)<=x1032));

    if (t191 != 48943LL) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint16_t x1043 = 557U;
	int64_t x1044 = INT64_MIN;
	int64_t t192 = 56058532355055576LL;

    t192 = (x1041^((x1042*x1043)<=x1044));

    if (t192 != -1829853095LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x1046 = 27044U;
	int16_t x1047 = INT16_MIN;
	volatile int16_t x1048 = 1;

    t193 = (x1045^((x1046*x1047)<=x1048));

    if (t193 != 9) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x1049 = INT8_MIN;
	uint8_t x1050 = UINT8_MAX;
	volatile int32_t x1051 = -1;
	int32_t x1052 = -1;

    t194 = (x1049^((x1050*x1051)<=x1052));

    if (t194 != -127) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x1053 = 4395482325552475LLU;
	int16_t x1055 = INT16_MIN;
	int8_t x1056 = INT8_MIN;
	uint64_t t195 = 3025184981998439LLU;

    t195 = (x1053^((x1054*x1055)<=x1056));

    if (t195 != 4395482325552474LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x1057 = -214619355530297LL;
	int8_t x1058 = -1;
	uint64_t x1059 = UINT64_MAX;
	volatile int64_t t196 = 3904LL;

    t196 = (x1057^((x1058*x1059)<=x1060));

    if (t196 != -214619355530298LL) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x1061 = 9;
	volatile uint32_t x1062 = 637687600U;
	int8_t x1063 = 35;
	volatile int32_t t197 = -8189558;

    t197 = (x1061^((x1062*x1063)<=x1064));

    if (t197 != 9) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x1065 = 48;
	volatile int8_t x1066 = 56;
	uint64_t x1067 = 9874921776LLU;
	int32_t x1068 = 6;
	static int32_t t198 = 34485102;

    t198 = (x1065^((x1066*x1067)<=x1068));

    if (t198 != 48) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x1069 = INT8_MAX;
	static uint8_t x1070 = UINT8_MAX;
	static volatile int32_t x1072 = 7860670;
	volatile int32_t t199 = -443971;

    t199 = (x1069^((x1070*x1071)<=x1072));

    if (t199 != 126) { NG(); } else { ; }
	
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

