
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

static volatile int16_t x4 = -1;
uint32_t x7 = 92412377U;
int32_t x9 = -1;
int16_t x10 = -707;
static uint16_t x24 = 232U;
volatile int16_t x27 = -1;
int64_t x32 = -304088LL;
int8_t x39 = -1;
static int8_t x44 = -1;
volatile int64_t x49 = INT64_MIN;
uint64_t x60 = 1831720337444LLU;
int64_t x61 = 5102916320837LL;
uint64_t x64 = 645028499858LLU;
int16_t x66 = INT16_MAX;
static int8_t x71 = INT8_MIN;
static uint32_t x77 = 6262U;
static int16_t x86 = INT16_MIN;
volatile int8_t x95 = 14;
uint32_t t19 = 1008U;
static int8_t x101 = -23;
static uint64_t t21 = 364169571882303216LLU;
uint64_t x105 = 546919437LLU;
volatile uint64_t t22 = 1478757755LLU;
int16_t x115 = -1;
static int64_t t25 = -22950099LL;
volatile uint64_t x151 = 198320142943LLU;
static int64_t t30 = 1014651854940LL;
int32_t t31 = -15;
uint64_t t32 = 4118LLU;
int8_t x172 = INT8_MIN;
int16_t x173 = -48;
static int32_t x175 = -2267;
int32_t x176 = INT32_MAX;
int64_t x189 = INT64_MIN;
volatile uint16_t x192 = 1U;
uint16_t x196 = UINT16_MAX;
volatile int64_t t39 = 13LL;
int16_t x221 = INT16_MIN;
static int8_t x232 = -1;
static uint64_t x233 = 1885843364787572LLU;
volatile uint64_t x235 = 0LLU;
uint64_t t44 = 65510595471549LLU;
uint32_t x238 = 3851U;
uint8_t x266 = 16U;
int64_t x271 = -1LL;
volatile int32_t x291 = 21815;
volatile uint8_t x292 = 25U;
static volatile int32_t t52 = 1;
int32_t x296 = INT32_MIN;
int16_t x309 = -1;
uint64_t t55 = 3623450747497LLU;
volatile uint64_t t56 = 708179273LLU;
int32_t x318 = INT32_MAX;
uint32_t x326 = UINT32_MAX;
uint16_t x328 = 701U;
int16_t x343 = INT16_MIN;
static int32_t x347 = INT32_MAX;
static uint8_t x348 = UINT8_MAX;
int64_t t62 = 2135776418LL;
int16_t x350 = -1;
volatile int32_t x354 = INT32_MIN;
volatile int16_t x357 = INT16_MIN;
uint8_t x358 = 8U;
static uint64_t x363 = UINT64_MAX;
uint32_t x365 = UINT32_MAX;
uint32_t t67 = 2869U;
int64_t x392 = INT64_MIN;
uint64_t t74 = 491174976LLU;
int64_t t75 = 97LL;
int8_t x414 = -10;
volatile uint16_t x415 = 0U;
volatile int16_t x419 = INT16_MAX;
volatile int32_t t78 = -14;
static int32_t x421 = INT32_MIN;
volatile int16_t x432 = INT16_MIN;
int64_t x436 = INT64_MAX;
static int8_t x451 = -20;
int8_t x457 = 6;
static int16_t x467 = INT16_MAX;
volatile int8_t x471 = 26;
int8_t x472 = -43;
uint64_t t88 = 18630186546LLU;
int64_t x492 = -1LL;
uint8_t x496 = UINT8_MAX;
static int16_t x497 = -1;
volatile int16_t x506 = INT16_MAX;
static int16_t x508 = -1;
volatile uint64_t t99 = 28070093LLU;
volatile uint64_t x530 = 13278161041092LLU;
int64_t x533 = -1LL;
static volatile uint32_t x534 = 408U;
int8_t x535 = -1;
volatile int16_t x536 = -1;
volatile int64_t t101 = -140562879LL;
volatile int32_t t102 = 9959837;
uint32_t x548 = UINT32_MAX;
volatile int64_t t103 = 343501209424975LL;
uint64_t t104 = 78028927534682LLU;
static uint32_t x557 = 28U;
static volatile int16_t x565 = 1908;
static uint64_t x566 = 2LLU;
volatile int32_t x576 = -439310;
static int32_t t108 = -6411001;
uint64_t x585 = 17231116479LLU;
int16_t x589 = 8;
static int8_t x592 = INT8_MAX;
volatile int32_t x594 = INT32_MIN;
static volatile uint16_t x597 = 19U;
int8_t x604 = INT8_MIN;
int64_t x608 = INT64_MIN;
int32_t x622 = INT32_MAX;
static uint32_t x624 = 31604U;
uint32_t t116 = 37454518U;
int64_t x632 = INT64_MAX;
uint32_t x640 = 40804U;
volatile int16_t x649 = INT16_MAX;
uint64_t x665 = 363433LLU;
volatile uint64_t t124 = 3220956LLU;
static int64_t x676 = INT64_MIN;
static uint8_t x680 = 36U;
int16_t x687 = INT16_MAX;
static int8_t x688 = INT8_MIN;
volatile int64_t t129 = -53866829634LL;
volatile int16_t x705 = -556;
uint16_t x711 = UINT16_MAX;
int32_t x718 = -1;
int32_t x722 = 0;
int64_t x723 = -28859867LL;
int16_t x729 = INT16_MAX;
volatile uint64_t x731 = 6909380717547LLU;
int32_t x732 = 305053;
int64_t x736 = INT64_MIN;
int16_t x747 = INT16_MAX;
static volatile int64_t t140 = 1LL;
int16_t x756 = INT16_MAX;
uint32_t x766 = 58118362U;
int64_t x770 = INT64_MAX;
static volatile int8_t x771 = 0;
int8_t x773 = INT8_MAX;
static volatile int64_t t145 = 53515991782196LL;
volatile uint8_t x785 = 1U;
volatile int16_t x800 = INT16_MIN;
int16_t x803 = 6;
static volatile uint8_t x804 = 1U;
volatile uint8_t x806 = 45U;
volatile uint16_t x811 = 22U;
int64_t t153 = -17167379LL;
int16_t x845 = INT16_MAX;
uint32_t x846 = 122U;
volatile int32_t x847 = INT32_MIN;
int8_t x848 = -21;
int16_t x852 = -3796;
uint64_t t161 = 330209995874LLU;
volatile uint32_t t162 = 74849U;
static int64_t t163 = -22LL;
static volatile uint8_t x866 = UINT8_MAX;
int64_t x880 = INT64_MIN;
int16_t x882 = -7221;
int16_t x883 = -1;
uint64_t x887 = 231990684LLU;
int64_t x892 = INT64_MIN;
volatile int64_t t169 = 1884056240107219101LL;
uint8_t x898 = UINT8_MAX;
volatile uint64_t x909 = UINT64_MAX;
static int8_t x912 = -2;
uint8_t x926 = 0U;
static int8_t x929 = INT8_MIN;
uint64_t x930 = UINT64_MAX;
int8_t x939 = INT8_MIN;
int64_t x944 = -164LL;
static int16_t x945 = INT16_MAX;
volatile int32_t t180 = -116;
static uint16_t x954 = 1991U;
int32_t x958 = INT32_MAX;
volatile int16_t x963 = 291;
int16_t x969 = -6;
volatile uint32_t t187 = 11U;
static int16_t x982 = -1;
uint8_t x984 = UINT8_MAX;
uint32_t t188 = 639U;
int8_t x988 = 1;
static uint32_t x1001 = UINT32_MAX;
uint32_t x1006 = 16472U;
int32_t x1008 = INT32_MAX;
uint8_t x1010 = 101U;
int8_t x1021 = INT8_MAX;
int8_t x1022 = INT8_MAX;
int8_t x1027 = INT8_MIN;
uint32_t t197 = 254975U;
uint64_t x1033 = 43532550461649LLU;
volatile uint16_t x1036 = UINT16_MAX;


void f0(void) {
    	int16_t x1 = -11;
	int8_t x2 = INT8_MIN;
	int8_t x3 = INT8_MIN;
	int32_t t0 = 1;

    t0 = (x1*((x2+x3)%x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = 9281;
	volatile uint64_t x6 = UINT64_MAX;
	uint32_t x8 = 26718013U;
	static uint64_t t1 = 29893LLU;

    t1 = (x5*((x6+x7)%x8));

    if (t1 != 113769625697LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x11 = 5LL;
	int8_t x12 = 11;
	static volatile int64_t t2 = -1LL;

    t2 = (x9*((x10+x11)%x12));

    if (t2 != 9LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x21 = 8914;
	int8_t x22 = INT8_MIN;
	volatile int16_t x23 = INT16_MIN;
	volatile int32_t t3 = -92025;

    t3 = (x21*((x22+x23)%x24));

    if (t3 != -1640176) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x25 = -1017942778;
	int8_t x26 = INT8_MIN;
	volatile int64_t x28 = -299558LL;
	int64_t t4 = 25546119145660166LL;

    t4 = (x25*((x26+x27)%x28));

    if (t4 != 131314618362LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x29 = 378;
	int8_t x30 = 26;
	int16_t x31 = 11373;
	int64_t t5 = 571460LL;

    t5 = (x29*((x30+x31)%x32));

    if (t5 != 4308822LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int32_t x33 = INT32_MIN;
	int64_t x34 = INT64_MIN;
	int64_t x35 = 2123253950586LL;
	static int8_t x36 = -1;
	volatile int64_t t6 = -18LL;

    t6 = (x33*((x34+x35)%x36));

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x37 = 1U;
	int32_t x38 = -1;
	uint16_t x40 = 11U;
	uint32_t t7 = 1023407080U;

    t7 = (x37*((x38+x39)%x40));

    if (t7 != 4294967294U) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x41 = 5788922LLU;
	uint64_t x42 = UINT64_MAX;
	static uint64_t x43 = UINT64_MAX;
	static uint64_t t8 = 41845333LLU;

    t8 = (x41*((x42+x43)%x44));

    if (t8 != 18446744073697973772LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x45 = 1;
	int16_t x46 = -1;
	int64_t x47 = INT64_MAX;
	int16_t x48 = INT16_MIN;
	int64_t t9 = -2LL;

    t9 = (x45*((x46+x47)%x48));

    if (t9 != 32766LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x50 = -1;
	uint16_t x51 = 5112U;
	volatile uint64_t x52 = 338LLU;
	volatile uint64_t t10 = 496934560470416LLU;

    t10 = (x49*((x50+x51)%x52));

    if (t10 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x57 = 99793720552LLU;
	int32_t x58 = INT32_MIN;
	volatile uint64_t x59 = 7204933652806494115LLU;
	volatile uint64_t t11 = 3LLU;

    t11 = (x57*((x58+x59)%x60));

    if (t11 != 17611937479404310968LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x62 = INT8_MIN;
	volatile int8_t x63 = INT8_MIN;
	volatile uint64_t t12 = 433751032538055687LLU;

    t12 = (x61*((x62+x63)%x64));

    if (t12 != 2337175053350230898LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x65 = -7724500860LL;
	int16_t x67 = INT16_MIN;
	uint64_t x68 = UINT64_MAX;
	uint64_t t13 = 97LLU;

    t13 = (x65*((x66+x67)%x68));

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x69 = INT32_MAX;
	int32_t x70 = -7;
	int64_t x72 = -78920837693LL;
	volatile int64_t t14 = -6LL;

    t14 = (x69*((x70+x71)%x72));

    if (t14 != -289910292345LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x78 = 0LLU;
	int64_t x79 = -1LL;
	volatile int8_t x80 = INT8_MAX;
	uint64_t t15 = 4423811586067LLU;

    t15 = (x77*((x78+x79)%x80));

    if (t15 != 6262LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x81 = INT8_MAX;
	static uint64_t x82 = 1482199401551707LLU;
	int32_t x83 = -1;
	volatile int64_t x84 = INT64_MIN;
	uint64_t t16 = 16733877466LLU;

    t16 = (x81*((x82+x83)%x84));

    if (t16 != 188239323997066662LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x85 = -15960;
	static int32_t x87 = 42784;
	uint16_t x88 = UINT16_MAX;
	int32_t t17 = 514912;

    t17 = (x85*((x86+x87)%x88));

    if (t17 != -159855360) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int32_t x89 = -8525918;
	uint16_t x90 = 3369U;
	uint32_t x91 = 613579203U;
	static volatile int64_t x92 = INT64_MAX;
	static volatile int64_t t18 = 4LL;

    t18 = (x89*((x90+x91)%x92));

    if (t18 != -5231354695101096LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x93 = 2663U;
	int32_t x94 = -1;
	int8_t x96 = -41;

    t19 = (x93*((x94+x95)%x96));

    if (t19 != 34619U) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x97 = INT32_MAX;
	int64_t x98 = -1LL;
	int16_t x99 = 13;
	int8_t x100 = 18;
	int64_t t20 = -216554348526818303LL;

    t20 = (x97*((x98+x99)%x100));

    if (t20 != 25769803764LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x102 = INT16_MIN;
	int16_t x103 = -1;
	uint64_t x104 = 27318658761035LLU;

    t21 = (x101*((x102+x103)%x104));

    if (t21 != 18446491627274417750LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x106 = INT8_MIN;
	int8_t x107 = INT8_MIN;
	int8_t x108 = INT8_MAX;

    t22 = (x105*((x106+x107)%x108));

    if (t22 != 18446744072615712742LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x109 = 0;
	int32_t x110 = -4542;
	volatile uint16_t x111 = 26U;
	volatile uint64_t x112 = 4457817012354685LLU;
	uint64_t t23 = 7075788LLU;

    t23 = (x109*((x110+x111)%x112));

    if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x113 = 9955423LLU;
	int16_t x114 = -1;
	static uint64_t x116 = 576652425LLU;
	uint64_t t24 = 2799081925LLU;

    t24 = (x113*((x114+x115)%x116));

    if (t24 != 3208721575540622LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x117 = -1;
	int64_t x118 = 0LL;
	int8_t x119 = -54;
	int64_t x120 = INT64_MIN;

    t25 = (x117*((x118+x119)%x120));

    if (t25 != 54LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int16_t x125 = 122;
	int16_t x126 = INT16_MIN;
	volatile uint32_t x127 = UINT32_MAX;
	volatile int64_t x128 = INT64_MAX;
	int64_t t26 = -236872LL;

    t26 = (x125*((x126+x127)%x128));

    if (t26 != 523982012294LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x133 = 971U;
	static uint16_t x134 = UINT16_MAX;
	int32_t x135 = 61812;
	uint64_t x136 = UINT64_MAX;
	uint64_t t27 = 7186738317396LLU;

    t27 = (x133*((x134+x135)%x136));

    if (t27 != 123653937LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x145 = UINT8_MAX;
	static int32_t x146 = -1279;
	uint16_t x147 = 0U;
	uint32_t x148 = 255301853U;
	volatile uint32_t t28 = 25193363U;

    t28 = (x145*((x146+x147)%x148));

    if (t28 != 2045166543U) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x149 = 123U;
	int16_t x150 = 11304;
	uint8_t x152 = 4U;
	uint64_t t29 = 1201259161LLU;

    t29 = (x149*((x150+x151)%x152));

    if (t29 != 369LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x153 = INT32_MIN;
	static uint16_t x154 = 0U;
	uint16_t x155 = UINT16_MAX;
	int64_t x156 = 1116973750955949324LL;

    t30 = (x153*((x154+x155)%x156));

    if (t30 != -140735340871680LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x161 = 1U;
	int8_t x162 = -2;
	static int16_t x163 = 19;
	uint16_t x164 = 17U;

    t31 = (x161*((x162+x163)%x164));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x165 = -474405425;
	uint64_t x166 = 14031188946467LLU;
	int8_t x167 = -1;
	int32_t x168 = INT32_MIN;

    t32 = (x165*((x166+x167)%x168));

    if (t32 != 2802455205643155326LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x169 = INT64_MIN;
	static int64_t x170 = 1LL;
	int32_t x171 = -1;
	int64_t t33 = 27225298496LL;

    t33 = (x169*((x170+x171)%x172));

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x174 = -1;
	int32_t t34 = -1425120;

    t34 = (x173*((x174+x175)%x176));

    if (t34 != 108864) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint64_t x190 = 7403203612946252704LLU;
	static int16_t x191 = -12217;
	uint64_t t35 = 16616245699863LLU;

    t35 = (x189*((x190+x191)%x192));

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint8_t x193 = UINT8_MAX;
	int64_t x194 = -406695LL;
	int32_t x195 = -7;
	int64_t t36 = -15342397215356551LL;

    t36 = (x193*((x194+x195)%x196));

    if (t36 != -3440460LL) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x197 = INT8_MIN;
	uint32_t x198 = 5U;
	int32_t x199 = INT32_MIN;
	uint64_t x200 = 1597LLU;
	volatile uint64_t t37 = 7502LLU;

    t37 = (x197*((x198+x199)%x200));

    if (t37 != 18446744073709430400LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x201 = INT16_MAX;
	int32_t x202 = 80;
	uint32_t x203 = 250U;
	static volatile uint64_t x204 = 916052651LLU;
	static volatile uint64_t t38 = 534LLU;

    t38 = (x201*((x202+x203)%x204));

    if (t38 != 10813110LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x205 = 428LL;
	volatile uint16_t x206 = 3U;
	uint32_t x207 = 1U;
	uint32_t x208 = 7278643U;

    t39 = (x205*((x206+x207)%x208));

    if (t39 != 1712LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x217 = INT8_MIN;
	volatile uint64_t x218 = UINT64_MAX;
	volatile int32_t x219 = INT32_MIN;
	static int32_t x220 = -19840;
	volatile uint64_t t40 = 16499613424113LLU;

    t40 = (x217*((x218+x219)%x220));

    if (t40 != 274877907072LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int16_t x222 = -1;
	int16_t x223 = -2;
	int8_t x224 = INT8_MIN;
	volatile int32_t t41 = 0;

    t41 = (x221*((x222+x223)%x224));

    if (t41 != 98304) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x225 = -1LL;
	int64_t x226 = INT64_MIN;
	static volatile uint8_t x227 = 0U;
	int16_t x228 = -1;
	int64_t t42 = -4414748LL;

    t42 = (x225*((x226+x227)%x228));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x229 = 31;
	static uint16_t x230 = 0U;
	int32_t x231 = INT32_MIN;
	int32_t t43 = 194733978;

    t43 = (x229*((x230+x231)%x232));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint32_t x234 = UINT32_MAX;
	int32_t x236 = INT32_MIN;

    t44 = (x233*((x234+x235)%x236));

    if (t44 != 2293882839019801228LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x237 = -1;
	int32_t x239 = INT32_MAX;
	int64_t x240 = INT64_MAX;
	volatile int64_t t45 = -8880LL;

    t45 = (x237*((x238+x239)%x240));

    if (t45 != -2147487498LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x241 = 15576;
	uint16_t x242 = 8U;
	static int64_t x243 = INT64_MIN;
	volatile int32_t x244 = INT32_MAX;
	int64_t t46 = 15720475292676LL;

    t46 = (x241*((x242+x243)%x244));

    if (t46 != -33449205192216LL) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x245 = 215;
	static uint32_t x246 = 1999178120U;
	static int32_t x247 = INT32_MIN;
	int8_t x248 = INT8_MIN;
	uint32_t t47 = 7U;

    t47 = (x245*((x246+x247)%x248));

    if (t47 != 2474049848U) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x257 = INT8_MAX;
	volatile int16_t x258 = INT16_MAX;
	volatile int16_t x259 = 0;
	uint64_t x260 = 21286LLU;
	uint64_t t48 = 1564LLU;

    t48 = (x257*((x258+x259)%x260));

    if (t48 != 1458087LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x265 = INT8_MAX;
	volatile int32_t x267 = 26;
	volatile uint16_t x268 = UINT16_MAX;
	int32_t t49 = -6;

    t49 = (x265*((x266+x267)%x268));

    if (t49 != 5334) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x269 = INT16_MIN;
	int32_t x270 = -10597571;
	volatile uint8_t x272 = UINT8_MAX;
	int64_t t50 = -24860LL;

    t50 = (x269*((x270+x271)%x272));

    if (t50 != 884736LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x277 = -1;
	int16_t x278 = 4740;
	static uint16_t x279 = UINT16_MAX;
	uint64_t x280 = UINT64_MAX;
	static uint64_t t51 = 1470LLU;

    t51 = (x277*((x278+x279)%x280));

    if (t51 != 18446744073709481341LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x289 = UINT16_MAX;
	int16_t x290 = INT16_MIN;

    t52 = (x289*((x290+x291)%x292));

    if (t52 != -196605) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x293 = -1;
	int32_t x294 = INT32_MAX;
	int16_t x295 = INT16_MIN;
	int32_t t53 = 242;

    t53 = (x293*((x294+x295)%x296));

    if (t53 != -2147450879) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x305 = -33944;
	uint16_t x306 = 989U;
	int16_t x307 = -1;
	int16_t x308 = INT16_MIN;
	int32_t t54 = 727599;

    t54 = (x305*((x306+x307)%x308));

    if (t54 != -33536672) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x310 = 20LLU;
	volatile uint64_t x311 = 2027998743670005LLU;
	int16_t x312 = INT16_MAX;

    t55 = (x309*((x310+x311)%x312));

    if (t55 != 18446744073709551483LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x313 = UINT8_MAX;
	volatile uint64_t x314 = 146811955637LLU;
	int64_t x315 = INT64_MIN;
	static uint8_t x316 = 25U;

    t56 = (x313*((x314+x315)%x316));

    if (t56 != 5100LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x317 = INT8_MIN;
	uint32_t x319 = 7032U;
	uint32_t x320 = UINT32_MAX;
	uint32_t t57 = 1U;

    t57 = (x317*((x318+x319)%x320));

    if (t57 != 4294067328U) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x325 = INT32_MIN;
	int64_t x327 = INT64_MIN;
	int64_t t58 = -61LL;

    t58 = (x325*((x326+x327)%x328));

    if (t58 != 1161788653568LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x329 = 11354U;
	volatile int8_t x330 = INT8_MIN;
	volatile uint64_t x331 = 547202721492398627LLU;
	int32_t x332 = -7;
	volatile uint64_t t59 = 1925907LLU;

    t59 = (x329*((x330+x331)%x332));

    if (t59 != 14833691058283214670LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x337 = INT16_MIN;
	int16_t x338 = -1;
	uint64_t x339 = 19072954420LLU;
	static int8_t x340 = -1;
	volatile uint64_t t60 = 1903702LLU;

    t60 = (x337*((x338+x339)%x340));

    if (t60 != 18446119091139149824LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x341 = -206718;
	int64_t x342 = -38423817240654LL;
	volatile int64_t x344 = INT64_MIN;
	int64_t t61 = 16476103048550493LL;

    t61 = (x341*((x342+x343)%x344));

    if (t61 != 7942894659127248996LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x345 = -73;
	int64_t x346 = -1LL;

    t62 = (x345*((x346+x347)%x348));

    if (t62 != -9198LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint64_t x349 = 804822359426990LLU;
	static int8_t x351 = INT8_MIN;
	uint16_t x352 = 5U;
	uint64_t t63 = 430LLU;

    t63 = (x349*((x350+x351)%x352));

    if (t63 != 18443524784271843656LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x353 = UINT8_MAX;
	uint32_t x355 = 5U;
	int64_t x356 = 5042473778LL;
	int64_t t64 = -244420LL;

    t64 = (x353*((x354+x355)%x356));

    if (t64 != 547608331515LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x359 = 1991417U;
	uint32_t x360 = 635786U;
	uint32_t t65 = 177U;

    t65 = (x357*((x358+x359)%x360));

    if (t65 != 1540259840U) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x361 = 46U;
	uint64_t x362 = 53211LLU;
	int64_t x364 = INT64_MIN;
	static volatile uint64_t t66 = 1807LLU;

    t66 = (x361*((x362+x363)%x364));

    if (t66 != 2447660LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x366 = INT16_MAX;
	static volatile int8_t x367 = INT8_MIN;
	volatile uint16_t x368 = 1804U;

    t67 = (x365*((x366+x367)%x368));

    if (t67 != 4294967129U) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x369 = 3;
	volatile int8_t x370 = INT8_MAX;
	int16_t x371 = INT16_MIN;
	static int8_t x372 = INT8_MAX;
	int32_t t68 = 56854;

    t68 = (x369*((x370+x371)%x372));

    if (t68 != -6) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint16_t x373 = 3983U;
	uint8_t x374 = 15U;
	uint16_t x375 = UINT16_MAX;
	int32_t x376 = INT32_MIN;
	int32_t t69 = 799;

    t69 = (x373*((x374+x375)%x376));

    if (t69 != 261085650) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x377 = -1LL;
	static volatile int8_t x378 = -1;
	volatile uint32_t x379 = UINT32_MAX;
	uint64_t x380 = 249467534724847048LLU;
	volatile uint64_t t70 = 1033466077LLU;

    t70 = (x377*((x378+x379)%x380));

    if (t70 != 18446744069414584322LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x381 = -61514146;
	volatile uint8_t x382 = 0U;
	int64_t x383 = -9316715181719748LL;
	int32_t x384 = -1;
	volatile int64_t t71 = 31823LL;

    t71 = (x381*((x382+x383)%x384));

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x385 = INT32_MIN;
	int16_t x386 = INT16_MAX;
	static int8_t x387 = INT8_MIN;
	static int64_t x388 = INT64_MIN;
	int64_t t72 = 50755433407LL;

    t72 = (x385*((x386+x387)%x388));

    if (t72 != -70091718787072LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x389 = -1;
	static int8_t x390 = INT8_MIN;
	static volatile int32_t x391 = -5625;
	volatile int64_t t73 = -182LL;

    t73 = (x389*((x390+x391)%x392));

    if (t73 != 5753LL) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint64_t x397 = UINT64_MAX;
	static int32_t x398 = INT32_MAX;
	int64_t x399 = -29387420498LL;
	static int8_t x400 = INT8_MAX;

    t74 = (x397*((x398+x399)%x400));

    if (t74 != 94LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x401 = 2488U;
	int64_t x402 = INT64_MAX;
	volatile int64_t x403 = -1LL;
	int32_t x404 = INT32_MIN;

    t75 = (x401*((x402+x403)%x404));

    if (t75 != 5342939311248LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x405 = -1LL;
	int8_t x406 = 0;
	int64_t x407 = -1188337454561723267LL;
	int64_t x408 = -22522LL;
	int64_t t76 = 450259733746LL;

    t76 = (x405*((x406+x407)%x408));

    if (t76 != 1897LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x413 = UINT8_MAX;
	int32_t x416 = INT32_MAX;
	int32_t t77 = 4132619;

    t77 = (x413*((x414+x415)%x416));

    if (t77 != -2550) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x417 = 18;
	volatile int16_t x418 = 31;
	int32_t x420 = INT32_MIN;

    t78 = (x417*((x418+x419)%x420));

    if (t78 != 590364) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x422 = INT8_MAX;
	static uint32_t x423 = 199836314U;
	uint64_t x424 = UINT64_MAX;
	uint64_t t79 = 5413812504846849231LLU;

    t79 = (x421*((x422+x423)%x424));

    if (t79 != 18017598584387534848LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x425 = INT64_MIN;
	int8_t x426 = -1;
	uint64_t x427 = UINT64_MAX;
	static uint8_t x428 = UINT8_MAX;
	volatile uint64_t t80 = 120673891127951379LLU;

    t80 = (x425*((x426+x427)%x428));

    if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile uint16_t x429 = 3U;
	static int32_t x430 = -1;
	int64_t x431 = INT64_MAX;
	int64_t t81 = -53022025151373LL;

    t81 = (x429*((x430+x431)%x432));

    if (t81 != 98298LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x433 = 1;
	volatile int64_t x434 = -2267209934661LL;
	static int32_t x435 = INT32_MIN;
	int64_t t82 = 11287LL;

    t82 = (x433*((x434+x435)%x436));

    if (t82 != -2269357418309LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x441 = 24098U;
	static int8_t x442 = INT8_MAX;
	int64_t x443 = INT64_MIN;
	uint16_t x444 = 27U;
	volatile int64_t t83 = -180936025LL;

    t83 = (x441*((x442+x443)%x444));

    if (t83 != -168686LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x449 = 81;
	uint16_t x450 = UINT16_MAX;
	int16_t x452 = INT16_MIN;
	volatile int32_t t84 = 251;

    t84 = (x449*((x450+x451)%x452));

    if (t84 != 2652507) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x458 = 1789320U;
	int16_t x459 = INT16_MIN;
	static int16_t x460 = 805;
	volatile uint32_t t85 = 1041967468U;

    t85 = (x457*((x458+x459)%x460));

    if (t85 != 252U) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x461 = 3;
	int16_t x462 = -1;
	uint8_t x463 = 1U;
	static int8_t x464 = -33;
	static int32_t t86 = -1;

    t86 = (x461*((x462+x463)%x464));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint64_t x465 = 16511063LLU;
	uint64_t x466 = 24090468216292846LLU;
	static volatile int64_t x468 = -1LL;
	volatile uint64_t t87 = 7436039626LLU;

    t87 = (x465*((x466+x467)%x468));

    if (t87 != 10542701924472812427LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x469 = UINT64_MAX;
	static volatile int16_t x470 = INT16_MIN;

    t88 = (x469*((x470+x471)%x472));

    if (t88 != 19LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x477 = -1;
	uint8_t x478 = UINT8_MAX;
	static int32_t x479 = INT32_MIN;
	int32_t x480 = -1;
	int32_t t89 = 322913;

    t89 = (x477*((x478+x479)%x480));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x481 = 24U;
	int32_t x482 = INT32_MAX;
	static int64_t x483 = INT64_MIN;
	int16_t x484 = INT16_MIN;
	int64_t t90 = -188526634066LL;

    t90 = (x481*((x482+x483)%x484));

    if (t90 != -24LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x485 = -1LL;
	uint16_t x486 = UINT16_MAX;
	uint64_t x487 = 529355835LLU;
	uint32_t x488 = UINT32_MAX;
	volatile uint64_t t91 = 680195259LLU;

    t91 = (x485*((x486+x487)%x488));

    if (t91 != 18446744073180130246LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x489 = 1930650U;
	uint64_t x490 = 380LLU;
	int64_t x491 = -3842LL;
	volatile uint64_t t92 = 64188901653446LLU;

    t92 = (x489*((x490+x491)%x492));

    if (t92 != 18446744067025641316LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint16_t x493 = UINT16_MAX;
	int16_t x494 = INT16_MIN;
	uint32_t x495 = 841U;
	uint32_t t93 = 14432187U;

    t93 = (x493*((x494+x495)%x496));

    if (t93 != 13369140U) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint64_t x498 = 0LLU;
	int64_t x499 = 17351271454LL;
	volatile int8_t x500 = -14;
	static uint64_t t94 = 218817297223172LLU;

    t94 = (x497*((x498+x499)%x500));

    if (t94 != 18446744056358280162LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x501 = -1;
	uint16_t x502 = 0U;
	uint32_t x503 = 118U;
	volatile int64_t x504 = INT64_MIN;
	volatile int64_t t95 = 286599951479627845LL;

    t95 = (x501*((x502+x503)%x504));

    if (t95 != -118LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x505 = -1;
	static int8_t x507 = INT8_MIN;
	int32_t t96 = 7;

    t96 = (x505*((x506+x507)%x508));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x517 = -1;
	int16_t x518 = 10;
	volatile uint64_t x519 = 8LLU;
	uint32_t x520 = UINT32_MAX;
	volatile uint64_t t97 = 1754LLU;

    t97 = (x517*((x518+x519)%x520));

    if (t97 != 18446744073709551598LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x521 = 473006474758551857LLU;
	volatile uint8_t x522 = UINT8_MAX;
	int16_t x523 = INT16_MIN;
	volatile int8_t x524 = -1;
	volatile uint64_t t98 = 604LLU;

    t98 = (x521*((x522+x523)%x524));

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x525 = 13U;
	static uint32_t x526 = 2U;
	volatile int16_t x527 = INT16_MIN;
	static uint64_t x528 = 75LLU;

    t99 = (x525*((x526+x527)%x528));

    if (t99 != 715LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint64_t x529 = 1535747709944131736LLU;
	volatile uint8_t x531 = 1U;
	uint64_t x532 = 4027394479804274LLU;
	static volatile uint64_t t100 = 76141669837324LLU;

    t100 = (x529*((x530+x531)%x532));

    if (t100 != 3551714543987930360LLU) { NG(); } else { ; }
	
}

void f101(void) {
    

    t101 = (x533*((x534+x535)%x536));

    if (t101 != -407LL) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x541 = -1;
	int16_t x542 = INT16_MIN;
	volatile int16_t x543 = 0;
	int16_t x544 = INT16_MIN;

    t102 = (x541*((x542+x543)%x544));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x545 = -1LL;
	int32_t x546 = 739761;
	volatile int64_t x547 = 1359702842860878LL;

    t103 = (x545*((x546+x547)%x548));

    if (t103 != -2097349539LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x549 = UINT8_MAX;
	volatile uint8_t x550 = UINT8_MAX;
	int8_t x551 = -36;
	uint64_t x552 = 206648744LLU;

    t104 = (x549*((x550+x551)%x552));

    if (t104 != 55845LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x558 = INT16_MIN;
	uint16_t x559 = UINT16_MAX;
	volatile int8_t x560 = INT8_MIN;
	static uint32_t t105 = 149285291U;

    t105 = (x557*((x558+x559)%x560));

    if (t105 != 3556U) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x567 = 17U;
	int32_t x568 = INT32_MIN;
	uint64_t t106 = 389867LLU;

    t106 = (x565*((x566+x567)%x568));

    if (t106 != 36252LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint32_t x573 = UINT32_MAX;
	uint8_t x574 = 5U;
	int32_t x575 = -1509683;
	volatile uint32_t t107 = 496263U;

    t107 = (x573*((x574+x575)%x576));

    if (t107 != 191748U) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x577 = INT8_MAX;
	int8_t x578 = -1;
	static int8_t x579 = 6;
	volatile uint16_t x580 = 405U;

    t108 = (x577*((x578+x579)%x580));

    if (t108 != 635) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x581 = 6624832939986747052LLU;
	uint64_t x582 = UINT64_MAX;
	int32_t x583 = INT32_MIN;
	static volatile int32_t x584 = INT32_MIN;
	volatile uint64_t t109 = 4680545425774233964LLU;

    t109 = (x581*((x582+x583)%x584));

    if (t109 != 16281671763615056212LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x586 = INT16_MAX;
	uint16_t x587 = 10318U;
	static int64_t x588 = -1LL;
	volatile uint64_t t110 = 7145567531644365LLU;

    t110 = (x585*((x586+x587)%x588));

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint32_t x590 = UINT32_MAX;
	int64_t x591 = INT64_MIN;
	volatile int64_t t111 = -56052107862LL;

    t111 = (x589*((x590+x591)%x592));

    if (t111 != -904LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x593 = INT32_MIN;
	uint32_t x595 = 448U;
	int8_t x596 = INT8_MIN;
	static uint32_t t112 = 341U;

    t112 = (x593*((x594+x595)%x596));

    if (t112 != 0U) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint16_t x598 = 10U;
	uint64_t x599 = 62777519LLU;
	volatile int32_t x600 = INT32_MIN;
	volatile uint64_t t113 = 855537239LLU;

    t113 = (x597*((x598+x599)%x600));

    if (t113 != 1192773051LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x601 = 183LLU;
	int32_t x602 = -230855;
	static int64_t x603 = -1LL;
	uint64_t t114 = 988LLU;

    t114 = (x601*((x602+x603)%x604));

    if (t114 != 18446744073709538440LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x605 = 2730448LL;
	int64_t x606 = -1LL;
	int8_t x607 = INT8_MIN;
	static int64_t t115 = -316372LL;

    t115 = (x605*((x606+x607)%x608));

    if (t115 != -352227792LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x621 = 429;
	int16_t x623 = -1;

    t116 = (x621*((x622+x623)%x624));

    if (t116 != 10060050U) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x629 = UINT64_MAX;
	int64_t x630 = INT64_MIN;
	uint16_t x631 = 3U;
	volatile uint64_t t117 = 556647264299616LLU;

    t117 = (x629*((x630+x631)%x632));

    if (t117 != 9223372036854775805LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x633 = 3778U;
	int64_t x634 = INT64_MIN;
	volatile int32_t x635 = 3724;
	uint16_t x636 = 670U;
	static int64_t t118 = -1125LL;

    t118 = (x633*((x634+x635)%x636));

    if (t118 != -770712LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x637 = 394577279338267LLU;
	int8_t x638 = 0;
	int64_t x639 = -21990470LL;
	static volatile uint64_t t119 = 227060048295LLU;

    t119 = (x637*((x638+x639)%x640));

    if (t119 != 3485162795761143510LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint8_t x641 = 5U;
	int16_t x642 = INT16_MAX;
	uint64_t x643 = UINT64_MAX;
	static uint32_t x644 = 3263U;
	static volatile uint64_t t120 = 438LLU;

    t120 = (x641*((x642+x643)%x644));

    if (t120 != 680LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x650 = 384648091193232LL;
	uint8_t x651 = 21U;
	volatile int32_t x652 = 246617;
	int64_t t121 = 6698593LL;

    t121 = (x649*((x650+x651)%x652));

    if (t121 != 6679651251LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile uint8_t x653 = UINT8_MAX;
	int8_t x654 = INT8_MIN;
	static uint64_t x655 = UINT64_MAX;
	int8_t x656 = INT8_MIN;
	static volatile uint64_t t122 = 794521148414901LLU;

    t122 = (x653*((x654+x655)%x656));

    if (t122 != 18446744073709518721LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x661 = -14688;
	static int16_t x662 = -3478;
	uint8_t x663 = UINT8_MAX;
	volatile uint8_t x664 = 4U;
	volatile int32_t t123 = -1;

    t123 = (x661*((x662+x663)%x664));

    if (t123 != 44064) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int32_t x666 = 87;
	int32_t x667 = INT32_MIN;
	int8_t x668 = INT8_MAX;

    t124 = (x665*((x666+x667)%x668));

    if (t124 != 18446744073692106832LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x669 = -1;
	uint32_t x670 = 7U;
	static int64_t x671 = -6014LL;
	static int32_t x672 = INT32_MIN;
	volatile int64_t t125 = -3864LL;

    t125 = (x669*((x670+x671)%x672));

    if (t125 != 6007LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint32_t x673 = UINT32_MAX;
	volatile uint64_t x674 = 900LLU;
	static int64_t x675 = INT64_MIN;
	uint64_t t126 = 3293825353282290LLU;

    t126 = (x673*((x674+x675)%x676));

    if (t126 != 3865470565500LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int32_t x677 = INT32_MAX;
	static volatile int64_t x678 = INT64_MAX;
	volatile int64_t x679 = INT64_MIN;
	volatile int64_t t127 = 240974496563020633LL;

    t127 = (x677*((x678+x679)%x680));

    if (t127 != -2147483647LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x685 = -1;
	static uint32_t x686 = 247247U;
	static uint32_t t128 = 859318207U;

    t128 = (x685*((x686+x687)%x688));

    if (t128 != 4294687282U) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x693 = 1U;
	int64_t x694 = 3532036501LL;
	int64_t x695 = -1LL;
	static uint16_t x696 = 1U;

    t129 = (x693*((x694+x695)%x696));

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int8_t x697 = INT8_MAX;
	uint32_t x698 = 1U;
	int32_t x699 = INT32_MIN;
	static volatile int16_t x700 = -421;
	volatile uint32_t t130 = 1771U;

    t130 = (x697*((x698+x699)%x700));

    if (t130 != 2147483775U) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x701 = 32526470U;
	volatile uint64_t x702 = UINT64_MAX;
	uint8_t x703 = 1U;
	uint32_t x704 = UINT32_MAX;
	uint64_t t131 = 158858LLU;

    t131 = (x701*((x702+x703)%x704));

    if (t131 != 0LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x706 = INT64_MIN;
	static uint32_t x707 = 1453964U;
	static uint64_t x708 = UINT64_MAX;
	volatile uint64_t t132 = 1328726940LLU;

    t132 = (x705*((x706+x707)%x708));

    if (t132 != 18446744072901147632LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x709 = INT16_MIN;
	int8_t x710 = INT8_MIN;
	volatile int16_t x712 = INT16_MIN;
	volatile int32_t t133 = 1429;

    t133 = (x709*((x710+x711)%x712));

    if (t133 != -1069514752) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x717 = INT8_MIN;
	volatile int8_t x719 = -1;
	static int8_t x720 = INT8_MAX;
	volatile int32_t t134 = -1004;

    t134 = (x717*((x718+x719)%x720));

    if (t134 != 256) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x721 = 13;
	int8_t x724 = INT8_MIN;
	int64_t t135 = -11LL;

    t135 = (x721*((x722+x723)%x724));

    if (t135 != -1183LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x725 = INT16_MAX;
	int64_t x726 = INT64_MIN;
	int32_t x727 = 7438664;
	uint64_t x728 = 6LLU;
	volatile uint64_t t136 = 98422LLU;

    t136 = (x725*((x726+x727)%x728));

    if (t136 != 131068LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x730 = 991463LLU;
	uint64_t t137 = 2LLU;

    t137 = (x729*((x730+x731)%x732));

    if (t137 != 6585773796LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x733 = 2546766U;
	volatile uint64_t x734 = 6LLU;
	volatile int32_t x735 = -3;
	static uint64_t t138 = 23674056495160215LLU;

    t138 = (x733*((x734+x735)%x736));

    if (t138 != 7640298LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x737 = INT64_MIN;
	int32_t x738 = -3;
	uint8_t x739 = 18U;
	uint8_t x740 = 2U;
	int64_t t139 = INT64_MIN;

    t139 = (x737*((x738+x739)%x740));

    if (t139 != INT64_MIN) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x745 = 12U;
	static uint8_t x746 = 61U;
	int64_t x748 = -1LL;

    t140 = (x745*((x746+x747)%x748));

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x753 = INT16_MIN;
	int32_t x754 = -1;
	volatile int8_t x755 = 1;
	static volatile int32_t t141 = -1;

    t141 = (x753*((x754+x755)%x756));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x761 = -1;
	int32_t x762 = INT32_MAX;
	static uint32_t x763 = 683975003U;
	volatile int64_t x764 = -947LL;
	int64_t t142 = 6250414LL;

    t142 = (x761*((x762+x763)%x764));

    if (t142 != -622LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x765 = 133U;
	int64_t x767 = 1LL;
	int8_t x768 = INT8_MIN;
	int64_t t143 = 33508653673044269LL;

    t143 = (x765*((x766+x767)%x768));

    if (t143 != 12103LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x769 = INT32_MIN;
	int32_t x772 = INT32_MIN;
	int64_t t144 = -187335916LL;

    t144 = (x769*((x770+x771)%x772));

    if (t144 != -4611686016279904256LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x774 = 178U;
	int32_t x775 = -19;
	int64_t x776 = -1LL;

    t145 = (x773*((x774+x775)%x776));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint64_t x781 = 2452398739846LLU;
	int64_t x782 = -1015988453250LL;
	static int32_t x783 = 863610;
	static int8_t x784 = -1;
	uint64_t t146 = 491112593118792581LLU;

    t146 = (x781*((x782+x783)%x784));

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x786 = -1;
	volatile int8_t x787 = INT8_MIN;
	int16_t x788 = -12;
	int32_t t147 = 21;

    t147 = (x785*((x786+x787)%x788));

    if (t147 != -9) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x789 = -1LL;
	int64_t x790 = INT64_MAX;
	static uint16_t x791 = 0U;
	volatile int8_t x792 = -1;
	static volatile int64_t t148 = 2846501649847LL;

    t148 = (x789*((x790+x791)%x792));

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int64_t x793 = INT64_MAX;
	volatile uint64_t x794 = UINT64_MAX;
	int8_t x795 = INT8_MIN;
	int64_t x796 = -1LL;
	uint64_t t149 = 9323195LLU;

    t149 = (x793*((x794+x795)%x796));

    if (t149 != 9223372036854775937LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x797 = -1;
	int32_t x798 = 1494001;
	int32_t x799 = INT32_MIN;
	int32_t t150 = -123982;

    t150 = (x797*((x798+x799)%x800));

    if (t150 != 13327) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x801 = -1;
	int32_t x802 = -1;
	int32_t t151 = -3860425;

    t151 = (x801*((x802+x803)%x804));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint8_t x805 = 100U;
	uint32_t x807 = UINT32_MAX;
	volatile uint16_t x808 = 4U;
	uint32_t t152 = 0U;

    t152 = (x805*((x806+x807)%x808));

    if (t152 != 0U) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x809 = -10;
	int32_t x810 = 7870;
	int64_t x812 = INT64_MIN;

    t153 = (x809*((x810+x811)%x812));

    if (t153 != -78920LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x813 = INT16_MIN;
	int32_t x814 = 1037152;
	static uint8_t x815 = UINT8_MAX;
	int16_t x816 = INT16_MAX;
	volatile int32_t t154 = -7;

    t154 = (x813*((x814+x815)%x816));

    if (t154 != -708771840) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint16_t x817 = 26U;
	int32_t x818 = 1;
	volatile int64_t x819 = -43LL;
	uint16_t x820 = UINT16_MAX;
	volatile int64_t t155 = -7126499LL;

    t155 = (x817*((x818+x819)%x820));

    if (t155 != -1092LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x825 = -1LL;
	int8_t x826 = INT8_MIN;
	int64_t x827 = -741135273613999371LL;
	int16_t x828 = INT16_MIN;
	int64_t t156 = 84249757728955LL;

    t156 = (x825*((x826+x827)%x828));

    if (t156 != 15755LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x829 = INT8_MIN;
	volatile int8_t x830 = INT8_MAX;
	static int32_t x831 = 265;
	static int16_t x832 = INT16_MIN;
	volatile int32_t t157 = -113102;

    t157 = (x829*((x830+x831)%x832));

    if (t157 != -50176) { NG(); } else { ; }
	
}

void f158(void) {
    	static int64_t x833 = -1483061LL;
	volatile uint32_t x834 = 65464U;
	static int16_t x835 = INT16_MIN;
	int8_t x836 = 18;
	int64_t t158 = -22896952LL;

    t158 = (x833*((x834+x835)%x836));

    if (t158 != -11864488LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x841 = 0U;
	uint64_t x842 = UINT64_MAX;
	int8_t x843 = 17;
	int8_t x844 = INT8_MAX;
	volatile uint64_t t159 = 56286588LLU;

    t159 = (x841*((x842+x843)%x844));

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint32_t t160 = 224379370U;

    t160 = (x845*((x846+x847)%x848));

    if (t160 != 2151481222U) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x849 = 1428U;
	uint32_t x850 = UINT32_MAX;
	static uint64_t x851 = 239136LLU;

    t161 = (x849*((x850+x851)%x852));

    if (t161 != 6133554783468LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x853 = 7;
	int16_t x854 = -1;
	static volatile int16_t x855 = INT16_MIN;
	uint32_t x856 = 9U;

    t162 = (x853*((x854+x855)%x856));

    if (t162 != 28U) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x857 = 7444;
	volatile int64_t x858 = -1LL;
	int32_t x859 = INT32_MIN;
	volatile int16_t x860 = INT16_MAX;

    t163 = (x857*((x858+x859)%x860));

    if (t163 != -22332LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x865 = UINT8_MAX;
	int64_t x867 = INT64_MIN;
	static volatile int16_t x868 = INT16_MAX;
	volatile int64_t t164 = -80576198826719789LL;

    t164 = (x865*((x866+x867)%x868));

    if (t164 != -8292600LL) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint16_t x869 = 62U;
	volatile int16_t x870 = -1;
	uint64_t x871 = UINT64_MAX;
	int8_t x872 = -9;
	volatile uint64_t t165 = 29749LLU;

    t165 = (x869*((x870+x871)%x872));

    if (t165 != 434LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x877 = -1;
	volatile int8_t x878 = 1;
	int32_t x879 = INT32_MIN;
	volatile int64_t t166 = 701448294LL;

    t166 = (x877*((x878+x879)%x880));

    if (t166 != 2147483647LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x881 = -1;
	int8_t x884 = -1;
	volatile int32_t t167 = 1;

    t167 = (x881*((x882+x883)%x884));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int8_t x885 = INT8_MAX;
	int8_t x886 = -1;
	volatile int8_t x888 = INT8_MAX;
	uint64_t t168 = 21783216LLU;

    t168 = (x885*((x886+x887)%x888));

    if (t168 != 4699LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x889 = 15131;
	int16_t x890 = INT16_MIN;
	uint8_t x891 = 4U;

    t169 = (x889*((x890+x891)%x892));

    if (t169 != -495752084LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x897 = -4028;
	static int16_t x899 = 13663;
	int64_t x900 = -7414233413331LL;
	volatile int64_t t170 = 4219899013248LL;

    t170 = (x897*((x898+x899)%x900));

    if (t170 != -56061704LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int32_t x901 = 55;
	int64_t x902 = -1LL;
	int8_t x903 = INT8_MIN;
	volatile int32_t x904 = INT32_MAX;
	volatile int64_t t171 = 1458LL;

    t171 = (x901*((x902+x903)%x904));

    if (t171 != -7095LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int32_t x910 = -1722967;
	uint16_t x911 = 635U;
	uint64_t t172 = 2112531730LLU;

    t172 = (x909*((x910+x911)%x912));

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x917 = UINT16_MAX;
	int32_t x918 = 133930815;
	uint32_t x919 = UINT32_MAX;
	int16_t x920 = INT16_MAX;
	volatile uint32_t t173 = 1252504992U;

    t173 = (x917*((x918+x919)%x920));

    if (t173 != 791990475U) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x921 = INT32_MIN;
	int16_t x922 = -1;
	int64_t x923 = -3LL;
	static int16_t x924 = -1;
	int64_t t174 = -476LL;

    t174 = (x921*((x922+x923)%x924));

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x925 = 6877U;
	volatile uint64_t x927 = UINT64_MAX;
	int64_t x928 = -170002LL;
	static uint64_t t175 = 651380093LLU;

    t175 = (x925*((x926+x927)%x928));

    if (t175 != 1169096877LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x931 = -1;
	int32_t x932 = -2872115;
	volatile uint64_t t176 = 567450392LLU;

    t176 = (x929*((x930+x931)%x932));

    if (t176 != 18446744073341921152LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x933 = 14U;
	static uint32_t x934 = 3724538U;
	int64_t x935 = 1931402893096334253LL;
	int8_t x936 = INT8_MIN;
	int64_t t177 = -496898582056552LL;

    t177 = (x933*((x934+x935)%x936));

    if (t177 != 546LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x937 = INT16_MIN;
	uint16_t x938 = 3395U;
	uint64_t x940 = 123605736549LLU;
	uint64_t t178 = 15LLU;

    t178 = (x937*((x938+x939)%x940));

    if (t178 != 18446744073602498560LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x941 = 56U;
	int32_t x942 = -1;
	int8_t x943 = INT8_MIN;
	int64_t t179 = 731LL;

    t179 = (x941*((x942+x943)%x944));

    if (t179 != -7224LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x946 = -1;
	static int16_t x947 = INT16_MIN;
	int8_t x948 = INT8_MAX;

    t180 = (x945*((x946+x947)%x948));

    if (t180 != -98301) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x953 = -58;
	int32_t x955 = -8941;
	volatile int16_t x956 = -122;
	int32_t t181 = 457742;

    t181 = (x953*((x954+x955)%x956));

    if (t181 != 6844) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x957 = INT16_MIN;
	int8_t x959 = INT8_MIN;
	uint16_t x960 = UINT16_MAX;
	int32_t t182 = -3021045;

    t182 = (x957*((x958+x959)%x960));

    if (t182 != -1069514752) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x961 = -43;
	int32_t x962 = -1;
	volatile uint64_t x964 = UINT64_MAX;
	static uint64_t t183 = 195929646460557LLU;

    t183 = (x961*((x962+x963)%x964));

    if (t183 != 18446744073709539146LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x965 = 12LLU;
	static uint8_t x966 = UINT8_MAX;
	uint16_t x967 = 620U;
	int16_t x968 = INT16_MIN;
	volatile uint64_t t184 = 706LLU;

    t184 = (x965*((x966+x967)%x968));

    if (t184 != 10500LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x970 = 296;
	uint64_t x971 = UINT64_MAX;
	volatile uint8_t x972 = 1U;
	uint64_t t185 = 145LLU;

    t185 = (x969*((x970+x971)%x972));

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x973 = 84688656888502LL;
	uint8_t x974 = UINT8_MAX;
	uint8_t x975 = 1U;
	int16_t x976 = 29;
	volatile int64_t t186 = -10372027014LL;

    t186 = (x973*((x974+x975)%x976));

    if (t186 != 2032527765324048LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x977 = INT16_MAX;
	volatile uint8_t x978 = 5U;
	volatile int16_t x979 = 3897;
	uint32_t x980 = 39707677U;

    t187 = (x977*((x978+x979)%x980));

    if (t187 != 127856834U) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x981 = INT8_MAX;
	static uint32_t x983 = 8373170U;

    t188 = (x981*((x982+x983)%x984));

    if (t188 != 30988U) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x985 = INT64_MIN;
	static volatile int32_t x986 = -4072;
	static int16_t x987 = INT16_MIN;
	int64_t t189 = 166129545207LL;

    t189 = (x985*((x986+x987)%x988));

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint32_t x989 = UINT32_MAX;
	static uint8_t x990 = UINT8_MAX;
	int16_t x991 = -362;
	uint64_t x992 = 4LLU;
	static volatile uint64_t t190 = 421LLU;

    t190 = (x989*((x990+x991)%x992));

    if (t190 != 4294967295LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x997 = 1;
	uint32_t x998 = 4154865U;
	uint64_t x999 = 5569LLU;
	static int8_t x1000 = INT8_MAX;
	volatile uint64_t t191 = 14LLU;

    t191 = (x997*((x998+x999)%x1000));

    if (t191 != 41LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x1002 = UINT8_MAX;
	static int64_t x1003 = 3934099385LL;
	volatile int8_t x1004 = INT8_MIN;
	volatile int64_t t192 = 67808851941826169LL;

    t192 = (x1001*((x1002+x1003)%x1004));

    if (t192 != 240518168520LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x1005 = -3235761LL;
	volatile int8_t x1007 = -47;
	int64_t t193 = -6041LL;

    t193 = (x1005*((x1006+x1007)%x1008));

    if (t193 != -53147374425LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x1009 = -1;
	int8_t x1011 = INT8_MIN;
	static volatile uint64_t x1012 = 3074522000691LLU;
	volatile uint64_t t194 = 55126926887LLU;

    t194 = (x1009*((x1010+x1011)%x1012));

    if (t194 != 18446741539851912270LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x1017 = INT32_MIN;
	int16_t x1018 = INT16_MIN;
	int8_t x1019 = INT8_MIN;
	int32_t x1020 = -1;
	int32_t t195 = 13402;

    t195 = (x1017*((x1018+x1019)%x1020));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x1023 = INT64_MIN;
	static volatile int32_t x1024 = INT32_MIN;
	volatile int64_t t196 = 4LL;

    t196 = (x1021*((x1022+x1023)%x1024));

    if (t196 != -272730407167LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x1025 = 4U;
	int8_t x1026 = INT8_MIN;
	uint32_t x1028 = UINT32_MAX;

    t197 = (x1025*((x1026+x1027)%x1028));

    if (t197 != 4294966272U) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x1029 = INT8_MAX;
	int64_t x1030 = INT64_MIN;
	volatile uint16_t x1031 = 16540U;
	uint64_t x1032 = 587LLU;
	uint64_t t198 = 763703453LLU;

    t198 = (x1029*((x1030+x1031)%x1032));

    if (t198 != 72009LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x1034 = UINT8_MAX;
	int32_t x1035 = INT32_MIN;
	volatile uint64_t t199 = 22173705LLU;

    t199 = (x1033*((x1034+x1035)%x1036));

    if (t199 != 17031370260549957679LLU) { NG(); } else { ; }
	
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

