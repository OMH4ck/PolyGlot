
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

int32_t x12 = -123;
uint8_t x15 = 0U;
static uint8_t x19 = 0U;
int16_t x20 = -46;
int32_t t3 = 1003903;
volatile uint8_t x37 = 73U;
int32_t t4 = 1011333;
volatile int32_t t5 = 0;
static int64_t x45 = INT64_MIN;
static uint8_t x46 = 7U;
int16_t x48 = INT16_MIN;
uint32_t x50 = 57U;
volatile int8_t x54 = -1;
static int8_t x57 = INT8_MIN;
volatile uint64_t x60 = 86057268457326776LLU;
volatile int32_t t9 = -343589365;
int16_t x66 = 106;
int16_t x68 = INT16_MAX;
int32_t t13 = 473;
static int32_t x85 = INT32_MIN;
static volatile int32_t t14 = -14041;
volatile int32_t x89 = INT32_MIN;
int16_t x109 = INT16_MAX;
int8_t x113 = INT8_MIN;
int8_t x119 = -1;
int32_t x121 = -7765;
uint32_t x122 = 1773329U;
volatile int32_t t19 = -487438878;
int64_t x127 = -1LL;
int16_t x132 = INT16_MIN;
volatile int8_t x134 = -1;
uint64_t x135 = 1LLU;
static int64_t x136 = -379770LL;
int8_t x147 = INT8_MAX;
volatile int16_t x148 = INT16_MIN;
volatile int32_t t24 = 6791;
volatile int16_t x153 = 2;
int32_t x157 = 598276;
int16_t x172 = -2;
int32_t t29 = -381;
int32_t x178 = -3916271;
int64_t x180 = -1LL;
int32_t t30 = -48760240;
static int32_t x188 = -1;
uint64_t x190 = UINT64_MAX;
int32_t x197 = INT32_MIN;
int16_t x199 = -2217;
int32_t t36 = -14;
static volatile int32_t t38 = 822246;
uint64_t x227 = UINT64_MAX;
uint16_t x230 = UINT16_MAX;
static int32_t x233 = INT32_MIN;
int16_t x234 = INT16_MIN;
volatile int8_t x235 = -1;
int32_t x237 = INT32_MIN;
int32_t x246 = 132;
uint64_t x248 = UINT64_MAX;
int64_t x272 = INT64_MIN;
volatile int32_t t50 = -3;
int8_t x276 = INT8_MIN;
int32_t x282 = INT32_MIN;
static int32_t x285 = -136;
uint32_t x286 = 479469U;
volatile int32_t t54 = -19;
int8_t x294 = INT8_MIN;
volatile int8_t x295 = -1;
int32_t t55 = -216;
int8_t x308 = -1;
int16_t x310 = 15335;
volatile int32_t t61 = -400447771;
uint32_t x343 = 5U;
int32_t x344 = 4;
int32_t x353 = INT32_MIN;
uint32_t x356 = UINT32_MAX;
volatile int16_t x366 = INT16_MIN;
int16_t x371 = INT16_MAX;
volatile int32_t x380 = INT32_MIN;
uint8_t x382 = 13U;
int8_t x387 = -1;
static volatile int32_t t75 = 36;
volatile int32_t t76 = 102014959;
int16_t x413 = 7963;
volatile int64_t x415 = -1908856560368LL;
int16_t x420 = -1;
static int32_t t78 = -561;
uint16_t x421 = 141U;
int32_t x422 = 273;
volatile int32_t t79 = -435;
uint64_t x426 = 21927968326037LLU;
int32_t t83 = -2748;
int32_t t85 = 32060401;
int32_t x460 = INT32_MAX;
volatile int64_t x462 = -1LL;
static int8_t x474 = -1;
volatile int8_t x475 = 1;
int64_t x485 = INT64_MIN;
volatile uint8_t x486 = 1U;
int16_t x487 = -47;
static int64_t x488 = INT64_MIN;
static int16_t x491 = -1;
static int8_t x492 = 43;
uint8_t x506 = UINT8_MAX;
static int64_t x508 = 144977LL;
uint16_t x526 = UINT16_MAX;
uint32_t x527 = 6U;
uint64_t x531 = 6047LLU;
static int8_t x534 = -27;
volatile int8_t x541 = INT8_MIN;
static int16_t x542 = INT16_MIN;
volatile int32_t t102 = -1419685;
uint8_t x558 = 3U;
int32_t t105 = -871042;
static int16_t x571 = -9;
int16_t x581 = INT16_MIN;
int8_t x582 = 47;
int64_t x609 = 50022989605027942LL;
int32_t t116 = 10697;
int64_t x616 = INT64_MAX;
int8_t x617 = INT8_MIN;
static int32_t t119 = 8063328;
uint8_t x634 = 54U;
volatile uint8_t x635 = 1U;
volatile int32_t t121 = 1207719;
volatile int32_t x645 = -979318684;
int32_t x646 = -1683;
uint32_t x648 = 27088710U;
static int8_t x651 = 3;
static int32_t t125 = 707413394;
volatile int8_t x660 = INT8_MIN;
volatile int32_t x665 = INT32_MIN;
static uint8_t x667 = 29U;
int8_t x671 = INT8_MAX;
uint64_t x676 = 1823121797601LLU;
int16_t x704 = -19;
volatile uint8_t x714 = 67U;
int8_t x718 = INT8_MIN;
static volatile int16_t x719 = -1;
int32_t x720 = -1;
static uint64_t x721 = 7569263LLU;
uint32_t x722 = 3U;
static volatile uint16_t x723 = 21604U;
volatile int32_t t139 = 15264;
int64_t x732 = -2LL;
int32_t t142 = 18;
int8_t x746 = INT8_MAX;
int8_t x747 = INT8_MIN;
int8_t x754 = -1;
volatile int32_t t144 = 130625;
int8_t x764 = INT8_MAX;
int32_t x774 = -1;
int32_t x780 = 10427669;
int32_t t147 = -300162;
uint32_t x791 = UINT32_MAX;
int8_t x797 = INT8_MIN;
int8_t x798 = -1;
uint16_t x801 = UINT16_MAX;
int32_t t150 = -9;
volatile int32_t t151 = -422368;
static volatile int32_t t152 = 84788916;
int32_t x813 = -1;
volatile int32_t t153 = 19903;
int16_t x821 = INT16_MIN;
int32_t x839 = -1518;
uint16_t x840 = 6U;
int16_t x842 = INT16_MAX;
volatile int8_t x843 = -6;
int16_t x844 = -1;
static volatile int32_t t156 = 25991;
int64_t x849 = -701367892816681567LL;
static volatile int32_t x852 = INT32_MIN;
int64_t x857 = INT64_MIN;
int32_t x858 = INT32_MIN;
volatile uint64_t x864 = UINT64_MAX;
uint64_t x869 = 3812399589543LLU;
int32_t t161 = -5245927;
int8_t x886 = -13;
uint16_t x897 = UINT16_MAX;
volatile int16_t x899 = -1;
volatile uint8_t x902 = 1U;
int64_t x905 = INT64_MIN;
int64_t x906 = -1LL;
volatile int32_t t167 = 21;
uint32_t x909 = UINT32_MAX;
int8_t x912 = 1;
int32_t x920 = INT32_MAX;
int64_t x931 = -23404449149373953LL;
static int8_t x932 = -5;
static volatile uint16_t x934 = 56U;
uint16_t x949 = 17595U;
int32_t x957 = -44107;
uint32_t x962 = 35918U;
int32_t t177 = 1196504;
volatile int32_t t178 = -61;
static int32_t x977 = INT32_MAX;
volatile uint16_t x979 = 5U;
static volatile int32_t x981 = 805;
static int8_t x1001 = INT8_MIN;
static volatile uint64_t x1027 = UINT64_MAX;
int32_t t188 = 34;
uint8_t x1044 = 20U;
int8_t x1048 = -3;
int32_t x1049 = INT32_MIN;
uint64_t x1050 = UINT64_MAX;
uint64_t x1054 = 1029872LLU;
int32_t t194 = 456713239;
static uint64_t x1074 = 1535756188LLU;
uint32_t x1075 = 26886646U;
uint8_t x1086 = 0U;


void f0(void) {
    	uint32_t x9 = UINT32_MAX;
	uint8_t x10 = 0U;
	int16_t x11 = INT16_MIN;
	volatile int32_t t0 = 20;

    t0 = (x9==((x10*x11)/x12));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x13 = -97134909300292905LL;
	uint16_t x14 = 8U;
	int32_t x16 = 95341710;
	int32_t t1 = -3395805;

    t1 = (x13==((x14*x15)/x16));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x17 = 2875139LLU;
	int16_t x18 = INT16_MIN;
	volatile int32_t t2 = -29;

    t2 = (x17==((x18*x19)/x20));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x21 = INT8_MAX;
	int16_t x22 = INT16_MIN;
	volatile int16_t x23 = 29;
	static int64_t x24 = 889003774953603LL;

    t3 = (x21==((x22*x23)/x24));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x38 = 5104U;
	uint64_t x39 = 1467LLU;
	int64_t x40 = INT64_MIN;

    t4 = (x37==((x38*x39)/x40));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x41 = INT32_MIN;
	uint64_t x42 = 83970315LLU;
	int16_t x43 = INT16_MIN;
	uint8_t x44 = 12U;

    t5 = (x41==((x42*x43)/x44));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x47 = 708U;
	volatile int32_t t6 = -2;

    t6 = (x45==((x46*x47)/x48));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x49 = 515406302637LLU;
	uint16_t x51 = UINT16_MAX;
	int32_t x52 = -1;
	volatile int32_t t7 = 62197;

    t7 = (x49==((x50*x51)/x52));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x53 = -1;
	int16_t x55 = INT16_MAX;
	int8_t x56 = INT8_MIN;
	int32_t t8 = 474944;

    t8 = (x53==((x54*x55)/x56));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x58 = -1070;
	int16_t x59 = -1;

    t9 = (x57==((x58*x59)/x60));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x61 = -372;
	volatile int16_t x62 = INT16_MIN;
	int8_t x63 = INT8_MIN;
	int8_t x64 = INT8_MIN;
	int32_t t10 = -2751793;

    t10 = (x61==((x62*x63)/x64));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x65 = 0;
	uint64_t x67 = 12824294491671914LLU;
	int32_t t11 = -1115395;

    t11 = (x65==((x66*x67)/x68));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x69 = 55670LL;
	static uint8_t x70 = 15U;
	int8_t x71 = 0;
	static int8_t x72 = INT8_MAX;
	static volatile int32_t t12 = 35;

    t12 = (x69==((x70*x71)/x72));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x77 = INT8_MIN;
	uint64_t x78 = 5250221213491351277LLU;
	int16_t x79 = -1;
	int8_t x80 = INT8_MAX;

    t13 = (x77==((x78*x79)/x80));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint32_t x86 = 809U;
	volatile int32_t x87 = -70985;
	volatile uint32_t x88 = UINT32_MAX;

    t14 = (x85==((x86*x87)/x88));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x90 = 90208407418262LL;
	static int16_t x91 = 144;
	volatile int64_t x92 = INT64_MAX;
	static int32_t t15 = -52;

    t15 = (x89==((x90*x91)/x92));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x110 = INT16_MIN;
	int16_t x111 = -7;
	int8_t x112 = -57;
	int32_t t16 = -465;

    t16 = (x109==((x110*x111)/x112));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int32_t x114 = -2896;
	static int64_t x115 = 127459304259LL;
	static uint64_t x116 = 15749614LLU;
	static int32_t t17 = 10582115;

    t17 = (x113==((x114*x115)/x116));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x117 = INT8_MIN;
	int32_t x118 = 797;
	static uint8_t x120 = UINT8_MAX;
	volatile int32_t t18 = -22;

    t18 = (x117==((x118*x119)/x120));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x123 = INT8_MIN;
	static volatile uint64_t x124 = 1525LLU;

    t19 = (x121==((x122*x123)/x124));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint16_t x125 = UINT16_MAX;
	int32_t x126 = -1;
	int16_t x128 = INT16_MIN;
	volatile int32_t t20 = 6;

    t20 = (x125==((x126*x127)/x128));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x129 = 84;
	int64_t x130 = -1LL;
	uint16_t x131 = 7U;
	static int32_t t21 = 437858;

    t21 = (x129==((x130*x131)/x132));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x133 = 1U;
	int32_t t22 = -327484;

    t22 = (x133==((x134*x135)/x136));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x141 = INT32_MIN;
	int8_t x142 = INT8_MIN;
	int16_t x143 = -5;
	uint64_t x144 = UINT64_MAX;
	int32_t t23 = 32429;

    t23 = (x141==((x142*x143)/x144));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x145 = 7;
	int8_t x146 = INT8_MIN;

    t24 = (x145==((x146*x147)/x148));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int8_t x154 = INT8_MIN;
	volatile uint8_t x155 = UINT8_MAX;
	volatile uint16_t x156 = UINT16_MAX;
	int32_t t25 = -29819129;

    t25 = (x153==((x154*x155)/x156));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x158 = 12978LLU;
	uint16_t x159 = 2287U;
	static int16_t x160 = 9;
	int32_t t26 = -3;

    t26 = (x157==((x158*x159)/x160));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x165 = INT32_MIN;
	volatile uint32_t x166 = 150471U;
	static volatile int16_t x167 = INT16_MIN;
	int16_t x168 = INT16_MIN;
	volatile int32_t t27 = 44373271;

    t27 = (x165==((x166*x167)/x168));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x169 = -1;
	uint8_t x170 = 3U;
	int8_t x171 = INT8_MIN;
	int32_t t28 = -3198;

    t28 = (x169==((x170*x171)/x172));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint32_t x173 = UINT32_MAX;
	int16_t x174 = INT16_MIN;
	volatile int32_t x175 = -43738;
	volatile int8_t x176 = INT8_MAX;

    t29 = (x173==((x174*x175)/x176));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x177 = -1;
	static int16_t x179 = -303;

    t30 = (x177==((x178*x179)/x180));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x181 = INT64_MIN;
	int16_t x182 = 6;
	int8_t x183 = -1;
	int8_t x184 = INT8_MIN;
	int32_t t31 = 92833970;

    t31 = (x181==((x182*x183)/x184));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x185 = -1824289LL;
	int8_t x186 = -1;
	uint32_t x187 = 1425512U;
	static int32_t t32 = 82;

    t32 = (x185==((x186*x187)/x188));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x189 = UINT64_MAX;
	static int64_t x191 = INT64_MAX;
	int16_t x192 = 1436;
	static volatile int32_t t33 = 3;

    t33 = (x189==((x190*x191)/x192));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint8_t x193 = 79U;
	uint16_t x194 = UINT16_MAX;
	int8_t x195 = 54;
	int16_t x196 = INT16_MAX;
	volatile int32_t t34 = -20729815;

    t34 = (x193==((x194*x195)/x196));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x198 = -273;
	int32_t x200 = INT32_MIN;
	volatile int32_t t35 = -75893;

    t35 = (x197==((x198*x199)/x200));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x205 = -7;
	volatile uint32_t x206 = UINT32_MAX;
	int8_t x207 = INT8_MAX;
	int8_t x208 = INT8_MIN;

    t36 = (x205==((x206*x207)/x208));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x209 = 66U;
	int64_t x210 = -1583809818439LL;
	int16_t x211 = -8;
	int64_t x212 = 143558LL;
	volatile int32_t t37 = 12721281;

    t37 = (x209==((x210*x211)/x212));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x213 = 1;
	uint64_t x214 = 8434949558LLU;
	int16_t x215 = 0;
	volatile int64_t x216 = INT64_MAX;

    t38 = (x213==((x214*x215)/x216));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x217 = -1LL;
	static uint8_t x218 = 3U;
	int8_t x219 = INT8_MAX;
	int16_t x220 = INT16_MIN;
	volatile int32_t t39 = -20415;

    t39 = (x217==((x218*x219)/x220));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint64_t x225 = 8357537514585836655LLU;
	int16_t x226 = -1;
	uint8_t x228 = 1U;
	int32_t t40 = -172171506;

    t40 = (x225==((x226*x227)/x228));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x229 = INT16_MIN;
	volatile uint8_t x231 = UINT8_MAX;
	uint8_t x232 = UINT8_MAX;
	volatile int32_t t41 = -4278746;

    t41 = (x229==((x230*x231)/x232));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x236 = -1;
	int32_t t42 = 1;

    t42 = (x233==((x234*x235)/x236));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x238 = -1LL;
	static int16_t x239 = -1;
	volatile int16_t x240 = INT16_MIN;
	static int32_t t43 = 195793112;

    t43 = (x237==((x238*x239)/x240));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x241 = INT64_MIN;
	int64_t x242 = INT64_MAX;
	int64_t x243 = -1LL;
	volatile int8_t x244 = INT8_MIN;
	int32_t t44 = 816;

    t44 = (x241==((x242*x243)/x244));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x245 = -1;
	int8_t x247 = -1;
	static volatile int32_t t45 = -35689059;

    t45 = (x245==((x246*x247)/x248));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x253 = UINT8_MAX;
	volatile uint64_t x254 = 40346538160LLU;
	uint32_t x255 = UINT32_MAX;
	uint8_t x256 = 19U;
	volatile int32_t t46 = -5;

    t46 = (x253==((x254*x255)/x256));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint64_t x257 = 389758280321914051LLU;
	int32_t x258 = -595;
	int32_t x259 = 8367;
	volatile int8_t x260 = INT8_MIN;
	static int32_t t47 = 1;

    t47 = (x257==((x258*x259)/x260));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x261 = INT8_MIN;
	volatile int64_t x262 = INT64_MAX;
	uint32_t x263 = 1U;
	int8_t x264 = 1;
	int32_t t48 = 454494319;

    t48 = (x261==((x262*x263)/x264));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int32_t x265 = 1925835;
	uint64_t x266 = UINT64_MAX;
	int8_t x267 = -1;
	int8_t x268 = 1;
	volatile int32_t t49 = -521140;

    t49 = (x265==((x266*x267)/x268));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x269 = INT64_MAX;
	int8_t x270 = -14;
	int16_t x271 = -1;

    t50 = (x269==((x270*x271)/x272));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x273 = 5;
	uint8_t x274 = 54U;
	uint16_t x275 = 5441U;
	int32_t t51 = -7;

    t51 = (x273==((x274*x275)/x276));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x281 = INT16_MIN;
	int64_t x283 = 2215236LL;
	volatile uint8_t x284 = UINT8_MAX;
	volatile int32_t t52 = 71;

    t52 = (x281==((x282*x283)/x284));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x287 = INT32_MIN;
	int64_t x288 = INT64_MAX;
	volatile int32_t t53 = 0;

    t53 = (x285==((x286*x287)/x288));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x289 = 5;
	volatile uint32_t x290 = 53322988U;
	static int32_t x291 = INT32_MAX;
	int64_t x292 = INT64_MAX;

    t54 = (x289==((x290*x291)/x292));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x293 = -1LL;
	static int64_t x296 = 47673321359372LL;

    t55 = (x293==((x294*x295)/x296));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x297 = 55;
	int16_t x298 = -1;
	int8_t x299 = -1;
	uint32_t x300 = UINT32_MAX;
	int32_t t56 = -13648;

    t56 = (x297==((x298*x299)/x300));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x305 = 0LLU;
	int32_t x306 = -1;
	volatile uint8_t x307 = 7U;
	static volatile int32_t t57 = -341;

    t57 = (x305==((x306*x307)/x308));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x309 = UINT32_MAX;
	volatile uint16_t x311 = 13U;
	int8_t x312 = INT8_MIN;
	static int32_t t58 = 24955;

    t58 = (x309==((x310*x311)/x312));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x317 = -1;
	uint16_t x318 = 3U;
	uint16_t x319 = 8579U;
	static int8_t x320 = -1;
	volatile int32_t t59 = -2993;

    t59 = (x317==((x318*x319)/x320));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x325 = -1;
	volatile int64_t x326 = -1LL;
	int8_t x327 = -17;
	volatile int16_t x328 = -14626;
	int32_t t60 = -101289;

    t60 = (x325==((x326*x327)/x328));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x329 = 48U;
	uint16_t x330 = UINT16_MAX;
	static uint8_t x331 = 9U;
	volatile int64_t x332 = 1036363302LL;

    t61 = (x329==((x330*x331)/x332));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x333 = -1;
	int8_t x334 = INT8_MIN;
	int8_t x335 = INT8_MIN;
	uint64_t x336 = UINT64_MAX;
	int32_t t62 = -4157351;

    t62 = (x333==((x334*x335)/x336));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x337 = -1;
	int16_t x338 = -1;
	uint32_t x339 = 769406U;
	int32_t x340 = 234;
	volatile int32_t t63 = 100465;

    t63 = (x337==((x338*x339)/x340));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x341 = INT64_MIN;
	volatile int8_t x342 = INT8_MAX;
	int32_t t64 = -23175909;

    t64 = (x341==((x342*x343)/x344));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x345 = UINT32_MAX;
	volatile uint64_t x346 = 616631891307LLU;
	uint64_t x347 = UINT64_MAX;
	volatile int64_t x348 = 46096109158864LL;
	volatile int32_t t65 = 273;

    t65 = (x345==((x346*x347)/x348));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint64_t x354 = 30506639084974LLU;
	volatile int64_t x355 = 7766429LL;
	volatile int32_t t66 = -581040;

    t66 = (x353==((x354*x355)/x356));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x357 = -25382705LL;
	int16_t x358 = INT16_MAX;
	int64_t x359 = -233LL;
	int32_t x360 = -1;
	static int32_t t67 = -14414696;

    t67 = (x357==((x358*x359)/x360));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x361 = INT16_MIN;
	uint16_t x362 = 54U;
	int8_t x363 = INT8_MAX;
	volatile int32_t x364 = INT32_MIN;
	static volatile int32_t t68 = -606419;

    t68 = (x361==((x362*x363)/x364));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x365 = -1;
	uint64_t x367 = 113201483724LLU;
	static uint8_t x368 = UINT8_MAX;
	volatile int32_t t69 = -24538;

    t69 = (x365==((x366*x367)/x368));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x369 = -1118;
	uint8_t x370 = 14U;
	static uint16_t x372 = 15241U;
	static volatile int32_t t70 = -130991;

    t70 = (x369==((x370*x371)/x372));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x373 = 2U;
	volatile uint8_t x374 = 42U;
	uint32_t x375 = 1495420U;
	int32_t x376 = INT32_MAX;
	int32_t t71 = -91550910;

    t71 = (x373==((x374*x375)/x376));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x377 = INT8_MIN;
	uint16_t x378 = 0U;
	volatile uint32_t x379 = 473475118U;
	volatile int32_t t72 = 99994;

    t72 = (x377==((x378*x379)/x380));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x381 = INT8_MIN;
	int64_t x383 = -8272LL;
	int16_t x384 = -1;
	int32_t t73 = -25;

    t73 = (x381==((x382*x383)/x384));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x385 = INT16_MIN;
	int64_t x386 = 185LL;
	int8_t x388 = 1;
	volatile int32_t t74 = -818;

    t74 = (x385==((x386*x387)/x388));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int32_t x389 = 141008369;
	uint64_t x390 = 1016760101996900112LLU;
	volatile uint16_t x391 = 16U;
	volatile int8_t x392 = -46;

    t75 = (x389==((x390*x391)/x392));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x393 = -1LL;
	uint16_t x394 = 5851U;
	volatile int8_t x395 = INT8_MIN;
	static uint8_t x396 = UINT8_MAX;

    t76 = (x393==((x394*x395)/x396));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint32_t x414 = 1U;
	int64_t x416 = 289862592779889LL;
	int32_t t77 = 1;

    t77 = (x413==((x414*x415)/x416));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x417 = INT32_MIN;
	uint64_t x418 = 1844LLU;
	static uint32_t x419 = 1120U;

    t78 = (x417==((x418*x419)/x420));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint32_t x423 = UINT32_MAX;
	volatile uint8_t x424 = UINT8_MAX;

    t79 = (x421==((x422*x423)/x424));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x425 = -6;
	int32_t x427 = INT32_MAX;
	static int64_t x428 = INT64_MIN;
	int32_t t80 = 145004793;

    t80 = (x425==((x426*x427)/x428));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x429 = INT16_MIN;
	uint8_t x430 = UINT8_MAX;
	int16_t x431 = -1;
	volatile int8_t x432 = INT8_MAX;
	volatile int32_t t81 = -235706440;

    t81 = (x429==((x430*x431)/x432));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x437 = INT8_MIN;
	static int16_t x438 = -235;
	int32_t x439 = -1;
	int32_t x440 = -1;
	int32_t t82 = -1779995;

    t82 = (x437==((x438*x439)/x440));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x441 = -39LL;
	int8_t x442 = -1;
	static volatile int32_t x443 = INT32_MAX;
	int64_t x444 = -1LL;

    t83 = (x441==((x442*x443)/x444));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x449 = 2U;
	int16_t x450 = 3522;
	volatile uint32_t x451 = 1541U;
	int16_t x452 = -353;
	volatile int32_t t84 = 710400;

    t84 = (x449==((x450*x451)/x452));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x453 = INT32_MIN;
	static int64_t x454 = -9LL;
	int16_t x455 = -1;
	int32_t x456 = INT32_MIN;

    t85 = (x453==((x454*x455)/x456));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x457 = -2434LL;
	volatile uint64_t x458 = UINT64_MAX;
	int64_t x459 = INT64_MIN;
	int32_t t86 = 3940198;

    t86 = (x457==((x458*x459)/x460));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint8_t x461 = UINT8_MAX;
	static uint8_t x463 = 0U;
	int64_t x464 = -267378690LL;
	volatile int32_t t87 = -1884573;

    t87 = (x461==((x462*x463)/x464));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x473 = -1LL;
	static int16_t x476 = INT16_MIN;
	int32_t t88 = 14;

    t88 = (x473==((x474*x475)/x476));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int8_t x477 = INT8_MAX;
	int16_t x478 = -1;
	volatile uint8_t x479 = 5U;
	static uint16_t x480 = 84U;
	int32_t t89 = 15802;

    t89 = (x477==((x478*x479)/x480));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x481 = INT32_MAX;
	volatile uint64_t x482 = UINT64_MAX;
	uint64_t x483 = UINT64_MAX;
	int32_t x484 = INT32_MAX;
	volatile int32_t t90 = 5860;

    t90 = (x481==((x482*x483)/x484));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int32_t t91 = -1;

    t91 = (x485==((x486*x487)/x488));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x489 = -1LL;
	int8_t x490 = 48;
	volatile int32_t t92 = -26;

    t92 = (x489==((x490*x491)/x492));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x493 = INT32_MAX;
	volatile int16_t x494 = INT16_MIN;
	volatile int32_t x495 = -1;
	static int64_t x496 = INT64_MAX;
	int32_t t93 = 164956206;

    t93 = (x493==((x494*x495)/x496));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x497 = UINT64_MAX;
	int16_t x498 = INT16_MAX;
	int32_t x499 = -1;
	static uint8_t x500 = UINT8_MAX;
	int32_t t94 = 200;

    t94 = (x497==((x498*x499)/x500));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint8_t x505 = 123U;
	static int16_t x507 = INT16_MAX;
	int32_t t95 = 161;

    t95 = (x505==((x506*x507)/x508));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x513 = 231012U;
	volatile int8_t x514 = -1;
	int8_t x515 = INT8_MAX;
	uint16_t x516 = UINT16_MAX;
	volatile int32_t t96 = -220719364;

    t96 = (x513==((x514*x515)/x516));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x525 = 0;
	uint64_t x528 = 5282213141127LLU;
	int32_t t97 = -8219;

    t97 = (x525==((x526*x527)/x528));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x529 = 21965265U;
	uint8_t x530 = 0U;
	volatile uint8_t x532 = UINT8_MAX;
	static int32_t t98 = 891048717;

    t98 = (x529==((x530*x531)/x532));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x533 = 359596967LL;
	static uint32_t x535 = UINT32_MAX;
	uint16_t x536 = 26784U;
	volatile int32_t t99 = -127372811;

    t99 = (x533==((x534*x535)/x536));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint32_t x537 = 485604991U;
	int16_t x538 = -1;
	int32_t x539 = INT32_MAX;
	static volatile uint32_t x540 = 2023032799U;
	volatile int32_t t100 = -867108;

    t100 = (x537==((x538*x539)/x540));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x543 = 0;
	volatile int32_t x544 = 1;
	volatile int32_t t101 = 500;

    t101 = (x541==((x542*x543)/x544));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x545 = INT8_MIN;
	static volatile uint16_t x546 = 33U;
	int32_t x547 = 137;
	static int16_t x548 = -1;

    t102 = (x545==((x546*x547)/x548));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x549 = UINT16_MAX;
	uint32_t x550 = 0U;
	int16_t x551 = INT16_MIN;
	int8_t x552 = -27;
	int32_t t103 = -3859398;

    t103 = (x549==((x550*x551)/x552));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x553 = -1;
	static volatile int32_t x554 = -12;
	int16_t x555 = -1;
	int64_t x556 = INT64_MIN;
	int32_t t104 = -30703;

    t104 = (x553==((x554*x555)/x556));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x557 = UINT32_MAX;
	int16_t x559 = -1;
	volatile int32_t x560 = 831699088;

    t105 = (x557==((x558*x559)/x560));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x565 = UINT64_MAX;
	int32_t x566 = -461496;
	uint64_t x567 = 256070LLU;
	static volatile int64_t x568 = INT64_MAX;
	volatile int32_t t106 = 152329770;

    t106 = (x565==((x566*x567)/x568));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint64_t x569 = 28502248LLU;
	int32_t x570 = 1770938;
	uint8_t x572 = UINT8_MAX;
	int32_t t107 = 36296229;

    t107 = (x569==((x570*x571)/x572));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x573 = INT8_MIN;
	static int32_t x574 = 1;
	volatile int8_t x575 = INT8_MIN;
	volatile int64_t x576 = -26120591680LL;
	int32_t t108 = 231;

    t108 = (x573==((x574*x575)/x576));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x577 = INT32_MIN;
	static volatile uint16_t x578 = UINT16_MAX;
	uint32_t x579 = 13052U;
	volatile uint16_t x580 = 933U;
	int32_t t109 = 415;

    t109 = (x577==((x578*x579)/x580));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int8_t x583 = -63;
	uint32_t x584 = 85676U;
	static int32_t t110 = -259;

    t110 = (x581==((x582*x583)/x584));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x585 = -1;
	static int8_t x586 = -1;
	uint16_t x587 = UINT16_MAX;
	uint64_t x588 = 14033284678685038LLU;
	volatile int32_t t111 = 423366;

    t111 = (x585==((x586*x587)/x588));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x589 = 50;
	volatile int16_t x590 = 912;
	static uint16_t x591 = UINT16_MAX;
	static int32_t x592 = INT32_MIN;
	int32_t t112 = 5300214;

    t112 = (x589==((x590*x591)/x592));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x597 = 5419194LLU;
	static uint8_t x598 = UINT8_MAX;
	uint64_t x599 = UINT64_MAX;
	int8_t x600 = INT8_MIN;
	volatile int32_t t113 = -2043;

    t113 = (x597==((x598*x599)/x600));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x601 = 54670926U;
	volatile int32_t x602 = 283;
	int64_t x603 = 208026971718244LL;
	uint64_t x604 = 117206893059687896LLU;
	int32_t t114 = 52;

    t114 = (x601==((x602*x603)/x604));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x605 = INT32_MIN;
	volatile int8_t x606 = 0;
	static volatile uint64_t x607 = UINT64_MAX;
	int64_t x608 = INT64_MIN;
	int32_t t115 = 377;

    t115 = (x605==((x606*x607)/x608));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint8_t x610 = 5U;
	int8_t x611 = INT8_MIN;
	static uint64_t x612 = UINT64_MAX;

    t116 = (x609==((x610*x611)/x612));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x613 = -1;
	int8_t x614 = INT8_MIN;
	static int64_t x615 = -26815846673LL;
	volatile int32_t t117 = -57745;

    t117 = (x613==((x614*x615)/x616));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint8_t x618 = 1U;
	uint64_t x619 = 4152756235314338LLU;
	volatile uint16_t x620 = 13U;
	volatile int32_t t118 = 112974;

    t118 = (x617==((x618*x619)/x620));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x625 = UINT32_MAX;
	static volatile int16_t x626 = 6;
	uint16_t x627 = UINT16_MAX;
	uint8_t x628 = 2U;

    t119 = (x625==((x626*x627)/x628));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x629 = -243;
	int16_t x630 = -1;
	uint32_t x631 = UINT32_MAX;
	uint16_t x632 = 15554U;
	volatile int32_t t120 = 0;

    t120 = (x629==((x630*x631)/x632));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x633 = INT8_MIN;
	int8_t x636 = -1;

    t121 = (x633==((x634*x635)/x636));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x641 = UINT16_MAX;
	uint16_t x642 = 1U;
	static volatile int8_t x643 = 1;
	int32_t x644 = INT32_MIN;
	int32_t t122 = 56018;

    t122 = (x641==((x642*x643)/x644));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x647 = -1LL;
	volatile int32_t t123 = -65;

    t123 = (x645==((x646*x647)/x648));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int64_t x649 = -84190380LL;
	static volatile uint32_t x650 = 372243U;
	static volatile int64_t x652 = -2109374767LL;
	static int32_t t124 = -21209;

    t124 = (x649==((x650*x651)/x652));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int64_t x653 = -14387672018LL;
	static int16_t x654 = INT16_MIN;
	static int16_t x655 = 2279;
	static volatile int8_t x656 = -15;

    t125 = (x653==((x654*x655)/x656));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint8_t x657 = 106U;
	int64_t x658 = 5924324288070LL;
	uint64_t x659 = 106052LLU;
	volatile int32_t t126 = 129664806;

    t126 = (x657==((x658*x659)/x660));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x661 = 37;
	int64_t x662 = -1LL;
	volatile uint16_t x663 = UINT16_MAX;
	static uint16_t x664 = UINT16_MAX;
	int32_t t127 = -49553;

    t127 = (x661==((x662*x663)/x664));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x666 = 0;
	static int16_t x668 = INT16_MAX;
	static int32_t t128 = 7152926;

    t128 = (x665==((x666*x667)/x668));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x669 = 2;
	static int8_t x670 = -14;
	int64_t x672 = 498458572348659289LL;
	static volatile int32_t t129 = -2158594;

    t129 = (x669==((x670*x671)/x672));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint16_t x673 = UINT16_MAX;
	uint16_t x674 = 16493U;
	static uint8_t x675 = UINT8_MAX;
	volatile int32_t t130 = 480083;

    t130 = (x673==((x674*x675)/x676));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t x685 = -1;
	int8_t x686 = INT8_MIN;
	int64_t x687 = 24LL;
	int64_t x688 = -1LL;
	static volatile int32_t t131 = 143;

    t131 = (x685==((x686*x687)/x688));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int32_t x689 = -1;
	int8_t x690 = -3;
	uint8_t x691 = 3U;
	uint8_t x692 = 15U;
	volatile int32_t t132 = -300743;

    t132 = (x689==((x690*x691)/x692));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int8_t x697 = -1;
	static uint16_t x698 = 4U;
	int8_t x699 = -1;
	int8_t x700 = INT8_MAX;
	int32_t t133 = 111;

    t133 = (x697==((x698*x699)/x700));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile uint16_t x701 = 9U;
	static int16_t x702 = INT16_MIN;
	int16_t x703 = INT16_MIN;
	int32_t t134 = 0;

    t134 = (x701==((x702*x703)/x704));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x709 = -1;
	static volatile uint16_t x710 = 59U;
	uint16_t x711 = UINT16_MAX;
	volatile uint8_t x712 = 19U;
	volatile int32_t t135 = -3;

    t135 = (x709==((x710*x711)/x712));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x713 = INT8_MAX;
	int64_t x715 = -1LL;
	uint32_t x716 = UINT32_MAX;
	volatile int32_t t136 = 306;

    t136 = (x713==((x714*x715)/x716));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x717 = 17980913189408177LLU;
	int32_t t137 = 57;

    t137 = (x717==((x718*x719)/x720));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x724 = INT64_MIN;
	volatile int32_t t138 = -933;

    t138 = (x721==((x722*x723)/x724));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x725 = INT16_MAX;
	int8_t x726 = 0;
	volatile int16_t x727 = INT16_MAX;
	volatile int16_t x728 = INT16_MAX;

    t139 = (x725==((x726*x727)/x728));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x729 = 0LLU;
	int32_t x730 = -13;
	int16_t x731 = 73;
	int32_t t140 = 2884;

    t140 = (x729==((x730*x731)/x732));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x733 = UINT8_MAX;
	volatile uint32_t x734 = 661997U;
	static uint32_t x735 = 1314268046U;
	int8_t x736 = 1;
	volatile int32_t t141 = 13435336;

    t141 = (x733==((x734*x735)/x736));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x737 = 22U;
	int32_t x738 = INT32_MIN;
	int8_t x739 = 0;
	int16_t x740 = INT16_MIN;

    t142 = (x737==((x738*x739)/x740));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x745 = UINT32_MAX;
	int8_t x748 = 1;
	int32_t t143 = 1;

    t143 = (x745==((x746*x747)/x748));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x753 = 81U;
	int16_t x755 = INT16_MIN;
	int32_t x756 = 15705268;

    t144 = (x753==((x754*x755)/x756));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x761 = INT8_MIN;
	uint16_t x762 = 2979U;
	static uint16_t x763 = UINT16_MAX;
	int32_t t145 = -2716026;

    t145 = (x761==((x762*x763)/x764));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x773 = 1;
	int16_t x775 = INT16_MIN;
	static int16_t x776 = INT16_MIN;
	volatile int32_t t146 = 0;

    t146 = (x773==((x774*x775)/x776));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x777 = INT8_MIN;
	static uint32_t x778 = UINT32_MAX;
	volatile int8_t x779 = INT8_MAX;

    t147 = (x777==((x778*x779)/x780));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x789 = INT32_MAX;
	uint16_t x790 = 373U;
	int8_t x792 = -1;
	int32_t t148 = 1;

    t148 = (x789==((x790*x791)/x792));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x799 = UINT16_MAX;
	int64_t x800 = -6081144LL;
	static int32_t t149 = -342;

    t149 = (x797==((x798*x799)/x800));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x802 = 88658831LLU;
	volatile int32_t x803 = INT32_MIN;
	uint16_t x804 = UINT16_MAX;

    t150 = (x801==((x802*x803)/x804));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x805 = -1;
	int8_t x806 = -1;
	int64_t x807 = INT64_MAX;
	int32_t x808 = INT32_MIN;

    t151 = (x805==((x806*x807)/x808));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x809 = INT32_MAX;
	static int16_t x810 = INT16_MAX;
	volatile int8_t x811 = -1;
	uint8_t x812 = UINT8_MAX;

    t152 = (x809==((x810*x811)/x812));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x814 = UINT32_MAX;
	int32_t x815 = INT32_MIN;
	int8_t x816 = INT8_MIN;

    t153 = (x813==((x814*x815)/x816));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x822 = 6U;
	int32_t x823 = 0;
	volatile int64_t x824 = INT64_MIN;
	int32_t t154 = 0;

    t154 = (x821==((x822*x823)/x824));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x837 = -1106723348906LL;
	int32_t x838 = -5;
	volatile int32_t t155 = 60703;

    t155 = (x837==((x838*x839)/x840));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x841 = 107U;

    t156 = (x841==((x842*x843)/x844));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x845 = INT16_MIN;
	int32_t x846 = INT32_MAX;
	uint64_t x847 = UINT64_MAX;
	int8_t x848 = -1;
	volatile int32_t t157 = 1409669;

    t157 = (x845==((x846*x847)/x848));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x850 = INT16_MAX;
	volatile uint32_t x851 = 159385U;
	volatile int32_t t158 = -95550;

    t158 = (x849==((x850*x851)/x852));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint32_t x859 = UINT32_MAX;
	volatile int8_t x860 = INT8_MIN;
	int32_t t159 = 14857;

    t159 = (x857==((x858*x859)/x860));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int16_t x861 = -1;
	int8_t x862 = INT8_MIN;
	uint16_t x863 = 13515U;
	volatile int32_t t160 = -11399;

    t160 = (x861==((x862*x863)/x864));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x870 = INT16_MIN;
	static uint16_t x871 = UINT16_MAX;
	volatile uint8_t x872 = 26U;

    t161 = (x869==((x870*x871)/x872));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x873 = 65306184353511LLU;
	static int8_t x874 = 1;
	int32_t x875 = INT32_MAX;
	static uint8_t x876 = UINT8_MAX;
	volatile int32_t t162 = 7;

    t162 = (x873==((x874*x875)/x876));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x885 = 940672002863039LL;
	uint8_t x887 = UINT8_MAX;
	int32_t x888 = INT32_MIN;
	volatile int32_t t163 = -251620;

    t163 = (x885==((x886*x887)/x888));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint32_t x889 = UINT32_MAX;
	static uint16_t x890 = 6U;
	static int16_t x891 = -1;
	int32_t x892 = INT32_MIN;
	static volatile int32_t t164 = -64;

    t164 = (x889==((x890*x891)/x892));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x898 = -1LL;
	int8_t x900 = 1;
	volatile int32_t t165 = -40313;

    t165 = (x897==((x898*x899)/x900));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x901 = -1;
	int16_t x903 = -61;
	int8_t x904 = 38;
	int32_t t166 = 344187;

    t166 = (x901==((x902*x903)/x904));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x907 = INT16_MIN;
	int64_t x908 = 14908583395099LL;

    t167 = (x905==((x906*x907)/x908));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x910 = 131LLU;
	uint32_t x911 = 130320765U;
	static int32_t t168 = 1;

    t168 = (x909==((x910*x911)/x912));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x917 = -13208;
	uint32_t x918 = 228U;
	int16_t x919 = INT16_MIN;
	int32_t t169 = 1;

    t169 = (x917==((x918*x919)/x920));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x925 = INT64_MAX;
	int8_t x926 = 11;
	volatile uint16_t x927 = UINT16_MAX;
	uint16_t x928 = UINT16_MAX;
	volatile int32_t t170 = -6;

    t170 = (x925==((x926*x927)/x928));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x929 = INT32_MAX;
	int8_t x930 = 7;
	static volatile int32_t t171 = -64;

    t171 = (x929==((x930*x931)/x932));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x933 = INT64_MIN;
	uint32_t x935 = 41080U;
	int16_t x936 = INT16_MIN;
	volatile int32_t t172 = -125966165;

    t172 = (x933==((x934*x935)/x936));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x937 = INT8_MIN;
	volatile int32_t x938 = 116963;
	uint8_t x939 = UINT8_MAX;
	int32_t x940 = -18757;
	static int32_t t173 = -4707;

    t173 = (x937==((x938*x939)/x940));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x945 = INT16_MIN;
	static int16_t x946 = INT16_MAX;
	uint64_t x947 = 4374761074673LLU;
	static uint8_t x948 = UINT8_MAX;
	int32_t t174 = 18407535;

    t174 = (x945==((x946*x947)/x948));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x950 = 1011;
	static int8_t x951 = -1;
	int64_t x952 = INT64_MIN;
	volatile int32_t t175 = -2059690;

    t175 = (x949==((x950*x951)/x952));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x958 = -1LL;
	static int64_t x959 = 28LL;
	int64_t x960 = -2945148348888LL;
	volatile int32_t t176 = 263065;

    t176 = (x957==((x958*x959)/x960));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x961 = INT32_MIN;
	int16_t x963 = INT16_MIN;
	volatile int8_t x964 = -54;

    t177 = (x961==((x962*x963)/x964));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x965 = INT8_MAX;
	volatile int16_t x966 = -1;
	int32_t x967 = -6481;
	uint32_t x968 = 18144041U;

    t178 = (x965==((x966*x967)/x968));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint32_t x978 = 0U;
	static int32_t x980 = 406;
	volatile int32_t t179 = 751153604;

    t179 = (x977==((x978*x979)/x980));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x982 = 9453934187LLU;
	static uint32_t x983 = 122411483U;
	int32_t x984 = INT32_MAX;
	int32_t t180 = 13333;

    t180 = (x981==((x982*x983)/x984));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x993 = 31;
	uint32_t x994 = UINT32_MAX;
	volatile int32_t x995 = -1;
	uint64_t x996 = UINT64_MAX;
	int32_t t181 = 2004678;

    t181 = (x993==((x994*x995)/x996));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x1002 = -193611758;
	static uint8_t x1003 = 9U;
	int16_t x1004 = INT16_MAX;
	volatile int32_t t182 = 29016;

    t182 = (x1001==((x1002*x1003)/x1004));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x1005 = 17757LLU;
	static uint64_t x1006 = 3708LLU;
	uint64_t x1007 = 281268LLU;
	int64_t x1008 = INT64_MIN;
	volatile int32_t t183 = -29918236;

    t183 = (x1005==((x1006*x1007)/x1008));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x1009 = 60;
	volatile uint32_t x1010 = 1U;
	volatile uint8_t x1011 = 53U;
	volatile uint8_t x1012 = UINT8_MAX;
	int32_t t184 = -2286142;

    t184 = (x1009==((x1010*x1011)/x1012));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x1013 = 376;
	int32_t x1014 = -1;
	uint64_t x1015 = 513987711501155875LLU;
	volatile uint8_t x1016 = 118U;
	int32_t t185 = 15;

    t185 = (x1013==((x1014*x1015)/x1016));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x1017 = -1LL;
	static int8_t x1018 = -1;
	int8_t x1019 = INT8_MAX;
	int16_t x1020 = INT16_MAX;
	static volatile int32_t t186 = 5;

    t186 = (x1017==((x1018*x1019)/x1020));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x1021 = 29U;
	int64_t x1022 = INT64_MIN;
	uint64_t x1023 = 4523LLU;
	uint32_t x1024 = UINT32_MAX;
	int32_t t187 = -15096;

    t187 = (x1021==((x1022*x1023)/x1024));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x1025 = -1;
	uint64_t x1026 = 358LLU;
	uint64_t x1028 = 9207913LLU;

    t188 = (x1025==((x1026*x1027)/x1028));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x1033 = INT32_MIN;
	uint16_t x1034 = 104U;
	static int8_t x1035 = INT8_MIN;
	volatile int16_t x1036 = -3;
	int32_t t189 = -5693;

    t189 = (x1033==((x1034*x1035)/x1036));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile uint8_t x1037 = 1U;
	int64_t x1038 = -1510LL;
	static volatile int8_t x1039 = INT8_MAX;
	int32_t x1040 = -2;
	volatile int32_t t190 = 4571310;

    t190 = (x1037==((x1038*x1039)/x1040));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x1041 = -1;
	uint64_t x1042 = 1239349275LLU;
	static int64_t x1043 = INT64_MIN;
	volatile int32_t t191 = 54648;

    t191 = (x1041==((x1042*x1043)/x1044));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x1045 = INT16_MIN;
	uint64_t x1046 = UINT64_MAX;
	uint8_t x1047 = 3U;
	volatile int32_t t192 = 175;

    t192 = (x1045==((x1046*x1047)/x1048));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x1051 = INT8_MIN;
	static volatile uint64_t x1052 = 35019655936622603LLU;
	volatile int32_t t193 = 82163852;

    t193 = (x1049==((x1050*x1051)/x1052));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x1053 = INT64_MIN;
	uint16_t x1055 = 68U;
	int64_t x1056 = INT64_MAX;

    t194 = (x1053==((x1054*x1055)/x1056));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x1057 = INT8_MIN;
	static int64_t x1058 = 29583960742LL;
	static int64_t x1059 = -1LL;
	int32_t x1060 = INT32_MIN;
	volatile int32_t t195 = 493552;

    t195 = (x1057==((x1058*x1059)/x1060));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x1061 = -46870746611902LL;
	int16_t x1062 = INT16_MIN;
	int16_t x1063 = 2;
	int8_t x1064 = INT8_MIN;
	volatile int32_t t196 = 2996897;

    t196 = (x1061==((x1062*x1063)/x1064));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x1073 = -1;
	volatile uint8_t x1076 = 10U;
	int32_t t197 = -6459;

    t197 = (x1073==((x1074*x1075)/x1076));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x1077 = INT64_MIN;
	int64_t x1078 = -1LL;
	int8_t x1079 = INT8_MIN;
	volatile int8_t x1080 = INT8_MIN;
	int32_t t198 = -53;

    t198 = (x1077==((x1078*x1079)/x1080));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x1085 = INT16_MIN;
	static int8_t x1087 = 0;
	int32_t x1088 = INT32_MAX;
	int32_t t199 = 207409332;

    t199 = (x1085==((x1086*x1087)/x1088));

    if (t199 != 0) { NG(); } else { ; }
	
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

