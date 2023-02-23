
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

static volatile int16_t x3 = INT16_MAX;
uint32_t x7 = UINT32_MAX;
static int64_t t1 = -1LL;
int32_t x13 = -1;
static int8_t x21 = INT8_MAX;
volatile int16_t x24 = INT16_MIN;
volatile int64_t t6 = -1332290084779LL;
int64_t x35 = -855848LL;
uint64_t x50 = 26622562544951031LLU;
uint16_t x59 = 474U;
volatile int64_t x62 = INT64_MAX;
volatile int64_t t13 = 1271969081669160LL;
static int16_t x67 = INT16_MAX;
uint8_t x68 = UINT8_MAX;
int64_t t15 = 34475350LL;
static int16_t x79 = INT16_MIN;
int32_t t17 = -130112;
static int64_t x83 = -1LL;
static volatile int16_t x89 = -956;
int64_t x92 = INT64_MAX;
volatile int32_t t21 = -2917719;
uint16_t x103 = UINT16_MAX;
int8_t x108 = INT8_MIN;
int16_t x110 = INT16_MIN;
int64_t x112 = INT64_MIN;
int16_t x113 = 1693;
int8_t x114 = -1;
uint8_t x116 = 6U;
uint32_t x124 = 5308355U;
uint8_t x127 = UINT8_MAX;
volatile int32_t t29 = -199;
volatile uint64_t x134 = 3950LLU;
uint32_t x135 = 1080U;
static uint8_t x145 = 1U;
uint16_t x147 = UINT16_MAX;
static uint8_t x151 = 20U;
int8_t x153 = 46;
static volatile uint16_t x157 = UINT16_MAX;
static int16_t x160 = -1;
uint8_t x166 = 0U;
int16_t x167 = -1;
uint64_t t38 = 165756687201817720LLU;
int16_t x172 = -366;
int64_t x174 = 1966091101LL;
int8_t x177 = INT8_MAX;
uint16_t x182 = UINT16_MAX;
static int8_t x188 = INT8_MIN;
volatile int16_t x198 = INT16_MIN;
int32_t x202 = INT32_MAX;
volatile uint64_t t46 = 931117185259LLU;
int64_t t47 = -266850731LL;
uint64_t x220 = 134034424175236LLU;
uint64_t t49 = 715119302166LLU;
uint64_t t50 = 160044LLU;
static int16_t x227 = INT16_MIN;
static int64_t x230 = INT64_MAX;
volatile int64_t t52 = -2218LL;
volatile int8_t x245 = INT8_MAX;
int16_t x249 = INT16_MIN;
volatile uint32_t t55 = 835208U;
uint8_t x255 = 16U;
static volatile int64_t x259 = INT64_MAX;
int64_t t58 = 13LL;
static uint64_t x277 = UINT64_MAX;
static uint32_t x281 = UINT32_MAX;
int32_t x288 = 399119455;
volatile int16_t x291 = -9136;
static volatile int16_t x293 = -1;
volatile int8_t x301 = INT8_MIN;
static uint32_t x304 = UINT32_MAX;
int32_t x317 = 2;
int16_t x321 = INT16_MIN;
static uint32_t x323 = 13030U;
int64_t x328 = INT64_MIN;
static int32_t x335 = INT32_MIN;
volatile uint64_t t73 = 2485601080100843845LLU;
volatile int16_t x338 = 178;
static int64_t x340 = INT64_MIN;
int64_t x341 = 290LL;
int8_t x345 = INT8_MAX;
int32_t x346 = -1;
uint8_t x347 = 102U;
volatile int64_t t78 = -174218LL;
int16_t x361 = -1;
static int64_t x365 = INT64_MIN;
static volatile uint8_t x369 = 89U;
int32_t x374 = INT32_MAX;
uint8_t x377 = 2U;
int64_t x381 = INT64_MIN;
static volatile int64_t t84 = 51LL;
static volatile int32_t x391 = INT32_MAX;
int8_t x397 = INT8_MAX;
int32_t x404 = INT32_MAX;
uint32_t x406 = UINT32_MAX;
static uint32_t t90 = 398U;
static int64_t x424 = 3LL;
int64_t t92 = -7LL;
int16_t x425 = -205;
volatile uint64_t t93 = 180928718LLU;
int8_t x430 = INT8_MIN;
int16_t x437 = -1;
static int16_t x445 = -1;
int64_t t99 = -29819LL;
static volatile int64_t x460 = INT64_MAX;
int64_t x461 = 467116194548LL;
uint64_t x479 = UINT64_MAX;
int16_t x480 = -6;
volatile int8_t x481 = -3;
volatile int16_t x482 = -14275;
int8_t x484 = -1;
int32_t t107 = 1843873;
int8_t x488 = INT8_MAX;
uint32_t x495 = UINT32_MAX;
uint16_t x503 = UINT16_MAX;
int32_t x505 = INT32_MAX;
uint32_t x506 = 496144674U;
static uint64_t x507 = UINT64_MAX;
int8_t x508 = INT8_MAX;
volatile int64_t x511 = -1LL;
int32_t x516 = 957;
int64_t t116 = 1390611355378LL;
uint64_t x530 = 207LLU;
uint16_t x533 = 8960U;
int64_t x534 = INT64_MIN;
int64_t x542 = INT64_MIN;
int8_t x543 = INT8_MIN;
volatile int64_t t119 = -2076617854LL;
uint8_t x546 = 1U;
int64_t x547 = -1LL;
uint8_t x553 = 10U;
volatile int8_t x554 = INT8_MIN;
volatile uint64_t x565 = 994762137113710687LLU;
uint16_t x568 = 456U;
int8_t x569 = INT8_MIN;
uint32_t x581 = UINT32_MAX;
volatile uint16_t x585 = 4811U;
uint64_t x587 = 5066LLU;
uint64_t x592 = UINT64_MAX;
volatile int8_t x595 = INT8_MIN;
volatile uint16_t x602 = UINT16_MAX;
static int16_t x603 = -113;
volatile int8_t x608 = INT8_MIN;
uint64_t x609 = 105783LLU;
volatile int32_t x610 = -1;
uint64_t t138 = 191260748LLU;
int8_t x649 = -1;
int16_t x650 = -1;
int64_t t140 = 15067856LL;
int32_t x660 = INT32_MAX;
int64_t x666 = INT64_MIN;
uint16_t x667 = UINT16_MAX;
volatile int64_t t144 = 5097017LL;
uint8_t x677 = 14U;
int64_t t146 = 167341328LL;
uint64_t x682 = UINT64_MAX;
int32_t x693 = INT32_MIN;
static int32_t x716 = -101;
int32_t x723 = INT32_MIN;
uint64_t x725 = UINT64_MAX;
int16_t x727 = INT16_MIN;
volatile uint32_t x728 = 4187588U;
uint8_t x735 = 28U;
int64_t t159 = 47772LL;
int64_t x737 = -4152281251LL;
int8_t x739 = INT8_MAX;
uint32_t x740 = UINT32_MAX;
volatile int64_t t161 = 976LL;
uint64_t x745 = 49LLU;
static uint64_t x746 = 1164307484900653364LLU;
int16_t x748 = INT16_MIN;
static int8_t x750 = -1;
uint64_t x751 = 6159310036127044603LLU;
static volatile uint64_t t163 = 327297541468174081LLU;
static uint8_t x756 = 35U;
static uint64_t x761 = 162885807832367LLU;
static uint64_t t165 = 62895925830135377LLU;
volatile uint8_t x773 = UINT8_MAX;
int8_t x774 = -1;
static int16_t x782 = -10436;
int32_t x786 = INT32_MIN;
static uint64_t x787 = 13957316581321793LLU;
uint16_t x791 = 8455U;
int64_t x797 = 81277385523LL;
int32_t x809 = INT32_MIN;
int64_t x828 = INT64_MAX;
static uint64_t x829 = 1012LLU;
uint64_t x830 = 3951309LLU;
static int32_t x831 = INT32_MIN;
int32_t t182 = 3705200;
static uint32_t x842 = 116072U;
static int16_t x846 = -1;
int64_t t184 = 25278839469LL;
int32_t x851 = -1;
int16_t x857 = -1501;
int32_t x861 = -8931;
int32_t t188 = 291355768;
static int64_t x872 = INT64_MAX;
static int64_t t190 = -240674179311320496LL;
static int32_t x875 = INT32_MIN;
static uint64_t x876 = UINT64_MAX;
uint32_t x880 = 358209609U;
int8_t x881 = INT8_MAX;
static int64_t x889 = INT64_MAX;
int64_t x898 = -82878808LL;
uint8_t x904 = UINT8_MAX;
volatile int64_t x905 = INT64_MIN;
volatile int16_t x908 = INT16_MIN;


void f0(void) {
    	static uint64_t x1 = 102790LLU;
	uint32_t x2 = UINT32_MAX;
	static int64_t x4 = -16461358LL;
	volatile uint64_t t0 = 7503180166881LLU;

    t0 = (x1/((x2/x3)-x4));

    if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = -935252;
	int32_t x6 = INT32_MIN;
	int64_t x8 = -1LL;

    t1 = (x5/((x6/x7)-x8));

    if (t1 != -935252LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static int64_t x14 = 1629946397698684LL;
	uint64_t x15 = UINT64_MAX;
	int8_t x16 = INT8_MIN;
	uint64_t t2 = 1505879538LLU;

    t2 = (x13/((x14/x15)-x16));

    if (t2 != 144115188075855871LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x17 = UINT16_MAX;
	static uint8_t x18 = UINT8_MAX;
	int16_t x19 = -1;
	uint16_t x20 = 149U;
	volatile int32_t t3 = -140745441;

    t3 = (x17/((x18/x19)-x20));

    if (t3 != -162) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x22 = INT64_MIN;
	uint64_t x23 = UINT64_MAX;
	uint64_t t4 = 24715394796671LLU;

    t4 = (x21/((x22/x23)-x24));

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x25 = 1;
	volatile int32_t x26 = -1;
	int32_t x27 = INT32_MIN;
	int16_t x28 = -1;
	static volatile int32_t t5 = -51428683;

    t5 = (x25/((x26/x27)-x28));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x29 = INT16_MAX;
	int32_t x30 = INT32_MAX;
	int64_t x31 = -1LL;
	int8_t x32 = -1;

    t6 = (x29/((x30/x31)-x32));

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x33 = 396U;
	static int64_t x34 = INT64_MIN;
	int32_t x36 = -1;
	volatile int64_t t7 = 4136736694LL;

    t7 = (x33/((x34/x35)-x36));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x37 = -1LL;
	uint16_t x38 = UINT16_MAX;
	uint32_t x39 = 333U;
	static int32_t x40 = -1;
	int64_t t8 = -1548622LL;

    t8 = (x37/((x38/x39)-x40));

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x41 = -1;
	int32_t x42 = -227259;
	volatile uint16_t x43 = 13U;
	uint16_t x44 = 28413U;
	int32_t t9 = 13;

    t9 = (x41/((x42/x43)-x44));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x45 = 3083U;
	static volatile uint16_t x46 = UINT16_MAX;
	volatile int8_t x47 = 1;
	volatile uint8_t x48 = 15U;
	volatile int32_t t10 = -1415148;

    t10 = (x45/((x46/x47)-x48));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x49 = -4580246616734238030LL;
	int8_t x51 = -1;
	uint8_t x52 = 51U;
	uint64_t t11 = 295244407LLU;

    t11 = (x49/((x50/x51)-x52));

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x57 = -1;
	uint64_t x58 = 310242677969LLU;
	int32_t x60 = -1431422;
	volatile uint64_t t12 = 2LLU;

    t12 = (x57/((x58/x59)-x60));

    if (t12 != 28122101314LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x61 = INT16_MIN;
	uint32_t x63 = 3547125U;
	int8_t x64 = INT8_MIN;

    t13 = (x61/((x62/x63)-x64));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x65 = 134277693U;
	volatile int16_t x66 = 7412;
	static volatile uint32_t t14 = 1U;

    t14 = (x65/((x66/x67)-x68));

    if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x69 = 869062274U;
	int16_t x70 = INT16_MIN;
	uint16_t x71 = 8121U;
	int64_t x72 = INT64_MIN;

    t15 = (x69/((x70/x71)-x72));

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x73 = 286U;
	int8_t x74 = -1;
	uint32_t x75 = 115782U;
	int64_t x76 = -1LL;
	volatile int64_t t16 = 23863287354388673LL;

    t16 = (x73/((x74/x75)-x76));

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x77 = INT32_MAX;
	volatile int8_t x78 = INT8_MIN;
	volatile int8_t x80 = 1;

    t17 = (x77/((x78/x79)-x80));

    if (t17 != -2147483647) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x81 = -1LL;
	uint64_t x82 = 12207471000347803LLU;
	uint32_t x84 = UINT32_MAX;
	uint64_t t18 = 0LLU;

    t18 = (x81/((x82/x83)-x84));

    if (t18 != 1LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint8_t x85 = UINT8_MAX;
	uint32_t x86 = UINT32_MAX;
	int64_t x87 = 64077154449585741LL;
	int32_t x88 = -60406;
	int64_t t19 = -39100213884657958LL;

    t19 = (x85/((x86/x87)-x88));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x90 = 3U;
	uint32_t x91 = 70U;
	int64_t t20 = -92486093588648LL;

    t20 = (x89/((x90/x91)-x92));

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x93 = INT8_MAX;
	volatile int32_t x94 = INT32_MIN;
	static uint16_t x95 = 49U;
	uint8_t x96 = 111U;

    t21 = (x93/((x94/x95)-x96));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x97 = INT32_MAX;
	static uint8_t x98 = UINT8_MAX;
	static uint8_t x99 = 1U;
	uint16_t x100 = 69U;
	volatile int32_t t22 = 130557230;

    t22 = (x97/((x98/x99)-x100));

    if (t22 != 11545611) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x101 = UINT16_MAX;
	volatile uint16_t x102 = 151U;
	uint16_t x104 = UINT16_MAX;
	static int32_t t23 = 22009;

    t23 = (x101/((x102/x103)-x104));

    if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x105 = INT64_MIN;
	uint16_t x106 = 6090U;
	int32_t x107 = INT32_MAX;
	int64_t t24 = 0LL;

    t24 = (x105/((x106/x107)-x108));

    if (t24 != -72057594037927936LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint8_t x109 = 18U;
	static uint64_t x111 = 3100864151250281LLU;
	uint64_t t25 = 640291190LLU;

    t25 = (x109/((x110/x111)-x112));

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x115 = 113198964917LLU;
	static volatile uint64_t t26 = 1258375011LLU;

    t26 = (x113/((x114/x115)-x116));

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x117 = INT32_MIN;
	int16_t x118 = 1;
	int8_t x119 = -1;
	int8_t x120 = INT8_MAX;
	int32_t t27 = -3;

    t27 = (x117/((x118/x119)-x120));

    if (t27 != 16777216) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int32_t x121 = 312150;
	uint64_t x122 = UINT64_MAX;
	int64_t x123 = INT64_MIN;
	volatile uint64_t t28 = 5LLU;

    t28 = (x121/((x122/x123)-x124));

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x125 = INT32_MIN;
	int16_t x126 = INT16_MIN;
	uint8_t x128 = UINT8_MAX;

    t29 = (x125/((x126/x127)-x128));

    if (t29 != 5607006) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x129 = -402443335360355LL;
	int32_t x130 = INT32_MAX;
	int64_t x131 = INT64_MIN;
	volatile int32_t x132 = INT32_MIN;
	volatile int64_t t30 = -439373334167637026LL;

    t30 = (x129/((x130/x131)-x132));

    if (t30 != -187402LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x133 = UINT64_MAX;
	int32_t x136 = INT32_MIN;
	uint64_t t31 = 7111LLU;

    t31 = (x133/((x134/x135)-x136));

    if (t31 != 8589934580LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint8_t x141 = 43U;
	static int64_t x142 = -100866950835566LL;
	uint64_t x143 = 8238111257748LLU;
	uint8_t x144 = UINT8_MAX;
	uint64_t t32 = 4884817049956871938LLU;

    t32 = (x141/((x142/x143)-x144));

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x146 = -13503948534747676LL;
	volatile int16_t x148 = INT16_MAX;
	volatile int64_t t33 = 1284717945447LL;

    t33 = (x145/((x146/x147)-x148));

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x149 = UINT32_MAX;
	int32_t x150 = 13;
	int32_t x152 = -1;
	static uint32_t t34 = UINT32_MAX;

    t34 = (x149/((x150/x151)-x152));

    if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int64_t x154 = INT64_MIN;
	int64_t x155 = INT64_MIN;
	static uint16_t x156 = UINT16_MAX;
	int64_t t35 = 127009707544LL;

    t35 = (x153/((x154/x155)-x156));

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x158 = INT16_MAX;
	uint32_t x159 = UINT32_MAX;
	static uint32_t t36 = 227015U;

    t36 = (x157/((x158/x159)-x160));

    if (t36 != 65535U) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x161 = 1451U;
	static uint8_t x162 = 2U;
	uint32_t x163 = UINT32_MAX;
	volatile uint32_t x164 = UINT32_MAX;
	uint32_t t37 = 1027U;

    t37 = (x161/((x162/x163)-x164));

    if (t37 != 1451U) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile uint64_t x165 = UINT64_MAX;
	uint16_t x168 = 525U;

    t38 = (x165/((x166/x167)-x168));

    if (t38 != 1LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x169 = 6447827269897380445LLU;
	volatile int16_t x170 = 1;
	static volatile uint64_t x171 = 11LLU;
	uint64_t t39 = 2249495LLU;

    t39 = (x169/((x170/x171)-x172));

    if (t39 != 17617014398626722LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x173 = INT64_MIN;
	uint16_t x175 = 285U;
	volatile int32_t x176 = -955;
	int64_t t40 = 10953LL;

    t40 = (x173/((x174/x175)-x176));

    if (t40 != -1336813580778LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x178 = INT64_MAX;
	static int32_t x179 = -1;
	static int8_t x180 = -1;
	volatile int64_t t41 = 3LL;

    t41 = (x177/((x178/x179)-x180));

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x181 = UINT16_MAX;
	int8_t x183 = INT8_MIN;
	uint16_t x184 = UINT16_MAX;
	static volatile int32_t t42 = 0;

    t42 = (x181/((x182/x183)-x184));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x185 = -1;
	uint64_t x186 = UINT64_MAX;
	static volatile uint8_t x187 = UINT8_MAX;
	volatile uint64_t t43 = 6495414126251393LLU;

    t43 = (x185/((x186/x187)-x188));

    if (t43 != 254LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x189 = UINT64_MAX;
	int8_t x190 = INT8_MAX;
	static uint8_t x191 = UINT8_MAX;
	volatile int64_t x192 = -1LL;
	uint64_t t44 = UINT64_MAX;

    t44 = (x189/((x190/x191)-x192));

    if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x197 = 2U;
	volatile uint16_t x199 = 250U;
	static int32_t x200 = -1;
	static int32_t t45 = -6015;

    t45 = (x197/((x198/x199)-x200));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x201 = 875U;
	uint64_t x203 = UINT64_MAX;
	volatile int32_t x204 = INT32_MIN;

    t46 = (x201/((x202/x203)-x204));

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x205 = INT8_MAX;
	int16_t x206 = INT16_MAX;
	volatile int64_t x207 = -164961449LL;
	volatile int8_t x208 = -3;

    t47 = (x205/((x206/x207)-x208));

    if (t47 != 42LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x213 = 5;
	uint32_t x214 = 227111230U;
	uint64_t x215 = 9057061691410689831LLU;
	uint8_t x216 = UINT8_MAX;
	volatile uint64_t t48 = 154LLU;

    t48 = (x213/((x214/x215)-x216));

    if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x217 = INT8_MIN;
	static uint64_t x218 = 455187484606363709LLU;
	int64_t x219 = INT64_MIN;

    t49 = (x217/((x218/x219)-x220));

    if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x221 = 25381LL;
	uint8_t x222 = UINT8_MAX;
	int8_t x223 = INT8_MAX;
	uint64_t x224 = 1473721002591LLU;

    t50 = (x221/((x222/x223)-x224));

    if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x225 = -21;
	int8_t x226 = -1;
	volatile int16_t x228 = 14;
	volatile int32_t t51 = 0;

    t51 = (x225/((x226/x227)-x228));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x229 = INT8_MIN;
	int8_t x231 = -10;
	int64_t x232 = 18669003882239692LL;

    t52 = (x229/((x230/x231)-x232));

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x237 = INT8_MAX;
	int64_t x238 = -11718144450LL;
	static int8_t x239 = -1;
	int32_t x240 = -76664873;
	static int64_t t53 = -238647054LL;

    t53 = (x237/((x238/x239)-x240));

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x246 = 12;
	static volatile int64_t x247 = 591682749LL;
	int16_t x248 = INT16_MIN;
	static int64_t t54 = -50487765811109LL;

    t54 = (x245/((x246/x247)-x248));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int32_t x250 = INT32_MIN;
	uint32_t x251 = UINT32_MAX;
	int32_t x252 = INT32_MAX;

    t55 = (x249/((x250/x251)-x252));

    if (t55 != 1U) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint32_t x253 = UINT32_MAX;
	uint64_t x254 = 1LLU;
	static int64_t x256 = 11616LL;
	static volatile uint64_t t56 = 3889122728484LLU;

    t56 = (x253/((x254/x255)-x256));

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x257 = -1;
	volatile int16_t x258 = INT16_MIN;
	volatile int16_t x260 = INT16_MIN;
	volatile int64_t t57 = -122306055007443546LL;

    t57 = (x257/((x258/x259)-x260));

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x261 = -155;
	uint8_t x262 = 38U;
	int64_t x263 = INT64_MIN;
	int64_t x264 = 231288164LL;

    t58 = (x261/((x262/x263)-x264));

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x269 = -232;
	static int16_t x270 = INT16_MIN;
	uint64_t x271 = 2LLU;
	int32_t x272 = -1;
	uint64_t t59 = 648603129LLU;

    t59 = (x269/((x270/x271)-x272));

    if (t59 != 2LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x278 = UINT64_MAX;
	int64_t x279 = INT64_MIN;
	int16_t x280 = 9;
	volatile uint64_t t60 = 1794599690345LLU;

    t60 = (x277/((x278/x279)-x280));

    if (t60 != 1LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x282 = 400723479738LLU;
	uint64_t x283 = UINT64_MAX;
	volatile int8_t x284 = 50;
	static uint64_t t61 = 5360382019425LLU;

    t61 = (x281/((x282/x283)-x284));

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x285 = INT8_MIN;
	static int64_t x286 = INT64_MAX;
	static volatile uint8_t x287 = UINT8_MAX;
	int64_t t62 = -118576481251318LL;

    t62 = (x285/((x286/x287)-x288));

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x289 = INT8_MAX;
	static uint8_t x290 = 34U;
	volatile int64_t x292 = -1LL;
	static int64_t t63 = 245LL;

    t63 = (x289/((x290/x291)-x292));

    if (t63 != 127LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint32_t x294 = 505U;
	volatile uint32_t x295 = UINT32_MAX;
	int32_t x296 = INT32_MAX;
	volatile uint32_t t64 = 1U;

    t64 = (x293/((x294/x295)-x296));

    if (t64 != 1U) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x302 = 18U;
	static uint32_t x303 = UINT32_MAX;
	volatile uint32_t t65 = 129914U;

    t65 = (x301/((x302/x303)-x304));

    if (t65 != 4294967168U) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int16_t x305 = INT16_MAX;
	uint64_t x306 = 914215403063LLU;
	int16_t x307 = -1;
	static int8_t x308 = INT8_MIN;
	uint64_t t66 = 8550850168794LLU;

    t66 = (x305/((x306/x307)-x308));

    if (t66 != 255LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x309 = INT64_MIN;
	static int32_t x310 = -20;
	static volatile int32_t x311 = INT32_MIN;
	uint8_t x312 = UINT8_MAX;
	int64_t t67 = 2725436430LL;

    t67 = (x309/((x310/x311)-x312));

    if (t67 != 36170086419038336LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x313 = 1;
	int64_t x314 = INT64_MAX;
	int16_t x315 = -1;
	int64_t x316 = -15726376429726LL;
	volatile int64_t t68 = 474499168540274LL;

    t68 = (x313/((x314/x315)-x316));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x318 = -495;
	static uint16_t x319 = 25993U;
	uint8_t x320 = 2U;
	static int32_t t69 = -27229;

    t69 = (x317/((x318/x319)-x320));

    if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
    	static int64_t x322 = INT64_MIN;
	int32_t x324 = INT32_MAX;
	volatile int64_t t70 = -243389214744564069LL;

    t70 = (x321/((x322/x323)-x324));

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint32_t x325 = 77595592U;
	uint64_t x326 = 1534LLU;
	int32_t x327 = INT32_MAX;
	uint64_t t71 = 53831611740111LLU;

    t71 = (x325/((x326/x327)-x328));

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x329 = INT32_MIN;
	volatile int32_t x330 = INT32_MAX;
	int16_t x331 = INT16_MAX;
	static volatile int8_t x332 = 0;
	volatile int32_t t72 = 167016251;

    t72 = (x329/((x330/x331)-x332));

    if (t72 != -32767) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x333 = 11LL;
	int16_t x334 = INT16_MIN;
	uint64_t x336 = 571967LLU;

    t73 = (x333/((x334/x335)-x336));

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x337 = INT32_MIN;
	uint64_t x339 = UINT64_MAX;
	static volatile uint64_t t74 = 89506LLU;

    t74 = (x337/((x338/x339)-x340));

    if (t74 != 1LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x342 = INT64_MIN;
	int32_t x343 = INT32_MIN;
	static uint8_t x344 = 121U;
	int64_t t75 = -162764841LL;

    t75 = (x341/((x342/x343)-x344));

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x348 = INT16_MIN;
	static volatile int32_t t76 = 194;

    t76 = (x345/((x346/x347)-x348));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x353 = 2826943614LLU;
	volatile int8_t x354 = 2;
	static int16_t x355 = 164;
	uint16_t x356 = 1U;
	volatile uint64_t t77 = 31LLU;

    t77 = (x353/((x354/x355)-x356));

    if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x357 = 514LL;
	uint32_t x358 = 6U;
	uint8_t x359 = 57U;
	static volatile int32_t x360 = 15461464;

    t78 = (x357/((x358/x359)-x360));

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x362 = 99U;
	int32_t x363 = INT32_MIN;
	uint16_t x364 = 23U;
	int32_t t79 = 555;

    t79 = (x361/((x362/x363)-x364));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x366 = INT8_MIN;
	int16_t x367 = INT16_MAX;
	static int32_t x368 = INT32_MAX;
	volatile int64_t t80 = 6LL;

    t80 = (x365/((x366/x367)-x368));

    if (t80 != 4294967298LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x370 = UINT16_MAX;
	static int32_t x371 = 82698;
	int8_t x372 = -1;
	int32_t t81 = -928;

    t81 = (x369/((x370/x371)-x372));

    if (t81 != 89) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x373 = INT16_MAX;
	uint16_t x375 = UINT16_MAX;
	uint32_t x376 = 131985715U;
	static uint32_t t82 = 17467298U;

    t82 = (x373/((x374/x375)-x376));

    if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int8_t x378 = -1;
	static uint64_t x379 = 12240291283142491LLU;
	int8_t x380 = INT8_MAX;
	volatile uint64_t t83 = 2663118457467430LLU;

    t83 = (x377/((x378/x379)-x380));

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x382 = -4LL;
	int32_t x383 = INT32_MIN;
	uint8_t x384 = 104U;

    t84 = (x381/((x382/x383)-x384));

    if (t84 != 88686269585142075LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint32_t x385 = 30U;
	int32_t x386 = INT32_MAX;
	int16_t x387 = 6988;
	int8_t x388 = INT8_MIN;
	static uint32_t t85 = 69587U;

    t85 = (x385/((x386/x387)-x388));

    if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x389 = INT8_MAX;
	int64_t x390 = INT64_MAX;
	int16_t x392 = INT16_MIN;
	volatile int64_t t86 = 1018524544LL;

    t86 = (x389/((x390/x391)-x392));

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x393 = 2U;
	volatile int8_t x394 = -1;
	uint16_t x395 = 40U;
	uint64_t x396 = UINT64_MAX;
	volatile uint64_t t87 = 4930925079886LLU;

    t87 = (x393/((x394/x395)-x396));

    if (t87 != 2LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	static int32_t x398 = -1;
	uint32_t x399 = 814U;
	uint64_t x400 = 27322687580013464LLU;
	static volatile uint64_t t88 = 352910217LLU;

    t88 = (x397/((x398/x399)-x400));

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x401 = UINT8_MAX;
	volatile uint32_t x402 = 5365501U;
	int8_t x403 = -5;
	uint32_t t89 = 0U;

    t89 = (x401/((x402/x403)-x404));

    if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x405 = 8;
	int32_t x407 = INT32_MAX;
	uint32_t x408 = 15U;

    t90 = (x405/((x406/x407)-x408));

    if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x409 = 2355U;
	static int32_t x410 = -1958;
	int8_t x411 = -1;
	uint16_t x412 = 0U;
	volatile uint32_t t91 = 1169U;

    t91 = (x409/((x410/x411)-x412));

    if (t91 != 1U) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x421 = 837U;
	volatile int8_t x422 = -1;
	int32_t x423 = 1;

    t92 = (x421/((x422/x423)-x424));

    if (t92 != -209LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint64_t x426 = 2789307832757404LLU;
	int64_t x427 = INT64_MIN;
	uint16_t x428 = 2841U;

    t93 = (x425/((x426/x427)-x428));

    if (t93 != 1LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x429 = INT16_MAX;
	uint64_t x431 = 1505714LLU;
	int16_t x432 = INT16_MAX;
	uint64_t t94 = 368815212388LLU;

    t94 = (x429/((x430/x431)-x432));

    if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x433 = -6883;
	int16_t x434 = -56;
	volatile uint32_t x435 = UINT32_MAX;
	uint8_t x436 = 1U;
	uint32_t t95 = 25U;

    t95 = (x433/((x434/x435)-x436));

    if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x438 = 1U;
	int64_t x439 = INT64_MAX;
	uint64_t x440 = 11982922917508261LLU;
	volatile uint64_t t96 = 1076296136942948LLU;

    t96 = (x437/((x438/x439)-x440));

    if (t96 != 1LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint32_t x441 = UINT32_MAX;
	uint16_t x442 = UINT16_MAX;
	int32_t x443 = -1;
	int16_t x444 = INT16_MAX;
	volatile uint32_t t97 = 373761102U;

    t97 = (x441/((x442/x443)-x444));

    if (t97 != 1U) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x446 = 1479;
	static int64_t x447 = INT64_MIN;
	volatile int16_t x448 = -2258;
	static int64_t t98 = 111377884048870LL;

    t98 = (x445/((x446/x447)-x448));

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x449 = 4U;
	int64_t x450 = -12982127997933LL;
	static int16_t x451 = INT16_MIN;
	int32_t x452 = -7771;

    t99 = (x449/((x450/x451)-x452));

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int32_t x453 = -103554;
	uint16_t x454 = 9262U;
	int16_t x455 = INT16_MIN;
	volatile int8_t x456 = -1;
	int32_t t100 = 166;

    t100 = (x453/((x454/x455)-x456));

    if (t100 != -103554) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x457 = 184632774;
	int32_t x458 = 22272714;
	int64_t x459 = INT64_MIN;
	volatile int64_t t101 = 122484767LL;

    t101 = (x457/((x458/x459)-x460));

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x462 = 1921;
	uint32_t x463 = 139538716U;
	volatile uint8_t x464 = 117U;
	volatile int64_t t102 = 23080372827LL;

    t102 = (x461/((x462/x463)-x464));

    if (t102 != 108LL) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x465 = -1;
	static volatile uint16_t x466 = UINT16_MAX;
	volatile uint64_t x467 = 11399312291999LLU;
	int64_t x468 = -4LL;
	volatile uint64_t t103 = 15210888LLU;

    t103 = (x465/((x466/x467)-x468));

    if (t103 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x469 = -33057255516292775LL;
	volatile int16_t x470 = -1;
	uint64_t x471 = 298791LLU;
	int8_t x472 = INT8_MAX;
	volatile uint64_t t104 = 7801082LLU;

    t104 = (x469/((x470/x471)-x472));

    if (t104 != 298255LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x473 = -287;
	int16_t x474 = INT16_MIN;
	uint64_t x475 = 1818838554249407LLU;
	int16_t x476 = -1;
	uint64_t t105 = 2684LLU;

    t105 = (x473/((x474/x475)-x476));

    if (t105 != 1818667462654988LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x477 = 1915U;
	int8_t x478 = -1;
	uint64_t t106 = 47569252171135LLU;

    t106 = (x477/((x478/x479)-x480));

    if (t106 != 273LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static int8_t x483 = INT8_MIN;

    t107 = (x481/((x482/x483)-x484));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x485 = 19U;
	int64_t x486 = -445706505713LL;
	int32_t x487 = 18;
	volatile int64_t t108 = -2303509061613547420LL;

    t108 = (x485/((x486/x487)-x488));

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x493 = INT32_MIN;
	uint16_t x494 = UINT16_MAX;
	static uint64_t x496 = 6774771185167LLU;
	volatile uint64_t t109 = 3825LLU;

    t109 = (x493/((x494/x495)-x496));

    if (t109 != 1LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x497 = -3945138727LL;
	static uint8_t x498 = UINT8_MAX;
	volatile uint8_t x499 = 3U;
	int8_t x500 = INT8_MIN;
	static int64_t t110 = -93000493LL;

    t110 = (x497/((x498/x499)-x500));

    if (t110 != -18521778LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x501 = INT64_MIN;
	volatile int64_t x502 = -7LL;
	uint32_t x504 = UINT32_MAX;
	volatile int64_t t111 = 3597429548327428LL;

    t111 = (x501/((x502/x503)-x504));

    if (t111 != 2147483648LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t t112 = 45967180844283343LLU;

    t112 = (x505/((x506/x507)-x508));

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint8_t x509 = UINT8_MAX;
	static uint8_t x510 = 9U;
	int32_t x512 = -1;
	volatile int64_t t113 = 471835953455LL;

    t113 = (x509/((x510/x511)-x512));

    if (t113 != -31LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint8_t x513 = 7U;
	volatile uint16_t x514 = 12538U;
	int32_t x515 = INT32_MAX;
	int32_t t114 = 53;

    t114 = (x513/((x514/x515)-x516));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint32_t x517 = UINT32_MAX;
	static uint64_t x518 = 23469LLU;
	int16_t x519 = -1;
	static int8_t x520 = -1;
	static uint64_t t115 = 4099850225LLU;

    t115 = (x517/((x518/x519)-x520));

    if (t115 != 4294967295LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x521 = 518512U;
	int8_t x522 = INT8_MIN;
	int64_t x523 = INT64_MAX;
	uint8_t x524 = UINT8_MAX;

    t116 = (x521/((x522/x523)-x524));

    if (t116 != -2033LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x529 = INT16_MIN;
	int8_t x531 = -1;
	int32_t x532 = INT32_MIN;
	uint64_t t117 = 707499398502027LLU;

    t117 = (x529/((x530/x531)-x532));

    if (t117 != 8589934591LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x535 = INT32_MIN;
	int32_t x536 = INT32_MAX;
	int64_t t118 = -6810597955LL;

    t118 = (x533/((x534/x535)-x536));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x541 = -1;
	int16_t x544 = INT16_MAX;

    t119 = (x541/((x542/x543)-x544));

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static int64_t x545 = -1LL;
	static uint32_t x548 = 3U;
	volatile int64_t t120 = -6LL;

    t120 = (x545/((x546/x547)-x548));

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint32_t x549 = 156445U;
	int16_t x550 = -1;
	int8_t x551 = INT8_MIN;
	int32_t x552 = -4240;
	uint32_t t121 = 33U;

    t121 = (x549/((x550/x551)-x552));

    if (t121 != 36U) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int16_t x555 = -570;
	volatile uint16_t x556 = 42U;
	int32_t t122 = -9;

    t122 = (x553/((x554/x555)-x556));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x557 = INT8_MIN;
	uint64_t x558 = UINT64_MAX;
	static int64_t x559 = -11324144788343297LL;
	volatile uint8_t x560 = 0U;
	static volatile uint64_t t123 = 2675017240546026LLU;

    t123 = (x557/((x558/x559)-x560));

    if (t123 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x561 = -1LL;
	uint8_t x562 = 4U;
	uint32_t x563 = 135479453U;
	int8_t x564 = -12;
	volatile int64_t t124 = -55840LL;

    t124 = (x561/((x562/x563)-x564));

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x566 = -1;
	static volatile int32_t x567 = INT32_MAX;
	volatile uint64_t t125 = 786072192185060234LLU;

    t125 = (x565/((x566/x567)-x568));

    if (t125 != 0LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x570 = -63;
	int32_t x571 = INT32_MIN;
	int64_t x572 = -1LL;
	int64_t t126 = 25393357367LL;

    t126 = (x569/((x570/x571)-x572));

    if (t126 != -128LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint8_t x573 = UINT8_MAX;
	static int64_t x574 = INT64_MIN;
	int16_t x575 = INT16_MIN;
	int32_t x576 = INT32_MIN;
	int64_t t127 = -438536301390593LL;

    t127 = (x573/((x574/x575)-x576));

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x577 = INT16_MIN;
	uint8_t x578 = 17U;
	uint32_t x579 = UINT32_MAX;
	volatile uint16_t x580 = UINT16_MAX;
	uint32_t t128 = 20626335U;

    t128 = (x577/((x578/x579)-x580));

    if (t128 != 1U) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint32_t x582 = UINT32_MAX;
	uint64_t x583 = UINT64_MAX;
	int8_t x584 = INT8_MAX;
	uint64_t t129 = 29LLU;

    t129 = (x581/((x582/x583)-x584));

    if (t129 != 0LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	static int64_t x586 = -1165299190671198937LL;
	int8_t x588 = -25;
	uint64_t t130 = 452414968795LLU;

    t130 = (x585/((x586/x587)-x588));

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int64_t x589 = -23447LL;
	uint8_t x590 = 20U;
	int16_t x591 = INT16_MAX;
	static volatile uint64_t t131 = 12884655989LLU;

    t131 = (x589/((x590/x591)-x592));

    if (t131 != 18446744073709528169LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x593 = -195293218269665LL;
	static int16_t x594 = -1;
	volatile int16_t x596 = INT16_MAX;
	int64_t t132 = 21400LL;

    t132 = (x593/((x594/x595)-x596));

    if (t132 != 5960057932LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x597 = INT32_MIN;
	int32_t x598 = -1;
	static uint8_t x599 = UINT8_MAX;
	int16_t x600 = -9;
	volatile int32_t t133 = -162014;

    t133 = (x597/((x598/x599)-x600));

    if (t133 != -238609294) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x601 = 1635150277175922780LLU;
	int64_t x604 = 159976701LL;
	static uint64_t t134 = 2253663LLU;

    t134 = (x601/((x602/x603)-x604));

    if (t134 != 0LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static int16_t x605 = 3399;
	volatile int8_t x606 = 1;
	uint16_t x607 = 5U;
	volatile int32_t t135 = -1;

    t135 = (x605/((x606/x607)-x608));

    if (t135 != 26) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x611 = 4734873182LL;
	int16_t x612 = INT16_MAX;
	static uint64_t t136 = 1788287901LLU;

    t136 = (x609/((x610/x611)-x612));

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x617 = INT8_MIN;
	int32_t x618 = INT32_MIN;
	static uint64_t x619 = UINT64_MAX;
	static int32_t x620 = -57276;
	volatile uint64_t t137 = 6914421121880LLU;

    t137 = (x617/((x618/x619)-x620));

    if (t137 != 322067603773125LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x621 = UINT8_MAX;
	static uint64_t x622 = 7LLU;
	uint64_t x623 = 1018LLU;
	static volatile int64_t x624 = -73295863LL;

    t138 = (x621/((x622/x623)-x624));

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x625 = INT16_MIN;
	volatile int64_t x626 = 1031LL;
	volatile uint32_t x627 = 6700052U;
	uint32_t x628 = 18854246U;
	int64_t t139 = -1LL;

    t139 = (x625/((x626/x627)-x628));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x651 = INT64_MAX;
	int8_t x652 = INT8_MIN;

    t140 = (x649/((x650/x651)-x652));

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint64_t x657 = 168301728LLU;
	int16_t x658 = -1;
	uint32_t x659 = UINT32_MAX;
	volatile uint64_t t141 = 105045636LLU;

    t141 = (x657/((x658/x659)-x660));

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x661 = INT16_MIN;
	volatile int8_t x662 = 21;
	volatile uint32_t x663 = UINT32_MAX;
	int16_t x664 = INT16_MIN;
	uint32_t t142 = 85U;

    t142 = (x661/((x662/x663)-x664));

    if (t142 != 131071U) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x665 = -1LL;
	uint64_t x668 = UINT64_MAX;
	uint64_t t143 = 245024585029435LLU;

    t143 = (x665/((x666/x667)-x668));

    if (t143 != 1LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int32_t x669 = 1;
	int8_t x670 = -5;
	static int64_t x671 = INT64_MIN;
	int64_t x672 = -1113230114463838020LL;

    t144 = (x669/((x670/x671)-x672));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint8_t x673 = 1U;
	int16_t x674 = 1640;
	uint16_t x675 = 561U;
	int32_t x676 = INT32_MAX;
	static volatile int32_t t145 = -301647;

    t145 = (x673/((x674/x675)-x676));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x678 = -182695;
	int32_t x679 = -1;
	int64_t x680 = -24737LL;

    t146 = (x677/((x678/x679)-x680));

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x681 = 905226787913LLU;
	int64_t x683 = -1LL;
	volatile int64_t x684 = INT64_MIN;
	volatile uint64_t t147 = 2987651551162LLU;

    t147 = (x681/((x682/x683)-x684));

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x685 = -1;
	volatile uint64_t x686 = UINT64_MAX;
	int32_t x687 = -1;
	static int16_t x688 = INT16_MIN;
	volatile uint64_t t148 = 819645LLU;

    t148 = (x685/((x686/x687)-x688));

    if (t148 != 562932774076400LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int8_t x689 = INT8_MIN;
	uint32_t x690 = 128102920U;
	int64_t x691 = INT64_MAX;
	int16_t x692 = INT16_MIN;
	volatile int64_t t149 = -443522965855949437LL;

    t149 = (x689/((x690/x691)-x692));

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x694 = INT64_MAX;
	uint8_t x695 = 15U;
	int16_t x696 = -1;
	int64_t t150 = 4491505931061139LL;

    t150 = (x693/((x694/x695)-x696));

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint8_t x697 = 73U;
	uint64_t x698 = 938066LLU;
	int32_t x699 = INT32_MIN;
	uint32_t x700 = UINT32_MAX;
	uint64_t t151 = 271484399841LLU;

    t151 = (x697/((x698/x699)-x700));

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x701 = UINT32_MAX;
	int8_t x702 = 1;
	uint16_t x703 = UINT16_MAX;
	volatile uint8_t x704 = 5U;
	volatile uint32_t t152 = 3129340U;

    t152 = (x701/((x702/x703)-x704));

    if (t152 != 1U) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x709 = 130829339107LLU;
	int32_t x710 = INT32_MIN;
	int64_t x711 = -288068353805568005LL;
	int16_t x712 = INT16_MIN;
	static uint64_t t153 = 7LLU;

    t153 = (x709/((x710/x711)-x712));

    if (t153 != 3992594LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x713 = 2;
	volatile int64_t x714 = -1LL;
	int16_t x715 = -1;
	volatile int64_t t154 = -1433205874163038LL;

    t154 = (x713/((x714/x715)-x716));

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint16_t x717 = 99U;
	uint64_t x718 = 94LLU;
	static uint8_t x719 = UINT8_MAX;
	uint8_t x720 = 3U;
	static volatile uint64_t t155 = 628842026498921LLU;

    t155 = (x717/((x718/x719)-x720));

    if (t155 != 0LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	static int32_t x721 = INT32_MAX;
	int16_t x722 = -1;
	uint8_t x724 = 2U;
	int32_t t156 = -5504;

    t156 = (x721/((x722/x723)-x724));

    if (t156 != -1073741823) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x726 = INT32_MIN;
	volatile uint64_t t157 = 23507621352161848LLU;

    t157 = (x725/((x726/x727)-x728));

    if (t157 != 4299093307LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x729 = INT64_MAX;
	static volatile int16_t x730 = -1179;
	int64_t x731 = INT64_MIN;
	static int32_t x732 = INT32_MIN;
	int64_t t158 = -3349420698539271LL;

    t158 = (x729/((x730/x731)-x732));

    if (t158 != 4294967295LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x733 = 159676386529937LL;
	volatile uint8_t x734 = 18U;
	int64_t x736 = -76581LL;

    t159 = (x733/((x734/x735)-x736));

    if (t159 != 2085065310LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x738 = UINT64_MAX;
	static uint64_t t160 = 9407LLU;

    t160 = (x737/((x738/x739)-x740));

    if (t160 != 127LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x741 = 565205610U;
	static volatile int64_t x742 = -1LL;
	int8_t x743 = INT8_MIN;
	int32_t x744 = 26402;

    t161 = (x741/((x742/x743)-x744));

    if (t161 != -21407LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int16_t x747 = INT16_MIN;
	static volatile uint64_t t162 = 23LLU;

    t162 = (x745/((x746/x747)-x748));

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x749 = INT16_MIN;
	static int32_t x752 = INT32_MIN;

    t163 = (x749/((x750/x751)-x752));

    if (t163 != 8589934583LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x753 = -1;
	int16_t x754 = INT16_MIN;
	volatile int64_t x755 = INT64_MIN;
	static int64_t t164 = -1LL;

    t164 = (x753/((x754/x755)-x756));

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x762 = -1LL;
	int32_t x763 = -1;
	int32_t x764 = -14;

    t165 = (x761/((x762/x763)-x764));

    if (t165 != 10859053855491LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x765 = INT8_MIN;
	int64_t x766 = INT64_MIN;
	static int32_t x767 = INT32_MAX;
	static uint16_t x768 = UINT16_MAX;
	int64_t t166 = -26LL;

    t166 = (x765/((x766/x767)-x768));

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint64_t x769 = 2996560779285LLU;
	volatile uint64_t x770 = UINT64_MAX;
	volatile int8_t x771 = INT8_MIN;
	volatile int64_t x772 = -1LL;
	uint64_t t167 = 212777LLU;

    t167 = (x769/((x770/x771)-x772));

    if (t167 != 1498280389642LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x775 = -1;
	volatile uint64_t x776 = UINT64_MAX;
	volatile uint64_t t168 = 152693935138360974LLU;

    t168 = (x773/((x774/x775)-x776));

    if (t168 != 127LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x777 = -1;
	int64_t x778 = INT64_MAX;
	uint32_t x779 = 20U;
	int32_t x780 = INT32_MIN;
	static volatile int64_t t169 = -3545141297LL;

    t169 = (x777/((x778/x779)-x780));

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int32_t x781 = INT32_MIN;
	int16_t x783 = 800;
	int64_t x784 = -1LL;
	int64_t t170 = -644019323784264227LL;

    t170 = (x781/((x782/x783)-x784));

    if (t170 != 178956970LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x785 = 2603U;
	int64_t x788 = INT64_MIN;
	uint64_t t171 = 7765LLU;

    t171 = (x785/((x786/x787)-x788));

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint8_t x789 = UINT8_MAX;
	uint16_t x790 = 9U;
	int8_t x792 = -1;
	int32_t t172 = 14695;

    t172 = (x789/((x790/x791)-x792));

    if (t172 != 255) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x798 = -1651280491642367LL;
	uint8_t x799 = 6U;
	volatile uint64_t x800 = 967LLU;
	volatile uint64_t t173 = 3220267660827865LLU;

    t173 = (x797/((x798/x799)-x800));

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int8_t x801 = -58;
	volatile uint32_t x802 = 814U;
	int8_t x803 = INT8_MIN;
	int64_t x804 = INT64_MAX;
	volatile int64_t t174 = -10914122010515LL;

    t174 = (x801/((x802/x803)-x804));

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x805 = INT32_MIN;
	int8_t x806 = -1;
	int32_t x807 = 1742;
	int16_t x808 = -49;
	int32_t t175 = -1;

    t175 = (x805/((x806/x807)-x808));

    if (t175 != -43826196) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x810 = INT8_MAX;
	uint16_t x811 = UINT16_MAX;
	int64_t x812 = 57939109478LL;
	static volatile int64_t t176 = -9931188480LL;

    t176 = (x809/((x810/x811)-x812));

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int64_t x813 = -1LL;
	uint16_t x814 = 1588U;
	int8_t x815 = INT8_MIN;
	static int64_t x816 = INT64_MIN;
	volatile int64_t t177 = 3673573LL;

    t177 = (x813/((x814/x815)-x816));

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t x817 = INT32_MIN;
	volatile int64_t x818 = 1770LL;
	volatile int8_t x819 = INT8_MAX;
	int8_t x820 = -2;
	static volatile int64_t t178 = -245443LL;

    t178 = (x817/((x818/x819)-x820));

    if (t178 != -143165576LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x821 = -1;
	static volatile int64_t x822 = -1LL;
	uint32_t x823 = 35061545U;
	int16_t x824 = -1;
	static volatile int64_t t179 = -807948817627551LL;

    t179 = (x821/((x822/x823)-x824));

    if (t179 != -1LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x825 = INT8_MIN;
	uint64_t x826 = 192472035168321LLU;
	int64_t x827 = INT64_MAX;
	uint64_t t180 = 6382803343LLU;

    t180 = (x825/((x826/x827)-x828));

    if (t180 != 1LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x832 = INT64_MIN;
	volatile uint64_t t181 = 903377577335154548LLU;

    t181 = (x829/((x830/x831)-x832));

    if (t181 != 0LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x837 = -1;
	int32_t x838 = -1;
	int16_t x839 = INT16_MIN;
	static int16_t x840 = -1;

    t182 = (x837/((x838/x839)-x840));

    if (t182 != -1) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x841 = -1;
	int8_t x843 = INT8_MAX;
	int16_t x844 = INT16_MIN;
	uint32_t t183 = 44U;

    t183 = (x841/((x842/x843)-x844));

    if (t183 != 127518U) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x845 = INT16_MAX;
	int64_t x847 = INT64_MAX;
	volatile uint32_t x848 = 767688320U;

    t184 = (x845/((x846/x847)-x848));

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x849 = 0;
	int8_t x850 = INT8_MIN;
	static uint16_t x852 = UINT16_MAX;
	static int32_t t185 = 35;

    t185 = (x849/((x850/x851)-x852));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x853 = 2472415U;
	int32_t x854 = INT32_MIN;
	uint8_t x855 = UINT8_MAX;
	volatile int64_t x856 = INT64_MIN;
	volatile int64_t t186 = 2378838761668955LL;

    t186 = (x853/((x854/x855)-x856));

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint8_t x858 = 12U;
	static int32_t x859 = INT32_MIN;
	volatile int64_t x860 = INT64_MAX;
	volatile int64_t t187 = -5LL;

    t187 = (x857/((x858/x859)-x860));

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x862 = INT32_MIN;
	int32_t x863 = -737843212;
	static int32_t x864 = 1048885;

    t188 = (x861/((x862/x863)-x864));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int32_t x865 = 0;
	int64_t x866 = -1LL;
	int32_t x867 = -3036402;
	static uint16_t x868 = 1U;
	static volatile int64_t t189 = 595377LL;

    t189 = (x865/((x866/x867)-x868));

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x869 = INT64_MIN;
	int64_t x870 = -3026851LL;
	int16_t x871 = -338;

    t190 = (x869/((x870/x871)-x872));

    if (t190 != 1LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x873 = 340285428;
	uint16_t x874 = 4U;
	volatile uint64_t t191 = 3LLU;

    t191 = (x873/((x874/x875)-x876));

    if (t191 != 340285428LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	static int64_t x877 = INT64_MIN;
	static int16_t x878 = INT16_MIN;
	int32_t x879 = -1;
	volatile int64_t t192 = 3621LL;

    t192 = (x877/((x878/x879)-x880));

    if (t192 != -2342865880LL) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint8_t x882 = 1U;
	volatile int32_t x883 = -76573045;
	static volatile uint8_t x884 = 2U;
	static volatile int32_t t193 = -969425317;

    t193 = (x881/((x882/x883)-x884));

    if (t193 != -63) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x885 = -1LL;
	uint8_t x886 = UINT8_MAX;
	int16_t x887 = -15;
	int64_t x888 = INT64_MIN;
	int64_t t194 = 3081280569481819765LL;

    t194 = (x885/((x886/x887)-x888));

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x890 = -508;
	int8_t x891 = 12;
	int8_t x892 = INT8_MAX;
	static int64_t t195 = -19891444LL;

    t195 = (x889/((x890/x891)-x892));

    if (t195 != -54576165898548969LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x893 = 11U;
	int64_t x894 = -1LL;
	int64_t x895 = 65529243815359837LL;
	int16_t x896 = 4;
	int64_t t196 = -107214798536615114LL;

    t196 = (x893/((x894/x895)-x896));

    if (t196 != -2LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x897 = UINT64_MAX;
	int8_t x899 = INT8_MAX;
	int8_t x900 = INT8_MAX;
	volatile uint64_t t197 = 323LLU;

    t197 = (x897/((x898/x899)-x900));

    if (t197 != 1LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x901 = -3775085;
	uint8_t x902 = 3U;
	int8_t x903 = INT8_MIN;
	int32_t t198 = 116467311;

    t198 = (x901/((x902/x903)-x904));

    if (t198 != 14804) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x906 = -1;
	int64_t x907 = INT64_MIN;
	volatile int64_t t199 = -3812618682503225426LL;

    t199 = (x905/((x906/x907)-x908));

    if (t199 != -281474976710656LL) { NG(); } else { ; }
	
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

