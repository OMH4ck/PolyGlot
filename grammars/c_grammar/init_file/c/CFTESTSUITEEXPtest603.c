
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

uint64_t x1 = UINT64_MAX;
int16_t x5 = -62;
volatile int16_t x7 = INT16_MAX;
static volatile int32_t x9 = INT32_MIN;
static int64_t x10 = -2780559754LL;
static volatile int64_t t2 = -134481027979LL;
int64_t t3 = 82589299LL;
volatile uint32_t x24 = UINT32_MAX;
uint8_t x27 = UINT8_MAX;
int8_t x28 = 1;
uint64_t x34 = 61414LLU;
static volatile uint64_t t8 = 6LLU;
static uint32_t x38 = 850442U;
static volatile int32_t x40 = INT32_MAX;
volatile uint32_t t9 = 1007269U;
volatile int32_t x43 = -1;
volatile uint32_t t10 = 124335409U;
uint64_t x45 = UINT64_MAX;
volatile int64_t t12 = -1LL;
int16_t x55 = 8299;
int8_t x56 = -3;
int8_t x58 = INT8_MIN;
int64_t x59 = -1LL;
int32_t x60 = -89;
uint8_t x63 = 6U;
static volatile int64_t t16 = -59LL;
int32_t x72 = 60548785;
static int8_t x85 = INT8_MIN;
uint16_t x87 = UINT16_MAX;
int8_t x90 = INT8_MIN;
volatile uint16_t x96 = 2U;
int64_t x100 = INT64_MIN;
int8_t x115 = INT8_MIN;
int64_t x117 = -14155510009621LL;
int32_t x119 = -1;
volatile uint32_t x124 = UINT32_MAX;
static int16_t x125 = INT16_MAX;
static uint16_t x128 = 896U;
int32_t x129 = -3082792;
static int16_t x132 = INT16_MAX;
uint64_t t31 = 3LLU;
int64_t x144 = 177LL;
int8_t x145 = INT8_MIN;
int32_t x147 = INT32_MIN;
volatile uint32_t t34 = 21049U;
int16_t x151 = 193;
volatile uint32_t x163 = 128889U;
int16_t x165 = -1;
int16_t x167 = INT16_MAX;
uint64_t x172 = UINT64_MAX;
uint16_t x178 = UINT16_MAX;
static int16_t x186 = INT16_MIN;
int64_t x189 = -220526158901111LL;
static uint8_t x190 = 0U;
int32_t x191 = -1;
int64_t x200 = INT64_MIN;
int32_t x203 = -1779486;
int64_t x215 = INT64_MIN;
int16_t x217 = -1;
int64_t x218 = -1LL;
static int32_t x226 = 106503;
static uint16_t x231 = 7753U;
int32_t x232 = -1;
uint16_t x238 = UINT16_MAX;
uint32_t x240 = 1705550513U;
static volatile int16_t x242 = INT16_MIN;
static uint32_t x244 = 1299U;
volatile int64_t t57 = -72193850109413593LL;
uint32_t x249 = 50U;
volatile int64_t x252 = 59997221437LL;
uint32_t t59 = 6452486U;
int64_t x263 = -25LL;
uint8_t x264 = UINT8_MAX;
volatile int64_t t61 = -16532640575650914LL;
static int8_t x267 = 7;
uint32_t x275 = UINT32_MAX;
static uint8_t x281 = 4U;
int32_t t66 = 132695;
static int64_t x286 = INT64_MIN;
static uint16_t x301 = UINT16_MAX;
int16_t x309 = INT16_MAX;
volatile int32_t t72 = 0;
static int32_t x313 = 133132605;
static int32_t x319 = INT32_MAX;
int16_t x342 = -2022;
int32_t x345 = INT32_MIN;
int8_t x346 = 2;
static int8_t x355 = INT8_MAX;
uint32_t x361 = UINT32_MAX;
int8_t x362 = -1;
volatile int64_t t83 = 182608LL;
uint64_t x383 = 13742660LLU;
int16_t x384 = INT16_MIN;
int64_t x390 = INT64_MIN;
int16_t x397 = INT16_MIN;
volatile int8_t x398 = -3;
int8_t x399 = 1;
uint8_t x410 = 9U;
volatile uint16_t x412 = 8U;
uint16_t x431 = 1279U;
int16_t x435 = -1;
static int8_t x436 = -1;
int8_t x447 = INT8_MIN;
int64_t x450 = INT64_MIN;
int32_t x455 = INT32_MIN;
uint64_t x457 = 186326479236750570LLU;
volatile uint64_t t101 = 485642674695LLU;
int16_t x461 = -1;
uint32_t t102 = 1926U;
volatile int64_t x465 = INT64_MIN;
int32_t x466 = -1;
int32_t x473 = -1;
int8_t x475 = INT8_MIN;
volatile uint16_t x482 = 225U;
static int64_t x483 = INT64_MIN;
int16_t x486 = INT16_MIN;
int64_t t108 = -2607943720352955786LL;
int16_t x490 = INT16_MAX;
int32_t x498 = -3226;
int8_t x506 = -1;
uint64_t x508 = 526874720LLU;
static uint64_t t112 = 4905889316LLU;
uint8_t x513 = 0U;
uint64_t x521 = 43769983275LLU;
uint8_t x522 = UINT8_MAX;
volatile uint32_t x523 = UINT32_MAX;
uint64_t t116 = 83LLU;
int32_t x528 = -1;
int32_t t117 = 4342657;
int64_t x529 = 3615667665917357439LL;
int64_t x540 = -433237730925866245LL;
uint64_t t120 = 114395LLU;
static int64_t x542 = INT64_MIN;
static uint16_t x543 = UINT16_MAX;
int32_t x554 = 4598;
uint64_t x560 = 97302366LLU;
uint32_t x563 = 1464092U;
volatile int16_t x564 = INT16_MIN;
static volatile uint64_t t126 = 79076LLU;
uint8_t x572 = 2U;
int32_t x577 = INT32_MIN;
volatile int64_t t129 = -66LL;
int64_t x584 = INT64_MIN;
volatile int64_t x586 = INT64_MAX;
int8_t x591 = 58;
static int16_t x597 = -1;
uint16_t x605 = 6862U;
static uint64_t t136 = 13LLU;
static int64_t x619 = -11LL;
volatile uint16_t x630 = UINT16_MAX;
int16_t x632 = INT16_MAX;
int64_t x633 = 13358726836LL;
volatile int64_t t144 = 2155586731744LL;
int8_t x646 = INT8_MIN;
volatile int8_t x660 = -1;
uint64_t x663 = UINT64_MAX;
int64_t t148 = -796249325368840414LL;
static int32_t x683 = INT32_MIN;
volatile int32_t x687 = 18;
volatile uint32_t x688 = 71309U;
uint16_t x689 = 3U;
volatile int16_t x693 = INT16_MIN;
int32_t x695 = -421029;
int8_t x718 = -1;
volatile uint64_t t160 = 19530LLU;
uint8_t x742 = UINT8_MAX;
static int8_t x744 = INT8_MAX;
int16_t x749 = INT16_MIN;
volatile int32_t x751 = INT32_MIN;
volatile int64_t x759 = INT64_MIN;
static int16_t x767 = INT16_MAX;
uint16_t x775 = 10U;
uint16_t x783 = 13190U;
static volatile int8_t x785 = 19;
volatile uint8_t x787 = UINT8_MAX;
uint16_t x788 = 22U;
int64_t x793 = INT64_MIN;
volatile int32_t x794 = INT32_MAX;
uint16_t x795 = 134U;
static volatile int8_t x798 = INT8_MAX;
int32_t x800 = -153478965;
volatile int64_t t173 = -5276373098387578LL;
static int64_t x801 = -1LL;
volatile int32_t x802 = -5771;
static volatile int32_t x808 = -1;
int8_t x816 = 25;
volatile uint64_t t176 = 110480LLU;
static int16_t x819 = 16;
uint64_t x820 = UINT64_MAX;
uint16_t x826 = 3U;
int16_t x836 = INT16_MIN;
volatile int16_t x840 = -4;
uint8_t x847 = 7U;
uint64_t x853 = UINT64_MAX;
volatile uint16_t x860 = UINT16_MAX;
volatile uint64_t t186 = 40196062452LLU;
int16_t x868 = INT16_MAX;
static uint64_t x885 = 60LLU;
static uint64_t t192 = 28709099LLU;
int16_t x896 = INT16_MAX;
static uint64_t x904 = UINT64_MAX;
volatile uint16_t x905 = UINT16_MAX;
int64_t x915 = INT64_MIN;
volatile int64_t x918 = -13486977258822078LL;


void f0(void) {
    	int8_t x2 = INT8_MAX;
	static uint64_t x3 = 449360038LLU;
	static int64_t x4 = INT64_MAX;
	static uint64_t t0 = 27824812401LLU;

    t0 = (x1+((x2/x3)-x4));

    if (t0 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x6 = 6297LL;
	static uint8_t x8 = UINT8_MAX;
	volatile int64_t t1 = 91101LL;

    t1 = (x5+((x6/x7)-x8));

    if (t1 != -317LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x11 = -1;
	int64_t x12 = -1LL;

    t2 = (x9+((x10/x11)-x12));

    if (t2 != 633076107LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MIN;
	int64_t x14 = INT64_MIN;
	int16_t x15 = INT16_MAX;
	static volatile uint8_t x16 = UINT8_MAX;

    t3 = (x13+((x14/x15)-x16));

    if (t3 != -281485714391303LL) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint64_t x17 = UINT64_MAX;
	int8_t x18 = INT8_MAX;
	static uint64_t x19 = UINT64_MAX;
	int8_t x20 = INT8_MIN;
	volatile uint64_t t4 = 1076899LLU;

    t4 = (x17+((x18/x19)-x20));

    if (t4 != 127LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = -1;
	int8_t x22 = INT8_MIN;
	int8_t x23 = -1;
	uint32_t t5 = 222U;

    t5 = (x21+((x22/x23)-x24));

    if (t5 != 128U) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = INT32_MAX;
	int8_t x26 = 7;
	int32_t t6 = -12;

    t6 = (x25+((x26/x27)-x28));

    if (t6 != 2147483646) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = 3;
	static int16_t x30 = -7;
	uint64_t x31 = 12951173LLU;
	int16_t x32 = INT16_MIN;
	uint64_t t7 = 16262221852973LLU;

    t7 = (x29+((x30/x31)-x32));

    if (t7 != 1424330020001LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint16_t x33 = UINT16_MAX;
	int16_t x35 = INT16_MIN;
	uint64_t x36 = 509790LLU;

    t8 = (x33+((x34/x35)-x36));

    if (t8 != 18446744073709107361LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x37 = 642U;
	uint8_t x39 = UINT8_MAX;

    t9 = (x37+((x38/x39)-x40));

    if (t9 != 2147487626U) { NG(); } else { ; }
	
}

void f10(void) {
    	static int16_t x41 = -1;
	uint32_t x42 = 3U;
	int16_t x44 = INT16_MIN;

    t10 = (x41+((x42/x43)-x44));

    if (t10 != 32767U) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint8_t x46 = UINT8_MAX;
	int16_t x47 = INT16_MIN;
	int8_t x48 = INT8_MIN;
	uint64_t t11 = 880LLU;

    t11 = (x45+((x46/x47)-x48));

    if (t11 != 127LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint16_t x49 = UINT16_MAX;
	static int64_t x50 = -1LL;
	int64_t x51 = INT64_MIN;
	int32_t x52 = INT32_MIN;

    t12 = (x49+((x50/x51)-x52));

    if (t12 != 2147549183LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = 61679448111816954LL;
	volatile int64_t x54 = -1LL;
	volatile int64_t t13 = -201527858677924375LL;

    t13 = (x53+((x54/x55)-x56));

    if (t13 != 61679448111816957LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x57 = 2871LLU;
	static volatile uint64_t t14 = 24077LLU;

    t14 = (x57+((x58/x59)-x60));

    if (t14 != 3088LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint8_t x61 = 37U;
	uint32_t x62 = 1345334U;
	uint8_t x64 = 71U;
	uint32_t t15 = 2921901U;

    t15 = (x61+((x62/x63)-x64));

    if (t15 != 224188U) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = INT32_MIN;
	int64_t x66 = -4123LL;
	int64_t x67 = -32440305993350538LL;
	uint32_t x68 = UINT32_MAX;

    t16 = (x65+((x66/x67)-x68));

    if (t16 != -6442450943LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x69 = UINT16_MAX;
	uint8_t x70 = UINT8_MAX;
	volatile uint64_t x71 = 2LLU;
	uint64_t t17 = 848LLU;

    t17 = (x69+((x70/x71)-x72));

    if (t17 != 18446744073649068493LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = -7;
	int8_t x74 = -1;
	static uint16_t x75 = UINT16_MAX;
	static uint64_t x76 = 3163312943164587LLU;
	static uint64_t t18 = 29768281319396485LLU;

    t18 = (x73+((x74/x75)-x76));

    if (t18 != 18443580760766387022LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint64_t x81 = UINT64_MAX;
	int32_t x82 = -1;
	int32_t x83 = INT32_MAX;
	int32_t x84 = -1;
	uint64_t t19 = 736976904LLU;

    t19 = (x81+((x82/x83)-x84));

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x86 = -71LL;
	uint8_t x88 = UINT8_MAX;
	volatile int64_t t20 = 111955661044603LL;

    t20 = (x85+((x86/x87)-x88));

    if (t20 != -383LL) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x89 = -1;
	int8_t x91 = -1;
	static uint32_t x92 = 1U;
	uint32_t t21 = 1008141432U;

    t21 = (x89+((x90/x91)-x92));

    if (t21 != 126U) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x93 = -1;
	volatile int16_t x94 = 112;
	static uint8_t x95 = 6U;
	volatile int32_t t22 = -26050262;

    t22 = (x93+((x94/x95)-x96));

    if (t22 != 15) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x97 = INT16_MAX;
	uint64_t x98 = UINT64_MAX;
	volatile int32_t x99 = INT32_MIN;
	volatile uint64_t t23 = 536691351664730LLU;

    t23 = (x97+((x98/x99)-x100));

    if (t23 != 9223372036854808576LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x105 = INT16_MIN;
	int8_t x106 = INT8_MIN;
	int64_t x107 = -215873LL;
	volatile uint64_t x108 = 2782280055693LLU;
	uint64_t t24 = 321184563LLU;

    t24 = (x105+((x106/x107)-x108));

    if (t24 != 18446741291429463155LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x109 = 40654781U;
	int64_t x110 = INT64_MIN;
	int64_t x111 = -2272662LL;
	uint64_t x112 = UINT64_MAX;
	volatile uint64_t t25 = 272610631204LLU;

    t25 = (x109+((x110/x111)-x112));

    if (t25 != 4058440908253LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x113 = 8631529LLU;
	int16_t x114 = -1;
	int16_t x116 = INT16_MIN;
	volatile uint64_t t26 = 17644806336LLU;

    t26 = (x113+((x114/x115)-x116));

    if (t26 != 8664297LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x118 = UINT64_MAX;
	int64_t x120 = INT64_MAX;
	volatile uint64_t t27 = 89311203017871LLU;

    t27 = (x117+((x118/x119)-x120));

    if (t27 != 9223357881344766189LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x121 = 34858433;
	uint64_t x122 = 446385LLU;
	uint8_t x123 = UINT8_MAX;
	volatile uint64_t t28 = 6099051085911180509LLU;

    t28 = (x121+((x122/x123)-x124));

    if (t28 != 18446744069449444504LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x126 = -1;
	int32_t x127 = INT32_MAX;
	int32_t t29 = -31696;

    t29 = (x125+((x126/x127)-x128));

    if (t29 != 31871) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x130 = -1LL;
	uint8_t x131 = 2U;
	volatile int64_t t30 = 518513187630551059LL;

    t30 = (x129+((x130/x131)-x132));

    if (t30 != -3115559LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint64_t x133 = 1441LLU;
	static volatile int8_t x134 = -1;
	int64_t x135 = INT64_MAX;
	int32_t x136 = INT32_MIN;

    t31 = (x133+((x134/x135)-x136));

    if (t31 != 2147485089LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x137 = INT8_MAX;
	int32_t x138 = INT32_MIN;
	static int64_t x139 = -7954943910654LL;
	volatile int16_t x140 = -1;
	int64_t t32 = 1848000732040145311LL;

    t32 = (x137+((x138/x139)-x140));

    if (t32 != 128LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x141 = 0U;
	int16_t x142 = 970;
	int8_t x143 = -7;
	volatile int64_t t33 = -84469064627889LL;

    t33 = (x141+((x142/x143)-x144));

    if (t33 != -315LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x146 = UINT32_MAX;
	int32_t x148 = INT32_MAX;

    t34 = (x145+((x146/x147)-x148));

    if (t34 != 2147483522U) { NG(); } else { ; }
	
}

void f35(void) {
    	static int8_t x149 = INT8_MIN;
	volatile int8_t x150 = INT8_MAX;
	int32_t x152 = -10569017;
	volatile int32_t t35 = 1;

    t35 = (x149+((x150/x151)-x152));

    if (t35 != 10568889) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x153 = INT16_MIN;
	static volatile uint64_t x154 = 285LLU;
	static uint64_t x155 = 8097899426997217739LLU;
	uint64_t x156 = 1LLU;
	uint64_t t36 = 398296146845LLU;

    t36 = (x153+((x154/x155)-x156));

    if (t36 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x157 = -2;
	int64_t x158 = INT64_MIN;
	uint8_t x159 = 19U;
	volatile int16_t x160 = -1;
	int64_t t37 = 570749254520927LL;

    t37 = (x157+((x158/x159)-x160));

    if (t37 != -485440633518672411LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x161 = -1;
	static volatile int64_t x162 = INT64_MIN;
	volatile int32_t x164 = -56990;
	int64_t t38 = -171709LL;

    t38 = (x161+((x162/x163)-x164));

    if (t38 != -71560583366381LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x166 = INT64_MIN;
	static uint64_t x168 = 34055311463LLU;
	static volatile uint64_t t39 = 38163LLU;

    t39 = (x165+((x166/x167)-x168));

    if (t39 != 18446462556087332752LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x169 = 264616475LLU;
	static int32_t x170 = INT32_MAX;
	static volatile int32_t x171 = 3987160;
	volatile uint64_t t40 = 16033468LLU;

    t40 = (x169+((x170/x171)-x172));

    if (t40 != 264617014LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile uint32_t x173 = 13995U;
	volatile int16_t x174 = INT16_MIN;
	volatile uint64_t x175 = UINT64_MAX;
	uint32_t x176 = 5198781U;
	uint64_t t41 = 2176713LLU;

    t41 = (x173+((x174/x175)-x176));

    if (t41 != 18446744073704366830LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x177 = -3;
	static int8_t x179 = INT8_MIN;
	int16_t x180 = -1;
	static int32_t t42 = -837144;

    t42 = (x177+((x178/x179)-x180));

    if (t42 != -513) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x185 = INT8_MIN;
	static volatile uint32_t x187 = 3U;
	volatile uint16_t x188 = 341U;
	static volatile uint32_t t43 = 1713930276U;

    t43 = (x185+((x186/x187)-x188));

    if (t43 != 1431644373U) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x192 = INT8_MAX;
	static int64_t t44 = -20668971061026752LL;

    t44 = (x189+((x190/x191)-x192));

    if (t44 != -220526158901238LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x193 = 16316987;
	uint8_t x194 = 10U;
	int32_t x195 = INT32_MAX;
	volatile int16_t x196 = INT16_MIN;
	int32_t t45 = 13525;

    t45 = (x193+((x194/x195)-x196));

    if (t45 != 16349755) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int32_t x197 = INT32_MIN;
	volatile uint16_t x198 = 15043U;
	int8_t x199 = -1;
	volatile int64_t t46 = -2551972LL;

    t46 = (x197+((x198/x199)-x200));

    if (t46 != 9223372034707277117LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x201 = 30U;
	int64_t x202 = INT64_MIN;
	uint64_t x204 = 3046567877774320740LLU;
	uint64_t t47 = 43016308LLU;

    t47 = (x201+((x202/x203)-x204));

    if (t47 != 15400181379101626626LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x205 = UINT8_MAX;
	int64_t x206 = INT64_MIN;
	uint16_t x207 = 43U;
	int32_t x208 = 2261517;
	int64_t t48 = 0LL;

    t48 = (x205+((x206/x207)-x208));

    if (t48 != -214497024115163024LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x209 = INT32_MAX;
	uint8_t x210 = 49U;
	int32_t x211 = -1;
	uint64_t x212 = UINT64_MAX;
	static uint64_t t49 = 23LLU;

    t49 = (x209+((x210/x211)-x212));

    if (t49 != 2147483599LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x213 = INT16_MAX;
	int8_t x214 = -1;
	static int32_t x216 = INT32_MAX;
	volatile int64_t t50 = 1215845415222622363LL;

    t50 = (x213+((x214/x215)-x216));

    if (t50 != -2147450880LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x219 = INT64_MIN;
	int32_t x220 = -1;
	volatile int64_t t51 = -8LL;

    t51 = (x217+((x218/x219)-x220));

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint8_t x221 = 1U;
	uint8_t x222 = UINT8_MAX;
	uint8_t x223 = UINT8_MAX;
	uint64_t x224 = 42628134638040LLU;
	uint64_t t52 = 343903777LLU;

    t52 = (x221+((x222/x223)-x224));

    if (t52 != 18446701445574913578LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint16_t x225 = UINT16_MAX;
	static int32_t x227 = -4926974;
	volatile int32_t x228 = -1;
	volatile int32_t t53 = -2;

    t53 = (x225+((x226/x227)-x228));

    if (t53 != 65536) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x229 = INT64_MIN;
	int32_t x230 = -912;
	int64_t t54 = 556195LL;

    t54 = (x229+((x230/x231)-x232));

    if (t54 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x233 = UINT8_MAX;
	int16_t x234 = INT16_MIN;
	int32_t x235 = INT32_MAX;
	static int16_t x236 = 161;
	int32_t t55 = -293;

    t55 = (x233+((x234/x235)-x236));

    if (t55 != 94) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x237 = 25192076;
	uint8_t x239 = 6U;
	static volatile uint32_t t56 = 3959U;

    t56 = (x237+((x238/x239)-x240));

    if (t56 != 2614619781U) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x241 = INT64_MIN;
	static volatile uint16_t x243 = 17U;

    t57 = (x241+((x242/x243)-x244));

    if (t57 != -9223372032559811738LL) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x250 = INT16_MIN;
	uint8_t x251 = 20U;
	static int64_t t58 = 1326795LL;

    t58 = (x249+((x250/x251)-x252));

    if (t58 != -59997223025LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x253 = 222961164;
	uint8_t x254 = 5U;
	volatile uint32_t x255 = UINT32_MAX;
	volatile uint32_t x256 = 8009U;

    t59 = (x253+((x254/x255)-x256));

    if (t59 != 222953155U) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x257 = 1893U;
	uint8_t x258 = 0U;
	uint64_t x259 = UINT64_MAX;
	uint32_t x260 = 215753U;
	static volatile uint64_t t60 = 150625754529249828LLU;

    t60 = (x257+((x258/x259)-x260));

    if (t60 != 18446744073709337756LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int16_t x261 = -1;
	volatile int32_t x262 = -1;

    t61 = (x261+((x262/x263)-x264));

    if (t61 != -256LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x265 = 66793020098LLU;
	int64_t x266 = -1LL;
	uint8_t x268 = 9U;
	static volatile uint64_t t62 = 123987983131983LLU;

    t62 = (x265+((x266/x267)-x268));

    if (t62 != 66793020089LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x269 = INT64_MAX;
	volatile int32_t x270 = INT32_MIN;
	uint64_t x271 = UINT64_MAX;
	int32_t x272 = INT32_MAX;
	uint64_t t63 = 1676LLU;

    t63 = (x269+((x270/x271)-x272));

    if (t63 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x273 = INT8_MIN;
	int64_t x274 = INT64_MIN;
	uint64_t x276 = UINT64_MAX;
	uint64_t t64 = 576579427LLU;

    t64 = (x273+((x274/x275)-x276));

    if (t64 != 18446744071562067841LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x277 = INT32_MAX;
	int64_t x278 = INT64_MIN;
	uint64_t x279 = UINT64_MAX;
	int16_t x280 = 1;
	uint64_t t65 = 108992LLU;

    t65 = (x277+((x278/x279)-x280));

    if (t65 != 2147483646LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x282 = 23691U;
	volatile uint16_t x283 = 1692U;
	int16_t x284 = 268;

    t66 = (x281+((x282/x283)-x284));

    if (t66 != -250) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x285 = INT16_MIN;
	uint16_t x287 = UINT16_MAX;
	uint64_t x288 = 29615960496LLU;
	uint64_t t67 = 202LLU;

    t67 = (x285+((x286/x287)-x288));

    if (t67 != 18446603304457686608LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x293 = 10254U;
	volatile int64_t x294 = INT64_MIN;
	static int8_t x295 = -26;
	int32_t x296 = 6274;
	volatile int64_t t68 = 3597459624188587006LL;

    t68 = (x293+((x294/x295)-x296));

    if (t68 != 354745078340572280LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x297 = 60U;
	int32_t x298 = -1;
	int16_t x299 = -1;
	int16_t x300 = INT16_MIN;
	static int32_t t69 = -3;

    t69 = (x297+((x298/x299)-x300));

    if (t69 != 32829) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x302 = INT16_MAX;
	int16_t x303 = INT16_MAX;
	uint32_t x304 = UINT32_MAX;
	volatile uint32_t t70 = 667502417U;

    t70 = (x301+((x302/x303)-x304));

    if (t70 != 65537U) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x305 = 305U;
	volatile int64_t x306 = -1LL;
	int8_t x307 = INT8_MAX;
	static uint32_t x308 = UINT32_MAX;
	int64_t t71 = 125392496LL;

    t71 = (x305+((x306/x307)-x308));

    if (t71 != -4294966990LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x310 = UINT8_MAX;
	uint8_t x311 = 112U;
	int8_t x312 = INT8_MIN;

    t72 = (x309+((x310/x311)-x312));

    if (t72 != 32897) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x314 = 977U;
	int32_t x315 = INT32_MAX;
	int8_t x316 = -1;
	int32_t t73 = 244967128;

    t73 = (x313+((x314/x315)-x316));

    if (t73 != 133132606) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x317 = -1;
	int16_t x318 = -1;
	int16_t x320 = 28;
	static int32_t t74 = 106321817;

    t74 = (x317+((x318/x319)-x320));

    if (t74 != -29) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x333 = INT32_MAX;
	static uint16_t x334 = 21U;
	uint32_t x335 = 244925U;
	static uint16_t x336 = UINT16_MAX;
	uint32_t t75 = 2065789890U;

    t75 = (x333+((x334/x335)-x336));

    if (t75 != 2147418112U) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x341 = INT64_MIN;
	static volatile uint32_t x343 = UINT32_MAX;
	static int16_t x344 = 24;
	volatile int64_t t76 = -238584870861937807LL;

    t76 = (x341+((x342/x343)-x344));

    if (t76 != -9223372032559808536LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x347 = INT64_MIN;
	int64_t x348 = 1LL;
	static volatile int64_t t77 = 250347123396LL;

    t77 = (x345+((x346/x347)-x348));

    if (t77 != -2147483649LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x349 = INT16_MIN;
	int32_t x350 = INT32_MIN;
	uint8_t x351 = 8U;
	volatile int16_t x352 = INT16_MAX;
	volatile int32_t t78 = -2344;

    t78 = (x349+((x350/x351)-x352));

    if (t78 != -268500991) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x353 = -1;
	int64_t x354 = INT64_MIN;
	volatile uint16_t x356 = 752U;
	int64_t t79 = 5LL;

    t79 = (x353+((x354/x355)-x356));

    if (t79 != -72624976668148594LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x357 = -136;
	static uint8_t x358 = 122U;
	static volatile uint64_t x359 = 113737553097LLU;
	volatile uint8_t x360 = 0U;
	volatile uint64_t t80 = 4765074489725600LLU;

    t80 = (x357+((x358/x359)-x360));

    if (t80 != 18446744073709551480LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x363 = INT8_MIN;
	static volatile int64_t x364 = INT64_MAX;
	volatile int64_t t81 = -24828LL;

    t81 = (x361+((x362/x363)-x364));

    if (t81 != -9223372032559808512LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x365 = 0;
	volatile int8_t x366 = -2;
	uint64_t x367 = 26232074110LLU;
	uint32_t x368 = 6295012U;
	static uint64_t t82 = 61374381843564335LLU;

    t82 = (x365+((x366/x367)-x368));

    if (t82 != 696918313LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x369 = 1U;
	volatile int64_t x370 = INT64_MIN;
	uint8_t x371 = UINT8_MAX;
	static int16_t x372 = -1;

    t83 = (x369+((x370/x371)-x372));

    if (t83 != -36170086419038334LL) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint32_t x373 = UINT32_MAX;
	int32_t x374 = INT32_MIN;
	int8_t x375 = INT8_MIN;
	int8_t x376 = -3;
	volatile uint32_t t84 = 11388713U;

    t84 = (x373+((x374/x375)-x376));

    if (t84 != 16777218U) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x381 = INT8_MAX;
	int8_t x382 = INT8_MIN;
	uint64_t t85 = 4030259LLU;

    t85 = (x381+((x382/x383)-x384));

    if (t85 != 1342297963114LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x385 = -1;
	int16_t x386 = 80;
	static int32_t x387 = INT32_MIN;
	int8_t x388 = INT8_MAX;
	static int32_t t86 = 68;

    t86 = (x385+((x386/x387)-x388));

    if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x389 = -1;
	static uint8_t x391 = 11U;
	uint8_t x392 = UINT8_MAX;
	static volatile int64_t t87 = 146821831561565LL;

    t87 = (x389+((x390/x391)-x392));

    if (t87 != -838488366986798056LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x400 = INT8_MAX;
	volatile int32_t t88 = 149;

    t88 = (x397+((x398/x399)-x400));

    if (t88 != -32898) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x401 = INT8_MAX;
	uint8_t x402 = UINT8_MAX;
	int64_t x403 = INT64_MAX;
	uint32_t x404 = 624045524U;
	int64_t t89 = 598472758962267LL;

    t89 = (x401+((x402/x403)-x404));

    if (t89 != -624045397LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x409 = -1LL;
	uint32_t x411 = UINT32_MAX;
	static volatile int64_t t90 = -10337746928843LL;

    t90 = (x409+((x410/x411)-x412));

    if (t90 != 4294967287LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x413 = INT64_MAX;
	int16_t x414 = INT16_MIN;
	static int16_t x415 = INT16_MIN;
	int8_t x416 = INT8_MAX;
	int64_t t91 = -21831019493117564LL;

    t91 = (x413+((x414/x415)-x416));

    if (t91 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x417 = -1790;
	int32_t x418 = INT32_MIN;
	int8_t x419 = 13;
	int64_t x420 = -1LL;
	int64_t t92 = 15742323125469LL;

    t92 = (x417+((x418/x419)-x420));

    if (t92 != -165192838LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x421 = INT8_MIN;
	uint64_t x422 = 233134595141823LLU;
	static int64_t x423 = -1LL;
	volatile uint8_t x424 = 109U;
	volatile uint64_t t93 = 4482945566LLU;

    t93 = (x421+((x422/x423)-x424));

    if (t93 != 18446744073709551379LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x429 = 57;
	int8_t x430 = INT8_MIN;
	uint32_t x432 = 206U;
	static volatile uint32_t t94 = 0U;

    t94 = (x429+((x430/x431)-x432));

    if (t94 != 4294967147U) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int16_t x433 = INT16_MIN;
	int8_t x434 = INT8_MIN;
	int32_t t95 = -143764128;

    t95 = (x433+((x434/x435)-x436));

    if (t95 != -32639) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x437 = 136213835;
	int32_t x438 = -43225;
	int32_t x439 = -4030094;
	uint64_t x440 = 63436933136849LLU;
	uint64_t t96 = 20303932LLU;

    t96 = (x437+((x438/x439)-x440));

    if (t96 != 18446680636912628602LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x441 = -100339;
	int32_t x442 = 440694;
	static uint8_t x443 = 8U;
	uint32_t x444 = UINT32_MAX;
	uint32_t t97 = 782513U;

    t97 = (x441+((x442/x443)-x444));

    if (t97 != 4294922044U) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x445 = 2U;
	int8_t x446 = INT8_MAX;
	int64_t x448 = -929151LL;
	volatile int64_t t98 = -1LL;

    t98 = (x445+((x446/x447)-x448));

    if (t98 != 929153LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint64_t x449 = UINT64_MAX;
	int64_t x451 = -310079222LL;
	static int8_t x452 = -1;
	volatile uint64_t t99 = 25660439LLU;

    t99 = (x449+((x450/x451)-x452));

    if (t99 != 29745211489LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x453 = UINT16_MAX;
	static int32_t x454 = INT32_MAX;
	static int8_t x456 = -1;
	int32_t t100 = 0;

    t100 = (x453+((x454/x455)-x456));

    if (t100 != 65536) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x458 = INT8_MIN;
	uint8_t x459 = 21U;
	static int32_t x460 = INT32_MIN;

    t101 = (x457+((x458/x459)-x460));

    if (t101 != 186326481384234212LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int8_t x462 = -1;
	uint32_t x463 = 44U;
	int32_t x464 = INT32_MAX;

    t102 = (x461+((x462/x463)-x464));

    if (t102 != 2245096541U) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint16_t x467 = 4671U;
	int16_t x468 = INT16_MIN;
	static int64_t t103 = -466988773425LL;

    t103 = (x465+((x466/x467)-x468));

    if (t103 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x469 = -1;
	int64_t x470 = INT64_MIN;
	uint8_t x471 = 1U;
	static int64_t x472 = INT64_MIN;
	int64_t t104 = -47LL;

    t104 = (x469+((x470/x471)-x472));

    if (t104 != -1LL) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int64_t x474 = INT64_MAX;
	int16_t x476 = -29;
	int64_t t105 = -133774817956140232LL;

    t105 = (x473+((x474/x475)-x476));

    if (t105 != -72057594037927907LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x477 = 4619U;
	static volatile int32_t x478 = -15029;
	static volatile uint64_t x479 = 13719LLU;
	volatile uint8_t x480 = 2U;
	uint64_t t106 = 774761235LLU;

    t106 = (x477+((x478/x479)-x480));

    if (t106 != 1344612878035780LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x481 = INT8_MIN;
	int16_t x484 = INT16_MIN;
	int64_t t107 = 1820529141716923027LL;

    t107 = (x481+((x482/x483)-x484));

    if (t107 != 32640LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static int64_t x485 = -1LL;
	uint32_t x487 = 56355451U;
	int32_t x488 = 949140;

    t108 = (x485+((x486/x487)-x488));

    if (t108 != 4294018231LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x489 = -1;
	int8_t x491 = 1;
	int32_t x492 = -879418;
	volatile int32_t t109 = 125;

    t109 = (x489+((x490/x491)-x492));

    if (t109 != 912184) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x497 = INT32_MIN;
	uint32_t x499 = 44087289U;
	int32_t x500 = -1;
	uint32_t t110 = 21U;

    t110 = (x497+((x498/x499)-x500));

    if (t110 != 2147483746U) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x501 = -1;
	volatile uint8_t x502 = 10U;
	static uint64_t x503 = UINT64_MAX;
	volatile int32_t x504 = 3101932;
	volatile uint64_t t111 = 110404862LLU;

    t111 = (x501+((x502/x503)-x504));

    if (t111 != 18446744073706449683LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static int64_t x505 = 26887LL;
	uint16_t x507 = UINT16_MAX;

    t112 = (x505+((x506/x507)-x508));

    if (t112 != 18446744073182703783LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile uint32_t x509 = 18988026U;
	static int32_t x510 = -1038785229;
	volatile int16_t x511 = -1;
	int16_t x512 = -1;
	volatile uint32_t t113 = 1497526940U;

    t113 = (x509+((x510/x511)-x512));

    if (t113 != 1057773256U) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x514 = 12U;
	int64_t x515 = -1LL;
	uint16_t x516 = 200U;
	static volatile int64_t t114 = 23904801013LL;

    t114 = (x513+((x514/x515)-x516));

    if (t114 != -212LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x517 = UINT64_MAX;
	int16_t x518 = 80;
	int64_t x519 = -1629097LL;
	int32_t x520 = 3;
	static uint64_t t115 = 195313468975443274LLU;

    t115 = (x517+((x518/x519)-x520));

    if (t115 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x524 = INT32_MIN;

    t116 = (x521+((x522/x523)-x524));

    if (t116 != 45917466923LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint16_t x525 = 1U;
	int32_t x526 = -1;
	static int8_t x527 = -1;

    t117 = (x525+((x526/x527)-x528));

    if (t117 != 3) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x530 = 28U;
	static int32_t x531 = INT32_MIN;
	int8_t x532 = INT8_MIN;
	volatile int64_t t118 = -110LL;

    t118 = (x529+((x530/x531)-x532));

    if (t118 != 3615667665917357567LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static int16_t x533 = -7;
	int64_t x534 = -1LL;
	static int16_t x535 = INT16_MIN;
	uint32_t x536 = 140307U;
	static int64_t t119 = -4792247025LL;

    t119 = (x533+((x534/x535)-x536));

    if (t119 != -140314LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x537 = -1;
	volatile uint64_t x538 = 612381401197561LLU;
	static uint64_t x539 = 776555003086695157LLU;

    t120 = (x537+((x538/x539)-x540));

    if (t120 != 433237730925866244LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x541 = 21968U;
	int16_t x544 = INT16_MIN;
	int64_t t121 = -3757LL;

    t121 = (x541+((x542/x543)-x544));

    if (t121 != -140739635817008LL) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint32_t x545 = UINT32_MAX;
	int32_t x546 = INT32_MIN;
	uint32_t x547 = 86U;
	volatile int8_t x548 = INT8_MIN;
	volatile uint32_t t122 = 9183U;

    t122 = (x545+((x546/x547)-x548));

    if (t122 != 24970867U) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x549 = INT64_MAX;
	int8_t x550 = INT8_MAX;
	int8_t x551 = -1;
	static uint16_t x552 = 19989U;
	volatile int64_t t123 = 912209501926245LL;

    t123 = (x549+((x550/x551)-x552));

    if (t123 != 9223372036854755691LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int64_t x553 = 3013633455319LL;
	uint32_t x555 = 140U;
	static int16_t x556 = 11;
	volatile int64_t t124 = 43751903231399LL;

    t124 = (x553+((x554/x555)-x556));

    if (t124 != 3013633455340LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x557 = UINT16_MAX;
	volatile int32_t x558 = -1;
	uint32_t x559 = 4U;
	volatile uint64_t t125 = 74372738230LLU;

    t125 = (x557+((x558/x559)-x560));

    if (t125 != 976504992LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x561 = 2;
	uint64_t x562 = 1442LLU;

    t126 = (x561+((x562/x563)-x564));

    if (t126 != 32770LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static int8_t x565 = INT8_MAX;
	volatile uint16_t x566 = 345U;
	int8_t x567 = 62;
	int16_t x568 = 11941;
	volatile int32_t t127 = 12849;

    t127 = (x565+((x566/x567)-x568));

    if (t127 != -11809) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x569 = INT8_MIN;
	volatile uint8_t x570 = 123U;
	int64_t x571 = -1LL;
	int64_t t128 = 33483399365179LL;

    t128 = (x569+((x570/x571)-x572));

    if (t128 != -253LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x578 = 123U;
	int64_t x579 = INT64_MAX;
	int8_t x580 = INT8_MIN;

    t129 = (x577+((x578/x579)-x580));

    if (t129 != -2147483520LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x581 = 2U;
	static int16_t x582 = INT16_MAX;
	static int32_t x583 = -1;
	static int64_t t130 = 37819LL;

    t130 = (x581+((x582/x583)-x584));

    if (t130 != 9223372036854743043LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x585 = 1350921528LLU;
	volatile int64_t x587 = INT64_MAX;
	volatile int32_t x588 = 357;
	uint64_t t131 = 27773LLU;

    t131 = (x585+((x586/x587)-x588));

    if (t131 != 1350921172LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x589 = INT16_MAX;
	uint16_t x590 = 4688U;
	int8_t x592 = INT8_MIN;
	int32_t t132 = -136301807;

    t132 = (x589+((x590/x591)-x592));

    if (t132 != 32975) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint32_t x593 = 228803U;
	static int64_t x594 = INT64_MIN;
	volatile int16_t x595 = -13;
	int32_t x596 = 3892663;
	volatile int64_t t133 = -29785LL;

    t133 = (x593+((x594/x595)-x596));

    if (t133 != 709490156677472740LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x598 = INT16_MIN;
	uint16_t x599 = UINT16_MAX;
	uint8_t x600 = 78U;
	int32_t t134 = 0;

    t134 = (x597+((x598/x599)-x600));

    if (t134 != -79) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x601 = INT64_MIN;
	int16_t x602 = INT16_MIN;
	int8_t x603 = -3;
	static int8_t x604 = 1;
	int64_t t135 = -12069631752786LL;

    t135 = (x601+((x602/x603)-x604));

    if (t135 != -9223372036854764887LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x606 = INT16_MIN;
	uint64_t x607 = 130728289LLU;
	int64_t x608 = INT64_MIN;

    t136 = (x605+((x606/x607)-x608));

    if (t136 != 9223372177962298226LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x609 = 114U;
	int32_t x610 = -115766816;
	volatile int8_t x611 = -1;
	int32_t x612 = INT32_MAX;
	volatile int32_t t137 = -62910;

    t137 = (x609+((x610/x611)-x612));

    if (t137 != -2031716717) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int32_t x613 = INT32_MIN;
	volatile int8_t x614 = INT8_MIN;
	uint16_t x615 = UINT16_MAX;
	int8_t x616 = -1;
	volatile int32_t t138 = 202938053;

    t138 = (x613+((x614/x615)-x616));

    if (t138 != -2147483647) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t x617 = INT32_MIN;
	static int64_t x618 = INT64_MIN;
	static int8_t x620 = INT8_MIN;
	int64_t t139 = 244309609060466LL;

    t139 = (x617+((x618/x619)-x620));

    if (t139 != 838488364839314280LL) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint32_t x621 = 1607U;
	int16_t x622 = 0;
	uint64_t x623 = 3319622LLU;
	volatile uint8_t x624 = 29U;
	volatile uint64_t t140 = 963251128826LLU;

    t140 = (x621+((x622/x623)-x624));

    if (t140 != 1578LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x629 = 4;
	uint8_t x631 = UINT8_MAX;
	static int32_t t141 = 455;

    t141 = (x629+((x630/x631)-x632));

    if (t141 != -32506) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x634 = -1;
	static int16_t x635 = -1;
	int8_t x636 = INT8_MAX;
	static volatile int64_t t142 = 2157049314033590723LL;

    t142 = (x633+((x634/x635)-x636));

    if (t142 != 13358726710LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x637 = INT16_MIN;
	int64_t x638 = INT64_MAX;
	volatile int32_t x639 = -13;
	volatile int16_t x640 = 0;
	volatile int64_t t143 = 575228414056LL;

    t143 = (x637+((x638/x639)-x640));

    if (t143 != -709490156681169368LL) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int64_t x641 = -18104401LL;
	int8_t x642 = 53;
	static int64_t x643 = -1LL;
	volatile int16_t x644 = -10251;

    t144 = (x641+((x642/x643)-x644));

    if (t144 != -18094203LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x645 = INT32_MIN;
	volatile int64_t x647 = 66940746922LL;
	volatile int32_t x648 = INT32_MIN;
	volatile int64_t t145 = -742361527LL;

    t145 = (x645+((x646/x647)-x648));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int64_t x657 = -1LL;
	int16_t x658 = INT16_MAX;
	int32_t x659 = INT32_MIN;
	volatile int64_t t146 = -122374552850LL;

    t146 = (x657+((x658/x659)-x660));

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile uint64_t x661 = 212459596959304LLU;
	int64_t x662 = INT64_MAX;
	static volatile int32_t x664 = -5;
	volatile uint64_t t147 = 6344334LLU;

    t147 = (x661+((x662/x663)-x664));

    if (t147 != 212459596959309LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x665 = INT8_MAX;
	int64_t x666 = -6LL;
	int64_t x667 = INT64_MIN;
	int32_t x668 = INT32_MIN;

    t148 = (x665+((x666/x667)-x668));

    if (t148 != 2147483775LL) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int16_t x673 = INT16_MIN;
	uint8_t x674 = 10U;
	static int8_t x675 = INT8_MAX;
	int8_t x676 = 48;
	volatile int32_t t149 = -518768660;

    t149 = (x673+((x674/x675)-x676));

    if (t149 != -32816) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x681 = 18001737U;
	int8_t x682 = 1;
	uint64_t x684 = 77313LLU;
	volatile uint64_t t150 = 2005612745924LLU;

    t150 = (x681+((x682/x683)-x684));

    if (t150 != 17924424LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x685 = 179LLU;
	volatile uint16_t x686 = 23698U;
	static volatile uint64_t t151 = 11893533806292728LLU;

    t151 = (x685+((x686/x687)-x688));

    if (t151 != 4294897482LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x690 = -19;
	int32_t x691 = INT32_MIN;
	uint8_t x692 = 6U;
	volatile int32_t t152 = 29515;

    t152 = (x689+((x690/x691)-x692));

    if (t152 != -3) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x694 = INT64_MIN;
	int64_t x696 = INT64_MAX;
	volatile int64_t t153 = -231353400LL;

    t153 = (x693+((x694/x695)-x696));

    if (t153 != -9223350130116705369LL) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint16_t x697 = 793U;
	int32_t x698 = INT32_MAX;
	static int32_t x699 = -1;
	int8_t x700 = -29;
	int32_t t154 = 93377;

    t154 = (x697+((x698/x699)-x700));

    if (t154 != -2147482825) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x701 = 173;
	uint64_t x702 = 0LLU;
	int32_t x703 = INT32_MIN;
	int32_t x704 = INT32_MAX;
	uint64_t t155 = 50367LLU;

    t155 = (x701+((x702/x703)-x704));

    if (t155 != 18446744071562068142LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x705 = INT32_MIN;
	int16_t x706 = -1;
	int16_t x707 = INT16_MIN;
	uint64_t x708 = 10542LLU;
	uint64_t t156 = 33994969608491LLU;

    t156 = (x705+((x706/x707)-x708));

    if (t156 != 18446744071562057426LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x713 = INT16_MIN;
	volatile int64_t x714 = -127979659LL;
	int8_t x715 = -1;
	uint8_t x716 = 7U;
	static volatile int64_t t157 = -2065273075212560001LL;

    t157 = (x713+((x714/x715)-x716));

    if (t157 != 127946884LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x717 = -186;
	static int8_t x719 = 19;
	int16_t x720 = INT16_MIN;
	static volatile int32_t t158 = 3435;

    t158 = (x717+((x718/x719)-x720));

    if (t158 != 32582) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x721 = INT64_MAX;
	int16_t x722 = 21;
	int8_t x723 = INT8_MAX;
	static volatile uint64_t x724 = 87362616LLU;
	static volatile uint64_t t159 = 297989929983LLU;

    t159 = (x721+((x722/x723)-x724));

    if (t159 != 9223372036767413191LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static int64_t x725 = -1LL;
	uint8_t x726 = UINT8_MAX;
	uint16_t x727 = 4U;
	static uint64_t x728 = 114706201LLU;

    t160 = (x725+((x726/x727)-x728));

    if (t160 != 18446744073594845477LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x733 = 21985U;
	static int64_t x734 = 18LL;
	static volatile int8_t x735 = -1;
	volatile int32_t x736 = -1;
	int64_t t161 = -202698947145LL;

    t161 = (x733+((x734/x735)-x736));

    if (t161 != 21968LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x737 = INT64_MIN;
	uint64_t x738 = 151LLU;
	uint32_t x739 = 65U;
	volatile int32_t x740 = -1;
	static uint64_t t162 = 263984089LLU;

    t162 = (x737+((x738/x739)-x740));

    if (t162 != 9223372036854775811LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int16_t x741 = -1;
	static uint32_t x743 = 1372708972U;
	uint32_t t163 = 1199745931U;

    t163 = (x741+((x742/x743)-x744));

    if (t163 != 4294967168U) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x750 = INT32_MIN;
	uint8_t x752 = UINT8_MAX;
	static int32_t t164 = 1433;

    t164 = (x749+((x750/x751)-x752));

    if (t164 != -33022) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x753 = UINT16_MAX;
	int8_t x754 = -20;
	int64_t x755 = INT64_MIN;
	uint8_t x756 = 48U;
	static volatile int64_t t165 = -3153499233314820327LL;

    t165 = (x753+((x754/x755)-x756));

    if (t165 != 65487LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x757 = INT8_MIN;
	uint16_t x758 = UINT16_MAX;
	volatile uint16_t x760 = UINT16_MAX;
	static volatile int64_t t166 = 20LL;

    t166 = (x757+((x758/x759)-x760));

    if (t166 != -65663LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x765 = INT16_MAX;
	int8_t x766 = INT8_MAX;
	uint32_t x768 = 423486U;
	static volatile uint32_t t167 = 57046U;

    t167 = (x765+((x766/x767)-x768));

    if (t167 != 4294576577U) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x769 = INT8_MAX;
	volatile uint8_t x770 = 0U;
	int16_t x771 = INT16_MIN;
	uint32_t x772 = 9U;
	uint32_t t168 = 539U;

    t168 = (x769+((x770/x771)-x772));

    if (t168 != 118U) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x773 = 0U;
	volatile uint8_t x774 = 2U;
	int32_t x776 = INT32_MAX;
	static int32_t t169 = -14;

    t169 = (x773+((x774/x775)-x776));

    if (t169 != -2147483647) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x781 = INT16_MAX;
	volatile int16_t x782 = INT16_MIN;
	uint32_t x784 = 1642U;
	uint32_t t170 = 154878U;

    t170 = (x781+((x782/x783)-x784));

    if (t170 != 31123U) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int32_t x786 = INT32_MAX;
	volatile int32_t t171 = -5;

    t171 = (x785+((x786/x787)-x788));

    if (t171 != 8421501) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int16_t x796 = -1;
	volatile int64_t t172 = 5386169235792LL;

    t172 = (x793+((x794/x795)-x796));

    if (t172 != -9223372036838749810LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x797 = -1LL;
	volatile int16_t x799 = -1;

    t173 = (x797+((x798/x799)-x800));

    if (t173 != 153478837LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x803 = -1;
	volatile int8_t x804 = INT8_MIN;
	int64_t t174 = -138899066553371LL;

    t174 = (x801+((x802/x803)-x804));

    if (t174 != 5898LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static int8_t x805 = -60;
	uint8_t x806 = UINT8_MAX;
	static uint8_t x807 = UINT8_MAX;
	volatile int32_t t175 = 1;

    t175 = (x805+((x806/x807)-x808));

    if (t175 != -58) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x813 = INT64_MIN;
	uint64_t x814 = UINT64_MAX;
	int64_t x815 = INT64_MAX;

    t176 = (x813+((x814/x815)-x816));

    if (t176 != 9223372036854775785LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x817 = -1;
	int16_t x818 = 1;
	volatile uint64_t t177 = 378343811860306310LLU;

    t177 = (x817+((x818/x819)-x820));

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x821 = INT16_MIN;
	int8_t x822 = -1;
	volatile int32_t x823 = INT32_MIN;
	volatile int8_t x824 = INT8_MAX;
	volatile int32_t t178 = 6315892;

    t178 = (x821+((x822/x823)-x824));

    if (t178 != -32895) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x825 = INT32_MAX;
	int64_t x827 = INT64_MIN;
	uint8_t x828 = UINT8_MAX;
	volatile int64_t t179 = 24LL;

    t179 = (x825+((x826/x827)-x828));

    if (t179 != 2147483392LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x833 = INT32_MIN;
	volatile uint32_t x834 = UINT32_MAX;
	int32_t x835 = -1;
	uint32_t t180 = 17514U;

    t180 = (x833+((x834/x835)-x836));

    if (t180 != 2147516417U) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int64_t x837 = 35834LL;
	static int8_t x838 = INT8_MAX;
	uint32_t x839 = UINT32_MAX;
	int64_t t181 = -240005514927291935LL;

    t181 = (x837+((x838/x839)-x840));

    if (t181 != 35838LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint64_t x841 = 4088744720213LLU;
	int16_t x842 = 7258;
	volatile int64_t x843 = INT64_MIN;
	static uint8_t x844 = 0U;
	volatile uint64_t t182 = 51LLU;

    t182 = (x841+((x842/x843)-x844));

    if (t182 != 4088744720213LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x845 = INT64_MAX;
	uint16_t x846 = 119U;
	uint16_t x848 = 4057U;
	int64_t t183 = 4243960833123301353LL;

    t183 = (x845+((x846/x847)-x848));

    if (t183 != 9223372036854771767LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x849 = UINT64_MAX;
	static uint64_t x850 = UINT64_MAX;
	volatile uint16_t x851 = 1U;
	int64_t x852 = -1LL;
	volatile uint64_t t184 = UINT64_MAX;

    t184 = (x849+((x850/x851)-x852));

    if (t184 != UINT64_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x854 = 0U;
	static int16_t x855 = INT16_MIN;
	volatile uint16_t x856 = 188U;
	volatile uint64_t t185 = 183824643706LLU;

    t185 = (x853+((x854/x855)-x856));

    if (t185 != 18446744073709551427LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x857 = UINT16_MAX;
	uint8_t x858 = 39U;
	uint64_t x859 = UINT64_MAX;

    t186 = (x857+((x858/x859)-x860));

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int8_t x861 = INT8_MIN;
	int16_t x862 = -6;
	int16_t x863 = INT16_MIN;
	static int64_t x864 = -1LL;
	int64_t t187 = -32511217620LL;

    t187 = (x861+((x862/x863)-x864));

    if (t187 != -127LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x865 = -1218334632124LL;
	static uint16_t x866 = UINT16_MAX;
	int8_t x867 = 5;
	static volatile int64_t t188 = 3642219611365036LL;

    t188 = (x865+((x866/x867)-x868));

    if (t188 != -1218334651784LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x869 = -1LL;
	int32_t x870 = INT32_MIN;
	int8_t x871 = INT8_MAX;
	static int16_t x872 = INT16_MAX;
	int64_t t189 = 495817059385LL;

    t189 = (x869+((x870/x871)-x872));

    if (t189 != -16942088LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x877 = UINT16_MAX;
	volatile int8_t x878 = INT8_MIN;
	static int32_t x879 = INT32_MAX;
	uint64_t x880 = 4712397448688LLU;
	uint64_t t190 = 65366958723LLU;

    t190 = (x877+((x878/x879)-x880));

    if (t190 != 18446739361312168463LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x881 = 0;
	int16_t x882 = 0;
	uint64_t x883 = 36953522084944115LLU;
	static volatile int16_t x884 = INT16_MAX;
	uint64_t t191 = 54429160692173LLU;

    t191 = (x881+((x882/x883)-x884));

    if (t191 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x886 = INT32_MIN;
	int32_t x887 = -251763;
	volatile int16_t x888 = INT16_MIN;

    t192 = (x885+((x886/x887)-x888));

    if (t192 != 41357LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x889 = UINT16_MAX;
	uint32_t x890 = 29U;
	int32_t x891 = INT32_MAX;
	static uint64_t x892 = 5822677711LLU;
	volatile uint64_t t193 = 88588297062LLU;

    t193 = (x889+((x890/x891)-x892));

    if (t193 != 18446744067886939440LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x893 = 1423890;
	volatile int8_t x894 = -9;
	uint64_t x895 = UINT64_MAX;
	volatile uint64_t t194 = 188461LLU;

    t194 = (x893+((x894/x895)-x896));

    if (t194 != 1391123LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x901 = 0;
	volatile uint8_t x902 = 0U;
	volatile int64_t x903 = INT64_MIN;
	uint64_t t195 = 6686927969LLU;

    t195 = (x901+((x902/x903)-x904));

    if (t195 != 1LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x906 = 18U;
	volatile int8_t x907 = 6;
	int32_t x908 = 137701;
	int32_t t196 = 0;

    t196 = (x905+((x906/x907)-x908));

    if (t196 != -72163) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x909 = UINT16_MAX;
	volatile int32_t x910 = INT32_MIN;
	int64_t x911 = INT64_MAX;
	volatile uint32_t x912 = 155584994U;
	volatile int64_t t197 = 1530079706LL;

    t197 = (x909+((x910/x911)-x912));

    if (t197 != -155519459LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int8_t x913 = INT8_MIN;
	int8_t x914 = INT8_MAX;
	uint64_t x916 = 1192461LLU;
	static uint64_t t198 = 37062731976LLU;

    t198 = (x913+((x914/x915)-x916));

    if (t198 != 18446744073708359027LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x917 = 572U;
	uint32_t x919 = 6U;
	int8_t x920 = INT8_MIN;
	static volatile int64_t t199 = 89143LL;

    t199 = (x917+((x918/x919)-x920));

    if (t199 != -2247829543136313LL) { NG(); } else { ; }
	
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

