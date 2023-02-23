
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

uint32_t x1 = UINT32_MAX;
uint8_t x2 = UINT8_MAX;
int16_t x7 = INT16_MAX;
volatile int32_t x8 = -1;
int32_t t2 = -7;
static int64_t x19 = 321474LL;
static int64_t t3 = 1LL;
uint8_t x23 = 43U;
int64_t t4 = 56552981LL;
volatile int16_t x26 = 1;
int64_t x37 = INT64_MAX;
volatile uint8_t x42 = 4U;
static int8_t x47 = -1;
int64_t x56 = -1LL;
static int16_t x57 = INT16_MAX;
static volatile uint64_t x59 = 360747219473316LLU;
volatile uint64_t t12 = 4038851980067LLU;
int16_t x67 = INT16_MIN;
int64_t x75 = -279175LL;
uint32_t x76 = 0U;
static int64_t t17 = 1085013540438884462LL;
static uint32_t x83 = 8787U;
int16_t x84 = -175;
static int32_t x86 = -7655;
int16_t x92 = INT16_MIN;
static uint64_t x94 = UINT64_MAX;
volatile int16_t x99 = -1;
static uint64_t x102 = 1196339154LLU;
int32_t x104 = -1;
uint64_t x108 = UINT64_MAX;
volatile uint32_t x115 = 16216U;
int8_t x116 = INT8_MAX;
static uint64_t x118 = 1LLU;
int8_t x120 = -56;
static uint16_t x124 = 452U;
uint64_t x128 = 9LLU;
volatile int32_t t30 = 504;
volatile int8_t x140 = INT8_MIN;
uint16_t x143 = 19834U;
volatile int32_t x148 = 2;
volatile uint16_t x152 = UINT16_MAX;
volatile uint32_t t35 = 23998U;
static volatile uint64_t x155 = UINT64_MAX;
int8_t x161 = INT8_MIN;
volatile int64_t x165 = -5766LL;
volatile int64_t x171 = 25233994820LL;
uint8_t x182 = 59U;
int16_t x183 = -1;
int16_t x193 = -1;
static int64_t x195 = -1LL;
volatile int16_t x197 = INT16_MIN;
uint32_t x198 = UINT32_MAX;
int64_t x202 = INT64_MIN;
volatile int8_t x212 = -1;
int64_t x217 = INT64_MIN;
uint8_t x220 = UINT8_MAX;
int16_t x230 = INT16_MAX;
int8_t x232 = INT8_MIN;
int8_t x233 = 11;
volatile int64_t x235 = -35432LL;
volatile int64_t x240 = INT64_MIN;
int64_t x242 = -876099849909083LL;
volatile int32_t x244 = INT32_MIN;
int64_t t55 = -110214067245737LL;
static int32_t x258 = INT32_MIN;
uint16_t x264 = UINT16_MAX;
int16_t x275 = INT16_MAX;
volatile int32_t x280 = 207;
static volatile int64_t t65 = -141860LL;
int64_t x301 = INT64_MIN;
volatile int64_t x307 = INT64_MIN;
int16_t x312 = INT16_MIN;
int64_t x315 = INT64_MAX;
static int8_t x317 = -56;
volatile int16_t x318 = -92;
volatile int32_t t74 = 7704;
int32_t x321 = INT32_MIN;
volatile int8_t x322 = 39;
uint32_t x323 = 1002U;
int8_t x325 = INT8_MIN;
static int64_t x327 = INT64_MIN;
int64_t x331 = 112651690539LL;
uint64_t t78 = UINT64_MAX;
uint32_t x343 = 18905U;
volatile uint32_t t80 = 114733441U;
volatile int32_t x346 = -1;
uint32_t x351 = 398682U;
static uint32_t x352 = 224865513U;
uint16_t x354 = UINT16_MAX;
int16_t x362 = -1;
uint16_t x363 = 103U;
static uint32_t x371 = UINT32_MAX;
uint64_t x376 = UINT64_MAX;
volatile uint64_t x388 = 35555505742974LLU;
int8_t x390 = -1;
int8_t x392 = -14;
static int16_t x400 = INT16_MAX;
static uint8_t x408 = 0U;
int8_t x414 = 1;
static volatile int64_t t103 = -1862589LL;
int8_t x448 = -5;
int32_t t107 = 31;
uint64_t t109 = 32594157291252LLU;
volatile int8_t x469 = INT8_MIN;
static int32_t x470 = INT32_MIN;
int64_t x474 = INT64_MIN;
static int32_t x481 = -1;
uint8_t x484 = 15U;
uint8_t x488 = UINT8_MAX;
int64_t t114 = 232455433632LL;
int32_t x495 = INT32_MAX;
int32_t x496 = INT32_MIN;
int16_t x498 = INT16_MIN;
int64_t x499 = INT64_MIN;
int64_t t117 = 54450473673LL;
uint32_t x501 = 30384310U;
uint32_t t118 = 30940866U;
int16_t x516 = INT16_MIN;
uint16_t x518 = 157U;
uint32_t x520 = 44549U;
int8_t x524 = 0;
int64_t x527 = -1260637LL;
static uint64_t x538 = UINT64_MAX;
static uint64_t x544 = 566490861203LLU;
static int64_t x545 = INT64_MIN;
uint16_t x547 = 31U;
uint64_t x549 = UINT64_MAX;
static uint64_t t129 = UINT64_MAX;
int64_t x557 = 1LL;
static uint16_t x565 = 6161U;
uint64_t x567 = 4042573LLU;
int32_t x568 = -1;
volatile uint32_t x573 = 1471259825U;
volatile uint64_t x574 = 3137LLU;
static int32_t x575 = -1;
int8_t x588 = INT8_MIN;
static uint16_t x589 = UINT16_MAX;
int32_t x591 = -1;
static int32_t x592 = -509376447;
int64_t x595 = INT64_MAX;
volatile int32_t x596 = -1;
uint16_t x598 = 600U;
int16_t x599 = INT16_MAX;
int8_t x600 = INT8_MIN;
static uint64_t t141 = UINT64_MAX;
int8_t x608 = -7;
static volatile int32_t x609 = -1;
int64_t x615 = -1LL;
int64_t x617 = INT64_MAX;
static uint32_t x623 = 58U;
int64_t x629 = -1LL;
static uint64_t x637 = 27LLU;
int32_t x638 = 2981185;
uint64_t t152 = 5LLU;
static int8_t x653 = -18;
volatile uint32_t x657 = UINT32_MAX;
int8_t x665 = INT8_MIN;
int16_t x670 = INT16_MAX;
int64_t x677 = INT64_MIN;
int64_t t161 = 558546775445LL;
int32_t x682 = INT32_MAX;
volatile int8_t x684 = 0;
int32_t t162 = -571354084;
int16_t x685 = -9;
uint8_t x688 = 0U;
uint64_t t164 = 13708744LLU;
uint32_t x693 = 54261887U;
int32_t t166 = 122436776;
volatile int64_t x701 = -223368102375955LL;
static volatile int64_t x702 = 1LL;
int8_t x711 = INT8_MIN;
uint32_t x715 = 2308306U;
uint32_t t170 = 7U;
int8_t x722 = INT8_MAX;
int8_t x724 = 8;
volatile uint32_t t172 = 290327120U;
volatile int32_t x725 = -130482707;
int16_t x739 = INT16_MIN;
int8_t x742 = INT8_MIN;
volatile uint16_t x743 = UINT16_MAX;
int64_t x744 = 10484LL;
int16_t x749 = INT16_MIN;
uint8_t x758 = 1U;
int8_t x763 = INT8_MAX;
int16_t x771 = INT16_MIN;
volatile uint32_t t183 = 6710U;
volatile int8_t x776 = -11;
int16_t x781 = 1767;
static int32_t x782 = 5012191;
int16_t x784 = INT16_MIN;
static volatile int32_t t186 = -1734;
uint16_t x792 = 1088U;
int32_t x802 = 8854743;
int32_t x806 = INT32_MAX;
int16_t x808 = 159;
int8_t x812 = INT8_MAX;
static volatile uint8_t x822 = 36U;
static int32_t x824 = INT32_MAX;
volatile uint32_t x844 = UINT32_MAX;


void f0(void) {
    	int8_t x3 = INT8_MAX;
	static volatile uint64_t x4 = UINT64_MAX;
	volatile uint64_t t0 = 71279082025602LLU;

    t0 = (x1|((x2%x3)-x4));

    if (t0 != 4294967295LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MAX;
	int8_t x6 = INT8_MAX;
	int32_t t1 = 47256;

    t1 = (x5|((x6%x7)-x8));

    if (t1 != 32767) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint16_t x9 = UINT16_MAX;
	int16_t x10 = -1;
	uint16_t x11 = 753U;
	int16_t x12 = -1;

    t2 = (x9|((x10%x11)-x12));

    if (t2 != 65535) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x17 = INT64_MIN;
	int64_t x18 = -161153176LL;
	static volatile uint16_t x20 = UINT16_MAX;

    t3 = (x17|((x18%x19)-x20));

    if (t3 != -160237LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int8_t x21 = INT8_MIN;
	static int64_t x22 = 116573LL;
	int32_t x24 = INT32_MAX;

    t4 = (x21|((x22%x23)-x24));

    if (t4 != -127LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x25 = 0;
	static uint16_t x27 = 4911U;
	int16_t x28 = -8868;
	int32_t t5 = -1663;

    t5 = (x25|((x26%x27)-x28));

    if (t5 != 8869) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x33 = -1;
	int64_t x34 = INT64_MIN;
	uint32_t x35 = UINT32_MAX;
	volatile int16_t x36 = -1;
	int64_t t6 = 1LL;

    t6 = (x33|((x34%x35)-x36));

    if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x38 = INT32_MIN;
	uint8_t x39 = 62U;
	volatile int64_t x40 = -1LL;
	int64_t t7 = 1LL;

    t7 = (x37|((x38%x39)-x40));

    if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x41 = INT16_MIN;
	int64_t x43 = -1LL;
	static volatile uint16_t x44 = 15138U;
	volatile int64_t t8 = 211LL;

    t8 = (x41|((x42%x43)-x44));

    if (t8 != -15138LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x45 = INT64_MIN;
	int16_t x46 = -1;
	uint16_t x48 = 274U;
	volatile int64_t t9 = 265479924238042LL;

    t9 = (x45|((x46%x47)-x48));

    if (t9 != -274LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x49 = 2265939264387LL;
	volatile uint64_t x50 = 8557580716571625410LLU;
	uint16_t x51 = 55U;
	int32_t x52 = 10;
	volatile uint64_t t10 = 42563916586LLU;

    t10 = (x49|((x50%x51)-x52));

    if (t10 != 2265939264419LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x53 = INT16_MIN;
	static uint16_t x54 = 29U;
	static int32_t x55 = -1;
	int64_t t11 = -107217842294LL;

    t11 = (x53|((x54%x55)-x56));

    if (t11 != -32767LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x58 = -1;
	int32_t x60 = -199;

    t12 = (x57|((x58%x59)-x60));

    if (t12 != 295753161015295LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x61 = INT16_MIN;
	int64_t x62 = INT64_MIN;
	uint16_t x63 = 438U;
	int8_t x64 = -35;
	int64_t t13 = 174406LL;

    t13 = (x61|((x62%x63)-x64));

    if (t13 != -39LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x65 = 9107;
	static int64_t x66 = INT64_MIN;
	int64_t x68 = -6035LL;
	static volatile int64_t t14 = -12374897574LL;

    t14 = (x65|((x66%x67)-x68));

    if (t14 != 14227LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x69 = UINT8_MAX;
	int8_t x70 = INT8_MAX;
	volatile int8_t x71 = 3;
	int16_t x72 = -1;
	static volatile int32_t t15 = -1827020;

    t15 = (x69|((x70%x71)-x72));

    if (t15 != 255) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint8_t x73 = UINT8_MAX;
	int8_t x74 = INT8_MIN;
	volatile int64_t t16 = 24848LL;

    t16 = (x73|((x74%x75)-x76));

    if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x77 = INT16_MAX;
	uint16_t x78 = UINT16_MAX;
	int64_t x79 = INT64_MIN;
	int64_t x80 = INT64_MAX;

    t17 = (x77|((x78%x79)-x80));

    if (t17 != -9223372036854677505LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x81 = 1U;
	volatile uint16_t x82 = UINT16_MAX;
	uint32_t t18 = 393255456U;

    t18 = (x81|((x82%x83)-x84));

    if (t18 != 4201U) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x85 = -1LL;
	int64_t x87 = INT64_MAX;
	static int64_t x88 = -81LL;
	static int64_t t19 = 15541LL;

    t19 = (x85|((x86%x87)-x88));

    if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x89 = 13;
	int32_t x90 = -1;
	int8_t x91 = INT8_MIN;
	volatile int32_t t20 = -36337;

    t20 = (x89|((x90%x91)-x92));

    if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint64_t x93 = 326751LLU;
	int32_t x95 = INT32_MIN;
	int16_t x96 = 2789;
	uint64_t t21 = 225LLU;

    t21 = (x93|((x94%x95)-x96));

    if (t21 != 2147482975LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x97 = 2;
	int64_t x98 = -2093959210985LL;
	volatile int16_t x100 = INT16_MIN;
	static volatile int64_t t22 = -27LL;

    t22 = (x97|((x98%x99)-x100));

    if (t22 != 32770LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x101 = 14933U;
	int32_t x103 = INT32_MIN;
	uint64_t t23 = 12LLU;

    t23 = (x101|((x102%x103)-x104));

    if (t23 != 1196343255LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x105 = 14499373053672LLU;
	int8_t x106 = INT8_MIN;
	int16_t x107 = INT16_MIN;
	uint64_t t24 = 8851051980636323LLU;

    t24 = (x105|((x106%x107)-x108));

    if (t24 != 18446744073709551593LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x109 = INT16_MAX;
	uint8_t x110 = 26U;
	volatile uint16_t x111 = 9062U;
	int8_t x112 = INT8_MIN;
	volatile int32_t t25 = 1495951;

    t25 = (x109|((x110%x111)-x112));

    if (t25 != 32767) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x113 = 2U;
	int8_t x114 = INT8_MIN;
	uint32_t t26 = 2U;

    t26 = (x113|((x114%x115)-x116));

    if (t26 != 13499U) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x117 = 47369413;
	int32_t x119 = -1;
	uint64_t t27 = 3592379LLU;

    t27 = (x117|((x118%x119)-x120));

    if (t27 != 47369469LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int16_t x121 = INT16_MIN;
	int8_t x122 = -1;
	uint64_t x123 = UINT64_MAX;
	volatile uint64_t t28 = 3277453502LLU;

    t28 = (x121|((x122%x123)-x124));

    if (t28 != 18446744073709551164LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x125 = -1;
	int32_t x126 = INT32_MIN;
	static int16_t x127 = INT16_MAX;
	volatile uint64_t t29 = UINT64_MAX;

    t29 = (x125|((x126%x127)-x128));

    if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x129 = 11196U;
	int8_t x130 = -1;
	static int16_t x131 = INT16_MIN;
	volatile int8_t x132 = -1;

    t30 = (x129|((x130%x131)-x132));

    if (t30 != 11196) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x133 = 0;
	static int32_t x134 = -1;
	uint16_t x135 = UINT16_MAX;
	volatile uint8_t x136 = 3U;
	volatile int32_t t31 = -1;

    t31 = (x133|((x134%x135)-x136));

    if (t31 != -4) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile int16_t x137 = INT16_MIN;
	static uint16_t x138 = 130U;
	static int8_t x139 = INT8_MIN;
	int32_t t32 = 228497511;

    t32 = (x137|((x138%x139)-x140));

    if (t32 != -32638) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x141 = 4;
	uint8_t x142 = 69U;
	static int64_t x144 = INT64_MAX;
	static int64_t t33 = 3079119LL;

    t33 = (x141|((x142%x143)-x144));

    if (t33 != -9223372036854775738LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x145 = -1;
	int8_t x146 = INT8_MIN;
	int64_t x147 = INT64_MIN;
	volatile int64_t t34 = 57LL;

    t34 = (x145|((x146%x147)-x148));

    if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x149 = INT32_MIN;
	uint32_t x150 = 256722333U;
	volatile int16_t x151 = INT16_MIN;

    t35 = (x149|((x150%x151)-x152));

    if (t35 != 2404140446U) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x153 = -1;
	volatile int32_t x154 = -15186096;
	volatile int64_t x156 = INT64_MIN;
	static uint64_t t36 = UINT64_MAX;

    t36 = (x153|((x154%x155)-x156));

    if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x157 = INT64_MIN;
	int64_t x158 = 0LL;
	uint32_t x159 = 539933U;
	int64_t x160 = -15713LL;
	int64_t t37 = 13356LL;

    t37 = (x157|((x158%x159)-x160));

    if (t37 != -9223372036854760095LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x162 = -1;
	int16_t x163 = -1;
	uint8_t x164 = 1U;
	int32_t t38 = -193403719;

    t38 = (x161|((x162%x163)-x164));

    if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x166 = -1;
	volatile int16_t x167 = INT16_MAX;
	int32_t x168 = 4134564;
	volatile int64_t t39 = 3305710666112048LL;

    t39 = (x165|((x166%x167)-x168));

    if (t39 != -5765LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x169 = INT16_MAX;
	int8_t x170 = INT8_MIN;
	int16_t x172 = -796;
	static int64_t t40 = 19984369LL;

    t40 = (x169|((x170%x171)-x172));

    if (t40 != 32767LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x173 = -1;
	volatile uint8_t x174 = 7U;
	int64_t x175 = 75812LL;
	volatile uint16_t x176 = 12U;
	static volatile int64_t t41 = 1LL;

    t41 = (x173|((x174%x175)-x176));

    if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x177 = -6;
	uint64_t x178 = UINT64_MAX;
	volatile uint32_t x179 = UINT32_MAX;
	int16_t x180 = -3358;
	uint64_t t42 = 1071874LLU;

    t42 = (x177|((x178%x179)-x180));

    if (t42 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x181 = -1919;
	static uint32_t x184 = 30791497U;
	static uint32_t t43 = 212U;

    t43 = (x181|((x182%x183)-x184));

    if (t43 != 4294965431U) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint8_t x189 = 9U;
	static uint8_t x190 = UINT8_MAX;
	int16_t x191 = -1;
	uint64_t x192 = 497654611LLU;
	volatile uint64_t t44 = 8157739LLU;

    t44 = (x189|((x190%x191)-x192));

    if (t44 != 18446744073211897005LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x194 = -1;
	volatile int64_t x196 = -3386981379964905127LL;
	int64_t t45 = 3664577834174790148LL;

    t45 = (x193|((x194%x195)-x196));

    if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x199 = 1864;
	int8_t x200 = INT8_MAX;
	volatile uint32_t t46 = 40951U;

    t46 = (x197|((x198%x199)-x200));

    if (t46 != 4294967176U) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint16_t x201 = 6680U;
	uint8_t x203 = 2U;
	int16_t x204 = -5154;
	static volatile int64_t t47 = -28727430226496LL;

    t47 = (x201|((x202%x203)-x204));

    if (t47 != 7738LL) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x209 = INT32_MIN;
	int32_t x210 = INT32_MIN;
	uint16_t x211 = 23U;
	int32_t t48 = -213;

    t48 = (x209|((x210%x211)-x212));

    if (t48 != -5) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x213 = 944U;
	static int64_t x214 = INT64_MIN;
	int32_t x215 = INT32_MIN;
	int16_t x216 = INT16_MIN;
	volatile int64_t t49 = -2464981593120610416LL;

    t49 = (x213|((x214%x215)-x216));

    if (t49 != 33712LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x218 = 499940U;
	uint64_t x219 = 490328794100384231LLU;
	uint64_t t50 = 3641050750156998563LLU;

    t50 = (x217|((x218%x219)-x220));

    if (t50 != 9223372036855275493LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x225 = 23;
	uint16_t x226 = UINT16_MAX;
	volatile uint8_t x227 = 39U;
	int16_t x228 = INT16_MIN;
	int32_t t51 = 21;

    t51 = (x225|((x226%x227)-x228));

    if (t51 != 32799) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x229 = 887973928LL;
	volatile int64_t x231 = -2992981204772018870LL;
	volatile int64_t t52 = 543LL;

    t52 = (x229|((x230%x231)-x232));

    if (t52 != 888006783LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x234 = 5U;
	int8_t x236 = 0;
	volatile int64_t t53 = 38LL;

    t53 = (x233|((x234%x235)-x236));

    if (t53 != 15LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x237 = UINT32_MAX;
	volatile int16_t x238 = -1;
	static int64_t x239 = INT64_MAX;
	int64_t t54 = INT64_MAX;

    t54 = (x237|((x238%x239)-x240));

    if (t54 != INT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x241 = -3;
	volatile uint32_t x243 = 27333479U;

    t55 = (x241|((x242%x243)-x244));

    if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x245 = 33;
	uint64_t x246 = 43LLU;
	static uint64_t x247 = 6146038112665029LLU;
	int8_t x248 = INT8_MIN;
	uint64_t t56 = 1252LLU;

    t56 = (x245|((x246%x247)-x248));

    if (t56 != 171LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x249 = INT8_MIN;
	static int32_t x250 = -1158905;
	int16_t x251 = INT16_MIN;
	volatile int64_t x252 = INT64_MIN;
	int64_t t57 = -6394289705LL;

    t57 = (x249|((x250%x251)-x252));

    if (t57 != -121LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x253 = 57768LLU;
	volatile uint32_t x254 = 361693U;
	int32_t x255 = INT32_MIN;
	uint64_t x256 = UINT64_MAX;
	volatile uint64_t t58 = 13855790128311601LLU;

    t58 = (x253|((x254%x255)-x256));

    if (t58 != 386558LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x257 = -1;
	int16_t x259 = INT16_MIN;
	volatile int16_t x260 = -47;
	volatile int32_t t59 = 0;

    t59 = (x257|((x258%x259)-x260));

    if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x261 = 21810578LL;
	uint64_t x262 = 5218128683718996LLU;
	int64_t x263 = -517752802LL;
	uint64_t t60 = 27477544707499402LLU;

    t60 = (x261|((x262%x263)-x264));

    if (t60 != 5218128705150423LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile uint8_t x265 = UINT8_MAX;
	uint64_t x266 = 127587059LLU;
	uint64_t x267 = 1LLU;
	int8_t x268 = INT8_MIN;
	volatile uint64_t t61 = 45927730527176795LLU;

    t61 = (x265|((x266%x267)-x268));

    if (t61 != 255LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x269 = INT64_MIN;
	uint32_t x270 = UINT32_MAX;
	static int32_t x271 = -1;
	static uint8_t x272 = 42U;
	static volatile int64_t t62 = 709376256528354LL;

    t62 = (x269|((x270%x271)-x272));

    if (t62 != -9223372032559808554LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x273 = 14853413970131912LL;
	static int64_t x274 = INT64_MIN;
	volatile int16_t x276 = INT16_MAX;
	volatile int64_t t63 = 5540891774399822LL;

    t63 = (x273|((x274%x275)-x276));

    if (t63 != -32775LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int16_t x277 = -1;
	int64_t x278 = -1LL;
	int16_t x279 = INT16_MAX;
	int64_t t64 = -2075219LL;

    t64 = (x277|((x278%x279)-x280));

    if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x281 = -1;
	int64_t x282 = INT64_MIN;
	volatile int64_t x283 = 498LL;
	int32_t x284 = INT32_MAX;

    t65 = (x281|((x282%x283)-x284));

    if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x285 = -1;
	static int8_t x286 = INT8_MAX;
	uint64_t x287 = 2279966220448157742LLU;
	volatile int8_t x288 = 0;
	volatile uint64_t t66 = UINT64_MAX;

    t66 = (x285|((x286%x287)-x288));

    if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x289 = UINT32_MAX;
	int16_t x290 = INT16_MIN;
	static volatile int64_t x291 = 51101747053LL;
	uint8_t x292 = 27U;
	volatile int64_t t67 = -40126027564105LL;

    t67 = (x289|((x290%x291)-x292));

    if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x293 = INT16_MIN;
	int16_t x294 = INT16_MIN;
	volatile int8_t x295 = -1;
	volatile int64_t x296 = 10958551745670LL;
	int64_t t68 = 538801518292LL;

    t68 = (x293|((x294%x295)-x296));

    if (t68 != -1158LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x297 = INT64_MAX;
	uint32_t x298 = 41U;
	int32_t x299 = INT32_MAX;
	volatile int8_t x300 = INT8_MAX;
	static volatile int64_t t69 = INT64_MAX;

    t69 = (x297|((x298%x299)-x300));

    if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x302 = INT32_MIN;
	static int16_t x303 = 2599;
	int8_t x304 = INT8_MIN;
	volatile int64_t t70 = 556LL;

    t70 = (x301|((x302%x303)-x304));

    if (t70 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x305 = 746598101;
	int32_t x306 = INT32_MIN;
	uint64_t x308 = 29204348475808LLU;
	volatile uint64_t t71 = 157827756LLU;

    t71 = (x305|((x306%x307)-x308));

    if (t71 != 18446714867893071605LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x309 = INT16_MAX;
	int64_t x310 = INT64_MIN;
	uint32_t x311 = 26957915U;
	int64_t t72 = 151674LL;

    t72 = (x309|((x310%x311)-x312));

    if (t72 != -2555905LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x313 = INT8_MAX;
	int16_t x314 = -1;
	int32_t x316 = -1;
	int64_t t73 = 1LL;

    t73 = (x313|((x314%x315)-x316));

    if (t73 != 127LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x319 = 92U;
	static int32_t x320 = -1211;

    t74 = (x317|((x318%x319)-x320));

    if (t74 != -5) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x324 = INT16_MAX;
	volatile uint32_t t75 = 746U;

    t75 = (x321|((x322%x323)-x324));

    if (t75 != 4294934568U) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x326 = INT8_MIN;
	static volatile int32_t x328 = -32212212;
	int64_t t76 = -1042LL;

    t76 = (x325|((x326%x327)-x328));

    if (t76 != -12LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint16_t x329 = 582U;
	volatile int64_t x330 = -627049554299588808LL;
	static int16_t x332 = -1;
	int64_t t77 = -93572685826905163LL;

    t77 = (x329|((x330%x331)-x332));

    if (t77 != -54106450353LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x333 = INT32_MAX;
	static int32_t x334 = INT32_MIN;
	volatile int64_t x335 = INT64_MAX;
	uint64_t x336 = UINT64_MAX;

    t78 = (x333|((x334%x335)-x336));

    if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x337 = INT16_MAX;
	static int64_t x338 = INT64_MIN;
	int8_t x339 = -1;
	volatile uint16_t x340 = 29475U;
	volatile int64_t t79 = -380936419542158047LL;

    t79 = (x337|((x338%x339)-x340));

    if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x341 = INT16_MIN;
	static int8_t x342 = -1;
	static volatile uint32_t x344 = 470288529U;

    t80 = (x341|((x342%x343)-x344));

    if (t80 != 4294948300U) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x345 = 1364LL;
	uint16_t x347 = UINT16_MAX;
	uint8_t x348 = 1U;
	volatile int64_t t81 = -428472172994323LL;

    t81 = (x345|((x346%x347)-x348));

    if (t81 != -2LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x349 = INT32_MIN;
	static int16_t x350 = INT16_MIN;
	static volatile uint32_t t82 = 1271006U;

    t82 = (x349|((x350%x351)-x352));

    if (t82 != 4070433807U) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x353 = -1LL;
	volatile int32_t x355 = INT32_MAX;
	int16_t x356 = INT16_MIN;
	int64_t t83 = 54310LL;

    t83 = (x353|((x354%x355)-x356));

    if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x357 = INT64_MIN;
	static uint64_t x358 = UINT64_MAX;
	static int32_t x359 = INT32_MAX;
	int8_t x360 = INT8_MIN;
	volatile uint64_t t84 = 458345LLU;

    t84 = (x357|((x358%x359)-x360));

    if (t84 != 9223372036854775939LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint16_t x361 = UINT16_MAX;
	uint32_t x364 = 93113U;
	uint32_t t85 = 1860U;

    t85 = (x361|((x362%x363)-x364));

    if (t85 != 4294901759U) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x365 = INT32_MAX;
	uint16_t x366 = UINT16_MAX;
	static uint64_t x367 = 270567LLU;
	uint32_t x368 = 14U;
	volatile uint64_t t86 = 1044799755083LLU;

    t86 = (x365|((x366%x367)-x368));

    if (t86 != 2147483647LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x369 = -6269800LL;
	volatile uint64_t x370 = 1454LLU;
	int8_t x372 = INT8_MAX;
	static volatile uint64_t t87 = 102604738641LLU;

    t87 = (x369|((x370%x371)-x372));

    if (t87 != 18446744073703282111LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint32_t x373 = 128U;
	int64_t x374 = INT64_MIN;
	static uint64_t x375 = UINT64_MAX;
	uint64_t t88 = 11684101544455637LLU;

    t88 = (x373|((x374%x375)-x376));

    if (t88 != 9223372036854775937LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint16_t x377 = UINT16_MAX;
	static int16_t x378 = -801;
	int8_t x379 = INT8_MIN;
	int8_t x380 = 2;
	volatile int32_t t89 = 20;

    t89 = (x377|((x378%x379)-x380));

    if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x381 = 30;
	volatile uint16_t x382 = 2U;
	int8_t x383 = INT8_MAX;
	uint64_t x384 = 130166556836LLU;
	uint64_t t90 = 94360280297LLU;

    t90 = (x381|((x382%x383)-x384));

    if (t90 != 18446743943542994782LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x385 = INT16_MIN;
	int8_t x386 = INT8_MAX;
	uint16_t x387 = 2080U;
	static volatile uint64_t t91 = 64LLU;

    t91 = (x385|((x386%x387)-x388));

    if (t91 != 18446744073709542401LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint8_t x389 = UINT8_MAX;
	int64_t x391 = -1LL;
	static volatile int64_t t92 = 43LL;

    t92 = (x389|((x390%x391)-x392));

    if (t92 != 255LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x393 = INT8_MIN;
	uint64_t x394 = UINT64_MAX;
	int32_t x395 = INT32_MIN;
	static int16_t x396 = -1;
	static volatile uint64_t t93 = 47088954946350LLU;

    t93 = (x393|((x394%x395)-x396));

    if (t93 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x397 = 9;
	volatile int32_t x398 = 225578946;
	static uint8_t x399 = 94U;
	volatile int32_t t94 = 12224704;

    t94 = (x397|((x398%x399)-x400));

    if (t94 != -32757) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int16_t x401 = INT16_MIN;
	int64_t x402 = -1LL;
	uint32_t x403 = 11U;
	volatile int8_t x404 = 10;
	int64_t t95 = -1131477501902605868LL;

    t95 = (x401|((x402%x403)-x404));

    if (t95 != -11LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x405 = 1;
	int32_t x406 = INT32_MIN;
	uint64_t x407 = 264920979LLU;
	uint64_t t96 = 62278378956850888LLU;

    t96 = (x405|((x406%x407)-x408));

    if (t96 != 8974649LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x409 = INT32_MAX;
	volatile int64_t x410 = INT64_MAX;
	int64_t x411 = INT64_MIN;
	static uint16_t x412 = UINT16_MAX;
	int64_t t97 = INT64_MAX;

    t97 = (x409|((x410%x411)-x412));

    if (t97 != INT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x413 = UINT16_MAX;
	volatile uint16_t x415 = 5U;
	static int32_t x416 = -1;
	volatile int32_t t98 = -1;

    t98 = (x413|((x414%x415)-x416));

    if (t98 != 65535) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x417 = -16482239696163LL;
	volatile uint64_t x418 = UINT64_MAX;
	uint32_t x419 = 703591767U;
	int64_t x420 = INT64_MAX;
	uint64_t t99 = 3457684189LLU;

    t99 = (x417|((x418%x419)-x420));

    if (t99 != 18446727591503429631LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x421 = -1;
	int32_t x422 = INT32_MIN;
	int64_t x423 = 66401562064LL;
	volatile int16_t x424 = 65;
	int64_t t100 = -732LL;

    t100 = (x421|((x422%x423)-x424));

    if (t100 != -1LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x425 = INT64_MIN;
	int8_t x426 = INT8_MIN;
	int64_t x427 = INT64_MAX;
	int32_t x428 = INT32_MAX;
	volatile int64_t t101 = 1960777092868LL;

    t101 = (x425|((x426%x427)-x428));

    if (t101 != -2147483775LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x429 = 5U;
	int32_t x430 = 5328523;
	volatile int8_t x431 = -1;
	static int16_t x432 = -1;
	volatile int32_t t102 = -8282356;

    t102 = (x429|((x430%x431)-x432));

    if (t102 != 5) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int64_t x433 = -1LL;
	int8_t x434 = -1;
	uint16_t x435 = 7U;
	uint16_t x436 = UINT16_MAX;

    t103 = (x433|((x434%x435)-x436));

    if (t103 != -1LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x441 = INT8_MAX;
	int64_t x442 = INT64_MIN;
	int64_t x443 = INT64_MIN;
	int32_t x444 = 1013945;
	static volatile int64_t t104 = -319358747LL;

    t104 = (x441|((x442%x443)-x444));

    if (t104 != -1013889LL) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint32_t x445 = 42214U;
	volatile uint8_t x446 = UINT8_MAX;
	int8_t x447 = INT8_MAX;
	static volatile uint32_t t105 = 1U;

    t105 = (x445|((x446%x447)-x448));

    if (t105 != 42214U) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint16_t x449 = UINT16_MAX;
	uint16_t x450 = UINT16_MAX;
	int64_t x451 = INT64_MIN;
	static int64_t x452 = -1LL;
	int64_t t106 = -260414269987LL;

    t106 = (x449|((x450%x451)-x452));

    if (t106 != 131071LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x457 = INT8_MIN;
	int16_t x458 = 4140;
	int16_t x459 = INT16_MIN;
	uint16_t x460 = UINT16_MAX;

    t107 = (x457|((x458%x459)-x460));

    if (t107 != -83) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x461 = UINT8_MAX;
	uint64_t x462 = UINT64_MAX;
	int64_t x463 = 1049147329125LL;
	int8_t x464 = 1;
	uint64_t t108 = 825720347LLU;

    t108 = (x461|((x462%x463)-x464));

    if (t108 != 998899681023LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x465 = INT8_MIN;
	int64_t x466 = INT64_MIN;
	static uint64_t x467 = 1LLU;
	uint8_t x468 = UINT8_MAX;

    t109 = (x465|((x466%x467)-x468));

    if (t109 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x471 = INT8_MIN;
	static volatile uint32_t x472 = 3811856U;
	static volatile uint32_t t110 = 7638441U;

    t110 = (x469|((x470%x471)-x472));

    if (t110 != 4294967280U) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x473 = 3600949U;
	uint16_t x475 = UINT16_MAX;
	uint32_t x476 = 436513143U;
	int64_t t111 = 42078LL;

    t111 = (x473|((x474%x475)-x476));

    if (t111 != -436275523LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x477 = INT32_MAX;
	int8_t x478 = INT8_MAX;
	volatile int16_t x479 = -2107;
	volatile int8_t x480 = INT8_MAX;
	static int32_t t112 = INT32_MAX;

    t112 = (x477|((x478%x479)-x480));

    if (t112 != INT32_MAX) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x482 = UINT64_MAX;
	uint16_t x483 = UINT16_MAX;
	volatile uint64_t t113 = UINT64_MAX;

    t113 = (x481|((x482%x483)-x484));

    if (t113 != UINT64_MAX) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile int64_t x485 = -1LL;
	int64_t x486 = INT64_MAX;
	int16_t x487 = 1;

    t114 = (x485|((x486%x487)-x488));

    if (t114 != -1LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x489 = 0;
	int64_t x490 = INT64_MIN;
	uint32_t x491 = 159133232U;
	volatile uint64_t x492 = UINT64_MAX;
	volatile uint64_t t115 = 389036996LLU;

    t115 = (x489|((x490%x491)-x492));

    if (t115 != 18446744073596798609LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x493 = INT16_MIN;
	static int64_t x494 = INT64_MIN;
	int64_t t116 = 4431470434767LL;

    t116 = (x493|((x494%x495)-x496));

    if (t116 != -2LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x497 = -350;
	int64_t x500 = 6368037177159533LL;

    t117 = (x497|((x498%x499)-x500));

    if (t117 != -333LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int8_t x502 = 1;
	static uint32_t x503 = 7163550U;
	uint8_t x504 = 1U;

    t118 = (x501|((x502%x503)-x504));

    if (t118 != 30384310U) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x509 = 0;
	static int16_t x510 = INT16_MIN;
	static uint16_t x511 = 10436U;
	static volatile uint64_t x512 = 2994369LLU;
	volatile uint64_t t119 = 294221473162494LLU;

    t119 = (x509|((x510%x511)-x512));

    if (t119 != 18446744073706555787LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x513 = INT32_MIN;
	static int64_t x514 = INT64_MAX;
	static volatile int32_t x515 = INT32_MIN;
	int64_t t120 = -58274244LL;

    t120 = (x513|((x514%x515)-x516));

    if (t120 != -2147450881LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x517 = INT64_MIN;
	uint64_t x519 = 575906544147596522LLU;
	volatile uint64_t t121 = 173569LLU;

    t121 = (x517|((x518%x519)-x520));

    if (t121 != 18446744073709507224LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint16_t x521 = UINT16_MAX;
	volatile int8_t x522 = INT8_MIN;
	volatile int8_t x523 = INT8_MIN;
	int32_t t122 = -34030477;

    t122 = (x521|((x522%x523)-x524));

    if (t122 != 65535) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint64_t x525 = 980288LLU;
	int16_t x526 = INT16_MAX;
	uint8_t x528 = UINT8_MAX;
	volatile uint64_t t123 = 5890885878LLU;

    t123 = (x525|((x526%x527)-x528));

    if (t123 != 982848LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint8_t x529 = UINT8_MAX;
	int16_t x530 = -1;
	int64_t x531 = INT64_MIN;
	uint64_t x532 = 700870833623392232LLU;
	uint64_t t124 = 60305600019LLU;

    t124 = (x529|((x530%x531)-x532));

    if (t124 != 17745873240086159615LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x533 = UINT64_MAX;
	static int8_t x534 = 0;
	int8_t x535 = INT8_MIN;
	static uint8_t x536 = 13U;
	uint64_t t125 = UINT64_MAX;

    t125 = (x533|((x534%x535)-x536));

    if (t125 != UINT64_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x537 = -1LL;
	uint64_t x539 = 174569145657LLU;
	int64_t x540 = INT64_MIN;
	volatile uint64_t t126 = UINT64_MAX;

    t126 = (x537|((x538%x539)-x540));

    if (t126 != UINT64_MAX) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x541 = 25764511719436LLU;
	int8_t x542 = 10;
	volatile uint32_t x543 = 28974U;
	uint64_t t127 = 5133853330LLU;

    t127 = (x541|((x542%x543)-x544));

    if (t127 != 18446743519098040703LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint32_t x546 = 2U;
	int8_t x548 = INT8_MAX;
	volatile int64_t t128 = 241358992801418060LL;

    t128 = (x545|((x546%x547)-x548));

    if (t128 != -9223372032559808637LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x550 = -8220LL;
	volatile int32_t x551 = -227071;
	uint32_t x552 = 1504175489U;

    t129 = (x549|((x550%x551)-x552));

    if (t129 != UINT64_MAX) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x553 = -14;
	int64_t x554 = INT64_MIN;
	int16_t x555 = INT16_MIN;
	uint8_t x556 = UINT8_MAX;
	int64_t t130 = 72753LL;

    t130 = (x553|((x554%x555)-x556));

    if (t130 != -13LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x558 = INT16_MAX;
	int8_t x559 = -29;
	volatile int16_t x560 = INT16_MIN;
	static int64_t t131 = 1LL;

    t131 = (x557|((x558%x559)-x560));

    if (t131 != 32795LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x561 = INT32_MIN;
	int16_t x562 = INT16_MIN;
	int16_t x563 = INT16_MIN;
	uint16_t x564 = 18U;
	int32_t t132 = 1;

    t132 = (x561|((x562%x563)-x564));

    if (t132 != -18) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x566 = -73;
	volatile uint64_t t133 = 234177669210LLU;

    t133 = (x565|((x566%x567)-x568));

    if (t133 != 2030559LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x569 = INT32_MIN;
	int32_t x570 = 3132812;
	volatile uint64_t x571 = 1395328562280177LLU;
	int64_t x572 = -5231327LL;
	uint64_t t134 = 1426967438LLU;

    t134 = (x569|((x570%x571)-x572));

    if (t134 != 18446744071570432107LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x576 = INT8_MAX;
	volatile uint64_t t135 = 2004729LLU;

    t135 = (x573|((x574%x575)-x576));

    if (t135 != 1471262707LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile int64_t x577 = INT64_MIN;
	int16_t x578 = INT16_MIN;
	volatile int64_t x579 = -19LL;
	int8_t x580 = 0;
	int64_t t136 = -1839254LL;

    t136 = (x577|((x578%x579)-x580));

    if (t136 != -12LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x581 = INT32_MIN;
	int8_t x582 = -1;
	int64_t x583 = INT64_MIN;
	int16_t x584 = INT16_MIN;
	int64_t t137 = 512661297980684LL;

    t137 = (x581|((x582%x583)-x584));

    if (t137 != -2147450881LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x585 = -1;
	static volatile int16_t x586 = -7523;
	uint64_t x587 = 2081967202LLU;
	static uint64_t t138 = UINT64_MAX;

    t138 = (x585|((x586%x587)-x588));

    if (t138 != UINT64_MAX) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x590 = INT64_MAX;
	int64_t t139 = 49769291520130343LL;

    t139 = (x589|((x590%x591)-x592));

    if (t139 != 509411327LL) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x593 = -4750;
	uint64_t x594 = 1535364046LLU;
	volatile uint64_t t140 = 12949823456311LLU;

    t140 = (x593|((x594%x595)-x596));

    if (t140 != 18446744073709547519LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x597 = UINT64_MAX;

    t141 = (x597|((x598%x599)-x600));

    if (t141 != UINT64_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int16_t x601 = 1;
	int16_t x602 = -1;
	uint16_t x603 = UINT16_MAX;
	uint32_t x604 = UINT32_MAX;
	volatile uint32_t t142 = 1577920907U;

    t142 = (x601|((x602%x603)-x604));

    if (t142 != 1U) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint32_t x605 = 8442U;
	int16_t x606 = INT16_MIN;
	static int32_t x607 = INT32_MIN;
	uint32_t t143 = 8378U;

    t143 = (x605|((x606%x607)-x608));

    if (t143 != 4294942975U) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x610 = INT64_MIN;
	volatile uint64_t x611 = 771549235172LLU;
	int32_t x612 = -1;
	volatile uint64_t t144 = UINT64_MAX;

    t144 = (x609|((x610%x611)-x612));

    if (t144 != UINT64_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x613 = INT32_MAX;
	int16_t x614 = INT16_MAX;
	uint32_t x616 = 118881U;
	volatile int64_t t145 = 2245040150988LL;

    t145 = (x613|((x614%x615)-x616));

    if (t145 != -1LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x618 = -1;
	int32_t x619 = -126728;
	static int8_t x620 = INT8_MAX;
	static volatile int64_t t146 = -2789414508LL;

    t146 = (x617|((x618%x619)-x620));

    if (t146 != -1LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x621 = 1167240LL;
	int16_t x622 = INT16_MAX;
	int32_t x624 = -1;
	int64_t t147 = -9587LL;

    t147 = (x621|((x622%x623)-x624));

    if (t147 != 1167288LL) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint8_t x625 = 16U;
	int64_t x626 = -17420168385969LL;
	static volatile int32_t x627 = -1;
	volatile int16_t x628 = INT16_MAX;
	static int64_t t148 = -105629583296LL;

    t148 = (x625|((x626%x627)-x628));

    if (t148 != -32751LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint64_t x630 = UINT64_MAX;
	int64_t x631 = -1LL;
	volatile int8_t x632 = INT8_MIN;
	uint64_t t149 = UINT64_MAX;

    t149 = (x629|((x630%x631)-x632));

    if (t149 != UINT64_MAX) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int32_t x633 = INT32_MIN;
	int16_t x634 = INT16_MAX;
	static uint8_t x635 = 3U;
	int32_t x636 = -1;
	volatile int32_t t150 = 67167591;

    t150 = (x633|((x634%x635)-x636));

    if (t150 != -2147483646) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x639 = 89U;
	static uint16_t x640 = UINT16_MAX;
	volatile uint64_t t151 = 2724541276943LLU;

    t151 = (x637|((x638%x639)-x640));

    if (t151 != 18446744073709486139LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint64_t x641 = 124725922041155LLU;
	volatile uint64_t x642 = 7718537968LLU;
	volatile uint16_t x643 = 21U;
	uint32_t x644 = UINT32_MAX;

    t152 = (x641|((x642%x643)-x644));

    if (t152 != 18446744069486349635LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x645 = INT64_MAX;
	volatile int8_t x646 = INT8_MIN;
	volatile int16_t x647 = INT16_MIN;
	static volatile int64_t x648 = 3595573LL;
	int64_t t153 = -1LL;

    t153 = (x645|((x646%x647)-x648));

    if (t153 != -1LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x649 = UINT8_MAX;
	uint8_t x650 = UINT8_MAX;
	int8_t x651 = 9;
	volatile int32_t x652 = 3427;
	static int32_t t154 = 463;

    t154 = (x649|((x650%x651)-x652));

    if (t154 != -3329) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x654 = INT64_MAX;
	int8_t x655 = INT8_MIN;
	uint64_t x656 = UINT64_MAX;
	volatile uint64_t t155 = 237838804LLU;

    t155 = (x653|((x654%x655)-x656));

    if (t155 != 18446744073709551598LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x658 = INT64_MIN;
	int32_t x659 = 4478;
	int8_t x660 = -18;
	static volatile int64_t t156 = -462718568LL;

    t156 = (x657|((x658%x659)-x660));

    if (t156 != -1LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x661 = -7;
	volatile int16_t x662 = INT16_MAX;
	int8_t x663 = -1;
	uint16_t x664 = 186U;
	volatile int32_t t157 = 9;

    t157 = (x661|((x662%x663)-x664));

    if (t157 != -1) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x666 = INT8_MIN;
	int8_t x667 = 7;
	uint64_t x668 = 30622574LLU;
	uint64_t t158 = 52083708934LLU;

    t158 = (x665|((x666%x667)-x668));

    if (t158 != 18446744073709551504LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static int64_t x669 = INT64_MAX;
	int64_t x671 = INT64_MIN;
	uint8_t x672 = 0U;
	int64_t t159 = INT64_MAX;

    t159 = (x669|((x670%x671)-x672));

    if (t159 != INT64_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int32_t x673 = -7482149;
	int32_t x674 = -388066632;
	volatile uint32_t x675 = UINT32_MAX;
	int32_t x676 = INT32_MIN;
	volatile uint32_t t160 = 17751U;

    t160 = (x673|((x674%x675)-x676));

    if (t160 != 4292859643U) { NG(); } else { ; }
	
}

void f161(void) {
    	static int8_t x678 = INT8_MIN;
	int32_t x679 = -7;
	int64_t x680 = -1LL;

    t161 = (x677|((x678%x679)-x680));

    if (t161 != -1LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x681 = 8U;
	int16_t x683 = INT16_MIN;

    t162 = (x681|((x682%x683)-x684));

    if (t162 != 32767) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x686 = -269691047774LL;
	int16_t x687 = -75;
	int64_t t163 = -450445323917377430LL;

    t163 = (x685|((x686%x687)-x688));

    if (t163 != -9LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x689 = INT64_MIN;
	int8_t x690 = 28;
	int64_t x691 = INT64_MIN;
	static uint64_t x692 = UINT64_MAX;

    t164 = (x689|((x690%x691)-x692));

    if (t164 != 9223372036854775837LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint64_t x694 = 160434841LLU;
	int16_t x695 = INT16_MIN;
	uint8_t x696 = UINT8_MAX;
	uint64_t t165 = 3130837952LLU;

    t165 = (x693|((x694%x695)-x696));

    if (t165 != 196868607LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x697 = INT16_MIN;
	int16_t x698 = -1;
	volatile int32_t x699 = INT32_MAX;
	int8_t x700 = 0;

    t166 = (x697|((x698%x699)-x700));

    if (t166 != -1) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint32_t x703 = UINT32_MAX;
	volatile int16_t x704 = INT16_MIN;
	int64_t t167 = -169036466212829LL;

    t167 = (x701|((x702%x703)-x704));

    if (t167 != -223368102375955LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x705 = -1;
	int64_t x706 = INT64_MIN;
	uint32_t x707 = UINT32_MAX;
	int8_t x708 = INT8_MAX;
	int64_t t168 = 2943139002LL;

    t168 = (x705|((x706%x707)-x708));

    if (t168 != -1LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x709 = -4056063881LL;
	int64_t x710 = -1LL;
	int8_t x712 = INT8_MIN;
	int64_t t169 = -1LL;

    t169 = (x709|((x710%x711)-x712));

    if (t169 != -4056063873LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x713 = INT8_MIN;
	volatile int32_t x714 = INT32_MAX;
	volatile int16_t x716 = -1;

    t170 = (x713|((x714%x715)-x716));

    if (t170 != 4294967196U) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile uint16_t x717 = UINT16_MAX;
	int16_t x718 = -413;
	volatile int32_t x719 = INT32_MAX;
	int16_t x720 = -212;
	volatile int32_t t171 = 1482;

    t171 = (x717|((x718%x719)-x720));

    if (t171 != -1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x721 = 450515U;
	int32_t x723 = INT32_MAX;

    t172 = (x721|((x722%x723)-x724));

    if (t172 != 450551U) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x726 = INT64_MIN;
	volatile int32_t x727 = INT32_MAX;
	uint8_t x728 = UINT8_MAX;
	volatile int64_t t173 = -64205631LL;

    t173 = (x725|((x726%x727)-x728));

    if (t173 != -1LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x729 = INT64_MAX;
	volatile int16_t x730 = 3635;
	uint32_t x731 = 11540U;
	static int32_t x732 = INT32_MIN;
	int64_t t174 = INT64_MAX;

    t174 = (x729|((x730%x731)-x732));

    if (t174 != INT64_MAX) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x737 = UINT32_MAX;
	uint32_t x738 = 7221U;
	int8_t x740 = INT8_MAX;
	uint32_t t175 = UINT32_MAX;

    t175 = (x737|((x738%x739)-x740));

    if (t175 != UINT32_MAX) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x741 = -1;
	static volatile int64_t t176 = 1926683LL;

    t176 = (x741|((x742%x743)-x744));

    if (t176 != -1LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x745 = INT64_MAX;
	int8_t x746 = 0;
	static int8_t x747 = INT8_MIN;
	int16_t x748 = INT16_MIN;
	int64_t t177 = INT64_MAX;

    t177 = (x745|((x746%x747)-x748));

    if (t177 != INT64_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint64_t x750 = 112LLU;
	uint16_t x751 = 412U;
	volatile uint16_t x752 = UINT16_MAX;
	uint64_t t178 = 5LLU;

    t178 = (x749|((x750%x751)-x752));

    if (t178 != 18446744073709518961LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x753 = -1LL;
	static uint8_t x754 = UINT8_MAX;
	int64_t x755 = INT64_MIN;
	volatile uint64_t x756 = 15551275189170947LLU;
	volatile uint64_t t179 = UINT64_MAX;

    t179 = (x753|((x754%x755)-x756));

    if (t179 != UINT64_MAX) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x757 = INT64_MAX;
	int32_t x759 = INT32_MAX;
	volatile int8_t x760 = -30;
	volatile int64_t t180 = INT64_MAX;

    t180 = (x757|((x758%x759)-x760));

    if (t180 != INT64_MAX) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x761 = INT16_MIN;
	int64_t x762 = -1LL;
	static uint32_t x764 = 1729006U;
	int64_t t181 = -805670LL;

    t181 = (x761|((x762%x763)-x764));

    if (t181 != -25071LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x765 = INT64_MIN;
	volatile uint8_t x766 = UINT8_MAX;
	uint16_t x767 = 3U;
	static int16_t x768 = 2;
	volatile int64_t t182 = 180069057734149LL;

    t182 = (x765|((x766%x767)-x768));

    if (t182 != -2LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x769 = -2;
	volatile uint32_t x770 = 11U;
	int32_t x772 = 9;

    t183 = (x769|((x770%x771)-x772));

    if (t183 != 4294967294U) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x773 = INT64_MAX;
	static int16_t x774 = -1;
	int16_t x775 = INT16_MAX;
	int64_t t184 = INT64_MAX;

    t184 = (x773|((x774%x775)-x776));

    if (t184 != INT64_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x777 = INT32_MIN;
	uint16_t x778 = 0U;
	int64_t x779 = INT64_MAX;
	volatile int64_t x780 = -1LL;
	int64_t t185 = 32396791830944LL;

    t185 = (x777|((x778%x779)-x780));

    if (t185 != -2147483647LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint16_t x783 = UINT16_MAX;

    t186 = (x781|((x782%x783)-x784));

    if (t186 != 65519) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x785 = 20U;
	int32_t x786 = -19876;
	static int8_t x787 = INT8_MAX;
	int8_t x788 = INT8_MIN;
	volatile int32_t t187 = 76365170;

    t187 = (x785|((x786%x787)-x788));

    if (t187 != 84) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x789 = -1;
	int16_t x790 = 0;
	uint8_t x791 = UINT8_MAX;
	static int32_t t188 = 992622345;

    t188 = (x789|((x790%x791)-x792));

    if (t188 != -1) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x797 = INT32_MIN;
	int64_t x798 = INT64_MIN;
	int16_t x799 = INT16_MAX;
	static uint64_t x800 = 41075519084LLU;
	volatile uint64_t t189 = 115642687969349563LLU;

    t189 = (x797|((x798%x799)-x800));

    if (t189 != 18446744073436221836LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x801 = INT32_MIN;
	int8_t x803 = INT8_MIN;
	static uint8_t x804 = 73U;
	volatile int32_t t190 = -8091100;

    t190 = (x801|((x802%x803)-x804));

    if (t190 != -2147483634) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x805 = INT16_MIN;
	volatile uint64_t x807 = 1527454988LLU;
	volatile uint64_t t191 = 19865LLU;

    t191 = (x805|((x806%x807)-x808));

    if (t191 != 18446744073709544020LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint64_t x809 = 17044344952134753LLU;
	uint32_t x810 = UINT32_MAX;
	static uint8_t x811 = UINT8_MAX;
	static volatile uint64_t t192 = 16941766340201LLU;

    t192 = (x809|((x810%x811)-x812));

    if (t192 != 17044345785941985LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x813 = 7;
	int32_t x814 = -1;
	int64_t x815 = INT64_MIN;
	uint32_t x816 = 29482388U;
	volatile int64_t t193 = 93078675LL;

    t193 = (x813|((x814%x815)-x816));

    if (t193 != -29482385LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x817 = 8U;
	volatile uint8_t x818 = 38U;
	uint64_t x819 = 707207529346037LLU;
	int16_t x820 = 3;
	volatile uint64_t t194 = 28141576932LLU;

    t194 = (x817|((x818%x819)-x820));

    if (t194 != 43LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int8_t x821 = INT8_MIN;
	int16_t x823 = -1;
	volatile int32_t t195 = -1431771;

    t195 = (x821|((x822%x823)-x824));

    if (t195 != -127) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x825 = INT8_MIN;
	int16_t x826 = INT16_MIN;
	static volatile int8_t x827 = INT8_MAX;
	int8_t x828 = -4;
	static int32_t t196 = 14918972;

    t196 = (x825|((x826%x827)-x828));

    if (t196 != -126) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x829 = INT64_MIN;
	int32_t x830 = -3;
	uint16_t x831 = 3182U;
	int32_t x832 = INT32_MIN;
	int64_t t197 = 2513LL;

    t197 = (x829|((x830%x831)-x832));

    if (t197 != -9223372034707292163LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x837 = INT32_MAX;
	int32_t x838 = -2;
	int32_t x839 = -1;
	uint8_t x840 = 3U;
	volatile int32_t t198 = 9;

    t198 = (x837|((x838%x839)-x840));

    if (t198 != -1) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile uint8_t x841 = 12U;
	static volatile int64_t x842 = -1LL;
	int8_t x843 = INT8_MAX;
	int64_t t199 = 829150LL;

    t199 = (x841|((x842%x843)-x844));

    if (t199 != -4294967284LL) { NG(); } else { ; }
	
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

