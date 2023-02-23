
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

int8_t x1 = INT8_MIN;
volatile int8_t x3 = INT8_MIN;
int16_t x4 = -1;
uint8_t x7 = 10U;
static uint8_t x10 = UINT8_MAX;
int32_t x13 = INT32_MIN;
int16_t x15 = INT16_MIN;
volatile int64_t x24 = 1646514305976055817LL;
uint8_t x25 = 3U;
uint8_t x28 = 26U;
int16_t x30 = INT16_MIN;
int32_t x32 = INT32_MIN;
int32_t x35 = -3;
int64_t x36 = INT64_MIN;
int16_t x40 = 8829;
uint32_t x49 = 803704769U;
int16_t x54 = -312;
static uint64_t x61 = UINT64_MAX;
static int64_t x62 = -1LL;
int32_t x63 = -92;
volatile uint64_t x64 = UINT64_MAX;
uint16_t x68 = UINT16_MAX;
int64_t x76 = INT64_MIN;
int32_t t17 = 1;
static uint32_t x90 = 39U;
uint16_t x92 = 0U;
static int32_t x101 = INT32_MIN;
static uint32_t x102 = 606992U;
int8_t x103 = -1;
int32_t t23 = -1610;
int8_t x122 = INT8_MIN;
int16_t x123 = 3;
volatile uint16_t x125 = 1U;
int64_t x129 = INT64_MIN;
uint64_t x130 = 1232722LLU;
volatile uint32_t x135 = 2U;
uint32_t x136 = 346853U;
int32_t t29 = 0;
static volatile uint16_t x141 = 1U;
int16_t x142 = INT16_MAX;
int8_t x150 = 1;
int16_t x156 = -1;
uint32_t x177 = UINT32_MAX;
static int16_t x178 = 0;
uint16_t x179 = UINT16_MAX;
int32_t t38 = 111;
int8_t x182 = -1;
uint8_t x184 = 49U;
int64_t x189 = -533494932803LL;
uint32_t x190 = 20892612U;
int16_t x191 = INT16_MAX;
volatile int32_t t42 = -44984;
volatile uint64_t x202 = 48207335820053LLU;
uint8_t x207 = 0U;
int32_t x219 = -675;
static int16_t x239 = INT16_MIN;
int16_t x240 = -4;
int16_t x241 = -1;
int8_t x242 = -1;
uint64_t x244 = 7808149203330LLU;
int16_t x250 = INT16_MIN;
volatile int32_t x251 = INT32_MIN;
int32_t x252 = INT32_MAX;
int16_t x253 = INT16_MAX;
int32_t t58 = -187;
int32_t x272 = -1;
static int16_t x282 = -1;
int16_t x285 = INT16_MIN;
volatile int32_t t64 = 7350174;
uint64_t x290 = 3092256696249669LLU;
int16_t x300 = -1;
int32_t x308 = -1;
static uint16_t x310 = 1U;
volatile uint64_t x321 = UINT64_MAX;
static uint32_t x322 = 6U;
int16_t x334 = INT16_MIN;
volatile int16_t x335 = -1;
uint16_t x343 = 2836U;
uint32_t x344 = UINT32_MAX;
uint8_t x348 = 1U;
volatile int8_t x355 = -1;
int8_t x356 = -2;
volatile int32_t t78 = -104743570;
int32_t x359 = INT32_MIN;
uint64_t x361 = UINT64_MAX;
uint32_t x364 = UINT32_MAX;
volatile int32_t t80 = 204854523;
static int64_t x372 = INT64_MIN;
uint8_t x378 = 24U;
static volatile int64_t x380 = INT64_MIN;
volatile int32_t t83 = -65291893;
static volatile int8_t x387 = -1;
int16_t x391 = -1;
static uint32_t x393 = UINT32_MAX;
int8_t x394 = INT8_MAX;
int32_t t87 = -5574;
int8_t x397 = 0;
static int8_t x401 = 0;
int32_t x419 = -98677792;
int16_t x423 = 6913;
int32_t t93 = 770205;
uint8_t x430 = UINT8_MAX;
static int32_t x437 = -1;
volatile uint8_t x439 = UINT8_MAX;
static volatile int32_t t96 = -494264;
volatile int32_t t97 = -2;
static uint64_t x448 = UINT64_MAX;
volatile int32_t x453 = INT32_MAX;
int32_t x461 = -31374197;
int16_t x463 = -723;
static volatile int32_t t102 = -913055192;
int8_t x466 = -1;
static volatile int32_t t103 = -3403656;
int32_t x476 = 25220688;
int32_t t105 = 1;
uint32_t x479 = UINT32_MAX;
int32_t t106 = -693406;
int8_t x487 = -1;
int32_t x489 = -1;
int8_t x490 = INT8_MIN;
uint16_t x495 = 14U;
volatile int16_t x499 = 0;
static volatile int32_t t111 = -2427;
uint32_t x504 = UINT32_MAX;
static int32_t t112 = 125902;
volatile uint32_t x508 = 290328U;
int16_t x512 = INT16_MIN;
static int64_t x514 = INT64_MIN;
uint64_t x515 = 121643479372692290LLU;
int64_t x526 = INT64_MAX;
uint32_t x528 = UINT32_MAX;
static int8_t x534 = 9;
int64_t x535 = -141910556LL;
int32_t x536 = -7943116;
volatile int32_t t120 = -97;
int8_t x540 = INT8_MIN;
int16_t x543 = INT16_MIN;
int8_t x565 = -3;
static int8_t x574 = 7;
volatile uint16_t x579 = 5U;
uint32_t x580 = UINT32_MAX;
int8_t x587 = -44;
int64_t x593 = INT64_MAX;
static uint64_t x606 = 28299794136058558LLU;
uint8_t x615 = 92U;
int32_t x620 = -1;
volatile int8_t x630 = INT8_MAX;
int8_t x637 = INT8_MIN;
int64_t x638 = INT64_MAX;
static uint8_t x652 = 4U;
int32_t x653 = -1;
int32_t x662 = -1;
volatile int8_t x663 = -1;
static int32_t t147 = -157247;
int64_t x676 = INT64_MAX;
int16_t x694 = 9734;
int8_t x696 = INT8_MIN;
int16_t x701 = INT16_MAX;
volatile int8_t x709 = INT8_MIN;
int8_t x710 = -1;
int32_t x717 = INT32_MAX;
int32_t t163 = 812;
uint8_t x736 = 25U;
int32_t x745 = -1;
volatile int32_t t167 = 10;
volatile int16_t x757 = -13943;
uint64_t x760 = 3LLU;
uint16_t x771 = 1638U;
int16_t x776 = INT16_MIN;
uint8_t x779 = 5U;
int32_t t175 = 5503167;
uint64_t x787 = UINT64_MAX;
uint64_t x798 = UINT64_MAX;
int8_t x800 = INT8_MIN;
int32_t t178 = -1;
int32_t x805 = 1577392;
uint64_t x806 = 8066875503054517LLU;
volatile int32_t x807 = -1;
volatile int32_t x830 = 2608054;
uint16_t x836 = 18044U;
volatile int32_t t186 = 42;
uint16_t x848 = UINT16_MAX;
int32_t t188 = 9;
int8_t x850 = INT8_MIN;
static volatile int32_t t189 = 727273279;
int64_t x865 = INT64_MAX;
uint32_t x870 = 312114123U;
volatile int16_t x871 = -478;
int8_t x873 = 28;
static uint16_t x875 = UINT16_MAX;
static int16_t x876 = -1;
volatile int32_t t196 = -100956196;
int32_t x887 = 14387245;
static uint32_t x890 = 8387033U;
uint8_t x893 = 7U;
static uint8_t x894 = UINT8_MAX;
static uint8_t x895 = 105U;
uint16_t x896 = UINT16_MAX;


void f0(void) {
    	volatile int16_t x2 = INT16_MIN;
	int32_t t0 = -1;

    t0 = (x1!=((x2-x3)|x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile uint8_t x5 = 83U;
	int16_t x6 = 1161;
	int16_t x8 = 15;
	int32_t t1 = 253462;

    t1 = (x5!=((x6-x7)|x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = 23U;
	uint8_t x11 = 89U;
	int16_t x12 = -1;
	volatile int32_t t2 = 13025;

    t2 = (x9!=((x10-x11)|x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x14 = 117U;
	static volatile int8_t x16 = INT8_MIN;
	volatile int32_t t3 = 3482;

    t3 = (x13!=((x14-x15)|x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int64_t x17 = 12507557381LL;
	int32_t x18 = -24;
	static uint32_t x19 = 48826U;
	int16_t x20 = 23;
	volatile int32_t t4 = -908531;

    t4 = (x17!=((x18-x19)|x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = 722U;
	static int16_t x22 = INT16_MIN;
	uint8_t x23 = UINT8_MAX;
	int32_t t5 = 3117;

    t5 = (x21!=((x22-x23)|x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x26 = INT16_MAX;
	int16_t x27 = -1;
	volatile int32_t t6 = 14054676;

    t6 = (x25!=((x26-x27)|x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x29 = INT32_MIN;
	uint8_t x31 = 10U;
	int32_t t7 = 24819896;

    t7 = (x29!=((x30-x31)|x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x33 = UINT64_MAX;
	uint32_t x34 = 76941U;
	volatile int32_t t8 = 38;

    t8 = (x33!=((x34-x35)|x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int16_t x37 = 50;
	uint32_t x38 = 341U;
	int8_t x39 = INT8_MIN;
	int32_t t9 = 254996508;

    t9 = (x37!=((x38-x39)|x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x45 = -1LL;
	int64_t x46 = INT64_MAX;
	int32_t x47 = INT32_MAX;
	uint64_t x48 = UINT64_MAX;
	static volatile int32_t t10 = -8083335;

    t10 = (x45!=((x46-x47)|x48));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x50 = INT32_MAX;
	volatile uint32_t x51 = 508187U;
	static int16_t x52 = INT16_MAX;
	int32_t t11 = -176575;

    t11 = (x49!=((x50-x51)|x52));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x53 = -1;
	volatile int32_t x55 = 1;
	int16_t x56 = INT16_MAX;
	volatile int32_t t12 = 0;

    t12 = (x53!=((x54-x55)|x56));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x57 = INT64_MIN;
	static volatile int16_t x58 = 8;
	int8_t x59 = -8;
	int32_t x60 = -1;
	static volatile int32_t t13 = 13968;

    t13 = (x57!=((x58-x59)|x60));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t t14 = -111;

    t14 = (x61!=((x62-x63)|x64));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint32_t x65 = 103722U;
	uint64_t x66 = 732595LLU;
	int8_t x67 = INT8_MIN;
	int32_t t15 = 44362873;

    t15 = (x65!=((x66-x67)|x68));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x69 = 14;
	static int8_t x70 = INT8_MIN;
	uint8_t x71 = UINT8_MAX;
	static int32_t x72 = INT32_MIN;
	int32_t t16 = -975;

    t16 = (x69!=((x70-x71)|x72));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint64_t x73 = 59665502148258833LLU;
	static volatile int64_t x74 = INT64_MIN;
	int16_t x75 = INT16_MIN;

    t17 = (x73!=((x74-x75)|x76));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x81 = INT64_MIN;
	static uint16_t x82 = UINT16_MAX;
	volatile int8_t x83 = INT8_MAX;
	volatile int8_t x84 = -1;
	int32_t t18 = 38;

    t18 = (x81!=((x82-x83)|x84));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x85 = 1;
	volatile int8_t x86 = -1;
	int64_t x87 = INT64_MIN;
	static int8_t x88 = INT8_MAX;
	volatile int32_t t19 = 56121;

    t19 = (x85!=((x86-x87)|x88));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x89 = -1;
	uint64_t x91 = UINT64_MAX;
	volatile int32_t t20 = -154868748;

    t20 = (x89!=((x90-x91)|x92));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x97 = 65225;
	int64_t x98 = INT64_MIN;
	int8_t x99 = INT8_MIN;
	volatile int32_t x100 = INT32_MIN;
	volatile int32_t t21 = 1;

    t21 = (x97!=((x98-x99)|x100));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x104 = INT16_MIN;
	int32_t t22 = -8272764;

    t22 = (x101!=((x102-x103)|x104));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x113 = -27;
	static volatile int64_t x114 = 1479678691LL;
	uint64_t x115 = 200111LLU;
	int16_t x116 = INT16_MAX;

    t23 = (x113!=((x114-x115)|x116));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x117 = -568360933LL;
	static int32_t x118 = INT32_MIN;
	static int64_t x119 = 415314008LL;
	uint32_t x120 = 66U;
	volatile int32_t t24 = -36848;

    t24 = (x117!=((x118-x119)|x120));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x121 = 45U;
	int32_t x124 = -1;
	static volatile int32_t t25 = 9192374;

    t25 = (x121!=((x122-x123)|x124));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x126 = 2998U;
	volatile int32_t x127 = -1;
	int32_t x128 = INT32_MAX;
	volatile int32_t t26 = 55;

    t26 = (x125!=((x126-x127)|x128));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x131 = 205646493785865875LLU;
	static uint64_t x132 = UINT64_MAX;
	static volatile int32_t t27 = -3;

    t27 = (x129!=((x130-x131)|x132));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x133 = INT64_MAX;
	uint32_t x134 = UINT32_MAX;
	int32_t t28 = -23596218;

    t28 = (x133!=((x134-x135)|x136));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int64_t x137 = -1LL;
	static int32_t x138 = 232141602;
	static int8_t x139 = -14;
	static int16_t x140 = INT16_MIN;

    t29 = (x137!=((x138-x139)|x140));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x143 = INT16_MIN;
	volatile int8_t x144 = 1;
	static int32_t t30 = -1084243;

    t30 = (x141!=((x142-x143)|x144));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x145 = 194U;
	int8_t x146 = -1;
	uint32_t x147 = 17343U;
	int16_t x148 = -1;
	int32_t t31 = 404;

    t31 = (x145!=((x146-x147)|x148));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint64_t x149 = UINT64_MAX;
	int64_t x151 = -1LL;
	uint32_t x152 = UINT32_MAX;
	static volatile int32_t t32 = -4;

    t32 = (x149!=((x150-x151)|x152));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x153 = 0LL;
	volatile int32_t x154 = -1;
	int8_t x155 = 5;
	volatile int32_t t33 = 32708;

    t33 = (x153!=((x154-x155)|x156));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x161 = INT32_MAX;
	int32_t x162 = 58145459;
	int8_t x163 = 1;
	uint32_t x164 = UINT32_MAX;
	volatile int32_t t34 = 43;

    t34 = (x161!=((x162-x163)|x164));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x165 = -1LL;
	int32_t x166 = -1;
	int32_t x167 = -328324;
	uint32_t x168 = 66093525U;
	int32_t t35 = 86203;

    t35 = (x165!=((x166-x167)|x168));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x169 = INT8_MAX;
	uint64_t x170 = UINT64_MAX;
	uint32_t x171 = UINT32_MAX;
	uint16_t x172 = UINT16_MAX;
	int32_t t36 = 1;

    t36 = (x169!=((x170-x171)|x172));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x173 = -1;
	uint64_t x174 = 9814549415LLU;
	int32_t x175 = INT32_MIN;
	static uint64_t x176 = UINT64_MAX;
	int32_t t37 = -262123473;

    t37 = (x173!=((x174-x175)|x176));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x180 = INT8_MIN;

    t38 = (x177!=((x178-x179)|x180));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x181 = 0;
	uint32_t x183 = UINT32_MAX;
	int32_t t39 = 31;

    t39 = (x181!=((x182-x183)|x184));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int8_t x185 = -1;
	int32_t x186 = INT32_MIN;
	int64_t x187 = -2362667939017379LL;
	int64_t x188 = INT64_MAX;
	volatile int32_t t40 = 447859;

    t40 = (x185!=((x186-x187)|x188));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x192 = 127U;
	int32_t t41 = -30124805;

    t41 = (x189!=((x190-x191)|x192));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int32_t x193 = INT32_MAX;
	int32_t x194 = INT32_MAX;
	static volatile int64_t x195 = -916091289114LL;
	static int16_t x196 = 869;

    t42 = (x193!=((x194-x195)|x196));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x197 = INT8_MAX;
	int8_t x198 = 0;
	int32_t x199 = 22207;
	uint64_t x200 = UINT64_MAX;
	volatile int32_t t43 = 11640;

    t43 = (x197!=((x198-x199)|x200));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x201 = 50U;
	int64_t x203 = INT64_MAX;
	int8_t x204 = 56;
	volatile int32_t t44 = -616951944;

    t44 = (x201!=((x202-x203)|x204));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x205 = INT32_MIN;
	volatile uint64_t x206 = UINT64_MAX;
	int16_t x208 = 4;
	int32_t t45 = 382044387;

    t45 = (x205!=((x206-x207)|x208));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x209 = INT16_MIN;
	int32_t x210 = INT32_MAX;
	static uint32_t x211 = 40U;
	volatile uint8_t x212 = 1U;
	static volatile int32_t t46 = -577137557;

    t46 = (x209!=((x210-x211)|x212));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x213 = INT8_MAX;
	int32_t x214 = 742897;
	uint64_t x215 = 239099194137007039LLU;
	volatile int16_t x216 = -1617;
	int32_t t47 = 58;

    t47 = (x213!=((x214-x215)|x216));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x217 = 3U;
	int8_t x218 = INT8_MIN;
	static uint32_t x220 = UINT32_MAX;
	int32_t t48 = -307035392;

    t48 = (x217!=((x218-x219)|x220));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x221 = INT64_MIN;
	volatile int16_t x222 = INT16_MIN;
	volatile int64_t x223 = 4061947520641959913LL;
	int16_t x224 = INT16_MAX;
	int32_t t49 = -111;

    t49 = (x221!=((x222-x223)|x224));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x225 = INT32_MIN;
	int32_t x226 = 18310;
	volatile int8_t x227 = INT8_MIN;
	int64_t x228 = -1LL;
	int32_t t50 = -593460376;

    t50 = (x225!=((x226-x227)|x228));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x229 = 6711810218112511LL;
	int32_t x230 = -7170359;
	uint8_t x231 = UINT8_MAX;
	int16_t x232 = -1;
	int32_t t51 = -3;

    t51 = (x229!=((x230-x231)|x232));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x233 = UINT8_MAX;
	int16_t x234 = -1;
	int64_t x235 = INT64_MIN;
	volatile int16_t x236 = -12;
	int32_t t52 = 17;

    t52 = (x233!=((x234-x235)|x236));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile uint8_t x237 = 7U;
	int32_t x238 = 2171587;
	int32_t t53 = -171137;

    t53 = (x237!=((x238-x239)|x240));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x243 = 60;
	volatile int32_t t54 = -70;

    t54 = (x241!=((x242-x243)|x244));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x245 = -1LL;
	int32_t x246 = 221447483;
	static uint32_t x247 = 1U;
	uint64_t x248 = 2230198LLU;
	static int32_t t55 = -9216;

    t55 = (x245!=((x246-x247)|x248));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x249 = -1;
	volatile int32_t t56 = 6;

    t56 = (x249!=((x250-x251)|x252));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x254 = UINT64_MAX;
	int32_t x255 = -1;
	uint32_t x256 = UINT32_MAX;
	int32_t t57 = -4785;

    t57 = (x253!=((x254-x255)|x256));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x257 = INT8_MAX;
	volatile uint32_t x258 = 13U;
	int8_t x259 = INT8_MIN;
	uint64_t x260 = 116417544682570LLU;

    t58 = (x257!=((x258-x259)|x260));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int64_t x261 = INT64_MAX;
	uint32_t x262 = 89134U;
	static int8_t x263 = INT8_MIN;
	int8_t x264 = -1;
	volatile int32_t t59 = 1;

    t59 = (x261!=((x262-x263)|x264));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x265 = 7342285;
	static uint16_t x266 = UINT16_MAX;
	static int8_t x267 = -1;
	int16_t x268 = -1;
	volatile int32_t t60 = -2587;

    t60 = (x265!=((x266-x267)|x268));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int8_t x269 = INT8_MIN;
	uint16_t x270 = UINT16_MAX;
	int32_t x271 = 0;
	static int32_t t61 = 333815407;

    t61 = (x269!=((x270-x271)|x272));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x273 = 3046;
	int64_t x274 = INT64_MIN;
	static int64_t x275 = INT64_MIN;
	uint16_t x276 = 77U;
	int32_t t62 = 100717;

    t62 = (x273!=((x274-x275)|x276));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x281 = -1;
	static int8_t x283 = -1;
	uint8_t x284 = 62U;
	volatile int32_t t63 = -31655590;

    t63 = (x281!=((x282-x283)|x284));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x286 = INT32_MAX;
	uint8_t x287 = 17U;
	uint64_t x288 = 0LLU;

    t64 = (x285!=((x286-x287)|x288));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x289 = 26U;
	int64_t x291 = INT64_MIN;
	int8_t x292 = INT8_MIN;
	volatile int32_t t65 = -4;

    t65 = (x289!=((x290-x291)|x292));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x293 = 1;
	uint16_t x294 = 1U;
	static uint64_t x295 = 792413LLU;
	uint16_t x296 = 0U;
	int32_t t66 = -170888;

    t66 = (x293!=((x294-x295)|x296));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x297 = 4827U;
	int32_t x298 = -1;
	int64_t x299 = INT64_MIN;
	volatile int32_t t67 = -981186;

    t67 = (x297!=((x298-x299)|x300));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x305 = INT8_MIN;
	static int32_t x306 = INT32_MIN;
	uint64_t x307 = UINT64_MAX;
	volatile int32_t t68 = 0;

    t68 = (x305!=((x306-x307)|x308));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x309 = INT32_MIN;
	uint8_t x311 = 5U;
	uint64_t x312 = 15063852659089718LLU;
	static volatile int32_t t69 = -391423777;

    t69 = (x309!=((x310-x311)|x312));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x317 = -1LL;
	uint16_t x318 = 5157U;
	volatile uint16_t x319 = 6U;
	static uint64_t x320 = 2684055980011694026LLU;
	volatile int32_t t70 = -1;

    t70 = (x317!=((x318-x319)|x320));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x323 = INT16_MAX;
	static uint64_t x324 = UINT64_MAX;
	int32_t t71 = -119;

    t71 = (x321!=((x322-x323)|x324));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x325 = INT32_MIN;
	volatile uint32_t x326 = 28835U;
	static volatile int32_t x327 = INT32_MIN;
	volatile uint64_t x328 = UINT64_MAX;
	volatile int32_t t72 = 5320;

    t72 = (x325!=((x326-x327)|x328));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x329 = -1;
	uint64_t x330 = UINT64_MAX;
	uint32_t x331 = UINT32_MAX;
	int8_t x332 = INT8_MIN;
	volatile int32_t t73 = -25487;

    t73 = (x329!=((x330-x331)|x332));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x333 = INT16_MIN;
	volatile uint32_t x336 = UINT32_MAX;
	int32_t t74 = -982;

    t74 = (x333!=((x334-x335)|x336));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x341 = -1;
	uint8_t x342 = 1U;
	int32_t t75 = -22;

    t75 = (x341!=((x342-x343)|x344));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint16_t x345 = UINT16_MAX;
	int8_t x346 = INT8_MAX;
	static int16_t x347 = -1;
	volatile int32_t t76 = 988;

    t76 = (x345!=((x346-x347)|x348));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x349 = 9038U;
	static int8_t x350 = 4;
	uint64_t x351 = 367946278811688457LLU;
	uint32_t x352 = 357517U;
	volatile int32_t t77 = -2381;

    t77 = (x349!=((x350-x351)|x352));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x353 = -1;
	volatile int16_t x354 = INT16_MAX;

    t78 = (x353!=((x354-x355)|x356));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x357 = -2037193LL;
	static int64_t x358 = -2390LL;
	uint8_t x360 = 1U;
	int32_t t79 = 503165;

    t79 = (x357!=((x358-x359)|x360));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x362 = INT64_MIN;
	int32_t x363 = -1;

    t80 = (x361!=((x362-x363)|x364));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x369 = INT8_MIN;
	static int32_t x370 = -1;
	volatile int8_t x371 = INT8_MIN;
	int32_t t81 = 173;

    t81 = (x369!=((x370-x371)|x372));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x373 = UINT64_MAX;
	volatile int8_t x374 = 1;
	uint16_t x375 = 1288U;
	static int8_t x376 = INT8_MAX;
	volatile int32_t t82 = 168559960;

    t82 = (x373!=((x374-x375)|x376));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile uint64_t x377 = 8LLU;
	int8_t x379 = -1;

    t83 = (x377!=((x378-x379)|x380));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x381 = 286475000U;
	volatile int16_t x382 = INT16_MIN;
	uint32_t x383 = 7U;
	int64_t x384 = -1LL;
	int32_t t84 = 2185;

    t84 = (x381!=((x382-x383)|x384));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint32_t x385 = UINT32_MAX;
	int8_t x386 = -1;
	uint64_t x388 = 32091880LLU;
	static volatile int32_t t85 = 1;

    t85 = (x385!=((x386-x387)|x388));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x389 = INT64_MAX;
	static int64_t x390 = INT64_MIN;
	int32_t x392 = INT32_MIN;
	int32_t t86 = 1073045834;

    t86 = (x389!=((x390-x391)|x392));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x395 = INT16_MIN;
	uint16_t x396 = 4U;

    t87 = (x393!=((x394-x395)|x396));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x398 = INT16_MIN;
	int8_t x399 = INT8_MAX;
	uint32_t x400 = 67U;
	volatile int32_t t88 = 76;

    t88 = (x397!=((x398-x399)|x400));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint16_t x402 = 24646U;
	uint16_t x403 = UINT16_MAX;
	int16_t x404 = INT16_MAX;
	int32_t t89 = 112363733;

    t89 = (x401!=((x402-x403)|x404));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x405 = INT32_MAX;
	volatile int32_t x406 = INT32_MIN;
	uint64_t x407 = 7717259LLU;
	int16_t x408 = INT16_MAX;
	static int32_t t90 = 3;

    t90 = (x405!=((x406-x407)|x408));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x413 = 45430LL;
	volatile int8_t x414 = INT8_MIN;
	volatile int32_t x415 = -1;
	static uint64_t x416 = UINT64_MAX;
	volatile int32_t t91 = -149702838;

    t91 = (x413!=((x414-x415)|x416));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x417 = INT64_MAX;
	volatile uint16_t x418 = UINT16_MAX;
	uint16_t x420 = 119U;
	int32_t t92 = -25270261;

    t92 = (x417!=((x418-x419)|x420));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x421 = UINT32_MAX;
	int32_t x422 = INT32_MAX;
	static uint16_t x424 = UINT16_MAX;

    t93 = (x421!=((x422-x423)|x424));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x429 = INT8_MAX;
	int16_t x431 = INT16_MIN;
	uint32_t x432 = 4961U;
	static volatile int32_t t94 = 103;

    t94 = (x429!=((x430-x431)|x432));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x433 = INT64_MIN;
	uint16_t x434 = 17U;
	volatile uint32_t x435 = 2877227U;
	volatile uint16_t x436 = 37U;
	volatile int32_t t95 = 2;

    t95 = (x433!=((x434-x435)|x436));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x438 = -130801706;
	int8_t x440 = INT8_MIN;

    t96 = (x437!=((x438-x439)|x440));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x441 = 15U;
	int32_t x442 = -194;
	int8_t x443 = INT8_MAX;
	uint64_t x444 = 117957336335676416LLU;

    t97 = (x441!=((x442-x443)|x444));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x445 = -4;
	int8_t x446 = 6;
	int16_t x447 = INT16_MAX;
	static volatile int32_t t98 = 764152;

    t98 = (x445!=((x446-x447)|x448));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x449 = INT64_MAX;
	int16_t x450 = -1;
	int64_t x451 = -1LL;
	int16_t x452 = INT16_MAX;
	volatile int32_t t99 = 253;

    t99 = (x449!=((x450-x451)|x452));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint16_t x454 = 0U;
	int16_t x455 = -1;
	volatile int16_t x456 = INT16_MAX;
	volatile int32_t t100 = -159;

    t100 = (x453!=((x454-x455)|x456));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x457 = 0;
	int32_t x458 = -231107443;
	static uint16_t x459 = 544U;
	int8_t x460 = -1;
	static int32_t t101 = 49;

    t101 = (x457!=((x458-x459)|x460));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int8_t x462 = 26;
	uint32_t x464 = 1U;

    t102 = (x461!=((x462-x463)|x464));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x465 = INT16_MIN;
	static uint32_t x467 = 3U;
	int16_t x468 = -748;

    t103 = (x465!=((x466-x467)|x468));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x469 = INT16_MIN;
	volatile uint8_t x470 = UINT8_MAX;
	int32_t x471 = 728052;
	int16_t x472 = INT16_MIN;
	volatile int32_t t104 = 106080;

    t104 = (x469!=((x470-x471)|x472));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint8_t x473 = UINT8_MAX;
	int16_t x474 = -7;
	uint32_t x475 = 105738780U;

    t105 = (x473!=((x474-x475)|x476));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint16_t x477 = UINT16_MAX;
	volatile uint16_t x478 = 2U;
	static volatile uint32_t x480 = UINT32_MAX;

    t106 = (x477!=((x478-x479)|x480));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x481 = UINT64_MAX;
	uint16_t x482 = 23801U;
	uint8_t x483 = 5U;
	uint16_t x484 = 8U;
	volatile int32_t t107 = 43067;

    t107 = (x481!=((x482-x483)|x484));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int32_t x485 = -1;
	volatile int32_t x486 = INT32_MIN;
	volatile uint8_t x488 = 0U;
	int32_t t108 = 1552;

    t108 = (x485!=((x486-x487)|x488));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x491 = 194U;
	static uint16_t x492 = 30U;
	static volatile int32_t t109 = -1;

    t109 = (x489!=((x490-x491)|x492));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x493 = INT32_MIN;
	uint16_t x494 = 1U;
	uint64_t x496 = 1567486LLU;
	int32_t t110 = 0;

    t110 = (x493!=((x494-x495)|x496));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x497 = INT64_MAX;
	int32_t x498 = -1564;
	int32_t x500 = INT32_MAX;

    t111 = (x497!=((x498-x499)|x500));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x501 = 36;
	static volatile uint16_t x502 = 1202U;
	static int32_t x503 = -845;

    t112 = (x501!=((x502-x503)|x504));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x505 = -66943062LL;
	static int16_t x506 = INT16_MAX;
	volatile uint16_t x507 = 77U;
	int32_t t113 = 1;

    t113 = (x505!=((x506-x507)|x508));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x509 = 236LLU;
	uint8_t x510 = UINT8_MAX;
	volatile int16_t x511 = INT16_MIN;
	int32_t t114 = -17;

    t114 = (x509!=((x510-x511)|x512));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile int16_t x513 = INT16_MAX;
	int8_t x516 = -1;
	volatile int32_t t115 = 13148983;

    t115 = (x513!=((x514-x515)|x516));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x517 = 58U;
	uint16_t x518 = 1U;
	volatile uint64_t x519 = UINT64_MAX;
	uint32_t x520 = UINT32_MAX;
	volatile int32_t t116 = -627450912;

    t116 = (x517!=((x518-x519)|x520));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x521 = INT32_MIN;
	int8_t x522 = -1;
	static int16_t x523 = -1727;
	int16_t x524 = -1;
	static volatile int32_t t117 = 212;

    t117 = (x521!=((x522-x523)|x524));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x525 = INT16_MIN;
	uint32_t x527 = UINT32_MAX;
	int32_t t118 = -346802440;

    t118 = (x525!=((x526-x527)|x528));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint64_t x529 = UINT64_MAX;
	uint64_t x530 = UINT64_MAX;
	uint32_t x531 = 17U;
	static int32_t x532 = INT32_MIN;
	volatile int32_t t119 = 32470;

    t119 = (x529!=((x530-x531)|x532));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x533 = INT8_MIN;

    t120 = (x533!=((x534-x535)|x536));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x537 = INT8_MIN;
	uint64_t x538 = 1302342618496052303LLU;
	int16_t x539 = INT16_MIN;
	volatile int32_t t121 = 11466;

    t121 = (x537!=((x538-x539)|x540));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int8_t x541 = INT8_MIN;
	int32_t x542 = INT32_MIN;
	uint64_t x544 = 184909332363629398LLU;
	volatile int32_t t122 = -691821458;

    t122 = (x541!=((x542-x543)|x544));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x545 = -153;
	int8_t x546 = -52;
	uint8_t x547 = 12U;
	int16_t x548 = -7200;
	static volatile int32_t t123 = 6330114;

    t123 = (x545!=((x546-x547)|x548));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x549 = INT16_MIN;
	volatile int16_t x550 = INT16_MIN;
	int8_t x551 = 28;
	uint32_t x552 = UINT32_MAX;
	volatile int32_t t124 = -50;

    t124 = (x549!=((x550-x551)|x552));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x566 = 29780159U;
	int16_t x567 = 482;
	uint16_t x568 = 61U;
	int32_t t125 = -5;

    t125 = (x565!=((x566-x567)|x568));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x569 = 10LLU;
	uint32_t x570 = UINT32_MAX;
	int64_t x571 = -1LL;
	uint16_t x572 = 300U;
	int32_t t126 = 471825337;

    t126 = (x569!=((x570-x571)|x572));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x573 = UINT32_MAX;
	uint16_t x575 = 29U;
	uint8_t x576 = UINT8_MAX;
	static int32_t t127 = 52;

    t127 = (x573!=((x574-x575)|x576));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int32_t x577 = 89;
	uint8_t x578 = 116U;
	int32_t t128 = -308035;

    t128 = (x577!=((x578-x579)|x580));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint64_t x581 = 112912LLU;
	volatile uint16_t x582 = UINT16_MAX;
	uint64_t x583 = UINT64_MAX;
	int16_t x584 = -1;
	volatile int32_t t129 = 13887;

    t129 = (x581!=((x582-x583)|x584));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x585 = INT64_MAX;
	uint8_t x586 = UINT8_MAX;
	int8_t x588 = INT8_MAX;
	volatile int32_t t130 = -20738;

    t130 = (x585!=((x586-x587)|x588));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x589 = 1116U;
	int16_t x590 = -1;
	uint32_t x591 = 845060341U;
	volatile int16_t x592 = -1;
	int32_t t131 = 89854;

    t131 = (x589!=((x590-x591)|x592));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x594 = 12;
	uint64_t x595 = UINT64_MAX;
	volatile int32_t x596 = 685;
	volatile int32_t t132 = 1268;

    t132 = (x593!=((x594-x595)|x596));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x597 = INT16_MIN;
	uint16_t x598 = 170U;
	uint64_t x599 = UINT64_MAX;
	static uint64_t x600 = 4200116410865865029LLU;
	static int32_t t133 = 10603;

    t133 = (x597!=((x598-x599)|x600));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint32_t x601 = UINT32_MAX;
	int16_t x602 = INT16_MAX;
	int16_t x603 = INT16_MIN;
	uint8_t x604 = UINT8_MAX;
	static int32_t t134 = -6537933;

    t134 = (x601!=((x602-x603)|x604));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint64_t x605 = 28LLU;
	int32_t x607 = INT32_MIN;
	uint64_t x608 = UINT64_MAX;
	volatile int32_t t135 = -62;

    t135 = (x605!=((x606-x607)|x608));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x609 = -1;
	volatile uint32_t x610 = UINT32_MAX;
	volatile int16_t x611 = -1;
	int32_t x612 = -1;
	int32_t t136 = -1;

    t136 = (x609!=((x610-x611)|x612));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x613 = 23;
	volatile int16_t x614 = INT16_MIN;
	volatile uint32_t x616 = 14U;
	int32_t t137 = 7359;

    t137 = (x613!=((x614-x615)|x616));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static int8_t x617 = -1;
	int64_t x618 = INT64_MIN;
	static uint64_t x619 = UINT64_MAX;
	int32_t t138 = 11928428;

    t138 = (x617!=((x618-x619)|x620));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x625 = INT64_MAX;
	volatile int8_t x626 = -7;
	int8_t x627 = INT8_MIN;
	static int8_t x628 = 23;
	volatile int32_t t139 = 8;

    t139 = (x625!=((x626-x627)|x628));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x629 = -1;
	volatile int32_t x631 = -1;
	volatile int16_t x632 = INT16_MIN;
	static volatile int32_t t140 = 0;

    t140 = (x629!=((x630-x631)|x632));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x633 = INT32_MIN;
	int8_t x634 = INT8_MAX;
	uint64_t x635 = 46929634LLU;
	static int32_t x636 = INT32_MIN;
	volatile int32_t t141 = -143145089;

    t141 = (x633!=((x634-x635)|x636));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x639 = INT16_MAX;
	uint16_t x640 = UINT16_MAX;
	volatile int32_t t142 = 0;

    t142 = (x637!=((x638-x639)|x640));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x641 = INT32_MIN;
	int16_t x642 = 4027;
	static uint16_t x643 = 5388U;
	int32_t x644 = -1;
	volatile int32_t t143 = -119746054;

    t143 = (x641!=((x642-x643)|x644));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x649 = 61U;
	uint16_t x650 = 2U;
	static int8_t x651 = -4;
	int32_t t144 = -1;

    t144 = (x649!=((x650-x651)|x652));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x654 = INT16_MIN;
	int16_t x655 = INT16_MIN;
	uint64_t x656 = 16978055309818LLU;
	int32_t t145 = -2412;

    t145 = (x653!=((x654-x655)|x656));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x657 = UINT16_MAX;
	volatile int8_t x658 = INT8_MIN;
	int64_t x659 = INT64_MIN;
	static volatile int16_t x660 = -50;
	static int32_t t146 = 1415180;

    t146 = (x657!=((x658-x659)|x660));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x661 = 6;
	uint16_t x664 = 3U;

    t147 = (x661!=((x662-x663)|x664));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x665 = 824963LLU;
	volatile uint16_t x666 = 3U;
	static uint64_t x667 = 11671166112942LLU;
	uint32_t x668 = 322U;
	int32_t t148 = -6342555;

    t148 = (x665!=((x666-x667)|x668));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x669 = 25263LLU;
	static uint16_t x670 = 101U;
	int16_t x671 = INT16_MIN;
	uint8_t x672 = UINT8_MAX;
	int32_t t149 = -173;

    t149 = (x669!=((x670-x671)|x672));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static int32_t x673 = INT32_MAX;
	int64_t x674 = INT64_MIN;
	static int8_t x675 = -1;
	int32_t t150 = 1;

    t150 = (x673!=((x674-x675)|x676));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x677 = 48;
	int8_t x678 = INT8_MAX;
	int64_t x679 = INT64_MAX;
	volatile uint8_t x680 = 1U;
	volatile int32_t t151 = -1236;

    t151 = (x677!=((x678-x679)|x680));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x681 = -6066;
	int8_t x682 = INT8_MIN;
	uint8_t x683 = UINT8_MAX;
	static int32_t x684 = INT32_MIN;
	static volatile int32_t t152 = -6121280;

    t152 = (x681!=((x682-x683)|x684));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x689 = INT64_MIN;
	volatile int32_t x690 = INT32_MAX;
	static int32_t x691 = 11547;
	static int32_t x692 = INT32_MIN;
	static int32_t t153 = 0;

    t153 = (x689!=((x690-x691)|x692));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x693 = INT16_MIN;
	int16_t x695 = -1;
	int32_t t154 = -2;

    t154 = (x693!=((x694-x695)|x696));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x697 = 13U;
	volatile uint64_t x698 = 1LLU;
	int64_t x699 = INT64_MIN;
	int32_t x700 = INT32_MAX;
	static volatile int32_t t155 = -22;

    t155 = (x697!=((x698-x699)|x700));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x702 = INT16_MIN;
	uint8_t x703 = 99U;
	int64_t x704 = -65021432137183214LL;
	static int32_t t156 = 20097;

    t156 = (x701!=((x702-x703)|x704));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x705 = 814;
	volatile uint32_t x706 = UINT32_MAX;
	int16_t x707 = INT16_MIN;
	int8_t x708 = 1;
	volatile int32_t t157 = 1986797;

    t157 = (x705!=((x706-x707)|x708));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x711 = INT16_MIN;
	static int32_t x712 = INT32_MIN;
	int32_t t158 = -948965;

    t158 = (x709!=((x710-x711)|x712));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x713 = UINT64_MAX;
	uint32_t x714 = UINT32_MAX;
	volatile int16_t x715 = INT16_MIN;
	int16_t x716 = INT16_MAX;
	static volatile int32_t t159 = -3803560;

    t159 = (x713!=((x714-x715)|x716));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int16_t x718 = INT16_MIN;
	uint8_t x719 = UINT8_MAX;
	volatile int32_t x720 = INT32_MAX;
	int32_t t160 = -3;

    t160 = (x717!=((x718-x719)|x720));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x721 = -1;
	static int64_t x722 = INT64_MIN;
	static int16_t x723 = -31;
	uint64_t x724 = 17374364699589248LLU;
	volatile int32_t t161 = -2610021;

    t161 = (x721!=((x722-x723)|x724));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x725 = 14286850916LLU;
	static int8_t x726 = -1;
	volatile int8_t x727 = -1;
	uint64_t x728 = 290858194528836LLU;
	volatile int32_t t162 = -225;

    t162 = (x725!=((x726-x727)|x728));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x729 = INT64_MIN;
	static int64_t x730 = 27984865LL;
	static volatile int32_t x731 = INT32_MIN;
	uint32_t x732 = UINT32_MAX;

    t163 = (x729!=((x730-x731)|x732));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x733 = 6U;
	int64_t x734 = INT64_MIN;
	volatile int8_t x735 = -1;
	int32_t t164 = -5;

    t164 = (x733!=((x734-x735)|x736));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint8_t x737 = UINT8_MAX;
	volatile int8_t x738 = -1;
	int64_t x739 = -1LL;
	int16_t x740 = -1;
	volatile int32_t t165 = 138681;

    t165 = (x737!=((x738-x739)|x740));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x741 = 26U;
	int64_t x742 = INT64_MAX;
	uint16_t x743 = 24078U;
	uint32_t x744 = 2U;
	int32_t t166 = 664013;

    t166 = (x741!=((x742-x743)|x744));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int8_t x746 = INT8_MIN;
	int64_t x747 = -2393380LL;
	uint64_t x748 = 404905LLU;

    t167 = (x745!=((x746-x747)|x748));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x749 = INT8_MAX;
	uint8_t x750 = 1U;
	uint16_t x751 = UINT16_MAX;
	static volatile uint32_t x752 = 323571U;
	volatile int32_t t168 = 19495;

    t168 = (x749!=((x750-x751)|x752));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static int64_t x753 = 575978467152535699LL;
	uint64_t x754 = 13291594767339874LLU;
	int16_t x755 = INT16_MIN;
	static uint16_t x756 = 3U;
	volatile int32_t t169 = -13219;

    t169 = (x753!=((x754-x755)|x756));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x758 = -1;
	volatile int64_t x759 = INT64_MAX;
	static int32_t t170 = 6;

    t170 = (x757!=((x758-x759)|x760));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x761 = 85824U;
	int32_t x762 = INT32_MAX;
	static uint64_t x763 = UINT64_MAX;
	int32_t x764 = -26351402;
	volatile int32_t t171 = -61227;

    t171 = (x761!=((x762-x763)|x764));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x765 = -1;
	uint32_t x766 = UINT32_MAX;
	int64_t x767 = -2300111377LL;
	int16_t x768 = INT16_MAX;
	int32_t t172 = -11973598;

    t172 = (x765!=((x766-x767)|x768));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint32_t x769 = 1778U;
	uint16_t x770 = UINT16_MAX;
	uint32_t x772 = 52624422U;
	int32_t t173 = -752;

    t173 = (x769!=((x770-x771)|x772));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint8_t x773 = UINT8_MAX;
	uint32_t x774 = UINT32_MAX;
	static int16_t x775 = INT16_MAX;
	int32_t t174 = -27399;

    t174 = (x773!=((x774-x775)|x776));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint8_t x777 = 115U;
	static int8_t x778 = -1;
	volatile uint8_t x780 = 47U;

    t175 = (x777!=((x778-x779)|x780));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x785 = INT64_MIN;
	volatile int16_t x786 = 11597;
	static volatile int64_t x788 = -23LL;
	static int32_t t176 = 15;

    t176 = (x785!=((x786-x787)|x788));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x793 = -1;
	uint64_t x794 = 8586098091LLU;
	int64_t x795 = INT64_MAX;
	volatile int32_t x796 = INT32_MIN;
	volatile int32_t t177 = -732;

    t177 = (x793!=((x794-x795)|x796));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x797 = INT32_MIN;
	int32_t x799 = -337386;

    t178 = (x797!=((x798-x799)|x800));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x801 = INT8_MIN;
	uint8_t x802 = UINT8_MAX;
	uint8_t x803 = 43U;
	int32_t x804 = INT32_MIN;
	volatile int32_t t179 = -1453670;

    t179 = (x801!=((x802-x803)|x804));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x808 = -3;
	static int32_t t180 = 0;

    t180 = (x805!=((x806-x807)|x808));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x809 = INT64_MAX;
	static int8_t x810 = 2;
	uint16_t x811 = 6U;
	volatile int32_t x812 = INT32_MIN;
	volatile int32_t t181 = 827619;

    t181 = (x809!=((x810-x811)|x812));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile int16_t x813 = INT16_MAX;
	volatile int32_t x814 = 8;
	int64_t x815 = 3818LL;
	uint16_t x816 = 5223U;
	volatile int32_t t182 = 1;

    t182 = (x813!=((x814-x815)|x816));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x821 = 1U;
	static volatile uint64_t x822 = 73586928879388126LLU;
	int32_t x823 = 3;
	static int64_t x824 = -29727077958934LL;
	int32_t t183 = -2344164;

    t183 = (x821!=((x822-x823)|x824));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x825 = INT8_MIN;
	volatile uint64_t x826 = 1233LLU;
	int8_t x827 = INT8_MIN;
	int64_t x828 = -4357592502287LL;
	int32_t t184 = 209245493;

    t184 = (x825!=((x826-x827)|x828));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x829 = INT8_MIN;
	int64_t x831 = -1LL;
	volatile int16_t x832 = -1;
	static int32_t t185 = -602;

    t185 = (x829!=((x830-x831)|x832));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x833 = -532LL;
	uint32_t x834 = UINT32_MAX;
	int8_t x835 = 10;

    t186 = (x833!=((x834-x835)|x836));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int16_t x837 = 10366;
	volatile int16_t x838 = INT16_MIN;
	uint16_t x839 = UINT16_MAX;
	int64_t x840 = 194665870533LL;
	volatile int32_t t187 = -8560;

    t187 = (x837!=((x838-x839)|x840));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x845 = INT16_MIN;
	int64_t x846 = INT64_MIN;
	int8_t x847 = -1;

    t188 = (x845!=((x846-x847)|x848));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x849 = UINT64_MAX;
	uint64_t x851 = 54614049LLU;
	int8_t x852 = 3;

    t189 = (x849!=((x850-x851)|x852));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int64_t x853 = -1LL;
	uint8_t x854 = 20U;
	volatile uint16_t x855 = UINT16_MAX;
	static int8_t x856 = -1;
	int32_t t190 = 220326;

    t190 = (x853!=((x854-x855)|x856));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x857 = -1;
	volatile uint64_t x858 = 35130766218017LLU;
	uint32_t x859 = 81629U;
	int8_t x860 = -1;
	volatile int32_t t191 = 10;

    t191 = (x857!=((x858-x859)|x860));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint64_t x866 = UINT64_MAX;
	static int64_t x867 = 0LL;
	volatile int16_t x868 = -12;
	int32_t t192 = 918;

    t192 = (x865!=((x866-x867)|x868));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x869 = 11294U;
	static int64_t x872 = -6271202LL;
	volatile int32_t t193 = 172023;

    t193 = (x869!=((x870-x871)|x872));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint16_t x874 = 174U;
	int32_t t194 = 15136;

    t194 = (x873!=((x874-x875)|x876));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int32_t x877 = INT32_MIN;
	uint64_t x878 = 137721273248631LLU;
	volatile int32_t x879 = INT32_MAX;
	uint32_t x880 = 631510U;
	int32_t t195 = -4949993;

    t195 = (x877!=((x878-x879)|x880));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x881 = -1;
	uint32_t x882 = UINT32_MAX;
	static int8_t x883 = -1;
	static uint8_t x884 = UINT8_MAX;

    t196 = (x881!=((x882-x883)|x884));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x885 = INT8_MIN;
	static volatile uint32_t x886 = 795U;
	uint32_t x888 = UINT32_MAX;
	int32_t t197 = 28404;

    t197 = (x885!=((x886-x887)|x888));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x889 = INT16_MIN;
	int8_t x891 = -1;
	int64_t x892 = INT64_MIN;
	int32_t t198 = 2006025;

    t198 = (x889!=((x890-x891)|x892));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int32_t t199 = -4902735;

    t199 = (x893!=((x894-x895)|x896));

    if (t199 != 1) { NG(); } else { ; }
	
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

