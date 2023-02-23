
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

int8_t x5 = INT8_MIN;
int32_t x15 = INT32_MIN;
int64_t x16 = INT64_MIN;
int32_t t4 = 216;
volatile int32_t x31 = 37765709;
uint8_t x49 = 42U;
volatile int8_t x58 = -1;
volatile uint32_t x61 = 49571U;
volatile int16_t x78 = -1981;
uint16_t x81 = 1573U;
int32_t t17 = 2143;
volatile uint32_t x98 = 12U;
volatile int8_t x102 = -1;
int32_t x103 = 500029;
int64_t x104 = 397831266908LL;
int32_t t21 = 3377;
uint8_t x112 = UINT8_MAX;
static uint8_t x114 = UINT8_MAX;
static int32_t x120 = INT32_MAX;
uint32_t x121 = 46503301U;
int16_t x122 = INT16_MIN;
int16_t x125 = INT16_MIN;
int64_t x128 = INT64_MAX;
int8_t x134 = 4;
volatile int64_t t29 = -1522340770487LL;
int64_t x144 = 1065510384LL;
int64_t t30 = -64054LL;
int64_t x145 = INT64_MIN;
volatile int16_t x155 = INT16_MAX;
volatile uint32_t x165 = UINT32_MAX;
volatile int64_t x167 = -1LL;
volatile int8_t x170 = -1;
static int8_t x182 = -1;
volatile int32_t t41 = 2;
uint32_t x190 = 12U;
int64_t x194 = INT64_MIN;
int16_t x202 = 4;
static uint64_t x204 = 209210063080LLU;
static volatile int32_t x220 = 9575;
static int32_t t51 = 510;
uint8_t x237 = UINT8_MAX;
uint16_t x239 = 748U;
volatile int32_t t53 = 208;
int32_t t54 = 8;
static uint64_t x249 = 92LLU;
int16_t x252 = -1;
volatile uint64_t t56 = 103836570LLU;
int8_t x257 = INT8_MIN;
int64_t x259 = INT64_MIN;
uint16_t x261 = 1095U;
int64_t x263 = INT64_MAX;
int8_t x265 = 8;
int8_t x277 = INT8_MIN;
int16_t x280 = -1;
static volatile int32_t t63 = 37;
static int32_t x299 = INT32_MAX;
volatile int32_t t68 = 2021;
int8_t x306 = -1;
uint16_t x308 = 4010U;
volatile int64_t t70 = 872809LL;
int32_t t72 = 4869438;
int32_t t74 = 2;
int16_t x335 = -6;
uint64_t x344 = 187605LLU;
uint64_t x348 = UINT64_MAX;
int32_t t79 = -609805;
int64_t x359 = -1LL;
int32_t t81 = -636;
static volatile int16_t x368 = INT16_MIN;
volatile uint64_t x370 = UINT64_MAX;
static int64_t x374 = INT64_MIN;
volatile int64_t t86 = 4291753481362047LL;
int8_t x385 = INT8_MIN;
int64_t x399 = -1LL;
static volatile uint64_t t90 = 249418659LLU;
uint8_t x401 = 17U;
volatile int32_t x405 = INT32_MIN;
static volatile int32_t t92 = 64645906;
static uint64_t x410 = UINT64_MAX;
uint8_t x417 = 14U;
int32_t t95 = 9;
int16_t x422 = INT16_MIN;
volatile int32_t t96 = -535338;
int32_t t97 = -8881;
int64_t x430 = 64296LL;
uint8_t x431 = 3U;
int16_t x432 = INT16_MIN;
volatile uint32_t x435 = 7957144U;
volatile uint32_t x439 = UINT32_MAX;
volatile int64_t x443 = 1098790LL;
int64_t x453 = INT64_MAX;
uint32_t x456 = 0U;
uint32_t x457 = 864087567U;
uint64_t x461 = 327889775140LLU;
int32_t x462 = -4189;
int8_t x468 = INT8_MAX;
int8_t x470 = INT8_MAX;
volatile int32_t x473 = INT32_MIN;
int64_t x474 = INT64_MIN;
int64_t x480 = INT64_MIN;
volatile int16_t x482 = 2472;
volatile int32_t t110 = 123817;
int32_t t113 = 325;
volatile int8_t x499 = 0;
volatile int32_t t114 = 0;
int8_t x520 = INT8_MAX;
int64_t x524 = 739747876660167LL;
int32_t x525 = INT32_MIN;
volatile uint64_t x528 = UINT64_MAX;
static int16_t x531 = INT16_MIN;
volatile int8_t x536 = INT8_MIN;
volatile int16_t x540 = -1;
static int8_t x548 = -1;
uint16_t x552 = 81U;
uint16_t x556 = 12U;
uint16_t x566 = 23U;
uint32_t x573 = 3U;
static int8_t x586 = -1;
int8_t x591 = 2;
volatile int32_t t132 = 659069;
uint16_t x594 = UINT16_MAX;
int16_t x595 = INT16_MIN;
int16_t x607 = INT16_MIN;
uint8_t x608 = 7U;
int32_t t137 = -255756;
uint32_t x613 = 18182U;
static int8_t x617 = INT8_MIN;
volatile int16_t x618 = INT16_MIN;
volatile int32_t t139 = 481690562;
static int8_t x622 = INT8_MIN;
uint8_t x623 = 113U;
static uint64_t x624 = 107798LLU;
volatile int8_t x628 = 0;
int64_t x631 = -107LL;
volatile int32_t t144 = 0;
static uint32_t x641 = 119772581U;
int8_t x648 = -1;
int32_t x656 = -1;
int16_t x662 = INT16_MIN;
volatile int32_t t150 = -6;
int32_t x671 = INT32_MAX;
uint16_t x672 = 3U;
volatile int8_t x673 = -1;
int32_t x676 = INT32_MAX;
volatile int8_t x679 = 21;
int16_t x692 = INT16_MIN;
uint32_t x693 = 9690035U;
uint32_t t158 = 620301U;
volatile uint16_t x702 = 88U;
uint32_t x711 = UINT32_MAX;
int64_t x717 = 1866883280884490LL;
int64_t t163 = 319LL;
volatile uint16_t x727 = UINT16_MAX;
static int16_t x728 = INT16_MAX;
uint8_t x733 = 7U;
static volatile uint8_t x736 = 27U;
uint16_t x738 = UINT16_MAX;
uint64_t x739 = 74241726696957LLU;
int32_t t166 = 56272;
int8_t x747 = INT8_MIN;
int8_t x757 = INT8_MIN;
volatile uint64_t t173 = 404LLU;
int32_t x770 = -1;
int16_t x776 = INT16_MIN;
uint64_t x778 = 48913515603789680LLU;
uint32_t x780 = UINT32_MAX;
static int32_t t177 = -102;
static int32_t x789 = INT32_MIN;
static volatile int32_t x793 = -211128638;
uint32_t x798 = 2U;
int64_t x800 = INT64_MIN;
int16_t x806 = INT16_MIN;
static int64_t x808 = INT64_MAX;
int16_t x811 = INT16_MIN;
static int64_t x814 = -623LL;
volatile uint32_t t185 = 128504U;
volatile int32_t t186 = 1399;
static uint16_t x822 = 2U;
int8_t x824 = -1;
static volatile uint32_t x825 = 13276231U;
volatile int32_t x828 = -54;
int32_t x835 = 4386;
static volatile uint16_t x842 = 2252U;
volatile int32_t x847 = INT32_MIN;
static int32_t x848 = 11;
static uint64_t x856 = 26450LLU;
static volatile uint64_t x859 = 5123LLU;
static volatile int32_t t194 = -61213117;
static uint32_t x865 = UINT32_MAX;
volatile int8_t x868 = INT8_MIN;
static volatile int16_t x870 = INT16_MIN;
int8_t x872 = -1;
volatile int64_t t198 = -48752236470390393LL;
static int32_t x879 = INT32_MAX;


void f0(void) {
    	int16_t x1 = INT16_MIN;
	static uint16_t x2 = 6U;
	int16_t x3 = -1;
	static int8_t x4 = INT8_MIN;
	volatile int32_t t0 = -7390;

    t0 = (x1^((x2-x3)!=x4));

    if (t0 != -32767) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x6 = 669LLU;
	int64_t x7 = -1LL;
	int64_t x8 = INT64_MAX;
	volatile int32_t t1 = -729765313;

    t1 = (x5^((x6-x7)!=x8));

    if (t1 != -127) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MIN;
	uint8_t x10 = UINT8_MAX;
	int16_t x11 = INT16_MAX;
	int8_t x12 = -1;
	int32_t t2 = -225685512;

    t2 = (x9^((x10-x11)!=x12));

    if (t2 != -2147483647) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MIN;
	uint32_t x14 = UINT32_MAX;
	volatile int32_t t3 = -153234;

    t3 = (x13^((x14-x15)!=x16));

    if (t3 != -2147483647) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x21 = UINT16_MAX;
	uint32_t x22 = UINT32_MAX;
	volatile int16_t x23 = INT16_MIN;
	static volatile uint64_t x24 = 941739428LLU;

    t4 = (x21^((x22-x23)!=x24));

    if (t4 != 65534) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x25 = INT16_MIN;
	volatile uint8_t x26 = 1U;
	volatile uint32_t x27 = 137899U;
	int8_t x28 = -14;
	static volatile int32_t t5 = 196;

    t5 = (x25^((x26-x27)!=x28));

    if (t5 != -32767) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x29 = 2U;
	int64_t x30 = -409777LL;
	static uint16_t x32 = 2382U;
	int32_t t6 = 1055915;

    t6 = (x29^((x30-x31)!=x32));

    if (t6 != 3) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x37 = INT8_MIN;
	uint64_t x38 = UINT64_MAX;
	uint64_t x39 = 1159202LLU;
	uint64_t x40 = 2852807787LLU;
	static volatile int32_t t7 = -46;

    t7 = (x37^((x38-x39)!=x40));

    if (t7 != -127) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint16_t x41 = 9994U;
	uint32_t x42 = 9949555U;
	volatile uint16_t x43 = 1249U;
	volatile uint8_t x44 = 4U;
	int32_t t8 = 2;

    t8 = (x41^((x42-x43)!=x44));

    if (t8 != 9995) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x50 = -1;
	int32_t x51 = INT32_MAX;
	volatile int32_t x52 = -806;
	volatile int32_t t9 = -5;

    t9 = (x49^((x50-x51)!=x52));

    if (t9 != 43) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x53 = INT16_MAX;
	int16_t x54 = -1;
	int32_t x55 = INT32_MIN;
	int16_t x56 = INT16_MAX;
	static int32_t t10 = -45616;

    t10 = (x53^((x54-x55)!=x56));

    if (t10 != 32766) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint64_t x57 = UINT64_MAX;
	static volatile int8_t x59 = INT8_MAX;
	int64_t x60 = -56714LL;
	uint64_t t11 = 131LLU;

    t11 = (x57^((x58-x59)!=x60));

    if (t11 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x62 = INT16_MIN;
	uint32_t x63 = 7U;
	uint16_t x64 = 1050U;
	volatile uint32_t t12 = 1015593039U;

    t12 = (x61^((x62-x63)!=x64));

    if (t12 != 49570U) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x65 = INT8_MIN;
	uint8_t x66 = UINT8_MAX;
	static volatile uint64_t x67 = 27522931LLU;
	int8_t x68 = -10;
	volatile int32_t t13 = 213090;

    t13 = (x65^((x66-x67)!=x68));

    if (t13 != -127) { NG(); } else { ; }
	
}

void f14(void) {
    	static int32_t x69 = -3459507;
	int64_t x70 = INT64_MAX;
	static int64_t x71 = 133411660520180930LL;
	uint32_t x72 = UINT32_MAX;
	int32_t t14 = 1;

    t14 = (x69^((x70-x71)!=x72));

    if (t14 != -3459508) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x73 = 394U;
	static int32_t x74 = -1;
	int32_t x75 = -3;
	int8_t x76 = -1;
	volatile uint32_t t15 = 1840750190U;

    t15 = (x73^((x74-x75)!=x76));

    if (t15 != 395U) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x77 = UINT8_MAX;
	int16_t x79 = -1;
	int16_t x80 = INT16_MIN;
	int32_t t16 = 56599;

    t16 = (x77^((x78-x79)!=x80));

    if (t16 != 254) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x82 = -1;
	volatile uint16_t x83 = 20U;
	static volatile int64_t x84 = 26356LL;

    t17 = (x81^((x82-x83)!=x84));

    if (t17 != 1572) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x85 = 4U;
	int64_t x86 = -453LL;
	volatile int8_t x87 = -1;
	static volatile int8_t x88 = 1;
	uint32_t t18 = 6609239U;

    t18 = (x85^((x86-x87)!=x88));

    if (t18 != 5U) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x93 = UINT8_MAX;
	volatile int8_t x94 = INT8_MIN;
	uint16_t x95 = 0U;
	volatile int32_t x96 = -41080239;
	static int32_t t19 = 4;

    t19 = (x93^((x94-x95)!=x96));

    if (t19 != 254) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x97 = INT8_MAX;
	volatile uint8_t x99 = UINT8_MAX;
	int16_t x100 = INT16_MIN;
	volatile int32_t t20 = -1545545;

    t20 = (x97^((x98-x99)!=x100));

    if (t20 != 126) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x101 = 137;

    t21 = (x101^((x102-x103)!=x104));

    if (t21 != 136) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x105 = 27134U;
	int16_t x106 = 29;
	static volatile int32_t x107 = INT32_MAX;
	int16_t x108 = -259;
	volatile uint32_t t22 = 309U;

    t22 = (x105^((x106-x107)!=x108));

    if (t22 != 27135U) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile int16_t x109 = INT16_MIN;
	uint16_t x110 = UINT16_MAX;
	int8_t x111 = INT8_MIN;
	int32_t t23 = 157239308;

    t23 = (x109^((x110-x111)!=x112));

    if (t23 != -32767) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x113 = -1;
	static uint64_t x115 = UINT64_MAX;
	static volatile int8_t x116 = -1;
	int32_t t24 = -124;

    t24 = (x113^((x114-x115)!=x116));

    if (t24 != -2) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x117 = INT16_MIN;
	uint32_t x118 = 651798U;
	int16_t x119 = INT16_MIN;
	volatile int32_t t25 = 267510;

    t25 = (x117^((x118-x119)!=x120));

    if (t25 != -32767) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x123 = -1;
	static int64_t x124 = INT64_MIN;
	volatile uint32_t t26 = 447041U;

    t26 = (x121^((x122-x123)!=x124));

    if (t26 != 46503300U) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x126 = INT16_MAX;
	int8_t x127 = INT8_MIN;
	static int32_t t27 = 187752443;

    t27 = (x125^((x126-x127)!=x128));

    if (t27 != -32767) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x129 = INT64_MIN;
	volatile int32_t x130 = -1025;
	uint16_t x131 = 68U;
	int16_t x132 = INT16_MIN;
	int64_t t28 = -589170514LL;

    t28 = (x129^((x130-x131)!=x132));

    if (t28 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int64_t x133 = -1LL;
	int16_t x135 = -1;
	static int64_t x136 = INT64_MIN;

    t29 = (x133^((x134-x135)!=x136));

    if (t29 != -2LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x141 = 2367LL;
	int8_t x142 = INT8_MAX;
	uint16_t x143 = UINT16_MAX;

    t30 = (x141^((x142-x143)!=x144));

    if (t30 != 2366LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x146 = -1;
	int32_t x147 = -1;
	int32_t x148 = INT32_MIN;
	static int64_t t31 = -1LL;

    t31 = (x145^((x146-x147)!=x148));

    if (t31 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x149 = INT16_MIN;
	int64_t x150 = -1LL;
	int16_t x151 = -1615;
	static int64_t x152 = 181982781LL;
	int32_t t32 = -217598979;

    t32 = (x149^((x150-x151)!=x152));

    if (t32 != -32767) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint16_t x153 = 1294U;
	int64_t x154 = -1LL;
	int64_t x156 = -341691536LL;
	int32_t t33 = -1418367;

    t33 = (x153^((x154-x155)!=x156));

    if (t33 != 1295) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x157 = INT64_MIN;
	int16_t x158 = -780;
	int32_t x159 = INT32_MIN;
	static int8_t x160 = -1;
	static int64_t t34 = 631970474LL;

    t34 = (x157^((x158-x159)!=x160));

    if (t34 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x161 = -129640313;
	uint64_t x162 = 97809686911LLU;
	int64_t x163 = 558270445854LL;
	int16_t x164 = -114;
	volatile int32_t t35 = -7145;

    t35 = (x161^((x162-x163)!=x164));

    if (t35 != -129640314) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x166 = INT32_MIN;
	int8_t x168 = -1;
	volatile uint32_t t36 = 139871U;

    t36 = (x165^((x166-x167)!=x168));

    if (t36 != 4294967294U) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x169 = 25;
	volatile uint32_t x171 = 44860378U;
	static int32_t x172 = INT32_MIN;
	volatile int32_t t37 = 24065220;

    t37 = (x169^((x170-x171)!=x172));

    if (t37 != 24) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x173 = 7U;
	uint64_t x174 = 40724LLU;
	volatile uint64_t x175 = 227LLU;
	uint32_t x176 = UINT32_MAX;
	volatile int32_t t38 = 398260344;

    t38 = (x173^((x174-x175)!=x176));

    if (t38 != 6) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x177 = 55U;
	uint8_t x178 = 0U;
	static uint16_t x179 = 10U;
	int8_t x180 = INT8_MIN;
	volatile int32_t t39 = -58643;

    t39 = (x177^((x178-x179)!=x180));

    if (t39 != 54) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x181 = INT8_MIN;
	uint16_t x183 = 1780U;
	static int32_t x184 = -35569713;
	volatile int32_t t40 = 6418;

    t40 = (x181^((x182-x183)!=x184));

    if (t40 != -127) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x185 = INT32_MIN;
	uint64_t x186 = 174968708855722163LLU;
	volatile int64_t x187 = INT64_MIN;
	static volatile int8_t x188 = 1;

    t41 = (x185^((x186-x187)!=x188));

    if (t41 != -2147483647) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x189 = UINT16_MAX;
	int64_t x191 = 833394505470700LL;
	uint32_t x192 = UINT32_MAX;
	static int32_t t42 = 119806963;

    t42 = (x189^((x190-x191)!=x192));

    if (t42 != 65534) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x193 = 1345599425U;
	static uint64_t x195 = UINT64_MAX;
	int16_t x196 = INT16_MIN;
	uint32_t t43 = 353U;

    t43 = (x193^((x194-x195)!=x196));

    if (t43 != 1345599424U) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x197 = 21588U;
	volatile int8_t x198 = INT8_MIN;
	int16_t x199 = -1;
	int64_t x200 = INT64_MAX;
	uint32_t t44 = 4877687U;

    t44 = (x197^((x198-x199)!=x200));

    if (t44 != 21589U) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x201 = -81;
	static uint32_t x203 = 5U;
	static int32_t t45 = -161791557;

    t45 = (x201^((x202-x203)!=x204));

    if (t45 != -82) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x205 = -45431764LL;
	uint64_t x206 = 7LLU;
	int32_t x207 = INT32_MAX;
	int64_t x208 = -1LL;
	volatile int64_t t46 = 330005817LL;

    t46 = (x205^((x206-x207)!=x208));

    if (t46 != -45431763LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x209 = -54;
	int64_t x210 = -3421LL;
	volatile int32_t x211 = -20367;
	int16_t x212 = 113;
	volatile int32_t t47 = 333;

    t47 = (x209^((x210-x211)!=x212));

    if (t47 != -53) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x213 = INT8_MAX;
	uint8_t x214 = UINT8_MAX;
	volatile uint64_t x215 = 314154785301742150LLU;
	int16_t x216 = INT16_MIN;
	volatile int32_t t48 = 10017320;

    t48 = (x213^((x214-x215)!=x216));

    if (t48 != 126) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int64_t x217 = INT64_MAX;
	static volatile int32_t x218 = INT32_MIN;
	uint32_t x219 = 316U;
	volatile int64_t t49 = -23LL;

    t49 = (x217^((x218-x219)!=x220));

    if (t49 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x221 = INT8_MIN;
	uint16_t x222 = 5U;
	uint64_t x223 = 2161699559770533849LLU;
	int8_t x224 = INT8_MIN;
	int32_t t50 = 14037;

    t50 = (x221^((x222-x223)!=x224));

    if (t50 != -127) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x225 = 11U;
	int32_t x226 = INT32_MIN;
	volatile int32_t x227 = -54439856;
	static int8_t x228 = INT8_MAX;

    t51 = (x225^((x226-x227)!=x228));

    if (t51 != 10) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x229 = 3;
	volatile int16_t x230 = -158;
	static int32_t x231 = INT32_MIN;
	int64_t x232 = INT64_MIN;
	int32_t t52 = -4;

    t52 = (x229^((x230-x231)!=x232));

    if (t52 != 2) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x238 = -53;
	int16_t x240 = -1;

    t53 = (x237^((x238-x239)!=x240));

    if (t53 != 254) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x241 = INT16_MIN;
	int32_t x242 = 31567;
	int32_t x243 = INT32_MAX;
	uint8_t x244 = UINT8_MAX;

    t54 = (x241^((x242-x243)!=x244));

    if (t54 != -32767) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x245 = INT64_MIN;
	uint8_t x246 = 1U;
	int16_t x247 = -1;
	int8_t x248 = INT8_MIN;
	int64_t t55 = -83133847297343LL;

    t55 = (x245^((x246-x247)!=x248));

    if (t55 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint16_t x250 = 7U;
	int8_t x251 = INT8_MIN;

    t56 = (x249^((x250-x251)!=x252));

    if (t56 != 93LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x253 = 348137620217696126LLU;
	static int16_t x254 = INT16_MAX;
	static int16_t x255 = INT16_MAX;
	int8_t x256 = 1;
	uint64_t t57 = 4191974530161307032LLU;

    t57 = (x253^((x254-x255)!=x256));

    if (t57 != 348137620217696127LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x258 = -1;
	uint64_t x260 = 406986595LLU;
	int32_t t58 = -11164214;

    t58 = (x257^((x258-x259)!=x260));

    if (t58 != -127) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x262 = INT8_MAX;
	int32_t x264 = -1;
	int32_t t59 = 158;

    t59 = (x261^((x262-x263)!=x264));

    if (t59 != 1094) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint8_t x266 = 3U;
	static int32_t x267 = -16;
	static int64_t x268 = INT64_MIN;
	static volatile int32_t t60 = -116867332;

    t60 = (x265^((x266-x267)!=x268));

    if (t60 != 9) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x269 = -1;
	volatile uint16_t x270 = UINT16_MAX;
	uint64_t x271 = UINT64_MAX;
	uint16_t x272 = 241U;
	int32_t t61 = 0;

    t61 = (x269^((x270-x271)!=x272));

    if (t61 != -2) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint8_t x273 = 7U;
	int32_t x274 = -2816;
	uint32_t x275 = 0U;
	uint16_t x276 = UINT16_MAX;
	volatile int32_t t62 = -5473;

    t62 = (x273^((x274-x275)!=x276));

    if (t62 != 6) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x278 = INT16_MIN;
	uint64_t x279 = 3416LLU;

    t63 = (x277^((x278-x279)!=x280));

    if (t63 != -127) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x281 = INT8_MIN;
	int16_t x282 = -1;
	static uint16_t x283 = 3U;
	int8_t x284 = INT8_MIN;
	volatile int32_t t64 = 23383508;

    t64 = (x281^((x282-x283)!=x284));

    if (t64 != -127) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x285 = -1;
	uint32_t x286 = 54U;
	static volatile uint64_t x287 = 358892325162LLU;
	uint16_t x288 = 481U;
	static int32_t t65 = -2637;

    t65 = (x285^((x286-x287)!=x288));

    if (t65 != -2) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x293 = INT8_MIN;
	volatile uint8_t x294 = 1U;
	int8_t x295 = INT8_MIN;
	int64_t x296 = INT64_MIN;
	int32_t t66 = -3;

    t66 = (x293^((x294-x295)!=x296));

    if (t66 != -127) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x297 = -396543180047471LL;
	int8_t x298 = -1;
	uint16_t x300 = UINT16_MAX;
	volatile int64_t t67 = -397LL;

    t67 = (x297^((x298-x299)!=x300));

    if (t67 != -396543180047472LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint8_t x301 = 0U;
	volatile uint16_t x302 = 4U;
	static int8_t x303 = 0;
	uint64_t x304 = 2006397LLU;

    t68 = (x301^((x302-x303)!=x304));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x305 = 54;
	volatile int16_t x307 = INT16_MIN;
	volatile int32_t t69 = 1661;

    t69 = (x305^((x306-x307)!=x308));

    if (t69 != 55) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x309 = 337192LL;
	volatile int8_t x310 = -1;
	int64_t x311 = 52643543483LL;
	static int32_t x312 = -1;

    t70 = (x309^((x310-x311)!=x312));

    if (t70 != 337193LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x313 = 103U;
	int8_t x314 = INT8_MAX;
	volatile int64_t x315 = INT64_MAX;
	uint32_t x316 = 1215U;
	int32_t t71 = 24344;

    t71 = (x313^((x314-x315)!=x316));

    if (t71 != 102) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x321 = 14U;
	int16_t x322 = -1;
	int8_t x323 = INT8_MAX;
	int64_t x324 = INT64_MIN;

    t72 = (x321^((x322-x323)!=x324));

    if (t72 != 15) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x325 = -104707;
	int16_t x326 = 1615;
	static uint16_t x327 = UINT16_MAX;
	volatile int32_t x328 = -874604237;
	volatile int32_t t73 = -10;

    t73 = (x325^((x326-x327)!=x328));

    if (t73 != -104708) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x329 = INT16_MIN;
	int8_t x330 = INT8_MIN;
	int16_t x331 = 18;
	static volatile int32_t x332 = -297408604;

    t74 = (x329^((x330-x331)!=x332));

    if (t74 != -32767) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint16_t x333 = UINT16_MAX;
	volatile int32_t x334 = -1;
	int32_t x336 = INT32_MAX;
	volatile int32_t t75 = 970;

    t75 = (x333^((x334-x335)!=x336));

    if (t75 != 65534) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint64_t x337 = 3LLU;
	static volatile int8_t x338 = INT8_MIN;
	int16_t x339 = INT16_MIN;
	int8_t x340 = -1;
	volatile uint64_t t76 = 9LLU;

    t76 = (x337^((x338-x339)!=x340));

    if (t76 != 2LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t x341 = -1;
	int16_t x342 = INT16_MAX;
	int16_t x343 = -925;
	volatile int32_t t77 = -3585;

    t77 = (x341^((x342-x343)!=x344));

    if (t77 != -2) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int8_t x345 = INT8_MIN;
	volatile uint64_t x346 = 1177537LLU;
	int8_t x347 = INT8_MIN;
	volatile int32_t t78 = 2463;

    t78 = (x345^((x346-x347)!=x348));

    if (t78 != -127) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x353 = -1;
	int8_t x354 = -1;
	uint64_t x355 = UINT64_MAX;
	static volatile int32_t x356 = INT32_MIN;

    t79 = (x353^((x354-x355)!=x356));

    if (t79 != -2) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x357 = INT16_MAX;
	int32_t x358 = INT32_MIN;
	uint8_t x360 = UINT8_MAX;
	volatile int32_t t80 = 631966320;

    t80 = (x357^((x358-x359)!=x360));

    if (t80 != 32766) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint16_t x361 = 0U;
	uint32_t x362 = UINT32_MAX;
	volatile uint16_t x363 = 3U;
	volatile uint32_t x364 = 5U;

    t81 = (x361^((x362-x363)!=x364));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x365 = 31U;
	int32_t x366 = INT32_MIN;
	static int64_t x367 = INT64_MIN;
	volatile int32_t t82 = 0;

    t82 = (x365^((x366-x367)!=x368));

    if (t82 != 30) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint16_t x369 = 512U;
	int32_t x371 = INT32_MIN;
	int32_t x372 = INT32_MAX;
	static volatile int32_t t83 = 19357451;

    t83 = (x369^((x370-x371)!=x372));

    if (t83 != 512) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x373 = -1;
	static int32_t x375 = -1;
	int16_t x376 = INT16_MAX;
	int32_t t84 = 5328;

    t84 = (x373^((x374-x375)!=x376));

    if (t84 != -2) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x377 = INT32_MIN;
	int64_t x378 = INT64_MIN;
	static int16_t x379 = -1;
	uint16_t x380 = 123U;
	int32_t t85 = 185540741;

    t85 = (x377^((x378-x379)!=x380));

    if (t85 != -2147483647) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x381 = INT64_MIN;
	uint64_t x382 = UINT64_MAX;
	static int8_t x383 = INT8_MIN;
	static int16_t x384 = INT16_MIN;

    t86 = (x381^((x382-x383)!=x384));

    if (t86 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x386 = -1;
	int16_t x387 = -1;
	int8_t x388 = INT8_MIN;
	int32_t t87 = 10;

    t87 = (x385^((x386-x387)!=x388));

    if (t87 != -127) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x389 = UINT8_MAX;
	int32_t x390 = -62754266;
	int16_t x391 = 0;
	volatile uint32_t x392 = UINT32_MAX;
	static volatile int32_t t88 = -59802;

    t88 = (x389^((x390-x391)!=x392));

    if (t88 != 254) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x393 = 3055101;
	uint32_t x394 = UINT32_MAX;
	int8_t x395 = 16;
	volatile uint16_t x396 = UINT16_MAX;
	volatile int32_t t89 = -29;

    t89 = (x393^((x394-x395)!=x396));

    if (t89 != 3055100) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x397 = UINT64_MAX;
	int32_t x398 = -1;
	int16_t x400 = -625;

    t90 = (x397^((x398-x399)!=x400));

    if (t90 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x402 = 2U;
	volatile int16_t x403 = INT16_MIN;
	static uint64_t x404 = 3482327762283770LLU;
	volatile int32_t t91 = -17533;

    t91 = (x401^((x402-x403)!=x404));

    if (t91 != 16) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x406 = INT16_MIN;
	static int32_t x407 = 480;
	volatile uint8_t x408 = UINT8_MAX;

    t92 = (x405^((x406-x407)!=x408));

    if (t92 != -2147483647) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x409 = UINT16_MAX;
	uint64_t x411 = 6LLU;
	int64_t x412 = 8169LL;
	volatile int32_t t93 = -204;

    t93 = (x409^((x410-x411)!=x412));

    if (t93 != 65534) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int32_t x413 = INT32_MAX;
	int16_t x414 = INT16_MIN;
	int64_t x415 = -1LL;
	int8_t x416 = -1;
	static int32_t t94 = 17172;

    t94 = (x413^((x414-x415)!=x416));

    if (t94 != 2147483646) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x418 = 26740U;
	int16_t x419 = 98;
	int64_t x420 = INT64_MIN;

    t95 = (x417^((x418-x419)!=x420));

    if (t95 != 15) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x421 = UINT8_MAX;
	volatile uint8_t x423 = 124U;
	int64_t x424 = 1791812751975049113LL;

    t96 = (x421^((x422-x423)!=x424));

    if (t96 != 254) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile uint16_t x425 = 10U;
	volatile uint8_t x426 = 27U;
	uint32_t x427 = 7838U;
	int64_t x428 = INT64_MIN;

    t97 = (x425^((x426-x427)!=x428));

    if (t97 != 11) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x429 = -2361;
	static int32_t t98 = 109;

    t98 = (x429^((x430-x431)!=x432));

    if (t98 != -2362) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x433 = 0;
	int32_t x434 = -220481866;
	int8_t x436 = INT8_MIN;
	volatile int32_t t99 = -356760960;

    t99 = (x433^((x434-x435)!=x436));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x437 = -1;
	int16_t x438 = INT16_MIN;
	uint64_t x440 = UINT64_MAX;
	static int32_t t100 = -166;

    t100 = (x437^((x438-x439)!=x440));

    if (t100 != -2) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint32_t x441 = 873350658U;
	static uint16_t x442 = UINT16_MAX;
	int16_t x444 = -1;
	uint32_t t101 = 23U;

    t101 = (x441^((x442-x443)!=x444));

    if (t101 != 873350659U) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x445 = UINT16_MAX;
	static uint64_t x446 = 11986981878LLU;
	int16_t x447 = -5;
	static int8_t x448 = -1;
	volatile int32_t t102 = -88;

    t102 = (x445^((x446-x447)!=x448));

    if (t102 != 65534) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x454 = INT16_MIN;
	int32_t x455 = 7573;
	volatile int64_t t103 = -169516LL;

    t103 = (x453^((x454-x455)!=x456));

    if (t103 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x458 = INT8_MAX;
	volatile int64_t x459 = INT64_MAX;
	uint32_t x460 = 47579U;
	uint32_t t104 = 30211U;

    t104 = (x457^((x458-x459)!=x460));

    if (t104 != 864087566U) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x463 = 14258U;
	static int32_t x464 = INT32_MIN;
	uint64_t t105 = 3672442103668594743LLU;

    t105 = (x461^((x462-x463)!=x464));

    if (t105 != 327889775141LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x465 = -136;
	static uint64_t x466 = UINT64_MAX;
	static int8_t x467 = INT8_MIN;
	int32_t t106 = -30015413;

    t106 = (x465^((x466-x467)!=x468));

    if (t106 != -136) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x469 = -837;
	static int32_t x471 = INT32_MAX;
	uint16_t x472 = 4U;
	volatile int32_t t107 = -1688;

    t107 = (x469^((x470-x471)!=x472));

    if (t107 != -838) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x475 = -1;
	volatile uint8_t x476 = UINT8_MAX;
	volatile int32_t t108 = -157652885;

    t108 = (x473^((x474-x475)!=x476));

    if (t108 != -2147483647) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x477 = UINT16_MAX;
	int64_t x478 = -345267908573547228LL;
	static uint64_t x479 = 33271804175490548LLU;
	static int32_t t109 = 31389943;

    t109 = (x477^((x478-x479)!=x480));

    if (t109 != 65534) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint16_t x481 = 71U;
	static uint16_t x483 = UINT16_MAX;
	int32_t x484 = 2473;

    t110 = (x481^((x482-x483)!=x484));

    if (t110 != 70) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x485 = -1;
	uint16_t x486 = 2031U;
	int32_t x487 = -3254;
	static uint8_t x488 = 2U;
	int32_t t111 = -2196933;

    t111 = (x485^((x486-x487)!=x488));

    if (t111 != -2) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x489 = -7;
	uint16_t x490 = UINT16_MAX;
	uint16_t x491 = 1817U;
	static volatile uint8_t x492 = UINT8_MAX;
	volatile int32_t t112 = 10052183;

    t112 = (x489^((x490-x491)!=x492));

    if (t112 != -8) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x493 = 25;
	int16_t x494 = INT16_MIN;
	uint16_t x495 = UINT16_MAX;
	int64_t x496 = INT64_MIN;

    t113 = (x493^((x494-x495)!=x496));

    if (t113 != 24) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x497 = INT16_MAX;
	uint64_t x498 = UINT64_MAX;
	int16_t x500 = INT16_MIN;

    t114 = (x497^((x498-x499)!=x500));

    if (t114 != 32766) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x505 = -57;
	int16_t x506 = INT16_MAX;
	int16_t x507 = INT16_MIN;
	int32_t x508 = 62803045;
	int32_t t115 = 96344469;

    t115 = (x505^((x506-x507)!=x508));

    if (t115 != -58) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x513 = INT32_MIN;
	volatile uint16_t x514 = 6U;
	static volatile int32_t x515 = INT32_MAX;
	uint32_t x516 = 3641860U;
	static volatile int32_t t116 = -1;

    t116 = (x513^((x514-x515)!=x516));

    if (t116 != -2147483647) { NG(); } else { ; }
	
}

void f117(void) {
    	static int64_t x517 = INT64_MAX;
	int64_t x518 = -1LL;
	volatile int16_t x519 = 3255;
	static volatile int64_t t117 = 5395246LL;

    t117 = (x517^((x518-x519)!=x520));

    if (t117 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x521 = -1;
	int8_t x522 = INT8_MIN;
	volatile uint64_t x523 = 63367LLU;
	int32_t t118 = -2697748;

    t118 = (x521^((x522-x523)!=x524));

    if (t118 != -2) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x526 = INT32_MIN;
	int16_t x527 = -164;
	static volatile int32_t t119 = 396;

    t119 = (x525^((x526-x527)!=x528));

    if (t119 != -2147483647) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x529 = UINT64_MAX;
	int64_t x530 = INT64_MIN;
	int8_t x532 = -1;
	uint64_t t120 = 13965903LLU;

    t120 = (x529^((x530-x531)!=x532));

    if (t120 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x533 = INT64_MIN;
	int32_t x534 = -517030744;
	uint64_t x535 = 99586LLU;
	static volatile int64_t t121 = -1317731857670910LL;

    t121 = (x533^((x534-x535)!=x536));

    if (t121 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x537 = -2004008943138976LL;
	uint32_t x538 = 330834100U;
	int16_t x539 = -16294;
	int64_t t122 = 18610490540LL;

    t122 = (x537^((x538-x539)!=x540));

    if (t122 != -2004008943138975LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x541 = 803091044577634451LL;
	uint16_t x542 = UINT16_MAX;
	uint8_t x543 = 9U;
	int16_t x544 = INT16_MIN;
	int64_t t123 = -2541669LL;

    t123 = (x541^((x542-x543)!=x544));

    if (t123 != 803091044577634450LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x545 = -16073002033625632LL;
	int16_t x546 = -191;
	uint8_t x547 = 11U;
	volatile int64_t t124 = 65248197LL;

    t124 = (x545^((x546-x547)!=x548));

    if (t124 != -16073002033625631LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint64_t x549 = UINT64_MAX;
	int64_t x550 = -1LL;
	static int8_t x551 = -1;
	uint64_t t125 = 3LLU;

    t125 = (x549^((x550-x551)!=x552));

    if (t125 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x553 = 24397025439LL;
	int16_t x554 = -1;
	int64_t x555 = INT64_MAX;
	int64_t t126 = 242LL;

    t126 = (x553^((x554-x555)!=x556));

    if (t126 != 24397025438LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x565 = INT16_MIN;
	uint32_t x567 = UINT32_MAX;
	int64_t x568 = INT64_MAX;
	int32_t t127 = -963469;

    t127 = (x565^((x566-x567)!=x568));

    if (t127 != -32767) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x574 = INT16_MIN;
	volatile uint32_t x575 = 33U;
	static uint32_t x576 = 213291037U;
	static volatile uint32_t t128 = 9U;

    t128 = (x573^((x574-x575)!=x576));

    if (t128 != 2U) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x577 = UINT16_MAX;
	static volatile uint8_t x578 = UINT8_MAX;
	static int8_t x579 = INT8_MAX;
	int8_t x580 = -4;
	static volatile int32_t t129 = -1;

    t129 = (x577^((x578-x579)!=x580));

    if (t129 != 65534) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x581 = -52;
	int32_t x582 = INT32_MIN;
	int16_t x583 = -56;
	static int16_t x584 = INT16_MIN;
	volatile int32_t t130 = 11;

    t130 = (x581^((x582-x583)!=x584));

    if (t130 != -51) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint16_t x585 = 4278U;
	uint8_t x587 = UINT8_MAX;
	static int32_t x588 = INT32_MAX;
	int32_t t131 = 451448790;

    t131 = (x585^((x586-x587)!=x588));

    if (t131 != 4279) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x589 = INT8_MIN;
	volatile uint8_t x590 = 4U;
	uint32_t x592 = 1609226864U;

    t132 = (x589^((x590-x591)!=x592));

    if (t132 != -127) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x593 = INT8_MAX;
	static uint32_t x596 = 273U;
	volatile int32_t t133 = -244167504;

    t133 = (x593^((x594-x595)!=x596));

    if (t133 != 126) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x597 = INT16_MIN;
	static int32_t x598 = 115169;
	static int32_t x599 = 641034;
	static volatile int8_t x600 = INT8_MIN;
	volatile int32_t t134 = -47221115;

    t134 = (x597^((x598-x599)!=x600));

    if (t134 != -32767) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x601 = -1LL;
	int32_t x602 = -1;
	volatile int8_t x603 = INT8_MIN;
	int32_t x604 = INT32_MIN;
	int64_t t135 = 602364002LL;

    t135 = (x601^((x602-x603)!=x604));

    if (t135 != -2LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint64_t x605 = UINT64_MAX;
	static uint16_t x606 = UINT16_MAX;
	volatile uint64_t t136 = 0LLU;

    t136 = (x605^((x606-x607)!=x608));

    if (t136 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x609 = INT16_MIN;
	static int16_t x610 = INT16_MIN;
	uint8_t x611 = 56U;
	static int16_t x612 = INT16_MIN;

    t137 = (x609^((x610-x611)!=x612));

    if (t137 != -32767) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x614 = INT64_MAX;
	int64_t x615 = INT64_MAX;
	uint64_t x616 = 23LLU;
	static volatile uint32_t t138 = 120210425U;

    t138 = (x613^((x614-x615)!=x616));

    if (t138 != 18183U) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint64_t x619 = 1874648649LLU;
	uint32_t x620 = UINT32_MAX;

    t139 = (x617^((x618-x619)!=x620));

    if (t139 != -127) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x621 = 372411LLU;
	volatile uint64_t t140 = 4919449024558120171LLU;

    t140 = (x621^((x622-x623)!=x624));

    if (t140 != 372410LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x625 = -17;
	uint64_t x626 = 222793476LLU;
	int64_t x627 = -8436590453392LL;
	int32_t t141 = -1920000;

    t141 = (x625^((x626-x627)!=x628));

    if (t141 != -18) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x629 = -296218722;
	int32_t x630 = INT32_MAX;
	uint16_t x632 = 7706U;
	int32_t t142 = 16305537;

    t142 = (x629^((x630-x631)!=x632));

    if (t142 != -296218721) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x633 = 919U;
	int8_t x634 = INT8_MAX;
	int64_t x635 = 128356508630889LL;
	volatile int16_t x636 = 6197;
	uint32_t t143 = 29860U;

    t143 = (x633^((x634-x635)!=x636));

    if (t143 != 918U) { NG(); } else { ; }
	
}

void f144(void) {
    	static int32_t x637 = -1;
	volatile int8_t x638 = 1;
	uint8_t x639 = UINT8_MAX;
	static uint32_t x640 = 95401288U;

    t144 = (x637^((x638-x639)!=x640));

    if (t144 != -2) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x642 = 1;
	int32_t x643 = -1;
	int32_t x644 = -1;
	volatile uint32_t t145 = 1U;

    t145 = (x641^((x642-x643)!=x644));

    if (t145 != 119772580U) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x645 = -1LL;
	int8_t x646 = -1;
	int32_t x647 = -1;
	int64_t t146 = 46635838130LL;

    t146 = (x645^((x646-x647)!=x648));

    if (t146 != -2LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x649 = 0U;
	uint64_t x650 = 9524700787134930LLU;
	uint64_t x651 = 1956711497373722LLU;
	static uint64_t x652 = 21439LLU;
	volatile int32_t t147 = -145;

    t147 = (x649^((x650-x651)!=x652));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x653 = INT8_MIN;
	int32_t x654 = 0;
	uint16_t x655 = 171U;
	int32_t t148 = -3416442;

    t148 = (x653^((x654-x655)!=x656));

    if (t148 != -127) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x657 = INT8_MAX;
	int16_t x658 = 1305;
	static int64_t x659 = INT64_MAX;
	volatile uint64_t x660 = UINT64_MAX;
	volatile int32_t t149 = -65974754;

    t149 = (x657^((x658-x659)!=x660));

    if (t149 != 126) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x661 = -977;
	volatile int8_t x663 = 28;
	uint16_t x664 = UINT16_MAX;

    t150 = (x661^((x662-x663)!=x664));

    if (t150 != -978) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x665 = 7;
	static int16_t x666 = INT16_MIN;
	volatile int64_t x667 = INT64_MIN;
	uint32_t x668 = 33074U;
	volatile int32_t t151 = -14684680;

    t151 = (x665^((x666-x667)!=x668));

    if (t151 != 6) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x669 = INT64_MAX;
	static int64_t x670 = INT64_MAX;
	volatile int64_t t152 = -551440159LL;

    t152 = (x669^((x670-x671)!=x672));

    if (t152 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint64_t x674 = 2112678141LLU;
	volatile int8_t x675 = -3;
	volatile int32_t t153 = 85124375;

    t153 = (x673^((x674-x675)!=x676));

    if (t153 != -2) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x677 = 23303990104LL;
	int16_t x678 = -48;
	int8_t x680 = INT8_MAX;
	volatile int64_t t154 = -403345246LL;

    t154 = (x677^((x678-x679)!=x680));

    if (t154 != 23303990105LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x681 = -1;
	int8_t x682 = -4;
	volatile uint64_t x683 = 7105112731408639209LLU;
	uint64_t x684 = UINT64_MAX;
	static volatile int32_t t155 = -253;

    t155 = (x681^((x682-x683)!=x684));

    if (t155 != -2) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x685 = INT32_MIN;
	int16_t x686 = -1;
	int32_t x687 = -1;
	int16_t x688 = 1;
	volatile int32_t t156 = 0;

    t156 = (x685^((x686-x687)!=x688));

    if (t156 != -2147483647) { NG(); } else { ; }
	
}

void f157(void) {
    	static int32_t x689 = INT32_MIN;
	volatile int32_t x690 = -1;
	int64_t x691 = INT64_MIN;
	volatile int32_t t157 = 55;

    t157 = (x689^((x690-x691)!=x692));

    if (t157 != -2147483647) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x694 = -1LL;
	static uint8_t x695 = 1U;
	int16_t x696 = INT16_MAX;

    t158 = (x693^((x694-x695)!=x696));

    if (t158 != 9690034U) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x697 = INT16_MAX;
	int32_t x698 = -1012773;
	volatile int16_t x699 = INT16_MIN;
	uint64_t x700 = 14382669LLU;
	int32_t t159 = 702690;

    t159 = (x697^((x698-x699)!=x700));

    if (t159 != 32766) { NG(); } else { ; }
	
}

void f160(void) {
    	static int64_t x701 = INT64_MAX;
	int8_t x703 = 44;
	uint64_t x704 = 614974LLU;
	int64_t t160 = 1LL;

    t160 = (x701^((x702-x703)!=x704));

    if (t160 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x709 = UINT8_MAX;
	int32_t x710 = INT32_MAX;
	int64_t x712 = 11377LL;
	volatile int32_t t161 = 1;

    t161 = (x709^((x710-x711)!=x712));

    if (t161 != 254) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x713 = INT16_MAX;
	int64_t x714 = -470LL;
	volatile int16_t x715 = INT16_MAX;
	int16_t x716 = -1;
	int32_t t162 = 801;

    t162 = (x713^((x714-x715)!=x716));

    if (t162 != 32766) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x718 = 260LL;
	static uint16_t x719 = 1U;
	uint64_t x720 = 314584675279LLU;

    t163 = (x717^((x718-x719)!=x720));

    if (t163 != 1866883280884491LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int64_t x725 = -1LL;
	int32_t x726 = -1183;
	volatile int64_t t164 = -45369810673LL;

    t164 = (x725^((x726-x727)!=x728));

    if (t164 != -2LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x734 = 28555U;
	volatile uint32_t x735 = 1U;
	static volatile int32_t t165 = 113;

    t165 = (x733^((x734-x735)!=x736));

    if (t165 != 6) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int8_t x737 = INT8_MIN;
	int64_t x740 = INT64_MIN;

    t166 = (x737^((x738-x739)!=x740));

    if (t166 != -127) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x741 = 23U;
	uint32_t x742 = 230U;
	int64_t x743 = -1LL;
	volatile int16_t x744 = 267;
	static int32_t t167 = -3458;

    t167 = (x741^((x742-x743)!=x744));

    if (t167 != 22) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x745 = -1;
	static volatile int64_t x746 = -1LL;
	uint16_t x748 = UINT16_MAX;
	volatile int32_t t168 = 10143;

    t168 = (x745^((x746-x747)!=x748));

    if (t168 != -2) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x749 = -1;
	int64_t x750 = INT64_MIN;
	uint64_t x751 = 163089243755LLU;
	int16_t x752 = -1;
	int32_t t169 = 3480;

    t169 = (x749^((x750-x751)!=x752));

    if (t169 != -2) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x753 = 18U;
	uint64_t x754 = 11174LLU;
	int32_t x755 = INT32_MIN;
	int8_t x756 = -1;
	volatile int32_t t170 = 6976046;

    t170 = (x753^((x754-x755)!=x756));

    if (t170 != 19) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x758 = UINT64_MAX;
	int16_t x759 = -1;
	static int16_t x760 = 9;
	static volatile int32_t t171 = 1;

    t171 = (x757^((x758-x759)!=x760));

    if (t171 != -127) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x761 = 1320304867287476LLU;
	int8_t x762 = -1;
	int16_t x763 = 1059;
	int8_t x764 = -1;
	uint64_t t172 = 21375097177550LLU;

    t172 = (x761^((x762-x763)!=x764));

    if (t172 != 1320304867287477LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x765 = 2846LLU;
	uint32_t x766 = 1684801522U;
	static int8_t x767 = 48;
	static volatile int32_t x768 = 2832;

    t173 = (x765^((x766-x767)!=x768));

    if (t173 != 2847LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x769 = INT32_MAX;
	uint8_t x771 = UINT8_MAX;
	int8_t x772 = INT8_MIN;
	volatile int32_t t174 = -789;

    t174 = (x769^((x770-x771)!=x772));

    if (t174 != 2147483646) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x773 = -1;
	volatile uint32_t x774 = 176195348U;
	uint64_t x775 = 9224232936045368LLU;
	volatile int32_t t175 = 149;

    t175 = (x773^((x774-x775)!=x776));

    if (t175 != -2) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x777 = -1;
	volatile uint8_t x779 = 41U;
	volatile int32_t t176 = -14023144;

    t176 = (x777^((x778-x779)!=x780));

    if (t176 != -2) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x781 = INT16_MIN;
	static int64_t x782 = -249243916608LL;
	volatile uint64_t x783 = UINT64_MAX;
	int64_t x784 = -2312LL;

    t177 = (x781^((x782-x783)!=x784));

    if (t177 != -32767) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x785 = INT16_MIN;
	uint8_t x786 = 0U;
	uint8_t x787 = 2U;
	int8_t x788 = 9;
	volatile int32_t t178 = 170261966;

    t178 = (x785^((x786-x787)!=x788));

    if (t178 != -32767) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x790 = 26;
	static uint32_t x791 = 1555592U;
	int16_t x792 = -343;
	int32_t t179 = 792554334;

    t179 = (x789^((x790-x791)!=x792));

    if (t179 != -2147483647) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x794 = -46433616;
	int16_t x795 = 1;
	int8_t x796 = -1;
	volatile int32_t t180 = 23147;

    t180 = (x793^((x794-x795)!=x796));

    if (t180 != -211128637) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x797 = -9898;
	int64_t x799 = -1LL;
	volatile int32_t t181 = -13;

    t181 = (x797^((x798-x799)!=x800));

    if (t181 != -9897) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x801 = 1U;
	int8_t x802 = INT8_MIN;
	volatile uint64_t x803 = 3798LLU;
	int16_t x804 = -1;
	volatile int32_t t182 = -1150796;

    t182 = (x801^((x802-x803)!=x804));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x805 = INT16_MAX;
	int8_t x807 = INT8_MIN;
	int32_t t183 = 982299304;

    t183 = (x805^((x806-x807)!=x808));

    if (t183 != 32766) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x809 = 35LLU;
	uint16_t x810 = 13U;
	uint32_t x812 = 499U;
	static volatile uint64_t t184 = 28578961712689358LLU;

    t184 = (x809^((x810-x811)!=x812));

    if (t184 != 34LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x813 = 26637444U;
	volatile int64_t x815 = 20LL;
	int32_t x816 = INT32_MAX;

    t185 = (x813^((x814-x815)!=x816));

    if (t185 != 26637445U) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x817 = 0;
	uint32_t x818 = 17580575U;
	int8_t x819 = -1;
	int16_t x820 = INT16_MIN;

    t186 = (x817^((x818-x819)!=x820));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x821 = 8;
	uint32_t x823 = 6U;
	int32_t t187 = 188193825;

    t187 = (x821^((x822-x823)!=x824));

    if (t187 != 9) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x826 = -2606;
	int16_t x827 = 3;
	volatile uint32_t t188 = 438U;

    t188 = (x825^((x826-x827)!=x828));

    if (t188 != 13276230U) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x833 = INT16_MIN;
	int8_t x834 = -1;
	static uint32_t x836 = 1202536U;
	static volatile int32_t t189 = 15;

    t189 = (x833^((x834-x835)!=x836));

    if (t189 != -32767) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x841 = -25;
	static int16_t x843 = -4277;
	int8_t x844 = -1;
	int32_t t190 = -1979;

    t190 = (x841^((x842-x843)!=x844));

    if (t190 != -26) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x845 = 57;
	volatile int16_t x846 = INT16_MIN;
	int32_t t191 = 2;

    t191 = (x845^((x846-x847)!=x848));

    if (t191 != 56) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int32_t x849 = INT32_MAX;
	int8_t x850 = -1;
	int8_t x851 = INT8_MAX;
	static int64_t x852 = -1LL;
	int32_t t192 = 123;

    t192 = (x849^((x850-x851)!=x852));

    if (t192 != 2147483646) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint32_t x853 = 7U;
	int32_t x854 = INT32_MIN;
	uint32_t x855 = 246797U;
	volatile uint32_t t193 = 17941U;

    t193 = (x853^((x854-x855)!=x856));

    if (t193 != 6U) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile int8_t x857 = INT8_MIN;
	static int16_t x858 = INT16_MIN;
	int8_t x860 = INT8_MIN;

    t194 = (x857^((x858-x859)!=x860));

    if (t194 != -127) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x861 = INT8_MIN;
	static int32_t x862 = 7519595;
	int16_t x863 = INT16_MAX;
	uint8_t x864 = UINT8_MAX;
	volatile int32_t t195 = -1157385;

    t195 = (x861^((x862-x863)!=x864));

    if (t195 != -127) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int16_t x866 = INT16_MIN;
	int16_t x867 = INT16_MIN;
	uint32_t t196 = 982045U;

    t196 = (x865^((x866-x867)!=x868));

    if (t196 != 4294967294U) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x869 = INT32_MAX;
	int32_t x871 = INT32_MIN;
	int32_t t197 = 27784;

    t197 = (x869^((x870-x871)!=x872));

    if (t197 != 2147483646) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x873 = -1LL;
	int64_t x874 = -1LL;
	static int16_t x875 = INT16_MAX;
	int32_t x876 = -218272884;

    t198 = (x873^((x874-x875)!=x876));

    if (t198 != -2LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x877 = INT16_MAX;
	uint16_t x878 = 235U;
	uint16_t x880 = 3373U;
	int32_t t199 = 70878532;

    t199 = (x877^((x878-x879)!=x880));

    if (t199 != 32766) { NG(); } else { ; }
	
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

