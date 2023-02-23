
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

int8_t x2 = INT8_MAX;
static int32_t x3 = -1;
int16_t x7 = INT16_MIN;
volatile int16_t x11 = -1;
static int8_t x14 = INT8_MIN;
volatile uint32_t x16 = 225120194U;
int16_t x20 = 11;
static int8_t x21 = 17;
int32_t t5 = -6;
uint32_t x31 = 440363U;
int64_t x40 = INT64_MIN;
int64_t x42 = INT64_MIN;
int8_t x43 = INT8_MIN;
int16_t x53 = 4051;
int32_t x56 = -1;
int64_t x57 = INT64_MIN;
volatile int64_t x58 = -176468LL;
int8_t x63 = INT8_MAX;
static int32_t x68 = INT32_MIN;
volatile int32_t t16 = -1;
volatile int32_t x69 = INT32_MAX;
static volatile int32_t x71 = INT32_MIN;
volatile uint64_t t19 = UINT64_MAX;
uint16_t x81 = UINT16_MAX;
static uint8_t x88 = UINT8_MAX;
volatile int32_t t21 = -1;
volatile uint64_t x89 = 253LLU;
volatile int32_t x92 = INT32_MIN;
volatile uint64_t t22 = 14486LLU;
uint64_t x94 = 3575LLU;
int32_t x96 = -69005845;
volatile int32_t x101 = 531;
volatile uint64_t x110 = 229763851097790LLU;
static volatile int64_t x112 = -473682442LL;
int64_t x113 = 533923480LL;
int16_t x114 = -1;
static int64_t x116 = INT64_MAX;
int64_t t27 = -1056LL;
int64_t x136 = -1LL;
static volatile int64_t t32 = 9030LL;
int8_t x138 = INT8_MAX;
volatile uint64_t t33 = 6223843325533LLU;
int8_t x146 = INT8_MIN;
int64_t x152 = -1221137428LL;
static int64_t t36 = -1089212973LL;
uint32_t x153 = UINT32_MAX;
int64_t x155 = INT64_MIN;
int8_t x162 = 1;
int16_t x164 = -1;
volatile uint32_t x165 = UINT32_MAX;
int8_t x168 = -5;
uint32_t t40 = UINT32_MAX;
static int64_t x183 = INT64_MAX;
int8_t x194 = -1;
int8_t x196 = 42;
volatile int8_t x197 = INT8_MAX;
int8_t x199 = INT8_MIN;
int8_t x200 = -1;
int8_t x204 = INT8_MIN;
uint64_t x207 = UINT64_MAX;
int32_t t48 = 3497939;
int64_t x212 = -275865701620284037LL;
static uint64_t x215 = UINT64_MAX;
int32_t x223 = INT32_MIN;
uint8_t x226 = UINT8_MAX;
uint8_t x229 = 53U;
static int64_t x230 = 3LL;
int16_t x236 = -338;
int16_t x237 = -15005;
static uint8_t x238 = 2U;
int16_t x239 = 23;
int64_t t56 = 58004LL;
volatile int16_t x241 = INT16_MIN;
int64_t x244 = -63647925857022758LL;
uint32_t x245 = UINT32_MAX;
int64_t x248 = INT64_MIN;
int64_t t58 = 150090331LL;
int16_t x250 = -78;
uint8_t x253 = 25U;
static uint64_t x255 = UINT64_MAX;
int32_t x257 = -716908;
volatile uint64_t t62 = UINT64_MAX;
static int64_t x265 = INT64_MAX;
int32_t x267 = -41307;
uint16_t x268 = 527U;
int64_t t63 = INT64_MAX;
uint16_t x270 = 24832U;
int32_t x272 = INT32_MAX;
int32_t x274 = 19253033;
volatile int32_t x275 = -3;
int64_t x278 = INT64_MAX;
volatile uint8_t x279 = 28U;
int64_t x283 = -1LL;
volatile int32_t t67 = 63333353;
int32_t x286 = INT32_MIN;
static int16_t x292 = 150;
uint32_t t69 = 6142U;
static int8_t x295 = -1;
uint32_t t70 = UINT32_MAX;
uint64_t x299 = 2484623654055LLU;
int64_t x300 = 8195641506726LL;
volatile uint8_t x305 = UINT8_MAX;
volatile uint32_t t74 = 3U;
int16_t x324 = -1;
uint32_t x328 = UINT32_MAX;
uint64_t x330 = 178732030LLU;
uint64_t x331 = UINT64_MAX;
static int32_t x332 = 695;
uint8_t x338 = 2U;
volatile int64_t x339 = -209LL;
volatile int16_t x340 = INT16_MIN;
uint32_t x344 = 670276527U;
uint8_t x355 = UINT8_MAX;
int64_t t85 = -807379380509233LL;
int64_t x361 = INT64_MIN;
volatile int8_t x362 = -1;
uint64_t x367 = 331117508LLU;
volatile uint64_t t88 = UINT64_MAX;
volatile int64_t t89 = 50185108910LL;
static volatile int32_t x377 = -1;
volatile uint32_t x380 = 153U;
uint8_t x383 = 15U;
uint16_t x384 = 104U;
int16_t x390 = INT16_MAX;
static int32_t t94 = 212812;
volatile uint32_t t97 = 5942835U;
uint64_t x406 = 43289820515821LLU;
static volatile int64_t t98 = 207941242LL;
volatile int16_t x414 = INT16_MIN;
int64_t x420 = INT64_MIN;
static uint32_t x424 = 513779290U;
int16_t x433 = 3;
volatile int64_t x440 = -44666798LL;
volatile uint64_t t107 = UINT64_MAX;
int64_t x445 = INT64_MIN;
uint64_t x452 = UINT64_MAX;
volatile uint64_t t109 = 1873921494294782LLU;
uint64_t t110 = 5218978861183LLU;
int8_t x461 = INT8_MAX;
int32_t x466 = INT32_MAX;
uint64_t x467 = UINT64_MAX;
volatile int32_t x470 = -1;
uint64_t x479 = UINT64_MAX;
int16_t x480 = INT16_MIN;
uint64_t t117 = 1504464944394LLU;
uint16_t x490 = UINT16_MAX;
static int64_t t118 = -6474327054LL;
uint16_t x500 = UINT16_MAX;
uint32_t x506 = 1160U;
volatile int64_t x515 = 42253206215509LL;
volatile int32_t t124 = 51998549;
static volatile int8_t x517 = INT8_MIN;
uint8_t x521 = 5U;
volatile uint8_t x524 = UINT8_MAX;
int32_t t126 = 6;
int32_t t127 = -2600;
volatile int64_t x530 = -8757406719320467LL;
static int32_t x532 = -1;
uint64_t t131 = UINT64_MAX;
int16_t x550 = -642;
static int32_t x552 = 839396;
int32_t x553 = INT32_MIN;
volatile int32_t x556 = -932181661;
uint64_t t135 = 10LLU;
static int64_t x563 = INT64_MIN;
int8_t x565 = INT8_MAX;
volatile uint32_t x569 = 117023U;
int64_t x571 = INT64_MAX;
uint8_t x575 = 9U;
uint64_t t139 = UINT64_MAX;
static uint64_t x577 = UINT64_MAX;
static volatile int32_t x588 = 97912;
volatile uint64_t t143 = 18371192116LLU;
volatile int32_t t144 = 7322;
int64_t x604 = INT64_MIN;
uint32_t x611 = 633110U;
int64_t t149 = -8221848059078739LL;
static uint8_t x617 = UINT8_MAX;
volatile uint16_t x626 = 22101U;
volatile int16_t x635 = INT16_MAX;
volatile uint32_t x638 = UINT32_MAX;
int64_t t155 = 5386648217LL;
static int16_t x644 = -1;
volatile int32_t t157 = 147022;
static int16_t x650 = INT16_MAX;
static int32_t x651 = -960;
uint8_t x652 = 122U;
volatile int64_t t158 = -26105LL;
uint32_t x661 = 908701592U;
static int16_t x669 = INT16_MIN;
static uint32_t t163 = 30U;
int32_t x673 = -1;
int8_t x677 = INT8_MAX;
static volatile int32_t t165 = -29877;
static int8_t x690 = INT8_MIN;
int64_t x692 = INT64_MAX;
int8_t x699 = 1;
volatile uint64_t x704 = 183LLU;
int16_t x710 = -8104;
uint8_t x718 = 12U;
volatile int64_t t175 = INT64_MAX;
int32_t x736 = INT32_MIN;
volatile uint32_t x737 = 33122163U;
int64_t x738 = -13854064208841251LL;
int32_t x740 = -174;
int32_t x744 = INT32_MIN;
static int64_t t181 = 2764LL;
uint64_t x752 = UINT64_MAX;
static int32_t x754 = -28;
static uint8_t x756 = 47U;
int64_t x759 = INT64_MAX;
volatile int16_t x764 = INT16_MIN;
int64_t x769 = -238721786496LL;
int64_t x771 = 3190980423338939LL;
static int64_t t187 = -1006368777993LL;
static int16_t x776 = 1;
static uint8_t x779 = 13U;
static int16_t x780 = -1;
int64_t x785 = -6081787644LL;
static int32_t x793 = INT32_MIN;
uint64_t x805 = 69292713245875LLU;
static uint32_t x808 = 8200824U;
volatile uint64_t t196 = 4611356LLU;
volatile int8_t x809 = INT8_MIN;
static uint32_t x814 = UINT32_MAX;
uint32_t x816 = 29U;
uint32_t x818 = UINT32_MAX;


void f0(void) {
    	static uint64_t x1 = 274856018216LLU;
	int64_t x4 = INT64_MAX;
	volatile uint64_t t0 = 3160951549437299519LLU;

    t0 = (x1|((x2<=x3)%x4));

    if (t0 != 274856018216LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = -195515239;
	static int64_t x6 = -1LL;
	int64_t x8 = -1LL;
	volatile int64_t t1 = -1264LL;

    t1 = (x5|((x6<=x7)%x8));

    if (t1 != -195515239LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = -122;
	uint16_t x10 = 125U;
	uint8_t x12 = 64U;
	volatile int32_t t2 = 1015;

    t2 = (x9|((x10<=x11)%x12));

    if (t2 != -122) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int32_t x13 = INT32_MAX;
	volatile int64_t x15 = INT64_MIN;
	volatile uint32_t t3 = 212U;

    t3 = (x13|((x14<=x15)%x16));

    if (t3 != 2147483647U) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = 0;
	uint16_t x18 = 46U;
	volatile int64_t x19 = -81805792590LL;
	volatile int32_t t4 = 90566881;

    t4 = (x17|((x18<=x19)%x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x22 = INT32_MIN;
	static int64_t x23 = INT64_MIN;
	static int32_t x24 = -896;

    t5 = (x21|((x22<=x23)%x24));

    if (t5 != 17) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x25 = UINT16_MAX;
	int32_t x26 = -1;
	static volatile int64_t x27 = INT64_MIN;
	static volatile int8_t x28 = -1;
	volatile int32_t t6 = -6;

    t6 = (x25|((x26<=x27)%x28));

    if (t6 != 65535) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint32_t x29 = 214999U;
	uint8_t x30 = 1U;
	volatile int64_t x32 = 12641893896LL;
	int64_t t7 = -52249LL;

    t7 = (x29|((x30<=x31)%x32));

    if (t7 != 214999LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x33 = 23U;
	uint16_t x34 = 5U;
	int64_t x35 = INT64_MIN;
	uint32_t x36 = UINT32_MAX;
	uint32_t t8 = 396260935U;

    t8 = (x33|((x34<=x35)%x36));

    if (t8 != 23U) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x37 = 31473U;
	uint8_t x38 = 0U;
	static uint8_t x39 = UINT8_MAX;
	volatile int64_t t9 = 5867112159180931LL;

    t9 = (x37|((x38<=x39)%x40));

    if (t9 != 31473LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x41 = 8U;
	int64_t x44 = INT64_MIN;
	int64_t t10 = -55392LL;

    t10 = (x41|((x42<=x43)%x44));

    if (t10 != 9LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int64_t x45 = INT64_MIN;
	volatile int16_t x46 = INT16_MIN;
	static volatile int32_t x47 = -1;
	int16_t x48 = -3343;
	int64_t t11 = 0LL;

    t11 = (x45|((x46<=x47)%x48));

    if (t11 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = INT16_MIN;
	int16_t x50 = 240;
	int16_t x51 = 3861;
	int64_t x52 = INT64_MAX;
	volatile int64_t t12 = -43485047LL;

    t12 = (x49|((x50<=x51)%x52));

    if (t12 != -32767LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x54 = 1125;
	static uint64_t x55 = UINT64_MAX;
	volatile int32_t t13 = 134467439;

    t13 = (x53|((x54<=x55)%x56));

    if (t13 != 4051) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int32_t x59 = -10690;
	uint16_t x60 = 19U;
	int64_t t14 = -59669696671075566LL;

    t14 = (x57|((x58<=x59)%x60));

    if (t14 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x61 = 463LL;
	static uint16_t x62 = 19665U;
	volatile int8_t x64 = INT8_MAX;
	int64_t t15 = -10594249170812709LL;

    t15 = (x61|((x62<=x63)%x64));

    if (t15 != 463LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x65 = 66U;
	uint32_t x66 = 26236U;
	uint8_t x67 = 0U;

    t16 = (x65|((x66<=x67)%x68));

    if (t16 != 66) { NG(); } else { ; }
	
}

void f17(void) {
    	static int32_t x70 = INT32_MIN;
	int16_t x72 = INT16_MAX;
	volatile int32_t t17 = INT32_MAX;

    t17 = (x69|((x70<=x71)%x72));

    if (t17 != INT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x73 = 1568LLU;
	int16_t x74 = -71;
	int32_t x75 = INT32_MIN;
	int64_t x76 = -1LL;
	uint64_t t18 = 3475404221496339LLU;

    t18 = (x73|((x74<=x75)%x76));

    if (t18 != 1568LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x77 = UINT64_MAX;
	int32_t x78 = 0;
	int16_t x79 = -127;
	volatile int32_t x80 = -9;

    t19 = (x77|((x78<=x79)%x80));

    if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x82 = INT64_MIN;
	int16_t x83 = INT16_MIN;
	static uint8_t x84 = 26U;
	volatile int32_t t20 = -4890351;

    t20 = (x81|((x82<=x83)%x84));

    if (t20 != 65535) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = INT8_MIN;
	int8_t x86 = INT8_MIN;
	int8_t x87 = -1;

    t21 = (x85|((x86<=x87)%x88));

    if (t21 != -127) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x90 = -1;
	int32_t x91 = -25945;

    t22 = (x89|((x90<=x91)%x92));

    if (t22 != 253LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x93 = 10224032U;
	volatile uint8_t x95 = 14U;
	volatile uint32_t t23 = 63U;

    t23 = (x93|((x94<=x95)%x96));

    if (t23 != 10224032U) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = INT32_MAX;
	int32_t x98 = INT32_MIN;
	int16_t x99 = INT16_MIN;
	static uint32_t x100 = 100710U;
	volatile uint32_t t24 = 37559040U;

    t24 = (x97|((x98<=x99)%x100));

    if (t24 != 2147483647U) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x102 = INT32_MIN;
	int16_t x103 = 4;
	int32_t x104 = INT32_MAX;
	volatile int32_t t25 = -115;

    t25 = (x101|((x102<=x103)%x104));

    if (t25 != 531) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x109 = INT8_MIN;
	static int64_t x111 = 259062LL;
	volatile int64_t t26 = -405658125LL;

    t26 = (x109|((x110<=x111)%x112));

    if (t26 != -128LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x115 = INT64_MAX;

    t27 = (x113|((x114<=x115)%x116));

    if (t27 != 533923481LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x117 = UINT64_MAX;
	int64_t x118 = INT64_MIN;
	int8_t x119 = -1;
	uint8_t x120 = 3U;
	static volatile uint64_t t28 = UINT64_MAX;

    t28 = (x117|((x118<=x119)%x120));

    if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x121 = -730619026635883936LL;
	int32_t x122 = -1;
	int16_t x123 = INT16_MIN;
	int8_t x124 = INT8_MIN;
	int64_t t29 = 32685243256362056LL;

    t29 = (x121|((x122<=x123)%x124));

    if (t29 != -730619026635883936LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x125 = UINT16_MAX;
	volatile uint64_t x126 = 725LLU;
	uint16_t x127 = 193U;
	int16_t x128 = INT16_MIN;
	volatile int32_t t30 = -314053708;

    t30 = (x125|((x126<=x127)%x128));

    if (t30 != 65535) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x129 = INT8_MIN;
	int8_t x130 = INT8_MAX;
	static volatile uint32_t x131 = 3085U;
	uint64_t x132 = UINT64_MAX;
	static uint64_t t31 = 1025929520837LLU;

    t31 = (x129|((x130<=x131)%x132));

    if (t31 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int64_t x133 = 6890LL;
	int8_t x134 = 14;
	static int64_t x135 = -1LL;

    t32 = (x133|((x134<=x135)%x136));

    if (t32 != 6890LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x137 = 760048259524974LL;
	volatile uint16_t x139 = UINT16_MAX;
	volatile uint64_t x140 = UINT64_MAX;

    t33 = (x137|((x138<=x139)%x140));

    if (t33 != 760048259524975LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x141 = 474;
	uint8_t x142 = 2U;
	int16_t x143 = INT16_MAX;
	int8_t x144 = INT8_MIN;
	int32_t t34 = -241918361;

    t34 = (x141|((x142<=x143)%x144));

    if (t34 != 475) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int64_t x145 = INT64_MIN;
	uint32_t x147 = 53U;
	uint8_t x148 = 13U;
	volatile int64_t t35 = INT64_MIN;

    t35 = (x145|((x146<=x147)%x148));

    if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint16_t x149 = 2682U;
	int8_t x150 = INT8_MIN;
	int8_t x151 = INT8_MAX;

    t36 = (x149|((x150<=x151)%x152));

    if (t36 != 2683LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x154 = -1;
	int32_t x156 = -485821;
	static uint32_t t37 = UINT32_MAX;

    t37 = (x153|((x154<=x155)%x156));

    if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint64_t x157 = 1331119406222LLU;
	int16_t x158 = INT16_MIN;
	static uint32_t x159 = UINT32_MAX;
	uint64_t x160 = UINT64_MAX;
	uint64_t t38 = 106243825134LLU;

    t38 = (x157|((x158<=x159)%x160));

    if (t38 != 1331119406223LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x161 = INT16_MIN;
	int64_t x163 = INT64_MIN;
	int32_t t39 = 17;

    t39 = (x161|((x162<=x163)%x164));

    if (t39 != -32768) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x166 = 3U;
	int32_t x167 = -1;

    t40 = (x165|((x166<=x167)%x168));

    if (t40 != UINT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x173 = INT16_MIN;
	int32_t x174 = 0;
	int64_t x175 = INT64_MIN;
	static volatile uint8_t x176 = 4U;
	int32_t t41 = -3390;

    t41 = (x173|((x174<=x175)%x176));

    if (t41 != -32768) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x177 = 0U;
	int32_t x178 = INT32_MAX;
	int32_t x179 = INT32_MAX;
	uint8_t x180 = 2U;
	static int32_t t42 = 502028;

    t42 = (x177|((x178<=x179)%x180));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint32_t x181 = UINT32_MAX;
	volatile uint16_t x182 = 1U;
	static int8_t x184 = -1;
	static volatile uint32_t t43 = UINT32_MAX;

    t43 = (x181|((x182<=x183)%x184));

    if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x185 = -29;
	uint8_t x186 = 6U;
	int8_t x187 = -1;
	int32_t x188 = -1;
	volatile int32_t t44 = -121834226;

    t44 = (x185|((x186<=x187)%x188));

    if (t44 != -29) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x193 = 26;
	int16_t x195 = -1;
	volatile int32_t t45 = -497999081;

    t45 = (x193|((x194<=x195)%x196));

    if (t45 != 27) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x198 = -1;
	volatile int32_t t46 = -6;

    t46 = (x197|((x198<=x199)%x200));

    if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x201 = 273LLU;
	static int32_t x202 = -1;
	uint32_t x203 = UINT32_MAX;
	volatile uint64_t t47 = 129071841080277LLU;

    t47 = (x201|((x202<=x203)%x204));

    if (t47 != 273LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x205 = INT16_MIN;
	volatile int16_t x206 = -1;
	static volatile int32_t x208 = -1;

    t48 = (x205|((x206<=x207)%x208));

    if (t48 != -32768) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint8_t x209 = 8U;
	int8_t x210 = INT8_MIN;
	int64_t x211 = INT64_MIN;
	volatile int64_t t49 = 90435226947LL;

    t49 = (x209|((x210<=x211)%x212));

    if (t49 != 8LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x213 = 405994U;
	static uint16_t x214 = UINT16_MAX;
	uint16_t x216 = 5U;
	volatile uint32_t t50 = 1U;

    t50 = (x213|((x214<=x215)%x216));

    if (t50 != 405995U) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x217 = INT16_MAX;
	int32_t x218 = INT32_MIN;
	int16_t x219 = 0;
	uint16_t x220 = 15U;
	int32_t t51 = -13298493;

    t51 = (x217|((x218<=x219)%x220));

    if (t51 != 32767) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x221 = INT64_MAX;
	int64_t x222 = INT64_MIN;
	static uint16_t x224 = UINT16_MAX;
	volatile int64_t t52 = INT64_MAX;

    t52 = (x221|((x222<=x223)%x224));

    if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x225 = UINT8_MAX;
	static int8_t x227 = -4;
	uint32_t x228 = 855569U;
	uint32_t t53 = 826951U;

    t53 = (x225|((x226<=x227)%x228));

    if (t53 != 255U) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x231 = 26926LL;
	uint8_t x232 = UINT8_MAX;
	int32_t t54 = 4387;

    t54 = (x229|((x230<=x231)%x232));

    if (t54 != 53) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x233 = -1LL;
	int8_t x234 = -1;
	int16_t x235 = INT16_MAX;
	volatile int64_t t55 = -527054419076068155LL;

    t55 = (x233|((x234<=x235)%x236));

    if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x240 = 15LL;

    t56 = (x237|((x238<=x239)%x240));

    if (t56 != -15005LL) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint32_t x242 = 1243016714U;
	uint16_t x243 = 20U;
	static int64_t t57 = 253440373448LL;

    t57 = (x241|((x242<=x243)%x244));

    if (t57 != -32768LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x246 = -17;
	static uint32_t x247 = UINT32_MAX;

    t58 = (x245|((x246<=x247)%x248));

    if (t58 != 4294967295LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x249 = -2;
	int16_t x251 = 38;
	int16_t x252 = INT16_MIN;
	int32_t t59 = -729876646;

    t59 = (x249|((x250<=x251)%x252));

    if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint32_t x254 = 30U;
	int64_t x256 = 3472703641LL;
	int64_t t60 = 0LL;

    t60 = (x253|((x254<=x255)%x256));

    if (t60 != 25LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x258 = INT8_MAX;
	volatile uint64_t x259 = 16LLU;
	uint16_t x260 = 323U;
	static int32_t t61 = -1;

    t61 = (x257|((x258<=x259)%x260));

    if (t61 != -716908) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint64_t x261 = UINT64_MAX;
	uint32_t x262 = 4557U;
	static uint16_t x263 = 268U;
	uint64_t x264 = 11606LLU;

    t62 = (x261|((x262<=x263)%x264));

    if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int16_t x266 = INT16_MIN;

    t63 = (x265|((x266<=x267)%x268));

    if (t63 != INT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x269 = INT8_MIN;
	volatile uint32_t x271 = UINT32_MAX;
	int32_t t64 = 156;

    t64 = (x269|((x270<=x271)%x272));

    if (t64 != -127) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int64_t x273 = INT64_MAX;
	uint64_t x276 = UINT64_MAX;
	uint64_t t65 = 3390651067LLU;

    t65 = (x273|((x274<=x275)%x276));

    if (t65 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x277 = 500132206838615840LLU;
	int8_t x280 = -1;
	uint64_t t66 = 10436596LLU;

    t66 = (x277|((x278<=x279)%x280));

    if (t66 != 500132206838615840LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int32_t x281 = -1;
	static int16_t x282 = 250;
	uint16_t x284 = 3434U;

    t67 = (x281|((x282<=x283)%x284));

    if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x285 = INT8_MIN;
	int8_t x287 = 8;
	volatile int64_t x288 = INT64_MAX;
	int64_t t68 = 0LL;

    t68 = (x285|((x286<=x287)%x288));

    if (t68 != -127LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x289 = 1240106U;
	volatile uint64_t x290 = UINT64_MAX;
	static volatile int8_t x291 = -52;

    t69 = (x289|((x290<=x291)%x292));

    if (t69 != 1240106U) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint32_t x293 = UINT32_MAX;
	int8_t x294 = INT8_MIN;
	int8_t x296 = INT8_MIN;

    t70 = (x293|((x294<=x295)%x296));

    if (t70 != UINT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x297 = 107825741032LLU;
	static uint64_t x298 = UINT64_MAX;
	uint64_t t71 = 2693873443LLU;

    t71 = (x297|((x298<=x299)%x300));

    if (t71 != 107825741032LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int64_t x301 = 10489LL;
	uint8_t x302 = 91U;
	uint16_t x303 = 132U;
	volatile int8_t x304 = INT8_MIN;
	int64_t t72 = 553424461545042LL;

    t72 = (x301|((x302<=x303)%x304));

    if (t72 != 10489LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile int8_t x306 = -1;
	static uint64_t x307 = UINT64_MAX;
	volatile int32_t x308 = INT32_MAX;
	int32_t t73 = -48654;

    t73 = (x305|((x306<=x307)%x308));

    if (t73 != 255) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x309 = 0U;
	volatile int32_t x310 = INT32_MIN;
	int64_t x311 = -15176794970883460LL;
	int8_t x312 = -1;

    t74 = (x309|((x310<=x311)%x312));

    if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x313 = -24924348650657928LL;
	uint16_t x314 = UINT16_MAX;
	volatile uint16_t x315 = UINT16_MAX;
	int64_t x316 = INT64_MIN;
	volatile int64_t t75 = -335LL;

    t75 = (x313|((x314<=x315)%x316));

    if (t75 != -24924348650657927LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x317 = -1;
	int16_t x318 = 762;
	static int8_t x319 = -1;
	uint8_t x320 = UINT8_MAX;
	volatile int32_t t76 = -3;

    t76 = (x317|((x318<=x319)%x320));

    if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x321 = INT64_MIN;
	uint32_t x322 = 244620251U;
	uint32_t x323 = UINT32_MAX;
	static volatile int64_t t77 = INT64_MIN;

    t77 = (x321|((x322<=x323)%x324));

    if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x325 = INT8_MIN;
	volatile uint32_t x326 = 934940330U;
	int64_t x327 = INT64_MIN;
	uint32_t t78 = 0U;

    t78 = (x325|((x326<=x327)%x328));

    if (t78 != 4294967168U) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x329 = 74;
	int32_t t79 = 71;

    t79 = (x329|((x330<=x331)%x332));

    if (t79 != 75) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x333 = -1;
	int8_t x334 = INT8_MIN;
	volatile int8_t x335 = -28;
	static int16_t x336 = -1;
	int32_t t80 = 0;

    t80 = (x333|((x334<=x335)%x336));

    if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x337 = UINT8_MAX;
	int32_t t81 = 10692226;

    t81 = (x337|((x338<=x339)%x340));

    if (t81 != 255) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x341 = 37;
	int16_t x342 = -1;
	int32_t x343 = -2269380;
	volatile uint32_t t82 = 83U;

    t82 = (x341|((x342<=x343)%x344));

    if (t82 != 37U) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x345 = 607970LLU;
	static int32_t x346 = INT32_MIN;
	int8_t x347 = 49;
	int32_t x348 = 7049294;
	uint64_t t83 = 19429062659LLU;

    t83 = (x345|((x346<=x347)%x348));

    if (t83 != 607971LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x349 = 12;
	uint16_t x350 = 3U;
	static uint16_t x351 = 3191U;
	static int32_t x352 = INT32_MIN;
	static volatile int32_t t84 = -131874;

    t84 = (x349|((x350<=x351)%x352));

    if (t84 != 13) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint8_t x353 = UINT8_MAX;
	volatile uint32_t x354 = UINT32_MAX;
	int64_t x356 = -1LL;

    t85 = (x353|((x354<=x355)%x356));

    if (t85 != 255LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x357 = INT16_MAX;
	int8_t x358 = INT8_MAX;
	uint64_t x359 = 182283LLU;
	uint64_t x360 = UINT64_MAX;
	uint64_t t86 = 4789LLU;

    t86 = (x357|((x358<=x359)%x360));

    if (t86 != 32767LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x363 = INT64_MIN;
	int16_t x364 = -1;
	static volatile int64_t t87 = INT64_MIN;

    t87 = (x361|((x362<=x363)%x364));

    if (t87 != INT64_MIN) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x365 = -1LL;
	uint64_t x366 = 7LLU;
	volatile uint64_t x368 = 899339667552LLU;

    t88 = (x365|((x366<=x367)%x368));

    if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x369 = INT64_MIN;
	int64_t x370 = 0LL;
	uint64_t x371 = 9832LLU;
	uint16_t x372 = UINT16_MAX;

    t89 = (x369|((x370<=x371)%x372));

    if (t89 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x373 = INT16_MIN;
	uint8_t x374 = 0U;
	uint64_t x375 = 78905LLU;
	volatile int32_t x376 = INT32_MIN;
	static int32_t t90 = -25699950;

    t90 = (x373|((x374<=x375)%x376));

    if (t90 != -32767) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x378 = INT32_MAX;
	uint16_t x379 = 0U;
	volatile uint32_t t91 = UINT32_MAX;

    t91 = (x377|((x378<=x379)%x380));

    if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x381 = INT16_MIN;
	int32_t x382 = 45164;
	int32_t t92 = -22512052;

    t92 = (x381|((x382<=x383)%x384));

    if (t92 != -32768) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x385 = UINT64_MAX;
	int16_t x386 = -1;
	uint64_t x387 = 12419349386LLU;
	volatile uint64_t x388 = 74777880663LLU;
	volatile uint64_t t93 = UINT64_MAX;

    t93 = (x385|((x386<=x387)%x388));

    if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x389 = INT8_MAX;
	uint64_t x391 = UINT64_MAX;
	volatile int32_t x392 = INT32_MAX;

    t94 = (x389|((x390<=x391)%x392));

    if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x393 = -1LL;
	uint64_t x394 = 3LLU;
	static int32_t x395 = -1;
	static int64_t x396 = -696LL;
	int64_t t95 = 279032923973109349LL;

    t95 = (x393|((x394<=x395)%x396));

    if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x397 = 1477482U;
	int32_t x398 = -1877668;
	uint64_t x399 = 17332077488290LLU;
	int16_t x400 = 12;
	volatile uint32_t t96 = 6U;

    t96 = (x397|((x398<=x399)%x400));

    if (t96 != 1477482U) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x401 = 62875U;
	volatile int16_t x402 = INT16_MIN;
	int32_t x403 = -1;
	int8_t x404 = -1;

    t97 = (x401|((x402<=x403)%x404));

    if (t97 != 62875U) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x405 = 15785LL;
	int64_t x407 = INT64_MIN;
	int8_t x408 = INT8_MIN;

    t98 = (x405|((x406<=x407)%x408));

    if (t98 != 15785LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x409 = 348592892593LL;
	int64_t x410 = -1LL;
	uint64_t x411 = 27330781659582996LLU;
	volatile int16_t x412 = INT16_MIN;
	volatile int64_t t99 = -1147968449241LL;

    t99 = (x409|((x410<=x411)%x412));

    if (t99 != 348592892593LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x413 = UINT32_MAX;
	int32_t x415 = INT32_MIN;
	volatile uint32_t x416 = 460954U;
	static uint32_t t100 = UINT32_MAX;

    t100 = (x413|((x414<=x415)%x416));

    if (t100 != UINT32_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int8_t x417 = INT8_MAX;
	int8_t x418 = -1;
	int64_t x419 = INT64_MAX;
	volatile int64_t t101 = 3665678LL;

    t101 = (x417|((x418<=x419)%x420));

    if (t101 != 127LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x421 = 5371U;
	int16_t x422 = INT16_MIN;
	uint8_t x423 = UINT8_MAX;
	volatile uint32_t t102 = 1997522U;

    t102 = (x421|((x422<=x423)%x424));

    if (t102 != 5371U) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x425 = INT32_MAX;
	int16_t x426 = 30;
	volatile int64_t x427 = -1LL;
	volatile int32_t x428 = -1;
	static volatile int32_t t103 = INT32_MAX;

    t103 = (x425|((x426<=x427)%x428));

    if (t103 != INT32_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x429 = -62;
	uint32_t x430 = 14840416U;
	int8_t x431 = 0;
	volatile int8_t x432 = INT8_MIN;
	int32_t t104 = 176;

    t104 = (x429|((x430<=x431)%x432));

    if (t104 != -62) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x434 = 156U;
	uint8_t x435 = 0U;
	static int8_t x436 = INT8_MAX;
	volatile int32_t t105 = 0;

    t105 = (x433|((x434<=x435)%x436));

    if (t105 != 3) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x437 = UINT16_MAX;
	int64_t x438 = INT64_MAX;
	static int64_t x439 = -1LL;
	static volatile int64_t t106 = 26065627213465LL;

    t106 = (x437|((x438<=x439)%x440));

    if (t106 != 65535LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x441 = UINT64_MAX;
	int64_t x442 = INT64_MIN;
	static int32_t x443 = INT32_MAX;
	static int64_t x444 = 810378LL;

    t107 = (x441|((x442<=x443)%x444));

    if (t107 != UINT64_MAX) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int64_t x446 = -7571284467049LL;
	volatile uint32_t x447 = 481924U;
	uint64_t x448 = 406513878242LLU;
	uint64_t t108 = 107LLU;

    t108 = (x445|((x446<=x447)%x448));

    if (t108 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x449 = INT8_MIN;
	int32_t x450 = -1;
	static volatile int64_t x451 = INT64_MIN;

    t109 = (x449|((x450<=x451)%x452));

    if (t109 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x453 = 2519LLU;
	int16_t x454 = INT16_MIN;
	int16_t x455 = -1;
	static int32_t x456 = -3117;

    t110 = (x453|((x454<=x455)%x456));

    if (t110 != 2519LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x462 = 22076U;
	uint32_t x463 = UINT32_MAX;
	static volatile int32_t x464 = INT32_MIN;
	int32_t t111 = 45;

    t111 = (x461|((x462<=x463)%x464));

    if (t111 != 127) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x465 = INT64_MAX;
	volatile int32_t x468 = INT32_MAX;
	static volatile int64_t t112 = INT64_MAX;

    t112 = (x465|((x466<=x467)%x468));

    if (t112 != INT64_MAX) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x469 = -3LL;
	uint8_t x471 = UINT8_MAX;
	int64_t x472 = -1LL;
	int64_t t113 = 660613758549297617LL;

    t113 = (x469|((x470<=x471)%x472));

    if (t113 != -3LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x473 = INT16_MIN;
	int32_t x474 = INT32_MIN;
	volatile int16_t x475 = INT16_MIN;
	uint8_t x476 = UINT8_MAX;
	volatile int32_t t114 = -736;

    t114 = (x473|((x474<=x475)%x476));

    if (t114 != -32767) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x477 = -1LL;
	int32_t x478 = INT32_MIN;
	int64_t t115 = -1027473460435231079LL;

    t115 = (x477|((x478<=x479)%x480));

    if (t115 != -1LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x481 = 3U;
	static int8_t x482 = INT8_MIN;
	uint8_t x483 = UINT8_MAX;
	int32_t x484 = INT32_MIN;
	static volatile int32_t t116 = -5531217;

    t116 = (x481|((x482<=x483)%x484));

    if (t116 != 3) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x485 = 187U;
	volatile uint16_t x486 = 14U;
	uint8_t x487 = 62U;
	uint64_t x488 = UINT64_MAX;

    t117 = (x485|((x486<=x487)%x488));

    if (t117 != 187LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint32_t x489 = 3239U;
	int8_t x491 = INT8_MAX;
	int64_t x492 = INT64_MIN;

    t118 = (x489|((x490<=x491)%x492));

    if (t118 != 3239LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x493 = INT8_MAX;
	int32_t x494 = INT32_MIN;
	uint8_t x495 = 1U;
	volatile int16_t x496 = INT16_MIN;
	static int32_t t119 = -1794900;

    t119 = (x493|((x494<=x495)%x496));

    if (t119 != 127) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x497 = INT64_MIN;
	volatile uint16_t x498 = UINT16_MAX;
	volatile uint64_t x499 = UINT64_MAX;
	static int64_t t120 = -2690LL;

    t120 = (x497|((x498<=x499)%x500));

    if (t120 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x501 = UINT16_MAX;
	int32_t x502 = -1;
	int8_t x503 = INT8_MIN;
	int64_t x504 = INT64_MIN;
	volatile int64_t t121 = -1065938545LL;

    t121 = (x501|((x502<=x503)%x504));

    if (t121 != 65535LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x505 = -1LL;
	volatile uint16_t x507 = 0U;
	int32_t x508 = -121;
	volatile int64_t t122 = -51LL;

    t122 = (x505|((x506<=x507)%x508));

    if (t122 != -1LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x509 = 495U;
	int64_t x510 = -1104361LL;
	static uint64_t x511 = 2758LLU;
	static uint8_t x512 = 23U;
	uint32_t t123 = 13U;

    t123 = (x509|((x510<=x511)%x512));

    if (t123 != 495U) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x513 = 779U;
	int32_t x514 = -63769175;
	int16_t x516 = INT16_MIN;

    t124 = (x513|((x514<=x515)%x516));

    if (t124 != 779) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x518 = 4147U;
	uint16_t x519 = UINT16_MAX;
	int32_t x520 = -7310;
	volatile int32_t t125 = -6;

    t125 = (x517|((x518<=x519)%x520));

    if (t125 != -127) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x522 = INT64_MAX;
	static volatile int64_t x523 = -1LL;

    t126 = (x521|((x522<=x523)%x524));

    if (t126 != 5) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x525 = 342;
	volatile int64_t x526 = -523676773858LL;
	volatile int8_t x527 = 3;
	int8_t x528 = INT8_MAX;

    t127 = (x525|((x526<=x527)%x528));

    if (t127 != 343) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x529 = 2U;
	static int64_t x531 = -1LL;
	volatile int32_t t128 = 1;

    t128 = (x529|((x530<=x531)%x532));

    if (t128 != 2) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint64_t x533 = UINT64_MAX;
	int64_t x534 = INT64_MIN;
	int32_t x535 = INT32_MIN;
	uint32_t x536 = 434447U;
	uint64_t t129 = UINT64_MAX;

    t129 = (x533|((x534<=x535)%x536));

    if (t129 != UINT64_MAX) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x537 = 15U;
	int8_t x538 = INT8_MAX;
	static uint64_t x539 = 1LLU;
	uint16_t x540 = UINT16_MAX;
	volatile int32_t t130 = -20775516;

    t130 = (x537|((x538<=x539)%x540));

    if (t130 != 15) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x541 = -1;
	uint16_t x542 = UINT16_MAX;
	volatile int16_t x543 = -13;
	uint64_t x544 = 722501709544122804LLU;

    t131 = (x541|((x542<=x543)%x544));

    if (t131 != UINT64_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x545 = INT64_MIN;
	volatile int64_t x546 = -1LL;
	uint16_t x547 = 362U;
	uint32_t x548 = 96573932U;
	int64_t t132 = -162204LL;

    t132 = (x545|((x546<=x547)%x548));

    if (t132 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x549 = -1;
	static uint32_t x551 = UINT32_MAX;
	int32_t t133 = 7;

    t133 = (x549|((x550<=x551)%x552));

    if (t133 != -1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int8_t x554 = INT8_MAX;
	int16_t x555 = INT16_MIN;
	int32_t t134 = INT32_MIN;

    t134 = (x553|((x554<=x555)%x556));

    if (t134 != INT32_MIN) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x557 = 2247040881280046337LLU;
	static uint32_t x558 = 4U;
	int32_t x559 = INT32_MIN;
	uint32_t x560 = UINT32_MAX;

    t135 = (x557|((x558<=x559)%x560));

    if (t135 != 2247040881280046337LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static int32_t x561 = INT32_MIN;
	int64_t x562 = INT64_MIN;
	volatile int64_t x564 = INT64_MIN;
	static int64_t t136 = 1049719541942516LL;

    t136 = (x561|((x562<=x563)%x564));

    if (t136 != -2147483647LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x566 = 435194U;
	uint8_t x567 = 29U;
	uint32_t x568 = 13598U;
	uint32_t t137 = 377U;

    t137 = (x565|((x566<=x567)%x568));

    if (t137 != 127U) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x570 = UINT8_MAX;
	volatile int32_t x572 = -1;
	static uint32_t t138 = 92516537U;

    t138 = (x569|((x570<=x571)%x572));

    if (t138 != 117023U) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x573 = UINT64_MAX;
	int64_t x574 = -1LL;
	volatile int8_t x576 = 45;

    t139 = (x573|((x574<=x575)%x576));

    if (t139 != UINT64_MAX) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x578 = 1;
	int8_t x579 = 0;
	int16_t x580 = -396;
	static volatile uint64_t t140 = UINT64_MAX;

    t140 = (x577|((x578<=x579)%x580));

    if (t140 != UINT64_MAX) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x581 = INT16_MIN;
	uint16_t x582 = UINT16_MAX;
	static int8_t x583 = 33;
	int64_t x584 = 287858346226LL;
	int64_t t141 = -29690LL;

    t141 = (x581|((x582<=x583)%x584));

    if (t141 != -32768LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint32_t x585 = UINT32_MAX;
	int8_t x586 = INT8_MIN;
	int32_t x587 = INT32_MAX;
	uint32_t t142 = UINT32_MAX;

    t142 = (x585|((x586<=x587)%x588));

    if (t142 != UINT32_MAX) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x589 = -413;
	static int32_t x590 = -1;
	uint32_t x591 = 114069U;
	uint64_t x592 = 3030671LLU;

    t143 = (x589|((x590<=x591)%x592));

    if (t143 != 18446744073709551203LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x593 = -7367;
	static uint16_t x594 = 1022U;
	volatile int8_t x595 = -2;
	int8_t x596 = -1;

    t144 = (x593|((x594<=x595)%x596));

    if (t144 != -7367) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x597 = 197386155U;
	int16_t x598 = 2987;
	static int32_t x599 = -254515;
	static int16_t x600 = INT16_MIN;
	uint32_t t145 = 0U;

    t145 = (x597|((x598<=x599)%x600));

    if (t145 != 197386155U) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint8_t x601 = 38U;
	static int16_t x602 = -62;
	uint8_t x603 = 7U;
	volatile int64_t t146 = 10300039877508425LL;

    t146 = (x601|((x602<=x603)%x604));

    if (t146 != 39LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x605 = -1;
	uint8_t x606 = 117U;
	volatile uint64_t x607 = 934240437284138431LLU;
	uint32_t x608 = 4340112U;
	volatile uint32_t t147 = UINT32_MAX;

    t147 = (x605|((x606<=x607)%x608));

    if (t147 != UINT32_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x609 = -1;
	uint64_t x610 = 388934603879LLU;
	int64_t x612 = -1LL;
	static int64_t t148 = -150419LL;

    t148 = (x609|((x610<=x611)%x612));

    if (t148 != -1LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x613 = 1;
	int16_t x614 = INT16_MIN;
	uint16_t x615 = UINT16_MAX;
	int64_t x616 = INT64_MIN;

    t149 = (x613|((x614<=x615)%x616));

    if (t149 != 1LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x618 = 1176219241219517LLU;
	volatile int8_t x619 = 1;
	static uint32_t x620 = 117048830U;
	volatile uint32_t t150 = 260274U;

    t150 = (x617|((x618<=x619)%x620));

    if (t150 != 255U) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x621 = 3;
	int16_t x622 = 291;
	volatile int32_t x623 = INT32_MIN;
	int16_t x624 = INT16_MIN;
	int32_t t151 = 1529084;

    t151 = (x621|((x622<=x623)%x624));

    if (t151 != 3) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x625 = INT64_MAX;
	int32_t x627 = -11817;
	int64_t x628 = -1LL;
	int64_t t152 = INT64_MAX;

    t152 = (x625|((x626<=x627)%x628));

    if (t152 != INT64_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x629 = UINT32_MAX;
	volatile int16_t x630 = INT16_MAX;
	int64_t x631 = 1014288547LL;
	int32_t x632 = -1;
	static volatile uint32_t t153 = UINT32_MAX;

    t153 = (x629|((x630<=x631)%x632));

    if (t153 != UINT32_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x633 = UINT16_MAX;
	int64_t x634 = INT64_MAX;
	int64_t x636 = -1LL;
	int64_t t154 = -35568LL;

    t154 = (x633|((x634<=x635)%x636));

    if (t154 != 65535LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x637 = INT8_MAX;
	int32_t x639 = -1;
	int64_t x640 = -1LL;

    t155 = (x637|((x638<=x639)%x640));

    if (t155 != 127LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x641 = INT32_MIN;
	uint32_t x642 = 1U;
	int32_t x643 = -1;
	int32_t t156 = INT32_MIN;

    t156 = (x641|((x642<=x643)%x644));

    if (t156 != INT32_MIN) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x645 = INT8_MIN;
	int16_t x646 = 2970;
	static int8_t x647 = -10;
	static int32_t x648 = -1;

    t157 = (x645|((x646<=x647)%x648));

    if (t157 != -128) { NG(); } else { ; }
	
}

void f158(void) {
    	static int64_t x649 = 96LL;

    t158 = (x649|((x650<=x651)%x652));

    if (t158 != 96LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x653 = -2;
	uint64_t x654 = 15259548038845LLU;
	int32_t x655 = 7131965;
	uint64_t x656 = 352475189470LLU;
	uint64_t t159 = 7474213880911LLU;

    t159 = (x653|((x654<=x655)%x656));

    if (t159 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x657 = 78U;
	volatile uint16_t x658 = 0U;
	static int32_t x659 = 3159;
	int16_t x660 = INT16_MIN;
	int32_t t160 = 70085555;

    t160 = (x657|((x658<=x659)%x660));

    if (t160 != 79) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x662 = 3376U;
	uint8_t x663 = 4U;
	volatile int16_t x664 = -1;
	static uint32_t t161 = 9765676U;

    t161 = (x661|((x662<=x663)%x664));

    if (t161 != 908701592U) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x665 = 13U;
	int16_t x666 = -1;
	int8_t x667 = INT8_MIN;
	int64_t x668 = 1LL;
	int64_t t162 = 27669534548079LL;

    t162 = (x665|((x666<=x667)%x668));

    if (t162 != 13LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x670 = -1LL;
	int8_t x671 = 5;
	static uint32_t x672 = 1914162U;

    t163 = (x669|((x670<=x671)%x672));

    if (t163 != 4294934529U) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int8_t x674 = INT8_MIN;
	volatile uint32_t x675 = UINT32_MAX;
	uint8_t x676 = 3U;
	volatile int32_t t164 = 690;

    t164 = (x673|((x674<=x675)%x676));

    if (t164 != -1) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x678 = 28;
	int16_t x679 = INT16_MIN;
	static int16_t x680 = INT16_MIN;

    t165 = (x677|((x678<=x679)%x680));

    if (t165 != 127) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x685 = INT8_MIN;
	int8_t x686 = INT8_MIN;
	uint64_t x687 = 32988523603342LLU;
	uint64_t x688 = 7544644377234099LLU;
	volatile uint64_t t166 = 4448715460LLU;

    t166 = (x685|((x686<=x687)%x688));

    if (t166 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int8_t x689 = 10;
	int64_t x691 = INT64_MAX;
	static int64_t t167 = -55188598979LL;

    t167 = (x689|((x690<=x691)%x692));

    if (t167 != 11LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x693 = 63;
	static int32_t x694 = INT32_MIN;
	uint16_t x695 = 904U;
	uint32_t x696 = 1U;
	uint32_t t168 = 1683909U;

    t168 = (x693|((x694<=x695)%x696));

    if (t168 != 63U) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x697 = UINT64_MAX;
	uint64_t x698 = UINT64_MAX;
	int32_t x700 = 3;
	volatile uint64_t t169 = UINT64_MAX;

    t169 = (x697|((x698<=x699)%x700));

    if (t169 != UINT64_MAX) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int64_t x701 = INT64_MIN;
	volatile int32_t x702 = INT32_MIN;
	volatile uint8_t x703 = 60U;
	uint64_t t170 = 821424071209793904LLU;

    t170 = (x701|((x702<=x703)%x704));

    if (t170 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x705 = INT16_MIN;
	volatile int32_t x706 = -54;
	int16_t x707 = INT16_MAX;
	uint64_t x708 = UINT64_MAX;
	volatile uint64_t t171 = 75872941018LLU;

    t171 = (x705|((x706<=x707)%x708));

    if (t171 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x709 = UINT8_MAX;
	static volatile uint64_t x711 = UINT64_MAX;
	int16_t x712 = INT16_MAX;
	volatile int32_t t172 = -62;

    t172 = (x709|((x710<=x711)%x712));

    if (t172 != 255) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x713 = 36U;
	int8_t x714 = -15;
	uint16_t x715 = 435U;
	int32_t x716 = INT32_MAX;
	uint32_t t173 = 307575932U;

    t173 = (x713|((x714<=x715)%x716));

    if (t173 != 37U) { NG(); } else { ; }
	
}

void f174(void) {
    	static int32_t x717 = -210963292;
	static uint16_t x719 = 10U;
	int8_t x720 = 5;
	volatile int32_t t174 = -724;

    t174 = (x717|((x718<=x719)%x720));

    if (t174 != -210963292) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t x721 = INT64_MAX;
	static int8_t x722 = INT8_MIN;
	uint64_t x723 = 581342840849768135LLU;
	uint32_t x724 = UINT32_MAX;

    t175 = (x721|((x722<=x723)%x724));

    if (t175 != INT64_MAX) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x725 = 3351;
	int32_t x726 = INT32_MAX;
	uint16_t x727 = 41U;
	int8_t x728 = INT8_MAX;
	int32_t t176 = 1;

    t176 = (x725|((x726<=x727)%x728));

    if (t176 != 3351) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x729 = UINT16_MAX;
	int32_t x730 = INT32_MIN;
	volatile int64_t x731 = -1LL;
	uint16_t x732 = 1U;
	volatile int32_t t177 = 761202678;

    t177 = (x729|((x730<=x731)%x732));

    if (t177 != 65535) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x733 = INT64_MIN;
	volatile int8_t x734 = INT8_MIN;
	int8_t x735 = -40;
	static int64_t t178 = 89086LL;

    t178 = (x733|((x734<=x735)%x736));

    if (t178 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x739 = INT16_MAX;
	volatile uint32_t t179 = 179U;

    t179 = (x737|((x738<=x739)%x740));

    if (t179 != 33122163U) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile int64_t x741 = 976658718863604LL;
	int16_t x742 = -167;
	static uint32_t x743 = UINT32_MAX;
	int64_t t180 = -869686883LL;

    t180 = (x741|((x742<=x743)%x744));

    if (t180 != 976658718863605LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x745 = INT64_MIN;
	uint32_t x746 = 623369740U;
	static uint32_t x747 = UINT32_MAX;
	static int8_t x748 = INT8_MIN;

    t181 = (x745|((x746<=x747)%x748));

    if (t181 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x749 = 87U;
	uint8_t x750 = 6U;
	int16_t x751 = INT16_MAX;
	uint64_t t182 = 996196580534075LLU;

    t182 = (x749|((x750<=x751)%x752));

    if (t182 != 87LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x753 = 35;
	int16_t x755 = -87;
	volatile int32_t t183 = -130;

    t183 = (x753|((x754<=x755)%x756));

    if (t183 != 35) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int32_t x757 = -11335786;
	int32_t x758 = INT32_MIN;
	uint8_t x760 = 109U;
	volatile int32_t t184 = 0;

    t184 = (x757|((x758<=x759)%x760));

    if (t184 != -11335785) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x761 = -29;
	int16_t x762 = INT16_MIN;
	int8_t x763 = -23;
	int32_t t185 = 2;

    t185 = (x761|((x762<=x763)%x764));

    if (t185 != -29) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x765 = -1LL;
	uint64_t x766 = UINT64_MAX;
	static int32_t x767 = -138187;
	uint8_t x768 = UINT8_MAX;
	volatile int64_t t186 = -62540440209123LL;

    t186 = (x765|((x766<=x767)%x768));

    if (t186 != -1LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint32_t x770 = 1135U;
	int16_t x772 = INT16_MIN;

    t187 = (x769|((x770<=x771)%x772));

    if (t187 != -238721786495LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x773 = -1;
	int32_t x774 = 108193485;
	int8_t x775 = -5;
	int32_t t188 = 252193;

    t188 = (x773|((x774<=x775)%x776));

    if (t188 != -1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x777 = INT64_MIN;
	int8_t x778 = INT8_MIN;
	volatile int64_t t189 = INT64_MIN;

    t189 = (x777|((x778<=x779)%x780));

    if (t189 != INT64_MIN) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x781 = 909;
	int64_t x782 = INT64_MAX;
	uint64_t x783 = UINT64_MAX;
	volatile uint16_t x784 = 1U;
	volatile int32_t t190 = 345518;

    t190 = (x781|((x782<=x783)%x784));

    if (t190 != 909) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x786 = UINT8_MAX;
	static uint8_t x787 = 13U;
	int32_t x788 = -334072;
	static int64_t t191 = 1LL;

    t191 = (x785|((x786<=x787)%x788));

    if (t191 != -6081787644LL) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int64_t x789 = -1LL;
	int32_t x790 = -217400247;
	int8_t x791 = INT8_MIN;
	uint8_t x792 = UINT8_MAX;
	volatile int64_t t192 = -50580128LL;

    t192 = (x789|((x790<=x791)%x792));

    if (t192 != -1LL) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x794 = INT16_MAX;
	int64_t x795 = INT64_MIN;
	volatile int32_t x796 = INT32_MAX;
	static volatile int32_t t193 = INT32_MIN;

    t193 = (x793|((x794<=x795)%x796));

    if (t193 != INT32_MIN) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x797 = INT8_MIN;
	static int32_t x798 = -1;
	uint64_t x799 = 123168637232941LLU;
	int32_t x800 = -1;
	int32_t t194 = -96;

    t194 = (x797|((x798<=x799)%x800));

    if (t194 != -128) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x801 = 148317495;
	static uint64_t x802 = 1696340596LLU;
	static int32_t x803 = INT32_MIN;
	int16_t x804 = -1;
	int32_t t195 = -177078593;

    t195 = (x801|((x802<=x803)%x804));

    if (t195 != 148317495) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x806 = -942707767;
	int32_t x807 = INT32_MAX;

    t196 = (x805|((x806<=x807)%x808));

    if (t196 != 69292713245875LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x810 = INT32_MIN;
	uint16_t x811 = UINT16_MAX;
	volatile int32_t x812 = INT32_MIN;
	volatile int32_t t197 = -6168289;

    t197 = (x809|((x810<=x811)%x812));

    if (t197 != -127) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int32_t x813 = -1008;
	int16_t x815 = -1;
	static volatile uint32_t t198 = 1229U;

    t198 = (x813|((x814<=x815)%x816));

    if (t198 != 4294966289U) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x817 = INT8_MIN;
	static uint16_t x819 = 189U;
	uint8_t x820 = UINT8_MAX;
	volatile int32_t t199 = 152696924;

    t199 = (x817|((x818<=x819)%x820));

    if (t199 != -128) { NG(); } else { ; }
	
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

