
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

static int8_t x2 = INT8_MIN;
static volatile int64_t x4 = 87272975685485460LL;
volatile uint64_t t1 = 47173623437LLU;
uint32_t x9 = 2250816U;
uint16_t x11 = UINT16_MAX;
int64_t t2 = -1999LL;
int8_t x14 = -1;
uint16_t x15 = UINT16_MAX;
volatile int8_t x17 = INT8_MAX;
uint16_t x19 = UINT16_MAX;
volatile int32_t x24 = INT32_MIN;
volatile uint8_t x25 = 92U;
uint16_t x26 = 24458U;
uint16_t x27 = UINT16_MAX;
volatile uint32_t x28 = 32506U;
volatile uint16_t x33 = 256U;
volatile uint64_t t10 = 2668LLU;
uint32_t t11 = 1390205U;
volatile uint64_t t12 = 4326620912168311982LLU;
int8_t x63 = 48;
int32_t t15 = -496710;
int32_t x66 = INT32_MIN;
static uint16_t x68 = UINT16_MAX;
int64_t t16 = -30071243634182289LL;
int8_t x69 = INT8_MIN;
volatile uint8_t x72 = 29U;
static int32_t x74 = -1;
uint64_t x75 = 163238122LLU;
static int32_t x76 = -1;
volatile uint64_t t18 = 1050557118LLU;
volatile int16_t x83 = 6;
uint64_t t20 = 54LLU;
int32_t x91 = 792387821;
volatile int64_t x92 = INT64_MIN;
volatile int32_t t25 = 2216203;
int8_t x106 = 1;
static uint32_t x115 = 269332U;
volatile int64_t x124 = -1LL;
static int64_t t29 = 1028482LL;
int16_t x130 = INT16_MAX;
int8_t x134 = 0;
static uint64_t x136 = 132509318198742LLU;
int32_t x140 = -727531014;
volatile int64_t t33 = INT64_MIN;
int16_t x143 = INT16_MIN;
int64_t x151 = INT64_MAX;
volatile int8_t x152 = INT8_MIN;
volatile int64_t x154 = 9LL;
int64_t x160 = INT64_MAX;
int8_t x164 = INT8_MIN;
uint16_t x165 = 2473U;
static uint8_t x169 = 20U;
int8_t x171 = INT8_MIN;
int64_t t42 = 1LL;
int32_t x177 = -1;
uint64_t x188 = 33173444274517LLU;
int64_t x192 = -1LL;
volatile int32_t x202 = INT32_MIN;
static uint32_t t50 = 143508424U;
uint8_t x214 = UINT8_MAX;
int16_t x220 = -26;
uint64_t x232 = 96432068194LLU;
volatile uint64_t t56 = 492036918LLU;
static int32_t x250 = -1;
uint16_t x251 = 5418U;
static int64_t x257 = -1LL;
int8_t x263 = -1;
int64_t x270 = INT64_MIN;
uint64_t t66 = 350558213170476LLU;
uint8_t x276 = 14U;
int32_t t67 = 10100;
volatile uint8_t x290 = UINT8_MAX;
uint8_t x298 = 32U;
uint16_t x308 = 2097U;
int8_t x324 = INT8_MIN;
uint32_t x326 = 12909677U;
volatile int64_t x331 = -1LL;
uint8_t x344 = 3U;
int32_t x346 = -1;
static volatile int16_t x347 = -3;
volatile int8_t x352 = INT8_MIN;
volatile uint32_t t87 = 694451U;
uint8_t x357 = UINT8_MAX;
volatile int32_t x360 = -1;
int8_t x364 = INT8_MAX;
volatile uint8_t x365 = UINT8_MAX;
uint32_t t90 = 15999U;
uint64_t x370 = 61076728166LLU;
static volatile int8_t x371 = 9;
static int64_t x384 = INT64_MAX;
int64_t t94 = 131LL;
int8_t x398 = 1;
int64_t x402 = -1LL;
static volatile int64_t x412 = 866099942522LL;
int16_t x416 = INT16_MIN;
static uint8_t x419 = UINT8_MAX;
int64_t t104 = -442504845611617180LL;
int64_t x425 = INT64_MIN;
int16_t x427 = INT16_MAX;
static int8_t x431 = INT8_MIN;
int32_t x436 = -263160202;
static int16_t x442 = INT16_MIN;
volatile int64_t t109 = -14LL;
static int16_t x445 = -1;
static uint32_t x447 = 552U;
volatile int8_t x450 = INT8_MIN;
volatile uint16_t x456 = UINT16_MAX;
int64_t t112 = 61259527177070030LL;
static int8_t x469 = 0;
int32_t x470 = INT32_MIN;
uint16_t x476 = UINT16_MAX;
static int32_t x478 = 122;
volatile int64_t x479 = 814860545391LL;
volatile uint64_t t118 = 275816127LLU;
uint64_t x497 = UINT64_MAX;
int32_t x498 = -26239;
int32_t x506 = INT32_MIN;
int64_t x511 = INT64_MIN;
int16_t x512 = INT16_MIN;
volatile int64_t t124 = -7137695866927561LL;
static int64_t x514 = -414342394233094545LL;
static int32_t x524 = INT32_MAX;
int32_t x525 = 213;
uint64_t x526 = 40071208005732LLU;
volatile uint64_t x529 = UINT64_MAX;
int32_t x544 = INT32_MIN;
int8_t x545 = INT8_MIN;
static int64_t x552 = INT64_MAX;
volatile int16_t x554 = INT16_MIN;
uint64_t t135 = 27903541861574865LLU;
int32_t x559 = 6282;
int32_t x571 = -1;
int32_t x576 = -1;
uint32_t x586 = 61U;
int32_t x588 = -1;
int16_t x589 = -1;
volatile int16_t x591 = INT16_MIN;
volatile int32_t x593 = INT32_MIN;
int8_t x595 = INT8_MIN;
static int64_t t145 = 5347861519LL;
static int64_t x599 = INT64_MIN;
volatile uint32_t x600 = 2U;
static int8_t x601 = -1;
int32_t x608 = -5164;
int32_t x610 = INT32_MIN;
uint64_t x611 = 852LLU;
int64_t x612 = INT64_MAX;
uint64_t x613 = 114453LLU;
uint64_t x615 = 160977535486LLU;
uint64_t t150 = 6634264317052592430LLU;
static int8_t x624 = INT8_MIN;
int64_t t152 = -870LL;
volatile int64_t x642 = 29702LL;
volatile int16_t x645 = -293;
uint16_t x646 = UINT16_MAX;
static volatile uint64_t t158 = 118677592939LLU;
int16_t x650 = INT16_MIN;
static int32_t x653 = INT32_MAX;
uint8_t x670 = 28U;
int64_t x674 = INT64_MAX;
int64_t x681 = INT64_MAX;
int64_t x683 = INT64_MAX;
volatile int32_t x685 = INT32_MIN;
volatile uint8_t x689 = 29U;
static volatile int8_t x693 = -1;
int64_t x709 = -82070776348109856LL;
int32_t x716 = -118850;
int32_t x717 = INT32_MIN;
int32_t t174 = -16391;
int16_t x729 = INT16_MAX;
int32_t t175 = 1306;
uint32_t x733 = 18U;
static int8_t x736 = INT8_MIN;
uint32_t t176 = 501500133U;
int16_t x748 = INT16_MAX;
int32_t x751 = -12882390;
uint8_t x755 = 13U;
static volatile int32_t t180 = -1405233;
int64_t x763 = INT64_MAX;
int64_t t182 = 252356LL;
static int16_t x772 = 401;
static int8_t x773 = 1;
int16_t x779 = 27;
int8_t x780 = 5;
volatile int64_t t187 = 5586953016432LL;
uint32_t x785 = 180780214U;
uint64_t t188 = 23LLU;
int64_t x793 = -4729LL;
int64_t x795 = INT64_MIN;
int64_t t189 = -15912736LL;
int64_t x804 = -1LL;
int64_t t192 = 9081099882529515LL;
volatile int64_t t194 = 14311700LL;
static int64_t x827 = -188784683905LL;
static volatile int16_t x829 = -1;


void f0(void) {
    	uint8_t x1 = UINT8_MAX;
	static int32_t x3 = -1;
	static int64_t t0 = 1196923467LL;

    t0 = (x1-((x2^x3)/x4));

    if (t0 != 255LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = 6U;
	int64_t x6 = -748751LL;
	uint16_t x7 = 23314U;
	uint64_t x8 = UINT64_MAX;

    t1 = (x5-((x6^x7)/x8));

    if (t1 != 6LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x10 = 822873810U;
	int64_t x12 = INT64_MIN;

    t2 = (x9-((x10^x11)/x12));

    if (t2 != 2250816LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint64_t x13 = 66147434LLU;
	volatile int8_t x16 = 25;
	volatile uint64_t t3 = 13831978134174460LLU;

    t3 = (x13-((x14^x15)/x16));

    if (t3 != 66150055LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x18 = 27;
	static uint16_t x20 = 40U;
	volatile int32_t t4 = -4525615;

    t4 = (x17-((x18^x19)/x20));

    if (t4 != -1510) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x21 = UINT16_MAX;
	int8_t x22 = -1;
	int8_t x23 = -1;
	static volatile int32_t t5 = 271;

    t5 = (x21-((x22^x23)/x24));

    if (t5 != 65535) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t t6 = 8110634U;

    t6 = (x25-((x26^x27)/x28));

    if (t6 != 91U) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = INT64_MAX;
	uint16_t x30 = 119U;
	volatile int16_t x31 = -1;
	volatile int64_t x32 = -1LL;
	volatile int64_t t7 = -17246368734LL;

    t7 = (x29-((x30^x31)/x32));

    if (t7 != 9223372036854775687LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x34 = INT32_MIN;
	static int64_t x35 = -11LL;
	uint32_t x36 = 41309U;
	static volatile int64_t t8 = 92293LL;

    t8 = (x33-((x34^x35)/x36));

    if (t8 != -51729LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = -1;
	volatile uint8_t x38 = 73U;
	static uint8_t x39 = UINT8_MAX;
	int8_t x40 = -1;
	int32_t t9 = 13707;

    t9 = (x37-((x38^x39)/x40));

    if (t9 != 181) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x41 = 105471011LLU;
	volatile int8_t x42 = -6;
	volatile int8_t x43 = 0;
	int32_t x44 = INT32_MIN;

    t10 = (x41-((x42^x43)/x44));

    if (t10 != 105471011LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = INT32_MIN;
	uint32_t x46 = 48926115U;
	volatile uint32_t x47 = UINT32_MAX;
	uint8_t x48 = 6U;

    t11 = (x45-((x46^x47)/x48));

    if (t11 != 1439810118U) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x49 = 5;
	int8_t x50 = INT8_MIN;
	static uint8_t x51 = UINT8_MAX;
	uint64_t x52 = 107003LLU;

    t12 = (x49-((x50^x51)/x52));

    if (t12 != 18446571679065721920LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x53 = 1U;
	int8_t x54 = 6;
	volatile int16_t x55 = INT16_MIN;
	int8_t x56 = INT8_MIN;
	static volatile int32_t t13 = 863;

    t13 = (x53-((x54^x55)/x56));

    if (t13 != -254) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x57 = 561U;
	uint16_t x58 = UINT16_MAX;
	int16_t x59 = INT16_MAX;
	int16_t x60 = -1;
	uint32_t t14 = 242658647U;

    t14 = (x57-((x58^x59)/x60));

    if (t14 != 33329U) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint16_t x61 = 2248U;
	volatile int32_t x62 = INT32_MAX;
	int16_t x64 = INT16_MIN;

    t15 = (x61-((x62^x63)/x64));

    if (t15 != 67783) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x65 = INT64_MAX;
	uint32_t x67 = UINT32_MAX;

    t16 = (x65-((x66^x67)/x68));

    if (t16 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x70 = UINT64_MAX;
	int16_t x71 = INT16_MIN;
	static uint64_t t17 = 1530590317897LLU;

    t17 = (x69-((x70^x71)/x72));

    if (t17 != 18446744073709550359LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = INT16_MIN;

    t18 = (x73-((x74^x75)/x76));

    if (t18 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x77 = 49506251499LL;
	uint64_t x78 = UINT64_MAX;
	uint8_t x79 = 71U;
	uint8_t x80 = UINT8_MAX;
	uint64_t t19 = 279559014699LLU;

    t19 = (x77-((x78^x79)/x80));

    if (t19 != 18374403950377726443LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	static int32_t x81 = INT32_MAX;
	volatile uint64_t x82 = UINT64_MAX;
	int32_t x84 = 4694232;

    t20 = (x81-((x82^x83)/x84));

    if (t20 != 18446740146195255933LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile int8_t x85 = -1;
	int16_t x86 = INT16_MIN;
	static int16_t x87 = INT16_MIN;
	int8_t x88 = INT8_MAX;
	volatile int32_t t21 = 48945;

    t21 = (x85-((x86^x87)/x88));

    if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int32_t x89 = INT32_MAX;
	uint64_t x90 = UINT64_MAX;
	volatile uint64_t t22 = 7391LLU;

    t22 = (x89-((x90^x91)/x92));

    if (t22 != 2147483646LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x93 = 7U;
	int8_t x94 = 1;
	static uint64_t x95 = 4432196647574LLU;
	int32_t x96 = INT32_MAX;
	uint64_t t23 = 3530152LLU;

    t23 = (x93-((x94^x95)/x96));

    if (t23 != 18446744073709549560LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x97 = 3U;
	int8_t x98 = INT8_MIN;
	volatile int64_t x99 = INT64_MAX;
	uint16_t x100 = 953U;
	static volatile int64_t t24 = -82028856487089LL;

    t24 = (x97-((x98^x99)/x100));

    if (t24 != 9678249776342894LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x101 = 35U;
	int32_t x102 = -1;
	int16_t x103 = INT16_MAX;
	int8_t x104 = INT8_MIN;

    t25 = (x101-((x102^x103)/x104));

    if (t25 != -221) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = INT16_MIN;
	int8_t x107 = INT8_MIN;
	static int32_t x108 = INT32_MIN;
	int32_t t26 = -169514;

    t26 = (x105-((x106^x107)/x108));

    if (t26 != -32768) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x113 = 1207903U;
	int8_t x114 = 0;
	int32_t x116 = 276523;
	static uint32_t t27 = 88418U;

    t27 = (x113-((x114^x115)/x116));

    if (t27 != 1207903U) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x117 = -1LL;
	volatile int64_t x118 = INT64_MAX;
	uint32_t x119 = 42818667U;
	static volatile int32_t x120 = -1;
	int64_t t28 = -163LL;

    t28 = (x117-((x118^x119)/x120));

    if (t28 != 9223372036811957139LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x121 = INT8_MAX;
	int8_t x122 = INT8_MIN;
	static uint32_t x123 = 632960564U;

    t29 = (x121-((x122^x123)/x124));

    if (t29 != 3662006835LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x125 = INT64_MIN;
	int16_t x126 = -1;
	static int32_t x127 = -914793;
	uint64_t x128 = 7502823576LLU;
	uint64_t t30 = 252132439LLU;

    t30 = (x125-((x126^x127)/x128));

    if (t30 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile int16_t x129 = INT16_MAX;
	uint64_t x131 = UINT64_MAX;
	uint16_t x132 = 803U;
	volatile uint64_t t31 = 79957914068LLU;

    t31 = (x129-((x130^x131)/x132));

    if (t31 != 18423771789682548868LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x133 = -5;
	volatile int32_t x135 = -249019572;
	uint64_t t32 = 16317LLU;

    t32 = (x133-((x134^x135)/x136));

    if (t32 != 18446744073709412401LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile int64_t x137 = INT64_MIN;
	int8_t x138 = INT8_MIN;
	int8_t x139 = INT8_MAX;

    t33 = (x137-((x138^x139)/x140));

    if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x141 = -1LL;
	int8_t x142 = INT8_MIN;
	static uint8_t x144 = 16U;
	int64_t t34 = -5990829541LL;

    t34 = (x141-((x142^x143)/x144));

    if (t34 != -2041LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x145 = 22U;
	volatile int16_t x146 = 2;
	uint8_t x147 = UINT8_MAX;
	uint8_t x148 = 111U;
	uint32_t t35 = 33679U;

    t35 = (x145-((x146^x147)/x148));

    if (t35 != 20U) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x149 = -42LL;
	volatile int32_t x150 = 103874;
	int64_t t36 = 49LL;

    t36 = (x149-((x150^x151)/x152));

    if (t36 != 72057594037927082LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x153 = 325434186466447065LL;
	static int64_t x155 = -575941055219323119LL;
	static int32_t x156 = -8183;
	int64_t t37 = 0LL;

    t37 = (x153-((x154^x155)/x156));

    if (t37 != 325363803837188930LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x157 = INT16_MIN;
	uint8_t x158 = 114U;
	static int64_t x159 = -469LL;
	static volatile int64_t t38 = -6935859LL;

    t38 = (x157-((x158^x159)/x160));

    if (t38 != -32768LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x161 = -1;
	int64_t x162 = -1LL;
	int16_t x163 = INT16_MIN;
	volatile int64_t t39 = 14277LL;

    t39 = (x161-((x162^x163)/x164));

    if (t39 != 254LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x166 = 0U;
	uint32_t x167 = UINT32_MAX;
	int16_t x168 = INT16_MAX;
	volatile uint32_t t40 = 401792413U;

    t40 = (x165-((x166^x167)/x168));

    if (t40 != 4294838693U) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x170 = 28U;
	static uint32_t x172 = 499891929U;
	volatile uint32_t t41 = 67645371U;

    t41 = (x169-((x170^x171)/x172));

    if (t41 != 12U) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x173 = -1LL;
	int16_t x174 = -1;
	int8_t x175 = INT8_MAX;
	int32_t x176 = -1;

    t42 = (x173-((x174^x175)/x176));

    if (t42 != -129LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x178 = INT8_MIN;
	uint32_t x179 = 10U;
	uint32_t x180 = 266U;
	uint32_t t43 = 6U;

    t43 = (x177-((x178^x179)/x180));

    if (t43 != 4278820802U) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x181 = -1LL;
	static int64_t x182 = 994LL;
	volatile int16_t x183 = INT16_MAX;
	uint16_t x184 = 12U;
	volatile int64_t t44 = 437589784233685LL;

    t44 = (x181-((x182^x183)/x184));

    if (t44 != -2648LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x185 = -2;
	int32_t x186 = -1;
	uint8_t x187 = 8U;
	uint64_t t45 = 55929722919348LLU;

    t45 = (x185-((x186^x187)/x188));

    if (t45 != 18446744073708995545LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x189 = 0;
	int8_t x190 = -1;
	int8_t x191 = 15;
	int64_t t46 = 3915465LL;

    t46 = (x189-((x190^x191)/x192));

    if (t46 != -16LL) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int32_t x193 = 6;
	int32_t x194 = 3405860;
	int32_t x195 = 16619;
	volatile int8_t x196 = INT8_MIN;
	static volatile int32_t t47 = -14;

    t47 = (x193-((x194^x195)/x196));

    if (t47 != 26487) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int8_t x197 = INT8_MIN;
	int32_t x198 = INT32_MIN;
	int16_t x199 = -3126;
	uint32_t x200 = 3113102U;
	static volatile uint32_t t48 = 193376U;

    t48 = (x197-((x198^x199)/x200));

    if (t48 != 4294966479U) { NG(); } else { ; }
	
}

void f49(void) {
    	static int32_t x201 = -1;
	int8_t x203 = -1;
	static int8_t x204 = INT8_MIN;
	int32_t t49 = -6;

    t49 = (x201-((x202^x203)/x204));

    if (t49 != 16777214) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x205 = INT32_MIN;
	static int16_t x206 = 464;
	int32_t x207 = INT32_MIN;
	uint32_t x208 = 513780U;

    t50 = (x205-((x206^x207)/x208));

    if (t50 != 2147479469U) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x209 = 1U;
	int64_t x210 = INT64_MIN;
	volatile int8_t x211 = INT8_MAX;
	static volatile int64_t x212 = -1LL;
	volatile int64_t t51 = 143462733LL;

    t51 = (x209-((x210^x211)/x212));

    if (t51 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x213 = -1;
	static int16_t x215 = INT16_MAX;
	int16_t x216 = -1;
	int32_t t52 = -24;

    t52 = (x213-((x214^x215)/x216));

    if (t52 != 32511) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x217 = INT8_MAX;
	int8_t x218 = -34;
	int64_t x219 = INT64_MAX;
	static int64_t t53 = -6496398017422LL;

    t53 = (x217-((x218^x219)/x220));

    if (t53 != -354745078340568172LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x221 = UINT64_MAX;
	int16_t x222 = -1;
	volatile int16_t x223 = INT16_MIN;
	static volatile int16_t x224 = -799;
	uint64_t t54 = 4391502166053022568LLU;

    t54 = (x221-((x222^x223)/x224));

    if (t54 != 40LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x225 = -173LL;
	static int64_t x226 = INT64_MIN;
	int64_t x227 = 451114397291326LL;
	int16_t x228 = INT16_MIN;
	volatile int64_t t55 = -2083060477164LL;

    t55 = (x225-((x226^x227)/x228));

    if (t55 != -281461209791966LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x229 = 2;
	int8_t x230 = -1;
	int64_t x231 = -7483LL;

    t56 = (x229-((x230^x231)/x232));

    if (t56 != 2LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x233 = 1U;
	static uint32_t x234 = UINT32_MAX;
	static int16_t x235 = INT16_MIN;
	volatile int32_t x236 = 31110501;
	volatile uint32_t t57 = 44U;

    t57 = (x233-((x234^x235)/x236));

    if (t57 != 1U) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x237 = INT16_MIN;
	int8_t x238 = 0;
	int8_t x239 = INT8_MAX;
	uint16_t x240 = UINT16_MAX;
	int32_t t58 = 1;

    t58 = (x237-((x238^x239)/x240));

    if (t58 != -32768) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x241 = 7536619470544548LLU;
	int64_t x242 = INT64_MIN;
	int16_t x243 = INT16_MIN;
	int32_t x244 = -1;
	static uint64_t t59 = 39937LLU;

    t59 = (x241-((x242^x243)/x244));

    if (t59 != 9230908656325287588LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x245 = 227155320U;
	uint16_t x246 = 12U;
	uint64_t x247 = UINT64_MAX;
	static int64_t x248 = INT64_MIN;
	volatile uint64_t t60 = 13991252028LLU;

    t60 = (x245-((x246^x247)/x248));

    if (t60 != 227155319LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x249 = -14;
	uint16_t x252 = 13345U;
	volatile int32_t t61 = 13410241;

    t61 = (x249-((x250^x251)/x252));

    if (t61 != -14) { NG(); } else { ; }
	
}

void f62(void) {
    	static int32_t x253 = -1;
	volatile int32_t x254 = INT32_MIN;
	volatile int64_t x255 = 114378937322398LL;
	int8_t x256 = INT8_MIN;
	static volatile int64_t t62 = -60563745777749LL;

    t62 = (x253-((x254^x255)/x256));

    if (t62 != -893573932137LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x258 = 48;
	static uint16_t x259 = UINT16_MAX;
	uint64_t x260 = UINT64_MAX;
	static volatile uint64_t t63 = UINT64_MAX;

    t63 = (x257-((x258^x259)/x260));

    if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x261 = INT32_MAX;
	int64_t x262 = -249638781757LL;
	uint8_t x264 = 4U;
	int64_t t64 = 0LL;

    t64 = (x261-((x262^x263)/x264));

    if (t64 != -60262211792LL) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int64_t x265 = INT64_MAX;
	static int32_t x266 = -1;
	volatile int8_t x267 = INT8_MIN;
	uint64_t x268 = 450195LLU;
	uint64_t t65 = 8LLU;

    t65 = (x265-((x266^x267)/x268));

    if (t65 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x269 = INT16_MIN;
	int32_t x271 = INT32_MIN;
	uint64_t x272 = 1254LLU;

    t66 = (x269-((x270^x271)/x272));

    if (t66 != 18439388912597312076LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x273 = 15690;
	static int8_t x274 = INT8_MIN;
	static int16_t x275 = -1;

    t67 = (x273-((x274^x275)/x276));

    if (t67 != 15681) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x277 = UINT32_MAX;
	int64_t x278 = -1330LL;
	uint64_t x279 = 793388346604478LLU;
	static int32_t x280 = 54141443;
	volatile uint64_t t68 = 28187LLU;

    t68 = (x277-((x278^x279)/x280));

    if (t68 != 18446743737305238226LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x281 = -1;
	int16_t x282 = -1;
	int16_t x283 = -1;
	int8_t x284 = INT8_MIN;
	int32_t t69 = 110;

    t69 = (x281-((x282^x283)/x284));

    if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x285 = INT32_MAX;
	uint8_t x286 = 14U;
	static int64_t x287 = -1LL;
	int16_t x288 = INT16_MIN;
	int64_t t70 = -125132181882LL;

    t70 = (x285-((x286^x287)/x288));

    if (t70 != 2147483647LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static int16_t x289 = INT16_MIN;
	uint8_t x291 = UINT8_MAX;
	uint64_t x292 = 237LLU;
	volatile uint64_t t71 = 575LLU;

    t71 = (x289-((x290^x291)/x292));

    if (t71 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x293 = -1;
	static uint64_t x294 = 6034671LLU;
	static volatile uint32_t x295 = 183983805U;
	uint32_t x296 = 185960U;
	volatile uint64_t t72 = 1528979501207LLU;

    t72 = (x293-((x294^x295)/x296));

    if (t72 != 18446744073709550653LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x297 = -1;
	volatile int16_t x299 = INT16_MIN;
	uint32_t x300 = 3919003U;
	uint32_t t73 = 28U;

    t73 = (x297-((x298^x299)/x300));

    if (t73 != 4294966200U) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x301 = INT8_MAX;
	volatile uint64_t x302 = 86048324235062846LLU;
	static volatile uint64_t x303 = 4874131419300096120LLU;
	volatile int64_t x304 = -1LL;
	uint64_t t74 = 36495LLU;

    t74 = (x301-((x302^x303)/x304));

    if (t74 != 127LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x305 = INT64_MIN;
	int8_t x306 = -1;
	uint64_t x307 = UINT64_MAX;
	volatile uint64_t t75 = 864308LLU;

    t75 = (x305-((x306^x307)/x308));

    if (t75 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint16_t x309 = 151U;
	uint32_t x310 = 24556085U;
	uint8_t x311 = UINT8_MAX;
	int8_t x312 = -1;
	static uint32_t t76 = 185661U;

    t76 = (x309-((x310^x311)/x312));

    if (t76 != 151U) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x313 = UINT32_MAX;
	static int16_t x314 = -24;
	int32_t x315 = INT32_MIN;
	static int16_t x316 = -1;
	volatile uint32_t t77 = 6U;

    t77 = (x313-((x314^x315)/x316));

    if (t77 != 2147483623U) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x317 = 9456U;
	static volatile int16_t x318 = INT16_MAX;
	int8_t x319 = -8;
	volatile int64_t x320 = INT64_MIN;
	volatile int64_t t78 = -1721942651LL;

    t78 = (x317-((x318^x319)/x320));

    if (t78 != 9456LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint8_t x321 = 8U;
	int16_t x322 = INT16_MIN;
	static uint32_t x323 = 71300U;
	uint32_t t79 = 83807U;

    t79 = (x321-((x322^x323)/x324));

    if (t79 != 8U) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x325 = -1LL;
	int8_t x327 = INT8_MAX;
	int64_t x328 = INT64_MIN;
	int64_t t80 = -2110866257270814842LL;

    t80 = (x325-((x326^x327)/x328));

    if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int64_t x329 = 1938586LL;
	int16_t x330 = INT16_MAX;
	uint32_t x332 = 254463796U;
	static volatile int64_t t81 = -58650LL;

    t81 = (x329-((x330^x331)/x332));

    if (t81 != 1938586LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x333 = UINT16_MAX;
	int64_t x334 = INT64_MIN;
	static volatile uint16_t x335 = 238U;
	int8_t x336 = -3;
	volatile int64_t t82 = -421574181627710589LL;

    t82 = (x333-((x334^x335)/x336));

    if (t82 != -3074457345618192988LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x337 = 642;
	volatile uint16_t x338 = 6627U;
	int64_t x339 = -1767675463LL;
	int16_t x340 = 54;
	volatile int64_t t83 = -20111664656322LL;

    t83 = (x337-((x338^x339)/x340));

    if (t83 != 32735341LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x341 = -41309739;
	volatile int64_t x342 = INT64_MIN;
	int16_t x343 = INT16_MAX;
	volatile int64_t t84 = -516697998LL;

    t84 = (x341-((x342^x343)/x344));

    if (t84 != 3074457345576937941LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint16_t x345 = 153U;
	uint64_t x348 = UINT64_MAX;
	uint64_t t85 = 77304LLU;

    t85 = (x345-((x346^x347)/x348));

    if (t85 != 153LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile uint16_t x349 = 2U;
	volatile int64_t x350 = -1LL;
	int32_t x351 = INT32_MAX;
	int64_t t86 = -62770800214LL;

    t86 = (x349-((x350^x351)/x352));

    if (t86 != -16777214LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x353 = 1;
	volatile int16_t x354 = -1;
	int8_t x355 = -32;
	uint32_t x356 = 327U;

    t87 = (x353-((x354^x355)/x356));

    if (t87 != 1U) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x358 = 1017U;
	int64_t x359 = INT64_MIN;
	int64_t t88 = -8840273LL;

    t88 = (x357-((x358^x359)/x360));

    if (t88 != -9223372036854774536LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x361 = 17U;
	uint16_t x362 = UINT16_MAX;
	uint16_t x363 = UINT16_MAX;
	volatile int32_t t89 = 1;

    t89 = (x361-((x362^x363)/x364));

    if (t89 != 17) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile uint32_t x366 = 1032626065U;
	static int8_t x367 = 6;
	static uint32_t x368 = 12982167U;

    t90 = (x365-((x366^x367)/x368));

    if (t90 != 176U) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x369 = 3259;
	int16_t x372 = INT16_MIN;
	volatile uint64_t t91 = 6906LLU;

    t91 = (x369-((x370^x371)/x372));

    if (t91 != 3259LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x373 = INT64_MIN;
	volatile int16_t x374 = -596;
	static int16_t x375 = -12;
	int32_t x376 = 1525;
	volatile int64_t t92 = INT64_MIN;

    t92 = (x373-((x374^x375)/x376));

    if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x377 = -1;
	static volatile int64_t x378 = INT64_MIN;
	volatile uint64_t x379 = 35464631864LLU;
	static int8_t x380 = -1;
	volatile uint64_t t93 = UINT64_MAX;

    t93 = (x377-((x378^x379)/x380));

    if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x381 = UINT32_MAX;
	uint8_t x382 = UINT8_MAX;
	int8_t x383 = 0;

    t94 = (x381-((x382^x383)/x384));

    if (t94 != 4294967295LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x385 = INT16_MIN;
	uint16_t x386 = 16306U;
	int8_t x387 = INT8_MIN;
	static int8_t x388 = INT8_MAX;
	volatile int32_t t95 = 6080365;

    t95 = (x385-((x386^x387)/x388));

    if (t95 != -32640) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x389 = INT32_MIN;
	int16_t x390 = INT16_MAX;
	int32_t x391 = INT32_MIN;
	static int16_t x392 = INT16_MAX;
	static int32_t t96 = -294363510;

    t96 = (x389-((x390^x391)/x392));

    if (t96 != -2147418111) { NG(); } else { ; }
	
}

void f97(void) {
    	static int64_t x393 = 309209LL;
	uint64_t x394 = 144823780530860LLU;
	int8_t x395 = INT8_MIN;
	volatile uint32_t x396 = 53U;
	uint64_t t97 = 112913718240LLU;

    t97 = (x393-((x394^x395)/x396));

    if (t97 != 18098695031258369869LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x397 = -2065460484028011281LL;
	volatile int64_t x399 = 50669833LL;
	volatile int16_t x400 = 18;
	volatile int64_t t98 = -19829175447LL;

    t98 = (x397-((x398^x399)/x400));

    if (t98 != -2065460484030826271LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x401 = 1536214514037LL;
	static uint64_t x403 = 33784843625LLU;
	int32_t x404 = INT32_MAX;
	volatile uint64_t t99 = 22275004374361249LLU;

    t99 = (x401-((x402^x403)/x404));

    if (t99 != 1527624579457LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile uint16_t x405 = UINT16_MAX;
	int32_t x406 = INT32_MIN;
	static uint32_t x407 = 142578492U;
	static int32_t x408 = INT32_MAX;
	volatile uint32_t t100 = 720042405U;

    t100 = (x405-((x406^x407)/x408));

    if (t100 != 65534U) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x409 = INT8_MIN;
	static int64_t x410 = INT64_MAX;
	uint64_t x411 = 48603601LLU;
	uint64_t t101 = 157168LLU;

    t101 = (x409-((x410^x411)/x412));

    if (t101 != 18446744073698902172LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x413 = 8406678482204LLU;
	int16_t x414 = -358;
	uint32_t x415 = UINT32_MAX;
	volatile uint64_t t102 = 2649140507153LLU;

    t102 = (x413-((x414^x415)/x416));

    if (t102 != 8406678482204LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x417 = INT32_MIN;
	static volatile int8_t x418 = -6;
	volatile int16_t x420 = 1;
	int32_t t103 = 3;

    t103 = (x417-((x418^x419)/x420));

    if (t103 != -2147483397) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x421 = INT32_MAX;
	int64_t x422 = INT64_MIN;
	int32_t x423 = INT32_MIN;
	int32_t x424 = INT32_MIN;

    t104 = (x421-((x422^x423)/x424));

    if (t104 != 6442450942LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x426 = INT32_MAX;
	int64_t x428 = -1LL;
	volatile int64_t t105 = 53893834612242309LL;

    t105 = (x425-((x426^x427)/x428));

    if (t105 != -9223372034707324928LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x429 = -1;
	int16_t x430 = 92;
	int32_t x432 = INT32_MIN;
	static volatile int32_t t106 = -5920;

    t106 = (x429-((x430^x431)/x432));

    if (t106 != -1) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x433 = -223;
	int64_t x434 = -1LL;
	volatile uint16_t x435 = UINT16_MAX;
	volatile int64_t t107 = 55571071369LL;

    t107 = (x433-((x434^x435)/x436));

    if (t107 != -223LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x437 = INT32_MIN;
	volatile int64_t x438 = INT64_MIN;
	uint8_t x439 = 71U;
	int16_t x440 = INT16_MIN;
	volatile int64_t t108 = 9055LL;

    t108 = (x437-((x438^x439)/x440));

    if (t108 != -281477124194303LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x441 = INT16_MIN;
	static int64_t x443 = -1523LL;
	uint32_t x444 = 2884738U;

    t109 = (x441-((x442^x443)/x444));

    if (t109 != -32768LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x446 = -1;
	static volatile int8_t x448 = 9;
	uint32_t t110 = 22283297U;

    t110 = (x445-((x446^x447)/x448));

    if (t110 != 3817748768U) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x449 = 48;
	uint64_t x451 = UINT64_MAX;
	volatile int8_t x452 = INT8_MIN;
	volatile uint64_t t111 = 1061111575845LLU;

    t111 = (x449-((x450^x451)/x452));

    if (t111 != 48LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x453 = -1;
	volatile int64_t x454 = INT64_MAX;
	static int64_t x455 = 158664LL;

    t112 = (x453-((x454^x455)/x456));

    if (t112 != -140739635871743LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x461 = -13;
	int32_t x462 = INT32_MAX;
	volatile int16_t x463 = -1;
	int32_t x464 = INT32_MAX;
	volatile int32_t t113 = -5549683;

    t113 = (x461-((x462^x463)/x464));

    if (t113 != -12) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x465 = UINT8_MAX;
	uint32_t x466 = 259386580U;
	static int32_t x467 = INT32_MIN;
	int64_t x468 = -1LL;
	volatile int64_t t114 = 0LL;

    t114 = (x465-((x466^x467)/x468));

    if (t114 != 2406870483LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile uint16_t x471 = 25U;
	int32_t x472 = INT32_MIN;
	volatile int32_t t115 = 33894;

    t115 = (x469-((x470^x471)/x472));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x473 = 15U;
	static volatile int16_t x474 = 2;
	int64_t x475 = -4627277478850484LL;
	int64_t t116 = 16LL;

    t116 = (x473-((x474^x475)/x476));

    if (t116 != 70607728386LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x477 = -6;
	int64_t x480 = -1LL;
	int64_t t117 = 16349LL;

    t117 = (x477-((x478^x479)/x480));

    if (t117 != 814860545295LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile uint64_t x481 = 92150652288539LLU;
	int16_t x482 = -1874;
	int64_t x483 = INT64_MIN;
	uint8_t x484 = 48U;

    t118 = (x481-((x482^x483)/x484));

    if (t118 != 18254682640260699032LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint16_t x485 = 82U;
	uint64_t x486 = 45311567590899568LLU;
	uint8_t x487 = 12U;
	uint8_t x488 = 2U;
	volatile uint64_t t119 = 1338287371522717LLU;

    t119 = (x485-((x486^x487)/x488));

    if (t119 != 18424088289914101908LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x489 = 7U;
	int64_t x490 = INT64_MAX;
	static uint8_t x491 = UINT8_MAX;
	int64_t x492 = INT64_MIN;
	int64_t t120 = 194925367LL;

    t120 = (x489-((x490^x491)/x492));

    if (t120 != 7LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint32_t x493 = 7U;
	int8_t x494 = INT8_MIN;
	int8_t x495 = INT8_MAX;
	int16_t x496 = INT16_MIN;
	uint32_t t121 = 3580741U;

    t121 = (x493-((x494^x495)/x496));

    if (t121 != 7U) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x499 = 12681;
	uint8_t x500 = 2U;
	static uint64_t t122 = 5812243874592194LLU;

    t122 = (x497-((x498^x499)/x500));

    if (t122 != 11259LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x505 = -1;
	int8_t x507 = INT8_MAX;
	int8_t x508 = INT8_MIN;
	int32_t t123 = 1422621;

    t123 = (x505-((x506^x507)/x508));

    if (t123 != -16777216) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x509 = INT32_MAX;
	static int8_t x510 = 2;

    t124 = (x509-((x510^x511)/x512));

    if (t124 != -281472829227008LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x513 = -1743;
	static volatile int16_t x515 = -10;
	int8_t x516 = 16;
	int64_t t125 = -147725338LL;

    t125 = (x513-((x514^x515)/x516));

    if (t125 != -25896399639570152LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x517 = 233523896415093047LL;
	uint32_t x518 = UINT32_MAX;
	int8_t x519 = INT8_MAX;
	static int32_t x520 = INT32_MIN;
	int64_t t126 = 27357219416742LL;

    t126 = (x517-((x518^x519)/x520));

    if (t126 != 233523896415093046LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x521 = INT16_MIN;
	volatile int32_t x522 = INT32_MIN;
	int64_t x523 = -467221487646LL;
	volatile int64_t t127 = -2995LL;

    t127 = (x521-((x522^x523)/x524));

    if (t127 != -32985LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x527 = -930542692;
	int8_t x528 = 51;
	volatile uint64_t t128 = 12949380LLU;

    t128 = (x525-((x526^x527)/x528));

    if (t128 != 18085043995243370047LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x530 = 11319658LLU;
	int32_t x531 = INT32_MIN;
	static int64_t x532 = -1LL;
	volatile uint64_t t129 = UINT64_MAX;

    t129 = (x529-((x530^x531)/x532));

    if (t129 != UINT64_MAX) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x533 = 553670465376065011LL;
	static int16_t x534 = INT16_MIN;
	uint16_t x535 = 17U;
	uint64_t x536 = UINT64_MAX;
	uint64_t t130 = 53LLU;

    t130 = (x533-((x534^x535)/x536));

    if (t130 != 553670465376065011LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x537 = INT64_MIN;
	int32_t x538 = INT32_MIN;
	volatile int64_t x539 = -1LL;
	int16_t x540 = INT16_MIN;
	static int64_t t131 = -3365116605980354341LL;

    t131 = (x537-((x538^x539)/x540));

    if (t131 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x541 = UINT8_MAX;
	uint8_t x542 = 111U;
	uint8_t x543 = UINT8_MAX;
	int32_t t132 = 1414821;

    t132 = (x541-((x542^x543)/x544));

    if (t132 != 255) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int64_t x546 = -3LL;
	int8_t x547 = INT8_MAX;
	static int32_t x548 = 54;
	volatile int64_t t133 = 465030365626181910LL;

    t133 = (x545-((x546^x547)/x548));

    if (t133 != -126LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x549 = INT8_MAX;
	static int16_t x550 = INT16_MIN;
	int16_t x551 = INT16_MIN;
	int64_t t134 = -4818613108935LL;

    t134 = (x549-((x550^x551)/x552));

    if (t134 != 127LL) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint64_t x553 = 1229237379957703631LLU;
	int8_t x555 = -1;
	uint16_t x556 = 28449U;

    t135 = (x553-((x554^x555)/x556));

    if (t135 != 1229237379957703630LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile uint32_t x557 = 6372331U;
	volatile uint64_t x558 = UINT64_MAX;
	uint8_t x560 = UINT8_MAX;
	uint64_t t136 = 2LLU;

    t136 = (x557-((x558^x559)/x560));

    if (t136 != 18374403900877847299LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x561 = INT64_MAX;
	int32_t x562 = INT32_MIN;
	static uint64_t x563 = 489LLU;
	uint32_t x564 = 19417663U;
	static uint64_t t137 = 40415445003541LLU;

    t137 = (x561-((x562^x563)/x564));

    if (t137 != 9223371086856618379LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x565 = UINT16_MAX;
	uint8_t x566 = UINT8_MAX;
	volatile uint16_t x567 = 24580U;
	int64_t x568 = 51648198318112420LL;
	static volatile int64_t t138 = 3205168681702408LL;

    t138 = (x565-((x566^x567)/x568));

    if (t138 != 65535LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x569 = 2863U;
	static int32_t x570 = 3550;
	volatile int64_t x572 = -646133104584LL;
	volatile int64_t t139 = 127111888727356LL;

    t139 = (x569-((x570^x571)/x572));

    if (t139 != 2863LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x573 = UINT32_MAX;
	static uint32_t x574 = UINT32_MAX;
	int32_t x575 = INT32_MIN;
	uint32_t t140 = UINT32_MAX;

    t140 = (x573-((x574^x575)/x576));

    if (t140 != UINT32_MAX) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint16_t x577 = UINT16_MAX;
	int32_t x578 = INT32_MAX;
	uint16_t x579 = 1U;
	static int8_t x580 = INT8_MAX;
	volatile int32_t t141 = -1867;

    t141 = (x577-((x578^x579)/x580));

    if (t141 != -16843785) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x581 = INT16_MIN;
	int64_t x582 = -7318728LL;
	static int8_t x583 = INT8_MIN;
	int32_t x584 = INT32_MIN;
	volatile int64_t t142 = 328302283679370LL;

    t142 = (x581-((x582^x583)/x584));

    if (t142 != -32768LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x585 = 12U;
	static int16_t x587 = INT16_MIN;
	volatile uint32_t t143 = 168396U;

    t143 = (x585-((x586^x587)/x588));

    if (t143 != 12U) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x590 = -6;
	int32_t x592 = INT32_MIN;
	static int32_t t144 = 31;

    t144 = (x589-((x590^x591)/x592));

    if (t144 != -1) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x594 = INT8_MIN;
	int64_t x596 = INT64_MIN;

    t145 = (x593-((x594^x595)/x596));

    if (t145 != -2147483648LL) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint32_t x597 = UINT32_MAX;
	int16_t x598 = -1;
	int64_t t146 = 0LL;

    t146 = (x597-((x598^x599)/x600));

    if (t146 != -4611686014132420608LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x602 = 6356572LLU;
	volatile int16_t x603 = -1;
	int32_t x604 = INT32_MIN;
	uint64_t t147 = 517878934LLU;

    t147 = (x601-((x602^x603)/x604));

    if (t147 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x605 = -1LL;
	static volatile int16_t x606 = INT16_MAX;
	static int64_t x607 = INT64_MIN;
	int64_t t148 = -7516795122534LL;

    t148 = (x605-((x606^x607)/x608));

    if (t148 != -1786090634557464LL) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint8_t x609 = UINT8_MAX;
	volatile uint64_t t149 = 1636840186140LLU;

    t149 = (x609-((x610^x611)/x612));

    if (t149 != 254LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint64_t x614 = UINT64_MAX;
	int32_t x616 = 395276;

    t150 = (x613-((x614^x615)/x616));

    if (t150 != 18446697405700698330LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x617 = -7;
	static int16_t x618 = 6078;
	volatile int64_t x619 = INT64_MIN;
	uint8_t x620 = 7U;
	volatile int64_t t151 = 951425176074485LL;

    t151 = (x617-((x618^x619)/x620));

    if (t151 != 1317624576693538525LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x621 = INT64_MIN;
	int16_t x622 = INT16_MAX;
	int8_t x623 = INT8_MAX;

    t152 = (x621-((x622^x623)/x624));

    if (t152 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x625 = INT8_MAX;
	volatile int64_t x626 = -1LL;
	int8_t x627 = INT8_MIN;
	uint16_t x628 = 9389U;
	volatile int64_t t153 = 3094LL;

    t153 = (x625-((x626^x627)/x628));

    if (t153 != 127LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x629 = INT32_MAX;
	volatile int64_t x630 = 37902323LL;
	int64_t x631 = INT64_MIN;
	static uint8_t x632 = 13U;
	volatile int64_t t154 = 110264671818LL;

    t154 = (x629-((x630^x631)/x632));

    if (t154 != 709490158825704684LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x633 = -1;
	int16_t x634 = 4706;
	int32_t x635 = INT32_MAX;
	uint32_t x636 = 2U;
	volatile uint32_t t155 = 782U;

    t155 = (x633-((x634^x635)/x636));

    if (t155 != 3221227825U) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x637 = -511327669;
	static int32_t x638 = -2;
	static int64_t x639 = INT64_MAX;
	int32_t x640 = -139342;
	static int64_t t156 = 6143394LL;

    t156 = (x637-((x638^x639)/x640));

    if (t156 != -66192844126500LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x641 = INT8_MAX;
	int8_t x643 = INT8_MAX;
	uint16_t x644 = 68U;
	volatile int64_t t157 = -16989994932LL;

    t157 = (x641-((x642^x643)/x644));

    if (t157 != -311LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x647 = INT32_MIN;
	static uint64_t x648 = 2982383544420003539LLU;

    t158 = (x645-((x646^x647)/x648));

    if (t158 != 18446744073709551317LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x649 = -1;
	volatile int16_t x651 = 1872;
	static int32_t x652 = INT32_MIN;
	int32_t t159 = -25411356;

    t159 = (x649-((x650^x651)/x652));

    if (t159 != -1) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x654 = 17;
	int16_t x655 = INT16_MIN;
	int32_t x656 = -1038262819;
	int32_t t160 = INT32_MAX;

    t160 = (x653-((x654^x655)/x656));

    if (t160 != INT32_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x657 = -1;
	uint32_t x658 = 2846792U;
	static volatile uint64_t x659 = 31738490LLU;
	static volatile int32_t x660 = INT32_MIN;
	uint64_t t161 = UINT64_MAX;

    t161 = (x657-((x658^x659)/x660));

    if (t161 != UINT64_MAX) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x669 = 46126761386LLU;
	int16_t x671 = -1;
	volatile int16_t x672 = 42;
	volatile uint64_t t162 = 787414113337LLU;

    t162 = (x669-((x670^x671)/x672));

    if (t162 != 46126761386LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	static int8_t x673 = INT8_MAX;
	uint16_t x675 = 14U;
	static volatile int64_t x676 = 50950132LL;
	int64_t t163 = -6LL;

    t163 = (x673-((x674^x675)/x676));

    if (t163 != -181027441310LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x682 = 13559U;
	int64_t x684 = INT64_MAX;
	volatile int64_t t164 = INT64_MAX;

    t164 = (x681-((x682^x683)/x684));

    if (t164 != INT64_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x686 = -27;
	int16_t x687 = INT16_MIN;
	int32_t x688 = 262197133;
	static int32_t t165 = INT32_MIN;

    t165 = (x685-((x686^x687)/x688));

    if (t165 != INT32_MIN) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x690 = UINT8_MAX;
	int16_t x691 = INT16_MAX;
	int16_t x692 = INT16_MIN;
	int32_t t166 = 77;

    t166 = (x689-((x690^x691)/x692));

    if (t166 != 29) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x694 = -1;
	static int32_t x695 = -1;
	int16_t x696 = -1;
	volatile int32_t t167 = 98809032;

    t167 = (x693-((x694^x695)/x696));

    if (t167 != -1) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x697 = INT8_MIN;
	static int8_t x698 = 2;
	uint32_t x699 = UINT32_MAX;
	int8_t x700 = 52;
	volatile uint32_t t168 = 1U;

    t168 = (x697-((x698^x699)/x700));

    if (t168 != 4212371644U) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int32_t x701 = -98974;
	int8_t x702 = -1;
	int8_t x703 = -1;
	uint64_t x704 = UINT64_MAX;
	volatile uint64_t t169 = 28343962419855948LLU;

    t169 = (x701-((x702^x703)/x704));

    if (t169 != 18446744073709452642LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile uint32_t x710 = 370985990U;
	uint32_t x711 = UINT32_MAX;
	volatile int8_t x712 = INT8_MIN;
	volatile int64_t t170 = 78LL;

    t170 = (x709-((x710^x711)/x712));

    if (t170 != -82070776348109856LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x713 = 1U;
	int32_t x714 = INT32_MAX;
	int32_t x715 = INT32_MAX;
	int32_t t171 = -639613397;

    t171 = (x713-((x714^x715)/x716));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x718 = 14U;
	uint32_t x719 = UINT32_MAX;
	int32_t x720 = INT32_MIN;
	static uint32_t t172 = 37447U;

    t172 = (x717-((x718^x719)/x720));

    if (t172 != 2147483647U) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x721 = INT16_MIN;
	int64_t x722 = -79LL;
	uint64_t x723 = UINT64_MAX;
	int32_t x724 = INT32_MAX;
	uint64_t t173 = 64755963357378LLU;

    t173 = (x721-((x722^x723)/x724));

    if (t173 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint16_t x725 = UINT16_MAX;
	int8_t x726 = 3;
	volatile int32_t x727 = INT32_MIN;
	int16_t x728 = INT16_MAX;

    t174 = (x725-((x726^x727)/x728));

    if (t174 != 131072) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x730 = -5;
	static uint16_t x731 = UINT16_MAX;
	int16_t x732 = INT16_MIN;

    t175 = (x729-((x730^x731)/x732));

    if (t175 != 32766) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x734 = 42532770;
	uint32_t x735 = 4839U;

    t176 = (x733-((x734^x735)/x736));

    if (t176 != 18U) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint16_t x737 = 5U;
	uint32_t x738 = UINT32_MAX;
	int64_t x739 = INT64_MIN;
	int32_t x740 = INT32_MIN;
	volatile int64_t t177 = -118434686951807LL;

    t177 = (x737-((x738^x739)/x740));

    if (t177 != -4294967289LL) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint32_t x745 = UINT32_MAX;
	volatile uint16_t x746 = UINT16_MAX;
	static uint16_t x747 = 2U;
	uint32_t t178 = 10422427U;

    t178 = (x745-((x746^x747)/x748));

    if (t178 != 4294967294U) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x749 = -1LL;
	int64_t x750 = -1774760213831LL;
	static uint32_t x752 = UINT32_MAX;
	volatile int64_t t179 = 228691335439LL;

    t179 = (x749-((x750^x751)/x752));

    if (t179 != -414LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x753 = INT16_MIN;
	volatile uint16_t x754 = 93U;
	uint16_t x756 = 5U;

    t180 = (x753-((x754^x755)/x756));

    if (t180 != -32784) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint64_t x757 = 1761359638892LLU;
	static volatile int16_t x758 = 1247;
	volatile int64_t x759 = INT64_MAX;
	static int16_t x760 = INT16_MIN;
	static uint64_t t181 = 3292272LLU;

    t181 = (x757-((x758^x759)/x760));

    if (t181 != 283236336349547LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x761 = -1;
	uint8_t x762 = UINT8_MAX;
	int8_t x764 = 22;

    t182 = (x761-((x762^x763)/x764));

    if (t182 != -419244183493398889LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint16_t x765 = 151U;
	static int64_t x766 = INT64_MIN;
	volatile int8_t x767 = 11;
	int16_t x768 = INT16_MAX;
	volatile int64_t t183 = -130924684570LL;

    t183 = (x765-((x766^x767)/x768));

    if (t183 != 281483566907550LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x769 = 2U;
	volatile int8_t x770 = -1;
	volatile int32_t x771 = INT32_MIN;
	static volatile int32_t t184 = 509968739;

    t184 = (x769-((x770^x771)/x772));

    if (t184 != -5355318) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x774 = 17U;
	int16_t x775 = INT16_MAX;
	int64_t x776 = INT64_MAX;
	int64_t t185 = -150879215550237LL;

    t185 = (x773-((x774^x775)/x776));

    if (t185 != 1LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint16_t x777 = 1U;
	int8_t x778 = 1;
	static int32_t t186 = -7;

    t186 = (x777-((x778^x779)/x780));

    if (t186 != -4) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x781 = 6;
	static uint16_t x782 = 0U;
	int32_t x783 = INT32_MAX;
	int64_t x784 = 680741638085405305LL;

    t187 = (x781-((x782^x783)/x784));

    if (t187 != 6LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x786 = 19941;
	uint64_t x787 = 978050573058787939LLU;
	uint8_t x788 = UINT8_MAX;

    t188 = (x785-((x786^x787)/x788));

    if (t188 != 18442908581446964102LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile int16_t x794 = -9358;
	static volatile int32_t x796 = -3;

    t189 = (x793-((x794^x795)/x796));

    if (t189 != 3074457345618250754LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x797 = -1;
	static uint64_t x798 = 2767211233024LLU;
	uint32_t x799 = 124U;
	int64_t x800 = -746000LL;
	volatile uint64_t t190 = UINT64_MAX;

    t190 = (x797-((x798^x799)/x800));

    if (t190 != UINT64_MAX) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x801 = 76U;
	uint8_t x802 = UINT8_MAX;
	int16_t x803 = -1362;
	volatile int64_t t191 = 2LL;

    t191 = (x801-((x802^x803)/x804));

    if (t191 != -1379LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x809 = 1;
	volatile int16_t x810 = INT16_MIN;
	volatile uint8_t x811 = 0U;
	static volatile int64_t x812 = INT64_MIN;

    t192 = (x809-((x810^x811)/x812));

    if (t192 != 1LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x813 = UINT16_MAX;
	int16_t x814 = INT16_MIN;
	volatile int64_t x815 = INT64_MIN;
	int32_t x816 = INT32_MAX;
	int64_t t193 = 11776858632LL;

    t193 = (x813-((x814^x815)/x816));

    if (t193 != -4294901762LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x817 = 243764371LL;
	uint8_t x818 = 3U;
	uint32_t x819 = 63417U;
	int16_t x820 = -1;

    t194 = (x817-((x818^x819)/x820));

    if (t194 != 243764371LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x821 = INT8_MIN;
	volatile int32_t x822 = INT32_MIN;
	volatile int8_t x823 = -1;
	static int8_t x824 = -9;
	volatile int32_t t195 = -66479095;

    t195 = (x821-((x822^x823)/x824));

    if (t195 != 238609166) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x825 = UINT32_MAX;
	static int16_t x826 = INT16_MIN;
	static int16_t x828 = INT16_MAX;
	volatile int64_t t196 = -107061491596471LL;

    t196 = (x825-((x826^x827)/x828));

    if (t196 != 4289205868LL) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int64_t x830 = -8426814984154867LL;
	int8_t x831 = INT8_MIN;
	int16_t x832 = INT16_MAX;
	int64_t t197 = -4LL;

    t197 = (x829-((x830^x831)/x832));

    if (t197 != -257173832947LL) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x833 = INT16_MAX;
	int64_t x834 = INT64_MIN;
	volatile uint16_t x835 = UINT16_MAX;
	static uint16_t x836 = UINT16_MAX;
	static volatile int64_t t198 = -167367603640638761LL;

    t198 = (x833-((x834^x835)/x836));

    if (t198 != 140739635904510LL) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int32_t x837 = -1;
	uint8_t x838 = 0U;
	int8_t x839 = 8;
	static volatile int32_t x840 = -146217;
	static int32_t t199 = -515009;

    t199 = (x837-((x838^x839)/x840));

    if (t199 != -1) { NG(); } else { ; }
	
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

