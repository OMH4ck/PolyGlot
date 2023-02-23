
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

int8_t x8 = INT8_MIN;
uint8_t x9 = 39U;
int32_t t2 = 6;
int64_t x13 = INT64_MIN;
int64_t t3 = 13497491056LL;
static volatile int16_t x19 = INT16_MIN;
volatile int32_t x24 = INT32_MIN;
volatile int8_t x26 = 3;
uint32_t x31 = 82U;
int32_t x34 = INT32_MAX;
int64_t t8 = -366LL;
uint16_t x38 = 10U;
uint32_t x39 = 1428231728U;
static uint16_t x44 = UINT16_MAX;
static volatile int64_t t11 = 53139LL;
volatile int32_t x52 = INT32_MIN;
int32_t x55 = -81117682;
int64_t x56 = INT64_MIN;
int32_t x58 = INT32_MIN;
volatile int8_t x71 = INT8_MIN;
uint32_t t16 = 651057U;
uint32_t x74 = UINT32_MAX;
volatile int32_t x76 = INT32_MAX;
int64_t x79 = -4039118057351LL;
int32_t x82 = INT32_MAX;
volatile int64_t t19 = -122873LL;
static int32_t x103 = INT32_MAX;
int16_t x115 = INT16_MIN;
int64_t x125 = -14631LL;
int32_t x128 = INT32_MIN;
volatile uint8_t x131 = 2U;
volatile int64_t t31 = 4433685240755557LL;
int16_t x138 = INT16_MIN;
static volatile int64_t t33 = 0LL;
uint64_t x142 = UINT64_MAX;
static volatile int16_t x156 = -19;
int16_t x163 = INT16_MIN;
volatile uint64_t t38 = 2622261276016478LLU;
volatile int8_t x169 = -51;
uint8_t x176 = 6U;
int64_t t41 = 1493703395524LL;
static uint64_t x178 = 5421522110LLU;
uint64_t t45 = 118288153365477585LLU;
int64_t t46 = 1225LL;
uint32_t x197 = UINT32_MAX;
uint32_t x203 = 5949006U;
volatile int64_t t49 = -53548LL;
int32_t x219 = 2694;
static int32_t x221 = INT32_MIN;
int32_t x224 = -1;
int64_t t52 = -10773LL;
int64_t x226 = -28782813935067006LL;
volatile uint64_t t53 = 620345553640LLU;
uint32_t x232 = 2690U;
uint32_t t55 = 32395481U;
volatile int32_t x238 = INT32_MAX;
int64_t x241 = INT64_MAX;
int8_t x244 = INT8_MIN;
uint64_t t59 = 43503608013797881LLU;
volatile uint16_t x254 = 9576U;
uint16_t x255 = UINT16_MAX;
int8_t x258 = INT8_MAX;
int8_t x260 = INT8_MIN;
volatile int32_t t61 = 39;
static int64_t t63 = 3325LL;
uint64_t x269 = 763654101LLU;
static int16_t x271 = INT16_MIN;
uint16_t x272 = 4998U;
int64_t x278 = INT64_MIN;
static uint16_t x283 = 1026U;
static int32_t x292 = 5684418;
volatile int16_t x295 = INT16_MIN;
int8_t x296 = 12;
int32_t x299 = INT32_MIN;
int32_t t71 = 424;
int32_t x305 = -1;
static int64_t x307 = INT64_MIN;
uint8_t x316 = 50U;
static uint64_t x334 = 255481LLU;
uint64_t t78 = 0LLU;
volatile int16_t x338 = INT16_MIN;
static int32_t t79 = -236629003;
uint16_t x343 = 2310U;
static int64_t x345 = 7330535509203LL;
int16_t x350 = -3269;
volatile int32_t x358 = -1;
int32_t t85 = 19351;
int8_t x365 = INT8_MAX;
int16_t x374 = -1;
int16_t x375 = INT16_MIN;
volatile int32_t t87 = 310;
static int8_t x377 = INT8_MIN;
uint64_t x393 = UINT64_MAX;
uint32_t x395 = UINT32_MAX;
static volatile uint8_t x399 = UINT8_MAX;
static uint32_t x400 = UINT32_MAX;
int32_t t93 = 13399871;
static volatile int32_t x405 = INT32_MIN;
volatile int8_t x406 = INT8_MIN;
uint8_t x407 = UINT8_MAX;
static uint16_t x410 = UINT16_MAX;
uint8_t x415 = UINT8_MAX;
int16_t x416 = -1;
uint8_t x418 = UINT8_MAX;
volatile int64_t t97 = INT64_MIN;
int64_t x421 = -1LL;
volatile int64_t t98 = -15271129162LL;
uint64_t t99 = 7975534324LLU;
uint16_t x436 = 712U;
uint64_t t102 = 0LLU;
uint64_t x448 = 5729915LLU;
int16_t x450 = -1;
int32_t x470 = 13372835;
int8_t x475 = -1;
uint64_t t110 = UINT64_MAX;
int8_t x479 = 25;
static int32_t t111 = 13657267;
volatile int16_t x483 = INT16_MIN;
uint16_t x485 = 677U;
uint32_t x489 = UINT32_MAX;
int64_t x491 = 119850598LL;
volatile int8_t x496 = 21;
int32_t x509 = -1;
int8_t x511 = 10;
uint64_t x515 = UINT64_MAX;
uint32_t x517 = 1716761916U;
int64_t x524 = 1034626614417180LL;
int16_t x532 = INT16_MAX;
int64_t x533 = -1LL;
int32_t x535 = -134311744;
int8_t x537 = -1;
static int16_t x540 = -1;
volatile int32_t x546 = -120;
int8_t x548 = INT8_MIN;
static int16_t x553 = INT16_MIN;
int16_t x555 = -1;
int64_t t129 = -60999771090545217LL;
uint16_t x562 = UINT16_MAX;
static int8_t x565 = -5;
static volatile uint32_t x568 = 965801U;
volatile uint64_t t131 = 345526217LLU;
uint64_t x573 = UINT64_MAX;
static volatile int16_t x576 = INT16_MIN;
int64_t x579 = -3706285674896943367LL;
uint16_t x584 = 1044U;
volatile int64_t t134 = -931525423956278638LL;
uint32_t x587 = 8416U;
static volatile int64_t t135 = 17002904538LL;
int64_t t136 = 42887756772220265LL;
int8_t x600 = INT8_MIN;
static uint32_t x606 = UINT32_MAX;
int64_t x618 = -1LL;
volatile int64_t t143 = 0LL;
int32_t x624 = INT32_MAX;
int8_t x630 = INT8_MAX;
uint16_t x634 = UINT16_MAX;
static int64_t x644 = INT64_MIN;
int32_t x652 = -15;
static volatile int32_t t150 = 1;
int64_t x665 = -1LL;
uint16_t x666 = 408U;
int16_t x668 = INT16_MIN;
volatile int8_t x672 = -27;
volatile uint8_t x674 = 13U;
int64_t x680 = -1LL;
int8_t x703 = INT8_MIN;
static volatile uint8_t x705 = 76U;
int8_t x712 = INT8_MAX;
volatile uint64_t t163 = 112245783LLU;
int64_t x727 = -2074301629326827LL;
int32_t x728 = INT32_MIN;
volatile int64_t t166 = 4697393898004LL;
int8_t x729 = INT8_MIN;
int16_t x749 = -1;
static int8_t x751 = -1;
int32_t x754 = INT32_MIN;
int32_t x756 = INT32_MAX;
static int64_t t173 = -492197102LL;
int8_t x758 = INT8_MIN;
static int16_t x764 = INT16_MIN;
volatile int32_t t179 = 215403409;
int16_t x788 = 63;
int8_t x798 = -1;
int8_t x804 = -1;
uint8_t x805 = 36U;
int32_t x807 = INT32_MAX;
int8_t x830 = -13;
int16_t x836 = INT16_MIN;
volatile int16_t x843 = -1;
static int32_t x846 = INT32_MAX;
volatile int16_t x847 = 8080;
static uint8_t x852 = UINT8_MAX;
static volatile int64_t t194 = 213968938LL;
volatile int32_t x853 = INT32_MIN;
volatile int32_t t195 = INT32_MIN;
static int16_t x858 = INT16_MIN;
static uint16_t x863 = UINT16_MAX;
int32_t x865 = INT32_MAX;
volatile uint32_t x866 = 0U;
uint8_t x870 = UINT8_MAX;


void f0(void) {
    	uint64_t x1 = 404040932LLU;
	uint64_t x2 = UINT64_MAX;
	uint64_t x3 = 4594004968243LLU;
	int8_t x4 = INT8_MIN;
	volatile uint64_t t0 = 377531119LLU;

    t0 = (x1+((x2/x3)%x4));

    if (t0 != 408056326LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint64_t x5 = 0LLU;
	int16_t x6 = 110;
	static int8_t x7 = INT8_MAX;
	volatile uint64_t t1 = 3026631884480868LLU;

    t1 = (x5+((x6/x7)%x8));

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x10 = -8350330;
	static int8_t x11 = INT8_MIN;
	int8_t x12 = INT8_MIN;

    t2 = (x9+((x10/x11)%x12));

    if (t2 != 123) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x14 = INT8_MAX;
	int8_t x15 = 10;
	static uint16_t x16 = UINT16_MAX;

    t3 = (x13+((x14/x15)%x16));

    if (t3 != -9223372036854775796LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static int64_t x17 = -1LL;
	uint16_t x18 = UINT16_MAX;
	int16_t x20 = INT16_MIN;
	static volatile int64_t t4 = -1423999916881LL;

    t4 = (x17+((x18/x19)%x20));

    if (t4 != -2LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static int64_t x21 = 11LL;
	uint64_t x22 = UINT64_MAX;
	uint32_t x23 = 957953U;
	volatile uint64_t t5 = 5275LLU;

    t5 = (x21+((x22/x23)%x24));

    if (t5 != 19256418711272LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x25 = 125U;
	int32_t x27 = -3;
	uint64_t x28 = 21851126660LLU;
	uint64_t t6 = 1255376330LLU;

    t6 = (x25+((x26/x27)%x28));

    if (t6 != 3654558740LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x29 = UINT64_MAX;
	static volatile int32_t x30 = INT32_MIN;
	uint32_t x32 = 1140793450U;
	uint64_t t7 = 26527LLU;

    t7 = (x29+((x30/x31)%x32));

    if (t7 != 26188823LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = INT32_MIN;
	volatile uint32_t x35 = UINT32_MAX;
	int64_t x36 = INT64_MIN;

    t8 = (x33+((x34/x35)%x36));

    if (t8 != -2147483648LL) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x37 = -2;
	int8_t x40 = INT8_MIN;
	volatile uint32_t t9 = 1221313378U;

    t9 = (x37+((x38/x39)%x40));

    if (t9 != 4294967294U) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = -1;
	int8_t x42 = -1;
	uint64_t x43 = 190517705672LLU;
	volatile uint64_t t10 = 10LLU;

    t10 = (x41+((x42/x43)%x44));

    if (t10 != 29107LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = 3;
	int64_t x46 = 7267157LL;
	static int64_t x47 = INT64_MIN;
	volatile int32_t x48 = -1182390;

    t11 = (x45+((x46/x47)%x48));

    if (t11 != 3LL) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int8_t x49 = INT8_MIN;
	int16_t x50 = INT16_MIN;
	static volatile uint8_t x51 = 7U;
	int32_t t12 = -240911535;

    t12 = (x49+((x50/x51)%x52));

    if (t12 != -4809) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x53 = INT8_MIN;
	volatile int64_t x54 = INT64_MIN;
	int64_t t13 = 296860881508290845LL;

    t13 = (x53+((x54/x55)%x56));

    if (t13 != 113703594568LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = INT64_MIN;
	uint64_t x59 = 113072288164LLU;
	int8_t x60 = 18;
	volatile uint64_t t14 = 87982691LLU;

    t14 = (x57+((x58/x59)%x60));

    if (t14 != 9223372036854775820LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x65 = -2;
	volatile int64_t x66 = 1778913350206536553LL;
	uint8_t x67 = 49U;
	static int16_t x68 = INT16_MAX;
	static int64_t t15 = 3736206185825451LL;

    t15 = (x65+((x66/x67)%x68));

    if (t15 != 29486LL) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint32_t x69 = 1024703521U;
	int32_t x70 = -1;
	int8_t x72 = -1;

    t16 = (x69+((x70/x71)%x72));

    if (t16 != 1024703521U) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x73 = -6;
	static int32_t x75 = INT32_MAX;
	uint32_t t17 = 3420772U;

    t17 = (x73+((x74/x75)%x76));

    if (t17 != 4294967292U) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x77 = -1;
	int8_t x78 = 63;
	int16_t x80 = INT16_MIN;
	volatile int64_t t18 = -272549190335941952LL;

    t18 = (x77+((x78/x79)%x80));

    if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x81 = -1;
	static int64_t x83 = INT64_MIN;
	uint32_t x84 = UINT32_MAX;

    t19 = (x81+((x82/x83)%x84));

    if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint16_t x85 = UINT16_MAX;
	int16_t x86 = -11;
	int64_t x87 = INT64_MAX;
	int32_t x88 = INT32_MIN;
	static volatile int64_t t20 = -6819416605358LL;

    t20 = (x85+((x86/x87)%x88));

    if (t20 != 65535LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x89 = -1;
	uint8_t x90 = 107U;
	static volatile uint64_t x91 = 16596656706LLU;
	volatile int64_t x92 = INT64_MAX;
	uint64_t t21 = UINT64_MAX;

    t21 = (x89+((x90/x91)%x92));

    if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x93 = -37;
	uint64_t x94 = 6LLU;
	int8_t x95 = INT8_MAX;
	static int8_t x96 = INT8_MAX;
	uint64_t t22 = 1013092LLU;

    t22 = (x93+((x94/x95)%x96));

    if (t22 != 18446744073709551579LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x97 = 911225514U;
	int32_t x98 = -1;
	static int16_t x99 = INT16_MIN;
	int32_t x100 = INT32_MAX;
	uint32_t t23 = 62U;

    t23 = (x97+((x98/x99)%x100));

    if (t23 != 911225514U) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint8_t x101 = 0U;
	int32_t x102 = INT32_MIN;
	int16_t x104 = INT16_MIN;
	volatile int32_t t24 = 0;

    t24 = (x101+((x102/x103)%x104));

    if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x105 = INT32_MIN;
	int8_t x106 = -61;
	volatile int8_t x107 = INT8_MAX;
	int8_t x108 = -1;
	static volatile int32_t t25 = INT32_MIN;

    t25 = (x105+((x106/x107)%x108));

    if (t25 != INT32_MIN) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x109 = -1;
	int32_t x110 = INT32_MIN;
	static volatile int8_t x111 = 2;
	int32_t x112 = INT32_MIN;
	volatile int32_t t26 = 12830;

    t26 = (x109+((x110/x111)%x112));

    if (t26 != -1073741825) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x113 = UINT8_MAX;
	int32_t x114 = -1;
	static volatile int16_t x116 = 5;
	int32_t t27 = 24855965;

    t27 = (x113+((x114/x115)%x116));

    if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t x117 = -1;
	int8_t x118 = INT8_MAX;
	static volatile uint32_t x119 = UINT32_MAX;
	int16_t x120 = 11;
	volatile uint32_t t28 = UINT32_MAX;

    t28 = (x117+((x118/x119)%x120));

    if (t28 != UINT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	static int64_t x121 = -1LL;
	int16_t x122 = INT16_MIN;
	int64_t x123 = -1LL;
	uint32_t x124 = 60201U;
	volatile int64_t t29 = 3LL;

    t29 = (x121+((x122/x123)%x124));

    if (t29 != 32767LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x126 = INT64_MIN;
	int16_t x127 = 1;
	int64_t t30 = 0LL;

    t30 = (x125+((x126/x127)%x128));

    if (t30 != -14631LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static int32_t x129 = -1;
	volatile int64_t x130 = INT64_MIN;
	uint8_t x132 = 105U;

    t31 = (x129+((x130/x131)%x132));

    if (t31 != -5LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x133 = INT16_MAX;
	static int16_t x134 = 1;
	uint32_t x135 = 207258004U;
	int8_t x136 = INT8_MIN;
	uint32_t t32 = 23589U;

    t32 = (x133+((x134/x135)%x136));

    if (t32 != 32767U) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x137 = -1;
	int64_t x139 = 14557379725LL;
	volatile uint16_t x140 = UINT16_MAX;

    t33 = (x137+((x138/x139)%x140));

    if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x141 = INT8_MAX;
	int16_t x143 = INT16_MAX;
	static int16_t x144 = INT16_MAX;
	static uint64_t t34 = 62LLU;

    t34 = (x141+((x142/x143)%x144));

    if (t34 != 191LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x145 = INT16_MIN;
	int8_t x146 = 7;
	uint64_t x147 = UINT64_MAX;
	volatile uint16_t x148 = 60U;
	uint64_t t35 = 1503LLU;

    t35 = (x145+((x146/x147)%x148));

    if (t35 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x149 = 7;
	volatile int32_t x150 = INT32_MIN;
	uint64_t x151 = 872851723310378LLU;
	int16_t x152 = 78;
	volatile uint64_t t36 = 80783321LLU;

    t36 = (x149+((x150/x151)%x152));

    if (t36 != 80LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x153 = 0U;
	uint8_t x154 = UINT8_MAX;
	int64_t x155 = -1LL;
	int64_t t37 = -493159949233297LL;

    t37 = (x153+((x154/x155)%x156));

    if (t37 != -8LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static int32_t x161 = INT32_MIN;
	volatile int16_t x162 = 1;
	uint64_t x164 = 908005LLU;

    t38 = (x161+((x162/x163)%x164));

    if (t38 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x165 = 4911567527608018LL;
	int32_t x166 = 473;
	static uint64_t x167 = 535134405412527209LLU;
	int8_t x168 = -1;
	uint64_t t39 = 1LLU;

    t39 = (x165+((x166/x167)%x168));

    if (t39 != 4911567527608018LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x170 = -24499;
	uint16_t x171 = 207U;
	int8_t x172 = 8;
	static volatile int32_t t40 = 46139084;

    t40 = (x169+((x170/x171)%x172));

    if (t40 != -57) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x173 = INT8_MAX;
	volatile uint16_t x174 = UINT16_MAX;
	static int64_t x175 = INT64_MIN;

    t41 = (x173+((x174/x175)%x176));

    if (t41 != 127LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x177 = -1LL;
	int64_t x179 = -1LL;
	static uint64_t x180 = UINT64_MAX;
	volatile uint64_t t42 = UINT64_MAX;

    t42 = (x177+((x178/x179)%x180));

    if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x181 = INT64_MIN;
	uint64_t x182 = UINT64_MAX;
	uint64_t x183 = 7LLU;
	volatile int16_t x184 = INT16_MIN;
	uint64_t t43 = 272185157875906278LLU;

    t43 = (x181+((x182/x183)%x184));

    if (t43 != 11858621190241854610LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint8_t x185 = 84U;
	static int32_t x186 = INT32_MIN;
	int32_t x187 = -335255993;
	int32_t x188 = INT32_MAX;
	int32_t t44 = 350932061;

    t44 = (x185+((x186/x187)%x188));

    if (t44 != 90) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x189 = UINT32_MAX;
	int32_t x190 = INT32_MAX;
	static int32_t x191 = INT32_MIN;
	uint64_t x192 = UINT64_MAX;

    t45 = (x189+((x190/x191)%x192));

    if (t45 != 4294967295LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x193 = -1;
	uint32_t x194 = UINT32_MAX;
	int64_t x195 = 3535423001143834845LL;
	static uint32_t x196 = 65U;

    t46 = (x193+((x194/x195)%x196));

    if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x198 = 41LLU;
	uint16_t x199 = 1U;
	int8_t x200 = INT8_MIN;
	volatile uint64_t t47 = 700165LLU;

    t47 = (x197+((x198/x199)%x200));

    if (t47 != 4294967336LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x201 = INT64_MIN;
	volatile int8_t x202 = INT8_MIN;
	uint64_t x204 = 1378040592119LLU;
	uint64_t t48 = 110941455753LLU;

    t48 = (x201+((x202/x203)%x204));

    if (t48 != 9223372036854776529LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int16_t x209 = INT16_MIN;
	volatile int16_t x210 = INT16_MIN;
	int64_t x211 = INT64_MIN;
	uint32_t x212 = 6648U;

    t49 = (x209+((x210/x211)%x212));

    if (t49 != -32768LL) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x213 = INT16_MIN;
	static int8_t x214 = INT8_MIN;
	int64_t x215 = INT64_MIN;
	int32_t x216 = INT32_MIN;
	static int64_t t50 = 339252LL;

    t50 = (x213+((x214/x215)%x216));

    if (t50 != -32768LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint16_t x217 = UINT16_MAX;
	static int16_t x218 = INT16_MAX;
	int32_t x220 = 1029330267;
	int32_t t51 = 31688634;

    t51 = (x217+((x218/x219)%x220));

    if (t51 != 65547) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint16_t x222 = 19U;
	int64_t x223 = INT64_MIN;

    t52 = (x221+((x222/x223)%x224));

    if (t52 != -2147483648LL) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x225 = INT32_MIN;
	volatile int8_t x227 = -1;
	static uint64_t x228 = 1LLU;

    t53 = (x225+((x226/x227)%x228));

    if (t53 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile uint8_t x229 = 1U;
	int8_t x230 = INT8_MAX;
	static uint64_t x231 = 865378232121LLU;
	static uint64_t t54 = 6LLU;

    t54 = (x229+((x230/x231)%x232));

    if (t54 != 1LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x233 = -3647;
	uint32_t x234 = UINT32_MAX;
	static int8_t x235 = 3;
	int32_t x236 = INT32_MAX;

    t55 = (x233+((x234/x235)%x236));

    if (t55 != 1431652118U) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x237 = -1;
	int16_t x239 = -1;
	int32_t x240 = INT32_MAX;
	int32_t t56 = 169;

    t56 = (x237+((x238/x239)%x240));

    if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x242 = 26;
	uint8_t x243 = 45U;
	int64_t t57 = INT64_MAX;

    t57 = (x241+((x242/x243)%x244));

    if (t57 != INT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x245 = -1;
	uint8_t x246 = 31U;
	uint8_t x247 = 2U;
	static int32_t x248 = 474462;
	static volatile int32_t t58 = 54306;

    t58 = (x245+((x246/x247)%x248));

    if (t58 != 14) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x249 = 5U;
	int32_t x250 = -1;
	uint64_t x251 = 2202838450LLU;
	int8_t x252 = -54;

    t59 = (x249+((x250/x251)%x252));

    if (t59 != 8374079399LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x253 = INT32_MAX;
	int8_t x256 = -1;
	int32_t t60 = INT32_MAX;

    t60 = (x253+((x254/x255)%x256));

    if (t60 != INT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x257 = INT16_MIN;
	volatile uint16_t x259 = 84U;

    t61 = (x257+((x258/x259)%x260));

    if (t61 != -32767) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x261 = 155U;
	volatile int64_t x262 = -63808710302LL;
	volatile int64_t x263 = INT64_MIN;
	int16_t x264 = -541;
	int64_t t62 = -30LL;

    t62 = (x261+((x262/x263)%x264));

    if (t62 != 155LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x265 = -44183LL;
	int16_t x266 = INT16_MAX;
	int32_t x267 = INT32_MIN;
	uint32_t x268 = UINT32_MAX;

    t63 = (x265+((x266/x267)%x268));

    if (t63 != -44183LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x270 = UINT32_MAX;
	volatile uint64_t t64 = 1259578549017LLU;

    t64 = (x269+((x270/x271)%x272));

    if (t64 != 763654102LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x273 = 38U;
	int16_t x274 = INT16_MIN;
	uint32_t x275 = 39952518U;
	uint8_t x276 = 8U;
	uint32_t t65 = 46U;

    t65 = (x273+((x274/x275)%x276));

    if (t65 != 41U) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint16_t x277 = 20U;
	static int8_t x279 = INT8_MIN;
	uint64_t x280 = 4169485728LLU;
	static uint64_t t66 = 31101529849LLU;

    t66 = (x277+((x278/x279)%x280));

    if (t66 != 3822973044LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x281 = INT8_MIN;
	static int64_t x282 = INT64_MIN;
	static volatile int16_t x284 = INT16_MIN;
	volatile int64_t t67 = 158533LL;

    t67 = (x281+((x282/x283)%x284));

    if (t67 != -32640LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x289 = 219U;
	int16_t x290 = INT16_MAX;
	int8_t x291 = INT8_MAX;
	volatile int32_t t68 = 91;

    t68 = (x289+((x290/x291)%x292));

    if (t68 != 477) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x293 = 997U;
	volatile int16_t x294 = 509;
	int32_t t69 = -813;

    t69 = (x293+((x294/x295)%x296));

    if (t69 != 997) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x297 = 168888U;
	int32_t x298 = INT32_MIN;
	int32_t x300 = -1;
	volatile uint32_t t70 = 0U;

    t70 = (x297+((x298/x299)%x300));

    if (t70 != 168888U) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x301 = INT8_MIN;
	int8_t x302 = INT8_MIN;
	static uint8_t x303 = 18U;
	int8_t x304 = INT8_MIN;

    t71 = (x301+((x302/x303)%x304));

    if (t71 != -135) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x306 = -117;
	int32_t x308 = -1;
	volatile int64_t t72 = 1LL;

    t72 = (x305+((x306/x307)%x308));

    if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int16_t x309 = 11726;
	uint16_t x310 = 14U;
	int64_t x311 = -465916456744568782LL;
	uint64_t x312 = 53896190151646LLU;
	volatile uint64_t t73 = 1LLU;

    t73 = (x309+((x310/x311)%x312));

    if (t73 != 11726LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x313 = 2U;
	uint32_t x314 = 10U;
	static uint32_t x315 = 119U;
	static uint32_t t74 = 140U;

    t74 = (x313+((x314/x315)%x316));

    if (t74 != 2U) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x317 = UINT16_MAX;
	static int16_t x318 = INT16_MIN;
	uint16_t x319 = 3U;
	int64_t x320 = INT64_MAX;
	volatile int64_t t75 = 334975333392LL;

    t75 = (x317+((x318/x319)%x320));

    if (t75 != 54613LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x321 = INT16_MIN;
	int32_t x322 = -10482;
	static volatile int32_t x323 = -1;
	int16_t x324 = INT16_MAX;
	int32_t t76 = 226;

    t76 = (x321+((x322/x323)%x324));

    if (t76 != -22286) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x329 = 0U;
	uint8_t x330 = 8U;
	static int32_t x331 = -198182;
	int32_t x332 = INT32_MIN;
	int32_t t77 = 1;

    t77 = (x329+((x330/x331)%x332));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x333 = 262316795772347332LL;
	int16_t x335 = INT16_MAX;
	int64_t x336 = INT64_MIN;

    t78 = (x333+((x334/x335)%x336));

    if (t78 != 262316795772347339LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x337 = -1;
	int32_t x339 = INT32_MAX;
	uint16_t x340 = UINT16_MAX;

    t79 = (x337+((x338/x339)%x340));

    if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x341 = 187343039616LLU;
	int16_t x342 = -1;
	uint32_t x344 = 1851U;
	volatile uint64_t t80 = 4LLU;

    t80 = (x341+((x342/x343)%x344));

    if (t80 != 187343039616LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x346 = UINT32_MAX;
	volatile uint16_t x347 = UINT16_MAX;
	int16_t x348 = -3;
	int64_t t81 = 14LL;

    t81 = (x345+((x346/x347)%x348));

    if (t81 != 7330535574740LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x349 = 0LLU;
	int64_t x351 = -167LL;
	static volatile int64_t x352 = -46334650834005LL;
	uint64_t t82 = 5932724524540160LLU;

    t82 = (x349+((x350/x351)%x352));

    if (t82 != 19LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x353 = INT32_MAX;
	uint8_t x354 = 19U;
	uint64_t x355 = UINT64_MAX;
	uint8_t x356 = UINT8_MAX;
	uint64_t t83 = 213759LLU;

    t83 = (x353+((x354/x355)%x356));

    if (t83 != 2147483647LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x357 = INT64_MAX;
	static volatile int16_t x359 = INT16_MIN;
	int16_t x360 = INT16_MIN;
	volatile int64_t t84 = INT64_MAX;

    t84 = (x357+((x358/x359)%x360));

    if (t84 != INT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int8_t x361 = 3;
	static uint8_t x362 = UINT8_MAX;
	int8_t x363 = -12;
	int32_t x364 = -88447;

    t85 = (x361+((x362/x363)%x364));

    if (t85 != -18) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x366 = 0;
	volatile uint8_t x367 = 1U;
	uint8_t x368 = 44U;
	volatile int32_t t86 = -3;

    t86 = (x365+((x366/x367)%x368));

    if (t86 != 127) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x373 = UINT16_MAX;
	int32_t x376 = -356739113;

    t87 = (x373+((x374/x375)%x376));

    if (t87 != 65535) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile int64_t x378 = -1LL;
	volatile uint64_t x379 = 56LLU;
	uint16_t x380 = UINT16_MAX;
	static volatile uint64_t t88 = 1115119LLU;

    t88 = (x377+((x378/x379)%x380));

    if (t88 != 1042LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x385 = 14689;
	int64_t x386 = -1LL;
	int32_t x387 = -1;
	static int8_t x388 = INT8_MIN;
	volatile int64_t t89 = -7LL;

    t89 = (x385+((x386/x387)%x388));

    if (t89 != 14690LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x389 = INT64_MAX;
	int16_t x390 = INT16_MAX;
	volatile int16_t x391 = -1;
	int32_t x392 = INT32_MIN;
	volatile int64_t t90 = 57277LL;

    t90 = (x389+((x390/x391)%x392));

    if (t90 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int8_t x394 = INT8_MIN;
	volatile uint8_t x396 = UINT8_MAX;
	uint64_t t91 = UINT64_MAX;

    t91 = (x393+((x394/x395)%x396));

    if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x397 = -254;
	volatile int64_t x398 = 633LL;
	static int64_t t92 = 367LL;

    t92 = (x397+((x398/x399)%x400));

    if (t92 != -252LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x401 = INT8_MAX;
	volatile int8_t x402 = -5;
	uint16_t x403 = 26U;
	uint16_t x404 = UINT16_MAX;

    t93 = (x401+((x402/x403)%x404));

    if (t93 != 127) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int32_t x408 = INT32_MAX;
	static int32_t t94 = INT32_MIN;

    t94 = (x405+((x406/x407)%x408));

    if (t94 != INT32_MIN) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x409 = -1;
	int64_t x411 = -3319040402LL;
	uint32_t x412 = 240329U;
	int64_t t95 = 942LL;

    t95 = (x409+((x410/x411)%x412));

    if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x413 = INT32_MIN;
	int16_t x414 = INT16_MIN;
	volatile int32_t t96 = INT32_MIN;

    t96 = (x413+((x414/x415)%x416));

    if (t96 != INT32_MIN) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x417 = INT64_MIN;
	int32_t x419 = INT32_MIN;
	static int16_t x420 = -1753;

    t97 = (x417+((x418/x419)%x420));

    if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x422 = -14371050;
	int8_t x423 = -1;
	int32_t x424 = INT32_MAX;

    t98 = (x421+((x422/x423)%x424));

    if (t98 != 14371049LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x425 = UINT32_MAX;
	static uint64_t x426 = 82221LLU;
	volatile int16_t x427 = 11;
	int16_t x428 = INT16_MAX;

    t99 = (x425+((x426/x427)%x428));

    if (t99 != 4294974769LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile uint8_t x429 = 94U;
	int16_t x430 = -6;
	uint16_t x431 = 6706U;
	int32_t x432 = INT32_MAX;
	int32_t t100 = -6551128;

    t100 = (x429+((x430/x431)%x432));

    if (t100 != 94) { NG(); } else { ; }
	
}

void f101(void) {
    	static int64_t x433 = -181244174602736339LL;
	int64_t x434 = INT64_MIN;
	static uint64_t x435 = 3317005607LLU;
	volatile uint64_t t101 = 234406LLU;

    t101 = (x433+((x434/x435)%x436));

    if (t101 != 18265499899106815323LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x437 = 206843669376LLU;
	int16_t x438 = 359;
	int32_t x439 = INT32_MAX;
	int8_t x440 = 16;

    t102 = (x437+((x438/x439)%x440));

    if (t102 != 206843669376LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint8_t x441 = 74U;
	volatile int16_t x442 = INT16_MIN;
	static int32_t x443 = -1;
	volatile uint64_t x444 = 8529048816959988791LLU;
	uint64_t t103 = 31371LLU;

    t103 = (x441+((x442/x443)%x444));

    if (t103 != 32842LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x445 = 237U;
	static int32_t x446 = INT32_MIN;
	uint16_t x447 = 1U;
	uint64_t t104 = 3427812LLU;

    t104 = (x445+((x446/x447)%x448));

    if (t104 != 5125485LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x449 = INT16_MIN;
	int32_t x451 = -1;
	static uint32_t x452 = 1822845U;
	uint32_t t105 = 737741U;

    t105 = (x449+((x450/x451)%x452));

    if (t105 != 4294934529U) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x457 = -1;
	volatile int16_t x458 = 0;
	int16_t x459 = -1;
	uint8_t x460 = UINT8_MAX;
	volatile int32_t t106 = -260755;

    t106 = (x457+((x458/x459)%x460));

    if (t106 != -1) { NG(); } else { ; }
	
}

void f107(void) {
    	static int16_t x461 = INT16_MAX;
	int16_t x462 = 21;
	int32_t x463 = -1;
	static uint32_t x464 = 57165649U;
	static uint32_t t107 = 25358U;

    t107 = (x461+((x462/x463)%x464));

    if (t107 != 7576367U) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint8_t x465 = 19U;
	int64_t x466 = INT64_MIN;
	int8_t x467 = INT8_MIN;
	volatile int16_t x468 = -106;
	volatile int64_t t108 = 350338000595987271LL;

    t108 = (x465+((x466/x467)%x468));

    if (t108 != 35LL) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint32_t x469 = UINT32_MAX;
	int16_t x471 = 1;
	static int16_t x472 = INT16_MAX;
	static volatile uint32_t t109 = 643885U;

    t109 = (x469+((x470/x471)%x472));

    if (t109 != 3898U) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint64_t x473 = UINT64_MAX;
	int32_t x474 = 0;
	static int16_t x476 = INT16_MAX;

    t110 = (x473+((x474/x475)%x476));

    if (t110 != UINT64_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x477 = INT8_MAX;
	static int32_t x478 = INT32_MIN;
	static int16_t x480 = INT16_MIN;

    t111 = (x477+((x478/x479)%x480));

    if (t111 != -14290) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x481 = INT16_MIN;
	int64_t x482 = 219508LL;
	int64_t x484 = -1LL;
	volatile int64_t t112 = -1616374116LL;

    t112 = (x481+((x482/x483)%x484));

    if (t112 != -32768LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x486 = INT8_MIN;
	static int64_t x487 = -1268398301673LL;
	int16_t x488 = INT16_MAX;
	volatile int64_t t113 = 1489525834999LL;

    t113 = (x485+((x486/x487)%x488));

    if (t113 != 677LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x490 = -2;
	static uint16_t x492 = UINT16_MAX;
	volatile int64_t t114 = 27422015405416725LL;

    t114 = (x489+((x490/x491)%x492));

    if (t114 != 4294967295LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int32_t x493 = INT32_MIN;
	int64_t x494 = INT64_MAX;
	volatile uint32_t x495 = UINT32_MAX;
	volatile int64_t t115 = -1LL;

    t115 = (x493+((x494/x495)%x496));

    if (t115 != -2147483646LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint16_t x501 = UINT16_MAX;
	static int8_t x502 = INT8_MAX;
	int64_t x503 = INT64_MIN;
	static int32_t x504 = INT32_MIN;
	static int64_t t116 = -1237565656721LL;

    t116 = (x501+((x502/x503)%x504));

    if (t116 != 65535LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x505 = INT8_MIN;
	int8_t x506 = 9;
	int8_t x507 = 1;
	uint32_t x508 = 3U;
	volatile uint32_t t117 = 2151955U;

    t117 = (x505+((x506/x507)%x508));

    if (t117 != 4294967168U) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x510 = 3632LL;
	static int64_t x512 = 497914130269504028LL;
	volatile int64_t t118 = -263905290661LL;

    t118 = (x509+((x510/x511)%x512));

    if (t118 != 362LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x513 = INT32_MIN;
	int8_t x514 = INT8_MAX;
	uint8_t x516 = UINT8_MAX;
	volatile uint64_t t119 = 121096782647589419LLU;

    t119 = (x513+((x514/x515)%x516));

    if (t119 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint8_t x518 = 101U;
	int16_t x519 = INT16_MAX;
	volatile int16_t x520 = INT16_MAX;
	static uint32_t t120 = 174385U;

    t120 = (x517+((x518/x519)%x520));

    if (t120 != 1716761916U) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x521 = 4337U;
	uint64_t x522 = 2658404748LLU;
	int64_t x523 = INT64_MAX;
	uint64_t t121 = 342682999738541137LLU;

    t121 = (x521+((x522/x523)%x524));

    if (t121 != 4337LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x529 = INT64_MIN;
	int16_t x530 = INT16_MAX;
	uint32_t x531 = 30094U;
	int64_t t122 = 52293774LL;

    t122 = (x529+((x530/x531)%x532));

    if (t122 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int32_t x534 = INT32_MAX;
	volatile uint64_t x536 = 87044170LLU;
	uint64_t t123 = 3LLU;

    t123 = (x533+((x534/x535)%x536));

    if (t123 != 53573950LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x538 = -126LL;
	static int8_t x539 = -2;
	volatile int64_t t124 = 16046LL;

    t124 = (x537+((x538/x539)%x540));

    if (t124 != -1LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x541 = INT32_MAX;
	static int8_t x542 = -16;
	static volatile int8_t x543 = -1;
	volatile int64_t x544 = INT64_MIN;
	int64_t t125 = -1413483398959177086LL;

    t125 = (x541+((x542/x543)%x544));

    if (t125 != 2147483663LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x545 = UINT32_MAX;
	int16_t x547 = INT16_MIN;
	uint32_t t126 = UINT32_MAX;

    t126 = (x545+((x546/x547)%x548));

    if (t126 != UINT32_MAX) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x549 = -1LL;
	int16_t x550 = INT16_MIN;
	volatile int32_t x551 = INT32_MAX;
	int8_t x552 = -1;
	volatile int64_t t127 = -2543LL;

    t127 = (x549+((x550/x551)%x552));

    if (t127 != -1LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x554 = INT32_MAX;
	int16_t x556 = INT16_MAX;
	static volatile int32_t t128 = -7216217;

    t128 = (x553+((x554/x555)%x556));

    if (t128 != -32769) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x557 = -1;
	static int8_t x558 = INT8_MAX;
	int16_t x559 = INT16_MIN;
	int64_t x560 = INT64_MIN;

    t129 = (x557+((x558/x559)%x560));

    if (t129 != -1LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint8_t x561 = 3U;
	uint32_t x563 = 51U;
	uint64_t x564 = 1518871942389994LLU;
	uint64_t t130 = 531901788870LLU;

    t130 = (x561+((x562/x563)%x564));

    if (t130 != 1288LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x566 = 63347U;
	uint64_t x567 = UINT64_MAX;

    t131 = (x565+((x566/x567)%x568));

    if (t131 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int64_t x574 = INT64_MIN;
	int8_t x575 = INT8_MIN;
	static uint64_t t132 = UINT64_MAX;

    t132 = (x573+((x574/x575)%x576));

    if (t132 != UINT64_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x577 = 6U;
	uint16_t x578 = UINT16_MAX;
	int64_t x580 = -3406705LL;
	int64_t t133 = -27550041685LL;

    t133 = (x577+((x578/x579)%x580));

    if (t133 != 6LL) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int16_t x581 = INT16_MAX;
	int32_t x582 = 15;
	static int64_t x583 = 99944LL;

    t134 = (x581+((x582/x583)%x584));

    if (t134 != 32767LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint32_t x585 = 7264U;
	static int64_t x586 = INT64_MIN;
	int64_t x588 = INT64_MIN;

    t135 = (x585+((x586/x587)%x588));

    if (t135 != -1095932989162742LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x589 = 1;
	volatile int8_t x590 = -11;
	int64_t x591 = INT64_MAX;
	int8_t x592 = INT8_MIN;

    t136 = (x589+((x590/x591)%x592));

    if (t136 != 1LL) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x593 = INT32_MIN;
	int8_t x594 = INT8_MIN;
	static uint64_t x595 = 1594028LLU;
	uint32_t x596 = 2U;
	static volatile uint64_t t137 = 3232LLU;

    t137 = (x593+((x594/x595)%x596));

    if (t137 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x597 = -353;
	uint32_t x598 = 3217358U;
	volatile int8_t x599 = -7;
	uint32_t t138 = 56040U;

    t138 = (x597+((x598/x599)%x600));

    if (t138 != 4294966943U) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x601 = -13951;
	uint16_t x602 = 148U;
	volatile uint16_t x603 = 6U;
	int64_t x604 = INT64_MAX;
	volatile int64_t t139 = -514397LL;

    t139 = (x601+((x602/x603)%x604));

    if (t139 != -13927LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x605 = INT16_MAX;
	int64_t x607 = 7608887LL;
	int16_t x608 = -1;
	int64_t t140 = 625326LL;

    t140 = (x605+((x606/x607)%x608));

    if (t140 != 32767LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x609 = 100U;
	volatile uint64_t x610 = UINT64_MAX;
	int32_t x611 = -1;
	volatile int32_t x612 = INT32_MIN;
	volatile uint64_t t141 = 3923LLU;

    t141 = (x609+((x610/x611)%x612));

    if (t141 != 101LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x613 = INT32_MAX;
	uint32_t x614 = 26U;
	static uint8_t x615 = 1U;
	uint64_t x616 = 254794878LLU;
	volatile uint64_t t142 = 43915145LLU;

    t142 = (x613+((x614/x615)%x616));

    if (t142 != 2147483673LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x617 = INT16_MIN;
	static uint8_t x619 = 68U;
	static int8_t x620 = -1;

    t143 = (x617+((x618/x619)%x620));

    if (t143 != -32768LL) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int32_t x621 = INT32_MAX;
	int32_t x622 = INT32_MAX;
	int16_t x623 = INT16_MIN;
	int32_t t144 = 196;

    t144 = (x621+((x622/x623)%x624));

    if (t144 != 2147418112) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile uint64_t x629 = UINT64_MAX;
	volatile int32_t x631 = INT32_MAX;
	uint16_t x632 = 2498U;
	uint64_t t145 = UINT64_MAX;

    t145 = (x629+((x630/x631)%x632));

    if (t145 != UINT64_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x633 = 2870;
	int8_t x635 = -9;
	int64_t x636 = INT64_MIN;
	static volatile int64_t t146 = 3LL;

    t146 = (x633+((x634/x635)%x636));

    if (t146 != -4411LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x637 = 2;
	static uint64_t x638 = 31223736LLU;
	static int16_t x639 = INT16_MIN;
	uint8_t x640 = UINT8_MAX;
	volatile uint64_t t147 = 29LLU;

    t147 = (x637+((x638/x639)%x640));

    if (t147 != 2LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	static int8_t x641 = INT8_MAX;
	volatile int32_t x642 = -174942;
	volatile uint64_t x643 = UINT64_MAX;
	uint64_t t148 = 54047905512643008LLU;

    t148 = (x641+((x642/x643)%x644));

    if (t148 != 127LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int8_t x645 = INT8_MIN;
	uint32_t x646 = 5655U;
	int8_t x647 = INT8_MIN;
	uint16_t x648 = 700U;
	static uint32_t t149 = 5757U;

    t149 = (x645+((x646/x647)%x648));

    if (t149 != 4294967168U) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x649 = UINT8_MAX;
	int16_t x650 = INT16_MIN;
	int32_t x651 = INT32_MAX;

    t150 = (x649+((x650/x651)%x652));

    if (t150 != 255) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x653 = INT8_MAX;
	uint64_t x654 = UINT64_MAX;
	static int32_t x655 = 268251;
	volatile int32_t x656 = INT32_MAX;
	volatile uint64_t t151 = 1125LLU;

    t151 = (x653+((x654/x655)%x656));

    if (t151 != 8598035LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x657 = INT8_MAX;
	static int64_t x658 = 19807916LL;
	static volatile int8_t x659 = 1;
	static uint64_t x660 = 4178537391630582748LLU;
	volatile uint64_t t152 = 1985257471627LLU;

    t152 = (x657+((x658/x659)%x660));

    if (t152 != 19808043LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x661 = -457;
	volatile int32_t x662 = 28158;
	int16_t x663 = 113;
	int32_t x664 = -10556;
	int32_t t153 = 176079020;

    t153 = (x661+((x662/x663)%x664));

    if (t153 != -208) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int8_t x667 = -1;
	volatile int64_t t154 = 92183965LL;

    t154 = (x665+((x666/x667)%x668));

    if (t154 != -409LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x669 = INT8_MIN;
	volatile int8_t x670 = -1;
	int16_t x671 = 1;
	static int32_t t155 = 26576812;

    t155 = (x669+((x670/x671)%x672));

    if (t155 != -129) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int16_t x673 = 16117;
	static uint16_t x675 = UINT16_MAX;
	static uint64_t x676 = 5469439137752LLU;
	static uint64_t t156 = 0LLU;

    t156 = (x673+((x674/x675)%x676));

    if (t156 != 16117LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint32_t x677 = UINT32_MAX;
	uint32_t x678 = 205U;
	int8_t x679 = INT8_MIN;
	int64_t t157 = 23681LL;

    t157 = (x677+((x678/x679)%x680));

    if (t157 != 4294967295LL) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint8_t x681 = 20U;
	int16_t x682 = -1;
	uint16_t x683 = UINT16_MAX;
	int64_t x684 = 154LL;
	volatile int64_t t158 = -88534999004LL;

    t158 = (x681+((x682/x683)%x684));

    if (t158 != 20LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x685 = 1766U;
	volatile int64_t x686 = -45535475949LL;
	uint32_t x687 = UINT32_MAX;
	int8_t x688 = INT8_MAX;
	int64_t t159 = 2668021168LL;

    t159 = (x685+((x686/x687)%x688));

    if (t159 != 1756LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x689 = 57U;
	int8_t x690 = INT8_MIN;
	int64_t x691 = -28LL;
	uint64_t x692 = 12892392320103LLU;
	volatile uint64_t t160 = 17350105068990LLU;

    t160 = (x689+((x690/x691)%x692));

    if (t160 != 61LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x701 = -602321367036LL;
	volatile int64_t x702 = -1LL;
	static volatile int32_t x704 = INT32_MIN;
	int64_t t161 = -950186236017LL;

    t161 = (x701+((x702/x703)%x704));

    if (t161 != -602321367036LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x706 = UINT16_MAX;
	volatile int32_t x707 = INT32_MIN;
	int16_t x708 = -1;
	int32_t t162 = -2;

    t162 = (x705+((x706/x707)%x708));

    if (t162 != 76) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint64_t x709 = 11LLU;
	static int32_t x710 = INT32_MIN;
	int8_t x711 = INT8_MIN;

    t163 = (x709+((x710/x711)%x712));

    if (t163 != 19LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x713 = -1;
	volatile int8_t x714 = -49;
	uint32_t x715 = UINT32_MAX;
	volatile int16_t x716 = -1;
	static uint32_t t164 = UINT32_MAX;

    t164 = (x713+((x714/x715)%x716));

    if (t164 != UINT32_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint64_t x721 = 745734LLU;
	uint32_t x722 = UINT32_MAX;
	uint16_t x723 = 77U;
	uint32_t x724 = 97626057U;
	uint64_t t165 = 72286065978LLU;

    t165 = (x721+((x722/x723)%x724));

    if (t165 != 56524530LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x725 = -14747432210486LL;
	static int8_t x726 = -1;

    t166 = (x725+((x726/x727)%x728));

    if (t166 != -14747432210486LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint16_t x730 = UINT16_MAX;
	int16_t x731 = 33;
	volatile int8_t x732 = -7;
	int32_t t167 = 334591290;

    t167 = (x729+((x730/x731)%x732));

    if (t167 != -124) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint32_t x733 = UINT32_MAX;
	volatile uint8_t x734 = UINT8_MAX;
	volatile uint16_t x735 = UINT16_MAX;
	int16_t x736 = INT16_MIN;
	uint32_t t168 = UINT32_MAX;

    t168 = (x733+((x734/x735)%x736));

    if (t168 != UINT32_MAX) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x737 = INT64_MAX;
	uint64_t x738 = 29997764559393719LLU;
	uint32_t x739 = 382393109U;
	int16_t x740 = INT16_MIN;
	static uint64_t t169 = 92199480LLU;

    t169 = (x737+((x738/x739)%x740));

    if (t169 != 9223372036933223257LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x741 = INT16_MIN;
	volatile int8_t x742 = -1;
	int64_t x743 = -28447575723LL;
	int8_t x744 = INT8_MAX;
	static int64_t t170 = -375885048LL;

    t170 = (x741+((x742/x743)%x744));

    if (t170 != -32768LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x745 = 1U;
	int16_t x746 = INT16_MIN;
	int64_t x747 = -1LL;
	int8_t x748 = INT8_MIN;
	static int64_t t171 = 363570932LL;

    t171 = (x745+((x746/x747)%x748));

    if (t171 != 1LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile uint8_t x750 = 41U;
	volatile int8_t x752 = 2;
	static volatile int32_t t172 = 337850;

    t172 = (x749+((x750/x751)%x752));

    if (t172 != -2) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x753 = -38150884085LL;
	volatile int64_t x755 = INT64_MIN;

    t173 = (x753+((x754/x755)%x756));

    if (t173 != -38150884085LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x757 = 84U;
	int16_t x759 = INT16_MAX;
	static uint32_t x760 = 2110U;
	uint32_t t174 = 0U;

    t174 = (x757+((x758/x759)%x760));

    if (t174 != 84U) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint16_t x761 = 3147U;
	volatile int64_t x762 = INT64_MAX;
	static uint32_t x763 = 5921U;
	int64_t t175 = 942240196629387999LL;

    t175 = (x761+((x762/x763)%x764));

    if (t175 != 16572LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint16_t x765 = UINT16_MAX;
	static int32_t x766 = INT32_MIN;
	uint32_t x767 = UINT32_MAX;
	uint64_t x768 = 6535LLU;
	uint64_t t176 = 22430188657594302LLU;

    t176 = (x765+((x766/x767)%x768));

    if (t176 != 65535LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x769 = UINT8_MAX;
	int32_t x770 = -2254;
	volatile int64_t x771 = -21LL;
	int16_t x772 = -5927;
	int64_t t177 = -8331330LL;

    t177 = (x769+((x770/x771)%x772));

    if (t177 != 362LL) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint16_t x773 = 4704U;
	int8_t x774 = -1;
	static int64_t x775 = INT64_MIN;
	volatile int8_t x776 = INT8_MIN;
	int64_t t178 = -28450430588LL;

    t178 = (x773+((x774/x775)%x776));

    if (t178 != 4704LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x777 = 15U;
	uint16_t x778 = 40U;
	volatile int16_t x779 = INT16_MIN;
	volatile int32_t x780 = -1;

    t179 = (x777+((x778/x779)%x780));

    if (t179 != 15) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint8_t x781 = 0U;
	static int32_t x782 = -1;
	int8_t x783 = 2;
	int8_t x784 = -2;
	volatile int32_t t180 = 523222122;

    t180 = (x781+((x782/x783)%x784));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x785 = -1;
	static int32_t x786 = 170;
	int32_t x787 = 9;
	int32_t t181 = 279741170;

    t181 = (x785+((x786/x787)%x788));

    if (t181 != 17) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x789 = -1;
	int8_t x790 = -1;
	int32_t x791 = -4;
	int16_t x792 = -45;
	int32_t t182 = -959936;

    t182 = (x789+((x790/x791)%x792));

    if (t182 != -1) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x793 = INT32_MAX;
	uint8_t x794 = 18U;
	int64_t x795 = INT64_MIN;
	static int8_t x796 = INT8_MAX;
	int64_t t183 = 1LL;

    t183 = (x793+((x794/x795)%x796));

    if (t183 != 2147483647LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x797 = 1U;
	uint32_t x799 = UINT32_MAX;
	volatile uint8_t x800 = 1U;
	static volatile uint32_t t184 = 8147U;

    t184 = (x797+((x798/x799)%x800));

    if (t184 != 1U) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x801 = -4;
	volatile int32_t x802 = INT32_MIN;
	volatile int8_t x803 = INT8_MIN;
	volatile int32_t t185 = 32906655;

    t185 = (x801+((x802/x803)%x804));

    if (t185 != -4) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint64_t x806 = 504023830LLU;
	int16_t x808 = INT16_MAX;
	volatile uint64_t t186 = 10640280626225LLU;

    t186 = (x805+((x806/x807)%x808));

    if (t186 != 36LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x813 = 0;
	static uint64_t x814 = 17600LLU;
	uint8_t x815 = 1U;
	volatile int32_t x816 = INT32_MIN;
	static volatile uint64_t t187 = 185870LLU;

    t187 = (x813+((x814/x815)%x816));

    if (t187 != 17600LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint32_t x821 = 7341664U;
	static volatile int64_t x822 = -1LL;
	volatile uint8_t x823 = 14U;
	static volatile int64_t x824 = -1LL;
	int64_t t188 = -57322974575155018LL;

    t188 = (x821+((x822/x823)%x824));

    if (t188 != 7341664LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int32_t x829 = -3;
	int16_t x831 = INT16_MIN;
	uint16_t x832 = 19U;
	volatile int32_t t189 = 911736;

    t189 = (x829+((x830/x831)%x832));

    if (t189 != -3) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x833 = -1;
	volatile int16_t x834 = -46;
	static int64_t x835 = INT64_MAX;
	volatile int64_t t190 = -27568LL;

    t190 = (x833+((x834/x835)%x836));

    if (t190 != -1LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x837 = 0;
	uint64_t x838 = 193774398116525LLU;
	uint16_t x839 = UINT16_MAX;
	static uint8_t x840 = 3U;
	uint64_t t191 = 1161666293024LLU;

    t191 = (x837+((x838/x839)%x840));

    if (t191 != 1LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint64_t x841 = 2729447269237LLU;
	uint32_t x842 = UINT32_MAX;
	static volatile int16_t x844 = -1;
	uint64_t t192 = 7979740156971LLU;

    t192 = (x841+((x842/x843)%x844));

    if (t192 != 2729447269238LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x845 = 6U;
	volatile uint8_t x848 = UINT8_MAX;
	volatile int32_t t193 = 161581;

    t193 = (x845+((x846/x847)%x848));

    if (t193 != 73) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x849 = INT32_MAX;
	static volatile int32_t x850 = -1;
	static int64_t x851 = INT64_MAX;

    t194 = (x849+((x850/x851)%x852));

    if (t194 != 2147483647LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x854 = -1;
	static int16_t x855 = INT16_MIN;
	int8_t x856 = INT8_MAX;

    t195 = (x853+((x854/x855)%x856));

    if (t195 != INT32_MIN) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x857 = INT16_MIN;
	static volatile uint64_t x859 = 27163866240676LLU;
	uint32_t x860 = UINT32_MAX;
	volatile uint64_t t196 = 229888662865LLU;

    t196 = (x857+((x858/x859)%x860));

    if (t196 != 646323LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x861 = UINT64_MAX;
	volatile uint8_t x862 = UINT8_MAX;
	int16_t x864 = INT16_MIN;
	volatile uint64_t t197 = UINT64_MAX;

    t197 = (x861+((x862/x863)%x864));

    if (t197 != UINT64_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x867 = 94528536U;
	uint32_t x868 = 659562U;
	volatile uint32_t t198 = 93782U;

    t198 = (x865+((x866/x867)%x868));

    if (t198 != 2147483647U) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x869 = 6LLU;
	int64_t x871 = -4481765049390821248LL;
	volatile uint8_t x872 = UINT8_MAX;
	uint64_t t199 = 3404179494005473249LLU;

    t199 = (x869+((x870/x871)%x872));

    if (t199 != 6LLU) { NG(); } else { ; }
	
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

