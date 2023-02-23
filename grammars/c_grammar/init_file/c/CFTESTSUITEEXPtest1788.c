
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

int8_t x3 = -15;
static volatile int64_t x4 = 131LL;
uint8_t x8 = 3U;
int32_t t1 = -1;
static uint16_t x17 = UINT16_MAX;
static int16_t x20 = INT16_MAX;
int64_t x22 = -1LL;
uint16_t x28 = 90U;
uint64_t x43 = 2132258LLU;
uint32_t x44 = UINT32_MAX;
int16_t x58 = INT16_MAX;
uint32_t x59 = UINT32_MAX;
int64_t x78 = -241110412LL;
volatile int8_t x80 = 28;
static volatile int64_t x89 = INT64_MAX;
static volatile int32_t x93 = 5;
volatile int64_t x95 = 73936653415LL;
uint8_t x99 = 53U;
static int8_t x104 = INT8_MAX;
int32_t t20 = 13;
uint64_t x107 = UINT64_MAX;
int16_t x110 = INT16_MIN;
int64_t x115 = 3710053379280920228LL;
int32_t t24 = -18723;
int32_t x126 = 63326744;
int64_t x130 = -1LL;
volatile int32_t t27 = 162;
static volatile uint64_t x133 = 0LLU;
static uint64_t x134 = UINT64_MAX;
volatile int32_t t28 = -2861190;
static int16_t x137 = 641;
int8_t x140 = INT8_MIN;
static volatile int32_t t29 = -5;
int32_t x154 = INT32_MIN;
volatile int16_t x155 = INT16_MIN;
int32_t x157 = -1;
int64_t x159 = -7LL;
static int32_t t34 = 1238;
volatile int32_t t35 = 4;
int16_t x173 = INT16_MIN;
int32_t x174 = INT32_MIN;
uint32_t x177 = 12163427U;
uint16_t x179 = 4064U;
int32_t x196 = 175834275;
static int32_t t41 = 489100024;
int16_t x197 = -1;
uint64_t x198 = 27071458199LLU;
volatile int32_t t43 = 320982152;
volatile uint8_t x225 = 3U;
int16_t x226 = INT16_MAX;
uint64_t x227 = 965808125LLU;
int64_t x231 = INT64_MIN;
int32_t t49 = -3315;
uint32_t x239 = 35U;
uint32_t x245 = UINT32_MAX;
int8_t x252 = 44;
int32_t x260 = -701590395;
uint16_t x261 = UINT16_MAX;
int16_t x262 = INT16_MAX;
static volatile uint64_t x269 = 2262279LLU;
uint32_t x271 = 29025685U;
uint16_t x273 = 9U;
uint64_t x275 = 110654LLU;
uint32_t x278 = 325000U;
volatile int32_t x280 = INT32_MAX;
int32_t x289 = INT32_MIN;
static uint64_t x292 = UINT64_MAX;
int16_t x293 = INT16_MAX;
int64_t x294 = INT64_MIN;
volatile int8_t x299 = INT8_MIN;
int16_t x314 = INT16_MAX;
int64_t x328 = 1457548869861736338LL;
int64_t x330 = INT64_MIN;
int32_t t70 = 5;
uint32_t x334 = 35U;
static int32_t t71 = -93941;
volatile int8_t x343 = -1;
int32_t t73 = 98200;
uint16_t x353 = 3U;
uint64_t x358 = 51895035694572348LLU;
static int32_t x362 = INT32_MIN;
int8_t x364 = INT8_MAX;
uint16_t x365 = UINT16_MAX;
volatile int32_t t79 = 0;
int32_t t80 = 24778778;
uint64_t x381 = 42LLU;
uint64_t x387 = 645LLU;
volatile int32_t t82 = 5;
volatile int64_t x390 = INT64_MIN;
volatile int32_t x391 = -1;
static uint32_t x394 = 2U;
int16_t x395 = -1;
uint16_t x403 = 239U;
volatile int32_t t85 = -39875;
volatile int32_t x407 = 31;
int16_t x409 = -1;
static volatile int32_t t87 = 194821;
volatile int16_t x418 = INT16_MIN;
uint16_t x420 = UINT16_MAX;
int16_t x422 = -1;
static int32_t x432 = INT32_MAX;
static volatile uint64_t x435 = 5625LLU;
int8_t x437 = INT8_MIN;
static int64_t x439 = 2810893035647411LL;
static int64_t x440 = -1LL;
volatile int32_t t95 = -54;
volatile int8_t x457 = -61;
volatile int32_t t99 = 6;
int16_t x466 = -1;
int64_t x469 = INT64_MIN;
uint8_t x479 = 13U;
int8_t x482 = -1;
uint8_t x486 = 86U;
static int32_t t105 = -7667;
int32_t t106 = -14;
static uint16_t x494 = UINT16_MAX;
volatile int32_t x498 = INT32_MAX;
volatile int32_t t109 = -65260144;
volatile uint16_t x505 = UINT16_MAX;
volatile int32_t x507 = -1;
uint32_t x511 = UINT32_MAX;
int64_t x518 = -1LL;
volatile int32_t t112 = 494;
uint8_t x523 = UINT8_MAX;
uint8_t x526 = 39U;
int32_t t116 = -1;
int16_t x549 = INT16_MIN;
int8_t x551 = 3;
int16_t x553 = INT16_MIN;
static int64_t x557 = -2069LL;
volatile int32_t t121 = 2863;
volatile int8_t x561 = -1;
volatile int64_t x568 = -1LL;
int64_t x574 = -1LL;
static uint64_t x576 = 16751048LLU;
int8_t x577 = 0;
volatile int8_t x582 = INT8_MIN;
int8_t x583 = INT8_MIN;
volatile int32_t t127 = -32716102;
static int16_t x591 = -1;
volatile uint8_t x596 = UINT8_MAX;
int8_t x598 = INT8_MAX;
int32_t x599 = INT32_MAX;
static int64_t x602 = INT64_MIN;
int8_t x603 = INT8_MIN;
uint8_t x604 = UINT8_MAX;
int8_t x606 = 5;
static int16_t x612 = 12736;
volatile int32_t t134 = 6;
static uint32_t x614 = 1495U;
volatile uint32_t x617 = UINT32_MAX;
uint16_t x620 = 30U;
int32_t t136 = 55140629;
volatile uint32_t x624 = 1468U;
static int32_t t137 = -108;
volatile uint8_t x629 = UINT8_MAX;
static int32_t t140 = -87;
int32_t t141 = 320141417;
static uint64_t x641 = 12586405LLU;
uint16_t x642 = UINT16_MAX;
static volatile int8_t x644 = INT8_MIN;
static int32_t t142 = 101917;
int8_t x653 = INT8_MIN;
volatile int32_t t145 = -5774701;
static int32_t x661 = -101;
uint64_t x664 = UINT64_MAX;
int32_t t148 = 162324954;
static int32_t t149 = 687;
int64_t x675 = -1651265LL;
int32_t t150 = -14065731;
int64_t x679 = -1LL;
volatile int64_t x683 = 12142660729796LL;
volatile int32_t t154 = -1124677;
static int64_t x698 = INT64_MIN;
int32_t x699 = -229;
uint16_t x707 = 3626U;
static uint32_t x709 = 11524492U;
int8_t x711 = -6;
uint32_t x712 = UINT32_MAX;
uint32_t x713 = UINT32_MAX;
volatile int8_t x716 = INT8_MIN;
int32_t t159 = 81535965;
volatile int32_t x718 = -86;
static uint8_t x719 = UINT8_MAX;
int32_t x720 = -6389;
int8_t x721 = -1;
static uint32_t x722 = 5755U;
static int32_t t161 = 323;
static int64_t x725 = -75517008690141LL;
int64_t x726 = INT64_MAX;
int32_t x733 = INT32_MAX;
static volatile int32_t t164 = 83788;
static volatile uint8_t x741 = 106U;
int8_t x744 = INT8_MIN;
volatile int8_t x745 = -1;
uint32_t x746 = UINT32_MAX;
static int16_t x752 = -1;
static int32_t x754 = INT32_MAX;
volatile int32_t t169 = -219662;
uint32_t x762 = 3655384U;
static int8_t x766 = -1;
int8_t x787 = INT8_MIN;
int16_t x789 = INT16_MIN;
int32_t x791 = 11423;
int32_t t178 = 17329;
uint32_t x796 = UINT32_MAX;
volatile int32_t t179 = 277;
volatile int32_t t180 = 8;
static int16_t x803 = -1;
int16_t x804 = -1;
volatile int64_t x807 = -1LL;
volatile int8_t x811 = -3;
int8_t x812 = INT8_MIN;
int16_t x813 = -1;
static volatile int64_t x817 = INT64_MIN;
int32_t x818 = -2;
uint32_t x820 = 3U;
int64_t x829 = 253LL;
int64_t x830 = -108783097040766LL;
int32_t t187 = 1;
int16_t x835 = -1;
int8_t x840 = INT8_MIN;
int32_t t189 = -530078;
int16_t x842 = 2;
volatile uint16_t x843 = 0U;
int8_t x848 = 0;
volatile int32_t t191 = 0;
int8_t x856 = INT8_MIN;
static volatile int32_t t192 = -187;
int8_t x867 = 1;
int16_t x868 = INT16_MAX;
int64_t x891 = -462243593261215LL;
uint8_t x892 = UINT8_MAX;


void f0(void) {
    	int16_t x1 = 421;
	int16_t x2 = -1;
	volatile int32_t t0 = 10965;

    t0 = (x1<=((x2<=x3)-x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = -6490;
	uint8_t x6 = UINT8_MAX;
	uint32_t x7 = 1120455860U;

    t1 = (x5<=((x6<=x7)-x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x13 = 99179LLU;
	uint16_t x14 = UINT16_MAX;
	int64_t x15 = INT64_MAX;
	volatile int64_t x16 = INT64_MAX;
	static int32_t t2 = 1;

    t2 = (x13<=((x14<=x15)-x16));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x18 = 45U;
	uint8_t x19 = UINT8_MAX;
	int32_t t3 = 981580;

    t3 = (x17<=((x18<=x19)-x20));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x21 = 14197U;
	int32_t x23 = INT32_MAX;
	uint32_t x24 = 2U;
	volatile int32_t t4 = 1044307;

    t4 = (x21<=((x22<=x23)-x24));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x25 = INT8_MIN;
	volatile uint32_t x26 = 55164730U;
	volatile int32_t x27 = INT32_MAX;
	volatile int32_t t5 = -2922;

    t5 = (x25<=((x26<=x27)-x28));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint32_t x29 = UINT32_MAX;
	int16_t x30 = 793;
	volatile uint64_t x31 = UINT64_MAX;
	volatile uint64_t x32 = UINT64_MAX;
	volatile int32_t t6 = 1035974;

    t6 = (x29<=((x30<=x31)-x32));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x33 = -1;
	uint32_t x34 = UINT32_MAX;
	uint32_t x35 = 0U;
	uint32_t x36 = UINT32_MAX;
	int32_t t7 = 186;

    t7 = (x33<=((x34<=x35)-x36));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x37 = INT16_MAX;
	static uint16_t x38 = 14U;
	static uint32_t x39 = 13930564U;
	uint8_t x40 = 2U;
	static int32_t t8 = 1050752495;

    t8 = (x37<=((x38<=x39)-x40));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x41 = 48722496U;
	uint16_t x42 = UINT16_MAX;
	static volatile int32_t t9 = 1;

    t9 = (x41<=((x42<=x43)-x44));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x49 = INT16_MIN;
	uint16_t x50 = 5344U;
	int16_t x51 = INT16_MIN;
	uint16_t x52 = 2U;
	int32_t t10 = 157;

    t10 = (x49<=((x50<=x51)-x52));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint32_t x53 = 479U;
	uint64_t x54 = UINT64_MAX;
	int64_t x55 = INT64_MIN;
	int8_t x56 = INT8_MIN;
	volatile int32_t t11 = 472657475;

    t11 = (x53<=((x54<=x55)-x56));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x57 = 52;
	static int16_t x60 = INT16_MIN;
	volatile int32_t t12 = 3551942;

    t12 = (x57<=((x58<=x59)-x60));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x69 = 290880U;
	int8_t x70 = -1;
	int32_t x71 = -6867802;
	uint16_t x72 = 156U;
	int32_t t13 = 679;

    t13 = (x69<=((x70<=x71)-x72));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int64_t x77 = INT64_MAX;
	uint32_t x79 = 974U;
	static volatile int32_t t14 = 481638;

    t14 = (x77<=((x78<=x79)-x80));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x81 = INT16_MAX;
	int32_t x82 = INT32_MIN;
	int16_t x83 = -2;
	uint64_t x84 = 3188349LLU;
	static volatile int32_t t15 = 710579;

    t15 = (x81<=((x82<=x83)-x84));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x85 = INT8_MIN;
	volatile int64_t x86 = INT64_MAX;
	int16_t x87 = 4854;
	volatile int16_t x88 = INT16_MAX;
	volatile int32_t t16 = -72932;

    t16 = (x85<=((x86<=x87)-x88));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x90 = UINT32_MAX;
	int8_t x91 = -1;
	int16_t x92 = -56;
	volatile int32_t t17 = 6192;

    t17 = (x89<=((x90<=x91)-x92));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x94 = UINT16_MAX;
	static uint8_t x96 = 123U;
	static volatile int32_t t18 = 86846835;

    t18 = (x93<=((x94<=x95)-x96));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x97 = INT64_MIN;
	static volatile uint16_t x98 = 25U;
	int8_t x100 = INT8_MAX;
	static int32_t t19 = -78597564;

    t19 = (x97<=((x98<=x99)-x100));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x101 = -2474;
	int64_t x102 = INT64_MAX;
	int64_t x103 = 2282745938LL;

    t20 = (x101<=((x102<=x103)-x104));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int32_t x105 = -1;
	uint16_t x106 = UINT16_MAX;
	static uint32_t x108 = UINT32_MAX;
	volatile int32_t t21 = 677876237;

    t21 = (x105<=((x106<=x107)-x108));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x109 = INT32_MIN;
	volatile int8_t x111 = INT8_MIN;
	uint16_t x112 = 4U;
	volatile int32_t t22 = -501586;

    t22 = (x109<=((x110<=x111)-x112));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint32_t x113 = 53465671U;
	int16_t x114 = 6;
	uint8_t x116 = UINT8_MAX;
	volatile int32_t t23 = 4803;

    t23 = (x113<=((x114<=x115)-x116));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x117 = -1;
	int16_t x118 = 4069;
	static int16_t x119 = 15;
	int64_t x120 = -1LL;

    t24 = (x117<=((x118<=x119)-x120));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x121 = INT64_MIN;
	static uint16_t x122 = 25809U;
	int16_t x123 = INT16_MIN;
	int32_t x124 = 720;
	volatile int32_t t25 = 509671;

    t25 = (x121<=((x122<=x123)-x124));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x125 = UINT32_MAX;
	static int64_t x127 = -31LL;
	int8_t x128 = 1;
	static int32_t t26 = 0;

    t26 = (x125<=((x126<=x127)-x128));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x129 = UINT32_MAX;
	uint8_t x131 = 2U;
	int16_t x132 = INT16_MIN;

    t27 = (x129<=((x130<=x131)-x132));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x135 = UINT8_MAX;
	int8_t x136 = 6;

    t28 = (x133<=((x134<=x135)-x136));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static int64_t x138 = INT64_MIN;
	int32_t x139 = -4146;

    t29 = (x137<=((x138<=x139)-x140));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x141 = INT64_MIN;
	static int16_t x142 = 368;
	int64_t x143 = INT64_MAX;
	uint8_t x144 = UINT8_MAX;
	volatile int32_t t30 = 178380;

    t30 = (x141<=((x142<=x143)-x144));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x149 = -1LL;
	uint32_t x150 = UINT32_MAX;
	static volatile int8_t x151 = INT8_MIN;
	static int32_t x152 = -1;
	int32_t t31 = -6232973;

    t31 = (x149<=((x150<=x151)-x152));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile int16_t x153 = -4;
	volatile int8_t x156 = INT8_MAX;
	volatile int32_t t32 = 4739991;

    t32 = (x153<=((x154<=x155)-x156));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x158 = INT64_MIN;
	uint8_t x160 = UINT8_MAX;
	int32_t t33 = -1;

    t33 = (x157<=((x158<=x159)-x160));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x161 = -1470;
	static uint64_t x162 = 5LLU;
	volatile int32_t x163 = -1;
	int8_t x164 = 20;

    t34 = (x161<=((x162<=x163)-x164));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint64_t x169 = 1786402927LLU;
	int64_t x170 = INT64_MIN;
	int32_t x171 = INT32_MAX;
	int8_t x172 = INT8_MIN;

    t35 = (x169<=((x170<=x171)-x172));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x175 = INT64_MAX;
	int8_t x176 = INT8_MIN;
	int32_t t36 = -103059;

    t36 = (x173<=((x174<=x175)-x176));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x178 = UINT64_MAX;
	volatile int8_t x180 = INT8_MAX;
	volatile int32_t t37 = -505;

    t37 = (x177<=((x178<=x179)-x180));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x181 = 14U;
	uint64_t x182 = UINT64_MAX;
	int16_t x183 = INT16_MAX;
	static int64_t x184 = -29925433704029897LL;
	int32_t t38 = -1;

    t38 = (x181<=((x182<=x183)-x184));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x185 = INT8_MIN;
	int64_t x186 = -15617206677LL;
	static uint16_t x187 = UINT16_MAX;
	int32_t x188 = -1;
	int32_t t39 = 1;

    t39 = (x185<=((x186<=x187)-x188));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x189 = 1210U;
	int32_t x190 = -11;
	volatile uint32_t x191 = UINT32_MAX;
	int32_t x192 = 744;
	volatile int32_t t40 = 777592;

    t40 = (x189<=((x190<=x191)-x192));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x193 = 1U;
	uint64_t x194 = 46836867732LLU;
	int16_t x195 = 1;

    t41 = (x193<=((x194<=x195)-x196));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x199 = INT64_MIN;
	int8_t x200 = -1;
	volatile int32_t t42 = 177121;

    t42 = (x197<=((x198<=x199)-x200));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x201 = -1;
	uint16_t x202 = 7356U;
	int64_t x203 = -68554103933518LL;
	volatile uint32_t x204 = UINT32_MAX;

    t43 = (x201<=((x202<=x203)-x204));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint32_t x205 = 1420266U;
	int16_t x206 = -1;
	volatile int16_t x207 = -30;
	volatile uint16_t x208 = 18U;
	volatile int32_t t44 = 1;

    t44 = (x205<=((x206<=x207)-x208));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x209 = -1;
	static int8_t x210 = 3;
	int8_t x211 = 0;
	uint8_t x212 = 99U;
	static volatile int32_t t45 = -1;

    t45 = (x209<=((x210<=x211)-x212));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int64_t x213 = INT64_MIN;
	int64_t x214 = 6086LL;
	static int32_t x215 = -1;
	int16_t x216 = -33;
	int32_t t46 = 1;

    t46 = (x213<=((x214<=x215)-x216));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x221 = INT32_MAX;
	uint64_t x222 = 4068367568211073713LLU;
	int16_t x223 = INT16_MAX;
	int8_t x224 = INT8_MAX;
	int32_t t47 = -37314888;

    t47 = (x221<=((x222<=x223)-x224));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x228 = INT8_MIN;
	static int32_t t48 = 901002;

    t48 = (x225<=((x226<=x227)-x228));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x229 = -1;
	uint8_t x230 = 0U;
	static uint8_t x232 = 3U;

    t49 = (x229<=((x230<=x231)-x232));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x233 = 90U;
	int16_t x234 = -1;
	int16_t x235 = INT16_MIN;
	int32_t x236 = 7;
	volatile int32_t t50 = -191845526;

    t50 = (x233<=((x234<=x235)-x236));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x237 = -1LL;
	int16_t x238 = INT16_MAX;
	int8_t x240 = INT8_MAX;
	volatile int32_t t51 = 11;

    t51 = (x237<=((x238<=x239)-x240));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x246 = 1;
	static int8_t x247 = INT8_MIN;
	static volatile uint32_t x248 = UINT32_MAX;
	int32_t t52 = -2;

    t52 = (x245<=((x246<=x247)-x248));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x249 = 0U;
	int32_t x250 = 7670;
	static int16_t x251 = INT16_MAX;
	int32_t t53 = 12186088;

    t53 = (x249<=((x250<=x251)-x252));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x257 = INT8_MIN;
	int32_t x258 = INT32_MIN;
	static int8_t x259 = INT8_MIN;
	int32_t t54 = 12778238;

    t54 = (x257<=((x258<=x259)-x260));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x263 = UINT8_MAX;
	uint64_t x264 = 243614231695106134LLU;
	static int32_t t55 = 157286;

    t55 = (x261<=((x262<=x263)-x264));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x265 = -1;
	static int16_t x266 = INT16_MIN;
	volatile int16_t x267 = -1;
	volatile int16_t x268 = -3;
	int32_t t56 = -97;

    t56 = (x265<=((x266<=x267)-x268));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x270 = INT8_MIN;
	volatile uint64_t x272 = UINT64_MAX;
	int32_t t57 = -85357638;

    t57 = (x269<=((x270<=x271)-x272));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int32_t x274 = -1;
	uint64_t x276 = 157061621728699419LLU;
	int32_t t58 = 66314;

    t58 = (x273<=((x274<=x275)-x276));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x277 = INT64_MAX;
	volatile int64_t x279 = -1LL;
	volatile int32_t t59 = 716283;

    t59 = (x277<=((x278<=x279)-x280));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x281 = -1;
	int8_t x282 = INT8_MAX;
	int32_t x283 = -324;
	static uint32_t x284 = 186U;
	volatile int32_t t60 = -2294;

    t60 = (x281<=((x282<=x283)-x284));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x290 = 54U;
	int64_t x291 = INT64_MIN;
	int32_t t61 = 5;

    t61 = (x289<=((x290<=x291)-x292));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x295 = -52;
	static volatile int32_t x296 = -523253;
	static volatile int32_t t62 = 48;

    t62 = (x293<=((x294<=x295)-x296));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x297 = INT16_MIN;
	int16_t x298 = INT16_MIN;
	int32_t x300 = INT32_MAX;
	static int32_t t63 = 26415;

    t63 = (x297<=((x298<=x299)-x300));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t x301 = INT32_MIN;
	int32_t x302 = INT32_MIN;
	int64_t x303 = INT64_MIN;
	int64_t x304 = INT64_MAX;
	static int32_t t64 = -128057;

    t64 = (x301<=((x302<=x303)-x304));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int64_t x309 = INT64_MIN;
	int8_t x310 = INT8_MIN;
	int8_t x311 = INT8_MIN;
	volatile int16_t x312 = -1;
	int32_t t65 = 15;

    t65 = (x309<=((x310<=x311)-x312));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x313 = 11U;
	uint8_t x315 = UINT8_MAX;
	volatile int16_t x316 = INT16_MAX;
	int32_t t66 = 79365483;

    t66 = (x313<=((x314<=x315)-x316));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x317 = -1;
	volatile int64_t x318 = -1LL;
	static volatile int32_t x319 = INT32_MIN;
	volatile uint8_t x320 = UINT8_MAX;
	volatile int32_t t67 = -21;

    t67 = (x317<=((x318<=x319)-x320));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x321 = 3669;
	int64_t x322 = -1LL;
	int16_t x323 = INT16_MIN;
	static int8_t x324 = -1;
	volatile int32_t t68 = 11;

    t68 = (x321<=((x322<=x323)-x324));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x325 = INT16_MIN;
	int64_t x326 = INT64_MIN;
	int16_t x327 = INT16_MIN;
	static volatile int32_t t69 = -126628;

    t69 = (x325<=((x326<=x327)-x328));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x329 = 41;
	static int64_t x331 = -1LL;
	int16_t x332 = INT16_MIN;

    t70 = (x329<=((x330<=x331)-x332));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint64_t x333 = 129471785492581775LLU;
	static int16_t x335 = -1018;
	static int16_t x336 = INT16_MAX;

    t71 = (x333<=((x334<=x335)-x336));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static int8_t x341 = 9;
	int32_t x342 = INT32_MIN;
	volatile int32_t x344 = 3751;
	static volatile int32_t t72 = 2589181;

    t72 = (x341<=((x342<=x343)-x344));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x349 = UINT16_MAX;
	static int32_t x350 = -1;
	int8_t x351 = INT8_MIN;
	int32_t x352 = -4702196;

    t73 = (x349<=((x350<=x351)-x352));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint32_t x354 = 21U;
	volatile uint8_t x355 = UINT8_MAX;
	uint32_t x356 = 7U;
	volatile int32_t t74 = 112888120;

    t74 = (x353<=((x354<=x355)-x356));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x357 = -1LL;
	volatile uint16_t x359 = 2694U;
	int8_t x360 = 15;
	volatile int32_t t75 = 6137;

    t75 = (x357<=((x358<=x359)-x360));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint64_t x361 = 1162283110678954LLU;
	int64_t x363 = 8942720LL;
	static int32_t t76 = -78366647;

    t76 = (x361<=((x362<=x363)-x364));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x366 = -1;
	uint32_t x367 = UINT32_MAX;
	int8_t x368 = INT8_MAX;
	int32_t t77 = -493983198;

    t77 = (x365<=((x366<=x367)-x368));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x369 = INT8_MIN;
	uint64_t x370 = 124919956322LLU;
	int64_t x371 = INT64_MAX;
	uint64_t x372 = 349657797905LLU;
	volatile int32_t t78 = -1;

    t78 = (x369<=((x370<=x371)-x372));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x373 = 9U;
	static uint64_t x374 = 32701083565701LLU;
	static uint16_t x375 = 6U;
	uint32_t x376 = UINT32_MAX;

    t79 = (x373<=((x374<=x375)-x376));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x377 = 363082894285779LL;
	static int8_t x378 = INT8_MAX;
	int32_t x379 = 20791131;
	static volatile uint8_t x380 = 7U;

    t80 = (x377<=((x378<=x379)-x380));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x382 = 0;
	int16_t x383 = INT16_MIN;
	int64_t x384 = 3275761456587885586LL;
	static int32_t t81 = -1980;

    t81 = (x381<=((x382<=x383)-x384));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x385 = 3U;
	static int32_t x386 = -1;
	static int32_t x388 = 11718;

    t82 = (x385<=((x386<=x387)-x388));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x389 = -1;
	static int16_t x392 = 104;
	int32_t t83 = 243;

    t83 = (x389<=((x390<=x391)-x392));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x393 = -1;
	uint16_t x396 = UINT16_MAX;
	volatile int32_t t84 = 141;

    t84 = (x393<=((x394<=x395)-x396));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x401 = INT32_MIN;
	volatile int64_t x402 = INT64_MIN;
	int32_t x404 = -6804;

    t85 = (x401<=((x402<=x403)-x404));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint64_t x405 = UINT64_MAX;
	static volatile int16_t x406 = INT16_MAX;
	static uint8_t x408 = 1U;
	volatile int32_t t86 = -44979;

    t86 = (x405<=((x406<=x407)-x408));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x410 = -1;
	int64_t x411 = -188905834073291LL;
	uint16_t x412 = 0U;

    t87 = (x409<=((x410<=x411)-x412));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x413 = UINT8_MAX;
	volatile int8_t x414 = -9;
	int32_t x415 = -14952277;
	volatile uint32_t x416 = 273U;
	int32_t t88 = -501866316;

    t88 = (x413<=((x414<=x415)-x416));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x417 = INT8_MIN;
	volatile int64_t x419 = INT64_MIN;
	volatile int32_t t89 = 386434797;

    t89 = (x417<=((x418<=x419)-x420));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x421 = 2U;
	int16_t x423 = INT16_MIN;
	int16_t x424 = INT16_MIN;
	volatile int32_t t90 = 2;

    t90 = (x421<=((x422<=x423)-x424));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x425 = -1042;
	int32_t x426 = -1;
	volatile uint32_t x427 = 22685770U;
	uint32_t x428 = UINT32_MAX;
	static volatile int32_t t91 = -47299995;

    t91 = (x425<=((x426<=x427)-x428));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x429 = INT8_MAX;
	int16_t x430 = 2;
	uint16_t x431 = UINT16_MAX;
	volatile int32_t t92 = 212080;

    t92 = (x429<=((x430<=x431)-x432));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x433 = INT32_MAX;
	int32_t x434 = 79;
	int8_t x436 = INT8_MIN;
	static int32_t t93 = 7386804;

    t93 = (x433<=((x434<=x435)-x436));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x438 = -1;
	static volatile int32_t t94 = -112140;

    t94 = (x437<=((x438<=x439)-x440));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x441 = 2;
	int32_t x442 = 57713421;
	uint32_t x443 = 2U;
	uint32_t x444 = 7U;

    t95 = (x441<=((x442<=x443)-x444));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x445 = 3;
	int32_t x446 = 8585;
	int16_t x447 = -1;
	volatile uint8_t x448 = 20U;
	static int32_t t96 = -104;

    t96 = (x445<=((x446<=x447)-x448));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x449 = INT8_MIN;
	volatile uint8_t x450 = 26U;
	int64_t x451 = -1LL;
	int8_t x452 = INT8_MIN;
	int32_t t97 = 1;

    t97 = (x449<=((x450<=x451)-x452));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x453 = -1LL;
	volatile uint8_t x454 = 26U;
	volatile int32_t x455 = INT32_MAX;
	int8_t x456 = INT8_MAX;
	int32_t t98 = -5;

    t98 = (x453<=((x454<=x455)-x456));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint8_t x458 = UINT8_MAX;
	int16_t x459 = -1;
	int32_t x460 = -1;

    t99 = (x457<=((x458<=x459)-x460));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint8_t x465 = UINT8_MAX;
	volatile uint32_t x467 = 16506739U;
	int32_t x468 = -1;
	static int32_t t100 = -3385475;

    t100 = (x465<=((x466<=x467)-x468));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x470 = UINT8_MAX;
	int16_t x471 = -1;
	static int8_t x472 = -1;
	int32_t t101 = 243251993;

    t101 = (x469<=((x470<=x471)-x472));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint8_t x473 = 13U;
	volatile int8_t x474 = INT8_MAX;
	int32_t x475 = -1;
	uint32_t x476 = 52610628U;
	volatile int32_t t102 = 444616;

    t102 = (x473<=((x474<=x475)-x476));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x477 = -142848924492501LL;
	int16_t x478 = INT16_MAX;
	static volatile uint64_t x480 = UINT64_MAX;
	int32_t t103 = -1533;

    t103 = (x477<=((x478<=x479)-x480));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x481 = -180LL;
	int32_t x483 = INT32_MIN;
	int16_t x484 = INT16_MAX;
	volatile int32_t t104 = -7762388;

    t104 = (x481<=((x482<=x483)-x484));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x485 = UINT8_MAX;
	uint32_t x487 = UINT32_MAX;
	uint8_t x488 = UINT8_MAX;

    t105 = (x485<=((x486<=x487)-x488));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x489 = 493U;
	volatile uint16_t x490 = UINT16_MAX;
	int16_t x491 = INT16_MAX;
	static int32_t x492 = INT32_MAX;

    t106 = (x489<=((x490<=x491)-x492));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x493 = INT64_MAX;
	uint64_t x495 = 11LLU;
	uint32_t x496 = 143952U;
	volatile int32_t t107 = -18;

    t107 = (x493<=((x494<=x495)-x496));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int32_t x497 = 2;
	int16_t x499 = INT16_MIN;
	int64_t x500 = INT64_MAX;
	volatile int32_t t108 = -4506;

    t108 = (x497<=((x498<=x499)-x500));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x501 = INT32_MIN;
	static volatile int32_t x502 = 5492204;
	static uint8_t x503 = 53U;
	volatile int32_t x504 = INT32_MAX;

    t109 = (x501<=((x502<=x503)-x504));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x506 = -87058LL;
	int8_t x508 = 1;
	int32_t t110 = 15213800;

    t110 = (x505<=((x506<=x507)-x508));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int64_t x509 = 6847372211LL;
	static uint8_t x510 = 1U;
	uint64_t x512 = 7349633570409129823LLU;
	volatile int32_t t111 = -666587;

    t111 = (x509<=((x510<=x511)-x512));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x517 = INT16_MIN;
	static int16_t x519 = INT16_MIN;
	uint64_t x520 = 12668179784999697LLU;

    t112 = (x517<=((x518<=x519)-x520));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x521 = 1974282105LLU;
	int8_t x522 = INT8_MAX;
	uint16_t x524 = 27U;
	volatile int32_t t113 = 1264670;

    t113 = (x521<=((x522<=x523)-x524));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x525 = -11;
	uint64_t x527 = UINT64_MAX;
	volatile uint64_t x528 = 2521LLU;
	int32_t t114 = 0;

    t114 = (x525<=((x526<=x527)-x528));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x529 = 14482;
	int8_t x530 = 6;
	int8_t x531 = -8;
	uint8_t x532 = 25U;
	static volatile int32_t t115 = -160255874;

    t115 = (x529<=((x530<=x531)-x532));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x533 = 0;
	static uint64_t x534 = 159690LLU;
	uint64_t x535 = 30LLU;
	volatile uint32_t x536 = 181053667U;

    t116 = (x533<=((x534<=x535)-x536));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static int32_t x537 = INT32_MIN;
	int32_t x538 = 4058376;
	volatile uint32_t x539 = 65736U;
	uint32_t x540 = UINT32_MAX;
	volatile int32_t t117 = 779481;

    t117 = (x537<=((x538<=x539)-x540));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x541 = 24356;
	uint64_t x542 = UINT64_MAX;
	static volatile int16_t x543 = INT16_MAX;
	static int8_t x544 = -19;
	int32_t t118 = 1457;

    t118 = (x541<=((x542<=x543)-x544));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint64_t x550 = UINT64_MAX;
	int8_t x552 = 1;
	int32_t t119 = -1;

    t119 = (x549<=((x550<=x551)-x552));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x554 = -1;
	static uint32_t x555 = 10960U;
	int16_t x556 = -1;
	int32_t t120 = -69;

    t120 = (x553<=((x554<=x555)-x556));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x558 = INT32_MIN;
	static int8_t x559 = -1;
	volatile int16_t x560 = INT16_MIN;

    t121 = (x557<=((x558<=x559)-x560));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint32_t x562 = UINT32_MAX;
	uint16_t x563 = UINT16_MAX;
	volatile uint16_t x564 = 1016U;
	volatile int32_t t122 = -912594177;

    t122 = (x561<=((x562<=x563)-x564));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x565 = UINT16_MAX;
	int16_t x566 = INT16_MIN;
	uint64_t x567 = 5208345745LLU;
	volatile int32_t t123 = -3;

    t123 = (x565<=((x566<=x567)-x568));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x569 = INT16_MAX;
	int8_t x570 = 15;
	static int64_t x571 = INT64_MIN;
	static volatile int32_t x572 = INT32_MAX;
	int32_t t124 = -421395;

    t124 = (x569<=((x570<=x571)-x572));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x573 = 6U;
	static int16_t x575 = INT16_MIN;
	volatile int32_t t125 = 2557;

    t125 = (x573<=((x574<=x575)-x576));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int32_t x578 = INT32_MIN;
	static int64_t x579 = 3554698350033LL;
	int16_t x580 = 10;
	volatile int32_t t126 = 27341873;

    t126 = (x577<=((x578<=x579)-x580));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x581 = 32467U;
	uint64_t x584 = 2127141410013962965LLU;

    t127 = (x581<=((x582<=x583)-x584));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int32_t x585 = -83080;
	int32_t x586 = INT32_MAX;
	static volatile int8_t x587 = -3;
	uint32_t x588 = 2863320U;
	volatile int32_t t128 = -1698858;

    t128 = (x585<=((x586<=x587)-x588));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x589 = -1LL;
	int16_t x590 = -1;
	static uint64_t x592 = 12853899426LLU;
	volatile int32_t t129 = -2;

    t129 = (x589<=((x590<=x591)-x592));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x593 = 157516747947LLU;
	volatile uint16_t x594 = UINT16_MAX;
	uint64_t x595 = 672LLU;
	int32_t t130 = 7139;

    t130 = (x593<=((x594<=x595)-x596));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint8_t x597 = 96U;
	static volatile int8_t x600 = -2;
	int32_t t131 = -15091805;

    t131 = (x597<=((x598<=x599)-x600));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x601 = -148;
	static volatile int32_t t132 = 8129;

    t132 = (x601<=((x602<=x603)-x604));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x605 = UINT64_MAX;
	int64_t x607 = -1LL;
	volatile uint8_t x608 = 3U;
	static int32_t t133 = 140;

    t133 = (x605<=((x606<=x607)-x608));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x609 = INT64_MIN;
	uint8_t x610 = 21U;
	uint8_t x611 = UINT8_MAX;

    t134 = (x609<=((x610<=x611)-x612));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x613 = 1;
	uint8_t x615 = 4U;
	static int32_t x616 = -1;
	int32_t t135 = 28378;

    t135 = (x613<=((x614<=x615)-x616));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x618 = 7U;
	volatile uint16_t x619 = 7U;

    t136 = (x617<=((x618<=x619)-x620));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x621 = -1;
	int16_t x622 = INT16_MIN;
	static int64_t x623 = INT64_MAX;

    t137 = (x621<=((x622<=x623)-x624));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x625 = 12;
	int16_t x626 = 0;
	static uint32_t x627 = UINT32_MAX;
	static int8_t x628 = INT8_MIN;
	static int32_t t138 = 24373911;

    t138 = (x625<=((x626<=x627)-x628));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x630 = -961;
	uint32_t x631 = 50U;
	int16_t x632 = INT16_MIN;
	volatile int32_t t139 = 0;

    t139 = (x629<=((x630<=x631)-x632));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static int8_t x633 = -1;
	static uint32_t x634 = 890U;
	volatile int32_t x635 = 24667;
	int64_t x636 = -1LL;

    t140 = (x633<=((x634<=x635)-x636));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x637 = -1;
	volatile int32_t x638 = INT32_MIN;
	uint32_t x639 = 5U;
	int8_t x640 = -4;

    t141 = (x637<=((x638<=x639)-x640));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x643 = INT32_MAX;

    t142 = (x641<=((x642<=x643)-x644));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x645 = 5U;
	volatile int8_t x646 = -1;
	static uint8_t x647 = 114U;
	uint32_t x648 = 56689782U;
	int32_t t143 = -49107383;

    t143 = (x645<=((x646<=x647)-x648));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x649 = 10U;
	volatile int32_t x650 = 1028050684;
	volatile int16_t x651 = INT16_MIN;
	uint64_t x652 = 16983LLU;
	int32_t t144 = 21;

    t144 = (x649<=((x650<=x651)-x652));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x654 = UINT16_MAX;
	uint8_t x655 = UINT8_MAX;
	uint32_t x656 = 440344U;

    t145 = (x653<=((x654<=x655)-x656));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x657 = 58U;
	int64_t x658 = INT64_MIN;
	volatile int32_t x659 = 3985;
	int32_t x660 = -1;
	static volatile int32_t t146 = -951;

    t146 = (x657<=((x658<=x659)-x660));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x662 = INT32_MAX;
	volatile uint64_t x663 = 54350454572510189LLU;
	volatile int32_t t147 = 1196000;

    t147 = (x661<=((x662<=x663)-x664));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x665 = 567U;
	int64_t x666 = INT64_MIN;
	uint32_t x667 = 58286U;
	static int8_t x668 = INT8_MIN;

    t148 = (x665<=((x666<=x667)-x668));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x669 = INT32_MIN;
	volatile uint8_t x670 = UINT8_MAX;
	static int16_t x671 = INT16_MIN;
	static volatile uint16_t x672 = UINT16_MAX;

    t149 = (x669<=((x670<=x671)-x672));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x673 = INT32_MIN;
	int64_t x674 = INT64_MIN;
	static volatile int8_t x676 = -14;

    t150 = (x673<=((x674<=x675)-x676));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int32_t x677 = INT32_MIN;
	int32_t x678 = -1;
	int32_t x680 = -14224;
	volatile int32_t t151 = 1464644;

    t151 = (x677<=((x678<=x679)-x680));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x681 = INT16_MIN;
	int8_t x682 = -3;
	static int8_t x684 = -1;
	volatile int32_t t152 = -1547040;

    t152 = (x681<=((x682<=x683)-x684));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x685 = INT8_MIN;
	int64_t x686 = INT64_MIN;
	int8_t x687 = INT8_MIN;
	uint64_t x688 = UINT64_MAX;
	volatile int32_t t153 = 2871089;

    t153 = (x685<=((x686<=x687)-x688));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x689 = -1;
	int8_t x690 = INT8_MIN;
	int8_t x691 = INT8_MIN;
	int16_t x692 = -57;

    t154 = (x689<=((x690<=x691)-x692));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint64_t x697 = UINT64_MAX;
	int32_t x700 = -1;
	volatile int32_t t155 = -100;

    t155 = (x697<=((x698<=x699)-x700));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x701 = -1;
	static int16_t x702 = INT16_MAX;
	int64_t x703 = INT64_MIN;
	int64_t x704 = -513658057441638LL;
	volatile int32_t t156 = -32;

    t156 = (x701<=((x702<=x703)-x704));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x705 = UINT16_MAX;
	uint32_t x706 = 461739U;
	static uint8_t x708 = UINT8_MAX;
	int32_t t157 = -47;

    t157 = (x705<=((x706<=x707)-x708));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x710 = INT16_MAX;
	int32_t t158 = -505;

    t158 = (x709<=((x710<=x711)-x712));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x714 = INT32_MAX;
	volatile int8_t x715 = INT8_MIN;

    t159 = (x713<=((x714<=x715)-x716));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile uint16_t x717 = UINT16_MAX;
	volatile int32_t t160 = -2;

    t160 = (x717<=((x718<=x719)-x720));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x723 = -345;
	volatile int64_t x724 = -588810895345660LL;

    t161 = (x721<=((x722<=x723)-x724));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x727 = 2U;
	int16_t x728 = -2775;
	volatile int32_t t162 = 729;

    t162 = (x725<=((x726<=x727)-x728));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x729 = 13652LL;
	static uint32_t x730 = 0U;
	volatile int16_t x731 = -6;
	uint32_t x732 = UINT32_MAX;
	volatile int32_t t163 = 72113826;

    t163 = (x729<=((x730<=x731)-x732));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x734 = UINT64_MAX;
	static volatile int8_t x735 = INT8_MAX;
	static uint16_t x736 = 25438U;

    t164 = (x733<=((x734<=x735)-x736));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x737 = -1;
	static uint64_t x738 = 26909LLU;
	static int64_t x739 = 326189LL;
	int32_t x740 = 2497;
	int32_t t165 = 1;

    t165 = (x737<=((x738<=x739)-x740));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int64_t x742 = INT64_MIN;
	int64_t x743 = 6829804434342LL;
	volatile int32_t t166 = -33741921;

    t166 = (x741<=((x742<=x743)-x744));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x747 = -1;
	volatile uint32_t x748 = 5171297U;
	int32_t t167 = -74902;

    t167 = (x745<=((x746<=x747)-x748));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x749 = INT64_MIN;
	static uint8_t x750 = UINT8_MAX;
	int32_t x751 = INT32_MIN;
	int32_t t168 = 17;

    t168 = (x749<=((x750<=x751)-x752));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x753 = 3353865LL;
	int8_t x755 = 3;
	int64_t x756 = INT64_MAX;

    t169 = (x753<=((x754<=x755)-x756));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x757 = 5185U;
	volatile int16_t x758 = INT16_MIN;
	int8_t x759 = -26;
	static int8_t x760 = INT8_MIN;
	int32_t t170 = -51111;

    t170 = (x757<=((x758<=x759)-x760));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x761 = 8804;
	uint8_t x763 = 1U;
	uint64_t x764 = UINT64_MAX;
	int32_t t171 = -1857;

    t171 = (x761<=((x762<=x763)-x764));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x765 = -1;
	int8_t x767 = -34;
	int64_t x768 = 285097284LL;
	int32_t t172 = 1;

    t172 = (x765<=((x766<=x767)-x768));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint32_t x769 = UINT32_MAX;
	uint64_t x770 = 17718582145598LLU;
	int32_t x771 = INT32_MIN;
	uint32_t x772 = UINT32_MAX;
	volatile int32_t t173 = 121;

    t173 = (x769<=((x770<=x771)-x772));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x773 = -1;
	int16_t x774 = INT16_MIN;
	int64_t x775 = 1LL;
	uint8_t x776 = UINT8_MAX;
	int32_t t174 = -143252629;

    t174 = (x773<=((x774<=x775)-x776));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint16_t x777 = UINT16_MAX;
	int32_t x778 = INT32_MIN;
	int64_t x779 = INT64_MIN;
	int8_t x780 = INT8_MIN;
	volatile int32_t t175 = 1;

    t175 = (x777<=((x778<=x779)-x780));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x781 = 199U;
	int16_t x782 = INT16_MIN;
	uint8_t x783 = 16U;
	int32_t x784 = INT32_MAX;
	int32_t t176 = 5;

    t176 = (x781<=((x782<=x783)-x784));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x785 = INT8_MAX;
	int8_t x786 = INT8_MIN;
	uint32_t x788 = UINT32_MAX;
	volatile int32_t t177 = -537601;

    t177 = (x785<=((x786<=x787)-x788));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x790 = INT16_MIN;
	uint64_t x792 = 252109123799210438LLU;

    t178 = (x789<=((x790<=x791)-x792));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint64_t x793 = 282702LLU;
	static int16_t x794 = -1;
	int16_t x795 = -1;

    t179 = (x793<=((x794<=x795)-x796));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x797 = INT64_MIN;
	uint16_t x798 = 2U;
	volatile int32_t x799 = 13627183;
	uint8_t x800 = 0U;

    t180 = (x797<=((x798<=x799)-x800));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int64_t x801 = 3027160982LL;
	volatile int64_t x802 = INT64_MIN;
	int32_t t181 = -16011;

    t181 = (x801<=((x802<=x803)-x804));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x805 = 0U;
	static volatile uint64_t x806 = UINT64_MAX;
	static volatile int64_t x808 = 8470083287654LL;
	volatile int32_t t182 = -1;

    t182 = (x805<=((x806<=x807)-x808));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x809 = -1;
	uint16_t x810 = 6U;
	int32_t t183 = 13720981;

    t183 = (x809<=((x810<=x811)-x812));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x814 = 14188609LLU;
	volatile uint16_t x815 = 91U;
	uint32_t x816 = UINT32_MAX;
	static int32_t t184 = -1;

    t184 = (x813<=((x814<=x815)-x816));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x819 = 200U;
	int32_t t185 = 13103819;

    t185 = (x817<=((x818<=x819)-x820));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int64_t x825 = -1LL;
	uint32_t x826 = 3018198U;
	int32_t x827 = INT32_MIN;
	volatile uint64_t x828 = UINT64_MAX;
	int32_t t186 = 3790;

    t186 = (x825<=((x826<=x827)-x828));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static int16_t x831 = INT16_MAX;
	uint64_t x832 = 456LLU;

    t187 = (x829<=((x830<=x831)-x832));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x833 = INT8_MIN;
	volatile uint64_t x834 = 26873715227590LLU;
	uint8_t x836 = 8U;
	int32_t t188 = -48;

    t188 = (x833<=((x834<=x835)-x836));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x837 = 17233153100466LL;
	uint16_t x838 = 7U;
	uint32_t x839 = 231234U;

    t189 = (x837<=((x838<=x839)-x840));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x841 = 231U;
	static volatile uint64_t x844 = UINT64_MAX;
	volatile int32_t t190 = 1006;

    t190 = (x841<=((x842<=x843)-x844));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x845 = 4433U;
	uint32_t x846 = 989746U;
	int32_t x847 = -393;

    t191 = (x845<=((x846<=x847)-x848));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x853 = -1737;
	volatile int8_t x854 = -1;
	uint32_t x855 = UINT32_MAX;

    t192 = (x853<=((x854<=x855)-x856));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint64_t x865 = 3058LLU;
	int8_t x866 = 58;
	volatile int32_t t193 = -7;

    t193 = (x865<=((x866<=x867)-x868));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x869 = 14798;
	uint16_t x870 = 0U;
	int16_t x871 = -367;
	int16_t x872 = INT16_MIN;
	int32_t t194 = -789;

    t194 = (x869<=((x870<=x871)-x872));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int32_t x873 = -1;
	uint64_t x874 = UINT64_MAX;
	int64_t x875 = INT64_MAX;
	uint16_t x876 = 1561U;
	volatile int32_t t195 = 6164;

    t195 = (x873<=((x874<=x875)-x876));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x877 = INT8_MIN;
	static int64_t x878 = INT64_MIN;
	uint16_t x879 = UINT16_MAX;
	int32_t x880 = INT32_MAX;
	int32_t t196 = -118881;

    t196 = (x877<=((x878<=x879)-x880));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x885 = INT64_MIN;
	static int16_t x886 = INT16_MIN;
	volatile int32_t x887 = INT32_MIN;
	static int64_t x888 = -1LL;
	volatile int32_t t197 = 571797217;

    t197 = (x885<=((x886<=x887)-x888));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static int32_t x889 = -114838;
	static int64_t x890 = -1LL;
	volatile int32_t t198 = -2741;

    t198 = (x889<=((x890<=x891)-x892));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x893 = INT8_MIN;
	int32_t x894 = 14;
	uint16_t x895 = 2U;
	static int64_t x896 = INT64_MAX;
	static volatile int32_t t199 = -999631;

    t199 = (x893<=((x894<=x895)-x896));

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

