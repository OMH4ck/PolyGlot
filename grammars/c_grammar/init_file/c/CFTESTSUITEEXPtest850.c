
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

volatile int32_t x1 = 23331;
int32_t x2 = INT32_MAX;
int64_t x3 = INT64_MIN;
static int8_t x4 = -1;
int64_t x6 = -1LL;
uint32_t x8 = UINT32_MAX;
uint64_t x13 = UINT64_MAX;
uint16_t x14 = UINT16_MAX;
static int32_t x15 = INT32_MIN;
int64_t x20 = -25969LL;
uint64_t x21 = UINT64_MAX;
volatile int64_t x26 = 299LL;
int64_t x28 = 2086084663004LL;
int8_t x33 = INT8_MAX;
uint32_t x47 = 137689U;
volatile int32_t t12 = 15;
int32_t t16 = -44276414;
volatile uint64_t x78 = UINT64_MAX;
volatile int32_t x80 = -2088303;
uint64_t x81 = 39006342LLU;
int32_t x86 = INT32_MAX;
uint32_t x92 = UINT32_MAX;
volatile int8_t x97 = INT8_MIN;
static volatile int32_t t21 = 2939005;
int16_t x102 = INT16_MIN;
int16_t x108 = -384;
int16_t x115 = INT16_MIN;
int32_t t25 = 5580422;
int64_t x123 = -1LL;
uint32_t x125 = 11310U;
static int64_t x127 = INT64_MIN;
int16_t x129 = INT16_MIN;
static volatile int8_t x133 = -3;
int16_t x135 = INT16_MIN;
int8_t x140 = INT8_MIN;
volatile int32_t x141 = INT32_MIN;
uint32_t x142 = UINT32_MAX;
uint64_t x143 = UINT64_MAX;
uint8_t x149 = 6U;
int32_t x151 = 7;
volatile int32_t t34 = 16027;
int16_t x158 = INT16_MIN;
int32_t x160 = INT32_MIN;
uint8_t x163 = UINT8_MAX;
volatile int32_t t38 = 1;
volatile int64_t x169 = 264283745670LL;
int32_t x188 = -29;
int32_t x193 = INT32_MIN;
int32_t x195 = -46707235;
uint64_t x196 = 331451248LLU;
static uint16_t x201 = UINT16_MAX;
int8_t x202 = INT8_MIN;
int32_t t45 = 0;
volatile int32_t t46 = 103740703;
volatile int32_t t47 = 1034;
int8_t x216 = 1;
uint32_t x218 = 4U;
volatile int32_t t49 = -138357308;
int8_t x224 = INT8_MIN;
static int8_t x225 = 2;
int32_t t51 = 20270;
static volatile int32_t x233 = INT32_MAX;
uint32_t x234 = 1U;
int16_t x242 = INT16_MIN;
int32_t x243 = INT32_MAX;
volatile uint8_t x245 = UINT8_MAX;
static int32_t x249 = INT32_MAX;
uint16_t x251 = UINT16_MAX;
volatile int16_t x252 = INT16_MIN;
int64_t x253 = INT64_MAX;
uint64_t x255 = UINT64_MAX;
uint16_t x263 = 454U;
int16_t x270 = INT16_MIN;
volatile uint16_t x273 = UINT16_MAX;
uint32_t x276 = 145610U;
volatile int16_t x285 = INT16_MIN;
int32_t t64 = 463758955;
int64_t x294 = 12249659271275LL;
volatile int8_t x300 = INT8_MIN;
uint64_t x305 = 2LLU;
int64_t x316 = INT64_MAX;
volatile int32_t t71 = -7326;
uint16_t x322 = 24729U;
uint64_t x328 = 281931938LLU;
int32_t t74 = -624600034;
int32_t x329 = 0;
static int8_t x330 = INT8_MIN;
int64_t x351 = -1517771724LL;
uint64_t x353 = 14772802413624064LLU;
int8_t x357 = -3;
uint64_t x360 = UINT64_MAX;
int16_t x361 = -1;
int8_t x363 = INT8_MIN;
volatile int8_t x365 = -2;
uint8_t x366 = 14U;
static volatile int32_t t87 = -3884;
int16_t x385 = -1;
int64_t x395 = 16190767041867LL;
static volatile uint32_t x396 = 211532U;
int16_t x405 = -1;
static int32_t t94 = -231197;
volatile int8_t x411 = INT8_MIN;
uint16_t x412 = 129U;
int32_t t95 = -2;
uint32_t x416 = UINT32_MAX;
int32_t x418 = -1;
int64_t x420 = INT64_MIN;
uint64_t x422 = 3400129LLU;
volatile int64_t x426 = INT64_MIN;
uint32_t x430 = UINT32_MAX;
static int8_t x438 = -1;
int64_t x441 = -7908242815892LL;
uint32_t x443 = 3090U;
int32_t t104 = 68209395;
int32_t x455 = INT32_MIN;
int32_t t106 = -275843566;
int64_t x457 = -1LL;
int32_t t107 = 3108613;
static int8_t x466 = INT8_MIN;
int16_t x467 = INT16_MAX;
static volatile int32_t t110 = 743564125;
static uint32_t x475 = 1115419400U;
uint8_t x480 = UINT8_MAX;
static volatile int8_t x498 = -1;
volatile int32_t t118 = 926572;
int8_t x508 = -50;
volatile int32_t x516 = INT32_MIN;
int32_t t122 = -2689;
static volatile uint8_t x523 = UINT8_MAX;
static uint8_t x527 = UINT8_MAX;
static volatile int32_t t124 = 244227728;
volatile int32_t t125 = 0;
volatile int32_t x535 = INT32_MIN;
volatile uint8_t x554 = 32U;
int16_t x556 = INT16_MIN;
int8_t x566 = 12;
int32_t x569 = INT32_MIN;
int32_t x570 = INT32_MAX;
static volatile int32_t t133 = -6592991;
int32_t x573 = 6500843;
static volatile uint64_t x575 = UINT64_MAX;
uint16_t x576 = UINT16_MAX;
int16_t x590 = -1;
static int8_t x596 = 41;
int16_t x598 = -1;
int8_t x607 = INT8_MIN;
uint32_t x610 = 48U;
int64_t x616 = INT64_MIN;
uint8_t x618 = 21U;
static int16_t x622 = INT16_MIN;
int8_t x623 = INT8_MIN;
static int32_t x625 = -1;
int32_t x628 = -1;
int32_t x630 = 494947;
volatile int16_t x636 = INT16_MIN;
uint64_t x637 = 71619170160617LLU;
int64_t x639 = INT64_MIN;
static int16_t x640 = -2;
static int16_t x641 = -85;
volatile uint64_t x643 = 3160676LLU;
int8_t x651 = INT8_MIN;
int32_t x653 = INT32_MIN;
uint16_t x660 = 1655U;
volatile int32_t t153 = 117;
static volatile int32_t t158 = 908;
int64_t x686 = INT64_MIN;
uint8_t x688 = 7U;
int64_t x707 = INT64_MIN;
int8_t x708 = INT8_MAX;
int32_t t163 = 1;
int32_t t165 = 8;
volatile uint64_t x717 = 1LLU;
volatile int32_t t169 = -7;
static int32_t t171 = 4302993;
uint32_t x741 = 20170683U;
volatile int64_t x745 = -1524176420900LL;
int8_t x746 = INT8_MAX;
static volatile int64_t x751 = 45LL;
static int64_t x753 = INT64_MIN;
int64_t x755 = INT64_MIN;
static uint8_t x772 = 7U;
static uint16_t x777 = 2108U;
int64_t x780 = 330565569LL;
static int32_t x783 = INT32_MIN;
int64_t x794 = INT64_MIN;
int32_t x797 = 486456953;
int8_t x799 = -1;
int32_t t184 = -7299674;
static volatile uint16_t x804 = 1014U;
volatile int32_t t185 = -3075314;
static uint16_t x815 = 59U;
uint64_t x820 = 1495967LLU;
volatile int32_t t189 = 124448;
volatile int8_t x821 = -13;
int32_t x824 = 133680;
int8_t x826 = INT8_MIN;
int16_t x835 = INT16_MAX;
volatile int16_t x839 = 2;
static volatile int16_t x842 = 46;
volatile int32_t t196 = -14613709;
int32_t x851 = INT32_MAX;
volatile int32_t t197 = -17;
int32_t x855 = 1;
int16_t x856 = INT16_MAX;
volatile int32_t t198 = -1978085;
int32_t t199 = -12;


void f0(void) {
    	static volatile int32_t t0 = -62803639;

    t0 = (x1<=((x2%x3)%x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MAX;
	volatile int32_t x7 = 22903819;
	volatile int32_t t1 = 70124;

    t1 = (x5<=((x6%x7)%x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint16_t x16 = 749U;
	static int32_t t2 = 592503;

    t2 = (x13<=((x14%x15)%x16));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x17 = INT32_MAX;
	uint64_t x18 = 7LLU;
	int32_t x19 = -5237;
	int32_t t3 = 225236367;

    t3 = (x17<=((x18%x19)%x20));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x22 = INT32_MIN;
	int8_t x23 = 1;
	static volatile uint64_t x24 = 36420199369327LLU;
	volatile int32_t t4 = -6543;

    t4 = (x21<=((x22%x23)%x24));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x25 = INT64_MIN;
	static uint16_t x27 = 10470U;
	volatile int32_t t5 = 1042490;

    t5 = (x25<=((x26%x27)%x28));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x29 = INT8_MIN;
	int64_t x30 = -1LL;
	int8_t x31 = INT8_MIN;
	uint16_t x32 = 5152U;
	static int32_t t6 = 31085429;

    t6 = (x29<=((x30%x31)%x32));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x34 = -34846;
	int16_t x35 = INT16_MIN;
	volatile int8_t x36 = INT8_MIN;
	volatile int32_t t7 = 27;

    t7 = (x33<=((x34%x35)%x36));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x37 = -1;
	int64_t x38 = INT64_MIN;
	int64_t x39 = -3634LL;
	int16_t x40 = INT16_MAX;
	int32_t t8 = -40;

    t8 = (x37<=((x38%x39)%x40));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x41 = -49817762;
	uint8_t x42 = 1U;
	uint16_t x43 = UINT16_MAX;
	int64_t x44 = INT64_MIN;
	volatile int32_t t9 = 40;

    t9 = (x41<=((x42%x43)%x44));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x45 = INT16_MIN;
	static volatile int16_t x46 = -253;
	int16_t x48 = INT16_MIN;
	static volatile int32_t t10 = 1198;

    t10 = (x45<=((x46%x47)%x48));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x49 = INT8_MIN;
	uint64_t x50 = 14LLU;
	volatile int16_t x51 = -14110;
	int16_t x52 = -1;
	volatile int32_t t11 = 79;

    t11 = (x49<=((x50%x51)%x52));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static int64_t x53 = INT64_MIN;
	int32_t x54 = 60285486;
	int8_t x55 = INT8_MIN;
	int8_t x56 = INT8_MIN;

    t12 = (x53<=((x54%x55)%x56));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x57 = 3U;
	int32_t x58 = INT32_MIN;
	volatile uint16_t x59 = UINT16_MAX;
	static int16_t x60 = -1;
	int32_t t13 = -26;

    t13 = (x57<=((x58%x59)%x60));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x61 = UINT16_MAX;
	int64_t x62 = -1LL;
	uint8_t x63 = UINT8_MAX;
	int16_t x64 = INT16_MIN;
	int32_t t14 = -15606;

    t14 = (x61<=((x62%x63)%x64));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x65 = INT8_MIN;
	static int64_t x66 = -1LL;
	volatile int8_t x67 = 1;
	uint64_t x68 = UINT64_MAX;
	volatile int32_t t15 = 153253583;

    t15 = (x65<=((x66%x67)%x68));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint32_t x73 = UINT32_MAX;
	int32_t x74 = INT32_MIN;
	static uint32_t x75 = 50U;
	uint16_t x76 = 4U;

    t16 = (x73<=((x74%x75)%x76));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x77 = INT64_MIN;
	uint32_t x79 = UINT32_MAX;
	static volatile int32_t t17 = 52682;

    t17 = (x77<=((x78%x79)%x80));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x82 = UINT8_MAX;
	static volatile int16_t x83 = INT16_MIN;
	uint32_t x84 = 224947452U;
	int32_t t18 = -23;

    t18 = (x81<=((x82%x83)%x84));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint32_t x85 = 505U;
	int64_t x87 = -1LL;
	int8_t x88 = -1;
	volatile int32_t t19 = 0;

    t19 = (x85<=((x86%x87)%x88));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x89 = INT16_MAX;
	volatile int16_t x90 = -193;
	volatile int8_t x91 = INT8_MAX;
	int32_t t20 = -8;

    t20 = (x89<=((x90%x91)%x92));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int32_t x98 = INT32_MAX;
	int32_t x99 = INT32_MIN;
	uint16_t x100 = 57U;

    t21 = (x97<=((x98%x99)%x100));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x101 = 0;
	volatile int16_t x103 = INT16_MIN;
	uint64_t x104 = UINT64_MAX;
	volatile int32_t t22 = 693;

    t22 = (x101<=((x102%x103)%x104));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x105 = INT16_MIN;
	int64_t x106 = INT64_MIN;
	volatile int16_t x107 = 10;
	int32_t t23 = 0;

    t23 = (x105<=((x106%x107)%x108));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x109 = INT8_MAX;
	uint16_t x110 = UINT16_MAX;
	static uint64_t x111 = UINT64_MAX;
	static int32_t x112 = INT32_MIN;
	int32_t t24 = 55;

    t24 = (x109<=((x110%x111)%x112));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x113 = 1989425;
	uint16_t x114 = 0U;
	uint32_t x116 = UINT32_MAX;

    t25 = (x113<=((x114%x115)%x116));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x117 = INT16_MIN;
	static uint16_t x118 = UINT16_MAX;
	int16_t x119 = -1;
	int32_t x120 = -1;
	int32_t t26 = 97;

    t26 = (x117<=((x118%x119)%x120));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x121 = 1325312138471085LLU;
	int64_t x122 = INT64_MIN;
	uint32_t x124 = 27972U;
	volatile int32_t t27 = 895;

    t27 = (x121<=((x122%x123)%x124));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x126 = INT32_MAX;
	static int32_t x128 = INT32_MIN;
	volatile int32_t t28 = 234635141;

    t28 = (x125<=((x126%x127)%x128));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x130 = UINT64_MAX;
	int16_t x131 = INT16_MAX;
	volatile int64_t x132 = 1287642969473956LL;
	volatile int32_t t29 = -85081793;

    t29 = (x129<=((x130%x131)%x132));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x134 = INT8_MIN;
	int8_t x136 = INT8_MIN;
	int32_t t30 = -9879;

    t30 = (x133<=((x134%x135)%x136));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x137 = 15469697952LL;
	int32_t x138 = INT32_MIN;
	uint32_t x139 = UINT32_MAX;
	int32_t t31 = -2;

    t31 = (x137<=((x138%x139)%x140));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x144 = INT8_MIN;
	int32_t t32 = 637307;

    t32 = (x141<=((x142%x143)%x144));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x145 = UINT16_MAX;
	int64_t x146 = INT64_MIN;
	volatile uint64_t x147 = 2084LLU;
	static uint32_t x148 = UINT32_MAX;
	volatile int32_t t33 = 95073;

    t33 = (x145<=((x146%x147)%x148));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint32_t x150 = 2192972U;
	uint8_t x152 = 18U;

    t34 = (x149<=((x150%x151)%x152));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int64_t x153 = INT64_MIN;
	uint64_t x154 = 83733150294253928LLU;
	uint8_t x155 = 1U;
	static int16_t x156 = INT16_MIN;
	int32_t t35 = 4;

    t35 = (x153<=((x154%x155)%x156));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x157 = INT64_MIN;
	int64_t x159 = INT64_MIN;
	int32_t t36 = 1018;

    t36 = (x157<=((x158%x159)%x160));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x161 = -1;
	uint64_t x162 = 3907833682459231107LLU;
	int16_t x164 = 1175;
	int32_t t37 = 214;

    t37 = (x161<=((x162%x163)%x164));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x165 = 2803209;
	volatile uint64_t x166 = 1501784LLU;
	static uint64_t x167 = UINT64_MAX;
	volatile int8_t x168 = 16;

    t38 = (x165<=((x166%x167)%x168));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint64_t x170 = 4LLU;
	int64_t x171 = INT64_MIN;
	static int64_t x172 = INT64_MAX;
	int32_t t39 = -38724291;

    t39 = (x169<=((x170%x171)%x172));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x173 = INT64_MAX;
	int64_t x174 = INT64_MIN;
	uint8_t x175 = 115U;
	int8_t x176 = -2;
	volatile int32_t t40 = 7;

    t40 = (x173<=((x174%x175)%x176));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x185 = 1;
	volatile int16_t x186 = -1;
	uint32_t x187 = 299143U;
	volatile int32_t t41 = -91;

    t41 = (x185<=((x186%x187)%x188));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x189 = -1;
	int16_t x190 = INT16_MAX;
	int16_t x191 = INT16_MIN;
	static int64_t x192 = -20131326180562892LL;
	static volatile int32_t t42 = 0;

    t42 = (x189<=((x190%x191)%x192));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x194 = -1;
	int32_t t43 = -288;

    t43 = (x193<=((x194%x195)%x196));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x197 = INT16_MIN;
	static uint32_t x198 = 2910U;
	static int16_t x199 = INT16_MIN;
	volatile uint8_t x200 = UINT8_MAX;
	int32_t t44 = -109848;

    t44 = (x197<=((x198%x199)%x200));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x203 = 308629659U;
	uint32_t x204 = UINT32_MAX;

    t45 = (x201<=((x202%x203)%x204));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x205 = INT16_MIN;
	int32_t x206 = INT32_MAX;
	volatile uint16_t x207 = 17U;
	int32_t x208 = INT32_MIN;

    t46 = (x205<=((x206%x207)%x208));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint64_t x209 = UINT64_MAX;
	static uint16_t x210 = 7294U;
	int8_t x211 = 1;
	static int64_t x212 = INT64_MIN;

    t47 = (x209<=((x210%x211)%x212));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x213 = INT64_MIN;
	uint8_t x214 = UINT8_MAX;
	static int16_t x215 = 6204;
	int32_t t48 = 396;

    t48 = (x213<=((x214%x215)%x216));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x217 = INT8_MIN;
	int16_t x219 = INT16_MIN;
	static volatile int8_t x220 = INT8_MAX;

    t49 = (x217<=((x218%x219)%x220));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int64_t x221 = INT64_MAX;
	int8_t x222 = INT8_MAX;
	int32_t x223 = INT32_MIN;
	volatile int32_t t50 = -193;

    t50 = (x221<=((x222%x223)%x224));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x226 = 1738U;
	volatile uint16_t x227 = 8575U;
	int8_t x228 = INT8_MIN;

    t51 = (x225<=((x226%x227)%x228));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int32_t x235 = -1;
	int64_t x236 = INT64_MIN;
	static volatile int32_t t52 = 75871;

    t52 = (x233<=((x234%x235)%x236));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x237 = 3138455;
	int8_t x238 = INT8_MIN;
	int16_t x239 = INT16_MAX;
	int16_t x240 = INT16_MAX;
	static int32_t t53 = 106080548;

    t53 = (x237<=((x238%x239)%x240));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile uint16_t x241 = 48U;
	int64_t x244 = -659781LL;
	static volatile int32_t t54 = 20;

    t54 = (x241<=((x242%x243)%x244));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x246 = 12528U;
	int64_t x247 = -777880379LL;
	int32_t x248 = INT32_MIN;
	volatile int32_t t55 = 43;

    t55 = (x245<=((x246%x247)%x248));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x250 = -1;
	volatile int32_t t56 = 1376792;

    t56 = (x249<=((x250%x251)%x252));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x254 = 20U;
	int64_t x256 = INT64_MIN;
	volatile int32_t t57 = 1462266;

    t57 = (x253<=((x254%x255)%x256));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x257 = INT16_MAX;
	int16_t x258 = INT16_MIN;
	static int16_t x259 = -1;
	int32_t x260 = INT32_MIN;
	volatile int32_t t58 = -8564624;

    t58 = (x257<=((x258%x259)%x260));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x261 = -46LL;
	int32_t x262 = INT32_MIN;
	uint32_t x264 = 2133495U;
	static int32_t t59 = 126722;

    t59 = (x261<=((x262%x263)%x264));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x265 = UINT8_MAX;
	int64_t x266 = -1LL;
	static int64_t x267 = -48192669343861LL;
	int64_t x268 = -6375641113422LL;
	volatile int32_t t60 = -46611;

    t60 = (x265<=((x266%x267)%x268));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x269 = -1;
	int16_t x271 = -1195;
	uint32_t x272 = UINT32_MAX;
	int32_t t61 = -55;

    t61 = (x269<=((x270%x271)%x272));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int32_t x274 = -25171422;
	uint32_t x275 = 159U;
	static volatile int32_t t62 = -1;

    t62 = (x273<=((x274%x275)%x276));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x281 = 7;
	int32_t x282 = -438;
	static int16_t x283 = -1;
	volatile int16_t x284 = INT16_MIN;
	int32_t t63 = 176816;

    t63 = (x281<=((x282%x283)%x284));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x286 = UINT8_MAX;
	int8_t x287 = -1;
	int8_t x288 = 14;

    t64 = (x285<=((x286%x287)%x288));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x289 = INT32_MIN;
	uint8_t x290 = 62U;
	volatile uint8_t x291 = 114U;
	static volatile int16_t x292 = -1;
	volatile int32_t t65 = -7113427;

    t65 = (x289<=((x290%x291)%x292));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x293 = 744236LL;
	int16_t x295 = -1;
	int64_t x296 = -1LL;
	volatile int32_t t66 = 5841;

    t66 = (x293<=((x294%x295)%x296));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x297 = -1;
	volatile int64_t x298 = -1LL;
	volatile int64_t x299 = -1LL;
	int32_t t67 = -27671907;

    t67 = (x297<=((x298%x299)%x300));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x301 = INT16_MAX;
	int8_t x302 = INT8_MIN;
	static int32_t x303 = INT32_MIN;
	static int64_t x304 = INT64_MIN;
	volatile int32_t t68 = 12853;

    t68 = (x301<=((x302%x303)%x304));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int16_t x306 = INT16_MIN;
	int32_t x307 = INT32_MIN;
	int64_t x308 = -1LL;
	volatile int32_t t69 = 27670944;

    t69 = (x305<=((x306%x307)%x308));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x309 = -1;
	static volatile int16_t x310 = -2;
	volatile uint32_t x311 = UINT32_MAX;
	uint64_t x312 = UINT64_MAX;
	static volatile int32_t t70 = 1392202;

    t70 = (x309<=((x310%x311)%x312));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static int16_t x313 = INT16_MIN;
	uint64_t x314 = 186394LLU;
	int32_t x315 = -1;

    t71 = (x313<=((x314%x315)%x316));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x317 = 91635043456LLU;
	volatile int64_t x318 = 14546LL;
	int64_t x319 = INT64_MIN;
	uint32_t x320 = 7U;
	int32_t t72 = -3;

    t72 = (x317<=((x318%x319)%x320));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x321 = INT32_MAX;
	uint16_t x323 = 9U;
	int16_t x324 = INT16_MIN;
	int32_t t73 = 378611532;

    t73 = (x321<=((x322%x323)%x324));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x325 = -1;
	static volatile int8_t x326 = -1;
	int8_t x327 = -15;

    t74 = (x325<=((x326%x327)%x328));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint64_t x331 = 107298066971948658LLU;
	int16_t x332 = INT16_MIN;
	int32_t t75 = -1;

    t75 = (x329<=((x330%x331)%x332));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x333 = -29;
	int64_t x334 = INT64_MIN;
	int64_t x335 = -1LL;
	int8_t x336 = -1;
	volatile int32_t t76 = 239435;

    t76 = (x333<=((x334%x335)%x336));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static int64_t x337 = INT64_MIN;
	int64_t x338 = 397688395LL;
	int16_t x339 = INT16_MAX;
	static int64_t x340 = 1990574816379338351LL;
	int32_t t77 = -47938;

    t77 = (x337<=((x338%x339)%x340));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x341 = INT32_MIN;
	static uint16_t x342 = 26U;
	static int16_t x343 = INT16_MIN;
	int16_t x344 = INT16_MAX;
	volatile int32_t t78 = 60;

    t78 = (x341<=((x342%x343)%x344));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x345 = INT16_MIN;
	static int8_t x346 = INT8_MIN;
	int16_t x347 = 209;
	int64_t x348 = -1LL;
	int32_t t79 = 1607;

    t79 = (x345<=((x346%x347)%x348));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x349 = -1;
	int64_t x350 = -1895665019620LL;
	int16_t x352 = INT16_MAX;
	static volatile int32_t t80 = -42780875;

    t80 = (x349<=((x350%x351)%x352));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x354 = 54;
	uint16_t x355 = 419U;
	uint16_t x356 = 3202U;
	int32_t t81 = 743563;

    t81 = (x353<=((x354%x355)%x356));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x358 = 253U;
	int8_t x359 = INT8_MIN;
	int32_t t82 = 574309;

    t82 = (x357<=((x358%x359)%x360));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x362 = INT16_MIN;
	int32_t x364 = INT32_MIN;
	volatile int32_t t83 = 236802251;

    t83 = (x361<=((x362%x363)%x364));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x367 = UINT16_MAX;
	int64_t x368 = INT64_MAX;
	volatile int32_t t84 = 18175;

    t84 = (x365<=((x366%x367)%x368));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x369 = INT8_MAX;
	uint64_t x370 = 38038163843LLU;
	int32_t x371 = INT32_MAX;
	static int16_t x372 = INT16_MAX;
	static volatile int32_t t85 = -593;

    t85 = (x369<=((x370%x371)%x372));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x373 = INT16_MAX;
	int8_t x374 = INT8_MIN;
	volatile int64_t x375 = INT64_MIN;
	int64_t x376 = -1LL;
	static volatile int32_t t86 = 14;

    t86 = (x373<=((x374%x375)%x376));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x377 = 0;
	uint64_t x378 = 472088LLU;
	uint16_t x379 = UINT16_MAX;
	int64_t x380 = INT64_MAX;

    t87 = (x377<=((x378%x379)%x380));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x381 = -1;
	volatile int16_t x382 = -3732;
	int8_t x383 = INT8_MIN;
	volatile uint16_t x384 = UINT16_MAX;
	int32_t t88 = 217267;

    t88 = (x381<=((x382%x383)%x384));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x386 = UINT8_MAX;
	int8_t x387 = INT8_MAX;
	int32_t x388 = INT32_MIN;
	int32_t t89 = 0;

    t89 = (x385<=((x386%x387)%x388));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x389 = -1233531;
	int8_t x390 = INT8_MIN;
	int8_t x391 = 4;
	volatile int16_t x392 = -22;
	int32_t t90 = -3106;

    t90 = (x389<=((x390%x391)%x392));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint32_t x393 = 104U;
	uint32_t x394 = UINT32_MAX;
	int32_t t91 = -2;

    t91 = (x393<=((x394%x395)%x396));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint32_t x397 = UINT32_MAX;
	int16_t x398 = INT16_MIN;
	int8_t x399 = INT8_MIN;
	int16_t x400 = 6;
	volatile int32_t t92 = 1703;

    t92 = (x397<=((x398%x399)%x400));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x401 = INT64_MAX;
	int16_t x402 = INT16_MIN;
	volatile int16_t x403 = 1;
	int64_t x404 = INT64_MIN;
	static int32_t t93 = 4763;

    t93 = (x401<=((x402%x403)%x404));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int32_t x406 = INT32_MAX;
	int8_t x407 = INT8_MAX;
	volatile uint16_t x408 = 11U;

    t94 = (x405<=((x406%x407)%x408));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x409 = INT8_MIN;
	int32_t x410 = 233;

    t95 = (x409<=((x410%x411)%x412));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x413 = 488765U;
	uint8_t x414 = UINT8_MAX;
	uint16_t x415 = 611U;
	int32_t t96 = 828749;

    t96 = (x413<=((x414%x415)%x416));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x417 = -1;
	static volatile int64_t x419 = 18600232673537641LL;
	int32_t t97 = 2380;

    t97 = (x417<=((x418%x419)%x420));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x421 = 6;
	int32_t x423 = INT32_MIN;
	static uint32_t x424 = UINT32_MAX;
	int32_t t98 = 1720;

    t98 = (x421<=((x422%x423)%x424));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x425 = INT8_MIN;
	static int16_t x427 = 29;
	static uint64_t x428 = 34080499240110663LLU;
	static volatile int32_t t99 = -1130;

    t99 = (x425<=((x426%x427)%x428));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x429 = INT64_MIN;
	static int64_t x431 = INT64_MIN;
	int8_t x432 = -1;
	volatile int32_t t100 = 259240529;

    t100 = (x429<=((x430%x431)%x432));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x433 = -27;
	uint32_t x434 = UINT32_MAX;
	uint64_t x435 = UINT64_MAX;
	uint16_t x436 = UINT16_MAX;
	int32_t t101 = -951184;

    t101 = (x433<=((x434%x435)%x436));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x437 = 10U;
	volatile uint8_t x439 = UINT8_MAX;
	static int8_t x440 = -1;
	volatile int32_t t102 = -1328550;

    t102 = (x437<=((x438%x439)%x440));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x442 = UINT16_MAX;
	volatile uint8_t x444 = UINT8_MAX;
	static int32_t t103 = -372;

    t103 = (x441<=((x442%x443)%x444));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x445 = -40;
	uint64_t x446 = 3929LLU;
	volatile uint8_t x447 = 1U;
	int16_t x448 = INT16_MIN;

    t104 = (x445<=((x446%x447)%x448));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int16_t x449 = 886;
	volatile int32_t x450 = 0;
	uint32_t x451 = UINT32_MAX;
	uint64_t x452 = UINT64_MAX;
	volatile int32_t t105 = -119713489;

    t105 = (x449<=((x450%x451)%x452));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint16_t x453 = 6U;
	uint16_t x454 = 428U;
	volatile int32_t x456 = -37801;

    t106 = (x453<=((x454%x455)%x456));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static int64_t x458 = INT64_MAX;
	int64_t x459 = -1LL;
	int16_t x460 = -348;

    t107 = (x457<=((x458%x459)%x460));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x461 = INT32_MIN;
	volatile int8_t x462 = -19;
	volatile uint64_t x463 = 3120056480715LLU;
	uint8_t x464 = 2U;
	static int32_t t108 = 335;

    t108 = (x461<=((x462%x463)%x464));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x465 = -1;
	volatile int8_t x468 = INT8_MIN;
	int32_t t109 = 5;

    t109 = (x465<=((x466%x467)%x468));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint32_t x469 = UINT32_MAX;
	int16_t x470 = 15;
	int16_t x471 = INT16_MAX;
	uint64_t x472 = UINT64_MAX;

    t110 = (x469<=((x470%x471)%x472));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x473 = UINT32_MAX;
	static volatile uint8_t x474 = UINT8_MAX;
	volatile int32_t x476 = 689;
	static volatile int32_t t111 = 1388;

    t111 = (x473<=((x474%x475)%x476));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x477 = 2U;
	static int8_t x478 = 6;
	static uint64_t x479 = UINT64_MAX;
	volatile int32_t t112 = 1493;

    t112 = (x477<=((x478%x479)%x480));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint8_t x481 = 55U;
	int32_t x482 = -7954;
	static int8_t x483 = INT8_MIN;
	volatile int16_t x484 = INT16_MIN;
	volatile int32_t t113 = -26658;

    t113 = (x481<=((x482%x483)%x484));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x485 = UINT32_MAX;
	volatile int64_t x486 = -1LL;
	int8_t x487 = INT8_MIN;
	uint32_t x488 = 869358420U;
	volatile int32_t t114 = 7941595;

    t114 = (x485<=((x486%x487)%x488));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x489 = -53;
	static int16_t x490 = 490;
	int32_t x491 = -1;
	int16_t x492 = INT16_MIN;
	volatile int32_t t115 = 14556145;

    t115 = (x489<=((x490%x491)%x492));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x493 = INT8_MIN;
	uint32_t x494 = 99268U;
	int32_t x495 = -1;
	int8_t x496 = INT8_MIN;
	int32_t t116 = -80902;

    t116 = (x493<=((x494%x495)%x496));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x497 = 5;
	uint8_t x499 = UINT8_MAX;
	volatile uint16_t x500 = 25U;
	int32_t t117 = -645715037;

    t117 = (x497<=((x498%x499)%x500));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x501 = 4082;
	uint64_t x502 = UINT64_MAX;
	static int16_t x503 = INT16_MIN;
	int16_t x504 = 8790;

    t118 = (x501<=((x502%x503)%x504));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x505 = INT16_MIN;
	int8_t x506 = INT8_MIN;
	static uint16_t x507 = 18900U;
	static int32_t t119 = -55094;

    t119 = (x505<=((x506%x507)%x508));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x509 = 673U;
	uint32_t x510 = 198937922U;
	volatile int16_t x511 = 35;
	int32_t x512 = -52;
	int32_t t120 = 65444;

    t120 = (x509<=((x510%x511)%x512));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x513 = 6138U;
	int32_t x514 = -42600798;
	uint8_t x515 = 2U;
	int32_t t121 = -1434166;

    t121 = (x513<=((x514%x515)%x516));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x517 = -1134;
	int64_t x518 = INT64_MIN;
	volatile uint32_t x519 = 96651U;
	static int8_t x520 = -1;

    t122 = (x517<=((x518%x519)%x520));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x521 = -26;
	static int16_t x522 = -725;
	volatile int64_t x524 = INT64_MAX;
	volatile int32_t t123 = 14510;

    t123 = (x521<=((x522%x523)%x524));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x525 = 1;
	static uint64_t x526 = 8369989367286LLU;
	int64_t x528 = INT64_MIN;

    t124 = (x525<=((x526%x527)%x528));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x529 = 13U;
	int8_t x530 = INT8_MAX;
	int16_t x531 = -25;
	int64_t x532 = -25LL;

    t125 = (x529<=((x530%x531)%x532));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x533 = 1693;
	uint64_t x534 = 37270429605LLU;
	uint64_t x536 = 212890005659516LLU;
	volatile int32_t t126 = 628782;

    t126 = (x533<=((x534%x535)%x536));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x545 = 15LL;
	volatile uint8_t x546 = 119U;
	int64_t x547 = INT64_MIN;
	volatile int64_t x548 = -1LL;
	static volatile int32_t t127 = 1;

    t127 = (x545<=((x546%x547)%x548));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x549 = -1LL;
	static volatile int32_t x550 = -1;
	uint64_t x551 = UINT64_MAX;
	uint64_t x552 = 12773717LLU;
	int32_t t128 = -680780223;

    t128 = (x549<=((x550%x551)%x552));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint16_t x553 = UINT16_MAX;
	uint64_t x555 = UINT64_MAX;
	static volatile int32_t t129 = 141664283;

    t129 = (x553<=((x554%x555)%x556));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x557 = INT64_MIN;
	int64_t x558 = INT64_MAX;
	uint8_t x559 = UINT8_MAX;
	uint16_t x560 = UINT16_MAX;
	int32_t t130 = -492;

    t130 = (x557<=((x558%x559)%x560));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x561 = INT32_MIN;
	int32_t x562 = -33;
	int32_t x563 = INT32_MIN;
	static int64_t x564 = 69LL;
	int32_t t131 = -29;

    t131 = (x561<=((x562%x563)%x564));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x565 = UINT8_MAX;
	int32_t x567 = 2764;
	int8_t x568 = -1;
	volatile int32_t t132 = 801679730;

    t132 = (x565<=((x566%x567)%x568));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x571 = INT16_MIN;
	uint8_t x572 = UINT8_MAX;

    t133 = (x569<=((x570%x571)%x572));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int16_t x574 = -51;
	volatile int32_t t134 = 0;

    t134 = (x573<=((x574%x575)%x576));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x577 = 2U;
	int8_t x578 = 27;
	int32_t x579 = INT32_MIN;
	static volatile int16_t x580 = INT16_MIN;
	int32_t t135 = 235268;

    t135 = (x577<=((x578%x579)%x580));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint8_t x589 = UINT8_MAX;
	uint16_t x591 = 5U;
	uint64_t x592 = UINT64_MAX;
	static volatile int32_t t136 = -262;

    t136 = (x589<=((x590%x591)%x592));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x593 = 2U;
	int32_t x594 = INT32_MIN;
	static int32_t x595 = -474231;
	volatile int32_t t137 = 949129;

    t137 = (x593<=((x594%x595)%x596));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x597 = INT64_MIN;
	int16_t x599 = -17;
	int16_t x600 = 3779;
	static volatile int32_t t138 = 120040;

    t138 = (x597<=((x598%x599)%x600));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint16_t x601 = 18686U;
	volatile int8_t x602 = 21;
	volatile int16_t x603 = INT16_MIN;
	int64_t x604 = -2080819034600042395LL;
	int32_t t139 = 827404159;

    t139 = (x601<=((x602%x603)%x604));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int32_t x605 = -1;
	static int8_t x606 = INT8_MIN;
	int8_t x608 = -1;
	volatile int32_t t140 = -6078565;

    t140 = (x605<=((x606%x607)%x608));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x609 = INT8_MIN;
	uint8_t x611 = 1U;
	int16_t x612 = INT16_MAX;
	volatile int32_t t141 = 480912742;

    t141 = (x609<=((x610%x611)%x612));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x613 = -1786;
	volatile int8_t x614 = INT8_MIN;
	static uint64_t x615 = 255LLU;
	volatile int32_t t142 = 420258;

    t142 = (x613<=((x614%x615)%x616));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x617 = INT8_MAX;
	volatile int8_t x619 = INT8_MIN;
	static int64_t x620 = INT64_MIN;
	int32_t t143 = 0;

    t143 = (x617<=((x618%x619)%x620));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint16_t x621 = 4U;
	uint16_t x624 = UINT16_MAX;
	volatile int32_t t144 = -23;

    t144 = (x621<=((x622%x623)%x624));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x626 = INT64_MIN;
	volatile int32_t x627 = 7264341;
	static volatile int32_t t145 = -212937701;

    t145 = (x625<=((x626%x627)%x628));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x629 = INT8_MIN;
	int16_t x631 = 7831;
	int32_t x632 = -1;
	int32_t t146 = -1;

    t146 = (x629<=((x630%x631)%x632));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x633 = INT8_MIN;
	int8_t x634 = 1;
	uint32_t x635 = 3546736U;
	int32_t t147 = -3;

    t147 = (x633<=((x634%x635)%x636));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint32_t x638 = UINT32_MAX;
	static int32_t t148 = 539818;

    t148 = (x637<=((x638%x639)%x640));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x642 = -1;
	volatile uint16_t x644 = 25065U;
	int32_t t149 = 12120377;

    t149 = (x641<=((x642%x643)%x644));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int16_t x645 = INT16_MIN;
	volatile uint64_t x646 = 13LLU;
	int8_t x647 = -1;
	int8_t x648 = INT8_MAX;
	volatile int32_t t150 = 3;

    t150 = (x645<=((x646%x647)%x648));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x649 = UINT16_MAX;
	static volatile int32_t x650 = INT32_MAX;
	int32_t x652 = -1;
	int32_t t151 = 64128;

    t151 = (x649<=((x650%x651)%x652));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x654 = 1095U;
	int8_t x655 = -1;
	static uint64_t x656 = UINT64_MAX;
	static int32_t t152 = -3397840;

    t152 = (x653<=((x654%x655)%x656));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x657 = -3;
	int32_t x658 = INT32_MAX;
	uint8_t x659 = 112U;

    t153 = (x657<=((x658%x659)%x660));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x661 = INT64_MAX;
	int16_t x662 = -1;
	int8_t x663 = INT8_MAX;
	int32_t x664 = 1;
	int32_t t154 = -259890930;

    t154 = (x661<=((x662%x663)%x664));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int16_t x665 = -1;
	uint16_t x666 = 7U;
	int64_t x667 = INT64_MIN;
	int64_t x668 = -1LL;
	volatile int32_t t155 = -7197;

    t155 = (x665<=((x666%x667)%x668));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x669 = 683310377U;
	static volatile uint16_t x670 = 11U;
	int16_t x671 = INT16_MIN;
	uint16_t x672 = 30705U;
	int32_t t156 = 25;

    t156 = (x669<=((x670%x671)%x672));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x673 = INT8_MIN;
	static int64_t x674 = -1LL;
	static int16_t x675 = -1;
	int16_t x676 = -1;
	int32_t t157 = 73;

    t157 = (x673<=((x674%x675)%x676));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x677 = -884;
	volatile int8_t x678 = INT8_MAX;
	int16_t x679 = 1;
	int8_t x680 = 1;

    t158 = (x677<=((x678%x679)%x680));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x681 = INT64_MIN;
	uint16_t x682 = 21U;
	int64_t x683 = INT64_MIN;
	int32_t x684 = INT32_MIN;
	volatile int32_t t159 = 19168;

    t159 = (x681<=((x682%x683)%x684));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint8_t x685 = UINT8_MAX;
	int8_t x687 = INT8_MAX;
	static volatile int32_t t160 = 25118;

    t160 = (x685<=((x686%x687)%x688));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int64_t x693 = -722140559384699722LL;
	uint64_t x694 = 851LLU;
	int64_t x695 = INT64_MIN;
	uint64_t x696 = UINT64_MAX;
	volatile int32_t t161 = 337351;

    t161 = (x693<=((x694%x695)%x696));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x701 = -1;
	int64_t x702 = -186468607LL;
	static uint32_t x703 = UINT32_MAX;
	int32_t x704 = -210993;
	int32_t t162 = -439;

    t162 = (x701<=((x702%x703)%x704));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x705 = INT8_MIN;
	static int64_t x706 = INT64_MAX;

    t163 = (x705<=((x706%x707)%x708));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x709 = 5U;
	int64_t x710 = INT64_MAX;
	int32_t x711 = 8;
	static int8_t x712 = -1;
	volatile int32_t t164 = 506892140;

    t164 = (x709<=((x710%x711)%x712));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x713 = UINT8_MAX;
	volatile int8_t x714 = INT8_MIN;
	volatile uint8_t x715 = UINT8_MAX;
	static uint32_t x716 = UINT32_MAX;

    t165 = (x713<=((x714%x715)%x716));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x718 = INT64_MIN;
	static int16_t x719 = INT16_MAX;
	static int32_t x720 = 154;
	static volatile int32_t t166 = -277054;

    t166 = (x717<=((x718%x719)%x720));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x721 = INT16_MIN;
	static int32_t x722 = -1;
	uint8_t x723 = 11U;
	volatile int16_t x724 = 95;
	volatile int32_t t167 = -123113807;

    t167 = (x721<=((x722%x723)%x724));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x725 = UINT32_MAX;
	int16_t x726 = INT16_MIN;
	int64_t x727 = INT64_MIN;
	int64_t x728 = -596100503LL;
	volatile int32_t t168 = -18;

    t168 = (x725<=((x726%x727)%x728));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int8_t x729 = INT8_MIN;
	int32_t x730 = INT32_MAX;
	static uint8_t x731 = 24U;
	int64_t x732 = -1LL;

    t169 = (x729<=((x730%x731)%x732));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x733 = -1;
	uint32_t x734 = 239123248U;
	int8_t x735 = -1;
	uint16_t x736 = 1U;
	int32_t t170 = -3227374;

    t170 = (x733<=((x734%x735)%x736));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x737 = INT64_MIN;
	int8_t x738 = -1;
	uint64_t x739 = UINT64_MAX;
	int32_t x740 = -1;

    t171 = (x737<=((x738%x739)%x740));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x742 = -616872072LL;
	uint8_t x743 = 15U;
	int32_t x744 = 13749;
	volatile int32_t t172 = -8039329;

    t172 = (x741<=((x742%x743)%x744));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int16_t x747 = INT16_MIN;
	int16_t x748 = INT16_MIN;
	static volatile int32_t t173 = -3;

    t173 = (x745<=((x746%x747)%x748));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static int64_t x749 = INT64_MAX;
	uint16_t x750 = 8202U;
	int32_t x752 = INT32_MIN;
	volatile int32_t t174 = -344;

    t174 = (x749<=((x750%x751)%x752));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x754 = INT8_MIN;
	uint16_t x756 = 480U;
	static int32_t t175 = -31679134;

    t175 = (x753<=((x754%x755)%x756));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x757 = INT32_MIN;
	uint8_t x758 = 7U;
	int16_t x759 = -1;
	int8_t x760 = 1;
	volatile int32_t t176 = 22;

    t176 = (x757<=((x758%x759)%x760));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x761 = INT16_MIN;
	volatile uint8_t x762 = UINT8_MAX;
	static volatile int16_t x763 = -207;
	int32_t x764 = INT32_MIN;
	static volatile int32_t t177 = 712;

    t177 = (x761<=((x762%x763)%x764));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x765 = 31LL;
	int16_t x766 = -552;
	uint32_t x767 = UINT32_MAX;
	static int32_t x768 = -122;
	volatile int32_t t178 = -654900970;

    t178 = (x765<=((x766%x767)%x768));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x769 = INT32_MAX;
	int16_t x770 = INT16_MIN;
	static uint64_t x771 = 44160053514LLU;
	volatile int32_t t179 = 179557465;

    t179 = (x769<=((x770%x771)%x772));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int16_t x778 = -242;
	uint64_t x779 = 12604348871LLU;
	int32_t t180 = 14;

    t180 = (x777<=((x778%x779)%x780));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x781 = UINT8_MAX;
	int32_t x782 = INT32_MAX;
	volatile int8_t x784 = INT8_MIN;
	int32_t t181 = -124014508;

    t181 = (x781<=((x782%x783)%x784));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x785 = 1;
	uint16_t x786 = UINT16_MAX;
	int32_t x787 = INT32_MIN;
	int64_t x788 = -12507LL;
	int32_t t182 = 20299256;

    t182 = (x785<=((x786%x787)%x788));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x793 = INT32_MIN;
	int16_t x795 = 2164;
	int8_t x796 = -1;
	volatile int32_t t183 = -45;

    t183 = (x793<=((x794%x795)%x796));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x798 = INT16_MAX;
	uint32_t x800 = 1435573681U;

    t184 = (x797<=((x798%x799)%x800));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x801 = 16;
	int64_t x802 = INT64_MIN;
	int64_t x803 = -659335819612LL;

    t185 = (x801<=((x802%x803)%x804));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x805 = 439221LLU;
	uint16_t x806 = UINT16_MAX;
	int16_t x807 = INT16_MIN;
	static int64_t x808 = INT64_MIN;
	volatile int32_t t186 = -4455;

    t186 = (x805<=((x806%x807)%x808));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile uint32_t x809 = 46328U;
	uint64_t x810 = 23896734015460LLU;
	int32_t x811 = -4509;
	static volatile int32_t x812 = -1;
	static volatile int32_t t187 = 92977383;

    t187 = (x809<=((x810%x811)%x812));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x813 = 2913122;
	uint64_t x814 = UINT64_MAX;
	uint8_t x816 = 12U;
	volatile int32_t t188 = -1253;

    t188 = (x813<=((x814%x815)%x816));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x817 = INT16_MAX;
	static volatile uint16_t x818 = 447U;
	uint8_t x819 = 20U;

    t189 = (x817<=((x818%x819)%x820));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x822 = 187885418776100LLU;
	int16_t x823 = INT16_MIN;
	volatile int32_t t190 = 0;

    t190 = (x821<=((x822%x823)%x824));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x825 = 3U;
	static uint32_t x827 = 1349U;
	int64_t x828 = INT64_MIN;
	volatile int32_t t191 = 15;

    t191 = (x825<=((x826%x827)%x828));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x829 = -1;
	int16_t x830 = INT16_MIN;
	uint64_t x831 = 19LLU;
	int64_t x832 = 11211LL;
	static int32_t t192 = 16162079;

    t192 = (x829<=((x830%x831)%x832));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x833 = 1774362;
	volatile int32_t x834 = INT32_MAX;
	uint64_t x836 = 21LLU;
	int32_t t193 = 134037378;

    t193 = (x833<=((x834%x835)%x836));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x837 = 6U;
	int64_t x838 = -1LL;
	int8_t x840 = INT8_MIN;
	static volatile int32_t t194 = 588;

    t194 = (x837<=((x838%x839)%x840));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint16_t x841 = UINT16_MAX;
	volatile int64_t x843 = INT64_MIN;
	static int64_t x844 = INT64_MAX;
	int32_t t195 = 959698272;

    t195 = (x841<=((x842%x843)%x844));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x845 = INT32_MIN;
	int16_t x846 = 2488;
	int8_t x847 = -5;
	int16_t x848 = INT16_MAX;

    t196 = (x845<=((x846%x847)%x848));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x849 = 3103U;
	int16_t x850 = INT16_MIN;
	static volatile int16_t x852 = INT16_MIN;

    t197 = (x849<=((x850%x851)%x852));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x853 = INT64_MAX;
	int64_t x854 = -5239178194730LL;

    t198 = (x853<=((x854%x855)%x856));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x857 = INT64_MIN;
	uint16_t x858 = 3506U;
	static int16_t x859 = -1;
	int32_t x860 = -97;

    t199 = (x857<=((x858%x859)%x860));

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

