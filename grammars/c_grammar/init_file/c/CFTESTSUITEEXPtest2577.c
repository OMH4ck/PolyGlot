
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

volatile int8_t x6 = -1;
volatile int8_t x19 = INT8_MIN;
uint64_t x21 = 2LLU;
int16_t x23 = INT16_MIN;
uint16_t x28 = 10U;
static volatile uint64_t t3 = 1332288381LLU;
uint32_t x31 = UINT32_MAX;
volatile uint64_t t4 = 533141590LLU;
volatile uint64_t x34 = UINT64_MAX;
uint64_t t6 = 35045893278LLU;
int64_t x47 = -1591112691LL;
volatile uint16_t x50 = UINT16_MAX;
static volatile int8_t x53 = INT8_MAX;
int16_t x55 = INT16_MIN;
volatile uint32_t x58 = 18U;
int8_t x59 = INT8_MIN;
uint64_t t11 = 724375557689LLU;
int64_t x65 = INT64_MAX;
int32_t x68 = -1;
uint8_t x72 = UINT8_MAX;
int8_t x80 = INT8_MIN;
volatile uint64_t t15 = 442859834601122LLU;
uint64_t t17 = 845LLU;
volatile uint64_t x97 = UINT64_MAX;
volatile int64_t x98 = -1LL;
volatile int64_t x102 = INT64_MIN;
volatile int8_t x122 = -1;
uint64_t x125 = 1186LLU;
int32_t x130 = INT32_MAX;
int32_t x132 = 8265441;
static volatile uint32_t t23 = 663U;
static int64_t x136 = -1LL;
static int64_t t24 = 87105LL;
volatile int8_t x141 = 3;
volatile uint32_t t26 = 49562U;
int32_t x145 = 681784;
static int64_t x147 = -1LL;
static volatile uint64_t x148 = 314046450923LLU;
int64_t x150 = 31030610927LL;
volatile int8_t x158 = -1;
uint64_t x159 = 1739133421190589032LLU;
int32_t x160 = -1;
static int32_t x161 = -1;
volatile uint64_t t31 = 158505385250453LLU;
static uint8_t x170 = UINT8_MAX;
static uint16_t x171 = UINT16_MAX;
volatile int16_t x174 = 13031;
static int16_t x187 = INT16_MIN;
volatile uint32_t x193 = 2755348U;
int8_t x212 = -1;
static int16_t x213 = INT16_MIN;
int8_t x216 = -20;
int16_t x223 = INT16_MIN;
uint8_t x240 = 0U;
volatile int16_t x241 = INT16_MAX;
volatile uint64_t x242 = 219643966LLU;
int8_t x245 = -1;
int32_t t46 = 37469;
static int64_t x266 = -1LL;
uint64_t x268 = UINT64_MAX;
int8_t x269 = INT8_MIN;
int16_t x271 = INT16_MIN;
int64_t t48 = -4312314285398LL;
volatile uint64_t t49 = 0LLU;
int64_t x281 = 279370615831309431LL;
int64_t x283 = 179576331400526LL;
int64_t t51 = 1763284LL;
uint64_t x286 = 7887LLU;
int32_t x287 = -1;
volatile uint32_t x288 = UINT32_MAX;
volatile uint64_t t52 = 567LLU;
int64_t x297 = -1LL;
static volatile uint16_t x304 = 3490U;
int8_t x321 = -1;
static volatile uint32_t x322 = 7U;
static int64_t t60 = 342375918826LL;
volatile uint32_t x353 = 103U;
volatile int8_t x357 = 7;
volatile uint32_t x362 = 4082004U;
uint8_t x363 = 0U;
int8_t x368 = 42;
uint8_t x378 = 5U;
static uint8_t x381 = UINT8_MAX;
static int16_t x382 = INT16_MIN;
static int64_t x395 = -1LL;
uint16_t x405 = 54U;
volatile uint32_t x409 = 300U;
int32_t x425 = INT32_MAX;
int8_t x426 = INT8_MIN;
int64_t x430 = -1LL;
volatile uint64_t t73 = 233907490410699LLU;
int16_t x442 = -6834;
static uint32_t x448 = UINT32_MAX;
static int64_t t76 = 53442789126411398LL;
int32_t t77 = 118;
volatile uint64_t t79 = 47585716LLU;
volatile uint16_t x473 = 1909U;
uint8_t x475 = UINT8_MAX;
uint16_t x485 = UINT16_MAX;
uint64_t x490 = 28463017996679LLU;
static volatile int32_t t84 = -10885;
uint64_t t88 = 1072563853LLU;
int64_t x530 = -27511LL;
int64_t x535 = 29236351LL;
int16_t x541 = INT16_MIN;
uint16_t x549 = 0U;
uint8_t x556 = 4U;
volatile uint32_t t94 = 63608U;
int32_t x570 = INT32_MIN;
static uint8_t x573 = 10U;
volatile int16_t x574 = INT16_MAX;
volatile int32_t t97 = 0;
static int16_t x584 = INT16_MIN;
static uint8_t x591 = 0U;
static int16_t x592 = 1288;
uint64_t x595 = UINT64_MAX;
static int32_t x597 = -1;
volatile int16_t x598 = -1;
uint64_t t102 = 79982585551LLU;
static volatile uint64_t t103 = 5403937072728290111LLU;
volatile int64_t x624 = -1LL;
static int16_t x625 = INT16_MAX;
int8_t x628 = INT8_MAX;
uint32_t x640 = 9864292U;
uint16_t x645 = UINT16_MAX;
uint32_t x661 = UINT32_MAX;
int32_t x666 = INT32_MIN;
int16_t x670 = INT16_MIN;
int64_t x671 = INT64_MIN;
static volatile int64_t t116 = -7LL;
uint32_t x686 = 1412U;
volatile uint64_t t118 = 295466953787317202LLU;
uint16_t x689 = UINT16_MAX;
static int8_t x693 = -1;
uint64_t x695 = UINT64_MAX;
uint64_t t120 = 7326712137437734943LLU;
uint64_t x706 = 6897422787856803LLU;
int32_t x712 = -1;
int8_t x713 = INT8_MIN;
volatile int64_t t124 = -1LL;
volatile uint32_t x729 = 28919U;
volatile uint64_t t127 = 4216449215LLU;
uint64_t t128 = 4563996113438820764LLU;
int16_t x743 = INT16_MIN;
uint32_t x744 = 484396U;
int32_t x747 = INT32_MIN;
int64_t x755 = -1LL;
volatile uint64_t t132 = 8367426387919296LLU;
int16_t x758 = -1808;
static uint32_t x781 = 269U;
static volatile int8_t x782 = 3;
static int32_t x783 = INT32_MAX;
volatile int32_t x791 = -1;
int16_t x802 = INT16_MIN;
uint64_t x807 = 1016371311086044405LLU;
int32_t x813 = -631861780;
static uint32_t x815 = 263U;
uint32_t x820 = 14U;
volatile int16_t x830 = 11865;
static volatile int16_t x833 = -1875;
int32_t x835 = -16;
int16_t x836 = INT16_MIN;
volatile uint64_t t145 = 3759704845659LLU;
uint64_t t146 = 17813319957134197LLU;
int32_t x845 = INT32_MIN;
uint64_t x854 = 194839011LLU;
int64_t x856 = INT64_MIN;
volatile uint64_t x858 = UINT64_MAX;
static uint8_t x859 = 3U;
int64_t x871 = INT64_MIN;
static int8_t x876 = INT8_MIN;
volatile int32_t t153 = 396432466;
int64_t t154 = 568854579066LL;
static uint16_t x886 = 1U;
static volatile uint16_t x888 = UINT16_MAX;
int16_t x895 = -17;
uint32_t x898 = 373081U;
volatile int32_t t161 = 10285;
volatile int32_t x929 = INT32_MAX;
static volatile uint32_t t163 = 103149U;
volatile uint64_t t164 = 41022LLU;
int64_t t166 = 2095096164LL;
uint32_t t167 = 17323U;
int16_t x950 = 0;
volatile uint64_t t168 = 62455805410839396LLU;
uint64_t x965 = UINT64_MAX;
int32_t x966 = -14603;
volatile uint64_t t171 = 5279974403LLU;
uint16_t x977 = 0U;
uint64_t x979 = 383839LLU;
volatile int8_t x980 = 1;
int8_t x1001 = INT8_MIN;
uint32_t x1002 = 1764093U;
int16_t x1012 = 510;
uint8_t x1015 = 11U;
static int16_t x1025 = INT16_MIN;
int32_t x1033 = -30;
int16_t x1042 = -1;
uint64_t x1047 = UINT64_MAX;
volatile int8_t x1078 = 7;
uint16_t x1079 = UINT16_MAX;
int32_t x1081 = INT32_MAX;
static uint32_t x1082 = 47375U;
static uint64_t x1087 = 1719LLU;
volatile uint32_t t193 = 252442653U;
uint64_t x1102 = UINT64_MAX;
volatile uint64_t x1114 = 6261989974130602233LLU;
uint16_t x1117 = 121U;
int32_t x1118 = -15;


void f0(void) {
    	int16_t x5 = INT16_MIN;
	uint16_t x7 = 22785U;
	volatile uint8_t x8 = 1U;
	volatile int32_t t0 = -37143;

    t0 = (x5+((x6^x7)*x8));

    if (t0 != -55554) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x17 = -1;
	int16_t x18 = -3089;
	static int16_t x20 = 26;
	volatile int32_t t1 = -295;

    t1 = (x17+((x18^x19)*x20));

    if (t1 != 82757) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x22 = UINT32_MAX;
	uint8_t x24 = 13U;
	static uint64_t t2 = 823903992346943LLU;

    t2 = (x21+((x22^x23)*x24));

    if (t2 != 425973LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint32_t x25 = 1U;
	uint64_t x26 = UINT64_MAX;
	uint8_t x27 = 60U;

    t3 = (x25+((x26^x27)*x28));

    if (t3 != 18446744073709551007LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x29 = 4152709LLU;
	uint64_t x30 = UINT64_MAX;
	uint32_t x32 = 104520147U;

    t4 = (x29+((x30^x31)*x32));

    if (t4 != 17997833460575591813LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint64_t x33 = UINT64_MAX;
	int16_t x35 = 3217;
	static uint32_t x36 = 0U;
	volatile uint64_t t5 = UINT64_MAX;

    t5 = (x33+((x34^x35)*x36));

    if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x37 = UINT64_MAX;
	static int8_t x38 = INT8_MAX;
	int16_t x39 = -1;
	static uint64_t x40 = UINT64_MAX;

    t6 = (x37+((x38^x39)*x40));

    if (t6 != 127LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x45 = -102;
	int16_t x46 = 1597;
	static int32_t x48 = 874;
	volatile int64_t t7 = 9858642290919LL;

    t7 = (x45+((x46^x47)*x48));

    if (t7 != -1390632908934LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x49 = UINT32_MAX;
	int64_t x51 = -1LL;
	uint16_t x52 = 1552U;
	int64_t t8 = 1LL;

    t8 = (x49+((x50^x51)*x52));

    if (t8 != 4193255423LL) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint8_t x54 = UINT8_MAX;
	uint8_t x56 = UINT8_MAX;
	int32_t t9 = 1043396;

    t9 = (x53+((x54^x55)*x56));

    if (t9 != -8290688) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int32_t x57 = -32068769;
	int16_t x60 = -1;
	volatile uint32_t t10 = 77667749U;

    t10 = (x57+((x58^x59)*x60));

    if (t10 != 4262898637U) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x61 = INT64_MIN;
	volatile uint8_t x62 = 83U;
	volatile int16_t x63 = 0;
	uint64_t x64 = UINT64_MAX;

    t11 = (x61+((x62^x63)*x64));

    if (t11 != 9223372036854775725LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x66 = -1LL;
	int16_t x67 = INT16_MIN;
	int64_t t12 = 4905LL;

    t12 = (x65+((x66^x67)*x68));

    if (t12 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x69 = 53U;
	static int8_t x70 = INT8_MIN;
	static volatile int32_t x71 = -1668;
	int32_t t13 = 12432455;

    t13 = (x69+((x70^x71)*x72));

    if (t13 != 455993) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x73 = INT32_MAX;
	int16_t x74 = -30;
	volatile int32_t x75 = INT32_MIN;
	int64_t x76 = -1LL;
	static int64_t t14 = 2673416320853893380LL;

    t14 = (x73+((x74^x75)*x76));

    if (t14 != 29LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint64_t x77 = 6577723671673LLU;
	int64_t x78 = INT64_MIN;
	volatile int64_t x79 = INT64_MAX;

    t15 = (x77+((x78^x79)*x80));

    if (t15 != 6577723671801LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x85 = INT16_MIN;
	int16_t x86 = INT16_MIN;
	uint16_t x87 = 6U;
	volatile int16_t x88 = INT16_MIN;
	volatile int32_t t16 = -71739950;

    t16 = (x85+((x86^x87)*x88));

    if (t16 != 1073512448) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile uint8_t x93 = 115U;
	uint32_t x94 = UINT32_MAX;
	static int16_t x95 = 0;
	uint64_t x96 = UINT64_MAX;

    t17 = (x93+((x94^x95)*x96));

    if (t17 != 18446744069414584436LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x99 = -1;
	uint8_t x100 = 34U;
	volatile uint64_t t18 = UINT64_MAX;

    t18 = (x97+((x98^x99)*x100));

    if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x101 = -1LL;
	int32_t x103 = INT32_MIN;
	uint64_t x104 = 4233178993195395659LLU;
	volatile uint64_t t19 = 9984757555LLU;

    t19 = (x101+((x102^x103)*x104));

    if (t19 != 12103611853985284095LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x105 = INT8_MAX;
	static int16_t x106 = INT16_MAX;
	int16_t x107 = INT16_MIN;
	uint8_t x108 = 1U;
	static volatile int32_t t20 = 899902;

    t20 = (x105+((x106^x107)*x108));

    if (t20 != 126) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x121 = INT8_MAX;
	uint32_t x123 = 171U;
	volatile uint32_t x124 = 279694346U;
	uint32_t t21 = 240973675U;

    t21 = (x121+((x122^x123)*x124));

    if (t21 != 3432180167U) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int64_t x126 = INT64_MIN;
	int64_t x127 = -58383824LL;
	uint16_t x128 = 0U;
	static uint64_t t22 = 35960452080944610LLU;

    t22 = (x125+((x126^x127)*x128));

    if (t22 != 1186LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x129 = INT8_MAX;
	volatile uint32_t x131 = 9662U;

    t23 = (x129+((x130^x131)*x132));

    if (t23 != 3882906016U) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x133 = -144676245421LL;
	volatile uint32_t x134 = 2651U;
	static int16_t x135 = INT16_MIN;

    t24 = (x133+((x134^x135)*x136));

    if (t24 != -148971182600LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x137 = UINT32_MAX;
	int32_t x138 = INT32_MIN;
	int32_t x139 = INT32_MAX;
	volatile int8_t x140 = -1;
	uint32_t t25 = 22968623U;

    t25 = (x137+((x138^x139)*x140));

    if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x142 = 2716U;
	int16_t x143 = 22;
	volatile int8_t x144 = -3;

    t26 = (x141+((x142^x143)*x144));

    if (t26 != 4294959205U) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x146 = 55;
	volatile uint64_t t27 = 12LLU;

    t27 = (x145+((x146^x147)*x148));

    if (t27 != 18446726487108981712LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x149 = -1;
	static volatile uint8_t x151 = UINT8_MAX;
	int16_t x152 = -243;
	static int64_t t28 = -1LL;

    t28 = (x149+((x150^x151)*x152));

    if (t28 != -7540438401073LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x153 = -1LL;
	volatile int16_t x154 = -2529;
	static int16_t x155 = INT16_MIN;
	uint32_t x156 = 0U;
	static int64_t t29 = 213134449290LL;

    t29 = (x153+((x154^x155)*x156));

    if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint16_t x157 = 2U;
	uint64_t t30 = 5129074580634319760LLU;

    t30 = (x157+((x158^x159)*x160));

    if (t30 != 1739133421190589035LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x162 = INT16_MAX;
	static volatile uint64_t x163 = UINT64_MAX;
	int32_t x164 = 1;

    t31 = (x161+((x162^x163)*x164));

    if (t31 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x169 = -1;
	volatile int8_t x172 = INT8_MIN;
	volatile int32_t t32 = -80858998;

    t32 = (x169+((x170^x171)*x172));

    if (t32 != -8355841) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x173 = -10;
	static int32_t x175 = 6284;
	int8_t x176 = 1;
	static volatile int32_t t33 = 227554911;

    t33 = (x173+((x174^x175)*x176));

    if (t33 != 10849) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x177 = INT64_MAX;
	static uint32_t x178 = UINT32_MAX;
	int16_t x179 = -1;
	int16_t x180 = 0;
	static int64_t t34 = INT64_MAX;

    t34 = (x177+((x178^x179)*x180));

    if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x185 = INT16_MAX;
	uint16_t x186 = UINT16_MAX;
	int8_t x188 = -1;
	static int32_t t35 = -34630573;

    t35 = (x185+((x186^x187)*x188));

    if (t35 != 65536) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x189 = -123;
	static int16_t x190 = INT16_MIN;
	uint64_t x191 = UINT64_MAX;
	volatile uint8_t x192 = UINT8_MAX;
	uint64_t t36 = 8185632118LLU;

    t36 = (x189+((x190^x191)*x192));

    if (t36 != 8355462LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x194 = INT16_MIN;
	uint8_t x195 = 125U;
	volatile uint16_t x196 = 931U;
	uint32_t t37 = 15373U;

    t37 = (x193+((x194^x195)*x196));

    if (t37 != 4267332011U) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x201 = INT32_MIN;
	int32_t x202 = INT32_MIN;
	uint64_t x203 = 59411LLU;
	uint32_t x204 = 27219752U;
	static uint64_t t38 = 34157271261LLU;

    t38 = (x201+((x202^x203)*x204));

    if (t38 != 18388291716392138744LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x209 = 1;
	static int64_t x210 = INT64_MAX;
	static int16_t x211 = INT16_MAX;
	int64_t t39 = 565337561866323890LL;

    t39 = (x209+((x210^x211)*x212));

    if (t39 != -9223372036854743039LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x214 = UINT32_MAX;
	uint64_t x215 = 15454LLU;
	volatile uint64_t t40 = 1758LLU;

    t40 = (x213+((x214^x215)*x216));

    if (t40 != 18446743987810482028LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x221 = 24;
	volatile int8_t x222 = INT8_MIN;
	uint32_t x224 = 52029145U;
	volatile uint32_t t41 = 24045U;

    t41 = (x221+((x222^x223)*x224));

    if (t41 != 1719210904U) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x237 = 0;
	volatile int64_t x238 = 15785LL;
	uint64_t x239 = 949LLU;
	static uint64_t t42 = 221850LLU;

    t42 = (x237+((x238^x239)*x240));

    if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x243 = 764U;
	int64_t x244 = INT64_MIN;
	volatile uint64_t t43 = 352610LLU;

    t43 = (x241+((x242^x243)*x244));

    if (t43 != 32767LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x246 = 6856790036LLU;
	uint8_t x247 = 1U;
	volatile int64_t x248 = -3414044255742674LL;
	static uint64_t t44 = 428119490019LLU;

    t44 = (x245+((x246^x247)*x248));

    if (t44 != 13206229890330107077LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x249 = INT16_MIN;
	volatile uint32_t x250 = UINT32_MAX;
	static int8_t x251 = 0;
	uint32_t x252 = 23552692U;
	uint32_t t45 = 104923706U;

    t45 = (x249+((x250^x251)*x252));

    if (t45 != 4271381836U) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x253 = -13;
	int16_t x254 = -1;
	static int8_t x255 = INT8_MIN;
	int32_t x256 = -1;

    t46 = (x253+((x254^x255)*x256));

    if (t46 != -140) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint8_t x265 = 4U;
	int8_t x267 = -1;
	uint64_t t47 = 147601LLU;

    t47 = (x265+((x266^x267)*x268));

    if (t47 != 4LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x270 = INT8_MAX;
	volatile int64_t x272 = -1LL;

    t48 = (x269+((x270^x271)*x272));

    if (t48 != 32513LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x273 = 2455390102175825LLU;
	int32_t x274 = INT32_MAX;
	volatile int16_t x275 = 1;
	uint32_t x276 = 378U;

    t49 = (x273+((x274^x275)*x276));

    if (t49 != 2455394397142365LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x277 = INT32_MIN;
	static volatile int8_t x278 = INT8_MIN;
	static int64_t x279 = 0LL;
	int16_t x280 = INT16_MAX;
	static int64_t t50 = -112110632100464LL;

    t50 = (x277+((x278^x279)*x280));

    if (t50 != -2151677824LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x282 = -1;
	static int64_t x284 = -1LL;

    t51 = (x281+((x282^x283)*x284));

    if (t51 != 279550192162709958LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x285 = INT32_MIN;

    t52 = (x285+((x286^x287)*x288));

    if (t52 != 18446710192860045008LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint32_t x289 = 2672U;
	int16_t x290 = INT16_MAX;
	int16_t x291 = -3260;
	int32_t x292 = -1;
	volatile uint32_t t53 = 160214365U;

    t53 = (x289+((x290^x291)*x292));

    if (t53 != 32181U) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x293 = -1LL;
	uint64_t x294 = 47946145LLU;
	int16_t x295 = INT16_MAX;
	int32_t x296 = INT32_MAX;
	volatile uint64_t t54 = 10985LLU;

    t54 = (x293+((x294^x295)*x296));

    if (t54 != 103005749640436129LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x298 = 113U;
	volatile int32_t x299 = INT32_MAX;
	volatile int16_t x300 = -1;
	int64_t t55 = 55275800114LL;

    t55 = (x297+((x298^x299)*x300));

    if (t55 != -2147483535LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x301 = -1;
	int32_t x302 = 548068;
	static uint16_t x303 = 0U;
	int32_t t56 = 7901;

    t56 = (x301+((x302^x303)*x304));

    if (t56 != 1912757319) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x317 = 30248U;
	static uint32_t x318 = UINT32_MAX;
	static volatile int8_t x319 = -1;
	volatile int32_t x320 = INT32_MAX;
	volatile uint32_t t57 = 1U;

    t57 = (x317+((x318^x319)*x320));

    if (t57 != 30248U) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x323 = 1U;
	uint8_t x324 = UINT8_MAX;
	volatile uint32_t t58 = 0U;

    t58 = (x321+((x322^x323)*x324));

    if (t58 != 1529U) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x329 = UINT16_MAX;
	uint64_t x330 = UINT64_MAX;
	uint32_t x331 = UINT32_MAX;
	volatile int8_t x332 = INT8_MAX;
	volatile uint64_t t59 = 9084887036LLU;

    t59 = (x329+((x330^x331)*x332));

    if (t59 != 18446743528248770559LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x333 = 111U;
	int16_t x334 = INT16_MAX;
	int64_t x335 = -25132141495LL;
	static uint32_t x336 = 4U;

    t60 = (x333+((x334^x335)*x336));

    if (t60 != -100528672953LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x354 = INT16_MIN;
	int64_t x355 = -5526042634171811LL;
	volatile int8_t x356 = INT8_MIN;
	volatile int64_t t61 = 169523LL;

    t61 = (x353+((x354^x355)*x356));

    if (t61 != -707333457174670873LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x358 = 0U;
	int8_t x359 = -1;
	int8_t x360 = INT8_MAX;
	static int32_t t62 = -19650826;

    t62 = (x357+((x358^x359)*x360));

    if (t62 != -120) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x361 = -40;
	static int32_t x364 = -2722239;
	uint32_t t63 = 1037997653U;

    t63 = (x361+((x362^x363)*x364));

    if (t63 != 3184875052U) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x365 = -1012LL;
	int16_t x366 = -9415;
	static int8_t x367 = -1;
	volatile int64_t t64 = 22LL;

    t64 = (x365+((x366^x367)*x368));

    if (t64 != 394376LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x377 = 7760;
	uint8_t x379 = 81U;
	volatile int64_t x380 = 20336743LL;
	volatile int64_t t65 = 2575379LL;

    t65 = (x377+((x378^x379)*x380));

    if (t65 != 1708294172LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x383 = 23U;
	uint16_t x384 = 487U;
	volatile int32_t t66 = -921566;

    t66 = (x381+((x382^x383)*x384));

    if (t66 != -15946560) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x385 = -1;
	static volatile int16_t x386 = -822;
	int64_t x387 = 182LL;
	uint16_t x388 = UINT16_MAX;
	volatile int64_t t67 = -248948850173743754LL;

    t67 = (x385+((x386^x387)*x388));

    if (t67 != -58981501LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint8_t x389 = 3U;
	volatile int8_t x390 = INT8_MAX;
	volatile int64_t x391 = INT64_MIN;
	static int32_t x392 = -1;
	int64_t t68 = -22358180230605379LL;

    t68 = (x389+((x390^x391)*x392));

    if (t68 != 9223372036854775684LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x393 = UINT64_MAX;
	int32_t x394 = -22;
	int8_t x396 = 1;
	uint64_t t69 = 32789225LLU;

    t69 = (x393+((x394^x395)*x396));

    if (t69 != 20LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x406 = 1012;
	int16_t x407 = INT16_MIN;
	int16_t x408 = INT16_MIN;
	static int32_t t70 = -6099661;

    t70 = (x405+((x406^x407)*x408));

    if (t70 != 1040580662) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x410 = -1;
	int32_t x411 = -1;
	uint32_t x412 = UINT32_MAX;
	uint32_t t71 = 264363550U;

    t71 = (x409+((x410^x411)*x412));

    if (t71 != 300U) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x427 = UINT32_MAX;
	volatile uint32_t x428 = UINT32_MAX;
	uint32_t t72 = 213U;

    t72 = (x425+((x426^x427)*x428));

    if (t72 != 2147483520U) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x429 = INT64_MIN;
	uint64_t x431 = 32881551947692881LLU;
	uint16_t x432 = UINT16_MAX;

    t73 = (x429+((x430^x431)*x432));

    if (t73 != 12599921768819293010LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x437 = -240;
	uint64_t x438 = UINT64_MAX;
	int8_t x439 = INT8_MAX;
	volatile int32_t x440 = 36698;
	static volatile uint64_t t74 = 7353641995977103LLU;

    t74 = (x437+((x438^x439)*x440));

    if (t74 != 18446744073704854032LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x441 = INT32_MIN;
	volatile int16_t x443 = INT16_MIN;
	int8_t x444 = 0;
	int32_t t75 = INT32_MIN;

    t75 = (x441+((x442^x443)*x444));

    if (t75 != INT32_MIN) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x445 = -1LL;
	static volatile int8_t x446 = INT8_MIN;
	static int8_t x447 = INT8_MIN;

    t76 = (x445+((x446^x447)*x448));

    if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x453 = 0;
	int16_t x454 = INT16_MAX;
	static int8_t x455 = INT8_MAX;
	int8_t x456 = INT8_MIN;

    t77 = (x453+((x454^x455)*x456));

    if (t77 != -4177920) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x465 = 1198110607598478LLU;
	int8_t x466 = 1;
	int32_t x467 = 1397;
	int8_t x468 = 6;
	volatile uint64_t t78 = 68176166896844700LLU;

    t78 = (x465+((x466^x467)*x468));

    if (t78 != 1198110607606854LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x469 = 1796373761208LL;
	uint64_t x470 = 777155LLU;
	volatile int32_t x471 = INT32_MIN;
	int32_t x472 = INT32_MIN;

    t79 = (x469+((x470^x471)*x472));

    if (t79 != 4610018887146687672LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x474 = 28LLU;
	int64_t x476 = INT64_MIN;
	volatile uint64_t t80 = 204LLU;

    t80 = (x473+((x474^x475)*x476));

    if (t80 != 9223372036854777717LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x477 = 21U;
	static int32_t x478 = INT32_MIN;
	volatile int32_t x479 = INT32_MAX;
	int16_t x480 = INT16_MIN;
	int32_t t81 = 94;

    t81 = (x477+((x478^x479)*x480));

    if (t81 != 32789) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint32_t x486 = 181719701U;
	uint8_t x487 = 2U;
	volatile int64_t x488 = -1LL;
	volatile int64_t t82 = 3851605377591932991LL;

    t82 = (x485+((x486^x487)*x488));

    if (t82 != -181654168LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x489 = INT64_MAX;
	int32_t x491 = -149;
	int64_t x492 = INT64_MIN;
	volatile uint64_t t83 = 48486036754088385LLU;

    t83 = (x489+((x490^x491)*x492));

    if (t83 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x493 = -15267;
	static int8_t x494 = 19;
	uint16_t x495 = UINT16_MAX;
	int8_t x496 = 13;

    t84 = (x493+((x494^x495)*x496));

    if (t84 != 836441) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x497 = 6260;
	int8_t x498 = INT8_MIN;
	int16_t x499 = INT16_MIN;
	static int16_t x500 = INT16_MIN;
	int32_t t85 = -3;

    t85 = (x497+((x498^x499)*x500));

    if (t85 != -1069541260) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x501 = INT16_MAX;
	static int8_t x502 = INT8_MIN;
	static int16_t x503 = 0;
	uint32_t x504 = 2U;
	uint32_t t86 = 13942042U;

    t86 = (x501+((x502^x503)*x504));

    if (t86 != 32511U) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x505 = -1278;
	int64_t x506 = INT64_MIN;
	int16_t x507 = -611;
	volatile uint64_t x508 = UINT64_MAX;
	volatile uint64_t t87 = 7LLU;

    t87 = (x505+((x506^x507)*x508));

    if (t87 != 9223372036854775141LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x521 = INT32_MIN;
	uint64_t x522 = 1341144942137555232LLU;
	int32_t x523 = INT32_MIN;
	static int64_t x524 = 16481101869LL;

    t88 = (x521+((x522^x523)*x524));

    if (t88 != 17193030685213624992LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x529 = 0U;
	static volatile int8_t x531 = 1;
	uint64_t x532 = 280278LLU;
	volatile uint64_t t89 = 4LLU;

    t89 = (x529+((x530^x531)*x532));

    if (t89 != 18446744065998543280LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x533 = -18;
	static int8_t x534 = INT8_MAX;
	static int8_t x536 = -14;
	static volatile int64_t t90 = -3610142959909LL;

    t90 = (x533+((x534^x535)*x536));

    if (t90 != -409307154LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x542 = INT32_MIN;
	int64_t x543 = 1753172760301653245LL;
	int32_t x544 = -1;
	static int64_t t91 = -808030636851525812LL;

    t91 = (x541+((x542^x543)*x544));

    if (t91 != 1753172760581092099LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static int16_t x545 = 495;
	volatile int16_t x546 = 10985;
	static int8_t x547 = 27;
	int8_t x548 = -1;
	volatile int32_t t92 = 27;

    t92 = (x545+((x546^x547)*x548));

    if (t92 != -10499) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x550 = INT32_MIN;
	int8_t x551 = INT8_MAX;
	static int16_t x552 = -1;
	int32_t t93 = -13706;

    t93 = (x549+((x550^x551)*x552));

    if (t93 != 2147483521) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x553 = -3;
	uint8_t x554 = 16U;
	volatile uint32_t x555 = UINT32_MAX;

    t94 = (x553+((x554^x555)*x556));

    if (t94 != 4294967225U) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x565 = 110U;
	int64_t x566 = -1LL;
	uint32_t x567 = 364942U;
	int8_t x568 = -1;
	int64_t t95 = -7LL;

    t95 = (x565+((x566^x567)*x568));

    if (t95 != 365053LL) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int64_t x569 = INT64_MIN;
	uint16_t x571 = UINT16_MAX;
	uint64_t x572 = 204LLU;
	volatile uint64_t t96 = 246167418582LLU;

    t96 = (x569+((x570^x571)*x572));

    if (t96 != 9223371598781480756LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x575 = 0;
	int16_t x576 = 2;

    t97 = (x573+((x574^x575)*x576));

    if (t97 != 65544) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint32_t x581 = 3U;
	uint16_t x582 = 721U;
	int8_t x583 = 3;
	volatile uint32_t t98 = 5989427U;

    t98 = (x581+((x582^x583)*x584));

    if (t98 != 4271308803U) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint64_t x585 = 1743758LLU;
	int16_t x586 = INT16_MIN;
	volatile int32_t x587 = -7227824;
	static uint32_t x588 = UINT32_MAX;
	static volatile uint64_t t99 = 7738723672598063219LLU;

    t99 = (x585+((x586^x587)*x588));

    if (t99 != 4289488190LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x589 = INT16_MIN;
	static int64_t x590 = -1LL;
	int64_t t100 = -1987775LL;

    t100 = (x589+((x590^x591)*x592));

    if (t100 != -34056LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x593 = INT64_MAX;
	int64_t x594 = -48153938260024LL;
	int16_t x596 = INT16_MIN;
	uint64_t t101 = 31933LLU;

    t101 = (x593+((x594^x595)*x596));

    if (t101 != 7645463787950342143LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int8_t x599 = 29;
	static uint64_t x600 = UINT64_MAX;

    t102 = (x597+((x598^x599)*x600));

    if (t102 != 29LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x601 = INT64_MAX;
	uint64_t x602 = 39985300179667348LLU;
	int32_t x603 = 12579;
	uint32_t x604 = UINT32_MAX;

    t103 = (x601+((x602^x603)*x604));

    if (t103 != 12458199343101216584LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint32_t x613 = 2083881329U;
	int32_t x614 = -1;
	uint16_t x615 = 336U;
	int8_t x616 = INT8_MAX;
	volatile uint32_t t104 = 5824U;

    t104 = (x613+((x614^x615)*x616));

    if (t104 != 2083838530U) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x617 = UINT16_MAX;
	uint64_t x618 = UINT64_MAX;
	int8_t x619 = 1;
	int16_t x620 = INT16_MIN;
	volatile uint64_t t105 = 71333158326611LLU;

    t105 = (x617+((x618^x619)*x620));

    if (t105 != 131071LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x621 = 45LLU;
	uint64_t x622 = 1246870490LLU;
	int32_t x623 = -877483;
	uint64_t t106 = 4958553664853489LLU;

    t106 = (x621+((x622^x623)*x624));

    if (t106 != 1247598750LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x626 = UINT32_MAX;
	uint64_t x627 = UINT64_MAX;
	uint64_t t107 = 2003246392907333LLU;

    t107 = (x625+((x626^x627)*x628));

    if (t107 != 18446743528248737791LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x637 = -1;
	uint64_t x638 = UINT64_MAX;
	int8_t x639 = INT8_MIN;
	volatile uint64_t t108 = 10208326988433LLU;

    t108 = (x637+((x638^x639)*x640));

    if (t108 != 1252765083LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x641 = INT32_MAX;
	volatile int32_t x642 = INT32_MAX;
	volatile int8_t x643 = 33;
	uint32_t x644 = 49289U;
	volatile uint32_t t109 = 1883U;

    t109 = (x641+((x642^x643)*x644));

    if (t109 != 4293291469U) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x646 = 879U;
	uint32_t x647 = 519021U;
	static uint64_t x648 = 1733273LLU;
	volatile uint64_t t110 = 23407544294370490LLU;

    t110 = (x645+((x646^x647)*x648));

    if (t110 != 898088537393LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x649 = INT32_MIN;
	int16_t x650 = INT16_MIN;
	int32_t x651 = INT32_MAX;
	int16_t x652 = -1;
	volatile int32_t t111 = -1;

    t111 = (x649+((x650^x651)*x652));

    if (t111 != -32767) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x653 = 2400;
	uint32_t x654 = 158U;
	volatile uint64_t x655 = 504901039158914LLU;
	int32_t x656 = INT32_MIN;
	volatile uint64_t t112 = 31697773382772LLU;

    t112 = (x653+((x654^x655)*x656));

    if (t112 != 14444456817289333088LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x657 = 201U;
	int8_t x658 = INT8_MIN;
	static int8_t x659 = INT8_MAX;
	volatile uint16_t x660 = 167U;
	volatile uint32_t t113 = 1388U;

    t113 = (x657+((x658^x659)*x660));

    if (t113 != 34U) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x662 = -12;
	int64_t x663 = -1LL;
	uint16_t x664 = 211U;
	int64_t t114 = 7482453216767125LL;

    t114 = (x661+((x662^x663)*x664));

    if (t114 != 4294969616LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile uint32_t x665 = 72069711U;
	uint16_t x667 = 14590U;
	uint32_t x668 = 2284U;
	uint32_t t115 = 1294U;

    t115 = (x665+((x666^x667)*x668));

    if (t115 != 105393271U) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int8_t x669 = INT8_MIN;
	int16_t x672 = 1;

    t116 = (x669+((x670^x671)*x672));

    if (t116 != 9223372036854742912LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x673 = INT16_MAX;
	static int64_t x674 = INT64_MIN;
	uint64_t x675 = UINT64_MAX;
	int64_t x676 = INT64_MIN;
	volatile uint64_t t117 = 3820157005046599LLU;

    t117 = (x673+((x674^x675)*x676));

    if (t117 != 9223372036854808575LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint64_t x685 = 25151019825050LLU;
	int8_t x687 = INT8_MAX;
	uint64_t x688 = 304LLU;

    t118 = (x685+((x686^x687)*x688));

    if (t118 != 25151020290474LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x690 = UINT64_MAX;
	static int16_t x691 = -3959;
	volatile uint16_t x692 = 3491U;
	volatile uint64_t t119 = 914LLU;

    t119 = (x689+((x690^x691)*x692));

    if (t119 != 13882913LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x694 = -4;
	volatile uint32_t x696 = 524585436U;

    t120 = (x693+((x694^x695)*x696));

    if (t120 != 1573756307LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x705 = 31U;
	int64_t x707 = INT64_MIN;
	static volatile uint16_t x708 = 3339U;
	static uint64_t t121 = 2221LLU;

    t121 = (x705+((x706^x707)*x708));

    if (t121 != 13807122651799089440LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x709 = 5187704;
	uint16_t x710 = 1926U;
	uint64_t x711 = 30989824663LLU;
	volatile uint64_t t122 = 12LLU;

    t122 = (x709+((x710^x711)*x712));

    if (t122 != 18446744042724914023LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x714 = 1U;
	uint32_t x715 = 696U;
	volatile uint32_t x716 = 1U;
	uint32_t t123 = 4463189U;

    t123 = (x713+((x714^x715)*x716));

    if (t123 != 569U) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x717 = -14;
	uint16_t x718 = 227U;
	int64_t x719 = 13LL;
	uint32_t x720 = UINT32_MAX;

    t124 = (x717+((x718^x719)*x720));

    if (t124 != 1022202216196LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x721 = INT64_MIN;
	int32_t x722 = -28037036;
	uint32_t x723 = 2U;
	int16_t x724 = INT16_MIN;
	volatile int64_t t125 = 121LL;

    t125 = (x721+((x722^x723)*x724));

    if (t125 != -9223372032965279744LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint16_t x730 = 514U;
	uint8_t x731 = 87U;
	uint8_t x732 = 1U;
	static volatile uint32_t t126 = 9U;

    t126 = (x729+((x730^x731)*x732));

    if (t126 != 29516U) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x733 = INT16_MAX;
	static uint32_t x734 = 168U;
	static int16_t x735 = INT16_MAX;
	volatile uint64_t x736 = 4028404LLU;

    t127 = (x733+((x734^x735)*x736));

    if (t127 != 131321974763LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x737 = INT16_MIN;
	static uint32_t x738 = 3812398U;
	int8_t x739 = -1;
	uint64_t x740 = 906108743868881LLU;

    t128 = (x737+((x738^x739)*x740));

    if (t128 != 11364122820720303777LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x741 = INT16_MIN;
	static uint32_t x742 = 7294208U;
	uint32_t t129 = 760U;

    t129 = (x741+((x742^x743)*x744));

    if (t129 != 402045952U) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x745 = INT64_MIN;
	int16_t x746 = -1;
	int8_t x748 = 1;
	volatile int64_t t130 = 316LL;

    t130 = (x745+((x746^x747)*x748));

    if (t130 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x749 = -1;
	static int8_t x750 = -11;
	static uint64_t x751 = UINT64_MAX;
	uint32_t x752 = UINT32_MAX;
	static uint64_t t131 = 30823278019991716LLU;

    t131 = (x749+((x750^x751)*x752));

    if (t131 != 42949672949LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile uint32_t x753 = 710477980U;
	uint64_t x754 = 700198702020LLU;
	int64_t x756 = -102622254404997180LL;

    t132 = (x753+((x754^x755)*x756));

    if (t132 != 15426503715574717128LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int16_t x757 = 0;
	int16_t x759 = INT16_MIN;
	uint8_t x760 = UINT8_MAX;
	int32_t t133 = -11;

    t133 = (x757+((x758^x759)*x760));

    if (t133 != 7894800) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint32_t x769 = 397924U;
	int16_t x770 = INT16_MAX;
	int64_t x771 = -1LL;
	uint32_t x772 = UINT32_MAX;
	static int64_t t134 = 6LL;

    t134 = (x769+((x770^x771)*x772));

    if (t134 != -140737487924636LL) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x773 = INT64_MAX;
	static int8_t x774 = -1;
	uint16_t x775 = UINT16_MAX;
	int16_t x776 = 117;
	int64_t t135 = -107139454621LL;

    t135 = (x773+((x774^x775)*x776));

    if (t135 != 9223372036847108095LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x777 = INT8_MIN;
	uint16_t x778 = 229U;
	uint32_t x779 = 11766722U;
	int16_t x780 = -67;
	volatile uint32_t t136 = 94946536U;

    t136 = (x777+((x778^x779)*x780));

    if (t136 != 3506607179U) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile int16_t x784 = -1;
	volatile uint32_t t137 = 2897U;

    t137 = (x781+((x782^x783)*x784));

    if (t137 != 2147483921U) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile int8_t x789 = -1;
	volatile uint16_t x790 = 210U;
	static uint64_t x792 = 1366341LLU;
	static volatile uint64_t t138 = 48393301266LLU;

    t138 = (x789+((x790^x791)*x792));

    if (t138 != 18446744073421253664LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x793 = 8;
	static volatile uint8_t x794 = UINT8_MAX;
	int8_t x795 = 0;
	uint64_t x796 = 19901LLU;
	volatile uint64_t t139 = 963LLU;

    t139 = (x793+((x794^x795)*x796));

    if (t139 != 5074763LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x801 = INT8_MAX;
	int16_t x803 = INT16_MIN;
	int64_t x804 = 3457709LL;
	volatile int64_t t140 = 44401410030LL;

    t140 = (x801+((x802^x803)*x804));

    if (t140 != 127LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x805 = -1;
	uint64_t x806 = UINT64_MAX;
	static int64_t x808 = INT64_MIN;
	volatile uint64_t t141 = UINT64_MAX;

    t141 = (x805+((x806^x807)*x808));

    if (t141 != UINT64_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x814 = INT32_MIN;
	int8_t x816 = 29;
	volatile uint32_t t142 = 0U;

    t142 = (x813+((x814^x815)*x816));

    if (t142 != 1515629495U) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x817 = 3U;
	int16_t x818 = 15966;
	int64_t x819 = -47035653473357289LL;
	volatile int64_t t143 = 32714LL;

    t143 = (x817+((x818^x819)*x820));

    if (t143 != -658499148627137535LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile int32_t x829 = -32347675;
	uint64_t x831 = 1286526360747302LLU;
	int16_t x832 = -1;
	uint64_t t144 = 237076892011809171LLU;

    t144 = (x829+((x830^x831)*x832));

    if (t144 != 18445457547316467302LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x834 = UINT64_MAX;

    t145 = (x833+((x834^x835)*x836));

    if (t145 != 18446744073709058221LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x841 = INT16_MAX;
	uint8_t x842 = 74U;
	uint64_t x843 = UINT64_MAX;
	volatile int16_t x844 = INT16_MIN;

    t146 = (x841+((x842^x843)*x844));

    if (t146 != 2490367LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x846 = 41441920342384LLU;
	int8_t x847 = INT8_MAX;
	uint32_t x848 = 6718U;
	static uint64_t t147 = 32201LLU;

    t147 = (x845+((x846^x847)*x848));

    if (t147 != 278406818712000418LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x849 = 204U;
	volatile int8_t x850 = INT8_MIN;
	volatile uint64_t x851 = UINT64_MAX;
	uint64_t x852 = UINT64_MAX;
	static volatile uint64_t t148 = 17250088986920588LLU;

    t148 = (x849+((x850^x851)*x852));

    if (t148 != 77LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int64_t x853 = INT64_MIN;
	static uint32_t x855 = UINT32_MAX;
	volatile uint64_t t149 = 2622LLU;

    t149 = (x853+((x854^x855)*x856));

    if (t149 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x857 = 2U;
	volatile int16_t x860 = 1403;
	volatile uint64_t t150 = 70153937570LLU;

    t150 = (x857+((x858^x859)*x860));

    if (t150 != 18446744073709546006LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x865 = 282;
	uint16_t x866 = UINT16_MAX;
	uint16_t x867 = 1U;
	uint64_t x868 = 29LLU;
	static volatile uint64_t t151 = 141018935LLU;

    t151 = (x865+((x866^x867)*x868));

    if (t151 != 1900768LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x869 = INT32_MIN;
	uint64_t x870 = 12873426189LLU;
	int8_t x872 = -1;
	volatile uint64_t t152 = 326130642307LLU;

    t152 = (x869+((x870^x871)*x872));

    if (t152 != 9223372021833865971LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x873 = -1;
	int32_t x874 = 0;
	int16_t x875 = INT16_MIN;

    t153 = (x873+((x874^x875)*x876));

    if (t153 != 4194303) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x877 = 14;
	static int8_t x878 = -1;
	int64_t x879 = -3838LL;
	int16_t x880 = -1;

    t154 = (x877+((x878^x879)*x880));

    if (t154 != -3823LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint32_t x881 = 299U;
	static int16_t x882 = INT16_MIN;
	static int64_t x883 = -1280762LL;
	uint16_t x884 = 6U;
	volatile int64_t t155 = 12568462749779583LL;

    t155 = (x881+((x882^x883)*x884));

    if (t155 != 7847759LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x885 = 792;
	volatile int8_t x887 = -4;
	int32_t t156 = -1;

    t156 = (x885+((x886^x887)*x888));

    if (t156 != -195813) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x889 = INT16_MAX;
	static int16_t x890 = INT16_MIN;
	volatile int16_t x891 = INT16_MAX;
	int16_t x892 = -12891;
	int32_t t157 = -57682425;

    t157 = (x889+((x890^x891)*x892));

    if (t157 != 45658) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x893 = 619090LLU;
	static uint8_t x894 = UINT8_MAX;
	volatile int16_t x896 = INT16_MAX;
	uint64_t t158 = 16686777864LLU;

    t158 = (x893+((x894^x895)*x896));

    if (t158 != 18446744073702306626LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x897 = 1000U;
	uint64_t x899 = UINT64_MAX;
	int8_t x900 = -8;
	uint64_t t159 = 14511LLU;

    t159 = (x897+((x898^x899)*x900));

    if (t159 != 2985656LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x901 = -1LL;
	int64_t x902 = INT64_MAX;
	int64_t x903 = -1LL;
	static uint64_t x904 = 3578833LLU;
	uint64_t t160 = 38649740084LLU;

    t160 = (x901+((x902^x903)*x904));

    if (t160 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x909 = INT32_MIN;
	uint8_t x910 = 15U;
	uint16_t x911 = 22U;
	static int32_t x912 = 16974;

    t161 = (x909+((x910^x911)*x912));

    if (t161 != -2147059298) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint32_t x921 = 22194827U;
	volatile int64_t x922 = INT64_MAX;
	uint64_t x923 = UINT64_MAX;
	static int32_t x924 = INT32_MAX;
	uint64_t t162 = 4311357LLU;

    t162 = (x921+((x922^x923)*x924));

    if (t162 != 9223372036876970635LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x930 = -1647;
	uint16_t x931 = 1U;
	uint32_t x932 = 202U;

    t163 = (x929+((x930^x931)*x932));

    if (t163 != 2147150751U) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x933 = 2108383426245783076LL;
	uint64_t x934 = 1612LLU;
	int8_t x935 = INT8_MIN;
	int32_t x936 = INT32_MAX;

    t164 = (x933+((x934^x935)*x936));

    if (t164 != 2108380016041751640LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x937 = 3772LLU;
	uint8_t x938 = UINT8_MAX;
	int64_t x939 = 1510878361511929768LL;
	uint64_t x940 = 377537517LLU;
	volatile uint64_t t165 = 754894232040836LLU;

    t165 = (x937+((x938^x939)*x940));

    if (t165 != 1134223382762602311LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x941 = -513153455;
	int8_t x942 = -50;
	int8_t x943 = INT8_MIN;
	static int64_t x944 = -1LL;

    t166 = (x941+((x942^x943)*x944));

    if (t166 != -513153533LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x945 = -23;
	static uint32_t x946 = UINT32_MAX;
	volatile uint16_t x947 = 2220U;
	static volatile uint32_t x948 = 33U;

    t167 = (x945+((x946^x947)*x948));

    if (t167 != 4294893980U) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x949 = -1;
	uint64_t x951 = 34271024675334LLU;
	int16_t x952 = INT16_MAX;

    t168 = (x949+((x950^x951)*x952));

    if (t168 != 1122958665536669177LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x957 = -1;
	int32_t x958 = 1550542;
	int16_t x959 = INT16_MIN;
	uint64_t x960 = UINT64_MAX;
	uint64_t t169 = 3988150004703LLU;

    t169 = (x957+((x958^x959)*x960));

    if (t169 != 1562417LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x961 = 3U;
	static int32_t x962 = -1;
	uint32_t x963 = 47487049U;
	int8_t x964 = INT8_MAX;
	volatile uint32_t t170 = 211U;

    t170 = (x961+((x962^x963)*x964));

    if (t170 != 2559079245U) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint16_t x967 = UINT16_MAX;
	static int8_t x968 = -3;

    t171 = (x965+((x966^x967)*x968));

    if (t171 != 152801LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x978 = 993070306LLU;
	uint64_t t172 = 1203860615862LLU;

    t172 = (x977+((x978^x979)*x980));

    if (t172 != 993318845LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x985 = 4674U;
	uint8_t x986 = UINT8_MAX;
	int16_t x987 = -657;
	volatile int16_t x988 = INT16_MIN;
	volatile int32_t t173 = -13891472;

    t173 = (x985+((x986^x987)*x988));

    if (t173 != 20451906) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x993 = 9932547779393844LL;
	int32_t x994 = INT32_MIN;
	int64_t x995 = -8LL;
	uint16_t x996 = UINT16_MAX;
	int64_t t174 = 8844429363LL;

    t174 = (x993+((x994^x995)*x996));

    if (t174 != 10073283119741244LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x1003 = INT16_MIN;
	static int8_t x1004 = INT8_MIN;
	static volatile uint32_t t175 = 26638U;

    t175 = (x1001+((x1002^x1003)*x1004));

    if (t175 != 222986496U) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x1009 = -8;
	int8_t x1010 = INT8_MIN;
	uint64_t x1011 = UINT64_MAX;
	volatile uint64_t t176 = 4483377613LLU;

    t176 = (x1009+((x1010^x1011)*x1012));

    if (t176 != 64762LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x1013 = 1U;
	volatile int16_t x1014 = INT16_MAX;
	volatile int16_t x1016 = -1;
	volatile int32_t t177 = 5929;

    t177 = (x1013+((x1014^x1015)*x1016));

    if (t177 != -32755) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x1017 = INT8_MIN;
	static int16_t x1018 = 4;
	volatile uint16_t x1019 = 79U;
	static int64_t x1020 = 94640562935LL;
	int64_t t178 = -12623797979LL;

    t178 = (x1017+((x1018^x1019)*x1020));

    if (t178 != 7098042219997LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x1021 = UINT32_MAX;
	static int16_t x1022 = INT16_MIN;
	volatile int16_t x1023 = INT16_MIN;
	int8_t x1024 = INT8_MIN;
	uint32_t t179 = UINT32_MAX;

    t179 = (x1021+((x1022^x1023)*x1024));

    if (t179 != UINT32_MAX) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x1026 = INT32_MIN;
	uint64_t x1027 = UINT64_MAX;
	volatile int16_t x1028 = -1;
	volatile uint64_t t180 = 509130759785209992LLU;

    t180 = (x1025+((x1026^x1027)*x1028));

    if (t180 != 18446744071562035201LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x1029 = 411U;
	int64_t x1030 = INT64_MAX;
	static volatile int8_t x1031 = INT8_MIN;
	static volatile uint64_t x1032 = 2967313LLU;
	volatile uint64_t t181 = 1105106359541895LLU;

    t181 = (x1029+((x1030^x1031)*x1032));

    if (t181 != 9223372037231624970LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x1034 = INT8_MIN;
	int16_t x1035 = INT16_MIN;
	int16_t x1036 = INT16_MAX;
	volatile int32_t t182 = 57;

    t182 = (x1033+((x1034^x1035)*x1036));

    if (t182 != 1069514850) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int32_t x1041 = -1;
	int8_t x1043 = INT8_MIN;
	int8_t x1044 = INT8_MIN;
	int32_t t183 = -44963;

    t183 = (x1041+((x1042^x1043)*x1044));

    if (t183 != -16257) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x1045 = INT64_MAX;
	volatile int8_t x1046 = -1;
	int16_t x1048 = -1;
	volatile uint64_t t184 = 27783835662584LLU;

    t184 = (x1045+((x1046^x1047)*x1048));

    if (t184 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x1049 = 2U;
	volatile int64_t x1050 = 25309962LL;
	uint8_t x1051 = UINT8_MAX;
	uint64_t x1052 = 170860597881759453LLU;
	volatile uint64_t t185 = 124212LLU;

    t185 = (x1049+((x1050^x1051)*x1052));

    if (t185 != 8285237236857600131LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x1061 = -53;
	volatile int32_t x1062 = INT32_MAX;
	int32_t x1063 = INT32_MAX;
	int64_t x1064 = 129534026887LL;
	volatile int64_t t186 = 4222LL;

    t186 = (x1061+((x1062^x1063)*x1064));

    if (t186 != -53LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x1069 = 1U;
	int16_t x1070 = INT16_MAX;
	static int64_t x1071 = -1LL;
	volatile int64_t x1072 = -127559092270980LL;
	static int64_t t187 = 0LL;

    t187 = (x1069+((x1070^x1071)*x1072));

    if (t187 != 4179856335535472641LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x1073 = INT16_MAX;
	int8_t x1074 = INT8_MIN;
	int32_t x1075 = -1;
	int16_t x1076 = INT16_MIN;
	volatile int32_t t188 = -258973;

    t188 = (x1073+((x1074^x1075)*x1076));

    if (t188 != -4128769) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x1077 = -11646;
	static int16_t x1080 = INT16_MIN;
	static volatile int32_t t189 = 0;

    t189 = (x1077+((x1078^x1079)*x1080));

    if (t189 != -2147233150) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x1083 = INT32_MIN;
	int16_t x1084 = -1;
	volatile uint32_t t190 = 13U;

    t190 = (x1081+((x1082^x1083)*x1084));

    if (t190 != 4294919920U) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint16_t x1085 = UINT16_MAX;
	int16_t x1086 = INT16_MIN;
	int16_t x1088 = -3267;
	volatile uint64_t t191 = 15255627LLU;

    t191 = (x1085+((x1086^x1087)*x1088));

    if (t191 != 101502618LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x1089 = INT32_MIN;
	uint64_t x1090 = 6847247190133227LLU;
	int8_t x1091 = INT8_MAX;
	int64_t x1092 = INT64_MAX;
	uint64_t t192 = 2LLU;

    t192 = (x1089+((x1090^x1091)*x1092));

    if (t192 != 18439896824371934828LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x1093 = INT16_MIN;
	uint32_t x1094 = 766U;
	int32_t x1095 = -1;
	int16_t x1096 = 670;

    t193 = (x1093+((x1094^x1095)*x1096));

    if (t193 != 4294420638U) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x1097 = INT16_MIN;
	int64_t x1098 = -1LL;
	static volatile int32_t x1099 = INT32_MIN;
	static int32_t x1100 = INT32_MIN;
	static int64_t t194 = 333125519001LL;

    t194 = (x1097+((x1098^x1099)*x1100));

    if (t194 != -4611686016279937024LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x1101 = INT32_MIN;
	static int8_t x1103 = INT8_MAX;
	int16_t x1104 = INT16_MAX;
	static uint64_t t195 = 117807861741896365LLU;

    t195 = (x1101+((x1102^x1103)*x1104));

    if (t195 != 18446744071557873792LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x1105 = INT32_MIN;
	static uint32_t x1106 = 11804645U;
	int64_t x1107 = 0LL;
	int16_t x1108 = -1;
	static int64_t t196 = -112966LL;

    t196 = (x1105+((x1106^x1107)*x1108));

    if (t196 != -2159288293LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint8_t x1109 = 1U;
	static int8_t x1110 = -30;
	int32_t x1111 = INT32_MIN;
	static uint32_t x1112 = UINT32_MAX;
	static volatile uint32_t t197 = 28U;

    t197 = (x1109+((x1110^x1111)*x1112));

    if (t197 != 2147483679U) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x1113 = 0U;
	int8_t x1115 = INT8_MIN;
	uint64_t x1116 = UINT64_MAX;
	volatile uint64_t t198 = 2507LLU;

    t198 = (x1113+((x1114^x1115)*x1116));

    if (t198 != 6261989974130602119LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x1119 = UINT64_MAX;
	int32_t x1120 = -1;
	uint64_t t199 = 171991112857287LLU;

    t199 = (x1117+((x1118^x1119)*x1120));

    if (t199 != 107LLU) { NG(); } else { ; }
	
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

