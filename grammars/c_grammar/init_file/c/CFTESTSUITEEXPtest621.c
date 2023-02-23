
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

static uint32_t x29 = UINT32_MAX;
int8_t x56 = INT8_MIN;
volatile int8_t x87 = -14;
volatile int32_t t8 = -42;
static volatile int16_t x137 = -305;
uint64_t t10 = 4503459657LLU;
uint64_t x156 = 19448060LLU;
uint64_t x221 = UINT64_MAX;
static uint64_t x233 = 1341144009119748LLU;
int8_t x265 = INT8_MIN;
int64_t t18 = -5558596LL;
int16_t x269 = 3;
uint32_t x286 = UINT32_MAX;
int16_t x288 = INT16_MIN;
uint32_t t22 = 109U;
static volatile uint64_t t23 = 117167LLU;
uint8_t x309 = 31U;
static volatile int32_t x311 = -1;
int8_t x343 = 23;
volatile int64_t t25 = 49288263506003LL;
uint16_t x369 = UINT16_MAX;
static volatile int16_t x372 = -1;
static int64_t x394 = INT64_MIN;
volatile int16_t x445 = INT16_MIN;
int64_t x448 = -1LL;
volatile int64_t t31 = 96139155833LL;
int16_t x483 = -1;
uint16_t x499 = 3U;
static volatile uint32_t x509 = 2812877U;
static int32_t x510 = -1;
int8_t x534 = INT8_MIN;
static uint32_t x536 = UINT32_MAX;
int8_t x557 = INT8_MIN;
volatile int8_t x575 = INT8_MIN;
static uint8_t x578 = UINT8_MAX;
volatile int64_t t41 = -2091837667LL;
uint64_t t42 = 750LLU;
static int16_t x595 = -1;
int32_t x628 = -1;
int8_t x632 = -1;
static int16_t x641 = INT16_MIN;
int32_t x645 = INT32_MAX;
int16_t x655 = -336;
int32_t x656 = -1;
int8_t x681 = 18;
volatile int64_t x705 = INT64_MIN;
int32_t x708 = 167389376;
static uint64_t t55 = 81040718216LLU;
volatile uint32_t t58 = 24739360U;
uint8_t x746 = UINT8_MAX;
uint8_t x749 = 20U;
static uint16_t x750 = UINT16_MAX;
volatile int32_t t60 = 50;
volatile uint64_t x763 = 1764422671266LLU;
int64_t x768 = -1LL;
int64_t t62 = -48490471613725981LL;
uint8_t x807 = 30U;
int32_t x809 = INT32_MIN;
int32_t x810 = 14763042;
int8_t x838 = INT8_MAX;
volatile int32_t t66 = -347034594;
int16_t x846 = INT16_MIN;
int8_t x848 = INT8_MIN;
volatile int16_t x851 = 180;
uint8_t x859 = UINT8_MAX;
static uint64_t x863 = 11LLU;
int64_t t71 = 11LL;
static int16_t x873 = INT16_MAX;
uint16_t x878 = 19U;
static volatile int32_t x880 = -1;
uint32_t x883 = 350390240U;
volatile uint32_t t76 = 3646U;
int32_t x922 = -1;
int16_t x924 = 1;
int16_t x929 = -3;
uint32_t x952 = 11170U;
uint64_t x954 = 1410115172559234634LLU;
uint64_t x966 = 258990924695LLU;
volatile int32_t x1002 = INT32_MIN;
int64_t x1004 = -242477LL;
volatile uint32_t x1016 = 18U;
volatile int64_t t88 = -43LL;
int32_t x1019 = INT32_MAX;
volatile int64_t x1036 = -407465453519572LL;
volatile int32_t x1089 = INT32_MAX;
volatile int32_t x1093 = INT32_MIN;
volatile uint32_t t97 = 7399473U;
int64_t x1134 = -4454156LL;
int16_t x1136 = INT16_MIN;
static int32_t x1149 = -1029610;
int64_t t103 = -2413938051769418LL;
volatile uint64_t x1167 = 2109042326110785055LLU;
volatile int64_t x1174 = INT64_MIN;
int16_t x1176 = 1;
static int16_t x1181 = INT16_MIN;
int32_t x1184 = -7341935;
uint64_t x1196 = 83888088221LLU;
volatile uint16_t x1198 = 17531U;
int32_t t109 = 10325336;
volatile uint64_t x1225 = 7254034493311811LLU;
volatile uint8_t x1227 = 3U;
int64_t x1228 = 77009224674774LL;
volatile uint64_t t113 = 6347168LLU;
uint64_t x1233 = UINT64_MAX;
static volatile uint64_t t114 = 822732351450557LLU;
volatile int64_t x1243 = -1LL;
volatile int8_t x1244 = INT8_MAX;
volatile int32_t x1245 = -2634154;
int8_t x1275 = -1;
int8_t x1280 = -45;
int8_t x1282 = INT8_MIN;
volatile int64_t x1294 = INT64_MIN;
int8_t x1296 = 4;
volatile int64_t t122 = -55893517017910LL;
int8_t x1305 = INT8_MAX;
int64_t x1308 = -1LL;
int16_t x1311 = INT16_MIN;
int32_t x1324 = INT32_MAX;
static uint32_t t126 = 181891U;
static int64_t x1369 = INT64_MIN;
static int16_t x1372 = INT16_MIN;
int64_t x1390 = -1LL;
volatile uint64_t x1392 = 380537002LLU;
uint32_t x1397 = UINT32_MAX;
volatile uint32_t t131 = 4459U;
int8_t x1425 = -2;
volatile uint32_t t134 = 257281892U;
static int32_t x1437 = INT32_MAX;
int16_t x1470 = INT16_MIN;
int32_t x1520 = -1;
int64_t t140 = -338102230600236LL;
static uint16_t x1532 = 3U;
volatile int64_t t142 = -1895LL;
int64_t x1590 = 5277031209641LL;
uint64_t x1596 = UINT64_MAX;
volatile uint64_t x1597 = 130719060212918LLU;
uint32_t x1633 = UINT32_MAX;
volatile uint32_t t154 = 125U;
uint32_t x1646 = 24765U;
uint8_t x1653 = UINT8_MAX;
volatile int16_t x1674 = INT16_MAX;
uint16_t x1681 = UINT16_MAX;
static volatile uint64_t t162 = 722814685822336674LLU;
int32_t x1717 = -1;
static uint32_t x1718 = UINT32_MAX;
volatile uint8_t x1720 = 1U;
int64_t x1732 = INT64_MIN;
int8_t x1787 = INT8_MIN;
int64_t x1788 = 169LL;
static uint32_t x1804 = UINT32_MAX;
static uint16_t x1816 = 1708U;
static volatile int8_t x1823 = 3;
int32_t x1832 = 66;
static int32_t t173 = 3238052;
volatile int16_t x1850 = 256;
static volatile int8_t x1851 = 1;
uint8_t x1877 = 97U;
uint32_t x1890 = UINT32_MAX;
uint16_t x1893 = UINT16_MAX;
int8_t x1896 = -1;
volatile int32_t t182 = 182735202;
volatile int32_t x1907 = -1;
int64_t x1909 = INT64_MIN;
static uint64_t x1912 = 91773891644396791LLU;
int16_t x1926 = -801;
volatile int64_t x1927 = -1LL;
int64_t t186 = -36564977344055896LL;
int8_t x1933 = INT8_MIN;
static int64_t x1935 = -1LL;
int16_t x1948 = 1;
volatile uint64_t t190 = 935846242LLU;
uint64_t t191 = 2172647757362LLU;
volatile int64_t t194 = -7LL;
int8_t x2014 = INT8_MIN;
uint16_t x2029 = UINT16_MAX;
static int16_t x2032 = INT16_MAX;
static int32_t t196 = 45852;
int32_t x2049 = 773319762;
uint16_t x2051 = 1U;


void f0(void) {
    	int32_t x1 = 34719297;
	volatile int32_t x2 = -2157;
	int16_t x3 = -1;
	volatile int8_t x4 = INT8_MIN;
	int32_t t0 = -1;

    t0 = (x1%((x2/x3)*x4));

    if (t0 != 207297) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = -1;
	volatile int32_t x6 = -62512;
	volatile int32_t x7 = -1;
	volatile int8_t x8 = 59;
	volatile int32_t t1 = -948391;

    t1 = (x5%((x6/x7)*x8));

    if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x30 = 34714240008089039LLU;
	static uint16_t x31 = UINT16_MAX;
	volatile uint32_t x32 = UINT32_MAX;
	volatile uint64_t t2 = 119378646386LLU;

    t2 = (x29%((x30/x31)*x32));

    if (t2 != 4294967295LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x37 = INT8_MIN;
	volatile int64_t x38 = INT64_MAX;
	volatile int32_t x39 = INT32_MIN;
	uint64_t x40 = UINT64_MAX;
	volatile uint64_t t3 = 598701916136810LLU;

    t3 = (x37%((x38/x39)*x40));

    if (t3 != 4294967168LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x41 = INT16_MAX;
	volatile int32_t x42 = INT32_MAX;
	int8_t x43 = INT8_MIN;
	int8_t x44 = -3;
	volatile int32_t t4 = 3;

    t4 = (x41%((x42/x43)*x44));

    if (t4 != 32767) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x53 = INT8_MAX;
	int64_t x54 = INT64_MIN;
	static int64_t x55 = INT64_MIN;
	static int64_t t5 = 160812219823LL;

    t5 = (x53%((x54/x55)*x56));

    if (t5 != 127LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x85 = INT8_MIN;
	uint64_t x86 = UINT64_MAX;
	static int8_t x88 = 29;
	uint64_t t6 = 210504079LLU;

    t6 = (x85%((x86/x87)*x88));

    if (t6 != 12LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x93 = INT16_MIN;
	uint64_t x94 = UINT64_MAX;
	int64_t x95 = INT64_MIN;
	int16_t x96 = -1;
	volatile uint64_t t7 = 7203938083137484834LLU;

    t7 = (x93%((x94/x95)*x96));

    if (t7 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x97 = INT8_MAX;
	static int16_t x98 = INT16_MIN;
	int16_t x99 = INT16_MIN;
	static int8_t x100 = INT8_MAX;

    t8 = (x97%((x98/x99)*x100));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x138 = UINT64_MAX;
	int8_t x139 = INT8_MIN;
	static int8_t x140 = 58;
	uint64_t t9 = 641LLU;

    t9 = (x137%((x138/x139)*x140));

    if (t9 != 9LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile uint64_t x141 = UINT64_MAX;
	int64_t x142 = -1LL;
	static int64_t x143 = -1LL;
	uint8_t x144 = 70U;

    t10 = (x141%((x142/x143)*x144));

    if (t10 != 15LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint16_t x153 = 4U;
	static int16_t x154 = -11676;
	int16_t x155 = -1;
	volatile uint64_t t11 = 139636LLU;

    t11 = (x153%((x154/x155)*x156));

    if (t11 != 4LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x169 = UINT32_MAX;
	volatile uint16_t x170 = 1U;
	volatile uint8_t x171 = 1U;
	int8_t x172 = INT8_MIN;
	volatile uint32_t t12 = 509855U;

    t12 = (x169%((x170/x171)*x172));

    if (t12 != 127U) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x173 = INT32_MIN;
	static uint8_t x174 = UINT8_MAX;
	static int16_t x175 = -1;
	uint64_t x176 = 8787250540114877676LLU;
	uint64_t t13 = 457612761LLU;

    t13 = (x173%((x174/x175)*x176));

    if (t13 != 8692854808290578196LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x222 = -1;
	uint16_t x223 = 1U;
	volatile int16_t x224 = -1;
	uint64_t t14 = 250648847172LLU;

    t14 = (x221%((x222/x223)*x224));

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x229 = -14870660LL;
	int64_t x230 = -1253302LL;
	int32_t x231 = 9;
	int8_t x232 = -1;
	static volatile int64_t t15 = 61189224LL;

    t15 = (x229%((x230/x231)*x232));

    if (t15 != -109630LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x234 = INT16_MAX;
	volatile uint16_t x235 = 1072U;
	static int64_t x236 = -1LL;
	volatile uint64_t t16 = 3LLU;

    t16 = (x233%((x234/x235)*x236));

    if (t16 != 1341144009119748LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x253 = -5765;
	int64_t x254 = -15520795LL;
	static int8_t x255 = -3;
	static int8_t x256 = INT8_MAX;
	int64_t t17 = -11559LL;

    t17 = (x253%((x254/x255)*x256));

    if (t17 != -5765LL) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int64_t x266 = INT64_MIN;
	int32_t x267 = INT32_MAX;
	static int8_t x268 = -3;

    t18 = (x265%((x266/x267)*x268));

    if (t18 != -128LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x270 = UINT16_MAX;
	static int16_t x271 = INT16_MAX;
	volatile int64_t x272 = -1LL;
	static int64_t t19 = 1LL;

    t19 = (x269%((x270/x271)*x272));

    if (t19 != 1LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x281 = INT8_MIN;
	uint32_t x282 = UINT32_MAX;
	int8_t x283 = INT8_MAX;
	int32_t x284 = -1;
	volatile uint32_t t20 = 222153206U;

    t20 = (x281%((x282/x283)*x284));

    if (t20 != 33818512U) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x285 = -1;
	int32_t x287 = -1;
	uint32_t t21 = 35U;

    t21 = (x285%((x286/x287)*x288));

    if (t21 != 32767U) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x289 = UINT32_MAX;
	int16_t x290 = INT16_MAX;
	volatile int32_t x291 = -1;
	volatile int32_t x292 = 1;

    t22 = (x289%((x290/x291)*x292));

    if (t22 != 32766U) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x305 = INT32_MAX;
	volatile int8_t x306 = -1;
	static volatile uint64_t x307 = 34544200LLU;
	static int8_t x308 = INT8_MAX;

    t23 = (x305%((x306/x307)*x308));

    if (t23 != 2147483647LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x310 = -1;
	int64_t x312 = -1942263001943LL;
	int64_t t24 = -8541LL;

    t24 = (x309%((x310/x311)*x312));

    if (t24 != 31LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x341 = -1LL;
	int8_t x342 = INT8_MIN;
	int16_t x344 = -1;

    t25 = (x341%((x342/x343)*x344));

    if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x361 = INT64_MAX;
	int32_t x362 = INT32_MIN;
	static uint16_t x363 = UINT16_MAX;
	int64_t x364 = -1LL;
	volatile int64_t t26 = -1803790191LL;

    t26 = (x361%((x362/x363)*x364));

    if (t26 != 32767LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x370 = -29039LL;
	int32_t x371 = -1619;
	int64_t t27 = 3697933716776893830LL;

    t27 = (x369%((x370/x371)*x372));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t x373 = INT32_MIN;
	int64_t x374 = -1LL;
	int32_t x375 = -1;
	int16_t x376 = -1;
	int64_t t28 = -528953348040137164LL;

    t28 = (x373%((x374/x375)*x376));

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x393 = UINT8_MAX;
	static uint32_t x395 = 1425373U;
	uint16_t x396 = 7861U;
	int64_t t29 = 575197LL;

    t29 = (x393%((x394/x395)*x396));

    if (t29 != 255LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static int16_t x421 = 0;
	int32_t x422 = INT32_MAX;
	static uint64_t x423 = 1960682LLU;
	int8_t x424 = -1;
	uint64_t t30 = 181LLU;

    t30 = (x421%((x422/x423)*x424));

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint16_t x446 = 18535U;
	static uint8_t x447 = UINT8_MAX;

    t31 = (x445%((x446/x447)*x448));

    if (t31 != -8LL) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x461 = INT64_MIN;
	int32_t x462 = INT32_MAX;
	volatile uint16_t x463 = UINT16_MAX;
	static volatile uint64_t x464 = 3LLU;
	static volatile uint64_t t32 = 1023000859632919LLU;

    t32 = (x461%((x462/x463)*x464));

    if (t32 != 32768LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x469 = UINT32_MAX;
	int16_t x470 = 11724;
	int8_t x471 = INT8_MIN;
	volatile uint64_t x472 = 4907204974318LLU;
	uint64_t t33 = 9949LLU;

    t33 = (x469%((x470/x471)*x472));

    if (t33 != 4294967295LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x481 = -274;
	volatile uint16_t x482 = 978U;
	int16_t x484 = INT16_MAX;
	volatile int32_t t34 = -1857;

    t34 = (x481%((x482/x483)*x484));

    if (t34 != -274) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x497 = 47U;
	volatile int16_t x498 = INT16_MIN;
	int8_t x500 = INT8_MAX;
	volatile int32_t t35 = 20745433;

    t35 = (x497%((x498/x499)*x500));

    if (t35 != 47) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint64_t x511 = 13183LLU;
	static uint16_t x512 = 1774U;
	uint64_t t36 = 1073881250LLU;

    t36 = (x509%((x510/x511)*x512));

    if (t36 != 2812877LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint32_t x533 = 1857375U;
	int8_t x535 = INT8_MAX;
	uint32_t t37 = 438631103U;

    t37 = (x533%((x534/x535)*x536));

    if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x545 = INT16_MAX;
	int16_t x546 = INT16_MIN;
	static uint16_t x547 = 149U;
	volatile int8_t x548 = INT8_MIN;
	int32_t t38 = 23150;

    t38 = (x545%((x546/x547)*x548));

    if (t38 != 4735) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint32_t x558 = UINT32_MAX;
	static int16_t x559 = INT16_MIN;
	static volatile int8_t x560 = 2;
	volatile uint32_t t39 = 56U;

    t39 = (x557%((x558/x559)*x560));

    if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint8_t x573 = 8U;
	volatile int32_t x574 = INT32_MIN;
	static volatile uint32_t x576 = 524453353U;
	volatile uint32_t t40 = 409U;

    t40 = (x573%((x574/x575)*x576));

    if (t40 != 8U) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x577 = -113340128970LL;
	uint16_t x579 = 4U;
	static volatile int32_t x580 = 5647757;

    t41 = (x577%((x578/x579)*x580));

    if (t41 != -192965232LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile uint8_t x585 = UINT8_MAX;
	static uint64_t x586 = 10071378LLU;
	static volatile uint8_t x587 = 4U;
	uint16_t x588 = 4U;

    t42 = (x585%((x586/x587)*x588));

    if (t42 != 255LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint16_t x593 = 94U;
	int32_t x594 = -1;
	static int64_t x596 = 900912845675727005LL;
	volatile int64_t t43 = -220369730523LL;

    t43 = (x593%((x594/x595)*x596));

    if (t43 != 94LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x605 = INT32_MAX;
	uint64_t x606 = 3571321206502LLU;
	static uint16_t x607 = UINT16_MAX;
	uint32_t x608 = 1276723307U;
	static volatile uint64_t t44 = 2046988623320817791LLU;

    t44 = (x605%((x606/x607)*x608));

    if (t44 != 2147483647LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x625 = INT16_MIN;
	static int16_t x626 = INT16_MIN;
	int16_t x627 = -6376;
	volatile int32_t t45 = 2332014;

    t45 = (x625%((x626/x627)*x628));

    if (t45 != -3) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint16_t x629 = 1404U;
	static uint32_t x630 = 360842321U;
	int64_t x631 = 1706312LL;
	static int64_t t46 = -1LL;

    t46 = (x629%((x630/x631)*x632));

    if (t46 != 138LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x642 = INT16_MAX;
	int8_t x643 = INT8_MIN;
	volatile uint64_t x644 = UINT64_MAX;
	static volatile uint64_t t47 = 3409094162832LLU;

    t47 = (x641%((x642/x643)*x644));

    if (t47 != 128LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint64_t x646 = 587LLU;
	uint8_t x647 = 34U;
	int32_t x648 = INT32_MIN;
	volatile uint64_t t48 = 15290718966505LLU;

    t48 = (x645%((x646/x647)*x648));

    if (t48 != 2147483647LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x649 = -290803952511LL;
	int16_t x650 = 2295;
	static int8_t x651 = INT8_MIN;
	int8_t x652 = INT8_MAX;
	volatile int64_t t49 = 4081228LL;

    t49 = (x649%((x650/x651)*x652));

    if (t49 != -1608LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x653 = -1;
	uint64_t x654 = UINT64_MAX;
	uint64_t t50 = 0LLU;

    t50 = (x653%((x654/x655)*x656));

    if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x661 = 266LLU;
	uint64_t x662 = UINT64_MAX;
	static int8_t x663 = -1;
	static int8_t x664 = -4;
	uint64_t t51 = 266552LLU;

    t51 = (x661%((x662/x663)*x664));

    if (t51 != 266LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x673 = -798521;
	uint32_t x674 = UINT32_MAX;
	volatile int16_t x675 = -1;
	static uint16_t x676 = UINT16_MAX;
	volatile uint32_t t52 = 75175740U;

    t52 = (x673%((x674/x675)*x676));

    if (t52 != 53435U) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile uint8_t x682 = 84U;
	int64_t x683 = -1LL;
	int16_t x684 = -1;
	int64_t t53 = 1LL;

    t53 = (x681%((x682/x683)*x684));

    if (t53 != 18LL) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int32_t x693 = 1;
	int32_t x694 = -21994;
	int16_t x695 = 8;
	uint64_t x696 = UINT64_MAX;
	static volatile uint64_t t54 = 269550LLU;

    t54 = (x693%((x694/x695)*x696));

    if (t54 != 1LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int32_t x706 = -175385914;
	uint64_t x707 = 12995246266LLU;

    t55 = (x705%((x706/x707)*x708));

    if (t55 != 194225624289289216LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x709 = INT16_MIN;
	static int64_t x710 = INT64_MAX;
	int32_t x711 = -437029785;
	int64_t x712 = -1LL;
	volatile int64_t t56 = -167994243LL;

    t56 = (x709%((x710/x711)*x712));

    if (t56 != -32768LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x729 = 644949092570171LLU;
	uint16_t x730 = 154U;
	uint8_t x731 = 94U;
	volatile uint64_t x732 = UINT64_MAX;
	uint64_t t57 = 109089144LLU;

    t57 = (x729%((x730/x731)*x732));

    if (t57 != 644949092570171LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint16_t x733 = 1703U;
	uint32_t x734 = 60330133U;
	volatile uint32_t x735 = 7104U;
	uint16_t x736 = UINT16_MAX;

    t58 = (x733%((x734/x735)*x736));

    if (t58 != 1703U) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x745 = UINT64_MAX;
	static int32_t x747 = 8;
	int8_t x748 = -25;
	volatile uint64_t t59 = 7847984047201160LLU;

    t59 = (x745%((x746/x747)*x748));

    if (t59 != 774LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x751 = INT16_MIN;
	int32_t x752 = INT32_MAX;

    t60 = (x749%((x750/x751)*x752));

    if (t60 != 20) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x761 = INT16_MAX;
	volatile int32_t x762 = -259323;
	volatile int16_t x764 = 5;
	static volatile uint64_t t61 = 28229788152LLU;

    t61 = (x761%((x762/x763)*x764));

    if (t61 != 32767LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x765 = INT8_MAX;
	static int16_t x766 = INT16_MAX;
	int16_t x767 = 291;

    t62 = (x765%((x766/x767)*x768));

    if (t62 != 15LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x793 = UINT16_MAX;
	int8_t x794 = INT8_MAX;
	uint8_t x795 = 60U;
	volatile uint32_t x796 = 1419782572U;
	volatile uint32_t t63 = 1841U;

    t63 = (x793%((x794/x795)*x796));

    if (t63 != 65535U) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x805 = 28;
	int32_t x806 = -769342;
	volatile int16_t x808 = INT16_MIN;
	static volatile int32_t t64 = 2;

    t64 = (x805%((x806/x807)*x808));

    if (t64 != 28) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x811 = INT16_MIN;
	volatile uint32_t x812 = 28U;
	uint32_t t65 = 0U;

    t65 = (x809%((x810/x811)*x812));

    if (t65 != 2147483648U) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x837 = -1;
	int16_t x839 = 5;
	int16_t x840 = -1267;

    t66 = (x837%((x838/x839)*x840));

    if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int32_t x845 = -1;
	static int8_t x847 = -1;
	static volatile int32_t t67 = 7525;

    t67 = (x845%((x846/x847)*x848));

    if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint64_t x849 = UINT64_MAX;
	static int16_t x850 = INT16_MAX;
	uint8_t x852 = UINT8_MAX;
	uint64_t t68 = 176799391049135853LLU;

    t68 = (x849%((x850/x851)*x852));

    if (t68 != 19125LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x857 = 2U;
	static uint16_t x858 = UINT16_MAX;
	volatile uint64_t x860 = 1639LLU;
	volatile uint64_t t69 = 42013LLU;

    t69 = (x857%((x858/x859)*x860));

    if (t69 != 2LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x861 = INT16_MIN;
	int8_t x862 = INT8_MAX;
	int64_t x864 = INT64_MIN;
	volatile uint64_t t70 = 1416836765LLU;

    t70 = (x861%((x862/x863)*x864));

    if (t70 != 9223372036854743040LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x865 = -1;
	static int32_t x866 = INT32_MIN;
	uint8_t x867 = 63U;
	int64_t x868 = -1LL;

    t71 = (x865%((x866/x867)*x868));

    if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x869 = INT64_MIN;
	static int16_t x870 = INT16_MIN;
	int8_t x871 = INT8_MAX;
	uint64_t x872 = UINT64_MAX;
	volatile uint64_t t72 = 992733156815022642LLU;

    t72 = (x869%((x870/x871)*x872));

    if (t72 != 128LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x874 = -1;
	volatile uint64_t x875 = 30093418843LLU;
	int16_t x876 = -1;
	uint64_t t73 = 26440152209511124LLU;

    t73 = (x873%((x874/x875)*x876));

    if (t73 != 32767LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x877 = 230U;
	volatile int16_t x879 = -1;
	int32_t t74 = 84;

    t74 = (x877%((x878/x879)*x880));

    if (t74 != 2) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x881 = 0;
	int8_t x882 = INT8_MIN;
	uint64_t x884 = UINT64_MAX;
	volatile uint64_t t75 = 207481372340LLU;

    t75 = (x881%((x882/x883)*x884));

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x889 = 2637U;
	static int8_t x890 = INT8_MIN;
	uint8_t x891 = 1U;
	int16_t x892 = INT16_MIN;

    t76 = (x889%((x890/x891)*x892));

    if (t76 != 2637U) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x905 = UINT32_MAX;
	uint64_t x906 = 229086858LLU;
	uint64_t x907 = 137648LLU;
	volatile uint8_t x908 = 21U;
	volatile uint64_t t77 = 130254469338LLU;

    t77 = (x905%((x906/x907)*x908));

    if (t77 != 255LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x921 = 103753681534218621LLU;
	volatile uint64_t x923 = 469LLU;
	volatile uint64_t t78 = 882748LLU;

    t78 = (x921%((x922/x923)*x924));

    if (t78 != 25089527701768509LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x930 = INT32_MIN;
	uint16_t x931 = UINT16_MAX;
	uint32_t x932 = 6U;
	uint32_t t79 = 1U;

    t79 = (x929%((x930/x931)*x932));

    if (t79 != 196605U) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint16_t x933 = UINT16_MAX;
	int64_t x934 = -39586389234497LL;
	volatile int8_t x935 = INT8_MIN;
	int64_t x936 = 6550457LL;
	int64_t t80 = -63965424478385LL;

    t80 = (x933%((x934/x935)*x936));

    if (t80 != 65535LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x949 = UINT16_MAX;
	int64_t x950 = INT64_MIN;
	static uint32_t x951 = 38308622U;
	int64_t t81 = -983220080LL;

    t81 = (x949%((x950/x951)*x952));

    if (t81 != 65535LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x953 = -1;
	int32_t x955 = 2318;
	static volatile int64_t x956 = -30537970LL;
	uint64_t t82 = 11193LLU;

    t82 = (x953%((x954/x955)*x956));

    if (t82 != 1374117325254233277LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x965 = 1120;
	uint8_t x967 = 1U;
	int8_t x968 = -6;
	volatile uint64_t t83 = 35755786LLU;

    t83 = (x965%((x966/x967)*x968));

    if (t83 != 1120LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile uint8_t x969 = UINT8_MAX;
	int8_t x970 = INT8_MIN;
	int64_t x971 = -1LL;
	int32_t x972 = -2726;
	int64_t t84 = -1LL;

    t84 = (x969%((x970/x971)*x972));

    if (t84 != 255LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x977 = INT32_MAX;
	volatile uint8_t x978 = UINT8_MAX;
	int16_t x979 = -30;
	int64_t x980 = 5559942LL;
	static volatile int64_t t85 = -10640726510385LL;

    t85 = (x977%((x978/x979)*x980));

    if (t85 != 12465919LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x997 = INT16_MIN;
	int16_t x998 = -56;
	static int8_t x999 = -2;
	uint64_t x1000 = 20922LLU;
	volatile uint64_t t86 = 1062008011LLU;

    t86 = (x997%((x998/x999)*x1000));

    if (t86 != 13448LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int16_t x1001 = -106;
	uint16_t x1003 = UINT16_MAX;
	static volatile int64_t t87 = 664LL;

    t87 = (x1001%((x1002/x1003)*x1004));

    if (t87 != -106LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x1013 = 114;
	int64_t x1014 = 3151961LL;
	static int32_t x1015 = -1;

    t88 = (x1013%((x1014/x1015)*x1016));

    if (t88 != 114LL) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint16_t x1017 = 32U;
	int32_t x1018 = INT32_MAX;
	uint64_t x1020 = UINT64_MAX;
	uint64_t t89 = 43699LLU;

    t89 = (x1017%((x1018/x1019)*x1020));

    if (t89 != 32LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x1029 = 1132298LLU;
	uint64_t x1030 = UINT64_MAX;
	int64_t x1031 = -43367051994LL;
	uint32_t x1032 = UINT32_MAX;
	volatile uint64_t t90 = 36461500049186376LLU;

    t90 = (x1029%((x1030/x1031)*x1032));

    if (t90 != 1132298LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x1033 = 720466U;
	uint16_t x1034 = 1454U;
	uint8_t x1035 = 69U;
	volatile int64_t t91 = 6481064888804456LL;

    t91 = (x1033%((x1034/x1035)*x1036));

    if (t91 != 720466LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile int32_t x1053 = INT32_MIN;
	int32_t x1054 = -64839;
	int64_t x1055 = 2882LL;
	volatile int16_t x1056 = -1;
	volatile int64_t t92 = 13820285811353LL;

    t92 = (x1053%((x1054/x1055)*x1056));

    if (t92 != -2LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x1057 = -1;
	uint64_t x1058 = 538501259383814LLU;
	volatile uint16_t x1059 = 1U;
	static uint8_t x1060 = 41U;
	static uint64_t t93 = 6LLU;

    t93 = (x1057%((x1058/x1059)*x1060));

    if (t93 != 11153458704679325LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x1061 = -1;
	int16_t x1062 = -14957;
	volatile uint8_t x1063 = UINT8_MAX;
	volatile uint8_t x1064 = 4U;
	volatile int32_t t94 = 146;

    t94 = (x1061%((x1062/x1063)*x1064));

    if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int32_t x1069 = -1;
	volatile int16_t x1070 = INT16_MAX;
	uint16_t x1071 = 15U;
	uint32_t x1072 = 963337027U;
	uint32_t t95 = 14519190U;

    t95 = (x1069%((x1070/x1071)*x1072));

    if (t95 != 605908071U) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x1090 = INT32_MIN;
	static uint64_t x1091 = 4716526LLU;
	volatile uint8_t x1092 = UINT8_MAX;
	volatile uint64_t t96 = 406481960774LLU;

    t96 = (x1089%((x1090/x1091)*x1092));

    if (t96 != 2147483647LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x1094 = 369;
	static int16_t x1095 = 20;
	volatile uint32_t x1096 = 492554U;

    t97 = (x1093%((x1094/x1095)*x1096));

    if (t97 != 1918424U) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x1117 = INT64_MAX;
	int64_t x1118 = INT64_MAX;
	volatile int16_t x1119 = INT16_MIN;
	static uint64_t x1120 = 92542791LLU;
	uint64_t t98 = 67132367849LLU;

    t98 = (x1117%((x1118/x1119)*x1120));

    if (t98 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x1129 = INT8_MIN;
	int64_t x1130 = 969414089478219784LL;
	uint8_t x1131 = 38U;
	uint64_t x1132 = 568923LLU;
	volatile uint64_t t99 = 335849LLU;

    t99 = (x1129%((x1130/x1131)*x1132));

    if (t99 != 3851480003700762287LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x1133 = INT8_MAX;
	static int32_t x1135 = 69;
	int64_t t100 = 218LL;

    t100 = (x1133%((x1134/x1135)*x1136));

    if (t100 != 127LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x1137 = INT64_MAX;
	int64_t x1138 = INT64_MAX;
	int32_t x1139 = INT32_MIN;
	static int64_t x1140 = -1LL;
	volatile int64_t t101 = -156665143315768497LL;

    t101 = (x1137%((x1138/x1139)*x1140));

    if (t101 != 2147483647LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x1150 = UINT32_MAX;
	static int64_t x1151 = -1LL;
	static int8_t x1152 = INT8_MIN;
	static int64_t t102 = -583734017539LL;

    t102 = (x1149%((x1150/x1151)*x1152));

    if (t102 != -1029610LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int64_t x1153 = INT64_MIN;
	static int16_t x1154 = INT16_MIN;
	int8_t x1155 = INT8_MIN;
	int64_t x1156 = -1LL;

    t103 = (x1153%((x1154/x1155)*x1156));

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x1165 = UINT32_MAX;
	static int8_t x1166 = -1;
	static int16_t x1168 = -1115;
	static uint64_t t104 = 460LLU;

    t104 = (x1165%((x1166/x1167)*x1168));

    if (t104 != 4294967295LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x1173 = -1;
	uint32_t x1175 = 985850015U;
	int64_t t105 = -1671950588043LL;

    t105 = (x1173%((x1174/x1175)*x1176));

    if (t105 != -1LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint64_t x1182 = 8538488214LLU;
	static volatile int8_t x1183 = INT8_MAX;
	uint64_t t106 = 25642LLU;

    t106 = (x1181%((x1182/x1183)*x1184));

    if (t106 != 493614368854882LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x1185 = 7598718LL;
	int32_t x1186 = 277;
	volatile int8_t x1187 = INT8_MIN;
	static uint64_t x1188 = UINT64_MAX;
	uint64_t t107 = 182705887667926874LLU;

    t107 = (x1185%((x1186/x1187)*x1188));

    if (t107 != 0LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x1193 = 1110213586055462LLU;
	int64_t x1194 = 80816392785907625LL;
	uint16_t x1195 = UINT16_MAX;
	static uint64_t t108 = 103922487049371LLU;

    t108 = (x1193%((x1194/x1195)*x1196));

    if (t108 != 1110213586055462LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x1197 = -1;
	int8_t x1199 = INT8_MAX;
	int32_t x1200 = -1017;

    t109 = (x1197%((x1198/x1199)*x1200));

    if (t109 != -1) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x1201 = -1;
	uint8_t x1202 = 8U;
	int8_t x1203 = -1;
	int16_t x1204 = INT16_MIN;
	volatile int32_t t110 = 15815;

    t110 = (x1201%((x1202/x1203)*x1204));

    if (t110 != -1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x1205 = UINT16_MAX;
	uint32_t x1206 = 1912988U;
	uint16_t x1207 = 15542U;
	int32_t x1208 = -1;
	volatile uint32_t t111 = 3704U;

    t111 = (x1205%((x1206/x1207)*x1208));

    if (t111 != 65535U) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint16_t x1226 = 18U;
	static volatile uint64_t t112 = 118691274LLU;

    t112 = (x1225%((x1226/x1227)*x1228));

    if (t112 != 323204272582151LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x1229 = INT64_MAX;
	uint32_t x1230 = 27084U;
	static int8_t x1231 = 60;
	volatile uint64_t x1232 = 2294410531998915LLU;

    t113 = (x1229%((x1230/x1231)*x1232));

    if (t113 != 945138837402690487LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x1234 = 15U;
	int64_t x1235 = -1LL;
	uint32_t x1236 = 67U;

    t114 = (x1233%((x1234/x1235)*x1236));

    if (t114 != 1004LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int64_t x1241 = -190935LL;
	static uint16_t x1242 = UINT16_MAX;
	volatile int64_t t115 = 26341223210095121LL;

    t115 = (x1241%((x1242/x1243)*x1244));

    if (t115 != -190935LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x1246 = 384310U;
	int64_t x1247 = -1LL;
	uint16_t x1248 = UINT16_MAX;
	int64_t t116 = -269926598778078494LL;

    t116 = (x1245%((x1246/x1247)*x1248));

    if (t116 != -2634154LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x1265 = INT8_MAX;
	volatile int8_t x1266 = INT8_MAX;
	uint8_t x1267 = 1U;
	int8_t x1268 = INT8_MIN;
	int32_t t117 = -110;

    t117 = (x1265%((x1266/x1267)*x1268));

    if (t117 != 127) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x1273 = 9U;
	static int64_t x1274 = -1LL;
	int16_t x1276 = INT16_MIN;
	static int64_t t118 = 25465LL;

    t118 = (x1273%((x1274/x1275)*x1276));

    if (t118 != 9LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile uint8_t x1277 = UINT8_MAX;
	int8_t x1278 = INT8_MIN;
	int8_t x1279 = INT8_MIN;
	int32_t t119 = 0;

    t119 = (x1277%((x1278/x1279)*x1280));

    if (t119 != 30) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint32_t x1281 = 576911U;
	volatile uint8_t x1283 = 1U;
	volatile uint8_t x1284 = 5U;
	uint32_t t120 = 327058U;

    t120 = (x1281%((x1282/x1283)*x1284));

    if (t120 != 576911U) { NG(); } else { ; }
	
}

void f121(void) {
    	static int16_t x1289 = 2831;
	uint32_t x1290 = UINT32_MAX;
	int16_t x1291 = INT16_MIN;
	volatile uint64_t x1292 = UINT64_MAX;
	uint64_t t121 = 268LLU;

    t121 = (x1289%((x1290/x1291)*x1292));

    if (t121 != 2831LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int8_t x1293 = INT8_MIN;
	volatile int32_t x1295 = -221045;

    t122 = (x1293%((x1294/x1295)*x1296));

    if (t122 != -128LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x1301 = INT8_MIN;
	int8_t x1302 = 14;
	volatile int8_t x1303 = -1;
	uint64_t x1304 = UINT64_MAX;
	volatile uint64_t t123 = 1480LLU;

    t123 = (x1301%((x1302/x1303)*x1304));

    if (t123 != 0LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x1306 = UINT32_MAX;
	volatile uint64_t x1307 = 6425LLU;
	uint64_t t124 = 122784037LLU;

    t124 = (x1305%((x1306/x1307)*x1308));

    if (t124 != 127LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	static int64_t x1309 = INT64_MIN;
	uint64_t x1310 = UINT64_MAX;
	volatile int32_t x1312 = -7219250;
	volatile uint64_t t125 = 46239LLU;

    t125 = (x1309%((x1310/x1311)*x1312));

    if (t125 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint16_t x1321 = UINT16_MAX;
	static uint32_t x1322 = UINT32_MAX;
	volatile int8_t x1323 = INT8_MIN;

    t126 = (x1321%((x1322/x1323)*x1324));

    if (t126 != 65535U) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x1349 = -1;
	static int64_t x1350 = INT64_MAX;
	int32_t x1351 = -1;
	int16_t x1352 = -1;
	int64_t t127 = -1526392872308923653LL;

    t127 = (x1349%((x1350/x1351)*x1352));

    if (t127 != -1LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x1365 = INT64_MAX;
	uint64_t x1366 = UINT64_MAX;
	uint16_t x1367 = 29580U;
	uint16_t x1368 = 230U;
	volatile uint64_t t128 = 6410720089557873LLU;

    t128 = (x1365%((x1366/x1367)*x1368));

    if (t128 != 43653552574701567LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x1370 = INT16_MIN;
	volatile int16_t x1371 = -1;
	volatile int64_t t129 = 207162778060141LL;

    t129 = (x1369%((x1370/x1371)*x1372));

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x1389 = INT8_MIN;
	static int16_t x1391 = -1;
	volatile uint64_t t130 = 9776079583LLU;

    t130 = (x1389%((x1390/x1391)*x1392));

    if (t130 != 59283534LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x1398 = UINT32_MAX;
	int16_t x1399 = INT16_MIN;
	uint32_t x1400 = UINT32_MAX;

    t131 = (x1397%((x1398/x1399)*x1400));

    if (t131 != 0U) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x1405 = -3395585;
	int16_t x1406 = INT16_MAX;
	volatile int16_t x1407 = -1;
	int64_t x1408 = -125468879LL;
	int64_t t132 = 202299492362LL;

    t132 = (x1405%((x1406/x1407)*x1408));

    if (t132 != -3395585LL) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x1426 = -1;
	volatile uint64_t x1427 = 7315216LLU;
	int8_t x1428 = INT8_MAX;
	uint64_t t133 = 5079477865475LLU;

    t133 = (x1425%((x1426/x1427)*x1428));

    if (t133 != 40347125564414LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x1429 = 13557;
	static int32_t x1430 = INT32_MAX;
	int16_t x1431 = INT16_MAX;
	static uint32_t x1432 = 241697U;

    t134 = (x1429%((x1430/x1431)*x1432));

    if (t134 != 13557U) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint32_t x1433 = 1803521925U;
	volatile int32_t x1434 = -1;
	uint32_t x1435 = UINT32_MAX;
	uint16_t x1436 = 2135U;
	volatile uint32_t t135 = 334291868U;

    t135 = (x1433%((x1434/x1435)*x1436));

    if (t135 != 2025U) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x1438 = -1700066;
	int64_t x1439 = -1LL;
	int16_t x1440 = INT16_MIN;
	int64_t t136 = -3111LL;

    t136 = (x1437%((x1438/x1439)*x1440));

    if (t136 != 2147483647LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x1461 = UINT64_MAX;
	int16_t x1462 = INT16_MAX;
	uint16_t x1463 = 165U;
	int16_t x1464 = INT16_MIN;
	uint64_t t137 = 9611LLU;

    t137 = (x1461%((x1462/x1463)*x1464));

    if (t137 != 6488063LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x1469 = 1LLU;
	int16_t x1471 = INT16_MIN;
	int8_t x1472 = INT8_MAX;
	uint64_t t138 = 1262139715955088921LLU;

    t138 = (x1469%((x1470/x1471)*x1472));

    if (t138 != 1LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x1497 = 1151U;
	int32_t x1498 = INT32_MIN;
	static int8_t x1499 = INT8_MIN;
	static int8_t x1500 = INT8_MIN;
	int32_t t139 = -5371186;

    t139 = (x1497%((x1498/x1499)*x1500));

    if (t139 != 1151) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile int16_t x1517 = INT16_MIN;
	int64_t x1518 = -29539710025199926LL;
	int64_t x1519 = 19897LL;

    t140 = (x1517%((x1518/x1519)*x1520));

    if (t140 != -32768LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x1529 = INT32_MIN;
	static uint8_t x1530 = UINT8_MAX;
	int8_t x1531 = -1;
	volatile int32_t t141 = -27;

    t141 = (x1529%((x1530/x1531)*x1532));

    if (t141 != -128) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x1533 = 197905;
	volatile int16_t x1534 = 623;
	uint8_t x1535 = UINT8_MAX;
	static int64_t x1536 = -77429177LL;

    t142 = (x1533%((x1534/x1535)*x1536));

    if (t142 != 197905LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x1545 = -8;
	static volatile int64_t x1546 = INT64_MIN;
	uint16_t x1547 = 562U;
	int8_t x1548 = 1;
	volatile int64_t t143 = 1LL;

    t143 = (x1545%((x1546/x1547)*x1548));

    if (t143 != -8LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x1557 = INT8_MAX;
	uint64_t x1558 = 2475539337622LLU;
	volatile uint16_t x1559 = 860U;
	static uint16_t x1560 = 2U;
	volatile uint64_t t144 = 259141729059272594LLU;

    t144 = (x1557%((x1558/x1559)*x1560));

    if (t144 != 127LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x1565 = INT16_MIN;
	static volatile int32_t x1566 = -1018290205;
	int32_t x1567 = 127002244;
	int8_t x1568 = 7;
	volatile int32_t t145 = 3;

    t145 = (x1565%((x1566/x1567)*x1568));

    if (t145 != -8) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x1569 = -645221051614829496LL;
	uint32_t x1570 = 54993U;
	uint32_t x1571 = 111U;
	int8_t x1572 = INT8_MIN;
	volatile int64_t t146 = 282713370375420LL;

    t146 = (x1569%((x1570/x1571)*x1572));

    if (t146 != -4096522168LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint32_t x1573 = 16297451U;
	static int8_t x1574 = -1;
	volatile int64_t x1575 = -1LL;
	uint16_t x1576 = UINT16_MAX;
	int64_t t147 = -508138770135624177LL;

    t147 = (x1573%((x1574/x1575)*x1576));

    if (t147 != 44771LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x1585 = UINT32_MAX;
	static int64_t x1586 = -342852653255842036LL;
	int8_t x1587 = INT8_MAX;
	int8_t x1588 = -1;
	int64_t t148 = -1429456LL;

    t148 = (x1585%((x1586/x1587)*x1588));

    if (t148 != 4294967295LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x1589 = INT64_MIN;
	static uint8_t x1591 = UINT8_MAX;
	int16_t x1592 = -1;
	int64_t t149 = 29117LL;

    t149 = (x1589%((x1590/x1591)*x1592));

    if (t149 != -15334686569LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint16_t x1593 = 3U;
	volatile int16_t x1594 = 529;
	int64_t x1595 = -1LL;
	static uint64_t t150 = 652033LLU;

    t150 = (x1593%((x1594/x1595)*x1596));

    if (t150 != 3LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x1598 = INT64_MIN;
	int16_t x1599 = INT16_MIN;
	uint64_t x1600 = UINT64_MAX;
	volatile uint64_t t151 = 1236343LLU;

    t151 = (x1597%((x1598/x1599)*x1600));

    if (t151 != 130719060212918LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x1609 = -1;
	uint64_t x1610 = UINT64_MAX;
	int32_t x1611 = 3810109;
	int64_t x1612 = INT64_MIN;
	volatile uint64_t t152 = 7585466109733202LLU;

    t152 = (x1609%((x1610/x1611)*x1612));

    if (t152 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x1613 = INT8_MIN;
	int8_t x1614 = INT8_MIN;
	static int8_t x1615 = INT8_MIN;
	uint16_t x1616 = 3U;
	int32_t t153 = -10;

    t153 = (x1613%((x1614/x1615)*x1616));

    if (t153 != -2) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int32_t x1634 = -6503;
	int8_t x1635 = INT8_MIN;
	int16_t x1636 = INT16_MIN;

    t154 = (x1633%((x1634/x1635)*x1636));

    if (t154 != 1638399U) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x1641 = UINT64_MAX;
	int32_t x1642 = INT32_MIN;
	uint16_t x1643 = UINT16_MAX;
	int16_t x1644 = INT16_MIN;
	volatile uint64_t t155 = 24719133760976665LLU;

    t155 = (x1641%((x1642/x1643)*x1644));

    if (t155 != 1073741823LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint32_t x1645 = UINT32_MAX;
	int64_t x1647 = 75LL;
	int8_t x1648 = INT8_MIN;
	volatile int64_t t156 = 57115234484LL;

    t156 = (x1645%((x1646/x1647)*x1648));

    if (t156 != 4095LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x1654 = INT8_MIN;
	uint32_t x1655 = 21362U;
	uint64_t x1656 = UINT64_MAX;
	volatile uint64_t t157 = 2LLU;

    t157 = (x1653%((x1654/x1655)*x1656));

    if (t157 != 255LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x1657 = -21699LL;
	uint64_t x1658 = 5720LLU;
	volatile uint8_t x1659 = UINT8_MAX;
	int16_t x1660 = INT16_MAX;
	uint64_t t158 = 1788334848739190LLU;

    t158 = (x1657%((x1658/x1659)*x1660));

    if (t158 != 699191LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x1669 = INT8_MAX;
	int8_t x1670 = -1;
	static volatile uint64_t x1671 = 2637406786LLU;
	int8_t x1672 = INT8_MIN;
	uint64_t t159 = 481888LLU;

    t159 = (x1669%((x1670/x1671)*x1672));

    if (t159 != 127LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x1673 = INT32_MIN;
	volatile int8_t x1675 = -1;
	int64_t x1676 = 852568790377LL;
	int64_t t160 = 1686074350136783LL;

    t160 = (x1673%((x1674/x1675)*x1676));

    if (t160 != -2147483648LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x1682 = -2101548LL;
	static uint8_t x1683 = 56U;
	int16_t x1684 = INT16_MAX;
	static volatile int64_t t161 = 12215126610LL;

    t161 = (x1681%((x1682/x1683)*x1684));

    if (t161 != 65535LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint64_t x1685 = 1711701016511986LLU;
	uint32_t x1686 = UINT32_MAX;
	int16_t x1687 = INT16_MIN;
	uint16_t x1688 = 582U;

    t162 = (x1685%((x1686/x1687)*x1688));

    if (t162 != 226LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint8_t x1693 = UINT8_MAX;
	uint64_t x1694 = UINT64_MAX;
	static uint64_t x1695 = 2696176LLU;
	volatile uint32_t x1696 = 1U;
	uint64_t t163 = 108489222337423133LLU;

    t163 = (x1693%((x1694/x1695)*x1696));

    if (t163 != 255LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static int32_t x1719 = INT32_MAX;
	uint32_t t164 = 16914U;

    t164 = (x1717%((x1718/x1719)*x1720));

    if (t164 != 1U) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x1729 = 0;
	uint64_t x1730 = UINT64_MAX;
	uint16_t x1731 = 2666U;
	uint64_t t165 = 569762774LLU;

    t165 = (x1729%((x1730/x1731)*x1732));

    if (t165 != 0LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint32_t x1745 = 79453368U;
	volatile int64_t x1746 = INT64_MAX;
	int64_t x1747 = -462LL;
	static int32_t x1748 = -1;
	int64_t t166 = 0LL;

    t166 = (x1745%((x1746/x1747)*x1748));

    if (t166 != 79453368LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile uint16_t x1757 = 341U;
	int64_t x1758 = INT64_MAX;
	int16_t x1759 = INT16_MIN;
	int16_t x1760 = 9;
	int64_t t167 = 233573694714339793LL;

    t167 = (x1757%((x1758/x1759)*x1760));

    if (t167 != 341LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x1785 = 51068191U;
	int16_t x1786 = INT16_MIN;
	static int64_t t168 = -16057054562228LL;

    t168 = (x1785%((x1786/x1787)*x1788));

    if (t168 != 16671LL) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x1801 = INT16_MIN;
	uint8_t x1802 = 1U;
	int16_t x1803 = -1;
	static volatile uint32_t t169 = 1614U;

    t169 = (x1801%((x1802/x1803)*x1804));

    if (t169 != 0U) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x1809 = -60;
	int8_t x1810 = INT8_MIN;
	int16_t x1811 = -1;
	int16_t x1812 = INT16_MIN;
	static int32_t t170 = 0;

    t170 = (x1809%((x1810/x1811)*x1812));

    if (t170 != -60) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int8_t x1813 = -29;
	int16_t x1814 = INT16_MIN;
	uint32_t x1815 = 819U;
	static uint32_t t171 = 467101494U;

    t171 = (x1813%((x1814/x1815)*x1816));

    if (t171 != 257721219U) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x1821 = 1439;
	static uint64_t x1822 = UINT64_MAX;
	int8_t x1824 = INT8_MIN;
	volatile uint64_t t172 = 7425352084LLU;

    t172 = (x1821%((x1822/x1823)*x1824));

    if (t172 != 1439LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int8_t x1829 = INT8_MIN;
	int16_t x1830 = -2;
	uint8_t x1831 = 2U;

    t173 = (x1829%((x1830/x1831)*x1832));

    if (t173 != -62) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x1833 = INT16_MAX;
	uint16_t x1834 = 17U;
	int8_t x1835 = -6;
	uint64_t x1836 = 5666437301277841LLU;
	volatile uint64_t t174 = 6LLU;

    t174 = (x1833%((x1834/x1835)*x1836));

    if (t174 != 32767LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x1849 = -1;
	static uint64_t x1852 = 2065779234038718LLU;
	uint64_t t175 = 172249110LLU;

    t175 = (x1849%((x1850/x1851)*x1852));

    if (t175 != 466201620636550143LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint16_t x1853 = 29U;
	static uint64_t x1854 = UINT64_MAX;
	int16_t x1855 = INT16_MAX;
	static int16_t x1856 = INT16_MIN;
	volatile uint64_t t176 = 1462426LLU;

    t176 = (x1853%((x1854/x1855)*x1856));

    if (t176 != 29LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x1865 = -1;
	static int8_t x1866 = INT8_MIN;
	int64_t x1867 = 2LL;
	uint8_t x1868 = UINT8_MAX;
	int64_t t177 = 6351LL;

    t177 = (x1865%((x1866/x1867)*x1868));

    if (t177 != -1LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x1873 = 12U;
	static int8_t x1874 = -1;
	volatile uint64_t x1875 = 1762732950378LLU;
	volatile int32_t x1876 = -16;
	volatile uint64_t t178 = 95472201817LLU;

    t178 = (x1873%((x1874/x1875)*x1876));

    if (t178 != 12LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int64_t x1878 = 44840651LL;
	static int8_t x1879 = 7;
	volatile int16_t x1880 = -1475;
	int64_t t179 = 3194201985317460920LL;

    t179 = (x1877%((x1878/x1879)*x1880));

    if (t179 != 97LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x1885 = INT16_MIN;
	uint64_t x1886 = UINT64_MAX;
	int64_t x1887 = INT64_MIN;
	uint64_t x1888 = 22220787412281094LLU;
	volatile uint64_t t180 = 8558263584694991LLU;

    t180 = (x1885%((x1886/x1887)*x1888));

    if (t180 != 3490521516210828LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int64_t x1889 = INT64_MAX;
	uint16_t x1891 = 619U;
	int8_t x1892 = INT8_MIN;
	int64_t t181 = -3903220426265013069LL;

    t181 = (x1889%((x1890/x1891)*x1892));

    if (t181 != 228599807LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x1894 = INT32_MIN;
	uint8_t x1895 = UINT8_MAX;

    t182 = (x1893%((x1894/x1895)*x1896));

    if (t182 != 65535) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x1905 = INT8_MIN;
	int16_t x1906 = -12;
	static uint64_t x1908 = UINT64_MAX;
	static uint64_t t183 = 79127LLU;

    t183 = (x1905%((x1906/x1907)*x1908));

    if (t183 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint64_t x1910 = UINT64_MAX;
	uint8_t x1911 = 8U;
	uint64_t t184 = 3239323336352863482LLU;

    t184 = (x1909%((x1910/x1911)*x1912));

    if (t184 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x1917 = INT64_MAX;
	int8_t x1918 = -1;
	uint8_t x1919 = 1U;
	static int8_t x1920 = INT8_MIN;
	int64_t t185 = 1818LL;

    t185 = (x1917%((x1918/x1919)*x1920));

    if (t185 != 127LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x1925 = 0U;
	static int8_t x1928 = 7;

    t186 = (x1925%((x1926/x1927)*x1928));

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int16_t x1934 = -1;
	int8_t x1936 = INT8_MIN;
	int64_t t187 = -1098LL;

    t187 = (x1933%((x1934/x1935)*x1936));

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x1941 = 0;
	int64_t x1942 = 17535601053280LL;
	int32_t x1943 = -1;
	int8_t x1944 = INT8_MIN;
	volatile int64_t t188 = -511550724107889LL;

    t188 = (x1941%((x1942/x1943)*x1944));

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x1945 = INT16_MIN;
	int16_t x1946 = 139;
	int8_t x1947 = 4;
	int32_t t189 = -813370;

    t189 = (x1945%((x1946/x1947)*x1948));

    if (t189 != -26) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint64_t x1969 = 47861499904534LLU;
	static int64_t x1970 = -1LL;
	uint64_t x1971 = 69423755681190LLU;
	int32_t x1972 = 380;

    t190 = (x1969%((x1970/x1971)*x1972));

    if (t190 != 40876694LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x1977 = 40110856LLU;
	int64_t x1978 = 1875791022471779LL;
	int8_t x1979 = 14;
	uint16_t x1980 = 4653U;

    t191 = (x1977%((x1978/x1979)*x1980));

    if (t191 != 40110856LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x1981 = 13U;
	static uint8_t x1982 = UINT8_MAX;
	volatile int8_t x1983 = INT8_MAX;
	int8_t x1984 = INT8_MIN;
	volatile uint32_t t192 = 921785364U;

    t192 = (x1981%((x1982/x1983)*x1984));

    if (t192 != 13U) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x1993 = INT8_MIN;
	int32_t x1994 = INT32_MIN;
	uint64_t x1995 = 669008713896LLU;
	uint32_t x1996 = 104472U;
	uint64_t t193 = 16811046LLU;

    t193 = (x1993%((x1994/x1995)*x1996));

    if (t193 != 480370994024LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint32_t x1997 = UINT32_MAX;
	volatile int16_t x1998 = -1;
	int32_t x1999 = -1;
	int64_t x2000 = INT64_MIN;

    t194 = (x1997%((x1998/x1999)*x2000));

    if (t194 != 4294967295LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x2013 = INT8_MIN;
	uint16_t x2015 = 14U;
	uint64_t x2016 = UINT64_MAX;
	uint64_t t195 = 215874LLU;

    t195 = (x2013%((x2014/x2015)*x2016));

    if (t195 != 5LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int16_t x2030 = -3476;
	int16_t x2031 = -1;

    t196 = (x2029%((x2030/x2031)*x2032));

    if (t196 != 65535) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x2045 = INT32_MIN;
	uint16_t x2046 = UINT16_MAX;
	uint16_t x2047 = UINT16_MAX;
	uint8_t x2048 = 13U;
	int32_t t197 = 1511;

    t197 = (x2045%((x2046/x2047)*x2048));

    if (t197 != -11) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x2050 = 14972050384926LLU;
	uint16_t x2052 = 92U;
	uint64_t t198 = 685LLU;

    t198 = (x2049%((x2050/x2051)*x2052));

    if (t198 != 773319762LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile int32_t x2057 = -1;
	uint16_t x2058 = 44U;
	int64_t x2059 = -1LL;
	uint32_t x2060 = UINT32_MAX;
	static int64_t t199 = 547522LL;

    t199 = (x2057%((x2058/x2059)*x2060));

    if (t199 != -1LL) { NG(); } else { ; }
	
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

