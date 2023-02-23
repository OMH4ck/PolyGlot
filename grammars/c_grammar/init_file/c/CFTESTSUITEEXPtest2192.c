
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

uint8_t x5 = 8U;
int16_t x7 = INT16_MIN;
static int8_t x10 = -1;
uint32_t x11 = UINT32_MAX;
static volatile int32_t t2 = 219;
int8_t x13 = 2;
int64_t x20 = 8LL;
volatile uint8_t x21 = UINT8_MAX;
uint16_t x33 = UINT16_MAX;
static volatile uint8_t x39 = 4U;
volatile int16_t x44 = INT16_MIN;
uint64_t x48 = UINT64_MAX;
int64_t x55 = INT64_MIN;
uint64_t x56 = UINT64_MAX;
int8_t x61 = INT8_MIN;
volatile int32_t x63 = INT32_MAX;
volatile int32_t t16 = -16652;
static int8_t x87 = -1;
uint64_t x95 = 122674632558LLU;
int8_t x116 = -1;
volatile uint32_t x117 = 110108356U;
volatile uint32_t x125 = UINT32_MAX;
int32_t x130 = INT32_MIN;
int64_t x133 = INT64_MAX;
int8_t x135 = 0;
static int16_t x136 = -1;
static volatile int32_t t29 = 24558;
static int8_t x139 = INT8_MAX;
volatile int32_t t31 = -3;
int8_t x148 = INT8_MIN;
int32_t x149 = 336;
uint64_t x153 = UINT64_MAX;
volatile int32_t t36 = 128082277;
int32_t t37 = 52712984;
static int16_t x170 = -57;
int16_t x172 = -1;
int32_t t38 = -14;
int32_t x177 = -1;
static uint16_t x182 = 1412U;
int32_t x187 = INT32_MAX;
int32_t t42 = -2;
volatile int8_t x198 = -1;
uint64_t x199 = 22676115LLU;
volatile int8_t x202 = INT8_MIN;
int16_t x205 = INT16_MIN;
static int8_t x211 = INT8_MIN;
int8_t x216 = 30;
int64_t x218 = 9466801996996545LL;
int16_t x231 = -136;
int8_t x233 = -3;
int16_t x235 = 8;
static volatile int32_t t51 = -4;
int8_t x244 = INT8_MIN;
int8_t x249 = INT8_MAX;
int8_t x250 = -1;
uint32_t x252 = 4166378U;
volatile int64_t x259 = -1LL;
volatile int32_t t55 = 255;
int64_t x272 = 675472918823LL;
static volatile int32_t t58 = -48207;
int16_t x282 = INT16_MIN;
volatile uint32_t x283 = 302U;
static uint64_t x285 = 3LLU;
uint16_t x288 = UINT16_MAX;
uint16_t x302 = 324U;
volatile int8_t x303 = INT8_MIN;
int32_t x305 = 450228;
int32_t t64 = 92;
int16_t x316 = -1;
int8_t x325 = INT8_MAX;
int64_t x333 = INT64_MIN;
static int64_t x335 = INT64_MIN;
uint64_t x353 = UINT64_MAX;
volatile int32_t t74 = -25;
int8_t x360 = 0;
static uint32_t x372 = 1970405U;
uint16_t x387 = 1055U;
volatile int32_t t81 = -61;
int8_t x389 = -38;
uint32_t x393 = 388810442U;
uint8_t x395 = 1U;
volatile int32_t t83 = 258;
volatile int32_t t84 = 225941872;
volatile int16_t x404 = 58;
volatile int32_t t85 = 29070;
uint8_t x412 = 5U;
volatile int32_t t89 = -43;
static volatile int16_t x429 = INT16_MIN;
static int32_t x431 = -3068;
int8_t x436 = -1;
int8_t x438 = -41;
int8_t x439 = -1;
int32_t t93 = -10729;
volatile uint64_t x444 = UINT64_MAX;
volatile int16_t x453 = INT16_MAX;
uint16_t x455 = UINT16_MAX;
int32_t t96 = -14418;
volatile uint64_t x462 = 0LLU;
volatile int32_t t98 = 220863977;
uint32_t x473 = 1016118643U;
static uint32_t x476 = 23U;
int16_t x483 = -239;
int32_t x486 = -74764095;
int16_t x501 = INT16_MIN;
uint8_t x505 = 2U;
static int64_t x507 = -399846768LL;
static volatile int16_t x515 = INT16_MAX;
int8_t x522 = 6;
int8_t x523 = -1;
int64_t x531 = 5198154556LL;
uint8_t x532 = UINT8_MAX;
int32_t x534 = -64893;
static int8_t x536 = 18;
int32_t t114 = -628528203;
static uint64_t x537 = 70253636429386LLU;
uint16_t x539 = 641U;
int32_t t120 = -5630;
int8_t x566 = 12;
int32_t x568 = -1541;
int8_t x571 = -1;
int64_t x573 = 9322676LL;
static volatile int8_t x590 = INT8_MAX;
int16_t x598 = INT16_MIN;
volatile int64_t x600 = 1438170LL;
volatile uint16_t x603 = 1U;
volatile int32_t x611 = INT32_MAX;
uint64_t x630 = 8794LLU;
static uint32_t x632 = 297U;
int64_t x646 = INT64_MIN;
int8_t x653 = INT8_MIN;
volatile int64_t x663 = INT64_MIN;
static int64_t x668 = -1LL;
static volatile uint8_t x670 = 16U;
uint64_t x672 = UINT64_MAX;
uint64_t x674 = UINT64_MAX;
int32_t x675 = -23264705;
int16_t x688 = -1;
int8_t x695 = 8;
volatile int32_t x697 = 39583;
int32_t t142 = 115921;
static int16_t x703 = 68;
int32_t t144 = 5;
int32_t x710 = INT32_MIN;
volatile int8_t x711 = 5;
int16_t x713 = INT16_MAX;
int16_t x714 = -1;
volatile int32_t x718 = -1;
static uint8_t x720 = UINT8_MAX;
uint8_t x721 = 12U;
static uint16_t x727 = 1011U;
uint32_t x728 = UINT32_MAX;
volatile int32_t t149 = -16258484;
uint64_t x729 = 5791588442949412LLU;
static volatile int32_t x730 = 56;
int64_t x738 = -1LL;
int16_t x746 = INT16_MIN;
int64_t x759 = INT64_MIN;
uint16_t x760 = 110U;
int16_t x762 = INT16_MAX;
uint8_t x764 = UINT8_MAX;
static uint64_t x765 = 18LLU;
volatile int32_t t158 = 814138;
int16_t x777 = INT16_MAX;
int32_t t160 = 583003462;
int64_t x781 = 50LL;
uint16_t x788 = 317U;
int16_t x794 = INT16_MIN;
uint16_t x797 = 0U;
int32_t x798 = -2669944;
int32_t t165 = 344;
volatile int8_t x815 = INT8_MAX;
volatile int8_t x817 = -11;
int64_t x824 = -1LL;
uint32_t x825 = UINT32_MAX;
static int32_t x826 = INT32_MIN;
int64_t x828 = 850LL;
static int32_t t173 = -214654;
uint64_t x839 = 143539473LLU;
uint32_t x843 = 8137768U;
volatile int32_t x844 = -1;
int32_t x848 = 5;
uint64_t x851 = 119224340052689323LLU;
static int16_t x856 = INT16_MAX;
volatile uint32_t x858 = 48387U;
int32_t x860 = -1;
static volatile int64_t x862 = INT64_MAX;
uint16_t x867 = UINT16_MAX;
int16_t x877 = -183;
int32_t t185 = -44;
uint64_t x883 = 62LLU;
int32_t x885 = -2;
int64_t x887 = -1LL;
uint64_t x888 = 15805LLU;
volatile int32_t t187 = 282380634;
static int8_t x893 = INT8_MAX;
volatile int32_t t189 = 1;
static int64_t x904 = -3149219829LL;
volatile int32_t x907 = -1;
static volatile int32_t t193 = -6039799;
static int64_t x918 = INT64_MAX;
volatile int32_t t194 = -14150;
uint8_t x924 = 83U;
static uint32_t x925 = 14U;
int8_t x926 = INT8_MIN;
int16_t x931 = -1;
uint32_t x933 = 24847U;
volatile int16_t x934 = INT16_MAX;
int16_t x935 = 1519;
volatile int32_t t198 = 0;
uint32_t x939 = UINT32_MAX;


void f0(void) {
    	uint64_t x1 = 38655647157046LLU;
	uint64_t x2 = 762247LLU;
	int32_t x3 = 7792576;
	volatile int64_t x4 = INT64_MIN;
	int32_t t0 = -3528;

    t0 = (x1==((x2&x3)*x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x6 = 1;
	uint32_t x8 = 95948U;
	int32_t t1 = -1;

    t1 = (x5==((x6&x7)*x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = 0LL;
	uint64_t x12 = UINT64_MAX;

    t2 = (x9==((x10&x11)*x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x14 = INT8_MAX;
	int16_t x15 = INT16_MIN;
	uint16_t x16 = UINT16_MAX;
	volatile int32_t t3 = 3871787;

    t3 = (x13==((x14&x15)*x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = INT8_MAX;
	static uint64_t x18 = UINT64_MAX;
	volatile uint64_t x19 = 918159LLU;
	int32_t t4 = 763052;

    t4 = (x17==((x18&x19)*x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x22 = INT32_MAX;
	int8_t x23 = 0;
	int32_t x24 = INT32_MIN;
	volatile int32_t t5 = -116798;

    t5 = (x21==((x22&x23)*x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = -1;
	static int64_t x26 = INT64_MIN;
	uint64_t x27 = UINT64_MAX;
	int8_t x28 = 57;
	volatile int32_t t6 = -11;

    t6 = (x25==((x26&x27)*x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = -2;
	uint64_t x30 = 50542LLU;
	int64_t x31 = INT64_MIN;
	volatile uint16_t x32 = 62U;
	int32_t t7 = 18964200;

    t7 = (x29==((x30&x31)*x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x34 = INT16_MAX;
	uint16_t x35 = UINT16_MAX;
	int16_t x36 = -1;
	int32_t t8 = 6;

    t8 = (x33==((x34&x35)*x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = INT32_MAX;
	uint64_t x38 = UINT64_MAX;
	uint8_t x40 = UINT8_MAX;
	int32_t t9 = 410020496;

    t9 = (x37==((x38&x39)*x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int32_t x41 = INT32_MIN;
	static int16_t x42 = 362;
	volatile int16_t x43 = -1;
	volatile int32_t t10 = 3619948;

    t10 = (x41==((x42&x43)*x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x45 = 46;
	uint8_t x46 = 0U;
	uint64_t x47 = UINT64_MAX;
	volatile int32_t t11 = -123408506;

    t11 = (x45==((x46&x47)*x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = INT32_MIN;
	static int32_t x50 = -1;
	int32_t x51 = -67174;
	static int8_t x52 = INT8_MIN;
	int32_t t12 = 144;

    t12 = (x49==((x50&x51)*x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x53 = UINT64_MAX;
	int32_t x54 = -1;
	int32_t t13 = -200631597;

    t13 = (x53==((x54&x55)*x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = -9;
	int32_t x58 = -104416;
	static uint64_t x59 = 522988LLU;
	volatile uint64_t x60 = 3LLU;
	int32_t t14 = 68586;

    t14 = (x57==((x58&x59)*x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x62 = -1;
	static volatile int8_t x64 = -1;
	volatile int32_t t15 = 9;

    t15 = (x61==((x62&x63)*x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int8_t x77 = INT8_MIN;
	volatile int16_t x78 = INT16_MAX;
	volatile int64_t x79 = INT64_MIN;
	static int64_t x80 = -14LL;

    t16 = (x77==((x78&x79)*x80));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint32_t x81 = 1328U;
	static int32_t x82 = -8361;
	volatile uint64_t x83 = UINT64_MAX;
	int64_t x84 = -1903052128712693LL;
	volatile int32_t t17 = 3294;

    t17 = (x81==((x82&x83)*x84));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x85 = 12;
	uint64_t x86 = 7347295132822397LLU;
	volatile int8_t x88 = 6;
	int32_t t18 = -254;

    t18 = (x85==((x86&x87)*x88));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x89 = INT64_MIN;
	volatile int8_t x90 = 0;
	static int8_t x91 = INT8_MIN;
	int16_t x92 = INT16_MIN;
	int32_t t19 = -16017;

    t19 = (x89==((x90&x91)*x92));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x93 = INT16_MIN;
	volatile int32_t x94 = INT32_MIN;
	volatile int8_t x96 = INT8_MAX;
	int32_t t20 = 6;

    t20 = (x93==((x94&x95)*x96));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x101 = -10;
	uint32_t x102 = UINT32_MAX;
	int16_t x103 = -1;
	volatile uint64_t x104 = 25528899211251LLU;
	volatile int32_t t21 = -120305014;

    t21 = (x101==((x102&x103)*x104));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x105 = 16;
	static int16_t x106 = -1;
	int8_t x107 = -1;
	int16_t x108 = -1;
	volatile int32_t t22 = -476958;

    t22 = (x105==((x106&x107)*x108));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile uint64_t x109 = UINT64_MAX;
	volatile int8_t x110 = 0;
	static volatile uint16_t x111 = UINT16_MAX;
	static int64_t x112 = -4320857160744LL;
	int32_t t23 = -244;

    t23 = (x109==((x110&x111)*x112));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x113 = -1;
	int16_t x114 = INT16_MAX;
	int8_t x115 = INT8_MAX;
	volatile int32_t t24 = 570;

    t24 = (x113==((x114&x115)*x116));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x118 = UINT64_MAX;
	int8_t x119 = INT8_MIN;
	volatile uint64_t x120 = 5LLU;
	static int32_t t25 = -241;

    t25 = (x117==((x118&x119)*x120));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x121 = UINT16_MAX;
	int64_t x122 = 1LL;
	int64_t x123 = -1565252LL;
	int8_t x124 = 0;
	volatile int32_t t26 = -61513731;

    t26 = (x121==((x122&x123)*x124));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x126 = INT16_MIN;
	int64_t x127 = INT64_MAX;
	uint8_t x128 = 1U;
	static volatile int32_t t27 = 150341593;

    t27 = (x125==((x126&x127)*x128));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x129 = 19190U;
	int16_t x131 = 76;
	int64_t x132 = -1LL;
	volatile int32_t t28 = -578216335;

    t28 = (x129==((x130&x131)*x132));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x134 = -1;

    t29 = (x133==((x134&x135)*x136));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x137 = INT32_MAX;
	uint32_t x138 = 2336U;
	int32_t x140 = -1;
	static volatile int32_t t30 = -37612;

    t30 = (x137==((x138&x139)*x140));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x141 = UINT16_MAX;
	uint64_t x142 = UINT64_MAX;
	static int32_t x143 = INT32_MIN;
	static int64_t x144 = -41616497720LL;

    t31 = (x141==((x142&x143)*x144));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x145 = INT16_MIN;
	int16_t x146 = 117;
	uint32_t x147 = 140748706U;
	static int32_t t32 = -655055;

    t32 = (x145==((x146&x147)*x148));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x150 = -1LL;
	int8_t x151 = INT8_MAX;
	int64_t x152 = -1LL;
	volatile int32_t t33 = 133420568;

    t33 = (x149==((x150&x151)*x152));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x154 = -1;
	int32_t x155 = 73;
	int8_t x156 = INT8_MIN;
	static volatile int32_t t34 = 123233620;

    t34 = (x153==((x154&x155)*x156));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x157 = 4U;
	int16_t x158 = INT16_MAX;
	volatile uint8_t x159 = 15U;
	int32_t x160 = -1;
	int32_t t35 = -35;

    t35 = (x157==((x158&x159)*x160));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x161 = 2U;
	volatile uint16_t x162 = 1U;
	int16_t x163 = 1;
	static volatile int32_t x164 = INT32_MIN;

    t36 = (x161==((x162&x163)*x164));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint8_t x165 = 7U;
	int8_t x166 = INT8_MIN;
	uint16_t x167 = UINT16_MAX;
	int64_t x168 = -70706887LL;

    t37 = (x165==((x166&x167)*x168));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x169 = 0;
	static int8_t x171 = INT8_MIN;

    t38 = (x169==((x170&x171)*x172));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x178 = INT8_MIN;
	uint32_t x179 = 159U;
	int16_t x180 = -338;
	volatile int32_t t39 = -20;

    t39 = (x177==((x178&x179)*x180));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x181 = INT16_MIN;
	volatile uint32_t x183 = 15365728U;
	static uint8_t x184 = 26U;
	int32_t t40 = 762;

    t40 = (x181==((x182&x183)*x184));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x185 = INT16_MAX;
	volatile int16_t x186 = INT16_MIN;
	uint32_t x188 = 2014867U;
	int32_t t41 = 1978;

    t41 = (x185==((x186&x187)*x188));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint8_t x193 = UINT8_MAX;
	uint32_t x194 = 3813U;
	static int8_t x195 = 0;
	uint64_t x196 = 18LLU;

    t42 = (x193==((x194&x195)*x196));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x197 = -15358473738546LL;
	int16_t x200 = INT16_MIN;
	int32_t t43 = -2;

    t43 = (x197==((x198&x199)*x200));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x201 = INT32_MIN;
	static uint8_t x203 = 2U;
	volatile uint32_t x204 = 546865U;
	int32_t t44 = -6507;

    t44 = (x201==((x202&x203)*x204));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x206 = INT32_MIN;
	uint16_t x207 = 21U;
	int8_t x208 = INT8_MIN;
	volatile int32_t t45 = -227977;

    t45 = (x205==((x206&x207)*x208));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x209 = 3;
	int16_t x210 = INT16_MAX;
	uint64_t x212 = 11718576LLU;
	int32_t t46 = -6;

    t46 = (x209==((x210&x211)*x212));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x213 = -1LL;
	static volatile uint64_t x214 = UINT64_MAX;
	uint8_t x215 = UINT8_MAX;
	int32_t t47 = 185861680;

    t47 = (x213==((x214&x215)*x216));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x217 = -881952;
	int64_t x219 = INT64_MIN;
	int8_t x220 = INT8_MIN;
	int32_t t48 = -11;

    t48 = (x217==((x218&x219)*x220));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x225 = INT8_MAX;
	volatile int8_t x226 = 10;
	static int64_t x227 = 19985198676620LL;
	int16_t x228 = -10;
	static int32_t t49 = -49964852;

    t49 = (x225==((x226&x227)*x228));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x229 = INT32_MIN;
	int32_t x230 = -36503700;
	static uint32_t x232 = 21U;
	int32_t t50 = -10;

    t50 = (x229==((x230&x231)*x232));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile uint32_t x234 = 8813U;
	static int16_t x236 = -1;

    t51 = (x233==((x234&x235)*x236));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x241 = INT16_MIN;
	static int8_t x242 = -1;
	static uint8_t x243 = 102U;
	int32_t t52 = 337;

    t52 = (x241==((x242&x243)*x244));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x251 = 7LLU;
	volatile int32_t t53 = -26;

    t53 = (x249==((x250&x251)*x252));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint16_t x253 = UINT16_MAX;
	int8_t x254 = INT8_MIN;
	static uint64_t x255 = 1038635619850287869LLU;
	static volatile uint32_t x256 = 0U;
	int32_t t54 = -3;

    t54 = (x253==((x254&x255)*x256));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint64_t x257 = 1643766691726LLU;
	int32_t x258 = 22210;
	int32_t x260 = 7928;

    t55 = (x257==((x258&x259)*x260));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x265 = -1;
	int64_t x266 = 4642466916498316LL;
	int32_t x267 = -1;
	uint8_t x268 = 13U;
	volatile int32_t t56 = -1906;

    t56 = (x265==((x266&x267)*x268));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x269 = 483U;
	uint64_t x270 = UINT64_MAX;
	int32_t x271 = 403;
	int32_t t57 = 99;

    t57 = (x269==((x270&x271)*x272));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x277 = INT8_MAX;
	volatile uint64_t x278 = 848LLU;
	int64_t x279 = 986523679LL;
	static int8_t x280 = INT8_MIN;

    t58 = (x277==((x278&x279)*x280));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x281 = INT16_MIN;
	int32_t x284 = 8610968;
	static volatile int32_t t59 = -3;

    t59 = (x281==((x282&x283)*x284));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x286 = 3;
	static int8_t x287 = INT8_MIN;
	volatile int32_t t60 = 820;

    t60 = (x285==((x286&x287)*x288));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x289 = INT8_MAX;
	uint16_t x290 = 3U;
	int64_t x291 = INT64_MIN;
	uint64_t x292 = UINT64_MAX;
	volatile int32_t t61 = -46853927;

    t61 = (x289==((x290&x291)*x292));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x297 = INT16_MAX;
	volatile uint64_t x298 = 3475327463695LLU;
	static uint32_t x299 = 37597362U;
	static int16_t x300 = -264;
	volatile int32_t t62 = 40829328;

    t62 = (x297==((x298&x299)*x300));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x301 = 2999U;
	uint32_t x304 = UINT32_MAX;
	static int32_t t63 = 331;

    t63 = (x301==((x302&x303)*x304));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x306 = -1;
	int16_t x307 = -1;
	uint32_t x308 = 995517854U;

    t64 = (x305==((x306&x307)*x308));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x309 = INT16_MIN;
	volatile uint16_t x310 = 165U;
	int32_t x311 = 1;
	uint8_t x312 = UINT8_MAX;
	volatile int32_t t65 = -45373819;

    t65 = (x309==((x310&x311)*x312));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x313 = INT32_MIN;
	uint16_t x314 = 24U;
	int8_t x315 = INT8_MIN;
	int32_t t66 = 0;

    t66 = (x313==((x314&x315)*x316));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x317 = 29;
	volatile uint64_t x318 = UINT64_MAX;
	uint16_t x319 = 49U;
	uint64_t x320 = UINT64_MAX;
	int32_t t67 = -1263513;

    t67 = (x317==((x318&x319)*x320));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint64_t x321 = UINT64_MAX;
	int8_t x322 = INT8_MIN;
	int32_t x323 = -1;
	int32_t x324 = -14609;
	static volatile int32_t t68 = 68;

    t68 = (x321==((x322&x323)*x324));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x326 = 1U;
	int16_t x327 = -444;
	uint32_t x328 = 16127U;
	static volatile int32_t t69 = 31142;

    t69 = (x325==((x326&x327)*x328));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x329 = 29064395;
	volatile int32_t x330 = INT32_MAX;
	int16_t x331 = INT16_MAX;
	int64_t x332 = -1LL;
	static volatile int32_t t70 = 3935374;

    t70 = (x329==((x330&x331)*x332));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x334 = 1U;
	int8_t x336 = INT8_MIN;
	int32_t t71 = 2117973;

    t71 = (x333==((x334&x335)*x336));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x345 = INT16_MIN;
	int8_t x346 = -1;
	uint64_t x347 = UINT64_MAX;
	uint16_t x348 = 219U;
	volatile int32_t t72 = 82;

    t72 = (x345==((x346&x347)*x348));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x349 = -1;
	int16_t x350 = INT16_MAX;
	int64_t x351 = -1LL;
	uint16_t x352 = 4022U;
	int32_t t73 = 357;

    t73 = (x349==((x350&x351)*x352));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x354 = 17U;
	int8_t x355 = -1;
	static int64_t x356 = 98199772893498LL;

    t74 = (x353==((x354&x355)*x356));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint8_t x357 = UINT8_MAX;
	volatile uint16_t x358 = 2334U;
	int32_t x359 = INT32_MIN;
	int32_t t75 = 362;

    t75 = (x357==((x358&x359)*x360));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint8_t x361 = UINT8_MAX;
	static int32_t x362 = INT32_MAX;
	static uint8_t x363 = 3U;
	uint8_t x364 = 2U;
	int32_t t76 = -16255778;

    t76 = (x361==((x362&x363)*x364));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x365 = 36U;
	volatile uint16_t x366 = UINT16_MAX;
	int32_t x367 = INT32_MIN;
	int64_t x368 = INT64_MIN;
	int32_t t77 = -22520;

    t77 = (x365==((x366&x367)*x368));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x369 = 1;
	int8_t x370 = INT8_MIN;
	uint16_t x371 = 14U;
	int32_t t78 = -130872;

    t78 = (x369==((x370&x371)*x372));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x377 = -1;
	static uint8_t x378 = 28U;
	uint8_t x379 = UINT8_MAX;
	static uint16_t x380 = 629U;
	static int32_t t79 = 505;

    t79 = (x377==((x378&x379)*x380));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x381 = INT64_MAX;
	volatile uint16_t x382 = UINT16_MAX;
	int32_t x383 = -1;
	int8_t x384 = INT8_MIN;
	volatile int32_t t80 = -5491;

    t80 = (x381==((x382&x383)*x384));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x385 = 669LLU;
	static int32_t x386 = -1;
	volatile uint8_t x388 = 8U;

    t81 = (x385==((x386&x387)*x388));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x390 = -1;
	static int8_t x391 = INT8_MIN;
	volatile uint32_t x392 = 18751U;
	volatile int32_t t82 = -7;

    t82 = (x389==((x390&x391)*x392));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int64_t x394 = -485062707223839LL;
	uint64_t x396 = UINT64_MAX;

    t83 = (x393==((x394&x395)*x396));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint16_t x397 = UINT16_MAX;
	uint32_t x398 = 837U;
	int64_t x399 = -3934392606805875LL;
	uint32_t x400 = UINT32_MAX;

    t84 = (x397==((x398&x399)*x400));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x401 = -23;
	static int16_t x402 = INT16_MAX;
	static int64_t x403 = INT64_MAX;

    t85 = (x401==((x402&x403)*x404));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x409 = -2;
	int64_t x410 = -1LL;
	volatile uint16_t x411 = 258U;
	int32_t t86 = 37027;

    t86 = (x409==((x410&x411)*x412));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x413 = -237;
	int8_t x414 = INT8_MIN;
	static int64_t x415 = -1LL;
	uint8_t x416 = 3U;
	static volatile int32_t t87 = -1;

    t87 = (x413==((x414&x415)*x416));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x417 = -8;
	volatile int32_t x418 = INT32_MIN;
	uint16_t x419 = 0U;
	static int64_t x420 = INT64_MAX;
	volatile int32_t t88 = 65512;

    t88 = (x417==((x418&x419)*x420));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x421 = -30521;
	static volatile uint16_t x422 = 87U;
	volatile uint64_t x423 = 5948504507858899844LLU;
	static int16_t x424 = -1;

    t89 = (x421==((x422&x423)*x424));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x425 = 8212531457LL;
	uint8_t x426 = 2U;
	static int16_t x427 = -1;
	int16_t x428 = -2013;
	int32_t t90 = -352503960;

    t90 = (x425==((x426&x427)*x428));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x430 = INT16_MAX;
	static int16_t x432 = -2231;
	volatile int32_t t91 = 2809;

    t91 = (x429==((x430&x431)*x432));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static int64_t x433 = INT64_MIN;
	int8_t x434 = INT8_MIN;
	int32_t x435 = INT32_MAX;
	volatile int32_t t92 = -34327;

    t92 = (x433==((x434&x435)*x436));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x437 = UINT32_MAX;
	int32_t x440 = 331727;

    t93 = (x437==((x438&x439)*x440));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x441 = -8;
	volatile int32_t x442 = -58979563;
	int8_t x443 = -1;
	volatile int32_t t94 = -399986;

    t94 = (x441==((x442&x443)*x444));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x449 = UINT16_MAX;
	uint8_t x450 = 0U;
	int32_t x451 = 54539693;
	int8_t x452 = -1;
	volatile int32_t t95 = 50;

    t95 = (x449==((x450&x451)*x452));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x454 = INT8_MIN;
	static uint32_t x456 = UINT32_MAX;

    t96 = (x453==((x454&x455)*x456));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x457 = INT64_MIN;
	uint16_t x458 = 29U;
	uint16_t x459 = 78U;
	uint16_t x460 = UINT16_MAX;
	int32_t t97 = -7735;

    t97 = (x457==((x458&x459)*x460));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x461 = -1;
	int16_t x463 = INT16_MIN;
	uint16_t x464 = 8099U;

    t98 = (x461==((x462&x463)*x464));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x465 = INT8_MIN;
	int8_t x466 = INT8_MAX;
	volatile int16_t x467 = INT16_MIN;
	volatile int16_t x468 = INT16_MIN;
	volatile int32_t t99 = -1365080;

    t99 = (x465==((x466&x467)*x468));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x469 = -1;
	int32_t x470 = 16;
	volatile int64_t x471 = INT64_MIN;
	static int32_t x472 = -1;
	int32_t t100 = -3888;

    t100 = (x469==((x470&x471)*x472));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x474 = 47505351LLU;
	int64_t x475 = INT64_MIN;
	volatile int32_t t101 = 1;

    t101 = (x473==((x474&x475)*x476));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x481 = -7468;
	static volatile uint32_t x482 = UINT32_MAX;
	volatile uint64_t x484 = 8475832434770LLU;
	static volatile int32_t t102 = -64907;

    t102 = (x481==((x482&x483)*x484));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile uint64_t x485 = 21232575LLU;
	int16_t x487 = 21;
	uint64_t x488 = UINT64_MAX;
	volatile int32_t t103 = 9;

    t103 = (x485==((x486&x487)*x488));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint8_t x489 = 0U;
	uint64_t x490 = 10170574176120LLU;
	int32_t x491 = INT32_MIN;
	volatile uint8_t x492 = 101U;
	int32_t t104 = -1;

    t104 = (x489==((x490&x491)*x492));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x493 = UINT8_MAX;
	static int16_t x494 = -126;
	static int16_t x495 = -4578;
	int16_t x496 = INT16_MIN;
	int32_t t105 = 569966614;

    t105 = (x493==((x494&x495)*x496));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x502 = INT64_MIN;
	int16_t x503 = 7239;
	uint8_t x504 = UINT8_MAX;
	volatile int32_t t106 = 5721116;

    t106 = (x501==((x502&x503)*x504));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x506 = INT8_MIN;
	int64_t x508 = -3LL;
	int32_t t107 = 80891736;

    t107 = (x505==((x506&x507)*x508));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x509 = UINT8_MAX;
	volatile int64_t x510 = -1LL;
	int64_t x511 = -1LL;
	int32_t x512 = 1026462295;
	volatile int32_t t108 = -9135;

    t108 = (x509==((x510&x511)*x512));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x513 = -1;
	volatile int64_t x514 = -1LL;
	uint16_t x516 = 0U;
	int32_t t109 = -46;

    t109 = (x513==((x514&x515)*x516));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x517 = INT16_MAX;
	int8_t x518 = INT8_MIN;
	uint32_t x519 = UINT32_MAX;
	int16_t x520 = 1;
	static volatile int32_t t110 = -1292317;

    t110 = (x517==((x518&x519)*x520));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x521 = INT8_MIN;
	uint64_t x524 = 1114555633LLU;
	int32_t t111 = -164505891;

    t111 = (x521==((x522&x523)*x524));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint32_t x525 = 446432U;
	static volatile uint64_t x526 = UINT64_MAX;
	static uint8_t x527 = 19U;
	int64_t x528 = INT64_MIN;
	volatile int32_t t112 = 128;

    t112 = (x525==((x526&x527)*x528));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x529 = 320241885U;
	int8_t x530 = INT8_MIN;
	int32_t t113 = -614177820;

    t113 = (x529==((x530&x531)*x532));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x533 = -258197;
	static int16_t x535 = -1;

    t114 = (x533==((x534&x535)*x536));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x538 = -1;
	volatile int64_t x540 = -218LL;
	int32_t t115 = 725;

    t115 = (x537==((x538&x539)*x540));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x541 = INT16_MIN;
	int16_t x542 = INT16_MIN;
	volatile uint32_t x543 = 41815120U;
	int8_t x544 = INT8_MIN;
	int32_t t116 = -97204;

    t116 = (x541==((x542&x543)*x544));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x545 = INT8_MIN;
	uint16_t x546 = 1U;
	uint16_t x547 = 65U;
	volatile int8_t x548 = INT8_MAX;
	static volatile int32_t t117 = -275;

    t117 = (x545==((x546&x547)*x548));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int32_t x553 = INT32_MIN;
	uint32_t x554 = UINT32_MAX;
	int32_t x555 = 186533;
	volatile int8_t x556 = INT8_MIN;
	int32_t t118 = -4137;

    t118 = (x553==((x554&x555)*x556));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x557 = INT64_MIN;
	uint16_t x558 = UINT16_MAX;
	int8_t x559 = INT8_MIN;
	volatile int16_t x560 = INT16_MIN;
	static int32_t t119 = 1631839;

    t119 = (x557==((x558&x559)*x560));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x561 = -248LL;
	uint64_t x562 = 9133822LLU;
	uint64_t x563 = 412LLU;
	static int64_t x564 = INT64_MIN;

    t120 = (x561==((x562&x563)*x564));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int16_t x565 = -247;
	int8_t x567 = INT8_MIN;
	int32_t t121 = -71114;

    t121 = (x565==((x566&x567)*x568));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x569 = INT64_MIN;
	volatile int8_t x570 = 1;
	int32_t x572 = INT32_MIN;
	volatile int32_t t122 = -115;

    t122 = (x569==((x570&x571)*x572));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint16_t x574 = UINT16_MAX;
	int16_t x575 = INT16_MIN;
	int16_t x576 = INT16_MIN;
	int32_t t123 = 3;

    t123 = (x573==((x574&x575)*x576));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x577 = 535897954144LLU;
	volatile int8_t x578 = INT8_MAX;
	uint64_t x579 = UINT64_MAX;
	uint32_t x580 = 62U;
	volatile int32_t t124 = -1;

    t124 = (x577==((x578&x579)*x580));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int64_t x585 = 11009LL;
	static uint64_t x586 = 6LLU;
	int64_t x587 = INT64_MAX;
	int32_t x588 = INT32_MIN;
	static int32_t t125 = 0;

    t125 = (x585==((x586&x587)*x588));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int32_t x589 = INT32_MIN;
	volatile int16_t x591 = INT16_MAX;
	static uint32_t x592 = 224772431U;
	static int32_t t126 = 9346668;

    t126 = (x589==((x590&x591)*x592));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x597 = UINT8_MAX;
	uint64_t x599 = 34464117060202050LLU;
	static int32_t t127 = -323020;

    t127 = (x597==((x598&x599)*x600));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x601 = 4LLU;
	static int8_t x602 = INT8_MIN;
	static uint16_t x604 = 3437U;
	static volatile int32_t t128 = 8261992;

    t128 = (x601==((x602&x603)*x604));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x609 = 12U;
	int16_t x610 = INT16_MIN;
	int64_t x612 = -45LL;
	int32_t t129 = 373706831;

    t129 = (x609==((x610&x611)*x612));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x613 = UINT32_MAX;
	static int64_t x614 = INT64_MIN;
	volatile uint16_t x615 = 2124U;
	volatile uint64_t x616 = 8LLU;
	int32_t t130 = -37096;

    t130 = (x613==((x614&x615)*x616));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x629 = -41LL;
	int16_t x631 = -1;
	static volatile int32_t t131 = -31774878;

    t131 = (x629==((x630&x631)*x632));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x633 = -16749939764800930LL;
	int64_t x634 = 46500951LL;
	int64_t x635 = -3LL;
	int32_t x636 = INT32_MAX;
	volatile int32_t t132 = 12871;

    t132 = (x633==((x634&x635)*x636));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x645 = INT32_MIN;
	uint8_t x647 = UINT8_MAX;
	uint8_t x648 = 1U;
	volatile int32_t t133 = -2808378;

    t133 = (x645==((x646&x647)*x648));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x654 = INT64_MAX;
	volatile uint16_t x655 = 4064U;
	uint16_t x656 = UINT16_MAX;
	int32_t t134 = -1774;

    t134 = (x653==((x654&x655)*x656));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint32_t x657 = 10590609U;
	int64_t x658 = INT64_MIN;
	uint64_t x659 = 215913418LLU;
	uint8_t x660 = 124U;
	int32_t t135 = 891;

    t135 = (x657==((x658&x659)*x660));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x661 = UINT8_MAX;
	int8_t x662 = 0;
	static int32_t x664 = INT32_MIN;
	int32_t t136 = -671;

    t136 = (x661==((x662&x663)*x664));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint64_t x665 = 1LLU;
	uint32_t x666 = UINT32_MAX;
	volatile int32_t x667 = INT32_MIN;
	volatile int32_t t137 = 10927;

    t137 = (x665==((x666&x667)*x668));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x669 = 0U;
	int64_t x671 = -2928715LL;
	int32_t t138 = 36;

    t138 = (x669==((x670&x671)*x672));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x673 = -163;
	uint8_t x676 = 9U;
	volatile int32_t t139 = 74032269;

    t139 = (x673==((x674&x675)*x676));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int64_t x685 = -1LL;
	static int16_t x686 = 7885;
	volatile int32_t x687 = -1;
	volatile int32_t t140 = 1081863;

    t140 = (x685==((x686&x687)*x688));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int64_t x693 = INT64_MAX;
	static volatile uint64_t x694 = 905378114788654LLU;
	int16_t x696 = INT16_MIN;
	volatile int32_t t141 = 29505369;

    t141 = (x693==((x694&x695)*x696));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x698 = -1;
	volatile uint64_t x699 = 6196LLU;
	uint32_t x700 = 14339U;

    t142 = (x697==((x698&x699)*x700));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x701 = 180230724;
	int64_t x702 = INT64_MIN;
	static uint8_t x704 = UINT8_MAX;
	volatile int32_t t143 = 3;

    t143 = (x701==((x702&x703)*x704));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint8_t x705 = 94U;
	int16_t x706 = -1;
	uint8_t x707 = 0U;
	int16_t x708 = INT16_MIN;

    t144 = (x705==((x706&x707)*x708));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x709 = -1;
	uint8_t x712 = 55U;
	int32_t t145 = 22;

    t145 = (x709==((x710&x711)*x712));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x715 = 0LLU;
	uint32_t x716 = UINT32_MAX;
	int32_t t146 = 78016;

    t146 = (x713==((x714&x715)*x716));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x717 = UINT64_MAX;
	int64_t x719 = 1857075465821770LL;
	volatile int32_t t147 = -15243;

    t147 = (x717==((x718&x719)*x720));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x722 = INT32_MIN;
	volatile int32_t x723 = -1;
	int8_t x724 = 0;
	static int32_t t148 = -1007345;

    t148 = (x721==((x722&x723)*x724));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x725 = INT8_MIN;
	uint64_t x726 = 761442668044LLU;

    t149 = (x725==((x726&x727)*x728));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x731 = INT16_MIN;
	int64_t x732 = -1492LL;
	static volatile int32_t t150 = -1310864;

    t150 = (x729==((x730&x731)*x732));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint32_t x737 = UINT32_MAX;
	static volatile int32_t x739 = INT32_MIN;
	int64_t x740 = 3820813LL;
	int32_t t151 = -305948;

    t151 = (x737==((x738&x739)*x740));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x741 = 0;
	int32_t x742 = -24021;
	static int8_t x743 = INT8_MIN;
	static uint32_t x744 = 12U;
	volatile int32_t t152 = -3642367;

    t152 = (x741==((x742&x743)*x744));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x745 = -1LL;
	volatile uint32_t x747 = UINT32_MAX;
	static int64_t x748 = -1LL;
	volatile int32_t t153 = 6254;

    t153 = (x745==((x746&x747)*x748));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint8_t x749 = UINT8_MAX;
	uint32_t x750 = 1070206178U;
	static volatile int8_t x751 = -1;
	uint8_t x752 = 117U;
	volatile int32_t t154 = -12;

    t154 = (x749==((x750&x751)*x752));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x753 = -1;
	int32_t x754 = 1700;
	int8_t x755 = INT8_MIN;
	uint16_t x756 = 1U;
	int32_t t155 = -920051;

    t155 = (x753==((x754&x755)*x756));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x757 = INT8_MAX;
	static volatile uint32_t x758 = 1854926437U;
	int32_t t156 = 37;

    t156 = (x757==((x758&x759)*x760));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x761 = 664831U;
	int32_t x763 = -3;
	int32_t t157 = -49;

    t157 = (x761==((x762&x763)*x764));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int64_t x766 = -918366615399LL;
	volatile uint32_t x767 = 1098812623U;
	int32_t x768 = INT32_MIN;

    t158 = (x765==((x766&x767)*x768));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int8_t x773 = INT8_MAX;
	int16_t x774 = INT16_MIN;
	int16_t x775 = 373;
	volatile int64_t x776 = -1LL;
	volatile int32_t t159 = -93941;

    t159 = (x773==((x774&x775)*x776));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x778 = 75102U;
	int32_t x779 = INT32_MAX;
	static int8_t x780 = -2;

    t160 = (x777==((x778&x779)*x780));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x782 = INT32_MIN;
	static uint8_t x783 = 40U;
	uint64_t x784 = 800LLU;
	int32_t t161 = -98032;

    t161 = (x781==((x782&x783)*x784));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int64_t x785 = INT64_MIN;
	volatile uint64_t x786 = 2204LLU;
	static int16_t x787 = INT16_MIN;
	int32_t t162 = 0;

    t162 = (x785==((x786&x787)*x788));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int32_t x789 = -1;
	volatile uint16_t x790 = 0U;
	int16_t x791 = -9;
	volatile int32_t x792 = INT32_MIN;
	volatile int32_t t163 = 97580155;

    t163 = (x789==((x790&x791)*x792));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x793 = 1U;
	int8_t x795 = INT8_MAX;
	int64_t x796 = INT64_MIN;
	int32_t t164 = 619;

    t164 = (x793==((x794&x795)*x796));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x799 = 2439;
	uint8_t x800 = 45U;

    t165 = (x797==((x798&x799)*x800));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x801 = INT8_MIN;
	static volatile int8_t x802 = INT8_MIN;
	int64_t x803 = -1LL;
	uint8_t x804 = 36U;
	static int32_t t166 = -29;

    t166 = (x801==((x802&x803)*x804));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x805 = INT32_MIN;
	uint64_t x806 = UINT64_MAX;
	int8_t x807 = -1;
	volatile int64_t x808 = INT64_MIN;
	int32_t t167 = 1;

    t167 = (x805==((x806&x807)*x808));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x809 = INT16_MAX;
	int64_t x810 = -877009980751LL;
	volatile int16_t x811 = INT16_MAX;
	static volatile int8_t x812 = 0;
	int32_t t168 = 153694;

    t168 = (x809==((x810&x811)*x812));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x813 = INT32_MIN;
	int8_t x814 = INT8_MAX;
	int16_t x816 = INT16_MIN;
	volatile int32_t t169 = -206449459;

    t169 = (x813==((x814&x815)*x816));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x818 = -12;
	uint8_t x819 = 7U;
	int8_t x820 = 2;
	static int32_t t170 = -350919;

    t170 = (x817==((x818&x819)*x820));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x821 = INT16_MAX;
	uint32_t x822 = UINT32_MAX;
	uint8_t x823 = UINT8_MAX;
	int32_t t171 = -60;

    t171 = (x821==((x822&x823)*x824));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t x827 = INT32_MIN;
	int32_t t172 = 131352230;

    t172 = (x825==((x826&x827)*x828));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x829 = -1;
	volatile int64_t x830 = INT64_MIN;
	uint8_t x831 = 1U;
	int32_t x832 = INT32_MIN;

    t173 = (x829==((x830&x831)*x832));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x833 = INT64_MIN;
	int8_t x834 = INT8_MIN;
	static volatile int16_t x835 = INT16_MAX;
	uint64_t x836 = UINT64_MAX;
	volatile int32_t t174 = 2651;

    t174 = (x833==((x834&x835)*x836));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int16_t x837 = INT16_MIN;
	volatile uint32_t x838 = UINT32_MAX;
	int8_t x840 = INT8_MIN;
	int32_t t175 = 44197736;

    t175 = (x837==((x838&x839)*x840));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int16_t x841 = -1;
	int64_t x842 = INT64_MIN;
	int32_t t176 = -2;

    t176 = (x841==((x842&x843)*x844));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint8_t x845 = 19U;
	static uint32_t x846 = 160511U;
	int16_t x847 = INT16_MAX;
	volatile int32_t t177 = 53784;

    t177 = (x845==((x846&x847)*x848));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x849 = UINT16_MAX;
	volatile int64_t x850 = -1LL;
	int64_t x852 = -61894574148916LL;
	int32_t t178 = 394235742;

    t178 = (x849==((x850&x851)*x852));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x853 = INT16_MIN;
	static int16_t x854 = 52;
	int32_t x855 = -226210;
	int32_t t179 = 298;

    t179 = (x853==((x854&x855)*x856));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int64_t x857 = INT64_MIN;
	int8_t x859 = -9;
	static volatile int32_t t180 = 4576607;

    t180 = (x857==((x858&x859)*x860));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x861 = -1LL;
	uint64_t x863 = UINT64_MAX;
	volatile int16_t x864 = INT16_MIN;
	volatile int32_t t181 = -58;

    t181 = (x861==((x862&x863)*x864));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x865 = 1420078U;
	int64_t x866 = INT64_MIN;
	volatile int32_t x868 = -1;
	static int32_t t182 = 437951;

    t182 = (x865==((x866&x867)*x868));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x869 = 0U;
	uint32_t x870 = 317092U;
	int32_t x871 = INT32_MAX;
	int16_t x872 = INT16_MIN;
	static int32_t t183 = 1037485;

    t183 = (x869==((x870&x871)*x872));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint32_t x873 = 23U;
	int16_t x874 = INT16_MIN;
	uint16_t x875 = 2943U;
	volatile int32_t x876 = -2;
	static volatile int32_t t184 = -21420216;

    t184 = (x873==((x874&x875)*x876));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x878 = INT16_MIN;
	static int16_t x879 = -1;
	static int16_t x880 = -1;

    t185 = (x877==((x878&x879)*x880));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x881 = INT16_MIN;
	int32_t x882 = INT32_MIN;
	static int8_t x884 = -6;
	static volatile int32_t t186 = 2750547;

    t186 = (x881==((x882&x883)*x884));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x886 = -1;

    t187 = (x885==((x886&x887)*x888));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x889 = INT16_MIN;
	int64_t x890 = INT64_MIN;
	int32_t x891 = 775;
	int64_t x892 = INT64_MIN;
	volatile int32_t t188 = -2;

    t188 = (x889==((x890&x891)*x892));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint32_t x894 = 65143747U;
	int32_t x895 = INT32_MIN;
	uint16_t x896 = 220U;

    t189 = (x893==((x894&x895)*x896));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x901 = INT16_MIN;
	uint64_t x902 = 4622769630503588464LLU;
	int16_t x903 = INT16_MIN;
	static int32_t t190 = -214;

    t190 = (x901==((x902&x903)*x904));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile uint8_t x905 = UINT8_MAX;
	static volatile int16_t x906 = INT16_MIN;
	uint16_t x908 = 1U;
	volatile int32_t t191 = 39836063;

    t191 = (x905==((x906&x907)*x908));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x909 = 14838517U;
	uint8_t x910 = 10U;
	volatile int64_t x911 = INT64_MIN;
	int32_t x912 = -1;
	volatile int32_t t192 = -76536280;

    t192 = (x909==((x910&x911)*x912));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x913 = 157U;
	volatile uint8_t x914 = 15U;
	volatile uint64_t x915 = 13749865886LLU;
	volatile int32_t x916 = INT32_MAX;

    t193 = (x913==((x914&x915)*x916));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x917 = 0U;
	static uint8_t x919 = 15U;
	int32_t x920 = 2161;

    t194 = (x917==((x918&x919)*x920));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x921 = 2U;
	volatile uint32_t x922 = 57777U;
	volatile int64_t x923 = -1LL;
	int32_t t195 = -21945;

    t195 = (x921==((x922&x923)*x924));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x927 = 39U;
	int8_t x928 = 58;
	static int32_t t196 = -414341129;

    t196 = (x925==((x926&x927)*x928));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint8_t x929 = 77U;
	uint16_t x930 = 31U;
	uint8_t x932 = UINT8_MAX;
	volatile int32_t t197 = -15961088;

    t197 = (x929==((x930&x931)*x932));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint64_t x936 = UINT64_MAX;

    t198 = (x933==((x934&x935)*x936));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x937 = INT16_MAX;
	static uint8_t x938 = 45U;
	int32_t x940 = INT32_MIN;
	int32_t t199 = -11216;

    t199 = (x937==((x938&x939)*x940));

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

