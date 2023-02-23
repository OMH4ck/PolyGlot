
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

int8_t x2 = 6;
int16_t x10 = -1;
int32_t x11 = INT32_MAX;
volatile int32_t t2 = 1;
int8_t x21 = INT8_MIN;
int32_t t4 = 1;
int32_t x39 = -1;
int32_t t7 = 1;
static volatile uint32_t x82 = 1360349U;
static int32_t x85 = -1871;
volatile int64_t x86 = -200LL;
volatile int32_t t13 = -121;
static uint32_t x97 = 134689U;
uint32_t x104 = UINT32_MAX;
uint16_t x105 = 96U;
static uint16_t x106 = 3025U;
volatile int32_t t16 = -216424;
int16_t x117 = 3;
uint64_t x120 = 632518LLU;
int16_t x124 = -1;
int8_t x125 = -1;
int8_t x130 = 36;
int64_t x132 = 6447728LL;
int32_t t21 = 17;
uint8_t x146 = 4U;
int8_t x150 = INT8_MIN;
static volatile int32_t t25 = 35865;
int8_t x157 = -15;
volatile int16_t x160 = -6193;
static uint8_t x164 = UINT8_MAX;
int32_t t27 = -677;
volatile int32_t t29 = 16065496;
int32_t x185 = 272324629;
uint8_t x186 = 0U;
int64_t x188 = 5424215587LL;
int16_t x196 = INT16_MAX;
uint8_t x200 = 2U;
int32_t x201 = 2;
static volatile uint16_t x203 = 21U;
int32_t t39 = 752383;
static int32_t x234 = -78150;
static int32_t x254 = INT32_MIN;
int16_t x261 = -4;
int8_t x265 = INT8_MIN;
volatile uint64_t x268 = 50432034815372LLU;
int32_t t46 = 5;
uint64_t x283 = 256213478371333LLU;
volatile uint8_t x293 = UINT8_MAX;
uint64_t x296 = 4392076878273LLU;
int32_t t51 = -89;
int32_t t52 = -492261862;
int16_t x305 = -1;
volatile int16_t x313 = -1;
volatile uint32_t x321 = 6U;
uint32_t x323 = 361023U;
int8_t x336 = -22;
static int32_t t57 = 12;
volatile int32_t t58 = -1677513;
int16_t x342 = INT16_MIN;
volatile int16_t x355 = INT16_MIN;
int8_t x358 = -19;
uint32_t x363 = 0U;
int8_t x365 = INT8_MIN;
int32_t t64 = 51675839;
uint16_t x376 = UINT16_MAX;
int32_t t65 = -11784;
static uint16_t x381 = UINT16_MAX;
static volatile int8_t x382 = -1;
int32_t x390 = 25;
static int64_t x398 = -1LL;
volatile uint8_t x404 = 1U;
uint64_t x412 = 138677116857499156LLU;
uint32_t x414 = UINT32_MAX;
volatile int32_t t75 = -444140223;
int64_t x437 = INT64_MIN;
volatile int32_t x441 = INT32_MIN;
int16_t x448 = -32;
int8_t x454 = INT8_MIN;
int16_t x455 = -1;
static int64_t x458 = -328862LL;
uint16_t x466 = 7U;
uint32_t x468 = UINT32_MAX;
volatile int32_t t85 = 104;
int16_t x469 = -1;
int32_t x473 = -103975778;
uint32_t x479 = 3731U;
int32_t t88 = -7630;
volatile int8_t x494 = -20;
uint32_t x507 = 235894U;
volatile int32_t t92 = 24959838;
static volatile int64_t x510 = -89410625LL;
static int32_t t93 = 3395306;
int16_t x527 = -1;
int32_t x536 = 2;
int32_t t97 = 0;
int32_t x552 = -1;
int16_t x577 = -29;
uint16_t x582 = UINT16_MAX;
static uint32_t x583 = 1114670U;
volatile int32_t t111 = -1429;
int32_t t113 = 132232;
int64_t x644 = INT64_MAX;
static uint8_t x648 = 49U;
int8_t x658 = 1;
int8_t x674 = 0;
int64_t x677 = 47616LL;
volatile int32_t x682 = -4540133;
int32_t t121 = 1;
volatile int32_t t123 = 1582614;
static uint16_t x699 = UINT16_MAX;
int64_t x719 = 201323239908LL;
uint32_t x721 = 356912U;
uint16_t x723 = 97U;
int8_t x743 = INT8_MAX;
volatile int32_t t130 = -49;
volatile int8_t x746 = INT8_MIN;
volatile int32_t x754 = -1;
volatile int32_t t136 = 94317196;
volatile uint8_t x783 = 18U;
static int32_t t138 = 3356974;
volatile int8_t x791 = INT8_MIN;
uint32_t x794 = 357535U;
int32_t t140 = 175666;
int8_t x798 = INT8_MIN;
int32_t x800 = INT32_MIN;
int32_t x801 = 179049078;
uint64_t x808 = 1941910270LLU;
int64_t x810 = -1LL;
int64_t x821 = INT64_MAX;
int32_t x826 = INT32_MIN;
volatile int8_t x828 = INT8_MIN;
int64_t x832 = 27279782651411683LL;
volatile int32_t t148 = 67966;
int32_t x835 = -1;
static int32_t x837 = -8368500;
uint32_t x853 = 8155353U;
static int32_t x860 = -1;
int32_t t155 = -28482825;
uint16_t x869 = UINT16_MAX;
uint64_t x875 = UINT64_MAX;
volatile uint8_t x879 = 123U;
int16_t x884 = -1130;
volatile uint32_t x887 = UINT32_MAX;
uint8_t x888 = 3U;
static volatile int32_t t160 = 10243834;
uint16_t x897 = UINT16_MAX;
int64_t x903 = -1LL;
static int32_t t163 = 2665726;
int16_t x908 = 8932;
volatile int16_t x910 = INT16_MIN;
int64_t x920 = -1LL;
uint16_t x924 = UINT16_MAX;
static uint16_t x928 = 1U;
volatile int16_t x930 = INT16_MIN;
int8_t x931 = INT8_MIN;
volatile int32_t t170 = -66210099;
uint64_t x941 = 60219LLU;
volatile int32_t x943 = 1;
int8_t x952 = INT8_MAX;
uint32_t x953 = UINT32_MAX;
static volatile int32_t x955 = -3;
uint16_t x956 = 5U;
volatile int32_t t173 = -2172;
volatile int64_t x957 = 11746409520108LL;
static int16_t x964 = -1;
static int64_t x965 = INT64_MIN;
uint16_t x966 = UINT16_MAX;
int16_t x973 = INT16_MAX;
static volatile uint8_t x978 = 12U;
static int8_t x982 = 10;
volatile uint64_t x993 = 133123411LLU;
uint16_t x994 = UINT16_MAX;
int32_t t180 = -394799;
volatile uint8_t x1002 = 19U;
static int32_t x1009 = -52355;
uint32_t x1010 = 1793U;
volatile int32_t x1011 = -40673906;
int32_t t183 = 1966810;
volatile uint64_t x1018 = UINT64_MAX;
volatile uint64_t x1022 = UINT64_MAX;
static int8_t x1039 = INT8_MIN;
volatile int32_t t189 = 209;
int8_t x1041 = -1;
int16_t x1043 = INT16_MAX;
int8_t x1044 = -16;
static uint16_t x1047 = 29158U;
int32_t t192 = 2143632;
int16_t x1074 = INT16_MIN;
volatile int16_t x1082 = 17;
int64_t x1084 = INT64_MAX;
int16_t x1089 = 0;
uint32_t x1091 = 961356U;
static int16_t x1092 = -1;
uint64_t x1094 = 8520LLU;
uint32_t x1096 = 0U;
volatile int32_t t199 = -3482;


void f0(void) {
    	uint16_t x1 = 19019U;
	int16_t x3 = -564;
	uint16_t x4 = 1U;
	int32_t t0 = 318;

    t0 = (x1<=((x2*x3)>x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MIN;
	int32_t x6 = INT32_MIN;
	uint8_t x7 = 0U;
	static uint32_t x8 = UINT32_MAX;
	volatile int32_t t1 = 4;

    t1 = (x5<=((x6*x7)>x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x9 = INT64_MIN;
	int32_t x12 = -5716331;

    t2 = (x9<=((x10*x11)>x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x22 = 31429U;
	uint8_t x23 = UINT8_MAX;
	volatile int8_t x24 = INT8_MIN;
	volatile int32_t t3 = 694323064;

    t3 = (x21<=((x22*x23)>x24));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x29 = 4707U;
	int64_t x30 = -17311135976LL;
	int8_t x31 = INT8_MIN;
	static int8_t x32 = -1;

    t4 = (x29<=((x30*x31)>x32));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x37 = UINT8_MAX;
	int16_t x38 = INT16_MAX;
	int8_t x40 = 0;
	volatile int32_t t5 = 83473831;

    t5 = (x37<=((x38*x39)>x40));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x45 = INT8_MIN;
	static volatile int16_t x46 = 10007;
	static uint64_t x47 = 115992541LLU;
	uint8_t x48 = 1U;
	volatile int32_t t6 = -352081787;

    t6 = (x45<=((x46*x47)>x48));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x61 = -41633;
	uint8_t x62 = 2U;
	static int16_t x63 = INT16_MIN;
	volatile uint32_t x64 = 14511718U;

    t7 = (x61<=((x62*x63)>x64));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint8_t x65 = 0U;
	int16_t x66 = -528;
	uint32_t x67 = 62U;
	int16_t x68 = INT16_MAX;
	volatile int32_t t8 = 0;

    t8 = (x65<=((x66*x67)>x68));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x69 = INT64_MAX;
	int8_t x70 = 0;
	uint16_t x71 = 0U;
	uint16_t x72 = UINT16_MAX;
	static int32_t t9 = 52353;

    t9 = (x69<=((x70*x71)>x72));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint64_t x81 = 29304159061752345LLU;
	uint8_t x83 = 2U;
	int8_t x84 = -1;
	volatile int32_t t10 = 136532;

    t10 = (x81<=((x82*x83)>x84));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x87 = INT16_MAX;
	static volatile uint64_t x88 = UINT64_MAX;
	volatile int32_t t11 = 4116442;

    t11 = (x85<=((x86*x87)>x88));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x89 = INT64_MIN;
	volatile int8_t x90 = -19;
	int8_t x91 = INT8_MIN;
	volatile int16_t x92 = INT16_MIN;
	int32_t t12 = -15509679;

    t12 = (x89<=((x90*x91)>x92));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x93 = INT8_MIN;
	static uint8_t x94 = 39U;
	int8_t x95 = 20;
	int32_t x96 = 3400;

    t13 = (x93<=((x94*x95)>x96));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x98 = 26429U;
	static int8_t x99 = 40;
	uint8_t x100 = UINT8_MAX;
	static int32_t t14 = -29661154;

    t14 = (x97<=((x98*x99)>x100));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x101 = 0U;
	int64_t x102 = -1LL;
	int8_t x103 = INT8_MIN;
	volatile int32_t t15 = 91990661;

    t15 = (x101<=((x102*x103)>x104));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static int16_t x107 = INT16_MIN;
	uint16_t x108 = 8U;

    t16 = (x105<=((x106*x107)>x108));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x113 = INT8_MAX;
	static int8_t x114 = INT8_MAX;
	uint64_t x115 = 1247605LLU;
	int8_t x116 = INT8_MIN;
	volatile int32_t t17 = -15275;

    t17 = (x113<=((x114*x115)>x116));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x118 = 37;
	int16_t x119 = INT16_MIN;
	static int32_t t18 = 1628;

    t18 = (x117<=((x118*x119)>x120));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x121 = 3U;
	static int16_t x122 = -2;
	volatile int16_t x123 = -1;
	volatile int32_t t19 = 2;

    t19 = (x121<=((x122*x123)>x124));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint64_t x126 = 18961986436638LLU;
	volatile int64_t x127 = 2459LL;
	static uint8_t x128 = 1U;
	static volatile int32_t t20 = 133;

    t20 = (x125<=((x126*x127)>x128));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x129 = 249U;
	static uint8_t x131 = UINT8_MAX;

    t21 = (x129<=((x130*x131)>x132));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint64_t x137 = 31546LLU;
	static uint64_t x138 = 46810LLU;
	uint8_t x139 = UINT8_MAX;
	int64_t x140 = -11475129321LL;
	volatile int32_t t22 = 1954;

    t22 = (x137<=((x138*x139)>x140));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x141 = INT32_MAX;
	uint32_t x142 = 84478U;
	static volatile int16_t x143 = INT16_MAX;
	static uint64_t x144 = 1977086720306506903LLU;
	static int32_t t23 = -3;

    t23 = (x141<=((x142*x143)>x144));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x145 = 432;
	int16_t x147 = INT16_MIN;
	int16_t x148 = INT16_MIN;
	int32_t t24 = 5048;

    t24 = (x145<=((x146*x147)>x148));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint64_t x149 = UINT64_MAX;
	volatile uint32_t x151 = UINT32_MAX;
	static uint32_t x152 = 561001U;

    t25 = (x149<=((x150*x151)>x152));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int64_t x158 = -1LL;
	uint64_t x159 = 15600528694518LLU;
	int32_t t26 = 183672;

    t26 = (x157<=((x158*x159)>x160));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static int8_t x161 = 1;
	static volatile uint64_t x162 = 1801103679LLU;
	uint32_t x163 = UINT32_MAX;

    t27 = (x161<=((x162*x163)>x164));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x169 = -1;
	static int32_t x170 = INT32_MIN;
	uint16_t x171 = 1U;
	int16_t x172 = -1;
	volatile int32_t t28 = -713;

    t28 = (x169<=((x170*x171)>x172));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint64_t x173 = 4034060050LLU;
	uint8_t x174 = 76U;
	volatile int16_t x175 = INT16_MAX;
	int8_t x176 = INT8_MAX;

    t29 = (x173<=((x174*x175)>x176));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x177 = INT16_MIN;
	int16_t x178 = 2100;
	uint8_t x179 = UINT8_MAX;
	volatile int16_t x180 = 0;
	volatile int32_t t30 = -3;

    t30 = (x177<=((x178*x179)>x180));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x187 = INT8_MAX;
	volatile int32_t t31 = -3104;

    t31 = (x185<=((x186*x187)>x188));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int32_t x189 = 5519203;
	int16_t x190 = INT16_MIN;
	int8_t x191 = INT8_MIN;
	static int32_t x192 = -1;
	int32_t t32 = 2454812;

    t32 = (x189<=((x190*x191)>x192));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x193 = -1;
	int32_t x194 = -1;
	uint64_t x195 = 1104599LLU;
	int32_t t33 = 238807256;

    t33 = (x193<=((x194*x195)>x196));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int64_t x197 = INT64_MIN;
	volatile int32_t x198 = INT32_MIN;
	uint32_t x199 = 5U;
	int32_t t34 = 126965;

    t34 = (x197<=((x198*x199)>x200));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int64_t x202 = 133657278LL;
	uint16_t x204 = 31362U;
	int32_t t35 = -171935;

    t35 = (x201<=((x202*x203)>x204));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x205 = 28826LLU;
	int32_t x206 = 275960035;
	volatile uint32_t x207 = 7624U;
	static int16_t x208 = INT16_MIN;
	volatile int32_t t36 = 474;

    t36 = (x205<=((x206*x207)>x208));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x209 = INT32_MAX;
	int16_t x210 = -1;
	uint32_t x211 = 0U;
	int16_t x212 = 3;
	volatile int32_t t37 = -3;

    t37 = (x209<=((x210*x211)>x212));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x221 = INT8_MIN;
	volatile int16_t x222 = INT16_MIN;
	int8_t x223 = INT8_MIN;
	uint64_t x224 = 202530LLU;
	volatile int32_t t38 = -1322;

    t38 = (x221<=((x222*x223)>x224));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x225 = -1;
	volatile uint16_t x226 = UINT16_MAX;
	int8_t x227 = INT8_MIN;
	int8_t x228 = INT8_MIN;

    t39 = (x225<=((x226*x227)>x228));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x233 = -15;
	uint32_t x235 = 7844U;
	int8_t x236 = INT8_MAX;
	static int32_t t40 = -73242;

    t40 = (x233<=((x234*x235)>x236));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x249 = 196;
	volatile int32_t x250 = -1;
	volatile int64_t x251 = -1LL;
	int32_t x252 = INT32_MIN;
	volatile int32_t t41 = 128353384;

    t41 = (x249<=((x250*x251)>x252));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x253 = 1172;
	volatile uint64_t x255 = UINT64_MAX;
	uint8_t x256 = UINT8_MAX;
	volatile int32_t t42 = -1008138676;

    t42 = (x253<=((x254*x255)>x256));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x257 = -1LL;
	static volatile int16_t x258 = INT16_MIN;
	uint64_t x259 = UINT64_MAX;
	uint64_t x260 = 20610812LLU;
	static volatile int32_t t43 = -9;

    t43 = (x257<=((x258*x259)>x260));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x262 = -1;
	volatile uint16_t x263 = UINT16_MAX;
	int64_t x264 = -141512840288379530LL;
	static volatile int32_t t44 = -125281698;

    t44 = (x261<=((x262*x263)>x264));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int8_t x266 = INT8_MAX;
	int32_t x267 = 135599;
	static int32_t t45 = -40052;

    t45 = (x265<=((x266*x267)>x268));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x273 = 111U;
	volatile uint8_t x274 = UINT8_MAX;
	uint16_t x275 = UINT16_MAX;
	volatile int8_t x276 = INT8_MAX;

    t46 = (x273<=((x274*x275)>x276));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x277 = -141250974502040LL;
	uint16_t x278 = 848U;
	volatile int32_t x279 = -7535;
	int16_t x280 = INT16_MIN;
	int32_t t47 = -1;

    t47 = (x277<=((x278*x279)>x280));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x281 = 32029U;
	uint8_t x282 = 3U;
	volatile int8_t x284 = INT8_MIN;
	static int32_t t48 = -1315612;

    t48 = (x281<=((x282*x283)>x284));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int8_t x285 = -2;
	static volatile int64_t x286 = INT64_MIN;
	uint64_t x287 = UINT64_MAX;
	static uint16_t x288 = 2473U;
	int32_t t49 = -9424171;

    t49 = (x285<=((x286*x287)>x288));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x294 = 913470049LLU;
	static volatile int8_t x295 = -1;
	volatile int32_t t50 = 1894206;

    t50 = (x293<=((x294*x295)>x296));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x297 = INT8_MIN;
	volatile uint8_t x298 = 25U;
	int32_t x299 = -42;
	static int16_t x300 = -1;

    t51 = (x297<=((x298*x299)>x300));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x301 = -1;
	uint32_t x302 = 1U;
	int64_t x303 = INT64_MIN;
	uint32_t x304 = UINT32_MAX;

    t52 = (x301<=((x302*x303)>x304));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint16_t x306 = UINT16_MAX;
	volatile uint16_t x307 = 6U;
	uint8_t x308 = 3U;
	int32_t t53 = 1;

    t53 = (x305<=((x306*x307)>x308));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x309 = -1;
	volatile int16_t x310 = 7326;
	static uint16_t x311 = UINT16_MAX;
	static volatile int8_t x312 = INT8_MAX;
	static int32_t t54 = -11;

    t54 = (x309<=((x310*x311)>x312));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x314 = 2;
	int8_t x315 = INT8_MIN;
	int16_t x316 = INT16_MIN;
	int32_t t55 = 41935078;

    t55 = (x313<=((x314*x315)>x316));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x322 = UINT8_MAX;
	int64_t x324 = -1LL;
	static volatile int32_t t56 = 1;

    t56 = (x321<=((x322*x323)>x324));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x333 = INT16_MIN;
	volatile uint8_t x334 = 1U;
	int16_t x335 = INT16_MIN;

    t57 = (x333<=((x334*x335)>x336));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x337 = -1;
	uint32_t x338 = 1285168219U;
	int16_t x339 = 69;
	int32_t x340 = 19689;

    t58 = (x337<=((x338*x339)>x340));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x341 = INT32_MIN;
	volatile uint64_t x343 = UINT64_MAX;
	int16_t x344 = -1;
	int32_t t59 = 16413;

    t59 = (x341<=((x342*x343)>x344));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x349 = INT32_MIN;
	int64_t x350 = -1LL;
	uint8_t x351 = UINT8_MAX;
	int32_t x352 = INT32_MIN;
	static int32_t t60 = 16067591;

    t60 = (x349<=((x350*x351)>x352));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x353 = -4;
	int16_t x354 = INT16_MIN;
	static volatile int32_t x356 = 0;
	int32_t t61 = -226389;

    t61 = (x353<=((x354*x355)>x356));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x357 = 42599459915294LL;
	static int16_t x359 = INT16_MIN;
	static uint8_t x360 = 17U;
	volatile int32_t t62 = 3384;

    t62 = (x357<=((x358*x359)>x360));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x361 = INT8_MAX;
	uint64_t x362 = 83237535014025LLU;
	int64_t x364 = INT64_MIN;
	volatile int32_t t63 = -1497;

    t63 = (x361<=((x362*x363)>x364));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x366 = INT32_MIN;
	uint64_t x367 = 658013LLU;
	uint64_t x368 = 2632274137741LLU;

    t64 = (x365<=((x366*x367)>x368));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int8_t x373 = INT8_MIN;
	static volatile uint16_t x374 = 29360U;
	uint8_t x375 = UINT8_MAX;

    t65 = (x373<=((x374*x375)>x376));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x377 = 62U;
	uint32_t x378 = 36388483U;
	int32_t x379 = -1;
	uint64_t x380 = 65504800411108LLU;
	static int32_t t66 = 182109;

    t66 = (x377<=((x378*x379)>x380));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x383 = INT8_MIN;
	int64_t x384 = INT64_MIN;
	int32_t t67 = 1;

    t67 = (x381<=((x382*x383)>x384));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x389 = UINT8_MAX;
	uint16_t x391 = 2185U;
	uint32_t x392 = 230675934U;
	int32_t t68 = 8;

    t68 = (x389<=((x390*x391)>x392));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x397 = -2611;
	int32_t x399 = -957284;
	static int16_t x400 = INT16_MIN;
	int32_t t69 = -98730;

    t69 = (x397<=((x398*x399)>x400));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x401 = -1255;
	int32_t x402 = -386;
	uint32_t x403 = 1475041U;
	int32_t t70 = 0;

    t70 = (x401<=((x402*x403)>x404));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x405 = INT32_MAX;
	int16_t x406 = 7;
	int8_t x407 = -3;
	static volatile uint8_t x408 = 6U;
	int32_t t71 = -2;

    t71 = (x405<=((x406*x407)>x408));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x409 = -3474609848878285006LL;
	int32_t x410 = INT32_MIN;
	uint64_t x411 = 214545126298632LLU;
	int32_t t72 = -4075637;

    t72 = (x409<=((x410*x411)>x412));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x413 = -3086204295761426305LL;
	int8_t x415 = -1;
	int64_t x416 = INT64_MAX;
	int32_t t73 = -181083;

    t73 = (x413<=((x414*x415)>x416));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x417 = -795;
	int8_t x418 = INT8_MIN;
	int16_t x419 = INT16_MAX;
	uint64_t x420 = 133269089LLU;
	volatile int32_t t74 = -17;

    t74 = (x417<=((x418*x419)>x420));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint64_t x421 = 95909LLU;
	int16_t x422 = -955;
	static int8_t x423 = INT8_MIN;
	volatile int64_t x424 = INT64_MAX;

    t75 = (x421<=((x422*x423)>x424));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x425 = -11340904885LL;
	uint16_t x426 = UINT16_MAX;
	int16_t x427 = INT16_MIN;
	static int16_t x428 = INT16_MIN;
	volatile int32_t t76 = -11354268;

    t76 = (x425<=((x426*x427)>x428));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x429 = 5098089119LL;
	static volatile int8_t x430 = -24;
	uint64_t x431 = UINT64_MAX;
	int32_t x432 = 6;
	volatile int32_t t77 = -1747282;

    t77 = (x429<=((x430*x431)>x432));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x438 = -1;
	static volatile int32_t x439 = 5;
	volatile int64_t x440 = -1LL;
	volatile int32_t t78 = 2761;

    t78 = (x437<=((x438*x439)>x440));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x442 = INT8_MIN;
	int8_t x443 = INT8_MIN;
	int16_t x444 = -529;
	int32_t t79 = 3;

    t79 = (x441<=((x442*x443)>x444));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x445 = INT64_MIN;
	uint16_t x446 = 376U;
	static int64_t x447 = 403136770LL;
	volatile int32_t t80 = 3;

    t80 = (x445<=((x446*x447)>x448));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x449 = INT32_MIN;
	uint32_t x450 = 1U;
	uint32_t x451 = 0U;
	int8_t x452 = -1;
	int32_t t81 = 4027;

    t81 = (x449<=((x450*x451)>x452));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x453 = 177167LL;
	int32_t x456 = INT32_MIN;
	static volatile int32_t t82 = -50854;

    t82 = (x453<=((x454*x455)>x456));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint32_t x457 = UINT32_MAX;
	volatile int8_t x459 = 1;
	uint8_t x460 = 3U;
	int32_t t83 = 7854357;

    t83 = (x457<=((x458*x459)>x460));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x461 = UINT32_MAX;
	uint32_t x462 = UINT32_MAX;
	int16_t x463 = INT16_MIN;
	uint32_t x464 = 217448851U;
	volatile int32_t t84 = -1063991;

    t84 = (x461<=((x462*x463)>x464));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x465 = INT32_MIN;
	static uint32_t x467 = 875U;

    t85 = (x465<=((x466*x467)>x468));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x470 = -1;
	volatile uint64_t x471 = 2091307661533417038LLU;
	int64_t x472 = 28675076819LL;
	volatile int32_t t86 = 67;

    t86 = (x469<=((x470*x471)>x472));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x474 = INT8_MIN;
	int64_t x475 = -1LL;
	static int8_t x476 = 14;
	static int32_t t87 = -106770;

    t87 = (x473<=((x474*x475)>x476));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int64_t x477 = 733852270245886LL;
	volatile int8_t x478 = -1;
	static int32_t x480 = 551558;

    t88 = (x477<=((x478*x479)>x480));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x489 = 1U;
	volatile int16_t x490 = -982;
	int8_t x491 = INT8_MIN;
	volatile int16_t x492 = -62;
	volatile int32_t t89 = 10432397;

    t89 = (x489<=((x490*x491)>x492));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x493 = -1;
	uint16_t x495 = 61U;
	int16_t x496 = -20;
	volatile int32_t t90 = -345061770;

    t90 = (x493<=((x494*x495)>x496));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x501 = UINT32_MAX;
	uint32_t x502 = 236510903U;
	uint16_t x503 = 24762U;
	int8_t x504 = INT8_MIN;
	volatile int32_t t91 = 40361;

    t91 = (x501<=((x502*x503)>x504));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static int64_t x505 = INT64_MAX;
	int16_t x506 = INT16_MAX;
	int16_t x508 = -5769;

    t92 = (x505<=((x506*x507)>x508));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x509 = 9671518305460120LLU;
	int8_t x511 = -15;
	int8_t x512 = 32;

    t93 = (x509<=((x510*x511)>x512));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x521 = 6;
	uint8_t x522 = 0U;
	static int8_t x523 = 63;
	int64_t x524 = INT64_MIN;
	volatile int32_t t94 = -15329091;

    t94 = (x521<=((x522*x523)>x524));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x525 = UINT8_MAX;
	static uint32_t x526 = 60172864U;
	uint16_t x528 = 0U;
	volatile int32_t t95 = -26;

    t95 = (x525<=((x526*x527)>x528));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x529 = -1LL;
	uint64_t x530 = 53LLU;
	int64_t x531 = INT64_MIN;
	static int8_t x532 = INT8_MAX;
	volatile int32_t t96 = 886802401;

    t96 = (x529<=((x530*x531)>x532));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x533 = UINT16_MAX;
	volatile uint64_t x534 = 33LLU;
	int8_t x535 = 1;

    t97 = (x533<=((x534*x535)>x536));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x541 = -5;
	volatile uint64_t x542 = 1022911577430996LLU;
	volatile uint16_t x543 = UINT16_MAX;
	int16_t x544 = INT16_MIN;
	static int32_t t98 = 1;

    t98 = (x541<=((x542*x543)>x544));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x549 = 1LL;
	static uint64_t x550 = 1264957929606LLU;
	static int64_t x551 = INT64_MAX;
	int32_t t99 = -4266009;

    t99 = (x549<=((x550*x551)>x552));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x557 = INT64_MAX;
	int8_t x558 = -1;
	int32_t x559 = INT32_MAX;
	int16_t x560 = 1086;
	volatile int32_t t100 = 244355;

    t100 = (x557<=((x558*x559)>x560));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint16_t x569 = 133U;
	static uint32_t x570 = 31U;
	static int32_t x571 = INT32_MIN;
	int16_t x572 = INT16_MIN;
	int32_t t101 = -15216;

    t101 = (x569<=((x570*x571)>x572));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x573 = INT64_MIN;
	int8_t x574 = -1;
	uint8_t x575 = 0U;
	static int64_t x576 = INT64_MAX;
	volatile int32_t t102 = 0;

    t102 = (x573<=((x574*x575)>x576));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x578 = 34965120149259LL;
	int64_t x579 = -206678LL;
	static int32_t x580 = INT32_MAX;
	static volatile int32_t t103 = -500011;

    t103 = (x577<=((x578*x579)>x580));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x581 = -673064LL;
	static int32_t x584 = -1;
	int32_t t104 = -8471821;

    t104 = (x581<=((x582*x583)>x584));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static int64_t x585 = INT64_MIN;
	int8_t x586 = -1;
	static uint32_t x587 = UINT32_MAX;
	static int8_t x588 = 1;
	volatile int32_t t105 = -34;

    t105 = (x585<=((x586*x587)>x588));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint8_t x589 = 3U;
	int16_t x590 = -1;
	static int32_t x591 = INT32_MAX;
	uint16_t x592 = 27075U;
	static volatile int32_t t106 = 0;

    t106 = (x589<=((x590*x591)>x592));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int16_t x605 = INT16_MIN;
	volatile uint16_t x606 = 0U;
	int64_t x607 = INT64_MIN;
	uint32_t x608 = 11U;
	volatile int32_t t107 = -1;

    t107 = (x605<=((x606*x607)>x608));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static int64_t x613 = -1LL;
	int8_t x614 = -1;
	int8_t x615 = -7;
	int8_t x616 = INT8_MIN;
	int32_t t108 = -1357;

    t108 = (x613<=((x614*x615)>x616));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x621 = INT64_MIN;
	static uint8_t x622 = UINT8_MAX;
	static int8_t x623 = -1;
	int16_t x624 = 13;
	int32_t t109 = 595498;

    t109 = (x621<=((x622*x623)>x624));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int8_t x625 = -29;
	static volatile uint32_t x626 = 3534U;
	uint64_t x627 = 21621987551LLU;
	int16_t x628 = INT16_MIN;
	int32_t t110 = -78427;

    t110 = (x625<=((x626*x627)>x628));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint32_t x629 = 1486U;
	int16_t x630 = INT16_MIN;
	uint64_t x631 = 1842205LLU;
	int32_t x632 = -3;

    t111 = (x629<=((x630*x631)>x632));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x633 = INT16_MIN;
	volatile int64_t x634 = -1LL;
	uint8_t x635 = UINT8_MAX;
	static int64_t x636 = INT64_MAX;
	int32_t t112 = 15306;

    t112 = (x633<=((x634*x635)>x636));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int8_t x637 = INT8_MAX;
	int32_t x638 = INT32_MIN;
	uint8_t x639 = 0U;
	uint64_t x640 = 300587385370135LLU;

    t113 = (x637<=((x638*x639)>x640));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x641 = -1682077;
	static uint64_t x642 = 823000LLU;
	volatile int32_t x643 = INT32_MIN;
	static volatile int32_t t114 = -73962403;

    t114 = (x641<=((x642*x643)>x644));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x645 = INT8_MAX;
	int64_t x646 = -1197837LL;
	uint16_t x647 = 11U;
	int32_t t115 = -802025;

    t115 = (x645<=((x646*x647)>x648));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x653 = UINT64_MAX;
	int8_t x654 = INT8_MAX;
	volatile int64_t x655 = 17036LL;
	static uint16_t x656 = 108U;
	int32_t t116 = 5299;

    t116 = (x653<=((x654*x655)>x656));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x657 = 0;
	uint16_t x659 = 5U;
	static int16_t x660 = -654;
	static volatile int32_t t117 = -264696;

    t117 = (x657<=((x658*x659)>x660));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x669 = 38197442442120LLU;
	uint16_t x670 = UINT16_MAX;
	uint8_t x671 = 1U;
	static int8_t x672 = INT8_MIN;
	static volatile int32_t t118 = -13;

    t118 = (x669<=((x670*x671)>x672));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x673 = UINT8_MAX;
	volatile uint32_t x675 = 10679U;
	int64_t x676 = INT64_MIN;
	volatile int32_t t119 = 108336543;

    t119 = (x673<=((x674*x675)>x676));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x678 = UINT16_MAX;
	static volatile int64_t x679 = -1LL;
	volatile uint8_t x680 = UINT8_MAX;
	int32_t t120 = 64629342;

    t120 = (x677<=((x678*x679)>x680));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x681 = INT32_MAX;
	volatile uint8_t x683 = 15U;
	volatile int64_t x684 = INT64_MIN;

    t121 = (x681<=((x682*x683)>x684));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint32_t x685 = UINT32_MAX;
	uint16_t x686 = 29106U;
	volatile int16_t x687 = INT16_MAX;
	int16_t x688 = -1968;
	static volatile int32_t t122 = -1007877;

    t122 = (x685<=((x686*x687)>x688));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x689 = -4874626LL;
	static int8_t x690 = INT8_MIN;
	volatile int8_t x691 = INT8_MIN;
	volatile int16_t x692 = 451;

    t123 = (x689<=((x690*x691)>x692));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static int16_t x697 = INT16_MIN;
	static uint16_t x698 = 0U;
	static volatile int8_t x700 = INT8_MIN;
	static int32_t t124 = 3;

    t124 = (x697<=((x698*x699)>x700));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x709 = INT32_MIN;
	uint16_t x710 = 1U;
	int32_t x711 = -1;
	uint8_t x712 = 1U;
	volatile int32_t t125 = 1;

    t125 = (x709<=((x710*x711)>x712));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int16_t x717 = -1;
	volatile int16_t x718 = -1470;
	int64_t x720 = INT64_MIN;
	int32_t t126 = -8;

    t126 = (x717<=((x718*x719)>x720));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x722 = 48186309LLU;
	static int8_t x724 = INT8_MIN;
	int32_t t127 = -1;

    t127 = (x721<=((x722*x723)>x724));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x729 = INT16_MIN;
	uint32_t x730 = UINT32_MAX;
	volatile int8_t x731 = INT8_MAX;
	static uint16_t x732 = 1759U;
	volatile int32_t t128 = -14168;

    t128 = (x729<=((x730*x731)>x732));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x737 = -1530LL;
	int16_t x738 = INT16_MIN;
	static volatile int64_t x739 = 10692LL;
	static int8_t x740 = INT8_MAX;
	static int32_t t129 = -7926105;

    t129 = (x737<=((x738*x739)>x740));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int64_t x741 = INT64_MIN;
	int64_t x742 = -1LL;
	uint32_t x744 = 31U;

    t130 = (x741<=((x742*x743)>x744));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x745 = INT64_MIN;
	int8_t x747 = INT8_MIN;
	int16_t x748 = INT16_MIN;
	volatile int32_t t131 = 1890;

    t131 = (x745<=((x746*x747)>x748));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x753 = INT32_MIN;
	int64_t x755 = INT64_MAX;
	uint32_t x756 = UINT32_MAX;
	volatile int32_t t132 = -298335;

    t132 = (x753<=((x754*x755)>x756));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x757 = INT32_MIN;
	volatile uint16_t x758 = 3352U;
	static int32_t x759 = -216;
	int16_t x760 = INT16_MIN;
	volatile int32_t t133 = 1;

    t133 = (x757<=((x758*x759)>x760));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x761 = 12U;
	int64_t x762 = -139544023842LL;
	static int16_t x763 = INT16_MAX;
	volatile int32_t x764 = -559580492;
	int32_t t134 = 9227078;

    t134 = (x761<=((x762*x763)>x764));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x769 = INT64_MIN;
	int16_t x770 = INT16_MIN;
	static uint32_t x771 = 11884U;
	uint32_t x772 = 396681567U;
	volatile int32_t t135 = -59;

    t135 = (x769<=((x770*x771)>x772));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x773 = 1;
	int8_t x774 = INT8_MIN;
	uint8_t x775 = UINT8_MAX;
	uint64_t x776 = UINT64_MAX;

    t136 = (x773<=((x774*x775)>x776));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int32_t x777 = INT32_MIN;
	volatile uint32_t x778 = UINT32_MAX;
	volatile uint16_t x779 = 0U;
	static uint16_t x780 = 1907U;
	int32_t t137 = -1298692;

    t137 = (x777<=((x778*x779)>x780));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile int8_t x781 = INT8_MIN;
	int16_t x782 = -1;
	uint8_t x784 = 7U;

    t138 = (x781<=((x782*x783)>x784));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x789 = INT32_MIN;
	static int16_t x790 = 2383;
	volatile uint32_t x792 = 1U;
	static volatile int32_t t139 = -32;

    t139 = (x789<=((x790*x791)>x792));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x793 = -13722687;
	int8_t x795 = -10;
	int16_t x796 = INT16_MAX;

    t140 = (x793<=((x794*x795)>x796));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x797 = -1;
	volatile int32_t x799 = 427;
	int32_t t141 = 1164374;

    t141 = (x797<=((x798*x799)>x800));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x802 = 59175495U;
	int32_t x803 = -1;
	uint8_t x804 = UINT8_MAX;
	int32_t t142 = 2521744;

    t142 = (x801<=((x802*x803)>x804));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x805 = UINT64_MAX;
	int32_t x806 = 20;
	int16_t x807 = INT16_MAX;
	volatile int32_t t143 = -8860;

    t143 = (x805<=((x806*x807)>x808));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x809 = 1826U;
	static int64_t x811 = 101990576LL;
	uint64_t x812 = UINT64_MAX;
	static int32_t t144 = -2961448;

    t144 = (x809<=((x810*x811)>x812));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x813 = 192006409U;
	volatile int8_t x814 = INT8_MAX;
	static volatile int8_t x815 = INT8_MAX;
	static volatile int32_t x816 = INT32_MIN;
	volatile int32_t t145 = -3187;

    t145 = (x813<=((x814*x815)>x816));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x822 = 238U;
	volatile int16_t x823 = -1;
	static uint32_t x824 = 0U;
	int32_t t146 = 5;

    t146 = (x821<=((x822*x823)>x824));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x825 = -1LL;
	uint32_t x827 = 3U;
	int32_t t147 = 519;

    t147 = (x825<=((x826*x827)>x828));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x829 = INT16_MAX;
	static uint64_t x830 = UINT64_MAX;
	int8_t x831 = INT8_MIN;

    t148 = (x829<=((x830*x831)>x832));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x833 = INT8_MAX;
	int64_t x834 = -1LL;
	int8_t x836 = INT8_MAX;
	static int32_t t149 = -607723;

    t149 = (x833<=((x834*x835)>x836));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x838 = 458893890057970LL;
	uint8_t x839 = 11U;
	uint16_t x840 = 78U;
	static volatile int32_t t150 = -24663787;

    t150 = (x837<=((x838*x839)>x840));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x841 = -1;
	static uint16_t x842 = UINT16_MAX;
	static int16_t x843 = -1;
	int8_t x844 = INT8_MIN;
	static volatile int32_t t151 = 0;

    t151 = (x841<=((x842*x843)>x844));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint64_t x849 = 8502690697445LLU;
	uint8_t x850 = UINT8_MAX;
	uint8_t x851 = 76U;
	static uint16_t x852 = 3U;
	int32_t t152 = 147;

    t152 = (x849<=((x850*x851)>x852));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x854 = -1;
	int64_t x855 = -63714258616927LL;
	static uint8_t x856 = 31U;
	int32_t t153 = 1996;

    t153 = (x853<=((x854*x855)>x856));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x857 = 100U;
	static uint16_t x858 = UINT16_MAX;
	uint32_t x859 = UINT32_MAX;
	volatile int32_t t154 = -2648;

    t154 = (x857<=((x858*x859)>x860));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x861 = -2;
	static int8_t x862 = -1;
	int8_t x863 = -1;
	int16_t x864 = -1;

    t155 = (x861<=((x862*x863)>x864));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x870 = 1;
	uint64_t x871 = UINT64_MAX;
	static int64_t x872 = INT64_MIN;
	volatile int32_t t156 = -91;

    t156 = (x869<=((x870*x871)>x872));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint8_t x873 = 11U;
	volatile uint64_t x874 = 85342LLU;
	int32_t x876 = 14;
	int32_t t157 = -623;

    t157 = (x873<=((x874*x875)>x876));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x877 = -6997762;
	uint32_t x878 = 2222530U;
	int64_t x880 = -182101316076763LL;
	static volatile int32_t t158 = 1;

    t158 = (x877<=((x878*x879)>x880));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x881 = 26;
	int16_t x882 = -3;
	static uint16_t x883 = 13437U;
	volatile int32_t t159 = 418936850;

    t159 = (x881<=((x882*x883)>x884));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint8_t x885 = UINT8_MAX;
	int16_t x886 = INT16_MAX;

    t160 = (x885<=((x886*x887)>x888));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x893 = -1;
	volatile int64_t x894 = INT64_MIN;
	uint64_t x895 = 103631LLU;
	static int8_t x896 = INT8_MAX;
	int32_t t161 = 5;

    t161 = (x893<=((x894*x895)>x896));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x898 = INT8_MIN;
	static volatile int16_t x899 = INT16_MAX;
	int8_t x900 = -1;
	static volatile int32_t t162 = 56843;

    t162 = (x897<=((x898*x899)>x900));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x901 = -1;
	int8_t x902 = 0;
	int8_t x904 = INT8_MIN;

    t163 = (x901<=((x902*x903)>x904));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x905 = INT64_MAX;
	int8_t x906 = INT8_MAX;
	int16_t x907 = 3818;
	int32_t t164 = 0;

    t164 = (x905<=((x906*x907)>x908));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x909 = 30640U;
	static int16_t x911 = INT16_MAX;
	static int64_t x912 = 1207224837692644921LL;
	int32_t t165 = 31;

    t165 = (x909<=((x910*x911)>x912));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x913 = 219LLU;
	int32_t x914 = 81363;
	volatile uint16_t x915 = 1U;
	uint16_t x916 = UINT16_MAX;
	volatile int32_t t166 = 2667355;

    t166 = (x913<=((x914*x915)>x916));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x917 = 801659089LL;
	int8_t x918 = 1;
	int64_t x919 = -8635034LL;
	int32_t t167 = 1;

    t167 = (x917<=((x918*x919)>x920));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x921 = -1LL;
	int32_t x922 = -7542242;
	static uint64_t x923 = 410950LLU;
	int32_t t168 = -19403;

    t168 = (x921<=((x922*x923)>x924));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x925 = UINT32_MAX;
	uint16_t x926 = 1055U;
	int8_t x927 = INT8_MIN;
	volatile int32_t t169 = -398566;

    t169 = (x925<=((x926*x927)>x928));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x929 = 404;
	volatile int16_t x932 = INT16_MIN;

    t170 = (x929<=((x930*x931)>x932));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x942 = -388398085LL;
	volatile int16_t x944 = 8;
	volatile int32_t t171 = -91474086;

    t171 = (x941<=((x942*x943)>x944));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x949 = 2U;
	static int8_t x950 = -1;
	int64_t x951 = 10483430058075687LL;
	volatile int32_t t172 = 12193428;

    t172 = (x949<=((x950*x951)>x952));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x954 = -1;

    t173 = (x953<=((x954*x955)>x956));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x958 = 5;
	int8_t x959 = -1;
	volatile int8_t x960 = INT8_MIN;
	volatile int32_t t174 = -73623;

    t174 = (x957<=((x958*x959)>x960));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int16_t x961 = -1;
	volatile int16_t x962 = INT16_MIN;
	static uint32_t x963 = 39890999U;
	int32_t t175 = -97465;

    t175 = (x961<=((x962*x963)>x964));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x967 = 8828U;
	int64_t x968 = INT64_MIN;
	volatile int32_t t176 = -3572;

    t176 = (x965<=((x966*x967)>x968));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x974 = 341886533448157515LL;
	int64_t x975 = 0LL;
	uint64_t x976 = 16714763796995LLU;
	volatile int32_t t177 = 43041;

    t177 = (x973<=((x974*x975)>x976));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x977 = INT16_MAX;
	uint8_t x979 = 11U;
	int8_t x980 = INT8_MIN;
	volatile int32_t t178 = 10;

    t178 = (x977<=((x978*x979)>x980));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int32_t x981 = -23586;
	static volatile int8_t x983 = INT8_MIN;
	volatile int32_t x984 = -1;
	static int32_t t179 = -216321;

    t179 = (x981<=((x982*x983)>x984));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x995 = 1U;
	uint32_t x996 = UINT32_MAX;

    t180 = (x993<=((x994*x995)>x996));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x997 = -6094621797760043LL;
	uint8_t x998 = 8U;
	int16_t x999 = 745;
	int64_t x1000 = INT64_MIN;
	static volatile int32_t t181 = -111;

    t181 = (x997<=((x998*x999)>x1000));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile int16_t x1001 = -18;
	uint8_t x1003 = 1U;
	static uint16_t x1004 = UINT16_MAX;
	volatile int32_t t182 = 41442887;

    t182 = (x1001<=((x1002*x1003)>x1004));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x1012 = -1;

    t183 = (x1009<=((x1010*x1011)>x1012));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x1017 = 2U;
	int32_t x1019 = 4493;
	volatile uint32_t x1020 = UINT32_MAX;
	volatile int32_t t184 = -55644;

    t184 = (x1017<=((x1018*x1019)>x1020));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x1021 = INT64_MIN;
	int64_t x1023 = INT64_MIN;
	volatile int8_t x1024 = -27;
	volatile int32_t t185 = -62;

    t185 = (x1021<=((x1022*x1023)>x1024));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x1025 = UINT8_MAX;
	uint16_t x1026 = 138U;
	int16_t x1027 = INT16_MIN;
	volatile int8_t x1028 = -1;
	volatile int32_t t186 = -58670;

    t186 = (x1025<=((x1026*x1027)>x1028));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x1029 = UINT64_MAX;
	uint64_t x1030 = 214588396LLU;
	int8_t x1031 = INT8_MIN;
	static uint64_t x1032 = 22142779LLU;
	volatile int32_t t187 = 503;

    t187 = (x1029<=((x1030*x1031)>x1032));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x1033 = INT16_MAX;
	uint64_t x1034 = 341417783LLU;
	int64_t x1035 = -14434573126442212LL;
	uint8_t x1036 = 93U;
	volatile int32_t t188 = -897459;

    t188 = (x1033<=((x1034*x1035)>x1036));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int32_t x1037 = INT32_MIN;
	volatile int8_t x1038 = -1;
	int32_t x1040 = INT32_MIN;

    t189 = (x1037<=((x1038*x1039)>x1040));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x1042 = INT16_MAX;
	int32_t t190 = 13131;

    t190 = (x1041<=((x1042*x1043)>x1044));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int16_t x1045 = INT16_MIN;
	int8_t x1046 = 19;
	int64_t x1048 = 94136518LL;
	int32_t t191 = -110562;

    t191 = (x1045<=((x1046*x1047)>x1048));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint64_t x1057 = UINT64_MAX;
	int8_t x1058 = INT8_MIN;
	static uint16_t x1059 = UINT16_MAX;
	volatile uint8_t x1060 = UINT8_MAX;

    t192 = (x1057<=((x1058*x1059)>x1060));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int8_t x1061 = -1;
	int8_t x1062 = 1;
	uint8_t x1063 = 12U;
	int8_t x1064 = INT8_MIN;
	volatile int32_t t193 = -1872;

    t193 = (x1061<=((x1062*x1063)>x1064));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x1073 = -3;
	int16_t x1075 = -1;
	int8_t x1076 = -3;
	int32_t t194 = 117707156;

    t194 = (x1073<=((x1074*x1075)>x1076));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x1077 = -18;
	int32_t x1078 = INT32_MAX;
	static uint32_t x1079 = 63965U;
	volatile int8_t x1080 = 3;
	static int32_t t195 = 3555054;

    t195 = (x1077<=((x1078*x1079)>x1080));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int8_t x1081 = INT8_MAX;
	static int16_t x1083 = -16;
	static int32_t t196 = -20;

    t196 = (x1081<=((x1082*x1083)>x1084));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint64_t x1090 = 1986701014LLU;
	int32_t t197 = -57;

    t197 = (x1089<=((x1090*x1091)>x1092));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint16_t x1093 = UINT16_MAX;
	uint64_t x1095 = 2LLU;
	volatile int32_t t198 = 710984;

    t198 = (x1093<=((x1094*x1095)>x1096));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x1097 = -165480269502LL;
	static int32_t x1098 = INT32_MAX;
	uint64_t x1099 = 1498763658629971LLU;
	volatile int32_t x1100 = INT32_MAX;

    t199 = (x1097<=((x1098*x1099)>x1100));

    if (t199 != 1) { NG(); } else { ; }
	
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

