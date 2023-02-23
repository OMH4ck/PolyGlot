
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

int32_t x1 = INT32_MIN;
uint64_t t1 = 80848687LLU;
int64_t x11 = -1LL;
int16_t x12 = -1;
int8_t x21 = -1;
uint32_t x24 = UINT32_MAX;
static volatile int16_t x36 = INT16_MAX;
int32_t x44 = 143415225;
static volatile int32_t x47 = 197493;
volatile int64_t t11 = -730041515LL;
int64_t x49 = INT64_MAX;
int8_t x56 = 7;
static uint8_t x59 = UINT8_MAX;
static uint8_t x64 = UINT8_MAX;
volatile int64_t t15 = -1023LL;
int32_t x66 = 136103;
uint32_t x67 = UINT32_MAX;
uint32_t x68 = 952U;
uint64_t t17 = 127311474583268459LLU;
static int8_t x75 = INT8_MIN;
volatile int8_t x80 = -1;
static volatile int16_t x81 = INT16_MIN;
uint16_t x112 = 44U;
int32_t x114 = -16;
int8_t x116 = INT8_MIN;
uint8_t x130 = 37U;
uint32_t x131 = UINT32_MAX;
int8_t x133 = -59;
int8_t x135 = INT8_MIN;
int64_t x136 = 12116047LL;
volatile int32_t t30 = -57546;
static volatile int8_t x142 = -4;
volatile uint16_t x145 = 57U;
int64_t x152 = -79LL;
uint8_t x153 = 7U;
volatile int64_t t38 = -17LL;
static int16_t x173 = INT16_MIN;
volatile int8_t x183 = INT8_MIN;
volatile int8_t x190 = INT8_MIN;
uint8_t x192 = 41U;
volatile int8_t x194 = INT8_MIN;
uint64_t x196 = UINT64_MAX;
uint64_t t42 = 655042472LLU;
int8_t x197 = INT8_MIN;
uint8_t x202 = 2U;
volatile uint8_t x204 = 7U;
static uint32_t x206 = 2933490U;
int8_t x208 = -1;
uint16_t x209 = UINT16_MAX;
uint64_t x218 = 2279548LLU;
static int8_t x226 = -48;
static int32_t x229 = INT32_MAX;
uint32_t x241 = UINT32_MAX;
volatile int64_t t54 = 22775LL;
uint16_t x248 = 762U;
int16_t x256 = INT16_MIN;
uint64_t x258 = 4046LLU;
static int16_t x260 = INT16_MIN;
uint8_t x261 = 2U;
uint16_t x270 = 1U;
int8_t x278 = -1;
static int8_t x289 = -1;
int8_t x291 = INT8_MIN;
static int32_t x293 = INT32_MIN;
static int8_t x298 = INT8_MIN;
volatile int64_t x313 = INT64_MIN;
uint64_t x315 = 16737569176708757LLU;
uint16_t x317 = 706U;
int16_t x318 = -2;
static int32_t t70 = -14639;
int16_t x332 = 7885;
uint32_t x337 = 1U;
static uint32_t t75 = 3303U;
uint32_t x347 = UINT32_MAX;
int32_t x362 = INT32_MIN;
uint32_t x367 = 1U;
int16_t x373 = INT16_MIN;
int32_t x375 = INT32_MIN;
int32_t t82 = 18775;
int32_t x381 = 1;
int32_t x382 = 12;
uint32_t t83 = 17U;
int16_t x391 = INT16_MAX;
int32_t t85 = -6176;
uint64_t t86 = 278800357LLU;
uint64_t t87 = 255551737262077572LLU;
volatile int16_t x415 = 3;
uint8_t x416 = 0U;
static volatile int64_t x419 = 743211929046261474LL;
int32_t x421 = INT32_MIN;
static int64_t t92 = -7769594LL;
uint32_t x426 = 91215U;
static int64_t x436 = -70742208LL;
int64_t x447 = 5LL;
int32_t x448 = INT32_MAX;
volatile uint64_t t99 = 31816769LLU;
int64_t x453 = -9800LL;
int16_t x455 = -1;
int64_t x458 = 109LL;
int64_t x464 = INT64_MAX;
int64_t t102 = 969048801119419832LL;
int64_t t103 = -664118083214028169LL;
int16_t x471 = INT16_MIN;
int32_t x474 = INT32_MIN;
static uint8_t x477 = 26U;
static volatile int32_t x486 = INT32_MIN;
volatile uint8_t x487 = 9U;
uint64_t x488 = UINT64_MAX;
int8_t x502 = INT8_MAX;
static uint16_t x503 = UINT16_MAX;
volatile int16_t x509 = INT16_MAX;
uint16_t x510 = 1U;
volatile uint8_t x511 = UINT8_MAX;
volatile uint64_t x519 = UINT64_MAX;
volatile uint64_t t115 = 431LLU;
int16_t x535 = -1;
volatile int64_t t119 = 58494366303258639LL;
uint16_t x539 = UINT16_MAX;
volatile int64_t x562 = -865976LL;
uint64_t x568 = 30243LLU;
static uint16_t x584 = UINT16_MAX;
int8_t x585 = INT8_MIN;
int64_t x592 = INT64_MIN;
uint16_t x596 = 19793U;
volatile uint64_t t134 = 208615546561341986LLU;
static volatile int8_t x601 = INT8_MAX;
uint64_t x603 = 972798898LLU;
volatile uint16_t x605 = 2743U;
int16_t x612 = INT16_MIN;
uint8_t x617 = 123U;
static int64_t x620 = -284860772124LL;
int64_t t139 = -46184174243583LL;
int32_t t140 = -23;
uint64_t x630 = 40810316502LLU;
int8_t x641 = 0;
int64_t x642 = INT64_MIN;
uint16_t x643 = UINT16_MAX;
static int16_t x644 = INT16_MIN;
int64_t t145 = -5985LL;
int32_t x653 = 373659302;
int16_t x654 = INT16_MAX;
static uint64_t x672 = 6495LLU;
volatile uint64_t t152 = 418153222760208223LLU;
static int8_t x677 = 42;
uint8_t x683 = UINT8_MAX;
int8_t x685 = -57;
int8_t x686 = INT8_MAX;
static int64_t x687 = -1LL;
volatile int64_t x689 = INT64_MIN;
uint64_t t158 = 280100047LLU;
uint32_t x699 = UINT32_MAX;
int16_t x711 = 1;
static int64_t x714 = INT64_MIN;
volatile int16_t x718 = INT16_MIN;
uint64_t x719 = UINT64_MAX;
volatile uint8_t x721 = UINT8_MAX;
int8_t x738 = 4;
volatile int16_t x740 = INT16_MIN;
int32_t x747 = -601;
int32_t x751 = INT32_MIN;
volatile int64_t x763 = INT64_MIN;
static uint16_t x776 = 9U;
uint64_t x780 = 1464235218605623042LLU;
volatile int32_t x781 = INT32_MIN;
int64_t x784 = -1LL;
volatile int64_t t178 = -3445514LL;
uint16_t x785 = 4132U;
uint16_t x787 = 134U;
static int16_t x790 = INT16_MAX;
static volatile int32_t t180 = -1;
uint32_t x794 = UINT32_MAX;
volatile uint8_t x799 = 14U;
int64_t x808 = -1LL;
volatile int64_t t186 = 10640609LL;
int8_t x825 = 1;
volatile int16_t x829 = INT16_MAX;
int16_t x831 = INT16_MIN;
int16_t x834 = -1;
uint64_t x835 = UINT64_MAX;
int8_t x839 = INT8_MIN;
int64_t x842 = INT64_MIN;
uint32_t x847 = 42322U;
volatile int64_t t192 = 61LL;
static int32_t x849 = -1;
static int64_t x852 = 8761815535895LL;
volatile int64_t t193 = -427944437997LL;
uint64_t x858 = 94LLU;
int16_t x859 = INT16_MIN;
uint64_t x863 = 826344096353219254LLU;
uint16_t x866 = 10U;
int64_t x879 = -1LL;


void f0(void) {
    	uint64_t x2 = 105971LLU;
	int8_t x3 = 29;
	static int64_t x4 = INT64_MAX;
	volatile uint64_t t0 = 8966LLU;

    t0 = (x1+((x2/x3)^x4));

    if (t0 != 9223372034707288505LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x5 = -938LL;
	int32_t x6 = 133087810;
	uint64_t x7 = 132857982LLU;
	int16_t x8 = INT16_MIN;

    t1 = (x5+((x6/x7)^x8));

    if (t1 != 18446744073709517911LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MIN;
	uint16_t x10 = UINT16_MAX;
	volatile int64_t t2 = 653592004792999LL;

    t2 = (x9+((x10/x11)^x12));

    if (t2 != 65406LL) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint32_t x13 = 3732071U;
	int8_t x14 = INT8_MAX;
	uint64_t x15 = UINT64_MAX;
	static uint64_t x16 = 222689702LLU;
	volatile uint64_t t3 = 7987158356526LLU;

    t3 = (x13+((x14/x15)^x16));

    if (t3 != 226421773LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MIN;
	int32_t x18 = INT32_MIN;
	int8_t x19 = -57;
	volatile uint64_t x20 = 30LLU;
	uint64_t t4 = 8119LLU;

    t4 = (x17+((x18/x19)^x20));

    if (t4 != 37642385LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x22 = INT32_MAX;
	volatile int8_t x23 = -1;
	uint32_t t5 = 1U;

    t5 = (x21+((x22/x23)^x24));

    if (t5 != 2147483645U) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = -2992;
	static uint32_t x26 = 25165U;
	int64_t x27 = -1LL;
	int64_t x28 = -1LL;
	volatile int64_t t6 = 101959LL;

    t6 = (x25+((x26/x27)^x28));

    if (t6 != 22172LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x29 = UINT8_MAX;
	int16_t x30 = 0;
	volatile int64_t x31 = INT64_MAX;
	static uint8_t x32 = 63U;
	int64_t t7 = -148493244349427LL;

    t7 = (x29+((x30/x31)^x32));

    if (t7 != 318LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = -62749311LL;
	static volatile int32_t x34 = INT32_MIN;
	volatile uint16_t x35 = 677U;
	int64_t t8 = 246495LL;

    t8 = (x33+((x34/x35)^x36));

    if (t8 != -65901478LL) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint16_t x37 = UINT16_MAX;
	uint8_t x38 = 0U;
	int64_t x39 = INT64_MIN;
	uint64_t x40 = 5982569LLU;
	static volatile uint64_t t9 = 1LLU;

    t9 = (x37+((x38/x39)^x40));

    if (t9 != 6048104LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x41 = UINT64_MAX;
	int32_t x42 = 13072;
	int16_t x43 = INT16_MIN;
	volatile uint64_t t10 = 3283278638960293LLU;

    t10 = (x41+((x42/x43)^x44));

    if (t10 != 143415224LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = 1;
	static uint16_t x46 = UINT16_MAX;
	int64_t x48 = INT64_MIN;

    t11 = (x45+((x46/x47)^x48));

    if (t11 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x50 = INT16_MIN;
	uint64_t x51 = UINT64_MAX;
	volatile int8_t x52 = INT8_MIN;
	volatile uint64_t t12 = 2081925720LLU;

    t12 = (x49+((x50/x51)^x52));

    if (t12 != 9223372036854775679LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x53 = UINT16_MAX;
	volatile int64_t x54 = -686061109352LL;
	int16_t x55 = INT16_MAX;
	int64_t t13 = 410350LL;

    t13 = (x53+((x54/x55)^x56));

    if (t13 != -20872032LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x57 = UINT8_MAX;
	static int16_t x58 = -2829;
	int16_t x60 = INT16_MAX;
	int32_t t14 = -3549;

    t14 = (x57+((x58/x59)^x60));

    if (t14 != -32503) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = -114100784944859LL;
	int16_t x62 = INT16_MAX;
	int64_t x63 = -76857641092378694LL;

    t15 = (x61+((x62/x63)^x64));

    if (t15 != -114100784944604LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = INT32_MIN;
	volatile uint32_t t16 = 86212U;

    t16 = (x65+((x66/x67)^x68));

    if (t16 != 2147484600U) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint8_t x69 = UINT8_MAX;
	uint32_t x70 = UINT32_MAX;
	int16_t x71 = -1;
	volatile uint64_t x72 = 6430299845203LLU;

    t17 = (x69+((x70/x71)^x72));

    if (t17 != 6430299845457LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int64_t x73 = INT64_MIN;
	int8_t x74 = 37;
	int16_t x76 = 1;
	static volatile int64_t t18 = 508229LL;

    t18 = (x73+((x74/x75)^x76));

    if (t18 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = -15818LL;
	uint32_t x78 = 4784U;
	int32_t x79 = 245;
	int64_t t19 = 15506479418389210LL;

    t19 = (x77+((x78/x79)^x80));

    if (t19 != 4294951458LL) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x82 = INT8_MIN;
	int64_t x83 = INT64_MIN;
	int16_t x84 = -1;
	volatile int64_t t20 = 13LL;

    t20 = (x81+((x82/x83)^x84));

    if (t20 != -32769LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x85 = -1087363862166092038LL;
	volatile uint16_t x86 = UINT16_MAX;
	int32_t x87 = 606;
	int64_t x88 = 69947987215259LL;
	volatile int64_t t21 = -1616681LL;

    t21 = (x85+((x86/x87)^x88));

    if (t21 != -1087293914178876687LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x93 = INT16_MIN;
	uint32_t x94 = 90361U;
	static uint16_t x95 = UINT16_MAX;
	static uint16_t x96 = 7781U;
	uint32_t t22 = 25U;

    t22 = (x93+((x94/x95)^x96));

    if (t22 != 4294942308U) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x105 = 3341U;
	int64_t x106 = INT64_MIN;
	static volatile int8_t x107 = INT8_MAX;
	uint16_t x108 = 2U;
	volatile int64_t t23 = -154LL;

    t23 = (x105+((x106/x107)^x108));

    if (t23 != -72624976668144502LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x109 = INT32_MIN;
	int64_t x110 = -1LL;
	volatile int32_t x111 = -1;
	static volatile int64_t t24 = -443054LL;

    t24 = (x109+((x110/x111)^x112));

    if (t24 != -2147483603LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint8_t x113 = 82U;
	uint16_t x115 = UINT16_MAX;
	volatile int32_t t25 = 1884124;

    t25 = (x113+((x114/x115)^x116));

    if (t25 != -46) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x117 = INT16_MAX;
	volatile int32_t x118 = -12396;
	int32_t x119 = 581386419;
	static uint16_t x120 = 3877U;
	static volatile int32_t t26 = -23;

    t26 = (x117+((x118/x119)^x120));

    if (t26 != 36644) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x125 = -1;
	int8_t x126 = -1;
	int64_t x127 = INT64_MAX;
	int16_t x128 = -13987;
	int64_t t27 = -275684644208998LL;

    t27 = (x125+((x126/x127)^x128));

    if (t27 != -13988LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x129 = INT32_MIN;
	int8_t x132 = -1;
	volatile uint32_t t28 = 10635159U;

    t28 = (x129+((x130/x131)^x132));

    if (t28 != 2147483647U) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int8_t x134 = INT8_MIN;
	volatile int64_t t29 = 7468LL;

    t29 = (x133+((x134/x135)^x136));

    if (t29 != 12115987LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x137 = 42;
	int16_t x138 = 2;
	uint8_t x139 = 114U;
	uint16_t x140 = 496U;

    t30 = (x137+((x138/x139)^x140));

    if (t30 != 538) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x141 = 4396210496989LLU;
	int64_t x143 = INT64_MAX;
	static int32_t x144 = INT32_MAX;
	uint64_t t31 = 43LLU;

    t31 = (x141+((x142/x143)^x144));

    if (t31 != 4398357980636LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x146 = INT8_MAX;
	int64_t x147 = INT64_MIN;
	int8_t x148 = INT8_MIN;
	volatile int64_t t32 = 1LL;

    t32 = (x145+((x146/x147)^x148));

    if (t32 != -71LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x149 = INT8_MIN;
	int8_t x150 = -1;
	int8_t x151 = -11;
	static int64_t t33 = -31047335LL;

    t33 = (x149+((x150/x151)^x152));

    if (t33 != -207LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int64_t x154 = -985892128672028042LL;
	int16_t x155 = -3;
	uint8_t x156 = 2U;
	int64_t t34 = 829315772LL;

    t34 = (x153+((x154/x155)^x156));

    if (t34 != 328630709557342689LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x157 = UINT16_MAX;
	static int8_t x158 = INT8_MIN;
	int16_t x159 = -1;
	static volatile int16_t x160 = 1256;
	static volatile int32_t t35 = -442859386;

    t35 = (x157+((x158/x159)^x160));

    if (t35 != 66663) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x161 = 1022U;
	volatile int16_t x162 = -1;
	static int16_t x163 = INT16_MIN;
	static volatile uint32_t x164 = 506007527U;
	static volatile uint32_t t36 = 216192U;

    t36 = (x161+((x162/x163)^x164));

    if (t36 != 506008549U) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x165 = 11U;
	static int8_t x166 = INT8_MAX;
	volatile int64_t x167 = 1004604LL;
	uint64_t x168 = 8098837440LLU;
	uint64_t t37 = 234740591862831LLU;

    t37 = (x165+((x166/x167)^x168));

    if (t37 != 8098837451LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x169 = 64U;
	volatile uint8_t x170 = 7U;
	int64_t x171 = 750297669LL;
	int16_t x172 = INT16_MAX;

    t38 = (x169+((x170/x171)^x172));

    if (t38 != 32831LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x174 = INT8_MIN;
	uint16_t x175 = 4351U;
	int16_t x176 = -8;
	volatile int32_t t39 = 434198;

    t39 = (x173+((x174/x175)^x176));

    if (t39 != -32776) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x181 = -1;
	static int16_t x182 = INT16_MAX;
	uint64_t x184 = 8LLU;
	volatile uint64_t t40 = 17118177985LLU;

    t40 = (x181+((x182/x183)^x184));

    if (t40 != 18446744073709551368LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x189 = INT64_MIN;
	static int8_t x191 = -1;
	volatile int64_t t41 = -23054218533LL;

    t41 = (x189+((x190/x191)^x192));

    if (t41 != -9223372036854775639LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x193 = UINT64_MAX;
	volatile uint8_t x195 = 1U;

    t42 = (x193+((x194/x195)^x196));

    if (t42 != 126LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x198 = 59826609852743LL;
	static int8_t x199 = INT8_MAX;
	volatile uint8_t x200 = 4U;
	volatile int64_t t43 = 114876250326LL;

    t43 = (x197+((x198/x199)^x200));

    if (t43 != 471075668007LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x201 = -1LL;
	int16_t x203 = INT16_MIN;
	int64_t t44 = -998LL;

    t44 = (x201+((x202/x203)^x204));

    if (t44 != 6LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x205 = INT8_MIN;
	static int32_t x207 = -1;
	uint32_t t45 = 2U;

    t45 = (x205+((x206/x207)^x208));

    if (t45 != 4294967167U) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x210 = 12;
	int16_t x211 = -19;
	int64_t x212 = -1771167229494LL;
	static volatile int64_t t46 = 21967862337589LL;

    t46 = (x209+((x210/x211)^x212));

    if (t46 != -1771167163959LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x213 = INT16_MAX;
	int64_t x214 = INT64_MIN;
	volatile uint64_t x215 = 3867993461662042133LLU;
	static uint64_t x216 = UINT64_MAX;
	uint64_t t47 = 473790LLU;

    t47 = (x213+((x214/x215)^x216));

    if (t47 != 32764LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x217 = 6864;
	int8_t x219 = 2;
	volatile int64_t x220 = 428335LL;
	volatile uint64_t t48 = 1856214139154392152LLU;

    t48 = (x217+((x218/x219)^x220));

    if (t48 != 1574881LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x221 = 0U;
	uint8_t x222 = 124U;
	int32_t x223 = -1;
	int16_t x224 = -1;
	volatile int32_t t49 = 1700345;

    t49 = (x221+((x222/x223)^x224));

    if (t49 != 123) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x225 = 4;
	int32_t x227 = 21261;
	uint64_t x228 = UINT64_MAX;
	uint64_t t50 = 411LLU;

    t50 = (x225+((x226/x227)^x228));

    if (t50 != 3LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint32_t x230 = 21969U;
	volatile int16_t x231 = -3870;
	static int8_t x232 = -1;
	volatile uint32_t t51 = 2690054U;

    t51 = (x229+((x230/x231)^x232));

    if (t51 != 2147483646U) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x233 = 25355817;
	uint16_t x234 = 31757U;
	volatile int64_t x235 = INT64_MAX;
	int16_t x236 = INT16_MAX;
	int64_t t52 = -298294581393675LL;

    t52 = (x233+((x234/x235)^x236));

    if (t52 != 25388584LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x237 = INT64_MIN;
	int16_t x238 = INT16_MAX;
	int8_t x239 = -7;
	int32_t x240 = -1;
	volatile int64_t t53 = -97770689300LL;

    t53 = (x237+((x238/x239)^x240));

    if (t53 != -9223372036854771128LL) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint8_t x242 = UINT8_MAX;
	int64_t x243 = INT64_MAX;
	uint16_t x244 = UINT16_MAX;

    t54 = (x241+((x242/x243)^x244));

    if (t54 != 4295032830LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x245 = 1080631413U;
	volatile uint16_t x246 = UINT16_MAX;
	static int32_t x247 = INT32_MIN;
	volatile uint32_t t55 = 6U;

    t55 = (x245+((x246/x247)^x248));

    if (t55 != 1080632175U) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x249 = 3;
	int64_t x250 = INT64_MIN;
	int64_t x251 = -12545366066097LL;
	static int64_t x252 = 74225393722935LL;
	volatile int64_t t56 = 25744LL;

    t56 = (x249+((x250/x251)^x252));

    if (t56 != 74225393258969LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x253 = INT8_MIN;
	int16_t x254 = -19;
	int64_t x255 = 175LL;
	volatile int64_t t57 = 16961198659417LL;

    t57 = (x253+((x254/x255)^x256));

    if (t57 != -32896LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x257 = -1;
	int16_t x259 = -1;
	static uint64_t t58 = 14312288015LLU;

    t58 = (x257+((x258/x259)^x260));

    if (t58 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x262 = INT16_MIN;
	int16_t x263 = -990;
	volatile int64_t x264 = -1LL;
	volatile int64_t t59 = 1LL;

    t59 = (x261+((x262/x263)^x264));

    if (t59 != -32LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x269 = INT8_MIN;
	static int64_t x271 = -268701204LL;
	int16_t x272 = INT16_MAX;
	int64_t t60 = 1514724939069LL;

    t60 = (x269+((x270/x271)^x272));

    if (t60 != 32639LL) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x273 = 0;
	uint64_t x274 = UINT64_MAX;
	static int64_t x275 = -1LL;
	int16_t x276 = INT16_MAX;
	volatile uint64_t t61 = 258869920023883LLU;

    t61 = (x273+((x274/x275)^x276));

    if (t61 != 32766LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x277 = 4U;
	int16_t x279 = 4;
	int16_t x280 = INT16_MIN;
	volatile uint32_t t62 = 1524875309U;

    t62 = (x277+((x278/x279)^x280));

    if (t62 != 4294934532U) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint32_t x281 = 765U;
	volatile int16_t x282 = -3133;
	static int8_t x283 = INT8_MIN;
	int16_t x284 = 29;
	volatile uint32_t t63 = 963934134U;

    t63 = (x281+((x282/x283)^x284));

    if (t63 != 770U) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint8_t x290 = UINT8_MAX;
	int64_t x292 = -295872405186628255LL;
	int64_t t64 = 40173079724LL;

    t64 = (x289+((x290/x291)^x292));

    if (t64 != 295872405186628253LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x294 = -1;
	int8_t x295 = INT8_MIN;
	int32_t x296 = 73;
	int32_t t65 = 241;

    t65 = (x293+((x294/x295)^x296));

    if (t65 != -2147483575) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x297 = -1LL;
	static int8_t x299 = INT8_MAX;
	int8_t x300 = 16;
	static int64_t t66 = 229568418736034507LL;

    t66 = (x297+((x298/x299)^x300));

    if (t66 != -18LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x301 = -23;
	int32_t x302 = INT32_MIN;
	volatile int32_t x303 = INT32_MIN;
	int16_t x304 = INT16_MIN;
	volatile int32_t t67 = -16618150;

    t67 = (x301+((x302/x303)^x304));

    if (t67 != -32790) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x305 = INT64_MIN;
	volatile uint16_t x306 = 3U;
	uint64_t x307 = 1LLU;
	volatile int8_t x308 = INT8_MIN;
	volatile uint64_t t68 = 18156LLU;

    t68 = (x305+((x306/x307)^x308));

    if (t68 != 9223372036854775683LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint32_t x314 = 121992007U;
	static int16_t x316 = -255;
	uint64_t t69 = 2948977LLU;

    t69 = (x313+((x314/x315)^x316));

    if (t69 != 9223372036854775553LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x319 = -1;
	int32_t x320 = -25415;

    t70 = (x317+((x318/x319)^x320));

    if (t70 != -24707) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x321 = 1U;
	volatile int8_t x322 = INT8_MAX;
	uint16_t x323 = 1412U;
	uint32_t x324 = 1U;
	uint32_t t71 = 16693U;

    t71 = (x321+((x322/x323)^x324));

    if (t71 != 2U) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x325 = INT32_MIN;
	int32_t x326 = 1;
	int64_t x327 = INT64_MAX;
	uint8_t x328 = UINT8_MAX;
	int64_t t72 = -12299042116LL;

    t72 = (x325+((x326/x327)^x328));

    if (t72 != -2147483393LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x329 = INT64_MIN;
	volatile int16_t x330 = 0;
	volatile int64_t x331 = INT64_MIN;
	volatile int64_t t73 = -224282030LL;

    t73 = (x329+((x330/x331)^x332));

    if (t73 != -9223372036854767923LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x333 = -1;
	uint16_t x334 = 409U;
	int8_t x335 = INT8_MIN;
	static int16_t x336 = -59;
	volatile int32_t t74 = -163400813;

    t74 = (x333+((x334/x335)^x336));

    if (t74 != 55) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint32_t x338 = 20655037U;
	int16_t x339 = INT16_MAX;
	uint32_t x340 = 113652486U;

    t75 = (x337+((x338/x339)^x340));

    if (t75 != 113652081U) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint16_t x341 = UINT16_MAX;
	int16_t x342 = -115;
	static uint32_t x343 = UINT32_MAX;
	int16_t x344 = INT16_MIN;
	uint32_t t76 = 177432177U;

    t76 = (x341+((x342/x343)^x344));

    if (t76 != 32767U) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x345 = -25;
	uint32_t x346 = UINT32_MAX;
	volatile int8_t x348 = 2;
	uint32_t t77 = 202663951U;

    t77 = (x345+((x346/x347)^x348));

    if (t77 != 4294967274U) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x357 = 5097;
	volatile int32_t x358 = -1;
	int64_t x359 = 43977448559616LL;
	int16_t x360 = INT16_MIN;
	static volatile int64_t t78 = 147LL;

    t78 = (x357+((x358/x359)^x360));

    if (t78 != -27671LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static int64_t x361 = -1956533428258955978LL;
	static int64_t x363 = INT64_MIN;
	int16_t x364 = 85;
	volatile int64_t t79 = -164339037LL;

    t79 = (x361+((x362/x363)^x364));

    if (t79 != -1956533428258955893LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x365 = 9644U;
	int8_t x366 = 3;
	int64_t x368 = -1LL;
	static int64_t t80 = 40862244929LL;

    t80 = (x365+((x366/x367)^x368));

    if (t80 != 9640LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint8_t x374 = 3U;
	uint16_t x376 = UINT16_MAX;
	volatile int32_t t81 = 2062873;

    t81 = (x373+((x374/x375)^x376));

    if (t81 != 32767) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x377 = 15371U;
	int16_t x378 = INT16_MIN;
	int32_t x379 = INT32_MAX;
	int8_t x380 = INT8_MIN;

    t82 = (x377+((x378/x379)^x380));

    if (t82 != 15243) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x383 = UINT32_MAX;
	int32_t x384 = INT32_MAX;

    t83 = (x381+((x382/x383)^x384));

    if (t83 != 2147483648U) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x385 = 0LL;
	int64_t x386 = INT64_MAX;
	uint32_t x387 = UINT32_MAX;
	int32_t x388 = 31;
	volatile int64_t t84 = -5211736463590000LL;

    t84 = (x385+((x386/x387)^x388));

    if (t84 != 2147483679LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x389 = INT16_MIN;
	static int16_t x390 = -472;
	uint8_t x392 = UINT8_MAX;

    t85 = (x389+((x390/x391)^x392));

    if (t85 != -32513) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x393 = INT32_MIN;
	volatile uint64_t x394 = 5314130630031928562LLU;
	int8_t x395 = INT8_MIN;
	static int8_t x396 = INT8_MAX;

    t86 = (x393+((x394/x395)^x396));

    if (t86 != 18446744071562068095LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x401 = INT8_MIN;
	int32_t x402 = 151379;
	volatile uint64_t x403 = 12963279954374203LLU;
	int8_t x404 = INT8_MIN;

    t87 = (x401+((x402/x403)^x404));

    if (t87 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x405 = 64U;
	int16_t x406 = INT16_MAX;
	uint8_t x407 = 11U;
	int64_t x408 = -384LL;
	volatile int64_t t88 = -207425691LL;

    t88 = (x405+((x406/x407)^x408));

    if (t88 != -2718LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static int32_t x409 = -12599235;
	uint16_t x410 = UINT16_MAX;
	volatile int8_t x411 = 1;
	int8_t x412 = INT8_MAX;
	int32_t t89 = 6755898;

    t89 = (x409+((x410/x411)^x412));

    if (t89 != -12533827) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x413 = 23U;
	uint8_t x414 = 6U;
	int32_t t90 = -15;

    t90 = (x413+((x414/x415)^x416));

    if (t90 != 25) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint64_t x417 = 3LLU;
	int64_t x418 = -18081LL;
	uint32_t x420 = 9172U;
	uint64_t t91 = 286295904088LLU;

    t91 = (x417+((x418/x419)^x420));

    if (t91 != 9175LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x422 = 0U;
	volatile int64_t x423 = -1LL;
	static int8_t x424 = INT8_MAX;

    t92 = (x421+((x422/x423)^x424));

    if (t92 != -2147483521LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x425 = 228411859837439137LLU;
	int8_t x427 = INT8_MIN;
	int16_t x428 = -12778;
	volatile uint64_t t93 = 1881786340497062377LLU;

    t93 = (x425+((x426/x427)^x428));

    if (t93 != 228411864132393655LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x429 = -1LL;
	static uint32_t x430 = UINT32_MAX;
	static int8_t x431 = 7;
	static volatile uint16_t x432 = 1U;
	static volatile int64_t t94 = -583262761397455LL;

    t94 = (x429+((x430/x431)^x432));

    if (t94 != 613566756LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static int16_t x433 = INT16_MAX;
	uint32_t x434 = UINT32_MAX;
	volatile uint8_t x435 = UINT8_MAX;
	int64_t t95 = 144968110LL;

    t95 = (x433+((x434/x435)^x436));

    if (t95 != -87421376LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile uint16_t x437 = 7U;
	uint8_t x438 = UINT8_MAX;
	int64_t x439 = INT64_MAX;
	int64_t x440 = INT64_MIN;
	int64_t t96 = -27841190447333666LL;

    t96 = (x437+((x438/x439)^x440));

    if (t96 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x441 = -42239096303672778LL;
	static volatile int16_t x442 = INT16_MAX;
	volatile uint16_t x443 = UINT16_MAX;
	int64_t x444 = -432791874259386LL;
	volatile int64_t t97 = 47488476656085LL;

    t97 = (x441+((x442/x443)^x444));

    if (t97 != -42671888177932164LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x445 = 144186383;
	static volatile uint64_t x446 = 2096304366918LLU;
	static volatile uint64_t t98 = 401LLU;

    t98 = (x445+((x446/x447)^x448));

    if (t98 != 420549419367LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x449 = -1;
	int32_t x450 = INT32_MIN;
	volatile uint64_t x451 = UINT64_MAX;
	volatile int8_t x452 = INT8_MIN;

    t99 = (x449+((x450/x451)^x452));

    if (t99 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x454 = -1LL;
	uint16_t x456 = UINT16_MAX;
	volatile int64_t t100 = -3053221818LL;

    t100 = (x453+((x454/x455)^x456));

    if (t100 != 55734LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint32_t x457 = UINT32_MAX;
	volatile int64_t x459 = INT64_MAX;
	volatile int64_t x460 = -16788344322396LL;
	volatile int64_t t101 = 14870LL;

    t101 = (x457+((x458/x459)^x460));

    if (t101 != -16784049355101LL) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int8_t x461 = -6;
	int8_t x462 = INT8_MIN;
	static int32_t x463 = -607;

    t102 = (x461+((x462/x463)^x464));

    if (t102 != 9223372036854775801LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x465 = INT32_MIN;
	int64_t x466 = 1672941LL;
	int8_t x467 = INT8_MIN;
	uint32_t x468 = 322716449U;

    t103 = (x465+((x466/x467)^x468));

    if (t103 != -2470211630LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x469 = INT8_MAX;
	volatile int8_t x470 = 5;
	static volatile int16_t x472 = -1;
	volatile int32_t t104 = -125;

    t104 = (x469+((x470/x471)^x472));

    if (t104 != 126) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint16_t x473 = 1478U;
	int32_t x475 = INT32_MIN;
	static volatile uint16_t x476 = UINT16_MAX;
	volatile int32_t t105 = -4;

    t105 = (x473+((x474/x475)^x476));

    if (t105 != 67012) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x478 = INT32_MIN;
	int64_t x479 = 52780904190790LL;
	uint16_t x480 = UINT16_MAX;
	int64_t t106 = 964937204497483304LL;

    t106 = (x477+((x478/x479)^x480));

    if (t106 != 65561LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x485 = UINT64_MAX;
	uint64_t t107 = 1585LLU;

    t107 = (x485+((x486/x487)^x488));

    if (t107 != 238609292LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x489 = INT8_MIN;
	uint8_t x490 = 0U;
	int8_t x491 = INT8_MIN;
	int16_t x492 = INT16_MAX;
	volatile int32_t t108 = 3570;

    t108 = (x489+((x490/x491)^x492));

    if (t108 != 32639) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int16_t x493 = INT16_MIN;
	int16_t x494 = -483;
	static int64_t x495 = -352581868499462061LL;
	int8_t x496 = -1;
	volatile int64_t t109 = -217121163922132582LL;

    t109 = (x493+((x494/x495)^x496));

    if (t109 != -32769LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint64_t x497 = UINT64_MAX;
	uint16_t x498 = UINT16_MAX;
	uint16_t x499 = 245U;
	static int64_t x500 = -308699765767LL;
	uint64_t t110 = 31935632LLU;

    t110 = (x497+((x498/x499)^x500));

    if (t110 != 18446743765009785585LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x501 = 0;
	static int32_t x504 = INT32_MIN;
	volatile int32_t t111 = INT32_MIN;

    t111 = (x501+((x502/x503)^x504));

    if (t111 != INT32_MIN) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int16_t x505 = INT16_MIN;
	int32_t x506 = -1;
	int16_t x507 = INT16_MAX;
	volatile int16_t x508 = INT16_MIN;
	static volatile int32_t t112 = 24;

    t112 = (x505+((x506/x507)^x508));

    if (t112 != -65536) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x512 = -1LL;
	volatile int64_t t113 = -20986906409105LL;

    t113 = (x509+((x510/x511)^x512));

    if (t113 != 32766LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x513 = -1;
	int8_t x514 = 5;
	uint32_t x515 = 616110U;
	static volatile int32_t x516 = -1;
	volatile uint32_t t114 = 22U;

    t114 = (x513+((x514/x515)^x516));

    if (t114 != 4294967294U) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x517 = 18;
	static int8_t x518 = 0;
	static int8_t x520 = -1;

    t115 = (x517+((x518/x519)^x520));

    if (t115 != 17LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x521 = 1764;
	int8_t x522 = INT8_MIN;
	static volatile uint8_t x523 = UINT8_MAX;
	uint8_t x524 = UINT8_MAX;
	volatile int32_t t116 = 6346;

    t116 = (x521+((x522/x523)^x524));

    if (t116 != 2019) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x525 = 4987993LLU;
	int32_t x526 = INT32_MAX;
	int64_t x527 = INT64_MAX;
	int16_t x528 = INT16_MIN;
	volatile uint64_t t117 = 46220353LLU;

    t117 = (x525+((x526/x527)^x528));

    if (t117 != 4955225LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x529 = INT8_MIN;
	static uint32_t x530 = 97820U;
	static uint64_t x531 = UINT64_MAX;
	uint16_t x532 = UINT16_MAX;
	volatile uint64_t t118 = 972679938858LLU;

    t118 = (x529+((x530/x531)^x532));

    if (t118 != 65407LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x533 = 60241LL;
	static int32_t x534 = INT32_MAX;
	uint8_t x536 = 93U;

    t119 = (x533+((x534/x535)^x536));

    if (t119 != -2147423315LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x537 = INT8_MIN;
	uint32_t x538 = 2110635457U;
	uint64_t x540 = UINT64_MAX;
	uint64_t t120 = 223374011161829129LLU;

    t120 = (x537+((x538/x539)^x540));

    if (t120 != 18446744073709519281LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x541 = 63U;
	static volatile int16_t x542 = 1;
	uint16_t x543 = UINT16_MAX;
	static uint8_t x544 = 2U;
	volatile int32_t t121 = 729244;

    t121 = (x541+((x542/x543)^x544));

    if (t121 != 65) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x545 = INT32_MIN;
	int8_t x546 = 1;
	int16_t x547 = INT16_MIN;
	volatile int64_t x548 = 569518501558LL;
	static volatile int64_t t122 = -339165145477167LL;

    t122 = (x545+((x546/x547)^x548));

    if (t122 != 567371017910LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x553 = -115304719;
	int8_t x554 = -1;
	int16_t x555 = -1;
	int32_t x556 = INT32_MAX;
	volatile int32_t t123 = -4890;

    t123 = (x553+((x554/x555)^x556));

    if (t123 != 2032178927) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int32_t x557 = -1;
	uint8_t x558 = 6U;
	static uint32_t x559 = UINT32_MAX;
	int16_t x560 = -1;
	static volatile uint32_t t124 = 19U;

    t124 = (x557+((x558/x559)^x560));

    if (t124 != 4294967294U) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x561 = 54U;
	static int32_t x563 = -1;
	uint16_t x564 = 1784U;
	int64_t t125 = -32021397290840LL;

    t125 = (x561+((x562/x563)^x564));

    if (t125 != 864374LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x565 = INT16_MIN;
	static volatile int8_t x566 = INT8_MIN;
	uint64_t x567 = UINT64_MAX;
	uint64_t t126 = 1082737578990LLU;

    t126 = (x565+((x566/x567)^x568));

    if (t126 != 18446744073709549091LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x569 = INT64_MIN;
	int8_t x570 = INT8_MAX;
	uint16_t x571 = 1U;
	static uint16_t x572 = 2615U;
	volatile int64_t t127 = 3978960561233611138LL;

    t127 = (x569+((x570/x571)^x572));

    if (t127 != -9223372036854773176LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x573 = INT64_MIN;
	uint32_t x574 = 114U;
	int64_t x575 = INT64_MIN;
	int8_t x576 = INT8_MAX;
	int64_t t128 = 123976450LL;

    t128 = (x573+((x574/x575)^x576));

    if (t128 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile uint64_t x577 = 525251LLU;
	static uint16_t x578 = 28U;
	volatile int64_t x579 = INT64_MIN;
	int64_t x580 = -1LL;
	uint64_t t129 = 134717203327LLU;

    t129 = (x577+((x578/x579)^x580));

    if (t129 != 525250LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x581 = 27;
	int8_t x582 = -1;
	volatile int64_t x583 = INT64_MAX;
	volatile int64_t t130 = -1462305656277LL;

    t130 = (x581+((x582/x583)^x584));

    if (t130 != 65562LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t x586 = 49117353;
	uint64_t x587 = 32159LLU;
	static int64_t x588 = -2LL;
	volatile uint64_t t131 = 16807312LLU;

    t131 = (x585+((x586/x587)^x588));

    if (t131 != 18446744073709549961LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x589 = INT16_MIN;
	int64_t x590 = INT64_MIN;
	int8_t x591 = INT8_MAX;
	int64_t t132 = -3655LL;

    t132 = (x589+((x590/x591)^x592));

    if (t132 != 9150747060186595199LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x593 = -1;
	uint64_t x594 = 12330LLU;
	static volatile uint64_t x595 = UINT64_MAX;
	uint64_t t133 = 1701517427650LLU;

    t133 = (x593+((x594/x595)^x596));

    if (t133 != 19792LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint64_t x597 = 36522131827166LLU;
	int8_t x598 = INT8_MIN;
	int8_t x599 = INT8_MIN;
	static int16_t x600 = -1;

    t134 = (x597+((x598/x599)^x600));

    if (t134 != 36522131827164LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x602 = -401;
	uint16_t x604 = 13U;
	volatile uint64_t t135 = 112024012748440LLU;

    t135 = (x601+((x602/x603)^x604));

    if (t135 != 18962546365LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x606 = INT16_MIN;
	int64_t x607 = INT64_MAX;
	uint32_t x608 = 129826533U;
	static volatile int64_t t136 = 125730491627647LL;

    t136 = (x605+((x606/x607)^x608));

    if (t136 != 129829276LL) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile int32_t x609 = -1;
	int16_t x610 = INT16_MIN;
	int16_t x611 = INT16_MIN;
	volatile int32_t t137 = -3190183;

    t137 = (x609+((x610/x611)^x612));

    if (t137 != -32768) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x613 = 3U;
	static uint16_t x614 = 8U;
	volatile int16_t x615 = -3;
	static int8_t x616 = INT8_MIN;
	static volatile int32_t t138 = -412711356;

    t138 = (x613+((x614/x615)^x616));

    if (t138 != 129) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x618 = UINT32_MAX;
	int16_t x619 = -1;

    t139 = (x617+((x618/x619)^x620));

    if (t139 != -284860772000LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x621 = INT16_MIN;
	uint8_t x622 = UINT8_MAX;
	volatile int32_t x623 = INT32_MAX;
	static volatile int16_t x624 = -92;

    t140 = (x621+((x622/x623)^x624));

    if (t140 != -32860) { NG(); } else { ; }
	
}

void f141(void) {
    	static int64_t x625 = -29515252336337186LL;
	uint16_t x626 = UINT16_MAX;
	static int32_t x627 = -1;
	static uint16_t x628 = UINT16_MAX;
	volatile int64_t t141 = -426236937285205LL;

    t141 = (x625+((x626/x627)^x628));

    if (t141 != -29515252336337188LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint8_t x629 = 26U;
	volatile int16_t x631 = -154;
	int8_t x632 = INT8_MAX;
	uint64_t t142 = 2LLU;

    t142 = (x629+((x630/x631)^x632));

    if (t142 != 153LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x633 = 3;
	uint8_t x634 = 2U;
	int16_t x635 = 2355;
	static int8_t x636 = INT8_MAX;
	volatile int32_t t143 = 213892;

    t143 = (x633+((x634/x635)^x636));

    if (t143 != 130) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x637 = 103U;
	static int32_t x638 = -3709308;
	static int8_t x639 = INT8_MAX;
	uint16_t x640 = 0U;
	volatile uint32_t t144 = 10U;

    t144 = (x637+((x638/x639)^x640));

    if (t144 != 4294938192U) { NG(); } else { ; }
	
}

void f145(void) {
    

    t145 = (x641+((x642/x643)^x644));

    if (t145 != 140739635838976LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x645 = 264776LL;
	int64_t x646 = 833459721054841LL;
	int64_t x647 = INT64_MIN;
	static volatile int8_t x648 = INT8_MIN;
	static volatile int64_t t146 = 24886094087928388LL;

    t146 = (x645+((x646/x647)^x648));

    if (t146 != 264648LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x649 = INT16_MIN;
	int32_t x650 = INT32_MIN;
	int8_t x651 = INT8_MIN;
	uint64_t x652 = 94408826946972864LLU;
	uint64_t t147 = 108940838142855574LLU;

    t147 = (x649+((x650/x651)^x652));

    if (t147 != 94408826930162880LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint16_t x655 = UINT16_MAX;
	static uint16_t x656 = 5898U;
	static int32_t t148 = 441438;

    t148 = (x653+((x654/x655)^x656));

    if (t148 != 373665200) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x657 = 3U;
	uint64_t x658 = 33423778019138LLU;
	uint32_t x659 = 573084589U;
	int32_t x660 = 978;
	volatile uint64_t t149 = 84646816363LLU;

    t149 = (x657+((x658/x659)^x660));

    if (t149 != 57347LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x661 = INT32_MIN;
	static volatile uint8_t x662 = 4U;
	volatile int64_t x663 = INT64_MIN;
	int8_t x664 = 0;
	static volatile int64_t t150 = 1LL;

    t150 = (x661+((x662/x663)^x664));

    if (t150 != -2147483648LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x665 = -1;
	static uint64_t x666 = UINT64_MAX;
	volatile uint64_t x667 = 4101143389140240LLU;
	int16_t x668 = INT16_MIN;
	static volatile uint64_t t151 = 1101000929783213LLU;

    t151 = (x665+((x666/x667)^x668));

    if (t151 != 18446744073709523344LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x669 = 33;
	int32_t x670 = 5415756;
	int8_t x671 = -9;

    t152 = (x669+((x670/x671)^x672));

    if (t152 != 18446744073708947542LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x673 = INT64_MIN;
	volatile uint32_t x674 = 82234U;
	static int64_t x675 = -1LL;
	int8_t x676 = INT8_MIN;
	int64_t t153 = 1172803LL;

    t153 = (x673+((x674/x675)^x676));

    if (t153 != -9223372036854693562LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x678 = 2978;
	int16_t x679 = INT16_MIN;
	static int16_t x680 = INT16_MAX;
	volatile int32_t t154 = 1;

    t154 = (x677+((x678/x679)^x680));

    if (t154 != 32809) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x681 = UINT32_MAX;
	int8_t x682 = -33;
	uint8_t x684 = 71U;
	volatile uint32_t t155 = 1047U;

    t155 = (x681+((x682/x683)^x684));

    if (t155 != 70U) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x688 = 2656370U;
	int64_t t156 = -1596826690048LL;

    t156 = (x685+((x686/x687)^x688));

    if (t156 != -2656326LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint32_t x690 = UINT32_MAX;
	static int16_t x691 = INT16_MAX;
	int8_t x692 = -2;
	static volatile int64_t t157 = -2171341305709659LL;

    t157 = (x689+((x690/x691)^x692));

    if (t157 != -9223372032559939590LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x693 = -1;
	int8_t x694 = -1;
	static uint64_t x695 = 5647805670976928230LLU;
	volatile int32_t x696 = 24;

    t158 = (x693+((x694/x695)^x696));

    if (t158 != 26LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x697 = 136156104015LL;
	static uint8_t x698 = UINT8_MAX;
	uint32_t x700 = UINT32_MAX;
	volatile int64_t t159 = 88622LL;

    t159 = (x697+((x698/x699)^x700));

    if (t159 != 140451071310LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x705 = INT32_MAX;
	uint32_t x706 = 57U;
	volatile uint32_t x707 = 14384300U;
	uint8_t x708 = 0U;
	uint32_t t160 = 1606463924U;

    t160 = (x705+((x706/x707)^x708));

    if (t160 != 2147483647U) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x709 = -1;
	uint32_t x710 = 465U;
	static int16_t x712 = INT16_MAX;
	uint32_t t161 = 146806545U;

    t161 = (x709+((x710/x711)^x712));

    if (t161 != 32301U) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x713 = 58;
	int8_t x715 = INT8_MIN;
	uint16_t x716 = UINT16_MAX;
	int64_t t162 = 13153389996LL;

    t162 = (x713+((x714/x715)^x716));

    if (t162 != 72057594037993529LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x717 = INT16_MAX;
	int8_t x720 = -1;
	static uint64_t t163 = 14809960LLU;

    t163 = (x717+((x718/x719)^x720));

    if (t163 != 32766LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x722 = 80316031U;
	volatile int32_t x723 = 4;
	volatile uint64_t x724 = 70697389812722798LLU;
	uint64_t t164 = 28063762LLU;

    t164 = (x721+((x722/x723)^x724));

    if (t164 != 70697389830688496LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x725 = -1;
	int64_t x726 = 0LL;
	int32_t x727 = 491900;
	volatile uint8_t x728 = 0U;
	volatile int64_t t165 = 60969982LL;

    t165 = (x725+((x726/x727)^x728));

    if (t165 != -1LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x729 = 325430058490594851LL;
	int32_t x730 = INT32_MIN;
	static volatile int64_t x731 = -1140064432337014913LL;
	int8_t x732 = -1;
	volatile int64_t t166 = -50584357354LL;

    t166 = (x729+((x730/x731)^x732));

    if (t166 != 325430058490594850LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x737 = INT16_MAX;
	static int16_t x739 = INT16_MAX;
	volatile int32_t t167 = 2;

    t167 = (x737+((x738/x739)^x740));

    if (t167 != -1) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x741 = -1;
	static uint16_t x742 = 2799U;
	int16_t x743 = INT16_MAX;
	int64_t x744 = -1LL;
	volatile int64_t t168 = 1145LL;

    t168 = (x741+((x742/x743)^x744));

    if (t168 != -2LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x745 = 29400124;
	static int64_t x746 = INT64_MAX;
	int8_t x748 = 0;
	int64_t t169 = 261438504292682806LL;

    t169 = (x745+((x746/x747)^x748));

    if (t169 != -15346708850557905LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x749 = 2498158U;
	volatile uint32_t x750 = 14539875U;
	int16_t x752 = INT16_MAX;
	volatile uint32_t t170 = 418051408U;

    t170 = (x749+((x750/x751)^x752));

    if (t170 != 2530925U) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x753 = 5147;
	volatile uint32_t x754 = UINT32_MAX;
	static int16_t x755 = INT16_MIN;
	int32_t x756 = 1;
	static volatile uint32_t t171 = 268920008U;

    t171 = (x753+((x754/x755)^x756));

    if (t171 != 5147U) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x757 = 20628869582125LL;
	uint64_t x758 = 127851828587LLU;
	int64_t x759 = -1LL;
	int8_t x760 = -1;
	uint64_t t172 = 1367954162LLU;

    t172 = (x757+((x758/x759)^x760));

    if (t172 != 20628869582124LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	static int16_t x761 = 7;
	int16_t x762 = INT16_MIN;
	int32_t x764 = INT32_MIN;
	volatile int64_t t173 = -8114876104072LL;

    t173 = (x761+((x762/x763)^x764));

    if (t173 != -2147483641LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static int64_t x765 = 808158892750635597LL;
	uint16_t x766 = UINT16_MAX;
	volatile int8_t x767 = 12;
	static volatile int8_t x768 = INT8_MIN;
	volatile int64_t t174 = 235725401LL;

    t174 = (x765+((x766/x767)^x768));

    if (t174 != 808158892750630178LL) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int16_t x769 = INT16_MIN;
	volatile int32_t x770 = 22717939;
	uint8_t x771 = UINT8_MAX;
	static int16_t x772 = INT16_MAX;
	volatile int32_t t175 = 607437457;

    t175 = (x769+((x770/x771)^x772));

    if (t175 != 41982) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int16_t x773 = INT16_MAX;
	uint8_t x774 = 6U;
	static uint64_t x775 = 507LLU;
	uint64_t t176 = 127312058140196LLU;

    t176 = (x773+((x774/x775)^x776));

    if (t176 != 32776LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x777 = UINT16_MAX;
	int32_t x778 = -1;
	uint16_t x779 = UINT16_MAX;
	uint64_t t177 = 4342298733291LLU;

    t177 = (x777+((x778/x779)^x780));

    if (t177 != 1464235218605688577LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x782 = 14U;
	int8_t x783 = INT8_MIN;

    t178 = (x781+((x782/x783)^x784));

    if (t178 != -2147483649LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x786 = INT8_MIN;
	int64_t x788 = INT64_MIN;
	volatile int64_t t179 = -26938111351084763LL;

    t179 = (x785+((x786/x787)^x788));

    if (t179 != -9223372036854771676LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x789 = 2659U;
	volatile int8_t x791 = -1;
	int16_t x792 = INT16_MAX;

    t180 = (x789+((x790/x791)^x792));

    if (t180 != 2657) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x793 = INT8_MAX;
	int64_t x795 = 1LL;
	uint64_t x796 = 2358955LLU;
	volatile uint64_t t181 = 1083232003310LLU;

    t181 = (x793+((x794/x795)^x796));

    if (t181 != 4292608467LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	static int16_t x797 = INT16_MIN;
	volatile int8_t x798 = 60;
	int32_t x800 = INT32_MAX;
	volatile int32_t t182 = 21905324;

    t182 = (x797+((x798/x799)^x800));

    if (t182 != 2147450875) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int8_t x805 = INT8_MIN;
	int8_t x806 = -1;
	volatile int64_t x807 = INT64_MIN;
	int64_t t183 = 445216202LL;

    t183 = (x805+((x806/x807)^x808));

    if (t183 != -129LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x809 = INT8_MAX;
	static uint64_t x810 = UINT64_MAX;
	static int32_t x811 = -249105600;
	int32_t x812 = INT32_MAX;
	static uint64_t t184 = 44484986896LLU;

    t184 = (x809+((x810/x811)^x812));

    if (t184 != 2147483773LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x813 = UINT16_MAX;
	volatile int64_t x814 = -1073765419303LL;
	int16_t x815 = INT16_MIN;
	uint64_t x816 = 102275848755596782LLU;
	volatile uint64_t t185 = 52907363LLU;

    t185 = (x813+((x814/x815)^x816));

    if (t185 != 102275848783712061LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x821 = 3468180529106671005LL;
	volatile int8_t x822 = INT8_MIN;
	int64_t x823 = -64057148585034LL;
	uint32_t x824 = 22U;

    t186 = (x821+((x822/x823)^x824));

    if (t186 != 3468180529106671027LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x826 = 31120LL;
	int64_t x827 = -4LL;
	int16_t x828 = INT16_MIN;
	volatile int64_t t187 = -25686453LL;

    t187 = (x825+((x826/x827)^x828));

    if (t187 != 24989LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x830 = -9;
	int16_t x832 = -1;
	volatile int32_t t188 = 14512;

    t188 = (x829+((x830/x831)^x832));

    if (t188 != 32766) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x833 = 6U;
	static int16_t x836 = -1;
	uint64_t t189 = 7252875316876LLU;

    t189 = (x833+((x834/x835)^x836));

    if (t189 != 4LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x837 = INT16_MIN;
	static int8_t x838 = -1;
	uint64_t x840 = 25031075913333638LLU;
	volatile uint64_t t190 = 355336826539LLU;

    t190 = (x837+((x838/x839)^x840));

    if (t190 != 25031075913300870LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int8_t x841 = INT8_MIN;
	int8_t x843 = INT8_MAX;
	int32_t x844 = -1;
	volatile int64_t t191 = 4747423421LL;

    t191 = (x841+((x842/x843)^x844));

    if (t191 != 72624976668147712LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x845 = 1;
	int64_t x846 = -2286118554756768LL;
	int64_t x848 = -108120429LL;

    t192 = (x845+((x846/x847)^x848));

    if (t192 != 54054078872LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x850 = -3963;
	static int64_t x851 = INT64_MIN;

    t193 = (x849+((x850/x851)^x852));

    if (t193 != 8761815535894LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x853 = -2;
	int64_t x854 = INT64_MAX;
	int8_t x855 = INT8_MAX;
	uint16_t x856 = 86U;
	int64_t t194 = -280LL;

    t194 = (x853+((x854/x855)^x856));

    if (t194 != 72624976668147925LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x857 = INT32_MAX;
	int32_t x860 = 16299450;
	volatile uint64_t t195 = 127LLU;

    t195 = (x857+((x858/x859)^x860));

    if (t195 != 2163783097LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x861 = -3726680;
	int64_t x862 = INT64_MIN;
	static uint8_t x864 = 14U;
	volatile uint64_t t196 = 535447262739LLU;

    t196 = (x861+((x862/x863)^x864));

    if (t196 != 18446744073705824941LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint16_t x865 = UINT16_MAX;
	int64_t x867 = 3863301109380911LL;
	static volatile uint32_t x868 = UINT32_MAX;
	int64_t t197 = -687722LL;

    t197 = (x865+((x866/x867)^x868));

    if (t197 != 4295032830LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x873 = 21U;
	uint32_t x874 = 908218708U;
	uint32_t x875 = 3210750U;
	int32_t x876 = -1;
	uint32_t t198 = 68286068U;

    t198 = (x873+((x874/x875)^x876));

    if (t198 != 4294967034U) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x877 = UINT64_MAX;
	int8_t x878 = -35;
	static int8_t x880 = INT8_MIN;
	volatile uint64_t t199 = 39867518645922LLU;

    t199 = (x877+((x878/x879)^x880));

    if (t199 != 18446744073709551522LLU) { NG(); } else { ; }
	
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

