
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

int8_t x3 = 1;
int8_t x16 = 3;
int32_t t2 = 1;
int32_t x17 = 114840296;
int64_t x18 = 47916801LL;
int32_t t3 = -15;
uint8_t x26 = 99U;
uint32_t x28 = 65476820U;
int16_t x30 = INT16_MAX;
static int64_t x31 = INT64_MIN;
volatile int16_t x35 = -1;
uint32_t x38 = 52U;
uint32_t x40 = 33U;
int16_t x42 = -106;
static uint32_t t9 = 5U;
volatile int16_t x58 = -2;
int64_t x63 = 12203619546451LL;
uint64_t x75 = 77344631583549609LLU;
static uint8_t x76 = UINT8_MAX;
uint32_t x81 = 53U;
uint64_t x95 = 4096420928LLU;
static volatile int64_t x97 = 10147044667LL;
int8_t x99 = INT8_MAX;
volatile int64_t t19 = 10530182879063543LL;
volatile uint32_t t20 = 36504U;
volatile int16_t x112 = INT16_MIN;
static uint16_t x115 = UINT16_MAX;
uint8_t x123 = 26U;
int64_t x127 = INT64_MIN;
static volatile int32_t x128 = 10;
static uint16_t x132 = 2U;
static volatile int32_t x157 = INT32_MIN;
uint16_t x158 = 62U;
volatile int8_t x162 = INT8_MAX;
volatile uint8_t x165 = 6U;
volatile int32_t t34 = 451215;
static volatile uint64_t x173 = UINT64_MAX;
volatile uint64_t t36 = 772805448050283635LLU;
static int16_t x177 = INT16_MIN;
int8_t x180 = INT8_MAX;
int32_t t37 = 7;
int16_t x183 = 76;
uint8_t x187 = UINT8_MAX;
int16_t x194 = INT16_MIN;
uint16_t x195 = UINT16_MAX;
uint8_t x203 = 3U;
static volatile int32_t t45 = 111267166;
static int8_t x239 = INT8_MAX;
static volatile int16_t x241 = -8;
int16_t x242 = INT16_MIN;
static volatile uint8_t x243 = UINT8_MAX;
uint8_t x244 = UINT8_MAX;
int16_t x245 = INT16_MAX;
uint8_t x247 = 51U;
uint8_t x250 = 14U;
uint32_t x265 = UINT32_MAX;
static int32_t x270 = INT32_MIN;
static int16_t x271 = INT16_MIN;
volatile uint64_t t54 = 74LLU;
volatile int8_t x278 = -1;
uint64_t x279 = UINT64_MAX;
uint64_t x280 = UINT64_MAX;
uint8_t x282 = 7U;
int16_t x291 = INT16_MIN;
int64_t x320 = 733712779LL;
volatile int64_t x326 = INT64_MAX;
uint32_t x329 = 110523U;
int8_t x334 = -1;
volatile int32_t t65 = -6242852;
int64_t x338 = -1LL;
int32_t t67 = 65555260;
uint8_t x352 = 16U;
int16_t x354 = INT16_MIN;
uint16_t x357 = 2906U;
uint8_t x359 = 8U;
int32_t x363 = 26468204;
int8_t x380 = INT8_MAX;
uint8_t x387 = 14U;
int32_t x392 = 6;
int16_t x407 = INT16_MIN;
uint32_t x422 = 3097757U;
static uint8_t x423 = UINT8_MAX;
volatile uint64_t x427 = 117828701LLU;
static int8_t x429 = INT8_MIN;
volatile int32_t x434 = INT32_MIN;
uint16_t x436 = UINT16_MAX;
static int64_t x440 = INT64_MAX;
static volatile int64_t x453 = 950696741406324LL;
int64_t x456 = -1LL;
uint16_t x460 = UINT16_MAX;
int32_t x473 = 36176037;
int32_t x477 = 13647;
int8_t x478 = INT8_MIN;
volatile uint64_t t96 = 236426444588LLU;
volatile int16_t x489 = -1;
static volatile uint32_t x491 = 6U;
volatile uint16_t x496 = UINT16_MAX;
static int32_t x504 = INT32_MAX;
int64_t x509 = -1LL;
volatile int64_t t103 = -515LL;
volatile uint32_t x515 = UINT32_MAX;
volatile int32_t x517 = INT32_MIN;
int8_t x529 = INT8_MIN;
volatile uint64_t x532 = 6263234654LLU;
static uint8_t x533 = 4U;
static int8_t x543 = 42;
volatile int32_t t109 = -1591863;
int64_t t110 = -221483988708LL;
int16_t x550 = 7143;
int16_t x553 = INT16_MIN;
static uint16_t x569 = 671U;
uint64_t x585 = UINT64_MAX;
int16_t x588 = -3734;
uint64_t t118 = 677748110734LLU;
int64_t x590 = INT64_MAX;
uint16_t x597 = 75U;
int8_t x601 = -1;
int32_t x605 = INT32_MAX;
int16_t x618 = INT16_MIN;
volatile uint8_t x626 = 48U;
static int64_t x630 = -1LL;
volatile int16_t x635 = INT16_MIN;
volatile int32_t x639 = INT32_MAX;
static int16_t x645 = 142;
int32_t t131 = 810985;
int32_t x652 = -102;
int32_t x654 = -1;
int16_t x656 = INT16_MIN;
static int16_t x663 = INT16_MIN;
volatile int32_t t135 = -34;
uint8_t x666 = 26U;
int16_t x669 = -2;
int32_t x670 = INT32_MIN;
int8_t x671 = INT8_MAX;
int32_t t138 = 546137;
uint64_t x680 = 45LLU;
int16_t x689 = 32;
volatile uint32_t x691 = UINT32_MAX;
int8_t x705 = -1;
volatile int32_t t142 = 172422;
volatile int32_t t143 = 3;
int64_t t144 = -309597843924941LL;
volatile uint64_t x717 = 12642864734868LLU;
uint16_t x729 = UINT16_MAX;
volatile uint32_t t147 = 560U;
uint8_t x743 = UINT8_MAX;
volatile int32_t t148 = 1596;
int64_t x745 = -1LL;
volatile uint8_t x746 = UINT8_MAX;
volatile uint8_t x748 = 1U;
static int64_t x749 = -1LL;
static uint32_t x768 = UINT32_MAX;
volatile uint32_t t153 = 183313478U;
volatile uint64_t t156 = 130190056008LLU;
uint8_t x794 = 40U;
volatile uint16_t x795 = UINT16_MAX;
static int64_t x797 = INT64_MIN;
uint64_t x803 = 4716453128572781318LLU;
static volatile uint8_t x810 = UINT8_MAX;
uint32_t x816 = UINT32_MAX;
int64_t x829 = -1LL;
uint32_t x837 = 63335U;
uint8_t x838 = 28U;
volatile int32_t x842 = INT32_MIN;
uint64_t t170 = 2098068857881766920LLU;
int32_t x861 = 3;
static volatile int32_t t173 = -226808;
int64_t x871 = INT64_MIN;
uint64_t x872 = 1305965132753LLU;
volatile int64_t x877 = -931968LL;
volatile int16_t x879 = INT16_MIN;
int64_t x880 = -1LL;
int64_t t176 = -22879131335854LL;
static volatile uint64_t t178 = 66629118LLU;
uint64_t x908 = 7LLU;
volatile uint64_t t179 = 945744510LLU;
int64_t x914 = 24729117789399LL;
uint16_t x916 = UINT16_MAX;
volatile int64_t x921 = INT64_MIN;
volatile uint64_t x923 = UINT64_MAX;
static int64_t x933 = -7879689LL;
static uint64_t x938 = 1LLU;
static volatile int16_t x944 = INT16_MIN;
int16_t x952 = -2;
volatile uint16_t x956 = 229U;
static volatile uint64_t x957 = 55243976LLU;
volatile int64_t x963 = 19361717431264LL;
volatile uint8_t x964 = UINT8_MAX;
static uint64_t x968 = UINT64_MAX;
volatile int8_t x969 = INT8_MIN;
volatile int32_t t194 = -87011921;
volatile uint8_t x982 = UINT8_MAX;
int8_t x987 = INT8_MIN;
volatile int8_t x989 = INT8_MAX;
int64_t x990 = -1LL;


void f0(void) {
    	uint16_t x1 = UINT16_MAX;
	uint8_t x2 = UINT8_MAX;
	uint64_t x4 = 488587LLU;
	uint64_t t0 = 46562219909759911LLU;

    t0 = (x1+((x2==x3)-x4));

    if (t0 != 18446744073709128564LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MIN;
	volatile int16_t x6 = -1;
	int8_t x7 = 0;
	uint16_t x8 = 5253U;
	volatile int32_t t1 = 18893775;

    t1 = (x5+((x6==x7)-x8));

    if (t1 != -38021) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x13 = INT16_MIN;
	int64_t x14 = INT64_MIN;
	int16_t x15 = INT16_MIN;

    t2 = (x13+((x14==x15)-x16));

    if (t2 != -32771) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x19 = INT8_MAX;
	int16_t x20 = -1;

    t3 = (x17+((x18==x19)-x20));

    if (t3 != 114840297) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int32_t x25 = INT32_MIN;
	int16_t x27 = INT16_MAX;
	volatile uint32_t t4 = 7U;

    t4 = (x25+((x26==x27)-x28));

    if (t4 != 2082006828U) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x29 = -384667700;
	int16_t x32 = INT16_MIN;
	int32_t t5 = 166504072;

    t5 = (x29+((x30==x31)-x32));

    if (t5 != -384634932) { NG(); } else { ; }
	
}

void f6(void) {
    	static int64_t x33 = -1LL;
	static int16_t x34 = 424;
	int16_t x36 = -1;
	volatile int64_t t6 = 2972701148150LL;

    t6 = (x33+((x34==x35)-x36));

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x37 = 13;
	uint64_t x39 = 375475890371427LLU;
	volatile uint32_t t7 = 7U;

    t7 = (x37+((x38==x39)-x40));

    if (t7 != 4294967276U) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile uint64_t x41 = UINT64_MAX;
	int32_t x43 = 787336;
	int8_t x44 = INT8_MAX;
	uint64_t t8 = 6412005086516LLU;

    t8 = (x41+((x42==x43)-x44));

    if (t8 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint8_t x45 = 3U;
	uint64_t x46 = 0LLU;
	int64_t x47 = -302385LL;
	static uint32_t x48 = UINT32_MAX;

    t9 = (x45+((x46==x47)-x48));

    if (t9 != 4U) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x57 = INT64_MAX;
	static volatile int16_t x59 = INT16_MIN;
	int8_t x60 = INT8_MAX;
	int64_t t10 = 24LL;

    t10 = (x57+((x58==x59)-x60));

    if (t10 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint32_t x61 = 6341712U;
	static uint32_t x62 = 2829U;
	volatile int16_t x64 = INT16_MIN;
	uint32_t t11 = 422214895U;

    t11 = (x61+((x62==x63)-x64));

    if (t11 != 6374480U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x69 = 138U;
	static int64_t x70 = 0LL;
	uint8_t x71 = 6U;
	int64_t x72 = -10219849LL;
	volatile int64_t t12 = 28914968402576576LL;

    t12 = (x69+((x70==x71)-x72));

    if (t12 != 10219987LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x73 = -2;
	volatile uint64_t x74 = UINT64_MAX;
	volatile int32_t t13 = -1742144;

    t13 = (x73+((x74==x75)-x76));

    if (t13 != -257) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x77 = -116;
	int8_t x78 = INT8_MIN;
	static uint32_t x79 = 2424U;
	uint32_t x80 = 251U;
	uint32_t t14 = 11291U;

    t14 = (x77+((x78==x79)-x80));

    if (t14 != 4294966929U) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x82 = INT64_MIN;
	int32_t x83 = 111984862;
	uint64_t x84 = 9118839378203287845LLU;
	static uint64_t t15 = 1778445LLU;

    t15 = (x81+((x82==x83)-x84));

    if (t15 != 9327904695506263824LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x85 = INT16_MIN;
	uint8_t x86 = 7U;
	static uint8_t x87 = UINT8_MAX;
	uint64_t x88 = 28403510LLU;
	uint64_t t16 = 255LLU;

    t16 = (x85+((x86==x87)-x88));

    if (t16 != 18446744073681115338LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x89 = 1U;
	uint16_t x90 = UINT16_MAX;
	int64_t x91 = -33232864617385733LL;
	int8_t x92 = 2;
	volatile int32_t t17 = -234118976;

    t17 = (x89+((x90==x91)-x92));

    if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x93 = INT64_MIN;
	int16_t x94 = -1468;
	static uint64_t x96 = UINT64_MAX;
	uint64_t t18 = 4694120673LLU;

    t18 = (x93+((x94==x95)-x96));

    if (t18 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x98 = -1;
	static uint8_t x100 = UINT8_MAX;

    t19 = (x97+((x98==x99)-x100));

    if (t19 != 10147044412LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x101 = UINT32_MAX;
	int64_t x102 = -82177610LL;
	volatile int64_t x103 = 76717497592LL;
	uint8_t x104 = 1U;

    t20 = (x101+((x102==x103)-x104));

    if (t20 != 4294967294U) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x105 = INT32_MIN;
	uint8_t x106 = 17U;
	int8_t x107 = INT8_MIN;
	int8_t x108 = INT8_MIN;
	volatile int32_t t21 = 376;

    t21 = (x105+((x106==x107)-x108));

    if (t21 != -2147483520) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int64_t x109 = INT64_MIN;
	uint8_t x110 = 51U;
	int16_t x111 = -3;
	volatile int64_t t22 = 473394500184LL;

    t22 = (x109+((x110==x111)-x112));

    if (t22 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x113 = INT8_MIN;
	int8_t x114 = -27;
	int16_t x116 = INT16_MIN;
	volatile int32_t t23 = -9;

    t23 = (x113+((x114==x115)-x116));

    if (t23 != 32640) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x117 = INT16_MAX;
	uint8_t x118 = 34U;
	volatile uint64_t x119 = 2160368397092653LLU;
	volatile uint32_t x120 = 56650322U;
	static uint32_t t24 = 242U;

    t24 = (x117+((x118==x119)-x120));

    if (t24 != 4238349741U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x121 = UINT64_MAX;
	volatile int32_t x122 = 0;
	int32_t x124 = 51;
	static volatile uint64_t t25 = 948025LLU;

    t25 = (x121+((x122==x123)-x124));

    if (t25 != 18446744073709551564LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x125 = INT16_MIN;
	static uint16_t x126 = UINT16_MAX;
	static int32_t t26 = 46;

    t26 = (x125+((x126==x127)-x128));

    if (t26 != -32778) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x129 = INT32_MAX;
	volatile int16_t x130 = INT16_MAX;
	uint16_t x131 = UINT16_MAX;
	volatile int32_t t27 = -46;

    t27 = (x129+((x130==x131)-x132));

    if (t27 != 2147483645) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x137 = -13;
	static int16_t x138 = INT16_MIN;
	int16_t x139 = 41;
	volatile int8_t x140 = -1;
	volatile int32_t t28 = 28493;

    t28 = (x137+((x138==x139)-x140));

    if (t28 != -12) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x141 = UINT16_MAX;
	int32_t x142 = 206863;
	int16_t x143 = INT16_MIN;
	static int16_t x144 = INT16_MIN;
	int32_t t29 = -12805018;

    t29 = (x141+((x142==x143)-x144));

    if (t29 != 98303) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int64_t x145 = INT64_MIN;
	static int64_t x146 = -1LL;
	static int8_t x147 = INT8_MIN;
	int8_t x148 = INT8_MIN;
	static int64_t t30 = -839288LL;

    t30 = (x145+((x146==x147)-x148));

    if (t30 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint16_t x153 = 5U;
	uint8_t x154 = 13U;
	int16_t x155 = 6024;
	uint8_t x156 = UINT8_MAX;
	static volatile int32_t t31 = -99;

    t31 = (x153+((x154==x155)-x156));

    if (t31 != -250) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x159 = INT8_MAX;
	uint32_t x160 = 1195U;
	volatile uint32_t t32 = 7U;

    t32 = (x157+((x158==x159)-x160));

    if (t32 != 2147482453U) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x161 = 1U;
	static int32_t x163 = -29;
	static uint16_t x164 = 931U;
	static int32_t t33 = 2;

    t33 = (x161+((x162==x163)-x164));

    if (t33 != -930) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x166 = -588772193917LL;
	static uint64_t x167 = 878593305614LLU;
	uint16_t x168 = 6150U;

    t34 = (x165+((x166==x167)-x168));

    if (t34 != -6144) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x169 = -1;
	uint8_t x170 = 45U;
	int16_t x171 = -3891;
	static int8_t x172 = -1;
	volatile int32_t t35 = -12185;

    t35 = (x169+((x170==x171)-x172));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x174 = -1;
	static volatile int16_t x175 = 3653;
	static int8_t x176 = INT8_MAX;

    t36 = (x173+((x174==x175)-x176));

    if (t36 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x178 = 10;
	int8_t x179 = INT8_MAX;

    t37 = (x177+((x178==x179)-x180));

    if (t37 != -32895) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x181 = INT8_MIN;
	int16_t x182 = -5704;
	int8_t x184 = INT8_MIN;
	volatile int32_t t38 = 402608163;

    t38 = (x181+((x182==x183)-x184));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x185 = -1LL;
	volatile int32_t x186 = INT32_MIN;
	int32_t x188 = 7100;
	volatile int64_t t39 = 28543LL;

    t39 = (x185+((x186==x187)-x188));

    if (t39 != -7101LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x193 = -23;
	static int16_t x196 = -15599;
	volatile int32_t t40 = 4010305;

    t40 = (x193+((x194==x195)-x196));

    if (t40 != 15576) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x197 = INT8_MIN;
	int64_t x198 = INT64_MIN;
	int16_t x199 = INT16_MAX;
	static uint8_t x200 = 58U;
	volatile int32_t t41 = 406;

    t41 = (x197+((x198==x199)-x200));

    if (t41 != -186) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x201 = INT16_MAX;
	int64_t x202 = 441492LL;
	static int64_t x204 = 72LL;
	static volatile int64_t t42 = -1738224LL;

    t42 = (x201+((x202==x203)-x204));

    if (t42 != 32695LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x205 = 939718LL;
	uint32_t x206 = UINT32_MAX;
	uint32_t x207 = 509143274U;
	uint32_t x208 = UINT32_MAX;
	volatile int64_t t43 = -335057881507284213LL;

    t43 = (x205+((x206==x207)-x208));

    if (t43 != 939719LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x217 = INT64_MIN;
	static uint16_t x218 = UINT16_MAX;
	volatile int8_t x219 = INT8_MIN;
	int16_t x220 = 0;
	volatile int64_t t44 = INT64_MIN;

    t44 = (x217+((x218==x219)-x220));

    if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x221 = 39;
	int16_t x222 = INT16_MIN;
	volatile int16_t x223 = 441;
	static volatile int32_t x224 = INT32_MAX;

    t45 = (x221+((x222==x223)-x224));

    if (t45 != -2147483608) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x229 = INT16_MIN;
	uint32_t x230 = 2U;
	static int8_t x231 = INT8_MIN;
	int8_t x232 = -2;
	int32_t t46 = 14005973;

    t46 = (x229+((x230==x231)-x232));

    if (t46 != -32766) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x237 = 79818033606LLU;
	volatile int16_t x238 = INT16_MAX;
	uint32_t x240 = 1579918U;
	uint64_t t47 = 16673072LLU;

    t47 = (x237+((x238==x239)-x240));

    if (t47 != 84111420984LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int32_t t48 = 235;

    t48 = (x241+((x242==x243)-x244));

    if (t48 != -263) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x246 = 9962361383045LL;
	static int16_t x248 = INT16_MIN;
	volatile int32_t t49 = 0;

    t49 = (x245+((x246==x247)-x248));

    if (t49 != 65535) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint8_t x249 = 114U;
	uint32_t x251 = UINT32_MAX;
	static volatile uint8_t x252 = 0U;
	int32_t t50 = -1;

    t50 = (x249+((x250==x251)-x252));

    if (t50 != 114) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x253 = INT16_MIN;
	static uint8_t x254 = UINT8_MAX;
	int32_t x255 = INT32_MAX;
	int8_t x256 = INT8_MIN;
	volatile int32_t t51 = 23;

    t51 = (x253+((x254==x255)-x256));

    if (t51 != -32640) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x261 = -1;
	int64_t x262 = -1574LL;
	int32_t x263 = -1;
	volatile int16_t x264 = 6110;
	int32_t t52 = -149517;

    t52 = (x261+((x262==x263)-x264));

    if (t52 != -6111) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x266 = INT64_MIN;
	int32_t x267 = 420593;
	uint64_t x268 = 68879937908930981LLU;
	uint64_t t53 = 15714185228008528LLU;

    t53 = (x265+((x266==x267)-x268));

    if (t53 != 18377864140095587930LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile uint64_t x269 = 2072813690583578906LLU;
	int16_t x272 = -1;

    t54 = (x269+((x270==x271)-x272));

    if (t54 != 2072813690583578907LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x277 = INT64_MIN;
	volatile uint64_t t55 = 7099LLU;

    t55 = (x277+((x278==x279)-x280));

    if (t55 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x281 = UINT8_MAX;
	int8_t x283 = INT8_MAX;
	uint64_t x284 = 54748729LLU;
	uint64_t t56 = 27669293132245994LLU;

    t56 = (x281+((x282==x283)-x284));

    if (t56 != 18446744073654803142LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x285 = INT8_MIN;
	static int64_t x286 = INT64_MIN;
	uint32_t x287 = UINT32_MAX;
	uint32_t x288 = UINT32_MAX;
	volatile uint32_t t57 = 61U;

    t57 = (x285+((x286==x287)-x288));

    if (t57 != 4294967169U) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x289 = 661U;
	int8_t x290 = INT8_MIN;
	uint64_t x292 = 2459LLU;
	volatile uint64_t t58 = 7LLU;

    t58 = (x289+((x290==x291)-x292));

    if (t58 != 18446744073709549818LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x293 = UINT32_MAX;
	static int16_t x294 = INT16_MAX;
	int16_t x295 = INT16_MIN;
	static int16_t x296 = INT16_MIN;
	volatile uint32_t t59 = 0U;

    t59 = (x293+((x294==x295)-x296));

    if (t59 != 32767U) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x305 = INT64_MIN;
	static volatile int8_t x306 = -1;
	volatile int64_t x307 = 536LL;
	int8_t x308 = INT8_MIN;
	volatile int64_t t60 = 2LL;

    t60 = (x305+((x306==x307)-x308));

    if (t60 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x309 = 26895;
	int32_t x310 = -1;
	int32_t x311 = INT32_MIN;
	int16_t x312 = 225;
	static volatile int32_t t61 = -956;

    t61 = (x309+((x310==x311)-x312));

    if (t61 != 26670) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint16_t x317 = 2886U;
	int64_t x318 = -1LL;
	int64_t x319 = INT64_MIN;
	int64_t t62 = 248973710257203LL;

    t62 = (x317+((x318==x319)-x320));

    if (t62 != -733709893LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile uint64_t x325 = UINT64_MAX;
	static uint32_t x327 = 387679U;
	int8_t x328 = -1;
	uint64_t t63 = 864LLU;

    t63 = (x325+((x326==x327)-x328));

    if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint32_t x330 = 15U;
	int16_t x331 = INT16_MAX;
	int8_t x332 = INT8_MAX;
	static volatile uint32_t t64 = 236028375U;

    t64 = (x329+((x330==x331)-x332));

    if (t64 != 110396U) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int8_t x333 = 0;
	uint16_t x335 = 4595U;
	int32_t x336 = INT32_MAX;

    t65 = (x333+((x334==x335)-x336));

    if (t65 != -2147483647) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x337 = 23;
	int32_t x339 = INT32_MIN;
	volatile int8_t x340 = 37;
	int32_t t66 = 1698274;

    t66 = (x337+((x338==x339)-x340));

    if (t66 != -14) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x345 = 28;
	int8_t x346 = 1;
	int8_t x347 = INT8_MIN;
	int32_t x348 = INT32_MAX;

    t67 = (x345+((x346==x347)-x348));

    if (t67 != -2147483619) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x349 = INT16_MAX;
	uint64_t x350 = UINT64_MAX;
	static int64_t x351 = INT64_MIN;
	int32_t t68 = -236;

    t68 = (x349+((x350==x351)-x352));

    if (t68 != 32751) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x353 = -3;
	static int8_t x355 = -9;
	static int16_t x356 = INT16_MAX;
	volatile int32_t t69 = 3578;

    t69 = (x353+((x354==x355)-x356));

    if (t69 != -32770) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint8_t x358 = 79U;
	int32_t x360 = -559;
	static int32_t t70 = 50261;

    t70 = (x357+((x358==x359)-x360));

    if (t70 != 3465) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x361 = 4U;
	uint8_t x362 = UINT8_MAX;
	int64_t x364 = INT64_MAX;
	int64_t t71 = 12LL;

    t71 = (x361+((x362==x363)-x364));

    if (t71 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x365 = INT8_MIN;
	uint64_t x366 = 19576436970883LLU;
	int16_t x367 = -1631;
	static int64_t x368 = 1481538999LL;
	volatile int64_t t72 = 100629060699LL;

    t72 = (x365+((x366==x367)-x368));

    if (t72 != -1481539127LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x377 = INT8_MIN;
	int16_t x378 = -1;
	int16_t x379 = 189;
	volatile int32_t t73 = 1642506;

    t73 = (x377+((x378==x379)-x380));

    if (t73 != -255) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x381 = INT16_MIN;
	int32_t x382 = INT32_MAX;
	int32_t x383 = INT32_MIN;
	uint16_t x384 = UINT16_MAX;
	static volatile int32_t t74 = 108968061;

    t74 = (x381+((x382==x383)-x384));

    if (t74 != -98303) { NG(); } else { ; }
	
}

void f75(void) {
    	static int64_t x385 = -1LL;
	uint16_t x386 = 681U;
	volatile uint32_t x388 = 13465931U;
	volatile int64_t t75 = 6961207LL;

    t75 = (x385+((x386==x387)-x388));

    if (t75 != 4281501364LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x389 = INT16_MIN;
	int8_t x390 = INT8_MIN;
	static int64_t x391 = INT64_MIN;
	volatile int32_t t76 = 581225664;

    t76 = (x389+((x390==x391)-x392));

    if (t76 != -32774) { NG(); } else { ; }
	
}

void f77(void) {
    	static int64_t x393 = -9766357LL;
	static int32_t x394 = INT32_MIN;
	int32_t x395 = INT32_MAX;
	int64_t x396 = 1125904982LL;
	volatile int64_t t77 = 605238716LL;

    t77 = (x393+((x394==x395)-x396));

    if (t77 != -1135671339LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x397 = INT16_MIN;
	int16_t x398 = INT16_MIN;
	static volatile int8_t x399 = 5;
	volatile int8_t x400 = INT8_MAX;
	volatile int32_t t78 = -157;

    t78 = (x397+((x398==x399)-x400));

    if (t78 != -32895) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x401 = -27;
	int16_t x402 = INT16_MAX;
	int8_t x403 = INT8_MIN;
	int32_t x404 = -217380;
	int32_t t79 = 183426;

    t79 = (x401+((x402==x403)-x404));

    if (t79 != 217353) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x405 = INT8_MIN;
	static uint16_t x406 = 1U;
	int16_t x408 = -1;
	int32_t t80 = -950348;

    t80 = (x405+((x406==x407)-x408));

    if (t80 != -127) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x409 = -1LL;
	uint32_t x410 = 112162078U;
	uint16_t x411 = 2194U;
	int16_t x412 = 5883;
	int64_t t81 = 5984847185481LL;

    t81 = (x409+((x410==x411)-x412));

    if (t81 != -5884LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint32_t x413 = UINT32_MAX;
	volatile int16_t x414 = -13;
	int8_t x415 = -1;
	int16_t x416 = -34;
	volatile uint32_t t82 = 5U;

    t82 = (x413+((x414==x415)-x416));

    if (t82 != 33U) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x417 = INT32_MIN;
	static volatile uint64_t x418 = UINT64_MAX;
	int64_t x419 = 117215LL;
	volatile int8_t x420 = -11;
	int32_t t83 = 3;

    t83 = (x417+((x418==x419)-x420));

    if (t83 != -2147483637) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x421 = -1LL;
	int16_t x424 = -4067;
	volatile int64_t t84 = 48831LL;

    t84 = (x421+((x422==x423)-x424));

    if (t84 != 4066LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x425 = UINT64_MAX;
	volatile uint8_t x426 = 40U;
	uint16_t x428 = 3023U;
	uint64_t t85 = 830LLU;

    t85 = (x425+((x426==x427)-x428));

    if (t85 != 18446744073709548592LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x430 = 543U;
	uint64_t x431 = 48779127207LLU;
	static int16_t x432 = INT16_MAX;
	static volatile int32_t t86 = -4514907;

    t86 = (x429+((x430==x431)-x432));

    if (t86 != -32895) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x433 = INT8_MAX;
	uint16_t x435 = UINT16_MAX;
	volatile int32_t t87 = -1222;

    t87 = (x433+((x434==x435)-x436));

    if (t87 != -65408) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x437 = UINT8_MAX;
	volatile uint16_t x438 = UINT16_MAX;
	uint32_t x439 = 3554U;
	int64_t t88 = 25LL;

    t88 = (x437+((x438==x439)-x440));

    if (t88 != -9223372036854775552LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint32_t x441 = 773006U;
	uint8_t x442 = UINT8_MAX;
	static int16_t x443 = INT16_MIN;
	uint16_t x444 = 19U;
	volatile uint32_t t89 = 35294180U;

    t89 = (x441+((x442==x443)-x444));

    if (t89 != 772987U) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x445 = INT8_MAX;
	int32_t x446 = INT32_MIN;
	static int16_t x447 = INT16_MAX;
	volatile uint32_t x448 = 441468U;
	uint32_t t90 = 1U;

    t90 = (x445+((x446==x447)-x448));

    if (t90 != 4294525955U) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int64_t x454 = -1LL;
	volatile uint32_t x455 = 0U;
	volatile int64_t t91 = 55003LL;

    t91 = (x453+((x454==x455)-x456));

    if (t91 != 950696741406325LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile int16_t x457 = -1;
	int16_t x458 = -1;
	int16_t x459 = INT16_MIN;
	volatile int32_t t92 = 127;

    t92 = (x457+((x458==x459)-x460));

    if (t92 != -65536) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint32_t x461 = 66695104U;
	int8_t x462 = -1;
	int8_t x463 = -1;
	uint8_t x464 = 63U;
	uint32_t t93 = 11471U;

    t93 = (x461+((x462==x463)-x464));

    if (t93 != 66695042U) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x469 = 4125921643739268LLU;
	int32_t x470 = -1;
	static int8_t x471 = 1;
	int8_t x472 = INT8_MIN;
	uint64_t t94 = 1233537305497504LLU;

    t94 = (x469+((x470==x471)-x472));

    if (t94 != 4125921643739396LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x474 = INT64_MAX;
	int32_t x475 = INT32_MIN;
	volatile int8_t x476 = -5;
	volatile int32_t t95 = -1;

    t95 = (x473+((x474==x475)-x476));

    if (t95 != 36176042) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x479 = INT32_MAX;
	uint64_t x480 = 279485733587LLU;

    t96 = (x477+((x478==x479)-x480));

    if (t96 != 18446743794223831676LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x481 = INT8_MIN;
	volatile int8_t x482 = 1;
	int32_t x483 = -1;
	volatile int32_t x484 = 28618716;
	int32_t t97 = -322875142;

    t97 = (x481+((x482==x483)-x484));

    if (t97 != -28618844) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x485 = INT32_MIN;
	uint32_t x486 = 6U;
	volatile int32_t x487 = INT32_MIN;
	int8_t x488 = INT8_MIN;
	volatile int32_t t98 = 40558;

    t98 = (x485+((x486==x487)-x488));

    if (t98 != -2147483520) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x490 = -127;
	uint64_t x492 = 22528388LLU;
	uint64_t t99 = 75241848466646183LLU;

    t99 = (x489+((x490==x491)-x492));

    if (t99 != 18446744073687023227LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x493 = 37;
	int8_t x494 = INT8_MIN;
	volatile uint8_t x495 = 0U;
	int32_t t100 = 0;

    t100 = (x493+((x494==x495)-x496));

    if (t100 != -65498) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x501 = 612;
	uint16_t x502 = UINT16_MAX;
	uint16_t x503 = UINT16_MAX;
	volatile int32_t t101 = 439;

    t101 = (x501+((x502==x503)-x504));

    if (t101 != -2147483034) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x505 = INT8_MIN;
	volatile uint64_t x506 = UINT64_MAX;
	uint32_t x507 = UINT32_MAX;
	int8_t x508 = INT8_MIN;
	volatile int32_t t102 = 0;

    t102 = (x505+((x506==x507)-x508));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint64_t x510 = 529481861LLU;
	uint32_t x511 = UINT32_MAX;
	volatile int8_t x512 = 3;

    t103 = (x509+((x510==x511)-x512));

    if (t103 != -4LL) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x513 = -1LL;
	static int32_t x514 = INT32_MIN;
	int8_t x516 = 5;
	int64_t t104 = -96772LL;

    t104 = (x513+((x514==x515)-x516));

    if (t104 != -6LL) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint8_t x518 = 40U;
	int16_t x519 = INT16_MIN;
	int16_t x520 = -1;
	int32_t t105 = -69936;

    t105 = (x517+((x518==x519)-x520));

    if (t105 != -2147483647) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x530 = INT64_MAX;
	uint64_t x531 = 267779LLU;
	uint64_t t106 = 24LLU;

    t106 = (x529+((x530==x531)-x532));

    if (t106 != 18446744067446316834LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x534 = INT8_MAX;
	int32_t x535 = -15045996;
	uint8_t x536 = UINT8_MAX;
	volatile int32_t t107 = -86;

    t107 = (x533+((x534==x535)-x536));

    if (t107 != -251) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x537 = UINT16_MAX;
	int16_t x538 = -1;
	int64_t x539 = INT64_MIN;
	volatile int16_t x540 = -1;
	int32_t t108 = 27805;

    t108 = (x537+((x538==x539)-x540));

    if (t108 != 65536) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x541 = 54U;
	int64_t x542 = -22515LL;
	volatile int8_t x544 = 2;

    t109 = (x541+((x542==x543)-x544));

    if (t109 != 52) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x545 = -1LL;
	uint16_t x546 = 0U;
	static int16_t x547 = INT16_MIN;
	int16_t x548 = -462;

    t110 = (x545+((x546==x547)-x548));

    if (t110 != 461LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x549 = 7677086275LL;
	int32_t x551 = INT32_MAX;
	uint32_t x552 = 227801832U;
	int64_t t111 = 7145884162LL;

    t111 = (x549+((x550==x551)-x552));

    if (t111 != 11744251739LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x554 = -7193191124854031LL;
	int64_t x555 = INT64_MIN;
	uint8_t x556 = 0U;
	volatile int32_t t112 = -3202;

    t112 = (x553+((x554==x555)-x556));

    if (t112 != -32768) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint32_t x557 = 41U;
	static int64_t x558 = INT64_MAX;
	static int8_t x559 = 53;
	int8_t x560 = INT8_MIN;
	static volatile uint32_t t113 = 7763U;

    t113 = (x557+((x558==x559)-x560));

    if (t113 != 169U) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x565 = 1U;
	static volatile int8_t x566 = -1;
	volatile int16_t x567 = 7924;
	uint32_t x568 = 26348165U;
	static volatile uint32_t t114 = 62112294U;

    t114 = (x565+((x566==x567)-x568));

    if (t114 != 4268619132U) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x570 = 1U;
	int16_t x571 = 156;
	static int32_t x572 = -1;
	volatile int32_t t115 = 3;

    t115 = (x569+((x570==x571)-x572));

    if (t115 != 672) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x577 = UINT32_MAX;
	int16_t x578 = -65;
	int64_t x579 = INT64_MIN;
	static int32_t x580 = INT32_MAX;
	static uint32_t t116 = 18513U;

    t116 = (x577+((x578==x579)-x580));

    if (t116 != 2147483648U) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x581 = INT64_MIN;
	int32_t x582 = INT32_MAX;
	static int8_t x583 = INT8_MIN;
	static int16_t x584 = -1;
	int64_t t117 = -216354LL;

    t117 = (x581+((x582==x583)-x584));

    if (t117 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x586 = INT8_MIN;
	int8_t x587 = -1;

    t118 = (x585+((x586==x587)-x588));

    if (t118 != 3733LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint64_t x589 = 3932816LLU;
	volatile int32_t x591 = INT32_MIN;
	static volatile int8_t x592 = INT8_MAX;
	volatile uint64_t t119 = 802216714LLU;

    t119 = (x589+((x590==x591)-x592));

    if (t119 != 3932689LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x593 = INT16_MIN;
	int32_t x594 = -177731740;
	int8_t x595 = -1;
	volatile uint8_t x596 = UINT8_MAX;
	int32_t t120 = 234;

    t120 = (x593+((x594==x595)-x596));

    if (t120 != -33023) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x598 = 201408108U;
	static int32_t x599 = -1;
	int16_t x600 = -2;
	static volatile int32_t t121 = 361910;

    t121 = (x597+((x598==x599)-x600));

    if (t121 != 77) { NG(); } else { ; }
	
}

void f122(void) {
    	static int8_t x602 = INT8_MAX;
	int64_t x603 = -1LL;
	int8_t x604 = INT8_MIN;
	int32_t t122 = -50;

    t122 = (x601+((x602==x603)-x604));

    if (t122 != 127) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x606 = -29;
	int32_t x607 = -13342918;
	uint16_t x608 = 967U;
	int32_t t123 = 39;

    t123 = (x605+((x606==x607)-x608));

    if (t123 != 2147482680) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x617 = 0U;
	int16_t x619 = INT16_MIN;
	int32_t x620 = -1;
	volatile int32_t t124 = -139833;

    t124 = (x617+((x618==x619)-x620));

    if (t124 != 2) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x621 = -27457057LL;
	int8_t x622 = 1;
	volatile uint32_t x623 = UINT32_MAX;
	static uint32_t x624 = 504622U;
	volatile int64_t t125 = 285891LL;

    t125 = (x621+((x622==x623)-x624));

    if (t125 != 4267005617LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x625 = 29637549U;
	static int16_t x627 = -54;
	int8_t x628 = INT8_MIN;
	static uint32_t t126 = 247852U;

    t126 = (x625+((x626==x627)-x628));

    if (t126 != 29637677U) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x629 = -1;
	volatile int16_t x631 = INT16_MAX;
	volatile int64_t x632 = -148304LL;
	int64_t t127 = -13535LL;

    t127 = (x629+((x630==x631)-x632));

    if (t127 != 148303LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x633 = 3LL;
	static int64_t x634 = -1LL;
	volatile uint32_t x636 = UINT32_MAX;
	int64_t t128 = 10055056038509721LL;

    t128 = (x633+((x634==x635)-x636));

    if (t128 != 4LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x637 = UINT64_MAX;
	uint8_t x638 = 1U;
	volatile int8_t x640 = INT8_MAX;
	volatile uint64_t t129 = 232233LLU;

    t129 = (x637+((x638==x639)-x640));

    if (t129 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x641 = -1;
	uint8_t x642 = UINT8_MAX;
	int16_t x643 = -1003;
	static int8_t x644 = INT8_MAX;
	int32_t t130 = -31370;

    t130 = (x641+((x642==x643)-x644));

    if (t130 != -128) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x646 = 13U;
	int16_t x647 = -1;
	int8_t x648 = INT8_MIN;

    t131 = (x645+((x646==x647)-x648));

    if (t131 != 270) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x649 = 8;
	int16_t x650 = INT16_MIN;
	int16_t x651 = INT16_MIN;
	int32_t t132 = -51937;

    t132 = (x649+((x650==x651)-x652));

    if (t132 != 111) { NG(); } else { ; }
	
}

void f133(void) {
    	static int64_t x653 = -12587540LL;
	int64_t x655 = -3LL;
	static volatile int64_t t133 = 886729559471030LL;

    t133 = (x653+((x654==x655)-x656));

    if (t133 != -12554772LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x657 = 1;
	static int64_t x658 = -1LL;
	uint16_t x659 = 2U;
	static uint16_t x660 = UINT16_MAX;
	int32_t t134 = 15;

    t134 = (x657+((x658==x659)-x660));

    if (t134 != -65534) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x661 = 86U;
	int32_t x662 = -99790;
	volatile int16_t x664 = -1;

    t135 = (x661+((x662==x663)-x664));

    if (t135 != 87) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x665 = -1;
	int16_t x667 = -314;
	static uint16_t x668 = 2U;
	int32_t t136 = -379;

    t136 = (x665+((x666==x667)-x668));

    if (t136 != -3) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x672 = -58;
	volatile int32_t t137 = -407902;

    t137 = (x669+((x670==x671)-x672));

    if (t137 != 56) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x673 = 1792;
	int8_t x674 = -2;
	int64_t x675 = INT64_MIN;
	int16_t x676 = 362;

    t138 = (x673+((x674==x675)-x676));

    if (t138 != 1430) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t x677 = -1171022;
	int16_t x678 = INT16_MAX;
	uint8_t x679 = 1U;
	volatile uint64_t t139 = 40592207818359583LLU;

    t139 = (x677+((x678==x679)-x680));

    if (t139 != 18446744073708380549LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x690 = -82597982;
	int64_t x692 = INT64_MAX;
	volatile int64_t t140 = 1460823296661576LL;

    t140 = (x689+((x690==x691)-x692));

    if (t140 != -9223372036854775775LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x693 = INT32_MIN;
	uint64_t x694 = UINT64_MAX;
	int8_t x695 = -1;
	int64_t x696 = -170670919536LL;
	static int64_t t141 = -1LL;

    t141 = (x693+((x694==x695)-x696));

    if (t141 != 168523435889LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x706 = 1;
	uint32_t x707 = 15180415U;
	volatile int16_t x708 = 62;

    t142 = (x705+((x706==x707)-x708));

    if (t142 != -63) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x709 = INT8_MIN;
	int64_t x710 = -1LL;
	uint8_t x711 = UINT8_MAX;
	int32_t x712 = -1;

    t143 = (x709+((x710==x711)-x712));

    if (t143 != -127) { NG(); } else { ; }
	
}

void f144(void) {
    	static int32_t x713 = 2;
	int64_t x714 = -1115479829809LL;
	uint8_t x715 = 22U;
	static int64_t x716 = -45LL;

    t144 = (x713+((x714==x715)-x716));

    if (t144 != 47LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x718 = 7523290291510LLU;
	uint8_t x719 = 101U;
	uint32_t x720 = UINT32_MAX;
	volatile uint64_t t145 = 734006LLU;

    t145 = (x717+((x718==x719)-x720));

    if (t145 != 12642864734869LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x725 = INT8_MIN;
	uint16_t x726 = UINT16_MAX;
	int64_t x727 = INT64_MAX;
	uint16_t x728 = UINT16_MAX;
	int32_t t146 = -386020382;

    t146 = (x725+((x726==x727)-x728));

    if (t146 != -65663) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x730 = -1;
	static uint8_t x731 = 0U;
	static uint32_t x732 = UINT32_MAX;

    t147 = (x729+((x730==x731)-x732));

    if (t147 != 65536U) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x741 = INT16_MIN;
	static int64_t x742 = INT64_MIN;
	volatile uint16_t x744 = 2U;

    t148 = (x741+((x742==x743)-x744));

    if (t148 != -32770) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x747 = INT8_MIN;
	volatile int64_t t149 = 12451641LL;

    t149 = (x745+((x746==x747)-x748));

    if (t149 != -2LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x750 = 0U;
	volatile int64_t x751 = INT64_MIN;
	uint64_t x752 = UINT64_MAX;
	uint64_t t150 = 47772294959656LLU;

    t150 = (x749+((x750==x751)-x752));

    if (t150 != 0LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int64_t x757 = -17645980LL;
	int64_t x758 = INT64_MIN;
	int32_t x759 = -1;
	static int16_t x760 = 1735;
	volatile int64_t t151 = -3843010860415LL;

    t151 = (x757+((x758==x759)-x760));

    if (t151 != -17647715LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x761 = 0U;
	int8_t x762 = INT8_MAX;
	int64_t x763 = -32517048002LL;
	int16_t x764 = INT16_MAX;
	volatile int32_t t152 = 5;

    t152 = (x761+((x762==x763)-x764));

    if (t152 != -32767) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x765 = INT16_MAX;
	volatile int32_t x766 = INT32_MIN;
	volatile int32_t x767 = 1;

    t153 = (x765+((x766==x767)-x768));

    if (t153 != 32768U) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x769 = -1;
	static int64_t x770 = -1LL;
	int32_t x771 = 35267;
	uint64_t x772 = 2385376651787039944LLU;
	static volatile uint64_t t154 = 78946601968246596LLU;

    t154 = (x769+((x770==x771)-x772));

    if (t154 != 16061367421922511671LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int32_t x777 = -240480;
	int32_t x778 = 1;
	static int16_t x779 = -1;
	volatile int16_t x780 = INT16_MIN;
	int32_t t155 = 60058154;

    t155 = (x777+((x778==x779)-x780));

    if (t155 != -207712) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x781 = 336478895847LL;
	int8_t x782 = INT8_MIN;
	static volatile uint16_t x783 = 52U;
	uint64_t x784 = 5581433817412491LLU;

    t156 = (x781+((x782==x783)-x784));

    if (t156 != 18441162976371034972LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x785 = -7;
	static int32_t x786 = 20971350;
	uint64_t x787 = UINT64_MAX;
	static int8_t x788 = INT8_MIN;
	volatile int32_t t157 = -1163037;

    t157 = (x785+((x786==x787)-x788));

    if (t157 != 121) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x789 = INT8_MIN;
	volatile int8_t x790 = -4;
	uint64_t x791 = 580LLU;
	static int32_t x792 = 5256;
	volatile int32_t t158 = 161194;

    t158 = (x789+((x790==x791)-x792));

    if (t158 != -5384) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x793 = INT32_MIN;
	int64_t x796 = -14102267335LL;
	int64_t t159 = 6594250356626LL;

    t159 = (x793+((x794==x795)-x796));

    if (t159 != 11954783687LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x798 = 1;
	volatile int32_t x799 = 1184760;
	static uint64_t x800 = UINT64_MAX;
	volatile uint64_t t160 = 146LLU;

    t160 = (x797+((x798==x799)-x800));

    if (t160 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile uint8_t x801 = 40U;
	int8_t x802 = -1;
	int8_t x804 = INT8_MAX;
	volatile int32_t t161 = -127841119;

    t161 = (x801+((x802==x803)-x804));

    if (t161 != -87) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x805 = UINT16_MAX;
	static int64_t x806 = 2705529629374592LL;
	int64_t x807 = 0LL;
	volatile int8_t x808 = -1;
	int32_t t162 = 13;

    t162 = (x805+((x806==x807)-x808));

    if (t162 != 65536) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint32_t x809 = 535698845U;
	int8_t x811 = INT8_MAX;
	int8_t x812 = -1;
	static volatile uint32_t t163 = 43193517U;

    t163 = (x809+((x810==x811)-x812));

    if (t163 != 535698846U) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x813 = INT16_MIN;
	int16_t x814 = INT16_MAX;
	int32_t x815 = INT32_MIN;
	uint32_t t164 = 1281451U;

    t164 = (x813+((x814==x815)-x816));

    if (t164 != 4294934529U) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x817 = INT16_MIN;
	volatile int32_t x818 = INT32_MIN;
	int64_t x819 = 5472375593988LL;
	int32_t x820 = 2280;
	volatile int32_t t165 = 675602;

    t165 = (x817+((x818==x819)-x820));

    if (t165 != -35048) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x825 = -485LL;
	int16_t x826 = -15;
	int8_t x827 = INT8_MAX;
	int32_t x828 = -1;
	volatile int64_t t166 = 107739LL;

    t166 = (x825+((x826==x827)-x828));

    if (t166 != -484LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x830 = -549286860487LL;
	int16_t x831 = INT16_MIN;
	int64_t x832 = -31283201LL;
	int64_t t167 = 166732610700LL;

    t167 = (x829+((x830==x831)-x832));

    if (t167 != 31283200LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x839 = INT16_MIN;
	static int16_t x840 = -224;
	static volatile uint32_t t168 = 2304503U;

    t168 = (x837+((x838==x839)-x840));

    if (t168 != 63559U) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x841 = 32540531741LLU;
	int64_t x843 = INT64_MIN;
	uint16_t x844 = 3775U;
	uint64_t t169 = 4616050011401908LLU;

    t169 = (x841+((x842==x843)-x844));

    if (t169 != 32540527966LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint32_t x845 = 1647U;
	volatile uint16_t x846 = 7509U;
	uint64_t x847 = 2423861563260LLU;
	static uint64_t x848 = 17774436LLU;

    t170 = (x845+((x846==x847)-x848));

    if (t170 != 18446744073691778827LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x849 = 1;
	uint16_t x850 = 221U;
	int16_t x851 = -1;
	uint64_t x852 = UINT64_MAX;
	static uint64_t t171 = 316005823981901671LLU;

    t171 = (x849+((x850==x851)-x852));

    if (t171 != 2LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x853 = -30189874;
	volatile int8_t x854 = INT8_MIN;
	volatile uint8_t x855 = 14U;
	static int64_t x856 = 2439740LL;
	static int64_t t172 = 28854366897983779LL;

    t172 = (x853+((x854==x855)-x856));

    if (t172 != -32629614LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint16_t x862 = 2704U;
	uint16_t x863 = 175U;
	int16_t x864 = -13;

    t173 = (x861+((x862==x863)-x864));

    if (t173 != 16) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x869 = UINT64_MAX;
	uint16_t x870 = UINT16_MAX;
	uint64_t t174 = 32964597448LLU;

    t174 = (x869+((x870==x871)-x872));

    if (t174 != 18446742767744418862LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x873 = INT16_MIN;
	int32_t x874 = 3702;
	volatile uint64_t x875 = UINT64_MAX;
	uint32_t x876 = 124U;
	static uint32_t t175 = 7007U;

    t175 = (x873+((x874==x875)-x876));

    if (t175 != 4294934404U) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x878 = INT8_MIN;

    t176 = (x877+((x878==x879)-x880));

    if (t176 != -931967LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static int64_t x881 = -5804361673155120LL;
	int32_t x882 = -1;
	static uint32_t x883 = UINT32_MAX;
	int8_t x884 = 7;
	volatile int64_t t177 = 1344093172722253LL;

    t177 = (x881+((x882==x883)-x884));

    if (t177 != -5804361673155126LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x889 = INT64_MIN;
	uint64_t x890 = 503LLU;
	volatile int8_t x891 = INT8_MAX;
	static uint64_t x892 = 10950107603LLU;

    t178 = (x889+((x890==x891)-x892));

    if (t178 != 9223372025904668205LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x905 = 0;
	uint32_t x906 = 1984440482U;
	static int16_t x907 = INT16_MIN;

    t179 = (x905+((x906==x907)-x908));

    if (t179 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x909 = -1;
	static int8_t x910 = INT8_MIN;
	static int32_t x911 = -4112803;
	static volatile uint16_t x912 = UINT16_MAX;
	volatile int32_t t180 = -116618;

    t180 = (x909+((x910==x911)-x912));

    if (t180 != -65536) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x913 = -2;
	int64_t x915 = -181096833994LL;
	int32_t t181 = -65060630;

    t181 = (x913+((x914==x915)-x916));

    if (t181 != -65537) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x917 = INT8_MIN;
	uint64_t x918 = UINT64_MAX;
	int64_t x919 = INT64_MIN;
	int16_t x920 = INT16_MIN;
	int32_t t182 = 25287429;

    t182 = (x917+((x918==x919)-x920));

    if (t182 != 32640) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x922 = -1LL;
	int64_t x924 = 1LL;
	static volatile int64_t t183 = INT64_MIN;

    t183 = (x921+((x922==x923)-x924));

    if (t183 != INT64_MIN) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x929 = 1704574674LL;
	uint32_t x930 = 182642442U;
	static int64_t x931 = -226965389050772139LL;
	static volatile int64_t x932 = INT64_MAX;
	int64_t t184 = -172612779632LL;

    t184 = (x929+((x930==x931)-x932));

    if (t184 != -9223372035150201133LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x934 = 0U;
	volatile uint16_t x935 = 5U;
	uint8_t x936 = 1U;
	static int64_t t185 = 73553633634749824LL;

    t185 = (x933+((x934==x935)-x936));

    if (t185 != -7879690LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x937 = -1;
	uint64_t x939 = 200890899492451400LLU;
	static uint64_t x940 = 59635310743759174LLU;
	uint64_t t186 = 162570638LLU;

    t186 = (x937+((x938==x939)-x940));

    if (t186 != 18387108762965792441LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x941 = INT32_MIN;
	int8_t x942 = INT8_MIN;
	int8_t x943 = -1;
	int32_t t187 = 3551;

    t187 = (x941+((x942==x943)-x944));

    if (t187 != -2147450880) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x945 = 7;
	int64_t x946 = -709520564563LL;
	int8_t x947 = 0;
	int16_t x948 = 29;
	volatile int32_t t188 = 45133076;

    t188 = (x945+((x946==x947)-x948));

    if (t188 != -22) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x949 = -2694;
	static volatile uint8_t x950 = UINT8_MAX;
	int32_t x951 = INT32_MIN;
	volatile int32_t t189 = -7305;

    t189 = (x949+((x950==x951)-x952));

    if (t189 != -2692) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x953 = INT64_MAX;
	int8_t x954 = -26;
	static volatile int8_t x955 = INT8_MIN;
	volatile int64_t t190 = 1976800504901645596LL;

    t190 = (x953+((x954==x955)-x956));

    if (t190 != 9223372036854775578LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x958 = INT32_MAX;
	static int64_t x959 = -1LL;
	int32_t x960 = 10226558;
	static uint64_t t191 = 67015727478114767LLU;

    t191 = (x957+((x958==x959)-x960));

    if (t191 != 45017418LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x961 = -1LL;
	uint8_t x962 = 0U;
	volatile int64_t t192 = -38929862852594LL;

    t192 = (x961+((x962==x963)-x964));

    if (t192 != -256LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x965 = INT16_MAX;
	volatile int32_t x966 = -4784;
	int64_t x967 = INT64_MIN;
	volatile uint64_t t193 = 71734718485731LLU;

    t193 = (x965+((x966==x967)-x968));

    if (t193 != 32768LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x970 = -4;
	int8_t x971 = INT8_MAX;
	int8_t x972 = INT8_MIN;

    t194 = (x969+((x970==x971)-x972));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x973 = 133445568U;
	uint8_t x974 = 123U;
	uint64_t x975 = UINT64_MAX;
	volatile int64_t x976 = INT64_MAX;
	static int64_t t195 = 11590144942595427LL;

    t195 = (x973+((x974==x975)-x976));

    if (t195 != -9223372036721330239LL) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint32_t x981 = 9198357U;
	uint64_t x983 = 24884470015LLU;
	int64_t x984 = 8479839977903931LL;
	volatile int64_t t196 = 757091LL;

    t196 = (x981+((x982==x983)-x984));

    if (t196 != -8479839968705574LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static int32_t x985 = -1;
	volatile uint64_t x986 = UINT64_MAX;
	volatile uint16_t x988 = 4U;
	volatile int32_t t197 = -160079442;

    t197 = (x985+((x986==x987)-x988));

    if (t197 != -5) { NG(); } else { ; }
	
}

void f198(void) {
    	static int8_t x991 = 5;
	static uint8_t x992 = 42U;
	static volatile int32_t t198 = 56081098;

    t198 = (x989+((x990==x991)-x992));

    if (t198 != 85) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x993 = -1;
	int32_t x994 = INT32_MIN;
	uint64_t x995 = 335809LLU;
	int16_t x996 = 0;
	int32_t t199 = 216793136;

    t199 = (x993+((x994==x995)-x996));

    if (t199 != -1) { NG(); } else { ; }
	
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

