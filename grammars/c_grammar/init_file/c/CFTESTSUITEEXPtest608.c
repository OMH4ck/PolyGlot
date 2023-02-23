
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

static volatile int32_t t0 = 959342;
static uint8_t x54 = UINT8_MAX;
int8_t x55 = INT8_MIN;
int8_t x79 = -1;
uint8_t x80 = 0U;
volatile uint32_t x81 = 41U;
int8_t x84 = -1;
volatile uint64_t x236 = UINT64_MAX;
volatile int8_t x462 = -1;
uint32_t x470 = 2U;
volatile uint32_t x472 = UINT32_MAX;
int32_t x540 = -1;
int32_t t8 = 7247;
uint64_t t9 = 325417658915515331LLU;
uint32_t x605 = 7957U;
volatile int16_t x606 = INT16_MIN;
static int64_t x619 = -1LL;
static volatile int8_t x631 = INT8_MAX;
int8_t x688 = -1;
static uint8_t x796 = 0U;
volatile uint64_t t16 = 2396043611LLU;
static uint32_t x873 = 16071773U;
uint32_t t17 = 999769153U;
int32_t x921 = 63857;
volatile int32_t x923 = INT32_MIN;
uint32_t t20 = 693U;
int16_t x1055 = INT16_MIN;
int64_t x1065 = 7231842878LL;
int32_t x1068 = -1;
uint8_t x1169 = 3U;
int64_t x1171 = INT64_MIN;
int32_t t24 = -3712546;
volatile uint64_t x1346 = 211693839408691476LLU;
int64_t x1347 = INT64_MIN;
int32_t t26 = 14846;
uint64_t x1509 = 584210945236549LLU;
int8_t x1512 = -1;
uint16_t x1522 = 196U;
int8_t x1524 = -1;
int8_t x1566 = INT8_MAX;
static volatile int32_t x1568 = -1;
int16_t x1706 = -8216;
int32_t x1828 = -1;
uint8_t x1833 = UINT8_MAX;
int8_t x1836 = -1;
static volatile int32_t t35 = 472123;
static int16_t x1888 = -1;
volatile uint32_t x2090 = 40446U;
uint8_t x2181 = 42U;
uint64_t x2182 = 223LLU;
int32_t x2184 = -12;
uint16_t x2186 = UINT16_MAX;
volatile int32_t t40 = -138968;
volatile int64_t t42 = -11795213LL;
uint64_t x2365 = UINT64_MAX;
static int8_t x2368 = 1;
int16_t x2430 = INT16_MIN;
int16_t x2492 = -1;
int32_t x2585 = 791471;
int64_t x2588 = -5LL;
static int32_t x2720 = -1;
volatile int32_t x2763 = -1464485;
static uint64_t x2772 = UINT64_MAX;
int64_t x2813 = 0LL;
int16_t x2842 = -6374;
static int16_t x2862 = -1;
uint16_t x2864 = 0U;
volatile int32_t t54 = 0;
uint64_t x2973 = 246517LLU;
int32_t x3157 = 866363;
int16_t x3160 = -1;
uint32_t x3321 = UINT32_MAX;
static uint16_t x3521 = 41U;
int8_t x3523 = INT8_MIN;
static uint16_t x3545 = UINT16_MAX;
uint32_t x3548 = UINT32_MAX;
volatile uint8_t x3554 = UINT8_MAX;
volatile int32_t t63 = -22373930;


void f0(void) {
    	static volatile int16_t x21 = 3;
	int32_t x22 = INT32_MIN;
	volatile int32_t x23 = INT32_MIN;
	uint32_t x24 = UINT32_MAX;

    t0 = (x21<<((x22/x23)-x24));

    if (t0 != 12) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x53 = 26104183323LL;
	int16_t x56 = -1;
	volatile int64_t t1 = -1780134093821398303LL;

    t1 = (x53<<((x54/x55)-x56));

    if (t1 != 26104183323LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x77 = UINT32_MAX;
	static int32_t x78 = -1;
	static volatile uint32_t t2 = 88724U;

    t2 = (x77<<((x78/x79)-x80));

    if (t2 != 4294967294U) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x82 = 285;
	uint16_t x83 = UINT16_MAX;
	uint32_t t3 = 30437504U;

    t3 = (x81<<((x82/x83)-x84));

    if (t3 != 82U) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x233 = 127290LL;
	volatile int32_t x234 = INT32_MIN;
	volatile uint64_t x235 = UINT64_MAX;
	int64_t t4 = 4194976394LL;

    t4 = (x233<<((x234/x235)-x236));

    if (t4 != 254580LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint16_t x349 = 992U;
	volatile int16_t x350 = -1;
	volatile int64_t x351 = 30819883536156LL;
	static int8_t x352 = -1;
	volatile int32_t t5 = -485;

    t5 = (x349<<((x350/x351)-x352));

    if (t5 != 1984) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x461 = UINT32_MAX;
	volatile int8_t x463 = INT8_MAX;
	int16_t x464 = -1;
	volatile uint32_t t6 = 3326552U;

    t6 = (x461<<((x462/x463)-x464));

    if (t6 != 4294967294U) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x469 = UINT16_MAX;
	int8_t x471 = INT8_MAX;
	int32_t t7 = -37859;

    t7 = (x469<<((x470/x471)-x472));

    if (t7 != 131070) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x537 = UINT16_MAX;
	int64_t x538 = INT64_MIN;
	int64_t x539 = INT64_MIN;

    t8 = (x537<<((x538/x539)-x540));

    if (t8 != 262140) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x589 = UINT64_MAX;
	int32_t x590 = INT32_MIN;
	static uint64_t x591 = UINT64_MAX;
	volatile int8_t x592 = -1;

    t9 = (x589<<((x590/x591)-x592));

    if (t9 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x607 = -1282629LL;
	int8_t x608 = -1;
	volatile uint32_t t10 = 1448564U;

    t10 = (x605<<((x606/x607)-x608));

    if (t10 != 15914U) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x617 = 35827U;
	int8_t x618 = -1;
	int64_t x620 = -1LL;
	uint32_t t11 = 229984090U;

    t11 = (x617<<((x618/x619)-x620));

    if (t11 != 143308U) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x629 = 20;
	int16_t x630 = -58;
	int8_t x632 = -1;
	volatile int32_t t12 = 743564121;

    t12 = (x629<<((x630/x631)-x632));

    if (t12 != 40) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x685 = 55;
	int32_t x686 = INT32_MIN;
	int64_t x687 = 6925644521230121LL;
	int32_t t13 = 1;

    t13 = (x685<<((x686/x687)-x688));

    if (t13 != 110) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int32_t x749 = INT32_MAX;
	uint16_t x750 = 15920U;
	static int64_t x751 = -145452790931LL;
	uint32_t x752 = 0U;
	int32_t t14 = INT32_MAX;

    t14 = (x749<<((x750/x751)-x752));

    if (t14 != INT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint64_t x793 = 4740051677156637LLU;
	static volatile uint16_t x794 = 5U;
	int16_t x795 = INT16_MAX;
	static volatile uint64_t t15 = 11357598690287LLU;

    t15 = (x793<<((x794/x795)-x796));

    if (t15 != 4740051677156637LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x833 = 27LLU;
	static uint16_t x834 = 798U;
	uint8_t x835 = UINT8_MAX;
	int8_t x836 = -1;

    t16 = (x833<<((x834/x835)-x836));

    if (t16 != 432LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x874 = UINT32_MAX;
	int8_t x875 = -1;
	int8_t x876 = 0;

    t17 = (x873<<((x874/x875)-x876));

    if (t17 != 32143546U) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x922 = INT32_MIN;
	int8_t x924 = -1;
	int32_t t18 = 4257915;

    t18 = (x921<<((x922/x923)-x924));

    if (t18 != 255428) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x929 = UINT16_MAX;
	int16_t x930 = -1;
	uint8_t x931 = UINT8_MAX;
	int8_t x932 = -8;
	static int32_t t19 = 17785;

    t19 = (x929<<((x930/x931)-x932));

    if (t19 != 16776960) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x981 = 323066U;
	static int64_t x982 = -1LL;
	int64_t x983 = -44LL;
	volatile uint8_t x984 = 0U;

    t20 = (x981<<((x982/x983)-x984));

    if (t20 != 323066U) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint32_t x1053 = 4697082U;
	int16_t x1054 = INT16_MAX;
	volatile int8_t x1056 = -1;
	uint32_t t21 = 704417057U;

    t21 = (x1053<<((x1054/x1055)-x1056));

    if (t21 != 9394164U) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint16_t x1066 = 2454U;
	static uint32_t x1067 = UINT32_MAX;
	int64_t t22 = 29237160113056LL;

    t22 = (x1065<<((x1066/x1067)-x1068));

    if (t22 != 14463685756LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x1170 = 2161623451975576LLU;
	uint64_t x1172 = 0LLU;
	int32_t t23 = 30674201;

    t23 = (x1169<<((x1170/x1171)-x1172));

    if (t23 != 3) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x1301 = 0;
	int64_t x1302 = INT64_MAX;
	uint64_t x1303 = UINT64_MAX;
	static int64_t x1304 = -1LL;

    t24 = (x1301<<((x1302/x1303)-x1304));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x1345 = INT16_MAX;
	volatile int32_t x1348 = -1;
	int32_t t25 = 100969;

    t25 = (x1345<<((x1346/x1347)-x1348));

    if (t25 != 65534) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint8_t x1413 = UINT8_MAX;
	static volatile int64_t x1414 = -1LL;
	int16_t x1415 = -1;
	int8_t x1416 = -1;

    t26 = (x1413<<((x1414/x1415)-x1416));

    if (t26 != 1020) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x1457 = UINT8_MAX;
	static uint64_t x1458 = UINT64_MAX;
	uint64_t x1459 = UINT64_MAX;
	volatile int64_t x1460 = -1LL;
	volatile int32_t t27 = 627;

    t27 = (x1457<<((x1458/x1459)-x1460));

    if (t27 != 1020) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint32_t x1485 = 6894911U;
	uint8_t x1486 = UINT8_MAX;
	int8_t x1487 = INT8_MIN;
	int32_t x1488 = -10;
	volatile uint32_t t28 = 165948U;

    t28 = (x1485<<((x1486/x1487)-x1488));

    if (t28 != 3530194432U) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x1510 = 1;
	volatile uint16_t x1511 = 6499U;
	uint64_t t29 = 61687997050039737LLU;

    t29 = (x1509<<((x1510/x1511)-x1512));

    if (t29 != 1168421890473098LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x1521 = UINT32_MAX;
	uint32_t x1523 = UINT32_MAX;
	static volatile uint32_t t30 = 5182U;

    t30 = (x1521<<((x1522/x1523)-x1524));

    if (t30 != 4294967294U) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x1565 = 89282971U;
	volatile int8_t x1567 = INT8_MAX;
	uint32_t t31 = 1368831U;

    t31 = (x1565<<((x1566/x1567)-x1568));

    if (t31 != 357131884U) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint32_t x1705 = UINT32_MAX;
	uint32_t x1707 = UINT32_MAX;
	int16_t x1708 = 0;
	static uint32_t t32 = UINT32_MAX;

    t32 = (x1705<<((x1706/x1707)-x1708));

    if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x1781 = 0;
	int8_t x1782 = INT8_MIN;
	int64_t x1783 = -9577LL;
	static volatile int32_t x1784 = -1;
	volatile int32_t t33 = -3997;

    t33 = (x1781<<((x1782/x1783)-x1784));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int64_t x1825 = 6LL;
	int32_t x1826 = -5;
	volatile uint16_t x1827 = 700U;
	volatile int64_t t34 = -242945212LL;

    t34 = (x1825<<((x1826/x1827)-x1828));

    if (t34 != 12LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x1834 = INT8_MIN;
	uint8_t x1835 = UINT8_MAX;

    t35 = (x1833<<((x1834/x1835)-x1836));

    if (t35 != 510) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x1885 = 12508U;
	volatile int32_t x1886 = 3;
	int64_t x1887 = INT64_MIN;
	uint32_t t36 = 244886U;

    t36 = (x1885<<((x1886/x1887)-x1888));

    if (t36 != 25016U) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x1993 = 5;
	int8_t x1994 = INT8_MIN;
	int8_t x1995 = -1;
	int8_t x1996 = INT8_MAX;
	volatile int32_t t37 = -10609;

    t37 = (x1993<<((x1994/x1995)-x1996));

    if (t37 != 10) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint32_t x2089 = UINT32_MAX;
	uint16_t x2091 = UINT16_MAX;
	static uint64_t x2092 = UINT64_MAX;
	uint32_t t38 = 25016534U;

    t38 = (x2089<<((x2090/x2091)-x2092));

    if (t38 != 4294967294U) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint64_t x2183 = UINT64_MAX;
	volatile int32_t t39 = -540005187;

    t39 = (x2181<<((x2182/x2183)-x2184));

    if (t39 != 172032) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x2185 = 19U;
	uint64_t x2187 = 1108152LLU;
	static volatile int16_t x2188 = -1;

    t40 = (x2185<<((x2186/x2187)-x2188));

    if (t40 != 38) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile uint16_t x2229 = 1U;
	int32_t x2230 = INT32_MAX;
	uint16_t x2231 = UINT16_MAX;
	static int16_t x2232 = INT16_MAX;
	static int32_t t41 = 11904;

    t41 = (x2229<<((x2230/x2231)-x2232));

    if (t41 != 2) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x2281 = 25071345384177356LL;
	volatile uint16_t x2282 = 32569U;
	int64_t x2283 = INT64_MIN;
	int32_t x2284 = -1;

    t42 = (x2281<<((x2282/x2283)-x2284));

    if (t42 != 50142690768354712LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x2366 = 407U;
	static volatile uint32_t x2367 = 13U;
	uint64_t t43 = 54196016746521LLU;

    t43 = (x2365<<((x2366/x2367)-x2368));

    if (t43 != 18446744072635809792LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x2429 = 6926LL;
	int32_t x2431 = 36810;
	int64_t x2432 = -30LL;
	volatile int64_t t44 = -4358286LL;

    t44 = (x2429<<((x2430/x2431)-x2432));

    if (t44 != 7436735873024LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x2489 = 15U;
	volatile int16_t x2490 = INT16_MIN;
	static uint32_t x2491 = UINT32_MAX;
	volatile int32_t t45 = 30;

    t45 = (x2489<<((x2490/x2491)-x2492));

    if (t45 != 30) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint16_t x2586 = 56U;
	int8_t x2587 = INT8_MIN;
	int32_t t46 = -100830461;

    t46 = (x2585<<((x2586/x2587)-x2588));

    if (t46 != 25327072) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x2717 = 476893616511LLU;
	int32_t x2718 = INT32_MIN;
	uint64_t x2719 = UINT64_MAX;
	volatile uint64_t t47 = 236964236LLU;

    t47 = (x2717<<((x2718/x2719)-x2720));

    if (t47 != 953787233022LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x2761 = INT8_MAX;
	uint64_t x2762 = 1622725501LLU;
	int8_t x2764 = -1;
	volatile int32_t t48 = -101;

    t48 = (x2761<<((x2762/x2763)-x2764));

    if (t48 != 254) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x2769 = 883718LL;
	int8_t x2770 = -1;
	int16_t x2771 = 2;
	int64_t t49 = -41727267648LL;

    t49 = (x2769<<((x2770/x2771)-x2772));

    if (t49 != 1767436LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x2814 = 2U;
	volatile int16_t x2815 = INT16_MIN;
	volatile uint16_t x2816 = 0U;
	volatile int64_t t50 = 3120652LL;

    t50 = (x2813<<((x2814/x2815)-x2816));

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x2841 = 52646;
	volatile uint32_t x2843 = UINT32_MAX;
	static int32_t x2844 = -1;
	static int32_t t51 = 5;

    t51 = (x2841<<((x2842/x2843)-x2844));

    if (t51 != 105292) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint8_t x2849 = UINT8_MAX;
	static volatile int8_t x2850 = -1;
	int16_t x2851 = INT16_MIN;
	int8_t x2852 = -23;
	volatile int32_t t52 = 68280755;

    t52 = (x2849<<((x2850/x2851)-x2852));

    if (t52 != 2139095040) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x2861 = UINT16_MAX;
	int8_t x2863 = INT8_MIN;
	volatile int32_t t53 = 2266;

    t53 = (x2861<<((x2862/x2863)-x2864));

    if (t53 != 65535) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x2897 = UINT8_MAX;
	int64_t x2898 = INT64_MAX;
	int64_t x2899 = INT64_MAX;
	int32_t x2900 = -1;

    t54 = (x2897<<((x2898/x2899)-x2900));

    if (t54 != 1020) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x2925 = 14;
	uint8_t x2926 = 26U;
	volatile uint32_t x2927 = 10725U;
	uint64_t x2928 = UINT64_MAX;
	static int32_t t55 = -91;

    t55 = (x2925<<((x2926/x2927)-x2928));

    if (t55 != 28) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x2974 = -1;
	int64_t x2975 = INT64_MIN;
	volatile int32_t x2976 = -1;
	uint64_t t56 = 2096590940LLU;

    t56 = (x2973<<((x2974/x2975)-x2976));

    if (t56 != 493034LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x3049 = 7027;
	uint8_t x3050 = 54U;
	static volatile int16_t x3051 = INT16_MAX;
	int16_t x3052 = 0;
	int32_t t57 = 39;

    t57 = (x3049<<((x3050/x3051)-x3052));

    if (t57 != 7027) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x3158 = -1;
	static int8_t x3159 = INT8_MIN;
	int32_t t58 = 836;

    t58 = (x3157<<((x3158/x3159)-x3160));

    if (t58 != 1732726) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x3322 = -1;
	int64_t x3323 = INT64_MAX;
	volatile int16_t x3324 = 0;
	static volatile uint32_t t59 = UINT32_MAX;

    t59 = (x3321<<((x3322/x3323)-x3324));

    if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint8_t x3522 = UINT8_MAX;
	int8_t x3524 = -1;
	int32_t t60 = -1;

    t60 = (x3521<<((x3522/x3523)-x3524));

    if (t60 != 41) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x3546 = -1;
	uint32_t x3547 = UINT32_MAX;
	static int32_t t61 = -71497;

    t61 = (x3545<<((x3546/x3547)-x3548));

    if (t61 != 262140) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x3553 = 107846;
	int64_t x3555 = INT64_MAX;
	int32_t x3556 = -1;
	volatile int32_t t62 = 20;

    t62 = (x3553<<((x3554/x3555)-x3556));

    if (t62 != 215692) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile uint16_t x3649 = UINT16_MAX;
	volatile uint16_t x3650 = 961U;
	uint16_t x3651 = 25512U;
	volatile int8_t x3652 = 0;

    t63 = (x3649<<((x3650/x3651)-x3652));

    if (t63 != 65535) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int8_t x3665 = INT8_MAX;
	int32_t x3666 = -1;
	static int8_t x3667 = INT8_MIN;
	volatile uint32_t x3668 = UINT32_MAX;
	int32_t t64 = 76244;

    t64 = (x3665<<((x3666/x3667)-x3668));

    if (t64 != 254) { NG(); } else { ; }
	
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


    return 0;
}

