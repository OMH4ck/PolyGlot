
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

volatile int8_t x2 = 18;
static volatile int8_t x8 = INT8_MIN;
static uint32_t x10 = 240U;
static int64_t x21 = -5929876841209LL;
int32_t x23 = INT32_MAX;
int8_t x27 = -1;
uint32_t x32 = UINT32_MAX;
volatile uint32_t t7 = UINT32_MAX;
static volatile int16_t x33 = INT16_MIN;
int16_t x39 = INT16_MIN;
static int32_t t9 = 1522;
uint16_t x48 = UINT16_MAX;
int16_t x49 = 5414;
int8_t x51 = INT8_MIN;
volatile int64_t t13 = 67261311022632LL;
int32_t x68 = INT32_MIN;
static int16_t x72 = INT16_MIN;
static int64_t x73 = INT64_MIN;
uint16_t x74 = 251U;
int8_t x79 = INT8_MAX;
volatile uint8_t x80 = 127U;
uint32_t x84 = UINT32_MAX;
volatile uint32_t t19 = 125167U;
int32_t x91 = -1;
static int16_t x93 = INT16_MIN;
static int8_t x94 = INT8_MIN;
volatile int16_t x97 = 1;
int64_t x110 = INT64_MIN;
uint64_t x115 = 3456521984232LLU;
int8_t x117 = INT8_MIN;
static int64_t x127 = INT64_MIN;
static uint8_t x131 = UINT8_MAX;
int32_t t30 = 2;
int8_t x138 = -3;
int32_t x143 = 737;
static volatile uint64_t x146 = 116248294LLU;
int8_t x154 = -46;
int8_t x159 = INT8_MAX;
static int16_t x164 = -1;
uint8_t x165 = UINT8_MAX;
uint16_t x175 = 7U;
volatile int64_t x176 = 1307949957705903LL;
volatile uint8_t x184 = 3U;
int64_t x191 = -1LL;
static int32_t t46 = -456623;
uint64_t t47 = 181LLU;
uint8_t x201 = 16U;
int16_t x205 = INT16_MIN;
volatile int8_t x208 = INT8_MIN;
int32_t t51 = -109;
volatile uint32_t t52 = 4209U;
int64_t x231 = INT64_MIN;
int32_t t54 = 187202;
static volatile int32_t t55 = 132317;
int8_t x238 = 7;
int16_t x239 = 62;
uint64_t x240 = 241872LLU;
uint64_t t56 = 4205787728LLU;
int8_t x242 = INT8_MAX;
volatile uint32_t t57 = 4043851U;
volatile int64_t x245 = INT64_MAX;
int16_t x254 = -1;
volatile int16_t x255 = -1;
uint8_t x264 = 4U;
volatile int16_t x265 = -2795;
uint32_t t62 = 1234359974U;
static int8_t x274 = INT8_MIN;
volatile uint8_t x276 = 19U;
volatile int64_t t65 = 10774LL;
static int8_t x282 = 1;
uint16_t x284 = UINT16_MAX;
static uint64_t t67 = 116044383200426533LLU;
int16_t x289 = INT16_MIN;
static int32_t x291 = INT32_MIN;
int32_t x292 = INT32_MIN;
volatile int32_t t68 = -159151;
int8_t x294 = INT8_MAX;
int32_t t69 = INT32_MIN;
volatile int16_t x298 = 48;
int8_t x302 = -1;
volatile int32_t t71 = -38023386;
int8_t x305 = INT8_MIN;
static int8_t x310 = -1;
volatile int8_t x321 = INT8_MIN;
int64_t x324 = -1LL;
int8_t x326 = INT8_MAX;
int64_t x329 = -90118372692LL;
volatile int16_t x330 = INT16_MIN;
int16_t x331 = INT16_MAX;
static uint16_t x335 = UINT16_MAX;
int32_t t80 = -248667;
int64_t x345 = -42320LL;
static volatile int32_t x352 = INT32_MIN;
static int32_t t83 = -1252357;
uint16_t x354 = 7U;
int16_t x361 = 3;
int8_t x370 = -1;
uint16_t x372 = 1U;
static volatile int64_t x375 = -1LL;
int8_t x382 = INT8_MIN;
uint32_t x383 = 1U;
int64_t t91 = INT64_MAX;
int8_t x397 = -5;
volatile uint64_t t96 = UINT64_MAX;
int8_t x407 = INT8_MAX;
volatile int64_t t99 = -4010076859LL;
int64_t x435 = INT64_MIN;
int16_t x436 = INT16_MIN;
int8_t x444 = -2;
uint8_t x455 = 7U;
int16_t x460 = INT16_MIN;
uint32_t x461 = UINT32_MAX;
int16_t x464 = 6353;
static uint8_t x468 = 21U;
static uint32_t x472 = 15002397U;
int8_t x476 = INT8_MAX;
static int8_t x478 = -4;
int32_t x480 = INT32_MIN;
static int32_t t114 = -111;
static uint32_t x486 = 3997099U;
volatile int64_t t116 = -12717LL;
volatile uint64_t t117 = 149061681404LLU;
static int16_t x502 = INT16_MIN;
static uint64_t x506 = UINT64_MAX;
int16_t x518 = -3834;
uint64_t x519 = UINT64_MAX;
int64_t x527 = INT64_MIN;
int32_t x540 = 87;
int32_t t128 = -25221901;
static volatile int64_t t129 = 65155351838LL;
int8_t x552 = INT8_MIN;
int32_t t131 = -1;
int8_t x553 = -1;
int32_t t132 = 374455;
volatile int32_t t133 = 5707126;
uint64_t x562 = 4180597068LLU;
int16_t x563 = INT16_MAX;
volatile int64_t t134 = -2197549074924039652LL;
static uint16_t x572 = 18553U;
uint16_t x578 = UINT16_MAX;
uint64_t x583 = UINT64_MAX;
int16_t x588 = 220;
uint32_t x590 = UINT32_MAX;
int64_t t141 = 393014662150485859LL;
uint32_t x593 = 9428639U;
int32_t x595 = INT32_MIN;
static int16_t x605 = -1;
int64_t x611 = 24991171172LL;
volatile uint64_t x621 = 2328LLU;
uint16_t x622 = 177U;
volatile uint64_t x625 = UINT64_MAX;
int32_t x630 = 344;
int32_t x632 = 24;
int16_t x633 = -41;
int64_t x639 = -18677368LL;
static volatile int32_t x640 = INT32_MIN;
int16_t x641 = INT16_MIN;
int32_t x645 = INT32_MIN;
volatile int32_t t155 = -221159962;
volatile int8_t x654 = INT8_MAX;
int16_t x655 = INT16_MAX;
static volatile int16_t x665 = 3;
volatile uint8_t x667 = UINT8_MAX;
int32_t t160 = INT32_MAX;
int8_t x669 = INT8_MIN;
volatile uint64_t x674 = UINT64_MAX;
static int8_t x681 = INT8_MIN;
uint64_t t165 = UINT64_MAX;
int8_t x689 = -4;
int32_t x693 = -1;
static int16_t x694 = INT16_MAX;
uint64_t x696 = 6314533090530754100LLU;
uint64_t x697 = 144565806670439688LLU;
uint64_t x702 = 2LLU;
int32_t t169 = 33;
static int8_t x711 = INT8_MAX;
volatile int64_t t171 = -101591369266476LL;
uint16_t x713 = UINT16_MAX;
int64_t x724 = -51486592957026LL;
static int64_t t174 = -3834992LL;
uint64_t x726 = 285492775795LLU;
int8_t x730 = INT8_MIN;
int64_t t177 = -7432229196650LL;
static int8_t x737 = -13;
static int16_t x740 = -1;
static int16_t x759 = -122;
volatile int8_t x762 = INT8_MIN;
uint32_t x767 = 123794U;
int8_t x768 = -1;
int64_t x781 = 3LL;
volatile int16_t x782 = 0;
static uint8_t x783 = 14U;
uint32_t x786 = 335438815U;
volatile int32_t x787 = INT32_MIN;
uint32_t x794 = 2124017266U;
int64_t x797 = 1102LL;
int32_t x800 = INT32_MAX;
static int16_t x801 = INT16_MIN;
int8_t x819 = 30;
static uint64_t x824 = 396546284LLU;


void f0(void) {
    	int32_t x1 = INT32_MIN;
	static uint32_t x3 = UINT32_MAX;
	volatile uint64_t x4 = 254959LLU;
	uint64_t t0 = 4708704985163079738LLU;

    t0 = (x1|((x2<=x3)+x4));

    if (t0 != 18446744071562322928LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = -1385;
	volatile int8_t x6 = -1;
	volatile int8_t x7 = INT8_MAX;
	int32_t t1 = -12054;

    t1 = (x5|((x6<=x7)+x8));

    if (t1 != -105) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = UINT8_MAX;
	int32_t x11 = INT32_MAX;
	int64_t x12 = INT64_MIN;
	int64_t t2 = 11LL;

    t2 = (x9|((x10<=x11)+x12));

    if (t2 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x13 = INT32_MIN;
	int32_t x14 = -1;
	int64_t x15 = INT64_MIN;
	int64_t x16 = INT64_MIN;
	int64_t t3 = -7394254163657LL;

    t3 = (x13|((x14<=x15)+x16));

    if (t3 != -2147483648LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = -1;
	static int16_t x18 = -636;
	int64_t x19 = -1LL;
	uint64_t x20 = 3026350358730898154LLU;
	uint64_t t4 = UINT64_MAX;

    t4 = (x17|((x18<=x19)+x20));

    if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x22 = 12U;
	static uint32_t x24 = 191U;
	static int64_t t5 = 1526LL;

    t5 = (x21|((x22<=x23)+x24));

    if (t5 != -5929876841017LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x25 = UINT16_MAX;
	static uint16_t x26 = 114U;
	volatile uint64_t x28 = 238LLU;
	volatile uint64_t t6 = 2017689LLU;

    t6 = (x25|((x26<=x27)+x28));

    if (t6 != 65535LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint32_t x29 = 1U;
	volatile uint16_t x30 = 10U;
	static int32_t x31 = -1;

    t7 = (x29|((x30<=x31)+x32));

    if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x34 = -1;
	uint32_t x35 = 192U;
	static int32_t x36 = -1;
	static volatile int32_t t8 = -3;

    t8 = (x33|((x34<=x35)+x36));

    if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = INT8_MIN;
	static uint32_t x38 = UINT32_MAX;
	volatile uint16_t x40 = 1U;

    t9 = (x37|((x38<=x39)+x40));

    if (t9 != -127) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x41 = INT64_MAX;
	int8_t x42 = INT8_MIN;
	volatile int8_t x43 = INT8_MAX;
	uint64_t x44 = 936950941230LLU;
	volatile uint64_t t10 = 2058021LLU;

    t10 = (x41|((x42<=x43)+x44));

    if (t10 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint64_t x45 = 7783947793160LLU;
	int16_t x46 = 31;
	static int8_t x47 = -1;
	volatile uint64_t t11 = 193826LLU;

    t11 = (x45|((x46<=x47)+x48));

    if (t11 != 7783947829247LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint32_t x50 = 2596271U;
	volatile int8_t x52 = -13;
	volatile int32_t t12 = -1;

    t12 = (x49|((x50<=x51)+x52));

    if (t12 != -10) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x57 = INT64_MIN;
	int16_t x58 = -1;
	static int32_t x59 = 656;
	uint8_t x60 = UINT8_MAX;

    t13 = (x57|((x58<=x59)+x60));

    if (t13 != -9223372036854775552LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x61 = 14U;
	int32_t x62 = 163265518;
	volatile int64_t x63 = -1LL;
	int64_t x64 = INT64_MIN;
	int64_t t14 = 1299169174968045LL;

    t14 = (x61|((x62<=x63)+x64));

    if (t14 != -9223372036854775794LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x65 = -26237180050LL;
	uint32_t x66 = UINT32_MAX;
	volatile uint32_t x67 = UINT32_MAX;
	static int64_t t15 = -8427LL;

    t15 = (x65|((x66<=x67)+x68));

    if (t15 != -467376273LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x69 = INT8_MIN;
	static uint16_t x70 = UINT16_MAX;
	volatile int64_t x71 = INT64_MAX;
	static int32_t t16 = 2765;

    t16 = (x69|((x70<=x71)+x72));

    if (t16 != -127) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x75 = 1;
	volatile int64_t x76 = 4322423604336LL;
	static volatile int64_t t17 = -14048LL;

    t17 = (x73|((x74<=x75)+x76));

    if (t17 != -9223367714431171472LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint8_t x77 = UINT8_MAX;
	static int32_t x78 = INT32_MAX;
	int32_t t18 = -983026719;

    t18 = (x77|((x78<=x79)+x80));

    if (t18 != 255) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x81 = INT32_MIN;
	int16_t x82 = -1;
	int8_t x83 = -1;

    t19 = (x81|((x82<=x83)+x84));

    if (t19 != 2147483648U) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x85 = 34635798086923LLU;
	int32_t x86 = -65922022;
	volatile uint8_t x87 = 54U;
	volatile uint16_t x88 = 46U;
	volatile uint64_t t20 = 162257123925055525LLU;

    t20 = (x85|((x86<=x87)+x88));

    if (t20 != 34635798086959LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x89 = INT64_MIN;
	int8_t x90 = INT8_MIN;
	volatile int8_t x92 = INT8_MAX;
	int64_t t21 = 65LL;

    t21 = (x89|((x90<=x91)+x92));

    if (t21 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x95 = INT64_MIN;
	volatile int32_t x96 = INT32_MAX;
	volatile int32_t t22 = -1;

    t22 = (x93|((x94<=x95)+x96));

    if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x98 = INT16_MIN;
	static int32_t x99 = -1;
	static volatile int16_t x100 = 480;
	int32_t t23 = 79;

    t23 = (x97|((x98<=x99)+x100));

    if (t23 != 481) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x101 = INT64_MAX;
	static int16_t x102 = INT16_MAX;
	static int32_t x103 = INT32_MIN;
	uint32_t x104 = UINT32_MAX;
	volatile int64_t t24 = INT64_MAX;

    t24 = (x101|((x102<=x103)+x104));

    if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x105 = INT32_MAX;
	uint8_t x106 = 80U;
	static volatile int64_t x107 = -1LL;
	uint32_t x108 = 2108U;
	uint32_t t25 = 16637555U;

    t25 = (x105|((x106<=x107)+x108));

    if (t25 != 2147483647U) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x109 = 28806221774LLU;
	uint32_t x111 = 3U;
	int8_t x112 = 47;
	volatile uint64_t t26 = 15033207896959393LLU;

    t26 = (x109|((x110<=x111)+x112));

    if (t26 != 28806221822LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x113 = 3885465;
	int8_t x114 = INT8_MAX;
	volatile int32_t x116 = 954457;
	int32_t t27 = 95601;

    t27 = (x113|((x114<=x115)+x116));

    if (t27 != 4184539) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x118 = INT32_MAX;
	volatile uint32_t x119 = 3130428U;
	int8_t x120 = 1;
	volatile int32_t t28 = 12412;

    t28 = (x117|((x118<=x119)+x120));

    if (t28 != -127) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint16_t x125 = 32U;
	static uint16_t x126 = UINT16_MAX;
	uint32_t x128 = 362214U;
	uint32_t t29 = 58730206U;

    t29 = (x125|((x126<=x127)+x128));

    if (t29 != 362214U) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x129 = INT16_MAX;
	uint16_t x130 = 2851U;
	int16_t x132 = INT16_MIN;

    t30 = (x129|((x130<=x131)+x132));

    if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint8_t x133 = 82U;
	int8_t x134 = 1;
	static uint64_t x135 = 25537844LLU;
	int16_t x136 = 11;
	int32_t t31 = -3567;

    t31 = (x133|((x134<=x135)+x136));

    if (t31 != 94) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x137 = 208;
	volatile uint64_t x139 = 142157844995LLU;
	uint64_t x140 = 1843418934993282LLU;
	volatile uint64_t t32 = 171539876LLU;

    t32 = (x137|((x138<=x139)+x140));

    if (t32 != 1843418934993362LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint64_t x141 = 6173LLU;
	uint16_t x142 = UINT16_MAX;
	volatile uint64_t x144 = UINT64_MAX;
	uint64_t t33 = UINT64_MAX;

    t33 = (x141|((x142<=x143)+x144));

    if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x145 = -10845;
	volatile int16_t x147 = -501;
	int32_t x148 = INT32_MIN;
	volatile int32_t t34 = -226922430;

    t34 = (x145|((x146<=x147)+x148));

    if (t34 != -10845) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x149 = INT8_MAX;
	int16_t x150 = -11340;
	uint16_t x151 = 65U;
	static int32_t x152 = -11659366;
	int32_t t35 = -96005171;

    t35 = (x149|((x150<=x151)+x152));

    if (t35 != -11659265) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint8_t x153 = UINT8_MAX;
	volatile int64_t x155 = 1918162839606400LL;
	volatile int64_t x156 = -337316243814393182LL;
	volatile int64_t t36 = 20020869LL;

    t36 = (x153|((x154<=x155)+x156));

    if (t36 != -337316243814393089LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x157 = INT16_MIN;
	uint16_t x158 = UINT16_MAX;
	volatile uint64_t x160 = 2162071728LLU;
	uint64_t t37 = 57841LLU;

    t37 = (x157|((x158<=x159)+x160));

    if (t37 != 18446744073709525168LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int8_t x161 = INT8_MAX;
	int8_t x162 = -12;
	static uint32_t x163 = 969U;
	volatile int32_t t38 = -25510;

    t38 = (x161|((x162<=x163)+x164));

    if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint16_t x166 = 15055U;
	static int64_t x167 = INT64_MIN;
	int16_t x168 = INT16_MIN;
	volatile int32_t t39 = -474005;

    t39 = (x165|((x166<=x167)+x168));

    if (t39 != -32513) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x169 = 28U;
	static uint32_t x170 = 74U;
	static int32_t x171 = INT32_MIN;
	int32_t x172 = 38;
	static volatile int32_t t40 = -7857;

    t40 = (x169|((x170<=x171)+x172));

    if (t40 != 63) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x173 = 90U;
	static volatile int64_t x174 = 130490445561109LL;
	int64_t t41 = -60647475423LL;

    t41 = (x173|((x174<=x175)+x176));

    if (t41 != 1307949957705983LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x177 = -1;
	int32_t x178 = INT32_MAX;
	int32_t x179 = -1;
	int32_t x180 = 408766511;
	volatile int32_t t42 = 6;

    t42 = (x177|((x178<=x179)+x180));

    if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x181 = 18906;
	volatile int16_t x182 = -1;
	static int8_t x183 = -3;
	int32_t t43 = 1;

    t43 = (x181|((x182<=x183)+x184));

    if (t43 != 18907) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x185 = -1;
	uint8_t x186 = 6U;
	int64_t x187 = INT64_MIN;
	volatile uint16_t x188 = 59U;
	volatile int32_t t44 = -1;

    t44 = (x185|((x186<=x187)+x188));

    if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x189 = INT8_MIN;
	int32_t x190 = INT32_MIN;
	int16_t x192 = -1;
	int32_t t45 = 122456081;

    t45 = (x189|((x190<=x191)+x192));

    if (t45 != -128) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x193 = INT8_MIN;
	uint32_t x194 = UINT32_MAX;
	volatile uint32_t x195 = 434U;
	volatile uint16_t x196 = UINT16_MAX;

    t46 = (x193|((x194<=x195)+x196));

    if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x197 = UINT32_MAX;
	volatile int32_t x198 = INT32_MAX;
	int16_t x199 = INT16_MAX;
	uint64_t x200 = 1LLU;

    t47 = (x197|((x198<=x199)+x200));

    if (t47 != 4294967295LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x202 = INT16_MIN;
	uint16_t x203 = UINT16_MAX;
	uint32_t x204 = 25549856U;
	volatile uint32_t t48 = 13157934U;

    t48 = (x201|((x202<=x203)+x204));

    if (t48 != 25549873U) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x206 = UINT32_MAX;
	int16_t x207 = 1;
	volatile int32_t t49 = -12032344;

    t49 = (x205|((x206<=x207)+x208));

    if (t49 != -128) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x209 = INT32_MIN;
	static volatile int16_t x210 = -1;
	volatile int16_t x211 = INT16_MIN;
	int32_t x212 = INT32_MAX;
	volatile int32_t t50 = -1;

    t50 = (x209|((x210<=x211)+x212));

    if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x213 = 0;
	static uint32_t x214 = 3U;
	static int8_t x215 = INT8_MAX;
	int8_t x216 = INT8_MIN;

    t51 = (x213|((x214<=x215)+x216));

    if (t51 != -127) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x217 = -7112;
	int64_t x218 = 825222LL;
	int64_t x219 = INT64_MIN;
	volatile uint32_t x220 = 8351U;

    t52 = (x217|((x218<=x219)+x220));

    if (t52 != 4294960319U) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x221 = INT16_MIN;
	static int16_t x222 = -1;
	int16_t x223 = INT16_MIN;
	uint64_t x224 = 27078214535776942LLU;
	uint64_t t53 = 13292751555848LLU;

    t53 = (x221|((x222<=x223)+x224));

    if (t53 != 18446744073709521582LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x229 = INT8_MAX;
	uint8_t x230 = 2U;
	int8_t x232 = INT8_MAX;

    t54 = (x229|((x230<=x231)+x232));

    if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x233 = INT16_MIN;
	int64_t x234 = 12149499500LL;
	int64_t x235 = -1LL;
	volatile int8_t x236 = 0;

    t55 = (x233|((x234<=x235)+x236));

    if (t55 != -32768) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x237 = 7634U;

    t56 = (x237|((x238<=x239)+x240));

    if (t56 != 245203LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x241 = 0U;
	uint16_t x243 = UINT16_MAX;
	static int32_t x244 = 3;

    t57 = (x241|((x242<=x243)+x244));

    if (t57 != 4U) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint32_t x246 = UINT32_MAX;
	int32_t x247 = INT32_MIN;
	volatile int32_t x248 = -25628841;
	int64_t t58 = 1951837389LL;

    t58 = (x245|((x246<=x247)+x248));

    if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x249 = 1465908108374LLU;
	uint8_t x250 = 107U;
	static int64_t x251 = INT64_MAX;
	uint8_t x252 = UINT8_MAX;
	uint64_t t59 = 87422893LLU;

    t59 = (x249|((x250<=x251)+x252));

    if (t59 != 1465908108630LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x253 = INT32_MIN;
	int64_t x256 = 299366LL;
	volatile int64_t t60 = 190009821465704814LL;

    t60 = (x253|((x254<=x255)+x256));

    if (t60 != -2147184281LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x261 = INT16_MIN;
	int16_t x262 = INT16_MIN;
	static uint16_t x263 = 30146U;
	static int32_t t61 = -201;

    t61 = (x261|((x262<=x263)+x264));

    if (t61 != -32763) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x266 = INT32_MIN;
	int16_t x267 = 932;
	uint32_t x268 = 148378U;

    t62 = (x265|((x266<=x267)+x268));

    if (t62 != 4294965151U) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x269 = -1;
	static int64_t x270 = -1LL;
	uint16_t x271 = UINT16_MAX;
	int16_t x272 = 9127;
	static volatile int32_t t63 = -512;

    t63 = (x269|((x270<=x271)+x272));

    if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x273 = 12192356LLU;
	int16_t x275 = -1;
	uint64_t t64 = 419871282455415LLU;

    t64 = (x273|((x274<=x275)+x276));

    if (t64 != 12192372LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x277 = INT64_MIN;
	volatile uint16_t x278 = UINT16_MAX;
	int16_t x279 = INT16_MIN;
	int32_t x280 = -9;

    t65 = (x277|((x278<=x279)+x280));

    if (t65 != -9LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x281 = INT8_MIN;
	int8_t x283 = INT8_MAX;
	int32_t t66 = 270808;

    t66 = (x281|((x282<=x283)+x284));

    if (t66 != -128) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x285 = UINT8_MAX;
	int16_t x286 = INT16_MIN;
	uint8_t x287 = UINT8_MAX;
	uint64_t x288 = UINT64_MAX;

    t67 = (x285|((x286<=x287)+x288));

    if (t67 != 255LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x290 = 1392U;

    t68 = (x289|((x290<=x291)+x292));

    if (t68 != -32767) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x293 = INT32_MIN;
	volatile uint64_t x295 = UINT64_MAX;
	int32_t x296 = -1;

    t69 = (x293|((x294<=x295)+x296));

    if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x297 = INT8_MAX;
	uint32_t x299 = 113U;
	int16_t x300 = -1;
	int32_t t70 = 31460535;

    t70 = (x297|((x298<=x299)+x300));

    if (t70 != 127) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x301 = INT16_MIN;
	uint16_t x303 = 1677U;
	int16_t x304 = 207;

    t71 = (x301|((x302<=x303)+x304));

    if (t71 != -32560) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x306 = INT16_MAX;
	int16_t x307 = 7329;
	uint8_t x308 = 7U;
	static volatile int32_t t72 = -1610;

    t72 = (x305|((x306<=x307)+x308));

    if (t72 != -121) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x309 = INT8_MIN;
	uint64_t x311 = 3621816810096LLU;
	int8_t x312 = 10;
	volatile int32_t t73 = 1;

    t73 = (x309|((x310<=x311)+x312));

    if (t73 != -118) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x313 = -9;
	int16_t x314 = -1;
	static int64_t x315 = -1LL;
	int32_t x316 = INT32_MIN;
	volatile int32_t t74 = -22;

    t74 = (x313|((x314<=x315)+x316));

    if (t74 != -9) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x317 = 74U;
	int8_t x318 = INT8_MAX;
	int32_t x319 = -27;
	uint8_t x320 = 1U;
	volatile int32_t t75 = 681950982;

    t75 = (x317|((x318<=x319)+x320));

    if (t75 != 75) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x322 = UINT16_MAX;
	int32_t x323 = 0;
	static volatile int64_t t76 = 64LL;

    t76 = (x321|((x322<=x323)+x324));

    if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint32_t x325 = 469939807U;
	int8_t x327 = INT8_MIN;
	int16_t x328 = INT16_MIN;
	volatile uint32_t t77 = 0U;

    t77 = (x325|((x326<=x327)+x328));

    if (t77 != 4294948447U) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x332 = -347;
	static int64_t t78 = 8531LL;

    t78 = (x329|((x330<=x331)+x332));

    if (t78 != -338LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x333 = INT32_MAX;
	int16_t x334 = 716;
	int64_t x336 = 1192778991881426409LL;
	static volatile int64_t t79 = 14592331458533LL;

    t79 = (x333|((x334<=x335)+x336));

    if (t79 != 1192778992239771647LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x337 = -1;
	static volatile int32_t x338 = 819;
	int32_t x339 = -1;
	static volatile uint16_t x340 = UINT16_MAX;

    t80 = (x337|((x338<=x339)+x340));

    if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x341 = UINT8_MAX;
	int32_t x342 = 406;
	int32_t x343 = INT32_MAX;
	volatile uint64_t x344 = UINT64_MAX;
	volatile uint64_t t81 = 9493530426LLU;

    t81 = (x341|((x342<=x343)+x344));

    if (t81 != 255LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x346 = INT16_MIN;
	int8_t x347 = -1;
	uint8_t x348 = 1U;
	static volatile int64_t t82 = -123466609651755312LL;

    t82 = (x345|((x346<=x347)+x348));

    if (t82 != -42318LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x349 = INT8_MIN;
	int8_t x350 = 0;
	uint64_t x351 = UINT64_MAX;

    t83 = (x349|((x350<=x351)+x352));

    if (t83 != -127) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x353 = -1;
	static int64_t x355 = INT64_MIN;
	static int8_t x356 = INT8_MIN;
	volatile int32_t t84 = -14266;

    t84 = (x353|((x354<=x355)+x356));

    if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x357 = -1;
	int8_t x358 = INT8_MIN;
	volatile int16_t x359 = -839;
	int16_t x360 = INT16_MIN;
	static int32_t t85 = 194586;

    t85 = (x357|((x358<=x359)+x360));

    if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x362 = INT8_MAX;
	volatile uint8_t x363 = UINT8_MAX;
	volatile uint16_t x364 = 9943U;
	int32_t t86 = -51358;

    t86 = (x361|((x362<=x363)+x364));

    if (t86 != 9947) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x365 = 48013;
	int32_t x366 = INT32_MIN;
	static int16_t x367 = -1;
	int16_t x368 = 7069;
	static volatile int32_t t87 = -4668;

    t87 = (x365|((x366<=x367)+x368));

    if (t87 != 48031) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x369 = 12205U;
	uint32_t x371 = 465328489U;
	static volatile int32_t t88 = -316811317;

    t88 = (x369|((x370<=x371)+x372));

    if (t88 != 12205) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x373 = -7;
	volatile uint32_t x374 = 551491335U;
	int8_t x376 = -30;
	volatile int32_t t89 = 6;

    t89 = (x373|((x374<=x375)+x376));

    if (t89 != -5) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x377 = 1U;
	int32_t x378 = -27661573;
	uint64_t x379 = UINT64_MAX;
	static int64_t x380 = -1LL;
	volatile int64_t t90 = -1870LL;

    t90 = (x377|((x378<=x379)+x380));

    if (t90 != 1LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x381 = INT64_MAX;
	int16_t x384 = INT16_MAX;

    t91 = (x381|((x382<=x383)+x384));

    if (t91 != INT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile uint32_t x385 = 1048568U;
	static int32_t x386 = -1;
	static int64_t x387 = -289LL;
	int32_t x388 = INT32_MIN;
	static volatile uint32_t t92 = 2105U;

    t92 = (x385|((x386<=x387)+x388));

    if (t92 != 2148532216U) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x389 = 142;
	int32_t x390 = -1;
	int16_t x391 = 741;
	static int8_t x392 = 1;
	int32_t t93 = -120935;

    t93 = (x389|((x390<=x391)+x392));

    if (t93 != 142) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x393 = 95;
	static uint64_t x394 = UINT64_MAX;
	volatile int8_t x395 = -15;
	int32_t x396 = INT32_MIN;
	int32_t t94 = 3;

    t94 = (x393|((x394<=x395)+x396));

    if (t94 != -2147483553) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x398 = INT32_MAX;
	uint8_t x399 = 5U;
	int8_t x400 = INT8_MAX;
	static volatile int32_t t95 = -19876;

    t95 = (x397|((x398<=x399)+x400));

    if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x401 = -1;
	uint32_t x402 = 1488U;
	volatile int8_t x403 = 0;
	static uint64_t x404 = 37LLU;

    t96 = (x401|((x402<=x403)+x404));

    if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x405 = INT8_MIN;
	static int16_t x406 = -1;
	uint64_t x408 = 394267LLU;
	uint64_t t97 = 1662004552515LLU;

    t97 = (x405|((x406<=x407)+x408));

    if (t97 != 18446744073709551516LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x409 = -1LL;
	int32_t x410 = INT32_MIN;
	volatile int64_t x411 = -7313447LL;
	int16_t x412 = -1;
	int64_t t98 = -1185728LL;

    t98 = (x409|((x410<=x411)+x412));

    if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x413 = 50U;
	int8_t x414 = 22;
	int16_t x415 = -1;
	static int64_t x416 = -1LL;

    t99 = (x413|((x414<=x415)+x416));

    if (t99 != -1LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x417 = 53103336U;
	uint8_t x418 = 26U;
	static int8_t x419 = 0;
	int8_t x420 = -1;
	uint32_t t100 = UINT32_MAX;

    t100 = (x417|((x418<=x419)+x420));

    if (t100 != UINT32_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint64_t x421 = 11490LLU;
	uint64_t x422 = 62909816LLU;
	uint8_t x423 = 16U;
	static volatile uint64_t x424 = UINT64_MAX;
	uint64_t t101 = UINT64_MAX;

    t101 = (x421|((x422<=x423)+x424));

    if (t101 != UINT64_MAX) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x425 = INT16_MIN;
	int32_t x426 = -1;
	int16_t x427 = INT16_MAX;
	int16_t x428 = INT16_MAX;
	static int32_t t102 = -3;

    t102 = (x425|((x426<=x427)+x428));

    if (t102 != -32768) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x433 = -1LL;
	volatile int32_t x434 = INT32_MIN;
	int64_t t103 = -263LL;

    t103 = (x433|((x434<=x435)+x436));

    if (t103 != -1LL) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint16_t x437 = 22203U;
	int64_t x438 = INT64_MIN;
	uint32_t x439 = 51414U;
	volatile uint8_t x440 = 73U;
	int32_t t104 = 214197535;

    t104 = (x437|((x438<=x439)+x440));

    if (t104 != 22267) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int64_t x441 = INT64_MIN;
	static uint64_t x442 = 21556456223433018LLU;
	uint8_t x443 = 1U;
	int64_t t105 = 4707052922983LL;

    t105 = (x441|((x442<=x443)+x444));

    if (t105 != -2LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x445 = 30207955441195340LL;
	static int16_t x446 = -4332;
	volatile int8_t x447 = -1;
	volatile uint32_t x448 = 26U;
	int64_t t106 = 11588735208LL;

    t106 = (x445|((x446<=x447)+x448));

    if (t106 != 30207955441195359LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x453 = 6734282U;
	int8_t x454 = -7;
	int16_t x456 = INT16_MIN;
	volatile uint32_t t107 = 230295009U;

    t107 = (x453|((x454<=x455)+x456));

    if (t107 != 4294951371U) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x457 = INT8_MIN;
	int32_t x458 = -1;
	int64_t x459 = -3444847448LL;
	volatile int32_t t108 = -397570337;

    t108 = (x457|((x458<=x459)+x460));

    if (t108 != -128) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint64_t x462 = 52LLU;
	volatile int64_t x463 = -1LL;
	volatile uint32_t t109 = UINT32_MAX;

    t109 = (x461|((x462<=x463)+x464));

    if (t109 != UINT32_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x465 = 2;
	uint16_t x466 = 14U;
	volatile uint8_t x467 = 0U;
	int32_t t110 = -231;

    t110 = (x465|((x466<=x467)+x468));

    if (t110 != 23) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint64_t x469 = UINT64_MAX;
	static uint32_t x470 = 55188783U;
	volatile int32_t x471 = -115573;
	static volatile uint64_t t111 = UINT64_MAX;

    t111 = (x469|((x470<=x471)+x472));

    if (t111 != UINT64_MAX) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x473 = INT16_MIN;
	int32_t x474 = -622952719;
	int64_t x475 = INT64_MAX;
	int32_t t112 = 66658;

    t112 = (x473|((x474<=x475)+x476));

    if (t112 != -32640) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x477 = -927LL;
	int8_t x479 = INT8_MIN;
	volatile int64_t t113 = -2965048LL;

    t113 = (x477|((x478<=x479)+x480));

    if (t113 != -927LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x481 = 0;
	uint16_t x482 = 212U;
	int8_t x483 = INT8_MIN;
	static int16_t x484 = INT16_MAX;

    t114 = (x481|((x482<=x483)+x484));

    if (t114 != 32767) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint8_t x485 = 3U;
	uint64_t x487 = 6995225LLU;
	int16_t x488 = -1;
	static volatile int32_t t115 = 183;

    t115 = (x485|((x486<=x487)+x488));

    if (t115 != 3) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint32_t x489 = 77669046U;
	uint64_t x490 = 718506999LLU;
	int16_t x491 = INT16_MIN;
	int64_t x492 = INT64_MIN;

    t116 = (x489|((x490<=x491)+x492));

    if (t116 != -9223372036777106761LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x493 = INT32_MIN;
	static int32_t x494 = -35;
	volatile int16_t x495 = -3;
	static uint64_t x496 = 660927382LLU;

    t117 = (x493|((x494<=x495)+x496));

    if (t117 != 18446744072222995351LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x497 = -1;
	static int16_t x498 = INT16_MIN;
	volatile int16_t x499 = 0;
	int16_t x500 = INT16_MAX;
	int32_t t118 = -315;

    t118 = (x497|((x498<=x499)+x500));

    if (t118 != -1) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x501 = -1;
	int32_t x503 = -89;
	int16_t x504 = INT16_MIN;
	static int32_t t119 = 1501894;

    t119 = (x501|((x502<=x503)+x504));

    if (t119 != -1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x505 = -204;
	int16_t x507 = INT16_MIN;
	int32_t x508 = -1;
	volatile int32_t t120 = 341523911;

    t120 = (x505|((x506<=x507)+x508));

    if (t120 != -1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x509 = INT8_MAX;
	volatile int64_t x510 = -1LL;
	int8_t x511 = INT8_MIN;
	static volatile int8_t x512 = 4;
	volatile int32_t t121 = -166661;

    t121 = (x509|((x510<=x511)+x512));

    if (t121 != 127) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x513 = UINT8_MAX;
	uint32_t x514 = 270U;
	int64_t x515 = INT64_MAX;
	volatile int32_t x516 = -10036430;
	volatile int32_t t122 = 2420649;

    t122 = (x513|((x514<=x515)+x516));

    if (t122 != -10036225) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x517 = 266137978005061LLU;
	uint32_t x520 = 318U;
	static uint64_t t123 = 16843423701765059LLU;

    t123 = (x517|((x518<=x519)+x520));

    if (t123 != 266137978005375LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x521 = -1;
	volatile uint8_t x522 = 98U;
	int64_t x523 = INT64_MIN;
	int16_t x524 = 2017;
	volatile int32_t t124 = 36;

    t124 = (x521|((x522<=x523)+x524));

    if (t124 != -1) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x525 = 1;
	int8_t x526 = INT8_MAX;
	static uint32_t x528 = 3239771U;
	uint32_t t125 = 880U;

    t125 = (x525|((x526<=x527)+x528));

    if (t125 != 3239771U) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x529 = 14;
	volatile uint16_t x530 = 10082U;
	int16_t x531 = -1;
	int8_t x532 = INT8_MIN;
	int32_t t126 = 674233;

    t126 = (x529|((x530<=x531)+x532));

    if (t126 != -114) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x533 = 9710U;
	uint32_t x534 = 1919829502U;
	int16_t x535 = INT16_MIN;
	uint8_t x536 = 2U;
	int32_t t127 = 59596;

    t127 = (x533|((x534<=x535)+x536));

    if (t127 != 9711) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x537 = INT16_MIN;
	int8_t x538 = INT8_MAX;
	static uint64_t x539 = UINT64_MAX;

    t128 = (x537|((x538<=x539)+x540));

    if (t128 != -32680) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x541 = -1493191;
	int32_t x542 = 470;
	int8_t x543 = 8;
	static volatile int64_t x544 = -1LL;

    t129 = (x541|((x542<=x543)+x544));

    if (t129 != -1LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x545 = 6703423407966LLU;
	int32_t x546 = INT32_MAX;
	volatile int32_t x547 = 4350;
	uint16_t x548 = UINT16_MAX;
	uint64_t t130 = 7333835720881757510LLU;

    t130 = (x545|((x546<=x547)+x548));

    if (t130 != 6703423422463LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x549 = -125;
	uint64_t x550 = 282898LLU;
	int64_t x551 = INT64_MIN;

    t131 = (x549|((x550<=x551)+x552));

    if (t131 != -125) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x554 = INT32_MAX;
	volatile uint64_t x555 = UINT64_MAX;
	volatile int32_t x556 = 208;

    t132 = (x553|((x554<=x555)+x556));

    if (t132 != -1) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x557 = INT32_MIN;
	int64_t x558 = -130198256421LL;
	volatile int16_t x559 = INT16_MAX;
	int32_t x560 = -1462570;

    t133 = (x557|((x558<=x559)+x560));

    if (t133 != -1462569) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x561 = INT64_MIN;
	uint8_t x564 = UINT8_MAX;

    t134 = (x561|((x562<=x563)+x564));

    if (t134 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static int16_t x565 = -3705;
	int8_t x566 = INT8_MIN;
	static int32_t x567 = 63;
	uint32_t x568 = UINT32_MAX;
	volatile uint32_t t135 = 7965U;

    t135 = (x565|((x566<=x567)+x568));

    if (t135 != 4294963591U) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x569 = INT8_MAX;
	int64_t x570 = INT64_MIN;
	int16_t x571 = INT16_MAX;
	int32_t t136 = -22;

    t136 = (x569|((x570<=x571)+x572));

    if (t136 != 18559) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x573 = 1;
	static int32_t x574 = INT32_MAX;
	int64_t x575 = 2011155821635841LL;
	int8_t x576 = 0;
	int32_t t137 = -515308530;

    t137 = (x573|((x574<=x575)+x576));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x577 = INT32_MIN;
	static int16_t x579 = INT16_MAX;
	volatile int32_t x580 = -1;
	int32_t t138 = -277;

    t138 = (x577|((x578<=x579)+x580));

    if (t138 != -1) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x581 = -1LL;
	int16_t x582 = -692;
	volatile uint8_t x584 = 6U;
	volatile int64_t t139 = 44602097807LL;

    t139 = (x581|((x582<=x583)+x584));

    if (t139 != -1LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x585 = 77U;
	int64_t x586 = -1LL;
	uint64_t x587 = UINT64_MAX;
	volatile uint32_t t140 = 54924U;

    t140 = (x585|((x586<=x587)+x588));

    if (t140 != 221U) { NG(); } else { ; }
	
}

void f141(void) {
    	static int64_t x589 = -2758541193435LL;
	volatile int32_t x591 = 365778630;
	int16_t x592 = -1;

    t141 = (x589|((x590<=x591)+x592));

    if (t141 != -1LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static int64_t x594 = 37082LL;
	int32_t x596 = 6654;
	uint32_t t142 = 675531087U;

    t142 = (x593|((x594<=x595)+x596));

    if (t142 != 9428991U) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile uint32_t x597 = 1346199790U;
	int64_t x598 = 33LL;
	volatile int32_t x599 = INT32_MIN;
	volatile int16_t x600 = INT16_MIN;
	volatile uint32_t t143 = 10355U;

    t143 = (x597|((x598<=x599)+x600));

    if (t143 != 4294959342U) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile int32_t x601 = INT32_MIN;
	int16_t x602 = -35;
	int16_t x603 = INT16_MIN;
	int64_t x604 = 4LL;
	volatile int64_t t144 = 10694685470686LL;

    t144 = (x601|((x602<=x603)+x604));

    if (t144 != -2147483644LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x606 = INT16_MAX;
	uint64_t x607 = 1LLU;
	int8_t x608 = -62;
	int32_t t145 = -170645988;

    t145 = (x605|((x606<=x607)+x608));

    if (t145 != -1) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile uint32_t x609 = UINT32_MAX;
	uint8_t x610 = 1U;
	int32_t x612 = -1;
	volatile uint32_t t146 = UINT32_MAX;

    t146 = (x609|((x610<=x611)+x612));

    if (t146 != UINT32_MAX) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x613 = INT16_MAX;
	uint8_t x614 = UINT8_MAX;
	uint64_t x615 = 1LLU;
	int32_t x616 = INT32_MIN;
	volatile int32_t t147 = 240520;

    t147 = (x613|((x614<=x615)+x616));

    if (t147 != -2147450881) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x617 = -1;
	static uint16_t x618 = 1920U;
	int16_t x619 = INT16_MAX;
	uint64_t x620 = UINT64_MAX;
	static volatile uint64_t t148 = UINT64_MAX;

    t148 = (x617|((x618<=x619)+x620));

    if (t148 != UINT64_MAX) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x623 = INT64_MIN;
	uint16_t x624 = UINT16_MAX;
	volatile uint64_t t149 = 31LLU;

    t149 = (x621|((x622<=x623)+x624));

    if (t149 != 65535LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x626 = 0U;
	static uint64_t x627 = UINT64_MAX;
	static int8_t x628 = INT8_MAX;
	volatile uint64_t t150 = UINT64_MAX;

    t150 = (x625|((x626<=x627)+x628));

    if (t150 != UINT64_MAX) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile uint64_t x629 = 1647LLU;
	int64_t x631 = 278049186208659LL;
	volatile uint64_t t151 = 7507889711325660LLU;

    t151 = (x629|((x630<=x631)+x632));

    if (t151 != 1663LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x634 = INT16_MIN;
	int16_t x635 = INT16_MAX;
	uint16_t x636 = 451U;
	int32_t t152 = 49631167;

    t152 = (x633|((x634<=x635)+x636));

    if (t152 != -41) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x637 = 9053LLU;
	uint64_t x638 = 908010425040LLU;
	uint64_t t153 = 309489477615909101LLU;

    t153 = (x637|((x638<=x639)+x640));

    if (t153 != 18446744071562077021LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x642 = INT64_MIN;
	int32_t x643 = -192847;
	int8_t x644 = -1;
	int32_t t154 = 265328705;

    t154 = (x641|((x642<=x643)+x644));

    if (t154 != -32768) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int32_t x646 = INT32_MIN;
	int64_t x647 = INT64_MIN;
	int16_t x648 = INT16_MAX;

    t155 = (x645|((x646<=x647)+x648));

    if (t155 != -2147450881) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x649 = UINT32_MAX;
	int32_t x650 = 1246;
	int32_t x651 = -1;
	uint8_t x652 = 3U;
	uint32_t t156 = UINT32_MAX;

    t156 = (x649|((x650<=x651)+x652));

    if (t156 != UINT32_MAX) { NG(); } else { ; }
	
}

void f157(void) {
    	static int32_t x653 = INT32_MAX;
	int32_t x656 = 15;
	int32_t t157 = INT32_MAX;

    t157 = (x653|((x654<=x655)+x656));

    if (t157 != INT32_MAX) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x657 = 983;
	uint64_t x658 = 9956LLU;
	uint8_t x659 = UINT8_MAX;
	int8_t x660 = -1;
	int32_t t158 = 21773;

    t158 = (x657|((x658<=x659)+x660));

    if (t158 != -1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x661 = 87U;
	int16_t x662 = -1;
	int64_t x663 = INT64_MIN;
	volatile uint16_t x664 = 405U;
	uint32_t t159 = 9566845U;

    t159 = (x661|((x662<=x663)+x664));

    if (t159 != 471U) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x666 = 4765661948LLU;
	int32_t x668 = INT32_MAX;

    t160 = (x665|((x666<=x667)+x668));

    if (t160 != INT32_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x670 = UINT64_MAX;
	static int8_t x671 = INT8_MIN;
	uint32_t x672 = 423U;
	volatile uint32_t t161 = 491U;

    t161 = (x669|((x670<=x671)+x672));

    if (t161 != 4294967207U) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x673 = INT32_MIN;
	int16_t x675 = INT16_MAX;
	int8_t x676 = -1;
	int32_t t162 = 1;

    t162 = (x673|((x674<=x675)+x676));

    if (t162 != -1) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x677 = -1;
	int8_t x678 = INT8_MIN;
	static uint32_t x679 = 1U;
	uint32_t x680 = 18U;
	volatile uint32_t t163 = UINT32_MAX;

    t163 = (x677|((x678<=x679)+x680));

    if (t163 != UINT32_MAX) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint16_t x682 = UINT16_MAX;
	volatile int16_t x683 = INT16_MAX;
	int8_t x684 = INT8_MAX;
	volatile int32_t t164 = -109;

    t164 = (x681|((x682<=x683)+x684));

    if (t164 != -1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x685 = UINT64_MAX;
	int8_t x686 = INT8_MIN;
	int64_t x687 = -1LL;
	volatile int32_t x688 = 94694865;

    t165 = (x685|((x686<=x687)+x688));

    if (t165 != UINT64_MAX) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint64_t x690 = UINT64_MAX;
	volatile uint16_t x691 = UINT16_MAX;
	int32_t x692 = -1;
	volatile int32_t t166 = -14;

    t166 = (x689|((x690<=x691)+x692));

    if (t166 != -1) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x695 = -1;
	volatile uint64_t t167 = UINT64_MAX;

    t167 = (x693|((x694<=x695)+x696));

    if (t167 != UINT64_MAX) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int8_t x698 = -1;
	uint16_t x699 = 0U;
	static uint64_t x700 = 3302692868828500LLU;
	static uint64_t t168 = 19906355LLU;

    t168 = (x697|((x698<=x699)+x700));

    if (t168 != 147417974364433757LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x701 = -1;
	int64_t x703 = INT64_MAX;
	volatile int8_t x704 = 0;

    t169 = (x701|((x702<=x703)+x704));

    if (t169 != -1) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x705 = -4;
	volatile int32_t x706 = 12370;
	uint8_t x707 = 4U;
	uint64_t x708 = UINT64_MAX;
	uint64_t t170 = UINT64_MAX;

    t170 = (x705|((x706<=x707)+x708));

    if (t170 != UINT64_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint32_t x709 = 17515138U;
	uint16_t x710 = 4085U;
	int64_t x712 = INT64_MIN;

    t171 = (x709|((x710<=x711)+x712));

    if (t171 != -9223372036837260670LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x714 = INT16_MAX;
	static volatile int32_t x715 = -1;
	uint16_t x716 = 1640U;
	volatile int32_t t172 = 14666;

    t172 = (x713|((x714<=x715)+x716));

    if (t172 != 65535) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint16_t x717 = 2U;
	uint16_t x718 = 13U;
	static int32_t x719 = INT32_MIN;
	uint32_t x720 = 7361654U;
	static uint32_t t173 = 340U;

    t173 = (x717|((x718<=x719)+x720));

    if (t173 != 7361654U) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x721 = INT16_MIN;
	uint8_t x722 = 25U;
	int64_t x723 = INT64_MIN;

    t174 = (x721|((x722<=x723)+x724));

    if (t174 != -31330LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x725 = 2U;
	static int16_t x727 = 6;
	volatile int8_t x728 = INT8_MIN;
	static int32_t t175 = 164340759;

    t175 = (x725|((x726<=x727)+x728));

    if (t175 != -126) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int16_t x729 = -1;
	uint8_t x731 = UINT8_MAX;
	int64_t x732 = -1LL;
	static int64_t t176 = 2256LL;

    t176 = (x729|((x730<=x731)+x732));

    if (t176 != -1LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x733 = -161;
	int64_t x734 = INT64_MIN;
	volatile uint16_t x735 = 209U;
	int64_t x736 = -1LL;

    t177 = (x733|((x734<=x735)+x736));

    if (t177 != -161LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t x738 = -200229;
	uint8_t x739 = UINT8_MAX;
	int32_t t178 = -1;

    t178 = (x737|((x738<=x739)+x740));

    if (t178 != -13) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x741 = -5;
	int16_t x742 = 1905;
	static uint16_t x743 = 3734U;
	volatile int64_t x744 = INT64_MIN;
	volatile int64_t t179 = 284520948676789LL;

    t179 = (x741|((x742<=x743)+x744));

    if (t179 != -5LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x745 = 199U;
	int16_t x746 = -1;
	static int64_t x747 = -1LL;
	volatile uint64_t x748 = 3LLU;
	volatile uint64_t t180 = 1LLU;

    t180 = (x745|((x746<=x747)+x748));

    if (t180 != 199LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x749 = 1;
	uint16_t x750 = 15U;
	volatile int16_t x751 = -1;
	int8_t x752 = 0;
	volatile int32_t t181 = -101148335;

    t181 = (x749|((x750<=x751)+x752));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint8_t x753 = UINT8_MAX;
	uint64_t x754 = 4803807766LLU;
	int32_t x755 = -1;
	int64_t x756 = -1LL;
	volatile int64_t t182 = -1760347608596LL;

    t182 = (x753|((x754<=x755)+x756));

    if (t182 != 255LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x757 = 58993328;
	int16_t x758 = INT16_MAX;
	volatile int16_t x760 = 15;
	static int32_t t183 = 324915603;

    t183 = (x757|((x758<=x759)+x760));

    if (t183 != 58993343) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x761 = 10U;
	volatile int16_t x763 = INT16_MIN;
	int8_t x764 = INT8_MIN;
	volatile int32_t t184 = -1;

    t184 = (x761|((x762<=x763)+x764));

    if (t184 != -118) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x765 = 0;
	int16_t x766 = -1;
	volatile int32_t t185 = -195;

    t185 = (x765|((x766<=x767)+x768));

    if (t185 != -1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x769 = 182U;
	int8_t x770 = -44;
	uint8_t x771 = UINT8_MAX;
	uint64_t x772 = UINT64_MAX;
	static uint64_t t186 = 2623624298LLU;

    t186 = (x769|((x770<=x771)+x772));

    if (t186 != 182LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x773 = 21U;
	static int32_t x774 = 3950186;
	int32_t x775 = INT32_MIN;
	static int8_t x776 = -7;
	static uint32_t t187 = 11203U;

    t187 = (x773|((x774<=x775)+x776));

    if (t187 != 4294967293U) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x777 = 248LLU;
	volatile uint16_t x778 = 231U;
	int16_t x779 = 0;
	static uint16_t x780 = UINT16_MAX;
	volatile uint64_t t188 = 6730859919050663LLU;

    t188 = (x777|((x778<=x779)+x780));

    if (t188 != 65535LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x784 = 73U;
	volatile int64_t t189 = -223250179LL;

    t189 = (x781|((x782<=x783)+x784));

    if (t189 != 75LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint32_t x785 = 7759U;
	static int8_t x788 = -3;
	volatile uint32_t t190 = UINT32_MAX;

    t190 = (x785|((x786<=x787)+x788));

    if (t190 != UINT32_MAX) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x789 = -1;
	static uint64_t x790 = 19LLU;
	volatile uint8_t x791 = UINT8_MAX;
	uint16_t x792 = 2928U;
	volatile int32_t t191 = 19941;

    t191 = (x789|((x790<=x791)+x792));

    if (t191 != -1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x793 = 222396896757396717LLU;
	int32_t x795 = -15;
	volatile int8_t x796 = INT8_MAX;
	uint64_t t192 = 26LLU;

    t192 = (x793|((x794<=x795)+x796));

    if (t192 != 222396896757396717LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x798 = 11U;
	static int8_t x799 = INT8_MIN;
	volatile int64_t t193 = -166842589983LL;

    t193 = (x797|((x798<=x799)+x800));

    if (t193 != 2147483647LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x802 = 0LL;
	volatile uint64_t x803 = 347089631954687LLU;
	int32_t x804 = -3505796;
	int32_t t194 = -90;

    t194 = (x801|((x802<=x803)+x804));

    if (t194 != -32387) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint8_t x805 = 9U;
	int32_t x806 = 3781;
	static int64_t x807 = -1LL;
	static volatile uint8_t x808 = 91U;
	volatile int32_t t195 = 434515;

    t195 = (x805|((x806<=x807)+x808));

    if (t195 != 91) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x809 = 3636U;
	volatile uint8_t x810 = UINT8_MAX;
	int32_t x811 = INT32_MIN;
	int8_t x812 = -1;
	static uint32_t t196 = UINT32_MAX;

    t196 = (x809|((x810<=x811)+x812));

    if (t196 != UINT32_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int16_t x813 = INT16_MIN;
	int64_t x814 = INT64_MIN;
	int64_t x815 = INT64_MIN;
	int64_t x816 = INT64_MIN;
	int64_t t197 = -2030249181096886LL;

    t197 = (x813|((x814<=x815)+x816));

    if (t197 != -32767LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint8_t x817 = UINT8_MAX;
	volatile int64_t x818 = -135877769LL;
	int32_t x820 = -1;
	int32_t t198 = 25088;

    t198 = (x817|((x818<=x819)+x820));

    if (t198 != 255) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x821 = 6;
	int8_t x822 = INT8_MIN;
	uint8_t x823 = 1U;
	uint64_t t199 = 3393831993790LLU;

    t199 = (x821|((x822<=x823)+x824));

    if (t199 != 396546287LLU) { NG(); } else { ; }
	
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

