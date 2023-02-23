
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

static uint32_t x5 = 20U;
int16_t x6 = INT16_MAX;
static uint32_t x9 = 15U;
int16_t x13 = INT16_MIN;
int32_t t3 = -46;
uint16_t x21 = 4U;
int8_t x24 = INT8_MIN;
int64_t x33 = 485LL;
static int32_t t12 = -27;
volatile int32_t t13 = 1;
int8_t x59 = INT8_MIN;
uint16_t x63 = 0U;
uint16_t x73 = 1U;
int64_t x75 = INT64_MIN;
int32_t x80 = INT32_MIN;
static volatile int64_t x84 = 167LL;
int8_t x89 = INT8_MIN;
int32_t x113 = -1;
uint16_t x117 = UINT16_MAX;
int32_t t29 = 21;
static volatile uint64_t x141 = 21303627063LLU;
int32_t t30 = -7187111;
int32_t x150 = 126;
int8_t x153 = -4;
uint32_t x156 = UINT32_MAX;
int64_t x161 = -957LL;
volatile int16_t x164 = -5749;
int16_t x165 = -95;
int32_t x166 = 3087143;
uint16_t x168 = 15U;
int32_t x174 = INT32_MAX;
int64_t x175 = INT64_MAX;
uint32_t x178 = 56U;
int16_t x182 = 13182;
volatile int32_t x194 = -2634;
volatile uint16_t x197 = UINT16_MAX;
uint64_t x211 = 358537568663LLU;
int16_t x214 = INT16_MAX;
uint64_t x216 = 142LLU;
uint32_t x221 = 1326567165U;
int32_t t46 = 5;
int8_t x235 = INT8_MAX;
int32_t t50 = 16712;
int64_t x243 = -30578LL;
volatile int32_t t52 = -90313620;
int32_t t53 = -72573;
int32_t x254 = INT32_MIN;
int32_t x258 = -1;
uint8_t x262 = 32U;
uint8_t x264 = 5U;
volatile uint64_t x265 = 116156446LLU;
int32_t t57 = 9;
uint8_t x273 = UINT8_MAX;
static int16_t x276 = INT16_MIN;
int32_t t58 = 25;
volatile uint32_t x277 = 829966332U;
int16_t x288 = INT16_MAX;
int64_t x299 = INT64_MAX;
int8_t x307 = INT8_MAX;
volatile int8_t x314 = 17;
static int32_t t65 = -158470;
uint8_t x325 = 2U;
volatile int32_t x326 = -30303;
static volatile uint32_t x327 = 51198892U;
volatile int32_t x334 = INT32_MAX;
int32_t x335 = INT32_MAX;
static volatile int32_t t69 = -1;
uint16_t x340 = 5U;
static volatile int8_t x342 = INT8_MIN;
int8_t x346 = 1;
uint16_t x351 = 10U;
volatile int16_t x352 = -9;
static int16_t x356 = INT16_MIN;
int32_t t74 = -1;
volatile int8_t x357 = -45;
static int8_t x361 = INT8_MIN;
uint16_t x366 = 7U;
static volatile int64_t x367 = -1LL;
uint64_t x380 = UINT64_MAX;
int32_t x382 = 1086;
int16_t x383 = INT16_MAX;
static uint64_t x386 = UINT64_MAX;
volatile int32_t t82 = -76;
static volatile uint8_t x402 = 1U;
int32_t t86 = 985876;
uint16_t x412 = 9613U;
volatile int32_t t88 = -19;
static int8_t x417 = INT8_MIN;
volatile int32_t t89 = 555;
int32_t t90 = -2641;
static volatile int16_t x425 = INT16_MAX;
volatile int32_t t91 = -26784834;
volatile int32_t t93 = -109271;
uint32_t x438 = 4U;
int8_t x440 = INT8_MIN;
static int64_t x461 = 2LL;
static int16_t x465 = INT16_MIN;
int32_t x469 = 1719571;
int8_t x470 = INT8_MAX;
static int64_t x473 = INT64_MIN;
int32_t x489 = INT32_MIN;
static int8_t x491 = -19;
int32_t t103 = 1247;
volatile int64_t x498 = 6113582757LL;
int16_t x513 = -1;
volatile uint64_t x534 = 649LLU;
int8_t x540 = -1;
volatile int16_t x544 = INT16_MAX;
volatile uint32_t x548 = UINT32_MAX;
int16_t x557 = INT16_MIN;
static uint64_t x560 = 177302661815133034LLU;
uint16_t x569 = UINT16_MAX;
static uint16_t x571 = UINT16_MAX;
int16_t x579 = INT16_MIN;
int32_t x580 = -1;
volatile int8_t x600 = -29;
int8_t x626 = INT8_MIN;
int32_t t129 = 2066737;
static int32_t x641 = INT32_MIN;
volatile int32_t t131 = -4;
int32_t t132 = 1;
volatile uint64_t x659 = 9758491LLU;
uint64_t x660 = 207904457375770LLU;
int16_t x665 = 2;
uint32_t x667 = 6644432U;
uint32_t x668 = 56870U;
uint32_t x669 = 22796U;
volatile int16_t x670 = INT16_MIN;
volatile uint32_t x671 = 4021U;
volatile int32_t t136 = -5195428;
volatile uint32_t x674 = UINT32_MAX;
static int32_t t138 = 329277917;
static int8_t x689 = -1;
volatile int16_t x691 = -26;
uint8_t x695 = UINT8_MAX;
int32_t x696 = INT32_MIN;
uint32_t x700 = UINT32_MAX;
static int32_t x705 = 21;
int8_t x708 = INT8_MAX;
static int64_t x713 = INT64_MIN;
static int16_t x715 = INT16_MIN;
int32_t t146 = 14;
int32_t x719 = INT32_MIN;
uint8_t x721 = 12U;
int64_t x725 = -1LL;
static volatile int64_t x726 = -7LL;
static int8_t x736 = 2;
volatile int32_t t152 = 14382922;
uint8_t x750 = 0U;
static uint8_t x753 = UINT8_MAX;
volatile uint64_t x755 = 36128LLU;
uint64_t x757 = 362181325615094699LLU;
uint16_t x758 = UINT16_MAX;
volatile uint32_t x760 = UINT32_MAX;
static volatile int32_t t156 = -262683007;
uint16_t x764 = UINT16_MAX;
uint32_t x766 = 102326U;
static uint64_t x772 = UINT64_MAX;
int64_t x776 = -126LL;
uint32_t x786 = 0U;
uint8_t x787 = 1U;
uint32_t x789 = 1U;
uint8_t x790 = 0U;
uint64_t x807 = UINT64_MAX;
int16_t x809 = INT16_MIN;
int32_t t167 = 0;
int16_t x814 = -7621;
static uint32_t x819 = 1541558196U;
uint16_t x826 = 266U;
int64_t x833 = INT64_MIN;
uint16_t x837 = UINT16_MAX;
int8_t x858 = -1;
volatile int64_t x866 = INT64_MIN;
static uint16_t x878 = 534U;
static uint8_t x883 = UINT8_MAX;
static uint32_t x886 = UINT32_MAX;
int64_t x889 = -2007092243233097089LL;
int16_t x898 = INT16_MIN;
uint16_t x909 = 9985U;
uint8_t x912 = 11U;
int32_t t191 = -32;
static volatile int16_t x918 = INT16_MIN;
static uint64_t x919 = UINT64_MAX;
int16_t x921 = -1;
uint64_t x929 = 184557LLU;
volatile int32_t x933 = -1;
int16_t x939 = INT16_MIN;
int32_t x941 = INT32_MIN;
uint8_t x955 = 78U;
volatile int32_t t199 = -22068;


void f0(void) {
    	int64_t x1 = INT64_MAX;
	int16_t x2 = -1;
	int32_t x3 = INT32_MIN;
	uint16_t x4 = 0U;
	static int32_t t0 = -435;

    t0 = (x1!=((x2-x3)-x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x7 = 1U;
	volatile int8_t x8 = INT8_MIN;
	volatile int32_t t1 = 208057;

    t1 = (x5!=((x6-x7)-x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x10 = 81656U;
	volatile int16_t x11 = 1;
	volatile uint16_t x12 = 15U;
	int32_t t2 = -40;

    t2 = (x9!=((x10-x11)-x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x14 = INT32_MIN;
	volatile uint32_t x15 = 1504380U;
	int16_t x16 = -1;

    t3 = (x13!=((x14-x15)-x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x17 = -1;
	int16_t x18 = -1;
	int8_t x19 = INT8_MIN;
	uint16_t x20 = 2975U;
	volatile int32_t t4 = 7217982;

    t4 = (x17!=((x18-x19)-x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x22 = -1;
	uint8_t x23 = 7U;
	int32_t t5 = 25536;

    t5 = (x21!=((x22-x23)-x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = -3458;
	uint64_t x26 = 1905LLU;
	int64_t x27 = -1LL;
	int32_t x28 = -1;
	volatile int32_t t6 = -3;

    t6 = (x25!=((x26-x27)-x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x29 = 6LL;
	volatile int8_t x30 = INT8_MIN;
	int8_t x31 = 12;
	int16_t x32 = -13716;
	volatile int32_t t7 = 3;

    t7 = (x29!=((x30-x31)-x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x34 = INT8_MAX;
	static int32_t x35 = INT32_MAX;
	static int32_t x36 = -1;
	int32_t t8 = -117940585;

    t8 = (x33!=((x34-x35)-x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = -10;
	int16_t x38 = 3;
	uint16_t x39 = 35U;
	volatile int8_t x40 = INT8_MIN;
	volatile int32_t t9 = 0;

    t9 = (x37!=((x38-x39)-x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x41 = UINT32_MAX;
	uint64_t x42 = 11985LLU;
	int64_t x43 = INT64_MAX;
	int32_t x44 = -1;
	int32_t t10 = -125647;

    t10 = (x41!=((x42-x43)-x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x45 = 108U;
	uint8_t x46 = 1U;
	uint32_t x47 = 5U;
	static int32_t x48 = 16378074;
	volatile int32_t t11 = 405459;

    t11 = (x45!=((x46-x47)-x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x49 = INT8_MIN;
	int64_t x50 = 4616914358185LL;
	int8_t x51 = -1;
	static uint64_t x52 = 3005288171833LLU;

    t12 = (x49!=((x50-x51)-x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = -13;
	volatile int16_t x54 = 16;
	int8_t x55 = INT8_MIN;
	volatile uint16_t x56 = 145U;

    t13 = (x53!=((x54-x55)-x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x57 = 13U;
	int32_t x58 = -32;
	int8_t x60 = INT8_MAX;
	volatile int32_t t14 = -1149483;

    t14 = (x57!=((x58-x59)-x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint64_t x61 = 205LLU;
	static volatile int8_t x62 = INT8_MIN;
	int16_t x64 = INT16_MIN;
	int32_t t15 = -623208824;

    t15 = (x61!=((x62-x63)-x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int16_t x65 = INT16_MIN;
	int8_t x66 = INT8_MIN;
	volatile int64_t x67 = INT64_MIN;
	volatile int16_t x68 = -1;
	volatile int32_t t16 = 1;

    t16 = (x65!=((x66-x67)-x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x69 = UINT8_MAX;
	uint16_t x70 = 1U;
	int16_t x71 = -1;
	int32_t x72 = -1;
	volatile int32_t t17 = 112620607;

    t17 = (x69!=((x70-x71)-x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint64_t x74 = 1025433LLU;
	volatile uint64_t x76 = 249885707564336LLU;
	static int32_t t18 = -237032;

    t18 = (x73!=((x74-x75)-x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x77 = INT16_MAX;
	uint8_t x78 = 101U;
	volatile int16_t x79 = INT16_MAX;
	volatile int32_t t19 = -36658228;

    t19 = (x77!=((x78-x79)-x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x81 = 18503U;
	static int16_t x82 = -1;
	volatile uint32_t x83 = 160496745U;
	volatile int32_t t20 = -703;

    t20 = (x81!=((x82-x83)-x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x90 = INT16_MAX;
	uint8_t x91 = UINT8_MAX;
	int64_t x92 = INT64_MAX;
	static volatile int32_t t21 = -25;

    t21 = (x89!=((x90-x91)-x92));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x97 = 19972239U;
	uint8_t x98 = UINT8_MAX;
	uint64_t x99 = 150585LLU;
	volatile int32_t x100 = -407;
	int32_t t22 = 209308879;

    t22 = (x97!=((x98-x99)-x100));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x101 = INT16_MAX;
	volatile int32_t x102 = INT32_MIN;
	uint32_t x103 = UINT32_MAX;
	int8_t x104 = 0;
	static volatile int32_t t23 = -257024275;

    t23 = (x101!=((x102-x103)-x104));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x105 = -1;
	uint32_t x106 = 21U;
	int16_t x107 = -1;
	int32_t x108 = INT32_MIN;
	int32_t t24 = -14447121;

    t24 = (x105!=((x106-x107)-x108));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x109 = 8763;
	uint32_t x110 = 3470156U;
	uint32_t x111 = 2882011U;
	int32_t x112 = -86;
	volatile int32_t t25 = 16202;

    t25 = (x109!=((x110-x111)-x112));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x114 = INT8_MAX;
	uint32_t x115 = 1U;
	volatile uint8_t x116 = UINT8_MAX;
	static volatile int32_t t26 = -12;

    t26 = (x113!=((x114-x115)-x116));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x118 = 72U;
	int8_t x119 = -50;
	int16_t x120 = -1;
	volatile int32_t t27 = -481614;

    t27 = (x117!=((x118-x119)-x120));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x125 = 3U;
	int8_t x126 = 1;
	static int32_t x127 = INT32_MAX;
	int32_t x128 = -1;
	volatile int32_t t28 = -10355026;

    t28 = (x125!=((x126-x127)-x128));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x137 = 0U;
	volatile int64_t x138 = -25251668332530381LL;
	int32_t x139 = 13902320;
	uint32_t x140 = 13U;

    t29 = (x137!=((x138-x139)-x140));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint32_t x142 = 0U;
	int8_t x143 = INT8_MIN;
	int16_t x144 = -1;

    t30 = (x141!=((x142-x143)-x144));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x149 = 253U;
	static volatile int64_t x151 = INT64_MAX;
	int16_t x152 = 6;
	static int32_t t31 = -797774;

    t31 = (x149!=((x150-x151)-x152));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x154 = -1;
	int16_t x155 = INT16_MAX;
	volatile int32_t t32 = 159869;

    t32 = (x153!=((x154-x155)-x156));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint16_t x157 = UINT16_MAX;
	int16_t x158 = INT16_MIN;
	static int64_t x159 = INT64_MIN;
	uint8_t x160 = UINT8_MAX;
	int32_t t33 = -1104;

    t33 = (x157!=((x158-x159)-x160));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x162 = 12579742LLU;
	uint8_t x163 = UINT8_MAX;
	int32_t t34 = -18343;

    t34 = (x161!=((x162-x163)-x164));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x167 = INT32_MAX;
	volatile int32_t t35 = 56050;

    t35 = (x165!=((x166-x167)-x168));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x169 = INT8_MIN;
	int64_t x170 = 2LL;
	int16_t x171 = -1;
	int32_t x172 = 1812626;
	int32_t t36 = -26636;

    t36 = (x169!=((x170-x171)-x172));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x173 = INT8_MIN;
	int64_t x176 = 216062334LL;
	int32_t t37 = 189493;

    t37 = (x173!=((x174-x175)-x176));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x177 = 16U;
	int8_t x179 = -1;
	uint8_t x180 = UINT8_MAX;
	int32_t t38 = -25923496;

    t38 = (x177!=((x178-x179)-x180));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x181 = 7794U;
	uint16_t x183 = 60U;
	uint64_t x184 = 1346654LLU;
	volatile int32_t t39 = -154;

    t39 = (x181!=((x182-x183)-x184));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x189 = -1031;
	volatile uint16_t x190 = 9555U;
	uint16_t x191 = UINT16_MAX;
	static uint32_t x192 = 126U;
	volatile int32_t t40 = 100909229;

    t40 = (x189!=((x190-x191)-x192));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x193 = 100U;
	uint32_t x195 = 298U;
	volatile int16_t x196 = INT16_MIN;
	volatile int32_t t41 = -218683;

    t41 = (x193!=((x194-x195)-x196));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile int32_t x198 = -1;
	static int64_t x199 = -1LL;
	static volatile uint8_t x200 = 3U;
	int32_t t42 = -133150097;

    t42 = (x197!=((x198-x199)-x200));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x205 = INT8_MAX;
	int8_t x206 = INT8_MIN;
	int64_t x207 = 7474994LL;
	int32_t x208 = 86;
	volatile int32_t t43 = 522187;

    t43 = (x205!=((x206-x207)-x208));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x209 = INT32_MIN;
	uint8_t x210 = UINT8_MAX;
	int64_t x212 = 7913673LL;
	static int32_t t44 = 104958592;

    t44 = (x209!=((x210-x211)-x212));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x213 = INT64_MAX;
	volatile int32_t x215 = 16;
	volatile int32_t t45 = -3965274;

    t45 = (x213!=((x214-x215)-x216));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint32_t x222 = UINT32_MAX;
	volatile int32_t x223 = -1;
	uint32_t x224 = UINT32_MAX;

    t46 = (x221!=((x222-x223)-x224));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x225 = INT64_MIN;
	int32_t x226 = 1002;
	int32_t x227 = 1;
	static int16_t x228 = INT16_MIN;
	static volatile int32_t t47 = 0;

    t47 = (x225!=((x226-x227)-x228));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x229 = 26LL;
	int8_t x230 = -1;
	volatile int64_t x231 = INT64_MAX;
	int32_t x232 = -1;
	volatile int32_t t48 = 4;

    t48 = (x229!=((x230-x231)-x232));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static int8_t x233 = -3;
	uint64_t x234 = UINT64_MAX;
	int16_t x236 = -1;
	volatile int32_t t49 = 43482;

    t49 = (x233!=((x234-x235)-x236));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x237 = 3U;
	static uint32_t x238 = 655643U;
	volatile int32_t x239 = INT32_MIN;
	int16_t x240 = INT16_MIN;

    t50 = (x237!=((x238-x239)-x240));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x241 = 18601791LLU;
	uint16_t x242 = 3838U;
	static uint16_t x244 = 4129U;
	int32_t t51 = 1;

    t51 = (x241!=((x242-x243)-x244));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x245 = INT64_MIN;
	int8_t x246 = -1;
	volatile int8_t x247 = -1;
	static int64_t x248 = INT64_MAX;

    t52 = (x245!=((x246-x247)-x248));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static int64_t x249 = INT64_MIN;
	int64_t x250 = INT64_MIN;
	int64_t x251 = -16150467744LL;
	volatile int16_t x252 = INT16_MIN;

    t53 = (x249!=((x250-x251)-x252));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x253 = 1687;
	int16_t x255 = INT16_MIN;
	int8_t x256 = -1;
	int32_t t54 = -108027589;

    t54 = (x253!=((x254-x255)-x256));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint64_t x257 = 8930505426107496LLU;
	volatile uint32_t x259 = UINT32_MAX;
	uint16_t x260 = 262U;
	int32_t t55 = -178008008;

    t55 = (x257!=((x258-x259)-x260));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x261 = 3961208893525311LL;
	int64_t x263 = INT64_MAX;
	int32_t t56 = 1797;

    t56 = (x261!=((x262-x263)-x264));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x266 = UINT32_MAX;
	int8_t x267 = INT8_MIN;
	uint64_t x268 = 12653253LLU;

    t57 = (x265!=((x266-x267)-x268));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint64_t x274 = UINT64_MAX;
	static int32_t x275 = INT32_MIN;

    t58 = (x273!=((x274-x275)-x276));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x278 = 10;
	volatile int8_t x279 = -8;
	volatile uint8_t x280 = UINT8_MAX;
	static volatile int32_t t59 = -893;

    t59 = (x277!=((x278-x279)-x280));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x285 = INT64_MIN;
	static int8_t x286 = INT8_MIN;
	int64_t x287 = INT64_MIN;
	static int32_t t60 = 917762040;

    t60 = (x285!=((x286-x287)-x288));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static int32_t x289 = 17169;
	volatile uint16_t x290 = 0U;
	uint8_t x291 = UINT8_MAX;
	uint16_t x292 = 447U;
	volatile int32_t t61 = 45171947;

    t61 = (x289!=((x290-x291)-x292));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x293 = INT16_MAX;
	int8_t x294 = -9;
	int16_t x295 = 71;
	static int64_t x296 = -1LL;
	int32_t t62 = -2;

    t62 = (x293!=((x294-x295)-x296));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x297 = -1;
	volatile int8_t x298 = 3;
	int16_t x300 = INT16_MIN;
	volatile int32_t t63 = -1;

    t63 = (x297!=((x298-x299)-x300));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static int16_t x305 = INT16_MIN;
	uint32_t x306 = UINT32_MAX;
	uint8_t x308 = 3U;
	int32_t t64 = -4;

    t64 = (x305!=((x306-x307)-x308));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x313 = 45U;
	int8_t x315 = INT8_MIN;
	static uint32_t x316 = 485U;

    t65 = (x313!=((x314-x315)-x316));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x321 = INT64_MIN;
	int16_t x322 = INT16_MAX;
	uint16_t x323 = 14U;
	static int8_t x324 = INT8_MIN;
	volatile int32_t t66 = -474;

    t66 = (x321!=((x322-x323)-x324));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x328 = INT32_MAX;
	int32_t t67 = -968;

    t67 = (x325!=((x326-x327)-x328));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x329 = 421770205148735947LL;
	uint8_t x330 = 12U;
	uint16_t x331 = UINT16_MAX;
	int32_t x332 = 2173220;
	int32_t t68 = 6728147;

    t68 = (x329!=((x330-x331)-x332));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint64_t x333 = 12974LLU;
	volatile int32_t x336 = -1;

    t69 = (x333!=((x334-x335)-x336));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x337 = INT32_MIN;
	uint32_t x338 = 44U;
	int32_t x339 = -265108406;
	static volatile int32_t t70 = 1;

    t70 = (x337!=((x338-x339)-x340));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x341 = 29511458847272LL;
	int8_t x343 = -1;
	volatile int16_t x344 = -1;
	volatile int32_t t71 = 4803;

    t71 = (x341!=((x342-x343)-x344));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x345 = -1288165;
	volatile int64_t x347 = -14LL;
	static volatile int8_t x348 = INT8_MAX;
	int32_t t72 = -961810706;

    t72 = (x345!=((x346-x347)-x348));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint32_t x349 = 1818986U;
	volatile int64_t x350 = -1LL;
	volatile int32_t t73 = 1;

    t73 = (x349!=((x350-x351)-x352));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x353 = INT64_MIN;
	static volatile int8_t x354 = INT8_MIN;
	volatile uint32_t x355 = 12571U;

    t74 = (x353!=((x354-x355)-x356));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x358 = INT8_MIN;
	int32_t x359 = -1;
	static uint32_t x360 = 463014906U;
	volatile int32_t t75 = -336737844;

    t75 = (x357!=((x358-x359)-x360));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x362 = -50203LL;
	int16_t x363 = -3019;
	int64_t x364 = -920757559785865LL;
	volatile int32_t t76 = -138772;

    t76 = (x361!=((x362-x363)-x364));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x365 = 1;
	volatile uint8_t x368 = UINT8_MAX;
	int32_t t77 = 36572586;

    t77 = (x365!=((x366-x367)-x368));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x369 = INT16_MIN;
	int32_t x370 = 19;
	volatile int64_t x371 = 0LL;
	volatile uint64_t x372 = 21546LLU;
	int32_t t78 = 1704568;

    t78 = (x369!=((x370-x371)-x372));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x373 = INT16_MIN;
	int8_t x374 = -15;
	uint32_t x375 = 13U;
	static volatile int32_t x376 = 53323617;
	int32_t t79 = -12290848;

    t79 = (x373!=((x374-x375)-x376));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x377 = INT8_MAX;
	int8_t x378 = INT8_MAX;
	int16_t x379 = -4626;
	static int32_t t80 = -52089;

    t80 = (x377!=((x378-x379)-x380));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x381 = 7;
	volatile uint32_t x384 = 163911192U;
	volatile int32_t t81 = 1;

    t81 = (x381!=((x382-x383)-x384));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x385 = -220;
	static int32_t x387 = -43;
	uint32_t x388 = UINT32_MAX;

    t82 = (x385!=((x386-x387)-x388));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x393 = 30;
	volatile uint16_t x394 = 6U;
	uint16_t x395 = UINT16_MAX;
	static int64_t x396 = INT64_MIN;
	static int32_t t83 = -27899;

    t83 = (x393!=((x394-x395)-x396));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int32_t x397 = 32801925;
	uint64_t x398 = 840LLU;
	volatile int8_t x399 = INT8_MAX;
	static int32_t x400 = 16240;
	static int32_t t84 = 3002439;

    t84 = (x397!=((x398-x399)-x400));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x401 = 364422528596769LLU;
	uint8_t x403 = 55U;
	int32_t x404 = 1;
	volatile int32_t t85 = 34;

    t85 = (x401!=((x402-x403)-x404));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x405 = UINT8_MAX;
	uint64_t x406 = 7078524485025210332LLU;
	static int32_t x407 = -349609042;
	int8_t x408 = 2;

    t86 = (x405!=((x406-x407)-x408));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x409 = INT16_MIN;
	static int16_t x410 = INT16_MAX;
	static int16_t x411 = -1;
	static int32_t t87 = 201406;

    t87 = (x409!=((x410-x411)-x412));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x413 = INT16_MIN;
	uint8_t x414 = 6U;
	int32_t x415 = 25;
	int64_t x416 = -71287115283491650LL;

    t88 = (x413!=((x414-x415)-x416));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x418 = 36U;
	uint32_t x419 = UINT32_MAX;
	uint64_t x420 = 194189004455LLU;

    t89 = (x417!=((x418-x419)-x420));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x421 = INT16_MIN;
	int16_t x422 = -964;
	static uint16_t x423 = 1U;
	int8_t x424 = -1;

    t90 = (x421!=((x422-x423)-x424));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x426 = INT32_MIN;
	static int16_t x427 = INT16_MIN;
	int16_t x428 = -1;

    t91 = (x425!=((x426-x427)-x428));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static int16_t x429 = INT16_MIN;
	int32_t x430 = -1013;
	uint16_t x431 = 0U;
	int32_t x432 = -1;
	int32_t t92 = -32478;

    t92 = (x429!=((x430-x431)-x432));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x433 = 5;
	static int64_t x434 = 33136273150127352LL;
	int32_t x435 = INT32_MIN;
	volatile uint8_t x436 = UINT8_MAX;

    t93 = (x433!=((x434-x435)-x436));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x437 = 7U;
	int8_t x439 = -5;
	volatile int32_t t94 = 62426635;

    t94 = (x437!=((x438-x439)-x440));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x445 = -1;
	volatile uint64_t x446 = 6400LLU;
	static int16_t x447 = -1651;
	static int64_t x448 = INT64_MAX;
	int32_t t95 = 5395742;

    t95 = (x445!=((x446-x447)-x448));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x449 = 96U;
	uint16_t x450 = UINT16_MAX;
	int64_t x451 = -1LL;
	static int8_t x452 = 8;
	int32_t t96 = -2;

    t96 = (x449!=((x450-x451)-x452));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x457 = 20185;
	static volatile uint16_t x458 = 68U;
	int8_t x459 = -1;
	volatile uint64_t x460 = 2290213147574376595LLU;
	int32_t t97 = 263;

    t97 = (x457!=((x458-x459)-x460));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x462 = -1LL;
	int64_t x463 = -1LL;
	uint32_t x464 = 393355938U;
	int32_t t98 = -31405;

    t98 = (x461!=((x462-x463)-x464));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x466 = INT8_MIN;
	int16_t x467 = 1;
	int8_t x468 = INT8_MIN;
	int32_t t99 = -201;

    t99 = (x465!=((x466-x467)-x468));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x471 = -1;
	volatile int16_t x472 = INT16_MIN;
	volatile int32_t t100 = -1;

    t100 = (x469!=((x470-x471)-x472));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x474 = 427U;
	int8_t x475 = -4;
	int64_t x476 = -1LL;
	static int32_t t101 = -5859;

    t101 = (x473!=((x474-x475)-x476));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x477 = -1;
	uint16_t x478 = UINT16_MAX;
	uint16_t x479 = UINT16_MAX;
	int64_t x480 = 92947LL;
	static volatile int32_t t102 = 464822984;

    t102 = (x477!=((x478-x479)-x480));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x490 = 2LL;
	volatile int32_t x492 = 1024;

    t103 = (x489!=((x490-x491)-x492));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int64_t x493 = INT64_MIN;
	int16_t x494 = INT16_MIN;
	static volatile uint16_t x495 = UINT16_MAX;
	uint16_t x496 = UINT16_MAX;
	int32_t t104 = -492;

    t104 = (x493!=((x494-x495)-x496));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x497 = 27309U;
	int32_t x499 = -1;
	volatile uint16_t x500 = UINT16_MAX;
	volatile int32_t t105 = -12;

    t105 = (x497!=((x498-x499)-x500));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x501 = UINT32_MAX;
	static uint8_t x502 = 3U;
	static volatile uint8_t x503 = 2U;
	int8_t x504 = -1;
	static volatile int32_t t106 = 1;

    t106 = (x501!=((x502-x503)-x504));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x505 = 42U;
	volatile int8_t x506 = INT8_MAX;
	volatile uint8_t x507 = 0U;
	static volatile int8_t x508 = INT8_MAX;
	volatile int32_t t107 = -5;

    t107 = (x505!=((x506-x507)-x508));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x509 = INT64_MIN;
	int16_t x510 = -1;
	int8_t x511 = INT8_MIN;
	uint16_t x512 = 1371U;
	int32_t t108 = 82;

    t108 = (x509!=((x510-x511)-x512));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x514 = 5517976U;
	uint32_t x515 = 89U;
	uint8_t x516 = 12U;
	volatile int32_t t109 = 4260;

    t109 = (x513!=((x514-x515)-x516));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x517 = UINT16_MAX;
	int8_t x518 = -1;
	uint32_t x519 = 11852U;
	volatile uint32_t x520 = UINT32_MAX;
	int32_t t110 = 11018;

    t110 = (x517!=((x518-x519)-x520));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x521 = INT32_MAX;
	uint32_t x522 = 7U;
	int16_t x523 = -1;
	uint32_t x524 = 546008U;
	static int32_t t111 = 1887256;

    t111 = (x521!=((x522-x523)-x524));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x529 = INT64_MIN;
	int8_t x530 = 13;
	volatile int64_t x531 = -250730307861LL;
	int16_t x532 = -1;
	volatile int32_t t112 = 977;

    t112 = (x529!=((x530-x531)-x532));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x533 = 1642U;
	int16_t x535 = INT16_MAX;
	static int8_t x536 = -14;
	int32_t t113 = -192;

    t113 = (x533!=((x534-x535)-x536));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int64_t x537 = INT64_MAX;
	int32_t x538 = -1;
	int16_t x539 = INT16_MIN;
	int32_t t114 = -23618;

    t114 = (x537!=((x538-x539)-x540));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x541 = -1;
	static int16_t x542 = INT16_MAX;
	static uint8_t x543 = 7U;
	static int32_t t115 = -1744;

    t115 = (x541!=((x542-x543)-x544));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x545 = -8962673;
	static int16_t x546 = INT16_MIN;
	int8_t x547 = INT8_MIN;
	volatile int32_t t116 = -1;

    t116 = (x545!=((x546-x547)-x548));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x549 = 5U;
	volatile int32_t x550 = 100616142;
	static int16_t x551 = INT16_MAX;
	uint8_t x552 = UINT8_MAX;
	int32_t t117 = -133220268;

    t117 = (x549!=((x550-x551)-x552));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint8_t x553 = UINT8_MAX;
	static int16_t x554 = -1;
	volatile uint64_t x555 = 2951228190002692LLU;
	volatile int64_t x556 = -1LL;
	int32_t t118 = -34;

    t118 = (x553!=((x554-x555)-x556));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x558 = INT8_MAX;
	int64_t x559 = -1LL;
	volatile int32_t t119 = -410;

    t119 = (x557!=((x558-x559)-x560));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint32_t x561 = UINT32_MAX;
	uint16_t x562 = UINT16_MAX;
	static uint64_t x563 = UINT64_MAX;
	static uint32_t x564 = UINT32_MAX;
	volatile int32_t t120 = -1052485839;

    t120 = (x561!=((x562-x563)-x564));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x565 = INT32_MIN;
	int32_t x566 = -3244;
	int32_t x567 = INT32_MIN;
	int8_t x568 = INT8_MIN;
	static int32_t t121 = 85;

    t121 = (x565!=((x566-x567)-x568));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x570 = INT8_MIN;
	int8_t x572 = 1;
	int32_t t122 = 3862823;

    t122 = (x569!=((x570-x571)-x572));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x573 = INT64_MAX;
	volatile int64_t x574 = -133928905191LL;
	uint64_t x575 = 9170975LLU;
	int32_t x576 = 3935;
	int32_t t123 = -112;

    t123 = (x573!=((x574-x575)-x576));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int64_t x577 = -2665642101LL;
	static int8_t x578 = -1;
	volatile int32_t t124 = 225;

    t124 = (x577!=((x578-x579)-x580));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x581 = -1;
	int16_t x582 = INT16_MIN;
	uint64_t x583 = 217969LLU;
	int32_t x584 = -1;
	static volatile int32_t t125 = 14;

    t125 = (x581!=((x582-x583)-x584));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x589 = INT64_MAX;
	static int8_t x590 = INT8_MAX;
	int64_t x591 = -29LL;
	static volatile int64_t x592 = -41571468LL;
	volatile int32_t t126 = 0;

    t126 = (x589!=((x590-x591)-x592));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x597 = -1;
	static volatile int16_t x598 = 1;
	volatile uint16_t x599 = UINT16_MAX;
	int32_t t127 = -15646484;

    t127 = (x597!=((x598-x599)-x600));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x605 = UINT16_MAX;
	volatile int16_t x606 = INT16_MIN;
	uint32_t x607 = 19U;
	int8_t x608 = -1;
	int32_t t128 = 47606641;

    t128 = (x605!=((x606-x607)-x608));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint64_t x625 = 615132045363655LLU;
	static int8_t x627 = -1;
	volatile int64_t x628 = INT64_MIN;

    t129 = (x625!=((x626-x627)-x628));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x637 = -781766155291354944LL;
	int16_t x638 = -16190;
	int16_t x639 = INT16_MIN;
	int16_t x640 = 4174;
	static volatile int32_t t130 = -24472;

    t130 = (x637!=((x638-x639)-x640));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile uint16_t x642 = 4U;
	static int8_t x643 = 12;
	static volatile uint64_t x644 = 0LLU;

    t131 = (x641!=((x642-x643)-x644));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x653 = INT8_MAX;
	volatile int64_t x654 = INT64_MAX;
	static uint64_t x655 = 499966242LLU;
	static uint64_t x656 = UINT64_MAX;

    t132 = (x653!=((x654-x655)-x656));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x657 = INT16_MIN;
	int8_t x658 = INT8_MIN;
	static int32_t t133 = -6777873;

    t133 = (x657!=((x658-x659)-x660));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x661 = 543931098407752LLU;
	int16_t x662 = INT16_MIN;
	int16_t x663 = INT16_MIN;
	uint8_t x664 = 117U;
	static int32_t t134 = -1523;

    t134 = (x661!=((x662-x663)-x664));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x666 = INT32_MAX;
	int32_t t135 = 6;

    t135 = (x665!=((x666-x667)-x668));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x672 = INT16_MIN;

    t136 = (x669!=((x670-x671)-x672));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile int64_t x673 = 183LL;
	int8_t x675 = INT8_MIN;
	volatile int16_t x676 = INT16_MAX;
	int32_t t137 = 2027;

    t137 = (x673!=((x674-x675)-x676));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x681 = INT32_MAX;
	int32_t x682 = INT32_MAX;
	static int8_t x683 = INT8_MAX;
	int8_t x684 = 2;

    t138 = (x681!=((x682-x683)-x684));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x685 = INT64_MAX;
	int8_t x686 = -1;
	int8_t x687 = 0;
	volatile int8_t x688 = INT8_MIN;
	int32_t t139 = 13997887;

    t139 = (x685!=((x686-x687)-x688));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static int8_t x690 = INT8_MIN;
	volatile int16_t x692 = 2;
	int32_t t140 = 63212;

    t140 = (x689!=((x690-x691)-x692));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x693 = -1;
	static uint64_t x694 = UINT64_MAX;
	int32_t t141 = -3145364;

    t141 = (x693!=((x694-x695)-x696));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x697 = INT32_MIN;
	int8_t x698 = -1;
	int64_t x699 = INT64_MIN;
	static volatile int32_t t142 = -9;

    t142 = (x697!=((x698-x699)-x700));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x701 = INT32_MIN;
	int16_t x702 = INT16_MIN;
	static int8_t x703 = -1;
	int16_t x704 = INT16_MIN;
	static volatile int32_t t143 = 4596195;

    t143 = (x701!=((x702-x703)-x704));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x706 = INT16_MIN;
	static int16_t x707 = -1;
	volatile int32_t t144 = 0;

    t144 = (x705!=((x706-x707)-x708));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x709 = UINT8_MAX;
	int16_t x710 = -6044;
	int8_t x711 = INT8_MIN;
	static uint16_t x712 = UINT16_MAX;
	static volatile int32_t t145 = -7398506;

    t145 = (x709!=((x710-x711)-x712));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x714 = 29397U;
	volatile uint64_t x716 = 111756617503LLU;

    t146 = (x713!=((x714-x715)-x716));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static int64_t x717 = 285287202364285927LL;
	volatile int64_t x718 = INT64_MIN;
	uint32_t x720 = 163138U;
	volatile int32_t t147 = -45;

    t147 = (x717!=((x718-x719)-x720));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static int8_t x722 = 1;
	int64_t x723 = -1LL;
	int32_t x724 = INT32_MIN;
	int32_t t148 = -1;

    t148 = (x721!=((x722-x723)-x724));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x727 = INT8_MAX;
	static int16_t x728 = INT16_MIN;
	int32_t t149 = 3840;

    t149 = (x725!=((x726-x727)-x728));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x729 = 0U;
	int8_t x730 = INT8_MAX;
	uint64_t x731 = UINT64_MAX;
	int64_t x732 = -2631722357342237222LL;
	int32_t t150 = 446476848;

    t150 = (x729!=((x730-x731)-x732));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int16_t x733 = INT16_MIN;
	uint32_t x734 = UINT32_MAX;
	volatile uint16_t x735 = UINT16_MAX;
	int32_t t151 = 3387;

    t151 = (x733!=((x734-x735)-x736));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint64_t x737 = UINT64_MAX;
	uint32_t x738 = 1U;
	uint32_t x739 = UINT32_MAX;
	static int16_t x740 = INT16_MIN;

    t152 = (x737!=((x738-x739)-x740));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x745 = -1;
	static int8_t x746 = INT8_MIN;
	int8_t x747 = 13;
	volatile int32_t x748 = -1;
	volatile int32_t t153 = -13986375;

    t153 = (x745!=((x746-x747)-x748));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x749 = INT8_MAX;
	int16_t x751 = INT16_MIN;
	int32_t x752 = INT32_MAX;
	volatile int32_t t154 = -459;

    t154 = (x749!=((x750-x751)-x752));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x754 = INT64_MIN;
	volatile int32_t x756 = -1;
	static int32_t t155 = 557694;

    t155 = (x753!=((x754-x755)-x756));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int16_t x759 = INT16_MAX;

    t156 = (x757!=((x758-x759)-x760));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x761 = INT64_MIN;
	int8_t x762 = -5;
	static uint32_t x763 = 53U;
	int32_t t157 = 16686771;

    t157 = (x761!=((x762-x763)-x764));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x765 = INT32_MAX;
	int16_t x767 = INT16_MIN;
	int16_t x768 = INT16_MIN;
	static int32_t t158 = -106269907;

    t158 = (x765!=((x766-x767)-x768));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static int32_t x769 = INT32_MAX;
	static uint8_t x770 = 16U;
	uint16_t x771 = 1847U;
	volatile int32_t t159 = 35;

    t159 = (x769!=((x770-x771)-x772));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static int64_t x773 = INT64_MIN;
	volatile uint64_t x774 = 130034LLU;
	static int64_t x775 = INT64_MIN;
	int32_t t160 = -1;

    t160 = (x773!=((x774-x775)-x776));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x781 = 10042;
	uint32_t x782 = 41539U;
	volatile int8_t x783 = -1;
	uint32_t x784 = 853079474U;
	int32_t t161 = 599064514;

    t161 = (x781!=((x782-x783)-x784));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x785 = INT16_MIN;
	int16_t x788 = INT16_MIN;
	int32_t t162 = -1;

    t162 = (x785!=((x786-x787)-x788));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x791 = 244U;
	int8_t x792 = -31;
	int32_t t163 = 12274;

    t163 = (x789!=((x790-x791)-x792));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint64_t x797 = 6728320380962967397LLU;
	uint8_t x798 = 1U;
	int64_t x799 = 3573714093LL;
	static uint32_t x800 = UINT32_MAX;
	int32_t t164 = -108480669;

    t164 = (x797!=((x798-x799)-x800));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x801 = INT32_MAX;
	uint8_t x802 = 0U;
	volatile int8_t x803 = INT8_MIN;
	static uint8_t x804 = 0U;
	volatile int32_t t165 = 2104;

    t165 = (x801!=((x802-x803)-x804));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x805 = INT32_MAX;
	volatile uint64_t x806 = 701616925072LLU;
	volatile int32_t x808 = 905;
	int32_t t166 = -211;

    t166 = (x805!=((x806-x807)-x808));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile int64_t x810 = -3688510166125LL;
	int8_t x811 = -5;
	int64_t x812 = INT64_MIN;

    t167 = (x809!=((x810-x811)-x812));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x813 = 85633LLU;
	int8_t x815 = -1;
	volatile int32_t x816 = 5880415;
	static int32_t t168 = -21095;

    t168 = (x813!=((x814-x815)-x816));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x817 = INT8_MIN;
	int8_t x818 = -26;
	volatile int16_t x820 = 12395;
	static volatile int32_t t169 = 1;

    t169 = (x817!=((x818-x819)-x820));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int8_t x821 = 1;
	int64_t x822 = 3888199325589LL;
	uint32_t x823 = 85740754U;
	int64_t x824 = -5775LL;
	volatile int32_t t170 = 451225;

    t170 = (x821!=((x822-x823)-x824));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x825 = 1843U;
	int16_t x827 = INT16_MAX;
	volatile int8_t x828 = INT8_MAX;
	int32_t t171 = 288250319;

    t171 = (x825!=((x826-x827)-x828));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x829 = 313U;
	uint8_t x830 = 0U;
	uint8_t x831 = 1U;
	static int32_t x832 = INT32_MIN;
	int32_t t172 = -62093776;

    t172 = (x829!=((x830-x831)-x832));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static int16_t x834 = -11;
	int32_t x835 = -1564844;
	int8_t x836 = -3;
	int32_t t173 = -418;

    t173 = (x833!=((x834-x835)-x836));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x838 = 26190;
	int8_t x839 = INT8_MAX;
	static uint64_t x840 = 1LLU;
	volatile int32_t t174 = 51740;

    t174 = (x837!=((x838-x839)-x840));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x841 = -1;
	int64_t x842 = -15756675LL;
	static volatile int16_t x843 = -1;
	int16_t x844 = INT16_MAX;
	static int32_t t175 = 445779;

    t175 = (x841!=((x842-x843)-x844));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int8_t x845 = -37;
	uint32_t x846 = 734941212U;
	static int8_t x847 = INT8_MAX;
	int8_t x848 = -1;
	int32_t t176 = 6;

    t176 = (x845!=((x846-x847)-x848));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x849 = UINT32_MAX;
	static int64_t x850 = INT64_MIN;
	int8_t x851 = INT8_MIN;
	static volatile int16_t x852 = -1;
	int32_t t177 = 245878;

    t177 = (x849!=((x850-x851)-x852));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t x853 = -1;
	int16_t x854 = -46;
	uint32_t x855 = 1062190U;
	int32_t x856 = INT32_MIN;
	volatile int32_t t178 = 190137;

    t178 = (x853!=((x854-x855)-x856));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x857 = INT32_MIN;
	uint16_t x859 = UINT16_MAX;
	int32_t x860 = -29;
	static int32_t t179 = 939;

    t179 = (x857!=((x858-x859)-x860));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x861 = -1;
	int16_t x862 = -16;
	int32_t x863 = 0;
	int32_t x864 = -113;
	volatile int32_t t180 = 244782833;

    t180 = (x861!=((x862-x863)-x864));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x865 = INT8_MAX;
	static volatile uint8_t x867 = 0U;
	volatile int32_t x868 = -1;
	static int32_t t181 = 79;

    t181 = (x865!=((x866-x867)-x868));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x869 = INT8_MAX;
	int16_t x870 = INT16_MIN;
	static uint8_t x871 = UINT8_MAX;
	int8_t x872 = INT8_MAX;
	volatile int32_t t182 = -156871;

    t182 = (x869!=((x870-x871)-x872));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x873 = INT8_MAX;
	int64_t x874 = 207122218LL;
	int64_t x875 = INT64_MAX;
	int8_t x876 = -1;
	int32_t t183 = -27370;

    t183 = (x873!=((x874-x875)-x876));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int64_t x877 = -647LL;
	int64_t x879 = -1LL;
	uint16_t x880 = 2997U;
	volatile int32_t t184 = -3254332;

    t184 = (x877!=((x878-x879)-x880));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint64_t x881 = 46276LLU;
	int16_t x882 = 2516;
	static int32_t x884 = -9164;
	volatile int32_t t185 = -7100352;

    t185 = (x881!=((x882-x883)-x884));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x885 = 2301874;
	uint32_t x887 = 1625741332U;
	int8_t x888 = 22;
	volatile int32_t t186 = -2903313;

    t186 = (x885!=((x886-x887)-x888));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x890 = INT16_MIN;
	uint32_t x891 = 1779751U;
	static uint64_t x892 = UINT64_MAX;
	volatile int32_t t187 = -99;

    t187 = (x889!=((x890-x891)-x892));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static int64_t x893 = INT64_MIN;
	volatile uint8_t x894 = 11U;
	static int64_t x895 = 2139623LL;
	static uint32_t x896 = UINT32_MAX;
	volatile int32_t t188 = 935898;

    t188 = (x893!=((x894-x895)-x896));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x897 = -1;
	int32_t x899 = -1;
	int8_t x900 = INT8_MIN;
	static int32_t t189 = 119098;

    t189 = (x897!=((x898-x899)-x900));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x905 = -495;
	int32_t x906 = INT32_MIN;
	static int16_t x907 = -1;
	volatile int32_t x908 = INT32_MIN;
	volatile int32_t t190 = -4486;

    t190 = (x905!=((x906-x907)-x908));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x910 = -33;
	int16_t x911 = -1;

    t191 = (x909!=((x910-x911)-x912));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x917 = 1U;
	volatile int32_t x920 = INT32_MIN;
	volatile int32_t t192 = -1;

    t192 = (x917!=((x918-x919)-x920));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x922 = 38U;
	uint64_t x923 = 661LLU;
	int64_t x924 = INT64_MIN;
	int32_t t193 = 25467;

    t193 = (x921!=((x922-x923)-x924));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint64_t x930 = UINT64_MAX;
	int32_t x931 = 443930;
	uint16_t x932 = 4U;
	volatile int32_t t194 = -1;

    t194 = (x929!=((x930-x931)-x932));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x934 = 168305U;
	uint64_t x935 = UINT64_MAX;
	static int32_t x936 = -1;
	int32_t t195 = 0;

    t195 = (x933!=((x934-x935)-x936));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x937 = UINT32_MAX;
	int16_t x938 = -18;
	static uint32_t x940 = 203113520U;
	volatile int32_t t196 = 13;

    t196 = (x937!=((x938-x939)-x940));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x942 = -1;
	static int8_t x943 = 22;
	int16_t x944 = -75;
	int32_t t197 = 75355199;

    t197 = (x941!=((x942-x943)-x944));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x945 = 6812041;
	static int16_t x946 = -1;
	uint8_t x947 = 4U;
	uint16_t x948 = 42U;
	volatile int32_t t198 = 579;

    t198 = (x945!=((x946-x947)-x948));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x953 = INT64_MIN;
	int64_t x954 = -50682643329LL;
	int8_t x956 = -1;

    t199 = (x953!=((x954-x955)-x956));

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

