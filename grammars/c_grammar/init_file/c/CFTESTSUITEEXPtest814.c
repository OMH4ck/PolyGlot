
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

int32_t x1 = -1;
uint32_t x2 = 19086108U;
volatile int8_t x4 = INT8_MAX;
static uint32_t x12 = UINT32_MAX;
static int16_t x13 = INT16_MIN;
static volatile int64_t t2 = 2065626088889438773LL;
volatile int64_t x17 = INT64_MIN;
uint8_t x22 = 56U;
uint32_t t4 = 2134000U;
uint16_t x25 = UINT16_MAX;
int32_t x26 = INT32_MAX;
int32_t x30 = INT32_MIN;
uint64_t t8 = 96355485013LLU;
int32_t x47 = INT32_MIN;
volatile int64_t x53 = -96414830662983606LL;
uint8_t x56 = UINT8_MAX;
int8_t x57 = 59;
int32_t x58 = 15408918;
volatile int16_t x63 = -49;
volatile int32_t x64 = INT32_MIN;
volatile uint32_t x73 = 134327216U;
volatile int8_t x79 = 1;
static uint64_t t18 = 94676563744963LLU;
uint16_t x98 = 7423U;
static int16_t x104 = INT16_MIN;
static uint64_t t25 = 265947090LLU;
int32_t x131 = -14618;
int64_t x137 = -1LL;
static int64_t x138 = 967756344012092073LL;
static volatile uint32_t x149 = 1072155352U;
int64_t x151 = INT64_MIN;
uint16_t x157 = UINT16_MAX;
int16_t x161 = -1;
int16_t x169 = INT16_MIN;
volatile uint64_t t38 = 1231685855LLU;
static uint8_t x178 = 1U;
static uint16_t x180 = 3206U;
int64_t x200 = INT64_MIN;
int16_t x201 = INT16_MIN;
uint64_t t46 = 839449926LLU;
int64_t t48 = 4909705180LL;
static int8_t x221 = 22;
int64_t x223 = -1LL;
uint32_t x230 = 14U;
int8_t x231 = -1;
static volatile uint64_t t53 = 2255658LLU;
uint16_t x241 = 9U;
uint8_t x245 = 20U;
uint16_t x261 = UINT16_MAX;
static int32_t x275 = INT32_MIN;
int32_t t62 = 114;
uint64_t x278 = 558189220685824LLU;
static uint64_t t63 = 64036825577469LLU;
int8_t x287 = INT8_MAX;
static volatile int64_t t66 = -119LL;
int16_t x303 = -1;
int64_t x306 = INT64_MIN;
uint32_t x308 = 88388U;
static int32_t x309 = INT32_MAX;
int8_t x318 = INT8_MIN;
int16_t x326 = INT16_MAX;
uint8_t x331 = 29U;
int8_t x332 = INT8_MAX;
volatile uint8_t x333 = UINT8_MAX;
int32_t x334 = -1;
int8_t x341 = INT8_MIN;
volatile int16_t x347 = 101;
int8_t x352 = -1;
int32_t x359 = INT32_MAX;
int8_t x360 = -1;
uint64_t t85 = 5LLU;
int16_t x385 = INT16_MAX;
int32_t x391 = -1;
static int16_t x393 = -11691;
int8_t x395 = -46;
static int8_t x399 = INT8_MIN;
int8_t x403 = 54;
volatile int16_t x408 = 263;
volatile int64_t t91 = -3487310361236LL;
uint64_t x411 = UINT64_MAX;
int32_t x414 = INT32_MAX;
int16_t x434 = 1;
static volatile uint64_t t95 = 3174LLU;
int8_t x453 = 3;
volatile int8_t x454 = -1;
int16_t x476 = -1;
int16_t x482 = 11;
static uint8_t x485 = 0U;
int64_t x489 = 32344571LL;
uint32_t x490 = 2U;
int16_t x509 = INT16_MAX;
int64_t x516 = -1LL;
uint16_t x517 = 1U;
int32_t x519 = INT32_MIN;
uint16_t x533 = 6105U;
volatile uint64_t x538 = 54LLU;
static volatile int32_t x540 = INT32_MIN;
int64_t x542 = INT64_MIN;
uint64_t x543 = 320618677128658667LLU;
int8_t x548 = INT8_MIN;
static int8_t x551 = 7;
int64_t x558 = INT64_MIN;
uint64_t x564 = 416721986883635LLU;
int64_t t125 = -170294566LL;
static int16_t x569 = -9483;
int32_t t126 = 4;
uint16_t x574 = UINT16_MAX;
uint64_t x575 = UINT64_MAX;
int64_t x578 = -1LL;
static uint32_t x580 = 25U;
uint32_t x582 = 801557U;
uint8_t x585 = 2U;
static volatile uint32_t t130 = 1018529350U;
uint16_t x591 = 410U;
volatile uint32_t t131 = 14509423U;
static uint8_t x600 = 23U;
static int8_t x601 = INT8_MIN;
int8_t x603 = INT8_MIN;
volatile int16_t x610 = -16;
int8_t x614 = -1;
uint8_t x623 = 1U;
uint64_t x624 = UINT64_MAX;
uint64_t t138 = 5575151387LLU;
uint64_t t139 = 56383LLU;
int32_t x629 = INT32_MAX;
uint16_t x635 = UINT16_MAX;
static int64_t x639 = 3LL;
int32_t x644 = INT32_MAX;
volatile int64_t t143 = -1997450312609930252LL;
volatile int64_t x646 = INT64_MIN;
int16_t x657 = 42;
uint32_t x660 = UINT32_MAX;
int32_t x663 = INT32_MAX;
int32_t x670 = INT32_MAX;
uint64_t x672 = UINT64_MAX;
uint64_t x674 = 6327687229642LLU;
int16_t x675 = INT16_MIN;
static uint8_t x676 = 127U;
uint64_t t150 = 3LLU;
uint16_t x677 = UINT16_MAX;
static int16_t x684 = INT16_MIN;
int8_t x686 = -1;
volatile int8_t x687 = INT8_MIN;
static volatile int32_t t153 = -4962610;
uint8_t x690 = UINT8_MAX;
static int64_t x691 = -37588911944765280LL;
uint32_t x698 = UINT32_MAX;
uint8_t x700 = 41U;
uint64_t x702 = UINT64_MAX;
static int8_t x705 = INT8_MIN;
uint64_t x706 = UINT64_MAX;
volatile int64_t t158 = -226613595305LL;
int32_t x718 = INT32_MAX;
uint16_t x724 = 1U;
static volatile int64_t x727 = -6824LL;
volatile int16_t x730 = -1;
static uint64_t x734 = 411368LLU;
int8_t x735 = INT8_MIN;
uint64_t t164 = 1626142930608607501LLU;
int16_t x738 = -27;
int8_t x740 = INT8_MAX;
static uint64_t t166 = 26338167LLU;
int8_t x746 = INT8_MIN;
static int8_t x747 = -1;
uint16_t x748 = 3830U;
volatile uint64_t t167 = 567151478351227LLU;
int8_t x752 = INT8_MIN;
uint32_t x758 = 20883519U;
volatile int8_t x764 = INT8_MIN;
static uint64_t x766 = UINT64_MAX;
static int16_t x770 = -1;
uint32_t x774 = UINT32_MAX;
int64_t x775 = -1LL;
int32_t x777 = 1731821;
int8_t x797 = INT8_MAX;
volatile int8_t x799 = INT8_MAX;
volatile uint64_t x810 = UINT64_MAX;
volatile uint64_t t183 = 1679LLU;
int64_t x820 = 6533405LL;
int8_t x834 = 3;
int8_t x836 = 19;
int32_t x840 = -1;
int64_t x853 = -1LL;
uint64_t x864 = 2945450762614873LLU;
static int32_t x878 = -594;
volatile int16_t x881 = 476;
uint16_t x883 = 2032U;
volatile uint64_t x887 = 169463179237LLU;
int8_t x891 = INT8_MAX;
int16_t x894 = INT16_MIN;
uint32_t x900 = 30253U;


void f0(void) {
    	int8_t x3 = INT8_MIN;
	uint32_t t0 = 13U;

    t0 = (x1-((x2%x3)*x4));

    if (t0 != 1871031579U) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int16_t x9 = INT16_MIN;
	volatile int32_t x10 = INT32_MAX;
	volatile uint64_t x11 = 321105426333LLU;
	volatile uint64_t t1 = 881LLU;

    t1 = (x9-((x10%x11)*x12));

    if (t1 != 9223372043297193983LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x14 = INT64_MIN;
	int64_t x15 = INT64_MIN;
	uint8_t x16 = 9U;

    t2 = (x13-((x14%x15)*x16));

    if (t2 != -32768LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x18 = INT64_MIN;
	static int32_t x19 = -1;
	volatile uint64_t x20 = 2358989551647787243LLU;
	uint64_t t3 = 495445988691777LLU;

    t3 = (x17-((x18%x19)*x20));

    if (t3 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x21 = INT16_MAX;
	uint32_t x23 = 7574U;
	uint16_t x24 = 237U;

    t4 = (x21-((x22%x23)*x24));

    if (t4 != 19495U) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x27 = 9886U;
	int16_t x28 = -2;
	uint32_t t5 = 44U;

    t5 = (x25-((x26%x27)*x28));

    if (t5 != 79901U) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x29 = INT8_MIN;
	static int8_t x31 = -1;
	int32_t x32 = INT32_MAX;
	int32_t t6 = 17559;

    t6 = (x29-((x30%x31)*x32));

    if (t6 != -128) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x37 = INT64_MIN;
	static uint16_t x38 = UINT16_MAX;
	int8_t x39 = INT8_MAX;
	uint16_t x40 = 0U;
	int64_t t7 = INT64_MIN;

    t7 = (x37-((x38%x39)*x40));

    if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x41 = UINT16_MAX;
	uint64_t x42 = 2747528134959965LLU;
	uint32_t x43 = 115U;
	static volatile uint8_t x44 = 13U;

    t8 = (x41-((x42%x43)*x44));

    if (t8 != 64235LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int16_t x45 = -1;
	int64_t x46 = INT64_MIN;
	static int8_t x48 = 9;
	static volatile int64_t t9 = 850LL;

    t9 = (x45-((x46%x47)*x48));

    if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x49 = 15217067U;
	int8_t x50 = INT8_MAX;
	int32_t x51 = -31;
	volatile uint8_t x52 = 12U;
	uint32_t t10 = 0U;

    t10 = (x49-((x50%x51)*x52));

    if (t10 != 15217031U) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x54 = 0;
	volatile int16_t x55 = INT16_MIN;
	volatile int64_t t11 = 1217931867089676323LL;

    t11 = (x53-((x54%x55)*x56));

    if (t11 != -96414830662983606LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static int64_t x59 = INT64_MIN;
	uint32_t x60 = 1181229U;
	volatile int64_t t12 = -248683LL;

    t12 = (x57-((x58%x59)*x60));

    if (t12 != -18201460800163LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x61 = 55583478;
	int64_t x62 = INT64_MAX;
	volatile int64_t t13 = -2LL;

    t13 = (x61-((x62%x63)*x64));

    if (t13 != 55583478LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x65 = 29;
	int32_t x66 = INT32_MAX;
	volatile int32_t x67 = 133225;
	static int8_t x68 = INT8_MIN;
	int32_t t14 = -59206184;

    t14 = (x65-((x66%x67)*x68));

    if (t14 != 3823645) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x69 = -1;
	int8_t x70 = 6;
	static uint8_t x71 = UINT8_MAX;
	volatile uint32_t x72 = 11U;
	uint32_t t15 = 4297095U;

    t15 = (x69-((x70%x71)*x72));

    if (t15 != 4294967229U) { NG(); } else { ; }
	
}

void f16(void) {
    	static int16_t x74 = INT16_MIN;
	static int64_t x75 = -1LL;
	uint64_t x76 = UINT64_MAX;
	volatile uint64_t t16 = 5177440132592497LLU;

    t16 = (x73-((x74%x75)*x76));

    if (t16 != 134327216LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x77 = -10732;
	int64_t x78 = -2027LL;
	volatile int64_t x80 = 199368553198471503LL;
	volatile int64_t t17 = -2924860LL;

    t17 = (x77-((x78%x79)*x80));

    if (t17 != -10732LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x81 = 1;
	int32_t x82 = -1;
	volatile uint8_t x83 = UINT8_MAX;
	uint64_t x84 = 1993220164682961158LLU;

    t18 = (x81-((x82%x83)*x84));

    if (t18 != 1993220164682961159LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x85 = -245LL;
	uint32_t x86 = UINT32_MAX;
	int64_t x87 = -1LL;
	volatile int8_t x88 = -47;
	int64_t t19 = -90123256291388928LL;

    t19 = (x85-((x86%x87)*x88));

    if (t19 != -245LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x93 = 20U;
	volatile uint64_t x94 = UINT64_MAX;
	int64_t x95 = -799LL;
	int8_t x96 = INT8_MIN;
	volatile uint64_t t20 = 32432068901056507LLU;

    t20 = (x93-((x94%x95)*x96));

    if (t20 != 102164LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x97 = UINT8_MAX;
	static uint16_t x99 = UINT16_MAX;
	static int8_t x100 = 5;
	int32_t t21 = 10034200;

    t21 = (x97-((x98%x99)*x100));

    if (t21 != -36860) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x101 = UINT64_MAX;
	uint64_t x102 = UINT64_MAX;
	int64_t x103 = INT64_MIN;
	uint64_t t22 = 94LLU;

    t22 = (x101-((x102%x103)*x104));

    if (t22 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x105 = UINT16_MAX;
	int8_t x106 = -3;
	static int8_t x107 = -1;
	int8_t x108 = -1;
	static volatile int32_t t23 = 28757;

    t23 = (x105-((x106%x107)*x108));

    if (t23 != 65535) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x109 = INT16_MIN;
	int16_t x110 = INT16_MIN;
	volatile uint64_t x111 = UINT64_MAX;
	volatile int16_t x112 = -1;
	static volatile uint64_t t24 = 285480119580LLU;

    t24 = (x109-((x110%x111)*x112));

    if (t24 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int64_t x113 = -9836470040LL;
	uint32_t x114 = 3U;
	volatile int8_t x115 = INT8_MAX;
	uint64_t x116 = 7595199496LLU;

    t25 = (x113-((x114%x115)*x116));

    if (t25 != 18446744041087483088LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint16_t x117 = UINT16_MAX;
	volatile uint32_t x118 = 5864U;
	static int16_t x119 = -14;
	uint64_t x120 = UINT64_MAX;
	volatile uint64_t t26 = 13LLU;

    t26 = (x117-((x118%x119)*x120));

    if (t26 != 71399LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x121 = 122U;
	int32_t x122 = INT32_MIN;
	uint64_t x123 = UINT64_MAX;
	static int64_t x124 = INT64_MAX;
	static volatile uint64_t t27 = 172158668462646777LLU;

    t27 = (x121-((x122%x123)*x124));

    if (t27 != 18446744071562068090LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x125 = -13;
	int8_t x126 = 5;
	int32_t x127 = -5;
	int32_t x128 = INT32_MIN;
	int32_t t28 = 476515;

    t28 = (x125-((x126%x127)*x128));

    if (t28 != -13) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x129 = INT16_MIN;
	int32_t x130 = INT32_MIN;
	uint64_t x132 = 28LLU;
	volatile uint64_t t29 = 69714137676067232LLU;

    t29 = (x129-((x130%x131)*x132));

    if (t29 != 295952LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x133 = INT16_MIN;
	static int8_t x134 = INT8_MIN;
	int16_t x135 = -1;
	int8_t x136 = INT8_MAX;
	static volatile int32_t t30 = 11908532;

    t30 = (x133-((x134%x135)*x136));

    if (t30 != -32768) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x139 = 7365LL;
	uint64_t x140 = 1860644675LLU;
	uint64_t t31 = 335837310847LLU;

    t31 = (x137-((x138%x139)*x140));

    if (t31 != 18446733657820660965LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x145 = 104672856274674LL;
	int8_t x146 = INT8_MAX;
	volatile uint64_t x147 = 6635LLU;
	int64_t x148 = INT64_MAX;
	uint64_t t32 = 6809480LLU;

    t32 = (x145-((x146%x147)*x148));

    if (t32 != 9223476709711050609LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x150 = 9;
	uint16_t x152 = 25U;
	static volatile int64_t t33 = -120842832453418LL;

    t33 = (x149-((x150%x151)*x152));

    if (t33 != 1072155127LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x153 = INT8_MIN;
	int8_t x154 = INT8_MIN;
	uint32_t x155 = 88030713U;
	volatile int32_t x156 = -42335;
	static uint32_t t34 = 132124U;

    t34 = (x153-((x154%x155)*x156));

    if (t34 != 4226153648U) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int8_t x158 = INT8_MAX;
	static int64_t x159 = -8497564261655LL;
	static int8_t x160 = INT8_MIN;
	int64_t t35 = -99LL;

    t35 = (x157-((x158%x159)*x160));

    if (t35 != 81791LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int32_t x162 = INT32_MIN;
	static uint16_t x163 = 1070U;
	int16_t x164 = 12;
	static volatile int32_t t36 = 5544048;

    t36 = (x161-((x162%x163)*x164));

    if (t36 != 815) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x165 = 1U;
	int8_t x166 = INT8_MAX;
	int64_t x167 = INT64_MIN;
	uint32_t x168 = 10003U;
	volatile int64_t t37 = -1620703435776LL;

    t37 = (x165-((x166%x167)*x168));

    if (t37 != -1270380LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x170 = 21834278619LLU;
	int16_t x171 = 1878;
	int16_t x172 = INT16_MAX;

    t38 = (x169-((x170%x171)*x172));

    if (t38 != 18446744073682289471LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x173 = 4618;
	int16_t x174 = -1;
	static int8_t x175 = INT8_MIN;
	int8_t x176 = -1;
	volatile int32_t t39 = 11411;

    t39 = (x173-((x174%x175)*x176));

    if (t39 != 4617) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile uint16_t x177 = 135U;
	int8_t x179 = INT8_MAX;
	int32_t t40 = 1;

    t40 = (x177-((x178%x179)*x180));

    if (t40 != -3071) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint8_t x181 = 32U;
	uint8_t x182 = UINT8_MAX;
	int32_t x183 = 1;
	volatile int16_t x184 = 6922;
	static volatile int32_t t41 = 124;

    t41 = (x181-((x182%x183)*x184));

    if (t41 != 32) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile int8_t x185 = INT8_MIN;
	uint32_t x186 = 5U;
	static volatile uint32_t x187 = 1577201963U;
	int16_t x188 = INT16_MIN;
	static volatile uint32_t t42 = 1784U;

    t42 = (x185-((x186%x187)*x188));

    if (t42 != 163712U) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x189 = -1;
	int64_t x190 = -1064411603366LL;
	int8_t x191 = INT8_MIN;
	int64_t x192 = -1LL;
	static int64_t t43 = 7637848609376LL;

    t43 = (x189-((x190%x191)*x192));

    if (t43 != -39LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x193 = 65411LL;
	volatile int64_t x194 = INT64_MIN;
	int8_t x195 = INT8_MIN;
	volatile int16_t x196 = INT16_MIN;
	volatile int64_t t44 = 126LL;

    t44 = (x193-((x194%x195)*x196));

    if (t44 != 65411LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x197 = -1;
	uint16_t x198 = 0U;
	int8_t x199 = -1;
	static int64_t t45 = 78825LL;

    t45 = (x197-((x198%x199)*x200));

    if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x202 = UINT64_MAX;
	int64_t x203 = INT64_MIN;
	volatile int64_t x204 = 0LL;

    t46 = (x201-((x202%x203)*x204));

    if (t46 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x213 = INT8_MIN;
	static int8_t x214 = INT8_MIN;
	uint8_t x215 = 3U;
	int16_t x216 = -2;
	int32_t t47 = 3110;

    t47 = (x213-((x214%x215)*x216));

    if (t47 != -132) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint8_t x217 = 46U;
	int64_t x218 = 3990584542385258863LL;
	int8_t x219 = 16;
	uint16_t x220 = UINT16_MAX;

    t48 = (x217-((x218%x219)*x220));

    if (t48 != -982979LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x222 = 1372791U;
	int64_t x224 = INT64_MAX;
	static int64_t t49 = -9LL;

    t49 = (x221-((x222%x223)*x224));

    if (t49 != 22LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x225 = -1LL;
	uint64_t x226 = 11536921779370245LLU;
	int8_t x227 = INT8_MIN;
	int16_t x228 = -1210;
	uint64_t t50 = 134906395975LLU;

    t50 = (x225-((x226%x227)*x228));

    if (t50 != 13959675353037996449LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x229 = -1633181347681498LL;
	int8_t x232 = INT8_MIN;
	int64_t t51 = 999LL;

    t51 = (x229-((x230%x231)*x232));

    if (t51 != -1633185642647002LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x233 = 672;
	int8_t x234 = 1;
	int64_t x235 = INT64_MAX;
	int8_t x236 = -1;
	int64_t t52 = 1646335588994LL;

    t52 = (x233-((x234%x235)*x236));

    if (t52 != 673LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x237 = -7585484;
	volatile int16_t x238 = INT16_MIN;
	static int8_t x239 = INT8_MAX;
	static uint64_t x240 = UINT64_MAX;

    t53 = (x237-((x238%x239)*x240));

    if (t53 != 18446744073701966130LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x242 = INT32_MIN;
	static int16_t x243 = INT16_MIN;
	static int16_t x244 = 0;
	volatile int32_t t54 = 22;

    t54 = (x241-((x242%x243)*x244));

    if (t54 != 9) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x246 = INT64_MAX;
	volatile int64_t x247 = 1909356811796LL;
	int8_t x248 = 41;
	volatile int64_t t55 = -106319LL;

    t55 = (x245-((x246%x247)*x248));

    if (t55 != -23071815924655LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x249 = -7865;
	static int8_t x250 = -1;
	static uint8_t x251 = 28U;
	int32_t x252 = INT32_MAX;
	int32_t t56 = 3;

    t56 = (x249-((x250%x251)*x252));

    if (t56 != 2147475782) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int64_t x253 = INT64_MIN;
	int32_t x254 = INT32_MIN;
	int8_t x255 = INT8_MIN;
	uint64_t x256 = 14144218751561491LLU;
	uint64_t t57 = 62372551912420LLU;

    t57 = (x253-((x254%x255)*x256));

    if (t57 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x257 = 63U;
	uint64_t x258 = 193887959747331389LLU;
	int32_t x259 = INT32_MAX;
	uint32_t x260 = UINT32_MAX;
	volatile uint64_t t58 = 1511LLU;

    t58 = (x257-((x258%x259)*x260));

    if (t58 != 9486641985018703264LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x262 = UINT32_MAX;
	int16_t x263 = 1;
	static int8_t x264 = -1;
	uint32_t t59 = 1U;

    t59 = (x261-((x262%x263)*x264));

    if (t59 != 65535U) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x265 = 937585LLU;
	uint64_t x266 = 61214613376743075LLU;
	int64_t x267 = INT64_MAX;
	int64_t x268 = INT64_MIN;
	volatile uint64_t t60 = 2207924719LLU;

    t60 = (x265-((x266%x267)*x268));

    if (t60 != 9223372036855713393LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x269 = -1;
	volatile int16_t x270 = -794;
	volatile uint32_t x271 = UINT32_MAX;
	int32_t x272 = -1;
	static uint32_t t61 = 108U;

    t61 = (x269-((x270%x271)*x272));

    if (t61 != 4294966501U) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int8_t x273 = INT8_MIN;
	static int8_t x274 = -1;
	int32_t x276 = 0;

    t62 = (x273-((x274%x275)*x276));

    if (t62 != -128) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x277 = -1;
	static uint16_t x279 = 140U;
	int8_t x280 = INT8_MIN;

    t63 = (x277-((x278%x279)*x280));

    if (t63 != 10751LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint16_t x285 = 217U;
	uint16_t x286 = 4161U;
	uint32_t x288 = UINT32_MAX;
	uint32_t t64 = 1624105196U;

    t64 = (x285-((x286%x287)*x288));

    if (t64 != 314U) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x293 = -1;
	static int8_t x294 = -1;
	int64_t x295 = 7537370617911LL;
	volatile int8_t x296 = -1;
	volatile int64_t t65 = -63646096654184233LL;

    t65 = (x293-((x294%x295)*x296));

    if (t65 != -2LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int8_t x297 = 0;
	int64_t x298 = 2815174LL;
	int32_t x299 = INT32_MIN;
	int16_t x300 = INT16_MIN;

    t66 = (x297-((x298%x299)*x300));

    if (t66 != 92247621632LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x301 = INT64_MAX;
	uint16_t x302 = 788U;
	uint64_t x304 = 70787442LLU;
	uint64_t t67 = 3412715LLU;

    t67 = (x301-((x302%x303)*x304));

    if (t67 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x305 = 290;
	int16_t x307 = -241;
	int64_t t68 = 4LL;

    t68 = (x305-((x306%x307)*x308));

    if (t68 != 20594694LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x310 = -1;
	int64_t x311 = 2210157733272099290LL;
	uint64_t x312 = UINT64_MAX;
	uint64_t t69 = 83506LLU;

    t69 = (x309-((x310%x311)*x312));

    if (t69 != 2147483646LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x313 = INT8_MIN;
	int8_t x314 = 2;
	uint16_t x315 = 29908U;
	int16_t x316 = 12;
	int32_t t70 = 6026053;

    t70 = (x313-((x314%x315)*x316));

    if (t70 != -152) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x317 = INT8_MAX;
	uint8_t x319 = 62U;
	int16_t x320 = -7894;
	volatile int32_t t71 = 7;

    t71 = (x317-((x318%x319)*x320));

    if (t71 != -31449) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x321 = INT32_MAX;
	volatile int16_t x322 = -65;
	volatile uint32_t x323 = 53U;
	uint64_t x324 = UINT64_MAX;
	volatile uint64_t t72 = 115913628LLU;

    t72 = (x321-((x322%x323)*x324));

    if (t72 != 2147483677LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile uint64_t x325 = 270862511849548LLU;
	volatile uint64_t x327 = 15070724LLU;
	static int16_t x328 = INT16_MIN;
	uint64_t t73 = 1768268379LLU;

    t73 = (x325-((x326%x327)*x328));

    if (t73 != 270863585558604LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x329 = -1;
	int32_t x330 = -1;
	int32_t t74 = 0;

    t74 = (x329-((x330%x331)*x332));

    if (t74 != 126) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile uint64_t x335 = 181908LLU;
	uint16_t x336 = 14U;
	volatile uint64_t t75 = 863370086609907LLU;

    t75 = (x333-((x334%x335)*x336));

    if (t75 != 18446744073708864205LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x337 = UINT16_MAX;
	volatile int8_t x338 = INT8_MIN;
	uint32_t x339 = 952U;
	int16_t x340 = 58;
	volatile uint32_t t76 = 1185826U;

    t76 = (x337-((x338%x339)*x340));

    if (t76 != 58111U) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint32_t x342 = 375381U;
	int8_t x343 = -1;
	int32_t x344 = INT32_MIN;
	volatile uint32_t t77 = 28579U;

    t77 = (x341-((x342%x343)*x344));

    if (t77 != 2147483520U) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x345 = -22;
	int64_t x346 = INT64_MIN;
	int8_t x348 = INT8_MIN;
	int64_t t78 = 372353LL;

    t78 = (x345-((x346%x347)*x348));

    if (t78 != -11542LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x349 = 7835480;
	uint8_t x350 = 5U;
	int64_t x351 = INT64_MIN;
	static volatile int64_t t79 = 5933829780LL;

    t79 = (x349-((x350%x351)*x352));

    if (t79 != 7835485LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x353 = 20103U;
	int8_t x354 = INT8_MIN;
	uint64_t x355 = UINT64_MAX;
	static uint8_t x356 = 9U;
	volatile uint64_t t80 = 214337700622416LLU;

    t80 = (x353-((x354%x355)*x356));

    if (t80 != 21255LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x357 = 42;
	int32_t x358 = INT32_MIN;
	volatile int32_t t81 = 22;

    t81 = (x357-((x358%x359)*x360));

    if (t81 != 41) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x361 = 53709LLU;
	uint8_t x362 = 0U;
	int16_t x363 = -1;
	int32_t x364 = INT32_MIN;
	volatile uint64_t t82 = 13186423413LLU;

    t82 = (x361-((x362%x363)*x364));

    if (t82 != 53709LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x365 = INT16_MIN;
	int8_t x366 = -1;
	static int64_t x367 = 6720581198LL;
	uint64_t x368 = 10551LLU;
	uint64_t t83 = 129100092963181985LLU;

    t83 = (x365-((x366%x367)*x368));

    if (t83 != 18446744073709529399LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int8_t x369 = INT8_MIN;
	volatile uint64_t x370 = UINT64_MAX;
	uint64_t x371 = UINT64_MAX;
	int16_t x372 = INT16_MIN;
	volatile uint64_t t84 = 1020215989522626837LLU;

    t84 = (x369-((x370%x371)*x372));

    if (t84 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x377 = 362767189U;
	uint64_t x378 = 1LLU;
	int16_t x379 = 44;
	int64_t x380 = INT64_MIN;

    t85 = (x377-((x378%x379)*x380));

    if (t85 != 9223372037217542997LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x386 = INT16_MIN;
	int32_t x387 = -1;
	int16_t x388 = 6;
	int32_t t86 = 0;

    t86 = (x385-((x386%x387)*x388));

    if (t86 != 32767) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x389 = INT64_MAX;
	int8_t x390 = INT8_MIN;
	int16_t x392 = 8;
	volatile int64_t t87 = INT64_MAX;

    t87 = (x389-((x390%x391)*x392));

    if (t87 != INT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x394 = 14932U;
	uint64_t x396 = UINT64_MAX;
	volatile uint64_t t88 = 40374LLU;

    t88 = (x393-((x394%x395)*x396));

    if (t88 != 3241LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x397 = INT16_MIN;
	int8_t x398 = -57;
	int8_t x400 = -1;
	volatile int32_t t89 = 346455;

    t89 = (x397-((x398%x399)*x400));

    if (t89 != -32825) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x401 = INT8_MAX;
	int8_t x402 = INT8_MIN;
	static int8_t x404 = 1;
	volatile int32_t t90 = -148445543;

    t90 = (x401-((x402%x403)*x404));

    if (t90 != 147) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x405 = -1;
	int32_t x406 = -1;
	int64_t x407 = INT64_MAX;

    t91 = (x405-((x406%x407)*x408));

    if (t91 != 262LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x409 = UINT16_MAX;
	volatile int64_t x410 = 279LL;
	int32_t x412 = INT32_MIN;
	volatile uint64_t t92 = 176859104593LLU;

    t92 = (x409-((x410%x411)*x412));

    if (t92 != 599148003327LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x413 = 4618U;
	uint8_t x415 = 1U;
	int8_t x416 = INT8_MIN;
	volatile int32_t t93 = 12576;

    t93 = (x413-((x414%x415)*x416));

    if (t93 != 4618) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x425 = INT8_MIN;
	volatile int64_t x426 = -1LL;
	int8_t x427 = -1;
	static uint8_t x428 = 0U;
	int64_t t94 = -3LL;

    t94 = (x425-((x426%x427)*x428));

    if (t94 != -128LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x433 = INT64_MIN;
	static int32_t x435 = 26026;
	volatile uint64_t x436 = 81964920706LLU;

    t95 = (x433-((x434%x435)*x436));

    if (t95 != 9223371954889855102LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int64_t x437 = INT64_MIN;
	int8_t x438 = -1;
	uint16_t x439 = 2665U;
	static int32_t x440 = 0;
	volatile int64_t t96 = INT64_MIN;

    t96 = (x437-((x438%x439)*x440));

    if (t96 != INT64_MIN) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x441 = 1328885;
	static volatile int8_t x442 = 9;
	int64_t x443 = INT64_MIN;
	volatile int64_t x444 = 1025537681109LL;
	int64_t t97 = 477LL;

    t97 = (x441-((x442%x443)*x444));

    if (t97 != -9229837801096LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint8_t x449 = UINT8_MAX;
	static uint8_t x450 = UINT8_MAX;
	int16_t x451 = -1;
	uint32_t x452 = 38387226U;
	uint32_t t98 = 1323U;

    t98 = (x449-((x450%x451)*x452));

    if (t98 != 255U) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint64_t x455 = UINT64_MAX;
	int16_t x456 = 6660;
	volatile uint64_t t99 = 141706680259LLU;

    t99 = (x453-((x454%x455)*x456));

    if (t99 != 3LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x457 = 34U;
	uint16_t x458 = 359U;
	volatile uint16_t x459 = UINT16_MAX;
	uint8_t x460 = UINT8_MAX;
	static volatile int32_t t100 = 334;

    t100 = (x457-((x458%x459)*x460));

    if (t100 != -91511) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x461 = 3510791U;
	int64_t x462 = 880433LL;
	int8_t x463 = INT8_MIN;
	int64_t x464 = -13993760024LL;
	int64_t t101 = 49054003432413LL;

    t101 = (x461-((x462%x463)*x464));

    if (t101 != 685697751967LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x465 = 0;
	static uint8_t x466 = UINT8_MAX;
	int32_t x467 = INT32_MIN;
	static volatile uint8_t x468 = UINT8_MAX;
	int32_t t102 = -1078;

    t102 = (x465-((x466%x467)*x468));

    if (t102 != -65025) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x473 = INT8_MAX;
	int16_t x474 = INT16_MAX;
	volatile int32_t x475 = INT32_MIN;
	static volatile int32_t t103 = 41;

    t103 = (x473-((x474%x475)*x476));

    if (t103 != 32894) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x477 = 3U;
	uint32_t x478 = UINT32_MAX;
	volatile uint16_t x479 = 433U;
	int64_t x480 = 3111749872146931LL;
	int64_t t104 = -533151LL;

    t104 = (x477-((x478%x479)*x480));

    if (t104 != -80905496675820203LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x481 = -1LL;
	int32_t x483 = -413611;
	int16_t x484 = -1;
	int64_t t105 = -185LL;

    t105 = (x481-((x482%x483)*x484));

    if (t105 != 10LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x486 = -1819381648869433187LL;
	uint64_t x487 = 3966004LLU;
	int16_t x488 = -1;
	volatile uint64_t t106 = 158138584889LLU;

    t106 = (x485-((x486%x487)*x488));

    if (t106 != 1558881LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x491 = INT8_MAX;
	int16_t x492 = -14;
	volatile int64_t t107 = 255361590LL;

    t107 = (x489-((x490%x491)*x492));

    if (t107 != -4262622697LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static int64_t x493 = INT64_MIN;
	int16_t x494 = INT16_MIN;
	int8_t x495 = INT8_MIN;
	uint16_t x496 = 500U;
	int64_t t108 = INT64_MIN;

    t108 = (x493-((x494%x495)*x496));

    if (t108 != INT64_MIN) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint8_t x497 = UINT8_MAX;
	static int32_t x498 = INT32_MIN;
	int16_t x499 = INT16_MIN;
	int8_t x500 = -5;
	volatile int32_t t109 = 7397;

    t109 = (x497-((x498%x499)*x500));

    if (t109 != 255) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x501 = INT32_MAX;
	uint64_t x502 = 47697420LLU;
	static int8_t x503 = -3;
	int16_t x504 = INT16_MIN;
	volatile uint64_t t110 = 81808062702345LLU;

    t110 = (x501-((x502%x503)*x504));

    if (t110 != 1565096542207LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static int64_t x505 = 23679785757864983LL;
	uint32_t x506 = 0U;
	uint16_t x507 = UINT16_MAX;
	volatile uint8_t x508 = UINT8_MAX;
	int64_t t111 = 1965LL;

    t111 = (x505-((x506%x507)*x508));

    if (t111 != 23679785757864983LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x510 = -1190;
	volatile int16_t x511 = INT16_MAX;
	volatile int8_t x512 = 1;
	volatile int32_t t112 = -12955;

    t112 = (x509-((x510%x511)*x512));

    if (t112 != 33957) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x513 = INT32_MAX;
	int32_t x514 = -9938285;
	uint16_t x515 = 13911U;
	volatile int64_t t113 = 714056012847540LL;

    t113 = (x513-((x514%x515)*x516));

    if (t113 != 2147477816LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint64_t x518 = 16609982233LLU;
	int8_t x520 = -1;
	uint64_t t114 = 261426045612075LLU;

    t114 = (x517-((x518%x519)*x520));

    if (t114 != 16609982234LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int32_t x521 = INT32_MIN;
	volatile int64_t x522 = INT64_MIN;
	uint8_t x523 = 1U;
	static uint64_t x524 = UINT64_MAX;
	static volatile uint64_t t115 = 6989302LLU;

    t115 = (x521-((x522%x523)*x524));

    if (t115 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static int64_t x525 = -1LL;
	volatile uint32_t x526 = 124327780U;
	int8_t x527 = INT8_MIN;
	static int8_t x528 = 14;
	static int64_t t116 = 51391LL;

    t116 = (x525-((x526%x527)*x528));

    if (t116 != -1740588921LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x534 = -1;
	static volatile int32_t x535 = INT32_MIN;
	uint32_t x536 = 289U;
	volatile uint32_t t117 = 479949U;

    t117 = (x533-((x534%x535)*x536));

    if (t117 != 6394U) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x537 = -1;
	uint64_t x539 = 86216155280LLU;
	volatile uint64_t t118 = 49469LLU;

    t118 = (x537-((x538%x539)*x540));

    if (t118 != 115964116991LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile uint16_t x541 = 2U;
	int8_t x544 = INT8_MIN;
	volatile uint64_t t119 = 31LLU;

    t119 = (x541-((x542%x543)*x544));

    if (t119 != 13047537814589089282LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x545 = UINT8_MAX;
	int64_t x546 = -1LL;
	static uint32_t x547 = 959353090U;
	int64_t t120 = 275836601LL;

    t120 = (x545-((x546%x547)*x548));

    if (t120 != 127LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int16_t x549 = INT16_MAX;
	static int8_t x550 = INT8_MAX;
	volatile int16_t x552 = INT16_MAX;
	static int32_t t121 = -776585;

    t121 = (x549-((x550%x551)*x552));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x553 = 1U;
	volatile int16_t x554 = -1;
	int32_t x555 = INT32_MAX;
	int16_t x556 = -36;
	int32_t t122 = -6;

    t122 = (x553-((x554%x555)*x556));

    if (t122 != -35) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x557 = INT8_MIN;
	volatile uint64_t x559 = UINT64_MAX;
	uint16_t x560 = 12U;
	uint64_t t123 = 57305LLU;

    t123 = (x557-((x558%x559)*x560));

    if (t123 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x561 = -156;
	int16_t x562 = INT16_MAX;
	int64_t x563 = -305563263LL;
	uint64_t t124 = 137LLU;

    t124 = (x561-((x562%x563)*x564));

    if (t124 != 4792014729493483415LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x565 = -835874;
	int64_t x566 = 30000925436564512LL;
	int32_t x567 = -1;
	static int64_t x568 = INT64_MAX;

    t125 = (x565-((x566%x567)*x568));

    if (t125 != -835874LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x570 = INT8_MAX;
	static int32_t x571 = INT32_MIN;
	int8_t x572 = INT8_MIN;

    t126 = (x569-((x570%x571)*x572));

    if (t126 != 6773) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x573 = -1LL;
	static uint16_t x576 = 25476U;
	volatile uint64_t t127 = 1631242430158097223LLU;

    t127 = (x573-((x574%x575)*x576));

    if (t127 != 18446744072039981955LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x577 = INT16_MAX;
	volatile int64_t x579 = INT64_MAX;
	static volatile int64_t t128 = -1687013487307436815LL;

    t128 = (x577-((x578%x579)*x580));

    if (t128 != 32792LL) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint8_t x581 = 5U;
	int16_t x583 = 96;
	static volatile uint32_t x584 = 1U;
	uint32_t t129 = 151U;

    t129 = (x581-((x582%x583)*x584));

    if (t129 != 4294967248U) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x586 = 10U;
	uint32_t x587 = UINT32_MAX;
	volatile int32_t x588 = INT32_MIN;

    t130 = (x585-((x586%x587)*x588));

    if (t130 != 2U) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint8_t x589 = 3U;
	int32_t x590 = INT32_MIN;
	uint32_t x592 = UINT32_MAX;

    t131 = (x589-((x590%x591)*x592));

    if (t131 != 4294966891U) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x593 = UINT64_MAX;
	int8_t x594 = -10;
	int8_t x595 = INT8_MIN;
	uint64_t x596 = 491LLU;
	uint64_t t132 = 21921297561260745LLU;

    t132 = (x593-((x594%x595)*x596));

    if (t132 != 4909LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x597 = INT32_MIN;
	int64_t x598 = -38553628LL;
	uint32_t x599 = 1436521U;
	int64_t t133 = 711629941145LL;

    t133 = (x597-((x598%x599)*x600));

    if (t133 != -2119789762LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x602 = INT32_MIN;
	int16_t x604 = INT16_MAX;
	int32_t t134 = 15;

    t134 = (x601-((x602%x603)*x604));

    if (t134 != -128) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int8_t x605 = -11;
	static int32_t x606 = -1;
	int32_t x607 = INT32_MIN;
	volatile uint32_t x608 = 7911544U;
	volatile uint32_t t135 = 2845U;

    t135 = (x605-((x606%x607)*x608));

    if (t135 != 7911533U) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x609 = INT64_MAX;
	static int8_t x611 = -1;
	uint8_t x612 = 26U;
	volatile int64_t t136 = INT64_MAX;

    t136 = (x609-((x610%x611)*x612));

    if (t136 != INT64_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x613 = INT32_MIN;
	int8_t x615 = INT8_MAX;
	int64_t x616 = -1LL;
	volatile int64_t t137 = 6382333454LL;

    t137 = (x613-((x614%x615)*x616));

    if (t137 != -2147483649LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x621 = INT64_MIN;
	volatile uint64_t x622 = 78685253924035LLU;

    t138 = (x621-((x622%x623)*x624));

    if (t138 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x625 = 11914988444162LLU;
	uint8_t x626 = 1U;
	volatile uint16_t x627 = UINT16_MAX;
	int32_t x628 = INT32_MIN;

    t139 = (x625-((x626%x627)*x628));

    if (t139 != 11917135927810LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x630 = 62863951LL;
	volatile int8_t x631 = -1;
	int64_t x632 = -1LL;
	int64_t t140 = 53794054LL;

    t140 = (x629-((x630%x631)*x632));

    if (t140 != 2147483647LL) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x633 = -1;
	volatile uint8_t x634 = UINT8_MAX;
	uint8_t x636 = 7U;
	volatile int32_t t141 = 6011;

    t141 = (x633-((x634%x635)*x636));

    if (t141 != -1786) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x637 = INT16_MIN;
	uint64_t x638 = 1154457LLU;
	uint32_t x640 = UINT32_MAX;
	static volatile uint64_t t142 = 28540060286965519LLU;

    t142 = (x637-((x638%x639)*x640));

    if (t142 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x641 = INT64_MIN;
	static int32_t x642 = INT32_MIN;
	int64_t x643 = INT64_MIN;

    t143 = (x641-((x642%x643)*x644));

    if (t143 != -4611686020574871552LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x645 = 1U;
	static uint8_t x647 = 112U;
	volatile int32_t x648 = INT32_MIN;
	volatile int64_t t144 = -14041784728LL;

    t144 = (x645-((x646%x647)*x648));

    if (t144 != -137438953471LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x649 = 49617U;
	volatile uint64_t x650 = UINT64_MAX;
	int32_t x651 = INT32_MAX;
	int8_t x652 = INT8_MIN;
	volatile uint64_t t145 = 1805395400209LLU;

    t145 = (x649-((x650%x651)*x652));

    if (t145 != 50001LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x658 = INT16_MAX;
	uint8_t x659 = 79U;
	volatile uint32_t t146 = 894557629U;

    t146 = (x657-((x658%x659)*x660));

    if (t146 != 103U) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x661 = 1U;
	uint16_t x662 = 62U;
	int32_t x664 = -6094775;
	uint32_t t147 = 10791U;

    t147 = (x661-((x662%x663)*x664));

    if (t147 != 377876051U) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x665 = INT16_MIN;
	static int64_t x666 = 618765494723463313LL;
	int16_t x667 = -2;
	int16_t x668 = 1196;
	volatile int64_t t148 = 10484650500705LL;

    t148 = (x665-((x666%x667)*x668));

    if (t148 != -33964LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x669 = -2;
	uint64_t x671 = UINT64_MAX;
	static volatile uint64_t t149 = 535155310177873LLU;

    t149 = (x669-((x670%x671)*x672));

    if (t149 != 2147483645LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x673 = 976769145LLU;

    t150 = (x673-((x674%x675)*x676));

    if (t150 != 18445940458408156227LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x678 = INT64_MIN;
	static volatile uint64_t x679 = UINT64_MAX;
	int16_t x680 = INT16_MAX;
	uint64_t t151 = 7LLU;

    t151 = (x677-((x678%x679)*x680));

    if (t151 != 9223372036854841343LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x681 = 22558538U;
	static volatile int16_t x682 = 1;
	static int64_t x683 = INT64_MAX;
	volatile int64_t t152 = -6LL;

    t152 = (x681-((x682%x683)*x684));

    if (t152 != 22591306LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x685 = 3U;
	uint8_t x688 = UINT8_MAX;

    t153 = (x685-((x686%x687)*x688));

    if (t153 != 258) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x689 = 5;
	static int32_t x692 = INT32_MAX;
	int64_t t154 = 859812235050385107LL;

    t154 = (x689-((x690%x691)*x692));

    if (t154 != -547608329980LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x697 = INT8_MIN;
	int64_t x699 = 362509345161831LL;
	int64_t t155 = -34885001429LL;

    t155 = (x697-((x698%x699)*x700));

    if (t155 != -176093659223LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x701 = -5;
	int32_t x703 = 7385523;
	int8_t x704 = INT8_MAX;
	static volatile uint64_t t156 = 1347354436128LLU;

    t156 = (x701-((x702%x703)*x704));

    if (t156 != 18446744073706612577LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x707 = 54U;
	volatile int64_t x708 = INT64_MAX;
	static volatile uint64_t t157 = 739854LLU;

    t157 = (x705-((x706%x707)*x708));

    if (t157 != 9223372036854775731LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x709 = INT64_MAX;
	uint16_t x710 = 29745U;
	uint8_t x711 = UINT8_MAX;
	int16_t x712 = 7691;

    t158 = (x709-((x710%x711)*x712));

    if (t158 != 9223372036853506792LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x713 = INT32_MIN;
	int16_t x714 = -8;
	uint8_t x715 = 8U;
	int16_t x716 = -47;
	volatile int32_t t159 = INT32_MIN;

    t159 = (x713-((x714%x715)*x716));

    if (t159 != INT32_MIN) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x717 = UINT16_MAX;
	int64_t x719 = INT64_MIN;
	uint64_t x720 = 287503707315397LLU;
	uint64_t t160 = 225221086LLU;

    t160 = (x717-((x718%x719)*x720));

    if (t160 != 3014235369363840196LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x721 = INT8_MIN;
	int32_t x722 = INT32_MIN;
	uint16_t x723 = 3U;
	int32_t t161 = -163068;

    t161 = (x721-((x722%x723)*x724));

    if (t161 != -126) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint32_t x725 = 45961U;
	uint8_t x726 = 114U;
	int16_t x728 = INT16_MIN;
	int64_t t162 = 65920375447LL;

    t162 = (x725-((x726%x727)*x728));

    if (t162 != 3781513LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x729 = 7;
	uint16_t x731 = 193U;
	int8_t x732 = INT8_MAX;
	int32_t t163 = -1;

    t163 = (x729-((x730%x731)*x732));

    if (t163 != 134) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x733 = INT32_MAX;
	int16_t x736 = -1;

    t164 = (x733-((x734%x735)*x736));

    if (t164 != 2147895015LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x737 = INT32_MIN;
	static uint64_t x739 = UINT64_MAX;
	static volatile uint64_t t165 = 0LLU;

    t165 = (x737-((x738%x739)*x740));

    if (t165 != 18446744071562071397LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x741 = -1;
	int16_t x742 = -1;
	volatile uint16_t x743 = UINT16_MAX;
	static uint64_t x744 = UINT64_MAX;

    t166 = (x741-((x742%x743)*x744));

    if (t166 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint64_t x745 = 0LLU;

    t167 = (x745-((x746%x747)*x748));

    if (t167 != 0LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x749 = 0U;
	int16_t x750 = -2765;
	static int32_t x751 = INT32_MIN;
	volatile uint32_t t168 = 3U;

    t168 = (x749-((x750%x751)*x752));

    if (t168 != 4294613376U) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint16_t x753 = 996U;
	int32_t x754 = INT32_MAX;
	uint64_t x755 = 1032886785635995651LLU;
	int64_t x756 = INT64_MIN;
	volatile uint64_t t169 = 1431280274938551351LLU;

    t169 = (x753-((x754%x755)*x756));

    if (t169 != 9223372036854776804LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x757 = INT8_MIN;
	uint8_t x759 = UINT8_MAX;
	int16_t x760 = -99;
	uint32_t t170 = 229047U;

    t170 = (x757-((x758%x759)*x760));

    if (t170 != 3733U) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x761 = -1;
	volatile uint64_t x762 = UINT64_MAX;
	int32_t x763 = -1;
	static uint64_t t171 = UINT64_MAX;

    t171 = (x761-((x762%x763)*x764));

    if (t171 != UINT64_MAX) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x765 = 123979201LLU;
	int32_t x767 = INT32_MIN;
	volatile int8_t x768 = INT8_MIN;
	volatile uint64_t t172 = 242499LLU;

    t172 = (x765-((x766%x767)*x768));

    if (t172 != 275001886017LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	static int16_t x769 = INT16_MAX;
	static uint64_t x771 = UINT64_MAX;
	int8_t x772 = -1;
	uint64_t t173 = 34873683373855LLU;

    t173 = (x769-((x770%x771)*x772));

    if (t173 != 32767LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x773 = 0;
	static int16_t x776 = INT16_MAX;
	int64_t t174 = 1755457849863363LL;

    t174 = (x773-((x774%x775)*x776));

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x778 = -1;
	int64_t x779 = INT64_MAX;
	uint8_t x780 = UINT8_MAX;
	int64_t t175 = 108885567083LL;

    t175 = (x777-((x778%x779)*x780));

    if (t175 != 1732076LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static int32_t x785 = INT32_MIN;
	static int64_t x786 = INT64_MIN;
	int16_t x787 = -1;
	static int64_t x788 = INT64_MIN;
	volatile int64_t t176 = 779053891526002LL;

    t176 = (x785-((x786%x787)*x788));

    if (t176 != -2147483648LL) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int16_t x789 = INT16_MAX;
	volatile int32_t x790 = INT32_MIN;
	static int8_t x791 = INT8_MIN;
	int32_t x792 = -368222;
	int32_t t177 = -1732438;

    t177 = (x789-((x790%x791)*x792));

    if (t177 != 32767) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x793 = INT64_MIN;
	int8_t x794 = -1;
	int64_t x795 = 23987883585496LL;
	static volatile uint8_t x796 = 54U;
	volatile int64_t t178 = 2884029984LL;

    t178 = (x793-((x794%x795)*x796));

    if (t178 != -9223372036854775754LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x798 = INT8_MAX;
	volatile int32_t x800 = -1;
	static int32_t t179 = -264;

    t179 = (x797-((x798%x799)*x800));

    if (t179 != 127) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x801 = 489U;
	uint16_t x802 = UINT16_MAX;
	int32_t x803 = 2820946;
	volatile uint64_t x804 = 64905676459LLU;
	volatile uint64_t t180 = 38653837422726444LLU;

    t180 = (x801-((x802%x803)*x804));

    if (t180 != 18442490480202811540LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x805 = INT8_MIN;
	uint16_t x806 = 15433U;
	int32_t x807 = INT32_MAX;
	uint32_t x808 = 879U;
	volatile uint32_t t181 = 2898378U;

    t181 = (x805-((x806%x807)*x808));

    if (t181 != 4281401561U) { NG(); } else { ; }
	
}

void f182(void) {
    	static int16_t x809 = 15;
	int64_t x811 = 518801LL;
	static uint8_t x812 = UINT8_MAX;
	volatile uint64_t t182 = 24LLU;

    t182 = (x809-((x810%x811)*x812));

    if (t182 != 18446744073602280016LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x813 = 667160461834679602LLU;
	static uint8_t x814 = UINT8_MAX;
	int8_t x815 = INT8_MIN;
	volatile uint64_t x816 = 13518290LLU;

    t183 = (x813-((x814%x815)*x816));

    if (t183 != 667160460117856772LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x817 = 237487341912LL;
	uint32_t x818 = 24495755U;
	static int64_t x819 = -1851870334227290430LL;
	int64_t t184 = 512224952546141LL;

    t184 = (x817-((x818%x819)*x820));

    if (t184 != -159803200853863LL) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x825 = 1;
	uint8_t x826 = UINT8_MAX;
	static int64_t x827 = INT64_MIN;
	static uint32_t x828 = 3771888U;
	int64_t t185 = 80238359LL;

    t185 = (x825-((x826%x827)*x828));

    if (t185 != -961831439LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x829 = 572505927064189782LLU;
	uint64_t x830 = UINT64_MAX;
	uint8_t x831 = UINT8_MAX;
	int32_t x832 = 2095704;
	uint64_t t186 = 1319997195432LLU;

    t186 = (x829-((x830%x831)*x832));

    if (t186 != 572505927064189782LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t x833 = -1;
	static uint16_t x835 = UINT16_MAX;
	volatile int32_t t187 = -134;

    t187 = (x833-((x834%x835)*x836));

    if (t187 != -58) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x837 = -1;
	uint8_t x838 = 66U;
	int32_t x839 = INT32_MAX;
	volatile int32_t t188 = -35625;

    t188 = (x837-((x838%x839)*x840));

    if (t188 != 65) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int8_t x845 = INT8_MIN;
	int8_t x846 = -57;
	int64_t x847 = -1LL;
	int16_t x848 = 4795;
	int64_t t189 = 0LL;

    t189 = (x845-((x846%x847)*x848));

    if (t189 != -128LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x854 = 748;
	volatile uint32_t x855 = 17U;
	uint16_t x856 = 30177U;
	volatile int64_t t190 = 0LL;

    t190 = (x853-((x854%x855)*x856));

    if (t190 != -1LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x857 = 1441255739990051664LLU;
	int64_t x858 = INT64_MAX;
	static uint8_t x859 = UINT8_MAX;
	uint8_t x860 = 2U;
	uint64_t t191 = 1236649LLU;

    t191 = (x857-((x858%x859)*x860));

    if (t191 != 1441255739990051410LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x861 = INT8_MIN;
	volatile int32_t x862 = -1;
	int32_t x863 = INT32_MIN;
	volatile uint64_t t192 = 3579597563049168592LLU;

    t192 = (x861-((x862%x863)*x864));

    if (t192 != 2945450762614745LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x865 = INT16_MAX;
	int16_t x866 = INT16_MAX;
	uint16_t x867 = UINT16_MAX;
	volatile int8_t x868 = -12;
	volatile int32_t t193 = 5946;

    t193 = (x865-((x866%x867)*x868));

    if (t193 != 425971) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x877 = -43;
	int32_t x879 = INT32_MAX;
	int16_t x880 = INT16_MAX;
	volatile int32_t t194 = -144028322;

    t194 = (x877-((x878%x879)*x880));

    if (t194 != 19463555) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x882 = INT32_MIN;
	int8_t x884 = INT8_MIN;
	volatile int32_t t195 = 13;

    t195 = (x881-((x882%x883)*x884));

    if (t195 != -130596) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x885 = 486LLU;
	int64_t x886 = -1LL;
	int8_t x888 = 1;
	volatile uint64_t t196 = 16746150623LLU;

    t196 = (x885-((x886%x887)*x888));

    if (t196 != 18446744065348502302LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x889 = 105U;
	volatile int64_t x890 = -1LL;
	int32_t x892 = INT32_MIN;
	int64_t t197 = -97485322LL;

    t197 = (x889-((x890%x891)*x892));

    if (t197 != -2147483543LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x893 = 12684U;
	static int16_t x895 = INT16_MIN;
	uint32_t x896 = 4597970U;
	volatile uint32_t t198 = 13U;

    t198 = (x893-((x894%x895)*x896));

    if (t198 != 12684U) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x897 = -1;
	volatile int16_t x898 = INT16_MAX;
	static int16_t x899 = 26;
	volatile uint32_t t199 = 32497U;

    t199 = (x897-((x898%x899)*x900));

    if (t199 != 4294755524U) { NG(); } else { ; }
	
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

