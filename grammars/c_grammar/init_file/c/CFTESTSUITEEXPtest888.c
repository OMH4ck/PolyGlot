
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

int32_t x4 = 0;
int32_t t0 = 14;
uint8_t x8 = 6U;
static uint64_t x24 = UINT64_MAX;
uint16_t x30 = 501U;
volatile int32_t x32 = -1;
uint32_t x45 = 3208003U;
int64_t x55 = INT64_MAX;
int8_t x67 = 8;
int16_t x78 = INT16_MAX;
int64_t x82 = -1464887568922735LL;
int8_t x115 = INT8_MIN;
uint32_t t14 = 1803357089U;
int32_t x132 = INT32_MAX;
volatile int32_t t16 = 161;
volatile int16_t x136 = 2013;
static volatile uint8_t x156 = UINT8_MAX;
uint16_t x161 = UINT16_MAX;
uint64_t x163 = UINT64_MAX;
int32_t t20 = -387690;
uint64_t x169 = UINT64_MAX;
static uint64_t x171 = UINT64_MAX;
uint8_t x172 = UINT8_MAX;
uint8_t x173 = 37U;
uint16_t x177 = 756U;
uint8_t x179 = 9U;
uint16_t x180 = UINT16_MAX;
int32_t x183 = INT32_MIN;
volatile int16_t x188 = INT16_MAX;
uint32_t t26 = 87953U;
volatile int32_t x198 = -22780588;
int32_t t29 = -27;
static volatile int64_t t31 = 126674793LL;
volatile int32_t t33 = -244723;
static int16_t x243 = INT16_MIN;
volatile uint32_t t34 = 34525U;
uint32_t x249 = 3908U;
uint8_t x250 = 23U;
uint64_t x255 = 3679736LLU;
int32_t x259 = 357;
static int64_t t38 = INT64_MAX;
static uint16_t x281 = UINT16_MAX;
int8_t x289 = 0;
volatile int64_t t43 = INT64_MAX;
int32_t x310 = INT32_MIN;
volatile uint32_t x317 = UINT32_MAX;
int8_t x330 = INT8_MIN;
static int8_t x332 = INT8_MIN;
uint32_t x338 = UINT32_MAX;
uint8_t x349 = 54U;
int16_t x352 = INT16_MIN;
int8_t x363 = INT8_MAX;
static uint8_t x372 = UINT8_MAX;
volatile int32_t t57 = INT32_MAX;
uint32_t x389 = UINT32_MAX;
int32_t x392 = INT32_MIN;
uint32_t x393 = UINT32_MAX;
int16_t x394 = INT16_MIN;
int8_t x396 = 0;
static volatile uint32_t t60 = UINT32_MAX;
int32_t x402 = 242070;
volatile int32_t t62 = INT32_MAX;
int8_t x434 = INT8_MIN;
static int16_t x460 = -1;
int16_t x468 = INT16_MIN;
uint8_t x484 = 6U;
static volatile uint16_t x486 = UINT16_MAX;
int32_t t70 = -1458815;
static int32_t t71 = -13612140;
uint32_t x498 = UINT32_MAX;
int64_t x501 = 139885448514947288LL;
int32_t x503 = INT32_MIN;
int64_t t73 = 652LL;
int8_t x520 = 58;
uint8_t x533 = 6U;
int8_t x538 = -7;
uint64_t x541 = 6546077581994LLU;
int16_t x551 = INT16_MIN;
int64_t x572 = 89686850LL;
static uint64_t t82 = UINT64_MAX;
volatile int32_t t83 = 57698447;
volatile int32_t x577 = INT32_MAX;
volatile int16_t x580 = -528;
volatile uint64_t x590 = 8623255478251236LLU;
int8_t x597 = 4;
int32_t x598 = -1;
int16_t x602 = -1;
volatile int32_t x603 = 427656;
int16_t x606 = 2978;
uint8_t x607 = 1U;
int8_t x610 = -1;
int8_t x615 = -1;
static int8_t x630 = INT8_MIN;
static int32_t x645 = 7539;
static int32_t x655 = -28;
uint64_t x660 = UINT64_MAX;
volatile int64_t x685 = INT64_MAX;
static volatile int64_t x687 = INT64_MIN;
volatile int32_t t100 = -200493131;
int32_t x724 = -1;
int8_t x726 = INT8_MAX;
int16_t x738 = INT16_MIN;
static uint32_t x750 = UINT32_MAX;
int8_t x767 = -1;
volatile uint32_t t106 = UINT32_MAX;
int64_t x770 = INT64_MIN;
int16_t x771 = 238;
uint32_t x779 = UINT32_MAX;
int8_t x787 = 5;
volatile uint64_t x789 = 5231LLU;
int32_t x792 = -1277168;
uint32_t x794 = UINT32_MAX;
uint64_t x796 = UINT64_MAX;
int8_t x810 = -1;
int64_t x811 = -1LL;
int32_t x822 = INT32_MIN;
static int64_t x823 = 241813290626LL;
uint8_t x839 = 7U;
uint16_t x842 = 109U;
uint8_t x844 = 25U;
volatile int32_t t117 = -312;
int32_t x872 = INT32_MIN;
volatile uint16_t x876 = 12683U;
int64_t x884 = -1LL;
volatile uint32_t x887 = UINT32_MAX;
int32_t t122 = -3986;
uint16_t x893 = 1U;
volatile int32_t t123 = 113092;
int8_t x898 = -1;
volatile int64_t x904 = 0LL;
static int64_t x914 = INT64_MIN;
uint8_t x917 = 0U;
volatile int64_t x918 = 993609071823930727LL;
static uint8_t x919 = 3U;
static int64_t x922 = INT64_MIN;
int8_t x948 = INT8_MIN;
uint16_t x949 = 14U;
uint16_t x952 = 2828U;
volatile int32_t t133 = -2497;
volatile int16_t x959 = INT16_MIN;
volatile int16_t x987 = INT16_MIN;
static volatile int16_t x990 = INT16_MAX;
static int8_t x992 = INT8_MIN;
static volatile int32_t t137 = 385;
static int32_t x1002 = -1;
int8_t x1019 = INT8_MIN;
uint64_t t142 = UINT64_MAX;
static volatile uint16_t x1045 = 450U;
int32_t t145 = -846;
int8_t x1050 = -7;
volatile uint16_t x1060 = UINT16_MAX;
int32_t t147 = 14839624;
int16_t x1068 = INT16_MIN;
volatile int64_t x1069 = 123048223LL;
uint32_t x1072 = 63456259U;
volatile int32_t t151 = 885347;
uint8_t x1110 = UINT8_MAX;
int8_t x1130 = INT8_MIN;
static volatile int16_t x1134 = INT16_MIN;
int8_t x1136 = INT8_MIN;
int32_t x1142 = INT32_MIN;
static uint8_t x1144 = 3U;
int8_t x1156 = -1;
static volatile uint32_t t163 = 91500508U;
int16_t x1187 = INT16_MIN;
uint64_t x1207 = 359365LLU;
uint64_t x1218 = UINT64_MAX;
static int16_t x1219 = -109;
int64_t x1223 = INT64_MIN;
static volatile int32_t t172 = INT32_MAX;
uint64_t x1254 = 430975051458LLU;
uint32_t x1255 = 201343U;
uint16_t x1264 = UINT16_MAX;
volatile int32_t x1270 = -3998;
static int16_t x1271 = INT16_MIN;
volatile uint32_t t175 = 93433U;
volatile int32_t t176 = 43;
uint32_t x1277 = 188682337U;
volatile uint16_t x1289 = 222U;
int32_t x1292 = -598404;
uint8_t x1297 = 1U;
uint32_t x1308 = 13161U;
uint8_t x1321 = 2U;
int8_t x1340 = -2;
volatile int32_t x1367 = -1;
int32_t x1368 = INT32_MAX;
static volatile int16_t x1373 = INT16_MAX;
static volatile uint64_t x1376 = 13749LLU;
uint64_t x1383 = 100749LLU;
int32_t x1388 = -468421;
volatile int32_t t191 = 1;
int32_t t192 = -5604;
int32_t x1410 = -1;
int8_t x1418 = -1;
volatile int16_t x1420 = INT16_MIN;
volatile uint32_t x1436 = UINT32_MAX;
volatile int64_t t197 = 324665LL;
int8_t x1443 = INT8_MIN;
static int64_t x1444 = INT64_MIN;
volatile int8_t x1447 = INT8_MIN;


void f0(void) {
    	static int8_t x1 = INT8_MAX;
	volatile int8_t x2 = INT8_MAX;
	int32_t x3 = -1;

    t0 = (x1<<((x2%x3)==x4));

    if (t0 != 254) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint16_t x5 = UINT16_MAX;
	uint64_t x6 = 747755137697641LLU;
	volatile uint16_t x7 = 23680U;
	volatile int32_t t1 = 3;

    t1 = (x5<<((x6%x7)==x8));

    if (t1 != 65535) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = 58U;
	uint64_t x10 = UINT64_MAX;
	volatile int32_t x11 = -3226;
	static volatile uint64_t x12 = 534LLU;
	volatile uint32_t t2 = 19U;

    t2 = (x9<<((x10%x11)==x12));

    if (t2 != 58U) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MAX;
	int32_t x14 = 9840912;
	static int32_t x15 = INT32_MIN;
	int32_t x16 = -3401629;
	volatile int32_t t3 = 525049;

    t3 = (x13<<((x14%x15)==x16));

    if (t3 != 127) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x21 = UINT8_MAX;
	int16_t x22 = -371;
	int16_t x23 = INT16_MIN;
	int32_t t4 = 1191;

    t4 = (x21<<((x22%x23)==x24));

    if (t4 != 255) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x29 = UINT16_MAX;
	int32_t x31 = INT32_MIN;
	volatile int32_t t5 = -627;

    t5 = (x29<<((x30%x31)==x32));

    if (t5 != 65535) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x46 = -1;
	int8_t x47 = 1;
	int32_t x48 = INT32_MIN;
	volatile uint32_t t6 = 20169U;

    t6 = (x45<<((x46%x47)==x48));

    if (t6 != 3208003U) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x53 = 3178072;
	uint32_t x54 = UINT32_MAX;
	volatile uint32_t x56 = UINT32_MAX;
	volatile int32_t t7 = -5861;

    t7 = (x53<<((x54%x55)==x56));

    if (t7 != 6356144) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint8_t x65 = UINT8_MAX;
	volatile uint16_t x66 = 17721U;
	int64_t x68 = 33912819815206301LL;
	volatile int32_t t8 = -18;

    t8 = (x65<<((x66%x67)==x68));

    if (t8 != 255) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x77 = UINT16_MAX;
	int16_t x79 = 84;
	static int16_t x80 = 13736;
	volatile int32_t t9 = 816;

    t9 = (x77<<((x78%x79)==x80));

    if (t9 != 65535) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x81 = INT8_MAX;
	int64_t x83 = -1LL;
	static volatile int32_t x84 = -1;
	volatile int32_t t10 = -1451903;

    t10 = (x81<<((x82%x83)==x84));

    if (t10 != 127) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x93 = 903418;
	volatile uint16_t x94 = 1U;
	volatile int64_t x95 = INT64_MIN;
	volatile uint8_t x96 = 15U;
	int32_t t11 = 10306;

    t11 = (x93<<((x94%x95)==x96));

    if (t11 != 903418) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x97 = 997844631959LL;
	int32_t x98 = INT32_MAX;
	uint64_t x99 = 797558396259978LLU;
	int32_t x100 = INT32_MIN;
	volatile int64_t t12 = 7LL;

    t12 = (x97<<((x98%x99)==x100));

    if (t12 != 997844631959LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x113 = INT8_MAX;
	int16_t x114 = 0;
	int32_t x116 = 3;
	int32_t t13 = -8357777;

    t13 = (x113<<((x114%x115)==x116));

    if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x117 = 26U;
	int8_t x118 = 0;
	int64_t x119 = 61141888237132763LL;
	int8_t x120 = INT8_MAX;

    t14 = (x117<<((x118%x119)==x120));

    if (t14 != 26U) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x125 = INT8_MAX;
	int64_t x126 = -1LL;
	uint32_t x127 = 1994589U;
	int8_t x128 = 1;
	volatile int32_t t15 = 22119;

    t15 = (x125<<((x126%x127)==x128));

    if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x129 = 7U;
	int8_t x130 = INT8_MIN;
	static int8_t x131 = INT8_MIN;

    t16 = (x129<<((x130%x131)==x132));

    if (t16 != 7) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x133 = INT16_MAX;
	int64_t x134 = -1LL;
	int16_t x135 = INT16_MAX;
	int32_t t17 = -229;

    t17 = (x133<<((x134%x135)==x136));

    if (t17 != 32767) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x141 = INT16_MAX;
	volatile uint32_t x142 = UINT32_MAX;
	static volatile int16_t x143 = INT16_MIN;
	int64_t x144 = INT64_MIN;
	static volatile int32_t t18 = -2269534;

    t18 = (x141<<((x142%x143)==x144));

    if (t18 != 32767) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint16_t x153 = 14160U;
	uint32_t x154 = 438880U;
	int8_t x155 = 33;
	volatile int32_t t19 = 29;

    t19 = (x153<<((x154%x155)==x156));

    if (t19 != 14160) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x162 = -1;
	volatile int64_t x164 = -1LL;

    t20 = (x161<<((x162%x163)==x164));

    if (t20 != 65535) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile uint8_t x165 = 9U;
	int32_t x166 = -1;
	static int16_t x167 = INT16_MAX;
	int64_t x168 = INT64_MIN;
	volatile int32_t t21 = 1505032;

    t21 = (x165<<((x166%x167)==x168));

    if (t21 != 9) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x170 = INT8_MIN;
	uint64_t t22 = UINT64_MAX;

    t22 = (x169<<((x170%x171)==x172));

    if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	static int64_t x174 = INT64_MIN;
	int16_t x175 = -39;
	static uint32_t x176 = 14U;
	int32_t t23 = 717984404;

    t23 = (x173<<((x174%x175)==x176));

    if (t23 != 37) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x178 = 0;
	int32_t t24 = -22794;

    t24 = (x177<<((x178%x179)==x180));

    if (t24 != 756) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x181 = 814128255U;
	int8_t x182 = -1;
	int64_t x184 = INT64_MIN;
	volatile uint32_t t25 = 2095220U;

    t25 = (x181<<((x182%x183)==x184));

    if (t25 != 814128255U) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint32_t x185 = 1U;
	int8_t x186 = INT8_MIN;
	volatile int16_t x187 = INT16_MIN;

    t26 = (x185<<((x186%x187)==x188));

    if (t26 != 1U) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x189 = 5822LLU;
	int8_t x190 = INT8_MIN;
	uint32_t x191 = 250U;
	int16_t x192 = 152;
	uint64_t t27 = 12LLU;

    t27 = (x189<<((x190%x191)==x192));

    if (t27 != 5822LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x197 = UINT32_MAX;
	int32_t x199 = 114634;
	volatile int32_t x200 = INT32_MAX;
	volatile uint32_t t28 = UINT32_MAX;

    t28 = (x197<<((x198%x199)==x200));

    if (t28 != UINT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x201 = INT16_MAX;
	volatile int32_t x202 = 1583;
	static volatile int16_t x203 = -1;
	volatile int8_t x204 = -1;

    t29 = (x201<<((x202%x203)==x204));

    if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x209 = 2;
	static int32_t x210 = INT32_MAX;
	volatile uint32_t x211 = 7630U;
	int32_t x212 = INT32_MIN;
	volatile int32_t t30 = -25674051;

    t30 = (x209<<((x210%x211)==x212));

    if (t30 != 2) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x225 = 521818LL;
	int8_t x226 = INT8_MAX;
	uint32_t x227 = UINT32_MAX;
	int16_t x228 = INT16_MIN;

    t31 = (x225<<((x226%x227)==x228));

    if (t31 != 521818LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x229 = 3U;
	uint64_t x230 = UINT64_MAX;
	int16_t x231 = -1;
	int32_t x232 = 1;
	int32_t t32 = 2808;

    t32 = (x229<<((x230%x231)==x232));

    if (t32 != 3) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x237 = 27;
	uint32_t x238 = 477330014U;
	int64_t x239 = -1LL;
	int16_t x240 = INT16_MIN;

    t33 = (x237<<((x238%x239)==x240));

    if (t33 != 27) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint32_t x241 = 2116U;
	int16_t x242 = INT16_MAX;
	volatile int64_t x244 = 25223797665235LL;

    t34 = (x241<<((x242%x243)==x244));

    if (t34 != 2116U) { NG(); } else { ; }
	
}

void f35(void) {
    	static int32_t x251 = 295022517;
	int8_t x252 = INT8_MAX;
	uint32_t t35 = 3857U;

    t35 = (x249<<((x250%x251)==x252));

    if (t35 != 3908U) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x253 = UINT32_MAX;
	static int32_t x254 = -1;
	uint32_t x256 = 11U;
	uint32_t t36 = UINT32_MAX;

    t36 = (x253<<((x254%x255)==x256));

    if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x257 = 5U;
	static int32_t x258 = -482047999;
	int16_t x260 = INT16_MAX;
	volatile int32_t t37 = 35498557;

    t37 = (x257<<((x258%x259)==x260));

    if (t37 != 5) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x261 = INT64_MAX;
	uint8_t x262 = 47U;
	volatile int64_t x263 = INT64_MAX;
	int64_t x264 = INT64_MIN;

    t38 = (x261<<((x262%x263)==x264));

    if (t38 != INT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x269 = 476;
	uint16_t x270 = 50U;
	int32_t x271 = INT32_MIN;
	int32_t x272 = INT32_MIN;
	static int32_t t39 = 127;

    t39 = (x269<<((x270%x271)==x272));

    if (t39 != 476) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x282 = INT64_MIN;
	static volatile int64_t x283 = -1LL;
	volatile int8_t x284 = -1;
	int32_t t40 = -50044547;

    t40 = (x281<<((x282%x283)==x284));

    if (t40 != 65535) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int64_t x290 = -557325770010081302LL;
	uint32_t x291 = 187664735U;
	int16_t x292 = 177;
	int32_t t41 = 500560514;

    t41 = (x289<<((x290%x291)==x292));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x293 = UINT64_MAX;
	uint16_t x294 = UINT16_MAX;
	int32_t x295 = -1;
	uint16_t x296 = UINT16_MAX;
	uint64_t t42 = UINT64_MAX;

    t42 = (x293<<((x294%x295)==x296));

    if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x305 = INT64_MAX;
	int16_t x306 = INT16_MIN;
	int16_t x307 = -1;
	int16_t x308 = -1;

    t43 = (x305<<((x306%x307)==x308));

    if (t43 != INT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x309 = UINT8_MAX;
	int32_t x311 = -1909631;
	uint64_t x312 = UINT64_MAX;
	static volatile int32_t t44 = 602;

    t44 = (x309<<((x310%x311)==x312));

    if (t44 != 255) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x318 = INT8_MAX;
	uint64_t x319 = UINT64_MAX;
	int64_t x320 = INT64_MIN;
	volatile uint32_t t45 = UINT32_MAX;

    t45 = (x317<<((x318%x319)==x320));

    if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int64_t x321 = 1LL;
	volatile uint16_t x322 = 2511U;
	uint64_t x323 = 21LLU;
	static int32_t x324 = INT32_MIN;
	int64_t t46 = -995996958606LL;

    t46 = (x321<<((x322%x323)==x324));

    if (t46 != 1LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x329 = 348136852172LLU;
	int16_t x331 = INT16_MIN;
	static volatile uint64_t t47 = 190572249863785237LLU;

    t47 = (x329<<((x330%x331)==x332));

    if (t47 != 696273704344LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x333 = UINT64_MAX;
	static volatile int32_t x334 = 0;
	uint64_t x335 = 6LLU;
	volatile int32_t x336 = -1;
	uint64_t t48 = UINT64_MAX;

    t48 = (x333<<((x334%x335)==x336));

    if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x337 = 5U;
	int8_t x339 = INT8_MIN;
	int16_t x340 = -62;
	volatile int32_t t49 = 24320724;

    t49 = (x337<<((x338%x339)==x340));

    if (t49 != 5) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x341 = 9431526LLU;
	int8_t x342 = INT8_MIN;
	int32_t x343 = INT32_MIN;
	int8_t x344 = INT8_MIN;
	uint64_t t50 = 8815897422703883866LLU;

    t50 = (x341<<((x342%x343)==x344));

    if (t50 != 18863052LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x345 = 914LLU;
	static uint64_t x346 = 68963382521LLU;
	int16_t x347 = INT16_MAX;
	int8_t x348 = INT8_MIN;
	static volatile uint64_t t51 = 4803472464LLU;

    t51 = (x345<<((x346%x347)==x348));

    if (t51 != 914LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x350 = 9U;
	static int64_t x351 = INT64_MIN;
	volatile int32_t t52 = 47;

    t52 = (x349<<((x350%x351)==x352));

    if (t52 != 54) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint8_t x361 = 1U;
	volatile int32_t x362 = INT32_MIN;
	static int16_t x364 = INT16_MAX;
	static volatile int32_t t53 = 465;

    t53 = (x361<<((x362%x363)==x364));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x365 = 777683U;
	int16_t x366 = 457;
	static int32_t x367 = -1;
	static int8_t x368 = INT8_MIN;
	static volatile uint32_t t54 = 6169U;

    t54 = (x365<<((x366%x367)==x368));

    if (t54 != 777683U) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x369 = 3LLU;
	int64_t x370 = INT64_MAX;
	int16_t x371 = INT16_MAX;
	uint64_t t55 = 666124471269LLU;

    t55 = (x369<<((x370%x371)==x372));

    if (t55 != 3LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x373 = 4U;
	uint32_t x374 = 92558U;
	int8_t x375 = INT8_MIN;
	int16_t x376 = 12;
	static volatile int32_t t56 = -70;

    t56 = (x373<<((x374%x375)==x376));

    if (t56 != 4) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x377 = INT32_MAX;
	static uint64_t x378 = 15720LLU;
	static int8_t x379 = INT8_MIN;
	static int16_t x380 = INT16_MIN;

    t57 = (x377<<((x378%x379)==x380));

    if (t57 != INT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x385 = 950529357LLU;
	volatile int8_t x386 = -1;
	uint8_t x387 = 79U;
	int8_t x388 = 12;
	uint64_t t58 = 16731394432LLU;

    t58 = (x385<<((x386%x387)==x388));

    if (t58 != 950529357LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x390 = UINT64_MAX;
	uint32_t x391 = 426188712U;
	uint32_t t59 = UINT32_MAX;

    t59 = (x389<<((x390%x391)==x392));

    if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x395 = 39U;

    t60 = (x393<<((x394%x395)==x396));

    if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int64_t x397 = 3958LL;
	static int64_t x398 = -1LL;
	uint16_t x399 = 1U;
	static int32_t x400 = INT32_MIN;
	int64_t t61 = -6684LL;

    t61 = (x397<<((x398%x399)==x400));

    if (t61 != 3958LL) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x401 = INT32_MAX;
	int32_t x403 = -2;
	volatile int16_t x404 = INT16_MAX;

    t62 = (x401<<((x402%x403)==x404));

    if (t62 != INT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x421 = INT16_MAX;
	static uint32_t x422 = 859692001U;
	uint8_t x423 = UINT8_MAX;
	static int32_t x424 = INT32_MIN;
	int32_t t63 = -1326;

    t63 = (x421<<((x422%x423)==x424));

    if (t63 != 32767) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x433 = UINT16_MAX;
	uint32_t x435 = 14U;
	volatile uint32_t x436 = 2405U;
	int32_t t64 = 20;

    t64 = (x433<<((x434%x435)==x436));

    if (t64 != 65535) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint32_t x457 = UINT32_MAX;
	uint8_t x458 = 7U;
	int32_t x459 = INT32_MAX;
	volatile uint32_t t65 = UINT32_MAX;

    t65 = (x457<<((x458%x459)==x460));

    if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x461 = INT8_MAX;
	static int16_t x462 = INT16_MAX;
	int32_t x463 = INT32_MIN;
	uint8_t x464 = UINT8_MAX;
	int32_t t66 = -1;

    t66 = (x461<<((x462%x463)==x464));

    if (t66 != 127) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint32_t x465 = 254391729U;
	uint8_t x466 = 7U;
	uint32_t x467 = UINT32_MAX;
	volatile uint32_t t67 = 15303U;

    t67 = (x465<<((x466%x467)==x468));

    if (t67 != 254391729U) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x477 = UINT32_MAX;
	uint64_t x478 = UINT64_MAX;
	int16_t x479 = 5;
	int32_t x480 = INT32_MIN;
	uint32_t t68 = UINT32_MAX;

    t68 = (x477<<((x478%x479)==x480));

    if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x481 = INT8_MAX;
	uint16_t x482 = UINT16_MAX;
	uint32_t x483 = 80588060U;
	int32_t t69 = 7;

    t69 = (x481<<((x482%x483)==x484));

    if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x485 = 116U;
	static int8_t x487 = -47;
	int64_t x488 = INT64_MIN;

    t70 = (x485<<((x486%x487)==x488));

    if (t70 != 116) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x493 = 16;
	uint32_t x494 = 5U;
	uint16_t x495 = UINT16_MAX;
	int16_t x496 = 7;

    t71 = (x493<<((x494%x495)==x496));

    if (t71 != 16) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x497 = INT16_MAX;
	volatile int8_t x499 = 2;
	static int8_t x500 = 0;
	static int32_t t72 = -27525985;

    t72 = (x497<<((x498%x499)==x500));

    if (t72 != 32767) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x502 = INT16_MAX;
	volatile int16_t x504 = -3309;

    t73 = (x501<<((x502%x503)==x504));

    if (t73 != 139885448514947288LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x505 = UINT32_MAX;
	volatile uint64_t x506 = 11334014255007682LLU;
	int64_t x507 = INT64_MIN;
	static int16_t x508 = -1;
	uint32_t t74 = UINT32_MAX;

    t74 = (x505<<((x506%x507)==x508));

    if (t74 != UINT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x517 = 214329363LL;
	int16_t x518 = INT16_MIN;
	int8_t x519 = -48;
	volatile int64_t t75 = 251LL;

    t75 = (x517<<((x518%x519)==x520));

    if (t75 != 214329363LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x525 = 15117027662022LLU;
	int8_t x526 = 1;
	uint8_t x527 = 37U;
	int16_t x528 = INT16_MAX;
	static uint64_t t76 = 259861329LLU;

    t76 = (x525<<((x526%x527)==x528));

    if (t76 != 15117027662022LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x534 = UINT16_MAX;
	int64_t x535 = -1LL;
	uint32_t x536 = UINT32_MAX;
	volatile int32_t t77 = 22151;

    t77 = (x533<<((x534%x535)==x536));

    if (t77 != 6) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x537 = 5;
	volatile uint16_t x539 = 359U;
	uint64_t x540 = 4472835216576698LLU;
	volatile int32_t t78 = -53440;

    t78 = (x537<<((x538%x539)==x540));

    if (t78 != 5) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x542 = 165666116093LLU;
	int32_t x543 = -1;
	volatile uint64_t x544 = 14560508264650414LLU;
	static uint64_t t79 = 1741044229019103606LLU;

    t79 = (x541<<((x542%x543)==x544));

    if (t79 != 6546077581994LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x549 = 1097U;
	int64_t x550 = -1LL;
	static int16_t x552 = INT16_MIN;
	volatile int32_t t80 = -3;

    t80 = (x549<<((x550%x551)==x552));

    if (t80 != 1097) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x561 = 1U;
	uint32_t x562 = UINT32_MAX;
	int16_t x563 = -1;
	uint8_t x564 = 0U;
	volatile int32_t t81 = -8158;

    t81 = (x561<<((x562%x563)==x564));

    if (t81 != 2) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile uint64_t x569 = UINT64_MAX;
	volatile int8_t x570 = INT8_MAX;
	volatile uint32_t x571 = 287424799U;

    t82 = (x569<<((x570%x571)==x572));

    if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x573 = 6816U;
	volatile int16_t x574 = INT16_MIN;
	int64_t x575 = INT64_MIN;
	uint16_t x576 = 3U;

    t83 = (x573<<((x574%x575)==x576));

    if (t83 != 6816) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x578 = UINT16_MAX;
	static int16_t x579 = INT16_MIN;
	static int32_t t84 = INT32_MAX;

    t84 = (x577<<((x578%x579)==x580));

    if (t84 != INT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint8_t x589 = 0U;
	int32_t x591 = INT32_MAX;
	volatile int64_t x592 = -1LL;
	static volatile int32_t t85 = 53698;

    t85 = (x589<<((x590%x591)==x592));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x593 = 93816U;
	volatile uint8_t x594 = 3U;
	int16_t x595 = INT16_MIN;
	static uint32_t x596 = 46100U;
	volatile uint32_t t86 = 3U;

    t86 = (x593<<((x594%x595)==x596));

    if (t86 != 93816U) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x599 = 954976815391LL;
	int32_t x600 = 22;
	int32_t t87 = 81662168;

    t87 = (x597<<((x598%x599)==x600));

    if (t87 != 4) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x601 = 79LLU;
	volatile int64_t x604 = INT64_MIN;
	uint64_t t88 = 0LLU;

    t88 = (x601<<((x602%x603)==x604));

    if (t88 != 79LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x605 = 1U;
	volatile uint16_t x608 = UINT16_MAX;
	volatile int32_t t89 = 3220;

    t89 = (x605<<((x606%x607)==x608));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint8_t x609 = 18U;
	uint8_t x611 = 33U;
	int64_t x612 = -5335042079905LL;
	volatile int32_t t90 = 377;

    t90 = (x609<<((x610%x611)==x612));

    if (t90 != 18) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x613 = UINT64_MAX;
	volatile uint64_t x614 = UINT64_MAX;
	volatile int16_t x616 = INT16_MAX;
	uint64_t t91 = UINT64_MAX;

    t91 = (x613<<((x614%x615)==x616));

    if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint32_t x629 = 53683509U;
	int8_t x631 = -1;
	int16_t x632 = -1;
	static uint32_t t92 = 319U;

    t92 = (x629<<((x630%x631)==x632));

    if (t92 != 53683509U) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x646 = INT8_MIN;
	static int8_t x647 = -1;
	int64_t x648 = INT64_MIN;
	static int32_t t93 = -313543581;

    t93 = (x645<<((x646%x647)==x648));

    if (t93 != 7539) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x649 = INT64_MAX;
	static uint16_t x650 = UINT16_MAX;
	uint8_t x651 = UINT8_MAX;
	int64_t x652 = INT64_MAX;
	static int64_t t94 = INT64_MAX;

    t94 = (x649<<((x650%x651)==x652));

    if (t94 != INT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint16_t x653 = 224U;
	int8_t x654 = INT8_MIN;
	static volatile int64_t x656 = -1LL;
	int32_t t95 = 181197102;

    t95 = (x653<<((x654%x655)==x656));

    if (t95 != 224) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x657 = UINT64_MAX;
	static int8_t x658 = INT8_MIN;
	static int32_t x659 = -1;
	volatile uint64_t t96 = UINT64_MAX;

    t96 = (x657<<((x658%x659)==x660));

    if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile int8_t x661 = INT8_MAX;
	int8_t x662 = INT8_MAX;
	int16_t x663 = -1;
	static int32_t x664 = INT32_MIN;
	int32_t t97 = 58896;

    t97 = (x661<<((x662%x663)==x664));

    if (t97 != 127) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x681 = 30U;
	static int64_t x682 = -53538307061LL;
	uint16_t x683 = 13421U;
	int8_t x684 = 24;
	static int32_t t98 = -1;

    t98 = (x681<<((x682%x683)==x684));

    if (t98 != 30) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint32_t x686 = 24399144U;
	int8_t x688 = INT8_MIN;
	static volatile int64_t t99 = INT64_MAX;

    t99 = (x685<<((x686%x687)==x688));

    if (t99 != INT64_MAX) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x693 = INT16_MAX;
	int8_t x694 = INT8_MAX;
	int16_t x695 = INT16_MIN;
	uint8_t x696 = 6U;

    t100 = (x693<<((x694%x695)==x696));

    if (t100 != 32767) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x721 = 1U;
	static int32_t x722 = INT32_MAX;
	int32_t x723 = INT32_MIN;
	int32_t t101 = 3;

    t101 = (x721<<((x722%x723)==x724));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x725 = 138034129779593348LLU;
	int8_t x727 = -1;
	int64_t x728 = INT64_MAX;
	static volatile uint64_t t102 = 647898622LLU;

    t102 = (x725<<((x726%x727)==x728));

    if (t102 != 138034129779593348LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint8_t x733 = 47U;
	uint16_t x734 = 825U;
	volatile int16_t x735 = INT16_MAX;
	uint64_t x736 = 1882088996LLU;
	static volatile int32_t t103 = 18;

    t103 = (x733<<((x734%x735)==x736));

    if (t103 != 47) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x737 = INT8_MAX;
	static int16_t x739 = -1;
	static int8_t x740 = -1;
	int32_t t104 = -33;

    t104 = (x737<<((x738%x739)==x740));

    if (t104 != 127) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x749 = INT16_MAX;
	static int16_t x751 = 46;
	static volatile int32_t x752 = -1;
	static volatile int32_t t105 = 4;

    t105 = (x749<<((x750%x751)==x752));

    if (t105 != 32767) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x765 = UINT32_MAX;
	volatile uint32_t x766 = 22628U;
	int8_t x768 = INT8_MIN;

    t106 = (x765<<((x766%x767)==x768));

    if (t106 != UINT32_MAX) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x769 = INT16_MAX;
	int32_t x772 = INT32_MIN;
	volatile int32_t t107 = 268;

    t107 = (x769<<((x770%x771)==x772));

    if (t107 != 32767) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x777 = UINT16_MAX;
	static int64_t x778 = 1166413434625388765LL;
	static int64_t x780 = INT64_MIN;
	volatile int32_t t108 = -1;

    t108 = (x777<<((x778%x779)==x780));

    if (t108 != 65535) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x785 = 1903;
	static int64_t x786 = 106950972035LL;
	int64_t x788 = 455362598980364868LL;
	int32_t t109 = -1;

    t109 = (x785<<((x786%x787)==x788));

    if (t109 != 1903) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint64_t x790 = 66424LLU;
	uint8_t x791 = UINT8_MAX;
	volatile uint64_t t110 = 3905828LLU;

    t110 = (x789<<((x790%x791)==x792));

    if (t110 != 5231LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x793 = 6352U;
	int32_t x795 = -7;
	volatile int32_t t111 = -2284;

    t111 = (x793<<((x794%x795)==x796));

    if (t111 != 6352) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t x797 = 46;
	int32_t x798 = INT32_MIN;
	volatile int64_t x799 = -513377LL;
	int32_t x800 = -1;
	static volatile int32_t t112 = 23051;

    t112 = (x797<<((x798%x799)==x800));

    if (t112 != 46) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x809 = UINT32_MAX;
	int64_t x812 = -24269204852591769LL;
	volatile uint32_t t113 = UINT32_MAX;

    t113 = (x809<<((x810%x811)==x812));

    if (t113 != UINT32_MAX) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int32_t x821 = 9647018;
	int64_t x824 = -116839765856LL;
	int32_t t114 = 1285559;

    t114 = (x821<<((x822%x823)==x824));

    if (t114 != 9647018) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x837 = INT8_MAX;
	uint32_t x838 = 424228U;
	int32_t x840 = INT32_MIN;
	int32_t t115 = -116;

    t115 = (x837<<((x838%x839)==x840));

    if (t115 != 127) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x841 = INT8_MAX;
	static int64_t x843 = -2181077782158608488LL;
	volatile int32_t t116 = 54432;

    t116 = (x841<<((x842%x843)==x844));

    if (t116 != 127) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x849 = 0U;
	volatile uint8_t x850 = UINT8_MAX;
	uint32_t x851 = UINT32_MAX;
	static int32_t x852 = INT32_MIN;

    t117 = (x849<<((x850%x851)==x852));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x865 = UINT8_MAX;
	int8_t x866 = INT8_MIN;
	volatile int16_t x867 = INT16_MIN;
	static uint8_t x868 = 14U;
	int32_t t118 = -945761;

    t118 = (x865<<((x866%x867)==x868));

    if (t118 != 255) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x869 = 1LLU;
	static uint32_t x870 = 3U;
	static uint16_t x871 = UINT16_MAX;
	uint64_t t119 = 3894443328369015LLU;

    t119 = (x869<<((x870%x871)==x872));

    if (t119 != 1LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint16_t x873 = UINT16_MAX;
	uint16_t x874 = 5675U;
	static int16_t x875 = -1;
	int32_t t120 = -1;

    t120 = (x873<<((x874%x875)==x876));

    if (t120 != 65535) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x881 = 1;
	uint16_t x882 = UINT16_MAX;
	int64_t x883 = 13540700123LL;
	int32_t t121 = -1064;

    t121 = (x881<<((x882%x883)==x884));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x885 = 1U;
	uint8_t x886 = UINT8_MAX;
	int8_t x888 = -14;

    t122 = (x885<<((x886%x887)==x888));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x894 = 1736365008300041009LL;
	uint64_t x895 = 198999773266518LLU;
	int64_t x896 = -1LL;

    t123 = (x893<<((x894%x895)==x896));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint32_t x897 = 106308U;
	volatile uint8_t x899 = 16U;
	static int64_t x900 = INT64_MIN;
	volatile uint32_t t124 = 297U;

    t124 = (x897<<((x898%x899)==x900));

    if (t124 != 106308U) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x901 = UINT16_MAX;
	uint64_t x902 = 101103809LLU;
	volatile int64_t x903 = INT64_MIN;
	int32_t t125 = -7233;

    t125 = (x901<<((x902%x903)==x904));

    if (t125 != 65535) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x913 = 38109U;
	static volatile int64_t x915 = 248265044LL;
	uint16_t x916 = 3213U;
	volatile uint32_t t126 = 390626452U;

    t126 = (x913<<((x914%x915)==x916));

    if (t126 != 38109U) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x920 = 1U;
	static volatile int32_t t127 = 57016985;

    t127 = (x917<<((x918%x919)==x920));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint32_t x921 = 11823U;
	uint8_t x923 = UINT8_MAX;
	int8_t x924 = INT8_MIN;
	volatile uint32_t t128 = 0U;

    t128 = (x921<<((x922%x923)==x924));

    if (t128 != 23646U) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x925 = 2U;
	int32_t x926 = INT32_MIN;
	static int8_t x927 = -1;
	int64_t x928 = 76569154832LL;
	volatile int32_t t129 = 288;

    t129 = (x925<<((x926%x927)==x928));

    if (t129 != 2) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x933 = 4008U;
	uint8_t x934 = UINT8_MAX;
	int16_t x935 = INT16_MIN;
	static int64_t x936 = -1LL;
	int32_t t130 = 144;

    t130 = (x933<<((x934%x935)==x936));

    if (t130 != 4008) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x945 = 8376U;
	uint16_t x946 = 1U;
	int32_t x947 = -1;
	volatile uint32_t t131 = 236038U;

    t131 = (x945<<((x946%x947)==x948));

    if (t131 != 8376U) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x950 = -11;
	uint32_t x951 = 9588232U;
	static int32_t t132 = 31266;

    t132 = (x949<<((x950%x951)==x952));

    if (t132 != 14) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x953 = 13U;
	volatile uint64_t x954 = UINT64_MAX;
	int8_t x955 = INT8_MIN;
	int32_t x956 = INT32_MAX;

    t133 = (x953<<((x954%x955)==x956));

    if (t133 != 13) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x957 = INT8_MAX;
	int16_t x958 = -1;
	uint32_t x960 = UINT32_MAX;
	static volatile int32_t t134 = 154954944;

    t134 = (x957<<((x958%x959)==x960));

    if (t134 != 254) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint32_t x961 = UINT32_MAX;
	volatile uint8_t x962 = 3U;
	int32_t x963 = INT32_MIN;
	uint32_t x964 = UINT32_MAX;
	static volatile uint32_t t135 = UINT32_MAX;

    t135 = (x961<<((x962%x963)==x964));

    if (t135 != UINT32_MAX) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint64_t x985 = 13049686090783743LLU;
	static uint32_t x986 = 7021U;
	uint64_t x988 = 719583LLU;
	volatile uint64_t t136 = 456703509495463830LLU;

    t136 = (x985<<((x986%x987)==x988));

    if (t136 != 13049686090783743LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x989 = UINT8_MAX;
	uint64_t x991 = UINT64_MAX;

    t137 = (x989<<((x990%x991)==x992));

    if (t137 != 255) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint8_t x1001 = 123U;
	static volatile int64_t x1003 = INT64_MIN;
	int16_t x1004 = 239;
	static volatile int32_t t138 = 1;

    t138 = (x1001<<((x1002%x1003)==x1004));

    if (t138 != 123) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile uint32_t x1017 = 6471U;
	int8_t x1018 = INT8_MIN;
	int16_t x1020 = -1;
	uint32_t t139 = 5920U;

    t139 = (x1017<<((x1018%x1019)==x1020));

    if (t139 != 6471U) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x1021 = 209271533135033250LL;
	int64_t x1022 = -1LL;
	uint64_t x1023 = 746319409617LLU;
	static volatile int16_t x1024 = -1;
	volatile int64_t t140 = 20LL;

    t140 = (x1021<<((x1022%x1023)==x1024));

    if (t140 != 209271533135033250LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x1025 = 24U;
	static int32_t x1026 = 116;
	int32_t x1027 = -1;
	int8_t x1028 = INT8_MAX;
	int32_t t141 = 30;

    t141 = (x1025<<((x1026%x1027)==x1028));

    if (t141 != 24) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x1029 = UINT64_MAX;
	uint64_t x1030 = UINT64_MAX;
	int32_t x1031 = INT32_MIN;
	static int32_t x1032 = 177256;

    t142 = (x1029<<((x1030%x1031)==x1032));

    if (t142 != UINT64_MAX) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x1037 = 1705126;
	volatile uint8_t x1038 = 1U;
	int64_t x1039 = INT64_MIN;
	int16_t x1040 = INT16_MIN;
	int32_t t143 = -5070231;

    t143 = (x1037<<((x1038%x1039)==x1040));

    if (t143 != 1705126) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x1041 = INT32_MAX;
	static volatile int16_t x1042 = -10178;
	static int8_t x1043 = INT8_MAX;
	int8_t x1044 = INT8_MIN;
	int32_t t144 = INT32_MAX;

    t144 = (x1041<<((x1042%x1043)==x1044));

    if (t144 != INT32_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x1046 = -1;
	static int16_t x1047 = INT16_MIN;
	int16_t x1048 = INT16_MIN;

    t145 = (x1045<<((x1046%x1047)==x1048));

    if (t145 != 450) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint8_t x1049 = UINT8_MAX;
	static int32_t x1051 = INT32_MIN;
	uint64_t x1052 = 332069966072795272LLU;
	volatile int32_t t146 = 800;

    t146 = (x1049<<((x1050%x1051)==x1052));

    if (t146 != 255) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint8_t x1057 = UINT8_MAX;
	int8_t x1058 = INT8_MIN;
	int8_t x1059 = INT8_MAX;

    t147 = (x1057<<((x1058%x1059)==x1060));

    if (t147 != 255) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint16_t x1065 = 853U;
	int64_t x1066 = INT64_MIN;
	int64_t x1067 = INT64_MAX;
	volatile int32_t t148 = 2004;

    t148 = (x1065<<((x1066%x1067)==x1068));

    if (t148 != 853) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x1070 = -1;
	int32_t x1071 = -1;
	int64_t t149 = -3480650202561175LL;

    t149 = (x1069<<((x1070%x1071)==x1072));

    if (t149 != 123048223LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x1073 = INT32_MAX;
	uint32_t x1074 = UINT32_MAX;
	int8_t x1075 = INT8_MAX;
	volatile uint8_t x1076 = UINT8_MAX;
	int32_t t150 = INT32_MAX;

    t150 = (x1073<<((x1074%x1075)==x1076));

    if (t150 != INT32_MAX) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int8_t x1085 = INT8_MAX;
	static int16_t x1086 = INT16_MAX;
	volatile uint8_t x1087 = UINT8_MAX;
	volatile int64_t x1088 = -1LL;

    t151 = (x1085<<((x1086%x1087)==x1088));

    if (t151 != 127) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint8_t x1089 = 127U;
	uint16_t x1090 = 554U;
	static int32_t x1091 = -1305025;
	uint16_t x1092 = 205U;
	int32_t t152 = -19385;

    t152 = (x1089<<((x1090%x1091)==x1092));

    if (t152 != 127) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint32_t x1097 = 367064U;
	int16_t x1098 = -82;
	static uint16_t x1099 = UINT16_MAX;
	volatile int16_t x1100 = 710;
	static volatile uint32_t t153 = 10311U;

    t153 = (x1097<<((x1098%x1099)==x1100));

    if (t153 != 367064U) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint16_t x1105 = 44U;
	int16_t x1106 = INT16_MIN;
	static volatile uint16_t x1107 = 7U;
	int32_t x1108 = INT32_MIN;
	volatile int32_t t154 = 68;

    t154 = (x1105<<((x1106%x1107)==x1108));

    if (t154 != 44) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x1109 = INT8_MAX;
	int8_t x1111 = -3;
	int8_t x1112 = INT8_MIN;
	volatile int32_t t155 = -1;

    t155 = (x1109<<((x1110%x1111)==x1112));

    if (t155 != 127) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x1125 = 52648962LLU;
	int16_t x1126 = INT16_MIN;
	static int8_t x1127 = INT8_MIN;
	uint16_t x1128 = 1134U;
	static volatile uint64_t t156 = 32896928815361LLU;

    t156 = (x1125<<((x1126%x1127)==x1128));

    if (t156 != 52648962LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x1129 = INT16_MAX;
	static volatile uint16_t x1131 = UINT16_MAX;
	int16_t x1132 = -1;
	volatile int32_t t157 = 7716791;

    t157 = (x1129<<((x1130%x1131)==x1132));

    if (t157 != 32767) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint16_t x1133 = 7U;
	uint16_t x1135 = 2551U;
	int32_t t158 = 4816254;

    t158 = (x1133<<((x1134%x1135)==x1136));

    if (t158 != 7) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x1137 = UINT8_MAX;
	static int64_t x1138 = INT64_MIN;
	static int16_t x1139 = INT16_MIN;
	volatile int32_t x1140 = -27;
	int32_t t159 = 1298;

    t159 = (x1137<<((x1138%x1139)==x1140));

    if (t159 != 255) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x1141 = UINT16_MAX;
	uint32_t x1143 = 162182U;
	volatile int32_t t160 = 174;

    t160 = (x1141<<((x1142%x1143)==x1144));

    if (t160 != 65535) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x1149 = 14;
	int64_t x1150 = 328654402673711163LL;
	uint8_t x1151 = 7U;
	uint32_t x1152 = 362U;
	volatile int32_t t161 = 2055;

    t161 = (x1149<<((x1150%x1151)==x1152));

    if (t161 != 14) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x1153 = INT32_MAX;
	uint16_t x1154 = UINT16_MAX;
	volatile int16_t x1155 = 37;
	int32_t t162 = INT32_MAX;

    t162 = (x1153<<((x1154%x1155)==x1156));

    if (t162 != INT32_MAX) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x1161 = 4503815U;
	volatile uint16_t x1162 = 6647U;
	int64_t x1163 = INT64_MAX;
	int32_t x1164 = INT32_MIN;

    t163 = (x1161<<((x1162%x1163)==x1164));

    if (t163 != 4503815U) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x1165 = 3U;
	volatile int16_t x1166 = -1;
	int16_t x1167 = -38;
	int32_t x1168 = INT32_MIN;
	volatile int32_t t164 = 0;

    t164 = (x1165<<((x1166%x1167)==x1168));

    if (t164 != 3) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x1177 = INT64_MAX;
	int64_t x1178 = -1LL;
	uint32_t x1179 = 50112481U;
	uint16_t x1180 = 122U;
	volatile int64_t t165 = INT64_MAX;

    t165 = (x1177<<((x1178%x1179)==x1180));

    if (t165 != INT64_MAX) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x1185 = 58;
	uint32_t x1186 = 48018U;
	int8_t x1188 = INT8_MIN;
	int32_t t166 = 234768837;

    t166 = (x1185<<((x1186%x1187)==x1188));

    if (t166 != 58) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x1189 = INT8_MAX;
	int32_t x1190 = INT32_MIN;
	uint8_t x1191 = 3U;
	volatile int32_t x1192 = 10592;
	int32_t t167 = 28876;

    t167 = (x1189<<((x1190%x1191)==x1192));

    if (t167 != 127) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x1205 = INT64_MAX;
	uint64_t x1206 = 5170386569671827LLU;
	volatile uint16_t x1208 = UINT16_MAX;
	volatile int64_t t168 = INT64_MAX;

    t168 = (x1205<<((x1206%x1207)==x1208));

    if (t168 != INT64_MAX) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x1209 = INT8_MAX;
	int32_t x1210 = -1;
	uint16_t x1211 = 778U;
	int32_t x1212 = -1;
	volatile int32_t t169 = 31935333;

    t169 = (x1209<<((x1210%x1211)==x1212));

    if (t169 != 254) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x1217 = UINT16_MAX;
	volatile int32_t x1220 = 66447231;
	volatile int32_t t170 = 1;

    t170 = (x1217<<((x1218%x1219)==x1220));

    if (t170 != 65535) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int32_t x1221 = 19402;
	volatile uint64_t x1222 = UINT64_MAX;
	int8_t x1224 = -18;
	int32_t t171 = 94;

    t171 = (x1221<<((x1222%x1223)==x1224));

    if (t171 != 19402) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t x1225 = INT32_MAX;
	int64_t x1226 = INT64_MIN;
	uint16_t x1227 = 99U;
	uint16_t x1228 = 2916U;

    t172 = (x1225<<((x1226%x1227)==x1228));

    if (t172 != INT32_MAX) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint64_t x1253 = 102035779610LLU;
	int32_t x1256 = INT32_MIN;
	uint64_t t173 = 16804275LLU;

    t173 = (x1253<<((x1254%x1255)==x1256));

    if (t173 != 102035779610LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x1261 = INT32_MAX;
	static int64_t x1262 = INT64_MIN;
	uint32_t x1263 = 294053U;
	volatile int32_t t174 = INT32_MAX;

    t174 = (x1261<<((x1262%x1263)==x1264));

    if (t174 != INT32_MAX) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint32_t x1269 = 39693664U;
	int64_t x1272 = 7857932LL;

    t175 = (x1269<<((x1270%x1271)==x1272));

    if (t175 != 39693664U) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x1273 = INT16_MAX;
	int8_t x1274 = INT8_MAX;
	volatile int16_t x1275 = -280;
	uint32_t x1276 = 50196186U;

    t176 = (x1273<<((x1274%x1275)==x1276));

    if (t176 != 32767) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x1278 = 1286359U;
	uint32_t x1279 = UINT32_MAX;
	uint64_t x1280 = UINT64_MAX;
	volatile uint32_t t177 = 948438758U;

    t177 = (x1277<<((x1278%x1279)==x1280));

    if (t177 != 188682337U) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x1281 = 132;
	int16_t x1282 = -1;
	static uint8_t x1283 = 36U;
	static uint64_t x1284 = 3319313930429211162LLU;
	int32_t t178 = 1750582;

    t178 = (x1281<<((x1282%x1283)==x1284));

    if (t178 != 132) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x1285 = 5;
	int8_t x1286 = INT8_MAX;
	int32_t x1287 = INT32_MIN;
	int32_t x1288 = INT32_MIN;
	static volatile int32_t t179 = 2;

    t179 = (x1285<<((x1286%x1287)==x1288));

    if (t179 != 5) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint8_t x1290 = UINT8_MAX;
	uint64_t x1291 = 803657671465903LLU;
	int32_t t180 = -4;

    t180 = (x1289<<((x1290%x1291)==x1292));

    if (t180 != 222) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x1293 = 1626LLU;
	static int16_t x1294 = INT16_MIN;
	uint64_t x1295 = UINT64_MAX;
	int8_t x1296 = INT8_MIN;
	volatile uint64_t t181 = 4040013990447989LLU;

    t181 = (x1293<<((x1294%x1295)==x1296));

    if (t181 != 1626LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint8_t x1298 = UINT8_MAX;
	static int8_t x1299 = INT8_MAX;
	volatile uint64_t x1300 = 51LLU;
	int32_t t182 = 110779;

    t182 = (x1297<<((x1298%x1299)==x1300));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x1305 = 65;
	int16_t x1306 = -1;
	static int16_t x1307 = 3676;
	static volatile int32_t t183 = -7279785;

    t183 = (x1305<<((x1306%x1307)==x1308));

    if (t183 != 65) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint16_t x1322 = 0U;
	int32_t x1323 = -3556;
	uint8_t x1324 = 1U;
	volatile int32_t t184 = 19228975;

    t184 = (x1321<<((x1322%x1323)==x1324));

    if (t184 != 2) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x1337 = 256280737937536664LLU;
	int16_t x1338 = 6;
	volatile uint64_t x1339 = 1655045LLU;
	volatile uint64_t t185 = 24LLU;

    t185 = (x1337<<((x1338%x1339)==x1340));

    if (t185 != 256280737937536664LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x1341 = 24U;
	static int64_t x1342 = INT64_MAX;
	volatile uint32_t x1343 = 1372U;
	int8_t x1344 = INT8_MAX;
	int32_t t186 = 16;

    t186 = (x1341<<((x1342%x1343)==x1344));

    if (t186 != 24) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x1365 = 1U;
	uint16_t x1366 = 0U;
	int32_t t187 = 955;

    t187 = (x1365<<((x1366%x1367)==x1368));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x1369 = 48;
	volatile int8_t x1370 = INT8_MIN;
	static int64_t x1371 = -1LL;
	int8_t x1372 = 29;
	int32_t t188 = 4;

    t188 = (x1369<<((x1370%x1371)==x1372));

    if (t188 != 48) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint64_t x1374 = 5204596805LLU;
	static int64_t x1375 = INT64_MAX;
	volatile int32_t t189 = -9;

    t189 = (x1373<<((x1374%x1375)==x1376));

    if (t189 != 32767) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint8_t x1381 = 6U;
	volatile int32_t x1382 = -12;
	uint8_t x1384 = 10U;
	int32_t t190 = 1118;

    t190 = (x1381<<((x1382%x1383)==x1384));

    if (t190 != 6) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x1385 = INT16_MAX;
	int16_t x1386 = -1;
	volatile uint8_t x1387 = UINT8_MAX;

    t191 = (x1385<<((x1386%x1387)==x1388));

    if (t191 != 32767) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x1389 = 0U;
	int16_t x1390 = -59;
	static volatile int32_t x1391 = -1;
	uint32_t x1392 = UINT32_MAX;

    t192 = (x1389<<((x1390%x1391)==x1392));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint8_t x1393 = UINT8_MAX;
	uint64_t x1394 = 2346638963905745LLU;
	int64_t x1395 = INT64_MAX;
	int16_t x1396 = INT16_MIN;
	volatile int32_t t193 = -1443097;

    t193 = (x1393<<((x1394%x1395)==x1396));

    if (t193 != 255) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x1409 = 27423LLU;
	int8_t x1411 = INT8_MIN;
	volatile int32_t x1412 = INT32_MIN;
	uint64_t t194 = 2972LLU;

    t194 = (x1409<<((x1410%x1411)==x1412));

    if (t194 != 27423LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x1413 = UINT16_MAX;
	static int32_t x1414 = -1;
	uint64_t x1415 = 1399685LLU;
	int8_t x1416 = -1;
	int32_t t195 = -26646;

    t195 = (x1413<<((x1414%x1415)==x1416));

    if (t195 != 65535) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x1417 = 0LL;
	int64_t x1419 = 1145LL;
	int64_t t196 = 69483484LL;

    t196 = (x1417<<((x1418%x1419)==x1420));

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int64_t x1433 = 1LL;
	uint64_t x1434 = 331LLU;
	int32_t x1435 = INT32_MIN;

    t197 = (x1433<<((x1434%x1435)==x1436));

    if (t197 != 1LL) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint64_t x1441 = UINT64_MAX;
	static int16_t x1442 = INT16_MAX;
	uint64_t t198 = UINT64_MAX;

    t198 = (x1441<<((x1442%x1443)==x1444));

    if (t198 != UINT64_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x1445 = 36187093LL;
	int32_t x1446 = INT32_MIN;
	int64_t x1448 = INT64_MIN;
	volatile int64_t t199 = 450422LL;

    t199 = (x1445<<((x1446%x1447)==x1448));

    if (t199 != 36187093LL) { NG(); } else { ; }
	
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

