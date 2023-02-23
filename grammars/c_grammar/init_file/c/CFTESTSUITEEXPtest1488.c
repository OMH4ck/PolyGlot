
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

int64_t x1 = INT64_MIN;
int16_t x4 = INT16_MIN;
volatile int64_t t0 = INT64_MIN;
uint32_t x14 = UINT32_MAX;
int16_t x22 = INT16_MAX;
volatile int32_t t4 = INT32_MIN;
int64_t x32 = -1LL;
int32_t x41 = INT32_MIN;
volatile int32_t t7 = INT32_MIN;
int16_t x65 = 286;
uint32_t x66 = UINT32_MAX;
volatile int16_t x76 = INT16_MIN;
int64_t x91 = -1LL;
static volatile uint16_t x97 = 233U;
volatile int16_t x115 = INT16_MIN;
int32_t x116 = -15;
int64_t x117 = -1LL;
uint64_t x127 = UINT64_MAX;
int16_t x136 = INT16_MIN;
int32_t x153 = -123;
static uint64_t x154 = UINT64_MAX;
static uint8_t x155 = UINT8_MAX;
int32_t x159 = -476;
uint32_t x165 = 1982543U;
static uint32_t t22 = 0U;
volatile int8_t x169 = 1;
int8_t x170 = 0;
volatile uint8_t x201 = 12U;
static uint16_t x222 = 1U;
int32_t x229 = INT32_MAX;
static int32_t x230 = -3727;
int16_t x231 = INT16_MIN;
int32_t t30 = 147422522;
int16_t x254 = -1;
int64_t x256 = -1LL;
int64_t x270 = 1202886442278610LL;
uint32_t x287 = 3U;
int32_t x288 = INT32_MIN;
int8_t x291 = -1;
volatile int64_t x303 = INT64_MAX;
static int32_t t42 = INT32_MIN;
volatile int16_t x348 = INT16_MIN;
int64_t x352 = -249843373520LL;
volatile int32_t t46 = 16888;
uint64_t x382 = 6694227867365953143LLU;
static int8_t x397 = INT8_MAX;
int8_t x398 = INT8_MAX;
int64_t x399 = INT64_MIN;
int8_t x400 = INT8_MIN;
uint64_t x419 = 106313604446LLU;
int16_t x420 = -1;
int64_t x431 = INT64_MAX;
static int8_t x441 = INT8_MIN;
static uint8_t x461 = 3U;
uint16_t x477 = UINT16_MAX;
uint64_t x491 = UINT64_MAX;
volatile int16_t x492 = INT16_MIN;
static int32_t t61 = -3800494;
int16_t x524 = INT16_MIN;
static int8_t x531 = -1;
static volatile int32_t t64 = 0;
int16_t x577 = INT16_MIN;
int16_t x589 = INT16_MAX;
int8_t x592 = INT8_MIN;
volatile int32_t t70 = 107128;
int16_t x616 = -1;
uint64_t x626 = 34099946169665159LLU;
int64_t x628 = -1LL;
int16_t x633 = INT16_MIN;
uint16_t x635 = 204U;
int8_t x636 = -1;
int32_t t77 = -68812;
uint32_t x673 = UINT32_MAX;
int64_t x674 = INT64_MIN;
volatile int8_t x676 = INT8_MIN;
static uint32_t t78 = UINT32_MAX;
int64_t x679 = -2LL;
uint32_t x707 = UINT32_MAX;
static int64_t x735 = INT64_MIN;
int64_t x737 = INT64_MIN;
int32_t x739 = INT32_MIN;
static int16_t x741 = INT16_MIN;
volatile int16_t x742 = -5405;
static int16_t x744 = -1937;
static volatile int32_t t85 = -234429;
int8_t x747 = -60;
int32_t t86 = 15300606;
int64_t x766 = INT64_MIN;
static int64_t x774 = -1LL;
uint64_t x775 = UINT64_MAX;
static uint32_t x785 = 1308U;
int8_t x813 = -1;
int32_t t91 = -1286;
volatile int32_t t92 = -2127;
uint8_t x841 = 11U;
int32_t x842 = INT32_MIN;
static volatile int32_t t93 = 2;
volatile int32_t t96 = 87506;
volatile int8_t x937 = INT8_MIN;
volatile int16_t x948 = -1;
int32_t t101 = -220144397;
int8_t x949 = INT8_MAX;
volatile int32_t t102 = 28;
int64_t x962 = -1890900LL;
volatile int32_t t104 = -1721;
volatile int32_t x991 = INT32_MAX;
volatile int8_t x993 = INT8_MAX;
int8_t x1025 = INT8_MAX;
static uint16_t x1027 = UINT16_MAX;
volatile uint32_t x1037 = UINT32_MAX;
uint16_t x1069 = UINT16_MAX;
int16_t x1072 = -291;
static int32_t x1080 = -95039;
uint64_t x1121 = 3671LLU;
int64_t x1154 = -1LL;
int32_t x1167 = INT32_MAX;
uint64_t x1169 = 3LLU;
volatile uint32_t x1181 = UINT32_MAX;
static volatile int16_t x1185 = 0;
int16_t x1188 = INT16_MIN;
int32_t x1200 = INT32_MIN;
static int32_t x1212 = INT32_MIN;
volatile uint8_t x1215 = 1U;
uint8_t x1221 = UINT8_MAX;
int8_t x1225 = INT8_MIN;
int32_t t129 = INT32_MAX;
int32_t x1250 = INT32_MIN;
int8_t x1252 = -12;
int32_t x1256 = INT32_MIN;
static uint64_t x1307 = 856606567709701LLU;
volatile uint16_t x1329 = 7U;
uint32_t x1331 = UINT32_MAX;
int64_t x1332 = -92099224686LL;
int32_t t136 = -9998;
int32_t x1345 = 6522940;
static volatile int32_t t143 = INT32_MIN;
static int64_t x1376 = -1LL;
int8_t x1394 = INT8_MIN;
static int8_t x1396 = -1;
int32_t t145 = INT32_MIN;
volatile int8_t x1399 = INT8_MIN;
int64_t x1400 = INT64_MIN;
static int8_t x1402 = INT8_MIN;
int64_t x1404 = INT64_MIN;
int32_t x1429 = -8123056;
static int8_t x1430 = INT8_MAX;
volatile int32_t x1455 = INT32_MAX;
int16_t x1463 = -2937;
static int8_t x1471 = -1;
volatile int16_t x1472 = -6300;
int32_t x1480 = -19724423;
volatile uint32_t x1498 = 105U;
int32_t x1510 = INT32_MAX;
uint64_t x1511 = UINT64_MAX;
int16_t x1529 = -36;
uint32_t x1542 = 60U;
int8_t x1558 = INT8_MIN;
volatile int32_t x1561 = INT32_MIN;
static int16_t x1564 = INT16_MIN;
int32_t t165 = INT32_MIN;
static int64_t x1565 = INT64_MAX;
uint64_t x1570 = 1244262173970824546LLU;
int32_t t167 = 7726;
uint64_t x1587 = 51LLU;
static int16_t x1603 = -1;
int8_t x1607 = -1;
int32_t t171 = -214;
uint64_t x1633 = 750710041828LLU;
int8_t x1672 = INT8_MIN;
int64_t x1715 = INT64_MAX;
volatile int32_t x1726 = INT32_MAX;
uint8_t x1731 = 5U;
static int8_t x1732 = INT8_MIN;
int32_t t184 = INT32_MAX;
uint32_t x1758 = 156U;
uint16_t x1759 = UINT16_MAX;
static int16_t x1767 = INT16_MAX;
volatile int32_t t186 = 112264;
int32_t x1777 = -1;
int64_t x1778 = INT64_MAX;
int64_t x1780 = -1LL;
volatile int32_t t187 = 622;
static int32_t x1784 = -16064;
volatile int64_t x1791 = -32416579094659296LL;
volatile uint32_t t190 = 898666582U;
uint16_t x1810 = 1900U;
int32_t t194 = -1;
int8_t x1853 = 20;


void f0(void) {
    	volatile int32_t x2 = -50957194;
	int32_t x3 = -1;

    t0 = (x1/((x2==x3)>x4));

    if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x13 = INT64_MIN;
	int64_t x15 = INT64_MIN;
	int32_t x16 = INT32_MIN;
	volatile int64_t t1 = INT64_MIN;

    t1 = (x13/((x14==x15)>x16));

    if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint64_t x17 = UINT64_MAX;
	static int64_t x18 = -1LL;
	int16_t x19 = INT16_MIN;
	volatile int16_t x20 = -1;
	static uint64_t t2 = UINT64_MAX;

    t2 = (x17/((x18==x19)>x20));

    if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x21 = 888LLU;
	uint64_t x23 = 763784843478523LLU;
	volatile int8_t x24 = -1;
	uint64_t t3 = 32212653LLU;

    t3 = (x21/((x22==x23)>x24));

    if (t3 != 888LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x25 = INT32_MIN;
	static int64_t x26 = -468612760003LL;
	int16_t x27 = 1360;
	int64_t x28 = -565897054720LL;

    t4 = (x25/((x26==x27)>x28));

    if (t4 != INT32_MIN) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x29 = 1;
	volatile uint32_t x30 = 386357U;
	uint8_t x31 = UINT8_MAX;
	volatile int32_t t5 = -1981;

    t5 = (x29/((x30==x31)>x32));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x33 = INT32_MIN;
	static int64_t x34 = -803672LL;
	int16_t x35 = INT16_MIN;
	static int16_t x36 = -1;
	volatile int32_t t6 = INT32_MIN;

    t6 = (x33/((x34==x35)>x36));

    if (t6 != INT32_MIN) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint16_t x42 = 27U;
	int64_t x43 = INT64_MIN;
	static int16_t x44 = -1;

    t7 = (x41/((x42==x43)>x44));

    if (t7 != INT32_MIN) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x45 = INT64_MAX;
	int8_t x46 = 5;
	volatile int32_t x47 = -1;
	static volatile int64_t x48 = -3LL;
	volatile int64_t t8 = INT64_MAX;

    t8 = (x45/((x46==x47)>x48));

    if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int16_t x67 = -98;
	volatile int16_t x68 = -1088;
	int32_t t9 = 13998;

    t9 = (x65/((x66==x67)>x68));

    if (t9 != 286) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x73 = -24555439306783LL;
	static int32_t x74 = -30683806;
	static volatile uint8_t x75 = 28U;
	int64_t t10 = 222271153794LL;

    t10 = (x73/((x74==x75)>x76));

    if (t10 != -24555439306783LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x85 = 5017LL;
	int32_t x86 = INT32_MAX;
	uint32_t x87 = 1026391U;
	volatile int64_t x88 = INT64_MIN;
	int64_t t11 = 9978863LL;

    t11 = (x85/((x86==x87)>x88));

    if (t11 != 5017LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x89 = INT16_MAX;
	uint32_t x90 = 31546874U;
	int8_t x92 = INT8_MIN;
	int32_t t12 = -810;

    t12 = (x89/((x90==x91)>x92));

    if (t12 != 32767) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x98 = INT64_MIN;
	int16_t x99 = INT16_MAX;
	static volatile int64_t x100 = -109433600LL;
	int32_t t13 = -1;

    t13 = (x97/((x98==x99)>x100));

    if (t13 != 233) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x105 = -1;
	int8_t x106 = -1;
	static int16_t x107 = INT16_MIN;
	int8_t x108 = INT8_MIN;
	volatile int32_t t14 = -11044960;

    t14 = (x105/((x106==x107)>x108));

    if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x113 = -1LL;
	static volatile int32_t x114 = INT32_MAX;
	int64_t t15 = 15813173301061LL;

    t15 = (x113/((x114==x115)>x116));

    if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x118 = INT8_MAX;
	static uint64_t x119 = UINT64_MAX;
	int16_t x120 = INT16_MIN;
	int64_t t16 = -249207297700188674LL;

    t16 = (x117/((x118==x119)>x120));

    if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x125 = 45513LL;
	int64_t x126 = INT64_MAX;
	int64_t x128 = INT64_MIN;
	static int64_t t17 = 9624997270709399LL;

    t17 = (x125/((x126==x127)>x128));

    if (t17 != 45513LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x133 = -15;
	static volatile int32_t x134 = INT32_MAX;
	int8_t x135 = INT8_MIN;
	int32_t t18 = 6719;

    t18 = (x133/((x134==x135)>x136));

    if (t18 != -15) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x137 = 29229;
	static volatile int64_t x138 = INT64_MIN;
	uint64_t x139 = 600295837155956LLU;
	static int32_t x140 = -1;
	int32_t t19 = -1;

    t19 = (x137/((x138==x139)>x140));

    if (t19 != 29229) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int64_t x156 = INT64_MIN;
	int32_t t20 = 1;

    t20 = (x153/((x154==x155)>x156));

    if (t20 != -123) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x157 = UINT32_MAX;
	int64_t x158 = INT64_MIN;
	int32_t x160 = -111487;
	volatile uint32_t t21 = UINT32_MAX;

    t21 = (x157/((x158==x159)>x160));

    if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x166 = INT16_MAX;
	int64_t x167 = INT64_MIN;
	static int8_t x168 = INT8_MIN;

    t22 = (x165/((x166==x167)>x168));

    if (t22 != 1982543U) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x171 = INT64_MIN;
	static int32_t x172 = INT32_MIN;
	volatile int32_t t23 = -2768771;

    t23 = (x169/((x170==x171)>x172));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x181 = -1;
	int8_t x182 = INT8_MAX;
	volatile int64_t x183 = INT64_MIN;
	int32_t x184 = -480;
	volatile int32_t t24 = 47;

    t24 = (x181/((x182==x183)>x184));

    if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
    	static int64_t x202 = 4844LL;
	int16_t x203 = INT16_MAX;
	int64_t x204 = INT64_MIN;
	int32_t t25 = 6096;

    t25 = (x201/((x202==x203)>x204));

    if (t25 != 12) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x213 = INT8_MAX;
	uint32_t x214 = UINT32_MAX;
	volatile int64_t x215 = 709LL;
	static int8_t x216 = INT8_MIN;
	int32_t t26 = 207;

    t26 = (x213/((x214==x215)>x216));

    if (t26 != 127) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x221 = UINT8_MAX;
	volatile uint16_t x223 = 1U;
	int32_t x224 = -1;
	volatile int32_t t27 = 215728;

    t27 = (x221/((x222==x223)>x224));

    if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x232 = -1;
	int32_t t28 = INT32_MAX;

    t28 = (x229/((x230==x231)>x232));

    if (t28 != INT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x233 = -1;
	static int16_t x234 = INT16_MAX;
	int64_t x235 = INT64_MAX;
	int64_t x236 = INT64_MIN;
	volatile int32_t t29 = 7982;

    t29 = (x233/((x234==x235)>x236));

    if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int32_t x241 = -647572;
	uint32_t x242 = 56101229U;
	volatile int16_t x243 = 1;
	int64_t x244 = -2166LL;

    t30 = (x241/((x242==x243)>x244));

    if (t30 != -647572) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint16_t x245 = UINT16_MAX;
	volatile int16_t x246 = -1;
	int8_t x247 = INT8_MIN;
	int32_t x248 = INT32_MIN;
	static volatile int32_t t31 = 1216198;

    t31 = (x245/((x246==x247)>x248));

    if (t31 != 65535) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x249 = 1LLU;
	uint8_t x250 = 19U;
	static int64_t x251 = INT64_MAX;
	static volatile int32_t x252 = -1;
	static volatile uint64_t t32 = 5LLU;

    t32 = (x249/((x250==x251)>x252));

    if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x253 = -1;
	static uint16_t x255 = UINT16_MAX;
	int32_t t33 = -767629;

    t33 = (x253/((x254==x255)>x256));

    if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x257 = INT32_MAX;
	static uint8_t x258 = UINT8_MAX;
	int16_t x259 = INT16_MAX;
	static int16_t x260 = INT16_MIN;
	volatile int32_t t34 = INT32_MAX;

    t34 = (x257/((x258==x259)>x260));

    if (t34 != INT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x261 = INT8_MIN;
	int16_t x262 = INT16_MAX;
	int32_t x263 = INT32_MIN;
	int64_t x264 = -1576LL;
	int32_t t35 = -85460;

    t35 = (x261/((x262==x263)>x264));

    if (t35 != -128) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x269 = INT8_MIN;
	static int64_t x271 = -1LL;
	volatile int64_t x272 = INT64_MIN;
	int32_t t36 = -200877762;

    t36 = (x269/((x270==x271)>x272));

    if (t36 != -128) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x273 = INT8_MIN;
	static int32_t x274 = INT32_MIN;
	uint32_t x275 = UINT32_MAX;
	volatile int32_t x276 = INT32_MIN;
	static int32_t t37 = -116;

    t37 = (x273/((x274==x275)>x276));

    if (t37 != -128) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint64_t x285 = 27832933LLU;
	volatile int8_t x286 = INT8_MIN;
	static volatile uint64_t t38 = 9077537017737256556LLU;

    t38 = (x285/((x286==x287)>x288));

    if (t38 != 27832933LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x289 = -1LL;
	static uint8_t x290 = 22U;
	volatile int64_t x292 = -222LL;
	int64_t t39 = 76LL;

    t39 = (x289/((x290==x291)>x292));

    if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint8_t x301 = 4U;
	volatile uint8_t x302 = 2U;
	int32_t x304 = INT32_MIN;
	volatile int32_t t40 = 1218;

    t40 = (x301/((x302==x303)>x304));

    if (t40 != 4) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x313 = UINT32_MAX;
	int8_t x314 = -5;
	uint8_t x315 = 63U;
	int16_t x316 = -1;
	volatile uint32_t t41 = UINT32_MAX;

    t41 = (x313/((x314==x315)>x316));

    if (t41 != UINT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x321 = INT32_MIN;
	uint16_t x322 = 20930U;
	static int16_t x323 = -1;
	static int64_t x324 = -384435579926LL;

    t42 = (x321/((x322==x323)>x324));

    if (t42 != INT32_MIN) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x325 = INT32_MAX;
	uint64_t x326 = 140235001204238LLU;
	int16_t x327 = -1;
	int16_t x328 = -1;
	int32_t t43 = INT32_MAX;

    t43 = (x325/((x326==x327)>x328));

    if (t43 != INT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint16_t x341 = UINT16_MAX;
	static volatile int64_t x342 = 107843366843666109LL;
	int8_t x343 = INT8_MAX;
	int32_t x344 = INT32_MIN;
	volatile int32_t t44 = 535;

    t44 = (x341/((x342==x343)>x344));

    if (t44 != 65535) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x345 = -2;
	int16_t x346 = -1;
	int32_t x347 = INT32_MIN;
	int32_t t45 = 350166496;

    t45 = (x345/((x346==x347)>x348));

    if (t45 != -2) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x349 = -1;
	int8_t x350 = INT8_MIN;
	static volatile int64_t x351 = -12537LL;

    t46 = (x349/((x350==x351)>x352));

    if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x357 = 61U;
	uint64_t x358 = UINT64_MAX;
	uint8_t x359 = 4U;
	int32_t x360 = -1;
	int32_t t47 = 7602350;

    t47 = (x357/((x358==x359)>x360));

    if (t47 != 61) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x381 = -3530772LL;
	uint16_t x383 = UINT16_MAX;
	int8_t x384 = INT8_MIN;
	int64_t t48 = 765158033LL;

    t48 = (x381/((x382==x383)>x384));

    if (t48 != -3530772LL) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int64_t x389 = INT64_MIN;
	int8_t x390 = -4;
	int64_t x391 = INT64_MAX;
	int8_t x392 = INT8_MIN;
	volatile int64_t t49 = INT64_MIN;

    t49 = (x389/((x390==x391)>x392));

    if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t t50 = -1;

    t50 = (x397/((x398==x399)>x400));

    if (t50 != 127) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int64_t x417 = -1LL;
	static uint8_t x418 = 25U;
	volatile int64_t t51 = 682813LL;

    t51 = (x417/((x418==x419)>x420));

    if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x425 = INT16_MAX;
	uint8_t x426 = 19U;
	uint32_t x427 = 152U;
	volatile int8_t x428 = INT8_MIN;
	static int32_t t52 = 874193593;

    t52 = (x425/((x426==x427)>x428));

    if (t52 != 32767) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint64_t x429 = 3134073006558448LLU;
	uint32_t x430 = 189U;
	int32_t x432 = INT32_MIN;
	volatile uint64_t t53 = 511508LLU;

    t53 = (x429/((x430==x431)>x432));

    if (t53 != 3134073006558448LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x442 = -1;
	int64_t x443 = INT64_MIN;
	int32_t x444 = -1;
	static volatile int32_t t54 = -2014;

    t54 = (x441/((x442==x443)>x444));

    if (t54 != -128) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x445 = -1LL;
	int8_t x446 = INT8_MAX;
	uint64_t x447 = 121392LLU;
	static int64_t x448 = -217LL;
	volatile int64_t t55 = -986551249LL;

    t55 = (x445/((x446==x447)>x448));

    if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x453 = -1LL;
	uint64_t x454 = 9759360760145LLU;
	uint16_t x455 = 14U;
	volatile int16_t x456 = -2243;
	volatile int64_t t56 = 13917LL;

    t56 = (x453/((x454==x455)>x456));

    if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x462 = 1;
	int16_t x463 = 2553;
	volatile int16_t x464 = INT16_MIN;
	int32_t t57 = -344031;

    t57 = (x461/((x462==x463)>x464));

    if (t57 != 3) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint64_t x478 = 2113308331LLU;
	int16_t x479 = -1814;
	volatile int64_t x480 = INT64_MIN;
	volatile int32_t t58 = -2167;

    t58 = (x477/((x478==x479)>x480));

    if (t58 != 65535) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x489 = 236116255639LL;
	static uint8_t x490 = 1U;
	static int64_t t59 = 75070658LL;

    t59 = (x489/((x490==x491)>x492));

    if (t59 != 236116255639LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint32_t x505 = UINT32_MAX;
	uint64_t x506 = 24218180506590259LLU;
	uint64_t x507 = UINT64_MAX;
	static int32_t x508 = INT32_MIN;
	uint32_t t60 = UINT32_MAX;

    t60 = (x505/((x506==x507)>x508));

    if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x509 = 515986273;
	static volatile int16_t x510 = 28;
	static int16_t x511 = INT16_MIN;
	int32_t x512 = -1;

    t61 = (x509/((x510==x511)>x512));

    if (t61 != 515986273) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x521 = INT32_MAX;
	uint16_t x522 = 692U;
	uint64_t x523 = 2145408968894LLU;
	int32_t t62 = INT32_MAX;

    t62 = (x521/((x522==x523)>x524));

    if (t62 != INT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x525 = 10U;
	int8_t x526 = INT8_MIN;
	int8_t x527 = INT8_MAX;
	volatile int16_t x528 = -1;
	volatile int32_t t63 = 779213;

    t63 = (x525/((x526==x527)>x528));

    if (t63 != 10) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x529 = UINT16_MAX;
	int16_t x530 = INT16_MIN;
	static int8_t x532 = INT8_MIN;

    t64 = (x529/((x530==x531)>x532));

    if (t64 != 65535) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x545 = INT64_MIN;
	int16_t x546 = -1;
	int64_t x547 = INT64_MIN;
	volatile int8_t x548 = -1;
	static int64_t t65 = INT64_MIN;

    t65 = (x545/((x546==x547)>x548));

    if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x553 = INT16_MAX;
	int64_t x554 = -824143LL;
	int16_t x555 = -1;
	volatile int16_t x556 = -1;
	volatile int32_t t66 = -806260823;

    t66 = (x553/((x554==x555)>x556));

    if (t66 != 32767) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x561 = INT64_MIN;
	int64_t x562 = INT64_MAX;
	volatile uint64_t x563 = 20159376172LLU;
	int8_t x564 = INT8_MIN;
	volatile int64_t t67 = INT64_MIN;

    t67 = (x561/((x562==x563)>x564));

    if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x573 = INT16_MAX;
	volatile uint64_t x574 = 27LLU;
	int8_t x575 = INT8_MIN;
	int64_t x576 = -1706LL;
	static volatile int32_t t68 = 17420;

    t68 = (x573/((x574==x575)>x576));

    if (t68 != 32767) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x578 = -1;
	static int64_t x579 = -1LL;
	int64_t x580 = INT64_MIN;
	int32_t t69 = -15;

    t69 = (x577/((x578==x579)>x580));

    if (t69 != -32768) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x590 = INT16_MIN;
	static uint8_t x591 = 60U;

    t70 = (x589/((x590==x591)>x592));

    if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x597 = 5009LLU;
	volatile uint64_t x598 = 87491794468LLU;
	static int64_t x599 = -805686720661215882LL;
	int64_t x600 = INT64_MIN;
	volatile uint64_t t71 = 20LLU;

    t71 = (x597/((x598==x599)>x600));

    if (t71 != 5009LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	static int8_t x613 = INT8_MAX;
	uint32_t x614 = UINT32_MAX;
	int8_t x615 = -6;
	int32_t t72 = -142464;

    t72 = (x613/((x614==x615)>x616));

    if (t72 != 127) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x621 = 262LLU;
	int64_t x622 = -5628636LL;
	int16_t x623 = -12;
	volatile int32_t x624 = INT32_MIN;
	uint64_t t73 = 676498457788302549LLU;

    t73 = (x621/((x622==x623)>x624));

    if (t73 != 262LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint8_t x625 = 56U;
	volatile uint64_t x627 = 7477642935554015LLU;
	int32_t t74 = -12;

    t74 = (x625/((x626==x627)>x628));

    if (t74 != 56) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x634 = 91U;
	volatile int32_t t75 = -24888114;

    t75 = (x633/((x634==x635)>x636));

    if (t75 != -32768) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x657 = -247095LL;
	volatile int16_t x658 = 1;
	static int16_t x659 = INT16_MIN;
	int32_t x660 = INT32_MIN;
	volatile int64_t t76 = 5497759251404LL;

    t76 = (x657/((x658==x659)>x660));

    if (t76 != -247095LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x669 = 3U;
	static int64_t x670 = -1LL;
	uint64_t x671 = 6186210791140691959LLU;
	int64_t x672 = -1LL;

    t77 = (x669/((x670==x671)>x672));

    if (t77 != 3) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint8_t x675 = 3U;

    t78 = (x673/((x674==x675)>x676));

    if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x677 = INT8_MIN;
	int64_t x678 = -1LL;
	int64_t x680 = -279LL;
	static volatile int32_t t79 = 501890363;

    t79 = (x677/((x678==x679)>x680));

    if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x689 = 21930LLU;
	static int64_t x690 = -39LL;
	int16_t x691 = INT16_MAX;
	int64_t x692 = -1LL;
	uint64_t t80 = 3584898149483LLU;

    t80 = (x689/((x690==x691)>x692));

    if (t80 != 21930LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x705 = -1;
	uint8_t x706 = 1U;
	int64_t x708 = -1LL;
	volatile int32_t t81 = 0;

    t81 = (x705/((x706==x707)>x708));

    if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x709 = 16;
	volatile int8_t x710 = -1;
	static volatile int16_t x711 = INT16_MIN;
	int8_t x712 = -1;
	int32_t t82 = 430193606;

    t82 = (x709/((x710==x711)>x712));

    if (t82 != 16) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint16_t x733 = UINT16_MAX;
	int8_t x734 = INT8_MIN;
	int16_t x736 = -37;
	int32_t t83 = 1;

    t83 = (x733/((x734==x735)>x736));

    if (t83 != 65535) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x738 = 20760871222214199LLU;
	int32_t x740 = -1;
	int64_t t84 = INT64_MIN;

    t84 = (x737/((x738==x739)>x740));

    if (t84 != INT64_MIN) { NG(); } else { ; }
	
}

void f85(void) {
    	static int32_t x743 = INT32_MIN;

    t85 = (x741/((x742==x743)>x744));

    if (t85 != -32768) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x745 = INT8_MAX;
	int64_t x746 = -1LL;
	static volatile int8_t x748 = -1;

    t86 = (x745/((x746==x747)>x748));

    if (t86 != 127) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x761 = 0U;
	int8_t x762 = INT8_MIN;
	volatile int8_t x763 = INT8_MIN;
	volatile int8_t x764 = -1;
	static volatile int32_t t87 = 0;

    t87 = (x761/((x762==x763)>x764));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x765 = INT32_MIN;
	int16_t x767 = INT16_MIN;
	int16_t x768 = -1;
	volatile int32_t t88 = INT32_MIN;

    t88 = (x765/((x766==x767)>x768));

    if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x773 = -1;
	int32_t x776 = -26;
	volatile int32_t t89 = 459593;

    t89 = (x773/((x774==x775)>x776));

    if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x786 = -1LL;
	int16_t x787 = -1;
	int8_t x788 = -1;
	volatile uint32_t t90 = 128706802U;

    t90 = (x785/((x786==x787)>x788));

    if (t90 != 1308U) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int32_t x814 = INT32_MIN;
	static int16_t x815 = 832;
	int16_t x816 = -1;

    t91 = (x813/((x814==x815)>x816));

    if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x821 = 99U;
	uint8_t x822 = 92U;
	uint16_t x823 = UINT16_MAX;
	static volatile int64_t x824 = INT64_MIN;

    t92 = (x821/((x822==x823)>x824));

    if (t92 != 99) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x843 = -1;
	int64_t x844 = -1LL;

    t93 = (x841/((x842==x843)>x844));

    if (t93 != 11) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t x845 = INT64_MIN;
	int32_t x846 = INT32_MIN;
	volatile int16_t x847 = -1;
	static int32_t x848 = INT32_MIN;
	int64_t t94 = INT64_MIN;

    t94 = (x845/((x846==x847)>x848));

    if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x853 = INT16_MIN;
	volatile int64_t x854 = INT64_MAX;
	int64_t x855 = -4298883573137LL;
	int8_t x856 = INT8_MIN;
	static volatile int32_t t95 = -1023;

    t95 = (x853/((x854==x855)>x856));

    if (t95 != -32768) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x869 = 170860;
	static int32_t x870 = INT32_MIN;
	int16_t x871 = -1;
	int16_t x872 = -58;

    t96 = (x869/((x870==x871)>x872));

    if (t96 != 170860) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint8_t x873 = UINT8_MAX;
	int32_t x874 = -16006;
	uint32_t x875 = 671044U;
	int32_t x876 = -1;
	volatile int32_t t97 = -136;

    t97 = (x873/((x874==x875)>x876));

    if (t97 != 255) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint32_t x877 = UINT32_MAX;
	volatile uint64_t x878 = UINT64_MAX;
	uint16_t x879 = 5457U;
	volatile int64_t x880 = INT64_MIN;
	uint32_t t98 = UINT32_MAX;

    t98 = (x877/((x878==x879)>x880));

    if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint32_t x901 = 2U;
	uint32_t x902 = UINT32_MAX;
	volatile uint16_t x903 = 13U;
	volatile int8_t x904 = -57;
	static volatile uint32_t t99 = 92U;

    t99 = (x901/((x902==x903)>x904));

    if (t99 != 2U) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x938 = INT64_MIN;
	int8_t x939 = INT8_MAX;
	volatile int64_t x940 = -18779LL;
	volatile int32_t t100 = 1024427;

    t100 = (x937/((x938==x939)>x940));

    if (t100 != -128) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int8_t x945 = INT8_MIN;
	static volatile uint32_t x946 = 360945296U;
	int8_t x947 = INT8_MAX;

    t101 = (x945/((x946==x947)>x948));

    if (t101 != -128) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x950 = INT8_MAX;
	int8_t x951 = -1;
	int64_t x952 = INT64_MIN;

    t102 = (x949/((x950==x951)>x952));

    if (t102 != 127) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x961 = UINT32_MAX;
	int8_t x963 = 0;
	int8_t x964 = INT8_MIN;
	volatile uint32_t t103 = UINT32_MAX;

    t103 = (x961/((x962==x963)>x964));

    if (t103 != UINT32_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile int8_t x965 = INT8_MIN;
	int8_t x966 = 1;
	volatile int16_t x967 = INT16_MAX;
	int16_t x968 = -339;

    t104 = (x965/((x966==x967)>x968));

    if (t104 != -128) { NG(); } else { ; }
	
}

void f105(void) {
    	static int32_t x977 = -1;
	volatile int16_t x978 = INT16_MIN;
	static int64_t x979 = INT64_MIN;
	int8_t x980 = -1;
	volatile int32_t t105 = 0;

    t105 = (x977/((x978==x979)>x980));

    if (t105 != -1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x981 = INT16_MIN;
	int32_t x982 = INT32_MAX;
	int64_t x983 = -1LL;
	int8_t x984 = INT8_MIN;
	volatile int32_t t106 = -1752648;

    t106 = (x981/((x982==x983)>x984));

    if (t106 != -32768) { NG(); } else { ; }
	
}

void f107(void) {
    	static int32_t x989 = INT32_MIN;
	static volatile int32_t x990 = 8;
	int8_t x992 = -1;
	int32_t t107 = INT32_MIN;

    t107 = (x989/((x990==x991)>x992));

    if (t107 != INT32_MIN) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x994 = 11U;
	int64_t x995 = -1LL;
	int64_t x996 = INT64_MIN;
	volatile int32_t t108 = 9803;

    t108 = (x993/((x994==x995)>x996));

    if (t108 != 127) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x1026 = INT32_MIN;
	int8_t x1028 = -1;
	int32_t t109 = -16288868;

    t109 = (x1025/((x1026==x1027)>x1028));

    if (t109 != 127) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x1038 = -1264188506466684723LL;
	int8_t x1039 = -1;
	int8_t x1040 = -1;
	volatile uint32_t t110 = UINT32_MAX;

    t110 = (x1037/((x1038==x1039)>x1040));

    if (t110 != UINT32_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x1041 = -1LL;
	int16_t x1042 = INT16_MAX;
	uint32_t x1043 = UINT32_MAX;
	volatile int16_t x1044 = -1;
	int64_t t111 = 7814113215LL;

    t111 = (x1041/((x1042==x1043)>x1044));

    if (t111 != -1LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static int8_t x1070 = 3;
	static uint16_t x1071 = UINT16_MAX;
	static int32_t t112 = -9;

    t112 = (x1069/((x1070==x1071)>x1072));

    if (t112 != 65535) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x1077 = -1LL;
	int16_t x1078 = 5;
	uint16_t x1079 = 1U;
	volatile int64_t t113 = 15LL;

    t113 = (x1077/((x1078==x1079)>x1080));

    if (t113 != -1LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x1097 = INT8_MIN;
	uint32_t x1098 = UINT32_MAX;
	int8_t x1099 = INT8_MIN;
	int32_t x1100 = INT32_MIN;
	int32_t t114 = 1043237290;

    t114 = (x1097/((x1098==x1099)>x1100));

    if (t114 != -128) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x1105 = 249;
	int64_t x1106 = INT64_MIN;
	int8_t x1107 = -1;
	static int8_t x1108 = INT8_MIN;
	int32_t t115 = -138894523;

    t115 = (x1105/((x1106==x1107)>x1108));

    if (t115 != 249) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x1122 = 11488969U;
	uint32_t x1123 = 973633U;
	int16_t x1124 = -1;
	volatile uint64_t t116 = 3987543LLU;

    t116 = (x1121/((x1122==x1123)>x1124));

    if (t116 != 3671LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	static int64_t x1129 = INT64_MIN;
	static int32_t x1130 = -189716533;
	int64_t x1131 = -1437075820172191LL;
	static int16_t x1132 = INT16_MIN;
	volatile int64_t t117 = INT64_MIN;

    t117 = (x1129/((x1130==x1131)>x1132));

    if (t117 != INT64_MIN) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x1153 = INT32_MIN;
	volatile uint32_t x1155 = UINT32_MAX;
	int8_t x1156 = -1;
	volatile int32_t t118 = INT32_MIN;

    t118 = (x1153/((x1154==x1155)>x1156));

    if (t118 != INT32_MIN) { NG(); } else { ; }
	
}

void f119(void) {
    	static int16_t x1157 = 7;
	uint8_t x1158 = 0U;
	int64_t x1159 = -4070004020643LL;
	int32_t x1160 = -1;
	static int32_t t119 = -2760791;

    t119 = (x1157/((x1158==x1159)>x1160));

    if (t119 != 7) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x1165 = -1LL;
	int32_t x1166 = -1;
	volatile int64_t x1168 = INT64_MIN;
	volatile int64_t t120 = -8949708786569201LL;

    t120 = (x1165/((x1166==x1167)>x1168));

    if (t120 != -1LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x1170 = INT16_MIN;
	volatile int32_t x1171 = INT32_MIN;
	volatile int16_t x1172 = INT16_MIN;
	uint64_t t121 = 96283068317LLU;

    t121 = (x1169/((x1170==x1171)>x1172));

    if (t121 != 3LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x1182 = 70U;
	int8_t x1183 = 34;
	int8_t x1184 = -1;
	volatile uint32_t t122 = UINT32_MAX;

    t122 = (x1181/((x1182==x1183)>x1184));

    if (t122 != UINT32_MAX) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x1186 = INT64_MIN;
	static int16_t x1187 = 7;
	static volatile int32_t t123 = -55284;

    t123 = (x1185/((x1186==x1187)>x1188));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x1197 = INT8_MIN;
	int16_t x1198 = INT16_MAX;
	uint8_t x1199 = UINT8_MAX;
	int32_t t124 = 25;

    t124 = (x1197/((x1198==x1199)>x1200));

    if (t124 != -128) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x1209 = INT32_MIN;
	int8_t x1210 = -1;
	volatile uint16_t x1211 = 169U;
	int32_t t125 = INT32_MIN;

    t125 = (x1209/((x1210==x1211)>x1212));

    if (t125 != INT32_MIN) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint64_t x1213 = UINT64_MAX;
	int64_t x1214 = -1LL;
	int16_t x1216 = INT16_MIN;
	volatile uint64_t t126 = UINT64_MAX;

    t126 = (x1213/((x1214==x1215)>x1216));

    if (t126 != UINT64_MAX) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x1222 = UINT16_MAX;
	volatile int32_t x1223 = INT32_MIN;
	volatile int32_t x1224 = -1;
	int32_t t127 = 1;

    t127 = (x1221/((x1222==x1223)>x1224));

    if (t127 != 255) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint64_t x1226 = 14579040175813657LLU;
	static uint64_t x1227 = UINT64_MAX;
	volatile int16_t x1228 = -1511;
	int32_t t128 = 1646667;

    t128 = (x1225/((x1226==x1227)>x1228));

    if (t128 != -128) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x1229 = INT32_MAX;
	uint8_t x1230 = 8U;
	uint64_t x1231 = 214376LLU;
	volatile int64_t x1232 = INT64_MIN;

    t129 = (x1229/((x1230==x1231)>x1232));

    if (t129 != INT32_MAX) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x1241 = 2;
	uint16_t x1242 = 2244U;
	static int32_t x1243 = -1;
	int64_t x1244 = INT64_MIN;
	static int32_t t130 = 136;

    t130 = (x1241/((x1242==x1243)>x1244));

    if (t130 != 2) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint16_t x1249 = 11U;
	static int8_t x1251 = -61;
	static volatile int32_t t131 = 10303;

    t131 = (x1249/((x1250==x1251)>x1252));

    if (t131 != 11) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x1253 = INT32_MIN;
	int64_t x1254 = INT64_MAX;
	int8_t x1255 = 63;
	int32_t t132 = INT32_MIN;

    t132 = (x1253/((x1254==x1255)>x1256));

    if (t132 != INT32_MIN) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x1261 = 583;
	volatile int8_t x1262 = -1;
	static int8_t x1263 = INT8_MIN;
	static int16_t x1264 = INT16_MIN;
	volatile int32_t t133 = 728105735;

    t133 = (x1261/((x1262==x1263)>x1264));

    if (t133 != 583) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x1277 = UINT8_MAX;
	int16_t x1278 = -1;
	static int32_t x1279 = -1;
	volatile int32_t x1280 = -200;
	int32_t t134 = 15931;

    t134 = (x1277/((x1278==x1279)>x1280));

    if (t134 != 255) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x1305 = INT16_MAX;
	int32_t x1306 = -1;
	int32_t x1308 = -1;
	int32_t t135 = 1;

    t135 = (x1305/((x1306==x1307)>x1308));

    if (t135 != 32767) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x1330 = INT64_MAX;

    t136 = (x1329/((x1330==x1331)>x1332));

    if (t136 != 7) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int8_t x1333 = 2;
	volatile int8_t x1334 = INT8_MIN;
	int16_t x1335 = -1;
	int32_t x1336 = -248;
	volatile int32_t t137 = 112344;

    t137 = (x1333/((x1334==x1335)>x1336));

    if (t137 != 2) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x1341 = INT64_MAX;
	int8_t x1342 = 0;
	volatile uint32_t x1343 = UINT32_MAX;
	int8_t x1344 = INT8_MIN;
	int64_t t138 = INT64_MAX;

    t138 = (x1341/((x1342==x1343)>x1344));

    if (t138 != INT64_MAX) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x1346 = -1;
	static int8_t x1347 = 7;
	int64_t x1348 = INT64_MIN;
	volatile int32_t t139 = -820123848;

    t139 = (x1345/((x1346==x1347)>x1348));

    if (t139 != 6522940) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x1349 = 1184177548880657LL;
	volatile int64_t x1350 = INT64_MIN;
	static int32_t x1351 = -258051039;
	int8_t x1352 = -31;
	int64_t t140 = 4LL;

    t140 = (x1349/((x1350==x1351)>x1352));

    if (t140 != 1184177548880657LL) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x1353 = INT16_MIN;
	volatile uint32_t x1354 = 72U;
	int32_t x1355 = INT32_MAX;
	volatile int8_t x1356 = INT8_MIN;
	int32_t t141 = -40;

    t141 = (x1353/((x1354==x1355)>x1356));

    if (t141 != -32768) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x1357 = 51545U;
	static volatile uint16_t x1358 = 7U;
	uint8_t x1359 = 123U;
	int8_t x1360 = -1;
	volatile uint32_t t142 = 14U;

    t142 = (x1357/((x1358==x1359)>x1360));

    if (t142 != 51545U) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x1361 = INT32_MIN;
	int16_t x1362 = INT16_MIN;
	volatile int8_t x1363 = 1;
	int64_t x1364 = INT64_MIN;

    t143 = (x1361/((x1362==x1363)>x1364));

    if (t143 != INT32_MIN) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int16_t x1373 = INT16_MIN;
	uint8_t x1374 = 20U;
	volatile uint32_t x1375 = 3343U;
	int32_t t144 = -3;

    t144 = (x1373/((x1374==x1375)>x1376));

    if (t144 != -32768) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int32_t x1393 = INT32_MIN;
	int64_t x1395 = -1LL;

    t145 = (x1393/((x1394==x1395)>x1396));

    if (t145 != INT32_MIN) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x1397 = 65U;
	uint64_t x1398 = 3550498LLU;
	uint32_t t146 = 157388860U;

    t146 = (x1397/((x1398==x1399)>x1400));

    if (t146 != 65U) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x1401 = INT32_MAX;
	int32_t x1403 = 194;
	volatile int32_t t147 = INT32_MAX;

    t147 = (x1401/((x1402==x1403)>x1404));

    if (t147 != INT32_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint64_t x1417 = 484752915LLU;
	int16_t x1418 = -85;
	volatile int8_t x1419 = -43;
	int16_t x1420 = INT16_MIN;
	uint64_t t148 = 1489LLU;

    t148 = (x1417/((x1418==x1419)>x1420));

    if (t148 != 484752915LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x1431 = -1;
	int32_t x1432 = -22;
	int32_t t149 = 19838925;

    t149 = (x1429/((x1430==x1431)>x1432));

    if (t149 != -8123056) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint16_t x1453 = UINT16_MAX;
	int16_t x1454 = INT16_MIN;
	static volatile int16_t x1456 = -11;
	int32_t t150 = -13;

    t150 = (x1453/((x1454==x1455)>x1456));

    if (t150 != 65535) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int32_t x1461 = 5575165;
	static volatile int8_t x1462 = -1;
	volatile int16_t x1464 = INT16_MIN;
	volatile int32_t t151 = 6615;

    t151 = (x1461/((x1462==x1463)>x1464));

    if (t151 != 5575165) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x1469 = 7U;
	int8_t x1470 = INT8_MAX;
	uint32_t t152 = 2U;

    t152 = (x1469/((x1470==x1471)>x1472));

    if (t152 != 7U) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x1477 = INT8_MIN;
	int8_t x1478 = INT8_MIN;
	uint16_t x1479 = 91U;
	volatile int32_t t153 = 41;

    t153 = (x1477/((x1478==x1479)>x1480));

    if (t153 != -128) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x1481 = INT16_MAX;
	int16_t x1482 = INT16_MIN;
	int16_t x1483 = INT16_MIN;
	int16_t x1484 = INT16_MIN;
	int32_t t154 = -15147589;

    t154 = (x1481/((x1482==x1483)>x1484));

    if (t154 != 32767) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x1489 = 4063509U;
	volatile int8_t x1490 = INT8_MIN;
	int8_t x1491 = INT8_MIN;
	int8_t x1492 = INT8_MIN;
	volatile uint32_t t155 = 9115135U;

    t155 = (x1489/((x1490==x1491)>x1492));

    if (t155 != 4063509U) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x1493 = 1270U;
	static int32_t x1494 = INT32_MIN;
	volatile int8_t x1495 = INT8_MIN;
	static int8_t x1496 = INT8_MIN;
	int32_t t156 = 114205335;

    t156 = (x1493/((x1494==x1495)>x1496));

    if (t156 != 1270) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint16_t x1497 = UINT16_MAX;
	static int64_t x1499 = -260088244837LL;
	int32_t x1500 = INT32_MIN;
	volatile int32_t t157 = 4745;

    t157 = (x1497/((x1498==x1499)>x1500));

    if (t157 != 65535) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x1501 = -1;
	int32_t x1502 = -1567223;
	uint32_t x1503 = 912568U;
	int8_t x1504 = -1;
	volatile int32_t t158 = 479058113;

    t158 = (x1501/((x1502==x1503)>x1504));

    if (t158 != -1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x1509 = 2178U;
	int64_t x1512 = -1LL;
	volatile uint32_t t159 = 15268U;

    t159 = (x1509/((x1510==x1511)>x1512));

    if (t159 != 2178U) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x1521 = 292U;
	uint16_t x1522 = 23U;
	static int16_t x1523 = INT16_MAX;
	int16_t x1524 = INT16_MIN;
	int32_t t160 = -211205;

    t160 = (x1521/((x1522==x1523)>x1524));

    if (t160 != 292) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x1530 = 307364;
	int32_t x1531 = -1;
	int32_t x1532 = INT32_MIN;
	int32_t t161 = -58074;

    t161 = (x1529/((x1530==x1531)>x1532));

    if (t161 != -36) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x1541 = -20700475;
	uint32_t x1543 = UINT32_MAX;
	int64_t x1544 = -3823980955824LL;
	static int32_t t162 = -3632452;

    t162 = (x1541/((x1542==x1543)>x1544));

    if (t162 != -20700475) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile uint8_t x1549 = UINT8_MAX;
	int32_t x1550 = INT32_MIN;
	int64_t x1551 = 806236999251456LL;
	int32_t x1552 = INT32_MIN;
	int32_t t163 = 3;

    t163 = (x1549/((x1550==x1551)>x1552));

    if (t163 != 255) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x1557 = -1;
	uint8_t x1559 = UINT8_MAX;
	int32_t x1560 = -330;
	volatile int32_t t164 = -73738058;

    t164 = (x1557/((x1558==x1559)>x1560));

    if (t164 != -1) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x1562 = 58;
	int64_t x1563 = 6795LL;

    t165 = (x1561/((x1562==x1563)>x1564));

    if (t165 != INT32_MIN) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x1566 = -1;
	uint32_t x1567 = 198574903U;
	static int8_t x1568 = -1;
	int64_t t166 = INT64_MAX;

    t166 = (x1565/((x1566==x1567)>x1568));

    if (t166 != INT64_MAX) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint8_t x1569 = 5U;
	int8_t x1571 = -2;
	int8_t x1572 = -6;

    t167 = (x1569/((x1570==x1571)>x1572));

    if (t167 != 5) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x1585 = 89210LLU;
	static int8_t x1586 = 0;
	int32_t x1588 = -649594336;
	uint64_t t168 = 266461364977894LLU;

    t168 = (x1585/((x1586==x1587)>x1588));

    if (t168 != 89210LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x1601 = -1;
	uint32_t x1602 = 6U;
	int16_t x1604 = -1;
	int32_t t169 = -73336000;

    t169 = (x1601/((x1602==x1603)>x1604));

    if (t169 != -1) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x1605 = INT32_MAX;
	volatile int8_t x1606 = INT8_MAX;
	volatile int64_t x1608 = -1254883LL;
	int32_t t170 = INT32_MAX;

    t170 = (x1605/((x1606==x1607)>x1608));

    if (t170 != INT32_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile uint16_t x1609 = UINT16_MAX;
	static volatile uint32_t x1610 = 1406U;
	volatile int16_t x1611 = INT16_MIN;
	int8_t x1612 = INT8_MIN;

    t171 = (x1609/((x1610==x1611)>x1612));

    if (t171 != 65535) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x1625 = -1;
	volatile uint16_t x1626 = UINT16_MAX;
	int32_t x1627 = INT32_MIN;
	int64_t x1628 = -1LL;
	int32_t t172 = -22561;

    t172 = (x1625/((x1626==x1627)>x1628));

    if (t172 != -1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x1634 = -2553;
	volatile int32_t x1635 = INT32_MIN;
	int32_t x1636 = -94807;
	static volatile uint64_t t173 = 3099517451077LLU;

    t173 = (x1633/((x1634==x1635)>x1636));

    if (t173 != 750710041828LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static int32_t x1641 = 4396173;
	volatile uint64_t x1642 = 3122712513LLU;
	volatile int32_t x1643 = -5929353;
	volatile int32_t x1644 = INT32_MIN;
	int32_t t174 = 56349;

    t174 = (x1641/((x1642==x1643)>x1644));

    if (t174 != 4396173) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x1649 = UINT64_MAX;
	static volatile int8_t x1650 = INT8_MIN;
	uint8_t x1651 = 1U;
	volatile int16_t x1652 = -1;
	uint64_t t175 = UINT64_MAX;

    t175 = (x1649/((x1650==x1651)>x1652));

    if (t175 != UINT64_MAX) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x1665 = 2054;
	uint32_t x1666 = 120258661U;
	volatile uint32_t x1667 = UINT32_MAX;
	static volatile int32_t x1668 = -1;
	volatile int32_t t176 = 12;

    t176 = (x1665/((x1666==x1667)>x1668));

    if (t176 != 2054) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x1669 = -34;
	int8_t x1670 = INT8_MAX;
	int8_t x1671 = INT8_MIN;
	int32_t t177 = -689563;

    t177 = (x1669/((x1670==x1671)>x1672));

    if (t177 != -34) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x1681 = 0;
	static volatile uint16_t x1682 = 1590U;
	int16_t x1683 = INT16_MIN;
	int8_t x1684 = -1;
	volatile int32_t t178 = -4;

    t178 = (x1681/((x1682==x1683)>x1684));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x1697 = 5811597U;
	static volatile int16_t x1698 = 44;
	volatile uint8_t x1699 = 2U;
	int64_t x1700 = INT64_MIN;
	volatile uint32_t t179 = 882U;

    t179 = (x1697/((x1698==x1699)>x1700));

    if (t179 != 5811597U) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile int32_t x1713 = INT32_MIN;
	uint16_t x1714 = UINT16_MAX;
	int32_t x1716 = -315313525;
	int32_t t180 = INT32_MIN;

    t180 = (x1713/((x1714==x1715)>x1716));

    if (t180 != INT32_MIN) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x1717 = -286457232900480276LL;
	volatile int64_t x1718 = -1LL;
	volatile uint16_t x1719 = 11U;
	int8_t x1720 = INT8_MIN;
	static int64_t t181 = 41LL;

    t181 = (x1717/((x1718==x1719)>x1720));

    if (t181 != -286457232900480276LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x1725 = 1613;
	volatile uint16_t x1727 = UINT16_MAX;
	int64_t x1728 = -1LL;
	static int32_t t182 = -94;

    t182 = (x1725/((x1726==x1727)>x1728));

    if (t182 != 1613) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x1729 = -1;
	int16_t x1730 = INT16_MAX;
	int32_t t183 = 5447056;

    t183 = (x1729/((x1730==x1731)>x1732));

    if (t183 != -1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x1733 = INT32_MAX;
	static uint64_t x1734 = 6056675326373LLU;
	uint8_t x1735 = 0U;
	int32_t x1736 = INT32_MIN;

    t184 = (x1733/((x1734==x1735)>x1736));

    if (t184 != INT32_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x1757 = 27U;
	int8_t x1760 = -1;
	int32_t t185 = -48;

    t185 = (x1757/((x1758==x1759)>x1760));

    if (t185 != 27) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x1765 = 1829;
	static uint32_t x1766 = 1U;
	int8_t x1768 = -5;

    t186 = (x1765/((x1766==x1767)>x1768));

    if (t186 != 1829) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x1779 = -6556;

    t187 = (x1777/((x1778==x1779)>x1780));

    if (t187 != -1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint32_t x1781 = 1058558U;
	uint16_t x1782 = 15426U;
	int32_t x1783 = 711076;
	uint32_t t188 = 43854234U;

    t188 = (x1781/((x1782==x1783)>x1784));

    if (t188 != 1058558U) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x1785 = 4092U;
	volatile int64_t x1786 = INT64_MIN;
	int64_t x1787 = INT64_MIN;
	int32_t x1788 = -25385603;
	uint32_t t189 = 2382U;

    t189 = (x1785/((x1786==x1787)>x1788));

    if (t189 != 4092U) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint32_t x1789 = 5089U;
	int16_t x1790 = 4;
	int64_t x1792 = INT64_MIN;

    t190 = (x1789/((x1790==x1791)>x1792));

    if (t190 != 5089U) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x1801 = UINT8_MAX;
	int64_t x1802 = -90013LL;
	static int64_t x1803 = -1LL;
	int32_t x1804 = INT32_MIN;
	static volatile int32_t t191 = 1698833;

    t191 = (x1801/((x1802==x1803)>x1804));

    if (t191 != 255) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x1809 = INT16_MIN;
	int64_t x1811 = INT64_MIN;
	int64_t x1812 = -11384586877746LL;
	volatile int32_t t192 = -167033140;

    t192 = (x1809/((x1810==x1811)>x1812));

    if (t192 != -32768) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint32_t x1813 = 91013U;
	uint16_t x1814 = 13952U;
	volatile int32_t x1815 = INT32_MIN;
	int32_t x1816 = -1;
	uint32_t t193 = 77U;

    t193 = (x1813/((x1814==x1815)>x1816));

    if (t193 != 91013U) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x1829 = INT16_MIN;
	static int8_t x1830 = INT8_MIN;
	int64_t x1831 = INT64_MIN;
	static int16_t x1832 = INT16_MIN;

    t194 = (x1829/((x1830==x1831)>x1832));

    if (t194 != -32768) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x1849 = -520559LL;
	uint32_t x1850 = 532653279U;
	int32_t x1851 = -1;
	int64_t x1852 = -1LL;
	volatile int64_t t195 = 290172520310LL;

    t195 = (x1849/((x1850==x1851)>x1852));

    if (t195 != -520559LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x1854 = -1;
	int64_t x1855 = INT64_MIN;
	static int16_t x1856 = INT16_MIN;
	volatile int32_t t196 = -1902230;

    t196 = (x1853/((x1854==x1855)>x1856));

    if (t196 != 20) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x1877 = INT16_MAX;
	volatile int8_t x1878 = INT8_MIN;
	uint8_t x1879 = 3U;
	int64_t x1880 = -63001965132033737LL;
	static volatile int32_t t197 = 1882461;

    t197 = (x1877/((x1878==x1879)>x1880));

    if (t197 != 32767) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x1893 = -1;
	int16_t x1894 = INT16_MIN;
	uint64_t x1895 = 23542276161595252LLU;
	static int8_t x1896 = INT8_MIN;
	static int32_t t198 = -2820833;

    t198 = (x1893/((x1894==x1895)>x1896));

    if (t198 != -1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x1921 = 49U;
	int32_t x1922 = INT32_MIN;
	uint16_t x1923 = 1U;
	int64_t x1924 = INT64_MIN;
	int32_t t199 = -24;

    t199 = (x1921/((x1922==x1923)>x1924));

    if (t199 != 49) { NG(); } else { ; }
	
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

