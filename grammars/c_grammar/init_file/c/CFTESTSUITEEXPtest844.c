
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

static uint32_t x3 = 6381U;
int64_t t0 = 0LL;
int32_t x13 = INT32_MIN;
uint32_t x14 = UINT32_MAX;
static uint64_t x16 = 4473280LLU;
uint64_t t3 = 17891482482318996LLU;
int8_t x38 = INT8_MIN;
int32_t x40 = 41;
static uint32_t t5 = 9760U;
static uint64_t t6 = 5LLU;
int32_t t7 = -107511614;
uint32_t x54 = 126447423U;
volatile uint8_t x55 = 35U;
volatile int16_t x58 = 1;
int16_t x63 = 3117;
static volatile int64_t t11 = -1218099144308LL;
volatile uint8_t x68 = UINT8_MAX;
static uint64_t t12 = 420803983LLU;
static int16_t x69 = INT16_MIN;
int32_t x71 = INT32_MIN;
static uint64_t x79 = 116125586LLU;
int32_t x83 = -128007;
int16_t x88 = 23;
static int16_t x89 = 771;
uint16_t x90 = 24U;
static uint16_t x113 = UINT16_MAX;
int16_t x115 = INT16_MAX;
static int32_t x123 = 5290534;
uint32_t x124 = 3920022U;
volatile uint64_t t21 = 1668843LLU;
volatile uint64_t t23 = 808892LLU;
int16_t x147 = -1;
static int32_t x151 = INT32_MAX;
static int32_t x165 = INT32_MIN;
static int16_t x173 = INT16_MAX;
int32_t x176 = 115810;
volatile int64_t t30 = -24043988LL;
volatile int32_t x178 = INT32_MIN;
uint32_t t33 = 5132353U;
static int32_t x218 = INT32_MAX;
int32_t x231 = 31;
int64_t x232 = -13LL;
volatile uint32_t x256 = 116U;
volatile uint64_t t40 = 46071366440LLU;
int32_t x270 = INT32_MAX;
volatile uint64_t x282 = 3630534514LLU;
static int32_t x289 = -1;
static int16_t x291 = INT16_MIN;
uint32_t x318 = UINT32_MAX;
uint64_t x332 = 107338098LLU;
volatile uint64_t x334 = 14654LLU;
uint64_t t50 = 45467667068LLU;
static int16_t x337 = 4;
static int16_t x338 = INT16_MIN;
volatile int32_t t51 = 9;
int16_t x341 = INT16_MIN;
int8_t x344 = INT8_MIN;
int64_t x359 = INT64_MAX;
static uint64_t t57 = 101LLU;
volatile uint64_t t58 = 63123367LLU;
uint16_t x388 = UINT16_MAX;
volatile int8_t x389 = -5;
volatile int16_t x390 = INT16_MAX;
int64_t x397 = -2783LL;
int8_t x401 = INT8_MAX;
static int64_t x414 = INT64_MIN;
static uint64_t x423 = UINT64_MAX;
volatile int16_t x441 = INT16_MAX;
volatile uint64_t x443 = 315071LLU;
int64_t x450 = 812564LL;
uint32_t x454 = UINT32_MAX;
int8_t x470 = INT8_MAX;
volatile uint8_t x486 = 22U;
uint32_t x489 = 204U;
uint8_t x491 = 86U;
volatile int64_t t73 = -70727305LL;
volatile int64_t t74 = 25549937568LL;
int8_t x498 = INT8_MIN;
volatile uint16_t x501 = 30106U;
uint64_t x504 = 27988LLU;
static int32_t x505 = INT32_MIN;
static int16_t x508 = -23;
static int64_t t77 = 12772127LL;
int32_t x512 = 116652631;
int32_t t79 = 1865355;
int64_t t80 = -339633053031569140LL;
static volatile int16_t x548 = -1;
static uint16_t x553 = 2U;
static volatile int64_t t84 = 1368058853739LL;
int32_t x561 = 2;
volatile int32_t x563 = INT32_MIN;
static uint64_t x566 = 1501159LLU;
int32_t x586 = INT32_MIN;
volatile uint8_t x587 = UINT8_MAX;
int32_t x603 = -36;
int32_t x606 = INT32_MAX;
int16_t x607 = INT16_MIN;
volatile int64_t t91 = 591788LL;
volatile int64_t t94 = 39332985578546LL;
int16_t x640 = INT16_MIN;
int64_t x644 = INT64_MIN;
int32_t x646 = -9;
int8_t x654 = 18;
int16_t x656 = INT16_MIN;
uint64_t x682 = UINT64_MAX;
int64_t x703 = -12307729730LL;
int16_t x705 = INT16_MIN;
uint16_t x714 = UINT16_MAX;
int16_t x715 = INT16_MAX;
volatile int8_t x719 = INT8_MIN;
static int32_t x720 = -23636;
volatile uint32_t x727 = 76204U;
volatile int64_t t108 = 1010LL;
volatile uint64_t x759 = 694LLU;
uint16_t x762 = 30U;
uint64_t x776 = 3777777697LLU;
static uint64_t x777 = UINT64_MAX;
volatile uint64_t t116 = 54824891158938395LLU;
int32_t x802 = 6598610;
volatile int32_t t118 = -3;
uint64_t x807 = 2447848261692242789LLU;
static uint16_t x808 = 4057U;
volatile int32_t x812 = -3045;
uint64_t x813 = UINT64_MAX;
static uint16_t x816 = UINT16_MAX;
static volatile int16_t x824 = 5459;
uint16_t x827 = 687U;
static int64_t x828 = INT64_MAX;
uint64_t t123 = 3974LLU;
uint8_t x829 = 24U;
volatile int64_t t127 = 5787665046347973LL;
static volatile uint64_t t128 = 8850879188220542LLU;
static int64_t x873 = INT64_MIN;
int32_t x890 = INT32_MIN;
int64_t x893 = 56LL;
int64_t x900 = INT64_MIN;
static int64_t x909 = -37822013565LL;
int16_t x910 = -373;
int16_t x911 = INT16_MAX;
volatile int64_t t135 = -155531LL;
int32_t x917 = 1;
int32_t x927 = INT32_MIN;
volatile uint16_t x928 = 988U;
volatile int16_t x941 = INT16_MAX;
int16_t x944 = INT16_MIN;
static int64_t x946 = INT64_MIN;
static int64_t x947 = -29920615123684LL;
volatile uint16_t x948 = 15704U;
int16_t x951 = 797;
int64_t x952 = -173LL;
volatile uint64_t t143 = 2042636312151706LLU;
static volatile int64_t t144 = 276074871672327225LL;
int8_t x960 = INT8_MAX;
static int16_t x963 = -14451;
static volatile uint64_t t147 = 4614331LLU;
volatile uint8_t x974 = 104U;
volatile int16_t x975 = INT16_MIN;
volatile int64_t t150 = -86828970690966559LL;
int16_t x1020 = INT16_MIN;
static int64_t x1021 = INT64_MIN;
uint64_t x1024 = UINT64_MAX;
volatile int32_t x1038 = -9622;
uint32_t t155 = 0U;
uint8_t x1051 = 26U;
static volatile uint16_t x1056 = 1865U;
volatile int32_t x1060 = INT32_MIN;
static uint64_t x1065 = 4319478213800777LLU;
uint32_t x1089 = UINT32_MAX;
volatile int64_t t166 = -13652827365LL;
int16_t x1121 = 3;
int32_t x1122 = INT32_MAX;
volatile int32_t t167 = -1055;
uint32_t x1132 = 237950319U;
volatile uint8_t x1134 = UINT8_MAX;
uint64_t t169 = 49LLU;
uint32_t x1142 = 84U;
uint32_t t171 = 407596U;
int16_t x1148 = INT16_MIN;
int32_t x1151 = INT32_MIN;
uint32_t x1154 = UINT32_MAX;
int16_t x1155 = INT16_MAX;
volatile uint32_t t174 = 5375193U;
static uint64_t x1167 = 46035678080LLU;
int64_t t176 = 282059762LL;
int8_t x1173 = -6;
static int64_t x1178 = INT64_MIN;
int8_t x1180 = INT8_MIN;
volatile int16_t x1208 = INT16_MAX;
volatile uint32_t x1209 = 2U;
int32_t x1213 = INT32_MIN;
static volatile int8_t x1215 = -13;
uint8_t x1235 = 3U;
int16_t x1241 = INT16_MIN;
int16_t x1245 = INT16_MAX;
static volatile uint64_t t191 = 1LLU;
uint32_t x1260 = 114492U;
static volatile uint32_t x1263 = 10U;
volatile int64_t t195 = -1625161454237646965LL;
static int8_t x1281 = INT8_MIN;
uint32_t x1282 = 261281873U;
uint16_t x1284 = 6U;
uint8_t x1293 = 1U;


void f0(void) {
    	static volatile int32_t x1 = 45;
	int64_t x2 = -1LL;
	volatile int64_t x4 = INT64_MIN;

    t0 = (x1/((x2%x3)%x4));

    if (t0 != -45LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x5 = -1;
	volatile int32_t x6 = -77722;
	int8_t x7 = -3;
	static int8_t x8 = INT8_MIN;
	int32_t t1 = 11;

    t1 = (x5/((x6%x7)%x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x15 = INT16_MIN;
	volatile uint64_t t2 = 46486572235802LLU;

    t2 = (x13/((x14%x15)%x16));

    if (t2 != 562967133749262LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x25 = 7915217016909288LLU;
	uint16_t x26 = 30860U;
	volatile int32_t x27 = -163;
	int32_t x28 = INT32_MIN;

    t3 = (x25/((x26%x27)%x28));

    if (t3 != 149343717300175LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x33 = UINT32_MAX;
	int64_t x34 = INT64_MIN;
	int8_t x35 = INT8_MAX;
	int64_t x36 = 497LL;
	int64_t t4 = -337840382169LL;

    t4 = (x33/((x34%x35)%x36));

    if (t4 != -4294967295LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint32_t x37 = UINT32_MAX;
	int16_t x39 = INT16_MIN;

    t5 = (x37/((x38%x39)%x40));

    if (t5 != 1U) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x41 = INT8_MAX;
	static int8_t x42 = 6;
	uint64_t x43 = UINT64_MAX;
	int32_t x44 = -1;

    t6 = (x41/((x42%x43)%x44));

    if (t6 != 21LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x45 = INT8_MAX;
	volatile int8_t x46 = INT8_MAX;
	static uint16_t x47 = 15U;
	int16_t x48 = 1720;

    t7 = (x45/((x46%x47)%x48));

    if (t7 != 18) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x49 = INT8_MIN;
	int8_t x50 = -1;
	int32_t x51 = 29;
	int16_t x52 = INT16_MIN;
	volatile int32_t t8 = 0;

    t8 = (x49/((x50%x51)%x52));

    if (t8 != 128) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x53 = -1346LL;
	static volatile int16_t x56 = -1;
	volatile int64_t t9 = 6919626LL;

    t9 = (x53/((x54%x55)%x56));

    if (t9 != -74LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x57 = -1LL;
	int16_t x59 = INT16_MIN;
	int64_t x60 = INT64_MIN;
	volatile int64_t t10 = 1147672791615LL;

    t10 = (x57/((x58%x59)%x60));

    if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int64_t x61 = INT64_MIN;
	int8_t x62 = -5;
	int8_t x64 = INT8_MIN;

    t11 = (x61/((x62%x63)%x64));

    if (t11 != 1844674407370955161LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x65 = UINT8_MAX;
	static uint64_t x66 = UINT64_MAX;
	volatile uint32_t x67 = 29U;

    t12 = (x65/((x66%x67)%x68));

    if (t12 != 11LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int64_t x70 = -1LL;
	volatile int8_t x72 = -21;
	volatile int64_t t13 = -945713LL;

    t13 = (x69/((x70%x71)%x72));

    if (t13 != 32768LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint16_t x77 = UINT16_MAX;
	uint32_t x78 = 1503472479U;
	volatile int32_t x80 = INT32_MIN;
	uint64_t t14 = 1732332LLU;

    t14 = (x77/((x78%x79)%x80));

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x81 = INT64_MIN;
	int64_t x82 = -2309676922434169110LL;
	static int64_t x84 = INT64_MIN;
	static volatile int64_t t15 = 1670067LL;

    t15 = (x81/((x82%x83)%x84));

    if (t15 != 101514143353967LL) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x85 = -1LL;
	int32_t x86 = 9129559;
	static int32_t x87 = INT32_MAX;
	volatile int64_t t16 = -8485313300701LL;

    t16 = (x85/((x86%x87)%x88));

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint8_t x91 = 21U;
	int32_t x92 = INT32_MIN;
	static volatile int32_t t17 = 498;

    t17 = (x89/((x90%x91)%x92));

    if (t17 != 257) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x101 = 112LLU;
	int16_t x102 = INT16_MAX;
	int16_t x103 = INT16_MIN;
	uint32_t x104 = UINT32_MAX;
	uint64_t t18 = 411402621204843LLU;

    t18 = (x101/((x102%x103)%x104));

    if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x109 = -887811758470253299LL;
	int64_t x110 = -1LL;
	static int64_t x111 = INT64_MIN;
	static int8_t x112 = INT8_MIN;
	int64_t t19 = -40203504170LL;

    t19 = (x109/((x110%x111)%x112));

    if (t19 != 887811758470253299LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x114 = -1LL;
	int32_t x116 = INT32_MIN;
	int64_t t20 = 103741770431094615LL;

    t20 = (x113/((x114%x115)%x116));

    if (t20 != -65535LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x121 = 3637U;
	uint64_t x122 = 9050422686972666976LLU;

    t21 = (x121/((x122%x123)%x124));

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint16_t x125 = 588U;
	uint8_t x126 = UINT8_MAX;
	uint32_t x127 = UINT32_MAX;
	int8_t x128 = -13;
	static uint32_t t22 = 949918909U;

    t22 = (x125/((x126%x127)%x128));

    if (t22 != 2U) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x129 = 48U;
	int64_t x130 = INT64_MAX;
	static uint8_t x131 = UINT8_MAX;
	uint64_t x132 = 441361972274096LLU;

    t23 = (x129/((x130%x131)%x132));

    if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x141 = -290839;
	volatile int16_t x142 = INT16_MAX;
	static int64_t x143 = -1353456704LL;
	static uint16_t x144 = 110U;
	volatile int64_t t24 = -1LL;

    t24 = (x141/((x142%x143)%x144));

    if (t24 != -2998LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x145 = -7;
	uint32_t x146 = 2U;
	int8_t x148 = INT8_MIN;
	volatile uint32_t t25 = 28224262U;

    t25 = (x145/((x146%x147)%x148));

    if (t25 != 2147483644U) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x149 = INT32_MAX;
	static int16_t x150 = 43;
	volatile int64_t x152 = 63LL;
	int64_t t26 = -6501778LL;

    t26 = (x149/((x150%x151)%x152));

    if (t26 != 49941480LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x161 = INT64_MAX;
	uint8_t x162 = 20U;
	int8_t x163 = INT8_MIN;
	uint64_t x164 = UINT64_MAX;
	uint64_t t27 = 14443006LLU;

    t27 = (x161/((x162%x163)%x164));

    if (t27 != 461168601842738790LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int16_t x166 = -4391;
	volatile int32_t x167 = INT32_MIN;
	int8_t x168 = -3;
	volatile int32_t t28 = -3451150;

    t28 = (x165/((x166%x167)%x168));

    if (t28 != 1073741824) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile uint32_t x169 = UINT32_MAX;
	static uint32_t x170 = UINT32_MAX;
	uint16_t x171 = 28324U;
	uint16_t x172 = 15587U;
	volatile uint32_t t29 = 80067368U;

    t29 = (x169/((x170%x171)%x172));

    if (t29 != 4735355U) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x174 = INT64_MAX;
	static int64_t x175 = 31595992101LL;

    t30 = (x173/((x174%x175)%x176));

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint64_t x177 = 155570984LLU;
	static uint64_t x179 = 390371054801198737LLU;
	static int32_t x180 = INT32_MAX;
	uint64_t t31 = 724020LLU;

    t31 = (x177/((x178%x179)%x180));

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x189 = 3U;
	uint16_t x190 = UINT16_MAX;
	int32_t x191 = 68565;
	static uint8_t x192 = 69U;
	static volatile int32_t t32 = -10;

    t32 = (x189/((x190%x191)%x192));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x197 = 70U;
	uint32_t x198 = 14077875U;
	static uint8_t x199 = UINT8_MAX;
	int16_t x200 = INT16_MAX;

    t33 = (x197/((x198%x199)%x200));

    if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x205 = 236U;
	static uint64_t x206 = 11007908LLU;
	static int64_t x207 = -1LL;
	static int64_t x208 = 156LL;
	volatile uint64_t t34 = 0LLU;

    t34 = (x205/((x206%x207)%x208));

    if (t34 != 2LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int64_t x217 = -1797253788842166LL;
	int32_t x219 = INT32_MIN;
	uint64_t x220 = 11284748847LLU;
	static uint64_t t35 = 9715736451848025LLU;

    t35 = (x217/((x218%x219)%x220));

    if (t35 != 8589097684LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x221 = -778744048;
	int16_t x222 = INT16_MIN;
	int8_t x223 = -3;
	int32_t x224 = -25838660;
	int32_t t36 = 4680149;

    t36 = (x221/((x222%x223)%x224));

    if (t36 != 389372024) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x229 = UINT32_MAX;
	int16_t x230 = 1159;
	int64_t t37 = 1787LL;

    t37 = (x229/((x230%x231)%x232));

    if (t37 != 357913941LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x245 = 22;
	static int16_t x246 = INT16_MIN;
	uint16_t x247 = 97U;
	int64_t x248 = -162LL;
	int64_t t38 = -12831064281LL;

    t38 = (x245/((x246%x247)%x248));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x249 = -1;
	volatile uint64_t x250 = 125LLU;
	int8_t x251 = INT8_MIN;
	volatile int32_t x252 = -1;
	static volatile uint64_t t39 = 141LLU;

    t39 = (x249/((x250%x251)%x252));

    if (t39 != 147573952589676412LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x253 = 82U;
	uint64_t x254 = 520410284288353LLU;
	volatile uint32_t x255 = UINT32_MAX;

    t40 = (x253/((x254%x255)%x256));

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x261 = INT8_MIN;
	volatile int32_t x262 = -1;
	int8_t x263 = INT8_MAX;
	volatile int64_t x264 = INT64_MAX;
	volatile int64_t t41 = 1425746103589376LL;

    t41 = (x261/((x262%x263)%x264));

    if (t41 != 128LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x265 = INT64_MIN;
	uint64_t x266 = 263241576843LLU;
	static int16_t x267 = INT16_MIN;
	volatile int32_t x268 = 99;
	volatile uint64_t t42 = 23906145LLU;

    t42 = (x265/((x266%x267)%x268));

    if (t42 != 133672058505141678LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x269 = INT64_MIN;
	volatile uint32_t x271 = 4024251U;
	int16_t x272 = INT16_MAX;
	int64_t t43 = 194012LL;

    t43 = (x269/((x270%x271)%x272));

    if (t43 != -4525697760968977LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x273 = -14341;
	int64_t x274 = INT64_MIN;
	static int32_t x275 = INT32_MAX;
	uint16_t x276 = UINT16_MAX;
	int64_t t44 = -7LL;

    t44 = (x273/((x274%x275)%x276));

    if (t44 != 7170LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x281 = 1;
	static int8_t x283 = INT8_MIN;
	int64_t x284 = INT64_MIN;
	uint64_t t45 = 642631548LLU;

    t45 = (x281/((x282%x283)%x284));

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x285 = -1;
	uint32_t x286 = 304U;
	int16_t x287 = INT16_MAX;
	int8_t x288 = INT8_MIN;
	volatile uint32_t t46 = 4408122U;

    t46 = (x285/((x286%x287)%x288));

    if (t46 != 14128181U) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x290 = 1U;
	int8_t x292 = -2;
	volatile int32_t t47 = -2774904;

    t47 = (x289/((x290%x291)%x292));

    if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x317 = -3LL;
	static volatile int32_t x319 = INT32_MIN;
	static uint8_t x320 = 51U;
	int64_t t48 = -694363LL;

    t48 = (x317/((x318%x319)%x320));

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x329 = -1LL;
	int64_t x330 = INT64_MIN;
	uint8_t x331 = UINT8_MAX;
	uint64_t t49 = 23596428LLU;

    t49 = (x329/((x330%x331)%x332));

    if (t49 != 2019753508663LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x333 = INT32_MAX;
	uint64_t x335 = 6542691LLU;
	int64_t x336 = -1LL;

    t50 = (x333/((x334%x335)%x336));

    if (t50 != 146545LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static int32_t x339 = 79;
	int8_t x340 = INT8_MAX;

    t51 = (x337/((x338%x339)%x340));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x342 = 23;
	uint8_t x343 = 3U;
	volatile int32_t t52 = -1386;

    t52 = (x341/((x342%x343)%x344));

    if (t52 != -16384) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x345 = INT32_MIN;
	static int64_t x346 = -1LL;
	int64_t x347 = -10111736LL;
	uint16_t x348 = 25U;
	volatile int64_t t53 = 612722863193LL;

    t53 = (x345/((x346%x347)%x348));

    if (t53 != 2147483648LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x349 = 1U;
	int32_t x350 = INT32_MIN;
	static volatile int8_t x351 = -5;
	int64_t x352 = INT64_MAX;
	volatile int64_t t54 = 987371043763565LL;

    t54 = (x349/((x350%x351)%x352));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x353 = 12U;
	int16_t x354 = INT16_MAX;
	uint64_t x355 = UINT64_MAX;
	int8_t x356 = INT8_MIN;
	uint64_t t55 = 47LLU;

    t55 = (x353/((x354%x355)%x356));

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile uint8_t x357 = UINT8_MAX;
	volatile uint32_t x358 = 25U;
	int16_t x360 = INT16_MIN;
	int64_t t56 = -20464LL;

    t56 = (x357/((x358%x359)%x360));

    if (t56 != 10LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint16_t x369 = 3312U;
	int16_t x370 = INT16_MIN;
	uint64_t x371 = UINT64_MAX;
	int16_t x372 = -1;

    t57 = (x369/((x370%x371)%x372));

    if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint64_t x377 = 179LLU;
	static int16_t x378 = -894;
	int16_t x379 = -28;
	int32_t x380 = INT32_MAX;

    t58 = (x377/((x378%x379)%x380));

    if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int8_t x385 = INT8_MIN;
	volatile uint16_t x386 = UINT16_MAX;
	static int8_t x387 = INT8_MIN;
	int32_t t59 = -241703;

    t59 = (x385/((x386%x387)%x388));

    if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x391 = -519444LL;
	int32_t x392 = INT32_MAX;
	volatile int64_t t60 = 35135212152624LL;

    t60 = (x389/((x390%x391)%x392));

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int64_t x398 = -1LL;
	uint32_t x399 = 6870505U;
	int16_t x400 = 338;
	static volatile int64_t t61 = -257449525762900591LL;

    t61 = (x397/((x398%x399)%x400));

    if (t61 != 2783LL) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x402 = INT64_MAX;
	int32_t x403 = 4;
	int8_t x404 = INT8_MAX;
	int64_t t62 = -125515LL;

    t62 = (x401/((x402%x403)%x404));

    if (t62 != 42LL) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x413 = -618;
	uint64_t x415 = 83LLU;
	int64_t x416 = INT64_MAX;
	uint64_t t63 = 2193832225370481832LLU;

    t63 = (x413/((x414%x415)%x416));

    if (t63 != 1024819115206086166LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x417 = -1;
	int32_t x418 = -6572;
	int8_t x419 = INT8_MIN;
	static uint64_t x420 = UINT64_MAX;
	uint64_t t64 = 101273180LLU;

    t64 = (x417/((x418%x419)%x420));

    if (t64 != 1LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x421 = -91;
	volatile int64_t x422 = -14826770LL;
	int8_t x424 = -1;
	uint64_t t65 = 778163567LLU;

    t65 = (x421/((x422%x423)%x424));

    if (t65 != 1LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x429 = -201327755909477LL;
	volatile int32_t x430 = INT32_MIN;
	uint32_t x431 = UINT32_MAX;
	int16_t x432 = -197;
	volatile int64_t t66 = -14LL;

    t66 = (x429/((x430%x431)%x432));

    if (t66 != -93750LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x442 = -14;
	int64_t x444 = 3995LL;
	volatile uint64_t t67 = 58851802315773069LLU;

    t67 = (x441/((x442%x443)%x444));

    if (t67 != 11LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x449 = -1;
	uint32_t x451 = UINT32_MAX;
	int8_t x452 = -24;
	static int64_t t68 = -63LL;

    t68 = (x449/((x450%x451)%x452));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x453 = -1LL;
	int16_t x455 = INT16_MIN;
	int16_t x456 = INT16_MIN;
	int64_t t69 = -2131926420941600LL;

    t69 = (x453/((x454%x455)%x456));

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x469 = INT8_MIN;
	int32_t x471 = INT32_MIN;
	volatile int16_t x472 = INT16_MIN;
	volatile int32_t t70 = -5532;

    t70 = (x469/((x470%x471)%x472));

    if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint8_t x477 = 63U;
	int8_t x478 = 1;
	static volatile uint8_t x479 = 21U;
	uint64_t x480 = 315314522451LLU;
	static volatile uint64_t t71 = 171313LLU;

    t71 = (x477/((x478%x479)%x480));

    if (t71 != 63LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x485 = 1534676U;
	volatile uint32_t x487 = UINT32_MAX;
	int8_t x488 = INT8_MIN;
	static uint32_t t72 = 978478302U;

    t72 = (x485/((x486%x487)%x488));

    if (t72 != 69758U) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x490 = -1LL;
	static uint32_t x492 = UINT32_MAX;

    t73 = (x489/((x490%x491)%x492));

    if (t73 != -204LL) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint32_t x493 = 1U;
	uint32_t x494 = 230091U;
	static int64_t x495 = -20306286097LL;
	int64_t x496 = 551002900701LL;

    t74 = (x493/((x494%x495)%x496));

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x497 = INT64_MIN;
	uint32_t x499 = UINT32_MAX;
	int32_t x500 = -1;
	int64_t t75 = -23796538720463559LL;

    t75 = (x497/((x498%x499)%x500));

    if (t75 != -2147483712LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x502 = UINT8_MAX;
	uint16_t x503 = UINT16_MAX;
	static uint64_t t76 = 115649LLU;

    t76 = (x501/((x502%x503)%x504));

    if (t76 != 118LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile int64_t x506 = 1117735376804426LL;
	int16_t x507 = INT16_MIN;

    t77 = (x505/((x506%x507)%x508));

    if (t77 != -97612893LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x509 = UINT32_MAX;
	static uint64_t x510 = 170241323494883LLU;
	uint16_t x511 = 142U;
	uint64_t t78 = 331018291860771LLU;

    t78 = (x509/((x510%x511)%x512));

    if (t78 != 252645135LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x513 = 9U;
	int8_t x514 = INT8_MIN;
	int32_t x515 = INT32_MIN;
	volatile int32_t x516 = INT32_MIN;

    t79 = (x513/((x514%x515)%x516));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x517 = 1;
	static int64_t x518 = INT64_MAX;
	int16_t x519 = INT16_MIN;
	uint32_t x520 = 94735U;

    t80 = (x517/((x518%x519)%x520));

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x521 = INT16_MIN;
	int16_t x522 = -14;
	volatile uint8_t x523 = UINT8_MAX;
	int32_t x524 = 296;
	static int32_t t81 = -35806;

    t81 = (x521/((x522%x523)%x524));

    if (t81 != 2340) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x545 = INT32_MIN;
	static uint8_t x546 = 24U;
	uint64_t x547 = 5122565443LLU;
	static volatile uint64_t t82 = 2103386LLU;

    t82 = (x545/((x546%x547)%x548));

    if (t82 != 768614336315086165LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x549 = INT32_MIN;
	static uint64_t x550 = 1710643060380LLU;
	volatile uint16_t x551 = 28913U;
	uint32_t x552 = 138662866U;
	uint64_t t83 = 578367253715LLU;

    t83 = (x549/((x550%x551)%x552));

    if (t83 != 2132818137537526LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x554 = INT8_MIN;
	static volatile uint8_t x555 = 103U;
	int64_t x556 = INT64_MIN;

    t84 = (x553/((x554%x555)%x556));

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x562 = -1;
	int8_t x564 = INT8_MIN;
	volatile int32_t t85 = -28;

    t85 = (x561/((x562%x563)%x564));

    if (t85 != -2) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x565 = UINT8_MAX;
	uint64_t x567 = UINT64_MAX;
	int32_t x568 = 1818;
	uint64_t t86 = 3224430LLU;

    t86 = (x565/((x566%x567)%x568));

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x573 = 15;
	int8_t x574 = 1;
	static uint8_t x575 = 5U;
	static int16_t x576 = INT16_MAX;
	int32_t t87 = 3766420;

    t87 = (x573/((x574%x575)%x576));

    if (t87 != 15) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x585 = INT64_MIN;
	int32_t x588 = INT32_MIN;
	volatile int64_t t88 = -605691327LL;

    t88 = (x585/((x586%x587)%x588));

    if (t88 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x589 = -25;
	static uint64_t x590 = 1884468LLU;
	static int8_t x591 = 13;
	static int8_t x592 = INT8_MAX;
	uint64_t t89 = 56LLU;

    t89 = (x589/((x590%x591)%x592));

    if (t89 != 18446744073709551591LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x601 = 2761LLU;
	static int32_t x602 = INT32_MIN;
	int16_t x604 = INT16_MIN;
	uint64_t t90 = 254LLU;

    t90 = (x601/((x602%x603)%x604));

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x605 = INT8_MIN;
	volatile int64_t x608 = INT64_MIN;

    t91 = (x605/((x606%x607)%x608));

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint16_t x609 = 14U;
	volatile int32_t x610 = -1;
	static uint16_t x611 = 24804U;
	uint32_t x612 = 21U;
	uint32_t t92 = 0U;

    t92 = (x609/((x610%x611)%x612));

    if (t92 != 4U) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint64_t x613 = 12756912LLU;
	static volatile uint64_t x614 = 26916186LLU;
	static int8_t x615 = INT8_MIN;
	int64_t x616 = INT64_MIN;
	static volatile uint64_t t93 = 685184710826LLU;

    t93 = (x613/((x614%x615)%x616));

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int64_t x621 = INT64_MIN;
	int32_t x622 = -3042635;
	int64_t x623 = -126342823LL;
	uint8_t x624 = UINT8_MAX;

    t94 = (x621/((x622%x623)%x624));

    if (t94 != 40101617551542503LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x637 = INT64_MAX;
	volatile uint64_t x638 = 1028053LLU;
	static int16_t x639 = -1;
	volatile uint64_t t95 = 4776605LLU;

    t95 = (x637/((x638%x639)%x640));

    if (t95 != 8971689238643LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x641 = -70095325;
	int64_t x642 = -1LL;
	static int32_t x643 = INT32_MIN;
	static volatile int64_t t96 = 5688853LL;

    t96 = (x641/((x642%x643)%x644));

    if (t96 != 70095325LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x645 = UINT16_MAX;
	uint64_t x647 = 406LLU;
	int16_t x648 = -1;
	volatile uint64_t t97 = 3460446LLU;

    t97 = (x645/((x646%x647)%x648));

    if (t97 != 346LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint32_t x649 = UINT32_MAX;
	static int16_t x650 = 1257;
	volatile uint8_t x651 = 2U;
	uint32_t x652 = UINT32_MAX;
	uint32_t t98 = UINT32_MAX;

    t98 = (x649/((x650%x651)%x652));

    if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x653 = INT64_MIN;
	volatile int64_t x655 = 126950LL;
	volatile int64_t t99 = 1867168615350LL;

    t99 = (x653/((x654%x655)%x656));

    if (t99 != -512409557603043100LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static int16_t x661 = -68;
	int8_t x662 = 8;
	static uint8_t x663 = 6U;
	int8_t x664 = 36;
	volatile int32_t t100 = 28063011;

    t100 = (x661/((x662%x663)%x664));

    if (t100 != -34) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x669 = INT16_MAX;
	volatile int8_t x670 = 1;
	int16_t x671 = -3;
	volatile uint8_t x672 = 94U;
	volatile int32_t t101 = 13023;

    t101 = (x669/((x670%x671)%x672));

    if (t101 != 32767) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x681 = UINT32_MAX;
	uint64_t x683 = 1037762801LLU;
	uint32_t x684 = UINT32_MAX;
	static volatile uint64_t t102 = 57410LLU;

    t102 = (x681/((x682%x683)%x684));

    if (t102 != 13LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x701 = -1;
	int64_t x702 = -1LL;
	int32_t x704 = INT32_MAX;
	volatile int64_t t103 = 427LL;

    t103 = (x701/((x702%x703)%x704));

    if (t103 != 1LL) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x706 = -84514739668LL;
	int32_t x707 = INT32_MIN;
	uint8_t x708 = UINT8_MAX;
	int64_t t104 = -757LL;

    t104 = (x705/((x706%x707)%x708));

    if (t104 != 2048LL) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int8_t x709 = INT8_MIN;
	volatile uint64_t x710 = UINT64_MAX;
	int8_t x711 = -26;
	uint64_t x712 = UINT64_MAX;
	volatile uint64_t t105 = 11958766961092LLU;

    t105 = (x709/((x710%x711)%x712));

    if (t105 != 737869762948382059LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile uint8_t x713 = UINT8_MAX;
	int64_t x716 = INT64_MIN;
	volatile int64_t t106 = -14761LL;

    t106 = (x713/((x714%x715)%x716));

    if (t106 != 255LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x717 = -307127850490435995LL;
	int64_t x718 = 4055712937473015LL;
	volatile int64_t t107 = 10338LL;

    t107 = (x717/((x718%x719)%x720));

    if (t107 != -2580906306642319LL) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint16_t x725 = 260U;
	int64_t x726 = INT64_MIN;
	uint8_t x728 = 5U;

    t108 = (x725/((x726%x727)%x728));

    if (t108 != -130LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x729 = INT16_MAX;
	int64_t x730 = -1LL;
	volatile int32_t x731 = INT32_MIN;
	volatile int8_t x732 = INT8_MIN;
	volatile int64_t t109 = -341633373037LL;

    t109 = (x729/((x730%x731)%x732));

    if (t109 != -32767LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x749 = -63923170;
	volatile uint32_t x750 = 115U;
	uint64_t x751 = 1208845362274LLU;
	int64_t x752 = -1LL;
	volatile uint64_t t110 = 3LLU;

    t110 = (x749/((x750%x751)%x752));

    if (t110 != 160406470205614160LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x753 = 16453101;
	int16_t x754 = INT16_MIN;
	volatile int16_t x755 = -50;
	volatile int64_t x756 = INT64_MAX;
	volatile int64_t t111 = -11468946LL;

    t111 = (x753/((x754%x755)%x756));

    if (t111 != -914061LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int32_t x757 = INT32_MIN;
	static int8_t x758 = INT8_MAX;
	int16_t x760 = 360;
	uint64_t t112 = 265733589592750486LLU;

    t112 = (x757/((x758%x759)%x760));

    if (t112 != 145249953319386361LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x761 = -221;
	int16_t x763 = 4192;
	volatile int64_t x764 = -269430277615LL;
	int64_t t113 = 123195LL;

    t113 = (x761/((x762%x763)%x764));

    if (t113 != -7LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x769 = INT32_MAX;
	static int32_t x770 = INT32_MAX;
	uint8_t x771 = UINT8_MAX;
	uint16_t x772 = 30U;
	volatile int32_t t114 = 14853;

    t114 = (x769/((x770%x771)%x772));

    if (t114 != 306783378) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x773 = -15;
	int8_t x774 = -1;
	int32_t x775 = 233242019;
	uint64_t t115 = 757283955807468419LLU;

    t115 = (x773/((x774%x775)%x776));

    if (t115 != 4985730576LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x778 = INT32_MIN;
	uint64_t x779 = 119441903153215LLU;
	volatile int8_t x780 = -1;

    t116 = (x777/((x778%x779)%x780));

    if (t116 != 1078335LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x793 = 71LLU;
	int64_t x794 = INT64_MIN;
	uint64_t x795 = 136LLU;
	static uint8_t x796 = UINT8_MAX;
	uint64_t t117 = 48260182299838LLU;

    t117 = (x793/((x794%x795)%x796));

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x801 = 3U;
	static int16_t x803 = INT16_MAX;
	int8_t x804 = INT8_MAX;

    t118 = (x801/((x802%x803)%x804));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x805 = -27;
	static int32_t x806 = INT32_MIN;
	static volatile uint64_t t119 = 29LLU;

    t119 = (x805/((x806%x807)%x808));

    if (t119 != 59124179723428049LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x809 = -1;
	volatile uint32_t x810 = 1983U;
	volatile uint64_t x811 = 345539538247679542LLU;
	uint64_t t120 = 884516138884LLU;

    t120 = (x809/((x810%x811)%x812));

    if (t120 != 9302442800660389LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x814 = 39959128927154353LLU;
	uint32_t x815 = UINT32_MAX;
	volatile uint64_t t121 = 115640437887LLU;

    t121 = (x813/((x814%x815)%x816));

    if (t121 != 774000087010009LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x821 = -2880;
	int8_t x822 = INT8_MAX;
	uint16_t x823 = UINT16_MAX;
	int32_t t122 = -1934;

    t122 = (x821/((x822%x823)%x824));

    if (t122 != -22) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x825 = INT32_MAX;
	uint64_t x826 = 331608304105933096LLU;

    t123 = (x825/((x826%x827)%x828));

    if (t123 != 8103711LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int64_t x830 = 28LL;
	int8_t x831 = -21;
	uint32_t x832 = UINT32_MAX;
	int64_t t124 = 1952638008733473110LL;

    t124 = (x829/((x830%x831)%x832));

    if (t124 != 3LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x833 = INT8_MAX;
	int64_t x834 = -1LL;
	int32_t x835 = INT32_MAX;
	int32_t x836 = 104321392;
	volatile int64_t t125 = -6445923206787LL;

    t125 = (x833/((x834%x835)%x836));

    if (t125 != -127LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x841 = -1;
	uint8_t x842 = UINT8_MAX;
	uint16_t x843 = 7U;
	static int64_t x844 = INT64_MIN;
	int64_t t126 = -3719778495540626729LL;

    t126 = (x841/((x842%x843)%x844));

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x845 = INT64_MIN;
	static int8_t x846 = INT8_MIN;
	uint32_t x847 = UINT32_MAX;
	int16_t x848 = -161;

    t127 = (x845/((x846%x847)%x848));

    if (t127 != -279496122328932600LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x853 = 41371449904LLU;
	static int32_t x854 = INT32_MAX;
	uint16_t x855 = 1066U;
	static uint8_t x856 = 38U;

    t128 = (x853/((x854%x855)%x856));

    if (t128 != 1118147294LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x861 = INT16_MIN;
	static uint8_t x862 = 1U;
	int64_t x863 = 3570999LL;
	uint16_t x864 = 3U;
	volatile int64_t t129 = -56LL;

    t129 = (x861/((x862%x863)%x864));

    if (t129 != -32768LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x874 = 7U;
	volatile int64_t x875 = -96059478243428LL;
	int32_t x876 = INT32_MIN;
	volatile int64_t t130 = -98845398LL;

    t130 = (x873/((x874%x875)%x876));

    if (t130 != -1317624576693539401LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x889 = UINT16_MAX;
	uint8_t x891 = UINT8_MAX;
	volatile int32_t x892 = INT32_MIN;
	int32_t t131 = -1445;

    t131 = (x889/((x890%x891)%x892));

    if (t131 != -511) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x894 = UINT8_MAX;
	uint32_t x895 = 11632554U;
	volatile int32_t x896 = 4677;
	static volatile int64_t t132 = 49181LL;

    t132 = (x893/((x894%x895)%x896));

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int8_t x897 = INT8_MIN;
	int32_t x898 = -760;
	volatile int16_t x899 = 1144;
	static volatile int64_t t133 = 0LL;

    t133 = (x897/((x898%x899)%x900));

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x905 = INT16_MIN;
	uint32_t x906 = 1690684308U;
	int16_t x907 = INT16_MIN;
	volatile uint64_t x908 = 580332786649901LLU;
	volatile uint64_t t134 = 243440116647331317LLU;

    t134 = (x905/((x906%x907)%x908));

    if (t134 != 10910815216LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint8_t x912 = UINT8_MAX;

    t135 = (x909/((x910%x911)%x912));

    if (t135 != 320525538LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static int8_t x918 = -22;
	int32_t x919 = -1831168;
	static uint16_t x920 = UINT16_MAX;
	int32_t t136 = 90;

    t136 = (x917/((x918%x919)%x920));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x921 = 4;
	uint32_t x922 = UINT32_MAX;
	int64_t x923 = -828LL;
	int8_t x924 = -22;
	static volatile int64_t t137 = -11282309LL;

    t137 = (x921/((x922%x923)%x924));

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x925 = INT16_MIN;
	int16_t x926 = 764;
	volatile int32_t t138 = 97;

    t138 = (x925/((x926%x927)%x928));

    if (t138 != -42) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x929 = 0;
	int64_t x930 = INT64_MIN;
	uint64_t x931 = 62LLU;
	static int16_t x932 = -1;
	volatile uint64_t t139 = 835172912LLU;

    t139 = (x929/((x930%x931)%x932));

    if (t139 != 0LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x937 = 2U;
	int16_t x938 = INT16_MIN;
	int32_t x939 = INT32_MAX;
	int64_t x940 = INT64_MIN;
	volatile int64_t t140 = -4409329352LL;

    t140 = (x937/((x938%x939)%x940));

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint64_t x942 = UINT64_MAX;
	int8_t x943 = INT8_MIN;
	volatile uint64_t t141 = 14006785621174057LLU;

    t141 = (x941/((x942%x943)%x944));

    if (t141 != 258LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint16_t x945 = 2U;
	static volatile int64_t t142 = -16730830324627LL;

    t142 = (x945/((x946%x947)%x948));

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint64_t x949 = 3492LLU;
	static volatile int32_t x950 = INT32_MIN;

    t143 = (x949/((x950%x951)%x952));

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x953 = UINT16_MAX;
	int64_t x954 = INT64_MAX;
	static uint8_t x955 = UINT8_MAX;
	int8_t x956 = INT8_MIN;

    t144 = (x953/((x954%x955)%x956));

    if (t144 != 516LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x957 = 3U;
	int64_t x958 = INT64_MIN;
	static uint32_t x959 = UINT32_MAX;
	int64_t t145 = -17236651317003LL;

    t145 = (x957/((x958%x959)%x960));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x961 = -9;
	int8_t x962 = INT8_MAX;
	int8_t x964 = INT8_MIN;
	int32_t t146 = -879430;

    t146 = (x961/((x962%x963)%x964));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x969 = UINT8_MAX;
	uint64_t x970 = UINT64_MAX;
	int16_t x971 = -3;
	int8_t x972 = 62;

    t147 = (x969/((x970%x971)%x972));

    if (t147 != 127LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x973 = UINT8_MAX;
	uint8_t x976 = UINT8_MAX;
	volatile int32_t t148 = -29986;

    t148 = (x973/((x974%x975)%x976));

    if (t148 != 2) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x989 = 26U;
	int16_t x990 = INT16_MAX;
	int64_t x991 = INT64_MIN;
	volatile uint64_t x992 = 208LLU;
	uint64_t t149 = 215026543344LLU;

    t149 = (x989/((x990%x991)%x992));

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x993 = -1LL;
	int64_t x994 = INT64_MIN;
	int64_t x995 = -13989915222892LL;
	int64_t x996 = INT64_MIN;

    t150 = (x993/((x994%x995)%x996));

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint8_t x997 = UINT8_MAX;
	uint8_t x998 = 2U;
	uint64_t x999 = UINT64_MAX;
	int8_t x1000 = INT8_MIN;
	static uint64_t t151 = 856806LLU;

    t151 = (x997/((x998%x999)%x1000));

    if (t151 != 127LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x1001 = -1LL;
	volatile int32_t x1002 = -1;
	uint16_t x1003 = UINT16_MAX;
	volatile int32_t x1004 = -21323052;
	int64_t t152 = 122243732192874588LL;

    t152 = (x1001/((x1002%x1003)%x1004));

    if (t152 != 1LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x1017 = -1;
	int16_t x1018 = -22;
	uint64_t x1019 = 987373780081LLU;
	uint64_t t153 = 103456337103LLU;

    t153 = (x1017/((x1018%x1019)%x1020));

    if (t153 != 139868901LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x1022 = INT16_MIN;
	volatile uint32_t x1023 = 29757U;
	uint64_t t154 = 2741653732LLU;

    t154 = (x1021/((x1022%x1023)%x1024));

    if (t154 != 528650887651445LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x1037 = 11874U;
	uint32_t x1039 = 13625786U;
	int32_t x1040 = INT32_MIN;

    t155 = (x1037/((x1038%x1039)%x1040));

    if (t155 != 0U) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int64_t x1049 = INT64_MIN;
	volatile int64_t x1050 = 94840747LL;
	static int16_t x1052 = 8;
	static volatile int64_t t156 = INT64_MIN;

    t156 = (x1049/((x1050%x1051)%x1052));

    if (t156 != INT64_MIN) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x1053 = 2195312284645957026LLU;
	volatile uint8_t x1054 = 1U;
	static uint64_t x1055 = UINT64_MAX;
	volatile uint64_t t157 = 1360227LLU;

    t157 = (x1053/((x1054%x1055)%x1056));

    if (t157 != 2195312284645957026LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x1057 = 723U;
	static uint8_t x1058 = UINT8_MAX;
	uint32_t x1059 = UINT32_MAX;
	uint32_t t158 = 23U;

    t158 = (x1057/((x1058%x1059)%x1060));

    if (t158 != 2U) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x1066 = INT32_MAX;
	uint32_t x1067 = 1770U;
	static int64_t x1068 = INT64_MIN;
	volatile uint64_t t159 = 2342LLU;

    t159 = (x1065/((x1066%x1067)%x1068));

    if (t159 != 4086545140776LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x1077 = 9944LLU;
	volatile int32_t x1078 = 108123;
	uint16_t x1079 = UINT16_MAX;
	volatile int8_t x1080 = -62;
	uint64_t t160 = 1110853352091420LLU;

    t160 = (x1077/((x1078%x1079)%x1080));

    if (t160 != 177LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x1090 = INT64_MIN;
	uint8_t x1091 = 23U;
	static int64_t x1092 = -500992934720LL;
	volatile int64_t t161 = 3285283175464705LL;

    t161 = (x1089/((x1090%x1091)%x1092));

    if (t161 != -1431655765LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x1093 = 45694876;
	uint16_t x1094 = 1089U;
	int16_t x1095 = INT16_MIN;
	uint64_t x1096 = UINT64_MAX;
	volatile uint64_t t162 = 19LLU;

    t162 = (x1093/((x1094%x1095)%x1096));

    if (t162 != 41960LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x1097 = INT8_MAX;
	volatile uint64_t x1098 = 2030LLU;
	volatile uint64_t x1099 = UINT64_MAX;
	static volatile int16_t x1100 = INT16_MIN;
	uint64_t t163 = 851063421705901LLU;

    t163 = (x1097/((x1098%x1099)%x1100));

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x1101 = 2U;
	uint16_t x1102 = 6612U;
	volatile uint16_t x1103 = UINT16_MAX;
	int8_t x1104 = INT8_MAX;
	volatile int32_t t164 = -59;

    t164 = (x1101/((x1102%x1103)%x1104));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x1109 = 3565LLU;
	int64_t x1110 = INT64_MIN;
	int64_t x1111 = -2975LL;
	static volatile int64_t x1112 = 200139359823466LL;
	static uint64_t t165 = 121122LLU;

    t165 = (x1109/((x1110%x1111)%x1112));

    if (t165 != 0LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x1117 = INT64_MIN;
	int16_t x1118 = INT16_MIN;
	static uint16_t x1119 = UINT16_MAX;
	uint16_t x1120 = 30180U;

    t166 = (x1117/((x1118%x1119)%x1120));

    if (t166 != 3563899550562123LL) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x1123 = INT16_MIN;
	int8_t x1124 = INT8_MAX;

    t167 = (x1121/((x1122%x1123)%x1124));

    if (t167 != 3) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x1129 = -1590898;
	uint16_t x1130 = 13U;
	static volatile int16_t x1131 = INT16_MAX;
	volatile uint32_t t168 = 143491999U;

    t168 = (x1129/((x1130%x1131)%x1132));

    if (t168 != 330259722U) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x1133 = -1;
	volatile int8_t x1135 = 12;
	volatile uint64_t x1136 = 3323050632LLU;

    t169 = (x1133/((x1134%x1135)%x1136));

    if (t169 != 6148914691236517205LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x1137 = 42LL;
	int8_t x1138 = -34;
	uint32_t x1139 = 1467U;
	int32_t x1140 = -1;
	int64_t t170 = -788LL;

    t170 = (x1137/((x1138%x1139)%x1140));

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x1141 = -1;
	static int16_t x1143 = INT16_MIN;
	int16_t x1144 = 3239;

    t171 = (x1141/((x1142%x1143)%x1144));

    if (t171 != 51130563U) { NG(); } else { ; }
	
}

void f172(void) {
    	static int16_t x1145 = 18;
	static int32_t x1146 = -3278;
	volatile int32_t x1147 = -704061;
	static int32_t t172 = -357;

    t172 = (x1145/((x1146%x1147)%x1148));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x1149 = 62LLU;
	uint32_t x1150 = UINT32_MAX;
	volatile int16_t x1152 = INT16_MIN;
	volatile uint64_t t173 = 1493LLU;

    t173 = (x1149/((x1150%x1151)%x1152));

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x1153 = INT16_MAX;
	int32_t x1156 = 60358;

    t174 = (x1153/((x1154%x1155)%x1156));

    if (t174 != 10922U) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x1165 = 0U;
	uint16_t x1166 = 893U;
	volatile uint16_t x1168 = 2504U;
	volatile uint64_t t175 = 23805303389963LLU;

    t175 = (x1165/((x1166%x1167)%x1168));

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int8_t x1169 = INT8_MIN;
	int32_t x1170 = -232485;
	int64_t x1171 = INT64_MAX;
	static uint16_t x1172 = UINT16_MAX;

    t176 = (x1169/((x1170%x1171)%x1172));

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x1174 = 45U;
	static int16_t x1175 = INT16_MAX;
	int64_t x1176 = INT64_MIN;
	int64_t t177 = 829768567773757LL;

    t177 = (x1173/((x1174%x1175)%x1176));

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x1177 = 0U;
	int8_t x1179 = -21;
	static volatile int64_t t178 = -33717595735832508LL;

    t178 = (x1177/((x1178%x1179)%x1180));

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x1181 = INT8_MAX;
	int8_t x1182 = INT8_MIN;
	int64_t x1183 = INT64_MIN;
	int16_t x1184 = 4478;
	volatile int64_t t179 = -67646842460098159LL;

    t179 = (x1181/((x1182%x1183)%x1184));

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	static int32_t x1189 = INT32_MIN;
	int16_t x1190 = 76;
	int64_t x1191 = INT64_MIN;
	int64_t x1192 = INT64_MIN;
	static int64_t t180 = -10977535LL;

    t180 = (x1189/((x1190%x1191)%x1192));

    if (t180 != -28256363LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x1201 = INT8_MIN;
	int64_t x1202 = -578140792708014919LL;
	uint64_t x1203 = 117737562498LLU;
	uint16_t x1204 = UINT16_MAX;
	uint64_t t181 = 3777LLU;

    t181 = (x1201/((x1202%x1203)%x1204));

    if (t181 != 324258539853215LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x1205 = -1;
	static volatile uint8_t x1206 = 47U;
	int64_t x1207 = -21812347LL;
	int64_t t182 = -30730866LL;

    t182 = (x1205/((x1206%x1207)%x1208));

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x1210 = 44356323U;
	volatile int16_t x1211 = -1;
	int32_t x1212 = -1;
	static volatile uint32_t t183 = 51U;

    t183 = (x1209/((x1210%x1211)%x1212));

    if (t183 != 0U) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint16_t x1214 = 4570U;
	int64_t x1216 = INT64_MIN;
	volatile int64_t t184 = 0LL;

    t184 = (x1213/((x1214%x1215)%x1216));

    if (t184 != -306783378LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x1217 = UINT32_MAX;
	int64_t x1218 = -64064567129LL;
	int8_t x1219 = INT8_MIN;
	int8_t x1220 = INT8_MAX;
	static int64_t t185 = -193438381050295909LL;

    t185 = (x1217/((x1218%x1219)%x1220));

    if (t185 != -48258059LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x1221 = 3462206425753LLU;
	int8_t x1222 = INT8_MIN;
	int16_t x1223 = 6999;
	int32_t x1224 = INT32_MAX;
	uint64_t t186 = 15391988020767LLU;

    t186 = (x1221/((x1222%x1223)%x1224));

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x1233 = 32195U;
	static int16_t x1234 = 7;
	uint8_t x1236 = UINT8_MAX;
	static int32_t t187 = -811;

    t187 = (x1233/((x1234%x1235)%x1236));

    if (t187 != 32195) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x1237 = INT16_MIN;
	uint32_t x1238 = 5627U;
	uint16_t x1239 = UINT16_MAX;
	static int16_t x1240 = INT16_MIN;
	static volatile uint32_t t188 = 7368857U;

    t188 = (x1237/((x1238%x1239)%x1240));

    if (t188 != 763272U) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x1242 = INT64_MIN;
	uint32_t x1243 = 2130575121U;
	uint16_t x1244 = UINT16_MAX;
	int64_t t189 = 138071233461LL;

    t189 = (x1241/((x1242%x1243)%x1244));

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x1246 = INT8_MAX;
	int64_t x1247 = INT64_MIN;
	static int32_t x1248 = -3;
	volatile int64_t t190 = -58981858LL;

    t190 = (x1245/((x1246%x1247)%x1248));

    if (t190 != 32767LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x1249 = 0;
	int32_t x1250 = 1544;
	uint64_t x1251 = 11548205492734LLU;
	uint16_t x1252 = UINT16_MAX;

    t191 = (x1249/((x1250%x1251)%x1252));

    if (t191 != 0LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x1253 = INT32_MAX;
	uint16_t x1254 = UINT16_MAX;
	int64_t x1255 = -96151682643598646LL;
	int32_t x1256 = INT32_MAX;
	int64_t t192 = -7382317719LL;

    t192 = (x1253/((x1254%x1255)%x1256));

    if (t192 != 32768LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x1257 = 31912066693576492LL;
	volatile int16_t x1258 = INT16_MAX;
	uint8_t x1259 = UINT8_MAX;
	int64_t t193 = 690437143924938LL;

    t193 = (x1257/((x1258%x1259)%x1260));

    if (t193 != 251276115697452LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x1261 = -1;
	uint8_t x1262 = UINT8_MAX;
	volatile int32_t x1264 = -12;
	uint32_t t194 = 27U;

    t194 = (x1261/((x1262%x1263)%x1264));

    if (t194 != 858993459U) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x1265 = UINT16_MAX;
	volatile int64_t x1266 = -1LL;
	volatile uint16_t x1267 = UINT16_MAX;
	int64_t x1268 = INT64_MIN;

    t195 = (x1265/((x1266%x1267)%x1268));

    if (t195 != -65535LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x1269 = INT8_MIN;
	static volatile int16_t x1270 = 434;
	volatile int16_t x1271 = INT16_MIN;
	int64_t x1272 = 9035LL;
	volatile int64_t t196 = -438931122LL;

    t196 = (x1269/((x1270%x1271)%x1272));

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x1283 = 2939;
	uint32_t t197 = 329U;

    t197 = (x1281/((x1282%x1283)%x1284));

    if (t197 != 1073741792U) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x1289 = UINT8_MAX;
	static int32_t x1290 = INT32_MAX;
	int8_t x1291 = INT8_MIN;
	int16_t x1292 = INT16_MIN;
	int32_t t198 = 196750067;

    t198 = (x1289/((x1290%x1291)%x1292));

    if (t198 != 2) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x1294 = UINT16_MAX;
	int64_t x1295 = INT64_MAX;
	int16_t x1296 = -6;
	int64_t t199 = -943258LL;

    t199 = (x1293/((x1294%x1295)%x1296));

    if (t199 != 0LL) { NG(); } else { ; }
	
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

