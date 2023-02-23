
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

int16_t x2 = INT16_MIN;
int8_t x10 = INT8_MAX;
static int64_t x14 = -6417380LL;
int8_t x32 = INT8_MIN;
int32_t x33 = -14802;
static int64_t x47 = INT64_MAX;
int32_t x48 = INT32_MAX;
int8_t x52 = -37;
uint64_t x57 = UINT64_MAX;
int16_t x63 = -104;
int64_t x78 = INT64_MAX;
int8_t x79 = INT8_MIN;
static int64_t x82 = 255899LL;
int32_t x91 = INT32_MAX;
uint16_t x98 = 21U;
volatile int32_t x99 = 885;
uint16_t x100 = 249U;
volatile int64_t x104 = INT64_MAX;
volatile uint64_t t20 = 16195221221015052LLU;
int32_t x105 = INT32_MIN;
static int8_t x109 = INT8_MIN;
volatile int32_t x110 = INT32_MAX;
static int64_t x112 = -1LL;
volatile int8_t x114 = -5;
int16_t x121 = INT16_MIN;
int8_t x123 = -1;
uint8_t x129 = UINT8_MAX;
int32_t t26 = -453019475;
uint32_t x142 = 661091223U;
static int16_t x155 = -1698;
volatile int8_t x159 = -56;
int64_t x163 = -14617655822LL;
static uint64_t x170 = 15464116LLU;
volatile int64_t x184 = 63874346054LL;
int16_t x185 = -1775;
int32_t t38 = -155373875;
uint16_t x201 = 3U;
static int64_t x203 = -1LL;
uint8_t x205 = UINT8_MAX;
int8_t x228 = -1;
uint32_t x233 = 5094U;
volatile uint32_t x234 = 36U;
volatile uint32_t t43 = 946U;
int8_t x245 = -1;
uint8_t x259 = 0U;
int16_t x261 = INT16_MAX;
static uint8_t x263 = 3U;
int64_t t48 = -971302874283LL;
static int16_t x276 = INT16_MIN;
int16_t x287 = -104;
static volatile int8_t x288 = INT8_MAX;
int16_t x289 = INT16_MAX;
volatile uint32_t x290 = UINT32_MAX;
static volatile int32_t t53 = -49077958;
int8_t x296 = 8;
static int32_t x298 = INT32_MIN;
int16_t x299 = -1;
int32_t x301 = -1;
static int32_t x335 = -66790396;
volatile uint64_t t61 = 399504LLU;
uint32_t x343 = UINT32_MAX;
volatile int32_t x347 = -1;
static uint32_t x354 = 293005605U;
uint64_t x355 = UINT64_MAX;
int16_t x356 = 2;
volatile int8_t x366 = -53;
static int8_t x368 = INT8_MIN;
static volatile int32_t t71 = -15;
int16_t x383 = 61;
static int32_t x385 = INT32_MIN;
int16_t x390 = 1983;
uint8_t x392 = UINT8_MAX;
int64_t x406 = 182356LL;
int32_t t81 = 0;
int32_t x435 = -1;
volatile int32_t x437 = -1;
volatile uint32_t x438 = UINT32_MAX;
static uint8_t x442 = 92U;
static volatile int64_t x443 = -538396360612259LL;
volatile uint8_t x445 = 16U;
uint64_t x446 = UINT64_MAX;
static volatile int32_t t87 = 1719;
int32_t x450 = 47992894;
uint16_t x468 = UINT16_MAX;
int8_t x475 = 1;
volatile uint32_t x480 = 20275473U;
uint32_t t93 = 3U;
static volatile uint8_t x484 = 100U;
uint16_t x487 = 37U;
int8_t x492 = -1;
static uint64_t x501 = 2LLU;
uint16_t x502 = UINT16_MAX;
int64_t x503 = INT64_MIN;
int8_t x509 = INT8_MIN;
uint64_t x514 = 6LLU;
int16_t x519 = -1;
int16_t x534 = -1;
int64_t x536 = -1LL;
int64_t t106 = 0LL;
int8_t x541 = INT8_MAX;
static volatile uint64_t t109 = 0LLU;
int8_t x556 = INT8_MIN;
volatile int16_t x559 = 210;
uint16_t x566 = 5U;
int16_t x568 = -8343;
int8_t x579 = 2;
static uint64_t t116 = 0LLU;
int16_t x589 = -1;
volatile int32_t x606 = -1;
uint64_t x612 = 35214268858936LLU;
volatile int16_t x625 = -1180;
int64_t x626 = INT64_MIN;
int16_t x629 = -1;
int8_t x630 = INT8_MIN;
int32_t t123 = 4;
volatile int8_t x635 = INT8_MAX;
int64_t x638 = -1LL;
volatile int16_t x644 = -15162;
uint8_t x649 = 8U;
static uint8_t x652 = 35U;
int32_t t128 = 1;
volatile int8_t x660 = INT8_MIN;
int32_t t130 = 844;
static int8_t x666 = 17;
uint8_t x670 = 16U;
static int32_t x671 = 78;
int32_t x678 = 180689944;
int16_t x680 = -3187;
uint64_t x682 = UINT64_MAX;
int64_t x683 = INT64_MIN;
volatile int8_t x693 = INT8_MIN;
static int16_t x694 = INT16_MIN;
uint64_t t137 = 1761829LLU;
int32_t x703 = INT32_MIN;
volatile int16_t x704 = INT16_MIN;
int16_t x708 = -58;
uint64_t t140 = 280173312517LLU;
static int64_t x714 = INT64_MAX;
static int64_t x716 = -1LL;
int64_t x718 = INT64_MAX;
int16_t x719 = 9;
volatile int64_t t143 = 193650LL;
static int16_t x726 = 6148;
static volatile int8_t x727 = INT8_MIN;
int64_t t144 = -3953470437024979LL;
volatile int32_t t145 = 7700364;
static int16_t x735 = -1;
int32_t t146 = 8;
static int32_t x740 = INT32_MAX;
volatile uint32_t x753 = 90U;
int32_t x756 = -1;
int64_t x761 = INT64_MIN;
int64_t x764 = -237LL;
static volatile int8_t x768 = -1;
uint16_t x771 = UINT16_MAX;
int16_t x774 = INT16_MIN;
int64_t x778 = INT64_MIN;
uint16_t x780 = UINT16_MAX;
int64_t t154 = 34508354548LL;
uint64_t x797 = 400135LLU;
static uint8_t x798 = UINT8_MAX;
uint16_t x808 = 13U;
int32_t x812 = 1;
static int8_t x825 = INT8_MIN;
int64_t x828 = 71872676LL;
static int64_t t164 = -2033735LL;
int8_t x831 = 0;
volatile int64_t t165 = 6584LL;
int32_t x841 = INT32_MIN;
static volatile int32_t x846 = 1847;
int64_t x848 = 92048266LL;
volatile int8_t x854 = INT8_MIN;
static int32_t x855 = -212213;
int32_t x857 = -1;
int32_t x868 = -1;
uint32_t t174 = 108U;
int16_t x872 = INT16_MIN;
static volatile uint32_t x874 = UINT32_MAX;
int8_t x879 = -10;
uint16_t x881 = 1U;
volatile uint32_t x883 = 31703040U;
uint16_t x891 = 74U;
int32_t x892 = -1;
static volatile int32_t t181 = 6022808;
int32_t x897 = 1558072;
static int64_t x899 = -830LL;
int32_t x904 = 95583572;
int16_t x907 = INT16_MIN;
int16_t x910 = 1;
uint8_t x912 = 10U;
int64_t x919 = INT64_MAX;
int8_t x920 = INT8_MIN;
int64_t x923 = INT64_MIN;
int32_t x936 = -1;
volatile int64_t t190 = 590000LL;
uint32_t x945 = 3038916U;
uint64_t x948 = 85843817279LLU;
volatile uint64_t t192 = 17685161354219LLU;
int16_t x957 = INT16_MAX;
int32_t x968 = -15;
int32_t x976 = -1;
uint64_t x977 = 266657358683262LLU;
int32_t x978 = -1;
uint64_t x980 = 4303485602LLU;


void f0(void) {
    	int8_t x1 = INT8_MAX;
	static volatile int32_t x3 = -1;
	int32_t x4 = -4;
	volatile int32_t t0 = -509;

    t0 = (x1+((x2>x3)-x4));

    if (t0 != 131) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MAX;
	int64_t x6 = 9689328214609LL;
	static int16_t x7 = -1;
	uint16_t x8 = UINT16_MAX;
	volatile int32_t t1 = 3;

    t1 = (x5+((x6>x7)-x8));

    if (t1 != -65407) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = UINT8_MAX;
	int8_t x11 = INT8_MAX;
	static int16_t x12 = -3;
	int32_t t2 = 20;

    t2 = (x9+((x10>x11)-x12));

    if (t2 != 258) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MAX;
	static uint16_t x15 = 3032U;
	int32_t x16 = 0;
	volatile int32_t t3 = INT32_MAX;

    t3 = (x13+((x14>x15)-x16));

    if (t3 != INT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint32_t x17 = UINT32_MAX;
	int32_t x18 = 18;
	int8_t x19 = INT8_MIN;
	static uint16_t x20 = 0U;
	uint32_t t4 = 399647159U;

    t4 = (x17+((x18>x19)-x20));

    if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
    	static int64_t x25 = 28684877LL;
	int16_t x26 = 2250;
	int16_t x27 = INT16_MIN;
	int32_t x28 = 7719;
	volatile int64_t t5 = 56LL;

    t5 = (x25+((x26>x27)-x28));

    if (t5 != 28677159LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x29 = -3991;
	int8_t x30 = INT8_MAX;
	volatile int8_t x31 = INT8_MIN;
	static volatile int32_t t6 = -2;

    t6 = (x29+((x30>x31)-x32));

    if (t6 != -3862) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint8_t x34 = 7U;
	volatile uint64_t x35 = 7987477431LLU;
	uint64_t x36 = 273023671287827LLU;
	volatile uint64_t t7 = 326720467063636657LLU;

    t7 = (x33+((x34>x35)-x36));

    if (t7 != 18446471050038248987LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x37 = INT16_MIN;
	static int8_t x38 = INT8_MIN;
	int16_t x39 = -1;
	int64_t x40 = -1LL;
	volatile int64_t t8 = -768399891931LL;

    t8 = (x37+((x38>x39)-x40));

    if (t8 != -32767LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x41 = 20999U;
	volatile int16_t x42 = INT16_MIN;
	int64_t x43 = -190LL;
	uint64_t x44 = UINT64_MAX;
	static volatile uint64_t t9 = 377508790833488LLU;

    t9 = (x41+((x42>x43)-x44));

    if (t9 != 21000LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x45 = 3079U;
	static int16_t x46 = 0;
	volatile int32_t t10 = -351638;

    t10 = (x45+((x46>x47)-x48));

    if (t10 != -2147480568) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint64_t x49 = 3531289LLU;
	static int16_t x50 = INT16_MIN;
	uint8_t x51 = UINT8_MAX;
	uint64_t t11 = 198488940LLU;

    t11 = (x49+((x50>x51)-x52));

    if (t11 != 3531326LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int8_t x58 = 25;
	uint16_t x59 = 21006U;
	int8_t x60 = INT8_MIN;
	volatile uint64_t t12 = 1452789981082611LLU;

    t12 = (x57+((x58>x59)-x60));

    if (t12 != 127LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x61 = INT8_MIN;
	static uint32_t x62 = UINT32_MAX;
	uint16_t x64 = UINT16_MAX;
	int32_t t13 = 3448;

    t13 = (x61+((x62>x63)-x64));

    if (t13 != -65662) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x69 = -1;
	static int32_t x70 = 1;
	volatile uint64_t x71 = 1LLU;
	int16_t x72 = INT16_MIN;
	volatile int32_t t14 = 2141007;

    t14 = (x69+((x70>x71)-x72));

    if (t14 != 32767) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x77 = 40420362;
	volatile uint16_t x80 = 6397U;
	static int32_t t15 = -15985;

    t15 = (x77+((x78>x79)-x80));

    if (t15 != 40413966) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x81 = 0;
	static uint64_t x83 = 1925340LLU;
	uint16_t x84 = 3U;
	int32_t t16 = 194;

    t16 = (x81+((x82>x83)-x84));

    if (t16 != -3) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x85 = INT64_MIN;
	static int16_t x86 = 30;
	int64_t x87 = -1LL;
	int8_t x88 = -9;
	volatile int64_t t17 = -3LL;

    t17 = (x85+((x86>x87)-x88));

    if (t17 != -9223372036854775798LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x89 = 21;
	uint8_t x90 = UINT8_MAX;
	uint8_t x92 = 31U;
	int32_t t18 = 3192;

    t18 = (x89+((x90>x91)-x92));

    if (t18 != -10) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x97 = UINT32_MAX;
	uint32_t t19 = 215335U;

    t19 = (x97+((x98>x99)-x100));

    if (t19 != 4294967046U) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x101 = UINT64_MAX;
	uint16_t x102 = 26063U;
	static uint64_t x103 = UINT64_MAX;

    t20 = (x101+((x102>x103)-x104));

    if (t20 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x106 = INT16_MAX;
	volatile int16_t x107 = -1;
	int64_t x108 = -1LL;
	int64_t t21 = -88669113LL;

    t21 = (x105+((x106>x107)-x108));

    if (t21 != -2147483646LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x111 = -1;
	volatile int64_t t22 = -2355789LL;

    t22 = (x109+((x110>x111)-x112));

    if (t22 != -126LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x113 = 7;
	uint64_t x115 = UINT64_MAX;
	volatile uint64_t x116 = 237493013LLU;
	uint64_t t23 = 521752770LLU;

    t23 = (x113+((x114>x115)-x116));

    if (t23 != 18446744073472058610LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x117 = -36936487;
	volatile int16_t x118 = -1;
	volatile int32_t x119 = -1;
	uint64_t x120 = UINT64_MAX;
	uint64_t t24 = 122409990406LLU;

    t24 = (x117+((x118>x119)-x120));

    if (t24 != 18446744073672615130LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x122 = INT32_MIN;
	int16_t x124 = INT16_MIN;
	int32_t t25 = -20967;

    t25 = (x121+((x122>x123)-x124));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint8_t x130 = UINT8_MAX;
	int32_t x131 = INT32_MAX;
	static int16_t x132 = 7;

    t26 = (x129+((x130>x131)-x132));

    if (t26 != 248) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x137 = INT16_MIN;
	volatile uint32_t x138 = 11033U;
	int64_t x139 = 3493978LL;
	int8_t x140 = -1;
	static int32_t t27 = 58884862;

    t27 = (x137+((x138>x139)-x140));

    if (t27 != -32767) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x141 = INT32_MIN;
	int64_t x143 = 4381165LL;
	int8_t x144 = 0;
	volatile int32_t t28 = 13411446;

    t28 = (x141+((x142>x143)-x144));

    if (t28 != -2147483647) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x153 = INT32_MIN;
	int32_t x154 = -27529;
	static uint64_t x156 = UINT64_MAX;
	volatile uint64_t t29 = 85119901687264209LLU;

    t29 = (x153+((x154>x155)-x156));

    if (t29 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x157 = -1;
	uint16_t x158 = UINT16_MAX;
	int16_t x160 = INT16_MIN;
	static volatile int32_t t30 = -722;

    t30 = (x157+((x158>x159)-x160));

    if (t30 != 32768) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x161 = UINT16_MAX;
	uint64_t x162 = 59210746LLU;
	uint8_t x164 = 104U;
	int32_t t31 = 368823321;

    t31 = (x161+((x162>x163)-x164));

    if (t31 != 65431) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x165 = 28;
	volatile int32_t x166 = INT32_MAX;
	static int64_t x167 = INT64_MIN;
	int32_t x168 = -336417;
	int32_t t32 = 1129;

    t32 = (x165+((x166>x167)-x168));

    if (t32 != 336446) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x169 = INT32_MIN;
	int16_t x171 = INT16_MIN;
	volatile int64_t x172 = 1LL;
	int64_t t33 = -6217120573LL;

    t33 = (x169+((x170>x171)-x172));

    if (t33 != -2147483649LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x173 = 7U;
	int16_t x174 = -6814;
	int32_t x175 = -1;
	volatile uint32_t x176 = 3616199U;
	static volatile uint32_t t34 = 17109U;

    t34 = (x173+((x174>x175)-x176));

    if (t34 != 4291351104U) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x177 = -1;
	int16_t x178 = 39;
	int64_t x179 = INT64_MIN;
	volatile int16_t x180 = INT16_MAX;
	volatile int32_t t35 = 21230;

    t35 = (x177+((x178>x179)-x180));

    if (t35 != -32767) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x181 = INT32_MAX;
	int64_t x182 = INT64_MAX;
	uint8_t x183 = 1U;
	volatile int64_t t36 = 364LL;

    t36 = (x181+((x182>x183)-x184));

    if (t36 != -61726862406LL) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x186 = INT16_MIN;
	uint64_t x187 = 22881595LLU;
	static uint32_t x188 = 22078U;
	volatile uint32_t t37 = 18635U;

    t37 = (x185+((x186>x187)-x188));

    if (t37 != 4294943444U) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x189 = UINT16_MAX;
	volatile int32_t x190 = -773;
	int8_t x191 = INT8_MAX;
	int8_t x192 = INT8_MIN;

    t38 = (x189+((x190>x191)-x192));

    if (t38 != 65663) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint16_t x202 = 149U;
	volatile uint32_t x204 = UINT32_MAX;
	volatile uint32_t t39 = 7766197U;

    t39 = (x201+((x202>x203)-x204));

    if (t39 != 5U) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x206 = 1;
	static int32_t x207 = INT32_MIN;
	int64_t x208 = INT64_MAX;
	int64_t t40 = 521141LL;

    t40 = (x205+((x206>x207)-x208));

    if (t40 != -9223372036854775551LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x221 = 12972529303LL;
	volatile int64_t x222 = -3LL;
	int64_t x223 = -1LL;
	int16_t x224 = INT16_MIN;
	int64_t t41 = -11079727415129755LL;

    t41 = (x221+((x222>x223)-x224));

    if (t41 != 12972562071LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x225 = -1;
	int8_t x226 = -1;
	int8_t x227 = INT8_MIN;
	volatile int32_t t42 = -82060;

    t42 = (x225+((x226>x227)-x228));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x235 = 4;
	int32_t x236 = INT32_MAX;

    t43 = (x233+((x234>x235)-x236));

    if (t43 != 2147488744U) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x237 = UINT32_MAX;
	int16_t x238 = -1;
	int8_t x239 = INT8_MAX;
	static volatile int32_t x240 = -61978;
	static volatile uint32_t t44 = 1U;

    t44 = (x237+((x238>x239)-x240));

    if (t44 != 61977U) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint8_t x246 = 25U;
	static uint8_t x247 = 43U;
	int32_t x248 = -1;
	int32_t t45 = -1032847;

    t45 = (x245+((x246>x247)-x248));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int64_t x253 = -191700443386LL;
	uint8_t x254 = UINT8_MAX;
	int32_t x255 = -454484;
	int32_t x256 = -1;
	volatile int64_t t46 = 4040835273741099540LL;

    t46 = (x253+((x254>x255)-x256));

    if (t46 != -191700443384LL) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x257 = 0;
	volatile uint16_t x258 = 30U;
	static int32_t x260 = 48866;
	int32_t t47 = 1;

    t47 = (x257+((x258>x259)-x260));

    if (t47 != -48865) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x262 = -1LL;
	int64_t x264 = -148447558LL;

    t48 = (x261+((x262>x263)-x264));

    if (t48 != 148480325LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x265 = INT32_MAX;
	int64_t x266 = -63628495167971LL;
	int16_t x267 = INT16_MAX;
	static uint16_t x268 = 45U;
	static int32_t t49 = 55582;

    t49 = (x265+((x266>x267)-x268));

    if (t49 != 2147483602) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x273 = 5027467582692LLU;
	int16_t x274 = INT16_MAX;
	uint16_t x275 = UINT16_MAX;
	uint64_t t50 = 6291636670839LLU;

    t50 = (x273+((x274>x275)-x276));

    if (t50 != 5027467615460LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x281 = -1;
	static uint8_t x282 = 19U;
	int64_t x283 = -1LL;
	static volatile uint8_t x284 = 104U;
	volatile int32_t t51 = 5;

    t51 = (x281+((x282>x283)-x284));

    if (t51 != -104) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x285 = -1LL;
	volatile int32_t x286 = INT32_MIN;
	static int64_t t52 = -208797445381LL;

    t52 = (x285+((x286>x287)-x288));

    if (t52 != -128LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x291 = INT64_MIN;
	int32_t x292 = -1;

    t53 = (x289+((x290>x291)-x292));

    if (t53 != 32769) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x293 = -1;
	volatile int16_t x294 = -1;
	volatile uint16_t x295 = UINT16_MAX;
	int32_t t54 = 3;

    t54 = (x293+((x294>x295)-x296));

    if (t54 != -9) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x297 = 153;
	static int8_t x300 = INT8_MIN;
	volatile int32_t t55 = -890017042;

    t55 = (x297+((x298>x299)-x300));

    if (t55 != 281) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x302 = INT16_MAX;
	int32_t x303 = INT32_MAX;
	uint16_t x304 = UINT16_MAX;
	int32_t t56 = 191;

    t56 = (x301+((x302>x303)-x304));

    if (t56 != -65536) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile uint8_t x313 = 7U;
	uint8_t x314 = 16U;
	int16_t x315 = INT16_MIN;
	static volatile int16_t x316 = INT16_MAX;
	volatile int32_t t57 = -18;

    t57 = (x313+((x314>x315)-x316));

    if (t57 != -32759) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x317 = -1LL;
	int32_t x318 = 0;
	uint8_t x319 = 0U;
	int16_t x320 = INT16_MIN;
	static volatile int64_t t58 = 1567416LL;

    t58 = (x317+((x318>x319)-x320));

    if (t58 != 32767LL) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint16_t x325 = 42U;
	int8_t x326 = INT8_MIN;
	int8_t x327 = INT8_MAX;
	volatile int32_t x328 = 9;
	volatile int32_t t59 = -530876;

    t59 = (x325+((x326>x327)-x328));

    if (t59 != 33) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x329 = UINT16_MAX;
	static int32_t x330 = INT32_MIN;
	int32_t x331 = INT32_MIN;
	uint8_t x332 = UINT8_MAX;
	static volatile int32_t t60 = 142;

    t60 = (x329+((x330>x331)-x332));

    if (t60 != 65280) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x333 = INT64_MIN;
	uint8_t x334 = UINT8_MAX;
	uint64_t x336 = 9566137LLU;

    t61 = (x333+((x334>x335)-x336));

    if (t61 != 9223372036845209672LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x341 = 12583LL;
	int16_t x342 = INT16_MIN;
	static volatile int16_t x344 = INT16_MAX;
	volatile int64_t t62 = 72096751346680LL;

    t62 = (x341+((x342>x343)-x344));

    if (t62 != -20184LL) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x345 = -1;
	volatile uint32_t x346 = 0U;
	static int64_t x348 = -1LL;
	static volatile int64_t t63 = -1LL;

    t63 = (x345+((x346>x347)-x348));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int64_t x349 = -1LL;
	static volatile int32_t x350 = INT32_MIN;
	int32_t x351 = -6059098;
	volatile uint8_t x352 = UINT8_MAX;
	static volatile int64_t t64 = -4585880658309759LL;

    t64 = (x349+((x350>x351)-x352));

    if (t64 != -256LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x353 = INT8_MIN;
	static int32_t t65 = 138;

    t65 = (x353+((x354>x355)-x356));

    if (t65 != -130) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x357 = 15U;
	int8_t x358 = 28;
	uint16_t x359 = 0U;
	volatile uint8_t x360 = UINT8_MAX;
	int32_t t66 = -25837;

    t66 = (x357+((x358>x359)-x360));

    if (t66 != -239) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x361 = 3294;
	int32_t x362 = INT32_MIN;
	int32_t x363 = -1;
	uint32_t x364 = 300716U;
	uint32_t t67 = 4461922U;

    t67 = (x361+((x362>x363)-x364));

    if (t67 != 4294669874U) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x365 = INT8_MIN;
	int32_t x367 = INT32_MAX;
	volatile int32_t t68 = -9527275;

    t68 = (x365+((x366>x367)-x368));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x369 = -66405716;
	int32_t x370 = -527197726;
	uint8_t x371 = 16U;
	static int16_t x372 = -1;
	volatile int32_t t69 = 47823445;

    t69 = (x369+((x370>x371)-x372));

    if (t69 != -66405715) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x373 = INT64_MIN;
	uint8_t x374 = 13U;
	uint32_t x375 = 654394161U;
	uint64_t x376 = UINT64_MAX;
	volatile uint64_t t70 = 3329984702LLU;

    t70 = (x373+((x374>x375)-x376));

    if (t70 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x377 = 1;
	uint32_t x378 = UINT32_MAX;
	int16_t x379 = INT16_MAX;
	int8_t x380 = INT8_MIN;

    t71 = (x377+((x378>x379)-x380));

    if (t71 != 130) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x381 = INT8_MAX;
	int16_t x382 = INT16_MIN;
	static volatile int64_t x384 = INT64_MAX;
	int64_t t72 = 93992876LL;

    t72 = (x381+((x382>x383)-x384));

    if (t72 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x386 = -1LL;
	int32_t x387 = 27;
	int64_t x388 = -277019041LL;
	volatile int64_t t73 = 3429523LL;

    t73 = (x385+((x386>x387)-x388));

    if (t73 != -1870464607LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x389 = -1;
	volatile uint32_t x391 = 77U;
	volatile int32_t t74 = 368;

    t74 = (x389+((x390>x391)-x392));

    if (t74 != -255) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x397 = -1;
	int64_t x398 = INT64_MIN;
	uint32_t x399 = 199817U;
	int16_t x400 = -1;
	int32_t t75 = -28515143;

    t75 = (x397+((x398>x399)-x400));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x401 = UINT8_MAX;
	int32_t x402 = -1;
	int8_t x403 = INT8_MAX;
	uint8_t x404 = 1U;
	volatile int32_t t76 = -24;

    t76 = (x401+((x402>x403)-x404));

    if (t76 != 254) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x405 = 1;
	static int16_t x407 = INT16_MIN;
	uint8_t x408 = 89U;
	static volatile int32_t t77 = -11526;

    t77 = (x405+((x406>x407)-x408));

    if (t77 != -87) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x409 = 26U;
	uint32_t x410 = 1404U;
	static int32_t x411 = INT32_MIN;
	int64_t x412 = -1LL;
	int64_t t78 = -46551916083798LL;

    t78 = (x409+((x410>x411)-x412));

    if (t78 != 27LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x413 = INT64_MIN;
	int8_t x414 = -2;
	uint8_t x415 = 99U;
	int8_t x416 = INT8_MIN;
	volatile int64_t t79 = -1LL;

    t79 = (x413+((x414>x415)-x416));

    if (t79 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x417 = INT8_MIN;
	static volatile int32_t x418 = INT32_MIN;
	uint32_t x419 = 76U;
	uint32_t x420 = 3U;
	static uint32_t t80 = 549U;

    t80 = (x417+((x418>x419)-x420));

    if (t80 != 4294967166U) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x421 = 97U;
	int8_t x422 = -17;
	int64_t x423 = INT64_MIN;
	static uint8_t x424 = UINT8_MAX;

    t81 = (x421+((x422>x423)-x424));

    if (t81 != -157) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x425 = INT32_MAX;
	static int32_t x426 = -1;
	int64_t x427 = INT64_MAX;
	uint8_t x428 = 26U;
	static int32_t t82 = 257782122;

    t82 = (x425+((x426>x427)-x428));

    if (t82 != 2147483621) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint16_t x429 = 148U;
	static uint32_t x430 = 300151U;
	static uint64_t x431 = 12256516LLU;
	static uint8_t x432 = UINT8_MAX;
	int32_t t83 = -213775476;

    t83 = (x429+((x430>x431)-x432));

    if (t83 != -107) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int64_t x433 = 3498584683727LL;
	static int16_t x434 = -1;
	volatile int32_t x436 = -1;
	int64_t t84 = -23574866720953316LL;

    t84 = (x433+((x434>x435)-x436));

    if (t84 != 3498584683728LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x439 = INT32_MIN;
	int8_t x440 = INT8_MAX;
	int32_t t85 = 24498362;

    t85 = (x437+((x438>x439)-x440));

    if (t85 != -127) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x441 = 1499160131851380005LLU;
	volatile int8_t x444 = INT8_MIN;
	volatile uint64_t t86 = 19LLU;

    t86 = (x441+((x442>x443)-x444));

    if (t86 != 1499160131851380134LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x447 = INT64_MAX;
	uint16_t x448 = 1U;

    t87 = (x445+((x446>x447)-x448));

    if (t87 != 16) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int64_t x449 = INT64_MIN;
	uint64_t x451 = 72718341905170363LLU;
	uint32_t x452 = UINT32_MAX;
	int64_t t88 = -4426353084506632771LL;

    t88 = (x449+((x450>x451)-x452));

    if (t88 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static int32_t x453 = -44;
	volatile uint32_t x454 = 25296U;
	int8_t x455 = -1;
	static int16_t x456 = INT16_MIN;
	volatile int32_t t89 = 23;

    t89 = (x453+((x454>x455)-x456));

    if (t89 != 32724) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x465 = -1;
	uint16_t x466 = 403U;
	volatile uint32_t x467 = 3788719U;
	int32_t t90 = -14291;

    t90 = (x465+((x466>x467)-x468));

    if (t90 != -65536) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x469 = INT32_MIN;
	uint64_t x470 = UINT64_MAX;
	uint32_t x471 = UINT32_MAX;
	volatile int8_t x472 = 1;
	int32_t t91 = INT32_MIN;

    t91 = (x469+((x470>x471)-x472));

    if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile int16_t x473 = INT16_MAX;
	volatile int64_t x474 = -1LL;
	int32_t x476 = -1;
	volatile int32_t t92 = 1;

    t92 = (x473+((x474>x475)-x476));

    if (t92 != 32768) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint16_t x477 = UINT16_MAX;
	static uint64_t x478 = 15754173202LLU;
	uint32_t x479 = 5U;

    t93 = (x477+((x478>x479)-x480));

    if (t93 != 4274757359U) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x481 = INT8_MIN;
	int16_t x482 = 1541;
	int8_t x483 = INT8_MIN;
	int32_t t94 = 0;

    t94 = (x481+((x482>x483)-x484));

    if (t94 != -227) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x485 = 29159910;
	int64_t x486 = INT64_MIN;
	int32_t x488 = INT32_MAX;
	int32_t t95 = -1;

    t95 = (x485+((x486>x487)-x488));

    if (t95 != -2118323737) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int8_t x489 = 0;
	uint32_t x490 = UINT32_MAX;
	int16_t x491 = -1;
	int32_t t96 = 424938;

    t96 = (x489+((x490>x491)-x492));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x493 = INT8_MIN;
	int64_t x494 = INT64_MAX;
	static int16_t x495 = INT16_MIN;
	static int16_t x496 = INT16_MIN;
	static volatile int32_t t97 = -6;

    t97 = (x493+((x494>x495)-x496));

    if (t97 != 32641) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x497 = -7LL;
	static int16_t x498 = -1;
	int16_t x499 = INT16_MIN;
	uint32_t x500 = 136828796U;
	static volatile int64_t t98 = 19423277308259005LL;

    t98 = (x497+((x498>x499)-x500));

    if (t98 != 4158138494LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile int16_t x504 = -1;
	volatile uint64_t t99 = 1334829LLU;

    t99 = (x501+((x502>x503)-x504));

    if (t99 != 4LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x505 = 4U;
	int16_t x506 = INT16_MIN;
	int32_t x507 = INT32_MIN;
	int8_t x508 = -1;
	static int32_t t100 = -2093111;

    t100 = (x505+((x506>x507)-x508));

    if (t100 != 6) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x510 = -14;
	static int64_t x511 = INT64_MIN;
	static uint64_t x512 = UINT64_MAX;
	volatile uint64_t t101 = 3LLU;

    t101 = (x509+((x510>x511)-x512));

    if (t101 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x513 = UINT16_MAX;
	uint8_t x515 = 86U;
	int8_t x516 = INT8_MIN;
	static int32_t t102 = 6382;

    t102 = (x513+((x514>x515)-x516));

    if (t102 != 65663) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x517 = INT8_MIN;
	uint8_t x518 = 1U;
	volatile uint64_t x520 = 220655763299LLU;
	volatile uint64_t t103 = 8577448530791249LLU;

    t103 = (x517+((x518>x519)-x520));

    if (t103 != 18446743853053788190LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint64_t x521 = UINT64_MAX;
	uint32_t x522 = 1893425696U;
	volatile int32_t x523 = -1;
	uint8_t x524 = 0U;
	static volatile uint64_t t104 = UINT64_MAX;

    t104 = (x521+((x522>x523)-x524));

    if (t104 != UINT64_MAX) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x525 = INT32_MIN;
	uint32_t x526 = 1953828U;
	int16_t x527 = INT16_MIN;
	int16_t x528 = INT16_MIN;
	static int32_t t105 = -1;

    t105 = (x525+((x526>x527)-x528));

    if (t105 != -2147450880) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x533 = -1;
	uint32_t x535 = 96051U;

    t106 = (x533+((x534>x535)-x536));

    if (t106 != 1LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static int16_t x537 = -1;
	int32_t x538 = INT32_MIN;
	int8_t x539 = 4;
	int8_t x540 = 0;
	int32_t t107 = 3;

    t107 = (x537+((x538>x539)-x540));

    if (t107 != -1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x542 = 21U;
	static uint16_t x543 = 1U;
	int8_t x544 = INT8_MIN;
	volatile int32_t t108 = 250791371;

    t108 = (x541+((x542>x543)-x544));

    if (t108 != 256) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x549 = 341496LLU;
	int16_t x550 = INT16_MIN;
	static int32_t x551 = -4;
	volatile int16_t x552 = INT16_MIN;

    t109 = (x549+((x550>x551)-x552));

    if (t109 != 374264LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x553 = INT64_MIN;
	int64_t x554 = INT64_MIN;
	static uint16_t x555 = UINT16_MAX;
	volatile int64_t t110 = 96857626383315LL;

    t110 = (x553+((x554>x555)-x556));

    if (t110 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x557 = UINT64_MAX;
	int8_t x558 = 51;
	int32_t x560 = INT32_MAX;
	uint64_t t111 = 11298899359758LLU;

    t111 = (x557+((x558>x559)-x560));

    if (t111 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x561 = 27866253U;
	int8_t x562 = 0;
	int32_t x563 = INT32_MAX;
	int8_t x564 = -1;
	volatile uint32_t t112 = 520487425U;

    t112 = (x561+((x562>x563)-x564));

    if (t112 != 27866254U) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int32_t x565 = INT32_MIN;
	uint16_t x567 = UINT16_MAX;
	volatile int32_t t113 = -10101460;

    t113 = (x565+((x566>x567)-x568));

    if (t113 != -2147475305) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x577 = 14U;
	uint8_t x578 = UINT8_MAX;
	uint32_t x580 = 1413873698U;
	volatile uint32_t t114 = 750U;

    t114 = (x577+((x578>x579)-x580));

    if (t114 != 2881093613U) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x581 = INT32_MAX;
	uint64_t x582 = 257990190808102452LLU;
	static int16_t x583 = INT16_MIN;
	static int8_t x584 = INT8_MAX;
	int32_t t115 = 4991165;

    t115 = (x581+((x582>x583)-x584));

    if (t115 != 2147483520) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x585 = INT8_MIN;
	static int32_t x586 = INT32_MIN;
	int16_t x587 = 16;
	uint64_t x588 = UINT64_MAX;

    t116 = (x585+((x586>x587)-x588));

    if (t116 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x590 = INT16_MAX;
	static volatile int32_t x591 = INT32_MIN;
	volatile int32_t x592 = -1;
	volatile int32_t t117 = 227151;

    t117 = (x589+((x590>x591)-x592));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x605 = UINT16_MAX;
	uint64_t x607 = 14793LLU;
	static volatile int16_t x608 = 0;
	volatile int32_t t118 = -614396085;

    t118 = (x605+((x606>x607)-x608));

    if (t118 != 65536) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x609 = INT32_MIN;
	uint8_t x610 = 23U;
	volatile int8_t x611 = INT8_MIN;
	uint64_t t119 = 265549434LLU;

    t119 = (x609+((x610>x611)-x612));

    if (t119 != 18446708857293209033LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x613 = 1562020988U;
	int64_t x614 = -1LL;
	uint8_t x615 = 16U;
	int64_t x616 = 24947223663LL;
	static volatile int64_t t120 = -129636836567807853LL;

    t120 = (x613+((x614>x615)-x616));

    if (t120 != -23385202675LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x621 = INT64_MAX;
	volatile int16_t x622 = 5;
	uint16_t x623 = UINT16_MAX;
	static int32_t x624 = INT32_MAX;
	volatile int64_t t121 = -716165793589LL;

    t121 = (x621+((x622>x623)-x624));

    if (t121 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x627 = INT8_MAX;
	static int8_t x628 = INT8_MAX;
	int32_t t122 = 0;

    t122 = (x625+((x626>x627)-x628));

    if (t122 != -1307) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x631 = 37U;
	int16_t x632 = 62;

    t123 = (x629+((x630>x631)-x632));

    if (t123 != -62) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint8_t x633 = UINT8_MAX;
	int32_t x634 = INT32_MIN;
	int16_t x636 = INT16_MAX;
	static volatile int32_t t124 = -4732998;

    t124 = (x633+((x634>x635)-x636));

    if (t124 != -32512) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x637 = UINT64_MAX;
	int32_t x639 = -1;
	static int8_t x640 = INT8_MIN;
	static uint64_t t125 = 3LLU;

    t125 = (x637+((x638>x639)-x640));

    if (t125 != 127LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x641 = UINT32_MAX;
	uint32_t x642 = 58578U;
	static int64_t x643 = -1LL;
	uint32_t t126 = 13U;

    t126 = (x641+((x642>x643)-x644));

    if (t126 != 15162U) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x645 = UINT64_MAX;
	int8_t x646 = 5;
	volatile int8_t x647 = 1;
	uint32_t x648 = UINT32_MAX;
	uint64_t t127 = 10379000983360226LLU;

    t127 = (x645+((x646>x647)-x648));

    if (t127 != 1LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x650 = INT64_MAX;
	int16_t x651 = INT16_MIN;

    t128 = (x649+((x650>x651)-x652));

    if (t128 != -26) { NG(); } else { ; }
	
}

void f129(void) {
    	static int32_t x653 = -2791482;
	static volatile int64_t x654 = -2503LL;
	int64_t x655 = INT64_MAX;
	static uint32_t x656 = UINT32_MAX;
	static uint32_t t129 = 35944926U;

    t129 = (x653+((x654>x655)-x656));

    if (t129 != 4292175815U) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x657 = INT8_MIN;
	int64_t x658 = INT64_MAX;
	static int8_t x659 = -1;

    t130 = (x657+((x658>x659)-x660));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x665 = INT64_MIN;
	volatile uint32_t x667 = UINT32_MAX;
	int16_t x668 = -1;
	volatile int64_t t131 = 130835887363LL;

    t131 = (x665+((x666>x667)-x668));

    if (t131 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x669 = 1;
	uint16_t x672 = UINT16_MAX;
	int32_t t132 = 13;

    t132 = (x669+((x670>x671)-x672));

    if (t132 != -65534) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x673 = 1U;
	uint16_t x674 = 62U;
	int8_t x675 = 2;
	static uint8_t x676 = 1U;
	static volatile uint32_t t133 = 73U;

    t133 = (x673+((x674>x675)-x676));

    if (t133 != 1U) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x677 = INT8_MIN;
	int8_t x679 = 34;
	volatile int32_t t134 = -1699;

    t134 = (x677+((x678>x679)-x680));

    if (t134 != 3060) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x681 = INT16_MAX;
	volatile int16_t x684 = -1;
	volatile int32_t t135 = 957;

    t135 = (x681+((x682>x683)-x684));

    if (t135 != 32769) { NG(); } else { ; }
	
}

void f136(void) {
    	static int8_t x685 = -1;
	int64_t x686 = 1LL;
	int16_t x687 = -399;
	static int32_t x688 = -14398;
	int32_t t136 = 120217;

    t136 = (x685+((x686>x687)-x688));

    if (t136 != 14398) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x695 = UINT64_MAX;
	uint64_t x696 = 20362150697868191LLU;

    t137 = (x693+((x694>x695)-x696));

    if (t137 != 18426381923011683297LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x701 = INT64_MIN;
	int32_t x702 = INT32_MIN;
	int64_t t138 = -58LL;

    t138 = (x701+((x702>x703)-x704));

    if (t138 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x705 = INT16_MIN;
	int8_t x706 = INT8_MAX;
	volatile uint16_t x707 = UINT16_MAX;
	int32_t t139 = 90;

    t139 = (x705+((x706>x707)-x708));

    if (t139 != -32710) { NG(); } else { ; }
	
}

void f140(void) {
    	static int8_t x709 = INT8_MIN;
	int64_t x710 = INT64_MIN;
	int16_t x711 = -1;
	static uint64_t x712 = UINT64_MAX;

    t140 = (x709+((x710>x711)-x712));

    if (t140 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint8_t x713 = 0U;
	int8_t x715 = -1;
	volatile int64_t t141 = 4314LL;

    t141 = (x713+((x714>x715)-x716));

    if (t141 != 2LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x717 = -1;
	uint8_t x720 = 9U;
	volatile int32_t t142 = -20;

    t142 = (x717+((x718>x719)-x720));

    if (t142 != -9) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x721 = UINT8_MAX;
	int8_t x722 = INT8_MAX;
	int16_t x723 = INT16_MIN;
	int64_t x724 = -25716096LL;

    t143 = (x721+((x722>x723)-x724));

    if (t143 != 25716352LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x725 = -527825117697939LL;
	int8_t x728 = INT8_MIN;

    t144 = (x725+((x726>x727)-x728));

    if (t144 != -527825117697810LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint8_t x729 = UINT8_MAX;
	int64_t x730 = 208LL;
	static uint8_t x731 = UINT8_MAX;
	int16_t x732 = -10;

    t145 = (x729+((x730>x731)-x732));

    if (t145 != 265) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x733 = 61U;
	static uint16_t x734 = 12U;
	int32_t x736 = 19035;

    t146 = (x733+((x734>x735)-x736));

    if (t146 != -18973) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x737 = INT16_MAX;
	uint32_t x738 = 1U;
	int8_t x739 = 1;
	volatile int32_t t147 = -12575;

    t147 = (x737+((x738>x739)-x740));

    if (t147 != -2147450880) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x754 = 12987;
	static uint8_t x755 = UINT8_MAX;
	uint32_t t148 = 327U;

    t148 = (x753+((x754>x755)-x756));

    if (t148 != 92U) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x762 = INT64_MAX;
	volatile int16_t x763 = INT16_MIN;
	int64_t t149 = -911138320315977943LL;

    t149 = (x761+((x762>x763)-x764));

    if (t149 != -9223372036854775570LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x765 = INT32_MIN;
	int64_t x766 = 4046LL;
	static int32_t x767 = INT32_MIN;
	volatile int32_t t150 = 304;

    t150 = (x765+((x766>x767)-x768));

    if (t150 != -2147483646) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x769 = INT64_MIN;
	int64_t x770 = INT64_MIN;
	static volatile uint64_t x772 = 455949867104LLU;
	static uint64_t t151 = 151762848667808LLU;

    t151 = (x769+((x770>x771)-x772));

    if (t151 != 9223371580904908704LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint8_t x773 = UINT8_MAX;
	uint64_t x775 = UINT64_MAX;
	int8_t x776 = -1;
	volatile int32_t t152 = -321302;

    t152 = (x773+((x774>x775)-x776));

    if (t152 != 256) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x777 = 10U;
	uint8_t x779 = UINT8_MAX;
	uint32_t t153 = 1U;

    t153 = (x777+((x778>x779)-x780));

    if (t153 != 4294901771U) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x781 = -55254404LL;
	uint64_t x782 = 1676LLU;
	volatile int16_t x783 = INT16_MIN;
	int16_t x784 = INT16_MIN;

    t154 = (x781+((x782>x783)-x784));

    if (t154 != -55221636LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x785 = INT16_MAX;
	volatile uint64_t x786 = 7804504901802898147LLU;
	volatile int64_t x787 = INT64_MIN;
	static int32_t x788 = -1;
	int32_t t155 = -27603;

    t155 = (x785+((x786>x787)-x788));

    if (t155 != 32768) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x789 = 1;
	volatile uint8_t x790 = 1U;
	int32_t x791 = INT32_MIN;
	static uint16_t x792 = 3U;
	int32_t t156 = -2;

    t156 = (x789+((x790>x791)-x792));

    if (t156 != -1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int64_t x793 = INT64_MIN;
	static int32_t x794 = 18732;
	static int16_t x795 = 0;
	int64_t x796 = -70LL;
	int64_t t157 = -450LL;

    t157 = (x793+((x794>x795)-x796));

    if (t157 != -9223372036854775737LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint32_t x799 = UINT32_MAX;
	uint32_t x800 = 0U;
	uint64_t t158 = 7487LLU;

    t158 = (x797+((x798>x799)-x800));

    if (t158 != 400135LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x801 = -43403;
	volatile int32_t x802 = 1355208;
	volatile int64_t x803 = INT64_MAX;
	int16_t x804 = INT16_MAX;
	static int32_t t159 = 102850637;

    t159 = (x801+((x802>x803)-x804));

    if (t159 != -76170) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x805 = 3211;
	int32_t x806 = INT32_MAX;
	int32_t x807 = -1;
	volatile int32_t t160 = 5624;

    t160 = (x805+((x806>x807)-x808));

    if (t160 != 3199) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x809 = INT16_MIN;
	int64_t x810 = -1LL;
	int8_t x811 = INT8_MAX;
	int32_t t161 = -712;

    t161 = (x809+((x810>x811)-x812));

    if (t161 != -32769) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x813 = -100119LL;
	volatile int16_t x814 = 868;
	int16_t x815 = INT16_MIN;
	int16_t x816 = -1;
	volatile int64_t t162 = -10550472553997LL;

    t162 = (x813+((x814>x815)-x816));

    if (t162 != -100117LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x821 = 0U;
	volatile int16_t x822 = 114;
	int16_t x823 = INT16_MIN;
	volatile int32_t x824 = INT32_MAX;
	volatile int32_t t163 = -7816371;

    t163 = (x821+((x822>x823)-x824));

    if (t163 != -2147483646) { NG(); } else { ; }
	
}

void f164(void) {
    	static int16_t x826 = -1;
	int16_t x827 = INT16_MAX;

    t164 = (x825+((x826>x827)-x828));

    if (t164 != -71872804LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x829 = 250059U;
	volatile int8_t x830 = 24;
	volatile int64_t x832 = -1LL;

    t165 = (x829+((x830>x831)-x832));

    if (t165 != 250061LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int8_t x833 = INT8_MAX;
	int32_t x834 = 24;
	static int32_t x835 = INT32_MAX;
	static volatile int64_t x836 = 37LL;
	static volatile int64_t t166 = -8649059030808LL;

    t166 = (x833+((x834>x835)-x836));

    if (t166 != 90LL) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint64_t x837 = UINT64_MAX;
	static volatile int8_t x838 = INT8_MIN;
	int16_t x839 = INT16_MIN;
	static int64_t x840 = 14355LL;
	volatile uint64_t t167 = 8871LLU;

    t167 = (x837+((x838>x839)-x840));

    if (t167 != 18446744073709537261LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x842 = -1;
	int8_t x843 = INT8_MIN;
	int8_t x844 = INT8_MIN;
	int32_t t168 = -111988;

    t168 = (x841+((x842>x843)-x844));

    if (t168 != -2147483519) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x845 = 2;
	static int8_t x847 = INT8_MIN;
	static int64_t t169 = 13189242458114LL;

    t169 = (x845+((x846>x847)-x848));

    if (t169 != -92048263LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x849 = -2319;
	uint64_t x850 = 29172545LLU;
	int64_t x851 = 1084LL;
	int8_t x852 = 3;
	int32_t t170 = 6758680;

    t170 = (x849+((x850>x851)-x852));

    if (t170 != -2321) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int32_t x853 = -45;
	int32_t x856 = -1;
	static volatile int32_t t171 = -118088877;

    t171 = (x853+((x854>x855)-x856));

    if (t171 != -43) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x858 = -61;
	static int64_t x859 = INT64_MIN;
	int8_t x860 = -1;
	volatile int32_t t172 = 1012;

    t172 = (x857+((x858>x859)-x860));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile uint64_t x861 = UINT64_MAX;
	int32_t x862 = 31995;
	int32_t x863 = -1;
	int8_t x864 = -16;
	uint64_t t173 = 701LLU;

    t173 = (x861+((x862>x863)-x864));

    if (t173 != 16LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint32_t x865 = 148511U;
	static int32_t x866 = -2904;
	static int64_t x867 = 169LL;

    t174 = (x865+((x866>x867)-x868));

    if (t174 != 148512U) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x869 = INT16_MAX;
	int8_t x870 = 0;
	int32_t x871 = 27724411;
	int32_t t175 = 276975;

    t175 = (x869+((x870>x871)-x872));

    if (t175 != 65535) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x873 = INT8_MIN;
	uint16_t x875 = 3U;
	static volatile uint64_t x876 = 1954570432237506LLU;
	volatile uint64_t t176 = 353011345626LLU;

    t176 = (x873+((x874>x875)-x876));

    if (t176 != 18444789503277313983LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint32_t x877 = UINT32_MAX;
	volatile uint16_t x878 = UINT16_MAX;
	static uint32_t x880 = UINT32_MAX;
	volatile uint32_t t177 = 21622040U;

    t177 = (x877+((x878>x879)-x880));

    if (t177 != 1U) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x882 = INT16_MIN;
	int16_t x884 = 36;
	static int32_t t178 = -126;

    t178 = (x881+((x882>x883)-x884));

    if (t178 != -34) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x885 = INT32_MIN;
	volatile uint16_t x886 = UINT16_MAX;
	int64_t x887 = 462458466LL;
	int8_t x888 = 0;
	volatile int32_t t179 = INT32_MIN;

    t179 = (x885+((x886>x887)-x888));

    if (t179 != INT32_MIN) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x889 = UINT8_MAX;
	int64_t x890 = INT64_MIN;
	volatile int32_t t180 = -1;

    t180 = (x889+((x890>x891)-x892));

    if (t180 != 256) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile int16_t x893 = INT16_MAX;
	volatile int16_t x894 = INT16_MIN;
	uint32_t x895 = 1712559634U;
	int32_t x896 = -1;

    t181 = (x893+((x894>x895)-x896));

    if (t181 != 32769) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x898 = -142;
	int8_t x900 = -1;
	static volatile int32_t t182 = 824688402;

    t182 = (x897+((x898>x899)-x900));

    if (t182 != 1558074) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int8_t x901 = -1;
	uint32_t x902 = UINT32_MAX;
	uint16_t x903 = UINT16_MAX;
	int32_t t183 = -963;

    t183 = (x901+((x902>x903)-x904));

    if (t183 != -95583572) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x905 = -1;
	int64_t x906 = INT64_MAX;
	uint64_t x908 = 29681LLU;
	static volatile uint64_t t184 = 2121LLU;

    t184 = (x905+((x906>x907)-x908));

    if (t184 != 18446744073709521935LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x909 = 14U;
	uint64_t x911 = UINT64_MAX;
	volatile int32_t t185 = 1547;

    t185 = (x909+((x910>x911)-x912));

    if (t185 != 4) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x917 = 103U;
	volatile int16_t x918 = INT16_MIN;
	volatile int32_t t186 = 120974184;

    t186 = (x917+((x918>x919)-x920));

    if (t186 != 231) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x921 = -1008102;
	int32_t x922 = -1;
	uint8_t x924 = 101U;
	volatile int32_t t187 = 12211340;

    t187 = (x921+((x922>x923)-x924));

    if (t187 != -1008202) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int8_t x925 = -1;
	int16_t x926 = INT16_MIN;
	int64_t x927 = 127127092906142LL;
	volatile int16_t x928 = INT16_MAX;
	int32_t t188 = -76469;

    t188 = (x925+((x926>x927)-x928));

    if (t188 != -32768) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x929 = INT8_MIN;
	uint32_t x930 = UINT32_MAX;
	static int16_t x931 = INT16_MIN;
	volatile int32_t x932 = -1;
	int32_t t189 = 23;

    t189 = (x929+((x930>x931)-x932));

    if (t189 != -126) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x933 = -1LL;
	uint8_t x934 = 1U;
	int8_t x935 = -1;

    t190 = (x933+((x934>x935)-x936));

    if (t190 != 1LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x941 = INT64_MAX;
	int64_t x942 = 15982396136LL;
	volatile uint8_t x943 = UINT8_MAX;
	uint16_t x944 = 404U;
	volatile int64_t t191 = -17164924764688256LL;

    t191 = (x941+((x942>x943)-x944));

    if (t191 != 9223372036854775404LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x946 = INT32_MAX;
	static uint8_t x947 = UINT8_MAX;

    t192 = (x945+((x946>x947)-x948));

    if (t192 != 18446743987868773254LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x949 = -1;
	int16_t x950 = INT16_MAX;
	volatile int8_t x951 = -1;
	int8_t x952 = INT8_MIN;
	int32_t t193 = 48663;

    t193 = (x949+((x950>x951)-x952));

    if (t193 != 128) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x958 = INT16_MIN;
	static int32_t x959 = -1;
	uint64_t x960 = 1LLU;
	uint64_t t194 = 10245LLU;

    t194 = (x957+((x958>x959)-x960));

    if (t194 != 32766LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint64_t x961 = UINT64_MAX;
	static uint32_t x962 = 1046566385U;
	volatile uint32_t x963 = 23044U;
	static uint8_t x964 = 1U;
	volatile uint64_t t195 = UINT64_MAX;

    t195 = (x961+((x962>x963)-x964));

    if (t195 != UINT64_MAX) { NG(); } else { ; }
	
}

void f196(void) {
    	static int8_t x965 = -1;
	uint16_t x966 = UINT16_MAX;
	static int8_t x967 = 45;
	volatile int32_t t196 = -390;

    t196 = (x965+((x966>x967)-x968));

    if (t196 != 15) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x969 = UINT16_MAX;
	uint8_t x970 = 25U;
	static int64_t x971 = -1LL;
	volatile int64_t x972 = INT64_MAX;
	static volatile int64_t t197 = -1LL;

    t197 = (x969+((x970>x971)-x972));

    if (t197 != -9223372036854710271LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x973 = INT32_MIN;
	uint64_t x974 = 402LLU;
	int64_t x975 = 46036823929473LL;
	static volatile int32_t t198 = -108;

    t198 = (x973+((x974>x975)-x976));

    if (t198 != -2147483647) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x979 = 131U;
	volatile uint64_t t199 = 5747LLU;

    t199 = (x977+((x978>x979)-x980));

    if (t199 != 266653055197660LLU) { NG(); } else { ; }
	
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

