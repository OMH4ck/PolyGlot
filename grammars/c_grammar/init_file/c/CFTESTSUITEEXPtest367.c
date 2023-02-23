
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

static int8_t x1 = -3;
uint64_t x14 = 15801LLU;
int8_t x15 = INT8_MIN;
int8_t x32 = -2;
static int16_t x34 = -6;
uint16_t x37 = 645U;
uint16_t x48 = UINT16_MAX;
int64_t x51 = -1538594LL;
uint64_t x55 = UINT64_MAX;
uint64_t t10 = 85703868LLU;
static int64_t x58 = -1LL;
static uint8_t x66 = UINT8_MAX;
static uint32_t x70 = 232U;
uint64_t t13 = 819133816609004LLU;
int32_t x90 = INT32_MIN;
uint64_t x92 = 430918070248933407LLU;
int8_t x93 = INT8_MIN;
uint16_t x94 = UINT16_MAX;
volatile int32_t x96 = -701;
volatile int64_t t15 = -1124212LL;
uint32_t x99 = 21U;
int8_t x102 = INT8_MIN;
uint64_t x103 = 127603315351LLU;
static uint16_t x107 = 3U;
static int32_t x110 = -3640;
uint8_t x115 = UINT8_MAX;
int32_t x121 = INT32_MIN;
static int64_t t21 = 1836LL;
static uint16_t x126 = UINT16_MAX;
int16_t x129 = 1917;
int16_t x130 = INT16_MIN;
int16_t x131 = -1;
volatile int32_t t23 = 2047616;
int8_t x145 = 2;
int32_t x154 = INT32_MIN;
volatile uint64_t t27 = 64619478025791LLU;
volatile int64_t x166 = 10352LL;
uint8_t x176 = 18U;
static int64_t t31 = -130227876762LL;
static int16_t x182 = INT16_MAX;
uint64_t x183 = 1437LLU;
uint64_t t33 = 26456LLU;
int16_t x185 = INT16_MIN;
int32_t x194 = INT32_MIN;
int32_t x198 = 562413837;
int32_t x200 = INT32_MIN;
int8_t x211 = 0;
int32_t x216 = 54551;
uint64_t t38 = 10918798616633345LLU;
uint64_t x226 = UINT64_MAX;
static uint64_t x237 = UINT64_MAX;
volatile uint64_t t47 = 4808237635LLU;
uint8_t x277 = 119U;
static volatile uint64_t t49 = 44360LLU;
int8_t x297 = -1;
int32_t x298 = -1;
static int8_t x305 = INT8_MIN;
static int32_t x315 = -1;
volatile int32_t t54 = 7192;
int8_t x323 = -1;
int32_t x328 = INT32_MIN;
uint32_t x334 = 176U;
volatile int32_t x335 = INT32_MAX;
int64_t x344 = INT64_MAX;
int32_t x363 = INT32_MIN;
static volatile uint32_t t62 = 1513776463U;
static int16_t x368 = INT16_MIN;
volatile uint16_t x374 = 7U;
int8_t x377 = INT8_MAX;
volatile uint64_t x381 = 1583677458LLU;
volatile uint32_t x383 = 13616142U;
int32_t x394 = 22523;
volatile uint16_t x405 = UINT16_MAX;
volatile uint8_t x421 = UINT8_MAX;
int32_t x435 = 1;
volatile int8_t x438 = -1;
volatile int16_t x447 = INT16_MIN;
int8_t x448 = -1;
int8_t x450 = INT8_MIN;
int64_t x456 = 462187103794LL;
static uint64_t t83 = 1629LLU;
uint8_t x461 = UINT8_MAX;
int8_t x463 = INT8_MIN;
volatile uint16_t x466 = UINT16_MAX;
uint32_t x472 = 1485561U;
static volatile int16_t x483 = -252;
static int8_t x491 = INT8_MIN;
int8_t x492 = -1;
int16_t x495 = INT16_MIN;
int32_t t91 = -27985;
static int64_t x498 = -270807123LL;
int8_t x500 = INT8_MIN;
volatile int64_t t92 = 3888008161081010879LL;
static int64_t x502 = -1LL;
uint64_t x509 = 46542211339859201LLU;
static volatile uint64_t t94 = 332779LLU;
static uint16_t x515 = 1447U;
uint64_t t97 = 9512757597852LLU;
int8_t x529 = -1;
static volatile int16_t x545 = 1466;
int8_t x551 = -1;
int32_t x552 = -5;
volatile int16_t x554 = 10588;
int32_t x556 = -3338;
uint64_t t102 = 160508042072LLU;
int8_t x561 = -3;
int64_t t104 = 229625658278129LL;
int64_t x581 = INT64_MIN;
volatile int64_t t107 = -4096LL;
static volatile int16_t x601 = INT16_MIN;
int16_t x602 = INT16_MIN;
volatile int64_t x610 = INT64_MAX;
static volatile uint64_t t110 = 11110157446012LLU;
int16_t x626 = 3094;
uint16_t x634 = 5016U;
uint64_t t115 = 465LLU;
int16_t x659 = INT16_MIN;
static uint8_t x664 = 0U;
volatile uint64_t t118 = 13LLU;
int32_t x673 = INT32_MAX;
int64_t x675 = -2064439435895379LL;
uint32_t x693 = 14770U;
uint16_t x702 = UINT16_MAX;
uint64_t t125 = 103943739225LLU;
int64_t x707 = 207154163555994LL;
volatile int64_t t126 = -1292824LL;
uint32_t x717 = UINT32_MAX;
static volatile int32_t t132 = 7878631;
int8_t x758 = INT8_MIN;
static int16_t x760 = -2;
int64_t x770 = -1403436931351LL;
uint16_t x773 = UINT16_MAX;
uint64_t x774 = UINT64_MAX;
static uint8_t x781 = 31U;
uint64_t x786 = 30832489301LLU;
volatile uint64_t t140 = 13429LLU;
uint64_t x790 = UINT64_MAX;
volatile uint64_t t141 = 311995114LLU;
int16_t x797 = INT16_MIN;
int16_t x801 = 4051;
int32_t t144 = 0;
int8_t x809 = 4;
uint32_t x814 = 39623U;
volatile uint64_t t150 = 0LLU;
int32_t x841 = -21442035;
volatile int32_t x843 = 744637;
uint64_t x867 = 8027366496098LLU;
uint64_t x886 = UINT64_MAX;
int8_t x892 = -1;
uint64_t x893 = UINT64_MAX;
uint64_t x895 = UINT64_MAX;
static int16_t x896 = INT16_MAX;
static uint64_t t162 = 184776929999LLU;
static volatile uint8_t x903 = UINT8_MAX;
int32_t x904 = INT32_MIN;
uint8_t x907 = UINT8_MAX;
static int16_t x913 = -192;
uint64_t t166 = 70397113456LLU;
int16_t x918 = INT16_MIN;
static int32_t x919 = 16;
int32_t x937 = -1;
static int32_t x943 = -1;
uint64_t t172 = 16092902186918LLU;
int32_t t173 = -262160266;
static int64_t t175 = 1329552715394969LL;
static uint64_t t176 = 50117007849LLU;
uint8_t x969 = UINT8_MAX;
int64_t x977 = INT64_MIN;
int8_t x979 = -1;
uint64_t x1007 = 888317114802455LLU;
static volatile int32_t x1008 = -1;
uint32_t x1023 = 58852418U;
uint8_t x1028 = 3U;
volatile uint64_t t186 = 11824883254556179LLU;
int16_t x1033 = -1;
static int32_t x1038 = -3416568;
uint64_t t188 = 36LLU;
uint16_t x1042 = 195U;
volatile uint64_t t191 = 6355575895915912022LLU;
uint16_t x1058 = 15U;
int64_t t192 = 31LL;
static uint64_t x1062 = 407581LLU;
volatile uint64_t x1070 = 12395343508LLU;
volatile int8_t x1072 = 33;
static int8_t x1078 = -4;
int8_t x1081 = INT8_MIN;
static uint64_t x1088 = UINT64_MAX;


void f0(void) {
    	int8_t x2 = INT8_MIN;
	uint32_t x3 = 13230U;
	static int32_t x4 = INT32_MIN;
	uint32_t t0 = 3U;

    t0 = (x1*((x2-x3)|x4));

    if (t0 != 40074U) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x9 = -1;
	static int8_t x10 = -37;
	volatile int32_t x11 = 770;
	int16_t x12 = INT16_MIN;
	int32_t t1 = -1233221;

    t1 = (x9*((x10-x11)|x12));

    if (t1 != 807) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x13 = -2;
	uint64_t x16 = UINT64_MAX;
	volatile uint64_t t2 = 8564LLU;

    t2 = (x13*((x14-x15)|x16));

    if (t2 != 2LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint8_t x17 = 0U;
	int16_t x18 = -1;
	static uint32_t x19 = 68907618U;
	volatile int8_t x20 = INT8_MIN;
	uint32_t t3 = 36283471U;

    t3 = (x17*((x18-x19)|x20));

    if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x29 = -1;
	uint16_t x30 = UINT16_MAX;
	int8_t x31 = INT8_MAX;
	volatile int32_t t4 = 3007546;

    t4 = (x29*((x30-x31)|x32));

    if (t4 != 2) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x33 = -1;
	uint8_t x35 = 7U;
	static int16_t x36 = -1;
	int32_t t5 = 432392;

    t5 = (x33*((x34-x35)|x36));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x38 = INT16_MIN;
	static uint64_t x39 = UINT64_MAX;
	volatile uint16_t x40 = UINT16_MAX;
	volatile uint64_t t6 = 0LLU;

    t6 = (x37*((x38-x39)|x40));

    if (t6 != 18446744073709550971LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x41 = INT16_MAX;
	static int16_t x42 = INT16_MAX;
	static int16_t x43 = -60;
	int32_t x44 = -1;
	volatile int32_t t7 = 94211744;

    t7 = (x41*((x42-x43)|x44));

    if (t7 != -32767) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x45 = 21;
	int8_t x46 = INT8_MIN;
	uint8_t x47 = 48U;
	static int32_t t8 = -31867;

    t8 = (x45*((x46-x47)|x48));

    if (t8 != -21) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x49 = INT32_MIN;
	int8_t x50 = INT8_MAX;
	static volatile uint8_t x52 = 3U;
	volatile int64_t t9 = -30751972045LL;

    t9 = (x49*((x50-x51)|x52));

    if (t9 != -3304382481301504LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x53 = 15524436063758LL;
	int8_t x54 = 7;
	int64_t x56 = INT64_MIN;

    t10 = (x53*((x54-x55)|x56));

    if (t10 != 124195488510064LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x57 = INT64_MAX;
	int8_t x59 = INT8_MAX;
	int32_t x60 = INT32_MAX;
	int64_t t11 = 331448LL;

    t11 = (x57*((x58-x59)|x60));

    if (t11 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint64_t x65 = UINT64_MAX;
	static int64_t x67 = INT64_MAX;
	volatile int32_t x68 = INT32_MAX;
	volatile uint64_t t12 = 201157078161907LLU;

    t12 = (x65*((x66-x67)|x68));

    if (t12 != 9223372034707292161LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x69 = -1;
	int16_t x71 = INT16_MIN;
	uint64_t x72 = 5097605871016093LLU;

    t13 = (x69*((x70-x71)|x72));

    if (t13 != 18441646467838535427LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x89 = 15308U;
	int16_t x91 = -1;
	uint64_t t14 = 5241572LLU;

    t14 = (x89*((x90-x91)|x92));

    if (t14 != 18446721597486505396LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x95 = 1017636LL;

    t15 = (x93*((x94-x95)|x96));

    if (t15 != 70272LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x97 = UINT32_MAX;
	uint64_t x98 = 114793497092LLU;
	volatile int64_t x100 = INT64_MIN;
	volatile uint64_t t16 = 128621398877LLU;

    t16 = (x97*((x98-x99)|x100));

    if (t16 != 4195597645320175121LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x101 = INT16_MAX;
	static uint16_t x104 = 15298U;
	uint64_t t17 = 97008709468282LLU;

    t17 = (x101*((x102-x103)|x104));

    if (t17 != 18442562896030695445LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x105 = 358U;
	int16_t x106 = -2;
	int8_t x108 = -1;
	static volatile int32_t t18 = -6375;

    t18 = (x105*((x106-x107)|x108));

    if (t18 != -358) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint64_t x109 = 100906421LLU;
	int16_t x111 = -1;
	static uint64_t x112 = 5942LLU;
	static uint64_t t19 = 41118713386776LLU;

    t19 = (x109*((x110-x111)|x112));

    if (t19 != 18446743866952294987LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x113 = -1;
	int64_t x114 = -1LL;
	volatile uint8_t x116 = UINT8_MAX;
	static int64_t t20 = 3LL;

    t20 = (x113*((x114-x115)|x116));

    if (t20 != 1LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x122 = 95U;
	int64_t x123 = -1LL;
	uint32_t x124 = UINT32_MAX;

    t21 = (x121*((x122-x123)|x124));

    if (t21 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int64_t x125 = -1LL;
	volatile int64_t x127 = -1LL;
	static uint8_t x128 = 1U;
	volatile int64_t t22 = -190461576913309LL;

    t22 = (x125*((x126-x127)|x128));

    if (t22 != -65537LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile int8_t x132 = INT8_MAX;

    t23 = (x129*((x130-x131)|x132));

    if (t23 != -62572797) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x133 = INT16_MAX;
	static volatile int8_t x134 = -1;
	uint8_t x135 = 2U;
	volatile uint32_t x136 = 656136U;
	volatile uint32_t t24 = 130719444U;

    t24 = (x133*((x134-x135)|x136));

    if (t24 != 4294868995U) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int8_t x146 = INT8_MIN;
	volatile int16_t x147 = INT16_MIN;
	int8_t x148 = -1;
	volatile int32_t t25 = 214;

    t25 = (x145*((x146-x147)|x148));

    if (t25 != -2) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile uint8_t x149 = 26U;
	int16_t x150 = 167;
	static int8_t x151 = INT8_MIN;
	uint32_t x152 = 246517944U;
	volatile uint32_t t26 = 207U;

    t26 = (x149*((x150-x151)|x152));

    if (t26 != 2114506086U) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint64_t x153 = 420LLU;
	int64_t x155 = INT64_MIN;
	int32_t x156 = -1;

    t27 = (x153*((x154-x155)|x156));

    if (t27 != 18446744073709551196LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x157 = 2360171020LLU;
	uint8_t x158 = UINT8_MAX;
	uint8_t x159 = UINT8_MAX;
	int8_t x160 = INT8_MIN;
	volatile uint64_t t28 = 240304799992909839LLU;

    t28 = (x157*((x158-x159)|x160));

    if (t28 != 18446743771607661056LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x165 = 103U;
	int16_t x167 = 0;
	int64_t x168 = -1003230LL;
	volatile int64_t t29 = -3236611LL;

    t29 = (x165*((x166-x167)|x168));

    if (t29 != -103113506LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x169 = 5;
	int8_t x170 = INT8_MIN;
	uint16_t x171 = UINT16_MAX;
	int32_t x172 = 868351;
	volatile int32_t t30 = 85;

    t30 = (x169*((x170-x171)|x172));

    if (t30 != -5) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x173 = -2;
	uint16_t x174 = 629U;
	int64_t x175 = 31783385LL;

    t31 = (x173*((x174-x175)|x176));

    if (t31 != 63565508LL) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x177 = 3LL;
	volatile int16_t x178 = INT16_MIN;
	int64_t x179 = INT64_MIN;
	int16_t x180 = INT16_MIN;
	volatile int64_t t32 = -832LL;

    t32 = (x177*((x178-x179)|x180));

    if (t32 != -98304LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x181 = INT8_MAX;
	int8_t x184 = -1;

    t33 = (x181*((x182-x183)|x184));

    if (t33 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x186 = -3;
	int8_t x187 = INT8_MAX;
	static int16_t x188 = INT16_MIN;
	int32_t t34 = 5;

    t34 = (x185*((x186-x187)|x188));

    if (t34 != 4259840) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x193 = -2;
	int32_t x195 = INT32_MIN;
	int8_t x196 = -1;
	static int32_t t35 = -5163;

    t35 = (x193*((x194-x195)|x196));

    if (t35 != 2) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x197 = -1;
	int16_t x199 = INT16_MIN;
	volatile int32_t t36 = -3716;

    t36 = (x197*((x198-x199)|x200));

    if (t36 != 1585037043) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x209 = 205;
	uint64_t x210 = 78886130LLU;
	uint16_t x212 = 14722U;
	static uint64_t t37 = 482187973522LLU;

    t37 = (x209*((x210-x211)|x212));

    if (t37 != 16172128970LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint16_t x213 = 31U;
	volatile uint64_t x214 = 78900825817113272LLU;
	static int16_t x215 = 0;

    t38 = (x213*((x214-x215)|x216));

    if (t38 != 2445925600331694113LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint32_t x225 = UINT32_MAX;
	int64_t x227 = INT64_MIN;
	uint16_t x228 = 106U;
	volatile uint64_t t39 = 24923397302969621LLU;

    t39 = (x225*((x226-x227)|x228));

    if (t39 != 9223372032559808513LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int64_t x229 = -1LL;
	static volatile int32_t x230 = -1283;
	uint16_t x231 = 95U;
	int32_t x232 = INT32_MIN;
	static int64_t t40 = -50773344111815376LL;

    t40 = (x229*((x230-x231)|x232));

    if (t40 != 1378LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x233 = 199554LLU;
	uint64_t x234 = 4126182909698110LLU;
	static volatile int32_t x235 = INT32_MAX;
	int16_t x236 = -1;
	volatile uint64_t t41 = 4399052228LLU;

    t41 = (x233*((x234-x235)|x236));

    if (t41 != 18446744073709352062LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint8_t x238 = 7U;
	int8_t x239 = INT8_MIN;
	uint8_t x240 = 0U;
	static volatile uint64_t t42 = 568145789LLU;

    t42 = (x237*((x238-x239)|x240));

    if (t42 != 18446744073709551481LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x241 = INT64_MAX;
	int32_t x242 = -1;
	volatile int16_t x243 = 0;
	volatile int16_t x244 = -1;
	volatile int64_t t43 = 554394651269856605LL;

    t43 = (x241*((x242-x243)|x244));

    if (t43 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x245 = INT8_MAX;
	int16_t x246 = -11359;
	static int16_t x247 = -8;
	int64_t x248 = INT64_MIN;
	int64_t t44 = -1066022683047LL;

    t44 = (x245*((x246-x247)|x248));

    if (t44 != -1441577LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x253 = 51U;
	uint8_t x254 = 36U;
	volatile int64_t x255 = -885403LL;
	uint8_t x256 = 0U;
	volatile int64_t t45 = -26047LL;

    t45 = (x253*((x254-x255)|x256));

    if (t45 != 45157389LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x261 = 3U;
	volatile int8_t x262 = INT8_MAX;
	static volatile int32_t x263 = 1167;
	static int16_t x264 = -1;
	static volatile int32_t t46 = 812;

    t46 = (x261*((x262-x263)|x264));

    if (t46 != -3) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x265 = 4U;
	uint64_t x266 = 5466922202LLU;
	int32_t x267 = INT32_MIN;
	static int32_t x268 = INT32_MIN;

    t47 = (x265*((x266-x267)|x268));

    if (t47 != 18446744069807436648LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x269 = -3;
	int64_t x270 = -1LL;
	int16_t x271 = INT16_MAX;
	static uint8_t x272 = 59U;
	int64_t t48 = -14480LL;

    t48 = (x269*((x270-x271)|x272));

    if (t48 != 98127LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint16_t x278 = 1U;
	uint32_t x279 = UINT32_MAX;
	static volatile uint64_t x280 = 28728638348340024LLU;

    t49 = (x277*((x278-x279)|x280));

    if (t49 != 3418707963452463094LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x281 = UINT32_MAX;
	volatile int8_t x282 = INT8_MIN;
	int32_t x283 = -1;
	int16_t x284 = INT16_MIN;
	uint32_t t50 = 535846U;

    t50 = (x281*((x282-x283)|x284));

    if (t50 != 127U) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x285 = 89LLU;
	static volatile int64_t x286 = INT64_MIN;
	int32_t x287 = -1;
	uint16_t x288 = 464U;
	uint64_t t51 = 30145320047LLU;

    t51 = (x285*((x286-x287)|x288));

    if (t51 != 9223372036854817193LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x299 = INT16_MAX;
	int16_t x300 = 12505;
	static int32_t t52 = -384;

    t52 = (x297*((x298-x299)|x300));

    if (t52 != 20263) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int64_t x306 = 14489998846LL;
	int64_t x307 = -2990293023089971LL;
	uint32_t x308 = UINT32_MAX;
	volatile int64_t t53 = 7543832689625776LL;

    t53 = (x305*((x306-x307)|x308));

    if (t53 != -382759788838125440LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x313 = 437U;
	static volatile int8_t x314 = 14;
	int16_t x316 = INT16_MIN;

    t54 = (x313*((x314-x315)|x316));

    if (t54 != -14313061) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x321 = 2U;
	volatile int8_t x322 = INT8_MIN;
	int64_t x324 = -12897484046768LL;
	volatile int64_t t55 = 25100193LL;

    t55 = (x321*((x322-x323)|x324));

    if (t55 != -94LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x325 = INT16_MAX;
	int64_t x326 = -359LL;
	uint8_t x327 = 7U;
	int64_t t56 = 68953LL;

    t56 = (x325*((x326-x327)|x328));

    if (t56 != -11992722LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x329 = -1;
	static int16_t x330 = INT16_MIN;
	int16_t x331 = -1;
	int16_t x332 = INT16_MIN;
	volatile int32_t t57 = 0;

    t57 = (x329*((x330-x331)|x332));

    if (t57 != 32767) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x333 = 603696357407055500LLU;
	static int64_t x336 = -514758400638LL;
	volatile uint64_t t58 = 1821500773570168803LLU;

    t58 = (x333*((x334-x335)|x336));

    if (t58 != 6855653059433912292LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x341 = 15;
	uint8_t x342 = 5U;
	int64_t x343 = INT64_MAX;
	volatile int64_t t59 = -1LL;

    t59 = (x341*((x342-x343)|x344));

    if (t59 != -15LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x345 = 12U;
	uint64_t x346 = 5108684705469193851LLU;
	int8_t x347 = 0;
	int16_t x348 = INT16_MIN;
	volatile uint64_t t60 = 400577493214LLU;

    t60 = (x345*((x346-x347)|x348));

    if (t60 != 18446744073709448644LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x349 = 445276220811517LLU;
	volatile int8_t x350 = -6;
	int8_t x351 = -6;
	uint64_t x352 = 14010258610LLU;
	volatile uint64_t t61 = 442LLU;

    t61 = (x349*((x350-x351)|x352));

    if (t61 != 4415141278813602794LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static int8_t x361 = -1;
	uint32_t x362 = 12436U;
	int32_t x364 = 38833399;

    t62 = (x361*((x362-x363)|x364));

    if (t62 != 2108637961U) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x365 = -1;
	int16_t x366 = INT16_MAX;
	static int64_t x367 = INT64_MAX;
	volatile int64_t t63 = 259376249385886LL;

    t63 = (x365*((x366-x367)|x368));

    if (t63 != 32768LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x373 = INT16_MAX;
	int8_t x375 = INT8_MIN;
	uint32_t x376 = 17U;
	uint32_t t64 = 908U;

    t64 = (x373*((x374-x375)|x376));

    if (t64 != 4947817U) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x378 = UINT64_MAX;
	volatile int16_t x379 = INT16_MAX;
	uint16_t x380 = 27U;
	uint64_t t65 = 8048593697067105LLU;

    t65 = (x377*((x378-x379)|x380));

    if (t65 != 18446744073705393509LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x382 = 5U;
	volatile int8_t x384 = INT8_MIN;
	uint64_t t66 = 452283944462099LLU;

    t66 = (x381*((x382-x383)|x384));

    if (t66 != 6801842875269316446LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x385 = 13587207231751178LLU;
	uint64_t x386 = 8349501312373009628LLU;
	int64_t x387 = INT64_MAX;
	int16_t x388 = INT16_MAX;
	volatile uint64_t t67 = 7108463751LLU;

    t67 = (x385*((x386-x387)|x388));

    if (t67 != 12959241708003671030LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x389 = 40U;
	static volatile int8_t x390 = INT8_MAX;
	int64_t x391 = -400139LL;
	uint16_t x392 = 1U;
	int64_t t68 = -48392787051033263LL;

    t68 = (x389*((x390-x391)|x392));

    if (t68 != 16010680LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x393 = -1;
	volatile uint32_t x395 = 15U;
	int32_t x396 = 20519;
	static uint32_t t69 = 598855U;

    t69 = (x393*((x394-x395)|x396));

    if (t69 != 4294944785U) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x397 = -1;
	int8_t x398 = INT8_MIN;
	uint8_t x399 = UINT8_MAX;
	static int64_t x400 = INT64_MIN;
	volatile int64_t t70 = 11996181LL;

    t70 = (x397*((x398-x399)|x400));

    if (t70 != 383LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x401 = -1LL;
	uint16_t x402 = 44U;
	volatile int8_t x403 = INT8_MIN;
	static int32_t x404 = INT32_MAX;
	int64_t t71 = -1LL;

    t71 = (x401*((x402-x403)|x404));

    if (t71 != -2147483647LL) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x406 = INT16_MAX;
	uint16_t x407 = UINT16_MAX;
	static int8_t x408 = -1;
	int32_t t72 = 5505094;

    t72 = (x405*((x406-x407)|x408));

    if (t72 != -65535) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x409 = 1U;
	int32_t x410 = -15250;
	static int8_t x411 = 5;
	uint8_t x412 = 28U;
	int32_t t73 = 51514812;

    t73 = (x409*((x410-x411)|x412));

    if (t73 != -15235) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x413 = 5131964LLU;
	int64_t x414 = -1LL;
	static volatile int64_t x415 = INT64_MIN;
	volatile int16_t x416 = INT16_MAX;
	uint64_t t74 = 7810814LLU;

    t74 = (x413*((x414-x415)|x416));

    if (t74 != 18446744073704419652LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x417 = 14U;
	volatile int16_t x418 = -1;
	int32_t x419 = INT32_MIN;
	int8_t x420 = INT8_MIN;
	static volatile int32_t t75 = 667;

    t75 = (x417*((x418-x419)|x420));

    if (t75 != -14) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile uint32_t x422 = 209076619U;
	int64_t x423 = 0LL;
	int8_t x424 = INT8_MIN;
	volatile int64_t t76 = 91049815635LL;

    t76 = (x421*((x422-x423)|x424));

    if (t76 != -29835LL) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x425 = INT16_MIN;
	int16_t x426 = INT16_MIN;
	uint32_t x427 = UINT32_MAX;
	volatile uint16_t x428 = UINT16_MAX;
	uint32_t t77 = 469U;

    t77 = (x425*((x426-x427)|x428));

    if (t77 != 32768U) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x433 = -10723;
	int16_t x434 = INT16_MIN;
	int8_t x436 = INT8_MIN;
	volatile int32_t t78 = -610388793;

    t78 = (x433*((x434-x435)|x436));

    if (t78 != 10723) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x437 = 953181756779297LL;
	uint16_t x439 = 248U;
	static int8_t x440 = -1;
	volatile int64_t t79 = 3792611180LL;

    t79 = (x437*((x438-x439)|x440));

    if (t79 != -953181756779297LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x445 = -1;
	int32_t x446 = -9;
	volatile int32_t t80 = -37979540;

    t80 = (x445*((x446-x447)|x448));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x449 = INT32_MIN;
	uint32_t x451 = UINT32_MAX;
	int16_t x452 = INT16_MAX;
	uint32_t t81 = 65504492U;

    t81 = (x449*((x450-x451)|x452));

    if (t81 != 2147483648U) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint16_t x453 = 1U;
	uint64_t x454 = UINT64_MAX;
	int64_t x455 = INT64_MAX;
	volatile uint64_t t82 = 10LLU;

    t82 = (x453*((x454-x455)|x456));

    if (t82 != 9223372499041879602LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x457 = 229491096411118854LLU;
	int16_t x458 = -1;
	int64_t x459 = -1LL;
	static int32_t x460 = INT32_MIN;

    t83 = (x457*((x458-x459)|x460));

    if (t83 != 2857095795298009088LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int8_t x462 = INT8_MIN;
	static volatile int8_t x464 = -1;
	volatile int32_t t84 = 83;

    t84 = (x461*((x462-x463)|x464));

    if (t84 != -255) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int64_t x465 = -1LL;
	volatile uint64_t x467 = 5050918249786684LLU;
	int8_t x468 = 5;
	uint64_t t85 = 6850154LLU;

    t85 = (x465*((x466-x467)|x468));

    if (t85 != 5050918249721145LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x469 = -6077503;
	static uint8_t x470 = UINT8_MAX;
	int32_t x471 = -1;
	volatile uint32_t t86 = 7U;

    t86 = (x469*((x470-x471)|x472));

    if (t86 != 2258948537U) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint32_t x473 = UINT32_MAX;
	int32_t x474 = -267;
	volatile uint16_t x475 = UINT16_MAX;
	int32_t x476 = -1;
	static volatile uint32_t t87 = 1483418339U;

    t87 = (x473*((x474-x475)|x476));

    if (t87 != 1U) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x481 = UINT8_MAX;
	int16_t x482 = INT16_MIN;
	int32_t x484 = INT32_MAX;
	static int32_t t88 = -34;

    t88 = (x481*((x482-x483)|x484));

    if (t88 != -255) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x485 = -1;
	static int32_t x486 = INT32_MAX;
	uint16_t x487 = 995U;
	static uint8_t x488 = 17U;
	int32_t t89 = 311646250;

    t89 = (x485*((x486-x487)|x488));

    if (t89 != -2147482653) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint16_t x489 = 3568U;
	uint32_t x490 = UINT32_MAX;
	uint32_t t90 = 350214492U;

    t90 = (x489*((x490-x491)|x492));

    if (t90 != 4294963728U) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x493 = INT16_MAX;
	static uint16_t x494 = 25U;
	int32_t x496 = 0;

    t91 = (x493*((x494-x495)|x496));

    if (t91 != 1074528231) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint8_t x497 = UINT8_MAX;
	int8_t x499 = INT8_MIN;

    t92 = (x497*((x498-x499)|x500));

    if (t92 != -21165LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x501 = INT16_MIN;
	int8_t x503 = INT8_MAX;
	int16_t x504 = INT16_MIN;
	volatile int64_t t93 = -5538053885LL;

    t93 = (x501*((x502-x503)|x504));

    if (t93 != 4194304LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile uint32_t x510 = UINT32_MAX;
	int16_t x511 = INT16_MIN;
	uint64_t x512 = UINT64_MAX;

    t94 = (x509*((x510-x511)|x512));

    if (t94 != 18400201862369692415LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x513 = -1LL;
	uint64_t x514 = UINT64_MAX;
	volatile int32_t x516 = INT32_MAX;
	volatile uint64_t t95 = 138393069089112LLU;

    t95 = (x513*((x514-x515)|x516));

    if (t95 != 1LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x517 = 7896U;
	int32_t x518 = -1;
	uint16_t x519 = 19U;
	int16_t x520 = INT16_MIN;
	int32_t t96 = 12951691;

    t96 = (x517*((x518-x519)|x520));

    if (t96 != -157920) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x521 = 3269U;
	uint64_t x522 = 997LLU;
	uint32_t x523 = UINT32_MAX;
	int16_t x524 = INT16_MIN;

    t97 = (x521*((x522-x523)|x524));

    if (t97 != 18446744073605695486LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x530 = 8U;
	volatile uint64_t x531 = 51LLU;
	uint64_t x532 = UINT64_MAX;
	volatile uint64_t t98 = 301661863394LLU;

    t98 = (x529*((x530-x531)|x532));

    if (t98 != 1LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x541 = INT32_MIN;
	uint8_t x542 = 1U;
	volatile uint64_t x543 = 68311258018LLU;
	uint32_t x544 = UINT32_MAX;
	static uint64_t t99 = 81004657724434LLU;

    t99 = (x541*((x542-x543)|x544));

    if (t99 != 9223372039002259456LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x546 = 2317661958084LL;
	static int16_t x547 = 10;
	uint32_t x548 = UINT32_MAX;
	volatile int64_t t100 = -1LL;

    t100 = (x545*((x546-x547)|x548));

    if (t100 != 3400067910203974LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x549 = 10;
	volatile uint64_t x550 = 3787766432LLU;
	volatile uint64_t t101 = 23272345187LLU;

    t101 = (x549*((x550-x551)|x552));

    if (t101 != 18446744073709551566LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x553 = 1U;
	static uint64_t x555 = 671200714628652LLU;

    t102 = (x553*((x554-x555)|x556));

    if (t102 != 18446744073709550582LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x562 = UINT64_MAX;
	int8_t x563 = INT8_MIN;
	int16_t x564 = -1;
	volatile uint64_t t103 = 31LLU;

    t103 = (x561*((x562-x563)|x564));

    if (t103 != 3LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	static int64_t x569 = -5840LL;
	static int64_t x570 = -192713998LL;
	int16_t x571 = INT16_MAX;
	static int64_t x572 = -1LL;

    t104 = (x569*((x570-x571)|x572));

    if (t104 != 5840LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x573 = -1;
	int16_t x574 = INT16_MIN;
	static uint32_t x575 = 129556U;
	static uint32_t x576 = 349U;
	uint32_t t105 = 2U;

    t105 = (x573*((x574-x575)|x576));

    if (t105 != 162307U) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x582 = 488U;
	uint16_t x583 = UINT16_MAX;
	uint64_t x584 = UINT64_MAX;
	static uint64_t t106 = 784747776LLU;

    t106 = (x581*((x582-x583)|x584));

    if (t106 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x597 = INT8_MIN;
	uint32_t x598 = UINT32_MAX;
	static uint32_t x599 = UINT32_MAX;
	static volatile int64_t x600 = -183920574LL;

    t107 = (x597*((x598-x599)|x600));

    if (t107 != 23541833472LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static int16_t x603 = INT16_MIN;
	int8_t x604 = 1;
	volatile int32_t t108 = 1;

    t108 = (x601*((x602-x603)|x604));

    if (t108 != -32768) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x605 = 4010137593217808731LLU;
	static int64_t x606 = -58535166799LL;
	int64_t x607 = INT64_MIN;
	volatile uint8_t x608 = 1U;
	volatile uint64_t t109 = 4LLU;

    t109 = (x605*((x606-x607)|x608));

    if (t109 != 8304552541110451179LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint64_t x609 = 1990907979775LLU;
	int16_t x611 = 10;
	int64_t x612 = INT64_MAX;

    t110 = (x609*((x610-x611)|x612));

    if (t110 != 9223370045946796033LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x613 = UINT8_MAX;
	volatile int32_t x614 = -1;
	volatile uint16_t x615 = 23U;
	int8_t x616 = 0;
	volatile int32_t t111 = 27187;

    t111 = (x613*((x614-x615)|x616));

    if (t111 != -6120) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x617 = -1;
	volatile uint64_t x618 = 1557LLU;
	int16_t x619 = -1;
	uint32_t x620 = 18866U;
	uint64_t t112 = 0LLU;

    t112 = (x617*((x618-x619)|x620));

    if (t112 != 18446744073709531210LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x625 = -1LL;
	uint16_t x627 = 11923U;
	uint16_t x628 = 16158U;
	volatile int64_t t113 = 59157574LL;

    t113 = (x625*((x626-x627)|x628));

    if (t113 != 97LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x629 = 1U;
	static int64_t x630 = 244252109LL;
	static uint64_t x631 = UINT64_MAX;
	static uint64_t x632 = 24746LLU;
	static volatile uint64_t t114 = 5711114986LLU;

    t114 = (x629*((x630-x631)|x632));

    if (t114 != 244252142LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x633 = 398827539995150LLU;
	int16_t x635 = 1733;
	int8_t x636 = -1;

    t115 = (x633*((x634-x635)|x636));

    if (t115 != 18446345246169556466LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint32_t x641 = 184222U;
	volatile int16_t x642 = -3466;
	static int32_t x643 = -555;
	int64_t x644 = 58756949028LL;
	volatile int64_t t116 = -29985820401299340LL;

    t116 = (x641*((x642-x643)|x644));

    if (t116 != -535533354LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x657 = -1;
	uint8_t x658 = 21U;
	static int32_t x660 = INT32_MIN;
	volatile int32_t t117 = -140;

    t117 = (x657*((x658-x659)|x660));

    if (t117 != 2147450859) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint32_t x661 = 293108386U;
	volatile uint8_t x662 = UINT8_MAX;
	volatile uint64_t x663 = 38361082368317LLU;

    t118 = (x661*((x662-x663)|x664));

    if (t118 != 8558946847115717828LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x665 = INT8_MIN;
	int8_t x666 = INT8_MAX;
	uint16_t x667 = 112U;
	uint8_t x668 = 123U;
	int32_t t119 = -13;

    t119 = (x665*((x666-x667)|x668));

    if (t119 != -16256) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x674 = INT16_MAX;
	int16_t x676 = INT16_MIN;
	volatile int64_t t120 = 139350691LL;

    t120 = (x673*((x674-x675)|x676));

    if (t120 != -51500952822354LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x681 = 3U;
	static uint64_t x682 = UINT64_MAX;
	uint16_t x683 = UINT16_MAX;
	static volatile int64_t x684 = -1LL;
	static uint64_t t121 = 0LLU;

    t121 = (x681*((x682-x683)|x684));

    if (t121 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x689 = 288LL;
	int8_t x690 = INT8_MIN;
	volatile uint64_t x691 = UINT64_MAX;
	int16_t x692 = -1;
	static uint64_t t122 = 3LLU;

    t122 = (x689*((x690-x691)|x692));

    if (t122 != 18446744073709551328LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x694 = 15100U;
	static int64_t x695 = -10569335493480062LL;
	volatile int32_t x696 = -111063;
	volatile int64_t t123 = -2754387991LL;

    t123 = (x693*((x694-x695)|x696));

    if (t123 != -1635408250LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x697 = INT32_MIN;
	int64_t x698 = INT64_MIN;
	uint64_t x699 = 19344LLU;
	static uint32_t x700 = 1292U;
	uint64_t t124 = 142077315673170375LLU;

    t124 = (x697*((x698-x699)|x700));

    if (t124 != 40965398069248LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x701 = UINT64_MAX;
	static volatile int64_t x703 = -163676009LL;
	uint64_t x704 = 247309528155586LLU;

    t125 = (x701*((x702-x703)|x704));

    if (t125 != 18446496764160409622LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x705 = INT8_MIN;
	static uint32_t x706 = 550106526U;
	int32_t x708 = INT32_MIN;

    t126 = (x705*((x706-x707)|x708));

    if (t126 != 114983992832LL) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x709 = INT16_MAX;
	volatile uint8_t x710 = UINT8_MAX;
	static int16_t x711 = -11265;
	static uint32_t x712 = UINT32_MAX;
	uint32_t t127 = 23805727U;

    t127 = (x709*((x710-x711)|x712));

    if (t127 != 4294934529U) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x718 = -1;
	int8_t x719 = INT8_MIN;
	static int8_t x720 = -1;
	static uint32_t t128 = 153806476U;

    t128 = (x717*((x718-x719)|x720));

    if (t128 != 1U) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x721 = INT32_MIN;
	uint32_t x722 = 3U;
	int32_t x723 = 2618;
	uint32_t x724 = 26U;
	volatile uint32_t t129 = 98143602U;

    t129 = (x721*((x722-x723)|x724));

    if (t129 != 2147483648U) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x733 = INT16_MIN;
	int64_t x734 = -1LL;
	uint16_t x735 = 572U;
	uint32_t x736 = 1U;
	volatile int64_t t130 = 332962LL;

    t130 = (x733*((x734-x735)|x736));

    if (t130 != 18776064LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x745 = -1;
	static int32_t x746 = -14264915;
	static uint16_t x747 = 6U;
	static int64_t x748 = -1LL;
	int64_t t131 = -4289313102LL;

    t131 = (x745*((x746-x747)|x748));

    if (t131 != 1LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x749 = INT16_MIN;
	volatile int8_t x750 = INT8_MIN;
	int16_t x751 = INT16_MAX;
	int8_t x752 = INT8_MIN;

    t132 = (x749*((x750-x751)|x752));

    if (t132 != 4161536) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint16_t x757 = 3954U;
	int8_t x759 = INT8_MIN;
	int32_t t133 = 348152228;

    t133 = (x757*((x758-x759)|x760));

    if (t133 != -7908) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x761 = 44798361849LLU;
	volatile int32_t x762 = 20;
	int8_t x763 = -9;
	static uint64_t x764 = 3256207065361082LLU;
	uint64_t t134 = 341257623943556454LLU;

    t134 = (x761*((x762-x763)|x764));

    if (t134 != 3858349672320652231LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x765 = 6018685157234720LL;
	int32_t x766 = -1;
	static int8_t x767 = -1;
	static uint8_t x768 = 7U;
	int64_t t135 = 4494336508227110LL;

    t135 = (x765*((x766-x767)|x768));

    if (t135 != 42130796100643040LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x769 = -6;
	volatile int64_t x771 = -1LL;
	int64_t x772 = 692802LL;
	int64_t t136 = -42774113LL;

    t136 = (x769*((x770-x771)|x772));

    if (t136 != 8420618417796LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x775 = INT32_MIN;
	int16_t x776 = -9103;
	uint64_t t137 = 1842281098LLU;

    t137 = (x773*((x774-x775)|x776));

    if (t137 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x777 = 117613201796514LL;
	int8_t x778 = -1;
	uint8_t x779 = 93U;
	uint8_t x780 = UINT8_MAX;
	volatile int64_t t138 = -17LL;

    t138 = (x777*((x778-x779)|x780));

    if (t138 != -117613201796514LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x782 = -1;
	int16_t x783 = -31;
	static volatile int8_t x784 = 61;
	volatile int32_t t139 = 1151;

    t139 = (x781*((x782-x783)|x784));

    if (t139 != 1953) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x785 = INT8_MIN;
	int64_t x787 = INT64_MAX;
	int32_t x788 = -2;

    t140 = (x785*((x786-x787)|x788));

    if (t140 != 256LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static int64_t x789 = 32055LL;
	uint8_t x791 = UINT8_MAX;
	uint8_t x792 = UINT8_MAX;

    t141 = (x789*((x790-x791)|x792));

    if (t141 != 18446744073709519561LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x793 = INT32_MIN;
	int64_t x794 = -46158632007116LL;
	uint32_t x795 = 35103878U;
	volatile int32_t x796 = -94;
	int64_t t142 = -165292902LL;

    t142 = (x793*((x794-x795)|x796));

    if (t142 != 176093659136LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x798 = 1154131952LLU;
	int16_t x799 = -4;
	int8_t x800 = INT8_MAX;
	volatile uint64_t t143 = 126LLU;

    t143 = (x797*((x798-x799)|x800));

    if (t143 != 18446706255113256960LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x802 = -57;
	uint8_t x803 = 119U;
	int8_t x804 = -1;

    t144 = (x801*((x802-x803)|x804));

    if (t144 != -4051) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x805 = 60U;
	uint32_t x806 = 1170748619U;
	static int8_t x807 = 7;
	int16_t x808 = -1;
	static volatile uint32_t t145 = 0U;

    t145 = (x805*((x806-x807)|x808));

    if (t145 != 4294967236U) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x810 = -1153LL;
	uint8_t x811 = UINT8_MAX;
	volatile uint8_t x812 = UINT8_MAX;
	int64_t t146 = 876088439296LL;

    t146 = (x809*((x810-x811)|x812));

    if (t146 != -5124LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x813 = INT16_MIN;
	int16_t x815 = 5;
	volatile uint16_t x816 = 3019U;
	volatile uint32_t t147 = 304U;

    t147 = (x813*((x814-x815)|x816));

    if (t147 != 2988081152U) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x821 = -44;
	uint32_t x822 = 65455U;
	int8_t x823 = -35;
	uint64_t x824 = UINT64_MAX;
	static uint64_t t148 = 14720LLU;

    t148 = (x821*((x822-x823)|x824));

    if (t148 != 44LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int32_t x825 = INT32_MIN;
	int16_t x826 = INT16_MIN;
	int16_t x827 = -1;
	int64_t x828 = INT64_MIN;
	int64_t t149 = 111LL;

    t149 = (x825*((x826-x827)|x828));

    if (t149 != 70366596694016LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static int64_t x833 = 91008820124329LL;
	uint64_t x834 = 1095736548LLU;
	volatile int32_t x835 = INT32_MIN;
	uint32_t x836 = UINT32_MAX;

    t150 = (x833*((x834-x835)|x836));

    if (t150 != 11845812699199628631LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x837 = -1;
	static int32_t x838 = 7114;
	int16_t x839 = INT16_MAX;
	static int16_t x840 = 2;
	volatile int32_t t151 = 383958;

    t151 = (x837*((x838-x839)|x840));

    if (t151 != 25653) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x842 = -1LL;
	uint8_t x844 = 2U;
	volatile int64_t t152 = -734825LL;

    t152 = (x841*((x842-x843)|x844));

    if (t152 != 15966554058330LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x845 = INT16_MAX;
	static volatile int64_t x846 = -9LL;
	static int64_t x847 = INT64_MIN;
	int64_t x848 = INT64_MIN;
	volatile int64_t t153 = 9826509974642086LL;

    t153 = (x845*((x846-x847)|x848));

    if (t153 != -294903LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x853 = 4871644799LLU;
	volatile uint64_t x854 = 3747595LLU;
	int16_t x855 = -10;
	int16_t x856 = -3;
	static uint64_t t154 = 2038465608293LLU;

    t154 = (x853*((x854-x855)|x856));

    if (t154 != 18446744059094617219LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x861 = -22;
	volatile uint64_t x862 = 124661365LLU;
	uint32_t x863 = UINT32_MAX;
	uint32_t x864 = 13053618U;
	uint64_t t155 = 405263045LLU;

    t155 = (x861*((x862-x863)|x864));

    if (t155 != 91560736476LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	static int32_t x865 = INT32_MAX;
	int8_t x866 = 0;
	volatile int32_t x868 = -1;
	static uint64_t t156 = 9941972234309LLU;

    t156 = (x865*((x866-x867)|x868));

    if (t156 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x869 = UINT64_MAX;
	uint16_t x870 = UINT16_MAX;
	volatile int16_t x871 = INT16_MIN;
	int8_t x872 = INT8_MIN;
	volatile uint64_t t157 = 0LLU;

    t157 = (x869*((x870-x871)|x872));

    if (t157 != 1LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint64_t x873 = 4524574728771978LLU;
	uint8_t x874 = UINT8_MAX;
	static int64_t x875 = 0LL;
	int8_t x876 = 11;
	uint64_t t158 = 13564103808895898LLU;

    t158 = (x873*((x874-x875)|x876));

    if (t158 != 1153766555836854390LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x877 = 324195830;
	uint8_t x878 = UINT8_MAX;
	volatile int8_t x879 = INT8_MIN;
	int8_t x880 = -38;
	volatile int32_t t159 = 29673;

    t159 = (x877*((x878-x879)|x880));

    if (t159 != -324195830) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint64_t x885 = 27331802593LLU;
	int8_t x887 = -1;
	static int16_t x888 = INT16_MIN;
	volatile uint64_t t160 = 1346661551438LLU;

    t160 = (x885*((x886-x887)|x888));

    if (t160 != 18445848465202184192LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x889 = -28;
	int32_t x890 = 849660;
	volatile int64_t x891 = -1LL;
	volatile int64_t t161 = 2382568545685770LL;

    t161 = (x889*((x890-x891)|x892));

    if (t161 != 28LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x894 = UINT32_MAX;

    t162 = (x893*((x894-x895)|x896));

    if (t162 != 18446744069414551553LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x897 = 0;
	uint64_t x898 = 55696303584566281LLU;
	volatile uint64_t x899 = UINT64_MAX;
	static uint16_t x900 = 4U;
	volatile uint64_t t163 = 3886394254LLU;

    t163 = (x897*((x898-x899)|x900));

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int8_t x901 = INT8_MIN;
	int16_t x902 = -181;
	volatile int32_t t164 = 1;

    t164 = (x901*((x902-x903)|x904));

    if (t164 != 55808) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x905 = -732947267017609LL;
	static int8_t x906 = INT8_MIN;
	int64_t x908 = -19639152175098LL;
	volatile int64_t t165 = 662714103000LL;

    t165 = (x905*((x906-x907)|x908));

    if (t165 != 276321119665638593LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x914 = UINT8_MAX;
	int64_t x915 = -1LL;
	uint64_t x916 = UINT64_MAX;

    t166 = (x913*((x914-x915)|x916));

    if (t166 != 192LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x917 = UINT64_MAX;
	static uint16_t x920 = 1549U;
	uint64_t t167 = 387266890LLU;

    t167 = (x917*((x918-x919)|x920));

    if (t167 != 32771LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x921 = INT16_MAX;
	uint16_t x922 = 24U;
	int64_t x923 = -1LL;
	int8_t x924 = -1;
	volatile int64_t t168 = -124305385LL;

    t168 = (x921*((x922-x923)|x924));

    if (t168 != -32767LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x933 = 1915699759995511LLU;
	static volatile uint64_t x934 = 24226175LLU;
	int16_t x935 = 290;
	int16_t x936 = INT16_MIN;
	uint64_t t169 = 46550358282LLU;

    t169 = (x933*((x934-x935)|x936));

    if (t169 != 12361508105629365563LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int32_t x938 = 3475704;
	volatile int8_t x939 = INT8_MIN;
	static int64_t x940 = INT64_MAX;
	static volatile int64_t t170 = -9LL;

    t170 = (x937*((x938-x939)|x940));

    if (t170 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint16_t x941 = UINT16_MAX;
	static volatile uint8_t x942 = 48U;
	int8_t x944 = -7;
	static volatile int32_t t171 = 408523;

    t171 = (x941*((x942-x943)|x944));

    if (t171 != -458745) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x945 = 0;
	uint64_t x946 = 105527531LLU;
	volatile uint16_t x947 = UINT16_MAX;
	static int8_t x948 = INT8_MIN;

    t172 = (x945*((x946-x947)|x948));

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x949 = 0U;
	volatile int16_t x950 = -10;
	uint8_t x951 = 2U;
	uint8_t x952 = 28U;

    t173 = (x949*((x950-x951)|x952));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x957 = 1U;
	uint32_t x958 = 14012759U;
	int16_t x959 = 0;
	int8_t x960 = INT8_MAX;
	volatile uint32_t t174 = 483255U;

    t174 = (x957*((x958-x959)|x960));

    if (t174 != 14012799U) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x961 = -2;
	uint8_t x962 = 8U;
	static int64_t x963 = 2394191244945LL;
	uint8_t x964 = UINT8_MAX;

    t175 = (x961*((x962-x963)|x964));

    if (t175 != 4788382489602LL) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint64_t x965 = UINT64_MAX;
	uint64_t x966 = 2907231010227LLU;
	int64_t x967 = INT64_MAX;
	int32_t x968 = -1;

    t176 = (x965*((x966-x967)|x968));

    if (t176 != 1LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x970 = 1119695763LL;
	static int8_t x971 = -1;
	static uint8_t x972 = UINT8_MAX;
	static volatile int64_t t177 = 242896678LL;

    t177 = (x969*((x970-x971)|x972));

    if (t177 != 285522447105LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x978 = 1;
	static uint64_t x980 = 4232425817LLU;
	uint64_t t178 = 4412LLU;

    t178 = (x977*((x978-x979)|x980));

    if (t178 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x985 = 31;
	uint64_t x986 = UINT64_MAX;
	int64_t x987 = INT64_MIN;
	int32_t x988 = INT32_MIN;
	static uint64_t t179 = 29988256286083181LLU;

    t179 = (x985*((x986-x987)|x988));

    if (t179 != 18446744073709551585LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x993 = 18;
	int16_t x994 = INT16_MIN;
	static uint64_t x995 = UINT64_MAX;
	volatile uint8_t x996 = 1U;
	uint64_t t180 = 31838273573817LLU;

    t180 = (x993*((x994-x995)|x996));

    if (t180 != 18446744073708961810LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x997 = -30;
	int8_t x998 = INT8_MIN;
	volatile uint8_t x999 = 10U;
	int64_t x1000 = INT64_MIN;
	static volatile int64_t t181 = 22591859LL;

    t181 = (x997*((x998-x999)|x1000));

    if (t181 != 4140LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x1001 = -115391845;
	int32_t x1002 = INT32_MIN;
	uint32_t x1003 = 1614U;
	int8_t x1004 = 8;
	uint32_t t182 = 18971372U;

    t182 = (x1001*((x1002-x1003)|x1004));

    if (t182 != 2783192990U) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x1005 = INT32_MAX;
	static int64_t x1006 = INT64_MIN;
	uint64_t t183 = 1029605202552LLU;

    t183 = (x1005*((x1006-x1007)|x1008));

    if (t183 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint32_t x1017 = 1347370770U;
	int8_t x1018 = -7;
	volatile int16_t x1019 = INT16_MIN;
	int32_t x1020 = INT32_MIN;
	uint32_t t184 = 3049U;

    t184 = (x1017*((x1018-x1019)|x1020));

    if (t184 != 1834894978U) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x1021 = UINT16_MAX;
	int8_t x1022 = INT8_MIN;
	uint32_t x1024 = 28U;
	uint32_t t185 = 3U;

    t185 = (x1021*((x1022-x1023)|x1024));

    if (t185 != 4273996994U) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x1025 = 7488918877LLU;
	int16_t x1026 = -1;
	int8_t x1027 = INT8_MIN;

    t186 = (x1025*((x1026-x1027)|x1028));

    if (t186 != 951092697379LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x1034 = UINT8_MAX;
	volatile uint32_t x1035 = UINT32_MAX;
	int32_t x1036 = 484;
	static uint32_t t187 = 62808U;

    t187 = (x1033*((x1034-x1035)|x1036));

    if (t187 != 4294966812U) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x1037 = INT16_MIN;
	uint64_t x1039 = 29806639150LLU;
	static int16_t x1040 = INT16_MIN;

    t188 = (x1037*((x1038-x1039)|x1040));

    if (t188 != 756219904LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint8_t x1041 = 20U;
	uint64_t x1043 = UINT64_MAX;
	uint32_t x1044 = 6353738U;
	uint64_t t189 = 51762585LLU;

    t189 = (x1041*((x1042-x1043)|x1044));

    if (t189 != 127077400LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile uint32_t x1045 = 0U;
	int8_t x1046 = INT8_MIN;
	uint8_t x1047 = 15U;
	static int16_t x1048 = -2098;
	volatile uint32_t t190 = 2U;

    t190 = (x1045*((x1046-x1047)|x1048));

    if (t190 != 0U) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x1049 = UINT64_MAX;
	int16_t x1050 = INT16_MIN;
	int32_t x1051 = INT32_MIN;
	static int16_t x1052 = INT16_MIN;

    t191 = (x1049*((x1050-x1051)|x1052));

    if (t191 != 32768LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1057 = -1;
	static int64_t x1059 = INT64_MAX;
	int8_t x1060 = INT8_MAX;

    t192 = (x1057*((x1058-x1059)|x1060));

    if (t192 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x1061 = 484988896U;
	int64_t x1063 = 22LL;
	volatile int8_t x1064 = INT8_MIN;
	uint64_t t193 = 589911609927030LLU;

    t193 = (x1061*((x1062-x1063)|x1064));

    if (t193 != 18446744015025895200LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x1065 = 12U;
	int32_t x1066 = 25832653;
	int16_t x1067 = INT16_MIN;
	volatile uint8_t x1068 = 7U;
	volatile int32_t t194 = 1;

    t194 = (x1065*((x1066-x1067)|x1068));

    if (t194 != 310385076) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint64_t x1069 = 17569022014986975LLU;
	uint32_t x1071 = 2U;
	volatile uint64_t t195 = 2LLU;

    t195 = (x1069*((x1070-x1071)|x1072));

    if (t195 != 11786915396107377645LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x1073 = -1LL;
	int8_t x1074 = INT8_MAX;
	static uint8_t x1075 = UINT8_MAX;
	uint32_t x1076 = 5700U;
	volatile int64_t t196 = -4543399282874742LL;

    t196 = (x1073*((x1074-x1075)|x1076));

    if (t196 != -4294967236LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x1077 = 10;
	uint64_t x1079 = 458061939858582601LLU;
	int8_t x1080 = INT8_MIN;
	uint64_t t197 = 68LLU;

    t197 = (x1077*((x1078-x1079)|x1080));

    if (t197 != 18446744073709550846LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint64_t x1082 = 104LLU;
	int16_t x1083 = -628;
	volatile uint8_t x1084 = 2U;
	volatile uint64_t t198 = 3671196264LLU;

    t198 = (x1081*((x1082-x1083)|x1084));

    if (t198 != 18446744073709457664LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x1085 = 2036;
	int8_t x1086 = INT8_MIN;
	int64_t x1087 = 674951727LL;
	volatile uint64_t t199 = 99466210759LLU;

    t199 = (x1085*((x1086-x1087)|x1088));

    if (t199 != 18446744073709549580LLU) { NG(); } else { ; }
	
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

