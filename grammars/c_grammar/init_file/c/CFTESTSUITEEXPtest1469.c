
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

uint64_t x3 = UINT64_MAX;
int32_t x6 = INT32_MAX;
int16_t x7 = INT16_MIN;
static int64_t x11 = INT64_MIN;
uint16_t x14 = 185U;
uint64_t x16 = UINT64_MAX;
uint16_t x17 = UINT16_MAX;
int64_t x18 = INT64_MIN;
int64_t x26 = INT64_MIN;
volatile int16_t x30 = INT16_MIN;
volatile uint64_t x33 = 53361599559LLU;
static int8_t x34 = INT8_MAX;
uint8_t x40 = 68U;
int16_t x52 = INT16_MIN;
int8_t x53 = INT8_MAX;
static int64_t x58 = 4245161886373LL;
volatile int64_t t14 = 58206728LL;
int32_t t17 = -43;
int8_t x87 = -6;
static int64_t x93 = INT64_MAX;
int64_t x97 = -3101929095118LL;
static int8_t x101 = -52;
volatile int32_t t25 = 162058116;
uint64_t x111 = 265LLU;
int64_t t28 = -7157746LL;
uint64_t x121 = UINT64_MAX;
uint64_t x122 = 349903LLU;
uint8_t x129 = UINT8_MAX;
int32_t x134 = INT32_MIN;
volatile uint64_t x141 = 1419656407508968521LLU;
int64_t x145 = INT64_MIN;
volatile int32_t t42 = 2363;
int8_t x173 = INT8_MIN;
int8_t x175 = INT8_MIN;
int8_t x180 = INT8_MIN;
volatile int32_t x181 = INT32_MAX;
volatile int16_t x183 = INT16_MIN;
uint16_t x184 = 191U;
static int32_t t47 = 47919;
int16_t x198 = INT16_MIN;
uint64_t x201 = UINT64_MAX;
volatile uint64_t t50 = UINT64_MAX;
int32_t x205 = INT32_MIN;
uint8_t x216 = UINT8_MAX;
uint16_t x219 = 5503U;
uint8_t x221 = 28U;
uint64_t x222 = 434409LLU;
volatile int16_t x226 = -1;
int8_t x228 = INT8_MIN;
int32_t t56 = 692;
int8_t x234 = -15;
uint16_t x243 = UINT16_MAX;
volatile int32_t t61 = 1;
volatile int8_t x250 = INT8_MIN;
static uint64_t x253 = UINT64_MAX;
int8_t x254 = -6;
int16_t x255 = INT16_MIN;
uint64_t x258 = UINT64_MAX;
uint8_t x260 = 1U;
int64_t x267 = INT64_MIN;
volatile int64_t x270 = -1LL;
int8_t x272 = -1;
static int64_t t67 = 2598610265025LL;
int8_t x274 = INT8_MIN;
static int16_t x281 = -3;
int8_t x291 = INT8_MAX;
int64_t x297 = -63642LL;
volatile int16_t x298 = 16222;
volatile int32_t x300 = INT32_MAX;
int64_t t74 = 125222LL;
volatile int8_t x301 = INT8_MIN;
volatile int32_t t76 = -191552;
int64_t x310 = INT64_MIN;
uint16_t x318 = 468U;
int32_t x321 = -1;
static volatile int16_t x323 = -1;
int16_t x325 = 5;
volatile int32_t t82 = -428718948;
static uint32_t x338 = UINT32_MAX;
static int8_t x345 = -1;
volatile int32_t x350 = INT32_MAX;
static volatile int32_t t87 = -3463095;
int64_t x356 = INT64_MIN;
uint8_t x358 = 63U;
uint64_t x368 = 6438154838277LLU;
volatile uint32_t x374 = 973U;
int32_t x384 = -2;
volatile uint32_t t95 = 21U;
static volatile int8_t x386 = 0;
static uint8_t x390 = 111U;
int32_t t97 = 34582;
static uint8_t x395 = 111U;
volatile uint32_t t98 = 16U;
int64_t x401 = INT64_MAX;
int8_t x408 = -1;
static int64_t x412 = INT64_MIN;
volatile uint64_t t103 = UINT64_MAX;
int16_t x418 = INT16_MAX;
static int64_t x421 = INT64_MAX;
int32_t x422 = INT32_MIN;
uint8_t x437 = 15U;
uint32_t x438 = 306U;
int64_t x441 = INT64_MAX;
int64_t x449 = -541LL;
int32_t x454 = INT32_MIN;
volatile uint16_t x457 = 13U;
int64_t x458 = INT64_MIN;
static volatile uint16_t x460 = 11U;
static volatile int32_t t114 = -8239;
volatile int32_t x461 = INT32_MIN;
static volatile int64_t x464 = INT64_MIN;
static volatile uint8_t x470 = 4U;
volatile int32_t x472 = -1;
volatile int64_t t117 = 1887281LL;
static uint64_t x473 = UINT64_MAX;
static volatile int16_t x476 = INT16_MIN;
int32_t x477 = -1;
int32_t x484 = -1;
uint64_t x487 = UINT64_MAX;
int64_t t121 = 1367862078340596LL;
int32_t t122 = -25785;
static int8_t x493 = -1;
uint8_t x496 = 61U;
uint16_t x499 = UINT16_MAX;
uint32_t t125 = 1120828570U;
static volatile int8_t x508 = -54;
int32_t x510 = INT32_MIN;
volatile int64_t t127 = -1429491201133014LL;
volatile int64_t x514 = INT64_MIN;
volatile int64_t t129 = INT64_MAX;
int32_t x530 = -1;
volatile int64_t x532 = -22077643306958011LL;
volatile int64_t t133 = -1LL;
uint8_t x543 = UINT8_MAX;
volatile int32_t t137 = -216260;
int8_t x553 = 1;
static int32_t x556 = 2538116;
int8_t x559 = INT8_MIN;
static int64_t x565 = INT64_MIN;
int8_t x569 = INT8_MIN;
int8_t x570 = -48;
static int64_t x573 = -3619167646633363410LL;
int64_t x584 = 1645741LL;
uint8_t x588 = 2U;
uint16_t x590 = 193U;
static volatile uint32_t t147 = 12U;
int32_t t148 = 3761135;
int16_t x604 = -11;
int8_t x606 = INT8_MIN;
int64_t t151 = 377LL;
uint64_t x613 = 30540386687704668LLU;
volatile int64_t x616 = -7299LL;
int16_t x621 = -727;
uint16_t x627 = UINT16_MAX;
int64_t x631 = -1LL;
int32_t t157 = 1;
uint8_t x635 = UINT8_MAX;
int64_t x642 = INT64_MIN;
int64_t x644 = INT64_MIN;
uint64_t x648 = 1854391603018339492LLU;
int64_t x651 = INT64_MIN;
uint64_t x662 = UINT64_MAX;
volatile uint8_t x670 = UINT8_MAX;
uint32_t x672 = 2908120U;
int8_t x686 = INT8_MIN;
uint8_t x693 = 0U;
int16_t x694 = INT16_MAX;
uint8_t x695 = UINT8_MAX;
volatile int32_t t173 = 69254971;
uint32_t x699 = 655437777U;
static int16_t x707 = INT16_MIN;
volatile int16_t x720 = -1;
volatile int8_t x723 = -7;
static volatile int32_t t181 = -21448;
int8_t x733 = INT8_MIN;
int32_t x734 = INT32_MIN;
int8_t x736 = INT8_MIN;
int16_t x738 = 355;
uint64_t x760 = 413LLU;
uint8_t x762 = UINT8_MAX;
int32_t x772 = INT32_MIN;
static int64_t t193 = 179700760330426157LL;
int8_t x785 = INT8_MAX;
static int64_t x786 = INT64_MIN;
int32_t t196 = -49;
int8_t x792 = INT8_MIN;
static uint32_t t197 = 978406884U;
static int16_t x798 = 4037;


void f0(void) {
    	static int8_t x1 = INT8_MIN;
	uint16_t x2 = UINT16_MAX;
	static uint8_t x4 = 24U;
	static int32_t t0 = -96361;

    t0 = (x1|((x2==x3)!=x4));

    if (t0 != -127) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = 1081747U;
	int8_t x8 = -14;
	uint32_t t1 = 6U;

    t1 = (x5|((x6==x7)!=x8));

    if (t1 != 1081747U) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MIN;
	int64_t x10 = INT64_MIN;
	int8_t x12 = INT8_MIN;
	int32_t t2 = 176;

    t2 = (x9|((x10==x11)!=x12));

    if (t2 != -2147483647) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = 338LLU;
	int64_t x15 = 4833643073775131LL;
	volatile uint64_t t3 = 39563496830765LLU;

    t3 = (x13|((x14==x15)!=x16));

    if (t3 != 339LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x19 = 50U;
	int64_t x20 = -2749116LL;
	volatile int32_t t4 = 48874;

    t4 = (x17|((x18==x19)!=x20));

    if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = -46LL;
	int16_t x22 = 36;
	int8_t x23 = INT8_MIN;
	int8_t x24 = INT8_MAX;
	int64_t t5 = 190LL;

    t5 = (x21|((x22==x23)!=x24));

    if (t5 != -45LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x25 = 15063305U;
	static int64_t x27 = -1LL;
	int64_t x28 = 3776874962495717331LL;
	uint32_t t6 = 147274U;

    t6 = (x25|((x26==x27)!=x28));

    if (t6 != 15063305U) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x29 = INT16_MIN;
	uint8_t x31 = 25U;
	int16_t x32 = 27;
	volatile int32_t t7 = 55;

    t7 = (x29|((x30==x31)!=x32));

    if (t7 != -32767) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint32_t x35 = 235U;
	static int32_t x36 = -1;
	static volatile uint64_t t8 = 438103893335406350LLU;

    t8 = (x33|((x34==x35)!=x36));

    if (t8 != 53361599559LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x37 = 0;
	int64_t x38 = INT64_MAX;
	int8_t x39 = INT8_MIN;
	int32_t t9 = -8100855;

    t9 = (x37|((x38==x39)!=x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x41 = 8898U;
	int8_t x42 = -3;
	uint64_t x43 = UINT64_MAX;
	uint32_t x44 = 637U;
	volatile int32_t t10 = -26;

    t10 = (x41|((x42==x43)!=x44));

    if (t10 != 8899) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = INT32_MIN;
	int8_t x46 = INT8_MIN;
	uint64_t x47 = UINT64_MAX;
	int32_t x48 = INT32_MIN;
	volatile int32_t t11 = -186992;

    t11 = (x45|((x46==x47)!=x48));

    if (t11 != -2147483647) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x49 = 6306171814LLU;
	uint64_t x50 = 1016763731144611274LLU;
	int64_t x51 = -130463203LL;
	uint64_t t12 = 992987889156535LLU;

    t12 = (x49|((x50==x51)!=x52));

    if (t12 != 6306171815LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int16_t x54 = 349;
	int64_t x55 = -1LL;
	uint64_t x56 = UINT64_MAX;
	int32_t t13 = 93553;

    t13 = (x53|((x54==x55)!=x56));

    if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = -1LL;
	uint16_t x59 = 1494U;
	int32_t x60 = -54;

    t14 = (x57|((x58==x59)!=x60));

    if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = INT8_MIN;
	static volatile int16_t x62 = INT16_MAX;
	int8_t x63 = INT8_MIN;
	volatile int32_t x64 = -1;
	volatile int32_t t15 = -525747568;

    t15 = (x61|((x62==x63)!=x64));

    if (t15 != -127) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x65 = 27U;
	static uint64_t x66 = 4551681012006266967LLU;
	volatile int8_t x67 = -1;
	uint16_t x68 = UINT16_MAX;
	volatile int32_t t16 = -340;

    t16 = (x65|((x66==x67)!=x68));

    if (t16 != 27) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x69 = 204U;
	int32_t x70 = INT32_MAX;
	uint16_t x71 = 11593U;
	int32_t x72 = 560;

    t17 = (x69|((x70==x71)!=x72));

    if (t17 != 205) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x73 = 7U;
	int64_t x74 = 1358567789228757LL;
	uint32_t x75 = 47906U;
	volatile uint8_t x76 = 3U;
	volatile int32_t t18 = 0;

    t18 = (x73|((x74==x75)!=x76));

    if (t18 != 7) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x77 = 8159LLU;
	uint8_t x78 = UINT8_MAX;
	int64_t x79 = INT64_MIN;
	static int16_t x80 = -34;
	static volatile uint64_t t19 = 12785608961LLU;

    t19 = (x77|((x78==x79)!=x80));

    if (t19 != 8159LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x81 = INT16_MIN;
	int64_t x82 = INT64_MAX;
	int64_t x83 = 8920275224918832LL;
	uint32_t x84 = UINT32_MAX;
	int32_t t20 = 3096040;

    t20 = (x81|((x82==x83)!=x84));

    if (t20 != -32767) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = INT16_MIN;
	int32_t x86 = INT32_MIN;
	uint8_t x88 = 13U;
	volatile int32_t t21 = -1704;

    t21 = (x85|((x86==x87)!=x88));

    if (t21 != -32767) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x89 = 1U;
	uint32_t x90 = 493U;
	int8_t x91 = -1;
	static int32_t x92 = INT32_MIN;
	volatile int32_t t22 = 0;

    t22 = (x89|((x90==x91)!=x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x94 = 12U;
	int32_t x95 = -1;
	int32_t x96 = 405734838;
	static int64_t t23 = INT64_MAX;

    t23 = (x93|((x94==x95)!=x96));

    if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x98 = -1;
	volatile int64_t x99 = -1LL;
	volatile int16_t x100 = 0;
	volatile int64_t t24 = 11LL;

    t24 = (x97|((x98==x99)!=x100));

    if (t24 != -3101929095117LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x102 = -1;
	uint64_t x103 = 598193739520LLU;
	int32_t x104 = 6224204;

    t25 = (x101|((x102==x103)!=x104));

    if (t25 != -51) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = INT64_MAX;
	uint64_t x106 = 6990992409081117LLU;
	volatile int16_t x107 = 1;
	static int32_t x108 = -42;
	int64_t t26 = INT64_MAX;

    t26 = (x105|((x106==x107)!=x108));

    if (t26 != INT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x109 = UINT8_MAX;
	volatile int16_t x110 = INT16_MAX;
	volatile uint16_t x112 = 12U;
	int32_t t27 = -51737121;

    t27 = (x109|((x110==x111)!=x112));

    if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = -1LL;
	static int64_t x114 = -200068149LL;
	int64_t x115 = -1LL;
	int32_t x116 = INT32_MAX;

    t28 = (x113|((x114==x115)!=x116));

    if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int64_t x117 = INT64_MIN;
	int8_t x118 = -1;
	int64_t x119 = INT64_MIN;
	static int64_t x120 = -1LL;
	volatile int64_t t29 = 88671680002814LL;

    t29 = (x117|((x118==x119)!=x120));

    if (t29 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x123 = 189269511822086810LL;
	uint32_t x124 = 795U;
	static uint64_t t30 = UINT64_MAX;

    t30 = (x121|((x122==x123)!=x124));

    if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x125 = 4U;
	static int16_t x126 = -118;
	static volatile int16_t x127 = INT16_MAX;
	static int32_t x128 = 24742394;
	int32_t t31 = 184293561;

    t31 = (x125|((x126==x127)!=x128));

    if (t31 != 5) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int32_t x130 = -1;
	uint32_t x131 = 117923180U;
	static uint8_t x132 = UINT8_MAX;
	volatile int32_t t32 = -835;

    t32 = (x129|((x130==x131)!=x132));

    if (t32 != 255) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x133 = INT8_MIN;
	int8_t x135 = INT8_MAX;
	int32_t x136 = INT32_MAX;
	volatile int32_t t33 = 786526517;

    t33 = (x133|((x134==x135)!=x136));

    if (t33 != -127) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int64_t x137 = INT64_MIN;
	int32_t x138 = INT32_MAX;
	int16_t x139 = -1;
	int64_t x140 = INT64_MIN;
	volatile int64_t t34 = -956037656827LL;

    t34 = (x137|((x138==x139)!=x140));

    if (t34 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static int64_t x142 = INT64_MAX;
	static int64_t x143 = INT64_MAX;
	uint32_t x144 = 0U;
	uint64_t t35 = 26080LLU;

    t35 = (x141|((x142==x143)!=x144));

    if (t35 != 1419656407508968521LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x146 = INT16_MAX;
	int16_t x147 = -213;
	static int8_t x148 = -1;
	volatile int64_t t36 = 6571LL;

    t36 = (x145|((x146==x147)!=x148));

    if (t36 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x149 = -1;
	int16_t x150 = -1;
	volatile int16_t x151 = INT16_MAX;
	volatile int64_t x152 = -1LL;
	volatile int32_t t37 = -738562725;

    t37 = (x149|((x150==x151)!=x152));

    if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint16_t x153 = 10018U;
	uint16_t x154 = UINT16_MAX;
	int64_t x155 = INT64_MAX;
	int16_t x156 = INT16_MIN;
	volatile int32_t t38 = 9;

    t38 = (x153|((x154==x155)!=x156));

    if (t38 != 10019) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x157 = -90647859;
	int8_t x158 = INT8_MIN;
	uint16_t x159 = UINT16_MAX;
	volatile int32_t x160 = INT32_MIN;
	int32_t t39 = -1259598;

    t39 = (x157|((x158==x159)!=x160));

    if (t39 != -90647859) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x161 = INT64_MIN;
	int16_t x162 = INT16_MIN;
	static uint8_t x163 = 1U;
	int64_t x164 = INT64_MIN;
	int64_t t40 = 213511LL;

    t40 = (x161|((x162==x163)!=x164));

    if (t40 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x165 = INT8_MAX;
	int16_t x166 = -16;
	int32_t x167 = -1;
	int64_t x168 = -1LL;
	volatile int32_t t41 = -1;

    t41 = (x165|((x166==x167)!=x168));

    if (t41 != 127) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x169 = -1;
	uint8_t x170 = 52U;
	int8_t x171 = INT8_MIN;
	volatile int8_t x172 = 0;

    t42 = (x169|((x170==x171)!=x172));

    if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x174 = 13U;
	uint64_t x176 = 1308294604869LLU;
	int32_t t43 = 108329709;

    t43 = (x173|((x174==x175)!=x176));

    if (t43 != -127) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x177 = INT32_MAX;
	static uint64_t x178 = 204374706775599LLU;
	uint32_t x179 = UINT32_MAX;
	volatile int32_t t44 = INT32_MAX;

    t44 = (x177|((x178==x179)!=x180));

    if (t44 != INT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int32_t x182 = -1;
	int32_t t45 = INT32_MAX;

    t45 = (x181|((x182==x183)!=x184));

    if (t45 != INT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x185 = INT32_MAX;
	static int64_t x186 = -953LL;
	int8_t x187 = INT8_MIN;
	int64_t x188 = INT64_MAX;
	int32_t t46 = INT32_MAX;

    t46 = (x185|((x186==x187)!=x188));

    if (t46 != INT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x189 = 61418;
	static int32_t x190 = INT32_MIN;
	int32_t x191 = INT32_MIN;
	static volatile int32_t x192 = INT32_MAX;

    t47 = (x189|((x190==x191)!=x192));

    if (t47 != 61419) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x193 = -2053368980487629LL;
	int8_t x194 = INT8_MIN;
	static int8_t x195 = INT8_MIN;
	volatile uint32_t x196 = UINT32_MAX;
	volatile int64_t t48 = 28174696814368818LL;

    t48 = (x193|((x194==x195)!=x196));

    if (t48 != -2053368980487629LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint16_t x197 = UINT16_MAX;
	static volatile int8_t x199 = INT8_MAX;
	int32_t x200 = INT32_MIN;
	static volatile int32_t t49 = 886;

    t49 = (x197|((x198==x199)!=x200));

    if (t49 != 65535) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x202 = INT16_MIN;
	volatile uint32_t x203 = UINT32_MAX;
	int8_t x204 = -11;

    t50 = (x201|((x202==x203)!=x204));

    if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x206 = INT16_MIN;
	int64_t x207 = -4LL;
	int16_t x208 = INT16_MIN;
	volatile int32_t t51 = 3929512;

    t51 = (x205|((x206==x207)!=x208));

    if (t51 != -2147483647) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = -1LL;
	static int16_t x210 = INT16_MIN;
	uint16_t x211 = 29992U;
	int16_t x212 = 20;
	static int64_t t52 = -113929251705LL;

    t52 = (x209|((x210==x211)!=x212));

    if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x213 = INT16_MAX;
	volatile uint32_t x214 = 1783237U;
	int16_t x215 = -1;
	volatile int32_t t53 = -6;

    t53 = (x213|((x214==x215)!=x216));

    if (t53 != 32767) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x217 = INT8_MIN;
	uint8_t x218 = 3U;
	int8_t x220 = -3;
	volatile int32_t t54 = -1;

    t54 = (x217|((x218==x219)!=x220));

    if (t54 != -127) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x223 = INT32_MAX;
	volatile uint8_t x224 = UINT8_MAX;
	volatile int32_t t55 = 946465365;

    t55 = (x221|((x222==x223)!=x224));

    if (t55 != 29) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x225 = -3;
	int32_t x227 = INT32_MAX;

    t56 = (x225|((x226==x227)!=x228));

    if (t56 != -3) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x229 = INT64_MAX;
	int8_t x230 = 0;
	static int8_t x231 = 1;
	volatile uint16_t x232 = 1U;
	volatile int64_t t57 = INT64_MAX;

    t57 = (x229|((x230==x231)!=x232));

    if (t57 != INT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x233 = -13;
	int32_t x235 = -53682971;
	uint8_t x236 = 1U;
	static volatile int32_t t58 = 4;

    t58 = (x233|((x234==x235)!=x236));

    if (t58 != -13) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint16_t x237 = UINT16_MAX;
	int64_t x238 = -55567957667LL;
	int8_t x239 = INT8_MIN;
	uint64_t x240 = 15068LLU;
	static volatile int32_t t59 = -687981;

    t59 = (x237|((x238==x239)!=x240));

    if (t59 != 65535) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x241 = INT64_MIN;
	int8_t x242 = 1;
	static int64_t x244 = INT64_MIN;
	int64_t t60 = -60251448429LL;

    t60 = (x241|((x242==x243)!=x244));

    if (t60 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x245 = -1;
	int16_t x246 = INT16_MIN;
	static int64_t x247 = -1LL;
	int8_t x248 = -39;

    t61 = (x245|((x246==x247)!=x248));

    if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint32_t x249 = UINT32_MAX;
	int64_t x251 = INT64_MIN;
	int64_t x252 = INT64_MAX;
	uint32_t t62 = UINT32_MAX;

    t62 = (x249|((x250==x251)!=x252));

    if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x256 = INT16_MIN;
	uint64_t t63 = UINT64_MAX;

    t63 = (x253|((x254==x255)!=x256));

    if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t x257 = -3520;
	int64_t x259 = INT64_MAX;
	static volatile int32_t t64 = -829;

    t64 = (x257|((x258==x259)!=x260));

    if (t64 != -3519) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x261 = -1LL;
	int16_t x262 = -1;
	volatile uint32_t x263 = UINT32_MAX;
	uint64_t x264 = UINT64_MAX;
	int64_t t65 = 4500LL;

    t65 = (x261|((x262==x263)!=x264));

    if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x265 = -1;
	volatile int8_t x266 = -1;
	int16_t x268 = -6;
	volatile int32_t t66 = 50;

    t66 = (x265|((x266==x267)!=x268));

    if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x269 = 5112925214858LL;
	int32_t x271 = INT32_MAX;

    t67 = (x269|((x270==x271)!=x272));

    if (t67 != 5112925214859LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x273 = 1119421243301LLU;
	int8_t x275 = 0;
	uint32_t x276 = 5847576U;
	static uint64_t t68 = 74792106LLU;

    t68 = (x273|((x274==x275)!=x276));

    if (t68 != 1119421243301LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x277 = 451;
	uint8_t x278 = UINT8_MAX;
	uint32_t x279 = 24163U;
	int64_t x280 = -1LL;
	int32_t t69 = 331842776;

    t69 = (x277|((x278==x279)!=x280));

    if (t69 != 451) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x282 = INT16_MIN;
	volatile int64_t x283 = -30231957LL;
	static volatile uint8_t x284 = 70U;
	static int32_t t70 = 21666774;

    t70 = (x281|((x282==x283)!=x284));

    if (t70 != -3) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x285 = -1;
	uint32_t x286 = UINT32_MAX;
	int8_t x287 = INT8_MAX;
	int8_t x288 = INT8_MIN;
	volatile int32_t t71 = 123874337;

    t71 = (x285|((x286==x287)!=x288));

    if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x289 = 21;
	uint32_t x290 = 1891U;
	int8_t x292 = INT8_MIN;
	static volatile int32_t t72 = 957804;

    t72 = (x289|((x290==x291)!=x292));

    if (t72 != 21) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x293 = 38964U;
	int32_t x294 = INT32_MAX;
	int64_t x295 = INT64_MIN;
	uint16_t x296 = 1U;
	static volatile uint32_t t73 = 11806884U;

    t73 = (x293|((x294==x295)!=x296));

    if (t73 != 38965U) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x299 = -13100264;

    t74 = (x297|((x298==x299)!=x300));

    if (t74 != -63641LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile uint8_t x302 = UINT8_MAX;
	volatile int32_t x303 = INT32_MAX;
	int8_t x304 = INT8_MAX;
	int32_t t75 = -58290599;

    t75 = (x301|((x302==x303)!=x304));

    if (t75 != -127) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x305 = INT32_MIN;
	uint8_t x306 = 17U;
	volatile uint64_t x307 = UINT64_MAX;
	int16_t x308 = INT16_MIN;

    t76 = (x305|((x306==x307)!=x308));

    if (t76 != -2147483647) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = -1;
	uint64_t x311 = 617682014633939LLU;
	static uint16_t x312 = 26U;
	volatile int32_t t77 = -565;

    t77 = (x309|((x310==x311)!=x312));

    if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x313 = UINT64_MAX;
	int16_t x314 = -1;
	volatile int16_t x315 = -3585;
	static int32_t x316 = -30696;
	static uint64_t t78 = UINT64_MAX;

    t78 = (x313|((x314==x315)!=x316));

    if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint8_t x317 = UINT8_MAX;
	static int64_t x319 = INT64_MIN;
	int64_t x320 = INT64_MIN;
	int32_t t79 = -136803;

    t79 = (x317|((x318==x319)!=x320));

    if (t79 != 255) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint16_t x322 = UINT16_MAX;
	volatile int8_t x324 = -30;
	volatile int32_t t80 = -362450;

    t80 = (x321|((x322==x323)!=x324));

    if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x326 = -287400379576471372LL;
	static int16_t x327 = INT16_MIN;
	uint64_t x328 = 1338948LLU;
	volatile int32_t t81 = 3140838;

    t81 = (x325|((x326==x327)!=x328));

    if (t81 != 5) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x329 = 2153U;
	int8_t x330 = INT8_MIN;
	uint16_t x331 = 4119U;
	int8_t x332 = INT8_MIN;

    t82 = (x329|((x330==x331)!=x332));

    if (t82 != 2153) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x333 = INT32_MIN;
	int8_t x334 = INT8_MAX;
	int16_t x335 = 0;
	uint32_t x336 = 31U;
	int32_t t83 = 0;

    t83 = (x333|((x334==x335)!=x336));

    if (t83 != -2147483647) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint16_t x337 = UINT16_MAX;
	uint8_t x339 = 81U;
	int8_t x340 = INT8_MAX;
	volatile int32_t t84 = -8;

    t84 = (x337|((x338==x339)!=x340));

    if (t84 != 65535) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x341 = UINT64_MAX;
	static int8_t x342 = 6;
	static int16_t x343 = INT16_MIN;
	int32_t x344 = 780106496;
	volatile uint64_t t85 = UINT64_MAX;

    t85 = (x341|((x342==x343)!=x344));

    if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x346 = INT8_MIN;
	int8_t x347 = INT8_MAX;
	int16_t x348 = INT16_MIN;
	static int32_t t86 = -4018;

    t86 = (x345|((x346==x347)!=x348));

    if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x349 = -26;
	static uint8_t x351 = 24U;
	int8_t x352 = 50;

    t87 = (x349|((x350==x351)!=x352));

    if (t87 != -25) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = INT8_MIN;
	volatile int64_t x354 = INT64_MAX;
	int64_t x355 = INT64_MIN;
	static int32_t t88 = -23636;

    t88 = (x353|((x354==x355)!=x356));

    if (t88 != -127) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint16_t x357 = 10U;
	int64_t x359 = 0LL;
	uint32_t x360 = 3166476U;
	int32_t t89 = 78471;

    t89 = (x357|((x358==x359)!=x360));

    if (t89 != 11) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = INT8_MIN;
	uint32_t x362 = UINT32_MAX;
	int8_t x363 = -1;
	static uint8_t x364 = 1U;
	int32_t t90 = -2643829;

    t90 = (x361|((x362==x363)!=x364));

    if (t90 != -128) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x365 = INT32_MIN;
	int16_t x366 = -364;
	volatile uint32_t x367 = UINT32_MAX;
	volatile int32_t t91 = 27608950;

    t91 = (x365|((x366==x367)!=x368));

    if (t91 != -2147483647) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x369 = -1;
	int16_t x370 = 499;
	int16_t x371 = -1;
	int32_t x372 = INT32_MIN;
	int32_t t92 = 382;

    t92 = (x369|((x370==x371)!=x372));

    if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
    	static int32_t x373 = 7870;
	volatile int8_t x375 = INT8_MAX;
	static int16_t x376 = -1;
	static int32_t t93 = -172;

    t93 = (x373|((x374==x375)!=x376));

    if (t93 != 7871) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = -1;
	int16_t x378 = -1;
	uint16_t x379 = UINT16_MAX;
	uint64_t x380 = UINT64_MAX;
	int32_t t94 = -54865;

    t94 = (x377|((x378==x379)!=x380));

    if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint32_t x381 = 62025700U;
	int16_t x382 = -3;
	int16_t x383 = -1;

    t95 = (x381|((x382==x383)!=x384));

    if (t95 != 62025701U) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint8_t x385 = 8U;
	int8_t x387 = 0;
	uint32_t x388 = UINT32_MAX;
	int32_t t96 = 13;

    t96 = (x385|((x386==x387)!=x388));

    if (t96 != 9) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x389 = INT32_MIN;
	volatile uint8_t x391 = 1U;
	uint16_t x392 = 3116U;

    t97 = (x389|((x390==x391)!=x392));

    if (t97 != -2147483647) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x393 = 12U;
	int64_t x394 = INT64_MAX;
	uint8_t x396 = 0U;

    t98 = (x393|((x394==x395)!=x396));

    if (t98 != 12U) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x397 = 68714085LL;
	uint32_t x398 = UINT32_MAX;
	int32_t x399 = INT32_MIN;
	uint16_t x400 = UINT16_MAX;
	int64_t t99 = -34974869326094829LL;

    t99 = (x397|((x398==x399)!=x400));

    if (t99 != 68714085LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x402 = 118959736;
	int16_t x403 = -1;
	int32_t x404 = 27235;
	int64_t t100 = INT64_MAX;

    t100 = (x401|((x402==x403)!=x404));

    if (t100 != INT64_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x405 = 3U;
	uint32_t x406 = 10U;
	uint16_t x407 = 312U;
	int32_t t101 = 1;

    t101 = (x405|((x406==x407)!=x408));

    if (t101 != 3) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x409 = -1;
	int32_t x410 = 103702;
	volatile int16_t x411 = INT16_MIN;
	volatile int32_t t102 = 211904;

    t102 = (x409|((x410==x411)!=x412));

    if (t102 != -1) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint64_t x413 = UINT64_MAX;
	int64_t x414 = INT64_MIN;
	volatile uint64_t x415 = 1662001889554341082LLU;
	uint32_t x416 = 53U;

    t103 = (x413|((x414==x415)!=x416));

    if (t103 != UINT64_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x417 = -3;
	static int8_t x419 = -3;
	uint8_t x420 = UINT8_MAX;
	volatile int32_t t104 = 109320902;

    t104 = (x417|((x418==x419)!=x420));

    if (t104 != -3) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint8_t x423 = 13U;
	int32_t x424 = 2774114;
	int64_t t105 = INT64_MAX;

    t105 = (x421|((x422==x423)!=x424));

    if (t105 != INT64_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x425 = 1068U;
	int32_t x426 = -1;
	int64_t x427 = INT64_MAX;
	static uint8_t x428 = UINT8_MAX;
	int32_t t106 = -5;

    t106 = (x425|((x426==x427)!=x428));

    if (t106 != 1069) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x429 = 1680249908U;
	static int32_t x430 = INT32_MAX;
	uint8_t x431 = UINT8_MAX;
	int64_t x432 = INT64_MAX;
	uint32_t t107 = 77023320U;

    t107 = (x429|((x430==x431)!=x432));

    if (t107 != 1680249909U) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x433 = 20843102U;
	int64_t x434 = -2LL;
	uint16_t x435 = UINT16_MAX;
	int8_t x436 = -1;
	volatile uint32_t t108 = 31596U;

    t108 = (x433|((x434==x435)!=x436));

    if (t108 != 20843103U) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x439 = INT16_MIN;
	int8_t x440 = INT8_MIN;
	int32_t t109 = -1;

    t109 = (x437|((x438==x439)!=x440));

    if (t109 != 15) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x442 = INT64_MIN;
	uint8_t x443 = 83U;
	volatile int16_t x444 = INT16_MIN;
	volatile int64_t t110 = INT64_MAX;

    t110 = (x441|((x442==x443)!=x444));

    if (t110 != INT64_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x445 = INT8_MIN;
	volatile int16_t x446 = 0;
	uint16_t x447 = 2028U;
	int8_t x448 = -1;
	int32_t t111 = 5;

    t111 = (x445|((x446==x447)!=x448));

    if (t111 != -127) { NG(); } else { ; }
	
}

void f112(void) {
    	static int8_t x450 = -61;
	uint16_t x451 = UINT16_MAX;
	uint32_t x452 = 5388338U;
	static int64_t t112 = -3617460661002592973LL;

    t112 = (x449|((x450==x451)!=x452));

    if (t112 != -541LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x453 = INT8_MAX;
	uint64_t x455 = 51331LLU;
	static int8_t x456 = INT8_MIN;
	volatile int32_t t113 = -196;

    t113 = (x453|((x454==x455)!=x456));

    if (t113 != 127) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x459 = INT32_MIN;

    t114 = (x457|((x458==x459)!=x460));

    if (t114 != 13) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x462 = UINT32_MAX;
	int32_t x463 = INT32_MIN;
	static int32_t t115 = -899;

    t115 = (x461|((x462==x463)!=x464));

    if (t115 != -2147483647) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x465 = 103U;
	int16_t x466 = INT16_MAX;
	int16_t x467 = -1;
	int64_t x468 = 3405457977579062909LL;
	volatile int32_t t116 = 118600242;

    t116 = (x465|((x466==x467)!=x468));

    if (t116 != 103) { NG(); } else { ; }
	
}

void f117(void) {
    	static int64_t x469 = 11353LL;
	uint64_t x471 = UINT64_MAX;

    t117 = (x469|((x470==x471)!=x472));

    if (t117 != 11353LL) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x474 = INT64_MAX;
	volatile int32_t x475 = -2443305;
	volatile uint64_t t118 = UINT64_MAX;

    t118 = (x473|((x474==x475)!=x476));

    if (t118 != UINT64_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x478 = 12U;
	int64_t x479 = INT64_MIN;
	int16_t x480 = 21;
	volatile int32_t t119 = -16292414;

    t119 = (x477|((x478==x479)!=x480));

    if (t119 != -1) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint8_t x481 = 84U;
	int8_t x482 = -1;
	int64_t x483 = INT64_MIN;
	int32_t t120 = 174456;

    t120 = (x481|((x482==x483)!=x484));

    if (t120 != 85) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x485 = -1LL;
	uint32_t x486 = 113U;
	uint32_t x488 = 141162U;

    t121 = (x485|((x486==x487)!=x488));

    if (t121 != -1LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x489 = 15U;
	static int64_t x490 = INT64_MAX;
	int32_t x491 = -15;
	volatile int8_t x492 = -1;

    t122 = (x489|((x490==x491)!=x492));

    if (t122 != 15) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x494 = INT64_MIN;
	volatile int8_t x495 = -42;
	int32_t t123 = -28647703;

    t123 = (x493|((x494==x495)!=x496));

    if (t123 != -1) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint32_t x497 = 5009U;
	int16_t x498 = INT16_MIN;
	int16_t x500 = INT16_MAX;
	volatile uint32_t t124 = 42U;

    t124 = (x497|((x498==x499)!=x500));

    if (t124 != 5009U) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x501 = 436453575U;
	volatile uint8_t x502 = 6U;
	int32_t x503 = INT32_MIN;
	uint64_t x504 = 8423035LLU;

    t125 = (x501|((x502==x503)!=x504));

    if (t125 != 436453575U) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x505 = INT8_MIN;
	int64_t x506 = INT64_MIN;
	volatile int16_t x507 = INT16_MIN;
	volatile int32_t t126 = -199681056;

    t126 = (x505|((x506==x507)!=x508));

    if (t126 != -127) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x509 = INT64_MIN;
	uint32_t x511 = 4631208U;
	int32_t x512 = INT32_MIN;

    t127 = (x509|((x510==x511)!=x512));

    if (t127 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x513 = 2003;
	int32_t x515 = INT32_MIN;
	volatile int8_t x516 = 0;
	volatile int32_t t128 = -21;

    t128 = (x513|((x514==x515)!=x516));

    if (t128 != 2003) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x517 = INT64_MAX;
	uint64_t x518 = 96145191774LLU;
	static uint64_t x519 = 0LLU;
	int16_t x520 = INT16_MAX;

    t129 = (x517|((x518==x519)!=x520));

    if (t129 != INT64_MAX) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x521 = 52;
	uint64_t x522 = 2454611183607848LLU;
	int32_t x523 = INT32_MIN;
	uint16_t x524 = 4724U;
	int32_t t130 = 5426;

    t130 = (x521|((x522==x523)!=x524));

    if (t130 != 53) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint16_t x525 = 13U;
	volatile int64_t x526 = INT64_MAX;
	static uint8_t x527 = 0U;
	static int32_t x528 = INT32_MIN;
	int32_t t131 = 4172;

    t131 = (x525|((x526==x527)!=x528));

    if (t131 != 13) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint64_t x529 = UINT64_MAX;
	int16_t x531 = 653;
	volatile uint64_t t132 = UINT64_MAX;

    t132 = (x529|((x530==x531)!=x532));

    if (t132 != UINT64_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x533 = -57486675LL;
	uint16_t x534 = UINT16_MAX;
	uint8_t x535 = 2U;
	volatile int64_t x536 = INT64_MIN;

    t133 = (x533|((x534==x535)!=x536));

    if (t133 != -57486675LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x537 = -166213006;
	int64_t x538 = INT64_MIN;
	static int8_t x539 = -1;
	static uint64_t x540 = UINT64_MAX;
	int32_t t134 = -1;

    t134 = (x537|((x538==x539)!=x540));

    if (t134 != -166213005) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x541 = 59;
	int32_t x542 = -1;
	volatile int32_t x544 = -1;
	volatile int32_t t135 = 0;

    t135 = (x541|((x542==x543)!=x544));

    if (t135 != 59) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint16_t x545 = 22U;
	static int64_t x546 = INT64_MIN;
	int8_t x547 = INT8_MIN;
	static volatile int32_t x548 = -1;
	volatile int32_t t136 = 123009000;

    t136 = (x545|((x546==x547)!=x548));

    if (t136 != 23) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x549 = UINT8_MAX;
	int8_t x550 = INT8_MAX;
	int8_t x551 = INT8_MAX;
	int16_t x552 = 1582;

    t137 = (x549|((x550==x551)!=x552));

    if (t137 != 255) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x554 = -1;
	int8_t x555 = -1;
	int32_t t138 = -399652;

    t138 = (x553|((x554==x555)!=x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t x557 = 0;
	int8_t x558 = INT8_MAX;
	int8_t x560 = INT8_MIN;
	volatile int32_t t139 = 16369812;

    t139 = (x557|((x558==x559)!=x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x561 = -1LL;
	volatile int8_t x562 = INT8_MIN;
	static volatile uint64_t x563 = 3522917759735LLU;
	int32_t x564 = INT32_MIN;
	volatile int64_t t140 = -2027010LL;

    t140 = (x561|((x562==x563)!=x564));

    if (t140 != -1LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x566 = -1;
	int32_t x567 = INT32_MIN;
	volatile int16_t x568 = INT16_MAX;
	volatile int64_t t141 = -213036768LL;

    t141 = (x565|((x566==x567)!=x568));

    if (t141 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x571 = INT16_MIN;
	uint32_t x572 = UINT32_MAX;
	volatile int32_t t142 = 71358722;

    t142 = (x569|((x570==x571)!=x572));

    if (t142 != -127) { NG(); } else { ; }
	
}

void f143(void) {
    	static int32_t x574 = 31160;
	uint32_t x575 = 976297505U;
	int8_t x576 = INT8_MAX;
	volatile int64_t t143 = 2156LL;

    t143 = (x573|((x574==x575)!=x576));

    if (t143 != -3619167646633363409LL) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint64_t x577 = 674466LLU;
	static int8_t x578 = -13;
	static int16_t x579 = -1;
	static uint8_t x580 = 58U;
	uint64_t t144 = 1LLU;

    t144 = (x577|((x578==x579)!=x580));

    if (t144 != 674467LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static int64_t x581 = INT64_MAX;
	uint8_t x582 = 33U;
	uint8_t x583 = 2U;
	volatile int64_t t145 = INT64_MAX;

    t145 = (x581|((x582==x583)!=x584));

    if (t145 != INT64_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x585 = -1LL;
	int16_t x586 = INT16_MIN;
	int8_t x587 = INT8_MIN;
	volatile int64_t t146 = -14792LL;

    t146 = (x585|((x586==x587)!=x588));

    if (t146 != -1LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint32_t x589 = 335102U;
	static uint16_t x591 = 986U;
	static volatile int8_t x592 = INT8_MAX;

    t147 = (x589|((x590==x591)!=x592));

    if (t147 != 335103U) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x593 = INT32_MIN;
	static volatile int64_t x594 = INT64_MAX;
	static int16_t x595 = INT16_MAX;
	volatile int32_t x596 = INT32_MIN;

    t148 = (x593|((x594==x595)!=x596));

    if (t148 != -2147483647) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x597 = -23361254047LL;
	volatile int32_t x598 = -689;
	volatile int16_t x599 = INT16_MAX;
	int16_t x600 = 4576;
	volatile int64_t t149 = 249707346818242173LL;

    t149 = (x597|((x598==x599)!=x600));

    if (t149 != -23361254047LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x601 = UINT16_MAX;
	uint32_t x602 = UINT32_MAX;
	uint16_t x603 = UINT16_MAX;
	volatile int32_t t150 = 653585;

    t150 = (x601|((x602==x603)!=x604));

    if (t150 != 65535) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x605 = -1LL;
	int32_t x607 = -216352904;
	uint8_t x608 = 91U;

    t151 = (x605|((x606==x607)!=x608));

    if (t151 != -1LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x609 = INT8_MIN;
	int64_t x610 = INT64_MIN;
	int8_t x611 = INT8_MAX;
	static uint32_t x612 = 44U;
	int32_t t152 = 105040921;

    t152 = (x609|((x610==x611)!=x612));

    if (t152 != -127) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x614 = INT64_MAX;
	int8_t x615 = 0;
	uint64_t t153 = 14673671LLU;

    t153 = (x613|((x614==x615)!=x616));

    if (t153 != 30540386687704669LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int8_t x617 = -5;
	static int64_t x618 = INT64_MIN;
	int8_t x619 = -12;
	static int8_t x620 = -1;
	int32_t t154 = 2218;

    t154 = (x617|((x618==x619)!=x620));

    if (t154 != -5) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x622 = UINT64_MAX;
	int32_t x623 = 2;
	int16_t x624 = INT16_MIN;
	int32_t t155 = 678764530;

    t155 = (x621|((x622==x623)!=x624));

    if (t155 != -727) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x625 = -1;
	int8_t x626 = INT8_MIN;
	int8_t x628 = INT8_MIN;
	static int32_t t156 = 3;

    t156 = (x625|((x626==x627)!=x628));

    if (t156 != -1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x629 = -1;
	int16_t x630 = -54;
	volatile int8_t x632 = INT8_MIN;

    t157 = (x629|((x630==x631)!=x632));

    if (t157 != -1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x633 = INT32_MIN;
	uint64_t x634 = 665521LLU;
	uint64_t x636 = 714415852112134LLU;
	volatile int32_t t158 = 777373;

    t158 = (x633|((x634==x635)!=x636));

    if (t158 != -2147483647) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x637 = 2486566U;
	int32_t x638 = -38;
	int32_t x639 = -1;
	int64_t x640 = 1357660783498755LL;
	uint32_t t159 = 673U;

    t159 = (x637|((x638==x639)!=x640));

    if (t159 != 2486567U) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x641 = 698U;
	uint8_t x643 = 11U;
	int32_t t160 = 509898;

    t160 = (x641|((x642==x643)!=x644));

    if (t160 != 699) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x645 = UINT8_MAX;
	volatile uint32_t x646 = 1451U;
	int8_t x647 = INT8_MIN;
	volatile int32_t t161 = 38106;

    t161 = (x645|((x646==x647)!=x648));

    if (t161 != 255) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = INT64_MAX;
	int16_t x650 = 2160;
	int32_t x652 = INT32_MIN;
	int64_t t162 = INT64_MAX;

    t162 = (x649|((x650==x651)!=x652));

    if (t162 != INT64_MAX) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int8_t x653 = -1;
	uint16_t x654 = 1U;
	int8_t x655 = INT8_MAX;
	static int32_t x656 = -23;
	static volatile int32_t t163 = 69043999;

    t163 = (x653|((x654==x655)!=x656));

    if (t163 != -1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x657 = INT16_MIN;
	uint64_t x658 = 7536553255LLU;
	uint32_t x659 = 241268U;
	volatile int64_t x660 = INT64_MIN;
	int32_t t164 = 15;

    t164 = (x657|((x658==x659)!=x660));

    if (t164 != -32767) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = -1LL;
	int64_t x663 = INT64_MAX;
	static volatile uint8_t x664 = 4U;
	int64_t t165 = 144010599656080317LL;

    t165 = (x661|((x662==x663)!=x664));

    if (t165 != -1LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x665 = -16688695076359865LL;
	static int64_t x666 = -11124934LL;
	uint16_t x667 = 92U;
	uint8_t x668 = 11U;
	volatile int64_t t166 = -1632198304558130LL;

    t166 = (x665|((x666==x667)!=x668));

    if (t166 != -16688695076359865LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x669 = 366173112U;
	uint16_t x671 = UINT16_MAX;
	uint32_t t167 = 50U;

    t167 = (x669|((x670==x671)!=x672));

    if (t167 != 366173113U) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint16_t x673 = UINT16_MAX;
	int64_t x674 = INT64_MIN;
	int32_t x675 = -433;
	int8_t x676 = -1;
	static int32_t t168 = -4520278;

    t168 = (x673|((x674==x675)!=x676));

    if (t168 != 65535) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x677 = 100U;
	static volatile int8_t x678 = INT8_MIN;
	uint16_t x679 = 0U;
	int32_t x680 = INT32_MIN;
	volatile uint32_t t169 = 57U;

    t169 = (x677|((x678==x679)!=x680));

    if (t169 != 101U) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x681 = 57802424233092296LLU;
	static int8_t x682 = INT8_MAX;
	int64_t x683 = 1164844887674LL;
	int16_t x684 = INT16_MIN;
	uint64_t t170 = 5626832383LLU;

    t170 = (x681|((x682==x683)!=x684));

    if (t170 != 57802424233092297LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x685 = INT64_MIN;
	volatile int64_t x687 = INT64_MIN;
	int8_t x688 = INT8_MIN;
	volatile int64_t t171 = 267362610476LL;

    t171 = (x685|((x686==x687)!=x688));

    if (t171 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint32_t x689 = 0U;
	int32_t x690 = -1;
	int8_t x691 = 1;
	int8_t x692 = INT8_MIN;
	volatile uint32_t t172 = 36029664U;

    t172 = (x689|((x690==x691)!=x692));

    if (t172 != 1U) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x696 = INT32_MIN;

    t173 = (x693|((x694==x695)!=x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x697 = -1;
	static int16_t x698 = INT16_MIN;
	uint64_t x700 = 3123239910571LLU;
	int32_t t174 = -190;

    t174 = (x697|((x698==x699)!=x700));

    if (t174 != -1) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x701 = INT8_MIN;
	static int16_t x702 = INT16_MIN;
	uint64_t x703 = 19624148016600456LLU;
	int64_t x704 = INT64_MAX;
	int32_t t175 = -399;

    t175 = (x701|((x702==x703)!=x704));

    if (t175 != -127) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x705 = UINT8_MAX;
	int32_t x706 = 189742;
	int8_t x708 = INT8_MAX;
	int32_t t176 = -1;

    t176 = (x705|((x706==x707)!=x708));

    if (t176 != 255) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x709 = INT64_MAX;
	int8_t x710 = -1;
	uint32_t x711 = 2711U;
	static int32_t x712 = INT32_MAX;
	static volatile int64_t t177 = INT64_MAX;

    t177 = (x709|((x710==x711)!=x712));

    if (t177 != INT64_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x713 = 0;
	volatile int16_t x714 = 1;
	int8_t x715 = INT8_MIN;
	int32_t x716 = INT32_MIN;
	volatile int32_t t178 = 136291016;

    t178 = (x713|((x714==x715)!=x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x717 = INT8_MIN;
	volatile uint8_t x718 = 0U;
	static uint8_t x719 = 0U;
	static int32_t t179 = -24677;

    t179 = (x717|((x718==x719)!=x720));

    if (t179 != -127) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x721 = -90;
	int32_t x722 = INT32_MAX;
	uint8_t x724 = UINT8_MAX;
	volatile int32_t t180 = 1482;

    t180 = (x721|((x722==x723)!=x724));

    if (t180 != -89) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x725 = UINT8_MAX;
	int8_t x726 = -1;
	int32_t x727 = INT32_MIN;
	uint64_t x728 = 93422700548105LLU;

    t181 = (x725|((x726==x727)!=x728));

    if (t181 != 255) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint8_t x729 = 4U;
	int32_t x730 = -1;
	int64_t x731 = INT64_MIN;
	static uint32_t x732 = 7U;
	int32_t t182 = -1664;

    t182 = (x729|((x730==x731)!=x732));

    if (t182 != 5) { NG(); } else { ; }
	
}

void f183(void) {
    	static int64_t x735 = INT64_MIN;
	static volatile int32_t t183 = 18440;

    t183 = (x733|((x734==x735)!=x736));

    if (t183 != -127) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x737 = 879707779372LLU;
	int64_t x739 = INT64_MIN;
	int16_t x740 = INT16_MIN;
	uint64_t t184 = 6760LLU;

    t184 = (x737|((x738==x739)!=x740));

    if (t184 != 879707779373LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x741 = INT8_MIN;
	int64_t x742 = INT64_MAX;
	uint64_t x743 = 29989LLU;
	uint32_t x744 = 0U;
	int32_t t185 = -908;

    t185 = (x741|((x742==x743)!=x744));

    if (t185 != -128) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x745 = INT32_MIN;
	uint32_t x746 = 1201U;
	volatile uint32_t x747 = 6599476U;
	int8_t x748 = INT8_MIN;
	int32_t t186 = -8;

    t186 = (x745|((x746==x747)!=x748));

    if (t186 != -2147483647) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x749 = 2282189LLU;
	int64_t x750 = -1128768627927289884LL;
	uint32_t x751 = 139533471U;
	uint8_t x752 = 69U;
	uint64_t t187 = 2019184940217168LLU;

    t187 = (x749|((x750==x751)!=x752));

    if (t187 != 2282189LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int64_t x753 = INT64_MIN;
	int64_t x754 = -1LL;
	volatile uint16_t x755 = 19819U;
	int8_t x756 = -23;
	volatile int64_t t188 = 28565508804225LL;

    t188 = (x753|((x754==x755)!=x756));

    if (t188 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x757 = INT64_MIN;
	uint32_t x758 = 11U;
	int64_t x759 = INT64_MAX;
	static int64_t t189 = 1520755460LL;

    t189 = (x757|((x758==x759)!=x760));

    if (t189 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x761 = 49453565065588LL;
	volatile int32_t x763 = INT32_MAX;
	int16_t x764 = INT16_MIN;
	volatile int64_t t190 = 27LL;

    t190 = (x761|((x762==x763)!=x764));

    if (t190 != 49453565065589LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x765 = 45154;
	int8_t x766 = 0;
	int8_t x767 = INT8_MAX;
	uint8_t x768 = 6U;
	int32_t t191 = -46404863;

    t191 = (x765|((x766==x767)!=x768));

    if (t191 != 45155) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x769 = 11967288LLU;
	volatile uint32_t x770 = UINT32_MAX;
	int8_t x771 = INT8_MIN;
	static volatile uint64_t t192 = 1440LLU;

    t192 = (x769|((x770==x771)!=x772));

    if (t192 != 11967289LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x773 = -1LL;
	uint16_t x774 = 7664U;
	uint64_t x775 = 24248973376LLU;
	uint8_t x776 = UINT8_MAX;

    t193 = (x773|((x774==x775)!=x776));

    if (t193 != -1LL) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x777 = 2;
	int32_t x778 = 13242;
	int16_t x779 = -3;
	int8_t x780 = -1;
	static int32_t t194 = 229328141;

    t194 = (x777|((x778==x779)!=x780));

    if (t194 != 3) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x781 = INT64_MAX;
	int64_t x782 = -73288865774013LL;
	int32_t x783 = INT32_MIN;
	int8_t x784 = -1;
	int64_t t195 = INT64_MAX;

    t195 = (x781|((x782==x783)!=x784));

    if (t195 != INT64_MAX) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x787 = -1LL;
	uint8_t x788 = UINT8_MAX;

    t196 = (x785|((x786==x787)!=x788));

    if (t196 != 127) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x789 = 3049U;
	int16_t x790 = INT16_MAX;
	int16_t x791 = INT16_MIN;

    t197 = (x789|((x790==x791)!=x792));

    if (t197 != 3049U) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x793 = 5115U;
	static int16_t x794 = INT16_MAX;
	static volatile uint32_t x795 = UINT32_MAX;
	static int8_t x796 = 35;
	int32_t t198 = -264;

    t198 = (x793|((x794==x795)!=x796));

    if (t198 != 5115) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x797 = INT16_MAX;
	uint16_t x799 = 1U;
	uint64_t x800 = UINT64_MAX;
	static int32_t t199 = -230069;

    t199 = (x797|((x798==x799)!=x800));

    if (t199 != 32767) { NG(); } else { ; }
	
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

