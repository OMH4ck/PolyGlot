
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

uint64_t x47 = 103194107215LLU;
uint8_t x48 = 3U;
int8_t x53 = 0;
int64_t x54 = INT64_MAX;
uint16_t x56 = 0U;
static int64_t x153 = 8632LL;
uint32_t x154 = 24U;
volatile int16_t x270 = INT16_MAX;
uint32_t x271 = 2394760U;
int32_t x294 = INT32_MIN;
uint32_t x295 = 392046U;
static uint8_t x296 = 1U;
uint32_t x298 = 0U;
int16_t x299 = INT16_MIN;
int16_t x369 = INT16_MIN;
uint64_t x371 = 327350326484LLU;
uint64_t x372 = 2LLU;
static uint64_t t8 = 1633LLU;
static uint64_t x423 = 2669861372405629435LLU;
int8_t x433 = INT8_MIN;
int16_t x447 = 6053;
uint32_t x483 = UINT32_MAX;
int16_t x505 = -13278;
static uint32_t x508 = 7U;
volatile uint64_t t15 = 2734757776251652918LLU;
static volatile int16_t x725 = INT16_MAX;
uint32_t x726 = 1407443U;
uint8_t x768 = 12U;
static uint16_t x849 = UINT16_MAX;
uint64_t x850 = UINT64_MAX;
volatile int64_t x851 = INT64_MAX;
int64_t x922 = INT64_MAX;
uint64_t x1075 = 13111226652LLU;
uint8_t x1076 = 0U;
int8_t x1207 = 1;
int8_t x1267 = 1;
uint8_t x1268 = 2U;
volatile int32_t x1335 = 349697;
uint32_t x1432 = 0U;
int32_t x1577 = -1;
int8_t x1578 = 2;
uint16_t x1790 = UINT16_MAX;
int8_t x1792 = 11;
volatile int64_t t28 = -70259218LL;
int16_t x1936 = 3;
volatile uint64_t t29 = 12556169681629LLU;
int8_t x1942 = 10;
int32_t x2001 = INT32_MIN;
volatile int32_t t33 = 1;
static int32_t x2237 = INT32_MIN;
volatile int64_t t35 = -14841463784LL;
uint64_t t36 = 22444067843202LLU;
volatile uint32_t t38 = 263U;


void f0(void) {
    	int64_t x45 = INT64_MIN;
	static int8_t x46 = -5;
	volatile uint64_t t0 = 8615507238378561LLU;

    t0 = (x45-((x46|x47)>>x48));

    if (t0 != 6917529027641081857LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x55 = 0;
	int64_t t1 = 1729766496LL;

    t1 = (x53-((x54|x55)>>x56));

    if (t1 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x155 = 0LL;
	volatile int8_t x156 = 0;
	int64_t t2 = -9LL;

    t2 = (x153-((x154|x155)>>x156));

    if (t2 != 8608LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x213 = 30637770LL;
	static uint16_t x214 = 1U;
	static uint32_t x215 = 27U;
	static volatile int8_t x216 = 12;
	static int64_t t3 = -208601407176262LL;

    t3 = (x213-((x214|x215)>>x216));

    if (t3 != 30637770LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x269 = 3U;
	static uint32_t x272 = 0U;
	volatile uint32_t t4 = 0U;

    t4 = (x269-((x270|x271)>>x272));

    if (t4 != 4292542468U) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x293 = 1;
	uint32_t t5 = 51169126U;

    t5 = (x293-((x294|x295)>>x296));

    if (t5 != 3221029450U) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint32_t x297 = UINT32_MAX;
	static uint16_t x300 = 0U;
	volatile uint32_t t6 = 587300U;

    t6 = (x297-((x298|x299)>>x300));

    if (t6 != 32767U) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x345 = -15;
	static uint32_t x346 = 1925U;
	volatile int16_t x347 = INT16_MIN;
	static int32_t x348 = 1;
	volatile uint32_t t7 = 948U;

    t7 = (x345-((x346|x347)>>x348));

    if (t7 != 2147499055U) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x370 = UINT8_MAX;

    t8 = (x369-((x370|x371)>>x372));

    if (t8 != 18446743991871937217LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x421 = UINT8_MAX;
	volatile int32_t x422 = -1;
	uint8_t x424 = 2U;
	uint64_t t9 = 8416608271312882LLU;

    t9 = (x421-((x422|x423)>>x424));

    if (t9 != 13835058055282163968LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint32_t x425 = 1188017780U;
	uint8_t x426 = UINT8_MAX;
	uint64_t x427 = 209336154185318LLU;
	uint8_t x428 = 10U;
	uint64_t t10 = 290495150LLU;

    t10 = (x425-((x426|x427)>>x428));

    if (t10 != 18446743870467731325LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x434 = INT64_MIN;
	uint64_t x435 = 989137215182052868LLU;
	uint8_t x436 = 0U;
	volatile uint64_t t11 = 20552382LLU;

    t11 = (x433-((x434|x435)>>x436));

    if (t11 != 8234234821672722812LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x445 = 3296LL;
	static volatile int32_t x446 = INT32_MAX;
	int16_t x448 = 1;
	volatile int64_t t12 = -4111089333500LL;

    t12 = (x445-((x446|x447)>>x448));

    if (t12 != -1073738527LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x481 = INT32_MIN;
	uint32_t x482 = 497214U;
	int16_t x484 = 3;
	volatile uint32_t t13 = 15U;

    t13 = (x481-((x482|x483)>>x484));

    if (t13 != 1610612737U) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x506 = INT64_MAX;
	volatile int8_t x507 = 28;
	volatile int64_t t14 = -3622LL;

    t14 = (x505-((x506|x507)>>x508));

    if (t14 != -72057594037941213LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x709 = INT64_MAX;
	static uint16_t x710 = UINT16_MAX;
	uint64_t x711 = 363592471532570393LLU;
	volatile uint64_t x712 = 0LLU;

    t15 = (x709-((x710|x711)>>x712));

    if (t15 != 8859779565322174464LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x727 = 103U;
	int16_t x728 = 1;
	static volatile uint32_t t16 = 25970U;

    t16 = (x725-((x726|x727)>>x728));

    if (t16 != 4294296324U) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x765 = 5U;
	uint16_t x766 = 122U;
	int16_t x767 = 3;
	volatile int32_t t17 = 0;

    t17 = (x765-((x766|x767)>>x768));

    if (t17 != 5) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x852 = 0;
	uint64_t t18 = 4LLU;

    t18 = (x849-((x850|x851)>>x852));

    if (t18 != 65536LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x921 = -28;
	uint32_t x923 = 74507U;
	uint16_t x924 = 58U;
	volatile int64_t t19 = -13177565825LL;

    t19 = (x921-((x922|x923)>>x924));

    if (t19 != -59LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x1073 = -2953546;
	uint32_t x1074 = UINT32_MAX;
	volatile uint64_t t20 = 185079964LLU;

    t20 = (x1073-((x1074|x1075)>>x1076));

    if (t20 != 18446744056526728887LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x1205 = 3583U;
	volatile int16_t x1206 = 1;
	uint32_t x1208 = 2U;
	int32_t t21 = -20;

    t21 = (x1205-((x1206|x1207)>>x1208));

    if (t21 != 3583) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x1265 = INT16_MIN;
	int8_t x1266 = 7;
	volatile int32_t t22 = -34294437;

    t22 = (x1265-((x1266|x1267)>>x1268));

    if (t22 != -32769) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x1333 = UINT32_MAX;
	uint32_t x1334 = 486775516U;
	uint8_t x1336 = 4U;
	uint32_t t23 = 6U;

    t23 = (x1333-((x1334|x1335)>>x1336));

    if (t23 != 4264526354U) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint64_t x1429 = 207093486LLU;
	int16_t x1430 = INT16_MAX;
	int8_t x1431 = 0;
	volatile uint64_t t24 = 341690335883001LLU;

    t24 = (x1429-((x1430|x1431)>>x1432));

    if (t24 != 207060719LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x1579 = 14U;
	int8_t x1580 = 4;
	int32_t t25 = 57;

    t25 = (x1577-((x1578|x1579)>>x1580));

    if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x1689 = -1LL;
	volatile uint64_t x1690 = UINT64_MAX;
	uint64_t x1691 = 10940144712335687LLU;
	uint32_t x1692 = 26U;
	uint64_t t26 = 530885LLU;

    t26 = (x1689-((x1690|x1691)>>x1692));

    if (t26 != 18446743798831644672LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x1717 = INT64_MAX;
	int16_t x1718 = 547;
	volatile uint64_t x1719 = UINT64_MAX;
	uint8_t x1720 = 2U;
	static volatile uint64_t t27 = 27284844869335LLU;

    t27 = (x1717-((x1718|x1719)>>x1720));

    if (t27 != 4611686018427387904LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int64_t x1789 = -1LL;
	int8_t x1791 = 7;

    t28 = (x1789-((x1790|x1791)>>x1792));

    if (t28 != -32LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x1933 = 15U;
	volatile uint64_t x1934 = UINT64_MAX;
	int16_t x1935 = -1;

    t29 = (x1933-((x1934|x1935)>>x1936));

    if (t29 != 16140901064495857680LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x1941 = -1;
	int64_t x1943 = INT64_MAX;
	int8_t x1944 = 0;
	static int64_t t30 = INT64_MIN;

    t30 = (x1941-((x1942|x1943)>>x1944));

    if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x1945 = 5153118203LL;
	static int64_t x1946 = 988289344464LL;
	int16_t x1947 = 953;
	uint8_t x1948 = 7U;
	int64_t t31 = -137515317510892LL;

    t31 = (x1945-((x1946|x1947)>>x1948));

    if (t31 != -2567892300LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x2002 = 0U;
	uint64_t x2003 = 42966517LLU;
	int16_t x2004 = 1;
	uint64_t t32 = 175270953LLU;

    t32 = (x2001-((x2002|x2003)>>x2004));

    if (t32 != 18446744071540584710LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x2029 = INT8_MIN;
	int8_t x2030 = INT8_MAX;
	volatile int32_t x2031 = INT32_MAX;
	uint64_t x2032 = 26LLU;

    t33 = (x2029-((x2030|x2031)>>x2032));

    if (t33 != -159) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x2209 = INT16_MAX;
	int32_t x2210 = INT32_MAX;
	uint32_t x2211 = 524968406U;
	int16_t x2212 = 0;
	uint32_t t34 = 4794215U;

    t34 = (x2209-((x2210|x2211)>>x2212));

    if (t34 != 2147516416U) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x2238 = INT64_MAX;
	int8_t x2239 = INT8_MAX;
	volatile int8_t x2240 = 1;

    t35 = (x2237-((x2238|x2239)>>x2240));

    if (t35 != -4611686020574871551LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x2325 = UINT64_MAX;
	int16_t x2326 = INT16_MAX;
	uint8_t x2327 = 21U;
	static int32_t x2328 = 12;

    t36 = (x2325-((x2326|x2327)>>x2328));

    if (t36 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x2397 = 533U;
	int64_t x2398 = INT64_MIN;
	volatile uint64_t x2399 = UINT64_MAX;
	static uint32_t x2400 = 3U;
	uint64_t t37 = 13606527780LLU;

    t37 = (x2397-((x2398|x2399)>>x2400));

    if (t37 != 16140901064495858198LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint32_t x2445 = 129U;
	int8_t x2446 = INT8_MAX;
	int32_t x2447 = 243854;
	volatile uint32_t x2448 = 5U;

    t38 = (x2445-((x2446|x2447)>>x2448));

    if (t38 != 4294959802U) { NG(); } else { ; }
	
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


    return 0;
}

