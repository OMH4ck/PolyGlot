
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

volatile int8_t x10 = -1;
int8_t x34 = INT8_MIN;
static uint64_t x37 = UINT64_MAX;
static volatile int16_t x38 = -1;
volatile uint64_t t4 = UINT64_MAX;
volatile uint16_t x41 = 12U;
int32_t x50 = -1;
uint32_t x54 = UINT32_MAX;
int32_t x62 = INT32_MIN;
volatile uint32_t x83 = UINT32_MAX;
int8_t x84 = -2;
int32_t x88 = -1;
static volatile int32_t t11 = -37;
uint64_t x93 = UINT64_MAX;
int8_t x102 = -5;
int64_t x104 = -1LL;
int8_t x108 = INT8_MAX;
uint16_t x113 = UINT16_MAX;
int16_t x116 = -155;
int32_t x143 = 7;
int32_t t20 = -509625880;
int32_t x145 = INT32_MAX;
static int32_t x150 = 53745;
int32_t x156 = INT32_MIN;
int64_t x158 = 4196509645206403894LL;
int16_t x162 = INT16_MIN;
volatile uint16_t x164 = UINT16_MAX;
int16_t x169 = INT16_MAX;
int64_t x175 = -1LL;
int64_t x179 = 403461LL;
int64_t x185 = INT64_MAX;
int64_t x201 = 66313136286324LL;
int16_t x202 = 380;
int8_t x203 = INT8_MIN;
uint16_t x216 = UINT16_MAX;
uint32_t x237 = UINT32_MAX;
int32_t x240 = -1;
int32_t t34 = -4017;
int16_t x251 = INT16_MAX;
static volatile int32_t x271 = -1068908099;
uint16_t x281 = 18U;
volatile int32_t t41 = 106014496;
static volatile uint64_t x321 = 3875218LLU;
volatile int64_t x322 = INT64_MIN;
volatile uint64_t t44 = 11361707462LLU;
int32_t t45 = 520493511;
int8_t x338 = INT8_MAX;
int32_t x340 = -1;
uint64_t x341 = UINT64_MAX;
volatile int32_t t48 = -123;
uint16_t x371 = 0U;
int16_t x381 = 61;
int32_t t51 = 11;
int32_t x388 = INT32_MIN;
int32_t t54 = 1;
uint16_t x451 = 579U;
volatile uint8_t x454 = 15U;
uint64_t x463 = 66590LLU;
uint32_t x467 = 356396150U;
int32_t x468 = INT32_MAX;
static int32_t x471 = INT32_MIN;
volatile uint64_t t63 = 30767459753321LLU;
uint8_t x486 = 8U;
int32_t t65 = -8;
volatile int32_t t66 = -127;
int32_t x514 = 6;
int32_t x515 = -525;
static int32_t x517 = INT32_MAX;
int32_t x531 = INT32_MIN;
int32_t x539 = 30388;
static volatile int32_t t74 = 968677570;
int8_t x577 = 15;
int64_t x582 = INT64_MAX;
int8_t x584 = 3;
volatile int64_t x585 = INT64_MAX;
static int8_t x588 = -21;
volatile int64_t t78 = 24238916701042760LL;
volatile uint32_t x596 = 0U;
static uint64_t t79 = 986LLU;
uint16_t x610 = 2U;
uint16_t x612 = UINT16_MAX;
static uint64_t x642 = 3489LLU;
uint8_t x645 = 83U;
uint8_t x647 = 39U;
uint8_t x648 = 75U;
uint64_t x653 = 6LLU;
uint64_t t87 = 998695LLU;
static int16_t x698 = INT16_MIN;
static uint32_t x699 = 8910289U;
volatile int32_t x709 = INT32_MAX;
int32_t t94 = 126;
uint8_t x720 = UINT8_MAX;
uint32_t t95 = 2098404U;
int64_t x737 = 109538560178LL;
int16_t x738 = -110;
volatile int8_t x739 = INT8_MIN;
uint8_t x743 = 14U;
uint8_t x752 = UINT8_MAX;
static volatile uint8_t x753 = 94U;
volatile int64_t x756 = INT64_MIN;
int32_t t101 = -97290590;
int32_t x775 = -7131;
static uint8_t x781 = UINT8_MAX;
int8_t x788 = -1;
uint64_t x791 = 3123987028992698738LLU;
int64_t x792 = -1LL;
int64_t x798 = -1LL;
volatile uint32_t x799 = 10024U;
static int32_t t107 = 41;
volatile int32_t t108 = 197389;
static uint8_t x826 = UINT8_MAX;
int16_t x827 = 6423;
uint64_t x829 = 7LLU;
uint32_t x830 = 1024353306U;
int32_t x831 = -1;
volatile int8_t x832 = INT8_MIN;
static int16_t x833 = INT16_MAX;
volatile int16_t x854 = INT16_MIN;
static uint32_t x860 = 7700785U;
int8_t x866 = INT8_MIN;
int32_t x867 = -1;
int64_t x869 = 407631569568456205LL;
uint16_t x882 = 28U;
static int16_t x926 = -7;
int8_t x957 = INT8_MAX;
int32_t x958 = 1257;
static volatile int32_t x965 = INT32_MAX;
int64_t x980 = INT64_MAX;
volatile uint8_t x993 = 125U;
static int64_t x994 = -1LL;
int32_t x995 = INT32_MIN;
int8_t x998 = -57;
volatile int8_t x1012 = 2;
static int32_t x1043 = -1;
static uint64_t x1067 = 19843630LLU;
uint16_t x1068 = 4U;
int32_t t134 = 8152;
uint8_t x1092 = 2U;
uint8_t x1105 = 28U;
int8_t x1106 = -5;
volatile int32_t t138 = 31641;
int8_t x1120 = INT8_MAX;
static int64_t x1126 = -1LL;
int8_t x1136 = INT8_MIN;
int32_t x1141 = INT32_MAX;
static int8_t x1142 = 0;
int64_t x1143 = INT64_MAX;
uint16_t x1144 = UINT16_MAX;
int32_t x1149 = INT32_MAX;
uint16_t x1157 = 10325U;
uint64_t x1158 = 197785LLU;
static int64_t x1174 = INT64_MAX;
int32_t x1177 = INT32_MAX;
int8_t x1184 = 29;
uint8_t x1189 = UINT8_MAX;
volatile int32_t x1192 = INT32_MIN;
static volatile uint64_t t150 = 2421LLU;
uint8_t x1200 = 1U;
static volatile uint64_t t151 = 13735604920171335LLU;
uint8_t x1205 = UINT8_MAX;
int8_t x1209 = 0;
static volatile int8_t x1212 = INT8_MAX;
int8_t x1214 = -6;
uint32_t x1215 = 4U;
int64_t x1222 = INT64_MIN;
uint32_t x1224 = 519820U;
uint64_t x1233 = UINT64_MAX;
int64_t x1236 = -212710942361447452LL;
int64_t x1254 = 3812LL;
int32_t x1258 = 1;
uint8_t x1260 = 6U;
volatile uint8_t x1280 = UINT8_MAX;
uint8_t x1281 = 17U;
int8_t x1283 = -1;
int16_t x1284 = INT16_MAX;
int32_t t163 = 1;
int64_t x1291 = 2686545012LL;
int16_t x1292 = 98;
volatile int16_t x1309 = 229;
static volatile int32_t t167 = 16018675;
uint16_t x1313 = UINT16_MAX;
int64_t t169 = -193261555LL;
volatile uint32_t x1329 = UINT32_MAX;
int32_t t171 = 6;
int32_t t172 = -32;
volatile int32_t t173 = 344475;
int64_t x1363 = -1LL;
static uint32_t t176 = 111207U;
uint64_t x1385 = 274315LLU;
volatile uint64_t x1386 = 4249708260LLU;
int8_t x1388 = INT8_MIN;
uint64_t t178 = 12263LLU;
static uint64_t x1393 = UINT64_MAX;
volatile uint64_t t179 = UINT64_MAX;
int8_t x1448 = INT8_MAX;
int8_t x1454 = INT8_MIN;
static uint16_t x1483 = 4U;
volatile int32_t t193 = INT32_MAX;
int32_t t194 = -21032678;
static int32_t x1501 = INT32_MAX;
uint16_t x1513 = 55U;
volatile int8_t x1518 = INT8_MIN;
int32_t t198 = 159541312;
uint16_t x1521 = 14U;
volatile int8_t x1523 = INT8_MAX;


void f0(void) {
    	int64_t x1 = 31100LL;
	uint8_t x2 = 3U;
	static uint16_t x3 = 1U;
	int64_t x4 = 24164783973645LL;
	static volatile int64_t t0 = 134912994569713421LL;

    t0 = (x1>>((x2-x3)>x4));

    if (t0 != 31100LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint32_t x9 = 185241255U;
	int16_t x11 = -1;
	static volatile uint64_t x12 = UINT64_MAX;
	uint32_t t1 = 445400604U;

    t1 = (x9>>((x10-x11)>x12));

    if (t1 != 185241255U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x21 = 1602775613U;
	uint32_t x22 = UINT32_MAX;
	volatile uint8_t x23 = 5U;
	volatile int32_t x24 = INT32_MIN;
	uint32_t t2 = 9811U;

    t2 = (x21>>((x22-x23)>x24));

    if (t2 != 801387806U) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x33 = 167285LLU;
	int8_t x35 = -1;
	int16_t x36 = -1;
	volatile uint64_t t3 = 4175571400LLU;

    t3 = (x33>>((x34-x35)>x36));

    if (t3 != 167285LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x39 = -1;
	volatile int32_t x40 = 203027908;

    t4 = (x37>>((x38-x39)>x40));

    if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint8_t x42 = 0U;
	volatile int16_t x43 = INT16_MAX;
	uint32_t x44 = UINT32_MAX;
	int32_t t5 = 3;

    t5 = (x41>>((x42-x43)>x44));

    if (t5 != 12) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint8_t x45 = UINT8_MAX;
	static int32_t x46 = -34368875;
	volatile int8_t x47 = INT8_MIN;
	int32_t x48 = -1;
	int32_t t6 = -415991;

    t6 = (x45>>((x46-x47)>x48));

    if (t6 != 255) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x49 = UINT8_MAX;
	volatile uint32_t x51 = 7588U;
	int32_t x52 = -3918872;
	int32_t t7 = 24498837;

    t7 = (x49>>((x50-x51)>x52));

    if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x53 = INT64_MAX;
	uint32_t x55 = UINT32_MAX;
	int64_t x56 = INT64_MIN;
	static volatile int64_t t8 = 188071524LL;

    t8 = (x53>>((x54-x55)>x56));

    if (t8 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x61 = 7;
	int64_t x63 = INT64_MIN;
	int16_t x64 = -1;
	int32_t t9 = 0;

    t9 = (x61>>((x62-x63)>x64));

    if (t9 != 3) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x81 = UINT8_MAX;
	int16_t x82 = INT16_MIN;
	static volatile int32_t t10 = 450898;

    t10 = (x81>>((x82-x83)>x84));

    if (t10 != 255) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x85 = 13;
	int8_t x86 = 53;
	int32_t x87 = INT32_MAX;

    t11 = (x85>>((x86-x87)>x88));

    if (t11 != 13) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x94 = 4U;
	uint16_t x95 = 8494U;
	int16_t x96 = INT16_MIN;
	uint64_t t12 = 5558700766LLU;

    t12 = (x93>>((x94-x95)>x96));

    if (t12 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x97 = INT16_MAX;
	static volatile uint8_t x98 = UINT8_MAX;
	int16_t x99 = INT16_MIN;
	int32_t x100 = INT32_MIN;
	volatile int32_t t13 = 25504549;

    t13 = (x97>>((x98-x99)>x100));

    if (t13 != 16383) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint64_t x101 = UINT64_MAX;
	static uint64_t x103 = 9108546050741LLU;
	volatile uint64_t t14 = UINT64_MAX;

    t14 = (x101>>((x102-x103)>x104));

    if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x105 = 94132;
	static int32_t x106 = INT32_MIN;
	volatile int64_t x107 = 450206650654058LL;
	volatile int32_t t15 = -1905803;

    t15 = (x105>>((x106-x107)>x108));

    if (t15 != 94132) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x109 = INT32_MAX;
	volatile int16_t x110 = 17;
	volatile uint8_t x111 = 3U;
	uint16_t x112 = 22733U;
	static int32_t t16 = INT32_MAX;

    t16 = (x109>>((x110-x111)>x112));

    if (t16 != INT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x114 = INT64_MIN;
	volatile uint64_t x115 = 378884294878086LLU;
	static int32_t t17 = -131391890;

    t17 = (x113>>((x114-x115)>x116));

    if (t17 != 65535) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x125 = 36939789611LLU;
	volatile int16_t x126 = -8;
	int64_t x127 = INT64_MIN;
	uint64_t x128 = 31504105827012645LLU;
	volatile uint64_t t18 = 3209026190LLU;

    t18 = (x125>>((x126-x127)>x128));

    if (t18 != 18469894805LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x129 = 340U;
	uint16_t x130 = 26U;
	int16_t x131 = INT16_MAX;
	int16_t x132 = 3940;
	int32_t t19 = 88359178;

    t19 = (x129>>((x130-x131)>x132));

    if (t19 != 340) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x141 = INT32_MAX;
	int16_t x142 = INT16_MAX;
	int16_t x144 = -1;

    t20 = (x141>>((x142-x143)>x144));

    if (t20 != 1073741823) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x146 = INT8_MIN;
	int32_t x147 = -339515;
	volatile uint8_t x148 = 1U;
	static int32_t t21 = 35073;

    t21 = (x145>>((x146-x147)>x148));

    if (t21 != 1073741823) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x149 = INT32_MAX;
	static uint64_t x151 = UINT64_MAX;
	volatile uint8_t x152 = 5U;
	int32_t t22 = -257380;

    t22 = (x149>>((x150-x151)>x152));

    if (t22 != 1073741823) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x153 = 0;
	int32_t x154 = INT32_MAX;
	static uint16_t x155 = 154U;
	volatile int32_t t23 = 4064700;

    t23 = (x153>>((x154-x155)>x156));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x157 = 21106772592283LLU;
	volatile int16_t x159 = INT16_MAX;
	int32_t x160 = INT32_MAX;
	uint64_t t24 = 7931911LLU;

    t24 = (x157>>((x158-x159)>x160));

    if (t24 != 10553386296141LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int8_t x161 = INT8_MAX;
	int64_t x163 = -1LL;
	int32_t t25 = 18;

    t25 = (x161>>((x162-x163)>x164));

    if (t25 != 127) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x170 = INT8_MIN;
	static int16_t x171 = -1;
	uint64_t x172 = 4048128187976LLU;
	static volatile int32_t t26 = 11;

    t26 = (x169>>((x170-x171)>x172));

    if (t26 != 16383) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x173 = INT16_MAX;
	uint8_t x174 = 0U;
	int16_t x176 = INT16_MIN;
	volatile int32_t t27 = -63;

    t27 = (x173>>((x174-x175)>x176));

    if (t27 != 16383) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x177 = UINT32_MAX;
	static uint8_t x178 = UINT8_MAX;
	static uint16_t x180 = 6249U;
	static volatile uint32_t t28 = UINT32_MAX;

    t28 = (x177>>((x178-x179)>x180));

    if (t28 != UINT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int32_t x186 = INT32_MAX;
	uint32_t x187 = 243793U;
	uint8_t x188 = 5U;
	int64_t t29 = -571113904391460LL;

    t29 = (x185>>((x186-x187)>x188));

    if (t29 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x204 = INT8_MIN;
	int64_t t30 = 52076351442LL;

    t30 = (x201>>((x202-x203)>x204));

    if (t30 != 33156568143162LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x213 = 4017U;
	volatile int32_t x214 = -27;
	static int8_t x215 = INT8_MIN;
	volatile int32_t t31 = 114786902;

    t31 = (x213>>((x214-x215)>x216));

    if (t31 != 4017) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x221 = 3390516648LL;
	int8_t x222 = INT8_MIN;
	static int16_t x223 = -1;
	uint64_t x224 = 200340321960854LLU;
	volatile int64_t t32 = -721351LL;

    t32 = (x221>>((x222-x223)>x224));

    if (t32 != 1695258324LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x238 = INT16_MIN;
	static int8_t x239 = INT8_MIN;
	uint32_t t33 = UINT32_MAX;

    t33 = (x237>>((x238-x239)>x240));

    if (t33 != UINT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint8_t x241 = 1U;
	static int8_t x242 = -1;
	static int32_t x243 = INT32_MIN;
	volatile int32_t x244 = 58638;

    t34 = (x241>>((x242-x243)>x244));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int32_t x249 = 1;
	int64_t x250 = 8125768LL;
	static uint64_t x252 = UINT64_MAX;
	int32_t t35 = 5937;

    t35 = (x249>>((x250-x251)>x252));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x253 = 25U;
	int16_t x254 = INT16_MAX;
	volatile int8_t x255 = -1;
	int16_t x256 = 8;
	int32_t t36 = 23649;

    t36 = (x253>>((x254-x255)>x256));

    if (t36 != 12) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint32_t x261 = UINT32_MAX;
	int64_t x262 = -5355142LL;
	static volatile int8_t x263 = -1;
	static int16_t x264 = INT16_MAX;
	volatile uint32_t t37 = UINT32_MAX;

    t37 = (x261>>((x262-x263)>x264));

    if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint64_t x269 = UINT64_MAX;
	uint32_t x270 = 47006326U;
	uint64_t x272 = UINT64_MAX;
	uint64_t t38 = UINT64_MAX;

    t38 = (x269>>((x270-x271)>x272));

    if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint32_t x273 = 43084079U;
	int32_t x274 = 258741367;
	int32_t x275 = 1023032462;
	int8_t x276 = INT8_MIN;
	static volatile uint32_t t39 = 13128441U;

    t39 = (x273>>((x274-x275)>x276));

    if (t39 != 43084079U) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x282 = -1;
	uint32_t x283 = 1259U;
	volatile int8_t x284 = 1;
	volatile int32_t t40 = 0;

    t40 = (x281>>((x282-x283)>x284));

    if (t40 != 9) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x285 = INT8_MAX;
	static int64_t x286 = -3038992534LL;
	static int32_t x287 = 5245095;
	volatile int16_t x288 = -1;

    t41 = (x285>>((x286-x287)>x288));

    if (t41 != 127) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int64_t x293 = 1529625815958444924LL;
	int64_t x294 = 1899322957635LL;
	uint64_t x295 = UINT64_MAX;
	int32_t x296 = INT32_MIN;
	volatile int64_t t42 = 205618460885051LL;

    t42 = (x293>>((x294-x295)>x296));

    if (t42 != 1529625815958444924LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint64_t x317 = 12639680834LLU;
	volatile int32_t x318 = -216;
	int16_t x319 = -1;
	int32_t x320 = INT32_MIN;
	uint64_t t43 = 1438741LLU;

    t43 = (x317>>((x318-x319)>x320));

    if (t43 != 6319840417LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x323 = 17243308163218742LLU;
	int16_t x324 = INT16_MIN;

    t44 = (x321>>((x322-x323)>x324));

    if (t44 != 3875218LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x329 = 258;
	static int8_t x330 = INT8_MIN;
	static volatile uint32_t x331 = 37659U;
	int16_t x332 = INT16_MIN;

    t45 = (x329>>((x330-x331)>x332));

    if (t45 != 258) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int64_t x337 = 189980588LL;
	uint8_t x339 = 1U;
	static volatile int64_t t46 = 22429537050773LL;

    t46 = (x337>>((x338-x339)>x340));

    if (t46 != 94990294LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x342 = -1;
	int32_t x343 = -448525;
	int16_t x344 = INT16_MIN;
	static volatile uint64_t t47 = 419725626716210LLU;

    t47 = (x341>>((x342-x343)>x344));

    if (t47 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x361 = UINT8_MAX;
	int64_t x362 = -1LL;
	int64_t x363 = INT64_MIN;
	static volatile int8_t x364 = INT8_MIN;

    t48 = (x361>>((x362-x363)>x364));

    if (t48 != 127) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x365 = 1U;
	int16_t x366 = INT16_MIN;
	int8_t x367 = INT8_MIN;
	volatile uint64_t x368 = 1069936925LLU;
	volatile int32_t t49 = 7;

    t49 = (x365>>((x366-x367)>x368));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x369 = 15;
	int16_t x370 = 565;
	uint32_t x372 = 16U;
	int32_t t50 = -2130;

    t50 = (x369>>((x370-x371)>x372));

    if (t50 != 7) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x382 = -107581346026604LL;
	int16_t x383 = INT16_MIN;
	volatile int32_t x384 = INT32_MIN;

    t51 = (x381>>((x382-x383)>x384));

    if (t51 != 61) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x385 = 25817U;
	int64_t x386 = -1LL;
	int16_t x387 = -1;
	uint32_t t52 = 61295564U;

    t52 = (x385>>((x386-x387)>x388));

    if (t52 != 12908U) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint16_t x393 = 23U;
	static int32_t x394 = INT32_MAX;
	int64_t x395 = 8LL;
	int32_t x396 = INT32_MIN;
	int32_t t53 = -6444428;

    t53 = (x393>>((x394-x395)>x396));

    if (t53 != 11) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x409 = INT16_MAX;
	volatile uint8_t x410 = UINT8_MAX;
	volatile int16_t x411 = -1;
	volatile uint16_t x412 = 6U;

    t54 = (x409>>((x410-x411)>x412));

    if (t54 != 16383) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x417 = INT64_MAX;
	uint16_t x418 = 4787U;
	static uint64_t x419 = 296666980353LLU;
	int16_t x420 = INT16_MIN;
	int64_t t55 = INT64_MAX;

    t55 = (x417>>((x418-x419)>x420));

    if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint32_t x421 = 223U;
	int32_t x422 = 774311;
	int64_t x423 = 1558LL;
	int32_t x424 = -1;
	volatile uint32_t t56 = 2013U;

    t56 = (x421>>((x422-x423)>x424));

    if (t56 != 111U) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x429 = 123;
	int8_t x430 = -24;
	uint64_t x431 = 222824635LLU;
	int16_t x432 = INT16_MIN;
	volatile int32_t t57 = 23;

    t57 = (x429>>((x430-x431)>x432));

    if (t57 != 123) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x441 = 47;
	volatile int16_t x442 = 1;
	static int64_t x443 = 98161113159572LL;
	uint16_t x444 = 42U;
	volatile int32_t t58 = -181488584;

    t58 = (x441>>((x442-x443)>x444));

    if (t58 != 47) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x449 = 11421995;
	static int16_t x450 = -4801;
	volatile int8_t x452 = INT8_MIN;
	int32_t t59 = 64223984;

    t59 = (x449>>((x450-x451)>x452));

    if (t59 != 11421995) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x453 = INT32_MAX;
	int8_t x455 = INT8_MIN;
	uint8_t x456 = 2U;
	static int32_t t60 = -57;

    t60 = (x453>>((x454-x455)>x456));

    if (t60 != 1073741823) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x461 = 4957;
	uint8_t x462 = 40U;
	uint32_t x464 = UINT32_MAX;
	static int32_t t61 = -1;

    t61 = (x461>>((x462-x463)>x464));

    if (t61 != 2478) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint64_t x465 = 1737393388310306LLU;
	uint32_t x466 = 25U;
	static volatile uint64_t t62 = 2828099080LLU;

    t62 = (x465>>((x466-x467)>x468));

    if (t62 != 868696694155153LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint64_t x469 = UINT64_MAX;
	int64_t x470 = -4LL;
	int64_t x472 = INT64_MIN;

    t63 = (x469>>((x470-x471)>x472));

    if (t63 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x473 = INT8_MAX;
	int32_t x474 = INT32_MIN;
	static int64_t x475 = -1LL;
	uint16_t x476 = UINT16_MAX;
	volatile int32_t t64 = -984673;

    t64 = (x473>>((x474-x475)>x476));

    if (t64 != 127) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x485 = INT32_MAX;
	volatile uint32_t x487 = 15837U;
	int16_t x488 = 0;

    t65 = (x485>>((x486-x487)>x488));

    if (t65 != 1073741823) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int32_t x493 = 562971;
	int8_t x494 = -22;
	volatile int64_t x495 = 1LL;
	static uint16_t x496 = 217U;

    t66 = (x493>>((x494-x495)>x496));

    if (t66 != 562971) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint8_t x497 = UINT8_MAX;
	int16_t x498 = INT16_MIN;
	int64_t x499 = INT64_MIN;
	uint32_t x500 = 561478U;
	static int32_t t67 = -78;

    t67 = (x497>>((x498-x499)>x500));

    if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x513 = INT64_MAX;
	uint16_t x516 = UINT16_MAX;
	static volatile int64_t t68 = INT64_MAX;

    t68 = (x513>>((x514-x515)>x516));

    if (t68 != INT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x518 = 6947694U;
	int16_t x519 = -1;
	static volatile int32_t x520 = 5719431;
	volatile int32_t t69 = 6;

    t69 = (x517>>((x518-x519)>x520));

    if (t69 != 1073741823) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x521 = 4331;
	int8_t x522 = INT8_MIN;
	int8_t x523 = -1;
	static volatile int64_t x524 = INT64_MIN;
	static volatile int32_t t70 = 11838;

    t70 = (x521>>((x522-x523)>x524));

    if (t70 != 2165) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x529 = 6089LLU;
	volatile uint64_t x530 = 9LLU;
	uint8_t x532 = UINT8_MAX;
	uint64_t t71 = 371LLU;

    t71 = (x529>>((x530-x531)>x532));

    if (t71 != 3044LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint64_t x533 = UINT64_MAX;
	static int16_t x534 = INT16_MIN;
	static int8_t x535 = -1;
	uint16_t x536 = UINT16_MAX;
	uint64_t t72 = UINT64_MAX;

    t72 = (x533>>((x534-x535)>x536));

    if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile uint32_t x537 = 62077876U;
	volatile int8_t x538 = -1;
	static uint16_t x540 = UINT16_MAX;
	volatile uint32_t t73 = 4916U;

    t73 = (x537>>((x538-x539)>x540));

    if (t73 != 62077876U) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x553 = 2;
	int8_t x554 = -1;
	static uint64_t x555 = 31995464746116LLU;
	uint64_t x556 = UINT64_MAX;

    t74 = (x553>>((x554-x555)>x556));

    if (t74 != 2) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x565 = 33836393677LLU;
	static uint8_t x566 = 13U;
	volatile uint8_t x567 = 17U;
	int16_t x568 = INT16_MAX;
	uint64_t t75 = 332750LLU;

    t75 = (x565>>((x566-x567)>x568));

    if (t75 != 33836393677LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x578 = 1U;
	int32_t x579 = -31528609;
	int8_t x580 = INT8_MIN;
	volatile int32_t t76 = 503564;

    t76 = (x577>>((x578-x579)>x580));

    if (t76 != 7) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint16_t x581 = UINT16_MAX;
	int64_t x583 = INT64_MAX;
	volatile int32_t t77 = -156090;

    t77 = (x581>>((x582-x583)>x584));

    if (t77 != 65535) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x586 = INT8_MIN;
	int32_t x587 = -2680261;

    t78 = (x585>>((x586-x587)>x588));

    if (t78 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x593 = 11388862168952060LLU;
	int64_t x594 = INT64_MAX;
	static uint8_t x595 = 82U;

    t79 = (x593>>((x594-x595)>x596));

    if (t79 != 5694431084476030LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x597 = 2125460444676189LL;
	int16_t x598 = INT16_MIN;
	int64_t x599 = INT64_MIN;
	int64_t x600 = INT64_MIN;
	int64_t t80 = -86LL;

    t80 = (x597>>((x598-x599)>x600));

    if (t80 != 1062730222338094LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x609 = 8U;
	uint16_t x611 = 1U;
	volatile int32_t t81 = 7171132;

    t81 = (x609>>((x610-x611)>x612));

    if (t81 != 8) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x621 = INT16_MAX;
	int64_t x622 = INT64_MAX;
	static volatile int32_t x623 = INT32_MAX;
	int64_t x624 = INT64_MIN;
	int32_t t82 = -49;

    t82 = (x621>>((x622-x623)>x624));

    if (t82 != 16383) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int8_t x625 = 1;
	int64_t x626 = -1LL;
	volatile int64_t x627 = -1LL;
	uint8_t x628 = 2U;
	volatile int32_t t83 = -43;

    t83 = (x625>>((x626-x627)>x628));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x629 = UINT32_MAX;
	uint16_t x630 = 3905U;
	int32_t x631 = -1;
	int32_t x632 = INT32_MIN;
	static volatile uint32_t t84 = 53U;

    t84 = (x629>>((x630-x631)>x632));

    if (t84 != 2147483647U) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint32_t x641 = UINT32_MAX;
	int64_t x643 = -1LL;
	volatile uint8_t x644 = UINT8_MAX;
	uint32_t t85 = 4U;

    t85 = (x641>>((x642-x643)>x644));

    if (t85 != 2147483647U) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x646 = -2091313LL;
	volatile int32_t t86 = -1541;

    t86 = (x645>>((x646-x647)>x648));

    if (t86 != 83) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x654 = INT64_MAX;
	uint8_t x655 = 94U;
	static uint32_t x656 = UINT32_MAX;

    t87 = (x653>>((x654-x655)>x656));

    if (t87 != 3LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x657 = 55076334;
	int16_t x658 = 8766;
	static uint32_t x659 = 2161U;
	int32_t x660 = -30;
	volatile int32_t t88 = 251839;

    t88 = (x657>>((x658-x659)>x660));

    if (t88 != 55076334) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint8_t x661 = UINT8_MAX;
	static int16_t x662 = INT16_MIN;
	uint16_t x663 = 4U;
	static int32_t x664 = INT32_MIN;
	int32_t t89 = -7660986;

    t89 = (x661>>((x662-x663)>x664));

    if (t89 != 127) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint16_t x669 = UINT16_MAX;
	volatile int64_t x670 = -74LL;
	volatile uint32_t x671 = 1846225545U;
	uint8_t x672 = UINT8_MAX;
	int32_t t90 = 708;

    t90 = (x669>>((x670-x671)>x672));

    if (t90 != 65535) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x697 = UINT8_MAX;
	static int64_t x700 = INT64_MIN;
	int32_t t91 = -2667697;

    t91 = (x697>>((x698-x699)>x700));

    if (t91 != 127) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x701 = UINT32_MAX;
	static int32_t x702 = INT32_MAX;
	int16_t x703 = 1;
	volatile uint8_t x704 = 0U;
	volatile uint32_t t92 = 722U;

    t92 = (x701>>((x702-x703)>x704));

    if (t92 != 2147483647U) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint64_t x710 = 43990398LLU;
	int32_t x711 = 527;
	int64_t x712 = INT64_MIN;
	static volatile int32_t t93 = INT32_MAX;

    t93 = (x709>>((x710-x711)>x712));

    if (t93 != INT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x713 = INT16_MAX;
	volatile int16_t x714 = -1;
	int8_t x715 = INT8_MAX;
	static uint64_t x716 = 2831266741232074LLU;

    t94 = (x713>>((x714-x715)>x716));

    if (t94 != 16383) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x717 = 1527156U;
	static uint64_t x718 = UINT64_MAX;
	int16_t x719 = INT16_MIN;

    t95 = (x717>>((x718-x719)>x720));

    if (t95 != 763578U) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x721 = 53485257964714816LLU;
	static volatile uint64_t x722 = 342893287667676LLU;
	uint16_t x723 = 35U;
	int16_t x724 = -1;
	volatile uint64_t t96 = 12265LLU;

    t96 = (x721>>((x722-x723)>x724));

    if (t96 != 53485257964714816LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x729 = 18;
	int64_t x730 = -431LL;
	static int64_t x731 = -1LL;
	int32_t x732 = INT32_MAX;
	int32_t t97 = 7554515;

    t97 = (x729>>((x730-x731)>x732));

    if (t97 != 18) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x740 = 1U;
	volatile int64_t t98 = -394LL;

    t98 = (x737>>((x738-x739)>x740));

    if (t98 != 54769280089LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint16_t x741 = 681U;
	uint64_t x742 = 501393695920686LLU;
	int16_t x744 = INT16_MAX;
	static int32_t t99 = 761;

    t99 = (x741>>((x742-x743)>x744));

    if (t99 != 340) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x749 = INT32_MAX;
	int8_t x750 = 51;
	int32_t x751 = 484433577;
	int32_t t100 = INT32_MAX;

    t100 = (x749>>((x750-x751)>x752));

    if (t100 != INT32_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x754 = 3539;
	int16_t x755 = INT16_MIN;

    t101 = (x753>>((x754-x755)>x756));

    if (t101 != 47) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x773 = 145LLU;
	int8_t x774 = -1;
	static int8_t x776 = 11;
	uint64_t t102 = 2127448LLU;

    t102 = (x773>>((x774-x775)>x776));

    if (t102 != 72LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x782 = INT8_MIN;
	uint32_t x783 = UINT32_MAX;
	int8_t x784 = -1;
	int32_t t103 = 437074717;

    t103 = (x781>>((x782-x783)>x784));

    if (t103 != 255) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint16_t x785 = UINT16_MAX;
	int32_t x786 = INT32_MIN;
	static volatile uint32_t x787 = 1557137701U;
	static int32_t t104 = -1323471;

    t104 = (x785>>((x786-x787)>x788));

    if (t104 != 65535) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x789 = 6U;
	static uint32_t x790 = 2126518U;
	static volatile int32_t t105 = 930116;

    t105 = (x789>>((x790-x791)>x792));

    if (t105 != 6) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x797 = INT16_MAX;
	uint8_t x800 = UINT8_MAX;
	static int32_t t106 = 288369;

    t106 = (x797>>((x798-x799)>x800));

    if (t106 != 32767) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x813 = UINT8_MAX;
	int8_t x814 = 4;
	uint64_t x815 = UINT64_MAX;
	volatile uint16_t x816 = 3313U;

    t107 = (x813>>((x814-x815)>x816));

    if (t107 != 255) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x817 = 711;
	volatile uint32_t x818 = UINT32_MAX;
	int32_t x819 = INT32_MAX;
	uint8_t x820 = 3U;

    t108 = (x817>>((x818-x819)>x820));

    if (t108 != 355) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint64_t x825 = 32065421LLU;
	int32_t x828 = -1;
	volatile uint64_t t109 = 12LLU;

    t109 = (x825>>((x826-x827)>x828));

    if (t109 != 32065421LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t t110 = 293598681258574373LLU;

    t110 = (x829>>((x830-x831)>x832));

    if (t110 != 7LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x834 = UINT32_MAX;
	int16_t x835 = 4774;
	int16_t x836 = -1;
	volatile int32_t t111 = -14240;

    t111 = (x833>>((x834-x835)>x836));

    if (t111 != 32767) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint64_t x845 = 226226966311418492LLU;
	uint32_t x846 = UINT32_MAX;
	volatile int8_t x847 = INT8_MIN;
	uint8_t x848 = 60U;
	uint64_t t112 = 6404018LLU;

    t112 = (x845>>((x846-x847)>x848));

    if (t112 != 113113483155709246LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x853 = 5910LLU;
	uint64_t x855 = 20543075914765401LLU;
	int32_t x856 = INT32_MIN;
	uint64_t t113 = 0LLU;

    t113 = (x853>>((x854-x855)>x856));

    if (t113 != 5910LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint16_t x857 = 76U;
	uint32_t x858 = 18419U;
	int16_t x859 = INT16_MAX;
	int32_t t114 = 27691363;

    t114 = (x857>>((x858-x859)>x860));

    if (t114 != 38) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x865 = UINT64_MAX;
	uint64_t x868 = 1304058931903LLU;
	uint64_t t115 = 130919206526005LLU;

    t115 = (x865>>((x866-x867)>x868));

    if (t115 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x870 = 338;
	int16_t x871 = 3740;
	uint32_t x872 = 5880572U;
	volatile int64_t t116 = 1099LL;

    t116 = (x869>>((x870-x871)>x872));

    if (t116 != 203815784784228102LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x881 = INT8_MAX;
	int16_t x883 = INT16_MAX;
	volatile int32_t x884 = INT32_MIN;
	int32_t t117 = -102450028;

    t117 = (x881>>((x882-x883)>x884));

    if (t117 != 63) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x889 = UINT64_MAX;
	int64_t x890 = INT64_MAX;
	volatile uint64_t x891 = 858146680426058LLU;
	volatile int32_t x892 = INT32_MAX;
	volatile uint64_t t118 = 1032841LLU;

    t118 = (x889>>((x890-x891)>x892));

    if (t118 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x913 = 298;
	static int16_t x914 = INT16_MIN;
	uint32_t x915 = UINT32_MAX;
	int32_t x916 = INT32_MAX;
	volatile int32_t t119 = -3;

    t119 = (x913>>((x914-x915)>x916));

    if (t119 != 149) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x925 = 19U;
	uint8_t x927 = 10U;
	int8_t x928 = INT8_MIN;
	volatile int32_t t120 = 422112532;

    t120 = (x925>>((x926-x927)>x928));

    if (t120 != 9) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x941 = 0;
	uint8_t x942 = 47U;
	static volatile int32_t x943 = INT32_MAX;
	static int32_t x944 = INT32_MIN;
	static int32_t t121 = -1062302;

    t121 = (x941>>((x942-x943)>x944));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x949 = 45;
	static uint16_t x950 = 2645U;
	uint64_t x951 = UINT64_MAX;
	int32_t x952 = -215463;
	volatile int32_t t122 = 93;

    t122 = (x949>>((x950-x951)>x952));

    if (t122 != 45) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x953 = 1;
	static uint8_t x954 = UINT8_MAX;
	uint64_t x955 = 212406LLU;
	volatile uint64_t x956 = 0LLU;
	static volatile int32_t t123 = -1674;

    t123 = (x953>>((x954-x955)>x956));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int8_t x959 = INT8_MAX;
	static volatile int32_t x960 = -1;
	volatile int32_t t124 = 577476810;

    t124 = (x957>>((x958-x959)>x960));

    if (t124 != 63) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile uint64_t x966 = 4791728527232LLU;
	volatile uint32_t x967 = 1590100U;
	int32_t x968 = INT32_MAX;
	int32_t t125 = -263;

    t125 = (x965>>((x966-x967)>x968));

    if (t125 != 1073741823) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x977 = INT8_MAX;
	int64_t x978 = -1LL;
	int8_t x979 = INT8_MAX;
	volatile int32_t t126 = -2005523;

    t126 = (x977>>((x978-x979)>x980));

    if (t126 != 127) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x996 = INT32_MIN;
	volatile int32_t t127 = 0;

    t127 = (x993>>((x994-x995)>x996));

    if (t127 != 62) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x997 = UINT32_MAX;
	int16_t x999 = -1;
	volatile int8_t x1000 = INT8_MIN;
	volatile uint32_t t128 = 0U;

    t128 = (x997>>((x998-x999)>x1000));

    if (t128 != 2147483647U) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x1009 = 5386798362LLU;
	static int16_t x1010 = -1;
	int8_t x1011 = INT8_MAX;
	volatile uint64_t t129 = 218712375819861LLU;

    t129 = (x1009>>((x1010-x1011)>x1012));

    if (t129 != 5386798362LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x1013 = INT16_MAX;
	static uint64_t x1014 = UINT64_MAX;
	static uint32_t x1015 = UINT32_MAX;
	uint32_t x1016 = 103766U;
	volatile int32_t t130 = 181;

    t130 = (x1013>>((x1014-x1015)>x1016));

    if (t130 != 16383) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x1029 = UINT16_MAX;
	int64_t x1030 = INT64_MAX;
	uint16_t x1031 = UINT16_MAX;
	static int32_t x1032 = -1;
	volatile int32_t t131 = -429234;

    t131 = (x1029>>((x1030-x1031)>x1032));

    if (t131 != 32767) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint16_t x1037 = 0U;
	int64_t x1038 = INT64_MAX;
	static volatile int32_t x1039 = INT32_MAX;
	int32_t x1040 = -1;
	int32_t t132 = -1108;

    t132 = (x1037>>((x1038-x1039)>x1040));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x1041 = UINT8_MAX;
	uint32_t x1042 = 833822U;
	int8_t x1044 = -3;
	int32_t t133 = 10625;

    t133 = (x1041>>((x1042-x1043)>x1044));

    if (t133 != 255) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x1065 = UINT16_MAX;
	volatile int16_t x1066 = INT16_MIN;

    t134 = (x1065>>((x1066-x1067)>x1068));

    if (t134 != 32767) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x1081 = 29628006157LL;
	static int32_t x1082 = -1;
	int32_t x1083 = INT32_MIN;
	uint8_t x1084 = 7U;
	static int64_t t135 = 977904LL;

    t135 = (x1081>>((x1082-x1083)>x1084));

    if (t135 != 14814003078LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x1089 = INT64_MAX;
	uint16_t x1090 = UINT16_MAX;
	uint64_t x1091 = UINT64_MAX;
	volatile int64_t t136 = 32713792667LL;

    t136 = (x1089>>((x1090-x1091)>x1092));

    if (t136 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x1093 = UINT32_MAX;
	static int8_t x1094 = INT8_MIN;
	static uint8_t x1095 = 23U;
	int8_t x1096 = INT8_MIN;
	uint32_t t137 = UINT32_MAX;

    t137 = (x1093>>((x1094-x1095)>x1096));

    if (t137 != UINT32_MAX) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x1107 = INT16_MAX;
	int64_t x1108 = INT64_MIN;

    t138 = (x1105>>((x1106-x1107)>x1108));

    if (t138 != 14) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x1117 = 27LLU;
	int8_t x1118 = INT8_MIN;
	volatile uint8_t x1119 = 10U;
	uint64_t t139 = 40503353366413815LLU;

    t139 = (x1117>>((x1118-x1119)>x1120));

    if (t139 != 27LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x1125 = 188180025LL;
	static uint8_t x1127 = 5U;
	int64_t x1128 = INT64_MAX;
	static int64_t t140 = -1LL;

    t140 = (x1125>>((x1126-x1127)>x1128));

    if (t140 != 188180025LL) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x1129 = 40;
	uint32_t x1130 = 245687886U;
	static uint8_t x1131 = UINT8_MAX;
	int8_t x1132 = -1;
	volatile int32_t t141 = 12;

    t141 = (x1129>>((x1130-x1131)>x1132));

    if (t141 != 40) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint16_t x1133 = UINT16_MAX;
	uint8_t x1134 = 13U;
	static int8_t x1135 = -1;
	volatile int32_t t142 = -16364625;

    t142 = (x1133>>((x1134-x1135)>x1136));

    if (t142 != 32767) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t t143 = INT32_MAX;

    t143 = (x1141>>((x1142-x1143)>x1144));

    if (t143 != INT32_MAX) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x1150 = -26;
	int32_t x1151 = -120208761;
	int64_t x1152 = -7737525940622LL;
	volatile int32_t t144 = -1000158078;

    t144 = (x1149>>((x1150-x1151)>x1152));

    if (t144 != 1073741823) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x1159 = -8309113LL;
	volatile uint32_t x1160 = 27924U;
	volatile int32_t t145 = -60290;

    t145 = (x1157>>((x1158-x1159)>x1160));

    if (t145 != 5162) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint16_t x1173 = 1868U;
	volatile uint64_t x1175 = 3494404527440LLU;
	volatile int16_t x1176 = INT16_MIN;
	static int32_t t146 = 284410864;

    t146 = (x1173>>((x1174-x1175)>x1176));

    if (t146 != 1868) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint64_t x1178 = UINT64_MAX;
	volatile int64_t x1179 = -7LL;
	static uint8_t x1180 = 1U;
	volatile int32_t t147 = -5;

    t147 = (x1177>>((x1178-x1179)>x1180));

    if (t147 != 1073741823) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x1181 = 3500363LLU;
	static int32_t x1182 = -1;
	int32_t x1183 = INT32_MAX;
	static uint64_t t148 = 523801LLU;

    t148 = (x1181>>((x1182-x1183)>x1184));

    if (t148 != 3500363LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x1190 = -386936886924273700LL;
	static int8_t x1191 = 0;
	volatile int32_t t149 = 238001;

    t149 = (x1189>>((x1190-x1191)>x1192));

    if (t149 != 255) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x1193 = 35514346591629LLU;
	int16_t x1194 = -51;
	int16_t x1195 = -134;
	uint64_t x1196 = 3736372LLU;

    t150 = (x1193>>((x1194-x1195)>x1196));

    if (t150 != 35514346591629LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x1197 = UINT64_MAX;
	int64_t x1198 = INT64_MAX;
	static uint64_t x1199 = 213230579627857LLU;

    t151 = (x1197>>((x1198-x1199)>x1200));

    if (t151 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x1201 = INT16_MAX;
	static int32_t x1202 = -1;
	uint64_t x1203 = 17040136946LLU;
	volatile int64_t x1204 = INT64_MIN;
	volatile int32_t t152 = -38833;

    t152 = (x1201>>((x1202-x1203)>x1204));

    if (t152 != 16383) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x1206 = 68;
	int32_t x1207 = 58;
	int8_t x1208 = -3;
	static volatile int32_t t153 = 1;

    t153 = (x1205>>((x1206-x1207)>x1208));

    if (t153 != 127) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x1210 = INT16_MAX;
	static uint8_t x1211 = 29U;
	volatile int32_t t154 = -6704;

    t154 = (x1209>>((x1210-x1211)>x1212));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x1213 = INT8_MAX;
	uint8_t x1216 = UINT8_MAX;
	int32_t t155 = 4150465;

    t155 = (x1213>>((x1214-x1215)>x1216));

    if (t155 != 63) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x1221 = 9972;
	int8_t x1223 = INT8_MIN;
	volatile int32_t t156 = 6404708;

    t156 = (x1221>>((x1222-x1223)>x1224));

    if (t156 != 9972) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x1225 = INT64_MAX;
	int64_t x1226 = -1LL;
	int32_t x1227 = INT32_MAX;
	volatile int64_t x1228 = INT64_MIN;
	int64_t t157 = 17LL;

    t157 = (x1225>>((x1226-x1227)>x1228));

    if (t157 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x1234 = 0U;
	uint16_t x1235 = UINT16_MAX;
	volatile uint64_t t158 = 19011465694411LLU;

    t158 = (x1233>>((x1234-x1235)>x1236));

    if (t158 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x1249 = INT64_MAX;
	int8_t x1250 = 3;
	int16_t x1251 = -1;
	int16_t x1252 = INT16_MIN;
	volatile int64_t t159 = -13556LL;

    t159 = (x1249>>((x1250-x1251)>x1252));

    if (t159 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x1253 = 3;
	int16_t x1255 = -10065;
	uint32_t x1256 = 22402U;
	volatile int32_t t160 = -14970;

    t160 = (x1253>>((x1254-x1255)>x1256));

    if (t160 != 3) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x1257 = 616U;
	volatile uint8_t x1259 = 1U;
	int32_t t161 = 69;

    t161 = (x1257>>((x1258-x1259)>x1260));

    if (t161 != 616) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int32_t x1277 = INT32_MAX;
	static volatile int16_t x1278 = -1;
	volatile int8_t x1279 = INT8_MIN;
	static volatile int32_t t162 = INT32_MAX;

    t162 = (x1277>>((x1278-x1279)>x1280));

    if (t162 != INT32_MAX) { NG(); } else { ; }
	
}

void f163(void) {
    	static int32_t x1282 = INT32_MIN;

    t163 = (x1281>>((x1282-x1283)>x1284));

    if (t163 != 17) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x1285 = 3355U;
	uint64_t x1286 = 109234925058524656LLU;
	uint16_t x1287 = 28300U;
	static uint32_t x1288 = 65155U;
	int32_t t164 = -23;

    t164 = (x1285>>((x1286-x1287)>x1288));

    if (t164 != 1677) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x1289 = UINT64_MAX;
	int8_t x1290 = INT8_MIN;
	volatile uint64_t t165 = UINT64_MAX;

    t165 = (x1289>>((x1290-x1291)>x1292));

    if (t165 != UINT64_MAX) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int64_t x1297 = INT64_MAX;
	int8_t x1298 = -1;
	int64_t x1299 = INT64_MAX;
	uint8_t x1300 = UINT8_MAX;
	int64_t t166 = INT64_MAX;

    t166 = (x1297>>((x1298-x1299)>x1300));

    if (t166 != INT64_MAX) { NG(); } else { ; }
	
}

void f167(void) {
    	static int64_t x1310 = INT64_MAX;
	uint64_t x1311 = UINT64_MAX;
	volatile uint8_t x1312 = 28U;

    t167 = (x1309>>((x1310-x1311)>x1312));

    if (t167 != 114) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x1314 = 629085515U;
	volatile uint32_t x1315 = UINT32_MAX;
	uint8_t x1316 = 29U;
	int32_t t168 = 0;

    t168 = (x1313>>((x1314-x1315)>x1316));

    if (t168 != 32767) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x1321 = 27LL;
	volatile uint64_t x1322 = UINT64_MAX;
	static uint64_t x1323 = UINT64_MAX;
	int16_t x1324 = -1;

    t169 = (x1321>>((x1322-x1323)>x1324));

    if (t169 != 27LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int16_t x1330 = -1;
	int16_t x1331 = -13;
	int8_t x1332 = INT8_MIN;
	volatile uint32_t t170 = 75807U;

    t170 = (x1329>>((x1330-x1331)>x1332));

    if (t170 != 2147483647U) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint16_t x1337 = UINT16_MAX;
	int16_t x1338 = INT16_MAX;
	uint8_t x1339 = UINT8_MAX;
	static uint16_t x1340 = UINT16_MAX;

    t171 = (x1337>>((x1338-x1339)>x1340));

    if (t171 != 65535) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x1349 = INT8_MAX;
	volatile int32_t x1350 = -1;
	int32_t x1351 = -1;
	volatile int8_t x1352 = 1;

    t172 = (x1349>>((x1350-x1351)>x1352));

    if (t172 != 127) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint16_t x1353 = 1987U;
	int8_t x1354 = INT8_MIN;
	static int8_t x1355 = 2;
	int16_t x1356 = 59;

    t173 = (x1353>>((x1354-x1355)>x1356));

    if (t173 != 1987) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint64_t x1361 = UINT64_MAX;
	int8_t x1362 = 0;
	volatile int32_t x1364 = 3;
	uint64_t t174 = UINT64_MAX;

    t174 = (x1361>>((x1362-x1363)>x1364));

    if (t174 != UINT64_MAX) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x1369 = 5U;
	static int8_t x1370 = 16;
	uint64_t x1371 = 1LLU;
	int64_t x1372 = -53625581936LL;
	volatile int32_t t175 = -780894351;

    t175 = (x1369>>((x1370-x1371)>x1372));

    if (t175 != 5) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint32_t x1377 = 261075U;
	static int16_t x1378 = 521;
	volatile int8_t x1379 = -1;
	int8_t x1380 = INT8_MAX;

    t176 = (x1377>>((x1378-x1379)>x1380));

    if (t176 != 130537U) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x1381 = 10;
	uint64_t x1382 = 3534189393015654091LLU;
	volatile int64_t x1383 = INT64_MIN;
	volatile int64_t x1384 = -1LL;
	volatile int32_t t177 = -586983559;

    t177 = (x1381>>((x1382-x1383)>x1384));

    if (t177 != 10) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t x1387 = 15778229;

    t178 = (x1385>>((x1386-x1387)>x1388));

    if (t178 != 274315LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x1394 = -1;
	int64_t x1395 = INT64_MAX;
	uint32_t x1396 = 352109U;

    t179 = (x1393>>((x1394-x1395)>x1396));

    if (t179 != UINT64_MAX) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x1397 = 1U;
	uint16_t x1398 = 2U;
	uint32_t x1399 = 18886U;
	volatile int16_t x1400 = -1;
	static volatile int32_t t180 = 116;

    t180 = (x1397>>((x1398-x1399)>x1400));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint8_t x1401 = 79U;
	int8_t x1402 = INT8_MIN;
	volatile int8_t x1403 = -1;
	int64_t x1404 = INT64_MIN;
	int32_t t181 = 9;

    t181 = (x1401>>((x1402-x1403)>x1404));

    if (t181 != 39) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x1425 = UINT16_MAX;
	volatile int64_t x1426 = 52324981LL;
	static volatile uint64_t x1427 = 47830744LLU;
	static int32_t x1428 = 21125409;
	volatile int32_t t182 = 1325283;

    t182 = (x1425>>((x1426-x1427)>x1428));

    if (t182 != 65535) { NG(); } else { ; }
	
}

void f183(void) {
    	static int64_t x1429 = 128013LL;
	static volatile int32_t x1430 = 5326790;
	int64_t x1431 = -1934372659629LL;
	uint64_t x1432 = 120301LLU;
	volatile int64_t t183 = -7036992LL;

    t183 = (x1429>>((x1430-x1431)>x1432));

    if (t183 != 64006LL) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint8_t x1437 = UINT8_MAX;
	int64_t x1438 = -1LL;
	int8_t x1439 = INT8_MIN;
	int64_t x1440 = INT64_MIN;
	volatile int32_t t184 = 1;

    t184 = (x1437>>((x1438-x1439)>x1440));

    if (t184 != 127) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x1445 = INT64_MAX;
	int8_t x1446 = INT8_MIN;
	uint8_t x1447 = 7U;
	static int64_t t185 = INT64_MAX;

    t185 = (x1445>>((x1446-x1447)>x1448));

    if (t185 != INT64_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint16_t x1449 = UINT16_MAX;
	int64_t x1450 = -4312LL;
	static uint32_t x1451 = 2430U;
	volatile int32_t x1452 = INT32_MIN;
	volatile int32_t t186 = -741294596;

    t186 = (x1449>>((x1450-x1451)>x1452));

    if (t186 != 32767) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x1453 = 6;
	volatile int16_t x1455 = INT16_MIN;
	uint16_t x1456 = 746U;
	int32_t t187 = 395546290;

    t187 = (x1453>>((x1454-x1455)>x1456));

    if (t187 != 3) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x1457 = UINT32_MAX;
	static int16_t x1458 = INT16_MIN;
	int32_t x1459 = INT32_MIN;
	volatile uint16_t x1460 = UINT16_MAX;
	uint32_t t188 = 4U;

    t188 = (x1457>>((x1458-x1459)>x1460));

    if (t188 != 2147483647U) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x1461 = 109419LLU;
	int16_t x1462 = 5;
	int64_t x1463 = INT64_MAX;
	int16_t x1464 = -641;
	volatile uint64_t t189 = 2137409LLU;

    t189 = (x1461>>((x1462-x1463)>x1464));

    if (t189 != 109419LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x1465 = 10296838U;
	volatile int8_t x1466 = INT8_MAX;
	volatile uint8_t x1467 = UINT8_MAX;
	uint16_t x1468 = 970U;
	static volatile uint32_t t190 = 3866228U;

    t190 = (x1465>>((x1466-x1467)>x1468));

    if (t190 != 10296838U) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x1473 = INT64_MAX;
	static uint32_t x1474 = UINT32_MAX;
	int8_t x1475 = 0;
	static uint8_t x1476 = 15U;
	volatile int64_t t191 = 41749477665LL;

    t191 = (x1473>>((x1474-x1475)>x1476));

    if (t191 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int64_t x1481 = INT64_MAX;
	static uint16_t x1482 = 25993U;
	int8_t x1484 = 43;
	volatile int64_t t192 = 336191LL;

    t192 = (x1481>>((x1482-x1483)>x1484));

    if (t192 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x1485 = INT32_MAX;
	volatile int8_t x1486 = 16;
	int16_t x1487 = -1;
	uint16_t x1488 = UINT16_MAX;

    t193 = (x1485>>((x1486-x1487)>x1488));

    if (t193 != INT32_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x1493 = UINT16_MAX;
	int64_t x1494 = -590916736LL;
	static uint64_t x1495 = 1139442100LLU;
	volatile int64_t x1496 = INT64_MAX;

    t194 = (x1493>>((x1494-x1495)>x1496));

    if (t194 != 32767) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x1502 = -5;
	static uint32_t x1503 = 391982U;
	uint64_t x1504 = UINT64_MAX;
	static volatile int32_t t195 = INT32_MAX;

    t195 = (x1501>>((x1502-x1503)>x1504));

    if (t195 != INT32_MAX) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x1509 = 73;
	int16_t x1510 = INT16_MIN;
	static int32_t x1511 = -68755610;
	static volatile uint16_t x1512 = UINT16_MAX;
	int32_t t196 = -1;

    t196 = (x1509>>((x1510-x1511)>x1512));

    if (t196 != 36) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x1514 = -395933428;
	int32_t x1515 = INT32_MIN;
	uint16_t x1516 = 1U;
	int32_t t197 = 4;

    t197 = (x1513>>((x1514-x1515)>x1516));

    if (t197 != 27) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x1517 = INT8_MAX;
	int32_t x1519 = 895;
	uint32_t x1520 = 137151637U;

    t198 = (x1517>>((x1518-x1519)>x1520));

    if (t198 != 63) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint32_t x1522 = 4700U;
	int32_t x1524 = -243606;
	static volatile int32_t t199 = 14;

    t199 = (x1521>>((x1522-x1523)>x1524));

    if (t199 != 14) { NG(); } else { ; }
	
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

