
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

int8_t x1 = 8;
volatile uint8_t x9 = 5U;
static volatile uint16_t x10 = 5242U;
uint8_t x23 = UINT8_MAX;
static uint16_t x25 = 2U;
int8_t x34 = INT8_MAX;
int64_t x35 = INT64_MIN;
volatile int16_t x41 = INT16_MAX;
int32_t x43 = INT32_MAX;
int8_t x56 = -1;
static volatile uint8_t x58 = UINT8_MAX;
uint8_t x60 = UINT8_MAX;
volatile int32_t t13 = 1;
volatile int8_t x62 = 7;
int32_t x68 = INT32_MIN;
static uint8_t x73 = UINT8_MAX;
int8_t x79 = 3;
volatile uint64_t t19 = 1840511895LLU;
int16_t x86 = -255;
int32_t x88 = -4608;
static int64_t x99 = INT64_MIN;
uint8_t x102 = UINT8_MAX;
int64_t x103 = INT64_MAX;
int16_t x104 = INT16_MAX;
static int16_t x105 = INT16_MIN;
static int32_t x108 = -89270;
int16_t x110 = INT16_MAX;
uint8_t x111 = UINT8_MAX;
int64_t x112 = INT64_MIN;
int8_t x116 = -1;
static uint16_t x117 = 30U;
uint64_t t28 = 389690723LLU;
uint8_t x121 = UINT8_MAX;
volatile uint16_t x127 = 342U;
uint32_t x133 = 4U;
uint8_t x134 = UINT8_MAX;
static volatile int64_t t32 = 5439919958685LL;
int32_t x139 = INT32_MAX;
int16_t x149 = 3;
int8_t x153 = -11;
int8_t x157 = INT8_MAX;
uint16_t x164 = UINT16_MAX;
int32_t t39 = 2066377;
uint16_t x174 = 25863U;
uint64_t x189 = UINT64_MAX;
int32_t x193 = 56825;
volatile uint32_t t43 = 3897U;
uint16_t x203 = UINT16_MAX;
volatile uint8_t x204 = UINT8_MAX;
volatile uint32_t t44 = 612335725U;
volatile int8_t x206 = INT8_MIN;
static int8_t x230 = -14;
int64_t x249 = INT64_MIN;
static uint8_t x250 = 2U;
int32_t x251 = 466015;
int32_t x252 = INT32_MIN;
static uint64_t x255 = UINT64_MAX;
int16_t x268 = -1;
static volatile uint32_t t58 = 431169U;
static int16_t x283 = INT16_MAX;
int8_t x289 = INT8_MIN;
uint16_t x291 = 11U;
volatile int32_t x296 = -1;
int64_t x299 = INT64_MIN;
uint64_t x305 = 4424LLU;
int64_t x307 = -124563145321LL;
int64_t x325 = -1LL;
static volatile int64_t t70 = -2068459985LL;
uint32_t t71 = 85589U;
static int16_t x345 = -1;
uint16_t x349 = UINT16_MAX;
int8_t x360 = 5;
volatile int64_t t76 = 165136197937989LL;
int64_t x365 = INT64_MAX;
int8_t x367 = INT8_MAX;
int64_t x376 = -747LL;
int64_t t80 = -58043672281LL;
volatile int32_t x380 = -107225034;
static uint16_t x383 = UINT16_MAX;
int32_t x390 = INT32_MIN;
int64_t t84 = 4402053477996876590LL;
static int8_t x393 = -1;
static volatile int32_t t85 = 0;
int16_t x406 = INT16_MIN;
static int8_t x407 = -1;
static uint16_t x409 = 61U;
int32_t x410 = 0;
int64_t x413 = -1LL;
static volatile int8_t x414 = INT8_MIN;
volatile uint32_t x415 = 7U;
volatile int16_t x423 = 2;
int16_t x424 = INT16_MAX;
int8_t x427 = INT8_MAX;
int8_t x436 = INT8_MIN;
static int64_t t97 = -8073471843LL;
int64_t x452 = -1LL;
int8_t x460 = INT8_MIN;
volatile int32_t x461 = -13;
int8_t x462 = 33;
volatile int64_t x463 = INT64_MIN;
volatile uint8_t x464 = 1U;
int16_t x475 = -5;
volatile int32_t t104 = 11018;
volatile int64_t t106 = 311096373LL;
static int8_t x485 = INT8_MIN;
int8_t x492 = -1;
int16_t x493 = 8938;
uint32_t x497 = UINT32_MAX;
uint64_t x501 = 735824641410042555LLU;
int32_t x514 = INT32_MIN;
static uint8_t x520 = 26U;
int16_t x529 = -68;
int8_t x545 = 1;
uint8_t x556 = UINT8_MAX;
static volatile int64_t t121 = -679568LL;
uint16_t x562 = UINT16_MAX;
int8_t x571 = -3;
volatile int64_t t125 = 4021LL;
int32_t x587 = INT32_MIN;
int16_t x591 = -3815;
volatile uint64_t t130 = 218237884993LLU;
static int32_t x605 = INT32_MIN;
static int8_t x606 = INT8_MIN;
int64_t x607 = 11406053472543LL;
static int64_t t132 = 224169347003504LL;
static int16_t x612 = INT16_MAX;
volatile uint16_t x616 = 721U;
volatile int32_t t134 = -19;
volatile int8_t x619 = -1;
int64_t x620 = INT64_MIN;
static int8_t x627 = INT8_MIN;
int8_t x646 = -1;
volatile int16_t x650 = INT16_MAX;
static uint32_t x680 = UINT32_MAX;
uint32_t t144 = 38U;
int16_t x681 = 0;
int16_t x687 = -347;
volatile uint64_t x690 = UINT64_MAX;
int64_t x692 = INT64_MAX;
int64_t x694 = 24LL;
static uint8_t x696 = 17U;
int16_t x701 = -122;
uint16_t x702 = 11598U;
int8_t x704 = -1;
int32_t x707 = -420;
static int16_t x708 = 186;
uint32_t x709 = 0U;
volatile uint32_t t153 = 3692646U;
static int8_t x727 = INT8_MIN;
int32_t x728 = 0;
static volatile int32_t x729 = INT32_MIN;
uint8_t x763 = 5U;
int32_t t161 = -8;
int32_t x777 = -1;
volatile int8_t x778 = INT8_MIN;
volatile int32_t x779 = 25600;
volatile int32_t t162 = 19104062;
volatile uint64_t x786 = 107297LLU;
volatile uint8_t x789 = UINT8_MAX;
uint32_t x797 = 374197U;
uint64_t t167 = 1377083LLU;
static volatile int32_t x803 = INT32_MIN;
volatile int16_t x806 = -4;
volatile int64_t t169 = -5LL;
int8_t x809 = -18;
int8_t x815 = -1;
int32_t x817 = 553;
volatile uint64_t x819 = 507522563232348LLU;
int8_t x825 = INT8_MIN;
volatile int16_t x826 = 2;
uint16_t x830 = UINT16_MAX;
uint8_t x842 = 45U;
static uint32_t x843 = 26797U;
uint64_t x844 = 560495LLU;
volatile uint32_t x856 = 5483489U;
uint64_t t181 = 11813LLU;
volatile int64_t t182 = 40676391833748LL;
volatile int64_t x874 = INT64_MAX;
int16_t x894 = -1;
int8_t x895 = INT8_MIN;
int8_t x896 = INT8_MIN;
volatile int32_t x901 = -1;
volatile uint32_t x903 = 507U;
int64_t x915 = -1LL;
int8_t x918 = 5;
static int16_t x919 = INT16_MIN;
int16_t x927 = 8;
uint64_t t195 = 15773576679959676LLU;
uint16_t x937 = 15442U;
int8_t x940 = INT8_MIN;


void f0(void) {
    	int8_t x2 = -16;
	uint32_t x3 = 167548419U;
	uint8_t x4 = UINT8_MAX;
	volatile uint32_t t0 = 1037U;

    t0 = (x1-((x2/x3)+x4));

    if (t0 != 4294967024U) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MAX;
	int8_t x6 = INT8_MAX;
	static volatile uint32_t x7 = 3752U;
	static uint8_t x8 = 2U;
	volatile uint32_t t1 = 800233737U;

    t1 = (x5-((x6/x7)+x8));

    if (t1 != 32765U) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x11 = INT8_MIN;
	uint64_t x12 = 3521344LLU;
	uint64_t t2 = 219179583384LLU;

    t2 = (x9-((x10/x11)+x12));

    if (t2 != 18446744073706030317LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = 189134;
	int64_t x14 = INT64_MIN;
	int32_t x15 = INT32_MIN;
	int64_t x16 = INT64_MIN;
	volatile int64_t t3 = -1042449980019LL;

    t3 = (x13-((x14/x15)+x16));

    if (t3 != 9223372032559997646LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = -64710LL;
	uint32_t x18 = 1973433U;
	int32_t x19 = -987323;
	volatile int8_t x20 = -8;
	static int64_t t4 = -331676683LL;

    t4 = (x17-((x18/x19)+x20));

    if (t4 != -4295031998LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x21 = -1;
	int32_t x22 = 56675;
	static int32_t x24 = -1;
	int32_t t5 = -5320975;

    t5 = (x21-((x22/x23)+x24));

    if (t5 != -222) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int16_t x26 = -1;
	int64_t x27 = -41938285128LL;
	uint8_t x28 = 3U;
	int64_t t6 = 7397171039768LL;

    t6 = (x25-((x26/x27)+x28));

    if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = -10;
	uint16_t x30 = UINT16_MAX;
	int32_t x31 = INT32_MAX;
	volatile int32_t x32 = -1;
	static int32_t t7 = 401865;

    t7 = (x29-((x30/x31)+x32));

    if (t7 != -9) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = -942;
	uint32_t x36 = 423325U;
	volatile int64_t t8 = 191374811373LL;

    t8 = (x33-((x34/x35)+x36));

    if (t8 != -424267LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = -1;
	static int32_t x38 = -1;
	static int32_t x39 = INT32_MAX;
	int16_t x40 = 859;
	int32_t t9 = -61998477;

    t9 = (x37-((x38/x39)+x40));

    if (t9 != -860) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile uint64_t x42 = 1LLU;
	uint16_t x44 = 3U;
	uint64_t t10 = 42303022LLU;

    t10 = (x41-((x42/x43)+x44));

    if (t10 != 32764LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x45 = -1;
	uint32_t x46 = 4609U;
	int32_t x47 = -27;
	int8_t x48 = -1;
	uint32_t t11 = 290032U;

    t11 = (x45-((x46/x47)+x48));

    if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x53 = INT16_MAX;
	volatile int8_t x54 = INT8_MAX;
	uint8_t x55 = UINT8_MAX;
	int32_t t12 = -1495;

    t12 = (x53-((x54/x55)+x56));

    if (t12 != 32768) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint16_t x57 = UINT16_MAX;
	int16_t x59 = INT16_MIN;

    t13 = (x57-((x58/x59)+x60));

    if (t13 != 65280) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x61 = -1;
	int64_t x63 = INT64_MIN;
	uint16_t x64 = UINT16_MAX;
	volatile int64_t t14 = 46510287280LL;

    t14 = (x61-((x62/x63)+x64));

    if (t14 != -65536LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x65 = 77;
	volatile uint16_t x66 = UINT16_MAX;
	uint8_t x67 = 54U;
	int32_t t15 = -130662086;

    t15 = (x65-((x66/x67)+x68));

    if (t15 != 2147482512) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x69 = -1;
	int64_t x70 = -1LL;
	uint64_t x71 = 8120871364LLU;
	static uint64_t x72 = UINT64_MAX;
	uint64_t t16 = 226079948LLU;

    t16 = (x69-((x70/x71)+x72));

    if (t16 != 18446744071438028864LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x74 = INT16_MIN;
	uint32_t x75 = UINT32_MAX;
	volatile uint8_t x76 = 119U;
	static uint32_t t17 = 0U;

    t17 = (x73-((x74/x75)+x76));

    if (t17 != 136U) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int8_t x77 = INT8_MIN;
	static uint8_t x78 = UINT8_MAX;
	static uint8_t x80 = 84U;
	volatile int32_t t18 = 156962158;

    t18 = (x77-((x78/x79)+x80));

    if (t18 != -297) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x81 = UINT32_MAX;
	int64_t x82 = INT64_MIN;
	volatile uint16_t x83 = 58U;
	uint64_t x84 = 3398362175056836445LLU;

    t19 = (x81-((x82/x83)+x84));

    if (t19 != 15207405558755523428LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x85 = INT8_MIN;
	static uint16_t x87 = 87U;
	int32_t t20 = -36018;

    t20 = (x85-((x86/x87)+x88));

    if (t20 != 4482) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint32_t x89 = 3U;
	int64_t x90 = -14640496165LL;
	int8_t x91 = INT8_MIN;
	uint32_t x92 = 6998U;
	volatile int64_t t21 = -17LL;

    t21 = (x89-((x90/x91)+x92));

    if (t21 != -114385871LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x93 = -1;
	int64_t x94 = 13292LL;
	int16_t x95 = -116;
	int16_t x96 = INT16_MAX;
	int64_t t22 = 1035378989169LL;

    t22 = (x93-((x94/x95)+x96));

    if (t22 != -32654LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x97 = 0;
	int16_t x98 = -7971;
	int16_t x100 = INT16_MIN;
	int64_t t23 = 121869LL;

    t23 = (x97-((x98/x99)+x100));

    if (t23 != 32768LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x101 = UINT16_MAX;
	volatile int64_t t24 = -1LL;

    t24 = (x101-((x102/x103)+x104));

    if (t24 != 32768LL) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int8_t x106 = 0;
	static uint64_t x107 = 1017547LLU;
	volatile uint64_t t25 = 68654819547756840LLU;

    t25 = (x105-((x106/x107)+x108));

    if (t25 != 56502LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x109 = -103498LL;
	static int64_t t26 = -474062255244059LL;

    t26 = (x109-((x110/x111)+x112));

    if (t26 != 9223372036854672182LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x113 = 64180U;
	static int32_t x114 = INT32_MIN;
	int16_t x115 = INT16_MAX;
	uint32_t t27 = 55520481U;

    t27 = (x113-((x114/x115)+x116));

    if (t27 != 129719U) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x118 = 10631LLU;
	volatile int8_t x119 = -4;
	int64_t x120 = INT64_MIN;

    t28 = (x117-((x118/x119)+x120));

    if (t28 != 9223372036854775838LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x122 = INT16_MIN;
	int32_t x123 = -1;
	volatile int64_t x124 = INT64_MIN;
	volatile int64_t t29 = -12249215990LL;

    t29 = (x121-((x122/x123)+x124));

    if (t29 != 9223372036854743295LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint8_t x125 = 18U;
	int8_t x126 = INT8_MIN;
	volatile int64_t x128 = -19950LL;
	int64_t t30 = 1251LL;

    t30 = (x125-((x126/x127)+x128));

    if (t30 != 19968LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x129 = UINT64_MAX;
	uint16_t x130 = UINT16_MAX;
	volatile int32_t x131 = INT32_MIN;
	static int32_t x132 = INT32_MIN;
	volatile uint64_t t31 = 6414963711200LLU;

    t31 = (x129-((x130/x131)+x132));

    if (t31 != 2147483647LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x135 = -1LL;
	int64_t x136 = INT64_MAX;

    t32 = (x133-((x134/x135)+x136));

    if (t32 != -9223372036854775548LL) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x137 = 831371433030LL;
	static uint16_t x138 = 4U;
	int16_t x140 = -3541;
	int64_t t33 = -2LL;

    t33 = (x137-((x138/x139)+x140));

    if (t33 != 831371436571LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x141 = 4U;
	int32_t x142 = 6;
	volatile int8_t x143 = 25;
	static volatile int32_t x144 = -1;
	volatile int32_t t34 = 0;

    t34 = (x141-((x142/x143)+x144));

    if (t34 != 5) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x150 = INT32_MAX;
	static uint16_t x151 = UINT16_MAX;
	static uint16_t x152 = 5028U;
	static int32_t t35 = -226;

    t35 = (x149-((x150/x151)+x152));

    if (t35 != -37793) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x154 = -1412969LL;
	int8_t x155 = -1;
	int16_t x156 = INT16_MIN;
	volatile int64_t t36 = -116257369553LL;

    t36 = (x153-((x154/x155)+x156));

    if (t36 != -1380212LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint8_t x158 = 1U;
	volatile int16_t x159 = 15462;
	uint64_t x160 = UINT64_MAX;
	uint64_t t37 = 24238LLU;

    t37 = (x157-((x158/x159)+x160));

    if (t37 != 128LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x161 = UINT64_MAX;
	volatile int64_t x162 = 73582LL;
	int64_t x163 = -5805428136LL;
	uint64_t t38 = 339185LLU;

    t38 = (x161-((x162/x163)+x164));

    if (t38 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x165 = INT8_MIN;
	uint16_t x166 = 3U;
	int8_t x167 = INT8_MIN;
	static volatile uint16_t x168 = 113U;

    t39 = (x165-((x166/x167)+x168));

    if (t39 != -241) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint16_t x173 = 693U;
	static uint16_t x175 = 41U;
	int8_t x176 = 11;
	volatile int32_t t40 = 637702;

    t40 = (x173-((x174/x175)+x176));

    if (t40 != 52) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x185 = -1;
	int16_t x186 = -1;
	uint64_t x187 = UINT64_MAX;
	int64_t x188 = INT64_MAX;
	uint64_t t41 = 7023167385673494929LLU;

    t41 = (x185-((x186/x187)+x188));

    if (t41 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x190 = 8037;
	int8_t x191 = -10;
	int32_t x192 = -1;
	static volatile uint64_t t42 = 11954LLU;

    t42 = (x189-((x190/x191)+x192));

    if (t42 != 803LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x194 = 4598U;
	static int8_t x195 = -10;
	uint16_t x196 = UINT16_MAX;

    t43 = (x193-((x194/x195)+x196));

    if (t43 != 4294958586U) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x201 = 1819U;
	static int16_t x202 = -1;

    t44 = (x201-((x202/x203)+x204));

    if (t44 != 1564U) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x205 = -1;
	uint32_t x207 = 696U;
	uint64_t x208 = UINT64_MAX;
	static uint64_t t45 = 0LLU;

    t45 = (x205-((x206/x207)+x208));

    if (t45 != 18446744073703380687LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x213 = INT16_MIN;
	int32_t x214 = INT32_MIN;
	int16_t x215 = INT16_MIN;
	int8_t x216 = 0;
	int32_t t46 = -407397977;

    t46 = (x213-((x214/x215)+x216));

    if (t46 != -98304) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x217 = 3;
	int8_t x218 = 6;
	int8_t x219 = -13;
	volatile uint16_t x220 = 57U;
	int32_t t47 = 576;

    t47 = (x217-((x218/x219)+x220));

    if (t47 != -54) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x221 = 612934359;
	static uint32_t x222 = UINT32_MAX;
	uint8_t x223 = 53U;
	static uint64_t x224 = 5013504150716268LLU;
	uint64_t t48 = 15802344965139569LLU;

    t48 = (x221-((x222/x223)+x224));

    if (t48 != 18441730570090732589LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x229 = -1;
	uint16_t x231 = 2126U;
	int64_t x232 = INT64_MIN;
	volatile int64_t t49 = INT64_MAX;

    t49 = (x229-((x230/x231)+x232));

    if (t49 != INT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x233 = -15;
	int16_t x234 = INT16_MIN;
	volatile int32_t x235 = INT32_MIN;
	int16_t x236 = -108;
	static volatile int32_t t50 = -252;

    t50 = (x233-((x234/x235)+x236));

    if (t50 != 93) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x237 = UINT16_MAX;
	volatile int8_t x238 = 1;
	static int8_t x239 = INT8_MAX;
	int8_t x240 = INT8_MIN;
	volatile int32_t t51 = 261887522;

    t51 = (x237-((x238/x239)+x240));

    if (t51 != 65663) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x241 = 26552703862LLU;
	int32_t x242 = INT32_MAX;
	int8_t x243 = -30;
	volatile int16_t x244 = -1;
	uint64_t t52 = 4LLU;

    t52 = (x241-((x242/x243)+x244));

    if (t52 != 26624286651LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x245 = UINT8_MAX;
	uint32_t x246 = 112317331U;
	static int16_t x247 = -1;
	volatile int32_t x248 = -511916;
	uint32_t t53 = 1282090378U;

    t53 = (x245-((x246/x247)+x248));

    if (t53 != 512171U) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int64_t t54 = -10LL;

    t54 = (x249-((x250/x251)+x252));

    if (t54 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x253 = 60U;
	static uint64_t x254 = UINT64_MAX;
	int64_t x256 = INT64_MIN;
	volatile uint64_t t55 = 7357591LLU;

    t55 = (x253-((x254/x255)+x256));

    if (t55 != 9223372036854775867LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x257 = -1LL;
	static int16_t x258 = 4001;
	int64_t x259 = INT64_MAX;
	static int8_t x260 = -1;
	int64_t t56 = 27841567LL;

    t56 = (x257-((x258/x259)+x260));

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x261 = INT8_MIN;
	volatile int32_t x262 = INT32_MIN;
	volatile int8_t x263 = INT8_MAX;
	static int32_t x264 = -2904;
	volatile int32_t t57 = 457001;

    t57 = (x261-((x262/x263)+x264));

    if (t57 != 16912096) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint32_t x265 = 1209014273U;
	int16_t x266 = INT16_MAX;
	int16_t x267 = INT16_MIN;

    t58 = (x265-((x266/x267)+x268));

    if (t58 != 1209014274U) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x277 = INT16_MIN;
	uint32_t x278 = 2148U;
	static volatile uint64_t x279 = 4701LLU;
	int8_t x280 = 2;
	volatile uint64_t t59 = 16066849327236280LLU;

    t59 = (x277-((x278/x279)+x280));

    if (t59 != 18446744073709518846LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x281 = -1;
	uint16_t x282 = UINT16_MAX;
	volatile uint16_t x284 = 89U;
	int32_t t60 = -1597352;

    t60 = (x281-((x282/x283)+x284));

    if (t60 != -92) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x285 = -1LL;
	volatile int64_t x286 = INT64_MIN;
	uint8_t x287 = 117U;
	volatile uint8_t x288 = 14U;
	int64_t t61 = -61143LL;

    t61 = (x285-((x286/x287)+x288));

    if (t61 != 78832239631237385LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int64_t x290 = INT64_MIN;
	static volatile int32_t x292 = INT32_MIN;
	static int64_t t62 = -468696261109681LL;

    t62 = (x289-((x290/x291)+x292));

    if (t62 != 838488369134281320LL) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int16_t x293 = -1;
	int32_t x294 = -1;
	int16_t x295 = 3969;
	int32_t t63 = -92798;

    t63 = (x293-((x294/x295)+x296));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint64_t x297 = 0LLU;
	static int8_t x298 = 0;
	int8_t x300 = 1;
	volatile uint64_t t64 = UINT64_MAX;

    t64 = (x297-((x298/x299)+x300));

    if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint16_t x301 = 19U;
	int64_t x302 = INT64_MIN;
	uint32_t x303 = 5287U;
	static int32_t x304 = INT32_MAX;
	int64_t t65 = -26873343218LL;

    t65 = (x301-((x302/x303)+x304));

    if (t65 != 1744535782695069LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile uint32_t x306 = UINT32_MAX;
	uint8_t x308 = 3U;
	volatile uint64_t t66 = 102333225237912228LLU;

    t66 = (x305-((x306/x307)+x308));

    if (t66 != 4421LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x309 = -31;
	uint8_t x310 = UINT8_MAX;
	static volatile int32_t x311 = INT32_MIN;
	int32_t x312 = INT32_MIN;
	static volatile int32_t t67 = 24051631;

    t67 = (x309-((x310/x311)+x312));

    if (t67 != 2147483617) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x313 = UINT32_MAX;
	volatile int16_t x314 = -1;
	volatile int64_t x315 = 7034312768LL;
	int8_t x316 = -1;
	int64_t t68 = -1645589062231717LL;

    t68 = (x313-((x314/x315)+x316));

    if (t68 != 4294967296LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x326 = -15;
	uint64_t x327 = 34162LLU;
	int32_t x328 = INT32_MIN;
	volatile uint64_t t69 = 1157434LLU;

    t69 = (x325-((x326/x327)+x328));

    if (t69 != 18446204097399283681LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x329 = -61;
	int64_t x330 = -1LL;
	uint32_t x331 = UINT32_MAX;
	int16_t x332 = INT16_MIN;

    t70 = (x329-((x330/x331)+x332));

    if (t70 != 32707LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint32_t x333 = 53U;
	static uint8_t x334 = 96U;
	volatile int8_t x335 = INT8_MIN;
	static uint8_t x336 = 1U;

    t71 = (x333-((x334/x335)+x336));

    if (t71 != 52U) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x337 = -1;
	int64_t x338 = -100107643895LL;
	static int64_t x339 = INT64_MIN;
	uint16_t x340 = 27U;
	volatile int64_t t72 = 12LL;

    t72 = (x337-((x338/x339)+x340));

    if (t72 != -28LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x341 = INT16_MIN;
	uint32_t x342 = UINT32_MAX;
	uint32_t x343 = 406U;
	uint16_t x344 = 2200U;
	volatile uint32_t t73 = 20156U;

    t73 = (x341-((x342/x343)+x344));

    if (t73 != 4284353591U) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint64_t x346 = 56LLU;
	static uint8_t x347 = UINT8_MAX;
	static int32_t x348 = -92;
	uint64_t t74 = 17368145552LLU;

    t74 = (x345-((x346/x347)+x348));

    if (t74 != 91LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x350 = 6U;
	static int16_t x351 = INT16_MIN;
	uint64_t x352 = 10641293022661301LLU;
	static volatile uint64_t t75 = 54446844671051LLU;

    t75 = (x349-((x350/x351)+x352));

    if (t75 != 18436102780686955850LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint8_t x357 = UINT8_MAX;
	int64_t x358 = INT64_MIN;
	static int16_t x359 = INT16_MIN;

    t76 = (x357-((x358/x359)+x360));

    if (t76 != -281474976710406LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x361 = -1LL;
	volatile uint8_t x362 = UINT8_MAX;
	uint16_t x363 = UINT16_MAX;
	volatile int64_t x364 = -126197926LL;
	volatile int64_t t77 = 32115129491479LL;

    t77 = (x361-((x362/x363)+x364));

    if (t77 != 126197925LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x366 = 43281836669625LLU;
	int64_t x368 = 216779LL;
	static volatile uint64_t t78 = 52948509046LLU;

    t78 = (x365-((x366/x367)+x368));

    if (t78 != 9223371696052695488LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x369 = -1;
	static uint32_t x370 = 6441331U;
	uint64_t x371 = 42867711824LLU;
	uint32_t x372 = 160U;
	uint64_t t79 = 1309799LLU;

    t79 = (x369-((x370/x371)+x372));

    if (t79 != 18446744073709551455LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x373 = 1002U;
	volatile int64_t x374 = INT64_MIN;
	uint8_t x375 = 10U;

    t80 = (x373-((x374/x375)+x376));

    if (t80 != 922337203685479329LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x377 = UINT64_MAX;
	int32_t x378 = INT32_MIN;
	int32_t x379 = INT32_MIN;
	volatile uint64_t t81 = 1059308366LLU;

    t81 = (x377-((x378/x379)+x380));

    if (t81 != 107225032LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x381 = 27184485U;
	volatile uint32_t x382 = 2U;
	volatile int32_t x384 = INT32_MIN;
	uint32_t t82 = 52U;

    t82 = (x381-((x382/x383)+x384));

    if (t82 != 2174668133U) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int64_t x385 = INT64_MIN;
	int8_t x386 = INT8_MAX;
	int64_t x387 = INT64_MIN;
	int8_t x388 = -1;
	int64_t t83 = -1948645994LL;

    t83 = (x385-((x386/x387)+x388));

    if (t83 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile uint8_t x389 = UINT8_MAX;
	int8_t x391 = INT8_MAX;
	static volatile int64_t x392 = INT64_MAX;

    t84 = (x389-((x390/x391)+x392));

    if (t84 != -9223372036837866232LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x394 = INT32_MIN;
	volatile int16_t x395 = INT16_MIN;
	uint8_t x396 = 17U;

    t85 = (x393-((x394/x395)+x396));

    if (t85 != -65554) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x397 = UINT8_MAX;
	int16_t x398 = INT16_MIN;
	uint64_t x399 = 25545344LLU;
	int8_t x400 = -24;
	static volatile uint64_t t86 = 151356LLU;

    t86 = (x397-((x398/x399)+x400));

    if (t86 != 18446743351591890309LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x401 = 9U;
	volatile int32_t x402 = INT32_MAX;
	uint16_t x403 = 111U;
	static int32_t x404 = INT32_MIN;
	volatile int32_t t87 = -2314;

    t87 = (x401-((x402/x403)+x404));

    if (t87 != 2128136958) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x405 = INT16_MIN;
	uint64_t x408 = 421LLU;
	volatile uint64_t t88 = 461460474336LLU;

    t88 = (x405-((x406/x407)+x408));

    if (t88 != 18446744073709485659LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x411 = -1;
	static volatile int16_t x412 = INT16_MIN;
	int32_t t89 = 0;

    t89 = (x409-((x410/x411)+x412));

    if (t89 != 32829) { NG(); } else { ; }
	
}

void f90(void) {
    	static int8_t x416 = -1;
	int64_t t90 = 141462706LL;

    t90 = (x413-((x414/x415)+x416));

    if (t90 != -613566738LL) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x417 = -1LL;
	int32_t x418 = INT32_MIN;
	int16_t x419 = INT16_MAX;
	volatile uint8_t x420 = 1U;
	volatile int64_t t91 = -151169873281798LL;

    t91 = (x417-((x418/x419)+x420));

    if (t91 != 65536LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x421 = UINT8_MAX;
	int64_t x422 = INT64_MIN;
	volatile int64_t t92 = 23LL;

    t92 = (x421-((x422/x423)+x424));

    if (t92 != 4611686018427355392LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x425 = -9761340432325LL;
	int8_t x426 = 0;
	int16_t x428 = INT16_MIN;
	static volatile int64_t t93 = 8022396265882LL;

    t93 = (x425-((x426/x427)+x428));

    if (t93 != -9761340399557LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint16_t x429 = 5956U;
	uint16_t x430 = 5U;
	int16_t x431 = INT16_MIN;
	int32_t x432 = -43;
	static volatile int32_t t94 = 474628;

    t94 = (x429-((x430/x431)+x432));

    if (t94 != 5999) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int64_t x433 = -1LL;
	uint32_t x434 = 132U;
	int32_t x435 = INT32_MIN;
	volatile int64_t t95 = -9883520944711183LL;

    t95 = (x433-((x434/x435)+x436));

    if (t95 != -4294967169LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int16_t x437 = INT16_MAX;
	uint16_t x438 = 380U;
	int64_t x439 = INT64_MIN;
	static int16_t x440 = INT16_MIN;
	volatile int64_t t96 = -535862687222875LL;

    t96 = (x437-((x438/x439)+x440));

    if (t96 != 65535LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x441 = -1;
	volatile int64_t x442 = -87027369539259LL;
	static int8_t x443 = -1;
	volatile int8_t x444 = -1;

    t97 = (x441-((x442/x443)+x444));

    if (t97 != -87027369539259LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x445 = 250U;
	int8_t x446 = -2;
	int16_t x447 = INT16_MIN;
	volatile int32_t x448 = INT32_MAX;
	volatile uint32_t t98 = 1U;

    t98 = (x445-((x446/x447)+x448));

    if (t98 != 2147483899U) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x449 = -1LL;
	uint64_t x450 = UINT64_MAX;
	int64_t x451 = 2511LL;
	uint64_t t99 = 0LLU;

    t99 = (x449-((x450/x451)+x452));

    if (t99 != 18439397700123844905LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x453 = -1;
	int16_t x454 = 6;
	volatile uint64_t x455 = 122855659769011699LLU;
	static int16_t x456 = -241;
	volatile uint64_t t100 = 13450LLU;

    t100 = (x453-((x454/x455)+x456));

    if (t100 != 240LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x457 = INT8_MIN;
	int16_t x458 = -3878;
	int64_t x459 = 1569713611504732LL;
	volatile int64_t t101 = 1343234LL;

    t101 = (x457-((x458/x459)+x460));

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t t102 = 939547666LL;

    t102 = (x461-((x462/x463)+x464));

    if (t102 != -14LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint64_t x469 = 1031398LLU;
	static uint64_t x470 = 18116693LLU;
	static uint8_t x471 = UINT8_MAX;
	static int8_t x472 = -2;
	static volatile uint64_t t103 = 62065LLU;

    t103 = (x469-((x470/x471)+x472));

    if (t103 != 960355LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	static int32_t x473 = 0;
	int8_t x474 = INT8_MIN;
	uint8_t x476 = 40U;

    t104 = (x473-((x474/x475)+x476));

    if (t104 != -65) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int8_t x477 = -1;
	int16_t x478 = INT16_MAX;
	volatile uint64_t x479 = UINT64_MAX;
	uint16_t x480 = UINT16_MAX;
	volatile uint64_t t105 = 331837689LLU;

    t105 = (x477-((x478/x479)+x480));

    if (t105 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	static int8_t x481 = -1;
	int64_t x482 = INT64_MIN;
	uint16_t x483 = UINT16_MAX;
	int16_t x484 = INT16_MIN;

    t106 = (x481-((x482/x483)+x484));

    if (t106 != 140739635904511LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile uint8_t x486 = UINT8_MAX;
	int32_t x487 = INT32_MAX;
	static uint16_t x488 = 7U;
	volatile int32_t t107 = -134784298;

    t107 = (x485-((x486/x487)+x488));

    if (t107 != -135) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x489 = INT8_MAX;
	static volatile uint8_t x490 = 57U;
	volatile int32_t x491 = -1;
	static volatile int32_t t108 = 31280;

    t108 = (x489-((x490/x491)+x492));

    if (t108 != 185) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x494 = -206067284;
	int16_t x495 = INT16_MIN;
	uint16_t x496 = UINT16_MAX;
	volatile int32_t t109 = 13;

    t109 = (x493-((x494/x495)+x496));

    if (t109 != -62885) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x498 = INT16_MAX;
	int16_t x499 = -225;
	int32_t x500 = -1;
	static volatile uint32_t t110 = 159153U;

    t110 = (x497-((x498/x499)+x500));

    if (t110 != 145U) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x502 = 5410U;
	volatile int8_t x503 = INT8_MAX;
	int64_t x504 = INT64_MIN;
	uint64_t t111 = 2563121051LLU;

    t111 = (x501-((x502/x503)+x504));

    if (t111 != 9959196678264818321LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x509 = 73018LLU;
	static int8_t x510 = INT8_MIN;
	uint8_t x511 = 94U;
	int64_t x512 = -1LL;
	volatile uint64_t t112 = 3307813LLU;

    t112 = (x509-((x510/x511)+x512));

    if (t112 != 73020LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x513 = 82449766U;
	static int16_t x515 = INT16_MAX;
	static int8_t x516 = 1;
	uint32_t t113 = 2087716889U;

    t113 = (x513-((x514/x515)+x516));

    if (t113 != 82515303U) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x517 = 1;
	static int32_t x518 = 1503;
	int16_t x519 = -1;
	int32_t t114 = -11778655;

    t114 = (x517-((x518/x519)+x520));

    if (t114 != 1478) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x521 = UINT32_MAX;
	uint32_t x522 = 2375U;
	static int16_t x523 = 38;
	static int16_t x524 = -1;
	static volatile uint32_t t115 = 146951366U;

    t115 = (x521-((x522/x523)+x524));

    if (t115 != 4294967234U) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x530 = INT32_MIN;
	static int8_t x531 = 1;
	int8_t x532 = 6;
	int32_t t116 = 1900340;

    t116 = (x529-((x530/x531)+x532));

    if (t116 != 2147483574) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x537 = -1;
	int16_t x538 = INT16_MIN;
	static int32_t x539 = -1;
	int8_t x540 = -1;
	volatile int32_t t117 = -3;

    t117 = (x537-((x538/x539)+x540));

    if (t117 != -32768) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x541 = 16;
	int64_t x542 = -1LL;
	int16_t x543 = -1;
	int16_t x544 = INT16_MAX;
	int64_t t118 = 238535727675703LL;

    t118 = (x541-((x542/x543)+x544));

    if (t118 != -32752LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint16_t x546 = 10242U;
	uint8_t x547 = 24U;
	static int8_t x548 = INT8_MIN;
	int32_t t119 = 151875126;

    t119 = (x545-((x546/x547)+x548));

    if (t119 != -297) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x549 = INT32_MAX;
	int32_t x550 = INT32_MIN;
	volatile int16_t x551 = INT16_MIN;
	int32_t x552 = 125;
	int32_t t120 = 98;

    t120 = (x549-((x550/x551)+x552));

    if (t120 != 2147417986) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x553 = -7;
	static int64_t x554 = -1LL;
	int16_t x555 = INT16_MAX;

    t121 = (x553-((x554/x555)+x556));

    if (t121 != -262LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x561 = -1LL;
	int32_t x563 = 1124551;
	volatile int8_t x564 = INT8_MAX;
	int64_t t122 = 18089730LL;

    t122 = (x561-((x562/x563)+x564));

    if (t122 != -128LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x565 = 0U;
	uint8_t x566 = 78U;
	int8_t x567 = INT8_MIN;
	static int64_t x568 = 1LL;
	volatile int64_t t123 = -2475477822166652LL;

    t123 = (x565-((x566/x567)+x568));

    if (t123 != -1LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x569 = INT16_MAX;
	volatile int32_t x570 = -1;
	int64_t x572 = -74910467441LL;
	volatile int64_t t124 = 0LL;

    t124 = (x569-((x570/x571)+x572));

    if (t124 != 74910500208LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x577 = 74000U;
	int64_t x578 = -1138394920LL;
	static int64_t x579 = INT64_MAX;
	uint16_t x580 = 363U;

    t125 = (x577-((x578/x579)+x580));

    if (t125 != 73637LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x581 = -1;
	int64_t x582 = INT64_MIN;
	uint8_t x583 = UINT8_MAX;
	volatile uint32_t x584 = UINT32_MAX;
	volatile int64_t t126 = -9663279937171LL;

    t126 = (x581-((x582/x583)+x584));

    if (t126 != 36170082124071040LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x585 = INT32_MAX;
	int32_t x586 = 31822;
	static uint16_t x588 = 0U;
	static volatile int32_t t127 = INT32_MAX;

    t127 = (x585-((x586/x587)+x588));

    if (t127 != INT32_MAX) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x589 = -1LL;
	uint32_t x590 = UINT32_MAX;
	int32_t x592 = -1;
	volatile int64_t t128 = -992955LL;

    t128 = (x589-((x590/x591)+x592));

    if (t128 != -1LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint64_t x593 = 1LLU;
	uint64_t x594 = 4493273126895190LLU;
	uint8_t x595 = 6U;
	int16_t x596 = -17;
	uint64_t t129 = 67LLU;

    t129 = (x593-((x594/x595)+x596));

    if (t129 != 18445995194855069103LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x597 = 2202LLU;
	uint8_t x598 = 21U;
	int64_t x599 = -1LL;
	int64_t x600 = INT64_MAX;

    t130 = (x597-((x598/x599)+x600));

    if (t130 != 9223372036854778032LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x601 = UINT64_MAX;
	int8_t x602 = INT8_MIN;
	static int16_t x603 = -1569;
	uint32_t x604 = 19402397U;
	uint64_t t131 = 4171718886LLU;

    t131 = (x601-((x602/x603)+x604));

    if (t131 != 18446744073690149218LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x608 = INT8_MAX;

    t132 = (x605-((x606/x607)+x608));

    if (t132 != -2147483775LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x609 = UINT32_MAX;
	int32_t x610 = INT32_MIN;
	volatile int64_t x611 = INT64_MAX;
	volatile int64_t t133 = -26747291429596LL;

    t133 = (x609-((x610/x611)+x612));

    if (t133 != 4294934528LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x613 = INT8_MAX;
	int16_t x614 = INT16_MIN;
	volatile int8_t x615 = INT8_MIN;

    t134 = (x613-((x614/x615)+x616));

    if (t134 != -850) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x617 = -1;
	static int32_t x618 = -1;
	int64_t t135 = -238692159561849153LL;

    t135 = (x617-((x618/x619)+x620));

    if (t135 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x625 = INT8_MAX;
	int64_t x626 = 2085740LL;
	volatile int32_t x628 = INT32_MIN;
	volatile int64_t t136 = -15042820563LL;

    t136 = (x625-((x626/x627)+x628));

    if (t136 != 2147500069LL) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint64_t x637 = UINT64_MAX;
	static volatile int16_t x638 = INT16_MIN;
	static int32_t x639 = INT32_MIN;
	int8_t x640 = INT8_MIN;
	volatile uint64_t t137 = 1413594LLU;

    t137 = (x637-((x638/x639)+x640));

    if (t137 != 127LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x645 = INT8_MIN;
	volatile int64_t x647 = -1LL;
	int64_t x648 = INT64_MIN;
	volatile int64_t t138 = -9179403LL;

    t138 = (x645-((x646/x647)+x648));

    if (t138 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint64_t x649 = UINT64_MAX;
	static uint32_t x651 = 242023U;
	volatile int8_t x652 = INT8_MAX;
	volatile uint64_t t139 = 1004093228011LLU;

    t139 = (x649-((x650/x651)+x652));

    if (t139 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x653 = -18;
	int32_t x654 = INT32_MIN;
	volatile int16_t x655 = INT16_MIN;
	volatile uint8_t x656 = 15U;
	volatile int32_t t140 = 25006;

    t140 = (x653-((x654/x655)+x656));

    if (t140 != -65569) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x657 = 2;
	int32_t x658 = INT32_MAX;
	static uint16_t x659 = 6530U;
	uint64_t x660 = 968464013434LLU;
	uint64_t t141 = 299414273371876LLU;

    t141 = (x657-((x658/x659)+x660));

    if (t141 != 18446743105245209320LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x661 = INT32_MIN;
	volatile int32_t x662 = INT32_MAX;
	static int64_t x663 = 21LL;
	static volatile uint32_t x664 = 4992U;
	volatile int64_t t142 = 5LL;

    t142 = (x661-((x662/x663)+x664));

    if (t142 != -2249749766LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x669 = -1LL;
	int8_t x670 = INT8_MIN;
	uint8_t x671 = 54U;
	volatile int16_t x672 = INT16_MIN;
	static volatile int64_t t143 = -10LL;

    t143 = (x669-((x670/x671)+x672));

    if (t143 != 32769LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x677 = -287052;
	volatile uint16_t x678 = UINT16_MAX;
	int8_t x679 = -3;

    t144 = (x677-((x678/x679)+x680));

    if (t144 != 4294702090U) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x682 = -3;
	uint32_t x683 = UINT32_MAX;
	int32_t x684 = -223433569;
	uint32_t t145 = 388521U;

    t145 = (x681-((x682/x683)+x684));

    if (t145 != 223433569U) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x685 = -1LL;
	volatile int8_t x686 = INT8_MIN;
	int64_t x688 = -1LL;
	int64_t t146 = 8304452639512LL;

    t146 = (x685-((x686/x687)+x688));

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x689 = -1LL;
	uint16_t x691 = 53U;
	volatile uint64_t t147 = 476233741LLU;

    t147 = (x689-((x690/x691)+x692));

    if (t147 != 8875320261879123891LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int32_t x693 = INT32_MAX;
	uint64_t x695 = 311879779LLU;
	volatile uint64_t t148 = 0LLU;

    t148 = (x693-((x694/x695)+x696));

    if (t148 != 2147483630LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint8_t x697 = 9U;
	int16_t x698 = -1;
	int8_t x699 = -1;
	int16_t x700 = -1;
	static int32_t t149 = 758759240;

    t149 = (x697-((x698/x699)+x700));

    if (t149 != 9) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int64_t x703 = -1972LL;
	volatile int64_t t150 = -11766030226LL;

    t150 = (x701-((x702/x703)+x704));

    if (t150 != -116LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x705 = 35U;
	uint8_t x706 = UINT8_MAX;
	static volatile int32_t t151 = 0;

    t151 = (x705-((x706/x707)+x708));

    if (t151 != -151) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x710 = INT64_MIN;
	static int32_t x711 = INT32_MIN;
	static int64_t x712 = INT64_MIN;
	volatile int64_t t152 = 4041764065729LL;

    t152 = (x709-((x710/x711)+x712));

    if (t152 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x713 = 2264U;
	uint8_t x714 = UINT8_MAX;
	uint32_t x715 = 1670229U;
	static int32_t x716 = INT32_MAX;

    t153 = (x713-((x714/x715)+x716));

    if (t153 != 2147485913U) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint8_t x717 = UINT8_MAX;
	uint64_t x718 = UINT64_MAX;
	int32_t x719 = INT32_MIN;
	uint64_t x720 = UINT64_MAX;
	volatile uint64_t t154 = 1419430660500LLU;

    t154 = (x717-((x718/x719)+x720));

    if (t154 != 255LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x721 = 4175U;
	static volatile uint32_t x722 = 43039767U;
	int64_t x723 = INT64_MIN;
	static int64_t x724 = INT64_MAX;
	static int64_t t155 = 472988427183351LL;

    t155 = (x721-((x722/x723)+x724));

    if (t155 != -9223372036854771632LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x725 = 320724673801160625LLU;
	int8_t x726 = -6;
	static uint64_t t156 = 15238340407LLU;

    t156 = (x725-((x726/x727)+x728));

    if (t156 != 320724673801160625LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x730 = INT32_MIN;
	uint8_t x731 = 29U;
	static uint64_t x732 = UINT64_MAX;
	uint64_t t157 = 2LLU;

    t157 = (x729-((x730/x731)+x732));

    if (t157 != 18446744071636119129LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x749 = 64U;
	static uint64_t x750 = UINT64_MAX;
	int16_t x751 = INT16_MAX;
	volatile int32_t x752 = INT32_MAX;
	volatile uint64_t t158 = 193564630LLU;

    t158 = (x749-((x750/x751)+x752));

    if (t158 != 18446181104428253233LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x753 = 22105197063LLU;
	uint8_t x754 = 46U;
	int32_t x755 = 98824;
	int8_t x756 = INT8_MIN;
	uint64_t t159 = 46671801567LLU;

    t159 = (x753-((x754/x755)+x756));

    if (t159 != 22105197191LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x761 = 152119U;
	int16_t x762 = 1;
	int32_t x764 = -31909;
	uint32_t t160 = 2693152U;

    t160 = (x761-((x762/x763)+x764));

    if (t160 != 184028U) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x769 = -6080;
	int32_t x770 = -3;
	static int32_t x771 = INT32_MIN;
	static int32_t x772 = INT32_MIN;

    t161 = (x769-((x770/x771)+x772));

    if (t161 != 2147477568) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x780 = 1770;

    t162 = (x777-((x778/x779)+x780));

    if (t162 != -1771) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x781 = INT32_MAX;
	uint16_t x782 = 27090U;
	int64_t x783 = -2793295902LL;
	int16_t x784 = -22;
	int64_t t163 = 123737108LL;

    t163 = (x781-((x782/x783)+x784));

    if (t163 != 2147483669LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x785 = INT8_MIN;
	int32_t x787 = INT32_MIN;
	int16_t x788 = INT16_MIN;
	static uint64_t t164 = 159096LLU;

    t164 = (x785-((x786/x787)+x788));

    if (t164 != 32640LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x790 = 5U;
	uint16_t x791 = 389U;
	int16_t x792 = INT16_MIN;
	int32_t t165 = 1971;

    t165 = (x789-((x790/x791)+x792));

    if (t165 != 33023) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x793 = 5U;
	int16_t x794 = -3;
	int16_t x795 = INT16_MIN;
	int16_t x796 = 922;
	uint32_t t166 = 1148U;

    t166 = (x793-((x794/x795)+x796));

    if (t166 != 4294966379U) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x798 = INT16_MIN;
	uint8_t x799 = UINT8_MAX;
	volatile uint64_t x800 = 45093608354933100LLU;

    t167 = (x797-((x798/x799)+x800));

    if (t167 != 18401650465354992841LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile uint8_t x801 = 4U;
	int32_t x802 = -10705003;
	int16_t x804 = INT16_MAX;
	volatile int32_t t168 = -1;

    t168 = (x801-((x802/x803)+x804));

    if (t168 != -32763) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x805 = -1LL;
	uint8_t x807 = 1U;
	int64_t x808 = 85703601288LL;

    t169 = (x805-((x806/x807)+x808));

    if (t169 != -85703601285LL) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int16_t x810 = -12927;
	volatile uint64_t x811 = UINT64_MAX;
	static volatile int8_t x812 = INT8_MAX;
	volatile uint64_t t170 = 100781918LLU;

    t170 = (x809-((x810/x811)+x812));

    if (t170 != 18446744073709551471LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x813 = INT32_MIN;
	volatile int32_t x814 = -1;
	uint32_t x816 = UINT32_MAX;
	uint32_t t171 = 18614U;

    t171 = (x813-((x814/x815)+x816));

    if (t171 != 2147483648U) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint32_t x818 = 604U;
	uint64_t x820 = 1011LLU;
	uint64_t t172 = 478222392LLU;

    t172 = (x817-((x818/x819)+x820));

    if (t172 != 18446744073709551158LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x821 = UINT32_MAX;
	volatile int16_t x822 = 6862;
	int32_t x823 = INT32_MIN;
	int64_t x824 = -52LL;
	int64_t t173 = -458035LL;

    t173 = (x821-((x822/x823)+x824));

    if (t173 != 4294967347LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x827 = 3893617268758LL;
	static volatile uint64_t x828 = 4743099577LLU;
	volatile uint64_t t174 = 424944321LLU;

    t174 = (x825-((x826/x827)+x828));

    if (t174 != 18446744068966451911LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x829 = INT8_MIN;
	static int16_t x831 = -1;
	uint32_t x832 = 7705U;
	uint32_t t175 = 28168776U;

    t175 = (x829-((x830/x831)+x832));

    if (t175 != 57702U) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x833 = INT8_MAX;
	uint64_t x834 = 43764769458276LLU;
	static int32_t x835 = INT32_MIN;
	int16_t x836 = INT16_MIN;
	static volatile uint64_t t176 = 1543803LLU;

    t176 = (x833-((x834/x835)+x836));

    if (t176 != 32895LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int32_t x841 = INT32_MIN;
	static uint64_t t177 = 57018LLU;

    t177 = (x841-((x842/x843)+x844));

    if (t177 != 18446744071561507473LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint64_t x845 = 224LLU;
	uint16_t x846 = 2U;
	uint16_t x847 = 4U;
	int64_t x848 = -7894835480LL;
	volatile uint64_t t178 = 500113877519428LLU;

    t178 = (x845-((x846/x847)+x848));

    if (t178 != 7894835704LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x849 = 1;
	int64_t x850 = INT64_MIN;
	uint8_t x851 = 11U;
	volatile uint32_t x852 = UINT32_MAX;
	int64_t t179 = -730442281807536LL;

    t179 = (x849-((x850/x851)+x852));

    if (t179 != 838488362691830506LL) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x853 = INT8_MIN;
	uint8_t x854 = 5U;
	int8_t x855 = INT8_MIN;
	volatile uint32_t t180 = 2830U;

    t180 = (x853-((x854/x855)+x856));

    if (t180 != 4289483679U) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x857 = INT16_MIN;
	static int64_t x858 = 609973253811LL;
	int16_t x859 = INT16_MIN;
	volatile uint64_t x860 = UINT64_MAX;

    t181 = (x857-((x858/x859)+x860));

    if (t181 != 18582139LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x861 = INT64_MAX;
	int8_t x862 = 30;
	static int8_t x863 = -50;
	uint8_t x864 = UINT8_MAX;

    t182 = (x861-((x862/x863)+x864));

    if (t182 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x869 = -1LL;
	int16_t x870 = -1;
	volatile int32_t x871 = INT32_MIN;
	uint32_t x872 = UINT32_MAX;
	volatile int64_t t183 = 252192131206606172LL;

    t183 = (x869-((x870/x871)+x872));

    if (t183 != -4294967296LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x873 = UINT32_MAX;
	uint8_t x875 = 80U;
	int8_t x876 = -1;
	int64_t t184 = 5698138698LL;

    t184 = (x873-((x874/x875)+x876));

    if (t184 != -115292146165717401LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x877 = UINT64_MAX;
	static int64_t x878 = INT64_MAX;
	int64_t x879 = INT64_MIN;
	volatile uint16_t x880 = 2139U;
	volatile uint64_t t185 = 1086446348388488LLU;

    t185 = (x877-((x878/x879)+x880));

    if (t185 != 18446744073709549476LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x881 = -1LL;
	int64_t x882 = INT64_MIN;
	uint8_t x883 = 3U;
	volatile int32_t x884 = INT32_MIN;
	int64_t t186 = -8013LL;

    t186 = (x881-((x882/x883)+x884));

    if (t186 != 3074457347765742249LL) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int8_t x885 = INT8_MIN;
	int8_t x886 = INT8_MIN;
	int64_t x887 = -32138LL;
	volatile int16_t x888 = 443;
	static volatile int64_t t187 = -14548671865LL;

    t187 = (x885-((x886/x887)+x888));

    if (t187 != -571LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x889 = 35640579U;
	int64_t x890 = INT64_MAX;
	int16_t x891 = INT16_MIN;
	int8_t x892 = 1;
	volatile int64_t t188 = -6609689186LL;

    t188 = (x889-((x890/x891)+x892));

    if (t188 != 281475012351233LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x893 = INT8_MIN;
	int32_t t189 = -41;

    t189 = (x893-((x894/x895)+x896));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x897 = INT8_MIN;
	uint8_t x898 = UINT8_MAX;
	static int8_t x899 = INT8_MIN;
	int64_t x900 = -46795LL;
	volatile int64_t t190 = -1674624222836LL;

    t190 = (x897-((x898/x899)+x900));

    if (t190 != 46668LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x902 = -65;
	uint8_t x904 = 17U;
	volatile uint32_t t191 = 324U;

    t191 = (x901-((x902/x903)+x904));

    if (t191 != 4286495943U) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x913 = INT16_MIN;
	uint32_t x914 = 182153U;
	static uint32_t x916 = UINT32_MAX;
	volatile int64_t t192 = 0LL;

    t192 = (x913-((x914/x915)+x916));

    if (t192 != -4294817910LL) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x917 = 865380633;
	uint32_t x920 = 3652U;
	volatile uint32_t t193 = 127454U;

    t193 = (x917-((x918/x919)+x920));

    if (t193 != 865376981U) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x921 = 11U;
	volatile int32_t x922 = INT32_MIN;
	int8_t x923 = -20;
	int64_t x924 = -1LL;
	int64_t t194 = 130433437LL;

    t194 = (x921-((x922/x923)+x924));

    if (t194 != -107374170LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x925 = -1LL;
	uint64_t x926 = 304251486LLU;
	static int8_t x928 = -1;

    t195 = (x925-((x926/x927)+x928));

    if (t195 != 18446744073671520181LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x938 = INT16_MIN;
	int32_t x939 = INT32_MIN;
	static volatile int32_t t196 = -7899126;

    t196 = (x937-((x938/x939)+x940));

    if (t196 != 15570) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x941 = -1;
	static uint64_t x942 = 101LLU;
	uint16_t x943 = 17975U;
	int32_t x944 = INT32_MIN;
	volatile uint64_t t197 = 15796678LLU;

    t197 = (x941-((x942/x943)+x944));

    if (t197 != 2147483647LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x945 = 930;
	int8_t x946 = INT8_MIN;
	uint16_t x947 = 12U;
	volatile int8_t x948 = INT8_MIN;
	volatile int32_t t198 = -57003222;

    t198 = (x945-((x946/x947)+x948));

    if (t198 != 1068) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x949 = UINT32_MAX;
	int64_t x950 = -1LL;
	static int8_t x951 = 5;
	uint16_t x952 = 75U;
	static volatile int64_t t199 = -25476754LL;

    t199 = (x949-((x950/x951)+x952));

    if (t199 != 4294967220LL) { NG(); } else { ; }
	
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

