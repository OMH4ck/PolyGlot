
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

int8_t x5 = INT8_MIN;
int8_t x10 = 0;
static volatile int16_t x24 = INT16_MIN;
int8_t x26 = -1;
static volatile int32_t t5 = -387294;
volatile int32_t x34 = 4035;
volatile int64_t x40 = 89414LL;
volatile uint32_t x50 = 22058005U;
int32_t x51 = 3;
volatile int32_t t10 = 7;
int32_t t11 = 0;
volatile uint64_t x60 = 7773LLU;
volatile int8_t x63 = -1;
static int32_t x67 = -3437;
uint16_t x68 = UINT16_MAX;
volatile int32_t t14 = -1890585;
volatile uint8_t x73 = 0U;
uint16_t x74 = 8758U;
int32_t x76 = -198;
int32_t t19 = 63244007;
uint8_t x101 = 28U;
volatile int32_t t23 = -39683;
static int32_t t24 = 5;
int8_t x119 = -1;
int16_t x131 = INT16_MAX;
uint64_t x135 = 328657282807900LLU;
volatile int32_t t29 = 3161;
int16_t x148 = INT16_MAX;
uint64_t x151 = 5684694757001345LLU;
volatile int32_t t31 = -59031;
int16_t x160 = INT16_MAX;
int8_t x165 = -3;
volatile int8_t x169 = -2;
volatile int32_t t36 = -79867487;
volatile int8_t x188 = INT8_MAX;
uint16_t x203 = 7000U;
static uint8_t x205 = 63U;
static volatile uint8_t x207 = UINT8_MAX;
static int32_t x211 = -494455686;
volatile int32_t t44 = -203012613;
uint32_t x224 = 1509826059U;
int16_t x233 = 0;
volatile int8_t x240 = INT8_MAX;
int32_t t48 = -11663887;
volatile int64_t x244 = -127870310840309494LL;
int32_t t49 = 308825294;
int64_t x248 = INT64_MIN;
static volatile int32_t t51 = -3537585;
uint8_t x254 = 35U;
int32_t x265 = INT32_MAX;
int32_t x273 = -42388;
int16_t x275 = INT16_MIN;
int32_t x281 = -72093;
int32_t x284 = INT32_MAX;
volatile int32_t t57 = -406;
static int8_t x286 = -1;
volatile int16_t x288 = INT16_MIN;
int8_t x289 = INT8_MIN;
int16_t x290 = INT16_MAX;
uint8_t x292 = 0U;
static int8_t x301 = -1;
uint32_t x305 = 23211953U;
volatile uint8_t x314 = 1U;
uint16_t x315 = 14333U;
int16_t x326 = -1;
volatile int32_t t67 = 23;
static int64_t x329 = INT64_MAX;
int8_t x330 = 38;
int32_t t68 = 0;
int8_t x339 = -1;
uint32_t x343 = 16U;
int32_t t70 = 13553209;
int8_t x353 = 0;
int16_t x355 = INT16_MAX;
static int16_t x356 = INT16_MIN;
uint8_t x366 = 43U;
uint16_t x367 = 12290U;
volatile int8_t x371 = -28;
static int8_t x372 = -1;
static int32_t t79 = -1;
static uint16_t x386 = 2U;
static int8_t x390 = 19;
static uint64_t x397 = 1449LLU;
int16_t x398 = 835;
int32_t t83 = 5854525;
uint16_t x408 = UINT16_MAX;
int16_t x410 = -1;
static int8_t x412 = 0;
volatile int32_t t86 = 100;
int64_t x421 = 2369769881545LL;
uint8_t x422 = 85U;
int64_t x424 = 198325360991LL;
volatile int32_t t89 = 3613305;
volatile int32_t t91 = 0;
int8_t x433 = -1;
int32_t t92 = 76973749;
volatile int32_t x438 = INT32_MIN;
int8_t x447 = 1;
uint64_t x452 = 517933LLU;
int8_t x459 = 49;
int64_t x461 = INT64_MIN;
uint8_t x465 = 25U;
int32_t x469 = INT32_MIN;
volatile int64_t x474 = -901454278401109LL;
volatile int32_t t102 = 3;
uint32_t x485 = UINT32_MAX;
int64_t x486 = -1LL;
int32_t x488 = INT32_MIN;
int16_t x489 = 3;
int64_t x492 = INT64_MAX;
volatile int32_t t105 = 3;
uint32_t x497 = UINT32_MAX;
int32_t t108 = 1520;
volatile int32_t x510 = -67094088;
uint16_t x513 = UINT16_MAX;
volatile uint64_t x514 = UINT64_MAX;
int32_t t110 = -1;
int64_t x523 = -1LL;
uint32_t x529 = UINT32_MAX;
static int32_t x542 = 16578391;
uint32_t x544 = UINT32_MAX;
volatile int32_t t114 = -9661784;
int16_t x545 = INT16_MIN;
volatile int32_t x547 = INT32_MIN;
int32_t t115 = 674;
static volatile int8_t x554 = -1;
int32_t x557 = INT32_MIN;
int32_t t118 = -12816319;
int16_t x561 = -239;
int64_t x563 = -6966301440LL;
static volatile uint32_t x565 = 159U;
uint64_t x566 = 37542LLU;
int16_t x575 = -1;
uint32_t x601 = 3U;
int32_t x602 = -1421;
uint8_t x616 = UINT8_MAX;
int16_t x617 = -1;
static volatile int32_t t133 = -166178;
uint16_t x646 = 3867U;
static uint8_t x652 = 1U;
static int64_t x654 = 61821346233034LL;
volatile int16_t x656 = 8;
int32_t x664 = -1;
int16_t x665 = -1;
int32_t t141 = -1912518;
volatile int16_t x686 = 97;
uint32_t x704 = UINT32_MAX;
volatile int32_t t148 = 8359511;
int64_t x705 = -397619093LL;
static uint64_t x706 = 380402LLU;
int16_t x710 = 7;
volatile int64_t x713 = INT64_MIN;
uint8_t x722 = 0U;
uint16_t x733 = UINT16_MAX;
int64_t x734 = INT64_MAX;
volatile int8_t x735 = 40;
static uint64_t x736 = UINT64_MAX;
volatile int16_t x742 = 0;
int8_t x743 = INT8_MIN;
volatile int32_t t157 = 416;
int32_t x755 = 222793;
static uint64_t x762 = UINT64_MAX;
static uint32_t x766 = UINT32_MAX;
int32_t x767 = INT32_MIN;
uint8_t x779 = UINT8_MAX;
volatile int8_t x788 = -1;
uint16_t x794 = 28U;
int32_t t168 = -1159547;
uint16_t x801 = 595U;
uint32_t x804 = 312U;
int8_t x816 = 1;
int32_t t171 = 6797;
volatile uint16_t x826 = 1U;
volatile int32_t t173 = 10893;
volatile int32_t t174 = -3367998;
int16_t x841 = 127;
static volatile int32_t x843 = -112018;
static uint64_t x845 = 1959776704753688931LLU;
volatile int16_t x850 = 0;
volatile int16_t x866 = INT16_MAX;
static uint8_t x880 = 7U;
volatile int32_t t185 = 80045;
volatile int8_t x887 = INT8_MAX;
int32_t x888 = INT32_MAX;
static int32_t t186 = 25043;
int64_t x891 = INT64_MAX;
int16_t x901 = -1;
int64_t x922 = INT64_MIN;
volatile uint32_t x927 = UINT32_MAX;
int16_t x931 = -1;
int32_t t194 = -128143;
static uint32_t x941 = 62787U;
volatile int64_t x945 = INT64_MIN;
volatile int16_t x947 = INT16_MIN;
int32_t t196 = -140703;
int32_t x950 = -1;
static uint16_t x951 = 4U;
int32_t t197 = -2593169;
int16_t x959 = INT16_MIN;


void f0(void) {
    	uint16_t x1 = 0U;
	uint32_t x2 = UINT32_MAX;
	volatile uint16_t x3 = 9373U;
	volatile uint64_t x4 = 214476425402LLU;
	volatile int32_t t0 = 13;

    t0 = (x1<=((x2-x3)+x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x6 = 1084U;
	int16_t x7 = 656;
	int8_t x8 = INT8_MIN;
	int32_t t1 = 3079;

    t1 = (x5<=((x6-x7)+x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MIN;
	uint8_t x11 = 1U;
	uint32_t x12 = 4321U;
	static int32_t t2 = 3971302;

    t2 = (x9<=((x10-x11)+x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MIN;
	int16_t x14 = INT16_MAX;
	int8_t x15 = -1;
	int8_t x16 = -1;
	static int32_t t3 = 389;

    t3 = (x13<=((x14-x15)+x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x21 = -1;
	int64_t x22 = -1LL;
	int16_t x23 = -1;
	static volatile int32_t t4 = -9197;

    t4 = (x21<=((x22-x23)+x24));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x25 = 1;
	volatile int8_t x27 = 4;
	uint8_t x28 = 1U;

    t5 = (x25<=((x26-x27)+x28));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int8_t x29 = -1;
	int32_t x30 = 260400707;
	int8_t x31 = 24;
	static uint64_t x32 = UINT64_MAX;
	volatile int32_t t6 = -963610;

    t6 = (x29<=((x30-x31)+x32));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x33 = 2U;
	int16_t x35 = INT16_MIN;
	int16_t x36 = 14309;
	int32_t t7 = 11;

    t7 = (x33<=((x34-x35)+x36));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x37 = INT64_MIN;
	static volatile int8_t x38 = -1;
	static volatile int16_t x39 = INT16_MIN;
	int32_t t8 = 39252;

    t8 = (x37<=((x38-x39)+x40));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x45 = 22;
	static int32_t x46 = INT32_MIN;
	uint64_t x47 = UINT64_MAX;
	int8_t x48 = -1;
	volatile int32_t t9 = -13692145;

    t9 = (x45<=((x46-x47)+x48));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x49 = -1LL;
	static int32_t x52 = 35169283;

    t10 = (x49<=((x50-x51)+x52));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x53 = -1;
	uint32_t x54 = UINT32_MAX;
	static volatile int8_t x55 = -3;
	static uint64_t x56 = 88947258080943305LLU;

    t11 = (x53<=((x54-x55)+x56));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint8_t x57 = 5U;
	int8_t x58 = INT8_MIN;
	volatile uint16_t x59 = UINT16_MAX;
	int32_t t12 = -23;

    t12 = (x57<=((x58-x59)+x60));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint8_t x61 = 49U;
	static int64_t x62 = 218392604194342LL;
	uint32_t x64 = UINT32_MAX;
	volatile int32_t t13 = -72;

    t13 = (x61<=((x62-x63)+x64));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x65 = 839263779673LL;
	static int8_t x66 = 30;

    t14 = (x65<=((x66-x67)+x68));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x75 = 15427829707149LL;
	volatile int32_t t15 = 6935382;

    t15 = (x73<=((x74-x75)+x76));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x77 = INT64_MIN;
	int32_t x78 = INT32_MIN;
	int32_t x79 = INT32_MIN;
	static int64_t x80 = -1LL;
	int32_t t16 = -292290;

    t16 = (x77<=((x78-x79)+x80));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x81 = INT64_MIN;
	static int64_t x82 = -546285645389LL;
	volatile int32_t x83 = -17833708;
	int16_t x84 = INT16_MAX;
	int32_t t17 = -126224;

    t17 = (x81<=((x82-x83)+x84));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x85 = 6843702;
	uint32_t x86 = 2U;
	int16_t x87 = -1;
	volatile int32_t x88 = INT32_MIN;
	int32_t t18 = -9;

    t18 = (x85<=((x86-x87)+x88));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x89 = UINT32_MAX;
	static volatile int64_t x90 = 0LL;
	int16_t x91 = INT16_MIN;
	static volatile int16_t x92 = 7057;

    t19 = (x89<=((x90-x91)+x92));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x93 = INT8_MIN;
	static volatile uint64_t x94 = 16013844395LLU;
	int16_t x95 = -1;
	int16_t x96 = INT16_MIN;
	int32_t t20 = -30;

    t20 = (x93<=((x94-x95)+x96));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint32_t x97 = 0U;
	int64_t x98 = 693047289840327935LL;
	int8_t x99 = INT8_MIN;
	int16_t x100 = INT16_MIN;
	int32_t t21 = -8715;

    t21 = (x97<=((x98-x99)+x100));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint8_t x102 = 111U;
	volatile int16_t x103 = INT16_MIN;
	int32_t x104 = INT32_MIN;
	static volatile int32_t t22 = 77076;

    t22 = (x101<=((x102-x103)+x104));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x109 = -1;
	int64_t x110 = -5910LL;
	volatile uint32_t x111 = UINT32_MAX;
	int32_t x112 = 6778477;

    t23 = (x109<=((x110-x111)+x112));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint16_t x113 = 4893U;
	int8_t x114 = -1;
	int16_t x115 = -273;
	int32_t x116 = INT32_MIN;

    t24 = (x113<=((x114-x115)+x116));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x117 = INT32_MIN;
	volatile uint32_t x118 = 1668432888U;
	int16_t x120 = -7;
	int32_t t25 = -15605486;

    t25 = (x117<=((x118-x119)+x120));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x125 = 32433867U;
	static uint64_t x126 = 10866651043662366LLU;
	static volatile uint64_t x127 = 981LLU;
	static int32_t x128 = INT32_MAX;
	volatile int32_t t26 = 997923;

    t26 = (x125<=((x126-x127)+x128));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x129 = INT16_MIN;
	volatile int16_t x130 = INT16_MIN;
	static int8_t x132 = INT8_MIN;
	int32_t t27 = -19535;

    t27 = (x129<=((x130-x131)+x132));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x133 = 1U;
	int16_t x134 = INT16_MIN;
	int64_t x136 = INT64_MAX;
	int32_t t28 = 1;

    t28 = (x133<=((x134-x135)+x136));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x137 = INT8_MIN;
	uint8_t x138 = UINT8_MAX;
	volatile int16_t x139 = -5;
	uint16_t x140 = 42U;

    t29 = (x137<=((x138-x139)+x140));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x145 = INT8_MIN;
	static uint8_t x146 = 1U;
	static uint8_t x147 = 2U;
	volatile int32_t t30 = -3;

    t30 = (x145<=((x146-x147)+x148));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x149 = -20;
	int32_t x150 = 25231;
	int32_t x152 = -1;

    t31 = (x149<=((x150-x151)+x152));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x153 = 441U;
	int8_t x154 = -4;
	static volatile int8_t x155 = 0;
	static volatile uint64_t x156 = 729488659375LLU;
	static volatile int32_t t32 = 130894;

    t32 = (x153<=((x154-x155)+x156));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x157 = -1843;
	static uint8_t x158 = 18U;
	int8_t x159 = INT8_MIN;
	int32_t t33 = 85659;

    t33 = (x157<=((x158-x159)+x160));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x161 = INT32_MIN;
	uint32_t x162 = UINT32_MAX;
	int32_t x163 = 517;
	int16_t x164 = INT16_MIN;
	int32_t t34 = -37;

    t34 = (x161<=((x162-x163)+x164));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x166 = 132;
	int8_t x167 = -1;
	volatile int8_t x168 = 1;
	int32_t t35 = 25671414;

    t35 = (x165<=((x166-x167)+x168));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x170 = INT16_MIN;
	uint16_t x171 = UINT16_MAX;
	volatile int64_t x172 = -1LL;

    t36 = (x169<=((x170-x171)+x172));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x173 = -1LL;
	int8_t x174 = INT8_MIN;
	int16_t x175 = -1;
	volatile int16_t x176 = INT16_MIN;
	static int32_t t37 = -1;

    t37 = (x173<=((x174-x175)+x176));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x177 = 10442976058253LL;
	uint8_t x178 = UINT8_MAX;
	uint8_t x179 = 109U;
	volatile int8_t x180 = INT8_MIN;
	static volatile int32_t t38 = 1;

    t38 = (x177<=((x178-x179)+x180));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x185 = 11;
	int16_t x186 = -1;
	uint64_t x187 = 221054036667LLU;
	int32_t t39 = -840826;

    t39 = (x185<=((x186-x187)+x188));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x197 = INT8_MAX;
	uint64_t x198 = UINT64_MAX;
	static int8_t x199 = INT8_MIN;
	uint64_t x200 = 258835322336LLU;
	volatile int32_t t40 = -1021;

    t40 = (x197<=((x198-x199)+x200));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x201 = -267449;
	int16_t x202 = -1;
	volatile int8_t x204 = -1;
	volatile int32_t t41 = -190440610;

    t41 = (x201<=((x202-x203)+x204));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile int64_t x206 = -1LL;
	uint8_t x208 = 10U;
	static int32_t t42 = -24;

    t42 = (x205<=((x206-x207)+x208));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint32_t x209 = UINT32_MAX;
	int8_t x210 = 42;
	volatile uint64_t x212 = 449224887349LLU;
	int32_t t43 = 44;

    t43 = (x209<=((x210-x211)+x212));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x213 = 23U;
	static int64_t x214 = -1LL;
	int64_t x215 = INT64_MAX;
	volatile uint8_t x216 = 12U;

    t44 = (x213<=((x214-x215)+x216));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x221 = INT32_MAX;
	uint8_t x222 = 5U;
	int8_t x223 = -1;
	int32_t t45 = -66010;

    t45 = (x221<=((x222-x223)+x224));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint16_t x229 = 155U;
	volatile int64_t x230 = 77LL;
	int16_t x231 = INT16_MIN;
	uint16_t x232 = 14729U;
	volatile int32_t t46 = -3;

    t46 = (x229<=((x230-x231)+x232));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x234 = INT8_MIN;
	uint64_t x235 = UINT64_MAX;
	int32_t x236 = INT32_MIN;
	volatile int32_t t47 = -32688203;

    t47 = (x233<=((x234-x235)+x236));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x237 = 226740193U;
	volatile int64_t x238 = INT64_MAX;
	int16_t x239 = INT16_MAX;

    t48 = (x237<=((x238-x239)+x240));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int64_t x241 = INT64_MIN;
	uint32_t x242 = 108U;
	static int8_t x243 = INT8_MAX;

    t49 = (x241<=((x242-x243)+x244));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x245 = INT32_MIN;
	int16_t x246 = INT16_MAX;
	uint32_t x247 = 717U;
	volatile int32_t t50 = -5771549;

    t50 = (x245<=((x246-x247)+x248));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x249 = INT8_MIN;
	int32_t x250 = 136;
	static uint8_t x251 = UINT8_MAX;
	static int32_t x252 = INT32_MAX;

    t51 = (x249<=((x250-x251)+x252));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x253 = 1331178U;
	int8_t x255 = 3;
	int16_t x256 = -32;
	int32_t t52 = -611478;

    t52 = (x253<=((x254-x255)+x256));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x257 = -1;
	volatile int64_t x258 = INT64_MAX;
	int16_t x259 = 3555;
	int64_t x260 = -1LL;
	volatile int32_t t53 = -309;

    t53 = (x257<=((x258-x259)+x260));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x266 = 627034470;
	int8_t x267 = -3;
	int8_t x268 = INT8_MIN;
	volatile int32_t t54 = 598972254;

    t54 = (x265<=((x266-x267)+x268));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x274 = INT8_MIN;
	volatile uint64_t x276 = UINT64_MAX;
	volatile int32_t t55 = 1976826;

    t55 = (x273<=((x274-x275)+x276));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x277 = 37929889;
	volatile int64_t x278 = -1LL;
	uint64_t x279 = UINT64_MAX;
	volatile int32_t x280 = 4;
	int32_t t56 = -2389479;

    t56 = (x277<=((x278-x279)+x280));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x282 = INT64_MIN;
	static int8_t x283 = -45;

    t57 = (x281<=((x282-x283)+x284));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x285 = -238885LL;
	static int16_t x287 = -1;
	int32_t t58 = -1;

    t58 = (x285<=((x286-x287)+x288));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x291 = 28850U;
	volatile int32_t t59 = 19406;

    t59 = (x289<=((x290-x291)+x292));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x293 = INT64_MAX;
	volatile uint16_t x294 = UINT16_MAX;
	int16_t x295 = INT16_MIN;
	int8_t x296 = 1;
	static int32_t t60 = -219266;

    t60 = (x293<=((x294-x295)+x296));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x297 = -1LL;
	int16_t x298 = INT16_MIN;
	int32_t x299 = INT32_MIN;
	uint8_t x300 = UINT8_MAX;
	static int32_t t61 = 3;

    t61 = (x297<=((x298-x299)+x300));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x302 = 495511;
	int8_t x303 = -1;
	int64_t x304 = 762475029972753342LL;
	volatile int32_t t62 = 53;

    t62 = (x301<=((x302-x303)+x304));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x306 = 0LL;
	uint32_t x307 = 12974U;
	int64_t x308 = INT64_MAX;
	static int32_t t63 = 51;

    t63 = (x305<=((x306-x307)+x308));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x309 = INT64_MIN;
	volatile uint32_t x310 = 0U;
	volatile uint8_t x311 = UINT8_MAX;
	int32_t x312 = -38123624;
	static volatile int32_t t64 = 938444410;

    t64 = (x309<=((x310-x311)+x312));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int64_t x313 = INT64_MIN;
	uint8_t x316 = UINT8_MAX;
	volatile int32_t t65 = -3716481;

    t65 = (x313<=((x314-x315)+x316));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x321 = -1LL;
	uint8_t x322 = UINT8_MAX;
	int16_t x323 = INT16_MIN;
	int16_t x324 = -13811;
	int32_t t66 = 286;

    t66 = (x321<=((x322-x323)+x324));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x325 = 2843U;
	int16_t x327 = -15286;
	uint64_t x328 = 97LLU;

    t67 = (x325<=((x326-x327)+x328));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x331 = INT8_MIN;
	int16_t x332 = -2;

    t68 = (x329<=((x330-x331)+x332));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x337 = -206;
	uint16_t x338 = UINT16_MAX;
	uint16_t x340 = 1U;
	static volatile int32_t t69 = 6;

    t69 = (x337<=((x338-x339)+x340));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x341 = 0U;
	int16_t x342 = INT16_MAX;
	int64_t x344 = -1LL;

    t70 = (x341<=((x342-x343)+x344));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x345 = INT16_MIN;
	int16_t x346 = INT16_MIN;
	int8_t x347 = -57;
	volatile uint32_t x348 = 24995U;
	volatile int32_t t71 = -668650;

    t71 = (x345<=((x346-x347)+x348));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static int32_t x349 = -1;
	uint32_t x350 = 150U;
	int64_t x351 = -707449400982LL;
	int32_t x352 = INT32_MIN;
	volatile int32_t t72 = 2329082;

    t72 = (x349<=((x350-x351)+x352));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x354 = -39709LL;
	volatile int32_t t73 = 6959;

    t73 = (x353<=((x354-x355)+x356));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint16_t x357 = 2077U;
	int16_t x358 = -3;
	volatile int32_t x359 = 62777932;
	uint32_t x360 = 71787U;
	int32_t t74 = -1;

    t74 = (x357<=((x358-x359)+x360));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x361 = 32108U;
	int64_t x362 = -1LL;
	int64_t x363 = -1LL;
	int16_t x364 = INT16_MAX;
	static volatile int32_t t75 = -484468569;

    t75 = (x361<=((x362-x363)+x364));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x365 = -751021;
	static volatile uint16_t x368 = UINT16_MAX;
	static int32_t t76 = -846171987;

    t76 = (x365<=((x366-x367)+x368));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x369 = INT64_MIN;
	static uint8_t x370 = 12U;
	volatile int32_t t77 = -124;

    t77 = (x369<=((x370-x371)+x372));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x373 = 901553;
	int64_t x374 = -1LL;
	uint64_t x375 = 413237621075LLU;
	int64_t x376 = INT64_MAX;
	int32_t t78 = 64100494;

    t78 = (x373<=((x374-x375)+x376));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x377 = 1352U;
	uint16_t x378 = 328U;
	uint16_t x379 = 24U;
	uint8_t x380 = UINT8_MAX;

    t79 = (x377<=((x378-x379)+x380));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x381 = INT64_MIN;
	uint64_t x382 = UINT64_MAX;
	int8_t x383 = 12;
	static volatile int32_t x384 = INT32_MAX;
	volatile int32_t t80 = 32558743;

    t80 = (x381<=((x382-x383)+x384));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint8_t x385 = 1U;
	volatile uint32_t x387 = 6340837U;
	uint8_t x388 = 6U;
	int32_t t81 = -5;

    t81 = (x385<=((x386-x387)+x388));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x389 = -54;
	static uint16_t x391 = UINT16_MAX;
	static uint16_t x392 = 2153U;
	volatile int32_t t82 = -999358;

    t82 = (x389<=((x390-x391)+x392));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x399 = 12U;
	int8_t x400 = INT8_MIN;

    t83 = (x397<=((x398-x399)+x400));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x401 = INT64_MAX;
	uint8_t x402 = 13U;
	int64_t x403 = 10467008736752LL;
	static int32_t x404 = INT32_MIN;
	static volatile int32_t t84 = -1422;

    t84 = (x401<=((x402-x403)+x404));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x405 = INT32_MIN;
	static int16_t x406 = -99;
	volatile int8_t x407 = 0;
	volatile int32_t t85 = -551794;

    t85 = (x405<=((x406-x407)+x408));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x409 = INT16_MIN;
	uint32_t x411 = 2U;

    t86 = (x409<=((x410-x411)+x412));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x413 = 3813136U;
	int32_t x414 = -1;
	uint64_t x415 = 3LLU;
	int16_t x416 = INT16_MIN;
	volatile int32_t t87 = 17109;

    t87 = (x413<=((x414-x415)+x416));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x417 = 9972LLU;
	static int8_t x418 = INT8_MAX;
	int16_t x419 = -1074;
	int16_t x420 = INT16_MIN;
	int32_t t88 = 0;

    t88 = (x417<=((x418-x419)+x420));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x423 = -8160677604227418LL;

    t89 = (x421<=((x422-x423)+x424));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint16_t x425 = UINT16_MAX;
	static volatile int16_t x426 = 1;
	uint8_t x427 = UINT8_MAX;
	volatile int32_t x428 = -18918360;
	volatile int32_t t90 = -17376879;

    t90 = (x425<=((x426-x427)+x428));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x429 = INT32_MAX;
	int16_t x430 = -1;
	uint32_t x431 = 51U;
	int8_t x432 = INT8_MIN;

    t91 = (x429<=((x430-x431)+x432));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x434 = -1LL;
	volatile uint8_t x435 = 1U;
	int16_t x436 = INT16_MIN;

    t92 = (x433<=((x434-x435)+x436));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x437 = UINT8_MAX;
	static uint32_t x439 = 1110U;
	uint32_t x440 = 73019U;
	volatile int32_t t93 = -2247;

    t93 = (x437<=((x438-x439)+x440));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x445 = INT64_MAX;
	uint8_t x446 = UINT8_MAX;
	int64_t x448 = INT64_MIN;
	int32_t t94 = -36668;

    t94 = (x445<=((x446-x447)+x448));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x449 = 2881LLU;
	uint8_t x450 = 56U;
	uint32_t x451 = UINT32_MAX;
	volatile int32_t t95 = -29081377;

    t95 = (x449<=((x450-x451)+x452));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int64_t x453 = INT64_MIN;
	volatile uint8_t x454 = 1U;
	volatile int8_t x455 = INT8_MAX;
	int16_t x456 = -1;
	volatile int32_t t96 = 0;

    t96 = (x453<=((x454-x455)+x456));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x457 = INT16_MIN;
	int64_t x458 = -1LL;
	uint64_t x460 = 19355LLU;
	static int32_t t97 = -504857016;

    t97 = (x457<=((x458-x459)+x460));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x462 = INT16_MIN;
	volatile int8_t x463 = 2;
	uint64_t x464 = 2104242LLU;
	volatile int32_t t98 = -5869163;

    t98 = (x461<=((x462-x463)+x464));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x466 = -1;
	int64_t x467 = 69646871823167812LL;
	int8_t x468 = 1;
	volatile int32_t t99 = -324354;

    t99 = (x465<=((x466-x467)+x468));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x470 = 1294;
	int8_t x471 = INT8_MAX;
	uint16_t x472 = UINT16_MAX;
	volatile int32_t t100 = 72546947;

    t100 = (x469<=((x470-x471)+x472));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x473 = 6U;
	uint16_t x475 = 1146U;
	int32_t x476 = INT32_MIN;
	int32_t t101 = 1;

    t101 = (x473<=((x474-x475)+x476));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x481 = UINT64_MAX;
	int16_t x482 = INT16_MIN;
	static volatile int8_t x483 = INT8_MAX;
	uint8_t x484 = UINT8_MAX;

    t102 = (x481<=((x482-x483)+x484));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint32_t x487 = 292053600U;
	int32_t t103 = -84980;

    t103 = (x485<=((x486-x487)+x488));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x490 = -1;
	uint16_t x491 = 18U;
	static volatile int32_t t104 = 1874;

    t104 = (x489<=((x490-x491)+x492));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile uint8_t x493 = UINT8_MAX;
	uint64_t x494 = 24050LLU;
	volatile int16_t x495 = INT16_MAX;
	volatile int32_t x496 = 59;

    t105 = (x493<=((x494-x495)+x496));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int32_t x498 = -1;
	uint8_t x499 = 0U;
	uint64_t x500 = UINT64_MAX;
	int32_t t106 = -262936528;

    t106 = (x497<=((x498-x499)+x500));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x501 = 201773419LLU;
	volatile uint64_t x502 = UINT64_MAX;
	int8_t x503 = INT8_MAX;
	int16_t x504 = INT16_MIN;
	static volatile int32_t t107 = 73584667;

    t107 = (x501<=((x502-x503)+x504));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x505 = 413U;
	int8_t x506 = INT8_MIN;
	int16_t x507 = INT16_MAX;
	uint64_t x508 = 167350595651455827LLU;

    t108 = (x505<=((x506-x507)+x508));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x509 = INT8_MIN;
	static uint8_t x511 = 30U;
	int32_t x512 = -9776;
	static volatile int32_t t109 = 43;

    t109 = (x509<=((x510-x511)+x512));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x515 = INT64_MIN;
	volatile int8_t x516 = 3;

    t110 = (x513<=((x514-x515)+x516));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x517 = -3592028779199LL;
	int16_t x518 = -40;
	int8_t x519 = INT8_MIN;
	static int32_t x520 = -1;
	volatile int32_t t111 = -97915;

    t111 = (x517<=((x518-x519)+x520));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x521 = 15U;
	uint32_t x522 = 642635867U;
	static int32_t x524 = INT32_MAX;
	int32_t t112 = -1695;

    t112 = (x521<=((x522-x523)+x524));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x530 = INT64_MIN;
	static uint64_t x531 = 2070529643219LLU;
	int8_t x532 = INT8_MIN;
	static volatile int32_t t113 = -29412;

    t113 = (x529<=((x530-x531)+x532));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int32_t x541 = -1;
	uint8_t x543 = 0U;

    t114 = (x541<=((x542-x543)+x544));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x546 = INT16_MIN;
	static int8_t x548 = -61;

    t115 = (x545<=((x546-x547)+x548));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x549 = 19380903LLU;
	uint16_t x550 = UINT16_MAX;
	int16_t x551 = -51;
	int64_t x552 = -26LL;
	static volatile int32_t t116 = 31613;

    t116 = (x549<=((x550-x551)+x552));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint16_t x553 = 245U;
	int64_t x555 = INT64_MAX;
	static uint64_t x556 = UINT64_MAX;
	static int32_t t117 = 6303;

    t117 = (x553<=((x554-x555)+x556));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x558 = INT16_MIN;
	static int32_t x559 = 18;
	int8_t x560 = 4;

    t118 = (x557<=((x558-x559)+x560));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x562 = 7;
	int16_t x564 = INT16_MAX;
	volatile int32_t t119 = 1192510;

    t119 = (x561<=((x562-x563)+x564));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x567 = -149;
	int16_t x568 = 14;
	int32_t t120 = -12;

    t120 = (x565<=((x566-x567)+x568));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x573 = -1;
	static int64_t x574 = -1LL;
	static int64_t x576 = 0LL;
	int32_t t121 = -3;

    t121 = (x573<=((x574-x575)+x576));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x577 = 100U;
	int16_t x578 = INT16_MIN;
	int16_t x579 = -1;
	static int64_t x580 = -17LL;
	volatile int32_t t122 = -235652478;

    t122 = (x577<=((x578-x579)+x580));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x581 = INT8_MIN;
	uint16_t x582 = 110U;
	int8_t x583 = 22;
	int8_t x584 = 26;
	volatile int32_t t123 = -471152067;

    t123 = (x581<=((x582-x583)+x584));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x585 = 615106U;
	uint16_t x586 = 5U;
	volatile uint32_t x587 = 2714220U;
	int8_t x588 = -1;
	static int32_t t124 = 673;

    t124 = (x585<=((x586-x587)+x588));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x589 = INT8_MIN;
	int8_t x590 = INT8_MIN;
	static int16_t x591 = 1;
	uint64_t x592 = 2799942658857LLU;
	int32_t t125 = -8;

    t125 = (x589<=((x590-x591)+x592));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int32_t x593 = -1;
	volatile int64_t x594 = 266649301567480LL;
	int16_t x595 = 254;
	static uint8_t x596 = 1U;
	static int32_t t126 = -214189;

    t126 = (x593<=((x594-x595)+x596));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x603 = UINT64_MAX;
	uint8_t x604 = UINT8_MAX;
	int32_t t127 = 1298;

    t127 = (x601<=((x602-x603)+x604));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x605 = INT64_MIN;
	uint32_t x606 = UINT32_MAX;
	volatile uint32_t x607 = 8U;
	static volatile uint16_t x608 = UINT16_MAX;
	volatile int32_t t128 = 5417;

    t128 = (x605<=((x606-x607)+x608));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x613 = -1;
	uint8_t x614 = 27U;
	volatile uint8_t x615 = 5U;
	int32_t t129 = -19296;

    t129 = (x613<=((x614-x615)+x616));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x618 = 5;
	int64_t x619 = 4544353174152814LL;
	int8_t x620 = INT8_MAX;
	int32_t t130 = 244517;

    t130 = (x617<=((x618-x619)+x620));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint8_t x625 = UINT8_MAX;
	int64_t x626 = 764180290478940LL;
	static uint16_t x627 = 32581U;
	int16_t x628 = INT16_MIN;
	int32_t t131 = -17665;

    t131 = (x625<=((x626-x627)+x628));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x629 = -1;
	volatile uint8_t x630 = UINT8_MAX;
	static int16_t x631 = INT16_MIN;
	int8_t x632 = INT8_MIN;
	int32_t t132 = 24727;

    t132 = (x629<=((x630-x631)+x632));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint64_t x633 = UINT64_MAX;
	static uint16_t x634 = 108U;
	volatile int8_t x635 = INT8_MIN;
	int32_t x636 = INT32_MIN;

    t133 = (x633<=((x634-x635)+x636));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x637 = 651022378252LLU;
	uint8_t x638 = 15U;
	int16_t x639 = INT16_MAX;
	uint8_t x640 = 32U;
	volatile int32_t t134 = 2954368;

    t134 = (x637<=((x638-x639)+x640));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile uint64_t x641 = 579640019302LLU;
	int8_t x642 = INT8_MAX;
	volatile int16_t x643 = -1;
	int16_t x644 = INT16_MIN;
	int32_t t135 = 9608;

    t135 = (x641<=((x642-x643)+x644));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x645 = 490631435215037226LLU;
	uint64_t x647 = UINT64_MAX;
	volatile int8_t x648 = -48;
	int32_t t136 = -50739;

    t136 = (x645<=((x646-x647)+x648));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x649 = -1;
	static int64_t x650 = 7LL;
	uint32_t x651 = 24U;
	volatile int32_t t137 = 704660756;

    t137 = (x649<=((x650-x651)+x652));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x653 = INT8_MIN;
	static uint16_t x655 = 5U;
	int32_t t138 = 532111;

    t138 = (x653<=((x654-x655)+x656));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x657 = 108U;
	static volatile int64_t x658 = INT64_MIN;
	static volatile uint32_t x659 = 0U;
	static uint32_t x660 = 3195U;
	int32_t t139 = -565882822;

    t139 = (x657<=((x658-x659)+x660));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int32_t x661 = -7;
	int32_t x662 = -1;
	volatile int16_t x663 = INT16_MIN;
	volatile int32_t t140 = -971371926;

    t140 = (x661<=((x662-x663)+x664));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x666 = INT32_MIN;
	volatile uint32_t x667 = 39U;
	int64_t x668 = INT64_MIN;

    t141 = (x665<=((x666-x667)+x668));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x673 = 18LLU;
	volatile uint64_t x674 = 773220206962LLU;
	int8_t x675 = -1;
	int8_t x676 = 0;
	volatile int32_t t142 = 7798;

    t142 = (x673<=((x674-x675)+x676));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x677 = INT64_MAX;
	int16_t x678 = -21;
	static int64_t x679 = -1LL;
	int8_t x680 = 1;
	static volatile int32_t t143 = 492765508;

    t143 = (x677<=((x678-x679)+x680));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x681 = -1;
	int64_t x682 = -1LL;
	uint32_t x683 = 15753U;
	volatile int32_t x684 = -1;
	static volatile int32_t t144 = -1;

    t144 = (x681<=((x682-x683)+x684));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x685 = INT16_MAX;
	static uint8_t x687 = UINT8_MAX;
	int8_t x688 = -1;
	int32_t t145 = -114941302;

    t145 = (x685<=((x686-x687)+x688));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x689 = 704379596799LL;
	int16_t x690 = -1;
	uint16_t x691 = 7824U;
	volatile int16_t x692 = 2167;
	volatile int32_t t146 = -16924871;

    t146 = (x689<=((x690-x691)+x692));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x697 = INT32_MIN;
	static int64_t x698 = INT64_MIN;
	int16_t x699 = INT16_MIN;
	int16_t x700 = -226;
	int32_t t147 = 529226;

    t147 = (x697<=((x698-x699)+x700));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x701 = -1;
	static volatile uint16_t x702 = 31929U;
	int16_t x703 = INT16_MIN;

    t148 = (x701<=((x702-x703)+x704));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x707 = -1;
	int16_t x708 = INT16_MIN;
	int32_t t149 = 1;

    t149 = (x705<=((x706-x707)+x708));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x709 = -17;
	static uint64_t x711 = 16LLU;
	int16_t x712 = INT16_MIN;
	static volatile int32_t t150 = 1;

    t150 = (x709<=((x710-x711)+x712));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x714 = 23U;
	volatile int32_t x715 = INT32_MIN;
	static uint32_t x716 = UINT32_MAX;
	int32_t t151 = -174942;

    t151 = (x713<=((x714-x715)+x716));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x717 = -1LL;
	static uint32_t x718 = 10U;
	uint8_t x719 = 37U;
	uint32_t x720 = 86022045U;
	int32_t t152 = 16730461;

    t152 = (x717<=((x718-x719)+x720));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x721 = 11631075340LLU;
	int32_t x723 = -2;
	int16_t x724 = INT16_MIN;
	volatile int32_t t153 = 0;

    t153 = (x721<=((x722-x723)+x724));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x729 = UINT16_MAX;
	uint64_t x730 = UINT64_MAX;
	static int16_t x731 = -1493;
	uint8_t x732 = 0U;
	static volatile int32_t t154 = 599289;

    t154 = (x729<=((x730-x731)+x732));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int32_t t155 = -50611521;

    t155 = (x733<=((x734-x735)+x736));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x737 = UINT32_MAX;
	volatile uint16_t x738 = UINT16_MAX;
	static int8_t x739 = -1;
	static uint8_t x740 = 4U;
	volatile int32_t t156 = -7;

    t156 = (x737<=((x738-x739)+x740));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x741 = INT16_MAX;
	uint8_t x744 = 0U;

    t157 = (x741<=((x742-x743)+x744));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint16_t x745 = UINT16_MAX;
	static volatile int32_t x746 = 1016887;
	static int8_t x747 = -1;
	int8_t x748 = -7;
	static volatile int32_t t158 = -968;

    t158 = (x745<=((x746-x747)+x748));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint32_t x753 = 811U;
	uint16_t x754 = UINT16_MAX;
	uint16_t x756 = UINT16_MAX;
	static volatile int32_t t159 = 1365184;

    t159 = (x753<=((x754-x755)+x756));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x757 = -5;
	int32_t x758 = INT32_MAX;
	uint16_t x759 = 359U;
	volatile int8_t x760 = -30;
	static volatile int32_t t160 = 856158;

    t160 = (x757<=((x758-x759)+x760));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x761 = -1;
	volatile int32_t x763 = -1;
	int32_t x764 = -1;
	static int32_t t161 = 0;

    t161 = (x761<=((x762-x763)+x764));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x765 = INT16_MAX;
	int8_t x768 = 0;
	int32_t t162 = 945006;

    t162 = (x765<=((x766-x767)+x768));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint64_t x769 = UINT64_MAX;
	int16_t x770 = 609;
	static int16_t x771 = INT16_MAX;
	static int64_t x772 = -2609283LL;
	volatile int32_t t163 = 0;

    t163 = (x769<=((x770-x771)+x772));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x777 = INT8_MIN;
	volatile int16_t x778 = -1;
	uint16_t x780 = UINT16_MAX;
	volatile int32_t t164 = -858511414;

    t164 = (x777<=((x778-x779)+x780));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x785 = -1;
	static int64_t x786 = INT64_MIN;
	static int64_t x787 = INT64_MIN;
	volatile int32_t t165 = 28301;

    t165 = (x785<=((x786-x787)+x788));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x789 = -15553330;
	volatile int8_t x790 = INT8_MIN;
	int32_t x791 = -1;
	static int64_t x792 = 1028734726LL;
	static volatile int32_t t166 = -164;

    t166 = (x789<=((x790-x791)+x792));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x793 = 2U;
	uint16_t x795 = 2U;
	int8_t x796 = INT8_MIN;
	volatile int32_t t167 = 368080083;

    t167 = (x793<=((x794-x795)+x796));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x797 = 531U;
	int32_t x798 = 16;
	static uint16_t x799 = 24758U;
	int64_t x800 = -1LL;

    t168 = (x797<=((x798-x799)+x800));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x802 = INT16_MAX;
	int8_t x803 = -1;
	int32_t t169 = 3734;

    t169 = (x801<=((x802-x803)+x804));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static int32_t x813 = INT32_MAX;
	int16_t x814 = 2880;
	volatile int32_t x815 = INT32_MAX;
	static int32_t t170 = 7974;

    t170 = (x813<=((x814-x815)+x816));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x817 = INT32_MIN;
	static uint8_t x818 = 2U;
	static int16_t x819 = INT16_MIN;
	volatile uint32_t x820 = UINT32_MAX;

    t171 = (x817<=((x818-x819)+x820));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x825 = -11;
	uint8_t x827 = 87U;
	int64_t x828 = -13374LL;
	int32_t t172 = -371397003;

    t172 = (x825<=((x826-x827)+x828));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x829 = 13U;
	uint32_t x830 = UINT32_MAX;
	int8_t x831 = -1;
	static int64_t x832 = -1LL;

    t173 = (x829<=((x830-x831)+x832));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x833 = INT8_MIN;
	int32_t x834 = INT32_MAX;
	volatile int16_t x835 = 82;
	volatile int16_t x836 = INT16_MIN;

    t174 = (x833<=((x834-x835)+x836));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x837 = INT64_MIN;
	int16_t x838 = 0;
	int32_t x839 = -1;
	uint16_t x840 = 28349U;
	int32_t t175 = 2;

    t175 = (x837<=((x838-x839)+x840));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x842 = INT8_MAX;
	uint64_t x844 = UINT64_MAX;
	static volatile int32_t t176 = 34374;

    t176 = (x841<=((x842-x843)+x844));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x846 = INT16_MAX;
	int16_t x847 = -1;
	int16_t x848 = 0;
	volatile int32_t t177 = 26961;

    t177 = (x845<=((x846-x847)+x848));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x849 = INT8_MAX;
	int8_t x851 = INT8_MIN;
	uint64_t x852 = 442561889049017098LLU;
	int32_t t178 = 14;

    t178 = (x849<=((x850-x851)+x852));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x853 = -28;
	static int32_t x854 = INT32_MIN;
	int64_t x855 = INT64_MIN;
	volatile uint8_t x856 = 2U;
	int32_t t179 = 54032;

    t179 = (x853<=((x854-x855)+x856));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static int32_t x857 = -40;
	int32_t x858 = INT32_MIN;
	volatile uint64_t x859 = UINT64_MAX;
	int64_t x860 = -1LL;
	volatile int32_t t180 = -822;

    t180 = (x857<=((x858-x859)+x860));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x861 = 0;
	static int32_t x862 = INT32_MIN;
	int32_t x863 = -1;
	int16_t x864 = 65;
	int32_t t181 = -394611;

    t181 = (x861<=((x862-x863)+x864));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile uint8_t x865 = 6U;
	int8_t x867 = 1;
	int64_t x868 = -1LL;
	int32_t t182 = 38041;

    t182 = (x865<=((x866-x867)+x868));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x869 = 638697U;
	uint8_t x870 = UINT8_MAX;
	uint16_t x871 = UINT16_MAX;
	volatile uint32_t x872 = 103862U;
	static int32_t t183 = 0;

    t183 = (x869<=((x870-x871)+x872));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int64_t x873 = -4009LL;
	int32_t x874 = -129525;
	static int8_t x875 = INT8_MIN;
	volatile int16_t x876 = INT16_MIN;
	volatile int32_t t184 = 3021;

    t184 = (x873<=((x874-x875)+x876));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x877 = INT64_MIN;
	static uint16_t x878 = 244U;
	uint64_t x879 = UINT64_MAX;

    t185 = (x877<=((x878-x879)+x880));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x885 = -1LL;
	uint32_t x886 = UINT32_MAX;

    t186 = (x885<=((x886-x887)+x888));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x889 = 211U;
	static volatile int64_t x890 = 63984LL;
	int8_t x892 = 1;
	static volatile int32_t t187 = 264244;

    t187 = (x889<=((x890-x891)+x892));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x897 = 3662142;
	uint32_t x898 = 177U;
	uint8_t x899 = 0U;
	int64_t x900 = INT64_MIN;
	int32_t t188 = 248969606;

    t188 = (x897<=((x898-x899)+x900));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x902 = 8275U;
	int64_t x903 = -1LL;
	uint32_t x904 = 5076U;
	int32_t t189 = -1536;

    t189 = (x901<=((x902-x903)+x904));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t x913 = -121966;
	int16_t x914 = INT16_MIN;
	volatile int16_t x915 = INT16_MIN;
	volatile int8_t x916 = INT8_MIN;
	volatile int32_t t190 = -18;

    t190 = (x913<=((x914-x915)+x916));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x921 = INT16_MIN;
	int16_t x923 = INT16_MIN;
	volatile int64_t x924 = INT64_MAX;
	int32_t t191 = -215237050;

    t191 = (x921<=((x922-x923)+x924));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x925 = -56003;
	int32_t x926 = -5;
	int16_t x928 = -31;
	int32_t t192 = -121166;

    t192 = (x925<=((x926-x927)+x928));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x929 = -1871;
	uint64_t x930 = UINT64_MAX;
	int16_t x932 = INT16_MIN;
	int32_t t193 = 8;

    t193 = (x929<=((x930-x931)+x932));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int64_t x937 = 1LL;
	int64_t x938 = -1815533061488119LL;
	int64_t x939 = 116459883695089466LL;
	int64_t x940 = INT64_MAX;

    t194 = (x937<=((x938-x939)+x940));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x942 = 47853574825068175LLU;
	volatile uint32_t x943 = 1376403491U;
	static volatile uint32_t x944 = 1489U;
	static int32_t t195 = 208714;

    t195 = (x941<=((x942-x943)+x944));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x946 = UINT8_MAX;
	int8_t x948 = -4;

    t196 = (x945<=((x946-x947)+x948));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x949 = -3;
	int16_t x952 = -1;

    t197 = (x949<=((x950-x951)+x952));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x953 = INT64_MIN;
	volatile int8_t x954 = 7;
	int16_t x955 = INT16_MIN;
	uint64_t x956 = 1LLU;
	static volatile int32_t t198 = 3268600;

    t198 = (x953<=((x954-x955)+x956));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x957 = INT64_MAX;
	uint8_t x958 = 1U;
	uint64_t x960 = 1937LLU;
	int32_t t199 = 64316262;

    t199 = (x957<=((x958-x959)+x960));

    if (t199 != 0) { NG(); } else { ; }
	
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

