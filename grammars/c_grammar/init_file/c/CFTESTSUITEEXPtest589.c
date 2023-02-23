
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

int64_t x6 = INT64_MAX;
int32_t x12 = INT32_MAX;
volatile int16_t x15 = INT16_MIN;
int16_t x16 = -38;
int16_t x18 = 1;
int16_t x21 = -143;
int32_t t5 = -2310;
static uint16_t x29 = 0U;
volatile uint64_t t8 = 6646895063805LLU;
static volatile int8_t x37 = -1;
volatile int16_t x38 = INT16_MIN;
int8_t x46 = INT8_MAX;
uint8_t x59 = 38U;
static int16_t x66 = -1;
int16_t x86 = 6;
volatile int64_t t21 = -8LL;
int16_t x110 = INT16_MAX;
uint32_t x116 = 88839607U;
static volatile int64_t t24 = 3LL;
volatile int32_t x118 = -5;
int16_t x126 = -75;
uint16_t x127 = UINT16_MAX;
uint32_t x129 = 82008U;
int64_t t28 = -49926LL;
uint64_t t31 = UINT64_MAX;
volatile int8_t x149 = -1;
int32_t x157 = INT32_MIN;
int32_t x159 = 1254;
int64_t t33 = -4386769315387LL;
int64_t x161 = INT64_MAX;
uint64_t x164 = 500368LLU;
int16_t x185 = INT16_MIN;
uint16_t x193 = 8U;
int8_t x195 = INT8_MAX;
int8_t x201 = 1;
static int8_t x203 = -1;
int32_t x206 = 10824188;
int64_t t45 = 10625663LL;
uint64_t x221 = UINT64_MAX;
int64_t x223 = INT64_MIN;
int8_t x244 = -1;
int16_t x245 = INT16_MAX;
int64_t x251 = -1LL;
static int64_t t51 = -29730717131LL;
int32_t x257 = -1;
int32_t x261 = -1;
int64_t x262 = -1LL;
volatile int32_t x273 = INT32_MIN;
int8_t x275 = INT8_MAX;
volatile uint64_t t57 = 263LLU;
uint16_t x286 = UINT16_MAX;
volatile uint16_t x290 = 1U;
uint16_t x296 = 2U;
static volatile int16_t x301 = INT16_MAX;
static uint64_t t62 = 699637557LLU;
int64_t x310 = 307LL;
volatile int32_t x313 = INT32_MIN;
int8_t x317 = INT8_MIN;
static volatile int64_t x318 = 37018235LL;
uint8_t x319 = UINT8_MAX;
int32_t x320 = INT32_MIN;
int16_t x337 = INT16_MIN;
volatile uint64_t t70 = 68LLU;
uint8_t x349 = UINT8_MAX;
static int32_t x350 = -19;
static int16_t x352 = INT16_MIN;
uint64_t t71 = 2192578LLU;
volatile int8_t x368 = -4;
volatile int64_t x379 = -733662028LL;
static volatile int16_t x381 = 0;
volatile int64_t x386 = INT64_MAX;
int16_t x387 = INT16_MIN;
int32_t x388 = INT32_MIN;
int64_t t78 = -15801185989LL;
volatile int64_t t79 = -41552056731342LL;
int32_t x393 = INT32_MIN;
int8_t x396 = INT8_MAX;
volatile int32_t x397 = -754;
uint64_t x399 = UINT64_MAX;
int8_t x402 = INT8_MIN;
static uint16_t x420 = 193U;
int8_t x429 = 4;
volatile uint16_t x434 = 7U;
uint8_t x436 = 11U;
int8_t x438 = -27;
uint16_t x440 = 30313U;
int32_t x442 = INT32_MIN;
int32_t x456 = -1;
volatile int64_t t91 = 120441036639LL;
uint32_t x470 = UINT32_MAX;
static int64_t x472 = -1505807946056858LL;
int16_t x475 = INT16_MIN;
int32_t x478 = INT32_MIN;
static uint32_t x479 = UINT32_MAX;
int32_t x481 = 543173;
uint8_t x482 = UINT8_MAX;
int8_t x484 = -1;
uint8_t x489 = UINT8_MAX;
int8_t x492 = 1;
int64_t x499 = -3LL;
uint64_t x503 = 2107592430865LLU;
uint32_t x510 = UINT32_MAX;
static uint16_t x512 = UINT16_MAX;
static int64_t x516 = INT64_MIN;
int64_t x531 = INT64_MIN;
volatile uint16_t x534 = 1468U;
static int16_t x536 = -1;
uint32_t x555 = 136U;
static uint8_t x562 = 1U;
volatile int8_t x563 = INT8_MIN;
int32_t x568 = -2081317;
static int32_t t114 = -666514;
volatile uint64_t t115 = UINT64_MAX;
static uint64_t x575 = UINT64_MAX;
int8_t x588 = INT8_MIN;
static volatile uint32_t t121 = 121U;
uint32_t t122 = 3341924U;
int16_t x603 = INT16_MAX;
int16_t x617 = INT16_MIN;
volatile int64_t x619 = INT64_MAX;
int64_t x620 = INT64_MAX;
int64_t t125 = -23968303931209LL;
int8_t x621 = 1;
static int16_t x628 = 83;
uint32_t t127 = 219736380U;
static int32_t x632 = 8;
uint32_t x644 = 3355U;
uint16_t x645 = 15U;
static volatile int16_t x648 = 637;
volatile int64_t t132 = 1811LL;
int8_t x668 = INT8_MAX;
static uint32_t x675 = UINT32_MAX;
uint32_t x685 = 125082591U;
uint32_t x693 = 18586U;
static uint32_t x696 = 98621581U;
int32_t x697 = INT32_MAX;
int32_t x709 = -14559;
uint16_t x711 = 62U;
static uint64_t t146 = 484947464249378LLU;
int64_t x727 = -46747513732LL;
int32_t x737 = INT32_MIN;
uint32_t x740 = 1652503513U;
volatile uint64_t x756 = 736378393671LLU;
static int64_t x757 = -1LL;
static int64_t x766 = -1LL;
volatile int8_t x771 = -31;
uint64_t t157 = 14372LLU;
int16_t x786 = -1;
int32_t x792 = 594452;
static int32_t x795 = INT32_MIN;
static int16_t x797 = INT16_MAX;
int64_t x802 = -9948LL;
int32_t x803 = 542;
static uint64_t x808 = 90987656310503LLU;
int16_t x809 = -145;
int8_t x811 = INT8_MIN;
int8_t x813 = -1;
uint32_t x814 = 418090U;
static volatile int8_t x815 = INT8_MAX;
uint32_t t165 = 139002U;
uint64_t x817 = UINT64_MAX;
static volatile int8_t x819 = INT8_MAX;
int16_t x820 = INT16_MIN;
int16_t x823 = -5509;
volatile int32_t t170 = -128465561;
int32_t x840 = INT32_MAX;
int64_t x846 = 1595LL;
int64_t x847 = INT64_MAX;
static volatile int64_t t172 = 0LL;
static int32_t x854 = -1350282;
uint64_t x857 = UINT64_MAX;
volatile int64_t x860 = INT64_MAX;
volatile uint8_t x867 = 3U;
uint32_t x869 = 498583938U;
volatile int64_t t178 = -316LL;
static uint8_t x873 = UINT8_MAX;
uint8_t x877 = UINT8_MAX;
static int64_t x883 = INT64_MAX;
static int16_t x887 = 158;
uint64_t x895 = 55957086406LLU;
uint8_t x897 = 1U;
int64_t t186 = -44352604LL;
static volatile int64_t t188 = -650758984480LL;
static uint32_t x917 = 128052U;
int8_t x920 = INT8_MIN;
int64_t x931 = -1LL;
uint32_t x937 = 1213950567U;
uint64_t x938 = UINT64_MAX;
uint8_t x945 = UINT8_MAX;
int8_t x946 = INT8_MIN;
uint64_t x958 = UINT64_MAX;
uint64_t t198 = 342127583541179271LLU;
int16_t x962 = 13;


void f0(void) {
    	uint64_t x1 = 1597945440LLU;
	static int16_t x2 = 12442;
	int16_t x3 = INT16_MIN;
	int16_t x4 = INT16_MIN;
	volatile uint64_t t0 = 3234076773LLU;

    t0 = (x1+((x2/x3)+x4));

    if (t0 != 1597912672LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x5 = 99411605005569709LL;
	uint64_t x7 = 888LLU;
	int64_t x8 = INT64_MIN;
	volatile uint64_t t1 = 66259305801898664LLU;

    t1 = (x5+((x6/x7)+x8));

    if (t1 != 9333170322082028823LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MAX;
	static uint32_t x10 = 1U;
	int32_t x11 = INT32_MIN;
	volatile uint32_t t2 = 0U;

    t2 = (x9+((x10/x11)+x12));

    if (t2 != 2147483774U) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = -1;
	static int64_t x14 = -1LL;
	int64_t t3 = -209376761108LL;

    t3 = (x13+((x14/x15)+x16));

    if (t3 != -39LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = 22LL;
	int32_t x19 = -2;
	int16_t x20 = -13;
	int64_t t4 = -5190624LL;

    t4 = (x17+((x18/x19)+x20));

    if (t4 != 9LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint8_t x22 = UINT8_MAX;
	int32_t x23 = INT32_MAX;
	uint16_t x24 = UINT16_MAX;

    t5 = (x21+((x22/x23)+x24));

    if (t5 != 65392) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = -1;
	int8_t x26 = INT8_MIN;
	uint8_t x27 = 1U;
	int16_t x28 = 6311;
	int32_t t6 = 1;

    t6 = (x25+((x26/x27)+x28));

    if (t6 != 6182) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x30 = UINT64_MAX;
	uint64_t x31 = 13238LLU;
	int16_t x32 = -1;
	uint64_t t7 = 13556500LLU;

    t7 = (x29+((x30/x31)+x32));

    if (t7 != 1393469109662300LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x33 = 5492131LLU;
	int8_t x34 = 5;
	volatile int16_t x35 = INT16_MIN;
	volatile int64_t x36 = -1LL;

    t8 = (x33+((x34/x35)+x36));

    if (t8 != 5492130LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x39 = 3LL;
	int16_t x40 = INT16_MIN;
	volatile int64_t t9 = 6LL;

    t9 = (x37+((x38/x39)+x40));

    if (t9 != -43691LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = -1;
	volatile uint8_t x42 = 28U;
	volatile int32_t x43 = 922869;
	uint32_t x44 = 96597639U;
	volatile uint32_t t10 = 442320488U;

    t10 = (x41+((x42/x43)+x44));

    if (t10 != 96597638U) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint64_t x45 = 2827249389LLU;
	int8_t x47 = 1;
	static uint64_t x48 = UINT64_MAX;
	uint64_t t11 = 11547693245656LLU;

    t11 = (x45+((x46/x47)+x48));

    if (t11 != 2827249515LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = -674021417257948LL;
	int8_t x50 = INT8_MAX;
	int32_t x51 = -103418;
	static volatile uint8_t x52 = UINT8_MAX;
	int64_t t12 = -3393658788928691738LL;

    t12 = (x49+((x50/x51)+x52));

    if (t12 != -674021417257693LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x57 = INT16_MAX;
	volatile int8_t x58 = -14;
	int8_t x60 = -1;
	int32_t t13 = 1;

    t13 = (x57+((x58/x59)+x60));

    if (t13 != 32766) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint32_t x61 = UINT32_MAX;
	int32_t x62 = INT32_MAX;
	int64_t x63 = INT64_MIN;
	static uint64_t x64 = UINT64_MAX;
	volatile uint64_t t14 = 1042954LLU;

    t14 = (x61+((x62/x63)+x64));

    if (t14 != 4294967294LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x65 = -240;
	int64_t x67 = -16554277995621934LL;
	static int64_t x68 = -685817815363504LL;
	volatile int64_t t15 = -30915878522LL;

    t15 = (x65+((x66/x67)+x68));

    if (t15 != -685817815363744LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x73 = INT16_MAX;
	int64_t x74 = -1LL;
	volatile int8_t x75 = -58;
	uint16_t x76 = 733U;
	static int64_t t16 = -419498700517159LL;

    t16 = (x73+((x74/x75)+x76));

    if (t16 != 33500LL) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int16_t x77 = -1;
	volatile uint8_t x78 = 3U;
	volatile int32_t x79 = -31;
	static uint16_t x80 = 0U;
	volatile int32_t t17 = 1018;

    t17 = (x77+((x78/x79)+x80));

    if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x81 = 19;
	volatile int8_t x82 = -24;
	int32_t x83 = INT32_MIN;
	uint64_t x84 = 2899363295445LLU;
	volatile uint64_t t18 = 349195420LLU;

    t18 = (x81+((x82/x83)+x84));

    if (t18 != 2899363295464LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x85 = 17U;
	int32_t x87 = INT32_MIN;
	int32_t x88 = INT32_MIN;
	volatile int32_t t19 = -123;

    t19 = (x85+((x86/x87)+x88));

    if (t19 != -2147483631) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x89 = -23;
	static volatile uint16_t x90 = 24U;
	static volatile int16_t x91 = INT16_MIN;
	int8_t x92 = 0;
	volatile int32_t t20 = -494111;

    t20 = (x89+((x90/x91)+x92));

    if (t20 != -23) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x93 = INT16_MIN;
	int32_t x94 = -40502011;
	int64_t x95 = INT64_MIN;
	int8_t x96 = 39;

    t21 = (x93+((x94/x95)+x96));

    if (t21 != -32729LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int32_t x105 = 107;
	static int64_t x106 = INT64_MIN;
	static int64_t x107 = INT64_MIN;
	int16_t x108 = INT16_MIN;
	volatile int64_t t22 = 2007890833622LL;

    t22 = (x105+((x106/x107)+x108));

    if (t22 != -32660LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x109 = -1;
	volatile int32_t x111 = INT32_MAX;
	static uint64_t x112 = UINT64_MAX;
	volatile uint64_t t23 = 620LLU;

    t23 = (x109+((x110/x111)+x112));

    if (t23 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x113 = INT64_MIN;
	int16_t x114 = 3270;
	static int64_t x115 = -1LL;

    t24 = (x113+((x114/x115)+x116));

    if (t24 != -9223372036765939471LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x117 = -1;
	int64_t x119 = INT64_MIN;
	int32_t x120 = INT32_MIN;
	volatile int64_t t25 = -1997312288684955393LL;

    t25 = (x117+((x118/x119)+x120));

    if (t25 != -2147483649LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x125 = INT8_MAX;
	static int16_t x128 = 9;
	int32_t t26 = 1;

    t26 = (x125+((x126/x127)+x128));

    if (t26 != 136) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x130 = 1984788470464LLU;
	uint8_t x131 = 30U;
	static int16_t x132 = INT16_MAX;
	static uint64_t t27 = 18645621130LLU;

    t27 = (x129+((x130/x131)+x132));

    if (t27 != 66159730457LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x133 = 0;
	uint8_t x134 = 68U;
	int16_t x135 = INT16_MIN;
	int64_t x136 = -1LL;

    t28 = (x133+((x134/x135)+x136));

    if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x137 = INT16_MAX;
	uint16_t x138 = 2850U;
	uint16_t x139 = 4U;
	static int32_t x140 = 112102841;
	volatile int32_t t29 = 14707;

    t29 = (x137+((x138/x139)+x140));

    if (t29 != 112136320) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x141 = INT64_MIN;
	int8_t x142 = INT8_MIN;
	static int32_t x143 = -21165805;
	static uint16_t x144 = 2U;
	int64_t t30 = 3934413141705812482LL;

    t30 = (x141+((x142/x143)+x144));

    if (t30 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x145 = 0U;
	int32_t x146 = INT32_MAX;
	uint64_t x147 = UINT64_MAX;
	int32_t x148 = -1;

    t31 = (x145+((x146/x147)+x148));

    if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x150 = -841;
	int16_t x151 = -1;
	int32_t x152 = -1;
	int32_t t32 = 2659349;

    t32 = (x149+((x150/x151)+x152));

    if (t32 != 839) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x158 = INT64_MIN;
	int64_t x160 = -1LL;

    t33 = (x157+((x158/x159)+x160));

    if (t33 != -7355163261402927LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x162 = 78663738LLU;
	int64_t x163 = -34488882199LL;
	volatile uint64_t t34 = 401644008LLU;

    t34 = (x161+((x162/x163)+x164));

    if (t34 != 9223372036855276175LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint8_t x165 = UINT8_MAX;
	uint32_t x166 = 17328U;
	uint16_t x167 = 5U;
	uint64_t x168 = UINT64_MAX;
	volatile uint64_t t35 = 178646LLU;

    t35 = (x165+((x166/x167)+x168));

    if (t35 != 3719LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x169 = 310942;
	static int16_t x170 = INT16_MIN;
	int32_t x171 = -198641;
	static uint64_t x172 = 46573296503788LLU;
	volatile uint64_t t36 = 7297LLU;

    t36 = (x169+((x170/x171)+x172));

    if (t36 != 46573296814730LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x177 = -241706468LL;
	int16_t x178 = INT16_MIN;
	volatile int16_t x179 = INT16_MIN;
	int64_t x180 = -1LL;
	int64_t t37 = -52568888681809LL;

    t37 = (x177+((x178/x179)+x180));

    if (t37 != -241706468LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x186 = -1;
	volatile int64_t x187 = INT64_MIN;
	volatile int16_t x188 = INT16_MAX;
	int64_t t38 = 859LL;

    t38 = (x185+((x186/x187)+x188));

    if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x189 = UINT64_MAX;
	int16_t x190 = 1008;
	static int64_t x191 = INT64_MIN;
	uint32_t x192 = UINT32_MAX;
	volatile uint64_t t39 = 48082LLU;

    t39 = (x189+((x190/x191)+x192));

    if (t39 != 4294967294LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x194 = 850U;
	static int32_t x196 = INT32_MIN;
	static uint32_t t40 = 726U;

    t40 = (x193+((x194/x195)+x196));

    if (t40 != 2147483662U) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x197 = 62;
	uint8_t x198 = 1U;
	int64_t x199 = -37295208227997914LL;
	uint8_t x200 = 2U;
	int64_t t41 = -4190506LL;

    t41 = (x197+((x198/x199)+x200));

    if (t41 != 64LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static int32_t x202 = -261364;
	uint8_t x204 = 75U;
	static volatile int32_t t42 = 1;

    t42 = (x201+((x202/x203)+x204));

    if (t42 != 261440) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x205 = INT64_MIN;
	volatile uint64_t x207 = 165069084LLU;
	volatile uint64_t x208 = 1045354243163571LLU;
	static uint64_t t43 = 12872LLU;

    t43 = (x205+((x206/x207)+x208));

    if (t43 != 9224417391097939379LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x209 = 292725;
	static uint64_t x210 = 26LLU;
	int8_t x211 = INT8_MIN;
	volatile int64_t x212 = 1966360910981451303LL;
	uint64_t t44 = 2948LLU;

    t44 = (x209+((x210/x211)+x212));

    if (t44 != 1966360910981744028LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x213 = INT16_MIN;
	int32_t x214 = INT32_MIN;
	int64_t x215 = INT64_MAX;
	uint32_t x216 = 1844555062U;

    t45 = (x213+((x214/x215)+x216));

    if (t45 != 1844522294LL) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint64_t x217 = 6437220414783LLU;
	static uint64_t x218 = 715LLU;
	uint32_t x219 = 375U;
	volatile uint32_t x220 = 42U;
	volatile uint64_t t46 = 119628276629632137LLU;

    t46 = (x217+((x218/x219)+x220));

    if (t46 != 6437220414826LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x222 = INT8_MAX;
	uint32_t x224 = 370U;
	uint64_t t47 = 216LLU;

    t47 = (x221+((x222/x223)+x224));

    if (t47 != 369LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	static int16_t x229 = INT16_MAX;
	int64_t x230 = INT64_MIN;
	volatile int16_t x231 = INT16_MIN;
	volatile int32_t x232 = -52960;
	int64_t t48 = -1128374496LL;

    t48 = (x229+((x230/x231)+x232));

    if (t48 != 281474976690463LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x241 = -1;
	uint8_t x242 = UINT8_MAX;
	uint16_t x243 = 8882U;
	int32_t t49 = -1;

    t49 = (x241+((x242/x243)+x244));

    if (t49 != -2) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int64_t x246 = INT64_MIN;
	int32_t x247 = INT32_MAX;
	int16_t x248 = -16;
	volatile int64_t t50 = -435871474LL;

    t50 = (x245+((x246/x247)+x248));

    if (t50 != -4294934547LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x249 = 50U;
	uint8_t x250 = 6U;
	int8_t x252 = -1;

    t51 = (x249+((x250/x251)+x252));

    if (t51 != 43LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x253 = -76332029328554538LL;
	int64_t x254 = INT64_MIN;
	int8_t x255 = INT8_MIN;
	uint64_t x256 = UINT64_MAX;
	volatile uint64_t t52 = 1206866356020910167LLU;

    t52 = (x253+((x254/x255)+x256));

    if (t52 != 18442469638418925013LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x258 = 0;
	int16_t x259 = -123;
	uint64_t x260 = 19080058382LLU;
	volatile uint64_t t53 = 7008438LLU;

    t53 = (x257+((x258/x259)+x260));

    if (t53 != 19080058381LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x263 = -1LL;
	uint32_t x264 = 17U;
	volatile int64_t t54 = -6714283LL;

    t54 = (x261+((x262/x263)+x264));

    if (t54 != 17LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x265 = -4;
	uint8_t x266 = 12U;
	int32_t x267 = 97047292;
	uint8_t x268 = UINT8_MAX;
	int32_t t55 = -308348703;

    t55 = (x265+((x266/x267)+x268));

    if (t55 != 251) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x274 = INT8_MAX;
	volatile uint64_t x276 = 4402148LLU;
	static uint64_t t56 = 319659766955LLU;

    t56 = (x273+((x274/x275)+x276));

    if (t56 != 18446744071566470117LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x277 = 15258953486638818LLU;
	uint32_t x278 = UINT32_MAX;
	static volatile uint16_t x279 = UINT16_MAX;
	static int32_t x280 = INT32_MIN;

    t57 = (x277+((x278/x279)+x280));

    if (t57 != 15258955634188003LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x285 = -52;
	uint32_t x287 = 265606U;
	int8_t x288 = INT8_MIN;
	uint32_t t58 = 66728646U;

    t58 = (x285+((x286/x287)+x288));

    if (t58 != 4294967116U) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x289 = INT32_MAX;
	volatile uint32_t x291 = 197126U;
	uint64_t x292 = 24041920764174LLU;
	uint64_t t59 = 414546LLU;

    t59 = (x289+((x290/x291)+x292));

    if (t59 != 24044068247821LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x293 = -16418037324LL;
	volatile int32_t x294 = INT32_MIN;
	static int32_t x295 = INT32_MAX;
	int64_t t60 = -186386326244LL;

    t60 = (x293+((x294/x295)+x296));

    if (t60 != -16418037323LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x297 = 254914;
	int64_t x298 = 428036LL;
	uint8_t x299 = UINT8_MAX;
	volatile int8_t x300 = 1;
	volatile int64_t t61 = -2LL;

    t61 = (x297+((x298/x299)+x300));

    if (t61 != 256593LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x302 = -8753815;
	uint64_t x303 = 82038879LLU;
	int16_t x304 = INT16_MIN;

    t62 = (x301+((x302/x303)+x304));

    if (t62 != 224853682771LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint32_t x305 = 118151532U;
	int16_t x306 = -103;
	int16_t x307 = -39;
	int16_t x308 = -1;
	volatile uint32_t t63 = 1025057U;

    t63 = (x305+((x306/x307)+x308));

    if (t63 != 118151533U) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x309 = INT16_MAX;
	uint64_t x311 = UINT64_MAX;
	uint16_t x312 = 62U;
	volatile uint64_t t64 = 3LLU;

    t64 = (x309+((x310/x311)+x312));

    if (t64 != 32829LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x314 = INT32_MIN;
	volatile uint64_t x315 = UINT64_MAX;
	int32_t x316 = -1128459;
	static volatile uint64_t t65 = 8064767287LLU;

    t65 = (x313+((x314/x315)+x316));

    if (t65 != 18446744071560939509LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int64_t t66 = -318319375LL;

    t66 = (x317+((x318/x319)+x320));

    if (t66 != -2147338607LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x329 = -1;
	int32_t x330 = INT32_MIN;
	uint32_t x331 = 15050U;
	int64_t x332 = -1LL;
	int64_t t67 = 1227521336LL;

    t67 = (x329+((x330/x331)+x332));

    if (t67 != 142687LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x338 = INT8_MIN;
	int64_t x339 = INT64_MAX;
	uint64_t x340 = UINT64_MAX;
	uint64_t t68 = 232337594LLU;

    t68 = (x337+((x338/x339)+x340));

    if (t68 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x341 = INT8_MAX;
	uint8_t x342 = UINT8_MAX;
	volatile int8_t x343 = -1;
	uint16_t x344 = 36U;
	int32_t t69 = -986272;

    t69 = (x341+((x342/x343)+x344));

    if (t69 != -92) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x345 = 1;
	uint64_t x346 = 734921486636833350LLU;
	int16_t x347 = INT16_MIN;
	uint32_t x348 = 219140191U;

    t70 = (x345+((x346/x347)+x348));

    if (t70 != 219140192LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint64_t x351 = 126814502965836LLU;

    t71 = (x349+((x350/x351)+x352));

    if (t71 != 112949LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x357 = INT8_MAX;
	uint64_t x358 = UINT64_MAX;
	uint8_t x359 = UINT8_MAX;
	volatile int64_t x360 = -1LL;
	uint64_t t72 = 169481708LLU;

    t72 = (x357+((x358/x359)+x360));

    if (t72 != 72340172838076799LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x361 = -20;
	static uint32_t x362 = UINT32_MAX;
	uint64_t x363 = UINT64_MAX;
	volatile uint64_t x364 = 455537534LLU;
	volatile uint64_t t73 = 302993LLU;

    t73 = (x361+((x362/x363)+x364));

    if (t73 != 455537514LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x365 = INT16_MIN;
	uint16_t x366 = 364U;
	int8_t x367 = INT8_MIN;
	int32_t t74 = 5298;

    t74 = (x365+((x366/x367)+x368));

    if (t74 != -32774) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x373 = UINT16_MAX;
	static volatile int32_t x374 = INT32_MIN;
	volatile int16_t x375 = INT16_MAX;
	int64_t x376 = -1LL;
	volatile int64_t t75 = -726LL;

    t75 = (x373+((x374/x375)+x376));

    if (t75 != -4LL) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int8_t x377 = INT8_MAX;
	uint16_t x378 = 14123U;
	volatile uint64_t x380 = 2686LLU;
	uint64_t t76 = 16839274958744832LLU;

    t76 = (x377+((x378/x379)+x380));

    if (t76 != 2813LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x382 = -1;
	static int16_t x383 = INT16_MIN;
	uint32_t x384 = 15103U;
	uint32_t t77 = 159U;

    t77 = (x381+((x382/x383)+x384));

    if (t77 != 15103U) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x385 = -1;

    t78 = (x385+((x386/x387)+x388));

    if (t78 != -281477124194304LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x389 = -1;
	static int64_t x390 = INT64_MAX;
	volatile int16_t x391 = 13331;
	static int8_t x392 = 0;

    t79 = (x389+((x390/x391)+x392));

    if (t79 != 691873980710731LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x394 = -91;
	static uint16_t x395 = 63U;
	int32_t t80 = -116947;

    t80 = (x393+((x394/x395)+x396));

    if (t80 != -2147483522) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x398 = INT32_MIN;
	uint64_t x400 = UINT64_MAX;
	static uint64_t t81 = 865035187414831461LLU;

    t81 = (x397+((x398/x399)+x400));

    if (t81 != 18446744073709550861LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint8_t x401 = UINT8_MAX;
	int16_t x403 = -1;
	uint32_t x404 = UINT32_MAX;
	uint32_t t82 = 24U;

    t82 = (x401+((x402/x403)+x404));

    if (t82 != 382U) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x409 = UINT8_MAX;
	uint32_t x410 = UINT32_MAX;
	uint16_t x411 = UINT16_MAX;
	uint16_t x412 = 2U;
	uint32_t t83 = 84472U;

    t83 = (x409+((x410/x411)+x412));

    if (t83 != 65794U) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint16_t x417 = 4597U;
	uint64_t x418 = UINT64_MAX;
	static volatile int16_t x419 = INT16_MIN;
	volatile uint64_t t84 = 25113295206332788LLU;

    t84 = (x417+((x418/x419)+x420));

    if (t84 != 4791LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x430 = -2728;
	int32_t x431 = INT32_MAX;
	int32_t x432 = INT32_MIN;
	volatile int32_t t85 = 153504;

    t85 = (x429+((x430/x431)+x432));

    if (t85 != -2147483644) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x433 = 935557670157825201LLU;
	int16_t x435 = INT16_MIN;
	volatile uint64_t t86 = 5036845221799614LLU;

    t86 = (x433+((x434/x435)+x436));

    if (t86 != 935557670157825212LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x437 = -33521826680317LL;
	int64_t x439 = -9044291LL;
	volatile int64_t t87 = 17272761626874242LL;

    t87 = (x437+((x438/x439)+x440));

    if (t87 != -33521826650004LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x441 = 3227LLU;
	int32_t x443 = INT32_MIN;
	int32_t x444 = -1;
	static uint64_t t88 = 395502794434412LLU;

    t88 = (x441+((x442/x443)+x444));

    if (t88 != 3227LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int16_t x445 = INT16_MIN;
	int64_t x446 = 205070362LL;
	volatile int32_t x447 = INT32_MAX;
	volatile uint64_t x448 = 44LLU;
	uint64_t t89 = 198810LLU;

    t89 = (x445+((x446/x447)+x448));

    if (t89 != 18446744073709518892LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x449 = 77385701;
	static int64_t x450 = -1LL;
	int32_t x451 = -35240226;
	static int16_t x452 = INT16_MIN;
	int64_t t90 = -668279746185289526LL;

    t90 = (x449+((x450/x451)+x452));

    if (t90 != 77352933LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x453 = INT64_MIN;
	uint8_t x454 = 2U;
	volatile uint32_t x455 = 915552175U;

    t91 = (x453+((x454/x455)+x456));

    if (t91 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static int16_t x461 = -1;
	volatile uint8_t x462 = 7U;
	volatile uint8_t x463 = 49U;
	volatile int64_t x464 = -1LL;
	static volatile int64_t t92 = -34277632195720LL;

    t92 = (x461+((x462/x463)+x464));

    if (t92 != -2LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x469 = 160615LLU;
	volatile uint32_t x471 = 112808235U;
	uint64_t t93 = 63839600LLU;

    t93 = (x469+((x470/x471)+x472));

    if (t93 != 18445238265763655411LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x473 = -1;
	int32_t x474 = 97456544;
	uint16_t x476 = 27040U;
	volatile int32_t t94 = 36;

    t94 = (x473+((x474/x475)+x476));

    if (t94 != 24065) { NG(); } else { ; }
	
}

void f95(void) {
    	static int16_t x477 = 0;
	uint32_t x480 = UINT32_MAX;
	volatile uint32_t t95 = UINT32_MAX;

    t95 = (x477+((x478/x479)+x480));

    if (t95 != UINT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x483 = INT16_MAX;
	int32_t t96 = -68;

    t96 = (x481+((x482/x483)+x484));

    if (t96 != 543172) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x490 = 11U;
	uint16_t x491 = 2U;
	volatile int32_t t97 = 3572466;

    t97 = (x489+((x490/x491)+x492));

    if (t97 != 261) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int32_t x493 = -1;
	volatile int64_t x494 = -75654455LL;
	uint8_t x495 = UINT8_MAX;
	volatile int32_t x496 = INT32_MIN;
	int64_t t98 = 10222LL;

    t98 = (x493+((x494/x495)+x496));

    if (t98 != -2147780333LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x497 = 1U;
	int32_t x498 = 0;
	volatile int16_t x500 = 1;
	static int64_t t99 = -385773116LL;

    t99 = (x497+((x498/x499)+x500));

    if (t99 != 2LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x501 = -1;
	int32_t x502 = -1;
	static int32_t x504 = INT32_MIN;
	uint64_t t100 = 14676739461LLU;

    t100 = (x501+((x502/x503)+x504));

    if (t100 != 18446744071570820486LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x505 = INT32_MIN;
	int32_t x506 = INT32_MAX;
	int16_t x507 = INT16_MIN;
	uint64_t x508 = 194682061186505LLU;
	volatile uint64_t t101 = 7LLU;

    t101 = (x505+((x506/x507)+x508));

    if (t101 != 194679913637322LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x509 = INT64_MIN;
	int8_t x511 = -15;
	int64_t t102 = -418666294255LL;

    t102 = (x509+((x510/x511)+x512));

    if (t102 != -9223372036854710272LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x513 = 1;
	int32_t x514 = INT32_MIN;
	int16_t x515 = -3194;
	volatile int64_t t103 = -7736999913LL;

    t103 = (x513+((x514/x515)+x516));

    if (t103 != -9223372036854103458LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x517 = 679872174LLU;
	static int16_t x518 = -7;
	uint8_t x519 = 92U;
	int16_t x520 = -3;
	volatile uint64_t t104 = 11LLU;

    t104 = (x517+((x518/x519)+x520));

    if (t104 != 679872171LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static int8_t x525 = -11;
	int64_t x526 = INT64_MIN;
	int16_t x527 = 19;
	int8_t x528 = INT8_MIN;
	int64_t t105 = -328384LL;

    t105 = (x525+((x526/x527)+x528));

    if (t105 != -485440633518672549LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x529 = UINT16_MAX;
	int8_t x530 = INT8_MIN;
	uint64_t x532 = 522152239863408733LLU;
	volatile uint64_t t106 = 35081927LLU;

    t106 = (x529+((x530/x531)+x532));

    if (t106 != 522152239863474268LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x533 = INT8_MAX;
	uint8_t x535 = UINT8_MAX;
	int32_t t107 = -30078;

    t107 = (x533+((x534/x535)+x536));

    if (t107 != 131) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x537 = INT16_MIN;
	int8_t x538 = -1;
	int64_t x539 = INT64_MIN;
	volatile int64_t x540 = -2634LL;
	volatile int64_t t108 = 892895115LL;

    t108 = (x537+((x538/x539)+x540));

    if (t108 != -35402LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x541 = 1;
	int8_t x542 = -1;
	static int8_t x543 = INT8_MIN;
	volatile uint16_t x544 = 27U;
	int32_t t109 = -434323542;

    t109 = (x541+((x542/x543)+x544));

    if (t109 != 28) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x545 = 1;
	int16_t x546 = -34;
	uint16_t x547 = 3197U;
	volatile int8_t x548 = INT8_MAX;
	volatile int32_t t110 = 383;

    t110 = (x545+((x546/x547)+x548));

    if (t110 != 128) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x553 = 4U;
	uint32_t x554 = 299895U;
	int8_t x556 = 50;
	volatile uint32_t t111 = 27602994U;

    t111 = (x553+((x554/x555)+x556));

    if (t111 != 2259U) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x557 = -1;
	volatile int32_t x558 = -792058;
	int8_t x559 = INT8_MIN;
	int16_t x560 = INT16_MIN;
	volatile int32_t t112 = 2582;

    t112 = (x557+((x558/x559)+x560));

    if (t112 != -26582) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x561 = INT16_MIN;
	int8_t x564 = INT8_MIN;
	volatile int32_t t113 = 320872751;

    t113 = (x561+((x562/x563)+x564));

    if (t113 != -32896) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x565 = -1;
	volatile int32_t x566 = 10779039;
	int16_t x567 = INT16_MIN;

    t114 = (x565+((x566/x567)+x568));

    if (t114 != -2081646) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x569 = UINT64_MAX;
	uint16_t x570 = 131U;
	static int8_t x571 = INT8_MAX;
	uint64_t x572 = UINT64_MAX;

    t115 = (x569+((x570/x571)+x572));

    if (t115 != UINT64_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x573 = 5;
	int32_t x574 = 937993882;
	int64_t x576 = -1LL;
	uint64_t t116 = 1650LLU;

    t116 = (x573+((x574/x575)+x576));

    if (t116 != 4LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x577 = UINT8_MAX;
	uint32_t x578 = UINT32_MAX;
	uint16_t x579 = UINT16_MAX;
	static uint32_t x580 = 2U;
	uint32_t t117 = 438818U;

    t117 = (x577+((x578/x579)+x580));

    if (t117 != 65794U) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x581 = 46U;
	uint64_t x582 = 4294230LLU;
	uint64_t x583 = 5289587018236824718LLU;
	int32_t x584 = 5289442;
	uint64_t t118 = 468106455LLU;

    t118 = (x581+((x582/x583)+x584));

    if (t118 != 5289488LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint64_t x585 = 23LLU;
	int8_t x586 = -45;
	int16_t x587 = INT16_MAX;
	volatile uint64_t t119 = 535LLU;

    t119 = (x585+((x586/x587)+x588));

    if (t119 != 18446744073709551511LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x589 = -60;
	uint64_t x590 = UINT64_MAX;
	int32_t x591 = INT32_MIN;
	int64_t x592 = INT64_MIN;
	volatile uint64_t t120 = 156580571747LLU;

    t120 = (x589+((x590/x591)+x592));

    if (t120 != 9223372036854775749LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint8_t x593 = 3U;
	int32_t x594 = -1;
	uint16_t x595 = 1515U;
	static uint32_t x596 = 52304U;

    t121 = (x593+((x594/x595)+x596));

    if (t121 != 52307U) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x597 = 27U;
	volatile uint32_t x598 = 14553701U;
	uint8_t x599 = 3U;
	volatile uint16_t x600 = 1196U;

    t122 = (x597+((x598/x599)+x600));

    if (t122 != 4852456U) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x601 = -3119;
	uint16_t x602 = 11U;
	int64_t x604 = -19452LL;
	static volatile int64_t t123 = 1491439LL;

    t123 = (x601+((x602/x603)+x604));

    if (t123 != -22571LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x605 = UINT8_MAX;
	int16_t x606 = INT16_MIN;
	uint16_t x607 = UINT16_MAX;
	int8_t x608 = INT8_MAX;
	volatile int32_t t124 = -6209406;

    t124 = (x605+((x606/x607)+x608));

    if (t124 != 382) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint32_t x618 = 273U;

    t125 = (x617+((x618/x619)+x620));

    if (t125 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x622 = 13U;
	volatile int8_t x623 = INT8_MIN;
	uint64_t x624 = 67531728LLU;
	volatile uint64_t t126 = 21314977294677LLU;

    t126 = (x621+((x622/x623)+x624));

    if (t126 != 67531729LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x625 = UINT32_MAX;
	int32_t x626 = INT32_MIN;
	int32_t x627 = INT32_MAX;

    t127 = (x625+((x626/x627)+x628));

    if (t127 != 81U) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x629 = -24;
	uint32_t x630 = 1U;
	static int64_t x631 = INT64_MIN;
	volatile int64_t t128 = 245172998527699LL;

    t128 = (x629+((x630/x631)+x632));

    if (t128 != -16LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x637 = -1;
	volatile int8_t x638 = INT8_MAX;
	int8_t x639 = INT8_MIN;
	int16_t x640 = -1;
	static int32_t t129 = 1;

    t129 = (x637+((x638/x639)+x640));

    if (t129 != -2) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x641 = -1LL;
	int16_t x642 = INT16_MAX;
	uint8_t x643 = UINT8_MAX;
	static int64_t t130 = 1LL;

    t130 = (x641+((x642/x643)+x644));

    if (t130 != 3482LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x646 = -1LL;
	int16_t x647 = INT16_MIN;
	int64_t t131 = -1271028301LL;

    t131 = (x645+((x646/x647)+x648));

    if (t131 != 652LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x657 = 5U;
	int16_t x658 = 485;
	int64_t x659 = INT64_MIN;
	int64_t x660 = INT64_MIN;

    t132 = (x657+((x658/x659)+x660));

    if (t132 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int64_t x661 = INT64_MAX;
	volatile int64_t x662 = INT64_MIN;
	uint64_t x663 = 29659LLU;
	static int16_t x664 = 0;
	static uint64_t t133 = 63262488726225LLU;

    t133 = (x661+((x662/x663)+x664));

    if (t133 != 9223683017401552663LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x665 = INT64_MIN;
	static int64_t x666 = -1LL;
	int8_t x667 = INT8_MIN;
	int64_t t134 = 6039LL;

    t134 = (x665+((x666/x667)+x668));

    if (t134 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x673 = 28U;
	int32_t x674 = -1;
	int32_t x676 = INT32_MIN;
	volatile uint32_t t135 = 793214312U;

    t135 = (x673+((x674/x675)+x676));

    if (t135 != 2147483677U) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x677 = 14842LL;
	volatile uint16_t x678 = 11789U;
	volatile int64_t x679 = INT64_MIN;
	int64_t x680 = 12017391688LL;
	int64_t t136 = -841355078LL;

    t136 = (x677+((x678/x679)+x680));

    if (t136 != 12017406530LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x681 = INT64_MIN;
	int8_t x682 = 1;
	int64_t x683 = INT64_MIN;
	volatile uint64_t x684 = 221LLU;
	uint64_t t137 = 111LLU;

    t137 = (x681+((x682/x683)+x684));

    if (t137 != 9223372036854776029LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x686 = -5;
	uint64_t x687 = UINT64_MAX;
	volatile uint32_t x688 = 17U;
	volatile uint64_t t138 = 4206821992355007LLU;

    t138 = (x685+((x686/x687)+x688));

    if (t138 != 125082608LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x694 = -1;
	volatile int32_t x695 = INT32_MIN;
	volatile uint32_t t139 = 5609U;

    t139 = (x693+((x694/x695)+x696));

    if (t139 != 98640167U) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x698 = INT8_MAX;
	volatile int32_t x699 = -1;
	static int32_t x700 = -2626;
	volatile int32_t t140 = 5;

    t140 = (x697+((x698/x699)+x700));

    if (t140 != 2147480894) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile int8_t x701 = INT8_MIN;
	volatile int8_t x702 = INT8_MIN;
	volatile uint16_t x703 = UINT16_MAX;
	static volatile int8_t x704 = INT8_MIN;
	volatile int32_t t141 = 1;

    t141 = (x701+((x702/x703)+x704));

    if (t141 != -256) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x705 = INT16_MIN;
	int8_t x706 = -1;
	static uint8_t x707 = 111U;
	static volatile int8_t x708 = 5;
	int32_t t142 = 406168323;

    t142 = (x705+((x706/x707)+x708));

    if (t142 != -32763) { NG(); } else { ; }
	
}

void f143(void) {
    	static int8_t x710 = INT8_MIN;
	static volatile int32_t x712 = -1;
	int32_t t143 = 51929329;

    t143 = (x709+((x710/x711)+x712));

    if (t143 != -14562) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x713 = INT8_MAX;
	uint8_t x714 = UINT8_MAX;
	static uint64_t x715 = UINT64_MAX;
	int64_t x716 = -1LL;
	volatile uint64_t t144 = 501359264025769091LLU;

    t144 = (x713+((x714/x715)+x716));

    if (t144 != 126LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x717 = INT16_MIN;
	int16_t x718 = 6;
	volatile int8_t x719 = INT8_MIN;
	volatile int32_t x720 = -1;
	volatile int32_t t145 = 0;

    t145 = (x717+((x718/x719)+x720));

    if (t145 != -32769) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x721 = -4;
	volatile uint64_t x722 = UINT64_MAX;
	volatile int8_t x723 = INT8_MIN;
	uint16_t x724 = UINT16_MAX;

    t146 = (x721+((x722/x723)+x724));

    if (t146 != 65532LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x725 = 0U;
	int32_t x726 = -1;
	static volatile int8_t x728 = -2;
	int64_t t147 = -30866LL;

    t147 = (x725+((x726/x727)+x728));

    if (t147 != -2LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x729 = 0;
	int8_t x730 = INT8_MIN;
	uint32_t x731 = UINT32_MAX;
	static volatile uint8_t x732 = 2U;
	static volatile uint32_t t148 = 265U;

    t148 = (x729+((x730/x731)+x732));

    if (t148 != 2U) { NG(); } else { ; }
	
}

void f149(void) {
    	static int32_t x733 = -1;
	int64_t x734 = -53LL;
	uint16_t x735 = 2837U;
	volatile int32_t x736 = INT32_MIN;
	static volatile int64_t t149 = -9LL;

    t149 = (x733+((x734/x735)+x736));

    if (t149 != -2147483649LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x738 = INT64_MIN;
	volatile int32_t x739 = INT32_MIN;
	volatile int64_t t150 = -24128257LL;

    t150 = (x737+((x738/x739)+x740));

    if (t150 != 3799987161LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x741 = -4;
	int8_t x742 = -6;
	uint64_t x743 = UINT64_MAX;
	uint8_t x744 = 5U;
	volatile uint64_t t151 = 14182556270LLU;

    t151 = (x741+((x742/x743)+x744));

    if (t151 != 1LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x753 = 8U;
	uint32_t x754 = 27984U;
	uint8_t x755 = 1U;
	static uint64_t t152 = 1496222769031331635LLU;

    t152 = (x753+((x754/x755)+x756));

    if (t152 != 736378421663LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x758 = 8U;
	int64_t x759 = -1LL;
	int32_t x760 = INT32_MAX;
	volatile int64_t t153 = 966299LL;

    t153 = (x757+((x758/x759)+x760));

    if (t153 != 2147483638LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x761 = UINT8_MAX;
	int16_t x762 = INT16_MIN;
	static volatile int16_t x763 = INT16_MIN;
	uint32_t x764 = 133U;
	uint32_t t154 = 52U;

    t154 = (x761+((x762/x763)+x764));

    if (t154 != 389U) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile uint16_t x765 = 4341U;
	volatile int64_t x767 = 254655914732747895LL;
	int64_t x768 = 26979372LL;
	volatile int64_t t155 = -18135045LL;

    t155 = (x765+((x766/x767)+x768));

    if (t155 != 26983713LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x769 = INT16_MIN;
	int32_t x770 = -1;
	uint64_t x772 = UINT64_MAX;
	uint64_t t156 = 120406395320423593LLU;

    t156 = (x769+((x770/x771)+x772));

    if (t156 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x777 = UINT64_MAX;
	uint32_t x778 = 773443U;
	volatile int64_t x779 = 3599083499396386LL;
	volatile uint8_t x780 = 92U;

    t157 = (x777+((x778/x779)+x780));

    if (t157 != 91LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint64_t x785 = 4520685222LLU;
	int32_t x787 = -4306673;
	int8_t x788 = -40;
	uint64_t t158 = 12LLU;

    t158 = (x785+((x786/x787)+x788));

    if (t158 != 4520685182LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x789 = INT32_MIN;
	static uint16_t x790 = UINT16_MAX;
	volatile int16_t x791 = INT16_MIN;
	int32_t t159 = 1;

    t159 = (x789+((x790/x791)+x792));

    if (t159 != -2146889197) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x793 = UINT16_MAX;
	volatile uint8_t x794 = 65U;
	int8_t x796 = INT8_MIN;
	static int32_t t160 = 3783;

    t160 = (x793+((x794/x795)+x796));

    if (t160 != 65407) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x798 = INT16_MIN;
	uint64_t x799 = 6044568LLU;
	int32_t x800 = INT32_MIN;
	static volatile uint64_t t161 = 5570273807716LLU;

    t161 = (x797+((x798/x799)+x800));

    if (t161 != 3049641208574LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint64_t x801 = 2997500850279079LLU;
	int8_t x804 = INT8_MIN;
	static uint64_t t162 = 4534787809LLU;

    t162 = (x801+((x802/x803)+x804));

    if (t162 != 2997500850278933LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x805 = 8U;
	static int16_t x806 = INT16_MAX;
	int32_t x807 = INT32_MAX;
	volatile uint64_t t163 = 2217973954468024830LLU;

    t163 = (x805+((x806/x807)+x808));

    if (t163 != 90987656310511LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x810 = -16302;
	uint32_t x812 = 44U;
	uint32_t t164 = 823079U;

    t164 = (x809+((x810/x811)+x812));

    if (t164 != 26U) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x816 = INT8_MAX;

    t165 = (x813+((x814/x815)+x816));

    if (t165 != 3418U) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x818 = INT64_MIN;
	uint64_t t166 = 3164667047801LLU;

    t166 = (x817+((x818/x819)+x820));

    if (t166 != 18374119097041371006LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint32_t x821 = 107717575U;
	int64_t x822 = INT64_MIN;
	static volatile int32_t x824 = INT32_MIN;
	volatile int64_t t167 = 55605LL;

    t167 = (x821+((x822/x823)+x824));

    if (t167 != 1674235033542109LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x825 = INT32_MIN;
	int32_t x826 = INT32_MIN;
	static volatile int64_t x827 = -577941LL;
	uint16_t x828 = UINT16_MAX;
	volatile int64_t t168 = 12412140701918LL;

    t168 = (x825+((x826/x827)+x828));

    if (t168 != -2147414398LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x829 = INT8_MIN;
	int16_t x830 = -741;
	uint32_t x831 = UINT32_MAX;
	volatile int64_t x832 = 379103327490972LL;
	int64_t t169 = 104644256290LL;

    t169 = (x829+((x830/x831)+x832));

    if (t169 != 379103327490844LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x833 = -4;
	static int8_t x834 = INT8_MIN;
	int16_t x835 = -1;
	int32_t x836 = 2;

    t170 = (x833+((x834/x835)+x836));

    if (t170 != 126) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x837 = INT8_MIN;
	volatile int8_t x838 = -1;
	int32_t x839 = INT32_MIN;
	volatile int32_t t171 = -210605;

    t171 = (x837+((x838/x839)+x840));

    if (t171 != 2147483519) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x845 = UINT16_MAX;
	int32_t x848 = INT32_MAX;

    t172 = (x845+((x846/x847)+x848));

    if (t172 != 2147549182LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x849 = INT8_MAX;
	int64_t x850 = INT64_MIN;
	int8_t x851 = INT8_MIN;
	uint64_t x852 = UINT64_MAX;
	volatile uint64_t t173 = 18994421LLU;

    t173 = (x849+((x850/x851)+x852));

    if (t173 != 72057594037928062LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x853 = UINT16_MAX;
	static uint16_t x855 = 31U;
	int32_t x856 = -836168320;
	volatile int32_t t174 = -1;

    t174 = (x853+((x854/x855)+x856));

    if (t174 != -836146342) { NG(); } else { ; }
	
}

void f175(void) {
    	static int8_t x858 = INT8_MIN;
	int32_t x859 = INT32_MIN;
	volatile uint64_t t175 = 15675586499917LLU;

    t175 = (x857+((x858/x859)+x860));

    if (t175 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint16_t x861 = UINT16_MAX;
	uint64_t x862 = 3891528257LLU;
	int8_t x863 = INT8_MIN;
	static int16_t x864 = INT16_MAX;
	uint64_t t176 = 83119510LLU;

    t176 = (x861+((x862/x863)+x864));

    if (t176 != 98302LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x865 = 27U;
	int16_t x866 = INT16_MIN;
	int32_t x868 = 53;
	int32_t t177 = -1178480;

    t177 = (x865+((x866/x867)+x868));

    if (t177 != -10842) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int64_t x870 = INT64_MAX;
	int32_t x871 = INT32_MIN;
	int8_t x872 = 2;

    t178 = (x869+((x870/x871)+x872));

    if (t178 != -3796383355LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint64_t x874 = 63157LLU;
	static int64_t x875 = INT64_MAX;
	int8_t x876 = 1;
	volatile uint64_t t179 = 21LLU;

    t179 = (x873+((x874/x875)+x876));

    if (t179 != 256LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x878 = -1LL;
	int32_t x879 = -1;
	int64_t x880 = INT64_MIN;
	volatile int64_t t180 = 9974092603LL;

    t180 = (x877+((x878/x879)+x880));

    if (t180 != -9223372036854775552LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x881 = -1;
	volatile int8_t x882 = INT8_MIN;
	int8_t x884 = -1;
	int64_t t181 = -2228842281663875413LL;

    t181 = (x881+((x882/x883)+x884));

    if (t181 != -2LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x885 = INT8_MAX;
	static uint16_t x886 = UINT16_MAX;
	uint64_t x888 = 2045LLU;
	static volatile uint64_t t182 = 39146746579650790LLU;

    t182 = (x885+((x886/x887)+x888));

    if (t182 != 2586LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x889 = INT16_MAX;
	volatile int16_t x890 = 3;
	int64_t x891 = INT64_MIN;
	uint8_t x892 = 12U;
	volatile int64_t t183 = 77946012LL;

    t183 = (x889+((x890/x891)+x892));

    if (t183 != 32779LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x893 = -1;
	int16_t x894 = -204;
	uint64_t x896 = 35651262572108401LLU;
	uint64_t t184 = 13220558860LLU;

    t184 = (x893+((x894/x895)+x896));

    if (t184 != 35651262901767166LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint16_t x898 = UINT16_MAX;
	volatile int64_t x899 = INT64_MIN;
	int16_t x900 = INT16_MAX;
	int64_t t185 = 700505607529148LL;

    t185 = (x897+((x898/x899)+x900));

    if (t185 != 32768LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x901 = INT8_MIN;
	int8_t x902 = -2;
	static int8_t x903 = INT8_MAX;
	int64_t x904 = INT64_MAX;

    t186 = (x901+((x902/x903)+x904));

    if (t186 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x905 = -1;
	uint32_t x906 = 1175589237U;
	static int16_t x907 = INT16_MAX;
	uint8_t x908 = 2U;
	uint32_t t187 = 239460U;

    t187 = (x905+((x906/x907)+x908));

    if (t187 != 35878U) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x913 = INT8_MIN;
	volatile int8_t x914 = INT8_MAX;
	int64_t x915 = -59145706230567LL;
	static volatile uint32_t x916 = 1U;

    t188 = (x913+((x914/x915)+x916));

    if (t188 != -127LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x918 = 591002LLU;
	uint8_t x919 = 3U;
	uint64_t t189 = 31389272627LLU;

    t189 = (x917+((x918/x919)+x920));

    if (t189 != 324924LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint64_t x921 = UINT64_MAX;
	uint8_t x922 = 0U;
	volatile int16_t x923 = 1557;
	static uint16_t x924 = 24468U;
	volatile uint64_t t190 = 3411857710LLU;

    t190 = (x921+((x922/x923)+x924));

    if (t190 != 24467LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint8_t x925 = UINT8_MAX;
	volatile int8_t x926 = INT8_MIN;
	volatile int32_t x927 = -1;
	int16_t x928 = -7189;
	static volatile int32_t t191 = -1684863;

    t191 = (x925+((x926/x927)+x928));

    if (t191 != -6806) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x929 = 0;
	static int8_t x930 = 0;
	static int8_t x932 = 3;
	volatile int64_t t192 = -7570204522880LL;

    t192 = (x929+((x930/x931)+x932));

    if (t192 != 3LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x933 = 27U;
	static volatile int64_t x934 = -886310352259898LL;
	volatile int16_t x935 = INT16_MIN;
	static uint32_t x936 = 2U;
	int64_t t193 = -15774301LL;

    t193 = (x933+((x934/x935)+x936));

    if (t193 != 27048045447LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x939 = 3U;
	int16_t x940 = INT16_MAX;
	uint64_t t194 = 0LLU;

    t194 = (x937+((x938/x939)+x940));

    if (t194 != 6148914692450500539LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x941 = 119;
	static uint8_t x942 = UINT8_MAX;
	volatile uint64_t x943 = UINT64_MAX;
	volatile int8_t x944 = -14;
	uint64_t t195 = 40474586LLU;

    t195 = (x941+((x942/x943)+x944));

    if (t195 != 105LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int16_t x947 = -1814;
	uint32_t x948 = 507443U;
	static uint32_t t196 = 0U;

    t196 = (x945+((x946/x947)+x948));

    if (t196 != 507698U) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x953 = -4624;
	uint8_t x954 = UINT8_MAX;
	volatile uint64_t x955 = 9428544862LLU;
	static uint32_t x956 = 11U;
	static volatile uint64_t t197 = 20832580937422137LLU;

    t197 = (x953+((x954/x955)+x956));

    if (t197 != 18446744073709547003LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x957 = 8511U;
	uint32_t x959 = UINT32_MAX;
	uint64_t x960 = 233728590390609LLU;

    t198 = (x957+((x958/x959)+x960));

    if (t198 != 233732885366417LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x961 = 244LL;
	int8_t x963 = INT8_MIN;
	uint8_t x964 = 93U;
	int64_t t199 = 11659212LL;

    t199 = (x961+((x962/x963)+x964));

    if (t199 != 337LL) { NG(); } else { ; }
	
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

