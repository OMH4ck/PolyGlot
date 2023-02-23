
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

int16_t x10 = INT16_MIN;
volatile int16_t x11 = INT16_MIN;
volatile int8_t x19 = -28;
static volatile uint64_t t4 = 7773339598LLU;
static int8_t x21 = -1;
volatile int64_t x24 = INT64_MAX;
uint64_t x27 = 2054351040LLU;
static volatile uint64_t x28 = 3LLU;
static uint64_t t6 = 117426694924054264LLU;
int64_t x31 = INT64_MAX;
volatile int64_t t7 = 324019988579499LL;
uint16_t x36 = UINT16_MAX;
int32_t x41 = INT32_MAX;
volatile uint8_t x42 = 2U;
int16_t x44 = INT16_MAX;
int16_t x47 = INT16_MIN;
int64_t x67 = INT64_MIN;
uint8_t x70 = UINT8_MAX;
volatile int32_t t18 = 183;
uint8_t x85 = UINT8_MAX;
uint16_t x90 = UINT16_MAX;
int32_t x91 = INT32_MIN;
volatile int32_t t20 = 2715;
uint32_t x93 = 23487U;
volatile uint32_t t21 = 723U;
int8_t x98 = -1;
volatile int64_t t22 = -10905580815LL;
static volatile int8_t x105 = 0;
int64_t x109 = 292530LL;
int8_t x110 = INT8_MIN;
int16_t x113 = -1;
int32_t x115 = INT32_MIN;
static int32_t x121 = INT32_MIN;
uint32_t x124 = 6987842U;
static volatile int64_t t27 = -65153274269LL;
int32_t x129 = 359;
uint8_t x132 = 1U;
volatile int64_t x133 = INT64_MIN;
volatile int64_t t31 = 23853LL;
volatile uint32_t x145 = 86949U;
uint16_t x151 = UINT16_MAX;
uint64_t x154 = 76570359LLU;
volatile int64_t x164 = INT64_MIN;
static int8_t x170 = INT8_MAX;
volatile int32_t t37 = -4;
int64_t x174 = -1LL;
static volatile int64_t t38 = -9602241757670LL;
int64_t x180 = INT64_MIN;
int16_t x185 = INT16_MAX;
uint64_t x187 = 24958925313LLU;
int16_t x188 = -1;
int32_t x202 = -1;
uint64_t x210 = 16180904982LLU;
volatile uint64_t t46 = 7LLU;
int8_t x217 = 2;
volatile uint32_t t48 = 7808194U;
static volatile int8_t x227 = -1;
int32_t x228 = -1;
int64_t x230 = -548219951386368467LL;
static int32_t x235 = INT32_MIN;
int8_t x237 = 12;
volatile int64_t t52 = 355639661LL;
static int16_t x258 = INT16_MIN;
int8_t x262 = -1;
volatile int64_t x263 = -7LL;
int32_t x272 = -1;
volatile uint64_t t58 = 1790407567749762LLU;
int64_t t59 = -569212264463103LL;
volatile int8_t x279 = 1;
volatile uint16_t x287 = 4U;
volatile int64_t x290 = -1887320252LL;
volatile int64_t t67 = 568294470LL;
static int32_t x309 = INT32_MIN;
uint64_t x311 = 1633558885933LLU;
volatile int64_t t69 = 3LL;
int16_t x319 = -1;
static int32_t x321 = -125373775;
static int8_t x323 = -1;
uint8_t x326 = 2U;
volatile int32_t t72 = -1;
uint16_t x330 = 27836U;
uint16_t x331 = 24U;
volatile int64_t t73 = 30339044458412717LL;
int32_t x337 = INT32_MIN;
volatile uint64_t t75 = 233372693580LLU;
volatile int64_t t77 = 2560LL;
volatile int16_t x351 = INT16_MIN;
int64_t x359 = INT64_MIN;
volatile int64_t t80 = 1LL;
static uint64_t x361 = 31LLU;
volatile uint64_t t81 = 7515917070055LLU;
int32_t x369 = -101657903;
int64_t x374 = INT64_MIN;
uint32_t x375 = 133693009U;
int32_t x382 = -9834560;
static int16_t x386 = INT16_MIN;
volatile int32_t t87 = 902231;
volatile int64_t x408 = 888887497LL;
static uint64_t x410 = 394039729898LLU;
uint64_t x411 = UINT64_MAX;
int16_t x414 = INT16_MAX;
int16_t x416 = -1;
static int8_t x419 = INT8_MIN;
volatile uint16_t x426 = UINT16_MAX;
int16_t x427 = INT16_MAX;
int16_t x431 = INT16_MAX;
volatile uint64_t t99 = 3LLU;
static int16_t x446 = INT16_MAX;
int8_t x448 = -1;
int64_t t102 = -830607LL;
uint32_t x457 = 23424187U;
static int16_t x458 = INT16_MAX;
static volatile int64_t x463 = INT64_MAX;
int8_t x465 = INT8_MAX;
static int16_t x477 = INT16_MIN;
int32_t x480 = 95487750;
static volatile uint32_t x487 = UINT32_MAX;
static uint64_t x488 = 3500875814935505759LLU;
static int64_t x494 = -1LL;
int8_t x497 = INT8_MIN;
volatile int8_t x498 = 1;
int8_t x501 = INT8_MIN;
volatile int8_t x511 = -1;
int16_t x513 = 1;
int16_t x519 = INT16_MIN;
int64_t t117 = -1104562326135616LL;
static volatile int16_t x535 = -1;
int16_t x536 = INT16_MAX;
int32_t x538 = -1;
uint8_t x542 = UINT8_MAX;
int8_t x545 = INT8_MAX;
volatile uint8_t x546 = 4U;
int32_t x558 = INT32_MAX;
int64_t x561 = -1LL;
static volatile int32_t x564 = 215;
volatile int64_t t126 = 298569LL;
int64_t x571 = INT64_MIN;
int16_t x573 = -76;
volatile int32_t t129 = 200806773;
uint64_t x583 = 180282403LLU;
int32_t x586 = -101844;
uint16_t x588 = 87U;
uint64_t t131 = 4980LLU;
volatile int64_t x589 = INT64_MAX;
int32_t x593 = INT32_MIN;
volatile uint64_t x594 = UINT64_MAX;
static int16_t x598 = INT16_MIN;
static uint32_t x611 = UINT32_MAX;
volatile uint32_t t137 = 374U;
int64_t x613 = 772756LL;
static int8_t x618 = INT8_MIN;
int64_t x621 = INT64_MAX;
volatile uint64_t t141 = 21606152180LLU;
static int64_t x634 = 0LL;
volatile uint64_t t143 = 267215325877309LLU;
int64_t x638 = INT64_MIN;
int64_t x639 = INT64_MIN;
volatile int32_t x643 = -6635;
int16_t x648 = -1;
static int32_t x653 = -1;
int64_t x654 = INT64_MAX;
volatile uint8_t x655 = 12U;
static volatile int64_t x658 = -280773839846LL;
static uint8_t x659 = UINT8_MAX;
int64_t x664 = -1LL;
uint8_t x665 = 9U;
uint16_t x668 = 247U;
int32_t t151 = 4464;
int16_t x670 = INT16_MAX;
uint16_t x671 = UINT16_MAX;
int64_t x679 = INT64_MIN;
volatile int64_t t154 = -140172460898886LL;
volatile uint32_t t156 = 12166395U;
static uint8_t x692 = 5U;
volatile int64_t x695 = 13LL;
static int16_t x708 = -9447;
volatile int16_t x709 = 1;
uint32_t t161 = 3113U;
volatile uint32_t t162 = 5422U;
static int32_t x727 = -106639;
uint32_t x732 = UINT32_MAX;
int16_t x736 = INT16_MIN;
int32_t x745 = -1;
volatile uint64_t x765 = UINT64_MAX;
uint64_t x776 = 60254613003931504LLU;
volatile uint64_t t177 = 1840896428263LLU;
volatile uint16_t x780 = 2U;
volatile uint32_t x782 = 360U;
static int64_t x783 = -1LL;
int8_t x790 = INT8_MIN;
int64_t t182 = -79723729106465428LL;
int16_t x797 = INT16_MAX;
uint32_t t184 = 16289639U;
volatile int64_t x810 = INT64_MIN;
static int8_t x817 = -23;
int64_t t187 = 12817400639LL;
volatile uint16_t x825 = UINT16_MAX;
uint64_t x830 = 14222645931938LLU;
volatile int8_t x840 = 0;
uint64_t t191 = 3903740339LLU;
volatile int8_t x845 = 47;
int64_t x847 = INT64_MIN;
int64_t t193 = -2032445141632631154LL;
uint64_t x855 = 2672639LLU;
static int64_t x860 = -1LL;
volatile int32_t x870 = 260495;


void f0(void) {
    	int64_t x1 = 16259550927LL;
	uint16_t x2 = 6U;
	volatile int32_t x3 = INT32_MIN;
	uint64_t x4 = UINT64_MAX;
	volatile uint64_t t0 = 3524156612359LLU;

    t0 = (x1/((x2%x3)-x4));

    if (t0 != 2322792989LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x5 = -1;
	volatile int8_t x6 = INT8_MIN;
	int32_t x7 = INT32_MAX;
	static uint8_t x8 = 27U;
	volatile int32_t t1 = -38598375;

    t1 = (x5/((x6%x7)-x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x9 = -7;
	int16_t x12 = -3282;
	volatile int32_t t2 = -3856289;

    t2 = (x9/((x10%x11)-x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x13 = INT8_MIN;
	static uint32_t x14 = UINT32_MAX;
	volatile int64_t x15 = INT64_MAX;
	int16_t x16 = INT16_MIN;
	int64_t t3 = -765436477495504526LL;

    t3 = (x13/((x14%x15)-x16));

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MIN;
	uint64_t x18 = 3770414900682LLU;
	int32_t x20 = INT32_MIN;

    t4 = (x17/((x18%x19)-x20));

    if (t4 != 4889712LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x22 = 117U;
	int32_t x23 = INT32_MAX;
	volatile int64_t t5 = -1LL;

    t5 = (x21/((x22%x23)-x24));

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x25 = INT32_MAX;
	static uint16_t x26 = 8699U;

    t6 = (x25/((x26%x27)-x28));

    if (t6 != 246950LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile int32_t x29 = INT32_MIN;
	int8_t x30 = -1;
	int64_t x32 = 7318952933527184LL;

    t7 = (x29/((x30%x31)-x32));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int8_t x33 = INT8_MIN;
	volatile int64_t x34 = -1099487813873LL;
	int64_t x35 = INT64_MIN;
	volatile int64_t t8 = -37051857326791219LL;

    t8 = (x33/((x34%x35)-x36));

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x37 = INT64_MIN;
	static int64_t x38 = INT64_MIN;
	static int32_t x39 = -1;
	static uint64_t x40 = UINT64_MAX;
	uint64_t t9 = 49561LLU;

    t9 = (x37/((x38%x39)-x40));

    if (t9 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x43 = INT8_MIN;
	int32_t t10 = 129504;

    t10 = (x41/((x42%x43)-x44));

    if (t10 != -65542) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = -35;
	uint16_t x46 = 5U;
	int16_t x48 = -1;
	volatile int32_t t11 = 68;

    t11 = (x45/((x46%x47)-x48));

    if (t11 != -5) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = INT32_MIN;
	int16_t x50 = 2;
	uint16_t x51 = UINT16_MAX;
	int8_t x52 = INT8_MIN;
	static volatile int32_t t12 = 12695;

    t12 = (x49/((x50%x51)-x52));

    if (t12 != -16519104) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x53 = UINT8_MAX;
	uint16_t x54 = 1610U;
	static int8_t x55 = INT8_MIN;
	volatile uint16_t x56 = UINT16_MAX;
	int32_t t13 = -5754;

    t13 = (x53/((x54%x55)-x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x57 = 2;
	int64_t x58 = INT64_MIN;
	int8_t x59 = -55;
	int8_t x60 = -1;
	int64_t t14 = 2072478096LL;

    t14 = (x57/((x58%x59)-x60));

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x65 = UINT8_MAX;
	uint32_t x66 = UINT32_MAX;
	uint16_t x68 = 100U;
	static int64_t t15 = -177915LL;

    t15 = (x65/((x66%x67)-x68));

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x69 = 55993LL;
	uint16_t x71 = 246U;
	int8_t x72 = INT8_MAX;
	volatile int64_t t16 = 117LL;

    t16 = (x69/((x70%x71)-x72));

    if (t16 != -474LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x77 = 535479834165LLU;
	int64_t x78 = -1LL;
	int32_t x79 = INT32_MIN;
	volatile int16_t x80 = INT16_MIN;
	uint64_t t17 = 74955039578800921LLU;

    t17 = (x77/((x78%x79)-x80));

    if (t17 != 16342046LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x81 = INT32_MIN;
	int16_t x82 = INT16_MIN;
	int8_t x83 = 44;
	int8_t x84 = 2;

    t18 = (x81/((x82%x83)-x84));

    if (t18 != 63161283) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile int16_t x86 = -372;
	int64_t x87 = -26557LL;
	int16_t x88 = INT16_MAX;
	int64_t t19 = -19954252456742172LL;

    t19 = (x85/((x86%x87)-x88));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x89 = -1;
	int8_t x92 = -1;

    t20 = (x89/((x90%x91)-x92));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x94 = -154;
	uint8_t x95 = UINT8_MAX;
	static int32_t x96 = -1;

    t21 = (x93/((x94%x95)-x96));

    if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x97 = -1;
	volatile int16_t x99 = -60;
	int64_t x100 = INT64_MIN;

    t22 = (x97/((x98%x99)-x100));

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x101 = 888;
	int32_t x102 = INT32_MIN;
	uint8_t x103 = 28U;
	static int64_t x104 = -1LL;
	int64_t t23 = 3685777LL;

    t23 = (x101/((x102%x103)-x104));

    if (t23 != -59LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x106 = -1;
	volatile uint32_t x107 = UINT32_MAX;
	uint16_t x108 = UINT16_MAX;
	uint32_t t24 = 3U;

    t24 = (x105/((x106%x107)-x108));

    if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x111 = INT8_MIN;
	int64_t x112 = -1LL;
	volatile int64_t t25 = -375LL;

    t25 = (x109/((x110%x111)-x112));

    if (t25 != 292530LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x114 = -51927230494101548LL;
	uint16_t x116 = 18301U;
	int64_t t26 = 91081775572LL;

    t26 = (x113/((x114%x115)-x116));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x122 = INT64_MIN;
	uint32_t x123 = UINT32_MAX;

    t27 = (x121/((x122%x123)-x124));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x125 = INT32_MIN;
	static uint8_t x126 = UINT8_MAX;
	int32_t x127 = -1;
	uint8_t x128 = 9U;
	volatile int32_t t28 = 1691;

    t28 = (x125/((x126%x127)-x128));

    if (t28 != 238609294) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x130 = UINT32_MAX;
	int8_t x131 = INT8_MIN;
	uint32_t t29 = 25339933U;

    t29 = (x129/((x130%x131)-x132));

    if (t29 != 2U) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint32_t x134 = 25U;
	int32_t x135 = 1;
	volatile uint64_t x136 = 839193143025726LLU;
	uint64_t t30 = 145LLU;

    t30 = (x133/((x134%x135)-x136));

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x137 = 2760;
	int64_t x138 = INT64_MIN;
	int64_t x139 = INT64_MIN;
	int8_t x140 = -1;

    t31 = (x137/((x138%x139)-x140));

    if (t31 != 2760LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x146 = INT32_MAX;
	int32_t x147 = -1;
	uint32_t x148 = UINT32_MAX;
	volatile uint32_t t32 = 13U;

    t32 = (x145/((x146%x147)-x148));

    if (t32 != 86949U) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x149 = INT16_MAX;
	uint64_t x150 = UINT64_MAX;
	volatile int16_t x152 = INT16_MAX;
	uint64_t t33 = 723LLU;

    t33 = (x149/((x150%x151)-x152));

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x153 = INT16_MIN;
	int32_t x155 = INT32_MAX;
	int32_t x156 = -23022423;
	static uint64_t t34 = 2742398713518698897LLU;

    t34 = (x153/((x154%x155)-x156));

    if (t34 != 185221696826LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x157 = -1;
	int32_t x158 = -384296755;
	volatile int16_t x159 = -1;
	int32_t x160 = 134920693;
	int32_t t35 = 265520804;

    t35 = (x157/((x158%x159)-x160));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x161 = -1;
	int64_t x162 = INT64_MIN;
	uint32_t x163 = UINT32_MAX;
	static volatile int64_t t36 = 21636491LL;

    t36 = (x161/((x162%x163)-x164));

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x169 = INT16_MIN;
	uint16_t x171 = 14456U;
	volatile int16_t x172 = INT16_MAX;

    t37 = (x169/((x170%x171)-x172));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x173 = INT16_MAX;
	int32_t x175 = -15199415;
	volatile int16_t x176 = INT16_MIN;

    t38 = (x173/((x174%x175)-x176));

    if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x177 = 1;
	static uint16_t x178 = 6U;
	volatile uint64_t x179 = 748318LLU;
	static volatile uint64_t t39 = 425246LLU;

    t39 = (x177/((x178%x179)-x180));

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x181 = INT8_MAX;
	int64_t x182 = INT64_MIN;
	volatile uint64_t x183 = 134621968278184480LLU;
	uint64_t x184 = 3823726101421513361LLU;
	uint64_t t40 = 3414188779LLU;

    t40 = (x181/((x182%x183)-x184));

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x186 = INT32_MIN;
	uint64_t t41 = 3895551LLU;

    t41 = (x185/((x186%x187)-x188));

    if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x193 = INT16_MIN;
	int64_t x194 = INT64_MIN;
	static uint64_t x195 = UINT64_MAX;
	int16_t x196 = -1;
	uint64_t t42 = 29LLU;

    t42 = (x193/((x194%x195)-x196));

    if (t42 != 1LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x197 = INT8_MAX;
	int64_t x198 = 1692254LL;
	volatile int64_t x199 = INT64_MIN;
	uint64_t x200 = 11445742548631134LLU;
	uint64_t t43 = 6260437593972LLU;

    t43 = (x197/((x198%x199)-x200));

    if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x201 = -1481699598991LL;
	volatile uint32_t x203 = UINT32_MAX;
	int8_t x204 = INT8_MIN;
	int64_t t44 = -21LL;

    t44 = (x201/((x202%x203)-x204));

    if (t44 != -11575778117LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static int64_t x205 = 28806749581839LL;
	int16_t x206 = INT16_MAX;
	static uint64_t x207 = 22859843LLU;
	int16_t x208 = INT16_MIN;
	static volatile uint64_t t45 = 82548LLU;

    t45 = (x205/((x206%x207)-x208));

    if (t45 != 439562822LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x209 = INT16_MIN;
	uint16_t x211 = UINT16_MAX;
	uint8_t x212 = 3U;

    t46 = (x209/((x210%x211)-x212));

    if (t46 != 359312492913954LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x218 = UINT16_MAX;
	volatile uint8_t x219 = UINT8_MAX;
	uint8_t x220 = UINT8_MAX;
	volatile int32_t t47 = 765;

    t47 = (x217/((x218%x219)-x220));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint32_t x221 = UINT32_MAX;
	int8_t x222 = 1;
	int32_t x223 = -1;
	volatile int8_t x224 = INT8_MAX;

    t48 = (x221/((x222%x223)-x224));

    if (t48 != 1U) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x225 = INT8_MAX;
	static volatile int8_t x226 = INT8_MIN;
	volatile int32_t t49 = -30866;

    t49 = (x225/((x226%x227)-x228));

    if (t49 != 127) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x229 = 42U;
	uint64_t x231 = UINT64_MAX;
	uint64_t x232 = 2329720LLU;
	volatile uint64_t t50 = 2LLU;

    t50 = (x229/((x230%x231)-x232));

    if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x233 = -1;
	volatile uint8_t x234 = 5U;
	uint8_t x236 = UINT8_MAX;
	volatile int32_t t51 = 6046;

    t51 = (x233/((x234%x235)-x236));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int64_t x238 = INT64_MIN;
	volatile uint32_t x239 = 27291771U;
	volatile int32_t x240 = -1;

    t52 = (x237/((x238%x239)-x240));

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x241 = -343300770482047419LL;
	uint8_t x242 = 26U;
	int8_t x243 = 9;
	uint16_t x244 = UINT16_MAX;
	volatile int64_t t53 = -4172675LL;

    t53 = (x241/((x242%x243)-x244));

    if (t53 != 5239073519038LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x245 = UINT32_MAX;
	uint32_t x246 = 4936750U;
	int16_t x247 = INT16_MIN;
	uint16_t x248 = UINT16_MAX;
	uint32_t t54 = 895205U;

    t54 = (x245/((x246%x247)-x248));

    if (t54 != 881U) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x257 = UINT16_MAX;
	int8_t x259 = -18;
	uint8_t x260 = 27U;
	static volatile int32_t t55 = 1325;

    t55 = (x257/((x258%x259)-x260));

    if (t55 != -1872) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x261 = INT16_MIN;
	volatile int16_t x264 = 2;
	volatile int64_t t56 = -1726117895272424827LL;

    t56 = (x261/((x262%x263)-x264));

    if (t56 != 10922LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x265 = INT16_MAX;
	int8_t x266 = INT8_MIN;
	int32_t x267 = -4602;
	static int64_t x268 = INT64_MIN;
	static volatile int64_t t57 = -59461693469LL;

    t57 = (x265/((x266%x267)-x268));

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x269 = -1LL;
	uint64_t x270 = 1192124613792341886LLU;
	volatile int32_t x271 = INT32_MIN;

    t58 = (x269/((x270%x271)-x272));

    if (t58 != 15LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x273 = 11U;
	static volatile int64_t x274 = INT64_MIN;
	int64_t x275 = INT64_MIN;
	int8_t x276 = INT8_MAX;

    t59 = (x273/((x274%x275)-x276));

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile uint64_t x277 = 6560LLU;
	int32_t x278 = INT32_MAX;
	static uint8_t x280 = 98U;
	static uint64_t t60 = 3040071728LLU;

    t60 = (x277/((x278%x279)-x280));

    if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint8_t x281 = UINT8_MAX;
	int8_t x282 = INT8_MIN;
	uint16_t x283 = 6331U;
	int8_t x284 = -10;
	int32_t t61 = -7;

    t61 = (x281/((x282%x283)-x284));

    if (t61 != -2) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x285 = -1;
	static int16_t x286 = INT16_MAX;
	int32_t x288 = 69276589;
	volatile int32_t t62 = -111300939;

    t62 = (x285/((x286%x287)-x288));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x289 = 107U;
	int16_t x291 = INT16_MAX;
	int32_t x292 = INT32_MIN;
	volatile int64_t t63 = 25994792455LL;

    t63 = (x289/((x290%x291)-x292));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint32_t x293 = UINT32_MAX;
	uint8_t x294 = UINT8_MAX;
	int16_t x295 = -50;
	int16_t x296 = INT16_MAX;
	uint32_t t64 = 47U;

    t64 = (x293/((x294%x295)-x296));

    if (t64 != 1U) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint16_t x297 = UINT16_MAX;
	static int64_t x298 = INT64_MIN;
	static volatile int64_t x299 = INT64_MIN;
	static int16_t x300 = INT16_MAX;
	volatile int64_t t65 = 1617513150695LL;

    t65 = (x297/((x298%x299)-x300));

    if (t65 != -2LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x301 = -3;
	static uint16_t x302 = UINT16_MAX;
	uint8_t x303 = UINT8_MAX;
	volatile uint8_t x304 = 15U;
	volatile int32_t t66 = 16;

    t66 = (x301/((x302%x303)-x304));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint8_t x305 = UINT8_MAX;
	int16_t x306 = -1;
	int64_t x307 = -1LL;
	uint16_t x308 = 876U;

    t67 = (x305/((x306%x307)-x308));

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x310 = 961U;
	uint8_t x312 = 6U;
	volatile uint64_t t68 = 4431665245LLU;

    t68 = (x309/((x310%x311)-x312));

    if (t68 != 19315962378599024LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint16_t x313 = UINT16_MAX;
	int64_t x314 = -2361558LL;
	static uint16_t x315 = 483U;
	int64_t x316 = INT64_MIN;

    t69 = (x313/((x314%x315)-x316));

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static int8_t x317 = -1;
	volatile int16_t x318 = INT16_MIN;
	int8_t x320 = INT8_MAX;
	volatile int32_t t70 = -315;

    t70 = (x317/((x318%x319)-x320));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x322 = UINT64_MAX;
	int16_t x324 = INT16_MIN;
	volatile uint64_t t71 = 808044719605LLU;

    t71 = (x321/((x322%x323)-x324));

    if (t71 != 562949953417485LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x325 = INT16_MAX;
	static int32_t x327 = INT32_MIN;
	static int8_t x328 = INT8_MIN;

    t72 = (x325/((x326%x327)-x328));

    if (t72 != 252) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x329 = UINT8_MAX;
	static volatile int64_t x332 = INT64_MAX;

    t73 = (x329/((x330%x331)-x332));

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x333 = -13409;
	uint64_t x334 = UINT64_MAX;
	static volatile int64_t x335 = INT64_MIN;
	static int64_t x336 = -1LL;
	uint64_t t74 = 106LLU;

    t74 = (x333/((x334%x335)-x336));

    if (t74 != 1LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x338 = 195671;
	uint64_t x339 = 34LLU;
	uint32_t x340 = UINT32_MAX;

    t75 = (x337/((x338%x339)-x340));

    if (t75 != 1LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x341 = INT16_MIN;
	int16_t x342 = -11;
	int64_t x343 = -34693807697951LL;
	int16_t x344 = -1;
	volatile int64_t t76 = 78302LL;

    t76 = (x341/((x342%x343)-x344));

    if (t76 != 3276LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t x345 = INT32_MIN;
	static uint8_t x346 = UINT8_MAX;
	int32_t x347 = INT32_MIN;
	int64_t x348 = INT64_MAX;

    t77 = (x345/((x346%x347)-x348));

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x349 = INT16_MAX;
	int16_t x350 = -1;
	int32_t x352 = 2235143;
	int32_t t78 = 67;

    t78 = (x349/((x350%x351)-x352));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x353 = -7903;
	uint8_t x354 = UINT8_MAX;
	int8_t x355 = -1;
	int16_t x356 = -1;
	int32_t t79 = 69660608;

    t79 = (x353/((x354%x355)-x356));

    if (t79 != -7903) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x357 = -61LL;
	int32_t x358 = INT32_MIN;
	int16_t x360 = -176;

    t80 = (x357/((x358%x359)-x360));

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x362 = 0;
	volatile int8_t x363 = 18;
	volatile uint8_t x364 = 4U;

    t81 = (x361/((x362%x363)-x364));

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint32_t x365 = 76247613U;
	uint8_t x366 = UINT8_MAX;
	int64_t x367 = -7120568702767511LL;
	int32_t x368 = INT32_MIN;
	volatile int64_t t82 = -212051998096770693LL;

    t82 = (x365/((x366%x367)-x368));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x370 = -298563005LL;
	static uint32_t x371 = 48U;
	uint32_t x372 = 28652U;
	int64_t t83 = -1653087314LL;

    t83 = (x369/((x370%x371)-x372));

    if (t83 != 3544LL) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x373 = INT32_MIN;
	uint16_t x376 = 6824U;
	static volatile int64_t t84 = 16LL;

    t84 = (x373/((x374%x375)-x376));

    if (t84 != 17LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint32_t x377 = 1U;
	uint16_t x378 = 1255U;
	uint64_t x379 = UINT64_MAX;
	int16_t x380 = INT16_MIN;
	static volatile uint64_t t85 = 1716112056125076LLU;

    t85 = (x377/((x378%x379)-x380));

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x381 = INT32_MIN;
	int8_t x383 = INT8_MIN;
	int8_t x384 = -41;
	volatile int32_t t86 = -775669962;

    t86 = (x381/((x382%x383)-x384));

    if (t86 != 93368854) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x385 = 273U;
	volatile int8_t x387 = 22;
	int16_t x388 = -1;

    t87 = (x385/((x386%x387)-x388));

    if (t87 != -30) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x389 = 409LLU;
	volatile int16_t x390 = INT16_MIN;
	int16_t x391 = INT16_MIN;
	uint32_t x392 = UINT32_MAX;
	static uint64_t t88 = 6763012941413925LLU;

    t88 = (x389/((x390%x391)-x392));

    if (t88 != 409LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x393 = -1;
	int16_t x394 = INT16_MAX;
	volatile uint32_t x395 = 230837337U;
	volatile uint8_t x396 = 40U;
	volatile uint32_t t89 = 10499U;

    t89 = (x393/((x394%x395)-x396));

    if (t89 != 131236U) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x397 = -6;
	int32_t x398 = -1;
	uint8_t x399 = 99U;
	int64_t x400 = INT64_MIN;
	volatile int64_t t90 = -281392292484675293LL;

    t90 = (x397/((x398%x399)-x400));

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x405 = -412069681LL;
	uint32_t x406 = UINT32_MAX;
	volatile uint64_t x407 = 3LLU;
	static uint64_t t91 = 5406124779594172832LLU;

    t91 = (x405/((x406%x407)-x408));

    if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x409 = 156260484678518329LL;
	int8_t x412 = INT8_MIN;
	volatile uint64_t t92 = 14LLU;

    t92 = (x409/((x410%x411)-x412));

    if (t92 != 396560LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x413 = INT32_MIN;
	static int8_t x415 = INT8_MAX;
	static volatile int32_t t93 = -97248075;

    t93 = (x413/((x414%x415)-x416));

    if (t93 != -1073741824) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x417 = INT64_MAX;
	volatile int32_t x418 = -1;
	int32_t x420 = INT32_MIN;
	volatile int64_t t94 = -2946318069759LL;

    t94 = (x417/((x418%x419)-x420));

    if (t94 != 4294967298LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x421 = 1U;
	int8_t x422 = 14;
	uint32_t x423 = 676140U;
	volatile uint16_t x424 = 2U;
	uint32_t t95 = 690U;

    t95 = (x421/((x422%x423)-x424));

    if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x425 = -1774;
	volatile int8_t x428 = -3;
	static volatile int32_t t96 = -35756983;

    t96 = (x425/((x426%x427)-x428));

    if (t96 != -443) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x429 = 460739316;
	static volatile uint16_t x430 = 535U;
	int16_t x432 = -1;
	int32_t t97 = -2963181;

    t97 = (x429/((x430%x431)-x432));

    if (t97 != 859588) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x433 = -6;
	static int32_t x434 = 1;
	uint32_t x435 = 115078U;
	static int16_t x436 = INT16_MIN;
	volatile uint32_t t98 = 131U;

    t98 = (x433/((x434%x435)-x436));

    if (t98 != 131067U) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint32_t x437 = UINT32_MAX;
	static uint32_t x438 = 4720509U;
	int64_t x439 = INT64_MAX;
	uint64_t x440 = 207160485767219LLU;

    t99 = (x437/((x438%x439)-x440));

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x441 = INT64_MIN;
	int8_t x442 = -13;
	static volatile int64_t x443 = 15159930185469566LL;
	volatile uint64_t x444 = 6606LLU;
	uint64_t t100 = 7LLU;

    t100 = (x441/((x442%x443)-x444));

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x445 = INT32_MIN;
	uint64_t x447 = UINT64_MAX;
	uint64_t t101 = 3235043334982461177LLU;

    t101 = (x445/((x446%x447)-x448));

    if (t101 != 562949953355776LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x449 = INT64_MIN;
	int8_t x450 = INT8_MAX;
	int16_t x451 = 11836;
	uint8_t x452 = 3U;

    t102 = (x449/((x450%x451)-x452));

    if (t102 != -74382032555280450LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x453 = -1LL;
	volatile int16_t x454 = INT16_MIN;
	volatile int64_t x455 = -18LL;
	static uint16_t x456 = 5U;
	int64_t t103 = -131195730607069LL;

    t103 = (x453/((x454%x455)-x456));

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x459 = INT32_MIN;
	int8_t x460 = -1;
	static uint32_t t104 = 0U;

    t104 = (x457/((x458%x459)-x460));

    if (t104 != 714U) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x461 = -1;
	int64_t x462 = INT64_MAX;
	int64_t x464 = INT64_MAX;
	volatile int64_t t105 = -3LL;

    t105 = (x461/((x462%x463)-x464));

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x466 = INT64_MAX;
	static int8_t x467 = -1;
	int8_t x468 = INT8_MAX;
	static volatile int64_t t106 = 25LL;

    t106 = (x465/((x466%x467)-x468));

    if (t106 != -1LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint16_t x473 = UINT16_MAX;
	uint16_t x474 = UINT16_MAX;
	int8_t x475 = INT8_MIN;
	uint16_t x476 = UINT16_MAX;
	volatile int32_t t107 = 109;

    t107 = (x473/((x474%x475)-x476));

    if (t107 != -1) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint64_t x478 = 1091946172282780466LLU;
	static volatile int8_t x479 = -1;
	static volatile uint64_t t108 = 11028150351771669LLU;

    t108 = (x477/((x478%x479)-x480));

    if (t108 != 16LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x481 = -1;
	int32_t x482 = -1;
	int8_t x483 = INT8_MIN;
	static volatile int8_t x484 = 1;
	static volatile int32_t t109 = 31;

    t109 = (x481/((x482%x483)-x484));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x485 = UINT16_MAX;
	volatile int64_t x486 = INT64_MIN;
	uint64_t t110 = 109580LLU;

    t110 = (x485/((x486%x487)-x488));

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x493 = 31;
	int64_t x495 = INT64_MAX;
	int32_t x496 = 177017171;
	volatile int64_t t111 = -49177703LL;

    t111 = (x493/((x494%x495)-x496));

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint8_t x499 = 15U;
	static int8_t x500 = -1;
	int32_t t112 = 1943451;

    t112 = (x497/((x498%x499)-x500));

    if (t112 != -64) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x502 = UINT16_MAX;
	static int16_t x503 = INT16_MIN;
	int64_t x504 = 321056LL;
	volatile int64_t t113 = 5396LL;

    t113 = (x501/((x502%x503)-x504));

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int64_t x509 = INT64_MAX;
	uint8_t x510 = UINT8_MAX;
	uint8_t x512 = UINT8_MAX;
	static volatile int64_t t114 = 4106574426616LL;

    t114 = (x509/((x510%x511)-x512));

    if (t114 != -36170086419038336LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x514 = UINT16_MAX;
	int64_t x515 = -128104649919218LL;
	volatile uint32_t x516 = 96923U;
	int64_t t115 = -393060LL;

    t115 = (x513/((x514%x515)-x516));

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x517 = 0U;
	volatile int8_t x518 = -55;
	static uint16_t x520 = UINT16_MAX;
	volatile int32_t t116 = -300;

    t116 = (x517/((x518%x519)-x520));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x521 = 6U;
	int64_t x522 = -1LL;
	uint16_t x523 = 799U;
	static int32_t x524 = INT32_MIN;

    t117 = (x521/((x522%x523)-x524));

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x529 = 2U;
	volatile uint64_t x530 = UINT64_MAX;
	static int64_t x531 = -1LL;
	static uint64_t x532 = UINT64_MAX;
	uint64_t t118 = 75381870794824856LLU;

    t118 = (x529/((x530%x531)-x532));

    if (t118 != 2LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x533 = -1;
	int16_t x534 = INT16_MIN;
	int32_t t119 = -102972;

    t119 = (x533/((x534%x535)-x536));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x537 = INT8_MIN;
	int64_t x539 = INT64_MIN;
	uint16_t x540 = 6U;
	volatile int64_t t120 = 1646054654835LL;

    t120 = (x537/((x538%x539)-x540));

    if (t120 != 18LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x541 = 127988072526314172LLU;
	volatile int64_t x543 = INT64_MAX;
	volatile int32_t x544 = -3889576;
	static volatile uint64_t t121 = 4LLU;

    t121 = (x541/((x542%x543)-x544));

    if (t121 != 32903247602LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x547 = INT32_MIN;
	static int16_t x548 = 6801;
	volatile int32_t t122 = 18;

    t122 = (x545/((x546%x547)-x548));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t x549 = -1943771;
	int64_t x550 = INT64_MIN;
	int8_t x551 = -1;
	int16_t x552 = INT16_MAX;
	int64_t t123 = 1597387LL;

    t123 = (x549/((x550%x551)-x552));

    if (t123 != 59LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x553 = 1;
	int32_t x554 = INT32_MIN;
	volatile int8_t x555 = INT8_MIN;
	volatile uint8_t x556 = UINT8_MAX;
	static int32_t t124 = 1293;

    t124 = (x553/((x554%x555)-x556));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x557 = UINT8_MAX;
	int16_t x559 = 15630;
	static volatile int8_t x560 = INT8_MIN;
	static int32_t t125 = -44683;

    t125 = (x557/((x558%x559)-x560));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x562 = INT16_MIN;
	int64_t x563 = INT64_MIN;

    t126 = (x561/((x562%x563)-x564));

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x569 = -1;
	uint16_t x570 = UINT16_MAX;
	volatile uint16_t x572 = 84U;
	int64_t t127 = 977238658960925050LL;

    t127 = (x569/((x570%x571)-x572));

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x574 = 363671LLU;
	volatile int16_t x575 = INT16_MAX;
	int8_t x576 = -7;
	uint64_t t128 = 25879449LLU;

    t128 = (x573/((x574%x575)-x576));

    if (t128 != 5691682836689155LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x577 = INT16_MIN;
	volatile uint16_t x578 = 19U;
	volatile int8_t x579 = -1;
	int8_t x580 = -1;

    t129 = (x577/((x578%x579)-x580));

    if (t129 != -32768) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x581 = INT32_MAX;
	volatile uint16_t x582 = 849U;
	static int8_t x584 = -1;
	volatile uint64_t t130 = 20448366349LLU;

    t130 = (x581/((x582%x583)-x584));

    if (t130 != 2526451LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x585 = INT32_MIN;
	static uint64_t x587 = UINT64_MAX;

    t131 = (x585/((x586%x587)-x588));

    if (t131 != 0LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x590 = -1LL;
	int16_t x591 = INT16_MAX;
	int64_t x592 = -928092365166LL;
	volatile int64_t t132 = 0LL;

    t132 = (x589/((x590%x591)-x592));

    if (t132 != 9937989LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x595 = 4206717116LLU;
	volatile int64_t x596 = INT64_MIN;
	volatile uint64_t t133 = 11382122106289484LLU;

    t133 = (x593/((x594%x595)-x596));

    if (t133 != 1LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static int8_t x597 = -62;
	uint16_t x599 = 16U;
	static uint16_t x600 = UINT16_MAX;
	volatile int32_t t134 = 10167336;

    t134 = (x597/((x598%x599)-x600));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x601 = 493997945340072341LL;
	volatile int8_t x602 = -1;
	int64_t x603 = INT64_MIN;
	uint32_t x604 = UINT32_MAX;
	static int64_t t135 = -5834983840LL;

    t135 = (x601/((x602%x603)-x604));

    if (t135 != -115017859LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x605 = 1479788LL;
	volatile int32_t x606 = INT32_MIN;
	int16_t x607 = -1;
	uint64_t x608 = 3015927551079833403LLU;
	static uint64_t t136 = 19073LLU;

    t136 = (x605/((x606%x607)-x608));

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x609 = -14195670;
	int16_t x610 = -10;
	volatile int8_t x612 = -1;

    t137 = (x609/((x610%x611)-x612));

    if (t137 != 0U) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x614 = 64382889840974829LLU;
	int64_t x615 = INT64_MAX;
	int32_t x616 = INT32_MAX;
	static uint64_t t138 = 2324891909371508517LLU;

    t138 = (x613/((x614%x615)-x616));

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x617 = INT16_MIN;
	int32_t x619 = INT32_MAX;
	static volatile int16_t x620 = -63;
	static volatile int32_t t139 = 15572;

    t139 = (x617/((x618%x619)-x620));

    if (t139 != 504) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x622 = 3626150U;
	uint16_t x623 = 1U;
	int64_t x624 = INT64_MAX;
	volatile int64_t t140 = 954LL;

    t140 = (x621/((x622%x623)-x624));

    if (t140 != -1LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x625 = 30634599777889LLU;
	uint16_t x626 = 25488U;
	int32_t x627 = INT32_MAX;
	int8_t x628 = -48;

    t141 = (x625/((x626%x627)-x628));

    if (t141 != 1199663211LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x629 = UINT8_MAX;
	static int8_t x630 = INT8_MAX;
	int16_t x631 = INT16_MIN;
	volatile int16_t x632 = INT16_MIN;
	volatile int32_t t142 = -32473;

    t142 = (x629/((x630%x631)-x632));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x633 = 301536999357LL;
	uint64_t x635 = UINT64_MAX;
	uint32_t x636 = 239897U;

    t143 = (x633/((x634%x635)-x636));

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile int64_t x637 = INT64_MAX;
	int16_t x640 = 2;
	volatile int64_t t144 = 36646LL;

    t144 = (x637/((x638%x639)-x640));

    if (t144 != -4611686018427387903LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint16_t x641 = 2U;
	int16_t x642 = INT16_MIN;
	static int64_t x644 = 1388470053765551683LL;
	int64_t t145 = 83907561928804059LL;

    t145 = (x641/((x642%x643)-x644));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x645 = UINT16_MAX;
	int32_t x646 = 101267;
	volatile int64_t x647 = -1LL;
	volatile int64_t t146 = 1080LL;

    t146 = (x645/((x646%x647)-x648));

    if (t146 != 65535LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x649 = 0;
	int64_t x650 = -203097LL;
	int16_t x651 = INT16_MAX;
	static int8_t x652 = INT8_MIN;
	int64_t t147 = -1LL;

    t147 = (x649/((x650%x651)-x652));

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint16_t x656 = UINT16_MAX;
	volatile int64_t t148 = -864LL;

    t148 = (x653/((x654%x655)-x656));

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int8_t x657 = INT8_MIN;
	int8_t x660 = INT8_MIN;
	volatile int64_t t149 = -235LL;

    t149 = (x657/((x658%x659)-x660));

    if (t149 != 2LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static int64_t x661 = INT64_MAX;
	uint8_t x662 = 124U;
	uint16_t x663 = 1839U;
	static int64_t t150 = 18LL;

    t150 = (x661/((x662%x663)-x664));

    if (t150 != 73786976294838206LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static int16_t x666 = INT16_MIN;
	static uint16_t x667 = 2902U;

    t151 = (x665/((x666%x667)-x668));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x669 = 84775LLU;
	volatile uint16_t x672 = 2U;
	uint64_t t152 = 994LLU;

    t152 = (x669/((x670%x671)-x672));

    if (t152 != 2LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x673 = UINT32_MAX;
	volatile int32_t x674 = -1347515;
	uint64_t x675 = UINT64_MAX;
	int8_t x676 = INT8_MIN;
	uint64_t t153 = 4974393035376846486LLU;

    t153 = (x673/((x674%x675)-x676));

    if (t153 != 0LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static int64_t x677 = 6957LL;
	uint32_t x678 = UINT32_MAX;
	volatile uint8_t x680 = 11U;

    t154 = (x677/((x678%x679)-x680));

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x681 = 513527LLU;
	static uint64_t x682 = UINT64_MAX;
	static volatile uint32_t x683 = 53U;
	int8_t x684 = INT8_MIN;
	volatile uint64_t t155 = 14390410405LLU;

    t155 = (x681/((x682%x683)-x684));

    if (t155 != 3616LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	static int8_t x685 = INT8_MIN;
	int8_t x686 = -1;
	static uint32_t x687 = UINT32_MAX;
	static int8_t x688 = -1;

    t156 = (x685/((x686%x687)-x688));

    if (t156 != 4294967168U) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint64_t x689 = UINT64_MAX;
	uint32_t x690 = 14918U;
	static int8_t x691 = -3;
	volatile uint64_t t157 = 523161LLU;

    t157 = (x689/((x690%x691)-x692));

    if (t157 != 1236957290532391LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static int32_t x693 = INT32_MIN;
	static uint16_t x694 = UINT16_MAX;
	volatile uint64_t x696 = 719239124735373LLU;
	static uint64_t t158 = 5100LLU;

    t158 = (x693/((x694%x695)-x696));

    if (t158 != 1LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x697 = 21;
	int8_t x698 = INT8_MIN;
	int8_t x699 = -1;
	int64_t x700 = INT64_MAX;
	static int64_t t159 = 244LL;

    t159 = (x697/((x698%x699)-x700));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x705 = UINT32_MAX;
	int16_t x706 = 49;
	uint64_t x707 = UINT64_MAX;
	uint64_t t160 = 275926LLU;

    t160 = (x705/((x706%x707)-x708));

    if (t160 != 452292LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile uint32_t x710 = 90300506U;
	int16_t x711 = 8062;
	uint32_t x712 = 83U;

    t161 = (x709/((x710%x711)-x712));

    if (t161 != 0U) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x713 = UINT32_MAX;
	int8_t x714 = -1;
	uint16_t x715 = 38U;
	int32_t x716 = INT32_MAX;

    t162 = (x713/((x714%x715)-x716));

    if (t162 != 1U) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x717 = INT16_MIN;
	volatile int32_t x718 = -1;
	uint16_t x719 = UINT16_MAX;
	uint8_t x720 = UINT8_MAX;
	volatile int32_t t163 = 11;

    t163 = (x717/((x718%x719)-x720));

    if (t163 != 128) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x721 = INT8_MIN;
	int64_t x722 = -2260213526967455266LL;
	int8_t x723 = -1;
	uint16_t x724 = UINT16_MAX;
	volatile int64_t t164 = -213544622381LL;

    t164 = (x721/((x722%x723)-x724));

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x725 = INT16_MIN;
	int16_t x726 = INT16_MAX;
	int8_t x728 = -1;
	volatile int32_t t165 = 0;

    t165 = (x725/((x726%x727)-x728));

    if (t165 != -1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x729 = -170;
	uint16_t x730 = 2805U;
	uint16_t x731 = 29788U;
	uint32_t t166 = 2769U;

    t166 = (x729/((x730%x731)-x732));

    if (t166 != 1530636U) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x733 = -1;
	volatile int64_t x734 = INT64_MAX;
	static uint16_t x735 = UINT16_MAX;
	static int64_t t167 = 2132164016LL;

    t167 = (x733/((x734%x735)-x736));

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint64_t x737 = 93LLU;
	volatile int64_t x738 = INT64_MIN;
	uint32_t x739 = 723779476U;
	volatile uint64_t x740 = UINT64_MAX;
	volatile uint64_t t168 = 489LLU;

    t168 = (x737/((x738%x739)-x740));

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x741 = INT32_MAX;
	uint32_t x742 = 0U;
	static int16_t x743 = INT16_MIN;
	int64_t x744 = -1LL;
	int64_t t169 = -5052808608LL;

    t169 = (x741/((x742%x743)-x744));

    if (t169 != 2147483647LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x746 = INT32_MIN;
	int64_t x747 = INT64_MIN;
	uint32_t x748 = 1751744U;
	volatile int64_t t170 = -16856218445LL;

    t170 = (x745/((x746%x747)-x748));

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x749 = UINT64_MAX;
	uint8_t x750 = 31U;
	int8_t x751 = INT8_MAX;
	uint8_t x752 = 0U;
	volatile uint64_t t171 = 790012683345460032LLU;

    t171 = (x749/((x750%x751)-x752));

    if (t171 != 595056260442243600LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int16_t x753 = 2564;
	int32_t x754 = INT32_MAX;
	uint64_t x755 = 5524463242LLU;
	uint64_t x756 = UINT64_MAX;
	volatile uint64_t t172 = 2119275556614363LLU;

    t172 = (x753/((x754%x755)-x756));

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x757 = 1;
	int64_t x758 = INT64_MAX;
	uint32_t x759 = 1098476307U;
	int64_t x760 = -1LL;
	volatile int64_t t173 = 217802LL;

    t173 = (x757/((x758%x759)-x760));

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x761 = 1;
	volatile int64_t x762 = INT64_MAX;
	volatile int32_t x763 = 11;
	volatile int32_t x764 = INT32_MIN;
	int64_t t174 = -25702742LL;

    t174 = (x761/((x762%x763)-x764));

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile int16_t x766 = -217;
	int8_t x767 = 52;
	int16_t x768 = INT16_MIN;
	static uint64_t t175 = 26226787LLU;

    t175 = (x765/((x766%x767)-x768));

    if (t175 != 563104614722963LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile int64_t x769 = INT64_MAX;
	int64_t x770 = -1055248618372556LL;
	int8_t x771 = -4;
	uint32_t x772 = 6U;
	static int64_t t176 = -577100619320LL;

    t176 = (x769/((x770%x771)-x772));

    if (t176 != -1537228672809129301LL) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint8_t x773 = 0U;
	int8_t x774 = -1;
	int8_t x775 = -1;

    t177 = (x773/((x774%x775)-x776));

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x777 = -60LL;
	int32_t x778 = INT32_MIN;
	int64_t x779 = -1LL;
	volatile int64_t t178 = -7650765430955LL;

    t178 = (x777/((x778%x779)-x780));

    if (t178 != 30LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x781 = -5818;
	uint8_t x784 = 1U;
	volatile int64_t t179 = -5529LL;

    t179 = (x781/((x782%x783)-x784));

    if (t179 != 5818LL) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint8_t x785 = 41U;
	static uint8_t x786 = 29U;
	uint64_t x787 = 8691516LLU;
	int8_t x788 = INT8_MIN;
	volatile uint64_t t180 = 7LLU;

    t180 = (x785/((x786%x787)-x788));

    if (t180 != 0LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x789 = INT8_MIN;
	int32_t x791 = INT32_MIN;
	volatile uint64_t x792 = 25367444399427782LLU;
	volatile uint64_t t181 = 27384392093091896LLU;

    t181 = (x789/((x790%x791)-x792));

    if (t181 != 1LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x793 = INT32_MIN;
	int64_t x794 = INT64_MIN;
	volatile int32_t x795 = INT32_MAX;
	uint8_t x796 = 0U;

    t182 = (x793/((x794%x795)-x796));

    if (t182 != 1073741824LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x798 = -1;
	int16_t x799 = 49;
	uint64_t x800 = 52788LLU;
	volatile uint64_t t183 = 104556LLU;

    t183 = (x797/((x798%x799)-x800));

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x801 = UINT16_MAX;
	uint8_t x802 = 6U;
	uint8_t x803 = 2U;
	uint32_t x804 = 1629175727U;

    t184 = (x801/((x802%x803)-x804));

    if (t184 != 0U) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x809 = -1LL;
	uint16_t x811 = 1U;
	int16_t x812 = INT16_MIN;
	volatile int64_t t185 = -28824180592954LL;

    t185 = (x809/((x810%x811)-x812));

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static int8_t x813 = -3;
	int64_t x814 = INT64_MIN;
	uint16_t x815 = 25U;
	volatile int16_t x816 = INT16_MIN;
	volatile int64_t t186 = -49338783310LL;

    t186 = (x813/((x814%x815)-x816));

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static int16_t x818 = 477;
	volatile int64_t x819 = -348389LL;
	int32_t x820 = INT32_MIN;

    t187 = (x817/((x818%x819)-x820));

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x821 = 0;
	int16_t x822 = -15;
	int8_t x823 = 27;
	uint16_t x824 = 3767U;
	volatile int32_t t188 = -434420;

    t188 = (x821/((x822%x823)-x824));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int16_t x826 = INT16_MIN;
	int8_t x827 = -1;
	static volatile uint16_t x828 = UINT16_MAX;
	int32_t t189 = 85;

    t189 = (x825/((x826%x827)-x828));

    if (t189 != -1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x829 = 3U;
	int16_t x831 = -1;
	int32_t x832 = -1;
	volatile uint64_t t190 = 131348208LLU;

    t190 = (x829/((x830%x831)-x832));

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x837 = INT32_MIN;
	int32_t x838 = INT32_MIN;
	uint64_t x839 = 1007LLU;

    t191 = (x837/((x838%x839)-x840));

    if (t191 != 25063510966796288LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x841 = -28;
	int16_t x842 = 55;
	int8_t x843 = -1;
	volatile uint32_t x844 = 951210718U;
	uint32_t t192 = 10U;

    t192 = (x841/((x842%x843)-x844));

    if (t192 != 1U) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x846 = 10;
	volatile int32_t x848 = INT32_MAX;

    t193 = (x845/((x846%x847)-x848));

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x849 = -1;
	volatile int64_t x850 = -1LL;
	uint8_t x851 = 25U;
	uint64_t x852 = 10LLU;
	volatile uint64_t t194 = 2251186226594597421LLU;

    t194 = (x849/((x850%x851)-x852));

    if (t194 != 1LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x853 = 60U;
	volatile int32_t x854 = INT32_MAX;
	static int32_t x856 = 209;
	volatile uint64_t t195 = 396224229662LLU;

    t195 = (x853/((x854%x855)-x856));

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint64_t x857 = 2817448331108336LLU;
	int32_t x858 = INT32_MAX;
	int8_t x859 = 2;
	volatile uint64_t t196 = 122290368LLU;

    t196 = (x857/((x858%x859)-x860));

    if (t196 != 1408724165554168LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x861 = INT16_MAX;
	int16_t x862 = -1;
	int8_t x863 = INT8_MIN;
	volatile int8_t x864 = 0;
	volatile int32_t t197 = 0;

    t197 = (x861/((x862%x863)-x864));

    if (t197 != -32767) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint8_t x865 = 9U;
	int8_t x866 = INT8_MAX;
	static volatile int32_t x867 = INT32_MIN;
	static int8_t x868 = INT8_MIN;
	int32_t t198 = 367039767;

    t198 = (x865/((x866%x867)-x868));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int32_t x869 = -2;
	int8_t x871 = -1;
	uint16_t x872 = 24798U;
	int32_t t199 = 1;

    t199 = (x869/((x870%x871)-x872));

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

