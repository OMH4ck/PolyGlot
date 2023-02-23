
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

uint32_t x49 = UINT32_MAX;
int32_t x52 = -1;
int8_t x61 = 25;
int16_t x253 = -1886;
uint8_t x255 = 20U;
volatile int16_t x310 = 1969;
uint8_t x335 = 3U;
volatile uint64_t t5 = 400127824214337LLU;
static uint32_t x351 = 3U;
int64_t x401 = -23678010975515LL;
volatile int64_t t7 = -7411760LL;
uint8_t x473 = 15U;
int32_t t8 = -154663385;
static uint64_t x534 = UINT64_MAX;
volatile int32_t t10 = 489216511;
static uint8_t x579 = 2U;
uint16_t x594 = 100U;
static uint8_t x595 = 1U;
uint32_t t12 = 775236668U;
int8_t x629 = -3;
uint8_t x693 = UINT8_MAX;
static uint8_t x695 = 4U;
int16_t x726 = INT16_MAX;
int16_t x727 = 0;
int32_t t15 = 21;
uint16_t x821 = UINT16_MAX;
volatile int64_t t18 = -45722LL;
int32_t t19 = 1;
static uint64_t x917 = 124675783289208289LLU;
int8_t x923 = 4;
volatile uint64_t t21 = UINT64_MAX;
static int64_t x1034 = INT64_MAX;
int32_t x1052 = -1;
uint16_t x1055 = 3U;
uint32_t t26 = 7U;
uint8_t x1215 = 0U;
volatile int32_t t27 = -686;
uint64_t x1274 = 23924574388LLU;
volatile int8_t x1449 = INT8_MAX;
int64_t x1460 = INT64_MAX;
int32_t t32 = INT32_MIN;
int32_t t33 = 226;
static int32_t t35 = 1805;
int8_t x1742 = 1;
static int8_t x1953 = 11;
uint8_t x1955 = 0U;
volatile int32_t t39 = 6864;
volatile int16_t x2084 = INT16_MIN;
uint64_t x2089 = 55934227LLU;
int64_t x2133 = 2627456290092379442LL;
uint32_t x2135 = 1U;
int32_t t43 = -1031406992;
static uint8_t x2363 = 6U;
static int8_t x2364 = -1;
int8_t x2485 = -1;
volatile uint32_t x2486 = UINT32_MAX;
volatile int16_t x2488 = -3356;
static uint8_t x2597 = 1U;
static uint32_t x2689 = 26624U;
int64_t x2692 = -18174LL;
uint64_t x2755 = 6LLU;
uint8_t x2862 = 1U;
int32_t x2889 = INT32_MIN;
volatile uint32_t t56 = 1478754U;
int32_t x3069 = -250338;
int8_t x3071 = 3;
static volatile uint16_t x3266 = 4088U;
int32_t t60 = 43;
uint32_t x3386 = UINT32_MAX;
int16_t x3678 = INT16_MAX;
int64_t x3680 = INT64_MAX;
int8_t x3768 = INT8_MIN;
volatile uint16_t x3776 = 15U;
static uint64_t x3777 = UINT64_MAX;
int8_t x3822 = INT8_MAX;
int8_t x3862 = 14;
int64_t x3932 = -13502LL;
uint8_t x4033 = 3U;
int32_t x4037 = -1;
uint64_t x4038 = 13LLU;
uint16_t x4039 = 0U;
int8_t x4053 = INT8_MIN;
uint8_t x4167 = 0U;
int32_t x4238 = INT32_MAX;
int64_t x4240 = INT64_MIN;
volatile int32_t t76 = 265923584;
static int32_t x4242 = 3399;
int32_t t77 = -26777447;
volatile int32_t t80 = -1;
uint32_t x4472 = 83565503U;
static int16_t x4484 = INT16_MAX;
int32_t x4501 = 770753801;
static volatile int32_t t83 = 69874;
uint64_t x4534 = 920976591253210LLU;
int32_t x4641 = -1;
uint8_t x5057 = 1U;
uint64_t x5058 = 3626840LLU;
int32_t t89 = -6;
static uint16_t x5189 = 14U;
int8_t x5192 = INT8_MAX;
volatile int32_t x5233 = INT32_MIN;
int8_t x5235 = 25;
int8_t x5236 = 47;
int64_t x5478 = 862900636469LL;
uint8_t x5479 = 17U;
int8_t x5511 = 3;
static int8_t x5537 = INT8_MIN;
static volatile int32_t t96 = 44;
int32_t t99 = 33260205;
int32_t x5865 = -1;
volatile uint64_t x5906 = UINT64_MAX;
int8_t x5907 = 0;
volatile int16_t x5908 = -1;
uint32_t x5945 = 74U;
static uint32_t t102 = 55761U;
int8_t x5957 = INT8_MAX;
uint64_t x5958 = 990LLU;
uint8_t x6145 = UINT8_MAX;
uint8_t x6146 = 1U;
int32_t t105 = 65526;
int8_t x6249 = -10;
int16_t x6564 = -423;
uint32_t x6567 = 21U;
static int64_t x6617 = INT64_MAX;
uint32_t x6618 = 774U;
static uint64_t x6619 = 0LLU;
volatile uint16_t x6620 = UINT16_MAX;
static uint16_t x6649 = 2340U;
uint64_t x6750 = 463LLU;
static int32_t x6945 = -5;
int64_t x6948 = -80345107669LL;
static int8_t x6989 = INT8_MIN;
int16_t x7125 = INT16_MIN;
uint16_t x7790 = 14U;
static int16_t x7792 = -1;
uint16_t x7815 = 2U;
int16_t x7816 = INT16_MIN;
static volatile uint16_t x8035 = 15U;
uint32_t x8146 = 67494454U;
uint8_t x8147 = 3U;
int8_t x8148 = INT8_MIN;
static uint16_t x8295 = 1U;
int8_t x8473 = 1;
int32_t x8563 = 14;
uint16_t x8613 = UINT16_MAX;
uint16_t x8754 = 469U;
int16_t x8861 = INT16_MAX;
volatile int32_t t145 = 138;
int8_t x9070 = 1;
int8_t x9134 = 1;
int64_t t147 = -38LL;
int64_t t149 = 45520857157LL;
uint32_t t150 = UINT32_MAX;
int8_t x9545 = -1;
static uint32_t x9546 = 19U;
uint32_t x9709 = 749531402U;
int32_t x9714 = INT32_MAX;
volatile uint32_t x9716 = UINT32_MAX;
static volatile int8_t x9772 = INT8_MIN;
volatile uint64_t t156 = 34LLU;
uint16_t x9779 = 3U;
volatile uint32_t t158 = 802836U;
int32_t x10149 = INT32_MIN;
int8_t x10152 = 0;
int32_t x10176 = -1;
volatile int16_t x10365 = INT16_MIN;
static int64_t x10366 = 1142LL;
volatile int32_t x10368 = -17928891;
int32_t t165 = 14722464;
int16_t x10620 = INT16_MAX;
static uint32_t x10651 = 1U;
int8_t x10652 = INT8_MIN;
int16_t x10724 = -1;
int8_t x10761 = -1;
uint64_t x10844 = 8270185LLU;
uint32_t x11010 = UINT32_MAX;
int32_t t171 = 69699993;
int16_t x11059 = 3;
volatile uint32_t x11215 = 0U;
int16_t x11304 = INT16_MIN;
uint16_t x11390 = 49U;
volatile uint8_t x11527 = 1U;
int8_t x11561 = INT8_MIN;
volatile uint32_t t181 = 436647U;
int8_t x11654 = 0;
volatile int32_t t182 = -12288037;
uint64_t x11864 = 1297580LLU;
volatile int32_t x12087 = 24;
int64_t x12229 = INT64_MIN;
uint64_t x12230 = 4562806494036955150LLU;
int8_t x12340 = INT8_MIN;
static volatile int32_t t192 = 22;
volatile int32_t t193 = 28125;
volatile uint32_t x12389 = UINT32_MAX;
volatile int32_t x12395 = 0;
int16_t x12441 = -1;
int8_t x12443 = 0;
volatile int32_t x12500 = -1;


void f0(void) {
    	static volatile int32_t x50 = 225;
	volatile uint16_t x51 = 3U;
	volatile uint32_t t0 = 3543U;

    t0 = (x49^((x50<<x51)>x52));

    if (t0 != 4294967294U) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint8_t x62 = UINT8_MAX;
	uint32_t x63 = 0U;
	uint32_t x64 = 1U;
	volatile int32_t t1 = -100257;

    t1 = (x61^((x62<<x63)>x64));

    if (t1 != 24) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x125 = -50;
	volatile uint64_t x126 = UINT64_MAX;
	uint32_t x127 = 29U;
	volatile int64_t x128 = -30LL;
	int32_t t2 = 26172;

    t2 = (x125^((x126<<x127)>x128));

    if (t2 != -50) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x254 = 1417U;
	static uint16_t x256 = 13339U;
	volatile int32_t t3 = -4;

    t3 = (x253^((x254<<x255)>x256));

    if (t3 != -1885) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x309 = 6U;
	uint32_t x311 = 17U;
	int64_t x312 = 6757700LL;
	uint32_t t4 = 1843U;

    t4 = (x309^((x310<<x311)>x312));

    if (t4 != 7U) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint64_t x333 = 1134529835679591LLU;
	volatile uint8_t x334 = UINT8_MAX;
	int16_t x336 = INT16_MAX;

    t5 = (x333^((x334<<x335)>x336));

    if (t5 != 1134529835679591LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x349 = -19;
	uint16_t x350 = 7637U;
	volatile uint8_t x352 = 119U;
	int32_t t6 = 63522;

    t6 = (x349^((x350<<x351)>x352));

    if (t6 != -20) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x402 = INT64_MAX;
	int8_t x403 = 0;
	int32_t x404 = INT32_MAX;

    t7 = (x401^((x402<<x403)>x404));

    if (t7 != -23678010975516LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint64_t x474 = 609506293295LLU;
	int8_t x475 = 56;
	int8_t x476 = 0;

    t8 = (x473^((x474<<x475)>x476));

    if (t8 != 14) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x505 = INT64_MIN;
	uint32_t x506 = 232580849U;
	static uint8_t x507 = 14U;
	int8_t x508 = -2;
	int64_t t9 = INT64_MIN;

    t9 = (x505^((x506<<x507)>x508));

    if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x533 = INT32_MIN;
	static uint16_t x535 = 0U;
	int64_t x536 = INT64_MIN;

    t10 = (x533^((x534<<x535)>x536));

    if (t10 != -2147483647) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x577 = UINT32_MAX;
	uint64_t x578 = 12099547903993195LLU;
	int8_t x580 = INT8_MAX;
	static uint32_t t11 = 97401907U;

    t11 = (x577^((x578<<x579)>x580));

    if (t11 != 4294967294U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x593 = 166994273U;
	uint64_t x596 = 14502345688813LLU;

    t12 = (x593^((x594<<x595)>x596));

    if (t12 != 166994273U) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint32_t x630 = 92U;
	int16_t x631 = 1;
	int64_t x632 = 1LL;
	int32_t t13 = 17;

    t13 = (x629^((x630<<x631)>x632));

    if (t13 != -4) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x694 = 535U;
	int64_t x696 = INT64_MIN;
	volatile int32_t t14 = 324748369;

    t14 = (x693^((x694<<x695)>x696));

    if (t14 != 254) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x725 = -1;
	static int8_t x728 = -1;

    t15 = (x725^((x726<<x727)>x728));

    if (t15 != -2) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x737 = 0U;
	static uint8_t x738 = UINT8_MAX;
	static int8_t x739 = 3;
	static uint8_t x740 = 105U;
	static uint32_t t16 = 27U;

    t16 = (x737^((x738<<x739)>x740));

    if (t16 != 1U) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint64_t x822 = UINT64_MAX;
	static volatile int16_t x823 = 30;
	int16_t x824 = 2765;
	volatile int32_t t17 = -305780507;

    t17 = (x821^((x822<<x823)>x824));

    if (t17 != 65534) { NG(); } else { ; }
	
}

void f18(void) {
    	static int64_t x881 = -1LL;
	uint16_t x882 = UINT16_MAX;
	static uint8_t x883 = 9U;
	int32_t x884 = INT32_MIN;

    t18 = (x881^((x882<<x883)>x884));

    if (t18 != -2LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x901 = INT32_MIN;
	static volatile uint16_t x902 = 12600U;
	int8_t x903 = 0;
	int8_t x904 = INT8_MIN;

    t19 = (x901^((x902<<x903)>x904));

    if (t19 != -2147483647) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x918 = UINT64_MAX;
	volatile uint8_t x919 = 34U;
	volatile int32_t x920 = INT32_MIN;
	volatile uint64_t t20 = 51LLU;

    t20 = (x917^((x918<<x919)>x920));

    if (t20 != 124675783289208289LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x921 = UINT64_MAX;
	uint32_t x922 = 3277954U;
	int64_t x924 = INT64_MAX;

    t21 = (x921^((x922<<x923)>x924));

    if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x973 = -1;
	volatile uint64_t x974 = 2682680198LLU;
	volatile int64_t x975 = 0LL;
	int8_t x976 = INT8_MAX;
	int32_t t22 = -21;

    t22 = (x973^((x974<<x975)>x976));

    if (t22 != -2) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x993 = -1;
	uint32_t x994 = UINT32_MAX;
	uint16_t x995 = 30U;
	int32_t x996 = INT32_MAX;
	int32_t t23 = 1;

    t23 = (x993^((x994<<x995)>x996));

    if (t23 != -2) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x1033 = -1;
	uint8_t x1035 = 0U;
	int32_t x1036 = 3964148;
	int32_t t24 = 11307;

    t24 = (x1033^((x1034<<x1035)>x1036));

    if (t24 != -2) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x1049 = INT32_MIN;
	uint64_t x1050 = 1650LLU;
	uint8_t x1051 = 8U;
	int32_t t25 = INT32_MIN;

    t25 = (x1049^((x1050<<x1051)>x1052));

    if (t25 != INT32_MIN) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x1053 = UINT32_MAX;
	static int64_t x1054 = 645261019502171774LL;
	int32_t x1056 = INT32_MAX;

    t26 = (x1053^((x1054<<x1055)>x1056));

    if (t26 != 4294967294U) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x1213 = INT8_MAX;
	uint16_t x1214 = 119U;
	int64_t x1216 = -455162182776LL;

    t27 = (x1213^((x1214<<x1215)>x1216));

    if (t27 != 126) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x1245 = INT8_MIN;
	int8_t x1246 = INT8_MAX;
	uint8_t x1247 = 0U;
	uint32_t x1248 = UINT32_MAX;
	volatile int32_t t28 = 1636558;

    t28 = (x1245^((x1246<<x1247)>x1248));

    if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x1273 = INT16_MAX;
	static int8_t x1275 = 13;
	int32_t x1276 = -1;
	static volatile int32_t t29 = -19641139;

    t29 = (x1273^((x1274<<x1275)>x1276));

    if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x1377 = INT16_MIN;
	uint32_t x1378 = UINT32_MAX;
	volatile int16_t x1379 = 0;
	int64_t x1380 = INT64_MAX;
	int32_t t30 = 0;

    t30 = (x1377^((x1378<<x1379)>x1380));

    if (t30 != -32768) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x1450 = INT8_MAX;
	volatile uint16_t x1451 = 4U;
	volatile int32_t x1452 = 132957956;
	int32_t t31 = 70;

    t31 = (x1449^((x1450<<x1451)>x1452));

    if (t31 != 127) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x1457 = INT32_MIN;
	int8_t x1458 = 2;
	volatile uint8_t x1459 = 7U;

    t32 = (x1457^((x1458<<x1459)>x1460));

    if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x1501 = INT16_MIN;
	uint32_t x1502 = 2822522U;
	int8_t x1503 = 0;
	static volatile uint8_t x1504 = 7U;

    t33 = (x1501^((x1502<<x1503)>x1504));

    if (t33 != -32767) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x1545 = INT64_MAX;
	static int16_t x1546 = 1;
	static uint8_t x1547 = 4U;
	int64_t x1548 = INT64_MIN;
	static int64_t t34 = -205872451LL;

    t34 = (x1545^((x1546<<x1547)>x1548));

    if (t34 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x1549 = 25130U;
	volatile uint8_t x1550 = 0U;
	static uint8_t x1551 = 8U;
	uint64_t x1552 = UINT64_MAX;

    t35 = (x1549^((x1550<<x1551)>x1552));

    if (t35 != 25130) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x1717 = -1;
	volatile uint16_t x1718 = UINT16_MAX;
	uint32_t x1719 = 2U;
	static int32_t x1720 = INT32_MAX;
	volatile int32_t t36 = 34025731;

    t36 = (x1717^((x1718<<x1719)>x1720));

    if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x1741 = 0;
	uint64_t x1743 = 4LLU;
	int16_t x1744 = INT16_MAX;
	int32_t t37 = 45356;

    t37 = (x1741^((x1742<<x1743)>x1744));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x1777 = 961637;
	uint64_t x1778 = 169705LLU;
	uint32_t x1779 = 58U;
	int32_t x1780 = INT32_MIN;
	int32_t t38 = -24;

    t38 = (x1777^((x1778<<x1779)>x1780));

    if (t38 != 961637) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x1954 = UINT32_MAX;
	uint16_t x1956 = 14689U;

    t39 = (x1953^((x1954<<x1955)>x1956));

    if (t39 != 10) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x2081 = 2730U;
	uint64_t x2082 = 3777223295570966LLU;
	static uint8_t x2083 = 0U;
	volatile int32_t t40 = -5151;

    t40 = (x2081^((x2082<<x2083)>x2084));

    if (t40 != 2730) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x2090 = UINT32_MAX;
	int16_t x2091 = 27;
	int8_t x2092 = -1;
	volatile uint64_t t41 = 87739LLU;

    t41 = (x2089^((x2090<<x2091)>x2092));

    if (t41 != 55934227LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x2134 = UINT32_MAX;
	volatile int16_t x2136 = INT16_MIN;
	int64_t t42 = 0LL;

    t42 = (x2133^((x2134<<x2135)>x2136));

    if (t42 != 2627456290092379443LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x2169 = -33;
	static int64_t x2170 = 3673980516LL;
	uint16_t x2171 = 1U;
	uint16_t x2172 = 2023U;

    t43 = (x2169^((x2170<<x2171)>x2172));

    if (t43 != -34) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x2301 = -1;
	int32_t x2302 = 69;
	volatile int16_t x2303 = 3;
	uint32_t x2304 = 417993U;
	int32_t t44 = 9131666;

    t44 = (x2301^((x2302<<x2303)>x2304));

    if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x2361 = INT32_MIN;
	uint32_t x2362 = 113023255U;
	volatile int32_t t45 = INT32_MIN;

    t45 = (x2361^((x2362<<x2363)>x2364));

    if (t45 != INT32_MIN) { NG(); } else { ; }
	
}

void f46(void) {
    	static int8_t x2487 = 1;
	volatile int32_t t46 = 1;

    t46 = (x2485^((x2486<<x2487)>x2488));

    if (t46 != -2) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x2598 = 1U;
	static uint16_t x2599 = 8U;
	int64_t x2600 = INT64_MAX;
	int32_t t47 = 57;

    t47 = (x2597^((x2598<<x2599)>x2600));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x2690 = 115U;
	uint32_t x2691 = 17U;
	static uint32_t t48 = 327008838U;

    t48 = (x2689^((x2690<<x2691)>x2692));

    if (t48 != 26625U) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int16_t x2729 = -1;
	int64_t x2730 = 30830614209096757LL;
	uint8_t x2731 = 0U;
	int8_t x2732 = INT8_MIN;
	volatile int32_t t49 = -1975570;

    t49 = (x2729^((x2730<<x2731)>x2732));

    if (t49 != -2) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x2753 = INT16_MAX;
	static uint16_t x2754 = 496U;
	static int32_t x2756 = -1;
	volatile int32_t t50 = 143489287;

    t50 = (x2753^((x2754<<x2755)>x2756));

    if (t50 != 32766) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x2773 = -1;
	volatile uint64_t x2774 = 3716766621LLU;
	int8_t x2775 = 45;
	int8_t x2776 = -1;
	static volatile int32_t t51 = -206666350;

    t51 = (x2773^((x2774<<x2775)>x2776));

    if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x2781 = 0;
	volatile uint64_t x2782 = 0LLU;
	uint32_t x2783 = 29U;
	uint8_t x2784 = 1U;
	volatile int32_t t52 = -312620;

    t52 = (x2781^((x2782<<x2783)>x2784));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x2837 = 2024LL;
	uint16_t x2838 = 435U;
	static int8_t x2839 = 1;
	static volatile int32_t x2840 = INT32_MIN;
	int64_t t53 = 0LL;

    t53 = (x2837^((x2838<<x2839)>x2840));

    if (t53 != 2025LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x2861 = INT16_MIN;
	volatile uint8_t x2863 = 5U;
	static volatile int32_t x2864 = 50328299;
	int32_t t54 = 737921;

    t54 = (x2861^((x2862<<x2863)>x2864));

    if (t54 != -32768) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x2890 = 1178832U;
	static int8_t x2891 = 6;
	uint8_t x2892 = UINT8_MAX;
	volatile int32_t t55 = 294;

    t55 = (x2889^((x2890<<x2891)>x2892));

    if (t55 != -2147483647) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x2901 = 4678U;
	int16_t x2902 = INT16_MAX;
	volatile uint8_t x2903 = 11U;
	int16_t x2904 = INT16_MAX;

    t56 = (x2901^((x2902<<x2903)>x2904));

    if (t56 != 4679U) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int32_t x2933 = 981253930;
	int32_t x2934 = 5;
	volatile uint32_t x2935 = 7U;
	volatile int16_t x2936 = -1;
	volatile int32_t t57 = 0;

    t57 = (x2933^((x2934<<x2935)>x2936));

    if (t57 != 981253931) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x3070 = 119U;
	int8_t x3072 = INT8_MIN;
	volatile int32_t t58 = -489941548;

    t58 = (x3069^((x3070<<x3071)>x3072));

    if (t58 != -250337) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint32_t x3173 = 178290247U;
	uint64_t x3174 = UINT64_MAX;
	int16_t x3175 = 14;
	static uint64_t x3176 = 1217428028LLU;
	static uint32_t t59 = 1587U;

    t59 = (x3173^((x3174<<x3175)>x3176));

    if (t59 != 178290246U) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x3265 = -1170247;
	uint32_t x3267 = 14U;
	int32_t x3268 = INT32_MAX;

    t60 = (x3265^((x3266<<x3267)>x3268));

    if (t60 != -1170247) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x3385 = INT64_MIN;
	uint16_t x3387 = 1U;
	uint64_t x3388 = UINT64_MAX;
	static int64_t t61 = INT64_MIN;

    t61 = (x3385^((x3386<<x3387)>x3388));

    if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x3445 = 32013;
	int8_t x3446 = 2;
	uint8_t x3447 = 3U;
	uint8_t x3448 = 14U;
	static volatile int32_t t62 = 3412;

    t62 = (x3445^((x3446<<x3447)>x3448));

    if (t62 != 32012) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x3569 = 62U;
	int8_t x3570 = INT8_MAX;
	uint16_t x3571 = 0U;
	volatile int8_t x3572 = -1;
	uint32_t t63 = 252U;

    t63 = (x3569^((x3570<<x3571)>x3572));

    if (t63 != 63U) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int16_t x3677 = INT16_MIN;
	static volatile int8_t x3679 = 14;
	static volatile int32_t t64 = 309;

    t64 = (x3677^((x3678<<x3679)>x3680));

    if (t64 != -32768) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x3765 = UINT32_MAX;
	static volatile int8_t x3766 = 2;
	uint32_t x3767 = 0U;
	volatile uint32_t t65 = 244750U;

    t65 = (x3765^((x3766<<x3767)>x3768));

    if (t65 != 4294967294U) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint8_t x3773 = 25U;
	uint16_t x3774 = 18U;
	int8_t x3775 = 1;
	int32_t t66 = 63932;

    t66 = (x3773^((x3774<<x3775)>x3776));

    if (t66 != 24) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x3778 = 1596908U;
	int8_t x3779 = 1;
	volatile int32_t x3780 = -4574179;
	volatile uint64_t t67 = UINT64_MAX;

    t67 = (x3777^((x3778<<x3779)>x3780));

    if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x3821 = -1LL;
	int32_t x3823 = 0;
	static volatile int32_t x3824 = INT32_MAX;
	int64_t t68 = 3746396463267304780LL;

    t68 = (x3821^((x3822<<x3823)>x3824));

    if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint64_t x3861 = 203LLU;
	uint8_t x3863 = 0U;
	int64_t x3864 = 1467LL;
	static uint64_t t69 = 7245LLU;

    t69 = (x3861^((x3862<<x3863)>x3864));

    if (t69 != 203LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x3929 = INT16_MIN;
	uint8_t x3930 = 28U;
	int8_t x3931 = 1;
	volatile int32_t t70 = -404276;

    t70 = (x3929^((x3930<<x3931)>x3932));

    if (t70 != -32767) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x4034 = 1878U;
	uint32_t x4035 = 0U;
	uint64_t x4036 = UINT64_MAX;
	volatile int32_t t71 = 14292;

    t71 = (x4033^((x4034<<x4035)>x4036));

    if (t71 != 3) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x4040 = UINT64_MAX;
	static int32_t t72 = 65344532;

    t72 = (x4037^((x4038<<x4039)>x4040));

    if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x4054 = UINT32_MAX;
	int8_t x4055 = 1;
	int8_t x4056 = 1;
	volatile int32_t t73 = 1939;

    t73 = (x4053^((x4054<<x4055)>x4056));

    if (t73 != -127) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x4101 = 132;
	uint32_t x4102 = 595638713U;
	static int8_t x4103 = 0;
	int64_t x4104 = INT64_MAX;
	int32_t t74 = -56;

    t74 = (x4101^((x4102<<x4103)>x4104));

    if (t74 != 132) { NG(); } else { ; }
	
}

void f75(void) {
    	static int64_t x4165 = INT64_MIN;
	static uint64_t x4166 = 3928740796075014LLU;
	volatile int16_t x4168 = INT16_MIN;
	volatile int64_t t75 = INT64_MIN;

    t75 = (x4165^((x4166<<x4167)>x4168));

    if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x4237 = -1;
	int8_t x4239 = 0;

    t76 = (x4237^((x4238<<x4239)>x4240));

    if (t76 != -2) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x4241 = 3483U;
	uint32_t x4243 = 1U;
	int64_t x4244 = -1LL;

    t77 = (x4241^((x4242<<x4243)>x4244));

    if (t77 != 3482) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x4317 = -1;
	static uint64_t x4318 = UINT64_MAX;
	int32_t x4319 = 21;
	int32_t x4320 = -1;
	int32_t t78 = 0;

    t78 = (x4317^((x4318<<x4319)>x4320));

    if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x4425 = INT64_MIN;
	static uint32_t x4426 = 8721U;
	int8_t x4427 = 5;
	int64_t x4428 = -1LL;
	static volatile int64_t t79 = 1367126667206LL;

    t79 = (x4425^((x4426<<x4427)>x4428));

    if (t79 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x4449 = 452;
	uint64_t x4450 = 190170468155919511LLU;
	int8_t x4451 = 2;
	uint16_t x4452 = 63U;

    t80 = (x4449^((x4450<<x4451)>x4452));

    if (t80 != 453) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int64_t x4469 = INT64_MIN;
	uint64_t x4470 = UINT64_MAX;
	static int8_t x4471 = 22;
	int64_t t81 = -146350690584268LL;

    t81 = (x4469^((x4470<<x4471)>x4472));

    if (t81 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x4481 = -1;
	uint8_t x4482 = 1U;
	uint8_t x4483 = 0U;
	int32_t t82 = -41;

    t82 = (x4481^((x4482<<x4483)>x4484));

    if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x4502 = 11U;
	uint8_t x4503 = 18U;
	static int32_t x4504 = 454535212;

    t83 = (x4501^((x4502<<x4503)>x4504));

    if (t83 != 770753801) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x4533 = 119780U;
	uint8_t x4535 = 14U;
	int16_t x4536 = 1;
	volatile uint32_t t84 = 7636362U;

    t84 = (x4533^((x4534<<x4535)>x4536));

    if (t84 != 119781U) { NG(); } else { ; }
	
}

void f85(void) {
    	static int32_t x4577 = INT32_MIN;
	uint64_t x4578 = UINT64_MAX;
	int16_t x4579 = 4;
	int8_t x4580 = -1;
	volatile int32_t t85 = INT32_MIN;

    t85 = (x4577^((x4578<<x4579)>x4580));

    if (t85 != INT32_MIN) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint64_t x4642 = 1897612LLU;
	uint16_t x4643 = 6U;
	uint64_t x4644 = 3095151LLU;
	static int32_t t86 = 18618695;

    t86 = (x4641^((x4642<<x4643)>x4644));

    if (t86 != -2) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x4801 = INT8_MIN;
	volatile int8_t x4802 = INT8_MAX;
	uint16_t x4803 = 4U;
	uint8_t x4804 = UINT8_MAX;
	volatile int32_t t87 = 25;

    t87 = (x4801^((x4802<<x4803)>x4804));

    if (t87 != -127) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x4889 = UINT64_MAX;
	uint32_t x4890 = 15U;
	static uint32_t x4891 = 2U;
	int64_t x4892 = INT64_MIN;
	volatile uint64_t t88 = 1580103881263LLU;

    t88 = (x4889^((x4890<<x4891)>x4892));

    if (t88 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint16_t x5059 = 5U;
	uint32_t x5060 = UINT32_MAX;

    t89 = (x5057^((x5058<<x5059)>x5060));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static int8_t x5117 = INT8_MIN;
	int64_t x5118 = 23248649630LL;
	volatile int8_t x5119 = 4;
	int8_t x5120 = -1;
	int32_t t90 = 1315;

    t90 = (x5117^((x5118<<x5119)>x5120));

    if (t90 != -127) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint16_t x5190 = 6U;
	uint16_t x5191 = 14U;
	static int32_t t91 = -4;

    t91 = (x5189^((x5190<<x5191)>x5192));

    if (t91 != 15) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x5234 = 7U;
	volatile int32_t t92 = 8899587;

    t92 = (x5233^((x5234<<x5235)>x5236));

    if (t92 != -2147483647) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x5477 = -300941LL;
	static volatile int32_t x5480 = -1;
	volatile int64_t t93 = -64434LL;

    t93 = (x5477^((x5478<<x5479)>x5480));

    if (t93 != -300942LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int32_t x5481 = 57;
	int16_t x5482 = INT16_MAX;
	volatile int16_t x5483 = 15;
	uint8_t x5484 = UINT8_MAX;
	volatile int32_t t94 = 100213;

    t94 = (x5481^((x5482<<x5483)>x5484));

    if (t94 != 56) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x5509 = UINT64_MAX;
	uint32_t x5510 = 25513U;
	static uint8_t x5512 = 42U;
	volatile uint64_t t95 = 3408LLU;

    t95 = (x5509^((x5510<<x5511)>x5512));

    if (t95 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static int64_t x5538 = 5242525943056231LL;
	static uint16_t x5539 = 0U;
	uint64_t x5540 = UINT64_MAX;

    t96 = (x5537^((x5538<<x5539)>x5540));

    if (t96 != -128) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x5545 = INT8_MIN;
	int32_t x5546 = 26;
	uint8_t x5547 = 3U;
	static volatile int8_t x5548 = INT8_MIN;
	volatile int32_t t97 = 119;

    t97 = (x5545^((x5546<<x5547)>x5548));

    if (t97 != -127) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x5613 = 540839084;
	uint64_t x5614 = UINT64_MAX;
	volatile uint16_t x5615 = 32U;
	volatile uint64_t x5616 = UINT64_MAX;
	static int32_t t98 = 95975779;

    t98 = (x5613^((x5614<<x5615)>x5616));

    if (t98 != 540839084) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x5673 = INT8_MIN;
	uint8_t x5674 = 0U;
	int8_t x5675 = 9;
	static uint8_t x5676 = 6U;

    t99 = (x5673^((x5674<<x5675)>x5676));

    if (t99 != -128) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x5866 = 30U;
	int8_t x5867 = 0;
	int16_t x5868 = INT16_MIN;
	int32_t t100 = 101000;

    t100 = (x5865^((x5866<<x5867)>x5868));

    if (t100 != -2) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x5905 = 2;
	volatile int32_t t101 = 4286;

    t101 = (x5905^((x5906<<x5907)>x5908));

    if (t101 != 2) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x5946 = 61783;
	int16_t x5947 = 0;
	int16_t x5948 = INT16_MIN;

    t102 = (x5945^((x5946<<x5947)>x5948));

    if (t102 != 75U) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x5959 = 0U;
	uint32_t x5960 = 7615877U;
	static int32_t t103 = 13;

    t103 = (x5957^((x5958<<x5959)>x5960));

    if (t103 != 127) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x6133 = 11225LLU;
	int8_t x6134 = 5;
	static int16_t x6135 = 1;
	uint64_t x6136 = UINT64_MAX;
	volatile uint64_t t104 = 2271666631214693243LLU;

    t104 = (x6133^((x6134<<x6135)>x6136));

    if (t104 != 11225LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x6147 = 1U;
	volatile int16_t x6148 = INT16_MIN;

    t105 = (x6145^((x6146<<x6147)>x6148));

    if (t105 != 254) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint64_t x6245 = 7307085553783167499LLU;
	uint16_t x6246 = 1980U;
	uint8_t x6247 = 13U;
	int64_t x6248 = INT64_MIN;
	uint64_t t106 = 10LLU;

    t106 = (x6245^((x6246<<x6247)>x6248));

    if (t106 != 7307085553783167498LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint8_t x6250 = 5U;
	uint8_t x6251 = 1U;
	volatile uint64_t x6252 = 623491LLU;
	volatile int32_t t107 = -3019;

    t107 = (x6249^((x6250<<x6251)>x6252));

    if (t107 != -10) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x6321 = -1;
	static uint64_t x6322 = 627278234211055726LLU;
	uint32_t x6323 = 18U;
	uint64_t x6324 = UINT64_MAX;
	int32_t t108 = -108781;

    t108 = (x6321^((x6322<<x6323)>x6324));

    if (t108 != -1) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x6489 = INT8_MAX;
	static int8_t x6490 = 1;
	uint64_t x6491 = 22LLU;
	volatile uint64_t x6492 = 20905717595LLU;
	volatile int32_t t109 = -1;

    t109 = (x6489^((x6490<<x6491)>x6492));

    if (t109 != 127) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x6521 = 24U;
	static int64_t x6522 = 301478757LL;
	volatile int16_t x6523 = 27;
	int16_t x6524 = INT16_MIN;
	volatile int32_t t110 = 122801727;

    t110 = (x6521^((x6522<<x6523)>x6524));

    if (t110 != 25) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile uint64_t x6561 = 1577LLU;
	int16_t x6562 = INT16_MAX;
	static uint8_t x6563 = 2U;
	static uint64_t t111 = 6LLU;

    t111 = (x6561^((x6562<<x6563)>x6564));

    if (t111 != 1576LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x6565 = INT8_MIN;
	static int64_t x6566 = 420LL;
	int8_t x6568 = INT8_MIN;
	volatile int32_t t112 = 8043;

    t112 = (x6565^((x6566<<x6567)>x6568));

    if (t112 != -127) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t t113 = INT64_MAX;

    t113 = (x6617^((x6618<<x6619)>x6620));

    if (t113 != INT64_MAX) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x6650 = 1U;
	uint16_t x6651 = 15U;
	int8_t x6652 = -6;
	int32_t t114 = -9282938;

    t114 = (x6649^((x6650<<x6651)>x6652));

    if (t114 != 2341) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x6721 = 0U;
	uint16_t x6722 = UINT16_MAX;
	uint16_t x6723 = 6U;
	uint8_t x6724 = 7U;
	volatile int32_t t115 = -1;

    t115 = (x6721^((x6722<<x6723)>x6724));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int64_t x6749 = INT64_MAX;
	static uint32_t x6751 = 17U;
	static volatile uint8_t x6752 = 61U;
	int64_t t116 = 354LL;

    t116 = (x6749^((x6750<<x6751)>x6752));

    if (t116 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x6946 = 9U;
	uint8_t x6947 = 6U;
	int32_t t117 = -82;

    t117 = (x6945^((x6946<<x6947)>x6948));

    if (t117 != -6) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x6990 = INT8_MAX;
	volatile uint32_t x6991 = 16U;
	int32_t x6992 = -1;
	int32_t t118 = 113;

    t118 = (x6989^((x6990<<x6991)>x6992));

    if (t118 != -127) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x7126 = 112U;
	uint16_t x7127 = 2U;
	uint64_t x7128 = UINT64_MAX;
	volatile int32_t t119 = -88;

    t119 = (x7125^((x7126<<x7127)>x7128));

    if (t119 != -32768) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x7193 = 678;
	volatile uint32_t x7194 = 475U;
	int16_t x7195 = 0;
	int64_t x7196 = -705471587535LL;
	static volatile int32_t t120 = -5;

    t120 = (x7193^((x7194<<x7195)>x7196));

    if (t120 != 679) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x7249 = INT8_MAX;
	uint64_t x7250 = 220297LLU;
	int8_t x7251 = 2;
	uint32_t x7252 = 1457341379U;
	volatile int32_t t121 = -13870448;

    t121 = (x7249^((x7250<<x7251)>x7252));

    if (t121 != 127) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x7277 = 0U;
	int16_t x7278 = 0;
	volatile uint8_t x7279 = 0U;
	static int8_t x7280 = INT8_MIN;
	volatile int32_t t122 = -498;

    t122 = (x7277^((x7278<<x7279)>x7280));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x7317 = -1LL;
	int8_t x7318 = INT8_MAX;
	int8_t x7319 = 5;
	uint32_t x7320 = 11U;
	volatile int64_t t123 = -1080677677743LL;

    t123 = (x7317^((x7318<<x7319)>x7320));

    if (t123 != -2LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static int16_t x7329 = INT16_MAX;
	int32_t x7330 = 1588;
	uint8_t x7331 = 5U;
	volatile int32_t x7332 = -1;
	int32_t t124 = 320498940;

    t124 = (x7329^((x7330<<x7331)>x7332));

    if (t124 != 32766) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint16_t x7385 = UINT16_MAX;
	uint64_t x7386 = 30399899813LLU;
	uint8_t x7387 = 14U;
	static int32_t x7388 = INT32_MAX;
	volatile int32_t t125 = -72;

    t125 = (x7385^((x7386<<x7387)>x7388));

    if (t125 != 65534) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x7437 = INT64_MIN;
	volatile uint8_t x7438 = UINT8_MAX;
	static volatile int8_t x7439 = 0;
	uint16_t x7440 = 1U;
	int64_t t126 = 1544235LL;

    t126 = (x7437^((x7438<<x7439)>x7440));

    if (t126 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x7637 = 29;
	int16_t x7638 = 1626;
	int16_t x7639 = 14;
	int64_t x7640 = INT64_MAX;
	static volatile int32_t t127 = 0;

    t127 = (x7637^((x7638<<x7639)>x7640));

    if (t127 != 29) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x7657 = 12802LL;
	int8_t x7658 = INT8_MAX;
	int8_t x7659 = 5;
	static volatile int16_t x7660 = 9;
	volatile int64_t t128 = -124LL;

    t128 = (x7657^((x7658<<x7659)>x7660));

    if (t128 != 12803LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x7789 = -17;
	uint32_t x7791 = 3U;
	volatile int32_t t129 = -3403;

    t129 = (x7789^((x7790<<x7791)>x7792));

    if (t129 != -18) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x7813 = -1LL;
	volatile uint64_t x7814 = UINT64_MAX;
	volatile int64_t t130 = -345853196371999816LL;

    t130 = (x7813^((x7814<<x7815)>x7816));

    if (t130 != -2LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x7945 = 54;
	uint64_t x7946 = 2014157839830LLU;
	volatile uint16_t x7947 = 1U;
	uint8_t x7948 = UINT8_MAX;
	volatile int32_t t131 = 0;

    t131 = (x7945^((x7946<<x7947)>x7948));

    if (t131 != 55) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x8033 = UINT32_MAX;
	uint8_t x8034 = UINT8_MAX;
	uint64_t x8036 = UINT64_MAX;
	volatile uint32_t t132 = UINT32_MAX;

    t132 = (x8033^((x8034<<x8035)>x8036));

    if (t132 != UINT32_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x8145 = INT16_MIN;
	volatile int32_t t133 = 850570;

    t133 = (x8145^((x8146<<x8147)>x8148));

    if (t133 != -32768) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x8173 = INT64_MIN;
	int16_t x8174 = 11;
	int8_t x8175 = 1;
	int8_t x8176 = INT8_MAX;
	int64_t t134 = INT64_MIN;

    t134 = (x8173^((x8174<<x8175)>x8176));

    if (t134 != INT64_MIN) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x8257 = INT32_MIN;
	int32_t x8258 = 300;
	uint16_t x8259 = 0U;
	int16_t x8260 = INT16_MIN;
	static volatile int32_t t135 = -75;

    t135 = (x8257^((x8258<<x8259)>x8260));

    if (t135 != -2147483647) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x8293 = 1U;
	volatile int32_t x8294 = 3621;
	int8_t x8296 = 11;
	volatile int32_t t136 = 3976162;

    t136 = (x8293^((x8294<<x8295)>x8296));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x8474 = 1357U;
	static volatile int8_t x8475 = 1;
	uint16_t x8476 = 78U;
	volatile int32_t t137 = -3300;

    t137 = (x8473^((x8474<<x8475)>x8476));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile uint32_t x8549 = UINT32_MAX;
	static uint64_t x8550 = UINT64_MAX;
	volatile int16_t x8551 = 0;
	volatile uint32_t x8552 = 1442987636U;
	uint32_t t138 = 2017394U;

    t138 = (x8549^((x8550<<x8551)>x8552));

    if (t138 != 4294967294U) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x8557 = -1;
	int8_t x8558 = 0;
	volatile int16_t x8559 = 7;
	uint32_t x8560 = UINT32_MAX;
	int32_t t139 = -6315;

    t139 = (x8557^((x8558<<x8559)>x8560));

    if (t139 != -1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x8561 = -1;
	int8_t x8562 = INT8_MAX;
	int64_t x8564 = -1232778065LL;
	int32_t t140 = -475007322;

    t140 = (x8561^((x8562<<x8563)>x8564));

    if (t140 != -2) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x8614 = 12U;
	int32_t x8615 = 5;
	int32_t x8616 = INT32_MIN;
	volatile int32_t t141 = -28365480;

    t141 = (x8613^((x8614<<x8615)>x8616));

    if (t141 != 65534) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x8669 = INT8_MAX;
	static volatile uint16_t x8670 = 32U;
	uint8_t x8671 = 4U;
	static int16_t x8672 = INT16_MAX;
	int32_t t142 = -271;

    t142 = (x8669^((x8670<<x8671)>x8672));

    if (t142 != 127) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int64_t x8753 = 6347664054581890LL;
	int8_t x8755 = 0;
	static int64_t x8756 = INT64_MAX;
	int64_t t143 = -236136519494LL;

    t143 = (x8753^((x8754<<x8755)>x8756));

    if (t143 != 6347664054581890LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x8862 = 137551228U;
	static int8_t x8863 = 7;
	uint8_t x8864 = UINT8_MAX;
	static volatile int32_t t144 = -77;

    t144 = (x8861^((x8862<<x8863)>x8864));

    if (t144 != 32766) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x9053 = INT16_MAX;
	volatile uint64_t x9054 = 161447113LLU;
	uint16_t x9055 = 51U;
	int16_t x9056 = 1;

    t145 = (x9053^((x9054<<x9055)>x9056));

    if (t145 != 32766) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x9069 = 160917;
	uint16_t x9071 = 2U;
	volatile uint32_t x9072 = 3565598U;
	int32_t t146 = -2881186;

    t146 = (x9069^((x9070<<x9071)>x9072));

    if (t146 != 160917) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x9133 = -1LL;
	int64_t x9135 = 7LL;
	int8_t x9136 = INT8_MAX;

    t147 = (x9133^((x9134<<x9135)>x9136));

    if (t147 != -2LL) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint32_t x9161 = 203582935U;
	int8_t x9162 = 0;
	uint16_t x9163 = 15U;
	int16_t x9164 = INT16_MAX;
	uint32_t t148 = 0U;

    t148 = (x9161^((x9162<<x9163)>x9164));

    if (t148 != 203582935U) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x9169 = INT64_MAX;
	volatile int8_t x9170 = INT8_MAX;
	volatile uint8_t x9171 = 2U;
	volatile int64_t x9172 = INT64_MIN;

    t149 = (x9169^((x9170<<x9171)>x9172));

    if (t149 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x9493 = UINT32_MAX;
	int8_t x9494 = INT8_MAX;
	uint8_t x9495 = 1U;
	uint64_t x9496 = UINT64_MAX;

    t150 = (x9493^((x9494<<x9495)>x9496));

    if (t150 != UINT32_MAX) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x9517 = -3193;
	volatile int64_t x9518 = 2717318794340165991LL;
	int16_t x9519 = 0;
	static int64_t x9520 = -1LL;
	static volatile int32_t t151 = -7;

    t151 = (x9517^((x9518<<x9519)>x9520));

    if (t151 != -3194) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int32_t x9547 = 1;
	volatile int64_t x9548 = INT64_MIN;
	volatile int32_t t152 = -909;

    t152 = (x9545^((x9546<<x9547)>x9548));

    if (t152 != -2) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x9569 = UINT32_MAX;
	uint64_t x9570 = 3277396365988485LLU;
	int16_t x9571 = 17;
	int32_t x9572 = -1;
	volatile uint32_t t153 = UINT32_MAX;

    t153 = (x9569^((x9570<<x9571)>x9572));

    if (t153 != UINT32_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x9710 = 53;
	volatile int16_t x9711 = 0;
	volatile int64_t x9712 = -1LL;
	volatile uint32_t t154 = 48083U;

    t154 = (x9709^((x9710<<x9711)>x9712));

    if (t154 != 749531403U) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x9713 = INT16_MIN;
	uint8_t x9715 = 0U;
	static volatile int32_t t155 = -1;

    t155 = (x9713^((x9714<<x9715)>x9716));

    if (t155 != -32768) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x9769 = 1LLU;
	static uint32_t x9770 = 2697142U;
	uint16_t x9771 = 15U;

    t156 = (x9769^((x9770<<x9771)>x9772));

    if (t156 != 1LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x9777 = 247;
	int8_t x9778 = 0;
	int64_t x9780 = INT64_MIN;
	volatile int32_t t157 = -12;

    t157 = (x9777^((x9778<<x9779)>x9780));

    if (t157 != 246) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x9957 = 78U;
	uint8_t x9958 = 6U;
	uint8_t x9959 = 21U;
	uint32_t x9960 = 18518U;

    t158 = (x9957^((x9958<<x9959)>x9960));

    if (t158 != 79U) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint64_t x10150 = UINT64_MAX;
	volatile uint32_t x10151 = 7U;
	int32_t t159 = -814290020;

    t159 = (x10149^((x10150<<x10151)>x10152));

    if (t159 != -2147483647) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x10173 = INT16_MAX;
	static uint8_t x10174 = 6U;
	uint8_t x10175 = 23U;
	int32_t t160 = -1021;

    t160 = (x10173^((x10174<<x10175)>x10176));

    if (t160 != 32766) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x10253 = UINT16_MAX;
	int16_t x10254 = 237;
	uint8_t x10255 = 2U;
	uint16_t x10256 = UINT16_MAX;
	volatile int32_t t161 = -13812472;

    t161 = (x10253^((x10254<<x10255)>x10256));

    if (t161 != 65535) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x10357 = -12902;
	uint32_t x10358 = 1796U;
	volatile uint8_t x10359 = 31U;
	int16_t x10360 = INT16_MIN;
	volatile int32_t t162 = 563;

    t162 = (x10357^((x10358<<x10359)>x10360));

    if (t162 != -12902) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int32_t x10367 = 0;
	volatile int32_t t163 = -72413;

    t163 = (x10365^((x10366<<x10367)>x10368));

    if (t163 != -32767) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x10453 = INT16_MAX;
	uint64_t x10454 = 1764355LLU;
	uint8_t x10455 = 48U;
	int64_t x10456 = 49782982470LL;
	volatile int32_t t164 = 662917;

    t164 = (x10453^((x10454<<x10455)>x10456));

    if (t164 != 32766) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x10601 = INT32_MAX;
	volatile uint8_t x10602 = 32U;
	static volatile uint8_t x10603 = 2U;
	int8_t x10604 = -1;

    t165 = (x10601^((x10602<<x10603)>x10604));

    if (t165 != 2147483646) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x10617 = 3545U;
	volatile int64_t x10618 = 0LL;
	int16_t x10619 = 12;
	volatile int32_t t166 = -1024061708;

    t166 = (x10617^((x10618<<x10619)>x10620));

    if (t166 != 3545) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x10649 = INT64_MAX;
	uint8_t x10650 = UINT8_MAX;
	volatile int64_t t167 = 45082848671225476LL;

    t167 = (x10649^((x10650<<x10651)>x10652));

    if (t167 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x10721 = INT8_MIN;
	int64_t x10722 = 191LL;
	uint32_t x10723 = 6U;
	volatile int32_t t168 = -179;

    t168 = (x10721^((x10722<<x10723)>x10724));

    if (t168 != -127) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint8_t x10762 = 4U;
	static volatile uint16_t x10763 = 0U;
	volatile int32_t x10764 = -30;
	volatile int32_t t169 = 3623861;

    t169 = (x10761^((x10762<<x10763)>x10764));

    if (t169 != -2) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x10841 = INT32_MIN;
	static volatile uint16_t x10842 = 15075U;
	uint8_t x10843 = 0U;
	volatile int32_t t170 = INT32_MIN;

    t170 = (x10841^((x10842<<x10843)>x10844));

    if (t170 != INT32_MIN) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint8_t x11009 = UINT8_MAX;
	volatile uint8_t x11011 = 0U;
	static int8_t x11012 = INT8_MIN;

    t171 = (x11009^((x11010<<x11011)>x11012));

    if (t171 != 254) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x11057 = INT8_MIN;
	uint32_t x11058 = 95920U;
	uint8_t x11060 = 3U;
	int32_t t172 = -67;

    t172 = (x11057^((x11058<<x11059)>x11060));

    if (t172 != -127) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x11173 = 1946U;
	int16_t x11174 = 72;
	uint8_t x11175 = 2U;
	volatile int8_t x11176 = -29;
	int32_t t173 = 6;

    t173 = (x11173^((x11174<<x11175)>x11176));

    if (t173 != 1947) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int64_t x11213 = 437493189867640LL;
	static uint16_t x11214 = UINT16_MAX;
	static uint8_t x11216 = UINT8_MAX;
	int64_t t174 = 858871513LL;

    t174 = (x11213^((x11214<<x11215)>x11216));

    if (t174 != 437493189867641LL) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x11277 = INT8_MIN;
	volatile int8_t x11278 = 27;
	static uint32_t x11279 = 7U;
	uint32_t x11280 = 5194U;
	volatile int32_t t175 = 299515211;

    t175 = (x11277^((x11278<<x11279)>x11280));

    if (t175 != -128) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int8_t x11301 = INT8_MIN;
	int16_t x11302 = 30;
	int16_t x11303 = 1;
	volatile int32_t t176 = -6606796;

    t176 = (x11301^((x11302<<x11303)>x11304));

    if (t176 != -127) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint32_t x11377 = 1283U;
	static int16_t x11378 = 10;
	uint64_t x11379 = 5LLU;
	int8_t x11380 = -1;
	uint32_t t177 = 12251885U;

    t177 = (x11377^((x11378<<x11379)>x11380));

    if (t177 != 1282U) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint64_t x11389 = UINT64_MAX;
	int32_t x11391 = 0;
	uint64_t x11392 = 0LLU;
	volatile uint64_t t178 = 60393272438LLU;

    t178 = (x11389^((x11390<<x11391)>x11392));

    if (t178 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint64_t x11525 = 10154340178230LLU;
	uint8_t x11526 = 1U;
	uint8_t x11528 = 1U;
	uint64_t t179 = 80283LLU;

    t179 = (x11525^((x11526<<x11527)>x11528));

    if (t179 != 10154340178231LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x11562 = 17;
	int8_t x11563 = 0;
	static int16_t x11564 = INT16_MAX;
	int32_t t180 = 559142032;

    t180 = (x11561^((x11562<<x11563)>x11564));

    if (t180 != -128) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x11601 = 248075295U;
	volatile uint16_t x11602 = 14U;
	int8_t x11603 = 7;
	int64_t x11604 = -1LL;

    t181 = (x11601^((x11602<<x11603)>x11604));

    if (t181 != 248075294U) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x11653 = 360;
	volatile uint8_t x11655 = 15U;
	int8_t x11656 = INT8_MIN;

    t182 = (x11653^((x11654<<x11655)>x11656));

    if (t182 != 361) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x11693 = INT32_MIN;
	uint32_t x11694 = UINT32_MAX;
	static int16_t x11695 = 27;
	uint32_t x11696 = 85U;
	volatile int32_t t183 = -4354;

    t183 = (x11693^((x11694<<x11695)>x11696));

    if (t183 != -2147483647) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x11769 = INT64_MAX;
	volatile int8_t x11770 = 14;
	uint32_t x11771 = 7U;
	int32_t x11772 = -1;
	volatile int64_t t184 = 263173043LL;

    t184 = (x11769^((x11770<<x11771)>x11772));

    if (t184 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x11825 = 2U;
	uint8_t x11826 = 0U;
	static volatile int16_t x11827 = 6;
	int32_t x11828 = INT32_MAX;
	volatile int32_t t185 = -27578;

    t185 = (x11825^((x11826<<x11827)>x11828));

    if (t185 != 2) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int64_t x11861 = 2404138526993375778LL;
	uint32_t x11862 = 212U;
	int8_t x11863 = 3;
	volatile int64_t t186 = -2473LL;

    t186 = (x11861^((x11862<<x11863)>x11864));

    if (t186 != 2404138526993375778LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x11933 = 515443U;
	uint64_t x11934 = UINT64_MAX;
	int32_t x11935 = 2;
	int8_t x11936 = INT8_MAX;
	uint32_t t187 = 80156U;

    t187 = (x11933^((x11934<<x11935)>x11936));

    if (t187 != 515442U) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x12049 = INT8_MAX;
	int16_t x12050 = INT16_MAX;
	static volatile int8_t x12051 = 4;
	int16_t x12052 = -2007;
	int32_t t188 = 9224;

    t188 = (x12049^((x12050<<x12051)>x12052));

    if (t188 != 126) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x12085 = INT16_MAX;
	uint32_t x12086 = UINT32_MAX;
	int64_t x12088 = INT64_MAX;
	int32_t t189 = -1866;

    t189 = (x12085^((x12086<<x12087)>x12088));

    if (t189 != 32767) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint16_t x12231 = 37U;
	volatile int32_t x12232 = INT32_MAX;
	volatile int64_t t190 = -2494240508LL;

    t190 = (x12229^((x12230<<x12231)>x12232));

    if (t190 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x12265 = -1;
	volatile uint32_t x12266 = 11U;
	int32_t x12267 = 0;
	int64_t x12268 = 15LL;
	volatile int32_t t191 = -48071837;

    t191 = (x12265^((x12266<<x12267)>x12268));

    if (t191 != -1) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x12337 = -6413;
	uint32_t x12338 = 27785U;
	int16_t x12339 = 1;

    t192 = (x12337^((x12338<<x12339)>x12340));

    if (t192 != -6413) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x12369 = INT32_MIN;
	uint64_t x12370 = 1481347LLU;
	uint32_t x12371 = 1U;
	static uint8_t x12372 = 1U;

    t193 = (x12369^((x12370<<x12371)>x12372));

    if (t193 != -2147483647) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint8_t x12390 = 23U;
	static volatile int32_t x12391 = 14;
	int32_t x12392 = -7;
	volatile uint32_t t194 = 343520U;

    t194 = (x12389^((x12390<<x12391)>x12392));

    if (t194 != 4294967294U) { NG(); } else { ; }
	
}

void f195(void) {
    	static int32_t x12393 = INT32_MIN;
	uint16_t x12394 = 112U;
	int8_t x12396 = INT8_MAX;
	volatile int32_t t195 = INT32_MIN;

    t195 = (x12393^((x12394<<x12395)>x12396));

    if (t195 != INT32_MIN) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int32_t x12429 = -2561;
	static volatile uint32_t x12430 = 1316U;
	uint16_t x12431 = 0U;
	int16_t x12432 = -1;
	static volatile int32_t t196 = 8162905;

    t196 = (x12429^((x12430<<x12431)>x12432));

    if (t196 != -2561) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile uint8_t x12442 = 6U;
	uint64_t x12444 = 9573520LLU;
	volatile int32_t t197 = -4699;

    t197 = (x12441^((x12442<<x12443)>x12444));

    if (t197 != -1) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x12497 = -27417533897534LL;
	static volatile uint8_t x12498 = UINT8_MAX;
	static uint16_t x12499 = 6U;
	volatile int64_t t198 = 1613359LL;

    t198 = (x12497^((x12498<<x12499)>x12500));

    if (t198 != -27417533897533LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x12665 = -1;
	static uint32_t x12666 = 5U;
	volatile uint8_t x12667 = 0U;
	int64_t x12668 = -1LL;
	volatile int32_t t199 = 293;

    t199 = (x12665^((x12666<<x12667)>x12668));

    if (t199 != -2) { NG(); } else { ; }
	
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

