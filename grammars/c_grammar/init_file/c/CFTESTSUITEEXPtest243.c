
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

volatile int16_t x8 = 80;
volatile int64_t x9 = INT64_MIN;
static int64_t x21 = INT64_MAX;
volatile uint64_t x22 = 2245798682555442664LLU;
volatile int32_t t5 = -137578992;
int8_t x41 = 19;
int8_t x43 = INT8_MIN;
volatile int16_t x63 = INT16_MAX;
uint32_t t8 = 1U;
uint64_t x81 = 6218101918LLU;
uint16_t x132 = 1592U;
uint64_t t12 = 43125298LLU;
static uint32_t x139 = 61660256U;
uint8_t x140 = 87U;
volatile uint32_t t13 = 91826U;
int8_t x165 = -1;
int8_t x166 = INT8_MIN;
uint16_t x168 = 921U;
int32_t t16 = -13354525;
int16_t x201 = -1;
int8_t x203 = 9;
volatile uint16_t x214 = UINT16_MAX;
int8_t x226 = INT8_MIN;
static int8_t x228 = 50;
int32_t x229 = 1503;
int8_t x230 = INT8_MIN;
int64_t x231 = INT64_MIN;
static uint16_t x253 = 15U;
volatile int8_t x256 = INT8_MAX;
volatile int64_t x295 = INT64_MIN;
uint64_t x331 = 14774244LLU;
uint32_t x332 = 11025U;
volatile uint64_t t30 = 559898552408LLU;
int32_t x345 = -1;
uint32_t x348 = 5982037U;
int64_t x376 = 31LL;
int8_t x388 = INT8_MIN;
volatile uint16_t x397 = 307U;
volatile int8_t x402 = INT8_MIN;
int8_t x422 = -1;
int8_t x435 = INT8_MIN;
static int16_t x441 = INT16_MIN;
uint64_t t44 = 34LLU;
uint64_t t46 = 3502059718LLU;
volatile uint64_t x480 = 5296483076810471LLU;
int32_t x482 = -1;
volatile int32_t x485 = INT32_MIN;
volatile uint16_t x487 = 4U;
int16_t x503 = -1;
uint8_t x504 = 116U;
uint64_t t52 = 1019378LLU;
volatile int32_t x505 = -1;
uint32_t x509 = UINT32_MAX;
static int8_t x511 = INT8_MIN;
int64_t t54 = 1LL;
uint64_t t55 = 6423875033LLU;
int16_t x525 = -1;
volatile int8_t x539 = INT8_MIN;
int64_t x542 = -1LL;
uint64_t t59 = 12229642106973713LLU;
volatile int8_t x575 = 3;
volatile int64_t x581 = 361590031LL;
int64_t x584 = 1251565492LL;
int32_t x589 = -1;
static int8_t x590 = -1;
int64_t t62 = -7800LL;
uint64_t x596 = 1LLU;
static volatile uint64_t t64 = 221747009429589LLU;
static int64_t x673 = INT64_MIN;
static int64_t t70 = 23197649374262656LL;
int16_t x678 = INT16_MAX;
volatile int32_t t71 = 3199;
int32_t x682 = 7838482;
volatile uint32_t x686 = UINT32_MAX;
volatile int32_t x688 = INT32_MAX;
volatile int8_t x692 = -54;
volatile int32_t x704 = 6;
int32_t t75 = -4;
int32_t x713 = -1265158;
int32_t x715 = 1342;
volatile uint32_t x753 = 163988U;
int16_t x754 = INT16_MIN;
static volatile int8_t x761 = INT8_MAX;
int64_t x767 = INT64_MIN;
uint32_t x768 = 476455982U;
static int32_t x789 = INT32_MAX;
volatile int32_t t84 = -7881906;
uint32_t x804 = 669U;
uint64_t t85 = 24455LLU;
uint16_t x805 = 254U;
int32_t x809 = INT32_MIN;
volatile int64_t t87 = -9573228556LL;
int16_t x827 = 0;
int8_t x848 = INT8_MIN;
int64_t t90 = -455354LL;
int16_t x871 = INT16_MIN;
int16_t x872 = INT16_MIN;
uint8_t x880 = 22U;
int16_t x886 = 332;
int16_t x892 = INT16_MAX;
int32_t x897 = INT32_MIN;
volatile uint8_t x906 = UINT8_MAX;
uint32_t x909 = 1189159U;
int32_t x910 = INT32_MIN;
int64_t x911 = INT64_MIN;
int64_t x921 = -4684530LL;
volatile uint32_t t102 = 29623U;
uint16_t x980 = 11U;
int64_t x981 = INT64_MIN;
int64_t x994 = INT64_MIN;
int32_t x1004 = -1;
int16_t x1007 = INT16_MIN;
int8_t x1008 = INT8_MIN;
volatile int32_t t110 = 86386;
int16_t x1024 = INT16_MIN;
uint64_t x1026 = 11454593LLU;
static int8_t x1043 = -1;
volatile int32_t x1046 = 22788;
volatile uint32_t x1048 = 320030466U;
volatile uint32_t t114 = 187U;
volatile int16_t x1098 = INT16_MIN;
int64_t x1102 = 1950LL;
int16_t x1103 = 127;
volatile int64_t t117 = 7LL;
int16_t x1118 = INT16_MIN;
int8_t x1127 = INT8_MAX;
int32_t x1141 = INT32_MIN;
volatile int8_t x1143 = -1;
volatile int8_t x1160 = INT8_MAX;
int8_t x1182 = INT8_MIN;
static uint16_t x1193 = UINT16_MAX;
int32_t x1196 = -1;
volatile int32_t x1198 = INT32_MIN;
static int8_t x1213 = INT8_MIN;
static int8_t x1214 = -1;
int32_t x1216 = INT32_MAX;
volatile int32_t t130 = 2079971;
uint64_t x1221 = 21804LLU;
static uint16_t x1223 = UINT16_MAX;
volatile uint32_t t132 = 3701253U;
static volatile int64_t t133 = 248867886933509351LL;
int32_t x1247 = INT32_MIN;
static uint16_t x1258 = 1556U;
int16_t x1266 = -180;
int64_t x1273 = INT64_MAX;
static uint8_t x1284 = 6U;
uint32_t x1297 = 1341061683U;
int16_t x1312 = INT16_MAX;
volatile uint32_t t145 = 2784443U;
static int16_t x1366 = INT16_MIN;
uint8_t x1374 = 11U;
uint16_t x1375 = 562U;
int16_t x1379 = INT16_MIN;
int8_t x1386 = 42;
int8_t x1413 = 0;
uint32_t x1414 = UINT32_MAX;
uint16_t x1469 = UINT16_MAX;
volatile int64_t x1470 = 1563306622042340526LL;
volatile int8_t x1471 = -1;
int8_t x1472 = INT8_MIN;
int8_t x1487 = -16;
volatile int8_t x1488 = INT8_MAX;
int16_t x1498 = INT16_MIN;
uint16_t x1499 = UINT16_MAX;
uint64_t t157 = 3057073800LLU;
int32_t x1501 = 34;
int64_t x1504 = -243775170298LL;
int8_t x1505 = INT8_MAX;
int64_t x1506 = -226584574040593510LL;
uint64_t t161 = 196252LLU;
volatile uint64_t x1539 = 669969190397LLU;
int32_t x1545 = INT32_MIN;
int64_t x1578 = -1LL;
int32_t x1579 = 0;
int8_t x1600 = INT8_MAX;
uint16_t x1602 = UINT16_MAX;
int8_t x1605 = -1;
volatile uint64_t t171 = 380LLU;
volatile int32_t t172 = -2324436;
int64_t x1631 = INT64_MIN;
static int8_t x1634 = 7;
int16_t x1669 = INT16_MIN;
int64_t t178 = 805948209LL;
int32_t t179 = -29828683;
int8_t x1681 = -1;
static int8_t x1683 = INT8_MIN;
volatile uint8_t x1684 = 5U;
uint32_t x1689 = UINT32_MAX;
static int16_t x1697 = INT16_MIN;
volatile int32_t x1711 = -1;
static int8_t x1714 = -27;
uint64_t x1718 = 12LLU;
static uint16_t x1732 = 1409U;
uint32_t x1735 = 94453487U;
int64_t x1736 = 1030645325LL;
int64_t x1762 = INT64_MIN;
volatile int32_t x1764 = 461977;
uint32_t t192 = 7336885U;
int32_t x1793 = INT32_MIN;
int32_t x1832 = -805566086;
int32_t x1843 = 35706;
volatile int64_t t199 = 1750560LL;


void f0(void) {
    	int8_t x1 = 0;
	int64_t x2 = INT64_MAX;
	uint16_t x3 = 17012U;
	volatile int32_t x4 = INT32_MIN;
	volatile int64_t t0 = -1098727511001LL;

    t0 = (x1%((x2-x3)/x4));

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = 2015092042U;
	int8_t x6 = 1;
	uint64_t x7 = 144189LLU;
	uint64_t t1 = 928081LLU;

    t1 = (x5%((x6-x7)/x8));

    if (t1 != 2015092042LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x10 = UINT8_MAX;
	volatile int64_t x11 = -805773LL;
	volatile int16_t x12 = 1515;
	int64_t t2 = 19339050278LL;

    t2 = (x9%((x10-x11)/x12));

    if (t2 != -512LL) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint8_t x17 = UINT8_MAX;
	static int8_t x18 = -15;
	volatile int32_t x19 = INT32_MIN;
	int16_t x20 = -1;
	static volatile int32_t t3 = -4751564;

    t3 = (x17%((x18-x19)/x20));

    if (t3 != 255) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x23 = 1787470U;
	static volatile uint8_t x24 = 3U;
	volatile uint64_t t4 = 488527LLU;

    t4 = (x21%((x22-x23)/x24));

    if (t4 != 240177306640155031LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x29 = -1;
	uint16_t x30 = UINT16_MAX;
	int16_t x31 = -1;
	volatile int8_t x32 = INT8_MIN;

    t5 = (x29%((x30-x31)/x32));

    if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x42 = 1152364565LLU;
	uint8_t x44 = 3U;
	static uint64_t t6 = 61326LLU;

    t6 = (x41%((x42-x43)/x44));

    if (t6 != 19LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x57 = -2;
	volatile uint32_t x58 = 529710339U;
	int16_t x59 = INT16_MIN;
	int32_t x60 = 4451285;
	uint32_t t7 = 505362U;

    t7 = (x57%((x58-x59)/x60));

    if (t7 != 16U) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x61 = UINT32_MAX;
	volatile int16_t x62 = -1;
	uint32_t x64 = 368907321U;

    t8 = (x61%((x62-x63)/x64));

    if (t8 != 3U) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int64_t x82 = INT64_MAX;
	int8_t x83 = INT8_MAX;
	static int32_t x84 = -1;
	uint64_t t9 = 3061652985064LLU;

    t9 = (x81%((x82-x83)/x84));

    if (t9 != 6218101918LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x105 = 5540489497868338189LLU;
	volatile uint64_t x106 = 741494276355805811LLU;
	int32_t x107 = -1;
	uint16_t x108 = 62U;
	volatile uint64_t t10 = 1348952202517LLU;

    t10 = (x105%((x106-x107)/x108));

    if (t10 != 3201595404821041LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x113 = INT8_MAX;
	uint16_t x114 = 1U;
	static volatile int16_t x115 = INT16_MIN;
	static int16_t x116 = INT16_MIN;
	volatile int32_t t11 = 5033;

    t11 = (x113%((x114-x115)/x116));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x129 = -21;
	volatile uint64_t x130 = 350499431LLU;
	static int16_t x131 = INT16_MIN;

    t12 = (x129%((x130-x131)/x132));

    if (t12 != 1689LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x137 = UINT16_MAX;
	static volatile uint8_t x138 = UINT8_MAX;

    t13 = (x137%((x138-x139)/x140));

    if (t13 != 65535U) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint64_t x167 = 17492271071732LLU;
	volatile uint64_t t14 = 2085879441LLU;

    t14 = (x165%((x166-x167)/x168));

    if (t14 != 17492271071865LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x177 = INT16_MAX;
	volatile int16_t x178 = -106;
	uint8_t x179 = 4U;
	static int64_t x180 = -1LL;
	static int64_t t15 = -1LL;

    t15 = (x177%((x178-x179)/x180));

    if (t15 != 97LL) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x181 = INT8_MIN;
	int16_t x182 = INT16_MIN;
	int16_t x183 = -1;
	static uint16_t x184 = 8U;

    t16 = (x181%((x182-x183)/x184));

    if (t16 != -128) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x193 = INT16_MIN;
	volatile uint32_t x194 = UINT32_MAX;
	uint32_t x195 = 530U;
	uint16_t x196 = UINT16_MAX;
	uint32_t t17 = 2569505U;

    t17 = (x193%((x194-x195)/x196));

    if (t17 != 32768U) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x197 = -3811;
	int16_t x198 = INT16_MIN;
	int8_t x199 = -1;
	int16_t x200 = 1;
	int32_t t18 = -282;

    t18 = (x197%((x198-x199)/x200));

    if (t18 != -3811) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x202 = INT8_MIN;
	uint16_t x204 = 3U;
	volatile int32_t t19 = -2;

    t19 = (x201%((x202-x203)/x204));

    if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x213 = -1;
	static int16_t x215 = 112;
	uint16_t x216 = 21572U;
	volatile int32_t t20 = -3;

    t20 = (x213%((x214-x215)/x216));

    if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x225 = 3U;
	volatile int64_t x227 = 1LL;
	int64_t t21 = -3216690171704705656LL;

    t21 = (x225%((x226-x227)/x228));

    if (t21 != 1LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x232 = 4752544915LLU;
	uint64_t t22 = 15LLU;

    t22 = (x229%((x230-x231)/x232));

    if (t22 != 1503LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x249 = INT32_MIN;
	int16_t x250 = -1;
	int64_t x251 = INT64_MAX;
	int64_t x252 = 241312LL;
	volatile int64_t t23 = 1312155408LL;

    t23 = (x249%((x250-x251)/x252));

    if (t23 != -2147483648LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x254 = -9671323289LL;
	uint8_t x255 = UINT8_MAX;
	volatile int64_t t24 = 262971LL;

    t24 = (x253%((x254-x255)/x256));

    if (t24 != 15LL) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint64_t x257 = 5518460LLU;
	volatile uint32_t x258 = 2263073U;
	int8_t x259 = INT8_MIN;
	volatile uint32_t x260 = 186518U;
	uint64_t t25 = 4945732LLU;

    t25 = (x257%((x258-x259)/x260));

    if (t25 != 8LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint64_t x293 = UINT64_MAX;
	volatile int16_t x294 = INT16_MIN;
	uint8_t x296 = 1U;
	uint64_t t26 = 6571062620644046LLU;

    t26 = (x293%((x294-x295)/x296));

    if (t26 != 65535LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint32_t x313 = 3U;
	static int16_t x314 = INT16_MAX;
	int32_t x315 = INT32_MAX;
	int8_t x316 = INT8_MIN;
	uint32_t t27 = 3U;

    t27 = (x313%((x314-x315)/x316));

    if (t27 != 3U) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x329 = 5;
	uint16_t x330 = 1926U;
	uint64_t t28 = 1983129974454949LLU;

    t28 = (x329%((x330-x331)/x332));

    if (t28 != 5LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x337 = UINT32_MAX;
	static uint16_t x338 = UINT16_MAX;
	uint16_t x339 = 396U;
	int32_t x340 = 15602;
	static volatile uint32_t t29 = 50133441U;

    t29 = (x337%((x338-x339)/x340));

    if (t29 != 3U) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x341 = -1;
	uint64_t x342 = UINT64_MAX;
	static int32_t x343 = -3717333;
	int64_t x344 = 194748LL;

    t30 = (x341%((x342-x343)/x344));

    if (t30 != 16LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x346 = 0;
	int32_t x347 = INT32_MAX;
	uint32_t t31 = 13U;

    t31 = (x345%((x346-x347)/x348));

    if (t31 != 125U) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x349 = -1;
	uint16_t x350 = 217U;
	uint32_t x351 = 2011973917U;
	static uint8_t x352 = 2U;
	volatile uint32_t t32 = 521512113U;

    t32 = (x349%((x350-x351)/x352));

    if (t32 != 870476901U) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x373 = INT16_MIN;
	static uint16_t x374 = 1U;
	uint32_t x375 = 20739U;
	volatile int64_t t33 = 492364334479LL;

    t33 = (x373%((x374-x375)/x376));

    if (t33 != -32768LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x385 = INT16_MIN;
	volatile int64_t x386 = -294449246LL;
	static int64_t x387 = INT64_MIN;
	volatile int64_t t34 = -1646723675246LL;

    t34 = (x385%((x386-x387)/x388));

    if (t34 != -32768LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint8_t x393 = 1U;
	int32_t x394 = 110818;
	int16_t x395 = -1;
	int8_t x396 = -1;
	volatile int32_t t35 = 1033156959;

    t35 = (x393%((x394-x395)/x396));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x398 = INT64_MIN;
	int16_t x399 = INT16_MIN;
	volatile int8_t x400 = INT8_MAX;
	int64_t t36 = -2454108251538LL;

    t36 = (x397%((x398-x399)/x400));

    if (t36 != 307LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x401 = -3;
	volatile int32_t x403 = 68379;
	static volatile int16_t x404 = -1;
	int32_t t37 = 0;

    t37 = (x401%((x402-x403)/x404));

    if (t37 != -3) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x405 = -343873430;
	int8_t x406 = INT8_MIN;
	uint32_t x407 = 5366U;
	uint64_t x408 = 1LLU;
	volatile uint64_t t38 = 8457137037949LLU;

    t38 = (x405%((x406-x407)/x408));

    if (t38 != 3981272408LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x421 = 7;
	int32_t x423 = -75055790;
	static int8_t x424 = INT8_MIN;
	static volatile int32_t t39 = -7697;

    t39 = (x421%((x422-x423)/x424));

    if (t39 != 7) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x425 = -92264735042LL;
	volatile int64_t x426 = 14LL;
	uint64_t x427 = 19161213001LLU;
	int16_t x428 = 347;
	uint64_t t40 = 4280072921790276LLU;

    t40 = (x425%((x426-x427)/x428));

    if (t40 != 53160572586819156LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x429 = UINT64_MAX;
	int16_t x430 = INT16_MAX;
	static volatile uint8_t x431 = 4U;
	int16_t x432 = -3032;
	volatile uint64_t t41 = 3195293755759735034LLU;

    t41 = (x429%((x430-x431)/x432));

    if (t41 != 9LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile int32_t x433 = INT32_MIN;
	int64_t x434 = 3852739342096049LL;
	int8_t x436 = INT8_MIN;
	static int64_t t42 = 248041421813038LL;

    t42 = (x433%((x434-x435)/x436));

    if (t42 != -2147483648LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x442 = 22119U;
	int64_t x443 = -6350531LL;
	uint64_t x444 = 11495LLU;
	volatile uint64_t t43 = 837787011LLU;

    t43 = (x441%((x442-x443)/x444));

    if (t43 != 370LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint64_t x445 = UINT64_MAX;
	int8_t x446 = INT8_MAX;
	int32_t x447 = INT32_MAX;
	volatile int32_t x448 = -200951;

    t44 = (x445%((x446-x447)/x448));

    if (t44 != 9375LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x449 = INT8_MIN;
	volatile int8_t x450 = 41;
	static int32_t x451 = INT32_MAX;
	uint64_t x452 = 991700LLU;
	uint64_t t45 = 69199223LLU;

    t45 = (x449%((x450-x451)/x452));

    if (t45 != 2147911788LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x453 = 155848163U;
	int64_t x454 = 313817983LL;
	uint64_t x455 = UINT64_MAX;
	int16_t x456 = 97;

    t46 = (x453%((x454-x455)/x456));

    if (t46 != 556835LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x465 = UINT16_MAX;
	int32_t x466 = INT32_MIN;
	int16_t x467 = -1;
	static int8_t x468 = 6;
	volatile int32_t t47 = -2730418;

    t47 = (x465%((x466-x467)/x468));

    if (t47 != 65535) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x469 = 10472097;
	int16_t x470 = -11;
	uint32_t x471 = 3U;
	int8_t x472 = INT8_MIN;
	uint32_t t48 = 1U;

    t48 = (x469%((x470-x471)/x472));

    if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x477 = 245455887553300LL;
	int32_t x478 = INT32_MAX;
	int64_t x479 = INT64_MAX;
	volatile uint64_t t49 = 15LLU;

    t49 = (x477%((x478-x479)/x480));

    if (t49 != 191LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x481 = INT16_MIN;
	int32_t x483 = -11957;
	int16_t x484 = -1;
	volatile int32_t t50 = 0;

    t50 = (x481%((x482-x483)/x484));

    if (t50 != -8856) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint8_t x486 = 0U;
	int16_t x488 = -1;
	volatile int32_t t51 = 197933;

    t51 = (x485%((x486-x487)/x488));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x501 = 216;
	uint64_t x502 = 7758991470769LLU;

    t52 = (x501%((x502-x503)/x504));

    if (t52 != 216LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x506 = -9;
	volatile uint32_t x507 = 1292U;
	int16_t x508 = INT16_MIN;
	uint32_t t53 = 4341555U;

    t53 = (x505%((x506-x507)/x508));

    if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x510 = -3LL;
	uint16_t x512 = 112U;

    t54 = (x509%((x510-x511)/x512));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x521 = -1;
	uint64_t x522 = 118891820901493LLU;
	static int8_t x523 = INT8_MIN;
	int32_t x524 = INT32_MAX;

    t55 = (x521%((x522-x523)/x524));

    if (t55 != 45445LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x526 = 12U;
	int8_t x527 = INT8_MIN;
	uint32_t x528 = 62U;
	uint32_t t56 = 18059U;

    t56 = (x525%((x526-x527)/x528));

    if (t56 != 1U) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int64_t x537 = INT64_MIN;
	volatile int8_t x538 = 13;
	int8_t x540 = -1;
	int64_t t57 = 30033825LL;

    t57 = (x537%((x538-x539)/x540));

    if (t57 != -83LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x541 = -4;
	int32_t x543 = INT32_MAX;
	int16_t x544 = -715;
	volatile int64_t t58 = -198042355612LL;

    t58 = (x541%((x542-x543)/x544));

    if (t58 != -4LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x561 = 0;
	int8_t x562 = 5;
	static volatile uint64_t x563 = 230146985836LLU;
	int32_t x564 = INT32_MAX;

    t59 = (x561%((x562-x563)/x564));

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x573 = INT16_MIN;
	int64_t x574 = INT64_MAX;
	uint32_t x576 = UINT32_MAX;
	int64_t t60 = 6490417707638LL;

    t60 = (x573%((x574-x575)/x576));

    if (t60 != -32768LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x582 = -887LL;
	int32_t x583 = INT32_MIN;
	int64_t t61 = 3282LL;

    t61 = (x581%((x582-x583)/x584));

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x591 = INT64_MAX;
	int64_t x592 = 88625157LL;

    t62 = (x589%((x590-x591)/x592));

    if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x593 = UINT32_MAX;
	static uint8_t x594 = 17U;
	static int16_t x595 = INT16_MIN;
	uint64_t t63 = 3LLU;

    t63 = (x593%((x594-x595)/x596));

    if (t63 != 1155LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x597 = -10;
	int32_t x598 = INT32_MIN;
	int16_t x599 = -1;
	uint64_t x600 = 13319209347339432LLU;

    t64 = (x597%((x598-x599)/x600));

    if (t64 != 902LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x613 = -5;
	int32_t x614 = INT32_MAX;
	uint16_t x615 = 1765U;
	int16_t x616 = INT16_MIN;
	int32_t t65 = 3;

    t65 = (x613%((x614-x615)/x616));

    if (t65 != -5) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x625 = 1;
	int8_t x626 = INT8_MIN;
	static int64_t x627 = 468343LL;
	uint16_t x628 = UINT16_MAX;
	volatile int64_t t66 = -540822945068327962LL;

    t66 = (x625%((x626-x627)/x628));

    if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x641 = INT64_MIN;
	uint64_t x642 = 78691381364215326LLU;
	int32_t x643 = INT32_MAX;
	uint32_t x644 = UINT32_MAX;
	uint64_t t67 = 117914333LLU;

    t67 = (x641%((x642-x643)/x644));

    if (t67 != 7685080LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x661 = INT32_MAX;
	static int32_t x662 = 0;
	static int8_t x663 = INT8_MIN;
	static int32_t x664 = -2;
	int32_t t68 = -190978;

    t68 = (x661%((x662-x663)/x664));

    if (t68 != 63) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x665 = 20929U;
	int32_t x666 = INT32_MAX;
	volatile int64_t x667 = -15302095485LL;
	uint32_t x668 = UINT32_MAX;
	volatile int64_t t69 = 4395LL;

    t69 = (x665%((x666-x667)/x668));

    if (t69 != 1LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x674 = 24U;
	int64_t x675 = INT64_MAX;
	static uint8_t x676 = 1U;

    t70 = (x673%((x674-x675)/x676));

    if (t70 != -25LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x677 = INT16_MIN;
	int8_t x679 = INT8_MAX;
	uint8_t x680 = 1U;

    t71 = (x677%((x678-x679)/x680));

    if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x681 = 1953422057LL;
	int64_t x683 = INT64_MAX;
	volatile int16_t x684 = 7;
	int64_t t72 = 160910883LL;

    t72 = (x681%((x682-x683)/x684));

    if (t72 != 1953422057LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x685 = -52;
	uint32_t x687 = 162248U;
	uint32_t t73 = 4725651U;

    t73 = (x685%((x686-x687)/x688));

    if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x689 = 226727U;
	static int8_t x690 = -1;
	int64_t x691 = INT64_MIN;
	static volatile int64_t t74 = -737042468187328LL;

    t74 = (x689%((x690-x691)/x692));

    if (t74 != 226727LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x701 = 2;
	int8_t x702 = INT8_MIN;
	int32_t x703 = -5321550;

    t75 = (x701%((x702-x703)/x704));

    if (t75 != 2) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x705 = INT16_MAX;
	static int16_t x706 = -1;
	int32_t x707 = INT32_MAX;
	uint16_t x708 = UINT16_MAX;
	static int32_t t76 = 53;

    t76 = (x705%((x706-x707)/x708));

    if (t76 != 32767) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x714 = -60589892533521LL;
	int16_t x716 = INT16_MAX;
	volatile int64_t t77 = -60520880291LL;

    t77 = (x713%((x714-x715)/x716));

    if (t77 != -1265158LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x725 = 26332U;
	uint8_t x726 = 6U;
	int32_t x727 = 459445765;
	int8_t x728 = INT8_MIN;
	uint32_t t78 = 402459U;

    t78 = (x725%((x726-x727)/x728));

    if (t78 != 26332U) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x737 = INT64_MIN;
	static volatile int16_t x738 = INT16_MAX;
	uint8_t x739 = UINT8_MAX;
	int8_t x740 = -1;
	volatile int64_t t79 = 1724793161938LL;

    t79 = (x737%((x738-x739)/x740));

    if (t79 != -16384LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x741 = -7594301LL;
	volatile int8_t x742 = 0;
	static int8_t x743 = INT8_MIN;
	int16_t x744 = 31;
	volatile int64_t t80 = 32983285406519LL;

    t80 = (x741%((x742-x743)/x744));

    if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int64_t x755 = INT64_MIN;
	volatile int8_t x756 = INT8_MIN;
	volatile int64_t t81 = -32389731LL;

    t81 = (x753%((x754-x755)/x756));

    if (t81 != 163988LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x762 = INT16_MIN;
	int16_t x763 = -1;
	uint64_t x764 = 2286108808500180397LLU;
	static volatile uint64_t t82 = 57LLU;

    t82 = (x761%((x762-x763)/x764));

    if (t82 != 7LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x765 = 4674;
	uint64_t x766 = 5128386LLU;
	volatile uint64_t t83 = 1779832036674654175LLU;

    t83 = (x765%((x766-x767)/x768));

    if (t83 != 4674LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x790 = -1;
	uint16_t x791 = 1020U;
	int16_t x792 = -946;

    t84 = (x789%((x790-x791)/x792));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x801 = 268LLU;
	int16_t x802 = -46;
	uint64_t x803 = 2854509314LLU;

    t85 = (x801%((x802-x803)/x804));

    if (t85 != 268LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x806 = -1;
	int64_t x807 = -18431LL;
	int64_t x808 = -1LL;
	int64_t t86 = -13489766549703344LL;

    t86 = (x805%((x806-x807)/x808));

    if (t86 != 254LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x810 = INT64_MIN;
	int16_t x811 = -1;
	static volatile int32_t x812 = INT32_MIN;

    t87 = (x809%((x810-x811)/x812));

    if (t87 != -2147483648LL) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint16_t x825 = 11U;
	int32_t x826 = INT32_MIN;
	int32_t x828 = INT32_MIN;
	int32_t t88 = -1005875;

    t88 = (x825%((x826-x827)/x828));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint32_t x845 = UINT32_MAX;
	static int32_t x846 = 1503;
	int8_t x847 = -1;
	volatile uint32_t t89 = 1670U;

    t89 = (x845%((x846-x847)/x848));

    if (t89 != 10U) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x857 = UINT32_MAX;
	static int16_t x858 = -175;
	static volatile int32_t x859 = INT32_MIN;
	static int64_t x860 = 3725607LL;

    t90 = (x857%((x858-x859)/x860));

    if (t90 != 255LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x869 = INT8_MIN;
	int64_t x870 = INT64_MIN;
	static int64_t t91 = 18299519222LL;

    t91 = (x869%((x870-x871)/x872));

    if (t91 != -128LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x877 = -1;
	static uint64_t x878 = 289LLU;
	volatile int16_t x879 = 1;
	volatile uint64_t t92 = 3LLU;

    t92 = (x877%((x878-x879)/x880));

    if (t92 != 2LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x881 = -3;
	uint16_t x882 = 412U;
	int16_t x883 = INT16_MAX;
	int16_t x884 = -1;
	volatile int32_t t93 = 261;

    t93 = (x881%((x882-x883)/x884));

    if (t93 != -3) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x885 = 10428U;
	static int64_t x887 = INT64_MAX;
	uint8_t x888 = UINT8_MAX;
	static int64_t t94 = -759971808911895054LL;

    t94 = (x885%((x886-x887)/x888));

    if (t94 != 10428LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x889 = -9;
	int64_t x890 = -5LL;
	uint32_t x891 = UINT32_MAX;
	static volatile int64_t t95 = -5LL;

    t95 = (x889%((x890-x891)/x892));

    if (t95 != -9LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x898 = -1720285;
	int8_t x899 = INT8_MIN;
	int16_t x900 = -10316;
	int32_t t96 = 11950431;

    t96 = (x897%((x898-x899)/x900));

    if (t96 != -80) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x905 = INT16_MAX;
	int64_t x907 = -96128651389LL;
	int32_t x908 = 64;
	volatile int64_t t97 = 4243354739536307547LL;

    t97 = (x905%((x906-x907)/x908));

    if (t97 != 32767LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x912 = INT8_MAX;
	volatile int64_t t98 = 15624730135289817LL;

    t98 = (x909%((x910-x911)/x912));

    if (t98 != 1189159LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint8_t x922 = 3U;
	uint32_t x923 = 529589975U;
	static int8_t x924 = INT8_MAX;
	volatile int64_t t99 = 45162658LL;

    t99 = (x921%((x922-x923)/x924));

    if (t99 != -4684530LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x925 = 324888;
	int64_t x926 = INT64_MAX;
	uint8_t x927 = 4U;
	int16_t x928 = 217;
	int64_t t100 = 1084536436114LL;

    t100 = (x925%((x926-x927)/x928));

    if (t100 != 324888LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x949 = INT64_MAX;
	int16_t x950 = -1;
	uint32_t x951 = 50806258U;
	int8_t x952 = 11;
	static volatile int64_t t101 = -10347516549067LL;

    t101 = (x949%((x950-x951)/x952));

    if (t101 != 294166231LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x973 = -1;
	uint32_t x974 = 1198785U;
	uint8_t x975 = 8U;
	volatile int8_t x976 = INT8_MAX;

    t102 = (x973%((x974-x975)/x976));

    if (t102 != 5198U) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x977 = UINT64_MAX;
	uint8_t x978 = 75U;
	uint8_t x979 = 61U;
	uint64_t t103 = 157624725091189LLU;

    t103 = (x977%((x978-x979)/x980));

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile int8_t x982 = INT8_MIN;
	uint64_t x983 = UINT64_MAX;
	volatile int64_t x984 = -65864313LL;
	static volatile uint64_t t104 = 2326450279886431535LLU;

    t104 = (x981%((x982-x983)/x984));

    if (t104 != 0LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x993 = -1;
	volatile int16_t x995 = -1;
	volatile int8_t x996 = INT8_MIN;
	int64_t t105 = 10795562685LL;

    t105 = (x993%((x994-x995)/x996));

    if (t105 != -1LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint64_t x1001 = 1529856575308705LLU;
	int16_t x1002 = 346;
	int16_t x1003 = -1;
	uint64_t t106 = 18536031725341LLU;

    t106 = (x1001%((x1002-x1003)/x1004));

    if (t106 != 1529856575308705LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x1005 = -10036298411135LL;
	volatile int8_t x1006 = INT8_MIN;
	static int64_t t107 = 0LL;

    t107 = (x1005%((x1006-x1007)/x1008));

    if (t107 != -215LL) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x1009 = 89;
	uint32_t x1010 = UINT32_MAX;
	static uint8_t x1011 = 5U;
	int64_t x1012 = -1LL;
	volatile int64_t t108 = -754083656413222LL;

    t108 = (x1009%((x1010-x1011)/x1012));

    if (t108 != 89LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x1013 = -1;
	int16_t x1014 = INT16_MIN;
	volatile uint64_t x1015 = UINT64_MAX;
	static int64_t x1016 = INT64_MIN;
	static uint64_t t109 = 11LLU;

    t109 = (x1013%((x1014-x1015)/x1016));

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x1017 = 2783U;
	int32_t x1018 = 665;
	static uint16_t x1019 = 1380U;
	int32_t x1020 = -1;

    t110 = (x1017%((x1018-x1019)/x1020));

    if (t110 != 638) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x1021 = 2;
	volatile int16_t x1022 = INT16_MIN;
	static volatile int32_t x1023 = 3471;
	volatile int32_t t111 = -1053342511;

    t111 = (x1021%((x1022-x1023)/x1024));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x1025 = 13;
	static int64_t x1027 = -1LL;
	uint32_t x1028 = 3U;
	volatile uint64_t t112 = 2250495307110130153LLU;

    t112 = (x1025%((x1026-x1027)/x1028));

    if (t112 != 13LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x1041 = UINT8_MAX;
	uint8_t x1042 = UINT8_MAX;
	static int8_t x1044 = 1;
	volatile int32_t t113 = -31;

    t113 = (x1041%((x1042-x1043)/x1044));

    if (t113 != 255) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x1045 = INT16_MIN;
	static volatile int32_t x1047 = INT32_MAX;

    t114 = (x1045%((x1046-x1047)/x1048));

    if (t114 != 2U) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x1061 = UINT64_MAX;
	static volatile uint64_t x1062 = UINT64_MAX;
	uint64_t x1063 = 260055193909194093LLU;
	uint16_t x1064 = 679U;
	uint64_t t115 = 2596LLU;

    t115 = (x1061%((x1062-x1063)/x1064));

    if (t115 != 18994516562798095LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x1097 = INT16_MAX;
	static int64_t x1099 = 30875288977964586LL;
	uint16_t x1100 = 51U;
	int64_t t116 = -8863528373LL;

    t116 = (x1097%((x1098-x1099)/x1100));

    if (t116 != 32767LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x1101 = INT8_MIN;
	uint16_t x1104 = 11U;

    t117 = (x1101%((x1102-x1103)/x1104));

    if (t117 != -128LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x1109 = UINT16_MAX;
	int16_t x1110 = -3021;
	int32_t x1111 = -116;
	volatile uint64_t x1112 = 46591559338128790LLU;
	static volatile uint64_t t118 = 4137576LLU;

    t118 = (x1109%((x1110-x1111)/x1112));

    if (t118 != 360LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x1117 = INT8_MIN;
	int8_t x1119 = -1;
	int8_t x1120 = INT8_MIN;
	static volatile int32_t t119 = 1429;

    t119 = (x1117%((x1118-x1119)/x1120));

    if (t119 != -128) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int8_t x1125 = 29;
	int32_t x1126 = INT32_MAX;
	int8_t x1128 = INT8_MIN;
	volatile int32_t t120 = -13;

    t120 = (x1125%((x1126-x1127)/x1128));

    if (t120 != 29) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x1142 = INT32_MIN;
	uint32_t x1144 = 14294U;
	uint32_t t121 = 1363667359U;

    t121 = (x1141%((x1142-x1143)/x1144));

    if (t121 != 10264U) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x1157 = -1LL;
	volatile int16_t x1158 = INT16_MIN;
	int32_t x1159 = -32851155;
	static int64_t t122 = 1LL;

    t122 = (x1157%((x1158-x1159)/x1160));

    if (t122 != -1LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x1173 = 2U;
	int64_t x1174 = 7900LL;
	int64_t x1175 = INT64_MAX;
	int8_t x1176 = -4;
	int64_t t123 = -206665LL;

    t123 = (x1173%((x1174-x1175)/x1176));

    if (t123 != 2LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x1177 = 474183991LLU;
	volatile uint32_t x1178 = UINT32_MAX;
	int8_t x1179 = 0;
	uint16_t x1180 = 8721U;
	volatile uint64_t t124 = 516431872640LLU;

    t124 = (x1177%((x1178-x1179)/x1180));

    if (t124 != 413421LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint64_t x1181 = 3415241LLU;
	int8_t x1183 = 3;
	int64_t x1184 = -1LL;
	static volatile uint64_t t125 = 1014480360432599LLU;

    t125 = (x1181%((x1182-x1183)/x1184));

    if (t125 != 71LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x1194 = 325575855U;
	int64_t x1195 = 2LL;
	int64_t t126 = 46758LL;

    t126 = (x1193%((x1194-x1195)/x1196));

    if (t126 != 65535LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x1197 = 2143;
	static int64_t x1199 = INT64_MIN;
	uint16_t x1200 = 66U;
	volatile int64_t t127 = -6994809LL;

    t127 = (x1197%((x1198-x1199)/x1200));

    if (t127 != 2143LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x1205 = 5;
	int16_t x1206 = INT16_MIN;
	uint32_t x1207 = 1315823458U;
	uint64_t x1208 = 3101541LLU;
	volatile uint64_t t128 = 8704243838710LLU;

    t128 = (x1205%((x1206-x1207)/x1208));

    if (t128 != 5LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x1209 = INT64_MIN;
	int16_t x1210 = 1;
	volatile int8_t x1211 = INT8_MIN;
	uint8_t x1212 = 1U;
	int64_t t129 = -2387770640LL;

    t129 = (x1209%((x1210-x1211)/x1212));

    if (t129 != -128LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x1215 = INT32_MAX;

    t130 = (x1213%((x1214-x1215)/x1216));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint16_t x1222 = 41U;
	int16_t x1224 = -1;
	static volatile uint64_t t131 = 1LLU;

    t131 = (x1221%((x1222-x1223)/x1224));

    if (t131 != 21804LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x1225 = -10739989;
	int32_t x1226 = 16;
	uint8_t x1227 = UINT8_MAX;
	static uint32_t x1228 = 21U;

    t132 = (x1225%((x1226-x1227)/x1228));

    if (t132 != 193782507U) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x1233 = -617314594;
	volatile int8_t x1234 = INT8_MIN;
	int64_t x1235 = INT64_MIN;
	uint32_t x1236 = 14U;

    t133 = (x1233%((x1234-x1235)/x1236));

    if (t133 != -617314594LL) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x1245 = -1;
	static int16_t x1246 = INT16_MIN;
	uint32_t x1248 = 280196U;
	static uint32_t t134 = 14987U;

    t134 = (x1245%((x1246-x1247)/x1248));

    if (t134 != 383U) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x1257 = 55U;
	volatile uint64_t x1259 = 6098546629910051038LLU;
	uint16_t x1260 = UINT16_MAX;
	volatile uint64_t t135 = 7234621210057LLU;

    t135 = (x1257%((x1258-x1259)/x1260));

    if (t135 != 55LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x1265 = -1LL;
	uint16_t x1267 = 10420U;
	volatile int32_t x1268 = -1;
	volatile int64_t t136 = -50142034624310589LL;

    t136 = (x1265%((x1266-x1267)/x1268));

    if (t136 != -1LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x1274 = INT16_MIN;
	int16_t x1275 = -1;
	int32_t x1276 = -1;
	volatile int64_t t137 = -1607410LL;

    t137 = (x1273%((x1274-x1275)/x1276));

    if (t137 != 7LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint16_t x1281 = 1218U;
	volatile uint8_t x1282 = UINT8_MAX;
	int8_t x1283 = -57;
	static int32_t t138 = 59;

    t138 = (x1281%((x1282-x1283)/x1284));

    if (t138 != 22) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x1285 = 306LLU;
	int32_t x1286 = -15;
	uint64_t x1287 = UINT64_MAX;
	uint32_t x1288 = 31U;
	static uint64_t t139 = 272679392638LLU;

    t139 = (x1285%((x1286-x1287)/x1288));

    if (t139 != 306LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	static int64_t x1293 = -1LL;
	uint8_t x1294 = UINT8_MAX;
	int32_t x1295 = -1;
	static int8_t x1296 = INT8_MIN;
	int64_t t140 = 205413029LL;

    t140 = (x1293%((x1294-x1295)/x1296));

    if (t140 != -1LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x1298 = 205U;
	int32_t x1299 = 767765;
	int16_t x1300 = INT16_MIN;
	static uint32_t t141 = 2098U;

    t141 = (x1297%((x1298-x1299)/x1300));

    if (t141 != 16U) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x1309 = 1178U;
	uint32_t x1310 = UINT32_MAX;
	int8_t x1311 = 0;
	volatile uint32_t t142 = 541293U;

    t142 = (x1309%((x1310-x1311)/x1312));

    if (t142 != 1178U) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x1313 = -1;
	static volatile int16_t x1314 = INT16_MIN;
	int8_t x1315 = 0;
	volatile int8_t x1316 = INT8_MAX;
	int32_t t143 = 2373;

    t143 = (x1313%((x1314-x1315)/x1316));

    if (t143 != -1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x1325 = -1;
	uint64_t x1326 = 7324LLU;
	uint32_t x1327 = UINT32_MAX;
	static int64_t x1328 = INT64_MIN;
	uint64_t t144 = 1248208716536865LLU;

    t144 = (x1325%((x1326-x1327)/x1328));

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint8_t x1341 = UINT8_MAX;
	int16_t x1342 = -1168;
	int32_t x1343 = -1;
	uint32_t x1344 = 189171702U;

    t145 = (x1341%((x1342-x1343)/x1344));

    if (t145 != 13U) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int64_t x1349 = -52510788021454LL;
	static volatile int16_t x1350 = INT16_MIN;
	static volatile int16_t x1351 = INT16_MAX;
	static int8_t x1352 = INT8_MIN;
	int64_t t146 = -3981LL;

    t146 = (x1349%((x1350-x1351)/x1352));

    if (t146 != -189LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x1353 = INT32_MIN;
	uint32_t x1354 = 1787983692U;
	uint64_t x1355 = UINT64_MAX;
	static int32_t x1356 = 5;
	uint64_t t147 = 7985LLU;

    t147 = (x1353%((x1354-x1355)/x1356));

    if (t147 != 236536834LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x1365 = -1;
	uint8_t x1367 = 41U;
	uint16_t x1368 = 4U;
	static volatile int32_t t148 = -27421347;

    t148 = (x1365%((x1366-x1367)/x1368));

    if (t148 != -1) { NG(); } else { ; }
	
}

void f149(void) {
    	static int32_t x1373 = -61;
	volatile uint32_t x1376 = 8U;
	volatile uint32_t t149 = 4879U;

    t149 = (x1373%((x1374-x1375)/x1376));

    if (t149 != 491U) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x1377 = INT16_MAX;
	int64_t x1378 = -1LL;
	volatile uint32_t x1380 = 60U;
	int64_t t150 = -16741592579227909LL;

    t150 = (x1377%((x1378-x1379)/x1380));

    if (t150 != 7LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x1385 = UINT8_MAX;
	uint8_t x1387 = 49U;
	int32_t x1388 = -1;
	static int32_t t151 = -2688237;

    t151 = (x1385%((x1386-x1387)/x1388));

    if (t151 != 3) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x1415 = UINT8_MAX;
	int16_t x1416 = INT16_MAX;
	uint32_t t152 = 1003168091U;

    t152 = (x1413%((x1414-x1415)/x1416));

    if (t152 != 0U) { NG(); } else { ; }
	
}

void f153(void) {
    	static int32_t x1445 = -1;
	volatile uint8_t x1446 = 13U;
	int32_t x1447 = INT32_MAX;
	static int8_t x1448 = INT8_MIN;
	static volatile int32_t t153 = -434531;

    t153 = (x1445%((x1446-x1447)/x1448));

    if (t153 != -1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t t154 = -1LL;

    t154 = (x1469%((x1470-x1471)/x1472));

    if (t154 != 65535LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x1481 = 37391LLU;
	int32_t x1482 = INT32_MAX;
	volatile int16_t x1483 = 6595;
	int32_t x1484 = 4;
	static volatile uint64_t t155 = 19LLU;

    t155 = (x1481%((x1482-x1483)/x1484));

    if (t155 != 37391LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint64_t x1485 = 4098916477585LLU;
	volatile int16_t x1486 = INT16_MAX;
	volatile uint64_t t156 = 3092054605LLU;

    t156 = (x1485%((x1486-x1487)/x1488));

    if (t156 != 241LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x1497 = UINT64_MAX;
	volatile int16_t x1500 = -445;

    t157 = (x1497%((x1498-x1499)/x1500));

    if (t157 != 15LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x1502 = INT64_MAX;
	volatile uint16_t x1503 = 27U;
	static volatile int64_t t158 = 12268631923586680LL;

    t158 = (x1501%((x1502-x1503)/x1504));

    if (t158 != 34LL) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int16_t x1507 = -1;
	int8_t x1508 = -1;
	int64_t t159 = 489LL;

    t159 = (x1505%((x1506-x1507)/x1508));

    if (t159 != 127LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x1517 = -1LL;
	volatile int32_t x1518 = INT32_MAX;
	int16_t x1519 = 998;
	int16_t x1520 = INT16_MIN;
	int64_t t160 = 108962LL;

    t160 = (x1517%((x1518-x1519)/x1520));

    if (t160 != -1LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x1529 = INT8_MIN;
	uint64_t x1530 = UINT64_MAX;
	static uint16_t x1531 = 3U;
	uint8_t x1532 = 5U;

    t161 = (x1529%((x1530-x1531)/x1532));

    if (t161 != 3689348814741910200LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x1537 = INT8_MAX;
	int64_t x1538 = -1LL;
	uint16_t x1540 = 25856U;
	uint64_t t162 = 3639194926828203LLU;

    t162 = (x1537%((x1538-x1539)/x1540));

    if (t162 != 127LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x1546 = 53LLU;
	int64_t x1547 = INT64_MIN;
	uint64_t x1548 = 17115276567LLU;
	uint64_t t163 = 25210610LLU;

    t163 = (x1545%((x1546-x1547)/x1548));

    if (t163 != 395075255LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x1573 = 197911U;
	uint64_t x1574 = 32713777LLU;
	static int8_t x1575 = INT8_MIN;
	int16_t x1576 = INT16_MAX;
	volatile uint64_t t164 = 17116837760162LLU;

    t164 = (x1573%((x1574-x1575)/x1576));

    if (t164 != 307LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x1577 = UINT8_MAX;
	int8_t x1580 = -1;
	static volatile int64_t t165 = -702821107803LL;

    t165 = (x1577%((x1578-x1579)/x1580));

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int16_t x1589 = 0;
	int16_t x1590 = INT16_MIN;
	int8_t x1591 = -1;
	uint16_t x1592 = 1260U;
	int32_t t166 = -18115345;

    t166 = (x1589%((x1590-x1591)/x1592));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x1593 = -1;
	int8_t x1594 = INT8_MIN;
	volatile int8_t x1595 = INT8_MAX;
	int8_t x1596 = INT8_MAX;
	int32_t t167 = -814718;

    t167 = (x1593%((x1594-x1595)/x1596));

    if (t167 != -1) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x1597 = INT16_MAX;
	volatile int16_t x1598 = INT16_MIN;
	volatile int32_t x1599 = -831;
	int32_t t168 = -149552;

    t168 = (x1597%((x1598-x1599)/x1600));

    if (t168 != 137) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x1601 = -202041902532728LL;
	static volatile int64_t x1603 = -187084224004277LL;
	uint32_t x1604 = 497100955U;
	volatile int64_t t169 = -520801910326LL;

    t169 = (x1601%((x1602-x1603)/x1604));

    if (t169 != -4028LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int64_t x1606 = INT64_MAX;
	uint16_t x1607 = UINT16_MAX;
	static int16_t x1608 = INT16_MIN;
	int64_t t170 = 2150384857807720LL;

    t170 = (x1605%((x1606-x1607)/x1608));

    if (t170 != -1LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x1609 = 2644LLU;
	int64_t x1610 = INT64_MAX;
	uint32_t x1611 = 1540663U;
	volatile int32_t x1612 = INT32_MAX;

    t171 = (x1609%((x1610-x1611)/x1612));

    if (t171 != 2644LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x1613 = -1;
	int32_t x1614 = -3010;
	uint16_t x1615 = 5U;
	uint16_t x1616 = 2667U;

    t172 = (x1613%((x1614-x1615)/x1616));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x1629 = 2;
	volatile uint64_t x1630 = 147104063103263LLU;
	uint64_t x1632 = 3546694076854LLU;
	volatile uint64_t t173 = 837749LLU;

    t173 = (x1629%((x1630-x1631)/x1632));

    if (t173 != 2LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint16_t x1633 = 1668U;
	uint32_t x1635 = 984600889U;
	static uint32_t x1636 = 28U;
	uint32_t t174 = 351156802U;

    t174 = (x1633%((x1634-x1635)/x1636));

    if (t174 != 1668U) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x1637 = UINT32_MAX;
	int16_t x1638 = INT16_MAX;
	int64_t x1639 = -1LL;
	uint16_t x1640 = 3567U;
	volatile int64_t t175 = -5412LL;

    t175 = (x1637%((x1638-x1639)/x1640));

    if (t175 != 3LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x1641 = INT8_MIN;
	volatile int8_t x1642 = -6;
	static int64_t x1643 = INT64_MIN;
	volatile int16_t x1644 = -1;
	volatile int64_t t176 = 1344389216643936LL;

    t176 = (x1641%((x1642-x1643)/x1644));

    if (t176 != -128LL) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint8_t x1657 = 7U;
	int8_t x1658 = -17;
	volatile uint8_t x1659 = 121U;
	int8_t x1660 = -1;
	int32_t t177 = -2894687;

    t177 = (x1657%((x1658-x1659)/x1660));

    if (t177 != 7) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x1670 = -1LL;
	volatile int8_t x1671 = INT8_MAX;
	int16_t x1672 = -1;

    t178 = (x1669%((x1670-x1671)/x1672));

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x1673 = INT8_MAX;
	static volatile int16_t x1674 = INT16_MIN;
	volatile int32_t x1675 = INT32_MIN;
	int8_t x1676 = INT8_MIN;

    t179 = (x1673%((x1674-x1675)/x1676));

    if (t179 != 127) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint16_t x1682 = UINT16_MAX;
	volatile int32_t t180 = -10;

    t180 = (x1681%((x1682-x1683)/x1684));

    if (t180 != -1) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x1690 = -314687164;
	static int64_t x1691 = -24842LL;
	uint16_t x1692 = 9U;
	int64_t t181 = 102747LL;

    t181 = (x1689%((x1690-x1691)/x1692));

    if (t181 != 29544735LL) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint8_t x1698 = UINT8_MAX;
	int32_t x1699 = 13;
	uint8_t x1700 = 5U;
	volatile int32_t t182 = -163308939;

    t182 = (x1697%((x1698-x1699)/x1700));

    if (t182 != -32) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x1701 = INT16_MAX;
	int32_t x1702 = -1;
	int64_t x1703 = INT64_MAX;
	int16_t x1704 = -1044;
	int64_t t183 = -421106402279LL;

    t183 = (x1701%((x1702-x1703)/x1704));

    if (t183 != 32767LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x1705 = UINT64_MAX;
	int16_t x1706 = INT16_MAX;
	uint8_t x1707 = 14U;
	static uint8_t x1708 = 1U;
	uint64_t t184 = 267160792630LLU;

    t184 = (x1705%((x1706-x1707)/x1708));

    if (t184 != 23927LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x1709 = 0LL;
	uint32_t x1710 = 239403U;
	uint16_t x1712 = UINT16_MAX;
	static volatile int64_t t185 = -221LL;

    t185 = (x1709%((x1710-x1711)/x1712));

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x1713 = INT32_MIN;
	int16_t x1715 = INT16_MAX;
	volatile int8_t x1716 = -1;
	static volatile int32_t t186 = 14252;

    t186 = (x1713%((x1714-x1715)/x1716));

    if (t186 != -1352) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint32_t x1717 = 464U;
	uint32_t x1719 = 231260U;
	uint64_t x1720 = 29LLU;
	static uint64_t t187 = 13055133163475LLU;

    t187 = (x1717%((x1718-x1719)/x1720));

    if (t187 != 464LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint64_t x1729 = 8065LLU;
	uint16_t x1730 = UINT16_MAX;
	int32_t x1731 = -1;
	uint64_t t188 = 1871660837781688LLU;

    t188 = (x1729%((x1730-x1731)/x1732));

    if (t188 != 15LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x1733 = 41U;
	int16_t x1734 = 0;
	volatile int64_t t189 = -206188LL;

    t189 = (x1733%((x1734-x1735)/x1736));

    if (t189 != 1LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static int64_t x1745 = INT64_MIN;
	static uint8_t x1746 = 3U;
	uint64_t x1747 = 23783231634604845LLU;
	static uint32_t x1748 = 10U;
	uint64_t t190 = 56LLU;

    t190 = (x1745%((x1746-x1747)/x1748));

    if (t190 != 11891615817302423LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int64_t x1761 = INT64_MIN;
	static uint64_t x1763 = 16244213LLU;
	volatile uint64_t t191 = 4441LLU;

    t191 = (x1761%((x1762-x1763)/x1764));

    if (t191 != 16666135LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x1773 = 36672U;
	static uint16_t x1774 = UINT16_MAX;
	uint8_t x1775 = UINT8_MAX;
	int32_t x1776 = 123;

    t192 = (x1773%((x1774-x1775)/x1776));

    if (t192 != 102U) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint8_t x1777 = UINT8_MAX;
	int16_t x1778 = -2287;
	volatile int32_t x1779 = -1;
	int64_t x1780 = 1LL;
	int64_t t193 = -28656LL;

    t193 = (x1777%((x1778-x1779)/x1780));

    if (t193 != 255LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x1789 = 13;
	volatile int8_t x1790 = INT8_MAX;
	uint32_t x1791 = 20U;
	static volatile uint8_t x1792 = 1U;
	volatile uint32_t t194 = 131379U;

    t194 = (x1789%((x1790-x1791)/x1792));

    if (t194 != 13U) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x1794 = INT8_MIN;
	uint64_t x1795 = UINT64_MAX;
	static volatile uint16_t x1796 = UINT16_MAX;
	uint64_t t195 = 32671914413828LLU;

    t195 = (x1793%((x1794-x1795)/x1796));

    if (t195 != 281477124325376LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static int64_t x1809 = -1LL;
	int32_t x1810 = -1;
	int64_t x1811 = 2121889246805286885LL;
	volatile int16_t x1812 = -1;
	int64_t t196 = 0LL;

    t196 = (x1809%((x1810-x1811)/x1812));

    if (t196 != -1LL) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint16_t x1817 = 2U;
	int32_t x1818 = -29;
	int64_t x1819 = INT64_MIN;
	uint8_t x1820 = 21U;
	static int64_t t197 = 12126407LL;

    t197 = (x1817%((x1818-x1819)/x1820));

    if (t197 != 2LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x1829 = INT64_MAX;
	uint64_t x1830 = UINT64_MAX;
	uint8_t x1831 = 41U;
	uint64_t t198 = 314431781809187LLU;

    t198 = (x1829%((x1830-x1831)/x1832));

    if (t198 != 0LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x1841 = 6U;
	static int64_t x1842 = INT64_MAX;
	uint8_t x1844 = UINT8_MAX;

    t199 = (x1841%((x1842-x1843)/x1844));

    if (t199 != 6LL) { NG(); } else { ; }
	
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

