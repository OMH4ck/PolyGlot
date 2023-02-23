
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

int8_t x1 = -9;
static int64_t x33 = INT64_MAX;
volatile int16_t x34 = INT16_MIN;
uint16_t x36 = 9666U;
int32_t x38 = -1;
static int16_t x40 = INT16_MAX;
uint32_t x42 = 1010U;
volatile uint64_t x48 = 5217662003803LLU;
static uint16_t x55 = 4U;
static volatile int8_t x56 = -3;
static int32_t t13 = -67319570;
uint64_t x67 = 1LLU;
uint32_t x68 = 3U;
uint8_t x69 = 7U;
volatile int8_t x71 = -1;
int32_t t16 = -1046499;
static uint16_t x80 = 1U;
static int32_t x84 = INT32_MAX;
volatile int32_t t19 = 53397;
volatile uint8_t x86 = 12U;
int16_t x88 = -1;
int64_t x90 = INT64_MAX;
volatile int64_t x91 = INT64_MAX;
static volatile int16_t x98 = -3149;
uint32_t x104 = UINT32_MAX;
int64_t x117 = 46463LL;
int8_t x120 = 7;
volatile int32_t t25 = -129294975;
static uint16_t x122 = 54U;
volatile int32_t t26 = 2;
uint32_t x138 = UINT32_MAX;
volatile int32_t t28 = -109927554;
int16_t x150 = INT16_MAX;
int32_t x158 = 2112731;
int64_t x161 = INT64_MAX;
int16_t x162 = INT16_MIN;
volatile int32_t t33 = 367;
int32_t t34 = 1;
volatile int64_t x175 = 2871540152068768LL;
static uint32_t x178 = UINT32_MAX;
int32_t x179 = 9;
int8_t x180 = -1;
int32_t t36 = 2;
uint32_t x182 = UINT32_MAX;
static int8_t x203 = INT8_MAX;
int32_t t44 = -15;
static int16_t x214 = -1;
static volatile uint64_t x216 = 11345LLU;
int16_t x220 = 6;
static uint64_t x222 = 93303LLU;
static uint16_t x228 = 1831U;
int64_t x229 = INT64_MAX;
int16_t x231 = INT16_MIN;
int32_t t49 = 24;
volatile int8_t x235 = -12;
static int32_t x236 = 41;
static uint8_t x238 = 109U;
uint16_t x241 = 344U;
uint16_t x245 = 174U;
int32_t x259 = INT32_MIN;
static volatile int64_t x261 = INT64_MIN;
int32_t t59 = 1503;
uint64_t x282 = 1312157078246257LLU;
int16_t x284 = INT16_MIN;
volatile int32_t t62 = -106307;
int8_t x285 = -1;
volatile uint32_t x287 = 7U;
static int8_t x293 = -1;
int32_t t65 = 54553;
int32_t x299 = INT32_MIN;
static int16_t x300 = INT16_MAX;
volatile uint16_t x306 = 6U;
volatile int64_t x308 = -3695595LL;
int32_t t72 = -7;
volatile int32_t t74 = 5;
int64_t x333 = 7733084675086LL;
int32_t x337 = 946731;
static uint8_t x338 = 15U;
static int8_t x346 = -1;
uint16_t x348 = 9U;
uint8_t x351 = 2U;
int64_t x355 = INT64_MIN;
int16_t x361 = 699;
volatile uint8_t x364 = UINT8_MAX;
int32_t t83 = 953;
uint8_t x380 = 54U;
int32_t t84 = -1472;
uint64_t x384 = 7596816342793LLU;
int32_t t85 = -18644;
uint64_t x392 = 1626708LLU;
static volatile int32_t t88 = 121;
static volatile uint8_t x397 = 87U;
uint8_t x402 = 2U;
volatile int16_t x403 = INT16_MAX;
uint8_t x423 = UINT8_MAX;
volatile int8_t x435 = 13;
volatile int8_t x443 = -1;
uint64_t x449 = UINT64_MAX;
int32_t t98 = 611382;
volatile int8_t x458 = INT8_MIN;
int8_t x460 = 1;
int32_t t99 = -853204732;
static int16_t x463 = INT16_MIN;
static uint8_t x464 = 30U;
int8_t x466 = -1;
static int8_t x470 = INT8_MAX;
int8_t x473 = INT8_MIN;
int64_t x493 = INT64_MAX;
static int32_t t106 = 5210;
static volatile int8_t x508 = 1;
volatile int64_t x514 = INT64_MIN;
uint32_t x522 = UINT32_MAX;
uint16_t x524 = UINT16_MAX;
static int32_t t112 = 329;
volatile int32_t x527 = INT32_MIN;
static uint32_t x547 = UINT32_MAX;
int32_t t117 = 3;
static uint64_t x552 = UINT64_MAX;
int64_t x555 = 0LL;
int64_t x559 = -1165336791023553LL;
static int32_t t120 = 7491717;
uint32_t x563 = 571491U;
int32_t t122 = -2667;
int16_t x571 = INT16_MAX;
int8_t x574 = INT8_MAX;
uint16_t x578 = 126U;
static int32_t x584 = 0;
static volatile int32_t t127 = 0;
volatile int32_t x592 = -1;
volatile int32_t t128 = -13317;
int16_t x599 = -1;
uint64_t x605 = 2321883LLU;
static int32_t x621 = INT32_MAX;
volatile uint32_t x627 = 10U;
int32_t x635 = INT32_MAX;
volatile int32_t t139 = 364;
int64_t x637 = 49742734598862LL;
static uint8_t x649 = 1U;
int16_t x659 = -1;
volatile int16_t x669 = 102;
uint16_t x670 = 182U;
static volatile int32_t t147 = -1212;
volatile int8_t x681 = 0;
volatile uint8_t x686 = 4U;
uint64_t x688 = UINT64_MAX;
int32_t x692 = INT32_MAX;
static int32_t t153 = 0;
uint64_t x701 = 99688315663561247LLU;
static volatile int32_t x706 = -1;
uint64_t x714 = UINT64_MAX;
uint32_t x718 = UINT32_MAX;
volatile uint8_t x721 = 31U;
int8_t x724 = INT8_MIN;
uint32_t x728 = 23U;
int32_t x739 = INT32_MAX;
static uint32_t x743 = UINT32_MAX;
static int32_t x752 = -899;
static int32_t t165 = 40;
int16_t x758 = -6;
static int16_t x761 = INT16_MIN;
static int8_t x764 = -1;
volatile int64_t x767 = INT64_MIN;
int16_t x777 = INT16_MIN;
static int16_t x781 = INT16_MIN;
static uint64_t x785 = UINT64_MAX;
int32_t x793 = INT32_MIN;
static uint32_t x799 = UINT32_MAX;
volatile int32_t t176 = 501531197;
volatile int32_t t178 = 0;
static int64_t x819 = -1LL;
static int64_t x835 = INT64_MAX;
static volatile int32_t t184 = -218749795;
volatile int32_t t185 = 453520;
static volatile int16_t x847 = -3622;
static int8_t x850 = -1;
static uint32_t x851 = 279233U;
int16_t x853 = INT16_MIN;
int8_t x854 = INT8_MAX;
int8_t x868 = 1;
uint8_t x875 = 1U;
int16_t x884 = -1;
volatile int64_t x885 = -4281043929951152LL;
volatile int32_t t195 = 38;
uint32_t x896 = 8424U;


void f0(void) {
    	volatile uint8_t x2 = 26U;
	int64_t x3 = -1LL;
	uint8_t x4 = UINT8_MAX;
	int32_t t0 = 53108073;

    t0 = (x1==((x2<=x3)-x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x9 = INT8_MIN;
	int8_t x10 = -1;
	uint16_t x11 = 12458U;
	uint16_t x12 = 1487U;
	volatile int32_t t1 = -61122103;

    t1 = (x9==((x10<=x11)-x12));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint8_t x13 = UINT8_MAX;
	uint64_t x14 = UINT64_MAX;
	uint16_t x15 = 0U;
	int8_t x16 = INT8_MIN;
	int32_t t2 = -47954947;

    t2 = (x13==((x14<=x15)-x16));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint16_t x17 = UINT16_MAX;
	int8_t x18 = -1;
	uint16_t x19 = UINT16_MAX;
	int64_t x20 = -501578615482689709LL;
	static int32_t t3 = -532;

    t3 = (x17==((x18<=x19)-x20));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x21 = -839555;
	uint32_t x22 = 202935U;
	int32_t x23 = INT32_MAX;
	uint8_t x24 = 4U;
	volatile int32_t t4 = 4;

    t4 = (x21==((x22<=x23)-x24));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x25 = -1;
	static int32_t x26 = 0;
	volatile int16_t x27 = -3399;
	volatile int64_t x28 = 5646182LL;
	volatile int32_t t5 = -1002449724;

    t5 = (x25==((x26<=x27)-x28));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x29 = 69862097367379425LLU;
	static int32_t x30 = INT32_MAX;
	int64_t x31 = 151751LL;
	uint64_t x32 = 7314929487980LLU;
	volatile int32_t t6 = 1;

    t6 = (x29==((x30<=x31)-x32));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x35 = UINT8_MAX;
	int32_t t7 = 615635350;

    t7 = (x33==((x34<=x35)-x36));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x37 = -83768908270LL;
	volatile int8_t x39 = INT8_MIN;
	volatile int32_t t8 = -5045358;

    t8 = (x37==((x38<=x39)-x40));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x41 = 19U;
	volatile uint8_t x43 = 2U;
	static volatile uint16_t x44 = UINT16_MAX;
	volatile int32_t t9 = 527087;

    t9 = (x41==((x42<=x43)-x44));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x45 = INT16_MIN;
	int64_t x46 = 6953724LL;
	uint32_t x47 = 1644740156U;
	int32_t t10 = 0;

    t10 = (x45==((x46<=x47)-x48));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x49 = -2;
	uint32_t x50 = UINT32_MAX;
	volatile int32_t x51 = INT32_MIN;
	int32_t x52 = INT32_MAX;
	int32_t t11 = 22;

    t11 = (x49==((x50<=x51)-x52));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x53 = INT16_MIN;
	uint8_t x54 = 1U;
	static int32_t t12 = -84863;

    t12 = (x53==((x54<=x55)-x56));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint8_t x57 = UINT8_MAX;
	static int16_t x58 = -277;
	static volatile int16_t x59 = -1;
	int8_t x60 = -19;

    t13 = (x57==((x58<=x59)-x60));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x61 = 5;
	volatile int32_t x62 = INT32_MIN;
	int8_t x63 = INT8_MAX;
	int64_t x64 = INT64_MAX;
	int32_t t14 = 15051797;

    t14 = (x61==((x62<=x63)-x64));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x65 = 0LLU;
	uint64_t x66 = UINT64_MAX;
	static int32_t t15 = 1;

    t15 = (x65==((x66<=x67)-x68));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile uint16_t x70 = UINT16_MAX;
	int8_t x72 = -25;

    t16 = (x69==((x70<=x71)-x72));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x73 = INT16_MAX;
	int32_t x74 = -1;
	int32_t x75 = -1;
	static int16_t x76 = INT16_MIN;
	int32_t t17 = -430;

    t17 = (x73==((x74<=x75)-x76));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x77 = UINT16_MAX;
	volatile int32_t x78 = INT32_MIN;
	volatile int64_t x79 = INT64_MAX;
	int32_t t18 = -7084536;

    t18 = (x77==((x78<=x79)-x80));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x81 = INT32_MIN;
	int16_t x82 = -6;
	int32_t x83 = INT32_MAX;

    t19 = (x81==((x82<=x83)-x84));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int8_t x85 = 63;
	static int8_t x87 = -1;
	int32_t t20 = 10769573;

    t20 = (x85==((x86<=x87)-x88));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x89 = -3856;
	int8_t x92 = -1;
	int32_t t21 = -1698866;

    t21 = (x89==((x90<=x91)-x92));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x97 = INT64_MAX;
	volatile uint64_t x99 = UINT64_MAX;
	int8_t x100 = INT8_MIN;
	volatile int32_t t22 = -3797730;

    t22 = (x97==((x98<=x99)-x100));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x101 = UINT32_MAX;
	int8_t x102 = -1;
	volatile int16_t x103 = INT16_MIN;
	int32_t t23 = 252415;

    t23 = (x101==((x102<=x103)-x104));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x113 = -1;
	volatile uint64_t x114 = 8594716997927422LLU;
	int32_t x115 = INT32_MAX;
	uint16_t x116 = UINT16_MAX;
	volatile int32_t t24 = 64630;

    t24 = (x113==((x114<=x115)-x116));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint32_t x118 = 33101454U;
	static int64_t x119 = INT64_MAX;

    t25 = (x117==((x118<=x119)-x120));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x121 = 158749030796085LL;
	int16_t x123 = -10;
	uint8_t x124 = UINT8_MAX;

    t26 = (x121==((x122<=x123)-x124));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x129 = 1855683LL;
	static int16_t x130 = INT16_MIN;
	volatile int32_t x131 = -15;
	volatile uint64_t x132 = 11187779377982653LLU;
	static int32_t t27 = 8203717;

    t27 = (x129==((x130<=x131)-x132));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t x137 = -13361656;
	int16_t x139 = INT16_MIN;
	static uint32_t x140 = UINT32_MAX;

    t28 = (x137==((x138<=x139)-x140));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x145 = INT16_MIN;
	int16_t x146 = INT16_MIN;
	int16_t x147 = -2;
	int32_t x148 = -24241909;
	int32_t t29 = 12;

    t29 = (x145==((x146<=x147)-x148));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int16_t x149 = INT16_MAX;
	static int16_t x151 = -92;
	int8_t x152 = -13;
	volatile int32_t t30 = -608;

    t30 = (x149==((x150<=x151)-x152));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x157 = -1;
	int8_t x159 = INT8_MIN;
	static volatile int8_t x160 = -14;
	int32_t t31 = 268171745;

    t31 = (x157==((x158<=x159)-x160));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile int32_t x163 = INT32_MAX;
	int8_t x164 = -3;
	int32_t t32 = -3861;

    t32 = (x161==((x162<=x163)-x164));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x165 = 4U;
	volatile int32_t x166 = -5;
	int64_t x167 = 1100297403LL;
	int32_t x168 = INT32_MAX;

    t33 = (x165==((x166<=x167)-x168));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x169 = UINT32_MAX;
	int8_t x170 = INT8_MIN;
	static uint16_t x171 = UINT16_MAX;
	int16_t x172 = 1744;

    t34 = (x169==((x170<=x171)-x172));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x173 = INT16_MAX;
	int32_t x174 = -2348;
	int16_t x176 = -79;
	int32_t t35 = 125702;

    t35 = (x173==((x174<=x175)-x176));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x177 = INT64_MIN;

    t36 = (x177==((x178<=x179)-x180));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x181 = INT64_MIN;
	static uint16_t x183 = 48U;
	int32_t x184 = -19;
	int32_t t37 = -1;

    t37 = (x181==((x182<=x183)-x184));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x185 = INT16_MIN;
	static int64_t x186 = INT64_MAX;
	volatile int8_t x187 = INT8_MAX;
	uint64_t x188 = 3270505551016402967LLU;
	volatile int32_t t38 = 1;

    t38 = (x185==((x186<=x187)-x188));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x189 = 1695LL;
	static volatile int8_t x190 = 0;
	uint32_t x191 = 356568145U;
	static int8_t x192 = INT8_MIN;
	volatile int32_t t39 = 1042;

    t39 = (x189==((x190<=x191)-x192));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x193 = INT16_MAX;
	int8_t x194 = 2;
	volatile int8_t x195 = 15;
	volatile int32_t x196 = INT32_MAX;
	volatile int32_t t40 = -219148805;

    t40 = (x193==((x194<=x195)-x196));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x197 = 192LLU;
	int8_t x198 = INT8_MIN;
	static volatile int8_t x199 = 7;
	int16_t x200 = INT16_MAX;
	volatile int32_t t41 = -25127475;

    t41 = (x197==((x198<=x199)-x200));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint32_t x201 = 216168U;
	int32_t x202 = INT32_MAX;
	int64_t x204 = 30375956581820220LL;
	static volatile int32_t t42 = 0;

    t42 = (x201==((x202<=x203)-x204));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x205 = 49;
	int32_t x206 = INT32_MIN;
	uint16_t x207 = UINT16_MAX;
	uint8_t x208 = 24U;
	volatile int32_t t43 = 942278975;

    t43 = (x205==((x206<=x207)-x208));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x209 = -749;
	int8_t x210 = 0;
	int16_t x211 = 1;
	int16_t x212 = -1;

    t44 = (x209==((x210<=x211)-x212));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x213 = UINT32_MAX;
	volatile int8_t x215 = INT8_MIN;
	volatile int32_t t45 = -1;

    t45 = (x213==((x214<=x215)-x216));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x217 = INT8_MIN;
	static int8_t x218 = -1;
	static int64_t x219 = 39100756771LL;
	volatile int32_t t46 = -333;

    t46 = (x217==((x218<=x219)-x220));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x221 = UINT8_MAX;
	volatile int8_t x223 = INT8_MAX;
	uint32_t x224 = 2U;
	int32_t t47 = 1;

    t47 = (x221==((x222<=x223)-x224));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x225 = 2240249LL;
	uint64_t x226 = UINT64_MAX;
	volatile int64_t x227 = INT64_MIN;
	int32_t t48 = 20;

    t48 = (x225==((x226<=x227)-x228));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x230 = -1;
	volatile uint8_t x232 = UINT8_MAX;

    t49 = (x229==((x230<=x231)-x232));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x233 = -6;
	uint8_t x234 = 2U;
	static int32_t t50 = 710975053;

    t50 = (x233==((x234<=x235)-x236));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x237 = INT16_MIN;
	int8_t x239 = INT8_MIN;
	uint16_t x240 = 0U;
	volatile int32_t t51 = 28303;

    t51 = (x237==((x238<=x239)-x240));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile uint8_t x242 = 2U;
	int32_t x243 = -859981727;
	static uint8_t x244 = 19U;
	static int32_t t52 = -267862690;

    t52 = (x241==((x242<=x243)-x244));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x246 = 2;
	uint64_t x247 = 493780836170LLU;
	volatile uint64_t x248 = 3023519581045481LLU;
	int32_t t53 = 547;

    t53 = (x245==((x246<=x247)-x248));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x249 = 1618U;
	volatile int64_t x250 = 486829538LL;
	volatile int64_t x251 = INT64_MAX;
	int32_t x252 = -1;
	int32_t t54 = 2754601;

    t54 = (x249==((x250<=x251)-x252));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint64_t x253 = 15278584LLU;
	volatile uint8_t x254 = 1U;
	int32_t x255 = INT32_MIN;
	int8_t x256 = INT8_MAX;
	int32_t t55 = -1069564688;

    t55 = (x253==((x254<=x255)-x256));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x257 = INT8_MIN;
	volatile uint8_t x258 = UINT8_MAX;
	int8_t x260 = 0;
	int32_t t56 = 20515;

    t56 = (x257==((x258<=x259)-x260));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int32_t x262 = INT32_MIN;
	volatile int64_t x263 = INT64_MIN;
	volatile int16_t x264 = INT16_MIN;
	static int32_t t57 = -5675654;

    t57 = (x261==((x262<=x263)-x264));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile uint8_t x265 = UINT8_MAX;
	static int32_t x266 = INT32_MIN;
	uint32_t x267 = 457U;
	int8_t x268 = 0;
	volatile int32_t t58 = -795;

    t58 = (x265==((x266<=x267)-x268));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x269 = 43543889442LLU;
	int32_t x270 = -1;
	volatile int16_t x271 = INT16_MIN;
	int64_t x272 = -1LL;

    t59 = (x269==((x270<=x271)-x272));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x273 = 529U;
	static volatile int32_t x274 = INT32_MAX;
	volatile uint32_t x275 = UINT32_MAX;
	uint32_t x276 = UINT32_MAX;
	int32_t t60 = 5;

    t60 = (x273==((x274<=x275)-x276));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x277 = 1U;
	int16_t x278 = -1;
	int64_t x279 = -1LL;
	volatile uint32_t x280 = 1U;
	int32_t t61 = -1451271;

    t61 = (x277==((x278<=x279)-x280));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x281 = UINT8_MAX;
	int64_t x283 = INT64_MAX;

    t62 = (x281==((x282<=x283)-x284));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x286 = UINT8_MAX;
	static int16_t x288 = INT16_MAX;
	volatile int32_t t63 = 1892;

    t63 = (x285==((x286<=x287)-x288));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x289 = -1;
	int32_t x290 = 55;
	int32_t x291 = -1;
	int32_t x292 = -52201;
	int32_t t64 = 104;

    t64 = (x289==((x290<=x291)-x292));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x294 = -1;
	static int32_t x295 = INT32_MIN;
	static int16_t x296 = INT16_MAX;

    t65 = (x293==((x294<=x295)-x296));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x297 = INT64_MAX;
	int64_t x298 = INT64_MIN;
	static int32_t t66 = -36;

    t66 = (x297==((x298<=x299)-x300));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x301 = -1;
	uint16_t x302 = 0U;
	uint64_t x303 = UINT64_MAX;
	int16_t x304 = 2576;
	int32_t t67 = 523000637;

    t67 = (x301==((x302<=x303)-x304));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int32_t x305 = INT32_MIN;
	volatile uint32_t x307 = UINT32_MAX;
	volatile int32_t t68 = -127967;

    t68 = (x305==((x306<=x307)-x308));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x309 = INT64_MIN;
	int8_t x310 = INT8_MIN;
	volatile int16_t x311 = -62;
	int64_t x312 = -1LL;
	static volatile int32_t t69 = 404654;

    t69 = (x309==((x310<=x311)-x312));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x313 = 120U;
	int8_t x314 = INT8_MIN;
	static int8_t x315 = INT8_MIN;
	uint32_t x316 = UINT32_MAX;
	int32_t t70 = 486925;

    t70 = (x313==((x314<=x315)-x316));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x317 = 967698993;
	static uint16_t x318 = UINT16_MAX;
	static uint16_t x319 = UINT16_MAX;
	int8_t x320 = INT8_MIN;
	static int32_t t71 = 8025;

    t71 = (x317==((x318<=x319)-x320));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x321 = INT64_MIN;
	volatile uint16_t x322 = 24U;
	int8_t x323 = INT8_MAX;
	volatile int32_t x324 = -1;

    t72 = (x321==((x322<=x323)-x324));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x325 = 1;
	uint32_t x326 = UINT32_MAX;
	static int16_t x327 = -1465;
	int32_t x328 = -1;
	volatile int32_t t73 = 16;

    t73 = (x325==((x326<=x327)-x328));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x329 = INT8_MIN;
	uint16_t x330 = 27U;
	volatile uint64_t x331 = 5336359186LLU;
	static uint8_t x332 = 2U;

    t74 = (x329==((x330<=x331)-x332));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int64_t x334 = 88350402LL;
	volatile uint8_t x335 = 124U;
	static uint8_t x336 = 2U;
	static volatile int32_t t75 = 1891653;

    t75 = (x333==((x334<=x335)-x336));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x339 = INT32_MIN;
	volatile int8_t x340 = -8;
	volatile int32_t t76 = 7884;

    t76 = (x337==((x338<=x339)-x340));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x345 = 36;
	int16_t x347 = -1802;
	volatile int32_t t77 = 22;

    t77 = (x345==((x346<=x347)-x348));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x349 = INT8_MAX;
	int8_t x350 = 7;
	int8_t x352 = -1;
	int32_t t78 = 0;

    t78 = (x349==((x350<=x351)-x352));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x353 = 3U;
	uint32_t x354 = 14U;
	volatile int8_t x356 = -1;
	int32_t t79 = 3;

    t79 = (x353==((x354<=x355)-x356));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x362 = INT32_MIN;
	static int64_t x363 = INT64_MIN;
	static volatile int32_t t80 = 217;

    t80 = (x361==((x362<=x363)-x364));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x365 = INT16_MIN;
	static int8_t x366 = INT8_MIN;
	volatile int8_t x367 = INT8_MIN;
	volatile int32_t x368 = -1;
	volatile int32_t t81 = 5;

    t81 = (x365==((x366<=x367)-x368));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x369 = -1;
	static int64_t x370 = INT64_MAX;
	volatile int32_t x371 = INT32_MIN;
	int8_t x372 = INT8_MIN;
	int32_t t82 = 61;

    t82 = (x369==((x370<=x371)-x372));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile uint64_t x373 = 11791246LLU;
	volatile uint64_t x374 = 86839LLU;
	static volatile uint32_t x375 = 228279U;
	int16_t x376 = INT16_MIN;

    t83 = (x373==((x374<=x375)-x376));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x377 = INT32_MAX;
	uint64_t x378 = 20LLU;
	int64_t x379 = -218188367622648444LL;

    t84 = (x377==((x378<=x379)-x380));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x381 = 29735261;
	int64_t x382 = INT64_MIN;
	volatile int8_t x383 = INT8_MAX;

    t85 = (x381==((x382<=x383)-x384));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x385 = 34377LL;
	int16_t x386 = INT16_MAX;
	static uint16_t x387 = 16660U;
	static int16_t x388 = INT16_MIN;
	volatile int32_t t86 = -186;

    t86 = (x385==((x386<=x387)-x388));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile int32_t x389 = INT32_MIN;
	static uint64_t x390 = 27248466559619LLU;
	uint8_t x391 = UINT8_MAX;
	int32_t t87 = -958;

    t87 = (x389==((x390<=x391)-x392));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x393 = 1;
	uint16_t x394 = 1518U;
	uint32_t x395 = 45433U;
	uint8_t x396 = 1U;

    t88 = (x393==((x394<=x395)-x396));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int8_t x398 = -1;
	static int16_t x399 = -15795;
	int64_t x400 = -1LL;
	volatile int32_t t89 = 1;

    t89 = (x397==((x398<=x399)-x400));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint16_t x401 = 186U;
	int8_t x404 = INT8_MIN;
	int32_t t90 = 2328;

    t90 = (x401==((x402<=x403)-x404));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x417 = INT64_MIN;
	static volatile int16_t x418 = INT16_MIN;
	volatile int32_t x419 = INT32_MIN;
	uint8_t x420 = 84U;
	int32_t t91 = -116043;

    t91 = (x417==((x418<=x419)-x420));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x421 = 744LL;
	static int16_t x422 = INT16_MIN;
	int32_t x424 = -1;
	int32_t t92 = 1278924;

    t92 = (x421==((x422<=x423)-x424));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x425 = -1;
	static int64_t x426 = INT64_MIN;
	uint16_t x427 = UINT16_MAX;
	int64_t x428 = -1LL;
	static int32_t t93 = 1;

    t93 = (x425==((x426<=x427)-x428));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x433 = 3217U;
	uint32_t x434 = 0U;
	int8_t x436 = 0;
	int32_t t94 = 7020323;

    t94 = (x433==((x434<=x435)-x436));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x437 = 31U;
	uint64_t x438 = 2731190120851784LLU;
	int8_t x439 = INT8_MIN;
	int8_t x440 = -2;
	int32_t t95 = 885741310;

    t95 = (x437==((x438<=x439)-x440));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x441 = 837357U;
	volatile int8_t x442 = INT8_MAX;
	volatile uint8_t x444 = 7U;
	int32_t t96 = -634061;

    t96 = (x441==((x442<=x443)-x444));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x445 = -1;
	int32_t x446 = -1;
	volatile int8_t x447 = INT8_MIN;
	static uint16_t x448 = 1730U;
	int32_t t97 = -19328;

    t97 = (x445==((x446<=x447)-x448));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x450 = INT8_MIN;
	uint8_t x451 = UINT8_MAX;
	int32_t x452 = 15;

    t98 = (x449==((x450<=x451)-x452));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x457 = 2;
	static int8_t x459 = INT8_MAX;

    t99 = (x457==((x458<=x459)-x460));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint32_t x461 = 1U;
	int8_t x462 = -5;
	volatile int32_t t100 = -55725;

    t100 = (x461==((x462<=x463)-x464));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x465 = INT32_MAX;
	uint32_t x467 = 1218U;
	static volatile uint32_t x468 = 152224059U;
	int32_t t101 = -3137200;

    t101 = (x465==((x466<=x467)-x468));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x469 = INT32_MIN;
	volatile uint32_t x471 = 21887016U;
	static int8_t x472 = -1;
	int32_t t102 = -102953795;

    t102 = (x469==((x470<=x471)-x472));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x474 = 31276478LL;
	int32_t x475 = -7;
	static volatile int16_t x476 = 691;
	static int32_t t103 = -502526979;

    t103 = (x473==((x474<=x475)-x476));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile int32_t x481 = -1;
	volatile uint8_t x482 = 115U;
	uint64_t x483 = UINT64_MAX;
	static int16_t x484 = INT16_MIN;
	volatile int32_t t104 = 0;

    t104 = (x481==((x482<=x483)-x484));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x485 = 103U;
	int8_t x486 = INT8_MAX;
	volatile int16_t x487 = INT16_MIN;
	int32_t x488 = -1;
	volatile int32_t t105 = -290;

    t105 = (x485==((x486<=x487)-x488));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x494 = INT8_MIN;
	static int64_t x495 = INT64_MIN;
	static volatile int8_t x496 = INT8_MIN;

    t106 = (x493==((x494<=x495)-x496));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x497 = 107U;
	uint16_t x498 = 1067U;
	static uint16_t x499 = UINT16_MAX;
	static int8_t x500 = INT8_MIN;
	volatile int32_t t107 = -86;

    t107 = (x497==((x498<=x499)-x500));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x501 = 69U;
	int32_t x502 = INT32_MIN;
	int64_t x503 = 2445359147136LL;
	static int32_t x504 = INT32_MAX;
	volatile int32_t t108 = -20469;

    t108 = (x501==((x502<=x503)-x504));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x505 = INT8_MAX;
	int64_t x506 = -1LL;
	static int8_t x507 = -1;
	int32_t t109 = -1366;

    t109 = (x505==((x506<=x507)-x508));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x509 = INT16_MIN;
	static int32_t x510 = -1;
	volatile uint64_t x511 = UINT64_MAX;
	uint16_t x512 = UINT16_MAX;
	static int32_t t110 = -183991117;

    t110 = (x509==((x510<=x511)-x512));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint32_t x513 = 245U;
	int16_t x515 = INT16_MIN;
	int16_t x516 = INT16_MIN;
	volatile int32_t t111 = 74500;

    t111 = (x513==((x514<=x515)-x516));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x521 = 4U;
	static int8_t x523 = INT8_MIN;

    t112 = (x521==((x522<=x523)-x524));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x525 = 20U;
	uint64_t x526 = 7867461328062884LLU;
	static uint32_t x528 = 1944209171U;
	volatile int32_t t113 = -5;

    t113 = (x525==((x526<=x527)-x528));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x529 = 305U;
	int16_t x530 = -13;
	static int64_t x531 = INT64_MAX;
	int64_t x532 = 86149001592814LL;
	volatile int32_t t114 = -2;

    t114 = (x529==((x530<=x531)-x532));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x533 = INT32_MIN;
	uint64_t x534 = 30791LLU;
	volatile int64_t x535 = INT64_MIN;
	uint32_t x536 = 755719U;
	int32_t t115 = 1;

    t115 = (x533==((x534<=x535)-x536));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x541 = INT8_MAX;
	int32_t x542 = INT32_MAX;
	uint32_t x543 = 6704U;
	volatile uint16_t x544 = 3U;
	volatile int32_t t116 = -608730;

    t116 = (x541==((x542<=x543)-x544));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x545 = INT8_MIN;
	int32_t x546 = INT32_MAX;
	static int64_t x548 = INT64_MAX;

    t117 = (x545==((x546<=x547)-x548));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x549 = 3883846035652838LLU;
	volatile uint8_t x550 = UINT8_MAX;
	uint64_t x551 = 123149818LLU;
	int32_t t118 = 6429;

    t118 = (x549==((x550<=x551)-x552));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x553 = -1;
	uint64_t x554 = UINT64_MAX;
	volatile int32_t x556 = 1;
	volatile int32_t t119 = -88;

    t119 = (x553==((x554<=x555)-x556));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x557 = 47962126;
	volatile int32_t x558 = -5675;
	int16_t x560 = -1;

    t120 = (x557==((x558<=x559)-x560));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t x561 = 1029547521335898LL;
	uint8_t x562 = 3U;
	static int64_t x564 = -75127LL;
	int32_t t121 = -2959;

    t121 = (x561==((x562<=x563)-x564));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x565 = 32764525U;
	int16_t x566 = -1;
	static int32_t x567 = INT32_MIN;
	static volatile int8_t x568 = 11;

    t122 = (x565==((x566<=x567)-x568));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x569 = 3LLU;
	int64_t x570 = INT64_MIN;
	uint64_t x572 = 10267LLU;
	int32_t t123 = -935000;

    t123 = (x569==((x570<=x571)-x572));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x573 = 0;
	uint64_t x575 = UINT64_MAX;
	static volatile int8_t x576 = INT8_MAX;
	int32_t t124 = 20706156;

    t124 = (x573==((x574<=x575)-x576));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint8_t x577 = UINT8_MAX;
	int8_t x579 = INT8_MAX;
	int16_t x580 = INT16_MAX;
	static volatile int32_t t125 = -3523687;

    t125 = (x577==((x578<=x579)-x580));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x581 = INT8_MAX;
	uint32_t x582 = 1020617U;
	int64_t x583 = -407LL;
	static volatile int32_t t126 = 403815;

    t126 = (x581==((x582<=x583)-x584));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x585 = 1;
	int64_t x586 = -1LL;
	uint64_t x587 = 3871414491268620036LLU;
	int64_t x588 = -1LL;

    t127 = (x585==((x586<=x587)-x588));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x589 = INT16_MIN;
	int64_t x590 = INT64_MAX;
	uint8_t x591 = 0U;

    t128 = (x589==((x590<=x591)-x592));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x593 = -1;
	uint32_t x594 = UINT32_MAX;
	uint16_t x595 = UINT16_MAX;
	uint32_t x596 = 84U;
	int32_t t129 = -23224292;

    t129 = (x593==((x594<=x595)-x596));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x597 = -3981;
	uint32_t x598 = UINT32_MAX;
	int8_t x600 = INT8_MAX;
	volatile int32_t t130 = -2703;

    t130 = (x597==((x598<=x599)-x600));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x601 = -60;
	volatile int16_t x602 = 3910;
	int16_t x603 = INT16_MIN;
	volatile int16_t x604 = -8;
	volatile int32_t t131 = -259669282;

    t131 = (x601==((x602<=x603)-x604));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x606 = INT32_MIN;
	uint8_t x607 = 8U;
	int32_t x608 = 23;
	volatile int32_t t132 = 13965;

    t132 = (x605==((x606<=x607)-x608));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x609 = INT16_MAX;
	int64_t x610 = -1LL;
	static int64_t x611 = -1LL;
	uint64_t x612 = UINT64_MAX;
	int32_t t133 = -3;

    t133 = (x609==((x610<=x611)-x612));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x613 = INT32_MIN;
	int64_t x614 = 1LL;
	uint8_t x615 = 46U;
	int8_t x616 = INT8_MIN;
	int32_t t134 = -101;

    t134 = (x613==((x614<=x615)-x616));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x617 = 2429U;
	uint64_t x618 = UINT64_MAX;
	int64_t x619 = INT64_MAX;
	uint16_t x620 = UINT16_MAX;
	volatile int32_t t135 = 54024819;

    t135 = (x617==((x618<=x619)-x620));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x622 = -4;
	int64_t x623 = INT64_MIN;
	int16_t x624 = INT16_MAX;
	volatile int32_t t136 = 24;

    t136 = (x621==((x622<=x623)-x624));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x625 = 26U;
	uint16_t x626 = 0U;
	int8_t x628 = INT8_MIN;
	static volatile int32_t t137 = -473566;

    t137 = (x625==((x626<=x627)-x628));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x629 = INT8_MIN;
	uint8_t x630 = 1U;
	static int8_t x631 = INT8_MAX;
	int16_t x632 = INT16_MIN;
	volatile int32_t t138 = 459705;

    t138 = (x629==((x630<=x631)-x632));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x633 = -1LL;
	int32_t x634 = INT32_MAX;
	static int16_t x636 = INT16_MIN;

    t139 = (x633==((x634<=x635)-x636));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x638 = 27U;
	volatile uint16_t x639 = 23U;
	static uint16_t x640 = 6U;
	int32_t t140 = -694;

    t140 = (x637==((x638<=x639)-x640));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x641 = INT16_MIN;
	uint8_t x642 = 41U;
	int64_t x643 = INT64_MIN;
	int16_t x644 = INT16_MIN;
	volatile int32_t t141 = -232970246;

    t141 = (x641==((x642<=x643)-x644));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x645 = 0U;
	static uint32_t x646 = 3755798U;
	uint32_t x647 = 149529275U;
	int8_t x648 = 1;
	int32_t t142 = 33;

    t142 = (x645==((x646<=x647)-x648));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x650 = -31;
	int8_t x651 = INT8_MAX;
	volatile int16_t x652 = INT16_MAX;
	int32_t t143 = -1;

    t143 = (x649==((x650<=x651)-x652));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint32_t x653 = 458090U;
	int16_t x654 = INT16_MIN;
	static int32_t x655 = -487363829;
	int16_t x656 = INT16_MIN;
	volatile int32_t t144 = 408404;

    t144 = (x653==((x654<=x655)-x656));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x657 = -1;
	static int8_t x658 = 0;
	uint32_t x660 = UINT32_MAX;
	static volatile int32_t t145 = -525754108;

    t145 = (x657==((x658<=x659)-x660));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint16_t x665 = 7521U;
	volatile int16_t x666 = INT16_MIN;
	volatile uint16_t x667 = 0U;
	static uint64_t x668 = 97804171833478LLU;
	volatile int32_t t146 = -66236853;

    t146 = (x665==((x666<=x667)-x668));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint8_t x671 = 7U;
	int8_t x672 = 1;

    t147 = (x669==((x670<=x671)-x672));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x673 = 3211U;
	int32_t x674 = INT32_MIN;
	uint32_t x675 = UINT32_MAX;
	static int16_t x676 = INT16_MIN;
	static int32_t t148 = -119;

    t148 = (x673==((x674<=x675)-x676));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x677 = 20;
	uint64_t x678 = UINT64_MAX;
	static uint64_t x679 = 1933336336602LLU;
	int64_t x680 = INT64_MAX;
	int32_t t149 = 436543439;

    t149 = (x677==((x678<=x679)-x680));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x682 = -2;
	static uint64_t x683 = 2225824294100460993LLU;
	int16_t x684 = 1237;
	static int32_t t150 = 39;

    t150 = (x681==((x682<=x683)-x684));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile uint64_t x685 = 5772908985309880610LLU;
	int8_t x687 = 0;
	static int32_t t151 = 136514031;

    t151 = (x685==((x686<=x687)-x688));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x689 = 118U;
	volatile int32_t x690 = -23;
	volatile uint32_t x691 = UINT32_MAX;
	int32_t t152 = 7;

    t152 = (x689==((x690<=x691)-x692));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x693 = -1;
	int16_t x694 = INT16_MIN;
	volatile uint8_t x695 = UINT8_MAX;
	static volatile uint8_t x696 = 16U;

    t153 = (x693==((x694<=x695)-x696));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint32_t x702 = 5U;
	static uint8_t x703 = 1U;
	uint32_t x704 = 0U;
	volatile int32_t t154 = -411662;

    t154 = (x701==((x702<=x703)-x704));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x705 = UINT32_MAX;
	volatile int16_t x707 = 0;
	uint64_t x708 = UINT64_MAX;
	int32_t t155 = -1952117;

    t155 = (x705==((x706<=x707)-x708));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x709 = UINT64_MAX;
	int64_t x710 = INT64_MIN;
	static int8_t x711 = INT8_MIN;
	static uint64_t x712 = UINT64_MAX;
	volatile int32_t t156 = 70152071;

    t156 = (x709==((x710<=x711)-x712));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x713 = INT32_MAX;
	int64_t x715 = -26563084LL;
	volatile int8_t x716 = INT8_MIN;
	int32_t t157 = -1422108;

    t157 = (x713==((x714<=x715)-x716));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x717 = -748;
	int64_t x719 = 120LL;
	static int16_t x720 = INT16_MIN;
	volatile int32_t t158 = -91249;

    t158 = (x717==((x718<=x719)-x720));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x722 = -1;
	int8_t x723 = INT8_MIN;
	int32_t t159 = -1831583;

    t159 = (x721==((x722<=x723)-x724));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x725 = 212U;
	uint32_t x726 = 0U;
	int8_t x727 = 2;
	static int32_t t160 = -533;

    t160 = (x725==((x726<=x727)-x728));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x733 = -1918955445LL;
	int8_t x734 = INT8_MIN;
	int32_t x735 = 129036;
	int8_t x736 = INT8_MIN;
	int32_t t161 = 14797247;

    t161 = (x733==((x734<=x735)-x736));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x737 = INT16_MAX;
	int32_t x738 = -24616159;
	static volatile uint8_t x740 = UINT8_MAX;
	int32_t t162 = 0;

    t162 = (x737==((x738<=x739)-x740));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int16_t x741 = -185;
	int64_t x742 = INT64_MIN;
	uint64_t x744 = UINT64_MAX;
	static int32_t t163 = 1893;

    t163 = (x741==((x742<=x743)-x744));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x749 = INT16_MAX;
	int64_t x750 = -1LL;
	int32_t x751 = -2293;
	volatile int32_t t164 = 94289;

    t164 = (x749==((x750<=x751)-x752));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x753 = -182512499;
	static int64_t x754 = -1LL;
	static int8_t x755 = INT8_MIN;
	int32_t x756 = -1;

    t165 = (x753==((x754<=x755)-x756));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x757 = 1625412146LL;
	static int32_t x759 = INT32_MAX;
	static int8_t x760 = INT8_MIN;
	volatile int32_t t166 = -711254;

    t166 = (x757==((x758<=x759)-x760));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x762 = -1;
	int32_t x763 = INT32_MIN;
	volatile int32_t t167 = 227;

    t167 = (x761==((x762<=x763)-x764));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x765 = 207829;
	uint32_t x766 = UINT32_MAX;
	uint8_t x768 = 2U;
	volatile int32_t t168 = 53170;

    t168 = (x765==((x766<=x767)-x768));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x769 = INT64_MIN;
	int16_t x770 = INT16_MIN;
	static int32_t x771 = -1;
	int64_t x772 = INT64_MAX;
	int32_t t169 = 29856927;

    t169 = (x769==((x770<=x771)-x772));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x773 = INT8_MAX;
	int32_t x774 = -1;
	uint8_t x775 = UINT8_MAX;
	volatile int64_t x776 = 5165606LL;
	int32_t t170 = 284980;

    t170 = (x773==((x774<=x775)-x776));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x778 = UINT64_MAX;
	int32_t x779 = INT32_MAX;
	uint64_t x780 = UINT64_MAX;
	int32_t t171 = 14347145;

    t171 = (x777==((x778<=x779)-x780));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x782 = INT64_MIN;
	int8_t x783 = 0;
	int8_t x784 = INT8_MIN;
	volatile int32_t t172 = -1713;

    t172 = (x781==((x782<=x783)-x784));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x786 = 1283162774746967055LL;
	uint32_t x787 = 1449405609U;
	uint16_t x788 = 4U;
	volatile int32_t t173 = 839589;

    t173 = (x785==((x786<=x787)-x788));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x789 = -67385;
	int16_t x790 = INT16_MAX;
	int64_t x791 = -1LL;
	uint32_t x792 = UINT32_MAX;
	int32_t t174 = 97468;

    t174 = (x789==((x790<=x791)-x792));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x794 = UINT64_MAX;
	uint32_t x795 = 8709U;
	int32_t x796 = -439;
	static int32_t t175 = -1;

    t175 = (x793==((x794<=x795)-x796));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x797 = -1;
	int8_t x798 = 3;
	volatile uint8_t x800 = 1U;

    t176 = (x797==((x798<=x799)-x800));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x805 = 3;
	int8_t x806 = 1;
	static uint32_t x807 = 92171U;
	uint32_t x808 = 418844217U;
	int32_t t177 = 20;

    t177 = (x805==((x806<=x807)-x808));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int64_t x809 = INT64_MAX;
	volatile int8_t x810 = INT8_MIN;
	int32_t x811 = 1;
	int64_t x812 = 716572767677367LL;

    t178 = (x809==((x810<=x811)-x812));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x813 = UINT32_MAX;
	volatile uint8_t x814 = 54U;
	int32_t x815 = 121;
	uint32_t x816 = 1159502156U;
	static int32_t t179 = -96;

    t179 = (x813==((x814<=x815)-x816));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x817 = 1248U;
	int64_t x818 = INT64_MAX;
	volatile int8_t x820 = 16;
	volatile int32_t t180 = -863;

    t180 = (x817==((x818<=x819)-x820));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int64_t x821 = -5765969596800897LL;
	int32_t x822 = INT32_MAX;
	int8_t x823 = 0;
	static uint32_t x824 = UINT32_MAX;
	int32_t t181 = -3912934;

    t181 = (x821==((x822<=x823)-x824));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x825 = 2U;
	int32_t x826 = INT32_MIN;
	int16_t x827 = -436;
	int8_t x828 = -1;
	int32_t t182 = 412934;

    t182 = (x825==((x826<=x827)-x828));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint16_t x829 = UINT16_MAX;
	int32_t x830 = -1;
	int32_t x831 = INT32_MIN;
	int8_t x832 = 12;
	volatile int32_t t183 = -21;

    t183 = (x829==((x830<=x831)-x832));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x833 = -253233094281098LL;
	uint32_t x834 = 66U;
	uint64_t x836 = UINT64_MAX;

    t184 = (x833==((x834<=x835)-x836));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x841 = 0U;
	static uint64_t x842 = 4572796762LLU;
	uint64_t x843 = 3446198631123LLU;
	uint16_t x844 = UINT16_MAX;

    t185 = (x841==((x842<=x843)-x844));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x845 = 6U;
	volatile int8_t x846 = -4;
	volatile int16_t x848 = INT16_MIN;
	int32_t t186 = 25727;

    t186 = (x845==((x846<=x847)-x848));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint16_t x849 = 34U;
	int32_t x852 = 82287061;
	volatile int32_t t187 = 30208877;

    t187 = (x849==((x850<=x851)-x852));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x855 = -1;
	int8_t x856 = 43;
	int32_t t188 = -59882;

    t188 = (x853==((x854<=x855)-x856));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x861 = -53;
	uint64_t x862 = 4LLU;
	uint32_t x863 = UINT32_MAX;
	static volatile uint16_t x864 = UINT16_MAX;
	int32_t t189 = 2872897;

    t189 = (x861==((x862<=x863)-x864));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x865 = UINT8_MAX;
	static int64_t x866 = INT64_MAX;
	int64_t x867 = -1LL;
	int32_t t190 = -439;

    t190 = (x865==((x866<=x867)-x868));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int64_t x869 = INT64_MAX;
	uint64_t x870 = 50019192010LLU;
	int16_t x871 = INT16_MIN;
	int8_t x872 = -1;
	static volatile int32_t t191 = 8352206;

    t191 = (x869==((x870<=x871)-x872));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint64_t x873 = 754547424784LLU;
	volatile int32_t x874 = -1;
	int16_t x876 = 1;
	static int32_t t192 = 1061589;

    t192 = (x873==((x874<=x875)-x876));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x877 = 254814885U;
	volatile int32_t x878 = INT32_MIN;
	uint16_t x879 = UINT16_MAX;
	int64_t x880 = -37361499738LL;
	int32_t t193 = -256373;

    t193 = (x877==((x878<=x879)-x880));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x881 = -5;
	int16_t x882 = INT16_MAX;
	int16_t x883 = INT16_MAX;
	int32_t t194 = -1057999;

    t194 = (x881==((x882<=x883)-x884));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int8_t x886 = 1;
	uint32_t x887 = UINT32_MAX;
	volatile uint8_t x888 = UINT8_MAX;

    t195 = (x885==((x886<=x887)-x888));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x889 = 16U;
	volatile uint8_t x890 = 18U;
	uint64_t x891 = UINT64_MAX;
	int8_t x892 = INT8_MAX;
	int32_t t196 = 3925167;

    t196 = (x889==((x890<=x891)-x892));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x893 = -27;
	static uint64_t x894 = UINT64_MAX;
	int32_t x895 = INT32_MIN;
	int32_t t197 = -1;

    t197 = (x893==((x894<=x895)-x896));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint64_t x897 = 8LLU;
	uint32_t x898 = 107U;
	volatile uint32_t x899 = UINT32_MAX;
	int32_t x900 = -385706665;
	volatile int32_t t198 = 3;

    t198 = (x897==((x898<=x899)-x900));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x901 = 209347267766219LL;
	volatile int8_t x902 = -1;
	int8_t x903 = INT8_MAX;
	volatile uint32_t x904 = 1643816U;
	static int32_t t199 = 1010;

    t199 = (x901==((x902<=x903)-x904));

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

