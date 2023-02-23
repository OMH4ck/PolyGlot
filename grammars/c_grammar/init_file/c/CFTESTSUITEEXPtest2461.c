
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

static int32_t x1 = 1079;
int64_t x16 = -1LL;
static uint64_t x17 = 12LLU;
uint64_t x18 = UINT64_MAX;
int64_t x35 = -6316078909LL;
volatile int8_t x52 = -1;
int32_t t7 = 2974;
int64_t x55 = INT64_MAX;
uint8_t x58 = 3U;
uint16_t x73 = 15565U;
static volatile int16_t x74 = INT16_MAX;
static int64_t t11 = 2149994380038LL;
uint64_t t12 = 6976LLU;
int64_t x131 = 256399909699989250LL;
volatile int16_t x151 = INT16_MIN;
uint64_t x158 = UINT64_MAX;
int64_t x160 = INT64_MAX;
volatile uint64_t t20 = 1661711LLU;
int8_t x161 = 1;
int32_t x166 = -1;
volatile uint16_t x168 = UINT16_MAX;
static int32_t x173 = 1117;
uint64_t x181 = 4728796472431095LLU;
volatile int32_t x183 = 895916859;
volatile uint64_t t24 = 6005LLU;
static int8_t x187 = -37;
int32_t x189 = INT32_MAX;
uint16_t x193 = 7086U;
static int32_t x197 = INT32_MAX;
int16_t x198 = INT16_MIN;
int32_t x200 = -1;
int64_t x222 = INT64_MIN;
uint32_t x223 = UINT32_MAX;
int16_t x224 = 4;
int8_t x227 = INT8_MIN;
int32_t x230 = -87780;
volatile int16_t x240 = -1;
uint32_t t35 = 30203020U;
int16_t x241 = INT16_MAX;
static int8_t x248 = INT8_MAX;
int64_t x255 = INT64_MAX;
volatile uint64_t x269 = 28LLU;
volatile uint64_t t39 = 44LLU;
int8_t x275 = INT8_MAX;
volatile int32_t t40 = -2;
uint64_t x277 = 1367617727044732LLU;
int64_t x278 = INT64_MIN;
volatile int16_t x279 = -386;
int8_t x280 = -1;
uint64_t t41 = 140971908614508019LLU;
uint8_t x285 = 0U;
uint16_t x287 = 0U;
volatile int16_t x297 = 3123;
static uint8_t x309 = 100U;
int32_t x321 = INT32_MAX;
static uint16_t x329 = 5775U;
volatile uint32_t t50 = UINT32_MAX;
int8_t x342 = -1;
uint8_t x355 = 0U;
volatile int32_t t53 = 11;
int8_t x385 = 45;
int8_t x403 = -1;
static int32_t t57 = -8;
uint8_t x414 = 63U;
volatile int32_t t60 = 81;
uint64_t x417 = UINT64_MAX;
int32_t t65 = 5;
uint64_t x472 = UINT64_MAX;
volatile int64_t x529 = INT64_MAX;
uint8_t x553 = 31U;
int64_t x556 = INT64_MIN;
uint16_t x561 = UINT16_MAX;
volatile uint64_t x562 = UINT64_MAX;
static int32_t t77 = 3833578;
uint64_t x567 = 1LLU;
int8_t x568 = -1;
int32_t t79 = INT32_MAX;
int32_t t80 = 6741167;
static int64_t x595 = INT64_MAX;
volatile int8_t x603 = -2;
static int8_t x611 = INT8_MIN;
int32_t t84 = INT32_MAX;
int8_t x622 = 0;
int32_t t86 = -3555472;
static int16_t x627 = 983;
int16_t x629 = INT16_MAX;
int32_t t88 = 282443236;
int8_t x636 = -1;
static int32_t t90 = -74972;
volatile uint16_t x642 = 2127U;
static int64_t x651 = -57260961LL;
int16_t x652 = INT16_MIN;
static uint16_t x654 = UINT16_MAX;
int16_t x656 = -2316;
uint8_t x657 = 114U;
uint64_t x662 = UINT64_MAX;
uint16_t x675 = UINT16_MAX;
static int32_t x684 = INT32_MIN;
uint16_t x685 = 23394U;
uint32_t x717 = UINT32_MAX;
int64_t x721 = 199255438134640LL;
static uint64_t x724 = 3021215957817594LLU;
int32_t t105 = 248;
int32_t x755 = -1;
int64_t x757 = INT64_MAX;
int8_t x758 = -1;
int32_t x761 = INT32_MAX;
int64_t x764 = INT64_MIN;
int32_t t109 = INT32_MAX;
int64_t x795 = 6522LL;
int32_t x816 = 7423331;
uint8_t x820 = 26U;
volatile uint32_t x821 = UINT32_MAX;
volatile uint32_t t118 = 503370302U;
int8_t x828 = INT8_MIN;
uint32_t x850 = 55U;
int32_t x854 = -1;
volatile int32_t x855 = INT32_MIN;
int64_t t123 = INT64_MAX;
uint8_t x861 = UINT8_MAX;
volatile uint32_t x862 = 3067U;
volatile int64_t x864 = -1LL;
int32_t t125 = 588413;
uint32_t x873 = 618026093U;
static volatile uint32_t t126 = 28U;
int64_t x900 = 2165113080097015LL;
static int16_t x902 = -1;
volatile int8_t x904 = INT8_MIN;
int16_t x907 = INT16_MIN;
volatile uint8_t x908 = 66U;
volatile int16_t x915 = 15;
int16_t x922 = INT16_MAX;
int32_t x923 = -729;
int32_t x924 = -1;
int64_t x927 = -1LL;
int32_t x941 = 6225;
static int32_t t138 = 2723559;
static int32_t t139 = -1414262;
volatile uint16_t x957 = 2789U;
int32_t x960 = INT32_MAX;
volatile uint64_t x965 = UINT64_MAX;
uint64_t t141 = UINT64_MAX;
int8_t x1006 = INT8_MIN;
uint16_t x1012 = 152U;
uint16_t x1065 = 1684U;
uint32_t x1073 = 172U;
volatile uint32_t t150 = 3184126U;
int64_t x1086 = INT64_MAX;
uint64_t x1087 = UINT64_MAX;
int16_t x1102 = INT16_MAX;
volatile int32_t x1116 = -1;
static volatile int8_t x1118 = -30;
uint8_t x1137 = 5U;
uint64_t x1159 = UINT64_MAX;
volatile uint32_t x1165 = 413630U;
volatile int16_t x1167 = INT16_MIN;
static int32_t x1184 = INT32_MIN;
volatile uint64_t x1185 = 15521883762LLU;
uint32_t x1220 = 1U;
uint8_t x1225 = 0U;
int32_t t169 = 882170735;
int32_t x1229 = 151;
static uint16_t x1231 = 0U;
volatile int8_t x1232 = INT8_MIN;
uint8_t x1244 = 117U;
uint8_t x1249 = 6U;
static uint16_t x1266 = 18356U;
volatile uint64_t t176 = UINT64_MAX;
volatile int16_t x1271 = 4973;
uint8_t x1289 = 103U;
int32_t t179 = 6;
int64_t x1293 = 37843834080453842LL;
static uint8_t x1296 = 2U;
int64_t t180 = 7LL;
uint8_t x1309 = 13U;
static volatile int32_t t183 = 31104;
static volatile int32_t x1318 = INT32_MIN;
static int16_t x1327 = INT16_MIN;
int8_t x1336 = INT8_MIN;
volatile int32_t t186 = 7712;
int16_t x1340 = -1;
uint8_t x1341 = UINT8_MAX;
int32_t t189 = 6;
static int16_t x1352 = INT16_MIN;
volatile int32_t t191 = 577;
uint64_t t192 = 99LLU;
uint16_t x1365 = UINT16_MAX;
uint64_t x1369 = 864413183093361801LLU;
int32_t t198 = -153574;


void f0(void) {
    	int8_t x2 = INT8_MIN;
	static uint8_t x3 = 3U;
	int64_t x4 = INT64_MAX;
	volatile int32_t t0 = 152;

    t0 = (x1>>((x2|x3)==x4));

    if (t0 != 1079) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x13 = INT64_MAX;
	static uint8_t x14 = 7U;
	int16_t x15 = -2;
	int64_t t1 = -3844758365666LL;

    t1 = (x13>>((x14|x15)==x16));

    if (t1 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x19 = INT8_MIN;
	int8_t x20 = INT8_MIN;
	volatile uint64_t t2 = 191973856945241LLU;

    t2 = (x17>>((x18|x19)==x20));

    if (t2 != 12LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint64_t x25 = 1525401813LLU;
	uint64_t x26 = 2LLU;
	volatile uint32_t x27 = 1888387713U;
	volatile uint8_t x28 = 1U;
	static uint64_t t3 = 94188824LLU;

    t3 = (x25>>((x26|x27)==x28));

    if (t3 != 1525401813LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x33 = 1;
	int64_t x34 = 229846474144471LL;
	int16_t x36 = INT16_MIN;
	volatile int32_t t4 = -1980;

    t4 = (x33>>((x34|x35)==x36));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x41 = INT64_MAX;
	static uint8_t x42 = 1U;
	static int32_t x43 = INT32_MAX;
	int32_t x44 = INT32_MIN;
	volatile int64_t t5 = INT64_MAX;

    t5 = (x41>>((x42|x43)==x44));

    if (t5 != INT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x45 = 0U;
	int32_t x46 = INT32_MIN;
	int8_t x47 = 38;
	int16_t x48 = INT16_MIN;
	int32_t t6 = 404738687;

    t6 = (x45>>((x46|x47)==x48));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x49 = 0U;
	uint16_t x50 = UINT16_MAX;
	volatile int8_t x51 = INT8_MAX;

    t7 = (x49>>((x50|x51)==x52));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x53 = 1873150384U;
	static volatile int32_t x54 = INT32_MAX;
	int16_t x56 = INT16_MIN;
	static volatile uint32_t t8 = 35780U;

    t8 = (x53>>((x54|x55)==x56));

    if (t8 != 1873150384U) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint32_t x57 = UINT32_MAX;
	static int16_t x59 = INT16_MIN;
	int16_t x60 = INT16_MIN;
	static uint32_t t9 = UINT32_MAX;

    t9 = (x57>>((x58|x59)==x60));

    if (t9 != UINT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint64_t x75 = 66175323474887015LLU;
	uint16_t x76 = 52U;
	int32_t t10 = 60;

    t10 = (x73>>((x74|x75)==x76));

    if (t10 != 15565) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int64_t x77 = 1063354891538313LL;
	int64_t x78 = INT64_MIN;
	volatile int8_t x79 = -1;
	int8_t x80 = INT8_MIN;

    t11 = (x77>>((x78|x79)==x80));

    if (t11 != 1063354891538313LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x81 = 21482085LLU;
	volatile uint64_t x82 = 5662463068626405LLU;
	uint32_t x83 = 167U;
	uint8_t x84 = 0U;

    t12 = (x81>>((x82|x83)==x84));

    if (t12 != 21482085LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x93 = 137U;
	int16_t x94 = -14;
	static volatile uint64_t x95 = 3890391427480685LLU;
	volatile uint16_t x96 = UINT16_MAX;
	static volatile int32_t t13 = -6;

    t13 = (x93>>((x94|x95)==x96));

    if (t13 != 137) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x109 = UINT16_MAX;
	int8_t x110 = -1;
	static uint8_t x111 = UINT8_MAX;
	int64_t x112 = 35908323LL;
	int32_t t14 = 3;

    t14 = (x109>>((x110|x111)==x112));

    if (t14 != 65535) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x113 = 3LL;
	int8_t x114 = -1;
	volatile int8_t x115 = INT8_MAX;
	volatile int16_t x116 = INT16_MAX;
	int64_t t15 = -127139120759261113LL;

    t15 = (x113>>((x114|x115)==x116));

    if (t15 != 3LL) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint32_t x117 = UINT32_MAX;
	int16_t x118 = INT16_MIN;
	int8_t x119 = INT8_MIN;
	int64_t x120 = INT64_MIN;
	uint32_t t16 = UINT32_MAX;

    t16 = (x117>>((x118|x119)==x120));

    if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	static int32_t x129 = 235972;
	int32_t x130 = INT32_MIN;
	uint32_t x132 = UINT32_MAX;
	volatile int32_t t17 = 157411422;

    t17 = (x129>>((x130|x131)==x132));

    if (t17 != 235972) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x141 = 90700;
	int32_t x142 = INT32_MAX;
	int64_t x143 = INT64_MIN;
	uint32_t x144 = UINT32_MAX;
	static volatile int32_t t18 = 356403473;

    t18 = (x141>>((x142|x143)==x144));

    if (t18 != 90700) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint64_t x149 = UINT64_MAX;
	uint32_t x150 = UINT32_MAX;
	static uint32_t x152 = 163U;
	static uint64_t t19 = UINT64_MAX;

    t19 = (x149>>((x150|x151)==x152));

    if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x157 = 1644033735672933LLU;
	uint16_t x159 = 9U;

    t20 = (x157>>((x158|x159)==x160));

    if (t20 != 1644033735672933LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x162 = -1;
	int8_t x163 = INT8_MAX;
	int8_t x164 = INT8_MIN;
	volatile int32_t t21 = 7287;

    t21 = (x161>>((x162|x163)==x164));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x165 = 0U;
	int64_t x167 = INT64_MIN;
	uint32_t t22 = 58U;

    t22 = (x165>>((x166|x167)==x168));

    if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x174 = 1;
	static int64_t x175 = 29730603003LL;
	uint8_t x176 = 122U;
	volatile int32_t t23 = 433;

    t23 = (x173>>((x174|x175)==x176));

    if (t23 != 1117) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint64_t x182 = 263686845071579LLU;
	int64_t x184 = INT64_MIN;

    t24 = (x181>>((x182|x183)==x184));

    if (t24 != 4728796472431095LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint32_t x185 = UINT32_MAX;
	int16_t x186 = INT16_MIN;
	uint16_t x188 = 172U;
	static volatile uint32_t t25 = UINT32_MAX;

    t25 = (x185>>((x186|x187)==x188));

    if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x190 = -15937090;
	int32_t x191 = -5636;
	static int16_t x192 = INT16_MAX;
	volatile int32_t t26 = INT32_MAX;

    t26 = (x189>>((x190|x191)==x192));

    if (t26 != INT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x194 = INT64_MIN;
	uint16_t x195 = 1839U;
	uint32_t x196 = 63021U;
	int32_t t27 = 245;

    t27 = (x193>>((x194|x195)==x196));

    if (t27 != 7086) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x199 = INT32_MIN;
	static int32_t t28 = INT32_MAX;

    t28 = (x197>>((x198|x199)==x200));

    if (t28 != INT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint16_t x209 = UINT16_MAX;
	int16_t x210 = -1;
	uint64_t x211 = 82063197743132511LLU;
	uint16_t x212 = 5U;
	volatile int32_t t29 = 3;

    t29 = (x209>>((x210|x211)==x212));

    if (t29 != 65535) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x217 = 881169253U;
	static int64_t x218 = INT64_MAX;
	int64_t x219 = -1LL;
	int8_t x220 = -1;
	static uint32_t t30 = 0U;

    t30 = (x217>>((x218|x219)==x220));

    if (t30 != 440584626U) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint8_t x221 = 2U;
	volatile int32_t t31 = 0;

    t31 = (x221>>((x222|x223)==x224));

    if (t31 != 2) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x225 = 14;
	uint16_t x226 = 0U;
	static volatile int8_t x228 = INT8_MIN;
	volatile int32_t t32 = -89;

    t32 = (x225>>((x226|x227)==x228));

    if (t32 != 7) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint8_t x229 = 3U;
	uint32_t x231 = 6594202U;
	uint64_t x232 = UINT64_MAX;
	int32_t t33 = -193367879;

    t33 = (x229>>((x230|x231)==x232));

    if (t33 != 3) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x233 = 13076722U;
	int64_t x234 = INT64_MAX;
	static uint8_t x235 = UINT8_MAX;
	volatile int16_t x236 = INT16_MIN;
	volatile uint32_t t34 = 165649U;

    t34 = (x233>>((x234|x235)==x236));

    if (t34 != 13076722U) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint32_t x237 = 935U;
	uint32_t x238 = UINT32_MAX;
	int8_t x239 = INT8_MIN;

    t35 = (x237>>((x238|x239)==x240));

    if (t35 != 467U) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint64_t x242 = 92716532077LLU;
	static int16_t x243 = INT16_MAX;
	static int8_t x244 = -1;
	volatile int32_t t36 = 0;

    t36 = (x241>>((x242|x243)==x244));

    if (t36 != 32767) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile uint8_t x245 = 0U;
	uint32_t x246 = 19921712U;
	uint64_t x247 = 5144020155LLU;
	int32_t t37 = -2;

    t37 = (x245>>((x246|x247)==x248));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x253 = 67060577;
	uint32_t x254 = 244460578U;
	int8_t x256 = -1;
	int32_t t38 = -1509175;

    t38 = (x253>>((x254|x255)==x256));

    if (t38 != 67060577) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x270 = 7532982U;
	int8_t x271 = 1;
	volatile int32_t x272 = -1;

    t39 = (x269>>((x270|x271)==x272));

    if (t39 != 28LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x273 = INT32_MAX;
	static uint32_t x274 = 6U;
	int8_t x276 = INT8_MAX;

    t40 = (x273>>((x274|x275)==x276));

    if (t40 != 1073741823) { NG(); } else { ; }
	
}

void f41(void) {
    

    t41 = (x277>>((x278|x279)==x280));

    if (t41 != 1367617727044732LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x286 = 65809541346LLU;
	int16_t x288 = INT16_MIN;
	volatile int32_t t42 = 33084400;

    t42 = (x285>>((x286|x287)==x288));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x298 = -195360574853LL;
	volatile int64_t x299 = -3942324220276770LL;
	uint8_t x300 = 1U;
	volatile int32_t t43 = -60925627;

    t43 = (x297>>((x298|x299)==x300));

    if (t43 != 3123) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint16_t x301 = 912U;
	int32_t x302 = 864;
	int8_t x303 = -1;
	int16_t x304 = INT16_MAX;
	volatile int32_t t44 = 43046;

    t44 = (x301>>((x302|x303)==x304));

    if (t44 != 912) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x310 = INT32_MIN;
	static int8_t x311 = 0;
	int16_t x312 = -1;
	static volatile int32_t t45 = -14145;

    t45 = (x309>>((x310|x311)==x312));

    if (t45 != 100) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x313 = 985U;
	int8_t x314 = 30;
	static uint64_t x315 = 658281993LLU;
	volatile uint8_t x316 = UINT8_MAX;
	static int32_t t46 = 29;

    t46 = (x313>>((x314|x315)==x316));

    if (t46 != 985) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x322 = INT16_MAX;
	int32_t x323 = INT32_MAX;
	int32_t x324 = 18607759;
	int32_t t47 = INT32_MAX;

    t47 = (x321>>((x322|x323)==x324));

    if (t47 != INT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint8_t x325 = 67U;
	int16_t x326 = -1;
	int16_t x327 = -1;
	volatile uint64_t x328 = UINT64_MAX;
	static int32_t t48 = 1205;

    t48 = (x325>>((x326|x327)==x328));

    if (t48 != 33) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x330 = INT8_MIN;
	int8_t x331 = -1;
	static volatile int32_t x332 = INT32_MIN;
	int32_t t49 = -1009;

    t49 = (x329>>((x330|x331)==x332));

    if (t49 != 5775) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x333 = UINT32_MAX;
	uint16_t x334 = UINT16_MAX;
	int32_t x335 = 371534;
	volatile int64_t x336 = INT64_MIN;

    t50 = (x333>>((x334|x335)==x336));

    if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint32_t x341 = 33966U;
	int32_t x343 = INT32_MAX;
	volatile uint8_t x344 = 7U;
	volatile uint32_t t51 = 470U;

    t51 = (x341>>((x342|x343)==x344));

    if (t51 != 33966U) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint16_t x353 = UINT16_MAX;
	static int32_t x354 = 51928901;
	int64_t x356 = INT64_MIN;
	int32_t t52 = 31;

    t52 = (x353>>((x354|x355)==x356));

    if (t52 != 65535) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile uint8_t x357 = UINT8_MAX;
	static int32_t x358 = INT32_MIN;
	volatile uint32_t x359 = UINT32_MAX;
	volatile int8_t x360 = INT8_MAX;

    t53 = (x357>>((x358|x359)==x360));

    if (t53 != 255) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x381 = 0U;
	int16_t x382 = -1;
	static int64_t x383 = 422830962LL;
	int32_t x384 = -1;
	int32_t t54 = 109;

    t54 = (x381>>((x382|x383)==x384));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x386 = -422841641;
	uint32_t x387 = 646623507U;
	int16_t x388 = INT16_MIN;
	volatile int32_t t55 = 11;

    t55 = (x385>>((x386|x387)==x388));

    if (t55 != 45) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint64_t x389 = 1070659596904752313LLU;
	int64_t x390 = INT64_MIN;
	volatile uint64_t x391 = UINT64_MAX;
	uint64_t x392 = 15628611018665198LLU;
	uint64_t t56 = 77587694091LLU;

    t56 = (x389>>((x390|x391)==x392));

    if (t56 != 1070659596904752313LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int32_t x401 = 1;
	uint32_t x402 = 1099163681U;
	int64_t x404 = -682560988967LL;

    t57 = (x401>>((x402|x403)==x404));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x405 = INT16_MAX;
	static int16_t x406 = INT16_MIN;
	static int64_t x407 = INT64_MIN;
	int16_t x408 = INT16_MIN;
	int32_t t58 = -14;

    t58 = (x405>>((x406|x407)==x408));

    if (t58 != 16383) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int32_t x409 = INT32_MAX;
	volatile int8_t x410 = INT8_MIN;
	static int32_t x411 = 8842775;
	uint8_t x412 = 5U;
	int32_t t59 = INT32_MAX;

    t59 = (x409>>((x410|x411)==x412));

    if (t59 != INT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	static int8_t x413 = 1;
	static int16_t x415 = INT16_MIN;
	static uint8_t x416 = 2U;

    t60 = (x413>>((x414|x415)==x416));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x418 = INT8_MIN;
	static int64_t x419 = -1LL;
	int64_t x420 = INT64_MIN;
	static volatile uint64_t t61 = UINT64_MAX;

    t61 = (x417>>((x418|x419)==x420));

    if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x433 = INT16_MAX;
	static volatile uint16_t x434 = 15245U;
	static int8_t x435 = INT8_MAX;
	static int16_t x436 = INT16_MIN;
	volatile int32_t t62 = -23235;

    t62 = (x433>>((x434|x435)==x436));

    if (t62 != 32767) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x445 = UINT64_MAX;
	static volatile int32_t x446 = INT32_MIN;
	int16_t x447 = -1;
	volatile int8_t x448 = INT8_MIN;
	volatile uint64_t t63 = UINT64_MAX;

    t63 = (x445>>((x446|x447)==x448));

    if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int64_t x449 = 29603633822557LL;
	int8_t x450 = -19;
	uint16_t x451 = UINT16_MAX;
	int32_t x452 = INT32_MIN;
	volatile int64_t t64 = -142412019LL;

    t64 = (x449>>((x450|x451)==x452));

    if (t64 != 29603633822557LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x457 = INT16_MAX;
	int16_t x458 = INT16_MIN;
	int32_t x459 = -59832;
	int32_t x460 = INT32_MIN;

    t65 = (x457>>((x458|x459)==x460));

    if (t65 != 32767) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int16_t x461 = 17;
	int32_t x462 = -1;
	int16_t x463 = INT16_MIN;
	uint16_t x464 = 9U;
	int32_t t66 = 0;

    t66 = (x461>>((x462|x463)==x464));

    if (t66 != 17) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x469 = UINT8_MAX;
	int8_t x470 = INT8_MAX;
	int16_t x471 = -1;
	int32_t t67 = -1233;

    t67 = (x469>>((x470|x471)==x472));

    if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x493 = INT32_MAX;
	int8_t x494 = INT8_MAX;
	volatile uint64_t x495 = 3LLU;
	int16_t x496 = INT16_MAX;
	int32_t t68 = INT32_MAX;

    t68 = (x493>>((x494|x495)==x496));

    if (t68 != INT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x509 = INT64_MAX;
	volatile int8_t x510 = -1;
	static int8_t x511 = 1;
	int8_t x512 = INT8_MIN;
	static int64_t t69 = INT64_MAX;

    t69 = (x509>>((x510|x511)==x512));

    if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x521 = 7283508379225LLU;
	uint8_t x522 = UINT8_MAX;
	volatile int8_t x523 = INT8_MIN;
	int16_t x524 = -1;
	volatile uint64_t t70 = 57485259LLU;

    t70 = (x521>>((x522|x523)==x524));

    if (t70 != 3641754189612LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile int32_t x525 = 534;
	int64_t x526 = -175772842549916LL;
	int8_t x527 = -1;
	int64_t x528 = 100990444960LL;
	static int32_t t71 = -184697747;

    t71 = (x525>>((x526|x527)==x528));

    if (t71 != 534) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x530 = 647;
	int8_t x531 = INT8_MIN;
	static volatile uint64_t x532 = 2204460448044LLU;
	int64_t t72 = INT64_MAX;

    t72 = (x529>>((x530|x531)==x532));

    if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x533 = 12228;
	volatile int8_t x534 = INT8_MAX;
	volatile int32_t x535 = 22003;
	uint32_t x536 = 86U;
	int32_t t73 = -2824566;

    t73 = (x533>>((x534|x535)==x536));

    if (t73 != 12228) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x537 = 194264LL;
	int8_t x538 = 0;
	static int64_t x539 = INT64_MAX;
	uint32_t x540 = 1893326668U;
	static volatile int64_t t74 = -2LL;

    t74 = (x537>>((x538|x539)==x540));

    if (t74 != 194264LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x541 = 135;
	int64_t x542 = INT64_MAX;
	volatile int16_t x543 = -1;
	static int8_t x544 = -1;
	volatile int32_t t75 = -12850640;

    t75 = (x541>>((x542|x543)==x544));

    if (t75 != 67) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x554 = INT32_MAX;
	int64_t x555 = INT64_MIN;
	volatile int32_t t76 = 30583;

    t76 = (x553>>((x554|x555)==x556));

    if (t76 != 31) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x563 = INT64_MIN;
	int32_t x564 = INT32_MIN;

    t77 = (x561>>((x562|x563)==x564));

    if (t77 != 65535) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x565 = UINT32_MAX;
	int8_t x566 = INT8_MIN;
	uint32_t t78 = UINT32_MAX;

    t78 = (x565>>((x566|x567)==x568));

    if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x569 = INT32_MAX;
	static int16_t x570 = INT16_MAX;
	static int16_t x571 = -1;
	int64_t x572 = -20781361615665882LL;

    t79 = (x569>>((x570|x571)==x572));

    if (t79 != INT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint16_t x581 = 5U;
	volatile int32_t x582 = INT32_MIN;
	int8_t x583 = 0;
	volatile uint32_t x584 = 0U;

    t80 = (x581>>((x582|x583)==x584));

    if (t80 != 5) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x593 = 28;
	int32_t x594 = -1;
	int16_t x596 = INT16_MAX;
	static volatile int32_t t81 = -198007141;

    t81 = (x593>>((x594|x595)==x596));

    if (t81 != 28) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x601 = INT8_MAX;
	uint8_t x602 = 1U;
	int8_t x604 = INT8_MIN;
	volatile int32_t t82 = 8148;

    t82 = (x601>>((x602|x603)==x604));

    if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x605 = 551232581U;
	static int32_t x606 = -1478;
	static volatile int8_t x607 = -1;
	static volatile uint32_t x608 = 14U;
	uint32_t t83 = 366U;

    t83 = (x605>>((x606|x607)==x608));

    if (t83 != 551232581U) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x609 = INT32_MAX;
	uint64_t x610 = 102121510LLU;
	int32_t x612 = -426161;

    t84 = (x609>>((x610|x611)==x612));

    if (t84 != INT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x617 = UINT8_MAX;
	static int16_t x618 = -1;
	int64_t x619 = INT64_MIN;
	int8_t x620 = INT8_MIN;
	volatile int32_t t85 = -155699135;

    t85 = (x617>>((x618|x619)==x620));

    if (t85 != 255) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint8_t x621 = 1U;
	uint64_t x623 = UINT64_MAX;
	uint16_t x624 = 7354U;

    t86 = (x621>>((x622|x623)==x624));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint64_t x625 = UINT64_MAX;
	uint64_t x626 = 63403LLU;
	int64_t x628 = INT64_MIN;
	uint64_t t87 = UINT64_MAX;

    t87 = (x625>>((x626|x627)==x628));

    if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x630 = INT16_MAX;
	int8_t x631 = -1;
	uint32_t x632 = 933U;

    t88 = (x629>>((x630|x631)==x632));

    if (t88 != 32767) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x633 = 1466;
	uint32_t x634 = 20363U;
	uint64_t x635 = 4659LLU;
	volatile int32_t t89 = 10;

    t89 = (x633>>((x634|x635)==x636));

    if (t89 != 1466) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint8_t x637 = 39U;
	uint16_t x638 = 3454U;
	uint32_t x639 = 31615647U;
	int8_t x640 = -1;

    t90 = (x637>>((x638|x639)==x640));

    if (t90 != 39) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x641 = 72975;
	int8_t x643 = -27;
	int32_t x644 = 802309886;
	int32_t t91 = 1;

    t91 = (x641>>((x642|x643)==x644));

    if (t91 != 72975) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x649 = 70U;
	static uint64_t x650 = 14LLU;
	volatile int32_t t92 = -283541;

    t92 = (x649>>((x650|x651)==x652));

    if (t92 != 70) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint64_t x653 = 4300LLU;
	int16_t x655 = 6123;
	static volatile uint64_t t93 = 17353442992216897LLU;

    t93 = (x653>>((x654|x655)==x656));

    if (t93 != 4300LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x658 = INT8_MIN;
	uint32_t x659 = 40995U;
	uint32_t x660 = 558198239U;
	volatile int32_t t94 = 1;

    t94 = (x657>>((x658|x659)==x660));

    if (t94 != 114) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x661 = 400;
	int64_t x663 = INT64_MIN;
	uint8_t x664 = 12U;
	volatile int32_t t95 = -891;

    t95 = (x661>>((x662|x663)==x664));

    if (t95 != 400) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x665 = INT32_MAX;
	uint32_t x666 = UINT32_MAX;
	int32_t x667 = INT32_MIN;
	volatile uint32_t x668 = UINT32_MAX;
	int32_t t96 = -29826214;

    t96 = (x665>>((x666|x667)==x668));

    if (t96 != 1073741823) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x673 = 9732U;
	int32_t x674 = INT32_MIN;
	uint16_t x676 = 15307U;
	static volatile uint32_t t97 = 403188426U;

    t97 = (x673>>((x674|x675)==x676));

    if (t97 != 9732U) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x681 = 71925912LLU;
	uint32_t x682 = UINT32_MAX;
	uint64_t x683 = 47619636291924LLU;
	uint64_t t98 = 457515307683474979LLU;

    t98 = (x681>>((x682|x683)==x684));

    if (t98 != 71925912LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x686 = 443634LLU;
	int64_t x687 = INT64_MIN;
	static int8_t x688 = -1;
	volatile int32_t t99 = 3854;

    t99 = (x685>>((x686|x687)==x688));

    if (t99 != 23394) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x701 = 1;
	int16_t x702 = INT16_MAX;
	static int16_t x703 = -1;
	static int16_t x704 = INT16_MIN;
	static int32_t t100 = 1883;

    t100 = (x701>>((x702|x703)==x704));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x713 = UINT64_MAX;
	uint16_t x714 = UINT16_MAX;
	int16_t x715 = -1;
	int8_t x716 = INT8_MIN;
	volatile uint64_t t101 = UINT64_MAX;

    t101 = (x713>>((x714|x715)==x716));

    if (t101 != UINT64_MAX) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x718 = INT32_MIN;
	int8_t x719 = -8;
	volatile uint8_t x720 = UINT8_MAX;
	uint32_t t102 = UINT32_MAX;

    t102 = (x717>>((x718|x719)==x720));

    if (t102 != UINT32_MAX) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x722 = INT8_MAX;
	uint16_t x723 = 114U;
	int64_t t103 = -228959687014LL;

    t103 = (x721>>((x722|x723)==x724));

    if (t103 != 199255438134640LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x729 = 689697374349565LLU;
	int8_t x730 = 1;
	int32_t x731 = INT32_MIN;
	uint16_t x732 = 17645U;
	static volatile uint64_t t104 = 1074220261LLU;

    t104 = (x729>>((x730|x731)==x732));

    if (t104 != 689697374349565LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x737 = UINT8_MAX;
	uint16_t x738 = 7246U;
	int8_t x739 = -27;
	int8_t x740 = INT8_MAX;

    t105 = (x737>>((x738|x739)==x740));

    if (t105 != 255) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x741 = 0U;
	int64_t x742 = -1LL;
	int8_t x743 = INT8_MIN;
	int32_t x744 = INT32_MIN;
	int32_t t106 = -36966652;

    t106 = (x741>>((x742|x743)==x744));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int16_t x753 = 640;
	int16_t x754 = INT16_MIN;
	int64_t x756 = INT64_MIN;
	int32_t t107 = 16002;

    t107 = (x753>>((x754|x755)==x756));

    if (t107 != 640) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x759 = 103U;
	volatile int64_t x760 = INT64_MIN;
	volatile int64_t t108 = INT64_MAX;

    t108 = (x757>>((x758|x759)==x760));

    if (t108 != INT64_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int64_t x762 = -1LL;
	volatile int16_t x763 = INT16_MIN;

    t109 = (x761>>((x762|x763)==x764));

    if (t109 != INT32_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	static int16_t x765 = 1607;
	uint8_t x766 = UINT8_MAX;
	static volatile uint32_t x767 = 450U;
	static int64_t x768 = INT64_MAX;
	volatile int32_t t110 = 15;

    t110 = (x765>>((x766|x767)==x768));

    if (t110 != 1607) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x773 = INT32_MAX;
	static int64_t x774 = INT64_MIN;
	volatile uint64_t x775 = 2117370250137LLU;
	static int32_t x776 = -1;
	volatile int32_t t111 = INT32_MAX;

    t111 = (x773>>((x774|x775)==x776));

    if (t111 != INT32_MAX) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint16_t x777 = 0U;
	uint64_t x778 = 383264341419304794LLU;
	volatile uint8_t x779 = 8U;
	int64_t x780 = INT64_MIN;
	static volatile int32_t t112 = -827;

    t112 = (x777>>((x778|x779)==x780));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x793 = INT16_MAX;
	uint16_t x794 = UINT16_MAX;
	uint8_t x796 = 117U;
	volatile int32_t t113 = 3314;

    t113 = (x793>>((x794|x795)==x796));

    if (t113 != 32767) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint8_t x805 = 1U;
	volatile int32_t x806 = INT32_MIN;
	volatile int16_t x807 = -1;
	int64_t x808 = INT64_MAX;
	static volatile int32_t t114 = 4;

    t114 = (x805>>((x806|x807)==x808));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x809 = UINT16_MAX;
	int64_t x810 = -1LL;
	uint64_t x811 = 619231401940519LLU;
	int8_t x812 = INT8_MIN;
	static int32_t t115 = -1540;

    t115 = (x809>>((x810|x811)==x812));

    if (t115 != 65535) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x813 = 1817587LLU;
	uint32_t x814 = 2933U;
	volatile uint16_t x815 = 0U;
	static volatile uint64_t t116 = 16546365721207LLU;

    t116 = (x813>>((x814|x815)==x816));

    if (t116 != 1817587LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint8_t x817 = 4U;
	int64_t x818 = 4038687LL;
	int8_t x819 = -1;
	static int32_t t117 = 72362683;

    t117 = (x817>>((x818|x819)==x820));

    if (t117 != 4) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x822 = -1;
	uint8_t x823 = 81U;
	volatile uint64_t x824 = UINT64_MAX;

    t118 = (x821>>((x822|x823)==x824));

    if (t118 != 2147483647U) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x825 = INT8_MAX;
	static int32_t x826 = -19;
	int8_t x827 = INT8_MAX;
	int32_t t119 = -2;

    t119 = (x825>>((x826|x827)==x828));

    if (t119 != 127) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x829 = UINT16_MAX;
	static int8_t x830 = INT8_MIN;
	static uint16_t x831 = 1U;
	int32_t x832 = INT32_MIN;
	static volatile int32_t t120 = -164824032;

    t120 = (x829>>((x830|x831)==x832));

    if (t120 != 65535) { NG(); } else { ; }
	
}

void f121(void) {
    	static int16_t x841 = 31;
	int16_t x842 = -13;
	int32_t x843 = -23893991;
	int16_t x844 = INT16_MIN;
	volatile int32_t t121 = 26;

    t121 = (x841>>((x842|x843)==x844));

    if (t121 != 31) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x849 = INT8_MAX;
	int16_t x851 = INT16_MIN;
	int64_t x852 = INT64_MIN;
	static volatile int32_t t122 = 2055980;

    t122 = (x849>>((x850|x851)==x852));

    if (t122 != 127) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x853 = INT64_MAX;
	static int8_t x856 = INT8_MIN;

    t123 = (x853>>((x854|x855)==x856));

    if (t123 != INT64_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x863 = 1U;
	volatile int32_t t124 = 3797;

    t124 = (x861>>((x862|x863)==x864));

    if (t124 != 255) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x865 = INT16_MAX;
	int32_t x866 = -1;
	int64_t x867 = INT64_MIN;
	uint8_t x868 = UINT8_MAX;

    t125 = (x865>>((x866|x867)==x868));

    if (t125 != 32767) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x874 = UINT32_MAX;
	int32_t x875 = INT32_MIN;
	int8_t x876 = 42;

    t126 = (x873>>((x874|x875)==x876));

    if (t126 != 618026093U) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint64_t x881 = 923010LLU;
	volatile int8_t x882 = -31;
	static uint64_t x883 = 21135LLU;
	int16_t x884 = INT16_MIN;
	uint64_t t127 = 113026532755835LLU;

    t127 = (x881>>((x882|x883)==x884));

    if (t127 != 923010LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint64_t x885 = 14730434598946387LLU;
	volatile int32_t x886 = INT32_MIN;
	static int64_t x887 = INT64_MIN;
	int64_t x888 = 325025LL;
	uint64_t t128 = 6639LLU;

    t128 = (x885>>((x886|x887)==x888));

    if (t128 != 14730434598946387LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x893 = UINT8_MAX;
	static volatile int16_t x894 = INT16_MIN;
	int64_t x895 = INT64_MIN;
	volatile uint8_t x896 = 60U;
	volatile int32_t t129 = -10212;

    t129 = (x893>>((x894|x895)==x896));

    if (t129 != 255) { NG(); } else { ; }
	
}

void f130(void) {
    	static int64_t x897 = 30236035554LL;
	int64_t x898 = 0LL;
	uint64_t x899 = 85244436LLU;
	volatile int64_t t130 = -5818726747LL;

    t130 = (x897>>((x898|x899)==x900));

    if (t130 != 30236035554LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x901 = 230809029U;
	int32_t x903 = INT32_MIN;
	volatile uint32_t t131 = 1654U;

    t131 = (x901>>((x902|x903)==x904));

    if (t131 != 230809029U) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x905 = UINT32_MAX;
	static int64_t x906 = -1LL;
	static uint32_t t132 = UINT32_MAX;

    t132 = (x905>>((x906|x907)==x908));

    if (t132 != UINT32_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x913 = INT64_MAX;
	int8_t x914 = INT8_MIN;
	int64_t x916 = INT64_MIN;
	static volatile int64_t t133 = INT64_MAX;

    t133 = (x913>>((x914|x915)==x916));

    if (t133 != INT64_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int16_t x917 = INT16_MAX;
	int64_t x918 = 41237314852LL;
	int32_t x919 = -126;
	int32_t x920 = 7773830;
	volatile int32_t t134 = -19;

    t134 = (x917>>((x918|x919)==x920));

    if (t134 != 32767) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x921 = 67U;
	volatile int32_t t135 = 23944;

    t135 = (x921>>((x922|x923)==x924));

    if (t135 != 33) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x925 = 5077781432444LLU;
	int16_t x926 = INT16_MIN;
	int16_t x928 = -1;
	uint64_t t136 = 2922098533062765LLU;

    t136 = (x925>>((x926|x927)==x928));

    if (t136 != 2538890716222LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x937 = 57421LLU;
	int8_t x938 = -13;
	uint32_t x939 = 98511U;
	int32_t x940 = -1;
	uint64_t t137 = 0LLU;

    t137 = (x937>>((x938|x939)==x940));

    if (t137 != 28710LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x942 = INT32_MAX;
	static int32_t x943 = -15;
	uint32_t x944 = 823576U;

    t138 = (x941>>((x942|x943)==x944));

    if (t138 != 6225) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x945 = 4;
	int8_t x946 = 1;
	int64_t x947 = 55195832LL;
	int8_t x948 = INT8_MIN;

    t139 = (x945>>((x946|x947)==x948));

    if (t139 != 4) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x958 = 85U;
	int64_t x959 = 70348LL;
	int32_t t140 = -50;

    t140 = (x957>>((x958|x959)==x960));

    if (t140 != 2789) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x966 = INT8_MIN;
	int32_t x967 = INT32_MIN;
	uint64_t x968 = UINT64_MAX;

    t141 = (x965>>((x966|x967)==x968));

    if (t141 != UINT64_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x981 = 14U;
	int32_t x982 = INT32_MIN;
	volatile int16_t x983 = -1;
	static int64_t x984 = INT64_MIN;
	int32_t t142 = 105465206;

    t142 = (x981>>((x982|x983)==x984));

    if (t142 != 14) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x993 = 0;
	int8_t x994 = 0;
	static int32_t x995 = INT32_MAX;
	static int8_t x996 = 2;
	int32_t t143 = 3514601;

    t143 = (x993>>((x994|x995)==x996));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint8_t x997 = UINT8_MAX;
	uint64_t x998 = UINT64_MAX;
	int32_t x999 = INT32_MIN;
	int8_t x1000 = INT8_MAX;
	volatile int32_t t144 = 13199009;

    t144 = (x997>>((x998|x999)==x1000));

    if (t144 != 255) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint8_t x1005 = 1U;
	int16_t x1007 = INT16_MAX;
	uint32_t x1008 = 447832040U;
	volatile int32_t t145 = 314833847;

    t145 = (x1005>>((x1006|x1007)==x1008));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int32_t x1009 = INT32_MAX;
	uint64_t x1010 = 43156716LLU;
	uint16_t x1011 = UINT16_MAX;
	int32_t t146 = INT32_MAX;

    t146 = (x1009>>((x1010|x1011)==x1012));

    if (t146 != INT32_MAX) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x1021 = UINT16_MAX;
	int64_t x1022 = 204606438LL;
	int64_t x1023 = 1474370794943255043LL;
	uint32_t x1024 = UINT32_MAX;
	static int32_t t147 = 1;

    t147 = (x1021>>((x1022|x1023)==x1024));

    if (t147 != 65535) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x1037 = UINT64_MAX;
	uint16_t x1038 = 1444U;
	int64_t x1039 = 5028162511LL;
	int64_t x1040 = -52LL;
	static uint64_t t148 = UINT64_MAX;

    t148 = (x1037>>((x1038|x1039)==x1040));

    if (t148 != UINT64_MAX) { NG(); } else { ; }
	
}

void f149(void) {
    	static int64_t x1066 = INT64_MAX;
	int64_t x1067 = INT64_MIN;
	int32_t x1068 = INT32_MIN;
	static int32_t t149 = 651912153;

    t149 = (x1065>>((x1066|x1067)==x1068));

    if (t149 != 1684) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x1074 = INT8_MIN;
	int8_t x1075 = INT8_MIN;
	uint64_t x1076 = UINT64_MAX;

    t150 = (x1073>>((x1074|x1075)==x1076));

    if (t150 != 172U) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x1077 = UINT64_MAX;
	int64_t x1078 = -133123784605027415LL;
	int8_t x1079 = INT8_MAX;
	volatile int64_t x1080 = INT64_MAX;
	uint64_t t151 = UINT64_MAX;

    t151 = (x1077>>((x1078|x1079)==x1080));

    if (t151 != UINT64_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x1085 = 78661606U;
	static int64_t x1088 = -24629201LL;
	volatile uint32_t t152 = 10788U;

    t152 = (x1085>>((x1086|x1087)==x1088));

    if (t152 != 78661606U) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x1097 = INT8_MAX;
	uint32_t x1098 = 20257U;
	static int8_t x1099 = INT8_MAX;
	static int16_t x1100 = INT16_MIN;
	int32_t t153 = 395720;

    t153 = (x1097>>((x1098|x1099)==x1100));

    if (t153 != 127) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint32_t x1101 = 99U;
	int64_t x1103 = INT64_MIN;
	uint16_t x1104 = UINT16_MAX;
	volatile uint32_t t154 = 964223U;

    t154 = (x1101>>((x1102|x1103)==x1104));

    if (t154 != 99U) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x1113 = UINT8_MAX;
	static uint16_t x1114 = 484U;
	int8_t x1115 = INT8_MIN;
	int32_t t155 = -15945;

    t155 = (x1113>>((x1114|x1115)==x1116));

    if (t155 != 255) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int8_t x1117 = INT8_MAX;
	static uint64_t x1119 = 20409780LLU;
	uint32_t x1120 = UINT32_MAX;
	static volatile int32_t t156 = 357621868;

    t156 = (x1117>>((x1118|x1119)==x1120));

    if (t156 != 127) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x1133 = 7722LL;
	volatile int64_t x1134 = INT64_MIN;
	int32_t x1135 = -1;
	uint8_t x1136 = 0U;
	int64_t t157 = 0LL;

    t157 = (x1133>>((x1134|x1135)==x1136));

    if (t157 != 7722LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x1138 = 22469U;
	int8_t x1139 = INT8_MAX;
	int8_t x1140 = INT8_MAX;
	int32_t t158 = 10257530;

    t158 = (x1137>>((x1138|x1139)==x1140));

    if (t158 != 5) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x1145 = 2800721953581LLU;
	int16_t x1146 = INT16_MAX;
	volatile int16_t x1147 = -1;
	int8_t x1148 = INT8_MIN;
	static volatile uint64_t t159 = 32791055LLU;

    t159 = (x1145>>((x1146|x1147)==x1148));

    if (t159 != 2800721953581LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint8_t x1149 = 6U;
	int8_t x1150 = 8;
	int64_t x1151 = -1LL;
	volatile uint64_t x1152 = 6784LLU;
	int32_t t160 = -1;

    t160 = (x1149>>((x1150|x1151)==x1152));

    if (t160 != 6) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x1153 = 1610;
	static int16_t x1154 = -1;
	volatile int32_t x1155 = -1;
	uint32_t x1156 = 1628U;
	volatile int32_t t161 = -4490098;

    t161 = (x1153>>((x1154|x1155)==x1156));

    if (t161 != 1610) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint32_t x1157 = 3414U;
	int32_t x1158 = INT32_MAX;
	uint8_t x1160 = 28U;
	uint32_t t162 = 280U;

    t162 = (x1157>>((x1158|x1159)==x1160));

    if (t162 != 3414U) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x1166 = INT32_MAX;
	static int32_t x1168 = INT32_MIN;
	static uint32_t t163 = 265531U;

    t163 = (x1165>>((x1166|x1167)==x1168));

    if (t163 != 413630U) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x1169 = INT64_MAX;
	int16_t x1170 = -2;
	uint32_t x1171 = 54U;
	int16_t x1172 = 8415;
	int64_t t164 = INT64_MAX;

    t164 = (x1169>>((x1170|x1171)==x1172));

    if (t164 != INT64_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x1181 = 80419152485669LLU;
	static int64_t x1182 = -125797LL;
	uint16_t x1183 = UINT16_MAX;
	uint64_t t165 = 122528970343LLU;

    t165 = (x1181>>((x1182|x1183)==x1184));

    if (t165 != 80419152485669LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x1186 = UINT16_MAX;
	volatile uint8_t x1187 = 2U;
	volatile int64_t x1188 = -1LL;
	volatile uint64_t t166 = 1478340871LLU;

    t166 = (x1185>>((x1186|x1187)==x1188));

    if (t166 != 15521883762LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x1213 = 8U;
	int8_t x1214 = 1;
	int64_t x1215 = -1LL;
	int16_t x1216 = -61;
	int32_t t167 = 93917;

    t167 = (x1213>>((x1214|x1215)==x1216));

    if (t167 != 8) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x1217 = 18;
	static volatile int16_t x1218 = -3;
	uint64_t x1219 = 9671LLU;
	int32_t t168 = 1149573;

    t168 = (x1217>>((x1218|x1219)==x1220));

    if (t168 != 18) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x1226 = 363U;
	volatile int8_t x1227 = INT8_MIN;
	uint64_t x1228 = 270477419460142LLU;

    t169 = (x1225>>((x1226|x1227)==x1228));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int8_t x1230 = -1;
	volatile int32_t t170 = -6;

    t170 = (x1229>>((x1230|x1231)==x1232));

    if (t170 != 151) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x1233 = INT16_MAX;
	volatile int16_t x1234 = -1;
	int32_t x1235 = INT32_MIN;
	int64_t x1236 = 152LL;
	volatile int32_t t171 = -129758;

    t171 = (x1233>>((x1234|x1235)==x1236));

    if (t171 != 32767) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x1241 = INT64_MAX;
	int32_t x1242 = -1;
	uint16_t x1243 = 40U;
	static volatile int64_t t172 = INT64_MAX;

    t172 = (x1241>>((x1242|x1243)==x1244));

    if (t172 != INT64_MAX) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x1250 = UINT16_MAX;
	int64_t x1251 = INT64_MIN;
	volatile int16_t x1252 = INT16_MIN;
	int32_t t173 = 2695;

    t173 = (x1249>>((x1250|x1251)==x1252));

    if (t173 != 6) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x1257 = 8372U;
	int64_t x1258 = INT64_MAX;
	volatile int8_t x1259 = INT8_MAX;
	volatile int64_t x1260 = INT64_MIN;
	volatile uint32_t t174 = 28U;

    t174 = (x1257>>((x1258|x1259)==x1260));

    if (t174 != 8372U) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile uint16_t x1261 = 230U;
	int16_t x1262 = 5663;
	int8_t x1263 = INT8_MAX;
	int32_t x1264 = INT32_MIN;
	int32_t t175 = -22775;

    t175 = (x1261>>((x1262|x1263)==x1264));

    if (t175 != 230) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint64_t x1265 = UINT64_MAX;
	int16_t x1267 = 78;
	int64_t x1268 = 21774727252068166LL;

    t176 = (x1265>>((x1266|x1267)==x1268));

    if (t176 != UINT64_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint8_t x1269 = 1U;
	int8_t x1270 = 12;
	uint32_t x1272 = 186U;
	volatile int32_t t177 = -2;

    t177 = (x1269>>((x1270|x1271)==x1272));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x1285 = 15U;
	uint16_t x1286 = 4093U;
	int32_t x1287 = -49712;
	uint8_t x1288 = 2U;
	int32_t t178 = 55395247;

    t178 = (x1285>>((x1286|x1287)==x1288));

    if (t178 != 15) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x1290 = INT16_MIN;
	volatile int64_t x1291 = 37224525LL;
	uint64_t x1292 = 1741248LLU;

    t179 = (x1289>>((x1290|x1291)==x1292));

    if (t179 != 103) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x1294 = 110710U;
	int16_t x1295 = INT16_MIN;

    t180 = (x1293>>((x1294|x1295)==x1296));

    if (t180 != 37843834080453842LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x1297 = 2608LLU;
	uint32_t x1298 = 2U;
	static int64_t x1299 = -384681744LL;
	static int8_t x1300 = -1;
	static uint64_t t181 = 5788LLU;

    t181 = (x1297>>((x1298|x1299)==x1300));

    if (t181 != 2608LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x1305 = 18723021LL;
	volatile int32_t x1306 = -227615204;
	int16_t x1307 = 1;
	uint16_t x1308 = 110U;
	static int64_t t182 = -110157579LL;

    t182 = (x1305>>((x1306|x1307)==x1308));

    if (t182 != 18723021LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x1310 = -32;
	static uint16_t x1311 = 3U;
	static uint32_t x1312 = UINT32_MAX;

    t183 = (x1309>>((x1310|x1311)==x1312));

    if (t183 != 13) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x1317 = INT64_MAX;
	int64_t x1319 = -1302200793517319077LL;
	int8_t x1320 = INT8_MIN;
	volatile int64_t t184 = INT64_MAX;

    t184 = (x1317>>((x1318|x1319)==x1320));

    if (t184 != INT64_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x1325 = UINT8_MAX;
	static uint16_t x1326 = UINT16_MAX;
	uint32_t x1328 = UINT32_MAX;
	int32_t t185 = 334505;

    t185 = (x1325>>((x1326|x1327)==x1328));

    if (t185 != 127) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x1333 = INT16_MAX;
	static uint32_t x1334 = UINT32_MAX;
	static int16_t x1335 = -1;

    t186 = (x1333>>((x1334|x1335)==x1336));

    if (t186 != 32767) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile uint64_t x1337 = UINT64_MAX;
	int16_t x1338 = INT16_MIN;
	int8_t x1339 = INT8_MIN;
	static volatile uint64_t t187 = UINT64_MAX;

    t187 = (x1337>>((x1338|x1339)==x1340));

    if (t187 != UINT64_MAX) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x1342 = 123680LL;
	int32_t x1343 = 769;
	volatile uint16_t x1344 = 346U;
	volatile int32_t t188 = -54203025;

    t188 = (x1341>>((x1342|x1343)==x1344));

    if (t188 != 255) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x1345 = 1;
	uint8_t x1346 = 0U;
	int32_t x1347 = -1;
	static volatile uint16_t x1348 = 60U;

    t189 = (x1345>>((x1346|x1347)==x1348));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x1349 = INT8_MAX;
	int8_t x1350 = -5;
	volatile int16_t x1351 = -7743;
	volatile int32_t t190 = 6;

    t190 = (x1349>>((x1350|x1351)==x1352));

    if (t190 != 127) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint16_t x1353 = 15U;
	volatile int16_t x1354 = INT16_MIN;
	uint64_t x1355 = 68625060206706490LLU;
	int32_t x1356 = INT32_MIN;

    t191 = (x1353>>((x1354|x1355)==x1356));

    if (t191 != 15) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x1357 = 6316408433458341733LLU;
	int16_t x1358 = 7078;
	volatile int32_t x1359 = -1;
	static int64_t x1360 = INT64_MAX;

    t192 = (x1357>>((x1358|x1359)==x1360));

    if (t192 != 6316408433458341733LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x1366 = INT32_MIN;
	static int16_t x1367 = 1;
	uint64_t x1368 = 3LLU;
	int32_t t193 = 2875707;

    t193 = (x1365>>((x1366|x1367)==x1368));

    if (t193 != 65535) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x1370 = INT16_MAX;
	int32_t x1371 = -7309137;
	volatile int16_t x1372 = -1;
	volatile uint64_t t194 = 9145489701608946169LLU;

    t194 = (x1369>>((x1370|x1371)==x1372));

    if (t194 != 864413183093361801LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x1373 = UINT32_MAX;
	int16_t x1374 = 6;
	static int64_t x1375 = INT64_MIN;
	static volatile int32_t x1376 = INT32_MAX;
	volatile uint32_t t195 = UINT32_MAX;

    t195 = (x1373>>((x1374|x1375)==x1376));

    if (t195 != UINT32_MAX) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x1377 = 6;
	volatile int8_t x1378 = INT8_MAX;
	static int32_t x1379 = INT32_MIN;
	uint8_t x1380 = UINT8_MAX;
	volatile int32_t t196 = 26316;

    t196 = (x1377>>((x1378|x1379)==x1380));

    if (t196 != 6) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint64_t x1381 = 8686450LLU;
	int16_t x1382 = -1;
	static volatile int64_t x1383 = INT64_MIN;
	int32_t x1384 = -23;
	uint64_t t197 = 2550633117705946844LLU;

    t197 = (x1381>>((x1382|x1383)==x1384));

    if (t197 != 8686450LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint16_t x1397 = UINT16_MAX;
	volatile int8_t x1398 = INT8_MIN;
	int16_t x1399 = -1;
	int8_t x1400 = INT8_MAX;

    t198 = (x1397>>((x1398|x1399)==x1400));

    if (t198 != 65535) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x1401 = INT8_MAX;
	static int16_t x1402 = INT16_MIN;
	int32_t x1403 = -295439017;
	int64_t x1404 = INT64_MAX;
	int32_t t199 = -12712;

    t199 = (x1401>>((x1402|x1403)==x1404));

    if (t199 != 127) { NG(); } else { ; }
	
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

