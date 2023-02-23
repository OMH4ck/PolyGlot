
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

uint32_t x4 = 5U;
static uint64_t x11 = UINT64_MAX;
static uint64_t x14 = UINT64_MAX;
uint16_t x17 = 3U;
int32_t x19 = -1;
uint8_t x20 = UINT8_MAX;
uint8_t x26 = 4U;
static int32_t x28 = -1;
int8_t x37 = 18;
static volatile int32_t x38 = -1;
static volatile uint64_t x39 = 986363266954149939LLU;
int32_t t9 = 0;
uint64_t x42 = 2582300099659LLU;
int32_t t12 = 126;
volatile int32_t x61 = INT32_MAX;
static int8_t x65 = INT8_MAX;
volatile uint16_t x66 = UINT16_MAX;
int8_t x67 = 0;
int16_t x68 = INT16_MIN;
volatile int32_t t15 = -30435321;
int64_t x76 = INT64_MIN;
volatile int64_t t18 = -306LL;
volatile int16_t x83 = 49;
volatile int64_t x84 = -1LL;
int32_t t19 = -724;
int32_t t20 = -25601;
volatile uint32_t t22 = 15861U;
volatile int32_t x105 = 560707588;
int32_t x106 = 262132656;
int16_t x113 = 147;
int16_t x115 = INT16_MAX;
int32_t t25 = 10368;
int32_t x119 = INT32_MAX;
int8_t x124 = INT8_MIN;
static int16_t x125 = 285;
static uint32_t x127 = 13U;
int16_t x131 = INT16_MIN;
static uint16_t x132 = UINT16_MAX;
static volatile int32_t t29 = 4076064;
int16_t x134 = 0;
volatile uint16_t x136 = UINT16_MAX;
int64_t x139 = INT64_MIN;
int64_t x142 = INT64_MIN;
static uint64_t x143 = 1855442LLU;
static uint16_t x148 = UINT16_MAX;
int32_t x152 = INT32_MIN;
uint32_t x154 = UINT32_MAX;
static int8_t x155 = -1;
uint32_t t35 = UINT32_MAX;
uint64_t x177 = UINT64_MAX;
int8_t x180 = INT8_MIN;
static uint64_t t37 = UINT64_MAX;
int32_t t38 = -1;
int32_t x199 = 0;
uint32_t x200 = 14216U;
uint16_t x202 = UINT16_MAX;
int32_t x203 = INT32_MIN;
volatile int64_t x204 = -1LL;
volatile int32_t t42 = -403000;
int64_t x207 = INT64_MAX;
int16_t x208 = INT16_MAX;
int64_t t43 = 81667897070682LL;
uint32_t x210 = 1071195764U;
int32_t t45 = -12651;
uint16_t x226 = 7U;
int32_t t48 = 0;
int16_t x252 = INT16_MIN;
int32_t x256 = INT32_MIN;
static uint32_t x266 = 113967U;
uint64_t x269 = 7215799580272578864LLU;
int8_t x270 = -7;
volatile int32_t t58 = 17;
static volatile uint32_t x278 = 1606312150U;
uint64_t x279 = UINT64_MAX;
int32_t x285 = INT32_MAX;
int32_t x287 = INT32_MAX;
int32_t x296 = -1;
volatile int32_t t63 = -2675399;
static int64_t t64 = 156067469LL;
uint64_t t65 = 23256973967LLU;
static int16_t x310 = -1;
int16_t x312 = -1;
uint16_t x322 = 24511U;
int8_t x330 = -27;
static volatile int16_t x331 = -1;
int32_t t73 = -955;
static volatile uint32_t t74 = 51375187U;
uint16_t x351 = 111U;
static int16_t x354 = -1;
static int64_t x361 = -1LL;
volatile int32_t t79 = -216300;
volatile uint32_t x369 = 1159U;
uint16_t x380 = UINT16_MAX;
int64_t x386 = -1LL;
int8_t x387 = INT8_MIN;
volatile int64_t x388 = INT64_MIN;
uint8_t x395 = 2U;
int32_t t86 = 1204609;
int32_t t87 = 887271;
static volatile uint64_t x403 = 1503685356221497230LLU;
static uint16_t x407 = 890U;
int16_t x411 = -1683;
static uint64_t x414 = 50772512808355955LLU;
int16_t x415 = INT16_MAX;
int32_t x418 = INT32_MAX;
volatile uint64_t x420 = 30591115751056LLU;
int16_t x422 = 1;
static uint16_t x423 = UINT16_MAX;
uint64_t x429 = 7347987LLU;
volatile uint16_t x442 = UINT16_MAX;
static int16_t x450 = INT16_MIN;
int16_t x451 = 11087;
static volatile int64_t t100 = INT64_MIN;
int8_t x466 = INT8_MAX;
int64_t x469 = 881300213456194898LL;
volatile uint64_t x472 = 389LLU;
int16_t x474 = INT16_MAX;
uint32_t x477 = UINT32_MAX;
static int32_t x481 = -1;
volatile int32_t x500 = -1;
static int64_t t112 = 3484976LL;
static volatile int32_t t113 = 184;
static int8_t x510 = -1;
static uint64_t x513 = 4438898312719LLU;
uint64_t x515 = 1739514001432LLU;
uint8_t x518 = 2U;
int16_t x527 = INT16_MIN;
int64_t t118 = 82314816LL;
static uint64_t x532 = 14447824LLU;
uint64_t t119 = 46569934734LLU;
uint64_t x534 = 3382558LLU;
int16_t x537 = -1;
static int32_t t121 = 67;
int8_t x545 = 0;
static volatile uint32_t x553 = 5U;
int16_t x558 = INT16_MIN;
volatile uint8_t x563 = UINT8_MAX;
volatile uint32_t t127 = 7U;
volatile uint64_t x567 = 117734494844203LLU;
int64_t t128 = -1057602819927LL;
static int8_t x574 = INT8_MIN;
uint16_t x578 = 326U;
static int16_t x591 = -13;
int32_t x593 = -1;
int32_t x594 = INT32_MAX;
int16_t x595 = INT16_MIN;
int8_t x600 = INT8_MIN;
volatile int64_t t136 = INT64_MAX;
volatile int32_t x608 = -1;
uint32_t x611 = 182U;
volatile int32_t t138 = -1;
uint16_t x618 = 445U;
int32_t x620 = -127374925;
int32_t t140 = 5912814;
int16_t x628 = -5;
volatile uint64_t x641 = 0LLU;
uint8_t x644 = 8U;
uint16_t x645 = UINT16_MAX;
int32_t x647 = INT32_MAX;
int32_t t146 = -108918;
static volatile int16_t x649 = 433;
int32_t x650 = -1;
uint16_t x654 = 0U;
int8_t x662 = 0;
int16_t x665 = -1;
static uint8_t x669 = UINT8_MAX;
uint16_t x676 = 20545U;
int16_t x677 = INT16_MAX;
volatile int32_t t157 = -2020;
int8_t x700 = INT8_MIN;
int64_t x703 = INT64_MIN;
uint64_t t159 = 1945LLU;
volatile int16_t x706 = -102;
volatile int32_t x708 = -1;
int32_t x712 = INT32_MIN;
static volatile uint64_t t161 = UINT64_MAX;
volatile int32_t x727 = INT32_MIN;
volatile uint64_t x733 = 65629797742323LLU;
static int16_t x735 = INT16_MIN;
static volatile int16_t x736 = INT16_MIN;
volatile int8_t x737 = INT8_MIN;
int64_t x740 = INT64_MIN;
int32_t x741 = -1;
int32_t t167 = -891;
static int8_t x750 = INT8_MIN;
volatile uint32_t t168 = 216U;
volatile int32_t x753 = 188;
int32_t t169 = 16;
uint32_t x758 = UINT32_MAX;
int32_t x762 = 0;
uint8_t x765 = 52U;
uint64_t x768 = 65613498LLU;
uint64_t x775 = 586084679479169861LLU;
uint64_t t174 = 10882422802LLU;
int8_t x779 = INT8_MIN;
volatile int64_t t175 = 4324691628747269LL;
uint32_t x787 = 29847574U;
int32_t x789 = -1;
int64_t t180 = INT64_MIN;
uint64_t x801 = 113844426327346LLU;
int8_t x804 = -8;
static volatile int8_t x809 = INT8_MIN;
int16_t x810 = INT16_MIN;
int16_t x811 = 15811;
int32_t t182 = -352312562;
volatile int8_t x814 = -1;
int16_t x819 = -1;
int64_t t184 = 15LL;
int8_t x824 = INT8_MIN;
static volatile uint8_t x826 = 0U;
uint64_t x829 = 2005210213215553LLU;
volatile uint32_t x841 = 6136046U;
int32_t x846 = INT32_MIN;
int16_t x850 = 118;
int32_t x852 = -1;
uint8_t x856 = 12U;
int8_t x860 = 0;
static int8_t x865 = INT8_MAX;
volatile int16_t x868 = 1;
int32_t x889 = INT32_MIN;
static int8_t x890 = -1;


void f0(void) {
    	int16_t x1 = -14;
	int32_t x2 = -1;
	int32_t x3 = 1928;
	volatile int32_t t0 = 5319248;

    t0 = (x1^((x2+x3)<=x4));

    if (t0 != -14) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = UINT8_MAX;
	int64_t x6 = INT64_MAX;
	static int32_t x7 = -1;
	volatile int8_t x8 = INT8_MIN;
	static int32_t t1 = -3328;

    t1 = (x5^((x6+x7)<=x8));

    if (t1 != 255) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = -21;
	uint16_t x10 = UINT16_MAX;
	int32_t x12 = -5882;
	volatile int32_t t2 = -61581;

    t2 = (x9^((x10+x11)<=x12));

    if (t2 != -22) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x13 = -1;
	static uint8_t x15 = UINT8_MAX;
	int16_t x16 = INT16_MIN;
	static int32_t t3 = 415228867;

    t3 = (x13^((x14+x15)<=x16));

    if (t3 != -2) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x18 = -1;
	volatile int32_t t4 = 0;

    t4 = (x17^((x18+x19)<=x20));

    if (t4 != 2) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = INT32_MIN;
	uint32_t x22 = 2U;
	uint32_t x23 = UINT32_MAX;
	int32_t x24 = INT32_MAX;
	int32_t t5 = 6;

    t5 = (x21^((x22+x23)<=x24));

    if (t5 != -2147483647) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = INT16_MAX;
	int8_t x27 = INT8_MIN;
	int32_t t6 = -30770;

    t6 = (x25^((x26+x27)<=x28));

    if (t6 != 32766) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x29 = INT8_MIN;
	static uint8_t x30 = UINT8_MAX;
	int64_t x31 = INT64_MIN;
	int32_t x32 = -542486100;
	int32_t t7 = 25;

    t7 = (x29^((x30+x31)<=x32));

    if (t7 != -127) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = INT16_MIN;
	static int64_t x34 = -3267439086973809514LL;
	int32_t x35 = INT32_MIN;
	int32_t x36 = -1;
	volatile int32_t t8 = -138793;

    t8 = (x33^((x34+x35)<=x36));

    if (t8 != -32767) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x40 = UINT64_MAX;

    t9 = (x37^((x38+x39)<=x40));

    if (t9 != 19) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = INT8_MIN;
	int16_t x43 = INT16_MIN;
	int8_t x44 = INT8_MIN;
	int32_t t10 = 1860;

    t10 = (x41^((x42+x43)<=x44));

    if (t10 != -127) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = -31;
	static int64_t x46 = INT64_MIN;
	int32_t x47 = INT32_MAX;
	int8_t x48 = INT8_MAX;
	volatile int32_t t11 = -11645749;

    t11 = (x45^((x46+x47)<=x48));

    if (t11 != -32) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = -14506088;
	int32_t x50 = -1471;
	int8_t x51 = -27;
	int16_t x52 = INT16_MAX;

    t12 = (x49^((x50+x51)<=x52));

    if (t12 != -14506087) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint8_t x57 = 26U;
	int16_t x58 = -1;
	static uint32_t x59 = UINT32_MAX;
	static int8_t x60 = INT8_MAX;
	int32_t t13 = -4161506;

    t13 = (x57^((x58+x59)<=x60));

    if (t13 != 26) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x62 = 0;
	static int8_t x63 = INT8_MIN;
	int16_t x64 = INT16_MIN;
	volatile int32_t t14 = INT32_MAX;

    t14 = (x61^((x62+x63)<=x64));

    if (t14 != INT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    

    t15 = (x65^((x66+x67)<=x68));

    if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x69 = UINT16_MAX;
	static int16_t x70 = INT16_MAX;
	static volatile int32_t x71 = INT32_MIN;
	static int32_t x72 = 287;
	static volatile int32_t t16 = -1505;

    t16 = (x69^((x70+x71)<=x72));

    if (t16 != 65534) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint16_t x73 = 10896U;
	int32_t x74 = INT32_MIN;
	static volatile uint8_t x75 = UINT8_MAX;
	int32_t t17 = 929;

    t17 = (x73^((x74+x75)<=x76));

    if (t17 != 10896) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x77 = 536312301971218289LL;
	int32_t x78 = -954318;
	static volatile int16_t x79 = -1;
	int8_t x80 = -40;

    t18 = (x77^((x78+x79)<=x80));

    if (t18 != 536312301971218288LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x81 = INT8_MAX;
	int8_t x82 = INT8_MAX;

    t19 = (x81^((x82+x83)<=x84));

    if (t19 != 127) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x93 = 4U;
	int64_t x94 = -685488844447145755LL;
	static int32_t x95 = INT32_MIN;
	int16_t x96 = 28;

    t20 = (x93^((x94+x95)<=x96));

    if (t20 != 5) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x97 = UINT64_MAX;
	volatile int32_t x98 = -1;
	int64_t x99 = -457973508LL;
	volatile int32_t x100 = -1;
	volatile uint64_t t21 = 16996494267LLU;

    t21 = (x97^((x98+x99)<=x100));

    if (t21 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x101 = 1905080U;
	uint8_t x102 = UINT8_MAX;
	int64_t x103 = -1LL;
	int8_t x104 = -54;

    t22 = (x101^((x102+x103)<=x104));

    if (t22 != 1905080U) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x107 = 4048;
	static volatile int16_t x108 = INT16_MIN;
	static volatile int32_t t23 = 25324;

    t23 = (x105^((x106+x107)<=x108));

    if (t23 != 560707588) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x109 = INT8_MIN;
	volatile uint16_t x110 = UINT16_MAX;
	volatile int64_t x111 = 1155419329318832338LL;
	int32_t x112 = INT32_MAX;
	static int32_t t24 = -968961;

    t24 = (x109^((x110+x111)<=x112));

    if (t24 != -128) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x114 = INT16_MAX;
	int16_t x116 = -1;

    t25 = (x113^((x114+x115)<=x116));

    if (t25 != 147) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x117 = 0;
	int16_t x118 = 0;
	static uint64_t x120 = 133180548LLU;
	static volatile int32_t t26 = 778;

    t26 = (x117^((x118+x119)<=x120));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int64_t x121 = 1345LL;
	static int64_t x122 = 105183099LL;
	int8_t x123 = INT8_MIN;
	static int64_t t27 = 452LL;

    t27 = (x121^((x122+x123)<=x124));

    if (t27 != 1345LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int8_t x126 = INT8_MIN;
	int16_t x128 = 9914;
	volatile int32_t t28 = 269091556;

    t28 = (x125^((x126+x127)<=x128));

    if (t28 != 285) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x129 = INT8_MAX;
	static uint32_t x130 = 475499U;

    t29 = (x129^((x130+x131)<=x132));

    if (t29 != 127) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x133 = -1;
	volatile int32_t x135 = INT32_MIN;
	volatile int32_t t30 = -32755;

    t30 = (x133^((x134+x135)<=x136));

    if (t30 != -2) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x137 = INT64_MIN;
	int32_t x138 = INT32_MAX;
	int64_t x140 = INT64_MIN;
	int64_t t31 = INT64_MIN;

    t31 = (x137^((x138+x139)<=x140));

    if (t31 != INT64_MIN) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x141 = -1;
	int16_t x144 = -1;
	int32_t t32 = 908;

    t32 = (x141^((x142+x143)<=x144));

    if (t32 != -2) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x145 = -12LL;
	int16_t x146 = -1;
	uint16_t x147 = UINT16_MAX;
	int64_t t33 = 61991227848566LL;

    t33 = (x145^((x146+x147)<=x148));

    if (t33 != -11LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x149 = INT64_MIN;
	volatile int16_t x150 = -1;
	int32_t x151 = -7;
	volatile int64_t t34 = INT64_MIN;

    t34 = (x149^((x150+x151)<=x152));

    if (t34 != INT64_MIN) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x153 = UINT32_MAX;
	volatile int32_t x156 = 6814;

    t35 = (x153^((x154+x155)<=x156));

    if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x169 = INT64_MIN;
	int64_t x170 = INT64_MIN;
	static int32_t x171 = INT32_MAX;
	int16_t x172 = 1687;
	int64_t t36 = -370409980955LL;

    t36 = (x169^((x170+x171)<=x172));

    if (t36 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x178 = 14U;
	volatile int8_t x179 = INT8_MIN;

    t37 = (x177^((x178+x179)<=x180));

    if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x181 = UINT16_MAX;
	int8_t x182 = INT8_MAX;
	uint8_t x183 = 2U;
	int32_t x184 = INT32_MAX;

    t38 = (x181^((x182+x183)<=x184));

    if (t38 != 65534) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x185 = INT32_MIN;
	int16_t x186 = -1;
	int8_t x187 = INT8_MIN;
	static uint64_t x188 = UINT64_MAX;
	volatile int32_t t39 = 1;

    t39 = (x185^((x186+x187)<=x188));

    if (t39 != -2147483647) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x193 = 17;
	int32_t x194 = INT32_MIN;
	volatile uint16_t x195 = 602U;
	static int8_t x196 = INT8_MIN;
	volatile int32_t t40 = -1;

    t40 = (x193^((x194+x195)<=x196));

    if (t40 != 16) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x197 = UINT64_MAX;
	volatile int16_t x198 = INT16_MIN;
	static volatile uint64_t t41 = UINT64_MAX;

    t41 = (x197^((x198+x199)<=x200));

    if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x201 = 14733;

    t42 = (x201^((x202+x203)<=x204));

    if (t42 != 14732) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x205 = 5537126LL;
	static volatile int8_t x206 = INT8_MIN;

    t43 = (x205^((x206+x207)<=x208));

    if (t43 != 5537126LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x209 = INT64_MAX;
	int16_t x211 = INT16_MIN;
	int16_t x212 = INT16_MAX;
	volatile int64_t t44 = INT64_MAX;

    t44 = (x209^((x210+x211)<=x212));

    if (t44 != INT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x213 = INT8_MAX;
	int32_t x214 = INT32_MIN;
	uint64_t x215 = UINT64_MAX;
	volatile int16_t x216 = 1;

    t45 = (x213^((x214+x215)<=x216));

    if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x217 = 0U;
	volatile int64_t x218 = -1LL;
	volatile uint8_t x219 = 30U;
	uint8_t x220 = 43U;
	int32_t t46 = -1899703;

    t46 = (x217^((x218+x219)<=x220));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x225 = INT16_MIN;
	int8_t x227 = INT8_MAX;
	int16_t x228 = 0;
	volatile int32_t t47 = 4899179;

    t47 = (x225^((x226+x227)<=x228));

    if (t47 != -32768) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint8_t x229 = 3U;
	uint64_t x230 = 624016867LLU;
	static uint32_t x231 = 3520475U;
	static volatile int32_t x232 = INT32_MIN;

    t48 = (x229^((x230+x231)<=x232));

    if (t48 != 2) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x237 = UINT64_MAX;
	volatile int8_t x238 = 2;
	static int32_t x239 = 7708060;
	int32_t x240 = INT32_MIN;
	uint64_t t49 = UINT64_MAX;

    t49 = (x237^((x238+x239)<=x240));

    if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x241 = -1;
	int32_t x242 = INT32_MIN;
	uint64_t x243 = 604005700640LLU;
	volatile int32_t x244 = 2043566;
	volatile int32_t t50 = 35;

    t50 = (x241^((x242+x243)<=x244));

    if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x245 = -1LL;
	static volatile int64_t x246 = INT64_MAX;
	static int8_t x247 = INT8_MIN;
	static volatile uint32_t x248 = UINT32_MAX;
	volatile int64_t t51 = 36LL;

    t51 = (x245^((x246+x247)<=x248));

    if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x249 = UINT16_MAX;
	static int64_t x250 = INT64_MIN;
	volatile int16_t x251 = 73;
	volatile int32_t t52 = -19481;

    t52 = (x249^((x250+x251)<=x252));

    if (t52 != 65534) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x253 = INT8_MIN;
	uint16_t x254 = 216U;
	volatile int16_t x255 = 31;
	int32_t t53 = -4249;

    t53 = (x253^((x254+x255)<=x256));

    if (t53 != -128) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x257 = INT8_MIN;
	uint8_t x258 = 22U;
	static int16_t x259 = -13;
	int8_t x260 = INT8_MAX;
	int32_t t54 = -260379279;

    t54 = (x257^((x258+x259)<=x260));

    if (t54 != -127) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x261 = INT32_MIN;
	volatile uint16_t x262 = UINT16_MAX;
	uint64_t x263 = UINT64_MAX;
	int16_t x264 = INT16_MIN;
	int32_t t55 = -5697;

    t55 = (x261^((x262+x263)<=x264));

    if (t55 != -2147483647) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x265 = -1;
	int64_t x267 = -1LL;
	int64_t x268 = INT64_MAX;
	volatile int32_t t56 = 196;

    t56 = (x265^((x266+x267)<=x268));

    if (t56 != -2) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint64_t x271 = 12392814285007LLU;
	uint8_t x272 = UINT8_MAX;
	uint64_t t57 = 1025467151685LLU;

    t57 = (x269^((x270+x271)<=x272));

    if (t57 != 7215799580272578864LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x273 = 53U;
	volatile int8_t x274 = INT8_MIN;
	volatile uint16_t x275 = 62U;
	int32_t x276 = -692286972;

    t58 = (x273^((x274+x275)<=x276));

    if (t58 != 53) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x277 = -1LL;
	static volatile int64_t x280 = -1LL;
	volatile int64_t t59 = -815105277448611334LL;

    t59 = (x277^((x278+x279)<=x280));

    if (t59 != -2LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x281 = -1;
	int8_t x282 = -8;
	int32_t x283 = 27;
	int32_t x284 = INT32_MIN;
	volatile int32_t t60 = 982949;

    t60 = (x281^((x282+x283)<=x284));

    if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x286 = INT8_MIN;
	int64_t x288 = INT64_MAX;
	volatile int32_t t61 = 650479;

    t61 = (x285^((x286+x287)<=x288));

    if (t61 != 2147483646) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x289 = UINT8_MAX;
	int16_t x290 = -1;
	int64_t x291 = -7653914677531131LL;
	int8_t x292 = INT8_MIN;
	static volatile int32_t t62 = -4;

    t62 = (x289^((x290+x291)<=x292));

    if (t62 != 254) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x293 = UINT8_MAX;
	static volatile int16_t x294 = INT16_MIN;
	static int16_t x295 = 0;

    t63 = (x293^((x294+x295)<=x296));

    if (t63 != 254) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x297 = INT64_MIN;
	static volatile int64_t x298 = 11LL;
	volatile int64_t x299 = INT64_MIN;
	uint32_t x300 = UINT32_MAX;

    t64 = (x297^((x298+x299)<=x300));

    if (t64 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint64_t x301 = 6977584179011081107LLU;
	static int8_t x302 = INT8_MIN;
	uint32_t x303 = UINT32_MAX;
	static int32_t x304 = INT32_MIN;

    t65 = (x301^((x302+x303)<=x304));

    if (t65 != 6977584179011081107LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x305 = UINT32_MAX;
	int16_t x306 = 1;
	static uint32_t x307 = 390U;
	int64_t x308 = -1LL;
	static uint32_t t66 = UINT32_MAX;

    t66 = (x305^((x306+x307)<=x308));

    if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x309 = 1490177988286263584LLU;
	int16_t x311 = INT16_MAX;
	volatile uint64_t t67 = 30176LLU;

    t67 = (x309^((x310+x311)<=x312));

    if (t67 != 1490177988286263584LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x313 = 21;
	int32_t x314 = 5;
	int32_t x315 = INT32_MIN;
	static int8_t x316 = -60;
	int32_t t68 = -7089;

    t68 = (x313^((x314+x315)<=x316));

    if (t68 != 20) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x317 = INT32_MAX;
	volatile uint32_t x318 = UINT32_MAX;
	static int64_t x319 = INT64_MIN;
	volatile int8_t x320 = 47;
	int32_t t69 = 13289631;

    t69 = (x317^((x318+x319)<=x320));

    if (t69 != 2147483646) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x321 = INT64_MIN;
	uint8_t x323 = 43U;
	int32_t x324 = INT32_MIN;
	volatile int64_t t70 = INT64_MIN;

    t70 = (x321^((x322+x323)<=x324));

    if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x325 = 51U;
	int32_t x326 = INT32_MIN;
	int16_t x327 = INT16_MAX;
	uint8_t x328 = UINT8_MAX;
	volatile int32_t t71 = 249;

    t71 = (x325^((x326+x327)<=x328));

    if (t71 != 50) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x329 = -1;
	int64_t x332 = -349239113475464848LL;
	static volatile int32_t t72 = -6429424;

    t72 = (x329^((x330+x331)<=x332));

    if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x333 = INT16_MAX;
	int16_t x334 = INT16_MIN;
	uint32_t x335 = 5516U;
	static int32_t x336 = -1;

    t73 = (x333^((x334+x335)<=x336));

    if (t73 != 32766) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x341 = 1020905466U;
	uint8_t x342 = 23U;
	uint8_t x343 = 102U;
	int8_t x344 = -1;

    t74 = (x341^((x342+x343)<=x344));

    if (t74 != 1020905466U) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x349 = INT8_MIN;
	uint32_t x350 = UINT32_MAX;
	int8_t x352 = INT8_MAX;
	int32_t t75 = 2496628;

    t75 = (x349^((x350+x351)<=x352));

    if (t75 != -127) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x353 = -1;
	uint16_t x355 = UINT16_MAX;
	uint8_t x356 = 1U;
	int32_t t76 = -111187;

    t76 = (x353^((x354+x355)<=x356));

    if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x357 = INT16_MAX;
	uint32_t x358 = 1407U;
	uint32_t x359 = 321771U;
	uint8_t x360 = 0U;
	int32_t t77 = 103897;

    t77 = (x357^((x358+x359)<=x360));

    if (t77 != 32767) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile uint32_t x362 = UINT32_MAX;
	int16_t x363 = 3530;
	int32_t x364 = INT32_MIN;
	int64_t t78 = -165174LL;

    t78 = (x361^((x362+x363)<=x364));

    if (t78 != -2LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x365 = 1;
	int32_t x366 = -4284;
	volatile uint8_t x367 = 2U;
	int32_t x368 = INT32_MIN;

    t79 = (x365^((x366+x367)<=x368));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x370 = -1;
	uint8_t x371 = 0U;
	int16_t x372 = -29;
	volatile uint32_t t80 = 370U;

    t80 = (x369^((x370+x371)<=x372));

    if (t80 != 1159U) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x373 = -1654;
	static uint64_t x374 = 901556LLU;
	int64_t x375 = INT64_MIN;
	int16_t x376 = 4;
	int32_t t81 = 87218573;

    t81 = (x373^((x374+x375)<=x376));

    if (t81 != -1654) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x377 = INT16_MAX;
	volatile int8_t x378 = 1;
	int8_t x379 = -1;
	volatile int32_t t82 = 1;

    t82 = (x377^((x378+x379)<=x380));

    if (t82 != 32766) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint8_t x381 = UINT8_MAX;
	int64_t x382 = INT64_MIN;
	int64_t x383 = INT64_MAX;
	int64_t x384 = INT64_MIN;
	static int32_t t83 = 394260;

    t83 = (x381^((x382+x383)<=x384));

    if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x385 = -1;
	static int32_t t84 = 229;

    t84 = (x385^((x386+x387)<=x388));

    if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x389 = UINT32_MAX;
	volatile int8_t x390 = INT8_MAX;
	volatile int16_t x391 = 6;
	static uint16_t x392 = 406U;
	static volatile uint32_t t85 = 556U;

    t85 = (x389^((x390+x391)<=x392));

    if (t85 != 4294967294U) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x393 = UINT8_MAX;
	int64_t x394 = -34687440LL;
	volatile int32_t x396 = INT32_MIN;

    t86 = (x393^((x394+x395)<=x396));

    if (t86 != 255) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x397 = INT8_MIN;
	int16_t x398 = -1;
	static uint64_t x399 = UINT64_MAX;
	int32_t x400 = -1;

    t87 = (x397^((x398+x399)<=x400));

    if (t87 != -127) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x401 = INT8_MIN;
	int64_t x402 = INT64_MIN;
	int16_t x404 = -1;
	static volatile int32_t t88 = 1;

    t88 = (x401^((x402+x403)<=x404));

    if (t88 != -127) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint8_t x405 = UINT8_MAX;
	int64_t x406 = 279058LL;
	int16_t x408 = INT16_MIN;
	volatile int32_t t89 = 0;

    t89 = (x405^((x406+x407)<=x408));

    if (t89 != 255) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x409 = -1;
	int64_t x410 = 14431LL;
	uint16_t x412 = 8U;
	static int32_t t90 = 812482;

    t90 = (x409^((x410+x411)<=x412));

    if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x413 = INT16_MIN;
	int16_t x416 = INT16_MIN;
	int32_t t91 = 14;

    t91 = (x413^((x414+x415)<=x416));

    if (t91 != -32767) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x417 = INT32_MIN;
	int16_t x419 = -1;
	volatile int32_t t92 = 1;

    t92 = (x417^((x418+x419)<=x420));

    if (t92 != -2147483647) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint64_t x421 = 19559LLU;
	volatile int8_t x424 = -1;
	volatile uint64_t t93 = 2088091903375089LLU;

    t93 = (x421^((x422+x423)<=x424));

    if (t93 != 19559LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x425 = 93U;
	int32_t x426 = 17419;
	uint32_t x427 = UINT32_MAX;
	int64_t x428 = 7146090617112189LL;
	volatile int32_t t94 = -101816;

    t94 = (x425^((x426+x427)<=x428));

    if (t94 != 92) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x430 = 935;
	int32_t x431 = -1292;
	static uint64_t x432 = UINT64_MAX;
	uint64_t t95 = 778LLU;

    t95 = (x429^((x430+x431)<=x432));

    if (t95 != 7347986LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x433 = -1;
	volatile uint8_t x434 = UINT8_MAX;
	volatile uint16_t x435 = 12083U;
	uint32_t x436 = 6U;
	static int32_t t96 = -4;

    t96 = (x433^((x434+x435)<=x436));

    if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint8_t x437 = 94U;
	int32_t x438 = 1836;
	volatile int64_t x439 = -1LL;
	volatile int32_t x440 = 264338933;
	volatile int32_t t97 = -4;

    t97 = (x437^((x438+x439)<=x440));

    if (t97 != 95) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x441 = 0U;
	uint8_t x443 = 5U;
	int16_t x444 = -36;
	static int32_t t98 = -265211511;

    t98 = (x441^((x442+x443)<=x444));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x445 = INT8_MAX;
	int16_t x446 = INT16_MIN;
	uint8_t x447 = 0U;
	int64_t x448 = INT64_MIN;
	volatile int32_t t99 = 2;

    t99 = (x445^((x446+x447)<=x448));

    if (t99 != 127) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x449 = INT64_MIN;
	int64_t x452 = INT64_MIN;

    t100 = (x449^((x450+x451)<=x452));

    if (t100 != INT64_MIN) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile int32_t x453 = -1;
	volatile uint64_t x454 = UINT64_MAX;
	uint8_t x455 = 34U;
	int32_t x456 = INT32_MIN;
	volatile int32_t t101 = -55460087;

    t101 = (x453^((x454+x455)<=x456));

    if (t101 != -2) { NG(); } else { ; }
	
}

void f102(void) {
    	static int8_t x457 = INT8_MIN;
	volatile uint8_t x458 = 23U;
	volatile uint32_t x459 = 260445828U;
	int16_t x460 = INT16_MAX;
	volatile int32_t t102 = 2935949;

    t102 = (x457^((x458+x459)<=x460));

    if (t102 != -128) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x461 = -1;
	volatile uint32_t x462 = 158716985U;
	uint64_t x463 = 14443357LLU;
	static volatile int16_t x464 = INT16_MIN;
	int32_t t103 = 37316331;

    t103 = (x461^((x462+x463)<=x464));

    if (t103 != -2) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint64_t x465 = UINT64_MAX;
	uint64_t x467 = 143LLU;
	volatile uint64_t x468 = UINT64_MAX;
	volatile uint64_t t104 = 4291633081208LLU;

    t104 = (x465^((x466+x467)<=x468));

    if (t104 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x470 = 0;
	int16_t x471 = INT16_MIN;
	volatile int64_t t105 = 141172081089476LL;

    t105 = (x469^((x470+x471)<=x472));

    if (t105 != 881300213456194898LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x473 = -1;
	volatile uint64_t x475 = UINT64_MAX;
	static int32_t x476 = -1;
	volatile int32_t t106 = -35;

    t106 = (x473^((x474+x475)<=x476));

    if (t106 != -2) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x478 = INT8_MAX;
	uint64_t x479 = 16193879323LLU;
	int8_t x480 = INT8_MAX;
	uint32_t t107 = UINT32_MAX;

    t107 = (x477^((x478+x479)<=x480));

    if (t107 != UINT32_MAX) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x482 = INT8_MAX;
	static volatile int64_t x483 = INT64_MIN;
	int32_t x484 = -1;
	int32_t t108 = -18064;

    t108 = (x481^((x482+x483)<=x484));

    if (t108 != -2) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x489 = INT64_MIN;
	uint8_t x490 = 37U;
	int8_t x491 = INT8_MAX;
	int64_t x492 = INT64_MIN;
	int64_t t109 = INT64_MIN;

    t109 = (x489^((x490+x491)<=x492));

    if (t109 != INT64_MIN) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int64_t x493 = -1LL;
	int32_t x494 = -1;
	static int16_t x495 = INT16_MIN;
	uint16_t x496 = 4158U;
	volatile int64_t t110 = 543831LL;

    t110 = (x493^((x494+x495)<=x496));

    if (t110 != -2LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x497 = 0;
	uint8_t x498 = 1U;
	static volatile int8_t x499 = INT8_MIN;
	volatile int32_t t111 = -7;

    t111 = (x497^((x498+x499)<=x500));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x501 = 33884LL;
	volatile uint32_t x502 = 8U;
	int8_t x503 = 3;
	uint8_t x504 = 1U;

    t112 = (x501^((x502+x503)<=x504));

    if (t112 != 33884LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int16_t x505 = 1;
	int8_t x506 = INT8_MIN;
	int64_t x507 = INT64_MAX;
	static int16_t x508 = -1;

    t113 = (x505^((x506+x507)<=x508));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x509 = -1;
	static uint8_t x511 = UINT8_MAX;
	static volatile int64_t x512 = 15496602435LL;
	int32_t t114 = 32842860;

    t114 = (x509^((x510+x511)<=x512));

    if (t114 != -2) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x514 = INT32_MIN;
	int32_t x516 = INT32_MIN;
	volatile uint64_t t115 = 421031502455100277LLU;

    t115 = (x513^((x514+x515)<=x516));

    if (t115 != 4438898312718LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x517 = -180317LL;
	uint32_t x519 = UINT32_MAX;
	uint16_t x520 = UINT16_MAX;
	volatile int64_t t116 = -6336940LL;

    t116 = (x517^((x518+x519)<=x520));

    if (t116 != -180318LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x521 = -26;
	volatile int64_t x522 = -32LL;
	static int32_t x523 = INT32_MIN;
	int8_t x524 = INT8_MIN;
	volatile int32_t t117 = 0;

    t117 = (x521^((x522+x523)<=x524));

    if (t117 != -25) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x525 = 505243481868390554LL;
	int64_t x526 = INT64_MAX;
	volatile int8_t x528 = -1;

    t118 = (x525^((x526+x527)<=x528));

    if (t118 != 505243481868390554LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x529 = 23782086018667551LLU;
	volatile uint16_t x530 = 1U;
	static int8_t x531 = INT8_MAX;

    t119 = (x529^((x530+x531)<=x532));

    if (t119 != 23782086018667550LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x533 = 3038U;
	int32_t x535 = 179278;
	uint64_t x536 = UINT64_MAX;
	int32_t t120 = -11;

    t120 = (x533^((x534+x535)<=x536));

    if (t120 != 3039) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x538 = 43U;
	int8_t x539 = -4;
	static uint16_t x540 = 10762U;

    t121 = (x537^((x538+x539)<=x540));

    if (t121 != -2) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int64_t x541 = -122356147029LL;
	static volatile int16_t x542 = INT16_MAX;
	uint8_t x543 = 36U;
	int16_t x544 = INT16_MIN;
	int64_t t122 = 194322365451182189LL;

    t122 = (x541^((x542+x543)<=x544));

    if (t122 != -122356147029LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x546 = 29U;
	int64_t x547 = 144LL;
	static uint32_t x548 = UINT32_MAX;
	volatile int32_t t123 = -29917;

    t123 = (x545^((x546+x547)<=x548));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint8_t x549 = 4U;
	int8_t x550 = INT8_MAX;
	int32_t x551 = INT32_MIN;
	static volatile int32_t x552 = 510;
	static int32_t t124 = 4133367;

    t124 = (x549^((x550+x551)<=x552));

    if (t124 != 5) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint64_t x554 = UINT64_MAX;
	int32_t x555 = 512;
	static uint64_t x556 = 121174929674002077LLU;
	uint32_t t125 = 225492943U;

    t125 = (x553^((x554+x555)<=x556));

    if (t125 != 4U) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x557 = -13859381;
	int8_t x559 = -1;
	uint32_t x560 = 209U;
	static volatile int32_t t126 = 718426;

    t126 = (x557^((x558+x559)<=x560));

    if (t126 != -13859381) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x561 = UINT32_MAX;
	static int8_t x562 = 27;
	static uint64_t x564 = 804500145255449172LLU;

    t127 = (x561^((x562+x563)<=x564));

    if (t127 != 4294967294U) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x565 = INT64_MIN;
	uint32_t x566 = UINT32_MAX;
	int8_t x568 = -1;

    t128 = (x565^((x566+x567)<=x568));

    if (t128 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile uint64_t x569 = UINT64_MAX;
	uint32_t x570 = 0U;
	static int32_t x571 = -2;
	static int32_t x572 = INT32_MIN;
	volatile uint64_t t129 = UINT64_MAX;

    t129 = (x569^((x570+x571)<=x572));

    if (t129 != UINT64_MAX) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x573 = INT32_MIN;
	volatile uint64_t x575 = 11LLU;
	static int32_t x576 = -1;
	int32_t t130 = 243;

    t130 = (x573^((x574+x575)<=x576));

    if (t130 != -2147483647) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x577 = -1;
	int8_t x579 = INT8_MIN;
	int32_t x580 = INT32_MAX;
	int32_t t131 = 23775;

    t131 = (x577^((x578+x579)<=x580));

    if (t131 != -2) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x581 = INT16_MIN;
	static int32_t x582 = 91;
	int64_t x583 = INT64_MIN;
	static volatile int64_t x584 = -17077943LL;
	volatile int32_t t132 = -369;

    t132 = (x581^((x582+x583)<=x584));

    if (t132 != -32767) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x589 = INT32_MIN;
	int8_t x590 = -1;
	static int64_t x592 = INT64_MAX;
	int32_t t133 = -32788488;

    t133 = (x589^((x590+x591)<=x592));

    if (t133 != -2147483647) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x596 = 3064311U;
	volatile int32_t t134 = -312723310;

    t134 = (x593^((x594+x595)<=x596));

    if (t134 != -1) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x597 = INT64_MIN;
	uint64_t x598 = UINT64_MAX;
	int8_t x599 = 1;
	volatile int64_t t135 = 41566070603219313LL;

    t135 = (x597^((x598+x599)<=x600));

    if (t135 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x601 = INT64_MAX;
	int64_t x602 = 1384054813LL;
	static volatile uint8_t x603 = 55U;
	static uint8_t x604 = 2U;

    t136 = (x601^((x602+x603)<=x604));

    if (t136 != INT64_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile int8_t x605 = INT8_MIN;
	static volatile int64_t x606 = -1LL;
	int8_t x607 = 12;
	static int32_t t137 = 2005;

    t137 = (x605^((x606+x607)<=x608));

    if (t137 != -128) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x609 = -1;
	uint16_t x610 = UINT16_MAX;
	int8_t x612 = 5;

    t138 = (x609^((x610+x611)<=x612));

    if (t138 != -1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x613 = INT64_MIN;
	uint64_t x614 = 36406189647589LLU;
	int8_t x615 = -1;
	uint32_t x616 = 15U;
	static volatile int64_t t139 = INT64_MIN;

    t139 = (x613^((x614+x615)<=x616));

    if (t139 != INT64_MIN) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x617 = INT8_MIN;
	static int8_t x619 = INT8_MAX;

    t140 = (x617^((x618+x619)<=x620));

    if (t140 != -128) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint32_t x625 = 500U;
	static int32_t x626 = INT32_MIN;
	int64_t x627 = 456LL;
	uint32_t t141 = 4U;

    t141 = (x625^((x626+x627)<=x628));

    if (t141 != 501U) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x629 = -1;
	static int8_t x630 = INT8_MIN;
	volatile int8_t x631 = INT8_MIN;
	int16_t x632 = 9;
	int32_t t142 = 3074672;

    t142 = (x629^((x630+x631)<=x632));

    if (t142 != -2) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int64_t x633 = 398LL;
	int32_t x634 = -1;
	static int64_t x635 = 1257449116126148406LL;
	uint32_t x636 = 3685119U;
	int64_t t143 = -305LL;

    t143 = (x633^((x634+x635)<=x636));

    if (t143 != 398LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x637 = 9U;
	uint64_t x638 = UINT64_MAX;
	int64_t x639 = INT64_MAX;
	int32_t x640 = INT32_MIN;
	volatile uint32_t t144 = 154U;

    t144 = (x637^((x638+x639)<=x640));

    if (t144 != 8U) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x642 = INT64_MAX;
	int32_t x643 = -1;
	uint64_t t145 = 1132414045393LLU;

    t145 = (x641^((x642+x643)<=x644));

    if (t145 != 0LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x646 = 777285408U;
	volatile int32_t x648 = 322113338;

    t146 = (x645^((x646+x647)<=x648));

    if (t146 != 65535) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x651 = 80U;
	int8_t x652 = -6;
	int32_t t147 = 128980681;

    t147 = (x649^((x650+x651)<=x652));

    if (t147 != 433) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint32_t x653 = 10U;
	static int32_t x655 = -22361;
	int16_t x656 = INT16_MIN;
	volatile uint32_t t148 = 2844714U;

    t148 = (x653^((x654+x655)<=x656));

    if (t148 != 10U) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x657 = 353309156945LLU;
	volatile int16_t x658 = -1;
	int64_t x659 = 6LL;
	volatile int8_t x660 = -9;
	uint64_t t149 = 6LLU;

    t149 = (x657^((x658+x659)<=x660));

    if (t149 != 353309156945LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x661 = -28075911280124LL;
	int8_t x663 = -15;
	int32_t x664 = INT32_MAX;
	volatile int64_t t150 = 12450162289708892LL;

    t150 = (x661^((x662+x663)<=x664));

    if (t150 != -28075911280123LL) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint32_t x666 = UINT32_MAX;
	uint64_t x667 = 565409094252122LLU;
	volatile uint32_t x668 = 858U;
	int32_t t151 = 882063614;

    t151 = (x665^((x666+x667)<=x668));

    if (t151 != -1) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint8_t x670 = 1U;
	static uint16_t x671 = 31U;
	int8_t x672 = 49;
	int32_t t152 = 97;

    t152 = (x669^((x670+x671)<=x672));

    if (t152 != 254) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x673 = INT16_MIN;
	uint64_t x674 = 2853LLU;
	uint16_t x675 = 765U;
	volatile int32_t t153 = 1742;

    t153 = (x673^((x674+x675)<=x676));

    if (t153 != -32767) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x678 = -1;
	int64_t x679 = 8944836LL;
	int64_t x680 = INT64_MIN;
	volatile int32_t t154 = -70454;

    t154 = (x677^((x678+x679)<=x680));

    if (t154 != 32767) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x681 = 7389212533811319785LLU;
	int8_t x682 = -3;
	static volatile uint16_t x683 = 33U;
	uint32_t x684 = 7088U;
	uint64_t t155 = 18855408084412532LLU;

    t155 = (x681^((x682+x683)<=x684));

    if (t155 != 7389212533811319784LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int16_t x689 = INT16_MIN;
	int8_t x690 = -1;
	static int8_t x691 = -1;
	static uint16_t x692 = UINT16_MAX;
	int32_t t156 = 14862;

    t156 = (x689^((x690+x691)<=x692));

    if (t156 != -32767) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x693 = -1;
	uint8_t x694 = UINT8_MAX;
	uint16_t x695 = 213U;
	static uint16_t x696 = UINT16_MAX;

    t157 = (x693^((x694+x695)<=x696));

    if (t157 != -2) { NG(); } else { ; }
	
}

void f158(void) {
    	static int16_t x697 = -1;
	int32_t x698 = -123686;
	int32_t x699 = -165773644;
	static int32_t t158 = -1;

    t158 = (x697^((x698+x699)<=x700));

    if (t158 != -2) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x701 = UINT64_MAX;
	static int32_t x702 = INT32_MAX;
	static uint32_t x704 = 1U;

    t159 = (x701^((x702+x703)<=x704));

    if (t159 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x705 = UINT32_MAX;
	static int8_t x707 = INT8_MIN;
	volatile uint32_t t160 = 30U;

    t160 = (x705^((x706+x707)<=x708));

    if (t160 != 4294967294U) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint64_t x709 = UINT64_MAX;
	int64_t x710 = -9LL;
	uint16_t x711 = 15U;

    t161 = (x709^((x710+x711)<=x712));

    if (t161 != UINT64_MAX) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x721 = UINT8_MAX;
	static uint8_t x722 = 0U;
	static int64_t x723 = INT64_MIN;
	volatile uint32_t x724 = 16U;
	int32_t t162 = 219694;

    t162 = (x721^((x722+x723)<=x724));

    if (t162 != 254) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x725 = 2841919094116LLU;
	uint64_t x726 = 7190902007095601726LLU;
	int64_t x728 = INT64_MIN;
	uint64_t t163 = 14003LLU;

    t163 = (x725^((x726+x727)<=x728));

    if (t163 != 2841919094117LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x734 = -520283800LL;
	volatile uint64_t t164 = 887505LLU;

    t164 = (x733^((x734+x735)<=x736));

    if (t164 != 65629797742322LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint32_t x738 = UINT32_MAX;
	int64_t x739 = -1LL;
	volatile int32_t t165 = -525;

    t165 = (x737^((x738+x739)<=x740));

    if (t165 != -128) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint32_t x742 = UINT32_MAX;
	static uint64_t x743 = UINT64_MAX;
	int64_t x744 = -1LL;
	int32_t t166 = 15423482;

    t166 = (x741^((x742+x743)<=x744));

    if (t166 != -2) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x745 = -1;
	static volatile uint16_t x746 = UINT16_MAX;
	uint16_t x747 = 14969U;
	uint16_t x748 = UINT16_MAX;

    t167 = (x745^((x746+x747)<=x748));

    if (t167 != -1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint32_t x749 = 3U;
	int16_t x751 = 70;
	static int32_t x752 = INT32_MIN;

    t168 = (x749^((x750+x751)<=x752));

    if (t168 != 3U) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x754 = INT32_MIN;
	uint64_t x755 = 126LLU;
	uint16_t x756 = 5U;

    t169 = (x753^((x754+x755)<=x756));

    if (t169 != 188) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x757 = -1;
	volatile int32_t x759 = -1;
	int16_t x760 = -1;
	volatile int32_t t170 = -72941;

    t170 = (x757^((x758+x759)<=x760));

    if (t170 != -2) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x761 = UINT8_MAX;
	static volatile uint64_t x763 = 1015LLU;
	volatile int16_t x764 = 4296;
	int32_t t171 = 61599;

    t171 = (x761^((x762+x763)<=x764));

    if (t171 != 254) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x766 = 5;
	uint32_t x767 = 118U;
	int32_t t172 = 3250832;

    t172 = (x765^((x766+x767)<=x768));

    if (t172 != 53) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x769 = INT8_MAX;
	int8_t x770 = INT8_MIN;
	int16_t x771 = INT16_MIN;
	static uint32_t x772 = 2112364U;
	volatile int32_t t173 = 264771166;

    t173 = (x769^((x770+x771)<=x772));

    if (t173 != 127) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x773 = 322415312922428LLU;
	static volatile int32_t x774 = INT32_MIN;
	uint32_t x776 = 102670481U;

    t174 = (x773^((x774+x775)<=x776));

    if (t174 != 322415312922428LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x777 = 83960044141LL;
	volatile int32_t x778 = -17484;
	uint8_t x780 = UINT8_MAX;

    t175 = (x777^((x778+x779)<=x780));

    if (t175 != 83960044140LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x781 = 9817886LLU;
	int8_t x782 = -1;
	int64_t x783 = -13728192150LL;
	uint8_t x784 = 86U;
	volatile uint64_t t176 = 897956481861LLU;

    t176 = (x781^((x782+x783)<=x784));

    if (t176 != 9817887LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x785 = 2U;
	uint32_t x786 = UINT32_MAX;
	static int64_t x788 = INT64_MIN;
	static int32_t t177 = 461117;

    t177 = (x785^((x786+x787)<=x788));

    if (t177 != 2) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint32_t x790 = 189756U;
	int16_t x791 = -1;
	int8_t x792 = -1;
	int32_t t178 = 375169;

    t178 = (x789^((x790+x791)<=x792));

    if (t178 != -2) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x793 = INT8_MIN;
	int16_t x794 = INT16_MAX;
	static int64_t x795 = INT64_MIN;
	int32_t x796 = INT32_MAX;
	volatile int32_t t179 = 135347298;

    t179 = (x793^((x794+x795)<=x796));

    if (t179 != -127) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x797 = INT64_MIN;
	int8_t x798 = -1;
	static uint32_t x799 = 36126060U;
	uint16_t x800 = 31771U;

    t180 = (x797^((x798+x799)<=x800));

    if (t180 != INT64_MIN) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x802 = -1;
	int64_t x803 = -1LL;
	volatile uint64_t t181 = 178279LLU;

    t181 = (x801^((x802+x803)<=x804));

    if (t181 != 113844426327346LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x812 = UINT32_MAX;

    t182 = (x809^((x810+x811)<=x812));

    if (t182 != -127) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x813 = -1;
	volatile uint32_t x815 = 47028993U;
	int32_t x816 = INT32_MAX;
	int32_t t183 = 1010;

    t183 = (x813^((x814+x815)<=x816));

    if (t183 != -2) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x817 = 18943782621LL;
	int16_t x818 = -1;
	int64_t x820 = INT64_MAX;

    t184 = (x817^((x818+x819)<=x820));

    if (t184 != 18943782620LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x821 = -15LL;
	int8_t x822 = INT8_MAX;
	uint64_t x823 = UINT64_MAX;
	int64_t t185 = -230517LL;

    t185 = (x821^((x822+x823)<=x824));

    if (t185 != -16LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile uint16_t x825 = UINT16_MAX;
	volatile uint16_t x827 = 1465U;
	volatile uint16_t x828 = UINT16_MAX;
	volatile int32_t t186 = -1962;

    t186 = (x825^((x826+x827)<=x828));

    if (t186 != 65534) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x830 = INT8_MIN;
	int8_t x831 = INT8_MIN;
	static uint32_t x832 = 5U;
	volatile uint64_t t187 = 4817134857849LLU;

    t187 = (x829^((x830+x831)<=x832));

    if (t187 != 2005210213215553LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x833 = INT32_MIN;
	int32_t x834 = INT32_MIN;
	static volatile int8_t x835 = 15;
	volatile int32_t x836 = INT32_MIN;
	int32_t t188 = INT32_MIN;

    t188 = (x833^((x834+x835)<=x836));

    if (t188 != INT32_MIN) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint8_t x837 = 2U;
	volatile int16_t x838 = INT16_MAX;
	static int64_t x839 = INT64_MIN;
	uint8_t x840 = 53U;
	volatile int32_t t189 = -169719493;

    t189 = (x837^((x838+x839)<=x840));

    if (t189 != 3) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x842 = INT16_MIN;
	int8_t x843 = -1;
	int64_t x844 = INT64_MIN;
	static uint32_t t190 = 170U;

    t190 = (x841^((x842+x843)<=x844));

    if (t190 != 6136046U) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint64_t x845 = 15949026274411LLU;
	volatile uint16_t x847 = 15260U;
	uint16_t x848 = 109U;
	volatile uint64_t t191 = 66226756LLU;

    t191 = (x845^((x846+x847)<=x848));

    if (t191 != 15949026274410LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x849 = INT16_MAX;
	int16_t x851 = 3191;
	static int32_t t192 = -2040;

    t192 = (x849^((x850+x851)<=x852));

    if (t192 != 32767) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x853 = -2;
	uint16_t x854 = 365U;
	int32_t x855 = -25699;
	int32_t t193 = -12040;

    t193 = (x853^((x854+x855)<=x856));

    if (t193 != -1) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x857 = -110873992;
	int32_t x858 = -1;
	static int32_t x859 = -1;
	static volatile int32_t t194 = -5;

    t194 = (x857^((x858+x859)<=x860));

    if (t194 != -110873991) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x866 = 3321050099LLU;
	volatile int16_t x867 = INT16_MAX;
	volatile int32_t t195 = 4764305;

    t195 = (x865^((x866+x867)<=x868));

    if (t195 != 127) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile uint8_t x873 = 0U;
	int64_t x874 = INT64_MIN;
	static volatile uint8_t x875 = 0U;
	static int64_t x876 = 5751797628LL;
	static volatile int32_t t196 = 7;

    t196 = (x873^((x874+x875)<=x876));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x877 = -1;
	uint32_t x878 = 206U;
	uint8_t x879 = 126U;
	int64_t x880 = INT64_MIN;
	static int32_t t197 = -2030496;

    t197 = (x877^((x878+x879)<=x880));

    if (t197 != -1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x885 = 1058U;
	int32_t x886 = -1;
	int8_t x887 = -31;
	int16_t x888 = INT16_MIN;
	volatile uint32_t t198 = 86079U;

    t198 = (x885^((x886+x887)<=x888));

    if (t198 != 1058U) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x891 = 0;
	int16_t x892 = INT16_MAX;
	int32_t t199 = 51443;

    t199 = (x889^((x890+x891)<=x892));

    if (t199 != -2147483647) { NG(); } else { ; }
	
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

