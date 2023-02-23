
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

int16_t x3 = -1;
int8_t x4 = -11;
static int32_t x10 = -2079921;
uint32_t t1 = 2050556U;
int16_t x16 = INT16_MIN;
uint16_t x25 = 1347U;
static volatile int32_t x26 = INT32_MIN;
volatile uint8_t x27 = 45U;
uint32_t t5 = 15659894U;
uint8_t x49 = 12U;
int64_t x51 = -13468307771LL;
int16_t x61 = 1988;
volatile int16_t x63 = 104;
int32_t t8 = 684170;
static uint32_t x74 = 87U;
static int32_t t10 = 26;
int8_t x84 = INT8_MIN;
int32_t t11 = 0;
int64_t x90 = 35036711LL;
uint32_t x99 = UINT32_MAX;
volatile int8_t x101 = 1;
volatile int16_t x102 = INT16_MIN;
uint32_t x151 = 219927U;
uint16_t x152 = 94U;
volatile int64_t t19 = 90625253781938397LL;
int64_t x158 = 766801440300465103LL;
volatile int8_t x166 = 0;
uint16_t x167 = 2941U;
int8_t x199 = 0;
int32_t t27 = 81273;
volatile int8_t x214 = INT8_MIN;
int16_t x216 = 2;
uint32_t t29 = 1U;
uint64_t t30 = 6809847LLU;
volatile int32_t x229 = INT32_MAX;
volatile uint64_t x230 = 2426871055578306LLU;
uint8_t x231 = UINT8_MAX;
uint16_t x252 = 0U;
static int32_t x253 = INT32_MAX;
int32_t x258 = -1;
int32_t x262 = INT32_MIN;
uint32_t x263 = 9U;
int64_t x280 = -72651385466636512LL;
int16_t x281 = INT16_MAX;
volatile int8_t x284 = INT8_MIN;
uint32_t x304 = UINT32_MAX;
int16_t x311 = -121;
int64_t t44 = 60243009494745188LL;
static int32_t x336 = INT32_MAX;
int32_t x346 = INT32_MAX;
static uint8_t x348 = UINT8_MAX;
int64_t x350 = 200LL;
uint32_t x351 = UINT32_MAX;
uint64_t x361 = 877526219282LLU;
int32_t x371 = 453;
static volatile int32_t x373 = 167;
volatile uint8_t x376 = 2U;
static int8_t x420 = 15;
int32_t x430 = INT32_MIN;
int8_t x431 = -1;
int64_t x432 = -1LL;
int32_t x436 = 0;
int64_t x451 = INT64_MIN;
int16_t x452 = -2480;
int32_t t58 = 273462;
uint8_t x461 = 11U;
static uint8_t x462 = UINT8_MAX;
volatile uint32_t t61 = 74827U;
volatile int16_t x509 = INT16_MAX;
uint8_t x520 = 7U;
int8_t x546 = 1;
int16_t x566 = INT16_MIN;
volatile int32_t x580 = INT32_MIN;
static uint64_t t68 = 361562LLU;
static volatile uint32_t x583 = 69U;
int16_t x587 = 0;
static volatile uint32_t t71 = 1089U;
uint32_t x603 = UINT32_MAX;
int16_t x604 = INT16_MAX;
uint16_t x613 = UINT16_MAX;
int8_t x615 = -1;
volatile uint16_t x616 = 4U;
int32_t t74 = -11;
volatile uint64_t t77 = UINT64_MAX;
volatile int64_t x707 = 27810884314LL;
static int8_t x726 = INT8_MAX;
int64_t t81 = 92073491LL;
volatile uint64_t x734 = UINT64_MAX;
int32_t x736 = INT32_MIN;
volatile uint32_t t82 = UINT32_MAX;
static volatile uint32_t t83 = 15U;
int64_t x752 = INT64_MIN;
volatile int64_t t85 = -6LL;
volatile int32_t t86 = 82696798;
static int8_t x769 = INT8_MAX;
int8_t x771 = INT8_MIN;
volatile int64_t x775 = INT64_MIN;
int8_t x779 = INT8_MIN;
int8_t x796 = INT8_MIN;
volatile int32_t x806 = INT32_MIN;
volatile uint64_t x815 = 3293509LLU;
uint8_t x819 = 1U;
int8_t x823 = INT8_MAX;
static int64_t x836 = -1LL;
uint8_t x843 = 3U;
static uint16_t x845 = UINT16_MAX;
int16_t x846 = 3;
int8_t x847 = -1;
uint64_t x859 = 3901LLU;
uint64_t x865 = 24278953193LLU;
uint32_t x868 = 445U;
static volatile uint64_t x878 = UINT64_MAX;
int64_t x882 = INT64_MIN;
int32_t x884 = 3989093;
static volatile int64_t x890 = INT64_MIN;
volatile uint32_t x894 = UINT32_MAX;
uint64_t t108 = 821402719806025936LLU;
volatile uint8_t x897 = 0U;
static volatile int8_t x899 = -1;
int32_t t109 = -2434392;
int64_t x906 = 103709LL;
int64_t x911 = -14505200157LL;
int8_t x912 = 27;
volatile uint16_t x921 = UINT16_MAX;
volatile int32_t t114 = -282;
uint16_t x941 = 1781U;
volatile uint32_t x942 = 2273U;
int8_t x965 = 0;
volatile uint8_t x966 = UINT8_MAX;
int16_t x967 = INT16_MAX;
uint32_t x989 = UINT32_MAX;
volatile uint32_t t120 = UINT32_MAX;
uint32_t x997 = 0U;
volatile int8_t x1000 = INT8_MIN;
int16_t x1001 = 200;
volatile int32_t x1009 = INT32_MAX;
volatile int32_t x1010 = 674328652;
volatile uint8_t x1015 = 33U;
int8_t x1023 = INT8_MAX;
static uint32_t x1034 = 213181177U;
volatile uint8_t x1036 = 1U;
static int32_t t128 = 156787869;
volatile int16_t x1060 = -1;
volatile int32_t t130 = -1;
int64_t x1065 = INT64_MAX;
int16_t x1067 = INT16_MIN;
int8_t x1068 = INT8_MAX;
static uint32_t x1071 = 12U;
volatile int32_t t135 = INT32_MAX;
int16_t x1111 = INT16_MAX;
static int16_t x1113 = 41;
uint16_t x1115 = UINT16_MAX;
volatile int8_t x1116 = INT8_MIN;
uint32_t x1121 = 69336U;
volatile uint16_t x1122 = UINT16_MAX;
int32_t x1123 = INT32_MAX;
static volatile uint32_t t140 = 29524690U;
int8_t x1127 = 0;
static int32_t t141 = -156643523;
int32_t x1135 = INT32_MIN;
int32_t x1142 = 3558259;
int16_t x1148 = INT16_MIN;
volatile int32_t t147 = -397;
int64_t t148 = INT64_MAX;
static volatile int32_t x1217 = INT32_MAX;
uint64_t x1261 = 1567138877LLU;
int32_t x1263 = INT32_MAX;
int32_t t154 = INT32_MAX;
int16_t x1274 = -77;
int64_t x1277 = INT64_MAX;
static uint32_t x1279 = 14U;
static int64_t x1280 = -73161775LL;
static volatile int64_t t156 = INT64_MAX;
volatile uint16_t x1281 = 3U;
static uint64_t x1288 = UINT64_MAX;
static uint8_t x1310 = 4U;
static uint8_t x1312 = 0U;
volatile uint16_t x1324 = 4U;
volatile int32_t t161 = 3001;
volatile int32_t t162 = -63014;
int64_t x1335 = INT64_MAX;
uint32_t x1336 = 53293640U;
int8_t x1338 = 40;
int8_t x1339 = 18;
int8_t x1348 = INT8_MIN;
volatile uint8_t x1349 = UINT8_MAX;
uint16_t x1353 = 60U;
uint64_t x1358 = UINT64_MAX;
int64_t x1360 = -1LL;
static volatile int16_t x1381 = 5671;
static int32_t t170 = 1;
static int16_t x1390 = INT16_MAX;
int64_t x1425 = INT64_MAX;
volatile int32_t t179 = -1993;
static volatile int64_t x1472 = -1LL;
static int32_t t180 = 744;
uint64_t x1474 = 475641764531018LLU;
volatile uint32_t t182 = 2358158U;
static uint8_t x1487 = 40U;
int8_t x1491 = 1;
uint8_t x1497 = 14U;
int8_t x1503 = INT8_MAX;
volatile uint32_t x1511 = UINT32_MAX;
uint32_t x1516 = 23998164U;
volatile int64_t t189 = 504LL;
uint64_t x1525 = UINT64_MAX;
uint64_t x1526 = UINT64_MAX;
volatile uint64_t x1527 = 8830LLU;
volatile int32_t t193 = -61;
uint8_t x1558 = 5U;
int64_t x1560 = INT64_MIN;
int64_t x1564 = -1LL;
static volatile int32_t t196 = INT32_MAX;
uint32_t x1568 = 27U;
uint64_t x1577 = 5539LLU;
int32_t x1579 = INT32_MAX;
int32_t x1586 = 1432637;


void f0(void) {
    	uint16_t x1 = UINT16_MAX;
	int32_t x2 = -1;
	int32_t t0 = -182484;

    t0 = (x1>>((x2<=x3)<=x4));

    if (t0 != 65535) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x9 = UINT32_MAX;
	int8_t x11 = -3;
	static volatile uint32_t x12 = 4U;

    t1 = (x9>>((x10<=x11)<=x12));

    if (t1 != 2147483647U) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x13 = INT16_MAX;
	int16_t x14 = -88;
	uint8_t x15 = UINT8_MAX;
	volatile int32_t t2 = -42880491;

    t2 = (x13>>((x14<=x15)<=x16));

    if (t2 != 32767) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x17 = 42U;
	static int32_t x18 = 52;
	volatile uint16_t x19 = 154U;
	int32_t x20 = INT32_MAX;
	static int32_t t3 = 2;

    t3 = (x17>>((x18<=x19)<=x20));

    if (t3 != 21) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x28 = INT8_MIN;
	volatile int32_t t4 = 5699789;

    t4 = (x25>>((x26<=x27)<=x28));

    if (t4 != 1347) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x41 = 905789885U;
	int64_t x42 = -602398578683421LL;
	int16_t x43 = INT16_MIN;
	int32_t x44 = INT32_MIN;

    t5 = (x41>>((x42<=x43)<=x44));

    if (t5 != 905789885U) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x50 = 555U;
	static int8_t x52 = INT8_MAX;
	static int32_t t6 = -37;

    t6 = (x49>>((x50<=x51)<=x52));

    if (t6 != 6) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x57 = INT16_MAX;
	int8_t x58 = -1;
	volatile int16_t x59 = INT16_MIN;
	int32_t x60 = -1;
	volatile int32_t t7 = -1474;

    t7 = (x57>>((x58<=x59)<=x60));

    if (t7 != 32767) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x62 = 1;
	static volatile int32_t x64 = INT32_MAX;

    t8 = (x61>>((x62<=x63)<=x64));

    if (t8 != 994) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x65 = 7315395U;
	int32_t x66 = INT32_MIN;
	int64_t x67 = -1LL;
	static int8_t x68 = -1;
	uint32_t t9 = 55461U;

    t9 = (x65>>((x66<=x67)<=x68));

    if (t9 != 7315395U) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x73 = INT8_MAX;
	static volatile int16_t x75 = -13;
	volatile int8_t x76 = INT8_MAX;

    t10 = (x73>>((x74<=x75)<=x76));

    if (t10 != 63) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x81 = 790;
	uint16_t x82 = 3899U;
	static int32_t x83 = -1;

    t11 = (x81>>((x82<=x83)<=x84));

    if (t11 != 790) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x89 = UINT16_MAX;
	int64_t x91 = 46620474090LL;
	int64_t x92 = INT64_MIN;
	int32_t t12 = 146464;

    t12 = (x89>>((x90<=x91)<=x92));

    if (t12 != 65535) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x97 = INT8_MAX;
	int32_t x98 = -739;
	int8_t x100 = INT8_MIN;
	static volatile int32_t t13 = 10776;

    t13 = (x97>>((x98<=x99)<=x100));

    if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int32_t x103 = INT32_MIN;
	static volatile int16_t x104 = 9454;
	int32_t t14 = 68305;

    t14 = (x101>>((x102<=x103)<=x104));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x109 = UINT32_MAX;
	static int8_t x110 = INT8_MIN;
	int32_t x111 = INT32_MIN;
	int64_t x112 = 4323868LL;
	uint32_t t15 = 6870748U;

    t15 = (x109>>((x110<=x111)<=x112));

    if (t15 != 2147483647U) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint32_t x113 = 0U;
	int32_t x114 = -1;
	int16_t x115 = INT16_MIN;
	static uint16_t x116 = 6U;
	uint32_t t16 = 32747655U;

    t16 = (x113>>((x114<=x115)<=x116));

    if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x129 = INT8_MAX;
	int64_t x130 = 105539LL;
	int64_t x131 = -223673429066475956LL;
	volatile int8_t x132 = -7;
	static volatile int32_t t17 = -234200;

    t17 = (x129>>((x130<=x131)<=x132));

    if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x133 = UINT64_MAX;
	volatile int8_t x134 = INT8_MIN;
	static int32_t x135 = -1;
	uint16_t x136 = UINT16_MAX;
	static uint64_t t18 = 239631119LLU;

    t18 = (x133>>((x134<=x135)<=x136));

    if (t18 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x149 = 434LL;
	static volatile int16_t x150 = INT16_MAX;

    t19 = (x149>>((x150<=x151)<=x152));

    if (t19 != 217LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x157 = INT32_MAX;
	static volatile int32_t x159 = -10;
	static int32_t x160 = -5;
	volatile int32_t t20 = INT32_MAX;

    t20 = (x157>>((x158<=x159)<=x160));

    if (t20 != INT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x161 = 2;
	uint64_t x162 = 5743315965857894733LLU;
	uint16_t x163 = UINT16_MAX;
	uint32_t x164 = 876U;
	volatile int32_t t21 = -1;

    t21 = (x161>>((x162<=x163)<=x164));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int32_t x165 = INT32_MAX;
	uint64_t x168 = UINT64_MAX;
	int32_t t22 = -160582;

    t22 = (x165>>((x166<=x167)<=x168));

    if (t22 != 1073741823) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x169 = 1;
	int64_t x170 = INT64_MIN;
	static int16_t x171 = -1;
	static int32_t x172 = INT32_MAX;
	static volatile int32_t t23 = 1;

    t23 = (x169>>((x170<=x171)<=x172));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x177 = 7U;
	int16_t x178 = 18;
	uint32_t x179 = 1061U;
	int16_t x180 = INT16_MAX;
	uint32_t t24 = 2U;

    t24 = (x177>>((x178<=x179)<=x180));

    if (t24 != 3U) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x189 = INT32_MAX;
	int64_t x190 = -38282455381318369LL;
	static int16_t x191 = -145;
	int32_t x192 = 87106427;
	volatile int32_t t25 = -467637600;

    t25 = (x189>>((x190<=x191)<=x192));

    if (t25 != 1073741823) { NG(); } else { ; }
	
}

void f26(void) {
    	static int64_t x197 = INT64_MAX;
	int64_t x198 = INT64_MIN;
	static uint64_t x200 = UINT64_MAX;
	int64_t t26 = 347111671688096006LL;

    t26 = (x197>>((x198<=x199)<=x200));

    if (t26 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint16_t x209 = UINT16_MAX;
	volatile int64_t x210 = INT64_MAX;
	uint8_t x211 = 30U;
	int16_t x212 = INT16_MIN;

    t27 = (x209>>((x210<=x211)<=x212));

    if (t27 != 65535) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x213 = 2005209LLU;
	int64_t x215 = INT64_MIN;
	static uint64_t t28 = 3992LLU;

    t28 = (x213>>((x214<=x215)<=x216));

    if (t28 != 1002604LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x217 = 160U;
	uint64_t x218 = 27133308909330LLU;
	volatile uint16_t x219 = UINT16_MAX;
	uint8_t x220 = 78U;

    t29 = (x217>>((x218<=x219)<=x220));

    if (t29 != 80U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x225 = 898022881153LLU;
	static volatile int8_t x226 = 1;
	uint64_t x227 = UINT64_MAX;
	int8_t x228 = -1;

    t30 = (x225>>((x226<=x227)<=x228));

    if (t30 != 898022881153LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x232 = INT32_MAX;
	volatile int32_t t31 = 19016045;

    t31 = (x229>>((x230<=x231)<=x232));

    if (t31 != 1073741823) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x245 = 26350280599593LLU;
	int32_t x246 = INT32_MAX;
	uint32_t x247 = 1U;
	volatile int32_t x248 = -1;
	uint64_t t32 = 14719LLU;

    t32 = (x245>>((x246<=x247)<=x248));

    if (t32 != 26350280599593LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint8_t x249 = UINT8_MAX;
	static uint8_t x250 = 0U;
	uint32_t x251 = 89324U;
	volatile int32_t t33 = -4560;

    t33 = (x249>>((x250<=x251)<=x252));

    if (t33 != 255) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x254 = INT64_MAX;
	int16_t x255 = 1;
	int16_t x256 = -28;
	int32_t t34 = INT32_MAX;

    t34 = (x253>>((x254<=x255)<=x256));

    if (t34 != INT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x257 = 12273U;
	uint8_t x259 = 6U;
	int8_t x260 = -1;
	int32_t t35 = 471;

    t35 = (x257>>((x258<=x259)<=x260));

    if (t35 != 12273) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x261 = 9;
	uint8_t x264 = 49U;
	volatile int32_t t36 = 7351;

    t36 = (x261>>((x262<=x263)<=x264));

    if (t36 != 4) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint32_t x277 = UINT32_MAX;
	uint32_t x278 = 5U;
	int16_t x279 = -1;
	volatile uint32_t t37 = UINT32_MAX;

    t37 = (x277>>((x278<=x279)<=x280));

    if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x282 = INT8_MIN;
	int32_t x283 = INT32_MIN;
	static int32_t t38 = -1145488;

    t38 = (x281>>((x282<=x283)<=x284));

    if (t38 != 32767) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x285 = UINT64_MAX;
	int16_t x286 = INT16_MIN;
	int32_t x287 = -1000;
	uint8_t x288 = 2U;
	static volatile uint64_t t39 = 48785959275149221LLU;

    t39 = (x285>>((x286<=x287)<=x288));

    if (t39 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint8_t x301 = UINT8_MAX;
	int16_t x302 = INT16_MAX;
	volatile uint32_t x303 = UINT32_MAX;
	volatile int32_t t40 = 56054722;

    t40 = (x301>>((x302<=x303)<=x304));

    if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x309 = 71723U;
	int64_t x310 = INT64_MIN;
	int8_t x312 = 53;
	volatile uint32_t t41 = 2904U;

    t41 = (x309>>((x310<=x311)<=x312));

    if (t41 != 35861U) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x313 = 1U;
	int16_t x314 = -1;
	static int32_t x315 = INT32_MIN;
	static uint32_t x316 = 3U;
	int32_t t42 = 48035;

    t42 = (x313>>((x314<=x315)<=x316));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint16_t x317 = UINT16_MAX;
	static int32_t x318 = INT32_MAX;
	volatile int8_t x319 = INT8_MAX;
	int16_t x320 = INT16_MIN;
	int32_t t43 = -570;

    t43 = (x317>>((x318<=x319)<=x320));

    if (t43 != 65535) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x329 = INT64_MAX;
	int8_t x330 = INT8_MAX;
	int64_t x331 = INT64_MIN;
	static volatile int8_t x332 = 24;

    t44 = (x329>>((x330<=x331)<=x332));

    if (t44 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x333 = 1816U;
	int64_t x334 = INT64_MIN;
	int8_t x335 = 1;
	static volatile uint32_t t45 = 0U;

    t45 = (x333>>((x334<=x335)<=x336));

    if (t45 != 908U) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint16_t x345 = UINT16_MAX;
	static uint32_t x347 = UINT32_MAX;
	static int32_t t46 = 48990926;

    t46 = (x345>>((x346<=x347)<=x348));

    if (t46 != 32767) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x349 = UINT64_MAX;
	int64_t x352 = -1LL;
	volatile uint64_t t47 = UINT64_MAX;

    t47 = (x349>>((x350<=x351)<=x352));

    if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x353 = 708LLU;
	uint32_t x354 = 6732255U;
	uint32_t x355 = 44488U;
	static volatile uint8_t x356 = 1U;
	uint64_t t48 = 27563937711169944LLU;

    t48 = (x353>>((x354<=x355)<=x356));

    if (t48 != 354LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x362 = -1;
	static uint64_t x363 = 22760064571888LLU;
	int8_t x364 = INT8_MAX;
	volatile uint64_t t49 = 4642608628679861LLU;

    t49 = (x361>>((x362<=x363)<=x364));

    if (t49 != 438763109641LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x369 = UINT64_MAX;
	int64_t x370 = INT64_MIN;
	int8_t x372 = -1;
	static volatile uint64_t t50 = UINT64_MAX;

    t50 = (x369>>((x370<=x371)<=x372));

    if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x374 = INT8_MIN;
	static volatile int32_t x375 = -1;
	int32_t t51 = -61519;

    t51 = (x373>>((x374<=x375)<=x376));

    if (t51 != 83) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x377 = UINT32_MAX;
	volatile int8_t x378 = INT8_MAX;
	uint32_t x379 = 99U;
	static volatile int8_t x380 = -1;
	uint32_t t52 = UINT32_MAX;

    t52 = (x377>>((x378<=x379)<=x380));

    if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x389 = 1;
	int32_t x390 = -1638823;
	static volatile int32_t x391 = 57927050;
	volatile int32_t x392 = INT32_MIN;
	int32_t t53 = 1704937;

    t53 = (x389>>((x390<=x391)<=x392));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x405 = UINT32_MAX;
	int32_t x406 = INT32_MAX;
	volatile int32_t x407 = -1;
	uint16_t x408 = UINT16_MAX;
	uint32_t t54 = 3U;

    t54 = (x405>>((x406<=x407)<=x408));

    if (t54 != 2147483647U) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint8_t x417 = 24U;
	int32_t x418 = INT32_MAX;
	int8_t x419 = -1;
	int32_t t55 = -1;

    t55 = (x417>>((x418<=x419)<=x420));

    if (t55 != 12) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile uint64_t x429 = 8078764001063LLU;
	static volatile uint64_t t56 = 3108471955015LLU;

    t56 = (x429>>((x430<=x431)<=x432));

    if (t56 != 8078764001063LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x433 = INT64_MAX;
	static int32_t x434 = INT32_MIN;
	int16_t x435 = 314;
	static int64_t t57 = INT64_MAX;

    t57 = (x433>>((x434<=x435)<=x436));

    if (t57 != INT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x449 = 0U;
	uint8_t x450 = 12U;

    t58 = (x449>>((x450<=x451)<=x452));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x463 = 3U;
	volatile uint32_t x464 = UINT32_MAX;
	volatile int32_t t59 = 6;

    t59 = (x461>>((x462<=x463)<=x464));

    if (t59 != 5) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint64_t x465 = 3495LLU;
	uint16_t x466 = 1973U;
	int16_t x467 = 472;
	int8_t x468 = 52;
	volatile uint64_t t60 = 998457LLU;

    t60 = (x465>>((x466<=x467)<=x468));

    if (t60 != 1747LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x469 = 71815818U;
	static uint16_t x470 = UINT16_MAX;
	int16_t x471 = 884;
	volatile uint16_t x472 = 34U;

    t61 = (x469>>((x470<=x471)<=x472));

    if (t61 != 35907909U) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x505 = 4U;
	int32_t x506 = 8381;
	volatile uint64_t x507 = UINT64_MAX;
	volatile int32_t x508 = INT32_MAX;
	volatile int32_t t62 = 1313580;

    t62 = (x505>>((x506<=x507)<=x508));

    if (t62 != 2) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x510 = INT8_MIN;
	static int16_t x511 = -623;
	uint64_t x512 = 125LLU;
	volatile int32_t t63 = 16996;

    t63 = (x509>>((x510<=x511)<=x512));

    if (t63 != 16383) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x517 = INT8_MAX;
	uint8_t x518 = 6U;
	uint64_t x519 = UINT64_MAX;
	volatile int32_t t64 = -15282;

    t64 = (x517>>((x518<=x519)<=x520));

    if (t64 != 63) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x541 = 5287U;
	uint32_t x542 = 256U;
	int8_t x543 = INT8_MAX;
	int32_t x544 = 10592;
	volatile int32_t t65 = 922277;

    t65 = (x541>>((x542<=x543)<=x544));

    if (t65 != 2643) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x545 = INT8_MAX;
	int32_t x547 = -1;
	int64_t x548 = INT64_MIN;
	volatile int32_t t66 = 79;

    t66 = (x545>>((x546<=x547)<=x548));

    if (t66 != 127) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int64_t x565 = INT64_MAX;
	int8_t x567 = -1;
	int32_t x568 = INT32_MIN;
	static volatile int64_t t67 = INT64_MAX;

    t67 = (x565>>((x566<=x567)<=x568));

    if (t67 != INT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x577 = 42LLU;
	uint8_t x578 = UINT8_MAX;
	static volatile int8_t x579 = 1;

    t68 = (x577>>((x578<=x579)<=x580));

    if (t68 != 42LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x581 = 31616760627133418LLU;
	uint32_t x582 = 1230829U;
	static volatile uint8_t x584 = 0U;
	static uint64_t t69 = 1007LLU;

    t69 = (x581>>((x582<=x583)<=x584));

    if (t69 != 15808380313566709LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x585 = 1U;
	uint16_t x586 = 171U;
	volatile uint64_t x588 = UINT64_MAX;
	volatile uint32_t t70 = 2U;

    t70 = (x585>>((x586<=x587)<=x588));

    if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint32_t x589 = 304715341U;
	int32_t x590 = INT32_MAX;
	int64_t x591 = -514116579LL;
	int16_t x592 = -1;

    t71 = (x589>>((x590<=x591)<=x592));

    if (t71 != 304715341U) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint8_t x593 = UINT8_MAX;
	int16_t x594 = INT16_MAX;
	volatile int32_t x595 = INT32_MIN;
	volatile uint32_t x596 = 3179116U;
	volatile int32_t t72 = -122899;

    t72 = (x593>>((x594<=x595)<=x596));

    if (t72 != 127) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint8_t x601 = 41U;
	static volatile int64_t x602 = -87504172098895LL;
	volatile int32_t t73 = 13927;

    t73 = (x601>>((x602<=x603)<=x604));

    if (t73 != 20) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x614 = -1LL;

    t74 = (x613>>((x614<=x615)<=x616));

    if (t74 != 32767) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x617 = UINT32_MAX;
	int64_t x618 = 12750784LL;
	static volatile int32_t x619 = INT32_MIN;
	int8_t x620 = -4;
	uint32_t t75 = UINT32_MAX;

    t75 = (x617>>((x618<=x619)<=x620));

    if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x629 = 0;
	uint32_t x630 = UINT32_MAX;
	volatile int16_t x631 = INT16_MIN;
	int64_t x632 = INT64_MAX;
	volatile int32_t t76 = -526249;

    t76 = (x629>>((x630<=x631)<=x632));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x669 = UINT64_MAX;
	int64_t x670 = INT64_MAX;
	int8_t x671 = -1;
	volatile int8_t x672 = -1;

    t77 = (x669>>((x670<=x671)<=x672));

    if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x685 = INT8_MAX;
	uint16_t x686 = 1U;
	volatile int16_t x687 = -1;
	static int8_t x688 = INT8_MAX;
	int32_t t78 = -63;

    t78 = (x685>>((x686<=x687)<=x688));

    if (t78 != 63) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint64_t x697 = 1LLU;
	uint32_t x698 = UINT32_MAX;
	uint16_t x699 = 15U;
	int64_t x700 = -5923296247509810LL;
	static volatile uint64_t t79 = 2LLU;

    t79 = (x697>>((x698<=x699)<=x700));

    if (t79 != 1LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x705 = INT8_MAX;
	uint32_t x706 = 3243532U;
	volatile int8_t x708 = INT8_MAX;
	volatile int32_t t80 = 4856793;

    t80 = (x705>>((x706<=x707)<=x708));

    if (t80 != 63) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x725 = INT64_MAX;
	volatile int16_t x727 = INT16_MIN;
	uint8_t x728 = 1U;

    t81 = (x725>>((x726<=x727)<=x728));

    if (t81 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint32_t x733 = UINT32_MAX;
	static int64_t x735 = -1LL;

    t82 = (x733>>((x734<=x735)<=x736));

    if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint32_t x737 = 41120U;
	volatile int8_t x738 = -1;
	int8_t x739 = 0;
	volatile int8_t x740 = -13;

    t83 = (x737>>((x738<=x739)<=x740));

    if (t83 != 41120U) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x749 = 17333U;
	static int16_t x750 = INT16_MIN;
	volatile int8_t x751 = 0;
	static volatile int32_t t84 = -24020288;

    t84 = (x749>>((x750<=x751)<=x752));

    if (t84 != 17333) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x753 = 1015134965256725LL;
	static volatile int64_t x754 = INT64_MIN;
	int16_t x755 = 10;
	uint64_t x756 = UINT64_MAX;

    t85 = (x753>>((x754<=x755)<=x756));

    if (t85 != 507567482628362LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile int8_t x761 = 4;
	int64_t x762 = -1LL;
	int8_t x763 = 23;
	int32_t x764 = 1;

    t86 = (x761>>((x762<=x763)<=x764));

    if (t86 != 2) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint64_t x765 = 6696971LLU;
	uint64_t x766 = 14790758791830247LLU;
	uint8_t x767 = UINT8_MAX;
	int8_t x768 = 14;
	volatile uint64_t t87 = 882263LLU;

    t87 = (x765>>((x766<=x767)<=x768));

    if (t87 != 3348485LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x770 = INT8_MAX;
	int64_t x772 = INT64_MAX;
	int32_t t88 = -958946297;

    t88 = (x769>>((x770<=x771)<=x772));

    if (t88 != 63) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x773 = INT64_MAX;
	int64_t x774 = -70306810LL;
	uint32_t x776 = UINT32_MAX;
	volatile int64_t t89 = -2584698LL;

    t89 = (x773>>((x774<=x775)<=x776));

    if (t89 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x777 = 1832;
	int16_t x778 = 509;
	uint64_t x780 = UINT64_MAX;
	int32_t t90 = -48672;

    t90 = (x777>>((x778<=x779)<=x780));

    if (t90 != 916) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x789 = INT64_MAX;
	int16_t x790 = -1;
	int8_t x791 = INT8_MIN;
	uint32_t x792 = 3622U;
	volatile int64_t t91 = 29184LL;

    t91 = (x789>>((x790<=x791)<=x792));

    if (t91 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x793 = INT64_MAX;
	static int32_t x794 = INT32_MIN;
	int16_t x795 = -2;
	static int64_t t92 = INT64_MAX;

    t92 = (x793>>((x794<=x795)<=x796));

    if (t92 != INT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x805 = UINT8_MAX;
	int8_t x807 = INT8_MAX;
	int16_t x808 = INT16_MIN;
	volatile int32_t t93 = 568618;

    t93 = (x805>>((x806<=x807)<=x808));

    if (t93 != 255) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint32_t x813 = 326383U;
	static uint32_t x814 = UINT32_MAX;
	volatile int8_t x816 = INT8_MAX;
	volatile uint32_t t94 = 18U;

    t94 = (x813>>((x814<=x815)<=x816));

    if (t94 != 163191U) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x817 = UINT64_MAX;
	int16_t x818 = -87;
	volatile int16_t x820 = INT16_MAX;
	volatile uint64_t t95 = 673866562899LLU;

    t95 = (x817>>((x818<=x819)<=x820));

    if (t95 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint64_t x821 = UINT64_MAX;
	static int32_t x822 = INT32_MAX;
	static int16_t x824 = INT16_MIN;
	volatile uint64_t t96 = UINT64_MAX;

    t96 = (x821>>((x822<=x823)<=x824));

    if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x833 = 223U;
	static uint8_t x834 = UINT8_MAX;
	volatile int64_t x835 = -17149639618118LL;
	volatile uint32_t t97 = 3622520U;

    t97 = (x833>>((x834<=x835)<=x836));

    if (t97 != 223U) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x841 = 23290961LLU;
	volatile int8_t x842 = -1;
	volatile uint16_t x844 = UINT16_MAX;
	uint64_t t98 = 4994354533LLU;

    t98 = (x841>>((x842<=x843)<=x844));

    if (t98 != 11645480LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x848 = -1;
	static volatile int32_t t99 = 1;

    t99 = (x845>>((x846<=x847)<=x848));

    if (t99 != 65535) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint32_t x853 = UINT32_MAX;
	uint8_t x854 = 8U;
	static int64_t x855 = INT64_MAX;
	int32_t x856 = INT32_MIN;
	uint32_t t100 = UINT32_MAX;

    t100 = (x853>>((x854<=x855)<=x856));

    if (t100 != UINT32_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x857 = 0U;
	int32_t x858 = 37021;
	int64_t x860 = -1LL;
	static int32_t t101 = 25;

    t101 = (x857>>((x858<=x859)<=x860));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x861 = 2U;
	uint32_t x862 = 764276U;
	uint8_t x863 = UINT8_MAX;
	int32_t x864 = -417496;
	volatile int32_t t102 = -180055948;

    t102 = (x861>>((x862<=x863)<=x864));

    if (t102 != 2) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x866 = -1;
	int8_t x867 = -1;
	uint64_t t103 = 4863035886791216561LLU;

    t103 = (x865>>((x866<=x867)<=x868));

    if (t103 != 12139476596LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x877 = INT64_MAX;
	volatile uint8_t x879 = UINT8_MAX;
	int16_t x880 = INT16_MIN;
	volatile int64_t t104 = INT64_MAX;

    t104 = (x877>>((x878<=x879)<=x880));

    if (t104 != INT64_MAX) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x881 = 0U;
	volatile int64_t x883 = INT64_MIN;
	int32_t t105 = -28;

    t105 = (x881>>((x882<=x883)<=x884));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x885 = INT32_MAX;
	int8_t x886 = INT8_MAX;
	uint32_t x887 = 2U;
	uint8_t x888 = 4U;
	volatile int32_t t106 = -17;

    t106 = (x885>>((x886<=x887)<=x888));

    if (t106 != 1073741823) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x889 = 0U;
	uint32_t x891 = 5492046U;
	int32_t x892 = -1;
	int32_t t107 = 3;

    t107 = (x889>>((x890<=x891)<=x892));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x893 = UINT64_MAX;
	volatile int64_t x895 = -1LL;
	uint64_t x896 = UINT64_MAX;

    t108 = (x893>>((x894<=x895)<=x896));

    if (t108 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x898 = INT32_MAX;
	volatile uint64_t x900 = 2598844LLU;

    t109 = (x897>>((x898<=x899)<=x900));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x901 = UINT8_MAX;
	static int32_t x902 = -1;
	static int64_t x903 = 65562976875031008LL;
	volatile uint32_t x904 = 47U;
	volatile int32_t t110 = 9848;

    t110 = (x901>>((x902<=x903)<=x904));

    if (t110 != 127) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint64_t x905 = 3LLU;
	static volatile int32_t x907 = -1;
	uint8_t x908 = 95U;
	uint64_t t111 = 149139LLU;

    t111 = (x905>>((x906<=x907)<=x908));

    if (t111 != 1LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x909 = INT8_MAX;
	int32_t x910 = INT32_MAX;
	int32_t t112 = -1;

    t112 = (x909>>((x910<=x911)<=x912));

    if (t112 != 63) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x922 = INT64_MIN;
	uint16_t x923 = UINT16_MAX;
	volatile int8_t x924 = INT8_MIN;
	static volatile int32_t t113 = 1;

    t113 = (x921>>((x922<=x923)<=x924));

    if (t113 != 65535) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x933 = INT32_MAX;
	int16_t x934 = 698;
	volatile int64_t x935 = INT64_MAX;
	uint64_t x936 = UINT64_MAX;

    t114 = (x933>>((x934<=x935)<=x936));

    if (t114 != 1073741823) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x943 = 811911U;
	int16_t x944 = -1;
	static volatile int32_t t115 = -46;

    t115 = (x941>>((x942<=x943)<=x944));

    if (t115 != 1781) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x945 = 1;
	int32_t x946 = INT32_MAX;
	int32_t x947 = INT32_MAX;
	static uint32_t x948 = 1410149U;
	int32_t t116 = 6220;

    t116 = (x945>>((x946<=x947)<=x948));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x953 = 27;
	static int16_t x954 = -1;
	static uint64_t x955 = UINT64_MAX;
	static int32_t x956 = INT32_MIN;
	volatile int32_t t117 = -5;

    t117 = (x953>>((x954<=x955)<=x956));

    if (t117 != 27) { NG(); } else { ; }
	
}

void f118(void) {
    	static int32_t x968 = -1;
	static int32_t t118 = -10948280;

    t118 = (x965>>((x966<=x967)<=x968));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint32_t x973 = 6739290U;
	int16_t x974 = -1;
	volatile int16_t x975 = INT16_MIN;
	static int8_t x976 = INT8_MIN;
	static uint32_t t119 = 1388778U;

    t119 = (x973>>((x974<=x975)<=x976));

    if (t119 != 6739290U) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x990 = UINT16_MAX;
	int8_t x991 = INT8_MAX;
	int64_t x992 = INT64_MIN;

    t120 = (x989>>((x990<=x991)<=x992));

    if (t120 != UINT32_MAX) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x993 = 9744798LLU;
	int32_t x994 = -1;
	int64_t x995 = 178872055816LL;
	int64_t x996 = INT64_MIN;
	static volatile uint64_t t121 = 875294LLU;

    t121 = (x993>>((x994<=x995)<=x996));

    if (t121 != 9744798LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x998 = 87U;
	int64_t x999 = INT64_MIN;
	volatile uint32_t t122 = 4392U;

    t122 = (x997>>((x998<=x999)<=x1000));

    if (t122 != 0U) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x1002 = -1LL;
	uint8_t x1003 = UINT8_MAX;
	int16_t x1004 = INT16_MIN;
	static int32_t t123 = 99;

    t123 = (x1001>>((x1002<=x1003)<=x1004));

    if (t123 != 200) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int32_t x1011 = INT32_MIN;
	static int64_t x1012 = 96LL;
	volatile int32_t t124 = -33;

    t124 = (x1009>>((x1010<=x1011)<=x1012));

    if (t124 != 1073741823) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x1013 = INT16_MAX;
	int32_t x1014 = INT32_MIN;
	volatile uint64_t x1016 = 57LLU;
	int32_t t125 = 22029;

    t125 = (x1013>>((x1014<=x1015)<=x1016));

    if (t125 != 16383) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x1021 = UINT8_MAX;
	volatile uint16_t x1022 = 29U;
	static uint32_t x1024 = 653987893U;
	int32_t t126 = 73574;

    t126 = (x1021>>((x1022<=x1023)<=x1024));

    if (t126 != 127) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x1033 = INT32_MAX;
	static int32_t x1035 = -999545;
	static volatile int32_t t127 = 1129613;

    t127 = (x1033>>((x1034<=x1035)<=x1036));

    if (t127 != 1073741823) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x1041 = INT16_MAX;
	uint16_t x1042 = UINT16_MAX;
	uint64_t x1043 = 232463483598274LLU;
	int32_t x1044 = INT32_MIN;

    t128 = (x1041>>((x1042<=x1043)<=x1044));

    if (t128 != 32767) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile uint64_t x1053 = 3935794117325046LLU;
	int32_t x1054 = INT32_MIN;
	uint16_t x1055 = 1U;
	int64_t x1056 = 31200542641533LL;
	volatile uint64_t t129 = 6202569044LLU;

    t129 = (x1053>>((x1054<=x1055)<=x1056));

    if (t129 != 1967897058662523LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x1057 = 12661;
	static uint8_t x1058 = UINT8_MAX;
	static int64_t x1059 = -1545724082442506LL;

    t130 = (x1057>>((x1058<=x1059)<=x1060));

    if (t130 != 12661) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x1061 = 28849LL;
	uint8_t x1062 = 2U;
	int32_t x1063 = -1;
	int16_t x1064 = INT16_MIN;
	volatile int64_t t131 = -838549809324644549LL;

    t131 = (x1061>>((x1062<=x1063)<=x1064));

    if (t131 != 28849LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int32_t x1066 = 16;
	int64_t t132 = 18841464LL;

    t132 = (x1065>>((x1066<=x1067)<=x1068));

    if (t132 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x1069 = INT16_MAX;
	int64_t x1070 = INT64_MIN;
	int8_t x1072 = -47;
	static volatile int32_t t133 = 30;

    t133 = (x1069>>((x1070<=x1071)<=x1072));

    if (t133 != 32767) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x1073 = INT8_MAX;
	int16_t x1074 = 0;
	static int8_t x1075 = INT8_MAX;
	int32_t x1076 = 681020739;
	volatile int32_t t134 = -56;

    t134 = (x1073>>((x1074<=x1075)<=x1076));

    if (t134 != 63) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x1081 = INT32_MAX;
	uint8_t x1082 = 79U;
	static int8_t x1083 = INT8_MIN;
	static int16_t x1084 = -1405;

    t135 = (x1081>>((x1082<=x1083)<=x1084));

    if (t135 != INT32_MAX) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x1093 = 49850516U;
	volatile uint32_t x1094 = UINT32_MAX;
	volatile int64_t x1095 = -503614363345LL;
	int64_t x1096 = INT64_MIN;
	volatile uint32_t t136 = 1351499762U;

    t136 = (x1093>>((x1094<=x1095)<=x1096));

    if (t136 != 49850516U) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x1101 = 1U;
	int64_t x1102 = 22632749LL;
	int16_t x1103 = INT16_MAX;
	int32_t x1104 = INT32_MIN;
	static volatile int32_t t137 = 131872;

    t137 = (x1101>>((x1102<=x1103)<=x1104));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint8_t x1109 = 11U;
	int32_t x1110 = -1;
	uint16_t x1112 = 497U;
	int32_t t138 = -208954382;

    t138 = (x1109>>((x1110<=x1111)<=x1112));

    if (t138 != 5) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x1114 = -203LL;
	int32_t t139 = -1220047;

    t139 = (x1113>>((x1114<=x1115)<=x1116));

    if (t139 != 41) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x1124 = 54LLU;

    t140 = (x1121>>((x1122<=x1123)<=x1124));

    if (t140 != 34668U) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x1125 = 2U;
	static volatile int64_t x1126 = -1LL;
	int16_t x1128 = -1;

    t141 = (x1125>>((x1126<=x1127)<=x1128));

    if (t141 != 2) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint16_t x1133 = 7U;
	volatile uint16_t x1134 = UINT16_MAX;
	volatile uint16_t x1136 = 3U;
	volatile int32_t t142 = 181431;

    t142 = (x1133>>((x1134<=x1135)<=x1136));

    if (t142 != 3) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x1137 = 4U;
	static uint64_t x1138 = UINT64_MAX;
	int16_t x1139 = INT16_MIN;
	int8_t x1140 = INT8_MIN;
	volatile int32_t t143 = 314268;

    t143 = (x1137>>((x1138<=x1139)<=x1140));

    if (t143 != 4) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x1141 = 379LLU;
	uint32_t x1143 = 28436U;
	volatile uint64_t x1144 = UINT64_MAX;
	uint64_t t144 = 583LLU;

    t144 = (x1141>>((x1142<=x1143)<=x1144));

    if (t144 != 189LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint16_t x1145 = 362U;
	int8_t x1146 = -1;
	uint16_t x1147 = 4U;
	volatile int32_t t145 = 13341;

    t145 = (x1145>>((x1146<=x1147)<=x1148));

    if (t145 != 362) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint32_t x1157 = 5U;
	int16_t x1158 = INT16_MIN;
	uint16_t x1159 = UINT16_MAX;
	int64_t x1160 = INT64_MIN;
	static uint32_t t146 = 14779U;

    t146 = (x1157>>((x1158<=x1159)<=x1160));

    if (t146 != 5U) { NG(); } else { ; }
	
}

void f147(void) {
    	static int8_t x1205 = 0;
	uint16_t x1206 = 35U;
	int16_t x1207 = -3;
	int64_t x1208 = INT64_MIN;

    t147 = (x1205>>((x1206<=x1207)<=x1208));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x1209 = INT64_MAX;
	int8_t x1210 = 0;
	uint64_t x1211 = 525511313LLU;
	int8_t x1212 = INT8_MIN;

    t148 = (x1209>>((x1210<=x1211)<=x1212));

    if (t148 != INT64_MAX) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int16_t x1218 = INT16_MIN;
	uint64_t x1219 = 6LLU;
	uint8_t x1220 = 12U;
	static int32_t t149 = 1;

    t149 = (x1217>>((x1218<=x1219)<=x1220));

    if (t149 != 1073741823) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x1245 = INT64_MAX;
	uint16_t x1246 = UINT16_MAX;
	volatile int16_t x1247 = -1;
	int32_t x1248 = INT32_MAX;
	volatile int64_t t150 = 145513622842LL;

    t150 = (x1245>>((x1246<=x1247)<=x1248));

    if (t150 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x1249 = 12U;
	int64_t x1250 = INT64_MIN;
	static uint32_t x1251 = 5U;
	int8_t x1252 = INT8_MAX;
	static int32_t t151 = 7136;

    t151 = (x1249>>((x1250<=x1251)<=x1252));

    if (t151 != 6) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int32_t x1257 = 3849343;
	uint64_t x1258 = UINT64_MAX;
	int32_t x1259 = INT32_MAX;
	volatile uint32_t x1260 = UINT32_MAX;
	int32_t t152 = 764;

    t152 = (x1257>>((x1258<=x1259)<=x1260));

    if (t152 != 1924671) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x1262 = INT32_MIN;
	static int8_t x1264 = INT8_MIN;
	volatile uint64_t t153 = 729LLU;

    t153 = (x1261>>((x1262<=x1263)<=x1264));

    if (t153 != 1567138877LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x1269 = INT32_MAX;
	volatile int8_t x1270 = -1;
	uint8_t x1271 = 8U;
	int8_t x1272 = -19;

    t154 = (x1269>>((x1270<=x1271)<=x1272));

    if (t154 != INT32_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x1273 = INT8_MAX;
	static volatile int64_t x1275 = -1LL;
	static uint16_t x1276 = 5U;
	volatile int32_t t155 = -15;

    t155 = (x1273>>((x1274<=x1275)<=x1276));

    if (t155 != 63) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x1278 = INT64_MAX;

    t156 = (x1277>>((x1278<=x1279)<=x1280));

    if (t156 != INT64_MAX) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x1282 = 68U;
	uint8_t x1283 = 54U;
	static volatile uint8_t x1284 = UINT8_MAX;
	static volatile int32_t t157 = 858;

    t157 = (x1281>>((x1282<=x1283)<=x1284));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint32_t x1285 = UINT32_MAX;
	int64_t x1286 = -34547LL;
	static int32_t x1287 = INT32_MIN;
	uint32_t t158 = 122528U;

    t158 = (x1285>>((x1286<=x1287)<=x1288));

    if (t158 != 2147483647U) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x1293 = 5825U;
	volatile uint32_t x1294 = 145814U;
	uint64_t x1295 = UINT64_MAX;
	uint16_t x1296 = 3729U;
	static int32_t t159 = -70203891;

    t159 = (x1293>>((x1294<=x1295)<=x1296));

    if (t159 != 2912) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x1309 = UINT32_MAX;
	uint64_t x1311 = UINT64_MAX;
	static uint32_t t160 = UINT32_MAX;

    t160 = (x1309>>((x1310<=x1311)<=x1312));

    if (t160 != UINT32_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	static int8_t x1321 = INT8_MAX;
	static uint16_t x1322 = 0U;
	int64_t x1323 = 2280590282LL;

    t161 = (x1321>>((x1322<=x1323)<=x1324));

    if (t161 != 63) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x1325 = UINT16_MAX;
	uint64_t x1326 = 8414686162LLU;
	static int8_t x1327 = -1;
	static int16_t x1328 = -27;

    t162 = (x1325>>((x1326<=x1327)<=x1328));

    if (t162 != 65535) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x1333 = 12298830;
	int64_t x1334 = 1883340676597793LL;
	volatile int32_t t163 = 31;

    t163 = (x1333>>((x1334<=x1335)<=x1336));

    if (t163 != 6149415) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x1337 = 4U;
	static int64_t x1340 = 214008371423706LL;
	volatile int32_t t164 = -3694430;

    t164 = (x1337>>((x1338<=x1339)<=x1340));

    if (t164 != 2) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x1345 = 7U;
	int64_t x1346 = -829455417LL;
	int8_t x1347 = -50;
	static int32_t t165 = 76;

    t165 = (x1345>>((x1346<=x1347)<=x1348));

    if (t165 != 7) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x1350 = INT16_MAX;
	uint64_t x1351 = UINT64_MAX;
	volatile int64_t x1352 = INT64_MIN;
	volatile int32_t t166 = 19243;

    t166 = (x1349>>((x1350<=x1351)<=x1352));

    if (t166 != 255) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x1354 = 0U;
	int16_t x1355 = INT16_MIN;
	uint32_t x1356 = UINT32_MAX;
	int32_t t167 = 14;

    t167 = (x1353>>((x1354<=x1355)<=x1356));

    if (t167 != 30) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x1357 = 1;
	int16_t x1359 = INT16_MIN;
	static volatile int32_t t168 = 217387581;

    t168 = (x1357>>((x1358<=x1359)<=x1360));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x1361 = INT32_MAX;
	volatile int32_t x1362 = 888567271;
	uint8_t x1363 = 11U;
	int16_t x1364 = -7;
	volatile int32_t t169 = INT32_MAX;

    t169 = (x1361>>((x1362<=x1363)<=x1364));

    if (t169 != INT32_MAX) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x1382 = -1008915LL;
	volatile uint32_t x1383 = UINT32_MAX;
	uint32_t x1384 = 19U;

    t170 = (x1381>>((x1382<=x1383)<=x1384));

    if (t170 != 2835) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x1389 = 267;
	uint64_t x1391 = 184861939616LLU;
	volatile int64_t x1392 = INT64_MIN;
	int32_t t171 = 1;

    t171 = (x1389>>((x1390<=x1391)<=x1392));

    if (t171 != 267) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x1405 = 2389938636697424613LL;
	uint16_t x1406 = 177U;
	uint64_t x1407 = 3681LLU;
	static int64_t x1408 = -1184532546LL;
	int64_t t172 = -277518939830584038LL;

    t172 = (x1405>>((x1406<=x1407)<=x1408));

    if (t172 != 2389938636697424613LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x1417 = 6U;
	uint32_t x1418 = UINT32_MAX;
	static uint64_t x1419 = 16095LLU;
	uint32_t x1420 = 924U;
	volatile int32_t t173 = 127;

    t173 = (x1417>>((x1418<=x1419)<=x1420));

    if (t173 != 3) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x1421 = INT16_MAX;
	int16_t x1422 = 2630;
	int32_t x1423 = INT32_MAX;
	int8_t x1424 = INT8_MIN;
	int32_t t174 = 4;

    t174 = (x1421>>((x1422<=x1423)<=x1424));

    if (t174 != 32767) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x1426 = 1576U;
	int64_t x1427 = 3227845260LL;
	volatile int8_t x1428 = INT8_MIN;
	int64_t t175 = INT64_MAX;

    t175 = (x1425>>((x1426<=x1427)<=x1428));

    if (t175 != INT64_MAX) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x1429 = 0U;
	int8_t x1430 = -1;
	uint8_t x1431 = 6U;
	static int64_t x1432 = INT64_MIN;
	volatile int32_t t176 = 119225;

    t176 = (x1429>>((x1430<=x1431)<=x1432));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x1437 = INT64_MAX;
	volatile uint16_t x1438 = UINT16_MAX;
	int32_t x1439 = 391659829;
	static int64_t x1440 = 193205394LL;
	volatile int64_t t177 = -463LL;

    t177 = (x1437>>((x1438<=x1439)<=x1440));

    if (t177 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x1461 = 65428710789LLU;
	static volatile uint64_t x1462 = 4489LLU;
	uint64_t x1463 = 3442416LLU;
	static int8_t x1464 = -6;
	volatile uint64_t t178 = 42671731764LLU;

    t178 = (x1461>>((x1462<=x1463)<=x1464));

    if (t178 != 65428710789LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x1465 = INT8_MAX;
	uint32_t x1466 = UINT32_MAX;
	static int16_t x1467 = -1;
	int8_t x1468 = INT8_MIN;

    t179 = (x1465>>((x1466<=x1467)<=x1468));

    if (t179 != 127) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint8_t x1469 = 1U;
	static int64_t x1470 = INT64_MIN;
	static int8_t x1471 = INT8_MAX;

    t180 = (x1469>>((x1470<=x1471)<=x1472));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x1473 = INT32_MAX;
	int32_t x1475 = -17874;
	int16_t x1476 = 15114;
	volatile int32_t t181 = -98375;

    t181 = (x1473>>((x1474<=x1475)<=x1476));

    if (t181 != 1073741823) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x1477 = UINT32_MAX;
	uint8_t x1478 = 1U;
	int8_t x1479 = -1;
	static volatile int64_t x1480 = 185530175205122613LL;

    t182 = (x1477>>((x1478<=x1479)<=x1480));

    if (t182 != 2147483647U) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint8_t x1485 = UINT8_MAX;
	volatile uint32_t x1486 = UINT32_MAX;
	volatile uint8_t x1488 = 3U;
	int32_t t183 = 6112;

    t183 = (x1485>>((x1486<=x1487)<=x1488));

    if (t183 != 127) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x1489 = INT8_MAX;
	int64_t x1490 = -1LL;
	int8_t x1492 = -1;
	volatile int32_t t184 = 3;

    t184 = (x1489>>((x1490<=x1491)<=x1492));

    if (t184 != 127) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x1493 = 67292290181314LL;
	int32_t x1494 = INT32_MAX;
	volatile uint8_t x1495 = 3U;
	int8_t x1496 = -30;
	int64_t t185 = -1LL;

    t185 = (x1493>>((x1494<=x1495)<=x1496));

    if (t185 != 67292290181314LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint8_t x1498 = 5U;
	volatile int64_t x1499 = INT64_MIN;
	int64_t x1500 = -335LL;
	static volatile int32_t t186 = 105;

    t186 = (x1497>>((x1498<=x1499)<=x1500));

    if (t186 != 14) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint16_t x1501 = 3U;
	static uint64_t x1502 = 772LLU;
	int64_t x1504 = INT64_MIN;
	volatile int32_t t187 = 3766;

    t187 = (x1501>>((x1502<=x1503)<=x1504));

    if (t187 != 3) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x1509 = 13176647LL;
	uint8_t x1510 = UINT8_MAX;
	volatile int16_t x1512 = INT16_MIN;
	static volatile int64_t t188 = 607923547195229LL;

    t188 = (x1509>>((x1510<=x1511)<=x1512));

    if (t188 != 13176647LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x1513 = 16479435LL;
	static volatile uint8_t x1514 = 12U;
	volatile int16_t x1515 = 1480;

    t189 = (x1513>>((x1514<=x1515)<=x1516));

    if (t189 != 8239717LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x1521 = INT32_MAX;
	static uint32_t x1522 = 1354U;
	static int16_t x1523 = -1664;
	int32_t x1524 = 26834;
	volatile int32_t t190 = -7287601;

    t190 = (x1521>>((x1522<=x1523)<=x1524));

    if (t190 != 1073741823) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x1528 = 1097579298689LL;
	uint64_t t191 = 7LLU;

    t191 = (x1525>>((x1526<=x1527)<=x1528));

    if (t191 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint64_t x1537 = 7843045865917271646LLU;
	volatile uint32_t x1538 = 3759U;
	static int16_t x1539 = INT16_MIN;
	int16_t x1540 = -25;
	volatile uint64_t t192 = 768030920LLU;

    t192 = (x1537>>((x1538<=x1539)<=x1540));

    if (t192 != 7843045865917271646LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int8_t x1549 = INT8_MAX;
	volatile int32_t x1550 = INT32_MIN;
	int32_t x1551 = -1;
	int32_t x1552 = 2;

    t193 = (x1549>>((x1550<=x1551)<=x1552));

    if (t193 != 63) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x1553 = 99;
	volatile uint32_t x1554 = UINT32_MAX;
	int8_t x1555 = -9;
	int64_t x1556 = -76LL;
	int32_t t194 = -277387;

    t194 = (x1553>>((x1554<=x1555)<=x1556));

    if (t194 != 99) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint16_t x1557 = 1U;
	int16_t x1559 = INT16_MIN;
	static int32_t t195 = 650;

    t195 = (x1557>>((x1558<=x1559)<=x1560));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x1561 = INT32_MAX;
	int64_t x1562 = 3553179LL;
	static int32_t x1563 = 5566;

    t196 = (x1561>>((x1562<=x1563)<=x1564));

    if (t196 != INT32_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x1565 = UINT8_MAX;
	int16_t x1566 = INT16_MIN;
	static volatile int16_t x1567 = INT16_MAX;
	int32_t t197 = -84250079;

    t197 = (x1565>>((x1566<=x1567)<=x1568));

    if (t197 != 127) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x1578 = -3764;
	static volatile int32_t x1580 = INT32_MIN;
	uint64_t t198 = 12173LLU;

    t198 = (x1577>>((x1578<=x1579)<=x1580));

    if (t198 != 5539LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x1585 = 6027145148206LLU;
	uint64_t x1587 = 3281302399754859LLU;
	int8_t x1588 = 30;
	uint64_t t199 = 15091LLU;

    t199 = (x1585>>((x1586<=x1587)<=x1588));

    if (t199 != 3013572574103LLU) { NG(); } else { ; }
	
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

