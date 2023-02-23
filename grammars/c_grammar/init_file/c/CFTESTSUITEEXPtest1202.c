
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

uint32_t x3 = UINT32_MAX;
static uint32_t t5 = 6358U;
int32_t x25 = -1;
int32_t t6 = -2358;
static int32_t x29 = INT32_MIN;
static volatile uint32_t x41 = UINT32_MAX;
uint16_t x64 = 1985U;
static uint16_t x79 = 61U;
int8_t x83 = INT8_MAX;
volatile int8_t x87 = -11;
int8_t x93 = 28;
uint64_t x97 = UINT64_MAX;
volatile int16_t x110 = -1;
uint16_t x114 = 0U;
int64_t x128 = -23289947065115575LL;
uint16_t x136 = 262U;
int16_t x148 = INT16_MAX;
static int16_t x178 = -704;
volatile int32_t t36 = -19946;
uint8_t x182 = UINT8_MAX;
int16_t x183 = INT16_MAX;
int8_t x186 = -1;
uint64_t t39 = 1528060978045354LLU;
int16_t x193 = -242;
static int8_t x197 = -61;
uint64_t x198 = 454686694551667920LLU;
int8_t x199 = INT8_MAX;
int32_t x203 = INT32_MIN;
volatile int32_t t42 = -2138825;
int32_t x207 = -859206628;
uint8_t x213 = UINT8_MAX;
static volatile int16_t x215 = -1;
int8_t x223 = INT8_MAX;
int8_t x229 = 23;
volatile uint32_t x230 = UINT32_MAX;
uint16_t x233 = 22005U;
int8_t x234 = -1;
volatile int64_t x236 = 3LL;
uint32_t x237 = 22U;
uint32_t x240 = 0U;
int64_t x242 = INT64_MIN;
int8_t x244 = -1;
uint32_t x251 = 3U;
int8_t x254 = 13;
int64_t x264 = -3167074699952818401LL;
static volatile int64_t x272 = -108747908437181185LL;
volatile uint32_t x275 = UINT32_MAX;
volatile int64_t t61 = -12273775148LL;
uint16_t x281 = 3105U;
static int16_t x283 = INT16_MAX;
uint8_t x287 = 17U;
int64_t t63 = -85340259049131662LL;
volatile int32_t t64 = -1222;
volatile int64_t x294 = INT64_MAX;
int32_t x298 = -1;
uint16_t x299 = UINT16_MAX;
int16_t x307 = -6453;
int32_t t67 = -4822110;
uint8_t x311 = 21U;
int8_t x312 = INT8_MAX;
int32_t x319 = -2633169;
int32_t t69 = -599;
static uint8_t x322 = 6U;
static int64_t x328 = 12955900LL;
volatile int64_t t71 = 1993659238LL;
uint32_t t73 = 182032408U;
static uint8_t x344 = 109U;
int32_t x350 = -1;
static uint8_t x356 = 107U;
int32_t x358 = INT32_MIN;
static int64_t x362 = INT64_MAX;
volatile int64_t t80 = -2303928213772660193LL;
int16_t x372 = INT16_MAX;
static volatile int16_t x378 = -1;
uint64_t x398 = UINT64_MAX;
uint32_t x399 = 5973145U;
uint8_t x403 = UINT8_MAX;
int16_t x404 = INT16_MIN;
int64_t x405 = INT64_MIN;
uint64_t x410 = 257LLU;
int32_t t91 = -403467097;
static uint64_t x416 = 312618LLU;
volatile uint64_t x419 = UINT64_MAX;
int32_t x427 = -1;
int16_t x430 = 0;
static volatile int16_t x432 = INT16_MIN;
int64_t x435 = 1792LL;
int32_t x439 = -15;
static volatile uint8_t x444 = UINT8_MAX;
volatile uint8_t x446 = 57U;
uint32_t x454 = 130073528U;
volatile int8_t x459 = INT8_MIN;
uint8_t x460 = 44U;
int16_t x462 = INT16_MIN;
int32_t x464 = INT32_MAX;
uint8_t x470 = 7U;
int16_t x476 = -1;
static int64_t t111 = -231637858200823517LL;
static uint64_t x509 = 453LLU;
volatile int64_t t116 = INT64_MIN;
static int8_t x549 = -13;
uint8_t x558 = 0U;
uint32_t x559 = 11015U;
int16_t x560 = INT16_MIN;
volatile int8_t x562 = INT8_MIN;
static volatile uint32_t t123 = 1214337U;
int32_t t125 = -14502381;
volatile int32_t t126 = 1895;
int16_t x585 = INT16_MAX;
int8_t x587 = 1;
static int64_t t127 = 167028902017871699LL;
int32_t x589 = INT32_MIN;
volatile int32_t t132 = 61270191;
int8_t x624 = INT8_MIN;
volatile int16_t x625 = -1588;
volatile uint64_t t136 = 27418187504566LLU;
int16_t x646 = INT16_MIN;
uint8_t x647 = 11U;
int32_t t139 = -190;
volatile int32_t t140 = -5;
volatile uint8_t x659 = 22U;
uint64_t x676 = 692LLU;
static uint16_t x677 = 16U;
volatile int64_t t145 = -468308398LL;
volatile int32_t x683 = INT32_MIN;
uint64_t x684 = 16630435490649LLU;
uint64_t t146 = 1266LLU;
volatile int64_t t147 = -8922524953LL;
static int32_t x700 = -1;
volatile int16_t x703 = INT16_MIN;
static uint16_t x706 = UINT16_MAX;
uint16_t x707 = UINT16_MAX;
int16_t x713 = INT16_MIN;
int16_t x716 = -1;
static volatile uint64_t x724 = 56739569LLU;
int64_t x725 = 41546433415311525LL;
int32_t x726 = INT32_MIN;
volatile int32_t t159 = 9953217;
int16_t x749 = -1;
static int32_t t160 = 443;
volatile int16_t x754 = 1;
int64_t t162 = 3150258619735LL;
int8_t x761 = -1;
int8_t x768 = 2;
uint16_t x769 = 31U;
volatile int8_t x772 = INT8_MAX;
int16_t x776 = INT16_MAX;
int8_t x783 = -1;
int64_t t168 = INT64_MIN;
static volatile uint64_t t169 = 2133240146461285LLU;
int32_t x792 = INT32_MAX;
uint32_t x794 = UINT32_MAX;
int16_t x799 = -1;
int32_t x805 = INT32_MIN;
uint32_t x810 = 0U;
uint64_t x811 = 302676082LLU;
int32_t x812 = INT32_MAX;
int32_t x818 = INT32_MAX;
uint16_t x823 = 819U;
volatile int8_t x825 = 2;
static volatile int64_t x826 = INT64_MIN;
int32_t x832 = 32282145;
volatile int32_t t179 = 430088409;
static int8_t x836 = INT8_MIN;
int16_t x837 = 88;
int32_t t181 = -1342949;
volatile int16_t x843 = 3;
int32_t x844 = -1;
int64_t x846 = 1675LL;
int64_t t183 = 9435460029764963LL;
volatile int64_t t185 = 7271LL;
int16_t x865 = INT16_MAX;
uint64_t x867 = 40654592310LLU;
volatile uint64_t x868 = UINT64_MAX;
int64_t x872 = -591062079801LL;
uint32_t x885 = 7808U;
volatile uint32_t x889 = UINT32_MAX;
uint8_t x892 = 26U;
static volatile int64_t x901 = 58912148884LL;
int32_t x902 = -1;
int8_t x909 = 3;
int64_t x913 = INT64_MIN;
uint16_t x915 = 30145U;
static int8_t x916 = INT8_MIN;
int64_t t197 = -89504534943078107LL;
int32_t x917 = INT32_MAX;


void f0(void) {
    	static uint32_t x1 = 121U;
	int8_t x2 = -8;
	uint16_t x4 = 110U;
	volatile uint32_t t0 = 478469726U;

    t0 = (x1&((x2!=x3)-x4));

    if (t0 != 17U) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MIN;
	volatile int16_t x6 = -3;
	int16_t x7 = -6499;
	int32_t x8 = 143;
	volatile int32_t t1 = 236;

    t1 = (x5&((x6!=x7)-x8));

    if (t1 != -256) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = -3368LL;
	static volatile int8_t x10 = -4;
	int8_t x11 = 31;
	int32_t x12 = 229;
	static int64_t t2 = 6862587110LL;

    t2 = (x9&((x10!=x11)-x12));

    if (t2 != -3560LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = 869;
	int8_t x14 = INT8_MIN;
	static uint8_t x15 = 0U;
	uint64_t x16 = 13980647086818LLU;
	static uint64_t t3 = 4051696430445LLU;

    t3 = (x13&((x14!=x15)-x16));

    if (t3 != 261LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint8_t x17 = 1U;
	static int64_t x18 = 3779LL;
	volatile int16_t x19 = -1330;
	volatile int8_t x20 = INT8_MIN;
	volatile int32_t t4 = 1575057;

    t4 = (x17&((x18!=x19)-x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x21 = -1;
	static int16_t x22 = -1;
	int16_t x23 = INT16_MAX;
	uint32_t x24 = 7594778U;

    t5 = (x21&((x22!=x23)-x24));

    if (t5 != 4287372519U) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int32_t x26 = -1;
	int16_t x27 = -3;
	volatile int16_t x28 = -1;

    t6 = (x25&((x26!=x27)-x28));

    if (t6 != 2) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x30 = INT16_MIN;
	int32_t x31 = INT32_MIN;
	uint32_t x32 = 28240U;
	uint32_t t7 = 45355U;

    t7 = (x29&((x30!=x31)-x32));

    if (t7 != 2147483648U) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x37 = -53;
	static volatile int64_t x38 = 102969714675459LL;
	static volatile int32_t x39 = INT32_MIN;
	int8_t x40 = -1;
	volatile int32_t t8 = -51587010;

    t8 = (x37&((x38!=x39)-x40));

    if (t8 != 2) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x42 = -16294012;
	volatile int8_t x43 = -1;
	uint16_t x44 = UINT16_MAX;
	volatile uint32_t t9 = 1203039U;

    t9 = (x41&((x42!=x43)-x44));

    if (t9 != 4294901762U) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x45 = INT64_MIN;
	int32_t x46 = INT32_MIN;
	int8_t x47 = INT8_MAX;
	static int64_t x48 = -1LL;
	volatile int64_t t10 = -49058096390683461LL;

    t10 = (x45&((x46!=x47)-x48));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x49 = INT16_MIN;
	volatile uint8_t x50 = 101U;
	static uint8_t x51 = 1U;
	int32_t x52 = -1;
	int32_t t11 = 15;

    t11 = (x49&((x50!=x51)-x52));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x53 = -1;
	volatile uint64_t x54 = UINT64_MAX;
	int8_t x55 = INT8_MAX;
	volatile int32_t x56 = -1;
	int32_t t12 = -299183952;

    t12 = (x53&((x54!=x55)-x56));

    if (t12 != 2) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x61 = INT64_MIN;
	int8_t x62 = -1;
	static volatile int8_t x63 = -33;
	int64_t t13 = INT64_MIN;

    t13 = (x61&((x62!=x63)-x64));

    if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint8_t x65 = 2U;
	int16_t x66 = -13;
	static uint16_t x67 = 59U;
	uint8_t x68 = UINT8_MAX;
	int32_t t14 = -272946499;

    t14 = (x65&((x66!=x67)-x68));

    if (t14 != 2) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint16_t x77 = 1U;
	static uint16_t x78 = 3U;
	int8_t x80 = -1;
	volatile int32_t t15 = 170;

    t15 = (x77&((x78!=x79)-x80));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x81 = -1;
	volatile int16_t x82 = INT16_MIN;
	static int8_t x84 = INT8_MAX;
	int32_t t16 = -2155933;

    t16 = (x81&((x82!=x83)-x84));

    if (t16 != -126) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x85 = INT8_MIN;
	uint64_t x86 = 129878LLU;
	uint8_t x88 = 1U;
	static int32_t t17 = -28;

    t17 = (x85&((x86!=x87)-x88));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x89 = INT64_MIN;
	static volatile int16_t x90 = INT16_MIN;
	volatile uint64_t x91 = UINT64_MAX;
	uint32_t x92 = 2144479509U;
	volatile int64_t t18 = -48709987LL;

    t18 = (x89&((x90!=x91)-x92));

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x94 = 6U;
	int32_t x95 = INT32_MIN;
	int64_t x96 = 583050806351933225LL;
	static int64_t t19 = -1555LL;

    t19 = (x93&((x94!=x95)-x96));

    if (t19 != 24LL) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x98 = -1;
	uint32_t x99 = 69026574U;
	int16_t x100 = -1110;
	volatile uint64_t t20 = 723598730406677578LLU;

    t20 = (x97&((x98!=x99)-x100));

    if (t20 != 1111LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint8_t x105 = 5U;
	uint16_t x106 = 4192U;
	int32_t x107 = INT32_MIN;
	int32_t x108 = 3996430;
	int32_t t21 = -417703878;

    t21 = (x105&((x106!=x107)-x108));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x109 = 5278U;
	int64_t x111 = INT64_MIN;
	uint32_t x112 = 8062U;
	volatile uint32_t t22 = 7966U;

    t22 = (x109&((x110!=x111)-x112));

    if (t22 != 130U) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x113 = 3538U;
	int16_t x115 = -207;
	int8_t x116 = INT8_MIN;
	volatile uint32_t t23 = 49U;

    t23 = (x113&((x114!=x115)-x116));

    if (t23 != 128U) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x125 = UINT8_MAX;
	int16_t x126 = INT16_MIN;
	int64_t x127 = INT64_MAX;
	static volatile int64_t t24 = 1062443816819LL;

    t24 = (x125&((x126!=x127)-x128));

    if (t24 != 184LL) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint8_t x129 = 1U;
	uint64_t x130 = UINT64_MAX;
	static uint8_t x131 = 0U;
	static int64_t x132 = INT64_MAX;
	volatile int64_t t25 = 167007545947LL;

    t25 = (x129&((x130!=x131)-x132));

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x133 = INT16_MIN;
	int32_t x134 = 0;
	volatile int16_t x135 = -1;
	volatile int32_t t26 = -100;

    t26 = (x133&((x134!=x135)-x136));

    if (t26 != -32768) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x137 = INT64_MIN;
	static int8_t x138 = 0;
	uint64_t x139 = 6LLU;
	volatile int16_t x140 = -1;
	int64_t t27 = 10626800767LL;

    t27 = (x137&((x138!=x139)-x140));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x141 = -29;
	int16_t x142 = -120;
	uint8_t x143 = 11U;
	int16_t x144 = INT16_MIN;
	int32_t t28 = -694745;

    t28 = (x141&((x142!=x143)-x144));

    if (t28 != 32769) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x145 = UINT64_MAX;
	int16_t x146 = INT16_MIN;
	volatile int64_t x147 = -1LL;
	volatile uint64_t t29 = 0LLU;

    t29 = (x145&((x146!=x147)-x148));

    if (t29 != 18446744073709518850LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint64_t x149 = 8899596553583LLU;
	static int16_t x150 = INT16_MAX;
	uint32_t x151 = 9142U;
	int64_t x152 = 5162308639LL;
	volatile uint64_t t30 = 2006LLU;

    t30 = (x149&((x150!=x151)-x152));

    if (t30 != 8899311176034LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x153 = INT64_MIN;
	static int8_t x154 = -1;
	int16_t x155 = 2;
	int8_t x156 = 3;
	static volatile int64_t t31 = INT64_MIN;

    t31 = (x153&((x154!=x155)-x156));

    if (t31 != INT64_MIN) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x157 = INT32_MAX;
	int32_t x158 = 319;
	volatile uint64_t x159 = 147177LLU;
	uint32_t x160 = UINT32_MAX;
	uint32_t t32 = 37U;

    t32 = (x157&((x158!=x159)-x160));

    if (t32 != 2U) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x161 = INT32_MIN;
	int64_t x162 = INT64_MIN;
	static int16_t x163 = 1;
	int64_t x164 = -250024941LL;
	static int64_t t33 = -6990557779709039LL;

    t33 = (x161&((x162!=x163)-x164));

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint64_t x165 = 1167475743696713LLU;
	volatile int64_t x166 = -1LL;
	int8_t x167 = INT8_MAX;
	int64_t x168 = -1LL;
	volatile uint64_t t34 = 193LLU;

    t34 = (x165&((x166!=x167)-x168));

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static int8_t x173 = INT8_MIN;
	int8_t x174 = INT8_MAX;
	uint64_t x175 = 307368134063586LLU;
	static uint32_t x176 = 99U;
	uint32_t t35 = 108539237U;

    t35 = (x173&((x174!=x175)-x176));

    if (t35 != 4294967168U) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x177 = 36;
	volatile int8_t x179 = 30;
	static int16_t x180 = INT16_MAX;

    t36 = (x177&((x178!=x179)-x180));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x181 = 1713619506304604LLU;
	int16_t x184 = INT16_MIN;
	static uint64_t t37 = 8LLU;

    t37 = (x181&((x182!=x183)-x184));

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x185 = -1LL;
	uint16_t x187 = UINT16_MAX;
	int64_t x188 = INT64_MAX;
	static volatile int64_t t38 = -245LL;

    t38 = (x185&((x186!=x187)-x188));

    if (t38 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x189 = UINT64_MAX;
	int64_t x190 = INT64_MAX;
	uint32_t x191 = UINT32_MAX;
	int16_t x192 = INT16_MIN;

    t39 = (x189&((x190!=x191)-x192));

    if (t39 != 32769LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x194 = 1;
	static uint8_t x195 = UINT8_MAX;
	static int8_t x196 = 43;
	static volatile int32_t t40 = 15768862;

    t40 = (x193&((x194!=x195)-x196));

    if (t40 != -250) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x200 = 3049;
	int32_t t41 = -31965721;

    t41 = (x197&((x198!=x199)-x200));

    if (t41 != -3072) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x201 = 6;
	volatile int32_t x202 = 726;
	static int32_t x204 = INT32_MAX;

    t42 = (x201&((x202!=x203)-x204));

    if (t42 != 2) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x205 = 9U;
	int64_t x206 = 12658614671898101LL;
	uint8_t x208 = UINT8_MAX;
	uint32_t t43 = 6708U;

    t43 = (x205&((x206!=x207)-x208));

    if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x209 = INT8_MAX;
	static int32_t x210 = INT32_MIN;
	int8_t x211 = 11;
	int16_t x212 = -453;
	volatile int32_t t44 = -370495;

    t44 = (x209&((x210!=x211)-x212));

    if (t44 != 70) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x214 = 18U;
	volatile int16_t x216 = INT16_MAX;
	volatile int32_t t45 = -642;

    t45 = (x213&((x214!=x215)-x216));

    if (t45 != 2) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x217 = 0U;
	int64_t x218 = INT64_MIN;
	static volatile uint32_t x219 = 119738462U;
	static int16_t x220 = INT16_MIN;
	int32_t t46 = 486083;

    t46 = (x217&((x218!=x219)-x220));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x221 = UINT64_MAX;
	int64_t x222 = INT64_MAX;
	uint32_t x224 = UINT32_MAX;
	volatile uint64_t t47 = 891114079956673150LLU;

    t47 = (x221&((x222!=x223)-x224));

    if (t47 != 2LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x225 = -1LL;
	int16_t x226 = INT16_MIN;
	int32_t x227 = -1;
	uint16_t x228 = 0U;
	int64_t t48 = -56795753559LL;

    t48 = (x225&((x226!=x227)-x228));

    if (t48 != 1LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x231 = INT16_MIN;
	static uint64_t x232 = 3846048LLU;
	static uint64_t t49 = 114254566LLU;

    t49 = (x229&((x230!=x231)-x232));

    if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x235 = -1;
	volatile int64_t t50 = -16792510925054840LL;

    t50 = (x233&((x234!=x235)-x236));

    if (t50 != 22005LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x238 = INT16_MIN;
	volatile int16_t x239 = -14;
	volatile uint32_t t51 = 7U;

    t51 = (x237&((x238!=x239)-x240));

    if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint32_t x241 = 1601604U;
	int32_t x243 = -13707105;
	volatile uint32_t t52 = 5439U;

    t52 = (x241&((x242!=x243)-x244));

    if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x245 = -1;
	int8_t x246 = 2;
	static volatile int32_t x247 = 87161127;
	int32_t x248 = INT32_MAX;
	volatile int32_t t53 = 1;

    t53 = (x245&((x246!=x247)-x248));

    if (t53 != -2147483646) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x249 = 2828597LLU;
	uint64_t x250 = UINT64_MAX;
	int8_t x252 = 39;
	uint64_t t54 = 103387LLU;

    t54 = (x249&((x250!=x251)-x252));

    if (t54 != 2828560LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile uint8_t x253 = UINT8_MAX;
	volatile int16_t x255 = INT16_MAX;
	volatile int16_t x256 = INT16_MIN;
	int32_t t55 = 223458;

    t55 = (x253&((x254!=x255)-x256));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x257 = INT64_MAX;
	int16_t x258 = INT16_MIN;
	volatile uint16_t x259 = 1562U;
	int64_t x260 = 1726622537816393LL;
	int64_t t56 = -366727LL;

    t56 = (x257&((x258!=x259)-x260));

    if (t56 != 9221645414316959416LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x261 = INT16_MIN;
	int64_t x262 = INT64_MIN;
	static volatile int32_t x263 = -46;
	static int64_t t57 = -109975360486164123LL;

    t57 = (x261&((x262!=x263)-x264));

    if (t57 != 3167074699952816128LL) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint8_t x265 = UINT8_MAX;
	static uint8_t x266 = 14U;
	uint64_t x267 = UINT64_MAX;
	volatile uint8_t x268 = 47U;
	static int32_t t58 = -878408;

    t58 = (x265&((x266!=x267)-x268));

    if (t58 != 210) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x269 = INT16_MIN;
	int16_t x270 = -1;
	uint32_t x271 = 117U;
	volatile int64_t t59 = 152LL;

    t59 = (x269&((x270!=x271)-x272));

    if (t59 != 108747908437180416LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x273 = -1556973982066785373LL;
	int32_t x274 = -1;
	uint32_t x276 = 970502307U;
	volatile int64_t t60 = -47538654747LL;

    t60 = (x273&((x274!=x275)-x276));

    if (t60 != 2183283457LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x277 = 4U;
	int64_t x278 = -541361847252333981LL;
	uint64_t x279 = 3312636164272728LLU;
	int64_t x280 = -16847405448638155LL;

    t61 = (x277&((x278!=x279)-x280));

    if (t61 != 4LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint64_t x282 = 2123841049LLU;
	uint8_t x284 = UINT8_MAX;
	int32_t t62 = 0;

    t62 = (x281&((x282!=x283)-x284));

    if (t62 != 3072) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int16_t x285 = INT16_MAX;
	int32_t x286 = -1;
	int64_t x288 = -530779LL;

    t63 = (x285&((x286!=x287)-x288));

    if (t63 != 6492LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x289 = -1;
	int8_t x290 = -1;
	static int8_t x291 = INT8_MAX;
	int16_t x292 = -3;

    t64 = (x289&((x290!=x291)-x292));

    if (t64 != 4) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int8_t x293 = INT8_MIN;
	static uint8_t x295 = 0U;
	uint16_t x296 = 433U;
	static int32_t t65 = 934;

    t65 = (x293&((x294!=x295)-x296));

    if (t65 != -512) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x297 = INT64_MIN;
	uint64_t x300 = 139925358735706LLU;
	volatile uint64_t t66 = 5059000415LLU;

    t66 = (x297&((x298!=x299)-x300));

    if (t66 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x305 = -5;
	static int64_t x306 = INT64_MIN;
	int8_t x308 = 8;

    t67 = (x305&((x306!=x307)-x308));

    if (t67 != -7) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint8_t x309 = UINT8_MAX;
	uint64_t x310 = 1647799658LLU;
	static volatile int32_t t68 = -7997;

    t68 = (x309&((x310!=x311)-x312));

    if (t68 != 130) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x317 = -1;
	int16_t x318 = -1;
	static uint8_t x320 = 50U;

    t69 = (x317&((x318!=x319)-x320));

    if (t69 != -49) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x321 = INT32_MIN;
	static int32_t x323 = 1;
	int16_t x324 = INT16_MAX;
	int32_t t70 = INT32_MIN;

    t70 = (x321&((x322!=x323)-x324));

    if (t70 != INT32_MIN) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x325 = 10;
	int32_t x326 = INT32_MIN;
	int16_t x327 = -7774;

    t71 = (x325&((x326!=x327)-x328));

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x329 = -19041;
	int64_t x330 = INT64_MAX;
	int32_t x331 = INT32_MAX;
	int32_t x332 = 1994288;
	int32_t t72 = 970;

    t72 = (x329&((x330!=x331)-x332));

    if (t72 != -1994351) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x333 = 7U;
	uint16_t x334 = 7U;
	int16_t x335 = INT16_MAX;
	uint32_t x336 = UINT32_MAX;

    t73 = (x333&((x334!=x335)-x336));

    if (t73 != 2U) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x337 = -1;
	uint8_t x338 = 1U;
	int64_t x339 = 9327177542042549LL;
	int32_t x340 = -4044;
	int32_t t74 = -17857;

    t74 = (x337&((x338!=x339)-x340));

    if (t74 != 4045) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile uint8_t x341 = UINT8_MAX;
	volatile int16_t x342 = -753;
	uint64_t x343 = UINT64_MAX;
	static volatile int32_t t75 = -43;

    t75 = (x341&((x342!=x343)-x344));

    if (t75 != 148) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x345 = 47905746LLU;
	int64_t x346 = 136324605534LL;
	uint8_t x347 = 1U;
	int8_t x348 = INT8_MAX;
	volatile uint64_t t76 = 680784LLU;

    t76 = (x345&((x346!=x347)-x348));

    if (t76 != 47905666LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x349 = -1LL;
	static int32_t x351 = -1;
	int64_t x352 = -1LL;
	volatile int64_t t77 = 4120543403705LL;

    t77 = (x349&((x350!=x351)-x352));

    if (t77 != 1LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint16_t x353 = 0U;
	uint16_t x354 = 0U;
	uint8_t x355 = 93U;
	int32_t t78 = 272018678;

    t78 = (x353&((x354!=x355)-x356));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x357 = UINT8_MAX;
	int16_t x359 = INT16_MAX;
	int16_t x360 = INT16_MIN;
	int32_t t79 = 410;

    t79 = (x357&((x358!=x359)-x360));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x361 = 349992392768755LL;
	static uint8_t x363 = 27U;
	static uint8_t x364 = UINT8_MAX;

    t80 = (x361&((x362!=x363)-x364));

    if (t80 != 349992392768514LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x369 = -148;
	int16_t x370 = INT16_MAX;
	static volatile int64_t x371 = INT64_MIN;
	volatile int32_t t81 = -1;

    t81 = (x369&((x370!=x371)-x372));

    if (t81 != -32768) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x373 = INT8_MIN;
	static int16_t x374 = 4;
	uint32_t x375 = 1358658U;
	int64_t x376 = -578850668111557598LL;
	int64_t t82 = -10340LL;

    t82 = (x373&((x374!=x375)-x376));

    if (t82 != 578850668111557504LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x377 = UINT8_MAX;
	int8_t x379 = 1;
	volatile int32_t x380 = INT32_MAX;
	static volatile int32_t t83 = -512547;

    t83 = (x377&((x378!=x379)-x380));

    if (t83 != 2) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x381 = UINT16_MAX;
	int16_t x382 = -219;
	uint16_t x383 = 2352U;
	uint16_t x384 = 17477U;
	int32_t t84 = 2481;

    t84 = (x381&((x382!=x383)-x384));

    if (t84 != 48060) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x385 = INT64_MAX;
	int16_t x386 = INT16_MIN;
	int16_t x387 = -1;
	int16_t x388 = -1;
	volatile int64_t t85 = -1LL;

    t85 = (x385&((x386!=x387)-x388));

    if (t85 != 2LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x389 = 3224U;
	int32_t x390 = INT32_MIN;
	uint16_t x391 = 5U;
	uint64_t x392 = 5488LLU;
	uint64_t t86 = 7570646831201770597LLU;

    t86 = (x389&((x390!=x391)-x392));

    if (t86 != 2192LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x393 = INT16_MIN;
	int32_t x394 = -758;
	int16_t x395 = -1;
	static int64_t x396 = 65457425LL;
	volatile int64_t t87 = 595LL;

    t87 = (x393&((x394!=x395)-x396));

    if (t87 != -65470464LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x397 = -1;
	static int8_t x400 = 17;
	static volatile int32_t t88 = 1;

    t88 = (x397&((x398!=x399)-x400));

    if (t88 != -16) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x401 = 40855498782485LL;
	volatile int64_t x402 = -59014833766820LL;
	volatile int64_t t89 = -140706249101738035LL;

    t89 = (x401&((x402!=x403)-x404));

    if (t89 != 32769LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x406 = UINT8_MAX;
	uint64_t x407 = 740LLU;
	int64_t x408 = INT64_MAX;
	volatile int64_t t90 = INT64_MIN;

    t90 = (x405&((x406!=x407)-x408));

    if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x409 = INT32_MAX;
	int64_t x411 = -1LL;
	static int16_t x412 = -1;

    t91 = (x409&((x410!=x411)-x412));

    if (t91 != 2) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x413 = INT8_MIN;
	volatile int8_t x414 = INT8_MIN;
	static volatile int32_t x415 = INT32_MIN;
	volatile uint64_t t92 = 48653567553624LLU;

    t92 = (x413&((x414!=x415)-x416));

    if (t92 != 18446744073709238912LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x417 = UINT32_MAX;
	int32_t x418 = INT32_MIN;
	int64_t x420 = -8096734LL;
	static int64_t t93 = -2675413386435543380LL;

    t93 = (x417&((x418!=x419)-x420));

    if (t93 != 8096735LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x421 = INT8_MIN;
	volatile int32_t x422 = INT32_MIN;
	volatile int8_t x423 = 0;
	uint8_t x424 = 62U;
	static volatile int32_t t94 = -347274;

    t94 = (x421&((x422!=x423)-x424));

    if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x425 = 1;
	volatile int16_t x426 = -5;
	static int64_t x428 = -30760301LL;
	volatile int64_t t95 = 63966LL;

    t95 = (x425&((x426!=x427)-x428));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x429 = INT32_MIN;
	int32_t x431 = INT32_MIN;
	static int32_t t96 = 285406;

    t96 = (x429&((x430!=x431)-x432));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x433 = 12907103LLU;
	volatile int32_t x434 = INT32_MIN;
	static int64_t x436 = INT64_MAX;
	uint64_t t97 = 3804LLU;

    t97 = (x433&((x434!=x435)-x436));

    if (t97 != 2LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile uint32_t x437 = UINT32_MAX;
	uint64_t x438 = 7211063010566486028LLU;
	volatile uint64_t x440 = 7058581559686202LLU;
	volatile uint64_t t98 = 471117178427874311LLU;

    t98 = (x437&((x438!=x439)-x440));

    if (t98 != 3917761479LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint32_t x441 = 557U;
	volatile uint8_t x442 = UINT8_MAX;
	volatile int64_t x443 = INT64_MIN;
	volatile uint32_t t99 = 2U;

    t99 = (x441&((x442!=x443)-x444));

    if (t99 != 512U) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x445 = -1LL;
	int64_t x447 = INT64_MAX;
	int64_t x448 = -6435137822774302LL;
	volatile int64_t t100 = -17068341421LL;

    t100 = (x445&((x446!=x447)-x448));

    if (t100 != 6435137822774303LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x449 = INT32_MIN;
	int16_t x450 = -1;
	volatile int64_t x451 = 41787269928777LL;
	static int16_t x452 = INT16_MIN;
	int32_t t101 = -29439569;

    t101 = (x449&((x450!=x451)-x452));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x453 = UINT32_MAX;
	int16_t x455 = INT16_MAX;
	static int16_t x456 = INT16_MIN;
	uint32_t t102 = 2U;

    t102 = (x453&((x454!=x455)-x456));

    if (t102 != 32769U) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x457 = INT16_MAX;
	uint16_t x458 = 0U;
	static int32_t t103 = 293;

    t103 = (x457&((x458!=x459)-x460));

    if (t103 != 32725) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x461 = INT64_MAX;
	uint8_t x463 = 121U;
	volatile int64_t t104 = -4427725LL;

    t104 = (x461&((x462!=x463)-x464));

    if (t104 != 9223372034707292162LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x465 = 0U;
	volatile uint32_t x466 = UINT32_MAX;
	int8_t x467 = -13;
	int16_t x468 = INT16_MAX;
	int32_t t105 = 43577424;

    t105 = (x465&((x466!=x467)-x468));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int64_t x469 = -6349540183526LL;
	int16_t x471 = -3;
	static uint8_t x472 = UINT8_MAX;
	volatile int64_t t106 = -273202LL;

    t106 = (x469&((x470!=x471)-x472));

    if (t106 != -6349540183550LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile uint16_t x473 = UINT16_MAX;
	uint32_t x474 = 1473795U;
	int16_t x475 = -1;
	int32_t t107 = 2;

    t107 = (x473&((x474!=x475)-x476));

    if (t107 != 2) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x477 = INT8_MIN;
	int64_t x478 = INT64_MIN;
	volatile int8_t x479 = INT8_MIN;
	int32_t x480 = 1;
	volatile int32_t t108 = -12;

    t108 = (x477&((x478!=x479)-x480));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x481 = INT64_MIN;
	static int8_t x482 = -1;
	uint32_t x483 = 932301397U;
	int16_t x484 = 1;
	volatile int64_t t109 = 325287LL;

    t109 = (x481&((x482!=x483)-x484));

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x485 = -13;
	uint32_t x486 = 28485131U;
	int64_t x487 = INT64_MAX;
	static uint64_t x488 = 50788300LLU;
	uint64_t t110 = 3493043673426917414LLU;

    t110 = (x485&((x486!=x487)-x488));

    if (t110 != 18446744073658763313LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x489 = INT64_MAX;
	volatile int64_t x490 = 3121870314242LL;
	int8_t x491 = -11;
	uint8_t x492 = 23U;

    t111 = (x489&((x490!=x491)-x492));

    if (t111 != 9223372036854775786LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x493 = -2243006LL;
	int16_t x494 = INT16_MAX;
	int64_t x495 = INT64_MIN;
	uint16_t x496 = 2681U;
	int64_t t112 = -26809521496562LL;

    t112 = (x493&((x494!=x495)-x496));

    if (t112 != -2243584LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x497 = 296;
	int64_t x498 = INT64_MIN;
	static int8_t x499 = -1;
	uint32_t x500 = 118498U;
	static uint32_t t113 = 29734057U;

    t113 = (x497&((x498!=x499)-x500));

    if (t113 != 264U) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x510 = 6U;
	int16_t x511 = -1;
	static int8_t x512 = INT8_MIN;
	uint64_t t114 = 468985982LLU;

    t114 = (x509&((x510!=x511)-x512));

    if (t114 != 129LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x517 = 21459026U;
	int64_t x518 = INT64_MIN;
	static int64_t x519 = INT64_MIN;
	int32_t x520 = -1;
	uint32_t t115 = 90U;

    t115 = (x517&((x518!=x519)-x520));

    if (t115 != 0U) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x521 = INT64_MIN;
	int64_t x522 = -59068039211088147LL;
	int64_t x523 = INT64_MIN;
	int32_t x524 = INT32_MAX;

    t116 = (x521&((x522!=x523)-x524));

    if (t116 != INT64_MIN) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x533 = 2777U;
	volatile int32_t x534 = INT32_MAX;
	static int64_t x535 = -1LL;
	int8_t x536 = INT8_MAX;
	static volatile int32_t t117 = 31;

    t117 = (x533&((x534!=x535)-x536));

    if (t117 != 2688) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x541 = 14802797252630LLU;
	volatile uint32_t x542 = 113656967U;
	uint16_t x543 = UINT16_MAX;
	uint8_t x544 = 58U;
	uint64_t t118 = 90324103098884LLU;

    t118 = (x541&((x542!=x543)-x544));

    if (t118 != 14802797252614LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x545 = INT8_MAX;
	uint8_t x546 = UINT8_MAX;
	int8_t x547 = INT8_MIN;
	int16_t x548 = -1;
	volatile int32_t t119 = -5414;

    t119 = (x545&((x546!=x547)-x548));

    if (t119 != 2) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int8_t x550 = -5;
	volatile uint8_t x551 = 1U;
	int8_t x552 = INT8_MAX;
	int32_t t120 = -273768283;

    t120 = (x549&((x550!=x551)-x552));

    if (t120 != -126) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x553 = INT8_MAX;
	uint8_t x554 = 13U;
	int8_t x555 = INT8_MAX;
	static volatile uint32_t x556 = 163269879U;
	uint32_t t121 = 54U;

    t121 = (x553&((x554!=x555)-x556));

    if (t121 != 10U) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x557 = 50;
	int32_t t122 = -780301;

    t122 = (x557&((x558!=x559)-x560));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint16_t x561 = 523U;
	int8_t x563 = -1;
	uint32_t x564 = UINT32_MAX;

    t123 = (x561&((x562!=x563)-x564));

    if (t123 != 2U) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x565 = 1;
	static int64_t x566 = 16085162107623741LL;
	volatile int32_t x567 = -1;
	int16_t x568 = -1;
	volatile int32_t t124 = 55;

    t124 = (x565&((x566!=x567)-x568));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int16_t x569 = INT16_MIN;
	int16_t x570 = INT16_MIN;
	int8_t x571 = INT8_MAX;
	static uint8_t x572 = UINT8_MAX;

    t125 = (x569&((x570!=x571)-x572));

    if (t125 != -32768) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x581 = INT16_MIN;
	int16_t x582 = -1;
	int16_t x583 = 230;
	static int16_t x584 = 2956;

    t126 = (x581&((x582!=x583)-x584));

    if (t126 != -32768) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x586 = -1;
	int64_t x588 = -1LL;

    t127 = (x585&((x586!=x587)-x588));

    if (t127 != 2LL) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint64_t x590 = 976889284058185LLU;
	volatile uint64_t x591 = UINT64_MAX;
	int32_t x592 = -1;
	volatile int32_t t128 = 3286630;

    t128 = (x589&((x590!=x591)-x592));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x593 = INT8_MAX;
	volatile uint8_t x594 = 6U;
	uint8_t x595 = 6U;
	int8_t x596 = -1;
	static int32_t t129 = -18525;

    t129 = (x593&((x594!=x595)-x596));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x601 = INT8_MIN;
	int16_t x602 = INT16_MIN;
	int64_t x603 = 4804LL;
	int8_t x604 = -1;
	int32_t t130 = -24684;

    t130 = (x601&((x602!=x603)-x604));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x605 = INT32_MIN;
	int64_t x606 = INT64_MIN;
	static volatile uint64_t x607 = 10LLU;
	uint32_t x608 = UINT32_MAX;
	volatile uint32_t t131 = 1679746U;

    t131 = (x605&((x606!=x607)-x608));

    if (t131 != 0U) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x609 = INT16_MAX;
	int64_t x610 = -1LL;
	int8_t x611 = -1;
	int16_t x612 = INT16_MAX;

    t132 = (x609&((x610!=x611)-x612));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x621 = -54;
	static int16_t x622 = INT16_MIN;
	int8_t x623 = INT8_MIN;
	volatile int32_t t133 = 10581;

    t133 = (x621&((x622!=x623)-x624));

    if (t133 != 128) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x626 = 424;
	static int64_t x627 = INT64_MIN;
	volatile uint64_t x628 = 234LLU;
	volatile uint64_t t134 = 95696111695849LLU;

    t134 = (x625&((x626!=x627)-x628));

    if (t134 != 18446744073709549828LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int32_t x629 = INT32_MAX;
	static int64_t x630 = 30245777297LL;
	volatile int64_t x631 = INT64_MAX;
	int16_t x632 = INT16_MAX;
	int32_t t135 = 333241710;

    t135 = (x629&((x630!=x631)-x632));

    if (t135 != 2147450882) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x633 = -1;
	int8_t x634 = 1;
	int64_t x635 = -1LL;
	uint64_t x636 = UINT64_MAX;

    t136 = (x633&((x634!=x635)-x636));

    if (t136 != 2LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint32_t x637 = UINT32_MAX;
	volatile uint32_t x638 = UINT32_MAX;
	static int16_t x639 = INT16_MIN;
	int8_t x640 = INT8_MIN;
	uint32_t t137 = 7270013U;

    t137 = (x637&((x638!=x639)-x640));

    if (t137 != 129U) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x641 = -1;
	static uint32_t x642 = 106644U;
	int32_t x643 = -27243381;
	static int32_t x644 = -1;
	int32_t t138 = 3;

    t138 = (x641&((x642!=x643)-x644));

    if (t138 != 2) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x645 = INT8_MIN;
	int32_t x648 = 3;

    t139 = (x645&((x646!=x647)-x648));

    if (t139 != -128) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x649 = 10U;
	int16_t x650 = INT16_MIN;
	int32_t x651 = INT32_MAX;
	uint16_t x652 = 6U;

    t140 = (x649&((x650!=x651)-x652));

    if (t140 != 10) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x653 = INT8_MAX;
	int16_t x654 = INT16_MIN;
	uint32_t x655 = 768311634U;
	uint16_t x656 = UINT16_MAX;
	volatile int32_t t141 = -647893139;

    t141 = (x653&((x654!=x655)-x656));

    if (t141 != 2) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x657 = -1;
	uint64_t x658 = 1181LLU;
	static int16_t x660 = INT16_MIN;
	int32_t t142 = 7;

    t142 = (x657&((x658!=x659)-x660));

    if (t142 != 32769) { NG(); } else { ; }
	
}

void f143(void) {
    	static int8_t x669 = INT8_MAX;
	int16_t x670 = 1;
	int64_t x671 = 6053LL;
	uint32_t x672 = UINT32_MAX;
	uint32_t t143 = 1524398U;

    t143 = (x669&((x670!=x671)-x672));

    if (t143 != 2U) { NG(); } else { ; }
	
}

void f144(void) {
    	static int32_t x673 = INT32_MIN;
	uint64_t x674 = 9091594243301LLU;
	static int32_t x675 = 146;
	volatile uint64_t t144 = 27549LLU;

    t144 = (x673&((x674!=x675)-x676));

    if (t144 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x678 = INT64_MAX;
	uint64_t x679 = UINT64_MAX;
	int64_t x680 = -1LL;

    t145 = (x677&((x678!=x679)-x680));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x681 = 1488648;
	int8_t x682 = INT8_MAX;

    t146 = (x681&((x682!=x683)-x684));

    if (t146 != 300040LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x693 = INT64_MIN;
	volatile int32_t x694 = INT32_MIN;
	int64_t x695 = -1LL;
	int8_t x696 = INT8_MIN;

    t147 = (x693&((x694!=x695)-x696));

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x697 = UINT16_MAX;
	int8_t x698 = -1;
	static int64_t x699 = -1429169137LL;
	volatile int32_t t148 = 132139825;

    t148 = (x697&((x698!=x699)-x700));

    if (t148 != 2) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x701 = 17;
	int32_t x702 = -1220233;
	int16_t x704 = INT16_MIN;
	static int32_t t149 = -8;

    t149 = (x701&((x702!=x703)-x704));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static int32_t x705 = INT32_MIN;
	uint16_t x708 = UINT16_MAX;
	volatile int32_t t150 = INT32_MIN;

    t150 = (x705&((x706!=x707)-x708));

    if (t150 != INT32_MIN) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x709 = 0U;
	static volatile int32_t x710 = INT32_MIN;
	int64_t x711 = INT64_MAX;
	volatile uint32_t x712 = UINT32_MAX;
	uint32_t t151 = 54U;

    t151 = (x709&((x710!=x711)-x712));

    if (t151 != 0U) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x714 = 109;
	int64_t x715 = -1LL;
	int32_t t152 = -46862;

    t152 = (x713&((x714!=x715)-x716));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x717 = -1;
	int64_t x718 = INT64_MIN;
	int16_t x719 = INT16_MIN;
	static int32_t x720 = INT32_MAX;
	int32_t t153 = 76128;

    t153 = (x717&((x718!=x719)-x720));

    if (t153 != -2147483646) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x721 = UINT8_MAX;
	int64_t x722 = 496012722LL;
	int32_t x723 = INT32_MAX;
	uint64_t t154 = 3482693049699401LLU;

    t154 = (x721&((x722!=x723)-x724));

    if (t154 != 16LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint8_t x727 = 32U;
	uint16_t x728 = 79U;
	volatile int64_t t155 = 8287833289472LL;

    t155 = (x725&((x726!=x727)-x728));

    if (t155 != 41546433415311520LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x729 = INT16_MIN;
	int32_t x730 = INT32_MAX;
	int64_t x731 = INT64_MAX;
	int8_t x732 = INT8_MAX;
	volatile int32_t t156 = 715114573;

    t156 = (x729&((x730!=x731)-x732));

    if (t156 != -32768) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x737 = INT32_MIN;
	int8_t x738 = INT8_MIN;
	int64_t x739 = INT64_MIN;
	int16_t x740 = 2079;
	volatile int32_t t157 = INT32_MIN;

    t157 = (x737&((x738!=x739)-x740));

    if (t157 != INT32_MIN) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x741 = 73331U;
	static int32_t x742 = INT32_MAX;
	volatile int8_t x743 = INT8_MIN;
	static uint8_t x744 = 48U;
	uint32_t t158 = 188397U;

    t158 = (x741&((x742!=x743)-x744));

    if (t158 != 73297U) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint16_t x745 = 10U;
	static uint16_t x746 = 67U;
	static int16_t x747 = INT16_MIN;
	int16_t x748 = -1;

    t159 = (x745&((x746!=x747)-x748));

    if (t159 != 2) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x750 = 24886U;
	static int32_t x751 = 60577;
	volatile int16_t x752 = 468;

    t160 = (x749&((x750!=x751)-x752));

    if (t160 != -467) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint8_t x753 = 21U;
	volatile uint16_t x755 = UINT16_MAX;
	static uint32_t x756 = 11U;
	volatile uint32_t t161 = 1196820972U;

    t161 = (x753&((x754!=x755)-x756));

    if (t161 != 20U) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint32_t x757 = UINT32_MAX;
	int8_t x758 = -1;
	static int32_t x759 = -261733;
	static int64_t x760 = -1LL;

    t162 = (x757&((x758!=x759)-x760));

    if (t162 != 2LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x762 = 113U;
	volatile uint8_t x763 = 1U;
	int64_t x764 = -1LL;
	int64_t t163 = 74LL;

    t163 = (x761&((x762!=x763)-x764));

    if (t163 != 2LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x765 = 21U;
	volatile uint8_t x766 = 6U;
	int32_t x767 = -622231;
	static volatile int32_t t164 = 7714022;

    t164 = (x765&((x766!=x767)-x768));

    if (t164 != 21) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x770 = -3603429756LL;
	int64_t x771 = INT64_MIN;
	volatile int32_t t165 = -39912251;

    t165 = (x769&((x770!=x771)-x772));

    if (t165 != 2) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x773 = 30120180;
	int64_t x774 = INT64_MIN;
	int16_t x775 = INT16_MIN;
	volatile int32_t t166 = 7;

    t166 = (x773&((x774!=x775)-x776));

    if (t166 != 30113792) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x777 = INT32_MAX;
	static int32_t x778 = -1;
	int8_t x779 = INT8_MIN;
	int64_t x780 = 5888599LL;
	int64_t t167 = -510LL;

    t167 = (x777&((x778!=x779)-x780));

    if (t167 != 2141595050LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x781 = INT32_MIN;
	uint16_t x782 = 4872U;
	int64_t x784 = INT64_MAX;

    t168 = (x781&((x782!=x783)-x784));

    if (t168 != INT64_MIN) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint64_t x785 = UINT64_MAX;
	volatile int64_t x786 = 21626449LL;
	int16_t x787 = 0;
	static int16_t x788 = INT16_MAX;

    t169 = (x785&((x786!=x787)-x788));

    if (t169 != 18446744073709518850LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x789 = 1273155715261LL;
	static int64_t x790 = INT64_MIN;
	int16_t x791 = 0;
	int64_t t170 = 12927702553934196LL;

    t170 = (x789&((x790!=x791)-x792));

    if (t170 != 1271310319616LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x793 = -35413908LL;
	volatile uint8_t x795 = 26U;
	uint32_t x796 = UINT32_MAX;
	static int64_t t171 = 2884601365234052LL;

    t171 = (x793&((x794!=x795)-x796));

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static int16_t x797 = 10;
	int32_t x798 = -25977656;
	static volatile int32_t x800 = INT32_MAX;
	volatile int32_t t172 = 895;

    t172 = (x797&((x798!=x799)-x800));

    if (t172 != 2) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x806 = INT32_MAX;
	uint64_t x807 = 13678LLU;
	int16_t x808 = -280;
	static volatile int32_t t173 = 501424793;

    t173 = (x805&((x806!=x807)-x808));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int8_t x809 = INT8_MAX;
	static int32_t t174 = 0;

    t174 = (x809&((x810!=x811)-x812));

    if (t174 != 2) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x813 = -126728034474553LL;
	int16_t x814 = -1;
	uint64_t x815 = UINT64_MAX;
	int64_t x816 = 1611426850LL;
	int64_t t175 = 77351383934LL;

    t175 = (x813&((x814!=x815)-x816));

    if (t175 != -126729108487738LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x817 = 958804LL;
	volatile uint16_t x819 = 450U;
	int16_t x820 = INT16_MAX;
	volatile int64_t t176 = -6772118325258LL;

    t176 = (x817&((x818!=x819)-x820));

    if (t176 != 950272LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x821 = -1;
	int64_t x822 = INT64_MAX;
	int16_t x824 = -1;
	volatile int32_t t177 = -27611112;

    t177 = (x821&((x822!=x823)-x824));

    if (t177 != 2) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x827 = INT64_MIN;
	static int64_t x828 = -41576353955212446LL;
	volatile int64_t t178 = 15402784932LL;

    t178 = (x825&((x826!=x827)-x828));

    if (t178 != 2LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x829 = 2U;
	int64_t x830 = -483LL;
	static uint16_t x831 = 30U;

    t179 = (x829&((x830!=x831)-x832));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x833 = INT16_MIN;
	uint64_t x834 = 1990LLU;
	int64_t x835 = INT64_MIN;
	static volatile int32_t t180 = 1;

    t180 = (x833&((x834!=x835)-x836));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x838 = INT32_MIN;
	static volatile int64_t x839 = -1LL;
	int32_t x840 = -130;

    t181 = (x837&((x838!=x839)-x840));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int64_t x841 = -2993064887LL;
	int8_t x842 = INT8_MIN;
	int64_t t182 = -135361488960648LL;

    t182 = (x841&((x842!=x843)-x844));

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x845 = -1LL;
	static volatile int64_t x847 = -25371136910297LL;
	static int16_t x848 = -1;

    t183 = (x845&((x846!=x847)-x848));

    if (t183 != 2LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x849 = UINT64_MAX;
	int64_t x850 = INT64_MIN;
	volatile int8_t x851 = INT8_MAX;
	uint8_t x852 = 50U;
	static uint64_t t184 = 67495992LLU;

    t184 = (x849&((x850!=x851)-x852));

    if (t184 != 18446744073709551567LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x861 = -1;
	volatile int8_t x862 = -1;
	int64_t x863 = 481732LL;
	int64_t x864 = -238765583998863803LL;

    t185 = (x861&((x862!=x863)-x864));

    if (t185 != 238765583998863804LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x866 = -1LL;
	static uint64_t t186 = 98993LLU;

    t186 = (x865&((x866!=x867)-x868));

    if (t186 != 2LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x869 = INT8_MIN;
	int64_t x870 = -22102LL;
	int32_t x871 = INT32_MIN;
	volatile int64_t t187 = -17076864832703745LL;

    t187 = (x869&((x870!=x871)-x872));

    if (t187 != 591062079744LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x873 = UINT32_MAX;
	int8_t x874 = 1;
	volatile uint8_t x875 = UINT8_MAX;
	int8_t x876 = -1;
	volatile uint32_t t188 = 11U;

    t188 = (x873&((x874!=x875)-x876));

    if (t188 != 2U) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x877 = INT64_MAX;
	int8_t x878 = -1;
	uint8_t x879 = UINT8_MAX;
	int64_t x880 = -1LL;
	volatile int64_t t189 = -1772127907825945727LL;

    t189 = (x877&((x878!=x879)-x880));

    if (t189 != 2LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint8_t x886 = UINT8_MAX;
	int8_t x887 = -1;
	uint64_t x888 = 20519142670836216LLU;
	volatile uint64_t t190 = 1896164LLU;

    t190 = (x885&((x886!=x887)-x888));

    if (t190 != 7680LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x890 = UINT8_MAX;
	int64_t x891 = INT64_MIN;
	uint32_t t191 = 2167645U;

    t191 = (x889&((x890!=x891)-x892));

    if (t191 != 4294967271U) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint64_t x893 = UINT64_MAX;
	int16_t x894 = -1;
	volatile int16_t x895 = INT16_MIN;
	static int16_t x896 = INT16_MIN;
	uint64_t t192 = 56012534LLU;

    t192 = (x893&((x894!=x895)-x896));

    if (t192 != 32769LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x897 = INT16_MIN;
	volatile int32_t x898 = 2578787;
	int64_t x899 = 822007114700LL;
	uint16_t x900 = 356U;
	volatile int32_t t193 = 190496075;

    t193 = (x897&((x898!=x899)-x900));

    if (t193 != -32768) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x903 = INT8_MAX;
	static uint16_t x904 = 149U;
	static volatile int64_t t194 = 38891LL;

    t194 = (x901&((x902!=x903)-x904));

    if (t194 != 58912148740LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile uint64_t x905 = UINT64_MAX;
	static uint8_t x906 = 92U;
	uint32_t x907 = 5928047U;
	static int8_t x908 = 0;
	static volatile uint64_t t195 = 7841663457LLU;

    t195 = (x905&((x906!=x907)-x908));

    if (t195 != 1LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x910 = UINT32_MAX;
	int16_t x911 = INT16_MAX;
	int16_t x912 = INT16_MAX;
	volatile int32_t t196 = 0;

    t196 = (x909&((x910!=x911)-x912));

    if (t196 != 2) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x914 = 5U;

    t197 = (x913&((x914!=x915)-x916));

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x918 = INT64_MIN;
	volatile uint16_t x919 = 20U;
	volatile int8_t x920 = -1;
	volatile int32_t t198 = 185095473;

    t198 = (x917&((x918!=x919)-x920));

    if (t198 != 2) { NG(); } else { ; }
	
}

void f199(void) {
    	static int32_t x921 = INT32_MAX;
	volatile uint16_t x922 = 15890U;
	uint32_t x923 = 155536U;
	int16_t x924 = INT16_MIN;
	static int32_t t199 = -89;

    t199 = (x921&((x922!=x923)-x924));

    if (t199 != 32769) { NG(); } else { ; }
	
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

