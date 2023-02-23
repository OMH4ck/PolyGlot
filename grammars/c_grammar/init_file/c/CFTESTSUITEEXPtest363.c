
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

static int64_t t0 = 873505565LL;
uint8_t x16 = 23U;
volatile int8_t x18 = -1;
int16_t x41 = INT16_MIN;
int8_t x42 = -3;
int64_t x51 = INT64_MIN;
int64_t t9 = -961552541991814769LL;
uint64_t x54 = 1483657LLU;
static uint64_t x64 = 226LLU;
volatile int32_t x68 = 521019;
static volatile int16_t x71 = -7560;
uint64_t x76 = 482639LLU;
volatile int32_t t16 = -63142;
int64_t x87 = INT64_MAX;
uint64_t t17 = 5564266963962809025LLU;
int16_t x90 = 60;
static uint16_t x101 = 10345U;
static volatile uint8_t x103 = 73U;
int32_t x109 = INT32_MIN;
uint16_t x117 = 7U;
int8_t x120 = -56;
int32_t x125 = 44584789;
static int64_t x129 = INT64_MIN;
int64_t x138 = INT64_MIN;
int64_t x139 = INT64_MIN;
int64_t t28 = INT64_MIN;
int16_t x142 = 3;
int32_t x151 = -1;
int32_t t31 = -32598045;
int32_t x153 = INT32_MIN;
int8_t x154 = -1;
uint16_t x155 = UINT16_MAX;
volatile int16_t x165 = -8416;
uint8_t x166 = 2U;
static uint64_t x174 = UINT64_MAX;
volatile uint64_t t38 = 112979537356930LLU;
int16_t x182 = -1;
volatile int32_t x185 = INT32_MIN;
int16_t x191 = -513;
static volatile uint64_t t41 = 1829777519934377LLU;
uint64_t t45 = 2816117042774LLU;
volatile int64_t x215 = 358LL;
int16_t x218 = 2374;
int8_t x219 = -1;
uint32_t x221 = 140U;
static int32_t x225 = -1;
uint16_t x227 = 4183U;
volatile int8_t x239 = INT8_MAX;
int8_t x244 = -1;
volatile int64_t t53 = -544LL;
uint64_t x245 = 10LLU;
int8_t x247 = INT8_MIN;
uint8_t x248 = 7U;
int8_t x260 = -1;
static volatile int32_t t55 = 12142;
int64_t x262 = INT64_MIN;
int64_t x264 = -7080LL;
static volatile uint64_t t56 = 124042LLU;
volatile int8_t x265 = INT8_MIN;
uint32_t x268 = 12283922U;
volatile uint16_t x272 = UINT16_MAX;
static volatile int64_t t59 = -13418137357477LL;
volatile int64_t x283 = 53853861682631513LL;
uint32_t t61 = 7171U;
int16_t x293 = INT16_MIN;
int64_t t63 = 108945021917LL;
int8_t x297 = INT8_MAX;
uint8_t x303 = 1U;
int32_t x307 = 335080;
static uint8_t x308 = 0U;
uint32_t x309 = 2U;
int16_t x317 = INT16_MAX;
static uint32_t x321 = 119456U;
static int16_t x339 = INT16_MIN;
int8_t x356 = INT8_MIN;
static int16_t x359 = INT16_MIN;
static int64_t t77 = 832191089LL;
int8_t x366 = INT8_MAX;
int64_t x370 = INT64_MIN;
int64_t x372 = -1LL;
int64_t x389 = INT64_MIN;
static volatile int16_t x398 = INT16_MIN;
static volatile int8_t x402 = INT8_MIN;
int8_t x405 = INT8_MIN;
static uint8_t x406 = UINT8_MAX;
int32_t x408 = -391;
uint64_t t88 = UINT64_MAX;
uint32_t x422 = 199078U;
int8_t x424 = 5;
volatile int64_t x433 = INT64_MAX;
uint32_t x437 = UINT32_MAX;
int8_t x438 = -1;
volatile int64_t t93 = -302518LL;
static int64_t x445 = INT64_MIN;
uint32_t x446 = UINT32_MAX;
static uint16_t x448 = UINT16_MAX;
volatile uint64_t x454 = 7260612083240LLU;
int8_t x456 = INT8_MAX;
int64_t x465 = INT64_MIN;
int32_t x467 = INT32_MIN;
int64_t t97 = 48560526614955LL;
uint8_t x470 = UINT8_MAX;
static int32_t x475 = -1318367;
static int8_t x487 = INT8_MIN;
int8_t x502 = -1;
uint32_t t106 = UINT32_MAX;
uint16_t x524 = 890U;
int32_t t111 = 6916507;
int32_t x542 = 44;
volatile uint64_t t113 = 3864191478839282225LLU;
int8_t x552 = -1;
uint16_t x571 = UINT16_MAX;
volatile int8_t x574 = INT8_MIN;
static int64_t x576 = -1LL;
uint32_t x581 = UINT32_MAX;
int16_t x586 = INT16_MIN;
uint64_t x588 = 1351885322280LLU;
volatile int8_t x589 = INT8_MAX;
int32_t x592 = INT32_MIN;
volatile int64_t x609 = INT64_MIN;
uint8_t x611 = 10U;
static volatile int32_t x615 = 299;
volatile uint32_t x616 = 2U;
uint64_t t127 = 65481896LLU;
static uint16_t x617 = 29U;
volatile uint8_t x622 = 5U;
static int16_t x635 = INT16_MIN;
uint16_t x636 = UINT16_MAX;
int64_t x639 = INT64_MAX;
int64_t t132 = 10830975672300930LL;
int64_t x642 = -1066003066LL;
int16_t x646 = -1;
int8_t x647 = INT8_MAX;
int32_t t135 = 670488458;
int16_t x654 = INT16_MAX;
static uint16_t x656 = 25881U;
uint16_t x657 = 3U;
int16_t x666 = 2793;
int32_t t140 = -88808161;
int8_t x681 = INT8_MAX;
uint8_t x683 = 25U;
int8_t x694 = INT8_MAX;
static int32_t x697 = -1;
static int32_t x703 = INT32_MAX;
int8_t x711 = INT8_MIN;
uint8_t x722 = 54U;
int16_t x723 = -2;
volatile uint32_t t152 = UINT32_MAX;
int16_t x728 = INT16_MIN;
volatile uint8_t x733 = UINT8_MAX;
volatile int64_t t155 = 17217628LL;
int16_t x742 = 114;
int32_t x744 = -42596426;
uint64_t x747 = 1197654062LLU;
int16_t x751 = -6;
int32_t x757 = INT32_MAX;
int16_t x759 = INT16_MIN;
int32_t x761 = INT32_MAX;
static uint32_t x762 = 11322775U;
int32_t t166 = 0;
static uint64_t x787 = 2778770346430781190LLU;
static uint64_t t167 = 5613262819465404LLU;
int16_t x795 = INT16_MAX;
static uint16_t x798 = 22118U;
int32_t x807 = INT32_MIN;
volatile int64_t t172 = 58213160678368LL;
uint8_t x814 = UINT8_MAX;
uint64_t x816 = 7376400LLU;
int64_t x822 = -10341524506543LL;
int8_t x825 = INT8_MIN;
volatile int32_t t175 = 7;
volatile int64_t t176 = 282307001489658359LL;
uint32_t x840 = 119253877U;
volatile int64_t t178 = 6333933357616345LL;
int32_t x850 = 17913542;
uint64_t t181 = 59945593130860LLU;
int16_t x853 = -1;
static uint8_t x857 = 120U;
uint64_t t186 = 337477947227591843LLU;
volatile int8_t x874 = -1;
volatile int32_t x876 = -1;
volatile int8_t x883 = -1;
uint32_t x888 = UINT32_MAX;
static uint64_t t191 = 100194892667317LLU;
int32_t x893 = INT32_MIN;
uint32_t x896 = UINT32_MAX;
int16_t x898 = 2;
int32_t x903 = 628;
volatile int64_t t195 = 1LL;
int32_t x909 = -1;
static int32_t t196 = -1;
int8_t x914 = -1;
uint8_t x923 = 1U;


void f0(void) {
    	int8_t x1 = INT8_MIN;
	int8_t x2 = 1;
	int16_t x3 = INT16_MIN;
	int64_t x4 = -1LL;

    t0 = (x1|((x2-x3)&x4));

    if (t0 != -127LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x9 = -3407LL;
	static int16_t x10 = -12;
	uint64_t x11 = 996LLU;
	static int64_t x12 = -14530285805596LL;
	uint64_t t1 = 23636398752987LLU;

    t1 = (x9|((x10-x11)&x12));

    if (t1 != 18446744073709551281LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint32_t x13 = 2374U;
	static volatile int8_t x14 = INT8_MIN;
	volatile int16_t x15 = -1;
	volatile uint32_t t2 = 1398871525U;

    t2 = (x13|((x14-x15)&x16));

    if (t2 != 2375U) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile int8_t x17 = -1;
	int64_t x19 = INT64_MAX;
	int64_t x20 = 203LL;
	int64_t t3 = 1875576003635LL;

    t3 = (x17|((x18-x19)&x20));

    if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x25 = -5;
	int16_t x26 = INT16_MIN;
	int8_t x27 = -6;
	static uint64_t x28 = UINT64_MAX;
	volatile uint64_t t4 = UINT64_MAX;

    t4 = (x25|((x26-x27)&x28));

    if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x29 = INT8_MAX;
	static int64_t x30 = -1LL;
	int16_t x31 = -1;
	int16_t x32 = INT16_MAX;
	int64_t t5 = -2291221626053858241LL;

    t5 = (x29|((x30-x31)&x32));

    if (t5 != 127LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x33 = 114329LLU;
	int16_t x34 = INT16_MIN;
	static int8_t x35 = -1;
	volatile uint16_t x36 = 10522U;
	uint64_t t6 = 13625788098LLU;

    t6 = (x33|((x34-x35)&x36));

    if (t6 != 114329LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x43 = INT16_MAX;
	int8_t x44 = -14;
	volatile int32_t t7 = -10791261;

    t7 = (x41|((x42-x43)&x44));

    if (t7 != -14) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x45 = INT16_MAX;
	uint8_t x46 = 2U;
	volatile uint16_t x47 = UINT16_MAX;
	int64_t x48 = -1LL;
	int64_t t8 = 12131LL;

    t8 = (x45|((x46-x47)&x48));

    if (t8 != -32769LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x49 = -1;
	volatile int64_t x50 = INT64_MIN;
	volatile uint32_t x52 = UINT32_MAX;

    t9 = (x49|((x50-x51)&x52));

    if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x53 = 1U;
	int64_t x55 = INT64_MIN;
	static uint8_t x56 = 0U;
	volatile uint64_t t10 = 1904140274LLU;

    t10 = (x53|((x54-x55)&x56));

    if (t10 != 1LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x61 = UINT8_MAX;
	static int16_t x62 = -238;
	int8_t x63 = INT8_MIN;
	uint64_t t11 = 48164386751802716LLU;

    t11 = (x61|((x62-x63)&x64));

    if (t11 != 255LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x65 = INT64_MIN;
	int8_t x66 = INT8_MIN;
	int32_t x67 = INT32_MIN;
	volatile int64_t t12 = -3646235LL;

    t12 = (x65|((x66-x67)&x68));

    if (t12 != -9223372036854254848LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x69 = 44;
	volatile int16_t x70 = -4;
	int32_t x72 = 1;
	int32_t t13 = 710082;

    t13 = (x69|((x70-x71)&x72));

    if (t13 != 44) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint64_t x73 = 599186294882422836LLU;
	int8_t x74 = -1;
	static int32_t x75 = 1242;
	volatile uint64_t t14 = 2923392861558LLU;

    t14 = (x73|((x74-x75)&x76));

    if (t14 != 599186294882425141LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x77 = 4U;
	int32_t x78 = -1;
	int32_t x79 = 201;
	int16_t x80 = -1;
	volatile int32_t t15 = -392;

    t15 = (x77|((x78-x79)&x80));

    if (t15 != -202) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile uint16_t x81 = UINT16_MAX;
	static volatile int8_t x82 = 2;
	uint8_t x83 = 0U;
	static volatile uint8_t x84 = 2U;

    t16 = (x81|((x82-x83)&x84));

    if (t16 != 65535) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x85 = 324U;
	uint64_t x86 = 56LLU;
	uint64_t x88 = 989LLU;

    t17 = (x85|((x86-x87)&x88));

    if (t17 != 349LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x89 = -1;
	int64_t x91 = INT64_MAX;
	int8_t x92 = INT8_MIN;
	volatile int64_t t18 = -747LL;

    t18 = (x89|((x90-x91)&x92));

    if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x93 = UINT16_MAX;
	uint64_t x94 = UINT64_MAX;
	int8_t x95 = INT8_MIN;
	uint64_t x96 = 6082030444119LLU;
	uint64_t t19 = 331130797889154LLU;

    t19 = (x93|((x94-x95)&x96));

    if (t19 != 65535LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x97 = INT64_MIN;
	int8_t x98 = INT8_MAX;
	int16_t x99 = -1;
	volatile int64_t x100 = -1LL;
	static int64_t t20 = 148585068125239670LL;

    t20 = (x97|((x98-x99)&x100));

    if (t20 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x102 = INT64_MAX;
	int16_t x104 = -1;
	volatile int64_t t21 = INT64_MAX;

    t21 = (x101|((x102-x103)&x104));

    if (t21 != INT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x105 = UINT16_MAX;
	static int8_t x106 = INT8_MIN;
	uint64_t x107 = 103115LLU;
	int32_t x108 = INT32_MAX;
	volatile uint64_t t22 = 104121LLU;

    t22 = (x105|((x106-x107)&x108));

    if (t22 != 2147418111LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x110 = INT8_MAX;
	volatile uint8_t x111 = 22U;
	int32_t x112 = -1;
	volatile int32_t t23 = 3244;

    t23 = (x109|((x110-x111)&x112));

    if (t23 != -2147483543) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint8_t x118 = 32U;
	int64_t x119 = INT64_MAX;
	int64_t t24 = 10290684905LL;

    t24 = (x117|((x118-x119)&x120));

    if (t24 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x126 = 5U;
	int16_t x127 = INT16_MAX;
	int64_t x128 = INT64_MIN;
	volatile int64_t t25 = -1723093758920935LL;

    t25 = (x125|((x126-x127)&x128));

    if (t25 != -9223372036810191019LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x130 = 3310211U;
	volatile int64_t x131 = -1LL;
	static int64_t x132 = -1LL;
	static int64_t t26 = -1LL;

    t26 = (x129|((x130-x131)&x132));

    if (t26 != -9223372036851465596LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x133 = -43;
	static uint16_t x134 = UINT16_MAX;
	int8_t x135 = -1;
	int8_t x136 = -1;
	int32_t t27 = -5;

    t27 = (x133|((x134-x135)&x136));

    if (t27 != -43) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x137 = INT64_MIN;
	volatile int8_t x140 = 6;

    t28 = (x137|((x138-x139)&x140));

    if (t28 != INT64_MIN) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x141 = -1;
	volatile int64_t x143 = 1004725269129186783LL;
	int32_t x144 = INT32_MIN;
	volatile int64_t t29 = 432962LL;

    t29 = (x141|((x142-x143)&x144));

    if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static int16_t x145 = 173;
	uint16_t x146 = 4532U;
	volatile uint8_t x147 = 0U;
	int32_t x148 = 226471;
	static int32_t t30 = -16;

    t30 = (x145|((x146-x147)&x148));

    if (t30 != 4269) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x149 = INT8_MAX;
	uint16_t x150 = 7U;
	int8_t x152 = -1;

    t31 = (x149|((x150-x151)&x152));

    if (t31 != 127) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint16_t x156 = 4604U;
	static volatile int32_t t32 = INT32_MIN;

    t32 = (x153|((x154-x155)&x156));

    if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x157 = INT64_MIN;
	int64_t x158 = INT64_MIN;
	volatile int16_t x159 = -1;
	uint8_t x160 = UINT8_MAX;
	int64_t t33 = 15LL;

    t33 = (x157|((x158-x159)&x160));

    if (t33 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x161 = -7088241;
	static uint64_t x162 = 3007766LLU;
	volatile uint32_t x163 = 326065U;
	int64_t x164 = -1LL;
	uint64_t t34 = 53776918475132514LLU;

    t34 = (x161|((x162-x163)&x164));

    if (t34 != 18446744073705095151LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x167 = -1;
	static int16_t x168 = -1;
	int32_t t35 = 1;

    t35 = (x165|((x166-x167)&x168));

    if (t35 != -8413) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x169 = -1LL;
	volatile int16_t x170 = -19;
	volatile uint16_t x171 = 654U;
	volatile uint16_t x172 = 4U;
	static volatile int64_t t36 = -377LL;

    t36 = (x169|((x170-x171)&x172));

    if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x173 = INT16_MIN;
	int32_t x175 = INT32_MIN;
	static uint32_t x176 = 341007U;
	volatile uint64_t t37 = 5672426LLU;

    t37 = (x173|((x174-x175)&x176));

    if (t37 != 18446744073709532175LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t x177 = INT64_MAX;
	int64_t x178 = INT64_MAX;
	int64_t x179 = 10833361364LL;
	static uint64_t x180 = UINT64_MAX;

    t38 = (x177|((x178-x179)&x180));

    if (t38 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x181 = INT32_MIN;
	int32_t x183 = -11449145;
	uint8_t x184 = UINT8_MAX;
	volatile int32_t t39 = -3265528;

    t39 = (x181|((x182-x183)&x184));

    if (t39 != -2147483592) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x186 = INT8_MIN;
	int32_t x187 = -1;
	int16_t x188 = INT16_MIN;
	int32_t t40 = 1866980;

    t40 = (x185|((x186-x187)&x188));

    if (t40 != -32768) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x189 = 28LLU;
	static volatile int32_t x190 = 28;
	static volatile int8_t x192 = -1;

    t41 = (x189|((x190-x191)&x192));

    if (t41 != 541LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x193 = 1U;
	static uint8_t x194 = 3U;
	static uint64_t x195 = 5002LLU;
	int8_t x196 = 0;
	volatile uint64_t t42 = 18599LLU;

    t42 = (x193|((x194-x195)&x196));

    if (t42 != 1LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x197 = -2;
	int32_t x198 = INT32_MAX;
	volatile uint64_t x199 = 1365065565099LLU;
	static int16_t x200 = INT16_MIN;
	uint64_t t43 = 114754LLU;

    t43 = (x197|((x198-x199)&x200));

    if (t43 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint64_t x201 = 10LLU;
	uint16_t x202 = 1859U;
	static uint64_t x203 = UINT64_MAX;
	static int8_t x204 = -1;
	static volatile uint64_t t44 = 952LLU;

    t44 = (x201|((x202-x203)&x204));

    if (t44 != 1870LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x205 = INT16_MAX;
	volatile uint8_t x206 = 0U;
	uint64_t x207 = UINT64_MAX;
	volatile int64_t x208 = INT64_MIN;

    t45 = (x205|((x206-x207)&x208));

    if (t45 != 32767LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint16_t x213 = 5550U;
	int8_t x214 = -1;
	int16_t x216 = INT16_MAX;
	volatile int64_t t46 = 2304126360464961LL;

    t46 = (x213|((x214-x215)&x216));

    if (t46 != 32703LL) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x217 = 3631277;
	int16_t x220 = -1289;
	static int32_t t47 = 882596095;

    t47 = (x217|((x218-x219)&x220));

    if (t47 != 3631343) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x222 = INT32_MIN;
	static volatile uint32_t x223 = 435U;
	int16_t x224 = -130;
	uint32_t t48 = 443191U;

    t48 = (x221|((x222-x223)&x224));

    if (t48 != 2147483340U) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int16_t x226 = -44;
	volatile int64_t x228 = -28401642453LL;
	int64_t t49 = -14697747515745LL;

    t49 = (x225|((x226-x227)&x228));

    if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x229 = 14127681026LL;
	volatile int16_t x230 = INT16_MIN;
	uint16_t x231 = 151U;
	static int32_t x232 = INT32_MIN;
	int64_t t50 = 56525889810325511LL;

    t50 = (x229|((x230-x231)&x232));

    if (t50 != -904704510LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x233 = 15755524809086LL;
	volatile int32_t x234 = -844340182;
	uint64_t x235 = UINT64_MAX;
	uint8_t x236 = UINT8_MAX;
	volatile uint64_t t51 = 3319269419LLU;

    t51 = (x233|((x234-x235)&x236));

    if (t51 != 15755524809087LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x237 = INT16_MIN;
	volatile int8_t x238 = -1;
	int32_t x240 = INT32_MIN;
	int32_t t52 = -257;

    t52 = (x237|((x238-x239)&x240));

    if (t52 != -32768) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x241 = INT32_MIN;
	int64_t x242 = INT64_MIN;
	int16_t x243 = INT16_MIN;

    t53 = (x241|((x242-x243)&x244));

    if (t53 != -2147450880LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x246 = INT64_MIN;
	uint64_t t54 = 305520LLU;

    t54 = (x245|((x246-x247)&x248));

    if (t54 != 10LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint8_t x257 = 17U;
	volatile uint8_t x258 = UINT8_MAX;
	int8_t x259 = INT8_MIN;

    t55 = (x257|((x258-x259)&x260));

    if (t55 != 383) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x261 = INT8_MAX;
	static uint64_t x263 = 1202253794LLU;

    t56 = (x261|((x262-x263)&x264));

    if (t56 != 9223372035652518015LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int16_t x266 = INT16_MIN;
	int8_t x267 = -1;
	static uint32_t t57 = 1468U;

    t57 = (x265|((x266-x267)&x268));

    if (t57 != 4294967168U) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x269 = INT64_MIN;
	volatile uint64_t x270 = UINT64_MAX;
	int8_t x271 = -1;
	volatile uint64_t t58 = 62888431230457LLU;

    t58 = (x269|((x270-x271)&x272));

    if (t58 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x273 = 0U;
	int64_t x274 = INT64_MIN;
	volatile int32_t x275 = INT32_MIN;
	static uint32_t x276 = 220U;

    t59 = (x273|((x274-x275)&x276));

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x281 = INT64_MAX;
	static uint64_t x282 = 140270328755504LLU;
	static uint32_t x284 = 878875987U;
	uint64_t t60 = 25568567365737276LLU;

    t60 = (x281|((x282-x283)&x284));

    if (t60 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x285 = UINT8_MAX;
	uint32_t x286 = UINT32_MAX;
	int32_t x287 = -365;
	static volatile uint16_t x288 = 1U;

    t61 = (x285|((x286-x287)&x288));

    if (t61 != 255U) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x289 = INT64_MAX;
	uint32_t x290 = UINT32_MAX;
	static int64_t x291 = -10296183989LL;
	static uint32_t x292 = UINT32_MAX;
	volatile int64_t t62 = INT64_MAX;

    t62 = (x289|((x290-x291)&x292));

    if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x294 = 0;
	int16_t x295 = INT16_MIN;
	int64_t x296 = INT64_MIN;

    t63 = (x293|((x294-x295)&x296));

    if (t63 != -32768LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x298 = UINT8_MAX;
	uint8_t x299 = 5U;
	uint8_t x300 = 1U;
	static volatile int32_t t64 = 133285159;

    t64 = (x297|((x298-x299)&x300));

    if (t64 != 127) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int64_t x301 = 192534LL;
	uint32_t x302 = 17748370U;
	int16_t x304 = 1;
	volatile int64_t t65 = -29LL;

    t65 = (x301|((x302-x303)&x304));

    if (t65 != 192535LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x305 = 75U;
	static volatile int64_t x306 = 9901567956LL;
	static volatile int64_t t66 = 188958564LL;

    t66 = (x305|((x306-x307)&x308));

    if (t66 != 75LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x310 = -1;
	uint16_t x311 = 418U;
	int32_t x312 = -1;
	volatile uint32_t t67 = 1595014U;

    t67 = (x309|((x310-x311)&x312));

    if (t67 != 4294966879U) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int16_t x318 = -1;
	int8_t x319 = -3;
	static int16_t x320 = INT16_MIN;
	static int32_t t68 = -32;

    t68 = (x317|((x318-x319)&x320));

    if (t68 != 32767) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x322 = -1;
	static uint8_t x323 = 0U;
	uint16_t x324 = 9U;
	uint32_t t69 = 53784079U;

    t69 = (x321|((x322-x323)&x324));

    if (t69 != 119465U) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x333 = INT32_MAX;
	int16_t x334 = -95;
	uint16_t x335 = UINT16_MAX;
	int64_t x336 = INT64_MIN;
	int64_t t70 = -137226477728389LL;

    t70 = (x333|((x334-x335)&x336));

    if (t70 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x337 = INT32_MIN;
	uint64_t x338 = UINT64_MAX;
	volatile int16_t x340 = INT16_MAX;
	volatile uint64_t t71 = 126008LLU;

    t71 = (x337|((x338-x339)&x340));

    if (t71 != 18446744071562100735LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint8_t x341 = 5U;
	int8_t x342 = -1;
	int64_t x343 = -1LL;
	uint16_t x344 = 695U;
	volatile int64_t t72 = 171775415523300LL;

    t72 = (x341|((x342-x343)&x344));

    if (t72 != 5LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x345 = -70321098930494LL;
	volatile int8_t x346 = -1;
	static int32_t x347 = INT32_MAX;
	volatile int16_t x348 = -1;
	volatile int64_t t73 = 3344LL;

    t73 = (x345|((x346-x347)&x348));

    if (t73 != -1746876734LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int64_t x349 = INT64_MIN;
	static uint8_t x350 = UINT8_MAX;
	int32_t x351 = 38265;
	int8_t x352 = INT8_MIN;
	volatile int64_t t74 = 759LL;

    t74 = (x349|((x350-x351)&x352));

    if (t74 != -38016LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint8_t x353 = 0U;
	uint16_t x354 = 12273U;
	volatile int16_t x355 = INT16_MAX;
	int32_t t75 = 9581;

    t75 = (x353|((x354-x355)&x356));

    if (t75 != -20608) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x357 = -1LL;
	uint64_t x358 = UINT64_MAX;
	int8_t x360 = INT8_MIN;
	uint64_t t76 = UINT64_MAX;

    t76 = (x357|((x358-x359)&x360));

    if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x361 = 65U;
	int16_t x362 = INT16_MIN;
	int32_t x363 = INT32_MIN;
	int64_t x364 = -1LL;

    t77 = (x361|((x362-x363)&x364));

    if (t77 != 2147450945LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x365 = 1;
	int8_t x367 = INT8_MIN;
	volatile uint32_t x368 = UINT32_MAX;
	uint32_t t78 = 1549722896U;

    t78 = (x365|((x366-x367)&x368));

    if (t78 != 255U) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x369 = UINT16_MAX;
	int32_t x371 = -5523315;
	int64_t t79 = -202680LL;

    t79 = (x369|((x370-x371)&x372));

    if (t79 != -9223372036849205249LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x373 = INT8_MIN;
	volatile int8_t x374 = INT8_MIN;
	int8_t x375 = INT8_MIN;
	int64_t x376 = -1LL;
	volatile int64_t t80 = -26431LL;

    t80 = (x373|((x374-x375)&x376));

    if (t80 != -128LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x390 = -1;
	uint16_t x391 = 238U;
	int16_t x392 = INT16_MIN;
	volatile int64_t t81 = 1LL;

    t81 = (x389|((x390-x391)&x392));

    if (t81 != -32768LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x393 = -1LL;
	int8_t x394 = INT8_MAX;
	static uint16_t x395 = 1259U;
	static volatile int8_t x396 = INT8_MAX;
	volatile int64_t t82 = 2148402303775331LL;

    t82 = (x393|((x394-x395)&x396));

    if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x397 = INT8_MIN;
	static int32_t x399 = -1;
	uint32_t x400 = 387U;
	uint32_t t83 = 3977U;

    t83 = (x397|((x398-x399)&x400));

    if (t83 != 4294967169U) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x401 = INT64_MIN;
	static uint8_t x403 = 12U;
	int8_t x404 = INT8_MAX;
	int64_t t84 = -3550036236939613437LL;

    t84 = (x401|((x402-x403)&x404));

    if (t84 != -9223372036854775692LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint64_t x407 = UINT64_MAX;
	static volatile uint64_t t85 = 3262468627354894LLU;

    t85 = (x405|((x406-x407)&x408));

    if (t85 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x409 = INT64_MAX;
	int8_t x410 = INT8_MIN;
	volatile int16_t x411 = INT16_MAX;
	volatile int8_t x412 = INT8_MIN;
	int64_t t86 = 115185LL;

    t86 = (x409|((x410-x411)&x412));

    if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x413 = -2;
	static int16_t x414 = INT16_MIN;
	int32_t x415 = -3;
	int64_t x416 = 4235211434431LL;
	int64_t t87 = -21312246LL;

    t87 = (x413|((x414-x415)&x416));

    if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int64_t x417 = -1LL;
	static uint64_t x418 = 12565LLU;
	int8_t x419 = 54;
	int16_t x420 = -1;

    t88 = (x417|((x418-x419)&x420));

    if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile int16_t x421 = INT16_MIN;
	int32_t x423 = 507440;
	volatile uint32_t t89 = 411U;

    t89 = (x421|((x422-x423)&x424));

    if (t89 != 4294934532U) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint64_t x429 = 2319074728LLU;
	static int8_t x430 = INT8_MAX;
	volatile uint16_t x431 = 161U;
	int32_t x432 = 81;
	volatile uint64_t t90 = 1626484227162339LLU;

    t90 = (x429|((x430-x431)&x432));

    if (t90 != 2319074808LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x434 = INT32_MIN;
	int16_t x435 = -247;
	int16_t x436 = -1;
	int64_t t91 = -3691814147472LL;

    t91 = (x433|((x434-x435)&x436));

    if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x439 = 34811252659588LLU;
	uint8_t x440 = UINT8_MAX;
	static volatile uint64_t t92 = 252390013LLU;

    t92 = (x437|((x438-x439)&x440));

    if (t92 != 4294967295LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x441 = INT64_MIN;
	volatile uint8_t x442 = 14U;
	volatile uint16_t x443 = UINT16_MAX;
	volatile int8_t x444 = -1;

    t93 = (x441|((x442-x443)&x444));

    if (t93 != -65521LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x447 = INT16_MIN;
	static int64_t t94 = 504266040903LL;

    t94 = (x445|((x446-x447)&x448));

    if (t94 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint16_t x453 = 168U;
	int32_t x455 = 278040;
	volatile uint64_t t95 = 2014731804682LLU;

    t95 = (x453|((x454-x455)&x456));

    if (t95 != 184LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x461 = 734116669U;
	static int8_t x462 = INT8_MAX;
	int16_t x463 = -343;
	volatile int64_t x464 = INT64_MAX;
	volatile int64_t t96 = 1544LL;

    t96 = (x461|((x462-x463)&x464));

    if (t96 != 734116863LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x466 = -1LL;
	uint32_t x468 = UINT32_MAX;

    t97 = (x465|((x466-x467)&x468));

    if (t97 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint64_t x469 = 1981285LLU;
	static volatile uint64_t x471 = 2181631897305LLU;
	static volatile uint16_t x472 = UINT16_MAX;
	uint64_t t98 = 400510LLU;

    t98 = (x469|((x470-x471)&x472));

    if (t98 != 1981287LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x473 = INT16_MIN;
	int32_t x474 = INT32_MIN;
	volatile int64_t x476 = INT64_MIN;
	int64_t t99 = -519257LL;

    t99 = (x473|((x474-x475)&x476));

    if (t99 != -32768LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x477 = -62;
	int32_t x478 = INT32_MAX;
	static int16_t x479 = 0;
	uint32_t x480 = UINT32_MAX;
	uint32_t t100 = UINT32_MAX;

    t100 = (x477|((x478-x479)&x480));

    if (t100 != UINT32_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x481 = 1934U;
	int32_t x482 = -1;
	volatile int64_t x483 = INT64_MAX;
	int32_t x484 = INT32_MIN;
	int64_t t101 = -5189741LL;

    t101 = (x481|((x482-x483)&x484));

    if (t101 != -9223372036854773874LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x485 = -1;
	uint64_t x486 = UINT64_MAX;
	volatile int32_t x488 = INT32_MIN;
	static uint64_t t102 = UINT64_MAX;

    t102 = (x485|((x486-x487)&x488));

    if (t102 != UINT64_MAX) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x489 = 192012748276235554LLU;
	uint8_t x490 = 1U;
	static int8_t x491 = INT8_MAX;
	int8_t x492 = INT8_MAX;
	uint64_t t103 = 17119775780642001LLU;

    t103 = (x489|((x490-x491)&x492));

    if (t103 != 192012748276235554LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint64_t x493 = 19553728332LLU;
	int16_t x494 = -1;
	int64_t x495 = INT64_MAX;
	uint16_t x496 = UINT16_MAX;
	uint64_t t104 = 11LLU;

    t104 = (x493|((x494-x495)&x496));

    if (t104 != 19553728332LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x497 = -11;
	int32_t x498 = -1;
	static int64_t x499 = INT64_MIN;
	int64_t x500 = -1LL;
	int64_t t105 = -1611888605LL;

    t105 = (x497|((x498-x499)&x500));

    if (t105 != -1LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint32_t x501 = UINT32_MAX;
	int8_t x503 = -1;
	int32_t x504 = 1790331;

    t106 = (x501|((x502-x503)&x504));

    if (t106 != UINT32_MAX) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x505 = INT32_MAX;
	int8_t x506 = -1;
	int16_t x507 = INT16_MIN;
	int64_t x508 = 6247024672LL;
	int64_t t107 = 212477880959819961LL;

    t107 = (x505|((x506-x507)&x508));

    if (t107 != 2147483647LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int32_t x513 = INT32_MIN;
	uint32_t x514 = UINT32_MAX;
	uint16_t x515 = 3178U;
	uint8_t x516 = UINT8_MAX;
	static volatile uint32_t t108 = 21994876U;

    t108 = (x513|((x514-x515)&x516));

    if (t108 != 2147483797U) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint16_t x517 = 30708U;
	int16_t x518 = INT16_MIN;
	int32_t x519 = INT32_MIN;
	int16_t x520 = INT16_MIN;
	int32_t t109 = 1639237;

    t109 = (x517|((x518-x519)&x520));

    if (t109 != 2147481588) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x521 = INT16_MAX;
	uint32_t x522 = 1U;
	uint64_t x523 = 10606050838LLU;
	static uint64_t t110 = 1LLU;

    t110 = (x521|((x522-x523)&x524));

    if (t110 != 32767LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x525 = INT16_MAX;
	volatile uint16_t x526 = UINT16_MAX;
	static int32_t x527 = -1;
	volatile int32_t x528 = INT32_MAX;

    t111 = (x525|((x526-x527)&x528));

    if (t111 != 98303) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x533 = -5;
	uint16_t x534 = UINT16_MAX;
	uint32_t x535 = 53792U;
	static int16_t x536 = -1;
	volatile uint32_t t112 = UINT32_MAX;

    t112 = (x533|((x534-x535)&x536));

    if (t112 != UINT32_MAX) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint8_t x541 = 0U;
	static int8_t x543 = 25;
	uint64_t x544 = 25984405328LLU;

    t113 = (x541|((x542-x543)&x544));

    if (t113 != 16LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x545 = -1LL;
	int8_t x546 = INT8_MIN;
	volatile int64_t x547 = INT64_MIN;
	static int8_t x548 = INT8_MIN;
	int64_t t114 = 54909998LL;

    t114 = (x545|((x546-x547)&x548));

    if (t114 != -1LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x549 = -553956307774LL;
	int16_t x550 = INT16_MAX;
	uint64_t x551 = UINT64_MAX;
	volatile uint64_t t115 = 274364289430699508LLU;

    t115 = (x549|((x550-x551)&x552));

    if (t115 != 18446743519753243842LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x553 = INT32_MIN;
	int8_t x554 = INT8_MIN;
	static int8_t x555 = INT8_MIN;
	volatile int64_t x556 = -34525492978686LL;
	int64_t t116 = 25816LL;

    t116 = (x553|((x554-x555)&x556));

    if (t116 != -2147483648LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x565 = 6;
	int16_t x566 = INT16_MAX;
	static int64_t x567 = INT64_MAX;
	uint8_t x568 = UINT8_MAX;
	volatile int64_t t117 = -2178468048488101LL;

    t117 = (x565|((x566-x567)&x568));

    if (t117 != 6LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x569 = INT32_MIN;
	int32_t x570 = -1;
	volatile uint8_t x572 = 28U;
	static volatile int32_t t118 = INT32_MIN;

    t118 = (x569|((x570-x571)&x572));

    if (t118 != INT32_MIN) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x573 = INT8_MIN;
	int16_t x575 = 1663;
	int64_t t119 = -21356785337048926LL;

    t119 = (x573|((x574-x575)&x576));

    if (t119 != -127LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x577 = 1U;
	uint32_t x578 = 956131U;
	uint16_t x579 = 118U;
	int64_t x580 = INT64_MIN;
	static int64_t t120 = 41222LL;

    t120 = (x577|((x578-x579)&x580));

    if (t120 != 1LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x582 = -9438074287686LL;
	int64_t x583 = -1LL;
	uint32_t x584 = 2587U;
	volatile int64_t t121 = -13932326680360116LL;

    t121 = (x581|((x582-x583)&x584));

    if (t121 != 4294967295LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static int32_t x585 = -65498;
	int16_t x587 = 3;
	volatile uint64_t t122 = 77757LLU;

    t122 = (x585|((x586-x587)&x588));

    if (t122 != 18446744073709516846LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x590 = 45;
	int8_t x591 = INT8_MAX;
	static volatile int32_t t123 = -1315;

    t123 = (x589|((x590-x591)&x592));

    if (t123 != -2147483521) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x593 = UINT16_MAX;
	volatile int8_t x594 = INT8_MIN;
	int16_t x595 = -1;
	int16_t x596 = INT16_MIN;
	int32_t t124 = 0;

    t124 = (x593|((x594-x595)&x596));

    if (t124 != -1) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x601 = 677787269699170LL;
	int64_t x602 = -1LL;
	static volatile int16_t x603 = -196;
	int8_t x604 = INT8_MIN;
	volatile int64_t t125 = -8345528962410LL;

    t125 = (x601|((x602-x603)&x604));

    if (t125 != 677787269699298LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x610 = 3183;
	int64_t x612 = INT64_MAX;
	volatile int64_t t126 = -98LL;

    t126 = (x609|((x610-x611)&x612));

    if (t126 != -9223372036854772635LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x613 = INT8_MIN;
	volatile uint64_t x614 = 3204705950429967679LLU;

    t127 = (x613|((x614-x615)&x616));

    if (t127 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x618 = -1LL;
	volatile uint16_t x619 = 3752U;
	int32_t x620 = -1;
	volatile int64_t t128 = -66020524140104018LL;

    t128 = (x617|((x618-x619)&x620));

    if (t128 != -3745LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x621 = UINT64_MAX;
	static int64_t x623 = 20069092935LL;
	volatile int16_t x624 = INT16_MIN;
	volatile uint64_t t129 = UINT64_MAX;

    t129 = (x621|((x622-x623)&x624));

    if (t129 != UINT64_MAX) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint8_t x629 = UINT8_MAX;
	int64_t x630 = INT64_MIN;
	int8_t x631 = INT8_MIN;
	static int64_t x632 = INT64_MIN;
	volatile int64_t t130 = -620586248LL;

    t130 = (x629|((x630-x631)&x632));

    if (t130 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint64_t x633 = UINT64_MAX;
	volatile uint32_t x634 = UINT32_MAX;
	uint64_t t131 = UINT64_MAX;

    t131 = (x633|((x634-x635)&x636));

    if (t131 != UINT64_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x637 = -12;
	static uint32_t x638 = UINT32_MAX;
	uint32_t x640 = 4U;

    t132 = (x637|((x638-x639)&x640));

    if (t132 != -12LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x641 = 12U;
	int16_t x643 = INT16_MIN;
	int32_t x644 = 0;
	volatile int64_t t133 = -4294884389904LL;

    t133 = (x641|((x642-x643)&x644));

    if (t133 != 12LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x645 = 13U;
	volatile int64_t x648 = INT64_MAX;
	volatile int64_t t134 = 2242613366750LL;

    t134 = (x645|((x646-x647)&x648));

    if (t134 != 9223372036854775693LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x649 = 0U;
	uint8_t x650 = 0U;
	volatile uint16_t x651 = 42U;
	int32_t x652 = -472658;

    t135 = (x649|((x650-x651)&x652));

    if (t135 != -472698) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x653 = 3645;
	int64_t x655 = 2062156LL;
	volatile int64_t t136 = 1924558520386LL;

    t136 = (x653|((x654-x655)&x656));

    if (t136 != 3645LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x658 = UINT16_MAX;
	static int32_t x659 = -250023310;
	uint8_t x660 = UINT8_MAX;
	int32_t t137 = -6;

    t137 = (x657|((x658-x659)&x660));

    if (t137 != 143) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile int16_t x661 = INT16_MIN;
	static int32_t x662 = INT32_MIN;
	int64_t x663 = -1LL;
	int16_t x664 = -1;
	static int64_t t138 = 14335844LL;

    t138 = (x661|((x662-x663)&x664));

    if (t138 != -32767LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x665 = -1;
	int32_t x667 = 1426;
	int32_t x668 = 27641738;
	volatile int32_t t139 = 8;

    t139 = (x665|((x666-x667)&x668));

    if (t139 != -1) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x669 = 11431;
	static int32_t x670 = -2;
	int16_t x671 = -1;
	volatile int8_t x672 = -47;

    t140 = (x669|((x670-x671)&x672));

    if (t140 != -9) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x673 = -121671825;
	uint8_t x674 = 5U;
	int16_t x675 = INT16_MIN;
	volatile uint16_t x676 = 7198U;
	int32_t t141 = 6161021;

    t141 = (x673|((x674-x675)&x676));

    if (t141 != -121671825) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x677 = UINT16_MAX;
	static int64_t x678 = INT64_MIN;
	int32_t x679 = INT32_MIN;
	volatile int64_t x680 = INT64_MIN;
	volatile int64_t t142 = 7LL;

    t142 = (x677|((x678-x679)&x680));

    if (t142 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x682 = -1;
	int32_t x684 = INT32_MIN;
	int32_t t143 = -7;

    t143 = (x681|((x682-x683)&x684));

    if (t143 != -2147483521) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint8_t x685 = 0U;
	uint16_t x686 = UINT16_MAX;
	uint8_t x687 = UINT8_MAX;
	volatile int16_t x688 = -1;
	volatile int32_t t144 = 15191703;

    t144 = (x685|((x686-x687)&x688));

    if (t144 != 65280) { NG(); } else { ; }
	
}

void f145(void) {
    	static int32_t x693 = INT32_MIN;
	static uint32_t x695 = 31U;
	static int64_t x696 = INT64_MAX;
	volatile int64_t t145 = 5889LL;

    t145 = (x693|((x694-x695)&x696));

    if (t145 != -2147483552LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint16_t x698 = UINT16_MAX;
	static int64_t x699 = -1LL;
	uint16_t x700 = 3275U;
	volatile int64_t t146 = -26995319572177327LL;

    t146 = (x697|((x698-x699)&x700));

    if (t146 != -1LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x701 = INT64_MIN;
	static int32_t x702 = INT32_MAX;
	uint16_t x704 = 1U;
	volatile int64_t t147 = INT64_MIN;

    t147 = (x701|((x702-x703)&x704));

    if (t147 != INT64_MIN) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x705 = INT16_MIN;
	uint32_t x706 = 14329U;
	int32_t x707 = -1;
	static int16_t x708 = INT16_MIN;
	volatile uint32_t t148 = 4017U;

    t148 = (x705|((x706-x707)&x708));

    if (t148 != 4294934528U) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x709 = INT64_MIN;
	int32_t x710 = INT32_MIN;
	int16_t x712 = -1;
	int64_t t149 = -6LL;

    t149 = (x709|((x710-x711)&x712));

    if (t149 != -2147483520LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x713 = 249U;
	uint8_t x714 = 124U;
	static int16_t x715 = -258;
	static int32_t x716 = INT32_MIN;
	volatile int32_t t150 = -28936639;

    t150 = (x713|((x714-x715)&x716));

    if (t150 != 249) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x717 = -1;
	int8_t x718 = 7;
	int32_t x719 = -119704;
	int8_t x720 = INT8_MIN;
	volatile int32_t t151 = -1685256;

    t151 = (x717|((x718-x719)&x720));

    if (t151 != -1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x721 = UINT32_MAX;
	int8_t x724 = -38;

    t152 = (x721|((x722-x723)&x724));

    if (t152 != UINT32_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x725 = UINT8_MAX;
	int16_t x726 = INT16_MAX;
	int16_t x727 = INT16_MIN;
	static volatile int32_t t153 = 2;

    t153 = (x725|((x726-x727)&x728));

    if (t153 != 33023) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x729 = INT64_MIN;
	int8_t x730 = 36;
	int64_t x731 = -1LL;
	int32_t x732 = 2;
	int64_t t154 = INT64_MIN;

    t154 = (x729|((x730-x731)&x732));

    if (t154 != INT64_MIN) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x734 = 59432599LL;
	int8_t x735 = INT8_MIN;
	int32_t x736 = INT32_MIN;

    t155 = (x733|((x734-x735)&x736));

    if (t155 != 255LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x737 = 53LLU;
	int16_t x738 = 1;
	int64_t x739 = -4970778968265LL;
	int16_t x740 = INT16_MIN;
	volatile uint64_t t156 = 13LLU;

    t156 = (x737|((x738-x739)&x740));

    if (t156 != 4970778951733LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x741 = 5LL;
	int16_t x743 = 1;
	volatile int64_t t157 = -3662913809LL;

    t157 = (x741|((x742-x743)&x744));

    if (t157 != 53LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x745 = -55;
	uint32_t x746 = 37965782U;
	volatile uint64_t x748 = 463823408163995LLU;
	volatile uint64_t t158 = 89163136LLU;

    t158 = (x745|((x746-x747)&x748));

    if (t158 != 18446744073709551561LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x749 = UINT16_MAX;
	int8_t x750 = INT8_MIN;
	int8_t x752 = -1;
	int32_t t159 = 119371639;

    t159 = (x749|((x750-x751)&x752));

    if (t159 != -1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x753 = -781728;
	int64_t x754 = INT64_MAX;
	uint64_t x755 = 19111610676LLU;
	uint32_t x756 = 175373U;
	volatile uint64_t t160 = 560053271768LLU;

    t160 = (x753|((x754-x755)&x756));

    if (t160 != 18446744073708942953LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x758 = INT16_MIN;
	int32_t x760 = -1;
	static volatile int32_t t161 = INT32_MAX;

    t161 = (x757|((x758-x759)&x760));

    if (t161 != INT32_MAX) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint32_t x763 = 4056U;
	int8_t x764 = -1;
	uint32_t t162 = 162931U;

    t162 = (x761|((x762-x763)&x764));

    if (t162 != 2147483647U) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x765 = INT16_MAX;
	static uint64_t x766 = 2542005743248355LLU;
	int32_t x767 = 2;
	int16_t x768 = INT16_MIN;
	volatile uint64_t t163 = 1056026217LLU;

    t163 = (x765|((x766-x767)&x768));

    if (t163 != 2542005743255551LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x773 = 1;
	static uint32_t x774 = 1U;
	int16_t x775 = -75;
	static int64_t x776 = INT64_MAX;
	static int64_t t164 = 268785226LL;

    t164 = (x773|((x774-x775)&x776));

    if (t164 != 77LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x777 = -1;
	volatile int64_t x778 = -6867944463467667LL;
	int64_t x779 = -187LL;
	uint32_t x780 = 1435U;
	int64_t t165 = -126LL;

    t165 = (x777|((x778-x779)&x780));

    if (t165 != -1LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x781 = -99;
	volatile int16_t x782 = -143;
	volatile int8_t x783 = INT8_MIN;
	static int8_t x784 = -1;

    t166 = (x781|((x782-x783)&x784));

    if (t166 != -3) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile int64_t x785 = INT64_MIN;
	int64_t x786 = 11LL;
	volatile int32_t x788 = INT32_MIN;

    t167 = (x785|((x786-x787)&x788));

    if (t167 != 15667973726530437120LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x789 = -2;
	uint64_t x790 = 2150380675402LLU;
	int8_t x791 = -1;
	uint8_t x792 = 58U;
	static uint64_t t168 = 34652962499760828LLU;

    t168 = (x789|((x790-x791)&x792));

    if (t168 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x793 = 164468628884669LLU;
	volatile int16_t x794 = -30;
	int8_t x796 = INT8_MAX;
	static uint64_t t169 = 800LLU;

    t169 = (x793|((x794-x795)&x796));

    if (t169 != 164468628884735LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x797 = 1701876255LL;
	int32_t x799 = 13618;
	static int8_t x800 = INT8_MIN;
	static volatile int64_t t170 = 25LL;

    t170 = (x797|((x798-x799)&x800));

    if (t170 != 1701884703LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x801 = UINT8_MAX;
	int16_t x802 = 59;
	int8_t x803 = INT8_MIN;
	static volatile int32_t x804 = -45;
	static volatile int32_t t171 = -29660343;

    t171 = (x801|((x802-x803)&x804));

    if (t171 != 255) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x805 = INT64_MIN;
	volatile uint32_t x806 = 643272918U;
	static volatile uint32_t x808 = 1042U;

    t172 = (x805|((x806-x807)&x808));

    if (t172 != -9223372036854775790LL) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x813 = INT64_MIN;
	uint8_t x815 = 0U;
	volatile uint64_t t173 = 1761800977510030LLU;

    t173 = (x813|((x814-x815)&x816));

    if (t173 != 9223372036854775824LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x821 = INT16_MIN;
	int16_t x823 = 24;
	int8_t x824 = INT8_MAX;
	volatile int64_t t174 = -1LL;

    t174 = (x821|((x822-x823)&x824));

    if (t174 != -32711LL) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint8_t x826 = 40U;
	int8_t x827 = INT8_MIN;
	int32_t x828 = INT32_MIN;

    t175 = (x825|((x826-x827)&x828));

    if (t175 != -128) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x829 = INT16_MAX;
	uint32_t x830 = 30722U;
	int64_t x831 = 6664LL;
	int64_t x832 = INT64_MIN;

    t176 = (x829|((x830-x831)&x832));

    if (t176 != 32767LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x833 = 9593U;
	uint64_t x834 = UINT64_MAX;
	volatile int8_t x835 = INT8_MAX;
	int64_t x836 = INT64_MIN;
	volatile uint64_t t177 = 355LLU;

    t177 = (x833|((x834-x835)&x836));

    if (t177 != 9223372036854785401LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x837 = UINT8_MAX;
	int64_t x838 = -252154441LL;
	int64_t x839 = -8495674LL;

    t178 = (x837|((x838-x839)&x840));

    if (t178 != 18484223LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x841 = INT8_MIN;
	uint8_t x842 = 5U;
	int8_t x843 = INT8_MIN;
	int32_t x844 = -1;
	int32_t t179 = 456771;

    t179 = (x841|((x842-x843)&x844));

    if (t179 != -123) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x845 = -47;
	int8_t x846 = INT8_MIN;
	volatile int16_t x847 = INT16_MIN;
	volatile int16_t x848 = 6481;
	volatile int32_t t180 = -323042;

    t180 = (x845|((x846-x847)&x848));

    if (t180 != -47) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x849 = 14593902U;
	static uint64_t x851 = 17225615LLU;
	int8_t x852 = INT8_MIN;

    t181 = (x849|((x850-x851)&x852));

    if (t181 != 14614382LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	static int64_t x854 = -1LL;
	volatile int64_t x855 = INT64_MIN;
	static int16_t x856 = -7;
	static int64_t t182 = -141169668829076939LL;

    t182 = (x853|((x854-x855)&x856));

    if (t182 != -1LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x858 = INT16_MIN;
	static int64_t x859 = -1LL;
	int16_t x860 = INT16_MIN;
	int64_t t183 = 1056LL;

    t183 = (x857|((x858-x859)&x860));

    if (t183 != -32648LL) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int32_t x861 = INT32_MIN;
	uint8_t x862 = 11U;
	uint32_t x863 = UINT32_MAX;
	int64_t x864 = -86723544403800851LL;
	int64_t t184 = -93LL;

    t184 = (x861|((x862-x863)&x864));

    if (t184 != -2147483636LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x865 = UINT64_MAX;
	int8_t x866 = 16;
	uint16_t x867 = 121U;
	int16_t x868 = INT16_MIN;
	volatile uint64_t t185 = UINT64_MAX;

    t185 = (x865|((x866-x867)&x868));

    if (t185 != UINT64_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x869 = 0;
	uint8_t x870 = 53U;
	uint8_t x871 = 2U;
	uint64_t x872 = UINT64_MAX;

    t186 = (x869|((x870-x871)&x872));

    if (t186 != 51LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x873 = UINT32_MAX;
	uint64_t x875 = UINT64_MAX;
	uint64_t t187 = 44634229315LLU;

    t187 = (x873|((x874-x875)&x876));

    if (t187 != 4294967295LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x877 = 12U;
	static uint16_t x878 = 1214U;
	volatile uint8_t x879 = UINT8_MAX;
	int32_t x880 = -555760478;
	static volatile int32_t t188 = 1809;

    t188 = (x877|((x878-x879)&x880));

    if (t188 != 174) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x881 = UINT64_MAX;
	uint16_t x882 = UINT16_MAX;
	int64_t x884 = INT64_MAX;
	uint64_t t189 = UINT64_MAX;

    t189 = (x881|((x882-x883)&x884));

    if (t189 != UINT64_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	static int64_t x885 = 169499996233LL;
	int64_t x886 = 3338181568894644688LL;
	uint64_t x887 = 680585204330LLU;
	volatile uint64_t t190 = 4585312906351095LLU;

    t190 = (x885|((x886-x887)&x888));

    if (t190 != 171798609775LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x889 = -54843060;
	int16_t x890 = -1;
	uint8_t x891 = 7U;
	static volatile uint64_t x892 = 1LLU;

    t191 = (x889|((x890-x891)&x892));

    if (t191 != 18446744073654708556LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x894 = 1U;
	static int8_t x895 = INT8_MIN;
	volatile uint32_t t192 = 907489U;

    t192 = (x893|((x894-x895)&x896));

    if (t192 != 2147483777U) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x897 = -108;
	int8_t x899 = INT8_MAX;
	static volatile int32_t x900 = INT32_MIN;
	int32_t t193 = -4184191;

    t193 = (x897|((x898-x899)&x900));

    if (t193 != -108) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x901 = INT64_MIN;
	volatile uint16_t x902 = 25018U;
	uint32_t x904 = UINT32_MAX;
	volatile int64_t t194 = 2852770LL;

    t194 = (x901|((x902-x903)&x904));

    if (t194 != -9223372036854751418LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static int32_t x905 = -16200;
	volatile uint32_t x906 = UINT32_MAX;
	int64_t x907 = -13616091496169LL;
	int8_t x908 = INT8_MIN;

    t195 = (x905|((x906-x907)&x908));

    if (t195 != -328LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x910 = 278402048;
	static volatile int8_t x911 = INT8_MAX;
	static int8_t x912 = 1;

    t196 = (x909|((x910-x911)&x912));

    if (t196 != -1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x913 = -1;
	int16_t x915 = INT16_MIN;
	static int32_t x916 = INT32_MIN;
	static int32_t t197 = 1;

    t197 = (x913|((x914-x915)&x916));

    if (t197 != -1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x917 = 1316455806192414LLU;
	int64_t x918 = 41398690LL;
	uint64_t x919 = 187076989512LLU;
	static int8_t x920 = -1;
	volatile uint64_t t198 = 2597LLU;

    t198 = (x917|((x918-x919)&x920));

    if (t198 != 18446743933921779550LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x921 = -1;
	uint16_t x922 = UINT16_MAX;
	uint32_t x924 = 1306628U;
	uint32_t t199 = UINT32_MAX;

    t199 = (x921|((x922-x923)&x924));

    if (t199 != UINT32_MAX) { NG(); } else { ; }
	
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

