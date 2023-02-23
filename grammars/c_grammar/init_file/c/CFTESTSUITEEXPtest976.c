
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

int16_t x1 = INT16_MIN;
int64_t x8 = INT64_MAX;
int32_t t2 = 2528;
int32_t x21 = INT32_MIN;
volatile uint16_t x25 = 256U;
static volatile int32_t t7 = -155;
int64_t x40 = 22162144833LL;
static int16_t x44 = INT16_MIN;
uint8_t x45 = 26U;
volatile int32_t t11 = -349;
int64_t x49 = INT64_MAX;
int8_t x52 = INT8_MAX;
static volatile uint64_t x53 = 356613266819079LLU;
static volatile int64_t x59 = INT64_MAX;
volatile int8_t x60 = -1;
static volatile int32_t t14 = -7690342;
int16_t x64 = -1410;
uint8_t x65 = 58U;
int32_t t17 = -9091847;
volatile uint16_t x74 = UINT16_MAX;
int32_t t18 = -13822;
int32_t x87 = -1;
static uint64_t x99 = 4659298366LLU;
uint16_t x100 = 1681U;
int8_t x103 = INT8_MAX;
int8_t x117 = INT8_MIN;
int8_t x121 = -1;
int8_t x122 = INT8_MIN;
int64_t x123 = -1304270613218LL;
int8_t x126 = INT8_MAX;
int64_t x128 = INT64_MAX;
uint8_t x130 = 5U;
volatile int32_t t33 = 14204;
static int16_t x137 = -103;
int8_t x147 = -6;
int64_t x154 = INT64_MIN;
volatile int32_t t38 = 8;
int16_t x161 = -1;
uint16_t x163 = 1U;
int8_t x170 = INT8_MIN;
volatile int32_t t42 = -15925;
uint8_t x180 = 3U;
int8_t x181 = -1;
int8_t x182 = INT8_MAX;
volatile int32_t t47 = -330804759;
uint64_t x198 = 2LLU;
uint64_t x199 = UINT64_MAX;
int32_t x206 = 8961;
uint64_t x208 = 5008689LLU;
uint8_t x209 = 3U;
int64_t x211 = INT64_MAX;
int64_t x212 = INT64_MIN;
int32_t t53 = 438410;
int64_t x222 = INT64_MIN;
static int8_t x223 = 20;
volatile int16_t x233 = INT16_MIN;
int32_t x234 = INT32_MIN;
volatile uint8_t x255 = 41U;
static uint16_t x261 = 0U;
static volatile int16_t x266 = INT16_MIN;
int32_t x268 = -1;
int64_t x274 = 25398LL;
int32_t x275 = INT32_MAX;
int16_t x277 = INT16_MIN;
int32_t x283 = 18660488;
int32_t t69 = -105;
int32_t t71 = -46684;
uint16_t x294 = 2116U;
volatile int32_t t74 = -1;
volatile uint16_t x306 = 111U;
volatile int64_t x308 = INT64_MIN;
volatile int32_t t75 = 252016;
uint8_t x309 = 62U;
int32_t t76 = 6;
volatile int8_t x326 = 0;
volatile int32_t t80 = -783970;
uint16_t x330 = UINT16_MAX;
static int64_t x334 = INT64_MIN;
static int64_t x336 = INT64_MAX;
volatile int32_t t84 = -62790;
uint8_t x348 = UINT8_MAX;
volatile int32_t t87 = 123527606;
static int8_t x362 = INT8_MAX;
static uint32_t x364 = UINT32_MAX;
static int32_t t89 = -760036872;
uint32_t x367 = 61725U;
int64_t x369 = INT64_MIN;
volatile int32_t t92 = -519425;
static int8_t x388 = 1;
uint8_t x391 = 124U;
static int8_t x397 = INT8_MAX;
volatile int32_t t98 = 32582;
int32_t x401 = -34040371;
volatile int16_t x402 = -7;
int8_t x403 = 1;
volatile int64_t x404 = 110301402728194LL;
uint64_t x406 = 15LLU;
static int32_t x411 = 343999;
uint32_t x416 = UINT32_MAX;
int32_t t102 = -5124221;
int64_t x418 = INT64_MAX;
static uint64_t x427 = UINT64_MAX;
volatile int32_t t105 = 8;
int16_t x433 = INT16_MAX;
int16_t x440 = -9;
int32_t t108 = -151883798;
uint32_t x452 = UINT32_MAX;
volatile int32_t x453 = 71883;
static int32_t t112 = -19498900;
volatile int32_t t113 = 9943233;
uint64_t x464 = 243693978680645LLU;
uint32_t x468 = 56512U;
int16_t x476 = 227;
int16_t x479 = 1391;
static int64_t x484 = 177205824LL;
volatile int32_t x487 = 193649;
int16_t x492 = INT16_MIN;
int8_t x497 = INT8_MAX;
static int64_t x502 = -1LL;
int64_t x505 = -1LL;
uint16_t x509 = UINT16_MAX;
volatile uint16_t x522 = 7U;
int8_t x527 = -1;
uint16_t x528 = 3U;
volatile int64_t x530 = -1LL;
int32_t t131 = 7820;
static uint16_t x536 = 166U;
volatile int64_t x538 = -1LL;
volatile int32_t t133 = 104;
volatile int32_t x541 = INT32_MAX;
static int16_t x542 = 15798;
uint32_t x544 = 29455086U;
uint8_t x547 = 33U;
int32_t t137 = -17877033;
uint32_t x558 = UINT32_MAX;
int64_t x567 = -1LL;
static volatile int16_t x579 = INT16_MAX;
int64_t x584 = -1LL;
volatile int32_t t144 = -13056;
int32_t t146 = 44581165;
int16_t x601 = INT16_MIN;
int16_t x606 = -1;
static int32_t t150 = -34221;
uint64_t x610 = UINT64_MAX;
int64_t x611 = 48LL;
static int32_t t155 = 24321756;
int32_t x629 = -5;
int64_t x630 = 0LL;
static volatile uint16_t x634 = 3657U;
int8_t x636 = INT8_MIN;
int32_t t157 = 48;
uint32_t x638 = 222450U;
int64_t x645 = -7697231272311LL;
volatile int32_t t160 = 103;
volatile int32_t t163 = 1;
int32_t t164 = -434418;
uint16_t x675 = UINT16_MAX;
static int64_t x677 = INT64_MIN;
static int32_t t167 = 45947214;
int32_t x687 = INT32_MIN;
static volatile uint32_t x691 = 3430U;
static volatile int32_t t171 = -451448;
int64_t x703 = INT64_MIN;
uint64_t x712 = UINT64_MAX;
volatile int16_t x713 = INT16_MIN;
int32_t x715 = INT32_MAX;
int64_t x716 = -1999797516196466885LL;
int64_t x718 = -2089007014891414236LL;
static int16_t x720 = INT16_MIN;
static uint8_t x723 = UINT8_MAX;
int16_t x727 = -7392;
int8_t x729 = -1;
uint8_t x737 = UINT8_MAX;
volatile int64_t x747 = INT64_MIN;
uint32_t x748 = UINT32_MAX;
int32_t t184 = 276016398;
static volatile int64_t x770 = INT64_MIN;
static int8_t x772 = -1;
int8_t x778 = -21;
uint8_t x780 = 4U;
int32_t t188 = -3765247;
int64_t x785 = 480LL;
int32_t x786 = 8;
uint8_t x787 = UINT8_MAX;
volatile int64_t x788 = -302569381098LL;
int16_t x790 = 10761;
int8_t x792 = INT8_MIN;
volatile uint8_t x808 = 0U;
static volatile uint8_t x810 = 86U;
volatile int32_t x813 = INT32_MIN;
int16_t x820 = 5;
uint8_t x821 = UINT8_MAX;
static uint32_t x823 = 43U;
volatile int32_t t198 = -225;


void f0(void) {
    	int64_t x2 = INT64_MIN;
	int32_t x3 = INT32_MIN;
	int64_t x4 = -1LL;
	int32_t t0 = 224105;

    t0 = (x1<=((x2%x3)^x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint32_t x5 = 26736U;
	static volatile int8_t x6 = -2;
	static int16_t x7 = -109;
	static int32_t t1 = 6043;

    t1 = (x5<=((x6%x7)^x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = -1420;
	int32_t x10 = INT32_MIN;
	volatile int64_t x11 = -1LL;
	volatile uint16_t x12 = 23U;

    t2 = (x9<=((x10%x11)^x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = 27;
	uint8_t x14 = 118U;
	int64_t x15 = -20600945LL;
	volatile int16_t x16 = INT16_MAX;
	int32_t t3 = -44161;

    t3 = (x13<=((x14%x15)^x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = INT32_MIN;
	uint16_t x18 = UINT16_MAX;
	volatile int32_t x19 = INT32_MIN;
	static int8_t x20 = INT8_MIN;
	int32_t t4 = 861692;

    t4 = (x17<=((x18%x19)^x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x22 = INT64_MAX;
	static uint8_t x23 = UINT8_MAX;
	volatile uint16_t x24 = 30U;
	int32_t t5 = 883576638;

    t5 = (x21<=((x22%x23)^x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x26 = 1;
	uint8_t x27 = UINT8_MAX;
	uint16_t x28 = UINT16_MAX;
	static int32_t t6 = 667971;

    t6 = (x25<=((x26%x27)^x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x29 = UINT8_MAX;
	uint16_t x30 = 21U;
	volatile int8_t x31 = -1;
	int32_t x32 = -1;

    t7 = (x29<=((x30%x31)^x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x33 = -59;
	static int32_t x34 = -37868;
	uint8_t x35 = UINT8_MAX;
	int64_t x36 = -1LL;
	int32_t t8 = -1;

    t8 = (x33<=((x34%x35)^x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = 1;
	int8_t x38 = INT8_MIN;
	volatile uint32_t x39 = UINT32_MAX;
	int32_t t9 = 2;

    t9 = (x37<=((x38%x39)^x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x41 = 127U;
	int32_t x42 = INT32_MAX;
	uint32_t x43 = UINT32_MAX;
	volatile int32_t t10 = 197888685;

    t10 = (x41<=((x42%x43)^x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x46 = -1;
	static uint32_t x47 = UINT32_MAX;
	static int8_t x48 = 0;

    t11 = (x45<=((x46%x47)^x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x50 = INT16_MIN;
	static int16_t x51 = INT16_MIN;
	volatile int32_t t12 = -184;

    t12 = (x49<=((x50%x51)^x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x54 = INT8_MAX;
	int8_t x55 = INT8_MAX;
	volatile uint8_t x56 = UINT8_MAX;
	static int32_t t13 = 1;

    t13 = (x53<=((x54%x55)^x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = -1LL;
	int16_t x58 = -1;

    t14 = (x57<=((x58%x59)^x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int32_t x61 = INT32_MAX;
	int8_t x62 = INT8_MAX;
	int64_t x63 = INT64_MIN;
	int32_t t15 = -2;

    t15 = (x61<=((x62%x63)^x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int8_t x66 = 27;
	int32_t x67 = 620;
	int8_t x68 = INT8_MIN;
	volatile int32_t t16 = 2169;

    t16 = (x65<=((x66%x67)^x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = 84LL;
	int16_t x70 = INT16_MIN;
	uint64_t x71 = UINT64_MAX;
	uint8_t x72 = 71U;

    t17 = (x69<=((x70%x71)^x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x73 = 0;
	int8_t x75 = INT8_MIN;
	static volatile int32_t x76 = INT32_MIN;

    t18 = (x73<=((x74%x75)^x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint32_t x77 = 5796973U;
	volatile uint64_t x78 = 7230066876792031LLU;
	int16_t x79 = INT16_MAX;
	volatile int64_t x80 = -1LL;
	static int32_t t19 = -57;

    t19 = (x77<=((x78%x79)^x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x81 = 11LLU;
	int32_t x82 = 31496212;
	uint8_t x83 = 4U;
	uint32_t x84 = 819U;
	volatile int32_t t20 = -12;

    t20 = (x81<=((x82%x83)^x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = INT16_MAX;
	int8_t x86 = 28;
	static int64_t x88 = 79731099405102LL;
	int32_t t21 = 47330;

    t21 = (x85<=((x86%x87)^x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = INT8_MIN;
	volatile uint8_t x90 = UINT8_MAX;
	static volatile int8_t x91 = INT8_MIN;
	int32_t x92 = -1;
	int32_t t22 = 1;

    t22 = (x89<=((x90%x91)^x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int32_t x93 = INT32_MIN;
	uint8_t x94 = 3U;
	static uint16_t x95 = 15578U;
	volatile uint32_t x96 = 877289168U;
	int32_t t23 = 752;

    t23 = (x93<=((x94%x95)^x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x97 = INT16_MIN;
	volatile int64_t x98 = INT64_MAX;
	static int32_t t24 = 8568;

    t24 = (x97<=((x98%x99)^x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = INT16_MIN;
	uint16_t x102 = 1537U;
	int32_t x104 = INT32_MIN;
	static volatile int32_t t25 = 60622005;

    t25 = (x101<=((x102%x103)^x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x105 = 120297U;
	int16_t x106 = -1;
	int32_t x107 = INT32_MAX;
	int8_t x108 = 0;
	volatile int32_t t26 = -1026504200;

    t26 = (x105<=((x106%x107)^x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = 1536482LL;
	volatile int16_t x110 = -1;
	static volatile uint32_t x111 = 12463046U;
	int64_t x112 = 20LL;
	volatile int32_t t27 = 430;

    t27 = (x109<=((x110%x111)^x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = INT8_MIN;
	static uint16_t x114 = 3201U;
	static int64_t x115 = INT64_MIN;
	uint8_t x116 = UINT8_MAX;
	int32_t t28 = -314;

    t28 = (x113<=((x114%x115)^x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x118 = INT32_MIN;
	int16_t x119 = INT16_MAX;
	int8_t x120 = -15;
	volatile int32_t t29 = 52139953;

    t29 = (x117<=((x118%x119)^x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int32_t x124 = INT32_MIN;
	static int32_t t30 = 665982;

    t30 = (x121<=((x122%x123)^x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = INT16_MIN;
	int8_t x127 = INT8_MIN;
	volatile int32_t t31 = -201;

    t31 = (x125<=((x126%x127)^x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x129 = -1;
	static int64_t x131 = INT64_MAX;
	uint16_t x132 = 437U;
	volatile int32_t t32 = 0;

    t32 = (x129<=((x130%x131)^x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x133 = 777591U;
	uint8_t x134 = 49U;
	uint16_t x135 = 299U;
	volatile int16_t x136 = INT16_MAX;

    t33 = (x133<=((x134%x135)^x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x138 = INT64_MIN;
	uint16_t x139 = 28391U;
	volatile uint64_t x140 = 383788944631LLU;
	int32_t t34 = 622261;

    t34 = (x137<=((x138%x139)^x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x141 = -1;
	volatile int32_t x142 = -1129;
	uint64_t x143 = 244781492133003LLU;
	int16_t x144 = -8113;
	static int32_t t35 = -104;

    t35 = (x141<=((x142%x143)^x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = -1;
	int64_t x146 = 432LL;
	volatile uint8_t x148 = UINT8_MAX;
	static volatile int32_t t36 = -32414;

    t36 = (x145<=((x146%x147)^x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = INT8_MIN;
	int32_t x150 = INT32_MIN;
	static volatile int16_t x151 = -137;
	volatile int64_t x152 = INT64_MAX;
	volatile int32_t t37 = -1;

    t37 = (x149<=((x150%x151)^x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = INT8_MIN;
	static int16_t x155 = -1;
	static uint32_t x156 = 41245759U;

    t38 = (x153<=((x154%x155)^x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint64_t x157 = UINT64_MAX;
	static int8_t x158 = INT8_MIN;
	int8_t x159 = INT8_MAX;
	int64_t x160 = 1194411427484987518LL;
	volatile int32_t t39 = -765733;

    t39 = (x157<=((x158%x159)^x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x162 = UINT32_MAX;
	uint16_t x164 = 1U;
	static int32_t t40 = 13289;

    t40 = (x161<=((x162%x163)^x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint32_t x165 = 6518U;
	int16_t x166 = 155;
	static int32_t x167 = -1464113;
	uint8_t x168 = 0U;
	volatile int32_t t41 = -902378381;

    t41 = (x165<=((x166%x167)^x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = -1LL;
	static uint64_t x171 = 240001LLU;
	static uint8_t x172 = UINT8_MAX;

    t42 = (x169<=((x170%x171)^x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x173 = 6138531U;
	volatile int16_t x174 = INT16_MIN;
	int8_t x175 = INT8_MAX;
	static uint64_t x176 = 2919864LLU;
	volatile int32_t t43 = -16002;

    t43 = (x173<=((x174%x175)^x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x177 = 8917U;
	static int16_t x178 = INT16_MIN;
	static uint16_t x179 = 11U;
	int32_t t44 = -120;

    t44 = (x177<=((x178%x179)^x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x183 = 17U;
	static int8_t x184 = INT8_MIN;
	static int32_t t45 = 5466594;

    t45 = (x181<=((x182%x183)^x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x189 = UINT32_MAX;
	int16_t x190 = INT16_MIN;
	int32_t x191 = INT32_MIN;
	int64_t x192 = -1LL;
	volatile int32_t t46 = 57647;

    t46 = (x189<=((x190%x191)^x192));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x193 = INT8_MIN;
	int8_t x194 = INT8_MIN;
	static int32_t x195 = -158;
	int64_t x196 = -1LL;

    t47 = (x193<=((x194%x195)^x196));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x197 = 0;
	static volatile int8_t x200 = INT8_MIN;
	volatile int32_t t48 = 5521;

    t48 = (x197<=((x198%x199)^x200));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x201 = 759U;
	uint16_t x202 = 49U;
	int16_t x203 = -1254;
	int8_t x204 = INT8_MAX;
	int32_t t49 = 264657821;

    t49 = (x201<=((x202%x203)^x204));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x205 = 197247439361LLU;
	int64_t x207 = INT64_MIN;
	volatile int32_t t50 = -784924560;

    t50 = (x205<=((x206%x207)^x208));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x210 = -44426;
	int32_t t51 = 29;

    t51 = (x209<=((x210%x211)^x212));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x213 = INT16_MIN;
	static uint64_t x214 = 1175245644596LLU;
	uint32_t x215 = 15561U;
	static volatile int32_t x216 = 7992611;
	static int32_t t52 = -13;

    t52 = (x213<=((x214%x215)^x216));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x217 = 878678549042415LLU;
	volatile uint32_t x218 = 272732079U;
	volatile uint32_t x219 = 31318U;
	int8_t x220 = INT8_MIN;

    t53 = (x217<=((x218%x219)^x220));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x221 = INT16_MIN;
	int8_t x224 = INT8_MIN;
	int32_t t54 = 88785;

    t54 = (x221<=((x222%x223)^x224));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x225 = 1U;
	uint64_t x226 = 109970119074200481LLU;
	static int16_t x227 = -1;
	volatile int64_t x228 = -1LL;
	volatile int32_t t55 = -1730393;

    t55 = (x225<=((x226%x227)^x228));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x229 = 346165534;
	volatile int8_t x230 = INT8_MIN;
	int64_t x231 = 633144LL;
	uint64_t x232 = 121509179366414LLU;
	int32_t t56 = 3997;

    t56 = (x229<=((x230%x231)^x232));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x235 = INT8_MIN;
	int64_t x236 = -1LL;
	static volatile int32_t t57 = -85;

    t57 = (x233<=((x234%x235)^x236));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint8_t x237 = 71U;
	int32_t x238 = -4;
	int32_t x239 = INT32_MIN;
	int64_t x240 = -502172364203389914LL;
	static volatile int32_t t58 = 233;

    t58 = (x237<=((x238%x239)^x240));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x241 = INT8_MAX;
	int64_t x242 = 1LL;
	int32_t x243 = 106741;
	static int8_t x244 = INT8_MIN;
	int32_t t59 = 4077949;

    t59 = (x241<=((x242%x243)^x244));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x245 = INT64_MAX;
	static uint8_t x246 = UINT8_MAX;
	uint32_t x247 = UINT32_MAX;
	int16_t x248 = INT16_MAX;
	volatile int32_t t60 = 37;

    t60 = (x245<=((x246%x247)^x248));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x249 = UINT16_MAX;
	static volatile uint16_t x250 = UINT16_MAX;
	static volatile int32_t x251 = INT32_MIN;
	int64_t x252 = INT64_MIN;
	static int32_t t61 = -61449;

    t61 = (x249<=((x250%x251)^x252));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint16_t x253 = 38U;
	static int32_t x254 = INT32_MAX;
	volatile int8_t x256 = -3;
	int32_t t62 = -42;

    t62 = (x253<=((x254%x255)^x256));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x257 = INT32_MIN;
	volatile int64_t x258 = -1LL;
	volatile uint64_t x259 = UINT64_MAX;
	int64_t x260 = -1LL;
	static int32_t t63 = 377;

    t63 = (x257<=((x258%x259)^x260));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t x262 = INT32_MAX;
	int32_t x263 = INT32_MIN;
	int16_t x264 = 1;
	volatile int32_t t64 = 9118314;

    t64 = (x261<=((x262%x263)^x264));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint16_t x265 = 26775U;
	uint64_t x267 = 58869705396739002LLU;
	volatile int32_t t65 = 708778273;

    t65 = (x265<=((x266%x267)^x268));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x269 = INT32_MIN;
	uint16_t x270 = 12220U;
	int64_t x271 = INT64_MIN;
	static uint8_t x272 = 0U;
	int32_t t66 = -1986739;

    t66 = (x269<=((x270%x271)^x272));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x273 = 5697U;
	static int8_t x276 = 0;
	volatile int32_t t67 = -4849;

    t67 = (x273<=((x274%x275)^x276));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x278 = INT32_MAX;
	volatile int8_t x279 = INT8_MAX;
	uint16_t x280 = 676U;
	static int32_t t68 = 31183;

    t68 = (x277<=((x278%x279)^x280));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x281 = -1;
	volatile uint64_t x282 = 119786938896276LLU;
	int32_t x284 = INT32_MIN;

    t69 = (x281<=((x282%x283)^x284));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x285 = 11U;
	volatile int32_t x286 = INT32_MIN;
	volatile int8_t x287 = INT8_MAX;
	int32_t x288 = -1;
	int32_t t70 = 8500;

    t70 = (x285<=((x286%x287)^x288));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x289 = INT32_MIN;
	int8_t x290 = -1;
	static int64_t x291 = INT64_MAX;
	int8_t x292 = -1;

    t71 = (x289<=((x290%x291)^x292));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x293 = 266U;
	static int32_t x295 = -1;
	uint64_t x296 = 156LLU;
	volatile int32_t t72 = -478945414;

    t72 = (x293<=((x294%x295)^x296));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x297 = INT16_MAX;
	volatile int16_t x298 = INT16_MIN;
	uint16_t x299 = 5U;
	uint32_t x300 = UINT32_MAX;
	volatile int32_t t73 = 14;

    t73 = (x297<=((x298%x299)^x300));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x301 = -1;
	uint16_t x302 = 3U;
	int64_t x303 = INT64_MAX;
	int32_t x304 = INT32_MAX;

    t74 = (x301<=((x302%x303)^x304));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x305 = -1LL;
	volatile uint8_t x307 = 10U;

    t75 = (x305<=((x306%x307)^x308));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x310 = INT16_MIN;
	static volatile int16_t x311 = INT16_MAX;
	int32_t x312 = -1;

    t76 = (x309<=((x310%x311)^x312));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x313 = INT16_MIN;
	int8_t x314 = INT8_MIN;
	uint8_t x315 = 40U;
	uint8_t x316 = 58U;
	static int32_t t77 = 33;

    t77 = (x313<=((x314%x315)^x316));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x317 = INT16_MIN;
	int8_t x318 = INT8_MIN;
	volatile uint8_t x319 = 3U;
	int32_t x320 = INT32_MAX;
	int32_t t78 = -26387;

    t78 = (x317<=((x318%x319)^x320));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x321 = INT64_MIN;
	volatile uint8_t x322 = 3U;
	static uint64_t x323 = 4LLU;
	uint8_t x324 = 17U;
	volatile int32_t t79 = 3092;

    t79 = (x321<=((x322%x323)^x324));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x325 = -410;
	int64_t x327 = -130496LL;
	int64_t x328 = -1LL;

    t80 = (x325<=((x326%x327)^x328));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x329 = UINT32_MAX;
	int64_t x331 = -1LL;
	int8_t x332 = -41;
	static volatile int32_t t81 = -1;

    t81 = (x329<=((x330%x331)^x332));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x333 = INT64_MAX;
	int16_t x335 = INT16_MAX;
	int32_t t82 = 6140935;

    t82 = (x333<=((x334%x335)^x336));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x337 = INT16_MAX;
	int32_t x338 = -7950;
	volatile int16_t x339 = INT16_MIN;
	int64_t x340 = INT64_MIN;
	volatile int32_t t83 = 2613530;

    t83 = (x337<=((x338%x339)^x340));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x341 = INT32_MIN;
	int8_t x342 = 22;
	uint64_t x343 = 1034586547LLU;
	volatile int16_t x344 = INT16_MAX;

    t84 = (x341<=((x342%x343)^x344));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int8_t x345 = INT8_MAX;
	volatile int16_t x346 = -29;
	int8_t x347 = INT8_MAX;
	int32_t t85 = -16;

    t85 = (x345<=((x346%x347)^x348));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x349 = 8643224U;
	int32_t x350 = INT32_MAX;
	volatile int16_t x351 = INT16_MIN;
	uint64_t x352 = 29384267088LLU;
	int32_t t86 = 0;

    t86 = (x349<=((x350%x351)^x352));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x353 = UINT64_MAX;
	volatile int8_t x354 = INT8_MAX;
	static volatile int32_t x355 = INT32_MIN;
	int16_t x356 = -1;

    t87 = (x353<=((x354%x355)^x356));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int32_t x357 = INT32_MIN;
	int64_t x358 = 27456062591LL;
	volatile uint64_t x359 = 129234630LLU;
	uint8_t x360 = UINT8_MAX;
	volatile int32_t t88 = 0;

    t88 = (x357<=((x358%x359)^x360));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int32_t x361 = INT32_MAX;
	static int32_t x363 = INT32_MAX;

    t89 = (x361<=((x362%x363)^x364));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x365 = 1;
	uint8_t x366 = 1U;
	int16_t x368 = -1;
	int32_t t90 = 60607;

    t90 = (x365<=((x366%x367)^x368));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x370 = 6520;
	static int16_t x371 = -916;
	uint8_t x372 = UINT8_MAX;
	volatile int32_t t91 = -382828880;

    t91 = (x369<=((x370%x371)^x372));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x373 = 22484438;
	int32_t x374 = INT32_MAX;
	int16_t x375 = INT16_MIN;
	static int64_t x376 = INT64_MIN;

    t92 = (x373<=((x374%x375)^x376));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x377 = UINT8_MAX;
	uint64_t x378 = 7534591384696LLU;
	static int64_t x379 = -1LL;
	volatile int16_t x380 = -1;
	volatile int32_t t93 = -39;

    t93 = (x377<=((x378%x379)^x380));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x381 = 25U;
	uint8_t x382 = UINT8_MAX;
	static int8_t x383 = -1;
	int32_t x384 = -459956590;
	volatile int32_t t94 = 2;

    t94 = (x381<=((x382%x383)^x384));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x385 = -24LL;
	int32_t x386 = INT32_MAX;
	uint32_t x387 = 178714516U;
	static int32_t t95 = 9;

    t95 = (x385<=((x386%x387)^x388));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x389 = INT8_MAX;
	volatile int16_t x390 = -1;
	uint8_t x392 = 12U;
	int32_t t96 = -7379240;

    t96 = (x389<=((x390%x391)^x392));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x393 = -1;
	static int8_t x394 = INT8_MAX;
	int64_t x395 = INT64_MIN;
	volatile uint64_t x396 = 4572LLU;
	static volatile int32_t t97 = 1;

    t97 = (x393<=((x394%x395)^x396));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x398 = -1;
	int16_t x399 = -18;
	static int8_t x400 = -1;

    t98 = (x397<=((x398%x399)^x400));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t t99 = -29;

    t99 = (x401<=((x402%x403)^x404));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x405 = INT32_MIN;
	volatile int16_t x407 = -354;
	int16_t x408 = INT16_MIN;
	int32_t t100 = -1201082;

    t100 = (x405<=((x406%x407)^x408));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x409 = UINT8_MAX;
	int16_t x410 = INT16_MIN;
	int64_t x412 = INT64_MIN;
	int32_t t101 = -1370730;

    t101 = (x409<=((x410%x411)^x412));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x413 = -1;
	int64_t x414 = INT64_MIN;
	uint8_t x415 = 10U;

    t102 = (x413<=((x414%x415)^x416));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x417 = INT16_MIN;
	uint64_t x419 = 2122593130373414LLU;
	static int32_t x420 = -1;
	int32_t t103 = 11;

    t103 = (x417<=((x418%x419)^x420));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint8_t x421 = UINT8_MAX;
	uint64_t x422 = 1959892LLU;
	int32_t x423 = INT32_MIN;
	uint32_t x424 = 391590U;
	volatile int32_t t104 = -10843;

    t104 = (x421<=((x422%x423)^x424));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x425 = UINT64_MAX;
	uint32_t x426 = 1468545927U;
	static int64_t x428 = INT64_MIN;

    t105 = (x425<=((x426%x427)^x428));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x429 = INT8_MIN;
	static uint64_t x430 = 242532LLU;
	uint32_t x431 = 7U;
	volatile int32_t x432 = INT32_MIN;
	volatile int32_t t106 = 56;

    t106 = (x429<=((x430%x431)^x432));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x434 = INT8_MIN;
	static int32_t x435 = -1;
	int16_t x436 = -256;
	int32_t t107 = -426715974;

    t107 = (x433<=((x434%x435)^x436));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x437 = INT8_MIN;
	int16_t x438 = INT16_MAX;
	static uint32_t x439 = 20465169U;

    t108 = (x437<=((x438%x439)^x440));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x441 = INT8_MIN;
	volatile uint64_t x442 = 1878LLU;
	static int32_t x443 = -1013492;
	static uint64_t x444 = 296112406261405679LLU;
	volatile int32_t t109 = -2;

    t109 = (x441<=((x442%x443)^x444));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x445 = INT64_MAX;
	static int8_t x446 = INT8_MAX;
	int32_t x447 = 16571;
	int64_t x448 = -1LL;
	int32_t t110 = -1;

    t110 = (x445<=((x446%x447)^x448));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x449 = INT16_MAX;
	uint32_t x450 = 616201U;
	uint64_t x451 = 683629LLU;
	static int32_t t111 = -1263;

    t111 = (x449<=((x450%x451)^x452));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int16_t x454 = INT16_MIN;
	static int32_t x455 = INT32_MIN;
	int8_t x456 = INT8_MIN;

    t112 = (x453<=((x454%x455)^x456));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x457 = 2;
	volatile uint16_t x458 = UINT16_MAX;
	static int16_t x459 = -1;
	int16_t x460 = -56;

    t113 = (x457<=((x458%x459)^x460));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x461 = INT64_MIN;
	static int16_t x462 = INT16_MIN;
	volatile uint16_t x463 = UINT16_MAX;
	int32_t t114 = 54031083;

    t114 = (x461<=((x462%x463)^x464));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x465 = 285;
	int8_t x466 = 13;
	int8_t x467 = 1;
	int32_t t115 = 3205;

    t115 = (x465<=((x466%x467)^x468));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x469 = INT32_MIN;
	int32_t x470 = INT32_MAX;
	static int32_t x471 = INT32_MAX;
	uint8_t x472 = UINT8_MAX;
	int32_t t116 = 5;

    t116 = (x469<=((x470%x471)^x472));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x473 = INT16_MIN;
	int8_t x474 = INT8_MIN;
	volatile int8_t x475 = INT8_MIN;
	int32_t t117 = 2938;

    t117 = (x473<=((x474%x475)^x476));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x477 = -2033803827LL;
	int32_t x478 = INT32_MIN;
	uint16_t x480 = 984U;
	volatile int32_t t118 = -2;

    t118 = (x477<=((x478%x479)^x480));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x481 = 148U;
	int16_t x482 = INT16_MIN;
	uint8_t x483 = UINT8_MAX;
	static int32_t t119 = 1755618;

    t119 = (x481<=((x482%x483)^x484));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile uint32_t x485 = 96646823U;
	uint64_t x486 = 1835955354LLU;
	int16_t x488 = INT16_MIN;
	volatile int32_t t120 = 44751;

    t120 = (x485<=((x486%x487)^x488));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint64_t x489 = UINT64_MAX;
	int8_t x490 = INT8_MAX;
	static uint32_t x491 = 248U;
	int32_t t121 = 3889;

    t121 = (x489<=((x490%x491)^x492));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int32_t x493 = INT32_MIN;
	int64_t x494 = INT64_MIN;
	uint64_t x495 = 1LLU;
	int16_t x496 = -1;
	int32_t t122 = -902;

    t122 = (x493<=((x494%x495)^x496));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x498 = INT16_MIN;
	volatile int16_t x499 = INT16_MIN;
	int16_t x500 = INT16_MAX;
	volatile int32_t t123 = 73088;

    t123 = (x497<=((x498%x499)^x500));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x501 = -511;
	uint8_t x503 = 11U;
	uint8_t x504 = 43U;
	volatile int32_t t124 = -26260;

    t124 = (x501<=((x502%x503)^x504));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x506 = INT64_MIN;
	uint64_t x507 = UINT64_MAX;
	volatile int16_t x508 = -359;
	volatile int32_t t125 = -125;

    t125 = (x505<=((x506%x507)^x508));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x510 = UINT8_MAX;
	static volatile int8_t x511 = INT8_MIN;
	int64_t x512 = INT64_MIN;
	volatile int32_t t126 = -1;

    t126 = (x509<=((x510%x511)^x512));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x513 = INT16_MAX;
	static uint8_t x514 = UINT8_MAX;
	int32_t x515 = -1;
	static int32_t x516 = INT32_MAX;
	volatile int32_t t127 = -1318;

    t127 = (x513<=((x514%x515)^x516));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x517 = UINT32_MAX;
	static uint64_t x518 = 0LLU;
	volatile uint32_t x519 = UINT32_MAX;
	static int8_t x520 = 0;
	volatile int32_t t128 = 1;

    t128 = (x517<=((x518%x519)^x520));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x521 = 380314263161396LLU;
	static int16_t x523 = INT16_MIN;
	uint32_t x524 = 15297297U;
	int32_t t129 = 1093749;

    t129 = (x521<=((x522%x523)^x524));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x525 = INT8_MIN;
	static volatile int8_t x526 = -1;
	volatile int32_t t130 = 10431061;

    t130 = (x525<=((x526%x527)^x528));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x529 = INT32_MIN;
	volatile int8_t x531 = -1;
	volatile int16_t x532 = -1;

    t131 = (x529<=((x530%x531)^x532));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int8_t x533 = -1;
	static volatile int8_t x534 = INT8_MIN;
	int16_t x535 = INT16_MAX;
	int32_t t132 = -594350;

    t132 = (x533<=((x534%x535)^x536));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x537 = INT64_MIN;
	int32_t x539 = INT32_MIN;
	int32_t x540 = INT32_MIN;

    t133 = (x537<=((x538%x539)^x540));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint64_t x543 = 33389908LLU;
	int32_t t134 = -2500;

    t134 = (x541<=((x542%x543)^x544));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x545 = -11440;
	static uint16_t x546 = 9U;
	uint32_t x548 = 89578U;
	int32_t t135 = 149582;

    t135 = (x545<=((x546%x547)^x548));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x549 = 13735546794305871LLU;
	volatile uint8_t x550 = 52U;
	static volatile uint8_t x551 = UINT8_MAX;
	int16_t x552 = 16005;
	int32_t t136 = 10856;

    t136 = (x549<=((x550%x551)^x552));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int16_t x553 = INT16_MIN;
	int16_t x554 = INT16_MIN;
	uint8_t x555 = UINT8_MAX;
	int64_t x556 = INT64_MIN;

    t137 = (x553<=((x554%x555)^x556));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x557 = 0;
	int64_t x559 = -34129327912194LL;
	uint64_t x560 = 129912765018LLU;
	static int32_t t138 = 939;

    t138 = (x557<=((x558%x559)^x560));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x561 = -1LL;
	static int8_t x562 = 1;
	int16_t x563 = -6197;
	int8_t x564 = 15;
	int32_t t139 = -13621455;

    t139 = (x561<=((x562%x563)^x564));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static int64_t x565 = 2060483LL;
	uint32_t x566 = UINT32_MAX;
	int16_t x568 = INT16_MIN;
	volatile int32_t t140 = -28;

    t140 = (x565<=((x566%x567)^x568));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x569 = INT16_MIN;
	int64_t x570 = INT64_MAX;
	static int64_t x571 = INT64_MIN;
	int64_t x572 = 1874796027888124LL;
	int32_t t141 = -4479417;

    t141 = (x569<=((x570%x571)^x572));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x573 = 3335705560819972LL;
	uint32_t x574 = 887152U;
	volatile int16_t x575 = INT16_MAX;
	int64_t x576 = INT64_MIN;
	int32_t t142 = 9;

    t142 = (x573<=((x574%x575)^x576));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x577 = -21964LL;
	static int16_t x578 = INT16_MIN;
	static uint32_t x580 = UINT32_MAX;
	static volatile int32_t t143 = 1;

    t143 = (x577<=((x578%x579)^x580));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x581 = -6;
	uint64_t x582 = UINT64_MAX;
	int16_t x583 = -1;

    t144 = (x581<=((x582%x583)^x584));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x585 = 1U;
	int64_t x586 = 347743221670600LL;
	uint64_t x587 = 2637412083087LLU;
	int16_t x588 = INT16_MIN;
	int32_t t145 = -901434464;

    t145 = (x585<=((x586%x587)^x588));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x589 = INT16_MAX;
	int8_t x590 = -5;
	uint32_t x591 = 58792U;
	static volatile uint32_t x592 = 144103U;

    t146 = (x589<=((x590%x591)^x592));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x593 = INT64_MIN;
	volatile int32_t x594 = INT32_MAX;
	int64_t x595 = -1LL;
	int8_t x596 = -1;
	int32_t t147 = 101617937;

    t147 = (x593<=((x594%x595)^x596));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x597 = 100325280625628LLU;
	static uint16_t x598 = 986U;
	int8_t x599 = 5;
	uint64_t x600 = 2150934009123LLU;
	int32_t t148 = 746134;

    t148 = (x597<=((x598%x599)^x600));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x602 = -1;
	uint8_t x603 = 1U;
	uint32_t x604 = 1363U;
	volatile int32_t t149 = -26;

    t149 = (x601<=((x602%x603)^x604));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static int64_t x605 = -1LL;
	int16_t x607 = INT16_MIN;
	int8_t x608 = INT8_MIN;

    t150 = (x605<=((x606%x607)^x608));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x609 = UINT32_MAX;
	int32_t x612 = -331296322;
	int32_t t151 = -1;

    t151 = (x609<=((x610%x611)^x612));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x613 = UINT64_MAX;
	int16_t x614 = INT16_MIN;
	int64_t x615 = INT64_MAX;
	uint16_t x616 = 0U;
	volatile int32_t t152 = -982839;

    t152 = (x613<=((x614%x615)^x616));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x617 = UINT32_MAX;
	int64_t x618 = INT64_MAX;
	int64_t x619 = -236149587LL;
	int32_t x620 = INT32_MAX;
	static int32_t t153 = -107;

    t153 = (x617<=((x618%x619)^x620));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x621 = -2210788416440815LL;
	int64_t x622 = INT64_MIN;
	volatile int16_t x623 = INT16_MAX;
	int64_t x624 = -1LL;
	int32_t t154 = 37531;

    t154 = (x621<=((x622%x623)^x624));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x625 = INT8_MAX;
	int8_t x626 = INT8_MIN;
	uint64_t x627 = 28424049306864LLU;
	int64_t x628 = INT64_MAX;

    t155 = (x625<=((x626%x627)^x628));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int64_t x631 = 3262953454177002LL;
	uint32_t x632 = 1U;
	int32_t t156 = -8416;

    t156 = (x629<=((x630%x631)^x632));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x633 = INT64_MAX;
	int8_t x635 = -51;

    t157 = (x633<=((x634%x635)^x636));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint32_t x637 = 16134U;
	int16_t x639 = -1;
	uint64_t x640 = 696148928LLU;
	volatile int32_t t158 = 0;

    t158 = (x637<=((x638%x639)^x640));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x641 = -19;
	int16_t x642 = -1;
	int16_t x643 = INT16_MIN;
	static int64_t x644 = 117388069563LL;
	static volatile int32_t t159 = 70661;

    t159 = (x641<=((x642%x643)^x644));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x646 = INT32_MAX;
	int64_t x647 = -1LL;
	uint64_t x648 = UINT64_MAX;

    t160 = (x645<=((x646%x647)^x648));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x649 = -1;
	int8_t x650 = INT8_MAX;
	volatile int64_t x651 = -21013LL;
	static int8_t x652 = INT8_MAX;
	int32_t t161 = 0;

    t161 = (x649<=((x650%x651)^x652));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x653 = INT32_MIN;
	int16_t x654 = INT16_MIN;
	static int8_t x655 = 40;
	volatile uint64_t x656 = UINT64_MAX;
	volatile int32_t t162 = -162548;

    t162 = (x653<=((x654%x655)^x656));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int8_t x661 = INT8_MAX;
	uint8_t x662 = UINT8_MAX;
	int64_t x663 = INT64_MAX;
	uint64_t x664 = 232LLU;

    t163 = (x661<=((x662%x663)^x664));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x665 = 70;
	int32_t x666 = INT32_MAX;
	int16_t x667 = -1;
	int8_t x668 = INT8_MIN;

    t164 = (x665<=((x666%x667)^x668));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x669 = -1;
	static int32_t x670 = -9101942;
	static int64_t x671 = INT64_MAX;
	int8_t x672 = 56;
	int32_t t165 = 15957209;

    t165 = (x669<=((x670%x671)^x672));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x673 = -1;
	int8_t x674 = 1;
	uint16_t x676 = 4135U;
	int32_t t166 = 8487;

    t166 = (x673<=((x674%x675)^x676));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint64_t x678 = 12666861560877LLU;
	static uint32_t x679 = 124U;
	static int32_t x680 = 3691;

    t167 = (x677<=((x678%x679)^x680));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x681 = INT16_MIN;
	int16_t x682 = INT16_MIN;
	volatile uint16_t x683 = 7U;
	uint8_t x684 = 118U;
	int32_t t168 = 38873;

    t168 = (x681<=((x682%x683)^x684));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x685 = -1;
	static int16_t x686 = INT16_MIN;
	volatile uint8_t x688 = 0U;
	int32_t t169 = 24211164;

    t169 = (x685<=((x686%x687)^x688));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x689 = INT32_MIN;
	int64_t x690 = -1LL;
	uint16_t x692 = 840U;
	volatile int32_t t170 = -658;

    t170 = (x689<=((x690%x691)^x692));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x693 = UINT32_MAX;
	volatile int32_t x694 = INT32_MIN;
	volatile int64_t x695 = INT64_MIN;
	uint16_t x696 = UINT16_MAX;

    t171 = (x693<=((x694%x695)^x696));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x701 = 8;
	volatile int8_t x702 = INT8_MAX;
	int32_t x704 = 14908337;
	int32_t t172 = -41;

    t172 = (x701<=((x702%x703)^x704));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x709 = 52U;
	static volatile int64_t x710 = INT64_MAX;
	volatile int32_t x711 = INT32_MIN;
	volatile int32_t t173 = 1329;

    t173 = (x709<=((x710%x711)^x712));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x714 = INT32_MAX;
	int32_t t174 = 7587565;

    t174 = (x713<=((x714%x715)^x716));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x717 = 140U;
	static int8_t x719 = INT8_MIN;
	static int32_t t175 = -110;

    t175 = (x717<=((x718%x719)^x720));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x721 = -1;
	volatile int64_t x722 = -1LL;
	uint32_t x724 = 707U;
	static volatile int32_t t176 = 11;

    t176 = (x721<=((x722%x723)^x724));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x725 = 28;
	uint32_t x726 = 28627U;
	static int32_t x728 = INT32_MIN;
	static volatile int32_t t177 = -1139;

    t177 = (x725<=((x726%x727)^x728));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x730 = INT32_MAX;
	volatile int32_t x731 = 366402;
	volatile uint16_t x732 = 5324U;
	volatile int32_t t178 = -1727796;

    t178 = (x729<=((x730%x731)^x732));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x733 = INT64_MIN;
	int64_t x734 = -1LL;
	static volatile int8_t x735 = -1;
	int16_t x736 = INT16_MIN;
	int32_t t179 = 7441271;

    t179 = (x733<=((x734%x735)^x736));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x738 = INT8_MIN;
	uint16_t x739 = 3938U;
	uint64_t x740 = UINT64_MAX;
	volatile int32_t t180 = -464168823;

    t180 = (x737<=((x738%x739)^x740));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x745 = INT8_MAX;
	static uint16_t x746 = UINT16_MAX;
	volatile int32_t t181 = -22007;

    t181 = (x745<=((x746%x747)^x748));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x753 = 51868478320757596LLU;
	uint32_t x754 = UINT32_MAX;
	volatile int8_t x755 = INT8_MIN;
	uint16_t x756 = UINT16_MAX;
	volatile int32_t t182 = -29617303;

    t182 = (x753<=((x754%x755)^x756));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x757 = 5U;
	int16_t x758 = -1;
	static int64_t x759 = INT64_MAX;
	volatile uint16_t x760 = 150U;
	int32_t t183 = -43;

    t183 = (x757<=((x758%x759)^x760));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x761 = -64184586;
	int16_t x762 = INT16_MAX;
	static int64_t x763 = INT64_MAX;
	volatile uint64_t x764 = 8595343224LLU;

    t184 = (x761<=((x762%x763)^x764));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x765 = INT8_MAX;
	uint32_t x766 = UINT32_MAX;
	static int64_t x767 = -33096309987435LL;
	int32_t x768 = INT32_MAX;
	int32_t t185 = 1354624;

    t185 = (x765<=((x766%x767)^x768));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int64_t x769 = 6LL;
	uint16_t x771 = 521U;
	static volatile int32_t t186 = 41414997;

    t186 = (x769<=((x770%x771)^x772));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x773 = UINT8_MAX;
	volatile uint16_t x774 = UINT16_MAX;
	volatile int32_t x775 = -7306;
	int64_t x776 = INT64_MAX;
	volatile int32_t t187 = 2754049;

    t187 = (x773<=((x774%x775)^x776));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x777 = 3167;
	int8_t x779 = -3;

    t188 = (x777<=((x778%x779)^x780));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x781 = -1LL;
	int8_t x782 = 47;
	int32_t x783 = INT32_MAX;
	uint64_t x784 = 7357LLU;
	static volatile int32_t t189 = -200108025;

    t189 = (x781<=((x782%x783)^x784));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t t190 = -29;

    t190 = (x785<=((x786%x787)^x788));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x789 = INT16_MIN;
	uint32_t x791 = 9U;
	int32_t t191 = -34992192;

    t191 = (x789<=((x790%x791)^x792));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x793 = INT8_MIN;
	volatile int64_t x794 = INT64_MAX;
	int8_t x795 = INT8_MIN;
	volatile int32_t x796 = -1;
	volatile int32_t t192 = -169031494;

    t192 = (x793<=((x794%x795)^x796));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile uint32_t x801 = 4577656U;
	int32_t x802 = 1;
	uint32_t x803 = 192U;
	int32_t x804 = 242;
	static volatile int32_t t193 = 9;

    t193 = (x801<=((x802%x803)^x804));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x805 = 1752542U;
	int64_t x806 = 910743070676541715LL;
	int16_t x807 = -1;
	volatile int32_t t194 = 27182137;

    t194 = (x805<=((x806%x807)^x808));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x809 = INT64_MIN;
	int32_t x811 = INT32_MIN;
	int16_t x812 = INT16_MIN;
	volatile int32_t t195 = -3851739;

    t195 = (x809<=((x810%x811)^x812));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x814 = -917783844;
	uint8_t x815 = 2U;
	int64_t x816 = INT64_MIN;
	int32_t t196 = -1340;

    t196 = (x813<=((x814%x815)^x816));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int16_t x817 = INT16_MIN;
	static int16_t x818 = 1;
	static volatile uint8_t x819 = 8U;
	volatile int32_t t197 = -25819125;

    t197 = (x817<=((x818%x819)^x820));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x822 = -9774;
	static int16_t x824 = 1;

    t198 = (x821<=((x822%x823)^x824));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x825 = 3;
	int16_t x826 = INT16_MIN;
	static int8_t x827 = INT8_MIN;
	uint64_t x828 = UINT64_MAX;
	volatile int32_t t199 = 9;

    t199 = (x825<=((x826%x827)^x828));

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

