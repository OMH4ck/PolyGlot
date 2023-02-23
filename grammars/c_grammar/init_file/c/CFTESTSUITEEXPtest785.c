
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

int64_t x5 = INT64_MIN;
int8_t x14 = INT8_MIN;
uint64_t x15 = 26LLU;
int32_t x20 = INT32_MIN;
int8_t x30 = INT8_MAX;
int32_t t7 = 15799;
int32_t x39 = 765961001;
volatile int8_t x40 = INT8_MIN;
uint64_t t8 = 21LLU;
int8_t x41 = INT8_MIN;
int64_t x43 = 2819485614LL;
uint8_t x47 = 1U;
uint8_t x54 = UINT8_MAX;
uint32_t x58 = 1726U;
int16_t x63 = -1;
volatile int64_t x74 = 260401985566450538LL;
static volatile int16_t x77 = -1;
volatile uint64_t x84 = 1114659186LLU;
int64_t x97 = INT64_MIN;
int8_t x98 = INT8_MAX;
int32_t t22 = 228682150;
int8_t x108 = 1;
int32_t x109 = INT32_MIN;
int8_t x110 = 0;
static uint32_t x111 = 8591831U;
int8_t x119 = -1;
int64_t t26 = 864455359LL;
int32_t x127 = INT32_MIN;
static int64_t x135 = INT64_MAX;
int64_t t28 = 88749LL;
static uint8_t x138 = 16U;
static volatile uint64_t t30 = 58325081896LLU;
int32_t x156 = INT32_MIN;
uint64_t t31 = 31331030050462LLU;
volatile uint8_t x167 = 1U;
int32_t x168 = 0;
static volatile uint64_t t35 = 19651198LLU;
volatile int8_t x175 = INT8_MIN;
int16_t x176 = -8127;
uint64_t x177 = UINT64_MAX;
uint16_t x179 = 28U;
int8_t x180 = INT8_MIN;
uint64_t x183 = 104918400842LLU;
static uint8_t x186 = 6U;
int8_t x189 = -15;
int32_t x191 = -1;
int32_t x194 = 22;
volatile int32_t t41 = -59660;
uint16_t x209 = 224U;
static int16_t x214 = 251;
static volatile int16_t x216 = INT16_MIN;
uint32_t x221 = 0U;
int64_t x222 = INT64_MIN;
int16_t x234 = INT16_MIN;
static volatile int32_t x236 = INT32_MAX;
int64_t t49 = 279272LL;
uint32_t x253 = 34506988U;
static uint32_t x255 = UINT32_MAX;
uint8_t x260 = 3U;
volatile int64_t t51 = 3225893LL;
volatile int64_t x269 = 4159453724163422LL;
int64_t x272 = 229LL;
int32_t x281 = -433657356;
int8_t x286 = 1;
uint64_t x287 = 217431LLU;
volatile uint16_t x295 = 20U;
int64_t t58 = -75182LL;
volatile int64_t x307 = -165635190LL;
int16_t x322 = 10;
uint32_t x330 = 496U;
int64_t x331 = -1LL;
uint64_t x332 = 2014976728031LLU;
uint32_t x336 = UINT32_MAX;
volatile uint32_t t66 = 1U;
uint16_t x346 = UINT16_MAX;
static volatile int32_t x359 = -1;
int32_t t72 = -2;
uint32_t x361 = 514708201U;
static int64_t x367 = INT64_MAX;
int8_t x379 = -23;
int64_t x384 = -1LL;
static int32_t x386 = -8048681;
volatile int64_t t81 = -1LL;
static int64_t x403 = -5860705151013LL;
int64_t t83 = -23331439021LL;
static int8_t x406 = 2;
int8_t x408 = INT8_MAX;
static volatile int64_t t84 = -30317318728318436LL;
int32_t x411 = INT32_MIN;
int8_t x412 = INT8_MIN;
int64_t x419 = INT64_MAX;
uint8_t x423 = 2U;
int16_t x433 = INT16_MIN;
volatile int64_t x435 = -1LL;
int8_t x448 = INT8_MAX;
volatile int16_t x451 = 449;
static volatile uint8_t x453 = 23U;
uint8_t x456 = 1U;
uint32_t x458 = 2843U;
int64_t t97 = -807859984599921293LL;
volatile int8_t x469 = INT8_MIN;
uint64_t t100 = 977362892381228526LLU;
int16_t x487 = -1;
static uint64_t x488 = 51638230830LLU;
static volatile uint64_t t102 = 180570824979354LLU;
volatile int8_t x497 = INT8_MIN;
uint32_t x499 = 5381U;
uint32_t t105 = 0U;
uint16_t x502 = 34U;
int32_t x504 = -13973;
static volatile int32_t x506 = -25593291;
int16_t x520 = INT16_MAX;
int16_t x522 = 10;
int16_t x524 = INT16_MIN;
int8_t x526 = INT8_MIN;
int64_t x527 = 13732908907041LL;
uint8_t x532 = UINT8_MAX;
int16_t x534 = INT16_MIN;
int16_t x542 = INT16_MAX;
static int64_t x553 = 53LL;
static int8_t x555 = -1;
int16_t x558 = INT16_MIN;
volatile uint64_t t120 = 204117LLU;
int16_t x562 = INT16_MAX;
int32_t t122 = 64526;
volatile uint64_t x571 = UINT64_MAX;
int8_t x572 = INT8_MIN;
uint16_t x574 = 8537U;
volatile uint64_t t126 = 926874881LLU;
uint8_t x586 = UINT8_MAX;
int8_t x592 = -1;
static int16_t x595 = -138;
volatile uint8_t x596 = 33U;
int32_t x600 = INT32_MAX;
int16_t x606 = 12175;
volatile int64_t t132 = -3479LL;
uint64_t x610 = 790114597058LLU;
volatile uint64_t t133 = 424975099711549992LLU;
int64_t t134 = -1846930661045968LL;
volatile int32_t x621 = -27070772;
int16_t x622 = 1;
static volatile uint64_t t136 = 36748338259705LLU;
int16_t x635 = -119;
volatile int32_t t139 = 1;
volatile uint64_t t140 = 402LLU;
int8_t x644 = 1;
static volatile int64_t t141 = -4LL;
static int32_t t142 = 649420138;
static uint8_t x649 = 4U;
volatile int64_t t145 = 14950LL;
volatile int16_t x661 = -1;
volatile int64_t t147 = 101LL;
int32_t x674 = INT32_MIN;
int64_t t148 = 29254606532LL;
static uint16_t x687 = 128U;
static volatile uint16_t x688 = UINT16_MAX;
uint8_t x690 = UINT8_MAX;
static int8_t x700 = 7;
static int8_t x701 = INT8_MAX;
uint8_t x704 = UINT8_MAX;
uint64_t x706 = 68553884867065375LLU;
uint8_t x711 = 1U;
uint16_t x716 = 3U;
volatile uint64_t t158 = 263LLU;
volatile int64_t x719 = INT64_MIN;
int16_t x721 = INT16_MIN;
int16_t x724 = -9;
uint32_t t164 = 19U;
int8_t x753 = INT8_MIN;
uint8_t x754 = 32U;
int32_t x765 = INT32_MIN;
int64_t x771 = -1LL;
static volatile uint32_t x777 = 1422506211U;
int16_t x778 = -1;
int32_t x781 = INT32_MAX;
volatile uint64_t x783 = 125845765LLU;
uint64_t x785 = UINT64_MAX;
int8_t x789 = INT8_MIN;
int32_t x791 = -3331334;
uint32_t t175 = 5U;
static uint8_t x816 = 115U;
int32_t x827 = INT32_MIN;
int64_t t180 = 34842996861903LL;
uint16_t x831 = 282U;
volatile int32_t x837 = -7973;
int64_t t184 = -3598LL;
int64_t x845 = -9LL;
static uint8_t x857 = UINT8_MAX;
static int64_t x859 = INT64_MAX;
int64_t t187 = 1054LL;
volatile uint8_t x874 = 6U;
uint32_t t191 = 809127U;
int16_t x905 = -1;
static int16_t x908 = 0;
static int64_t x915 = INT64_MAX;


void f0(void) {
    	int64_t x1 = INT64_MIN;
	static int16_t x2 = INT16_MIN;
	int8_t x3 = -1;
	uint8_t x4 = 21U;
	volatile int64_t t0 = -94LL;

    t0 = (x1+((x2%x3)+x4));

    if (t0 != -9223372036854775787LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x6 = 99810579926853LLU;
	int16_t x7 = INT16_MAX;
	static int64_t x8 = -1LL;
	uint64_t t1 = 14065148LLU;

    t1 = (x5+((x6%x7)+x8));

    if (t1 != 9223372036854785717LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x13 = UINT16_MAX;
	volatile uint32_t x16 = 11536593U;
	volatile uint64_t t2 = 34049LLU;

    t2 = (x13+((x14%x15)+x16));

    if (t2 != 11602146LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x17 = -1LL;
	static int32_t x18 = -92694;
	int8_t x19 = -7;
	volatile int64_t t3 = 208LL;

    t3 = (x17+((x18%x19)+x20));

    if (t3 != -2147483649LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int64_t x21 = -8LL;
	static uint16_t x22 = 0U;
	int16_t x23 = 2625;
	volatile uint64_t x24 = 438300207652LLU;
	uint64_t t4 = 977150LLU;

    t4 = (x21+((x22%x23)+x24));

    if (t4 != 438300207644LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x25 = 464683U;
	static int16_t x26 = -1;
	int64_t x27 = 77940209837LL;
	uint8_t x28 = UINT8_MAX;
	int64_t t5 = 87LL;

    t5 = (x25+((x26%x27)+x28));

    if (t5 != 464937LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x29 = INT32_MAX;
	int16_t x31 = INT16_MAX;
	int64_t x32 = INT64_MIN;
	static int64_t t6 = 6626213796LL;

    t6 = (x29+((x30%x31)+x32));

    if (t6 != -9223372034707292034LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint8_t x33 = 14U;
	static int16_t x34 = -5405;
	uint8_t x35 = UINT8_MAX;
	int32_t x36 = -55661;

    t7 = (x33+((x34%x35)+x36));

    if (t7 != -55697) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x37 = 73036067451070LLU;
	volatile uint64_t x38 = UINT64_MAX;

    t8 = (x37+((x38%x39)+x40));

    if (t8 != 73036758649101LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x42 = -15;
	volatile int8_t x44 = INT8_MIN;
	volatile int64_t t9 = 653697715138080LL;

    t9 = (x41+((x42%x43)+x44));

    if (t9 != -271LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x45 = 0U;
	static volatile int8_t x46 = -36;
	int32_t x48 = INT32_MAX;
	volatile int32_t t10 = INT32_MAX;

    t10 = (x45+((x46%x47)+x48));

    if (t10 != INT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x53 = -1;
	int32_t x55 = INT32_MAX;
	uint64_t x56 = 33092144LLU;
	uint64_t t11 = 7196483970LLU;

    t11 = (x53+((x54%x55)+x56));

    if (t11 != 33092398LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x57 = UINT32_MAX;
	uint64_t x59 = 176875219795362LLU;
	uint16_t x60 = 6980U;
	volatile uint64_t t12 = 1509194387649346004LLU;

    t12 = (x57+((x58%x59)+x60));

    if (t12 != 4294976001LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x61 = -427565157;
	volatile int16_t x62 = -5108;
	static int16_t x64 = INT16_MAX;
	volatile int32_t t13 = 53556;

    t13 = (x61+((x62%x63)+x64));

    if (t13 != -427532390) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x65 = INT32_MIN;
	static int64_t x66 = -11938338539536LL;
	uint64_t x67 = UINT64_MAX;
	volatile int32_t x68 = INT32_MIN;
	volatile uint64_t t14 = 247LLU;

    t14 = (x65+((x66%x67)+x68));

    if (t14 != 18446732131076044784LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x69 = INT16_MAX;
	static int32_t x70 = -1;
	int16_t x71 = INT16_MIN;
	uint32_t x72 = 992247U;
	uint32_t t15 = 26095894U;

    t15 = (x69+((x70%x71)+x72));

    if (t15 != 1025013U) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint64_t x73 = UINT64_MAX;
	uint64_t x75 = UINT64_MAX;
	int64_t x76 = INT64_MAX;
	static uint64_t t16 = 5735858960617LLU;

    t16 = (x73+((x74%x75)+x76));

    if (t16 != 9483774022421226344LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x78 = INT16_MAX;
	int32_t x79 = INT32_MIN;
	int32_t x80 = 485003021;
	volatile int32_t t17 = -22275;

    t17 = (x77+((x78%x79)+x80));

    if (t17 != 485035787) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x81 = -1;
	int16_t x82 = INT16_MIN;
	static volatile uint16_t x83 = UINT16_MAX;
	volatile uint64_t t18 = 18495LLU;

    t18 = (x81+((x82%x83)+x84));

    if (t18 != 1114626417LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x89 = INT64_MAX;
	int16_t x90 = -1;
	int16_t x91 = 1;
	uint64_t x92 = UINT64_MAX;
	uint64_t t19 = 28LLU;

    t19 = (x89+((x90%x91)+x92));

    if (t19 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x93 = INT16_MAX;
	int64_t x94 = INT64_MAX;
	int32_t x95 = INT32_MAX;
	uint64_t x96 = UINT64_MAX;
	volatile uint64_t t20 = 4353LLU;

    t20 = (x93+((x94%x95)+x96));

    if (t20 != 32767LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x99 = -5087;
	volatile uint16_t x100 = 2636U;
	volatile int64_t t21 = 20LL;

    t21 = (x97+((x98%x99)+x100));

    if (t21 != -9223372036854773045LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x101 = INT8_MIN;
	int8_t x102 = -1;
	int8_t x103 = INT8_MAX;
	int16_t x104 = 92;

    t22 = (x101+((x102%x103)+x104));

    if (t22 != -37) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint8_t x105 = UINT8_MAX;
	static uint32_t x106 = 108845U;
	volatile int64_t x107 = INT64_MIN;
	volatile int64_t t23 = 49130326LL;

    t23 = (x105+((x106%x107)+x108));

    if (t23 != 109101LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x112 = -21;
	uint32_t t24 = 110977U;

    t24 = (x109+((x110%x111)+x112));

    if (t24 != 2147483627U) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int64_t x117 = 101292LL;
	int16_t x118 = -1;
	static volatile int16_t x120 = INT16_MIN;
	int64_t t25 = -1451341669126115929LL;

    t25 = (x117+((x118%x119)+x120));

    if (t25 != 68524LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x121 = -13263994845983692LL;
	volatile int16_t x122 = -1;
	int8_t x123 = INT8_MIN;
	int16_t x124 = 0;

    t26 = (x121+((x122%x123)+x124));

    if (t26 != -13263994845983693LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x125 = INT32_MAX;
	volatile uint16_t x126 = 8370U;
	uint64_t x128 = 6962979382131LLU;
	static uint64_t t27 = 7LLU;

    t27 = (x125+((x126%x127)+x128));

    if (t27 != 6965126874148LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint32_t x133 = 1792667U;
	int16_t x134 = INT16_MAX;
	uint32_t x136 = 1U;

    t28 = (x133+((x134%x135)+x136));

    if (t28 != 1825435LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x137 = 6;
	uint8_t x139 = 11U;
	uint8_t x140 = 47U;
	volatile int32_t t29 = -13;

    t29 = (x137+((x138%x139)+x140));

    if (t29 != 58) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint64_t x145 = 5979LLU;
	int32_t x146 = INT32_MAX;
	int8_t x147 = 3;
	volatile uint16_t x148 = UINT16_MAX;

    t30 = (x145+((x146%x147)+x148));

    if (t30 != 71515LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x153 = INT8_MIN;
	uint64_t x154 = 10397206LLU;
	int32_t x155 = INT32_MIN;

    t31 = (x153+((x154%x155)+x156));

    if (t31 != 18446744071572465046LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x157 = INT32_MAX;
	static int64_t x158 = INT64_MIN;
	static volatile int64_t x159 = INT64_MIN;
	int64_t x160 = -4462193LL;
	int64_t t32 = -107240763811LL;

    t32 = (x157+((x158%x159)+x160));

    if (t32 != 2143021454LL) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x161 = -1;
	volatile int32_t x162 = 705;
	int16_t x163 = INT16_MAX;
	uint64_t x164 = 17284LLU;
	volatile uint64_t t33 = 83121208226LLU;

    t33 = (x161+((x162%x163)+x164));

    if (t33 != 17988LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x165 = INT32_MAX;
	uint16_t x166 = 29203U;
	volatile int32_t t34 = INT32_MAX;

    t34 = (x165+((x166%x167)+x168));

    if (t34 != INT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint16_t x169 = 6U;
	int8_t x170 = -54;
	int64_t x171 = INT64_MIN;
	volatile uint64_t x172 = 3LLU;

    t35 = (x169+((x170%x171)+x172));

    if (t35 != 18446744073709551571LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x173 = -227;
	int16_t x174 = -7922;
	volatile int32_t t36 = -2919030;

    t36 = (x173+((x174%x175)+x176));

    if (t36 != -8468) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x178 = UINT32_MAX;
	volatile uint64_t t37 = 31955LLU;

    t37 = (x177+((x178%x179)+x180));

    if (t37 != 4294967170LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x181 = 35U;
	uint8_t x182 = UINT8_MAX;
	static int64_t x184 = 1403359089LL;
	uint64_t t38 = 26LLU;

    t38 = (x181+((x182%x183)+x184));

    if (t38 != 1403359379LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x185 = -3466332917805LL;
	uint8_t x187 = 6U;
	volatile uint32_t x188 = 1037U;
	volatile int64_t t39 = -24486089LL;

    t39 = (x185+((x186%x187)+x188));

    if (t39 != -3466332916768LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x190 = -4392;
	int16_t x192 = INT16_MIN;
	int32_t t40 = 3;

    t40 = (x189+((x190%x191)+x192));

    if (t40 != -32783) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x193 = -1;
	volatile uint16_t x195 = UINT16_MAX;
	uint8_t x196 = UINT8_MAX;

    t41 = (x193+((x194%x195)+x196));

    if (t41 != 276) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile int32_t x210 = 859087678;
	volatile int32_t x211 = INT32_MAX;
	volatile int64_t x212 = INT64_MIN;
	static int64_t t42 = 3306262608549LL;

    t42 = (x209+((x210%x211)+x212));

    if (t42 != -9223372035995687906LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x213 = 3U;
	int16_t x215 = -1;
	volatile uint32_t t43 = 1367U;

    t43 = (x213+((x214%x215)+x216));

    if (t43 != 4294934531U) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x223 = INT8_MIN;
	int32_t x224 = 1;
	static int64_t t44 = -295LL;

    t44 = (x221+((x222%x223)+x224));

    if (t44 != 1LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static int64_t x229 = INT64_MIN;
	volatile int16_t x230 = -1;
	int16_t x231 = -370;
	static volatile int16_t x232 = 1;
	static volatile int64_t t45 = INT64_MIN;

    t45 = (x229+((x230%x231)+x232));

    if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x233 = UINT32_MAX;
	uint16_t x235 = UINT16_MAX;
	volatile uint32_t t46 = 538760800U;

    t46 = (x233+((x234%x235)+x236));

    if (t46 != 2147450878U) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x237 = -1;
	uint16_t x238 = 1U;
	uint32_t x239 = UINT32_MAX;
	volatile uint64_t x240 = 541LLU;
	uint64_t t47 = 37LLU;

    t47 = (x237+((x238%x239)+x240));

    if (t47 != 541LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x241 = INT8_MIN;
	uint32_t x242 = 1U;
	int8_t x243 = -1;
	int8_t x244 = -1;
	volatile uint32_t t48 = 15858555U;

    t48 = (x241+((x242%x243)+x244));

    if (t48 != 4294967168U) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x245 = -1LL;
	uint32_t x246 = UINT32_MAX;
	int64_t x247 = INT64_MAX;
	static volatile uint32_t x248 = 4792075U;

    t49 = (x245+((x246%x247)+x248));

    if (t49 != 4299759369LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x254 = INT16_MIN;
	int32_t x256 = INT32_MIN;
	uint32_t t50 = 1784995357U;

    t50 = (x253+((x254%x255)+x256));

    if (t50 != 2181957868U) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x257 = -1;
	int32_t x258 = INT32_MIN;
	int64_t x259 = INT64_MIN;

    t51 = (x257+((x258%x259)+x260));

    if (t51 != -2147483646LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x261 = 673216LLU;
	volatile int32_t x262 = INT32_MIN;
	volatile int16_t x263 = 739;
	int32_t x264 = 60;
	uint64_t t52 = 1030LLU;

    t52 = (x261+((x262%x263)+x264));

    if (t52 != 672637LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static int32_t x270 = 1122;
	static int32_t x271 = INT32_MIN;
	volatile int64_t t53 = 69996843754878290LL;

    t53 = (x269+((x270%x271)+x272));

    if (t53 != 4159453724164773LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x273 = INT64_MIN;
	int64_t x274 = INT64_MIN;
	int64_t x275 = -1LL;
	static uint16_t x276 = UINT16_MAX;
	int64_t t54 = -209835374327LL;

    t54 = (x273+((x274%x275)+x276));

    if (t54 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x282 = 19LLU;
	uint16_t x283 = UINT16_MAX;
	static uint32_t x284 = 51458790U;
	uint64_t t55 = 0LLU;

    t55 = (x281+((x282%x283)+x284));

    if (t55 != 18446744073327353069LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x285 = INT16_MIN;
	int16_t x288 = INT16_MIN;
	volatile uint64_t t56 = 95871LLU;

    t56 = (x285+((x286%x287)+x288));

    if (t56 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x293 = -23;
	uint32_t x294 = 556U;
	int16_t x296 = INT16_MIN;
	uint32_t t57 = 59U;

    t57 = (x293+((x294%x295)+x296));

    if (t57 != 4294934521U) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint32_t x297 = 227088041U;
	volatile uint32_t x298 = UINT32_MAX;
	int64_t x299 = INT64_MIN;
	uint16_t x300 = 1061U;

    t58 = (x297+((x298%x299)+x300));

    if (t58 != 4522056397LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x301 = INT32_MIN;
	int64_t x302 = INT64_MAX;
	static int8_t x303 = INT8_MIN;
	int32_t x304 = INT32_MIN;
	int64_t t59 = 12480902LL;

    t59 = (x301+((x302%x303)+x304));

    if (t59 != -4294967169LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x305 = INT16_MIN;
	static int64_t x306 = -9988795LL;
	static volatile int8_t x308 = INT8_MIN;
	static int64_t t60 = 1138194LL;

    t60 = (x305+((x306%x307)+x308));

    if (t60 != -10021691LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x309 = INT16_MAX;
	volatile int32_t x310 = INT32_MAX;
	int64_t x311 = INT64_MIN;
	volatile uint16_t x312 = 15U;
	volatile int64_t t61 = -3045081800682600167LL;

    t61 = (x309+((x310%x311)+x312));

    if (t61 != 2147516429LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x313 = -3786545649LL;
	static volatile int32_t x314 = INT32_MAX;
	static int8_t x315 = INT8_MIN;
	int32_t x316 = -1;
	volatile int64_t t62 = 159LL;

    t62 = (x313+((x314%x315)+x316));

    if (t62 != -3786545523LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x321 = UINT8_MAX;
	int32_t x323 = -1636;
	uint64_t x324 = UINT64_MAX;
	static uint64_t t63 = 53226LLU;

    t63 = (x321+((x322%x323)+x324));

    if (t63 != 264LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x325 = INT16_MIN;
	volatile uint16_t x326 = 57U;
	int32_t x327 = INT32_MAX;
	uint64_t x328 = 8824836528103995LLU;
	volatile uint64_t t64 = 80263490047209827LLU;

    t64 = (x325+((x326%x327)+x328));

    if (t64 != 8824836528071284LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x329 = 5U;
	static volatile uint64_t t65 = 53LLU;

    t65 = (x329+((x330%x331)+x332));

    if (t65 != 2014976728036LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x333 = -1;
	static volatile uint16_t x334 = 55U;
	int8_t x335 = INT8_MIN;

    t66 = (x333+((x334%x335)+x336));

    if (t66 != 53U) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x337 = INT8_MAX;
	uint32_t x338 = 24796U;
	volatile int8_t x339 = -18;
	int32_t x340 = -53808;
	uint32_t t67 = 201U;

    t67 = (x337+((x338%x339)+x340));

    if (t67 != 4294938411U) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x341 = -1;
	static int32_t x342 = -1;
	uint16_t x343 = 26999U;
	int64_t x344 = 814922532435831521LL;
	volatile int64_t t68 = -4436677960906LL;

    t68 = (x341+((x342%x343)+x344));

    if (t68 != 814922532435831519LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x345 = -1;
	volatile int64_t x347 = 3752LL;
	int16_t x348 = 2322;
	volatile int64_t t69 = 4786215965722346LL;

    t69 = (x345+((x346%x347)+x348));

    if (t69 != 4072LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x349 = 60U;
	static int8_t x350 = -1;
	volatile int8_t x351 = INT8_MIN;
	int64_t x352 = -1LL;
	int64_t t70 = -28013LL;

    t70 = (x349+((x350%x351)+x352));

    if (t70 != 58LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static int16_t x353 = INT16_MAX;
	uint32_t x354 = 256807U;
	int32_t x355 = -2875879;
	volatile uint64_t x356 = 1304025821LLU;
	volatile uint64_t t71 = 1020523340LLU;

    t71 = (x353+((x354%x355)+x356));

    if (t71 != 1304315395LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	static int32_t x357 = INT32_MIN;
	static int16_t x358 = -3;
	int32_t x360 = INT32_MAX;

    t72 = (x357+((x358%x359)+x360));

    if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x362 = INT8_MAX;
	int8_t x363 = INT8_MIN;
	int8_t x364 = INT8_MIN;
	uint32_t t73 = 2U;

    t73 = (x361+((x362%x363)+x364));

    if (t73 != 514708200U) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x365 = INT16_MIN;
	static int32_t x366 = INT32_MIN;
	int8_t x368 = -32;
	volatile int64_t t74 = -6260562797897071LL;

    t74 = (x365+((x366%x367)+x368));

    if (t74 != -2147516448LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint8_t x369 = 21U;
	int32_t x370 = 123179;
	int64_t x371 = INT64_MAX;
	static uint16_t x372 = UINT16_MAX;
	int64_t t75 = 845848LL;

    t75 = (x369+((x370%x371)+x372));

    if (t75 != 188735LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x373 = -1;
	uint16_t x374 = UINT16_MAX;
	static int64_t x375 = INT64_MAX;
	volatile int16_t x376 = 7;
	volatile int64_t t76 = 85195LL;

    t76 = (x373+((x374%x375)+x376));

    if (t76 != 65541LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x377 = INT32_MIN;
	uint8_t x378 = UINT8_MAX;
	int16_t x380 = 5989;
	volatile int32_t t77 = -63129;

    t77 = (x377+((x378%x379)+x380));

    if (t77 != -2147477657) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x381 = -744944LL;
	static int16_t x382 = INT16_MIN;
	uint64_t x383 = 369031477057230682LLU;
	uint64_t t78 = 3LLU;

    t78 = (x381+((x382%x383)+x384));

    if (t78 != 364201697904470485LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x385 = INT32_MIN;
	static int16_t x387 = INT16_MAX;
	int32_t x388 = INT32_MAX;
	volatile int32_t t79 = 315123;

    t79 = (x385+((x386%x387)+x388));

    if (t79 != -20767) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x389 = UINT8_MAX;
	uint16_t x390 = UINT16_MAX;
	volatile int16_t x391 = INT16_MAX;
	int16_t x392 = -15289;
	volatile int32_t t80 = 3106;

    t80 = (x389+((x390%x391)+x392));

    if (t80 != -15033) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x393 = -58;
	static volatile int32_t x394 = INT32_MAX;
	volatile int64_t x395 = 17LL;
	int64_t x396 = 69576868538LL;

    t81 = (x393+((x394%x395)+x396));

    if (t81 != 69576868488LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x397 = INT8_MIN;
	int32_t x398 = -5447020;
	int16_t x399 = -955;
	int8_t x400 = 8;
	static volatile int32_t t82 = 18652;

    t82 = (x397+((x398%x399)+x400));

    if (t82 != -775) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x401 = 0U;
	int64_t x402 = 1LL;
	uint16_t x404 = 0U;

    t83 = (x401+((x402%x403)+x404));

    if (t83 != 1LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x405 = -109290116LL;
	int16_t x407 = INT16_MIN;

    t84 = (x405+((x406%x407)+x408));

    if (t84 != -109289987LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x409 = -1;
	int8_t x410 = INT8_MIN;
	volatile int32_t t85 = 171996;

    t85 = (x409+((x410%x411)+x412));

    if (t85 != -257) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x413 = INT8_MIN;
	uint8_t x414 = 0U;
	volatile int8_t x415 = 1;
	int32_t x416 = -99583;
	volatile int32_t t86 = -3;

    t86 = (x413+((x414%x415)+x416));

    if (t86 != -99711) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint16_t x417 = 0U;
	int8_t x418 = INT8_MAX;
	static int8_t x420 = INT8_MIN;
	static int64_t t87 = -22832005229LL;

    t87 = (x417+((x418%x419)+x420));

    if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x421 = -1LL;
	uint8_t x422 = 21U;
	uint64_t x424 = UINT64_MAX;
	volatile uint64_t t88 = UINT64_MAX;

    t88 = (x421+((x422%x423)+x424));

    if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint16_t x425 = 0U;
	static int16_t x426 = INT16_MAX;
	static uint32_t x427 = 120U;
	uint64_t x428 = 13698107099584345LLU;
	static volatile uint64_t t89 = 222080LLU;

    t89 = (x425+((x426%x427)+x428));

    if (t89 != 13698107099584352LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x429 = -43601782380244516LL;
	uint64_t x430 = 2940952LLU;
	volatile int32_t x431 = -298584;
	int16_t x432 = INT16_MAX;
	static uint64_t t90 = 185238132386992350LLU;

    t90 = (x429+((x430%x431)+x432));

    if (t90 != 18403142291332280819LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x434 = -1;
	int32_t x436 = INT32_MIN;
	int64_t t91 = 401404129LL;

    t91 = (x433+((x434%x435)+x436));

    if (t91 != -2147516416LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x437 = 5433U;
	static volatile int32_t x438 = INT32_MAX;
	uint64_t x439 = 13714LLU;
	uint8_t x440 = 95U;
	volatile uint64_t t92 = 234LLU;

    t92 = (x437+((x438%x439)+x440));

    if (t92 != 13915LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile int8_t x445 = 8;
	static int8_t x446 = 0;
	int8_t x447 = -1;
	volatile int32_t t93 = 10145;

    t93 = (x445+((x446%x447)+x448));

    if (t93 != 135) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x449 = 73763633695LLU;
	static int64_t x450 = -55172319316319430LL;
	static volatile uint8_t x452 = 16U;
	static uint64_t t94 = 28425797724814LLU;

    t94 = (x449+((x450%x451)+x452));

    if (t94 != 73763633549LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x454 = 1U;
	static uint16_t x455 = UINT16_MAX;
	volatile uint32_t t95 = 48U;

    t95 = (x453+((x454%x455)+x456));

    if (t95 != 25U) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x457 = UINT16_MAX;
	static int16_t x459 = -1;
	int16_t x460 = -1;
	volatile uint32_t t96 = 1788944746U;

    t96 = (x457+((x458%x459)+x460));

    if (t96 != 68377U) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x461 = -1;
	int64_t x462 = -6452LL;
	int16_t x463 = 4;
	uint32_t x464 = UINT32_MAX;

    t97 = (x461+((x462%x463)+x464));

    if (t97 != 4294967294LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x465 = INT32_MAX;
	uint8_t x466 = 5U;
	uint32_t x467 = UINT32_MAX;
	int32_t x468 = INT32_MIN;
	static volatile uint32_t t98 = 187U;

    t98 = (x465+((x466%x467)+x468));

    if (t98 != 4U) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x470 = INT64_MIN;
	volatile uint16_t x471 = 53U;
	int32_t x472 = INT32_MIN;
	int64_t t99 = 27222041LL;

    t99 = (x469+((x470%x471)+x472));

    if (t99 != -2147483810LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x477 = 809336255LLU;
	uint8_t x478 = 73U;
	int16_t x479 = INT16_MIN;
	int32_t x480 = -1;

    t100 = (x477+((x478%x479)+x480));

    if (t100 != 809336327LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x481 = UINT8_MAX;
	static int32_t x482 = -1;
	volatile int32_t x483 = -20;
	static int64_t x484 = -1LL;
	int64_t t101 = -7261676588112402LL;

    t101 = (x481+((x482%x483)+x484));

    if (t101 != 253LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x485 = UINT16_MAX;
	int8_t x486 = INT8_MAX;

    t102 = (x485+((x486%x487)+x488));

    if (t102 != 51638296365LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x489 = 47287366LL;
	int16_t x490 = 25;
	int8_t x491 = 2;
	int16_t x492 = INT16_MIN;
	volatile int64_t t103 = -1720957525290659LL;

    t103 = (x489+((x490%x491)+x492));

    if (t103 != 47254599LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x493 = 0;
	uint8_t x494 = 2U;
	volatile int8_t x495 = 1;
	int32_t x496 = -34757863;
	volatile int32_t t104 = 88;

    t104 = (x493+((x494%x495)+x496));

    if (t104 != -34757863) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x498 = 0;
	int16_t x500 = INT16_MAX;

    t105 = (x497+((x498%x499)+x500));

    if (t105 != 32639U) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x501 = UINT8_MAX;
	int64_t x503 = 4014158124022612393LL;
	volatile int64_t t106 = 7557438564848993LL;

    t106 = (x501+((x502%x503)+x504));

    if (t106 != -13684LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int32_t x505 = -220086;
	int32_t x507 = -1;
	uint32_t x508 = UINT32_MAX;
	uint32_t t107 = 1734U;

    t107 = (x505+((x506%x507)+x508));

    if (t107 != 4294747209U) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x509 = 0;
	uint32_t x510 = 19299U;
	int16_t x511 = INT16_MIN;
	volatile int16_t x512 = 1;
	uint32_t t108 = 216969U;

    t108 = (x509+((x510%x511)+x512));

    if (t108 != 19300U) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x513 = INT8_MIN;
	volatile int64_t x514 = INT64_MIN;
	static volatile uint32_t x515 = 31U;
	uint8_t x516 = 5U;
	static int64_t t109 = 6069756715881LL;

    t109 = (x513+((x514%x515)+x516));

    if (t109 != -131LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint64_t x517 = UINT64_MAX;
	uint8_t x518 = UINT8_MAX;
	int64_t x519 = INT64_MAX;
	static volatile uint64_t t110 = 58616486373058LLU;

    t110 = (x517+((x518%x519)+x520));

    if (t110 != 33021LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x521 = 5;
	int64_t x523 = INT64_MIN;
	volatile int64_t t111 = -7360501LL;

    t111 = (x521+((x522%x523)+x524));

    if (t111 != -32753LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x525 = -1LL;
	int16_t x528 = -1725;
	volatile int64_t t112 = 2LL;

    t112 = (x525+((x526%x527)+x528));

    if (t112 != -1854LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x529 = INT16_MIN;
	int16_t x530 = 0;
	static int64_t x531 = -1LL;
	int64_t t113 = -6LL;

    t113 = (x529+((x530%x531)+x532));

    if (t113 != -32513LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x533 = INT32_MAX;
	static int32_t x535 = -1;
	int32_t x536 = -670;
	static int32_t t114 = -1;

    t114 = (x533+((x534%x535)+x536));

    if (t114 != 2147482977) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x537 = -42641LL;
	int32_t x538 = 25510;
	int8_t x539 = -1;
	static volatile uint16_t x540 = 0U;
	int64_t t115 = -119491704260189LL;

    t115 = (x537+((x538%x539)+x540));

    if (t115 != -42641LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static int64_t x541 = INT64_MIN;
	int8_t x543 = INT8_MIN;
	volatile uint32_t x544 = 345123U;
	volatile int64_t t116 = 123887066976524556LL;

    t116 = (x541+((x542%x543)+x544));

    if (t116 != -9223372036854430558LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x545 = 1411730U;
	int64_t x546 = 1367744568LL;
	uint8_t x547 = UINT8_MAX;
	static volatile int16_t x548 = 248;
	int64_t t117 = 58148547490914LL;

    t117 = (x545+((x546%x547)+x548));

    if (t117 != 1412026LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static int32_t x549 = 918;
	int32_t x550 = INT32_MIN;
	int16_t x551 = -1;
	uint16_t x552 = 225U;
	int32_t t118 = 2805;

    t118 = (x549+((x550%x551)+x552));

    if (t118 != 1143) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x554 = -19;
	int32_t x556 = -28838;
	int64_t t119 = -22019748302LL;

    t119 = (x553+((x554%x555)+x556));

    if (t119 != -28785LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x557 = 12227969896472886LLU;
	volatile uint16_t x559 = 24U;
	int64_t x560 = 96827LL;

    t120 = (x557+((x558%x559)+x560));

    if (t120 != 12227969896569705LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x561 = UINT32_MAX;
	uint32_t x563 = UINT32_MAX;
	uint8_t x564 = 25U;
	uint32_t t121 = 0U;

    t121 = (x561+((x562%x563)+x564));

    if (t121 != 32791U) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x565 = 26U;
	static int8_t x566 = -46;
	static int32_t x567 = INT32_MIN;
	static volatile uint16_t x568 = UINT16_MAX;

    t122 = (x565+((x566%x567)+x568));

    if (t122 != 65515) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile uint8_t x569 = 5U;
	volatile int8_t x570 = INT8_MAX;
	volatile uint64_t t123 = 1186545433LLU;

    t123 = (x569+((x570%x571)+x572));

    if (t123 != 4LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x573 = 47U;
	uint64_t x575 = 12LLU;
	volatile int8_t x576 = -1;
	uint64_t t124 = 35984686440LLU;

    t124 = (x573+((x574%x575)+x576));

    if (t124 != 51LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x577 = -1;
	static volatile int32_t x578 = 41289413;
	uint8_t x579 = 19U;
	static int8_t x580 = -1;
	int32_t t125 = -219475;

    t125 = (x577+((x578%x579)+x580));

    if (t125 != -2) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int32_t x581 = INT32_MAX;
	int32_t x582 = INT32_MIN;
	static uint64_t x583 = 262616443LLU;
	static int8_t x584 = INT8_MIN;

    t126 = (x581+((x582%x583)+x584));

    if (t126 != 2257435292LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x585 = 663655421538LLU;
	volatile int32_t x587 = -1;
	int64_t x588 = -1162952011585LL;
	uint64_t t127 = 39658687LLU;

    t127 = (x585+((x586%x587)+x588));

    if (t127 != 18446743574412961569LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x589 = 0U;
	volatile int64_t x590 = -1LL;
	uint32_t x591 = UINT32_MAX;
	static int64_t t128 = 21148789LL;

    t128 = (x589+((x590%x591)+x592));

    if (t128 != -2LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x593 = -1;
	volatile int32_t x594 = INT32_MAX;
	static volatile int32_t t129 = 418066770;

    t129 = (x593+((x594%x595)+x596));

    if (t129 != 129) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int64_t x597 = -1LL;
	uint64_t x598 = 100191897LLU;
	volatile uint32_t x599 = UINT32_MAX;
	volatile uint64_t t130 = 3LLU;

    t130 = (x597+((x598%x599)+x600));

    if (t130 != 2247675543LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x601 = -1;
	int16_t x602 = 150;
	int8_t x603 = INT8_MIN;
	uint64_t x604 = UINT64_MAX;
	volatile uint64_t t131 = 4623330363LLU;

    t131 = (x601+((x602%x603)+x604));

    if (t131 != 20LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x605 = -1LL;
	static int16_t x607 = -1;
	int8_t x608 = INT8_MIN;

    t132 = (x605+((x606%x607)+x608));

    if (t132 != -129LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x609 = INT8_MAX;
	int32_t x611 = -11;
	int32_t x612 = INT32_MIN;

    t133 = (x609+((x610%x611)+x612));

    if (t133 != 787967113537LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x613 = UINT16_MAX;
	static int64_t x614 = INT64_MIN;
	uint16_t x615 = 427U;
	int64_t x616 = 15LL;

    t134 = (x613+((x614%x615)+x616));

    if (t134 != 65542LL) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint16_t x617 = 16178U;
	volatile int64_t x618 = 35358250877LL;
	uint16_t x619 = 1450U;
	uint32_t x620 = 10U;
	static int64_t t135 = 29279982LL;

    t135 = (x617+((x618%x619)+x620));

    if (t135 != 17065LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x623 = INT64_MIN;
	uint64_t x624 = 4340585472285195252LLU;

    t136 = (x621+((x622%x623)+x624));

    if (t136 != 4340585472258124481LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x625 = 14402U;
	static int8_t x626 = 0;
	uint64_t x627 = 292164567LLU;
	int8_t x628 = INT8_MAX;
	uint64_t t137 = 13082562723062836LLU;

    t137 = (x625+((x626%x627)+x628));

    if (t137 != 14529LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x629 = -23;
	int16_t x630 = 1;
	int16_t x631 = INT16_MAX;
	static int16_t x632 = INT16_MIN;
	volatile int32_t t138 = -67943251;

    t138 = (x629+((x630%x631)+x632));

    if (t138 != -32790) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x633 = 123U;
	static int8_t x634 = INT8_MIN;
	static uint16_t x636 = 0U;

    t139 = (x633+((x634%x635)+x636));

    if (t139 != 114) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x637 = 0U;
	uint32_t x638 = UINT32_MAX;
	int64_t x639 = INT64_MAX;
	uint64_t x640 = UINT64_MAX;

    t140 = (x637+((x638%x639)+x640));

    if (t140 != 4294967294LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x641 = 34104973043609211LL;
	int64_t x642 = INT64_MIN;
	volatile int16_t x643 = INT16_MIN;

    t141 = (x641+((x642%x643)+x644));

    if (t141 != 34104973043609212LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x645 = INT16_MIN;
	volatile int32_t x646 = -1;
	int8_t x647 = INT8_MIN;
	volatile int16_t x648 = INT16_MIN;

    t142 = (x645+((x646%x647)+x648));

    if (t142 != -65537) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint8_t x650 = 2U;
	uint32_t x651 = 2241U;
	volatile uint32_t x652 = 459237108U;
	volatile uint32_t t143 = 585063U;

    t143 = (x649+((x650%x651)+x652));

    if (t143 != 459237114U) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x653 = -25;
	volatile int64_t x654 = INT64_MAX;
	int64_t x655 = INT64_MIN;
	int8_t x656 = 0;
	static int64_t t144 = -16227338LL;

    t144 = (x653+((x654%x655)+x656));

    if (t144 != 9223372036854775782LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x657 = INT64_MIN;
	static uint16_t x658 = 11859U;
	int16_t x659 = INT16_MAX;
	uint8_t x660 = UINT8_MAX;

    t145 = (x657+((x658%x659)+x660));

    if (t145 != -9223372036854763694LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x662 = -1;
	int8_t x663 = INT8_MIN;
	uint16_t x664 = 1377U;
	volatile int32_t t146 = 96781;

    t146 = (x661+((x662%x663)+x664));

    if (t146 != 1375) { NG(); } else { ; }
	
}

void f147(void) {
    	static int64_t x669 = 399346063868817LL;
	int8_t x670 = 1;
	volatile uint32_t x671 = 33U;
	int8_t x672 = -1;

    t147 = (x669+((x670%x671)+x672));

    if (t147 != 399346063868817LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x673 = 1U;
	int64_t x675 = -4377488348LL;
	uint16_t x676 = 9U;

    t148 = (x673+((x674%x675)+x676));

    if (t148 != -2147483638LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x677 = INT32_MIN;
	int32_t x678 = INT32_MIN;
	int8_t x679 = INT8_MAX;
	uint8_t x680 = UINT8_MAX;
	int32_t t149 = 28;

    t149 = (x677+((x678%x679)+x680));

    if (t149 != -2147483401) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x681 = 55U;
	uint32_t x682 = 16418U;
	int16_t x683 = 1751;
	static volatile int16_t x684 = -12068;
	volatile uint32_t t150 = 66805519U;

    t150 = (x681+((x682%x683)+x684));

    if (t150 != 4294955942U) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x685 = INT32_MIN;
	volatile int16_t x686 = INT16_MIN;
	volatile int32_t t151 = 13;

    t151 = (x685+((x686%x687)+x688));

    if (t151 != -2147418113) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x689 = -1;
	int32_t x691 = 2798;
	int32_t x692 = INT32_MIN;
	volatile int32_t t152 = -1;

    t152 = (x689+((x690%x691)+x692));

    if (t152 != -2147483394) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x693 = INT8_MAX;
	int16_t x694 = -1;
	int64_t x695 = INT64_MIN;
	static uint16_t x696 = UINT16_MAX;
	static volatile int64_t t153 = 922633895795749LL;

    t153 = (x693+((x694%x695)+x696));

    if (t153 != 65661LL) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int8_t x697 = INT8_MAX;
	uint32_t x698 = 6U;
	int64_t x699 = -23610LL;
	int64_t t154 = 12334757LL;

    t154 = (x697+((x698%x699)+x700));

    if (t154 != 140LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x702 = 1;
	int32_t x703 = 355436998;
	int32_t t155 = -497641;

    t155 = (x701+((x702%x703)+x704));

    if (t155 != 383) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x705 = INT8_MIN;
	int64_t x707 = INT64_MIN;
	uint8_t x708 = UINT8_MAX;
	volatile uint64_t t156 = 625LLU;

    t156 = (x705+((x706%x707)+x708));

    if (t156 != 68553884867065502LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x709 = 4137;
	int16_t x710 = INT16_MIN;
	uint64_t x712 = UINT64_MAX;
	uint64_t t157 = 119LLU;

    t157 = (x709+((x710%x711)+x712));

    if (t157 != 4136LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile uint16_t x713 = 145U;
	uint64_t x714 = 964536295761LLU;
	int64_t x715 = INT64_MAX;

    t158 = (x713+((x714%x715)+x716));

    if (t158 != 964536295909LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static int32_t x717 = INT32_MAX;
	static int16_t x718 = 0;
	int64_t x720 = 73396943954LL;
	volatile int64_t t159 = 16839855914106LL;

    t159 = (x717+((x718%x719)+x720));

    if (t159 != 75544427601LL) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int16_t x722 = INT16_MIN;
	int64_t x723 = INT64_MIN;
	int64_t t160 = 7088477718333LL;

    t160 = (x721+((x722%x723)+x724));

    if (t160 != -65545LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x725 = 0U;
	uint8_t x726 = UINT8_MAX;
	int8_t x727 = -12;
	int16_t x728 = INT16_MAX;
	volatile int32_t t161 = -2;

    t161 = (x725+((x726%x727)+x728));

    if (t161 != 32770) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x733 = -110981LL;
	volatile int8_t x734 = -25;
	volatile int64_t x735 = INT64_MAX;
	volatile int8_t x736 = INT8_MIN;
	volatile int64_t t162 = 140949546481080526LL;

    t162 = (x733+((x734%x735)+x736));

    if (t162 != -111134LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint8_t x741 = UINT8_MAX;
	uint16_t x742 = 5564U;
	static int32_t x743 = INT32_MAX;
	int16_t x744 = INT16_MIN;
	int32_t t163 = -711734543;

    t163 = (x741+((x742%x743)+x744));

    if (t163 != -26949) { NG(); } else { ; }
	
}

void f164(void) {
    	static int16_t x749 = -1;
	int8_t x750 = 1;
	uint32_t x751 = 9680U;
	int8_t x752 = INT8_MAX;

    t164 = (x749+((x750%x751)+x752));

    if (t164 != 127U) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x755 = -1;
	int8_t x756 = INT8_MAX;
	int32_t t165 = -1048426;

    t165 = (x753+((x754%x755)+x756));

    if (t165 != -1) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x757 = INT32_MIN;
	static int32_t x758 = -87240855;
	static int8_t x759 = INT8_MIN;
	uint64_t x760 = 15652059581420628LLU;
	uint64_t t166 = 14680364012970454LLU;

    t166 = (x757+((x758%x759)+x760));

    if (t166 != 15652057433936957LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x761 = -1LL;
	int64_t x762 = 15LL;
	static int32_t x763 = INT32_MIN;
	int64_t x764 = INT64_MIN;
	volatile int64_t t167 = 333552764700972413LL;

    t167 = (x761+((x762%x763)+x764));

    if (t167 != -9223372036854775794LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x766 = 0;
	static uint16_t x767 = 469U;
	int8_t x768 = 9;
	volatile int32_t t168 = -43204;

    t168 = (x765+((x766%x767)+x768));

    if (t168 != -2147483639) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x769 = 1115408U;
	int16_t x770 = 14993;
	uint32_t x772 = 11425885U;
	static int64_t t169 = 195802LL;

    t169 = (x769+((x770%x771)+x772));

    if (t169 != 12541293LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x779 = UINT32_MAX;
	int32_t x780 = INT32_MIN;
	volatile uint32_t t170 = 36348835U;

    t170 = (x777+((x778%x779)+x780));

    if (t170 != 3569989859U) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x782 = -44704;
	static int32_t x784 = -1;
	static volatile uint64_t t171 = 20221743LLU;

    t171 = (x781+((x782%x783)+x784));

    if (t171 != 2216630998LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x786 = -1;
	int64_t x787 = INT64_MIN;
	static uint64_t x788 = UINT64_MAX;
	uint64_t t172 = 0LLU;

    t172 = (x785+((x786%x787)+x788));

    if (t172 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x790 = 622034212816509LLU;
	volatile int32_t x792 = -187714140;
	volatile uint64_t t173 = 863527205251478796LLU;

    t173 = (x789+((x790%x791)+x792));

    if (t173 != 622034025102241LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x797 = -1;
	uint8_t x798 = 15U;
	int16_t x799 = 12;
	int16_t x800 = -1;
	volatile int32_t t174 = -36186;

    t174 = (x797+((x798%x799)+x800));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint32_t x801 = 1697940U;
	int16_t x802 = INT16_MIN;
	static int8_t x803 = INT8_MIN;
	volatile int16_t x804 = 20;

    t175 = (x801+((x802%x803)+x804));

    if (t175 != 1697960U) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x805 = 7557LLU;
	volatile int64_t x806 = 27999LL;
	volatile uint64_t x807 = 616652847854LLU;
	uint16_t x808 = 2U;
	volatile uint64_t t176 = 1LLU;

    t176 = (x805+((x806%x807)+x808));

    if (t176 != 35558LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x809 = INT8_MIN;
	int32_t x810 = INT32_MIN;
	uint32_t x811 = 2395U;
	volatile int16_t x812 = INT16_MIN;
	volatile uint32_t t177 = 5U;

    t177 = (x809+((x810%x811)+x812));

    if (t177 != 4294936508U) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x813 = INT16_MAX;
	uint32_t x814 = 173054412U;
	static int32_t x815 = -1;
	uint32_t t178 = 7163678U;

    t178 = (x813+((x814%x815)+x816));

    if (t178 != 173087294U) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x817 = 1U;
	int32_t x818 = INT32_MAX;
	int16_t x819 = -741;
	volatile int32_t x820 = -97066;
	volatile int32_t t179 = 1;

    t179 = (x817+((x818%x819)+x820));

    if (t179 != -96626) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile int16_t x825 = 25;
	int32_t x826 = -1;
	int64_t x828 = 597889444LL;

    t180 = (x825+((x826%x827)+x828));

    if (t180 != 597889468LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x829 = -51;
	volatile uint8_t x830 = UINT8_MAX;
	volatile int64_t x832 = -2960839417990564352LL;
	static int64_t t181 = 339964577995LL;

    t181 = (x829+((x830%x831)+x832));

    if (t181 != -2960839417990564148LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x833 = UINT32_MAX;
	int64_t x834 = INT64_MIN;
	int32_t x835 = INT32_MIN;
	int8_t x836 = -2;
	volatile int64_t t182 = -3LL;

    t182 = (x833+((x834%x835)+x836));

    if (t182 != 4294967293LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x838 = -1;
	volatile int32_t x839 = 401699117;
	static volatile int8_t x840 = -1;
	volatile int32_t t183 = 26;

    t183 = (x837+((x838%x839)+x840));

    if (t183 != -7975) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x841 = -1;
	volatile int64_t x842 = INT64_MAX;
	static int16_t x843 = INT16_MIN;
	volatile int8_t x844 = -8;

    t184 = (x841+((x842%x843)+x844));

    if (t184 != 32758LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int64_t x846 = -1LL;
	int16_t x847 = INT16_MAX;
	volatile int64_t x848 = -1LL;
	int64_t t185 = -3LL;

    t185 = (x845+((x846%x847)+x848));

    if (t185 != -11LL) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x849 = -414;
	static int8_t x850 = INT8_MAX;
	uint32_t x851 = 6789733U;
	static int8_t x852 = -1;
	uint32_t t186 = 1891948U;

    t186 = (x849+((x850%x851)+x852));

    if (t186 != 4294967008U) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x858 = -1LL;
	int16_t x860 = INT16_MIN;

    t187 = (x857+((x858%x859)+x860));

    if (t187 != -32514LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x861 = 725267830LLU;
	static int16_t x862 = 7954;
	int32_t x863 = INT32_MIN;
	int8_t x864 = 26;
	static volatile uint64_t t188 = 429735LLU;

    t188 = (x861+((x862%x863)+x864));

    if (t188 != 725275810LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x865 = 9U;
	int16_t x866 = 1;
	int64_t x867 = INT64_MIN;
	volatile int64_t x868 = -1LL;
	volatile int64_t t189 = -49LL;

    t189 = (x865+((x866%x867)+x868));

    if (t189 != 9LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x869 = -12867;
	int64_t x870 = -35310383340241LL;
	static volatile int8_t x871 = INT8_MIN;
	int16_t x872 = INT16_MAX;
	volatile int64_t t190 = -19862426544145LL;

    t190 = (x869+((x870%x871)+x872));

    if (t190 != 19819LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x873 = 1U;
	uint16_t x875 = 1587U;
	uint32_t x876 = 273U;

    t191 = (x873+((x874%x875)+x876));

    if (t191 != 280U) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x881 = -833;
	int32_t x882 = -119;
	uint16_t x883 = 13U;
	int32_t x884 = INT32_MAX;
	int32_t t192 = -27886689;

    t192 = (x881+((x882%x883)+x884));

    if (t192 != 2147482812) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x885 = -111906;
	volatile int8_t x886 = -1;
	int8_t x887 = INT8_MIN;
	int8_t x888 = -1;
	int32_t t193 = 58857335;

    t193 = (x885+((x886%x887)+x888));

    if (t193 != -111908) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x893 = 36537549LLU;
	int16_t x894 = -1;
	int64_t x895 = INT64_MIN;
	int32_t x896 = INT32_MAX;
	uint64_t t194 = 3880792891502664LLU;

    t194 = (x893+((x894%x895)+x896));

    if (t194 != 2184021195LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x897 = INT32_MIN;
	int8_t x898 = -58;
	uint32_t x899 = 39U;
	uint32_t x900 = 1092479842U;
	uint32_t t195 = 2912U;

    t195 = (x897+((x898%x899)+x900));

    if (t195 != 3239963493U) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x901 = 3U;
	uint64_t x902 = 1760995107LLU;
	uint64_t x903 = 133LLU;
	int16_t x904 = -254;
	volatile uint64_t t196 = 158602142320490LLU;

    t196 = (x901+((x902%x903)+x904));

    if (t196 != 18446744073709551460LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	static int8_t x906 = INT8_MIN;
	int16_t x907 = INT16_MIN;
	int32_t t197 = 52140;

    t197 = (x905+((x906%x907)+x908));

    if (t197 != -129) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x909 = 1000U;
	static volatile int32_t x910 = INT32_MIN;
	int8_t x911 = 9;
	int8_t x912 = -1;
	static volatile uint32_t t198 = 21U;

    t198 = (x909+((x910%x911)+x912));

    if (t198 != 997U) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint64_t x913 = UINT64_MAX;
	int16_t x914 = INT16_MAX;
	uint64_t x916 = 129029058729LLU;
	uint64_t t199 = 3LLU;

    t199 = (x913+((x914%x915)+x916));

    if (t199 != 129029091495LLU) { NG(); } else { ; }
	
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

