
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

static int32_t x1 = -205098762;
static uint64_t x3 = 1565701421724191LLU;
int8_t x5 = INT8_MIN;
static int16_t x10 = INT16_MAX;
int32_t x23 = INT32_MIN;
int32_t x25 = INT32_MIN;
int8_t x26 = 2;
uint64_t x32 = UINT64_MAX;
volatile int64_t x33 = -400871LL;
volatile uint64_t t9 = 4028780243562LLU;
static uint64_t x68 = 31013088573LLU;
static volatile uint64_t t16 = 685524LLU;
int32_t x76 = -1;
int32_t t17 = 0;
volatile int16_t x84 = -1;
int64_t x87 = -19958343625LL;
int64_t t20 = -6LL;
int16_t x92 = INT16_MAX;
int64_t x102 = INT64_MIN;
int8_t x106 = -1;
int8_t x109 = INT8_MIN;
static volatile int64_t x111 = INT64_MAX;
int64_t t25 = -862633629667LL;
int16_t x115 = -1;
volatile int16_t x126 = -8;
static volatile int64_t x132 = -1LL;
int64_t t30 = -200501LL;
uint8_t x133 = 10U;
int64_t t32 = 1LL;
volatile int32_t t33 = -892940;
volatile int32_t t34 = 6880;
int8_t x152 = -34;
int64_t x163 = 857453266846LL;
volatile int16_t x169 = INT16_MAX;
static volatile int64_t t40 = 2152LL;
int8_t x173 = INT8_MIN;
static uint32_t x181 = 680456663U;
static volatile int8_t x182 = -1;
static int32_t x183 = -53752;
int64_t x185 = -1LL;
int8_t x186 = 16;
volatile int8_t x191 = INT8_MIN;
uint8_t x194 = 19U;
uint64_t t46 = 11460700333LLU;
int32_t x200 = INT32_MIN;
int64_t t47 = -12975303522211LL;
int64_t x221 = 115625436441764807LL;
volatile int8_t x222 = -1;
uint32_t t53 = 51714U;
int32_t x229 = -1;
int16_t x243 = INT16_MIN;
static volatile int32_t x249 = INT32_MAX;
volatile uint32_t x250 = UINT32_MAX;
int64_t x253 = INT64_MIN;
volatile int16_t x255 = -3;
int8_t x256 = -1;
int8_t x257 = INT8_MAX;
static int8_t x260 = INT8_MIN;
volatile int64_t x261 = 178024599561441LL;
static int64_t x263 = INT64_MIN;
volatile int16_t x264 = INT16_MIN;
uint16_t x267 = 969U;
int32_t x277 = INT32_MIN;
uint16_t x278 = UINT16_MAX;
volatile int8_t x280 = INT8_MIN;
int8_t x288 = INT8_MAX;
uint32_t x289 = 93U;
int8_t x290 = INT8_MIN;
int64_t x294 = -758885470LL;
static uint32_t x295 = 15511U;
uint32_t x296 = 29U;
volatile int64_t t68 = 4LL;
static volatile int16_t x298 = -3;
int16_t x306 = INT16_MAX;
static uint32_t x307 = 3329U;
static uint32_t t71 = 718071654U;
static volatile uint8_t x310 = 3U;
int32_t x311 = -1;
int16_t x314 = 0;
int8_t x316 = INT8_MIN;
uint32_t t73 = 83U;
int32_t t75 = -1011393009;
int64_t t76 = -2184003497096929918LL;
uint8_t x332 = 108U;
int16_t x335 = INT16_MAX;
volatile int32_t t78 = -71543;
int8_t x338 = -1;
volatile uint32_t x352 = UINT32_MAX;
uint64_t t83 = 4586647977297656543LLU;
volatile uint64_t t84 = 3227552LLU;
int32_t x376 = INT32_MIN;
static int64_t x380 = 273813923909LL;
uint8_t x383 = 12U;
int16_t x399 = -14;
int8_t x401 = -1;
volatile uint16_t x408 = 6858U;
int32_t t94 = 17095046;
static int8_t x411 = INT8_MAX;
int32_t t96 = 83449589;
volatile int32_t x426 = -104869588;
int16_t x427 = INT16_MIN;
int8_t x432 = INT8_MIN;
static int32_t x440 = -4242046;
int64_t x441 = INT64_MIN;
volatile int16_t x444 = INT16_MIN;
volatile int8_t x447 = INT8_MAX;
int16_t x451 = -1;
static uint16_t x463 = 2U;
static int8_t x468 = -1;
static int64_t t109 = 1025290LL;
volatile int8_t x470 = INT8_MIN;
volatile uint64_t t110 = 360089639373344LLU;
uint32_t x474 = 3306468U;
volatile int64_t t111 = 23LL;
int16_t x480 = -1;
uint8_t x482 = 95U;
static volatile int16_t x485 = 105;
uint8_t x488 = 1U;
volatile int8_t x492 = INT8_MIN;
int32_t x510 = INT32_MAX;
volatile int64_t t120 = 114062465509LL;
volatile int8_t x515 = INT8_MIN;
volatile int32_t t121 = 13244086;
int8_t x521 = -1;
volatile uint8_t x530 = 7U;
int8_t x543 = -2;
volatile int64_t t128 = 2064803760LL;
static int16_t x546 = -1;
int64_t t130 = 1548133LL;
int32_t t131 = -33;
static uint32_t x557 = 20891U;
uint32_t t132 = 534035U;
int64_t x568 = INT64_MIN;
volatile int32_t x570 = INT32_MAX;
int32_t x572 = -1;
uint64_t x574 = 4180LLU;
uint64_t x577 = UINT64_MAX;
uint16_t x578 = 2U;
volatile int16_t x580 = -1;
uint16_t x583 = 19027U;
int32_t x586 = INT32_MIN;
int64_t x600 = -736LL;
volatile int64_t t141 = 0LL;
int8_t x604 = INT8_MAX;
volatile uint32_t t142 = 937451U;
int32_t x607 = -1;
volatile int32_t t143 = 19297;
int16_t x617 = INT16_MAX;
uint32_t x619 = 871U;
int32_t x624 = -206;
int32_t t147 = -13438449;
int8_t x628 = -1;
static uint32_t x630 = 62271118U;
uint64_t x634 = 171206475LLU;
volatile uint32_t x638 = 1100U;
volatile uint8_t x643 = 1U;
volatile int16_t x649 = -1;
int32_t x651 = -1;
uint64_t x653 = 993121457455LLU;
volatile int64_t x655 = -1LL;
int16_t x656 = INT16_MAX;
volatile int32_t x657 = INT32_MAX;
int32_t x662 = INT32_MAX;
uint8_t x664 = 5U;
uint32_t x674 = 223512U;
int32_t x687 = 214324;
static int64_t x689 = -1LL;
int16_t x692 = INT16_MIN;
static volatile int64_t t163 = 55689396567588630LL;
int16_t x693 = -108;
volatile int64_t t164 = 4866245377LL;
int32_t t165 = -563;
uint32_t x702 = 66030U;
uint32_t x706 = 14969893U;
int32_t x713 = -447783245;
int8_t x714 = INT8_MIN;
static volatile int8_t x730 = INT8_MIN;
static int64_t t173 = -1439808702173LL;
int16_t x734 = -1;
volatile int8_t x736 = -53;
volatile uint32_t x739 = 141823U;
volatile int64_t t176 = -3375695755714928690LL;
uint64_t x746 = UINT64_MAX;
static int16_t x748 = -7181;
volatile int32_t t178 = -23533;
int32_t x763 = INT32_MAX;
int64_t x767 = INT64_MIN;
int32_t x770 = INT32_MIN;
int16_t x773 = -1;
volatile int16_t x776 = INT16_MAX;
int32_t t183 = -5979628;
int16_t x780 = INT16_MAX;
uint16_t x790 = UINT16_MAX;
int8_t x792 = -1;
uint64_t t188 = 63816367905555660LLU;
volatile uint16_t x799 = UINT16_MAX;
int32_t x803 = 2036318;
int32_t x807 = INT32_MIN;
static uint64_t x815 = 1467259603LLU;
int32_t x816 = -20174;
static volatile uint64_t t193 = 5LLU;
static uint16_t x823 = 27U;
static volatile int64_t x825 = -1679238788418713038LL;
int32_t x830 = 203402;
uint64_t t197 = 190LLU;
int16_t x839 = INT16_MAX;
volatile uint64_t t198 = 55171LLU;


void f0(void) {
    	static int32_t x2 = -1;
	uint16_t x4 = UINT16_MAX;
	uint64_t t0 = 493774797411554LLU;

    t0 = (x1%((x2/x3)+x4));

    if (t0 != 42466LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x6 = 56033091;
	int16_t x7 = INT16_MAX;
	static int8_t x8 = INT8_MIN;
	volatile int32_t t1 = -132977102;

    t1 = (x5%((x6/x7)+x8));

    if (t1 != -128) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x9 = -1;
	volatile uint16_t x11 = UINT16_MAX;
	volatile int64_t x12 = INT64_MIN;
	static int64_t t2 = -62443972747323276LL;

    t2 = (x9%((x10/x11)+x12));

    if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = 2;
	volatile uint64_t x14 = 7548537LLU;
	int64_t x15 = INT64_MIN;
	volatile int32_t x16 = INT32_MAX;
	volatile uint64_t t3 = 8956LLU;

    t3 = (x13%((x14/x15)+x16));

    if (t3 != 2LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int32_t x17 = INT32_MIN;
	int32_t x18 = -619296864;
	int8_t x19 = INT8_MIN;
	int16_t x20 = INT16_MAX;
	volatile int32_t t4 = 2;

    t4 = (x17%((x18/x19)+x20));

    if (t4 != -4233528) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint8_t x21 = 1U;
	uint32_t x22 = 1857578U;
	volatile int8_t x24 = -34;
	static volatile uint32_t t5 = 6U;

    t5 = (x21%((x22/x23)+x24));

    if (t5 != 1U) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile uint8_t x27 = 114U;
	int32_t x28 = -115;
	int32_t t6 = -1;

    t6 = (x25%((x26/x27)+x28));

    if (t6 != -98) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = -1;
	int16_t x30 = -4;
	static int64_t x31 = -1LL;
	volatile uint64_t t7 = 3284LLU;

    t7 = (x29%((x30/x31)+x32));

    if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint32_t x34 = 2U;
	uint64_t x35 = 1650423316412LLU;
	int32_t x36 = INT32_MIN;
	volatile uint64_t t8 = 3741930LLU;

    t8 = (x33%((x34/x35)+x36));

    if (t8 != 2147082777LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x37 = -1982439694LL;
	int64_t x38 = INT64_MIN;
	uint64_t x39 = 3444041LLU;
	int16_t x40 = INT16_MIN;

    t9 = (x37%((x38/x39)+x40));

    if (t9 != 223731186722LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint32_t x41 = UINT32_MAX;
	volatile int8_t x42 = INT8_MIN;
	volatile int64_t x43 = -43613326779LL;
	uint32_t x44 = UINT32_MAX;
	volatile int64_t t10 = 409919886020LL;

    t10 = (x41%((x42/x43)+x44));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = -36;
	volatile int32_t x46 = 376543796;
	uint32_t x47 = 2661416U;
	volatile int32_t x48 = INT32_MIN;
	uint32_t t11 = 50175928U;

    t11 = (x45%((x46/x47)+x48));

    if (t11 != 2147483471U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x49 = UINT16_MAX;
	int64_t x50 = -129986739LL;
	static int64_t x51 = INT64_MIN;
	int64_t x52 = 36826724LL;
	static volatile int64_t t12 = 40767206517LL;

    t12 = (x49%((x50/x51)+x52));

    if (t12 != 65535LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x57 = INT8_MAX;
	static int8_t x58 = -1;
	static uint32_t x59 = 6U;
	int8_t x60 = 1;
	uint32_t t13 = 1038592132U;

    t13 = (x57%((x58/x59)+x60));

    if (t13 != 127U) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x61 = INT16_MIN;
	int8_t x62 = INT8_MIN;
	static uint32_t x63 = 4U;
	static int32_t x64 = INT32_MIN;
	uint32_t t14 = 20711U;

    t14 = (x61%((x62/x63)+x64));

    if (t14 != 1073709088U) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x65 = INT64_MIN;
	int64_t x66 = INT64_MIN;
	int8_t x67 = INT8_MAX;
	volatile uint64_t t15 = 1876LLU;

    t15 = (x65%((x66/x67)+x68));

    if (t15 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint64_t x69 = UINT64_MAX;
	static int8_t x70 = -1;
	uint8_t x71 = UINT8_MAX;
	int64_t x72 = INT64_MIN;

    t16 = (x69%((x70/x71)+x72));

    if (t16 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile uint8_t x73 = 0U;
	int8_t x74 = -1;
	int16_t x75 = -582;

    t17 = (x73%((x74/x75)+x76));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x77 = INT16_MIN;
	int32_t x78 = INT32_MIN;
	int8_t x79 = INT8_MIN;
	static int8_t x80 = -1;
	int32_t t18 = -1386974;

    t18 = (x77%((x78/x79)+x80));

    if (t18 != -32768) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint16_t x81 = UINT16_MAX;
	int8_t x82 = -1;
	static uint8_t x83 = UINT8_MAX;
	int32_t t19 = -12913904;

    t19 = (x81%((x82/x83)+x84));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x85 = 6688U;
	int64_t x86 = 55059902636853LL;
	int16_t x88 = -589;

    t20 = (x85%((x86/x87)+x88));

    if (t20 != 3341LL) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x89 = -1LL;
	uint8_t x90 = UINT8_MAX;
	static int32_t x91 = -94775608;
	int64_t t21 = -429217868879LL;

    t21 = (x89%((x90/x91)+x92));

    if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint16_t x93 = 3946U;
	static uint8_t x94 = UINT8_MAX;
	uint8_t x95 = UINT8_MAX;
	uint8_t x96 = 28U;
	int32_t t22 = -7902;

    t22 = (x93%((x94/x95)+x96));

    if (t22 != 2) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x101 = INT8_MIN;
	static int32_t x103 = 10553604;
	static int64_t x104 = INT64_MAX;
	int64_t t23 = -122167054848202LL;

    t23 = (x101%((x102/x103)+x104));

    if (t23 != -128LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x105 = -2670039238644518198LL;
	int16_t x107 = INT16_MIN;
	static int32_t x108 = -143;
	volatile int64_t t24 = -209405990201952614LL;

    t24 = (x105%((x106/x107)+x108));

    if (t24 != -29LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int32_t x110 = 2125;
	int32_t x112 = INT32_MIN;

    t25 = (x109%((x110/x111)+x112));

    if (t25 != -128LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x113 = INT8_MIN;
	int16_t x114 = -5278;
	int16_t x116 = INT16_MIN;
	int32_t t26 = -256123;

    t26 = (x113%((x114/x115)+x116));

    if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x117 = INT64_MAX;
	int32_t x118 = -731966897;
	int8_t x119 = INT8_MAX;
	volatile int32_t x120 = -1;
	volatile int64_t t27 = 3281624469906LL;

    t27 = (x117%((x118/x119)+x120));

    if (t27 != 3731821LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x121 = 6U;
	static int64_t x122 = INT64_MAX;
	int8_t x123 = INT8_MIN;
	volatile int32_t x124 = INT32_MAX;
	int64_t t28 = 1LL;

    t28 = (x121%((x122/x123)+x124));

    if (t28 != 6LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile uint32_t x125 = UINT32_MAX;
	int32_t x127 = -1986;
	uint32_t x128 = 4312U;
	uint32_t t29 = 2532409U;

    t29 = (x125%((x126/x127)+x128));

    if (t29 != 4007U) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int8_t x129 = 22;
	volatile int64_t x130 = INT64_MIN;
	volatile int8_t x131 = INT8_MAX;

    t30 = (x129%((x130/x131)+x132));

    if (t30 != 22LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint8_t x134 = UINT8_MAX;
	uint8_t x135 = 72U;
	int16_t x136 = -1;
	static int32_t t31 = -355;

    t31 = (x133%((x134/x135)+x136));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x137 = -1;
	static int32_t x138 = INT32_MIN;
	int64_t x139 = INT64_MAX;
	int8_t x140 = INT8_MAX;

    t32 = (x137%((x138/x139)+x140));

    if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x141 = 16U;
	static int32_t x142 = -1;
	int32_t x143 = 2046;
	int32_t x144 = -829443;

    t33 = (x141%((x142/x143)+x144));

    if (t33 != 16) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x145 = INT8_MIN;
	static int32_t x146 = INT32_MAX;
	int32_t x147 = 212496728;
	uint8_t x148 = 116U;

    t34 = (x145%((x146/x147)+x148));

    if (t34 != -2) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x149 = INT8_MIN;
	static int64_t x150 = -2131265LL;
	uint8_t x151 = UINT8_MAX;
	int64_t t35 = -57688553284248LL;

    t35 = (x149%((x150/x151)+x152));

    if (t35 != -128LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x153 = 1014791579299LLU;
	int64_t x154 = INT64_MIN;
	static uint64_t x155 = 39318LLU;
	int32_t x156 = -19078352;
	uint64_t t36 = 322LLU;

    t36 = (x153%((x154/x155)+x156));

    if (t36 != 1014791579299LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x157 = INT16_MAX;
	static int32_t x158 = INT32_MAX;
	int16_t x159 = 13;
	uint64_t x160 = 7477678326LLU;
	volatile uint64_t t37 = 56504320703958LLU;

    t37 = (x157%((x158/x159)+x160));

    if (t37 != 32767LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x161 = 3623U;
	uint32_t x162 = UINT32_MAX;
	uint16_t x164 = 3495U;
	int64_t t38 = 456LL;

    t38 = (x161%((x162/x163)+x164));

    if (t38 != 128LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x165 = UINT64_MAX;
	uint64_t x166 = 476LLU;
	int16_t x167 = INT16_MAX;
	volatile int16_t x168 = -1;
	uint64_t t39 = 63409826039LLU;

    t39 = (x165%((x166/x167)+x168));

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x170 = INT64_MAX;
	volatile int32_t x171 = -1;
	int16_t x172 = -1;

    t40 = (x169%((x170/x171)+x172));

    if (t40 != 32767LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x174 = INT16_MIN;
	static int32_t x175 = INT32_MIN;
	int64_t x176 = 165921433853465LL;
	volatile int64_t t41 = -2064214LL;

    t41 = (x173%((x174/x175)+x176));

    if (t41 != -128LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x177 = -25337LL;
	int64_t x178 = -73307939770694LL;
	volatile uint32_t x179 = UINT32_MAX;
	int64_t x180 = INT64_MAX;
	volatile int64_t t42 = -674741989756059LL;

    t42 = (x177%((x178/x179)+x180));

    if (t42 != -25337LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x184 = INT16_MIN;
	static volatile uint32_t t43 = 2031U;

    t43 = (x181%((x182/x183)+x184));

    if (t43 != 680456663U) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int16_t x187 = -1;
	int64_t x188 = -1LL;
	volatile int64_t t44 = -2079956288072LL;

    t44 = (x185%((x186/x187)+x188));

    if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint64_t x189 = 1891LLU;
	static int16_t x190 = INT16_MAX;
	uint64_t x192 = 238728LLU;
	volatile uint64_t t45 = 130711622251956270LLU;

    t45 = (x189%((x190/x191)+x192));

    if (t45 != 1891LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x193 = INT16_MIN;
	uint64_t x195 = 1LLU;
	int64_t x196 = -1LL;

    t46 = (x193%((x194/x195)+x196));

    if (t46 != 8LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x197 = UINT8_MAX;
	volatile int32_t x198 = INT32_MIN;
	volatile int64_t x199 = INT64_MIN;

    t47 = (x197%((x198/x199)+x200));

    if (t47 != 255LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x201 = -5542LL;
	int16_t x202 = INT16_MIN;
	volatile uint64_t x203 = 1033520LLU;
	volatile uint8_t x204 = 1U;
	volatile uint64_t t48 = 300456958LLU;

    t48 = (x201%((x202/x203)+x204));

    if (t48 != 17848462612521LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x205 = INT8_MIN;
	int32_t x206 = -1;
	static int16_t x207 = -1;
	int64_t x208 = INT64_MIN;
	volatile int64_t t49 = -503299476LL;

    t49 = (x205%((x206/x207)+x208));

    if (t49 != -128LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint32_t x209 = UINT32_MAX;
	static uint64_t x210 = 202801802322122101LLU;
	uint64_t x211 = 49314566LLU;
	int8_t x212 = INT8_MIN;
	volatile uint64_t t50 = 91210442LLU;

    t50 = (x209%((x210/x211)+x212));

    if (t50 != 182555640LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x217 = -1;
	int16_t x218 = INT16_MAX;
	uint64_t x219 = 1233804495345LLU;
	volatile int64_t x220 = INT64_MIN;
	volatile uint64_t t51 = 22779501215543161LLU;

    t51 = (x217%((x218/x219)+x220));

    if (t51 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x223 = -8;
	uint16_t x224 = 43U;
	static int64_t t52 = -55076LL;

    t52 = (x221%((x222/x223)+x224));

    if (t52 != 39LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x225 = -1;
	uint16_t x226 = UINT16_MAX;
	static uint32_t x227 = 812058091U;
	int16_t x228 = INT16_MIN;

    t53 = (x225%((x226/x227)+x228));

    if (t53 != 32767U) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint8_t x230 = UINT8_MAX;
	int32_t x231 = -2;
	static int32_t x232 = -959709;
	volatile int32_t t54 = -6476188;

    t54 = (x229%((x230/x231)+x232));

    if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int8_t x233 = -40;
	volatile int64_t x234 = INT64_MAX;
	static uint64_t x235 = UINT64_MAX;
	uint32_t x236 = 285U;
	uint64_t t55 = 86LLU;

    t55 = (x233%((x234/x235)+x236));

    if (t55 != 186LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint8_t x241 = UINT8_MAX;
	static int64_t x242 = INT64_MAX;
	volatile uint64_t x244 = UINT64_MAX;
	volatile uint64_t t56 = 296805972LLU;

    t56 = (x241%((x242/x243)+x244));

    if (t56 != 255LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x251 = INT32_MIN;
	int16_t x252 = INT16_MAX;
	uint32_t t57 = 1503612509U;

    t57 = (x249%((x250/x251)+x252));

    if (t57 != 32767U) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x254 = INT32_MIN;
	volatile int64_t t58 = 0LL;

    t58 = (x253%((x254/x255)+x256));

    if (t58 != -50LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int8_t x258 = INT8_MIN;
	static int16_t x259 = INT16_MIN;
	volatile int32_t t59 = -16;

    t59 = (x257%((x258/x259)+x260));

    if (t59 != 127) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int32_t x262 = -175929872;
	int64_t t60 = 2LL;

    t60 = (x261%((x262/x263)+x264));

    if (t60 != 9441LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x265 = -1;
	int64_t x266 = -887006237189245341LL;
	static int16_t x268 = -680;
	int64_t t61 = 4097074LL;

    t61 = (x265%((x266/x267)+x268));

    if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x269 = 3U;
	int32_t x270 = -5194;
	uint8_t x271 = 5U;
	int32_t x272 = INT32_MAX;
	int32_t t62 = 63;

    t62 = (x269%((x270/x271)+x272));

    if (t62 != 3) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint32_t x273 = 11213633U;
	int8_t x274 = -1;
	int32_t x275 = -1;
	int16_t x276 = INT16_MIN;
	volatile uint32_t t63 = 212354U;

    t63 = (x273%((x274/x275)+x276));

    if (t63 != 11213633U) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x279 = INT64_MIN;
	int64_t t64 = -347LL;

    t64 = (x277%((x278/x279)+x280));

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x281 = 6436LLU;
	int32_t x282 = 12159768;
	uint16_t x283 = 1U;
	int64_t x284 = -1LL;
	uint64_t t65 = 348712LLU;

    t65 = (x281%((x282/x283)+x284));

    if (t65 != 6436LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x285 = INT8_MIN;
	static int16_t x286 = -1;
	uint16_t x287 = 1U;
	int32_t t66 = 0;

    t66 = (x285%((x286/x287)+x288));

    if (t66 != -2) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x291 = INT32_MAX;
	int64_t x292 = -1LL;
	volatile int64_t t67 = -169084014LL;

    t67 = (x289%((x290/x291)+x292));

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x293 = UINT16_MAX;

    t68 = (x293%((x294/x295)+x296));

    if (t68 != 16639LL) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint16_t x297 = 309U;
	uint64_t x299 = 17LLU;
	uint8_t x300 = 1U;
	volatile uint64_t t69 = 7824LLU;

    t69 = (x297%((x298/x299)+x300));

    if (t69 != 309LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint8_t x301 = 1U;
	int8_t x302 = -1;
	static int8_t x303 = INT8_MAX;
	uint16_t x304 = 16U;
	int32_t t70 = 4;

    t70 = (x301%((x302/x303)+x304));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x305 = -1;
	int8_t x308 = -20;

    t71 = (x305%((x306/x307)+x308));

    if (t71 != 10U) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x309 = INT16_MIN;
	uint32_t x312 = 4130343U;
	uint32_t t72 = 18949847U;

    t72 = (x309%((x310/x311)+x312));

    if (t72 != 3511268U) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x313 = 22U;
	int32_t x315 = -1;

    t73 = (x313%((x314/x315)+x316));

    if (t73 != 22U) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x317 = INT8_MIN;
	static uint16_t x318 = UINT16_MAX;
	volatile uint8_t x319 = UINT8_MAX;
	uint8_t x320 = 28U;
	int32_t t74 = -130541481;

    t74 = (x317%((x318/x319)+x320));

    if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x321 = 0;
	int8_t x322 = 1;
	int8_t x323 = INT8_MIN;
	int8_t x324 = INT8_MAX;

    t75 = (x321%((x322/x323)+x324));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x325 = INT64_MIN;
	volatile int64_t x326 = -3571437546599774LL;
	int8_t x327 = -12;
	volatile int32_t x328 = 983637;

    t76 = (x325%((x326/x327)+x328));

    if (t76 != -134542277953988LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x329 = -1;
	volatile int16_t x330 = -1;
	int8_t x331 = 5;
	static volatile int32_t t77 = -3;

    t77 = (x329%((x330/x331)+x332));

    if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x333 = INT16_MIN;
	int32_t x334 = -1;
	int32_t x336 = INT32_MIN;

    t78 = (x333%((x334/x335)+x336));

    if (t78 != -32768) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x337 = 5997;
	uint32_t x339 = UINT32_MAX;
	int16_t x340 = INT16_MIN;
	uint32_t t79 = 2110U;

    t79 = (x337%((x338/x339)+x340));

    if (t79 != 5997U) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x341 = INT64_MIN;
	int8_t x342 = INT8_MIN;
	int64_t x343 = INT64_MIN;
	int8_t x344 = INT8_MIN;
	int64_t t80 = -1427051116767577LL;

    t80 = (x341%((x342/x343)+x344));

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x345 = 226252724242343LL;
	int64_t x346 = INT64_MAX;
	int16_t x347 = INT16_MIN;
	uint64_t x348 = 2083732LLU;
	uint64_t t81 = 1027898LLU;

    t81 = (x345%((x346/x347)+x348));

    if (t81 != 226252724242343LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x349 = 1406U;
	uint64_t x350 = 3269268404LLU;
	static volatile uint16_t x351 = 4236U;
	volatile uint64_t t82 = 193533LLU;

    t82 = (x349%((x350/x351)+x352));

    if (t82 != 1406LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x353 = -1;
	static uint32_t x354 = UINT32_MAX;
	volatile int16_t x355 = -1;
	volatile uint64_t x356 = 745013143245797LLU;

    t83 = (x353%((x354/x355)+x356));

    if (t83 != 218646943593135LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x357 = INT16_MIN;
	volatile uint64_t x358 = 384904992LLU;
	uint64_t x359 = 1865LLU;
	int32_t x360 = -482082470;

    t84 = (x357%((x358/x359)+x360));

    if (t84 != 481843319LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x361 = INT16_MAX;
	uint64_t x362 = UINT64_MAX;
	static int8_t x363 = INT8_MAX;
	uint16_t x364 = 1271U;
	static uint64_t t85 = 88994450045883679LLU;

    t85 = (x361%((x362/x363)+x364));

    if (t85 != 32767LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x365 = 21674U;
	volatile uint8_t x366 = 7U;
	int8_t x367 = INT8_MIN;
	static int32_t x368 = 31;
	int32_t t86 = 951;

    t86 = (x365%((x366/x367)+x368));

    if (t86 != 5) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x369 = INT8_MIN;
	int8_t x370 = INT8_MIN;
	static int32_t x371 = INT32_MAX;
	int64_t x372 = -1LL;
	static int64_t t87 = 15303573569186LL;

    t87 = (x369%((x370/x371)+x372));

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x373 = 5LL;
	int64_t x374 = 7283546LL;
	uint32_t x375 = 524335557U;
	int64_t t88 = 15402LL;

    t88 = (x373%((x374/x375)+x376));

    if (t88 != 5LL) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int16_t x377 = -2869;
	int32_t x378 = INT32_MIN;
	int8_t x379 = 19;
	int64_t t89 = -197695614521869LL;

    t89 = (x377%((x378/x379)+x380));

    if (t89 != -2869LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x381 = -1;
	int8_t x382 = -1;
	int16_t x384 = -1;
	volatile int32_t t90 = -1;

    t90 = (x381%((x382/x383)+x384));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x385 = INT32_MAX;
	volatile int8_t x386 = -40;
	uint64_t x387 = 6328LLU;
	int16_t x388 = -1;
	uint64_t t91 = 18343345353011138LLU;

    t91 = (x385%((x386/x387)+x388));

    if (t91 != 2147483647LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x397 = -1;
	int16_t x398 = 31;
	uint64_t x400 = 4763136424559LLU;
	volatile uint64_t t92 = 51317310607LLU;

    t92 = (x397%((x398/x399)+x400));

    if (t92 != 2644775258217LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x402 = UINT8_MAX;
	volatile int32_t x403 = 204;
	volatile uint8_t x404 = 1U;
	int32_t t93 = 40;

    t93 = (x401%((x402/x403)+x404));

    if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int32_t x405 = -1;
	static int16_t x406 = -1;
	uint16_t x407 = 8U;

    t94 = (x405%((x406/x407)+x408));

    if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int16_t x409 = INT16_MIN;
	static uint32_t x410 = 20834U;
	int32_t x412 = INT32_MIN;
	volatile uint32_t t95 = 83738U;

    t95 = (x409%((x410/x411)+x412));

    if (t95 != 2147450716U) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x413 = -244118100;
	uint8_t x414 = 18U;
	int8_t x415 = INT8_MIN;
	int32_t x416 = INT32_MIN;

    t96 = (x413%((x414/x415)+x416));

    if (t96 != -244118100) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x417 = -3;
	int8_t x418 = INT8_MIN;
	int32_t x419 = -17323646;
	int32_t x420 = INT32_MAX;
	int32_t t97 = 4;

    t97 = (x417%((x418/x419)+x420));

    if (t97 != -3) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x421 = 63U;
	uint32_t x422 = 12U;
	int64_t x423 = INT64_MIN;
	int32_t x424 = INT32_MIN;
	int64_t t98 = -64175807827988LL;

    t98 = (x421%((x422/x423)+x424));

    if (t98 != 63LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x425 = INT32_MAX;
	static volatile uint32_t x428 = 6408880U;
	uint32_t t99 = 17984799U;

    t99 = (x425%((x426/x427)+x428));

    if (t99 != 5848927U) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint8_t x429 = UINT8_MAX;
	int8_t x430 = -1;
	int8_t x431 = INT8_MIN;
	volatile int32_t t100 = -228432497;

    t100 = (x429%((x430/x431)+x432));

    if (t100 != 127) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x433 = INT32_MAX;
	int8_t x434 = INT8_MIN;
	int32_t x435 = 8;
	uint32_t x436 = UINT32_MAX;
	static uint32_t t101 = 3U;

    t101 = (x433%((x434/x435)+x436));

    if (t101 != 2147483647U) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x437 = -1417LL;
	uint16_t x438 = 3773U;
	uint8_t x439 = 23U;
	int64_t t102 = 28LL;

    t102 = (x437%((x438/x439)+x440));

    if (t102 != -1417LL) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x442 = 200567610612751823LL;
	static uint64_t x443 = 1499375915974431843LLU;
	volatile uint64_t t103 = 188488LLU;

    t103 = (x441%((x442/x443)+x444));

    if (t103 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	static int32_t x445 = INT32_MIN;
	int16_t x446 = INT16_MIN;
	int32_t x448 = -1;
	volatile int32_t t104 = 9696866;

    t104 = (x445%((x446/x447)+x448));

    if (t104 != -170) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint64_t x449 = UINT64_MAX;
	uint64_t x450 = 215LLU;
	static int64_t x452 = INT64_MIN;
	static volatile uint64_t t105 = 1565LLU;

    t105 = (x449%((x450/x451)+x452));

    if (t105 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x453 = INT64_MIN;
	int64_t x454 = 1724477464184645LL;
	volatile int64_t x455 = -130978079LL;
	uint16_t x456 = UINT16_MAX;
	volatile int64_t t106 = 72681LL;

    t106 = (x453%((x454/x455)+x456));

    if (t106 != -12446926LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x457 = INT32_MIN;
	uint64_t x458 = 13LLU;
	static int64_t x459 = INT64_MAX;
	int16_t x460 = -11435;
	uint64_t t107 = 5115015LLU;

    t107 = (x457%((x458/x459)+x460));

    if (t107 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x461 = 117U;
	uint64_t x462 = 10703695LLU;
	int32_t x464 = -218263515;
	volatile uint64_t t108 = 235223LLU;

    t108 = (x461%((x462/x463)+x464));

    if (t108 != 117LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x465 = INT64_MAX;
	uint32_t x466 = 460182U;
	int8_t x467 = INT8_MAX;

    t109 = (x465%((x466/x467)+x468));

    if (t109 != 2743LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x469 = -25;
	int8_t x471 = -1;
	volatile uint64_t x472 = UINT64_MAX;

    t110 = (x469%((x470/x471)+x472));

    if (t110 != 104LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x473 = INT64_MIN;
	int32_t x475 = INT32_MIN;
	int16_t x476 = INT16_MAX;

    t111 = (x473%((x474/x475)+x476));

    if (t111 != -8LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x477 = INT64_MIN;
	int8_t x478 = -1;
	int16_t x479 = INT16_MIN;
	volatile int64_t t112 = 819LL;

    t112 = (x477%((x478/x479)+x480));

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x481 = INT8_MIN;
	int16_t x483 = INT16_MAX;
	int32_t x484 = INT32_MAX;
	static int32_t t113 = -32110364;

    t113 = (x481%((x482/x483)+x484));

    if (t113 != -128) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint16_t x486 = 6U;
	static volatile uint64_t x487 = 6386LLU;
	uint64_t t114 = 1LLU;

    t114 = (x485%((x486/x487)+x488));

    if (t114 != 0LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x489 = INT8_MIN;
	int16_t x490 = INT16_MIN;
	static int32_t x491 = -4;
	volatile int32_t t115 = 5199;

    t115 = (x489%((x490/x491)+x492));

    if (t115 != -128) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int32_t x493 = -852047;
	volatile int8_t x494 = -14;
	int64_t x495 = INT64_MIN;
	int8_t x496 = INT8_MIN;
	int64_t t116 = 199075230LL;

    t116 = (x493%((x494/x495)+x496));

    if (t116 != -79LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x497 = 7608U;
	uint8_t x498 = UINT8_MAX;
	uint8_t x499 = UINT8_MAX;
	int8_t x500 = 11;
	int32_t t117 = 141140428;

    t117 = (x497%((x498/x499)+x500));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x501 = INT8_MIN;
	int32_t x502 = 94;
	int64_t x503 = 919993LL;
	int8_t x504 = 8;
	int64_t t118 = -211302LL;

    t118 = (x501%((x502/x503)+x504));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x505 = 9U;
	uint16_t x506 = UINT16_MAX;
	uint64_t x507 = 15917884LLU;
	int16_t x508 = 6;
	uint64_t t119 = 932LLU;

    t119 = (x505%((x506/x507)+x508));

    if (t119 != 3LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x509 = 0U;
	int64_t x511 = INT64_MAX;
	int64_t x512 = INT64_MAX;

    t120 = (x509%((x510/x511)+x512));

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x513 = INT32_MIN;
	static uint16_t x514 = UINT16_MAX;
	static int8_t x516 = 28;

    t121 = (x513%((x514/x515)+x516));

    if (t121 != -443) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x517 = -1;
	static int32_t x518 = 482;
	int16_t x519 = 10075;
	static int64_t x520 = INT64_MAX;
	volatile int64_t t122 = -1LL;

    t122 = (x517%((x518/x519)+x520));

    if (t122 != -1LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x522 = -1LL;
	int16_t x523 = INT16_MIN;
	volatile uint64_t x524 = 96527818LLU;
	uint64_t t123 = 893066801474LLU;

    t123 = (x521%((x522/x523)+x524));

    if (t123 != 27716989LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile uint16_t x525 = 25U;
	volatile int16_t x526 = -15267;
	static int32_t x527 = INT32_MIN;
	static int8_t x528 = INT8_MIN;
	int32_t t124 = 88609718;

    t124 = (x525%((x526/x527)+x528));

    if (t124 != 25) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int8_t x529 = INT8_MAX;
	static uint16_t x531 = UINT16_MAX;
	volatile int64_t x532 = INT64_MIN;
	volatile int64_t t125 = 1765LL;

    t125 = (x529%((x530/x531)+x532));

    if (t125 != 127LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x533 = -1849;
	int32_t x534 = -1;
	int64_t x535 = INT64_MIN;
	int8_t x536 = -1;
	int64_t t126 = 3045049LL;

    t126 = (x533%((x534/x535)+x536));

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x537 = -13510237;
	uint16_t x538 = 84U;
	volatile int8_t x539 = INT8_MIN;
	int8_t x540 = INT8_MIN;
	static volatile int32_t t127 = -910689;

    t127 = (x537%((x538/x539)+x540));

    if (t127 != -93) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x541 = 0LL;
	int16_t x542 = INT16_MIN;
	int32_t x544 = 29295891;

    t128 = (x541%((x542/x543)+x544));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x545 = INT32_MIN;
	int8_t x547 = INT8_MIN;
	uint32_t x548 = UINT32_MAX;
	uint32_t t129 = 4U;

    t129 = (x545%((x546/x547)+x548));

    if (t129 != 2147483648U) { NG(); } else { ; }
	
}

void f130(void) {
    	static int64_t x549 = 0LL;
	uint16_t x550 = UINT16_MAX;
	uint32_t x551 = 81578484U;
	volatile int16_t x552 = INT16_MAX;

    t130 = (x549%((x550/x551)+x552));

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x553 = 1U;
	int16_t x554 = -675;
	static volatile int8_t x555 = INT8_MIN;
	int32_t x556 = -1;

    t131 = (x553%((x554/x555)+x556));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint32_t x558 = UINT32_MAX;
	uint16_t x559 = 18U;
	int32_t x560 = -10041093;

    t132 = (x557%((x558/x559)+x560));

    if (t132 != 20891U) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x565 = 9;
	int32_t x566 = 16165;
	static uint16_t x567 = UINT16_MAX;
	int64_t t133 = 26095720548969LL;

    t133 = (x565%((x566/x567)+x568));

    if (t133 != 9LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint16_t x569 = UINT16_MAX;
	volatile int16_t x571 = INT16_MAX;
	int32_t t134 = 56974664;

    t134 = (x569%((x570/x571)+x572));

    if (t134 != 65535) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x573 = 17543558429727297LLU;
	static int8_t x575 = INT8_MIN;
	int64_t x576 = INT64_MIN;
	uint64_t t135 = 151798226159620LLU;

    t135 = (x573%((x574/x575)+x576));

    if (t135 != 17543558429727297LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x579 = INT64_MIN;
	volatile uint64_t t136 = 1752047LLU;

    t136 = (x577%((x578/x579)+x580));

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x581 = UINT16_MAX;
	int16_t x582 = -1;
	uint64_t x584 = 103LLU;
	volatile uint64_t t137 = 2049365775710017273LLU;

    t137 = (x581%((x582/x583)+x584));

    if (t137 != 27LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	static int8_t x585 = INT8_MAX;
	static int32_t x587 = INT32_MAX;
	uint16_t x588 = 1733U;
	volatile int32_t t138 = -1708577;

    t138 = (x585%((x586/x587)+x588));

    if (t138 != 127) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x589 = INT64_MIN;
	static volatile uint64_t x590 = 291LLU;
	int32_t x591 = 391;
	volatile int16_t x592 = INT16_MAX;
	uint64_t t139 = 11895715765915LLU;

    t139 = (x589%((x590/x591)+x592));

    if (t139 != 8LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x593 = INT32_MIN;
	uint16_t x594 = 10614U;
	int32_t x595 = -1;
	static int8_t x596 = -1;
	int32_t t140 = -852;

    t140 = (x593%((x594/x595)+x596));

    if (t140 != -5458) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x597 = 0;
	static uint16_t x598 = UINT16_MAX;
	volatile uint8_t x599 = UINT8_MAX;

    t141 = (x597%((x598/x599)+x600));

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x601 = INT32_MIN;
	static uint32_t x602 = UINT32_MAX;
	int16_t x603 = -31;

    t142 = (x601%((x602/x603)+x604));

    if (t142 != 0U) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x605 = INT16_MIN;
	int8_t x606 = INT8_MIN;
	int16_t x608 = INT16_MAX;

    t143 = (x605%((x606/x607)+x608));

    if (t143 != -32768) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x609 = 0;
	int8_t x610 = -1;
	uint16_t x611 = 707U;
	uint16_t x612 = 1U;
	static int32_t t144 = 1004826;

    t144 = (x609%((x610/x611)+x612));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x613 = INT64_MIN;
	static int32_t x614 = INT32_MAX;
	volatile int32_t x615 = -1;
	int64_t x616 = INT64_MAX;
	int64_t t145 = 1305147223014732353LL;

    t145 = (x613%((x614/x615)+x616));

    if (t145 != -2147483648LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x618 = -1;
	int64_t x620 = 66788772LL;
	int64_t t146 = 46016028LL;

    t146 = (x617%((x618/x619)+x620));

    if (t146 != 32767LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static int8_t x621 = -1;
	static int16_t x622 = -1;
	static int8_t x623 = -36;

    t147 = (x621%((x622/x623)+x624));

    if (t147 != -1) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x625 = INT32_MIN;
	volatile int8_t x626 = INT8_MAX;
	int64_t x627 = INT64_MAX;
	static volatile int64_t t148 = 176500LL;

    t148 = (x625%((x626/x627)+x628));

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint64_t x629 = 78674345LLU;
	int32_t x631 = -1;
	int32_t x632 = INT32_MAX;
	uint64_t t149 = 394536LLU;

    t149 = (x629%((x630/x631)+x632));

    if (t149 != 78674345LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int32_t x633 = -1;
	uint32_t x635 = 40565U;
	int64_t x636 = INT64_MIN;
	static volatile uint64_t t150 = 35564042742LLU;

    t150 = (x633%((x634/x635)+x636));

    if (t150 != 9223372036854771587LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x637 = UINT16_MAX;
	int32_t x639 = INT32_MIN;
	static int16_t x640 = 30;
	uint32_t t151 = 25259137U;

    t151 = (x637%((x638/x639)+x640));

    if (t151 != 15U) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint8_t x641 = 0U;
	uint32_t x642 = UINT32_MAX;
	int32_t x644 = -1;
	uint32_t t152 = 96U;

    t152 = (x641%((x642/x643)+x644));

    if (t152 != 0U) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x645 = INT16_MAX;
	volatile int16_t x646 = -1;
	static int64_t x647 = -4004303930242741484LL;
	static uint64_t x648 = UINT64_MAX;
	uint64_t t153 = 1LLU;

    t153 = (x645%((x646/x647)+x648));

    if (t153 != 32767LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static int8_t x650 = INT8_MAX;
	uint16_t x652 = 0U;
	int32_t t154 = 213;

    t154 = (x649%((x650/x651)+x652));

    if (t154 != -1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x654 = 2863U;
	volatile uint64_t t155 = 7182802115174LLU;

    t155 = (x653%((x654/x655)+x656));

    if (t155 != 18271LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x658 = INT8_MIN;
	uint16_t x659 = 23U;
	int8_t x660 = -1;
	volatile int32_t t156 = 3;

    t156 = (x657%((x658/x659)+x660));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x661 = 8091U;
	int64_t x663 = INT64_MIN;
	int64_t t157 = 2292LL;

    t157 = (x661%((x662/x663)+x664));

    if (t157 != 1LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x665 = UINT32_MAX;
	int16_t x666 = INT16_MIN;
	volatile int32_t x667 = INT32_MIN;
	int64_t x668 = INT64_MIN;
	static volatile int64_t t158 = -28LL;

    t158 = (x665%((x666/x667)+x668));

    if (t158 != 4294967295LL) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x669 = INT64_MIN;
	int16_t x670 = INT16_MIN;
	int64_t x671 = INT64_MIN;
	int16_t x672 = 2030;
	volatile int64_t t159 = -133015732LL;

    t159 = (x669%((x670/x671)+x672));

    if (t159 != -708LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x673 = 3585722479758591LLU;
	int16_t x675 = -1;
	uint32_t x676 = 215624491U;
	uint64_t t160 = 1111087444LLU;

    t160 = (x673%((x674/x675)+x676));

    if (t160 != 181661875LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x681 = 205U;
	int8_t x682 = 4;
	uint8_t x683 = UINT8_MAX;
	int16_t x684 = -1;
	int32_t t161 = -1;

    t161 = (x681%((x682/x683)+x684));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x685 = INT16_MAX;
	static int64_t x686 = -49376295915606581LL;
	static uint8_t x688 = 31U;
	volatile int64_t t162 = 690728915244119LL;

    t162 = (x685%((x686/x687)+x688));

    if (t162 != 32767LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x690 = -1;
	uint32_t x691 = 3497U;

    t163 = (x689%((x690/x691)+x692));

    if (t163 != -1LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint8_t x694 = 27U;
	uint32_t x695 = 15756998U;
	static int64_t x696 = INT64_MIN;

    t164 = (x693%((x694/x695)+x696));

    if (t164 != -108LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x697 = -1;
	int16_t x698 = -597;
	int32_t x699 = INT32_MIN;
	static int32_t x700 = INT32_MAX;

    t165 = (x697%((x698/x699)+x700));

    if (t165 != -1) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x701 = INT32_MIN;
	volatile uint64_t x703 = UINT64_MAX;
	int16_t x704 = -1;
	volatile uint64_t t166 = 5307LLU;

    t166 = (x701%((x702/x703)+x704));

    if (t166 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x705 = -1;
	int8_t x707 = 3;
	int32_t x708 = -1;
	volatile uint32_t t167 = 13U;

    t167 = (x705%((x706/x707)+x708));

    if (t167 != 3599115U) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x709 = INT32_MAX;
	uint16_t x710 = 94U;
	static uint8_t x711 = UINT8_MAX;
	int8_t x712 = -19;
	volatile int32_t t168 = -3633875;

    t168 = (x709%((x710/x711)+x712));

    if (t168 != 2) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x715 = 46195882U;
	uint8_t x716 = 7U;
	uint32_t t169 = 1136U;

    t169 = (x713%((x714/x715)+x716));

    if (t169 != 95U) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x717 = 29;
	uint32_t x718 = UINT32_MAX;
	int16_t x719 = INT16_MAX;
	int64_t x720 = -12982748376384838LL;
	static volatile int64_t t170 = -6902LL;

    t170 = (x717%((x718/x719)+x720));

    if (t170 != 29LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x721 = 0;
	int32_t x722 = -367;
	uint64_t x723 = 91LLU;
	uint64_t x724 = 68136LLU;
	uint64_t t171 = 763563725LLU;

    t171 = (x721%((x722/x723)+x724));

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x725 = -1LL;
	int8_t x726 = INT8_MIN;
	int16_t x727 = 10;
	volatile int64_t x728 = 119957LL;
	volatile int64_t t172 = -2626463184801358626LL;

    t172 = (x725%((x726/x727)+x728));

    if (t172 != -1LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x729 = 27555128852LL;
	static volatile uint16_t x731 = UINT16_MAX;
	int64_t x732 = -1LL;

    t173 = (x729%((x730/x731)+x732));

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x733 = -23237029;
	uint32_t x735 = UINT32_MAX;
	static volatile uint32_t t174 = 108U;

    t174 = (x733%((x734/x735)+x736));

    if (t174 != 4271730267U) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x737 = INT64_MIN;
	int8_t x738 = 0;
	volatile int32_t x740 = INT32_MIN;
	volatile int64_t t175 = -6142214215201LL;

    t175 = (x737%((x738/x739)+x740));

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x741 = -1;
	static uint16_t x742 = 16U;
	static int64_t x743 = 6351246153299LL;
	int8_t x744 = INT8_MAX;

    t176 = (x741%((x742/x743)+x744));

    if (t176 != -1LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x745 = INT8_MIN;
	int64_t x747 = INT64_MIN;
	uint64_t t177 = 160352011LLU;

    t177 = (x745%((x746/x747)+x748));

    if (t177 != 7052LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x753 = INT32_MAX;
	static volatile int8_t x754 = -1;
	volatile int16_t x755 = -1;
	static uint8_t x756 = 119U;

    t178 = (x753%((x754/x755)+x756));

    if (t178 != 7) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x757 = 0;
	uint64_t x758 = UINT64_MAX;
	int32_t x759 = INT32_MAX;
	static volatile int32_t x760 = -51268;
	uint64_t t179 = 8864834475421LLU;

    t179 = (x757%((x758/x759)+x760));

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x761 = 3654523U;
	int8_t x762 = INT8_MAX;
	int64_t x764 = 1469281LL;
	volatile int64_t t180 = -1001757590855172LL;

    t180 = (x761%((x762/x763)+x764));

    if (t180 != 715961LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x765 = INT32_MIN;
	static uint8_t x766 = 0U;
	int16_t x768 = INT16_MIN;
	static volatile int64_t t181 = 7299455258LL;

    t181 = (x765%((x766/x767)+x768));

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x769 = 98113U;
	uint32_t x771 = 13928211U;
	int32_t x772 = 627635;
	volatile uint32_t t182 = 18301212U;

    t182 = (x769%((x770/x771)+x772));

    if (t182 != 98113U) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x774 = UINT16_MAX;
	int8_t x775 = INT8_MAX;

    t183 = (x773%((x774/x775)+x776));

    if (t183 != -1) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x777 = INT32_MIN;
	int8_t x778 = INT8_MIN;
	uint64_t x779 = UINT64_MAX;
	volatile uint64_t t184 = 429009241LLU;

    t184 = (x777%((x778/x779)+x780));

    if (t184 != 14LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x781 = 14U;
	int8_t x782 = -1;
	uint8_t x783 = 91U;
	int64_t x784 = -1LL;
	int64_t t185 = 663222LL;

    t185 = (x781%((x782/x783)+x784));

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x785 = INT16_MIN;
	volatile int32_t x786 = INT32_MAX;
	int16_t x787 = 1737;
	uint64_t x788 = 2LLU;
	uint64_t t186 = 536403629LLU;

    t186 = (x785%((x786/x787)+x788));

    if (t186 != 585271LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x789 = 1943237472072911881LLU;
	int8_t x791 = -5;
	volatile uint64_t t187 = 4720LLU;

    t187 = (x789%((x790/x791)+x792));

    if (t187 != 1943237472072911881LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x793 = 6;
	int8_t x794 = -17;
	static int32_t x795 = INT32_MIN;
	static uint64_t x796 = UINT64_MAX;

    t188 = (x793%((x794/x795)+x796));

    if (t188 != 6LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int32_t x797 = 8;
	static volatile uint64_t x798 = UINT64_MAX;
	uint32_t x800 = UINT32_MAX;
	volatile uint64_t t189 = 10060941816620LLU;

    t189 = (x797%((x798/x799)+x800));

    if (t189 != 8LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x801 = 1665597;
	int64_t x802 = 119209239287LL;
	int32_t x804 = -1;
	volatile int64_t t190 = -11825357LL;

    t190 = (x801%((x802/x803)+x804));

    if (t190 != 26477LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x805 = -1LL;
	int64_t x806 = 374465203242161298LL;
	static int64_t x808 = INT64_MAX;
	volatile int64_t t191 = -394242328875LL;

    t191 = (x805%((x806/x807)+x808));

    if (t191 != -1LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x809 = 1;
	uint8_t x810 = 5U;
	int16_t x811 = INT16_MIN;
	static volatile int32_t x812 = INT32_MAX;
	int32_t t192 = -83472391;

    t192 = (x809%((x810/x811)+x812));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x813 = INT64_MAX;
	volatile uint8_t x814 = UINT8_MAX;

    t193 = (x813%((x814/x815)+x816));

    if (t193 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x821 = 9629541;
	uint32_t x822 = UINT32_MAX;
	int64_t x824 = 880144384874LL;
	static int64_t t194 = -11598258LL;

    t194 = (x821%((x822/x823)+x824));

    if (t194 != 9629541LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x826 = 998U;
	uint64_t x827 = UINT64_MAX;
	uint16_t x828 = 3U;
	volatile uint64_t t195 = 7879143187508267LLU;

    t195 = (x825%((x826/x827)+x828));

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int16_t x829 = INT16_MAX;
	int64_t x831 = -14890LL;
	static int16_t x832 = INT16_MIN;
	static volatile int64_t t196 = 832LL;

    t196 = (x829%((x830/x831)+x832));

    if (t196 != 32767LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x833 = 145920586162175LLU;
	int16_t x834 = -939;
	static uint32_t x835 = UINT32_MAX;
	volatile int16_t x836 = 978;

    t197 = (x833%((x834/x835)+x836));

    if (t197 != 545LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x837 = -3884;
	static uint64_t x838 = UINT64_MAX;
	static int64_t x840 = -1LL;

    t198 = (x837%((x838/x839)+x840));

    if (t198 != 28899LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x841 = UINT64_MAX;
	volatile int64_t x842 = -1LL;
	uint8_t x843 = 8U;
	uint8_t x844 = UINT8_MAX;
	static uint64_t t199 = 366181439529938LLU;

    t199 = (x841%((x842/x843)+x844));

    if (t199 != 0LLU) { NG(); } else { ; }
	
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

