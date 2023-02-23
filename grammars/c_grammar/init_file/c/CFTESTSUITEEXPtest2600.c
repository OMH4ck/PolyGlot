
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

static int8_t x3 = 0;
uint16_t x5 = 1U;
volatile int32_t t2 = 258;
int16_t x20 = -3;
int32_t t5 = 311581039;
int16_t x25 = INT16_MIN;
volatile int32_t t6 = -3186806;
uint32_t x36 = UINT32_MAX;
volatile uint16_t x47 = UINT16_MAX;
volatile uint16_t x48 = UINT16_MAX;
volatile int16_t x51 = 227;
volatile int16_t x53 = -3;
static uint16_t x54 = 3737U;
static int32_t t15 = -1;
int8_t x69 = 1;
volatile int32_t x73 = 679446026;
int16_t x74 = -1;
int8_t x77 = 3;
uint8_t x78 = 89U;
static uint8_t x80 = 6U;
int16_t x96 = -1;
int32_t x103 = -1;
static int32_t t24 = 381;
int8_t x108 = INT8_MIN;
static int32_t t25 = 794251;
int64_t x110 = -1LL;
int64_t x116 = INT64_MAX;
static int16_t x119 = -590;
int64_t x123 = INT64_MIN;
uint8_t x134 = UINT8_MAX;
static uint32_t x139 = 15125683U;
volatile uint16_t x142 = UINT16_MAX;
uint32_t x145 = 129744U;
uint32_t x146 = 613246U;
uint64_t x151 = 1LLU;
volatile uint8_t x155 = UINT8_MAX;
volatile int32_t t38 = 6137355;
uint64_t x165 = 37783450974644LLU;
uint8_t x166 = UINT8_MAX;
int8_t x171 = 4;
volatile int32_t t40 = 238;
uint64_t x173 = 328663596457906LLU;
int32_t t41 = 248;
int64_t x177 = 120984758LL;
uint32_t x181 = 2382U;
uint16_t x190 = 2873U;
uint64_t x192 = UINT64_MAX;
uint16_t x193 = UINT16_MAX;
volatile int32_t x194 = INT32_MAX;
int64_t x219 = INT64_MIN;
int32_t t51 = -866913;
static int32_t x226 = INT32_MAX;
static int32_t t52 = 7407553;
static int16_t x235 = -66;
int32_t x238 = INT32_MIN;
int16_t x243 = INT16_MIN;
volatile int16_t x248 = INT16_MAX;
int32_t t64 = -1;
volatile int8_t x277 = -1;
static uint64_t x278 = 7169394076907LLU;
int32_t x280 = INT32_MIN;
int64_t x281 = -169LL;
int64_t x286 = -5909651222313020LL;
volatile uint64_t x287 = 8530538399LLU;
volatile int32_t t67 = -575;
static volatile int32_t x295 = -1;
int32_t x300 = 55980;
uint64_t x304 = 7189944LLU;
uint64_t x305 = 11058853LLU;
int32_t t72 = -2;
int32_t x310 = INT32_MIN;
volatile int32_t t73 = -2331;
uint16_t x313 = UINT16_MAX;
volatile int64_t x317 = INT64_MIN;
int32_t x327 = -1;
volatile int32_t t77 = -1606;
static volatile int32_t x337 = INT32_MIN;
int8_t x338 = INT8_MAX;
uint8_t x344 = UINT8_MAX;
uint32_t x346 = 63U;
uint32_t x347 = 135325603U;
int32_t x350 = -1;
int32_t x353 = 886320;
int8_t x356 = INT8_MIN;
static int8_t x357 = INT8_MIN;
volatile int32_t t85 = 1521;
static int32_t t86 = 8324;
int64_t x367 = -10229LL;
int32_t x372 = INT32_MAX;
volatile int32_t t88 = -7056738;
int32_t x373 = 22081;
int32_t t93 = 24;
int64_t x397 = INT64_MIN;
static volatile int32_t x409 = -2846;
int32_t t98 = -30190;
int32_t t99 = 239;
int64_t x418 = INT64_MIN;
volatile int64_t x419 = INT64_MIN;
volatile int32_t x421 = -1;
uint8_t x422 = UINT8_MAX;
static uint8_t x425 = 38U;
int16_t x428 = INT16_MIN;
static int64_t x431 = -1LL;
volatile int32_t t103 = -1315;
volatile uint8_t x433 = 11U;
int8_t x434 = 32;
static int16_t x445 = INT16_MIN;
static uint16_t x450 = 2106U;
volatile int32_t t108 = 1587451;
uint64_t x459 = UINT64_MAX;
uint8_t x461 = 7U;
uint32_t x464 = 129946077U;
int8_t x467 = -26;
volatile uint8_t x471 = 34U;
int32_t t112 = 28528;
int8_t x476 = INT8_MIN;
int32_t t113 = -1469803;
volatile uint8_t x477 = 53U;
volatile uint64_t x478 = UINT64_MAX;
int16_t x488 = INT16_MAX;
int16_t x489 = INT16_MAX;
int32_t t117 = -13917;
uint64_t x502 = 4667752LLU;
volatile int32_t t120 = 9360;
int8_t x507 = INT8_MIN;
static uint64_t x508 = UINT64_MAX;
int32_t t122 = 1059498;
int32_t t123 = 491854;
uint64_t x522 = UINT64_MAX;
static int32_t x524 = INT32_MAX;
static volatile int32_t t124 = -7217143;
int8_t x526 = INT8_MIN;
volatile int64_t x530 = -489040LL;
volatile int64_t x534 = -315429414195LL;
volatile uint64_t x536 = 104069LLU;
volatile int32_t t127 = -493299;
static uint16_t x541 = UINT16_MAX;
int8_t x551 = INT8_MIN;
static volatile int64_t x554 = -1LL;
int64_t x557 = INT64_MAX;
volatile int8_t x562 = 23;
volatile int32_t t134 = 121;
int32_t x565 = INT32_MIN;
int32_t t135 = -10;
uint8_t x570 = 3U;
static int32_t x577 = INT32_MAX;
volatile uint32_t x578 = UINT32_MAX;
static int16_t x579 = -228;
int16_t x580 = -2028;
static uint64_t x582 = 834376320LLU;
int16_t x586 = INT16_MAX;
int8_t x594 = INT8_MIN;
uint8_t x595 = 1U;
uint16_t x596 = 4898U;
volatile int8_t x601 = INT8_MIN;
static volatile int32_t t145 = -3518;
static int32_t x621 = INT32_MIN;
volatile int32_t t149 = 57;
static uint32_t x629 = 30668U;
static uint16_t x632 = UINT16_MAX;
int8_t x635 = INT8_MAX;
static int32_t t152 = -10;
static uint32_t x640 = 158U;
int32_t t154 = 504495764;
int16_t x646 = INT16_MAX;
uint16_t x647 = UINT16_MAX;
volatile int32_t t155 = -1213;
int32_t x651 = -739;
int32_t t157 = 841724;
int16_t x661 = INT16_MIN;
uint8_t x662 = UINT8_MAX;
volatile int32_t t161 = 18594814;
static int16_t x673 = INT16_MAX;
static uint32_t x676 = 304U;
int32_t t162 = 1;
int8_t x684 = 1;
int8_t x692 = INT8_MIN;
int8_t x694 = INT8_MIN;
int64_t x695 = INT64_MIN;
static int64_t x696 = INT64_MAX;
static int16_t x700 = 867;
uint8_t x702 = 2U;
static int8_t x704 = -2;
volatile int32_t t169 = 41951850;
int32_t x705 = 5422458;
volatile int16_t x718 = 1;
static uint8_t x722 = UINT8_MAX;
static uint64_t x728 = UINT64_MAX;
volatile int32_t t175 = 49073;
int32_t t177 = 15;
int64_t x739 = -1LL;
uint64_t x745 = 592618070LLU;
static int32_t t182 = 118057760;
volatile int32_t x767 = INT32_MIN;
uint64_t x768 = UINT64_MAX;
uint32_t x771 = 20929U;
static uint32_t x773 = 384008U;
int32_t t187 = -1231994;
uint8_t x777 = 0U;
static int16_t x779 = -827;
int16_t x782 = -1;
volatile int32_t x784 = INT32_MIN;
static int32_t t189 = -1431365;
int32_t x790 = -1;
static int32_t t191 = 4819972;
volatile uint32_t x793 = 12695861U;
uint64_t x796 = UINT64_MAX;
volatile int32_t t192 = 0;
int16_t x801 = INT16_MIN;
int16_t x802 = -1;
int32_t x805 = INT32_MAX;
static uint16_t x808 = UINT16_MAX;
int32_t x810 = INT32_MIN;
int32_t x814 = -880;
static volatile int32_t t197 = -203618509;
static uint64_t x819 = 8650LLU;
int32_t x821 = -1;


void f0(void) {
    	int16_t x1 = 352;
	static int32_t x2 = INT32_MAX;
	int32_t x4 = INT32_MIN;
	int32_t t0 = 70;

    t0 = (x1<=((x2^x3)/x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x6 = -133700023728247812LL;
	static uint64_t x7 = UINT64_MAX;
	static int8_t x8 = -1;
	int32_t t1 = 127768146;

    t1 = (x5<=((x6^x7)/x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x9 = -1;
	uint8_t x10 = UINT8_MAX;
	int64_t x11 = INT64_MIN;
	uint64_t x12 = 628LLU;

    t2 = (x9<=((x10^x11)/x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint32_t x13 = 1327516497U;
	static int8_t x14 = INT8_MIN;
	int16_t x15 = INT16_MIN;
	int64_t x16 = 27593433147352246LL;
	static int32_t t3 = -24570;

    t3 = (x13<=((x14^x15)/x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int16_t x17 = -57;
	int64_t x18 = INT64_MAX;
	static int64_t x19 = -122810770470LL;
	int32_t t4 = -62;

    t4 = (x17<=((x18^x19)/x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = 1934927577169165LLU;
	uint32_t x22 = 1U;
	uint32_t x23 = UINT32_MAX;
	int16_t x24 = -1;

    t5 = (x21<=((x22^x23)/x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x26 = INT64_MIN;
	int16_t x27 = INT16_MIN;
	int16_t x28 = 5;

    t6 = (x25<=((x26^x27)/x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static int64_t x33 = -1LL;
	static int8_t x34 = -1;
	volatile int32_t x35 = INT32_MAX;
	static int32_t t7 = 1;

    t7 = (x33<=((x34^x35)/x36));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x37 = 9290990U;
	uint64_t x38 = UINT64_MAX;
	int8_t x39 = INT8_MAX;
	int8_t x40 = 5;
	static int32_t t8 = 1541734;

    t8 = (x37<=((x38^x39)/x40));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x41 = UINT64_MAX;
	static int16_t x42 = 1;
	int32_t x43 = 283;
	uint64_t x44 = 1790174315524875LLU;
	volatile int32_t t9 = 243062;

    t9 = (x41<=((x42^x43)/x44));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x45 = UINT16_MAX;
	int8_t x46 = -1;
	int32_t t10 = 419411298;

    t10 = (x45<=((x46^x47)/x48));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x49 = -46877;
	uint32_t x50 = 21598U;
	int16_t x52 = -6711;
	int32_t t11 = -188161192;

    t11 = (x49<=((x50^x51)/x52));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint64_t x55 = 4305667107197LLU;
	static uint32_t x56 = 101276483U;
	static volatile int32_t t12 = -314;

    t12 = (x53<=((x54^x55)/x56));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x57 = INT16_MAX;
	int16_t x58 = INT16_MAX;
	int64_t x59 = -177073300298177508LL;
	int8_t x60 = INT8_MIN;
	volatile int32_t t13 = -946698426;

    t13 = (x57<=((x58^x59)/x60));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x61 = INT64_MIN;
	int64_t x62 = INT64_MAX;
	int32_t x63 = -1;
	static int16_t x64 = INT16_MIN;
	volatile int32_t t14 = -34847;

    t14 = (x61<=((x62^x63)/x64));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x65 = INT8_MIN;
	volatile int32_t x66 = 1;
	int64_t x67 = 71296709943720LL;
	static uint32_t x68 = 876310U;

    t15 = (x65<=((x66^x67)/x68));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x70 = -60272LL;
	int64_t x71 = 53508318295LL;
	static int32_t x72 = 85;
	static int32_t t16 = -15676741;

    t16 = (x69<=((x70^x71)/x72));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x75 = -108;
	static int16_t x76 = INT16_MIN;
	volatile int32_t t17 = -16011;

    t17 = (x73<=((x74^x75)/x76));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x79 = 29672184974530752LLU;
	int32_t t18 = 49261947;

    t18 = (x77<=((x78^x79)/x80));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x81 = -1;
	int64_t x82 = 936800LL;
	int32_t x83 = 92467314;
	int64_t x84 = INT64_MIN;
	int32_t t19 = -312638507;

    t19 = (x81<=((x82^x83)/x84));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static int32_t x85 = INT32_MIN;
	volatile int8_t x86 = 13;
	uint8_t x87 = 0U;
	volatile uint32_t x88 = 692947934U;
	volatile int32_t t20 = -59;

    t20 = (x85<=((x86^x87)/x88));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x89 = UINT32_MAX;
	volatile int32_t x90 = INT32_MAX;
	uint64_t x91 = 189653221910767592LLU;
	volatile int64_t x92 = -3LL;
	static volatile int32_t t21 = 6387550;

    t21 = (x89<=((x90^x91)/x92));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x93 = UINT8_MAX;
	uint16_t x94 = 13107U;
	int64_t x95 = -1LL;
	static volatile int32_t t22 = -9811;

    t22 = (x93<=((x94^x95)/x96));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x97 = 16U;
	volatile int16_t x98 = INT16_MAX;
	int32_t x99 = -467297743;
	volatile int16_t x100 = INT16_MAX;
	int32_t t23 = 383714744;

    t23 = (x97<=((x98^x99)/x100));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint64_t x101 = 30457LLU;
	uint8_t x102 = UINT8_MAX;
	volatile uint32_t x104 = UINT32_MAX;

    t24 = (x101<=((x102^x103)/x104));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x105 = INT16_MIN;
	int64_t x106 = INT64_MIN;
	int64_t x107 = 2041479692LL;

    t25 = (x105<=((x106^x107)/x108));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int32_t x109 = -1;
	int16_t x111 = INT16_MIN;
	static int8_t x112 = INT8_MAX;
	volatile int32_t t26 = -141310;

    t26 = (x109<=((x110^x111)/x112));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static int32_t x113 = 158141609;
	static int64_t x114 = INT64_MIN;
	int32_t x115 = INT32_MIN;
	int32_t t27 = -175;

    t27 = (x113<=((x114^x115)/x116));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x117 = UINT8_MAX;
	int32_t x118 = INT32_MIN;
	static int8_t x120 = INT8_MAX;
	volatile int32_t t28 = 466373;

    t28 = (x117<=((x118^x119)/x120));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x121 = 3807U;
	uint16_t x122 = UINT16_MAX;
	uint32_t x124 = 3401U;
	static volatile int32_t t29 = -1240254;

    t29 = (x121<=((x122^x123)/x124));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x125 = INT8_MIN;
	volatile uint64_t x126 = 1251034381LLU;
	int16_t x127 = -1;
	int64_t x128 = INT64_MIN;
	int32_t t30 = -24897;

    t30 = (x125<=((x126^x127)/x128));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x133 = 54U;
	volatile int32_t x135 = 9875219;
	static volatile uint64_t x136 = 3826309068828355LLU;
	volatile int32_t t31 = -3246723;

    t31 = (x133<=((x134^x135)/x136));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x137 = UINT8_MAX;
	int64_t x138 = 957772LL;
	int32_t x140 = INT32_MIN;
	static volatile int32_t t32 = 1516;

    t32 = (x137<=((x138^x139)/x140));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x141 = -1;
	int64_t x143 = -39223923934336511LL;
	static volatile int64_t x144 = 31LL;
	int32_t t33 = 105253303;

    t33 = (x141<=((x142^x143)/x144));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int64_t x147 = INT64_MIN;
	int32_t x148 = INT32_MIN;
	volatile int32_t t34 = 674689;

    t34 = (x145<=((x146^x147)/x148));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x149 = INT16_MIN;
	int8_t x150 = 1;
	volatile uint8_t x152 = UINT8_MAX;
	int32_t t35 = 60102;

    t35 = (x149<=((x150^x151)/x152));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint64_t x153 = 30977152234894LLU;
	int64_t x154 = INT64_MIN;
	int64_t x156 = -1335671235892882LL;
	int32_t t36 = -31823;

    t36 = (x153<=((x154^x155)/x156));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x157 = INT32_MIN;
	int64_t x158 = INT64_MIN;
	uint32_t x159 = 2072U;
	int16_t x160 = INT16_MIN;
	volatile int32_t t37 = 614501;

    t37 = (x157<=((x158^x159)/x160));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t x161 = 227978244267835LL;
	static int32_t x162 = INT32_MIN;
	static int32_t x163 = 729400471;
	volatile int64_t x164 = INT64_MAX;

    t38 = (x161<=((x162^x163)/x164));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile uint32_t x167 = 13U;
	uint32_t x168 = 87671261U;
	int32_t t39 = -867709;

    t39 = (x165<=((x166^x167)/x168));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x169 = -307416487183LL;
	static int64_t x170 = 4697LL;
	static int64_t x172 = -33029773LL;

    t40 = (x169<=((x170^x171)/x172));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x174 = INT8_MAX;
	uint16_t x175 = UINT16_MAX;
	static int8_t x176 = -1;

    t41 = (x173<=((x174^x175)/x176));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x178 = INT16_MIN;
	static uint16_t x179 = 2617U;
	uint16_t x180 = UINT16_MAX;
	static volatile int32_t t42 = -27;

    t42 = (x177<=((x178^x179)/x180));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x182 = 16706265916LLU;
	uint64_t x183 = UINT64_MAX;
	int32_t x184 = -4555;
	volatile int32_t t43 = -124512433;

    t43 = (x181<=((x182^x183)/x184));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint64_t x185 = UINT64_MAX;
	static uint64_t x186 = UINT64_MAX;
	int16_t x187 = -1;
	static uint32_t x188 = 360898U;
	volatile int32_t t44 = 8133448;

    t44 = (x185<=((x186^x187)/x188));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint32_t x189 = UINT32_MAX;
	volatile uint32_t x191 = 1123956U;
	int32_t t45 = 833842124;

    t45 = (x189<=((x190^x191)/x192));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x195 = UINT32_MAX;
	static uint32_t x196 = UINT32_MAX;
	int32_t t46 = -5421;

    t46 = (x193<=((x194^x195)/x196));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x197 = INT32_MAX;
	uint16_t x198 = UINT16_MAX;
	int32_t x199 = INT32_MIN;
	int16_t x200 = -29;
	volatile int32_t t47 = -1317911;

    t47 = (x197<=((x198^x199)/x200));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x201 = INT16_MAX;
	uint64_t x202 = UINT64_MAX;
	int32_t x203 = INT32_MIN;
	static int8_t x204 = -13;
	static volatile int32_t t48 = 24636541;

    t48 = (x201<=((x202^x203)/x204));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x213 = UINT8_MAX;
	static volatile uint32_t x214 = 249452U;
	int8_t x215 = INT8_MIN;
	uint16_t x216 = 9056U;
	int32_t t49 = -49332023;

    t49 = (x213<=((x214^x215)/x216));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x217 = 1;
	static int16_t x218 = -1;
	int64_t x220 = INT64_MIN;
	int32_t t50 = -146;

    t50 = (x217<=((x218^x219)/x220));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x221 = -1;
	int8_t x222 = -1;
	volatile int64_t x223 = -42732LL;
	int16_t x224 = INT16_MAX;

    t51 = (x221<=((x222^x223)/x224));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x225 = 24U;
	static int8_t x227 = -34;
	int32_t x228 = -1;

    t52 = (x225<=((x226^x227)/x228));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x229 = 0;
	static int16_t x230 = 9;
	volatile int64_t x231 = -1LL;
	int8_t x232 = 1;
	int32_t t53 = 21;

    t53 = (x229<=((x230^x231)/x232));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x233 = 1201732LL;
	int32_t x234 = INT32_MIN;
	uint64_t x236 = 1463399960749LLU;
	static int32_t t54 = -93;

    t54 = (x233<=((x234^x235)/x236));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x237 = -1;
	static int8_t x239 = INT8_MIN;
	int64_t x240 = 6776017151915LL;
	static int32_t t55 = 9546;

    t55 = (x237<=((x238^x239)/x240));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint64_t x241 = 340766055025LLU;
	int8_t x242 = 3;
	int8_t x244 = -1;
	volatile int32_t t56 = -2673;

    t56 = (x241<=((x242^x243)/x244));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint8_t x245 = UINT8_MAX;
	volatile int16_t x246 = -3091;
	static int16_t x247 = -3;
	int32_t t57 = 644645;

    t57 = (x245<=((x246^x247)/x248));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint64_t x249 = 213588568779550114LLU;
	uint8_t x250 = UINT8_MAX;
	int8_t x251 = INT8_MAX;
	int32_t x252 = INT32_MIN;
	volatile int32_t t58 = -1964159;

    t58 = (x249<=((x250^x251)/x252));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint16_t x253 = 0U;
	int8_t x254 = INT8_MIN;
	static volatile int32_t x255 = 1;
	int16_t x256 = -3908;
	int32_t t59 = 710074;

    t59 = (x253<=((x254^x255)/x256));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x257 = -54;
	int16_t x258 = 1;
	int64_t x259 = INT64_MAX;
	static int64_t x260 = 3900473645049070LL;
	static int32_t t60 = -427668;

    t60 = (x257<=((x258^x259)/x260));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x261 = 7;
	int64_t x262 = -1486LL;
	volatile int32_t x263 = 5;
	volatile int32_t x264 = 401582197;
	static int32_t t61 = 1;

    t61 = (x261<=((x262^x263)/x264));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x265 = UINT64_MAX;
	uint32_t x266 = 1279U;
	int16_t x267 = 1;
	int64_t x268 = 38263593468210217LL;
	volatile int32_t t62 = 123748;

    t62 = (x265<=((x266^x267)/x268));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x269 = 4480;
	volatile int64_t x270 = INT64_MAX;
	int16_t x271 = -1;
	uint64_t x272 = 239731220243535LLU;
	volatile int32_t t63 = 9506;

    t63 = (x269<=((x270^x271)/x272));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x273 = INT32_MAX;
	int32_t x274 = INT32_MAX;
	volatile int32_t x275 = -1;
	static int16_t x276 = INT16_MIN;

    t64 = (x273<=((x274^x275)/x276));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x279 = -1;
	volatile int32_t t65 = -824;

    t65 = (x277<=((x278^x279)/x280));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x282 = INT32_MAX;
	uint16_t x283 = 14U;
	volatile uint64_t x284 = UINT64_MAX;
	static volatile int32_t t66 = 71919954;

    t66 = (x281<=((x282^x283)/x284));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x285 = 1073062795;
	volatile int64_t x288 = -1LL;

    t67 = (x285<=((x286^x287)/x288));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x289 = INT32_MIN;
	int32_t x290 = INT32_MIN;
	int64_t x291 = INT64_MIN;
	int64_t x292 = INT64_MAX;
	int32_t t68 = 0;

    t68 = (x289<=((x290^x291)/x292));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint64_t x293 = 7912980LLU;
	volatile uint64_t x294 = UINT64_MAX;
	int32_t x296 = INT32_MIN;
	volatile int32_t t69 = 581150278;

    t69 = (x293<=((x294^x295)/x296));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x297 = -1;
	int16_t x298 = INT16_MIN;
	uint8_t x299 = UINT8_MAX;
	int32_t t70 = 1997;

    t70 = (x297<=((x298^x299)/x300));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x301 = INT16_MIN;
	int32_t x302 = INT32_MIN;
	int8_t x303 = INT8_MIN;
	int32_t t71 = 1;

    t71 = (x301<=((x302^x303)/x304));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static int8_t x306 = 6;
	int32_t x307 = -1;
	volatile int32_t x308 = -1;

    t72 = (x305<=((x306^x307)/x308));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x309 = INT64_MAX;
	static int64_t x311 = -11903LL;
	int8_t x312 = 15;

    t73 = (x309<=((x310^x311)/x312));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x314 = INT64_MIN;
	uint16_t x315 = 0U;
	int8_t x316 = INT8_MAX;
	volatile int32_t t74 = -1;

    t74 = (x313<=((x314^x315)/x316));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x318 = -1247310LL;
	int32_t x319 = 8;
	uint16_t x320 = 22247U;
	volatile int32_t t75 = -229334132;

    t75 = (x317<=((x318^x319)/x320));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x321 = 3448U;
	int32_t x322 = -1;
	int64_t x323 = -96258329569902LL;
	int64_t x324 = INT64_MIN;
	static volatile int32_t t76 = 6626587;

    t76 = (x321<=((x322^x323)/x324));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile uint32_t x325 = 217860493U;
	uint32_t x326 = UINT32_MAX;
	int32_t x328 = INT32_MIN;

    t77 = (x325<=((x326^x327)/x328));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int8_t x329 = 26;
	int8_t x330 = -1;
	static int16_t x331 = INT16_MAX;
	static uint32_t x332 = 792989U;
	volatile int32_t t78 = 0;

    t78 = (x329<=((x330^x331)/x332));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x333 = -1;
	int64_t x334 = INT64_MAX;
	uint8_t x335 = 24U;
	int16_t x336 = INT16_MIN;
	volatile int32_t t79 = 339758;

    t79 = (x333<=((x334^x335)/x336));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x339 = 12;
	int64_t x340 = -1LL;
	int32_t t80 = -1;

    t80 = (x337<=((x338^x339)/x340));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x341 = 4U;
	int8_t x342 = INT8_MIN;
	int8_t x343 = INT8_MIN;
	volatile int32_t t81 = 393;

    t81 = (x341<=((x342^x343)/x344));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint8_t x345 = UINT8_MAX;
	static int64_t x348 = -1LL;
	volatile int32_t t82 = -10403609;

    t82 = (x345<=((x346^x347)/x348));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x349 = INT64_MAX;
	int16_t x351 = INT16_MAX;
	static volatile int32_t x352 = INT32_MAX;
	volatile int32_t t83 = -117927030;

    t83 = (x349<=((x350^x351)/x352));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x354 = 120U;
	int32_t x355 = INT32_MIN;
	int32_t t84 = 3;

    t84 = (x353<=((x354^x355)/x356));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x358 = -1LL;
	uint16_t x359 = UINT16_MAX;
	static uint32_t x360 = UINT32_MAX;

    t85 = (x357<=((x358^x359)/x360));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x361 = INT64_MIN;
	int32_t x362 = INT32_MIN;
	int8_t x363 = -1;
	static int32_t x364 = -1;

    t86 = (x361<=((x362^x363)/x364));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int64_t x365 = -58LL;
	int8_t x366 = INT8_MAX;
	uint64_t x368 = UINT64_MAX;
	int32_t t87 = 26786;

    t87 = (x365<=((x366^x367)/x368));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x369 = INT16_MAX;
	uint32_t x370 = 7200U;
	volatile int32_t x371 = INT32_MIN;

    t88 = (x369<=((x370^x371)/x372));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x374 = INT64_MAX;
	int16_t x375 = -1;
	volatile int64_t x376 = INT64_MIN;
	volatile int32_t t89 = 10901799;

    t89 = (x373<=((x374^x375)/x376));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x377 = INT16_MIN;
	int8_t x378 = -1;
	uint32_t x379 = 30132317U;
	volatile uint32_t x380 = UINT32_MAX;
	int32_t t90 = -125;

    t90 = (x377<=((x378^x379)/x380));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x381 = 28;
	int16_t x382 = -1;
	int16_t x383 = 8;
	static int8_t x384 = 16;
	volatile int32_t t91 = 1610165;

    t91 = (x381<=((x382^x383)/x384));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x385 = INT8_MIN;
	static volatile int16_t x386 = INT16_MIN;
	volatile uint32_t x387 = UINT32_MAX;
	uint16_t x388 = UINT16_MAX;
	int32_t t92 = -301;

    t92 = (x385<=((x386^x387)/x388));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint8_t x389 = UINT8_MAX;
	int64_t x390 = INT64_MIN;
	volatile uint16_t x391 = 83U;
	int16_t x392 = -1;

    t93 = (x389<=((x390^x391)/x392));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x393 = -1622;
	int32_t x394 = INT32_MAX;
	static volatile int64_t x395 = -1LL;
	uint64_t x396 = UINT64_MAX;
	int32_t t94 = -15183;

    t94 = (x393<=((x394^x395)/x396));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x398 = 3505U;
	static uint16_t x399 = 61U;
	int16_t x400 = 181;
	static volatile int32_t t95 = -146346;

    t95 = (x397<=((x398^x399)/x400));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint64_t x401 = 4LLU;
	uint16_t x402 = 6627U;
	static uint16_t x403 = 3U;
	uint8_t x404 = 108U;
	volatile int32_t t96 = -1503;

    t96 = (x401<=((x402^x403)/x404));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static int64_t x405 = -7845734506469383LL;
	int8_t x406 = INT8_MIN;
	volatile uint64_t x407 = UINT64_MAX;
	int8_t x408 = INT8_MAX;
	int32_t t97 = -17202260;

    t97 = (x405<=((x406^x407)/x408));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x410 = INT8_MAX;
	static volatile uint8_t x411 = UINT8_MAX;
	volatile int64_t x412 = INT64_MIN;

    t98 = (x409<=((x410^x411)/x412));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x413 = INT32_MIN;
	volatile int16_t x414 = 65;
	uint8_t x415 = 1U;
	volatile uint8_t x416 = 7U;

    t99 = (x413<=((x414^x415)/x416));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint8_t x417 = 4U;
	int16_t x420 = INT16_MIN;
	volatile int32_t t100 = -543774;

    t100 = (x417<=((x418^x419)/x420));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x423 = INT8_MAX;
	int16_t x424 = -283;
	static volatile int32_t t101 = -1094;

    t101 = (x421<=((x422^x423)/x424));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x426 = -1;
	volatile int16_t x427 = INT16_MAX;
	static volatile int32_t t102 = -257036288;

    t102 = (x425<=((x426^x427)/x428));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x429 = INT64_MIN;
	int64_t x430 = -1587297LL;
	int64_t x432 = INT64_MIN;

    t103 = (x429<=((x430^x431)/x432));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x435 = 4698;
	static int16_t x436 = -470;
	volatile int32_t t104 = 18723504;

    t104 = (x433<=((x434^x435)/x436));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x441 = UINT8_MAX;
	volatile int8_t x442 = -8;
	int64_t x443 = INT64_MIN;
	volatile int64_t x444 = INT64_MAX;
	volatile int32_t t105 = 23;

    t105 = (x441<=((x442^x443)/x444));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint16_t x446 = 323U;
	int16_t x447 = -1;
	static uint32_t x448 = UINT32_MAX;
	int32_t t106 = -21;

    t106 = (x445<=((x446^x447)/x448));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x449 = -6635291941LL;
	int8_t x451 = -1;
	static uint8_t x452 = UINT8_MAX;
	int32_t t107 = -1147577;

    t107 = (x449<=((x450^x451)/x452));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int32_t x453 = -1;
	static int32_t x454 = INT32_MIN;
	int64_t x455 = INT64_MAX;
	int8_t x456 = INT8_MIN;

    t108 = (x453<=((x454^x455)/x456));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x457 = INT8_MIN;
	static int64_t x458 = 57110981LL;
	static uint16_t x460 = 17U;
	int32_t t109 = -2516426;

    t109 = (x457<=((x458^x459)/x460));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x462 = INT64_MIN;
	uint16_t x463 = 33U;
	static int32_t t110 = 0;

    t110 = (x461<=((x462^x463)/x464));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x465 = INT32_MAX;
	int64_t x466 = -1LL;
	int16_t x468 = -1;
	volatile int32_t t111 = -51015636;

    t111 = (x465<=((x466^x467)/x468));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x469 = -1;
	int16_t x470 = INT16_MAX;
	volatile int16_t x472 = -1;

    t112 = (x469<=((x470^x471)/x472));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x473 = INT16_MIN;
	int16_t x474 = INT16_MIN;
	int8_t x475 = -11;

    t113 = (x473<=((x474^x475)/x476));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint64_t x479 = UINT64_MAX;
	int8_t x480 = INT8_MIN;
	int32_t t114 = 195;

    t114 = (x477<=((x478^x479)/x480));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint16_t x481 = 21187U;
	volatile int64_t x482 = INT64_MAX;
	int8_t x483 = INT8_MIN;
	static int64_t x484 = INT64_MIN;
	int32_t t115 = -1;

    t115 = (x481<=((x482^x483)/x484));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x485 = INT16_MIN;
	int32_t x486 = -13165528;
	int16_t x487 = INT16_MAX;
	static int32_t t116 = -189;

    t116 = (x485<=((x486^x487)/x488));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t x490 = -2284;
	volatile int16_t x491 = INT16_MIN;
	int32_t x492 = -461872;

    t117 = (x489<=((x490^x491)/x492));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x493 = UINT64_MAX;
	int64_t x494 = 3LL;
	static volatile int32_t x495 = INT32_MIN;
	int64_t x496 = 63615LL;
	volatile int32_t t118 = 5;

    t118 = (x493<=((x494^x495)/x496));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x497 = -1;
	uint64_t x498 = 0LLU;
	int64_t x499 = INT64_MIN;
	int64_t x500 = -6122730LL;
	volatile int32_t t119 = -3;

    t119 = (x497<=((x498^x499)/x500));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x501 = 1;
	volatile int32_t x503 = INT32_MIN;
	int64_t x504 = INT64_MAX;

    t120 = (x501<=((x502^x503)/x504));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x505 = 365U;
	static uint32_t x506 = 28U;
	static int32_t t121 = -44871734;

    t121 = (x505<=((x506^x507)/x508));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x509 = 1047752U;
	volatile int16_t x510 = INT16_MAX;
	int16_t x511 = -1;
	int8_t x512 = INT8_MIN;

    t122 = (x509<=((x510^x511)/x512));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int64_t x513 = INT64_MAX;
	int8_t x514 = 29;
	uint16_t x515 = UINT16_MAX;
	volatile int32_t x516 = INT32_MIN;

    t123 = (x513<=((x514^x515)/x516));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int32_t x521 = -8;
	int32_t x523 = 204;

    t124 = (x521<=((x522^x523)/x524));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x525 = -1LL;
	int8_t x527 = -16;
	int8_t x528 = INT8_MAX;
	static volatile int32_t t125 = -485;

    t125 = (x525<=((x526^x527)/x528));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x529 = 11U;
	static volatile uint32_t x531 = 2U;
	int32_t x532 = 340;
	volatile int32_t t126 = -31543;

    t126 = (x529<=((x530^x531)/x532));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile uint8_t x533 = 16U;
	int8_t x535 = 1;

    t127 = (x533<=((x534^x535)/x536));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x537 = INT64_MIN;
	uint32_t x538 = 13U;
	volatile uint64_t x539 = 3864952564123817619LLU;
	int16_t x540 = INT16_MAX;
	static int32_t t128 = 59734068;

    t128 = (x537<=((x538^x539)/x540));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile uint64_t x542 = 1362753LLU;
	static int8_t x543 = -1;
	int16_t x544 = INT16_MIN;
	int32_t t129 = -9;

    t129 = (x541<=((x542^x543)/x544));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x545 = INT32_MIN;
	uint64_t x546 = 374LLU;
	int16_t x547 = INT16_MIN;
	int16_t x548 = -1;
	int32_t t130 = -179783;

    t130 = (x545<=((x546^x547)/x548));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x549 = 5;
	static uint8_t x550 = 0U;
	int16_t x552 = INT16_MIN;
	volatile int32_t t131 = -1753116;

    t131 = (x549<=((x550^x551)/x552));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x553 = -1LL;
	static int32_t x555 = INT32_MIN;
	static uint64_t x556 = 3600275711260142652LLU;
	static volatile int32_t t132 = -2;

    t132 = (x553<=((x554^x555)/x556));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint8_t x558 = 7U;
	static volatile uint32_t x559 = 62120870U;
	int64_t x560 = INT64_MIN;
	volatile int32_t t133 = -53;

    t133 = (x557<=((x558^x559)/x560));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x561 = INT32_MIN;
	int64_t x563 = -1LL;
	int64_t x564 = INT64_MIN;

    t134 = (x561<=((x562^x563)/x564));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x566 = 193320185LL;
	volatile uint8_t x567 = UINT8_MAX;
	int8_t x568 = INT8_MIN;

    t135 = (x565<=((x566^x567)/x568));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x569 = -2115;
	int8_t x571 = INT8_MIN;
	int32_t x572 = -2;
	static int32_t t136 = 940974169;

    t136 = (x569<=((x570^x571)/x572));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x573 = INT16_MAX;
	uint64_t x574 = UINT64_MAX;
	int16_t x575 = INT16_MIN;
	int16_t x576 = INT16_MAX;
	static volatile int32_t t137 = 45;

    t137 = (x573<=((x574^x575)/x576));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t t138 = 22149056;

    t138 = (x577<=((x578^x579)/x580));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x581 = UINT8_MAX;
	int32_t x583 = INT32_MAX;
	int64_t x584 = INT64_MIN;
	int32_t t139 = 179575299;

    t139 = (x581<=((x582^x583)/x584));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x585 = 11514U;
	volatile int32_t x587 = 129269;
	static int64_t x588 = INT64_MIN;
	volatile int32_t t140 = 127116436;

    t140 = (x585<=((x586^x587)/x588));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x589 = INT8_MIN;
	uint8_t x590 = UINT8_MAX;
	static int16_t x591 = INT16_MAX;
	int8_t x592 = INT8_MIN;
	volatile int32_t t141 = -2352077;

    t141 = (x589<=((x590^x591)/x592));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x593 = INT8_MIN;
	int32_t t142 = -697;

    t142 = (x593<=((x594^x595)/x596));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint32_t x597 = 7035678U;
	int8_t x598 = 39;
	int16_t x599 = INT16_MAX;
	int8_t x600 = 1;
	volatile int32_t t143 = -707;

    t143 = (x597<=((x598^x599)/x600));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x602 = INT64_MIN;
	int8_t x603 = 53;
	volatile uint16_t x604 = UINT16_MAX;
	int32_t t144 = -31594;

    t144 = (x601<=((x602^x603)/x604));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x605 = INT16_MIN;
	int8_t x606 = INT8_MIN;
	int32_t x607 = INT32_MIN;
	volatile uint16_t x608 = UINT16_MAX;

    t145 = (x605<=((x606^x607)/x608));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x609 = 349101694051LLU;
	static int8_t x610 = 0;
	static int64_t x611 = INT64_MAX;
	int64_t x612 = -1LL;
	int32_t t146 = 73318451;

    t146 = (x609<=((x610^x611)/x612));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x613 = 6331LLU;
	static int64_t x614 = -1LL;
	uint16_t x615 = UINT16_MAX;
	static int32_t x616 = INT32_MAX;
	volatile int32_t t147 = 5;

    t147 = (x613<=((x614^x615)/x616));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x617 = -14891810697LL;
	static uint64_t x618 = 15934153LLU;
	volatile uint8_t x619 = UINT8_MAX;
	int8_t x620 = -1;
	volatile int32_t t148 = 885;

    t148 = (x617<=((x618^x619)/x620));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x622 = INT8_MIN;
	int64_t x623 = INT64_MAX;
	uint16_t x624 = 362U;

    t149 = (x621<=((x622^x623)/x624));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static int8_t x625 = INT8_MIN;
	static uint32_t x626 = 1U;
	static int8_t x627 = 1;
	static int8_t x628 = 2;
	volatile int32_t t150 = 1;

    t150 = (x625<=((x626^x627)/x628));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x630 = 323U;
	int8_t x631 = INT8_MIN;
	int32_t t151 = -26078132;

    t151 = (x629<=((x630^x631)/x632));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x633 = INT32_MIN;
	int32_t x634 = INT32_MIN;
	int32_t x636 = -1;

    t152 = (x633<=((x634^x635)/x636));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x637 = 65U;
	int32_t x638 = INT32_MIN;
	int32_t x639 = INT32_MIN;
	volatile int32_t t153 = -1;

    t153 = (x637<=((x638^x639)/x640));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x641 = 1;
	volatile int16_t x642 = INT16_MIN;
	static int16_t x643 = -15624;
	uint16_t x644 = 481U;

    t154 = (x641<=((x642^x643)/x644));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x645 = 0;
	uint8_t x648 = 18U;

    t155 = (x645<=((x646^x647)/x648));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint16_t x649 = 0U;
	uint32_t x650 = 1892043U;
	uint64_t x652 = 11024115436723LLU;
	volatile int32_t t156 = 743166930;

    t156 = (x649<=((x650^x651)/x652));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x653 = 31;
	int16_t x654 = INT16_MAX;
	int32_t x655 = -1;
	int32_t x656 = -1;

    t157 = (x653<=((x654^x655)/x656));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x657 = UINT64_MAX;
	int32_t x658 = INT32_MAX;
	uint16_t x659 = 32U;
	int64_t x660 = -1LL;
	int32_t t158 = -8233;

    t158 = (x657<=((x658^x659)/x660));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t x663 = -4;
	int64_t x664 = 721LL;
	static int32_t t159 = 10546;

    t159 = (x661<=((x662^x663)/x664));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x665 = -1;
	int32_t x666 = INT32_MAX;
	int32_t x667 = INT32_MAX;
	volatile int8_t x668 = 44;
	volatile int32_t t160 = -43864781;

    t160 = (x665<=((x666^x667)/x668));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x669 = -1LL;
	int32_t x670 = INT32_MIN;
	static uint64_t x671 = 21991LLU;
	volatile int8_t x672 = 1;

    t161 = (x669<=((x670^x671)/x672));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x674 = UINT32_MAX;
	volatile int64_t x675 = INT64_MIN;

    t162 = (x673<=((x674^x675)/x676));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x677 = 0U;
	int8_t x678 = -1;
	int8_t x679 = -11;
	uint32_t x680 = 162U;
	static int32_t t163 = -25;

    t163 = (x677<=((x678^x679)/x680));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x681 = INT16_MAX;
	int8_t x682 = 0;
	static uint16_t x683 = UINT16_MAX;
	volatile int32_t t164 = 7797159;

    t164 = (x681<=((x682^x683)/x684));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x685 = INT8_MIN;
	volatile int32_t x686 = INT32_MAX;
	static int32_t x687 = -1;
	volatile uint32_t x688 = UINT32_MAX;
	int32_t t165 = 1934;

    t165 = (x685<=((x686^x687)/x688));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int32_t x689 = -808606999;
	int32_t x690 = -1;
	uint32_t x691 = 918U;
	volatile int32_t t166 = 0;

    t166 = (x689<=((x690^x691)/x692));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x693 = -1;
	int32_t t167 = 1;

    t167 = (x693<=((x694^x695)/x696));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x697 = 4463;
	int16_t x698 = -1;
	uint64_t x699 = 74486LLU;
	volatile int32_t t168 = 1;

    t168 = (x697<=((x698^x699)/x700));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint8_t x701 = 0U;
	static int16_t x703 = 64;

    t169 = (x701<=((x702^x703)/x704));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x706 = UINT8_MAX;
	volatile uint8_t x707 = 1U;
	int16_t x708 = INT16_MIN;
	int32_t t170 = -11597;

    t170 = (x705<=((x706^x707)/x708));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int8_t x709 = INT8_MIN;
	volatile int64_t x710 = INT64_MIN;
	uint32_t x711 = 87873U;
	int64_t x712 = -930796495633LL;
	volatile int32_t t171 = -7757;

    t171 = (x709<=((x710^x711)/x712));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x713 = UINT16_MAX;
	volatile int8_t x714 = -5;
	int16_t x715 = INT16_MIN;
	static int64_t x716 = -1LL;
	volatile int32_t t172 = 7;

    t172 = (x713<=((x714^x715)/x716));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x717 = 1730;
	static int16_t x719 = INT16_MAX;
	static int32_t x720 = -890059;
	int32_t t173 = 23281;

    t173 = (x717<=((x718^x719)/x720));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x721 = INT32_MIN;
	int16_t x723 = 1794;
	volatile int16_t x724 = -1;
	int32_t t174 = 1;

    t174 = (x721<=((x722^x723)/x724));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x725 = 0;
	int8_t x726 = 1;
	uint16_t x727 = 1U;

    t175 = (x725<=((x726^x727)/x728));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x729 = UINT32_MAX;
	volatile uint64_t x730 = 198802LLU;
	uint16_t x731 = UINT16_MAX;
	static int32_t x732 = -1;
	static volatile int32_t t176 = 1885141;

    t176 = (x729<=((x730^x731)/x732));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int64_t x733 = -1LL;
	uint64_t x734 = UINT64_MAX;
	int64_t x735 = INT64_MIN;
	int8_t x736 = -1;

    t177 = (x733<=((x734^x735)/x736));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x737 = INT16_MAX;
	volatile int64_t x738 = INT64_MIN;
	int8_t x740 = INT8_MIN;
	int32_t t178 = -462406;

    t178 = (x737<=((x738^x739)/x740));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int32_t x741 = INT32_MIN;
	int32_t x742 = INT32_MAX;
	static uint16_t x743 = 145U;
	int16_t x744 = -960;
	int32_t t179 = -4578087;

    t179 = (x741<=((x742^x743)/x744));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x746 = UINT32_MAX;
	volatile uint16_t x747 = 14U;
	int32_t x748 = -2;
	int32_t t180 = 425374;

    t180 = (x745<=((x746^x747)/x748));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x749 = INT32_MIN;
	static int8_t x750 = INT8_MAX;
	static int8_t x751 = -1;
	int32_t x752 = INT32_MIN;
	volatile int32_t t181 = 2;

    t181 = (x749<=((x750^x751)/x752));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile int16_t x753 = INT16_MIN;
	uint8_t x754 = UINT8_MAX;
	uint64_t x755 = 94LLU;
	int64_t x756 = -1LL;

    t182 = (x753<=((x754^x755)/x756));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x757 = INT64_MIN;
	int8_t x758 = INT8_MAX;
	int64_t x759 = -1LL;
	static uint32_t x760 = UINT32_MAX;
	int32_t t183 = -84;

    t183 = (x757<=((x758^x759)/x760));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int32_t x761 = INT32_MIN;
	volatile uint8_t x762 = 1U;
	static int16_t x763 = INT16_MIN;
	volatile int32_t x764 = 30;
	volatile int32_t t184 = 1;

    t184 = (x761<=((x762^x763)/x764));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x765 = INT8_MIN;
	static int16_t x766 = INT16_MIN;
	int32_t t185 = -29762;

    t185 = (x765<=((x766^x767)/x768));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint16_t x769 = UINT16_MAX;
	int8_t x770 = -1;
	int8_t x772 = INT8_MIN;
	static int32_t t186 = 117434;

    t186 = (x769<=((x770^x771)/x772));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x774 = -20012LL;
	int16_t x775 = INT16_MIN;
	uint8_t x776 = 51U;

    t187 = (x773<=((x774^x775)/x776));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x778 = INT64_MIN;
	volatile uint16_t x780 = UINT16_MAX;
	volatile int32_t t188 = 3934;

    t188 = (x777<=((x778^x779)/x780));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x781 = INT8_MIN;
	volatile int8_t x783 = INT8_MAX;

    t189 = (x781<=((x782^x783)/x784));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x785 = 170;
	static uint32_t x786 = UINT32_MAX;
	static int8_t x787 = INT8_MAX;
	int8_t x788 = INT8_MIN;
	volatile int32_t t190 = 199943417;

    t190 = (x785<=((x786^x787)/x788));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x789 = 0LL;
	int16_t x791 = -1;
	uint64_t x792 = UINT64_MAX;

    t191 = (x789<=((x790^x791)/x792));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int64_t x794 = INT64_MIN;
	static int32_t x795 = INT32_MIN;

    t192 = (x793<=((x794^x795)/x796));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x797 = 0;
	int64_t x798 = INT64_MIN;
	uint16_t x799 = 8U;
	static int8_t x800 = INT8_MAX;
	int32_t t193 = 256248;

    t193 = (x797<=((x798^x799)/x800));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int64_t x803 = INT64_MIN;
	int64_t x804 = -1LL;
	volatile int32_t t194 = -11050896;

    t194 = (x801<=((x802^x803)/x804));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x806 = 1;
	int64_t x807 = INT64_MIN;
	int32_t t195 = 213225676;

    t195 = (x805<=((x806^x807)/x808));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x809 = 73124LLU;
	uint64_t x811 = UINT64_MAX;
	static int16_t x812 = -1;
	volatile int32_t t196 = 426780;

    t196 = (x809<=((x810^x811)/x812));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x813 = INT32_MIN;
	uint8_t x815 = UINT8_MAX;
	uint64_t x816 = 111276267LLU;

    t197 = (x813<=((x814^x815)/x816));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x817 = 5141U;
	int16_t x818 = 1606;
	int64_t x820 = INT64_MAX;
	int32_t t198 = -3104182;

    t198 = (x817<=((x818^x819)/x820));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x822 = INT8_MIN;
	uint8_t x823 = UINT8_MAX;
	uint64_t x824 = 15522681751711400LLU;
	volatile int32_t t199 = 1375;

    t199 = (x821<=((x822^x823)/x824));

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

