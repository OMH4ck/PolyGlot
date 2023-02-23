
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

static int8_t x80 = INT8_MIN;
static int16_t x91 = 5;
int64_t x209 = 10381221549722LL;
uint64_t x509 = 233771LLU;
uint64_t t8 = 151783124986LLU;
int8_t x557 = -6;
volatile int32_t t11 = -1564;
volatile uint64_t x749 = UINT64_MAX;
int8_t x752 = INT8_MIN;
uint8_t x771 = 3U;
uint8_t x869 = 3U;
int32_t x1136 = INT32_MIN;
int64_t x1148 = -2LL;
static int8_t x1150 = INT8_MAX;
uint8_t x1152 = UINT8_MAX;
uint32_t x1158 = UINT32_MAX;
uint32_t t18 = 1177U;
uint64_t x1266 = 409537357322LLU;
static uint16_t x1267 = 0U;
int8_t x1279 = 19;
volatile uint16_t x1373 = 391U;
uint8_t x1375 = 11U;
int16_t x1422 = INT16_MAX;
int64_t x1424 = INT64_MIN;
int64_t t23 = -51579066LL;
uint64_t x1425 = UINT64_MAX;
uint64_t t24 = 1073844877373495851LLU;
uint16_t x1497 = UINT16_MAX;
int16_t x1565 = -9;
volatile int64_t t28 = -55189224LL;
int32_t x1612 = 22;
static int8_t x1623 = 0;
volatile int32_t t31 = 112140;
uint64_t x1650 = 0LLU;
volatile int32_t x1652 = -12582;
uint16_t x1671 = 3U;
int16_t x1745 = -2;
int32_t x1748 = 16113;
volatile uint64_t t36 = 62383LLU;
volatile uint64_t t37 = 882955317LLU;
volatile uint8_t x1815 = 3U;
static volatile int8_t x1816 = -1;
volatile uint64_t t38 = 150313380170LLU;
static int64_t x1881 = 2346167884892492LL;
uint8_t x1883 = 14U;
volatile uint32_t t42 = 405209426U;
static volatile uint64_t t45 = 27LLU;
volatile uint8_t x2217 = 42U;
static uint16_t x2219 = 2U;
volatile int64_t x2220 = 438794069109420953LL;
uint32_t x2281 = UINT32_MAX;
volatile int16_t x2303 = 25;
volatile int16_t x2304 = -1;
volatile int8_t x2335 = 21;
static volatile int64_t x2424 = -309647LL;
uint64_t x2498 = UINT64_MAX;
volatile int8_t x2703 = 11;
volatile int8_t x2704 = 7;
volatile int64_t t52 = 243571413019375552LL;
volatile uint8_t x2759 = 4U;
volatile int16_t x2792 = -21;
int8_t x2825 = INT8_MIN;
uint16_t x2827 = 1U;
int16_t x2880 = 0;
uint16_t x3215 = 7U;
int64_t t61 = -1LL;
uint32_t x3300 = 20U;
int16_t x3382 = 3339;
volatile int16_t x3524 = -3547;
int16_t x3608 = INT16_MAX;
static volatile int16_t x3798 = 77;
volatile int32_t t73 = -13591;
uint32_t x3828 = UINT32_MAX;
int64_t x3837 = INT64_MIN;
uint16_t x4092 = UINT16_MAX;
uint64_t t78 = 0LLU;
int32_t t79 = -563;
int16_t x4309 = -240;
static int8_t x4311 = 23;
static volatile int32_t t81 = 7236;
static uint64_t x4374 = 2663886711903576918LLU;
volatile int32_t t85 = 107270996;
int32_t x4517 = INT32_MIN;
volatile uint16_t x4666 = 4178U;
volatile uint32_t x4682 = UINT32_MAX;
static uint8_t x4683 = 1U;
uint64_t x4698 = 1092522904LLU;
uint32_t x4908 = 226881U;
int8_t x4967 = 13;
static int64_t t96 = 4175674LL;
volatile int32_t t97 = 63809;
int16_t x5085 = -3488;
uint8_t x5086 = 13U;
uint16_t x5088 = UINT16_MAX;
volatile uint8_t x5141 = UINT8_MAX;
int64_t x5142 = 8842862611782427LL;
int64_t t101 = 4159271355LL;
uint32_t x5150 = 218752U;
int32_t x5292 = -473;
uint32_t t104 = 36830U;
uint8_t x5585 = 29U;
uint8_t x5587 = 9U;
int8_t x5696 = INT8_MIN;
int32_t x5784 = -3;
int32_t x5853 = INT32_MAX;
uint64_t x5854 = UINT64_MAX;
volatile int16_t x5921 = -1;
static uint8_t x6046 = UINT8_MAX;
volatile int8_t x6216 = INT8_MIN;
int64_t x6241 = INT64_MIN;
uint64_t x6260 = 113790984442LLU;
int64_t x6291 = 15LL;
static uint32_t t122 = 226U;
static uint16_t x6327 = 21U;
volatile uint64_t t123 = 1600877502706525LLU;
uint16_t x6543 = 1U;
int8_t x6544 = INT8_MIN;
volatile uint64_t t126 = 1221002301443LLU;
static int8_t x6659 = 4;
int16_t x6660 = -603;
volatile int64_t x6816 = INT64_MIN;
uint64_t x6896 = 13196623589LLU;
uint16_t x6915 = 29U;
uint64_t x6916 = 328858090761295LLU;
static uint32_t x6967 = 0U;
static int32_t x7101 = -1;
static uint8_t x7102 = 18U;
static uint8_t x7103 = 11U;
static volatile int8_t x7111 = 1;
volatile uint64_t t137 = 503563561749961492LLU;
int32_t x7488 = INT32_MIN;
int32_t x7513 = -11674;
int16_t x7514 = INT16_MAX;
uint64_t x7518 = UINT64_MAX;
volatile uint8_t x7607 = 0U;
static volatile uint32_t t144 = 2U;
int64_t x7632 = INT64_MAX;
static volatile int16_t x7712 = INT16_MIN;
uint8_t x7767 = 21U;
volatile uint32_t t147 = 171U;
volatile int8_t x7866 = 2;
static int64_t x7868 = 256744738LL;
volatile uint64_t t150 = 127726828LLU;
static uint8_t x8061 = UINT8_MAX;
uint16_t x8063 = 0U;
volatile int32_t t151 = 20;
int32_t x8130 = INT32_MAX;
int8_t x8339 = 1;
volatile int32_t x8358 = 1;
static int8_t x8458 = INT8_MAX;
volatile int32_t t157 = 2075351;
uint64_t x8465 = 422870822847LLU;
int64_t x8468 = 5LL;
uint8_t x8491 = 5U;
volatile uint8_t x8567 = 0U;
int32_t x8568 = INT32_MIN;
int32_t x8738 = INT32_MAX;
static uint8_t x8880 = 10U;
int8_t x8928 = -1;
int8_t x8975 = 0;
static int64_t t167 = -336LL;
int16_t x9020 = INT16_MIN;
uint64_t t170 = 8196323452LLU;
int16_t x9046 = INT16_MAX;
static int8_t x9261 = 1;
uint64_t t175 = 14LLU;
volatile uint32_t x9434 = 5U;
uint64_t t177 = 18578783LLU;
static volatile uint64_t t179 = 16506941895889LLU;
uint8_t x9719 = 12U;
int8_t x9797 = INT8_MIN;
int64_t x9799 = 1LL;
static int32_t t181 = 17860116;
static uint64_t x9817 = 140537LLU;
static int8_t x9832 = -1;
static uint32_t t183 = 436U;
uint64_t t187 = 1447598LLU;
uint8_t x10111 = 15U;
volatile uint32_t t188 = 414747U;
uint8_t x10517 = 0U;
uint64_t t191 = 859222463818177422LLU;
static uint32_t t193 = 796U;
uint8_t x10582 = UINT8_MAX;
int8_t x10600 = 0;
static uint64_t t195 = 1LLU;
int32_t x10681 = INT32_MAX;
uint64_t x10682 = 282LLU;
static int64_t x10814 = 888141519LL;
int16_t x10815 = 13;
static int64_t t198 = 6551218650LL;
uint8_t x10887 = 13U;


void f0(void) {
    	int8_t x53 = -36;
	volatile uint64_t x54 = 1LLU;
	uint8_t x55 = 25U;
	int64_t x56 = -1LL;
	volatile uint64_t t0 = 3598441LLU;

    t0 = (x53*((x54>>x55)&x56));

    if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x61 = 3LLU;
	uint8_t x62 = 124U;
	static int8_t x63 = 31;
	static uint16_t x64 = UINT16_MAX;
	volatile uint64_t t1 = 51LLU;

    t1 = (x61*((x62>>x63)&x64));

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x77 = INT64_MAX;
	uint8_t x78 = UINT8_MAX;
	int16_t x79 = 10;
	static volatile int64_t t2 = -438539436LL;

    t2 = (x77*((x78>>x79)&x80));

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x89 = 9563U;
	int32_t x90 = 82;
	volatile uint16_t x92 = UINT16_MAX;
	uint32_t t3 = 69U;

    t3 = (x89*((x90>>x91)&x92));

    if (t3 != 19126U) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x101 = INT8_MAX;
	int64_t x102 = INT64_MAX;
	uint32_t x103 = 28U;
	int16_t x104 = -5;
	int64_t t4 = 17549307996201LL;

    t4 = (x101*((x102>>x103)&x104));

    if (t4 != 4363686772101LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint16_t x210 = 0U;
	uint64_t x211 = 0LLU;
	int32_t x212 = INT32_MAX;
	volatile int64_t t5 = -3120LL;

    t5 = (x209*((x210>>x211)&x212));

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x273 = -1LL;
	uint16_t x274 = 45U;
	uint64_t x275 = 1LLU;
	static uint8_t x276 = 32U;
	volatile int64_t t6 = -269622548495449LL;

    t6 = (x273*((x274>>x275)&x276));

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x497 = INT8_MAX;
	int32_t x498 = INT32_MAX;
	uint8_t x499 = 5U;
	static int64_t x500 = INT64_MIN;
	int64_t t7 = -5196745258385LL;

    t7 = (x497*((x498>>x499)&x500));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x510 = 1;
	int16_t x511 = 27;
	static uint32_t x512 = 2083U;

    t8 = (x509*((x510>>x511)&x512));

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int8_t x525 = -29;
	uint16_t x526 = 321U;
	uint8_t x527 = 6U;
	uint16_t x528 = 3U;
	volatile int32_t t9 = -725536;

    t9 = (x525*((x526>>x527)&x528));

    if (t9 != -29) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x558 = 1LL;
	uint8_t x559 = 13U;
	uint8_t x560 = UINT8_MAX;
	int64_t t10 = -376LL;

    t10 = (x557*((x558>>x559)&x560));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x561 = INT8_MIN;
	int16_t x562 = INT16_MAX;
	int8_t x563 = 6;
	int8_t x564 = -3;

    t11 = (x561*((x562>>x563)&x564));

    if (t11 != -65152) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x750 = INT64_MAX;
	static uint8_t x751 = 2U;
	uint64_t t12 = 217LLU;

    t12 = (x749*((x750>>x751)&x752));

    if (t12 != 16140901064495857792LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x769 = INT16_MAX;
	uint16_t x770 = UINT16_MAX;
	int64_t x772 = INT64_MIN;
	volatile int64_t t13 = -1397682529247LL;

    t13 = (x769*((x770>>x771)&x772));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint64_t x870 = 7740218LLU;
	uint32_t x871 = 38U;
	uint32_t x872 = 1728885U;
	volatile uint64_t t14 = 198519424647LLU;

    t14 = (x869*((x870>>x871)&x872));

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x1133 = 7042;
	uint8_t x1134 = 75U;
	static uint64_t x1135 = 3LLU;
	static volatile int32_t t15 = -1239;

    t15 = (x1133*((x1134>>x1135)&x1136));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x1145 = INT8_MAX;
	uint32_t x1146 = 3U;
	int16_t x1147 = 0;
	static int64_t t16 = 0LL;

    t16 = (x1145*((x1146>>x1147)&x1148));

    if (t16 != 254LL) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint16_t x1149 = UINT16_MAX;
	uint8_t x1151 = 6U;
	volatile int32_t t17 = 28;

    t17 = (x1149*((x1150>>x1151)&x1152));

    if (t17 != 65535) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x1157 = INT32_MIN;
	static volatile uint8_t x1159 = 9U;
	static int32_t x1160 = 488866201;

    t18 = (x1157*((x1158>>x1159)&x1160));

    if (t18 != 2147483648U) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x1221 = INT32_MAX;
	uint64_t x1222 = UINT64_MAX;
	int8_t x1223 = 3;
	int8_t x1224 = INT8_MIN;
	volatile uint64_t t19 = 1612LLU;

    t19 = (x1221*((x1222>>x1223)&x1224));

    if (t19 != 16140900789617950848LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x1265 = -61690LL;
	int64_t x1268 = INT64_MAX;
	uint64_t t20 = 0LLU;

    t20 = (x1265*((x1266>>x1267)&x1268));

    if (t20 != 18421479714136357436LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x1277 = INT32_MIN;
	int16_t x1278 = 5874;
	int64_t x1280 = -845LL;
	volatile int64_t t21 = 207999043LL;

    t21 = (x1277*((x1278>>x1279)&x1280));

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x1374 = 4435LL;
	static uint64_t x1376 = UINT64_MAX;
	volatile uint64_t t22 = 260567587739LLU;

    t22 = (x1373*((x1374>>x1375)&x1376));

    if (t22 != 782LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x1421 = -22;
	int8_t x1423 = 1;

    t23 = (x1421*((x1422>>x1423)&x1424));

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x1426 = 616U;
	int16_t x1427 = 15;
	int16_t x1428 = INT16_MAX;

    t24 = (x1425*((x1426>>x1427)&x1428));

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint64_t x1498 = UINT64_MAX;
	uint8_t x1499 = 23U;
	int32_t x1500 = INT32_MIN;
	uint64_t t25 = 1013324LLU;

    t25 = (x1497*((x1498>>x1499)&x1500));

    if (t25 != 143972253711728640LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x1566 = 4U;
	int64_t x1567 = 1LL;
	volatile int64_t x1568 = 1783840206268105692LL;
	int64_t t26 = 1454LL;

    t26 = (x1565*((x1566>>x1567)&x1568));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x1569 = -1;
	uint32_t x1570 = UINT32_MAX;
	int8_t x1571 = 0;
	uint16_t x1572 = 15U;
	volatile uint32_t t27 = 15544U;

    t27 = (x1569*((x1570>>x1571)&x1572));

    if (t27 != 4294967281U) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint32_t x1597 = 249833U;
	uint32_t x1598 = 4792U;
	volatile int8_t x1599 = 1;
	volatile int64_t x1600 = -1LL;

    t28 = (x1597*((x1598>>x1599)&x1600));

    if (t28 != 598599868LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x1609 = -1;
	static uint64_t x1610 = 470937616LLU;
	int8_t x1611 = 1;
	uint64_t t29 = 752271853070977LLU;

    t29 = (x1609*((x1610>>x1611)&x1612));

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x1621 = -1;
	static volatile int8_t x1622 = INT8_MAX;
	static int16_t x1624 = INT16_MAX;
	static int32_t t30 = 15569;

    t30 = (x1621*((x1622>>x1623)&x1624));

    if (t30 != -127) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x1629 = -1;
	uint16_t x1630 = UINT16_MAX;
	int64_t x1631 = 6LL;
	int16_t x1632 = INT16_MIN;

    t31 = (x1629*((x1630>>x1631)&x1632));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x1649 = INT16_MIN;
	static uint16_t x1651 = 24U;
	uint64_t t32 = 17364LLU;

    t32 = (x1649*((x1650>>x1651)&x1652));

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint8_t x1669 = UINT8_MAX;
	uint64_t x1670 = UINT64_MAX;
	int32_t x1672 = INT32_MIN;
	uint64_t t33 = 99LLU;

    t33 = (x1669*((x1670>>x1671)&x1672));

    if (t33 != 16140900516887527424LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint8_t x1721 = 0U;
	volatile uint64_t x1722 = UINT64_MAX;
	uint8_t x1723 = 0U;
	uint16_t x1724 = UINT16_MAX;
	uint64_t t34 = 5LLU;

    t34 = (x1721*((x1722>>x1723)&x1724));

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint16_t x1746 = UINT16_MAX;
	static int8_t x1747 = 1;
	static int32_t t35 = -33;

    t35 = (x1745*((x1746>>x1747)&x1748));

    if (t35 != -32226) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile uint8_t x1761 = UINT8_MAX;
	uint64_t x1762 = 6826LLU;
	uint8_t x1763 = 2U;
	int32_t x1764 = INT32_MIN;

    t36 = (x1761*((x1762>>x1763)&x1764));

    if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x1769 = -1;
	uint16_t x1770 = UINT16_MAX;
	static uint8_t x1771 = 0U;
	uint64_t x1772 = UINT64_MAX;

    t37 = (x1769*((x1770>>x1771)&x1772));

    if (t37 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x1813 = -1;
	volatile uint64_t x1814 = 144562600122974LLU;

    t38 = (x1813*((x1814>>x1815)&x1816));

    if (t38 != 18446726003384536245LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x1833 = INT32_MAX;
	uint64_t x1834 = 3735544484051787910LLU;
	uint8_t x1835 = 16U;
	int64_t x1836 = INT64_MAX;
	static volatile uint64_t t39 = 7436041LLU;

    t39 = (x1833*((x1834>>x1835)&x1836));

    if (t39 != 12174667344879378797LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x1849 = 0U;
	uint64_t x1850 = 4874284135166723LLU;
	uint8_t x1851 = 20U;
	int16_t x1852 = INT16_MAX;
	volatile uint64_t t40 = 491LLU;

    t40 = (x1849*((x1850>>x1851)&x1852));

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile uint16_t x1882 = UINT16_MAX;
	static int64_t x1884 = INT64_MIN;
	int64_t t41 = -12324LL;

    t41 = (x1881*((x1882>>x1883)&x1884));

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x1897 = 13495289U;
	volatile uint16_t x1898 = UINT16_MAX;
	uint16_t x1899 = 29U;
	static int32_t x1900 = -41268;

    t42 = (x1897*((x1898>>x1899)&x1900));

    if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x1929 = -1;
	int8_t x1930 = INT8_MAX;
	int16_t x1931 = 4;
	uint64_t x1932 = UINT64_MAX;
	static volatile uint64_t t43 = 75LLU;

    t43 = (x1929*((x1930>>x1931)&x1932));

    if (t43 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint8_t x2021 = 0U;
	uint8_t x2022 = UINT8_MAX;
	int16_t x2023 = 16;
	uint8_t x2024 = UINT8_MAX;
	static volatile int32_t t44 = -35;

    t44 = (x2021*((x2022>>x2023)&x2024));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint8_t x2073 = 3U;
	uint64_t x2074 = 249518LLU;
	static int8_t x2075 = 63;
	int8_t x2076 = INT8_MAX;

    t45 = (x2073*((x2074>>x2075)&x2076));

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x2218 = UINT32_MAX;
	int64_t t46 = -3580316359LL;

    t46 = (x2217*((x2218>>x2219)&x2220));

    if (t46 != 7620884250LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x2282 = 246208LLU;
	int8_t x2283 = 0;
	int64_t x2284 = INT64_MAX;
	static uint64_t t47 = 16987552266696503LLU;

    t47 = (x2281*((x2282>>x2283)&x2284));

    if (t47 != 1057455307767360LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x2301 = UINT32_MAX;
	uint8_t x2302 = 1U;
	volatile uint32_t t48 = 37467197U;

    t48 = (x2301*((x2302>>x2303)&x2304));

    if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x2333 = INT32_MIN;
	volatile int64_t x2334 = 17400243746LL;
	int64_t x2336 = -1LL;
	static volatile int64_t t49 = -1LL;

    t49 = (x2333*((x2334>>x2335)&x2336));

    if (t49 != -17817671827456LL) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x2421 = 16301;
	uint8_t x2422 = 1U;
	int64_t x2423 = 1LL;
	static int64_t t50 = 10390476843696LL;

    t50 = (x2421*((x2422>>x2423)&x2424));

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint32_t x2497 = 260U;
	uint8_t x2499 = 5U;
	volatile int8_t x2500 = -5;
	volatile uint64_t t51 = 117687407494LLU;

    t51 = (x2497*((x2498>>x2499)&x2500));

    if (t51 != 2305843009213692652LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x2701 = 2U;
	volatile int64_t x2702 = 68LL;

    t52 = (x2701*((x2702>>x2703)&x2704));

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x2725 = INT16_MIN;
	int32_t x2726 = 24716524;
	int16_t x2727 = 14;
	static int16_t x2728 = INT16_MIN;
	volatile int32_t t53 = 1;

    t53 = (x2725*((x2726>>x2727)&x2728));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x2757 = INT8_MAX;
	volatile int64_t x2758 = 115LL;
	int16_t x2760 = INT16_MIN;
	static int64_t t54 = -142718084532307131LL;

    t54 = (x2757*((x2758>>x2759)&x2760));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x2789 = 471668;
	uint32_t x2790 = 794U;
	static uint16_t x2791 = 3U;
	volatile uint32_t t55 = 61385873U;

    t55 = (x2789*((x2790>>x2791)&x2792));

    if (t55 != 46695132U) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x2826 = 420694229U;
	int64_t x2828 = INT64_MAX;
	volatile int64_t t56 = 505991023LL;

    t56 = (x2825*((x2826>>x2827)&x2828));

    if (t56 != -26924430592LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x2877 = -17;
	uint16_t x2878 = UINT16_MAX;
	uint8_t x2879 = 6U;
	static volatile int32_t t57 = -107733;

    t57 = (x2877*((x2878>>x2879)&x2880));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x2973 = UINT16_MAX;
	volatile uint64_t x2974 = 210886027583LLU;
	int8_t x2975 = 1;
	int32_t x2976 = INT32_MAX;
	volatile uint64_t t58 = 30750698610055LLU;

    t58 = (x2973*((x2974>>x2975)&x2976));

    if (t58 != 14176206080865LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint16_t x3037 = 5U;
	int16_t x3038 = 1;
	static int8_t x3039 = 9;
	int16_t x3040 = 1;
	int32_t t59 = 1130;

    t59 = (x3037*((x3038>>x3039)&x3040));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x3213 = INT16_MAX;
	static volatile int16_t x3214 = 1;
	static int32_t x3216 = 32684;
	int32_t t60 = -73156636;

    t60 = (x3213*((x3214>>x3215)&x3216));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x3225 = -1LL;
	int32_t x3226 = INT32_MAX;
	int32_t x3227 = 3;
	static int64_t x3228 = INT64_MAX;

    t61 = (x3225*((x3226>>x3227)&x3228));

    if (t61 != -268435455LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x3297 = INT32_MIN;
	static int64_t x3298 = INT64_MAX;
	static uint8_t x3299 = 0U;
	static volatile int64_t t62 = -30LL;

    t62 = (x3297*((x3298>>x3299)&x3300));

    if (t62 != -42949672960LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x3321 = UINT8_MAX;
	uint64_t x3322 = 7578293302985LLU;
	uint8_t x3323 = 29U;
	int64_t x3324 = -115583411LL;
	uint64_t t63 = 1632122649LLU;

    t63 = (x3321*((x3322>>x3323)&x3324));

    if (t63 != 1436415LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x3381 = 28U;
	uint64_t x3383 = 29LLU;
	int16_t x3384 = INT16_MAX;
	volatile int32_t t64 = -78;

    t64 = (x3381*((x3382>>x3383)&x3384));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x3453 = -1;
	volatile uint8_t x3454 = UINT8_MAX;
	int16_t x3455 = 0;
	volatile uint16_t x3456 = 9123U;
	int32_t t65 = -506;

    t65 = (x3453*((x3454>>x3455)&x3456));

    if (t65 != -163) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x3489 = INT64_MIN;
	int8_t x3490 = 36;
	uint16_t x3491 = 6U;
	int8_t x3492 = INT8_MIN;
	static int64_t t66 = -310065215751785852LL;

    t66 = (x3489*((x3490>>x3491)&x3492));

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x3521 = 7783U;
	volatile int64_t x3522 = INT64_MAX;
	uint32_t x3523 = 25U;
	static int64_t t67 = 65476519169501LL;

    t67 = (x3521*((x3522>>x3523)&x3524));

    if (t67 != 2139374722138851LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x3605 = INT8_MIN;
	int64_t x3606 = INT64_MAX;
	uint8_t x3607 = 4U;
	volatile int64_t t68 = 1LL;

    t68 = (x3605*((x3606>>x3607)&x3608));

    if (t68 != -4194176LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x3641 = -3163;
	static uint16_t x3642 = 6U;
	uint8_t x3643 = 7U;
	int8_t x3644 = 44;
	volatile int32_t t69 = -54492175;

    t69 = (x3641*((x3642>>x3643)&x3644));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x3729 = 5922;
	uint32_t x3730 = UINT32_MAX;
	int32_t x3731 = 2;
	static uint8_t x3732 = 92U;
	volatile uint32_t t70 = 13615U;

    t70 = (x3729*((x3730>>x3731)&x3732));

    if (t70 != 544824U) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x3765 = INT32_MAX;
	uint64_t x3766 = 185419748360352LLU;
	volatile uint32_t x3767 = 7U;
	volatile int16_t x3768 = 1;
	volatile uint64_t t71 = 913197617120LLU;

    t71 = (x3765*((x3766>>x3767)&x3768));

    if (t71 != 2147483647LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x3785 = 1685LL;
	volatile int16_t x3786 = INT16_MAX;
	int8_t x3787 = 1;
	int16_t x3788 = -1;
	int64_t t72 = 7658120LL;

    t72 = (x3785*((x3786>>x3787)&x3788));

    if (t72 != 27605355LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x3797 = 2U;
	static uint8_t x3799 = 12U;
	int8_t x3800 = -1;

    t73 = (x3797*((x3798>>x3799)&x3800));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x3825 = 25048848LLU;
	volatile uint8_t x3826 = UINT8_MAX;
	int8_t x3827 = 2;
	static volatile uint64_t t74 = 1701049054LLU;

    t74 = (x3825*((x3826>>x3827)&x3828));

    if (t74 != 1578077424LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x3838 = 5;
	uint8_t x3839 = 5U;
	static int32_t x3840 = INT32_MAX;
	volatile int64_t t75 = 764267967LL;

    t75 = (x3837*((x3838>>x3839)&x3840));

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x3853 = -1LL;
	int8_t x3854 = 0;
	volatile uint16_t x3855 = 0U;
	static int16_t x3856 = 0;
	int64_t t76 = 404266229047739021LL;

    t76 = (x3853*((x3854>>x3855)&x3856));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x3969 = INT16_MIN;
	uint8_t x3970 = 7U;
	uint8_t x3971 = 1U;
	static volatile uint64_t x3972 = 64853595028539LLU;
	uint64_t t77 = 21303287662LLU;

    t77 = (x3969*((x3970>>x3971)&x3972));

    if (t77 != 18446744073709453312LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x4089 = INT16_MAX;
	uint64_t x4090 = 60815351620LLU;
	uint32_t x4091 = 5U;

    t78 = (x4089*((x4090>>x4091)&x4092));

    if (t78 != 41745158LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x4185 = 0;
	uint16_t x4186 = UINT16_MAX;
	int64_t x4187 = 10LL;
	int16_t x4188 = -3670;

    t79 = (x4185*((x4186>>x4187)&x4188));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x4197 = INT8_MIN;
	int32_t x4198 = 109567;
	int16_t x4199 = 2;
	volatile int8_t x4200 = 5;
	volatile int32_t t80 = 69798;

    t80 = (x4197*((x4198>>x4199)&x4200));

    if (t80 != -640) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x4310 = INT16_MAX;
	static int16_t x4312 = INT16_MIN;

    t81 = (x4309*((x4310>>x4311)&x4312));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x4373 = 16U;
	static uint8_t x4375 = 11U;
	int8_t x4376 = -1;
	volatile uint64_t t82 = 1064671713334608617LLU;

    t82 = (x4373*((x4374>>x4375)&x4376));

    if (t82 != 20811614936746688LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x4429 = UINT32_MAX;
	static uint64_t x4430 = 23443367LLU;
	int8_t x4431 = 27;
	uint16_t x4432 = 6203U;
	volatile uint64_t t83 = 8448561423510LLU;

    t83 = (x4429*((x4430>>x4431)&x4432));

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint8_t x4445 = 24U;
	uint64_t x4446 = UINT64_MAX;
	volatile uint16_t x4447 = 2U;
	uint32_t x4448 = 0U;
	volatile uint64_t t84 = 8283220810442990384LLU;

    t84 = (x4445*((x4446>>x4447)&x4448));

    if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x4485 = INT8_MIN;
	uint16_t x4486 = 9911U;
	volatile int64_t x4487 = 7LL;
	int16_t x4488 = -1;

    t85 = (x4485*((x4486>>x4487)&x4488));

    if (t85 != -9856) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint32_t x4518 = UINT32_MAX;
	uint16_t x4519 = 7U;
	int16_t x4520 = -159;
	volatile uint32_t t86 = 1036U;

    t86 = (x4517*((x4518>>x4519)&x4520));

    if (t86 != 2147483648U) { NG(); } else { ; }
	
}

void f87(void) {
    	static int64_t x4525 = -1LL;
	int64_t x4526 = INT64_MAX;
	uint8_t x4527 = 9U;
	int8_t x4528 = 0;
	int64_t t87 = 7LL;

    t87 = (x4525*((x4526>>x4527)&x4528));

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x4665 = 42175437LL;
	static uint8_t x4667 = 3U;
	int64_t x4668 = INT64_MIN;
	volatile int64_t t88 = -2136513408013230122LL;

    t88 = (x4665*((x4666>>x4667)&x4668));

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x4681 = -126;
	int8_t x4684 = INT8_MAX;
	volatile uint32_t t89 = 150U;

    t89 = (x4681*((x4682>>x4683)&x4684));

    if (t89 != 4294951294U) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x4697 = INT8_MIN;
	uint16_t x4699 = 7U;
	static int16_t x4700 = -147;
	static volatile uint64_t t90 = 62876634320226LLU;

    t90 = (x4697*((x4698>>x4699)&x4700));

    if (t90 != 18446744072617028992LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint8_t x4729 = UINT8_MAX;
	int64_t x4730 = 174407LL;
	uint16_t x4731 = 24U;
	uint64_t x4732 = 0LLU;
	volatile uint64_t t91 = 39052010588LLU;

    t91 = (x4729*((x4730>>x4731)&x4732));

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x4765 = INT16_MAX;
	volatile int16_t x4766 = 3640;
	static int8_t x4767 = 1;
	uint64_t x4768 = 491771LLU;
	static uint64_t t92 = 29927076LLU;

    t92 = (x4765*((x4766>>x4767)&x4768));

    if (t92 != 786408LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint64_t x4769 = UINT64_MAX;
	static uint16_t x4770 = UINT16_MAX;
	uint8_t x4771 = 30U;
	uint64_t x4772 = 11574423389588294LLU;
	static uint64_t t93 = 848LLU;

    t93 = (x4769*((x4770>>x4771)&x4772));

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint64_t x4905 = 222LLU;
	int8_t x4906 = 1;
	static uint16_t x4907 = 0U;
	static volatile uint64_t t94 = 42LLU;

    t94 = (x4905*((x4906>>x4907)&x4908));

    if (t94 != 222LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile uint8_t x4921 = 0U;
	volatile uint16_t x4922 = 23U;
	uint16_t x4923 = 10U;
	uint32_t x4924 = 22442899U;
	uint32_t t95 = 19U;

    t95 = (x4921*((x4922>>x4923)&x4924));

    if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x4965 = INT32_MAX;
	int64_t x4966 = INT64_MAX;
	int64_t x4968 = INT64_MIN;

    t96 = (x4965*((x4966>>x4967)&x4968));

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x4989 = 14480U;
	uint8_t x4990 = 0U;
	volatile uint16_t x4991 = 7U;
	uint16_t x4992 = UINT16_MAX;

    t97 = (x4989*((x4990>>x4991)&x4992));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x5065 = UINT64_MAX;
	uint32_t x5066 = 66654521U;
	int16_t x5067 = 25;
	int64_t x5068 = -1LL;
	uint64_t t98 = UINT64_MAX;

    t98 = (x5065*((x5066>>x5067)&x5068));

    if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x5087 = 23U;
	static int32_t t99 = 909354967;

    t99 = (x5085*((x5086>>x5087)&x5088));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int32_t x5133 = 159598088;
	int32_t x5134 = 7283;
	int8_t x5135 = 12;
	static volatile int64_t x5136 = INT64_MAX;
	static volatile int64_t t100 = -27102919235LL;

    t100 = (x5133*((x5134>>x5135)&x5136));

    if (t100 != 159598088LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x5143 = 26U;
	int16_t x5144 = INT16_MIN;

    t101 = (x5141*((x5142>>x5143)&x5144));

    if (t101 != 33598832640LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x5149 = -1;
	int32_t x5151 = 3;
	uint64_t x5152 = 4987368190529621LLU;
	volatile uint64_t t102 = 2055020LLU;

    t102 = (x5149*((x5150>>x5151)&x5152));

    if (t102 != 18446744073709535152LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x5157 = INT64_MIN;
	volatile uint16_t x5158 = 287U;
	int16_t x5159 = 0;
	int32_t x5160 = 1;
	int64_t t103 = INT64_MIN;

    t103 = (x5157*((x5158>>x5159)&x5160));

    if (t103 != INT64_MIN) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x5289 = 39U;
	uint32_t x5290 = 1U;
	int8_t x5291 = 15;

    t104 = (x5289*((x5290>>x5291)&x5292));

    if (t104 != 0U) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x5385 = INT8_MIN;
	int16_t x5386 = INT16_MAX;
	uint8_t x5387 = 15U;
	int8_t x5388 = INT8_MIN;
	int32_t t105 = 79184;

    t105 = (x5385*((x5386>>x5387)&x5388));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x5545 = 2U;
	static volatile uint64_t x5546 = 172681569LLU;
	uint32_t x5547 = 1U;
	static int64_t x5548 = -1LL;
	static volatile uint64_t t106 = 3636126LLU;

    t106 = (x5545*((x5546>>x5547)&x5548));

    if (t106 != 172681568LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x5586 = 13;
	static int64_t x5588 = INT64_MIN;
	volatile int64_t t107 = 1373300LL;

    t107 = (x5585*((x5586>>x5587)&x5588));

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint16_t x5593 = UINT16_MAX;
	int16_t x5594 = 15;
	int16_t x5595 = 0;
	uint16_t x5596 = UINT16_MAX;
	int32_t t108 = -921706668;

    t108 = (x5593*((x5594>>x5595)&x5596));

    if (t108 != 983025) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x5601 = 7;
	uint8_t x5602 = 41U;
	int8_t x5603 = 0;
	uint16_t x5604 = 508U;
	int32_t t109 = -4;

    t109 = (x5601*((x5602>>x5603)&x5604));

    if (t109 != 280) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x5693 = 2;
	uint16_t x5694 = 3715U;
	uint32_t x5695 = 2U;
	volatile int32_t t110 = 2;

    t110 = (x5693*((x5694>>x5695)&x5696));

    if (t110 != 1792) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x5773 = INT8_MIN;
	static uint32_t x5774 = 191412679U;
	volatile uint8_t x5775 = 8U;
	uint8_t x5776 = 1U;
	uint32_t t111 = 160U;

    t111 = (x5773*((x5774>>x5775)&x5776));

    if (t111 != 4294967168U) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x5781 = INT32_MIN;
	volatile uint64_t x5782 = UINT64_MAX;
	volatile uint8_t x5783 = 50U;
	static uint64_t t112 = 2074259295551649LLU;

    t112 = (x5781*((x5782>>x5783)&x5784));

    if (t112 != 18446708895779913728LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x5813 = 28;
	uint32_t x5814 = UINT32_MAX;
	volatile uint8_t x5815 = 4U;
	int64_t x5816 = 22127745LL;
	volatile int64_t t113 = -7730LL;

    t113 = (x5813*((x5814>>x5815)&x5816));

    if (t113 != 619576860LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x5855 = 59U;
	volatile uint8_t x5856 = 5U;
	static uint64_t t114 = 8LLU;

    t114 = (x5853*((x5854>>x5855)&x5856));

    if (t114 != 10737418235LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint16_t x5922 = 1985U;
	uint8_t x5923 = 11U;
	volatile uint32_t x5924 = UINT32_MAX;
	volatile uint32_t t115 = 308U;

    t115 = (x5921*((x5922>>x5923)&x5924));

    if (t115 != 0U) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x5969 = -28954672388864824LL;
	static uint8_t x5970 = 21U;
	uint8_t x5971 = 6U;
	static int64_t x5972 = -1LL;
	int64_t t116 = 9566407432568775LL;

    t116 = (x5969*((x5970>>x5971)&x5972));

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static int64_t x6045 = -462197454LL;
	int8_t x6047 = 4;
	int8_t x6048 = -1;
	static int64_t t117 = -169496904659318LL;

    t117 = (x6045*((x6046>>x6047)&x6048));

    if (t117 != -6932961810LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int8_t x6189 = INT8_MIN;
	uint8_t x6190 = 0U;
	int8_t x6191 = 1;
	static uint16_t x6192 = 891U;
	static volatile int32_t t118 = 1;

    t118 = (x6189*((x6190>>x6191)&x6192));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x6213 = -1LL;
	uint64_t x6214 = 1613987309061LLU;
	int32_t x6215 = 0;
	volatile uint64_t t119 = 7981664482671LLU;

    t119 = (x6213*((x6214>>x6215)&x6216));

    if (t119 != 18446742459722242560LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint64_t x6242 = 144LLU;
	uint8_t x6243 = 13U;
	int16_t x6244 = -1844;
	volatile uint64_t t120 = 41644LLU;

    t120 = (x6241*((x6242>>x6243)&x6244));

    if (t120 != 0LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x6257 = UINT8_MAX;
	static int8_t x6258 = INT8_MAX;
	uint8_t x6259 = 0U;
	uint64_t t121 = 147890LLU;

    t121 = (x6257*((x6258>>x6259)&x6260));

    if (t121 != 31110LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile uint8_t x6289 = 107U;
	volatile uint32_t x6290 = UINT32_MAX;
	int16_t x6292 = -1;

    t122 = (x6289*((x6290>>x6291)&x6292));

    if (t122 != 14024597U) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x6325 = 13695U;
	uint64_t x6326 = 341789709LLU;
	volatile int32_t x6328 = 8325765;

    t123 = (x6325*((x6326>>x6327)&x6328));

    if (t123 != 1752960LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x6341 = INT16_MIN;
	uint8_t x6342 = 0U;
	volatile uint8_t x6343 = 4U;
	static uint16_t x6344 = 14U;
	int32_t t124 = -5092;

    t124 = (x6341*((x6342>>x6343)&x6344));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x6393 = INT8_MIN;
	volatile uint32_t x6394 = 1U;
	static int16_t x6395 = 0;
	uint8_t x6396 = 0U;
	volatile uint32_t t125 = 1U;

    t125 = (x6393*((x6394>>x6395)&x6396));

    if (t125 != 0U) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint64_t x6541 = 104540LLU;
	uint16_t x6542 = UINT16_MAX;

    t126 = (x6541*((x6542>>x6543)&x6544));

    if (t126 != 3412185600LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x6657 = -4;
	int8_t x6658 = 19;
	volatile int32_t t127 = 549;

    t127 = (x6657*((x6658>>x6659)&x6660));

    if (t127 != -4) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x6813 = INT8_MIN;
	uint64_t x6814 = 8479448210211LLU;
	int8_t x6815 = 43;
	uint64_t t128 = 15258996LLU;

    t128 = (x6813*((x6814>>x6815)&x6816));

    if (t128 != 0LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint8_t x6825 = 9U;
	static uint64_t x6826 = 14394842027LLU;
	uint8_t x6827 = 0U;
	int64_t x6828 = 22818231389LL;
	static uint64_t t129 = 3LLU;

    t129 = (x6825*((x6826>>x6827)&x6828));

    if (t129 != 50745249873LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	static int16_t x6893 = 11505;
	static volatile uint64_t x6894 = 71628661871LLU;
	volatile uint8_t x6895 = 55U;
	uint64_t t130 = 1189969944LLU;

    t130 = (x6893*((x6894>>x6895)&x6896));

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x6913 = 1514U;
	uint8_t x6914 = UINT8_MAX;
	static volatile uint64_t t131 = 6623093LLU;

    t131 = (x6913*((x6914>>x6915)&x6916));

    if (t131 != 0LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x6965 = 24254967309616375LL;
	static int32_t x6966 = INT32_MAX;
	int32_t x6968 = INT32_MIN;
	int64_t t132 = 10LL;

    t132 = (x6965*((x6966>>x6967)&x6968));

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x6997 = 4;
	uint8_t x6998 = 1U;
	uint8_t x6999 = 3U;
	int32_t x7000 = -403201;
	static int32_t t133 = -1143;

    t133 = (x6997*((x6998>>x6999)&x7000));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x7085 = INT16_MIN;
	uint8_t x7086 = 5U;
	uint64_t x7087 = 17LLU;
	uint8_t x7088 = 32U;
	volatile int32_t t134 = 101021;

    t134 = (x7085*((x7086>>x7087)&x7088));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x7104 = -21;
	volatile int32_t t135 = -73442;

    t135 = (x7101*((x7102>>x7103)&x7104));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x7109 = 2;
	static volatile uint8_t x7110 = 0U;
	int8_t x7112 = INT8_MIN;
	static volatile int32_t t136 = 1;

    t136 = (x7109*((x7110>>x7111)&x7112));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x7133 = -1;
	static int16_t x7134 = INT16_MAX;
	volatile uint32_t x7135 = 10U;
	uint64_t x7136 = 11344826313302LLU;

    t137 = (x7133*((x7134>>x7135)&x7136));

    if (t137 != 18446744073709551594LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x7205 = INT32_MIN;
	static uint64_t x7206 = UINT64_MAX;
	int16_t x7207 = 0;
	int64_t x7208 = INT64_MIN;
	volatile uint64_t t138 = 23LLU;

    t138 = (x7205*((x7206>>x7207)&x7208));

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x7485 = UINT32_MAX;
	uint32_t x7486 = 1630120U;
	volatile uint8_t x7487 = 2U;
	static volatile uint32_t t139 = 783232385U;

    t139 = (x7485*((x7486>>x7487)&x7488));

    if (t139 != 0U) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x7509 = -5;
	static uint32_t x7510 = UINT32_MAX;
	uint8_t x7511 = 26U;
	int8_t x7512 = INT8_MIN;
	uint32_t t140 = 404U;

    t140 = (x7509*((x7510>>x7511)&x7512));

    if (t140 != 0U) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x7515 = 2U;
	static uint64_t x7516 = UINT64_MAX;
	volatile uint64_t t141 = 3476214836705009251LLU;

    t141 = (x7513*((x7514>>x7515)&x7516));

    if (t141 != 18446744073613929882LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x7517 = INT16_MAX;
	int8_t x7519 = 13;
	int8_t x7520 = INT8_MIN;
	uint64_t t142 = 2806946334558349005LLU;

    t142 = (x7517*((x7518>>x7519)&x7520));

    if (t142 != 18444492273891672192LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x7533 = 396LLU;
	int16_t x7534 = INT16_MAX;
	uint8_t x7535 = 0U;
	int32_t x7536 = -93;
	volatile uint64_t t143 = 2109LLU;

    t143 = (x7533*((x7534>>x7535)&x7536));

    if (t143 != 12939300LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x7605 = INT32_MIN;
	uint32_t x7606 = 257U;
	int32_t x7608 = 5222109;

    t144 = (x7605*((x7606>>x7607)&x7608));

    if (t144 != 2147483648U) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x7629 = -52;
	uint16_t x7630 = 1184U;
	uint16_t x7631 = 1U;
	volatile int64_t t145 = 26387872813266LL;

    t145 = (x7629*((x7630>>x7631)&x7632));

    if (t145 != -30784LL) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint32_t x7709 = UINT32_MAX;
	volatile int8_t x7710 = INT8_MAX;
	int8_t x7711 = 0;
	uint32_t t146 = 54U;

    t146 = (x7709*((x7710>>x7711)&x7712));

    if (t146 != 0U) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x7765 = 4U;
	uint32_t x7766 = 6U;
	static uint32_t x7768 = 104199U;

    t147 = (x7765*((x7766>>x7767)&x7768));

    if (t147 != 0U) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x7805 = INT16_MAX;
	uint8_t x7806 = 56U;
	static int16_t x7807 = 6;
	static uint32_t x7808 = 238U;
	volatile uint32_t t148 = 7333U;

    t148 = (x7805*((x7806>>x7807)&x7808));

    if (t148 != 0U) { NG(); } else { ; }
	
}

void f149(void) {
    	static int16_t x7865 = 0;
	volatile int32_t x7867 = 17;
	int64_t t149 = 3805064331111974LL;

    t149 = (x7865*((x7866>>x7867)&x7868));

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x7929 = 20220U;
	uint16_t x7930 = 3U;
	uint8_t x7931 = 15U;
	uint64_t x7932 = 21134854306828276LLU;

    t150 = (x7929*((x7930>>x7931)&x7932));

    if (t150 != 0LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x8062 = 0;
	volatile int32_t x8064 = INT32_MAX;

    t151 = (x8061*((x8062>>x8063)&x8064));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x8117 = -1LL;
	volatile int8_t x8118 = INT8_MAX;
	uint16_t x8119 = 0U;
	int64_t x8120 = INT64_MIN;
	volatile int64_t t152 = 18151788963275388LL;

    t152 = (x8117*((x8118>>x8119)&x8120));

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x8129 = UINT64_MAX;
	volatile uint16_t x8131 = 12U;
	uint64_t x8132 = UINT64_MAX;
	uint64_t t153 = 395643468LLU;

    t153 = (x8129*((x8130>>x8131)&x8132));

    if (t153 != 18446744073709027329LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static int32_t x8337 = INT32_MIN;
	volatile uint64_t x8338 = 1148295153769075648LLU;
	int64_t x8340 = -1LL;
	uint64_t t154 = 407840984778LLU;

    t154 = (x8337*((x8338>>x8339)&x8340));

    if (t154 != 1122147342376501248LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x8357 = INT8_MAX;
	uint8_t x8359 = 2U;
	int64_t x8360 = INT64_MIN;
	int64_t t155 = 46873LL;

    t155 = (x8357*((x8358>>x8359)&x8360));

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x8389 = 22U;
	uint8_t x8390 = 117U;
	int8_t x8391 = 25;
	uint8_t x8392 = UINT8_MAX;
	static volatile int32_t t156 = 235;

    t156 = (x8389*((x8390>>x8391)&x8392));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x8457 = -44;
	volatile uint8_t x8459 = 11U;
	int8_t x8460 = INT8_MIN;

    t157 = (x8457*((x8458>>x8459)&x8460));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x8466 = INT8_MAX;
	uint8_t x8467 = 25U;
	uint64_t t158 = 3046035063743573LLU;

    t158 = (x8465*((x8466>>x8467)&x8468));

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x8489 = -1LL;
	uint8_t x8490 = 2U;
	uint8_t x8492 = 123U;
	int64_t t159 = -3722758551071LL;

    t159 = (x8489*((x8490>>x8491)&x8492));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x8565 = -1LL;
	int16_t x8566 = INT16_MAX;
	int64_t t160 = 1060742512293464322LL;

    t160 = (x8565*((x8566>>x8567)&x8568));

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint8_t x8677 = 13U;
	uint64_t x8678 = 3695919353943598LLU;
	volatile int8_t x8679 = 1;
	int8_t x8680 = 39;
	volatile uint64_t t161 = 82613407833LLU;

    t161 = (x8677*((x8678>>x8679)&x8680));

    if (t161 != 91LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x8737 = INT8_MAX;
	uint8_t x8739 = 2U;
	volatile uint16_t x8740 = 10U;
	volatile int32_t t162 = -1;

    t162 = (x8737*((x8738>>x8739)&x8740));

    if (t162 != 1270) { NG(); } else { ; }
	
}

void f163(void) {
    	static int8_t x8877 = 1;
	uint16_t x8878 = 44U;
	int8_t x8879 = 0;
	volatile int32_t t163 = 177281;

    t163 = (x8877*((x8878>>x8879)&x8880));

    if (t163 != 8) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x8925 = INT8_MIN;
	int64_t x8926 = 53LL;
	static int8_t x8927 = 35;
	static int64_t t164 = -8047085LL;

    t164 = (x8925*((x8926>>x8927)&x8928));

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static int16_t x8957 = -5;
	volatile uint16_t x8958 = 10U;
	int16_t x8959 = 0;
	static int8_t x8960 = 1;
	static int32_t t165 = 1;

    t165 = (x8957*((x8958>>x8959)&x8960));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x8973 = -26009;
	int64_t x8974 = 165825831LL;
	int8_t x8976 = INT8_MAX;
	volatile int64_t t166 = 170778989309LL;

    t166 = (x8973*((x8974>>x8975)&x8976));

    if (t166 != -1014351LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x8989 = -1LL;
	volatile int8_t x8990 = INT8_MAX;
	uint64_t x8991 = 6LLU;
	int64_t x8992 = -1LL;

    t167 = (x8989*((x8990>>x8991)&x8992));

    if (t167 != -1LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x8993 = -1;
	static volatile uint8_t x8994 = UINT8_MAX;
	uint8_t x8995 = 1U;
	static volatile int16_t x8996 = INT16_MIN;
	int32_t t168 = -35956;

    t168 = (x8993*((x8994>>x8995)&x8996));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x9009 = 169751649590660950LL;
	int64_t x9010 = 3015273LL;
	static volatile uint8_t x9011 = 54U;
	static uint8_t x9012 = 0U;
	volatile int64_t t169 = -244LL;

    t169 = (x9009*((x9010>>x9011)&x9012));

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x9017 = 78551997LLU;
	uint64_t x9018 = 84LLU;
	uint8_t x9019 = 14U;

    t170 = (x9017*((x9018>>x9019)&x9020));

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x9045 = INT8_MIN;
	uint8_t x9047 = 3U;
	int64_t x9048 = -117292LL;
	static volatile int64_t t171 = -99252562209427241LL;

    t171 = (x9045*((x9046>>x9047)&x9048));

    if (t171 != -190976LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint8_t x9262 = 4U;
	uint8_t x9263 = 2U;
	static volatile uint32_t x9264 = 2U;
	uint32_t t172 = 1606U;

    t172 = (x9261*((x9262>>x9263)&x9264));

    if (t172 != 0U) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x9293 = -1;
	int16_t x9294 = INT16_MAX;
	static uint8_t x9295 = 2U;
	volatile int16_t x9296 = INT16_MIN;
	volatile int32_t t173 = 470601;

    t173 = (x9293*((x9294>>x9295)&x9296));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x9397 = -1;
	volatile uint64_t x9398 = 150451133705180LLU;
	uint8_t x9399 = 6U;
	static int64_t x9400 = -1081147689LL;
	uint64_t t174 = 26115229LLU;

    t174 = (x9397*((x9398>>x9399)&x9400));

    if (t174 != 18446741723984395129LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x9401 = -1;
	int16_t x9402 = 31;
	uint8_t x9403 = 10U;
	uint64_t x9404 = UINT64_MAX;

    t175 = (x9401*((x9402>>x9403)&x9404));

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x9433 = INT8_MAX;
	static uint8_t x9435 = 19U;
	volatile int16_t x9436 = -1;
	volatile uint32_t t176 = 162343474U;

    t176 = (x9433*((x9434>>x9435)&x9436));

    if (t176 != 0U) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x9525 = 217U;
	uint64_t x9526 = UINT64_MAX;
	uint8_t x9527 = 39U;
	uint16_t x9528 = 225U;

    t177 = (x9525*((x9526>>x9527)&x9528));

    if (t177 != 48825LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x9533 = INT16_MIN;
	static int8_t x9534 = 0;
	int32_t x9535 = 5;
	uint32_t x9536 = 1368377485U;
	volatile uint32_t t178 = 96135341U;

    t178 = (x9533*((x9534>>x9535)&x9536));

    if (t178 != 0U) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile uint16_t x9653 = UINT16_MAX;
	uint64_t x9654 = 280847888675356LLU;
	static int32_t x9655 = 1;
	static volatile int64_t x9656 = -1LL;

    t179 = (x9653*((x9654>>x9655)&x9656));

    if (t179 != 9202683192169727730LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static int64_t x9717 = INT64_MIN;
	static int8_t x9718 = 9;
	static volatile uint8_t x9720 = UINT8_MAX;
	volatile int64_t t180 = 16757LL;

    t180 = (x9717*((x9718>>x9719)&x9720));

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x9798 = 1;
	int32_t x9800 = INT32_MAX;

    t181 = (x9797*((x9798>>x9799)&x9800));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x9818 = UINT32_MAX;
	uint64_t x9819 = 5LLU;
	int8_t x9820 = -3;
	volatile uint64_t t182 = 436934013333408559LLU;

    t182 = (x9817*((x9818>>x9819)&x9820));

    if (t182 != 18862556418325LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x9829 = -1;
	static volatile uint32_t x9830 = 19127515U;
	uint8_t x9831 = 1U;

    t183 = (x9829*((x9830>>x9831)&x9832));

    if (t183 != 4285403539U) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x9945 = INT16_MIN;
	static volatile int8_t x9946 = 53;
	volatile uint16_t x9947 = 13U;
	int8_t x9948 = 2;
	volatile int32_t t184 = 38;

    t184 = (x9945*((x9946>>x9947)&x9948));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x10037 = 48;
	volatile uint8_t x10038 = 2U;
	volatile uint8_t x10039 = 16U;
	volatile int32_t x10040 = 271;
	int32_t t185 = -4971242;

    t185 = (x10037*((x10038>>x10039)&x10040));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x10057 = 1LLU;
	static uint16_t x10058 = 50U;
	int8_t x10059 = 13;
	uint16_t x10060 = 5U;
	static uint64_t t186 = 112548LLU;

    t186 = (x10057*((x10058>>x10059)&x10060));

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int16_t x10077 = INT16_MIN;
	uint64_t x10078 = UINT64_MAX;
	uint8_t x10079 = 3U;
	volatile uint64_t x10080 = 57930639024LLU;

    t187 = (x10077*((x10078>>x10079)&x10080));

    if (t187 != 18444845802530013184LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x10109 = 1053704;
	volatile int8_t x10110 = INT8_MAX;
	uint32_t x10112 = 972U;

    t188 = (x10109*((x10110>>x10111)&x10112));

    if (t188 != 0U) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x10177 = INT16_MIN;
	volatile uint8_t x10178 = 1U;
	volatile int64_t x10179 = 6LL;
	static uint32_t x10180 = UINT32_MAX;
	uint32_t t189 = 767851U;

    t189 = (x10177*((x10178>>x10179)&x10180));

    if (t189 != 0U) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t x10361 = -67;
	int8_t x10362 = 6;
	uint32_t x10363 = 30U;
	static volatile int64_t x10364 = 26690711873756LL;
	int64_t t190 = 305443736LL;

    t190 = (x10361*((x10362>>x10363)&x10364));

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x10518 = 481LLU;
	uint16_t x10519 = 63U;
	int8_t x10520 = INT8_MIN;

    t191 = (x10517*((x10518>>x10519)&x10520));

    if (t191 != 0LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x10521 = -1;
	int8_t x10522 = INT8_MAX;
	static int16_t x10523 = 1;
	static int8_t x10524 = -1;
	int32_t t192 = 127675602;

    t192 = (x10521*((x10522>>x10523)&x10524));

    if (t192 != -63) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x10537 = UINT16_MAX;
	uint32_t x10538 = UINT32_MAX;
	uint8_t x10539 = 3U;
	int32_t x10540 = INT32_MIN;

    t193 = (x10537*((x10538>>x10539)&x10540));

    if (t193 != 0U) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x10581 = -58170;
	volatile int32_t x10583 = 1;
	uint8_t x10584 = 4U;
	int32_t t194 = -88425;

    t194 = (x10581*((x10582>>x10583)&x10584));

    if (t194 != -232680) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x10597 = 74295350636LLU;
	volatile uint16_t x10598 = 255U;
	uint8_t x10599 = 1U;

    t195 = (x10597*((x10598>>x10599)&x10600));

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int8_t x10683 = 15;
	static int64_t x10684 = INT64_MAX;
	volatile uint64_t t196 = 2124164473007LLU;

    t196 = (x10681*((x10682>>x10683)&x10684));

    if (t196 != 0LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x10793 = UINT64_MAX;
	volatile uint16_t x10794 = UINT16_MAX;
	int8_t x10795 = 0;
	static int8_t x10796 = -1;
	volatile uint64_t t197 = 11086057LLU;

    t197 = (x10793*((x10794>>x10795)&x10796));

    if (t197 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x10813 = -1LL;
	int32_t x10816 = INT32_MAX;

    t198 = (x10813*((x10814>>x10815)&x10816));

    if (t198 != -108415LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x10885 = INT8_MIN;
	static int16_t x10886 = INT16_MAX;
	int64_t x10888 = INT64_MAX;
	int64_t t199 = -4783930392LL;

    t199 = (x10885*((x10886>>x10887)&x10888));

    if (t199 != -384LL) { NG(); } else { ; }
	
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

