
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

int32_t x65 = -1;
int32_t x66 = 239801;
int32_t x121 = -1;
uint16_t x150 = 1U;
int16_t x235 = INT16_MIN;
static uint8_t x286 = 4U;
int8_t x297 = INT8_MIN;
static int16_t x299 = INT16_MIN;
uint64_t x301 = UINT64_MAX;
int8_t x391 = INT8_MIN;
uint32_t x392 = 3U;
static volatile int32_t t8 = -110223669;
int16_t x447 = INT16_MIN;
static volatile uint64_t x478 = 162719281LLU;
uint64_t t10 = 7LLU;
int16_t x618 = -1;
uint64_t x690 = UINT64_MAX;
int64_t x893 = INT64_MIN;
int32_t x895 = -145030266;
int32_t x1018 = 22;
volatile int64_t t19 = -7949850LL;
uint8_t x1151 = UINT8_MAX;
int32_t x1156 = 1;
static int32_t x1331 = INT32_MIN;
static uint32_t x1336 = 3U;
int32_t t25 = -24186;
static int32_t x1366 = 2;
volatile uint64_t t27 = 45385006LLU;
volatile uint32_t x1475 = 29U;
uint16_t x1476 = 5U;
uint32_t x1477 = 0U;
int64_t x1574 = INT64_MAX;
static int32_t x1575 = INT32_MAX;
uint64_t x1582 = 7002954LLU;
volatile int64_t x1595 = INT64_MIN;
uint8_t x1596 = 1U;
int8_t x1791 = INT8_MIN;
static volatile int32_t x2011 = INT32_MIN;
int64_t x2210 = 1431LL;
int16_t x2241 = INT16_MIN;
volatile int32_t x2461 = -441;
int16_t x2517 = INT16_MIN;
uint32_t t47 = 21766U;
static uint8_t x2568 = 5U;
volatile uint64_t x2571 = 921LLU;
volatile int16_t x2607 = INT16_MAX;
int8_t x2608 = 1;
volatile int64_t x2618 = -1LL;
int16_t x2677 = -1;
static volatile int8_t x2699 = 4;
volatile int8_t x2762 = INT8_MAX;
uint32_t t56 = 6139148U;
static volatile int16_t x2858 = INT16_MAX;
uint8_t x2974 = 58U;
static uint64_t x2986 = UINT64_MAX;
static uint64_t x3038 = 46162075526LLU;
static int8_t x3040 = 19;
int16_t x3090 = 33;
static uint8_t x3091 = 21U;
uint8_t x3092 = 5U;
static volatile uint8_t x3144 = 6U;
int32_t x3262 = INT32_MAX;
volatile uint16_t x3264 = 23U;
static volatile uint32_t x3314 = 16689860U;
volatile uint64_t t70 = 6479649804LLU;
uint8_t x3403 = 1U;
volatile uint8_t x3404 = 22U;
volatile int16_t x3603 = INT16_MIN;
volatile uint64_t t74 = 10796547691873LLU;
uint8_t x3633 = 5U;
uint16_t x3636 = 5U;
uint16_t x3860 = 3U;
static volatile uint32_t t77 = 36804962U;
int64_t x3862 = 5192368681LL;
static uint16_t x3864 = 15U;
uint16_t x3885 = UINT16_MAX;
static volatile int8_t x3955 = INT8_MIN;
uint32_t x4002 = 370038734U;
static int32_t x4003 = 197;
volatile uint32_t t82 = 3441U;
uint64_t x4102 = UINT64_MAX;
int8_t x4104 = 0;
volatile uint64_t t84 = 130248LLU;
volatile int16_t x4247 = INT16_MIN;
static volatile uint64_t t88 = 567464137413763505LLU;
int64_t x4425 = -130372524921062LL;
volatile uint32_t x4426 = UINT32_MAX;
static volatile int64_t t89 = 364531LL;
uint32_t x4435 = 4091U;
int32_t x4450 = -22927;
uint16_t x4452 = 3U;
static volatile int64_t t91 = -3514516483LL;
int8_t x4542 = 1;
int32_t t93 = 1;
uint64_t t94 = 974650268LLU;
uint64_t x4842 = 836359551LLU;
volatile int64_t t97 = 3001LL;
volatile int32_t x4986 = INT32_MAX;
int8_t x4987 = 0;
uint64_t x5117 = UINT64_MAX;
int32_t x5120 = 0;
volatile uint32_t x5173 = 800602234U;
uint16_t x5176 = 1U;
uint64_t t100 = 1851834347345269LLU;
static int8_t x5380 = 1;
uint16_t x5383 = 1U;
uint64_t t102 = 4702081424673258LLU;
int64_t x5531 = -1LL;
uint32_t x5535 = UINT32_MAX;
uint8_t x5536 = 5U;
uint64_t x5616 = 1LLU;
static int16_t x5677 = INT16_MAX;
volatile uint64_t t109 = 173391LLU;
static volatile uint64_t t110 = 8248916030LLU;
static uint32_t x5730 = 1U;
volatile int16_t x5731 = INT16_MIN;
uint8_t x5732 = 5U;
uint8_t x5772 = 2U;
static volatile uint64_t t113 = 1232301912897507LLU;
uint64_t x5821 = UINT64_MAX;
int16_t x5917 = -1;
volatile uint8_t x5920 = 1U;
int16_t x5970 = -1;
volatile int32_t t116 = INT32_MIN;
static int32_t t120 = 413859;
uint16_t x6074 = UINT16_MAX;
static uint64_t x6138 = UINT64_MAX;
volatile int16_t x6139 = -100;
uint32_t x6154 = 1U;
uint32_t x6210 = 0U;
int16_t x6211 = INT16_MIN;
static volatile int32_t t125 = INT32_MIN;
static int32_t x6370 = INT32_MAX;
int32_t x6511 = INT32_MIN;
volatile uint16_t x6512 = 8U;
uint8_t x6652 = 1U;
int8_t x6693 = -1;
volatile int8_t x6717 = INT8_MAX;
uint32_t x6720 = 14U;
volatile uint64_t t135 = 166819213677LLU;
static volatile uint64_t t136 = 61511LLU;
int16_t x6836 = 6;
uint64_t t138 = 112986454596460615LLU;
static volatile int8_t x6869 = 5;
uint32_t t139 = 1601U;
int64_t t140 = 75987573628LL;
static uint8_t x6951 = UINT8_MAX;
int64_t t141 = 598057217795912068LL;
uint64_t x7058 = 64689893089829LLU;
int8_t x7060 = 0;
volatile int16_t x7356 = 36;
int16_t x7401 = INT16_MIN;
uint64_t x7402 = UINT64_MAX;
int16_t x7403 = INT16_MIN;
static int32_t x7423 = -1029784;
int32_t x7458 = 3;
volatile int64_t t152 = -229996765040199LL;
int8_t x7557 = INT8_MIN;
int32_t x7573 = -78172;
int8_t x7574 = 2;
uint64_t x7575 = 125423LLU;
int16_t x7743 = -1;
volatile int8_t x7890 = -1;
int8_t x7892 = 2;
volatile int32_t t157 = 1546782;
static volatile int32_t x8003 = INT32_MIN;
volatile uint64_t x8119 = 298710982355435478LLU;
uint32_t x8271 = 116197U;
uint64_t t163 = 2876342LLU;
int16_t x8325 = INT16_MIN;
int8_t x8326 = INT8_MIN;
int8_t x8484 = 3;
static int16_t x8593 = -1;
int8_t x8981 = -10;
uint8_t x8982 = UINT8_MAX;
int16_t x8983 = -1260;
static uint32_t x9090 = UINT32_MAX;
int64_t t174 = 14033936821LL;
volatile uint16_t x9234 = 358U;
uint32_t x9235 = 0U;
uint16_t x9245 = 75U;
int32_t x9247 = INT32_MIN;
int8_t x9297 = INT8_MAX;
uint8_t x9300 = 13U;
static int8_t x9327 = -1;
uint32_t x9328 = 31U;
uint64_t x9506 = 265LLU;
static uint16_t x9508 = 13U;
volatile uint32_t x9562 = 1919U;
static int8_t x9649 = 60;
volatile uint64_t x9651 = 36961918070281744LLU;
static volatile int64_t t184 = 10323762656903LL;
uint16_t x9878 = 597U;
uint16_t x9945 = 209U;
uint32_t x9980 = 3U;
uint32_t x9991 = 27471923U;
static uint32_t x10074 = UINT32_MAX;
uint8_t x10076 = 1U;
int16_t x10190 = INT16_MIN;
volatile uint8_t x10232 = 28U;
int8_t x10325 = INT8_MIN;
int64_t t194 = 3377LL;
static uint16_t x10329 = 6578U;
int32_t x10331 = INT32_MAX;
uint32_t t195 = 5543U;
static uint32_t x10538 = UINT32_MAX;
int64_t x10571 = -32LL;
volatile uint64_t t198 = 264972558372LLU;
volatile uint16_t x10621 = 2865U;


void f0(void) {
    	static volatile uint16_t x45 = 897U;
	int8_t x46 = 0;
	int32_t x47 = -3751368;
	uint8_t x48 = 10U;
	int32_t t0 = 737;

    t0 = (x45+((x46-x47)>>x48));

    if (t0 != 4560) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x67 = -1;
	int8_t x68 = 0;
	volatile int32_t t1 = -3905984;

    t1 = (x65+((x66-x67)>>x68));

    if (t1 != 239801) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x122 = -1;
	int32_t x123 = -1;
	static uint16_t x124 = 4U;
	static volatile int32_t t2 = -12111;

    t2 = (x121+((x122-x123)>>x124));

    if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x149 = UINT32_MAX;
	volatile uint32_t x151 = 304U;
	volatile uint8_t x152 = 2U;
	static uint32_t t3 = 19548507U;

    t3 = (x149+((x150-x151)>>x152));

    if (t3 != 1073741747U) { NG(); } else { ; }
	
}

void f4(void) {
    	static int64_t x233 = -1LL;
	static uint8_t x234 = UINT8_MAX;
	uint16_t x236 = 0U;
	static volatile int64_t t4 = -12544856LL;

    t4 = (x233+((x234-x235)>>x236));

    if (t4 != 33022LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x285 = -55;
	int8_t x287 = -1;
	static uint16_t x288 = 11U;
	int32_t t5 = 2397901;

    t5 = (x285+((x286-x287)>>x288));

    if (t5 != -55) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint16_t x298 = 11923U;
	int8_t x300 = 27;
	static int32_t t6 = 184;

    t6 = (x297+((x298-x299)>>x300));

    if (t6 != -128) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x302 = -92;
	static volatile int16_t x303 = INT16_MIN;
	int32_t x304 = 1;
	uint64_t t7 = 25976602995988LLU;

    t7 = (x301+((x302-x303)>>x304));

    if (t7 != 16337LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint8_t x389 = 68U;
	static uint8_t x390 = 111U;

    t8 = (x389+((x390-x391)>>x392));

    if (t8 != 97) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x445 = 0;
	uint64_t x446 = UINT64_MAX;
	uint32_t x448 = 13U;
	static uint64_t t9 = 1864226LLU;

    t9 = (x445+((x446-x447)>>x448));

    if (t9 != 3LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x477 = 20656507U;
	static int8_t x479 = INT8_MAX;
	volatile int8_t x480 = 44;

    t10 = (x477+((x478-x479)>>x480));

    if (t10 != 20656507LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x617 = -1;
	uint32_t x619 = 69531908U;
	volatile int8_t x620 = 8;
	volatile uint32_t t11 = 59U;

    t11 = (x617+((x618-x619)>>x620));

    if (t11 != 16505605U) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x689 = INT32_MIN;
	int32_t x691 = INT32_MAX;
	int8_t x692 = 7;
	static volatile uint64_t t12 = 277084LLU;

    t12 = (x689+((x690-x691)>>x692));

    if (t12 != 144115185911595008LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x717 = -1;
	int8_t x718 = INT8_MIN;
	volatile int8_t x719 = INT8_MIN;
	uint8_t x720 = 18U;
	int32_t t13 = 68096085;

    t13 = (x717+((x718-x719)>>x720));

    if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x817 = -1;
	int16_t x818 = INT16_MIN;
	uint64_t x819 = 58694458198LLU;
	uint16_t x820 = 1U;
	uint64_t t14 = 1110734226481921194LLU;

    t14 = (x817+((x818-x819)>>x820));

    if (t14 != 9223372007507530324LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x894 = 7U;
	uint16_t x896 = 1U;
	volatile int64_t t15 = 66LL;

    t15 = (x893+((x894-x895)>>x896));

    if (t15 != -9223372036782260672LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x969 = -1;
	int32_t x970 = INT32_MIN;
	volatile int64_t x971 = -238328671367181LL;
	uint8_t x972 = 29U;
	int64_t t16 = 15552084726556806LL;

    t16 = (x969+((x970-x971)>>x972));

    if (t16 != 443916LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static int32_t x989 = INT32_MAX;
	uint32_t x990 = 3U;
	int32_t x991 = 239244;
	volatile int64_t x992 = 29LL;
	uint32_t t17 = 2016828464U;

    t17 = (x989+((x990-x991)>>x992));

    if (t17 != 2147483654U) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x1001 = 0;
	static volatile uint64_t x1002 = UINT64_MAX;
	int16_t x1003 = 10;
	uint32_t x1004 = 2U;
	uint64_t t18 = 58732597610104LLU;

    t18 = (x1001+((x1002-x1003)>>x1004));

    if (t18 != 4611686018427387901LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x1017 = 108U;
	int64_t x1019 = -59LL;
	static int8_t x1020 = 55;

    t19 = (x1017+((x1018-x1019)>>x1020));

    if (t19 != 108LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x1149 = -1;
	uint16_t x1150 = UINT16_MAX;
	int8_t x1152 = 14;
	volatile int32_t t20 = 38897609;

    t20 = (x1149+((x1150-x1151)>>x1152));

    if (t20 != 2) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x1153 = -1;
	volatile uint32_t x1154 = UINT32_MAX;
	uint64_t x1155 = 192987143LLU;
	static uint64_t t21 = 2919621200223041078LLU;

    t21 = (x1153+((x1154-x1155)>>x1156));

    if (t21 != 2050990075LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x1229 = INT8_MIN;
	static int8_t x1230 = -5;
	int16_t x1231 = INT16_MIN;
	static volatile int8_t x1232 = 3;
	int32_t t22 = 1;

    t22 = (x1229+((x1230-x1231)>>x1232));

    if (t22 != 3967) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x1249 = -1LL;
	uint32_t x1250 = 34763463U;
	static uint16_t x1251 = 48U;
	uint16_t x1252 = 3U;
	static volatile int64_t t23 = 1291279634413LL;

    t23 = (x1249+((x1250-x1251)>>x1252));

    if (t23 != 4345425LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int64_t x1329 = -1607LL;
	volatile uint64_t x1330 = UINT64_MAX;
	static int32_t x1332 = 1;
	uint64_t t24 = 4490LLU;

    t24 = (x1329+((x1330-x1331)>>x1332));

    if (t24 != 1073740216LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x1333 = -1;
	uint8_t x1334 = UINT8_MAX;
	static int16_t x1335 = INT16_MIN;

    t25 = (x1333+((x1334-x1335)>>x1336));

    if (t25 != 4126) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x1353 = INT32_MIN;
	int8_t x1354 = -35;
	volatile int16_t x1355 = INT16_MIN;
	uint16_t x1356 = 28U;
	static int32_t t26 = INT32_MIN;

    t26 = (x1353+((x1354-x1355)>>x1356));

    if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x1365 = 121425819759972718LLU;
	static int8_t x1367 = -1;
	int8_t x1368 = 1;

    t27 = (x1365+((x1366-x1367)>>x1368));

    if (t27 != 121425819759972719LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x1473 = INT32_MIN;
	int16_t x1474 = 3;
	uint32_t t28 = 90590884U;

    t28 = (x1473+((x1474-x1475)>>x1476));

    if (t28 != 2281701375U) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint64_t x1478 = 587LLU;
	int32_t x1479 = INT32_MIN;
	int8_t x1480 = 46;
	uint64_t t29 = 24381LLU;

    t29 = (x1477+((x1478-x1479)>>x1480));

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x1561 = INT64_MIN;
	uint8_t x1562 = 15U;
	static int64_t x1563 = -447685818325LL;
	uint8_t x1564 = 0U;
	volatile int64_t t30 = -1LL;

    t30 = (x1561+((x1562-x1563)>>x1564));

    if (t30 != -9223371589168957468LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x1573 = 1470U;
	static int8_t x1576 = 0;
	volatile int64_t t31 = -284349LL;

    t31 = (x1573+((x1574-x1575)>>x1576));

    if (t31 != 9223372034707293630LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x1581 = INT64_MIN;
	int64_t x1583 = -3340LL;
	uint8_t x1584 = 5U;
	volatile uint64_t t32 = 354820440103LLU;

    t32 = (x1581+((x1582-x1583)>>x1584));

    if (t32 != 9223372036854994754LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x1593 = -1;
	static int64_t x1594 = -1LL;
	static volatile int64_t t33 = 4017915076930701083LL;

    t33 = (x1593+((x1594-x1595)>>x1596));

    if (t33 != 4611686018427387902LL) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x1597 = -4;
	uint64_t x1598 = 732733096394537022LLU;
	int8_t x1599 = -1;
	uint16_t x1600 = 0U;
	uint64_t t34 = 187LLU;

    t34 = (x1597+((x1598-x1599)>>x1600));

    if (t34 != 732733096394537019LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x1657 = -7152;
	int32_t x1658 = 13047437;
	int16_t x1659 = -40;
	uint16_t x1660 = 4U;
	volatile int32_t t35 = 247883;

    t35 = (x1657+((x1658-x1659)>>x1660));

    if (t35 != 808315) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x1789 = 4;
	static volatile uint16_t x1790 = 187U;
	static volatile uint8_t x1792 = 19U;
	static volatile int32_t t36 = -17399;

    t36 = (x1789+((x1790-x1791)>>x1792));

    if (t36 != 4) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x1813 = INT16_MIN;
	static int8_t x1814 = INT8_MIN;
	int32_t x1815 = INT32_MIN;
	uint8_t x1816 = 13U;
	volatile int32_t t37 = -57879;

    t37 = (x1813+((x1814-x1815)>>x1816));

    if (t37 != 229375) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x1869 = -1;
	int8_t x1870 = INT8_MAX;
	uint32_t x1871 = 69677U;
	volatile uint8_t x1872 = 0U;
	volatile uint32_t t38 = 13726U;

    t38 = (x1869+((x1870-x1871)>>x1872));

    if (t38 != 4294897745U) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x2005 = 93U;
	static int32_t x2006 = -1;
	volatile int8_t x2007 = -1;
	int16_t x2008 = 0;
	volatile int32_t t39 = -364979841;

    t39 = (x2005+((x2006-x2007)>>x2008));

    if (t39 != 93) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x2009 = 20525U;
	int64_t x2010 = -1LL;
	uint16_t x2012 = 62U;
	int64_t t40 = 1365321787LL;

    t40 = (x2009+((x2010-x2011)>>x2012));

    if (t40 != 20525LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x2089 = 33449300U;
	volatile int32_t x2090 = INT32_MAX;
	uint64_t x2091 = 9232610756062036LLU;
	uint16_t x2092 = 9U;
	uint64_t t41 = 3663060838890455152LLU;

    t41 = (x2089+((x2090-x2091)>>x2092));

    if (t41 != 36010764613724638LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x2141 = -26;
	int8_t x2142 = INT8_MIN;
	uint64_t x2143 = 106031950895301756LLU;
	int16_t x2144 = 2;
	uint64_t t42 = 7617LLU;

    t42 = (x2141+((x2142-x2143)>>x2144));

    if (t42 != 4585178030703562407LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x2173 = INT64_MIN;
	uint16_t x2174 = UINT16_MAX;
	int8_t x2175 = -1;
	uint8_t x2176 = 25U;
	static int64_t t43 = INT64_MIN;

    t43 = (x2173+((x2174-x2175)>>x2176));

    if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x2209 = UINT8_MAX;
	uint64_t x2211 = 0LLU;
	int32_t x2212 = 59;
	uint64_t t44 = 33104028795367LLU;

    t44 = (x2209+((x2210-x2211)>>x2212));

    if (t44 != 255LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x2242 = 10891U;
	uint32_t x2243 = 72336081U;
	volatile uint8_t x2244 = 2U;
	static uint32_t t45 = 2U;

    t45 = (x2241+((x2242-x2243)>>x2244));

    if (t45 != 1055627758U) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x2462 = 5;
	uint64_t x2463 = 2966395138LLU;
	int8_t x2464 = 15;
	volatile uint64_t t46 = 28839099LLU;

    t46 = (x2461+((x2462-x2463)>>x2464));

    if (t46 != 562949953330343LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x2518 = -9992984;
	uint32_t x2519 = UINT32_MAX;
	volatile int8_t x2520 = 1;

    t47 = (x2517+((x2518-x2519)>>x2520));

    if (t47 != 2142454388U) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x2565 = INT64_MIN;
	int64_t x2566 = -1LL;
	volatile int32_t x2567 = -10;
	static volatile int64_t t48 = INT64_MIN;

    t48 = (x2565+((x2566-x2567)>>x2568));

    if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x2569 = -1;
	volatile uint16_t x2570 = 412U;
	uint16_t x2572 = 8U;
	static uint64_t t49 = 32127542455280LLU;

    t49 = (x2569+((x2570-x2571)>>x2572));

    if (t49 != 72057594037927933LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x2605 = INT16_MIN;
	int64_t x2606 = INT64_MAX;
	int64_t t50 = -32093676LL;

    t50 = (x2605+((x2606-x2607)>>x2608));

    if (t50 != 4611686018427338752LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile uint16_t x2617 = 10244U;
	int32_t x2619 = -76215;
	static int32_t x2620 = 2;
	int64_t t51 = -273936656230798LL;

    t51 = (x2617+((x2618-x2619)>>x2620));

    if (t51 != 29297LL) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int8_t x2678 = INT8_MIN;
	uint32_t x2679 = UINT32_MAX;
	volatile uint16_t x2680 = 8U;
	uint32_t t52 = 0U;

    t52 = (x2677+((x2678-x2679)>>x2680));

    if (t52 != 16777214U) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x2697 = -26;
	int64_t x2698 = 12LL;
	volatile uint8_t x2700 = 5U;
	volatile int64_t t53 = 68363252931LL;

    t53 = (x2697+((x2698-x2699)>>x2700));

    if (t53 != -26LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x2761 = INT8_MIN;
	static int64_t x2763 = -1LL;
	uint32_t x2764 = 0U;
	int64_t t54 = -5932529724LL;

    t54 = (x2761+((x2762-x2763)>>x2764));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x2765 = -6061;
	int16_t x2766 = 346;
	uint32_t x2767 = 1U;
	int32_t x2768 = 15;
	volatile uint32_t t55 = 194055785U;

    t55 = (x2765+((x2766-x2767)>>x2768));

    if (t55 != 4294961235U) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x2829 = 22U;
	int32_t x2830 = -1;
	uint32_t x2831 = 8329U;
	volatile int64_t x2832 = 1LL;

    t56 = (x2829+((x2830-x2831)>>x2832));

    if (t56 != 2147479505U) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x2857 = 6099LLU;
	uint16_t x2859 = 120U;
	uint8_t x2860 = 3U;
	volatile uint64_t t57 = 2843030LLU;

    t57 = (x2857+((x2858-x2859)>>x2860));

    if (t57 != 10179LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x2945 = -51177636555LL;
	int64_t x2946 = -1LL;
	int16_t x2947 = -1;
	int8_t x2948 = 12;
	int64_t t58 = -80590LL;

    t58 = (x2945+((x2946-x2947)>>x2948));

    if (t58 != -51177636555LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x2973 = 15887U;
	int16_t x2975 = INT16_MIN;
	int8_t x2976 = 27;
	uint32_t t59 = 1U;

    t59 = (x2973+((x2974-x2975)>>x2976));

    if (t59 != 15887U) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x2985 = -1;
	int64_t x2987 = INT64_MAX;
	static int8_t x2988 = 1;
	uint64_t t60 = 496683660LLU;

    t60 = (x2985+((x2986-x2987)>>x2988));

    if (t60 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x3037 = 22LL;
	int8_t x3039 = INT8_MIN;
	uint64_t t61 = 4503444674539874871LLU;

    t61 = (x3037+((x3038-x3039)>>x3040));

    if (t61 != 88069LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static int32_t x3057 = -1;
	int32_t x3058 = INT32_MAX;
	uint8_t x3059 = 93U;
	int8_t x3060 = 3;
	int32_t t62 = 16097862;

    t62 = (x3057+((x3058-x3059)>>x3060));

    if (t62 != 268435443) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x3089 = UINT32_MAX;
	static uint32_t t63 = UINT32_MAX;

    t63 = (x3089+((x3090-x3091)>>x3092));

    if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	static int16_t x3141 = -1;
	volatile uint8_t x3142 = UINT8_MAX;
	int8_t x3143 = INT8_MIN;
	static int32_t t64 = -5;

    t64 = (x3141+((x3142-x3143)>>x3144));

    if (t64 != 4) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x3173 = UINT16_MAX;
	volatile int16_t x3174 = -1;
	static int8_t x3175 = -13;
	static volatile int8_t x3176 = 5;
	int32_t t65 = 31651;

    t65 = (x3173+((x3174-x3175)>>x3176));

    if (t65 != 65535) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x3257 = -5311LL;
	volatile int32_t x3258 = INT32_MIN;
	uint64_t x3259 = 246LLU;
	static volatile uint16_t x3260 = 52U;
	volatile uint64_t t66 = 22599772LLU;

    t66 = (x3257+((x3258-x3259)>>x3260));

    if (t66 != 18446744073709550400LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint32_t x3261 = 126803214U;
	int64_t x3263 = 1501LL;
	int64_t t67 = 110302605730740548LL;

    t67 = (x3261+((x3262-x3263)>>x3264));

    if (t67 != 126803469LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint32_t x3313 = UINT32_MAX;
	int64_t x3315 = -1083053521LL;
	static uint64_t x3316 = 10LLU;
	int64_t t68 = -1LL;

    t68 = (x3313+((x3314-x3315)>>x3316));

    if (t68 != 4296041263LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x3325 = 7U;
	uint16_t x3326 = 82U;
	int16_t x3327 = -1;
	uint16_t x3328 = 1U;
	volatile int32_t t69 = 1325094;

    t69 = (x3325+((x3326-x3327)>>x3328));

    if (t69 != 48) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x3337 = INT64_MIN;
	uint64_t x3338 = 18698882987618LLU;
	static int32_t x3339 = INT32_MIN;
	volatile int8_t x3340 = 28;

    t70 = (x3337+((x3338-x3339)>>x3340));

    if (t70 != 9223372036854845474LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x3401 = INT16_MIN;
	uint16_t x3402 = UINT16_MAX;
	volatile int32_t t71 = -503998;

    t71 = (x3401+((x3402-x3403)>>x3404));

    if (t71 != -32768) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x3537 = 218;
	uint32_t x3538 = 64322U;
	volatile uint64_t x3539 = UINT64_MAX;
	int8_t x3540 = 51;
	volatile uint64_t t72 = 129197370735871759LLU;

    t72 = (x3537+((x3538-x3539)>>x3540));

    if (t72 != 218LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x3601 = INT16_MIN;
	static int8_t x3602 = -1;
	int32_t x3604 = 11;
	volatile int32_t t73 = -18;

    t73 = (x3601+((x3602-x3603)>>x3604));

    if (t73 != -32753) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x3609 = -3889;
	int64_t x3610 = INT64_MIN;
	uint64_t x3611 = 0LLU;
	int8_t x3612 = 3;

    t74 = (x3609+((x3610-x3611)>>x3612));

    if (t74 != 1152921504606843087LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x3634 = -1LL;
	int8_t x3635 = -7;
	int64_t t75 = -444749LL;

    t75 = (x3633+((x3634-x3635)>>x3636));

    if (t75 != 5LL) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x3741 = -1;
	int8_t x3742 = INT8_MAX;
	int32_t x3743 = -1;
	static uint8_t x3744 = 5U;
	volatile int32_t t76 = 308;

    t76 = (x3741+((x3742-x3743)>>x3744));

    if (t76 != 3) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x3857 = -1;
	int8_t x3858 = 0;
	static uint32_t x3859 = 10857U;

    t77 = (x3857+((x3858-x3859)>>x3860));

    if (t77 != 536869553U) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x3861 = 119U;
	int16_t x3863 = -3278;
	int64_t t78 = 167005LL;

    t78 = (x3861+((x3862-x3863)>>x3864));

    if (t78 != 158577LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x3886 = UINT64_MAX;
	static volatile uint8_t x3887 = 0U;
	uint32_t x3888 = 12U;
	uint64_t t79 = 1022808386246672890LLU;

    t79 = (x3885+((x3886-x3887)>>x3888));

    if (t79 != 4503599627436030LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x3897 = UINT8_MAX;
	static int64_t x3898 = 5454668LL;
	uint64_t x3899 = 1836524LLU;
	int16_t x3900 = 1;
	volatile uint64_t t80 = 438585LLU;

    t80 = (x3897+((x3898-x3899)>>x3900));

    if (t80 != 1809327LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x3953 = 8;
	int32_t x3954 = 417;
	uint8_t x3956 = 6U;
	static volatile int32_t t81 = 1660;

    t81 = (x3953+((x3954-x3955)>>x3956));

    if (t81 != 16) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x4001 = INT16_MIN;
	uint32_t x4004 = 29U;

    t82 = (x4001+((x4002-x4003)>>x4004));

    if (t82 != 4294934528U) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x4021 = 3U;
	uint8_t x4022 = UINT8_MAX;
	static int16_t x4023 = -2;
	uint16_t x4024 = 2U;
	uint32_t t83 = 1958U;

    t83 = (x4021+((x4022-x4023)>>x4024));

    if (t83 != 67U) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x4101 = 15598065559024654LLU;
	static volatile int8_t x4103 = 7;

    t84 = (x4101+((x4102-x4103)>>x4104));

    if (t84 != 15598065559024646LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x4245 = -3;
	int8_t x4246 = -1;
	static int8_t x4248 = 22;
	int32_t t85 = -6991285;

    t85 = (x4245+((x4246-x4247)>>x4248));

    if (t85 != -3) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x4309 = -1;
	static uint64_t x4310 = 214879057331215LLU;
	int64_t x4311 = INT64_MAX;
	volatile uint16_t x4312 = 29U;
	volatile uint64_t t86 = 21284393125136LLU;

    t86 = (x4309+((x4310-x4311)>>x4312));

    if (t86 != 17180269426LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x4405 = INT32_MAX;
	volatile uint32_t x4406 = 749221658U;
	uint16_t x4407 = UINT16_MAX;
	static uint8_t x4408 = 12U;
	uint32_t t87 = 30469983U;

    t87 = (x4405+((x4406-x4407)>>x4408));

    if (t87 != 2147666546U) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint8_t x4409 = UINT8_MAX;
	volatile uint64_t x4410 = 3470901472LLU;
	int8_t x4411 = INT8_MIN;
	uint16_t x4412 = 60U;

    t88 = (x4409+((x4410-x4411)>>x4412));

    if (t88 != 255LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int32_t x4427 = INT32_MIN;
	volatile uint16_t x4428 = 10U;

    t89 = (x4425+((x4426-x4427)>>x4428));

    if (t89 != -130372522823911LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint64_t x4433 = 4121929735LLU;
	int32_t x4434 = 40;
	int64_t x4436 = 1LL;
	static volatile uint64_t t90 = 269718327500879LLU;

    t90 = (x4433+((x4434-x4435)>>x4436));

    if (t90 != 6269411357LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int8_t x4449 = -1;
	static int64_t x4451 = INT64_MIN;

    t91 = (x4449+((x4450-x4451)>>x4452));

    if (t91 != 1152921504606844109LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x4481 = INT16_MIN;
	int16_t x4482 = 145;
	uint8_t x4483 = 2U;
	int8_t x4484 = 4;
	static int32_t t92 = -381025651;

    t92 = (x4481+((x4482-x4483)>>x4484));

    if (t92 != -32760) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x4541 = INT32_MIN;
	int16_t x4543 = INT16_MIN;
	static int32_t x4544 = 12;

    t93 = (x4541+((x4542-x4543)>>x4544));

    if (t93 != -2147483640) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x4553 = INT16_MIN;
	int32_t x4554 = INT32_MIN;
	uint64_t x4555 = UINT64_MAX;
	uint16_t x4556 = 26U;

    t94 = (x4553+((x4554-x4555)>>x4556));

    if (t94 != 274877874144LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint64_t x4561 = 16041697277896923LLU;
	static uint32_t x4562 = 55202U;
	uint8_t x4563 = UINT8_MAX;
	uint8_t x4564 = 19U;
	volatile uint64_t t95 = 2521173136680172973LLU;

    t95 = (x4561+((x4562-x4563)>>x4564));

    if (t95 != 16041697277896923LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x4841 = INT64_MIN;
	int16_t x4843 = 3529;
	uint8_t x4844 = 17U;
	volatile uint64_t t96 = 2174138463016233LLU;

    t96 = (x4841+((x4842-x4843)>>x4844));

    if (t96 != 9223372036854782188LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x4953 = INT32_MIN;
	static int8_t x4954 = -1;
	static int64_t x4955 = -6792896LL;
	uint8_t x4956 = 4U;

    t97 = (x4953+((x4954-x4955)>>x4956));

    if (t97 != -2147059093LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x4985 = INT16_MIN;
	static uint16_t x4988 = 3U;
	int32_t t98 = 45716;

    t98 = (x4985+((x4986-x4987)>>x4988));

    if (t98 != 268402687) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x5118 = -739;
	uint64_t x5119 = 3LLU;
	uint64_t t99 = 9068104343234LLU;

    t99 = (x5117+((x5118-x5119)>>x5120));

    if (t99 != 18446744073709550873LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x5174 = 26598LLU;
	uint64_t x5175 = 44483657241411LLU;

    t100 = (x5173+((x5174-x5175)>>x5176));

    if (t100 != 9223349795826770635LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x5377 = 62LLU;
	uint32_t x5378 = UINT32_MAX;
	int16_t x5379 = -1;
	volatile uint64_t t101 = 49617955784940LLU;

    t101 = (x5377+((x5378-x5379)>>x5380));

    if (t101 != 62LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x5381 = 2034495308344171LLU;
	static uint8_t x5382 = 27U;
	volatile int8_t x5384 = 1;

    t102 = (x5381+((x5382-x5383)>>x5384));

    if (t102 != 2034495308344184LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x5529 = 7;
	static uint16_t x5530 = 5U;
	static int8_t x5532 = 0;
	volatile int64_t t103 = 396LL;

    t103 = (x5529+((x5530-x5531)>>x5532));

    if (t103 != 13LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint16_t x5533 = UINT16_MAX;
	int8_t x5534 = INT8_MAX;
	uint32_t t104 = 6447497U;

    t104 = (x5533+((x5534-x5535)>>x5536));

    if (t104 != 65539U) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x5565 = UINT64_MAX;
	int16_t x5566 = INT16_MAX;
	int16_t x5567 = 4;
	uint16_t x5568 = 15U;
	static uint64_t t105 = UINT64_MAX;

    t105 = (x5565+((x5566-x5567)>>x5568));

    if (t105 != UINT64_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x5613 = INT16_MIN;
	uint32_t x5614 = 6U;
	static int8_t x5615 = 3;
	static volatile uint32_t t106 = 0U;

    t106 = (x5613+((x5614-x5615)>>x5616));

    if (t106 != 4294934529U) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x5678 = 7793088173023LLU;
	int16_t x5679 = INT16_MAX;
	static uint32_t x5680 = 1U;
	volatile uint64_t t107 = 35672196588899815LLU;

    t107 = (x5677+((x5678-x5679)>>x5680));

    if (t107 != 3896544102895LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint16_t x5689 = 52U;
	uint64_t x5690 = 791095581460172LLU;
	int64_t x5691 = INT64_MIN;
	static uint8_t x5692 = 29U;
	uint64_t t108 = 5932084695979988836LLU;

    t108 = (x5689+((x5690-x5691)>>x5692));

    if (t108 != 17181342766LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x5705 = -13;
	uint16_t x5706 = 22U;
	static uint64_t x5707 = 1030546588009977271LLU;
	int16_t x5708 = 3;

    t109 = (x5705+((x5706-x5707)>>x5708));

    if (t109 != 2177024685712446782LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x5717 = INT16_MIN;
	volatile int32_t x5718 = INT32_MIN;
	uint64_t x5719 = 21345LLU;
	int16_t x5720 = 10;

    t110 = (x5717+((x5718-x5719)>>x5720));

    if (t110 != 18014398507352043LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x5729 = INT16_MAX;
	uint32_t t111 = 167U;

    t111 = (x5729+((x5730-x5731)>>x5732));

    if (t111 != 33791U) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x5769 = -1LL;
	static int32_t x5770 = -1;
	static volatile int8_t x5771 = -1;
	volatile int64_t t112 = 465150LL;

    t112 = (x5769+((x5770-x5771)>>x5772));

    if (t112 != -1LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x5785 = INT8_MIN;
	static int16_t x5786 = -1;
	volatile uint64_t x5787 = 981006LLU;
	uint8_t x5788 = 22U;

    t113 = (x5785+((x5786-x5787)>>x5788));

    if (t113 != 4398046510975LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x5822 = 63104035LL;
	int32_t x5823 = 20503;
	volatile uint8_t x5824 = 10U;
	volatile uint64_t t114 = 853969014933897LLU;

    t114 = (x5821+((x5822-x5823)>>x5824));

    if (t114 != 61604LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x5918 = UINT8_MAX;
	int8_t x5919 = INT8_MAX;
	volatile int32_t t115 = 7;

    t115 = (x5917+((x5918-x5919)>>x5920));

    if (t115 != 63) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x5969 = INT32_MIN;
	int16_t x5971 = -1;
	static uint8_t x5972 = 1U;

    t116 = (x5969+((x5970-x5971)>>x5972));

    if (t116 != INT32_MIN) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x5973 = INT64_MIN;
	uint8_t x5974 = UINT8_MAX;
	static volatile int64_t x5975 = -42789530LL;
	uint8_t x5976 = 11U;
	volatile int64_t t117 = 47049736LL;

    t117 = (x5973+((x5974-x5975)>>x5976));

    if (t117 != -9223372036854754915LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile uint8_t x5985 = 28U;
	volatile uint32_t x5986 = 43906U;
	int16_t x5987 = INT16_MIN;
	int8_t x5988 = 0;
	volatile uint32_t t118 = 5675U;

    t118 = (x5985+((x5986-x5987)>>x5988));

    if (t118 != 76702U) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x6005 = 40777486;
	uint64_t x6006 = 1309354588197LLU;
	volatile int8_t x6007 = 1;
	int8_t x6008 = 3;
	uint64_t t119 = 14950022LLU;

    t119 = (x6005+((x6006-x6007)>>x6008));

    if (t119 != 163710101010LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x6017 = INT8_MAX;
	volatile uint16_t x6018 = 0U;
	int8_t x6019 = 0;
	volatile int8_t x6020 = 29;

    t120 = (x6017+((x6018-x6019)>>x6020));

    if (t120 != 127) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x6073 = 861291278LLU;
	int16_t x6075 = INT16_MIN;
	volatile uint8_t x6076 = 1U;
	static uint64_t t121 = 18862852618248LLU;

    t121 = (x6073+((x6074-x6075)>>x6076));

    if (t121 != 861340429LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x6137 = 0U;
	static uint8_t x6140 = 4U;
	uint64_t t122 = 49898989482908LLU;

    t122 = (x6137+((x6138-x6139)>>x6140));

    if (t122 != 6LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x6153 = INT64_MIN;
	int8_t x6155 = INT8_MIN;
	uint8_t x6156 = 1U;
	volatile int64_t t123 = 525212057792824LL;

    t123 = (x6153+((x6154-x6155)>>x6156));

    if (t123 != -9223372036854775744LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int64_t x6209 = -1LL;
	volatile uint8_t x6212 = 15U;
	int64_t t124 = 254998543451526LL;

    t124 = (x6209+((x6210-x6211)>>x6212));

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x6257 = INT32_MIN;
	volatile uint8_t x6258 = 102U;
	static uint8_t x6259 = 33U;
	static uint16_t x6260 = 14U;

    t125 = (x6257+((x6258-x6259)>>x6260));

    if (t125 != INT32_MIN) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x6305 = INT8_MAX;
	int64_t x6306 = 297032004377LL;
	static uint64_t x6307 = 51215629LLU;
	static uint64_t x6308 = 6LLU;
	volatile uint64_t t126 = 25474701179855LLU;

    t126 = (x6305+((x6306-x6307)>>x6308));

    if (t126 != 4640324951LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x6369 = -1;
	int16_t x6371 = INT16_MAX;
	int8_t x6372 = 6;
	int32_t t127 = -101;

    t127 = (x6369+((x6370-x6371)>>x6372));

    if (t127 != 33553919) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int8_t x6509 = 8;
	uint32_t x6510 = 100101U;
	uint32_t t128 = 1U;

    t128 = (x6509+((x6510-x6511)>>x6512));

    if (t128 != 8389007U) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x6549 = INT8_MIN;
	volatile int32_t x6550 = 400;
	int16_t x6551 = INT16_MIN;
	static int8_t x6552 = 0;
	volatile int32_t t129 = 106;

    t129 = (x6549+((x6550-x6551)>>x6552));

    if (t129 != 33040) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x6613 = -1;
	volatile int8_t x6614 = 2;
	int16_t x6615 = INT16_MIN;
	uint64_t x6616 = 10LLU;
	volatile int32_t t130 = 5;

    t130 = (x6613+((x6614-x6615)>>x6616));

    if (t130 != 31) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint16_t x6625 = 27U;
	int8_t x6626 = INT8_MAX;
	static uint32_t x6627 = UINT32_MAX;
	volatile uint8_t x6628 = 1U;
	uint32_t t131 = 0U;

    t131 = (x6625+((x6626-x6627)>>x6628));

    if (t131 != 91U) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x6649 = INT8_MIN;
	int64_t x6650 = INT64_MAX;
	uint64_t x6651 = 455374789516LLU;
	uint64_t t132 = 19198LLU;

    t132 = (x6649+((x6650-x6651)>>x6652));

    if (t132 != 4611685790739993017LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x6673 = -1;
	uint32_t x6674 = UINT32_MAX;
	static volatile int32_t x6675 = INT32_MIN;
	uint8_t x6676 = 0U;
	volatile uint32_t t133 = 8U;

    t133 = (x6673+((x6674-x6675)>>x6676));

    if (t133 != 2147483646U) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x6694 = 497599441617188144LLU;
	volatile int8_t x6695 = INT8_MAX;
	uint8_t x6696 = 13U;
	uint64_t t134 = 1LLU;

    t134 = (x6693+((x6694-x6695)>>x6696));

    if (t134 != 60742119338034LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x6718 = 1963U;
	uint64_t x6719 = 28641371146059036LLU;

    t135 = (x6717+((x6718-x6719)>>x6720));

    if (t135 != 1124151776279637LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x6801 = -16246;
	uint64_t x6802 = UINT64_MAX;
	int64_t x6803 = 3141039303559LL;
	volatile uint8_t x6804 = 1U;

    t136 = (x6801+((x6802-x6803)>>x6804));

    if (t136 != 9223370466335107782LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x6833 = -2;
	static int8_t x6834 = INT8_MAX;
	static uint8_t x6835 = 5U;
	int32_t t137 = 0;

    t137 = (x6833+((x6834-x6835)>>x6836));

    if (t137 != -1) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x6857 = -383012396;
	uint16_t x6858 = 0U;
	uint64_t x6859 = UINT64_MAX;
	int64_t x6860 = 19LL;

    t138 = (x6857+((x6858-x6859)>>x6860));

    if (t138 != 18446744073326539220LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile uint32_t x6870 = 1569U;
	uint16_t x6871 = 490U;
	static uint64_t x6872 = 12LLU;

    t139 = (x6869+((x6870-x6871)>>x6872));

    if (t139 != 5U) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x6945 = -241692;
	int8_t x6946 = -1;
	static volatile int64_t x6947 = -1LL;
	int16_t x6948 = 1;

    t140 = (x6945+((x6946-x6947)>>x6948));

    if (t140 != -241692LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x6949 = 225976679357LL;
	int16_t x6950 = 6659;
	static uint64_t x6952 = 0LLU;

    t141 = (x6949+((x6950-x6951)>>x6952));

    if (t141 != 225976685761LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x6969 = UINT16_MAX;
	uint64_t x6970 = 256562439314000174LLU;
	int32_t x6971 = INT32_MIN;
	uint16_t x6972 = 9U;
	uint64_t t142 = 216778130LLU;

    t142 = (x6969+((x6970-x6971)>>x6972));

    if (t142 != 501098518544995LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int64_t x7057 = -1LL;
	volatile int32_t x7059 = INT32_MIN;
	static volatile uint64_t t143 = 1267146034192727LLU;

    t143 = (x7057+((x7058-x7059)>>x7060));

    if (t143 != 64692040573476LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint16_t x7169 = 823U;
	volatile int16_t x7170 = INT16_MIN;
	volatile uint64_t x7171 = UINT64_MAX;
	uint8_t x7172 = 9U;
	volatile uint64_t t144 = 2200LLU;

    t144 = (x7169+((x7170-x7171)>>x7172));

    if (t144 != 36028797018964727LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x7237 = 8U;
	int32_t x7238 = -19;
	uint64_t x7239 = UINT64_MAX;
	static volatile uint32_t x7240 = 11U;
	static volatile uint64_t t145 = 311104951LLU;

    t145 = (x7237+((x7238-x7239)>>x7240));

    if (t145 != 9007199254740999LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x7317 = INT64_MIN;
	static int8_t x7318 = INT8_MIN;
	int64_t x7319 = -4273232993LL;
	volatile uint8_t x7320 = 25U;
	int64_t t146 = 3399571113170985LL;

    t146 = (x7317+((x7318-x7319)>>x7320));

    if (t146 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static int8_t x7333 = -1;
	int32_t x7334 = 3703;
	volatile int16_t x7335 = 117;
	int32_t x7336 = 0;
	int32_t t147 = 5;

    t147 = (x7333+((x7334-x7335)>>x7336));

    if (t147 != 3585) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x7353 = 0LLU;
	int64_t x7354 = 133459031344LL;
	int16_t x7355 = INT16_MIN;
	static uint64_t t148 = 228LLU;

    t148 = (x7353+((x7354-x7355)>>x7356));

    if (t148 != 1LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x7404 = 0;
	uint64_t t149 = UINT64_MAX;

    t149 = (x7401+((x7402-x7403)>>x7404));

    if (t149 != UINT64_MAX) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x7421 = 17U;
	uint32_t x7422 = 3U;
	uint8_t x7424 = 7U;
	static volatile uint32_t t150 = 1U;

    t150 = (x7421+((x7422-x7423)>>x7424));

    if (t150 != 8062U) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x7457 = 147567112U;
	uint32_t x7459 = 392U;
	uint8_t x7460 = 11U;
	volatile uint32_t t151 = 62254U;

    t151 = (x7457+((x7458-x7459)>>x7460));

    if (t151 != 149664263U) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x7525 = INT16_MIN;
	int64_t x7526 = 54442LL;
	int16_t x7527 = -1;
	volatile uint8_t x7528 = 3U;

    t152 = (x7525+((x7526-x7527)>>x7528));

    if (t152 != -25963LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x7558 = UINT32_MAX;
	volatile uint8_t x7559 = 50U;
	volatile uint8_t x7560 = 15U;
	static uint32_t t153 = 6U;

    t153 = (x7557+((x7558-x7559)>>x7560));

    if (t153 != 130943U) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint16_t x7576 = 3U;
	volatile uint64_t t154 = 80867650LLU;

    t154 = (x7573+((x7574-x7575)>>x7576));

    if (t154 != 2305843009213600102LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x7665 = INT16_MAX;
	int64_t x7666 = -1LL;
	int64_t x7667 = INT64_MIN;
	static volatile uint8_t x7668 = 1U;
	static int64_t t155 = -302438405253302LL;

    t155 = (x7665+((x7666-x7667)>>x7668));

    if (t155 != 4611686018427420670LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x7741 = 2848388676318LLU;
	uint64_t x7742 = 208208879152LLU;
	uint32_t x7744 = 61U;
	volatile uint64_t t156 = 6LLU;

    t156 = (x7741+((x7742-x7743)>>x7744));

    if (t156 != 2848388676318LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x7889 = -1;
	int32_t x7891 = INT32_MIN;

    t157 = (x7889+((x7890-x7891)>>x7892));

    if (t157 != 536870910) { NG(); } else { ; }
	
}

void f158(void) {
    	static int64_t x8001 = 4134656441885LL;
	int16_t x8002 = -21;
	static int64_t x8004 = 0LL;
	volatile int64_t t158 = 122LL;

    t158 = (x8001+((x8002-x8003)>>x8004));

    if (t158 != 4136803925512LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x8009 = INT16_MIN;
	int64_t x8010 = 169423LL;
	volatile int32_t x8011 = INT32_MIN;
	int8_t x8012 = 0;
	volatile int64_t t159 = -12621659758604LL;

    t159 = (x8009+((x8010-x8011)>>x8012));

    if (t159 != 2147620303LL) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint32_t x8029 = UINT32_MAX;
	uint16_t x8030 = 6U;
	uint32_t x8031 = 1891531598U;
	static uint8_t x8032 = 4U;
	uint32_t t160 = 481340U;

    t160 = (x8029+((x8030-x8031)>>x8032));

    if (t160 != 150214730U) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x8117 = INT64_MIN;
	uint32_t x8118 = 213734U;
	uint16_t x8120 = 26U;
	uint64_t t161 = 83624402990LLU;

    t161 = (x8117+((x8118-x8119)>>x8120));

    if (t161 != 9223372307281542253LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x8269 = UINT8_MAX;
	volatile int64_t x8270 = INT64_MAX;
	uint8_t x8272 = 9U;
	volatile int64_t t162 = 1LL;

    t162 = (x8269+((x8270-x8271)>>x8272));

    if (t162 != 18014398509482012LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x8285 = INT8_MIN;
	uint64_t x8286 = 185LLU;
	static int32_t x8287 = INT32_MIN;
	int8_t x8288 = 0;

    t163 = (x8285+((x8286-x8287)>>x8288));

    if (t163 != 2147483705LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x8327 = INT64_MIN;
	int8_t x8328 = 62;
	volatile int64_t t164 = 7425LL;

    t164 = (x8325+((x8326-x8327)>>x8328));

    if (t164 != -32767LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x8453 = 13104540336627746LLU;
	uint64_t x8454 = 31977LLU;
	uint8_t x8455 = 28U;
	uint8_t x8456 = 8U;
	static volatile uint64_t t165 = 1068252054LLU;

    t165 = (x8453+((x8454-x8455)>>x8456));

    if (t165 != 13104540336627870LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint32_t x8481 = 6U;
	int32_t x8482 = -20447763;
	volatile uint32_t x8483 = 3U;
	uint32_t t166 = 35U;

    t166 = (x8481+((x8482-x8483)>>x8484));

    if (t166 != 534314947U) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint8_t x8585 = 1U;
	uint64_t x8586 = 1747674005389LLU;
	volatile int8_t x8587 = 51;
	volatile int8_t x8588 = 9;
	static uint64_t t167 = 4376463089534319935LLU;

    t167 = (x8585+((x8586-x8587)>>x8588));

    if (t167 != 3413425792LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x8594 = UINT8_MAX;
	int8_t x8595 = INT8_MIN;
	volatile uint8_t x8596 = 3U;
	volatile int32_t t168 = 30181;

    t168 = (x8593+((x8594-x8595)>>x8596));

    if (t168 != 46) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x8597 = INT8_MAX;
	uint8_t x8598 = 40U;
	uint64_t x8599 = UINT64_MAX;
	static volatile int16_t x8600 = 0;
	volatile uint64_t t169 = 83726255298434LLU;

    t169 = (x8597+((x8598-x8599)>>x8600));

    if (t169 != 168LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x8941 = 3;
	int16_t x8942 = INT16_MAX;
	static int32_t x8943 = -1;
	volatile uint64_t x8944 = 8LLU;
	int32_t t170 = 99971;

    t170 = (x8941+((x8942-x8943)>>x8944));

    if (t170 != 131) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x8965 = -1;
	uint16_t x8966 = 72U;
	uint32_t x8967 = 965022906U;
	uint8_t x8968 = 17U;
	uint32_t t171 = 545U;

    t171 = (x8965+((x8966-x8967)>>x8968));

    if (t171 != 25404U) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x8984 = 3;
	volatile int32_t t172 = 86;

    t172 = (x8981+((x8982-x8983)>>x8984));

    if (t172 != 179) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x9089 = 1;
	volatile uint32_t x9091 = 39386364U;
	uint8_t x9092 = 3U;
	volatile uint32_t t173 = 1549U;

    t173 = (x9089+((x9090-x9091)>>x9092));

    if (t173 != 531947617U) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x9217 = INT8_MIN;
	int64_t x9218 = INT64_MAX;
	int64_t x9219 = INT64_MAX;
	int8_t x9220 = 42;

    t174 = (x9217+((x9218-x9219)>>x9220));

    if (t174 != -128LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x9233 = INT8_MIN;
	static int8_t x9236 = 4;
	uint32_t t175 = 123U;

    t175 = (x9233+((x9234-x9235)>>x9236));

    if (t175 != 4294967190U) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x9246 = 65831795018LLU;
	volatile uint8_t x9248 = 1U;
	uint64_t t176 = 1772224070LLU;

    t176 = (x9245+((x9246-x9247)>>x9248));

    if (t176 != 33989639408LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int16_t x9298 = INT16_MIN;
	uint32_t x9299 = UINT32_MAX;
	uint32_t t177 = 478U;

    t177 = (x9297+((x9298-x9299)>>x9300));

    if (t177 != 524411U) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x9325 = INT32_MIN;
	uint8_t x9326 = 3U;
	static volatile int32_t t178 = INT32_MIN;

    t178 = (x9325+((x9326-x9327)>>x9328));

    if (t178 != INT32_MIN) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x9337 = -1;
	uint32_t x9338 = UINT32_MAX;
	static uint32_t x9339 = 1824U;
	static volatile uint8_t x9340 = 1U;
	uint32_t t179 = 0U;

    t179 = (x9337+((x9338-x9339)>>x9340));

    if (t179 != 2147482734U) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x9497 = -1;
	uint16_t x9498 = UINT16_MAX;
	int8_t x9499 = -1;
	volatile int8_t x9500 = 7;
	volatile int32_t t180 = -191;

    t180 = (x9497+((x9498-x9499)>>x9500));

    if (t180 != 511) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x9505 = -1;
	int8_t x9507 = -1;
	uint64_t t181 = UINT64_MAX;

    t181 = (x9505+((x9506-x9507)>>x9508));

    if (t181 != UINT64_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x9561 = 15;
	uint16_t x9563 = UINT16_MAX;
	uint8_t x9564 = 0U;
	volatile uint32_t t182 = 141331U;

    t182 = (x9561+((x9562-x9563)>>x9564));

    if (t182 != 4294903695U) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x9650 = INT32_MAX;
	uint8_t x9652 = 9U;
	static volatile uint64_t t183 = 1140265913190835346LLU;

    t183 = (x9649+((x9650-x9651)>>x9652));

    if (t183 != 35956605776927312LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x9793 = INT16_MIN;
	int8_t x9794 = -1;
	int64_t x9795 = -1LL;
	uint8_t x9796 = 3U;

    t184 = (x9793+((x9794-x9795)>>x9796));

    if (t184 != -32768LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x9845 = INT32_MAX;
	int16_t x9846 = -1;
	uint32_t x9847 = 114752650U;
	uint8_t x9848 = 3U;
	volatile uint32_t t185 = 58694U;

    t185 = (x9845+((x9846-x9847)>>x9848));

    if (t185 != 2670010477U) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint32_t x9877 = 46U;
	int8_t x9879 = -1;
	volatile int8_t x9880 = 5;
	volatile uint32_t t186 = 21264U;

    t186 = (x9877+((x9878-x9879)>>x9880));

    if (t186 != 64U) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint64_t x9946 = UINT64_MAX;
	static volatile int32_t x9947 = -8378;
	volatile uint32_t x9948 = 40U;
	uint64_t t187 = 212982844947360463LLU;

    t187 = (x9945+((x9946-x9947)>>x9948));

    if (t187 != 209LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x9977 = -1;
	uint8_t x9978 = UINT8_MAX;
	int8_t x9979 = INT8_MIN;
	static volatile int32_t t188 = 0;

    t188 = (x9977+((x9978-x9979)>>x9980));

    if (t188 != 46) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x9989 = INT8_MIN;
	int16_t x9990 = INT16_MIN;
	int32_t x9992 = 0;
	static uint32_t t189 = 52U;

    t189 = (x9989+((x9990-x9991)>>x9992));

    if (t189 != 4267462477U) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x10053 = INT64_MAX;
	static uint64_t x10054 = 5723201551047LLU;
	int16_t x10055 = -1;
	volatile int8_t x10056 = 0;
	volatile uint64_t t190 = 435982154445208771LLU;

    t190 = (x10053+((x10054-x10055)>>x10056));

    if (t190 != 9223377760056326855LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int64_t x10073 = -776LL;
	uint64_t x10075 = 3LLU;
	volatile uint64_t t191 = 5100562506431891LLU;

    t191 = (x10073+((x10074-x10075)>>x10076));

    if (t191 != 2147482870LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x10189 = 37;
	uint64_t x10191 = 2851LLU;
	uint16_t x10192 = 42U;
	static volatile uint64_t t192 = 23540203214998124LLU;

    t192 = (x10189+((x10190-x10191)>>x10192));

    if (t192 != 4194340LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int64_t x10229 = INT64_MIN;
	int64_t x10230 = 11374390894547LL;
	uint8_t x10231 = UINT8_MAX;
	volatile int64_t t193 = 9872138867074673LL;

    t193 = (x10229+((x10230-x10231)>>x10232));

    if (t193 != -9223372036854733436LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x10326 = 825219089LL;
	volatile int16_t x10327 = -1389;
	int8_t x10328 = 0;

    t194 = (x10325+((x10326-x10327)>>x10328));

    if (t194 != 825220350LL) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint32_t x10330 = UINT32_MAX;
	int8_t x10332 = 0;

    t195 = (x10329+((x10330-x10331)>>x10332));

    if (t195 != 2147490226U) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x10401 = INT32_MIN;
	int16_t x10402 = -36;
	static uint64_t x10403 = UINT64_MAX;
	uint16_t x10404 = 1U;
	uint64_t t196 = 229LLU;

    t196 = (x10401+((x10402-x10403)>>x10404));

    if (t196 != 9223372034707292142LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x10537 = -1;
	static int32_t x10539 = -700529924;
	volatile uint16_t x10540 = 1U;
	uint32_t t197 = 22323U;

    t197 = (x10537+((x10538-x10539)>>x10540));

    if (t197 != 350264960U) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x10569 = 503LLU;
	int32_t x10570 = 1933501;
	int8_t x10572 = 1;

    t198 = (x10569+((x10570-x10571)>>x10572));

    if (t198 != 967269LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x10622 = INT16_MIN;
	int32_t x10623 = INT32_MIN;
	static uint32_t x10624 = 9U;
	int32_t t199 = 165;

    t199 = (x10621+((x10622-x10623)>>x10624));

    if (t199 != 4197105) { NG(); } else { ; }
	
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

