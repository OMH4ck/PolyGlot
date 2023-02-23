
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

static volatile uint32_t x1 = UINT32_MAX;
int8_t x6 = -1;
int8_t x8 = INT8_MIN;
int16_t x12 = -1;
volatile int32_t t2 = 3;
int16_t x14 = INT16_MIN;
int64_t t6 = 1LL;
int8_t x31 = -1;
int16_t x39 = INT16_MIN;
int8_t x40 = INT8_MIN;
static int64_t x41 = INT64_MIN;
uint16_t x44 = UINT16_MAX;
static uint64_t x51 = 114519378682673LLU;
static uint8_t x57 = 80U;
int8_t x61 = 0;
int32_t x65 = INT32_MAX;
int32_t x71 = INT32_MIN;
static int64_t x73 = -260034313222982779LL;
int32_t x75 = INT32_MAX;
volatile int64_t t23 = 14296LL;
static uint64_t x99 = 597637217LLU;
uint64_t t24 = 3244837999787277617LLU;
int32_t x103 = 6542;
int64_t x119 = INT64_MIN;
static uint32_t x120 = UINT32_MAX;
uint8_t x121 = 3U;
static uint32_t t32 = 15U;
int64_t x133 = 2739358035LL;
int8_t x136 = INT8_MIN;
volatile int16_t x137 = INT16_MAX;
int32_t t35 = 186309527;
int32_t t38 = 29054579;
uint32_t x159 = 11U;
static int32_t t39 = -565320515;
volatile int64_t x161 = INT64_MIN;
uint8_t x164 = 0U;
int16_t x167 = 1;
int32_t x171 = INT32_MIN;
int64_t t43 = 355576916LL;
int16_t x177 = INT16_MIN;
int64_t x178 = -1LL;
static uint16_t x180 = 6U;
uint16_t x183 = 0U;
int16_t x187 = INT16_MIN;
static int16_t x189 = INT16_MIN;
volatile int32_t t47 = -12692;
int16_t x196 = INT16_MIN;
int8_t x198 = INT8_MAX;
uint64_t x199 = 1LLU;
static int16_t x203 = INT16_MIN;
int32_t x204 = INT32_MAX;
static volatile int8_t x214 = -1;
int64_t x218 = -89LL;
uint64_t x221 = UINT64_MAX;
int64_t x223 = INT64_MIN;
static int32_t x224 = INT32_MAX;
int64_t x226 = INT64_MIN;
static int32_t t60 = 4194502;
int16_t x247 = INT16_MIN;
static int64_t x253 = -2998964525LL;
static int8_t x254 = 0;
volatile uint32_t x256 = UINT32_MAX;
volatile uint64_t x257 = 34838580094785077LLU;
int8_t x259 = 1;
volatile uint64_t t66 = UINT64_MAX;
int64_t x273 = -67316552460768782LL;
int64_t t68 = 16LL;
int8_t x278 = INT8_MIN;
int16_t x284 = INT16_MIN;
int32_t t70 = -1;
int16_t x285 = 201;
int32_t t71 = 0;
static int16_t x289 = -340;
volatile int64_t t73 = -11LL;
static volatile uint64_t t74 = UINT64_MAX;
int8_t x303 = INT8_MIN;
static volatile uint64_t x307 = 1785949096LLU;
static int64_t x308 = INT64_MAX;
volatile uint32_t x312 = UINT32_MAX;
int32_t x320 = INT32_MIN;
int8_t x323 = INT8_MIN;
int32_t t80 = 1;
volatile int32_t x327 = INT32_MAX;
static int8_t x332 = -1;
int32_t t82 = 0;
volatile int32_t t84 = 24353;
volatile int32_t t86 = -23686;
uint32_t x349 = 121U;
static int32_t t89 = -1;
int32_t t91 = INT32_MIN;
int16_t x370 = INT16_MAX;
int32_t x374 = INT32_MIN;
uint32_t x378 = 10U;
uint8_t x390 = UINT8_MAX;
int32_t t98 = -39469;
int64_t x401 = -3432LL;
uint16_t x406 = 18169U;
uint32_t x418 = 1324587U;
uint32_t x423 = 3438U;
uint64_t t105 = UINT64_MAX;
int16_t x429 = -1;
uint16_t x431 = 5U;
int32_t t107 = 5;
uint16_t x433 = 4899U;
int32_t x435 = -1;
int8_t x446 = -1;
volatile uint32_t t111 = 1053526378U;
volatile int64_t t113 = -723562129958644147LL;
uint16_t x464 = UINT16_MAX;
volatile int32_t t115 = -2390690;
int32_t t119 = -169;
int8_t x482 = 0;
volatile int32_t x486 = -1;
uint8_t x490 = 18U;
uint64_t x492 = UINT64_MAX;
static int8_t x495 = -47;
int32_t t123 = -48118223;
volatile uint32_t x500 = UINT32_MAX;
int32_t x504 = INT32_MIN;
int16_t x508 = -27;
static uint64_t x514 = 175020086LLU;
int32_t t128 = 423656402;
int8_t x522 = -1;
uint64_t x525 = UINT64_MAX;
int64_t x526 = -66153531518838LL;
uint16_t x530 = 3U;
volatile int8_t x537 = INT8_MIN;
int32_t t134 = 0;
int16_t x542 = INT16_MAX;
uint8_t x551 = 10U;
int32_t t139 = -3;
uint32_t x561 = 57822U;
int16_t x562 = INT16_MIN;
static int8_t x563 = INT8_MIN;
static int64_t x565 = INT64_MIN;
uint8_t x567 = 4U;
int16_t x577 = INT16_MIN;
uint32_t x585 = 302U;
static volatile int64_t x587 = 320469853LL;
uint32_t x590 = UINT32_MAX;
volatile int64_t x592 = INT64_MAX;
int64_t t147 = -14561530624LL;
int16_t x595 = INT16_MIN;
static int8_t x600 = -3;
static int32_t x601 = 1;
volatile int32_t t150 = 3653;
int16_t x615 = -1;
int64_t x616 = INT64_MAX;
int32_t t153 = -60;
static int64_t t154 = -6714LL;
int8_t x622 = -1;
volatile int8_t x626 = INT8_MIN;
static volatile int8_t x630 = 31;
uint32_t t157 = 86U;
static int64_t x634 = INT64_MIN;
volatile uint64_t x641 = 97681644405LLU;
int32_t x644 = -1;
int16_t x645 = -6246;
volatile int32_t t161 = -29808;
int32_t x650 = INT32_MIN;
int16_t x655 = 1;
int64_t x658 = INT64_MIN;
int32_t x662 = INT32_MAX;
static volatile int64_t x677 = INT64_MAX;
int16_t x680 = INT16_MIN;
uint16_t x681 = 1U;
static volatile int16_t x682 = 3092;
uint64_t x686 = 2369950445452722631LLU;
int8_t x691 = -1;
int64_t x693 = INT64_MIN;
int64_t x694 = 416350023401LL;
int64_t x703 = INT64_MIN;
volatile int32_t t175 = -173;
int16_t x707 = INT16_MIN;
int32_t x709 = 65403;
volatile int64_t x723 = -956LL;
volatile uint64_t t181 = 4LLU;
int64_t t183 = -3703256650LL;
volatile uint16_t x742 = UINT16_MAX;
volatile int16_t x748 = INT16_MIN;
volatile int32_t t187 = -22065028;
static int32_t x754 = INT32_MIN;
int8_t x770 = INT8_MAX;
int16_t x779 = -135;
uint8_t x780 = 1U;
volatile int16_t x782 = -1;
static int8_t x783 = INT8_MIN;
volatile int32_t t196 = 0;
uint8_t x791 = 3U;
int32_t t197 = -551;
uint8_t x795 = UINT8_MAX;


void f0(void) {
    	int32_t x2 = INT32_MAX;
	uint32_t x3 = UINT32_MAX;
	uint8_t x4 = UINT8_MAX;
	volatile uint32_t t0 = 92202951U;

    t0 = (x1^((x2>x3)<=x4));

    if (t0 != 4294967294U) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MAX;
	uint64_t x7 = 8705160741140485LLU;
	static int32_t t1 = 83;

    t1 = (x5^((x6>x7)<=x8));

    if (t1 != 127) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int16_t x9 = -1;
	uint8_t x10 = 2U;
	uint8_t x11 = UINT8_MAX;

    t2 = (x9^((x10>x11)<=x12));

    if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
    	static int16_t x13 = INT16_MIN;
	static int32_t x15 = 9040;
	int8_t x16 = INT8_MAX;
	int32_t t3 = -145284533;

    t3 = (x13^((x14>x15)<=x16));

    if (t3 != -32767) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = -16;
	volatile int32_t x18 = -78437;
	int32_t x19 = 1;
	uint64_t x20 = 5837574033925317LLU;
	volatile int32_t t4 = -226072202;

    t4 = (x17^((x18>x19)<=x20));

    if (t4 != -15) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = INT8_MIN;
	int64_t x22 = -1LL;
	volatile int32_t x23 = 989298702;
	uint16_t x24 = 84U;
	volatile int32_t t5 = 659984;

    t5 = (x21^((x22>x23)<=x24));

    if (t5 != -127) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = -1LL;
	static uint32_t x26 = UINT32_MAX;
	volatile int32_t x27 = INT32_MAX;
	int64_t x28 = -1LL;

    t6 = (x25^((x26>x27)<=x28));

    if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x29 = 0U;
	volatile uint16_t x30 = UINT16_MAX;
	volatile int16_t x32 = INT16_MAX;
	volatile int32_t t7 = 0;

    t7 = (x29^((x30>x31)<=x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x33 = INT8_MIN;
	volatile int64_t x34 = -22169LL;
	static int16_t x35 = -1;
	uint16_t x36 = 1140U;
	int32_t t8 = 261251607;

    t8 = (x33^((x34>x35)<=x36));

    if (t8 != -127) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = -1;
	static uint8_t x38 = 8U;
	volatile int32_t t9 = -11;

    t9 = (x37^((x38>x39)<=x40));

    if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x42 = -1;
	uint32_t x43 = 16U;
	volatile int64_t t10 = 786943954358LL;

    t10 = (x41^((x42>x43)<=x44));

    if (t10 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x45 = INT64_MIN;
	volatile int64_t x46 = INT64_MAX;
	int32_t x47 = INT32_MIN;
	int16_t x48 = INT16_MAX;
	static volatile int64_t t11 = -15LL;

    t11 = (x45^((x46>x47)<=x48));

    if (t11 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x49 = UINT32_MAX;
	volatile int8_t x50 = -1;
	int8_t x52 = 0;
	static volatile uint32_t t12 = UINT32_MAX;

    t12 = (x49^((x50>x51)<=x52));

    if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = INT8_MAX;
	uint64_t x54 = 601334806735136LLU;
	uint16_t x55 = 117U;
	uint32_t x56 = UINT32_MAX;
	int32_t t13 = 932507;

    t13 = (x53^((x54>x55)<=x56));

    if (t13 != 126) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x58 = INT64_MIN;
	uint64_t x59 = 103370910425796363LLU;
	int64_t x60 = INT64_MIN;
	int32_t t14 = -1005;

    t14 = (x57^((x58>x59)<=x60));

    if (t14 != 80) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x62 = 10815256;
	int32_t x63 = 7918;
	int8_t x64 = INT8_MIN;
	static int32_t t15 = 346884;

    t15 = (x61^((x62>x63)<=x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x66 = 1LL;
	int16_t x67 = INT16_MIN;
	int16_t x68 = INT16_MIN;
	int32_t t16 = INT32_MAX;

    t16 = (x65^((x66>x67)<=x68));

    if (t16 != INT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x69 = -312053LL;
	uint64_t x70 = 61201LLU;
	int8_t x72 = -1;
	volatile int64_t t17 = -1LL;

    t17 = (x69^((x70>x71)<=x72));

    if (t17 != -312053LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x74 = INT32_MAX;
	int64_t x76 = 34LL;
	volatile int64_t t18 = -45LL;

    t18 = (x73^((x74>x75)<=x76));

    if (t18 != -260034313222982780LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = -1LL;
	uint16_t x78 = UINT16_MAX;
	int64_t x79 = INT64_MIN;
	uint16_t x80 = 203U;
	volatile int64_t t19 = 131076565190977LL;

    t19 = (x77^((x78>x79)<=x80));

    if (t19 != -2LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x81 = UINT16_MAX;
	static uint64_t x82 = 416360961570LLU;
	int64_t x83 = INT64_MIN;
	int64_t x84 = INT64_MAX;
	int32_t t20 = -1779910;

    t20 = (x81^((x82>x83)<=x84));

    if (t20 != 65534) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile uint8_t x85 = UINT8_MAX;
	int32_t x86 = INT32_MIN;
	int64_t x87 = -122325226905878LL;
	int32_t x88 = -1;
	volatile int32_t t21 = -25;

    t21 = (x85^((x86>x87)<=x88));

    if (t21 != 255) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x89 = 715063813092060LLU;
	int64_t x90 = INT64_MAX;
	int64_t x91 = -541914296LL;
	int64_t x92 = INT64_MAX;
	uint64_t t22 = 671LLU;

    t22 = (x89^((x90>x91)<=x92));

    if (t22 != 715063813092061LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = -3113429288269LL;
	uint8_t x94 = 14U;
	int8_t x95 = -1;
	int64_t x96 = -437193033248312619LL;

    t23 = (x93^((x94>x95)<=x96));

    if (t23 != -3113429288269LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint64_t x97 = 672LLU;
	volatile int16_t x98 = 9;
	static int64_t x100 = INT64_MIN;

    t24 = (x97^((x98>x99)<=x100));

    if (t24 != 672LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x101 = 14U;
	static int64_t x102 = -522681LL;
	int32_t x104 = -1;
	static int32_t t25 = -2288834;

    t25 = (x101^((x102>x103)<=x104));

    if (t25 != 14) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = -438;
	int64_t x106 = -1LL;
	int16_t x107 = -7;
	uint32_t x108 = 13U;
	volatile int32_t t26 = 73;

    t26 = (x105^((x106>x107)<=x108));

    if (t26 != -437) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x109 = 2356U;
	volatile int8_t x110 = INT8_MAX;
	int16_t x111 = INT16_MAX;
	volatile int16_t x112 = INT16_MIN;
	volatile int32_t t27 = 767125194;

    t27 = (x109^((x110>x111)<=x112));

    if (t27 != 2356) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x113 = INT32_MAX;
	uint32_t x114 = UINT32_MAX;
	volatile uint64_t x115 = UINT64_MAX;
	int32_t x116 = -2;
	volatile int32_t t28 = INT32_MAX;

    t28 = (x113^((x114>x115)<=x116));

    if (t28 != INT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = INT32_MIN;
	int16_t x118 = 8401;
	volatile int32_t t29 = -22;

    t29 = (x117^((x118>x119)<=x120));

    if (t29 != -2147483647) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint16_t x122 = UINT16_MAX;
	int16_t x123 = INT16_MIN;
	static int16_t x124 = -237;
	volatile int32_t t30 = 783624400;

    t30 = (x121^((x122>x123)<=x124));

    if (t30 != 3) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint16_t x125 = 11546U;
	uint32_t x126 = 150U;
	int64_t x127 = 328165122109020LL;
	int16_t x128 = -13;
	volatile int32_t t31 = -3179;

    t31 = (x125^((x126>x127)<=x128));

    if (t31 != 11546) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x129 = 3527481U;
	int16_t x130 = INT16_MIN;
	uint16_t x131 = 15187U;
	int16_t x132 = -10;

    t32 = (x129^((x130>x131)<=x132));

    if (t32 != 3527481U) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint32_t x134 = UINT32_MAX;
	int8_t x135 = -1;
	static int64_t t33 = 25764613LL;

    t33 = (x133^((x134>x135)<=x136));

    if (t33 != 2739358035LL) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int64_t x138 = 6460016806070LL;
	int64_t x139 = INT64_MAX;
	int64_t x140 = -1LL;
	volatile int32_t t34 = -1;

    t34 = (x137^((x138>x139)<=x140));

    if (t34 != 32767) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x141 = -4;
	volatile int32_t x142 = 9;
	int64_t x143 = INT64_MIN;
	int16_t x144 = INT16_MIN;

    t35 = (x141^((x142>x143)<=x144));

    if (t35 != -4) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x145 = INT64_MIN;
	int16_t x146 = -1;
	static int64_t x147 = INT64_MIN;
	uint16_t x148 = 47U;
	int64_t t36 = -1LL;

    t36 = (x145^((x146>x147)<=x148));

    if (t36 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x149 = -1;
	int16_t x150 = INT16_MIN;
	int32_t x151 = INT32_MIN;
	static int32_t x152 = INT32_MIN;
	int32_t t37 = 887670;

    t37 = (x149^((x150>x151)<=x152));

    if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x153 = INT16_MAX;
	uint16_t x154 = UINT16_MAX;
	int32_t x155 = 430564;
	static uint32_t x156 = UINT32_MAX;

    t38 = (x153^((x154>x155)<=x156));

    if (t38 != 32766) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x157 = -1;
	int8_t x158 = INT8_MIN;
	uint16_t x160 = 104U;

    t39 = (x157^((x158>x159)<=x160));

    if (t39 != -2) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x162 = -1;
	int8_t x163 = 1;
	volatile int64_t t40 = -44144195602LL;

    t40 = (x161^((x162>x163)<=x164));

    if (t40 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x165 = INT32_MAX;
	volatile int64_t x166 = -1LL;
	int8_t x168 = INT8_MIN;
	volatile int32_t t41 = INT32_MAX;

    t41 = (x165^((x166>x167)<=x168));

    if (t41 != INT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = INT64_MAX;
	int32_t x170 = INT32_MAX;
	volatile int32_t x172 = 7542158;
	volatile int64_t t42 = 7418689LL;

    t42 = (x169^((x170>x171)<=x172));

    if (t42 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x173 = -13862612362774964LL;
	int32_t x174 = INT32_MIN;
	volatile int16_t x175 = INT16_MIN;
	uint64_t x176 = 101622LLU;

    t43 = (x173^((x174>x175)<=x176));

    if (t43 != -13862612362774963LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint16_t x179 = 46U;
	volatile int32_t t44 = 462607432;

    t44 = (x177^((x178>x179)<=x180));

    if (t44 != -32767) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = INT32_MIN;
	volatile uint64_t x182 = UINT64_MAX;
	int8_t x184 = INT8_MAX;
	int32_t t45 = -3991685;

    t45 = (x181^((x182>x183)<=x184));

    if (t45 != -2147483647) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x185 = INT16_MAX;
	int8_t x186 = INT8_MIN;
	volatile uint32_t x188 = 5335665U;
	volatile int32_t t46 = 222826;

    t46 = (x185^((x186>x187)<=x188));

    if (t46 != 32766) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x190 = UINT64_MAX;
	int8_t x191 = -43;
	int32_t x192 = INT32_MIN;

    t47 = (x189^((x190>x191)<=x192));

    if (t47 != -32768) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint32_t x193 = 22U;
	static uint8_t x194 = 81U;
	static int32_t x195 = -11538886;
	uint32_t t48 = 448347252U;

    t48 = (x193^((x194>x195)<=x196));

    if (t48 != 22U) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x197 = 58609544LL;
	int32_t x200 = -1;
	volatile int64_t t49 = -3LL;

    t49 = (x197^((x198>x199)<=x200));

    if (t49 != 58609544LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x201 = -126375047851067LL;
	volatile int8_t x202 = INT8_MAX;
	volatile int64_t t50 = -8132030202LL;

    t50 = (x201^((x202>x203)<=x204));

    if (t50 != -126375047851068LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x205 = 97134297337LLU;
	static int32_t x206 = INT32_MIN;
	int32_t x207 = INT32_MIN;
	int64_t x208 = INT64_MIN;
	uint64_t t51 = 26758952LLU;

    t51 = (x205^((x206>x207)<=x208));

    if (t51 != 97134297337LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x209 = -1;
	volatile int16_t x210 = INT16_MIN;
	static uint32_t x211 = 1U;
	int8_t x212 = 3;
	volatile int32_t t52 = 176;

    t52 = (x209^((x210>x211)<=x212));

    if (t52 != -2) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x213 = INT8_MIN;
	static int16_t x215 = -2120;
	int64_t x216 = 3LL;
	volatile int32_t t53 = 365;

    t53 = (x213^((x214>x215)<=x216));

    if (t53 != -127) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint64_t x217 = 36257578047576863LLU;
	int16_t x219 = -267;
	volatile int32_t x220 = 480803;
	volatile uint64_t t54 = 319964887LLU;

    t54 = (x217^((x218>x219)<=x220));

    if (t54 != 36257578047576862LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x222 = 2U;
	uint64_t t55 = 2084196723890952948LLU;

    t55 = (x221^((x222>x223)<=x224));

    if (t55 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x225 = INT64_MAX;
	volatile uint32_t x227 = UINT32_MAX;
	uint32_t x228 = UINT32_MAX;
	int64_t t56 = -356106333209LL;

    t56 = (x225^((x226>x227)<=x228));

    if (t56 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x229 = -1;
	volatile int16_t x230 = -1;
	static int32_t x231 = -1;
	int32_t x232 = -98;
	static int32_t t57 = -6;

    t57 = (x229^((x230>x231)<=x232));

    if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = INT64_MIN;
	volatile int16_t x234 = INT16_MAX;
	int32_t x235 = -1;
	static int64_t x236 = -1LL;
	int64_t t58 = INT64_MIN;

    t58 = (x233^((x234>x235)<=x236));

    if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x237 = INT32_MIN;
	int64_t x238 = INT64_MIN;
	volatile int16_t x239 = -9;
	volatile int16_t x240 = -1;
	int32_t t59 = INT32_MIN;

    t59 = (x237^((x238>x239)<=x240));

    if (t59 != INT32_MIN) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = -1;
	static volatile uint16_t x242 = 3322U;
	int32_t x243 = INT32_MIN;
	static int8_t x244 = INT8_MIN;

    t60 = (x241^((x242>x243)<=x244));

    if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x245 = UINT8_MAX;
	int16_t x246 = -1;
	volatile int64_t x248 = INT64_MIN;
	int32_t t61 = 12598851;

    t61 = (x245^((x246>x247)<=x248));

    if (t61 != 255) { NG(); } else { ; }
	
}

void f62(void) {
    	static int8_t x249 = INT8_MAX;
	int8_t x250 = INT8_MIN;
	int32_t x251 = INT32_MAX;
	int64_t x252 = -1LL;
	volatile int32_t t62 = 0;

    t62 = (x249^((x250>x251)<=x252));

    if (t62 != 127) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x255 = -1;
	int64_t t63 = -3LL;

    t63 = (x253^((x254>x255)<=x256));

    if (t63 != -2998964526LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x258 = INT8_MAX;
	uint8_t x260 = 5U;
	volatile uint64_t t64 = 23382714899383609LLU;

    t64 = (x257^((x258>x259)<=x260));

    if (t64 != 34838580094785076LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int64_t x261 = INT64_MIN;
	uint16_t x262 = UINT16_MAX;
	uint16_t x263 = 970U;
	int16_t x264 = -1;
	int64_t t65 = INT64_MIN;

    t65 = (x261^((x262>x263)<=x264));

    if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x265 = UINT64_MAX;
	int32_t x266 = INT32_MIN;
	int16_t x267 = INT16_MIN;
	static volatile int8_t x268 = INT8_MIN;

    t66 = (x265^((x266>x267)<=x268));

    if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x269 = -1;
	static int8_t x270 = -1;
	uint16_t x271 = 177U;
	int8_t x272 = INT8_MIN;
	volatile int32_t t67 = 1;

    t67 = (x269^((x270>x271)<=x272));

    if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x274 = INT16_MIN;
	int32_t x275 = INT32_MIN;
	uint64_t x276 = 8LLU;

    t68 = (x273^((x274>x275)<=x276));

    if (t68 != -67316552460768781LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x277 = 738438694454LLU;
	uint8_t x279 = 126U;
	static uint64_t x280 = 16252LLU;
	static volatile uint64_t t69 = 14695LLU;

    t69 = (x277^((x278>x279)<=x280));

    if (t69 != 738438694455LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = INT16_MAX;
	static volatile int64_t x282 = 15821351LL;
	int32_t x283 = 18940412;

    t70 = (x281^((x282>x283)<=x284));

    if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
    	static int16_t x286 = -1;
	int16_t x287 = INT16_MIN;
	static int8_t x288 = INT8_MIN;

    t71 = (x285^((x286>x287)<=x288));

    if (t71 != 201) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile uint64_t x290 = 569LLU;
	static int16_t x291 = -2918;
	int8_t x292 = INT8_MAX;
	volatile int32_t t72 = 214215;

    t72 = (x289^((x290>x291)<=x292));

    if (t72 != -339) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x293 = -1LL;
	static uint8_t x294 = 54U;
	volatile int32_t x295 = -1;
	static int64_t x296 = INT64_MAX;

    t73 = (x293^((x294>x295)<=x296));

    if (t73 != -2LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x297 = UINT64_MAX;
	volatile int16_t x298 = -9;
	volatile int8_t x299 = -1;
	int32_t x300 = -1;

    t74 = (x297^((x298>x299)<=x300));

    if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
    	static int16_t x301 = INT16_MIN;
	int16_t x302 = INT16_MIN;
	volatile uint64_t x304 = 12LLU;
	int32_t t75 = 604167;

    t75 = (x301^((x302>x303)<=x304));

    if (t75 != -32767) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = -1LL;
	uint64_t x306 = 74411LLU;
	int64_t t76 = -3868517LL;

    t76 = (x305^((x306>x307)<=x308));

    if (t76 != -2LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x309 = 2U;
	static uint32_t x310 = UINT32_MAX;
	int64_t x311 = -126LL;
	volatile uint32_t t77 = 8919652U;

    t77 = (x309^((x310>x311)<=x312));

    if (t77 != 3U) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x313 = -1;
	static int16_t x314 = INT16_MAX;
	volatile int16_t x315 = INT16_MAX;
	int8_t x316 = -1;
	int32_t t78 = -6194;

    t78 = (x313^((x314>x315)<=x316));

    if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile int32_t x317 = INT32_MIN;
	int64_t x318 = INT64_MIN;
	uint32_t x319 = UINT32_MAX;
	int32_t t79 = INT32_MIN;

    t79 = (x317^((x318>x319)<=x320));

    if (t79 != INT32_MIN) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile int32_t x321 = -1;
	int16_t x322 = 0;
	static int8_t x324 = -9;

    t80 = (x321^((x322>x323)<=x324));

    if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x325 = UINT64_MAX;
	static int64_t x326 = -3580733190179LL;
	uint32_t x328 = UINT32_MAX;
	uint64_t t81 = 1139LLU;

    t81 = (x325^((x326>x327)<=x328));

    if (t81 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x329 = INT8_MAX;
	static int8_t x330 = INT8_MIN;
	int8_t x331 = INT8_MIN;

    t82 = (x329^((x330>x331)<=x332));

    if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x333 = INT8_MIN;
	static uint64_t x334 = UINT64_MAX;
	int16_t x335 = -1;
	uint32_t x336 = 7650976U;
	volatile int32_t t83 = 122399799;

    t83 = (x333^((x334>x335)<=x336));

    if (t83 != -127) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int8_t x337 = INT8_MIN;
	uint32_t x338 = 0U;
	int16_t x339 = INT16_MIN;
	int64_t x340 = INT64_MIN;

    t84 = (x337^((x338>x339)<=x340));

    if (t84 != -128) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = -1LL;
	uint64_t x342 = 129072113LLU;
	int32_t x343 = -1;
	int8_t x344 = 0;
	volatile int64_t t85 = -4644LL;

    t85 = (x341^((x342>x343)<=x344));

    if (t85 != -2LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile int8_t x345 = -1;
	int16_t x346 = 2;
	int64_t x347 = INT64_MIN;
	volatile int64_t x348 = 0LL;

    t86 = (x345^((x346>x347)<=x348));

    if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x350 = INT8_MIN;
	int64_t x351 = INT64_MAX;
	uint16_t x352 = 49U;
	uint32_t t87 = 28897653U;

    t87 = (x349^((x350>x351)<=x352));

    if (t87 != 120U) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x353 = 116046659393LLU;
	static volatile uint64_t x354 = 74169144060369735LLU;
	int16_t x355 = INT16_MIN;
	int32_t x356 = INT32_MIN;
	volatile uint64_t t88 = 19400367522LLU;

    t88 = (x353^((x354>x355)<=x356));

    if (t88 != 116046659393LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x357 = -1;
	int32_t x358 = INT32_MIN;
	int64_t x359 = INT64_MIN;
	volatile int64_t x360 = INT64_MIN;

    t89 = (x357^((x358>x359)<=x360));

    if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x361 = -496264360411LL;
	uint8_t x362 = UINT8_MAX;
	int16_t x363 = -7392;
	int64_t x364 = -8773607029772LL;
	volatile int64_t t90 = 10103069123269261LL;

    t90 = (x361^((x362>x363)<=x364));

    if (t90 != -496264360411LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x365 = INT32_MIN;
	int32_t x366 = INT32_MIN;
	int16_t x367 = -24;
	int16_t x368 = INT16_MIN;

    t91 = (x365^((x366>x367)<=x368));

    if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x369 = 43801160U;
	int16_t x371 = INT16_MIN;
	int64_t x372 = INT64_MIN;
	volatile uint32_t t92 = 27135U;

    t92 = (x369^((x370>x371)<=x372));

    if (t92 != 43801160U) { NG(); } else { ; }
	
}

void f93(void) {
    	static int32_t x373 = 1;
	uint32_t x375 = UINT32_MAX;
	int64_t x376 = 477531LL;
	volatile int32_t t93 = -8;

    t93 = (x373^((x374>x375)<=x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x377 = UINT32_MAX;
	volatile int64_t x379 = INT64_MAX;
	int64_t x380 = INT64_MIN;
	static volatile uint32_t t94 = UINT32_MAX;

    t94 = (x377^((x378>x379)<=x380));

    if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
    	static int16_t x381 = -1;
	uint16_t x382 = 106U;
	int16_t x383 = -1;
	int8_t x384 = 3;
	int32_t t95 = 1021826636;

    t95 = (x381^((x382>x383)<=x384));

    if (t95 != -2) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x385 = 10;
	int32_t x386 = -7;
	uint8_t x387 = 2U;
	uint32_t x388 = 9U;
	volatile int32_t t96 = -364393;

    t96 = (x385^((x386>x387)<=x388));

    if (t96 != 11) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x389 = -16267;
	volatile int32_t x391 = INT32_MIN;
	volatile int8_t x392 = INT8_MIN;
	volatile int32_t t97 = -755721;

    t97 = (x389^((x390>x391)<=x392));

    if (t97 != -16267) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint8_t x393 = UINT8_MAX;
	uint8_t x394 = UINT8_MAX;
	static volatile int16_t x395 = -307;
	int64_t x396 = INT64_MIN;

    t98 = (x393^((x394>x395)<=x396));

    if (t98 != 255) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint32_t x397 = 4999U;
	int16_t x398 = INT16_MAX;
	int64_t x399 = -1LL;
	static int8_t x400 = -7;
	volatile uint32_t t99 = 30200315U;

    t99 = (x397^((x398>x399)<=x400));

    if (t99 != 4999U) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int16_t x402 = INT16_MIN;
	static int16_t x403 = 6095;
	int64_t x404 = INT64_MIN;
	static volatile int64_t t100 = -3705259LL;

    t100 = (x401^((x402>x403)<=x404));

    if (t100 != -3432LL) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x405 = INT8_MAX;
	int8_t x407 = INT8_MIN;
	static int32_t x408 = INT32_MIN;
	static int32_t t101 = 15777318;

    t101 = (x405^((x406>x407)<=x408));

    if (t101 != 127) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x409 = INT16_MIN;
	int8_t x410 = 2;
	static volatile int32_t x411 = -2330734;
	static volatile int64_t x412 = INT64_MIN;
	static volatile int32_t t102 = -113610;

    t102 = (x409^((x410>x411)<=x412));

    if (t102 != -32768) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x413 = -43362LL;
	static volatile int16_t x414 = INT16_MIN;
	uint64_t x415 = 10969811LLU;
	uint64_t x416 = 4LLU;
	volatile int64_t t103 = -11148840769193184LL;

    t103 = (x413^((x414>x415)<=x416));

    if (t103 != -43361LL) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x417 = -549LL;
	uint8_t x419 = 17U;
	int64_t x420 = -1LL;
	volatile int64_t t104 = -112435LL;

    t104 = (x417^((x418>x419)<=x420));

    if (t104 != -549LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint64_t x421 = UINT64_MAX;
	int8_t x422 = -1;
	int16_t x424 = INT16_MIN;

    t105 = (x421^((x422>x423)<=x424));

    if (t105 != UINT64_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x425 = -36;
	volatile int8_t x426 = INT8_MIN;
	volatile uint8_t x427 = 30U;
	uint16_t x428 = 123U;
	int32_t t106 = -1376990;

    t106 = (x425^((x426>x427)<=x428));

    if (t106 != -35) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x430 = -1;
	int32_t x432 = -824509060;

    t107 = (x429^((x430>x431)<=x432));

    if (t107 != -1) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x434 = INT32_MIN;
	int64_t x436 = -3LL;
	int32_t t108 = 3541102;

    t108 = (x433^((x434>x435)<=x436));

    if (t108 != 4899) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x437 = INT16_MAX;
	int32_t x438 = 3;
	volatile int64_t x439 = INT64_MIN;
	volatile int16_t x440 = INT16_MIN;
	volatile int32_t t109 = 95490;

    t109 = (x437^((x438>x439)<=x440));

    if (t109 != 32767) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x441 = INT32_MIN;
	int16_t x442 = INT16_MIN;
	volatile uint8_t x443 = UINT8_MAX;
	static int16_t x444 = 5;
	volatile int32_t t110 = -27164321;

    t110 = (x441^((x442>x443)<=x444));

    if (t110 != -2147483647) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x445 = 72728980U;
	static int16_t x447 = -35;
	volatile uint64_t x448 = UINT64_MAX;

    t111 = (x445^((x446>x447)<=x448));

    if (t111 != 72728981U) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x449 = 20434U;
	uint32_t x450 = 8189U;
	static int64_t x451 = -1LL;
	static int64_t x452 = INT64_MAX;
	static int32_t t112 = 0;

    t112 = (x449^((x450>x451)<=x452));

    if (t112 != 20435) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x453 = -1LL;
	uint64_t x454 = 357839355836LLU;
	static volatile uint64_t x455 = 372114466LLU;
	volatile int32_t x456 = 320862;

    t113 = (x453^((x454>x455)<=x456));

    if (t113 != -2LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x457 = INT32_MAX;
	volatile int32_t x458 = INT32_MIN;
	int8_t x459 = -1;
	int32_t x460 = -1;
	int32_t t114 = INT32_MAX;

    t114 = (x457^((x458>x459)<=x460));

    if (t114 != INT32_MAX) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x461 = INT8_MIN;
	int64_t x462 = INT64_MAX;
	int8_t x463 = INT8_MIN;

    t115 = (x461^((x462>x463)<=x464));

    if (t115 != -127) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x465 = 7530852214551046LLU;
	int8_t x466 = INT8_MIN;
	static volatile uint64_t x467 = 570693831992952700LLU;
	int8_t x468 = -6;
	static uint64_t t116 = 3573332324387569971LLU;

    t116 = (x465^((x466>x467)<=x468));

    if (t116 != 7530852214551046LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x469 = 888U;
	int16_t x470 = -1;
	uint16_t x471 = 1U;
	int64_t x472 = INT64_MAX;
	volatile int32_t t117 = 219844763;

    t117 = (x469^((x470>x471)<=x472));

    if (t117 != 889) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint64_t x473 = 599728702814966316LLU;
	int16_t x474 = INT16_MIN;
	int64_t x475 = INT64_MAX;
	uint64_t x476 = 11742LLU;
	volatile uint64_t t118 = 102968485218863LLU;

    t118 = (x473^((x474>x475)<=x476));

    if (t118 != 599728702814966317LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x477 = -1;
	int16_t x478 = INT16_MIN;
	uint8_t x479 = 3U;
	static int16_t x480 = -1;

    t119 = (x477^((x478>x479)<=x480));

    if (t119 != -1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x481 = 6;
	uint16_t x483 = 29919U;
	int64_t x484 = INT64_MAX;
	int32_t t120 = 21221;

    t120 = (x481^((x482>x483)<=x484));

    if (t120 != 7) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint16_t x485 = UINT16_MAX;
	static uint64_t x487 = 2LLU;
	uint16_t x488 = 10U;
	int32_t t121 = -7;

    t121 = (x485^((x486>x487)<=x488));

    if (t121 != 65534) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int16_t x489 = -1;
	int8_t x491 = INT8_MIN;
	int32_t t122 = -3886;

    t122 = (x489^((x490>x491)<=x492));

    if (t122 != -2) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x493 = 1;
	int8_t x494 = INT8_MIN;
	volatile uint16_t x496 = 9U;

    t123 = (x493^((x494>x495)<=x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x497 = -1;
	static uint64_t x498 = 15063LLU;
	volatile int64_t x499 = INT64_MIN;
	static volatile int32_t t124 = -40;

    t124 = (x497^((x498>x499)<=x500));

    if (t124 != -2) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x501 = -7369;
	static volatile uint8_t x502 = UINT8_MAX;
	static volatile int8_t x503 = INT8_MIN;
	volatile int32_t t125 = -82908;

    t125 = (x501^((x502>x503)<=x504));

    if (t125 != -7369) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x505 = -1;
	int32_t x506 = -1;
	volatile int16_t x507 = INT16_MIN;
	volatile int32_t t126 = 1574;

    t126 = (x505^((x506>x507)<=x508));

    if (t126 != -1) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint8_t x509 = UINT8_MAX;
	static int16_t x510 = INT16_MIN;
	uint16_t x511 = UINT16_MAX;
	volatile int32_t x512 = INT32_MIN;
	int32_t t127 = 903124935;

    t127 = (x509^((x510>x511)<=x512));

    if (t127 != 255) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x513 = 113U;
	int32_t x515 = INT32_MIN;
	static int32_t x516 = -1;

    t128 = (x513^((x514>x515)<=x516));

    if (t128 != 113) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int8_t x517 = INT8_MIN;
	int8_t x518 = -1;
	uint16_t x519 = 5192U;
	uint32_t x520 = UINT32_MAX;
	volatile int32_t t129 = -3936259;

    t129 = (x517^((x518>x519)<=x520));

    if (t129 != -127) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x521 = -1;
	int32_t x523 = -11374;
	int8_t x524 = 11;
	static volatile int32_t t130 = -132;

    t130 = (x521^((x522>x523)<=x524));

    if (t130 != -2) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x527 = INT64_MIN;
	int32_t x528 = -2;
	uint64_t t131 = UINT64_MAX;

    t131 = (x525^((x526>x527)<=x528));

    if (t131 != UINT64_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint16_t x529 = 775U;
	int16_t x531 = INT16_MAX;
	int32_t x532 = -1;
	int32_t t132 = -636;

    t132 = (x529^((x530>x531)<=x532));

    if (t132 != 775) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x533 = 17779966U;
	int8_t x534 = INT8_MAX;
	int64_t x535 = 3515501367LL;
	int16_t x536 = INT16_MAX;
	static volatile uint32_t t133 = 4077967U;

    t133 = (x533^((x534>x535)<=x536));

    if (t133 != 17779967U) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x538 = INT64_MAX;
	int64_t x539 = 27589579LL;
	static int32_t x540 = 1;

    t134 = (x537^((x538>x539)<=x540));

    if (t134 != -127) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x541 = 1495U;
	int8_t x543 = -1;
	volatile int64_t x544 = INT64_MAX;
	int32_t t135 = 39;

    t135 = (x541^((x542>x543)<=x544));

    if (t135 != 1494) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint16_t x545 = 3132U;
	uint16_t x546 = 15U;
	int32_t x547 = -1;
	int32_t x548 = INT32_MIN;
	int32_t t136 = 1;

    t136 = (x545^((x546>x547)<=x548));

    if (t136 != 3132) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x549 = -818544882LL;
	static int16_t x550 = INT16_MIN;
	int16_t x552 = -1;
	volatile int64_t t137 = 694759880907LL;

    t137 = (x549^((x550>x551)<=x552));

    if (t137 != -818544882LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x553 = INT16_MAX;
	int64_t x554 = INT64_MIN;
	int16_t x555 = INT16_MIN;
	static volatile int8_t x556 = -1;
	volatile int32_t t138 = -50471201;

    t138 = (x553^((x554>x555)<=x556));

    if (t138 != 32767) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x557 = 0;
	int64_t x558 = INT64_MIN;
	int16_t x559 = 0;
	int8_t x560 = 0;

    t139 = (x557^((x558>x559)<=x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int64_t x564 = 146LL;
	static volatile uint32_t t140 = 361763U;

    t140 = (x561^((x562>x563)<=x564));

    if (t140 != 57823U) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x566 = INT8_MIN;
	uint32_t x568 = UINT32_MAX;
	volatile int64_t t141 = 162LL;

    t141 = (x565^((x566>x567)<=x568));

    if (t141 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int8_t x569 = INT8_MAX;
	uint16_t x570 = 28168U;
	uint16_t x571 = 7U;
	uint32_t x572 = UINT32_MAX;
	volatile int32_t t142 = -611;

    t142 = (x569^((x570>x571)<=x572));

    if (t142 != 126) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x573 = -109734329LL;
	uint64_t x574 = UINT64_MAX;
	static uint64_t x575 = 182156702116630342LLU;
	int32_t x576 = -523419998;
	int64_t t143 = -36584169715LL;

    t143 = (x573^((x574>x575)<=x576));

    if (t143 != -109734329LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static int32_t x578 = INT32_MIN;
	int64_t x579 = -1LL;
	int8_t x580 = 18;
	int32_t t144 = -16;

    t144 = (x577^((x578>x579)<=x580));

    if (t144 != -32767) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x581 = 6412594028305LL;
	int16_t x582 = 14;
	static int16_t x583 = INT16_MIN;
	volatile int16_t x584 = INT16_MAX;
	int64_t t145 = 528011255LL;

    t145 = (x581^((x582>x583)<=x584));

    if (t145 != 6412594028304LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x586 = -1;
	volatile uint32_t x588 = 10304645U;
	uint32_t t146 = 0U;

    t146 = (x585^((x586>x587)<=x588));

    if (t146 != 303U) { NG(); } else { ; }
	
}

void f147(void) {
    	static int64_t x589 = INT64_MIN;
	int64_t x591 = INT64_MIN;

    t147 = (x589^((x590>x591)<=x592));

    if (t147 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x593 = INT32_MAX;
	uint16_t x594 = UINT16_MAX;
	static int32_t x596 = 0;
	int32_t t148 = INT32_MAX;

    t148 = (x593^((x594>x595)<=x596));

    if (t148 != INT32_MAX) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x597 = 786779LLU;
	int8_t x598 = INT8_MAX;
	int32_t x599 = -6890688;
	uint64_t t149 = 985511507670LLU;

    t149 = (x597^((x598>x599)<=x600));

    if (t149 != 786779LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x602 = 10U;
	static uint8_t x603 = 1U;
	volatile int8_t x604 = INT8_MIN;

    t150 = (x601^((x602>x603)<=x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x605 = 3834588U;
	uint64_t x606 = UINT64_MAX;
	int32_t x607 = INT32_MIN;
	volatile uint8_t x608 = 0U;
	uint32_t t151 = 33680349U;

    t151 = (x605^((x606>x607)<=x608));

    if (t151 != 3834588U) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x609 = 194U;
	int16_t x610 = INT16_MAX;
	uint8_t x611 = UINT8_MAX;
	volatile int16_t x612 = INT16_MIN;
	volatile int32_t t152 = 0;

    t152 = (x609^((x610>x611)<=x612));

    if (t152 != 194) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint8_t x613 = UINT8_MAX;
	uint8_t x614 = 13U;

    t153 = (x613^((x614>x615)<=x616));

    if (t153 != 254) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x617 = -173499LL;
	int16_t x618 = INT16_MAX;
	int16_t x619 = -1;
	int64_t x620 = INT64_MIN;

    t154 = (x617^((x618>x619)<=x620));

    if (t154 != -173499LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x621 = 503U;
	volatile int32_t x623 = 0;
	uint16_t x624 = 0U;
	static uint32_t t155 = 5U;

    t155 = (x621^((x622>x623)<=x624));

    if (t155 != 502U) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint8_t x625 = UINT8_MAX;
	volatile int8_t x627 = INT8_MAX;
	int8_t x628 = 48;
	int32_t t156 = -196530132;

    t156 = (x625^((x626>x627)<=x628));

    if (t156 != 254) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x629 = 421796309U;
	static uint16_t x631 = 0U;
	uint8_t x632 = 0U;

    t157 = (x629^((x630>x631)<=x632));

    if (t157 != 421796309U) { NG(); } else { ; }
	
}

void f158(void) {
    	static int64_t x633 = 6836024221080LL;
	static int16_t x635 = INT16_MIN;
	uint32_t x636 = 25190U;
	static volatile int64_t t158 = 95888747546078LL;

    t158 = (x633^((x634>x635)<=x636));

    if (t158 != 6836024221081LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x637 = 1418503U;
	int8_t x638 = INT8_MIN;
	volatile int32_t x639 = -1;
	int8_t x640 = -1;
	static volatile uint32_t t159 = 716027416U;

    t159 = (x637^((x638>x639)<=x640));

    if (t159 != 1418503U) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint8_t x642 = UINT8_MAX;
	volatile int8_t x643 = INT8_MAX;
	volatile uint64_t t160 = 21LLU;

    t160 = (x641^((x642>x643)<=x644));

    if (t160 != 97681644405LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x646 = 2709U;
	volatile int16_t x647 = 7102;
	int64_t x648 = INT64_MIN;

    t161 = (x645^((x646>x647)<=x648));

    if (t161 != -6246) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint8_t x649 = 5U;
	volatile int16_t x651 = INT16_MAX;
	uint16_t x652 = UINT16_MAX;
	int32_t t162 = 314026;

    t162 = (x649^((x650>x651)<=x652));

    if (t162 != 4) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x653 = 32407620862LLU;
	uint32_t x654 = 53U;
	uint16_t x656 = UINT16_MAX;
	volatile uint64_t t163 = 817LLU;

    t163 = (x653^((x654>x655)<=x656));

    if (t163 != 32407620863LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x657 = INT8_MAX;
	volatile uint64_t x659 = 1086064765510324163LLU;
	int8_t x660 = -1;
	static int32_t t164 = 191566529;

    t164 = (x657^((x658>x659)<=x660));

    if (t164 != 127) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = INT64_MIN;
	int16_t x663 = INT16_MIN;
	int16_t x664 = INT16_MAX;
	static volatile int64_t t165 = 20LL;

    t165 = (x661^((x662>x663)<=x664));

    if (t165 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x665 = UINT16_MAX;
	static int8_t x666 = -1;
	int64_t x667 = INT64_MAX;
	int32_t x668 = -1;
	volatile int32_t t166 = 1;

    t166 = (x665^((x666>x667)<=x668));

    if (t166 != 65535) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x669 = -115;
	uint8_t x670 = UINT8_MAX;
	uint8_t x671 = 1U;
	static uint16_t x672 = 1U;
	int32_t t167 = -8919311;

    t167 = (x669^((x670>x671)<=x672));

    if (t167 != -116) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x673 = 54;
	int64_t x674 = -1913264LL;
	static int16_t x675 = -1;
	uint16_t x676 = UINT16_MAX;
	static int32_t t168 = 7;

    t168 = (x673^((x674>x675)<=x676));

    if (t168 != 55) { NG(); } else { ; }
	
}

void f169(void) {
    	static int64_t x678 = 7629LL;
	int16_t x679 = INT16_MIN;
	int64_t t169 = INT64_MAX;

    t169 = (x677^((x678>x679)<=x680));

    if (t169 != INT64_MAX) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x683 = INT8_MIN;
	uint32_t x684 = 122U;
	int32_t t170 = 1;

    t170 = (x681^((x682>x683)<=x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x685 = 1U;
	volatile int32_t x687 = INT32_MIN;
	uint16_t x688 = 952U;
	volatile int32_t t171 = 23464;

    t171 = (x685^((x686>x687)<=x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x689 = INT64_MIN;
	static uint64_t x690 = 85400LLU;
	volatile int32_t x692 = INT32_MIN;
	static int64_t t172 = INT64_MIN;

    t172 = (x689^((x690>x691)<=x692));

    if (t172 != INT64_MIN) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x695 = 1U;
	int64_t x696 = INT64_MAX;
	int64_t t173 = -52956633551164LL;

    t173 = (x693^((x694>x695)<=x696));

    if (t173 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x697 = INT64_MIN;
	static int64_t x698 = INT64_MAX;
	int32_t x699 = INT32_MIN;
	int16_t x700 = INT16_MIN;
	static int64_t t174 = INT64_MIN;

    t174 = (x697^((x698>x699)<=x700));

    if (t174 != INT64_MIN) { NG(); } else { ; }
	
}

void f175(void) {
    	static int16_t x701 = -1;
	int8_t x702 = -1;
	int16_t x704 = 0;

    t175 = (x701^((x702>x703)<=x704));

    if (t175 != -1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x705 = 0U;
	uint8_t x706 = UINT8_MAX;
	int32_t x708 = INT32_MIN;
	int32_t t176 = 887166251;

    t176 = (x705^((x706>x707)<=x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x710 = 1;
	int32_t x711 = 14016;
	uint64_t x712 = 1842752LLU;
	static volatile int32_t t177 = 56993387;

    t177 = (x709^((x710>x711)<=x712));

    if (t177 != 65402) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint64_t x713 = 23LLU;
	volatile uint8_t x714 = UINT8_MAX;
	static uint16_t x715 = 1U;
	uint32_t x716 = UINT32_MAX;
	volatile uint64_t t178 = 25602626LLU;

    t178 = (x713^((x714>x715)<=x716));

    if (t178 != 22LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x717 = INT16_MAX;
	uint32_t x718 = 55063722U;
	int64_t x719 = INT64_MAX;
	int32_t x720 = 39415557;
	volatile int32_t t179 = -7;

    t179 = (x717^((x718>x719)<=x720));

    if (t179 != 32766) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile int8_t x721 = INT8_MIN;
	volatile int32_t x722 = 0;
	int16_t x724 = INT16_MIN;
	int32_t t180 = -11006984;

    t180 = (x721^((x722>x723)<=x724));

    if (t180 != -128) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint64_t x725 = 236020LLU;
	uint64_t x726 = 2387587400213174497LLU;
	static volatile uint32_t x727 = 6U;
	static int16_t x728 = INT16_MIN;

    t181 = (x725^((x726>x727)<=x728));

    if (t181 != 236020LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x729 = INT8_MAX;
	uint64_t x730 = UINT64_MAX;
	volatile uint16_t x731 = UINT16_MAX;
	int64_t x732 = INT64_MIN;
	int32_t t182 = -148455;

    t182 = (x729^((x730>x731)<=x732));

    if (t182 != 127) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x733 = -3873LL;
	uint32_t x734 = UINT32_MAX;
	static uint32_t x735 = UINT32_MAX;
	int8_t x736 = -1;

    t183 = (x733^((x734>x735)<=x736));

    if (t183 != -3873LL) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int32_t x737 = INT32_MIN;
	int64_t x738 = INT64_MIN;
	static int8_t x739 = INT8_MIN;
	static int16_t x740 = -151;
	int32_t t184 = INT32_MIN;

    t184 = (x737^((x738>x739)<=x740));

    if (t184 != INT32_MIN) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x741 = INT32_MIN;
	static volatile int32_t x743 = INT32_MIN;
	int32_t x744 = 107514235;
	int32_t t185 = 1;

    t185 = (x741^((x742>x743)<=x744));

    if (t185 != -2147483647) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x745 = -202;
	static uint32_t x746 = UINT32_MAX;
	static int8_t x747 = INT8_MIN;
	static volatile int32_t t186 = 242729227;

    t186 = (x745^((x746>x747)<=x748));

    if (t186 != -202) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x749 = INT32_MIN;
	int32_t x750 = INT32_MIN;
	int16_t x751 = INT16_MAX;
	static uint64_t x752 = UINT64_MAX;

    t187 = (x749^((x750>x751)<=x752));

    if (t187 != -2147483647) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x753 = -26;
	int64_t x755 = -1LL;
	volatile uint64_t x756 = 239LLU;
	static int32_t t188 = -3;

    t188 = (x753^((x754>x755)<=x756));

    if (t188 != -25) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x757 = 1959U;
	static volatile int16_t x758 = INT16_MIN;
	int32_t x759 = -433059007;
	static uint32_t x760 = UINT32_MAX;
	static volatile uint32_t t189 = 2658U;

    t189 = (x757^((x758>x759)<=x760));

    if (t189 != 1958U) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x761 = 151546185U;
	int32_t x762 = INT32_MIN;
	int64_t x763 = 6301218790LL;
	uint64_t x764 = UINT64_MAX;
	uint32_t t190 = 2U;

    t190 = (x761^((x762>x763)<=x764));

    if (t190 != 151546184U) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x765 = INT8_MAX;
	uint16_t x766 = 3651U;
	static volatile uint8_t x767 = UINT8_MAX;
	int32_t x768 = INT32_MIN;
	volatile int32_t t191 = 231713664;

    t191 = (x765^((x766>x767)<=x768));

    if (t191 != 127) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x769 = UINT16_MAX;
	uint8_t x771 = 61U;
	static int32_t x772 = INT32_MIN;
	volatile int32_t t192 = -7834;

    t192 = (x769^((x770>x771)<=x772));

    if (t192 != 65535) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x773 = INT32_MIN;
	volatile uint8_t x774 = UINT8_MAX;
	uint16_t x775 = 660U;
	uint32_t x776 = UINT32_MAX;
	int32_t t193 = 123;

    t193 = (x773^((x774>x775)<=x776));

    if (t193 != -2147483647) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint16_t x777 = UINT16_MAX;
	volatile int32_t x778 = -347115506;
	volatile int32_t t194 = -149900405;

    t194 = (x777^((x778>x779)<=x780));

    if (t194 != 65534) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int32_t x781 = INT32_MIN;
	static volatile int16_t x784 = 27;
	static volatile int32_t t195 = -25672010;

    t195 = (x781^((x782>x783)<=x784));

    if (t195 != -2147483647) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int8_t x785 = INT8_MIN;
	static int64_t x786 = INT64_MIN;
	int8_t x787 = 9;
	int16_t x788 = 296;

    t196 = (x785^((x786>x787)<=x788));

    if (t196 != -127) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x789 = -3377;
	static volatile uint32_t x790 = UINT32_MAX;
	int32_t x792 = 506663357;

    t197 = (x789^((x790>x791)<=x792));

    if (t197 != -3378) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x793 = -1;
	int8_t x794 = -30;
	static int8_t x796 = INT8_MIN;
	volatile int32_t t198 = -158379;

    t198 = (x793^((x794>x795)<=x796));

    if (t198 != -1) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x797 = INT8_MIN;
	uint16_t x798 = 786U;
	volatile int32_t x799 = INT32_MIN;
	int64_t x800 = 3170LL;
	volatile int32_t t199 = -36;

    t199 = (x797^((x798>x799)<=x800));

    if (t199 != -127) { NG(); } else { ; }
	
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

