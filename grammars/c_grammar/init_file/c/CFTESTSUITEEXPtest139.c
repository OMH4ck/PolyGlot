
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

int16_t x3 = -1;
volatile int32_t t1 = 29204;
int32_t x10 = INT32_MAX;
int8_t x11 = -15;
static volatile int64_t t2 = INT64_MAX;
int8_t x14 = -1;
volatile int64_t t3 = INT64_MAX;
volatile int32_t x21 = INT32_MIN;
volatile int8_t x24 = -1;
uint8_t x29 = UINT8_MAX;
uint32_t x32 = 9527311U;
int16_t x36 = INT16_MAX;
volatile int32_t t7 = 7870917;
volatile int16_t x45 = INT16_MAX;
int16_t x59 = -14607;
int16_t x67 = INT16_MAX;
volatile int32_t x68 = INT32_MIN;
int16_t x70 = INT16_MIN;
volatile int32_t t14 = 22793;
int64_t x73 = -1LL;
int64_t x79 = -27511489256929LL;
int16_t x80 = 153;
static uint8_t x90 = 0U;
int8_t x96 = -63;
int8_t x99 = 3;
static uint64_t x111 = UINT64_MAX;
static int32_t x112 = -24497;
int64_t x117 = INT64_MIN;
uint64_t x121 = 9100062528823777377LLU;
static int8_t x123 = INT8_MAX;
int16_t x124 = INT16_MIN;
int16_t x141 = 6;
int64_t x149 = 331613967894405630LL;
int64_t t33 = -13771LL;
volatile uint64_t t34 = UINT64_MAX;
volatile int8_t x167 = INT8_MIN;
int8_t x168 = -3;
int64_t x170 = 8154210741393LL;
uint64_t x172 = UINT64_MAX;
volatile int32_t t36 = -100147212;
volatile uint64_t x173 = 7698187323902483LLU;
int8_t x178 = 11;
int8_t x186 = INT8_MIN;
static int8_t x189 = 9;
static volatile uint64_t x191 = 0LLU;
uint64_t x203 = 3794580751320231LLU;
volatile int32_t x204 = INT32_MAX;
volatile int64_t x205 = -37811010853462LL;
volatile int16_t x207 = INT16_MIN;
volatile int64_t t45 = -187LL;
int32_t t49 = -24836559;
int8_t x232 = 2;
int64_t t56 = 0LL;
int8_t x268 = INT8_MAX;
static volatile uint64_t x278 = 49311060919423LLU;
uint16_t x280 = UINT16_MAX;
volatile int32_t t61 = 13578985;
static uint32_t x302 = UINT32_MAX;
uint64_t x310 = UINT64_MAX;
uint8_t x311 = UINT8_MAX;
volatile int32_t t69 = -11;
int8_t x322 = INT8_MIN;
volatile int64_t t71 = 4041551LL;
uint32_t x325 = UINT32_MAX;
static volatile int32_t t73 = 592907;
static uint8_t x333 = 83U;
static volatile int16_t x337 = -206;
uint8_t x340 = 1U;
volatile int32_t x347 = INT32_MAX;
int64_t x355 = INT64_MAX;
uint16_t x357 = 3790U;
volatile uint8_t x369 = UINT8_MAX;
int16_t x376 = -21;
int64_t x377 = -14990390LL;
volatile uint32_t x382 = 112349U;
volatile int32_t t86 = -574401136;
static uint8_t x389 = UINT8_MAX;
uint8_t x390 = 1U;
uint32_t x396 = 29059300U;
volatile int32_t x397 = INT32_MIN;
static int8_t x408 = 0;
int16_t x419 = INT16_MIN;
int8_t x420 = INT8_MIN;
static volatile int32_t x430 = 20285;
uint16_t x434 = UINT16_MAX;
volatile uint64_t x436 = UINT64_MAX;
static uint8_t x440 = 1U;
uint64_t x442 = UINT64_MAX;
uint64_t x444 = UINT64_MAX;
uint64_t x450 = UINT64_MAX;
int8_t x453 = INT8_MIN;
uint32_t x455 = UINT32_MAX;
volatile int64_t x465 = 30109LL;
int64_t x474 = -36981421143LL;
volatile int64_t x477 = -1LL;
uint8_t x479 = UINT8_MAX;
static int8_t x481 = -1;
int64_t x482 = -6133599431361656LL;
int32_t t110 = 622314;
uint32_t x488 = 9U;
static uint16_t x502 = UINT16_MAX;
uint64_t x503 = 56049691305092301LLU;
volatile int32_t t114 = -61;
static volatile int32_t t115 = -51;
int64_t x517 = INT64_MAX;
int16_t x518 = -1;
int32_t x529 = INT32_MAX;
int64_t x532 = -959040226524LL;
static volatile int32_t t120 = INT32_MAX;
int32_t x561 = INT32_MIN;
volatile uint16_t x564 = 6U;
uint64_t x567 = 24235468906LLU;
static int64_t t126 = INT64_MIN;
static int32_t x576 = INT32_MIN;
int32_t t128 = 5;
static int8_t x583 = -1;
int8_t x585 = INT8_MAX;
volatile int32_t t130 = 331373776;
int64_t x589 = INT64_MIN;
uint64_t x597 = 18139583167715387LLU;
uint8_t x599 = UINT8_MAX;
int32_t x600 = INT32_MIN;
int16_t x602 = -10619;
uint8_t x604 = 2U;
uint16_t x606 = UINT16_MAX;
uint8_t x609 = UINT8_MAX;
volatile uint32_t t138 = 474023U;
volatile uint64_t x627 = 30602000958LLU;
int64_t x630 = 335923013753609LL;
volatile int32_t t144 = 1331964;
uint16_t x658 = 6965U;
static uint16_t x659 = 2752U;
static volatile uint64_t x671 = UINT64_MAX;
int32_t x675 = -177;
uint32_t x680 = 112072U;
volatile int8_t x684 = -3;
volatile int32_t t151 = 1;
uint64_t x701 = UINT64_MAX;
volatile uint16_t x703 = 383U;
uint16_t x705 = 116U;
volatile int8_t x706 = INT8_MIN;
int64_t x709 = INT64_MAX;
static volatile uint16_t x720 = 5843U;
volatile int32_t t155 = -1821423;
int8_t x721 = -1;
int32_t x723 = INT32_MAX;
uint32_t x728 = UINT32_MAX;
volatile uint32_t t159 = 639U;
int8_t x745 = 62;
int32_t t162 = 457194;
uint64_t x760 = 61LLU;
static int64_t x761 = INT64_MAX;
static int8_t x770 = INT8_MAX;
static uint64_t t165 = UINT64_MAX;
uint8_t x773 = UINT8_MAX;
volatile int8_t x775 = INT8_MIN;
volatile uint16_t x791 = 21U;
volatile int64_t x793 = 1915135756813222LL;
volatile int64_t x795 = 519753632LL;
uint32_t x807 = 2U;
static int16_t x813 = 197;
int32_t x814 = -1;
volatile int8_t x818 = 0;
uint32_t x819 = 65422U;
int8_t x820 = -1;
volatile int32_t t176 = INT32_MAX;
int64_t x828 = INT64_MAX;
volatile int64_t t178 = -148LL;
static uint8_t x831 = 0U;
int8_t x837 = INT8_MAX;
uint64_t x839 = 825921498148628955LLU;
int8_t x843 = -27;
uint64_t x850 = 60260LLU;
volatile int16_t x853 = -1;
uint32_t x854 = UINT32_MAX;
int32_t x873 = INT32_MAX;
volatile int32_t t187 = INT32_MAX;
volatile uint32_t x882 = 0U;
uint16_t x886 = UINT16_MAX;
uint64_t x889 = UINT64_MAX;
uint64_t t191 = UINT64_MAX;
int32_t x894 = INT32_MIN;
volatile int32_t t192 = 1026132;
static int64_t x899 = 135243975598LL;
volatile int32_t x901 = -1;
volatile uint32_t x903 = 1342544U;
int32_t x908 = INT32_MIN;
int32_t x914 = 608095114;
uint16_t x916 = 1872U;
uint16_t x924 = 3U;
volatile int32_t t199 = 31103;


void f0(void) {
    	volatile int32_t x1 = INT32_MIN;
	int8_t x2 = -1;
	int64_t x4 = INT64_MIN;
	int32_t t0 = INT32_MIN;

    t0 = (x1|((x2+x3)<=x4));

    if (t0 != INT32_MIN) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x5 = -1;
	int64_t x6 = 1539724503555LL;
	volatile int64_t x7 = -1645301897LL;
	static int8_t x8 = INT8_MIN;

    t1 = (x5|((x6+x7)<=x8));

    if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x9 = INT64_MAX;
	uint16_t x12 = 1870U;

    t2 = (x9|((x10+x11)<=x12));

    if (t2 != INT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = INT64_MAX;
	int8_t x15 = INT8_MIN;
	volatile uint8_t x16 = 84U;

    t3 = (x13|((x14+x15)<=x16));

    if (t3 != INT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint16_t x17 = 0U;
	int8_t x18 = -1;
	volatile uint8_t x19 = 1U;
	int16_t x20 = INT16_MIN;
	volatile int32_t t4 = 578;

    t4 = (x17|((x18+x19)<=x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x22 = 3;
	int64_t x23 = 35605LL;
	int32_t t5 = INT32_MIN;

    t5 = (x21|((x22+x23)<=x24));

    if (t5 != INT32_MIN) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x30 = INT32_MIN;
	volatile uint32_t x31 = 359117U;
	int32_t t6 = 460228943;

    t6 = (x29|((x30+x31)<=x32));

    if (t6 != 255) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x33 = -57153533;
	volatile uint64_t x34 = 1737LLU;
	uint16_t x35 = 6175U;

    t7 = (x33|((x34+x35)<=x36));

    if (t7 != -57153533) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x41 = -20;
	uint16_t x42 = 237U;
	int32_t x43 = INT32_MIN;
	volatile int8_t x44 = -26;
	volatile int32_t t8 = 17325715;

    t8 = (x41|((x42+x43)<=x44));

    if (t8 != -19) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x46 = 0U;
	int8_t x47 = INT8_MIN;
	uint32_t x48 = 326243650U;
	int32_t t9 = -564524;

    t9 = (x45|((x46+x47)<=x48));

    if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x49 = INT8_MAX;
	int16_t x50 = INT16_MIN;
	int32_t x51 = 456539912;
	volatile int16_t x52 = 0;
	static volatile int32_t t10 = 806;

    t10 = (x49|((x50+x51)<=x52));

    if (t10 != 127) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x53 = INT32_MIN;
	uint8_t x54 = 6U;
	static uint16_t x55 = 149U;
	int8_t x56 = -19;
	static int32_t t11 = INT32_MIN;

    t11 = (x53|((x54+x55)<=x56));

    if (t11 != INT32_MIN) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x57 = INT32_MIN;
	volatile uint64_t x58 = UINT64_MAX;
	int32_t x60 = 1574;
	int32_t t12 = INT32_MIN;

    t12 = (x57|((x58+x59)<=x60));

    if (t12 != INT32_MIN) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint32_t x65 = UINT32_MAX;
	volatile int8_t x66 = 2;
	uint32_t t13 = UINT32_MAX;

    t13 = (x65|((x66+x67)<=x68));

    if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x69 = 13609;
	uint32_t x71 = UINT32_MAX;
	uint32_t x72 = UINT32_MAX;

    t14 = (x69|((x70+x71)<=x72));

    if (t14 != 13609) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x74 = UINT32_MAX;
	uint32_t x75 = 928965850U;
	int32_t x76 = 3;
	int64_t t15 = 915652209746LL;

    t15 = (x73|((x74+x75)<=x76));

    if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint64_t x77 = 242434039851LLU;
	static volatile uint64_t x78 = 9432143009LLU;
	uint64_t t16 = 3822LLU;

    t16 = (x77|((x78+x79)<=x80));

    if (t16 != 242434039851LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x81 = 2002106623039523LLU;
	int64_t x82 = INT64_MIN;
	int16_t x83 = 3;
	uint8_t x84 = 6U;
	uint64_t t17 = 992307414LLU;

    t17 = (x81|((x82+x83)<=x84));

    if (t17 != 2002106623039523LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint32_t x85 = 0U;
	volatile int32_t x86 = INT32_MAX;
	int32_t x87 = INT32_MIN;
	int32_t x88 = 1;
	uint32_t t18 = 7622U;

    t18 = (x85|((x86+x87)<=x88));

    if (t18 != 1U) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint32_t x89 = 130883U;
	int32_t x91 = -1;
	static int32_t x92 = 0;
	volatile uint32_t t19 = 6024870U;

    t19 = (x89|((x90+x91)<=x92));

    if (t19 != 130883U) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x93 = INT16_MIN;
	int8_t x94 = 1;
	int16_t x95 = INT16_MIN;
	int32_t t20 = -255314;

    t20 = (x93|((x94+x95)<=x96));

    if (t20 != -32767) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x97 = INT16_MAX;
	volatile int8_t x98 = INT8_MIN;
	static int32_t x100 = INT32_MIN;
	int32_t t21 = 1;

    t21 = (x97|((x98+x99)<=x100));

    if (t21 != 32767) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x101 = UINT32_MAX;
	volatile int64_t x102 = INT64_MIN;
	int32_t x103 = 11172865;
	volatile int16_t x104 = INT16_MIN;
	volatile uint32_t t22 = UINT32_MAX;

    t22 = (x101|((x102+x103)<=x104));

    if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x105 = INT16_MIN;
	uint64_t x106 = 757LLU;
	volatile uint8_t x107 = 14U;
	int64_t x108 = 59861835681711230LL;
	volatile int32_t t23 = -1;

    t23 = (x105|((x106+x107)<=x108));

    if (t23 != -32767) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x109 = 6;
	uint16_t x110 = 477U;
	volatile int32_t t24 = -119328;

    t24 = (x109|((x110+x111)<=x112));

    if (t24 != 7) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x113 = 0;
	volatile uint64_t x114 = UINT64_MAX;
	int64_t x115 = -1970924650LL;
	int64_t x116 = INT64_MIN;
	int32_t t25 = -21084;

    t25 = (x113|((x114+x115)<=x116));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x118 = -1;
	int64_t x119 = 234LL;
	volatile int64_t x120 = INT64_MIN;
	int64_t t26 = INT64_MIN;

    t26 = (x117|((x118+x119)<=x120));

    if (t26 != INT64_MIN) { NG(); } else { ; }
	
}

void f27(void) {
    	static int8_t x122 = -1;
	volatile uint64_t t27 = 116306982979485428LLU;

    t27 = (x121|((x122+x123)<=x124));

    if (t27 != 9100062528823777377LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static int64_t x129 = INT64_MIN;
	int16_t x130 = INT16_MIN;
	uint64_t x131 = 10884363LLU;
	int8_t x132 = INT8_MIN;
	volatile int64_t t28 = -1LL;

    t28 = (x129|((x130+x131)<=x132));

    if (t28 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x133 = INT16_MIN;
	int32_t x134 = 34;
	uint16_t x135 = 112U;
	static uint16_t x136 = 2584U;
	int32_t t29 = 30;

    t29 = (x133|((x134+x135)<=x136));

    if (t29 != -32767) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint16_t x137 = 1738U;
	int16_t x138 = 317;
	volatile uint32_t x139 = UINT32_MAX;
	volatile int32_t x140 = INT32_MIN;
	volatile int32_t t30 = -12646129;

    t30 = (x137|((x138+x139)<=x140));

    if (t30 != 1739) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x142 = INT16_MIN;
	uint8_t x143 = UINT8_MAX;
	uint64_t x144 = UINT64_MAX;
	volatile int32_t t31 = 172322274;

    t31 = (x141|((x142+x143)<=x144));

    if (t31 != 7) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint32_t x145 = 9036107U;
	int32_t x146 = INT32_MIN;
	volatile int8_t x147 = INT8_MAX;
	uint64_t x148 = 82LLU;
	volatile uint32_t t32 = 6887U;

    t32 = (x145|((x146+x147)<=x148));

    if (t32 != 9036107U) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x150 = INT16_MIN;
	static volatile uint8_t x151 = 0U;
	int8_t x152 = 0;

    t33 = (x149|((x150+x151)<=x152));

    if (t33 != 331613967894405631LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x161 = UINT64_MAX;
	static int8_t x162 = INT8_MIN;
	uint64_t x163 = 4096562738057352749LLU;
	int32_t x164 = -1;

    t34 = (x161|((x162+x163)<=x164));

    if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x165 = UINT16_MAX;
	int16_t x166 = -12349;
	static volatile int32_t t35 = 197887710;

    t35 = (x165|((x166+x167)<=x168));

    if (t35 != 65535) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x169 = INT8_MAX;
	int8_t x171 = 3;

    t36 = (x169|((x170+x171)<=x172));

    if (t36 != 127) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint64_t x174 = UINT64_MAX;
	int32_t x175 = INT32_MIN;
	int16_t x176 = -1;
	static volatile uint64_t t37 = 331423198LLU;

    t37 = (x173|((x174+x175)<=x176));

    if (t37 != 7698187323902483LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x177 = INT32_MIN;
	int64_t x179 = 181733670LL;
	int8_t x180 = -1;
	int32_t t38 = INT32_MIN;

    t38 = (x177|((x178+x179)<=x180));

    if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x181 = -1;
	volatile uint8_t x182 = 19U;
	int8_t x183 = INT8_MIN;
	int64_t x184 = INT64_MIN;
	volatile int32_t t39 = 1939;

    t39 = (x181|((x182+x183)<=x184));

    if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x185 = 41647U;
	int64_t x187 = 3427LL;
	int32_t x188 = -16033167;
	volatile uint32_t t40 = 0U;

    t40 = (x185|((x186+x187)<=x188));

    if (t40 != 41647U) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x190 = UINT8_MAX;
	uint16_t x192 = 61U;
	volatile int32_t t41 = -755;

    t41 = (x189|((x190+x191)<=x192));

    if (t41 != 9) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x193 = -1;
	static uint64_t x194 = 68228320141805LLU;
	int64_t x195 = INT64_MIN;
	int8_t x196 = INT8_MIN;
	volatile int32_t t42 = -342950748;

    t42 = (x193|((x194+x195)<=x196));

    if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x197 = UINT16_MAX;
	int64_t x198 = -1LL;
	int16_t x199 = INT16_MIN;
	int64_t x200 = -740164289746389LL;
	volatile int32_t t43 = 72859;

    t43 = (x197|((x198+x199)<=x200));

    if (t43 != 65535) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x201 = -1;
	int8_t x202 = 8;
	volatile int32_t t44 = -18;

    t44 = (x201|((x202+x203)<=x204));

    if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x206 = INT8_MIN;
	int64_t x208 = INT64_MIN;

    t45 = (x205|((x206+x207)<=x208));

    if (t45 != -37811010853462LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static int8_t x209 = 0;
	int16_t x210 = -1;
	static volatile int32_t x211 = -1;
	int8_t x212 = -1;
	volatile int32_t t46 = -30207999;

    t46 = (x209|((x210+x211)<=x212));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x213 = UINT8_MAX;
	int16_t x214 = -46;
	static volatile uint32_t x215 = 2117201U;
	volatile int32_t x216 = -266706782;
	int32_t t47 = -109;

    t47 = (x213|((x214+x215)<=x216));

    if (t47 != 255) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int32_t x221 = INT32_MIN;
	uint32_t x222 = UINT32_MAX;
	int32_t x223 = INT32_MAX;
	static int16_t x224 = INT16_MAX;
	int32_t t48 = INT32_MIN;

    t48 = (x221|((x222+x223)<=x224));

    if (t48 != INT32_MIN) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x225 = INT8_MIN;
	uint8_t x226 = 16U;
	static int32_t x227 = INT32_MIN;
	uint64_t x228 = UINT64_MAX;

    t49 = (x225|((x226+x227)<=x228));

    if (t49 != -127) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x229 = 47222495551809LLU;
	volatile int64_t x230 = -1LL;
	int16_t x231 = -1;
	volatile uint64_t t50 = 480903244528152074LLU;

    t50 = (x229|((x230+x231)<=x232));

    if (t50 != 47222495551809LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x233 = INT64_MIN;
	int32_t x234 = -1;
	static int8_t x235 = INT8_MIN;
	uint8_t x236 = UINT8_MAX;
	volatile int64_t t51 = 529817851LL;

    t51 = (x233|((x234+x235)<=x236));

    if (t51 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint64_t x237 = 1033349342788669LLU;
	uint16_t x238 = UINT16_MAX;
	static int32_t x239 = INT32_MIN;
	int32_t x240 = INT32_MIN;
	volatile uint64_t t52 = 12203906LLU;

    t52 = (x237|((x238+x239)<=x240));

    if (t52 != 1033349342788669LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x241 = -8;
	uint16_t x242 = 1197U;
	uint8_t x243 = 1U;
	volatile int32_t x244 = INT32_MIN;
	volatile int32_t t53 = 875;

    t53 = (x241|((x242+x243)<=x244));

    if (t53 != -8) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x245 = -1;
	int64_t x246 = -1LL;
	volatile uint16_t x247 = UINT16_MAX;
	volatile int64_t x248 = INT64_MAX;
	int32_t t54 = -4781;

    t54 = (x245|((x246+x247)<=x248));

    if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x249 = -1;
	static uint8_t x250 = UINT8_MAX;
	uint32_t x251 = UINT32_MAX;
	int32_t x252 = INT32_MAX;
	int32_t t55 = -245;

    t55 = (x249|((x250+x251)<=x252));

    if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x253 = 4071LL;
	int8_t x254 = -1;
	int8_t x255 = INT8_MIN;
	int16_t x256 = 493;

    t56 = (x253|((x254+x255)<=x256));

    if (t56 != 4071LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x257 = INT8_MIN;
	uint32_t x258 = UINT32_MAX;
	volatile int64_t x259 = INT64_MIN;
	int8_t x260 = INT8_MIN;
	int32_t t57 = -26;

    t57 = (x257|((x258+x259)<=x260));

    if (t57 != -127) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x261 = INT64_MIN;
	uint64_t x262 = 91605217LLU;
	int64_t x263 = 360373458171062768LL;
	uint8_t x264 = UINT8_MAX;
	volatile int64_t t58 = INT64_MIN;

    t58 = (x261|((x262+x263)<=x264));

    if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int16_t x265 = INT16_MIN;
	static int32_t x266 = INT32_MIN;
	static volatile uint16_t x267 = UINT16_MAX;
	volatile int32_t t59 = 79;

    t59 = (x265|((x266+x267)<=x268));

    if (t59 != -32767) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x269 = UINT16_MAX;
	volatile int8_t x270 = -1;
	int8_t x271 = INT8_MIN;
	static int16_t x272 = 104;
	static volatile int32_t t60 = -1;

    t60 = (x269|((x270+x271)<=x272));

    if (t60 != 65535) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x277 = -1;
	uint64_t x279 = 31285961532LLU;

    t61 = (x277|((x278+x279)<=x280));

    if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x281 = -1;
	int8_t x282 = INT8_MIN;
	volatile uint16_t x283 = 40U;
	uint16_t x284 = 1U;
	int32_t t62 = -176731609;

    t62 = (x281|((x282+x283)<=x284));

    if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint64_t x285 = 105236LLU;
	volatile int32_t x286 = INT32_MIN;
	static int8_t x287 = INT8_MAX;
	uint64_t x288 = 1532727049685LLU;
	uint64_t t63 = 6289793LLU;

    t63 = (x285|((x286+x287)<=x288));

    if (t63 != 105236LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x293 = -1;
	volatile int64_t x294 = 31146288868244LL;
	uint16_t x295 = UINT16_MAX;
	static int16_t x296 = INT16_MAX;
	static volatile int32_t t64 = -73899;

    t64 = (x293|((x294+x295)<=x296));

    if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x297 = -1;
	int64_t x298 = 113066700268LL;
	uint32_t x299 = 1688U;
	int16_t x300 = -1273;
	static int32_t t65 = -4080;

    t65 = (x297|((x298+x299)<=x300));

    if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x301 = 11;
	int32_t x303 = 2398463;
	int64_t x304 = 33776185982LL;
	volatile int32_t t66 = -378;

    t66 = (x301|((x302+x303)<=x304));

    if (t66 != 11) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x305 = 2U;
	volatile int32_t x306 = -10877;
	static int8_t x307 = INT8_MIN;
	int32_t x308 = INT32_MAX;
	static volatile int32_t t67 = -142729;

    t67 = (x305|((x306+x307)<=x308));

    if (t67 != 3) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x309 = UINT64_MAX;
	volatile uint32_t x312 = 7U;
	volatile uint64_t t68 = UINT64_MAX;

    t68 = (x309|((x310+x311)<=x312));

    if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x313 = -746125;
	static uint64_t x314 = 863890823LLU;
	static volatile uint64_t x315 = 7549663830920189LLU;
	static uint64_t x316 = 456639187738603495LLU;

    t69 = (x313|((x314+x315)<=x316));

    if (t69 != -746125) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x317 = UINT64_MAX;
	int64_t x318 = 33197824781LL;
	volatile int8_t x319 = INT8_MIN;
	static uint16_t x320 = 8U;
	volatile uint64_t t70 = UINT64_MAX;

    t70 = (x317|((x318+x319)<=x320));

    if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x321 = 16321145556699LL;
	int32_t x323 = -51;
	volatile int8_t x324 = INT8_MIN;

    t71 = (x321|((x322+x323)<=x324));

    if (t71 != 16321145556699LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x326 = -1;
	volatile uint8_t x327 = UINT8_MAX;
	uint64_t x328 = UINT64_MAX;
	volatile uint32_t t72 = UINT32_MAX;

    t72 = (x325|((x326+x327)<=x328));

    if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x329 = 7;
	static int8_t x330 = INT8_MAX;
	int16_t x331 = INT16_MIN;
	volatile uint64_t x332 = UINT64_MAX;

    t73 = (x329|((x330+x331)<=x332));

    if (t73 != 7) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x334 = -83;
	int64_t x335 = 1783416109387243438LL;
	uint32_t x336 = 21848309U;
	volatile int32_t t74 = 7462852;

    t74 = (x333|((x334+x335)<=x336));

    if (t74 != 83) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x338 = -1;
	uint16_t x339 = UINT16_MAX;
	volatile int32_t t75 = -31003761;

    t75 = (x337|((x338+x339)<=x340));

    if (t75 != -206) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int8_t x341 = -16;
	int16_t x342 = 52;
	int8_t x343 = INT8_MAX;
	uint16_t x344 = 25965U;
	static volatile int32_t t76 = 1;

    t76 = (x341|((x342+x343)<=x344));

    if (t76 != -15) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x345 = 0;
	int16_t x346 = INT16_MIN;
	volatile int8_t x348 = INT8_MIN;
	volatile int32_t t77 = 35858879;

    t77 = (x345|((x346+x347)<=x348));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x349 = 1U;
	volatile int64_t x350 = 40154432993828640LL;
	int8_t x351 = -1;
	int16_t x352 = 1;
	int32_t t78 = -254977582;

    t78 = (x349|((x350+x351)<=x352));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x353 = 86U;
	int16_t x354 = INT16_MIN;
	static int32_t x356 = 406960266;
	int32_t t79 = 134280;

    t79 = (x353|((x354+x355)<=x356));

    if (t79 != 86) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x358 = 74300028U;
	int16_t x359 = -1;
	volatile int8_t x360 = INT8_MAX;
	int32_t t80 = -226310141;

    t80 = (x357|((x358+x359)<=x360));

    if (t80 != 3790) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x365 = 11;
	int32_t x366 = -1;
	static volatile int32_t x367 = 428;
	uint32_t x368 = 5376U;
	volatile int32_t t81 = -29294;

    t81 = (x365|((x366+x367)<=x368));

    if (t81 != 11) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x370 = -1;
	int8_t x371 = -44;
	int32_t x372 = 1812277;
	static volatile int32_t t82 = 69791129;

    t82 = (x369|((x370+x371)<=x372));

    if (t82 != 255) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint64_t x373 = UINT64_MAX;
	int32_t x374 = 94;
	int16_t x375 = INT16_MAX;
	uint64_t t83 = UINT64_MAX;

    t83 = (x373|((x374+x375)<=x376));

    if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x378 = 30;
	int32_t x379 = 11912961;
	volatile uint64_t x380 = UINT64_MAX;
	int64_t t84 = -40529804232501672LL;

    t84 = (x377|((x378+x379)<=x380));

    if (t84 != -14990389LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x381 = INT32_MIN;
	int16_t x383 = -1;
	int8_t x384 = 39;
	volatile int32_t t85 = INT32_MIN;

    t85 = (x381|((x382+x383)<=x384));

    if (t85 != INT32_MIN) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x385 = -5152;
	uint16_t x386 = 16678U;
	int8_t x387 = INT8_MIN;
	uint16_t x388 = UINT16_MAX;

    t86 = (x385|((x386+x387)<=x388));

    if (t86 != -5151) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x391 = -2;
	static uint32_t x392 = UINT32_MAX;
	int32_t t87 = -126457579;

    t87 = (x389|((x390+x391)<=x392));

    if (t87 != 255) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x393 = -14705;
	uint32_t x394 = UINT32_MAX;
	int16_t x395 = INT16_MIN;
	int32_t t88 = -504348676;

    t88 = (x393|((x394+x395)<=x396));

    if (t88 != -14705) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x398 = 7;
	uint32_t x399 = 497678U;
	uint8_t x400 = UINT8_MAX;
	int32_t t89 = INT32_MIN;

    t89 = (x397|((x398+x399)<=x400));

    if (t89 != INT32_MIN) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint64_t x401 = 1093206891LLU;
	volatile int64_t x402 = -155165LL;
	volatile int16_t x403 = 21;
	uint16_t x404 = 1U;
	static volatile uint64_t t90 = 83337742296013877LLU;

    t90 = (x401|((x402+x403)<=x404));

    if (t90 != 1093206891LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint32_t x405 = UINT32_MAX;
	volatile int64_t x406 = INT64_MIN;
	int32_t x407 = 7935;
	volatile uint32_t t91 = UINT32_MAX;

    t91 = (x405|((x406+x407)<=x408));

    if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x409 = 28;
	volatile int32_t x410 = 16551619;
	uint64_t x411 = 0LLU;
	int64_t x412 = -13751240LL;
	volatile int32_t t92 = 76;

    t92 = (x409|((x410+x411)<=x412));

    if (t92 != 29) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x413 = 1U;
	volatile int8_t x414 = INT8_MAX;
	int32_t x415 = INT32_MIN;
	static uint16_t x416 = 4435U;
	volatile int32_t t93 = 641894;

    t93 = (x413|((x414+x415)<=x416));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int64_t x417 = -76587202109977451LL;
	static int32_t x418 = 28515;
	int64_t t94 = 4459890378594795571LL;

    t94 = (x417|((x418+x419)<=x420));

    if (t94 != -76587202109977451LL) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int64_t x421 = INT64_MAX;
	uint32_t x422 = 447U;
	uint8_t x423 = 3U;
	volatile int64_t x424 = -1LL;
	static volatile int64_t t95 = INT64_MAX;

    t95 = (x421|((x422+x423)<=x424));

    if (t95 != INT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x425 = INT8_MIN;
	int8_t x426 = -1;
	int64_t x427 = -7872769047264LL;
	uint16_t x428 = UINT16_MAX;
	volatile int32_t t96 = 7419212;

    t96 = (x425|((x426+x427)<=x428));

    if (t96 != -127) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x429 = -1;
	int32_t x431 = INT32_MIN;
	int16_t x432 = 31;
	static int32_t t97 = 630251093;

    t97 = (x429|((x430+x431)<=x432));

    if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint8_t x433 = 0U;
	int16_t x435 = INT16_MIN;
	static int32_t t98 = -51;

    t98 = (x433|((x434+x435)<=x436));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x437 = INT32_MAX;
	static uint64_t x438 = 156640413319LLU;
	static volatile int16_t x439 = INT16_MIN;
	int32_t t99 = INT32_MAX;

    t99 = (x437|((x438+x439)<=x440));

    if (t99 != INT32_MAX) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint64_t x441 = UINT64_MAX;
	static volatile uint32_t x443 = UINT32_MAX;
	volatile uint64_t t100 = UINT64_MAX;

    t100 = (x441|((x442+x443)<=x444));

    if (t100 != UINT64_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x445 = INT64_MIN;
	static int8_t x446 = INT8_MIN;
	int32_t x447 = 0;
	int32_t x448 = INT32_MIN;
	volatile int64_t t101 = INT64_MIN;

    t101 = (x445|((x446+x447)<=x448));

    if (t101 != INT64_MIN) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x449 = 35478729LL;
	static int64_t x451 = INT64_MIN;
	int8_t x452 = 0;
	static volatile int64_t t102 = -717390655LL;

    t102 = (x449|((x450+x451)<=x452));

    if (t102 != 35478729LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x454 = -1;
	static int64_t x456 = INT64_MAX;
	int32_t t103 = -6;

    t103 = (x453|((x454+x455)<=x456));

    if (t103 != -127) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x457 = INT8_MAX;
	static int64_t x458 = INT64_MAX;
	static int64_t x459 = INT64_MIN;
	int16_t x460 = INT16_MIN;
	volatile int32_t t104 = 25742868;

    t104 = (x457|((x458+x459)<=x460));

    if (t104 != 127) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x461 = INT16_MIN;
	static uint16_t x462 = 0U;
	int64_t x463 = -1LL;
	int32_t x464 = INT32_MIN;
	int32_t t105 = 2661;

    t105 = (x461|((x462+x463)<=x464));

    if (t105 != -32768) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x466 = 9;
	int8_t x467 = -1;
	volatile int32_t x468 = 36;
	int64_t t106 = 3175LL;

    t106 = (x465|((x466+x467)<=x468));

    if (t106 != 30109LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int64_t x469 = -998LL;
	int8_t x470 = -1;
	static int8_t x471 = -1;
	int8_t x472 = -2;
	volatile int64_t t107 = 3549293300LL;

    t107 = (x469|((x470+x471)<=x472));

    if (t107 != -997LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x473 = -1;
	int64_t x475 = -12268LL;
	uint8_t x476 = 15U;
	volatile int32_t t108 = -4091;

    t108 = (x473|((x474+x475)<=x476));

    if (t108 != -1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x478 = -1;
	volatile uint8_t x480 = 18U;
	int64_t t109 = 1LL;

    t109 = (x477|((x478+x479)<=x480));

    if (t109 != -1LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x483 = 5492569U;
	int8_t x484 = -1;

    t110 = (x481|((x482+x483)<=x484));

    if (t110 != -1) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x485 = -14;
	static uint32_t x486 = 1715298U;
	static int32_t x487 = INT32_MAX;
	volatile int32_t t111 = 3;

    t111 = (x485|((x486+x487)<=x488));

    if (t111 != -14) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x497 = 1387U;
	static uint64_t x498 = 13621LLU;
	uint8_t x499 = 0U;
	uint8_t x500 = 23U;
	uint32_t t112 = 281135084U;

    t112 = (x497|((x498+x499)<=x500));

    if (t112 != 1387U) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x501 = UINT32_MAX;
	static uint8_t x504 = 106U;
	uint32_t t113 = UINT32_MAX;

    t113 = (x501|((x502+x503)<=x504));

    if (t113 != UINT32_MAX) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x505 = -1;
	int16_t x506 = 19;
	volatile uint64_t x507 = 8384966432622373850LLU;
	static int16_t x508 = -1;

    t114 = (x505|((x506+x507)<=x508));

    if (t114 != -1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint16_t x509 = UINT16_MAX;
	uint16_t x510 = 3844U;
	int16_t x511 = -1;
	volatile int8_t x512 = INT8_MIN;

    t115 = (x509|((x510+x511)<=x512));

    if (t115 != 65535) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x513 = INT16_MIN;
	static int8_t x514 = INT8_MIN;
	static int64_t x515 = INT64_MAX;
	static uint16_t x516 = 1061U;
	int32_t t116 = -13;

    t116 = (x513|((x514+x515)<=x516));

    if (t116 != -32768) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x519 = -1LL;
	volatile uint32_t x520 = 91127515U;
	int64_t t117 = INT64_MAX;

    t117 = (x517|((x518+x519)<=x520));

    if (t117 != INT64_MAX) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x521 = 2051267683016LL;
	int8_t x522 = INT8_MIN;
	int64_t x523 = -7LL;
	volatile uint64_t x524 = UINT64_MAX;
	static volatile int64_t t118 = -57901513115LL;

    t118 = (x521|((x522+x523)<=x524));

    if (t118 != 2051267683017LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x525 = UINT16_MAX;
	volatile uint64_t x526 = UINT64_MAX;
	int32_t x527 = INT32_MIN;
	uint16_t x528 = 5U;
	volatile int32_t t119 = -122128;

    t119 = (x525|((x526+x527)<=x528));

    if (t119 != 65535) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x530 = INT8_MIN;
	volatile uint16_t x531 = UINT16_MAX;

    t120 = (x529|((x530+x531)<=x532));

    if (t120 != INT32_MAX) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x533 = INT32_MIN;
	uint8_t x534 = 4U;
	int64_t x535 = -1LL;
	static int16_t x536 = INT16_MIN;
	int32_t t121 = INT32_MIN;

    t121 = (x533|((x534+x535)<=x536));

    if (t121 != INT32_MIN) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x537 = INT16_MAX;
	int16_t x538 = -8548;
	static volatile uint8_t x539 = 17U;
	int8_t x540 = 53;
	volatile int32_t t122 = -7;

    t122 = (x537|((x538+x539)<=x540));

    if (t122 != 32767) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x549 = 5717439909797600296LLU;
	static int8_t x550 = -1;
	static int16_t x551 = -1;
	int64_t x552 = INT64_MAX;
	uint64_t t123 = 5147484634929968LLU;

    t123 = (x549|((x550+x551)<=x552));

    if (t123 != 5717439909797600297LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x557 = 0U;
	volatile uint16_t x558 = UINT16_MAX;
	static uint32_t x559 = 0U;
	volatile uint8_t x560 = 1U;
	static int32_t t124 = -145;

    t124 = (x557|((x558+x559)<=x560));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int32_t x562 = -20509;
	volatile int64_t x563 = -1LL;
	int32_t t125 = 2;

    t125 = (x561|((x562+x563)<=x564));

    if (t125 != -2147483647) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x565 = INT64_MIN;
	int8_t x566 = 4;
	static volatile int64_t x568 = 1634842LL;

    t126 = (x565|((x566+x567)<=x568));

    if (t126 != INT64_MIN) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x573 = INT8_MIN;
	uint8_t x574 = 2U;
	uint64_t x575 = UINT64_MAX;
	int32_t t127 = -356759;

    t127 = (x573|((x574+x575)<=x576));

    if (t127 != -127) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint16_t x577 = UINT16_MAX;
	uint8_t x578 = 0U;
	static int32_t x579 = -1;
	int16_t x580 = INT16_MIN;

    t128 = (x577|((x578+x579)<=x580));

    if (t128 != 65535) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x581 = 108805LLU;
	int8_t x582 = INT8_MIN;
	volatile int16_t x584 = 124;
	uint64_t t129 = 200LLU;

    t129 = (x581|((x582+x583)<=x584));

    if (t129 != 108805LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x586 = INT16_MIN;
	volatile uint8_t x587 = 38U;
	uint32_t x588 = UINT32_MAX;

    t130 = (x585|((x586+x587)<=x588));

    if (t130 != 127) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x590 = -1695108668397475833LL;
	int64_t x591 = -1LL;
	int16_t x592 = INT16_MIN;
	static int64_t t131 = -7029414261487206LL;

    t131 = (x589|((x590+x591)<=x592));

    if (t131 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint8_t x593 = UINT8_MAX;
	static int64_t x594 = 1120598604143130741LL;
	static int64_t x595 = -1LL;
	int64_t x596 = INT64_MIN;
	int32_t t132 = 1;

    t132 = (x593|((x594+x595)<=x596));

    if (t132 != 255) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x598 = -1;
	volatile uint64_t t133 = 15883825319LLU;

    t133 = (x597|((x598+x599)<=x600));

    if (t133 != 18139583167715387LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x601 = INT64_MIN;
	uint16_t x603 = 210U;
	volatile int64_t t134 = -1LL;

    t134 = (x601|((x602+x603)<=x604));

    if (t134 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x605 = 360096U;
	int64_t x607 = 3LL;
	int16_t x608 = -1;
	volatile uint32_t t135 = 2728U;

    t135 = (x605|((x606+x607)<=x608));

    if (t135 != 360096U) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint32_t x610 = UINT32_MAX;
	volatile int64_t x611 = INT64_MIN;
	volatile int16_t x612 = -200;
	volatile int32_t t136 = 1;

    t136 = (x609|((x610+x611)<=x612));

    if (t136 != 255) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x613 = -59;
	uint32_t x614 = UINT32_MAX;
	int16_t x615 = INT16_MIN;
	static int16_t x616 = INT16_MIN;
	volatile int32_t t137 = -403210794;

    t137 = (x613|((x614+x615)<=x616));

    if (t137 != -59) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint32_t x617 = 27U;
	static uint32_t x618 = UINT32_MAX;
	volatile uint64_t x619 = 76LLU;
	volatile int64_t x620 = -1LL;

    t138 = (x617|((x618+x619)<=x620));

    if (t138 != 27U) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint32_t x625 = UINT32_MAX;
	volatile int64_t x626 = INT64_MIN;
	int16_t x628 = INT16_MIN;
	uint32_t t139 = UINT32_MAX;

    t139 = (x625|((x626+x627)<=x628));

    if (t139 != UINT32_MAX) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x629 = INT16_MIN;
	int32_t x631 = INT32_MAX;
	int8_t x632 = -1;
	volatile int32_t t140 = 487476;

    t140 = (x629|((x630+x631)<=x632));

    if (t140 != -32768) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x637 = INT32_MIN;
	int32_t x638 = -83661408;
	static int32_t x639 = 1;
	uint32_t x640 = UINT32_MAX;
	int32_t t141 = 2333;

    t141 = (x637|((x638+x639)<=x640));

    if (t141 != -2147483647) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x645 = -1;
	static volatile uint8_t x646 = 125U;
	volatile int16_t x647 = 454;
	volatile uint8_t x648 = 2U;
	volatile int32_t t142 = -22;

    t142 = (x645|((x646+x647)<=x648));

    if (t142 != -1) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x649 = -17;
	int32_t x650 = -101601;
	static int64_t x651 = 3424355LL;
	int32_t x652 = -1;
	int32_t t143 = -103;

    t143 = (x649|((x650+x651)<=x652));

    if (t143 != -17) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x653 = 3969U;
	int16_t x654 = INT16_MAX;
	static volatile int8_t x655 = INT8_MIN;
	uint8_t x656 = 22U;

    t144 = (x653|((x654+x655)<=x656));

    if (t144 != 3969) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x657 = UINT32_MAX;
	int8_t x660 = INT8_MIN;
	uint32_t t145 = UINT32_MAX;

    t145 = (x657|((x658+x659)<=x660));

    if (t145 != UINT32_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x669 = -16084442359230LL;
	uint64_t x670 = 384LLU;
	int8_t x672 = INT8_MIN;
	static int64_t t146 = -133LL;

    t146 = (x669|((x670+x671)<=x672));

    if (t146 != -16084442359229LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static int8_t x673 = 25;
	int8_t x674 = -1;
	uint64_t x676 = UINT64_MAX;
	int32_t t147 = -913;

    t147 = (x673|((x674+x675)<=x676));

    if (t147 != 25) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x677 = 141298102U;
	static volatile uint32_t x678 = UINT32_MAX;
	static int32_t x679 = INT32_MIN;
	volatile uint32_t t148 = 199985353U;

    t148 = (x677|((x678+x679)<=x680));

    if (t148 != 141298102U) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x681 = 27U;
	int64_t x682 = INT64_MIN;
	uint8_t x683 = 23U;
	static volatile int32_t t149 = 54886;

    t149 = (x681|((x682+x683)<=x684));

    if (t149 != 27) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x689 = INT8_MIN;
	uint8_t x690 = 14U;
	uint16_t x691 = 8U;
	uint64_t x692 = 1015516396LLU;
	int32_t t150 = -1047030646;

    t150 = (x689|((x690+x691)<=x692));

    if (t150 != -127) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x693 = -1;
	static uint16_t x694 = 3U;
	int16_t x695 = INT16_MIN;
	static volatile uint32_t x696 = UINT32_MAX;

    t151 = (x693|((x694+x695)<=x696));

    if (t151 != -1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x702 = 27U;
	static uint32_t x704 = 1467057415U;
	uint64_t t152 = UINT64_MAX;

    t152 = (x701|((x702+x703)<=x704));

    if (t152 != UINT64_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x707 = INT32_MAX;
	static int32_t x708 = 371;
	int32_t t153 = 1;

    t153 = (x705|((x706+x707)<=x708));

    if (t153 != 116) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint64_t x710 = 1090945LLU;
	volatile int64_t x711 = 0LL;
	volatile uint64_t x712 = 549LLU;
	volatile int64_t t154 = INT64_MAX;

    t154 = (x709|((x710+x711)<=x712));

    if (t154 != INT64_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x717 = -1;
	volatile uint8_t x718 = 72U;
	uint16_t x719 = 396U;

    t155 = (x717|((x718+x719)<=x720));

    if (t155 != -1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x722 = 1448994U;
	int16_t x724 = -22;
	volatile int32_t t156 = -914990075;

    t156 = (x721|((x722+x723)<=x724));

    if (t156 != -1) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x725 = INT16_MIN;
	volatile int64_t x726 = INT64_MAX;
	int8_t x727 = INT8_MIN;
	int32_t t157 = 383518571;

    t157 = (x725|((x726+x727)<=x728));

    if (t157 != -32768) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x729 = 175540U;
	static uint8_t x730 = 25U;
	static uint16_t x731 = UINT16_MAX;
	static int64_t x732 = -1LL;
	uint32_t t158 = 5713869U;

    t158 = (x729|((x730+x731)<=x732));

    if (t158 != 175540U) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint32_t x737 = 289002065U;
	uint16_t x738 = 265U;
	volatile int16_t x739 = INT16_MIN;
	uint32_t x740 = 1559706U;

    t159 = (x737|((x738+x739)<=x740));

    if (t159 != 289002065U) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x741 = INT32_MIN;
	int32_t x742 = -1;
	static volatile uint16_t x743 = 1276U;
	static int16_t x744 = INT16_MAX;
	int32_t t160 = 12525;

    t160 = (x741|((x742+x743)<=x744));

    if (t160 != -2147483647) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x746 = INT16_MIN;
	uint16_t x747 = 506U;
	uint64_t x748 = UINT64_MAX;
	volatile int32_t t161 = -615;

    t161 = (x745|((x746+x747)<=x748));

    if (t161 != 63) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x753 = INT16_MIN;
	volatile int32_t x754 = -342781;
	int8_t x755 = -1;
	int32_t x756 = -3243;

    t162 = (x753|((x754+x755)<=x756));

    if (t162 != -32767) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint16_t x757 = 32195U;
	volatile uint32_t x758 = 3035981U;
	int64_t x759 = -1LL;
	int32_t t163 = -910818;

    t163 = (x757|((x758+x759)<=x760));

    if (t163 != 32195) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x762 = 1;
	static int64_t x763 = INT64_MIN;
	int16_t x764 = 9;
	int64_t t164 = INT64_MAX;

    t164 = (x761|((x762+x763)<=x764));

    if (t164 != INT64_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x769 = UINT64_MAX;
	static uint32_t x771 = 666U;
	static int64_t x772 = -117662466484720LL;

    t165 = (x769|((x770+x771)<=x772));

    if (t165 != UINT64_MAX) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint16_t x774 = UINT16_MAX;
	int8_t x776 = INT8_MAX;
	int32_t t166 = -6;

    t166 = (x773|((x774+x775)<=x776));

    if (t166 != 255) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x781 = INT64_MAX;
	volatile int64_t x782 = -2934092483899LL;
	uint32_t x783 = UINT32_MAX;
	uint32_t x784 = 1U;
	volatile int64_t t167 = INT64_MAX;

    t167 = (x781|((x782+x783)<=x784));

    if (t167 != INT64_MAX) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x785 = 8044U;
	uint32_t x786 = 802673696U;
	int32_t x787 = -1001539334;
	static uint64_t x788 = 2255225864185LLU;
	volatile int32_t t168 = -54020;

    t168 = (x785|((x786+x787)<=x788));

    if (t168 != 8045) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x789 = -1;
	volatile int16_t x790 = -1;
	int8_t x792 = INT8_MIN;
	volatile int32_t t169 = 814;

    t169 = (x789|((x790+x791)<=x792));

    if (t169 != -1) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x794 = -1;
	int16_t x796 = -1;
	int64_t t170 = -433005LL;

    t170 = (x793|((x794+x795)<=x796));

    if (t170 != 1915135756813222LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x797 = INT16_MAX;
	int64_t x798 = INT64_MAX;
	int64_t x799 = -2604535744LL;
	static int32_t x800 = INT32_MAX;
	volatile int32_t t171 = -46318424;

    t171 = (x797|((x798+x799)<=x800));

    if (t171 != 32767) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x801 = INT16_MAX;
	uint32_t x802 = 27U;
	uint8_t x803 = UINT8_MAX;
	static int32_t x804 = 20125730;
	volatile int32_t t172 = -91;

    t172 = (x801|((x802+x803)<=x804));

    if (t172 != 32767) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x805 = INT32_MIN;
	int16_t x806 = INT16_MIN;
	volatile int32_t x808 = -57;
	volatile int32_t t173 = 1;

    t173 = (x805|((x806+x807)<=x808));

    if (t173 != -2147483647) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x809 = INT64_MIN;
	uint32_t x810 = 1721U;
	int32_t x811 = INT32_MAX;
	int32_t x812 = INT32_MAX;
	int64_t t174 = INT64_MIN;

    t174 = (x809|((x810+x811)<=x812));

    if (t174 != INT64_MIN) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x815 = 8980355116LL;
	int32_t x816 = INT32_MAX;
	int32_t t175 = -37466364;

    t175 = (x813|((x814+x815)<=x816));

    if (t175 != 197) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x817 = INT32_MAX;

    t176 = (x817|((x818+x819)<=x820));

    if (t176 != INT32_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x821 = -1;
	uint16_t x822 = UINT16_MAX;
	uint64_t x823 = UINT64_MAX;
	volatile int32_t x824 = INT32_MIN;
	int32_t t177 = -1704;

    t177 = (x821|((x822+x823)<=x824));

    if (t177 != -1) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x825 = -207769LL;
	int64_t x826 = 110316582151002344LL;
	int8_t x827 = -1;

    t178 = (x825|((x826+x827)<=x828));

    if (t178 != -207769LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int8_t x829 = INT8_MAX;
	volatile uint8_t x830 = UINT8_MAX;
	uint64_t x832 = 7894423085177029563LLU;
	int32_t t179 = -118147;

    t179 = (x829|((x830+x831)<=x832));

    if (t179 != 127) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile int32_t x838 = INT32_MIN;
	static int8_t x840 = 45;
	volatile int32_t t180 = 0;

    t180 = (x837|((x838+x839)<=x840));

    if (t180 != 127) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x841 = INT8_MAX;
	volatile uint8_t x842 = 1U;
	int16_t x844 = INT16_MIN;
	volatile int32_t t181 = -13372;

    t181 = (x841|((x842+x843)<=x844));

    if (t181 != 127) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x845 = INT16_MIN;
	volatile int8_t x846 = -1;
	int32_t x847 = -1;
	int16_t x848 = INT16_MIN;
	int32_t t182 = 23;

    t182 = (x845|((x846+x847)<=x848));

    if (t182 != -32768) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x849 = 15;
	uint64_t x851 = 32579896143LLU;
	static uint8_t x852 = 23U;
	static int32_t t183 = 1;

    t183 = (x849|((x850+x851)<=x852));

    if (t183 != 15) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x855 = 3;
	int16_t x856 = INT16_MIN;
	int32_t t184 = 5;

    t184 = (x853|((x854+x855)<=x856));

    if (t184 != -1) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x857 = -508308;
	uint64_t x858 = UINT64_MAX;
	uint16_t x859 = 636U;
	static int32_t x860 = INT32_MAX;
	int32_t t185 = -122533;

    t185 = (x857|((x858+x859)<=x860));

    if (t185 != -508307) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x865 = 1U;
	int8_t x866 = -1;
	volatile int8_t x867 = 54;
	int16_t x868 = 9;
	volatile int32_t t186 = 49;

    t186 = (x865|((x866+x867)<=x868));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x874 = 16966U;
	int16_t x875 = INT16_MAX;
	uint8_t x876 = 71U;

    t187 = (x873|((x874+x875)<=x876));

    if (t187 != INT32_MAX) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x877 = INT32_MAX;
	volatile uint8_t x878 = UINT8_MAX;
	uint64_t x879 = 5424385716952663256LLU;
	static uint16_t x880 = 15U;
	static int32_t t188 = INT32_MAX;

    t188 = (x877|((x878+x879)<=x880));

    if (t188 != INT32_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x881 = 167;
	int64_t x883 = INT64_MAX;
	uint16_t x884 = 13U;
	volatile int32_t t189 = 10540501;

    t189 = (x881|((x882+x883)<=x884));

    if (t189 != 167) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x885 = -28422015676LL;
	int16_t x887 = INT16_MAX;
	static uint64_t x888 = 7479LLU;
	volatile int64_t t190 = -25346LL;

    t190 = (x885|((x886+x887)<=x888));

    if (t190 != -28422015676LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x890 = 82U;
	static uint64_t x891 = 50231156066718LLU;
	volatile int8_t x892 = -1;

    t191 = (x889|((x890+x891)<=x892));

    if (t191 != UINT64_MAX) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x893 = 15;
	static uint32_t x895 = 233023440U;
	int64_t x896 = -1LL;

    t192 = (x893|((x894+x895)<=x896));

    if (t192 != 15) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint64_t x897 = UINT64_MAX;
	int64_t x898 = INT64_MIN;
	int64_t x900 = INT64_MIN;
	uint64_t t193 = UINT64_MAX;

    t193 = (x897|((x898+x899)<=x900));

    if (t193 != UINT64_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint64_t x902 = 2339518276708LLU;
	int32_t x904 = -1;
	int32_t t194 = -1731202;

    t194 = (x901|((x902+x903)<=x904));

    if (t194 != -1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x905 = 13U;
	int16_t x906 = -120;
	volatile int8_t x907 = -1;
	static int32_t t195 = 834221;

    t195 = (x905|((x906+x907)<=x908));

    if (t195 != 13) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x909 = 684;
	int64_t x910 = -1LL;
	volatile int64_t x911 = INT64_MAX;
	int8_t x912 = INT8_MAX;
	volatile int32_t t196 = 15;

    t196 = (x909|((x910+x911)<=x912));

    if (t196 != 684) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x913 = -849;
	static volatile int16_t x915 = -1;
	int32_t t197 = -1;

    t197 = (x913|((x914+x915)<=x916));

    if (t197 != -849) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x917 = -1;
	int64_t x918 = 2LL;
	int16_t x919 = INT16_MIN;
	int8_t x920 = 59;
	int32_t t198 = 8222;

    t198 = (x917|((x918+x919)<=x920));

    if (t198 != -1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint16_t x921 = UINT16_MAX;
	static uint32_t x922 = UINT32_MAX;
	int16_t x923 = 102;

    t199 = (x921|((x922+x923)<=x924));

    if (t199 != 65535) { NG(); } else { ; }
	
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

