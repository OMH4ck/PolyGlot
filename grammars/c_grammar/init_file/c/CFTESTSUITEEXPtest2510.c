
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

int32_t x3 = -1;
uint8_t x7 = UINT8_MAX;
volatile uint32_t t1 = 1U;
static int64_t x12 = 6LL;
int16_t x16 = -1;
int64_t x29 = INT64_MIN;
int32_t x31 = 1406;
int16_t x39 = 340;
int64_t x46 = -1LL;
volatile int64_t t11 = -12389LL;
int32_t x66 = 2642586;
int16_t x84 = INT16_MIN;
int32_t t17 = -114;
int64_t x89 = -1LL;
static volatile int32_t x91 = -1;
uint64_t x93 = 1LLU;
static uint32_t x96 = 101U;
volatile uint32_t x101 = 16109U;
static int32_t x103 = -1;
volatile int64_t t21 = 1LL;
uint16_t x117 = 4U;
volatile uint16_t x133 = UINT16_MAX;
static uint32_t x139 = 4128990U;
volatile uint16_t x141 = UINT16_MAX;
uint16_t x143 = 0U;
uint64_t x144 = UINT64_MAX;
int16_t x145 = INT16_MIN;
volatile int64_t x149 = 1LL;
volatile uint8_t x150 = 31U;
uint32_t x158 = 1997U;
int32_t x161 = 924;
volatile int32_t t36 = 2314;
int64_t x188 = INT64_MAX;
int64_t x190 = INT64_MIN;
volatile uint16_t x199 = UINT16_MAX;
uint8_t x206 = 10U;
int8_t x207 = INT8_MAX;
static uint64_t t45 = 1032683709772501386LLU;
uint64_t t47 = 15683LLU;
static int8_t x229 = -1;
static volatile uint16_t x234 = 6366U;
int64_t t49 = 5LL;
uint64_t x240 = UINT64_MAX;
static uint64_t t50 = 17058299LLU;
int16_t x243 = INT16_MIN;
volatile uint32_t x244 = UINT32_MAX;
static volatile uint32_t t51 = 44951U;
int8_t x249 = 42;
volatile int32_t x252 = 3536;
volatile uint64_t x261 = 276475830LLU;
volatile uint64_t x265 = UINT64_MAX;
uint32_t x266 = UINT32_MAX;
uint32_t x267 = UINT32_MAX;
int64_t x271 = INT64_MAX;
static uint32_t t58 = 15172972U;
int64_t t59 = 4LL;
uint64_t x291 = 328804748LLU;
static volatile int32_t x296 = INT32_MAX;
int64_t t62 = 22681LL;
int32_t x298 = -4;
uint32_t x299 = 83U;
volatile int64_t t63 = 61235075798440134LL;
uint64_t x307 = UINT64_MAX;
volatile int64_t t66 = -88377677LL;
int32_t x317 = INT32_MAX;
static volatile uint8_t x326 = 1U;
volatile int8_t x329 = INT8_MIN;
uint32_t x334 = 86U;
static volatile uint32_t t72 = 48U;
int32_t x338 = INT32_MIN;
int32_t x340 = INT32_MIN;
uint8_t x341 = 1U;
volatile uint16_t x343 = 30U;
static int64_t t78 = 3389928424021LL;
static uint32_t x364 = 3U;
int32_t x369 = -82149750;
uint8_t x373 = UINT8_MAX;
int32_t t83 = 1373;
int8_t x392 = -1;
uint8_t x393 = 11U;
uint32_t x396 = UINT32_MAX;
static uint32_t t87 = 9U;
int16_t x401 = INT16_MAX;
uint16_t x414 = 87U;
int32_t x418 = -236;
int64_t x420 = -1LL;
volatile int8_t x427 = INT8_MIN;
int64_t x429 = INT64_MIN;
int16_t x430 = INT16_MIN;
volatile int32_t x434 = INT32_MAX;
static uint64_t x437 = 27LLU;
volatile int32_t x438 = INT32_MAX;
volatile int16_t x446 = INT16_MAX;
int32_t x453 = INT32_MAX;
volatile int64_t x455 = INT64_MAX;
int32_t x460 = INT32_MIN;
volatile int32_t x468 = INT32_MAX;
uint16_t x478 = 202U;
static int32_t x480 = INT32_MIN;
volatile int64_t x481 = INT64_MIN;
static int32_t x495 = 20;
int32_t x497 = -12288002;
static volatile int16_t x500 = INT16_MIN;
static int64_t t112 = 40LL;
static int32_t x503 = INT32_MIN;
uint64_t x515 = 44LLU;
volatile int32_t t117 = 25306;
uint8_t x523 = 2U;
volatile int64_t t120 = -210650524609345LL;
uint64_t x536 = UINT64_MAX;
static volatile int32_t x537 = -93;
int8_t x542 = INT8_MIN;
int32_t x545 = INT32_MIN;
uint64_t x552 = 164181LLU;
uint16_t x556 = 211U;
static volatile int16_t x561 = INT16_MIN;
int16_t x568 = 7319;
static volatile uint32_t t130 = 6227785U;
volatile int8_t x573 = -33;
uint64_t x577 = 68LLU;
int64_t x586 = 267558862346LL;
int16_t x596 = -9;
int32_t t136 = -351980631;
volatile uint8_t x602 = UINT8_MAX;
uint64_t t137 = 622LLU;
int8_t x605 = INT8_MIN;
int16_t x607 = INT16_MIN;
int32_t x609 = 124956739;
static volatile int32_t x611 = INT32_MIN;
int32_t x613 = INT32_MIN;
uint8_t x614 = 24U;
static uint32_t x632 = 25U;
int8_t x639 = INT8_MIN;
int8_t x649 = INT8_MAX;
static int64_t x653 = INT64_MIN;
static volatile int32_t x656 = INT32_MIN;
static int64_t x658 = -2311LL;
static volatile int64_t x659 = 101LL;
int64_t x664 = 7LL;
volatile int16_t x677 = -10;
uint32_t x678 = UINT32_MAX;
static int8_t x680 = -27;
int16_t x681 = 409;
static volatile uint64_t x685 = 8622543432865LLU;
volatile int16_t x687 = INT16_MAX;
uint64_t t158 = 71LLU;
static volatile int8_t x693 = -38;
uint8_t x703 = 26U;
static uint64_t t161 = 209318946031018392LLU;
uint16_t x713 = 1U;
uint32_t t165 = 3542393U;
uint32_t t166 = 157533659U;
uint64_t t167 = 4LLU;
uint8_t x733 = 2U;
volatile uint8_t x748 = 87U;
static volatile int64_t t170 = 22282889529LL;
uint64_t x751 = UINT64_MAX;
uint32_t x752 = UINT32_MAX;
uint8_t x757 = 47U;
static int32_t x772 = -1;
static volatile int64_t t175 = 2445462150245LL;
volatile uint64_t t176 = 68667453821124637LLU;
uint64_t x777 = 2602LLU;
uint16_t x780 = UINT16_MAX;
static volatile uint64_t t177 = 6960LLU;
static int16_t x782 = -1;
int32_t x786 = -1;
uint32_t x788 = 360382U;
volatile uint32_t t179 = 402U;
uint16_t x789 = 2873U;
int32_t x790 = INT32_MIN;
int32_t x792 = INT32_MIN;
int16_t x797 = INT16_MIN;
int32_t x799 = -29875981;
static volatile uint64_t x807 = 261518LLU;
volatile int8_t x809 = -1;
static int64_t t185 = 1503953364500920690LL;
int8_t x817 = INT8_MIN;
volatile uint64_t t188 = 54799930792092186LLU;
volatile uint64_t x827 = 5366160210890276LLU;
uint8_t x828 = 21U;
static volatile int8_t x829 = INT8_MIN;
static volatile uint64_t x830 = 97204004507LLU;
int8_t x833 = INT8_MIN;
int8_t x834 = -5;
volatile int32_t x836 = INT32_MIN;
int16_t x850 = -1;
int64_t x852 = -1LL;
static int64_t x858 = INT64_MIN;
int16_t x869 = -1;
static volatile int64_t x872 = INT64_MIN;


void f0(void) {
    	int8_t x1 = INT8_MAX;
	int16_t x2 = INT16_MIN;
	int8_t x4 = INT8_MIN;
	static volatile int32_t t0 = 5;

    t0 = (x1/((x2|x3)&x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = UINT8_MAX;
	static volatile uint32_t x6 = UINT32_MAX;
	static int32_t x8 = INT32_MIN;

    t1 = (x5/((x6|x7)&x8));

    if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x9 = -664204;
	static int32_t x10 = -69;
	int8_t x11 = INT8_MAX;
	static volatile int64_t t2 = -1529824915030359LL;

    t2 = (x9/((x10|x11)&x12));

    if (t2 != -110700LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint8_t x13 = 1U;
	uint64_t x14 = 278153000692847421LLU;
	int8_t x15 = INT8_MAX;
	volatile uint64_t t3 = 685100298161957LLU;

    t3 = (x13/((x14|x15)&x16));

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = -1;
	static uint8_t x18 = 9U;
	int16_t x19 = INT16_MIN;
	volatile int16_t x20 = 12830;
	static volatile int32_t t4 = -59;

    t4 = (x17/((x18|x19)&x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x25 = INT8_MAX;
	volatile uint16_t x26 = 523U;
	int16_t x27 = INT16_MAX;
	uint64_t x28 = 2365413649836286LLU;
	uint64_t t5 = 90591710167LLU;

    t5 = (x25/((x26|x27)&x28));

    if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x30 = 102U;
	int8_t x32 = -1;
	int64_t t6 = -2LL;

    t6 = (x29/((x30|x31)&x32));

    if (t6 != -6560008561063140LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x33 = INT16_MIN;
	static int32_t x34 = -243805487;
	uint16_t x35 = UINT16_MAX;
	volatile int64_t x36 = -75939683392192LL;
	static int64_t t7 = 22LL;

    t7 = (x33/((x34|x35)&x36));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x37 = UINT64_MAX;
	int16_t x38 = INT16_MAX;
	volatile uint16_t x40 = 9U;
	uint64_t t8 = 5846458734LLU;

    t8 = (x37/((x38|x39)&x40));

    if (t8 != 2049638230412172401LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x41 = 1006U;
	int32_t x42 = INT32_MIN;
	int16_t x43 = -1;
	int64_t x44 = -1LL;
	volatile int64_t t9 = 832LL;

    t9 = (x41/((x42|x43)&x44));

    if (t9 != -1006LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x45 = 6267665936153577LL;
	uint8_t x47 = 37U;
	static uint8_t x48 = UINT8_MAX;
	volatile int64_t t10 = -1679LL;

    t10 = (x45/((x46|x47)&x48));

    if (t10 != 24579082102563LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint16_t x53 = 65U;
	uint16_t x54 = 2U;
	static volatile int8_t x55 = 25;
	static int64_t x56 = -1LL;

    t11 = (x53/((x54|x55)&x56));

    if (t11 != 2LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint16_t x57 = UINT16_MAX;
	volatile int32_t x58 = 455702060;
	int32_t x59 = 3;
	int32_t x60 = -1;
	volatile int32_t t12 = 391782871;

    t12 = (x57/((x58|x59)&x60));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x61 = INT16_MIN;
	int16_t x62 = INT16_MAX;
	static uint8_t x63 = 6U;
	uint16_t x64 = 6186U;
	int32_t t13 = -2816310;

    t13 = (x61/((x62|x63)&x64));

    if (t13 != -5) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x65 = 430U;
	int16_t x67 = -5;
	uint32_t x68 = UINT32_MAX;
	uint32_t t14 = 4089658U;

    t14 = (x65/((x66|x67)&x68));

    if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x69 = -20633239LL;
	static int64_t x70 = INT64_MIN;
	static uint32_t x71 = 719918310U;
	volatile int32_t x72 = INT32_MAX;
	int64_t t15 = 1245LL;

    t15 = (x69/((x70|x71)&x72));

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x73 = UINT8_MAX;
	int32_t x74 = -2;
	int32_t x75 = INT32_MIN;
	volatile uint64_t x76 = 7LLU;
	uint64_t t16 = 7490463351LLU;

    t16 = (x73/((x74|x75)&x76));

    if (t16 != 42LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x81 = 379;
	static int8_t x82 = -1;
	static int16_t x83 = INT16_MIN;

    t17 = (x81/((x82|x83)&x84));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x90 = INT8_MIN;
	int64_t x92 = 136322603262955083LL;
	volatile int64_t t18 = 23949485383604LL;

    t18 = (x89/((x90|x91)&x92));

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x94 = INT32_MIN;
	int32_t x95 = -1;
	uint64_t t19 = 157763557LLU;

    t19 = (x93/((x94|x95)&x96));

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x97 = 142LLU;
	uint8_t x98 = 3U;
	uint16_t x99 = 0U;
	uint32_t x100 = 222089U;
	uint64_t t20 = 134724525763698LLU;

    t20 = (x97/((x98|x99)&x100));

    if (t20 != 142LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int32_t x102 = INT32_MAX;
	int64_t x104 = -2680828197LL;

    t21 = (x101/((x102|x103)&x104));

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x105 = INT64_MIN;
	int32_t x106 = INT32_MIN;
	uint8_t x107 = 1U;
	static uint64_t x108 = 3727224423747784LLU;
	volatile uint64_t t22 = 338161353030849486LLU;

    t22 = (x105/((x106|x107)&x108));

    if (t22 != 2474LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x109 = INT32_MIN;
	int16_t x110 = -12732;
	uint16_t x111 = UINT16_MAX;
	uint8_t x112 = UINT8_MAX;
	int32_t t23 = 1;

    t23 = (x109/((x110|x111)&x112));

    if (t23 != -8421504) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x113 = UINT32_MAX;
	volatile int16_t x114 = 53;
	static int64_t x115 = INT64_MAX;
	uint8_t x116 = 1U;
	volatile int64_t t24 = 260354924LL;

    t24 = (x113/((x114|x115)&x116));

    if (t24 != 4294967295LL) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int64_t x118 = INT64_MIN;
	int8_t x119 = -1;
	int16_t x120 = 7;
	volatile int64_t t25 = -395841346416LL;

    t25 = (x117/((x118|x119)&x120));

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x125 = INT32_MIN;
	int8_t x126 = INT8_MIN;
	uint16_t x127 = UINT16_MAX;
	uint32_t x128 = UINT32_MAX;
	static volatile uint32_t t26 = 10538U;

    t26 = (x125/((x126|x127)&x128));

    if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x129 = INT64_MIN;
	uint64_t x130 = 53730845855583057LLU;
	int64_t x131 = 676066260LL;
	static uint64_t x132 = 489196456495LLU;
	volatile uint64_t t27 = 82123619613423LLU;

    t27 = (x129/((x130|x131)&x132));

    if (t27 != 22049872LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x134 = INT32_MIN;
	uint32_t x135 = 497195438U;
	static uint8_t x136 = 56U;
	volatile uint32_t t28 = 235836U;

    t28 = (x133/((x134|x135)&x136));

    if (t28 != 1638U) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x137 = 875LLU;
	int32_t x138 = 3041;
	uint32_t x140 = 120U;
	uint64_t t29 = 3187572714517LLU;

    t29 = (x137/((x138|x139)&x140));

    if (t29 != 7LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x142 = INT32_MIN;
	volatile uint64_t t30 = 45320925533962LLU;

    t30 = (x141/((x142|x143)&x144));

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x146 = 253757LLU;
	int32_t x147 = INT32_MAX;
	int32_t x148 = INT32_MAX;
	static uint64_t t31 = 60622322LLU;

    t31 = (x145/((x146|x147)&x148));

    if (t31 != 8589934595LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x151 = INT16_MIN;
	int8_t x152 = INT8_MIN;
	int64_t t32 = -225843181LL;

    t32 = (x149/((x150|x151)&x152));

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint8_t x153 = UINT8_MAX;
	int64_t x154 = INT64_MIN;
	static uint16_t x155 = UINT16_MAX;
	int64_t x156 = -1LL;
	volatile int64_t t33 = 5335LL;

    t33 = (x153/((x154|x155)&x156));

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x157 = UINT64_MAX;
	int16_t x159 = INT16_MIN;
	uint8_t x160 = UINT8_MAX;
	static volatile uint64_t t34 = 774956286LLU;

    t34 = (x157/((x158|x159)&x160));

    if (t34 != 89984117432729520LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x162 = 7805U;
	int16_t x163 = INT16_MIN;
	int8_t x164 = INT8_MIN;
	volatile int32_t t35 = -98;

    t35 = (x161/((x162|x163)&x164));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x165 = INT8_MAX;
	int16_t x166 = INT16_MIN;
	uint16_t x167 = UINT16_MAX;
	int16_t x168 = INT16_MAX;

    t36 = (x165/((x166|x167)&x168));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x169 = INT64_MAX;
	volatile uint16_t x170 = UINT16_MAX;
	static int32_t x171 = -1;
	int32_t x172 = INT32_MIN;
	volatile int64_t t37 = 2708790224LL;

    t37 = (x169/((x170|x171)&x172));

    if (t37 != -4294967295LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint64_t x173 = 1LLU;
	static int16_t x174 = -1;
	int8_t x175 = INT8_MIN;
	static int16_t x176 = INT16_MIN;
	volatile uint64_t t38 = 405878830LLU;

    t38 = (x173/((x174|x175)&x176));

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x181 = -1LL;
	int64_t x182 = INT64_MAX;
	static int32_t x183 = -28642119;
	int64_t x184 = INT64_MAX;
	static int64_t t39 = 257728LL;

    t39 = (x181/((x182|x183)&x184));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x185 = UINT16_MAX;
	uint16_t x186 = UINT16_MAX;
	uint32_t x187 = 5909U;
	volatile int64_t t40 = 0LL;

    t40 = (x185/((x186|x187)&x188));

    if (t40 != 1LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x189 = 9U;
	int8_t x191 = -1;
	uint32_t x192 = UINT32_MAX;
	volatile int64_t t41 = 23404873852456LL;

    t41 = (x189/((x190|x191)&x192));

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x197 = 41695627U;
	int64_t x198 = INT64_MIN;
	volatile int64_t x200 = INT64_MIN;
	volatile int64_t t42 = -4912LL;

    t42 = (x197/((x198|x199)&x200));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x201 = 231U;
	int8_t x202 = INT8_MIN;
	static volatile int16_t x203 = INT16_MIN;
	uint16_t x204 = UINT16_MAX;
	volatile int32_t t43 = -1470768;

    t43 = (x201/((x202|x203)&x204));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int32_t x205 = INT32_MIN;
	int16_t x208 = -1;
	static int32_t t44 = -88;

    t44 = (x205/((x206|x207)&x208));

    if (t44 != -16909320) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x213 = 106U;
	uint64_t x214 = 7999986055454553483LLU;
	static uint8_t x215 = UINT8_MAX;
	int16_t x216 = INT16_MAX;

    t45 = (x213/((x214|x215)&x216));

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x217 = -1LL;
	uint8_t x218 = UINT8_MAX;
	uint16_t x219 = 13U;
	uint64_t x220 = 2577790048LLU;
	volatile uint64_t t46 = 808652LLU;

    t46 = (x217/((x218|x219)&x220));

    if (t46 != 192153584101141162LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x225 = 215358048574013LLU;
	int64_t x226 = 0LL;
	uint64_t x227 = 374LLU;
	uint64_t x228 = UINT64_MAX;

    t47 = (x225/((x226|x227)&x228));

    if (t47 != 575823659288LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x230 = 178609571U;
	volatile int8_t x231 = INT8_MAX;
	int8_t x232 = INT8_MAX;
	static volatile uint32_t t48 = 93458202U;

    t48 = (x229/((x230|x231)&x232));

    if (t48 != 33818640U) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x233 = -1;
	int32_t x235 = INT32_MIN;
	int64_t x236 = -1LL;

    t49 = (x233/((x234|x235)&x236));

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x237 = 60U;
	int8_t x238 = INT8_MAX;
	uint16_t x239 = 0U;

    t50 = (x237/((x238|x239)&x240));

    if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x241 = INT32_MIN;
	int16_t x242 = INT16_MIN;

    t51 = (x241/((x242|x243)&x244));

    if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int8_t x245 = -1;
	volatile uint8_t x246 = UINT8_MAX;
	int16_t x247 = -3;
	static uint16_t x248 = UINT16_MAX;
	int32_t t52 = -5;

    t52 = (x245/((x246|x247)&x248));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x250 = -1LL;
	static int8_t x251 = INT8_MIN;
	int64_t t53 = -463600635LL;

    t53 = (x249/((x250|x251)&x252));

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int8_t x257 = INT8_MIN;
	int64_t x258 = -3LL;
	int32_t x259 = -1;
	uint8_t x260 = 10U;
	int64_t t54 = -1LL;

    t54 = (x257/((x258|x259)&x260));

    if (t54 != -12LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x262 = -16;
	int32_t x263 = INT32_MIN;
	int16_t x264 = -1;
	volatile uint64_t t55 = 137552947789LLU;

    t55 = (x261/((x262|x263)&x264));

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x268 = 10516897LLU;
	volatile uint64_t t56 = 1188597956126LLU;

    t56 = (x265/((x266|x267)&x268));

    if (t56 != 1754010148973LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x269 = INT8_MIN;
	volatile int32_t x270 = INT32_MIN;
	static volatile int8_t x272 = -1;
	volatile int64_t t57 = 102953738350LL;

    t57 = (x269/((x270|x271)&x272));

    if (t57 != 128LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x273 = INT16_MAX;
	int8_t x274 = -60;
	int32_t x275 = INT32_MAX;
	uint32_t x276 = 491606952U;

    t58 = (x273/((x274|x275)&x276));

    if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x281 = INT32_MIN;
	uint16_t x282 = 2936U;
	int64_t x283 = INT64_MIN;
	int8_t x284 = 24;

    t59 = (x281/((x282|x283)&x284));

    if (t59 != -89478485LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile uint16_t x285 = UINT16_MAX;
	static uint32_t x286 = 143596U;
	volatile int16_t x287 = 0;
	int8_t x288 = -1;
	volatile uint32_t t60 = 84552440U;

    t60 = (x285/((x286|x287)&x288));

    if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint16_t x289 = 401U;
	static int64_t x290 = -1LL;
	uint8_t x292 = 30U;
	uint64_t t61 = 1000LLU;

    t61 = (x289/((x290|x291)&x292));

    if (t61 != 13LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x293 = -7483LL;
	static int32_t x294 = 3562;
	int32_t x295 = INT32_MIN;

    t62 = (x293/((x294|x295)&x296));

    if (t62 != -2LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint32_t x297 = 293039U;
	int64_t x300 = INT64_MAX;

    t63 = (x297/((x298|x299)&x300));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint8_t x301 = UINT8_MAX;
	uint16_t x302 = 1U;
	static int16_t x303 = INT16_MAX;
	int64_t x304 = INT64_MAX;
	int64_t t64 = 30557144198921457LL;

    t64 = (x301/((x302|x303)&x304));

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x305 = INT32_MIN;
	int16_t x306 = INT16_MIN;
	int64_t x308 = INT64_MAX;
	uint64_t t65 = 8714575524503656634LLU;

    t65 = (x305/((x306|x307)&x308));

    if (t65 != 1LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x309 = INT64_MAX;
	int64_t x310 = -363878LL;
	volatile uint32_t x311 = 374U;
	int8_t x312 = INT8_MIN;

    t66 = (x309/((x310|x311)&x312));

    if (t66 != -25363461470583LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint32_t x313 = UINT32_MAX;
	static int8_t x314 = INT8_MIN;
	uint8_t x315 = 0U;
	uint8_t x316 = UINT8_MAX;
	volatile uint32_t t67 = 8856307U;

    t67 = (x313/((x314|x315)&x316));

    if (t67 != 33554431U) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x318 = INT16_MIN;
	int8_t x319 = INT8_MIN;
	int64_t x320 = -52628773LL;
	int64_t t68 = 1LL;

    t68 = (x317/((x318|x319)&x320));

    if (t68 != -40LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x321 = -1;
	volatile uint32_t x322 = UINT32_MAX;
	static int64_t x323 = 15085775479LL;
	uint32_t x324 = 25921U;
	volatile int64_t t69 = 2LL;

    t69 = (x321/((x322|x323)&x324));

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x325 = 1U;
	uint8_t x327 = 26U;
	int16_t x328 = INT16_MAX;
	static volatile int32_t t70 = -17642;

    t70 = (x325/((x326|x327)&x328));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x330 = -1LL;
	uint64_t x331 = 393446LLU;
	int16_t x332 = -1;
	static volatile uint64_t t71 = 61LLU;

    t71 = (x329/((x330|x331)&x332));

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x333 = 26U;
	volatile int16_t x335 = -17;
	volatile int16_t x336 = INT16_MAX;

    t72 = (x333/((x334|x335)&x336));

    if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint64_t x337 = UINT64_MAX;
	static volatile int16_t x339 = INT16_MAX;
	volatile uint64_t t73 = 1658692782105690LLU;

    t73 = (x337/((x338|x339)&x340));

    if (t73 != 1LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x342 = INT8_MIN;
	int64_t x344 = -35583LL;
	int64_t t74 = -78LL;

    t74 = (x341/((x342|x343)&x344));

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x345 = -29LL;
	uint16_t x346 = 194U;
	int8_t x347 = INT8_MAX;
	static int16_t x348 = -1;
	int64_t t75 = 131322114LL;

    t75 = (x345/((x346|x347)&x348));

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x349 = UINT32_MAX;
	volatile uint32_t x350 = UINT32_MAX;
	volatile int8_t x351 = INT8_MAX;
	uint32_t x352 = UINT32_MAX;
	static volatile uint32_t t76 = 244963086U;

    t76 = (x349/((x350|x351)&x352));

    if (t76 != 1U) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile uint32_t x353 = 46U;
	int8_t x354 = -2;
	volatile int16_t x355 = 0;
	int64_t x356 = INT64_MAX;
	static int64_t t77 = 37344061413139395LL;

    t77 = (x353/((x354|x355)&x356));

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int32_t x357 = -1;
	static int64_t x358 = -1LL;
	static int16_t x359 = -12099;
	uint8_t x360 = 13U;

    t78 = (x357/((x358|x359)&x360));

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x361 = -96LL;
	int32_t x362 = INT32_MIN;
	volatile uint16_t x363 = 13U;
	int64_t t79 = -20LL;

    t79 = (x361/((x362|x363)&x364));

    if (t79 != -96LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x365 = 0;
	int16_t x366 = -1;
	static int8_t x367 = 7;
	static uint32_t x368 = 879U;
	volatile uint32_t t80 = 42311402U;

    t80 = (x365/((x366|x367)&x368));

    if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x370 = INT16_MIN;
	int16_t x371 = -1;
	uint64_t x372 = 3864274379LLU;
	volatile uint64_t t81 = 671916139711406844LLU;

    t81 = (x369/((x370|x371)&x372));

    if (t81 != 4773663116LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint16_t x374 = UINT16_MAX;
	volatile int8_t x375 = INT8_MAX;
	int64_t x376 = -1LL;
	volatile int64_t t82 = 3912LL;

    t82 = (x373/((x374|x375)&x376));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x377 = -3;
	volatile int16_t x378 = 221;
	int8_t x379 = INT8_MIN;
	int8_t x380 = -1;

    t83 = (x377/((x378|x379)&x380));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x381 = INT16_MIN;
	int32_t x382 = 57221471;
	int32_t x383 = -17;
	int16_t x384 = INT16_MIN;
	volatile int32_t t84 = -86668;

    t84 = (x381/((x382|x383)&x384));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint8_t x385 = 1U;
	static int32_t x386 = INT32_MIN;
	static volatile int16_t x387 = -247;
	int32_t x388 = -1;
	int32_t t85 = 1885;

    t85 = (x385/((x386|x387)&x388));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x389 = 283;
	int32_t x390 = INT32_MAX;
	int16_t x391 = -7;
	static int32_t t86 = 1027;

    t86 = (x389/((x390|x391)&x392));

    if (t86 != -283) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x394 = 1U;
	volatile uint8_t x395 = UINT8_MAX;

    t87 = (x393/((x394|x395)&x396));

    if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x397 = 18LL;
	uint64_t x398 = UINT64_MAX;
	int32_t x399 = INT32_MIN;
	volatile int16_t x400 = 2;
	volatile uint64_t t88 = 20236LLU;

    t88 = (x397/((x398|x399)&x400));

    if (t88 != 9LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x402 = 8LLU;
	int8_t x403 = -1;
	uint8_t x404 = 2U;
	volatile uint64_t t89 = 1LLU;

    t89 = (x401/((x402|x403)&x404));

    if (t89 != 16383LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x405 = -1LL;
	int8_t x406 = -2;
	int8_t x407 = -1;
	int32_t x408 = INT32_MAX;
	static int64_t t90 = 7LL;

    t90 = (x405/((x406|x407)&x408));

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x409 = INT16_MAX;
	int64_t x410 = -282116LL;
	int16_t x411 = 1874;
	int32_t x412 = -733;
	volatile int64_t t91 = 1679883357968680LL;

    t91 = (x409/((x410|x411)&x412));

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x413 = 13U;
	uint32_t x415 = UINT32_MAX;
	volatile uint32_t x416 = 1596703781U;
	static uint32_t t92 = 2826U;

    t92 = (x413/((x414|x415)&x416));

    if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint8_t x417 = UINT8_MAX;
	volatile uint64_t x419 = 155378LLU;
	uint64_t t93 = 250753LLU;

    t93 = (x417/((x418|x419)&x420));

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x421 = -1;
	int16_t x422 = INT16_MIN;
	volatile int8_t x423 = 6;
	int16_t x424 = -1;
	int32_t t94 = 639010;

    t94 = (x421/((x422|x423)&x424));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x425 = UINT32_MAX;
	uint32_t x426 = 5U;
	volatile int32_t x428 = INT32_MAX;
	uint32_t t95 = 0U;

    t95 = (x425/((x426|x427)&x428));

    if (t95 != 2U) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x431 = 113820U;
	int32_t x432 = 1028634160;
	int64_t t96 = 39628067064621651LL;

    t96 = (x429/((x430|x431)&x432));

    if (t96 != -8966625135LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x433 = -1;
	int64_t x435 = -1LL;
	int32_t x436 = -1677;
	volatile int64_t t97 = 1LL;

    t97 = (x433/((x434|x435)&x436));

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x439 = INT16_MIN;
	static int16_t x440 = 1067;
	uint64_t t98 = 138275687800288LLU;

    t98 = (x437/((x438|x439)&x440));

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x441 = 537U;
	uint8_t x442 = 1U;
	static int8_t x443 = INT8_MIN;
	uint16_t x444 = 6642U;
	int32_t t99 = -2455473;

    t99 = (x441/((x442|x443)&x444));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x445 = 1675336501U;
	uint32_t x447 = 26318698U;
	volatile int16_t x448 = INT16_MAX;
	volatile uint32_t t100 = 0U;

    t100 = (x445/((x446|x447)&x448));

    if (t100 != 51128U) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x449 = INT8_MIN;
	static int32_t x450 = INT32_MAX;
	int8_t x451 = INT8_MIN;
	int64_t x452 = -1LL;
	int64_t t101 = -23LL;

    t101 = (x449/((x450|x451)&x452));

    if (t101 != 128LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x454 = UINT64_MAX;
	volatile int16_t x456 = INT16_MIN;
	volatile uint64_t t102 = 4217457055190833131LLU;

    t102 = (x453/((x454|x455)&x456));

    if (t102 != 0LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x457 = 0LLU;
	volatile int16_t x458 = INT16_MIN;
	uint64_t x459 = 32871528611356616LLU;
	static uint64_t t103 = 1573581641414481LLU;

    t103 = (x457/((x458|x459)&x460));

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x461 = INT8_MAX;
	static uint16_t x462 = 3744U;
	int32_t x463 = 2;
	int64_t x464 = 69216LL;
	volatile int64_t t104 = 247024LL;

    t104 = (x461/((x462|x463)&x464));

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x465 = INT32_MIN;
	volatile int8_t x466 = -1;
	static int16_t x467 = 391;
	volatile int32_t t105 = 2108818;

    t105 = (x465/((x466|x467)&x468));

    if (t105 != -1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int8_t x473 = -1;
	int32_t x474 = INT32_MAX;
	volatile int8_t x475 = INT8_MIN;
	uint8_t x476 = UINT8_MAX;
	int32_t t106 = 20601;

    t106 = (x473/((x474|x475)&x476));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x477 = INT8_MAX;
	int32_t x479 = -1;
	int32_t t107 = -964;

    t107 = (x477/((x478|x479)&x480));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x482 = UINT8_MAX;
	uint32_t x483 = 6487U;
	uint64_t x484 = 54184304LLU;
	uint64_t t108 = 409600LLU;

    t108 = (x481/((x482|x483)&x484));

    if (t108 != 3817620876181612LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x485 = 18U;
	uint32_t x486 = UINT32_MAX;
	uint8_t x487 = 52U;
	int8_t x488 = INT8_MIN;
	volatile uint32_t t109 = 3298225U;

    t109 = (x485/((x486|x487)&x488));

    if (t109 != 0U) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x489 = -1563868;
	static int8_t x490 = -1;
	int8_t x491 = 0;
	volatile int64_t x492 = 22474946715998932LL;
	static volatile int64_t t110 = 2LL;

    t110 = (x489/((x490|x491)&x492));

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x493 = INT8_MIN;
	int16_t x494 = INT16_MIN;
	static volatile int8_t x496 = INT8_MIN;
	volatile int32_t t111 = 313;

    t111 = (x493/((x494|x495)&x496));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x498 = INT64_MIN;
	int8_t x499 = INT8_MIN;

    t112 = (x497/((x498|x499)&x500));

    if (t112 != 375LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x501 = UINT32_MAX;
	static uint32_t x502 = 61U;
	uint32_t x504 = 104U;
	uint32_t t113 = 348U;

    t113 = (x501/((x502|x503)&x504));

    if (t113 != 107374182U) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x505 = 9902U;
	volatile int64_t x506 = 12LL;
	uint16_t x507 = 17604U;
	static uint32_t x508 = UINT32_MAX;
	int64_t t114 = -1LL;

    t114 = (x505/((x506|x507)&x508));

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x509 = INT16_MIN;
	uint8_t x510 = 28U;
	static uint16_t x511 = 5490U;
	int8_t x512 = INT8_MAX;
	volatile int32_t t115 = 24044713;

    t115 = (x509/((x510|x511)&x512));

    if (t115 != -260) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x513 = 15351033543049LLU;
	int8_t x514 = 59;
	uint64_t x516 = 35707503699676LLU;
	static volatile uint64_t t116 = 8505415913114LLU;

    t116 = (x513/((x514|x515)&x516));

    if (t116 != 548251197966LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x517 = INT16_MIN;
	volatile int32_t x518 = -906465;
	volatile int32_t x519 = -869369468;
	volatile uint8_t x520 = UINT8_MAX;

    t117 = (x517/((x518|x519)&x520));

    if (t117 != -206) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint64_t x521 = 2113890839LLU;
	volatile uint16_t x522 = UINT16_MAX;
	int16_t x524 = -1;
	uint64_t t118 = 3299564544492LLU;

    t118 = (x521/((x522|x523)&x524));

    if (t118 != 32255LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x525 = -1;
	int32_t x526 = -1;
	uint8_t x527 = 7U;
	static uint16_t x528 = 2U;
	volatile int32_t t119 = 52;

    t119 = (x525/((x526|x527)&x528));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x529 = 1332U;
	static int8_t x530 = INT8_MIN;
	int16_t x531 = INT16_MIN;
	int64_t x532 = INT64_MIN;

    t120 = (x529/((x530|x531)&x532));

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x533 = -1;
	uint64_t x534 = 61339LLU;
	static volatile uint32_t x535 = UINT32_MAX;
	uint64_t t121 = 22018173648391406LLU;

    t121 = (x533/((x534|x535)&x536));

    if (t121 != 4294967297LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	static int8_t x538 = 0;
	int8_t x539 = 25;
	uint8_t x540 = UINT8_MAX;
	static volatile int32_t t122 = -508335;

    t122 = (x537/((x538|x539)&x540));

    if (t122 != -3) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x541 = -564;
	uint64_t x543 = 1LLU;
	static int16_t x544 = INT16_MAX;
	static uint64_t t123 = 94837LLU;

    t123 = (x541/((x542|x543)&x544));

    if (t123 != 565140285950477LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x546 = UINT32_MAX;
	volatile int8_t x547 = -8;
	int32_t x548 = 8248968;
	uint32_t t124 = 48481U;

    t124 = (x545/((x546|x547)&x548));

    if (t124 != 260U) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x549 = UINT32_MAX;
	uint8_t x550 = UINT8_MAX;
	static volatile uint32_t x551 = UINT32_MAX;
	volatile uint64_t t125 = 182081811561675LLU;

    t125 = (x549/((x550|x551)&x552));

    if (t125 != 26159LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint16_t x553 = 5U;
	int32_t x554 = INT32_MIN;
	uint8_t x555 = UINT8_MAX;
	static int32_t t126 = -16;

    t126 = (x553/((x554|x555)&x556));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint32_t x557 = 6776U;
	volatile int32_t x558 = INT32_MIN;
	uint64_t x559 = 93994682787530LLU;
	uint8_t x560 = 30U;
	volatile uint64_t t127 = 41072LLU;

    t127 = (x557/((x558|x559)&x560));

    if (t127 != 677LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x562 = 306LLU;
	uint8_t x563 = 109U;
	volatile int8_t x564 = INT8_MIN;
	uint64_t t128 = 399575569144LLU;

    t128 = (x561/((x562|x563)&x564));

    if (t128 != 72057594037927808LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint8_t x565 = UINT8_MAX;
	uint64_t x566 = 8333507114026187LLU;
	int8_t x567 = -1;
	volatile uint64_t t129 = 154177LLU;

    t129 = (x565/((x566|x567)&x568));

    if (t129 != 0LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x569 = 5021692U;
	volatile uint16_t x570 = 20080U;
	volatile int32_t x571 = -693487;
	uint32_t x572 = 783708305U;

    t130 = (x569/((x570|x571)&x572));

    if (t130 != 0U) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x574 = INT16_MIN;
	uint16_t x575 = 14672U;
	uint64_t x576 = UINT64_MAX;
	uint64_t t131 = 490309673221651LLU;

    t131 = (x573/((x574|x575)&x576));

    if (t131 != 1LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x578 = 1351;
	int8_t x579 = INT8_MIN;
	static uint64_t x580 = 438435528LLU;
	volatile uint64_t t132 = 2330809252750663LLU;

    t132 = (x577/((x578|x579)&x580));

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint64_t x581 = UINT64_MAX;
	static uint16_t x582 = UINT16_MAX;
	volatile uint64_t x583 = UINT64_MAX;
	int32_t x584 = -91;
	volatile uint64_t t133 = 23LLU;

    t133 = (x581/((x582|x583)&x584));

    if (t133 != 1LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x585 = INT64_MAX;
	int64_t x587 = INT64_MIN;
	int32_t x588 = INT32_MIN;
	int64_t t134 = 0LL;

    t134 = (x585/((x586|x587)&x588));

    if (t134 != -1LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x593 = -1LL;
	int32_t x594 = -1;
	int32_t x595 = INT32_MAX;
	int64_t t135 = -1LL;

    t135 = (x593/((x594|x595)&x596));

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile int32_t x597 = -1;
	volatile int8_t x598 = -1;
	uint16_t x599 = 14019U;
	int16_t x600 = 12119;

    t136 = (x597/((x598|x599)&x600));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x601 = -6;
	volatile uint64_t x603 = 94488338649192LLU;
	uint8_t x604 = 3U;

    t137 = (x601/((x602|x603)&x604));

    if (t137 != 6148914691236517203LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x606 = 16LLU;
	static int8_t x608 = INT8_MIN;
	volatile uint64_t t138 = 604833872215LLU;

    t138 = (x605/((x606|x607)&x608));

    if (t138 != 1LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x610 = -1;
	static int16_t x612 = INT16_MIN;
	int32_t t139 = 72229;

    t139 = (x609/((x610|x611)&x612));

    if (t139 != -3813) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x615 = INT8_MIN;
	int32_t x616 = INT32_MIN;
	int32_t t140 = 56696;

    t140 = (x613/((x614|x615)&x616));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x617 = -1LL;
	int8_t x618 = INT8_MAX;
	volatile uint16_t x619 = UINT16_MAX;
	uint64_t x620 = 54812567LLU;
	volatile uint64_t t141 = 1688762928LLU;

    t141 = (x617/((x618|x619)&x620));

    if (t141 != 753820606992339LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x621 = INT32_MAX;
	int32_t x622 = -1;
	int8_t x623 = -1;
	int64_t x624 = 243114875903LL;
	int64_t t142 = -340950LL;

    t142 = (x621/((x622|x623)&x624));

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x625 = 4050;
	volatile int16_t x626 = INT16_MIN;
	static int16_t x627 = INT16_MAX;
	int64_t x628 = INT64_MIN;
	volatile int64_t t143 = 2789835LL;

    t143 = (x625/((x626|x627)&x628));

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x629 = 0;
	int32_t x630 = INT32_MAX;
	volatile uint8_t x631 = 16U;
	uint32_t t144 = 29284537U;

    t144 = (x629/((x630|x631)&x632));

    if (t144 != 0U) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x633 = 109U;
	int64_t x634 = INT64_MAX;
	int32_t x635 = INT32_MAX;
	uint16_t x636 = 972U;
	volatile int64_t t145 = 388987291267LL;

    t145 = (x633/((x634|x635)&x636));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint32_t x637 = 20096091U;
	int32_t x638 = -1;
	volatile uint8_t x640 = 3U;
	uint32_t t146 = 10968205U;

    t146 = (x637/((x638|x639)&x640));

    if (t146 != 6698697U) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x641 = UINT64_MAX;
	int16_t x642 = INT16_MIN;
	static uint64_t x643 = 125LLU;
	static volatile int8_t x644 = -5;
	static volatile uint64_t t147 = 1433093177095LLU;

    t147 = (x641/((x642|x643)&x644));

    if (t147 != 1LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x645 = INT16_MIN;
	volatile uint32_t x646 = 2581U;
	static uint32_t x647 = 475U;
	static int8_t x648 = INT8_MIN;
	volatile uint32_t t148 = 28276396U;

    t148 = (x645/((x646|x647)&x648));

    if (t148 != 1458877U) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x650 = INT8_MAX;
	volatile int16_t x651 = INT16_MIN;
	uint16_t x652 = 358U;
	volatile int32_t t149 = 1411687;

    t149 = (x649/((x650|x651)&x652));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x654 = -13;
	volatile uint64_t x655 = 1206214501847LLU;
	uint64_t t150 = 3178LLU;

    t150 = (x653/((x654|x655)&x656));

    if (t150 != 0LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x657 = INT16_MIN;
	static int16_t x660 = 4;
	int64_t t151 = -55258LL;

    t151 = (x657/((x658|x659)&x660));

    if (t151 != -8192LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x661 = UINT8_MAX;
	static uint16_t x662 = 5U;
	int8_t x663 = INT8_MAX;
	static int64_t t152 = 1LL;

    t152 = (x661/((x662|x663)&x664));

    if (t152 != 36LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile int8_t x665 = -1;
	int16_t x666 = INT16_MIN;
	int16_t x667 = 12;
	uint16_t x668 = UINT16_MAX;
	int32_t t153 = 928;

    t153 = (x665/((x666|x667)&x668));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x669 = INT16_MIN;
	static volatile int32_t x670 = INT32_MAX;
	int32_t x671 = INT32_MIN;
	volatile int8_t x672 = INT8_MAX;
	static int32_t t154 = 3595;

    t154 = (x669/((x670|x671)&x672));

    if (t154 != -258) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x673 = 55256982543149LLU;
	volatile int32_t x674 = INT32_MIN;
	volatile uint16_t x675 = 8395U;
	int64_t x676 = INT64_MIN;
	static uint64_t t155 = 29560982LLU;

    t155 = (x673/((x674|x675)&x676));

    if (t155 != 0LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x679 = 952;
	uint32_t t156 = 45506U;

    t156 = (x677/((x678|x679)&x680));

    if (t156 != 1U) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x682 = INT64_MAX;
	volatile uint32_t x683 = 3771U;
	int32_t x684 = INT32_MIN;
	static volatile int64_t t157 = -64557775251905LL;

    t157 = (x681/((x682|x683)&x684));

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x686 = -6177903;
	static uint32_t x688 = 646104U;

    t158 = (x685/((x686|x687)&x688));

    if (t158 != 70783340LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x694 = -1;
	int16_t x695 = INT16_MIN;
	int64_t x696 = INT64_MIN;
	volatile int64_t t159 = -224845281056LL;

    t159 = (x693/((x694|x695)&x696));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int16_t x701 = -1;
	volatile uint64_t x702 = 247881076970837160LLU;
	int32_t x704 = INT32_MIN;
	volatile uint64_t t160 = 930517409692LLU;

    t160 = (x701/((x702|x703)&x704));

    if (t160 != 74LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x705 = 1;
	int64_t x706 = -1LL;
	static uint64_t x707 = UINT64_MAX;
	uint64_t x708 = 105210686638050400LLU;

    t161 = (x705/((x706|x707)&x708));

    if (t161 != 0LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x709 = 0;
	static uint16_t x710 = 58U;
	int64_t x711 = -234155LL;
	int32_t x712 = INT32_MIN;
	volatile int64_t t162 = 97097653LL;

    t162 = (x709/((x710|x711)&x712));

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x714 = INT64_MAX;
	uint64_t x715 = 24025339084LLU;
	int64_t x716 = INT64_MAX;
	volatile uint64_t t163 = 6461475331860447859LLU;

    t163 = (x713/((x714|x715)&x716));

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x717 = INT32_MIN;
	int16_t x718 = -4094;
	int32_t x719 = INT32_MIN;
	int32_t x720 = INT32_MIN;
	static volatile int32_t t164 = -1;

    t164 = (x717/((x718|x719)&x720));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x721 = 1;
	uint32_t x722 = UINT32_MAX;
	uint32_t x723 = UINT32_MAX;
	int8_t x724 = -1;

    t165 = (x721/((x722|x723)&x724));

    if (t165 != 0U) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int8_t x725 = INT8_MIN;
	static uint32_t x726 = 647166U;
	static int16_t x727 = INT16_MIN;
	uint32_t x728 = 109363507U;

    t166 = (x725/((x726|x727)&x728));

    if (t166 != 39U) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x729 = 34;
	int8_t x730 = 1;
	volatile int8_t x731 = INT8_MAX;
	uint64_t x732 = 3725208244946078LLU;

    t167 = (x729/((x730|x731)&x732));

    if (t167 != 1LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	static int16_t x734 = INT16_MIN;
	int16_t x735 = -1;
	static volatile int16_t x736 = -21;
	volatile int32_t t168 = -1;

    t168 = (x733/((x734|x735)&x736));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x741 = INT16_MIN;
	int8_t x742 = INT8_MIN;
	int8_t x743 = -1;
	int8_t x744 = -1;
	static int32_t t169 = 1;

    t169 = (x741/((x742|x743)&x744));

    if (t169 != 32768) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x745 = 14198341LL;
	static volatile int8_t x746 = -1;
	uint32_t x747 = UINT32_MAX;

    t170 = (x745/((x746|x747)&x748));

    if (t170 != 163199LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x749 = 2529U;
	int32_t x750 = -1;
	uint64_t t171 = 5857077927288LLU;

    t171 = (x749/((x750|x751)&x752));

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x758 = -1;
	int32_t x759 = INT32_MIN;
	volatile int8_t x760 = INT8_MIN;
	int32_t t172 = 165;

    t172 = (x757/((x758|x759)&x760));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x761 = INT16_MIN;
	int32_t x762 = INT32_MAX;
	static volatile uint32_t x763 = UINT32_MAX;
	int8_t x764 = INT8_MIN;
	uint32_t t173 = 3U;

    t173 = (x761/((x762|x763)&x764));

    if (t173 != 0U) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x765 = -1;
	uint64_t x766 = 5911697946639LLU;
	volatile int16_t x767 = -134;
	int16_t x768 = 788;
	uint64_t t174 = 43126874907435LLU;

    t174 = (x765/((x766|x767)&x768));

    if (t174 != 23409573697600953LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x769 = 4U;
	int64_t x770 = INT64_MIN;
	int64_t x771 = -1LL;

    t175 = (x769/((x770|x771)&x772));

    if (t175 != -4LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x773 = 4U;
	int8_t x774 = -1;
	static int8_t x775 = -1;
	uint64_t x776 = UINT64_MAX;

    t176 = (x773/((x774|x775)&x776));

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x778 = UINT16_MAX;
	int8_t x779 = INT8_MIN;

    t177 = (x777/((x778|x779)&x780));

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint32_t x781 = 26U;
	int32_t x783 = -18059;
	int16_t x784 = INT16_MAX;
	static uint32_t t178 = 778332U;

    t178 = (x781/((x782|x783)&x784));

    if (t178 != 0U) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x785 = INT8_MIN;
	static int16_t x787 = INT16_MIN;

    t179 = (x785/((x786|x787)&x788));

    if (t179 != 11917U) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x791 = 14104U;
	volatile int32_t t180 = -365538868;

    t180 = (x789/((x790|x791)&x792));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int64_t x793 = INT64_MIN;
	int16_t x794 = INT16_MAX;
	static int16_t x795 = -49;
	volatile int64_t x796 = 7453812LL;
	volatile int64_t t181 = 369141439644154LL;

    t181 = (x793/((x794|x795)&x796));

    if (t181 != -1237403363118LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static int16_t x798 = -1;
	uint32_t x800 = 6561068U;
	volatile uint32_t t182 = 136U;

    t182 = (x797/((x798|x799)&x800));

    if (t182 != 654U) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint64_t x801 = UINT64_MAX;
	int64_t x802 = INT64_MIN;
	volatile uint64_t x803 = 856409682090LLU;
	volatile int16_t x804 = INT16_MIN;
	volatile uint64_t t183 = 3888583201030LLU;

    t183 = (x801/((x802|x803)&x804));

    if (t183 != 1LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x805 = UINT16_MAX;
	static int32_t x806 = 301;
	uint64_t x808 = UINT64_MAX;
	uint64_t t184 = 2937169LLU;

    t184 = (x805/((x806|x807)&x808));

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x810 = -1;
	static volatile uint32_t x811 = UINT32_MAX;
	int64_t x812 = -1LL;

    t185 = (x809/((x810|x811)&x812));

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint8_t x813 = 1U;
	volatile uint8_t x814 = 3U;
	static int8_t x815 = INT8_MIN;
	uint16_t x816 = 3U;
	static volatile int32_t t186 = 30774774;

    t186 = (x813/((x814|x815)&x816));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint64_t x818 = 740263177LLU;
	uint16_t x819 = 6U;
	uint8_t x820 = 9U;
	static uint64_t t187 = 38764LLU;

    t187 = (x817/((x818|x819)&x820));

    if (t187 != 2049638230412172387LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x821 = INT64_MIN;
	int64_t x822 = INT64_MAX;
	uint64_t x823 = UINT64_MAX;
	int16_t x824 = INT16_MAX;

    t188 = (x821/((x822|x823)&x824));

    if (t188 != 281483566907400LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x825 = UINT64_MAX;
	int32_t x826 = -1;
	static uint64_t t189 = 112021456348LLU;

    t189 = (x825/((x826|x827)&x828));

    if (t189 != 878416384462359600LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x831 = INT64_MIN;
	volatile uint8_t x832 = UINT8_MAX;
	volatile uint64_t t190 = 12877955LLU;

    t190 = (x829/((x830|x831)&x832));

    if (t190 != 119011252088448719LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int64_t x835 = INT64_MIN;
	int64_t t191 = 428670064LL;

    t191 = (x833/((x834|x835)&x836));

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int64_t x837 = INT64_MAX;
	volatile uint64_t x838 = 12LLU;
	static uint16_t x839 = 217U;
	volatile int8_t x840 = -2;
	volatile uint64_t t192 = 911181652307059LLU;

    t192 = (x837/((x838|x839)&x840));

    if (t192 != 41924418349339890LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint64_t x841 = 2858552776038175153LLU;
	int64_t x842 = INT64_MAX;
	uint16_t x843 = 0U;
	uint32_t x844 = 180011905U;
	volatile uint64_t t193 = 2998347343LLU;

    t193 = (x841/((x842|x843)&x844));

    if (t193 != 15879798483LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x845 = INT32_MIN;
	int16_t x846 = INT16_MIN;
	volatile int8_t x847 = 13;
	int8_t x848 = -28;
	int32_t t194 = -423;

    t194 = (x845/((x846|x847)&x848));

    if (t194 != 65544) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x849 = -4118;
	int16_t x851 = 12757;
	int64_t t195 = 18937859LL;

    t195 = (x849/((x850|x851)&x852));

    if (t195 != 4118LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int32_t x853 = INT32_MIN;
	volatile uint32_t x854 = UINT32_MAX;
	static uint32_t x855 = UINT32_MAX;
	int64_t x856 = INT64_MAX;
	volatile int64_t t196 = 14338331643655LL;

    t196 = (x853/((x854|x855)&x856));

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int16_t x857 = INT16_MIN;
	uint64_t x859 = 131506132768425260LLU;
	int16_t x860 = INT16_MIN;
	static uint64_t t197 = 3LLU;

    t197 = (x857/((x858|x859)&x860));

    if (t197 != 1LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x861 = INT16_MAX;
	volatile uint16_t x862 = UINT16_MAX;
	int32_t x863 = INT32_MIN;
	static int32_t x864 = INT32_MIN;
	int32_t t198 = 13990736;

    t198 = (x861/((x862|x863)&x864));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x870 = INT8_MIN;
	uint8_t x871 = 91U;
	static volatile int64_t t199 = 6LL;

    t199 = (x869/((x870|x871)&x872));

    if (t199 != 0LL) { NG(); } else { ; }
	
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

