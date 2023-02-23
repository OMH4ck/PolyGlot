
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

int32_t x4 = INT32_MIN;
int8_t x7 = INT8_MIN;
int64_t x9 = INT64_MIN;
int64_t x11 = INT64_MIN;
volatile int8_t x14 = -24;
int64_t x15 = -1LL;
static volatile int64_t t3 = INT64_MIN;
int8_t x18 = -1;
int32_t t7 = 29851;
static uint32_t x33 = UINT32_MAX;
int16_t x34 = -22;
int32_t t9 = -519283;
int64_t x41 = INT64_MAX;
volatile int64_t t10 = INT64_MAX;
int32_t t11 = -1340863;
static volatile int32_t t12 = INT32_MAX;
int32_t x59 = 238;
uint32_t x61 = 1299349U;
volatile uint32_t t15 = 13011U;
int64_t x67 = -1LL;
volatile uint16_t x73 = 15455U;
uint32_t x81 = UINT32_MAX;
uint8_t x83 = UINT8_MAX;
static int64_t x86 = -1LL;
int64_t x95 = INT64_MIN;
volatile int8_t x100 = -1;
int16_t x103 = -1026;
int32_t x104 = -24;
static int64_t t25 = -1617262LL;
int32_t t26 = 43;
int64_t x110 = INT64_MAX;
static int8_t x118 = 2;
volatile uint8_t x119 = 123U;
int16_t x121 = INT16_MIN;
volatile int32_t t30 = -14517717;
uint32_t x140 = 181U;
uint16_t x142 = 15U;
int16_t x145 = -1784;
uint8_t x147 = 13U;
int8_t x148 = 1;
static int8_t x153 = INT8_MIN;
uint16_t x154 = 28U;
int32_t t37 = -20;
uint16_t x170 = 656U;
uint16_t x173 = 86U;
volatile int32_t t43 = -1663074;
static int32_t x196 = INT32_MIN;
uint32_t x199 = UINT32_MAX;
int32_t x200 = INT32_MIN;
volatile int64_t x201 = INT64_MIN;
int16_t x203 = 1;
int32_t x214 = INT32_MAX;
static uint8_t x215 = 119U;
int16_t x224 = -1;
uint16_t x226 = 529U;
int32_t t54 = INT32_MIN;
volatile int64_t x235 = -4495372506568572417LL;
volatile int32_t t56 = -15908281;
volatile int32_t t57 = -228491;
int32_t t60 = 31;
uint8_t x258 = 0U;
volatile int32_t t61 = -13;
static int64_t x274 = INT64_MAX;
int32_t t65 = 35383937;
static uint32_t x279 = UINT32_MAX;
int8_t x292 = INT8_MAX;
static int64_t x300 = INT64_MIN;
int16_t x311 = INT16_MIN;
volatile uint32_t x314 = 148U;
volatile uint8_t x317 = 1U;
uint8_t x318 = 64U;
static volatile int16_t x321 = INT16_MIN;
static int16_t x332 = 91;
int32_t x335 = INT32_MAX;
int32_t x336 = INT32_MAX;
int32_t t80 = 43;
uint16_t x349 = 21837U;
int8_t x355 = INT8_MAX;
volatile int32_t x356 = INT32_MIN;
static uint64_t x360 = 931716323151971LLU;
int64_t x365 = INT64_MIN;
int32_t x376 = INT32_MAX;
uint64_t x388 = 1LLU;
int64_t x389 = INT64_MIN;
static uint32_t x394 = UINT32_MAX;
uint32_t x396 = 293220378U;
int32_t x397 = -1;
uint8_t x399 = 19U;
uint64_t x408 = 419354LLU;
int16_t x409 = 1;
static uint16_t x414 = UINT16_MAX;
int8_t x415 = INT8_MIN;
int32_t t98 = INT32_MIN;
volatile uint8_t x424 = 1U;
int16_t x426 = -6723;
uint32_t x434 = 10502U;
int32_t x442 = INT32_MIN;
volatile int32_t x448 = INT32_MIN;
static uint32_t x453 = UINT32_MAX;
int32_t x454 = INT32_MIN;
uint64_t x456 = UINT64_MAX;
int64_t x457 = INT64_MAX;
volatile int32_t x459 = -1;
uint8_t x462 = 8U;
int16_t x464 = INT16_MIN;
static volatile int32_t t110 = 760;
static volatile int32_t t112 = 1;
int64_t x476 = INT64_MAX;
volatile int64_t t113 = INT64_MIN;
static int16_t x478 = 0;
uint16_t x491 = UINT16_MAX;
int32_t t117 = 49962;
uint64_t x497 = UINT64_MAX;
uint64_t x503 = 508624523528324LLU;
int8_t x506 = INT8_MIN;
volatile int8_t x512 = INT8_MIN;
int8_t x513 = 1;
volatile int16_t x516 = 2635;
static int32_t x519 = INT32_MIN;
static int16_t x520 = INT16_MIN;
int32_t t126 = INT32_MIN;
int64_t x529 = -1LL;
volatile int32_t t128 = -637;
int32_t t129 = 7839;
int16_t x543 = INT16_MIN;
int32_t x546 = INT32_MAX;
static uint16_t x548 = 434U;
static volatile int16_t x551 = 105;
volatile int32_t x556 = INT32_MIN;
volatile uint32_t t134 = UINT32_MAX;
int64_t x561 = -2663811198710509LL;
static volatile int32_t t138 = 376663;
static volatile uint64_t x591 = 2980816727181207LLU;
int64_t x599 = INT64_MIN;
int32_t t144 = -189654743;
volatile int32_t x601 = -14366369;
volatile int32_t t145 = 311433478;
volatile int32_t x606 = -1;
int32_t x614 = -1;
static volatile uint64_t x621 = UINT64_MAX;
volatile uint16_t x626 = 2U;
int16_t x632 = INT16_MIN;
int8_t x645 = 0;
uint32_t x652 = UINT32_MAX;
uint32_t x655 = UINT32_MAX;
volatile int32_t t158 = 265;
int32_t t159 = -9;
static int64_t x670 = INT64_MIN;
static int64_t x677 = INT64_MIN;
volatile int64_t t162 = INT64_MIN;
int32_t t164 = -1786071;
static int8_t x689 = 0;
uint32_t x697 = 1U;
uint32_t x699 = 1542U;
int64_t x701 = 11519LL;
int64_t t168 = 200759110917246558LL;
int64_t x709 = INT64_MAX;
uint16_t x712 = UINT16_MAX;
static uint8_t x713 = UINT8_MAX;
volatile int32_t x718 = -1;
int64_t x720 = -75274336203901LL;
uint64_t x725 = UINT64_MAX;
volatile uint64_t t174 = UINT64_MAX;
int32_t x729 = -1;
uint64_t x731 = 110345458924424174LLU;
volatile uint16_t x732 = 29U;
int32_t x737 = -21;
uint8_t x741 = 27U;
int8_t x742 = INT8_MAX;
uint32_t x745 = UINT32_MAX;
static int64_t x757 = -1LL;
volatile int64_t t182 = -9LL;
static volatile uint64_t x762 = 117574579955LLU;
uint16_t x771 = 10U;
uint64_t x773 = 11898040LLU;
int64_t x775 = INT64_MIN;
int64_t x780 = INT64_MAX;
static int64_t t186 = INT64_MIN;
int32_t x796 = 2872953;
volatile int16_t x797 = INT16_MIN;
uint32_t t192 = 665306U;
uint64_t x808 = UINT64_MAX;
int8_t x809 = -15;
int64_t x811 = 130201625587254820LL;
int16_t x813 = INT16_MIN;
int64_t x817 = -1LL;
int8_t x818 = INT8_MAX;
volatile int16_t x819 = 1;
static int8_t x824 = 2;
volatile int32_t x828 = -1;
volatile uint32_t x832 = UINT32_MAX;


void f0(void) {
    	uint64_t x1 = 8254929LLU;
	static volatile int64_t x2 = INT64_MIN;
	static uint32_t x3 = UINT32_MAX;
	uint64_t t0 = 43451LLU;

    t0 = (x1-((x2%x3)==x4));

    if (t0 != 8254928LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x5 = INT16_MIN;
	volatile int16_t x6 = -1021;
	static uint32_t x8 = 900729115U;
	int32_t t1 = -235603;

    t1 = (x5-((x6%x7)==x8));

    if (t1 != -32768) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x10 = 6365577U;
	volatile int8_t x12 = -1;
	int64_t t2 = INT64_MIN;

    t2 = (x9-((x10%x11)==x12));

    if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile int64_t x13 = INT64_MIN;
	int16_t x16 = INT16_MIN;

    t3 = (x13-((x14%x15)==x16));

    if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = 33367113LLU;
	int32_t x19 = INT32_MIN;
	int64_t x20 = 3715628225247511848LL;
	static volatile uint64_t t4 = 728101467085140LLU;

    t4 = (x17-((x18%x19)==x20));

    if (t4 != 33367113LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x21 = UINT16_MAX;
	static int8_t x22 = INT8_MAX;
	uint8_t x23 = 24U;
	int16_t x24 = INT16_MIN;
	volatile int32_t t5 = -12;

    t5 = (x21-((x22%x23)==x24));

    if (t5 != 65535) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = INT16_MIN;
	int64_t x26 = 4162753LL;
	int64_t x27 = INT64_MIN;
	uint8_t x28 = 7U;
	static int32_t t6 = 643660366;

    t6 = (x25-((x26%x27)==x28));

    if (t6 != -32768) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x29 = -1;
	int16_t x30 = 3900;
	static uint64_t x31 = UINT64_MAX;
	int64_t x32 = -53061535223882233LL;

    t7 = (x29-((x30%x31)==x32));

    if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x35 = -239103LL;
	uint16_t x36 = 98U;
	uint32_t t8 = UINT32_MAX;

    t8 = (x33-((x34%x35)==x36));

    if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x37 = 22U;
	uint16_t x38 = 14U;
	uint32_t x39 = 6U;
	uint64_t x40 = UINT64_MAX;

    t9 = (x37-((x38%x39)==x40));

    if (t9 != 22) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x42 = INT32_MIN;
	int8_t x43 = 25;
	static int8_t x44 = INT8_MIN;

    t10 = (x41-((x42%x43)==x44));

    if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = -1;
	int32_t x46 = INT32_MIN;
	static int64_t x47 = INT64_MIN;
	int32_t x48 = INT32_MAX;

    t11 = (x45-((x46%x47)==x48));

    if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
    	static int32_t x49 = INT32_MAX;
	static int8_t x50 = 1;
	static volatile int16_t x51 = 15;
	static int32_t x52 = -1;

    t12 = (x49-((x50%x51)==x52));

    if (t12 != INT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint8_t x53 = 4U;
	int8_t x54 = -1;
	int32_t x55 = INT32_MAX;
	uint64_t x56 = 7815626275511543LLU;
	int32_t t13 = 69;

    t13 = (x53-((x54%x55)==x56));

    if (t13 != 4) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = 61;
	int64_t x58 = INT64_MIN;
	int16_t x60 = INT16_MAX;
	int32_t t14 = -28;

    t14 = (x57-((x58%x59)==x60));

    if (t14 != 61) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x62 = 2;
	int16_t x63 = INT16_MIN;
	int64_t x64 = -23LL;

    t15 = (x61-((x62%x63)==x64));

    if (t15 != 1299349U) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint16_t x65 = UINT16_MAX;
	volatile int8_t x66 = INT8_MIN;
	static uint16_t x68 = 1U;
	static volatile int32_t t16 = -27582531;

    t16 = (x65-((x66%x67)==x68));

    if (t16 != 65535) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = INT64_MAX;
	int8_t x70 = -5;
	static volatile int32_t x71 = INT32_MAX;
	uint64_t x72 = 182452265LLU;
	int64_t t17 = INT64_MAX;

    t17 = (x69-((x70%x71)==x72));

    if (t17 != INT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x74 = INT32_MAX;
	int16_t x75 = -55;
	int32_t x76 = INT32_MAX;
	int32_t t18 = -301;

    t18 = (x73-((x74%x75)==x76));

    if (t18 != 15455) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = -214;
	volatile uint8_t x78 = 16U;
	volatile int64_t x79 = -10LL;
	int8_t x80 = 16;
	int32_t t19 = 166704226;

    t19 = (x77-((x78%x79)==x80));

    if (t19 != -214) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x82 = 37629286242018LLU;
	static volatile int8_t x84 = 4;
	uint32_t t20 = UINT32_MAX;

    t20 = (x81-((x82%x83)==x84));

    if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int32_t x85 = INT32_MIN;
	static volatile uint8_t x87 = 2U;
	volatile uint32_t x88 = UINT32_MAX;
	int32_t t21 = INT32_MIN;

    t21 = (x85-((x86%x87)==x88));

    if (t21 != INT32_MIN) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x89 = INT32_MIN;
	int16_t x90 = INT16_MIN;
	uint8_t x91 = 71U;
	volatile int64_t x92 = -666LL;
	int32_t t22 = INT32_MIN;

    t22 = (x89-((x90%x91)==x92));

    if (t22 != INT32_MIN) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = INT16_MIN;
	static int64_t x94 = INT64_MAX;
	static int8_t x96 = -1;
	volatile int32_t t23 = -93794;

    t23 = (x93-((x94%x95)==x96));

    if (t23 != -32768) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x97 = INT16_MAX;
	int64_t x98 = -3321334994LL;
	static int64_t x99 = INT64_MAX;
	volatile int32_t t24 = 0;

    t24 = (x97-((x98%x99)==x100));

    if (t24 != 32767) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = 794530LL;
	static int8_t x102 = -2;

    t25 = (x101-((x102%x103)==x104));

    if (t25 != 794530LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = 2183;
	int64_t x106 = INT64_MIN;
	volatile int16_t x107 = INT16_MIN;
	int32_t x108 = INT32_MAX;

    t26 = (x105-((x106%x107)==x108));

    if (t26 != 2183) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x109 = 1U;
	volatile int16_t x111 = 981;
	int32_t x112 = INT32_MIN;
	int32_t t27 = 9441;

    t27 = (x109-((x110%x111)==x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x113 = 4126U;
	int64_t x114 = INT64_MIN;
	uint8_t x115 = 3U;
	int32_t x116 = 10422412;
	volatile int32_t t28 = -148362614;

    t28 = (x113-((x114%x115)==x116));

    if (t28 != 4126) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = -3;
	int16_t x120 = 444;
	int32_t t29 = 11317;

    t29 = (x117-((x118%x119)==x120));

    if (t29 != -3) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x122 = -1LL;
	int16_t x123 = INT16_MIN;
	uint32_t x124 = 3387U;

    t30 = (x121-((x122%x123)==x124));

    if (t30 != -32768) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x125 = 0U;
	uint8_t x126 = 26U;
	int64_t x127 = -1LL;
	int64_t x128 = 79871925825495947LL;
	volatile int32_t t31 = 290440910;

    t31 = (x125-((x126%x127)==x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x129 = -1;
	int32_t x130 = INT32_MIN;
	static int64_t x131 = -1LL;
	uint32_t x132 = UINT32_MAX;
	static volatile int32_t t32 = -203328;

    t32 = (x129-((x130%x131)==x132));

    if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x137 = 29547178LLU;
	int32_t x138 = 975128687;
	static int8_t x139 = INT8_MIN;
	uint64_t t33 = 24610144850730409LLU;

    t33 = (x137-((x138%x139)==x140));

    if (t33 != 29547178LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x141 = -1;
	int64_t x143 = INT64_MAX;
	static int32_t x144 = -5600;
	int32_t t34 = -208734;

    t34 = (x141-((x142%x143)==x144));

    if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x146 = 10516235U;
	volatile int32_t t35 = -28559;

    t35 = (x145-((x146%x147)==x148));

    if (t35 != -1784) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint64_t x149 = 1931LLU;
	uint16_t x150 = 30U;
	volatile int32_t x151 = INT32_MIN;
	static int8_t x152 = INT8_MAX;
	uint64_t t36 = 7517LLU;

    t36 = (x149-((x150%x151)==x152));

    if (t36 != 1931LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x155 = INT16_MIN;
	int64_t x156 = INT64_MAX;

    t37 = (x153-((x154%x155)==x156));

    if (t37 != -128) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x157 = 4029U;
	static int32_t x158 = INT32_MIN;
	uint64_t x159 = 8619421LLU;
	uint64_t x160 = 173317562LLU;
	int32_t t38 = 246;

    t38 = (x157-((x158%x159)==x160));

    if (t38 != 4029) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x161 = 13647U;
	static volatile int8_t x162 = 26;
	static uint8_t x163 = UINT8_MAX;
	static int16_t x164 = -1;
	int32_t t39 = 10959443;

    t39 = (x161-((x162%x163)==x164));

    if (t39 != 13647) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x165 = 3235387196186986164LLU;
	static volatile int8_t x166 = -1;
	int64_t x167 = -1LL;
	volatile int16_t x168 = INT16_MIN;
	volatile uint64_t t40 = 5443112LLU;

    t40 = (x165-((x166%x167)==x168));

    if (t40 != 3235387196186986164LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x169 = INT16_MAX;
	uint8_t x171 = UINT8_MAX;
	int16_t x172 = INT16_MAX;
	volatile int32_t t41 = 1;

    t41 = (x169-((x170%x171)==x172));

    if (t41 != 32767) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint32_t x174 = UINT32_MAX;
	int64_t x175 = 690860374897686LL;
	uint64_t x176 = UINT64_MAX;
	int32_t t42 = 13;

    t42 = (x173-((x174%x175)==x176));

    if (t42 != 86) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x177 = INT16_MIN;
	static int64_t x178 = INT64_MAX;
	uint8_t x179 = UINT8_MAX;
	uint8_t x180 = UINT8_MAX;

    t43 = (x177-((x178%x179)==x180));

    if (t43 != -32768) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x181 = UINT32_MAX;
	volatile int8_t x182 = INT8_MIN;
	int8_t x183 = INT8_MIN;
	int32_t x184 = 3;
	uint32_t t44 = UINT32_MAX;

    t44 = (x181-((x182%x183)==x184));

    if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x185 = -1;
	static uint16_t x186 = 1726U;
	uint8_t x187 = UINT8_MAX;
	volatile int8_t x188 = -3;
	int32_t t45 = -972122163;

    t45 = (x185-((x186%x187)==x188));

    if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint16_t x189 = UINT16_MAX;
	volatile int8_t x190 = INT8_MAX;
	volatile int32_t x191 = 4913841;
	static int32_t x192 = INT32_MIN;
	int32_t t46 = -215948;

    t46 = (x189-((x190%x191)==x192));

    if (t46 != 65535) { NG(); } else { ; }
	
}

void f47(void) {
    	static int16_t x193 = -19;
	int8_t x194 = -1;
	int8_t x195 = INT8_MIN;
	int32_t t47 = 337;

    t47 = (x193-((x194%x195)==x196));

    if (t47 != -19) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x197 = 6;
	volatile int64_t x198 = INT64_MIN;
	int32_t t48 = -248968;

    t48 = (x197-((x198%x199)==x200));

    if (t48 != 5) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x202 = UINT32_MAX;
	int16_t x204 = INT16_MIN;
	volatile int64_t t49 = INT64_MIN;

    t49 = (x201-((x202%x203)==x204));

    if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x205 = 6586889655446549LL;
	int8_t x206 = -1;
	int32_t x207 = INT32_MAX;
	int32_t x208 = -1;
	volatile int64_t t50 = -301428578564LL;

    t50 = (x205-((x206%x207)==x208));

    if (t50 != 6586889655446548LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint8_t x213 = 101U;
	int16_t x216 = -1;
	static int32_t t51 = -2;

    t51 = (x213-((x214%x215)==x216));

    if (t51 != 101) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x217 = -26812172LL;
	volatile int32_t x218 = INT32_MAX;
	volatile uint16_t x219 = 822U;
	int8_t x220 = -1;
	volatile int64_t t52 = 1703774754566LL;

    t52 = (x217-((x218%x219)==x220));

    if (t52 != -26812172LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile int8_t x221 = INT8_MAX;
	int64_t x222 = -7655LL;
	int8_t x223 = INT8_MIN;
	volatile int32_t t53 = -87286;

    t53 = (x221-((x222%x223)==x224));

    if (t53 != 127) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x225 = INT32_MIN;
	uint32_t x227 = 154971U;
	int8_t x228 = INT8_MAX;

    t54 = (x225-((x226%x227)==x228));

    if (t54 != INT32_MIN) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x229 = UINT8_MAX;
	uint16_t x230 = 917U;
	static int32_t x231 = INT32_MAX;
	int8_t x232 = 0;
	int32_t t55 = -3;

    t55 = (x229-((x230%x231)==x232));

    if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x233 = INT8_MIN;
	uint64_t x234 = UINT64_MAX;
	int32_t x236 = -5;

    t56 = (x233-((x234%x235)==x236));

    if (t56 != -128) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x237 = -1;
	int64_t x238 = INT64_MAX;
	uint16_t x239 = 3U;
	int64_t x240 = INT64_MIN;

    t57 = (x237-((x238%x239)==x240));

    if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x241 = 1040688;
	uint8_t x242 = UINT8_MAX;
	static int64_t x243 = INT64_MIN;
	int8_t x244 = INT8_MIN;
	int32_t t58 = -3749;

    t58 = (x241-((x242%x243)==x244));

    if (t58 != 1040688) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint8_t x249 = 115U;
	volatile uint32_t x250 = UINT32_MAX;
	volatile uint8_t x251 = UINT8_MAX;
	volatile int64_t x252 = INT64_MIN;
	volatile int32_t t59 = -1155602;

    t59 = (x249-((x250%x251)==x252));

    if (t59 != 115) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x253 = UINT8_MAX;
	static volatile int64_t x254 = INT64_MIN;
	volatile uint8_t x255 = UINT8_MAX;
	int32_t x256 = INT32_MAX;

    t60 = (x253-((x254%x255)==x256));

    if (t60 != 255) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x257 = 24;
	int8_t x259 = 1;
	int16_t x260 = INT16_MAX;

    t61 = (x257-((x258%x259)==x260));

    if (t61 != 24) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile uint64_t x261 = 0LLU;
	static int8_t x262 = -1;
	int16_t x263 = INT16_MAX;
	static int16_t x264 = INT16_MIN;
	uint64_t t62 = 196LLU;

    t62 = (x261-((x262%x263)==x264));

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint8_t x265 = UINT8_MAX;
	int32_t x266 = INT32_MAX;
	int16_t x267 = -1;
	static volatile uint32_t x268 = 254166645U;
	static volatile int32_t t63 = -9359;

    t63 = (x265-((x266%x267)==x268));

    if (t63 != 255) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x269 = UINT64_MAX;
	int16_t x270 = INT16_MIN;
	int32_t x271 = INT32_MAX;
	int16_t x272 = INT16_MIN;
	volatile uint64_t t64 = 240LLU;

    t64 = (x269-((x270%x271)==x272));

    if (t64 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x273 = -57;
	int16_t x275 = 2;
	volatile uint16_t x276 = UINT16_MAX;

    t65 = (x273-((x274%x275)==x276));

    if (t65 != -57) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x277 = -1;
	volatile int8_t x278 = -1;
	static int64_t x280 = -6390805437863LL;
	volatile int32_t t66 = -36751229;

    t66 = (x277-((x278%x279)==x280));

    if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x281 = INT64_MIN;
	volatile int32_t x282 = INT32_MAX;
	volatile int32_t x283 = -1;
	static int64_t x284 = 650425062362056LL;
	volatile int64_t t67 = INT64_MIN;

    t67 = (x281-((x282%x283)==x284));

    if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint8_t x285 = 1U;
	int16_t x286 = INT16_MIN;
	static uint16_t x287 = 191U;
	int8_t x288 = INT8_MIN;
	volatile int32_t t68 = -225012990;

    t68 = (x285-((x286%x287)==x288));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x289 = UINT64_MAX;
	int64_t x290 = INT64_MAX;
	int32_t x291 = -1;
	volatile uint64_t t69 = UINT64_MAX;

    t69 = (x289-((x290%x291)==x292));

    if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x293 = -1;
	int32_t x294 = INT32_MIN;
	int64_t x295 = -1LL;
	volatile uint64_t x296 = 77909LLU;
	static volatile int32_t t70 = 305133;

    t70 = (x293-((x294%x295)==x296));

    if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x297 = 6465U;
	int8_t x298 = INT8_MIN;
	uint64_t x299 = 66381230433LLU;
	uint32_t t71 = 56U;

    t71 = (x297-((x298%x299)==x300));

    if (t71 != 6465U) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x305 = INT64_MAX;
	volatile int16_t x306 = 6;
	int16_t x307 = -1;
	uint16_t x308 = 1994U;
	static volatile int64_t t72 = INT64_MAX;

    t72 = (x305-((x306%x307)==x308));

    if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x309 = INT16_MAX;
	uint32_t x310 = UINT32_MAX;
	int8_t x312 = -1;
	int32_t t73 = 838788245;

    t73 = (x309-((x310%x311)==x312));

    if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x313 = INT64_MAX;
	volatile int32_t x315 = INT32_MIN;
	static volatile int16_t x316 = -1;
	volatile int64_t t74 = INT64_MAX;

    t74 = (x313-((x314%x315)==x316));

    if (t74 != INT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x319 = INT64_MIN;
	uint64_t x320 = 1479780LLU;
	volatile int32_t t75 = 86684;

    t75 = (x317-((x318%x319)==x320));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x322 = INT8_MAX;
	int32_t x323 = INT32_MAX;
	static int32_t x324 = -1;
	int32_t t76 = -105181417;

    t76 = (x321-((x322%x323)==x324));

    if (t76 != -32768) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x325 = INT64_MAX;
	uint32_t x326 = UINT32_MAX;
	uint64_t x327 = 7757468LLU;
	int32_t x328 = -631559;
	static volatile int64_t t77 = INT64_MAX;

    t77 = (x325-((x326%x327)==x328));

    if (t77 != INT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x329 = INT16_MIN;
	uint64_t x330 = 977122071798LLU;
	volatile int32_t x331 = 794;
	static int32_t t78 = -326687;

    t78 = (x329-((x330%x331)==x332));

    if (t78 != -32768) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x333 = 2;
	static volatile uint32_t x334 = UINT32_MAX;
	static int32_t t79 = 5795;

    t79 = (x333-((x334%x335)==x336));

    if (t79 != 2) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x337 = INT16_MAX;
	int8_t x338 = INT8_MIN;
	uint64_t x339 = 176645999LLU;
	int16_t x340 = -1;

    t80 = (x337-((x338%x339)==x340));

    if (t80 != 32767) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint8_t x341 = UINT8_MAX;
	int64_t x342 = INT64_MAX;
	uint16_t x343 = 44U;
	volatile uint32_t x344 = UINT32_MAX;
	volatile int32_t t81 = 9280;

    t81 = (x341-((x342%x343)==x344));

    if (t81 != 255) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint8_t x345 = 1U;
	static int16_t x346 = -1548;
	int16_t x347 = -1;
	volatile int16_t x348 = INT16_MIN;
	static int32_t t82 = 4389951;

    t82 = (x345-((x346%x347)==x348));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint32_t x350 = UINT32_MAX;
	static int16_t x351 = INT16_MIN;
	int8_t x352 = INT8_MAX;
	volatile int32_t t83 = -63952709;

    t83 = (x349-((x350%x351)==x352));

    if (t83 != 21837) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x353 = INT8_MIN;
	static int64_t x354 = INT64_MIN;
	volatile int32_t t84 = 40280249;

    t84 = (x353-((x354%x355)==x356));

    if (t84 != -128) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x357 = 12;
	volatile int64_t x358 = INT64_MIN;
	static int8_t x359 = -27;
	int32_t t85 = -87;

    t85 = (x357-((x358%x359)==x360));

    if (t85 != 12) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x361 = INT8_MAX;
	uint8_t x362 = UINT8_MAX;
	uint64_t x363 = 374920LLU;
	uint32_t x364 = UINT32_MAX;
	volatile int32_t t86 = 1;

    t86 = (x361-((x362%x363)==x364));

    if (t86 != 127) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x366 = UINT16_MAX;
	int32_t x367 = INT32_MAX;
	int8_t x368 = 1;
	volatile int64_t t87 = INT64_MIN;

    t87 = (x365-((x366%x367)==x368));

    if (t87 != INT64_MIN) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x369 = UINT64_MAX;
	uint64_t x370 = UINT64_MAX;
	volatile uint64_t x371 = 40808694387042LLU;
	int32_t x372 = 5356266;
	volatile uint64_t t88 = UINT64_MAX;

    t88 = (x369-((x370%x371)==x372));

    if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x373 = INT64_MIN;
	static volatile uint32_t x374 = 859095909U;
	int16_t x375 = -1;
	static int64_t t89 = INT64_MIN;

    t89 = (x373-((x374%x375)==x376));

    if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x381 = INT64_MAX;
	int32_t x382 = INT32_MIN;
	uint8_t x383 = 51U;
	volatile int32_t x384 = -1;
	int64_t t90 = INT64_MAX;

    t90 = (x381-((x382%x383)==x384));

    if (t90 != INT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x385 = INT64_MIN;
	int64_t x386 = -8048LL;
	uint8_t x387 = UINT8_MAX;
	static volatile int64_t t91 = INT64_MIN;

    t91 = (x385-((x386%x387)==x388));

    if (t91 != INT64_MIN) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x390 = -231530374LL;
	volatile uint64_t x391 = UINT64_MAX;
	int64_t x392 = INT64_MAX;
	volatile int64_t t92 = INT64_MIN;

    t92 = (x389-((x390%x391)==x392));

    if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x393 = INT16_MIN;
	volatile int16_t x395 = INT16_MIN;
	int32_t t93 = 7106;

    t93 = (x393-((x394%x395)==x396));

    if (t93 != -32768) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int16_t x398 = 6;
	uint32_t x400 = 20741257U;
	int32_t t94 = 113958584;

    t94 = (x397-((x398%x399)==x400));

    if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x401 = -48198358805555464LL;
	volatile int64_t x402 = INT64_MIN;
	uint64_t x403 = 9548LLU;
	uint32_t x404 = 5U;
	static int64_t t95 = 92842166263910LL;

    t95 = (x401-((x402%x403)==x404));

    if (t95 != -48198358805555464LL) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int64_t x405 = -1LL;
	volatile uint8_t x406 = 0U;
	static int8_t x407 = INT8_MIN;
	static volatile int64_t t96 = 24803093LL;

    t96 = (x405-((x406%x407)==x408));

    if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x410 = -1;
	uint8_t x411 = 52U;
	static int32_t x412 = INT32_MIN;
	int32_t t97 = 1;

    t97 = (x409-((x410%x411)==x412));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x413 = INT32_MIN;
	int8_t x416 = INT8_MIN;

    t98 = (x413-((x414%x415)==x416));

    if (t98 != INT32_MIN) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x417 = -1;
	static int32_t x418 = 17421001;
	volatile int32_t x419 = -1;
	static int32_t x420 = -1;
	int32_t t99 = 85260;

    t99 = (x417-((x418%x419)==x420));

    if (t99 != -1) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile uint64_t x421 = 971695206831634288LLU;
	volatile int64_t x422 = INT64_MIN;
	static int8_t x423 = INT8_MIN;
	volatile uint64_t t100 = 101218126083LLU;

    t100 = (x421-((x422%x423)==x424));

    if (t100 != 971695206831634288LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x425 = 42U;
	volatile uint32_t x427 = 157U;
	int8_t x428 = -1;
	volatile int32_t t101 = 712010147;

    t101 = (x425-((x426%x427)==x428));

    if (t101 != 42) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x429 = -1;
	uint32_t x430 = UINT32_MAX;
	int64_t x431 = INT64_MAX;
	int16_t x432 = INT16_MIN;
	volatile int32_t t102 = -122412;

    t102 = (x429-((x430%x431)==x432));

    if (t102 != -1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x433 = UINT16_MAX;
	int16_t x435 = INT16_MIN;
	volatile int32_t x436 = INT32_MIN;
	volatile int32_t t103 = -9;

    t103 = (x433-((x434%x435)==x436));

    if (t103 != 65535) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x437 = INT32_MIN;
	int8_t x438 = INT8_MIN;
	volatile int8_t x439 = -1;
	volatile int32_t x440 = INT32_MIN;
	volatile int32_t t104 = INT32_MIN;

    t104 = (x437-((x438%x439)==x440));

    if (t104 != INT32_MIN) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x441 = INT32_MIN;
	int32_t x443 = -385;
	int8_t x444 = INT8_MAX;
	volatile int32_t t105 = INT32_MIN;

    t105 = (x441-((x442%x443)==x444));

    if (t105 != INT32_MIN) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint16_t x445 = 15097U;
	volatile uint16_t x446 = 50U;
	int32_t x447 = -4508135;
	static int32_t t106 = 1;

    t106 = (x445-((x446%x447)==x448));

    if (t106 != 15097) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x449 = INT64_MIN;
	int32_t x450 = INT32_MAX;
	int8_t x451 = -55;
	static uint16_t x452 = 54U;
	int64_t t107 = INT64_MIN;

    t107 = (x449-((x450%x451)==x452));

    if (t107 != INT64_MIN) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x455 = UINT32_MAX;
	uint32_t t108 = UINT32_MAX;

    t108 = (x453-((x454%x455)==x456));

    if (t108 != UINT32_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x458 = INT32_MAX;
	int32_t x460 = 195;
	int64_t t109 = INT64_MAX;

    t109 = (x457-((x458%x459)==x460));

    if (t109 != INT64_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x461 = -2655;
	static volatile int8_t x463 = 7;

    t110 = (x461-((x462%x463)==x464));

    if (t110 != -2655) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x465 = INT64_MIN;
	int32_t x466 = INT32_MIN;
	int8_t x467 = INT8_MIN;
	int32_t x468 = INT32_MAX;
	int64_t t111 = INT64_MIN;

    t111 = (x465-((x466%x467)==x468));

    if (t111 != INT64_MIN) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x469 = INT8_MIN;
	static uint16_t x470 = 814U;
	static uint8_t x471 = 5U;
	uint32_t x472 = 10756676U;

    t112 = (x469-((x470%x471)==x472));

    if (t112 != -128) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x473 = INT64_MIN;
	int16_t x474 = -1;
	int16_t x475 = INT16_MIN;

    t113 = (x473-((x474%x475)==x476));

    if (t113 != INT64_MIN) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x477 = INT8_MIN;
	uint64_t x479 = UINT64_MAX;
	int64_t x480 = INT64_MAX;
	volatile int32_t t114 = 1327;

    t114 = (x477-((x478%x479)==x480));

    if (t114 != -128) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x481 = INT64_MIN;
	int64_t x482 = INT64_MIN;
	volatile uint32_t x483 = 20U;
	static int8_t x484 = 1;
	volatile int64_t t115 = INT64_MIN;

    t115 = (x481-((x482%x483)==x484));

    if (t115 != INT64_MIN) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x485 = -1;
	volatile uint32_t x486 = 3150U;
	uint16_t x487 = UINT16_MAX;
	int8_t x488 = 1;
	int32_t t116 = 318743501;

    t116 = (x485-((x486%x487)==x488));

    if (t116 != -1) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile int8_t x489 = INT8_MAX;
	uint32_t x490 = UINT32_MAX;
	int32_t x492 = INT32_MAX;

    t117 = (x489-((x490%x491)==x492));

    if (t117 != 127) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x493 = INT16_MIN;
	volatile int8_t x494 = 1;
	static int64_t x495 = INT64_MIN;
	int64_t x496 = 3781505291635112LL;
	int32_t t118 = 855087;

    t118 = (x493-((x494%x495)==x496));

    if (t118 != -32768) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x498 = 1750U;
	uint32_t x499 = 2002625U;
	volatile uint16_t x500 = UINT16_MAX;
	volatile uint64_t t119 = UINT64_MAX;

    t119 = (x497-((x498%x499)==x500));

    if (t119 != UINT64_MAX) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x501 = INT64_MIN;
	int8_t x502 = INT8_MIN;
	volatile int32_t x504 = INT32_MIN;
	static int64_t t120 = INT64_MIN;

    t120 = (x501-((x502%x503)==x504));

    if (t120 != INT64_MIN) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile uint32_t x505 = 7U;
	int16_t x507 = INT16_MAX;
	int64_t x508 = INT64_MIN;
	volatile uint32_t t121 = 33095152U;

    t121 = (x505-((x506%x507)==x508));

    if (t121 != 7U) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x509 = 7LLU;
	static uint32_t x510 = UINT32_MAX;
	static int64_t x511 = INT64_MIN;
	uint64_t t122 = 7886510LLU;

    t122 = (x509-((x510%x511)==x512));

    if (t122 != 7LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x514 = -1;
	uint32_t x515 = 45U;
	static int32_t t123 = -484;

    t123 = (x513-((x514%x515)==x516));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint16_t x517 = 24203U;
	int8_t x518 = INT8_MIN;
	volatile int32_t t124 = -10479284;

    t124 = (x517-((x518%x519)==x520));

    if (t124 != 24203) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x521 = INT16_MIN;
	int16_t x522 = INT16_MIN;
	uint32_t x523 = 6093189U;
	int8_t x524 = -1;
	volatile int32_t t125 = 229;

    t125 = (x521-((x522%x523)==x524));

    if (t125 != -32768) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x525 = INT32_MIN;
	int32_t x526 = -59364;
	volatile int64_t x527 = INT64_MIN;
	static uint16_t x528 = 0U;

    t126 = (x525-((x526%x527)==x528));

    if (t126 != INT32_MIN) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x530 = -1;
	static int64_t x531 = INT64_MAX;
	uint64_t x532 = UINT64_MAX;
	volatile int64_t t127 = -135931024711538LL;

    t127 = (x529-((x530%x531)==x532));

    if (t127 != -2LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x533 = 0;
	static int16_t x534 = -1877;
	int64_t x535 = INT64_MIN;
	int16_t x536 = INT16_MIN;

    t128 = (x533-((x534%x535)==x536));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x537 = 38U;
	uint16_t x538 = UINT16_MAX;
	int8_t x539 = -4;
	static int16_t x540 = 0;

    t129 = (x537-((x538%x539)==x540));

    if (t129 != 38) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x541 = INT64_MIN;
	static int32_t x542 = -226866366;
	static int64_t x544 = INT64_MAX;
	int64_t t130 = INT64_MIN;

    t130 = (x541-((x542%x543)==x544));

    if (t130 != INT64_MIN) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x545 = -1LL;
	int64_t x547 = INT64_MAX;
	int64_t t131 = -2653LL;

    t131 = (x545-((x546%x547)==x548));

    if (t131 != -1LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x549 = 3533405U;
	volatile int8_t x550 = -7;
	uint8_t x552 = UINT8_MAX;
	static volatile uint32_t t132 = 247046944U;

    t132 = (x549-((x550%x551)==x552));

    if (t132 != 3533405U) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint8_t x553 = UINT8_MAX;
	static uint8_t x554 = 1U;
	static int32_t x555 = 1703237;
	int32_t t133 = -13656;

    t133 = (x553-((x554%x555)==x556));

    if (t133 != 255) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint32_t x557 = UINT32_MAX;
	int32_t x558 = INT32_MAX;
	volatile uint64_t x559 = 1930694179419LLU;
	static uint32_t x560 = 1141U;

    t134 = (x557-((x558%x559)==x560));

    if (t134 != UINT32_MAX) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x562 = UINT32_MAX;
	uint16_t x563 = UINT16_MAX;
	int8_t x564 = -49;
	volatile int64_t t135 = 229916699243624LL;

    t135 = (x561-((x562%x563)==x564));

    if (t135 != -2663811198710509LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x565 = -1;
	static uint64_t x566 = 22346758LLU;
	int16_t x567 = -1;
	volatile uint32_t x568 = 0U;
	volatile int32_t t136 = -965341;

    t136 = (x565-((x566%x567)==x568));

    if (t136 != -1) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint32_t x569 = UINT32_MAX;
	volatile int64_t x570 = INT64_MIN;
	uint8_t x571 = 1U;
	int64_t x572 = -34022420686LL;
	volatile uint32_t t137 = UINT32_MAX;

    t137 = (x569-((x570%x571)==x572));

    if (t137 != UINT32_MAX) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x573 = 6U;
	static int32_t x574 = INT32_MIN;
	uint32_t x575 = 7U;
	int32_t x576 = INT32_MIN;

    t138 = (x573-((x574%x575)==x576));

    if (t138 != 6) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x577 = UINT8_MAX;
	int8_t x578 = INT8_MIN;
	int8_t x579 = 8;
	int16_t x580 = INT16_MIN;
	static volatile int32_t t139 = -23;

    t139 = (x577-((x578%x579)==x580));

    if (t139 != 255) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x581 = -1LL;
	static uint8_t x582 = UINT8_MAX;
	uint16_t x583 = UINT16_MAX;
	uint32_t x584 = 1633059737U;
	int64_t t140 = -5054LL;

    t140 = (x581-((x582%x583)==x584));

    if (t140 != -1LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x585 = 4;
	int16_t x586 = 73;
	int32_t x587 = INT32_MAX;
	int16_t x588 = 62;
	static int32_t t141 = -24621;

    t141 = (x585-((x586%x587)==x588));

    if (t141 != 4) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint16_t x589 = 1U;
	volatile int16_t x590 = -2246;
	int64_t x592 = INT64_MIN;
	int32_t t142 = 5;

    t142 = (x589-((x590%x591)==x592));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x593 = INT64_MAX;
	int64_t x594 = INT64_MAX;
	int16_t x595 = INT16_MIN;
	int8_t x596 = 8;
	static int64_t t143 = INT64_MAX;

    t143 = (x593-((x594%x595)==x596));

    if (t143 != INT64_MAX) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x597 = INT8_MIN;
	volatile int16_t x598 = -1;
	static int8_t x600 = -2;

    t144 = (x597-((x598%x599)==x600));

    if (t144 != -128) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x602 = UINT16_MAX;
	int64_t x603 = -1LL;
	static int16_t x604 = -1;

    t145 = (x601-((x602%x603)==x604));

    if (t145 != -14366369) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint32_t x605 = 754U;
	int16_t x607 = INT16_MAX;
	volatile int16_t x608 = INT16_MAX;
	uint32_t t146 = 27U;

    t146 = (x605-((x606%x607)==x608));

    if (t146 != 754U) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x609 = INT32_MIN;
	volatile int8_t x610 = INT8_MIN;
	volatile int8_t x611 = INT8_MAX;
	static volatile int16_t x612 = INT16_MAX;
	int32_t t147 = INT32_MIN;

    t147 = (x609-((x610%x611)==x612));

    if (t147 != INT32_MIN) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x613 = 48;
	int16_t x615 = INT16_MIN;
	uint64_t x616 = 35783LLU;
	volatile int32_t t148 = -3498259;

    t148 = (x613-((x614%x615)==x616));

    if (t148 != 48) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int8_t x617 = -1;
	volatile int16_t x618 = -1;
	int16_t x619 = INT16_MIN;
	volatile int16_t x620 = -1;
	static volatile int32_t t149 = 783;

    t149 = (x617-((x618%x619)==x620));

    if (t149 != -2) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x622 = INT64_MIN;
	uint16_t x623 = 30336U;
	volatile uint16_t x624 = 380U;
	volatile uint64_t t150 = UINT64_MAX;

    t150 = (x621-((x622%x623)==x624));

    if (t150 != UINT64_MAX) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x625 = INT16_MAX;
	int16_t x627 = INT16_MIN;
	int64_t x628 = INT64_MAX;
	volatile int32_t t151 = -447;

    t151 = (x625-((x626%x627)==x628));

    if (t151 != 32767) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint64_t x629 = 11730LLU;
	int16_t x630 = INT16_MIN;
	int64_t x631 = 26314LL;
	uint64_t t152 = 2687224022LLU;

    t152 = (x629-((x630%x631)==x632));

    if (t152 != 11730LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x633 = INT8_MAX;
	int64_t x634 = -440545944919LL;
	int32_t x635 = INT32_MIN;
	static uint64_t x636 = 1LLU;
	volatile int32_t t153 = -1;

    t153 = (x633-((x634%x635)==x636));

    if (t153 != 127) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x637 = INT64_MAX;
	int8_t x638 = INT8_MIN;
	int8_t x639 = INT8_MIN;
	int32_t x640 = INT32_MAX;
	static volatile int64_t t154 = INT64_MAX;

    t154 = (x637-((x638%x639)==x640));

    if (t154 != INT64_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x646 = INT32_MIN;
	int64_t x647 = -468LL;
	static int16_t x648 = 81;
	volatile int32_t t155 = 12;

    t155 = (x645-((x646%x647)==x648));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x649 = INT8_MIN;
	int16_t x650 = INT16_MAX;
	int64_t x651 = INT64_MIN;
	volatile int32_t t156 = 835887327;

    t156 = (x649-((x650%x651)==x652));

    if (t156 != -128) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int64_t x653 = 6965215LL;
	int8_t x654 = -43;
	static volatile int8_t x656 = -1;
	volatile int64_t t157 = -2212246771127035668LL;

    t157 = (x653-((x654%x655)==x656));

    if (t157 != 6965215LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x657 = 3655U;
	int16_t x658 = INT16_MIN;
	int32_t x659 = 7;
	uint8_t x660 = 72U;

    t158 = (x657-((x658%x659)==x660));

    if (t158 != 3655) { NG(); } else { ; }
	
}

void f159(void) {
    	static int8_t x665 = INT8_MIN;
	volatile int32_t x666 = -1255;
	volatile int16_t x667 = -31;
	volatile int32_t x668 = INT32_MAX;

    t159 = (x665-((x666%x667)==x668));

    if (t159 != -128) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x669 = INT32_MAX;
	int16_t x671 = 1;
	int16_t x672 = INT16_MIN;
	volatile int32_t t160 = INT32_MAX;

    t160 = (x669-((x670%x671)==x672));

    if (t160 != INT32_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x673 = -1;
	uint64_t x674 = 11461366LLU;
	int64_t x675 = INT64_MIN;
	static int64_t x676 = INT64_MIN;
	volatile int32_t t161 = 0;

    t161 = (x673-((x674%x675)==x676));

    if (t161 != -1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x678 = -1;
	int16_t x679 = INT16_MIN;
	int8_t x680 = INT8_MAX;

    t162 = (x677-((x678%x679)==x680));

    if (t162 != INT64_MIN) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x681 = INT32_MAX;
	int16_t x682 = -19;
	int64_t x683 = INT64_MIN;
	int16_t x684 = INT16_MIN;
	int32_t t163 = INT32_MAX;

    t163 = (x681-((x682%x683)==x684));

    if (t163 != INT32_MAX) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x685 = 92381;
	int32_t x686 = INT32_MIN;
	static int64_t x687 = INT64_MIN;
	int32_t x688 = INT32_MAX;

    t164 = (x685-((x686%x687)==x688));

    if (t164 != 92381) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x690 = -32394;
	int32_t x691 = -146211201;
	int32_t x692 = INT32_MIN;
	int32_t t165 = 393;

    t165 = (x689-((x690%x691)==x692));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x693 = INT32_MIN;
	static uint64_t x694 = 6676592098792LLU;
	int64_t x695 = INT64_MIN;
	static uint64_t x696 = UINT64_MAX;
	volatile int32_t t166 = INT32_MIN;

    t166 = (x693-((x694%x695)==x696));

    if (t166 != INT32_MIN) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x698 = -24285;
	uint32_t x700 = 2975U;
	static volatile uint32_t t167 = 12909697U;

    t167 = (x697-((x698%x699)==x700));

    if (t167 != 1U) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x702 = 220525874117261078LLU;
	uint16_t x703 = 7885U;
	uint16_t x704 = UINT16_MAX;

    t168 = (x701-((x702%x703)==x704));

    if (t168 != 11519LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x705 = UINT16_MAX;
	int16_t x706 = INT16_MIN;
	static uint64_t x707 = 19417350827103493LLU;
	static volatile uint32_t x708 = 661189U;
	static int32_t t169 = 7429;

    t169 = (x705-((x706%x707)==x708));

    if (t169 != 65535) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x710 = 2U;
	int16_t x711 = INT16_MAX;
	volatile int64_t t170 = INT64_MAX;

    t170 = (x709-((x710%x711)==x712));

    if (t170 != INT64_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x714 = INT32_MIN;
	uint16_t x715 = 362U;
	static int64_t x716 = INT64_MIN;
	int32_t t171 = -954559905;

    t171 = (x713-((x714%x715)==x716));

    if (t171 != 255) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x717 = 200U;
	int64_t x719 = 89LL;
	uint32_t t172 = 99U;

    t172 = (x717-((x718%x719)==x720));

    if (t172 != 200U) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x721 = -1LL;
	static uint16_t x722 = UINT16_MAX;
	int8_t x723 = -1;
	uint64_t x724 = UINT64_MAX;
	static volatile int64_t t173 = -8420492125049603LL;

    t173 = (x721-((x722%x723)==x724));

    if (t173 != -1LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x726 = INT16_MIN;
	int64_t x727 = -1LL;
	static int32_t x728 = INT32_MAX;

    t174 = (x725-((x726%x727)==x728));

    if (t174 != UINT64_MAX) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x730 = INT64_MIN;
	int32_t t175 = -45693;

    t175 = (x729-((x730%x731)==x732));

    if (t175 != -1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint32_t x733 = UINT32_MAX;
	static int64_t x734 = 3LL;
	int32_t x735 = 192;
	static int32_t x736 = INT32_MAX;
	volatile uint32_t t176 = UINT32_MAX;

    t176 = (x733-((x734%x735)==x736));

    if (t176 != UINT32_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x738 = 0;
	static int64_t x739 = -10LL;
	volatile uint64_t x740 = 731310LLU;
	volatile int32_t t177 = 127879;

    t177 = (x737-((x738%x739)==x740));

    if (t177 != -21) { NG(); } else { ; }
	
}

void f178(void) {
    	static int8_t x743 = INT8_MIN;
	uint16_t x744 = 4673U;
	int32_t t178 = 4515;

    t178 = (x741-((x742%x743)==x744));

    if (t178 != 27) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x746 = UINT16_MAX;
	static int64_t x747 = INT64_MAX;
	int8_t x748 = INT8_MAX;
	uint32_t t179 = UINT32_MAX;

    t179 = (x745-((x746%x747)==x748));

    if (t179 != UINT32_MAX) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x749 = -3363;
	int64_t x750 = INT64_MIN;
	uint8_t x751 = 9U;
	int32_t x752 = INT32_MIN;
	int32_t t180 = 96;

    t180 = (x749-((x750%x751)==x752));

    if (t180 != -3363) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x753 = -1;
	uint8_t x754 = UINT8_MAX;
	static int64_t x755 = -1LL;
	uint32_t x756 = 1368837U;
	int32_t t181 = -215468527;

    t181 = (x753-((x754%x755)==x756));

    if (t181 != -1) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x758 = -616490;
	static int64_t x759 = -1LL;
	uint8_t x760 = UINT8_MAX;

    t182 = (x757-((x758%x759)==x760));

    if (t182 != -1LL) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint16_t x761 = 3U;
	volatile uint8_t x763 = UINT8_MAX;
	int32_t x764 = INT32_MAX;
	int32_t t183 = -49912;

    t183 = (x761-((x762%x763)==x764));

    if (t183 != 3) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x769 = 1;
	volatile int64_t x770 = -1190LL;
	int32_t x772 = INT32_MIN;
	int32_t t184 = -2555;

    t184 = (x769-((x770%x771)==x772));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x774 = UINT8_MAX;
	static int8_t x776 = 1;
	uint64_t t185 = 532158592448641LLU;

    t185 = (x773-((x774%x775)==x776));

    if (t185 != 11898040LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x777 = INT64_MIN;
	int8_t x778 = -8;
	int16_t x779 = 224;

    t186 = (x777-((x778%x779)==x780));

    if (t186 != INT64_MIN) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x781 = INT8_MIN;
	static volatile int16_t x782 = INT16_MIN;
	static int16_t x783 = INT16_MIN;
	static int32_t x784 = INT32_MIN;
	int32_t t187 = 0;

    t187 = (x781-((x782%x783)==x784));

    if (t187 != -128) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x785 = INT16_MIN;
	int32_t x786 = -2;
	static volatile uint32_t x787 = 3817U;
	volatile int8_t x788 = -1;
	static int32_t t188 = -165384438;

    t188 = (x785-((x786%x787)==x788));

    if (t188 != -32768) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x789 = INT64_MIN;
	static int8_t x790 = -8;
	int16_t x791 = INT16_MAX;
	volatile uint64_t x792 = UINT64_MAX;
	int64_t t189 = INT64_MIN;

    t189 = (x789-((x790%x791)==x792));

    if (t189 != INT64_MIN) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int16_t x793 = -1;
	volatile int32_t x794 = 440749;
	uint8_t x795 = 1U;
	volatile int32_t t190 = -1548952;

    t190 = (x793-((x794%x795)==x796));

    if (t190 != -1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x798 = 49U;
	uint8_t x799 = 6U;
	static int8_t x800 = INT8_MIN;
	volatile int32_t t191 = -13539464;

    t191 = (x797-((x798%x799)==x800));

    if (t191 != -32768) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x801 = 434512837U;
	static volatile int32_t x802 = INT32_MAX;
	int8_t x803 = -1;
	static int16_t x804 = INT16_MIN;

    t192 = (x801-((x802%x803)==x804));

    if (t192 != 434512837U) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x805 = INT8_MIN;
	int8_t x806 = INT8_MIN;
	uint64_t x807 = 15321480999185LLU;
	int32_t t193 = 20518359;

    t193 = (x805-((x806%x807)==x808));

    if (t193 != -128) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x810 = 13210LL;
	static volatile int32_t x812 = -241767034;
	int32_t t194 = -224;

    t194 = (x809-((x810%x811)==x812));

    if (t194 != -15) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x814 = 88U;
	int8_t x815 = -1;
	int8_t x816 = 48;
	int32_t t195 = 775830;

    t195 = (x813-((x814%x815)==x816));

    if (t195 != -32768) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x820 = 38387237648479LL;
	int64_t t196 = 5893926LL;

    t196 = (x817-((x818%x819)==x820));

    if (t196 != -1LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x821 = 6U;
	int32_t x822 = INT32_MIN;
	int8_t x823 = INT8_MIN;
	volatile int32_t t197 = 23474;

    t197 = (x821-((x822%x823)==x824));

    if (t197 != 6) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x825 = INT16_MIN;
	volatile int8_t x826 = INT8_MIN;
	int32_t x827 = INT32_MIN;
	int32_t t198 = -24481;

    t198 = (x825-((x826%x827)==x828));

    if (t198 != -32768) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x829 = -1;
	int16_t x830 = INT16_MAX;
	volatile int8_t x831 = INT8_MAX;
	volatile int32_t t199 = -27414;

    t199 = (x829-((x830%x831)==x832));

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

