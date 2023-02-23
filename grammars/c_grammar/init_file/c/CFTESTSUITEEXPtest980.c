
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

uint8_t x3 = 84U;
volatile int64_t x11 = -15288984LL;
volatile uint16_t x20 = 4098U;
int32_t x31 = INT32_MIN;
uint8_t x34 = UINT8_MAX;
volatile int32_t t7 = -93;
int64_t x40 = INT64_MAX;
int8_t x44 = INT8_MAX;
int32_t t9 = 12;
uint16_t x45 = 9U;
int32_t x47 = INT32_MAX;
volatile uint32_t t10 = 15U;
int64_t x50 = INT64_MIN;
static volatile int64_t t11 = 356338015LL;
uint8_t x53 = 6U;
volatile int32_t t13 = 7686191;
volatile int64_t x79 = -1LL;
static int64_t t17 = 453663708925LL;
int8_t x81 = 2;
uint8_t x82 = 1U;
int16_t x86 = -83;
int64_t x88 = INT64_MAX;
int8_t x93 = INT8_MIN;
int64_t t22 = -1211124LL;
int16_t x101 = 31;
int16_t x105 = INT16_MIN;
int8_t x106 = 0;
static uint16_t x112 = 12U;
int16_t x113 = 9;
volatile uint8_t x114 = UINT8_MAX;
uint32_t t26 = 1683086U;
static int16_t x120 = INT16_MIN;
volatile uint64_t x127 = 203172957LLU;
uint8_t x128 = 0U;
uint32_t t30 = 683U;
static uint64_t x153 = UINT64_MAX;
static uint16_t x162 = UINT16_MAX;
static volatile uint64_t x179 = 2111668015337053391LLU;
int8_t x183 = INT8_MIN;
int8_t x190 = INT8_MIN;
int8_t x192 = INT8_MIN;
int32_t x200 = INT32_MAX;
uint32_t x201 = UINT32_MAX;
int32_t t49 = -369443;
static volatile uint32_t x209 = 151U;
int64_t x210 = 408704576LL;
static uint32_t x215 = 580195U;
int8_t x231 = INT8_MIN;
static uint32_t x241 = UINT32_MAX;
int32_t x243 = -1;
volatile int8_t x244 = INT8_MAX;
volatile int64_t t58 = -1057196916385541LL;
static int32_t x259 = INT32_MIN;
int16_t x260 = 60;
int32_t x261 = INT32_MAX;
int8_t x263 = INT8_MIN;
volatile int16_t x266 = INT16_MAX;
int64_t x270 = INT64_MIN;
uint64_t x275 = 1402348175246LLU;
int32_t x276 = INT32_MAX;
uint64_t t64 = 2056063578165250LLU;
uint64_t x277 = UINT64_MAX;
int32_t x278 = INT32_MIN;
static int64_t x283 = INT64_MIN;
volatile int64_t x288 = INT64_MIN;
int32_t x293 = INT32_MIN;
int16_t x296 = -922;
int64_t x303 = INT64_MIN;
int64_t t71 = 126843402793365613LL;
static int64_t x307 = INT64_MIN;
volatile int64_t t73 = 0LL;
int64_t x317 = -1LL;
volatile uint64_t x326 = 1587607202075795284LLU;
int64_t x327 = -58535574566LL;
int64_t t78 = 378LL;
static int64_t x336 = INT64_MIN;
int16_t x337 = INT16_MIN;
int8_t x344 = 1;
volatile uint32_t t81 = 16696733U;
volatile int64_t x350 = 1048541026140LL;
int64_t x353 = INT64_MIN;
uint64_t x355 = UINT64_MAX;
int8_t x358 = -1;
volatile int64_t t86 = -17058152172LL;
volatile int32_t t88 = 122813;
static volatile int16_t x382 = -3;
int32_t x383 = INT32_MIN;
volatile uint16_t x384 = UINT16_MAX;
volatile int32_t t90 = -6634386;
int32_t t94 = -15;
uint16_t x417 = 188U;
int32_t t100 = 326;
int32_t x425 = INT32_MAX;
static volatile uint8_t x426 = 49U;
uint32_t x429 = 2724U;
int16_t x430 = -1;
int32_t t103 = 457;
uint32_t x437 = UINT32_MAX;
volatile uint32_t x438 = 1755068U;
uint32_t x443 = UINT32_MAX;
volatile uint8_t x452 = 13U;
int64_t t107 = 0LL;
int32_t x466 = -87676918;
volatile int64_t t111 = 46027184933942LL;
uint32_t x476 = 15U;
int32_t x480 = INT32_MIN;
int32_t t116 = 3;
static uint8_t x493 = 3U;
volatile int32_t t119 = 7223;
uint32_t x508 = 1228U;
volatile int32_t x510 = 99786;
int16_t x511 = INT16_MIN;
int16_t x514 = INT16_MIN;
volatile uint64_t t123 = 31621086559LLU;
uint64_t x518 = 8353370705597059LLU;
static int64_t x524 = INT64_MIN;
int64_t t125 = -7550764573248073LL;
static int16_t x527 = INT16_MIN;
uint16_t x528 = UINT16_MAX;
volatile int32_t t126 = 335;
int32_t x532 = -1;
int16_t x534 = -1;
int8_t x535 = INT8_MIN;
static uint16_t x536 = 120U;
static int64_t x547 = INT64_MIN;
uint16_t x550 = UINT16_MAX;
int8_t x552 = INT8_MIN;
uint64_t x554 = UINT64_MAX;
uint8_t x567 = 3U;
volatile int64_t t137 = -4054688LL;
uint16_t x574 = 20U;
volatile int64_t t140 = 168858LL;
int32_t x585 = -1;
uint16_t x607 = UINT16_MAX;
static int32_t x612 = 27659115;
uint64_t t147 = 1638LLU;
volatile uint16_t x627 = 19U;
uint16_t x628 = UINT16_MAX;
int64_t x632 = INT64_MIN;
static volatile int64_t t151 = 127231093840496940LL;
uint32_t x634 = 1573512777U;
uint32_t x643 = 2023388988U;
volatile int64_t t154 = -907072LL;
int64_t t155 = -28193292917LL;
int64_t x649 = -1LL;
int64_t x650 = INT64_MIN;
int64_t t158 = 19581161724486473LL;
uint16_t x670 = 1U;
int16_t x678 = INT16_MAX;
uint16_t x680 = UINT16_MAX;
int8_t x685 = 6;
static int8_t x686 = 8;
int64_t x690 = 140196708852LL;
int32_t x692 = INT32_MAX;
volatile int64_t t165 = -9598185371847LL;
int16_t x698 = -1;
static uint64_t t169 = 628492569606605LLU;
int16_t x723 = INT16_MAX;
int32_t x727 = INT32_MIN;
uint32_t x728 = 1104U;
static uint64_t x735 = 3006LLU;
uint64_t t176 = 2395299140269LLU;
int16_t x738 = INT16_MAX;
int16_t x742 = -1;
uint16_t x744 = UINT16_MAX;
int8_t x746 = -1;
volatile int64_t x754 = -1LL;
int64_t x758 = INT64_MIN;
int16_t x762 = INT16_MIN;
int8_t x766 = INT8_MAX;
static int8_t x767 = INT8_MIN;
uint32_t x781 = UINT32_MAX;
uint32_t x785 = 149888731U;
static uint8_t x786 = UINT8_MAX;
int64_t x791 = -17485646166LL;
uint32_t x804 = UINT32_MAX;
int8_t x813 = INT8_MIN;
int64_t x815 = INT64_MIN;
static volatile int32_t x819 = -1;


void f0(void) {
    	int16_t x1 = 5206;
	int16_t x2 = INT16_MIN;
	int32_t x4 = INT32_MIN;
	volatile int32_t t0 = -208;

    t0 = (x1^((x2%x3)^x4));

    if (t0 != 2147478446) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = -2626447814775118142LL;
	volatile uint32_t x6 = 71358U;
	static uint32_t x7 = 6945U;
	uint16_t x8 = 810U;
	volatile int64_t t1 = 81717768LL;

    t1 = (x5^((x6%x7)^x8));

    if (t1 != -2626447814775119204LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MAX;
	int64_t x10 = INT64_MAX;
	uint16_t x12 = UINT16_MAX;
	int64_t t2 = 28LL;

    t2 = (x9^((x10%x11)^x12));

    if (t2 != 5874351LL) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint8_t x17 = 74U;
	int32_t x18 = INT32_MIN;
	int8_t x19 = 9;
	volatile int32_t t3 = 1;

    t3 = (x17^((x18%x19)^x20));

    if (t3 != -4170) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x21 = INT32_MIN;
	static volatile uint16_t x22 = 3395U;
	static uint64_t x23 = 312860431654370LLU;
	volatile int32_t x24 = -1418;
	volatile uint64_t t4 = 629LLU;

    t4 = (x21^((x22%x23)^x24));

    if (t4 != 2147481397LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x25 = INT16_MIN;
	int8_t x26 = 7;
	int32_t x27 = -1;
	volatile int16_t x28 = INT16_MAX;
	int32_t t5 = -244322;

    t5 = (x25^((x26%x27)^x28));

    if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x29 = UINT8_MAX;
	volatile int8_t x30 = INT8_MIN;
	int16_t x32 = INT16_MAX;
	int32_t t6 = 518821;

    t6 = (x29^((x30%x31)^x32));

    if (t6 != -32640) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x33 = -25;
	volatile uint16_t x35 = 11807U;
	int32_t x36 = 53518;

    t7 = (x33^((x34%x35)^x36));

    if (t7 != -53738) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x37 = 3974;
	static int64_t x38 = 7LL;
	static volatile int32_t x39 = -1;
	static volatile int64_t t8 = -682906478LL;

    t8 = (x37^((x38%x39)^x40));

    if (t8 != 9223372036854771833LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x41 = INT8_MIN;
	static int8_t x42 = INT8_MIN;
	volatile int16_t x43 = INT16_MAX;

    t9 = (x41^((x42%x43)^x44));

    if (t9 != 127) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x46 = INT8_MIN;
	uint32_t x48 = 406082382U;

    t10 = (x45^((x46%x47)^x48));

    if (t10 != 3888884935U) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x49 = INT8_MIN;
	volatile int64_t x51 = INT64_MIN;
	volatile int64_t x52 = INT64_MAX;

    t11 = (x49^((x50%x51)^x52));

    if (t11 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x54 = -1LL;
	int16_t x55 = 625;
	int64_t x56 = INT64_MAX;
	volatile int64_t t12 = -292674638636LL;

    t12 = (x53^((x54%x55)^x56));

    if (t12 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint8_t x57 = 109U;
	int8_t x58 = INT8_MAX;
	int32_t x59 = INT32_MIN;
	int32_t x60 = INT32_MIN;

    t13 = (x57^((x58%x59)^x60));

    if (t13 != -2147483630) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x61 = INT64_MAX;
	volatile int32_t x62 = -1;
	int16_t x63 = -1;
	static volatile uint64_t x64 = 33354LLU;
	volatile uint64_t t14 = 210974542171573555LLU;

    t14 = (x61^((x62%x63)^x64));

    if (t14 != 9223372036854742453LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x65 = INT8_MIN;
	uint8_t x66 = 11U;
	int8_t x67 = INT8_MIN;
	int8_t x68 = INT8_MIN;
	volatile int32_t t15 = 142;

    t15 = (x65^((x66%x67)^x68));

    if (t15 != 11) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x73 = 0U;
	volatile uint16_t x74 = 1U;
	static int64_t x75 = INT64_MAX;
	uint8_t x76 = 28U;
	static volatile int64_t t16 = -258108692349681449LL;

    t16 = (x73^((x74%x75)^x76));

    if (t16 != 29LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x77 = 2048367U;
	int16_t x78 = INT16_MIN;
	int8_t x80 = -1;

    t17 = (x77^((x78%x79)^x80));

    if (t17 != -2048368LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x83 = 1083430505LLU;
	uint8_t x84 = UINT8_MAX;
	volatile uint64_t t18 = 103005682344775LLU;

    t18 = (x81^((x82%x83)^x84));

    if (t18 != 252LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint16_t x85 = 15U;
	int8_t x87 = -1;
	volatile int64_t t19 = -56LL;

    t19 = (x85^((x86%x87)^x88));

    if (t19 != 9223372036854775792LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x89 = 17004872923851LLU;
	static uint8_t x90 = 0U;
	static int8_t x91 = -2;
	uint16_t x92 = UINT16_MAX;
	uint64_t t20 = 213069946LLU;

    t20 = (x89^((x90%x91)^x92));

    if (t20 != 17004872860980LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x94 = -59LL;
	int16_t x95 = 4;
	static int64_t x96 = -3651870536485LL;
	static int64_t t21 = 57008370796LL;

    t21 = (x93^((x94%x95)^x96));

    if (t21 != -3651870536538LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x97 = INT16_MIN;
	int64_t x98 = INT64_MIN;
	static uint16_t x99 = UINT16_MAX;
	int16_t x100 = INT16_MAX;

    t22 = (x97^((x98%x99)^x100));

    if (t22 != 32767LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x102 = INT64_MAX;
	int64_t x103 = INT64_MIN;
	int32_t x104 = -1;
	volatile int64_t t23 = 34982LL;

    t23 = (x101^((x102%x103)^x104));

    if (t23 != -9223372036854775777LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x107 = 1050711493085024246LLU;
	static int8_t x108 = INT8_MIN;
	uint64_t t24 = 207444981LLU;

    t24 = (x105^((x106%x107)^x108));

    if (t24 != 32640LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile uint32_t x109 = UINT32_MAX;
	static uint8_t x110 = 8U;
	int32_t x111 = INT32_MAX;
	uint32_t t25 = 78662U;

    t25 = (x109^((x110%x111)^x112));

    if (t25 != 4294967291U) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint32_t x115 = 139U;
	int32_t x116 = 133689228;

    t26 = (x113^((x114%x115)^x116));

    if (t26 != 133689329U) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint16_t x117 = 8838U;
	int32_t x118 = INT32_MIN;
	static volatile int64_t x119 = INT64_MIN;
	int64_t t27 = 547LL;

    t27 = (x117^((x118%x119)^x120));

    if (t27 != 2147459718LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x121 = INT16_MAX;
	int8_t x122 = INT8_MIN;
	int16_t x123 = 5;
	int16_t x124 = INT16_MIN;
	volatile int32_t t28 = 1;

    t28 = (x121^((x122%x123)^x124));

    if (t28 != 2) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x125 = INT32_MIN;
	static int64_t x126 = -420520456484LL;
	uint64_t t29 = 10021484063LLU;

    t29 = (x125^((x126%x127)^x128));

    if (t29 != 18446744071661674207LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x129 = -255;
	uint32_t x130 = UINT32_MAX;
	volatile uint16_t x131 = 47U;
	static int16_t x132 = INT16_MIN;

    t30 = (x129^((x130%x131)^x132));

    if (t30 != 32552U) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x133 = 405941LL;
	uint16_t x134 = UINT16_MAX;
	int64_t x135 = -9LL;
	int32_t x136 = -1;
	int64_t t31 = 20985361833LL;

    t31 = (x133^((x134%x135)^x136));

    if (t31 != -405940LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x137 = 9003;
	int16_t x138 = -1;
	int16_t x139 = INT16_MIN;
	int64_t x140 = INT64_MAX;
	volatile int64_t t32 = 5401LL;

    t32 = (x137^((x138%x139)^x140));

    if (t32 != -9223372036854766805LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile int8_t x141 = 0;
	int8_t x142 = INT8_MAX;
	int32_t x143 = INT32_MIN;
	volatile uint64_t x144 = 909432234862LLU;
	volatile uint64_t t33 = 195028572384LLU;

    t33 = (x141^((x142%x143)^x144));

    if (t33 != 909432234769LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x145 = UINT16_MAX;
	static volatile uint64_t x146 = UINT64_MAX;
	static int64_t x147 = -109LL;
	int32_t x148 = INT32_MIN;
	volatile uint64_t t34 = 4910153LLU;

    t34 = (x145^((x146%x147)^x148));

    if (t34 != 18446744071562133395LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x149 = 62U;
	uint8_t x150 = 4U;
	int32_t x151 = INT32_MAX;
	int64_t x152 = INT64_MIN;
	static volatile int64_t t35 = -77378LL;

    t35 = (x149^((x150%x151)^x152));

    if (t35 != -9223372036854775750LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x154 = UINT8_MAX;
	int64_t x155 = -1LL;
	static int64_t x156 = INT64_MAX;
	volatile uint64_t t36 = 131506896201561140LLU;

    t36 = (x153^((x154%x155)^x156));

    if (t36 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x157 = -1;
	int8_t x158 = -1;
	volatile uint8_t x159 = 1U;
	static int16_t x160 = -1;
	volatile int32_t t37 = -1;

    t37 = (x157^((x158%x159)^x160));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x161 = 10245744066643216LLU;
	int8_t x163 = INT8_MAX;
	uint8_t x164 = 0U;
	volatile uint64_t t38 = 61947LLU;

    t38 = (x161^((x162%x163)^x164));

    if (t38 != 10245744066643219LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x165 = -1;
	static volatile uint16_t x166 = 586U;
	volatile int16_t x167 = INT16_MIN;
	static uint16_t x168 = 10U;
	volatile int32_t t39 = -533745785;

    t39 = (x165^((x166%x167)^x168));

    if (t39 != -577) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x169 = -1;
	static int64_t x170 = 482287655009LL;
	uint16_t x171 = UINT16_MAX;
	int32_t x172 = -1;
	volatile int64_t t40 = -711LL;

    t40 = (x169^((x170%x171)^x172));

    if (t40 != 58214LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x173 = INT32_MAX;
	volatile int16_t x174 = INT16_MIN;
	int16_t x175 = INT16_MAX;
	volatile int16_t x176 = 17;
	volatile int32_t t41 = -1;

    t41 = (x173^((x174%x175)^x176));

    if (t41 != -2147483631) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint64_t x177 = UINT64_MAX;
	uint8_t x178 = 30U;
	volatile int16_t x180 = -1;
	volatile uint64_t t42 = 7973397442847666662LLU;

    t42 = (x177^((x178%x179)^x180));

    if (t42 != 30LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile uint16_t x181 = 26010U;
	int32_t x182 = -87448;
	volatile int32_t x184 = 0;
	int32_t t43 = 82911077;

    t43 = (x181^((x182%x183)^x184));

    if (t43 != -25998) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x185 = INT8_MAX;
	uint64_t x186 = UINT64_MAX;
	volatile int32_t x187 = INT32_MIN;
	int16_t x188 = INT16_MIN;
	volatile uint64_t t44 = 30034LLU;

    t44 = (x185^((x186%x187)^x188));

    if (t44 != 18446744071562100608LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x189 = -4;
	int16_t x191 = -1;
	static int32_t t45 = -13;

    t45 = (x189^((x190%x191)^x192));

    if (t45 != 124) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x193 = 7;
	volatile int64_t x194 = -1LL;
	volatile uint32_t x195 = 91344U;
	int16_t x196 = INT16_MAX;
	int64_t t46 = 6279LL;

    t46 = (x193^((x194%x195)^x196));

    if (t46 != -32761LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x197 = INT16_MAX;
	volatile int64_t x198 = 79LL;
	int64_t x199 = INT64_MIN;
	volatile int64_t t47 = -1409217240423346849LL;

    t47 = (x197^((x198%x199)^x200));

    if (t47 != 2147450959LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x202 = INT16_MIN;
	int64_t x203 = INT64_MIN;
	static int32_t x204 = 19073690;
	static volatile int64_t t48 = -1LL;

    t48 = (x201^((x202%x203)^x204));

    if (t48 != -4275866267LL) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int16_t x205 = -3203;
	volatile uint8_t x206 = 1U;
	uint8_t x207 = UINT8_MAX;
	volatile int32_t x208 = 1869967;

    t49 = (x205^((x206%x207)^x208));

    if (t49 != -1868813) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x211 = -587220091417724278LL;
	static int8_t x212 = INT8_MIN;
	volatile int64_t t50 = -2010153627138986746LL;

    t50 = (x209^((x210%x211)^x212));

    if (t50 != -408704681LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x213 = INT16_MIN;
	static uint32_t x214 = 1138478U;
	int64_t x216 = -1148644216421828173LL;
	static int64_t t51 = -62150292210550LL;

    t51 = (x213^((x214%x215)^x216));

    if (t51 != 1148644216422382968LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x217 = INT64_MAX;
	uint8_t x218 = 3U;
	int16_t x219 = -1;
	int8_t x220 = 0;
	int64_t t52 = INT64_MAX;

    t52 = (x217^((x218%x219)^x220));

    if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x221 = INT64_MIN;
	uint64_t x222 = 51617742LLU;
	static int32_t x223 = INT32_MIN;
	volatile uint16_t x224 = UINT16_MAX;
	volatile uint64_t t53 = 56222LLU;

    t53 = (x221^((x222%x223)^x224));

    if (t53 != 9223372036906377265LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x225 = -916779865912LL;
	int8_t x226 = INT8_MAX;
	uint64_t x227 = UINT64_MAX;
	int32_t x228 = INT32_MAX;
	uint64_t t54 = 66064475514007585LLU;

    t54 = (x225^((x226%x227)^x228));

    if (t54 != 18446743158685865800LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x229 = -1000;
	volatile int16_t x230 = INT16_MIN;
	volatile int32_t x232 = INT32_MIN;
	volatile int32_t t55 = 2;

    t55 = (x229^((x230%x231)^x232));

    if (t55 != 2147482648) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x237 = 13;
	int16_t x238 = INT16_MIN;
	volatile uint16_t x239 = UINT16_MAX;
	static uint32_t x240 = 27U;
	uint32_t t56 = 2U;

    t56 = (x237^((x238%x239)^x240));

    if (t56 != 4294934550U) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x242 = -1LL;
	static int64_t t57 = -217269321LL;

    t57 = (x241^((x242%x243)^x244));

    if (t57 != 4294967168LL) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x245 = 433399331;
	int64_t x246 = 3LL;
	int8_t x247 = -1;
	uint8_t x248 = 102U;

    t58 = (x245^((x246%x247)^x248));

    if (t58 != 433399365LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x249 = INT64_MIN;
	int32_t x250 = INT32_MIN;
	volatile uint16_t x251 = UINT16_MAX;
	uint8_t x252 = UINT8_MAX;
	volatile int64_t t59 = 3561519584132LL;

    t59 = (x249^((x250%x251)^x252));

    if (t59 != 9223372036854743295LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint16_t x257 = 15100U;
	static uint64_t x258 = 589368312171LLU;
	volatile uint64_t t60 = 49868994532540797LLU;

    t60 = (x257^((x258%x259)^x260));

    if (t60 != 589368327083LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x262 = -538150910342LL;
	int32_t x264 = INT32_MIN;
	int64_t t61 = 80259LL;

    t61 = (x261^((x262%x263)^x264));

    if (t61 != 5LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x265 = 29350654248654LLU;
	int8_t x267 = -1;
	static volatile int32_t x268 = INT32_MIN;
	static uint64_t t62 = 5154LLU;

    t62 = (x265^((x266%x267)^x268));

    if (t62 != 18446714722898282190LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x269 = INT64_MIN;
	volatile int16_t x271 = -1;
	uint32_t x272 = 467U;
	int64_t t63 = 4069178LL;

    t63 = (x269^((x270%x271)^x272));

    if (t63 != -9223372036854775341LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x273 = -1;
	int8_t x274 = -1;

    t64 = (x273^((x274%x275)^x276));

    if (t64 != 18446743126637263275LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x279 = INT64_MAX;
	int16_t x280 = INT16_MAX;
	uint64_t t65 = 412369100718LLU;

    t65 = (x277^((x278%x279)^x280));

    if (t65 != 2147450880LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x281 = 103536907167976LLU;
	uint64_t x282 = 134099730123LLU;
	static int8_t x284 = INT8_MIN;
	uint64_t t66 = 180309LLU;

    t66 = (x281^((x282%x283)^x284));

    if (t66 != 18446640489158027683LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x285 = -161LL;
	uint8_t x286 = 66U;
	uint8_t x287 = UINT8_MAX;
	int64_t t67 = 2086883989300609LL;

    t67 = (x285^((x286%x287)^x288));

    if (t67 != 9223372036854775581LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x289 = 79075761118182891LL;
	volatile uint8_t x290 = 27U;
	int8_t x291 = INT8_MIN;
	static int16_t x292 = 1555;
	int64_t t68 = -464LL;

    t68 = (x289^((x290%x291)^x292));

    if (t68 != 79075761118182371LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint32_t x294 = 443606U;
	uint16_t x295 = 105U;
	uint32_t t69 = 22564810U;

    t69 = (x293^((x294%x295)^x296));

    if (t69 != 2147482672U) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x297 = INT32_MIN;
	volatile int8_t x298 = INT8_MIN;
	uint16_t x299 = UINT16_MAX;
	volatile int16_t x300 = 2;
	volatile int32_t t70 = -343307554;

    t70 = (x297^((x298%x299)^x300));

    if (t70 != 2147483522) { NG(); } else { ; }
	
}

void f71(void) {
    	static int8_t x301 = -1;
	volatile int32_t x302 = INT32_MIN;
	volatile int32_t x304 = INT32_MIN;

    t71 = (x301^((x302%x303)^x304));

    if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x305 = 38285586920841098LL;
	volatile uint16_t x306 = 50U;
	static int64_t x308 = INT64_MIN;
	int64_t t72 = -12113129178499LL;

    t72 = (x305^((x306%x307)^x308));

    if (t72 != -9185086449933934664LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x309 = INT8_MAX;
	int64_t x310 = INT64_MIN;
	static volatile int16_t x311 = INT16_MIN;
	int8_t x312 = INT8_MIN;

    t73 = (x309^((x310%x311)^x312));

    if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x313 = INT8_MIN;
	volatile int16_t x314 = INT16_MIN;
	int32_t x315 = INT32_MAX;
	static volatile int16_t x316 = 38;
	volatile int32_t t74 = -201870296;

    t74 = (x313^((x314%x315)^x316));

    if (t74 != 32678) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint16_t x318 = 7U;
	int32_t x319 = INT32_MAX;
	static uint8_t x320 = 1U;
	int64_t t75 = -27568641073278LL;

    t75 = (x317^((x318%x319)^x320));

    if (t75 != -7LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x321 = 3U;
	int16_t x322 = -1;
	static uint8_t x323 = 61U;
	uint64_t x324 = 851528237LLU;
	uint64_t t76 = 1450LLU;

    t76 = (x321^((x322%x323)^x324));

    if (t76 != 18446744072858023377LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x325 = UINT8_MAX;
	int16_t x328 = -1;
	uint64_t t77 = 113LLU;

    t77 = (x325^((x326%x327)^x328));

    if (t77 != 16859136871633756244LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x329 = -1;
	int64_t x330 = INT64_MAX;
	int8_t x331 = -1;
	uint16_t x332 = 10418U;

    t78 = (x329^((x330%x331)^x332));

    if (t78 != -10419LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x333 = 117849;
	int32_t x334 = INT32_MIN;
	int16_t x335 = -1;
	volatile int64_t t79 = -16LL;

    t79 = (x333^((x334%x335)^x336));

    if (t79 != -9223372036854657959LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x338 = 339369748LL;
	static uint16_t x339 = 9U;
	volatile int64_t x340 = 13978894332023LL;
	int64_t t80 = 7031LL;

    t80 = (x337^((x338%x339)^x340));

    if (t80 != -13978894307216LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x341 = 3293U;
	uint8_t x342 = 17U;
	uint16_t x343 = UINT16_MAX;

    t81 = (x341^((x342%x343)^x344));

    if (t81 != 3277U) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x349 = INT32_MIN;
	int8_t x351 = 18;
	int16_t x352 = 2007;
	volatile int64_t t82 = 8608LL;

    t82 = (x349^((x350%x351)^x352));

    if (t82 != -2147481641LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x354 = 0U;
	int8_t x356 = -3;
	volatile uint64_t t83 = 1572236LLU;

    t83 = (x353^((x354%x355)^x356));

    if (t83 != 9223372036854775805LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x357 = -1;
	int32_t x359 = -941;
	static int8_t x360 = 18;
	int32_t t84 = 1;

    t84 = (x357^((x358%x359)^x360));

    if (t84 != 18) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x361 = INT8_MIN;
	static int16_t x362 = 0;
	static int8_t x363 = INT8_MIN;
	int16_t x364 = INT16_MAX;
	static volatile int32_t t85 = -3;

    t85 = (x361^((x362%x363)^x364));

    if (t85 != -32641) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x365 = 258LL;
	int16_t x366 = -1;
	uint16_t x367 = 17U;
	int8_t x368 = 14;

    t86 = (x365^((x366%x367)^x368));

    if (t86 != -269LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x369 = 75568499LLU;
	int16_t x370 = INT16_MAX;
	int32_t x371 = 105596;
	uint16_t x372 = 3U;
	uint64_t t87 = 238LLU;

    t87 = (x369^((x370%x371)^x372));

    if (t87 != 75590287LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint8_t x373 = 3U;
	int8_t x374 = INT8_MIN;
	static int32_t x375 = INT32_MIN;
	volatile int32_t x376 = INT32_MAX;

    t88 = (x373^((x374%x375)^x376));

    if (t88 != -2147483524) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint16_t x377 = UINT16_MAX;
	static int16_t x378 = 59;
	uint8_t x379 = UINT8_MAX;
	uint8_t x380 = 41U;
	int32_t t89 = 4;

    t89 = (x377^((x378%x379)^x380));

    if (t89 != 65517) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x381 = -5;

    t90 = (x381^((x382%x383)^x384));

    if (t90 != 65529) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint32_t x385 = UINT32_MAX;
	int8_t x386 = INT8_MIN;
	int64_t x387 = INT64_MIN;
	static volatile int64_t x388 = INT64_MIN;
	int64_t t91 = 133673224697742540LL;

    t91 = (x385^((x386%x387)^x388));

    if (t91 != 9223372032559808639LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x389 = 6U;
	static int8_t x390 = 1;
	volatile uint64_t x391 = 6078LLU;
	volatile uint16_t x392 = 84U;
	volatile uint64_t t92 = 2LLU;

    t92 = (x389^((x390%x391)^x392));

    if (t92 != 83LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x393 = INT32_MIN;
	int32_t x394 = -3890;
	uint8_t x395 = UINT8_MAX;
	int64_t x396 = -1LL;
	int64_t t93 = -15341LL;

    t93 = (x393^((x394%x395)^x396));

    if (t93 != -2147483584LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile uint8_t x397 = UINT8_MAX;
	int8_t x398 = 1;
	uint16_t x399 = 172U;
	int8_t x400 = INT8_MIN;

    t94 = (x397^((x398%x399)^x400));

    if (t94 != -130) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x401 = INT16_MIN;
	uint8_t x402 = 0U;
	uint64_t x403 = 31LLU;
	uint32_t x404 = UINT32_MAX;
	uint64_t t95 = 20152LLU;

    t95 = (x401^((x402%x403)^x404));

    if (t95 != 18446744069414617087LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x405 = 1869616U;
	static int8_t x406 = 56;
	int8_t x407 = INT8_MAX;
	uint8_t x408 = 11U;
	volatile uint32_t t96 = 130379948U;

    t96 = (x405^((x406%x407)^x408));

    if (t96 != 1869571U) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x409 = 7U;
	uint64_t x410 = 10LLU;
	volatile int64_t x411 = -1LL;
	uint16_t x412 = 21U;
	volatile uint64_t t97 = 13258405503248078LLU;

    t97 = (x409^((x410%x411)^x412));

    if (t97 != 24LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x413 = 2U;
	static int8_t x414 = INT8_MIN;
	int8_t x415 = INT8_MIN;
	int64_t x416 = -1LL;
	volatile int64_t t98 = 34250832LL;

    t98 = (x413^((x414%x415)^x416));

    if (t98 != -3LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x418 = INT8_MIN;
	int8_t x419 = INT8_MIN;
	int64_t x420 = INT64_MAX;
	volatile int64_t t99 = 238LL;

    t99 = (x417^((x418%x419)^x420));

    if (t99 != 9223372036854775619LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x421 = -4;
	int8_t x422 = -1;
	int16_t x423 = 1391;
	static int8_t x424 = INT8_MAX;

    t100 = (x421^((x422%x423)^x424));

    if (t100 != 124) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x427 = 9U;
	volatile uint32_t x428 = UINT32_MAX;
	uint32_t t101 = 7125U;

    t101 = (x425^((x426%x427)^x428));

    if (t101 != 2147483652U) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x431 = -1;
	int8_t x432 = 1;
	volatile uint32_t t102 = 15U;

    t102 = (x429^((x430%x431)^x432));

    if (t102 != 2725U) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x433 = INT16_MIN;
	int16_t x434 = -7316;
	static volatile int32_t x435 = -11;
	uint8_t x436 = 0U;

    t103 = (x433^((x434%x435)^x436));

    if (t103 != 32767) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x439 = -2560;
	uint32_t x440 = 1523455381U;
	volatile uint32_t t104 = 1U;

    t104 = (x437^((x438%x439)^x440));

    if (t104 != 2771070422U) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x441 = -45021953LL;
	int8_t x442 = INT8_MIN;
	int16_t x444 = 7;
	int64_t t105 = -36826671277443LL;

    t105 = (x441^((x442%x443)^x444));

    if (t105 != -4249945224LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint64_t x445 = 10LLU;
	int32_t x446 = -13203433;
	uint32_t x447 = UINT32_MAX;
	uint8_t x448 = 3U;
	uint64_t t106 = 5158133LLU;

    t106 = (x445^((x446%x447)^x448));

    if (t106 != 4281763870LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x449 = INT64_MAX;
	static int32_t x450 = -3590416;
	uint32_t x451 = UINT32_MAX;

    t107 = (x449^((x450%x451)^x452));

    if (t107 != 9223372032563398914LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x453 = INT32_MIN;
	int16_t x454 = -10693;
	static uint8_t x455 = 11U;
	volatile uint32_t x456 = 9750201U;
	static uint32_t t108 = 9711U;

    t108 = (x453^((x454%x455)^x456));

    if (t108 != 2137733446U) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x457 = -6945;
	static int8_t x458 = INT8_MIN;
	int8_t x459 = INT8_MIN;
	static uint8_t x460 = 7U;
	int32_t t109 = 306;

    t109 = (x457^((x458%x459)^x460));

    if (t109 != -6952) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x461 = 31LL;
	uint64_t x462 = UINT64_MAX;
	int32_t x463 = -15820;
	volatile int16_t x464 = INT16_MAX;
	volatile uint64_t t110 = 203249620498LLU;

    t110 = (x461^((x462%x463)^x464));

    if (t110 != 16939LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x465 = INT8_MIN;
	static int64_t x467 = INT64_MIN;
	int32_t x468 = INT32_MAX;

    t111 = (x465^((x466%x467)^x468));

    if (t111 != 2059806837LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x469 = 2324U;
	int64_t x470 = -71350854LL;
	volatile int32_t x471 = INT32_MAX;
	static int8_t x472 = -1;
	int64_t t112 = -4730536951LL;

    t112 = (x469^((x470%x471)^x472));

    if (t112 != 71349073LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile uint16_t x473 = 1112U;
	volatile int8_t x474 = INT8_MIN;
	int32_t x475 = -1;
	volatile uint32_t t113 = 26U;

    t113 = (x473^((x474%x475)^x476));

    if (t113 != 1111U) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x477 = INT32_MIN;
	static uint32_t x478 = UINT32_MAX;
	static uint32_t x479 = 2727U;
	static uint32_t t114 = 6U;

    t114 = (x477^((x478%x479)^x480));

    if (t114 != 2289U) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint32_t x481 = UINT32_MAX;
	volatile int32_t x482 = INT32_MIN;
	uint64_t x483 = UINT64_MAX;
	volatile int32_t x484 = -1;
	volatile uint64_t t115 = 120763207709198548LLU;

    t115 = (x481^((x482%x483)^x484));

    if (t115 != 2147483648LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x485 = INT8_MAX;
	volatile int8_t x486 = -1;
	int32_t x487 = INT32_MIN;
	volatile int16_t x488 = INT16_MIN;

    t116 = (x485^((x486%x487)^x488));

    if (t116 != 32640) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x489 = INT64_MIN;
	uint64_t x490 = UINT64_MAX;
	int64_t x491 = INT64_MAX;
	int16_t x492 = 0;
	static volatile uint64_t t117 = 1467471420962335LLU;

    t117 = (x489^((x490%x491)^x492));

    if (t117 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x494 = INT8_MAX;
	int16_t x495 = INT16_MIN;
	volatile int8_t x496 = -1;
	int32_t t118 = -997;

    t118 = (x493^((x494%x495)^x496));

    if (t118 != -125) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x497 = 14242;
	int16_t x498 = INT16_MIN;
	int8_t x499 = INT8_MIN;
	int8_t x500 = INT8_MIN;

    t119 = (x497^((x498%x499)^x500));

    if (t119 != -14302) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x501 = INT8_MAX;
	uint16_t x502 = UINT16_MAX;
	int64_t x503 = INT64_MIN;
	uint64_t x504 = 11631629916LLU;
	volatile uint64_t t120 = 1495517985459439LLU;

    t120 = (x501^((x502%x503)^x504));

    if (t120 != 11631618524LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile uint64_t x505 = 7698972184LLU;
	int64_t x506 = INT64_MAX;
	uint8_t x507 = 64U;
	volatile uint64_t t121 = 16581651165LLU;

    t121 = (x505^((x506%x507)^x508));

    if (t121 != 7698971371LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x509 = -1;
	int64_t x512 = -1LL;
	volatile int64_t t122 = -29045268LL;

    t122 = (x509^((x510%x511)^x512));

    if (t122 != 1482LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x513 = -431;
	static int8_t x515 = INT8_MAX;
	uint64_t x516 = UINT64_MAX;

    t123 = (x513^((x514%x515)^x516));

    if (t123 != 18446744073709551184LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x517 = -251494972004LL;
	volatile int32_t x519 = INT32_MAX;
	int32_t x520 = -1;
	uint64_t t124 = 90571114794935LLU;

    t124 = (x517^((x518%x519)^x520));

    if (t124 != 251852511063LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x521 = 573U;
	uint32_t x522 = 26U;
	uint32_t x523 = 5U;

    t125 = (x521^((x522%x523)^x524));

    if (t125 != -9223372036854775236LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x525 = INT32_MIN;
	uint8_t x526 = 9U;

    t126 = (x525^((x526%x527)^x528));

    if (t126 != -2147418122) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x529 = 72827557;
	static int16_t x530 = -1;
	static int16_t x531 = -1;
	int32_t t127 = -22;

    t127 = (x529^((x530%x531)^x532));

    if (t127 != -72827558) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x533 = -585;
	volatile int32_t t128 = -715401203;

    t128 = (x533^((x534%x535)^x536));

    if (t128 != 560) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x537 = -1;
	int32_t x538 = -483;
	volatile int16_t x539 = 2;
	uint64_t x540 = UINT64_MAX;
	volatile uint64_t t129 = UINT64_MAX;

    t129 = (x537^((x538%x539)^x540));

    if (t129 != UINT64_MAX) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x541 = -3;
	int64_t x542 = INT64_MAX;
	static int16_t x543 = -1;
	static volatile int16_t x544 = -1;
	static int64_t t130 = 1544774LL;

    t130 = (x541^((x542%x543)^x544));

    if (t130 != 2LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x545 = 15;
	uint8_t x546 = 5U;
	int64_t x548 = 15857LL;
	int64_t t131 = -11555873921942LL;

    t131 = (x545^((x546%x547)^x548));

    if (t131 != 15867LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x549 = INT32_MIN;
	volatile int64_t x551 = INT64_MIN;
	volatile int64_t t132 = 4997LL;

    t132 = (x549^((x550%x551)^x552));

    if (t132 != 2147418239LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x553 = INT32_MAX;
	int16_t x555 = -1;
	int64_t x556 = INT64_MIN;
	volatile uint64_t t133 = 16757094242LLU;

    t133 = (x553^((x554%x555)^x556));

    if (t133 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x557 = INT64_MAX;
	int64_t x558 = INT64_MAX;
	volatile int16_t x559 = -52;
	volatile uint8_t x560 = 12U;
	volatile int64_t t134 = -3LL;

    t134 = (x557^((x558%x559)^x560));

    if (t134 != 9223372036854775796LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x561 = INT32_MIN;
	static int64_t x562 = -203LL;
	volatile uint64_t x563 = 737997732666776LLU;
	uint32_t x564 = 147U;
	uint64_t t135 = 0LLU;

    t135 = (x561^((x562%x563)^x564));

    if (t135 != 18446253327044104190LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x565 = 1U;
	static volatile int16_t x566 = 0;
	static int64_t x568 = -1LL;
	volatile int64_t t136 = -333LL;

    t136 = (x565^((x566%x567)^x568));

    if (t136 != -2LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x569 = INT64_MAX;
	volatile int64_t x570 = INT64_MIN;
	volatile int32_t x571 = -1;
	volatile int16_t x572 = INT16_MIN;

    t137 = (x569^((x570%x571)^x572));

    if (t137 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x573 = 1;
	uint32_t x575 = 1747723491U;
	static volatile int64_t x576 = 389601866520LL;
	static int64_t t138 = -340018271LL;

    t138 = (x573^((x574%x575)^x576));

    if (t138 != 389601866509LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x577 = -19;
	uint8_t x578 = 63U;
	uint64_t x579 = UINT64_MAX;
	int64_t x580 = -106380452304LL;
	uint64_t t139 = 3313646494774362LLU;

    t139 = (x577^((x578%x579)^x580));

    if (t139 != 106380452322LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x581 = -1;
	volatile uint32_t x582 = 478881551U;
	int64_t x583 = -1LL;
	uint16_t x584 = 5U;

    t140 = (x581^((x582%x583)^x584));

    if (t140 != -6LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x586 = UINT16_MAX;
	int32_t x587 = -933350350;
	volatile int8_t x588 = INT8_MIN;
	int32_t t141 = -871;

    t141 = (x585^((x586%x587)^x588));

    if (t141 != 65408) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int64_t x589 = -4124871LL;
	uint64_t x590 = UINT64_MAX;
	static int16_t x591 = INT16_MAX;
	static int64_t x592 = 16091LL;
	volatile uint64_t t142 = 5601746181LLU;

    t142 = (x589^((x590%x591)^x592));

    if (t142 != 18446744073705435629LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x593 = INT32_MAX;
	uint32_t x594 = 65U;
	static int32_t x595 = INT32_MIN;
	static int8_t x596 = -1;
	static volatile uint32_t t143 = 1790863U;

    t143 = (x593^((x594%x595)^x596));

    if (t143 != 2147483713U) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x601 = 4U;
	volatile int32_t x602 = 186;
	volatile int32_t x603 = -1;
	static int8_t x604 = INT8_MAX;
	static uint32_t t144 = 3U;

    t144 = (x601^((x602%x603)^x604));

    if (t144 != 123U) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x605 = INT8_MAX;
	int8_t x606 = 0;
	volatile int32_t x608 = INT32_MIN;
	volatile int32_t t145 = -1910410;

    t145 = (x605^((x606%x607)^x608));

    if (t145 != -2147483521) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x609 = INT8_MIN;
	static uint16_t x610 = 0U;
	int16_t x611 = INT16_MAX;
	volatile int32_t t146 = -58;

    t146 = (x609^((x610%x611)^x612));

    if (t146 != -27659029) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int16_t x613 = INT16_MIN;
	int64_t x614 = -13368006LL;
	int32_t x615 = INT32_MIN;
	static volatile uint64_t x616 = 3384100422784480LLU;

    t147 = (x613^((x614%x615)^x616));

    if (t147 != 3384100419145946LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x617 = INT32_MIN;
	volatile uint32_t x618 = 543184U;
	int8_t x619 = 27;
	static int64_t x620 = -362022001LL;
	int64_t t148 = -39806753310362LL;

    t148 = (x617^((x618%x619)^x620));

    if (t148 != 1785461654LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x621 = 1001850458324206766LL;
	int8_t x622 = -1;
	int32_t x623 = INT32_MIN;
	static int16_t x624 = 3190;
	int64_t t149 = 971771LL;

    t149 = (x621^((x622%x623)^x624));

    if (t149 != -1001850458324207833LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int32_t x625 = INT32_MIN;
	int32_t x626 = INT32_MAX;
	int32_t t150 = 1;

    t150 = (x625^((x626%x627)^x628));

    if (t150 != -2147418115) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int32_t x629 = INT32_MIN;
	static volatile int16_t x630 = 1443;
	int32_t x631 = -1;

    t151 = (x629^((x630%x631)^x632));

    if (t151 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x633 = 13079U;
	int16_t x635 = 128;
	int16_t x636 = INT16_MAX;
	uint32_t t152 = 5276U;

    t152 = (x633^((x634%x635)^x636));

    if (t152 != 19617U) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x637 = 918949LL;
	int64_t x638 = INT64_MIN;
	uint8_t x639 = UINT8_MAX;
	uint64_t x640 = 2008231781064770LLU;
	static uint64_t t153 = 76399981LLU;

    t153 = (x637^((x638%x639)^x640));

    if (t153 != 18444735841929402983LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x641 = 7608;
	int64_t x642 = INT64_MAX;
	int64_t x644 = INT64_MIN;

    t154 = (x641^((x642%x643)^x644));

    if (t154 != -9223372036516636981LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x645 = INT16_MIN;
	int64_t x646 = INT64_MIN;
	int32_t x647 = -1;
	static int8_t x648 = INT8_MAX;

    t155 = (x645^((x646%x647)^x648));

    if (t155 != -32641LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x651 = 28LLU;
	int64_t x652 = 33828LL;
	uint64_t t156 = 4961992748418LLU;

    t156 = (x649^((x650%x651)^x652));

    if (t156 != 18446744073709517779LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x653 = -34;
	int64_t x654 = -1LL;
	uint16_t x655 = UINT16_MAX;
	int32_t x656 = INT32_MAX;
	volatile int64_t t157 = -1LL;

    t157 = (x653^((x654%x655)^x656));

    if (t157 != 2147483614LL) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int8_t x657 = -1;
	int64_t x658 = 2743128LL;
	int64_t x659 = INT64_MAX;
	int8_t x660 = -1;

    t158 = (x657^((x658%x659)^x660));

    if (t158 != 2743128LL) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x665 = 11;
	static int8_t x666 = INT8_MAX;
	static uint16_t x667 = UINT16_MAX;
	static uint8_t x668 = 0U;
	static int32_t t159 = 1731449;

    t159 = (x665^((x666%x667)^x668));

    if (t159 != 116) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x669 = INT32_MIN;
	volatile int16_t x671 = -3409;
	int8_t x672 = -1;
	volatile int32_t t160 = 339489598;

    t160 = (x669^((x670%x671)^x672));

    if (t160 != 2147483646) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x673 = 1;
	int8_t x674 = INT8_MIN;
	int8_t x675 = -1;
	int16_t x676 = 1;
	volatile int32_t t161 = 21038484;

    t161 = (x673^((x674%x675)^x676));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint16_t x677 = 1862U;
	volatile int64_t x679 = -1LL;
	volatile int64_t t162 = -4107994886130428755LL;

    t162 = (x677^((x678%x679)^x680));

    if (t162 != 63673LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x681 = INT8_MAX;
	volatile int16_t x682 = INT16_MAX;
	int64_t x683 = -1LL;
	uint16_t x684 = UINT16_MAX;
	int64_t t163 = -16682042748LL;

    t163 = (x681^((x682%x683)^x684));

    if (t163 != 65408LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x687 = UINT16_MAX;
	volatile int32_t x688 = -1;
	volatile int32_t t164 = 745;

    t164 = (x685^((x686%x687)^x688));

    if (t164 != -15) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x689 = INT64_MAX;
	volatile int32_t x691 = INT32_MAX;

    t165 = (x689^((x690%x691)^x692));

    if (t165 != 9223372035317563957LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x693 = INT64_MAX;
	static volatile int32_t x694 = INT32_MAX;
	int32_t x695 = 1;
	uint16_t x696 = 6434U;
	int64_t t166 = -4334768145963LL;

    t166 = (x693^((x694%x695)^x696));

    if (t166 != 9223372036854769373LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static int64_t x697 = -1LL;
	static uint16_t x699 = UINT16_MAX;
	int16_t x700 = -1;
	volatile int64_t t167 = 403LL;

    t167 = (x697^((x698%x699)^x700));

    if (t167 != -1LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x701 = INT32_MIN;
	volatile int64_t x702 = INT64_MIN;
	static uint16_t x703 = 19419U;
	int8_t x704 = -1;
	static int64_t t168 = -3460303367115799125LL;

    t168 = (x701^((x702%x703)^x704));

    if (t168 != -2147473861LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x705 = UINT8_MAX;
	uint64_t x706 = 1581886865LLU;
	int16_t x707 = INT16_MIN;
	static volatile uint16_t x708 = 3U;

    t169 = (x705^((x706%x707)^x708));

    if (t169 != 1581886829LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint16_t x709 = 0U;
	volatile int64_t x710 = 4117599085057485LL;
	uint32_t x711 = 2U;
	uint16_t x712 = 2U;
	volatile int64_t t170 = -15LL;

    t170 = (x709^((x710%x711)^x712));

    if (t170 != 3LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x713 = INT64_MIN;
	static int8_t x714 = INT8_MAX;
	int16_t x715 = INT16_MIN;
	int64_t x716 = INT64_MAX;
	int64_t t171 = 0LL;

    t171 = (x713^((x714%x715)^x716));

    if (t171 != -128LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x717 = 2278U;
	int64_t x718 = 1LL;
	uint16_t x719 = UINT16_MAX;
	uint8_t x720 = 27U;
	volatile int64_t t172 = 132834825204385LL;

    t172 = (x717^((x718%x719)^x720));

    if (t172 != 2300LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x721 = 88U;
	int8_t x722 = INT8_MIN;
	int8_t x724 = INT8_MIN;
	volatile int32_t t173 = -39552432;

    t173 = (x721^((x722%x723)^x724));

    if (t173 != 88) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x725 = -1LL;
	int64_t x726 = INT64_MAX;
	volatile int64_t t174 = 844283LL;

    t174 = (x725^((x726%x727)^x728));

    if (t174 != -2147482544LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x729 = UINT64_MAX;
	int32_t x730 = -1;
	int32_t x731 = -1;
	int8_t x732 = INT8_MIN;
	volatile uint64_t t175 = 2841159433900LLU;

    t175 = (x729^((x730%x731)^x732));

    if (t175 != 127LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x733 = -8686446655970LL;
	int64_t x734 = 44188605722214LL;
	uint32_t x736 = 38725769U;

    t176 = (x733^((x734%x735)^x736));

    if (t176 != 18446735387224188877LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile uint64_t x737 = UINT64_MAX;
	static int16_t x739 = INT16_MIN;
	static volatile int64_t x740 = 23301LL;
	uint64_t t177 = 3LLU;

    t177 = (x737^((x738%x739)^x740));

    if (t177 != 18446744073709542149LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x741 = INT8_MIN;
	uint32_t x743 = 3U;
	volatile uint32_t t178 = 4U;

    t178 = (x741^((x742%x743)^x744));

    if (t178 != 4294901887U) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x745 = INT16_MIN;
	int64_t x747 = -1256145315808573799LL;
	volatile int32_t x748 = INT32_MIN;
	int64_t t179 = -69808634992418761LL;

    t179 = (x745^((x746%x747)^x748));

    if (t179 != -2147450881LL) { NG(); } else { ; }
	
}

void f180(void) {
    	static int64_t x749 = -173LL;
	volatile int32_t x750 = -1;
	int32_t x751 = -1;
	int16_t x752 = INT16_MIN;
	static volatile int64_t t180 = 10952048721766LL;

    t180 = (x749^((x750%x751)^x752));

    if (t180 != 32595LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x753 = 0;
	int64_t x755 = 261831414427342233LL;
	volatile uint8_t x756 = 9U;
	volatile int64_t t181 = 2706641414009LL;

    t181 = (x753^((x754%x755)^x756));

    if (t181 != -10LL) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x757 = -2896LL;
	int64_t x759 = INT64_MIN;
	int8_t x760 = INT8_MIN;
	int64_t t182 = 357667LL;

    t182 = (x757^((x758%x759)^x760));

    if (t182 != 2864LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x761 = 63283521417184212LL;
	int8_t x763 = -12;
	int32_t x764 = 0;
	static int64_t t183 = -40LL;

    t183 = (x761^((x762%x763)^x764));

    if (t183 != -63283521417184212LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x765 = 2334492921LL;
	uint8_t x768 = 0U;
	int64_t t184 = 1292639678LL;

    t184 = (x765^((x766%x767)^x768));

    if (t184 != 2334492806LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x769 = 416U;
	int64_t x770 = -1LL;
	volatile int32_t x771 = -1;
	int16_t x772 = INT16_MAX;
	volatile int64_t t185 = -42328508044178LL;

    t185 = (x769^((x770%x771)^x772));

    if (t185 != 32351LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x773 = -71422209;
	uint16_t x774 = 1U;
	volatile int64_t x775 = INT64_MIN;
	int16_t x776 = INT16_MAX;
	static int64_t t186 = 428427870LL;

    t186 = (x773^((x774%x775)^x776));

    if (t186 != -71413503LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x777 = 4U;
	static int16_t x778 = INT16_MIN;
	int64_t x779 = INT64_MAX;
	int64_t x780 = INT64_MAX;
	static int64_t t187 = 495085891434994190LL;

    t187 = (x777^((x778%x779)^x780));

    if (t187 != -9223372036854743045LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x782 = INT16_MIN;
	int16_t x783 = INT16_MIN;
	int8_t x784 = -1;
	volatile uint32_t t188 = 1938U;

    t188 = (x781^((x782%x783)^x784));

    if (t188 != 0U) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int32_t x787 = -156104;
	static uint8_t x788 = 12U;
	volatile uint32_t t189 = 13302U;

    t189 = (x785^((x786%x787)^x788));

    if (t189 != 149888552U) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x789 = INT64_MAX;
	int16_t x790 = -1;
	uint16_t x792 = UINT16_MAX;
	volatile int64_t t190 = -49085689135055333LL;

    t190 = (x789^((x790%x791)^x792));

    if (t190 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x793 = 1;
	volatile int8_t x794 = -1;
	int16_t x795 = INT16_MAX;
	uint8_t x796 = 11U;
	volatile int32_t t191 = -10928;

    t191 = (x793^((x794%x795)^x796));

    if (t191 != -11) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x797 = INT16_MIN;
	int32_t x798 = 42;
	volatile int64_t x799 = 394784793713463LL;
	int32_t x800 = INT32_MIN;
	int64_t t192 = 16294516143668LL;

    t192 = (x797^((x798%x799)^x800));

    if (t192 != 2147450922LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x801 = 1;
	static int64_t x802 = 18474760078684396LL;
	static int32_t x803 = INT32_MAX;
	volatile int64_t t193 = 6472LL;

    t193 = (x801^((x802%x803)^x804));

    if (t193 != 3081750958LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x805 = 47;
	int16_t x806 = INT16_MIN;
	static int8_t x807 = INT8_MIN;
	int64_t x808 = 63041187LL;
	volatile int64_t t194 = 171LL;

    t194 = (x805^((x806%x807)^x808));

    if (t194 != 63041164LL) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint16_t x809 = 27U;
	uint64_t x810 = 222LLU;
	uint64_t x811 = UINT64_MAX;
	int8_t x812 = INT8_MIN;
	volatile uint64_t t195 = 2346LLU;

    t195 = (x809^((x810%x811)^x812));

    if (t195 != 18446744073709551429LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x814 = INT8_MAX;
	int32_t x816 = 10;
	int64_t t196 = 43LL;

    t196 = (x813^((x814%x815)^x816));

    if (t196 != -11LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x817 = UINT64_MAX;
	static uint8_t x818 = 0U;
	int64_t x820 = INT64_MAX;
	volatile uint64_t t197 = 1190896208773139LLU;

    t197 = (x817^((x818%x819)^x820));

    if (t197 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x821 = INT8_MIN;
	int64_t x822 = -1LL;
	int32_t x823 = INT32_MIN;
	volatile int8_t x824 = INT8_MIN;
	volatile int64_t t198 = -131512246784538LL;

    t198 = (x821^((x822%x823)^x824));

    if (t198 != -1LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x825 = -1LL;
	volatile int16_t x826 = -953;
	uint16_t x827 = 3U;
	static uint32_t x828 = 1U;
	volatile int64_t t199 = -4999308266295LL;

    t199 = (x825^((x826%x827)^x828));

    if (t199 != -4294967296LL) { NG(); } else { ; }
	
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

