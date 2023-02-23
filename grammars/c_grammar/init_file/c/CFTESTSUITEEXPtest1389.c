
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

static int16_t x2 = 0;
int64_t x7 = -1LL;
int16_t x18 = -1;
volatile int32_t t2 = 21885;
volatile int32_t t5 = 488520385;
static int16_t x47 = 0;
static int32_t x51 = INT32_MIN;
uint8_t x52 = 13U;
int32_t x53 = -1;
volatile int32_t t8 = -11;
int32_t x67 = -34105;
volatile uint32_t t12 = 4543U;
volatile uint8_t x82 = 0U;
static int32_t x91 = 4;
int16_t x99 = -1;
int16_t x105 = INT16_MIN;
int8_t x110 = -58;
uint64_t t18 = 200456110981928LLU;
int16_t x113 = -1;
static uint16_t x117 = UINT16_MAX;
int32_t x119 = INT32_MIN;
int8_t x136 = INT8_MIN;
uint64_t t24 = 96LLU;
volatile int32_t t25 = 994;
int64_t x154 = 360572916765LL;
int64_t x156 = 317315231502120LL;
int16_t x158 = INT16_MIN;
uint32_t t27 = 9U;
int16_t x163 = INT16_MAX;
uint8_t x173 = 0U;
int32_t x175 = -1;
int8_t x177 = INT8_MAX;
int64_t x179 = INT64_MIN;
int64_t x184 = -1969885966431627365LL;
volatile uint16_t x185 = UINT16_MAX;
uint8_t x196 = UINT8_MAX;
uint64_t x201 = UINT64_MAX;
int8_t x202 = INT8_MIN;
uint64_t t35 = 367082546917LLU;
int8_t x209 = INT8_MAX;
uint16_t x210 = UINT16_MAX;
volatile int32_t t37 = 923584;
int16_t x213 = -41;
volatile int64_t x215 = -1LL;
int32_t t38 = 0;
static uint16_t x234 = 6863U;
uint64_t t41 = 1425196LLU;
uint8_t x239 = 7U;
volatile uint64_t t42 = 2095173515818457LLU;
int64_t x242 = -7LL;
volatile uint64_t x248 = 299282138113632998LLU;
int8_t x253 = -6;
uint8_t x256 = 1U;
volatile int32_t t45 = 919169;
int32_t x264 = -276;
volatile uint16_t x282 = 2U;
uint16_t x283 = UINT16_MAX;
static int32_t x289 = -1;
uint16_t x290 = 2U;
int64_t x295 = -1LL;
volatile uint64_t t51 = 28529161189096LLU;
int8_t x301 = -13;
static volatile uint64_t x302 = 2301LLU;
int8_t x330 = -1;
static int64_t x334 = -1LL;
uint16_t x335 = 5U;
uint16_t x345 = UINT16_MAX;
static volatile int32_t x349 = 1;
int16_t x350 = -1;
static volatile int32_t t64 = 389982072;
uint16_t x366 = 1377U;
volatile int8_t x371 = INT8_MIN;
uint64_t x387 = UINT64_MAX;
static int16_t x407 = 9;
static uint8_t x411 = 14U;
static int32_t t76 = -20114309;
int32_t x414 = INT32_MIN;
int32_t t77 = -128312;
int16_t x420 = -1;
uint32_t x430 = UINT32_MAX;
uint64_t x431 = 16166376LLU;
int8_t x438 = INT8_MIN;
int32_t x439 = -11;
uint32_t x455 = UINT32_MAX;
uint64_t t88 = 364566895LLU;
int8_t x478 = INT8_MIN;
uint32_t x494 = 406769U;
int16_t x500 = -1;
uint16_t x510 = 2343U;
int8_t x512 = INT8_MIN;
int8_t x515 = -1;
static int8_t x518 = INT8_MIN;
uint64_t x520 = 1LLU;
uint32_t x521 = 10006U;
int8_t x525 = INT8_MAX;
int8_t x540 = INT8_MIN;
int64_t x543 = INT64_MIN;
int8_t x557 = INT8_MAX;
int16_t x559 = INT16_MIN;
int32_t t107 = 1074843;
int64_t x561 = 106371302LL;
static uint64_t x567 = 413LLU;
int32_t t109 = -5;
uint16_t x569 = 30U;
static int16_t x572 = 1;
volatile uint16_t x580 = 15638U;
int8_t x588 = INT8_MIN;
uint32_t x594 = UINT32_MAX;
uint64_t x596 = UINT64_MAX;
uint64_t x597 = UINT64_MAX;
uint16_t x601 = UINT16_MAX;
uint8_t x602 = UINT8_MAX;
int8_t x604 = -1;
volatile uint64_t t118 = 1381115503LLU;
int32_t x615 = INT32_MIN;
int64_t x616 = -1LL;
static uint8_t x618 = 16U;
int16_t x629 = INT16_MIN;
volatile int16_t x631 = INT16_MIN;
volatile int8_t x632 = INT8_MIN;
volatile int32_t t123 = 455572695;
static uint16_t x637 = 13U;
int64_t x640 = 30739397443782LL;
uint64_t x649 = 7224719LLU;
uint16_t x650 = UINT16_MAX;
uint64_t t127 = 156LLU;
int64_t t128 = 255860474LL;
int64_t x713 = INT64_MAX;
int16_t x724 = INT16_MAX;
volatile int16_t x725 = INT16_MIN;
static int16_t x726 = INT16_MIN;
volatile int32_t t139 = -23147039;
uint16_t x732 = UINT16_MAX;
uint32_t t140 = 128604477U;
int32_t x748 = -1;
int8_t x764 = INT8_MIN;
int32_t x772 = 1779;
int16_t x779 = 97;
static int16_t x789 = 368;
int64_t x801 = -483882125LL;
volatile int64_t x802 = -6765103381LL;
uint64_t x806 = UINT64_MAX;
int64_t x807 = INT64_MIN;
volatile uint16_t x811 = 13036U;
static int8_t x817 = 5;
uint64_t x819 = 78704LLU;
volatile uint32_t x838 = 7U;
volatile uint32_t t158 = 0U;
int8_t x841 = INT8_MIN;
int8_t x843 = INT8_MIN;
static uint32_t x844 = 127U;
static int8_t x847 = INT8_MIN;
volatile uint64_t x852 = 5199549980207618556LLU;
volatile int32_t t162 = -1;
volatile uint32_t x859 = 4915145U;
static int8_t x890 = -1;
uint32_t x894 = 212247U;
static volatile int32_t x895 = 9270526;
uint32_t x897 = UINT32_MAX;
int16_t x905 = -222;
int8_t x909 = -1;
uint8_t x918 = UINT8_MAX;
volatile uint8_t x920 = 10U;
int64_t t176 = 4143177094289056LL;
static int16_t x939 = INT16_MIN;
volatile int32_t x940 = -1;
static int32_t t179 = -15045;
uint32_t x955 = 40729659U;
volatile int32_t t181 = 1;
uint32_t x959 = 16747049U;
uint16_t x961 = UINT16_MAX;
static uint16_t x964 = 219U;
static int64_t x1004 = -1LL;
volatile int32_t x1005 = -1;
int8_t x1006 = INT8_MAX;
int32_t t191 = -39248;
uint8_t x1017 = 1U;
static int32_t x1018 = 18214191;
uint16_t x1019 = UINT16_MAX;
int32_t t192 = -12;
int8_t x1021 = -1;
int8_t x1024 = INT8_MIN;
volatile int32_t t193 = -3;
uint64_t t194 = 2956373LLU;
int64_t t197 = INT64_MIN;
volatile int64_t t198 = 50577108678427LL;
static int8_t x1055 = INT8_MIN;


void f0(void) {
    	uint8_t x1 = UINT8_MAX;
	int64_t x3 = -139390141269LL;
	static volatile uint16_t x4 = UINT16_MAX;
	volatile int32_t t0 = 138208;

    t0 = (x1*((x2==x3)-x4));

    if (t0 != -16711425) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x5 = -1;
	uint16_t x6 = UINT16_MAX;
	int8_t x8 = 0;
	int32_t t1 = 0;

    t1 = (x5*((x6==x7)-x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x17 = INT8_MIN;
	static uint64_t x19 = 5722516559LLU;
	uint16_t x20 = 52U;

    t2 = (x17*((x18==x19)-x20));

    if (t2 != 6656) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x25 = INT16_MIN;
	uint32_t x26 = 979546U;
	int16_t x27 = -157;
	int32_t x28 = -1;
	volatile int32_t t3 = 3055;

    t3 = (x25*((x26==x27)-x28));

    if (t3 != -32768) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x33 = 1612U;
	static volatile uint32_t x34 = 113123U;
	int16_t x35 = -1858;
	static int16_t x36 = INT16_MIN;
	static int32_t t4 = 6973218;

    t4 = (x33*((x34==x35)-x36));

    if (t4 != 52822016) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint16_t x37 = 54U;
	int64_t x38 = INT64_MIN;
	uint32_t x39 = 493U;
	int16_t x40 = INT16_MAX;

    t5 = (x37*((x38==x39)-x40));

    if (t5 != -1769418) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x45 = UINT64_MAX;
	int16_t x46 = -1;
	static int8_t x48 = -1;
	uint64_t t6 = UINT64_MAX;

    t6 = (x45*((x46==x47)-x48));

    if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x49 = -10377;
	static int16_t x50 = -1053;
	volatile int32_t t7 = -29;

    t7 = (x49*((x50==x51)-x52));

    if (t7 != 134901) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x54 = 5;
	int32_t x55 = 8;
	int8_t x56 = INT8_MIN;

    t8 = (x53*((x54==x55)-x56));

    if (t8 != -128) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x57 = 275;
	int16_t x58 = INT16_MIN;
	int32_t x59 = -7346077;
	int64_t x60 = 28825571614007758LL;
	int64_t t9 = -951641386182409LL;

    t9 = (x57*((x58==x59)-x60));

    if (t9 != -7927032193852133450LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x61 = 30;
	int8_t x62 = INT8_MAX;
	static int8_t x63 = -13;
	static uint32_t x64 = UINT32_MAX;
	static volatile uint32_t t10 = 7369U;

    t10 = (x61*((x62==x63)-x64));

    if (t10 != 30U) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x65 = -6;
	int16_t x66 = -61;
	int8_t x68 = INT8_MIN;
	int32_t t11 = -501043949;

    t11 = (x65*((x66==x67)-x68));

    if (t11 != -768) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x73 = 6;
	int64_t x74 = 32973LL;
	uint8_t x75 = 21U;
	uint32_t x76 = 0U;

    t12 = (x73*((x74==x75)-x76));

    if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x77 = INT32_MIN;
	int16_t x78 = -1;
	int8_t x79 = 1;
	int16_t x80 = -1;
	int32_t t13 = INT32_MIN;

    t13 = (x77*((x78==x79)-x80));

    if (t13 != INT32_MIN) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x81 = -1;
	static uint16_t x83 = 150U;
	uint64_t x84 = 1030LLU;
	static volatile uint64_t t14 = 43540951LLU;

    t14 = (x81*((x82==x83)-x84));

    if (t14 != 1030LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x89 = -1LL;
	static int8_t x90 = INT8_MAX;
	uint64_t x92 = 1680656123755LLU;
	static uint64_t t15 = 39413108444245LLU;

    t15 = (x89*((x90==x91)-x92));

    if (t15 != 1680656123755LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x97 = 19U;
	uint32_t x98 = 140U;
	uint32_t x100 = UINT32_MAX;
	uint32_t t16 = 46709U;

    t16 = (x97*((x98==x99)-x100));

    if (t16 != 19U) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x106 = INT16_MIN;
	uint32_t x107 = UINT32_MAX;
	int16_t x108 = -1;
	volatile int32_t t17 = 4333;

    t17 = (x105*((x106==x107)-x108));

    if (t17 != -32768) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int64_t x109 = INT64_MIN;
	static volatile uint32_t x111 = 248624U;
	uint64_t x112 = UINT64_MAX;

    t18 = (x109*((x110==x111)-x112));

    if (t18 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x114 = INT16_MAX;
	static int16_t x115 = INT16_MIN;
	static int32_t x116 = -13580961;
	static volatile int32_t t19 = -17;

    t19 = (x113*((x114==x115)-x116));

    if (t19 != -13580961) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x118 = INT16_MAX;
	uint8_t x120 = 48U;
	int32_t t20 = -77879519;

    t20 = (x117*((x118==x119)-x120));

    if (t20 != -3145680) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x121 = UINT8_MAX;
	int16_t x122 = -1386;
	int32_t x123 = INT32_MIN;
	int32_t x124 = 1986;
	volatile int32_t t21 = -32839064;

    t21 = (x121*((x122==x123)-x124));

    if (t21 != -506430) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x133 = INT16_MAX;
	int16_t x134 = -3557;
	int8_t x135 = INT8_MAX;
	volatile int32_t t22 = 2;

    t22 = (x133*((x134==x135)-x136));

    if (t22 != 4194176) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x137 = -1;
	int16_t x138 = -1;
	uint16_t x139 = 14919U;
	int64_t x140 = -1498947546021LL;
	int64_t t23 = 25561670434LL;

    t23 = (x137*((x138==x139)-x140));

    if (t23 != -1498947546021LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x141 = UINT16_MAX;
	static uint64_t x142 = 1202071016858LLU;
	int16_t x143 = 9336;
	uint64_t x144 = 10LLU;

    t24 = (x141*((x142==x143)-x144));

    if (t24 != 18446744073708896266LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x149 = INT16_MIN;
	uint64_t x150 = 3710720682LLU;
	uint16_t x151 = 23U;
	static int32_t x152 = -1;

    t25 = (x149*((x150==x151)-x152));

    if (t25 != -32768) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x153 = 32U;
	static volatile int32_t x155 = INT32_MAX;
	volatile int64_t t26 = -5028280LL;

    t26 = (x153*((x154==x155)-x156));

    if (t26 != -10154087408067840LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x157 = 478388U;
	int16_t x159 = INT16_MIN;
	int16_t x160 = INT16_MAX;

    t27 = (x157*((x158==x159)-x160));

    if (t27 != 1505007976U) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint16_t x161 = UINT16_MAX;
	int16_t x162 = 2656;
	uint64_t x164 = 132099616181051208LLU;
	uint64_t t28 = 308737LLU;

    t28 = (x161*((x162==x163)-x164));

    if (t28 != 12821368218298343240LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static int8_t x165 = INT8_MIN;
	int64_t x166 = -1LL;
	volatile int64_t x167 = INT64_MAX;
	int32_t x168 = -374754;
	static volatile int32_t t29 = -637;

    t29 = (x165*((x166==x167)-x168));

    if (t29 != -47968512) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x174 = UINT32_MAX;
	uint32_t x176 = 12U;
	uint32_t t30 = 739U;

    t30 = (x173*((x174==x175)-x176));

    if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint64_t x178 = 41383848221878736LLU;
	static volatile int8_t x180 = -1;
	static volatile int32_t t31 = -78;

    t31 = (x177*((x178==x179)-x180));

    if (t31 != 127) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x181 = UINT64_MAX;
	volatile uint8_t x182 = UINT8_MAX;
	int8_t x183 = 15;
	volatile uint64_t t32 = 4209135701313LLU;

    t32 = (x181*((x182==x183)-x184));

    if (t32 != 16476858107277924251LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x186 = 0U;
	int64_t x187 = INT64_MAX;
	uint64_t x188 = 19952665LLU;
	uint64_t t33 = 398868983LLU;

    t33 = (x185*((x186==x187)-x188));

    if (t33 != 18446742766111650841LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x193 = 28;
	static volatile uint16_t x194 = UINT16_MAX;
	int8_t x195 = INT8_MAX;
	volatile int32_t t34 = 83159;

    t34 = (x193*((x194==x195)-x196));

    if (t34 != -7140) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x203 = 1961821557LL;
	uint16_t x204 = 2707U;

    t35 = (x201*((x202==x203)-x204));

    if (t35 != 2707LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint32_t x205 = 20U;
	static int16_t x206 = INT16_MIN;
	static volatile int8_t x207 = INT8_MIN;
	static int8_t x208 = INT8_MIN;
	uint32_t t36 = 948U;

    t36 = (x205*((x206==x207)-x208));

    if (t36 != 2560U) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x211 = -3113;
	int16_t x212 = 2121;

    t37 = (x209*((x210==x211)-x212));

    if (t37 != -269367) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t x214 = INT32_MIN;
	uint8_t x216 = 47U;

    t38 = (x213*((x214==x215)-x216));

    if (t38 != 1927) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint64_t x221 = 23561387473LLU;
	uint32_t x222 = 1367297U;
	int64_t x223 = -1LL;
	uint16_t x224 = 258U;
	uint64_t t39 = 111012492012067LLU;

    t39 = (x221*((x222==x223)-x224));

    if (t39 != 18446737994871583582LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x225 = -1;
	int16_t x226 = INT16_MIN;
	volatile int16_t x227 = 9;
	int16_t x228 = -1;
	int32_t t40 = 1;

    t40 = (x225*((x226==x227)-x228));

    if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint16_t x233 = UINT16_MAX;
	volatile int16_t x235 = INT16_MAX;
	uint64_t x236 = UINT64_MAX;

    t41 = (x233*((x234==x235)-x236));

    if (t41 != 65535LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint32_t x237 = 610055U;
	static volatile int8_t x238 = 0;
	uint64_t x240 = 3939756219LLU;

    t42 = (x237*((x238==x239)-x240));

    if (t42 != 18444340605729369571LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x241 = -1;
	static int32_t x243 = 0;
	uint8_t x244 = 2U;
	volatile int32_t t43 = 14230586;

    t43 = (x241*((x242==x243)-x244));

    if (t43 != 2) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x245 = INT8_MIN;
	uint8_t x246 = 0U;
	volatile uint64_t x247 = 756LLU;
	uint64_t t44 = 260777585LLU;

    t44 = (x245*((x246==x247)-x248));

    if (t44 != 1414625531125920512LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x254 = -1;
	int16_t x255 = -133;

    t45 = (x253*((x254==x255)-x256));

    if (t45 != 6) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x261 = INT16_MIN;
	int32_t x262 = -1;
	int64_t x263 = INT64_MIN;
	int32_t t46 = 2;

    t46 = (x261*((x262==x263)-x264));

    if (t46 != -9043968) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile uint8_t x269 = 6U;
	volatile int64_t x270 = 47500LL;
	int32_t x271 = -1;
	int64_t x272 = -1LL;
	int64_t t47 = -11741653172963595LL;

    t47 = (x269*((x270==x271)-x272));

    if (t47 != 6LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x281 = UINT64_MAX;
	uint64_t x284 = 768LLU;
	uint64_t t48 = 148336135933913823LLU;

    t48 = (x281*((x282==x283)-x284));

    if (t48 != 768LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x285 = UINT16_MAX;
	volatile uint8_t x286 = 37U;
	volatile uint32_t x287 = 95895U;
	int8_t x288 = INT8_MAX;
	volatile int32_t t49 = 2573641;

    t49 = (x285*((x286==x287)-x288));

    if (t49 != -8322945) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x291 = 14U;
	int8_t x292 = INT8_MAX;
	volatile int32_t t50 = 654218;

    t50 = (x289*((x290==x291)-x292));

    if (t50 != 127) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint64_t x293 = 1033446552958965LLU;
	uint64_t x294 = 3589859431LLU;
	uint32_t x296 = UINT32_MAX;

    t51 = (x293*((x294==x295)-x296));

    if (t51 != 1033446552958965LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x297 = 412U;
	int8_t x298 = -1;
	volatile uint8_t x299 = 3U;
	volatile uint64_t x300 = 16499169252684976LLU;
	static volatile uint64_t t52 = 1943390141540818LLU;

    t52 = (x297*((x298==x299)-x300));

    if (t52 != 11649086341603341504LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x303 = INT16_MIN;
	int8_t x304 = 1;
	int32_t t53 = -846293;

    t53 = (x301*((x302==x303)-x304));

    if (t53 != 13) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x305 = -8296615022682LL;
	uint64_t x306 = UINT64_MAX;
	static int32_t x307 = -1;
	static int8_t x308 = INT8_MIN;
	volatile int64_t t54 = -6563772LL;

    t54 = (x305*((x306==x307)-x308));

    if (t54 != -1070263337925978LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x309 = INT16_MIN;
	int64_t x310 = -2820469873526804654LL;
	uint16_t x311 = 1U;
	int32_t x312 = -641;
	volatile int32_t t55 = 2;

    t55 = (x309*((x310==x311)-x312));

    if (t55 != -21004288) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x317 = INT16_MIN;
	int16_t x318 = -1;
	static int64_t x319 = INT64_MIN;
	static volatile uint8_t x320 = 16U;
	volatile int32_t t56 = -1925;

    t56 = (x317*((x318==x319)-x320));

    if (t56 != 524288) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x325 = INT64_MIN;
	static volatile int32_t x326 = -1;
	uint32_t x327 = 124817U;
	volatile int8_t x328 = 0;
	volatile int64_t t57 = -30LL;

    t57 = (x325*((x326==x327)-x328));

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint16_t x329 = 4177U;
	int16_t x331 = 10;
	volatile int32_t x332 = -1;
	int32_t t58 = 28234;

    t58 = (x329*((x330==x331)-x332));

    if (t58 != 4177) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x333 = 1;
	uint16_t x336 = 273U;
	int32_t t59 = 7043;

    t59 = (x333*((x334==x335)-x336));

    if (t59 != -273) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x337 = INT8_MIN;
	static uint8_t x338 = 101U;
	int32_t x339 = 15898136;
	int8_t x340 = -2;
	static volatile int32_t t60 = 123464256;

    t60 = (x337*((x338==x339)-x340));

    if (t60 != -256) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x341 = 13230;
	int32_t x342 = INT32_MIN;
	static int8_t x343 = INT8_MAX;
	int8_t x344 = -1;
	int32_t t61 = 14;

    t61 = (x341*((x342==x343)-x344));

    if (t61 != 13230) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x346 = INT8_MAX;
	int32_t x347 = INT32_MIN;
	uint16_t x348 = 17U;
	static int32_t t62 = -20;

    t62 = (x345*((x346==x347)-x348));

    if (t62 != -1114095) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x351 = 15U;
	static uint8_t x352 = 5U;
	volatile int32_t t63 = 7664;

    t63 = (x349*((x350==x351)-x352));

    if (t63 != -5) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x353 = INT16_MIN;
	uint64_t x354 = 2LLU;
	uint32_t x355 = 0U;
	int32_t x356 = -1;

    t64 = (x353*((x354==x355)-x356));

    if (t64 != -32768) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x357 = -6212LL;
	uint8_t x358 = 0U;
	int64_t x359 = -1728173323301894708LL;
	int16_t x360 = -1;
	volatile int64_t t65 = 851455572264620141LL;

    t65 = (x357*((x358==x359)-x360));

    if (t65 != -6212LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x365 = -1;
	int16_t x367 = INT16_MIN;
	volatile int16_t x368 = INT16_MAX;
	int32_t t66 = -77603219;

    t66 = (x365*((x366==x367)-x368));

    if (t66 != 32767) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x369 = 2;
	uint16_t x370 = 14U;
	static int8_t x372 = INT8_MAX;
	static int32_t t67 = -236757;

    t67 = (x369*((x370==x371)-x372));

    if (t67 != -254) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x373 = INT8_MIN;
	volatile uint64_t x374 = UINT64_MAX;
	uint8_t x375 = 51U;
	static int16_t x376 = -3269;
	volatile int32_t t68 = 28728;

    t68 = (x373*((x374==x375)-x376));

    if (t68 != -418432) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint8_t x377 = 3U;
	int8_t x378 = INT8_MIN;
	int16_t x379 = 0;
	static uint16_t x380 = UINT16_MAX;
	volatile int32_t t69 = -101;

    t69 = (x377*((x378==x379)-x380));

    if (t69 != -196605) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x381 = INT16_MIN;
	static volatile uint8_t x382 = UINT8_MAX;
	int32_t x383 = INT32_MAX;
	uint8_t x384 = 1U;
	volatile int32_t t70 = -1349850;

    t70 = (x381*((x382==x383)-x384));

    if (t70 != 32768) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x385 = -1LL;
	int8_t x386 = -1;
	int8_t x388 = 0;
	volatile int64_t t71 = 1010097409182LL;

    t71 = (x385*((x386==x387)-x388));

    if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x393 = 27U;
	volatile int64_t x394 = INT64_MIN;
	int16_t x395 = INT16_MIN;
	static int32_t x396 = -1;
	int32_t t72 = 1257415;

    t72 = (x393*((x394==x395)-x396));

    if (t72 != 27) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x397 = INT32_MAX;
	uint32_t x398 = 22U;
	volatile int16_t x399 = INT16_MIN;
	int16_t x400 = -1;
	static int32_t t73 = INT32_MAX;

    t73 = (x397*((x398==x399)-x400));

    if (t73 != INT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x401 = 607;
	uint32_t x402 = 422156841U;
	int64_t x403 = 310LL;
	static uint16_t x404 = UINT16_MAX;
	static volatile int32_t t74 = -317363;

    t74 = (x401*((x402==x403)-x404));

    if (t74 != -39779745) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x405 = -1LL;
	int32_t x406 = INT32_MIN;
	int16_t x408 = -1;
	volatile int64_t t75 = -120569771270LL;

    t75 = (x405*((x406==x407)-x408));

    if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x409 = -1;
	int8_t x410 = INT8_MIN;
	uint8_t x412 = 2U;

    t76 = (x409*((x410==x411)-x412));

    if (t76 != 2) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x413 = 296U;
	int8_t x415 = INT8_MIN;
	int8_t x416 = INT8_MIN;

    t77 = (x413*((x414==x415)-x416));

    if (t77 != 37888) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x417 = 116U;
	uint32_t x418 = 4U;
	int16_t x419 = INT16_MIN;
	int32_t t78 = 236890;

    t78 = (x417*((x418==x419)-x420));

    if (t78 != 116) { NG(); } else { ; }
	
}

void f79(void) {
    	static int64_t x421 = -1LL;
	static volatile int32_t x422 = -35349374;
	static volatile uint64_t x423 = 3138667LLU;
	int64_t x424 = 0LL;
	volatile int64_t t79 = -13389674LL;

    t79 = (x421*((x422==x423)-x424));

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x425 = 30;
	uint64_t x426 = UINT64_MAX;
	static int64_t x427 = INT64_MIN;
	int16_t x428 = INT16_MAX;
	volatile int32_t t80 = 37464595;

    t80 = (x425*((x426==x427)-x428));

    if (t80 != -983010) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int64_t x429 = INT64_MIN;
	volatile uint64_t x432 = 366893462LLU;
	volatile uint64_t t81 = 1374974696776944902LLU;

    t81 = (x429*((x430==x431)-x432));

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x433 = UINT32_MAX;
	int32_t x434 = -1;
	int8_t x435 = INT8_MAX;
	uint8_t x436 = 18U;
	volatile uint32_t t82 = 6953U;

    t82 = (x433*((x434==x435)-x436));

    if (t82 != 18U) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x437 = 6U;
	static int32_t x440 = 259721934;
	volatile int32_t t83 = -5;

    t83 = (x437*((x438==x439)-x440));

    if (t83 != -1558331604) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x441 = UINT32_MAX;
	static int64_t x442 = -26485173LL;
	int16_t x443 = 5;
	int32_t x444 = INT32_MAX;
	static uint32_t t84 = 11U;

    t84 = (x441*((x442==x443)-x444));

    if (t84 != 2147483647U) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x445 = INT16_MIN;
	static volatile uint16_t x446 = UINT16_MAX;
	int16_t x447 = -111;
	static uint8_t x448 = 16U;
	int32_t t85 = 5031;

    t85 = (x445*((x446==x447)-x448));

    if (t85 != 524288) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x449 = -1905LL;
	uint32_t x450 = 26940694U;
	int8_t x451 = INT8_MIN;
	int32_t x452 = INT32_MAX;
	int64_t t86 = 13653752LL;

    t86 = (x449*((x450==x451)-x452));

    if (t86 != 4090956347535LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint32_t x453 = UINT32_MAX;
	volatile uint8_t x454 = 1U;
	uint16_t x456 = UINT16_MAX;
	uint32_t t87 = 2058064699U;

    t87 = (x453*((x454==x455)-x456));

    if (t87 != 65535U) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x457 = 3115364LLU;
	static int32_t x458 = INT32_MAX;
	volatile int16_t x459 = 5;
	int8_t x460 = -1;

    t88 = (x457*((x458==x459)-x460));

    if (t88 != 3115364LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int32_t x465 = 6;
	volatile int32_t x466 = -1;
	int8_t x467 = INT8_MIN;
	static int32_t x468 = -1;
	static volatile int32_t t89 = -61520464;

    t89 = (x465*((x466==x467)-x468));

    if (t89 != 6) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x473 = -7025LL;
	int32_t x474 = INT32_MIN;
	volatile int16_t x475 = -1395;
	int8_t x476 = -33;
	static int64_t t90 = -125425942LL;

    t90 = (x473*((x474==x475)-x476));

    if (t90 != -231825LL) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint64_t x477 = UINT64_MAX;
	volatile int64_t x479 = INT64_MIN;
	static uint64_t x480 = 1039584091699LLU;
	uint64_t t91 = 3917914LLU;

    t91 = (x477*((x478==x479)-x480));

    if (t91 != 1039584091699LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x489 = -1;
	static int64_t x490 = INT64_MIN;
	int8_t x491 = INT8_MIN;
	static volatile uint32_t x492 = UINT32_MAX;
	volatile uint32_t t92 = UINT32_MAX;

    t92 = (x489*((x490==x491)-x492));

    if (t92 != UINT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x493 = -1;
	volatile int64_t x495 = INT64_MIN;
	uint64_t x496 = 24186LLU;
	volatile uint64_t t93 = 62108LLU;

    t93 = (x493*((x494==x495)-x496));

    if (t93 != 24186LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int32_t x497 = INT32_MIN;
	int8_t x498 = 1;
	static uint8_t x499 = 11U;
	int32_t t94 = INT32_MIN;

    t94 = (x497*((x498==x499)-x500));

    if (t94 != INT32_MIN) { NG(); } else { ; }
	
}

void f95(void) {
    	static int16_t x501 = -1;
	int8_t x502 = INT8_MIN;
	uint64_t x503 = UINT64_MAX;
	volatile uint16_t x504 = 9U;
	int32_t t95 = -1;

    t95 = (x501*((x502==x503)-x504));

    if (t95 != 9) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x505 = 4053013574144474071LL;
	volatile int64_t x506 = 69536395933316LL;
	uint64_t x507 = UINT64_MAX;
	static uint64_t x508 = 1893LLU;
	volatile uint64_t t96 = 154965863502646LLU;

    t96 = (x505*((x506==x507)-x508));

    if (t96 != 1490838807684055853LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x509 = 1456U;
	int16_t x511 = INT16_MIN;
	volatile uint32_t t97 = 4334U;

    t97 = (x509*((x510==x511)-x512));

    if (t97 != 186368U) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint64_t x513 = 33899146772LLU;
	static uint16_t x514 = 3961U;
	static int32_t x516 = INT32_MAX;
	static volatile uint64_t t98 = 30125918LLU;

    t98 = (x513*((x514==x515)-x516));

    if (t98 != 989112954715368980LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint8_t x517 = 3U;
	int8_t x519 = -3;
	volatile uint64_t t99 = 8554290277LLU;

    t99 = (x517*((x518==x519)-x520));

    if (t99 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x522 = UINT64_MAX;
	int64_t x523 = 79LL;
	static volatile int32_t x524 = -1;
	volatile uint32_t t100 = 2015490U;

    t100 = (x521*((x522==x523)-x524));

    if (t100 != 10006U) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x526 = INT8_MIN;
	static int16_t x527 = INT16_MAX;
	int8_t x528 = -1;
	static int32_t t101 = 43;

    t101 = (x525*((x526==x527)-x528));

    if (t101 != 127) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x529 = 1091U;
	int32_t x530 = INT32_MIN;
	uint16_t x531 = 306U;
	uint8_t x532 = 13U;
	volatile int32_t t102 = -973560;

    t102 = (x529*((x530==x531)-x532));

    if (t102 != -14183) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x537 = -1;
	int16_t x538 = INT16_MAX;
	uint64_t x539 = 367425139114582308LLU;
	int32_t t103 = 1032328884;

    t103 = (x537*((x538==x539)-x540));

    if (t103 != -128) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x541 = -1;
	static int64_t x542 = -1LL;
	int64_t x544 = -15375LL;
	int64_t t104 = 99100854168703508LL;

    t104 = (x541*((x542==x543)-x544));

    if (t104 != -15375LL) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint64_t x545 = UINT64_MAX;
	int64_t x546 = INT64_MIN;
	static int16_t x547 = 0;
	int32_t x548 = INT32_MAX;
	uint64_t t105 = 281LLU;

    t105 = (x545*((x546==x547)-x548));

    if (t105 != 2147483647LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x553 = -45;
	volatile int8_t x554 = INT8_MIN;
	int8_t x555 = -1;
	uint32_t x556 = 4U;
	uint32_t t106 = 0U;

    t106 = (x553*((x554==x555)-x556));

    if (t106 != 180U) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x558 = INT32_MAX;
	volatile int8_t x560 = -1;

    t107 = (x557*((x558==x559)-x560));

    if (t107 != 127) { NG(); } else { ; }
	
}

void f108(void) {
    	static int64_t x562 = -1LL;
	volatile uint16_t x563 = 279U;
	int16_t x564 = INT16_MIN;
	int64_t t108 = -1553197820964513795LL;

    t108 = (x561*((x562==x563)-x564));

    if (t108 != 3485574823936LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x565 = INT16_MIN;
	uint16_t x566 = UINT16_MAX;
	uint8_t x568 = 20U;

    t109 = (x565*((x566==x567)-x568));

    if (t109 != 655360) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x570 = INT16_MAX;
	uint64_t x571 = 325178LLU;
	int32_t t110 = -475;

    t110 = (x569*((x570==x571)-x572));

    if (t110 != -30) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x573 = -1;
	int8_t x574 = INT8_MIN;
	int8_t x575 = INT8_MIN;
	int8_t x576 = INT8_MIN;
	int32_t t111 = -950439;

    t111 = (x573*((x574==x575)-x576));

    if (t111 != -129) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x577 = -13;
	volatile uint16_t x578 = UINT16_MAX;
	volatile int16_t x579 = 60;
	volatile int32_t t112 = -4;

    t112 = (x577*((x578==x579)-x580));

    if (t112 != 203294) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x585 = UINT8_MAX;
	static int8_t x586 = INT8_MIN;
	uint8_t x587 = 0U;
	static volatile int32_t t113 = 157;

    t113 = (x585*((x586==x587)-x588));

    if (t113 != 32640) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x589 = 110LLU;
	int8_t x590 = 3;
	int16_t x591 = -4346;
	int16_t x592 = INT16_MAX;
	static uint64_t t114 = 27LLU;

    t114 = (x589*((x590==x591)-x592));

    if (t114 != 18446744073705947246LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x593 = UINT8_MAX;
	volatile int8_t x595 = -1;
	volatile uint64_t t115 = 86398409149393752LLU;

    t115 = (x593*((x594==x595)-x596));

    if (t115 != 510LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static int64_t x598 = -285558075759LL;
	static int32_t x599 = -13;
	int16_t x600 = -1;
	static uint64_t t116 = UINT64_MAX;

    t116 = (x597*((x598==x599)-x600));

    if (t116 != UINT64_MAX) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x603 = 15;
	volatile int32_t t117 = -245;

    t117 = (x601*((x602==x603)-x604));

    if (t117 != 65535) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x605 = UINT64_MAX;
	int16_t x606 = INT16_MIN;
	volatile int16_t x607 = 49;
	int8_t x608 = -13;

    t118 = (x605*((x606==x607)-x608));

    if (t118 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x609 = 1;
	volatile int16_t x610 = 9;
	volatile uint32_t x611 = UINT32_MAX;
	int32_t x612 = INT32_MAX;
	volatile int32_t t119 = 1;

    t119 = (x609*((x610==x611)-x612));

    if (t119 != -2147483647) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x613 = 18;
	static uint32_t x614 = 319930668U;
	int64_t t120 = 104LL;

    t120 = (x613*((x614==x615)-x616));

    if (t120 != 18LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x617 = INT8_MIN;
	int64_t x619 = -13402863LL;
	int8_t x620 = 1;
	volatile int32_t t121 = 3266234;

    t121 = (x617*((x618==x619)-x620));

    if (t121 != 128) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x621 = -1LL;
	int16_t x622 = -511;
	volatile int16_t x623 = INT16_MIN;
	int64_t x624 = INT64_MAX;
	volatile int64_t t122 = INT64_MAX;

    t122 = (x621*((x622==x623)-x624));

    if (t122 != INT64_MAX) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x630 = 5984667509597675927LLU;

    t123 = (x629*((x630==x631)-x632));

    if (t123 != -4194304) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x633 = 4048;
	uint16_t x634 = 7337U;
	uint16_t x635 = 0U;
	int16_t x636 = INT16_MIN;
	int32_t t124 = 27428747;

    t124 = (x633*((x634==x635)-x636));

    if (t124 != 132644864) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x638 = INT32_MIN;
	int16_t x639 = INT16_MAX;
	static int64_t t125 = -462LL;

    t125 = (x637*((x638==x639)-x640));

    if (t125 != -399612166769166LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x641 = 212U;
	int8_t x642 = INT8_MIN;
	int64_t x643 = -402171731LL;
	static volatile int8_t x644 = -25;
	volatile uint32_t t126 = 118U;

    t126 = (x641*((x642==x643)-x644));

    if (t126 != 5300U) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x651 = 24;
	uint16_t x652 = 16168U;

    t127 = (x649*((x650==x651)-x652));

    if (t127 != 18446743956900294824LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x657 = 19U;
	uint16_t x658 = 2U;
	uint8_t x659 = UINT8_MAX;
	int64_t x660 = -5359702LL;

    t128 = (x657*((x658==x659)-x660));

    if (t128 != 101834338LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static int32_t x661 = 18300;
	int16_t x662 = -1;
	int8_t x663 = INT8_MAX;
	uint16_t x664 = 31827U;
	int32_t t129 = -330;

    t129 = (x661*((x662==x663)-x664));

    if (t129 != -582434100) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x665 = -1;
	uint8_t x666 = 13U;
	volatile int64_t x667 = -1LL;
	int16_t x668 = 15450;
	int32_t t130 = 1138;

    t130 = (x665*((x666==x667)-x668));

    if (t130 != 15450) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x669 = -4;
	volatile int8_t x670 = INT8_MIN;
	uint8_t x671 = UINT8_MAX;
	uint32_t x672 = UINT32_MAX;
	uint32_t t131 = 362576466U;

    t131 = (x669*((x670==x671)-x672));

    if (t131 != 4294967292U) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x677 = INT16_MIN;
	int8_t x678 = 1;
	int8_t x679 = -11;
	int32_t x680 = -962;
	static volatile int32_t t132 = -306;

    t132 = (x677*((x678==x679)-x680));

    if (t132 != -31522816) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x681 = INT16_MAX;
	volatile int64_t x682 = -1LL;
	volatile int32_t x683 = INT32_MIN;
	volatile int16_t x684 = -1;
	int32_t t133 = -31309043;

    t133 = (x681*((x682==x683)-x684));

    if (t133 != 32767) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x685 = 1631744LL;
	volatile uint8_t x686 = UINT8_MAX;
	int64_t x687 = -1LL;
	int32_t x688 = -1;
	int64_t t134 = -107796578431LL;

    t134 = (x685*((x686==x687)-x688));

    if (t134 != 1631744LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x689 = 13LL;
	static int32_t x690 = INT32_MIN;
	int32_t x691 = INT32_MIN;
	volatile uint16_t x692 = 15U;
	int64_t t135 = -24LL;

    t135 = (x689*((x690==x691)-x692));

    if (t135 != -182LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x705 = -15;
	volatile uint32_t x706 = 13443472U;
	static volatile int8_t x707 = 12;
	volatile uint8_t x708 = UINT8_MAX;
	static int32_t t136 = 5;

    t136 = (x705*((x706==x707)-x708));

    if (t136 != 3825) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x714 = INT8_MAX;
	volatile int32_t x715 = -1;
	volatile uint32_t x716 = UINT32_MAX;
	volatile int64_t t137 = INT64_MAX;

    t137 = (x713*((x714==x715)-x716));

    if (t137 != INT64_MAX) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x721 = 904819U;
	uint16_t x722 = UINT16_MAX;
	static uint8_t x723 = 29U;
	uint32_t t138 = 68254U;

    t138 = (x721*((x722==x723)-x724));

    if (t138 != 416566899U) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x727 = 6776U;
	int8_t x728 = INT8_MIN;

    t139 = (x725*((x726==x727)-x728));

    if (t139 != -4194304) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x729 = 94530028U;
	static int16_t x730 = -105;
	uint32_t x731 = UINT32_MAX;

    t140 = (x729*((x730==x731)-x732));

    if (t140 != 2612423148U) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x733 = 47U;
	int8_t x734 = INT8_MIN;
	int16_t x735 = -1;
	int64_t x736 = -52908629LL;
	volatile int64_t t141 = -8282726497486LL;

    t141 = (x733*((x734==x735)-x736));

    if (t141 != 2486705563LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint64_t x745 = 4001LLU;
	uint16_t x746 = 9958U;
	uint64_t x747 = UINT64_MAX;
	uint64_t t142 = 46178152255LLU;

    t142 = (x745*((x746==x747)-x748));

    if (t142 != 4001LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x757 = 13825U;
	static int32_t x758 = -364;
	static int8_t x759 = 22;
	volatile uint8_t x760 = 6U;
	volatile int32_t t143 = 19761003;

    t143 = (x757*((x758==x759)-x760));

    if (t143 != -82950) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint16_t x761 = 505U;
	int16_t x762 = 1;
	volatile int64_t x763 = INT64_MIN;
	static int32_t t144 = -231;

    t144 = (x761*((x762==x763)-x764));

    if (t144 != 64640) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x769 = INT8_MIN;
	static volatile int32_t x770 = INT32_MIN;
	uint16_t x771 = 3U;
	static int32_t t145 = -24811;

    t145 = (x769*((x770==x771)-x772));

    if (t145 != 227712) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x777 = INT16_MIN;
	int16_t x778 = INT16_MIN;
	static uint16_t x780 = UINT16_MAX;
	int32_t t146 = 13;

    t146 = (x777*((x778==x779)-x780));

    if (t146 != 2147450880) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x781 = 37LLU;
	uint16_t x782 = 246U;
	int8_t x783 = INT8_MAX;
	static uint16_t x784 = 1U;
	uint64_t t147 = 25798748LLU;

    t147 = (x781*((x782==x783)-x784));

    if (t147 != 18446744073709551579LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x785 = 1;
	uint32_t x786 = 403501404U;
	static uint8_t x787 = UINT8_MAX;
	static uint8_t x788 = 46U;
	volatile int32_t t148 = 8150503;

    t148 = (x785*((x786==x787)-x788));

    if (t148 != -46) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x790 = INT32_MIN;
	int64_t x791 = 5652628LL;
	int64_t x792 = -1LL;
	int64_t t149 = 596856831LL;

    t149 = (x789*((x790==x791)-x792));

    if (t149 != 368LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x797 = INT8_MIN;
	int32_t x798 = 421;
	int64_t x799 = -1LL;
	static volatile int16_t x800 = 0;
	volatile int32_t t150 = 447527942;

    t150 = (x797*((x798==x799)-x800));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint16_t x803 = 622U;
	int16_t x804 = INT16_MIN;
	int64_t t151 = 4016199742641413LL;

    t151 = (x801*((x802==x803)-x804));

    if (t151 != -15855849472000LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x805 = 19U;
	uint64_t x808 = UINT64_MAX;
	volatile uint64_t t152 = 35271400041930636LLU;

    t152 = (x805*((x806==x807)-x808));

    if (t152 != 19LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x809 = INT64_MAX;
	int32_t x810 = -65113;
	int16_t x812 = -1;
	int64_t t153 = INT64_MAX;

    t153 = (x809*((x810==x811)-x812));

    if (t153 != INT64_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x813 = 24U;
	static volatile int16_t x814 = INT16_MIN;
	volatile int8_t x815 = INT8_MIN;
	static int8_t x816 = INT8_MAX;
	volatile uint32_t t154 = 64U;

    t154 = (x813*((x814==x815)-x816));

    if (t154 != 4294964248U) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x818 = 3;
	int16_t x820 = -69;
	volatile int32_t t155 = 42;

    t155 = (x817*((x818==x819)-x820));

    if (t155 != 345) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x821 = 864;
	int32_t x822 = INT32_MIN;
	uint8_t x823 = 9U;
	static int16_t x824 = INT16_MAX;
	int32_t t156 = -354577567;

    t156 = (x821*((x822==x823)-x824));

    if (t156 != -28310688) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x829 = 65U;
	static int64_t x830 = INT64_MIN;
	int64_t x831 = INT64_MAX;
	static volatile int8_t x832 = INT8_MIN;
	int32_t t157 = -60499991;

    t157 = (x829*((x830==x831)-x832));

    if (t157 != 8320) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x837 = INT32_MAX;
	int64_t x839 = INT64_MAX;
	volatile uint32_t x840 = 458U;

    t158 = (x837*((x838==x839)-x840));

    if (t158 != 458U) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x842 = 1;
	volatile uint32_t t159 = 2023033U;

    t159 = (x841*((x842==x843)-x844));

    if (t159 != 16256U) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x845 = INT16_MIN;
	volatile int8_t x846 = INT8_MIN;
	static int16_t x848 = -130;
	int32_t t160 = 430264;

    t160 = (x845*((x846==x847)-x848));

    if (t160 != -4292608) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x849 = -1LL;
	int64_t x850 = INT64_MIN;
	uint32_t x851 = 3184U;
	static uint64_t t161 = 1029372365991147LLU;

    t161 = (x849*((x850==x851)-x852));

    if (t161 != 5199549980207618556LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x853 = 12;
	static int64_t x854 = INT64_MIN;
	static uint64_t x855 = 5098762593964791LLU;
	static int8_t x856 = -16;

    t162 = (x853*((x854==x855)-x856));

    if (t162 != 192) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x857 = -1;
	volatile uint8_t x858 = UINT8_MAX;
	static volatile uint32_t x860 = 26525U;
	uint32_t t163 = 253U;

    t163 = (x857*((x858==x859)-x860));

    if (t163 != 26525U) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x869 = -1;
	static int32_t x870 = INT32_MIN;
	int8_t x871 = -1;
	int16_t x872 = -1;
	volatile int32_t t164 = -115385899;

    t164 = (x869*((x870==x871)-x872));

    if (t164 != -1) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x873 = INT32_MAX;
	uint16_t x874 = UINT16_MAX;
	volatile uint64_t x875 = 7786774597611852LLU;
	int8_t x876 = -1;
	volatile int32_t t165 = INT32_MAX;

    t165 = (x873*((x874==x875)-x876));

    if (t165 != INT32_MAX) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x881 = 588;
	int32_t x882 = -1;
	static int64_t x883 = -1649476480072825022LL;
	volatile uint64_t x884 = 1881476023412134LLU;
	uint64_t t166 = 494LLU;

    t166 = (x881*((x882==x883)-x884));

    if (t166 != 17340436171943216824LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x889 = 0U;
	int8_t x891 = INT8_MIN;
	uint32_t x892 = 793796096U;
	volatile uint32_t t167 = 13U;

    t167 = (x889*((x890==x891)-x892));

    if (t167 != 0U) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint64_t x893 = UINT64_MAX;
	static int64_t x896 = -1LL;
	static uint64_t t168 = UINT64_MAX;

    t168 = (x893*((x894==x895)-x896));

    if (t168 != UINT64_MAX) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x898 = 0U;
	uint32_t x899 = 15774316U;
	volatile uint8_t x900 = UINT8_MAX;
	uint32_t t169 = 14931U;

    t169 = (x897*((x898==x899)-x900));

    if (t169 != 255U) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int16_t x901 = 3;
	static volatile uint16_t x902 = 4941U;
	int32_t x903 = 0;
	int32_t x904 = 33;
	volatile int32_t t170 = 93;

    t170 = (x901*((x902==x903)-x904));

    if (t170 != -99) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int16_t x906 = -117;
	uint64_t x907 = UINT64_MAX;
	uint64_t x908 = 25272070475195342LLU;
	volatile uint64_t t171 = 4LLU;

    t171 = (x905*((x906==x907)-x908));

    if (t171 != 5610399645493365924LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint16_t x910 = 7593U;
	int8_t x911 = -1;
	volatile int8_t x912 = INT8_MAX;
	int32_t t172 = 4153191;

    t172 = (x909*((x910==x911)-x912));

    if (t172 != 127) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x913 = 1941U;
	int64_t x914 = -2613LL;
	volatile int16_t x915 = INT16_MIN;
	static int8_t x916 = INT8_MIN;
	uint32_t t173 = 550520U;

    t173 = (x913*((x914==x915)-x916));

    if (t173 != 248448U) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x917 = -191294887961455LL;
	int16_t x919 = -56;
	int64_t t174 = 8LL;

    t174 = (x917*((x918==x919)-x920));

    if (t174 != 1912948879614550LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x921 = 5;
	int32_t x922 = INT32_MAX;
	volatile int64_t x923 = -1LL;
	volatile int32_t x924 = 219562;
	static volatile int32_t t175 = -112309;

    t175 = (x921*((x922==x923)-x924));

    if (t175 != -1097810) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x925 = 8283U;
	uint32_t x926 = 0U;
	static int8_t x927 = INT8_MIN;
	int64_t x928 = 13387163508110LL;

    t176 = (x925*((x926==x927)-x928));

    if (t176 != -110885875337675130LL) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint16_t x929 = 167U;
	static int32_t x930 = -1;
	int16_t x931 = 0;
	uint16_t x932 = 1312U;
	static int32_t t177 = -19;

    t177 = (x929*((x930==x931)-x932));

    if (t177 != -219104) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x933 = -1912;
	int16_t x934 = 3896;
	static uint16_t x935 = 0U;
	int8_t x936 = -1;
	static int32_t t178 = -38965;

    t178 = (x933*((x934==x935)-x936));

    if (t178 != -1912) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x937 = 112U;
	uint16_t x938 = UINT16_MAX;

    t179 = (x937*((x938==x939)-x940));

    if (t179 != 112) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x945 = INT16_MIN;
	volatile int32_t x946 = 241416;
	int64_t x947 = 89196357834664864LL;
	static int16_t x948 = 0;
	volatile int32_t t180 = -181;

    t180 = (x945*((x946==x947)-x948));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x953 = 15U;
	uint16_t x954 = 3467U;
	volatile int8_t x956 = 0;

    t181 = (x953*((x954==x955)-x956));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x957 = UINT8_MAX;
	int64_t x958 = 247791491894271486LL;
	volatile int8_t x960 = -5;
	int32_t t182 = 5283;

    t182 = (x957*((x958==x959)-x960));

    if (t182 != 1275) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x962 = -1;
	int8_t x963 = -1;
	int32_t t183 = 42;

    t183 = (x961*((x962==x963)-x964));

    if (t183 != -14286630) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x973 = INT8_MIN;
	uint64_t x974 = 42LLU;
	static uint32_t x975 = 219714378U;
	uint8_t x976 = 0U;
	int32_t t184 = -422;

    t184 = (x973*((x974==x975)-x976));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int8_t x977 = 11;
	static volatile uint16_t x978 = 30U;
	int8_t x979 = INT8_MIN;
	int16_t x980 = INT16_MAX;
	volatile int32_t t185 = -33;

    t185 = (x977*((x978==x979)-x980));

    if (t185 != -360437) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint16_t x989 = 2410U;
	static int16_t x990 = INT16_MIN;
	int32_t x991 = -1;
	int8_t x992 = INT8_MIN;
	volatile int32_t t186 = -1110442;

    t186 = (x989*((x990==x991)-x992));

    if (t186 != 308480) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x997 = INT64_MAX;
	int64_t x998 = INT64_MAX;
	uint16_t x999 = 161U;
	uint64_t x1000 = 1LLU;
	static uint64_t t187 = 4518LLU;

    t187 = (x997*((x998==x999)-x1000));

    if (t187 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x1001 = 12U;
	int64_t x1002 = INT64_MIN;
	volatile int32_t x1003 = INT32_MIN;
	int64_t t188 = -8410350191LL;

    t188 = (x1001*((x1002==x1003)-x1004));

    if (t188 != 12LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint32_t x1007 = 494026038U;
	int8_t x1008 = -53;
	volatile int32_t t189 = 82204;

    t189 = (x1005*((x1006==x1007)-x1008));

    if (t189 != -53) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x1009 = 1U;
	int16_t x1010 = INT16_MAX;
	uint8_t x1011 = UINT8_MAX;
	volatile uint16_t x1012 = 2U;
	volatile int32_t t190 = -3644;

    t190 = (x1009*((x1010==x1011)-x1012));

    if (t190 != -2) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int16_t x1013 = INT16_MAX;
	static uint32_t x1014 = UINT32_MAX;
	uint32_t x1015 = UINT32_MAX;
	int16_t x1016 = INT16_MAX;

    t191 = (x1013*((x1014==x1015)-x1016));

    if (t191 != -1073643522) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x1020 = INT8_MAX;

    t192 = (x1017*((x1018==x1019)-x1020));

    if (t192 != -127) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x1022 = INT16_MAX;
	static volatile uint64_t x1023 = 3LLU;

    t193 = (x1021*((x1022==x1023)-x1024));

    if (t193 != -128) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x1029 = INT32_MIN;
	int64_t x1030 = -1LL;
	int32_t x1031 = INT32_MAX;
	uint64_t x1032 = UINT64_MAX;

    t194 = (x1029*((x1030==x1031)-x1032));

    if (t194 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x1033 = UINT8_MAX;
	uint16_t x1034 = 31U;
	uint16_t x1035 = UINT16_MAX;
	int16_t x1036 = -1;
	int32_t t195 = 2649225;

    t195 = (x1033*((x1034==x1035)-x1036));

    if (t195 != 255) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x1037 = INT8_MAX;
	int16_t x1038 = -1;
	int32_t x1039 = -1;
	int16_t x1040 = -1;
	volatile int32_t t196 = -57;

    t196 = (x1037*((x1038==x1039)-x1040));

    if (t196 != 254) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x1041 = INT64_MIN;
	static uint64_t x1042 = UINT64_MAX;
	int32_t x1043 = 3490;
	int64_t x1044 = -1LL;

    t197 = (x1041*((x1042==x1043)-x1044));

    if (t197 != INT64_MIN) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x1045 = INT8_MIN;
	int32_t x1046 = INT32_MAX;
	uint8_t x1047 = UINT8_MAX;
	volatile int64_t x1048 = -1LL;

    t198 = (x1045*((x1046==x1047)-x1048));

    if (t198 != -128LL) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint64_t x1053 = UINT64_MAX;
	volatile int16_t x1054 = INT16_MAX;
	static int32_t x1056 = INT32_MAX;
	uint64_t t199 = 42327088987LLU;

    t199 = (x1053*((x1054==x1055)-x1056));

    if (t199 != 2147483647LLU) { NG(); } else { ; }
	
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

