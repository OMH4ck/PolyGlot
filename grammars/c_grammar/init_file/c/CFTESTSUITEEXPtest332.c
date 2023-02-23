
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

static int64_t x11 = -1LL;
int32_t t2 = 39;
int64_t x20 = -1LL;
volatile int32_t t4 = -413;
int32_t x39 = INT32_MIN;
uint32_t x44 = UINT32_MAX;
uint8_t x45 = 1U;
int32_t x47 = INT32_MAX;
static uint64_t x48 = 31600080818064282LLU;
volatile uint8_t x61 = UINT8_MAX;
static int64_t x63 = INT64_MAX;
int32_t t15 = -44;
int32_t x85 = -16789897;
static uint64_t x94 = 3875188044157LLU;
int8_t x99 = INT8_MAX;
static uint8_t x102 = 1U;
int16_t x109 = -1;
int8_t x110 = INT8_MIN;
uint32_t x111 = UINT32_MAX;
uint32_t x112 = 4U;
int8_t x113 = 0;
uint16_t x114 = 17U;
uint32_t x116 = 272569812U;
static int32_t x117 = INT32_MIN;
int32_t t25 = -131785159;
int64_t x135 = -1LL;
int16_t x137 = 0;
uint8_t x151 = UINT8_MAX;
volatile int32_t t30 = 12303566;
static int8_t x154 = -10;
int64_t x167 = -1LL;
int32_t t33 = -246973;
int32_t x169 = INT32_MIN;
volatile int32_t t35 = 41935;
static int64_t x201 = 8499470348438LL;
int16_t x210 = -1;
int64_t x216 = 38164321127824869LL;
static volatile int32_t t43 = -2;
int64_t x224 = -62413603937LL;
volatile uint8_t x229 = 0U;
int32_t x241 = INT32_MIN;
int16_t x248 = -3722;
int8_t x263 = -9;
volatile int32_t t54 = 54085;
volatile uint16_t x270 = 12536U;
uint32_t x272 = 8043U;
int64_t x275 = 110043320982LL;
volatile uint32_t x289 = 1058915240U;
int16_t x290 = INT16_MIN;
static uint8_t x292 = 6U;
int8_t x301 = INT8_MIN;
volatile int16_t x304 = INT16_MAX;
static int8_t x306 = INT8_MIN;
int64_t x308 = 7595468519216844LL;
int8_t x310 = INT8_MIN;
int32_t x312 = -1;
uint16_t x314 = 465U;
static int64_t x318 = 552222735674814805LL;
int8_t x326 = INT8_MAX;
uint32_t x328 = 1199348622U;
uint64_t x336 = 48451920405LLU;
int8_t x359 = INT8_MIN;
int32_t t75 = 305;
uint64_t x361 = 28LLU;
int16_t x367 = INT16_MIN;
int64_t x368 = INT64_MIN;
int16_t x373 = INT16_MIN;
int32_t t81 = 6135;
volatile int32_t x386 = -3756;
static int16_t x394 = -1;
int8_t x405 = -7;
static int8_t x411 = -1;
int64_t x421 = 57987579201317589LL;
static int64_t x440 = 606873904563542772LL;
static volatile int32_t x444 = INT32_MIN;
static int32_t x446 = INT32_MAX;
int8_t x455 = -1;
volatile int16_t x456 = INT16_MIN;
uint32_t x465 = UINT32_MAX;
int8_t x471 = -1;
volatile int32_t t98 = 12828;
static int32_t t99 = 1757109;
volatile int32_t t100 = -747575645;
int32_t t102 = -2039;
int64_t x490 = 6717656LL;
volatile int32_t t105 = 6;
volatile int16_t x511 = INT16_MIN;
volatile int32_t t107 = -1037057492;
volatile int8_t x522 = INT8_MIN;
uint32_t x527 = UINT32_MAX;
uint64_t x530 = 628851383LLU;
volatile int16_t x533 = INT16_MIN;
uint8_t x542 = 0U;
volatile int32_t x545 = INT32_MIN;
uint64_t x552 = 20118LLU;
uint32_t x553 = 9448303U;
int8_t x555 = INT8_MIN;
int8_t x573 = INT8_MIN;
static volatile int32_t t121 = -487669660;
static uint16_t x585 = UINT16_MAX;
static uint16_t x587 = 29U;
volatile int32_t t124 = -197867;
int64_t x591 = INT64_MIN;
int32_t t126 = -574593;
int32_t x610 = -317;
static int32_t x618 = INT32_MIN;
int16_t x623 = -6317;
volatile uint32_t x624 = 32547702U;
uint8_t x625 = 0U;
volatile int32_t t133 = 499102768;
uint8_t x631 = UINT8_MAX;
int32_t t134 = 1009;
int16_t x637 = -8757;
volatile int32_t x641 = INT32_MAX;
int8_t x642 = -1;
volatile uint64_t x644 = 10LLU;
int32_t t138 = -553;
uint32_t x649 = 24U;
static uint16_t x654 = UINT16_MAX;
int8_t x661 = 47;
static int64_t x662 = INT64_MIN;
int32_t t142 = 0;
int8_t x667 = -1;
volatile int32_t t144 = 131086642;
int16_t x683 = INT16_MIN;
int64_t x691 = -1LL;
int8_t x693 = INT8_MIN;
uint64_t x699 = UINT64_MAX;
int64_t x700 = INT64_MAX;
int16_t x702 = INT16_MAX;
uint8_t x703 = 16U;
uint64_t x712 = UINT64_MAX;
static int64_t x717 = INT64_MIN;
int8_t x723 = 1;
volatile int16_t x724 = 11;
int8_t x728 = -7;
static volatile int32_t t157 = -106177904;
int32_t x733 = INT32_MAX;
volatile int64_t x740 = 352035977327409LL;
uint64_t x743 = 1804LLU;
static volatile int64_t x746 = -1LL;
volatile int32_t t161 = 7316;
volatile int32_t x749 = INT32_MIN;
uint64_t x750 = 56190831572LLU;
int16_t x765 = -1;
static int64_t x768 = -1LL;
volatile int8_t x769 = 3;
static int8_t x770 = INT8_MAX;
int64_t x772 = INT64_MIN;
volatile int8_t x777 = INT8_MAX;
static int32_t t169 = -56;
int32_t t170 = -197741030;
uint64_t x788 = 29901447LLU;
volatile int32_t t172 = 475699;
int16_t x798 = INT16_MAX;
uint64_t x799 = 237049LLU;
volatile uint16_t x802 = UINT16_MAX;
uint8_t x803 = UINT8_MAX;
volatile int8_t x804 = INT8_MAX;
int16_t x807 = INT16_MIN;
static int64_t x812 = 32098903LL;
int16_t x817 = -18;
int8_t x825 = -5;
volatile int64_t x830 = 0LL;
static int64_t x831 = INT64_MAX;
int32_t t182 = 2067562;
int8_t x833 = -28;
uint32_t x834 = 8049993U;
int8_t x841 = 5;
uint16_t x843 = UINT16_MAX;
volatile int32_t t184 = 465;
volatile int64_t x847 = 234102093435171612LL;
static int32_t t186 = -16319;
int32_t x853 = -2041555;
static volatile int32_t t187 = 60682132;
int16_t x863 = -1;
int32_t x868 = -999672;
int8_t x872 = -1;
int16_t x888 = -1;
static int16_t x895 = 55;
int32_t t196 = 27;
uint32_t x897 = 103U;
int32_t t197 = 423;
static int8_t x909 = 60;
int16_t x910 = -1;


void f0(void) {
    	int16_t x1 = -1;
	int16_t x2 = INT16_MIN;
	int8_t x3 = INT8_MIN;
	static volatile int64_t x4 = -2545373917LL;
	volatile int32_t t0 = -1;

    t0 = (x1<=((x2-x3)<=x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x5 = 102;
	uint16_t x6 = UINT16_MAX;
	uint8_t x7 = 3U;
	int16_t x8 = INT16_MIN;
	static volatile int32_t t1 = 213164;

    t1 = (x5<=((x6-x7)<=x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = 211822338841LLU;
	uint32_t x10 = 19071867U;
	uint8_t x12 = 0U;

    t2 = (x9<=((x10-x11)<=x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x13 = INT32_MIN;
	static volatile int8_t x14 = INT8_MIN;
	int16_t x15 = INT16_MIN;
	volatile uint64_t x16 = 145310307430923LLU;
	volatile int32_t t3 = -11051175;

    t3 = (x13<=((x14-x15)<=x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile uint16_t x17 = 70U;
	int8_t x18 = 1;
	int32_t x19 = -1;

    t4 = (x17<=((x18-x19)<=x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = 140449237U;
	uint32_t x22 = 14568U;
	int16_t x23 = INT16_MAX;
	int8_t x24 = INT8_MIN;
	static volatile int32_t t5 = -255417;

    t5 = (x21<=((x22-x23)<=x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = -1;
	uint16_t x26 = 4695U;
	int64_t x27 = INT64_MAX;
	uint32_t x28 = 3949U;
	static volatile int32_t t6 = 101083080;

    t6 = (x25<=((x26-x27)<=x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x29 = UINT32_MAX;
	uint8_t x30 = UINT8_MAX;
	uint16_t x31 = 0U;
	static int32_t x32 = INT32_MAX;
	static volatile int32_t t7 = -3;

    t7 = (x29<=((x30-x31)<=x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = 27;
	int32_t x34 = INT32_MIN;
	int32_t x35 = -30540;
	uint8_t x36 = 92U;
	static volatile int32_t t8 = -48;

    t8 = (x33<=((x34-x35)<=x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint8_t x37 = 43U;
	volatile int64_t x38 = INT64_MIN;
	volatile int64_t x40 = INT64_MIN;
	volatile int32_t t9 = -1572039;

    t9 = (x37<=((x38-x39)<=x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x41 = 0;
	int16_t x42 = 64;
	uint16_t x43 = 23U;
	int32_t t10 = 45312;

    t10 = (x41<=((x42-x43)<=x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x46 = -1;
	volatile int32_t t11 = -234753;

    t11 = (x45<=((x46-x47)<=x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x49 = 0LLU;
	static uint32_t x50 = UINT32_MAX;
	uint8_t x51 = 3U;
	uint64_t x52 = UINT64_MAX;
	int32_t t12 = 133236894;

    t12 = (x49<=((x50-x51)<=x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x62 = -1;
	int32_t x64 = INT32_MAX;
	int32_t t13 = -3923;

    t13 = (x61<=((x62-x63)<=x64));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x73 = 2780LL;
	static int8_t x74 = INT8_MIN;
	int64_t x75 = INT64_MIN;
	int8_t x76 = -1;
	int32_t t14 = -5657;

    t14 = (x73<=((x74-x75)<=x76));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x77 = INT64_MIN;
	uint32_t x78 = 3683113U;
	uint64_t x79 = 28245013310LLU;
	int8_t x80 = -2;

    t15 = (x77<=((x78-x79)<=x80));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x81 = 930U;
	int32_t x82 = INT32_MAX;
	int64_t x83 = -1LL;
	int8_t x84 = INT8_MIN;
	int32_t t16 = 3603196;

    t16 = (x81<=((x82-x83)<=x84));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x86 = -1;
	static uint16_t x87 = 5U;
	static int16_t x88 = INT16_MAX;
	int32_t t17 = 355787889;

    t17 = (x85<=((x86-x87)<=x88));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x89 = 350;
	static int8_t x90 = -1;
	int16_t x91 = INT16_MIN;
	volatile int64_t x92 = INT64_MAX;
	static volatile int32_t t18 = 88611;

    t18 = (x89<=((x90-x91)<=x92));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x93 = UINT64_MAX;
	volatile int32_t x95 = -11;
	int64_t x96 = -591989198510118882LL;
	volatile int32_t t19 = 3763;

    t19 = (x93<=((x94-x95)<=x96));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x97 = -1;
	volatile int16_t x98 = INT16_MIN;
	int32_t x100 = -10119141;
	int32_t t20 = 8135027;

    t20 = (x97<=((x98-x99)<=x100));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x101 = -7;
	static volatile uint64_t x103 = 2870715LLU;
	uint64_t x104 = 199764902897182LLU;
	static int32_t t21 = -709;

    t21 = (x101<=((x102-x103)<=x104));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x105 = 81U;
	uint8_t x106 = UINT8_MAX;
	int32_t x107 = -1;
	volatile uint16_t x108 = UINT16_MAX;
	int32_t t22 = -3;

    t22 = (x105<=((x106-x107)<=x108));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int32_t t23 = 1;

    t23 = (x109<=((x110-x111)<=x112));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x115 = UINT16_MAX;
	volatile int32_t t24 = -100366434;

    t24 = (x113<=((x114-x115)<=x116));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x118 = -1;
	uint32_t x119 = 61112269U;
	volatile int32_t x120 = INT32_MIN;

    t25 = (x117<=((x118-x119)<=x120));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x129 = INT8_MIN;
	volatile uint32_t x130 = 218U;
	static int8_t x131 = 1;
	static int8_t x132 = INT8_MAX;
	volatile int32_t t26 = 2013;

    t26 = (x129<=((x130-x131)<=x132));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile uint32_t x133 = UINT32_MAX;
	uint16_t x134 = 7398U;
	static int64_t x136 = 61346040096380LL;
	int32_t t27 = -8233243;

    t27 = (x133<=((x134-x135)<=x136));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x138 = 9;
	uint16_t x139 = UINT16_MAX;
	int16_t x140 = 26;
	volatile int32_t t28 = 2134;

    t28 = (x137<=((x138-x139)<=x140));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x141 = INT32_MIN;
	int64_t x142 = -1LL;
	uint32_t x143 = 249U;
	int64_t x144 = -1LL;
	int32_t t29 = -5;

    t29 = (x141<=((x142-x143)<=x144));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x149 = -52;
	uint32_t x150 = 2747691U;
	uint16_t x152 = UINT16_MAX;

    t30 = (x149<=((x150-x151)<=x152));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x153 = 109226U;
	int64_t x155 = INT64_MIN;
	int16_t x156 = INT16_MAX;
	static int32_t t31 = -157732;

    t31 = (x153<=((x154-x155)<=x156));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x161 = 301621LL;
	int16_t x162 = INT16_MIN;
	int8_t x163 = INT8_MIN;
	int32_t x164 = INT32_MIN;
	volatile int32_t t32 = 58576193;

    t32 = (x161<=((x162-x163)<=x164));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x165 = 2U;
	int64_t x166 = INT64_MIN;
	uint32_t x168 = 24197187U;

    t33 = (x165<=((x166-x167)<=x168));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint16_t x170 = 15U;
	volatile uint32_t x171 = UINT32_MAX;
	uint16_t x172 = UINT16_MAX;
	static int32_t t34 = -424;

    t34 = (x169<=((x170-x171)<=x172));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x181 = INT64_MIN;
	volatile uint64_t x182 = 429168237358851240LLU;
	int64_t x183 = -1LL;
	static int64_t x184 = -1LL;

    t35 = (x181<=((x182-x183)<=x184));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x185 = -1LL;
	int64_t x186 = -1LL;
	static int64_t x187 = INT64_MIN;
	int8_t x188 = INT8_MAX;
	static int32_t t36 = -444022;

    t36 = (x185<=((x186-x187)<=x188));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x189 = 3870977;
	int8_t x190 = 19;
	int64_t x191 = -7280250LL;
	int16_t x192 = -1;
	volatile int32_t t37 = -145;

    t37 = (x189<=((x190-x191)<=x192));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint32_t x193 = 238783482U;
	int8_t x194 = INT8_MIN;
	uint32_t x195 = 253133U;
	static volatile uint16_t x196 = 7384U;
	volatile int32_t t38 = -1362;

    t38 = (x193<=((x194-x195)<=x196));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x197 = -1LL;
	uint8_t x198 = UINT8_MAX;
	uint16_t x199 = UINT16_MAX;
	int32_t x200 = 7278112;
	volatile int32_t t39 = 946402;

    t39 = (x197<=((x198-x199)<=x200));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x202 = -1;
	int32_t x203 = INT32_MIN;
	uint32_t x204 = 293592U;
	int32_t t40 = 18998;

    t40 = (x201<=((x202-x203)<=x204));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x205 = INT16_MAX;
	int16_t x206 = 41;
	static int16_t x207 = -1;
	int32_t x208 = -1;
	int32_t t41 = -130396;

    t41 = (x205<=((x206-x207)<=x208));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x209 = INT16_MIN;
	uint64_t x211 = 4270991813384377LLU;
	int8_t x212 = -33;
	int32_t t42 = -2714743;

    t42 = (x209<=((x210-x211)<=x212));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x213 = 3322LLU;
	uint16_t x214 = UINT16_MAX;
	int16_t x215 = 911;

    t43 = (x213<=((x214-x215)<=x216));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x217 = -7559789818770LL;
	int64_t x218 = INT64_MIN;
	int32_t x219 = INT32_MIN;
	volatile int8_t x220 = INT8_MIN;
	volatile int32_t t44 = 774328735;

    t44 = (x217<=((x218-x219)<=x220));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint32_t x221 = UINT32_MAX;
	uint16_t x222 = UINT16_MAX;
	static int32_t x223 = INT32_MAX;
	int32_t t45 = -19;

    t45 = (x221<=((x222-x223)<=x224));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x230 = 4248517175LLU;
	int16_t x231 = INT16_MIN;
	static int8_t x232 = INT8_MAX;
	volatile int32_t t46 = 735;

    t46 = (x229<=((x230-x231)<=x232));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x233 = INT16_MAX;
	int8_t x234 = -5;
	int32_t x235 = INT32_MIN;
	int64_t x236 = INT64_MAX;
	int32_t t47 = 0;

    t47 = (x233<=((x234-x235)<=x236));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint64_t x237 = UINT64_MAX;
	static volatile int16_t x238 = INT16_MIN;
	int8_t x239 = -20;
	int32_t x240 = 1116;
	static volatile int32_t t48 = -921637932;

    t48 = (x237<=((x238-x239)<=x240));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x242 = 103U;
	volatile int64_t x243 = -1LL;
	int64_t x244 = -1LL;
	volatile int32_t t49 = 1;

    t49 = (x241<=((x242-x243)<=x244));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint32_t x245 = 1415914529U;
	static uint8_t x246 = 33U;
	static uint64_t x247 = 42173545LLU;
	volatile int32_t t50 = -293;

    t50 = (x245<=((x246-x247)<=x248));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint64_t x249 = 2231975049LLU;
	uint8_t x250 = 15U;
	uint8_t x251 = UINT8_MAX;
	int64_t x252 = INT64_MIN;
	int32_t t51 = -7790;

    t51 = (x249<=((x250-x251)<=x252));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x253 = 3168LL;
	volatile int32_t x254 = INT32_MAX;
	volatile uint16_t x255 = 0U;
	volatile uint8_t x256 = 6U;
	int32_t t52 = 14975640;

    t52 = (x253<=((x254-x255)<=x256));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x257 = INT32_MAX;
	volatile uint32_t x258 = UINT32_MAX;
	int32_t x259 = INT32_MIN;
	static volatile int32_t x260 = INT32_MIN;
	volatile int32_t t53 = -17115093;

    t53 = (x257<=((x258-x259)<=x260));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint64_t x261 = 51480720LLU;
	uint8_t x262 = 12U;
	volatile int32_t x264 = INT32_MAX;

    t54 = (x261<=((x262-x263)<=x264));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x265 = -8546199041LL;
	volatile int8_t x266 = -1;
	int8_t x267 = INT8_MIN;
	int8_t x268 = -1;
	int32_t t55 = -45;

    t55 = (x265<=((x266-x267)<=x268));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x269 = UINT16_MAX;
	int16_t x271 = -2425;
	volatile int32_t t56 = -142;

    t56 = (x269<=((x270-x271)<=x272));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x273 = INT16_MIN;
	static int8_t x274 = 14;
	int64_t x276 = -1LL;
	volatile int32_t t57 = 3151;

    t57 = (x273<=((x274-x275)<=x276));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x277 = INT8_MAX;
	uint32_t x278 = 53849525U;
	int8_t x279 = -1;
	volatile uint16_t x280 = 1U;
	static int32_t t58 = 18;

    t58 = (x277<=((x278-x279)<=x280));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x281 = INT16_MIN;
	int8_t x282 = INT8_MAX;
	static int8_t x283 = 0;
	int32_t x284 = INT32_MAX;
	static volatile int32_t t59 = 100810;

    t59 = (x281<=((x282-x283)<=x284));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x285 = 5611U;
	int8_t x286 = 1;
	static volatile uint32_t x287 = 4U;
	int32_t x288 = -1;
	int32_t t60 = -5573013;

    t60 = (x285<=((x286-x287)<=x288));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x291 = -1;
	volatile int32_t t61 = 4;

    t61 = (x289<=((x290-x291)<=x292));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x293 = -3;
	int16_t x294 = INT16_MIN;
	int8_t x295 = INT8_MIN;
	int32_t x296 = -1;
	volatile int32_t t62 = 43746225;

    t62 = (x293<=((x294-x295)<=x296));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x302 = INT8_MIN;
	int8_t x303 = INT8_MIN;
	volatile int32_t t63 = 822;

    t63 = (x301<=((x302-x303)<=x304));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x305 = INT32_MIN;
	uint8_t x307 = 18U;
	static int32_t t64 = -70;

    t64 = (x305<=((x306-x307)<=x308));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint64_t x309 = 103511889638292887LLU;
	int64_t x311 = 29436LL;
	static int32_t t65 = 102390;

    t65 = (x309<=((x310-x311)<=x312));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x313 = -17;
	int64_t x315 = -117247264LL;
	int16_t x316 = INT16_MIN;
	volatile int32_t t66 = 25956741;

    t66 = (x313<=((x314-x315)<=x316));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x317 = UINT64_MAX;
	static int8_t x319 = INT8_MAX;
	static int64_t x320 = INT64_MAX;
	int32_t t67 = -12603;

    t67 = (x317<=((x318-x319)<=x320));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x321 = INT64_MIN;
	int32_t x322 = -394294;
	static int8_t x323 = -1;
	static int8_t x324 = 61;
	int32_t t68 = -422632772;

    t68 = (x321<=((x322-x323)<=x324));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x325 = INT8_MAX;
	int16_t x327 = -3;
	volatile int32_t t69 = 9984;

    t69 = (x325<=((x326-x327)<=x328));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x329 = 5U;
	uint8_t x330 = 55U;
	int16_t x331 = INT16_MIN;
	volatile int64_t x332 = INT64_MAX;
	int32_t t70 = -23107;

    t70 = (x329<=((x330-x331)<=x332));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x333 = -25601;
	static int16_t x334 = 5;
	int64_t x335 = INT64_MAX;
	int32_t t71 = -7;

    t71 = (x333<=((x334-x335)<=x336));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x337 = INT8_MIN;
	volatile uint64_t x338 = 2072LLU;
	int32_t x339 = INT32_MIN;
	volatile int64_t x340 = INT64_MIN;
	int32_t t72 = 10246;

    t72 = (x337<=((x338-x339)<=x340));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x341 = 27U;
	int8_t x342 = INT8_MAX;
	volatile uint16_t x343 = 116U;
	int64_t x344 = -38135314578759LL;
	static volatile int32_t t73 = 3265092;

    t73 = (x341<=((x342-x343)<=x344));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x353 = 1315U;
	int64_t x354 = -1LL;
	int8_t x355 = -1;
	static int32_t x356 = 469093;
	static int32_t t74 = 81070589;

    t74 = (x353<=((x354-x355)<=x356));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x357 = -335823;
	int32_t x358 = INT32_MIN;
	static int8_t x360 = -1;

    t75 = (x357<=((x358-x359)<=x360));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int8_t x362 = -1;
	static int64_t x363 = INT64_MIN;
	static int16_t x364 = INT16_MIN;
	static volatile int32_t t76 = 1;

    t76 = (x361<=((x362-x363)<=x364));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile int16_t x365 = INT16_MIN;
	uint64_t x366 = 475924682LLU;
	int32_t t77 = 6408;

    t77 = (x365<=((x366-x367)<=x368));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x369 = -74439713LL;
	int64_t x370 = -1LL;
	uint16_t x371 = UINT16_MAX;
	uint64_t x372 = 9648452351LLU;
	int32_t t78 = -45710977;

    t78 = (x369<=((x370-x371)<=x372));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x374 = UINT32_MAX;
	static int16_t x375 = INT16_MAX;
	int16_t x376 = INT16_MAX;
	static volatile int32_t t79 = -10;

    t79 = (x373<=((x374-x375)<=x376));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile uint64_t x377 = 4563333269LLU;
	int8_t x378 = -1;
	int16_t x379 = -1;
	static int64_t x380 = -1LL;
	volatile int32_t t80 = -320;

    t80 = (x377<=((x378-x379)<=x380));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x381 = -1079;
	int16_t x382 = INT16_MIN;
	volatile int64_t x383 = 2054360347957836LL;
	static volatile int8_t x384 = INT8_MAX;

    t81 = (x381<=((x382-x383)<=x384));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x385 = 1;
	uint64_t x387 = 1195763774483LLU;
	int32_t x388 = INT32_MAX;
	volatile int32_t t82 = 105;

    t82 = (x385<=((x386-x387)<=x388));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x393 = -1;
	int16_t x395 = INT16_MAX;
	static uint32_t x396 = 15U;
	static volatile int32_t t83 = 26484;

    t83 = (x393<=((x394-x395)<=x396));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int8_t x401 = -1;
	uint64_t x402 = 370062213644LLU;
	volatile int16_t x403 = INT16_MIN;
	static volatile int16_t x404 = 0;
	volatile int32_t t84 = -2;

    t84 = (x401<=((x402-x403)<=x404));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x406 = 114U;
	uint8_t x407 = UINT8_MAX;
	int8_t x408 = -1;
	volatile int32_t t85 = -4;

    t85 = (x405<=((x406-x407)<=x408));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x409 = INT32_MIN;
	static int32_t x410 = -35;
	int8_t x412 = 14;
	int32_t t86 = 410478;

    t86 = (x409<=((x410-x411)<=x412));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x413 = INT16_MIN;
	static uint16_t x414 = 2339U;
	volatile uint64_t x415 = 101127471890LLU;
	static volatile uint32_t x416 = UINT32_MAX;
	int32_t t87 = -73255315;

    t87 = (x413<=((x414-x415)<=x416));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x417 = INT32_MIN;
	uint64_t x418 = 3565396LLU;
	uint32_t x419 = UINT32_MAX;
	volatile uint16_t x420 = 3953U;
	int32_t t88 = 5;

    t88 = (x417<=((x418-x419)<=x420));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x422 = UINT64_MAX;
	int64_t x423 = INT64_MAX;
	volatile int16_t x424 = 309;
	int32_t t89 = -17;

    t89 = (x421<=((x422-x423)<=x424));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x429 = INT32_MIN;
	volatile uint16_t x430 = UINT16_MAX;
	volatile int16_t x431 = -4509;
	static int8_t x432 = INT8_MIN;
	int32_t t90 = 227330409;

    t90 = (x429<=((x430-x431)<=x432));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x437 = 46;
	uint8_t x438 = 78U;
	uint16_t x439 = 0U;
	int32_t t91 = -142;

    t91 = (x437<=((x438-x439)<=x440));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x441 = INT16_MAX;
	static int32_t x442 = -1;
	uint32_t x443 = 50U;
	int32_t t92 = 22188091;

    t92 = (x441<=((x442-x443)<=x444));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x445 = UINT64_MAX;
	uint8_t x447 = UINT8_MAX;
	int8_t x448 = 0;
	volatile int32_t t93 = 277;

    t93 = (x445<=((x446-x447)<=x448));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x449 = -1LL;
	int16_t x450 = INT16_MIN;
	volatile int16_t x451 = INT16_MIN;
	int16_t x452 = -1;
	int32_t t94 = -57;

    t94 = (x449<=((x450-x451)<=x452));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint64_t x453 = UINT64_MAX;
	volatile int32_t x454 = -1;
	static int32_t t95 = 14;

    t95 = (x453<=((x454-x455)<=x456));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x461 = INT16_MIN;
	static int64_t x462 = INT64_MIN;
	int64_t x463 = -1LL;
	static int32_t x464 = -1;
	volatile int32_t t96 = -503747;

    t96 = (x461<=((x462-x463)<=x464));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x466 = INT8_MIN;
	uint32_t x467 = 5U;
	int32_t x468 = 1981170;
	volatile int32_t t97 = 1;

    t97 = (x465<=((x466-x467)<=x468));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x469 = 28U;
	uint32_t x470 = UINT32_MAX;
	int32_t x472 = -1;

    t98 = (x469<=((x470-x471)<=x472));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x473 = 11369251;
	static uint32_t x474 = 1428U;
	volatile int32_t x475 = -237;
	int32_t x476 = INT32_MAX;

    t99 = (x473<=((x474-x475)<=x476));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x477 = INT64_MIN;
	static int64_t x478 = INT64_MIN;
	int64_t x479 = -2524503LL;
	int32_t x480 = 103;

    t100 = (x477<=((x478-x479)<=x480));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint8_t x481 = 11U;
	int16_t x482 = -1;
	volatile int64_t x483 = -1LL;
	uint8_t x484 = 6U;
	int32_t t101 = 7;

    t101 = (x481<=((x482-x483)<=x484));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int64_t x485 = INT64_MIN;
	int32_t x486 = INT32_MIN;
	static volatile int32_t x487 = -1;
	static int8_t x488 = INT8_MIN;

    t102 = (x485<=((x486-x487)<=x488));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint8_t x489 = UINT8_MAX;
	uint32_t x491 = UINT32_MAX;
	int8_t x492 = INT8_MIN;
	int32_t t103 = 23;

    t103 = (x489<=((x490-x491)<=x492));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x497 = INT64_MIN;
	int16_t x498 = INT16_MIN;
	uint16_t x499 = UINT16_MAX;
	uint8_t x500 = 0U;
	static int32_t t104 = 1950;

    t104 = (x497<=((x498-x499)<=x500));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static int8_t x501 = INT8_MAX;
	int32_t x502 = -1;
	uint32_t x503 = UINT32_MAX;
	volatile uint8_t x504 = 0U;

    t105 = (x501<=((x502-x503)<=x504));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x509 = -1354;
	int16_t x510 = 0;
	int32_t x512 = INT32_MIN;
	volatile int32_t t106 = -26;

    t106 = (x509<=((x510-x511)<=x512));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x513 = 0U;
	static int16_t x514 = 15319;
	uint64_t x515 = 342252973LLU;
	static uint8_t x516 = UINT8_MAX;

    t107 = (x513<=((x514-x515)<=x516));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x517 = INT64_MIN;
	int8_t x518 = -1;
	int32_t x519 = -460446921;
	int32_t x520 = INT32_MAX;
	volatile int32_t t108 = -3528;

    t108 = (x517<=((x518-x519)<=x520));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint64_t x521 = 2934721556667907888LLU;
	int8_t x523 = -1;
	static int64_t x524 = -1LL;
	volatile int32_t t109 = 190046;

    t109 = (x521<=((x522-x523)<=x524));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x525 = 43904799601118509LL;
	static int16_t x526 = INT16_MIN;
	int32_t x528 = 439;
	volatile int32_t t110 = 25614062;

    t110 = (x525<=((x526-x527)<=x528));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint8_t x529 = UINT8_MAX;
	uint64_t x531 = UINT64_MAX;
	uint16_t x532 = 598U;
	volatile int32_t t111 = -2581705;

    t111 = (x529<=((x530-x531)<=x532));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x534 = -1LL;
	static int8_t x535 = INT8_MAX;
	int8_t x536 = INT8_MIN;
	volatile int32_t t112 = 7227;

    t112 = (x533<=((x534-x535)<=x536));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x537 = -3;
	volatile int8_t x538 = 3;
	volatile uint16_t x539 = 26U;
	uint32_t x540 = UINT32_MAX;
	volatile int32_t t113 = -100484;

    t113 = (x537<=((x538-x539)<=x540));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x541 = INT32_MIN;
	volatile uint32_t x543 = 719042U;
	volatile int64_t x544 = INT64_MAX;
	volatile int32_t t114 = 8;

    t114 = (x541<=((x542-x543)<=x544));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x546 = UINT64_MAX;
	volatile uint32_t x547 = 875917077U;
	static uint8_t x548 = UINT8_MAX;
	int32_t t115 = -2034127;

    t115 = (x545<=((x546-x547)<=x548));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x549 = 7380U;
	int8_t x550 = -1;
	int64_t x551 = -1LL;
	volatile int32_t t116 = -5;

    t116 = (x549<=((x550-x551)<=x552));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x554 = -59;
	int64_t x556 = -270057955696726819LL;
	int32_t t117 = -26596872;

    t117 = (x553<=((x554-x555)<=x556));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x557 = INT64_MIN;
	static int64_t x558 = -1LL;
	int16_t x559 = 6221;
	int64_t x560 = INT64_MIN;
	int32_t t118 = 1;

    t118 = (x557<=((x558-x559)<=x560));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint32_t x561 = 358613625U;
	uint64_t x562 = UINT64_MAX;
	int32_t x563 = -1;
	volatile int32_t x564 = 440;
	volatile int32_t t119 = -435;

    t119 = (x561<=((x562-x563)<=x564));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x569 = INT16_MAX;
	static int64_t x570 = -1LL;
	volatile int32_t x571 = INT32_MIN;
	static int16_t x572 = 1017;
	static volatile int32_t t120 = -906;

    t120 = (x569<=((x570-x571)<=x572));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x574 = 1441450600LLU;
	uint64_t x575 = UINT64_MAX;
	static int64_t x576 = -468LL;

    t121 = (x573<=((x574-x575)<=x576));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x577 = 95904364297975314LLU;
	volatile int8_t x578 = 3;
	uint16_t x579 = 314U;
	int32_t x580 = INT32_MIN;
	volatile int32_t t122 = -333187484;

    t122 = (x577<=((x578-x579)<=x580));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x581 = INT64_MIN;
	int64_t x582 = 17852714620454050LL;
	static uint16_t x583 = 487U;
	static int16_t x584 = -186;
	volatile int32_t t123 = 8674;

    t123 = (x581<=((x582-x583)<=x584));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x586 = -4927139LL;
	int16_t x588 = INT16_MIN;

    t124 = (x585<=((x586-x587)<=x588));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x589 = 1;
	int32_t x590 = INT32_MIN;
	int8_t x592 = 37;
	volatile int32_t t125 = 25259;

    t125 = (x589<=((x590-x591)<=x592));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x597 = INT64_MIN;
	uint8_t x598 = UINT8_MAX;
	int64_t x599 = -399585295604092721LL;
	uint8_t x600 = UINT8_MAX;

    t126 = (x597<=((x598-x599)<=x600));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int64_t x601 = INT64_MIN;
	static uint32_t x602 = 4458U;
	int8_t x603 = INT8_MIN;
	uint16_t x604 = 1506U;
	volatile int32_t t127 = 15393;

    t127 = (x601<=((x602-x603)<=x604));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x605 = 9;
	int8_t x606 = -41;
	int32_t x607 = 4760;
	int64_t x608 = INT64_MIN;
	int32_t t128 = 257384714;

    t128 = (x605<=((x606-x607)<=x608));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x609 = -1;
	int32_t x611 = -1;
	volatile int8_t x612 = INT8_MIN;
	volatile int32_t t129 = -8;

    t129 = (x609<=((x610-x611)<=x612));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static int16_t x613 = -1;
	volatile int16_t x614 = INT16_MIN;
	int16_t x615 = INT16_MIN;
	static int64_t x616 = INT64_MIN;
	static int32_t t130 = 1873321;

    t130 = (x613<=((x614-x615)<=x616));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x617 = -2231;
	uint64_t x619 = 26419LLU;
	static uint32_t x620 = 707019165U;
	volatile int32_t t131 = -7439984;

    t131 = (x617<=((x618-x619)<=x620));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x621 = INT16_MIN;
	uint16_t x622 = 2U;
	int32_t t132 = 20877385;

    t132 = (x621<=((x622-x623)<=x624));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x626 = -1;
	static uint64_t x627 = 13LLU;
	static uint16_t x628 = 7734U;

    t133 = (x625<=((x626-x627)<=x628));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint8_t x629 = 4U;
	uint8_t x630 = 3U;
	int32_t x632 = -607;

    t134 = (x629<=((x630-x631)<=x632));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint16_t x633 = UINT16_MAX;
	uint8_t x634 = 40U;
	int32_t x635 = 245089;
	static uint32_t x636 = UINT32_MAX;
	volatile int32_t t135 = 80694;

    t135 = (x633<=((x634-x635)<=x636));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int32_t x638 = INT32_MAX;
	static int16_t x639 = 13111;
	uint64_t x640 = 912850049927479LLU;
	volatile int32_t t136 = -7915;

    t136 = (x637<=((x638-x639)<=x640));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x643 = -1;
	int32_t t137 = 97194145;

    t137 = (x641<=((x642-x643)<=x644));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int8_t x645 = 1;
	int32_t x646 = -440898;
	uint64_t x647 = 29019LLU;
	uint8_t x648 = 1U;

    t138 = (x645<=((x646-x647)<=x648));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x650 = UINT16_MAX;
	volatile int16_t x651 = 2;
	int32_t x652 = -1;
	volatile int32_t t139 = -1;

    t139 = (x649<=((x650-x651)<=x652));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int8_t x653 = INT8_MIN;
	static int32_t x655 = INT32_MAX;
	volatile int8_t x656 = INT8_MAX;
	static int32_t t140 = 24200025;

    t140 = (x653<=((x654-x655)<=x656));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x657 = 4577;
	int8_t x658 = INT8_MIN;
	static volatile int8_t x659 = 5;
	uint64_t x660 = 29434LLU;
	volatile int32_t t141 = -688259;

    t141 = (x657<=((x658-x659)<=x660));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x663 = INT16_MIN;
	volatile int16_t x664 = INT16_MAX;

    t142 = (x661<=((x662-x663)<=x664));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x665 = INT32_MIN;
	int8_t x666 = -3;
	volatile int16_t x668 = INT16_MIN;
	int32_t t143 = 5678328;

    t143 = (x665<=((x666-x667)<=x668));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x673 = 112;
	static int8_t x674 = -19;
	int32_t x675 = INT32_MIN;
	uint8_t x676 = 14U;

    t144 = (x673<=((x674-x675)<=x676));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x677 = 6;
	int32_t x678 = -1;
	int64_t x679 = -1LL;
	int32_t x680 = INT32_MIN;
	static int32_t t145 = -41;

    t145 = (x677<=((x678-x679)<=x680));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x681 = INT64_MIN;
	static int64_t x682 = INT64_MIN;
	int8_t x684 = INT8_MIN;
	int32_t t146 = 1;

    t146 = (x681<=((x682-x683)<=x684));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x685 = 31019;
	int32_t x686 = 2764879;
	volatile int8_t x687 = -1;
	int8_t x688 = INT8_MIN;
	int32_t t147 = -1;

    t147 = (x685<=((x686-x687)<=x688));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x689 = -1;
	int32_t x690 = INT32_MIN;
	int64_t x692 = -1LL;
	volatile int32_t t148 = -5279;

    t148 = (x689<=((x690-x691)<=x692));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int32_t x694 = -8;
	int8_t x695 = INT8_MIN;
	volatile int64_t x696 = INT64_MIN;
	int32_t t149 = 66067;

    t149 = (x693<=((x694-x695)<=x696));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x697 = 14;
	int16_t x698 = -1;
	int32_t t150 = -866819;

    t150 = (x697<=((x698-x699)<=x700));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x701 = INT64_MIN;
	int32_t x704 = -1;
	int32_t t151 = -9601;

    t151 = (x701<=((x702-x703)<=x704));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x705 = 3U;
	uint32_t x706 = UINT32_MAX;
	volatile int64_t x707 = -1LL;
	volatile uint64_t x708 = UINT64_MAX;
	volatile int32_t t152 = -112823993;

    t152 = (x705<=((x706-x707)<=x708));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x709 = INT16_MIN;
	static int8_t x710 = INT8_MAX;
	int32_t x711 = -1;
	int32_t t153 = -690307850;

    t153 = (x709<=((x710-x711)<=x712));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x718 = INT32_MIN;
	volatile int16_t x719 = INT16_MIN;
	int16_t x720 = -66;
	static volatile int32_t t154 = 6394553;

    t154 = (x717<=((x718-x719)<=x720));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x721 = -1540;
	int64_t x722 = 13836LL;
	int32_t t155 = 5;

    t155 = (x721<=((x722-x723)<=x724));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x725 = INT64_MIN;
	int16_t x726 = -1934;
	int64_t x727 = INT64_MIN;
	int32_t t156 = -215982;

    t156 = (x725<=((x726-x727)<=x728));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x729 = INT8_MIN;
	int16_t x730 = -1;
	static volatile int64_t x731 = -185079851LL;
	int32_t x732 = -1;

    t157 = (x729<=((x730-x731)<=x732));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x734 = 2148LLU;
	int32_t x735 = INT32_MIN;
	int16_t x736 = -31;
	int32_t t158 = -18402;

    t158 = (x733<=((x734-x735)<=x736));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x737 = 1767706576U;
	uint64_t x738 = 13594947427414200LLU;
	int64_t x739 = INT64_MIN;
	int32_t t159 = 58062491;

    t159 = (x737<=((x738-x739)<=x740));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x741 = 25141181U;
	static volatile uint8_t x742 = 1U;
	int16_t x744 = INT16_MIN;
	int32_t t160 = -4068;

    t160 = (x741<=((x742-x743)<=x744));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x745 = -1LL;
	int64_t x747 = INT64_MIN;
	int64_t x748 = -1LL;

    t161 = (x745<=((x746-x747)<=x748));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x751 = 0;
	int8_t x752 = INT8_MIN;
	static int32_t t162 = -4258;

    t162 = (x749<=((x750-x751)<=x752));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint8_t x753 = UINT8_MAX;
	volatile int64_t x754 = -1LL;
	uint64_t x755 = 4154LLU;
	int64_t x756 = -3675204005013102662LL;
	static volatile int32_t t163 = -11;

    t163 = (x753<=((x754-x755)<=x756));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x757 = -1LL;
	int32_t x758 = 11500030;
	int16_t x759 = -1;
	volatile int8_t x760 = INT8_MIN;
	int32_t t164 = -9151255;

    t164 = (x757<=((x758-x759)<=x760));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x761 = INT64_MIN;
	uint16_t x762 = UINT16_MAX;
	int8_t x763 = INT8_MAX;
	uint16_t x764 = 6U;
	int32_t t165 = -9;

    t165 = (x761<=((x762-x763)<=x764));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static int16_t x766 = -1;
	uint16_t x767 = 204U;
	volatile int32_t t166 = 11;

    t166 = (x765<=((x766-x767)<=x768));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x771 = 16736031LL;
	int32_t t167 = -12;

    t167 = (x769<=((x770-x771)<=x772));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x773 = INT32_MIN;
	volatile int32_t x774 = -1;
	static uint64_t x775 = UINT64_MAX;
	static int32_t x776 = -4487;
	static int32_t t168 = -159;

    t168 = (x773<=((x774-x775)<=x776));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x778 = -1;
	uint64_t x779 = 29902221LLU;
	static int32_t x780 = -1;

    t169 = (x777<=((x778-x779)<=x780));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x781 = 8;
	int32_t x782 = 365432;
	volatile int8_t x783 = 12;
	static volatile int64_t x784 = INT64_MIN;

    t170 = (x781<=((x782-x783)<=x784));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x785 = UINT8_MAX;
	volatile uint64_t x786 = 2125962903LLU;
	static int64_t x787 = 1286746344069030637LL;
	volatile int32_t t171 = 383472;

    t171 = (x785<=((x786-x787)<=x788));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x789 = 5;
	volatile int16_t x790 = INT16_MAX;
	static int32_t x791 = -1;
	int8_t x792 = INT8_MAX;

    t172 = (x789<=((x790-x791)<=x792));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x793 = -2;
	uint32_t x794 = UINT32_MAX;
	int8_t x795 = INT8_MAX;
	int16_t x796 = INT16_MIN;
	int32_t t173 = 3701812;

    t173 = (x793<=((x794-x795)<=x796));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x797 = 206371800U;
	int8_t x800 = INT8_MIN;
	volatile int32_t t174 = -14;

    t174 = (x797<=((x798-x799)<=x800));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int16_t x801 = INT16_MIN;
	int32_t t175 = 2448336;

    t175 = (x801<=((x802-x803)<=x804));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int8_t x805 = INT8_MIN;
	int16_t x806 = -1;
	int8_t x808 = INT8_MAX;
	volatile int32_t t176 = 9;

    t176 = (x805<=((x806-x807)<=x808));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x809 = -44;
	int16_t x810 = -1;
	uint64_t x811 = UINT64_MAX;
	volatile int32_t t177 = 364;

    t177 = (x809<=((x810-x811)<=x812));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x813 = INT16_MAX;
	int64_t x814 = INT64_MAX;
	static int64_t x815 = 442598364464734233LL;
	int16_t x816 = 99;
	volatile int32_t t178 = 0;

    t178 = (x813<=((x814-x815)<=x816));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x818 = 9344689286734LLU;
	volatile int8_t x819 = 2;
	volatile int16_t x820 = -1820;
	static int32_t t179 = 4354;

    t179 = (x817<=((x818-x819)<=x820));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x821 = 62215328520LLU;
	int16_t x822 = 19;
	uint8_t x823 = 14U;
	static int16_t x824 = -1724;
	volatile int32_t t180 = 829438373;

    t180 = (x821<=((x822-x823)<=x824));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x826 = 40498;
	static int32_t x827 = INT32_MAX;
	uint32_t x828 = UINT32_MAX;
	int32_t t181 = -66;

    t181 = (x825<=((x826-x827)<=x828));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x829 = 73U;
	uint16_t x832 = 12U;

    t182 = (x829<=((x830-x831)<=x832));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint16_t x835 = 3215U;
	int32_t x836 = INT32_MIN;
	volatile int32_t t183 = 12303;

    t183 = (x833<=((x834-x835)<=x836));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint64_t x842 = UINT64_MAX;
	int64_t x844 = INT64_MAX;

    t184 = (x841<=((x842-x843)<=x844));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int8_t x845 = INT8_MIN;
	static int32_t x846 = 2269;
	int16_t x848 = 4;
	static int32_t t185 = -58782865;

    t185 = (x845<=((x846-x847)<=x848));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x849 = INT32_MIN;
	int16_t x850 = -3;
	uint8_t x851 = 125U;
	int16_t x852 = -1;

    t186 = (x849<=((x850-x851)<=x852));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x854 = INT32_MIN;
	uint32_t x855 = UINT32_MAX;
	int16_t x856 = INT16_MIN;

    t187 = (x853<=((x854-x855)<=x856));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x857 = -1;
	int8_t x858 = -35;
	uint16_t x859 = 3U;
	static int32_t x860 = -17941906;
	static int32_t t188 = -88051;

    t188 = (x857<=((x858-x859)<=x860));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x861 = UINT64_MAX;
	int32_t x862 = -1;
	int8_t x864 = -1;
	volatile int32_t t189 = 709398;

    t189 = (x861<=((x862-x863)<=x864));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int64_t x865 = INT64_MIN;
	uint16_t x866 = 6U;
	static int64_t x867 = -87849239LL;
	volatile int32_t t190 = 252;

    t190 = (x865<=((x866-x867)<=x868));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x869 = INT8_MIN;
	static int16_t x870 = INT16_MIN;
	int16_t x871 = INT16_MIN;
	static int32_t t191 = 24;

    t191 = (x869<=((x870-x871)<=x872));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int32_t x873 = -1;
	int16_t x874 = INT16_MAX;
	static int8_t x875 = INT8_MIN;
	int64_t x876 = 562322LL;
	volatile int32_t t192 = 8060;

    t192 = (x873<=((x874-x875)<=x876));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x877 = 11174062LLU;
	volatile int16_t x878 = INT16_MAX;
	static int64_t x879 = 1LL;
	int16_t x880 = -978;
	int32_t t193 = -103;

    t193 = (x877<=((x878-x879)<=x880));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile int16_t x885 = -1;
	static uint8_t x886 = 67U;
	static int64_t x887 = -2LL;
	volatile int32_t t194 = 127793805;

    t194 = (x885<=((x886-x887)<=x888));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x889 = INT16_MIN;
	static int32_t x890 = -1;
	int16_t x891 = INT16_MAX;
	int32_t x892 = INT32_MIN;
	volatile int32_t t195 = -2214712;

    t195 = (x889<=((x890-x891)<=x892));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x893 = INT8_MIN;
	int8_t x894 = INT8_MIN;
	volatile int8_t x896 = INT8_MIN;

    t196 = (x893<=((x894-x895)<=x896));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint16_t x898 = UINT16_MAX;
	int32_t x899 = -1;
	static int64_t x900 = INT64_MIN;

    t197 = (x897<=((x898-x899)<=x900));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x905 = -1;
	int64_t x906 = 682528981682491455LL;
	static uint16_t x907 = UINT16_MAX;
	uint8_t x908 = UINT8_MAX;
	static volatile int32_t t198 = 35449165;

    t198 = (x905<=((x906-x907)<=x908));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x911 = -560;
	static int64_t x912 = 1LL;
	int32_t t199 = 30;

    t199 = (x909<=((x910-x911)<=x912));

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

