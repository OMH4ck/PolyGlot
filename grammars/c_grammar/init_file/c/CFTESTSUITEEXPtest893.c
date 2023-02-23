
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

static volatile int64_t x14 = INT64_MIN;
int32_t x19 = INT32_MIN;
static uint16_t x20 = 20207U;
uint32_t x23 = 470U;
uint16_t x31 = UINT16_MAX;
volatile uint16_t x34 = 11523U;
int16_t x79 = INT16_MAX;
static uint8_t x81 = UINT8_MAX;
volatile int32_t x83 = INT32_MAX;
volatile uint64_t t11 = UINT64_MAX;
volatile uint16_t x94 = 1U;
uint64_t x103 = 1896869421LLU;
volatile int32_t t14 = -27;
int8_t x105 = INT8_MAX;
volatile int32_t t15 = 108;
static int16_t x111 = -1271;
volatile uint64_t t17 = UINT64_MAX;
volatile int64_t x130 = INT64_MAX;
volatile int64_t x131 = INT64_MIN;
volatile int16_t x138 = INT16_MIN;
uint32_t x162 = UINT32_MAX;
static uint64_t x165 = UINT64_MAX;
volatile uint64_t x167 = 27484LLU;
volatile uint32_t x168 = UINT32_MAX;
int8_t x181 = INT8_MAX;
volatile int16_t x183 = -3;
volatile int16_t x211 = INT16_MIN;
int8_t x223 = -1;
int32_t t33 = -130675563;
uint64_t x253 = UINT64_MAX;
volatile uint16_t x274 = 3U;
volatile uint32_t t36 = UINT32_MAX;
int8_t x289 = 0;
int64_t x292 = 20184LL;
int32_t t37 = -248;
int64_t x296 = INT64_MAX;
uint32_t x297 = UINT32_MAX;
int32_t t40 = 1;
int32_t x312 = 3;
volatile int32_t t41 = -2;
volatile uint8_t x321 = 1U;
uint16_t x327 = UINT16_MAX;
static int16_t x339 = INT16_MAX;
int8_t x347 = -1;
int8_t x386 = INT8_MAX;
static volatile int32_t t48 = 6971848;
uint64_t x393 = 176060LLU;
volatile uint64_t x403 = UINT64_MAX;
static int64_t x428 = -1LL;
volatile int64_t t53 = -1235321910671LL;
int8_t x450 = INT8_MAX;
volatile int8_t x468 = 3;
static uint8_t x486 = UINT8_MAX;
static volatile int8_t x496 = -19;
uint32_t x505 = UINT32_MAX;
int64_t x524 = INT64_MAX;
uint64_t t62 = 90775278334936LLU;
int64_t x530 = INT64_MAX;
uint8_t x535 = 4U;
volatile int16_t x536 = -1;
int64_t x564 = INT64_MIN;
volatile uint32_t t65 = UINT32_MAX;
static int64_t x565 = 20227LL;
static int8_t x567 = -12;
int64_t t66 = 102368102186LL;
int8_t x570 = INT8_MAX;
static uint64_t x573 = 1095496540793325742LLU;
uint32_t x574 = UINT32_MAX;
static volatile int32_t x583 = INT32_MIN;
static volatile int32_t x584 = -110202;
uint64_t x612 = UINT64_MAX;
uint64_t x629 = 9001295LLU;
int32_t x643 = INT32_MAX;
static volatile uint8_t x654 = UINT8_MAX;
static int8_t x656 = 1;
volatile uint64_t t77 = 3771LLU;
static int64_t x660 = 1750969907168LL;
volatile uint16_t x675 = UINT16_MAX;
volatile int32_t t82 = -31;
static int64_t x686 = -4012564518432879380LL;
int8_t x714 = INT8_MIN;
int32_t x723 = INT32_MIN;
volatile int32_t x740 = INT32_MIN;
uint32_t x742 = 71542785U;
int32_t x743 = -6465418;
int32_t t93 = 93620002;
int16_t x762 = -1010;
volatile int32_t t96 = -29552;
int8_t x766 = INT8_MIN;
int64_t x767 = INT64_MAX;
int16_t x787 = INT16_MIN;
int32_t x788 = INT32_MAX;
int32_t x789 = 56;
int8_t x791 = 27;
uint64_t t102 = UINT64_MAX;
uint32_t x797 = 13054U;
uint16_t x799 = 3418U;
volatile int8_t x800 = INT8_MIN;
int16_t x804 = -1;
static int64_t t104 = INT64_MAX;
uint16_t x809 = 518U;
static volatile int16_t x812 = 0;
uint16_t x816 = 33U;
uint32_t x825 = 115U;
volatile uint8_t x827 = 8U;
volatile int32_t t109 = -3;
uint32_t x837 = UINT32_MAX;
volatile int8_t x842 = -21;
volatile int32_t t112 = 1213120;
int32_t t113 = -5;
int16_t x878 = -1;
volatile uint16_t x882 = 38U;
static int32_t x885 = INT32_MAX;
volatile uint16_t x888 = UINT16_MAX;
int64_t x913 = INT64_MAX;
int64_t t118 = INT64_MAX;
int64_t t120 = 0LL;
volatile uint16_t x956 = 4U;
int16_t x961 = INT16_MAX;
int8_t x964 = INT8_MAX;
uint8_t x977 = 83U;
int16_t x989 = INT16_MAX;
uint32_t x1004 = 868U;
static uint32_t x1006 = 77584U;
uint64_t t128 = 667236340LLU;
uint32_t x1009 = 8U;
int32_t x1010 = INT32_MIN;
uint16_t x1013 = UINT16_MAX;
int16_t x1021 = 14;
static int16_t x1024 = INT16_MIN;
int32_t x1039 = INT32_MAX;
int16_t x1040 = 1;
int64_t x1042 = INT64_MIN;
static int8_t x1061 = 1;
int16_t x1062 = INT16_MIN;
int64_t x1068 = INT64_MIN;
volatile int32_t t140 = -106;
uint8_t x1069 = 0U;
static int8_t x1073 = INT8_MAX;
static volatile uint64_t x1074 = 167557954987588LLU;
uint16_t x1075 = 25489U;
uint16_t x1076 = UINT16_MAX;
int32_t t143 = -139;
volatile int32_t t146 = -26428;
int8_t x1114 = INT8_MAX;
static volatile int16_t x1116 = INT16_MIN;
int16_t x1128 = INT16_MIN;
int32_t x1129 = INT32_MAX;
int32_t t150 = INT32_MAX;
static volatile uint64_t t151 = 292116041498544LLU;
static int8_t x1145 = 0;
static volatile uint16_t x1159 = 4786U;
int16_t x1161 = 5616;
uint64_t x1165 = 382402954006881255LLU;
static volatile int8_t x1179 = -3;
int64_t x1184 = INT64_MIN;
volatile int64_t t160 = 4576369LL;
uint32_t x1191 = UINT32_MAX;
int32_t t162 = -1017163;
uint64_t x1209 = 14225122458533LLU;
int64_t x1210 = -4419164250614110LL;
volatile uint32_t x1211 = UINT32_MAX;
volatile uint64_t t163 = 576LLU;
volatile int32_t x1233 = 8;
static int32_t t164 = -3;
volatile uint16_t x1240 = UINT16_MAX;
static int16_t x1248 = -1;
int64_t x1254 = INT64_MIN;
int32_t t169 = 2;
int16_t x1258 = -567;
int32_t t170 = -129230;
int8_t x1269 = 1;
static volatile int32_t x1289 = 2926;
static uint8_t x1292 = 17U;
static int32_t x1357 = 6;
static volatile uint8_t x1358 = 0U;
uint64_t x1369 = 9646193499LLU;
int64_t x1374 = INT64_MIN;
static int32_t x1377 = 1668;
static int8_t x1380 = INT8_MIN;
int64_t x1390 = -1LL;
volatile int32_t t185 = 2;
uint8_t x1401 = UINT8_MAX;
int8_t x1403 = -10;
int32_t t187 = INT32_MAX;
int8_t x1427 = -1;
uint32_t x1437 = 4774U;
int64_t x1438 = -415582128990LL;
static int8_t x1440 = -31;
int16_t x1442 = INT16_MAX;
int16_t x1443 = -1;
static volatile int32_t t191 = 476;
volatile int32_t t192 = 6842330;
static uint16_t x1469 = 0U;
int32_t x1477 = 7;
int64_t x1478 = INT64_MIN;
volatile int32_t t196 = 3;
volatile int32_t x1484 = -3;
int32_t t197 = -3742;
static uint64_t x1493 = 7606165819773921LLU;
int32_t x1496 = 16340;


void f0(void) {
    	volatile uint16_t x13 = 8258U;
	volatile uint8_t x15 = 4U;
	int64_t x16 = 59248974080443448LL;
	int32_t t0 = -1;

    t0 = (x13>>((x14%x15)==x16));

    if (t0 != 8258) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x17 = 9308;
	int16_t x18 = INT16_MIN;
	volatile int32_t t1 = 23;

    t1 = (x17>>((x18%x19)==x20));

    if (t1 != 9308) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x21 = 33254U;
	static int16_t x22 = -54;
	static int32_t x24 = INT32_MAX;
	static uint32_t t2 = 2010441456U;

    t2 = (x21>>((x22%x23)==x24));

    if (t2 != 33254U) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint32_t x29 = UINT32_MAX;
	int8_t x30 = INT8_MAX;
	int8_t x32 = INT8_MAX;
	uint32_t t3 = 100142847U;

    t3 = (x29>>((x30%x31)==x32));

    if (t3 != 2147483647U) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x33 = UINT16_MAX;
	static int32_t x35 = INT32_MIN;
	uint32_t x36 = UINT32_MAX;
	int32_t t4 = -4489942;

    t4 = (x33>>((x34%x35)==x36));

    if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x41 = 0;
	int8_t x42 = INT8_MIN;
	int8_t x43 = INT8_MAX;
	int32_t x44 = -1;
	int32_t t5 = -28151;

    t5 = (x41>>((x42%x43)==x44));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x49 = 3441191710LL;
	static uint16_t x50 = 2163U;
	int64_t x51 = 229697035023400LL;
	static int64_t x52 = INT64_MAX;
	int64_t t6 = -2672405LL;

    t6 = (x49>>((x50%x51)==x52));

    if (t6 != 3441191710LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x69 = 3293;
	int8_t x70 = 5;
	static uint16_t x71 = 364U;
	int8_t x72 = -1;
	volatile int32_t t7 = 0;

    t7 = (x69>>((x70%x71)==x72));

    if (t7 != 3293) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x73 = 44U;
	volatile uint16_t x74 = UINT16_MAX;
	int16_t x75 = INT16_MIN;
	volatile uint64_t x76 = UINT64_MAX;
	int32_t t8 = 42795125;

    t8 = (x73>>((x74%x75)==x76));

    if (t8 != 44) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int16_t x77 = INT16_MAX;
	volatile int32_t x78 = 7;
	int8_t x80 = -1;
	int32_t t9 = -1;

    t9 = (x77>>((x78%x79)==x80));

    if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x82 = 28U;
	int16_t x84 = INT16_MAX;
	int32_t t10 = -516;

    t10 = (x81>>((x82%x83)==x84));

    if (t10 != 255) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x85 = UINT64_MAX;
	int8_t x86 = INT8_MIN;
	static int64_t x87 = 28676601704LL;
	uint16_t x88 = 10788U;

    t11 = (x85>>((x86%x87)==x88));

    if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x93 = 1;
	static uint8_t x95 = 10U;
	int64_t x96 = INT64_MAX;
	static volatile int32_t t12 = -1;

    t12 = (x93>>((x94%x95)==x96));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x97 = UINT16_MAX;
	int8_t x98 = INT8_MIN;
	int8_t x99 = -6;
	uint64_t x100 = UINT64_MAX;
	int32_t t13 = -2140864;

    t13 = (x97>>((x98%x99)==x100));

    if (t13 != 65535) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x101 = 462987;
	uint32_t x102 = 6046107U;
	static volatile int32_t x104 = INT32_MIN;

    t14 = (x101>>((x102%x103)==x104));

    if (t14 != 462987) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x106 = 2U;
	uint8_t x107 = 27U;
	uint64_t x108 = 35895969LLU;

    t15 = (x105>>((x106%x107)==x108));

    if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x109 = UINT16_MAX;
	uint32_t x110 = UINT32_MAX;
	int16_t x112 = INT16_MAX;
	int32_t t16 = 747900;

    t16 = (x109>>((x110%x111)==x112));

    if (t16 != 65535) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x117 = UINT64_MAX;
	int64_t x118 = 15215760LL;
	volatile int64_t x119 = INT64_MIN;
	volatile int8_t x120 = INT8_MIN;

    t17 = (x117>>((x118%x119)==x120));

    if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x121 = 3246;
	int16_t x122 = -1;
	int16_t x123 = -1;
	int16_t x124 = INT16_MAX;
	static int32_t t18 = 256;

    t18 = (x121>>((x122%x123)==x124));

    if (t18 != 3246) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x129 = INT16_MAX;
	static volatile int64_t x132 = INT64_MAX;
	int32_t t19 = 1959313;

    t19 = (x129>>((x130%x131)==x132));

    if (t19 != 16383) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint8_t x137 = 1U;
	volatile int64_t x139 = -1LL;
	static volatile int32_t x140 = -1;
	int32_t t20 = 1;

    t20 = (x137>>((x138%x139)==x140));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x145 = 12U;
	static uint16_t x146 = UINT16_MAX;
	uint32_t x147 = UINT32_MAX;
	int8_t x148 = INT8_MAX;
	static volatile int32_t t21 = 115;

    t21 = (x145>>((x146%x147)==x148));

    if (t21 != 12) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x153 = 780139LLU;
	volatile uint32_t x154 = 29U;
	uint64_t x155 = UINT64_MAX;
	uint16_t x156 = 1316U;
	uint64_t t22 = 2416692604267400LLU;

    t22 = (x153>>((x154%x155)==x156));

    if (t22 != 780139LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint64_t x161 = 3302697LLU;
	int8_t x163 = INT8_MIN;
	int8_t x164 = INT8_MIN;
	uint64_t t23 = 1486LLU;

    t23 = (x161>>((x162%x163)==x164));

    if (t23 != 3302697LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x166 = INT8_MAX;
	static uint64_t t24 = UINT64_MAX;

    t24 = (x165>>((x166%x167)==x168));

    if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x169 = INT64_MAX;
	static uint64_t x170 = 913805500444610LLU;
	int16_t x171 = 12498;
	static volatile uint32_t x172 = UINT32_MAX;
	volatile int64_t t25 = INT64_MAX;

    t25 = (x169>>((x170%x171)==x172));

    if (t25 != INT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x173 = 29089;
	uint16_t x174 = UINT16_MAX;
	volatile int8_t x175 = INT8_MAX;
	static int16_t x176 = 21;
	volatile int32_t t26 = 11117526;

    t26 = (x173>>((x174%x175)==x176));

    if (t26 != 29089) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x177 = UINT64_MAX;
	int32_t x178 = INT32_MIN;
	int16_t x179 = INT16_MIN;
	volatile int8_t x180 = -1;
	uint64_t t27 = UINT64_MAX;

    t27 = (x177>>((x178%x179)==x180));

    if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x182 = INT8_MIN;
	int8_t x184 = INT8_MIN;
	int32_t t28 = 2045808;

    t28 = (x181>>((x182%x183)==x184));

    if (t28 != 127) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x193 = INT8_MAX;
	static int64_t x194 = 4047LL;
	static volatile uint8_t x195 = 2U;
	int8_t x196 = INT8_MIN;
	volatile int32_t t29 = 0;

    t29 = (x193>>((x194%x195)==x196));

    if (t29 != 127) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x201 = 4969941481046284803LLU;
	volatile int16_t x202 = INT16_MIN;
	volatile uint64_t x203 = 12806960356094521LLU;
	int32_t x204 = INT32_MAX;
	volatile uint64_t t30 = 23LLU;

    t30 = (x201>>((x202%x203)==x204));

    if (t30 != 4969941481046284803LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x209 = 1U;
	uint8_t x210 = UINT8_MAX;
	int64_t x212 = INT64_MAX;
	volatile int32_t t31 = 353;

    t31 = (x209>>((x210%x211)==x212));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x221 = INT8_MAX;
	int8_t x222 = -1;
	static int32_t x224 = 107190;
	static volatile int32_t t32 = -91682507;

    t32 = (x221>>((x222%x223)==x224));

    if (t32 != 127) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x225 = INT16_MAX;
	static uint32_t x226 = 4485409U;
	static uint8_t x227 = 113U;
	uint8_t x228 = UINT8_MAX;

    t33 = (x225>>((x226%x227)==x228));

    if (t33 != 32767) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x254 = 65149;
	uint32_t x255 = 15634U;
	int64_t x256 = -1LL;
	uint64_t t34 = UINT64_MAX;

    t34 = (x253>>((x254%x255)==x256));

    if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x269 = UINT32_MAX;
	uint64_t x270 = 22LLU;
	volatile uint8_t x271 = 28U;
	int16_t x272 = 3;
	static uint32_t t35 = UINT32_MAX;

    t35 = (x269>>((x270%x271)==x272));

    if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x273 = UINT32_MAX;
	int32_t x275 = -437805164;
	uint16_t x276 = 56U;

    t36 = (x273>>((x274%x275)==x276));

    if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x290 = 3064;
	int16_t x291 = INT16_MAX;

    t37 = (x289>>((x290%x291)==x292));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x293 = 1178U;
	int32_t x294 = 113417;
	volatile uint32_t x295 = 39192U;
	uint32_t t38 = 22793U;

    t38 = (x293>>((x294%x295)==x296));

    if (t38 != 1178U) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x298 = 11U;
	static int64_t x299 = -1LL;
	uint8_t x300 = UINT8_MAX;
	uint32_t t39 = UINT32_MAX;

    t39 = (x297>>((x298%x299)==x300));

    if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x301 = 15095;
	static int16_t x302 = INT16_MIN;
	int16_t x303 = -12;
	uint16_t x304 = 59U;

    t40 = (x301>>((x302%x303)==x304));

    if (t40 != 15095) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x309 = 0;
	volatile int16_t x310 = -1;
	int8_t x311 = INT8_MAX;

    t41 = (x309>>((x310%x311)==x312));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x322 = -1;
	int64_t x323 = -1LL;
	static uint64_t x324 = 31589LLU;
	int32_t t42 = 1;

    t42 = (x321>>((x322%x323)==x324));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x325 = 3305U;
	int32_t x326 = -849511;
	static volatile int64_t x328 = 1964193218096604LL;
	static int32_t t43 = -110505950;

    t43 = (x325>>((x326%x327)==x328));

    if (t43 != 3305) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint32_t x333 = 65251U;
	static volatile uint32_t x334 = UINT32_MAX;
	static volatile int64_t x335 = -321799249204092386LL;
	volatile int8_t x336 = 1;
	static uint32_t t44 = 194721055U;

    t44 = (x333>>((x334%x335)==x336));

    if (t44 != 65251U) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x337 = 50U;
	uint16_t x338 = 8126U;
	volatile uint32_t x340 = 104835333U;
	uint32_t t45 = 718930U;

    t45 = (x337>>((x338%x339)==x340));

    if (t45 != 50U) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x345 = INT8_MAX;
	volatile int64_t x346 = 0LL;
	static int8_t x348 = -9;
	int32_t t46 = -540213460;

    t46 = (x345>>((x346%x347)==x348));

    if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x349 = INT16_MAX;
	static uint64_t x350 = UINT64_MAX;
	static volatile int64_t x351 = -1343689547LL;
	static int8_t x352 = INT8_MIN;
	int32_t t47 = -33207838;

    t47 = (x349>>((x350%x351)==x352));

    if (t47 != 32767) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x385 = INT8_MAX;
	static volatile int32_t x387 = INT32_MIN;
	uint16_t x388 = 8049U;

    t48 = (x385>>((x386%x387)==x388));

    if (t48 != 127) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint32_t x394 = 7U;
	int8_t x395 = -1;
	static volatile uint64_t x396 = 14602482870871LLU;
	uint64_t t49 = 35836LLU;

    t49 = (x393>>((x394%x395)==x396));

    if (t49 != 176060LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x401 = 185;
	uint16_t x402 = 10321U;
	static int64_t x404 = INT64_MIN;
	int32_t t50 = 156;

    t50 = (x401>>((x402%x403)==x404));

    if (t50 != 185) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x413 = INT32_MAX;
	volatile uint64_t x414 = 15LLU;
	uint64_t x415 = 3605LLU;
	static int16_t x416 = INT16_MAX;
	int32_t t51 = INT32_MAX;

    t51 = (x413>>((x414%x415)==x416));

    if (t51 != INT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile uint64_t x425 = UINT64_MAX;
	static int8_t x426 = -1;
	volatile uint8_t x427 = 37U;
	volatile uint64_t t52 = 311381554LLU;

    t52 = (x425>>((x426%x427)==x428));

    if (t52 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int64_t x433 = 191975882558561318LL;
	static int8_t x434 = INT8_MIN;
	volatile int8_t x435 = 8;
	uint64_t x436 = UINT64_MAX;

    t53 = (x433>>((x434%x435)==x436));

    if (t53 != 191975882558561318LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x441 = 112817LL;
	static int16_t x442 = -1;
	int32_t x443 = 59;
	int8_t x444 = -31;
	volatile int64_t t54 = -925694226LL;

    t54 = (x441>>((x442%x443)==x444));

    if (t54 != 112817LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint16_t x449 = 4576U;
	int64_t x451 = -1LL;
	int64_t x452 = INT64_MIN;
	volatile int32_t t55 = 0;

    t55 = (x449>>((x450%x451)==x452));

    if (t55 != 4576) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint32_t x453 = 58511U;
	static int32_t x454 = -1;
	int32_t x455 = INT32_MIN;
	int8_t x456 = INT8_MIN;
	static uint32_t t56 = 6663107U;

    t56 = (x453>>((x454%x455)==x456));

    if (t56 != 58511U) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x465 = INT32_MAX;
	uint64_t x466 = UINT64_MAX;
	int32_t x467 = -8183369;
	int32_t t57 = INT32_MAX;

    t57 = (x465>>((x466%x467)==x468));

    if (t57 != INT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x485 = INT16_MAX;
	volatile int8_t x487 = INT8_MIN;
	static int64_t x488 = INT64_MIN;
	static int32_t t58 = -541520;

    t58 = (x485>>((x486%x487)==x488));

    if (t58 != 32767) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x493 = 4;
	uint16_t x494 = UINT16_MAX;
	int16_t x495 = -1;
	int32_t t59 = -317445;

    t59 = (x493>>((x494%x495)==x496));

    if (t59 != 4) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int32_t x506 = INT32_MIN;
	volatile int32_t x507 = INT32_MAX;
	int32_t x508 = INT32_MIN;
	volatile uint32_t t60 = UINT32_MAX;

    t60 = (x505>>((x506%x507)==x508));

    if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x509 = 3U;
	int16_t x510 = INT16_MIN;
	static int64_t x511 = INT64_MIN;
	static volatile uint32_t x512 = 716U;
	int32_t t61 = 612;

    t61 = (x509>>((x510%x511)==x512));

    if (t61 != 3) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x521 = 59LLU;
	static uint8_t x522 = 1U;
	int8_t x523 = -1;

    t62 = (x521>>((x522%x523)==x524));

    if (t62 != 59LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x529 = INT8_MAX;
	static int32_t x531 = INT32_MAX;
	int64_t x532 = -5402894731426440LL;
	int32_t t63 = 580108866;

    t63 = (x529>>((x530%x531)==x532));

    if (t63 != 127) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint32_t x533 = 541946466U;
	int8_t x534 = INT8_MAX;
	volatile uint32_t t64 = 11481U;

    t64 = (x533>>((x534%x535)==x536));

    if (t64 != 541946466U) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint32_t x561 = UINT32_MAX;
	uint16_t x562 = 7U;
	static volatile int8_t x563 = INT8_MIN;

    t65 = (x561>>((x562%x563)==x564));

    if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x566 = 12808U;
	int8_t x568 = INT8_MIN;

    t66 = (x565>>((x566%x567)==x568));

    if (t66 != 20227LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x569 = 63002013237134LLU;
	volatile int64_t x571 = 2857497284LL;
	volatile int16_t x572 = 25;
	volatile uint64_t t67 = 38796368LLU;

    t67 = (x569>>((x570%x571)==x572));

    if (t67 != 63002013237134LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint8_t x575 = 80U;
	int16_t x576 = -1;
	uint64_t t68 = 2999383046107851234LLU;

    t68 = (x573>>((x574%x575)==x576));

    if (t68 != 1095496540793325742LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint64_t x581 = 10582530506985264LLU;
	static uint64_t x582 = 131LLU;
	volatile uint64_t t69 = 112978370177LLU;

    t69 = (x581>>((x582%x583)==x584));

    if (t69 != 10582530506985264LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint32_t x585 = 17169U;
	int8_t x586 = INT8_MIN;
	int64_t x587 = INT64_MAX;
	uint64_t x588 = UINT64_MAX;
	static uint32_t t70 = 7364U;

    t70 = (x585>>((x586%x587)==x588));

    if (t70 != 17169U) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x609 = UINT8_MAX;
	uint16_t x610 = UINT16_MAX;
	int8_t x611 = INT8_MAX;
	int32_t t71 = 173197;

    t71 = (x609>>((x610%x611)==x612));

    if (t71 != 255) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x613 = 2835181283114LLU;
	static int32_t x614 = 6608;
	int8_t x615 = -7;
	int16_t x616 = -30;
	volatile uint64_t t72 = 7453038400179LLU;

    t72 = (x613>>((x614%x615)==x616));

    if (t72 != 2835181283114LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t x630 = 27659;
	int64_t x631 = INT64_MAX;
	static int64_t x632 = INT64_MAX;
	volatile uint64_t t73 = 465530527383955524LLU;

    t73 = (x629>>((x630%x631)==x632));

    if (t73 != 9001295LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x637 = 44U;
	volatile uint16_t x638 = 3U;
	volatile uint64_t x639 = 838636LLU;
	uint8_t x640 = 87U;
	int32_t t74 = 86698;

    t74 = (x637>>((x638%x639)==x640));

    if (t74 != 44) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int16_t x641 = 5489;
	int32_t x642 = 4024026;
	int32_t x644 = INT32_MAX;
	volatile int32_t t75 = 3426;

    t75 = (x641>>((x642%x643)==x644));

    if (t75 != 5489) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int8_t x645 = INT8_MAX;
	int16_t x646 = INT16_MIN;
	int8_t x647 = INT8_MAX;
	int64_t x648 = INT64_MIN;
	int32_t t76 = -90274741;

    t76 = (x645>>((x646%x647)==x648));

    if (t76 != 127) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint64_t x653 = 7LLU;
	int16_t x655 = 1914;

    t77 = (x653>>((x654%x655)==x656));

    if (t77 != 7LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x657 = UINT32_MAX;
	uint32_t x658 = 5U;
	uint16_t x659 = UINT16_MAX;
	volatile uint32_t t78 = UINT32_MAX;

    t78 = (x657>>((x658%x659)==x660));

    if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x661 = UINT32_MAX;
	static volatile int32_t x662 = -1;
	int64_t x663 = INT64_MAX;
	static int8_t x664 = -1;
	uint32_t t79 = 345U;

    t79 = (x661>>((x662%x663)==x664));

    if (t79 != 2147483647U) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x665 = INT32_MAX;
	int16_t x666 = 10;
	static int32_t x667 = INT32_MIN;
	uint64_t x668 = UINT64_MAX;
	volatile int32_t t80 = INT32_MAX;

    t80 = (x665>>((x666%x667)==x668));

    if (t80 != INT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x673 = 6012406606448LLU;
	uint8_t x674 = 0U;
	static uint8_t x676 = 3U;
	volatile uint64_t t81 = 6LLU;

    t81 = (x673>>((x674%x675)==x676));

    if (t81 != 6012406606448LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint16_t x677 = 3U;
	uint8_t x678 = 70U;
	volatile int16_t x679 = -12;
	static int32_t x680 = INT32_MAX;

    t82 = (x677>>((x678%x679)==x680));

    if (t82 != 3) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x685 = 12;
	uint32_t x687 = UINT32_MAX;
	static uint8_t x688 = 3U;
	int32_t t83 = -6;

    t83 = (x685>>((x686%x687)==x688));

    if (t83 != 12) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x689 = 12531;
	volatile int64_t x690 = INT64_MIN;
	int64_t x691 = INT64_MIN;
	int64_t x692 = INT64_MIN;
	int32_t t84 = -209824;

    t84 = (x689>>((x690%x691)==x692));

    if (t84 != 12531) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x693 = UINT16_MAX;
	uint64_t x694 = 128687LLU;
	uint32_t x695 = UINT32_MAX;
	int8_t x696 = 7;
	volatile int32_t t85 = 1113;

    t85 = (x693>>((x694%x695)==x696));

    if (t85 != 65535) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x697 = 12516211774LL;
	int64_t x698 = -225LL;
	uint32_t x699 = UINT32_MAX;
	int16_t x700 = INT16_MIN;
	int64_t t86 = -225633287887855791LL;

    t86 = (x697>>((x698%x699)==x700));

    if (t86 != 12516211774LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x709 = INT8_MAX;
	int32_t x710 = -1;
	uint64_t x711 = UINT64_MAX;
	int32_t x712 = INT32_MAX;
	int32_t t87 = 33;

    t87 = (x709>>((x710%x711)==x712));

    if (t87 != 127) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint64_t x713 = 12263843140LLU;
	int32_t x715 = -1;
	volatile uint32_t x716 = UINT32_MAX;
	volatile uint64_t t88 = 64382488125LLU;

    t88 = (x713>>((x714%x715)==x716));

    if (t88 != 12263843140LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x717 = 81214939810LLU;
	static int16_t x718 = 79;
	int64_t x719 = INT64_MAX;
	int8_t x720 = INT8_MIN;
	uint64_t t89 = 9693251165411065LLU;

    t89 = (x717>>((x718%x719)==x720));

    if (t89 != 81214939810LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x721 = INT16_MAX;
	int16_t x722 = INT16_MIN;
	static int64_t x724 = INT64_MAX;
	int32_t t90 = 420;

    t90 = (x721>>((x722%x723)==x724));

    if (t90 != 32767) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint8_t x729 = 104U;
	uint16_t x730 = 4U;
	static volatile int32_t x731 = INT32_MIN;
	uint16_t x732 = UINT16_MAX;
	static volatile int32_t t91 = 112034;

    t91 = (x729>>((x730%x731)==x732));

    if (t91 != 104) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x737 = 3663624U;
	int32_t x738 = -1;
	static int32_t x739 = 120893;
	uint32_t t92 = 1U;

    t92 = (x737>>((x738%x739)==x740));

    if (t92 != 3663624U) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x741 = 42U;
	static int32_t x744 = -34585391;

    t93 = (x741>>((x742%x743)==x744));

    if (t93 != 42) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x753 = 5;
	int8_t x754 = -1;
	uint16_t x755 = 186U;
	int32_t x756 = INT32_MIN;
	int32_t t94 = 1;

    t94 = (x753>>((x754%x755)==x756));

    if (t94 != 5) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint16_t x757 = UINT16_MAX;
	int32_t x758 = -1;
	static volatile int32_t x759 = INT32_MIN;
	uint32_t x760 = UINT32_MAX;
	volatile int32_t t95 = -11208838;

    t95 = (x757>>((x758%x759)==x760));

    if (t95 != 32767) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x761 = UINT16_MAX;
	volatile uint32_t x763 = 1636134271U;
	uint32_t x764 = 44U;

    t96 = (x761>>((x762%x763)==x764));

    if (t96 != 65535) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x765 = INT32_MAX;
	static volatile uint8_t x768 = 31U;
	volatile int32_t t97 = INT32_MAX;

    t97 = (x765>>((x766%x767)==x768));

    if (t97 != INT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x769 = 2;
	static volatile int8_t x770 = 1;
	uint8_t x771 = 78U;
	int64_t x772 = INT64_MIN;
	int32_t t98 = 360644;

    t98 = (x769>>((x770%x771)==x772));

    if (t98 != 2) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x781 = 0;
	int32_t x782 = -1;
	int16_t x783 = 52;
	volatile int16_t x784 = -1;
	volatile int32_t t99 = -21177;

    t99 = (x781>>((x782%x783)==x784));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x785 = 81U;
	int64_t x786 = INT64_MAX;
	volatile int32_t t100 = 0;

    t100 = (x785>>((x786%x787)==x788));

    if (t100 != 81) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x790 = -1;
	int16_t x792 = INT16_MIN;
	volatile int32_t t101 = 26;

    t101 = (x789>>((x790%x791)==x792));

    if (t101 != 56) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint64_t x793 = UINT64_MAX;
	uint32_t x794 = UINT32_MAX;
	uint32_t x795 = 4198409U;
	static volatile uint16_t x796 = 18U;

    t102 = (x793>>((x794%x795)==x796));

    if (t102 != UINT64_MAX) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x798 = 56U;
	volatile uint32_t t103 = 1482U;

    t103 = (x797>>((x798%x799)==x800));

    if (t103 != 13054U) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x801 = INT64_MAX;
	int16_t x802 = INT16_MIN;
	uint16_t x803 = UINT16_MAX;

    t104 = (x801>>((x802%x803)==x804));

    if (t104 != INT64_MAX) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint64_t x810 = UINT64_MAX;
	int16_t x811 = INT16_MIN;
	volatile int32_t t105 = 457105427;

    t105 = (x809>>((x810%x811)==x812));

    if (t105 != 518) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint8_t x813 = 3U;
	volatile int8_t x814 = INT8_MAX;
	uint16_t x815 = 3U;
	volatile int32_t t106 = 1;

    t106 = (x813>>((x814%x815)==x816));

    if (t106 != 3) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x821 = 14U;
	uint16_t x822 = 0U;
	volatile uint16_t x823 = 217U;
	volatile uint8_t x824 = 0U;
	volatile int32_t t107 = -770;

    t107 = (x821>>((x822%x823)==x824));

    if (t107 != 7) { NG(); } else { ; }
	
}

void f108(void) {
    	static int64_t x826 = INT64_MAX;
	uint64_t x828 = 355522LLU;
	volatile uint32_t t108 = 21U;

    t108 = (x825>>((x826%x827)==x828));

    if (t108 != 115U) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint8_t x829 = 0U;
	uint8_t x830 = 3U;
	static int64_t x831 = 417342878610637LL;
	static int64_t x832 = INT64_MAX;

    t109 = (x829>>((x830%x831)==x832));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x833 = 494LLU;
	static int8_t x834 = 0;
	uint8_t x835 = UINT8_MAX;
	volatile int64_t x836 = -1LL;
	static volatile uint64_t t110 = 4498174389750436803LLU;

    t110 = (x833>>((x834%x835)==x836));

    if (t110 != 494LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x838 = INT8_MAX;
	volatile int64_t x839 = -483140347181485871LL;
	int64_t x840 = -65527808LL;
	static volatile uint32_t t111 = UINT32_MAX;

    t111 = (x837>>((x838%x839)==x840));

    if (t111 != UINT32_MAX) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x841 = 467;
	volatile int16_t x843 = -760;
	uint32_t x844 = 31330295U;

    t112 = (x841>>((x842%x843)==x844));

    if (t112 != 467) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x853 = 2342U;
	volatile int16_t x854 = -1;
	int64_t x855 = INT64_MIN;
	static int16_t x856 = -1006;

    t113 = (x853>>((x854%x855)==x856));

    if (t113 != 2342) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x877 = UINT32_MAX;
	int8_t x879 = -1;
	int16_t x880 = -1;
	uint32_t t114 = UINT32_MAX;

    t114 = (x877>>((x878%x879)==x880));

    if (t114 != UINT32_MAX) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x881 = INT8_MAX;
	static int8_t x883 = -1;
	uint8_t x884 = UINT8_MAX;
	static int32_t t115 = -11431;

    t115 = (x881>>((x882%x883)==x884));

    if (t115 != 127) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x886 = -176132466326352LL;
	int8_t x887 = INT8_MAX;
	int32_t t116 = INT32_MAX;

    t116 = (x885>>((x886%x887)==x888));

    if (t116 != INT32_MAX) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x889 = UINT64_MAX;
	volatile uint8_t x890 = UINT8_MAX;
	int8_t x891 = INT8_MIN;
	int8_t x892 = -1;
	volatile uint64_t t117 = UINT64_MAX;

    t117 = (x889>>((x890%x891)==x892));

    if (t117 != UINT64_MAX) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x914 = INT8_MIN;
	volatile int32_t x915 = INT32_MIN;
	int64_t x916 = 21015628676934LL;

    t118 = (x913>>((x914%x915)==x916));

    if (t118 != INT64_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x917 = INT16_MAX;
	uint64_t x918 = 1772437376319352LLU;
	int64_t x919 = INT64_MIN;
	volatile uint32_t x920 = 48602569U;
	volatile int32_t t119 = 10;

    t119 = (x917>>((x918%x919)==x920));

    if (t119 != 32767) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x921 = 14218225367440LL;
	int32_t x922 = INT32_MIN;
	int32_t x923 = INT32_MAX;
	uint64_t x924 = UINT64_MAX;

    t120 = (x921>>((x922%x923)==x924));

    if (t120 != 7109112683720LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x941 = INT32_MAX;
	static int8_t x942 = INT8_MAX;
	volatile int8_t x943 = INT8_MIN;
	static volatile uint16_t x944 = 152U;
	static int32_t t121 = INT32_MAX;

    t121 = (x941>>((x942%x943)==x944));

    if (t121 != INT32_MAX) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x953 = UINT64_MAX;
	int64_t x954 = INT64_MAX;
	int16_t x955 = INT16_MIN;
	volatile uint64_t t122 = UINT64_MAX;

    t122 = (x953>>((x954%x955)==x956));

    if (t122 != UINT64_MAX) { NG(); } else { ; }
	
}

void f123(void) {
    	static int16_t x962 = INT16_MIN;
	uint16_t x963 = 22U;
	volatile int32_t t123 = -16370962;

    t123 = (x961>>((x962%x963)==x964));

    if (t123 != 32767) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x978 = -1;
	int32_t x979 = -1;
	int16_t x980 = -324;
	int32_t t124 = 187742;

    t124 = (x977>>((x978%x979)==x980));

    if (t124 != 83) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x985 = 8LLU;
	int64_t x986 = 4LL;
	uint8_t x987 = UINT8_MAX;
	static volatile int64_t x988 = INT64_MIN;
	uint64_t t125 = 5432587687197357230LLU;

    t125 = (x985>>((x986%x987)==x988));

    if (t125 != 8LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	static int32_t x990 = 66742367;
	int16_t x991 = -1;
	volatile int64_t x992 = INT64_MIN;
	int32_t t126 = 6;

    t126 = (x989>>((x990%x991)==x992));

    if (t126 != 32767) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x1001 = 0U;
	int8_t x1002 = INT8_MAX;
	uint16_t x1003 = 1U;
	static volatile int32_t t127 = -1;

    t127 = (x1001>>((x1002%x1003)==x1004));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x1005 = 4501828LLU;
	static uint8_t x1007 = 16U;
	uint16_t x1008 = 1095U;

    t128 = (x1005>>((x1006%x1007)==x1008));

    if (t128 != 4501828LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x1011 = INT64_MIN;
	static uint16_t x1012 = 3U;
	uint32_t t129 = 1253015677U;

    t129 = (x1009>>((x1010%x1011)==x1012));

    if (t129 != 8U) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x1014 = INT8_MAX;
	int8_t x1015 = INT8_MAX;
	int16_t x1016 = -2947;
	int32_t t130 = 100380;

    t130 = (x1013>>((x1014%x1015)==x1016));

    if (t130 != 65535) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x1017 = 622088371553146907LLU;
	volatile int32_t x1018 = -6876;
	static int32_t x1019 = 80313;
	int32_t x1020 = INT32_MIN;
	volatile uint64_t t131 = 31LLU;

    t131 = (x1017>>((x1018%x1019)==x1020));

    if (t131 != 622088371553146907LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x1022 = INT16_MIN;
	int64_t x1023 = INT64_MIN;
	static volatile int32_t t132 = 2;

    t132 = (x1021>>((x1022%x1023)==x1024));

    if (t132 != 7) { NG(); } else { ; }
	
}

void f133(void) {
    	static int32_t x1025 = INT32_MAX;
	int32_t x1026 = INT32_MIN;
	static uint32_t x1027 = UINT32_MAX;
	static uint16_t x1028 = 0U;
	int32_t t133 = INT32_MAX;

    t133 = (x1025>>((x1026%x1027)==x1028));

    if (t133 != INT32_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint16_t x1033 = UINT16_MAX;
	int16_t x1034 = 1;
	uint64_t x1035 = 1978948779646658584LLU;
	static int64_t x1036 = INT64_MAX;
	int32_t t134 = 17767;

    t134 = (x1033>>((x1034%x1035)==x1036));

    if (t134 != 65535) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x1037 = 0;
	int8_t x1038 = 31;
	int32_t t135 = 687;

    t135 = (x1037>>((x1038%x1039)==x1040));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint64_t x1041 = 47344LLU;
	volatile int8_t x1043 = INT8_MIN;
	uint32_t x1044 = 3548031U;
	uint64_t t136 = 47879202698136LLU;

    t136 = (x1041>>((x1042%x1043)==x1044));

    if (t136 != 47344LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x1045 = INT16_MAX;
	static uint8_t x1046 = UINT8_MAX;
	int32_t x1047 = 27907159;
	uint16_t x1048 = 2U;
	static int32_t t137 = -161;

    t137 = (x1045>>((x1046%x1047)==x1048));

    if (t137 != 32767) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x1057 = 125U;
	int8_t x1058 = INT8_MIN;
	int8_t x1059 = INT8_MAX;
	int32_t x1060 = INT32_MIN;
	uint32_t t138 = 10U;

    t138 = (x1057>>((x1058%x1059)==x1060));

    if (t138 != 125U) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x1063 = INT16_MAX;
	int16_t x1064 = -1;
	volatile int32_t t139 = -5770;

    t139 = (x1061>>((x1062%x1063)==x1064));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile uint8_t x1065 = 9U;
	int16_t x1066 = INT16_MAX;
	int64_t x1067 = -1LL;

    t140 = (x1065>>((x1066%x1067)==x1068));

    if (t140 != 9) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x1070 = -1;
	int32_t x1071 = INT32_MIN;
	volatile int16_t x1072 = -2169;
	int32_t t141 = 49;

    t141 = (x1069>>((x1070%x1071)==x1072));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t t142 = -1;

    t142 = (x1073>>((x1074%x1075)==x1076));

    if (t142 != 127) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x1077 = 9U;
	int32_t x1078 = 3640835;
	uint32_t x1079 = UINT32_MAX;
	int16_t x1080 = INT16_MIN;

    t143 = (x1077>>((x1078%x1079)==x1080));

    if (t143 != 9) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x1089 = 7;
	int32_t x1090 = INT32_MIN;
	uint16_t x1091 = 15U;
	int64_t x1092 = INT64_MIN;
	volatile int32_t t144 = 2174;

    t144 = (x1089>>((x1090%x1091)==x1092));

    if (t144 != 7) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int16_t x1097 = 48;
	volatile int32_t x1098 = 186799456;
	uint8_t x1099 = UINT8_MAX;
	static int8_t x1100 = 1;
	static volatile int32_t t145 = -132820;

    t145 = (x1097>>((x1098%x1099)==x1100));

    if (t145 != 48) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint16_t x1101 = 3853U;
	int64_t x1102 = INT64_MAX;
	uint8_t x1103 = 111U;
	volatile int16_t x1104 = INT16_MIN;

    t146 = (x1101>>((x1102%x1103)==x1104));

    if (t146 != 3853) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint8_t x1105 = UINT8_MAX;
	static int8_t x1106 = INT8_MIN;
	int16_t x1107 = INT16_MIN;
	int64_t x1108 = 126019433618308969LL;
	static int32_t t147 = 0;

    t147 = (x1105>>((x1106%x1107)==x1108));

    if (t147 != 255) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x1113 = INT32_MAX;
	volatile uint16_t x1115 = UINT16_MAX;
	int32_t t148 = INT32_MAX;

    t148 = (x1113>>((x1114%x1115)==x1116));

    if (t148 != INT32_MAX) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint32_t x1125 = UINT32_MAX;
	static int64_t x1126 = -20820932796LL;
	int64_t x1127 = INT64_MIN;
	volatile uint32_t t149 = UINT32_MAX;

    t149 = (x1125>>((x1126%x1127)==x1128));

    if (t149 != UINT32_MAX) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x1130 = -717;
	uint8_t x1131 = UINT8_MAX;
	int64_t x1132 = -1LL;

    t150 = (x1129>>((x1130%x1131)==x1132));

    if (t150 != INT32_MAX) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint64_t x1133 = 379381929834LLU;
	uint8_t x1134 = UINT8_MAX;
	static volatile int64_t x1135 = 162412LL;
	int32_t x1136 = -1;

    t151 = (x1133>>((x1134%x1135)==x1136));

    if (t151 != 379381929834LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x1137 = UINT8_MAX;
	int16_t x1138 = INT16_MIN;
	int8_t x1139 = -1;
	int64_t x1140 = INT64_MIN;
	volatile int32_t t152 = -14846;

    t152 = (x1137>>((x1138%x1139)==x1140));

    if (t152 != 255) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x1141 = INT16_MAX;
	static uint16_t x1142 = UINT16_MAX;
	int8_t x1143 = -1;
	static int16_t x1144 = INT16_MAX;
	int32_t t153 = 3;

    t153 = (x1141>>((x1142%x1143)==x1144));

    if (t153 != 32767) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x1146 = INT32_MIN;
	int64_t x1147 = INT64_MIN;
	uint8_t x1148 = UINT8_MAX;
	static int32_t t154 = -8266151;

    t154 = (x1145>>((x1146%x1147)==x1148));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x1157 = 240664346317LLU;
	int64_t x1158 = -1LL;
	int64_t x1160 = 106338LL;
	uint64_t t155 = 151911209350236LLU;

    t155 = (x1157>>((x1158%x1159)==x1160));

    if (t155 != 240664346317LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x1162 = -1;
	static int32_t x1163 = -1;
	static int32_t x1164 = -1;
	volatile int32_t t156 = 15577238;

    t156 = (x1161>>((x1162%x1163)==x1164));

    if (t156 != 5616) { NG(); } else { ; }
	
}

void f157(void) {
    	static int64_t x1166 = -50355967LL;
	int64_t x1167 = INT64_MIN;
	int8_t x1168 = INT8_MAX;
	static volatile uint64_t t157 = 21LLU;

    t157 = (x1165>>((x1166%x1167)==x1168));

    if (t157 != 382402954006881255LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static int32_t x1169 = INT32_MAX;
	uint16_t x1170 = UINT16_MAX;
	volatile int64_t x1171 = -1LL;
	uint64_t x1172 = UINT64_MAX;
	int32_t t158 = INT32_MAX;

    t158 = (x1169>>((x1170%x1171)==x1172));

    if (t158 != INT32_MAX) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x1177 = INT64_MAX;
	int16_t x1178 = 0;
	int16_t x1180 = INT16_MIN;
	volatile int64_t t159 = INT64_MAX;

    t159 = (x1177>>((x1178%x1179)==x1180));

    if (t159 != INT64_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x1181 = 8395153LL;
	uint16_t x1182 = 906U;
	int32_t x1183 = -1;

    t160 = (x1181>>((x1182%x1183)==x1184));

    if (t160 != 8395153LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x1189 = INT16_MAX;
	int32_t x1190 = -1;
	volatile uint16_t x1192 = UINT16_MAX;
	int32_t t161 = -12446;

    t161 = (x1189>>((x1190%x1191)==x1192));

    if (t161 != 32767) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x1201 = INT8_MAX;
	uint16_t x1202 = UINT16_MAX;
	int32_t x1203 = -17882238;
	int32_t x1204 = INT32_MAX;

    t162 = (x1201>>((x1202%x1203)==x1204));

    if (t162 != 127) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x1212 = -122;

    t163 = (x1209>>((x1210%x1211)==x1212));

    if (t163 != 14225122458533LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x1234 = INT8_MIN;
	int16_t x1235 = INT16_MAX;
	uint8_t x1236 = 21U;

    t164 = (x1233>>((x1234%x1235)==x1236));

    if (t164 != 8) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x1237 = INT32_MAX;
	uint32_t x1238 = UINT32_MAX;
	int16_t x1239 = INT16_MIN;
	volatile int32_t t165 = INT32_MAX;

    t165 = (x1237>>((x1238%x1239)==x1240));

    if (t165 != INT32_MAX) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x1241 = INT16_MAX;
	int16_t x1242 = INT16_MAX;
	int64_t x1243 = 1124317461522492216LL;
	int32_t x1244 = INT32_MAX;
	static int32_t t166 = 31933569;

    t166 = (x1241>>((x1242%x1243)==x1244));

    if (t166 != 32767) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x1245 = 20505U;
	static uint8_t x1246 = 6U;
	uint32_t x1247 = 44991509U;
	int32_t t167 = -14345070;

    t167 = (x1245>>((x1246%x1247)==x1248));

    if (t167 != 20505) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int64_t x1249 = INT64_MAX;
	int8_t x1250 = -1;
	uint16_t x1251 = 13876U;
	int64_t x1252 = -3403448965726LL;
	volatile int64_t t168 = INT64_MAX;

    t168 = (x1249>>((x1250%x1251)==x1252));

    if (t168 != INT64_MAX) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x1253 = 3450U;
	static int8_t x1255 = INT8_MAX;
	static int32_t x1256 = INT32_MAX;

    t169 = (x1253>>((x1254%x1255)==x1256));

    if (t169 != 3450) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x1257 = INT8_MAX;
	int8_t x1259 = 12;
	static int8_t x1260 = INT8_MIN;

    t170 = (x1257>>((x1258%x1259)==x1260));

    if (t170 != 127) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x1270 = INT16_MIN;
	static int16_t x1271 = INT16_MIN;
	static uint8_t x1272 = 36U;
	static int32_t t171 = 13975;

    t171 = (x1269>>((x1270%x1271)==x1272));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x1290 = INT64_MIN;
	volatile int64_t x1291 = INT64_MIN;
	volatile int32_t t172 = 17;

    t172 = (x1289>>((x1290%x1291)==x1292));

    if (t172 != 2926) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x1293 = INT32_MAX;
	int8_t x1294 = INT8_MAX;
	int16_t x1295 = -1;
	volatile int16_t x1296 = INT16_MIN;
	volatile int32_t t173 = INT32_MAX;

    t173 = (x1293>>((x1294%x1295)==x1296));

    if (t173 != INT32_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x1301 = UINT8_MAX;
	int16_t x1302 = INT16_MAX;
	uint32_t x1303 = 1U;
	volatile uint32_t x1304 = 600746U;
	int32_t t174 = -150508;

    t174 = (x1301>>((x1302%x1303)==x1304));

    if (t174 != 255) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x1317 = 3U;
	static int32_t x1318 = INT32_MAX;
	int64_t x1319 = INT64_MAX;
	uint32_t x1320 = 241135413U;
	int32_t t175 = -61466102;

    t175 = (x1317>>((x1318%x1319)==x1320));

    if (t175 != 3) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x1329 = 242860LLU;
	static uint8_t x1330 = 27U;
	static int16_t x1331 = INT16_MIN;
	static uint64_t x1332 = 60593027036023LLU;
	uint64_t t176 = 443268691676LLU;

    t176 = (x1329>>((x1330%x1331)==x1332));

    if (t176 != 242860LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x1359 = INT32_MAX;
	volatile uint64_t x1360 = UINT64_MAX;
	int32_t t177 = -13314005;

    t177 = (x1357>>((x1358%x1359)==x1360));

    if (t177 != 6) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x1361 = 41;
	volatile uint32_t x1362 = 170U;
	int64_t x1363 = INT64_MIN;
	int16_t x1364 = INT16_MIN;
	int32_t t178 = 0;

    t178 = (x1361>>((x1362%x1363)==x1364));

    if (t178 != 41) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint8_t x1370 = 26U;
	int8_t x1371 = INT8_MIN;
	int8_t x1372 = INT8_MIN;
	volatile uint64_t t179 = 454953LLU;

    t179 = (x1369>>((x1370%x1371)==x1372));

    if (t179 != 9646193499LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x1373 = UINT64_MAX;
	uint64_t x1375 = 29LLU;
	int32_t x1376 = INT32_MIN;
	volatile uint64_t t180 = UINT64_MAX;

    t180 = (x1373>>((x1374%x1375)==x1376));

    if (t180 != UINT64_MAX) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint32_t x1378 = 3553452U;
	int32_t x1379 = -1;
	int32_t t181 = 361;

    t181 = (x1377>>((x1378%x1379)==x1380));

    if (t181 != 1668) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x1381 = 437450;
	uint32_t x1382 = 44U;
	volatile int32_t x1383 = -216;
	volatile uint8_t x1384 = UINT8_MAX;
	static volatile int32_t t182 = -1;

    t182 = (x1381>>((x1382%x1383)==x1384));

    if (t182 != 437450) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x1385 = INT8_MAX;
	uint32_t x1386 = UINT32_MAX;
	volatile int8_t x1387 = INT8_MAX;
	int32_t x1388 = INT32_MIN;
	static volatile int32_t t183 = -106352;

    t183 = (x1385>>((x1386%x1387)==x1388));

    if (t183 != 127) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x1389 = INT32_MAX;
	uint64_t x1391 = 19543LLU;
	int64_t x1392 = INT64_MIN;
	static int32_t t184 = INT32_MAX;

    t184 = (x1389>>((x1390%x1391)==x1392));

    if (t184 != INT32_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x1393 = 62655865;
	volatile int16_t x1394 = INT16_MIN;
	static int32_t x1395 = INT32_MIN;
	uint32_t x1396 = 14912544U;

    t185 = (x1393>>((x1394%x1395)==x1396));

    if (t185 != 62655865) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x1402 = INT8_MAX;
	int16_t x1404 = INT16_MIN;
	int32_t t186 = 819052844;

    t186 = (x1401>>((x1402%x1403)==x1404));

    if (t186 != 255) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x1405 = INT32_MAX;
	uint32_t x1406 = 347U;
	int32_t x1407 = INT32_MIN;
	int64_t x1408 = -1LL;

    t187 = (x1405>>((x1406%x1407)==x1408));

    if (t187 != INT32_MAX) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x1409 = 3;
	int8_t x1410 = -20;
	int8_t x1411 = INT8_MIN;
	volatile uint64_t x1412 = 420645619389LLU;
	static volatile int32_t t188 = 141;

    t188 = (x1409>>((x1410%x1411)==x1412));

    if (t188 != 3) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x1425 = INT32_MAX;
	int64_t x1426 = INT64_MAX;
	volatile uint16_t x1428 = 45U;
	int32_t t189 = INT32_MAX;

    t189 = (x1425>>((x1426%x1427)==x1428));

    if (t189 != INT32_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x1439 = 31879983;
	static volatile uint32_t t190 = 294102221U;

    t190 = (x1437>>((x1438%x1439)==x1440));

    if (t190 != 4774U) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x1441 = UINT8_MAX;
	uint32_t x1444 = UINT32_MAX;

    t191 = (x1441>>((x1442%x1443)==x1444));

    if (t191 != 255) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x1457 = 1;
	int32_t x1458 = INT32_MIN;
	volatile int32_t x1459 = INT32_MIN;
	uint16_t x1460 = 3155U;

    t192 = (x1457>>((x1458%x1459)==x1460));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint8_t x1465 = UINT8_MAX;
	uint16_t x1466 = 533U;
	volatile int16_t x1467 = INT16_MIN;
	static volatile int64_t x1468 = INT64_MAX;
	volatile int32_t t193 = 1;

    t193 = (x1465>>((x1466%x1467)==x1468));

    if (t193 != 255) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x1470 = 11;
	static uint64_t x1471 = 64LLU;
	static volatile int16_t x1472 = INT16_MIN;
	int32_t t194 = -1833569;

    t194 = (x1469>>((x1470%x1471)==x1472));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x1473 = 267108990121LLU;
	uint8_t x1474 = UINT8_MAX;
	static int64_t x1475 = -1LL;
	static int32_t x1476 = INT32_MAX;
	volatile uint64_t t195 = 563942LLU;

    t195 = (x1473>>((x1474%x1475)==x1476));

    if (t195 != 267108990121LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x1479 = 2U;
	volatile int32_t x1480 = INT32_MIN;

    t196 = (x1477>>((x1478%x1479)==x1480));

    if (t196 != 7) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x1481 = INT8_MAX;
	int8_t x1482 = 1;
	uint32_t x1483 = 264U;

    t197 = (x1481>>((x1482%x1483)==x1484));

    if (t197 != 127) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint8_t x1494 = 0U;
	static int8_t x1495 = INT8_MAX;
	uint64_t t198 = 7346612536LLU;

    t198 = (x1493>>((x1494%x1495)==x1496));

    if (t198 != 7606165819773921LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x1501 = 24206354749235738LLU;
	int32_t x1502 = 1;
	static uint32_t x1503 = 16U;
	uint16_t x1504 = 3U;
	volatile uint64_t t199 = 5873LLU;

    t199 = (x1501>>((x1502%x1503)==x1504));

    if (t199 != 24206354749235738LLU) { NG(); } else { ; }
	
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

