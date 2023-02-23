
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

uint8_t x8 = UINT8_MAX;
int16_t x12 = INT16_MAX;
uint16_t x41 = 358U;
uint32_t x43 = UINT32_MAX;
int64_t x44 = 316948743213LL;
int64_t t4 = 3747568LL;
int8_t x46 = INT8_MAX;
int64_t t5 = 7276565677158LL;
int8_t x54 = 1;
uint16_t x55 = UINT16_MAX;
int64_t x60 = -1LL;
int32_t x67 = -107534;
uint32_t x69 = 13928U;
uint32_t t9 = 601995U;
static volatile int64_t x73 = INT64_MAX;
volatile int8_t x75 = INT8_MAX;
static int64_t x80 = -1LL;
static volatile uint16_t x82 = UINT16_MAX;
volatile int64_t t14 = 319563LL;
static volatile int64_t x93 = -22514457453804LL;
int16_t x96 = 2280;
volatile int64_t x100 = 0LL;
volatile uint64_t t17 = UINT64_MAX;
uint32_t x105 = 6018956U;
int8_t x106 = -1;
volatile int8_t x108 = -5;
static uint32_t t18 = 14393U;
int64_t x110 = 12LL;
volatile int64_t x111 = -169583LL;
uint16_t x123 = 2789U;
static uint32_t x128 = UINT32_MAX;
volatile int64_t t25 = -52296120937809LL;
uint16_t x153 = 0U;
volatile int16_t x166 = INT16_MAX;
static uint64_t t30 = 2094354988LLU;
int8_t x179 = -1;
static int8_t x188 = -1;
int8_t x192 = INT8_MIN;
int32_t t33 = -23;
uint64_t t34 = 2453LLU;
static int16_t x201 = INT16_MIN;
int8_t x203 = -1;
volatile int8_t x205 = INT8_MIN;
int16_t x210 = INT16_MAX;
static volatile int32_t t38 = 7838638;
int16_t x225 = INT16_MIN;
int8_t x228 = -11;
volatile int64_t x239 = 2840LL;
volatile int16_t x241 = 5072;
volatile int8_t x246 = INT8_MIN;
int8_t x247 = INT8_MIN;
int16_t x261 = INT16_MIN;
int16_t x262 = -1;
volatile uint16_t x264 = UINT16_MAX;
uint8_t x269 = 12U;
volatile int32_t x277 = INT32_MIN;
static uint16_t x295 = UINT16_MAX;
static volatile uint64_t x296 = 95456LLU;
int32_t x309 = -4186172;
int16_t x312 = -1912;
volatile uint64_t t59 = 139LLU;
uint8_t x322 = UINT8_MAX;
volatile uint64_t t61 = 3168148501249893LLU;
int32_t x328 = INT32_MIN;
int64_t t62 = -68317LL;
static volatile int32_t x333 = 21413485;
static int8_t x336 = -26;
volatile int32_t t64 = -296;
volatile uint64_t t65 = 12LLU;
static volatile uint64_t t68 = 371498398981LLU;
static uint16_t x362 = 0U;
static uint8_t x363 = UINT8_MAX;
int64_t x369 = 561316LL;
volatile int8_t x370 = INT8_MIN;
int32_t x372 = INT32_MAX;
volatile int64_t t70 = -1LL;
int64_t x374 = INT64_MAX;
int8_t x380 = 0;
uint8_t x381 = UINT8_MAX;
int64_t x382 = -1LL;
volatile int64_t x390 = -1LL;
static int16_t x391 = INT16_MIN;
static volatile uint64_t t78 = 209LLU;
static volatile uint8_t x409 = UINT8_MAX;
volatile int32_t t79 = -27437;
int8_t x414 = INT8_MAX;
int64_t x419 = -28082943LL;
uint64_t x438 = 78977022814916LLU;
static volatile uint64_t t84 = 14970024LLU;
int32_t x443 = -1;
volatile int8_t x450 = INT8_MAX;
int8_t x452 = INT8_MIN;
volatile int16_t x460 = INT16_MAX;
volatile int32_t t88 = 33076610;
uint32_t x463 = 120U;
int8_t x478 = INT8_MIN;
volatile int64_t t91 = 6238LL;
uint32_t t92 = 479643U;
static volatile int32_t t94 = -1;
static uint32_t x503 = 11U;
uint8_t x513 = 2U;
volatile uint8_t x516 = UINT8_MAX;
int8_t x537 = INT8_MAX;
int32_t x557 = 2;
int32_t x559 = -30;
uint32_t x566 = 224808U;
int32_t x567 = INT32_MAX;
uint64_t x572 = 16275LLU;
volatile int32_t t105 = 0;
int16_t x582 = 184;
uint32_t x598 = UINT32_MAX;
uint32_t x611 = 53137507U;
int16_t x613 = INT16_MIN;
static int64_t x614 = 7378987838923LL;
volatile int16_t x615 = -2;
static uint64_t x616 = 6LLU;
static volatile uint32_t t115 = 424U;
uint16_t x641 = UINT16_MAX;
uint64_t t119 = 1647958LLU;
int32_t x661 = INT32_MIN;
static volatile int32_t t120 = 840;
volatile int64_t t121 = -71367636640296156LL;
volatile int64_t x670 = -1LL;
int8_t x671 = INT8_MAX;
volatile int64_t x686 = -25000282214552LL;
int32_t x690 = -31624247;
int8_t x691 = -1;
uint64_t x695 = 2LLU;
volatile uint64_t t127 = 348020867LLU;
volatile uint32_t x697 = 756U;
uint64_t x700 = 24057LLU;
int64_t x711 = INT64_MIN;
int32_t x729 = INT32_MAX;
int32_t x730 = 248931390;
int8_t x732 = INT8_MAX;
int32_t t133 = 3447;
volatile uint64_t x734 = 501LLU;
uint64_t t134 = 2047LLU;
int64_t x744 = -1LL;
volatile uint64_t x745 = 8645517LLU;
static volatile int8_t x763 = INT8_MIN;
volatile uint32_t x766 = 0U;
int32_t x774 = -1;
int16_t x790 = 1;
static uint32_t t144 = 483152912U;
static volatile uint64_t t146 = 2570036LLU;
static uint16_t x809 = UINT16_MAX;
uint64_t x811 = 1415LLU;
int8_t x812 = INT8_MAX;
int8_t x814 = INT8_MIN;
uint64_t x816 = 65052840LLU;
static volatile int32_t x824 = 518;
volatile int32_t x845 = -19832;
volatile int32_t x847 = 0;
int16_t x851 = -1;
int64_t x852 = INT64_MIN;
int32_t x868 = INT32_MIN;
uint64_t t158 = 233416923287364955LLU;
int64_t x889 = INT64_MIN;
volatile int8_t x891 = INT8_MIN;
static volatile uint64_t t160 = 4696137LLU;
int32_t t161 = -3712392;
uint32_t x923 = 453531048U;
int64_t x927 = 356LL;
int8_t x935 = -1;
uint16_t x948 = UINT16_MAX;
static volatile uint8_t x954 = 15U;
static int8_t x957 = INT8_MAX;
int32_t x960 = -323044265;
volatile int8_t x964 = INT8_MIN;
uint64_t t170 = 16826LLU;
static uint32_t x978 = UINT32_MAX;
uint32_t x987 = 48900U;
int8_t x989 = INT8_MIN;
uint64_t t177 = 81038054LLU;
static int16_t x1017 = -1;
uint8_t x1032 = 3U;
volatile int64_t t180 = -368956807810507108LL;
int64_t x1036 = -206998812712509LL;
volatile uint64_t t182 = 4255679322LLU;
int64_t t184 = 161709501509809262LL;
static volatile int16_t x1050 = 2232;
static uint32_t x1052 = 210714111U;
uint32_t x1065 = UINT32_MAX;
volatile uint16_t x1077 = 211U;
int8_t x1095 = 1;
int16_t x1099 = -1;
volatile int8_t x1100 = -19;
int32_t x1106 = INT32_MAX;
volatile int8_t x1107 = -1;
uint64_t x1117 = 31163879336LLU;
uint64_t t193 = 3077754923188045805LLU;
uint64_t t194 = 31742244575615LLU;
int64_t t195 = 3595665415143LL;
int8_t x1134 = INT8_MAX;
static int64_t x1136 = -134978969LL;
int16_t x1140 = -281;
int16_t x1143 = INT16_MAX;
static int64_t x1150 = -1253348175153LL;
uint16_t x1151 = 7880U;


void f0(void) {
    	uint64_t x5 = UINT64_MAX;
	volatile int8_t x6 = INT8_MIN;
	int32_t x7 = -1;
	static uint64_t t0 = 7999370180LLU;

    t0 = (x5/((x6*x7)-x8));

    if (t0 != 1LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x9 = INT32_MAX;
	static uint64_t x10 = UINT64_MAX;
	uint16_t x11 = 4U;
	static uint64_t t1 = 822940858LLU;

    t1 = (x9/((x10*x11)-x12));

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x17 = 7;
	uint32_t x18 = 178410900U;
	static int64_t x19 = -1LL;
	int64_t x20 = -1LL;
	volatile int64_t t2 = -7034728740LL;

    t2 = (x17/((x18*x19)-x20));

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint8_t x29 = 5U;
	uint8_t x30 = 4U;
	volatile uint64_t x31 = UINT64_MAX;
	volatile int8_t x32 = INT8_MAX;
	volatile uint64_t t3 = 58209456992188538LLU;

    t3 = (x29/((x30*x31)-x32));

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x42 = INT32_MIN;

    t4 = (x41/((x42*x43)-x44));

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x45 = UINT32_MAX;
	int64_t x47 = -1LL;
	static int32_t x48 = INT32_MIN;

    t5 = (x45/((x46*x47)-x48));

    if (t5 != 2LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x53 = INT16_MAX;
	int8_t x56 = -34;
	static int32_t t6 = -205874274;

    t6 = (x53/((x54*x55)-x56));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x57 = INT32_MIN;
	volatile uint8_t x58 = 13U;
	int8_t x59 = INT8_MIN;
	volatile int64_t t7 = -22LL;

    t7 = (x57/((x58*x59)-x60));

    if (t7 != 1291331LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x65 = 13U;
	volatile uint32_t x66 = 14U;
	int16_t x68 = 3924;
	volatile uint32_t t8 = 336U;

    t8 = (x65/((x66*x67)-x68));

    if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x70 = 1723741U;
	int8_t x71 = -1;
	int32_t x72 = INT32_MAX;

    t9 = (x69/((x70*x71)-x72));

    if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x74 = 5447408365875LLU;
	int16_t x76 = 0;
	volatile uint64_t t10 = 17828474LLU;

    t10 = (x73/((x74*x75)-x76));

    if (t10 != 13332LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x77 = -89864;
	volatile uint8_t x78 = UINT8_MAX;
	static int32_t x79 = -52483;
	int64_t t11 = -19487LL;

    t11 = (x77/((x78*x79)-x80));

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static int32_t x81 = INT32_MAX;
	uint8_t x83 = UINT8_MAX;
	uint32_t x84 = 11U;
	uint32_t t12 = 26615U;

    t12 = (x81/((x82*x83)-x84));

    if (t12 != 128U) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x85 = UINT8_MAX;
	int16_t x86 = INT16_MIN;
	static uint16_t x87 = UINT16_MAX;
	volatile int16_t x88 = INT16_MAX;
	int32_t t13 = 1797;

    t13 = (x85/((x86*x87)-x88));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x89 = -1LL;
	int8_t x90 = 12;
	static int8_t x91 = -23;
	static int64_t x92 = INT64_MIN;

    t14 = (x89/((x90*x91)-x92));

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x94 = 3U;
	volatile uint64_t x95 = 24142829798010LLU;
	uint64_t t15 = 503936577591008LLU;

    t15 = (x93/((x94*x95)-x96));

    if (t15 != 254688LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x97 = -1;
	int16_t x98 = INT16_MIN;
	static uint64_t x99 = 1LLU;
	uint64_t t16 = 10462238LLU;

    t16 = (x97/((x98*x99)-x100));

    if (t16 != 1LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x101 = -1;
	int8_t x102 = INT8_MIN;
	uint64_t x103 = UINT64_MAX;
	volatile int8_t x104 = INT8_MAX;

    t17 = (x101/((x102*x103)-x104));

    if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x107 = -266287;

    t18 = (x105/((x106*x107)-x108));

    if (t18 != 22U) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x109 = INT32_MIN;
	int64_t x112 = -30300LL;
	volatile int64_t t19 = 213112870644291040LL;

    t19 = (x109/((x110*x111)-x112));

    if (t19 != 1071LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x117 = 52U;
	uint64_t x118 = 113590804655862LLU;
	int64_t x119 = 4024513584724561063LL;
	int64_t x120 = 476523434LL;
	volatile uint64_t t20 = 867765847LLU;

    t20 = (x117/((x118*x119)-x120));

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x121 = -1;
	volatile int16_t x122 = -756;
	int32_t x124 = INT32_MIN;
	volatile int32_t t21 = 209242893;

    t21 = (x121/((x122*x123)-x124));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x125 = UINT8_MAX;
	static uint16_t x126 = 0U;
	uint32_t x127 = 3U;
	volatile uint32_t t22 = 6424903U;

    t22 = (x125/((x126*x127)-x128));

    if (t22 != 255U) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile int8_t x129 = INT8_MIN;
	int64_t x130 = INT64_MIN;
	int8_t x131 = 0;
	uint8_t x132 = 21U;
	int64_t t23 = -7777810696LL;

    t23 = (x129/((x130*x131)-x132));

    if (t23 != 6LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint64_t x141 = 1580810282968625LLU;
	static uint64_t x142 = UINT64_MAX;
	static int32_t x143 = INT32_MIN;
	static int64_t x144 = INT64_MIN;
	volatile uint64_t t24 = 19834LLU;

    t24 = (x141/((x142*x143)-x144));

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x145 = 7;
	int64_t x146 = INT64_MIN;
	uint8_t x147 = 1U;
	volatile int8_t x148 = INT8_MIN;

    t25 = (x145/((x146*x147)-x148));

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int8_t x154 = INT8_MIN;
	int16_t x155 = 1336;
	volatile int8_t x156 = INT8_MIN;
	volatile int32_t t26 = -125940419;

    t26 = (x153/((x154*x155)-x156));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x157 = INT8_MAX;
	uint64_t x158 = 4483LLU;
	uint64_t x159 = UINT64_MAX;
	uint32_t x160 = UINT32_MAX;
	uint64_t t27 = 59LLU;

    t27 = (x157/((x158*x159)-x160));

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x165 = 8146LL;
	static int8_t x167 = INT8_MAX;
	uint32_t x168 = 7637757U;
	volatile int64_t t28 = 87565052LL;

    t28 = (x165/((x166*x167)-x168));

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x169 = -1;
	static uint16_t x170 = UINT16_MAX;
	uint64_t x171 = 1LLU;
	uint64_t x172 = 13813194644292600LLU;
	uint64_t t29 = 25LLU;

    t29 = (x169/((x170*x171)-x172));

    if (t29 != 1LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint16_t x173 = UINT16_MAX;
	uint8_t x174 = UINT8_MAX;
	uint64_t x175 = 6421489034197669LLU;
	uint32_t x176 = UINT32_MAX;

    t30 = (x173/((x174*x175)-x176));

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x177 = -15;
	volatile int8_t x178 = INT8_MIN;
	int32_t x180 = INT32_MAX;
	int32_t t31 = 1;

    t31 = (x177/((x178*x179)-x180));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x185 = INT32_MAX;
	int64_t x186 = -14202633LL;
	uint8_t x187 = UINT8_MAX;
	volatile int64_t t32 = 5929683550529LL;

    t32 = (x185/((x186*x187)-x188));

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x189 = UINT16_MAX;
	uint8_t x190 = UINT8_MAX;
	uint8_t x191 = 21U;

    t33 = (x189/((x190*x191)-x192));

    if (t33 != 11) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x197 = -250;
	int8_t x198 = INT8_MAX;
	uint64_t x199 = 19991638163951LLU;
	int64_t x200 = INT64_MAX;

    t34 = (x197/((x198*x199)-x200));

    if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x202 = INT8_MIN;
	int64_t x204 = -1LL;
	int64_t t35 = -306757LL;

    t35 = (x201/((x202*x203)-x204));

    if (t35 != -254LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x206 = 964LLU;
	volatile int32_t x207 = INT32_MIN;
	int16_t x208 = INT16_MAX;
	static uint64_t t36 = 15946697LLU;

    t36 = (x205/((x206*x207)-x208));

    if (t36 != 1LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x209 = INT64_MIN;
	int32_t x211 = -61;
	volatile uint16_t x212 = 1817U;
	int64_t t37 = -479091LL;

    t37 = (x209/((x210*x211)-x212));

    if (t37 != 4610293709727LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x213 = -1;
	int8_t x214 = -1;
	static int8_t x215 = 12;
	int8_t x216 = -1;

    t38 = (x213/((x214*x215)-x216));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint8_t x217 = 9U;
	static int64_t x218 = -1LL;
	uint32_t x219 = 110585U;
	volatile int32_t x220 = -62114799;
	volatile int64_t t39 = 3405666842084868458LL;

    t39 = (x217/((x218*x219)-x220));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x221 = UINT8_MAX;
	uint32_t x222 = 170116704U;
	uint64_t x223 = 840966696886557LLU;
	volatile uint16_t x224 = 19U;
	volatile uint64_t t40 = 1569305625594LLU;

    t40 = (x221/((x222*x223)-x224));

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x226 = -1447LL;
	static int8_t x227 = -1;
	int64_t t41 = 68483449LL;

    t41 = (x225/((x226*x227)-x228));

    if (t41 != -22LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x229 = 28LLU;
	int8_t x230 = INT8_MIN;
	int8_t x231 = INT8_MIN;
	static volatile int32_t x232 = INT32_MAX;
	volatile uint64_t t42 = 17805LLU;

    t42 = (x229/((x230*x231)-x232));

    if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static int32_t x233 = INT32_MAX;
	static int16_t x234 = INT16_MIN;
	static int32_t x235 = -1;
	int32_t x236 = -581;
	volatile int32_t t43 = 40;

    t43 = (x233/((x234*x235)-x236));

    if (t43 != 64394) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint16_t x237 = 1899U;
	int8_t x238 = INT8_MIN;
	int8_t x240 = -8;
	volatile int64_t t44 = 249455LL;

    t44 = (x237/((x238*x239)-x240));

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x242 = 2132458401LLU;
	static int64_t x243 = INT64_MAX;
	int32_t x244 = INT32_MIN;
	static uint64_t t45 = 68474LLU;

    t45 = (x241/((x242*x243)-x244));

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int32_t x245 = 0;
	volatile uint16_t x248 = 0U;
	static volatile int32_t t46 = 1;

    t46 = (x245/((x246*x247)-x248));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int64_t x249 = INT64_MIN;
	int16_t x250 = INT16_MIN;
	uint64_t x251 = 120599LLU;
	volatile int32_t x252 = -122720;
	uint64_t t47 = 88638LLU;

    t47 = (x249/((x250*x251)-x252));

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x253 = 4688;
	static int16_t x254 = INT16_MIN;
	static int16_t x255 = INT16_MIN;
	uint16_t x256 = UINT16_MAX;
	static int32_t t48 = 189976822;

    t48 = (x253/((x254*x255)-x256));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x257 = INT32_MIN;
	uint32_t x258 = 186249315U;
	int16_t x259 = -1;
	static uint8_t x260 = UINT8_MAX;
	uint32_t t49 = 1U;

    t49 = (x257/((x258*x259)-x260));

    if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x263 = -1;
	volatile int32_t t50 = 33;

    t50 = (x261/((x262*x263)-x264));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint32_t x265 = 201U;
	volatile uint8_t x266 = 12U;
	static int16_t x267 = 0;
	uint8_t x268 = UINT8_MAX;
	static volatile uint32_t t51 = 817510U;

    t51 = (x265/((x266*x267)-x268));

    if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x270 = 0;
	uint32_t x271 = 510564477U;
	uint16_t x272 = UINT16_MAX;
	static volatile uint32_t t52 = 204396U;

    t52 = (x269/((x270*x271)-x272));

    if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x278 = 0LL;
	static int16_t x279 = 2;
	int8_t x280 = INT8_MIN;
	int64_t t53 = -102LL;

    t53 = (x277/((x278*x279)-x280));

    if (t53 != -16777216LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x281 = 38720162U;
	static uint64_t x282 = 6032184396876752837LLU;
	uint16_t x283 = 1334U;
	int32_t x284 = -1;
	volatile uint64_t t54 = 5702731326890761040LLU;

    t54 = (x281/((x282*x283)-x284));

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint64_t x293 = UINT64_MAX;
	uint64_t x294 = UINT64_MAX;
	uint64_t t55 = 78762955LLU;

    t55 = (x293/((x294*x295)-x296));

    if (t55 != 1LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	static int64_t x297 = -184165539640LL;
	volatile uint8_t x298 = 15U;
	uint8_t x299 = 51U;
	uint64_t x300 = 178288349549124787LLU;
	uint64_t t56 = 2248LLU;

    t56 = (x297/((x298*x299)-x300));

    if (t56 != 1LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x301 = -33;
	uint32_t x302 = 122U;
	static volatile int32_t x303 = INT32_MIN;
	volatile uint8_t x304 = 11U;
	static uint32_t t57 = 31769U;

    t57 = (x301/((x302*x303)-x304));

    if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x310 = INT8_MIN;
	int16_t x311 = INT16_MAX;
	volatile int32_t t58 = -3;

    t58 = (x309/((x310*x311)-x312));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint32_t x313 = UINT32_MAX;
	int64_t x314 = -14LL;
	uint16_t x315 = UINT16_MAX;
	uint64_t x316 = UINT64_MAX;

    t59 = (x313/((x314*x315)-x316));

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x317 = -1;
	uint8_t x318 = 13U;
	static int32_t x319 = -149;
	volatile int64_t x320 = INT64_MIN;
	int64_t t60 = -1826LL;

    t60 = (x317/((x318*x319)-x320));

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int8_t x321 = INT8_MAX;
	static uint32_t x323 = 26355538U;
	uint64_t x324 = UINT64_MAX;

    t61 = (x321/((x322*x323)-x324));

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x325 = UINT8_MAX;
	int64_t x326 = 160690808111454LL;
	volatile int16_t x327 = INT16_MIN;

    t62 = (x325/((x326*x327)-x328));

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x329 = 272678LL;
	int8_t x330 = INT8_MIN;
	int8_t x331 = INT8_MAX;
	volatile int8_t x332 = -1;
	int64_t t63 = 1504273LL;

    t63 = (x329/((x330*x331)-x332));

    if (t63 != -16LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x334 = -1;
	int16_t x335 = 1;

    t64 = (x333/((x334*x335)-x336));

    if (t64 != 856539) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint64_t x337 = 6699870205843892200LLU;
	int8_t x338 = -1;
	int8_t x339 = -57;
	int32_t x340 = -293722;

    t65 = (x337/((x338*x339)-x340));

    if (t65 != 22805817317929LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x341 = 14702U;
	int8_t x342 = -1;
	int8_t x343 = -1;
	int8_t x344 = -1;
	int32_t t66 = 219;

    t66 = (x341/((x342*x343)-x344));

    if (t66 != 7351) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x349 = 468296LLU;
	uint16_t x350 = 284U;
	int8_t x351 = -20;
	static volatile int64_t x352 = 0LL;
	uint64_t t67 = 5678742157835908LLU;

    t67 = (x349/((x350*x351)-x352));

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x353 = -350;
	int8_t x354 = INT8_MIN;
	int32_t x355 = 113621;
	uint64_t x356 = UINT64_MAX;

    t68 = (x353/((x354*x355)-x356));

    if (t68 != 1LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x361 = INT8_MAX;
	int32_t x364 = -1;
	static int32_t t69 = -28071734;

    t69 = (x361/((x362*x363)-x364));

    if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x371 = -263;

    t70 = (x369/((x370*x371)-x372));

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x373 = -1;
	uint8_t x375 = 0U;
	int64_t x376 = -8758712099721483LL;
	int64_t t71 = 3803736464679LL;

    t71 = (x373/((x374*x375)-x376));

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x377 = 15U;
	uint16_t x378 = 30U;
	static volatile int32_t x379 = 1222;
	volatile int32_t t72 = -361099285;

    t72 = (x377/((x378*x379)-x380));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x383 = -15;
	volatile uint8_t x384 = 2U;
	static volatile int64_t t73 = 594393530603000LL;

    t73 = (x381/((x382*x383)-x384));

    if (t73 != 19LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x385 = INT8_MIN;
	uint16_t x386 = 12U;
	volatile uint16_t x387 = UINT16_MAX;
	int8_t x388 = INT8_MIN;
	int32_t t74 = 1;

    t74 = (x385/((x386*x387)-x388));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x389 = INT32_MAX;
	static volatile uint16_t x392 = UINT16_MAX;
	static int64_t t75 = -1521378918566LL;

    t75 = (x389/((x390*x391)-x392));

    if (t75 != -65538LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x397 = -6;
	uint16_t x398 = 16155U;
	int8_t x399 = -1;
	uint32_t x400 = UINT32_MAX;
	uint32_t t76 = 29614U;

    t76 = (x397/((x398*x399)-x400));

    if (t76 != 1U) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x401 = INT8_MIN;
	int8_t x402 = -1;
	uint8_t x403 = 14U;
	static volatile int32_t x404 = -389;
	volatile int32_t t77 = 252860620;

    t77 = (x401/((x402*x403)-x404));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x405 = INT8_MIN;
	volatile int8_t x406 = 0;
	uint64_t x407 = 101271571452670LLU;
	static int64_t x408 = -1LL;

    t78 = (x405/((x406*x407)-x408));

    if (t78 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x410 = -5340;
	static uint16_t x411 = 475U;
	int8_t x412 = -1;

    t79 = (x409/((x410*x411)-x412));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x413 = UINT16_MAX;
	int16_t x415 = INT16_MAX;
	uint16_t x416 = 0U;
	int32_t t80 = -1;

    t80 = (x413/((x414*x415)-x416));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x417 = INT16_MIN;
	int16_t x418 = -1;
	volatile uint8_t x420 = 1U;
	int64_t t81 = -106096984LL;

    t81 = (x417/((x418*x419)-x420));

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x429 = 0U;
	uint64_t x430 = 305774959536LLU;
	int16_t x431 = INT16_MIN;
	int32_t x432 = -650770;
	uint64_t t82 = 6329994597128LLU;

    t82 = (x429/((x430*x431)-x432));

    if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x433 = -1;
	uint8_t x434 = 39U;
	uint64_t x435 = UINT64_MAX;
	int8_t x436 = 3;
	volatile uint64_t t83 = 3069470981152632799LLU;

    t83 = (x433/((x434*x435)-x436));

    if (t83 != 1LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x437 = INT64_MAX;
	volatile int32_t x439 = 317;
	int8_t x440 = 1;

    t84 = (x437/((x438*x439)-x440));

    if (t84 != 368LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x441 = 11LL;
	int64_t x442 = -22956060784LL;
	static volatile int64_t x444 = INT64_MAX;
	int64_t t85 = 421285LL;

    t85 = (x441/((x442*x443)-x444));

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x445 = INT64_MIN;
	int8_t x446 = 1;
	volatile int8_t x447 = INT8_MIN;
	int32_t x448 = INT32_MIN;
	volatile int64_t t86 = -3870524053652740990LL;

    t86 = (x445/((x446*x447)-x448));

    if (t86 != -4294967552LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x449 = -201063034;
	volatile int8_t x451 = -1;
	static int32_t t87 = 1;

    t87 = (x449/((x450*x451)-x452));

    if (t87 != -201063034) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x457 = INT32_MAX;
	static uint16_t x458 = 26884U;
	uint16_t x459 = 949U;

    t88 = (x457/((x458*x459)-x460));

    if (t88 != 84) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint8_t x461 = 27U;
	static int64_t x462 = 434168614LL;
	static int8_t x464 = 11;
	volatile int64_t t89 = -1043LL;

    t89 = (x461/((x462*x463)-x464));

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static int8_t x473 = INT8_MIN;
	uint64_t x474 = 10995071LLU;
	uint32_t x475 = UINT32_MAX;
	uint64_t x476 = UINT64_MAX;
	volatile uint64_t t90 = 326482LLU;

    t90 = (x473/((x474*x475)-x476));

    if (t90 != 390LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int8_t x477 = INT8_MIN;
	int16_t x479 = -154;
	int64_t x480 = -1LL;

    t91 = (x477/((x478*x479)-x480));

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x481 = 23;
	static int32_t x482 = INT32_MAX;
	int32_t x483 = -1;
	static uint32_t x484 = UINT32_MAX;

    t92 = (x481/((x482*x483)-x484));

    if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
    	static int32_t x489 = 1073559;
	volatile int8_t x490 = INT8_MIN;
	int16_t x491 = INT16_MIN;
	static volatile uint32_t x492 = 898427157U;
	volatile uint32_t t93 = 1397U;

    t93 = (x489/((x490*x491)-x492));

    if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int16_t x493 = INT16_MIN;
	int32_t x494 = -1;
	int8_t x495 = INT8_MAX;
	int32_t x496 = INT32_MIN;

    t94 = (x493/((x494*x495)-x496));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x501 = -3;
	uint64_t x502 = 14815346980366394LLU;
	uint16_t x504 = 9323U;
	volatile uint64_t t95 = 6369560442LLU;

    t95 = (x501/((x502*x503)-x504));

    if (t95 != 113LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x514 = INT8_MIN;
	uint16_t x515 = 4U;
	int32_t t96 = -959886842;

    t96 = (x513/((x514*x515)-x516));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x521 = INT32_MIN;
	uint16_t x522 = 1U;
	int64_t x523 = -1LL;
	uint32_t x524 = UINT32_MAX;
	volatile int64_t t97 = 6463066641LL;

    t97 = (x521/((x522*x523)-x524));

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x529 = INT8_MIN;
	static uint16_t x530 = 18U;
	uint32_t x531 = 62678U;
	int32_t x532 = -1;
	static uint32_t t98 = 192475U;

    t98 = (x529/((x530*x531)-x532));

    if (t98 != 3806U) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x533 = INT8_MIN;
	int16_t x534 = -1;
	int8_t x535 = -1;
	volatile int32_t x536 = INT32_MAX;
	int32_t t99 = 42294671;

    t99 = (x533/((x534*x535)-x536));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x538 = 6924621LLU;
	static uint16_t x539 = 117U;
	uint64_t x540 = UINT64_MAX;
	static volatile uint64_t t100 = 11197739006700279LLU;

    t100 = (x537/((x538*x539)-x540));

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x549 = 30;
	volatile uint32_t x550 = UINT32_MAX;
	static int32_t x551 = INT32_MIN;
	volatile int16_t x552 = 20;
	static volatile uint32_t t101 = 39U;

    t101 = (x549/((x550*x551)-x552));

    if (t101 != 0U) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x558 = INT16_MIN;
	int16_t x560 = INT16_MIN;
	int32_t t102 = -25;

    t102 = (x557/((x558*x559)-x560));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x565 = UINT16_MAX;
	uint8_t x568 = 0U;
	volatile uint32_t t103 = 10572U;

    t103 = (x565/((x566*x567)-x568));

    if (t103 != 0U) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x569 = 9U;
	static int16_t x570 = INT16_MAX;
	int16_t x571 = INT16_MAX;
	uint64_t t104 = 1864925850LLU;

    t104 = (x569/((x570*x571)-x572));

    if (t104 != 0LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static int32_t x577 = -1270;
	volatile int32_t x578 = -1;
	uint16_t x579 = UINT16_MAX;
	uint8_t x580 = UINT8_MAX;

    t105 = (x577/((x578*x579)-x580));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x581 = 80978744;
	static int32_t x583 = -2725;
	int8_t x584 = -63;
	int32_t t106 = 842;

    t106 = (x581/((x582*x583)-x584));

    if (t106 != -161) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x585 = 470U;
	static volatile uint32_t x586 = 65131640U;
	volatile uint64_t x587 = 446LLU;
	int32_t x588 = INT32_MIN;
	uint64_t t107 = 1941656492029LLU;

    t107 = (x585/((x586*x587)-x588));

    if (t107 != 0LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x589 = 24059U;
	volatile uint16_t x590 = 5U;
	uint16_t x591 = 14U;
	volatile uint16_t x592 = 4335U;
	volatile int32_t t108 = -13;

    t108 = (x589/((x590*x591)-x592));

    if (t108 != -5) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x597 = UINT16_MAX;
	static volatile int32_t x599 = 72171;
	uint64_t x600 = UINT64_MAX;
	volatile uint64_t t109 = 13183518064LLU;

    t109 = (x597/((x598*x599)-x600));

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x601 = -1;
	uint16_t x602 = 6322U;
	int8_t x603 = INT8_MAX;
	static int32_t x604 = -1;
	int32_t t110 = -265541262;

    t110 = (x601/((x602*x603)-x604));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x605 = UINT32_MAX;
	uint16_t x606 = 210U;
	static uint32_t x607 = UINT32_MAX;
	uint64_t x608 = 3802488192LLU;
	uint64_t t111 = 2907099LLU;

    t111 = (x605/((x606*x607)-x608));

    if (t111 != 8LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static int64_t x609 = INT64_MAX;
	volatile int64_t x610 = -3LL;
	static volatile uint16_t x612 = 18767U;
	volatile int64_t t112 = -12165035LL;

    t112 = (x609/((x610*x611)-x612));

    if (t112 != -57851706227LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile uint64_t t113 = 2966089LLU;

    t113 = (x613/((x614*x615)-x616));

    if (t113 != 1LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x617 = -1LL;
	int16_t x618 = INT16_MIN;
	uint16_t x619 = 4U;
	volatile int8_t x620 = -1;
	volatile int64_t t114 = 50603349LL;

    t114 = (x617/((x618*x619)-x620));

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x621 = -4;
	uint32_t x622 = 4114760U;
	uint8_t x623 = 19U;
	static int32_t x624 = INT32_MIN;

    t115 = (x621/((x622*x623)-x624));

    if (t115 != 1U) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x633 = INT16_MAX;
	static uint16_t x634 = 1947U;
	static uint16_t x635 = UINT16_MAX;
	uint32_t x636 = 15874U;
	uint32_t t116 = 78116721U;

    t116 = (x633/((x634*x635)-x636));

    if (t116 != 0U) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x642 = -48;
	uint64_t x643 = 3340389LLU;
	static int8_t x644 = INT8_MIN;
	uint64_t t117 = 7LLU;

    t117 = (x641/((x642*x643)-x644));

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x645 = 9;
	static volatile uint16_t x646 = UINT16_MAX;
	uint16_t x647 = 20U;
	static volatile int32_t x648 = -31925912;
	int32_t t118 = -23;

    t118 = (x645/((x646*x647)-x648));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x649 = 9346U;
	static uint64_t x650 = 274LLU;
	uint32_t x651 = 807105U;
	int64_t x652 = -4106590636LL;

    t119 = (x649/((x650*x651)-x652));

    if (t119 != 0LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x662 = 1865;
	int16_t x663 = INT16_MIN;
	int16_t x664 = -4;

    t120 = (x661/((x662*x663)-x664));

    if (t120 != 35) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x665 = 41;
	int8_t x666 = -1;
	volatile int64_t x667 = -1LL;
	int16_t x668 = INT16_MAX;

    t121 = (x665/((x666*x667)-x668));

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x669 = 4;
	int8_t x672 = INT8_MIN;
	int64_t t122 = -3482040LL;

    t122 = (x669/((x670*x671)-x672));

    if (t122 != 4LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x673 = 59;
	int8_t x674 = 4;
	static int8_t x675 = 27;
	uint8_t x676 = UINT8_MAX;
	volatile int32_t t123 = -3;

    t123 = (x673/((x674*x675)-x676));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile uint16_t x677 = 12526U;
	int16_t x678 = -1;
	static int8_t x679 = INT8_MIN;
	int64_t x680 = INT64_MAX;
	volatile int64_t t124 = 22264129249LL;

    t124 = (x677/((x678*x679)-x680));

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int64_t x685 = -3037190604558318LL;
	int8_t x687 = 55;
	int16_t x688 = -361;
	volatile int64_t t125 = -4106385LL;

    t125 = (x685/((x686*x687)-x688));

    if (t125 != 2LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x689 = INT16_MIN;
	static volatile uint64_t x692 = UINT64_MAX;
	uint64_t t126 = 40749LLU;

    t126 = (x689/((x690*x691)-x692));

    if (t126 != 583310125626LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x693 = INT32_MIN;
	int16_t x694 = -1;
	volatile int8_t x696 = INT8_MIN;

    t127 = (x693/((x694*x695)-x696));

    if (t127 != 146402730726683079LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x698 = -1;
	static int32_t x699 = INT32_MAX;
	uint64_t t128 = 942480773999LLU;

    t128 = (x697/((x698*x699)-x700));

    if (t128 != 0LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x701 = INT64_MIN;
	static int16_t x702 = -1;
	int16_t x703 = INT16_MAX;
	int16_t x704 = 3930;
	int64_t t129 = -3707859LL;

    t129 = (x701/((x702*x703)-x704));

    if (t129 != 251338584539738LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x709 = INT64_MAX;
	uint16_t x710 = 1U;
	static int8_t x712 = INT8_MIN;
	int64_t t130 = -20830LL;

    t130 = (x709/((x710*x711)-x712));

    if (t130 != -1LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x717 = INT32_MIN;
	int64_t x718 = -57685013LL;
	int8_t x719 = 1;
	int32_t x720 = -332;
	static volatile int64_t t131 = -524788304LL;

    t131 = (x717/((x718*x719)-x720));

    if (t131 != 37LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x725 = -2;
	uint16_t x726 = 0U;
	int64_t x727 = INT64_MIN;
	int16_t x728 = -1;
	static int64_t t132 = -449227318804075919LL;

    t132 = (x725/((x726*x727)-x728));

    if (t132 != -2LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x731 = -1;

    t133 = (x729/((x730*x731)-x732));

    if (t133 != -8) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x733 = INT32_MIN;
	int32_t x735 = INT32_MIN;
	int16_t x736 = -45;

    t134 = (x733/((x734*x735)-x736));

    if (t134 != 1LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x741 = -39;
	volatile int8_t x742 = 4;
	int32_t x743 = -48;
	int64_t t135 = 33261782795282LL;

    t135 = (x741/((x742*x743)-x744));

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x746 = INT8_MIN;
	uint8_t x747 = 4U;
	uint64_t x748 = 397LLU;
	uint64_t t136 = 26922033LLU;

    t136 = (x745/((x746*x747)-x748));

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x753 = INT32_MIN;
	uint32_t x754 = UINT32_MAX;
	static int32_t x755 = 167395824;
	static int16_t x756 = -1;
	uint32_t t137 = 1665U;

    t137 = (x753/((x754*x755)-x756));

    if (t137 != 0U) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x757 = UINT8_MAX;
	int16_t x758 = INT16_MAX;
	int8_t x759 = INT8_MIN;
	int8_t x760 = INT8_MAX;
	int32_t t138 = 340266715;

    t138 = (x757/((x758*x759)-x760));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x761 = 1302LLU;
	uint64_t x762 = 30LLU;
	int32_t x764 = 1039741;
	uint64_t t139 = 7LLU;

    t139 = (x761/((x762*x763)-x764));

    if (t139 != 0LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x765 = 14152207096949305LLU;
	int16_t x767 = INT16_MAX;
	int8_t x768 = INT8_MIN;
	static uint64_t t140 = 64275298538807677LLU;

    t140 = (x765/((x766*x767)-x768));

    if (t140 != 110564117944916LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x769 = 21U;
	static int32_t x770 = -1;
	uint32_t x771 = 0U;
	int64_t x772 = -2998074807LL;
	static int64_t t141 = 70437775625LL;

    t141 = (x769/((x770*x771)-x772));

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x773 = -1;
	volatile int64_t x775 = -1LL;
	int16_t x776 = -1;
	int64_t t142 = 186508041232213357LL;

    t142 = (x773/((x774*x775)-x776));

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x777 = 1U;
	volatile int16_t x778 = INT16_MIN;
	uint8_t x779 = 15U;
	volatile uint8_t x780 = 4U;
	volatile uint32_t t143 = 26U;

    t143 = (x777/((x778*x779)-x780));

    if (t143 != 0U) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x789 = UINT32_MAX;
	static volatile int8_t x791 = -1;
	int8_t x792 = INT8_MIN;

    t144 = (x789/((x790*x791)-x792));

    if (t144 != 33818640U) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x797 = 4704U;
	uint64_t x798 = 17637LLU;
	static volatile uint64_t x799 = 1807LLU;
	static uint8_t x800 = 18U;
	volatile uint64_t t145 = 123701709054LLU;

    t145 = (x797/((x798*x799)-x800));

    if (t145 != 0LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x801 = 0;
	int64_t x802 = 39723238LL;
	int64_t x803 = -1LL;
	uint64_t x804 = 20769450072LLU;

    t146 = (x801/((x802*x803)-x804));

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x805 = UINT8_MAX;
	static uint64_t x806 = 370044063LLU;
	int64_t x807 = INT64_MAX;
	int64_t x808 = INT64_MIN;
	volatile uint64_t t147 = 285253807LLU;

    t147 = (x805/((x806*x807)-x808));

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x810 = 2268;
	uint64_t t148 = 8LLU;

    t148 = (x809/((x810*x811)-x812));

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x813 = 3098189LLU;
	static uint8_t x815 = 31U;
	uint64_t t149 = 0LLU;

    t149 = (x813/((x814*x815)-x816));

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x821 = INT8_MIN;
	int32_t x822 = -76;
	int32_t x823 = -1;
	int32_t t150 = 19286;

    t150 = (x821/((x822*x823)-x824));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x825 = INT8_MIN;
	int16_t x826 = -594;
	uint64_t x827 = 27115096LLU;
	int64_t x828 = INT64_MIN;
	uint64_t t151 = 110547499682118383LLU;

    t151 = (x825/((x826*x827)-x828));

    if (t151 != 2LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x846 = -22121798LL;
	int32_t x848 = -1;
	int64_t t152 = -6095038647LL;

    t152 = (x845/((x846*x847)-x848));

    if (t152 != -19832LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x849 = -1;
	uint64_t x850 = 232130764265LLU;
	volatile uint64_t t153 = 68194488571LLU;

    t153 = (x849/((x850*x851)-x852));

    if (t153 != 2LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x865 = INT16_MIN;
	int32_t x866 = -29839;
	int16_t x867 = 382;
	volatile int32_t t154 = -31603739;

    t154 = (x865/((x866*x867)-x868));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x869 = INT8_MIN;
	uint8_t x870 = 6U;
	uint64_t x871 = 1828LLU;
	static uint32_t x872 = 30969371U;
	volatile uint64_t t155 = 6LLU;

    t155 = (x869/((x870*x871)-x872));

    if (t155 != 1LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x873 = 62;
	static int32_t x874 = -1;
	int16_t x875 = 0;
	int8_t x876 = INT8_MAX;
	int32_t t156 = -806777485;

    t156 = (x873/((x874*x875)-x876));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x881 = -2;
	static int16_t x882 = -1;
	static int16_t x883 = INT16_MAX;
	static int64_t x884 = -1LL;
	int64_t t157 = 21LL;

    t157 = (x881/((x882*x883)-x884));

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x885 = 0U;
	int8_t x886 = INT8_MIN;
	volatile int16_t x887 = -1;
	uint64_t x888 = 1887063300375LLU;

    t158 = (x885/((x886*x887)-x888));

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x890 = 1;
	volatile uint8_t x892 = 25U;
	volatile int64_t t159 = -525522164584986661LL;

    t159 = (x889/((x890*x891)-x892));

    if (t159 != 60283477365063894LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x909 = 49012U;
	int32_t x910 = INT32_MAX;
	uint64_t x911 = 4994LLU;
	int16_t x912 = -1;

    t160 = (x909/((x910*x911)-x912));

    if (t160 != 0LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x913 = INT32_MIN;
	int16_t x914 = INT16_MIN;
	int32_t x915 = -6628;
	int8_t x916 = INT8_MIN;

    t161 = (x913/((x914*x915)-x916));

    if (t161 != -9) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x917 = INT16_MIN;
	int64_t x918 = 1LL;
	int8_t x919 = INT8_MAX;
	static uint8_t x920 = 32U;
	volatile int64_t t162 = 554189542159LL;

    t162 = (x917/((x918*x919)-x920));

    if (t162 != -344LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x921 = 172U;
	int8_t x922 = INT8_MIN;
	uint8_t x924 = 7U;
	uint32_t t163 = 406U;

    t163 = (x921/((x922*x923)-x924));

    if (t163 != 0U) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x925 = INT32_MIN;
	static int8_t x926 = -1;
	volatile int32_t x928 = INT32_MIN;
	volatile int64_t t164 = -1LL;

    t164 = (x925/((x926*x927)-x928));

    if (t164 != -1LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x929 = INT8_MAX;
	uint32_t x930 = 109652U;
	int8_t x931 = INT8_MIN;
	static int32_t x932 = 2;
	uint32_t t165 = 72U;

    t165 = (x929/((x930*x931)-x932));

    if (t165 != 0U) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x933 = INT8_MIN;
	int8_t x934 = INT8_MIN;
	uint16_t x936 = UINT16_MAX;
	int32_t t166 = 5;

    t166 = (x933/((x934*x935)-x936));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x945 = INT16_MIN;
	int8_t x946 = INT8_MIN;
	volatile int8_t x947 = INT8_MAX;
	int32_t t167 = 386151;

    t167 = (x945/((x946*x947)-x948));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x953 = INT32_MIN;
	uint8_t x955 = 6U;
	int8_t x956 = -11;
	volatile int32_t t168 = 418;

    t168 = (x953/((x954*x955)-x956));

    if (t168 != -21262214) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint64_t x958 = 1LLU;
	volatile int32_t x959 = 8591;
	volatile uint64_t t169 = 902LLU;

    t169 = (x957/((x958*x959)-x960));

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint64_t x961 = 82435597862450717LLU;
	int16_t x962 = INT16_MAX;
	uint32_t x963 = UINT32_MAX;

    t170 = (x961/((x962*x963)-x964));

    if (t170 != 19193679LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x965 = UINT64_MAX;
	int32_t x966 = 1;
	static uint8_t x967 = 32U;
	int8_t x968 = 0;
	uint64_t t171 = 4580993674569954LLU;

    t171 = (x965/((x966*x967)-x968));

    if (t171 != 576460752303423487LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t x977 = -756243;
	static int32_t x979 = INT32_MAX;
	int16_t x980 = INT16_MAX;
	volatile uint32_t t172 = 14672623U;

    t172 = (x977/((x978*x979)-x980));

    if (t172 != 1U) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x985 = 3U;
	static uint8_t x986 = 13U;
	static uint64_t x988 = UINT64_MAX;
	volatile uint64_t t173 = 150812701329994LLU;

    t173 = (x985/((x986*x987)-x988));

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint64_t x990 = UINT64_MAX;
	uint64_t x991 = 6015LLU;
	int8_t x992 = 2;
	volatile uint64_t t174 = 3777LLU;

    t174 = (x989/((x990*x991)-x992));

    if (t174 != 1LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x997 = 25;
	static int64_t x998 = -1LL;
	uint64_t x999 = UINT64_MAX;
	int32_t x1000 = -1;
	static uint64_t t175 = 13210581359340906LLU;

    t175 = (x997/((x998*x999)-x1000));

    if (t175 != 12LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x1001 = -1LL;
	static volatile int32_t x1002 = 23750330;
	uint32_t x1003 = 51952132U;
	static uint16_t x1004 = 30U;
	int64_t t176 = 1LL;

    t176 = (x1001/((x1002*x1003)-x1004));

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x1005 = 6114U;
	uint64_t x1006 = UINT64_MAX;
	uint16_t x1007 = UINT16_MAX;
	static volatile uint16_t x1008 = UINT16_MAX;

    t177 = (x1005/((x1006*x1007)-x1008));

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x1018 = -832788LL;
	uint32_t x1019 = 2952814U;
	int16_t x1020 = -1;
	static volatile int64_t t178 = -182642881451LL;

    t178 = (x1017/((x1018*x1019)-x1020));

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x1021 = UINT8_MAX;
	int8_t x1022 = INT8_MIN;
	uint16_t x1023 = UINT16_MAX;
	uint32_t x1024 = 1851679236U;
	static uint32_t t179 = 2070995U;

    t179 = (x1021/((x1022*x1023)-x1024));

    if (t179 != 0U) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x1029 = INT64_MAX;
	int8_t x1030 = -1;
	int32_t x1031 = -77295;

    t180 = (x1029/((x1030*x1031)-x1032));

    if (t180 != 119331522497215LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x1033 = 2397U;
	int8_t x1034 = INT8_MIN;
	int16_t x1035 = INT16_MIN;
	int64_t t181 = 2078369997455345672LL;

    t181 = (x1033/((x1034*x1035)-x1036));

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x1037 = 16263733833695719LLU;
	uint64_t x1038 = UINT64_MAX;
	uint64_t x1039 = UINT64_MAX;
	int32_t x1040 = 124694655;

    t182 = (x1037/((x1038*x1039)-x1040));

    if (t182 != 0LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x1041 = INT8_MIN;
	static int16_t x1042 = INT16_MAX;
	int64_t x1043 = -43466919146744LL;
	volatile int32_t x1044 = INT32_MAX;
	int64_t t183 = 1884104592444420806LL;

    t183 = (x1041/((x1042*x1043)-x1044));

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x1045 = 10324543424LL;
	int8_t x1046 = -16;
	static int16_t x1047 = 9;
	int32_t x1048 = -1;

    t184 = (x1045/((x1046*x1047)-x1048));

    if (t184 != -72199604LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x1049 = -1;
	int8_t x1051 = INT8_MAX;
	static volatile uint32_t t185 = 9U;

    t185 = (x1049/((x1050*x1051)-x1052));

    if (t185 != 1U) { NG(); } else { ; }
	
}

void f186(void) {
    	static int8_t x1053 = INT8_MIN;
	static volatile int8_t x1054 = 0;
	volatile uint64_t x1055 = 3575860229865396LLU;
	int8_t x1056 = INT8_MIN;
	volatile uint64_t t186 = 469355LLU;

    t186 = (x1053/((x1054*x1055)-x1056));

    if (t186 != 144115188075855871LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x1066 = 456971648667282120LLU;
	uint32_t x1067 = 203246010U;
	uint32_t x1068 = UINT32_MAX;
	volatile uint64_t t187 = 663071365956747269LLU;

    t187 = (x1065/((x1066*x1067)-x1068));

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x1069 = INT64_MIN;
	static int32_t x1070 = 1000518077;
	int8_t x1071 = -1;
	uint32_t x1072 = UINT32_MAX;
	volatile int64_t t188 = -15898LL;

    t188 = (x1069/((x1070*x1071)-x1072));

    if (t188 != -2799670421LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint8_t x1078 = 119U;
	uint64_t x1079 = UINT64_MAX;
	volatile uint8_t x1080 = 31U;
	volatile uint64_t t189 = 9203038329626LLU;

    t189 = (x1077/((x1078*x1079)-x1080));

    if (t189 != 0LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x1093 = INT32_MIN;
	static uint16_t x1094 = UINT16_MAX;
	uint16_t x1096 = 26U;
	int32_t t190 = -29;

    t190 = (x1093/((x1094*x1095)-x1096));

    if (t190 != -32781) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x1097 = 36U;
	uint8_t x1098 = 125U;
	volatile int32_t t191 = 492127271;

    t191 = (x1097/((x1098*x1099)-x1100));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x1105 = INT64_MIN;
	uint64_t x1108 = UINT64_MAX;
	static uint64_t t192 = 465886038650282588LLU;

    t192 = (x1105/((x1106*x1107)-x1108));

    if (t192 != 0LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x1118 = UINT16_MAX;
	int8_t x1119 = INT8_MAX;
	uint32_t x1120 = 303U;

    t193 = (x1117/((x1118*x1119)-x1120));

    if (t193 != 3744LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x1121 = -1;
	uint32_t x1122 = 26324U;
	static uint64_t x1123 = 35786353085LLU;
	uint64_t x1124 = 6596560865287642411LLU;

    t194 = (x1121/((x1122*x1123)-x1124));

    if (t194 != 1LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int32_t x1129 = INT32_MIN;
	static int64_t x1130 = -389LL;
	volatile uint32_t x1131 = 143U;
	int32_t x1132 = -272193;

    t195 = (x1129/((x1130*x1131)-x1132));

    if (t195 != -9916LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x1133 = -1058736909;
	int16_t x1135 = INT16_MIN;
	volatile int64_t t196 = -210LL;

    t196 = (x1133/((x1134*x1135)-x1136));

    if (t196 != -8LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x1137 = -1;
	static volatile int16_t x1138 = INT16_MIN;
	static int32_t x1139 = -1;
	static volatile int32_t t197 = -1201;

    t197 = (x1137/((x1138*x1139)-x1140));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x1141 = INT8_MAX;
	uint64_t x1142 = 1980164166943195LLU;
	uint64_t x1144 = 101503849LLU;
	volatile uint64_t t198 = 5417520441LLU;

    t198 = (x1141/((x1142*x1143)-x1144));

    if (t198 != 0LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x1149 = -1;
	int32_t x1152 = 10;
	volatile int64_t t199 = 1LL;

    t199 = (x1149/((x1150*x1151)-x1152));

    if (t199 != 0LL) { NG(); } else { ; }
	
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

