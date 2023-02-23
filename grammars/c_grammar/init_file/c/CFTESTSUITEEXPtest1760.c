
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

int16_t x5 = -1;
int8_t x7 = INT8_MIN;
volatile uint16_t x9 = 26U;
volatile int32_t x10 = -229251;
volatile uint16_t x12 = 2U;
static int64_t x14 = INT64_MIN;
static int32_t x19 = 22;
static volatile int32_t t4 = 75096;
volatile uint32_t x26 = 263441345U;
uint64_t x28 = 99LLU;
int32_t x31 = -1;
int8_t x42 = INT8_MIN;
static uint8_t x47 = 13U;
int8_t x49 = -23;
volatile int32_t t15 = 160915260;
int8_t x67 = -1;
volatile int8_t x72 = INT8_MIN;
volatile uint32_t x80 = 65332326U;
volatile int32_t t20 = 270969154;
uint64_t x85 = 47356599585789LLU;
uint64_t x87 = 3331LLU;
static int32_t t21 = -504718;
static volatile int32_t t24 = -65405148;
uint16_t x104 = UINT16_MAX;
volatile int32_t t27 = 0;
int64_t x120 = -693913LL;
int8_t x123 = 14;
volatile int32_t t32 = -63879653;
volatile int8_t x133 = -21;
static int64_t x135 = 9219LL;
uint16_t x139 = 0U;
uint32_t x142 = UINT32_MAX;
static int8_t x143 = -1;
int64_t x149 = -1LL;
int16_t x150 = INT16_MIN;
int8_t x151 = -1;
static uint16_t x153 = UINT16_MAX;
int32_t x155 = -1;
volatile int32_t t39 = 4;
int64_t x161 = INT64_MAX;
int64_t x164 = -1LL;
int32_t t40 = 1;
int32_t t41 = 13;
int32_t x170 = INT32_MAX;
uint32_t x175 = 67U;
int8_t x176 = INT8_MIN;
volatile uint64_t x181 = 61025180151LLU;
static int32_t x182 = INT32_MIN;
static int32_t t45 = 301033588;
int8_t x186 = INT8_MIN;
int32_t x193 = INT32_MIN;
static volatile uint16_t x207 = 16U;
int16_t x209 = 372;
uint8_t x215 = UINT8_MAX;
uint64_t x216 = 564882LLU;
uint32_t x221 = 152151235U;
int64_t x237 = INT64_MIN;
int32_t t59 = 52;
int16_t x249 = INT16_MIN;
static int8_t x251 = INT8_MIN;
volatile uint32_t x253 = 17U;
int8_t x254 = INT8_MIN;
uint8_t x255 = UINT8_MAX;
volatile int32_t t63 = -161199476;
int32_t x257 = INT32_MIN;
volatile uint16_t x265 = 313U;
static int8_t x266 = INT8_MAX;
volatile int16_t x267 = INT16_MIN;
volatile int32_t x269 = INT32_MIN;
volatile int32_t t68 = -32873128;
int32_t x278 = INT32_MIN;
int32_t x288 = -1;
volatile int32_t t71 = 13108;
static volatile int32_t t72 = -82449;
int8_t x294 = -1;
int32_t t73 = -46358978;
uint32_t x299 = 15886U;
int16_t x300 = INT16_MAX;
int16_t x307 = 60;
volatile int32_t t76 = 0;
int16_t x309 = 0;
int32_t x315 = -5;
static int16_t x323 = INT16_MIN;
volatile int8_t x324 = -1;
volatile uint32_t x326 = 6446329U;
uint64_t x331 = 23504455188981LLU;
volatile int64_t x334 = INT64_MAX;
int32_t x337 = INT32_MIN;
int32_t x365 = INT32_MIN;
volatile uint8_t x367 = UINT8_MAX;
volatile int32_t t91 = 1;
int32_t t93 = 12;
int32_t x377 = INT32_MIN;
static int16_t x379 = -3316;
volatile int32_t t95 = -2107330;
int16_t x390 = 7;
int32_t t97 = -3;
int64_t x396 = -1LL;
int32_t x403 = -1;
volatile int32_t t101 = 14544169;
static uint32_t x413 = UINT32_MAX;
uint32_t x418 = 733925271U;
int16_t x419 = INT16_MIN;
static int32_t t106 = -51;
static uint64_t x429 = 68LLU;
static int16_t x430 = INT16_MIN;
int32_t x431 = INT32_MAX;
volatile int32_t t108 = -364;
static volatile uint64_t x440 = 1638285810LLU;
volatile int32_t t109 = -66;
static uint16_t x442 = 37U;
int32_t t110 = 1;
uint32_t x448 = 50870196U;
int8_t x452 = -1;
uint8_t x453 = 34U;
volatile uint32_t x455 = 2352U;
int8_t x460 = INT8_MIN;
uint32_t x461 = 4473U;
volatile int32_t t116 = -11;
static volatile uint8_t x474 = 19U;
int8_t x475 = 0;
int16_t x480 = INT16_MIN;
uint8_t x491 = 6U;
int64_t x496 = INT64_MAX;
uint64_t x499 = 507623287LLU;
static int32_t t124 = -6;
static uint64_t x510 = UINT64_MAX;
static volatile int32_t t128 = 63;
uint32_t x520 = UINT32_MAX;
volatile int32_t x523 = -1;
volatile int32_t t131 = -267222761;
volatile int8_t x535 = -1;
static uint8_t x537 = 0U;
int16_t x540 = INT16_MAX;
int32_t x544 = INT32_MIN;
static uint64_t x545 = UINT64_MAX;
uint64_t x546 = UINT64_MAX;
int32_t t136 = -97722;
static int32_t x551 = INT32_MAX;
static int64_t x555 = INT64_MAX;
static volatile int32_t t139 = -43820;
uint64_t x564 = 687077879870672LLU;
int16_t x567 = INT16_MAX;
volatile int32_t t141 = -48046;
int16_t x578 = INT16_MIN;
volatile int64_t x579 = 10535725043LL;
volatile int64_t x582 = INT64_MAX;
static int32_t x590 = INT32_MAX;
static uint32_t x593 = UINT32_MAX;
int64_t x596 = INT64_MIN;
int32_t t148 = -465153179;
static int32_t t149 = -2708;
static int64_t x603 = 99820377916099LL;
int8_t x604 = 0;
uint32_t x606 = 15U;
volatile int32_t t152 = -1;
int8_t x614 = -45;
int8_t x616 = INT8_MAX;
volatile uint16_t x617 = 2U;
int32_t t155 = 1;
volatile int32_t t156 = 971686;
int32_t x629 = INT32_MIN;
uint8_t x630 = 106U;
volatile int32_t t157 = -56;
volatile int32_t t158 = -127;
int8_t x638 = INT8_MAX;
static volatile int8_t x639 = INT8_MIN;
static uint8_t x641 = 35U;
int32_t t161 = -6;
int8_t x652 = -10;
volatile int32_t t162 = 155548890;
int8_t x656 = -1;
static int8_t x663 = 4;
static int32_t t165 = -1;
int16_t x667 = INT16_MAX;
volatile uint16_t x669 = 156U;
int8_t x672 = -1;
volatile int64_t x675 = -1LL;
int32_t x676 = 198860667;
int16_t x693 = -1;
static uint64_t x698 = 13183LLU;
uint8_t x711 = 27U;
volatile int64_t x712 = 11660336114190797LL;
int8_t x715 = -1;
int32_t t178 = -930057768;
static int8_t x718 = 58;
static int32_t x719 = INT32_MIN;
uint16_t x727 = 15054U;
int8_t x735 = INT8_MIN;
volatile int32_t t184 = -105659478;
uint8_t x743 = 1U;
int8_t x749 = INT8_MAX;
uint32_t x751 = 453215154U;
static int32_t t188 = -5274731;
uint32_t x761 = 998781443U;
int16_t x763 = INT16_MIN;
int64_t x764 = 6608859547982124LL;
static volatile int32_t t190 = 17;
int8_t x765 = INT8_MAX;
uint8_t x767 = UINT8_MAX;
volatile int32_t t193 = -47619;
static int32_t x779 = INT32_MIN;
int32_t x787 = -1;
int32_t t197 = -86138932;
int64_t x793 = INT64_MAX;
int64_t x795 = INT64_MIN;
int64_t x798 = -3000425066026953LL;


void f0(void) {
    	static int8_t x1 = -1;
	uint32_t x2 = UINT32_MAX;
	volatile int8_t x3 = INT8_MIN;
	uint8_t x4 = UINT8_MAX;
	volatile int32_t t0 = 27154;

    t0 = (x1<=((x2>x3)^x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x6 = 17252U;
	int16_t x8 = INT16_MIN;
	volatile int32_t t1 = 2071624;

    t1 = (x5<=((x6>x7)^x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x11 = INT64_MAX;
	static int32_t t2 = -41372;

    t2 = (x9<=((x10>x11)^x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = -25;
	uint32_t x15 = 124531507U;
	int16_t x16 = INT16_MIN;
	volatile int32_t t3 = 2323;

    t3 = (x13<=((x14>x15)^x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = 2;
	static uint8_t x18 = UINT8_MAX;
	static int64_t x20 = INT64_MIN;

    t4 = (x17<=((x18>x19)^x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint16_t x21 = 239U;
	int8_t x22 = INT8_MAX;
	volatile uint16_t x23 = 7U;
	int8_t x24 = INT8_MIN;
	static volatile int32_t t5 = 25104028;

    t5 = (x21<=((x22>x23)^x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint16_t x25 = UINT16_MAX;
	uint32_t x27 = 380U;
	volatile int32_t t6 = 37217549;

    t6 = (x25<=((x26>x27)^x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x29 = INT64_MAX;
	int32_t x30 = -1;
	uint32_t x32 = UINT32_MAX;
	int32_t t7 = 33817;

    t7 = (x29<=((x30>x31)^x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = -13;
	static volatile uint16_t x34 = 30U;
	static int16_t x35 = 1;
	int32_t x36 = INT32_MIN;
	static int32_t t8 = 2093578;

    t8 = (x33<=((x34>x35)^x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = -1;
	uint64_t x38 = 66940455777905740LLU;
	static int64_t x39 = INT64_MIN;
	static volatile int64_t x40 = INT64_MAX;
	volatile int32_t t9 = -32319587;

    t9 = (x37<=((x38>x39)^x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = 548638LL;
	uint8_t x43 = UINT8_MAX;
	uint8_t x44 = 111U;
	volatile int32_t t10 = -50;

    t10 = (x41<=((x42>x43)^x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x45 = 57U;
	uint64_t x46 = 32732892491427491LLU;
	uint16_t x48 = 195U;
	volatile int32_t t11 = -1189;

    t11 = (x45<=((x46>x47)^x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x50 = INT16_MIN;
	uint64_t x51 = UINT64_MAX;
	int8_t x52 = INT8_MIN;
	volatile int32_t t12 = -327835;

    t12 = (x49<=((x50>x51)^x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = -3723;
	volatile int32_t x54 = INT32_MIN;
	int64_t x55 = 1LL;
	volatile uint64_t x56 = 3149358432019640808LLU;
	static int32_t t13 = -91;

    t13 = (x53<=((x54>x55)^x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x57 = -31;
	static volatile int32_t x58 = INT32_MAX;
	static int16_t x59 = INT16_MAX;
	int16_t x60 = 6;
	int32_t t14 = 42114;

    t14 = (x57<=((x58>x59)^x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x61 = INT64_MAX;
	int32_t x62 = INT32_MIN;
	static int8_t x63 = INT8_MIN;
	uint8_t x64 = 55U;

    t15 = (x61<=((x62>x63)^x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x65 = UINT32_MAX;
	uint64_t x66 = 60926042LLU;
	int8_t x68 = INT8_MAX;
	volatile int32_t t16 = 14;

    t16 = (x65<=((x66>x67)^x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x69 = 49U;
	uint16_t x70 = UINT16_MAX;
	uint64_t x71 = UINT64_MAX;
	int32_t t17 = -11874089;

    t17 = (x69<=((x70>x71)^x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = -506098043LL;
	int8_t x74 = -6;
	volatile int32_t x75 = INT32_MIN;
	static int64_t x76 = 3LL;
	volatile int32_t t18 = -174879826;

    t18 = (x73<=((x74>x75)^x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = INT16_MAX;
	int8_t x78 = INT8_MIN;
	volatile int64_t x79 = -1LL;
	volatile int32_t t19 = 383959074;

    t19 = (x77<=((x78>x79)^x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint16_t x81 = 0U;
	uint64_t x82 = 66126422791039LLU;
	int16_t x83 = INT16_MAX;
	int32_t x84 = INT32_MIN;

    t20 = (x81<=((x82>x83)^x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x86 = 6239U;
	uint16_t x88 = UINT16_MAX;

    t21 = (x85<=((x86>x87)^x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile uint16_t x89 = 18U;
	int16_t x90 = INT16_MIN;
	int32_t x91 = INT32_MIN;
	int64_t x92 = -1LL;
	volatile int32_t t22 = 0;

    t22 = (x89<=((x90>x91)^x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = -1;
	static int64_t x94 = INT64_MAX;
	int64_t x95 = -1LL;
	uint16_t x96 = UINT16_MAX;
	volatile int32_t t23 = 899250;

    t23 = (x93<=((x94>x95)^x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x97 = UINT32_MAX;
	int32_t x98 = INT32_MIN;
	int8_t x99 = 13;
	int8_t x100 = -1;

    t24 = (x97<=((x98>x99)^x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile uint64_t x101 = UINT64_MAX;
	uint16_t x102 = 0U;
	int16_t x103 = -1;
	int32_t t25 = 971435;

    t25 = (x101<=((x102>x103)^x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = -1;
	int64_t x106 = INT64_MIN;
	static uint8_t x107 = 0U;
	int64_t x108 = INT64_MAX;
	int32_t t26 = -533;

    t26 = (x105<=((x106>x107)^x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = -1;
	int8_t x110 = -3;
	int64_t x111 = -1716389828629LL;
	static uint64_t x112 = 1777599192LLU;

    t27 = (x109<=((x110>x111)^x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = INT8_MAX;
	int16_t x114 = -1;
	static uint32_t x115 = 2123226U;
	int64_t x116 = INT64_MIN;
	int32_t t28 = 509181188;

    t28 = (x113<=((x114>x115)^x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = INT32_MIN;
	int8_t x118 = 42;
	int64_t x119 = 21709991964LL;
	static int32_t t29 = -44702095;

    t29 = (x117<=((x118>x119)^x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t x121 = -1LL;
	int8_t x122 = INT8_MIN;
	volatile uint16_t x124 = 14132U;
	int32_t t30 = 11015;

    t30 = (x121<=((x122>x123)^x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile uint64_t x125 = 3194375177977379290LLU;
	static int64_t x126 = INT64_MIN;
	int8_t x127 = INT8_MIN;
	int32_t x128 = INT32_MIN;
	int32_t t31 = -719425;

    t31 = (x125<=((x126>x127)^x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x129 = INT32_MAX;
	uint8_t x130 = 1U;
	volatile int16_t x131 = -1;
	volatile uint8_t x132 = 120U;

    t32 = (x129<=((x130>x131)^x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x134 = 1978U;
	volatile uint32_t x136 = UINT32_MAX;
	int32_t t33 = -4158827;

    t33 = (x133<=((x134>x135)^x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x137 = INT16_MAX;
	static volatile int32_t x138 = INT32_MAX;
	uint32_t x140 = 933453973U;
	int32_t t34 = 51;

    t34 = (x137<=((x138>x139)^x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = INT32_MAX;
	uint32_t x144 = 12132U;
	volatile int32_t t35 = 1;

    t35 = (x141<=((x142>x143)^x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x145 = 6;
	static int64_t x146 = -1LL;
	int16_t x147 = -1;
	int32_t x148 = -3;
	int32_t t36 = 7272;

    t36 = (x145<=((x146>x147)^x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x152 = 69;
	int32_t t37 = -9968;

    t37 = (x149<=((x150>x151)^x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x154 = 17616439228676567LLU;
	volatile int32_t x156 = INT32_MIN;
	int32_t t38 = -797;

    t38 = (x153<=((x154>x155)^x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = INT16_MIN;
	uint32_t x158 = UINT32_MAX;
	int16_t x159 = INT16_MIN;
	static int8_t x160 = -3;

    t39 = (x157<=((x158>x159)^x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x162 = INT32_MIN;
	static int16_t x163 = INT16_MIN;

    t40 = (x161<=((x162>x163)^x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x165 = -1;
	int8_t x166 = -41;
	uint8_t x167 = 13U;
	static uint8_t x168 = UINT8_MAX;

    t41 = (x165<=((x166>x167)^x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int32_t x169 = INT32_MAX;
	int8_t x171 = -1;
	volatile int32_t x172 = INT32_MIN;
	int32_t t42 = -26637;

    t42 = (x169<=((x170>x171)^x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x173 = 60U;
	int8_t x174 = -1;
	volatile int32_t t43 = 20647696;

    t43 = (x173<=((x174>x175)^x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x177 = -31;
	uint32_t x178 = 3U;
	static int32_t x179 = -3612716;
	int16_t x180 = INT16_MIN;
	volatile int32_t t44 = -189238;

    t44 = (x177<=((x178>x179)^x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int8_t x183 = INT8_MAX;
	int32_t x184 = INT32_MIN;

    t45 = (x181<=((x182>x183)^x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x185 = INT32_MAX;
	uint64_t x187 = UINT64_MAX;
	uint8_t x188 = 0U;
	int32_t t46 = 10914;

    t46 = (x185<=((x186>x187)^x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x189 = INT64_MIN;
	uint64_t x190 = UINT64_MAX;
	int16_t x191 = -1;
	volatile int32_t x192 = -1;
	volatile int32_t t47 = -3982;

    t47 = (x189<=((x190>x191)^x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x194 = 0U;
	volatile int32_t x195 = 2742;
	int16_t x196 = INT16_MIN;
	int32_t t48 = 1376025;

    t48 = (x193<=((x194>x195)^x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = -70412026194292393LL;
	int64_t x198 = -862622123522LL;
	int16_t x199 = INT16_MIN;
	static uint64_t x200 = 147329770027LLU;
	int32_t t49 = -480331;

    t49 = (x197<=((x198>x199)^x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x201 = INT64_MIN;
	int64_t x202 = INT64_MIN;
	static int32_t x203 = -1;
	volatile int8_t x204 = INT8_MAX;
	int32_t t50 = 8831408;

    t50 = (x201<=((x202>x203)^x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = 3671532366LL;
	int8_t x206 = INT8_MAX;
	volatile int16_t x208 = 0;
	volatile int32_t t51 = -2976;

    t51 = (x205<=((x206>x207)^x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint64_t x210 = UINT64_MAX;
	volatile int8_t x211 = INT8_MIN;
	int32_t x212 = 7628;
	int32_t t52 = 227933;

    t52 = (x209<=((x210>x211)^x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x213 = 2083;
	int8_t x214 = 16;
	volatile int32_t t53 = -2931018;

    t53 = (x213<=((x214>x215)^x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x217 = INT16_MIN;
	int16_t x218 = INT16_MAX;
	uint64_t x219 = 4553481987292761157LLU;
	static volatile int8_t x220 = INT8_MIN;
	volatile int32_t t54 = 6103;

    t54 = (x217<=((x218>x219)^x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x222 = 0U;
	int32_t x223 = INT32_MAX;
	int8_t x224 = -1;
	int32_t t55 = 448263;

    t55 = (x221<=((x222>x223)^x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x225 = INT8_MAX;
	volatile int8_t x226 = -25;
	static int64_t x227 = -1LL;
	uint16_t x228 = 5U;
	int32_t t56 = 1;

    t56 = (x225<=((x226>x227)^x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x229 = UINT8_MAX;
	int16_t x230 = -1;
	uint64_t x231 = 498732LLU;
	static uint8_t x232 = 0U;
	volatile int32_t t57 = -122205;

    t57 = (x229<=((x230>x231)^x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x233 = 12626;
	uint32_t x234 = UINT32_MAX;
	int64_t x235 = -1LL;
	volatile int16_t x236 = -11;
	volatile int32_t t58 = -1;

    t58 = (x233<=((x234>x235)^x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x238 = INT16_MIN;
	uint8_t x239 = 1U;
	static int32_t x240 = INT32_MIN;

    t59 = (x237<=((x238>x239)^x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x241 = INT16_MIN;
	uint32_t x242 = 172386739U;
	uint64_t x243 = 1596LLU;
	static int64_t x244 = -1LL;
	int32_t t60 = 1;

    t60 = (x241<=((x242>x243)^x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x245 = -1;
	static int16_t x246 = INT16_MIN;
	static int8_t x247 = -9;
	int16_t x248 = -3;
	volatile int32_t t61 = -1;

    t61 = (x245<=((x246>x247)^x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x250 = UINT8_MAX;
	volatile uint16_t x252 = UINT16_MAX;
	int32_t t62 = -16597;

    t62 = (x249<=((x250>x251)^x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int16_t x256 = -458;

    t63 = (x253<=((x254>x255)^x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x258 = UINT16_MAX;
	volatile int32_t x259 = INT32_MAX;
	uint16_t x260 = UINT16_MAX;
	volatile int32_t t64 = 10367;

    t64 = (x257<=((x258>x259)^x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = INT32_MAX;
	static int32_t x262 = INT32_MIN;
	volatile int8_t x263 = -7;
	int8_t x264 = -1;
	int32_t t65 = 2911;

    t65 = (x261<=((x262>x263)^x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x268 = -1;
	int32_t t66 = -26558833;

    t66 = (x265<=((x266>x267)^x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x270 = INT8_MAX;
	static int16_t x271 = INT16_MIN;
	uint32_t x272 = 10592U;
	volatile int32_t t67 = 3835006;

    t67 = (x269<=((x270>x271)^x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x273 = INT32_MIN;
	int16_t x274 = INT16_MIN;
	int16_t x275 = -1;
	uint8_t x276 = 5U;

    t68 = (x273<=((x274>x275)^x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint32_t x277 = 82386252U;
	static int64_t x279 = INT64_MIN;
	int64_t x280 = -1LL;
	int32_t t69 = 414752932;

    t69 = (x277<=((x278>x279)^x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = INT16_MIN;
	uint16_t x282 = UINT16_MAX;
	static uint64_t x283 = UINT64_MAX;
	int64_t x284 = -3LL;
	static int32_t t70 = -6;

    t70 = (x281<=((x282>x283)^x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x285 = 1348U;
	static int64_t x286 = INT64_MAX;
	volatile int8_t x287 = -2;

    t71 = (x285<=((x286>x287)^x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x289 = INT32_MAX;
	int16_t x290 = INT16_MAX;
	volatile uint16_t x291 = 1910U;
	int16_t x292 = INT16_MAX;

    t72 = (x289<=((x290>x291)^x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x293 = 21;
	int64_t x295 = INT64_MIN;
	volatile int64_t x296 = INT64_MAX;

    t73 = (x293<=((x294>x295)^x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x297 = -1;
	int64_t x298 = INT64_MIN;
	int32_t t74 = -139;

    t74 = (x297<=((x298>x299)^x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x301 = INT64_MIN;
	int64_t x302 = INT64_MAX;
	uint64_t x303 = UINT64_MAX;
	volatile int64_t x304 = INT64_MAX;
	static int32_t t75 = -1313325;

    t75 = (x301<=((x302>x303)^x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = INT64_MAX;
	int32_t x306 = -1;
	static volatile int32_t x308 = INT32_MAX;

    t76 = (x305<=((x306>x307)^x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint16_t x310 = 486U;
	static int8_t x311 = -1;
	volatile int32_t x312 = 1;
	volatile int32_t t77 = -22;

    t77 = (x309<=((x310>x311)^x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x313 = -4374;
	int32_t x314 = INT32_MIN;
	static volatile uint8_t x316 = 3U;
	volatile int32_t t78 = -1;

    t78 = (x313<=((x314>x315)^x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int8_t x317 = -5;
	uint32_t x318 = 41U;
	static volatile uint16_t x319 = 7185U;
	volatile int16_t x320 = -1;
	volatile int32_t t79 = -251926176;

    t79 = (x317<=((x318>x319)^x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x321 = 0;
	int64_t x322 = INT64_MIN;
	volatile int32_t t80 = 792807134;

    t80 = (x321<=((x322>x323)^x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x325 = INT32_MAX;
	int64_t x327 = INT64_MIN;
	int64_t x328 = INT64_MIN;
	int32_t t81 = 15;

    t81 = (x325<=((x326>x327)^x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x329 = -1;
	uint8_t x330 = UINT8_MAX;
	int64_t x332 = 0LL;
	int32_t t82 = -85;

    t82 = (x329<=((x330>x331)^x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x333 = -3058;
	static int16_t x335 = -12;
	uint8_t x336 = 0U;
	volatile int32_t t83 = -25;

    t83 = (x333<=((x334>x335)^x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x338 = -1;
	int8_t x339 = INT8_MIN;
	uint64_t x340 = 257677LLU;
	volatile int32_t t84 = 1000;

    t84 = (x337<=((x338>x339)^x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = 3622960LL;
	static uint64_t x342 = 126727LLU;
	uint64_t x343 = 1425LLU;
	int8_t x344 = -8;
	int32_t t85 = 21;

    t85 = (x341<=((x342>x343)^x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x345 = -1LL;
	uint32_t x346 = UINT32_MAX;
	volatile uint8_t x347 = 7U;
	int8_t x348 = INT8_MIN;
	volatile int32_t t86 = -9898299;

    t86 = (x345<=((x346>x347)^x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x349 = UINT16_MAX;
	volatile int16_t x350 = -25;
	int32_t x351 = -11399;
	static volatile uint32_t x352 = 2032577U;
	volatile int32_t t87 = -985413;

    t87 = (x349<=((x350>x351)^x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x353 = UINT32_MAX;
	uint64_t x354 = 1704420469LLU;
	static uint8_t x355 = 0U;
	static uint8_t x356 = UINT8_MAX;
	int32_t t88 = 243;

    t88 = (x353<=((x354>x355)^x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x357 = 390933;
	uint32_t x358 = UINT32_MAX;
	uint32_t x359 = 1U;
	int32_t x360 = -1;
	int32_t t89 = 11594518;

    t89 = (x357<=((x358>x359)^x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x361 = 241;
	static volatile int64_t x362 = -4076LL;
	volatile uint16_t x363 = UINT16_MAX;
	volatile uint8_t x364 = 27U;
	int32_t t90 = -166851;

    t90 = (x361<=((x362>x363)^x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x366 = 2765491LLU;
	static int8_t x368 = INT8_MIN;

    t91 = (x365<=((x366>x367)^x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x369 = -1;
	static int32_t x370 = INT32_MIN;
	uint8_t x371 = UINT8_MAX;
	int8_t x372 = INT8_MAX;
	static volatile int32_t t92 = -1820266;

    t92 = (x369<=((x370>x371)^x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x373 = 3;
	int8_t x374 = INT8_MIN;
	static uint8_t x375 = 7U;
	uint8_t x376 = 1U;

    t93 = (x373<=((x374>x375)^x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x378 = INT64_MIN;
	uint64_t x380 = 181LLU;
	int32_t t94 = 50047662;

    t94 = (x377<=((x378>x379)^x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint16_t x381 = UINT16_MAX;
	uint32_t x382 = UINT32_MAX;
	int8_t x383 = -1;
	static int64_t x384 = INT64_MIN;

    t95 = (x381<=((x382>x383)^x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x385 = UINT64_MAX;
	uint64_t x386 = 3968924050521354LLU;
	static int16_t x387 = -1;
	int8_t x388 = 1;
	volatile int32_t t96 = 141323657;

    t96 = (x385<=((x386>x387)^x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint32_t x389 = UINT32_MAX;
	uint16_t x391 = 63U;
	uint8_t x392 = UINT8_MAX;

    t97 = (x389<=((x390>x391)^x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x393 = INT16_MIN;
	int8_t x394 = 1;
	uint8_t x395 = 2U;
	volatile int32_t t98 = 0;

    t98 = (x393<=((x394>x395)^x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x397 = 15839U;
	static volatile uint8_t x398 = UINT8_MAX;
	int16_t x399 = 279;
	static uint16_t x400 = 27U;
	int32_t t99 = 118;

    t99 = (x397<=((x398>x399)^x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x401 = INT32_MAX;
	int16_t x402 = -1;
	int32_t x404 = -1;
	volatile int32_t t100 = -218;

    t100 = (x401<=((x402>x403)^x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x405 = INT8_MIN;
	uint64_t x406 = 2575075LLU;
	int8_t x407 = INT8_MIN;
	uint32_t x408 = UINT32_MAX;

    t101 = (x405<=((x406>x407)^x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x409 = INT32_MAX;
	static int8_t x410 = 2;
	int32_t x411 = -189215;
	static int16_t x412 = INT16_MIN;
	volatile int32_t t102 = -2369;

    t102 = (x409<=((x410>x411)^x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x414 = INT32_MIN;
	volatile uint16_t x415 = UINT16_MAX;
	static int8_t x416 = -1;
	int32_t t103 = 61529;

    t103 = (x413<=((x414>x415)^x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x417 = 111563546LL;
	uint64_t x420 = 753518842658620679LLU;
	int32_t t104 = 6;

    t104 = (x417<=((x418>x419)^x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = 0;
	int16_t x422 = 1;
	uint16_t x423 = 102U;
	static int16_t x424 = -1;
	int32_t t105 = 2553385;

    t105 = (x421<=((x422>x423)^x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int32_t x425 = -1;
	int8_t x426 = INT8_MIN;
	int16_t x427 = -1;
	int64_t x428 = 2920266722979231LL;

    t106 = (x425<=((x426>x427)^x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x432 = INT64_MAX;
	int32_t t107 = 576;

    t107 = (x429<=((x430>x431)^x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x433 = 100530LL;
	int16_t x434 = INT16_MAX;
	volatile int8_t x435 = INT8_MIN;
	int16_t x436 = -1;

    t108 = (x433<=((x434>x435)^x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile uint16_t x437 = UINT16_MAX;
	static uint32_t x438 = UINT32_MAX;
	volatile int16_t x439 = -1;

    t109 = (x437<=((x438>x439)^x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x441 = INT64_MIN;
	uint16_t x443 = UINT16_MAX;
	static uint16_t x444 = UINT16_MAX;

    t110 = (x441<=((x442>x443)^x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int32_t x445 = INT32_MIN;
	volatile int64_t x446 = INT64_MAX;
	static uint32_t x447 = 1443463U;
	int32_t t111 = -2;

    t111 = (x445<=((x446>x447)^x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x449 = -1;
	int16_t x450 = INT16_MIN;
	static uint32_t x451 = UINT32_MAX;
	volatile int32_t t112 = -72568052;

    t112 = (x449<=((x450>x451)^x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x454 = INT16_MIN;
	static uint16_t x456 = 30831U;
	volatile int32_t t113 = -218672;

    t113 = (x453<=((x454>x455)^x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x457 = 1680U;
	int64_t x458 = INT64_MIN;
	int8_t x459 = -1;
	static volatile int32_t t114 = -230009195;

    t114 = (x457<=((x458>x459)^x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile uint32_t x462 = UINT32_MAX;
	int8_t x463 = -1;
	int64_t x464 = -1LL;
	int32_t t115 = -1484;

    t115 = (x461<=((x462>x463)^x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint64_t x465 = 4285787LLU;
	int8_t x466 = -7;
	int32_t x467 = INT32_MAX;
	static uint8_t x468 = UINT8_MAX;

    t116 = (x465<=((x466>x467)^x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x469 = -1;
	int32_t x470 = -1;
	uint16_t x471 = UINT16_MAX;
	uint8_t x472 = 14U;
	static volatile int32_t t117 = 3564432;

    t117 = (x469<=((x470>x471)^x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x473 = INT16_MIN;
	uint16_t x476 = UINT16_MAX;
	static volatile int32_t t118 = -195026465;

    t118 = (x473<=((x474>x475)^x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x477 = UINT8_MAX;
	int64_t x478 = -48371804506LL;
	volatile int16_t x479 = -56;
	int32_t t119 = 4854664;

    t119 = (x477<=((x478>x479)^x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x481 = 1;
	uint8_t x482 = 1U;
	int64_t x483 = -1LL;
	static int32_t x484 = -1;
	int32_t t120 = -767575;

    t120 = (x481<=((x482>x483)^x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = INT16_MIN;
	int8_t x486 = 33;
	uint64_t x487 = 2606053703503335061LLU;
	int32_t x488 = INT32_MIN;
	static volatile int32_t t121 = -32469;

    t121 = (x485<=((x486>x487)^x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x489 = UINT32_MAX;
	uint32_t x490 = UINT32_MAX;
	int16_t x492 = INT16_MAX;
	volatile int32_t t122 = 647821700;

    t122 = (x489<=((x490>x491)^x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int16_t x493 = 5301;
	static uint16_t x494 = 5128U;
	uint8_t x495 = 3U;
	int32_t t123 = 37331;

    t123 = (x493<=((x494>x495)^x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x497 = -811;
	int8_t x498 = INT8_MAX;
	int8_t x500 = 6;

    t124 = (x497<=((x498>x499)^x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x501 = INT32_MAX;
	volatile int16_t x502 = INT16_MIN;
	volatile uint8_t x503 = 19U;
	int16_t x504 = -1;
	volatile int32_t t125 = 6;

    t125 = (x501<=((x502>x503)^x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x505 = INT16_MIN;
	static int64_t x506 = -85LL;
	int32_t x507 = INT32_MIN;
	int64_t x508 = -1LL;
	volatile int32_t t126 = -22;

    t126 = (x505<=((x506>x507)^x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x509 = UINT16_MAX;
	int16_t x511 = -290;
	int32_t x512 = -1;
	int32_t t127 = 9506;

    t127 = (x509<=((x510>x511)^x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x513 = INT64_MAX;
	static volatile uint32_t x514 = 1467218481U;
	static uint32_t x515 = 1U;
	int16_t x516 = -1;

    t128 = (x513<=((x514>x515)^x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x517 = -1LL;
	static int64_t x518 = -1LL;
	volatile int64_t x519 = -1LL;
	static int32_t t129 = -72714068;

    t129 = (x517<=((x518>x519)^x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x521 = UINT64_MAX;
	volatile int32_t x522 = INT32_MIN;
	uint32_t x524 = 991235U;
	static int32_t t130 = -49466;

    t130 = (x521<=((x522>x523)^x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x525 = INT64_MIN;
	uint16_t x526 = 34U;
	int8_t x527 = 3;
	int8_t x528 = INT8_MIN;

    t131 = (x525<=((x526>x527)^x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x529 = 1663470983LL;
	volatile uint8_t x530 = UINT8_MAX;
	static int8_t x531 = INT8_MAX;
	int8_t x532 = 9;
	int32_t t132 = 129565702;

    t132 = (x529<=((x530>x531)^x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x533 = -1;
	int32_t x534 = 599;
	int64_t x536 = INT64_MIN;
	volatile int32_t t133 = 1568543;

    t133 = (x533<=((x534>x535)^x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x538 = -3286;
	int64_t x539 = INT64_MIN;
	static volatile int32_t t134 = -12;

    t134 = (x537<=((x538>x539)^x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x541 = 8U;
	uint16_t x542 = 3U;
	static int64_t x543 = -61492865365LL;
	volatile int32_t t135 = 465;

    t135 = (x541<=((x542>x543)^x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x547 = INT64_MIN;
	uint32_t x548 = 516500U;

    t136 = (x545<=((x546>x547)^x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x549 = INT16_MIN;
	int8_t x550 = -1;
	volatile int32_t x552 = INT32_MIN;
	volatile int32_t t137 = 1;

    t137 = (x549<=((x550>x551)^x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x553 = INT64_MIN;
	static uint16_t x554 = UINT16_MAX;
	static int64_t x556 = 45415538LL;
	volatile int32_t t138 = -3570;

    t138 = (x553<=((x554>x555)^x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x557 = INT16_MIN;
	uint16_t x558 = UINT16_MAX;
	uint64_t x559 = UINT64_MAX;
	int16_t x560 = INT16_MIN;

    t139 = (x557<=((x558>x559)^x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int64_t x561 = -1LL;
	int8_t x562 = -1;
	int64_t x563 = -1LL;
	static int32_t t140 = -406460963;

    t140 = (x561<=((x562>x563)^x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = -1;
	int8_t x566 = -1;
	int64_t x568 = 3973718169387914469LL;

    t141 = (x565<=((x566>x567)^x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x569 = 9502LLU;
	uint16_t x570 = 2U;
	uint32_t x571 = UINT32_MAX;
	int16_t x572 = INT16_MIN;
	static int32_t t142 = 2268;

    t142 = (x569<=((x570>x571)^x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x573 = -3;
	int32_t x574 = 109580;
	int64_t x575 = INT64_MIN;
	volatile int32_t x576 = 1;
	static int32_t t143 = -1;

    t143 = (x573<=((x574>x575)^x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint32_t x577 = 1296U;
	int64_t x580 = INT64_MIN;
	volatile int32_t t144 = -2884;

    t144 = (x577<=((x578>x579)^x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static int64_t x581 = -14645119LL;
	int32_t x583 = INT32_MAX;
	int8_t x584 = INT8_MAX;
	int32_t t145 = -2;

    t145 = (x581<=((x582>x583)^x584));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x585 = 3776905LL;
	int16_t x586 = INT16_MAX;
	uint8_t x587 = 4U;
	int64_t x588 = -1LL;
	static volatile int32_t t146 = -6;

    t146 = (x585<=((x586>x587)^x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint16_t x589 = UINT16_MAX;
	int16_t x591 = INT16_MAX;
	volatile int32_t x592 = -1;
	static int32_t t147 = -4152;

    t147 = (x589<=((x590>x591)^x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x594 = -23890759350LL;
	volatile int8_t x595 = -1;

    t148 = (x593<=((x594>x595)^x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x597 = UINT64_MAX;
	int16_t x598 = 5106;
	uint8_t x599 = UINT8_MAX;
	uint8_t x600 = UINT8_MAX;

    t149 = (x597<=((x598>x599)^x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint32_t x601 = UINT32_MAX;
	int64_t x602 = -1579LL;
	int32_t t150 = -15;

    t150 = (x601<=((x602>x603)^x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x605 = INT16_MIN;
	int16_t x607 = 18;
	static uint16_t x608 = 156U;
	volatile int32_t t151 = 99778071;

    t151 = (x605<=((x606>x607)^x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x609 = UINT8_MAX;
	int32_t x610 = -1;
	static int8_t x611 = INT8_MAX;
	static uint32_t x612 = 31U;

    t152 = (x609<=((x610>x611)^x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x613 = INT8_MIN;
	static int16_t x615 = -2565;
	int32_t t153 = 26725;

    t153 = (x613<=((x614>x615)^x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint8_t x618 = 49U;
	int64_t x619 = INT64_MIN;
	uint32_t x620 = UINT32_MAX;
	volatile int32_t t154 = 14243;

    t154 = (x617<=((x618>x619)^x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x621 = UINT32_MAX;
	uint16_t x622 = 6701U;
	volatile uint8_t x623 = 84U;
	uint8_t x624 = 64U;

    t155 = (x621<=((x622>x623)^x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x625 = -14;
	int16_t x626 = INT16_MIN;
	uint32_t x627 = 1565141125U;
	static int16_t x628 = INT16_MAX;

    t156 = (x625<=((x626>x627)^x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int32_t x631 = INT32_MIN;
	static int64_t x632 = 14817720031LL;

    t157 = (x629<=((x630>x631)^x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x633 = -1LL;
	uint16_t x634 = UINT16_MAX;
	int64_t x635 = INT64_MIN;
	int16_t x636 = 643;

    t158 = (x633<=((x634>x635)^x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x637 = -1LL;
	uint64_t x640 = 22626906LLU;
	volatile int32_t t159 = -959876;

    t159 = (x637<=((x638>x639)^x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x642 = INT8_MIN;
	static uint64_t x643 = 434717799732474049LLU;
	uint64_t x644 = 469803164LLU;
	int32_t t160 = 1;

    t160 = (x641<=((x642>x643)^x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x645 = -1;
	uint8_t x646 = 7U;
	static uint32_t x647 = 13U;
	int64_t x648 = -64689789816631LL;

    t161 = (x645<=((x646>x647)^x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = -1;
	static int16_t x650 = 5;
	static int16_t x651 = 5450;

    t162 = (x649<=((x650>x651)^x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int32_t x653 = -2;
	uint32_t x654 = UINT32_MAX;
	uint16_t x655 = 726U;
	volatile int32_t t163 = -36548;

    t163 = (x653<=((x654>x655)^x656));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x657 = -13LL;
	int16_t x658 = INT16_MIN;
	static volatile int16_t x659 = INT16_MIN;
	int8_t x660 = -28;
	volatile int32_t t164 = 332118;

    t164 = (x657<=((x658>x659)^x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x661 = INT32_MAX;
	int16_t x662 = INT16_MIN;
	int8_t x664 = -20;

    t165 = (x661<=((x662>x663)^x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint16_t x665 = 55U;
	int64_t x666 = 114LL;
	uint32_t x668 = UINT32_MAX;
	static int32_t t166 = 202515;

    t166 = (x665<=((x666>x667)^x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x670 = INT8_MIN;
	uint16_t x671 = UINT16_MAX;
	int32_t t167 = -1285;

    t167 = (x669<=((x670>x671)^x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int64_t x673 = -411797722077299797LL;
	uint32_t x674 = 87330345U;
	int32_t t168 = 119158;

    t168 = (x673<=((x674>x675)^x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x677 = INT64_MIN;
	uint32_t x678 = 835999U;
	volatile int64_t x679 = 461564492987153528LL;
	static int64_t x680 = INT64_MIN;
	volatile int32_t t169 = 123459735;

    t169 = (x677<=((x678>x679)^x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x681 = UINT8_MAX;
	static uint32_t x682 = UINT32_MAX;
	uint8_t x683 = 8U;
	uint16_t x684 = 89U;
	int32_t t170 = -2;

    t170 = (x681<=((x682>x683)^x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x685 = INT16_MIN;
	uint16_t x686 = 11U;
	volatile uint64_t x687 = UINT64_MAX;
	static int8_t x688 = -1;
	static volatile int32_t t171 = 44995142;

    t171 = (x685<=((x686>x687)^x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x689 = -13;
	static volatile int64_t x690 = 121574396394853332LL;
	static uint16_t x691 = UINT16_MAX;
	int8_t x692 = 0;
	int32_t t172 = -1;

    t172 = (x689<=((x690>x691)^x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x694 = INT16_MIN;
	int32_t x695 = -1;
	static int16_t x696 = -1;
	volatile int32_t t173 = -82;

    t173 = (x693<=((x694>x695)^x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x697 = -10561324LL;
	volatile uint16_t x699 = 2U;
	int16_t x700 = 0;
	volatile int32_t t174 = 419666824;

    t174 = (x697<=((x698>x699)^x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x701 = INT16_MIN;
	int32_t x702 = -1;
	int64_t x703 = INT64_MAX;
	static uint32_t x704 = 279614530U;
	static volatile int32_t t175 = 10201;

    t175 = (x701<=((x702>x703)^x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x705 = -14245686326LL;
	static int16_t x706 = -1;
	int16_t x707 = 3;
	int64_t x708 = 9320852LL;
	volatile int32_t t176 = 87585;

    t176 = (x705<=((x706>x707)^x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x709 = INT8_MIN;
	volatile int16_t x710 = -1;
	volatile int32_t t177 = 149700841;

    t177 = (x709<=((x710>x711)^x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x713 = -53;
	volatile int8_t x714 = -5;
	int64_t x716 = 2019170046850005LL;

    t178 = (x713<=((x714>x715)^x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x717 = 6;
	int16_t x720 = -1134;
	int32_t t179 = -4382;

    t179 = (x717<=((x718>x719)^x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x721 = UINT16_MAX;
	int8_t x722 = INT8_MIN;
	uint16_t x723 = 7U;
	int8_t x724 = -1;
	int32_t t180 = -3707996;

    t180 = (x721<=((x722>x723)^x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int16_t x725 = INT16_MIN;
	int32_t x726 = INT32_MAX;
	uint32_t x728 = UINT32_MAX;
	int32_t t181 = -4173305;

    t181 = (x725<=((x726>x727)^x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x729 = 24U;
	static uint64_t x730 = 1568LLU;
	int16_t x731 = INT16_MAX;
	int16_t x732 = -7;
	volatile int32_t t182 = 4629383;

    t182 = (x729<=((x730>x731)^x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x733 = 11U;
	int32_t x734 = 2574859;
	int8_t x736 = 3;
	static volatile int32_t t183 = -23874;

    t183 = (x733<=((x734>x735)^x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x737 = 25U;
	volatile int64_t x738 = 269332916603LL;
	int64_t x739 = -342986058827LL;
	int32_t x740 = INT32_MAX;

    t184 = (x737<=((x738>x739)^x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint16_t x741 = 1992U;
	int16_t x742 = -1;
	int64_t x744 = 1LL;
	volatile int32_t t185 = -370;

    t185 = (x741<=((x742>x743)^x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x745 = 41;
	int64_t x746 = 152268498811447LL;
	volatile int16_t x747 = INT16_MIN;
	int16_t x748 = 242;
	static volatile int32_t t186 = -3;

    t186 = (x745<=((x746>x747)^x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x750 = UINT8_MAX;
	volatile int16_t x752 = INT16_MAX;
	volatile int32_t t187 = 179;

    t187 = (x749<=((x750>x751)^x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x753 = INT16_MIN;
	uint32_t x754 = 214U;
	static int16_t x755 = 12;
	int16_t x756 = INT16_MIN;

    t188 = (x753<=((x754>x755)^x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int8_t x757 = -23;
	int16_t x758 = INT16_MAX;
	volatile int64_t x759 = 12489120LL;
	static uint8_t x760 = 2U;
	int32_t t189 = -8903475;

    t189 = (x757<=((x758>x759)^x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x762 = UINT8_MAX;

    t190 = (x761<=((x762>x763)^x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint8_t x766 = UINT8_MAX;
	static int16_t x768 = 0;
	static int32_t t191 = -8;

    t191 = (x765<=((x766>x767)^x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x769 = 183;
	uint64_t x770 = 3010LLU;
	static int64_t x771 = 783620LL;
	int8_t x772 = INT8_MAX;
	static int32_t t192 = -69841;

    t192 = (x769<=((x770>x771)^x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint32_t x773 = 2U;
	int64_t x774 = INT64_MAX;
	uint8_t x775 = 16U;
	int16_t x776 = -10;

    t193 = (x773<=((x774>x775)^x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x777 = INT32_MAX;
	uint64_t x778 = 7796LLU;
	int16_t x780 = -5;
	int32_t t194 = 176017445;

    t194 = (x777<=((x778>x779)^x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x781 = 4U;
	uint16_t x782 = UINT16_MAX;
	int32_t x783 = INT32_MIN;
	static int64_t x784 = INT64_MIN;
	static volatile int32_t t195 = 31;

    t195 = (x781<=((x782>x783)^x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x785 = INT8_MIN;
	int8_t x786 = 20;
	int16_t x788 = -1;
	volatile int32_t t196 = 340923;

    t196 = (x785<=((x786>x787)^x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x789 = 10;
	uint64_t x790 = 85355064871LLU;
	int64_t x791 = INT64_MIN;
	volatile int16_t x792 = INT16_MAX;

    t197 = (x789<=((x790>x791)^x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint8_t x794 = UINT8_MAX;
	static int8_t x796 = INT8_MIN;
	int32_t t198 = 18445110;

    t198 = (x793<=((x794>x795)^x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x797 = INT8_MIN;
	uint32_t x799 = 2452731U;
	static int8_t x800 = 4;
	volatile int32_t t199 = -227574202;

    t199 = (x797<=((x798>x799)^x800));

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

