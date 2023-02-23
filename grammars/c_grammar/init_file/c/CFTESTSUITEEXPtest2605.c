
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

static int16_t x4 = INT16_MIN;
int16_t x5 = INT16_MIN;
int64_t x7 = -1LL;
uint32_t x9 = 498800U;
uint64_t x15 = 16340218838993LLU;
static volatile int64_t t5 = 26LL;
volatile uint64_t t6 = 300018230538125LLU;
int16_t x29 = -7102;
uint8_t x37 = 10U;
uint8_t x42 = 42U;
int64_t t9 = -2356082LL;
int32_t x50 = -1;
int64_t x51 = INT64_MIN;
volatile int8_t x63 = INT8_MAX;
int32_t x65 = INT32_MIN;
volatile int16_t x75 = INT16_MIN;
int8_t x85 = 0;
int32_t x86 = INT32_MIN;
int32_t t19 = 7;
uint32_t x99 = UINT32_MAX;
int16_t x102 = INT16_MIN;
volatile int64_t t22 = 2126LL;
uint8_t x106 = UINT8_MAX;
int64_t x126 = INT64_MAX;
volatile int32_t t29 = -114;
volatile uint16_t x133 = UINT16_MAX;
volatile int16_t x141 = -1;
int64_t x142 = -1LL;
static int64_t t31 = 143289641732927427LL;
uint8_t x146 = 3U;
static int16_t x153 = INT16_MIN;
volatile int64_t t35 = -67001491LL;
uint8_t x161 = UINT8_MAX;
static volatile int32_t t36 = 1;
volatile int64_t t37 = 3LL;
int8_t x169 = INT8_MIN;
uint8_t x173 = UINT8_MAX;
int32_t x194 = INT32_MIN;
volatile uint8_t x195 = UINT8_MAX;
int8_t x199 = INT8_MIN;
uint8_t x205 = 51U;
int32_t x208 = INT32_MIN;
uint32_t t47 = 1700437549U;
int64_t x210 = INT64_MAX;
uint64_t t49 = 4LLU;
int64_t t50 = 666029033LL;
int16_t x227 = INT16_MIN;
static int64_t t52 = -11250774LL;
int32_t x232 = -1;
int16_t x238 = INT16_MIN;
volatile int32_t x239 = INT32_MIN;
int16_t x240 = 1;
int32_t x242 = INT32_MAX;
uint16_t x253 = 16369U;
static uint32_t x256 = 148703296U;
static int64_t t61 = 1043970993930966LL;
static volatile uint64_t t63 = 8275224144LLU;
uint16_t x281 = 2U;
uint64_t x283 = 30LLU;
int64_t x286 = INT64_MAX;
uint16_t x288 = 20U;
static uint64_t x290 = 129LLU;
uint32_t x304 = 3U;
uint32_t t71 = 60423U;
int32_t x306 = -952;
volatile int64_t t72 = -1269893095376214LL;
int16_t x310 = -415;
int16_t x311 = INT16_MIN;
static volatile uint32_t t73 = 11U;
int32_t t75 = 396;
volatile int64_t t78 = 35853919203LL;
uint8_t x337 = UINT8_MAX;
int32_t x342 = -43126867;
int8_t x357 = INT8_MIN;
uint16_t x359 = 268U;
volatile int64_t t85 = -6280477661LL;
uint64_t x365 = 0LLU;
static int8_t x372 = INT8_MIN;
uint64_t x379 = UINT64_MAX;
int16_t x387 = -12;
int64_t x388 = -1LL;
uint16_t x390 = UINT16_MAX;
uint64_t x396 = 29888LLU;
int8_t x406 = INT8_MIN;
volatile uint32_t t96 = 840216990U;
static volatile int32_t x409 = 296;
volatile int64_t x411 = 89689325277226LL;
int64_t t97 = -36336539024097617LL;
volatile int32_t x417 = 4;
static int16_t x419 = INT16_MAX;
static int32_t t99 = 142197;
int16_t x427 = 1183;
volatile uint64_t x428 = 59LLU;
volatile uint64_t t101 = 9891LLU;
uint64_t t102 = 135885659616870651LLU;
static int64_t t103 = 106237LL;
int8_t x439 = INT8_MIN;
volatile int16_t x450 = INT16_MIN;
int8_t x455 = 1;
int8_t x461 = INT8_MAX;
uint8_t x470 = 1U;
uint32_t x476 = UINT32_MAX;
int8_t x478 = INT8_MIN;
volatile int64_t t112 = -6LL;
int32_t x487 = -1;
uint64_t t114 = 30157184LLU;
uint64_t t115 = 3734LLU;
int32_t x497 = INT32_MAX;
uint16_t x507 = 0U;
uint64_t x511 = 5773910157LLU;
uint16_t x512 = 487U;
int64_t x524 = 110LL;
int64_t x531 = -984721744LL;
volatile int64_t x538 = 165700173687816LL;
uint32_t x550 = 3U;
int8_t x555 = -1;
volatile uint64_t t128 = UINT64_MAX;
int16_t x557 = 5049;
volatile int64_t x562 = -6653273288300LL;
volatile int64_t t130 = -6970605759430LL;
volatile uint32_t x572 = 58212U;
volatile int64_t t132 = 48299779LL;
uint64_t x574 = 1458963560LLU;
int8_t x577 = INT8_MIN;
volatile int64_t x579 = INT64_MIN;
int8_t x605 = INT8_MAX;
volatile uint8_t x608 = 3U;
uint64_t x615 = UINT64_MAX;
static uint32_t x618 = 386U;
static volatile uint64_t t144 = 16467258744LLU;
static uint32_t x621 = UINT32_MAX;
int8_t x628 = INT8_MIN;
int16_t x631 = -1;
volatile uint8_t x632 = UINT8_MAX;
volatile int64_t t148 = -3LL;
int8_t x643 = INT8_MIN;
uint64_t x644 = 13784808LLU;
int64_t x649 = -15214818LL;
int8_t x650 = -24;
static int32_t x655 = -3312;
uint64_t t153 = 434928LLU;
uint64_t t156 = 2180LLU;
uint32_t x677 = 325931925U;
volatile uint32_t x678 = UINT32_MAX;
volatile int64_t t159 = -415830337LL;
static int32_t x688 = -1;
uint32_t x694 = 142720596U;
uint32_t t161 = 110105818U;
int32_t x710 = INT32_MIN;
int16_t x715 = -1;
uint16_t x719 = UINT16_MAX;
volatile int8_t x726 = 1;
uint8_t x727 = UINT8_MAX;
static int32_t x729 = -3821;
int16_t x739 = INT16_MAX;
uint16_t x745 = UINT16_MAX;
uint16_t x748 = 191U;
static int32_t t175 = INT32_MIN;
int16_t x754 = 1;
uint32_t x760 = UINT32_MAX;
static volatile uint32_t x765 = 267U;
int16_t x768 = INT16_MIN;
uint16_t x772 = 803U;
volatile int8_t x781 = INT8_MIN;
static int16_t x783 = -1;
static int8_t x791 = -2;
volatile int64_t t184 = 0LL;
int64_t x796 = 14541198486LL;
volatile int64_t t186 = -85226433074LL;
int32_t x807 = -7311736;
int8_t x808 = -45;
uint32_t t191 = 200U;
uint8_t x835 = 24U;
uint64_t x836 = 61556LLU;
int16_t x837 = -6;
static int32_t x839 = INT32_MIN;
uint32_t x844 = 30839962U;
int64_t x845 = 700078554LL;
int64_t t197 = 7637734262LL;
uint64_t t198 = 151625LLU;
int16_t x853 = 3472;


void f0(void) {
    	uint8_t x1 = 2U;
	volatile int32_t x2 = INT32_MIN;
	static int32_t x3 = INT32_MIN;
	int32_t t0 = 1553;

    t0 = (x1+((x2^x3)%x4));

    if (t0 != 2) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x6 = 1;
	int64_t x8 = INT64_MIN;
	volatile int64_t t1 = 3204373908708953LL;

    t1 = (x5+((x6^x7)%x8));

    if (t1 != -32770LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x10 = 21352963971LL;
	int64_t x11 = -1LL;
	static uint16_t x12 = 231U;
	volatile int64_t t2 = -5665LL;

    t2 = (x9+((x10^x11)%x12));

    if (t2 != 498691LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = 7U;
	int8_t x14 = -1;
	volatile int8_t x16 = INT8_MIN;
	uint64_t t3 = 8244777081LLU;

    t3 = (x13+((x14^x15)%x16));

    if (t3 != 18446727733490712629LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x17 = -1;
	uint32_t x18 = 211078902U;
	int64_t x19 = INT64_MAX;
	int64_t x20 = 5593976LL;
	volatile int64_t t4 = 10635346973LL;

    t4 = (x17+((x18^x19)%x20));

    if (t4 != 636592LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = INT8_MIN;
	static int8_t x22 = 9;
	int64_t x23 = -1540004434LL;
	int8_t x24 = INT8_MIN;

    t5 = (x21+((x22^x23)%x24));

    if (t5 != -217LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = INT8_MAX;
	volatile uint64_t x26 = 0LLU;
	uint16_t x27 = 27U;
	uint8_t x28 = 10U;

    t6 = (x25+((x26^x27)%x28));

    if (t6 != 134LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x30 = 14072;
	int64_t x31 = -55417274544170930LL;
	static int32_t x32 = INT32_MIN;
	static int64_t t7 = -962613055869LL;

    t7 = (x29+((x30^x31)%x32));

    if (t7 != -866135304LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x38 = UINT64_MAX;
	uint32_t x39 = 85U;
	uint64_t x40 = UINT64_MAX;
	uint64_t t8 = 21633449188439497LLU;

    t8 = (x37+((x38^x39)%x40));

    if (t8 != 18446744073709551540LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x41 = 13903U;
	uint32_t x43 = UINT32_MAX;
	int64_t x44 = INT64_MIN;

    t9 = (x41+((x42^x43)%x44));

    if (t9 != 4294981156LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x45 = 17263;
	int64_t x46 = INT64_MAX;
	int64_t x47 = INT64_MIN;
	static uint64_t x48 = 30595LLU;
	uint64_t t10 = 986021212567083829LLU;

    t10 = (x45+((x46^x47)%x48));

    if (t10 != 23028LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x49 = INT16_MIN;
	uint16_t x52 = UINT16_MAX;
	int64_t t11 = 3885557979733LL;

    t11 = (x49+((x50^x51)%x52));

    if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x57 = UINT64_MAX;
	uint32_t x58 = UINT32_MAX;
	int16_t x59 = INT16_MIN;
	int16_t x60 = -2;
	uint64_t t12 = 793146941951709895LLU;

    t12 = (x57+((x58^x59)%x60));

    if (t12 != 32766LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x61 = 6648;
	volatile uint32_t x62 = UINT32_MAX;
	int8_t x64 = INT8_MAX;
	volatile uint32_t t13 = 790707U;

    t13 = (x61+((x62^x63)%x64));

    if (t13 != 6663U) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x66 = -1LL;
	int32_t x67 = INT32_MIN;
	int16_t x68 = INT16_MIN;
	int64_t t14 = -3487239972891LL;

    t14 = (x65+((x66^x67)%x68));

    if (t14 != -2147450881LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x69 = UINT8_MAX;
	int32_t x70 = -3699593;
	volatile int16_t x71 = 95;
	uint64_t x72 = 763005357462015LLU;
	static volatile uint64_t t15 = 383510LLU;

    t15 = (x69+((x70^x71)%x72));

    if (t15 != 326551704177559LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x73 = INT64_MAX;
	volatile uint8_t x74 = 1U;
	volatile uint16_t x76 = 115U;
	volatile int64_t t16 = -2LL;

    t16 = (x73+((x74^x75)%x76));

    if (t16 != 9223372036854775700LL) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint32_t x77 = 2992284U;
	uint8_t x78 = 11U;
	static volatile int64_t x79 = -115751LL;
	uint8_t x80 = UINT8_MAX;
	volatile int64_t t17 = 3384363LL;

    t17 = (x77+((x78^x79)%x80));

    if (t17 != 2992041LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x81 = INT64_MAX;
	int32_t x82 = INT32_MAX;
	int32_t x83 = -7388172;
	int16_t x84 = INT16_MIN;
	volatile int64_t t18 = 42390735431180LL;

    t18 = (x81+((x82^x83)%x84));

    if (t18 != 9223372036854758410LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x87 = INT16_MAX;
	int32_t x88 = INT32_MIN;

    t19 = (x85+((x86^x87)%x88));

    if (t19 != -2147450881) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x89 = INT8_MIN;
	volatile int64_t x90 = 111542LL;
	static int8_t x91 = INT8_MIN;
	int32_t x92 = -1734;
	int64_t t20 = 728LL;

    t20 = (x89+((x90^x91)%x92));

    if (t20 != -714LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x97 = INT32_MIN;
	static int8_t x98 = INT8_MIN;
	int16_t x100 = INT16_MIN;
	static volatile uint32_t t21 = 58795099U;

    t21 = (x97+((x98^x99)%x100));

    if (t21 != 2147483775U) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x101 = -1;
	int64_t x103 = INT64_MIN;
	uint8_t x104 = 1U;

    t22 = (x101+((x102^x103)%x104));

    if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint32_t x105 = 15U;
	volatile int64_t x107 = 40LL;
	static uint64_t x108 = 247338341430657334LLU;
	volatile uint64_t t23 = 3398224567LLU;

    t23 = (x105+((x106^x107)%x108));

    if (t23 != 230LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x109 = 15;
	uint8_t x110 = 0U;
	static uint32_t x111 = UINT32_MAX;
	int16_t x112 = 784;
	volatile uint32_t t24 = 43145U;

    t24 = (x109+((x110^x111)%x112));

    if (t24 != 494U) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x113 = INT8_MAX;
	int64_t x114 = 1080LL;
	static uint8_t x115 = UINT8_MAX;
	uint64_t x116 = 554147924LLU;
	uint64_t t25 = 379584370236520709LLU;

    t25 = (x113+((x114^x115)%x116));

    if (t25 != 1350LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x117 = 938;
	volatile int64_t x118 = INT64_MAX;
	volatile uint8_t x119 = UINT8_MAX;
	uint64_t x120 = 7507094854938619LLU;
	volatile uint64_t t26 = 642911LLU;

    t26 = (x117+((x118^x119)%x120));

    if (t26 != 4659554990152358LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x121 = UINT32_MAX;
	uint8_t x122 = 0U;
	volatile uint8_t x123 = UINT8_MAX;
	uint32_t x124 = 8U;
	volatile uint32_t t27 = 26U;

    t27 = (x121+((x122^x123)%x124));

    if (t27 != 6U) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x125 = UINT64_MAX;
	static uint32_t x127 = 4318U;
	int16_t x128 = INT16_MIN;
	uint64_t t28 = 452859440382418753LLU;

    t28 = (x125+((x126^x127)%x128));

    if (t28 != 28448LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int16_t x129 = 3968;
	static volatile uint16_t x130 = 158U;
	int8_t x131 = INT8_MAX;
	int32_t x132 = 1323974;

    t29 = (x129+((x130^x131)%x132));

    if (t29 != 4193) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x134 = -1LL;
	static int8_t x135 = INT8_MIN;
	int64_t x136 = -1LL;
	static volatile int64_t t30 = 1511946520911LL;

    t30 = (x133+((x134^x135)%x136));

    if (t30 != 65535LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x143 = INT16_MIN;
	volatile uint16_t x144 = 475U;

    t31 = (x141+((x142^x143)%x144));

    if (t31 != 466LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x145 = INT16_MAX;
	int8_t x147 = 1;
	int64_t x148 = INT64_MAX;
	static volatile int64_t t32 = -24538966578426885LL;

    t32 = (x145+((x146^x147)%x148));

    if (t32 != 32769LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x149 = -4591721322919LL;
	static uint64_t x150 = 32000058LLU;
	int16_t x151 = 0;
	volatile uint32_t x152 = 170U;
	volatile uint64_t t33 = 436580554021065LLU;

    t33 = (x149+((x150^x151)%x152));

    if (t33 != 18446739481988228805LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint64_t x154 = UINT64_MAX;
	static int32_t x155 = -1;
	volatile int32_t x156 = 36631963;
	uint64_t t34 = 2279LLU;

    t34 = (x153+((x154^x155)%x156));

    if (t34 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x157 = -1LL;
	uint8_t x158 = UINT8_MAX;
	int32_t x159 = 1;
	int16_t x160 = INT16_MIN;

    t35 = (x157+((x158^x159)%x160));

    if (t35 != 253LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x162 = -1;
	int32_t x163 = -1;
	static int16_t x164 = INT16_MAX;

    t36 = (x161+((x162^x163)%x164));

    if (t36 != 255) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x165 = -871283816627LL;
	static volatile int16_t x166 = -1;
	volatile int64_t x167 = INT64_MAX;
	int64_t x168 = -54020425785253LL;

    t37 = (x165+((x166^x167)%x168));

    if (t37 != -33450416065721LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x170 = INT16_MIN;
	static volatile uint16_t x171 = UINT16_MAX;
	static int64_t x172 = INT64_MIN;
	volatile int64_t t38 = -490426418749869LL;

    t38 = (x169+((x170^x171)%x172));

    if (t38 != -32897LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x174 = 14300667022380353LLU;
	int16_t x175 = -1;
	int32_t x176 = -50;
	volatile uint64_t t39 = 108131510657LLU;

    t39 = (x173+((x174^x175)%x176));

    if (t39 != 18432443406687171517LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x177 = 1;
	int8_t x178 = -10;
	int64_t x179 = INT64_MIN;
	volatile int64_t x180 = -650808041153939260LL;
	volatile int64_t t40 = -12890984939895LL;

    t40 = (x177+((x178^x179)%x180));

    if (t40 != 112059460699626159LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x181 = -746;
	uint64_t x182 = 63728117LLU;
	int32_t x183 = 99440;
	volatile int64_t x184 = -1518LL;
	volatile uint64_t t41 = 49239826278661LLU;

    t41 = (x181+((x182^x183)%x184));

    if (t41 != 63826587LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint16_t x185 = 492U;
	int8_t x186 = INT8_MAX;
	uint8_t x187 = UINT8_MAX;
	static uint64_t x188 = 5911447093030550946LLU;
	volatile uint64_t t42 = 3520LLU;

    t42 = (x185+((x186^x187)%x188));

    if (t42 != 620LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x189 = INT8_MAX;
	static volatile int8_t x190 = -1;
	int32_t x191 = INT32_MIN;
	int8_t x192 = -1;
	static volatile int32_t t43 = -109434617;

    t43 = (x189+((x190^x191)%x192));

    if (t43 != 127) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x193 = -4606;
	int8_t x196 = INT8_MAX;
	volatile int32_t t44 = -209288807;

    t44 = (x193+((x194^x195)%x196));

    if (t44 != -4613) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x197 = -14000;
	static volatile uint8_t x198 = UINT8_MAX;
	volatile int64_t x200 = 138LL;
	int64_t t45 = -1248987745LL;

    t45 = (x197+((x198^x199)%x200));

    if (t45 != -14129LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x201 = UINT8_MAX;
	int8_t x202 = -1;
	int8_t x203 = INT8_MIN;
	static int32_t x204 = INT32_MAX;
	int32_t t46 = 1853;

    t46 = (x201+((x202^x203)%x204));

    if (t46 != 382) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x206 = -638808;
	static uint32_t x207 = UINT32_MAX;

    t47 = (x205+((x206^x207)%x208));

    if (t47 != 638858U) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x209 = 4985U;
	int64_t x211 = 15803908181LL;
	uint8_t x212 = 6U;
	static volatile int64_t t48 = 197LL;

    t48 = (x209+((x210^x211)%x212));

    if (t48 != 4987LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile uint8_t x213 = 4U;
	uint64_t x214 = 291787LLU;
	uint8_t x215 = UINT8_MAX;
	volatile int8_t x216 = INT8_MIN;

    t49 = (x213+((x214^x215)%x216));

    if (t49 != 291640LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint8_t x217 = 121U;
	int32_t x218 = -2245;
	int64_t x219 = INT64_MIN;
	int16_t x220 = -1;

    t50 = (x217+((x218^x219)%x220));

    if (t50 != 121LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x221 = INT8_MAX;
	int64_t x222 = INT64_MAX;
	int32_t x223 = INT32_MIN;
	static int8_t x224 = -1;
	volatile int64_t t51 = -8499LL;

    t51 = (x221+((x222^x223)%x224));

    if (t51 != 127LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int32_t x225 = -3674667;
	int64_t x226 = -1LL;
	static int8_t x228 = INT8_MIN;

    t52 = (x225+((x226^x227)%x228));

    if (t52 != -3674540LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint8_t x229 = 0U;
	volatile int16_t x230 = 51;
	volatile int64_t x231 = -13938397LL;
	volatile int64_t t53 = 2954776879LL;

    t53 = (x229+((x230^x231)%x232));

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x233 = 1183986058773LL;
	volatile int32_t x234 = -4;
	static int16_t x235 = -1;
	int8_t x236 = INT8_MAX;
	static int64_t t54 = -1572755LL;

    t54 = (x233+((x234^x235)%x236));

    if (t54 != 1183986058776LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x237 = INT32_MIN;
	int32_t t55 = INT32_MIN;

    t55 = (x237+((x238^x239)%x240));

    if (t55 != INT32_MIN) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x241 = 11841LLU;
	int32_t x243 = INT32_MAX;
	static volatile int16_t x244 = INT16_MAX;
	static volatile uint64_t t56 = 180922LLU;

    t56 = (x241+((x242^x243)%x244));

    if (t56 != 11841LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x245 = -230065LL;
	int16_t x246 = INT16_MAX;
	int16_t x247 = 5771;
	int64_t x248 = INT64_MIN;
	int64_t t57 = 193001208196381232LL;

    t57 = (x245+((x246^x247)%x248));

    if (t57 != -203069LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x249 = UINT64_MAX;
	int16_t x250 = INT16_MIN;
	int8_t x251 = -5;
	int32_t x252 = INT32_MAX;
	uint64_t t58 = 6253228448728661LLU;

    t58 = (x249+((x250^x251)%x252));

    if (t58 != 32762LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x254 = -1LL;
	int8_t x255 = INT8_MIN;
	volatile int64_t t59 = 0LL;

    t59 = (x253+((x254^x255)%x256));

    if (t59 != 16496LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint8_t x257 = 60U;
	static int8_t x258 = -1;
	int16_t x259 = -1;
	volatile int16_t x260 = -1;
	int32_t t60 = -113027;

    t60 = (x257+((x258^x259)%x260));

    if (t60 != 60) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x261 = -1;
	int64_t x262 = INT64_MIN;
	int32_t x263 = 4407362;
	int64_t x264 = INT64_MIN;

    t61 = (x261+((x262^x263)%x264));

    if (t61 != -9223372036850368447LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x265 = -1;
	static int8_t x266 = -1;
	int64_t x267 = -168019474856387802LL;
	int32_t x268 = -1;
	static int64_t t62 = 1041836LL;

    t62 = (x265+((x266^x267)%x268));

    if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x269 = -371;
	uint64_t x270 = 34974252524222LLU;
	volatile int32_t x271 = INT32_MAX;
	uint32_t x272 = 70562U;

    t63 = (x269+((x270^x271)%x272));

    if (t63 != 65218LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint16_t x273 = 253U;
	volatile uint16_t x274 = 17706U;
	uint8_t x275 = UINT8_MAX;
	volatile uint16_t x276 = 6068U;
	volatile int32_t t64 = 124760;

    t64 = (x273+((x274^x275)%x276));

    if (t64 != 5994) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x277 = 1;
	int32_t x278 = INT32_MIN;
	static uint16_t x279 = UINT16_MAX;
	int16_t x280 = -1;
	int32_t t65 = 1;

    t65 = (x277+((x278^x279)%x280));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int16_t x282 = 15;
	int32_t x284 = -1;
	uint64_t t66 = 2612318450917086LLU;

    t66 = (x281+((x282^x283)%x284));

    if (t66 != 19LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static int32_t x285 = INT32_MIN;
	int32_t x287 = -1;
	volatile int64_t t67 = 31825971620726LL;

    t67 = (x285+((x286^x287)%x288));

    if (t67 != -2147483656LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x289 = INT32_MIN;
	int64_t x291 = -1261LL;
	static int16_t x292 = -87;
	uint64_t t68 = 1712765354887LLU;

    t68 = (x289+((x290^x291)%x292));

    if (t68 != 18446744071562066834LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x293 = UINT8_MAX;
	uint32_t x294 = 9U;
	uint16_t x295 = 0U;
	static int64_t x296 = INT64_MIN;
	static volatile int64_t t69 = 1663093LL;

    t69 = (x293+((x294^x295)%x296));

    if (t69 != 264LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x297 = 129LL;
	int8_t x298 = INT8_MAX;
	static int16_t x299 = 3124;
	int32_t x300 = INT32_MIN;
	static int64_t t70 = -6262284LL;

    t70 = (x297+((x298^x299)%x300));

    if (t70 != 3276LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x301 = 4U;
	volatile uint32_t x302 = 357599467U;
	int8_t x303 = INT8_MIN;

    t71 = (x301+((x302^x303)%x304));

    if (t71 != 6U) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x305 = 24U;
	int64_t x307 = INT64_MAX;
	int8_t x308 = -1;

    t72 = (x305+((x306^x307)%x308));

    if (t72 != 24LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint32_t x309 = UINT32_MAX;
	volatile int32_t x312 = INT32_MIN;

    t73 = (x309+((x310^x311)%x312));

    if (t73 != 32352U) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x313 = -4;
	uint32_t x314 = 1464U;
	static uint16_t x315 = UINT16_MAX;
	uint8_t x316 = 1U;
	static uint32_t t74 = 1059U;

    t74 = (x313+((x314^x315)%x316));

    if (t74 != 4294967292U) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int32_t x317 = -809078116;
	volatile int8_t x318 = 1;
	int8_t x319 = -1;
	volatile uint16_t x320 = 773U;

    t75 = (x317+((x318^x319)%x320));

    if (t75 != -809078118) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x321 = -44878;
	int64_t x322 = 1331076723047062951LL;
	static volatile uint16_t x323 = UINT16_MAX;
	int16_t x324 = INT16_MIN;
	int64_t t76 = 1LL;

    t76 = (x321+((x322^x323)%x324));

    if (t76 != -36086LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x325 = 39U;
	uint32_t x326 = UINT32_MAX;
	uint32_t x327 = 8789914U;
	volatile int16_t x328 = -1;
	static volatile uint32_t t77 = 25784800U;

    t77 = (x325+((x326^x327)%x328));

    if (t77 != 4286177420U) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x329 = -1;
	int64_t x330 = INT64_MIN;
	static int32_t x331 = -49033;
	static int16_t x332 = INT16_MAX;

    t78 = (x329+((x330^x331)%x332));

    if (t78 != 16508LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint16_t x333 = 12855U;
	static int64_t x334 = -840470911761LL;
	volatile int16_t x335 = INT16_MIN;
	static uint32_t x336 = 232387U;
	volatile int64_t t79 = -99772324585964LL;

    t79 = (x333+((x334^x335)%x336));

    if (t79 != 101276LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x338 = 1132LL;
	volatile int64_t x339 = INT64_MAX;
	static int32_t x340 = 212393;
	volatile int64_t t80 = 8071LL;

    t80 = (x337+((x338^x339)%x340));

    if (t80 != 49401LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x341 = -1;
	static int32_t x343 = INT32_MAX;
	uint32_t x344 = UINT32_MAX;
	volatile uint32_t t81 = 702U;

    t81 = (x341+((x342^x343)%x344));

    if (t81 != 2190610513U) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x345 = 14835;
	int8_t x346 = INT8_MAX;
	uint16_t x347 = 0U;
	int64_t x348 = INT64_MAX;
	volatile int64_t t82 = 19854947LL;

    t82 = (x345+((x346^x347)%x348));

    if (t82 != 14962LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x349 = 51057512969LLU;
	int64_t x350 = INT64_MAX;
	int32_t x351 = INT32_MAX;
	static uint8_t x352 = 8U;
	volatile uint64_t t83 = 764004794392191LLU;

    t83 = (x349+((x350^x351)%x352));

    if (t83 != 51057512969LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x353 = INT8_MIN;
	static int16_t x354 = INT16_MAX;
	uint64_t x355 = 434921LLU;
	int64_t x356 = INT64_MIN;
	volatile uint64_t t84 = 88964231LLU;

    t84 = (x353+((x354^x355)%x356));

    if (t84 != 449686LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x358 = UINT16_MAX;
	volatile int64_t x360 = -1LL;

    t85 = (x357+((x358^x359)%x360));

    if (t85 != -128LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint16_t x366 = 2U;
	static uint16_t x367 = 12U;
	uint64_t x368 = 304LLU;
	uint64_t t86 = 381051720284567929LLU;

    t86 = (x365+((x366^x367)%x368));

    if (t86 != 14LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x369 = 0;
	volatile uint8_t x370 = UINT8_MAX;
	int32_t x371 = -1;
	volatile int32_t t87 = 24;

    t87 = (x369+((x370^x371)%x372));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint16_t x373 = 1597U;
	int32_t x374 = -8524863;
	int8_t x375 = INT8_MIN;
	int64_t x376 = 68394078230223599LL;
	volatile int64_t t88 = -446495412LL;

    t88 = (x373+((x374^x375)%x376));

    if (t88 != 8526462LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x377 = 63921615707493LLU;
	int16_t x378 = -1;
	static volatile uint32_t x380 = 483714U;
	uint64_t t89 = 2519252378921645LLU;

    t89 = (x377+((x378^x379)%x380));

    if (t89 != 63921615707493LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x381 = 7520798778194478528LLU;
	volatile int16_t x382 = 1;
	int32_t x383 = -207;
	static int8_t x384 = INT8_MAX;
	volatile uint64_t t90 = 757869520429764856LLU;

    t90 = (x381+((x382^x383)%x384));

    if (t90 != 7520798778194478447LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x385 = 48U;
	int16_t x386 = 0;
	int64_t t91 = 875241873720218LL;

    t91 = (x385+((x386^x387)%x388));

    if (t91 != 48LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x389 = INT16_MIN;
	int16_t x391 = INT16_MAX;
	uint16_t x392 = UINT16_MAX;
	static volatile int32_t t92 = 4871;

    t92 = (x389+((x390^x391)%x392));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x393 = -6045920242LL;
	volatile int16_t x394 = INT16_MAX;
	int8_t x395 = 0;
	uint64_t t93 = 30248502486896LLU;

    t93 = (x393+((x394^x395)%x396));

    if (t93 != 18446744067663634253LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x397 = 654U;
	uint64_t x398 = 1057990535913706823LLU;
	static uint8_t x399 = 3U;
	static volatile uint32_t x400 = 1841384585U;
	volatile uint64_t t94 = 180320537816290LLU;

    t94 = (x397+((x398^x399)%x400));

    if (t94 != 1611875804LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x401 = -1;
	int32_t x402 = INT32_MAX;
	int64_t x403 = INT64_MAX;
	static uint16_t x404 = 17523U;
	volatile int64_t t95 = 510498484578722903LL;

    t95 = (x401+((x402^x403)%x404));

    if (t95 != 10301LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x405 = -1;
	volatile int16_t x407 = 1;
	uint32_t x408 = UINT32_MAX;

    t96 = (x405+((x406^x407)%x408));

    if (t96 != 4294967168U) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x410 = INT64_MIN;
	int16_t x412 = -118;

    t97 = (x409+((x410^x411)%x412));

    if (t97 != 276LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x413 = INT32_MIN;
	volatile uint64_t x414 = 0LLU;
	int16_t x415 = INT16_MAX;
	int8_t x416 = -10;
	static volatile uint64_t t98 = 93747772371064LLU;

    t98 = (x413+((x414^x415)%x416));

    if (t98 != 18446744071562100735LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x418 = INT32_MIN;
	volatile int16_t x420 = -1;

    t99 = (x417+((x418^x419)%x420));

    if (t99 != 4) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int32_t x421 = -15928732;
	int16_t x422 = INT16_MIN;
	uint16_t x423 = 194U;
	volatile uint8_t x424 = UINT8_MAX;
	volatile int32_t t100 = -4816817;

    t100 = (x421+((x422^x423)%x424));

    if (t100 != -15928921) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x425 = INT8_MIN;
	volatile int64_t x426 = 14295723126908279LL;

    t101 = (x425+((x426^x427)%x428));

    if (t101 != 18446744073709551536LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x429 = INT16_MAX;
	volatile uint64_t x430 = 105718781912247310LLU;
	int16_t x431 = INT16_MAX;
	int32_t x432 = -1;

    t102 = (x429+((x430^x431)%x432));

    if (t102 != 105718781912257520LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x433 = INT8_MAX;
	int64_t x434 = INT64_MAX;
	int64_t x435 = INT64_MAX;
	static volatile int64_t x436 = -1LL;

    t103 = (x433+((x434^x435)%x436));

    if (t103 != 127LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x437 = 14;
	int32_t x438 = INT32_MAX;
	uint64_t x440 = UINT64_MAX;
	volatile uint64_t t104 = 12109869124165878LLU;

    t104 = (x437+((x438^x439)%x440));

    if (t104 != 18446744071562068109LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x441 = 0;
	volatile int16_t x442 = -125;
	uint32_t x443 = UINT32_MAX;
	uint32_t x444 = UINT32_MAX;
	static volatile uint32_t t105 = 19U;

    t105 = (x441+((x442^x443)%x444));

    if (t105 != 124U) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x445 = -1;
	static int64_t x446 = 0LL;
	int64_t x447 = 27644LL;
	static int32_t x448 = INT32_MAX;
	int64_t t106 = 4374212605811LL;

    t106 = (x445+((x446^x447)%x448));

    if (t106 != 27643LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x449 = -1;
	int64_t x451 = INT64_MIN;
	volatile uint64_t x452 = 3050108534852095LLU;
	uint64_t t107 = 1310800085LLU;

    t107 = (x449+((x450^x451)%x452));

    if (t107 != 2893935996859854LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x453 = 0;
	int32_t x454 = INT32_MIN;
	volatile int16_t x456 = -1;
	volatile int32_t t108 = -733216180;

    t108 = (x453+((x454^x455)%x456));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x462 = -42234863;
	int32_t x463 = INT32_MIN;
	int64_t x464 = INT64_MAX;
	int64_t t109 = 921616929LL;

    t109 = (x461+((x462^x463)%x464));

    if (t109 != 2105248912LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static int16_t x469 = INT16_MAX;
	static int8_t x471 = INT8_MIN;
	int8_t x472 = -34;
	int32_t t110 = -878;

    t110 = (x469+((x470^x471)%x472));

    if (t110 != 32742) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x473 = -22;
	volatile int16_t x474 = -1749;
	uint32_t x475 = UINT32_MAX;
	uint32_t t111 = 20967U;

    t111 = (x473+((x474^x475)%x476));

    if (t111 != 1726U) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x477 = INT8_MAX;
	static int16_t x479 = -1;
	int64_t x480 = -1LL;

    t112 = (x477+((x478^x479)%x480));

    if (t112 != 127LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint32_t x481 = UINT32_MAX;
	int32_t x482 = INT32_MIN;
	static int8_t x483 = INT8_MIN;
	uint16_t x484 = 306U;
	static uint32_t t113 = UINT32_MAX;

    t113 = (x481+((x482^x483)%x484));

    if (t113 != UINT32_MAX) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x485 = 50931004026957792LLU;
	uint64_t x486 = 1639177883LLU;
	uint8_t x488 = 62U;

    t114 = (x485+((x486^x487)%x488));

    if (t114 != 50931004026957810LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint8_t x489 = 100U;
	uint64_t x490 = 4093829LLU;
	int8_t x491 = INT8_MIN;
	uint64_t x492 = 8471563285124LLU;

    t115 = (x489+((x490^x491)%x492));

    if (t115 != 8207544084133LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x498 = INT8_MIN;
	uint32_t x499 = 4207U;
	uint32_t x500 = 15152281U;
	volatile uint32_t t116 = 469U;

    t116 = (x497+((x498^x499)%x500));

    if (t116 != 2154351307U) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x501 = INT64_MIN;
	int32_t x502 = -10089699;
	int8_t x503 = INT8_MIN;
	static volatile int64_t x504 = -51781LL;
	volatile int64_t t117 = -89975089186LL;

    t117 = (x501+((x502^x503)%x504));

    if (t117 != -9223372036854731693LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x505 = INT8_MIN;
	int32_t x506 = INT32_MAX;
	uint16_t x508 = 573U;
	volatile int32_t t118 = 906;

    t118 = (x505+((x506^x507)%x508));

    if (t118 != 422) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x509 = 401069;
	int16_t x510 = -1;
	volatile uint64_t t119 = 30871050751951LLU;

    t119 = (x509+((x510^x511)%x512));

    if (t119 != 401183LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint32_t x513 = 1240205042U;
	uint64_t x514 = 1368103563LLU;
	volatile int8_t x515 = -1;
	uint32_t x516 = UINT32_MAX;
	volatile uint64_t t120 = 64144LLU;

    t120 = (x513+((x514^x515)%x516));

    if (t120 != 4167068774LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x521 = INT8_MAX;
	int16_t x522 = -1;
	uint32_t x523 = 15U;
	int64_t t121 = -100124095603LL;

    t121 = (x521+((x522^x523)%x524));

    if (t121 != 137LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x529 = 0;
	int16_t x530 = -1;
	volatile int64_t x532 = 1196214600193577799LL;
	static volatile int64_t t122 = -1005335664LL;

    t122 = (x529+((x530^x531)%x532));

    if (t122 != 984721743LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t x533 = INT32_MIN;
	uint32_t x534 = 1U;
	int8_t x535 = INT8_MIN;
	int64_t x536 = INT64_MIN;
	static volatile int64_t t123 = -22498806LL;

    t123 = (x533+((x534^x535)%x536));

    if (t123 != 2147483521LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x537 = INT64_MIN;
	static volatile uint32_t x539 = 19316U;
	uint8_t x540 = UINT8_MAX;
	volatile int64_t t124 = -100LL;

    t124 = (x537+((x538^x539)%x540));

    if (t124 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint32_t x541 = 10U;
	uint8_t x542 = 1U;
	uint64_t x543 = 16925266681LLU;
	uint16_t x544 = 7U;
	uint64_t t125 = 44LLU;

    t125 = (x541+((x542^x543)%x544));

    if (t125 != 10LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint16_t x545 = 7466U;
	static int8_t x546 = -1;
	int16_t x547 = INT16_MAX;
	int64_t x548 = INT64_MAX;
	int64_t t126 = -2101813932952LL;

    t126 = (x545+((x546^x547)%x548));

    if (t126 != -25302LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x549 = 1487;
	int32_t x551 = INT32_MAX;
	int32_t x552 = -181201;
	volatile uint32_t t127 = 348U;

    t127 = (x549+((x550^x551)%x552));

    if (t127 != 2147485131U) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x553 = UINT64_MAX;
	volatile uint16_t x554 = 421U;
	static int32_t x556 = -1;

    t128 = (x553+((x554^x555)%x556));

    if (t128 != UINT64_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x558 = -1LL;
	int16_t x559 = INT16_MIN;
	static int32_t x560 = INT32_MIN;
	int64_t t129 = 14LL;

    t129 = (x557+((x558^x559)%x560));

    if (t129 != 37816LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x561 = -9663147886LL;
	static volatile uint16_t x563 = UINT16_MAX;
	volatile int8_t x564 = -1;

    t130 = (x561+((x562^x563)%x564));

    if (t130 != -9663147886LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x565 = -1;
	uint32_t x566 = 74276U;
	volatile int64_t x567 = -255LL;
	int8_t x568 = -21;
	int64_t t131 = 928LL;

    t131 = (x565+((x566^x567)%x568));

    if (t131 != -15LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint16_t x569 = UINT16_MAX;
	int8_t x570 = -23;
	int64_t x571 = -2436LL;

    t132 = (x569+((x570^x571)%x572));

    if (t132 != 67988LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x573 = -1;
	static volatile int8_t x575 = 48;
	int8_t x576 = 3;
	uint64_t t133 = 905LLU;

    t133 = (x573+((x574^x575)%x576));

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x578 = UINT8_MAX;
	volatile int32_t x580 = -26;
	int64_t t134 = -8813352193LL;

    t134 = (x577+((x578^x579)%x580));

    if (t134 != -141LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x581 = -1;
	uint8_t x582 = 89U;
	int16_t x583 = -1;
	static int64_t x584 = -82LL;
	int64_t t135 = 3530LL;

    t135 = (x581+((x582^x583)%x584));

    if (t135 != -9LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x585 = UINT32_MAX;
	volatile uint8_t x586 = 17U;
	volatile int32_t x587 = -22319133;
	static uint8_t x588 = 39U;
	static uint32_t t136 = 246U;

    t136 = (x585+((x586^x587)%x588));

    if (t136 != 4294967292U) { NG(); } else { ; }
	
}

void f137(void) {
    	static int32_t x589 = INT32_MIN;
	int16_t x590 = INT16_MAX;
	int32_t x591 = INT32_MAX;
	int8_t x592 = -1;
	volatile int32_t t137 = INT32_MIN;

    t137 = (x589+((x590^x591)%x592));

    if (t137 != INT32_MIN) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x593 = INT8_MAX;
	uint32_t x594 = UINT32_MAX;
	int64_t x595 = INT64_MIN;
	static volatile int8_t x596 = -1;
	volatile int64_t t138 = 1471752671831976558LL;

    t138 = (x593+((x594^x595)%x596));

    if (t138 != 127LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x597 = UINT8_MAX;
	static uint8_t x598 = 2U;
	int32_t x599 = -1;
	static int64_t x600 = 42824731397LL;
	int64_t t139 = 799739643LL;

    t139 = (x597+((x598^x599)%x600));

    if (t139 != 252LL) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int64_t x601 = 47623566607002LL;
	static volatile int32_t x602 = -1;
	int64_t x603 = INT64_MAX;
	int8_t x604 = 8;
	int64_t t140 = 390509618LL;

    t140 = (x601+((x602^x603)%x604));

    if (t140 != 47623566607002LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x606 = INT64_MIN;
	int64_t x607 = INT64_MIN;
	volatile int64_t t141 = 46094803624619LL;

    t141 = (x605+((x606^x607)%x608));

    if (t141 != 127LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int16_t x609 = INT16_MIN;
	uint16_t x610 = 14U;
	int64_t x611 = 8799LL;
	static volatile int64_t x612 = INT64_MIN;
	static volatile int64_t t142 = -7LL;

    t142 = (x609+((x610^x611)%x612));

    if (t142 != -23983LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x613 = 24U;
	static int16_t x614 = INT16_MIN;
	int16_t x616 = INT16_MIN;
	static volatile uint64_t t143 = 179513894LLU;

    t143 = (x613+((x614^x615)%x616));

    if (t143 != 32791LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x617 = INT16_MIN;
	uint64_t x619 = 8407260051LLU;
	static int64_t x620 = -844069029554361LL;

    t144 = (x617+((x618^x619)%x620));

    if (t144 != 8407226897LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x622 = UINT16_MAX;
	volatile uint64_t x623 = UINT64_MAX;
	volatile int64_t x624 = -103627615902LL;
	uint64_t t145 = 41946726LLU;

    t145 = (x621+((x622^x623)%x624));

    if (t145 != 107922517661LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x625 = 0U;
	uint64_t x626 = UINT64_MAX;
	int32_t x627 = INT32_MIN;
	uint64_t t146 = 2601113LLU;

    t146 = (x625+((x626^x627)%x628));

    if (t146 != 2147483647LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x629 = 134;
	volatile int16_t x630 = INT16_MIN;
	volatile int32_t t147 = -1296;

    t147 = (x629+((x630^x631)%x632));

    if (t147 != 261) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int64_t x633 = 7905015879LL;
	static int8_t x634 = INT8_MIN;
	int64_t x635 = -139414335LL;
	int8_t x636 = -1;

    t148 = (x633+((x634^x635)%x636));

    if (t148 != 7905015879LL) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int64_t x641 = -1LL;
	int16_t x642 = INT16_MIN;
	uint64_t t149 = 66550858798252906LLU;

    t149 = (x641+((x642^x643)%x644));

    if (t149 != 32639LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static int64_t x645 = INT64_MIN;
	static volatile int64_t x646 = INT64_MAX;
	int8_t x647 = -1;
	uint64_t x648 = UINT64_MAX;
	uint64_t t150 = 96LLU;

    t150 = (x645+((x646^x647)%x648));

    if (t150 != 0LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int64_t x651 = 1215185344260149LL;
	uint16_t x652 = UINT16_MAX;
	static volatile int64_t t151 = -877891393716LL;

    t151 = (x649+((x650^x651)%x652));

    if (t151 != -15254789LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x653 = -1;
	int16_t x654 = INT16_MIN;
	uint16_t x656 = 3100U;
	volatile int32_t t152 = 1820;

    t152 = (x653+((x654^x655)%x656));

    if (t152 != 1555) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x657 = INT16_MIN;
	volatile uint64_t x658 = 316LLU;
	int64_t x659 = 20197920LL;
	uint64_t x660 = UINT64_MAX;

    t153 = (x657+((x658^x659)%x660));

    if (t153 != 20165404LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x661 = -163317334520786LL;
	volatile uint32_t x662 = 18U;
	volatile int64_t x663 = INT64_MIN;
	int8_t x664 = INT8_MAX;
	volatile int64_t t154 = -1LL;

    t154 = (x661+((x662^x663)%x664));

    if (t154 != -163317334520896LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x665 = UINT64_MAX;
	static int64_t x666 = INT64_MAX;
	int64_t x667 = -10816021032799029LL;
	volatile int32_t x668 = INT32_MAX;
	static volatile uint64_t t155 = 139197828LLU;

    t155 = (x665+((x666^x667)%x668));

    if (t155 != 18446744072163419500LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x669 = INT16_MIN;
	uint64_t x670 = 1064943909560396835LLU;
	static volatile int64_t x671 = 2706504640469466LL;
	int8_t x672 = -1;

    t156 = (x669+((x670^x671)%x672));

    if (t156 != 1067051136239613433LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x673 = -1;
	static int8_t x674 = -1;
	int64_t x675 = INT64_MIN;
	uint64_t x676 = 7488009308LLU;
	volatile uint64_t t157 = 52447588852LLU;

    t157 = (x673+((x674^x675)%x676));

    if (t157 != 761177202LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x679 = INT32_MIN;
	int64_t x680 = INT64_MAX;
	static volatile int64_t t158 = 596212924LL;

    t158 = (x677+((x678^x679)%x680));

    if (t158 != 2473415572LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x681 = INT16_MAX;
	volatile int8_t x682 = INT8_MIN;
	int32_t x683 = INT32_MIN;
	static int64_t x684 = INT64_MIN;

    t159 = (x681+((x682^x683)%x684));

    if (t159 != 2147516287LL) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x685 = -61;
	int64_t x686 = 15175370446LL;
	uint8_t x687 = 30U;
	int64_t t160 = -111017LL;

    t160 = (x685+((x686^x687)%x688));

    if (t160 != -61LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint32_t x693 = 0U;
	static int16_t x695 = 6714;
	int16_t x696 = 1;

    t161 = (x693+((x694^x695)%x696));

    if (t161 != 0U) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x697 = INT64_MAX;
	int8_t x698 = INT8_MAX;
	uint64_t x699 = 81805663LLU;
	volatile int8_t x700 = INT8_MIN;
	static uint64_t t162 = 1534980739209860LLU;

    t162 = (x697+((x698^x699)%x700));

    if (t162 != 9223372036936581407LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x701 = -1;
	int64_t x702 = -1LL;
	int8_t x703 = INT8_MAX;
	uint64_t x704 = 5075479LLU;
	volatile uint64_t t163 = 458636601698LLU;

    t163 = (x701+((x702^x703)%x704));

    if (t163 != 829533LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x705 = -18;
	static uint64_t x706 = 1993187304152882LLU;
	int32_t x707 = INT32_MIN;
	uint16_t x708 = 28U;
	static uint64_t t164 = 475955374691958046LLU;

    t164 = (x705+((x706^x707)%x708));

    if (t164 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x709 = -366;
	uint32_t x711 = UINT32_MAX;
	int64_t x712 = 8027119746LL;
	volatile int64_t t165 = 485666781263023LL;

    t165 = (x709+((x710^x711)%x712));

    if (t165 != 2147483281LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile uint16_t x713 = UINT16_MAX;
	int16_t x714 = 110;
	int8_t x716 = INT8_MIN;
	volatile int32_t t166 = -1;

    t166 = (x713+((x714^x715)%x716));

    if (t166 != 65424) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x717 = 54;
	int16_t x718 = INT16_MIN;
	int64_t x720 = 1826261146LL;
	int64_t t167 = 27LL;

    t167 = (x717+((x718^x719)%x720));

    if (t167 != -32715LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x721 = -15;
	uint64_t x722 = UINT64_MAX;
	static int8_t x723 = -1;
	uint16_t x724 = 148U;
	static volatile uint64_t t168 = 1879LLU;

    t168 = (x721+((x722^x723)%x724));

    if (t168 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint64_t x725 = UINT64_MAX;
	volatile int16_t x728 = INT16_MIN;
	volatile uint64_t t169 = 301037539441LLU;

    t169 = (x725+((x726^x727)%x728));

    if (t169 != 253LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x730 = -1;
	static int16_t x731 = INT16_MAX;
	static int32_t x732 = INT32_MIN;
	volatile int32_t t170 = -3413952;

    t170 = (x729+((x730^x731)%x732));

    if (t170 != -36589) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x733 = 28305U;
	volatile int64_t x734 = 3289245783438184989LL;
	int16_t x735 = -6;
	int64_t x736 = INT64_MAX;
	volatile int64_t t171 = -18920324311720LL;

    t171 = (x733+((x734^x735)%x736));

    if (t171 != -3289245783438156680LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x737 = 0;
	static volatile int16_t x738 = 74;
	uint8_t x740 = UINT8_MAX;
	volatile int32_t t172 = 170820;

    t172 = (x737+((x738^x739)%x740));

    if (t172 != 53) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x741 = 270LL;
	int16_t x742 = -5252;
	static int16_t x743 = INT16_MAX;
	uint64_t x744 = 254483602857LLU;
	volatile uint64_t t173 = 20550601342198343LLU;

    t173 = (x741+((x742^x743)%x744));

    if (t173 != 60340265364LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x746 = 32495595822032LL;
	int32_t x747 = INT32_MIN;
	volatile int64_t t174 = -4095960LL;

    t174 = (x745+((x746^x747)%x748));

    if (t174 != 65387LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x749 = INT32_MIN;
	static int8_t x750 = -7;
	uint8_t x751 = 12U;
	static volatile int8_t x752 = 1;

    t175 = (x749+((x750^x751)%x752));

    if (t175 != INT32_MIN) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x753 = 1;
	uint32_t x755 = 7210371U;
	int32_t x756 = -1;
	volatile uint32_t t176 = 3223U;

    t176 = (x753+((x754^x755)%x756));

    if (t176 != 7210371U) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x757 = 4U;
	volatile int16_t x758 = -1;
	int16_t x759 = -5;
	volatile uint32_t t177 = 34170969U;

    t177 = (x757+((x758^x759)%x760));

    if (t177 != 8U) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x766 = 4274786LL;
	uint64_t x767 = 4128235138907612328LLU;
	volatile uint64_t t178 = 467LLU;

    t178 = (x765+((x766^x767)%x768));

    if (t178 != 4128235138903351253LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x769 = INT8_MAX;
	static int64_t x770 = -1LL;
	int32_t x771 = 868;
	volatile int64_t t179 = 519010420LL;

    t179 = (x769+((x770^x771)%x772));

    if (t179 != 61LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x773 = INT64_MAX;
	volatile uint16_t x774 = 5U;
	static int8_t x775 = -1;
	int32_t x776 = -100731573;
	volatile int64_t t180 = -3LL;

    t180 = (x773+((x774^x775)%x776));

    if (t180 != 9223372036854775801LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x777 = 0U;
	uint32_t x778 = UINT32_MAX;
	int32_t x779 = 4755;
	int8_t x780 = INT8_MAX;
	static uint32_t t181 = 57016682U;

    t181 = (x777+((x778^x779)%x780));

    if (t181 != 86U) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x782 = -94LL;
	uint64_t x784 = 3LLU;
	volatile uint64_t t182 = 159LLU;

    t182 = (x781+((x782^x783)%x784));

    if (t182 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x785 = 0U;
	static uint64_t x786 = 15LLU;
	volatile uint64_t x787 = UINT64_MAX;
	volatile int32_t x788 = -4136934;
	static volatile uint64_t t183 = 3LLU;

    t183 = (x785+((x786^x787)%x788));

    if (t183 != 4136918LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x789 = -1LL;
	uint8_t x790 = UINT8_MAX;
	int32_t x792 = -1;

    t184 = (x789+((x790^x791)%x792));

    if (t184 != -1LL) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x793 = -1;
	static volatile int16_t x794 = INT16_MIN;
	uint64_t x795 = UINT64_MAX;
	uint64_t t185 = 72947LLU;

    t185 = (x793+((x794^x795)%x796));

    if (t185 != 32766LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile uint16_t x797 = 275U;
	static int32_t x798 = 242;
	int32_t x799 = INT32_MAX;
	int64_t x800 = 317373847223116418LL;

    t186 = (x797+((x798^x799)%x800));

    if (t186 != 2147483680LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint64_t x801 = UINT64_MAX;
	static uint64_t x802 = UINT64_MAX;
	uint32_t x803 = UINT32_MAX;
	int32_t x804 = INT32_MIN;
	volatile uint64_t t187 = 62378803771097LLU;

    t187 = (x801+((x802^x803)%x804));

    if (t187 != 18446744069414584319LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x805 = -1;
	uint16_t x806 = 243U;
	volatile int32_t t188 = -46912164;

    t188 = (x805+((x806^x807)%x808));

    if (t188 != -15) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x809 = 147LLU;
	uint64_t x810 = 485695LLU;
	static uint16_t x811 = 17U;
	int16_t x812 = -1;
	volatile uint64_t t189 = 48466LLU;

    t189 = (x809+((x810^x811)%x812));

    if (t189 != 485825LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x813 = -198;
	int8_t x814 = 2;
	int64_t x815 = INT64_MIN;
	uint8_t x816 = UINT8_MAX;
	int64_t t190 = -108688LL;

    t190 = (x813+((x814^x815)%x816));

    if (t190 != -324LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x817 = INT16_MIN;
	int16_t x818 = INT16_MIN;
	uint32_t x819 = 0U;
	int16_t x820 = INT16_MIN;

    t191 = (x817+((x818^x819)%x820));

    if (t191 != 4294934528U) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x821 = -1;
	uint64_t x822 = 2335565LLU;
	volatile uint16_t x823 = 4703U;
	static int8_t x824 = INT8_MIN;
	volatile uint64_t t192 = 1LLU;

    t192 = (x821+((x822^x823)%x824));

    if (t192 != 2339089LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x825 = 0;
	int16_t x826 = INT16_MIN;
	int8_t x827 = INT8_MIN;
	int64_t x828 = INT64_MIN;
	int64_t t193 = 57362425802LL;

    t193 = (x825+((x826^x827)%x828));

    if (t193 != 32640LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x833 = 16183927U;
	int64_t x834 = 5938831717LL;
	volatile uint64_t t194 = 707579444LLU;

    t194 = (x833+((x834^x835)%x836));

    if (t194 != 16215900LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint64_t x838 = 554168903412050LLU;
	volatile uint8_t x840 = 63U;
	static uint64_t t195 = 3961763323725306025LLU;

    t195 = (x837+((x838^x839)%x840));

    if (t195 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int32_t x841 = INT32_MIN;
	int64_t x842 = INT64_MAX;
	int16_t x843 = INT16_MIN;
	volatile int64_t t196 = -16005563680352LL;

    t196 = (x841+((x842^x843)%x844));

    if (t196 != -2176106543LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x846 = 872;
	int64_t x847 = -1LL;
	uint8_t x848 = 1U;

    t197 = (x845+((x846^x847)%x848));

    if (t197 != 700078554LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x849 = 129760078U;
	static uint64_t x850 = 34LLU;
	static int64_t x851 = INT64_MIN;
	static uint64_t x852 = UINT64_MAX;

    t198 = (x849+((x850^x851)%x852));

    if (t198 != 9223372036984535920LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	static int64_t x854 = INT64_MIN;
	static int16_t x855 = -1;
	int32_t x856 = INT32_MIN;
	int64_t t199 = 7540213LL;

    t199 = (x853+((x854^x855)%x856));

    if (t199 != 2147487119LL) { NG(); } else { ; }
	
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

