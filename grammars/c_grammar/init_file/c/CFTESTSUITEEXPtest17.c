
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

static int32_t t0 = 115;
uint8_t x5 = UINT8_MAX;
int8_t x6 = 0;
static uint64_t x8 = UINT64_MAX;
int16_t x17 = -1;
static int16_t x19 = 25;
volatile uint16_t x20 = UINT16_MAX;
static uint32_t t4 = 2U;
int32_t x34 = 133696130;
volatile int32_t t6 = -24367;
int16_t x47 = INT16_MAX;
volatile uint32_t x48 = 63872U;
int16_t x66 = INT16_MIN;
volatile uint32_t t8 = 7U;
volatile uint8_t x73 = UINT8_MAX;
volatile uint32_t t11 = 794675792U;
int32_t x89 = INT32_MIN;
static volatile int32_t t13 = 64277;
int64_t x124 = INT64_MIN;
static uint64_t t15 = 49877LLU;
uint16_t x138 = UINT16_MAX;
int8_t x150 = -1;
uint32_t x151 = 732325U;
uint16_t x164 = UINT16_MAX;
volatile int32_t t24 = 1195;
uint8_t x207 = UINT8_MAX;
static int16_t x210 = INT16_MIN;
int16_t x211 = INT16_MAX;
uint64_t x212 = 28267LLU;
uint64_t x228 = UINT64_MAX;
volatile uint64_t t33 = 5824326544421914447LLU;
uint32_t x243 = UINT32_MAX;
volatile int64_t x245 = -1LL;
int64_t x248 = INT64_MIN;
int8_t x253 = INT8_MIN;
static volatile int64_t t38 = -469116830704794414LL;
uint8_t x258 = UINT8_MAX;
int64_t t39 = 35866226832LL;
volatile int8_t x261 = INT8_MIN;
uint64_t x262 = 16001LLU;
static volatile uint32_t x267 = 3610103U;
uint16_t x270 = 17811U;
int64_t x271 = -1LL;
int16_t x273 = -1;
volatile int16_t x295 = 1;
volatile uint64_t t48 = 6405903573015820169LLU;
static int64_t x307 = -173879726275700LL;
int8_t x313 = -1;
int32_t x316 = INT32_MAX;
volatile int64_t t50 = 132005202464222LL;
volatile int8_t x318 = -1;
static uint64_t x319 = 4474052136990395LLU;
uint64_t x320 = UINT64_MAX;
static int16_t x322 = -1;
uint16_t x323 = 8U;
static int64_t t52 = -15735939655933LL;
static int8_t x325 = INT8_MAX;
uint64_t x330 = 1278627532LLU;
int32_t x332 = INT32_MIN;
int16_t x342 = -12;
int8_t x343 = 1;
volatile uint64_t t57 = 2LLU;
int64_t x351 = 500860LL;
volatile uint16_t x356 = UINT16_MAX;
int8_t x357 = -4;
int32_t t60 = 21259;
static volatile uint64_t x361 = 96547312193789577LLU;
uint32_t x362 = 12996U;
uint8_t x363 = UINT8_MAX;
uint64_t x366 = 3LLU;
volatile uint64_t t62 = 7LLU;
volatile int64_t t63 = 32819634248959572LL;
static volatile int16_t x376 = INT16_MIN;
static int32_t t64 = -2958;
volatile uint64_t x378 = UINT64_MAX;
int16_t x380 = INT16_MIN;
static uint64_t x397 = 79348LLU;
int32_t x400 = -64587118;
uint64_t x424 = 3460300161312755209LLU;
static uint64_t t70 = 4LLU;
uint64_t t74 = 679953203614LLU;
uint32_t x445 = UINT32_MAX;
int64_t x446 = -6105263LL;
static int16_t x454 = INT16_MIN;
volatile uint64_t t78 = 80540164306223LLU;
static int32_t x473 = -1432697;
int64_t x481 = INT64_MIN;
uint64_t x482 = UINT64_MAX;
volatile int32_t t83 = -3;
static int8_t x503 = INT8_MIN;
uint8_t x504 = 27U;
uint64_t x508 = UINT64_MAX;
uint8_t x518 = 15U;
volatile int8_t x520 = INT8_MIN;
int64_t x537 = 82091LL;
int16_t x562 = -27;
volatile uint32_t t93 = 0U;
volatile int16_t x568 = INT16_MIN;
volatile int64_t t94 = 246023063471LL;
int64_t x573 = INT64_MAX;
volatile int8_t x578 = INT8_MIN;
uint32_t x587 = 72574051U;
static int32_t x590 = 1731089;
volatile uint8_t x591 = 55U;
static int16_t x597 = INT16_MIN;
int8_t x610 = 0;
static volatile int32_t t102 = -64529;
volatile int8_t x620 = -1;
int8_t x638 = INT8_MIN;
static int32_t x639 = 7856;
volatile uint64_t x641 = UINT64_MAX;
volatile int8_t x642 = INT8_MAX;
volatile int32_t t111 = 21785;
int8_t x665 = -1;
uint8_t x668 = 127U;
uint8_t x673 = UINT8_MAX;
volatile uint32_t x676 = 498555U;
static uint64_t t113 = 4527LLU;
volatile uint32_t x678 = 58558U;
static volatile uint8_t x679 = 14U;
volatile uint32_t x706 = 23329U;
uint16_t x708 = UINT16_MAX;
int16_t x709 = -8;
volatile int16_t x713 = -7;
int8_t x714 = INT8_MIN;
volatile int8_t x715 = INT8_MAX;
static uint32_t x721 = 4284U;
uint32_t x723 = UINT32_MAX;
uint32_t x730 = 9151U;
int32_t x797 = INT32_MAX;
static uint64_t x806 = 116594163159197699LLU;
int16_t x808 = INT16_MAX;
int64_t x817 = INT64_MIN;
static int8_t x818 = -1;
volatile uint64_t t134 = 8868LLU;
volatile int8_t x837 = INT8_MIN;
uint32_t x839 = 0U;
uint32_t x842 = 3518498U;
int8_t x847 = INT8_MAX;
int8_t x848 = INT8_MAX;
int32_t x865 = INT32_MAX;
uint8_t x881 = 110U;
static volatile int32_t x885 = -1;
volatile uint32_t x888 = 2931U;
static volatile uint16_t x889 = UINT16_MAX;
volatile int64_t t147 = -289906790849927487LL;
int64_t x897 = 88489646LL;
int64_t t148 = -136976LL;
uint64_t x905 = UINT64_MAX;
uint64_t t150 = 750820375656019851LLU;
volatile int8_t x932 = INT8_MIN;
int8_t x934 = INT8_MIN;
int8_t x935 = INT8_MIN;
uint64_t t152 = 20320312432620LLU;
int8_t x937 = -26;
int16_t x938 = INT16_MIN;
uint32_t x940 = UINT32_MAX;
volatile uint32_t t153 = 11115U;
uint32_t x948 = 670623165U;
int32_t x949 = INT32_MIN;
uint64_t x956 = UINT64_MAX;
int8_t x965 = 0;
int8_t x966 = -1;
volatile int64_t x968 = INT64_MIN;
static volatile int64_t t159 = -53978LL;
uint16_t x972 = 3U;
int16_t x975 = INT16_MIN;
volatile int32_t x976 = -92;
volatile int32_t x979 = INT32_MAX;
volatile int8_t x980 = INT8_MAX;
uint32_t t165 = 45076224U;
uint16_t x1053 = 1766U;
volatile int8_t x1056 = -43;
int32_t t171 = 1;
volatile int64_t t172 = -90644758901LL;
uint32_t x1067 = 90135668U;
int32_t x1073 = INT32_MAX;
int8_t x1075 = INT8_MIN;
uint32_t x1076 = UINT32_MAX;
volatile uint32_t t174 = 561231287U;
int64_t t175 = 120117456648LL;
uint64_t t176 = 3351LLU;
uint16_t x1094 = 3U;
int32_t t177 = -665205625;
int64_t x1100 = -1LL;
int32_t x1106 = -2;
static uint32_t t180 = 0U;
uint64_t x1114 = 45742045944LLU;
volatile int8_t x1116 = 48;
volatile int64_t t183 = 168151963399203900LL;
uint32_t x1139 = 893092566U;
uint32_t x1140 = 52U;
static uint8_t x1157 = UINT8_MAX;
int8_t x1172 = INT8_MAX;
int32_t x1179 = INT32_MAX;
uint32_t x1180 = 2059197016U;
static volatile int16_t x1198 = -1;
uint8_t x1217 = 2U;
volatile uint32_t x1219 = UINT32_MAX;
static volatile int8_t x1221 = 1;
uint32_t x1222 = UINT32_MAX;
uint64_t t197 = 4373757474868LLU;
volatile uint64_t x1229 = 399023820556002143LLU;
uint64_t x1234 = UINT64_MAX;
uint64_t x1236 = UINT64_MAX;


void f0(void) {
    	int16_t x1 = INT16_MAX;
	uint16_t x2 = UINT16_MAX;
	int32_t x3 = 1;
	static uint8_t x4 = 1U;

    t0 = (x1*((x2+x3)-x4));

    if (t0 != 2147385345) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x7 = 3;
	volatile uint64_t t1 = 644492643491773825LLU;

    t1 = (x5*((x6+x7)-x8));

    if (t1 != 1020LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = -1;
	int8_t x10 = -9;
	int8_t x11 = INT8_MIN;
	static int8_t x12 = 0;
	int32_t t2 = 10048;

    t2 = (x9*((x10+x11)-x12));

    if (t2 != 137) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x18 = INT16_MIN;
	volatile int32_t t3 = 100;

    t3 = (x17*((x18+x19)-x20));

    if (t3 != 98278) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint32_t x21 = 472393201U;
	static int16_t x22 = INT16_MAX;
	int16_t x23 = 1;
	int16_t x24 = -1;

    t4 = (x21*((x22+x23)-x24));

    if (t4 != 790668785U) { NG(); } else { ; }
	
}

void f5(void) {
    	static int64_t x33 = 15210834424LL;
	int8_t x35 = INT8_MIN;
	volatile uint32_t x36 = UINT32_MAX;
	int64_t t5 = -2607LL;

    t5 = (x33*((x34+x35)-x36));

    if (t5 != 2033627764783607272LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x41 = INT16_MIN;
	int8_t x42 = INT8_MIN;
	volatile int16_t x43 = 1;
	int16_t x44 = -1;

    t6 = (x41*((x42+x43)-x44));

    if (t6 != 4128768) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x45 = 346U;
	static uint32_t x46 = UINT32_MAX;
	static volatile uint32_t t7 = 28054321U;

    t7 = (x45*((x46+x47)-x48));

    if (t7 != 4284204620U) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x65 = 61;
	uint16_t x67 = 10U;
	static uint32_t x68 = 215308083U;

    t8 = (x65*((x66+x67)-x68));

    if (t8 != 4044077883U) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x74 = -1;
	uint64_t x75 = 1667616038LLU;
	volatile int8_t x76 = INT8_MIN;
	uint64_t t9 = 50495937LLU;

    t9 = (x73*((x74+x75)-x76));

    if (t9 != 425242122075LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x81 = -1;
	int64_t x82 = INT64_MAX;
	static int16_t x83 = INT16_MIN;
	uint32_t x84 = 118U;
	int64_t t10 = -155905700LL;

    t10 = (x81*((x82+x83)-x84));

    if (t10 != -9223372036854742921LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x85 = -579;
	int8_t x86 = 8;
	int32_t x87 = -1;
	uint32_t x88 = 1921053716U;

    t11 = (x85*((x86+x87)-x88));

    if (t11 != 4188535143U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x90 = UINT32_MAX;
	uint64_t x91 = 5861998437904058724LLU;
	uint32_t x92 = UINT32_MAX;
	static uint64_t t12 = 2857LLU;

    t12 = (x89*((x90+x91)-x92));

    if (t12 != 5578477032133623808LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x101 = -52;
	volatile int32_t x102 = INT32_MAX;
	int32_t x103 = INT32_MIN;
	uint8_t x104 = 16U;

    t13 = (x101*((x102+x103)-x104));

    if (t13 != 884) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x105 = -7732807185LL;
	volatile int32_t x106 = INT32_MIN;
	uint64_t x107 = 4196213976325379054LLU;
	volatile int32_t x108 = 66238193;
	uint64_t t14 = 177861208093598LLU;

    t14 = (x105*((x106+x107)-x108));

    if (t14 != 13625658531470337331LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static int16_t x121 = INT16_MIN;
	static uint64_t x122 = UINT64_MAX;
	int32_t x123 = 1;

    t15 = (x121*((x122+x123)-x124));

    if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x125 = UINT32_MAX;
	volatile uint16_t x126 = 984U;
	int16_t x127 = INT16_MIN;
	int8_t x128 = INT8_MAX;
	static volatile uint32_t t16 = 247U;

    t16 = (x125*((x126+x127)-x128));

    if (t16 != 31911U) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint16_t x129 = 452U;
	uint16_t x130 = 2U;
	volatile uint8_t x131 = UINT8_MAX;
	int64_t x132 = -21052LL;
	int64_t t17 = -16494834415046LL;

    t17 = (x129*((x130+x131)-x132));

    if (t17 != 9631668LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x137 = INT16_MIN;
	static uint32_t x139 = 26147U;
	volatile uint8_t x140 = UINT8_MAX;
	volatile uint32_t t18 = 21189031U;

    t18 = (x137*((x138+x139)-x140));

    if (t18 != 1299087360U) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x141 = INT16_MIN;
	static int64_t x142 = 17843419926LL;
	volatile int8_t x143 = INT8_MIN;
	int32_t x144 = INT32_MIN;
	int64_t t19 = 9436206LL;

    t19 = (x141*((x142+x143)-x144));

    if (t19 != -655061924118528LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x145 = UINT16_MAX;
	volatile int32_t x146 = 12;
	uint32_t x147 = 917694623U;
	volatile int8_t x148 = -1;
	uint32_t t20 = 924072U;

    t20 = (x145*((x146+x147)-x148));

    if (t20 != 2985891668U) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x149 = INT8_MIN;
	int32_t x152 = INT32_MIN;
	volatile uint32_t t21 = 63747073U;

    t21 = (x149*((x150+x151)-x152));

    if (t21 != 4201229824U) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x161 = -1LL;
	int8_t x162 = INT8_MIN;
	uint32_t x163 = 4U;
	static volatile int64_t t22 = -72207007LL;

    t22 = (x161*((x162+x163)-x164));

    if (t22 != -4294901637LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int32_t x165 = INT32_MIN;
	volatile int16_t x166 = -1;
	static uint64_t x167 = 2509LLU;
	volatile int64_t x168 = INT64_MIN;
	static uint64_t t23 = 0LLU;

    t23 = (x165*((x166+x167)-x168));

    if (t23 != 18446738687820562432LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint16_t x173 = 56U;
	int8_t x174 = INT8_MIN;
	static uint8_t x175 = 1U;
	int16_t x176 = 1;

    t24 = (x173*((x174+x175)-x176));

    if (t24 != -7168) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x181 = 32;
	static int16_t x182 = -9416;
	int32_t x183 = INT32_MAX;
	static uint64_t x184 = 799441LLU;
	uint64_t t25 = 676293572904057162LLU;

    t25 = (x181*((x182+x183)-x184));

    if (t25 != 68693593280LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x185 = INT8_MAX;
	static int8_t x186 = -1;
	int64_t x187 = 14413005839LL;
	int8_t x188 = 1;
	int64_t t26 = 62LL;

    t26 = (x185*((x186+x187)-x188));

    if (t26 != 1830451741299LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x189 = UINT8_MAX;
	static int16_t x190 = INT16_MIN;
	static int64_t x191 = 341807LL;
	uint64_t x192 = 4422979217LLU;
	volatile uint64_t t27 = 26588311962189385LLU;

    t27 = (x189*((x190+x191)-x192));

    if (t27 != 18446742945928656226LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x193 = 40;
	int8_t x194 = -11;
	static volatile uint16_t x195 = 9053U;
	uint16_t x196 = 1U;
	int32_t t28 = -99872986;

    t28 = (x193*((x194+x195)-x196));

    if (t28 != 361640) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x205 = INT16_MIN;
	int32_t x206 = -1;
	int64_t x208 = -143191057LL;
	volatile int64_t t29 = 200264100994887LL;

    t29 = (x205*((x206+x207)-x208));

    if (t29 != -4692092878848LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static int16_t x209 = INT16_MAX;
	static volatile uint64_t t30 = 1865287234LLU;

    t30 = (x209*((x210+x211)-x212));

    if (t30 != 18446744072783294060LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x221 = 960569660LLU;
	int32_t x222 = 25979;
	uint32_t x223 = 1U;
	volatile int8_t x224 = INT8_MIN;
	uint64_t t31 = 304156LLU;

    t31 = (x221*((x222+x223)-x224));

    if (t31 != 25078552683280LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x225 = UINT16_MAX;
	volatile uint32_t x226 = 7791866U;
	uint32_t x227 = 82638U;
	static volatile uint64_t t32 = 130126767807LLU;

    t32 = (x225*((x226+x227)-x228));

    if (t32 != 516055685175LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x229 = -302543463414942LL;
	volatile uint64_t x230 = 55864276873LLU;
	volatile int32_t x231 = INT32_MIN;
	static volatile int32_t x232 = -133;

    t33 = (x229*((x230+x231)-x232));

    if (t33 != 9056584411097898844LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x233 = 231345614U;
	uint32_t x234 = 65424079U;
	uint64_t x235 = UINT64_MAX;
	volatile int64_t x236 = INT64_MAX;
	volatile uint64_t t34 = 807280084609113LLU;

    t34 = (x233*((x234+x235)-x236));

    if (t34 != 15135573726639506LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint8_t x237 = UINT8_MAX;
	int8_t x238 = 1;
	int16_t x239 = INT16_MIN;
	uint64_t x240 = 460110805LLU;
	uint64_t t35 = 1551397LLU;

    t35 = (x237*((x238+x239)-x240));

    if (t35 != 18446743956372940756LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x241 = 11985467815LLU;
	int32_t x242 = INT32_MIN;
	uint16_t x244 = UINT16_MAX;
	volatile uint64_t t36 = 42312660LLU;

    t36 = (x241*((x242+x243)-x244));

    if (t36 != 7291066593014513664LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x246 = -85196;
	uint16_t x247 = 10441U;
	volatile int64_t t37 = 50607252LL;

    t37 = (x245*((x246+x247)-x248));

    if (t37 != -9223372036854701053LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x254 = INT16_MIN;
	volatile int8_t x255 = -1;
	volatile int64_t x256 = 134676818031865LL;

    t38 = (x253*((x254+x255)-x256));

    if (t38 != 17238632712273152LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x257 = 354265LL;
	static volatile int16_t x259 = -1;
	uint8_t x260 = UINT8_MAX;

    t39 = (x257*((x258+x259)-x260));

    if (t39 != -354265LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x263 = UINT8_MAX;
	uint64_t x264 = 165783923LLU;
	volatile uint64_t t40 = 3108479843098167LLU;

    t40 = (x261*((x262+x263)-x264));

    if (t40 != 21218261376LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x265 = -1;
	static int32_t x266 = INT32_MAX;
	static int8_t x268 = INT8_MIN;
	uint32_t t41 = 89745U;

    t41 = (x265*((x266+x267)-x268));

    if (t41 != 2143873418U) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x269 = INT32_MAX;
	static int16_t x272 = INT16_MIN;
	volatile int64_t t42 = -14101355171831986LL;

    t42 = (x269*((x270+x271)-x272));

    if (t42 != 108615427897966LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x274 = INT32_MIN;
	uint8_t x275 = UINT8_MAX;
	volatile int8_t x276 = INT8_MIN;
	int32_t t43 = -36;

    t43 = (x273*((x274+x275)-x276));

    if (t43 != 2147483265) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x277 = 2415;
	int32_t x278 = -5;
	uint8_t x279 = UINT8_MAX;
	static uint32_t x280 = 60263U;
	static volatile uint32_t t44 = 1175103003U;

    t44 = (x277*((x278+x279)-x280));

    if (t44 != 4150035901U) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x285 = -1LL;
	int16_t x286 = 7;
	int32_t x287 = -1;
	volatile uint64_t x288 = UINT64_MAX;
	static volatile uint64_t t45 = 276052431574461LLU;

    t45 = (x285*((x286+x287)-x288));

    if (t45 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x293 = INT16_MIN;
	int16_t x294 = 0;
	uint32_t x296 = 3428U;
	uint32_t t46 = 86463927U;

    t46 = (x293*((x294+x295)-x296));

    if (t46 != 112295936U) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x297 = UINT16_MAX;
	uint64_t x298 = UINT64_MAX;
	static volatile int16_t x299 = -7;
	int32_t x300 = 229;
	static volatile uint64_t t47 = 13464086LLU;

    t47 = (x297*((x298+x299)-x300));

    if (t47 != 18446744073694019821LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x301 = 1U;
	uint8_t x302 = 19U;
	uint64_t x303 = UINT64_MAX;
	volatile uint64_t x304 = UINT64_MAX;

    t48 = (x301*((x302+x303)-x304));

    if (t48 != 19LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x305 = -1;
	uint64_t x306 = 108260192875LLU;
	volatile int32_t x308 = INT32_MIN;
	uint64_t t49 = 16984056LLU;

    t49 = (x305*((x306+x307)-x308));

    if (t49 != 173769318599177LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x314 = 1583;
	int64_t x315 = 0LL;

    t50 = (x313*((x314+x315)-x316));

    if (t50 != 2147482064LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x317 = -31;
	volatile uint64_t t51 = 0LLU;

    t51 = (x317*((x318+x319)-x320));

    if (t51 != 18308048457462849371LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int64_t x321 = -1LL;
	uint16_t x324 = 222U;

    t52 = (x321*((x322+x323)-x324));

    if (t52 != 215LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x326 = 818LL;
	int32_t x327 = -1;
	int16_t x328 = INT16_MAX;
	int64_t t53 = 3LL;

    t53 = (x325*((x326+x327)-x328));

    if (t53 != -4057650LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x329 = -643;
	int32_t x331 = -1;
	static uint64_t t54 = 1607964LLU;

    t54 = (x329*((x330+x331)-x332));

    if (t54 != 18446741870720063519LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x337 = 376815U;
	volatile int32_t x338 = INT32_MIN;
	static uint8_t x339 = 0U;
	int32_t x340 = -1;
	uint32_t t55 = 268190U;

    t55 = (x337*((x338+x339)-x340));

    if (t55 != 2147860463U) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x341 = -1;
	int8_t x344 = -1;
	int32_t t56 = 592069521;

    t56 = (x341*((x342+x343)-x344));

    if (t56 != 10) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x345 = INT8_MIN;
	uint64_t x346 = 4202LLU;
	uint64_t x347 = 5766LLU;
	int32_t x348 = INT32_MAX;

    t57 = (x345*((x346+x347)-x348));

    if (t57 != 274876630912LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x349 = INT16_MAX;
	uint8_t x350 = 0U;
	int8_t x352 = INT8_MIN;
	int64_t t58 = 47584014285LL;

    t58 = (x349*((x350+x351)-x352));

    if (t58 != 16415873796LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x353 = -1;
	int16_t x354 = INT16_MIN;
	int8_t x355 = INT8_MIN;
	int32_t t59 = -1;

    t59 = (x353*((x354+x355)-x356));

    if (t59 != 98431) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x358 = 16119;
	int16_t x359 = -1;
	uint8_t x360 = 10U;

    t60 = (x357*((x358+x359)-x360));

    if (t60 != -64432) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x364 = 1;
	static volatile uint64_t t61 = 105385997366LLU;

    t61 = (x361*((x362+x363)-x364));

    if (t61 != 6426545481752833746LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x365 = -1;
	int8_t x367 = -1;
	volatile uint32_t x368 = 440450U;

    t62 = (x365*((x366+x367)-x368));

    if (t62 != 440448LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x369 = INT32_MIN;
	int32_t x370 = INT32_MIN;
	volatile int64_t x371 = 996LL;
	int16_t x372 = INT16_MIN;

    t63 = (x369*((x370+x371)-x372));

    if (t63 != 4611613510789496832LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x373 = 0;
	int8_t x374 = INT8_MAX;
	int16_t x375 = -242;

    t64 = (x373*((x374+x375)-x376));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x377 = 0;
	static int16_t x379 = -1;
	uint64_t t65 = 6LLU;

    t65 = (x377*((x378+x379)-x380));

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x381 = 37870442808379LLU;
	volatile uint32_t x382 = 763564393U;
	int16_t x383 = 0;
	static int32_t x384 = -1;
	volatile uint64_t t66 = 2056154549LLU;

    t66 = (x381*((x382+x383)-x384));

    if (t66 != 10473749988701875054LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x393 = 117343U;
	volatile int16_t x394 = -7789;
	volatile int16_t x395 = -1;
	static int32_t x396 = -779973;
	uint32_t t67 = 365691485U;

    t67 = (x393*((x394+x395)-x396));

    if (t67 != 415956553U) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint64_t x398 = 334706893111LLU;
	uint32_t x399 = UINT32_MAX;
	volatile uint64_t t68 = 20849991LLU;

    t68 = (x397*((x398+x399)-x400));

    if (t68 != 26904244478134352LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint64_t x421 = 4LLU;
	int64_t x422 = -181461758220338LL;
	volatile int64_t x423 = -985616818LL;
	volatile uint64_t t69 = 436050165LLU;

    t69 = (x421*((x422+x423)-x424));

    if (t69 != 4604817577483182156LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x425 = 926110030363LLU;
	int16_t x426 = -5;
	int64_t x427 = 1894658768LL;
	int64_t x428 = 13515519LL;

    t70 = (x425*((x426+x427)-x428));

    if (t70 != 8151683889294465668LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x429 = INT8_MAX;
	uint8_t x430 = 2U;
	volatile uint8_t x431 = UINT8_MAX;
	int8_t x432 = INT8_MIN;
	volatile int32_t t71 = -121;

    t71 = (x429*((x430+x431)-x432));

    if (t71 != 48895) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint32_t x433 = 59U;
	uint32_t x434 = 0U;
	uint8_t x435 = UINT8_MAX;
	static volatile int16_t x436 = -76;
	uint32_t t72 = 31308U;

    t72 = (x433*((x434+x435)-x436));

    if (t72 != 19529U) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint32_t x437 = UINT32_MAX;
	volatile uint8_t x438 = UINT8_MAX;
	static volatile int8_t x439 = INT8_MIN;
	uint8_t x440 = 74U;
	uint32_t t73 = 19169427U;

    t73 = (x437*((x438+x439)-x440));

    if (t73 != 4294967243U) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x441 = UINT64_MAX;
	int16_t x442 = 0;
	static volatile int8_t x443 = INT8_MIN;
	uint32_t x444 = UINT32_MAX;

    t74 = (x441*((x442+x443)-x444));

    if (t74 != 18446744069414584447LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x447 = UINT64_MAX;
	volatile uint8_t x448 = 105U;
	volatile uint64_t t75 = 3979LLU;

    t75 = (x445*((x446+x447)-x448));

    if (t75 != 18420521713530644761LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x449 = 1369;
	int32_t x450 = INT32_MIN;
	int64_t x451 = -1LL;
	uint64_t x452 = UINT64_MAX;
	static volatile uint64_t t76 = 3358579757019006443LLU;

    t76 = (x449*((x450+x451)-x452));

    if (t76 != 18446741133804437504LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile int8_t x453 = -1;
	volatile int16_t x455 = INT16_MAX;
	int32_t x456 = -14539178;
	static int32_t t77 = -1;

    t77 = (x453*((x454+x455)-x456));

    if (t77 != -14539177) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x457 = 18U;
	uint64_t x458 = 11LLU;
	int8_t x459 = INT8_MAX;
	uint16_t x460 = 821U;

    t78 = (x457*((x458+x459)-x460));

    if (t78 != 18446744073709539322LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x465 = -1;
	static int8_t x466 = -1;
	uint16_t x467 = 29U;
	static int16_t x468 = INT16_MIN;
	static volatile int32_t t79 = 200;

    t79 = (x465*((x466+x467)-x468));

    if (t79 != -32796) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint8_t x474 = UINT8_MAX;
	uint64_t x475 = UINT64_MAX;
	int32_t x476 = 2674080;
	volatile uint64_t t80 = 35921815329401994LLU;

    t80 = (x473*((x474+x475)-x476));

    if (t80 != 3830782488722LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x483 = 0U;
	static volatile uint32_t x484 = UINT32_MAX;
	volatile uint64_t t81 = 1208672LLU;

    t81 = (x481*((x482+x483)-x484));

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x485 = 137061542466LLU;
	int64_t x486 = -1LL;
	static int64_t x487 = -1LL;
	uint32_t x488 = 3647392U;
	uint64_t t82 = 3197167439803028LLU;

    t82 = (x485*((x486+x487)-x488));

    if (t82 != 17946826626088318012LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x489 = UINT8_MAX;
	static int16_t x490 = -1;
	static uint8_t x491 = UINT8_MAX;
	int8_t x492 = INT8_MIN;

    t83 = (x489*((x490+x491)-x492));

    if (t83 != 97410) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint8_t x497 = 36U;
	int64_t x498 = INT64_MAX;
	volatile uint64_t x499 = 9582456690944249LLU;
	static int16_t x500 = -1;
	volatile uint64_t t84 = 3265755486550061LLU;

    t84 = (x497*((x498+x499)-x500));

    if (t84 != 344968440873992964LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x501 = -1;
	int16_t x502 = -1;
	int32_t t85 = 51556916;

    t85 = (x501*((x502+x503)-x504));

    if (t85 != 156) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x505 = INT8_MIN;
	volatile int32_t x506 = -1;
	static uint16_t x507 = UINT16_MAX;
	uint64_t t86 = 1579321386100078923LLU;

    t86 = (x505*((x506+x507)-x508));

    if (t86 != 18446744073701163136LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x509 = 0U;
	int64_t x510 = 37470386328LL;
	uint64_t x511 = 34050847709963LLU;
	static int8_t x512 = -26;
	uint64_t t87 = 102LLU;

    t87 = (x509*((x510+x511)-x512));

    if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x517 = INT8_MIN;
	int8_t x519 = -1;
	volatile int32_t t88 = -215;

    t88 = (x517*((x518+x519)-x520));

    if (t88 != -18176) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x525 = INT8_MIN;
	int8_t x526 = 49;
	static volatile int64_t x527 = -2234814LL;
	int32_t x528 = INT32_MIN;
	int64_t t89 = -25709LL;

    t89 = (x525*((x526+x527)-x528));

    if (t89 != -274591857024LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x538 = INT8_MAX;
	volatile uint64_t x539 = UINT64_MAX;
	int16_t x540 = INT16_MIN;
	uint64_t t90 = 27423362247948091LLU;

    t90 = (x537*((x538+x539)-x540));

    if (t90 != 2700301354LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x545 = UINT32_MAX;
	static int8_t x546 = INT8_MAX;
	volatile int64_t x547 = -1LL;
	int8_t x548 = -1;
	int64_t t91 = 1387726242LL;

    t91 = (x545*((x546+x547)-x548));

    if (t91 != 545460846465LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x549 = -125;
	int32_t x550 = INT32_MAX;
	uint64_t x551 = 53841649178653LLU;
	uint32_t x552 = UINT32_MAX;
	uint64_t t92 = 214330657739115493LLU;

    t92 = (x549*((x550+x551)-x552));

    if (t92 != 18440014135997675991LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x561 = UINT32_MAX;
	int32_t x563 = INT32_MAX;
	int8_t x564 = -1;

    t93 = (x561*((x562+x563)-x564));

    if (t93 != 2147483675U) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x565 = 12U;
	static volatile int64_t x566 = -950017LL;
	int8_t x567 = INT8_MIN;

    t94 = (x565*((x566+x567)-x568));

    if (t94 != -11008524LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x574 = -207112121971752370LL;
	static uint8_t x575 = 94U;
	uint64_t x576 = 66167363835LLU;
	uint64_t t95 = 5LLU;

    t95 = (x573*((x574+x575)-x576));

    if (t95 != 9430484224993891919LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int64_t x577 = INT64_MIN;
	uint64_t x579 = 115164LLU;
	int8_t x580 = INT8_MIN;
	volatile uint64_t t96 = 406611784792534248LLU;

    t96 = (x577*((x578+x579)-x580));

    if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x585 = -10616831363053710LL;
	int32_t x586 = INT32_MIN;
	static uint64_t x588 = UINT64_MAX;
	uint64_t t97 = 206077354656LLU;

    t97 = (x585*((x586+x587)-x588));

    if (t97 != 16981640168406347912LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x589 = -1;
	volatile int8_t x592 = INT8_MIN;
	volatile int32_t t98 = 6401;

    t98 = (x589*((x590+x591)-x592));

    if (t98 != -1731272) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x598 = INT16_MAX;
	int8_t x599 = INT8_MAX;
	static int8_t x600 = INT8_MIN;
	static volatile int32_t t99 = -1006684;

    t99 = (x597*((x598+x599)-x600));

    if (t99 != -1082064896) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x601 = UINT16_MAX;
	int8_t x602 = INT8_MAX;
	volatile int64_t x603 = INT64_MIN;
	static uint64_t x604 = 29721209488911526LLU;
	volatile uint64_t t100 = 343503035231605LLU;

    t100 = (x601*((x602+x603)-x604));

    if (t100 != 16798779994258713639LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x605 = -11;
	uint16_t x606 = 381U;
	int32_t x607 = INT32_MIN;
	uint64_t x608 = UINT64_MAX;
	uint64_t t101 = 1760642995325655LLU;

    t101 = (x605*((x606+x607)-x608));

    if (t101 != 23622315926LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x609 = INT16_MAX;
	uint16_t x611 = 307U;
	static int16_t x612 = INT16_MAX;

    t102 = (x609*((x610+x611)-x612));

    if (t102 != -1063616820) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x613 = -1;
	static uint16_t x614 = 3U;
	int8_t x615 = -1;
	int8_t x616 = -6;
	int32_t t103 = 108177140;

    t103 = (x613*((x614+x615)-x616));

    if (t103 != -8) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile uint64_t x617 = 1022915227715LLU;
	int32_t x618 = INT32_MAX;
	volatile int32_t x619 = -1;
	volatile uint64_t t104 = 168035840800LLU;

    t104 = (x617*((x618+x619)-x620));

    if (t104 != 1531179013807034301LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile uint32_t x621 = UINT32_MAX;
	int16_t x622 = INT16_MIN;
	int8_t x623 = -1;
	volatile int16_t x624 = -1;
	volatile uint32_t t105 = 162823U;

    t105 = (x621*((x622+x623)-x624));

    if (t105 != 32768U) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x629 = 1;
	int16_t x630 = INT16_MAX;
	int16_t x631 = INT16_MAX;
	uint8_t x632 = UINT8_MAX;
	static volatile int32_t t106 = 2280;

    t106 = (x629*((x630+x631)-x632));

    if (t106 != 65279) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x633 = UINT16_MAX;
	int32_t x634 = 26;
	int16_t x635 = -1;
	static uint8_t x636 = 7U;
	int32_t t107 = -64527479;

    t107 = (x633*((x634+x635)-x636));

    if (t107 != 1179630) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint16_t x637 = UINT16_MAX;
	static int64_t x640 = -1LL;
	volatile int64_t t108 = 3LL;

    t108 = (x637*((x638+x639)-x640));

    if (t108 != 506520015LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x643 = 5515;
	int64_t x644 = 339531LL;
	uint64_t t109 = 80612765LLU;

    t109 = (x641*((x642+x643)-x644));

    if (t109 != 333889LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x653 = 36557U;
	static volatile int16_t x654 = 3769;
	uint32_t x655 = UINT32_MAX;
	volatile int32_t x656 = INT32_MIN;
	uint32_t t110 = 1U;

    t110 = (x653*((x654+x655)-x656));

    if (t110 != 2285230424U) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x657 = INT16_MIN;
	int8_t x658 = 1;
	int16_t x659 = INT16_MIN;
	volatile int8_t x660 = -1;

    t111 = (x657*((x658+x659)-x660));

    if (t111 != 1073676288) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint64_t x666 = 497LLU;
	int32_t x667 = INT32_MAX;
	uint64_t t112 = 1073637245269527LLU;

    t112 = (x665*((x666+x667)-x668));

    if (t112 != 18446744071562067599LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint64_t x674 = UINT64_MAX;
	uint16_t x675 = UINT16_MAX;

    t113 = (x673*((x674+x675)-x676));

    if (t113 != 18446744073599131261LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x677 = INT8_MAX;
	volatile int32_t x680 = INT32_MIN;
	static uint32_t t114 = 4066685U;

    t114 = (x677*((x678+x679)-x680));

    if (t114 != 2154922292U) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x681 = 16U;
	uint16_t x682 = 0U;
	uint16_t x683 = 14U;
	int64_t x684 = 32796241839319LL;
	volatile int64_t t115 = -55LL;

    t115 = (x681*((x682+x683)-x684));

    if (t115 != -524739869428880LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x685 = 4;
	uint64_t x686 = 42624756584035LLU;
	volatile int32_t x687 = INT32_MIN;
	uint32_t x688 = UINT32_MAX;
	uint64_t t116 = 10886LLU;

    t116 = (x685*((x686+x687)-x688));

    if (t116 != 170473256532368LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int64_t x689 = -12590915LL;
	static uint16_t x690 = UINT16_MAX;
	static int32_t x691 = -1;
	int64_t x692 = -4LL;
	volatile int64_t t117 = 6571063832742632LL;

    t117 = (x689*((x690+x691)-x692));

    if (t117 != -825183387270LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint64_t x697 = 14190350976LLU;
	int16_t x698 = INT16_MIN;
	int64_t x699 = 3792580578154018LL;
	uint64_t x700 = UINT64_MAX;
	volatile uint64_t t118 = 1087063625281768499LLU;

    t118 = (x697*((x698+x699)-x700));

    if (t118 != 5714647248306440064LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x701 = INT32_MIN;
	int32_t x702 = 114557;
	volatile int8_t x703 = INT8_MIN;
	uint32_t x704 = UINT32_MAX;
	volatile uint32_t t119 = 912259U;

    t119 = (x701*((x702+x703)-x704));

    if (t119 != 0U) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x705 = -1LL;
	int32_t x707 = INT32_MIN;
	int64_t t120 = 169721409LL;

    t120 = (x705*((x706+x707)-x708));

    if (t120 != -2147441442LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x710 = 20567099U;
	int8_t x711 = INT8_MAX;
	int32_t x712 = -4337;
	volatile uint32_t t121 = 363U;

    t121 = (x709*((x710+x711)-x712));

    if (t121 != 4130394792U) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint32_t x716 = UINT32_MAX;
	uint32_t t122 = 302U;

    t122 = (x713*((x714+x715)-x716));

    if (t122 != 0U) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x722 = 104U;
	volatile int16_t x724 = INT16_MAX;
	volatile uint32_t t123 = 126804U;

    t123 = (x721*((x722+x723)-x724));

    if (t123 != 4155034720U) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x729 = -1;
	static uint32_t x731 = 19U;
	int16_t x732 = INT16_MAX;
	static uint32_t t124 = 34829U;

    t124 = (x729*((x730+x731)-x732));

    if (t124 != 23597U) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x733 = UINT32_MAX;
	volatile int8_t x734 = -1;
	int32_t x735 = -1769298;
	int8_t x736 = INT8_MAX;
	static volatile uint32_t t125 = 667U;

    t125 = (x733*((x734+x735)-x736));

    if (t125 != 1769426U) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x737 = 0LL;
	int8_t x738 = INT8_MIN;
	uint16_t x739 = 98U;
	int64_t x740 = INT64_MIN;
	volatile int64_t t126 = 252LL;

    t126 = (x737*((x738+x739)-x740));

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x757 = INT16_MIN;
	uint64_t x758 = 351LLU;
	uint16_t x759 = UINT16_MAX;
	volatile uint16_t x760 = 24U;
	static uint64_t t127 = 126LLU;

    t127 = (x757*((x758+x759)-x760));

    if (t127 != 18446744071551385600LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int32_t x761 = 9543;
	int16_t x762 = INT16_MIN;
	static volatile uint16_t x763 = 2165U;
	static volatile uint8_t x764 = 20U;
	int32_t t128 = 10237;

    t128 = (x761*((x762+x763)-x764));

    if (t128 != -292235289) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x769 = -1739;
	int16_t x770 = INT16_MIN;
	static uint32_t x771 = 520361U;
	int8_t x772 = -10;
	volatile uint32_t t129 = 653U;

    t129 = (x769*((x770+x771)-x772));

    if (t129 != 3447025679U) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x777 = -1;
	int32_t x778 = -1;
	static int64_t x779 = -1LL;
	int64_t x780 = -6LL;
	volatile int64_t t130 = 1LL;

    t130 = (x777*((x778+x779)-x780));

    if (t130 != -4LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x785 = 1;
	uint8_t x786 = 3U;
	static volatile int8_t x787 = 27;
	static volatile int8_t x788 = 0;
	int32_t t131 = -59466365;

    t131 = (x785*((x786+x787)-x788));

    if (t131 != 30) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x798 = 0U;
	static volatile int32_t x799 = INT32_MIN;
	int16_t x800 = INT16_MAX;
	volatile uint32_t t132 = 3740380U;

    t132 = (x797*((x798+x799)-x800));

    if (t132 != 32767U) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x805 = INT16_MAX;
	volatile int8_t x807 = 27;
	static uint64_t t133 = 19649LLU;

    t133 = (x805*((x806+x807)-x808));

    if (t133 != 1964920978481027041LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x819 = UINT64_MAX;
	int64_t x820 = -1LL;

    t134 = (x817*((x818+x819)-x820));

    if (t134 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x825 = 845U;
	uint32_t x826 = 363141U;
	static int16_t x827 = INT16_MAX;
	int32_t x828 = INT32_MAX;
	uint32_t t135 = 8U;

    t135 = (x825*((x826+x827)-x828));

    if (t135 != 2482026753U) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint32_t x829 = UINT32_MAX;
	uint16_t x830 = 12U;
	uint8_t x831 = 31U;
	uint32_t x832 = 3U;
	uint32_t t136 = 62469U;

    t136 = (x829*((x830+x831)-x832));

    if (t136 != 4294967256U) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x838 = INT16_MIN;
	static uint64_t x840 = 381365191LLU;
	volatile uint64_t t137 = 11507518338LLU;

    t137 = (x837*((x838+x839)-x840));

    if (t137 != 18446743572772676480LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x841 = -237;
	int64_t x843 = -1LL;
	uint8_t x844 = UINT8_MAX;
	int64_t t138 = -1LL;

    t138 = (x841*((x842+x843)-x844));

    if (t138 != -833823354LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x845 = 67859U;
	static int16_t x846 = -1;
	static volatile uint32_t t139 = 468444952U;

    t139 = (x845*((x846+x847)-x848));

    if (t139 != 4294899437U) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x853 = 14U;
	int16_t x854 = 4379;
	volatile int8_t x855 = INT8_MIN;
	static uint8_t x856 = 10U;
	int32_t t140 = 64113;

    t140 = (x853*((x854+x855)-x856));

    if (t140 != 59374) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int64_t x861 = -748329389LL;
	static int8_t x862 = INT8_MAX;
	static uint8_t x863 = 113U;
	volatile uint16_t x864 = 15072U;
	volatile int64_t t141 = 251LL;

    t141 = (x861*((x862+x863)-x864));

    if (t141 != 11099221497648LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x866 = UINT8_MAX;
	volatile uint64_t x867 = 2019873148333LLU;
	uint8_t x868 = 1U;
	volatile uint64_t t142 = 6394668354402662468LLU;

    t142 = (x865*((x866+x867)-x868));

    if (t142 != 2659698283239027029LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int32_t x869 = INT32_MAX;
	uint16_t x870 = UINT16_MAX;
	uint32_t x871 = UINT32_MAX;
	uint8_t x872 = 3U;
	volatile uint32_t t143 = 162564U;

    t143 = (x869*((x870+x871)-x872));

    if (t143 != 2147418117U) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x873 = 0;
	int16_t x874 = INT16_MIN;
	uint8_t x875 = 0U;
	int8_t x876 = INT8_MAX;
	volatile int32_t t144 = 99212;

    t144 = (x873*((x874+x875)-x876));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x882 = -1;
	int16_t x883 = 53;
	int32_t x884 = -1;
	volatile int32_t t145 = -238936;

    t145 = (x881*((x882+x883)-x884));

    if (t145 != 5830) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x886 = INT32_MAX;
	int64_t x887 = -1LL;
	volatile int64_t t146 = -20LL;

    t146 = (x885*((x886+x887)-x888));

    if (t146 != -2147480715LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x890 = 57U;
	static int32_t x891 = INT32_MIN;
	volatile int64_t x892 = -1LL;

    t147 = (x889*((x890+x891)-x892));

    if (t147 != -140735337070650LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static int8_t x898 = INT8_MIN;
	uint16_t x899 = 27340U;
	uint8_t x900 = 0U;

    t148 = (x897*((x898+x899)-x900));

    if (t148 != 2407980246952LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int16_t x906 = -1;
	int8_t x907 = INT8_MIN;
	uint8_t x908 = 25U;
	volatile uint64_t t149 = 864LLU;

    t149 = (x905*((x906+x907)-x908));

    if (t149 != 154LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x921 = -55205247553365LL;
	uint64_t x922 = UINT64_MAX;
	uint8_t x923 = UINT8_MAX;
	uint16_t x924 = UINT16_MAX;

    t150 = (x921*((x922+x923)-x924));

    if (t150 != 3603853765531220565LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x929 = INT16_MIN;
	int16_t x930 = -3;
	uint64_t x931 = 3247888445155093LLU;
	uint64_t t151 = 165506456414LLU;

    t151 = (x929*((x930+x931)-x932));

    if (t151 != 4253655871411126272LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x933 = INT64_MIN;
	uint64_t x936 = 37LLU;

    t152 = (x933*((x934+x935)-x936));

    if (t152 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile int16_t x939 = INT16_MIN;

    t153 = (x937*((x938+x939)-x940));

    if (t153 != 1703910U) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint16_t x941 = UINT16_MAX;
	int32_t x942 = -1;
	int32_t x943 = -45;
	int32_t x944 = 88;
	int32_t t154 = -249240779;

    t154 = (x941*((x942+x943)-x944));

    if (t154 != -8781690) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x945 = 363814008U;
	uint8_t x946 = 1U;
	int32_t x947 = -27249296;
	volatile uint32_t t155 = 87U;

    t155 = (x945*((x946+x947)-x948));

    if (t155 != 3776842848U) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x950 = 0U;
	static int32_t x951 = INT32_MAX;
	static uint64_t x952 = 3084451LLU;
	static volatile uint64_t t156 = 509135LLU;

    t156 = (x949*((x950+x951)-x952));

    if (t156 != 13841681865515204608LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x953 = UINT8_MAX;
	int32_t x954 = -1;
	int16_t x955 = INT16_MIN;
	static volatile uint64_t t157 = 217411235926554LLU;

    t157 = (x953*((x954+x955)-x956));

    if (t157 != 18446744073701195776LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x961 = UINT64_MAX;
	volatile int32_t x962 = 1;
	volatile uint64_t x963 = UINT64_MAX;
	volatile int16_t x964 = -972;
	static volatile uint64_t t158 = 52137845167288968LLU;

    t158 = (x961*((x962+x963)-x964));

    if (t158 != 18446744073709550644LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x967 = INT16_MIN;

    t159 = (x965*((x966+x967)-x968));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x969 = -232614;
	uint16_t x970 = 1U;
	static int64_t x971 = -1LL;
	volatile int64_t t160 = 5012131244765857LL;

    t160 = (x969*((x970+x971)-x972));

    if (t160 != 697842LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x973 = UINT16_MAX;
	uint8_t x974 = UINT8_MAX;
	static volatile int32_t t161 = -1521;

    t161 = (x973*((x974+x975)-x976));

    if (t161 != -2124710235) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint64_t x977 = 9LLU;
	int8_t x978 = -1;
	uint64_t t162 = 1LLU;

    t162 = (x977*((x978+x979)-x980));

    if (t162 != 19327351671LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x985 = 0U;
	uint32_t x986 = 5798U;
	int8_t x987 = INT8_MIN;
	uint32_t x988 = 1284057802U;
	volatile uint32_t t163 = 5U;

    t163 = (x985*((x986+x987)-x988));

    if (t163 != 0U) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x989 = 1;
	int64_t x990 = 1230262763LL;
	int32_t x991 = -945395418;
	uint64_t x992 = 28897879LLU;
	uint64_t t164 = 12664140617967504LLU;

    t164 = (x989*((x990+x991)-x992));

    if (t164 != 255969466LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x993 = 3;
	uint32_t x994 = 362598876U;
	int8_t x995 = -1;
	int32_t x996 = INT32_MIN;

    t165 = (x993*((x994+x995)-x996));

    if (t165 != 3235280273U) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint32_t x1001 = 27234812U;
	int32_t x1002 = INT32_MIN;
	int16_t x1003 = 3079;
	volatile uint16_t x1004 = 122U;
	volatile uint32_t t166 = 0U;

    t166 = (x1001*((x1002+x1003)-x1004));

    if (t166 != 3223927756U) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x1005 = INT8_MIN;
	int64_t x1006 = INT64_MIN;
	int32_t x1007 = INT32_MAX;
	uint64_t x1008 = 6LLU;
	static uint64_t t167 = 124007172636711LLU;

    t167 = (x1005*((x1006+x1007)-x1008));

    if (t167 != 18446743798831645568LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x1009 = -1;
	int8_t x1010 = -1;
	static int8_t x1011 = INT8_MIN;
	volatile int64_t x1012 = 1LL;
	static int64_t t168 = -9102608LL;

    t168 = (x1009*((x1010+x1011)-x1012));

    if (t168 != 130LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x1021 = 2U;
	static volatile uint64_t x1022 = 107270006024332LLU;
	volatile int32_t x1023 = INT32_MIN;
	int64_t x1024 = INT64_MIN;
	uint64_t t169 = 2614065357863000LLU;

    t169 = (x1021*((x1022+x1023)-x1024));

    if (t169 != 214535717081368LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x1025 = 15;
	int32_t x1026 = 48;
	int8_t x1027 = INT8_MAX;
	uint64_t x1028 = UINT64_MAX;
	uint64_t t170 = 13726281LLU;

    t170 = (x1025*((x1026+x1027)-x1028));

    if (t170 != 2640LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint8_t x1054 = 41U;
	uint16_t x1055 = 12556U;

    t171 = (x1053*((x1054+x1055)-x1056));

    if (t171 != 22322240) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x1057 = INT32_MAX;
	static int64_t x1058 = -1LL;
	uint8_t x1059 = UINT8_MAX;
	int8_t x1060 = -1;

    t172 = (x1057*((x1058+x1059)-x1060));

    if (t172 != 547608329985LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint8_t x1065 = UINT8_MAX;
	uint16_t x1066 = UINT16_MAX;
	uint8_t x1068 = UINT8_MAX;
	uint32_t t173 = 77801U;

    t173 = (x1065*((x1066+x1067)-x1068));

    if (t173 != 1526405260U) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int8_t x1074 = INT8_MIN;

    t174 = (x1073*((x1074+x1075)-x1076));

    if (t174 != 2147483903U) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile int64_t x1077 = -311248752437125239LL;
	static int8_t x1078 = 1;
	static volatile int32_t x1079 = -1;
	volatile uint8_t x1080 = 12U;

    t175 = (x1077*((x1078+x1079)-x1080));

    if (t175 != 3734985029245502868LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x1085 = INT64_MIN;
	static uint64_t x1086 = 3766528922825016750LLU;
	volatile int64_t x1087 = -262LL;
	static uint8_t x1088 = 3U;

    t176 = (x1085*((x1086+x1087)-x1088));

    if (t176 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x1093 = 12752U;
	static volatile int8_t x1095 = 6;
	int8_t x1096 = -63;

    t177 = (x1093*((x1094+x1095)-x1096));

    if (t177 != 918144) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x1097 = 1709244LLU;
	uint64_t x1098 = 48542100894850676LLU;
	int16_t x1099 = INT16_MAX;
	volatile uint64_t t178 = 84LLU;

    t178 = (x1097*((x1098+x1099)-x1100));

    if (t178 != 15286602502303739184LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x1105 = INT8_MIN;
	int8_t x1107 = INT8_MIN;
	volatile int64_t x1108 = -97125LL;
	volatile int64_t t179 = 12641LL;

    t179 = (x1105*((x1106+x1107)-x1108));

    if (t179 != -12415360LL) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile int8_t x1109 = INT8_MIN;
	uint16_t x1110 = 25U;
	volatile uint16_t x1111 = 787U;
	uint32_t x1112 = 980485600U;

    t180 = (x1109*((x1110+x1111)-x1112));

    if (t180 != 948001280U) { NG(); } else { ; }
	
}

void f181(void) {
    	static int16_t x1113 = INT16_MAX;
	int16_t x1115 = 37;
	static uint64_t t181 = 1836172083430LLU;

    t181 = (x1113*((x1114+x1115)-x1116));

    if (t181 != 1498829619086611LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x1117 = 1U;
	int16_t x1118 = -2718;
	uint64_t x1119 = 1LLU;
	static int64_t x1120 = -2511LL;
	uint64_t t182 = 286452898557452963LLU;

    t182 = (x1117*((x1118+x1119)-x1120));

    if (t182 != 18446744073709551410LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int64_t x1121 = -179LL;
	int16_t x1122 = INT16_MAX;
	static int16_t x1123 = INT16_MIN;
	int32_t x1124 = -1;

    t183 = (x1121*((x1122+x1123)-x1124));

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x1125 = 167205063LLU;
	volatile int32_t x1126 = INT32_MIN;
	uint16_t x1127 = 753U;
	volatile int32_t x1128 = INT32_MIN;
	static volatile uint64_t t184 = 1285676976LLU;

    t184 = (x1125*((x1126+x1127)-x1128));

    if (t184 != 125905412439LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x1137 = INT16_MIN;
	volatile int32_t x1138 = -1351;
	uint32_t t185 = 38164U;

    t185 = (x1137*((x1138+x1139)-x1140));

    if (t185 != 1095925760U) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint8_t x1153 = UINT8_MAX;
	uint8_t x1154 = UINT8_MAX;
	int8_t x1155 = -1;
	int8_t x1156 = 0;
	int32_t t186 = 7788733;

    t186 = (x1153*((x1154+x1155)-x1156));

    if (t186 != 64770) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x1158 = 6633U;
	int16_t x1159 = -1;
	volatile int8_t x1160 = -1;
	static int32_t t187 = 246998;

    t187 = (x1157*((x1158+x1159)-x1160));

    if (t187 != 1691415) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x1161 = 8U;
	int8_t x1162 = -2;
	int16_t x1163 = 1136;
	static int64_t x1164 = -1LL;
	int64_t t188 = -5876440786898471LL;

    t188 = (x1161*((x1162+x1163)-x1164));

    if (t188 != 9080LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x1165 = 1U;
	int8_t x1166 = 1;
	int32_t x1167 = INT32_MIN;
	uint64_t x1168 = 1LLU;
	volatile uint64_t t189 = 125628284073163LLU;

    t189 = (x1165*((x1166+x1167)-x1168));

    if (t189 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x1169 = -3136858LL;
	uint64_t x1170 = 2085509586311885531LLU;
	static uint16_t x1171 = 5U;
	volatile uint64_t t190 = 25210485741484337LLU;

    t190 = (x1169*((x1170+x1171)-x1172));

    if (t190 != 5888401227144793318LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x1177 = INT32_MAX;
	volatile int16_t x1178 = INT16_MIN;
	static uint32_t t191 = 477017296U;

    t191 = (x1177*((x1178+x1179)-x1180));

    if (t191 != 2059229785U) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile int16_t x1185 = 1;
	volatile uint8_t x1186 = 5U;
	uint64_t x1187 = UINT64_MAX;
	int64_t x1188 = -1LL;
	uint64_t t192 = 205041288588LLU;

    t192 = (x1185*((x1186+x1187)-x1188));

    if (t192 != 5LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x1189 = 1U;
	uint64_t x1190 = UINT64_MAX;
	volatile int32_t x1191 = 22;
	volatile uint8_t x1192 = 10U;
	static uint64_t t193 = 32LLU;

    t193 = (x1189*((x1190+x1191)-x1192));

    if (t193 != 11LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x1197 = -1;
	uint64_t x1199 = 926479114548173LLU;
	uint16_t x1200 = UINT16_MAX;
	volatile uint64_t t194 = 11641888548LLU;

    t194 = (x1197*((x1198+x1199)-x1200));

    if (t194 != 18445817594595068979LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x1205 = -1;
	volatile int64_t x1206 = INT64_MIN;
	int64_t x1207 = INT64_MAX;
	volatile int8_t x1208 = INT8_MIN;
	int64_t t195 = 218334981800LL;

    t195 = (x1205*((x1206+x1207)-x1208));

    if (t195 != -127LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static int8_t x1218 = 22;
	uint8_t x1220 = 11U;
	uint32_t t196 = 12199166U;

    t196 = (x1217*((x1218+x1219)-x1220));

    if (t196 != 20U) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x1223 = 795LLU;
	int32_t x1224 = INT32_MIN;

    t197 = (x1221*((x1222+x1223)-x1224));

    if (t197 != 6442451738LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x1230 = -1LL;
	int8_t x1231 = INT8_MIN;
	static volatile uint8_t x1232 = UINT8_MAX;
	uint64_t t198 = 3LLU;

    t198 = (x1229*((x1230+x1231)-x1232));

    if (t198 != 12795549569881141632LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x1233 = INT64_MAX;
	int64_t x1235 = INT64_MIN;
	uint64_t t199 = 36820568LLU;

    t199 = (x1233*((x1234+x1235)-x1236));

    if (t199 != 9223372036854775808LLU) { NG(); } else { ; }
	
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

