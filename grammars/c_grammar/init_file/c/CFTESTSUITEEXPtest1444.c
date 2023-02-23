
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

uint32_t x9 = 1U;
int32_t x26 = -1265;
volatile int64_t x85 = -1LL;
uint64_t x86 = 21009LLU;
static uint64_t x87 = UINT64_MAX;
static volatile int64_t t3 = -5632311281LL;
volatile int16_t x94 = INT16_MIN;
static int8_t x95 = 3;
uint16_t x96 = 11U;
static volatile uint16_t x149 = 4779U;
int32_t x151 = INT32_MIN;
int16_t x220 = 0;
int32_t x271 = -1;
uint32_t t8 = 18U;
static volatile uint64_t t9 = 87313LLU;
int8_t x351 = INT8_MIN;
static volatile uint8_t x352 = 28U;
static int16_t x360 = 3;
int64_t x437 = 16158689LL;
int64_t x499 = 54029LL;
static int32_t t16 = 351904;
uint64_t x567 = UINT64_MAX;
static int64_t x609 = -3396240977009LL;
volatile uint16_t x631 = UINT16_MAX;
uint32_t t20 = UINT32_MAX;
static volatile int32_t t21 = -2852;
int16_t x766 = INT16_MIN;
int32_t x767 = -1;
volatile int32_t t24 = -45191206;
static int32_t t25 = -6;
static uint32_t x1013 = UINT32_MAX;
int32_t x1015 = INT32_MIN;
volatile int32_t x1031 = INT32_MIN;
int16_t x1050 = INT16_MAX;
int8_t x1052 = 3;
int32_t x1093 = -1;
uint64_t x1095 = 422LLU;
int8_t x1096 = 2;
volatile uint8_t x1100 = 4U;
uint16_t x1164 = 1U;
volatile uint16_t x1185 = UINT16_MAX;
int16_t x1186 = -1;
uint32_t x1187 = 7U;
static uint8_t x1208 = 2U;
static int32_t t37 = INT32_MIN;
volatile uint64_t x1233 = UINT64_MAX;
static int8_t x1234 = INT8_MAX;
static volatile int64_t x1236 = 4LL;
uint64_t x1245 = 783LLU;
uint16_t x1377 = UINT16_MAX;
uint32_t x1378 = UINT32_MAX;
uint16_t x1379 = 50U;
static uint16_t x1380 = 19U;
uint64_t x1393 = 1011082461551LLU;
uint32_t x1396 = 4U;
int32_t x1462 = -224;
int8_t x1508 = 0;
int16_t x1516 = 15;
int16_t x1553 = -5;
int64_t x1554 = INT64_MIN;
int8_t x1569 = -26;
int8_t x1634 = -1;
volatile uint8_t x1635 = UINT8_MAX;
int64_t x1809 = INT64_MIN;
volatile uint16_t x2007 = 26011U;
static uint8_t x2008 = 3U;
static int8_t x2042 = -1;
int32_t x2059 = INT32_MAX;
uint16_t x2106 = 27U;
int64_t t62 = INT64_MAX;
uint64_t x2246 = 392050LLU;
int64_t x2248 = 0LL;
volatile int32_t t67 = 2201;
uint8_t x2252 = 6U;
static uint8_t x2317 = UINT8_MAX;
int8_t x2320 = 0;
int32_t x2343 = 371734;
int32_t x2549 = 166348;
int16_t x2602 = 0;
uint16_t x2603 = 1831U;
volatile int16_t x2805 = INT16_MAX;
static int16_t x2807 = -218;
int32_t t78 = -82492910;
int16_t x2929 = -14;
uint32_t x2944 = 1U;
int64_t x3001 = -1LL;
static uint64_t x3105 = UINT64_MAX;
int16_t x3108 = 2;
static int8_t x3113 = -2;
int8_t x3116 = 0;
volatile int64_t x3202 = INT64_MIN;
uint8_t x3204 = 2U;
int64_t t92 = INT64_MAX;
uint16_t x3336 = 5U;
volatile int32_t t93 = 494339;
uint8_t x3352 = 0U;
int8_t x3613 = 1;
static uint8_t x3616 = 4U;
int32_t t100 = 7928014;
int8_t x3704 = 14;
int32_t x3705 = 114751282;
uint64_t x3745 = 5140371329278723435LLU;
int32_t x3746 = INT32_MIN;
uint8_t x3748 = 1U;
uint64_t t104 = 927302942LLU;
int32_t x3751 = -3678;
int32_t t106 = -3859;
static int16_t x3849 = INT16_MIN;
static int16_t x3852 = 2;
int32_t t107 = 24;
static int32_t x3966 = -60879;
uint64_t x3968 = 7LLU;
static int32_t t109 = 487;
uint32_t x3970 = 2100812U;
volatile int32_t t110 = 103845;
int32_t x4046 = 1;
int8_t x4152 = 0;
int32_t x4327 = -61408;
static int8_t x4381 = INT8_MIN;
int8_t x4415 = 3;
volatile int16_t x4441 = INT16_MIN;
int64_t x4442 = INT64_MIN;
int8_t x4620 = 0;
int64_t x4730 = INT64_MIN;
static int8_t x4746 = INT8_MIN;
static int32_t x4748 = 3;
int32_t t130 = 1225;
int64_t x4781 = 4LL;
volatile int64_t t131 = 14454LL;
int32_t t134 = INT32_MIN;
volatile uint64_t x5055 = 3633LLU;
volatile int32_t t136 = 22888214;
volatile int64_t x5065 = INT64_MIN;
uint16_t x5067 = UINT16_MAX;
static uint8_t x5089 = 0U;
int16_t x5106 = INT16_MIN;
int64_t x5193 = INT64_MAX;
int8_t x5195 = 29;
int64_t t141 = INT64_MAX;
int32_t x5226 = INT32_MIN;
static uint16_t x5228 = 18U;
int32_t t145 = -12373555;
int16_t x5262 = INT16_MIN;
volatile int32_t t146 = -111;
int32_t x5283 = 32295;
int32_t t149 = 1;
static int64_t x5339 = 703158692607705602LL;
volatile int64_t x5370 = 25533322459LL;
static int32_t t151 = 534865109;
uint8_t x5468 = 8U;
int32_t t155 = 2;
volatile int8_t x5577 = 1;
int16_t x5578 = INT16_MIN;
volatile int16_t x5591 = -2018;
volatile int64_t t158 = -5726564LL;
volatile int32_t x5626 = -1;
static uint8_t x5628 = 1U;
static int8_t x5640 = 0;
uint64_t x5862 = 465064369386LLU;
uint32_t x5901 = 2231U;
int64_t x5902 = INT64_MIN;
int64_t x5903 = INT64_MAX;
volatile int32_t t166 = 113;
static int8_t x6013 = -1;
static int32_t t169 = 6362;
volatile int64_t t170 = 993128914LL;
int8_t x6158 = INT8_MAX;
int32_t t172 = 166;
volatile int32_t x6214 = INT32_MIN;
int16_t x6215 = -1;
volatile int32_t t177 = 88437043;
uint16_t x6286 = 32U;
volatile int8_t x6296 = 7;
uint8_t x6372 = 1U;
static uint32_t x6407 = 62389205U;
int16_t x6408 = 0;
volatile uint16_t x6448 = 26U;
volatile int32_t x6483 = 23582229;
uint8_t x6484 = 10U;
int64_t x6499 = -1LL;
volatile int8_t x6506 = 9;
uint16_t x6507 = 3U;
int32_t t190 = INT32_MIN;
static uint16_t x6557 = 0U;
int32_t x6559 = 1104;
int32_t x6565 = -37169;
uint8_t x6568 = 2U;
static int32_t t192 = 3;
volatile uint16_t x6605 = 148U;
volatile uint64_t t194 = 25576910451307739LLU;
volatile int16_t x6645 = INT16_MIN;
static uint32_t x6686 = 1747646756U;
int8_t x6688 = 1;
static volatile uint16_t x6753 = UINT16_MAX;
volatile uint16_t x6756 = 1U;
int8_t x6767 = 0;
int16_t x6768 = 25;
volatile uint64_t t199 = UINT64_MAX;


void f0(void) {
    	uint8_t x10 = 4U;
	int16_t x11 = INT16_MIN;
	int16_t x12 = 0;
	uint32_t t0 = 805494703U;

    t0 = (x9-((x10==x11)<<x12));

    if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x25 = INT16_MAX;
	int8_t x27 = INT8_MAX;
	static uint8_t x28 = 7U;
	int32_t t1 = 16463;

    t1 = (x25-((x26==x27)<<x28));

    if (t1 != 32767) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x77 = -1;
	int32_t x78 = 6889377;
	int64_t x79 = -1LL;
	uint16_t x80 = 1U;
	volatile int32_t t2 = -9;

    t2 = (x77-((x78==x79)<<x80));

    if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile int8_t x88 = 1;

    t3 = (x85-((x86==x87)<<x88));

    if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x93 = -3076;
	int32_t t4 = 30;

    t4 = (x93-((x94==x95)<<x96));

    if (t4 != -3076) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x150 = INT16_MIN;
	uint8_t x152 = 10U;
	int32_t t5 = 0;

    t5 = (x149-((x150==x151)<<x152));

    if (t5 != 4779) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x217 = -4499468;
	int32_t x218 = -1;
	int8_t x219 = -22;
	volatile int32_t t6 = 791;

    t6 = (x217-((x218==x219)<<x220));

    if (t6 != -4499468) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x221 = INT8_MIN;
	uint32_t x222 = 24283929U;
	int32_t x223 = INT32_MIN;
	static int32_t x224 = 24;
	int32_t t7 = 1594561;

    t7 = (x221-((x222==x223)<<x224));

    if (t7 != -128) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x269 = 502646U;
	int64_t x270 = -22576124490646LL;
	uint8_t x272 = 31U;

    t8 = (x269-((x270==x271)<<x272));

    if (t8 != 502646U) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint64_t x345 = 227514590714757LLU;
	uint64_t x346 = 8475420680687985LLU;
	uint8_t x347 = UINT8_MAX;
	int8_t x348 = 1;

    t9 = (x345-((x346==x347)<<x348));

    if (t9 != 227514590714757LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x349 = INT32_MIN;
	int64_t x350 = INT64_MIN;
	int32_t t10 = INT32_MIN;

    t10 = (x349-((x350==x351)<<x352));

    if (t10 != INT32_MIN) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x357 = INT32_MAX;
	uint32_t x358 = 24U;
	uint32_t x359 = UINT32_MAX;
	volatile int32_t t11 = INT32_MAX;

    t11 = (x357-((x358==x359)<<x360));

    if (t11 != INT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x389 = 3512;
	static int32_t x390 = INT32_MIN;
	int32_t x391 = INT32_MIN;
	static volatile uint64_t x392 = 1LLU;
	int32_t t12 = -27266959;

    t12 = (x389-((x390==x391)<<x392));

    if (t12 != 3510) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x433 = INT8_MAX;
	int64_t x434 = 54599275607783918LL;
	static int8_t x435 = INT8_MIN;
	uint16_t x436 = 6U;
	int32_t t13 = 464022;

    t13 = (x433-((x434==x435)<<x436));

    if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x438 = 734755216605107LLU;
	volatile int32_t x439 = INT32_MIN;
	uint8_t x440 = 29U;
	volatile int64_t t14 = 1LL;

    t14 = (x437-((x438==x439)<<x440));

    if (t14 != 16158689LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x469 = 0U;
	volatile uint64_t x470 = 10069050070773659LLU;
	volatile int16_t x471 = INT16_MIN;
	int8_t x472 = 6;
	volatile int32_t t15 = 365;

    t15 = (x469-((x470==x471)<<x472));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x497 = 598831;
	int32_t x498 = INT32_MIN;
	uint16_t x500 = 17U;

    t16 = (x497-((x498==x499)<<x500));

    if (t16 != 598831) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x545 = -79707374036879LL;
	volatile int8_t x546 = -1;
	uint8_t x547 = 0U;
	int16_t x548 = 11;
	int64_t t17 = -7LL;

    t17 = (x545-((x546==x547)<<x548));

    if (t17 != -79707374036879LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x565 = 48U;
	volatile uint8_t x566 = UINT8_MAX;
	static uint64_t x568 = 2LLU;
	volatile int32_t t18 = 284;

    t18 = (x565-((x566==x567)<<x568));

    if (t18 != 48) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x610 = UINT16_MAX;
	static int32_t x611 = -1;
	static int16_t x612 = 4;
	int64_t t19 = 13LL;

    t19 = (x609-((x610==x611)<<x612));

    if (t19 != -3396240977009LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint32_t x629 = UINT32_MAX;
	int64_t x630 = INT64_MAX;
	uint8_t x632 = 2U;

    t20 = (x629-((x630==x631)<<x632));

    if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x641 = -29;
	uint64_t x642 = 2704924LLU;
	int8_t x643 = INT8_MAX;
	uint32_t x644 = 1U;

    t21 = (x641-((x642==x643)<<x644));

    if (t21 != -29) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x705 = 1U;
	int8_t x706 = INT8_MIN;
	uint16_t x707 = 7U;
	uint8_t x708 = 19U;
	static volatile int32_t t22 = 52723;

    t22 = (x705-((x706==x707)<<x708));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x757 = -222397;
	volatile int32_t x758 = INT32_MAX;
	int32_t x759 = INT32_MIN;
	uint8_t x760 = 13U;
	int32_t t23 = 2440;

    t23 = (x757-((x758==x759)<<x760));

    if (t23 != -222397) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x765 = INT16_MIN;
	static volatile uint8_t x768 = 0U;

    t24 = (x765-((x766==x767)<<x768));

    if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x805 = INT16_MAX;
	int8_t x806 = INT8_MAX;
	int64_t x807 = INT64_MIN;
	int8_t x808 = 4;

    t25 = (x805-((x806==x807)<<x808));

    if (t25 != 32767) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x873 = INT64_MAX;
	volatile int64_t x874 = INT64_MIN;
	static uint8_t x875 = UINT8_MAX;
	volatile uint8_t x876 = 0U;
	int64_t t26 = INT64_MAX;

    t26 = (x873-((x874==x875)<<x876));

    if (t26 != INT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x985 = 3U;
	static int64_t x986 = 1784365LL;
	static volatile int16_t x987 = INT16_MIN;
	uint8_t x988 = 15U;
	int32_t t27 = 36377;

    t27 = (x985-((x986==x987)<<x988));

    if (t27 != 3) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x1014 = -1;
	int8_t x1016 = 1;
	volatile uint32_t t28 = UINT32_MAX;

    t28 = (x1013-((x1014==x1015)<<x1016));

    if (t28 != UINT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int32_t x1029 = 15178;
	uint64_t x1030 = 3498090LLU;
	volatile uint32_t x1032 = 1U;
	int32_t t29 = -768;

    t29 = (x1029-((x1030==x1031)<<x1032));

    if (t29 != 15178) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x1037 = INT64_MIN;
	uint64_t x1038 = 7808103061LLU;
	uint16_t x1039 = 539U;
	uint16_t x1040 = 10U;
	volatile int64_t t30 = INT64_MIN;

    t30 = (x1037-((x1038==x1039)<<x1040));

    if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x1049 = UINT16_MAX;
	static int32_t x1051 = 5124;
	volatile int32_t t31 = 2259;

    t31 = (x1049-((x1050==x1051)<<x1052));

    if (t31 != 65535) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x1094 = 5029;
	volatile int32_t t32 = 4059606;

    t32 = (x1093-((x1094==x1095)<<x1096));

    if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x1097 = 11U;
	uint32_t x1098 = UINT32_MAX;
	volatile int16_t x1099 = INT16_MIN;
	int32_t t33 = 172945;

    t33 = (x1097-((x1098==x1099)<<x1100));

    if (t33 != 11) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x1157 = INT8_MIN;
	static int8_t x1158 = -1;
	int32_t x1159 = INT32_MIN;
	int8_t x1160 = 8;
	volatile int32_t t34 = 1321;

    t34 = (x1157-((x1158==x1159)<<x1160));

    if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x1161 = INT8_MIN;
	uint16_t x1162 = 794U;
	int64_t x1163 = 7637454665750766LL;
	volatile int32_t t35 = -2748662;

    t35 = (x1161-((x1162==x1163)<<x1164));

    if (t35 != -128) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x1188 = 26;
	int32_t t36 = -961;

    t36 = (x1185-((x1186==x1187)<<x1188));

    if (t36 != 65535) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x1205 = INT32_MIN;
	static int32_t x1206 = INT32_MIN;
	int64_t x1207 = -1262353329123LL;

    t37 = (x1205-((x1206==x1207)<<x1208));

    if (t37 != INT32_MIN) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x1235 = 2U;
	volatile uint64_t t38 = UINT64_MAX;

    t38 = (x1233-((x1234==x1235)<<x1236));

    if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x1246 = INT32_MIN;
	static int8_t x1247 = INT8_MAX;
	uint16_t x1248 = 1U;
	volatile uint64_t t39 = 5LLU;

    t39 = (x1245-((x1246==x1247)<<x1248));

    if (t39 != 783LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x1249 = INT16_MAX;
	int16_t x1250 = INT16_MAX;
	int8_t x1251 = INT8_MAX;
	uint8_t x1252 = 6U;
	volatile int32_t t40 = -46967036;

    t40 = (x1249-((x1250==x1251)<<x1252));

    if (t40 != 32767) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x1253 = 22LLU;
	volatile uint8_t x1254 = 16U;
	uint16_t x1255 = 7U;
	volatile int8_t x1256 = 4;
	static uint64_t t41 = 51914926843LLU;

    t41 = (x1253-((x1254==x1255)<<x1256));

    if (t41 != 22LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x1257 = 170U;
	int32_t x1258 = -241989;
	volatile int16_t x1259 = -2;
	static uint16_t x1260 = 1U;
	uint32_t t42 = 11658672U;

    t42 = (x1257-((x1258==x1259)<<x1260));

    if (t42 != 170U) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x1329 = 0;
	int16_t x1330 = 2;
	volatile int8_t x1331 = -1;
	int8_t x1332 = 0;
	int32_t t43 = 114361946;

    t43 = (x1329-((x1330==x1331)<<x1332));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x1353 = 1;
	volatile int8_t x1354 = -15;
	int16_t x1355 = INT16_MIN;
	static uint8_t x1356 = 2U;
	static volatile int32_t t44 = 0;

    t44 = (x1353-((x1354==x1355)<<x1356));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int32_t t45 = -603116;

    t45 = (x1377-((x1378==x1379)<<x1380));

    if (t45 != 65535) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x1394 = INT32_MIN;
	uint8_t x1395 = UINT8_MAX;
	uint64_t t46 = 213LLU;

    t46 = (x1393-((x1394==x1395)<<x1396));

    if (t46 != 1011082461551LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x1401 = 3777463789LL;
	int64_t x1402 = INT64_MAX;
	uint16_t x1403 = UINT16_MAX;
	uint32_t x1404 = 12U;
	volatile int64_t t47 = -8206359LL;

    t47 = (x1401-((x1402==x1403)<<x1404));

    if (t47 != 3777463789LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint64_t x1433 = 14LLU;
	volatile uint64_t x1434 = 22651LLU;
	int8_t x1435 = INT8_MIN;
	uint16_t x1436 = 0U;
	static uint64_t t48 = 9819LLU;

    t48 = (x1433-((x1434==x1435)<<x1436));

    if (t48 != 14LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x1461 = 1;
	uint32_t x1463 = 10U;
	int8_t x1464 = 0;
	volatile int32_t t49 = 6185;

    t49 = (x1461-((x1462==x1463)<<x1464));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x1505 = 1;
	static volatile uint64_t x1506 = 7204164LLU;
	volatile uint32_t x1507 = 9U;
	volatile int32_t t50 = -357067;

    t50 = (x1505-((x1506==x1507)<<x1508));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint32_t x1513 = UINT32_MAX;
	int8_t x1514 = INT8_MAX;
	int64_t x1515 = INT64_MIN;
	uint32_t t51 = UINT32_MAX;

    t51 = (x1513-((x1514==x1515)<<x1516));

    if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint16_t x1549 = 142U;
	int16_t x1550 = INT16_MAX;
	volatile uint8_t x1551 = 1U;
	int8_t x1552 = 1;
	int32_t t52 = 5534;

    t52 = (x1549-((x1550==x1551)<<x1552));

    if (t52 != 142) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x1555 = -1;
	int64_t x1556 = 3LL;
	volatile int32_t t53 = 115156;

    t53 = (x1553-((x1554==x1555)<<x1556));

    if (t53 != -5) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x1570 = INT8_MIN;
	static uint16_t x1571 = 5999U;
	uint32_t x1572 = 2U;
	volatile int32_t t54 = 127;

    t54 = (x1569-((x1570==x1571)<<x1572));

    if (t54 != -26) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint16_t x1633 = 10410U;
	int32_t x1636 = 1;
	volatile int32_t t55 = -1;

    t55 = (x1633-((x1634==x1635)<<x1636));

    if (t55 != 10410) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x1733 = -15;
	int64_t x1734 = INT64_MIN;
	volatile uint8_t x1735 = UINT8_MAX;
	int32_t x1736 = 0;
	static int32_t t56 = 28678;

    t56 = (x1733-((x1734==x1735)<<x1736));

    if (t56 != -15) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x1810 = UINT64_MAX;
	volatile int8_t x1811 = INT8_MAX;
	int32_t x1812 = 1;
	volatile int64_t t57 = INT64_MIN;

    t57 = (x1809-((x1810==x1811)<<x1812));

    if (t57 != INT64_MIN) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x1821 = -702;
	static int16_t x1822 = INT16_MIN;
	static int8_t x1823 = -5;
	uint8_t x1824 = 3U;
	volatile int32_t t58 = 43;

    t58 = (x1821-((x1822==x1823)<<x1824));

    if (t58 != -702) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x2005 = 51;
	int32_t x2006 = -1;
	int32_t t59 = 17;

    t59 = (x2005-((x2006==x2007)<<x2008));

    if (t59 != 51) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x2041 = -1;
	static uint16_t x2043 = 6222U;
	uint8_t x2044 = 4U;
	volatile int32_t t60 = 22756861;

    t60 = (x2041-((x2042==x2043)<<x2044));

    if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x2057 = 20U;
	int8_t x2058 = -1;
	uint8_t x2060 = 2U;
	int32_t t61 = -56256;

    t61 = (x2057-((x2058==x2059)<<x2060));

    if (t61 != 20) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x2105 = INT64_MAX;
	uint16_t x2107 = 1U;
	static uint8_t x2108 = 6U;

    t62 = (x2105-((x2106==x2107)<<x2108));

    if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x2125 = -1;
	int32_t x2126 = 1849;
	uint16_t x2127 = 6316U;
	uint8_t x2128 = 13U;
	volatile int32_t t63 = 1829990;

    t63 = (x2125-((x2126==x2127)<<x2128));

    if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x2129 = INT16_MIN;
	uint64_t x2130 = 3408470LLU;
	int16_t x2131 = INT16_MIN;
	uint32_t x2132 = 26U;
	int32_t t64 = -184;

    t64 = (x2129-((x2130==x2131)<<x2132));

    if (t64 != -32768) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x2133 = INT16_MIN;
	uint32_t x2134 = 13976449U;
	static int64_t x2135 = -2846649586873456789LL;
	uint64_t x2136 = 0LLU;
	volatile int32_t t65 = -399340;

    t65 = (x2133-((x2134==x2135)<<x2136));

    if (t65 != -32768) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int64_t x2157 = 106400811035433LL;
	int64_t x2158 = INT64_MIN;
	static uint8_t x2159 = 7U;
	int16_t x2160 = 5;
	volatile int64_t t66 = -7397315341197LL;

    t66 = (x2157-((x2158==x2159)<<x2160));

    if (t66 != 106400811035433LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x2245 = INT16_MIN;
	int16_t x2247 = -4;

    t67 = (x2245-((x2246==x2247)<<x2248));

    if (t67 != -32768) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x2249 = UINT64_MAX;
	int8_t x2250 = INT8_MIN;
	int64_t x2251 = -1LL;
	volatile uint64_t t68 = UINT64_MAX;

    t68 = (x2249-((x2250==x2251)<<x2252));

    if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x2318 = -1073440059LL;
	uint16_t x2319 = UINT16_MAX;
	volatile int32_t t69 = 1542973;

    t69 = (x2317-((x2318==x2319)<<x2320));

    if (t69 != 255) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x2341 = 24244U;
	int32_t x2342 = -1;
	static volatile uint8_t x2344 = 1U;
	volatile int32_t t70 = -456;

    t70 = (x2341-((x2342==x2343)<<x2344));

    if (t70 != 24244) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x2357 = INT8_MIN;
	int64_t x2358 = 266589268899231LL;
	volatile uint8_t x2359 = 0U;
	uint8_t x2360 = 1U;
	static int32_t t71 = 203;

    t71 = (x2357-((x2358==x2359)<<x2360));

    if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x2425 = INT16_MIN;
	int8_t x2426 = INT8_MAX;
	static uint8_t x2427 = UINT8_MAX;
	volatile uint8_t x2428 = 20U;
	int32_t t72 = 14229554;

    t72 = (x2425-((x2426==x2427)<<x2428));

    if (t72 != -32768) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x2550 = INT8_MIN;
	volatile int32_t x2551 = 442486776;
	uint16_t x2552 = 0U;
	static volatile int32_t t73 = 22;

    t73 = (x2549-((x2550==x2551)<<x2552));

    if (t73 != 166348) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int64_t x2601 = -1LL;
	int8_t x2604 = 0;
	volatile int64_t t74 = -33856588555828143LL;

    t74 = (x2601-((x2602==x2603)<<x2604));

    if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int32_t x2689 = -1;
	uint64_t x2690 = 625097LLU;
	int64_t x2691 = 1062247LL;
	static uint16_t x2692 = 8U;
	int32_t t75 = -120;

    t75 = (x2689-((x2690==x2691)<<x2692));

    if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x2789 = -1;
	volatile int16_t x2790 = INT16_MAX;
	int16_t x2791 = INT16_MIN;
	uint8_t x2792 = 2U;
	int32_t t76 = 63734;

    t76 = (x2789-((x2790==x2791)<<x2792));

    if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x2793 = INT8_MIN;
	uint16_t x2794 = 108U;
	static volatile int8_t x2795 = INT8_MIN;
	uint16_t x2796 = 4U;
	int32_t t77 = -1790;

    t77 = (x2793-((x2794==x2795)<<x2796));

    if (t77 != -128) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x2806 = INT8_MAX;
	static uint32_t x2808 = 0U;

    t78 = (x2805-((x2806==x2807)<<x2808));

    if (t78 != 32767) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x2833 = INT64_MAX;
	int16_t x2834 = -1;
	uint64_t x2835 = UINT64_MAX;
	int8_t x2836 = 12;
	static int64_t t79 = -9921426786LL;

    t79 = (x2833-((x2834==x2835)<<x2836));

    if (t79 != 9223372036854771711LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x2930 = INT64_MAX;
	static volatile int32_t x2931 = 62;
	uint32_t x2932 = 1U;
	int32_t t80 = 3;

    t80 = (x2929-((x2930==x2931)<<x2932));

    if (t80 != -14) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x2941 = INT64_MIN;
	int32_t x2942 = INT32_MAX;
	int8_t x2943 = -9;
	volatile int64_t t81 = INT64_MIN;

    t81 = (x2941-((x2942==x2943)<<x2944));

    if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x2993 = 1LL;
	static int32_t x2994 = -400;
	int16_t x2995 = INT16_MIN;
	volatile int8_t x2996 = 1;
	int64_t t82 = 259LL;

    t82 = (x2993-((x2994==x2995)<<x2996));

    if (t82 != 1LL) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int8_t x3002 = INT8_MAX;
	int8_t x3003 = INT8_MIN;
	int8_t x3004 = 0;
	int64_t t83 = 1LL;

    t83 = (x3001-((x3002==x3003)<<x3004));

    if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x3017 = INT32_MIN;
	uint16_t x3018 = 3U;
	volatile int32_t x3019 = INT32_MAX;
	volatile int8_t x3020 = 2;
	int32_t t84 = INT32_MIN;

    t84 = (x3017-((x3018==x3019)<<x3020));

    if (t84 != INT32_MIN) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint64_t x3033 = 3271029775630548551LLU;
	uint64_t x3034 = 3109652237LLU;
	volatile uint8_t x3035 = UINT8_MAX;
	uint64_t x3036 = 30LLU;
	static uint64_t t85 = 314877198LLU;

    t85 = (x3033-((x3034==x3035)<<x3036));

    if (t85 != 3271029775630548551LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x3061 = INT16_MIN;
	static volatile int32_t x3062 = INT32_MAX;
	uint8_t x3063 = 10U;
	static uint8_t x3064 = 5U;
	volatile int32_t t86 = -4304989;

    t86 = (x3061-((x3062==x3063)<<x3064));

    if (t86 != -32768) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int64_t x3069 = INT64_MAX;
	volatile uint8_t x3070 = 57U;
	static int16_t x3071 = 0;
	uint8_t x3072 = 15U;
	volatile int64_t t87 = INT64_MAX;

    t87 = (x3069-((x3070==x3071)<<x3072));

    if (t87 != INT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x3106 = 2212100237619218889LLU;
	int32_t x3107 = -25;
	volatile uint64_t t88 = UINT64_MAX;

    t88 = (x3105-((x3106==x3107)<<x3108));

    if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x3114 = INT16_MIN;
	int16_t x3115 = -1;
	volatile int32_t t89 = 23827252;

    t89 = (x3113-((x3114==x3115)<<x3116));

    if (t89 != -2) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x3149 = 207U;
	static volatile uint8_t x3150 = UINT8_MAX;
	uint8_t x3151 = 9U;
	volatile uint8_t x3152 = 3U;
	static int32_t t90 = -141205;

    t90 = (x3149-((x3150==x3151)<<x3152));

    if (t90 != 207) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x3201 = -1;
	int64_t x3203 = 12956840LL;
	volatile int32_t t91 = -11852066;

    t91 = (x3201-((x3202==x3203)<<x3204));

    if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile int64_t x3261 = INT64_MAX;
	static uint8_t x3262 = 3U;
	volatile int32_t x3263 = -1;
	static int16_t x3264 = 1;

    t92 = (x3261-((x3262==x3263)<<x3264));

    if (t92 != INT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x3333 = -1;
	volatile int8_t x3334 = INT8_MIN;
	int32_t x3335 = INT32_MIN;

    t93 = (x3333-((x3334==x3335)<<x3336));

    if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x3349 = -21247307;
	static int8_t x3350 = INT8_MIN;
	uint8_t x3351 = 71U;
	static volatile int32_t t94 = 1378;

    t94 = (x3349-((x3350==x3351)<<x3352));

    if (t94 != -21247307) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x3365 = -1;
	uint16_t x3366 = 5737U;
	int64_t x3367 = INT64_MIN;
	uint16_t x3368 = 2U;
	volatile int32_t t95 = 31306155;

    t95 = (x3365-((x3366==x3367)<<x3368));

    if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint64_t x3409 = 668034180LLU;
	int32_t x3410 = -1;
	volatile uint32_t x3411 = 21U;
	static int16_t x3412 = 11;
	uint64_t t96 = 16317182LLU;

    t96 = (x3409-((x3410==x3411)<<x3412));

    if (t96 != 668034180LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x3429 = -38680708;
	static volatile uint8_t x3430 = UINT8_MAX;
	int8_t x3431 = -1;
	int16_t x3432 = 0;
	int32_t t97 = -29;

    t97 = (x3429-((x3430==x3431)<<x3432));

    if (t97 != -38680708) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x3521 = INT64_MIN;
	uint64_t x3522 = 334915762193419LLU;
	int8_t x3523 = -53;
	uint8_t x3524 = 27U;
	volatile int64_t t98 = INT64_MIN;

    t98 = (x3521-((x3522==x3523)<<x3524));

    if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x3614 = INT8_MIN;
	int16_t x3615 = -1;
	int32_t t99 = -13553;

    t99 = (x3613-((x3614==x3615)<<x3616));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x3625 = INT8_MAX;
	int32_t x3626 = INT32_MAX;
	int8_t x3627 = -1;
	volatile uint8_t x3628 = 5U;

    t100 = (x3625-((x3626==x3627)<<x3628));

    if (t100 != 127) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x3653 = 92373U;
	uint16_t x3654 = 0U;
	volatile int64_t x3655 = INT64_MAX;
	volatile uint8_t x3656 = 5U;
	volatile uint32_t t101 = 18476U;

    t101 = (x3653-((x3654==x3655)<<x3656));

    if (t101 != 92373U) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x3701 = 2755854U;
	int64_t x3702 = -52786LL;
	volatile uint16_t x3703 = UINT16_MAX;
	uint32_t t102 = 1738773718U;

    t102 = (x3701-((x3702==x3703)<<x3704));

    if (t102 != 2755854U) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int64_t x3706 = -1LL;
	int64_t x3707 = -257574448419231LL;
	uint8_t x3708 = 3U;
	volatile int32_t t103 = -37;

    t103 = (x3705-((x3706==x3707)<<x3708));

    if (t103 != 114751282) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x3747 = INT32_MIN;

    t104 = (x3745-((x3746==x3747)<<x3748));

    if (t104 != 5140371329278723433LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x3749 = INT32_MIN;
	uint16_t x3750 = 70U;
	uint8_t x3752 = 3U;
	volatile int32_t t105 = INT32_MIN;

    t105 = (x3749-((x3750==x3751)<<x3752));

    if (t105 != INT32_MIN) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x3845 = INT16_MAX;
	int64_t x3846 = -1LL;
	uint16_t x3847 = 73U;
	int16_t x3848 = 20;

    t106 = (x3845-((x3846==x3847)<<x3848));

    if (t106 != 32767) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x3850 = INT64_MIN;
	static int32_t x3851 = 23;

    t107 = (x3849-((x3850==x3851)<<x3852));

    if (t107 != -32768) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x3893 = -1;
	volatile int64_t x3894 = -945912941871136581LL;
	int16_t x3895 = INT16_MAX;
	uint32_t x3896 = 1U;
	volatile int32_t t108 = 14914;

    t108 = (x3893-((x3894==x3895)<<x3896));

    if (t108 != -1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x3965 = 58916;
	uint64_t x3967 = 402156LLU;

    t109 = (x3965-((x3966==x3967)<<x3968));

    if (t109 != 58916) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x3969 = 26000298;
	int16_t x3971 = INT16_MAX;
	volatile uint8_t x3972 = 10U;

    t110 = (x3969-((x3970==x3971)<<x3972));

    if (t110 != 26000298) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x4045 = 420U;
	static volatile int64_t x4047 = INT64_MIN;
	int8_t x4048 = 0;
	int32_t t111 = 9875;

    t111 = (x4045-((x4046==x4047)<<x4048));

    if (t111 != 420) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint64_t x4089 = 1816686033324328717LLU;
	int16_t x4090 = -1;
	uint8_t x4091 = 1U;
	int8_t x4092 = 0;
	volatile uint64_t t112 = 100208220833LLU;

    t112 = (x4089-((x4090==x4091)<<x4092));

    if (t112 != 1816686033324328717LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x4149 = 983982986236630341LLU;
	int16_t x4150 = INT16_MIN;
	uint16_t x4151 = 67U;
	uint64_t t113 = 34765072LLU;

    t113 = (x4149-((x4150==x4151)<<x4152));

    if (t113 != 983982986236630341LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x4325 = 35U;
	int32_t x4326 = INT32_MIN;
	volatile uint8_t x4328 = 19U;
	volatile uint32_t t114 = 1612U;

    t114 = (x4325-((x4326==x4327)<<x4328));

    if (t114 != 35U) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x4341 = 736;
	int16_t x4342 = -1116;
	static int64_t x4343 = -1LL;
	volatile uint16_t x4344 = 8U;
	int32_t t115 = -325269;

    t115 = (x4341-((x4342==x4343)<<x4344));

    if (t115 != 736) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x4353 = INT64_MIN;
	uint16_t x4354 = 1U;
	int8_t x4355 = INT8_MIN;
	volatile uint8_t x4356 = 1U;
	static volatile int64_t t116 = INT64_MIN;

    t116 = (x4353-((x4354==x4355)<<x4356));

    if (t116 != INT64_MIN) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t x4382 = -14503;
	int16_t x4383 = INT16_MIN;
	static volatile int16_t x4384 = 2;
	int32_t t117 = -1;

    t117 = (x4381-((x4382==x4383)<<x4384));

    if (t117 != -128) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint64_t x4413 = 1617417419915LLU;
	volatile int16_t x4414 = INT16_MIN;
	uint8_t x4416 = 1U;
	static volatile uint64_t t118 = 4017LLU;

    t118 = (x4413-((x4414==x4415)<<x4416));

    if (t118 != 1617417419915LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile int64_t x4443 = -1LL;
	uint8_t x4444 = 3U;
	int32_t t119 = -62;

    t119 = (x4441-((x4442==x4443)<<x4444));

    if (t119 != -32768) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x4449 = 2022;
	volatile uint8_t x4450 = 4U;
	int8_t x4451 = INT8_MAX;
	int32_t x4452 = 28;
	volatile int32_t t120 = 0;

    t120 = (x4449-((x4450==x4451)<<x4452));

    if (t120 != 2022) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t x4505 = -1LL;
	uint16_t x4506 = 29609U;
	volatile uint8_t x4507 = UINT8_MAX;
	uint8_t x4508 = 12U;
	volatile int64_t t121 = 28469017644LL;

    t121 = (x4505-((x4506==x4507)<<x4508));

    if (t121 != -1LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x4573 = -839375LL;
	int64_t x4574 = INT64_MAX;
	uint16_t x4575 = 7684U;
	uint8_t x4576 = 27U;
	static volatile int64_t t122 = -956402LL;

    t122 = (x4573-((x4574==x4575)<<x4576));

    if (t122 != -839375LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint8_t x4589 = UINT8_MAX;
	static int8_t x4590 = -31;
	uint32_t x4591 = 142U;
	uint8_t x4592 = 7U;
	int32_t t123 = 1;

    t123 = (x4589-((x4590==x4591)<<x4592));

    if (t123 != 255) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x4617 = 53U;
	int16_t x4618 = -1;
	uint32_t x4619 = 77754U;
	volatile int32_t t124 = -1070;

    t124 = (x4617-((x4618==x4619)<<x4620));

    if (t124 != 53) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint8_t x4629 = 4U;
	int32_t x4630 = INT32_MIN;
	static volatile int16_t x4631 = 22;
	static uint8_t x4632 = 1U;
	int32_t t125 = -4445;

    t125 = (x4629-((x4630==x4631)<<x4632));

    if (t125 != 4) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x4657 = 9U;
	static int8_t x4658 = -1;
	uint32_t x4659 = 1786U;
	static volatile uint8_t x4660 = 9U;
	volatile int32_t t126 = -8184;

    t126 = (x4657-((x4658==x4659)<<x4660));

    if (t126 != 9) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint16_t x4729 = 684U;
	int16_t x4731 = INT16_MAX;
	volatile int8_t x4732 = 0;
	int32_t t127 = -1537951;

    t127 = (x4729-((x4730==x4731)<<x4732));

    if (t127 != 684) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x4745 = -1;
	int32_t x4747 = INT32_MIN;
	static int32_t t128 = 395463915;

    t128 = (x4745-((x4746==x4747)<<x4748));

    if (t128 != -1) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x4749 = INT64_MIN;
	volatile int8_t x4750 = 49;
	volatile uint64_t x4751 = UINT64_MAX;
	uint64_t x4752 = 0LLU;
	volatile int64_t t129 = INT64_MIN;

    t129 = (x4749-((x4750==x4751)<<x4752));

    if (t129 != INT64_MIN) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x4761 = -1;
	int8_t x4762 = INT8_MAX;
	static uint64_t x4763 = 5LLU;
	uint8_t x4764 = 15U;

    t130 = (x4761-((x4762==x4763)<<x4764));

    if (t130 != -1) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x4782 = INT16_MIN;
	static int8_t x4783 = INT8_MAX;
	int8_t x4784 = 2;

    t131 = (x4781-((x4782==x4783)<<x4784));

    if (t131 != 4LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x4873 = INT64_MIN;
	int32_t x4874 = -12211;
	static uint16_t x4875 = UINT16_MAX;
	int64_t x4876 = 23LL;
	volatile int64_t t132 = INT64_MIN;

    t132 = (x4873-((x4874==x4875)<<x4876));

    if (t132 != INT64_MIN) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x4921 = -1009824878766702LL;
	volatile int16_t x4922 = INT16_MAX;
	int8_t x4923 = INT8_MAX;
	static uint8_t x4924 = 30U;
	static int64_t t133 = -6962LL;

    t133 = (x4921-((x4922==x4923)<<x4924));

    if (t133 != -1009824878766702LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x4993 = INT32_MIN;
	uint32_t x4994 = 99003501U;
	int64_t x4995 = -1LL;
	static volatile uint8_t x4996 = 4U;

    t134 = (x4993-((x4994==x4995)<<x4996));

    if (t134 != INT32_MIN) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int32_t x5053 = INT32_MIN;
	volatile int32_t x5054 = INT32_MIN;
	uint16_t x5056 = 0U;
	volatile int32_t t135 = INT32_MIN;

    t135 = (x5053-((x5054==x5055)<<x5056));

    if (t135 != INT32_MIN) { NG(); } else { ; }
	
}

void f136(void) {
    	static int8_t x5061 = 1;
	static volatile int32_t x5062 = INT32_MIN;
	static int64_t x5063 = -1LL;
	uint64_t x5064 = 2LLU;

    t136 = (x5061-((x5062==x5063)<<x5064));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x5066 = -1;
	static uint16_t x5068 = 15U;
	volatile int64_t t137 = INT64_MIN;

    t137 = (x5065-((x5066==x5067)<<x5068));

    if (t137 != INT64_MIN) { NG(); } else { ; }
	
}

void f138(void) {
    	static int64_t x5090 = -90829048020LL;
	static int8_t x5091 = INT8_MAX;
	uint16_t x5092 = 2U;
	static volatile int32_t t138 = -24325;

    t138 = (x5089-((x5090==x5091)<<x5092));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x5105 = -20024554419807LL;
	uint32_t x5107 = 248326628U;
	int8_t x5108 = 20;
	static int64_t t139 = -101578344853438LL;

    t139 = (x5105-((x5106==x5107)<<x5108));

    if (t139 != -20024554419807LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x5181 = INT16_MAX;
	static uint32_t x5182 = 26243176U;
	volatile int32_t x5183 = INT32_MAX;
	uint16_t x5184 = 8U;
	int32_t t140 = 354;

    t140 = (x5181-((x5182==x5183)<<x5184));

    if (t140 != 32767) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x5194 = -1;
	static uint8_t x5196 = 0U;

    t141 = (x5193-((x5194==x5195)<<x5196));

    if (t141 != INT64_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x5197 = 61;
	uint16_t x5198 = UINT16_MAX;
	static uint16_t x5199 = UINT16_MAX;
	int64_t x5200 = 25LL;
	static volatile int32_t t142 = -2050040;

    t142 = (x5197-((x5198==x5199)<<x5200));

    if (t142 != -33554371) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x5217 = INT16_MAX;
	static uint8_t x5218 = UINT8_MAX;
	int8_t x5219 = -1;
	int16_t x5220 = 0;
	volatile int32_t t143 = -124568;

    t143 = (x5217-((x5218==x5219)<<x5220));

    if (t143 != 32767) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x5225 = -1;
	uint64_t x5227 = UINT64_MAX;
	int32_t t144 = 41519;

    t144 = (x5225-((x5226==x5227)<<x5228));

    if (t144 != -1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x5233 = 30U;
	static int16_t x5234 = INT16_MAX;
	static uint32_t x5235 = 1941391287U;
	uint16_t x5236 = 2U;

    t145 = (x5233-((x5234==x5235)<<x5236));

    if (t145 != 30) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x5261 = -2364;
	volatile uint32_t x5263 = 22U;
	volatile uint16_t x5264 = 31U;

    t146 = (x5261-((x5262==x5263)<<x5264));

    if (t146 != -2364) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile int16_t x5277 = -1;
	static uint32_t x5278 = UINT32_MAX;
	int8_t x5279 = INT8_MAX;
	int8_t x5280 = 8;
	volatile int32_t t147 = -29379023;

    t147 = (x5277-((x5278==x5279)<<x5280));

    if (t147 != -1) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x5281 = INT32_MAX;
	static volatile int8_t x5282 = INT8_MIN;
	static volatile uint8_t x5284 = 7U;
	int32_t t148 = INT32_MAX;

    t148 = (x5281-((x5282==x5283)<<x5284));

    if (t148 != INT32_MAX) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x5317 = INT16_MIN;
	int16_t x5318 = INT16_MIN;
	uint64_t x5319 = UINT64_MAX;
	int8_t x5320 = 2;

    t149 = (x5317-((x5318==x5319)<<x5320));

    if (t149 != -32768) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x5337 = 2U;
	int16_t x5338 = -1;
	uint8_t x5340 = 3U;
	volatile int32_t t150 = 149443926;

    t150 = (x5337-((x5338==x5339)<<x5340));

    if (t150 != 2) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x5369 = -1;
	int64_t x5371 = INT64_MAX;
	int16_t x5372 = 1;

    t151 = (x5369-((x5370==x5371)<<x5372));

    if (t151 != -1) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x5401 = -1;
	uint16_t x5402 = 7U;
	uint64_t x5403 = UINT64_MAX;
	int16_t x5404 = 17;
	int32_t t152 = 149;

    t152 = (x5401-((x5402==x5403)<<x5404));

    if (t152 != -1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x5429 = 15488464U;
	int8_t x5430 = INT8_MIN;
	int64_t x5431 = INT64_MAX;
	int16_t x5432 = 13;
	volatile uint32_t t153 = 13010U;

    t153 = (x5429-((x5430==x5431)<<x5432));

    if (t153 != 15488464U) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int8_t x5445 = -2;
	int8_t x5446 = -6;
	volatile int32_t x5447 = -15;
	uint8_t x5448 = 2U;
	static int32_t t154 = 4;

    t154 = (x5445-((x5446==x5447)<<x5448));

    if (t154 != -2) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int16_t x5465 = -611;
	int8_t x5466 = -1;
	uint8_t x5467 = 16U;

    t155 = (x5465-((x5466==x5467)<<x5468));

    if (t155 != -611) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int64_t x5517 = 2269990734456LL;
	static int32_t x5518 = INT32_MAX;
	static int8_t x5519 = INT8_MIN;
	volatile uint8_t x5520 = 8U;
	volatile int64_t t156 = 0LL;

    t156 = (x5517-((x5518==x5519)<<x5520));

    if (t156 != 2269990734456LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x5579 = -1;
	uint8_t x5580 = 1U;
	static volatile int32_t t157 = 113;

    t157 = (x5577-((x5578==x5579)<<x5580));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x5589 = -1634239LL;
	int8_t x5590 = -15;
	int8_t x5592 = 5;

    t158 = (x5589-((x5590==x5591)<<x5592));

    if (t158 != -1634239LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static int64_t x5625 = INT64_MAX;
	volatile int8_t x5627 = -1;
	static int64_t t159 = -2652688677966299295LL;

    t159 = (x5625-((x5626==x5627)<<x5628));

    if (t159 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x5637 = INT16_MIN;
	volatile int32_t x5638 = INT32_MIN;
	static uint8_t x5639 = 4U;
	int32_t t160 = 12463580;

    t160 = (x5637-((x5638==x5639)<<x5640));

    if (t160 != -32768) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x5669 = -1;
	int8_t x5670 = INT8_MIN;
	int64_t x5671 = 2703387393LL;
	uint64_t x5672 = 7LLU;
	volatile int32_t t161 = 4068;

    t161 = (x5669-((x5670==x5671)<<x5672));

    if (t161 != -1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int8_t x5693 = -1;
	uint8_t x5694 = 1U;
	uint64_t x5695 = UINT64_MAX;
	uint8_t x5696 = 4U;
	static int32_t t162 = 385769441;

    t162 = (x5693-((x5694==x5695)<<x5696));

    if (t162 != -1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int8_t x5829 = INT8_MIN;
	int32_t x5830 = INT32_MIN;
	uint16_t x5831 = UINT16_MAX;
	int8_t x5832 = 27;
	static volatile int32_t t163 = 114;

    t163 = (x5829-((x5830==x5831)<<x5832));

    if (t163 != -128) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x5861 = INT8_MAX;
	int64_t x5863 = INT64_MIN;
	volatile int16_t x5864 = 16;
	volatile int32_t t164 = 203;

    t164 = (x5861-((x5862==x5863)<<x5864));

    if (t164 != 127) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x5904 = 7U;
	static volatile uint32_t t165 = 11342U;

    t165 = (x5901-((x5902==x5903)<<x5904));

    if (t165 != 2231U) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x5993 = -3781;
	static int32_t x5994 = 688743345;
	static int8_t x5995 = INT8_MAX;
	int32_t x5996 = 6;

    t166 = (x5993-((x5994==x5995)<<x5996));

    if (t166 != -3781) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x6014 = 26588U;
	int64_t x6015 = -2LL;
	static uint16_t x6016 = 3U;
	static int32_t t167 = 349228225;

    t167 = (x6013-((x6014==x6015)<<x6016));

    if (t167 != -1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x6033 = INT16_MIN;
	uint64_t x6034 = 118776250282948LLU;
	uint8_t x6035 = 41U;
	static volatile int16_t x6036 = 1;
	static volatile int32_t t168 = 7516;

    t168 = (x6033-((x6034==x6035)<<x6036));

    if (t168 != -32768) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x6041 = 3;
	static int16_t x6042 = -43;
	uint16_t x6043 = UINT16_MAX;
	uint8_t x6044 = 0U;

    t169 = (x6041-((x6042==x6043)<<x6044));

    if (t169 != 3) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x6057 = 18LL;
	int16_t x6058 = INT16_MIN;
	int32_t x6059 = 236;
	volatile uint8_t x6060 = 0U;

    t170 = (x6057-((x6058==x6059)<<x6060));

    if (t170 != 18LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x6141 = 4;
	uint64_t x6142 = 70609LLU;
	volatile uint8_t x6143 = UINT8_MAX;
	uint8_t x6144 = 2U;
	volatile int32_t t171 = -479638952;

    t171 = (x6141-((x6142==x6143)<<x6144));

    if (t171 != 4) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x6157 = -1;
	static int32_t x6159 = INT32_MIN;
	uint8_t x6160 = 0U;

    t172 = (x6157-((x6158==x6159)<<x6160));

    if (t172 != -1) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint16_t x6161 = 29U;
	int16_t x6162 = 528;
	int8_t x6163 = INT8_MIN;
	uint16_t x6164 = 3U;
	volatile int32_t t173 = 191;

    t173 = (x6161-((x6162==x6163)<<x6164));

    if (t173 != 29) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x6165 = 15445U;
	volatile int64_t x6166 = INT64_MAX;
	volatile uint8_t x6167 = 56U;
	int8_t x6168 = 11;
	volatile uint32_t t174 = 37U;

    t174 = (x6165-((x6166==x6167)<<x6168));

    if (t174 != 15445U) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x6213 = INT8_MAX;
	uint8_t x6216 = 5U;
	static int32_t t175 = -5165;

    t175 = (x6213-((x6214==x6215)<<x6216));

    if (t175 != 127) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x6265 = -1LL;
	int64_t x6266 = 241215321064LL;
	static uint16_t x6267 = UINT16_MAX;
	uint8_t x6268 = 5U;
	int64_t t176 = 1924197367921998496LL;

    t176 = (x6265-((x6266==x6267)<<x6268));

    if (t176 != -1LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x6269 = UINT16_MAX;
	int64_t x6270 = -1LL;
	int8_t x6271 = INT8_MIN;
	uint8_t x6272 = 1U;

    t177 = (x6269-((x6270==x6271)<<x6272));

    if (t177 != 65535) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x6285 = INT8_MIN;
	int16_t x6287 = 1377;
	int16_t x6288 = 0;
	int32_t t178 = 98330;

    t178 = (x6285-((x6286==x6287)<<x6288));

    if (t178 != -128) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x6293 = INT32_MIN;
	int64_t x6294 = -1752748976989269LL;
	volatile uint16_t x6295 = UINT16_MAX;
	static volatile int32_t t179 = INT32_MIN;

    t179 = (x6293-((x6294==x6295)<<x6296));

    if (t179 != INT32_MIN) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint16_t x6369 = UINT16_MAX;
	int16_t x6370 = 1;
	uint8_t x6371 = UINT8_MAX;
	int32_t t180 = 3647373;

    t180 = (x6369-((x6370==x6371)<<x6372));

    if (t180 != 65535) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int32_t x6397 = INT32_MIN;
	static int64_t x6398 = INT64_MAX;
	int32_t x6399 = INT32_MIN;
	uint8_t x6400 = 1U;
	volatile int32_t t181 = INT32_MIN;

    t181 = (x6397-((x6398==x6399)<<x6400));

    if (t181 != INT32_MIN) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x6405 = 10;
	int32_t x6406 = INT32_MAX;
	int32_t t182 = 50776971;

    t182 = (x6405-((x6406==x6407)<<x6408));

    if (t182 != 10) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x6409 = UINT16_MAX;
	uint32_t x6410 = UINT32_MAX;
	volatile int32_t x6411 = -1;
	static int8_t x6412 = 0;
	static int32_t t183 = 138;

    t183 = (x6409-((x6410==x6411)<<x6412));

    if (t183 != 65534) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int8_t x6445 = INT8_MIN;
	int32_t x6446 = 59715;
	uint16_t x6447 = 1783U;
	static int32_t t184 = -1157;

    t184 = (x6445-((x6446==x6447)<<x6448));

    if (t184 != -128) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint16_t x6461 = 2U;
	int16_t x6462 = INT16_MAX;
	int16_t x6463 = INT16_MAX;
	static volatile uint32_t x6464 = 1U;
	volatile int32_t t185 = 72;

    t185 = (x6461-((x6462==x6463)<<x6464));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x6481 = INT8_MIN;
	static int8_t x6482 = INT8_MIN;
	int32_t t186 = 2;

    t186 = (x6481-((x6482==x6483)<<x6484));

    if (t186 != -128) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x6497 = INT8_MIN;
	uint64_t x6498 = UINT64_MAX;
	int16_t x6500 = 29;
	int32_t t187 = 15;

    t187 = (x6497-((x6498==x6499)<<x6500));

    if (t187 != -536871040) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x6505 = 2U;
	int16_t x6508 = 7;
	static int32_t t188 = 806247;

    t188 = (x6505-((x6506==x6507)<<x6508));

    if (t188 != 2) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x6529 = -22200798841433011LL;
	uint32_t x6530 = UINT32_MAX;
	uint64_t x6531 = UINT64_MAX;
	int16_t x6532 = 0;
	int64_t t189 = 6888LL;

    t189 = (x6529-((x6530==x6531)<<x6532));

    if (t189 != -22200798841433011LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x6541 = INT32_MIN;
	uint16_t x6542 = UINT16_MAX;
	uint32_t x6543 = 82869U;
	int8_t x6544 = 0;

    t190 = (x6541-((x6542==x6543)<<x6544));

    if (t190 != INT32_MIN) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x6558 = 440218627636756996LLU;
	static uint8_t x6560 = 12U;
	int32_t t191 = 67821;

    t191 = (x6557-((x6558==x6559)<<x6560));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile int16_t x6566 = INT16_MAX;
	volatile uint8_t x6567 = 0U;

    t192 = (x6565-((x6566==x6567)<<x6568));

    if (t192 != -37169) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x6606 = INT64_MIN;
	uint16_t x6607 = 1232U;
	int8_t x6608 = 0;
	static int32_t t193 = -116;

    t193 = (x6605-((x6606==x6607)<<x6608));

    if (t193 != 148) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint64_t x6633 = 414484679527913514LLU;
	int8_t x6634 = INT8_MAX;
	volatile int32_t x6635 = INT32_MIN;
	uint8_t x6636 = 0U;

    t194 = (x6633-((x6634==x6635)<<x6636));

    if (t194 != 414484679527913514LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int64_t x6646 = -882857LL;
	int8_t x6647 = INT8_MIN;
	uint8_t x6648 = 9U;
	volatile int32_t t195 = 12862994;

    t195 = (x6645-((x6646==x6647)<<x6648));

    if (t195 != -32768) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x6685 = 7895U;
	int16_t x6687 = -1;
	static int32_t t196 = -95665486;

    t196 = (x6685-((x6686==x6687)<<x6688));

    if (t196 != 7895) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x6689 = 4470;
	uint16_t x6690 = 90U;
	int64_t x6691 = INT64_MAX;
	int8_t x6692 = 0;
	static volatile int32_t t197 = 10582;

    t197 = (x6689-((x6690==x6691)<<x6692));

    if (t197 != 4470) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x6754 = -16466;
	volatile int32_t x6755 = INT32_MIN;
	int32_t t198 = 3527425;

    t198 = (x6753-((x6754==x6755)<<x6756));

    if (t198 != 65535) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint64_t x6765 = UINT64_MAX;
	volatile uint16_t x6766 = 12670U;

    t199 = (x6765-((x6766==x6767)<<x6768));

    if (t199 != UINT64_MAX) { NG(); } else { ; }
	
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

