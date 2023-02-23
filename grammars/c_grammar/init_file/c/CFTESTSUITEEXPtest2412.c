
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

static volatile int16_t x5 = INT16_MIN;
volatile int64_t x6 = 1LL;
int8_t x15 = 20;
int8_t x16 = INT8_MIN;
static int16_t x18 = 14;
int64_t x20 = -783240518409797LL;
uint16_t x29 = 40U;
static int64_t x40 = 1945LL;
volatile uint64_t t7 = 8223589239LLU;
uint8_t x67 = UINT8_MAX;
uint16_t x77 = 6512U;
int64_t x82 = 7828364351548798LL;
int32_t x95 = -1;
volatile int64_t t14 = -273636924026002973LL;
uint16_t x97 = 4188U;
static int16_t x99 = -221;
uint64_t t15 = 918995591130479LLU;
int16_t x115 = -1;
int16_t x125 = -1;
int8_t x126 = 1;
int64_t x134 = 2LL;
volatile int32_t x135 = 105602661;
int64_t t23 = 2756930LL;
int32_t t24 = -27;
volatile uint16_t x149 = 1331U;
static int32_t x150 = INT32_MIN;
static int8_t x151 = INT8_MIN;
volatile uint64_t t26 = 489698465047LLU;
volatile int32_t x157 = INT32_MIN;
static uint64_t t27 = 2767636119393192LLU;
int64_t x184 = INT64_MIN;
volatile int64_t x187 = -1LL;
static volatile uint64_t x195 = UINT64_MAX;
volatile uint64_t x196 = 107567294252738LLU;
int8_t x199 = -1;
uint64_t x200 = 24061119766992039LLU;
int8_t x205 = 1;
volatile int32_t t37 = -154106651;
uint16_t x214 = 596U;
volatile uint32_t t39 = 77387964U;
int64_t x226 = INT64_MAX;
int32_t x236 = 226604509;
uint8_t x251 = 0U;
static uint32_t x252 = 24753U;
uint8_t x257 = 74U;
volatile uint32_t x259 = 35U;
int16_t x268 = INT16_MIN;
int16_t x272 = INT16_MIN;
int32_t t52 = 21633;
int8_t x276 = -1;
uint64_t t53 = 18915451090099969LLU;
int32_t x282 = -41427;
volatile int64_t x287 = INT64_MAX;
volatile uint32_t x294 = 141970997U;
volatile uint16_t x305 = UINT16_MAX;
int64_t x308 = INT64_MAX;
volatile int16_t x309 = -1;
uint8_t x316 = 4U;
int16_t x317 = -1;
uint8_t x323 = UINT8_MAX;
uint16_t x352 = 24013U;
static volatile uint64_t t71 = 123996915LLU;
static uint64_t t72 = 645078LLU;
int16_t x359 = INT16_MAX;
int32_t t73 = -14800483;
int8_t x362 = -47;
static int8_t x366 = -1;
static int8_t x367 = -1;
int32_t x373 = INT32_MIN;
uint8_t x381 = 17U;
int8_t x382 = INT8_MIN;
int8_t x393 = INT8_MIN;
int16_t x396 = 57;
static int32_t x399 = 38175036;
uint32_t x405 = 1U;
volatile uint32_t t83 = 3850U;
static volatile int64_t t84 = -2804078164696LL;
static volatile uint32_t x421 = 19986484U;
int64_t x427 = 888634589437501LL;
int64_t x429 = INT64_MAX;
int32_t x448 = INT32_MAX;
int32_t x454 = INT32_MIN;
int32_t t91 = 757;
uint32_t x460 = UINT32_MAX;
volatile uint32_t t93 = 236905981U;
int32_t x475 = -3;
int64_t x476 = -123042LL;
uint64_t x479 = 6764806LLU;
int16_t x480 = -11688;
static int64_t t98 = -729705LL;
uint64_t t100 = 47598LLU;
uint16_t x506 = 0U;
static volatile int64_t x509 = INT64_MIN;
uint64_t t105 = 416733971170LLU;
int8_t x517 = INT8_MAX;
int32_t x518 = 1481;
volatile int32_t t107 = 1687;
static int16_t x525 = -1;
int8_t x526 = -1;
uint32_t x527 = UINT32_MAX;
uint64_t x528 = 320640865653170488LLU;
static int16_t x534 = -7;
uint64_t x537 = UINT64_MAX;
uint16_t x547 = 1375U;
volatile uint64_t x549 = UINT64_MAX;
volatile uint64_t t112 = 11972356LLU;
int64_t x554 = 2388LL;
uint64_t t114 = 2118888963988655471LLU;
int64_t x582 = INT64_MAX;
volatile int64_t t115 = 2458378LL;
int64_t x586 = INT64_MIN;
static int8_t x591 = -1;
volatile int16_t x603 = -1;
volatile uint64_t x607 = UINT64_MAX;
uint64_t t121 = 2989LLU;
int8_t x609 = INT8_MAX;
int8_t x610 = INT8_MAX;
int64_t t122 = -1087736199127686370LL;
uint8_t x616 = 82U;
static volatile int64_t t123 = 3LL;
volatile uint64_t t124 = 1865908004LLU;
uint32_t x625 = 2U;
int32_t x633 = INT32_MIN;
static uint64_t t128 = 45310782456672LLU;
int32_t x644 = INT32_MIN;
int32_t x652 = INT32_MAX;
int32_t x674 = -1;
int8_t x679 = -1;
int8_t x680 = INT8_MIN;
volatile int32_t x682 = 29;
static int16_t x683 = -42;
int16_t x685 = INT16_MIN;
int32_t x686 = 40364701;
int8_t x687 = 1;
volatile int64_t x689 = 1320898LL;
volatile int16_t x691 = -1;
int32_t x693 = INT32_MIN;
int32_t x698 = INT32_MIN;
volatile uint64_t x706 = 671045047988296703LLU;
int32_t x718 = INT32_MIN;
uint32_t t144 = 84612214U;
uint16_t x738 = 1442U;
static volatile uint8_t x743 = UINT8_MAX;
int16_t x745 = -1;
uint32_t x747 = 10U;
uint16_t x748 = UINT16_MAX;
int16_t x750 = INT16_MIN;
volatile uint64_t t150 = 137406462305412608LLU;
volatile int32_t x753 = 1541989;
int8_t x756 = 3;
volatile int64_t x769 = INT64_MAX;
uint64_t x772 = 2599063885533LLU;
static uint64_t t154 = 1145646398724419808LLU;
static uint8_t x782 = 0U;
volatile int64_t x785 = INT64_MIN;
uint64_t x786 = 47LLU;
uint8_t x788 = 16U;
int8_t x802 = -8;
static int64_t x814 = INT64_MAX;
static int16_t x818 = INT16_MAX;
volatile int32_t t161 = -6;
int64_t x821 = INT64_MAX;
uint8_t x835 = UINT8_MAX;
volatile uint64_t t165 = 3807765999LLU;
uint64_t x846 = 52875206635LLU;
uint64_t t167 = 1838535103109951LLU;
int16_t x855 = INT16_MIN;
int16_t x860 = INT16_MIN;
int8_t x870 = -7;
uint64_t t174 = 2409870278517LLU;
uint16_t x881 = 2661U;
volatile int32_t t175 = 915471;
uint32_t x887 = 3556752U;
uint32_t x889 = 6627U;
volatile int16_t x898 = INT16_MAX;
uint32_t x903 = 1U;
static int64_t x908 = -1003450403218LL;
uint64_t x911 = 1158228LLU;
static uint64_t t182 = 869734181687LLU;
int64_t x938 = -246157841LL;
int8_t x939 = INT8_MIN;
volatile int8_t x940 = INT8_MIN;
int32_t x944 = -109024;
static volatile int64_t x947 = -102459648720396LL;
int32_t x951 = -1;
volatile uint8_t x954 = 7U;
int64_t x974 = -1LL;
volatile uint64_t x985 = 9LLU;
static volatile uint64_t t195 = 1898LLU;
uint64_t t196 = 103477LLU;


void f0(void) {
    	uint16_t x7 = UINT16_MAX;
	int8_t x8 = INT8_MIN;
	volatile int64_t t0 = -75038104LL;

    t0 = (x5/((x6|x7)%x8));

    if (t0 != -258LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int16_t x13 = INT16_MIN;
	uint32_t x14 = 119U;
	uint32_t t1 = 656292948U;

    t1 = (x13/((x14|x15)%x16));

    if (t1 != 36091886U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x17 = 1618U;
	uint64_t x19 = UINT64_MAX;
	static uint64_t t2 = 4396LLU;

    t2 = (x17/((x18|x19)%x20));

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint32_t x21 = 0U;
	volatile uint32_t x22 = 3043513U;
	uint16_t x23 = 7U;
	uint8_t x24 = 15U;
	uint32_t t3 = 835569825U;

    t3 = (x21/((x22|x23)%x24));

    if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x30 = UINT8_MAX;
	static uint16_t x31 = UINT16_MAX;
	uint32_t x32 = UINT32_MAX;
	volatile uint32_t t4 = 128U;

    t4 = (x29/((x30|x31)%x32));

    if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x37 = -7;
	static int8_t x38 = -1;
	volatile uint64_t x39 = 1038739997542577LLU;
	volatile uint64_t t5 = 24LLU;

    t5 = (x37/((x38|x39)%x40));

    if (t5 != 13817785823003409LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x41 = 27U;
	uint16_t x42 = 3U;
	volatile int32_t x43 = INT32_MAX;
	uint32_t x44 = UINT32_MAX;
	uint32_t t6 = 48569501U;

    t6 = (x41/((x42|x43)%x44));

    if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x57 = 1572735928144LLU;
	int8_t x58 = INT8_MIN;
	static uint32_t x59 = UINT32_MAX;
	int16_t x60 = INT16_MIN;

    t7 = (x57/((x58|x59)%x60));

    if (t7 != 47997556LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int8_t x61 = INT8_MIN;
	static int16_t x62 = -1;
	static int16_t x63 = 974;
	volatile int32_t x64 = -103384;
	volatile int32_t t8 = -124890;

    t8 = (x61/((x62|x63)%x64));

    if (t8 != 128) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint64_t x65 = UINT64_MAX;
	int8_t x66 = 0;
	volatile int32_t x68 = -180762;
	uint64_t t9 = 944LLU;

    t9 = (x65/((x66|x67)%x68));

    if (t9 != 72340172838076673LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int32_t x78 = INT32_MIN;
	uint8_t x79 = 30U;
	volatile int32_t x80 = INT32_MIN;
	volatile int32_t t10 = 101025897;

    t10 = (x77/((x78|x79)%x80));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x81 = -1LL;
	static volatile uint8_t x83 = 1U;
	volatile int16_t x84 = 1391;
	static int64_t t11 = -199733373781209343LL;

    t11 = (x81/((x82|x83)%x84));

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x85 = INT8_MIN;
	int8_t x86 = INT8_MIN;
	int16_t x87 = -1;
	static uint8_t x88 = UINT8_MAX;
	int32_t t12 = -1;

    t12 = (x85/((x86|x87)%x88));

    if (t12 != 128) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x89 = INT16_MIN;
	static int32_t x90 = INT32_MIN;
	int16_t x91 = INT16_MAX;
	int16_t x92 = INT16_MAX;
	int32_t t13 = 53;

    t13 = (x89/((x90|x91)%x92));

    if (t13 != 16384) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x93 = -1LL;
	static volatile int32_t x94 = INT32_MIN;
	static int8_t x96 = 5;

    t14 = (x93/((x94|x95)%x96));

    if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x98 = 1773686708714979309LLU;
	uint16_t x100 = 7U;

    t15 = (x97/((x98|x99)%x100));

    if (t15 != 698LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x101 = UINT8_MAX;
	uint64_t x102 = 74507772948LLU;
	volatile uint8_t x103 = 1U;
	volatile int32_t x104 = -1;
	uint64_t t16 = 135209LLU;

    t16 = (x101/((x102|x103)%x104));

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x113 = INT8_MIN;
	uint64_t x114 = UINT64_MAX;
	static int16_t x116 = INT16_MAX;
	volatile uint64_t t17 = 2084168601LLU;

    t17 = (x113/((x114|x115)%x116));

    if (t17 != 1229782938247303432LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x117 = 1;
	int8_t x118 = 0;
	uint32_t x119 = 95U;
	int64_t x120 = 41947892935508672LL;
	int64_t t18 = -38725994479982053LL;

    t18 = (x117/((x118|x119)%x120));

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x121 = 11483938811596177LL;
	int8_t x122 = 0;
	volatile int8_t x123 = -6;
	volatile int8_t x124 = INT8_MIN;
	int64_t t19 = 2111229606180737928LL;

    t19 = (x121/((x122|x123)%x124));

    if (t19 != -1913989801932696LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x127 = -1;
	static uint16_t x128 = UINT16_MAX;
	int32_t t20 = -160074110;

    t20 = (x125/((x126|x127)%x128));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x129 = 1387710343004762203LL;
	int64_t x130 = INT64_MIN;
	static int32_t x131 = INT32_MIN;
	int32_t x132 = -77543;
	volatile int64_t t21 = -3374985LL;

    t21 = (x129/((x130|x131)%x132));

    if (t21 != -177774832565303LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x133 = INT32_MIN;
	int16_t x136 = INT16_MIN;
	static volatile int64_t t22 = -39105451LL;

    t22 = (x133/((x134|x135)%x136));

    if (t22 != -88860LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x137 = 0;
	static int64_t x138 = -38398923860LL;
	volatile int16_t x139 = INT16_MAX;
	int32_t x140 = INT32_MAX;

    t23 = (x137/((x138|x139)%x140));

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x141 = INT16_MAX;
	int16_t x142 = INT16_MIN;
	uint8_t x143 = 6U;
	int16_t x144 = INT16_MIN;

    t24 = (x141/((x142|x143)%x144));

    if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x152 = -843983842;
	static int32_t t25 = -2346;

    t25 = (x149/((x150|x151)%x152));

    if (t25 != -10) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint64_t x153 = 11939LLU;
	static int8_t x154 = INT8_MIN;
	static int16_t x155 = INT16_MIN;
	int64_t x156 = INT64_MIN;

    t26 = (x153/((x154|x155)%x156));

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint64_t x158 = 231385LLU;
	volatile uint16_t x159 = UINT16_MAX;
	int8_t x160 = INT8_MIN;

    t27 = (x157/((x158|x159)%x160));

    if (t27 != 70369012605951LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x165 = 4U;
	static int8_t x166 = INT8_MIN;
	volatile int16_t x167 = INT16_MIN;
	volatile int32_t x168 = 1011843;
	volatile int32_t t28 = -399022241;

    t28 = (x165/((x166|x167)%x168));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x169 = INT32_MAX;
	static volatile int8_t x170 = 3;
	int32_t x171 = INT32_MIN;
	int8_t x172 = INT8_MIN;
	volatile int32_t t29 = 1;

    t29 = (x169/((x170|x171)%x172));

    if (t29 != -17179869) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x173 = 1292654U;
	static uint16_t x174 = UINT16_MAX;
	int64_t x175 = 1LL;
	int64_t x176 = INT64_MIN;
	int64_t t30 = -6108753724248LL;

    t30 = (x173/((x174|x175)%x176));

    if (t30 != 19LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile uint8_t x177 = 10U;
	uint8_t x178 = 46U;
	uint64_t x179 = 5LLU;
	static uint8_t x180 = 26U;
	uint64_t t31 = 130201LLU;

    t31 = (x177/((x178|x179)%x180));

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x181 = INT8_MAX;
	volatile int64_t x182 = -848LL;
	static uint64_t x183 = 7290713587031124LLU;
	volatile uint64_t t32 = 1344824952LLU;

    t32 = (x181/((x182|x183)%x184));

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x185 = 10228LL;
	int16_t x186 = INT16_MIN;
	static int32_t x188 = INT32_MAX;
	int64_t t33 = -1329716151LL;

    t33 = (x185/((x186|x187)%x188));

    if (t33 != -10228LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x189 = 44U;
	volatile int32_t x190 = INT32_MIN;
	uint32_t x191 = 54982U;
	int16_t x192 = INT16_MIN;
	static volatile uint32_t t34 = 372U;

    t34 = (x189/((x190|x191)%x192));

    if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int64_t x193 = 352LL;
	volatile int8_t x194 = -1;
	volatile uint64_t t35 = 467397604416LLU;

    t35 = (x193/((x194|x195)%x196));

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x197 = INT16_MIN;
	int64_t x198 = INT64_MIN;
	volatile uint64_t t36 = 1LLU;

    t36 = (x197/((x198|x199)%x200));

    if (t36 != 1158LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x206 = 117U;
	int8_t x207 = -1;
	int16_t x208 = INT16_MAX;

    t37 = (x205/((x206|x207)%x208));

    if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint8_t x213 = 108U;
	int32_t x215 = -23;
	uint16_t x216 = UINT16_MAX;
	static volatile int32_t t38 = 164854;

    t38 = (x213/((x214|x215)%x216));

    if (t38 != -36) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x217 = 57U;
	int8_t x218 = INT8_MIN;
	volatile uint32_t x219 = 4U;
	volatile uint8_t x220 = UINT8_MAX;

    t39 = (x217/((x218|x219)%x220));

    if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x221 = 115U;
	volatile int16_t x222 = INT16_MIN;
	int16_t x223 = 12;
	uint16_t x224 = UINT16_MAX;
	volatile int32_t t40 = 147;

    t40 = (x221/((x222|x223)%x224));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x225 = INT32_MIN;
	volatile int64_t x227 = -81LL;
	int8_t x228 = -30;
	int64_t t41 = 175729496419LL;

    t41 = (x225/((x226|x227)%x228));

    if (t41 != 2147483648LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static int32_t x229 = INT32_MIN;
	static int64_t x230 = INT64_MIN;
	int8_t x231 = -1;
	int32_t x232 = -3960278;
	int64_t t42 = 4142275545528LL;

    t42 = (x229/((x230|x231)%x232));

    if (t42 != 2147483648LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x233 = -23;
	int64_t x234 = -1LL;
	uint64_t x235 = 9169853LLU;
	uint64_t t43 = 32452898719482LLU;

    t43 = (x233/((x234|x235)%x236));

    if (t43 != 98754733414LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x237 = INT16_MIN;
	int32_t x238 = INT32_MIN;
	static int32_t x239 = 857004777;
	int64_t x240 = INT64_MAX;
	int64_t t44 = 1340353215690342473LL;

    t44 = (x237/((x238|x239)%x240));

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x241 = 2U;
	static int32_t x242 = INT32_MAX;
	static volatile int32_t x243 = -23309494;
	int8_t x244 = INT8_MAX;
	static volatile int32_t t45 = -169;

    t45 = (x241/((x242|x243)%x244));

    if (t45 != -2) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x245 = INT8_MIN;
	int32_t x246 = -1;
	uint16_t x247 = UINT16_MAX;
	uint64_t x248 = 363840733407343507LLU;
	volatile uint64_t t46 = 3049LLU;

    t46 = (x245/((x246|x247)%x248));

    if (t46 != 72LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x249 = -1;
	int16_t x250 = INT16_MIN;
	uint32_t t47 = 601U;

    t47 = (x249/((x250|x251)%x252));

    if (t47 != 256492U) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x253 = INT64_MIN;
	static volatile int16_t x254 = 3512;
	volatile int32_t x255 = INT32_MIN;
	static int64_t x256 = INT64_MAX;
	int64_t t48 = 32270330LL;

    t48 = (x253/((x254|x255)%x256));

    if (t48 != 4294974320LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x258 = INT8_MAX;
	static volatile int32_t x260 = -84;
	static volatile uint32_t t49 = 317U;

    t49 = (x257/((x258|x259)%x260));

    if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x261 = -1;
	int16_t x262 = INT16_MIN;
	int32_t x263 = -129405603;
	volatile int8_t x264 = INT8_MIN;
	static volatile int32_t t50 = 67;

    t50 = (x261/((x262|x263)%x264));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint8_t x265 = UINT8_MAX;
	static int64_t x266 = -14699479LL;
	int16_t x267 = -805;
	int64_t t51 = 192259365633255LL;

    t51 = (x265/((x266|x267)%x268));

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x269 = -16;
	uint8_t x270 = 2U;
	int16_t x271 = -1;

    t52 = (x269/((x270|x271)%x272));

    if (t52 != 16) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint16_t x273 = UINT16_MAX;
	static uint64_t x274 = 1LLU;
	static volatile int64_t x275 = 57626207LL;

    t53 = (x273/((x274|x275)%x276));

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x277 = UINT16_MAX;
	int32_t x278 = INT32_MIN;
	uint16_t x279 = UINT16_MAX;
	int8_t x280 = 7;
	volatile int32_t t54 = 585;

    t54 = (x277/((x278|x279)%x280));

    if (t54 != -65535) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x281 = 10051U;
	volatile int64_t x283 = -63571513410732689LL;
	uint32_t x284 = 510556776U;
	int64_t t55 = 114944LL;

    t55 = (x281/((x282|x283)%x284));

    if (t55 != -69LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x285 = 41985400LLU;
	int64_t x286 = INT64_MIN;
	int32_t x288 = 5847455;
	uint64_t t56 = 359308900005406LLU;

    t56 = (x285/((x286|x287)%x288));

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x289 = -1;
	int8_t x290 = -43;
	int8_t x291 = INT8_MIN;
	int32_t x292 = INT32_MAX;
	static int32_t t57 = -346221;

    t57 = (x289/((x290|x291)%x292));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x293 = -1232;
	static int64_t x295 = INT64_MIN;
	uint16_t x296 = 937U;
	volatile int64_t t58 = -209897371545793LL;

    t58 = (x293/((x294|x295)%x296));

    if (t58 != 1LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile uint64_t x297 = UINT64_MAX;
	int16_t x298 = -1;
	int64_t x299 = INT64_MIN;
	int8_t x300 = INT8_MIN;
	volatile uint64_t t59 = 381106974LLU;

    t59 = (x297/((x298|x299)%x300));

    if (t59 != 1LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x301 = INT16_MIN;
	volatile uint16_t x302 = 105U;
	static int8_t x303 = INT8_MAX;
	volatile int32_t x304 = INT32_MIN;
	volatile int32_t t60 = -91;

    t60 = (x301/((x302|x303)%x304));

    if (t60 != -258) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x306 = INT64_MAX;
	static int32_t x307 = -1;
	static volatile int64_t t61 = -7360705250581LL;

    t61 = (x305/((x306|x307)%x308));

    if (t61 != -65535LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int16_t x310 = 2667;
	int16_t x311 = INT16_MIN;
	int8_t x312 = INT8_MIN;
	int32_t t62 = -6122782;

    t62 = (x309/((x310|x311)%x312));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x313 = -1LL;
	volatile int32_t x314 = 40;
	static int8_t x315 = 1;
	int64_t t63 = 5LL;

    t63 = (x313/((x314|x315)%x316));

    if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x318 = -1;
	int32_t x319 = -811826;
	static int64_t x320 = INT64_MIN;
	volatile int64_t t64 = 527573319LL;

    t64 = (x317/((x318|x319)%x320));

    if (t64 != 1LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x321 = INT8_MIN;
	int32_t x322 = INT32_MIN;
	int64_t x324 = -8405006276LL;
	volatile int64_t t65 = 119LL;

    t65 = (x321/((x322|x323)%x324));

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x325 = UINT8_MAX;
	static uint16_t x326 = 3216U;
	uint64_t x327 = UINT64_MAX;
	int64_t x328 = INT64_MIN;
	volatile uint64_t t66 = 106475393866LLU;

    t66 = (x325/((x326|x327)%x328));

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x329 = UINT32_MAX;
	int8_t x330 = -15;
	static uint16_t x331 = 3U;
	int16_t x332 = INT16_MIN;
	uint32_t t67 = 11974133U;

    t67 = (x329/((x330|x331)%x332));

    if (t67 != 1U) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint8_t x337 = 56U;
	int16_t x338 = -46;
	int8_t x339 = -1;
	static uint32_t x340 = 4685589U;
	uint32_t t68 = 340U;

    t68 = (x337/((x338|x339)%x340));

    if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x341 = INT32_MAX;
	int32_t x342 = -1340;
	int32_t x343 = INT32_MAX;
	uint16_t x344 = 5930U;
	volatile int32_t t69 = -232;

    t69 = (x341/((x342|x343)%x344));

    if (t69 != -2147483647) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x345 = -381556;
	int16_t x346 = 969;
	int32_t x347 = INT32_MIN;
	static int8_t x348 = -3;
	volatile int32_t t70 = 236;

    t70 = (x345/((x346|x347)%x348));

    if (t70 != 190778) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x349 = INT64_MIN;
	uint64_t x350 = UINT64_MAX;
	int64_t x351 = INT64_MIN;

    t71 = (x349/((x350|x351)%x352));

    if (t71 != 835677451921244LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x353 = INT8_MIN;
	volatile uint16_t x354 = 4515U;
	uint64_t x355 = 4094703015158198271LLU;
	static int64_t x356 = -382045941183LL;

    t72 = (x353/((x354|x355)%x356));

    if (t72 != 4LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x357 = 76U;
	static int32_t x358 = INT32_MIN;
	uint16_t x360 = UINT16_MAX;

    t73 = (x357/((x358|x359)%x360));

    if (t73 != -76) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x361 = 1693;
	static int64_t x363 = -278023951093974LL;
	static uint64_t x364 = 265973LLU;
	uint64_t t74 = 737LLU;

    t74 = (x361/((x362|x363)%x364));

    if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x365 = -1;
	uint16_t x368 = 2404U;
	int32_t t75 = 5048;

    t75 = (x365/((x366|x367)%x368));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x369 = 467910U;
	int16_t x370 = INT16_MIN;
	static volatile int64_t x371 = INT64_MAX;
	volatile int32_t x372 = INT32_MAX;
	int64_t t76 = -196744905044621235LL;

    t76 = (x369/((x370|x371)%x372));

    if (t76 != -467910LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x374 = INT32_MIN;
	volatile int64_t x375 = -126089207948LL;
	int32_t x376 = 689201;
	volatile int64_t t77 = -7LL;

    t77 = (x373/((x374|x375)%x376));

    if (t77 != 7023LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int64_t x383 = INT64_MAX;
	static int16_t x384 = INT16_MIN;
	volatile int64_t t78 = 5LL;

    t78 = (x381/((x382|x383)%x384));

    if (t78 != -17LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x385 = UINT16_MAX;
	int64_t x386 = INT64_MIN;
	static int64_t x387 = INT64_MIN;
	static uint32_t x388 = 422894409U;
	int64_t t79 = -11416LL;

    t79 = (x385/((x386|x387)%x388));

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x394 = -23LL;
	int16_t x395 = INT16_MIN;
	volatile int64_t t80 = -85796888214979LL;

    t80 = (x393/((x394|x395)%x396));

    if (t80 != 5LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x397 = INT8_MAX;
	uint32_t x398 = UINT32_MAX;
	int16_t x400 = INT16_MIN;
	volatile uint32_t t81 = 215U;

    t81 = (x397/((x398|x399)%x400));

    if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x401 = 601U;
	int8_t x402 = 0;
	uint8_t x403 = UINT8_MAX;
	volatile uint64_t x404 = UINT64_MAX;
	uint64_t t82 = 7241086LLU;

    t82 = (x401/((x402|x403)%x404));

    if (t82 != 2LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int8_t x406 = INT8_MAX;
	uint8_t x407 = UINT8_MAX;
	static int16_t x408 = INT16_MIN;

    t83 = (x405/((x406|x407)%x408));

    if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x417 = INT32_MIN;
	int64_t x418 = INT64_MIN;
	uint32_t x419 = 6787U;
	int64_t x420 = -140513LL;

    t84 = (x417/((x418|x419)%x420));

    if (t84 != 21533LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x422 = INT32_MAX;
	volatile uint64_t x423 = UINT64_MAX;
	uint64_t x424 = 4754304LLU;
	volatile uint64_t t85 = 99179LLU;

    t85 = (x421/((x422|x423)%x424));

    if (t85 != 4LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x425 = -1;
	static uint64_t x426 = UINT64_MAX;
	uint64_t x428 = 43LLU;
	static uint64_t t86 = 3073LLU;

    t86 = (x425/((x426|x427)%x428));

    if (t86 != 461168601842738790LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint8_t x430 = UINT8_MAX;
	uint8_t x431 = 0U;
	volatile uint16_t x432 = UINT16_MAX;
	int64_t t87 = 1LL;

    t87 = (x429/((x430|x431)%x432));

    if (t87 != 36170086419038336LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x433 = UINT8_MAX;
	volatile uint32_t x434 = UINT32_MAX;
	int32_t x435 = 373;
	int64_t x436 = -4390299014656431LL;
	volatile int64_t t88 = -6036942LL;

    t88 = (x433/((x434|x435)%x436));

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x441 = -1;
	volatile int8_t x442 = INT8_MIN;
	volatile int32_t x443 = -49;
	volatile uint16_t x444 = 22U;
	int32_t t89 = -682325;

    t89 = (x441/((x442|x443)%x444));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x445 = -4042;
	int32_t x446 = -291517727;
	int16_t x447 = -1;
	volatile int32_t t90 = 2484764;

    t90 = (x445/((x446|x447)%x448));

    if (t90 != 4042) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x453 = 106;
	volatile int16_t x455 = 1;
	uint16_t x456 = UINT16_MAX;

    t91 = (x453/((x454|x455)%x456));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x457 = 109491;
	int32_t x458 = INT32_MIN;
	volatile int64_t x459 = INT64_MAX;
	int64_t t92 = -122LL;

    t92 = (x457/((x458|x459)%x460));

    if (t92 != -109491LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static int32_t x461 = INT32_MIN;
	static int16_t x462 = 0;
	uint32_t x463 = UINT32_MAX;
	int16_t x464 = 2208;

    t93 = (x461/((x462|x463)%x464));

    if (t93 != 2099202U) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x465 = INT64_MAX;
	int32_t x466 = -1;
	static int8_t x467 = INT8_MIN;
	volatile int16_t x468 = 3058;
	volatile int64_t t94 = 14924082934797LL;

    t94 = (x465/((x466|x467)%x468));

    if (t94 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x473 = 103613U;
	int64_t x474 = INT64_MIN;
	static volatile int64_t t95 = 22804428880512212LL;

    t95 = (x473/((x474|x475)%x476));

    if (t95 != -34537LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x477 = 3LLU;
	int32_t x478 = -1;
	static volatile uint64_t t96 = 1474230847170347800LLU;

    t96 = (x477/((x478|x479)%x480));

    if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x481 = 32U;
	static volatile int16_t x482 = INT16_MAX;
	volatile uint64_t x483 = 76161510LLU;
	uint64_t x484 = 115344386821LLU;
	uint64_t t97 = 17367914LLU;

    t97 = (x481/((x482|x483)%x484));

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x485 = -81950764607400873LL;
	int32_t x486 = -81589;
	int8_t x487 = INT8_MAX;
	int16_t x488 = INT16_MAX;

    t98 = (x485/((x486|x487)%x488));

    if (t98 != 5120962607473LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x489 = INT16_MAX;
	int16_t x490 = INT16_MAX;
	uint8_t x491 = 8U;
	int8_t x492 = INT8_MAX;
	int32_t t99 = 26232;

    t99 = (x489/((x490|x491)%x492));

    if (t99 != 32767) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x493 = UINT32_MAX;
	uint64_t x494 = UINT64_MAX;
	static uint32_t x495 = 11U;
	int8_t x496 = INT8_MIN;

    t100 = (x493/((x494|x495)%x496));

    if (t100 != 33818640LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x497 = UINT8_MAX;
	static uint16_t x498 = 3501U;
	int64_t x499 = -91LL;
	uint16_t x500 = 5165U;
	int64_t t101 = -17399938836LL;

    t101 = (x497/((x498|x499)%x500));

    if (t101 != -3LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x501 = 11LLU;
	int32_t x502 = -1;
	static int8_t x503 = 7;
	int32_t x504 = INT32_MAX;
	uint64_t t102 = 71833885324815232LLU;

    t102 = (x501/((x502|x503)%x504));

    if (t102 != 0LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x505 = UINT16_MAX;
	int8_t x507 = INT8_MAX;
	static int32_t x508 = -69963899;
	static volatile int32_t t103 = -218042;

    t103 = (x505/((x506|x507)%x508));

    if (t103 != 516) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x510 = INT64_MAX;
	int16_t x511 = INT16_MAX;
	uint64_t x512 = UINT64_MAX;
	uint64_t t104 = 164554LLU;

    t104 = (x509/((x510|x511)%x512));

    if (t104 != 1LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint64_t x513 = 179LLU;
	int8_t x514 = 6;
	int16_t x515 = INT16_MIN;
	int32_t x516 = INT32_MAX;

    t105 = (x513/((x514|x515)%x516));

    if (t105 != 0LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x519 = UINT32_MAX;
	uint16_t x520 = 4011U;
	volatile uint32_t t106 = 3792829U;

    t106 = (x517/((x518|x519)%x520));

    if (t106 != 0U) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x521 = 30;
	int32_t x522 = -61;
	int16_t x523 = 783;
	static int32_t x524 = INT32_MIN;

    t107 = (x521/((x522|x523)%x524));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t t108 = 26LLU;

    t108 = (x525/((x526|x527)%x528));

    if (t108 != 4294967297LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x533 = INT16_MAX;
	uint64_t x535 = 1721962790281231LLU;
	int8_t x536 = INT8_MIN;
	uint64_t t109 = 423898305494704766LLU;

    t109 = (x533/((x534|x535)%x536));

    if (t109 != 258LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x538 = UINT16_MAX;
	int32_t x539 = 1;
	int16_t x540 = INT16_MIN;
	uint64_t t110 = 1067378470756LLU;

    t110 = (x537/((x538|x539)%x540));

    if (t110 != 562967133814800LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x545 = 43U;
	int64_t x546 = INT64_MIN;
	uint64_t x548 = UINT64_MAX;
	static volatile uint64_t t111 = 398456274723LLU;

    t111 = (x545/((x546|x547)%x548));

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x550 = 2015587241458LLU;
	int64_t x551 = 503781006LL;
	uint64_t x552 = 2096165043089149LLU;

    t112 = (x549/((x550|x551)%x552));

    if (t112 != 9150520LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x553 = INT16_MIN;
	int64_t x555 = INT64_MIN;
	static int64_t x556 = INT64_MIN;
	int64_t t113 = 1748171884900920867LL;

    t113 = (x553/((x554|x555)%x556));

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x561 = 20615396108928LLU;
	int8_t x562 = -1;
	static int32_t x563 = -58053;
	int64_t x564 = INT64_MIN;

    t114 = (x561/((x562|x563)%x564));

    if (t114 != 0LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x581 = 129100508;
	volatile int8_t x583 = -1;
	int16_t x584 = INT16_MAX;

    t115 = (x581/((x582|x583)%x584));

    if (t115 != -129100508LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint64_t x585 = 4LLU;
	uint32_t x587 = UINT32_MAX;
	int64_t x588 = INT64_MAX;
	uint64_t t116 = 25731071565LLU;

    t116 = (x585/((x586|x587)%x588));

    if (t116 != 0LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x589 = -2528LL;
	int32_t x590 = -1;
	int32_t x592 = INT32_MIN;
	static volatile int64_t t117 = -533544282761202630LL;

    t117 = (x589/((x590|x591)%x592));

    if (t117 != 2528LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int16_t x593 = INT16_MIN;
	static int64_t x594 = -469072524884329638LL;
	static int8_t x595 = -3;
	int64_t x596 = INT64_MAX;
	int64_t t118 = 238717405LL;

    t118 = (x593/((x594|x595)%x596));

    if (t118 != 32768LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x597 = -1LL;
	int32_t x598 = -1;
	int8_t x599 = INT8_MIN;
	static int32_t x600 = INT32_MAX;
	static int64_t t119 = 23035957228362902LL;

    t119 = (x597/((x598|x599)%x600));

    if (t119 != 1LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x601 = 12;
	int8_t x602 = 31;
	volatile int64_t x604 = INT64_MAX;
	volatile int64_t t120 = -2124975178587151189LL;

    t120 = (x601/((x602|x603)%x604));

    if (t120 != -12LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint32_t x605 = 637478U;
	uint64_t x606 = 24351LLU;
	int8_t x608 = INT8_MIN;

    t121 = (x605/((x606|x607)%x608));

    if (t121 != 5019LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x611 = 1595U;
	int64_t x612 = INT64_MIN;

    t122 = (x609/((x610|x611)%x612));

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x613 = INT64_MIN;
	volatile uint8_t x614 = 6U;
	volatile uint16_t x615 = UINT16_MAX;

    t123 = (x613/((x614|x615)%x616));

    if (t123 != -542551296285575047LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x617 = INT8_MAX;
	int32_t x618 = INT32_MAX;
	int8_t x619 = INT8_MIN;
	uint64_t x620 = 746167065314893556LLU;

    t124 = (x617/((x618|x619)%x620));

    if (t124 != 0LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x626 = INT8_MIN;
	uint8_t x627 = 16U;
	uint64_t x628 = 764202LLU;
	volatile uint64_t t125 = 7553954298LLU;

    t125 = (x625/((x626|x627)%x628));

    if (t125 != 0LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x629 = 100U;
	volatile uint8_t x630 = 1U;
	uint64_t x631 = 12342LLU;
	int32_t x632 = -43992359;
	volatile uint64_t t126 = 9943933272001196LLU;

    t126 = (x629/((x630|x631)%x632));

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x634 = -1LL;
	int32_t x635 = INT32_MIN;
	uint16_t x636 = UINT16_MAX;
	static volatile int64_t t127 = -53369749767LL;

    t127 = (x633/((x634|x635)%x636));

    if (t127 != 2147483648LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x637 = 11U;
	uint32_t x638 = 118428U;
	uint32_t x639 = 4371U;
	uint64_t x640 = UINT64_MAX;

    t128 = (x637/((x638|x639)%x640));

    if (t128 != 0LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x641 = 4;
	volatile uint8_t x642 = 0U;
	volatile uint16_t x643 = 976U;
	static int32_t t129 = -3;

    t129 = (x641/((x642|x643)%x644));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x645 = UINT64_MAX;
	static volatile int16_t x646 = -1;
	uint8_t x647 = 3U;
	int32_t x648 = 638;
	volatile uint64_t t130 = 93LLU;

    t130 = (x645/((x646|x647)%x648));

    if (t130 != 1LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x649 = INT64_MIN;
	uint64_t x650 = 218LLU;
	int64_t x651 = -1LL;
	static volatile uint64_t t131 = 1LLU;

    t131 = (x649/((x650|x651)%x652));

    if (t131 != 3074457345618258602LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x653 = -1LL;
	int8_t x654 = -46;
	int32_t x655 = -1;
	int32_t x656 = INT32_MAX;
	int64_t t132 = -1701837990LL;

    t132 = (x653/((x654|x655)%x656));

    if (t132 != 1LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x665 = INT64_MIN;
	uint32_t x666 = 1680U;
	static int16_t x667 = INT16_MIN;
	int32_t x668 = -35;
	volatile int64_t t133 = 939030LL;

    t133 = (x665/((x666|x667)%x668));

    if (t133 != -2147499192LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x673 = INT8_MIN;
	static uint64_t x675 = 2438LLU;
	static uint64_t x676 = 330769481687LLU;
	uint64_t t134 = 5778946950799430LLU;

    t134 = (x673/((x674|x675)%x676));

    if (t134 != 57882652LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x677 = INT32_MAX;
	volatile int16_t x678 = INT16_MAX;
	int32_t t135 = -1035;

    t135 = (x677/((x678|x679)%x680));

    if (t135 != -2147483647) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x681 = 6;
	uint8_t x684 = 7U;
	volatile int32_t t136 = 19;

    t136 = (x681/((x682|x683)%x684));

    if (t136 != -1) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x688 = INT32_MIN;
	volatile int32_t t137 = 9;

    t137 = (x685/((x686|x687)%x688));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint64_t x690 = 184LLU;
	static int16_t x692 = INT16_MIN;
	volatile uint64_t t138 = 762263478578991648LLU;

    t138 = (x689/((x690|x691)%x692));

    if (t138 != 40LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x694 = 23848983673892667LL;
	int64_t x695 = -1LL;
	volatile uint8_t x696 = 24U;
	volatile int64_t t139 = 4301978LL;

    t139 = (x693/((x694|x695)%x696));

    if (t139 != 2147483648LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x697 = INT8_MIN;
	static int32_t x699 = INT32_MAX;
	int64_t x700 = INT64_MAX;
	volatile int64_t t140 = 347812908109816904LL;

    t140 = (x697/((x698|x699)%x700));

    if (t140 != 128LL) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x701 = INT16_MIN;
	volatile uint32_t x702 = 315U;
	static uint8_t x703 = 0U;
	int64_t x704 = -1515957234LL;
	volatile int64_t t141 = -2085448489640607LL;

    t141 = (x701/((x702|x703)%x704));

    if (t141 != -104LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x705 = 3;
	volatile uint8_t x707 = UINT8_MAX;
	int64_t x708 = -2764024967442742907LL;
	volatile uint64_t t142 = 1775295510014LLU;

    t142 = (x705/((x706|x707)%x708));

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int32_t x713 = -1;
	volatile int32_t x714 = INT32_MIN;
	uint32_t x715 = UINT32_MAX;
	volatile uint8_t x716 = 41U;
	uint32_t t143 = 20307887U;

    t143 = (x713/((x714|x715)%x716));

    if (t143 != 119304647U) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int16_t x717 = -1;
	uint32_t x719 = 28438U;
	uint32_t x720 = UINT32_MAX;

    t144 = (x717/((x718|x719)%x720));

    if (t144 != 1U) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x725 = -3;
	static int16_t x726 = -1;
	int64_t x727 = INT64_MAX;
	volatile uint32_t x728 = 296222057U;
	volatile int64_t t145 = -1LL;

    t145 = (x725/((x726|x727)%x728));

    if (t145 != 3LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x729 = INT32_MIN;
	static int8_t x730 = 42;
	uint32_t x731 = 798157393U;
	int8_t x732 = -13;
	volatile uint32_t t146 = 25225U;

    t146 = (x729/((x730|x731)%x732));

    if (t146 != 2U) { NG(); } else { ; }
	
}

void f147(void) {
    	static int64_t x737 = -36011LL;
	static uint16_t x739 = UINT16_MAX;
	uint64_t x740 = UINT64_MAX;
	static uint64_t t147 = 1511895948525188523LLU;

    t147 = (x737/((x738|x739)%x740));

    if (t147 != 281479271743488LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x741 = UINT64_MAX;
	int32_t x742 = INT32_MAX;
	int64_t x744 = 265448118773LL;
	uint64_t t148 = 29894272LLU;

    t148 = (x741/((x742|x743)%x744));

    if (t148 != 8589934596LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static int64_t x746 = INT64_MIN;
	int64_t t149 = 4606106LL;

    t149 = (x745/((x746|x747)%x748));

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x749 = UINT64_MAX;
	static int32_t x751 = INT32_MIN;
	int64_t x752 = 178577944260LL;

    t150 = (x749/((x750|x751)%x752));

    if (t150 != 1LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x754 = UINT8_MAX;
	int32_t x755 = INT32_MIN;
	volatile int32_t t151 = 762;

    t151 = (x753/((x754|x755)%x756));

    if (t151 != -770994) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x761 = -1;
	int8_t x762 = 1;
	uint32_t x763 = 1U;
	int16_t x764 = 860;
	volatile uint32_t t152 = UINT32_MAX;

    t152 = (x761/((x762|x763)%x764));

    if (t152 != UINT32_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x765 = 7;
	uint32_t x766 = 18480728U;
	int32_t x767 = -1;
	int64_t x768 = INT64_MIN;
	int64_t t153 = 438444LL;

    t153 = (x765/((x766|x767)%x768));

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x770 = 7U;
	static volatile int32_t x771 = INT32_MIN;

    t154 = (x769/((x770|x771)%x772));

    if (t154 != 3685217LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x781 = INT32_MIN;
	uint32_t x783 = 65493U;
	int8_t x784 = INT8_MAX;
	volatile uint32_t t155 = 26199U;

    t155 = (x781/((x782|x783)%x784));

    if (t155 != 24403223U) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x787 = 2883;
	uint64_t t156 = 1146LLU;

    t156 = (x785/((x786|x787)%x788));

    if (t156 != 614891469123651720LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t x789 = INT32_MIN;
	uint16_t x790 = 8274U;
	volatile int32_t x791 = INT32_MIN;
	uint8_t x792 = UINT8_MAX;
	int32_t t157 = 6789;

    t157 = (x789/((x790|x791)%x792));

    if (t157 != 153391689) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x797 = -1;
	uint64_t x798 = 214LLU;
	static int16_t x799 = 104;
	int32_t x800 = INT32_MAX;
	uint64_t t158 = 671740LLU;

    t158 = (x797/((x798|x799)%x800));

    if (t158 != 72624976668147841LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint64_t x801 = UINT64_MAX;
	uint8_t x803 = 39U;
	static int64_t x804 = -212101998543LL;
	volatile uint64_t t159 = 31162LLU;

    t159 = (x801/((x802|x803)%x804));

    if (t159 != 1LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile uint32_t x813 = 920U;
	int16_t x815 = -2;
	static int64_t x816 = INT64_MIN;
	volatile int64_t t160 = -42265LL;

    t160 = (x813/((x814|x815)%x816));

    if (t160 != -920LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x817 = -4156;
	volatile int16_t x819 = INT16_MAX;
	uint8_t x820 = 22U;

    t161 = (x817/((x818|x819)%x820));

    if (t161 != -461) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x822 = INT64_MIN;
	static int32_t x823 = -719810154;
	int16_t x824 = 995;
	int64_t t162 = -15LL;

    t162 = (x821/((x822|x823)%x824));

    if (t162 != -31914782134445591LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x825 = 282LLU;
	int64_t x826 = INT64_MIN;
	int32_t x827 = -1;
	int64_t x828 = INT64_MIN;
	static uint64_t t163 = 477483006LLU;

    t163 = (x825/((x826|x827)%x828));

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x833 = INT32_MAX;
	uint8_t x834 = 3U;
	static volatile uint16_t x836 = UINT16_MAX;
	static volatile int32_t t164 = -81327;

    t164 = (x833/((x834|x835)%x836));

    if (t164 != 8421504) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint64_t x837 = UINT64_MAX;
	int64_t x838 = INT64_MIN;
	static int32_t x839 = INT32_MAX;
	uint8_t x840 = 6U;

    t165 = (x837/((x838|x839)%x840));

    if (t165 != 1LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x841 = UINT8_MAX;
	uint64_t x842 = 814405536353673LLU;
	static int64_t x843 = -1LL;
	uint8_t x844 = 12U;
	volatile uint64_t t166 = 16376999305LLU;

    t166 = (x841/((x842|x843)%x844));

    if (t166 != 85LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x845 = 0;
	int64_t x847 = 103840829877797235LL;
	int64_t x848 = INT64_MIN;

    t167 = (x845/((x846|x847)%x848));

    if (t167 != 0LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint16_t x849 = 1368U;
	volatile int64_t x850 = -1LL;
	volatile uint32_t x851 = 31432U;
	volatile int64_t x852 = 28LL;
	volatile int64_t t168 = -4570949538271164645LL;

    t168 = (x849/((x850|x851)%x852));

    if (t168 != -1368LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x853 = -670571483012225246LL;
	volatile int8_t x854 = INT8_MIN;
	uint64_t x856 = 3171989873569976355LLU;
	uint64_t t169 = 72684176691898LLU;

    t169 = (x853/((x854|x855)%x856));

    if (t169 != 6LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x857 = 10U;
	uint64_t x858 = 179LLU;
	uint32_t x859 = UINT32_MAX;
	static uint64_t t170 = 40597579800LLU;

    t170 = (x857/((x858|x859)%x860));

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x861 = INT64_MIN;
	static int8_t x862 = 1;
	int64_t x863 = INT64_MAX;
	uint16_t x864 = 10U;
	static int64_t t171 = 46926595LL;

    t171 = (x861/((x862|x863)%x864));

    if (t171 != -1317624576693539401LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint16_t x865 = UINT16_MAX;
	uint8_t x866 = UINT8_MAX;
	volatile uint32_t x867 = 3258144U;
	uint8_t x868 = 58U;
	uint32_t t172 = 14179110U;

    t172 = (x865/((x866|x867)%x868));

    if (t172 != 1524U) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x869 = -16801030239LL;
	volatile int8_t x871 = 1;
	static int16_t x872 = INT16_MIN;
	volatile int64_t t173 = -190340LL;

    t173 = (x869/((x870|x871)%x872));

    if (t173 != 2400147177LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x877 = INT64_MAX;
	uint16_t x878 = 1613U;
	uint64_t x879 = UINT64_MAX;
	uint32_t x880 = 292064U;

    t174 = (x877/((x878|x879)%x880));

    if (t174 != 88823775622403LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x882 = INT32_MIN;
	int32_t x883 = -4;
	volatile int8_t x884 = INT8_MAX;

    t175 = (x881/((x882|x883)%x884));

    if (t175 != -665) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x885 = 3535U;
	static int32_t x886 = INT32_MIN;
	volatile int16_t x888 = INT16_MAX;
	volatile uint32_t t176 = 42U;

    t176 = (x885/((x886|x887)%x888));

    if (t176 != 0U) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int16_t x890 = INT16_MIN;
	static uint64_t x891 = 330LLU;
	int64_t x892 = INT64_MIN;
	uint64_t t177 = 6834105LLU;

    t177 = (x889/((x890|x891)%x892));

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	static int64_t x893 = INT64_MIN;
	int32_t x894 = INT32_MIN;
	int8_t x895 = -1;
	uint32_t x896 = 1348658U;
	int64_t t178 = -12578LL;

    t178 = (x893/((x894|x895)%x896));

    if (t178 != -10977290596490LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint16_t x897 = UINT16_MAX;
	uint32_t x899 = UINT32_MAX;
	uint32_t x900 = 186525478U;
	static uint32_t t179 = 3U;

    t179 = (x897/((x898|x899)%x900));

    if (t179 != 0U) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int16_t x901 = INT16_MIN;
	static int32_t x902 = INT32_MIN;
	volatile uint32_t x904 = 15U;
	uint32_t t180 = 769797861U;

    t180 = (x901/((x902|x903)%x904));

    if (t180 != 477214947U) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x905 = UINT8_MAX;
	uint16_t x906 = 9U;
	volatile int32_t x907 = 11;
	int64_t t181 = -477140713474781624LL;

    t181 = (x905/((x906|x907)%x908));

    if (t181 != 23LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x909 = -24;
	uint64_t x910 = 197LLU;
	int8_t x912 = INT8_MAX;

    t182 = (x909/((x910|x911)%x912));

    if (t182 != 157664479262474799LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int16_t x913 = INT16_MIN;
	volatile int32_t x914 = 518739;
	uint8_t x915 = UINT8_MAX;
	uint32_t x916 = 597U;
	uint32_t t183 = 69104U;

    t183 = (x913/((x914|x915)%x916));

    if (t183 != 36397750U) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x917 = INT16_MAX;
	int64_t x918 = 1441LL;
	int32_t x919 = -484251;
	uint64_t x920 = UINT64_MAX;
	static uint64_t t184 = 34213528610017100LLU;

    t184 = (x917/((x918|x919)%x920));

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int32_t x921 = INT32_MAX;
	int16_t x922 = -6;
	int16_t x923 = INT16_MAX;
	static int16_t x924 = 316;
	static volatile int32_t t185 = -63989;

    t185 = (x921/((x922|x923)%x924));

    if (t185 != -2147483647) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x925 = 54;
	static uint8_t x926 = UINT8_MAX;
	int32_t x927 = 20;
	uint32_t x928 = UINT32_MAX;
	volatile uint32_t t186 = 122413312U;

    t186 = (x925/((x926|x927)%x928));

    if (t186 != 0U) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x933 = INT32_MIN;
	uint32_t x934 = UINT32_MAX;
	volatile uint8_t x935 = UINT8_MAX;
	int32_t x936 = INT32_MIN;
	uint32_t t187 = 302U;

    t187 = (x933/((x934|x935)%x936));

    if (t187 != 1U) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int8_t x937 = INT8_MIN;
	volatile int64_t t188 = -16146813465720LL;

    t188 = (x937/((x938|x939)%x940));

    if (t188 != 7LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x941 = -1;
	int32_t x942 = 442578;
	static int8_t x943 = -1;
	volatile int32_t t189 = -66988374;

    t189 = (x941/((x942|x943)%x944));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile int32_t x945 = INT32_MIN;
	int16_t x946 = -1;
	int16_t x948 = 14;
	int64_t t190 = -7871710339LL;

    t190 = (x945/((x946|x947)%x948));

    if (t190 != 2147483648LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x949 = 2058U;
	volatile uint8_t x950 = 54U;
	int16_t x952 = INT16_MIN;
	static volatile int32_t t191 = -4558194;

    t191 = (x949/((x950|x951)%x952));

    if (t191 != -2058) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x953 = -1LL;
	int16_t x955 = -439;
	static int32_t x956 = -116;
	static int64_t t192 = -13854724991214LL;

    t192 = (x953/((x954|x955)%x956));

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x957 = INT16_MIN;
	int8_t x958 = -1;
	int32_t x959 = INT32_MIN;
	volatile int8_t x960 = INT8_MAX;
	int32_t t193 = -241964;

    t193 = (x957/((x958|x959)%x960));

    if (t193 != 32768) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x973 = INT64_MAX;
	int16_t x975 = -1478;
	static int32_t x976 = INT32_MAX;
	int64_t t194 = 18745845872233LL;

    t194 = (x973/((x974|x975)%x976));

    if (t194 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint64_t x986 = 521570188562LLU;
	static volatile uint16_t x987 = UINT16_MAX;
	volatile int64_t x988 = INT64_MIN;

    t195 = (x985/((x986|x987)%x988));

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x989 = INT8_MAX;
	uint64_t x990 = 425046164100422LLU;
	volatile uint8_t x991 = 7U;
	int32_t x992 = 2;

    t196 = (x989/((x990|x991)%x992));

    if (t196 != 127LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x993 = INT8_MAX;
	int8_t x994 = INT8_MIN;
	int32_t x995 = 28016;
	volatile uint32_t x996 = UINT32_MAX;
	static uint32_t t197 = 71U;

    t197 = (x993/((x994|x995)%x996));

    if (t197 != 0U) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x1001 = INT32_MIN;
	static volatile uint8_t x1002 = UINT8_MAX;
	uint64_t x1003 = 33020407993610769LLU;
	uint32_t x1004 = 11377527U;
	volatile uint64_t t198 = 756577794522932LLU;

    t198 = (x1001/((x1002|x1003)%x1004));

    if (t198 != 1994699981645LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x1005 = 515;
	int8_t x1006 = INT8_MIN;
	static uint16_t x1007 = 21439U;
	volatile uint8_t x1008 = 2U;
	volatile int32_t t199 = -3325027;

    t199 = (x1005/((x1006|x1007)%x1008));

    if (t199 != -515) { NG(); } else { ; }
	
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

