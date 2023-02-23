
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

uint64_t x3 = UINT64_MAX;
uint16_t x4 = UINT16_MAX;
static volatile uint16_t x5 = 2009U;
int32_t t1 = 0;
int8_t x10 = INT8_MIN;
int16_t x14 = -1;
int8_t x17 = 3;
static volatile int64_t x19 = INT64_MIN;
static uint16_t x29 = 4325U;
static uint8_t x35 = UINT8_MAX;
static int8_t x36 = INT8_MAX;
volatile int64_t x44 = INT64_MAX;
volatile int8_t x45 = 23;
volatile int32_t x48 = -1;
volatile int32_t t11 = 627377;
int16_t x68 = -314;
volatile int32_t t15 = -22272;
int64_t x71 = -45793649281LL;
int8_t x74 = -1;
int64_t x78 = INT64_MIN;
int64_t x85 = 493292571213LL;
volatile int32_t t19 = 6713932;
int16_t x90 = INT16_MIN;
static volatile uint16_t x99 = UINT16_MAX;
int8_t x100 = -1;
int32_t x111 = INT32_MIN;
int8_t x112 = INT8_MIN;
static volatile int32_t t24 = -679311;
static uint8_t x114 = 19U;
volatile int16_t x116 = INT16_MIN;
volatile int32_t t25 = 3324;
int8_t x121 = -1;
int32_t t28 = -1285;
uint16_t x134 = 51U;
uint64_t x135 = 216321663LLU;
int8_t x140 = INT8_MIN;
int32_t x144 = 45241;
static int16_t x152 = 15662;
uint8_t x154 = 9U;
int32_t t38 = 529112219;
static volatile uint32_t x187 = 196537835U;
int16_t x193 = 12682;
volatile int8_t x208 = -1;
static int32_t t42 = 1;
static int8_t x210 = -1;
uint8_t x211 = UINT8_MAX;
int8_t x219 = INT8_MIN;
static volatile uint32_t x231 = 11U;
int32_t t47 = 905;
int32_t t48 = 7142365;
int16_t x256 = 1;
static volatile int32_t t51 = 4422789;
static volatile uint8_t x264 = 16U;
static int8_t x278 = INT8_MIN;
uint64_t x280 = 457049804050936160LLU;
uint8_t x283 = 102U;
volatile int32_t t56 = 17;
int32_t x287 = -1;
uint8_t x294 = 2U;
uint32_t x296 = 3U;
static int16_t x300 = -28;
int32_t t60 = 11409;
uint64_t x320 = UINT64_MAX;
int64_t x325 = INT64_MIN;
volatile uint64_t x328 = 4436604493238474576LLU;
volatile int32_t t67 = 4383;
int64_t x333 = INT64_MIN;
int16_t x338 = 63;
uint16_t x351 = UINT16_MAX;
int16_t x352 = INT16_MAX;
int8_t x354 = INT8_MIN;
int32_t x356 = -1;
int16_t x358 = INT16_MIN;
int16_t x368 = -1;
int32_t x371 = INT32_MAX;
int32_t x372 = -14;
uint8_t x383 = 1U;
volatile int32_t t79 = 1485;
int64_t x385 = -1LL;
volatile int16_t x386 = INT16_MAX;
int64_t x387 = -1LL;
volatile int16_t x395 = 15693;
int64_t x398 = 13500692LL;
static int8_t x399 = 38;
int64_t x415 = INT64_MAX;
volatile int32_t x423 = INT32_MAX;
volatile int32_t t87 = 0;
volatile int32_t t88 = 400856464;
int64_t x459 = -1LL;
int32_t t91 = -1709;
int32_t x468 = -1;
volatile int16_t x470 = -1;
uint8_t x472 = 91U;
int64_t x485 = INT64_MIN;
int32_t t97 = -2380;
volatile uint64_t x498 = 1LLU;
volatile int32_t t99 = -625;
int64_t x514 = -1LL;
static int32_t x521 = INT32_MIN;
int64_t x527 = 3244203535132673508LL;
volatile int64_t x532 = INT64_MIN;
int8_t x541 = INT8_MIN;
int32_t x544 = -1;
volatile int32_t t107 = 2;
uint16_t x546 = 3U;
volatile int32_t t108 = -31148;
int8_t x562 = -1;
uint8_t x574 = 54U;
volatile int32_t t114 = -1069015915;
int32_t x582 = INT32_MAX;
volatile uint16_t x592 = UINT16_MAX;
int8_t x594 = 1;
int32_t x600 = 13795;
uint64_t x602 = 614541963LLU;
volatile int32_t t119 = -491;
volatile int64_t x608 = -1LL;
volatile int32_t t120 = -17016;
int16_t x623 = INT16_MIN;
uint8_t x631 = UINT8_MAX;
int32_t x636 = INT32_MIN;
int64_t x643 = INT64_MAX;
int64_t x649 = INT64_MIN;
int16_t x650 = -28;
static volatile int32_t x652 = INT32_MAX;
int16_t x656 = 89;
static uint64_t x664 = UINT64_MAX;
int32_t x672 = -1;
int32_t x694 = -39773;
int8_t x703 = INT8_MIN;
int32_t t139 = 233;
int64_t x724 = -1LL;
volatile int32_t t141 = 123867703;
int32_t x738 = -106;
volatile uint8_t x750 = 44U;
int32_t t146 = -27511842;
int8_t x755 = 0;
volatile uint8_t x756 = 4U;
int32_t t147 = 35;
int32_t x761 = -1;
volatile int32_t x764 = 30727;
static int32_t t149 = 0;
uint8_t x765 = 28U;
volatile uint16_t x775 = 3774U;
uint16_t x776 = 3U;
volatile int32_t t152 = -76781877;
static volatile int16_t x795 = 1284;
static volatile uint8_t x796 = 2U;
volatile int32_t t155 = 1;
uint32_t x800 = 229413U;
volatile uint16_t x801 = 61U;
volatile int32_t t157 = -3353102;
volatile int64_t x809 = INT64_MIN;
volatile int32_t t159 = -136142;
int8_t x820 = -5;
int32_t t161 = 23;
volatile int32_t t162 = -1963;
uint32_t x837 = UINT32_MAX;
static volatile int8_t x838 = INT8_MIN;
volatile int64_t x844 = INT64_MIN;
static volatile int32_t t165 = 594;
int16_t x848 = -1;
volatile uint32_t x849 = 788U;
volatile uint64_t x853 = UINT64_MAX;
static int16_t x857 = INT16_MIN;
int8_t x859 = -17;
int64_t x863 = 30LL;
uint64_t x865 = UINT64_MAX;
int32_t t171 = 391203571;
int32_t t173 = 1084;
static int16_t x888 = INT16_MIN;
static uint16_t x892 = UINT16_MAX;
static volatile int16_t x901 = INT16_MIN;
int32_t x904 = -1;
int32_t t177 = 3928767;
int8_t x906 = INT8_MIN;
uint8_t x912 = UINT8_MAX;
uint64_t x916 = 957LLU;
uint16_t x923 = 296U;
volatile uint8_t x932 = UINT8_MAX;
volatile int64_t x936 = INT64_MIN;
int32_t t184 = 458;
int16_t x954 = INT16_MIN;
int32_t x956 = -1;
volatile int32_t t188 = -14398;
static uint16_t x972 = 910U;
int32_t t191 = -32917;
static volatile int32_t t192 = 1;
volatile int32_t t194 = -844593;
int32_t x989 = 506;
uint64_t x992 = UINT64_MAX;
static volatile int32_t x1001 = 436759275;


void f0(void) {
    	int16_t x1 = INT16_MIN;
	static volatile uint8_t x2 = UINT8_MAX;
	int32_t t0 = 3;

    t0 = (x1==((x2+x3)-x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x6 = -2;
	uint64_t x7 = UINT64_MAX;
	uint8_t x8 = UINT8_MAX;

    t1 = (x5==((x6+x7)-x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x9 = 12;
	int32_t x11 = 3184;
	int8_t x12 = -1;
	volatile int32_t t2 = 8049323;

    t2 = (x9==((x10+x11)-x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = -15;
	volatile int64_t x15 = INT64_MAX;
	uint32_t x16 = UINT32_MAX;
	int32_t t3 = -4128;

    t3 = (x13==((x14+x15)-x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x18 = 109388805098233720LLU;
	uint8_t x20 = 35U;
	static int32_t t4 = 27486644;

    t4 = (x17==((x18+x19)-x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x21 = -1;
	int64_t x22 = -11981244959LL;
	int8_t x23 = INT8_MAX;
	int16_t x24 = -1;
	volatile int32_t t5 = -26;

    t5 = (x21==((x22+x23)-x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = -3;
	int16_t x26 = INT16_MIN;
	static uint32_t x27 = UINT32_MAX;
	uint8_t x28 = UINT8_MAX;
	volatile int32_t t6 = -121975;

    t6 = (x25==((x26+x27)-x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x30 = INT64_MIN;
	uint8_t x31 = UINT8_MAX;
	static int32_t x32 = -1;
	static volatile int32_t t7 = -1;

    t7 = (x29==((x30+x31)-x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = INT16_MIN;
	int8_t x34 = -15;
	int32_t t8 = -177079;

    t8 = (x33==((x34+x35)-x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = -251017;
	int8_t x38 = -1;
	int8_t x39 = 0;
	volatile int32_t x40 = -1;
	static volatile int32_t t9 = -3842;

    t9 = (x37==((x38+x39)-x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x41 = 78U;
	static int64_t x42 = 3976LL;
	static int8_t x43 = -10;
	int32_t t10 = 827428;

    t10 = (x41==((x42+x43)-x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x46 = INT16_MIN;
	int8_t x47 = 1;

    t11 = (x45==((x46+x47)-x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = INT64_MIN;
	int64_t x50 = 71392067655LL;
	volatile int16_t x51 = INT16_MIN;
	int8_t x52 = INT8_MIN;
	int32_t t12 = -283498461;

    t12 = (x49==((x50+x51)-x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x53 = 2U;
	volatile int16_t x54 = INT16_MIN;
	int16_t x55 = -1;
	static int32_t x56 = 1260770;
	int32_t t13 = 346;

    t13 = (x53==((x54+x55)-x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x57 = 12413U;
	int16_t x58 = -1;
	static uint32_t x59 = UINT32_MAX;
	uint16_t x60 = 1U;
	int32_t t14 = -7;

    t14 = (x57==((x58+x59)-x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x65 = -1;
	int32_t x66 = INT32_MIN;
	int32_t x67 = 401638;

    t15 = (x65==((x66+x67)-x68));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x69 = 1515324;
	int16_t x70 = -1;
	int32_t x72 = 274808;
	volatile int32_t t16 = -1;

    t16 = (x69==((x70+x71)-x72));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x73 = INT64_MIN;
	int64_t x75 = -1LL;
	uint16_t x76 = 884U;
	volatile int32_t t17 = 382943;

    t17 = (x73==((x74+x75)-x76));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x77 = INT8_MIN;
	static uint64_t x79 = 31130366689575LLU;
	int32_t x80 = -1;
	int32_t t18 = -176808472;

    t18 = (x77==((x78+x79)-x80));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x86 = -29452;
	uint64_t x87 = 295673378LLU;
	static int32_t x88 = -1;

    t19 = (x85==((x86+x87)-x88));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x89 = -63882217621513046LL;
	volatile int16_t x91 = INT16_MIN;
	int16_t x92 = 370;
	int32_t t20 = 295791;

    t20 = (x89==((x90+x91)-x92));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x93 = 6920U;
	int16_t x94 = INT16_MAX;
	volatile int32_t x95 = INT32_MIN;
	int32_t x96 = 6;
	volatile int32_t t21 = -249796;

    t21 = (x93==((x94+x95)-x96));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x97 = 4718LL;
	int32_t x98 = INT32_MIN;
	volatile int32_t t22 = 991496086;

    t22 = (x97==((x98+x99)-x100));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x101 = -1;
	uint16_t x102 = UINT16_MAX;
	static int8_t x103 = INT8_MAX;
	int16_t x104 = 16;
	volatile int32_t t23 = -24304449;

    t23 = (x101==((x102+x103)-x104));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x109 = UINT8_MAX;
	uint64_t x110 = UINT64_MAX;

    t24 = (x109==((x110+x111)-x112));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x113 = INT64_MIN;
	int8_t x115 = -1;

    t25 = (x113==((x114+x115)-x116));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x117 = INT64_MIN;
	static uint64_t x118 = 779446504489LLU;
	uint32_t x119 = 0U;
	volatile int64_t x120 = INT64_MIN;
	int32_t t26 = 1869;

    t26 = (x117==((x118+x119)-x120));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint64_t x122 = 1248237863LLU;
	int64_t x123 = INT64_MIN;
	static int32_t x124 = -1;
	volatile int32_t t27 = -2;

    t27 = (x121==((x122+x123)-x124));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int8_t x125 = INT8_MIN;
	static uint8_t x126 = UINT8_MAX;
	volatile int16_t x127 = INT16_MIN;
	uint64_t x128 = 1998780LLU;

    t28 = (x125==((x126+x127)-x128));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x133 = -1252;
	int16_t x136 = INT16_MAX;
	int32_t t29 = 3947171;

    t29 = (x133==((x134+x135)-x136));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int16_t x137 = -14;
	uint8_t x138 = UINT8_MAX;
	volatile int16_t x139 = INT16_MIN;
	static volatile int32_t t30 = 55006;

    t30 = (x137==((x138+x139)-x140));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x141 = INT32_MAX;
	volatile int32_t x142 = -99;
	static int8_t x143 = -13;
	static int32_t t31 = -5360;

    t31 = (x141==((x142+x143)-x144));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x149 = -1LL;
	volatile int32_t x150 = -185614337;
	uint8_t x151 = 126U;
	static int32_t t32 = -764644416;

    t32 = (x149==((x150+x151)-x152));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x153 = INT8_MIN;
	int8_t x155 = 30;
	int16_t x156 = 502;
	volatile int32_t t33 = 3436;

    t33 = (x153==((x154+x155)-x156));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x157 = -1LL;
	int64_t x158 = -11780LL;
	int32_t x159 = -1;
	int64_t x160 = -1LL;
	int32_t t34 = 2669;

    t34 = (x157==((x158+x159)-x160));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x165 = INT8_MIN;
	static int64_t x166 = 58363088LL;
	uint16_t x167 = 173U;
	static uint16_t x168 = 13U;
	volatile int32_t t35 = -11;

    t35 = (x165==((x166+x167)-x168));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x169 = -2706187;
	uint8_t x170 = UINT8_MAX;
	int16_t x171 = -1;
	int8_t x172 = INT8_MIN;
	static int32_t t36 = 0;

    t36 = (x169==((x170+x171)-x172));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x173 = INT32_MIN;
	int64_t x174 = 7860250137127503LL;
	int8_t x175 = INT8_MAX;
	uint8_t x176 = 0U;
	static int32_t t37 = 71;

    t37 = (x173==((x174+x175)-x176));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint64_t x177 = 7323180741184LLU;
	uint32_t x178 = UINT32_MAX;
	uint32_t x179 = 211305U;
	static int32_t x180 = 627882906;

    t38 = (x177==((x178+x179)-x180));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x185 = UINT64_MAX;
	static int16_t x186 = INT16_MAX;
	int64_t x188 = -1LL;
	int32_t t39 = -2007;

    t39 = (x185==((x186+x187)-x188));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x194 = 1U;
	int16_t x195 = INT16_MIN;
	uint32_t x196 = 9U;
	volatile int32_t t40 = -201895;

    t40 = (x193==((x194+x195)-x196));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x197 = 31547968LLU;
	uint64_t x198 = 924731LLU;
	uint32_t x199 = UINT32_MAX;
	int32_t x200 = INT32_MIN;
	static volatile int32_t t41 = 1767;

    t41 = (x197==((x198+x199)-x200));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x205 = UINT32_MAX;
	static volatile uint64_t x206 = UINT64_MAX;
	int64_t x207 = INT64_MAX;

    t42 = (x205==((x206+x207)-x208));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x209 = -1;
	int32_t x212 = INT32_MAX;
	volatile int32_t t43 = -892118;

    t43 = (x209==((x210+x211)-x212));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x213 = 5;
	static int8_t x214 = INT8_MAX;
	int32_t x215 = INT32_MIN;
	static volatile int16_t x216 = -1;
	volatile int32_t t44 = -237;

    t44 = (x213==((x214+x215)-x216));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x217 = -1;
	int16_t x218 = 1;
	int8_t x220 = INT8_MIN;
	volatile int32_t t45 = 9313491;

    t45 = (x217==((x218+x219)-x220));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x225 = -1LL;
	int32_t x226 = INT32_MAX;
	uint32_t x227 = 22U;
	int16_t x228 = INT16_MIN;
	static int32_t t46 = -2239;

    t46 = (x225==((x226+x227)-x228));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x229 = INT64_MIN;
	volatile int8_t x230 = -1;
	uint32_t x232 = 164425757U;

    t47 = (x229==((x230+x231)-x232));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x245 = 6U;
	int32_t x246 = -1;
	int16_t x247 = INT16_MAX;
	static uint32_t x248 = 54313883U;

    t48 = (x245==((x246+x247)-x248));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x249 = 0U;
	static volatile int32_t x250 = -380;
	uint64_t x251 = 62557889807548555LLU;
	int16_t x252 = -1;
	int32_t t49 = -913841;

    t49 = (x249==((x250+x251)-x252));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint32_t x253 = 591U;
	int64_t x254 = 2059989315152879645LL;
	int32_t x255 = -474;
	static int32_t t50 = -9466;

    t50 = (x253==((x254+x255)-x256));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x257 = 39U;
	static int64_t x258 = -121823LL;
	uint64_t x259 = 54707436654LLU;
	int8_t x260 = INT8_MIN;

    t51 = (x257==((x258+x259)-x260));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x261 = 456843LLU;
	int16_t x262 = -1;
	volatile uint64_t x263 = UINT64_MAX;
	volatile int32_t t52 = 3372;

    t52 = (x261==((x262+x263)-x264));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x265 = UINT16_MAX;
	int16_t x266 = 2;
	static int32_t x267 = 1536418;
	uint32_t x268 = 223093U;
	volatile int32_t t53 = 3769086;

    t53 = (x265==((x266+x267)-x268));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile uint64_t x273 = 1977LLU;
	int32_t x274 = -1;
	volatile int8_t x275 = 3;
	static volatile int32_t x276 = -1;
	volatile int32_t t54 = -58;

    t54 = (x273==((x274+x275)-x276));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x277 = -1;
	volatile int16_t x279 = INT16_MIN;
	volatile int32_t t55 = 833384;

    t55 = (x277==((x278+x279)-x280));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x281 = 147U;
	static int32_t x282 = INT32_MIN;
	static int8_t x284 = INT8_MIN;

    t56 = (x281==((x282+x283)-x284));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int64_t x285 = INT64_MIN;
	int32_t x286 = -38444329;
	int64_t x288 = INT64_MIN;
	int32_t t57 = 779;

    t57 = (x285==((x286+x287)-x288));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint64_t x289 = UINT64_MAX;
	int16_t x290 = -1;
	int64_t x291 = 3074845LL;
	uint16_t x292 = 13838U;
	volatile int32_t t58 = 241356;

    t58 = (x289==((x290+x291)-x292));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint64_t x293 = UINT64_MAX;
	uint8_t x295 = 94U;
	volatile int32_t t59 = -20;

    t59 = (x293==((x294+x295)-x296));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x297 = -1;
	uint8_t x298 = 12U;
	int16_t x299 = -1;

    t60 = (x297==((x298+x299)-x300));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x301 = UINT32_MAX;
	int8_t x302 = INT8_MIN;
	int16_t x303 = -1;
	int16_t x304 = -1;
	volatile int32_t t61 = -273882;

    t61 = (x301==((x302+x303)-x304));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x305 = INT16_MIN;
	uint64_t x306 = 25244564LLU;
	int16_t x307 = INT16_MIN;
	int16_t x308 = INT16_MIN;
	int32_t t62 = -61795595;

    t62 = (x305==((x306+x307)-x308));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x313 = 1;
	volatile uint8_t x314 = 13U;
	volatile int32_t x315 = INT32_MIN;
	static uint32_t x316 = 3U;
	volatile int32_t t63 = -7950;

    t63 = (x313==((x314+x315)-x316));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int16_t x317 = -1;
	volatile int32_t x318 = 1;
	static int8_t x319 = INT8_MIN;
	volatile int32_t t64 = 21893;

    t64 = (x317==((x318+x319)-x320));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x321 = INT32_MIN;
	volatile int8_t x322 = INT8_MAX;
	int8_t x323 = INT8_MIN;
	uint64_t x324 = 473114LLU;
	volatile int32_t t65 = 2715;

    t65 = (x321==((x322+x323)-x324));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x326 = INT16_MAX;
	int64_t x327 = -1LL;
	volatile int32_t t66 = 1;

    t66 = (x325==((x326+x327)-x328));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x329 = 53361108;
	int32_t x330 = 285205409;
	int16_t x331 = -63;
	static volatile int64_t x332 = -2094175038689942116LL;

    t67 = (x329==((x330+x331)-x332));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x334 = INT16_MIN;
	int8_t x335 = INT8_MIN;
	volatile int64_t x336 = INT64_MIN;
	volatile int32_t t68 = -3;

    t68 = (x333==((x334+x335)-x336));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x337 = INT16_MIN;
	int8_t x339 = -1;
	uint32_t x340 = UINT32_MAX;
	volatile int32_t t69 = 147364179;

    t69 = (x337==((x338+x339)-x340));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int64_t x341 = -136689090990136LL;
	uint32_t x342 = 13U;
	uint8_t x343 = 26U;
	uint16_t x344 = 5119U;
	int32_t t70 = 1;

    t70 = (x341==((x342+x343)-x344));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static int8_t x345 = INT8_MIN;
	volatile int16_t x346 = -1;
	int16_t x347 = 4373;
	uint16_t x348 = 27U;
	int32_t t71 = -3461548;

    t71 = (x345==((x346+x347)-x348));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int64_t x349 = -91647514815536658LL;
	uint32_t x350 = 29516081U;
	int32_t t72 = -14477;

    t72 = (x349==((x350+x351)-x352));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x353 = 1734977U;
	int8_t x355 = INT8_MIN;
	static volatile int32_t t73 = 337039;

    t73 = (x353==((x354+x355)-x356));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x357 = -1;
	int64_t x359 = -1LL;
	int64_t x360 = 181449051629LL;
	volatile int32_t t74 = 156508;

    t74 = (x357==((x358+x359)-x360));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x365 = INT8_MIN;
	int64_t x366 = 268011513578108931LL;
	int32_t x367 = INT32_MIN;
	int32_t t75 = 206;

    t75 = (x365==((x366+x367)-x368));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x369 = 1U;
	volatile int64_t x370 = -1955793414095LL;
	static volatile int32_t t76 = -225;

    t76 = (x369==((x370+x371)-x372));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x373 = INT16_MIN;
	uint32_t x374 = UINT32_MAX;
	volatile int32_t x375 = -1;
	volatile uint64_t x376 = 847779LLU;
	volatile int32_t t77 = -139600;

    t77 = (x373==((x374+x375)-x376));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x377 = INT32_MAX;
	volatile int64_t x378 = -1LL;
	int32_t x379 = INT32_MIN;
	uint32_t x380 = 7U;
	int32_t t78 = -150168;

    t78 = (x377==((x378+x379)-x380));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int8_t x381 = -1;
	int64_t x382 = -3633466172011LL;
	int16_t x384 = INT16_MIN;

    t79 = (x381==((x382+x383)-x384));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x388 = -4LL;
	static volatile int32_t t80 = 2507;

    t80 = (x385==((x386+x387)-x388));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x389 = INT32_MIN;
	int64_t x390 = INT64_MIN;
	uint64_t x391 = 1043709LLU;
	static volatile uint64_t x392 = UINT64_MAX;
	volatile int32_t t81 = 1;

    t81 = (x389==((x390+x391)-x392));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x393 = 536U;
	volatile uint64_t x394 = 439998LLU;
	int16_t x396 = INT16_MIN;
	static volatile int32_t t82 = -9707;

    t82 = (x393==((x394+x395)-x396));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x397 = 0;
	int8_t x400 = INT8_MIN;
	volatile int32_t t83 = 28847706;

    t83 = (x397==((x398+x399)-x400));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint8_t x401 = 20U;
	uint16_t x402 = 46U;
	int64_t x403 = -1LL;
	int16_t x404 = INT16_MIN;
	static volatile int32_t t84 = 58946271;

    t84 = (x401==((x402+x403)-x404));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x413 = 3U;
	int32_t x414 = -1;
	static uint32_t x416 = 362021U;
	volatile int32_t t85 = -5814792;

    t85 = (x413==((x414+x415)-x416));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x417 = 2;
	int16_t x418 = INT16_MIN;
	int16_t x419 = INT16_MAX;
	int32_t x420 = 50;
	static volatile int32_t t86 = 248753047;

    t86 = (x417==((x418+x419)-x420));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x421 = UINT8_MAX;
	volatile int8_t x422 = -1;
	uint16_t x424 = UINT16_MAX;

    t87 = (x421==((x422+x423)-x424));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x429 = UINT16_MAX;
	volatile int32_t x430 = INT32_MIN;
	static uint8_t x431 = UINT8_MAX;
	static int8_t x432 = 3;

    t88 = (x429==((x430+x431)-x432));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x449 = 1U;
	static int64_t x450 = INT64_MAX;
	int32_t x451 = INT32_MIN;
	uint64_t x452 = 253067350463505LLU;
	int32_t t89 = 0;

    t89 = (x449==((x450+x451)-x452));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int8_t x457 = INT8_MAX;
	uint8_t x458 = UINT8_MAX;
	int32_t x460 = INT32_MIN;
	int32_t t90 = 1451;

    t90 = (x457==((x458+x459)-x460));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x461 = -85;
	static uint8_t x462 = UINT8_MAX;
	int8_t x463 = -1;
	static int32_t x464 = INT32_MAX;

    t91 = (x461==((x462+x463)-x464));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x465 = INT32_MIN;
	static int32_t x466 = INT32_MIN;
	int64_t x467 = -1093365984719211304LL;
	int32_t t92 = 11;

    t92 = (x465==((x466+x467)-x468));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x469 = 6U;
	int16_t x471 = 400;
	volatile int32_t t93 = 112;

    t93 = (x469==((x470+x471)-x472));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x473 = INT64_MIN;
	uint32_t x474 = 1004247U;
	int32_t x475 = -1;
	volatile int16_t x476 = -1;
	int32_t t94 = -360076268;

    t94 = (x473==((x474+x475)-x476));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x477 = 5307364;
	uint16_t x478 = 46U;
	int8_t x479 = -1;
	static int16_t x480 = -58;
	static int32_t t95 = 12;

    t95 = (x477==((x478+x479)-x480));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint16_t x481 = 18929U;
	int16_t x482 = INT16_MAX;
	static uint32_t x483 = UINT32_MAX;
	uint8_t x484 = 6U;
	static int32_t t96 = 754;

    t96 = (x481==((x482+x483)-x484));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x486 = INT64_MAX;
	static uint64_t x487 = UINT64_MAX;
	int32_t x488 = INT32_MIN;

    t97 = (x485==((x486+x487)-x488));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x497 = INT16_MIN;
	volatile int32_t x499 = -1;
	int32_t x500 = INT32_MIN;
	static int32_t t98 = 1893771;

    t98 = (x497==((x498+x499)-x500));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x505 = -1;
	volatile int32_t x506 = INT32_MIN;
	volatile int32_t x507 = INT32_MAX;
	volatile int32_t x508 = -23968;

    t99 = (x505==((x506+x507)-x508));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x509 = 16U;
	uint16_t x510 = 3U;
	volatile uint64_t x511 = 2485875313LLU;
	volatile int16_t x512 = INT16_MAX;
	static volatile int32_t t100 = -15560;

    t100 = (x509==((x510+x511)-x512));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x513 = -1;
	int32_t x515 = -107;
	static volatile int8_t x516 = -8;
	static int32_t t101 = -7064159;

    t101 = (x513==((x514+x515)-x516));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x517 = INT32_MIN;
	int8_t x518 = INT8_MIN;
	volatile uint32_t x519 = 7066483U;
	uint8_t x520 = UINT8_MAX;
	static volatile int32_t t102 = 0;

    t102 = (x517==((x518+x519)-x520));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x522 = -20;
	uint32_t x523 = 1966U;
	uint8_t x524 = 8U;
	volatile int32_t t103 = -69;

    t103 = (x521==((x522+x523)-x524));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x525 = INT64_MIN;
	volatile int64_t x526 = -1LL;
	static int8_t x528 = INT8_MIN;
	volatile int32_t t104 = 482705663;

    t104 = (x525==((x526+x527)-x528));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x529 = 3LLU;
	static int64_t x530 = INT64_MIN;
	int32_t x531 = 46870;
	int32_t t105 = -491312301;

    t105 = (x529==((x530+x531)-x532));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x533 = INT16_MIN;
	static uint32_t x534 = UINT32_MAX;
	int64_t x535 = INT64_MIN;
	static int32_t x536 = -1;
	static volatile int32_t t106 = 217792;

    t106 = (x533==((x534+x535)-x536));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x542 = INT16_MAX;
	uint32_t x543 = UINT32_MAX;

    t107 = (x541==((x542+x543)-x544));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x545 = INT32_MAX;
	int64_t x547 = -1LL;
	static uint16_t x548 = 2005U;

    t108 = (x545==((x546+x547)-x548));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x549 = 1U;
	int32_t x550 = -338646954;
	uint64_t x551 = 9139824905LLU;
	int64_t x552 = -11427196035LL;
	static int32_t t109 = 511887;

    t109 = (x549==((x550+x551)-x552));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x553 = INT8_MIN;
	static int32_t x554 = INT32_MAX;
	uint64_t x555 = 12252343953LLU;
	static int64_t x556 = 491LL;
	volatile int32_t t110 = -687419571;

    t110 = (x553==((x554+x555)-x556));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x557 = UINT16_MAX;
	static int8_t x558 = 1;
	uint32_t x559 = 1217176384U;
	static volatile uint32_t x560 = UINT32_MAX;
	volatile int32_t t111 = 20467416;

    t111 = (x557==((x558+x559)-x560));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x561 = 31637678U;
	int16_t x563 = INT16_MAX;
	uint64_t x564 = 1208410LLU;
	int32_t t112 = -591086239;

    t112 = (x561==((x562+x563)-x564));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int8_t x573 = INT8_MIN;
	static int64_t x575 = -1LL;
	int32_t x576 = INT32_MAX;
	volatile int32_t t113 = 1;

    t113 = (x573==((x574+x575)-x576));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x577 = 477;
	int32_t x578 = INT32_MAX;
	volatile uint32_t x579 = 29U;
	int64_t x580 = 53909027LL;

    t114 = (x577==((x578+x579)-x580));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile int32_t x581 = -1;
	static uint32_t x583 = 9255732U;
	int8_t x584 = INT8_MIN;
	volatile int32_t t115 = -60794231;

    t115 = (x581==((x582+x583)-x584));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x589 = INT64_MIN;
	int32_t x590 = 650;
	uint16_t x591 = 4U;
	volatile int32_t t116 = -965192093;

    t116 = (x589==((x590+x591)-x592));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x593 = INT16_MIN;
	uint16_t x595 = 255U;
	int16_t x596 = INT16_MIN;
	int32_t t117 = 1;

    t117 = (x593==((x594+x595)-x596));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x597 = -1LL;
	int32_t x598 = 4126655;
	int8_t x599 = -1;
	volatile int32_t t118 = -7188512;

    t118 = (x597==((x598+x599)-x600));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x601 = INT16_MIN;
	static int8_t x603 = -3;
	int8_t x604 = -57;

    t119 = (x601==((x602+x603)-x604));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x605 = INT16_MAX;
	uint64_t x606 = 273527790969674464LLU;
	int32_t x607 = -22221042;

    t120 = (x605==((x606+x607)-x608));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x609 = -1LL;
	uint16_t x610 = UINT16_MAX;
	static int8_t x611 = INT8_MIN;
	static int32_t x612 = -516114;
	static int32_t t121 = 275978;

    t121 = (x609==((x610+x611)-x612));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x617 = -1;
	int8_t x618 = INT8_MIN;
	volatile int64_t x619 = 50225LL;
	int8_t x620 = INT8_MIN;
	static int32_t t122 = -151736656;

    t122 = (x617==((x618+x619)-x620));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x621 = INT16_MAX;
	volatile int8_t x622 = INT8_MIN;
	int8_t x624 = -62;
	int32_t t123 = 75444;

    t123 = (x621==((x622+x623)-x624));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x625 = 189;
	uint16_t x626 = 12U;
	int8_t x627 = 14;
	int8_t x628 = -8;
	volatile int32_t t124 = -29;

    t124 = (x625==((x626+x627)-x628));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x629 = INT16_MIN;
	static int32_t x630 = 6;
	int64_t x632 = -12162LL;
	volatile int32_t t125 = 603849;

    t125 = (x629==((x630+x631)-x632));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int8_t x633 = 1;
	static uint64_t x634 = 6914LLU;
	int8_t x635 = 3;
	volatile int32_t t126 = -19183;

    t126 = (x633==((x634+x635)-x636));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x637 = UINT32_MAX;
	int8_t x638 = INT8_MAX;
	int32_t x639 = -850168923;
	int16_t x640 = INT16_MAX;
	int32_t t127 = -14224;

    t127 = (x637==((x638+x639)-x640));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint32_t x641 = 36U;
	int64_t x642 = -415975LL;
	volatile int8_t x644 = INT8_MIN;
	volatile int32_t t128 = -235;

    t128 = (x641==((x642+x643)-x644));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x651 = INT64_MAX;
	volatile int32_t t129 = 163;

    t129 = (x649==((x650+x651)-x652));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x653 = INT64_MIN;
	int8_t x654 = INT8_MIN;
	volatile uint64_t x655 = 939887LLU;
	volatile int32_t t130 = -110;

    t130 = (x653==((x654+x655)-x656));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x657 = -112;
	volatile int32_t x658 = 4353216;
	int32_t x659 = -1;
	int32_t x660 = -1;
	volatile int32_t t131 = 6;

    t131 = (x657==((x658+x659)-x660));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint64_t x661 = 182597746LLU;
	volatile uint64_t x662 = 62198005320526595LLU;
	int16_t x663 = 1;
	volatile int32_t t132 = 15981039;

    t132 = (x661==((x662+x663)-x664));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x665 = 196U;
	volatile uint32_t x666 = UINT32_MAX;
	int16_t x667 = INT16_MIN;
	volatile int32_t x668 = INT32_MAX;
	int32_t t133 = 85108;

    t133 = (x665==((x666+x667)-x668));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x669 = -1;
	int32_t x670 = -22700;
	volatile uint8_t x671 = UINT8_MAX;
	volatile int32_t t134 = 0;

    t134 = (x669==((x670+x671)-x672));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x673 = 1U;
	int8_t x674 = INT8_MAX;
	static int8_t x675 = 2;
	uint16_t x676 = UINT16_MAX;
	volatile int32_t t135 = -26;

    t135 = (x673==((x674+x675)-x676));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x689 = -1;
	int16_t x690 = 36;
	static int64_t x691 = 9LL;
	int16_t x692 = -1;
	volatile int32_t t136 = 2;

    t136 = (x689==((x690+x691)-x692));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x693 = INT64_MIN;
	int16_t x695 = INT16_MIN;
	int64_t x696 = -1LL;
	int32_t t137 = -18284880;

    t137 = (x693==((x694+x695)-x696));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile int32_t x701 = 155912354;
	volatile int32_t x702 = 559359945;
	uint64_t x704 = 82LLU;
	static int32_t t138 = -14;

    t138 = (x701==((x702+x703)-x704));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x709 = 5437449LL;
	uint32_t x710 = 37162U;
	static int64_t x711 = -2648786114535723227LL;
	static uint8_t x712 = UINT8_MAX;

    t139 = (x709==((x710+x711)-x712));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x713 = -18;
	int16_t x714 = -1;
	int64_t x715 = 87886LL;
	volatile int16_t x716 = 1;
	int32_t t140 = -60;

    t140 = (x713==((x714+x715)-x716));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x721 = INT32_MIN;
	int64_t x722 = 7460019794862694LL;
	int32_t x723 = -87045885;

    t141 = (x721==((x722+x723)-x724));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x725 = INT64_MIN;
	uint32_t x726 = 12181U;
	volatile uint8_t x727 = 2U;
	int8_t x728 = -1;
	volatile int32_t t142 = -7579372;

    t142 = (x725==((x726+x727)-x728));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x729 = 9497695;
	static uint8_t x730 = 108U;
	int16_t x731 = -1;
	volatile int64_t x732 = -1LL;
	volatile int32_t t143 = -72;

    t143 = (x729==((x730+x731)-x732));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int32_t x733 = INT32_MAX;
	int32_t x734 = INT32_MIN;
	uint64_t x735 = 203869LLU;
	int32_t x736 = INT32_MIN;
	int32_t t144 = 262028489;

    t144 = (x733==((x734+x735)-x736));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x737 = INT64_MIN;
	static volatile uint64_t x739 = 4489447794837806LLU;
	int16_t x740 = INT16_MAX;
	volatile int32_t t145 = 84525782;

    t145 = (x737==((x738+x739)-x740));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int64_t x749 = -1LL;
	int8_t x751 = INT8_MIN;
	volatile int8_t x752 = INT8_MIN;

    t146 = (x749==((x750+x751)-x752));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x753 = INT64_MIN;
	int8_t x754 = INT8_MAX;

    t147 = (x753==((x754+x755)-x756));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint16_t x757 = 1928U;
	static int64_t x758 = -3797LL;
	uint64_t x759 = 1097482014813377LLU;
	static int32_t x760 = -15492;
	static volatile int32_t t148 = 50045051;

    t148 = (x757==((x758+x759)-x760));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint64_t x762 = UINT64_MAX;
	uint8_t x763 = UINT8_MAX;

    t149 = (x761==((x762+x763)-x764));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x766 = -1;
	static int8_t x767 = -1;
	uint64_t x768 = 38346677LLU;
	int32_t t150 = 13;

    t150 = (x765==((x766+x767)-x768));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x769 = INT8_MAX;
	volatile uint32_t x770 = 183314073U;
	int8_t x771 = -1;
	volatile int32_t x772 = INT32_MIN;
	volatile int32_t t151 = -599895511;

    t151 = (x769==((x770+x771)-x772));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int8_t x773 = INT8_MIN;
	uint32_t x774 = 130958U;

    t152 = (x773==((x774+x775)-x776));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x777 = INT64_MIN;
	uint8_t x778 = 29U;
	uint16_t x779 = 11903U;
	int64_t x780 = -1LL;
	int32_t t153 = 1;

    t153 = (x777==((x778+x779)-x780));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x789 = INT16_MIN;
	volatile int8_t x790 = INT8_MIN;
	uint32_t x791 = 24271130U;
	uint64_t x792 = 1059487708417367LLU;
	volatile int32_t t154 = -316781879;

    t154 = (x789==((x790+x791)-x792));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint8_t x793 = 2U;
	uint64_t x794 = 127658649LLU;

    t155 = (x793==((x794+x795)-x796));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x797 = INT8_MIN;
	static uint64_t x798 = 27844777771679LLU;
	int8_t x799 = 3;
	int32_t t156 = 299904787;

    t156 = (x797==((x798+x799)-x800));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int32_t x802 = 1;
	static int16_t x803 = INT16_MIN;
	int64_t x804 = -2417092028991LL;

    t157 = (x801==((x802+x803)-x804));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x805 = -1;
	uint32_t x806 = UINT32_MAX;
	int16_t x807 = -11;
	static int64_t x808 = -1LL;
	int32_t t158 = -5288404;

    t158 = (x805==((x806+x807)-x808));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x810 = INT8_MAX;
	uint32_t x811 = 3858665U;
	uint64_t x812 = UINT64_MAX;

    t159 = (x809==((x810+x811)-x812));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x817 = INT32_MIN;
	uint8_t x818 = 5U;
	int16_t x819 = 14695;
	volatile int32_t t160 = -635567;

    t160 = (x817==((x818+x819)-x820));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x821 = INT64_MIN;
	uint64_t x822 = 1501903712LLU;
	volatile int8_t x823 = INT8_MAX;
	static int8_t x824 = INT8_MIN;

    t161 = (x821==((x822+x823)-x824));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x825 = 107U;
	int64_t x826 = INT64_MAX;
	int32_t x827 = INT32_MIN;
	uint8_t x828 = 25U;

    t162 = (x825==((x826+x827)-x828));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x833 = INT32_MIN;
	int8_t x834 = INT8_MAX;
	int32_t x835 = INT32_MIN;
	uint64_t x836 = UINT64_MAX;
	int32_t t163 = 0;

    t163 = (x833==((x834+x835)-x836));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x839 = 99484LLU;
	int64_t x840 = -1LL;
	int32_t t164 = 3885;

    t164 = (x837==((x838+x839)-x840));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x841 = 63LLU;
	uint32_t x842 = 247014U;
	uint64_t x843 = UINT64_MAX;

    t165 = (x841==((x842+x843)-x844));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint16_t x845 = 52U;
	static int32_t x846 = -59502472;
	uint64_t x847 = UINT64_MAX;
	int32_t t166 = 18;

    t166 = (x845==((x846+x847)-x848));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint64_t x850 = 8104LLU;
	volatile uint16_t x851 = 0U;
	volatile int16_t x852 = -1;
	int32_t t167 = -12;

    t167 = (x849==((x850+x851)-x852));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x854 = -97283776;
	static int16_t x855 = 63;
	int16_t x856 = 4;
	int32_t t168 = -859172935;

    t168 = (x853==((x854+x855)-x856));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x858 = -1;
	int16_t x860 = INT16_MIN;
	static volatile int32_t t169 = -6087;

    t169 = (x857==((x858+x859)-x860));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x861 = 10733U;
	volatile int64_t x862 = -1LL;
	uint16_t x864 = UINT16_MAX;
	static volatile int32_t t170 = 493484123;

    t170 = (x861==((x862+x863)-x864));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x866 = -1319154LL;
	int32_t x867 = INT32_MIN;
	int16_t x868 = INT16_MIN;

    t171 = (x865==((x866+x867)-x868));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int64_t x869 = 20188750LL;
	uint64_t x870 = 11541398090LLU;
	volatile int32_t x871 = -1;
	int64_t x872 = -1LL;
	volatile int32_t t172 = -1;

    t172 = (x869==((x870+x871)-x872));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x877 = INT32_MAX;
	uint64_t x878 = 453632909671LLU;
	int64_t x879 = -1LL;
	static int32_t x880 = INT32_MAX;

    t173 = (x877==((x878+x879)-x880));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x885 = 4888806U;
	static uint8_t x886 = 1U;
	int64_t x887 = -22526698295LL;
	int32_t t174 = 5;

    t174 = (x885==((x886+x887)-x888));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x889 = UINT8_MAX;
	uint64_t x890 = 1841LLU;
	static int16_t x891 = INT16_MIN;
	volatile int32_t t175 = -2;

    t175 = (x889==((x890+x891)-x892));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x893 = 123U;
	int16_t x894 = 330;
	int8_t x895 = 0;
	volatile int16_t x896 = INT16_MIN;
	static int32_t t176 = 568;

    t176 = (x893==((x894+x895)-x896));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x902 = 9846U;
	volatile int32_t x903 = INT32_MIN;

    t177 = (x901==((x902+x903)-x904));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x905 = UINT32_MAX;
	int64_t x907 = INT64_MAX;
	int8_t x908 = INT8_MIN;
	volatile int32_t t178 = 107119;

    t178 = (x905==((x906+x907)-x908));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint64_t x909 = UINT64_MAX;
	static uint32_t x910 = 3600U;
	uint64_t x911 = UINT64_MAX;
	int32_t t179 = 219;

    t179 = (x909==((x910+x911)-x912));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x913 = -35169LL;
	int16_t x914 = INT16_MAX;
	static uint32_t x915 = 1806244894U;
	volatile int32_t t180 = 215282946;

    t180 = (x913==((x914+x915)-x916));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x921 = 102360311878142LL;
	uint64_t x922 = UINT64_MAX;
	int16_t x924 = -1;
	int32_t t181 = -7;

    t181 = (x921==((x922+x923)-x924));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x925 = 5;
	int32_t x926 = 924405;
	uint32_t x927 = 83U;
	uint8_t x928 = 2U;
	static int32_t t182 = 54784;

    t182 = (x925==((x926+x927)-x928));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int64_t x929 = INT64_MIN;
	volatile int32_t x930 = 54;
	volatile int32_t x931 = -1;
	volatile int32_t t183 = -161;

    t183 = (x929==((x930+x931)-x932));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x933 = INT32_MAX;
	uint64_t x934 = 30448185844964418LLU;
	int64_t x935 = INT64_MIN;

    t184 = (x933==((x934+x935)-x936));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint16_t x941 = 27U;
	int16_t x942 = -15;
	uint16_t x943 = 6510U;
	int64_t x944 = 4511LL;
	int32_t t185 = 3340207;

    t185 = (x941==((x942+x943)-x944));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int64_t x945 = INT64_MIN;
	volatile uint64_t x946 = UINT64_MAX;
	int32_t x947 = INT32_MAX;
	uint8_t x948 = UINT8_MAX;
	static volatile int32_t t186 = 1379551;

    t186 = (x945==((x946+x947)-x948));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x953 = 46;
	uint64_t x955 = 0LLU;
	int32_t t187 = 16;

    t187 = (x953==((x954+x955)-x956));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x957 = UINT64_MAX;
	int8_t x958 = 9;
	uint32_t x959 = 12U;
	static int16_t x960 = -1;

    t188 = (x957==((x958+x959)-x960));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x961 = 0U;
	int32_t x962 = INT32_MAX;
	uint64_t x963 = 202735550LLU;
	int64_t x964 = 4003613658457LL;
	volatile int32_t t189 = -6171;

    t189 = (x961==((x962+x963)-x964));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x965 = 4327248874904574LLU;
	int16_t x966 = INT16_MIN;
	uint16_t x967 = 7685U;
	volatile int8_t x968 = INT8_MIN;
	volatile int32_t t190 = 0;

    t190 = (x965==((x966+x967)-x968));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x969 = 47U;
	static uint64_t x970 = UINT64_MAX;
	volatile uint8_t x971 = 0U;

    t191 = (x969==((x970+x971)-x972));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint32_t x973 = 24704958U;
	int32_t x974 = 1;
	volatile int16_t x975 = -237;
	static int16_t x976 = -32;

    t192 = (x973==((x974+x975)-x976));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x977 = 998999984LL;
	int8_t x978 = INT8_MAX;
	int16_t x979 = INT16_MIN;
	uint8_t x980 = 13U;
	static int32_t t193 = 1619598;

    t193 = (x977==((x978+x979)-x980));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x981 = 684LLU;
	int32_t x982 = -139;
	static volatile uint64_t x983 = 5940106LLU;
	volatile int16_t x984 = 68;

    t194 = (x981==((x982+x983)-x984));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x990 = -6;
	uint64_t x991 = 1316439258243880237LLU;
	static volatile int32_t t195 = 73;

    t195 = (x989==((x990+x991)-x992));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x993 = 32037LLU;
	uint8_t x994 = 1U;
	volatile int8_t x995 = -18;
	uint8_t x996 = 8U;
	int32_t t196 = 1872466;

    t196 = (x993==((x994+x995)-x996));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int32_t x997 = -1;
	uint8_t x998 = 18U;
	uint64_t x999 = UINT64_MAX;
	uint64_t x1000 = UINT64_MAX;
	volatile int32_t t197 = -286693;

    t197 = (x997==((x998+x999)-x1000));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x1002 = INT32_MIN;
	static int32_t x1003 = INT32_MAX;
	int32_t x1004 = 791167886;
	int32_t t198 = -7;

    t198 = (x1001==((x1002+x1003)-x1004));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x1005 = 782383;
	int8_t x1006 = INT8_MAX;
	int8_t x1007 = INT8_MIN;
	int64_t x1008 = INT64_MIN;
	volatile int32_t t199 = -1;

    t199 = (x1005==((x1006+x1007)-x1008));

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

