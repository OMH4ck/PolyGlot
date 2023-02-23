
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

uint8_t x401 = 26U;
static int8_t x613 = INT8_MIN;
int16_t x616 = 46;
static int16_t x670 = INT16_MIN;
volatile int16_t x707 = INT16_MAX;
static uint8_t x708 = 3U;
volatile int64_t t8 = -25788707904LL;
int32_t x1473 = 34;
static uint8_t x1613 = UINT8_MAX;
int64_t x1614 = INT64_MAX;
volatile int64_t x1615 = 181847237628370LL;
int64_t t17 = -2181938483024425LL;
uint8_t x2236 = 4U;
int8_t x2257 = -1;
static int8_t x2284 = 0;
static volatile int32_t x2419 = INT32_MIN;
uint64_t x2515 = UINT64_MAX;
static volatile uint64_t t23 = 270067851417276LLU;
volatile uint64_t x2542 = UINT64_MAX;
volatile uint32_t x2587 = 16218U;
static int16_t x2588 = 0;
volatile uint16_t x2675 = UINT16_MAX;
volatile int64_t t29 = 1431404LL;
int64_t x2851 = 400737304487926LL;
uint8_t x2852 = 3U;
int16_t x2857 = INT16_MAX;
uint16_t x2860 = 4U;
static int64_t x2953 = -1LL;
int8_t x3338 = INT8_MIN;
uint32_t x3642 = 29981304U;
uint16_t x3686 = UINT16_MAX;
static volatile uint16_t x3687 = UINT16_MAX;
volatile int64_t t36 = -659208648282478371LL;
int16_t x3817 = INT16_MIN;
uint8_t x3820 = 3U;
int32_t x4425 = -94635;
uint32_t x4426 = UINT32_MAX;
int32_t x4427 = -7949652;
uint64_t x4602 = 57LLU;
uint64_t t44 = 423310240611001136LLU;
int16_t x4638 = INT16_MIN;
int32_t x4639 = -1;
uint16_t x4640 = 3U;
int16_t x4677 = -447;
volatile int64_t t46 = -14260791506048LL;
volatile int64_t x4690 = -137982611704LL;
int32_t x4691 = -1;
static int64_t t47 = -67631684011502LL;
int16_t x4881 = INT16_MIN;
uint16_t x4884 = 2U;
static int8_t x4992 = 3;
int64_t t50 = 197547862061LL;
int16_t x5044 = 21;
int64_t t51 = 3974079663LL;
int32_t x5057 = INT32_MIN;
volatile int16_t x5059 = -1;
uint64_t x5239 = 48022LLU;
uint64_t t53 = 3638976001247LLU;
uint64_t t55 = 147085023448950LLU;
int8_t x5403 = INT8_MIN;
uint8_t x5404 = 0U;
uint8_t x5516 = 36U;
volatile int32_t x5726 = -1;
static uint32_t t62 = 46022335U;
volatile uint32_t x5861 = 6830U;
uint64_t x5917 = UINT64_MAX;
int8_t x5920 = 1;
uint64_t t65 = 11580176837521LLU;
uint16_t x5949 = UINT16_MAX;
volatile uint64_t x6159 = 200560898361LLU;
static int8_t x6187 = -1;
int16_t x6604 = 1;
uint64_t x6621 = UINT64_MAX;
static int8_t x6624 = 11;
int8_t x6945 = INT8_MIN;
int64_t t78 = 455LL;
static volatile uint64_t t79 = 20091008351097365LLU;
uint32_t x7280 = 7U;
uint8_t x7313 = 0U;
int16_t x7324 = 1;
uint8_t x7340 = 4U;
static uint16_t x7360 = 1U;
static volatile int64_t t85 = -145LL;
volatile int8_t x7562 = -62;
int64_t x7563 = -1LL;
static volatile int64_t t88 = -698317235039124869LL;
int32_t x7603 = -90;
uint32_t x7604 = 5U;
static int16_t x7714 = -6495;
uint16_t x7719 = 91U;
int64_t x7725 = INT64_MIN;
int64_t x7738 = 694082LL;
int64_t x7873 = -1LL;
static uint8_t x7879 = 6U;
uint32_t t96 = 3658694U;
int16_t x8058 = -7996;
uint8_t x8220 = 2U;
uint32_t t98 = 2449504U;
uint8_t x8443 = 4U;
uint8_t x8492 = 0U;
uint64_t t100 = 18532731LLU;
volatile int32_t t102 = -14;
uint64_t x8633 = 47412973LLU;
int16_t x8653 = INT16_MIN;
uint64_t x8818 = 159237375LLU;
uint16_t x8820 = 34U;
volatile uint64_t t105 = 367801730LLU;
volatile uint64_t t106 = 14231LLU;
uint64_t x8881 = 14570LLU;
static int64_t t108 = 334263982092365LL;
static int64_t x9101 = 770704LL;
int32_t x9102 = INT32_MAX;
uint64_t x9286 = UINT64_MAX;
uint32_t x9288 = 22U;
int64_t t111 = 223383983044208LL;
volatile int64_t t112 = 7367882942642LL;
int8_t x9334 = -1;
uint64_t x9336 = 4LLU;
int16_t x9357 = INT16_MIN;
uint16_t x9383 = 423U;
volatile uint32_t x9490 = UINT32_MAX;
volatile uint8_t x9492 = 7U;
static int64_t x9503 = 63LL;
static volatile int64_t t121 = 1380712000LL;
int16_t x9953 = INT16_MIN;
static uint8_t x9955 = 99U;
int32_t x10260 = 0;
int8_t x10304 = 3;
uint64_t t127 = 149274426LLU;
volatile int64_t x10447 = -14116473LL;
static uint8_t x10696 = 55U;
uint8_t x10730 = 90U;
static uint64_t x10893 = 105750096092189LLU;
uint32_t x10894 = UINT32_MAX;
int16_t x10896 = 31;
uint8_t x11223 = 10U;
static volatile int32_t x11454 = INT32_MIN;
int8_t x11456 = 13;
uint16_t x11622 = 59U;
int32_t x11803 = INT32_MAX;
volatile uint8_t x11804 = 0U;
uint32_t t140 = 2U;
int16_t x12129 = 0;
uint16_t x12304 = 1U;
static volatile uint16_t x12544 = 0U;
int32_t x12577 = 342725;
int8_t x12580 = 5;
volatile uint16_t x12587 = 5387U;
uint8_t x12816 = 9U;
volatile int32_t t148 = -1;
uint64_t x12873 = 6437700119LLU;
int16_t x12874 = INT16_MIN;
int64_t t152 = -226064311463LL;
uint32_t x13083 = 2336741U;
volatile int32_t t157 = -502476;
int8_t x13652 = 1;
volatile uint8_t x13731 = UINT8_MAX;
uint8_t x13732 = 22U;


void f0(void) {
    	static uint16_t x77 = 7728U;
	static int8_t x78 = INT8_MIN;
	int8_t x79 = -7;
	int8_t x80 = 2;
	volatile int32_t t0 = 111877129;

    t0 = (x77/((x78/x79)<<x80));

    if (t0 != 107) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint32_t x137 = 358U;
	uint64_t x138 = UINT64_MAX;
	int32_t x139 = INT32_MIN;
	uint16_t x140 = 25U;
	static uint64_t t1 = 166610463LLU;

    t1 = (x137/((x138/x139)<<x140));

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int8_t x317 = -1;
	static uint16_t x318 = UINT16_MAX;
	static int16_t x319 = 1;
	int8_t x320 = 6;
	volatile int32_t t2 = 3;

    t2 = (x317/((x318/x319)<<x320));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint8_t x402 = UINT8_MAX;
	static int8_t x403 = INT8_MAX;
	int32_t x404 = 0;
	volatile int32_t t3 = 0;

    t3 = (x401/((x402/x403)<<x404));

    if (t3 != 13) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x553 = 19;
	static volatile int8_t x554 = INT8_MIN;
	int32_t x555 = -1;
	uint8_t x556 = 3U;
	int32_t t4 = -925416;

    t4 = (x553/((x554/x555)<<x556));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x601 = 55LL;
	volatile int64_t x602 = INT64_MAX;
	uint64_t x603 = 26LLU;
	uint8_t x604 = 1U;
	static volatile uint64_t t5 = 58359707LLU;

    t5 = (x601/((x602/x603)<<x604));

    if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x614 = INT8_MIN;
	int64_t x615 = -1LL;
	int64_t t6 = 35565LL;

    t6 = (x613/((x614/x615)<<x616));

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x669 = 84766394466822LLU;
	int8_t x671 = -42;
	int8_t x672 = 11;
	volatile uint64_t t7 = 20188213614191411LLU;

    t7 = (x669/((x670/x671)<<x672));

    if (t7 != 53063898LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x705 = INT64_MIN;
	volatile int32_t x706 = INT32_MAX;

    t8 = (x705/((x706/x707)<<x708));

    if (t8 != -17591649189887LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x1077 = INT64_MIN;
	volatile int16_t x1078 = -1;
	uint64_t x1079 = UINT64_MAX;
	int8_t x1080 = 23;
	volatile uint64_t t9 = 7029147LLU;

    t9 = (x1077/((x1078/x1079)<<x1080));

    if (t9 != 1099511627776LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x1293 = -1;
	int64_t x1294 = INT64_MIN;
	static uint64_t x1295 = 12761987054LLU;
	int32_t x1296 = 3;
	static volatile uint64_t t10 = 2106132230638983533LLU;

    t10 = (x1293/((x1294/x1295)<<x1296));

    if (t10 != 3190496763LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x1474 = UINT32_MAX;
	int32_t x1475 = -5254827;
	static volatile int16_t x1476 = 18;
	volatile uint32_t t11 = 73673854U;

    t11 = (x1473/((x1474/x1475)<<x1476));

    if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x1605 = UINT8_MAX;
	int32_t x1606 = -74103;
	static int8_t x1607 = -5;
	uint32_t x1608 = 1U;
	volatile int32_t t12 = 2723414;

    t12 = (x1605/((x1606/x1607)<<x1608));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x1616 = 14U;
	volatile int64_t t13 = -451642311117560LL;

    t13 = (x1613/((x1614/x1615)<<x1616));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x1721 = 1808;
	volatile uint32_t x1722 = UINT32_MAX;
	static int32_t x1723 = INT32_MIN;
	static uint8_t x1724 = 5U;
	volatile uint32_t t14 = 16441669U;

    t14 = (x1721/((x1722/x1723)<<x1724));

    if (t14 != 56U) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x1941 = UINT64_MAX;
	int64_t x1942 = INT64_MAX;
	uint32_t x1943 = UINT32_MAX;
	int8_t x1944 = 0;
	volatile uint64_t t15 = 7612787572788LLU;

    t15 = (x1941/((x1942/x1943)<<x1944));

    if (t15 != 8589934591LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x2001 = INT16_MIN;
	uint64_t x2002 = UINT64_MAX;
	static volatile int8_t x2003 = INT8_MAX;
	volatile uint16_t x2004 = 1U;
	uint64_t t16 = 3153LLU;

    t16 = (x2001/((x2002/x2003)<<x2004));

    if (t16 != 63LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x2177 = INT8_MIN;
	static int8_t x2178 = -5;
	volatile int64_t x2179 = -1LL;
	static volatile uint16_t x2180 = 0U;

    t17 = (x2177/((x2178/x2179)<<x2180));

    if (t17 != -25LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x2233 = UINT32_MAX;
	int16_t x2234 = INT16_MIN;
	uint32_t x2235 = 7U;
	volatile uint32_t t18 = 115139051U;

    t18 = (x2233/((x2234/x2235)<<x2236));

    if (t18 != 3U) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint16_t x2258 = UINT16_MAX;
	uint16_t x2259 = 7U;
	int16_t x2260 = 1;
	int32_t t19 = 433585;

    t19 = (x2257/((x2258/x2259)<<x2260));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x2281 = 11026U;
	volatile int8_t x2282 = INT8_MIN;
	int64_t x2283 = -1LL;
	volatile int64_t t20 = -81174751469LL;

    t20 = (x2281/((x2282/x2283)<<x2284));

    if (t20 != 86LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x2417 = INT64_MIN;
	int64_t x2418 = INT64_MIN;
	volatile int32_t x2420 = 12;
	int64_t t21 = -2289192349606174LL;

    t21 = (x2417/((x2418/x2419)<<x2420));

    if (t21 != -524288LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x2493 = -16871015489574LL;
	static int8_t x2494 = -1;
	volatile int64_t x2495 = -1LL;
	uint32_t x2496 = 0U;
	static volatile int64_t t22 = -210LL;

    t22 = (x2493/((x2494/x2495)<<x2496));

    if (t22 != -16871015489574LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x2513 = UINT16_MAX;
	uint64_t x2514 = UINT64_MAX;
	static uint8_t x2516 = 1U;

    t23 = (x2513/((x2514/x2515)<<x2516));

    if (t23 != 32767LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x2541 = 7559527LLU;
	uint16_t x2543 = 7020U;
	volatile int64_t x2544 = 36LL;
	uint64_t t24 = 1957150761LLU;

    t24 = (x2541/((x2542/x2543)<<x2544));

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint32_t x2585 = UINT32_MAX;
	static int16_t x2586 = INT16_MAX;
	volatile uint32_t t25 = 13453878U;

    t25 = (x2585/((x2586/x2587)<<x2588));

    if (t25 != 2147483647U) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x2673 = UINT64_MAX;
	int64_t x2674 = INT64_MAX;
	int16_t x2676 = 3;
	volatile uint64_t t26 = 2297788LLU;

    t26 = (x2673/((x2674/x2675)<<x2676));

    if (t26 != 16383LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x2677 = 753978864LLU;
	static uint16_t x2678 = 2430U;
	uint8_t x2679 = UINT8_MAX;
	static uint8_t x2680 = 3U;
	volatile uint64_t t27 = 18LLU;

    t27 = (x2677/((x2678/x2679)<<x2680));

    if (t27 != 10471928LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x2709 = 238989788987507LLU;
	volatile int16_t x2710 = -25;
	int64_t x2711 = -1LL;
	int8_t x2712 = 31;
	uint64_t t28 = 36910293630641767LLU;

    t28 = (x2709/((x2710/x2711)<<x2712));

    if (t28 != 4451LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x2721 = INT16_MAX;
	int16_t x2722 = INT16_MIN;
	int64_t x2723 = -1LL;
	int8_t x2724 = 36;

    t29 = (x2721/((x2722/x2723)<<x2724));

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x2849 = UINT16_MAX;
	uint64_t x2850 = UINT64_MAX;
	static uint64_t t30 = 53053326220LLU;

    t30 = (x2849/((x2850/x2851)<<x2852));

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x2858 = -1;
	uint64_t x2859 = 4LLU;
	static volatile uint64_t t31 = 18378894955475453LLU;

    t31 = (x2857/((x2858/x2859)<<x2860));

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x2954 = INT8_MIN;
	uint64_t x2955 = 6858867562635384028LLU;
	static int8_t x2956 = 25;
	volatile uint64_t t32 = 10LLU;

    t32 = (x2953/((x2954/x2955)<<x2956));

    if (t32 != 274877906943LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint8_t x3337 = 6U;
	uint64_t x3339 = 45468854326LLU;
	int8_t x3340 = 29;
	uint64_t t33 = 3LLU;

    t33 = (x3337/((x3338/x3339)<<x3340));

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x3501 = -1;
	volatile int16_t x3502 = INT16_MIN;
	volatile uint32_t x3503 = 7929U;
	uint16_t x3504 = 13U;
	uint32_t t34 = 129618U;

    t34 = (x3501/((x3502/x3503)<<x3504));

    if (t34 != 30U) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x3641 = -1LL;
	uint8_t x3643 = 32U;
	uint8_t x3644 = 28U;
	volatile int64_t t35 = 14587664LL;

    t35 = (x3641/((x3642/x3643)<<x3644));

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x3685 = INT64_MIN;
	static uint64_t x3688 = 6LLU;

    t36 = (x3685/((x3686/x3687)<<x3688));

    if (t36 != -144115188075855872LL) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x3818 = -434285288092253LL;
	int8_t x3819 = INT8_MIN;
	int64_t t37 = -3739425602LL;

    t37 = (x3817/((x3818/x3819)<<x3820));

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t x3937 = -504;
	static volatile uint32_t x3938 = 47754745U;
	volatile int8_t x3939 = 11;
	volatile uint8_t x3940 = 1U;
	static uint32_t t38 = 1U;

    t38 = (x3937/((x3938/x3939)<<x3940));

    if (t38 != 494U) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint8_t x3973 = UINT8_MAX;
	int64_t x3974 = INT64_MIN;
	uint64_t x3975 = 15559936105350LLU;
	volatile int8_t x3976 = 1;
	volatile uint64_t t39 = 193193163407886LLU;

    t39 = (x3973/((x3974/x3975)<<x3976));

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x4213 = INT32_MIN;
	static int64_t x4214 = INT64_MAX;
	static int64_t x4215 = 20088LL;
	int8_t x4216 = 11;
	volatile int64_t t40 = -28102448380LL;

    t40 = (x4213/((x4214/x4215)<<x4216));

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x4245 = 470606636LL;
	static uint32_t x4246 = 3704U;
	uint8_t x4247 = 7U;
	uint16_t x4248 = 6U;
	volatile int64_t t41 = 1705424542LL;

    t41 = (x4245/((x4246/x4247)<<x4248));

    if (t41 != 13900LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x4321 = INT64_MIN;
	int8_t x4322 = INT8_MIN;
	volatile uint32_t x4323 = 16583U;
	volatile uint8_t x4324 = 6U;
	static volatile int64_t t42 = 7742686086150LL;

    t42 = (x4321/((x4322/x4323)<<x4324));

    if (t42 != -556433594374LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x4428 = 1U;
	static volatile uint32_t t43 = 29U;

    t43 = (x4425/((x4426/x4427)<<x4428));

    if (t43 != 2147436330U) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x4601 = 31U;
	int8_t x4603 = 6;
	uint8_t x4604 = 7U;

    t44 = (x4601/((x4602/x4603)<<x4604));

    if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x4637 = 3LLU;
	volatile uint64_t t45 = 460LLU;

    t45 = (x4637/((x4638/x4639)<<x4640));

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static int8_t x4678 = INT8_MIN;
	volatile int64_t x4679 = -1LL;
	static int16_t x4680 = 1;

    t46 = (x4677/((x4678/x4679)<<x4680));

    if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x4689 = INT32_MIN;
	uint8_t x4692 = 0U;

    t47 = (x4689/((x4690/x4691)<<x4692));

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int64_t x4882 = -1LL;
	int16_t x4883 = -1;
	static volatile int64_t t48 = -1071627622506LL;

    t48 = (x4881/((x4882/x4883)<<x4884));

    if (t48 != -8192LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x4969 = INT16_MAX;
	uint32_t x4970 = 42922480U;
	int16_t x4971 = 233;
	volatile uint8_t x4972 = 21U;
	uint32_t t49 = 1137680U;

    t49 = (x4969/((x4970/x4971)<<x4972));

    if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x4989 = 1835U;
	int16_t x4990 = -10230;
	int64_t x4991 = -1LL;

    t50 = (x4989/((x4990/x4991)<<x4992));

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x5041 = 58260486829295LL;
	volatile int16_t x5042 = -1;
	static int64_t x5043 = -1LL;

    t51 = (x5041/((x5042/x5043)<<x5044));

    if (t51 != 27780764LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x5058 = -245;
	volatile int16_t x5060 = 0;
	volatile int32_t t52 = 0;

    t52 = (x5057/((x5058/x5059)<<x5060));

    if (t52 != -8765239) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x5237 = INT8_MIN;
	int16_t x5238 = -1;
	uint8_t x5240 = 1U;

    t53 = (x5237/((x5238/x5239)<<x5240));

    if (t53 != 24011LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x5325 = -1;
	uint64_t x5326 = 7405781818465842700LLU;
	volatile int32_t x5327 = INT32_MAX;
	int8_t x5328 = 1;
	static uint64_t t54 = 418906084118439LLU;

    t54 = (x5325/((x5326/x5327)<<x5328));

    if (t54 != 2674537423LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x5349 = UINT64_MAX;
	static int8_t x5350 = -1;
	static uint64_t x5351 = 1050606924988901LLU;
	volatile int16_t x5352 = 7;

    t55 = (x5349/((x5350/x5351)<<x5352));

    if (t55 != 8207950112533LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x5357 = 2699483LLU;
	int32_t x5358 = INT32_MIN;
	uint64_t x5359 = 19825501LLU;
	static uint8_t x5360 = 4U;
	volatile uint64_t t56 = 11194792403074881LLU;

    t56 = (x5357/((x5358/x5359)<<x5360));

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x5361 = 14;
	uint64_t x5362 = 61942LLU;
	int8_t x5363 = 58;
	static uint16_t x5364 = 1U;
	volatile uint64_t t57 = 32622363827LLU;

    t57 = (x5361/((x5362/x5363)<<x5364));

    if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x5381 = 3;
	uint16_t x5382 = UINT16_MAX;
	volatile int8_t x5383 = INT8_MAX;
	volatile uint8_t x5384 = 1U;
	int32_t t58 = -981809;

    t58 = (x5381/((x5382/x5383)<<x5384));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x5401 = 2U;
	volatile int64_t x5402 = INT64_MIN;
	int64_t t59 = 63479922624740004LL;

    t59 = (x5401/((x5402/x5403)<<x5404));

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x5405 = INT32_MIN;
	int8_t x5406 = INT8_MAX;
	static uint8_t x5407 = 17U;
	uint32_t x5408 = 15U;
	static int32_t t60 = -61;

    t60 = (x5405/((x5406/x5407)<<x5408));

    if (t60 != -9362) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x5513 = -1;
	volatile uint64_t x5514 = 477888674203145LLU;
	uint16_t x5515 = UINT16_MAX;
	volatile uint64_t t61 = 35451320202LLU;

    t61 = (x5513/((x5514/x5515)<<x5516));

    if (t61 != 6LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint16_t x5725 = 0U;
	uint32_t x5727 = 426306U;
	static int16_t x5728 = 0;

    t62 = (x5725/((x5726/x5727)<<x5728));

    if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x5793 = 3U;
	int16_t x5794 = INT16_MAX;
	volatile int16_t x5795 = INT16_MAX;
	volatile int16_t x5796 = 1;
	static int32_t t63 = -349;

    t63 = (x5793/((x5794/x5795)<<x5796));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x5862 = 8647U;
	uint16_t x5863 = 90U;
	uint8_t x5864 = 0U;
	uint32_t t64 = 21U;

    t64 = (x5861/((x5862/x5863)<<x5864));

    if (t64 != 71U) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x5918 = INT32_MIN;
	volatile int8_t x5919 = -28;

    t65 = (x5917/((x5918/x5919)<<x5920));

    if (t65 != 120259085184LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint64_t x5950 = 30165106862236LLU;
	uint16_t x5951 = 10495U;
	int8_t x5952 = 4;
	volatile uint64_t t66 = 0LLU;

    t66 = (x5949/((x5950/x5951)<<x5952));

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint32_t x5957 = 1809U;
	int64_t x5958 = INT64_MIN;
	int64_t x5959 = -193615066066924LL;
	int16_t x5960 = 17;
	static int64_t t67 = -1LL;

    t67 = (x5957/((x5958/x5959)<<x5960));

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x6157 = INT16_MAX;
	int32_t x6158 = INT32_MIN;
	static uint8_t x6160 = 0U;
	volatile uint64_t t68 = 1772LLU;

    t68 = (x6157/((x6158/x6159)<<x6160));

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile uint32_t x6185 = 3U;
	volatile int8_t x6186 = -1;
	uint8_t x6188 = 0U;
	volatile uint32_t t69 = 3U;

    t69 = (x6185/((x6186/x6187)<<x6188));

    if (t69 != 3U) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x6401 = -104904306660LL;
	static volatile int8_t x6402 = INT8_MIN;
	static volatile int8_t x6403 = INT8_MIN;
	volatile uint32_t x6404 = 0U;
	static int64_t t70 = -291123LL;

    t70 = (x6401/((x6402/x6403)<<x6404));

    if (t70 != -104904306660LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x6533 = INT8_MIN;
	int16_t x6534 = INT16_MIN;
	int16_t x6535 = -1;
	volatile int8_t x6536 = 1;
	static volatile int32_t t71 = 206272;

    t71 = (x6533/((x6534/x6535)<<x6536));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x6601 = 1U;
	static int64_t x6602 = 488654171352715LL;
	int8_t x6603 = 3;
	int64_t t72 = 111040856040657173LL;

    t72 = (x6601/((x6602/x6603)<<x6604));

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x6622 = -1;
	uint32_t x6623 = 68U;
	static volatile uint64_t t73 = 19584LLU;

    t73 = (x6621/((x6622/x6623)<<x6624));

    if (t73 != 36507335168LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x6781 = INT16_MIN;
	int64_t x6782 = INT64_MAX;
	int64_t x6783 = INT64_MAX;
	int16_t x6784 = 3;
	volatile int64_t t74 = -45334811012LL;

    t74 = (x6781/((x6782/x6783)<<x6784));

    if (t74 != -4096LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x6893 = 16415;
	int16_t x6894 = INT16_MIN;
	int32_t x6895 = -1;
	volatile uint8_t x6896 = 6U;
	static volatile int32_t t75 = 482117593;

    t75 = (x6893/((x6894/x6895)<<x6896));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int8_t x6946 = INT8_MIN;
	static int8_t x6947 = INT8_MIN;
	uint16_t x6948 = 2U;
	volatile int32_t t76 = 263;

    t76 = (x6945/((x6946/x6947)<<x6948));

    if (t76 != -32) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x7041 = -8;
	uint64_t x7042 = 3779329541109LLU;
	static int16_t x7043 = 749;
	static volatile uint16_t x7044 = 6U;
	volatile uint64_t t77 = 23517903392LLU;

    t77 = (x7041/((x7042/x7043)<<x7044));

    if (t77 != 57122447LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x7093 = -1LL;
	uint8_t x7094 = UINT8_MAX;
	int8_t x7095 = 1;
	volatile uint64_t x7096 = 0LLU;

    t78 = (x7093/((x7094/x7095)<<x7096));

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x7145 = 4865375537455LLU;
	int64_t x7146 = -1LL;
	int32_t x7147 = -1;
	uint8_t x7148 = 53U;

    t79 = (x7145/((x7146/x7147)<<x7148));

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint8_t x7277 = 15U;
	int32_t x7278 = INT32_MAX;
	int32_t x7279 = INT32_MAX;
	int32_t t80 = 297488;

    t80 = (x7277/((x7278/x7279)<<x7280));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x7314 = INT32_MIN;
	int64_t x7315 = -1LL;
	uint32_t x7316 = 12U;
	volatile int64_t t81 = 2LL;

    t81 = (x7313/((x7314/x7315)<<x7316));

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x7321 = INT16_MIN;
	int64_t x7322 = -1LL;
	int32_t x7323 = -1;
	volatile int64_t t82 = -22763831245103852LL;

    t82 = (x7321/((x7322/x7323)<<x7324));

    if (t82 != -16384LL) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint16_t x7337 = 117U;
	uint64_t x7338 = UINT64_MAX;
	int16_t x7339 = 257;
	static volatile uint64_t t83 = 1801029813961635070LLU;

    t83 = (x7337/((x7338/x7339)<<x7340));

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x7357 = 59U;
	static int64_t x7358 = INT64_MAX;
	uint16_t x7359 = 257U;
	static volatile int64_t t84 = -7638226613044590LL;

    t84 = (x7357/((x7358/x7359)<<x7360));

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x7385 = -560497563LL;
	int64_t x7386 = INT64_MIN;
	int16_t x7387 = INT16_MIN;
	int8_t x7388 = 2;

    t85 = (x7385/((x7386/x7387)<<x7388));

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x7401 = 53;
	int8_t x7402 = INT8_MAX;
	uint8_t x7403 = 4U;
	volatile int8_t x7404 = 4;
	volatile int32_t t86 = 7;

    t86 = (x7401/((x7402/x7403)<<x7404));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint8_t x7465 = 2U;
	int64_t x7466 = 249806080532LL;
	static int16_t x7467 = INT16_MAX;
	int8_t x7468 = 4;
	volatile int64_t t87 = -23193573243LL;

    t87 = (x7465/((x7466/x7467)<<x7468));

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int64_t x7561 = INT64_MIN;
	int8_t x7564 = 6;

    t88 = (x7561/((x7562/x7563)<<x7564));

    if (t88 != -2324438517352514LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x7601 = INT8_MAX;
	uint32_t x7602 = UINT32_MAX;
	volatile uint32_t t89 = 182766U;

    t89 = (x7601/((x7602/x7603)<<x7604));

    if (t89 != 3U) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x7713 = 0;
	uint64_t x7715 = 6040381255814LLU;
	uint8_t x7716 = 40U;
	volatile uint64_t t90 = 513044222715165LLU;

    t90 = (x7713/((x7714/x7715)<<x7716));

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x7717 = INT32_MIN;
	uint64_t x7718 = 17028719791LLU;
	volatile int8_t x7720 = 15;
	uint64_t t91 = 778076924175LLU;

    t91 = (x7717/((x7718/x7719)<<x7720));

    if (t91 != 3008355LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x7726 = INT16_MIN;
	uint32_t x7727 = 13962U;
	volatile int64_t x7728 = 3LL;
	volatile int64_t t92 = 9473LL;

    t92 = (x7725/((x7726/x7727)<<x7728));

    if (t92 != -3747936559032LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x7737 = INT32_MIN;
	int8_t x7739 = 1;
	volatile uint8_t x7740 = 21U;
	int64_t t93 = 125392218818988896LL;

    t93 = (x7737/((x7738/x7739)<<x7740));

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x7845 = INT8_MIN;
	uint64_t x7846 = UINT64_MAX;
	volatile uint8_t x7847 = 78U;
	volatile uint16_t x7848 = 0U;
	volatile uint64_t t94 = 401LLU;

    t94 = (x7845/((x7846/x7847)<<x7848));

    if (t94 != 77LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x7874 = INT32_MAX;
	uint16_t x7875 = 34U;
	uint64_t x7876 = 1LLU;
	static volatile int64_t t95 = -1898016605359LL;

    t95 = (x7873/((x7874/x7875)<<x7876));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x7877 = UINT32_MAX;
	uint32_t x7878 = 3034002U;
	uint8_t x7880 = 12U;

    t96 = (x7877/((x7878/x7879)<<x7880));

    if (t96 != 2U) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x8057 = INT32_MIN;
	int16_t x8059 = -320;
	uint8_t x8060 = 2U;
	int32_t t97 = 7313727;

    t97 = (x8057/((x8058/x8059)<<x8060));

    if (t97 != -22369621) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int32_t x8217 = INT32_MIN;
	uint32_t x8218 = UINT32_MAX;
	int32_t x8219 = INT32_MIN;

    t98 = (x8217/((x8218/x8219)<<x8220));

    if (t98 != 536870912U) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x8441 = -1;
	static int64_t x8442 = INT64_MAX;
	volatile uint8_t x8444 = 2U;
	static int64_t t99 = -58368989042063385LL;

    t99 = (x8441/((x8442/x8443)<<x8444));

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x8489 = 3U;
	uint64_t x8490 = 1777883449LLU;
	int32_t x8491 = 1;

    t100 = (x8489/((x8490/x8491)<<x8492));

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x8501 = INT32_MIN;
	volatile int16_t x8502 = INT16_MIN;
	uint64_t x8503 = 2488451869989LLU;
	uint16_t x8504 = 0U;
	static uint64_t t101 = 252714905116734163LLU;

    t101 = (x8501/((x8502/x8503)<<x8504));

    if (t101 != 2488452160683LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x8529 = 5;
	static uint16_t x8530 = UINT16_MAX;
	static int16_t x8531 = INT16_MAX;
	uint16_t x8532 = 10U;

    t102 = (x8529/((x8530/x8531)<<x8532));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x8634 = UINT64_MAX;
	int64_t x8635 = 64115LL;
	int16_t x8636 = 10;
	static volatile uint64_t t103 = 6LLU;

    t103 = (x8633/((x8634/x8635)<<x8636));

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	static int64_t x8654 = INT64_MIN;
	static int64_t x8655 = -178089234LL;
	volatile uint8_t x8656 = 1U;
	volatile int64_t t104 = 210301LL;

    t104 = (x8653/((x8654/x8655)<<x8656));

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x8817 = -1;
	static uint16_t x8819 = 158U;

    t105 = (x8817/((x8818/x8819)<<x8820));

    if (t105 != 1065LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int64_t x8865 = INT64_MIN;
	static uint64_t x8866 = UINT64_MAX;
	static int16_t x8867 = INT16_MAX;
	static int8_t x8868 = 0;

    t106 = (x8865/((x8866/x8867)<<x8868));

    if (t106 != 16383LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x8882 = INT16_MIN;
	static int8_t x8883 = -61;
	int8_t x8884 = 1;
	volatile uint64_t t107 = 18879778748024LLU;

    t107 = (x8881/((x8882/x8883)<<x8884));

    if (t107 != 13LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x9061 = INT64_MAX;
	volatile int64_t x9062 = -724LL;
	int8_t x9063 = INT8_MIN;
	int8_t x9064 = 0;

    t108 = (x9061/((x9062/x9063)<<x9064));

    if (t108 != 1844674407370955161LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint16_t x9103 = 9U;
	int64_t x9104 = 2LL;
	int64_t t109 = -46LL;

    t109 = (x9101/((x9102/x9103)<<x9104));

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int64_t x9285 = -31LL;
	int64_t x9287 = -1LL;
	static uint64_t t110 = 25092305368371106LLU;

    t110 = (x9285/((x9286/x9287)<<x9288));

    if (t110 != 4398046511103LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x9301 = 2U;
	volatile int32_t x9302 = INT32_MAX;
	volatile int64_t x9303 = 7953LL;
	int8_t x9304 = 1;

    t111 = (x9301/((x9302/x9303)<<x9304));

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x9325 = -26808939;
	static int64_t x9326 = -1LL;
	volatile int8_t x9327 = -1;
	uint16_t x9328 = 1U;

    t112 = (x9325/((x9326/x9327)<<x9328));

    if (t112 != -13404469LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x9333 = 206067546;
	uint32_t x9335 = 138272417U;
	volatile uint32_t t113 = 2396697U;

    t113 = (x9333/((x9334/x9335)<<x9336));

    if (t113 != 415458U) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x9358 = INT8_MIN;
	volatile uint32_t x9359 = 822191050U;
	uint16_t x9360 = 13U;
	static volatile uint32_t t114 = 2U;

    t114 = (x9357/((x9358/x9359)<<x9360));

    if (t114 != 104856U) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x9381 = -5636125;
	uint64_t x9382 = 565390041774LLU;
	static volatile uint64_t x9384 = 1LLU;
	uint64_t t115 = 1994475549LLU;

    t115 = (x9381/((x9382/x9383)<<x9384));

    if (t115 != 6900521911LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x9481 = INT64_MIN;
	static int16_t x9482 = INT16_MAX;
	static uint16_t x9483 = 1913U;
	uint8_t x9484 = 15U;
	volatile int64_t t116 = 15827144818769418LL;

    t116 = (x9481/((x9482/x9483)<<x9484));

    if (t116 != -16557351571215LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x9489 = INT32_MAX;
	int16_t x9491 = INT16_MIN;
	volatile uint32_t t117 = 6784U;

    t117 = (x9489/((x9490/x9491)<<x9492));

    if (t117 != 16777215U) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x9501 = -1LL;
	uint32_t x9502 = 194U;
	uint8_t x9504 = 3U;
	static volatile int64_t t118 = -3751943283454393LL;

    t118 = (x9501/((x9502/x9503)<<x9504));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x9605 = INT64_MIN;
	volatile uint32_t x9606 = 2813U;
	volatile uint8_t x9607 = UINT8_MAX;
	int8_t x9608 = 2;
	static volatile int64_t t119 = 228LL;

    t119 = (x9605/((x9606/x9607)<<x9608));

    if (t119 != -209622091746699450LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x9653 = INT32_MAX;
	uint32_t x9654 = UINT32_MAX;
	int32_t x9655 = -4;
	int16_t x9656 = 0;
	volatile uint32_t t120 = 1557789641U;

    t120 = (x9653/((x9654/x9655)<<x9656));

    if (t120 != 2147483647U) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x9685 = UINT8_MAX;
	int64_t x9686 = INT64_MIN;
	volatile int64_t x9687 = INT64_MIN;
	int64_t x9688 = 9LL;

    t121 = (x9685/((x9686/x9687)<<x9688));

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint16_t x9697 = 130U;
	uint16_t x9698 = 28U;
	volatile uint16_t x9699 = 19U;
	uint8_t x9700 = 0U;
	int32_t t122 = 66;

    t122 = (x9697/((x9698/x9699)<<x9700));

    if (t122 != 130) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x9954 = 403;
	volatile uint8_t x9956 = 0U;
	volatile int32_t t123 = -5663844;

    t123 = (x9953/((x9954/x9955)<<x9956));

    if (t123 != -8192) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int32_t x10025 = -9086;
	uint32_t x10026 = 44331529U;
	static uint8_t x10027 = 38U;
	static int8_t x10028 = 1;
	static volatile uint32_t t124 = 115617U;

    t124 = (x10025/((x10026/x10027)<<x10028));

    if (t124 != 1840U) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x10225 = 0U;
	int8_t x10226 = -5;
	int16_t x10227 = -1;
	static volatile int8_t x10228 = 1;
	volatile int32_t t125 = -3;

    t125 = (x10225/((x10226/x10227)<<x10228));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x10257 = UINT8_MAX;
	int64_t x10258 = -8458882262536LL;
	volatile int32_t x10259 = -217014;
	int64_t t126 = -12LL;

    t126 = (x10257/((x10258/x10259)<<x10260));

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x10301 = 4;
	uint64_t x10302 = UINT64_MAX;
	int16_t x10303 = -821;

    t127 = (x10301/((x10302/x10303)<<x10304));

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x10445 = UINT16_MAX;
	int64_t x10446 = INT64_MIN;
	int32_t x10448 = 19;
	int64_t t128 = 48LL;

    t128 = (x10445/((x10446/x10447)<<x10448));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x10693 = 94912477326260049LLU;
	int32_t x10694 = -1;
	uint64_t x10695 = 138890445066670LLU;
	uint64_t t129 = 807466LLU;

    t129 = (x10693/((x10694/x10695)<<x10696));

    if (t129 != 0LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x10701 = -1578;
	int64_t x10702 = INT64_MIN;
	volatile int32_t x10703 = INT32_MIN;
	uint8_t x10704 = 4U;
	static volatile int64_t t130 = 111303771LL;

    t130 = (x10701/((x10702/x10703)<<x10704));

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x10729 = INT8_MIN;
	static uint8_t x10731 = 24U;
	volatile int8_t x10732 = 2;
	static volatile int32_t t131 = 7130995;

    t131 = (x10729/((x10730/x10731)<<x10732));

    if (t131 != -10) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x10895 = UINT8_MAX;
	volatile uint64_t t132 = 532468384611188858LLU;

    t132 = (x10893/((x10894/x10895)<<x10896));

    if (t132 != 49243LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint8_t x10965 = 2U;
	int8_t x10966 = -1;
	volatile int8_t x10967 = -1;
	static uint16_t x10968 = 7U;
	int32_t t133 = 214;

    t133 = (x10965/((x10966/x10967)<<x10968));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x11025 = INT32_MIN;
	int32_t x11026 = INT32_MAX;
	volatile int32_t x11027 = INT32_MAX;
	uint64_t x11028 = 0LLU;
	volatile int32_t t134 = INT32_MIN;

    t134 = (x11025/((x11026/x11027)<<x11028));

    if (t134 != INT32_MIN) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x11221 = -1;
	int64_t x11222 = INT64_MAX;
	int32_t x11224 = 2;
	int64_t t135 = -340LL;

    t135 = (x11221/((x11222/x11223)<<x11224));

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint32_t x11333 = 142802U;
	int8_t x11334 = -7;
	static int32_t x11335 = -1;
	uint8_t x11336 = 16U;
	uint32_t t136 = 6640U;

    t136 = (x11333/((x11334/x11335)<<x11336));

    if (t136 != 0U) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x11453 = -1;
	uint64_t x11455 = 670694387461205LLU;
	uint64_t t137 = 285469032479002040LLU;

    t137 = (x11453/((x11454/x11455)<<x11456));

    if (t137 != 81874697803LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x11621 = 37U;
	uint8_t x11623 = 6U;
	uint16_t x11624 = 6U;
	uint32_t t138 = 1177163U;

    t138 = (x11621/((x11622/x11623)<<x11624));

    if (t138 != 0U) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t x11801 = INT32_MAX;
	int64_t x11802 = INT64_MAX;
	int64_t t139 = 2660458791012247LL;

    t139 = (x11801/((x11802/x11803)<<x11804));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x11885 = INT16_MIN;
	int16_t x11886 = INT16_MAX;
	uint32_t x11887 = 200U;
	uint8_t x11888 = 1U;

    t140 = (x11885/((x11886/x11887)<<x11888));

    if (t140 != 13174645U) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x12130 = INT16_MIN;
	int16_t x12131 = -142;
	uint16_t x12132 = 0U;
	int32_t t141 = -63;

    t141 = (x12129/((x12130/x12131)<<x12132));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x12281 = -1LL;
	int8_t x12282 = -3;
	int16_t x12283 = -1;
	volatile int8_t x12284 = 1;
	int64_t t142 = 6726696LL;

    t142 = (x12281/((x12282/x12283)<<x12284));

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x12301 = INT64_MIN;
	static int16_t x12302 = INT16_MIN;
	volatile int16_t x12303 = INT16_MIN;
	volatile int64_t t143 = 47808727544LL;

    t143 = (x12301/((x12302/x12303)<<x12304));

    if (t143 != -4611686018427387904LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x12541 = -1;
	int16_t x12542 = INT16_MAX;
	int16_t x12543 = 52;
	static volatile int32_t t144 = 24112;

    t144 = (x12541/((x12542/x12543)<<x12544));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile uint8_t x12561 = 28U;
	uint64_t x12562 = 3122LLU;
	uint8_t x12563 = UINT8_MAX;
	uint32_t x12564 = 2U;
	static uint64_t t145 = 228590206092827739LLU;

    t145 = (x12561/((x12562/x12563)<<x12564));

    if (t145 != 0LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x12578 = -6175780600288493LL;
	int32_t x12579 = INT32_MIN;
	volatile int64_t t146 = -17755284LL;

    t146 = (x12577/((x12578/x12579)<<x12580));

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x12585 = UINT16_MAX;
	uint64_t x12586 = 4068900LLU;
	static int8_t x12588 = 25;
	static uint64_t t147 = 10525331193LLU;

    t147 = (x12585/((x12586/x12587)<<x12588));

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x12813 = 10259U;
	static int16_t x12814 = INT16_MIN;
	int16_t x12815 = INT16_MIN;

    t148 = (x12813/((x12814/x12815)<<x12816));

    if (t148 != 20) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x12875 = INT8_MIN;
	uint16_t x12876 = 0U;
	static uint64_t t149 = 15LLU;

    t149 = (x12873/((x12874/x12875)<<x12876));

    if (t149 != 25147266LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x12877 = -1;
	int8_t x12878 = INT8_MIN;
	uint64_t x12879 = 29552112755LLU;
	uint16_t x12880 = 0U;
	static uint64_t t150 = 12686826465LLU;

    t150 = (x12877/((x12878/x12879)<<x12880));

    if (t150 != 29552112755LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x13021 = INT64_MAX;
	volatile uint8_t x13022 = UINT8_MAX;
	static uint16_t x13023 = 6U;
	volatile int16_t x13024 = 0;
	volatile int64_t t151 = -52298LL;

    t151 = (x13021/((x13022/x13023)<<x13024));

    if (t151 != 219604096115589900LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x13073 = 2354451LL;
	int32_t x13074 = INT32_MIN;
	static int16_t x13075 = INT16_MIN;
	int8_t x13076 = 0;

    t152 = (x13073/((x13074/x13075)<<x13076));

    if (t152 != 35LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x13081 = 0;
	int32_t x13082 = INT32_MIN;
	uint32_t x13084 = 18U;
	volatile uint32_t t153 = 6867U;

    t153 = (x13081/((x13082/x13083)<<x13084));

    if (t153 != 0U) { NG(); } else { ; }
	
}

void f154(void) {
    	static int64_t x13125 = 1063741765935LL;
	int16_t x13126 = INT16_MIN;
	static int64_t x13127 = -20LL;
	volatile int8_t x13128 = 0;
	static int64_t t154 = 138706LL;

    t154 = (x13125/((x13126/x13127)<<x13128));

    if (t154 != 649414997LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x13301 = INT16_MAX;
	uint8_t x13302 = UINT8_MAX;
	int8_t x13303 = INT8_MAX;
	volatile int32_t x13304 = 0;
	int32_t t155 = -314;

    t155 = (x13301/((x13302/x13303)<<x13304));

    if (t155 != 16383) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x13425 = 0U;
	volatile int32_t x13426 = 1222417;
	uint16_t x13427 = 4246U;
	uint8_t x13428 = 11U;
	volatile uint32_t t156 = 25314218U;

    t156 = (x13425/((x13426/x13427)<<x13428));

    if (t156 != 0U) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x13489 = -1;
	int32_t x13490 = INT32_MIN;
	static volatile int16_t x13491 = INT16_MIN;
	int8_t x13492 = 0;

    t157 = (x13489/((x13490/x13491)<<x13492));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x13649 = INT8_MAX;
	int16_t x13650 = INT16_MIN;
	static int32_t x13651 = -1;
	int32_t t158 = -1305150;

    t158 = (x13649/((x13650/x13651)<<x13652));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x13729 = 4128723LLU;
	static uint16_t x13730 = 395U;
	volatile uint64_t t159 = 6097989LLU;

    t159 = (x13729/((x13730/x13731)<<x13732));

    if (t159 != 0LLU) { NG(); } else { ; }
	
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


    return 0;
}

