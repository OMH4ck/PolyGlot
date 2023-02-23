
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

uint16_t x2 = 0U;
static volatile int16_t x4 = INT16_MIN;
int8_t x13 = INT8_MIN;
int16_t x20 = 1;
volatile int64_t x31 = -1LL;
int32_t t5 = 12128393;
static int16_t x46 = -10;
int8_t x51 = INT8_MIN;
int8_t x52 = -1;
uint32_t x54 = UINT32_MAX;
int8_t x59 = INT8_MIN;
uint64_t x61 = 71741143449268LLU;
int64_t x64 = -33389100LL;
static int32_t x65 = -245595577;
int16_t x67 = INT16_MIN;
uint16_t x71 = 2U;
static int32_t x75 = INT32_MAX;
volatile uint64_t x79 = 7384200793LLU;
int64_t x85 = -1LL;
int64_t x90 = INT64_MIN;
uint8_t x92 = UINT8_MAX;
int16_t x99 = INT16_MIN;
uint32_t x100 = 632853U;
volatile int32_t t22 = 0;
uint16_t x120 = UINT16_MAX;
uint64_t x122 = UINT64_MAX;
int32_t x123 = INT32_MIN;
uint32_t x124 = 10679987U;
uint32_t x132 = UINT32_MAX;
int32_t x136 = INT32_MIN;
uint16_t x144 = 602U;
int16_t x148 = INT16_MIN;
volatile uint32_t x157 = 20U;
int64_t x159 = INT64_MIN;
static volatile int32_t x163 = 1862423;
int16_t x170 = -1;
volatile int32_t t36 = -920463;
volatile int64_t x175 = INT64_MIN;
int32_t x180 = 2075;
static int32_t t38 = -2190;
int8_t x181 = 4;
uint8_t x183 = UINT8_MAX;
volatile int16_t x187 = INT16_MIN;
volatile int64_t x189 = INT64_MIN;
uint8_t x192 = 1U;
static int32_t t41 = -639790;
int64_t x204 = 14613515252LL;
static int64_t x209 = INT64_MIN;
int16_t x210 = INT16_MAX;
uint64_t x222 = 11LLU;
int16_t x223 = INT16_MIN;
static int8_t x227 = -8;
static volatile int32_t t50 = 1473087;
static int8_t x240 = 13;
int64_t x245 = -1LL;
volatile int64_t x246 = -1LL;
static int64_t x247 = INT64_MIN;
uint16_t x248 = UINT16_MAX;
volatile int32_t t52 = 0;
static int32_t x250 = INT32_MAX;
uint16_t x254 = UINT16_MAX;
uint16_t x256 = 246U;
uint16_t x275 = UINT16_MAX;
uint16_t x278 = 1001U;
int32_t t59 = 20;
uint8_t x281 = 51U;
static int32_t t60 = -11297199;
static int32_t x286 = -10088937;
static int16_t x287 = -1;
uint16_t x288 = UINT16_MAX;
volatile uint32_t x294 = 421U;
volatile int8_t x296 = INT8_MIN;
int64_t x298 = INT64_MIN;
int8_t x299 = INT8_MAX;
int64_t x305 = INT64_MAX;
int8_t x313 = 0;
int32_t x317 = INT32_MAX;
volatile int16_t x319 = -14;
int8_t x340 = INT8_MIN;
int32_t t73 = 10470;
static int16_t x345 = INT16_MAX;
int64_t x349 = INT64_MIN;
static uint32_t x352 = 0U;
int32_t t76 = -472665782;
static int64_t x369 = 0LL;
int32_t x371 = INT32_MIN;
volatile int32_t x373 = -1;
int64_t x378 = -1248LL;
int64_t x382 = -2022664965108627059LL;
volatile int16_t x387 = INT16_MIN;
int16_t x389 = -29;
static uint8_t x392 = 82U;
uint8_t x395 = UINT8_MAX;
int64_t x400 = -1LL;
volatile uint16_t x403 = 24122U;
int16_t x412 = -5996;
volatile int32_t x415 = 194354;
int16_t x418 = INT16_MIN;
int32_t x425 = INT32_MIN;
static int32_t t93 = -24;
static int32_t x434 = INT32_MAX;
static int64_t x446 = INT64_MIN;
int32_t t97 = 17;
int64_t x454 = INT64_MIN;
int16_t x458 = 912;
static uint16_t x460 = UINT16_MAX;
int32_t t100 = 11563;
static int8_t x462 = INT8_MIN;
volatile int32_t t101 = -25;
int32_t t102 = 492681;
volatile int32_t t104 = 5351651;
int16_t x484 = INT16_MIN;
static volatile int8_t x486 = INT8_MIN;
volatile int32_t t106 = 109067702;
uint8_t x494 = 15U;
volatile int16_t x496 = -1;
uint32_t x498 = 16838848U;
volatile int32_t t109 = 976250765;
int64_t x519 = -1LL;
int32_t x521 = -1;
int8_t x523 = INT8_MIN;
int8_t x524 = INT8_MAX;
int32_t t115 = 0;
int64_t x526 = -8144433782151893LL;
uint64_t x527 = 39525991LLU;
int8_t x533 = INT8_MAX;
int8_t x535 = 0;
volatile int32_t x538 = INT32_MIN;
int8_t x541 = -1;
int16_t x547 = 530;
volatile int32_t t120 = 7840;
static uint64_t x555 = 2395884LLU;
volatile int8_t x556 = INT8_MIN;
int16_t x570 = INT16_MIN;
int16_t x571 = INT16_MIN;
volatile int32_t t125 = -2185;
int64_t x601 = -1LL;
int32_t t131 = -71257;
int64_t x607 = 0LL;
int32_t t132 = -8786795;
int64_t x610 = INT64_MIN;
int32_t t133 = -50;
int64_t x621 = 1LL;
static uint32_t x622 = 54U;
static int16_t x624 = INT16_MAX;
static uint8_t x628 = UINT8_MAX;
int16_t x639 = INT16_MIN;
int16_t x641 = INT16_MIN;
int8_t x648 = INT8_MIN;
int64_t x662 = -302613626947707LL;
int8_t x667 = -1;
int8_t x669 = 0;
int8_t x690 = -1;
int8_t x691 = 5;
static int32_t x695 = -347;
static int16_t x703 = INT16_MIN;
int32_t t153 = 4719625;
int16_t x705 = INT16_MIN;
volatile int32_t t154 = -156618706;
int32_t x711 = -1;
int16_t x712 = -1;
volatile uint64_t x714 = 552LLU;
uint8_t x725 = 21U;
static int32_t x737 = INT32_MIN;
int16_t x740 = -935;
uint16_t x748 = 12U;
volatile int32_t x751 = INT32_MIN;
static uint16_t x754 = 0U;
int32_t x755 = -7;
int8_t x760 = INT8_MIN;
int16_t x765 = -1;
uint8_t x767 = UINT8_MAX;
volatile int32_t t168 = -5078519;
volatile int16_t x771 = -192;
int16_t x779 = 4058;
static int32_t x780 = INT32_MAX;
static int32_t t171 = -2;
int8_t x785 = INT8_MAX;
volatile int8_t x787 = INT8_MIN;
int32_t t172 = -11;
uint16_t x794 = 253U;
uint8_t x795 = 1U;
uint16_t x797 = UINT16_MAX;
static int64_t x799 = INT64_MAX;
int32_t x805 = -63023051;
uint16_t x808 = 24484U;
int32_t t177 = -23182380;
uint8_t x816 = UINT8_MAX;
volatile uint32_t x820 = 1848909546U;
static volatile int32_t t180 = 24;
static volatile int8_t x826 = -1;
int16_t x834 = INT16_MIN;
int32_t x852 = -1;
int16_t x853 = -13893;
static int16_t x855 = -1;
static volatile int32_t t188 = -893925;
int8_t x859 = -11;
uint16_t x868 = 16U;
static int16_t x870 = INT16_MAX;
static volatile int64_t x871 = -795108132LL;
int16_t x872 = INT16_MIN;
int32_t t191 = 14;
int64_t x875 = INT64_MAX;
static uint16_t x878 = UINT16_MAX;
uint8_t x880 = 15U;
int8_t x883 = -1;
int32_t x884 = 52;
int32_t t195 = -148063;
uint16_t x891 = 9771U;
uint64_t x892 = 40055728326768LLU;
static int32_t t197 = -15427;
static int32_t x907 = INT32_MIN;
volatile uint16_t x908 = 1U;
int32_t x910 = -1;
int32_t t199 = 4243429;


void f0(void) {
    	int64_t x1 = 2178989379743619808LL;
	int8_t x3 = 3;
	static int32_t t0 = -15;

    t0 = (x1<=((x2^x3)-x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x14 = INT32_MAX;
	uint64_t x15 = UINT64_MAX;
	uint32_t x16 = 48170659U;
	static volatile int32_t t1 = 164316751;

    t1 = (x13<=((x14^x15)-x16));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x17 = INT64_MIN;
	volatile int8_t x18 = INT8_MAX;
	uint16_t x19 = UINT16_MAX;
	int32_t t2 = 4029;

    t2 = (x17<=((x18^x19)-x20));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x21 = 43U;
	uint8_t x22 = UINT8_MAX;
	uint16_t x23 = 656U;
	uint8_t x24 = UINT8_MAX;
	volatile int32_t t3 = 1;

    t3 = (x21<=((x22^x23)-x24));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int16_t x29 = 11646;
	static volatile int8_t x30 = INT8_MIN;
	uint64_t x32 = 647412LLU;
	int32_t t4 = 153637168;

    t4 = (x29<=((x30^x31)-x32));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x33 = INT32_MIN;
	volatile uint32_t x34 = 494808130U;
	uint8_t x35 = UINT8_MAX;
	int64_t x36 = 2572183781LL;

    t5 = (x33<=((x34^x35)-x36));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x37 = 7087731512423725LLU;
	static int32_t x38 = 83;
	int8_t x39 = -1;
	int16_t x40 = INT16_MIN;
	volatile int32_t t6 = -21467;

    t6 = (x37<=((x38^x39)-x40));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x41 = -1;
	uint64_t x42 = 30035595233LLU;
	uint8_t x43 = UINT8_MAX;
	int64_t x44 = INT64_MIN;
	int32_t t7 = -657623;

    t7 = (x41<=((x42^x43)-x44));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x45 = UINT64_MAX;
	static int8_t x47 = INT8_MIN;
	int8_t x48 = 0;
	volatile int32_t t8 = 660;

    t8 = (x45<=((x46^x47)-x48));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x49 = 29LL;
	static int64_t x50 = INT64_MIN;
	int32_t t9 = 1;

    t9 = (x49<=((x50^x51)-x52));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x53 = -1;
	int64_t x55 = -1LL;
	int32_t x56 = -3127;
	int32_t t10 = 165020;

    t10 = (x53<=((x54^x55)-x56));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x57 = 0;
	uint16_t x58 = UINT16_MAX;
	uint32_t x60 = 9809U;
	int32_t t11 = -3168;

    t11 = (x57<=((x58^x59)-x60));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x62 = INT64_MAX;
	volatile int32_t x63 = INT32_MAX;
	volatile int32_t t12 = 32;

    t12 = (x61<=((x62^x63)-x64));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint16_t x66 = 23U;
	uint16_t x68 = 327U;
	int32_t t13 = 42614119;

    t13 = (x65<=((x66^x67)-x68));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x69 = -1177LL;
	volatile int16_t x70 = INT16_MAX;
	static int16_t x72 = -1;
	volatile int32_t t14 = 219;

    t14 = (x69<=((x70^x71)-x72));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x73 = INT32_MAX;
	uint32_t x74 = 28291U;
	int32_t x76 = INT32_MIN;
	int32_t t15 = -37;

    t15 = (x73<=((x74^x75)-x76));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x77 = INT64_MAX;
	uint8_t x78 = 25U;
	int32_t x80 = -2360278;
	volatile int32_t t16 = -375229;

    t16 = (x77<=((x78^x79)-x80));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x86 = -1;
	int64_t x87 = INT64_MAX;
	int8_t x88 = -1;
	static int32_t t17 = -11361908;

    t17 = (x85<=((x86^x87)-x88));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x89 = INT32_MIN;
	volatile int32_t x91 = INT32_MIN;
	volatile int32_t t18 = 30;

    t18 = (x89<=((x90^x91)-x92));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x93 = INT32_MIN;
	int32_t x94 = -1;
	volatile uint8_t x95 = UINT8_MAX;
	int8_t x96 = INT8_MIN;
	static volatile int32_t t19 = -24;

    t19 = (x93<=((x94^x95)-x96));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x97 = UINT64_MAX;
	int8_t x98 = -1;
	volatile int32_t t20 = -296279;

    t20 = (x97<=((x98^x99)-x100));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x101 = 0;
	int8_t x102 = INT8_MIN;
	volatile int64_t x103 = INT64_MIN;
	uint16_t x104 = 137U;
	volatile int32_t t21 = 74;

    t21 = (x101<=((x102^x103)-x104));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x109 = INT16_MIN;
	volatile uint32_t x110 = UINT32_MAX;
	volatile int64_t x111 = INT64_MAX;
	uint8_t x112 = 0U;

    t22 = (x109<=((x110^x111)-x112));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x113 = 64415116684514138LLU;
	static int32_t x114 = -3;
	int8_t x115 = INT8_MIN;
	volatile int8_t x116 = INT8_MIN;
	int32_t t23 = 32618;

    t23 = (x113<=((x114^x115)-x116));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x117 = 2;
	int8_t x118 = INT8_MAX;
	uint32_t x119 = 18U;
	int32_t t24 = -1192;

    t24 = (x117<=((x118^x119)-x120));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x121 = INT32_MAX;
	volatile int32_t t25 = -166399244;

    t25 = (x121<=((x122^x123)-x124));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x125 = 1U;
	static int16_t x126 = INT16_MAX;
	int32_t x127 = -606;
	volatile int32_t x128 = 1;
	volatile int32_t t26 = 80124;

    t26 = (x125<=((x126^x127)-x128));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x129 = 5U;
	uint32_t x130 = UINT32_MAX;
	static uint64_t x131 = 63LLU;
	volatile int32_t t27 = -1;

    t27 = (x129<=((x130^x131)-x132));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x133 = -8;
	uint64_t x134 = UINT64_MAX;
	uint16_t x135 = 127U;
	static int32_t t28 = 742691787;

    t28 = (x133<=((x134^x135)-x136));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x141 = -1;
	uint16_t x142 = 5U;
	int64_t x143 = INT64_MAX;
	volatile int32_t t29 = 658;

    t29 = (x141<=((x142^x143)-x144));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint8_t x145 = 3U;
	int16_t x146 = 1;
	static volatile uint64_t x147 = UINT64_MAX;
	volatile int32_t t30 = 519028;

    t30 = (x145<=((x146^x147)-x148));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x149 = 106449U;
	static uint64_t x150 = 917726995684049LLU;
	uint16_t x151 = 10722U;
	int64_t x152 = INT64_MIN;
	volatile int32_t t31 = 13860;

    t31 = (x149<=((x150^x151)-x152));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int32_t x153 = -1770958;
	volatile int32_t x154 = 21;
	static uint64_t x155 = 65LLU;
	int8_t x156 = -1;
	volatile int32_t t32 = -6525;

    t32 = (x153<=((x154^x155)-x156));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x158 = INT32_MIN;
	static volatile int16_t x160 = INT16_MAX;
	int32_t t33 = 41162826;

    t33 = (x157<=((x158^x159)-x160));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x161 = -2;
	static uint16_t x162 = 2636U;
	int8_t x164 = INT8_MAX;
	volatile int32_t t34 = -7;

    t34 = (x161<=((x162^x163)-x164));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint16_t x165 = UINT16_MAX;
	uint16_t x166 = 0U;
	uint16_t x167 = UINT16_MAX;
	int8_t x168 = 0;
	static volatile int32_t t35 = 4959;

    t35 = (x165<=((x166^x167)-x168));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x169 = INT8_MIN;
	uint8_t x171 = 2U;
	volatile int8_t x172 = -45;

    t36 = (x169<=((x170^x171)-x172));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x173 = 78734U;
	volatile uint8_t x174 = UINT8_MAX;
	volatile uint64_t x176 = UINT64_MAX;
	int32_t t37 = 1483813;

    t37 = (x173<=((x174^x175)-x176));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x177 = INT8_MIN;
	volatile uint32_t x178 = UINT32_MAX;
	int8_t x179 = -1;

    t38 = (x177<=((x178^x179)-x180));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x182 = INT32_MIN;
	int16_t x184 = -989;
	volatile int32_t t39 = 254503128;

    t39 = (x181<=((x182^x183)-x184));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x185 = INT64_MAX;
	static uint32_t x186 = 715292U;
	uint64_t x188 = 213924198142529349LLU;
	volatile int32_t t40 = 941244567;

    t40 = (x185<=((x186^x187)-x188));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x190 = INT64_MAX;
	volatile int8_t x191 = INT8_MAX;

    t41 = (x189<=((x190^x191)-x192));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x193 = 1;
	int8_t x194 = 43;
	int16_t x195 = INT16_MAX;
	uint8_t x196 = 66U;
	int32_t t42 = -2758260;

    t42 = (x193<=((x194^x195)-x196));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x201 = 6983578LLU;
	int16_t x202 = INT16_MIN;
	uint16_t x203 = UINT16_MAX;
	volatile int32_t t43 = 9;

    t43 = (x201<=((x202^x203)-x204));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x205 = 2;
	uint8_t x206 = 1U;
	int8_t x207 = -16;
	int64_t x208 = -1LL;
	int32_t t44 = -2697788;

    t44 = (x205<=((x206^x207)-x208));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x211 = INT8_MAX;
	int32_t x212 = -1;
	volatile int32_t t45 = 55761629;

    t45 = (x209<=((x210^x211)-x212));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x213 = -1306249495LL;
	volatile int8_t x214 = INT8_MAX;
	int64_t x215 = INT64_MIN;
	int64_t x216 = INT64_MIN;
	volatile int32_t t46 = 4069846;

    t46 = (x213<=((x214^x215)-x216));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x217 = UINT64_MAX;
	int32_t x218 = -1;
	int64_t x219 = -1LL;
	int64_t x220 = 248658634497079LL;
	volatile int32_t t47 = -108;

    t47 = (x217<=((x218^x219)-x220));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x221 = 139958982;
	uint16_t x224 = 0U;
	volatile int32_t t48 = -56;

    t48 = (x221<=((x222^x223)-x224));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint64_t x225 = UINT64_MAX;
	int16_t x226 = -1;
	uint16_t x228 = UINT16_MAX;
	static int32_t t49 = -136250;

    t49 = (x225<=((x226^x227)-x228));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x229 = 3648517935LLU;
	int16_t x230 = INT16_MIN;
	int8_t x231 = 10;
	volatile uint8_t x232 = UINT8_MAX;

    t50 = (x229<=((x230^x231)-x232));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x237 = INT64_MIN;
	uint32_t x238 = UINT32_MAX;
	volatile uint32_t x239 = UINT32_MAX;
	volatile int32_t t51 = -367482434;

    t51 = (x237<=((x238^x239)-x240));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    

    t52 = (x245<=((x246^x247)-x248));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x249 = INT64_MIN;
	uint64_t x251 = 2340459LLU;
	static int8_t x252 = INT8_MAX;
	volatile int32_t t53 = -16;

    t53 = (x249<=((x250^x251)-x252));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x253 = UINT64_MAX;
	static int16_t x255 = -1;
	int32_t t54 = 119977678;

    t54 = (x253<=((x254^x255)-x256));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x257 = INT64_MIN;
	static uint32_t x258 = 1055037U;
	static int8_t x259 = 1;
	int64_t x260 = -1LL;
	volatile int32_t t55 = 12800;

    t55 = (x257<=((x258^x259)-x260));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x265 = 1;
	static uint32_t x266 = UINT32_MAX;
	int32_t x267 = INT32_MIN;
	volatile int8_t x268 = -1;
	volatile int32_t t56 = 1;

    t56 = (x265<=((x266^x267)-x268));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x269 = 895U;
	int64_t x270 = -5LL;
	int8_t x271 = -1;
	uint64_t x272 = 383264973LLU;
	volatile int32_t t57 = -1865678;

    t57 = (x269<=((x270^x271)-x272));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x273 = INT64_MIN;
	static int32_t x274 = INT32_MIN;
	uint64_t x276 = 1024480135551LLU;
	volatile int32_t t58 = 1;

    t58 = (x273<=((x274^x275)-x276));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x277 = INT64_MAX;
	volatile int16_t x279 = INT16_MAX;
	int16_t x280 = INT16_MIN;

    t59 = (x277<=((x278^x279)-x280));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x282 = -1;
	volatile int16_t x283 = -1;
	uint8_t x284 = 7U;

    t60 = (x281<=((x282^x283)-x284));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x285 = UINT8_MAX;
	static volatile int32_t t61 = 36;

    t61 = (x285<=((x286^x287)-x288));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x293 = 33;
	volatile int8_t x295 = -4;
	volatile int32_t t62 = 1781958;

    t62 = (x293<=((x294^x295)-x296));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x297 = INT16_MAX;
	static int16_t x300 = -1;
	static volatile int32_t t63 = -99296571;

    t63 = (x297<=((x298^x299)-x300));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int64_t x301 = INT64_MIN;
	int64_t x302 = -7628402105859LL;
	int64_t x303 = 481291835789LL;
	int8_t x304 = INT8_MIN;
	int32_t t64 = 76;

    t64 = (x301<=((x302^x303)-x304));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x306 = INT16_MAX;
	int16_t x307 = INT16_MAX;
	int8_t x308 = -1;
	int32_t t65 = 190813;

    t65 = (x305<=((x306^x307)-x308));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x314 = -1;
	static volatile uint64_t x315 = 131771376LLU;
	static uint32_t x316 = 109U;
	int32_t t66 = 439;

    t66 = (x313<=((x314^x315)-x316));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x318 = 4;
	int32_t x320 = INT32_MIN;
	int32_t t67 = 23237081;

    t67 = (x317<=((x318^x319)-x320));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint32_t x321 = 2907U;
	static int64_t x322 = INT64_MIN;
	static int32_t x323 = 1;
	int32_t x324 = INT32_MIN;
	volatile int32_t t68 = -569938;

    t68 = (x321<=((x322^x323)-x324));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int8_t x325 = -4;
	static int64_t x326 = -1LL;
	static int8_t x327 = -1;
	uint8_t x328 = 61U;
	volatile int32_t t69 = -571298395;

    t69 = (x325<=((x326^x327)-x328));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x329 = -407050905LL;
	static int32_t x330 = -1;
	int16_t x331 = 119;
	static int16_t x332 = 6;
	static volatile int32_t t70 = -1264748;

    t70 = (x329<=((x330^x331)-x332));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x333 = INT16_MAX;
	int64_t x334 = INT64_MIN;
	int8_t x335 = INT8_MIN;
	volatile int64_t x336 = INT64_MAX;
	int32_t t71 = 10;

    t71 = (x333<=((x334^x335)-x336));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x337 = INT16_MAX;
	int64_t x338 = INT64_MAX;
	uint64_t x339 = UINT64_MAX;
	volatile int32_t t72 = -494916;

    t72 = (x337<=((x338^x339)-x340));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x341 = INT32_MAX;
	static int8_t x342 = INT8_MAX;
	static uint8_t x343 = 16U;
	volatile uint32_t x344 = 208187875U;

    t73 = (x341<=((x342^x343)-x344));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x346 = INT16_MIN;
	volatile uint32_t x347 = UINT32_MAX;
	int16_t x348 = 1;
	volatile int32_t t74 = 0;

    t74 = (x345<=((x346^x347)-x348));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x350 = 433U;
	int32_t x351 = -1;
	int32_t t75 = -109582323;

    t75 = (x349<=((x350^x351)-x352));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x357 = 59051691LLU;
	uint16_t x358 = 2U;
	uint8_t x359 = 2U;
	static int32_t x360 = -1;

    t76 = (x357<=((x358^x359)-x360));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x361 = -1;
	int16_t x362 = 131;
	volatile int32_t x363 = -1;
	int64_t x364 = -1LL;
	static volatile int32_t t77 = 38870;

    t77 = (x361<=((x362^x363)-x364));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x365 = 2U;
	int16_t x366 = -14786;
	static uint32_t x367 = 1U;
	int16_t x368 = INT16_MIN;
	volatile int32_t t78 = 1;

    t78 = (x365<=((x366^x367)-x368));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint32_t x370 = UINT32_MAX;
	volatile int8_t x372 = -1;
	volatile int32_t t79 = -73;

    t79 = (x369<=((x370^x371)-x372));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x374 = INT64_MIN;
	int16_t x375 = INT16_MAX;
	static volatile int16_t x376 = INT16_MIN;
	static volatile int32_t t80 = -5186;

    t80 = (x373<=((x374^x375)-x376));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x377 = 626098629LLU;
	volatile int64_t x379 = 80917723288172655LL;
	int8_t x380 = -1;
	int32_t t81 = -69073;

    t81 = (x377<=((x378^x379)-x380));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x381 = 1626U;
	static uint64_t x383 = 7845460219LLU;
	int64_t x384 = -11863474689164LL;
	volatile int32_t t82 = 700767;

    t82 = (x381<=((x382^x383)-x384));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x385 = 2U;
	int32_t x386 = INT32_MIN;
	static volatile uint32_t x388 = 40262U;
	volatile int32_t t83 = 3866342;

    t83 = (x385<=((x386^x387)-x388));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x390 = -1;
	volatile uint8_t x391 = UINT8_MAX;
	volatile int32_t t84 = -1918164;

    t84 = (x389<=((x390^x391)-x392));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x393 = -1;
	uint64_t x394 = 521280967172LLU;
	int8_t x396 = INT8_MIN;
	volatile int32_t t85 = -13991748;

    t85 = (x393<=((x394^x395)-x396));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x397 = UINT16_MAX;
	static int8_t x398 = 1;
	int32_t x399 = INT32_MIN;
	volatile int32_t t86 = -2783;

    t86 = (x397<=((x398^x399)-x400));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x401 = -34;
	uint64_t x402 = 6LLU;
	static int8_t x404 = INT8_MIN;
	int32_t t87 = -1010;

    t87 = (x401<=((x402^x403)-x404));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x409 = 124LL;
	static int64_t x410 = INT64_MIN;
	static int32_t x411 = INT32_MAX;
	int32_t t88 = 386551;

    t88 = (x409<=((x410^x411)-x412));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int8_t x413 = INT8_MIN;
	int8_t x414 = -4;
	uint32_t x416 = 4325309U;
	int32_t t89 = -114163846;

    t89 = (x413<=((x414^x415)-x416));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint16_t x417 = UINT16_MAX;
	int32_t x419 = -5;
	volatile uint8_t x420 = UINT8_MAX;
	int32_t t90 = -426;

    t90 = (x417<=((x418^x419)-x420));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x421 = INT64_MIN;
	int8_t x422 = INT8_MIN;
	static volatile int64_t x423 = -1LL;
	int8_t x424 = 2;
	volatile int32_t t91 = 15;

    t91 = (x421<=((x422^x423)-x424));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x426 = -1;
	int64_t x427 = INT64_MAX;
	uint64_t x428 = UINT64_MAX;
	volatile int32_t t92 = 3;

    t92 = (x425<=((x426^x427)-x428));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x429 = INT8_MIN;
	static uint32_t x430 = UINT32_MAX;
	int8_t x431 = INT8_MAX;
	uint8_t x432 = 3U;

    t93 = (x429<=((x430^x431)-x432));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x433 = 10U;
	int16_t x435 = INT16_MIN;
	static int64_t x436 = 503793LL;
	static int32_t t94 = 5301415;

    t94 = (x433<=((x434^x435)-x436));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x437 = INT32_MIN;
	int16_t x438 = INT16_MIN;
	int8_t x439 = 3;
	int32_t x440 = -1;
	int32_t t95 = 1;

    t95 = (x437<=((x438^x439)-x440));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x441 = UINT64_MAX;
	static int16_t x442 = -1;
	int8_t x443 = 0;
	int8_t x444 = -6;
	volatile int32_t t96 = -121;

    t96 = (x441<=((x442^x443)-x444));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x445 = INT32_MIN;
	uint32_t x447 = 50421U;
	uint16_t x448 = 1U;

    t97 = (x445<=((x446^x447)-x448));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x449 = INT16_MIN;
	volatile uint8_t x450 = 31U;
	static uint8_t x451 = UINT8_MAX;
	static int16_t x452 = -45;
	volatile int32_t t98 = -187448173;

    t98 = (x449<=((x450^x451)-x452));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x453 = UINT8_MAX;
	int64_t x455 = INT64_MAX;
	int64_t x456 = INT64_MIN;
	int32_t t99 = 7;

    t99 = (x453<=((x454^x455)-x456));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x457 = -1;
	volatile uint8_t x459 = 4U;

    t100 = (x457<=((x458^x459)-x460));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile uint16_t x461 = UINT16_MAX;
	static volatile int64_t x463 = 6LL;
	static int16_t x464 = INT16_MIN;

    t101 = (x461<=((x462^x463)-x464));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x469 = -1LL;
	static int64_t x470 = INT64_MIN;
	int8_t x471 = INT8_MAX;
	int64_t x472 = INT64_MIN;

    t102 = (x469<=((x470^x471)-x472));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x473 = -469;
	int32_t x474 = -7626;
	volatile int32_t x475 = -10;
	volatile int8_t x476 = -15;
	volatile int32_t t103 = 122699;

    t103 = (x473<=((x474^x475)-x476));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile int8_t x477 = -1;
	int8_t x478 = INT8_MIN;
	int64_t x479 = -1560919694426671LL;
	static volatile int8_t x480 = INT8_MIN;

    t104 = (x477<=((x478^x479)-x480));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint16_t x481 = 3U;
	int32_t x482 = 1;
	volatile int16_t x483 = 12438;
	volatile int32_t t105 = -312674544;

    t105 = (x481<=((x482^x483)-x484));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint16_t x485 = 2931U;
	uint8_t x487 = UINT8_MAX;
	uint8_t x488 = UINT8_MAX;

    t106 = (x485<=((x486^x487)-x488));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x489 = INT16_MIN;
	static volatile int32_t x490 = 32446;
	volatile int16_t x491 = 10444;
	volatile int16_t x492 = -709;
	int32_t t107 = -1313;

    t107 = (x489<=((x490^x491)-x492));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x493 = INT32_MIN;
	int8_t x495 = INT8_MIN;
	int32_t t108 = 30;

    t108 = (x493<=((x494^x495)-x496));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x497 = 30U;
	uint8_t x499 = 98U;
	int8_t x500 = INT8_MAX;

    t109 = (x497<=((x498^x499)-x500));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x501 = -43;
	int8_t x502 = -1;
	volatile int16_t x503 = 13;
	int64_t x504 = -1LL;
	int32_t t110 = -24;

    t110 = (x501<=((x502^x503)-x504));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x505 = INT32_MAX;
	uint64_t x506 = 80154104979540391LLU;
	int8_t x507 = -1;
	int64_t x508 = INT64_MIN;
	static int32_t t111 = 17;

    t111 = (x505<=((x506^x507)-x508));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint8_t x509 = 40U;
	uint64_t x510 = UINT64_MAX;
	int32_t x511 = -1;
	volatile int8_t x512 = 1;
	volatile int32_t t112 = -132526;

    t112 = (x509<=((x510^x511)-x512));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x513 = INT16_MAX;
	int8_t x514 = -1;
	static volatile int8_t x515 = INT8_MIN;
	uint8_t x516 = UINT8_MAX;
	volatile int32_t t113 = -106;

    t113 = (x513<=((x514^x515)-x516));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x517 = INT8_MAX;
	static int16_t x518 = -16027;
	volatile int8_t x520 = 3;
	int32_t t114 = 981;

    t114 = (x517<=((x518^x519)-x520));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x522 = INT32_MIN;

    t115 = (x521<=((x522^x523)-x524));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x525 = 16U;
	int64_t x528 = -1LL;
	int32_t t116 = -174696;

    t116 = (x525<=((x526^x527)-x528));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint8_t x534 = 2U;
	uint16_t x536 = UINT16_MAX;
	volatile int32_t t117 = 5144;

    t117 = (x533<=((x534^x535)-x536));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x537 = 62369;
	int8_t x539 = INT8_MIN;
	uint8_t x540 = UINT8_MAX;
	int32_t t118 = 28;

    t118 = (x537<=((x538^x539)-x540));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x542 = 0;
	uint8_t x543 = 1U;
	int64_t x544 = 3LL;
	int32_t t119 = -2924;

    t119 = (x541<=((x542^x543)-x544));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x545 = INT16_MIN;
	static volatile uint32_t x546 = UINT32_MAX;
	static int16_t x548 = -1;

    t120 = (x545<=((x546^x547)-x548));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x549 = -1;
	int64_t x550 = INT64_MIN;
	int16_t x551 = -1;
	static uint16_t x552 = 287U;
	volatile int32_t t121 = 338307;

    t121 = (x549<=((x550^x551)-x552));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x553 = INT32_MIN;
	int16_t x554 = -14563;
	static volatile int32_t t122 = 1043085;

    t122 = (x553<=((x554^x555)-x556));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x561 = 710385865071567343LL;
	uint16_t x562 = 489U;
	uint16_t x563 = 17U;
	uint16_t x564 = 622U;
	volatile int32_t t123 = 6039;

    t123 = (x561<=((x562^x563)-x564));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint32_t x565 = 523052372U;
	uint32_t x566 = 36444475U;
	volatile int16_t x567 = INT16_MIN;
	int32_t x568 = INT32_MIN;
	volatile int32_t t124 = -53551;

    t124 = (x565<=((x566^x567)-x568));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x569 = 241;
	int8_t x572 = INT8_MAX;

    t125 = (x569<=((x570^x571)-x572));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x573 = INT8_MAX;
	uint8_t x574 = 2U;
	uint64_t x575 = 24910571549465LLU;
	uint16_t x576 = UINT16_MAX;
	static int32_t t126 = 161660505;

    t126 = (x573<=((x574^x575)-x576));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x577 = 22678700600839LLU;
	volatile uint8_t x578 = 89U;
	static uint8_t x579 = 3U;
	uint16_t x580 = 239U;
	int32_t t127 = 27725;

    t127 = (x577<=((x578^x579)-x580));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x589 = INT16_MAX;
	int8_t x590 = INT8_MAX;
	int16_t x591 = INT16_MIN;
	uint8_t x592 = 93U;
	static volatile int32_t t128 = -473245576;

    t128 = (x589<=((x590^x591)-x592));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x593 = -376515;
	uint16_t x594 = UINT16_MAX;
	int32_t x595 = 5;
	uint64_t x596 = 45585627LLU;
	static int32_t t129 = 1018427;

    t129 = (x593<=((x594^x595)-x596));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int16_t x597 = INT16_MAX;
	int32_t x598 = -1;
	int8_t x599 = -3;
	int8_t x600 = INT8_MIN;
	static volatile int32_t t130 = -87255;

    t130 = (x597<=((x598^x599)-x600));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x602 = -1;
	int16_t x603 = 531;
	int16_t x604 = 1;

    t131 = (x601<=((x602^x603)-x604));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x605 = -1;
	uint8_t x606 = 0U;
	uint16_t x608 = UINT16_MAX;

    t132 = (x605<=((x606^x607)-x608));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x609 = INT32_MIN;
	uint8_t x611 = 102U;
	int64_t x612 = INT64_MIN;

    t133 = (x609<=((x610^x611)-x612));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int16_t x613 = INT16_MIN;
	int32_t x614 = -2636;
	int64_t x615 = -1LL;
	volatile int32_t x616 = -1;
	volatile int32_t t134 = 13708;

    t134 = (x613<=((x614^x615)-x616));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x623 = -8090468;
	int32_t t135 = -8855571;

    t135 = (x621<=((x622^x623)-x624));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x625 = -1;
	static volatile int8_t x626 = INT8_MAX;
	int32_t x627 = INT32_MAX;
	int32_t t136 = 887;

    t136 = (x625<=((x626^x627)-x628));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile uint8_t x629 = UINT8_MAX;
	uint8_t x630 = 9U;
	static int64_t x631 = 1731487912858519085LL;
	uint16_t x632 = 0U;
	int32_t t137 = 84802119;

    t137 = (x629<=((x630^x631)-x632));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint64_t x637 = 545995410753570LLU;
	int32_t x638 = INT32_MIN;
	static uint32_t x640 = UINT32_MAX;
	volatile int32_t t138 = 12246;

    t138 = (x637<=((x638^x639)-x640));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x642 = 9LL;
	static uint32_t x643 = 169135U;
	uint64_t x644 = UINT64_MAX;
	volatile int32_t t139 = 1;

    t139 = (x641<=((x642^x643)-x644));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x645 = INT64_MIN;
	int32_t x646 = INT32_MIN;
	uint8_t x647 = 74U;
	int32_t t140 = -59275186;

    t140 = (x645<=((x646^x647)-x648));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int32_t x649 = 191747;
	int32_t x650 = INT32_MAX;
	int16_t x651 = INT16_MIN;
	int32_t x652 = -48;
	volatile int32_t t141 = -1530;

    t141 = (x649<=((x650^x651)-x652));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x653 = 59U;
	int64_t x654 = INT64_MIN;
	int16_t x655 = INT16_MAX;
	int32_t x656 = INT32_MIN;
	int32_t t142 = -1;

    t142 = (x653<=((x654^x655)-x656));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x657 = 63U;
	uint8_t x658 = 104U;
	static int32_t x659 = -1;
	int64_t x660 = -1LL;
	static volatile int32_t t143 = -19;

    t143 = (x657<=((x658^x659)-x660));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x661 = -1LL;
	uint16_t x663 = UINT16_MAX;
	int16_t x664 = -79;
	int32_t t144 = 3;

    t144 = (x661<=((x662^x663)-x664));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x665 = -1067627;
	volatile int16_t x666 = INT16_MIN;
	volatile int16_t x668 = INT16_MIN;
	int32_t t145 = -350223727;

    t145 = (x665<=((x666^x667)-x668));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x670 = -343;
	int32_t x671 = 794;
	int64_t x672 = INT64_MIN;
	volatile int32_t t146 = -240;

    t146 = (x669<=((x670^x671)-x672));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x673 = 977682193698881914LLU;
	int16_t x674 = INT16_MIN;
	int16_t x675 = INT16_MIN;
	uint64_t x676 = 41LLU;
	static volatile int32_t t147 = 0;

    t147 = (x673<=((x674^x675)-x676));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x677 = INT16_MAX;
	int64_t x678 = INT64_MIN;
	static int64_t x679 = INT64_MIN;
	volatile int8_t x680 = INT8_MIN;
	volatile int32_t t148 = 84394;

    t148 = (x677<=((x678^x679)-x680));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x681 = -778210;
	volatile int8_t x682 = INT8_MAX;
	int32_t x683 = -1;
	static volatile uint16_t x684 = 99U;
	volatile int32_t t149 = -2953879;

    t149 = (x681<=((x682^x683)-x684));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int32_t x689 = INT32_MIN;
	volatile int8_t x692 = INT8_MAX;
	int32_t t150 = 324370;

    t150 = (x689<=((x690^x691)-x692));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int64_t x693 = INT64_MIN;
	int16_t x694 = 6;
	static uint64_t x696 = UINT64_MAX;
	volatile int32_t t151 = 4125761;

    t151 = (x693<=((x694^x695)-x696));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x697 = 45;
	int32_t x698 = -1;
	int16_t x699 = INT16_MAX;
	volatile int16_t x700 = 754;
	volatile int32_t t152 = 398;

    t152 = (x697<=((x698^x699)-x700));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x701 = INT16_MIN;
	uint8_t x702 = 2U;
	static int8_t x704 = INT8_MIN;

    t153 = (x701<=((x702^x703)-x704));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint32_t x706 = 82U;
	uint32_t x707 = UINT32_MAX;
	uint8_t x708 = 8U;

    t154 = (x705<=((x706^x707)-x708));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x709 = -60610399;
	int16_t x710 = INT16_MAX;
	volatile int32_t t155 = -53;

    t155 = (x709<=((x710^x711)-x712));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x713 = INT16_MAX;
	volatile uint8_t x715 = UINT8_MAX;
	static int8_t x716 = INT8_MAX;
	int32_t t156 = -782;

    t156 = (x713<=((x714^x715)-x716));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t x721 = INT32_MIN;
	int8_t x722 = INT8_MIN;
	uint8_t x723 = 23U;
	static int16_t x724 = -5;
	int32_t t157 = 1348356;

    t157 = (x721<=((x722^x723)-x724));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x726 = INT16_MIN;
	uint8_t x727 = 0U;
	int64_t x728 = INT64_MIN;
	static int32_t t158 = 15;

    t158 = (x725<=((x726^x727)-x728));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x729 = 12418U;
	int64_t x730 = 2027452552339454335LL;
	volatile int64_t x731 = INT64_MIN;
	uint32_t x732 = UINT32_MAX;
	volatile int32_t t159 = 1;

    t159 = (x729<=((x730^x731)-x732));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x733 = INT8_MAX;
	int32_t x734 = INT32_MIN;
	static int16_t x735 = -1;
	volatile int32_t x736 = INT32_MAX;
	static int32_t t160 = 61405315;

    t160 = (x733<=((x734^x735)-x736));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x738 = 73668022009605859LLU;
	static uint8_t x739 = UINT8_MAX;
	volatile int32_t t161 = -52805111;

    t161 = (x737<=((x738^x739)-x740));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint8_t x741 = UINT8_MAX;
	uint32_t x742 = 6169U;
	static int64_t x743 = INT64_MIN;
	int64_t x744 = -968149LL;
	volatile int32_t t162 = 7;

    t162 = (x741<=((x742^x743)-x744));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x745 = 1U;
	uint32_t x746 = UINT32_MAX;
	uint64_t x747 = UINT64_MAX;
	static int32_t t163 = -348641;

    t163 = (x745<=((x746^x747)-x748));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint16_t x749 = UINT16_MAX;
	int16_t x750 = INT16_MIN;
	int8_t x752 = INT8_MIN;
	int32_t t164 = 109026195;

    t164 = (x749<=((x750^x751)-x752));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x753 = INT64_MAX;
	int64_t x756 = INT64_MIN;
	volatile int32_t t165 = 69059724;

    t165 = (x753<=((x754^x755)-x756));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint64_t x757 = UINT64_MAX;
	uint64_t x758 = UINT64_MAX;
	uint16_t x759 = 1118U;
	int32_t t166 = -1;

    t166 = (x757<=((x758^x759)-x760));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile uint8_t x761 = 3U;
	int32_t x762 = INT32_MAX;
	int16_t x763 = -7;
	int8_t x764 = INT8_MIN;
	static volatile int32_t t167 = -176692316;

    t167 = (x761<=((x762^x763)-x764));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x766 = INT32_MIN;
	static volatile int16_t x768 = -1;

    t168 = (x765<=((x766^x767)-x768));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x769 = -1;
	static uint16_t x770 = 3052U;
	static uint8_t x772 = UINT8_MAX;
	volatile int32_t t169 = 1;

    t169 = (x769<=((x770^x771)-x772));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x773 = 59715392067272LLU;
	uint32_t x774 = 1157954U;
	int32_t x775 = INT32_MIN;
	int64_t x776 = -340509697521201LL;
	int32_t t170 = -7;

    t170 = (x773<=((x774^x775)-x776));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int8_t x777 = -1;
	int32_t x778 = INT32_MAX;

    t171 = (x777<=((x778^x779)-x780));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x786 = 51U;
	static int32_t x788 = INT32_MIN;

    t172 = (x785<=((x786^x787)-x788));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x789 = 6U;
	uint16_t x790 = 1U;
	int8_t x791 = 0;
	static uint16_t x792 = 56U;
	volatile int32_t t173 = 11952;

    t173 = (x789<=((x790^x791)-x792));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x793 = INT32_MAX;
	uint64_t x796 = UINT64_MAX;
	int32_t t174 = -19726;

    t174 = (x793<=((x794^x795)-x796));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x798 = INT8_MIN;
	int8_t x800 = INT8_MAX;
	int32_t t175 = 42;

    t175 = (x797<=((x798^x799)-x800));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x801 = 2;
	volatile uint8_t x802 = UINT8_MAX;
	int8_t x803 = INT8_MIN;
	uint32_t x804 = 1U;
	volatile int32_t t176 = 9648;

    t176 = (x801<=((x802^x803)-x804));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x806 = UINT16_MAX;
	volatile uint8_t x807 = 2U;

    t177 = (x805<=((x806^x807)-x808));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x809 = 10992U;
	volatile uint8_t x810 = 9U;
	int8_t x811 = -1;
	int16_t x812 = -15;
	static volatile int32_t t178 = 7;

    t178 = (x809<=((x810^x811)-x812));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x813 = -1LL;
	uint16_t x814 = UINT16_MAX;
	volatile int64_t x815 = INT64_MIN;
	int32_t t179 = -21329;

    t179 = (x813<=((x814^x815)-x816));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x817 = 14228612365083LLU;
	volatile int32_t x818 = -195;
	volatile int8_t x819 = 27;

    t180 = (x817<=((x818^x819)-x820));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x821 = INT8_MAX;
	uint64_t x822 = UINT64_MAX;
	int16_t x823 = -1;
	volatile uint64_t x824 = UINT64_MAX;
	volatile int32_t t181 = -9;

    t181 = (x821<=((x822^x823)-x824));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x825 = INT32_MIN;
	int64_t x827 = INT64_MIN;
	volatile uint64_t x828 = 181908335989LLU;
	int32_t t182 = -160;

    t182 = (x825<=((x826^x827)-x828));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint64_t x829 = 207201238LLU;
	int16_t x830 = INT16_MIN;
	int16_t x831 = 0;
	static volatile int32_t x832 = INT32_MIN;
	int32_t t183 = 132624747;

    t183 = (x829<=((x830^x831)-x832));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint16_t x833 = 1309U;
	int32_t x835 = INT32_MAX;
	volatile uint8_t x836 = UINT8_MAX;
	int32_t t184 = -39079224;

    t184 = (x833<=((x834^x835)-x836));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x837 = 471596LL;
	int32_t x838 = INT32_MIN;
	uint8_t x839 = 9U;
	int32_t x840 = INT32_MIN;
	volatile int32_t t185 = -95177388;

    t185 = (x837<=((x838^x839)-x840));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint8_t x845 = 28U;
	uint64_t x846 = 6149516LLU;
	static volatile uint16_t x847 = 7248U;
	volatile int16_t x848 = INT16_MAX;
	volatile int32_t t186 = -13;

    t186 = (x845<=((x846^x847)-x848));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x849 = 10697842U;
	static uint8_t x850 = UINT8_MAX;
	uint32_t x851 = 6U;
	static int32_t t187 = -887;

    t187 = (x849<=((x850^x851)-x852));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x854 = -379;
	int8_t x856 = INT8_MAX;

    t188 = (x853<=((x854^x855)-x856));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x857 = 0U;
	int16_t x858 = INT16_MIN;
	uint64_t x860 = UINT64_MAX;
	static int32_t t189 = -14;

    t189 = (x857<=((x858^x859)-x860));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x865 = INT64_MIN;
	int16_t x866 = -1;
	volatile uint8_t x867 = 0U;
	int32_t t190 = 507595;

    t190 = (x865<=((x866^x867)-x868));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x869 = INT32_MIN;

    t191 = (x869<=((x870^x871)-x872));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x873 = 85112319752LLU;
	static int32_t x874 = -5891;
	volatile int32_t x876 = -4;
	static volatile int32_t t192 = 1;

    t192 = (x873<=((x874^x875)-x876));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x877 = 160724U;
	uint8_t x879 = 3U;
	static volatile int32_t t193 = 82271738;

    t193 = (x877<=((x878^x879)-x880));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x881 = -1LL;
	int32_t x882 = -780671427;
	volatile int32_t t194 = 96321823;

    t194 = (x881<=((x882^x883)-x884));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x885 = -1LL;
	static int32_t x886 = -1;
	static int8_t x887 = 27;
	uint8_t x888 = 0U;

    t195 = (x885<=((x886^x887)-x888));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint8_t x889 = 27U;
	int32_t x890 = -1;
	volatile int32_t t196 = 90848;

    t196 = (x889<=((x890^x891)-x892));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x901 = INT8_MAX;
	volatile int32_t x902 = 228;
	uint8_t x903 = UINT8_MAX;
	uint64_t x904 = 369421762LLU;

    t197 = (x901<=((x902^x903)-x904));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x905 = INT32_MAX;
	static volatile int16_t x906 = INT16_MIN;
	volatile int32_t t198 = 240;

    t198 = (x905<=((x906^x907)-x908));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x909 = INT32_MIN;
	int8_t x911 = 1;
	int16_t x912 = 1;

    t199 = (x909<=((x910^x911)-x912));

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

