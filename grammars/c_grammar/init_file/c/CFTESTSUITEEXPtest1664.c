
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

volatile int16_t x1 = 0;
int64_t x19 = INT64_MIN;
volatile int32_t x30 = INT32_MIN;
int32_t t8 = 5;
int64_t t9 = 2108LL;
int16_t x41 = -1;
uint64_t x42 = UINT64_MAX;
int64_t x51 = INT64_MIN;
int64_t x52 = 12651166LL;
uint64_t x56 = 258477403308791LLU;
volatile int32_t x60 = INT32_MIN;
int32_t x61 = -7;
uint8_t x65 = 53U;
int64_t x67 = -1713LL;
uint32_t x72 = 16U;
volatile uint8_t x73 = 14U;
static int8_t x75 = INT8_MIN;
uint64_t x97 = UINT64_MAX;
volatile uint64_t t24 = 826801LLU;
int16_t x106 = INT16_MAX;
volatile uint64_t t26 = 2LLU;
int16_t x109 = -1;
int16_t x112 = 13075;
int64_t x114 = INT64_MAX;
int64_t x115 = INT64_MIN;
int16_t x116 = INT16_MIN;
int32_t t28 = 11857;
int8_t x120 = -1;
int32_t x123 = INT32_MIN;
volatile int16_t x128 = INT16_MIN;
uint32_t x131 = 534840U;
static uint32_t x138 = 830U;
volatile uint32_t t34 = 245U;
int32_t t36 = -341491076;
int64_t t37 = -34665319286059LL;
int32_t x154 = -7;
static int32_t t38 = 435291947;
int32_t t39 = -18068461;
volatile int16_t x161 = INT16_MAX;
volatile int32_t t40 = -30;
uint32_t x171 = UINT32_MAX;
static int16_t x176 = -314;
volatile int32_t t43 = -1;
int64_t x178 = 4068LL;
static volatile int16_t x182 = INT16_MIN;
volatile uint8_t x183 = UINT8_MAX;
int32_t x189 = INT32_MIN;
static int8_t x196 = INT8_MIN;
static volatile int16_t x197 = 31;
int16_t x199 = INT16_MIN;
static int16_t x200 = 1;
static uint16_t x207 = 5U;
volatile int32_t x210 = -307;
int32_t x212 = -1;
uint64_t t54 = 62118708LLU;
int16_t x221 = -1;
uint64_t x222 = 50134783LLU;
volatile int32_t t55 = 464088;
static uint32_t x226 = UINT32_MAX;
uint32_t x239 = 128682U;
int64_t x246 = INT64_MAX;
static int8_t x249 = INT8_MAX;
volatile int32_t t63 = 6428436;
int32_t x263 = INT32_MAX;
int64_t x266 = 1143922867621LL;
static int16_t x267 = 28;
uint64_t x273 = 44976LLU;
static volatile int32_t t71 = -17481284;
volatile int32_t x294 = -1;
volatile int16_t x299 = -1;
volatile int16_t x305 = -1;
volatile int16_t x308 = 4563;
static volatile int16_t x314 = INT16_MAX;
int32_t x320 = 124;
int64_t x333 = INT64_MAX;
volatile int64_t t83 = 4LL;
int16_t x339 = INT16_MIN;
static int32_t x344 = -1;
volatile int64_t t86 = -1LL;
static volatile int32_t t87 = 18;
volatile uint8_t x369 = 28U;
uint16_t x372 = 358U;
int32_t t92 = -485307;
uint64_t x373 = UINT64_MAX;
uint8_t x379 = 4U;
int64_t x380 = -1LL;
uint64_t x384 = 1908662603676LLU;
int32_t t95 = 373250998;
uint16_t x385 = 109U;
int32_t x389 = INT32_MIN;
volatile uint32_t x390 = UINT32_MAX;
volatile int64_t x391 = 1165915470292225672LL;
int64_t x392 = INT64_MIN;
int32_t t98 = 69776;
int32_t x400 = -12437;
int32_t t100 = -7;
static int8_t x411 = INT8_MAX;
int64_t x412 = INT64_MAX;
int16_t x414 = 4;
volatile int8_t x416 = INT8_MAX;
uint64_t x418 = 107079LLU;
int16_t x424 = INT16_MAX;
int32_t x427 = -1;
uint32_t x428 = UINT32_MAX;
volatile int16_t x432 = -42;
uint32_t x434 = UINT32_MAX;
int32_t x439 = -1;
int8_t x445 = 0;
volatile int32_t x447 = -5165;
uint32_t x449 = 4473U;
static int8_t x451 = INT8_MIN;
uint32_t t112 = 38U;
static int16_t x453 = -1;
volatile uint16_t x464 = 0U;
static volatile int32_t t115 = 145747753;
uint32_t x472 = UINT32_MAX;
int32_t t118 = 4341746;
int64_t x477 = INT64_MIN;
int8_t x478 = 0;
int64_t x488 = INT64_MIN;
static int8_t x489 = -1;
int16_t x493 = INT16_MIN;
volatile uint16_t x498 = 10686U;
volatile int64_t x500 = INT64_MIN;
int8_t x505 = -25;
int64_t x508 = INT64_MIN;
int32_t x528 = -9;
int8_t x529 = -1;
volatile uint8_t x531 = UINT8_MAX;
int16_t x536 = -1;
volatile uint64_t t133 = 101471058954771563LLU;
int32_t x542 = 213143;
volatile int32_t x546 = INT32_MAX;
static volatile int32_t x548 = -1;
static volatile int64_t t136 = -56833370929188LL;
int32_t t137 = -2;
int8_t x558 = 25;
volatile int32_t t139 = -461202;
static int8_t x561 = INT8_MAX;
int8_t x563 = -4;
static int32_t x570 = INT32_MIN;
static volatile uint32_t t142 = 40891U;
int8_t x573 = -1;
volatile uint8_t x582 = UINT8_MAX;
uint8_t x586 = 4U;
int8_t x588 = -25;
static volatile uint64_t t146 = 4408455217LLU;
int64_t x591 = -1LL;
volatile int32_t t147 = -43190376;
volatile uint16_t x593 = UINT16_MAX;
int32_t x596 = 5;
static volatile uint64_t t149 = 874LLU;
uint64_t x607 = 476387LLU;
int16_t x608 = INT16_MAX;
volatile int32_t x612 = INT32_MIN;
static int32_t x617 = -1;
int32_t x618 = INT32_MIN;
uint32_t x624 = UINT32_MAX;
int32_t x625 = INT32_MAX;
int8_t x630 = -1;
int64_t x635 = 1792365216LL;
int16_t x636 = INT16_MIN;
int8_t x638 = 7;
static uint32_t x643 = 82388U;
int64_t x646 = 1251128LL;
static int64_t x651 = -1LL;
uint16_t x653 = UINT16_MAX;
int32_t t163 = 1333948;
int8_t x660 = -1;
static uint8_t x663 = 18U;
uint8_t x666 = 40U;
volatile int32_t x668 = 218;
int16_t x671 = INT16_MIN;
volatile uint8_t x679 = UINT8_MAX;
uint16_t x685 = 2916U;
static volatile int32_t t171 = 109;
static uint16_t x692 = 5523U;
volatile int16_t x695 = -1;
static int32_t t173 = 185;
volatile int16_t x698 = 1738;
static int32_t t174 = -14084357;
int32_t x704 = INT32_MIN;
volatile int8_t x705 = -1;
int16_t x707 = INT16_MAX;
volatile int64_t t177 = -2346040265658310LL;
static uint8_t x718 = UINT8_MAX;
int16_t x723 = INT16_MIN;
int32_t x724 = INT32_MIN;
static volatile uint64_t t180 = 38LLU;
uint8_t x726 = 15U;
int64_t x733 = INT64_MIN;
volatile int64_t x735 = INT64_MIN;
volatile int64_t x745 = INT64_MAX;
static volatile uint32_t x747 = UINT32_MAX;
int32_t x750 = INT32_MAX;
static int32_t t187 = -805681003;
uint8_t x754 = UINT8_MAX;
int32_t t188 = 336436794;
int8_t x758 = 0;
int32_t t190 = 1;
int16_t x765 = INT16_MIN;
int32_t x769 = -43;
int64_t x776 = INT64_MAX;
volatile int32_t t194 = -27733713;
int16_t x781 = -57;
uint64_t x784 = 423249863423139LLU;
int32_t t195 = 281610596;
static int8_t x790 = INT8_MIN;
int32_t x792 = -1;
uint64_t x797 = 9019528408493352LLU;
int16_t x800 = INT16_MAX;


void f0(void) {
    	static int64_t x2 = 0LL;
	uint8_t x3 = 37U;
	int32_t x4 = INT32_MIN;
	volatile int32_t t0 = -233216454;

    t0 = (x1&((x2>x3)!=x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint16_t x5 = UINT16_MAX;
	int64_t x6 = -248337992724LL;
	volatile int32_t x7 = -1;
	uint32_t x8 = 1U;
	int32_t t1 = 328475970;

    t1 = (x5&((x6>x7)!=x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x9 = 675130;
	volatile int64_t x10 = INT64_MIN;
	uint64_t x11 = 487388673777LLU;
	static uint32_t x12 = 1280232U;
	volatile int32_t t2 = -389;

    t2 = (x9&((x10>x11)!=x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = -1;
	volatile uint16_t x14 = UINT16_MAX;
	int16_t x15 = -1097;
	int8_t x16 = -1;
	int32_t t3 = -8587336;

    t3 = (x13&((x14>x15)!=x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = -1;
	static int16_t x18 = -1;
	uint32_t x20 = 475020853U;
	volatile int32_t t4 = 0;

    t4 = (x17&((x18>x19)!=x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x21 = 76;
	uint16_t x22 = 5U;
	volatile int8_t x23 = INT8_MIN;
	volatile int64_t x24 = INT64_MIN;
	static int32_t t5 = -6;

    t5 = (x21&((x22>x23)!=x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = 114LLU;
	int16_t x26 = INT16_MIN;
	static uint32_t x27 = 15327U;
	int16_t x28 = -1;
	uint64_t t6 = 5763716LLU;

    t6 = (x25&((x26>x27)!=x28));

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MAX;
	static int16_t x31 = INT16_MAX;
	int64_t x32 = -143060LL;
	int32_t t7 = -2039980;

    t7 = (x29&((x30>x31)!=x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = -1;
	int64_t x34 = INT64_MIN;
	static int32_t x35 = INT32_MIN;
	static int8_t x36 = INT8_MAX;

    t8 = (x33&((x34>x35)!=x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = -1LL;
	uint32_t x38 = 52U;
	uint64_t x39 = 678471LLU;
	int64_t x40 = INT64_MIN;

    t9 = (x37&((x38>x39)!=x40));

    if (t9 != 1LL) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x43 = INT64_MIN;
	int32_t x44 = INT32_MAX;
	volatile int32_t t10 = 1;

    t10 = (x41&((x42>x43)!=x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = -15;
	int8_t x46 = INT8_MAX;
	volatile uint16_t x47 = UINT16_MAX;
	int16_t x48 = -166;
	int32_t t11 = 2374934;

    t11 = (x45&((x46>x47)!=x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint8_t x49 = 71U;
	int32_t x50 = -1;
	int32_t t12 = 292407433;

    t12 = (x49&((x50>x51)!=x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = INT32_MIN;
	volatile int8_t x54 = INT8_MAX;
	uint64_t x55 = UINT64_MAX;
	int32_t t13 = -154423465;

    t13 = (x53&((x54>x55)!=x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x57 = UINT64_MAX;
	volatile int32_t x58 = 39;
	int32_t x59 = -23033389;
	static uint64_t t14 = 181759141591LLU;

    t14 = (x57&((x58>x59)!=x60));

    if (t14 != 1LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x62 = INT64_MIN;
	volatile uint32_t x63 = 213601U;
	static int8_t x64 = INT8_MIN;
	int32_t t15 = -481511974;

    t15 = (x61&((x62>x63)!=x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x66 = -1348;
	volatile int16_t x68 = INT16_MIN;
	int32_t t16 = -57;

    t16 = (x65&((x66>x67)!=x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = -1260;
	uint64_t x70 = UINT64_MAX;
	int32_t x71 = 85204;
	volatile int32_t t17 = -388384631;

    t17 = (x69&((x70>x71)!=x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x74 = -1;
	int64_t x76 = INT64_MAX;
	int32_t t18 = -6;

    t18 = (x73&((x74>x75)!=x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = INT16_MIN;
	int8_t x78 = -6;
	uint32_t x79 = 14654035U;
	uint32_t x80 = UINT32_MAX;
	int32_t t19 = -1;

    t19 = (x77&((x78>x79)!=x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = -1;
	static volatile int64_t x82 = INT64_MIN;
	static int32_t x83 = INT32_MIN;
	int8_t x84 = INT8_MIN;
	int32_t t20 = 6390;

    t20 = (x81&((x82>x83)!=x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = INT16_MIN;
	uint64_t x86 = UINT64_MAX;
	int64_t x87 = -34502LL;
	volatile int8_t x88 = 1;
	volatile int32_t t21 = -131;

    t21 = (x85&((x86>x87)!=x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x89 = 52U;
	int8_t x90 = -30;
	volatile int8_t x91 = 1;
	volatile int32_t x92 = -1;
	volatile int32_t t22 = -1588490;

    t22 = (x89&((x90>x91)!=x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = INT16_MAX;
	uint64_t x94 = 3651318295864LLU;
	volatile uint16_t x95 = 354U;
	uint16_t x96 = UINT16_MAX;
	int32_t t23 = -10760;

    t23 = (x93&((x94>x95)!=x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint64_t x98 = 26602873823021LLU;
	int16_t x99 = INT16_MIN;
	int8_t x100 = INT8_MIN;

    t24 = (x97&((x98>x99)!=x100));

    if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = 6795810181LL;
	volatile uint32_t x102 = 62U;
	uint8_t x103 = UINT8_MAX;
	static uint8_t x104 = 4U;
	volatile int64_t t25 = 2200727LL;

    t25 = (x101&((x102>x103)!=x104));

    if (t25 != 1LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint64_t x105 = UINT64_MAX;
	int64_t x107 = INT64_MIN;
	int8_t x108 = 0;

    t26 = (x105&((x106>x107)!=x108));

    if (t26 != 1LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x110 = INT16_MIN;
	static volatile int32_t x111 = -865886291;
	static volatile int32_t t27 = 1;

    t27 = (x109&((x110>x111)!=x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x113 = 15;

    t28 = (x113&((x114>x115)!=x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint32_t x117 = UINT32_MAX;
	static int32_t x118 = -11591553;
	int64_t x119 = 18LL;
	static volatile uint32_t t29 = 221430904U;

    t29 = (x117&((x118>x119)!=x120));

    if (t29 != 1U) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = -1LL;
	int32_t x122 = -1395446;
	static int64_t x124 = -14228607LL;
	int64_t t30 = -25111615924685781LL;

    t30 = (x121&((x122>x123)!=x124));

    if (t30 != 1LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = INT64_MAX;
	uint64_t x126 = 249LLU;
	int16_t x127 = INT16_MIN;
	int64_t t31 = 2036966801642LL;

    t31 = (x125&((x126>x127)!=x128));

    if (t31 != 1LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x129 = INT16_MIN;
	int32_t x130 = 67228;
	int64_t x132 = INT64_MIN;
	int32_t t32 = 6490;

    t32 = (x129&((x130>x131)!=x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x133 = 60;
	int8_t x134 = INT8_MIN;
	static int32_t x135 = INT32_MAX;
	int16_t x136 = -1;
	volatile int32_t t33 = 1732;

    t33 = (x133&((x134>x135)!=x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x137 = 19417279U;
	static int64_t x139 = INT64_MIN;
	uint8_t x140 = 0U;

    t34 = (x137&((x138>x139)!=x140));

    if (t34 != 1U) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = 791986088757549114LL;
	static volatile uint32_t x142 = 15U;
	int16_t x143 = INT16_MAX;
	volatile uint32_t x144 = 185499U;
	volatile int64_t t35 = -232612176175991LL;

    t35 = (x141&((x142>x143)!=x144));

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = 0;
	volatile uint64_t x146 = 164945162LLU;
	volatile int64_t x147 = INT64_MAX;
	uint16_t x148 = UINT16_MAX;

    t36 = (x145&((x146>x147)!=x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x149 = -56419772323LL;
	volatile int8_t x150 = INT8_MIN;
	int32_t x151 = INT32_MAX;
	static int32_t x152 = -1;

    t37 = (x149&((x150>x151)!=x152));

    if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = INT8_MAX;
	int32_t x155 = 2;
	int64_t x156 = 239656387547447LL;

    t38 = (x153&((x154>x155)!=x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = -10962;
	volatile uint16_t x158 = UINT16_MAX;
	int32_t x159 = -1;
	uint32_t x160 = UINT32_MAX;

    t39 = (x157&((x158>x159)!=x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int8_t x162 = INT8_MAX;
	int8_t x163 = INT8_MIN;
	volatile uint64_t x164 = 3496146441624209LLU;

    t40 = (x161&((x162>x163)!=x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint64_t x165 = 49LLU;
	uint32_t x166 = UINT32_MAX;
	int64_t x167 = -1LL;
	static uint64_t x168 = 12042514800824LLU;
	uint64_t t41 = 24LLU;

    t41 = (x165&((x166>x167)!=x168));

    if (t41 != 1LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile int16_t x169 = -510;
	volatile int32_t x170 = -3;
	int8_t x172 = -1;
	volatile int32_t t42 = 23;

    t42 = (x169&((x170>x171)!=x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x173 = INT8_MAX;
	uint32_t x174 = 631719U;
	static int64_t x175 = -1LL;

    t43 = (x173&((x174>x175)!=x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x177 = -1;
	int32_t x179 = INT32_MIN;
	int16_t x180 = -1;
	int32_t t44 = 28;

    t44 = (x177&((x178>x179)!=x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static int64_t x181 = -1LL;
	uint16_t x184 = 2531U;
	static int64_t t45 = 118LL;

    t45 = (x181&((x182>x183)!=x184));

    if (t45 != 1LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint32_t x185 = 75U;
	volatile uint32_t x186 = 485745U;
	int64_t x187 = INT64_MIN;
	int16_t x188 = INT16_MIN;
	volatile uint32_t t46 = 1052400680U;

    t46 = (x185&((x186>x187)!=x188));

    if (t46 != 1U) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x190 = -1LL;
	volatile uint16_t x191 = 8U;
	uint16_t x192 = UINT16_MAX;
	volatile int32_t t47 = 17;

    t47 = (x189&((x190>x191)!=x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x193 = INT32_MAX;
	int32_t x194 = INT32_MAX;
	int32_t x195 = 487516;
	volatile int32_t t48 = -21;

    t48 = (x193&((x194>x195)!=x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x198 = INT32_MAX;
	volatile int32_t t49 = -236643;

    t49 = (x197&((x198>x199)!=x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x201 = 1U;
	static int8_t x202 = -34;
	int8_t x203 = INT8_MIN;
	int32_t x204 = INT32_MIN;
	volatile int32_t t50 = 367;

    t50 = (x201&((x202>x203)!=x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x205 = -1;
	volatile int64_t x206 = 8LL;
	int8_t x208 = -11;
	static volatile int32_t t51 = -2;

    t51 = (x205&((x206>x207)!=x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x209 = 20284104;
	static int64_t x211 = -1LL;
	volatile int32_t t52 = -793830998;

    t52 = (x209&((x210>x211)!=x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x213 = 83U;
	uint64_t x214 = 1LLU;
	uint8_t x215 = UINT8_MAX;
	volatile uint32_t x216 = 11966U;
	volatile int32_t t53 = 283350900;

    t53 = (x213&((x214>x215)!=x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x217 = 6136LLU;
	int32_t x218 = -1;
	uint32_t x219 = 16217U;
	int8_t x220 = INT8_MAX;

    t54 = (x217&((x218>x219)!=x220));

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint8_t x223 = UINT8_MAX;
	uint32_t x224 = 1048006U;

    t55 = (x221&((x222>x223)!=x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x225 = 1304U;
	uint32_t x227 = UINT32_MAX;
	uint8_t x228 = 3U;
	static volatile int32_t t56 = 17558232;

    t56 = (x225&((x226>x227)!=x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = -1;
	volatile int8_t x230 = -1;
	volatile int16_t x231 = INT16_MAX;
	uint32_t x232 = UINT32_MAX;
	static int32_t t57 = 503483;

    t57 = (x229&((x230>x231)!=x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x233 = INT32_MIN;
	uint8_t x234 = 3U;
	uint8_t x235 = 0U;
	static int64_t x236 = -17423LL;
	int32_t t58 = -63396634;

    t58 = (x233&((x234>x235)!=x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x237 = -662795;
	int32_t x238 = -381810652;
	static uint8_t x240 = 23U;
	int32_t t59 = -3856;

    t59 = (x237&((x238>x239)!=x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x241 = INT32_MAX;
	uint64_t x242 = 2202253782766980479LLU;
	int64_t x243 = INT64_MIN;
	static uint32_t x244 = UINT32_MAX;
	static volatile int32_t t60 = 74963476;

    t60 = (x241&((x242>x243)!=x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x245 = UINT16_MAX;
	int8_t x247 = INT8_MAX;
	uint16_t x248 = 46U;
	volatile int32_t t61 = 2134641;

    t61 = (x245&((x246>x247)!=x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x250 = -1;
	static int64_t x251 = -3478LL;
	int64_t x252 = INT64_MAX;
	volatile int32_t t62 = 62;

    t62 = (x249&((x250>x251)!=x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int16_t x253 = INT16_MIN;
	uint32_t x254 = UINT32_MAX;
	volatile int8_t x255 = 1;
	uint8_t x256 = 0U;

    t63 = (x253&((x254>x255)!=x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = INT32_MIN;
	static int64_t x258 = INT64_MIN;
	uint16_t x259 = 3U;
	uint16_t x260 = 19490U;
	static volatile int32_t t64 = 61228;

    t64 = (x257&((x258>x259)!=x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x261 = 6U;
	volatile uint8_t x262 = 4U;
	volatile int32_t x264 = INT32_MAX;
	volatile uint32_t t65 = 105U;

    t65 = (x261&((x262>x263)!=x264));

    if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x265 = INT32_MIN;
	int16_t x268 = -912;
	volatile int32_t t66 = 4917;

    t66 = (x265&((x266>x267)!=x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x269 = UINT64_MAX;
	volatile uint16_t x270 = 1834U;
	int16_t x271 = 3629;
	volatile int64_t x272 = -43540256490124269LL;
	static volatile uint64_t t67 = 25549557650LLU;

    t67 = (x269&((x270>x271)!=x272));

    if (t67 != 1LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x274 = INT16_MAX;
	static volatile uint16_t x275 = 371U;
	uint16_t x276 = 134U;
	uint64_t t68 = 48723LLU;

    t68 = (x273&((x274>x275)!=x276));

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint16_t x277 = UINT16_MAX;
	uint32_t x278 = UINT32_MAX;
	uint8_t x279 = 0U;
	int64_t x280 = INT64_MIN;
	int32_t t69 = 41954;

    t69 = (x277&((x278>x279)!=x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = INT64_MIN;
	uint32_t x282 = 51881U;
	int64_t x283 = 1414555634003458619LL;
	int8_t x284 = INT8_MIN;
	volatile int64_t t70 = 3169142212LL;

    t70 = (x281&((x282>x283)!=x284));

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x285 = UINT16_MAX;
	int64_t x286 = INT64_MAX;
	volatile int32_t x287 = INT32_MIN;
	static uint64_t x288 = 787498LLU;

    t71 = (x285&((x286>x287)!=x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x289 = 94322705U;
	uint16_t x290 = UINT16_MAX;
	int32_t x291 = INT32_MIN;
	uint16_t x292 = 8108U;
	uint32_t t72 = 2U;

    t72 = (x289&((x290>x291)!=x292));

    if (t72 != 1U) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint8_t x293 = 0U;
	static uint64_t x295 = 2LLU;
	static volatile int32_t x296 = -1;
	int32_t t73 = 6;

    t73 = (x293&((x294>x295)!=x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x297 = 245U;
	static int8_t x298 = INT8_MIN;
	int32_t x300 = 8165227;
	volatile uint32_t t74 = 1U;

    t74 = (x297&((x298>x299)!=x300));

    if (t74 != 1U) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x301 = INT16_MIN;
	uint16_t x302 = 607U;
	static int32_t x303 = -118900;
	int64_t x304 = 808363414896LL;
	int32_t t75 = -30640517;

    t75 = (x301&((x302>x303)!=x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x306 = -1LL;
	int8_t x307 = -1;
	int32_t t76 = -676448;

    t76 = (x305&((x306>x307)!=x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x309 = INT8_MAX;
	int64_t x310 = -1LL;
	volatile int64_t x311 = INT64_MAX;
	int32_t x312 = -1;
	int32_t t77 = -21283;

    t77 = (x309&((x310>x311)!=x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x313 = INT8_MIN;
	int32_t x315 = -2;
	int16_t x316 = INT16_MIN;
	static volatile int32_t t78 = 1658119;

    t78 = (x313&((x314>x315)!=x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x317 = -1;
	int32_t x318 = INT32_MAX;
	static int32_t x319 = 8;
	static int32_t t79 = -10969;

    t79 = (x317&((x318>x319)!=x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x321 = -1030;
	int16_t x322 = INT16_MIN;
	static uint32_t x323 = UINT32_MAX;
	uint32_t x324 = UINT32_MAX;
	int32_t t80 = 477480;

    t80 = (x321&((x322>x323)!=x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x325 = -5;
	static uint32_t x326 = 200338010U;
	int8_t x327 = -1;
	uint32_t x328 = 1485U;
	static volatile int32_t t81 = -12581206;

    t81 = (x325&((x326>x327)!=x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x329 = INT64_MIN;
	uint16_t x330 = 4724U;
	int64_t x331 = INT64_MIN;
	int64_t x332 = -11725973412LL;
	static int64_t t82 = 52LL;

    t82 = (x329&((x330>x331)!=x332));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x334 = INT32_MIN;
	static int32_t x335 = INT32_MAX;
	int32_t x336 = INT32_MAX;

    t83 = (x333&((x334>x335)!=x336));

    if (t83 != 1LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x337 = INT16_MAX;
	static int64_t x338 = 1587696829LL;
	uint32_t x340 = 346947261U;
	static int32_t t84 = 0;

    t84 = (x337&((x338>x339)!=x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = INT32_MIN;
	int32_t x342 = -212;
	int8_t x343 = INT8_MIN;
	volatile int32_t t85 = 29576368;

    t85 = (x341&((x342>x343)!=x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x345 = INT64_MIN;
	int16_t x346 = INT16_MIN;
	int32_t x347 = -290922;
	static volatile int64_t x348 = INT64_MIN;

    t86 = (x345&((x346>x347)!=x348));

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x349 = INT8_MIN;
	static volatile int8_t x350 = -1;
	int64_t x351 = -477836LL;
	volatile int8_t x352 = -1;

    t87 = (x349&((x350>x351)!=x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x353 = -662;
	int32_t x354 = -1;
	static uint64_t x355 = 5231560373221956LLU;
	uint16_t x356 = UINT16_MAX;
	int32_t t88 = 10255770;

    t88 = (x353&((x354>x355)!=x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint32_t x357 = 17U;
	static uint8_t x358 = 3U;
	static int8_t x359 = 0;
	int32_t x360 = -15301;
	static volatile uint32_t t89 = 23528U;

    t89 = (x357&((x358>x359)!=x360));

    if (t89 != 1U) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x361 = INT32_MAX;
	int64_t x362 = INT64_MIN;
	uint16_t x363 = 61U;
	static int64_t x364 = INT64_MIN;
	volatile int32_t t90 = 6514794;

    t90 = (x361&((x362>x363)!=x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int32_t x365 = -1;
	static int64_t x366 = -1LL;
	uint64_t x367 = 229LLU;
	int8_t x368 = 51;
	volatile int32_t t91 = -15;

    t91 = (x365&((x366>x367)!=x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint32_t x370 = UINT32_MAX;
	uint16_t x371 = UINT16_MAX;

    t92 = (x369&((x370>x371)!=x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x374 = INT64_MIN;
	volatile int8_t x375 = INT8_MAX;
	static int64_t x376 = INT64_MIN;
	uint64_t t93 = 279272851662011LLU;

    t93 = (x373&((x374>x375)!=x376));

    if (t93 != 1LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x377 = INT8_MAX;
	uint32_t x378 = 1798538973U;
	int32_t t94 = -10764;

    t94 = (x377&((x378>x379)!=x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x381 = INT32_MIN;
	static uint32_t x382 = 235042U;
	uint64_t x383 = UINT64_MAX;

    t95 = (x381&((x382>x383)!=x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x386 = 29189662568LL;
	int32_t x387 = 1033465086;
	int8_t x388 = -1;
	volatile int32_t t96 = -375677524;

    t96 = (x385&((x386>x387)!=x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t t97 = -496;

    t97 = (x389&((x390>x391)!=x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x393 = -1;
	int16_t x394 = INT16_MIN;
	int32_t x395 = 108200;
	int16_t x396 = INT16_MIN;

    t98 = (x393&((x394>x395)!=x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint16_t x397 = 25009U;
	static int16_t x398 = INT16_MIN;
	uint16_t x399 = 4361U;
	volatile int32_t t99 = -152;

    t99 = (x397&((x398>x399)!=x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = INT16_MIN;
	static uint8_t x402 = 1U;
	static volatile uint32_t x403 = 2U;
	static volatile uint16_t x404 = 0U;

    t100 = (x401&((x402>x403)!=x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x405 = 0U;
	uint64_t x406 = 533752887594LLU;
	int32_t x407 = INT32_MIN;
	uint8_t x408 = 1U;
	int32_t t101 = 10640;

    t101 = (x405&((x406>x407)!=x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x409 = INT8_MAX;
	int32_t x410 = 284666;
	volatile int32_t t102 = -24190884;

    t102 = (x409&((x410>x411)!=x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x413 = INT8_MIN;
	int64_t x415 = -29361LL;
	volatile int32_t t103 = 18598080;

    t103 = (x413&((x414>x415)!=x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x417 = -1;
	static int32_t x419 = 7;
	int8_t x420 = 1;
	volatile int32_t t104 = -16;

    t104 = (x417&((x418>x419)!=x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x421 = -1LL;
	int32_t x422 = INT32_MIN;
	volatile uint32_t x423 = 340750452U;
	volatile int64_t t105 = 243281172402182LL;

    t105 = (x421&((x422>x423)!=x424));

    if (t105 != 1LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x425 = UINT32_MAX;
	int64_t x426 = INT64_MIN;
	uint32_t t106 = 5U;

    t106 = (x425&((x426>x427)!=x428));

    if (t106 != 1U) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x429 = 53U;
	volatile int8_t x430 = 12;
	uint8_t x431 = UINT8_MAX;
	int32_t t107 = -156759;

    t107 = (x429&((x430>x431)!=x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x433 = INT16_MAX;
	volatile int8_t x435 = INT8_MAX;
	static uint16_t x436 = UINT16_MAX;
	int32_t t108 = 12498835;

    t108 = (x433&((x434>x435)!=x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x437 = UINT16_MAX;
	int8_t x438 = 24;
	static volatile uint16_t x440 = UINT16_MAX;
	static int32_t t109 = -26;

    t109 = (x437&((x438>x439)!=x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint64_t x441 = 22050589490120LLU;
	volatile int32_t x442 = -57645005;
	int8_t x443 = INT8_MIN;
	uint64_t x444 = UINT64_MAX;
	volatile uint64_t t110 = 5401922878091372LLU;

    t110 = (x441&((x442>x443)!=x444));

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x446 = INT8_MAX;
	volatile uint64_t x448 = 445594341561405LLU;
	static int32_t t111 = -150544004;

    t111 = (x445&((x446>x447)!=x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x450 = -1;
	static int16_t x452 = INT16_MIN;

    t112 = (x449&((x450>x451)!=x452));

    if (t112 != 1U) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x454 = 1360;
	int8_t x455 = INT8_MIN;
	static volatile int16_t x456 = -123;
	static volatile int32_t t113 = -82322;

    t113 = (x453&((x454>x455)!=x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint64_t x457 = 419653645720085436LLU;
	volatile int16_t x458 = INT16_MIN;
	static volatile uint64_t x459 = 79492443677313LLU;
	uint8_t x460 = 79U;
	static uint64_t t114 = 0LLU;

    t114 = (x457&((x458>x459)!=x460));

    if (t114 != 0LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x461 = UINT8_MAX;
	int16_t x462 = -1327;
	int64_t x463 = INT64_MIN;

    t115 = (x461&((x462>x463)!=x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x465 = INT16_MIN;
	volatile int8_t x466 = INT8_MIN;
	int8_t x467 = INT8_MIN;
	int32_t x468 = -30;
	int32_t t116 = -14;

    t116 = (x465&((x466>x467)!=x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t x469 = 4294;
	int32_t x470 = INT32_MIN;
	static int32_t x471 = INT32_MIN;
	volatile int32_t t117 = -58814835;

    t117 = (x469&((x470>x471)!=x472));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x473 = -82345211;
	int16_t x474 = INT16_MIN;
	int16_t x475 = INT16_MAX;
	uint32_t x476 = UINT32_MAX;

    t118 = (x473&((x474>x475)!=x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int16_t x479 = -3;
	int64_t x480 = 180LL;
	int64_t t119 = -21330LL;

    t119 = (x477&((x478>x479)!=x480));

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x481 = 88U;
	static uint32_t x482 = UINT32_MAX;
	int8_t x483 = INT8_MIN;
	uint16_t x484 = 12U;
	int32_t t120 = -8673010;

    t120 = (x481&((x482>x483)!=x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile int64_t x485 = 216007897523LL;
	int64_t x486 = -1LL;
	uint8_t x487 = UINT8_MAX;
	volatile int64_t t121 = 2666357149878415LL;

    t121 = (x485&((x486>x487)!=x488));

    if (t121 != 1LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x490 = INT64_MAX;
	static uint64_t x491 = 21866LLU;
	static int16_t x492 = INT16_MAX;
	volatile int32_t t122 = 111381501;

    t122 = (x489&((x490>x491)!=x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x494 = INT16_MIN;
	volatile uint16_t x495 = 140U;
	static int16_t x496 = -1;
	int32_t t123 = 1;

    t123 = (x493&((x494>x495)!=x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x497 = INT32_MIN;
	int32_t x499 = -1;
	int32_t t124 = -1803747;

    t124 = (x497&((x498>x499)!=x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int32_t x501 = INT32_MIN;
	volatile int64_t x502 = 3208890LL;
	int64_t x503 = -12658817968125411LL;
	volatile uint16_t x504 = 700U;
	static int32_t t125 = 81;

    t125 = (x501&((x502>x503)!=x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x506 = INT32_MAX;
	uint64_t x507 = 1725679468340LLU;
	static int32_t t126 = 2556;

    t126 = (x505&((x506>x507)!=x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x509 = -148;
	static volatile uint16_t x510 = 16579U;
	int16_t x511 = -2459;
	int8_t x512 = INT8_MIN;
	volatile int32_t t127 = -3280;

    t127 = (x509&((x510>x511)!=x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x513 = INT64_MIN;
	static uint64_t x514 = 1355LLU;
	int16_t x515 = INT16_MAX;
	int8_t x516 = INT8_MIN;
	volatile int64_t t128 = 1043624390432LL;

    t128 = (x513&((x514>x515)!=x516));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x517 = 58443628903337LLU;
	static volatile int64_t x518 = INT64_MIN;
	volatile int64_t x519 = 6759LL;
	static int32_t x520 = INT32_MIN;
	uint64_t t129 = 148LLU;

    t129 = (x517&((x518>x519)!=x520));

    if (t129 != 1LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x521 = INT64_MIN;
	uint32_t x522 = UINT32_MAX;
	static int32_t x523 = -1;
	int8_t x524 = -1;
	volatile int64_t t130 = 1LL;

    t130 = (x521&((x522>x523)!=x524));

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x525 = INT64_MIN;
	static int16_t x526 = -15883;
	static int32_t x527 = -4052;
	int64_t t131 = 25953765058LL;

    t131 = (x525&((x526>x527)!=x528));

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x530 = INT64_MIN;
	int32_t x532 = -1;
	static volatile int32_t t132 = 444712820;

    t132 = (x529&((x530>x531)!=x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x533 = 8LLU;
	uint64_t x534 = 47975219LLU;
	volatile uint64_t x535 = 25LLU;

    t133 = (x533&((x534>x535)!=x536));

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x537 = INT16_MIN;
	int32_t x538 = -42769716;
	uint32_t x539 = 14U;
	int8_t x540 = -32;
	volatile int32_t t134 = -160;

    t134 = (x537&((x538>x539)!=x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x541 = INT32_MIN;
	static volatile int16_t x543 = INT16_MAX;
	int64_t x544 = INT64_MIN;
	volatile int32_t t135 = -82;

    t135 = (x541&((x542>x543)!=x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x545 = INT64_MIN;
	int32_t x547 = -12;

    t136 = (x545&((x546>x547)!=x548));

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x549 = -8;
	int8_t x550 = -47;
	int16_t x551 = -1;
	int32_t x552 = 1426;

    t137 = (x549&((x550>x551)!=x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x553 = -3458483957588892LL;
	volatile int64_t x554 = 13068803LL;
	uint64_t x555 = 54638780LLU;
	uint8_t x556 = 48U;
	volatile int64_t t138 = -2502558179078682LL;

    t138 = (x553&((x554>x555)!=x556));

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x557 = INT16_MIN;
	uint64_t x559 = 5171LLU;
	int16_t x560 = -1;

    t139 = (x557&((x558>x559)!=x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile int16_t x562 = INT16_MAX;
	uint16_t x564 = 1U;
	int32_t t140 = 178464207;

    t140 = (x561&((x562>x563)!=x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x565 = INT16_MIN;
	int16_t x566 = -1039;
	int32_t x567 = INT32_MIN;
	volatile int32_t x568 = 1;
	int32_t t141 = -419;

    t141 = (x565&((x566>x567)!=x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x569 = 7407U;
	int64_t x571 = 0LL;
	int8_t x572 = INT8_MIN;

    t142 = (x569&((x570>x571)!=x572));

    if (t142 != 1U) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x574 = UINT64_MAX;
	static uint8_t x575 = 2U;
	volatile int64_t x576 = INT64_MIN;
	int32_t t143 = 6;

    t143 = (x573&((x574>x575)!=x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x577 = -1;
	volatile int8_t x578 = -1;
	static int64_t x579 = INT64_MIN;
	int32_t x580 = -3252;
	volatile int32_t t144 = -111214;

    t144 = (x577&((x578>x579)!=x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x581 = -1;
	volatile uint32_t x583 = 98U;
	volatile uint16_t x584 = UINT16_MAX;
	volatile int32_t t145 = 967703;

    t145 = (x581&((x582>x583)!=x584));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x585 = 3004644318169LLU;
	int8_t x587 = INT8_MIN;

    t146 = (x585&((x586>x587)!=x588));

    if (t146 != 1LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x589 = 563U;
	uint16_t x590 = 2428U;
	uint16_t x592 = 8U;

    t147 = (x589&((x590>x591)!=x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x594 = UINT8_MAX;
	int64_t x595 = -1LL;
	int32_t t148 = 138;

    t148 = (x593&((x594>x595)!=x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint64_t x597 = 105LLU;
	uint16_t x598 = 1744U;
	int16_t x599 = 0;
	int32_t x600 = -14;

    t149 = (x597&((x598>x599)!=x600));

    if (t149 != 1LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x601 = INT32_MAX;
	uint32_t x602 = UINT32_MAX;
	int8_t x603 = -1;
	static volatile int32_t x604 = 12596610;
	volatile int32_t t150 = -95487997;

    t150 = (x601&((x602>x603)!=x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint64_t x605 = 78962440253420LLU;
	volatile int16_t x606 = 1005;
	uint64_t t151 = 6914721LLU;

    t151 = (x605&((x606>x607)!=x608));

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x609 = 50U;
	volatile int8_t x610 = -1;
	volatile int16_t x611 = 18;
	volatile int32_t t152 = -3;

    t152 = (x609&((x610>x611)!=x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile int64_t x613 = INT64_MIN;
	int16_t x614 = INT16_MIN;
	int32_t x615 = INT32_MIN;
	int64_t x616 = -21967779729LL;
	int64_t t153 = -362LL;

    t153 = (x613&((x614>x615)!=x616));

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int8_t x619 = 1;
	uint8_t x620 = 55U;
	volatile int32_t t154 = -2108511;

    t154 = (x617&((x618>x619)!=x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int32_t x621 = INT32_MAX;
	int16_t x622 = -1;
	int64_t x623 = 59207196005225481LL;
	int32_t t155 = 71;

    t155 = (x621&((x622>x623)!=x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static int8_t x626 = 1;
	static int8_t x627 = -1;
	static int16_t x628 = INT16_MAX;
	volatile int32_t t156 = -121369847;

    t156 = (x625&((x626>x627)!=x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint64_t x629 = UINT64_MAX;
	volatile int32_t x631 = INT32_MIN;
	static int64_t x632 = INT64_MIN;
	volatile uint64_t t157 = 12716LLU;

    t157 = (x629&((x630>x631)!=x632));

    if (t157 != 1LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint64_t x633 = UINT64_MAX;
	int32_t x634 = -1738;
	static uint64_t t158 = 684480998964591LLU;

    t158 = (x633&((x634>x635)!=x636));

    if (t158 != 1LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x637 = -1;
	int64_t x639 = -1102LL;
	int64_t x640 = INT64_MIN;
	static int32_t t159 = 10170231;

    t159 = (x637&((x638>x639)!=x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x641 = 789;
	static int16_t x642 = -605;
	int64_t x644 = -1LL;
	volatile int32_t t160 = -3957537;

    t160 = (x641&((x642>x643)!=x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x645 = -1;
	static uint16_t x647 = 1U;
	static uint16_t x648 = 100U;
	volatile int32_t t161 = -3253;

    t161 = (x645&((x646>x647)!=x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = INT64_MIN;
	int8_t x650 = INT8_MAX;
	volatile int8_t x652 = INT8_MIN;
	int64_t t162 = -17975230027525604LL;

    t162 = (x649&((x650>x651)!=x652));

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x654 = 225LL;
	static int16_t x655 = INT16_MIN;
	int32_t x656 = 972;

    t163 = (x653&((x654>x655)!=x656));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x657 = 12;
	uint8_t x658 = UINT8_MAX;
	int16_t x659 = INT16_MIN;
	int32_t t164 = 297819;

    t164 = (x657&((x658>x659)!=x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x661 = 6;
	int8_t x662 = INT8_MIN;
	static int16_t x664 = INT16_MAX;
	volatile int32_t t165 = -360;

    t165 = (x661&((x662>x663)!=x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint16_t x665 = 7157U;
	int64_t x667 = -1LL;
	static volatile int32_t t166 = 8789382;

    t166 = (x665&((x666>x667)!=x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x669 = -15003;
	int16_t x670 = -468;
	int16_t x672 = 28;
	volatile int32_t t167 = -8025;

    t167 = (x669&((x670>x671)!=x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x673 = -1;
	int32_t x674 = INT32_MIN;
	static int16_t x675 = INT16_MIN;
	int32_t x676 = INT32_MIN;
	volatile int32_t t168 = 0;

    t168 = (x673&((x674>x675)!=x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = 1166;
	int16_t x678 = -2357;
	int64_t x680 = INT64_MAX;
	volatile int32_t t169 = 977128860;

    t169 = (x677&((x678>x679)!=x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x681 = 7369136LLU;
	int8_t x682 = 22;
	uint32_t x683 = 59U;
	uint64_t x684 = UINT64_MAX;
	uint64_t t170 = 139527LLU;

    t170 = (x681&((x682>x683)!=x684));

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x686 = 42407892LLU;
	uint8_t x687 = 1U;
	int8_t x688 = -1;

    t171 = (x685&((x686>x687)!=x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x689 = 16252066U;
	volatile int8_t x690 = INT8_MAX;
	uint8_t x691 = UINT8_MAX;
	volatile uint32_t t172 = 3U;

    t172 = (x689&((x690>x691)!=x692));

    if (t172 != 0U) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x693 = INT16_MAX;
	uint64_t x694 = 5626059757556425564LLU;
	int8_t x696 = -1;

    t173 = (x693&((x694>x695)!=x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x697 = -1;
	volatile uint64_t x699 = UINT64_MAX;
	static int8_t x700 = INT8_MAX;

    t174 = (x697&((x698>x699)!=x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x701 = INT32_MAX;
	uint64_t x702 = UINT64_MAX;
	static int8_t x703 = INT8_MIN;
	int32_t t175 = 26;

    t175 = (x701&((x702>x703)!=x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint16_t x706 = 1248U;
	static int16_t x708 = -1;
	volatile int32_t t176 = -6865323;

    t176 = (x705&((x706>x707)!=x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int64_t x709 = -1LL;
	uint8_t x710 = 1U;
	int32_t x711 = -11;
	int64_t x712 = 2952206503LL;

    t177 = (x709&((x710>x711)!=x712));

    if (t177 != 1LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x713 = 3;
	int8_t x714 = INT8_MAX;
	static int64_t x715 = INT64_MAX;
	static volatile int8_t x716 = INT8_MIN;
	volatile int32_t t178 = -202;

    t178 = (x713&((x714>x715)!=x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x717 = 7;
	uint8_t x719 = 2U;
	volatile int8_t x720 = 26;
	static int32_t t179 = 190;

    t179 = (x717&((x718>x719)!=x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x721 = 2241703646504285919LLU;
	int64_t x722 = -22153946745429LL;

    t180 = (x721&((x722>x723)!=x724));

    if (t180 != 1LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x725 = INT8_MIN;
	int32_t x727 = INT32_MIN;
	int64_t x728 = 2669460395622180LL;
	int32_t t181 = 5397340;

    t181 = (x725&((x726>x727)!=x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x729 = -1;
	static volatile int16_t x730 = 4;
	int64_t x731 = INT64_MAX;
	uint32_t x732 = 7074U;
	int32_t t182 = 87;

    t182 = (x729&((x730>x731)!=x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x734 = -1;
	uint8_t x736 = 3U;
	int64_t t183 = -188742550414LL;

    t183 = (x733&((x734>x735)!=x736));

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x737 = -3;
	int64_t x738 = -1007988876138520LL;
	uint16_t x739 = UINT16_MAX;
	volatile uint32_t x740 = 333269484U;
	int32_t t184 = -5519;

    t184 = (x737&((x738>x739)!=x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x741 = 1LL;
	volatile int64_t x742 = -1LL;
	uint8_t x743 = UINT8_MAX;
	static uint32_t x744 = UINT32_MAX;
	int64_t t185 = 11LL;

    t185 = (x741&((x742>x743)!=x744));

    if (t185 != 1LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int64_t x746 = INT64_MIN;
	int32_t x748 = 267;
	int64_t t186 = 1613852LL;

    t186 = (x745&((x746>x747)!=x748));

    if (t186 != 1LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x749 = 0U;
	static int16_t x751 = INT16_MIN;
	int16_t x752 = INT16_MIN;

    t187 = (x749&((x750>x751)!=x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x753 = INT32_MAX;
	int32_t x755 = -221067;
	uint32_t x756 = UINT32_MAX;

    t188 = (x753&((x754>x755)!=x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x757 = -1;
	uint32_t x759 = 9U;
	int32_t x760 = INT32_MAX;
	static volatile int32_t t189 = -2048;

    t189 = (x757&((x758>x759)!=x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x761 = INT16_MAX;
	volatile int64_t x762 = -1LL;
	int32_t x763 = -76436;
	int8_t x764 = INT8_MIN;

    t190 = (x761&((x762>x763)!=x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint32_t x766 = 694U;
	static volatile int64_t x767 = -1LL;
	uint32_t x768 = UINT32_MAX;
	int32_t t191 = 1220;

    t191 = (x765&((x766>x767)!=x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile int8_t x770 = -1;
	int32_t x771 = INT32_MIN;
	volatile int64_t x772 = INT64_MIN;
	volatile int32_t t192 = 1;

    t192 = (x769&((x770>x771)!=x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x773 = INT16_MIN;
	uint8_t x774 = 52U;
	int16_t x775 = INT16_MAX;
	static int32_t t193 = -14;

    t193 = (x773&((x774>x775)!=x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile int16_t x777 = 8154;
	uint32_t x778 = 441872U;
	static uint64_t x779 = UINT64_MAX;
	volatile int16_t x780 = INT16_MAX;

    t194 = (x777&((x778>x779)!=x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x782 = 205638622U;
	static int64_t x783 = INT64_MIN;

    t195 = (x781&((x782>x783)!=x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x785 = -1LL;
	int32_t x786 = -1;
	uint32_t x787 = 15752U;
	int8_t x788 = INT8_MAX;
	volatile int64_t t196 = -6515615440LL;

    t196 = (x785&((x786>x787)!=x788));

    if (t196 != 1LL) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x789 = INT8_MAX;
	volatile uint64_t x791 = 939606171669288062LLU;
	int32_t t197 = 1043687;

    t197 = (x789&((x790>x791)!=x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x793 = -505;
	int32_t x794 = -27967570;
	static volatile int64_t x795 = 342LL;
	uint8_t x796 = 37U;
	volatile int32_t t198 = 61852143;

    t198 = (x793&((x794>x795)!=x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x798 = INT32_MIN;
	int64_t x799 = INT64_MAX;
	volatile uint64_t t199 = 94174811112538LLU;

    t199 = (x797&((x798>x799)!=x800));

    if (t199 != 0LLU) { NG(); } else { ; }
	
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

