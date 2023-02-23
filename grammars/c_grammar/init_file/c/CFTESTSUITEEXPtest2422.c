
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

static volatile int64_t x2 = INT64_MIN;
static volatile uint64_t x11 = UINT64_MAX;
static uint64_t x13 = UINT64_MAX;
int8_t x16 = INT8_MIN;
volatile uint64_t t3 = 158096870238341LLU;
uint8_t x25 = 3U;
int64_t x37 = INT64_MAX;
volatile int8_t x39 = INT8_MIN;
volatile int32_t x41 = -18999037;
int64_t t11 = 1000LL;
int32_t x55 = -21403790;
uint32_t x56 = 6896507U;
int16_t x57 = -1;
int64_t x58 = INT64_MIN;
static uint64_t t14 = 41617020LLU;
static int32_t x67 = INT32_MIN;
int8_t x68 = INT8_MAX;
int8_t x70 = 3;
int32_t x71 = -832011269;
uint32_t x74 = 1498U;
int8_t x75 = INT8_MAX;
static uint16_t x80 = 35U;
volatile int64_t x81 = INT64_MIN;
volatile uint64_t x89 = UINT64_MAX;
int16_t x90 = 0;
volatile uint8_t x92 = 37U;
int32_t x103 = INT32_MIN;
static int64_t t24 = -42948063LL;
volatile int64_t x109 = 31LL;
int64_t x113 = 473349879067LL;
int16_t x129 = 36;
static uint32_t x132 = 52072U;
volatile int32_t x133 = -3273267;
uint64_t t31 = 2715196479LLU;
volatile int64_t t32 = -31588LL;
volatile int32_t x142 = INT32_MIN;
volatile int16_t x143 = INT16_MIN;
uint64_t t33 = 907244409359957426LLU;
volatile int32_t x149 = -2245019;
int64_t x157 = -211LL;
static volatile int8_t x161 = INT8_MIN;
int32_t x164 = 2935;
int16_t x169 = INT16_MIN;
int64_t x188 = -1LL;
volatile uint16_t x189 = 23U;
static int16_t x191 = INT16_MIN;
volatile int32_t t43 = 3270161;
static volatile uint64_t x194 = UINT64_MAX;
uint64_t t45 = 13552LLU;
int32_t x205 = INT32_MIN;
int64_t x210 = INT64_MIN;
int32_t x211 = -1;
int8_t x215 = -1;
static volatile int8_t x225 = -1;
int32_t t50 = 1405851;
int16_t x229 = -1;
uint16_t x242 = 819U;
volatile int8_t x244 = -1;
int64_t x245 = 88678LL;
static volatile int64_t x246 = INT64_MIN;
int32_t x254 = -1;
int32_t x255 = 5514220;
uint16_t x260 = UINT16_MAX;
volatile int64_t t58 = 648439955661167LL;
uint16_t x262 = 24696U;
static int32_t x265 = INT32_MIN;
uint64_t x267 = 259410334237157650LLU;
static uint32_t x269 = 10113782U;
uint8_t x272 = UINT8_MAX;
volatile int8_t x274 = INT8_MIN;
int64_t t67 = INT64_MIN;
int32_t x298 = INT32_MIN;
int64_t x299 = 1444LL;
int16_t x304 = INT16_MIN;
int64_t x320 = 509879007118903LL;
volatile int8_t x324 = 1;
volatile uint64_t t75 = 66LLU;
uint16_t x331 = 422U;
int8_t x342 = INT8_MAX;
uint8_t x348 = 2U;
uint64_t x352 = UINT64_MAX;
int64_t x358 = INT64_MIN;
uint32_t x372 = UINT32_MAX;
uint64_t x374 = 3405366LLU;
int32_t x376 = INT32_MIN;
uint64_t t87 = 30868106006LLU;
static int16_t x386 = 0;
int16_t x389 = INT16_MAX;
int16_t x391 = 0;
volatile int32_t t90 = -31227;
volatile int64_t x400 = -3619975185242043927LL;
int32_t x402 = INT32_MIN;
static int32_t x404 = 234;
uint32_t x410 = 20854U;
volatile uint32_t x414 = 110857U;
static int64_t x430 = INT64_MIN;
volatile int8_t x435 = INT8_MIN;
int32_t t102 = -36813;
volatile uint64_t x455 = UINT64_MAX;
uint32_t x464 = 364007U;
volatile int64_t t107 = -29190345LL;
uint64_t x465 = 202944003933599LLU;
int32_t x470 = 603;
uint32_t x475 = 4000U;
int16_t x490 = INT16_MIN;
int64_t x491 = -1LL;
static int16_t x492 = -1;
static volatile uint64_t t115 = 15LLU;
int8_t x498 = 1;
volatile uint16_t x499 = UINT16_MAX;
int64_t x501 = INT64_MIN;
int8_t x502 = INT8_MIN;
uint16_t x505 = 7031U;
int32_t x507 = INT32_MIN;
static volatile uint64_t t118 = 124362LLU;
int64_t x509 = -1LL;
volatile int8_t x512 = -1;
int32_t x514 = INT32_MIN;
static uint8_t x518 = UINT8_MAX;
int64_t x519 = INT64_MIN;
int32_t x521 = -2061094;
volatile int64_t x522 = INT64_MAX;
volatile int8_t x527 = -1;
static volatile int16_t x543 = -1;
int64_t t127 = 197LL;
volatile int64_t x554 = -6264867LL;
uint32_t x559 = 133U;
static volatile uint32_t x560 = UINT32_MAX;
int16_t x565 = INT16_MIN;
int8_t x569 = INT8_MIN;
int32_t x575 = INT32_MIN;
int64_t x580 = -187106450923605257LL;
static int16_t x581 = -1;
int64_t x587 = INT64_MIN;
static int16_t x590 = INT16_MIN;
static uint8_t x592 = UINT8_MAX;
static int64_t x593 = -63LL;
volatile int16_t x595 = -1;
uint64_t x596 = 5705270001LLU;
static uint64_t x597 = 8090090939728317005LLU;
static int64_t t142 = -2LL;
int16_t x616 = 1156;
int8_t x621 = -1;
uint64_t x626 = UINT64_MAX;
volatile uint8_t x628 = 62U;
static int32_t x631 = -1;
uint64_t x632 = UINT64_MAX;
int64_t x635 = INT64_MIN;
static int64_t t150 = -70944973LL;
int16_t x646 = INT16_MIN;
volatile int32_t x650 = 40890014;
static volatile int32_t t154 = 1753;
int16_t x662 = -1;
uint64_t t155 = 17949437LLU;
int64_t x667 = 121LL;
uint64_t t157 = 36849550002480052LLU;
static int64_t x678 = INT64_MIN;
uint16_t x688 = 10U;
int64_t t161 = -1259170958230145LL;
int16_t x693 = -5;
int64_t t163 = -4854LL;
volatile int64_t t164 = 322587122LL;
uint32_t x701 = 512666979U;
int8_t x704 = -13;
static int16_t x707 = 15;
static int32_t t167 = -1784;
volatile uint32_t x715 = UINT32_MAX;
int32_t x716 = INT32_MAX;
int64_t t168 = -2009567826415657LL;
int32_t x717 = INT32_MIN;
volatile int64_t x718 = -1LL;
int64_t x720 = INT64_MAX;
int64_t x722 = INT64_MIN;
int32_t x728 = 3177496;
static volatile int64_t x734 = 48509447416675LL;
static uint64_t x738 = UINT64_MAX;
int8_t x739 = -1;
int16_t x750 = 17;
volatile int32_t x751 = INT32_MIN;
volatile uint64_t t177 = 2LLU;
int32_t x763 = -1;
volatile uint32_t t179 = UINT32_MAX;
static int64_t x769 = INT64_MAX;
static uint16_t x781 = 181U;
volatile int64_t t184 = -78658LL;
uint8_t x787 = 1U;
volatile int8_t x788 = INT8_MIN;
uint16_t x789 = UINT16_MAX;
int8_t x801 = INT8_MIN;
static volatile int16_t x804 = -1;
static int32_t x808 = INT32_MIN;
volatile uint8_t x810 = 10U;
int8_t x811 = 0;
uint32_t x812 = 40159U;
volatile uint32_t t191 = 179774520U;
volatile uint32_t x814 = 6685U;
int16_t x821 = INT16_MAX;
static volatile uint64_t x822 = 804379LLU;
volatile int8_t x832 = 19;
int32_t x833 = 1;
volatile int8_t x836 = INT8_MIN;
int32_t x838 = INT32_MAX;
static volatile int32_t x843 = INT32_MIN;


void f0(void) {
    	uint32_t x1 = 242541U;
	static int64_t x3 = 420LL;
	volatile int16_t x4 = -1;
	int64_t t0 = 2543LL;

    t0 = (x1^((x2|x3)%x4));

    if (t0 != 242541LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = -1;
	static int16_t x6 = -293;
	int16_t x7 = INT16_MIN;
	volatile int32_t x8 = INT32_MAX;
	int32_t t1 = -869787717;

    t1 = (x5^((x6|x7)%x8));

    if (t1 != 292) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int32_t x9 = -1;
	volatile int16_t x10 = 2;
	uint64_t x12 = 470705956819724LLU;
	uint64_t t2 = 113LLU;

    t2 = (x9^((x10|x11)%x12));

    if (t2 != 18446495741808163836LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x14 = -1LL;
	int8_t x15 = INT8_MIN;

    t3 = (x13^((x14|x15)%x16));

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MIN;
	int8_t x18 = 5;
	uint16_t x19 = 1U;
	int32_t x20 = INT32_MIN;
	int64_t t4 = -3456871445516LL;

    t4 = (x17^((x18|x19)%x20));

    if (t4 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x21 = 1;
	volatile uint32_t x22 = 2121158334U;
	int8_t x23 = -1;
	int8_t x24 = INT8_MAX;
	uint32_t t5 = 2238466U;

    t5 = (x21^((x22|x23)%x24));

    if (t5 != 14U) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x26 = INT8_MAX;
	volatile uint8_t x27 = 10U;
	int64_t x28 = INT64_MIN;
	static int64_t t6 = 55863711027LL;

    t6 = (x25^((x26|x27)%x28));

    if (t6 != 124LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = -1;
	volatile int32_t x30 = INT32_MIN;
	int32_t x31 = INT32_MIN;
	static int16_t x32 = -25;
	static volatile int32_t t7 = -8471;

    t7 = (x29^((x30|x31)%x32));

    if (t7 != 22) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x33 = -1;
	int16_t x34 = 114;
	uint8_t x35 = 1U;
	int16_t x36 = 3398;
	static volatile int32_t t8 = -45;

    t8 = (x33^((x34|x35)%x36));

    if (t8 != -116) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint16_t x38 = 3529U;
	int64_t x40 = INT64_MAX;
	volatile int64_t t9 = -54031178687844547LL;

    t9 = (x37^((x38|x39)%x40));

    if (t9 != -9223372036854775754LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x42 = UINT8_MAX;
	uint64_t x43 = UINT64_MAX;
	int32_t x44 = -14;
	uint64_t t10 = 2235812825785LLU;

    t10 = (x41^((x42|x43)%x44));

    if (t10 != 18446744073690552590LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = 62;
	volatile uint8_t x46 = 113U;
	int64_t x47 = 281400968971983LL;
	int32_t x48 = INT32_MAX;

    t11 = (x45^((x46|x47)%x48));

    if (t11 != 1154320098LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x49 = 2728LLU;
	volatile int16_t x50 = INT16_MIN;
	int64_t x51 = INT64_MAX;
	int32_t x52 = -4054322;
	volatile uint64_t t12 = 2171706LLU;

    t12 = (x49^((x50|x51)%x52));

    if (t12 != 18446744073709548887LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x53 = -3771LL;
	uint8_t x54 = UINT8_MAX;
	volatile int64_t t13 = -708952768229320267LL;

    t13 = (x53^((x54|x55)%x56));

    if (t13 != -4627245LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x59 = 447144;
	uint64_t x60 = UINT64_MAX;

    t14 = (x57^((x58|x59)%x60));

    if (t14 != 9223372036854328663LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x65 = -24;
	volatile int16_t x66 = -1;
	volatile int32_t t15 = 1;

    t15 = (x65^((x66|x67)%x68));

    if (t15 != 23) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x69 = UINT64_MAX;
	int32_t x72 = INT32_MIN;
	uint64_t t16 = 40767LLU;

    t16 = (x69^((x70|x71)%x72));

    if (t16 != 832011268LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x73 = 4218LLU;
	volatile int32_t x76 = INT32_MIN;
	uint64_t t17 = 174748214505LLU;

    t17 = (x73^((x74|x75)%x76));

    if (t17 != 5509LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x77 = -1;
	int32_t x78 = INT32_MIN;
	uint32_t x79 = UINT32_MAX;
	uint32_t t18 = 18444U;

    t18 = (x77^((x78|x79)%x80));

    if (t18 != 4294967285U) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x82 = INT8_MAX;
	uint16_t x83 = 6U;
	int64_t x84 = 1460319949306305706LL;
	int64_t t19 = -1LL;

    t19 = (x81^((x82|x83)%x84));

    if (t19 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x85 = INT16_MAX;
	volatile int32_t x86 = 88687;
	int64_t x87 = -14682601840LL;
	volatile uint32_t x88 = UINT32_MAX;
	int64_t t20 = -15014189583317LL;

    t20 = (x85^((x86|x87)%x88));

    if (t20 != -1797709565LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x91 = INT64_MIN;
	volatile uint64_t t21 = 1387795LLU;

    t21 = (x89^((x90|x91)%x92));

    if (t21 != 5LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x93 = INT8_MIN;
	int32_t x94 = -584019352;
	static int16_t x95 = 117;
	int64_t x96 = -15808037292LL;
	int64_t t22 = -94904712702LL;

    t22 = (x93^((x94|x95)%x96));

    if (t22 != 584019453LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static int64_t x97 = INT64_MIN;
	volatile int8_t x98 = INT8_MIN;
	int64_t x99 = INT64_MAX;
	volatile int32_t x100 = INT32_MIN;
	int64_t t23 = INT64_MAX;

    t23 = (x97^((x98|x99)%x100));

    if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x101 = -11;
	volatile int8_t x102 = INT8_MIN;
	static int64_t x104 = -1LL;

    t24 = (x101^((x102|x103)%x104));

    if (t24 != -11LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x105 = -1;
	uint16_t x106 = 37U;
	int8_t x107 = INT8_MAX;
	int32_t x108 = -556422377;
	static volatile int32_t t25 = 4;

    t25 = (x105^((x106|x107)%x108));

    if (t25 != -128) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile uint64_t x110 = UINT64_MAX;
	static int8_t x111 = -1;
	static volatile int64_t x112 = 37LL;
	volatile uint64_t t26 = 1778867LLU;

    t26 = (x109^((x110|x111)%x112));

    if (t26 != 20LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x114 = 85657271U;
	int8_t x115 = 0;
	uint16_t x116 = 47U;
	volatile int64_t t27 = 62032496393718186LL;

    t27 = (x113^((x114|x115)%x116));

    if (t27 != 473349879069LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x117 = INT32_MIN;
	volatile uint32_t x118 = 5196410U;
	int16_t x119 = -111;
	int32_t x120 = 5;
	uint32_t t28 = 2168U;

    t28 = (x117^((x118|x119)%x120));

    if (t28 != 2147483649U) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x125 = 1;
	int64_t x126 = 9262482745230LL;
	volatile int64_t x127 = -1LL;
	int8_t x128 = INT8_MIN;
	volatile int64_t t29 = 263377613238145LL;

    t29 = (x125^((x126|x127)%x128));

    if (t29 != -2LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint16_t x130 = 2454U;
	int64_t x131 = INT64_MAX;
	static volatile int64_t t30 = 46916180098LL;

    t30 = (x129^((x130|x131)%x132));

    if (t30 != 20523LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x134 = INT64_MIN;
	int64_t x135 = -1LL;
	uint64_t x136 = 3446LLU;

    t31 = (x133^((x134|x135)%x136));

    if (t31 != 18446744073706275016LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x137 = UINT16_MAX;
	int32_t x138 = INT32_MAX;
	volatile int32_t x139 = INT32_MAX;
	int64_t x140 = INT64_MAX;

    t32 = (x137^((x138|x139)%x140));

    if (t32 != 2147418112LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x141 = 4984418LLU;
	int16_t x144 = -1;

    t33 = (x141^((x142|x143)%x144));

    if (t33 != 4984418LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int64_t x150 = INT64_MAX;
	int16_t x151 = -7660;
	int8_t x152 = INT8_MIN;
	static int64_t t34 = 1LL;

    t34 = (x149^((x150|x151)%x152));

    if (t34 != 2245018LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x153 = 7035776LL;
	uint16_t x154 = 7U;
	volatile uint8_t x155 = 5U;
	static int64_t x156 = INT64_MAX;
	volatile int64_t t35 = -64720228553240LL;

    t35 = (x153^((x154|x155)%x156));

    if (t35 != 7035783LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x158 = UINT16_MAX;
	int16_t x159 = -3138;
	int16_t x160 = INT16_MIN;
	static int64_t t36 = 129205817561LL;

    t36 = (x157^((x158|x159)%x160));

    if (t36 != 210LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x162 = UINT64_MAX;
	int16_t x163 = 5862;
	uint64_t t37 = 33LLU;

    t37 = (x161^((x162|x163)%x164));

    if (t37 != 18446744073709550621LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t x165 = INT32_MAX;
	static int8_t x166 = -1;
	static volatile uint64_t x167 = 35030694419LLU;
	int8_t x168 = 25;
	volatile uint64_t t38 = 27110LLU;

    t38 = (x165^((x166|x167)%x168));

    if (t38 != 2147483632LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x170 = -1;
	static int64_t x171 = 4114891170LL;
	static uint16_t x172 = UINT16_MAX;
	int64_t t39 = 9516784LL;

    t39 = (x169^((x170|x171)%x172));

    if (t39 != 32767LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x177 = UINT8_MAX;
	int64_t x178 = INT64_MIN;
	int32_t x179 = 1;
	static volatile uint8_t x180 = 39U;
	int64_t t40 = 66303519LL;

    t40 = (x177^((x178|x179)%x180));

    if (t40 != -250LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x181 = INT64_MIN;
	static volatile uint64_t x182 = UINT64_MAX;
	volatile int16_t x183 = INT16_MAX;
	volatile int32_t x184 = INT32_MAX;
	volatile uint64_t t41 = 5099LLU;

    t41 = (x181^((x182|x183)%x184));

    if (t41 != 9223372036854775811LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x185 = UINT8_MAX;
	int64_t x186 = -62884997434910LL;
	uint32_t x187 = UINT32_MAX;
	static int64_t t42 = 396676LL;

    t42 = (x185^((x186|x187)%x188));

    if (t42 != 255LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint16_t x190 = UINT16_MAX;
	uint8_t x192 = 11U;

    t43 = (x189^((x190|x191)%x192));

    if (t43 != -24) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x193 = 14LL;
	uint16_t x195 = 6U;
	volatile int16_t x196 = -1;
	static volatile uint64_t t44 = 39111921LLU;

    t44 = (x193^((x194|x195)%x196));

    if (t44 != 14LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x201 = UINT16_MAX;
	static uint64_t x202 = 60208493904LLU;
	volatile int16_t x203 = -21;
	int64_t x204 = INT64_MIN;

    t45 = (x201^((x202|x203)%x204));

    if (t45 != 9223372036854710276LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x206 = 1;
	uint16_t x207 = UINT16_MAX;
	volatile int32_t x208 = INT32_MAX;
	static volatile int32_t t46 = 749;

    t46 = (x205^((x206|x207)%x208));

    if (t46 != -2147418113) { NG(); } else { ; }
	
}

void f47(void) {
    	static int16_t x209 = INT16_MIN;
	int64_t x212 = INT64_MAX;
	int64_t t47 = -3209362147746LL;

    t47 = (x209^((x210|x211)%x212));

    if (t47 != 32767LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x213 = INT16_MIN;
	uint8_t x214 = 2U;
	int32_t x216 = INT32_MIN;
	int32_t t48 = 1;

    t48 = (x213^((x214|x215)%x216));

    if (t48 != 32767) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x217 = INT8_MAX;
	uint8_t x218 = UINT8_MAX;
	int16_t x219 = INT16_MIN;
	int16_t x220 = 55;
	volatile int32_t t49 = -5347;

    t49 = (x217^((x218|x219)%x220));

    if (t49 != -121) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x226 = 65U;
	static int32_t x227 = 2337;
	int16_t x228 = INT16_MIN;

    t50 = (x225^((x226|x227)%x228));

    if (t50 != -2402) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x230 = 33521LLU;
	int16_t x231 = -1;
	int8_t x232 = INT8_MIN;
	volatile uint64_t t51 = 148061165745617071LLU;

    t51 = (x229^((x230|x231)%x232));

    if (t51 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x233 = 5U;
	uint32_t x234 = 1U;
	int8_t x235 = -1;
	static volatile int8_t x236 = INT8_MIN;
	volatile uint32_t t52 = 12U;

    t52 = (x233^((x234|x235)%x236));

    if (t52 != 122U) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x237 = 1;
	static int32_t x238 = INT32_MIN;
	static int32_t x239 = 71;
	int16_t x240 = INT16_MIN;
	int32_t t53 = -181702;

    t53 = (x237^((x238|x239)%x240));

    if (t53 != -32698) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x241 = INT16_MIN;
	int8_t x243 = -3;
	int32_t t54 = 50;

    t54 = (x241^((x242|x243)%x244));

    if (t54 != -32768) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x247 = INT8_MIN;
	int32_t x248 = -49792;
	volatile int64_t t55 = 1693LL;

    t55 = (x245^((x246|x247)%x248));

    if (t55 != -88602LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x249 = 1674582448514078LL;
	uint16_t x250 = 5449U;
	int16_t x251 = INT16_MAX;
	int64_t x252 = 30922LL;
	volatile int64_t t56 = -9720534394563LL;

    t56 = (x249^((x250|x251)%x252));

    if (t56 != 1674582448513835LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x253 = 2U;
	volatile int8_t x256 = INT8_MAX;
	int32_t t57 = -134466456;

    t57 = (x253^((x254|x255)%x256));

    if (t57 != -3) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x257 = INT16_MIN;
	int64_t x258 = INT64_MIN;
	uint16_t x259 = 2807U;

    t58 = (x257^((x258|x259)%x260));

    if (t58 != 2807LL) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint64_t x261 = 6LLU;
	int8_t x263 = -3;
	static uint32_t x264 = 15621791U;
	uint64_t t59 = 359LLU;

    t59 = (x261^((x262|x263)%x264));

    if (t59 != 14596553LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x266 = -1;
	static uint16_t x268 = 587U;
	uint64_t t60 = 96LLU;

    t60 = (x265^((x266|x267)%x268));

    if (t60 != 18446744071562068306LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x270 = UINT8_MAX;
	uint32_t x271 = 4694U;
	uint32_t t61 = 47276386U;

    t61 = (x269^((x270|x271)%x272));

    if (t61 != 10113764U) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x273 = -6741436LL;
	int32_t x275 = INT32_MIN;
	uint8_t x276 = UINT8_MAX;
	static volatile int64_t t62 = -2893619453LL;

    t62 = (x273^((x274|x275)%x276));

    if (t62 != 6741444LL) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint16_t x277 = UINT16_MAX;
	int32_t x278 = -1;
	uint64_t x279 = 1894584LLU;
	uint16_t x280 = 1052U;
	uint64_t t63 = 29608008087LLU;

    t63 = (x277^((x278|x279)%x280));

    if (t63 != 65432LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint16_t x281 = UINT16_MAX;
	int8_t x282 = INT8_MIN;
	static int32_t x283 = -1;
	static volatile int64_t x284 = INT64_MAX;
	int64_t t64 = 344944LL;

    t64 = (x281^((x282|x283)%x284));

    if (t64 != -65536LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x285 = INT16_MIN;
	int8_t x286 = INT8_MIN;
	uint32_t x287 = 41215U;
	static uint8_t x288 = 15U;
	static uint32_t t65 = 181124U;

    t65 = (x285^((x286|x287)%x288));

    if (t65 != 4294934528U) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int8_t x289 = INT8_MIN;
	uint8_t x290 = 3U;
	int32_t x291 = INT32_MIN;
	static uint32_t x292 = 1355321U;
	static uint32_t t66 = 23640186U;

    t66 = (x289^((x290|x291)%x292));

    if (t66 != 4294312147U) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x293 = INT64_MIN;
	uint16_t x294 = 882U;
	int16_t x295 = INT16_MAX;
	int8_t x296 = -1;

    t67 = (x293^((x294|x295)%x296));

    if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x297 = INT16_MIN;
	int16_t x300 = INT16_MIN;
	int64_t t68 = 435053684LL;

    t68 = (x297^((x298|x299)%x300));

    if (t68 != 1444LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x301 = INT64_MIN;
	uint8_t x302 = 0U;
	static int16_t x303 = INT16_MIN;
	static int64_t t69 = INT64_MIN;

    t69 = (x301^((x302|x303)%x304));

    if (t69 != INT64_MIN) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint32_t x305 = UINT32_MAX;
	int64_t x306 = INT64_MIN;
	int64_t x307 = INT64_MAX;
	uint8_t x308 = UINT8_MAX;
	volatile int64_t t70 = -30033LL;

    t70 = (x305^((x306|x307)%x308));

    if (t70 != -4294967296LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x309 = 6110U;
	static int16_t x310 = INT16_MAX;
	int16_t x311 = INT16_MAX;
	int8_t x312 = INT8_MAX;
	static uint32_t t71 = 1674630U;

    t71 = (x309^((x310|x311)%x312));

    if (t71 != 6111U) { NG(); } else { ; }
	
}

void f72(void) {
    	static int8_t x313 = 3;
	static volatile int32_t x314 = -1;
	uint8_t x315 = UINT8_MAX;
	volatile int64_t x316 = -16LL;
	static int64_t t72 = 4268423195139LL;

    t72 = (x313^((x314|x315)%x316));

    if (t72 != -4LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x317 = INT32_MAX;
	static int64_t x318 = 2593138LL;
	volatile int64_t x319 = INT64_MIN;
	volatile int64_t t73 = -523365574LL;

    t73 = (x317^((x318|x319)%x320));

    if (t73 != -170676184921538LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x321 = INT16_MAX;
	int8_t x322 = INT8_MIN;
	int8_t x323 = INT8_MAX;
	volatile int32_t t74 = 5;

    t74 = (x321^((x322|x323)%x324));

    if (t74 != 32767) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint64_t x325 = 2297059191915768LLU;
	int64_t x326 = 79LL;
	volatile int8_t x327 = -8;
	int16_t x328 = INT16_MIN;

    t75 = (x325^((x326|x327)%x328));

    if (t75 != 18444447014517635847LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x329 = -1;
	volatile uint16_t x330 = UINT16_MAX;
	int32_t x332 = -1;
	volatile int32_t t76 = -16201;

    t76 = (x329^((x330|x331)%x332));

    if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x333 = INT8_MIN;
	volatile int16_t x334 = 13;
	int64_t x335 = INT64_MIN;
	int32_t x336 = -1;
	int64_t t77 = 11806314602619300LL;

    t77 = (x333^((x334|x335)%x336));

    if (t77 != -128LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static int64_t x341 = 12374132430828965LL;
	static int8_t x343 = INT8_MIN;
	static int16_t x344 = -772;
	static volatile int64_t t78 = -447037594565461LL;

    t78 = (x341^((x342|x343)%x344));

    if (t78 != -12374132430828966LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x345 = INT8_MAX;
	static int8_t x346 = -1;
	int32_t x347 = -344;
	static volatile int32_t t79 = -1;

    t79 = (x345^((x346|x347)%x348));

    if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x349 = 1U;
	static int64_t x350 = 1866107882282577LL;
	int16_t x351 = -1;
	static volatile uint64_t t80 = 986LLU;

    t80 = (x349^((x350|x351)%x352));

    if (t80 != 1LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x353 = -14372;
	uint32_t x354 = UINT32_MAX;
	static int64_t x355 = INT64_MAX;
	uint32_t x356 = UINT32_MAX;
	int64_t t81 = 0LL;

    t81 = (x353^((x354|x355)%x356));

    if (t81 != -2147469277LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x357 = 405;
	int16_t x359 = INT16_MAX;
	uint16_t x360 = 240U;
	static int64_t t82 = -1237067797016LL;

    t82 = (x357^((x358|x359)%x360));

    if (t82 != -406LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x361 = 80813U;
	int32_t x362 = INT32_MIN;
	static uint32_t x363 = 481505667U;
	int32_t x364 = -7;
	volatile uint32_t t83 = 20995798U;

    t83 = (x361^((x362|x363)%x364));

    if (t83 != 2628913710U) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x365 = INT32_MIN;
	int16_t x366 = -1;
	volatile int64_t x367 = -3565518548LL;
	uint64_t x368 = UINT64_MAX;
	uint64_t t84 = 415945448839783646LLU;

    t84 = (x365^((x366|x367)%x368));

    if (t84 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x369 = INT16_MIN;
	volatile uint16_t x370 = 8029U;
	volatile uint16_t x371 = 8U;
	uint32_t t85 = 313328516U;

    t85 = (x369^((x370|x371)%x372));

    if (t85 != 4294942557U) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x373 = 1;
	int16_t x375 = 1986;
	static volatile uint64_t t86 = 7579082LLU;

    t86 = (x373^((x374|x375)%x376));

    if (t86 != 3405815LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x377 = UINT64_MAX;
	static volatile int64_t x378 = INT64_MIN;
	static int16_t x379 = -171;
	int64_t x380 = 13021LL;

    t87 = (x377^((x378|x379)%x380));

    if (t87 != 170LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x381 = UINT16_MAX;
	int64_t x382 = -3978646LL;
	static int64_t x383 = -1LL;
	int64_t x384 = 3LL;
	volatile int64_t t88 = -116474226633992LL;

    t88 = (x381^((x382|x383)%x384));

    if (t88 != -65536LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x385 = INT64_MIN;
	uint32_t x387 = 16357U;
	int32_t x388 = -9085570;
	int64_t t89 = -4961472684212864LL;

    t89 = (x385^((x386|x387)%x388));

    if (t89 != -9223372036854759451LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile uint8_t x390 = 2U;
	uint8_t x392 = UINT8_MAX;

    t90 = (x389^((x390|x391)%x392));

    if (t90 != 32765) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x393 = INT8_MIN;
	uint8_t x394 = 3U;
	int32_t x395 = INT32_MIN;
	static uint16_t x396 = 471U;
	int32_t t91 = -403439012;

    t91 = (x393^((x394|x395)%x396));

    if (t91 != 6) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x397 = 58968;
	static int64_t x398 = -556149157839336733LL;
	int64_t x399 = -10347248864063113LL;
	volatile int64_t t92 = -27455739973899LL;

    t92 = (x397^((x398|x399)%x400));

    if (t92 != -10346971355251281LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x401 = 5156266LL;
	static volatile int16_t x403 = -61;
	volatile int64_t t93 = -10231067LL;

    t93 = (x401^((x402|x403)%x404));

    if (t93 != -5156247LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x405 = INT8_MAX;
	int32_t x406 = INT32_MIN;
	volatile int8_t x407 = -1;
	uint32_t x408 = 2705220U;
	volatile uint32_t t94 = 23052031U;

    t94 = (x405^((x406|x407)%x408));

    if (t94 != 1783052U) { NG(); } else { ; }
	
}

void f95(void) {
    	static int32_t x409 = INT32_MIN;
	volatile int64_t x411 = -1LL;
	int8_t x412 = INT8_MIN;
	int64_t t95 = -57959LL;

    t95 = (x409^((x410|x411)%x412));

    if (t95 != 2147483647LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x413 = UINT16_MAX;
	int32_t x415 = INT32_MIN;
	uint32_t x416 = 214999U;
	volatile uint32_t t96 = 1148375U;

    t96 = (x413^((x414|x415)%x416));

    if (t96 != 143186U) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint64_t x417 = 4LLU;
	volatile int64_t x418 = -138LL;
	int16_t x419 = INT16_MIN;
	int16_t x420 = INT16_MIN;
	volatile uint64_t t97 = 98LLU;

    t97 = (x417^((x418|x419)%x420));

    if (t97 != 18446744073709551474LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint64_t x425 = 0LLU;
	uint32_t x426 = 67868U;
	uint32_t x427 = UINT32_MAX;
	uint64_t x428 = 42218046LLU;
	static uint64_t t98 = 45LLU;

    t98 = (x425^((x426|x427)%x428));

    if (t98 != 30944649LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x429 = 1293U;
	static int64_t x431 = 1537745540475940720LL;
	volatile int8_t x432 = INT8_MIN;
	static volatile int64_t t99 = -159LL;

    t99 = (x429^((x430|x431)%x432));

    if (t99 != -1283LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x433 = 11U;
	volatile int64_t x434 = -1569279LL;
	static uint32_t x436 = 43133379U;
	volatile int64_t t100 = 16LL;

    t100 = (x433^((x434|x435)%x436));

    if (t100 != -118LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x437 = INT64_MIN;
	volatile int64_t x438 = -2LL;
	int16_t x439 = INT16_MIN;
	volatile int64_t x440 = INT64_MIN;
	volatile int64_t t101 = 104247LL;

    t101 = (x437^((x438|x439)%x440));

    if (t101 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x441 = 1U;
	int16_t x442 = 154;
	static int8_t x443 = INT8_MAX;
	static volatile int8_t x444 = 22;

    t102 = (x441^((x442|x443)%x444));

    if (t102 != 12) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x445 = 0;
	uint16_t x446 = UINT16_MAX;
	static volatile int8_t x447 = -1;
	int64_t x448 = -4273252032LL;
	volatile int64_t t103 = 167385895380997386LL;

    t103 = (x445^((x446|x447)%x448));

    if (t103 != -1LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint32_t x449 = 2863003U;
	int8_t x450 = INT8_MIN;
	int16_t x451 = INT16_MIN;
	int64_t x452 = -1LL;
	int64_t t104 = -559539176022561LL;

    t104 = (x449^((x450|x451)%x452));

    if (t104 != 2863003LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile uint64_t x453 = 1972LLU;
	volatile uint8_t x454 = 0U;
	static uint32_t x456 = 5U;
	volatile uint64_t t105 = 5347985432210761977LLU;

    t105 = (x453^((x454|x455)%x456));

    if (t105 != 1972LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x457 = INT64_MAX;
	int8_t x458 = INT8_MIN;
	uint16_t x459 = UINT16_MAX;
	uint16_t x460 = 31453U;
	int64_t t106 = INT64_MIN;

    t106 = (x457^((x458|x459)%x460));

    if (t106 != INT64_MIN) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x461 = -7;
	int64_t x462 = -504LL;
	int16_t x463 = -1;

    t107 = (x461^((x462|x463)%x464));

    if (t107 != 6LL) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint16_t x466 = 3138U;
	int64_t x467 = -1LL;
	static volatile int8_t x468 = INT8_MIN;
	static uint64_t t108 = 4247290449815413LLU;

    t108 = (x465^((x466|x467)%x468));

    if (t108 != 18446541129705618016LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x469 = -13;
	uint64_t x471 = 325983048150803237LLU;
	int64_t x472 = INT64_MAX;
	uint64_t t109 = 221LLU;

    t109 = (x469^((x470|x471)%x472));

    if (t109 != 18120761025558748300LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x473 = INT32_MIN;
	int8_t x474 = INT8_MAX;
	int64_t x476 = INT64_MAX;
	volatile int64_t t110 = -19809LL;

    t110 = (x473^((x474|x475)%x476));

    if (t110 != -2147479553LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x477 = -1;
	int16_t x478 = INT16_MIN;
	int32_t x479 = 0;
	volatile int8_t x480 = INT8_MIN;
	volatile int32_t t111 = -709092454;

    t111 = (x477^((x478|x479)%x480));

    if (t111 != -1) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x481 = 7;
	int64_t x482 = 6633360521LL;
	uint16_t x483 = 10857U;
	int32_t x484 = INT32_MAX;
	volatile int64_t t112 = -6301825498LL;

    t112 = (x481^((x482|x483)%x484));

    if (t112 != 190918379LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x485 = 6195LLU;
	static uint64_t x486 = 95558816529LLU;
	uint16_t x487 = 224U;
	uint16_t x488 = 7U;
	uint64_t t113 = 769776177816708LLU;

    t113 = (x485^((x486|x487)%x488));

    if (t113 != 6194LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint8_t x489 = UINT8_MAX;
	volatile int64_t t114 = 23371985283LL;

    t114 = (x489^((x490|x491)%x492));

    if (t114 != 255LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x493 = -1;
	uint64_t x494 = 222281LLU;
	uint32_t x495 = 679U;
	int8_t x496 = -3;

    t115 = (x493^((x494|x495)%x496));

    if (t115 != 18446744073709328656LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x497 = UINT32_MAX;
	static uint64_t x500 = 1655054461LLU;
	static volatile uint64_t t116 = 868LLU;

    t116 = (x497^((x498|x499)%x500));

    if (t116 != 4294901760LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x503 = -56LL;
	uint16_t x504 = 10111U;
	volatile int64_t t117 = 845LL;

    t117 = (x501^((x502|x503)%x504));

    if (t117 != 9223372036854775752LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x506 = INT8_MAX;
	uint64_t x508 = UINT64_MAX;

    t118 = (x505^((x506|x507)%x508));

    if (t118 != 18446744071562074888LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x510 = 627U;
	int8_t x511 = INT8_MIN;
	volatile int64_t t119 = 348473828LL;

    t119 = (x509^((x510|x511)%x512));

    if (t119 != -1LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x513 = INT8_MIN;
	int32_t x515 = INT32_MIN;
	int32_t x516 = -1;
	int32_t t120 = -7540302;

    t120 = (x513^((x514|x515)%x516));

    if (t120 != -128) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x517 = -1;
	int64_t x520 = INT64_MAX;
	volatile int64_t t121 = -14166122LL;

    t121 = (x517^((x518|x519)%x520));

    if (t121 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static int16_t x523 = -1;
	static int64_t x524 = 43445LL;
	volatile int64_t t122 = -54812LL;

    t122 = (x521^((x522|x523)%x524));

    if (t122 != 2061093LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int64_t x525 = -3624423701610LL;
	uint8_t x526 = UINT8_MAX;
	volatile int8_t x528 = INT8_MIN;
	int64_t t123 = -269602278616LL;

    t123 = (x525^((x526|x527)%x528));

    if (t123 != 3624423701609LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x529 = UINT8_MAX;
	uint32_t x530 = 64538163U;
	volatile uint32_t x531 = 156284889U;
	int32_t x532 = INT32_MIN;
	uint32_t t124 = 5949020U;

    t124 = (x529^((x530|x531)%x532));

    if (t124 != 198768388U) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x533 = -1;
	int8_t x534 = -2;
	int32_t x535 = INT32_MIN;
	int32_t x536 = INT32_MIN;
	volatile int32_t t125 = -8;

    t125 = (x533^((x534|x535)%x536));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x537 = 35;
	int64_t x538 = 230783279975854027LL;
	static int64_t x539 = 5751825078896231LL;
	int16_t x540 = -1;
	volatile int64_t t126 = 6LL;

    t126 = (x537^((x538|x539)%x540));

    if (t126 != 35LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x541 = 25448804583977535LL;
	volatile int8_t x542 = INT8_MAX;
	uint32_t x544 = 8986U;

    t127 = (x541^((x542|x543)%x544));

    if (t127 != 25448804583977156LL) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x545 = INT8_MIN;
	uint64_t x546 = 0LLU;
	int64_t x547 = INT64_MIN;
	uint16_t x548 = UINT16_MAX;
	volatile uint64_t t128 = 1172LLU;

    t128 = (x545^((x546|x547)%x548));

    if (t128 != 18446744073709518720LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint64_t x549 = 480610152LLU;
	int32_t x550 = INT32_MIN;
	int64_t x551 = INT64_MIN;
	int32_t x552 = INT32_MIN;
	static uint64_t t129 = 205072858102LLU;

    t129 = (x549^((x550|x551)%x552));

    if (t129 != 480610152LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x553 = 6800679290425316569LLU;
	static int8_t x555 = -1;
	uint32_t x556 = 1357U;
	volatile uint64_t t130 = 2152504020016533634LLU;

    t130 = (x553^((x554|x555)%x556));

    if (t130 != 11646064783284235046LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile uint16_t x557 = UINT16_MAX;
	uint64_t x558 = UINT64_MAX;
	volatile uint64_t t131 = 831743204531133LLU;

    t131 = (x557^((x558|x559)%x560));

    if (t131 != 65535LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x561 = -1;
	volatile int64_t x562 = -2781870LL;
	volatile uint8_t x563 = UINT8_MAX;
	static volatile int64_t x564 = -1LL;
	int64_t t132 = -238609LL;

    t132 = (x561^((x562|x563)%x564));

    if (t132 != -1LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x566 = 11904828099964LLU;
	uint64_t x567 = UINT64_MAX;
	uint32_t x568 = 9953U;
	uint64_t t133 = 11324131LLU;

    t133 = (x565^((x566|x567)%x568));

    if (t133 != 18446744073709522670LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x570 = INT32_MIN;
	static volatile int32_t x571 = 3267;
	int32_t x572 = -5324;
	int32_t t134 = -7128860;

    t134 = (x569^((x570|x571)%x572));

    if (t134 != 2347) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x573 = -1;
	uint8_t x574 = 30U;
	uint16_t x576 = 20U;
	volatile int32_t t135 = -2;

    t135 = (x573^((x574|x575)%x576));

    if (t135 != 17) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x577 = -1LL;
	static int16_t x578 = INT16_MIN;
	int8_t x579 = 0;
	int64_t t136 = -21109643LL;

    t136 = (x577^((x578|x579)%x580));

    if (t136 != 32767LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x582 = 1668617U;
	int64_t x583 = INT64_MIN;
	int8_t x584 = INT8_MIN;
	int64_t t137 = -1LL;

    t137 = (x581^((x582|x583)%x584));

    if (t137 != 118LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x585 = INT16_MIN;
	uint64_t x586 = UINT64_MAX;
	int64_t x588 = INT64_MAX;
	static uint64_t t138 = 12987916LLU;

    t138 = (x585^((x586|x587)%x588));

    if (t138 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x589 = INT32_MIN;
	static int16_t x591 = INT16_MIN;
	int32_t t139 = 488025403;

    t139 = (x589^((x590|x591)%x592));

    if (t139 != 2147483520) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x594 = INT64_MIN;
	static volatile uint64_t t140 = 26803784022635LLU;

    t140 = (x593^((x594|x595)%x596));

    if (t140 != 18446744072254221548LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x598 = UINT8_MAX;
	uint16_t x599 = 35U;
	uint32_t x600 = UINT32_MAX;
	static volatile uint64_t t141 = 7805715245243LLU;

    t141 = (x597^((x598|x599)%x600));

    if (t141 != 8090090939728317106LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint16_t x605 = 88U;
	int16_t x606 = 172;
	int64_t x607 = -14634241LL;
	volatile int64_t x608 = INT64_MAX;

    t142 = (x605^((x606|x607)%x608));

    if (t142 != -14634329LL) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint16_t x609 = 3U;
	int16_t x610 = INT16_MIN;
	volatile int16_t x611 = 1007;
	volatile int32_t x612 = INT32_MIN;
	static volatile int32_t t143 = -3;

    t143 = (x609^((x610|x611)%x612));

    if (t143 != -31764) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x613 = INT64_MAX;
	volatile int32_t x614 = 111442253;
	static int64_t x615 = INT64_MIN;
	volatile int64_t t144 = -112LL;

    t144 = (x613^((x614|x615)%x616));

    if (t144 != -9223372036854775318LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x622 = UINT16_MAX;
	volatile uint8_t x623 = 5U;
	int32_t x624 = -1;
	volatile int32_t t145 = 4376;

    t145 = (x621^((x622|x623)%x624));

    if (t145 != -1) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint32_t x625 = UINT32_MAX;
	int16_t x627 = INT16_MIN;
	volatile uint64_t t146 = 7982823850LLU;

    t146 = (x625^((x626|x627)%x628));

    if (t146 != 4294967280LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x629 = INT8_MIN;
	int32_t x630 = 0;
	volatile uint64_t t147 = 1706LLU;

    t147 = (x629^((x630|x631)%x632));

    if (t147 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x633 = 13442U;
	int32_t x634 = INT32_MAX;
	static int64_t x636 = INT64_MIN;
	static int64_t t148 = -12714265255LL;

    t148 = (x633^((x634|x635)%x636));

    if (t148 != -9223372034707305603LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x637 = UINT8_MAX;
	static int8_t x638 = INT8_MIN;
	int8_t x639 = INT8_MIN;
	int32_t x640 = INT32_MIN;
	static volatile int32_t t149 = -29965052;

    t149 = (x637^((x638|x639)%x640));

    if (t149 != -129) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint32_t x641 = 161328274U;
	int8_t x642 = -1;
	int16_t x643 = 1;
	int64_t x644 = INT64_MIN;

    t150 = (x641^((x642|x643)%x644));

    if (t150 != -161328275LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x645 = -1;
	static int16_t x647 = -1;
	int16_t x648 = INT16_MIN;
	int32_t t151 = 47765693;

    t151 = (x645^((x646|x647)%x648));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x649 = 81U;
	int32_t x651 = INT32_MIN;
	uint16_t x652 = UINT16_MAX;
	volatile int32_t t152 = 2212463;

    t152 = (x649^((x650|x651)%x652));

    if (t152 != -36513) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x653 = INT16_MIN;
	volatile uint16_t x654 = UINT16_MAX;
	volatile int32_t x655 = INT32_MIN;
	int64_t x656 = 84LL;
	volatile int64_t t153 = 188703824LL;

    t153 = (x653^((x654|x655)%x656));

    if (t153 != 32739LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x657 = -1;
	int8_t x658 = INT8_MIN;
	int16_t x659 = -1;
	int16_t x660 = -1;

    t154 = (x657^((x658|x659)%x660));

    if (t154 != -1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint8_t x661 = 0U;
	static int16_t x663 = INT16_MIN;
	static uint64_t x664 = UINT64_MAX;

    t155 = (x661^((x662|x663)%x664));

    if (t155 != 0LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x665 = 33071;
	int8_t x666 = INT8_MIN;
	volatile int16_t x668 = INT16_MAX;
	int64_t t156 = 3216411682LL;

    t156 = (x665^((x666|x667)%x668));

    if (t156 != -33066LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint32_t x669 = 2U;
	int16_t x670 = -1;
	int64_t x671 = -1LL;
	volatile uint64_t x672 = 237771338192LLU;

    t157 = (x669^((x670|x671)%x672));

    if (t157 != 213228463533LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x673 = -2328LL;
	int16_t x674 = INT16_MAX;
	uint64_t x675 = UINT64_MAX;
	volatile int32_t x676 = -3399861;
	volatile uint64_t t158 = 988LLU;

    t158 = (x673^((x674|x675)%x676));

    if (t158 != 18446744073706149468LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x677 = -1;
	int64_t x679 = INT64_MIN;
	int32_t x680 = -4797974;
	volatile int64_t t159 = -41870LL;

    t159 = (x677^((x678|x679)%x680));

    if (t159 != 3876995LL) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x681 = INT32_MAX;
	int8_t x682 = INT8_MIN;
	static int64_t x683 = -123104634393729LL;
	volatile int32_t x684 = INT32_MIN;
	int64_t t160 = 433410841402573645LL;

    t160 = (x681^((x682|x683)%x684));

    if (t160 != -2147483648LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x685 = INT16_MIN;
	uint32_t x686 = UINT32_MAX;
	int64_t x687 = 9889LL;

    t161 = (x685^((x686|x687)%x688));

    if (t161 != -32763LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x689 = 5;
	int32_t x690 = 2;
	uint64_t x691 = 945644LLU;
	volatile int64_t x692 = 275147105LL;
	volatile uint64_t t162 = 2796794LLU;

    t162 = (x689^((x690|x691)%x692));

    if (t162 != 945643LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x694 = INT64_MAX;
	int16_t x695 = INT16_MAX;
	static uint16_t x696 = 5861U;

    t163 = (x693^((x694|x695)%x696));

    if (t163 != -3714LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x697 = 7U;
	int8_t x698 = 25;
	int8_t x699 = INT8_MAX;
	volatile int64_t x700 = INT64_MAX;

    t164 = (x697^((x698|x699)%x700));

    if (t164 != 120LL) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint32_t x702 = UINT32_MAX;
	uint64_t x703 = UINT64_MAX;
	uint64_t t165 = 5176328977144LLU;

    t165 = (x701^((x702|x703)%x704));

    if (t165 != 512666991LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x705 = 6U;
	volatile int32_t x706 = -33;
	uint16_t x708 = UINT16_MAX;
	volatile int32_t t166 = 13908836;

    t166 = (x705^((x706|x707)%x708));

    if (t166 != -39) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int8_t x709 = INT8_MAX;
	static int32_t x710 = INT32_MAX;
	volatile int16_t x711 = -2;
	uint16_t x712 = UINT16_MAX;

    t167 = (x709^((x710|x711)%x712));

    if (t167 != -128) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x713 = INT8_MAX;
	int64_t x714 = -1LL;

    t168 = (x713^((x714|x715)%x716));

    if (t168 != -128LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x719 = INT8_MAX;
	int64_t t169 = 534106366LL;

    t169 = (x717^((x718|x719)%x720));

    if (t169 != 2147483647LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x721 = -1;
	volatile int16_t x723 = INT16_MIN;
	int8_t x724 = INT8_MIN;
	volatile int64_t t170 = 544450030229LL;

    t170 = (x721^((x722|x723)%x724));

    if (t170 != -1LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x725 = 1U;
	int64_t x726 = -270324277085070760LL;
	uint8_t x727 = 1U;
	volatile int64_t t171 = -594790616587780435LL;

    t171 = (x725^((x726|x727)%x728));

    if (t171 != -1688784LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint8_t x733 = 0U;
	volatile uint64_t x735 = 3883600256LLU;
	static int32_t x736 = INT32_MIN;
	static volatile uint64_t t172 = 115770679LLU;

    t172 = (x733^((x734|x735)%x736));

    if (t172 != 48511646936035LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x737 = 27972U;
	static int64_t x740 = INT64_MIN;
	volatile uint64_t t173 = 653924995023LLU;

    t173 = (x737^((x738|x739)%x740));

    if (t173 != 9223372036854747835LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int64_t x741 = -1LL;
	volatile uint8_t x742 = 21U;
	volatile int32_t x743 = INT32_MIN;
	int8_t x744 = INT8_MIN;
	int64_t t174 = -9733LL;

    t174 = (x741^((x742|x743)%x744));

    if (t174 != 106LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x745 = 3246U;
	volatile int64_t x746 = 55LL;
	int32_t x747 = 249;
	int64_t x748 = -1LL;
	volatile int64_t t175 = -1132607828602687LL;

    t175 = (x745^((x746|x747)%x748));

    if (t175 != 3246LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x749 = UINT64_MAX;
	static uint16_t x752 = 2U;
	uint64_t t176 = 1168LLU;

    t176 = (x749^((x750|x751)%x752));

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x753 = 11U;
	int8_t x754 = INT8_MIN;
	uint64_t x755 = UINT64_MAX;
	int64_t x756 = 61516552720219374LL;

    t177 = (x753^((x754|x755)%x756));

    if (t177 != 53294810363958798LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x757 = 13801301031LL;
	volatile int8_t x758 = -6;
	int64_t x759 = INT64_MIN;
	uint64_t x760 = 19917LLU;
	uint64_t t178 = 421905381LLU;

    t178 = (x757^((x758|x759)%x760));

    if (t178 != 13801304843LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x761 = -1;
	int32_t x762 = -1;
	volatile uint32_t x764 = UINT32_MAX;

    t179 = (x761^((x762|x763)%x764));

    if (t179 != UINT32_MAX) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x765 = 3;
	uint64_t x766 = 14653930LLU;
	int64_t x767 = INT64_MAX;
	int8_t x768 = 1;
	volatile uint64_t t180 = 11LLU;

    t180 = (x765^((x766|x767)%x768));

    if (t180 != 3LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x770 = UINT32_MAX;
	int64_t x771 = INT64_MIN;
	static int8_t x772 = -49;
	volatile int64_t t181 = 227903248002107LL;

    t181 = (x769^((x770|x771)%x772));

    if (t181 != -9223372036854775797LL) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int16_t x773 = INT16_MAX;
	uint64_t x774 = 9085LLU;
	volatile int8_t x775 = INT8_MAX;
	static int8_t x776 = INT8_MIN;
	static uint64_t t182 = 364347092LLU;

    t182 = (x773^((x774|x775)%x776));

    if (t182 != 23680LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x777 = INT64_MAX;
	static int64_t x778 = INT64_MIN;
	volatile int64_t x779 = 261LL;
	uint8_t x780 = 7U;
	int64_t t183 = 53320219856042LL;

    t183 = (x777^((x778|x779)%x780));

    if (t183 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x782 = -1;
	int8_t x783 = INT8_MAX;
	int64_t x784 = INT64_MIN;

    t184 = (x781^((x782|x783)%x784));

    if (t184 != -182LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x785 = 5;
	volatile int8_t x786 = INT8_MIN;
	static volatile int32_t t185 = -262492023;

    t185 = (x785^((x786|x787)%x788));

    if (t185 != -124) { NG(); } else { ; }
	
}

void f186(void) {
    	static int64_t x790 = -137274485197LL;
	static volatile int8_t x791 = INT8_MAX;
	static int64_t x792 = -58545809218521LL;
	int64_t t186 = -71035927243094LL;

    t186 = (x789^((x790|x791)%x792));

    if (t186 != -137274496640LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x793 = 31521U;
	int8_t x794 = -1;
	static int8_t x795 = INT8_MIN;
	volatile int32_t x796 = -1;
	int32_t t187 = 3603;

    t187 = (x793^((x794|x795)%x796));

    if (t187 != 31521) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x797 = UINT16_MAX;
	uint64_t x798 = 25832444LLU;
	int32_t x799 = 22734505;
	uint32_t x800 = 364806U;
	volatile uint64_t t188 = 5845605294LLU;

    t188 = (x797^((x798|x799)%x800));

    if (t188 != 79616LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x802 = 17U;
	int16_t x803 = INT16_MAX;
	static volatile int32_t t189 = -175722;

    t189 = (x801^((x802|x803)%x804));

    if (t189 != -128) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x805 = INT8_MIN;
	int64_t x806 = -1LL;
	volatile int16_t x807 = INT16_MAX;
	static volatile int64_t t190 = 1470131LL;

    t190 = (x805^((x806|x807)%x808));

    if (t190 != 127LL) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int16_t x809 = 1718;

    t191 = (x809^((x810|x811)%x812));

    if (t191 != 1724U) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x813 = 3;
	static volatile int8_t x815 = 1;
	static uint16_t x816 = 3306U;
	volatile uint32_t t192 = 97640195U;

    t192 = (x813^((x814|x815)%x816));

    if (t192 != 74U) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x817 = 1;
	static int16_t x818 = -137;
	volatile int32_t x819 = 39187435;
	int32_t x820 = 5;
	int32_t t193 = -2340;

    t193 = (x817^((x818|x819)%x820));

    if (t193 != -2) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x823 = 64U;
	int8_t x824 = -1;
	uint64_t t194 = 1428688525219384194LLU;

    t194 = (x821^((x822|x823)%x824));

    if (t194 != 801188LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x825 = 16;
	volatile int16_t x826 = -2;
	int32_t x827 = INT32_MIN;
	static int16_t x828 = INT16_MIN;
	static int32_t t195 = 1;

    t195 = (x825^((x826|x827)%x828));

    if (t195 != -18) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x829 = -42324;
	int32_t x830 = 610101;
	volatile int64_t x831 = 190723LL;
	static int64_t t196 = 17633816175293646LL;

    t196 = (x829^((x830|x831)%x832));

    if (t196 != -42324LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x834 = 123U;
	static volatile int64_t x835 = INT64_MAX;
	int64_t t197 = -37984630964LL;

    t197 = (x833^((x834|x835)%x836));

    if (t197 != 126LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x837 = INT32_MIN;
	volatile int16_t x839 = INT16_MIN;
	int32_t x840 = INT32_MIN;
	int32_t t198 = INT32_MAX;

    t198 = (x837^((x838|x839)%x840));

    if (t198 != INT32_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint32_t x841 = 349941676U;
	volatile uint8_t x842 = 6U;
	int64_t x844 = INT64_MIN;
	int64_t t199 = 1LL;

    t199 = (x841^((x842|x843)%x844));

    if (t199 != -1797541974LL) { NG(); } else { ; }
	
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

