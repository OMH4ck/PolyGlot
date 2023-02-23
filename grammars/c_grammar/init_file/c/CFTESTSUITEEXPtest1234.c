
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

int64_t x16 = INT64_MIN;
int8_t x23 = 13;
int8_t x29 = 0;
int16_t x36 = -1;
volatile int64_t t9 = 12LL;
static uint16_t x49 = UINT16_MAX;
int16_t x52 = -1;
int32_t t11 = INT32_MIN;
static volatile uint64_t x59 = 51LLU;
uint64_t x62 = 2035886095LLU;
static int64_t x64 = -144019525981697832LL;
int64_t t13 = -28506062698547LL;
volatile int32_t x69 = INT32_MIN;
uint16_t x71 = UINT16_MAX;
int8_t x74 = 37;
int8_t x76 = INT8_MAX;
int32_t t15 = 4;
volatile int64_t x78 = -3746710LL;
volatile uint64_t x79 = 0LLU;
int64_t x82 = INT64_MAX;
uint64_t x88 = 287LLU;
static uint32_t x91 = 49729U;
volatile int32_t t19 = -241587597;
int16_t x93 = INT16_MIN;
int32_t x95 = INT32_MIN;
int16_t x99 = 27;
uint16_t x103 = 7U;
uint32_t t23 = 50884050U;
uint32_t x117 = 3U;
int8_t x124 = -1;
int64_t x139 = 2330920044238LL;
uint32_t t29 = 21245956U;
int16_t x146 = INT16_MAX;
int32_t t34 = 63869;
int64_t x172 = -63302346350195LL;
volatile uint64_t t37 = 17971168853694LLU;
int8_t x182 = -1;
volatile int32_t t38 = -210128843;
static int64_t x186 = INT64_MIN;
int32_t x193 = -1;
static volatile uint8_t x202 = 91U;
int32_t t44 = 20;
int16_t x209 = 959;
int32_t x216 = INT32_MIN;
int8_t x217 = -1;
static volatile uint16_t x222 = 3540U;
int8_t x231 = INT8_MIN;
uint16_t x235 = UINT16_MAX;
static int32_t x236 = INT32_MIN;
static volatile int64_t x237 = -1LL;
int32_t x239 = INT32_MIN;
static uint32_t x241 = 293843672U;
volatile int64_t t52 = 16734732416848645LL;
int8_t x253 = INT8_MAX;
volatile int16_t x256 = INT16_MIN;
int64_t x265 = INT64_MIN;
int64_t x266 = -1LL;
volatile uint8_t x267 = UINT8_MAX;
uint32_t x272 = 4U;
volatile uint32_t t58 = 1U;
int8_t x277 = -2;
int16_t x278 = INT16_MAX;
volatile uint32_t t60 = 1088826566U;
static int64_t x286 = -1LL;
static volatile uint64_t x290 = UINT64_MAX;
volatile int32_t x293 = -1;
static uint16_t x294 = 127U;
int64_t x296 = -1LL;
int64_t x300 = INT64_MAX;
volatile int32_t x301 = INT32_MAX;
static uint8_t x303 = 10U;
static int8_t x306 = INT8_MIN;
uint32_t x307 = UINT32_MAX;
static uint16_t x314 = 77U;
int8_t x316 = INT8_MIN;
int16_t x325 = INT16_MIN;
int32_t x328 = INT32_MAX;
static int16_t x332 = INT16_MAX;
int8_t x337 = INT8_MIN;
uint32_t x340 = 7257104U;
uint16_t x342 = UINT16_MAX;
static uint16_t x344 = 3U;
int32_t x351 = INT32_MIN;
int64_t t80 = 1025985LL;
uint32_t x371 = 72742U;
int32_t t82 = 54553;
volatile int64_t x378 = INT64_MAX;
uint16_t x380 = 223U;
int16_t x381 = INT16_MIN;
uint8_t x383 = UINT8_MAX;
int32_t t84 = -1532681;
uint32_t x385 = 305489589U;
int16_t x390 = INT16_MAX;
int8_t x391 = INT8_MIN;
int32_t t88 = -4511;
uint64_t x414 = 6LLU;
int16_t x422 = 31;
int8_t x424 = INT8_MIN;
uint16_t x425 = UINT16_MAX;
static int8_t x428 = -38;
static uint8_t x429 = 2U;
uint32_t x438 = 2040918U;
int32_t x439 = INT32_MIN;
volatile int16_t x440 = -56;
volatile int32_t x442 = -3926202;
uint16_t x450 = 0U;
int32_t t100 = -6614981;
int32_t x471 = INT32_MIN;
uint8_t x482 = UINT8_MAX;
int32_t t106 = -1039458;
int32_t x500 = INT32_MIN;
int8_t x506 = INT8_MIN;
int32_t x509 = INT32_MIN;
volatile uint64_t x512 = 29308LLU;
int32_t x515 = -1;
static volatile int16_t x522 = -1;
uint32_t x531 = 10443857U;
int32_t x533 = 127;
int32_t x534 = -32;
uint64_t x538 = UINT64_MAX;
uint32_t x541 = 2U;
int32_t x543 = INT32_MIN;
static int8_t x546 = -1;
int64_t x548 = INT64_MIN;
uint8_t x549 = 5U;
uint16_t x552 = 2U;
static int16_t x556 = INT16_MIN;
volatile int32_t t121 = 61942760;
volatile int8_t x558 = 2;
int16_t x559 = 5012;
volatile uint64_t t122 = 11LLU;
uint16_t x562 = UINT16_MAX;
static int32_t t123 = 1;
int32_t t124 = 331047604;
volatile int8_t x569 = -1;
uint32_t x570 = 22U;
int16_t x573 = INT16_MAX;
uint64_t x584 = 141LLU;
volatile uint64_t t128 = 69933139595454LLU;
uint16_t x593 = 2346U;
int16_t x594 = INT16_MAX;
static int8_t x597 = -1;
uint16_t x600 = UINT16_MAX;
uint32_t x601 = 53092U;
int64_t x602 = -1LL;
static uint16_t x606 = 464U;
int32_t x608 = INT32_MAX;
int16_t x617 = 911;
uint64_t x623 = 227193410LLU;
volatile int64_t x625 = INT64_MAX;
static int64_t x628 = -1LL;
static int32_t x634 = -56108;
int8_t x639 = 1;
uint64_t x640 = UINT64_MAX;
static int64_t x641 = -14371LL;
uint32_t x644 = 13U;
int32_t x646 = -101059;
uint32_t x656 = UINT32_MAX;
int16_t x671 = 162;
int8_t x699 = 57;
volatile int32_t t155 = 83389833;
uint8_t x704 = UINT8_MAX;
int16_t x713 = INT16_MIN;
uint64_t x715 = 4613787850781LLU;
uint64_t x721 = 3LLU;
int32_t t166 = -281;
static uint64_t x754 = 362LLU;
int8_t x758 = -1;
int32_t x759 = 4129476;
uint32_t x760 = UINT32_MAX;
int16_t x761 = INT16_MIN;
volatile int32_t x762 = -1;
static int16_t x768 = INT16_MAX;
int16_t x770 = INT16_MIN;
uint16_t x773 = 296U;
int16_t x774 = 236;
uint16_t x777 = UINT16_MAX;
uint8_t x779 = UINT8_MAX;
static volatile int16_t x791 = INT16_MAX;
int64_t x796 = INT64_MIN;
static int64_t t177 = -57374LL;
uint64_t x809 = 4462766778387064LLU;
volatile int64_t x810 = INT64_MIN;
uint64_t t181 = 2069LLU;
static uint16_t x831 = UINT16_MAX;
uint64_t x834 = 59134LLU;
int64_t x836 = 739111144856764LL;
uint64_t x840 = 95018636990LLU;
int16_t x846 = INT16_MIN;
int16_t x855 = INT16_MIN;
volatile uint32_t t191 = 177741989U;
int64_t x863 = INT64_MIN;
static int64_t t193 = 1771LL;
volatile int16_t x866 = INT16_MIN;
static uint64_t t194 = 1419927992659934954LLU;
uint64_t x869 = 28LLU;
volatile uint64_t t195 = 825238556086LLU;
static int16_t x874 = -1;
static volatile int64_t t196 = -333LL;
static int8_t x880 = INT8_MIN;
int16_t x881 = -10;
uint64_t x882 = UINT64_MAX;
int8_t x884 = INT8_MAX;
volatile int32_t t198 = -2266680;
static int16_t x886 = INT16_MIN;


void f0(void) {
    	int32_t x5 = INT32_MAX;
	int32_t x6 = INT32_MIN;
	int32_t x7 = INT32_MIN;
	uint32_t x8 = UINT32_MAX;
	uint32_t t0 = 3980359U;

    t0 = (x5-((x6!=x7)%x8));

    if (t0 != 2147483647U) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint16_t x9 = UINT16_MAX;
	volatile int64_t x10 = INT64_MAX;
	static volatile int64_t x11 = 2962277LL;
	volatile int8_t x12 = INT8_MIN;
	static int32_t t1 = -10;

    t1 = (x9-((x10!=x11)%x12));

    if (t1 != 65534) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x13 = 0;
	volatile uint8_t x14 = 3U;
	static volatile int64_t x15 = INT64_MIN;
	volatile int64_t t2 = 66281069588549LL;

    t2 = (x13-((x14!=x15)%x16));

    if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x17 = -1LL;
	int16_t x18 = INT16_MAX;
	volatile uint8_t x19 = UINT8_MAX;
	static int16_t x20 = 3;
	static int64_t t3 = 13LL;

    t3 = (x17-((x18!=x19)%x20));

    if (t3 != -2LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x21 = 0U;
	uint16_t x22 = 21022U;
	int8_t x24 = -45;
	volatile int32_t t4 = 1;

    t4 = (x21-((x22!=x23)%x24));

    if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x30 = UINT16_MAX;
	uint8_t x31 = 62U;
	int64_t x32 = INT64_MIN;
	volatile int64_t t5 = 365035308060821133LL;

    t5 = (x29-((x30!=x31)%x32));

    if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x33 = -5;
	static uint32_t x34 = UINT32_MAX;
	uint64_t x35 = 1401356LLU;
	static int32_t t6 = -225269;

    t6 = (x33-((x34!=x35)%x36));

    if (t6 != -5) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x37 = INT16_MAX;
	int32_t x38 = -1;
	volatile int64_t x39 = INT64_MAX;
	volatile uint8_t x40 = 2U;
	int32_t t7 = 97411;

    t7 = (x37-((x38!=x39)%x40));

    if (t7 != 32766) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x41 = UINT64_MAX;
	uint32_t x42 = 7U;
	int32_t x43 = INT32_MIN;
	volatile uint64_t x44 = 4LLU;
	uint64_t t8 = 271302064477LLU;

    t8 = (x41-((x42!=x43)%x44));

    if (t8 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x45 = INT64_MAX;
	static int64_t x46 = INT64_MAX;
	int8_t x47 = -39;
	int8_t x48 = INT8_MAX;

    t9 = (x45-((x46!=x47)%x48));

    if (t9 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x50 = -18;
	static int32_t x51 = INT32_MIN;
	volatile int32_t t10 = -213564;

    t10 = (x49-((x50!=x51)%x52));

    if (t10 != 65535) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x53 = INT32_MIN;
	uint64_t x54 = 6194604190559830883LLU;
	int8_t x55 = INT8_MIN;
	static int8_t x56 = -1;

    t11 = (x53-((x54!=x55)%x56));

    if (t11 != INT32_MIN) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x57 = INT32_MIN;
	int32_t x58 = INT32_MIN;
	volatile int64_t x60 = -3737336778876668313LL;
	volatile int64_t t12 = -2466LL;

    t12 = (x57-((x58!=x59)%x60));

    if (t12 != -2147483649LL) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int8_t x61 = INT8_MIN;
	volatile uint16_t x63 = UINT16_MAX;

    t13 = (x61-((x62!=x63)%x64));

    if (t13 != -129LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x70 = -1;
	volatile int64_t x72 = INT64_MIN;
	int64_t t14 = 3334106LL;

    t14 = (x69-((x70!=x71)%x72));

    if (t14 != -2147483649LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static int16_t x73 = INT16_MIN;
	int16_t x75 = 753;

    t15 = (x73-((x74!=x75)%x76));

    if (t15 != -32769) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x77 = 0;
	int16_t x80 = INT16_MAX;
	volatile int32_t t16 = -2;

    t16 = (x77-((x78!=x79)%x80));

    if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x81 = INT8_MIN;
	int8_t x83 = -1;
	uint8_t x84 = UINT8_MAX;
	volatile int32_t t17 = 3;

    t17 = (x81-((x82!=x83)%x84));

    if (t17 != -129) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x85 = 561911891LLU;
	int64_t x86 = -928223LL;
	uint64_t x87 = 1000755478226751LLU;
	volatile uint64_t t18 = 2036748LLU;

    t18 = (x85-((x86!=x87)%x88));

    if (t18 != 561911890LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x89 = INT16_MAX;
	static uint16_t x90 = 70U;
	static uint8_t x92 = 49U;

    t19 = (x89-((x90!=x91)%x92));

    if (t19 != 32766) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x94 = 355761267927510375LL;
	int32_t x96 = 13926;
	volatile int32_t t20 = -18290;

    t20 = (x93-((x94!=x95)%x96));

    if (t20 != -32769) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x97 = 605461895U;
	volatile int8_t x98 = INT8_MIN;
	volatile int8_t x100 = INT8_MAX;
	uint32_t t21 = 70811822U;

    t21 = (x97-((x98!=x99)%x100));

    if (t21 != 605461894U) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x101 = 4634;
	int64_t x102 = INT64_MIN;
	static uint32_t x104 = 24815963U;
	volatile uint32_t t22 = 6U;

    t22 = (x101-((x102!=x103)%x104));

    if (t22 != 4633U) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x105 = 23471U;
	int8_t x106 = -1;
	static int64_t x107 = INT64_MIN;
	int32_t x108 = -1;

    t23 = (x105-((x106!=x107)%x108));

    if (t23 != 23471U) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x109 = 0;
	volatile int32_t x110 = 2032207;
	volatile int64_t x111 = 155253810789424505LL;
	volatile int64_t x112 = INT64_MIN;
	volatile int64_t t24 = 14444948567939LL;

    t24 = (x109-((x110!=x111)%x112));

    if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x113 = 19636161363LL;
	int16_t x114 = INT16_MIN;
	static volatile int8_t x115 = -1;
	int32_t x116 = INT32_MIN;
	int64_t t25 = 153984199056238LL;

    t25 = (x113-((x114!=x115)%x116));

    if (t25 != 19636161362LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x118 = INT16_MIN;
	int64_t x119 = 689906858843417LL;
	uint8_t x120 = UINT8_MAX;
	uint32_t t26 = 4727073U;

    t26 = (x117-((x118!=x119)%x120));

    if (t26 != 2U) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x121 = INT32_MAX;
	static uint8_t x122 = 8U;
	int16_t x123 = -1;
	int32_t t27 = INT32_MAX;

    t27 = (x121-((x122!=x123)%x124));

    if (t27 != INT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x129 = 3;
	int64_t x130 = INT64_MIN;
	int64_t x131 = INT64_MIN;
	uint32_t x132 = UINT32_MAX;
	static volatile uint32_t t28 = 113U;

    t28 = (x129-((x130!=x131)%x132));

    if (t28 != 3U) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint32_t x137 = 58U;
	static uint16_t x138 = 782U;
	int32_t x140 = -75;

    t29 = (x137-((x138!=x139)%x140));

    if (t29 != 57U) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x141 = -1;
	static volatile uint8_t x142 = 13U;
	int64_t x143 = INT64_MIN;
	uint8_t x144 = UINT8_MAX;
	static volatile int32_t t30 = -496;

    t30 = (x141-((x142!=x143)%x144));

    if (t30 != -2) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x145 = -1;
	uint8_t x147 = UINT8_MAX;
	volatile int16_t x148 = -5923;
	int32_t t31 = 6554;

    t31 = (x145-((x146!=x147)%x148));

    if (t31 != -2) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x149 = -1LL;
	static volatile uint16_t x150 = UINT16_MAX;
	uint32_t x151 = 1822135751U;
	volatile int64_t x152 = INT64_MAX;
	int64_t t32 = 1802047834868LL;

    t32 = (x149-((x150!=x151)%x152));

    if (t32 != -2LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x153 = 3726806;
	volatile int64_t x154 = INT64_MIN;
	volatile int8_t x155 = INT8_MIN;
	static volatile int16_t x156 = -1;
	int32_t t33 = 5;

    t33 = (x153-((x154!=x155)%x156));

    if (t33 != 3726806) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x161 = INT8_MAX;
	volatile int8_t x162 = -3;
	static int8_t x163 = 0;
	int32_t x164 = -1;

    t34 = (x161-((x162!=x163)%x164));

    if (t34 != 127) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x169 = INT32_MIN;
	uint8_t x170 = 4U;
	int64_t x171 = INT64_MAX;
	static int64_t t35 = 1627734LL;

    t35 = (x169-((x170!=x171)%x172));

    if (t35 != -2147483649LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x173 = INT8_MIN;
	uint8_t x174 = UINT8_MAX;
	int16_t x175 = INT16_MIN;
	int64_t x176 = INT64_MAX;
	static int64_t t36 = 1771354986304LL;

    t36 = (x173-((x174!=x175)%x176));

    if (t36 != -129LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x177 = INT8_MIN;
	int16_t x178 = 1700;
	uint16_t x179 = UINT16_MAX;
	uint64_t x180 = UINT64_MAX;

    t37 = (x177-((x178!=x179)%x180));

    if (t37 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x181 = 3U;
	volatile int32_t x183 = -1;
	uint16_t x184 = UINT16_MAX;

    t38 = (x181-((x182!=x183)%x184));

    if (t38 != 3) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x185 = INT8_MIN;
	static uint64_t x187 = 750692LLU;
	int32_t x188 = 1;
	volatile int32_t t39 = 302046987;

    t39 = (x185-((x186!=x187)%x188));

    if (t39 != -128) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x189 = 111066414014451596LL;
	static int8_t x190 = INT8_MIN;
	static int16_t x191 = INT16_MIN;
	int64_t x192 = INT64_MIN;
	volatile int64_t t40 = 268288502380LL;

    t40 = (x189-((x190!=x191)%x192));

    if (t40 != 111066414014451595LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x194 = INT16_MIN;
	static int32_t x195 = INT32_MIN;
	static volatile int32_t x196 = 1;
	volatile int32_t t41 = 623333;

    t41 = (x193-((x194!=x195)%x196));

    if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x197 = INT64_MAX;
	int64_t x198 = INT64_MAX;
	int64_t x199 = -45519994817LL;
	int16_t x200 = INT16_MAX;
	volatile int64_t t42 = -16076453274123846LL;

    t42 = (x197-((x198!=x199)%x200));

    if (t42 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x201 = -1LL;
	int64_t x203 = 34509745715982LL;
	uint16_t x204 = 15533U;
	int64_t t43 = 99855986642814LL;

    t43 = (x201-((x202!=x203)%x204));

    if (t43 != -2LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x205 = UINT8_MAX;
	uint32_t x206 = UINT32_MAX;
	static int64_t x207 = -1LL;
	static int32_t x208 = INT32_MIN;

    t44 = (x205-((x206!=x207)%x208));

    if (t44 != 254) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x210 = -1;
	int32_t x211 = 1;
	int32_t x212 = INT32_MIN;
	int32_t t45 = -1391;

    t45 = (x209-((x210!=x211)%x212));

    if (t45 != 958) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x213 = 0U;
	int32_t x214 = -963;
	volatile uint64_t x215 = 4638949LLU;
	volatile int32_t t46 = 92319475;

    t46 = (x213-((x214!=x215)%x216));

    if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int32_t x218 = -22;
	uint16_t x219 = 27U;
	static uint32_t x220 = 60495U;
	uint32_t t47 = 978763U;

    t47 = (x217-((x218!=x219)%x220));

    if (t47 != 4294967294U) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x221 = -1;
	int64_t x223 = -1923156347LL;
	uint8_t x224 = 50U;
	int32_t t48 = 405304;

    t48 = (x221-((x222!=x223)%x224));

    if (t48 != -2) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x229 = -1LL;
	int64_t x230 = INT64_MAX;
	int16_t x232 = INT16_MIN;
	volatile int64_t t49 = -6655LL;

    t49 = (x229-((x230!=x231)%x232));

    if (t49 != -2LL) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x233 = -1;
	volatile int32_t x234 = 201455;
	volatile int32_t t50 = 11159;

    t50 = (x233-((x234!=x235)%x236));

    if (t50 != -2) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x238 = 0U;
	uint8_t x240 = 9U;
	int64_t t51 = 1707558676391LL;

    t51 = (x237-((x238!=x239)%x240));

    if (t51 != -2LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x242 = INT8_MIN;
	int16_t x243 = INT16_MAX;
	int64_t x244 = INT64_MIN;

    t52 = (x241-((x242!=x243)%x244));

    if (t52 != 293843671LL) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint64_t x245 = UINT64_MAX;
	int64_t x246 = -1LL;
	int16_t x247 = 0;
	int16_t x248 = 4;
	volatile uint64_t t53 = 299533435720657LLU;

    t53 = (x245-((x246!=x247)%x248));

    if (t53 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x249 = INT8_MIN;
	int8_t x250 = INT8_MIN;
	int16_t x251 = INT16_MIN;
	int32_t x252 = INT32_MAX;
	static int32_t t54 = 110241504;

    t54 = (x249-((x250!=x251)%x252));

    if (t54 != -129) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x254 = 1U;
	int32_t x255 = INT32_MIN;
	volatile int32_t t55 = 61548291;

    t55 = (x253-((x254!=x255)%x256));

    if (t55 != 126) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x268 = -1;
	static int64_t t56 = INT64_MIN;

    t56 = (x265-((x266!=x267)%x268));

    if (t56 != INT64_MIN) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x269 = 17;
	int16_t x270 = -1025;
	int16_t x271 = 200;
	volatile uint32_t t57 = 198U;

    t57 = (x269-((x270!=x271)%x272));

    if (t57 != 16U) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint32_t x273 = 46692365U;
	int64_t x274 = INT64_MIN;
	static int64_t x275 = -1LL;
	uint8_t x276 = UINT8_MAX;

    t58 = (x273-((x274!=x275)%x276));

    if (t58 != 46692364U) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x279 = INT8_MIN;
	int16_t x280 = 68;
	static volatile int32_t t59 = -13347;

    t59 = (x277-((x278!=x279)%x280));

    if (t59 != -3) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint32_t x281 = 15353U;
	int16_t x282 = -121;
	int16_t x283 = INT16_MAX;
	volatile int32_t x284 = -1;

    t60 = (x281-((x282!=x283)%x284));

    if (t60 != 15353U) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint64_t x285 = UINT64_MAX;
	static int16_t x287 = INT16_MIN;
	uint32_t x288 = 8079529U;
	static volatile uint64_t t61 = 1557348669678LLU;

    t61 = (x285-((x286!=x287)%x288));

    if (t61 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x289 = 1U;
	int32_t x291 = INT32_MIN;
	uint64_t x292 = 22510584691941LLU;
	volatile uint64_t t62 = 36939260307029LLU;

    t62 = (x289-((x290!=x291)%x292));

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint64_t x295 = 4LLU;
	int64_t t63 = -29913544LL;

    t63 = (x293-((x294!=x295)%x296));

    if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x297 = -1;
	volatile int8_t x298 = INT8_MIN;
	volatile uint8_t x299 = 122U;
	int64_t t64 = 3762515957760977882LL;

    t64 = (x297-((x298!=x299)%x300));

    if (t64 != -2LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x302 = -1LL;
	int16_t x304 = 607;
	static volatile int32_t t65 = 38644655;

    t65 = (x301-((x302!=x303)%x304));

    if (t65 != 2147483646) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x305 = 999685243857620149LL;
	int16_t x308 = INT16_MIN;
	int64_t t66 = -6214LL;

    t66 = (x305-((x306!=x307)%x308));

    if (t66 != 999685243857620148LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x309 = 11;
	static volatile uint16_t x310 = 18U;
	static int16_t x311 = INT16_MIN;
	int32_t x312 = -1;
	int32_t t67 = 25;

    t67 = (x309-((x310!=x311)%x312));

    if (t67 != 11) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x313 = INT32_MAX;
	static int16_t x315 = INT16_MIN;
	static int32_t t68 = -102;

    t68 = (x313-((x314!=x315)%x316));

    if (t68 != 2147483646) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint64_t x317 = UINT64_MAX;
	volatile uint8_t x318 = 23U;
	volatile uint16_t x319 = 13U;
	int16_t x320 = INT16_MAX;
	uint64_t t69 = 7762597911523127464LLU;

    t69 = (x317-((x318!=x319)%x320));

    if (t69 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x321 = 11715147U;
	static volatile int32_t x322 = INT32_MAX;
	uint16_t x323 = 0U;
	int64_t x324 = -1LL;
	volatile int64_t t70 = -1460166183410500LL;

    t70 = (x321-((x322!=x323)%x324));

    if (t70 != 11715147LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x326 = INT8_MAX;
	volatile int32_t x327 = INT32_MIN;
	int32_t t71 = -4;

    t71 = (x325-((x326!=x327)%x328));

    if (t71 != -32769) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x329 = INT8_MIN;
	volatile uint32_t x330 = UINT32_MAX;
	uint32_t x331 = 133382166U;
	int32_t t72 = -109706;

    t72 = (x329-((x330!=x331)%x332));

    if (t72 != -129) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x333 = 13928;
	static volatile int32_t x334 = INT32_MAX;
	uint8_t x335 = 103U;
	int32_t x336 = -1;
	volatile int32_t t73 = 13;

    t73 = (x333-((x334!=x335)%x336));

    if (t73 != 13928) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x338 = INT8_MAX;
	static int16_t x339 = -40;
	static volatile uint32_t t74 = 58700372U;

    t74 = (x337-((x338!=x339)%x340));

    if (t74 != 4294967167U) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x341 = INT64_MAX;
	int64_t x343 = INT64_MIN;
	volatile int64_t t75 = 11655355LL;

    t75 = (x341-((x342!=x343)%x344));

    if (t75 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x345 = INT64_MAX;
	int64_t x346 = INT64_MIN;
	volatile uint16_t x347 = 13404U;
	static uint64_t x348 = 6259LLU;
	volatile uint64_t t76 = 32992997685662LLU;

    t76 = (x345-((x346!=x347)%x348));

    if (t76 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x349 = 2;
	volatile int64_t x350 = -19532LL;
	int16_t x352 = INT16_MIN;
	int32_t t77 = 250;

    t77 = (x349-((x350!=x351)%x352));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint16_t x353 = 83U;
	int16_t x354 = INT16_MIN;
	int64_t x355 = -2270889LL;
	uint16_t x356 = 14U;
	int32_t t78 = -55;

    t78 = (x353-((x354!=x355)%x356));

    if (t78 != 82) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x361 = 822U;
	uint16_t x362 = UINT16_MAX;
	int32_t x363 = -1;
	int16_t x364 = 11;
	static volatile uint32_t t79 = 560586357U;

    t79 = (x361-((x362!=x363)%x364));

    if (t79 != 821U) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x365 = INT8_MIN;
	static uint64_t x366 = 444LLU;
	int8_t x367 = -1;
	int64_t x368 = INT64_MIN;

    t80 = (x365-((x366!=x367)%x368));

    if (t80 != -129LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x369 = INT64_MIN;
	static int64_t x370 = INT64_MIN;
	volatile uint64_t x372 = 5327903LLU;
	uint64_t t81 = 142154LLU;

    t81 = (x369-((x370!=x371)%x372));

    if (t81 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x373 = INT16_MIN;
	int8_t x374 = -1;
	static int8_t x375 = -1;
	volatile uint16_t x376 = 23U;

    t82 = (x373-((x374!=x375)%x376));

    if (t82 != -32768) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x377 = 2482;
	int16_t x379 = -693;
	static volatile int32_t t83 = 10989542;

    t83 = (x377-((x378!=x379)%x380));

    if (t83 != 2481) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x382 = 18U;
	int8_t x384 = -1;

    t84 = (x381-((x382!=x383)%x384));

    if (t84 != -32768) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x386 = UINT64_MAX;
	uint64_t x387 = UINT64_MAX;
	int32_t x388 = INT32_MIN;
	uint32_t t85 = 11652U;

    t85 = (x385-((x386!=x387)%x388));

    if (t85 != 305489589U) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x389 = UINT64_MAX;
	uint8_t x392 = 3U;
	volatile uint64_t t86 = 403743702LLU;

    t86 = (x389-((x390!=x391)%x392));

    if (t86 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x393 = 139U;
	int64_t x394 = INT64_MIN;
	int64_t x395 = -2878435311411LL;
	int64_t x396 = -1LL;
	int64_t t87 = 67590627322515576LL;

    t87 = (x393-((x394!=x395)%x396));

    if (t87 != 139LL) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint8_t x397 = 14U;
	int16_t x398 = -1;
	static int32_t x399 = -1;
	static int32_t x400 = INT32_MIN;

    t88 = (x397-((x398!=x399)%x400));

    if (t88 != 14) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x401 = 1U;
	static uint8_t x402 = 24U;
	uint32_t x403 = 25291U;
	volatile int32_t x404 = 83;
	int32_t t89 = -2;

    t89 = (x401-((x402!=x403)%x404));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x409 = INT8_MIN;
	int64_t x410 = -1LL;
	static uint8_t x411 = 0U;
	int8_t x412 = -1;
	volatile int32_t t90 = 6606397;

    t90 = (x409-((x410!=x411)%x412));

    if (t90 != -128) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x413 = 7243U;
	int64_t x415 = 2477310057805LL;
	uint32_t x416 = 27U;
	volatile uint32_t t91 = 2128708985U;

    t91 = (x413-((x414!=x415)%x416));

    if (t91 != 7242U) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint64_t x421 = UINT64_MAX;
	uint64_t x423 = 22073329LLU;
	static volatile uint64_t t92 = 1644635796LLU;

    t92 = (x421-((x422!=x423)%x424));

    if (t92 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static int32_t x426 = -1;
	int16_t x427 = -28;
	int32_t t93 = -53344;

    t93 = (x425-((x426!=x427)%x428));

    if (t93 != 65534) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x430 = 4788;
	int64_t x431 = -342694279949392LL;
	volatile int16_t x432 = INT16_MIN;
	static int32_t t94 = 55;

    t94 = (x429-((x430!=x431)%x432));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x433 = -1LL;
	uint64_t x434 = 1112449239872633392LLU;
	volatile int16_t x435 = -1;
	uint8_t x436 = 15U;
	volatile int64_t t95 = -28LL;

    t95 = (x433-((x434!=x435)%x436));

    if (t95 != -2LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x437 = -1;
	int32_t t96 = 0;

    t96 = (x437-((x438!=x439)%x440));

    if (t96 != -2) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x441 = INT64_MAX;
	volatile int32_t x443 = INT32_MAX;
	static int64_t x444 = INT64_MIN;
	static int64_t t97 = -2434105772LL;

    t97 = (x441-((x442!=x443)%x444));

    if (t97 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x445 = INT8_MAX;
	uint16_t x446 = 25857U;
	int16_t x447 = 0;
	uint32_t x448 = UINT32_MAX;
	volatile uint32_t t98 = 2U;

    t98 = (x445-((x446!=x447)%x448));

    if (t98 != 126U) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x449 = 34070633631LLU;
	int16_t x451 = -88;
	int16_t x452 = INT16_MIN;
	uint64_t t99 = 2LLU;

    t99 = (x449-((x450!=x451)%x452));

    if (t99 != 34070633630LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x453 = 18U;
	volatile uint64_t x454 = UINT64_MAX;
	uint64_t x455 = 0LLU;
	static uint8_t x456 = UINT8_MAX;

    t100 = (x453-((x454!=x455)%x456));

    if (t100 != 17) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile int64_t x457 = -210218LL;
	int8_t x458 = 15;
	static int64_t x459 = INT64_MAX;
	static int16_t x460 = INT16_MIN;
	volatile int64_t t101 = -251LL;

    t101 = (x457-((x458!=x459)%x460));

    if (t101 != -210219LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x461 = INT32_MIN;
	int8_t x462 = 1;
	int64_t x463 = 976LL;
	static volatile uint64_t x464 = 656270134719945057LLU;
	uint64_t t102 = 720412363358LLU;

    t102 = (x461-((x462!=x463)%x464));

    if (t102 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x465 = 2U;
	static volatile uint16_t x466 = 22U;
	volatile int8_t x467 = -20;
	int16_t x468 = INT16_MAX;
	int32_t t103 = -360990;

    t103 = (x465-((x466!=x467)%x468));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint64_t x469 = 55190061LLU;
	volatile uint8_t x470 = 61U;
	volatile int64_t x472 = INT64_MIN;
	uint64_t t104 = 373282643LLU;

    t104 = (x469-((x470!=x471)%x472));

    if (t104 != 55190060LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x481 = 112927055953LLU;
	static int8_t x483 = -24;
	int64_t x484 = -1LL;
	uint64_t t105 = 0LLU;

    t105 = (x481-((x482!=x483)%x484));

    if (t105 != 112927055953LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x489 = UINT16_MAX;
	static volatile uint8_t x490 = 20U;
	uint8_t x491 = UINT8_MAX;
	int32_t x492 = -1;

    t106 = (x489-((x490!=x491)%x492));

    if (t106 != 65535) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x493 = INT16_MIN;
	int8_t x494 = -1;
	volatile uint8_t x495 = UINT8_MAX;
	int32_t x496 = INT32_MIN;
	volatile int32_t t107 = -360254;

    t107 = (x493-((x494!=x495)%x496));

    if (t107 != -32769) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x497 = 147585U;
	int32_t x498 = -1;
	int16_t x499 = 958;
	volatile uint32_t t108 = 3U;

    t108 = (x497-((x498!=x499)%x500));

    if (t108 != 147584U) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x501 = 1260018233550LLU;
	volatile int32_t x502 = INT32_MIN;
	int64_t x503 = INT64_MIN;
	int16_t x504 = INT16_MIN;
	volatile uint64_t t109 = 3342448LLU;

    t109 = (x501-((x502!=x503)%x504));

    if (t109 != 1260018233549LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int8_t x505 = INT8_MIN;
	uint32_t x507 = 3812190U;
	int32_t x508 = INT32_MIN;
	int32_t t110 = 21296;

    t110 = (x505-((x506!=x507)%x508));

    if (t110 != -129) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x510 = INT64_MAX;
	int16_t x511 = INT16_MIN;
	static uint64_t t111 = 201324159756797LLU;

    t111 = (x509-((x510!=x511)%x512));

    if (t111 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint16_t x513 = 1U;
	int64_t x514 = 1502286LL;
	volatile uint8_t x516 = 7U;
	static int32_t t112 = 1966433;

    t112 = (x513-((x514!=x515)%x516));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint8_t x517 = 106U;
	volatile int32_t x518 = INT32_MAX;
	int64_t x519 = INT64_MIN;
	volatile int64_t x520 = INT64_MAX;
	int64_t t113 = 45232363732597303LL;

    t113 = (x517-((x518!=x519)%x520));

    if (t113 != 105LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint64_t x521 = UINT64_MAX;
	int64_t x523 = INT64_MAX;
	volatile int64_t x524 = -536538286660841LL;
	static uint64_t t114 = 1588981425850LLU;

    t114 = (x521-((x522!=x523)%x524));

    if (t114 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int8_t x529 = -1;
	uint32_t x530 = UINT32_MAX;
	static int32_t x532 = 91351;
	int32_t t115 = 356;

    t115 = (x529-((x530!=x531)%x532));

    if (t115 != -2) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x535 = INT32_MIN;
	int64_t x536 = 253349533200077765LL;
	volatile int64_t t116 = 7901614LL;

    t116 = (x533-((x534!=x535)%x536));

    if (t116 != 126LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x537 = 3905873203761LL;
	int8_t x539 = INT8_MAX;
	int32_t x540 = -1;
	int64_t t117 = 19908670447LL;

    t117 = (x537-((x538!=x539)%x540));

    if (t117 != 3905873203761LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x542 = 16U;
	uint16_t x544 = UINT16_MAX;
	volatile uint32_t t118 = 1704U;

    t118 = (x541-((x542!=x543)%x544));

    if (t118 != 1U) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int16_t x545 = -47;
	uint8_t x547 = 2U;
	volatile int64_t t119 = -2331083LL;

    t119 = (x545-((x546!=x547)%x548));

    if (t119 != -48LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x550 = INT32_MIN;
	int64_t x551 = -13LL;
	int32_t t120 = 0;

    t120 = (x549-((x550!=x551)%x552));

    if (t120 != 4) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x553 = INT8_MIN;
	int8_t x554 = INT8_MIN;
	volatile int32_t x555 = -368941472;

    t121 = (x553-((x554!=x555)%x556));

    if (t121 != -129) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int8_t x557 = -5;
	static uint64_t x560 = UINT64_MAX;

    t122 = (x557-((x558!=x559)%x560));

    if (t122 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x561 = -1;
	int8_t x563 = INT8_MIN;
	int16_t x564 = INT16_MAX;

    t123 = (x561-((x562!=x563)%x564));

    if (t123 != -2) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x565 = -10;
	static volatile int64_t x566 = -1LL;
	static int16_t x567 = -25;
	volatile int8_t x568 = INT8_MAX;

    t124 = (x565-((x566!=x567)%x568));

    if (t124 != -11) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x571 = 46;
	uint16_t x572 = 24U;
	int32_t t125 = 64955151;

    t125 = (x569-((x570!=x571)%x572));

    if (t125 != -2) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x574 = INT8_MIN;
	uint8_t x575 = 26U;
	static volatile uint8_t x576 = 37U;
	int32_t t126 = -4033123;

    t126 = (x573-((x574!=x575)%x576));

    if (t126 != 32766) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x577 = UINT32_MAX;
	int16_t x578 = INT16_MIN;
	int8_t x579 = -15;
	volatile int8_t x580 = INT8_MIN;
	volatile uint32_t t127 = 89U;

    t127 = (x577-((x578!=x579)%x580));

    if (t127 != 4294967294U) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x581 = INT8_MIN;
	int16_t x582 = 1;
	uint8_t x583 = 97U;

    t128 = (x581-((x582!=x583)%x584));

    if (t128 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x585 = INT64_MAX;
	int32_t x586 = 3575352;
	int16_t x587 = 4948;
	int64_t x588 = -1LL;
	static int64_t t129 = INT64_MAX;

    t129 = (x585-((x586!=x587)%x588));

    if (t129 != INT64_MAX) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x589 = INT16_MIN;
	int8_t x590 = 1;
	int32_t x591 = INT32_MIN;
	int64_t x592 = INT64_MIN;
	int64_t t130 = -8885336LL;

    t130 = (x589-((x590!=x591)%x592));

    if (t130 != -32769LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x595 = -2;
	static uint64_t x596 = 101918908668763067LLU;
	static uint64_t t131 = 2988822135945700LLU;

    t131 = (x593-((x594!=x595)%x596));

    if (t131 != 2345LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x598 = 339U;
	int32_t x599 = 100756933;
	volatile int32_t t132 = 40;

    t132 = (x597-((x598!=x599)%x600));

    if (t132 != -2) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x603 = INT16_MIN;
	int64_t x604 = -3437641584010LL;
	volatile int64_t t133 = -148935119LL;

    t133 = (x601-((x602!=x603)%x604));

    if (t133 != 53091LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int8_t x605 = -1;
	int32_t x607 = -1;
	static volatile int32_t t134 = 228;

    t134 = (x605-((x606!=x607)%x608));

    if (t134 != -2) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x609 = INT64_MIN;
	int8_t x610 = INT8_MIN;
	int64_t x611 = 20285209854720855LL;
	int8_t x612 = 1;
	volatile int64_t t135 = INT64_MIN;

    t135 = (x609-((x610!=x611)%x612));

    if (t135 != INT64_MIN) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x613 = INT16_MAX;
	int32_t x614 = INT32_MAX;
	static uint16_t x615 = 853U;
	static uint8_t x616 = UINT8_MAX;
	static int32_t t136 = 233439;

    t136 = (x613-((x614!=x615)%x616));

    if (t136 != 32766) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x618 = 92072U;
	int16_t x619 = -1;
	volatile uint16_t x620 = 4U;
	int32_t t137 = 291238083;

    t137 = (x617-((x618!=x619)%x620));

    if (t137 != 910) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x621 = -1;
	int32_t x622 = INT32_MAX;
	static int16_t x624 = -71;
	int32_t t138 = -15214605;

    t138 = (x621-((x622!=x623)%x624));

    if (t138 != -2) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t x626 = -1783;
	volatile int16_t x627 = 124;
	static int64_t t139 = INT64_MAX;

    t139 = (x625-((x626!=x627)%x628));

    if (t139 != INT64_MAX) { NG(); } else { ; }
	
}

void f140(void) {
    	static int32_t x629 = INT32_MIN;
	int32_t x630 = INT32_MIN;
	int8_t x631 = 6;
	static uint8_t x632 = 1U;
	volatile int32_t t140 = INT32_MIN;

    t140 = (x629-((x630!=x631)%x632));

    if (t140 != INT32_MIN) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x633 = -1;
	int16_t x635 = -1;
	uint8_t x636 = 76U;
	int32_t t141 = 137660110;

    t141 = (x633-((x634!=x635)%x636));

    if (t141 != -2) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x637 = -1;
	static uint64_t x638 = UINT64_MAX;
	volatile uint64_t t142 = 1764525LLU;

    t142 = (x637-((x638!=x639)%x640));

    if (t142 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x642 = 31816LLU;
	uint8_t x643 = 88U;
	volatile int64_t t143 = 175768453754006389LL;

    t143 = (x641-((x642!=x643)%x644));

    if (t143 != -14372LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x645 = 6590U;
	static int32_t x647 = INT32_MIN;
	int8_t x648 = -1;
	int32_t t144 = -1536970;

    t144 = (x645-((x646!=x647)%x648));

    if (t144 != 6590) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x649 = 853620186LLU;
	int16_t x650 = INT16_MAX;
	volatile uint64_t x651 = UINT64_MAX;
	uint8_t x652 = 5U;
	static uint64_t t145 = 4752888676918LLU;

    t145 = (x649-((x650!=x651)%x652));

    if (t145 != 853620185LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x653 = INT16_MIN;
	static int16_t x654 = INT16_MIN;
	volatile uint8_t x655 = UINT8_MAX;
	uint32_t t146 = 1U;

    t146 = (x653-((x654!=x655)%x656));

    if (t146 != 4294934527U) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x657 = 3291U;
	uint64_t x658 = 8897784719LLU;
	int8_t x659 = 1;
	static volatile int64_t x660 = INT64_MAX;
	int64_t t147 = 663001277483LL;

    t147 = (x657-((x658!=x659)%x660));

    if (t147 != 3290LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x665 = 53430;
	int16_t x666 = 2;
	static int8_t x667 = INT8_MAX;
	int32_t x668 = -58;
	int32_t t148 = 113087125;

    t148 = (x665-((x666!=x667)%x668));

    if (t148 != 53429) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint64_t x669 = 28723589161397LLU;
	int16_t x670 = -41;
	int32_t x672 = INT32_MIN;
	static volatile uint64_t t149 = 346810733620LLU;

    t149 = (x669-((x670!=x671)%x672));

    if (t149 != 28723589161396LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x673 = INT16_MIN;
	static int32_t x674 = INT32_MIN;
	int64_t x675 = INT64_MIN;
	uint64_t x676 = 37575LLU;
	uint64_t t150 = 14800LLU;

    t150 = (x673-((x674!=x675)%x676));

    if (t150 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x677 = -1;
	int16_t x678 = INT16_MIN;
	static uint32_t x679 = UINT32_MAX;
	uint32_t x680 = 193U;
	static volatile uint32_t t151 = 147762898U;

    t151 = (x677-((x678!=x679)%x680));

    if (t151 != 4294967294U) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x685 = -1;
	int8_t x686 = INT8_MIN;
	static uint64_t x687 = 0LLU;
	int32_t x688 = INT32_MAX;
	static volatile int32_t t152 = -693;

    t152 = (x685-((x686!=x687)%x688));

    if (t152 != -2) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile uint8_t x689 = 122U;
	static int64_t x690 = INT64_MIN;
	int8_t x691 = 3;
	volatile int64_t x692 = INT64_MAX;
	static int64_t t153 = 4132649307038557LL;

    t153 = (x689-((x690!=x691)%x692));

    if (t153 != 121LL) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int16_t x693 = -1;
	volatile int8_t x694 = -1;
	int16_t x695 = -1;
	volatile int8_t x696 = INT8_MAX;
	int32_t t154 = 136781419;

    t154 = (x693-((x694!=x695)%x696));

    if (t154 != -1) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x697 = -1;
	int32_t x698 = INT32_MIN;
	int8_t x700 = INT8_MIN;

    t155 = (x697-((x698!=x699)%x700));

    if (t155 != -2) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x701 = 63U;
	uint32_t x702 = 34U;
	static volatile uint8_t x703 = UINT8_MAX;
	static volatile int32_t t156 = -4011173;

    t156 = (x701-((x702!=x703)%x704));

    if (t156 != 62) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x709 = UINT64_MAX;
	volatile int32_t x710 = -10418142;
	static volatile int32_t x711 = INT32_MIN;
	int32_t x712 = -43076010;
	uint64_t t157 = 0LLU;

    t157 = (x709-((x710!=x711)%x712));

    if (t157 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint8_t x714 = 28U;
	uint16_t x716 = 17061U;
	volatile int32_t t158 = -4345;

    t158 = (x713-((x714!=x715)%x716));

    if (t158 != -32769) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x717 = INT64_MAX;
	uint32_t x718 = 11325U;
	int8_t x719 = -13;
	volatile int8_t x720 = -1;
	static int64_t t159 = INT64_MAX;

    t159 = (x717-((x718!=x719)%x720));

    if (t159 != INT64_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x722 = INT64_MIN;
	int32_t x723 = INT32_MIN;
	static int16_t x724 = -105;
	uint64_t t160 = 487012840844799LLU;

    t160 = (x721-((x722!=x723)%x724));

    if (t160 != 2LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x725 = INT16_MIN;
	uint32_t x726 = 181059U;
	volatile uint8_t x727 = UINT8_MAX;
	int32_t x728 = -1;
	int32_t t161 = 701;

    t161 = (x725-((x726!=x727)%x728));

    if (t161 != -32768) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x729 = -794296;
	static volatile int8_t x730 = INT8_MAX;
	static int16_t x731 = -1;
	int16_t x732 = INT16_MIN;
	volatile int32_t t162 = 151100265;

    t162 = (x729-((x730!=x731)%x732));

    if (t162 != -794297) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint8_t x733 = 1U;
	int16_t x734 = INT16_MAX;
	int16_t x735 = INT16_MAX;
	volatile uint32_t x736 = 34585U;
	volatile uint32_t t163 = 4424480U;

    t163 = (x733-((x734!=x735)%x736));

    if (t163 != 1U) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x737 = INT8_MAX;
	int8_t x738 = 23;
	static int64_t x739 = 310LL;
	int32_t x740 = INT32_MIN;
	volatile int32_t t164 = -686;

    t164 = (x737-((x738!=x739)%x740));

    if (t164 != 126) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x741 = 47384621;
	int64_t x742 = INT64_MIN;
	uint64_t x743 = 5739782134959900767LLU;
	int8_t x744 = INT8_MIN;
	static volatile int32_t t165 = 7;

    t165 = (x741-((x742!=x743)%x744));

    if (t165 != 47384620) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x745 = INT8_MIN;
	int8_t x746 = INT8_MIN;
	static int16_t x747 = INT16_MIN;
	int16_t x748 = -1;

    t166 = (x745-((x746!=x747)%x748));

    if (t166 != -128) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x749 = 10403;
	uint8_t x750 = 1U;
	int16_t x751 = -1;
	uint64_t x752 = UINT64_MAX;
	uint64_t t167 = 317438979878LLU;

    t167 = (x749-((x750!=x751)%x752));

    if (t167 != 10402LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x753 = INT32_MAX;
	int64_t x755 = -1LL;
	static uint64_t x756 = 2569017282311LLU;
	volatile uint64_t t168 = 92LLU;

    t168 = (x753-((x754!=x755)%x756));

    if (t168 != 2147483646LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x757 = -11;
	uint32_t t169 = 1045345236U;

    t169 = (x757-((x758!=x759)%x760));

    if (t169 != 4294967284U) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x763 = 3U;
	uint64_t x764 = 704234811LLU;
	uint64_t t170 = 533012706255988830LLU;

    t170 = (x761-((x762!=x763)%x764));

    if (t170 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x765 = INT64_MIN;
	int8_t x766 = -1;
	int32_t x767 = -1;
	volatile int64_t t171 = INT64_MIN;

    t171 = (x765-((x766!=x767)%x768));

    if (t171 != INT64_MIN) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x769 = -8923812795605831LL;
	volatile int32_t x771 = 2;
	volatile uint16_t x772 = 2776U;
	volatile int64_t t172 = 514349LL;

    t172 = (x769-((x770!=x771)%x772));

    if (t172 != -8923812795605832LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x775 = INT64_MIN;
	static int64_t x776 = 73LL;
	volatile int64_t t173 = 10LL;

    t173 = (x773-((x774!=x775)%x776));

    if (t173 != 295LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x778 = -1LL;
	int32_t x780 = INT32_MIN;
	int32_t t174 = 0;

    t174 = (x777-((x778!=x779)%x780));

    if (t174 != 65534) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x785 = 501226988961476LL;
	static int64_t x786 = -79348026LL;
	static volatile int32_t x787 = INT32_MIN;
	uint16_t x788 = 6154U;
	static volatile int64_t t175 = -3710954799LL;

    t175 = (x785-((x786!=x787)%x788));

    if (t175 != 501226988961475LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x789 = UINT8_MAX;
	volatile int8_t x790 = INT8_MAX;
	static volatile int64_t x792 = -477667LL;
	int64_t t176 = 415390102722490845LL;

    t176 = (x789-((x790!=x791)%x792));

    if (t176 != 254LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x793 = 317091U;
	int64_t x794 = -209656592008LL;
	uint16_t x795 = 0U;

    t177 = (x793-((x794!=x795)%x796));

    if (t177 != 317090LL) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint16_t x797 = UINT16_MAX;
	static int32_t x798 = INT32_MAX;
	int32_t x799 = -1;
	uint64_t x800 = 440747776024LLU;
	uint64_t t178 = 3595419836474581LLU;

    t178 = (x797-((x798!=x799)%x800));

    if (t178 != 65534LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x801 = INT64_MIN;
	int8_t x802 = 7;
	int8_t x803 = -2;
	int64_t x804 = -1LL;
	int64_t t179 = INT64_MIN;

    t179 = (x801-((x802!=x803)%x804));

    if (t179 != INT64_MIN) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x805 = INT8_MIN;
	int64_t x806 = 0LL;
	volatile int32_t x807 = INT32_MIN;
	int32_t x808 = -1;
	volatile int32_t t180 = -88600220;

    t180 = (x805-((x806!=x807)%x808));

    if (t180 != -128) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x811 = INT64_MIN;
	uint32_t x812 = 454892U;

    t181 = (x809-((x810!=x811)%x812));

    if (t181 != 4462766778387064LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int32_t x813 = -41126189;
	int64_t x814 = INT64_MIN;
	int32_t x815 = -1;
	static int16_t x816 = 3941;
	static int32_t t182 = -676;

    t182 = (x813-((x814!=x815)%x816));

    if (t182 != -41126190) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x817 = INT64_MIN;
	int8_t x818 = -1;
	int16_t x819 = -1;
	int8_t x820 = 2;
	volatile int64_t t183 = INT64_MIN;

    t183 = (x817-((x818!=x819)%x820));

    if (t183 != INT64_MIN) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x821 = INT16_MAX;
	int16_t x822 = -1096;
	uint16_t x823 = 2521U;
	static volatile int16_t x824 = 6;
	volatile int32_t t184 = -44004994;

    t184 = (x821-((x822!=x823)%x824));

    if (t184 != 32766) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x825 = 7223594LLU;
	volatile uint32_t x826 = UINT32_MAX;
	uint32_t x827 = 3354U;
	uint16_t x828 = 56U;
	uint64_t t185 = 337488624111LLU;

    t185 = (x825-((x826!=x827)%x828));

    if (t185 != 7223593LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x829 = INT16_MIN;
	volatile int64_t x830 = -1LL;
	volatile uint32_t x832 = 45065U;
	static volatile uint32_t t186 = 0U;

    t186 = (x829-((x830!=x831)%x832));

    if (t186 != 4294934527U) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x833 = 55U;
	static int64_t x835 = 3686094322LL;
	volatile int64_t t187 = -1313882438LL;

    t187 = (x833-((x834!=x835)%x836));

    if (t187 != 54LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint32_t x837 = UINT32_MAX;
	int64_t x838 = INT64_MIN;
	int64_t x839 = -1516716565117909LL;
	uint64_t t188 = 137LLU;

    t188 = (x837-((x838!=x839)%x840));

    if (t188 != 4294967294LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x841 = -1;
	int64_t x842 = INT64_MIN;
	uint8_t x843 = 1U;
	uint32_t x844 = 95122U;
	static uint32_t t189 = 3U;

    t189 = (x841-((x842!=x843)%x844));

    if (t189 != 4294967294U) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x845 = 2U;
	static volatile int32_t x847 = INT32_MIN;
	static volatile uint16_t x848 = UINT16_MAX;
	int32_t t190 = -346874;

    t190 = (x845-((x846!=x847)%x848));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x853 = INT32_MAX;
	static volatile int64_t x854 = INT64_MIN;
	static uint32_t x856 = UINT32_MAX;

    t191 = (x853-((x854!=x855)%x856));

    if (t191 != 2147483646U) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x857 = 100;
	static int32_t x858 = INT32_MAX;
	volatile int8_t x859 = INT8_MAX;
	uint32_t x860 = 126263508U;
	volatile uint32_t t192 = 3U;

    t192 = (x857-((x858!=x859)%x860));

    if (t192 != 99U) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int64_t x861 = 252967LL;
	uint8_t x862 = UINT8_MAX;
	volatile int8_t x864 = INT8_MAX;

    t193 = (x861-((x862!=x863)%x864));

    if (t193 != 252966LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint64_t x865 = 8264797754097581255LLU;
	volatile int32_t x867 = -2775;
	uint8_t x868 = 66U;

    t194 = (x865-((x866!=x867)%x868));

    if (t194 != 8264797754097581254LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x870 = UINT32_MAX;
	int64_t x871 = INT64_MIN;
	int32_t x872 = INT32_MIN;

    t195 = (x869-((x870!=x871)%x872));

    if (t195 != 27LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static int64_t x873 = INT64_MAX;
	uint16_t x875 = 2U;
	int32_t x876 = 1415;

    t196 = (x873-((x874!=x875)%x876));

    if (t196 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x877 = INT8_MAX;
	uint16_t x878 = 6U;
	int8_t x879 = INT8_MAX;
	volatile int32_t t197 = -1441140;

    t197 = (x877-((x878!=x879)%x880));

    if (t197 != 126) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x883 = 15;

    t198 = (x881-((x882!=x883)%x884));

    if (t198 != -11) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x885 = 6757506072LL;
	volatile int64_t x887 = INT64_MIN;
	int16_t x888 = INT16_MIN;
	volatile int64_t t199 = -89015623LL;

    t199 = (x885-((x886!=x887)%x888));

    if (t199 != 6757506071LL) { NG(); } else { ; }
	
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

