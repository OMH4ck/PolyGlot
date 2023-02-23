
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

static int64_t x6 = -1LL;
int8_t x13 = -3;
static uint8_t x14 = UINT8_MAX;
static uint16_t x15 = 3167U;
static uint64_t x18 = 1LLU;
static int16_t x32 = INT16_MAX;
volatile uint64_t x34 = UINT64_MAX;
int16_t x41 = -1;
uint32_t x43 = UINT32_MAX;
int16_t x50 = -1;
int8_t x52 = INT8_MIN;
int16_t x57 = INT16_MIN;
static volatile int16_t x59 = INT16_MIN;
static uint32_t x62 = 1892U;
uint8_t x67 = UINT8_MAX;
int8_t x79 = 0;
int64_t t15 = -17743719102700649LL;
uint32_t x94 = 725U;
static int64_t x100 = -1LL;
int8_t x104 = -1;
int16_t x105 = -1;
int16_t x106 = 2384;
int8_t x107 = 0;
uint32_t x131 = 0U;
uint16_t x134 = UINT16_MAX;
static int32_t x135 = -1;
uint32_t x142 = 20151U;
int8_t x148 = INT8_MAX;
int32_t t27 = 0;
uint8_t x152 = UINT8_MAX;
int8_t x153 = INT8_MIN;
uint8_t x155 = UINT8_MAX;
volatile uint64_t t29 = 51923117441LLU;
uint32_t x168 = 24U;
static int64_t x173 = INT64_MIN;
int64_t x175 = -1753602354975LL;
static int16_t x176 = 15;
static int16_t x181 = INT16_MIN;
int16_t x182 = INT16_MAX;
int8_t x184 = INT8_MIN;
uint32_t x191 = UINT32_MAX;
uint16_t x192 = 53U;
volatile int64_t x193 = -1LL;
uint64_t x195 = UINT64_MAX;
int8_t x208 = 2;
static int16_t x217 = -1;
int64_t x222 = -1LL;
int8_t x254 = INT8_MIN;
uint32_t t47 = 155216661U;
static int16_t x281 = -1;
int16_t x283 = -1;
volatile int8_t x284 = -1;
int8_t x292 = INT8_MAX;
volatile uint64_t x295 = 1LLU;
int32_t x296 = INT32_MIN;
uint64_t t52 = 29LLU;
int64_t x297 = INT64_MIN;
uint32_t x299 = 7672U;
int32_t x310 = 2;
int8_t x314 = -1;
int16_t x316 = -1;
int32_t x325 = -288981953;
volatile uint64_t x326 = UINT64_MAX;
uint64_t x351 = UINT64_MAX;
volatile int32_t t64 = -10457226;
uint64_t x364 = 1LLU;
volatile uint8_t x368 = UINT8_MAX;
volatile int32_t t67 = 975136249;
uint8_t x396 = 7U;
uint8_t x407 = UINT8_MAX;
volatile uint32_t x411 = 16937U;
int32_t x425 = 165952497;
volatile uint16_t x426 = 3182U;
static volatile int8_t x435 = -43;
static volatile int32_t t72 = -205;
uint8_t x439 = 28U;
int64_t x445 = 364077203053853LL;
uint64_t x462 = 71637980031991LLU;
volatile uint64_t t78 = 25LLU;
volatile int32_t x472 = INT32_MIN;
uint32_t x475 = 42U;
int8_t x482 = INT8_MIN;
int8_t x485 = -1;
uint16_t x487 = 14U;
int64_t x488 = -1LL;
static int64_t t83 = -106409LL;
uint64_t x496 = UINT64_MAX;
volatile int8_t x517 = INT8_MIN;
static uint64_t t88 = 4376543LLU;
volatile uint64_t t89 = 710708LLU;
static volatile int32_t t90 = -13;
volatile int16_t x540 = INT16_MIN;
static uint8_t x557 = 88U;
int32_t x581 = -1;
int8_t x582 = -1;
volatile uint8_t x583 = 1U;
int32_t t100 = 361587;
static volatile int32_t x590 = 1521;
uint64_t t102 = 90LLU;
uint64_t x598 = 53232718280LLU;
int64_t x601 = -1LL;
volatile uint8_t x604 = 8U;
int8_t x619 = 1;
uint16_t x624 = 127U;
uint32_t x629 = UINT32_MAX;
static volatile int16_t x630 = -1;
int16_t x635 = -4039;
static int64_t x641 = INT64_MAX;
int16_t x650 = INT16_MIN;
volatile int32_t t110 = -403203288;
int64_t x653 = 21303727956LL;
static int8_t x660 = -1;
volatile uint64_t t112 = 4910LLU;
int16_t x662 = 195;
static int16_t x665 = 8576;
int16_t x672 = INT16_MIN;
int64_t x681 = INT64_MIN;
int8_t x691 = INT8_MIN;
static volatile int32_t t119 = -106;
volatile int64_t x695 = INT64_MIN;
volatile int8_t x701 = INT8_MIN;
int8_t x703 = -1;
static int64_t x707 = -1LL;
int8_t x709 = 1;
uint64_t x710 = 17791530174160LLU;
uint64_t t123 = 17460364837968LLU;
int64_t x717 = 1939791612619339LL;
static int8_t x719 = INT8_MAX;
int32_t x720 = 2764;
static int16_t x729 = -160;
static volatile uint8_t x731 = 26U;
static uint64_t x733 = 1145558575609007LLU;
int8_t x735 = INT8_MIN;
uint64_t t127 = 33929137239LLU;
uint32_t t128 = 250U;
uint32_t x755 = 29282U;
int8_t x768 = 0;
volatile int16_t x772 = INT16_MIN;
volatile int8_t x806 = 15;
uint64_t x810 = UINT64_MAX;
int16_t x812 = -1;
int64_t x814 = -1LL;
uint32_t t140 = 1978U;
uint64_t t144 = 1334106LLU;
uint16_t x868 = UINT16_MAX;
uint64_t t146 = 9315813147563046LLU;
volatile uint32_t x879 = 990U;
uint64_t x880 = UINT64_MAX;
volatile uint64_t t150 = 15LLU;
int64_t x890 = -1LL;
int8_t x902 = INT8_MAX;
static volatile uint32_t t153 = 1279528596U;
volatile int16_t x905 = -1;
int32_t x917 = -1;
int16_t x918 = INT16_MIN;
int32_t t155 = -1;
static volatile uint8_t x931 = UINT8_MAX;
int16_t x932 = INT16_MIN;
int32_t t156 = 28859103;
int64_t x935 = -16180939LL;
static uint16_t x963 = 105U;
uint16_t x973 = 127U;
volatile int8_t x979 = INT8_MIN;
int32_t x988 = 3726;
volatile uint32_t x999 = 5641U;
int32_t x1002 = -1;
int16_t x1009 = INT16_MAX;
volatile uint64_t t169 = 56763LLU;
uint32_t x1036 = UINT32_MAX;
int64_t x1039 = -739366LL;
int64_t x1041 = -1LL;
uint16_t x1049 = 5U;
volatile uint32_t x1050 = UINT32_MAX;
volatile uint32_t x1057 = 187U;
uint16_t x1061 = 79U;
volatile int32_t t177 = -75760;
volatile int32_t x1066 = -21121;
volatile int64_t t178 = 116422534880928LL;
int16_t x1071 = INT16_MIN;
static volatile uint16_t x1079 = 4U;
static volatile uint32_t t181 = 14U;
int16_t x1082 = INT16_MAX;
int16_t x1083 = INT16_MIN;
int16_t x1090 = INT16_MIN;
uint64_t x1093 = UINT64_MAX;
static uint32_t x1101 = 707565U;
volatile int32_t x1102 = -4;
uint32_t x1106 = 645464U;
int16_t x1111 = 14859;
uint8_t x1114 = 15U;
uint16_t x1116 = UINT16_MAX;
static uint8_t x1129 = UINT8_MAX;
int16_t x1131 = -1232;
static int32_t x1134 = -1;
uint8_t x1136 = 38U;
static int64_t t193 = -2596352447168054LL;
uint64_t x1147 = UINT64_MAX;
volatile int16_t x1148 = -57;
volatile int64_t t196 = -16491648LL;
volatile uint16_t x1159 = UINT16_MAX;
uint64_t x1162 = 14540LLU;
int16_t x1166 = INT16_MIN;


void f0(void) {
    	static volatile int16_t x5 = -1;
	static int8_t x7 = INT8_MIN;
	volatile int32_t x8 = -1;
	volatile int64_t t0 = 2775921284146LL;

    t0 = (x5^((x6-x7)*x8));

    if (t0 != 126LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x9 = INT32_MAX;
	static uint16_t x10 = 30426U;
	static int32_t x11 = -41994247;
	static int32_t x12 = -1;
	volatile int32_t t1 = 3333;

    t1 = (x9^((x10-x11)*x12));

    if (t1 != -2105458976) { NG(); } else { ; }
	
}

void f2(void) {
    	static int64_t x16 = -1LL;
	int64_t t2 = -5888405270LL;

    t2 = (x13^((x14-x15)*x16));

    if (t2 != -2915LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x17 = 21821U;
	volatile int8_t x19 = -1;
	int16_t x20 = INT16_MAX;
	volatile uint64_t t3 = 319LLU;

    t3 = (x17^((x18-x19)*x20));

    if (t3 != 43715LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int64_t x29 = INT64_MIN;
	volatile int64_t x30 = -1LL;
	int32_t x31 = INT32_MIN;
	volatile int64_t t4 = -22430LL;

    t4 = (x29^((x30-x31)*x32));

    if (t4 != -9223301670258114559LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x33 = INT8_MIN;
	int32_t x35 = -7;
	static volatile int32_t x36 = INT32_MIN;
	uint64_t t5 = 1658177784861051414LLU;

    t5 = (x33^((x34-x35)*x36));

    if (t5 != 12884901760LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x42 = UINT64_MAX;
	volatile int64_t x44 = INT64_MAX;
	volatile uint64_t t6 = 12907204072291579LLU;

    t6 = (x41^((x42-x43)*x44));

    if (t6 != 18446744069414584319LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x45 = INT64_MIN;
	static int64_t x46 = -1LL;
	int32_t x47 = -1;
	int64_t x48 = INT64_MAX;
	volatile int64_t t7 = INT64_MIN;

    t7 = (x45^((x46-x47)*x48));

    if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint8_t x49 = 5U;
	int16_t x51 = INT16_MIN;
	int32_t t8 = 2865046;

    t8 = (x49^((x50-x51)*x52));

    if (t8 != -4194171) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x53 = -20;
	int8_t x54 = -2;
	uint64_t x55 = 6403175LLU;
	uint64_t x56 = 2983LLU;
	volatile uint64_t t9 = 570769012663LLU;

    t9 = (x53^((x54-x55)*x56));

    if (t9 != 19100676973LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x58 = 12;
	static int32_t x60 = -36573;
	volatile int32_t t10 = -16712;

    t10 = (x57^((x58-x59)*x60));

    if (t10 != 1198869924) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x61 = -9;
	int64_t x63 = INT64_MAX;
	uint8_t x64 = 0U;
	volatile int64_t t11 = -379LL;

    t11 = (x61^((x62-x63)*x64));

    if (t11 != -9LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x65 = 27;
	int8_t x66 = INT8_MAX;
	int32_t x68 = -1;
	static volatile int32_t t12 = 331132330;

    t12 = (x65^((x66-x67)*x68));

    if (t12 != 155) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x69 = -3;
	volatile uint32_t x70 = 2471323U;
	uint8_t x71 = 16U;
	uint16_t x72 = 13U;
	uint32_t t13 = 61U;

    t13 = (x69^((x70-x71)*x72));

    if (t13 != 4262840306U) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x77 = 0U;
	int8_t x78 = -1;
	uint8_t x80 = 1U;
	volatile int32_t t14 = -998;

    t14 = (x77^((x78-x79)*x80));

    if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x81 = -1;
	int64_t x82 = 202386705151528791LL;
	int64_t x83 = -3424245544333LL;
	volatile int64_t x84 = 34LL;

    t15 = (x81^((x82-x83)*x84));

    if (t15 != -6881264399500486217LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x89 = 972;
	uint16_t x90 = UINT16_MAX;
	int64_t x91 = -156872767LL;
	int8_t x92 = 0;
	int64_t t16 = -24770214LL;

    t16 = (x89^((x90-x91)*x92));

    if (t16 != 972LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x93 = -1LL;
	int16_t x95 = INT16_MIN;
	static uint16_t x96 = UINT16_MAX;
	volatile int64_t t17 = 3086LL;

    t17 = (x93^((x94-x95)*x96));

    if (t17 != -2194963756LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x97 = INT32_MIN;
	uint64_t x98 = 6491LLU;
	int32_t x99 = INT32_MIN;
	volatile uint64_t t18 = 53142484630512962LLU;

    t18 = (x97^((x98-x99)*x100));

    if (t18 != 4294960805LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x101 = INT32_MIN;
	uint16_t x102 = 1313U;
	uint8_t x103 = 0U;
	volatile int32_t t19 = 12599;

    t19 = (x101^((x102-x103)*x104));

    if (t19 != 2147482335) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x108 = -1;
	int32_t t20 = -24251;

    t20 = (x105^((x106-x107)*x108));

    if (t20 != 2383) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x113 = INT8_MIN;
	volatile int8_t x114 = INT8_MAX;
	int8_t x115 = INT8_MAX;
	static uint32_t x116 = UINT32_MAX;
	uint32_t t21 = 509088U;

    t21 = (x113^((x114-x115)*x116));

    if (t21 != 4294967168U) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x125 = INT64_MIN;
	uint8_t x126 = 10U;
	static int8_t x127 = INT8_MAX;
	uint8_t x128 = 34U;
	volatile int64_t t22 = -55054371432505LL;

    t22 = (x125^((x126-x127)*x128));

    if (t22 != 9223372036854771830LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int64_t x129 = -1LL;
	int32_t x130 = 22;
	int32_t x132 = INT32_MAX;
	volatile int64_t t23 = -2010626351LL;

    t23 = (x129^((x130-x131)*x132));

    if (t23 != -4294967275LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int64_t x133 = -1LL;
	int8_t x136 = INT8_MAX;
	int64_t t24 = -313089533956089095LL;

    t24 = (x133^((x134-x135)*x136));

    if (t24 != -8323073LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint16_t x137 = UINT16_MAX;
	uint64_t x138 = 84296630LLU;
	int64_t x139 = INT64_MIN;
	uint8_t x140 = 46U;
	volatile uint64_t t25 = 12704LLU;

    t25 = (x137^((x138-x139)*x140));

    if (t25 != 3877688651LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x141 = 15717U;
	int8_t x143 = INT8_MIN;
	static volatile uint16_t x144 = 315U;
	volatile uint32_t t26 = 12U;

    t26 = (x141^((x142-x143)*x144));

    if (t26 != 6374856U) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x145 = -1;
	int8_t x146 = INT8_MAX;
	volatile int16_t x147 = 1;

    t27 = (x145^((x146-x147)*x148));

    if (t27 != -16003) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x149 = INT32_MAX;
	int32_t x150 = 3771415;
	volatile uint16_t x151 = UINT16_MAX;
	volatile int32_t t28 = 256010706;

    t28 = (x149^((x150-x151)*x152));

    if (t28 != 1202484247) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x154 = INT8_MIN;
	uint64_t x156 = UINT64_MAX;

    t29 = (x153^((x154-x155)*x156));

    if (t29 != 18446744073709551359LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x157 = INT64_MAX;
	static uint64_t x158 = UINT64_MAX;
	uint16_t x159 = 2034U;
	int64_t x160 = INT64_MIN;
	uint64_t t30 = UINT64_MAX;

    t30 = (x157^((x158-x159)*x160));

    if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x161 = 184879307458139652LLU;
	static int8_t x162 = INT8_MIN;
	uint64_t x163 = 998LLU;
	int64_t x164 = INT64_MIN;
	uint64_t t31 = 393779435893593LLU;

    t31 = (x161^((x162-x163)*x164));

    if (t31 != 184879307458139652LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x165 = UINT16_MAX;
	volatile int8_t x166 = -1;
	int32_t x167 = INT32_MIN;
	uint32_t t32 = 24U;

    t32 = (x165^((x166-x167)*x168));

    if (t32 != 4294901783U) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x174 = 100318406030LLU;
	uint64_t t33 = 1702653625LLU;

    t33 = (x173^((x174-x175)*x176));

    if (t33 != 9223399845666190883LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x183 = INT16_MIN;
	volatile int32_t t34 = -1;

    t34 = (x181^((x182-x183)*x184));

    if (t34 != 8355968) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x185 = 6U;
	static int64_t x186 = 0LL;
	static uint8_t x187 = UINT8_MAX;
	uint16_t x188 = UINT16_MAX;
	int64_t t35 = 1944166LL;

    t35 = (x185^((x186-x187)*x188));

    if (t35 != -16711431LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x189 = -1;
	static int8_t x190 = -1;
	volatile uint32_t t36 = UINT32_MAX;

    t36 = (x189^((x190-x191)*x192));

    if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x194 = INT64_MAX;
	volatile uint64_t x196 = 79614105613949LLU;
	static uint64_t t37 = 200665481433316LLU;

    t37 = (x193^((x194-x195)*x196));

    if (t37 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint16_t x197 = 36U;
	uint8_t x198 = UINT8_MAX;
	volatile uint8_t x199 = UINT8_MAX;
	static volatile int64_t x200 = INT64_MAX;
	int64_t t38 = -1903LL;

    t38 = (x197^((x198-x199)*x200));

    if (t38 != 36LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x205 = INT16_MIN;
	volatile int16_t x206 = 681;
	int64_t x207 = -2LL;
	volatile int64_t t39 = 0LL;

    t39 = (x205^((x206-x207)*x208));

    if (t39 != -31402LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x209 = 162;
	static uint8_t x210 = UINT8_MAX;
	uint8_t x211 = UINT8_MAX;
	static int16_t x212 = INT16_MAX;
	int32_t t40 = 11810018;

    t40 = (x209^((x210-x211)*x212));

    if (t40 != 162) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x218 = INT16_MIN;
	volatile int16_t x219 = INT16_MAX;
	uint32_t x220 = 130U;
	volatile uint32_t t41 = 117694850U;

    t41 = (x217^((x218-x219)*x220));

    if (t41 != 8519549U) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x221 = INT16_MIN;
	static int32_t x223 = -20066394;
	uint8_t x224 = 0U;
	int64_t t42 = 1011042065997252LL;

    t42 = (x221^((x222-x223)*x224));

    if (t42 != -32768LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint8_t x225 = 1U;
	int8_t x226 = -1;
	int64_t x227 = INT64_MIN;
	uint64_t x228 = UINT64_MAX;
	static volatile uint64_t t43 = 642917126630839696LLU;

    t43 = (x225^((x226-x227)*x228));

    if (t43 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x245 = 87;
	volatile uint8_t x246 = 14U;
	static uint32_t x247 = UINT32_MAX;
	int16_t x248 = -1;
	static uint32_t t44 = 7821U;

    t44 = (x245^((x246-x247)*x248));

    if (t44 != 4294967206U) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x253 = 4U;
	static int8_t x255 = INT8_MIN;
	int16_t x256 = INT16_MIN;
	volatile int32_t t45 = 1133;

    t45 = (x253^((x254-x255)*x256));

    if (t45 != 4) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x257 = INT8_MIN;
	uint8_t x258 = 89U;
	uint8_t x259 = 67U;
	volatile int8_t x260 = -1;
	volatile int32_t t46 = -296944;

    t46 = (x257^((x258-x259)*x260));

    if (t46 != 106) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x265 = 52351;
	static uint32_t x266 = 340912U;
	static int8_t x267 = -29;
	volatile int32_t x268 = INT32_MIN;

    t47 = (x265^((x266-x267)*x268));

    if (t47 != 2147535999U) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x269 = INT8_MAX;
	int8_t x270 = -1;
	int64_t x271 = -1LL;
	volatile int8_t x272 = INT8_MAX;
	static int64_t t48 = 1128376461LL;

    t48 = (x269^((x270-x271)*x272));

    if (t48 != 127LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x273 = 50424U;
	int64_t x274 = INT64_MAX;
	int32_t x275 = 3;
	volatile int64_t x276 = -1LL;
	static int64_t t49 = 37884LL;

    t49 = (x273^((x274-x275)*x276));

    if (t49 != -9223372036854725380LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint16_t x282 = 53U;
	volatile int32_t t50 = 500;

    t50 = (x281^((x282-x283)*x284));

    if (t50 != 53) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x289 = INT16_MIN;
	int64_t x290 = 3668596524825LL;
	int16_t x291 = INT16_MIN;
	volatile int64_t t51 = -476066160281375236LL;

    t51 = (x289^((x290-x291)*x292));

    if (t51 != -465911762844313LL) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int64_t x293 = 3LL;
	uint16_t x294 = 1U;

    t52 = (x293^((x294-x295)*x296));

    if (t52 != 3LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x298 = -10054672LL;
	static volatile int16_t x300 = INT16_MAX;
	volatile int64_t t53 = -363830694785LL;

    t53 = (x297^((x298-x299)*x300));

    if (t53 != 9223371707141949960LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x301 = 30;
	int16_t x302 = 0;
	static int16_t x303 = 1;
	static int8_t x304 = -1;
	int32_t t54 = -11546274;

    t54 = (x301^((x302-x303)*x304));

    if (t54 != 31) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x305 = -1;
	uint64_t x306 = 56058273673059LLU;
	uint32_t x307 = 8409751U;
	uint32_t x308 = 14793U;
	static volatile uint64_t t55 = 25LLU;

    t55 = (x305^((x306-x307)*x308));

    if (t55 != 17617474155669436371LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x309 = INT8_MAX;
	volatile int8_t x311 = 1;
	int16_t x312 = 6;
	int32_t t56 = -17232;

    t56 = (x309^((x310-x311)*x312));

    if (t56 != 121) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x313 = INT64_MAX;
	static int8_t x315 = INT8_MIN;
	volatile int64_t t57 = -19478935140287992LL;

    t57 = (x313^((x314-x315)*x316));

    if (t57 != -9223372036854775682LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x317 = 637U;
	int64_t x318 = -1LL;
	static int32_t x319 = INT32_MIN;
	int16_t x320 = -1;
	volatile int64_t t58 = 1660LL;

    t58 = (x317^((x318-x319)*x320));

    if (t58 != -2147483012LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x321 = 27557394299806697LLU;
	volatile int8_t x322 = 0;
	int16_t x323 = INT16_MIN;
	int32_t x324 = -249;
	static uint64_t t59 = 600959693906883043LLU;

    t59 = (x321^((x322-x323)*x324));

    if (t59 != 18419186679407404009LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x327 = 26U;
	int32_t x328 = INT32_MAX;
	static uint64_t t60 = 741LLU;

    t60 = (x325^((x326-x327)*x328));

    if (t60 != 57693076516LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x341 = 40U;
	volatile int16_t x342 = INT16_MIN;
	static int8_t x343 = 1;
	volatile int16_t x344 = 253;
	volatile int32_t t61 = -5;

    t61 = (x341^((x342-x343)*x344));

    if (t61 != -8290517) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x345 = INT8_MIN;
	int32_t x346 = INT32_MAX;
	int32_t x347 = 814554703;
	volatile int32_t x348 = -1;
	volatile int32_t t62 = 1;

    t62 = (x345^((x346-x347)*x348));

    if (t62 != 1332928976) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint32_t x349 = 10641U;
	volatile uint64_t x350 = UINT64_MAX;
	int8_t x352 = INT8_MIN;
	volatile uint64_t t63 = 393813LLU;

    t63 = (x349^((x350-x351)*x352));

    if (t63 != 10641LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int16_t x357 = -1;
	volatile int8_t x358 = INT8_MIN;
	int16_t x359 = 35;
	static int16_t x360 = -1;

    t64 = (x357^((x358-x359)*x360));

    if (t64 != -164) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x361 = UINT8_MAX;
	static uint32_t x362 = 7020480U;
	static int16_t x363 = -1;
	static volatile uint64_t t65 = 5287436212250536533LLU;

    t65 = (x361^((x362-x363)*x364));

    if (t65 != 7020350LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x365 = -63;
	uint16_t x366 = 919U;
	int16_t x367 = INT16_MIN;
	static int32_t t66 = -714520550;

    t66 = (x365^((x366-x367)*x368));

    if (t66 != -8590168) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x389 = INT8_MIN;
	volatile int32_t x390 = -21;
	volatile int8_t x391 = INT8_MIN;
	uint16_t x392 = UINT16_MAX;

    t67 = (x389^((x390-x391)*x392));

    if (t67 != -7012331) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x393 = 58799LL;
	volatile int32_t x394 = INT32_MAX;
	int64_t x395 = -1LL;
	int64_t t68 = -45351104183LL;

    t68 = (x393^((x394-x395)*x396));

    if (t68 != 15032444335LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x405 = INT16_MIN;
	uint16_t x406 = 3U;
	volatile int16_t x408 = -3719;
	volatile int32_t t69 = 380322;

    t69 = (x405^((x406-x407)*x408));

    if (t69 != -930588) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x409 = -1;
	static int16_t x410 = INT16_MIN;
	volatile int8_t x412 = INT8_MAX;
	volatile uint32_t t70 = 954234U;

    t70 = (x409^((x410-x411)*x412));

    if (t70 != 6312534U) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x427 = -1LL;
	static uint8_t x428 = 2U;
	int64_t t71 = 636432LL;

    t71 = (x425^((x426-x427)*x428));

    if (t71 != 165946159LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x433 = 5;
	int32_t x434 = -1;
	volatile uint16_t x436 = 0U;

    t72 = (x433^((x434-x435)*x436));

    if (t72 != 5) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x437 = 3810811730504095096LLU;
	uint64_t x438 = 1161063480362LLU;
	static int16_t x440 = INT16_MIN;
	uint64_t t73 = 350612237984LLU;

    t73 = (x437^((x438-x439)*x440));

    if (t73 != 14671158070427489656LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x441 = 0U;
	static int64_t x442 = -593764LL;
	int8_t x443 = INT8_MIN;
	uint16_t x444 = 3966U;
	int64_t t74 = 526311LL;

    t74 = (x441^((x442-x443)*x444));

    if (t74 != -2354360376LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x446 = -1;
	int64_t x447 = -82806LL;
	int64_t x448 = -1LL;
	volatile int64_t t75 = -133165710108LL;

    t75 = (x445^((x446-x447)*x448));

    if (t75 != -364077202972266LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x453 = -1LL;
	int32_t x454 = 22;
	int8_t x455 = 12;
	uint8_t x456 = UINT8_MAX;
	volatile int64_t t76 = -7202729LL;

    t76 = (x453^((x454-x455)*x456));

    if (t76 != -2551LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x457 = INT8_MAX;
	uint64_t x458 = UINT64_MAX;
	volatile int32_t x459 = INT32_MIN;
	static int8_t x460 = -1;
	volatile uint64_t t77 = 22112892428330034LLU;

    t77 = (x457^((x458-x459)*x460));

    if (t77 != 18446744071562068094LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x461 = -1LL;
	int16_t x463 = INT16_MAX;
	uint16_t x464 = 228U;

    t78 = (x461^((x462-x463)*x464));

    if (t78 != 18430410614269728543LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x469 = INT32_MIN;
	uint8_t x470 = UINT8_MAX;
	static uint32_t x471 = 31507501U;
	uint32_t t79 = 51U;

    t79 = (x469^((x470-x471)*x472));

    if (t79 != 2147483648U) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x473 = 28;
	int8_t x474 = -1;
	volatile uint8_t x476 = 1U;
	uint32_t t80 = 2U;

    t80 = (x473^((x474-x475)*x476));

    if (t80 != 4294967241U) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x477 = INT32_MAX;
	uint64_t x478 = 476362628922784LLU;
	static int8_t x479 = -1;
	uint32_t x480 = 2U;
	volatile uint64_t t81 = 302904030583LLU;

    t81 = (x477^((x478-x479)*x480));

    if (t81 != 952726245606589LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x481 = -1LL;
	volatile int64_t x483 = 5LL;
	int8_t x484 = INT8_MIN;
	int64_t t82 = 1693LL;

    t82 = (x481^((x482-x483)*x484));

    if (t82 != -17025LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x486 = 2U;

    t83 = (x485^((x486-x487)*x488));

    if (t83 != -13LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x493 = INT32_MAX;
	int32_t x494 = -87799433;
	volatile uint32_t x495 = 5433505U;
	uint64_t t84 = 1142442LLU;

    t84 = (x493^((x494-x495)*x496));

    if (t84 != 18446744071468835029LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int64_t x497 = INT64_MAX;
	uint8_t x498 = UINT8_MAX;
	static int8_t x499 = -6;
	int8_t x500 = 0;
	int64_t t85 = INT64_MAX;

    t85 = (x497^((x498-x499)*x500));

    if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x509 = INT16_MAX;
	uint32_t x510 = 1821877U;
	static uint64_t x511 = 98547LLU;
	static volatile int64_t x512 = 73415LL;
	uint64_t t86 = 42891468LLU;

    t86 = (x509^((x510-x511)*x512));

    if (t86 != 126518288433LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x513 = INT16_MIN;
	int16_t x514 = INT16_MAX;
	int16_t x515 = INT16_MIN;
	uint16_t x516 = 15U;
	static int32_t t87 = 7;

    t87 = (x513^((x514-x515)*x516));

    if (t87 != -950287) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x518 = 1552623974986LLU;
	int8_t x519 = -14;
	int16_t x520 = -1;

    t88 = (x517^((x518-x519)*x520));

    if (t88 != 1552623974952LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint8_t x525 = 26U;
	volatile int32_t x526 = -1;
	volatile uint8_t x527 = 1U;
	volatile uint64_t x528 = UINT64_MAX;

    t89 = (x525^((x526-x527)*x528));

    if (t89 != 24LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int8_t x529 = -1;
	int8_t x530 = -1;
	uint16_t x531 = 58U;
	uint8_t x532 = 8U;

    t90 = (x529^((x530-x531)*x532));

    if (t90 != 471) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x537 = INT64_MAX;
	int32_t x538 = INT32_MIN;
	int64_t x539 = -4574LL;
	static volatile int64_t t91 = 177448LL;

    t91 = (x537^((x538-x539)*x540));

    if (t91 != 9223301668260478975LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x541 = INT8_MIN;
	uint8_t x542 = 1U;
	uint32_t x543 = UINT32_MAX;
	uint32_t x544 = UINT32_MAX;
	static uint32_t t92 = 270572048U;

    t92 = (x541^((x542-x543)*x544));

    if (t92 != 126U) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x545 = -1;
	int64_t x546 = INT64_MIN;
	int64_t x547 = INT64_MIN;
	int8_t x548 = -1;
	int64_t t93 = -4886909126LL;

    t93 = (x545^((x546-x547)*x548));

    if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint64_t x549 = UINT64_MAX;
	static int32_t x550 = 418;
	int16_t x551 = INT16_MAX;
	uint64_t x552 = UINT64_MAX;
	static uint64_t t94 = 3428985107203LLU;

    t94 = (x549^((x550-x551)*x552));

    if (t94 != 18446744073709519266LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x553 = INT64_MAX;
	static int64_t x554 = INT64_MIN;
	static uint64_t x555 = UINT64_MAX;
	static int16_t x556 = -1;
	volatile uint64_t t95 = 22104LLU;

    t95 = (x553^((x554-x555)*x556));

    if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x558 = INT16_MAX;
	volatile int8_t x559 = INT8_MIN;
	int8_t x560 = -2;
	volatile int32_t t96 = -465680;

    t96 = (x557^((x558-x559)*x560));

    if (t96 != -65702) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x565 = -11;
	static int8_t x566 = INT8_MIN;
	int16_t x567 = -53;
	int16_t x568 = INT16_MIN;
	int32_t t97 = -217847800;

    t97 = (x565^((x566-x567)*x568));

    if (t97 != -2457611) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x573 = INT32_MIN;
	volatile int32_t x574 = -1;
	uint32_t x575 = 6U;
	uint64_t x576 = UINT64_MAX;
	uint64_t t98 = 24831344LLU;

    t98 = (x573^((x574-x575)*x576));

    if (t98 != 2147483655LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x577 = INT64_MAX;
	uint32_t x578 = 250339186U;
	int16_t x579 = -3576;
	static uint32_t x580 = UINT32_MAX;
	volatile int64_t t99 = -18205LL;

    t99 = (x577^((x578-x579)*x580));

    if (t99 != 9223372032810151273LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x584 = -1;

    t100 = (x581^((x582-x583)*x584));

    if (t100 != -3) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile int32_t x585 = -1;
	uint8_t x586 = 55U;
	volatile int8_t x587 = INT8_MIN;
	uint16_t x588 = UINT16_MAX;
	volatile int32_t t101 = -1;

    t101 = (x585^((x586-x587)*x588));

    if (t101 != -11992906) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x589 = INT8_MAX;
	uint64_t x591 = 191001LLU;
	static uint16_t x592 = 1095U;

    t102 = (x589^((x590-x591)*x592));

    if (t102 != 18446744073502070935LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x597 = 1;
	uint16_t x599 = 20U;
	int16_t x600 = -1;
	static uint64_t t103 = 873493443LLU;

    t103 = (x597^((x598-x599)*x600));

    if (t103 != 18446744020476833357LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x602 = INT16_MIN;
	int8_t x603 = INT8_MIN;
	int64_t t104 = 7243515367799LL;

    t104 = (x601^((x602-x603)*x604));

    if (t104 != 261119LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x617 = INT8_MIN;
	int32_t x618 = -1;
	volatile uint8_t x620 = 4U;
	static int32_t t105 = -84801;

    t105 = (x617^((x618-x619)*x620));

    if (t105 != 120) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x621 = 228097362909936LL;
	uint64_t x622 = 28349650LLU;
	volatile int64_t x623 = INT64_MAX;
	volatile uint64_t t106 = 364228985LLU;

    t106 = (x621^((x622-x623)*x624));

    if (t106 != 9223600137615674973LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x631 = UINT64_MAX;
	uint16_t x632 = UINT16_MAX;
	uint64_t t107 = 633093875LLU;

    t107 = (x629^((x630-x631)*x632));

    if (t107 != 4294967295LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x633 = 30373145;
	volatile int8_t x634 = INT8_MIN;
	volatile int16_t x636 = INT16_MIN;
	static int32_t t108 = 23;

    t108 = (x633^((x634-x635)*x636));

    if (t108 != -107743975) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x642 = 3503486695833632LLU;
	volatile uint8_t x643 = 24U;
	int64_t x644 = INT64_MIN;
	uint64_t t109 = 114LLU;

    t109 = (x641^((x642-x643)*x644));

    if (t109 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x649 = 1;
	static volatile int32_t x651 = INT32_MIN;
	int32_t x652 = -1;

    t110 = (x649^((x650-x651)*x652));

    if (t110 != -2147450879) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x654 = -376496306;
	uint8_t x655 = 1U;
	int32_t x656 = 0;
	int64_t t111 = 510421LL;

    t111 = (x653^((x654-x655)*x656));

    if (t111 != 21303727956LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x657 = UINT64_MAX;
	static uint32_t x658 = UINT32_MAX;
	int8_t x659 = INT8_MAX;

    t112 = (x657^((x658-x659)*x660));

    if (t112 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int8_t x661 = INT8_MIN;
	int8_t x663 = INT8_MIN;
	int16_t x664 = -155;
	volatile int32_t t113 = 8;

    t113 = (x661^((x662-x663)*x664));

    if (t113 != 50159) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x666 = INT8_MAX;
	int16_t x667 = -320;
	static uint64_t x668 = 121763030LLU;
	static volatile uint64_t t114 = 284LLU;

    t114 = (x665^((x666-x667)*x668));

    if (t114 != 54428082218LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x669 = -14;
	volatile int64_t x670 = 12882876314684LL;
	uint16_t x671 = UINT16_MAX;
	static int64_t t115 = -3358201LL;

    t115 = (x669^((x670-x671)*x672));

    if (t115 != 422146088932114418LL) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x673 = INT8_MIN;
	int16_t x674 = INT16_MAX;
	uint64_t x675 = 16604838591969690LLU;
	uint16_t x676 = UINT16_MAX;
	volatile uint64_t t116 = 926390842451897LLU;

    t116 = (x673^((x674-x675)*x676));

    if (t116 != 18286940847432255003LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x682 = -3;
	uint8_t x683 = 61U;
	int8_t x684 = INT8_MIN;
	static volatile int64_t t117 = 14261777211LL;

    t117 = (x681^((x682-x683)*x684));

    if (t117 != -9223372036854767616LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x685 = 33U;
	static int32_t x686 = INT32_MAX;
	uint8_t x687 = 0U;
	static volatile int8_t x688 = -1;
	volatile int32_t t118 = 8;

    t118 = (x685^((x686-x687)*x688));

    if (t118 != -2147483616) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x689 = -1;
	int32_t x690 = 40571;
	static int8_t x692 = INT8_MIN;

    t119 = (x689^((x690-x691)*x692));

    if (t119 != 5209471) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x693 = 1775;
	int64_t x694 = INT64_MIN;
	int64_t x696 = -1LL;
	static volatile int64_t t120 = -953383281842416229LL;

    t120 = (x693^((x694-x695)*x696));

    if (t120 != 1775LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x702 = -1;
	volatile uint8_t x704 = 107U;
	int32_t t121 = -580974031;

    t121 = (x701^((x702-x703)*x704));

    if (t121 != -128) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int8_t x705 = INT8_MAX;
	int64_t x706 = 77745337706554LL;
	int16_t x708 = INT16_MIN;
	int64_t t122 = 3936108391747LL;

    t122 = (x705^((x706-x707)*x708));

    if (t122 != -2547559225968394113LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x711 = -6LL;
	int16_t x712 = INT16_MAX;

    t123 = (x709^((x710-x711)*x712));

    if (t123 != 582975069216897323LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x713 = INT16_MIN;
	uint16_t x714 = 11585U;
	uint16_t x715 = 15U;
	int8_t x716 = INT8_MIN;
	int32_t t124 = 24020367;

    t124 = (x713^((x714-x715)*x716));

    if (t124 != 1500928) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x718 = 2003262340802995290LLU;
	uint64_t t125 = 3703973LLU;

    t125 = (x717^((x718-x719)*x720));

    if (t125 != 2993355663961623247LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int16_t x730 = INT16_MAX;
	uint16_t x732 = 0U;
	int32_t t126 = 1;

    t126 = (x729^((x730-x731)*x732));

    if (t126 != -160) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x734 = 1U;
	uint8_t x736 = 78U;

    t127 = (x733^((x734-x735)*x736));

    if (t127 != 1145558575600609LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x737 = INT8_MIN;
	static int16_t x738 = INT16_MAX;
	static int16_t x739 = 6;
	uint32_t x740 = 5689822U;

    t128 = (x737^((x738-x739)*x740));

    if (t128 != 2574302574U) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x753 = INT32_MIN;
	uint8_t x754 = 25U;
	volatile int16_t x756 = INT16_MIN;
	volatile uint32_t t129 = 63U;

    t129 = (x753^((x754-x755)*x756));

    if (t129 != 3106177024U) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int64_t x757 = INT64_MAX;
	int8_t x758 = -30;
	int32_t x759 = INT32_MIN;
	static int64_t x760 = -1LL;
	volatile int64_t t130 = 3112LL;

    t130 = (x757^((x758-x759)*x760));

    if (t130 != -9223372034707292191LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint16_t x765 = UINT16_MAX;
	static volatile int8_t x766 = INT8_MIN;
	static int8_t x767 = -33;
	int32_t t131 = -387270720;

    t131 = (x765^((x766-x767)*x768));

    if (t131 != 65535) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile uint32_t x769 = 32152863U;
	uint8_t x770 = 13U;
	uint64_t x771 = UINT64_MAX;
	volatile uint64_t t132 = 245822925707368LLU;

    t132 = (x769^((x770-x771)*x772));

    if (t132 != 18446744073677282591LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x777 = INT32_MIN;
	int32_t x778 = -27;
	volatile int64_t x779 = 5302122500416512LL;
	uint16_t x780 = 645U;
	int64_t t133 = -3287256843LL;

    t133 = (x777^((x778-x779)*x780));

    if (t133 != 3419869011008997369LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x781 = INT16_MAX;
	int32_t x782 = 6;
	int32_t x783 = 3085551;
	volatile int16_t x784 = 101;
	volatile int32_t t134 = -872267;

    t134 = (x781^((x782-x783)*x784));

    if (t134 != -311640084) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x785 = 10U;
	static volatile uint32_t x786 = UINT32_MAX;
	uint64_t x787 = 1589023088054LLU;
	uint32_t x788 = UINT32_MAX;
	uint64_t t135 = 242558105857589LLU;

    t135 = (x785^((x786-x787)*x788));

    if (t135 != 493113072108969405LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x789 = -1;
	uint64_t x790 = UINT64_MAX;
	int32_t x791 = INT32_MIN;
	int32_t x792 = 0;
	volatile uint64_t t136 = UINT64_MAX;

    t136 = (x789^((x790-x791)*x792));

    if (t136 != UINT64_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	static int32_t x805 = -20155507;
	int16_t x807 = 1788;
	static uint32_t x808 = 1353706U;
	uint32_t t137 = 1U;

    t137 = (x805^((x806-x807)*x808));

    if (t137 != 2386387923U) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x809 = UINT32_MAX;
	volatile int32_t x811 = INT32_MIN;
	uint64_t t138 = 31106501888LLU;

    t138 = (x809^((x810-x811)*x812));

    if (t138 != 18446744071562067966LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x813 = UINT32_MAX;
	static int8_t x815 = INT8_MIN;
	volatile uint16_t x816 = 5776U;
	volatile int64_t t139 = -59765951LL;

    t139 = (x813^((x814-x815)*x816));

    if (t139 != 4294233743LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x821 = INT8_MAX;
	static uint32_t x822 = 4649265U;
	int32_t x823 = INT32_MAX;
	int8_t x824 = INT8_MIN;

    t140 = (x821^((x822-x823)*x824));

    if (t140 != 3699861375U) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x829 = INT16_MIN;
	volatile int8_t x830 = INT8_MIN;
	int32_t x831 = -1;
	static int64_t x832 = -14138625055554LL;
	int64_t t141 = 240846LL;

    t141 = (x829^((x830-x831)*x832));

    if (t141 != -1795605382052418LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x837 = -62;
	volatile int16_t x838 = 2;
	int16_t x839 = -1;
	int8_t x840 = INT8_MIN;
	volatile int32_t t142 = -243397084;

    t142 = (x837^((x838-x839)*x840));

    if (t142 != 322) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x841 = INT64_MIN;
	int16_t x842 = -1;
	int8_t x843 = 0;
	uint8_t x844 = UINT8_MAX;
	volatile int64_t t143 = -1LL;

    t143 = (x841^((x842-x843)*x844));

    if (t143 != 9223372036854775553LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x853 = 0U;
	int16_t x854 = INT16_MIN;
	int16_t x855 = -1;
	uint64_t x856 = UINT64_MAX;

    t144 = (x853^((x854-x855)*x856));

    if (t144 != 32767LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x865 = 652243;
	int8_t x866 = -1;
	int64_t x867 = 220LL;
	int64_t t145 = -508LL;

    t145 = (x865^((x866-x867)*x868));

    if (t145 != -13962482LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x869 = INT32_MAX;
	volatile uint64_t x870 = UINT64_MAX;
	static volatile int64_t x871 = -1LL;
	int32_t x872 = -1;

    t146 = (x869^((x870-x871)*x872));

    if (t146 != 2147483647LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x873 = INT32_MIN;
	uint32_t x874 = 949360U;
	uint32_t x875 = 53513U;
	static int64_t x876 = -1LL;
	volatile int64_t t147 = 41327093272LL;

    t147 = (x873^((x874-x875)*x876));

    if (t147 != 2146587801LL) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x877 = INT16_MAX;
	static int16_t x878 = INT16_MAX;
	static uint64_t t148 = 52608865093518228LLU;

    t148 = (x877^((x878-x879)*x880));

    if (t148 != 18446744073709550624LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x881 = 9085LLU;
	uint32_t x882 = 1245U;
	int32_t x883 = 273365;
	int64_t x884 = -49234LL;
	uint64_t t149 = 2LLU;

    t149 = (x881^((x882-x883)*x884));

    if (t149 != 18446532628687247373LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x885 = 476347256816619LLU;
	uint32_t x886 = UINT32_MAX;
	int16_t x887 = -1;
	int16_t x888 = 1;

    t150 = (x885^((x886-x887)*x888));

    if (t150 != 476347256816619LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint64_t x889 = UINT64_MAX;
	int16_t x891 = -1;
	int16_t x892 = -2796;
	uint64_t t151 = UINT64_MAX;

    t151 = (x889^((x890-x891)*x892));

    if (t151 != UINT64_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x893 = 102U;
	volatile int32_t x894 = -6;
	int8_t x895 = -25;
	volatile uint8_t x896 = UINT8_MAX;
	volatile uint32_t t152 = 59U;

    t152 = (x893^((x894-x895)*x896));

    if (t152 != 4747U) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x901 = 1;
	uint32_t x903 = 220U;
	static uint16_t x904 = 2006U;

    t153 = (x901^((x902-x903)*x904));

    if (t153 != 4294780739U) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint64_t x906 = 1987437226993442089LLU;
	static int64_t x907 = -4487926627450LL;
	uint32_t x908 = 928907122U;
	volatile uint64_t t154 = 201222932LLU;

    t154 = (x905^((x906-x907)*x908));

    if (t154 != 18288644215710103657LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x919 = INT16_MIN;
	uint16_t x920 = 125U;

    t155 = (x917^((x918-x919)*x920));

    if (t155 != -1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x929 = INT16_MIN;
	static uint8_t x930 = 5U;

    t156 = (x929^((x930-x931)*x932));

    if (t156 != -8224768) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x933 = -26;
	static int16_t x934 = INT16_MIN;
	int16_t x936 = INT16_MIN;
	volatile int64_t t157 = -3057444876434LL;

    t157 = (x933^((x934-x935)*x936));

    if (t157 != 529143267302LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x941 = INT64_MIN;
	int16_t x942 = 0;
	static int16_t x943 = -1;
	volatile uint16_t x944 = 23U;
	volatile int64_t t158 = 275064843354699LL;

    t158 = (x941^((x942-x943)*x944));

    if (t158 != -9223372036854775785LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x961 = 32;
	volatile uint8_t x962 = UINT8_MAX;
	uint32_t x964 = UINT32_MAX;
	uint32_t t159 = 1496445U;

    t159 = (x961^((x962-x963)*x964));

    if (t159 != 4294967114U) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x974 = INT16_MIN;
	uint64_t x975 = 3672LLU;
	int8_t x976 = -35;
	volatile uint64_t t160 = 18967671474847847LLU;

    t160 = (x973^((x974-x975)*x976));

    if (t160 != 1275511LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint8_t x977 = 13U;
	int32_t x978 = INT32_MIN;
	uint64_t x980 = 27644070348LLU;
	static volatile uint64_t t161 = 342881203141126LLU;

    t161 = (x977^((x978-x979)*x980));

    if (t161 != 14421790796787541517LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x981 = UINT8_MAX;
	uint8_t x982 = 7U;
	static uint8_t x983 = 0U;
	int32_t x984 = -1;
	int32_t t162 = -1074;

    t162 = (x981^((x982-x983)*x984));

    if (t162 != -250) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x985 = INT64_MIN;
	int8_t x986 = 29;
	uint8_t x987 = UINT8_MAX;
	int64_t t163 = -71LL;

    t163 = (x985^((x986-x987)*x988));

    if (t163 != 9223372036853933732LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x989 = INT32_MIN;
	int64_t x990 = 333909LL;
	int32_t x991 = INT32_MIN;
	uint32_t x992 = 13286046U;
	static volatile int64_t t164 = -1768852287999954172LL;

    t164 = (x989^((x990-x991)*x992));

    if (t164 != -28536001456191882LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x993 = -4039353018902LL;
	static int16_t x994 = INT16_MIN;
	static int8_t x995 = -1;
	volatile int16_t x996 = INT16_MAX;
	static volatile int64_t t165 = -739865LL;

    t165 = (x993^((x994-x995)*x996));

    if (t165 != 4038406744597LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int32_t x997 = 9;
	uint16_t x998 = 10U;
	uint16_t x1000 = 6U;
	volatile uint32_t t166 = 1877U;

    t166 = (x997^((x998-x999)*x1000));

    if (t166 != 4294933519U) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile int64_t x1001 = 9LL;
	int8_t x1003 = INT8_MAX;
	volatile uint64_t x1004 = 1LLU;
	volatile uint64_t t167 = 0LLU;

    t167 = (x1001^((x1002-x1003)*x1004));

    if (t167 != 18446744073709551497LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x1005 = 118U;
	volatile int32_t x1006 = 20999434;
	volatile uint64_t x1007 = 7LLU;
	int8_t x1008 = INT8_MAX;
	volatile uint64_t t168 = 16285LLU;

    t168 = (x1005^((x1006-x1007)*x1008));

    if (t168 != 2666927115LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x1010 = UINT8_MAX;
	volatile int8_t x1011 = INT8_MAX;
	static volatile uint64_t x1012 = 29576LLU;

    t169 = (x1009^((x1010-x1011)*x1012));

    if (t169 != 3783679LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x1021 = -2;
	int16_t x1022 = -7;
	static uint8_t x1023 = 7U;
	uint16_t x1024 = 1055U;
	static volatile int32_t t170 = -7;

    t170 = (x1021^((x1022-x1023)*x1024));

    if (t170 != 14768) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x1029 = -1LL;
	int8_t x1030 = 3;
	uint32_t x1031 = 740U;
	uint32_t x1032 = UINT32_MAX;
	int64_t t171 = 3847034116061878LL;

    t171 = (x1029^((x1030-x1031)*x1032));

    if (t171 != -738LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x1033 = 472U;
	volatile int64_t x1034 = -111044144LL;
	volatile uint8_t x1035 = 17U;
	int64_t t172 = -6257450313073379LL;

    t172 = (x1033^((x1034-x1035)*x1036));

    if (t172 != -476931039795714151LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x1037 = INT8_MIN;
	uint8_t x1038 = 67U;
	static int8_t x1040 = 0;
	static int64_t t173 = -15LL;

    t173 = (x1037^((x1038-x1039)*x1040));

    if (t173 != -128LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x1042 = 14310148U;
	int64_t x1043 = -1349386LL;
	volatile int16_t x1044 = -6098;
	int64_t t174 = -1740LL;

    t174 = (x1041^((x1042-x1043)*x1044));

    if (t174 != 95491838331LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x1051 = 4020365U;
	int16_t x1052 = INT16_MIN;
	static uint32_t t175 = 1993U;

    t175 = (x1049^((x1050-x1051)*x1052));

    if (t175 != 2890334213U) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint32_t x1058 = 1058277736U;
	int16_t x1059 = INT16_MAX;
	int32_t x1060 = -3;
	uint32_t t176 = 4508U;

    t176 = (x1057^((x1058-x1059)*x1060));

    if (t176 != 1120232318U) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x1062 = -57;
	int16_t x1063 = INT16_MIN;
	static int32_t x1064 = 12426;

    t177 = (x1061^((x1062-x1063)*x1064));

    if (t177 != 406466825) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x1065 = 3;
	int16_t x1067 = -24;
	int64_t x1068 = -107613196LL;

    t178 = (x1065^((x1066-x1067)*x1068));

    if (t178 != 2270315596015LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x1069 = INT8_MIN;
	int8_t x1070 = -1;
	int8_t x1072 = -18;
	volatile int32_t t179 = -458010;

    t179 = (x1069^((x1070-x1071)*x1072));

    if (t179 != 589714) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x1073 = 105928152704375014LLU;
	uint16_t x1074 = UINT16_MAX;
	static uint8_t x1075 = 28U;
	static uint16_t x1076 = 1319U;
	volatile uint64_t t180 = 12474619762357005LLU;

    t180 = (x1073^((x1074-x1075)*x1076));

    if (t180 != 105928152752992883LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x1077 = 388397U;
	int16_t x1078 = INT16_MIN;
	int8_t x1080 = -1;

    t181 = (x1077^((x1078-x1079)*x1080));

    if (t181 != 355625U) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint8_t x1081 = 27U;
	int32_t x1084 = -1;
	int32_t t182 = -1811789;

    t182 = (x1081^((x1082-x1083)*x1084));

    if (t182 != -65510) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x1085 = INT8_MIN;
	int8_t x1086 = 13;
	int64_t x1087 = -1LL;
	uint32_t x1088 = 1243463U;
	static volatile int64_t t183 = -149527LL;

    t183 = (x1085^((x1086-x1087)*x1088));

    if (t183 != -17408414LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x1089 = -1;
	int32_t x1091 = -1;
	volatile int8_t x1092 = 0;
	volatile int32_t t184 = -8;

    t184 = (x1089^((x1090-x1091)*x1092));

    if (t184 != -1) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x1094 = INT32_MIN;
	static volatile int64_t x1095 = INT64_MIN;
	uint16_t x1096 = 0U;
	static volatile uint64_t t185 = UINT64_MAX;

    t185 = (x1093^((x1094-x1095)*x1096));

    if (t185 != UINT64_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x1103 = INT32_MIN;
	int16_t x1104 = 1;
	static volatile uint32_t t186 = 654220U;

    t186 = (x1101^((x1102-x1103)*x1104));

    if (t186 != 2146776081U) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x1105 = 15257;
	int16_t x1107 = INT16_MAX;
	int8_t x1108 = -1;
	volatile uint32_t t187 = 0U;

    t187 = (x1105^((x1106-x1107)*x1108));

    if (t187 != 4294352190U) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x1109 = INT8_MIN;
	static int16_t x1110 = INT16_MIN;
	volatile uint32_t x1112 = 496552201U;
	static uint32_t t188 = 12106606U;

    t188 = (x1109^((x1110-x1111)*x1112));

    if (t188 != 1201745181U) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x1113 = INT8_MAX;
	static uint32_t x1115 = 233849029U;
	volatile uint32_t t189 = 229U;

    t189 = (x1113^((x1114-x1115)*x1116));

    if (t189 != 3443146953U) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x1117 = INT32_MIN;
	static volatile int16_t x1118 = INT16_MIN;
	uint64_t x1119 = 1854057041786228LLU;
	uint64_t x1120 = UINT64_MAX;
	uint64_t t190 = 342806532483LLU;

    t190 = (x1117^((x1118-x1119)*x1120));

    if (t190 != 18444890017049277812LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x1125 = -1LL;
	int64_t x1126 = -13798437845632LL;
	volatile uint32_t x1127 = 154390587U;
	int64_t x1128 = 22LL;
	int64_t t191 = -634505334478562LL;

    t191 = (x1125^((x1126-x1127)*x1128));

    if (t191 != 303569029196817LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile int16_t x1130 = INT16_MIN;
	int16_t x1132 = -3;
	volatile int32_t t192 = 237;

    t192 = (x1129^((x1130-x1131)*x1132));

    if (t192 != 94575) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x1133 = INT64_MAX;
	volatile uint8_t x1135 = 11U;

    t193 = (x1133^((x1134-x1135)*x1136));

    if (t193 != -9223372036854775353LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x1141 = 2U;
	uint8_t x1142 = 113U;
	int64_t x1143 = -227LL;
	uint16_t x1144 = UINT16_MAX;
	volatile int64_t t194 = -13968LL;

    t194 = (x1141^((x1142-x1143)*x1144));

    if (t194 != 22281902LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x1145 = 149678U;
	int8_t x1146 = -59;
	volatile uint64_t t195 = 3336LLU;

    t195 = (x1145^((x1146-x1147)*x1148));

    if (t195 != 148548LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x1153 = 776321321U;
	static volatile int64_t x1154 = 1042480432484LL;
	int32_t x1155 = -1;
	int32_t x1156 = -3;

    t196 = (x1153^((x1154-x1155)*x1156));

    if (t196 != -3126807669000LL) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint64_t x1157 = 51363LLU;
	static uint16_t x1158 = 1U;
	int8_t x1160 = INT8_MIN;
	volatile uint64_t t197 = 5361154499840946LLU;

    t197 = (x1157^((x1158-x1159)*x1160));

    if (t197 != 8337315LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x1161 = INT64_MIN;
	uint32_t x1163 = UINT32_MAX;
	int16_t x1164 = INT16_MAX;
	uint64_t t198 = 1024301283418LLU;

    t198 = (x1161^((x1162-x1163)*x1164));

    if (t198 != 9223231304137852723LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint32_t x1165 = 390U;
	uint32_t x1167 = 0U;
	volatile uint32_t x1168 = 26365U;
	uint32_t t199 = 150705U;

    t199 = (x1165^((x1166-x1167)*x1168));

    if (t199 != 3431039366U) { NG(); } else { ; }
	
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

