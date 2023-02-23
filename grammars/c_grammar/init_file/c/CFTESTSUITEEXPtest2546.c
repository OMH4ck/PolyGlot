
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

static volatile int16_t x4 = INT16_MIN;
uint8_t x5 = 1U;
static volatile int8_t x9 = -1;
static int16_t x19 = -481;
int16_t x26 = INT16_MAX;
volatile int64_t x30 = -1LL;
int32_t x32 = 35;
static int64_t t9 = -69196193465960LL;
int64_t x45 = INT64_MAX;
static uint64_t x58 = 1359128388140661LLU;
static uint64_t t14 = 31LLU;
uint64_t x62 = 3225243905494857LLU;
int64_t x66 = -1LL;
int32_t x69 = -1;
int16_t x73 = INT16_MIN;
static uint16_t x76 = UINT16_MAX;
static uint8_t x87 = UINT8_MAX;
uint16_t x92 = 17U;
int8_t x94 = INT8_MAX;
volatile int64_t x97 = -8138866955436LL;
volatile int32_t x103 = 26984;
uint32_t x108 = 1377569U;
uint8_t x109 = 0U;
static uint8_t x111 = 2U;
uint64_t x113 = 852858652LLU;
volatile int64_t x114 = INT64_MIN;
int32_t x123 = -806481;
static uint64_t t32 = 8124844542668360721LLU;
int8_t x141 = INT8_MIN;
uint8_t x150 = 76U;
volatile int32_t t37 = 0;
int32_t t38 = -4455;
static int64_t x157 = 3954004872499LL;
uint16_t x159 = 0U;
int64_t t40 = 1905415723LL;
int64_t x171 = 519732110223406485LL;
volatile int64_t x178 = -1LL;
uint32_t x181 = 43445U;
int8_t x185 = INT8_MAX;
uint64_t x186 = 4288659164LLU;
uint64_t x196 = 6292370105453LLU;
static int64_t x197 = 163951LL;
int32_t x198 = 822750687;
int8_t x199 = -3;
static uint64_t t49 = 12890108642375954LLU;
uint8_t x202 = 78U;
volatile int32_t x209 = INT32_MAX;
uint64_t x213 = 82095098LLU;
int8_t x214 = -1;
static uint64_t x218 = 4LLU;
int64_t x225 = -248219687300063931LL;
uint64_t x236 = 85217730853401968LLU;
uint64_t t58 = 15LLU;
int16_t x237 = INT16_MIN;
uint32_t x249 = 297650391U;
int32_t x251 = INT32_MIN;
int16_t x254 = -40;
int32_t x256 = INT32_MIN;
volatile uint16_t x258 = 12U;
uint64_t x265 = 148056972916LLU;
static uint64_t x268 = 1048593022687LLU;
uint16_t x278 = UINT16_MAX;
volatile int64_t t70 = -33922904460324980LL;
volatile int64_t t71 = -1778717229LL;
static volatile int32_t t72 = 53770104;
volatile int64_t x299 = INT64_MAX;
static int64_t t74 = 4583510933435182105LL;
int16_t x303 = -655;
static uint16_t x305 = UINT16_MAX;
volatile int32_t x306 = INT32_MAX;
volatile int16_t x307 = -341;
int64_t x311 = 19751LL;
volatile int16_t x314 = 1269;
uint64_t t78 = 7469142LLU;
int16_t x317 = INT16_MAX;
static volatile uint32_t t79 = 0U;
volatile uint32_t x324 = UINT32_MAX;
static uint64_t x333 = 1374815LLU;
uint32_t t85 = 25U;
static int16_t x351 = INT16_MAX;
int64_t x355 = 272280128653477LL;
volatile int64_t t88 = 5027517542LL;
volatile int64_t t89 = -5327695LL;
int8_t x365 = -28;
volatile uint64_t t91 = 3LLU;
int64_t t92 = -7655554282273483LL;
int8_t x376 = INT8_MIN;
static uint16_t x378 = UINT16_MAX;
static volatile int32_t x379 = -1;
uint16_t x387 = UINT16_MAX;
static int8_t x391 = INT8_MAX;
int8_t x404 = -63;
static int32_t t100 = 2;
int16_t x408 = INT16_MIN;
static volatile int64_t t101 = -18371559608LL;
static int8_t x409 = INT8_MIN;
uint64_t x417 = 199LLU;
static int32_t x419 = INT32_MIN;
int8_t x422 = INT8_MIN;
volatile int8_t x424 = INT8_MIN;
volatile uint8_t x428 = UINT8_MAX;
uint8_t x432 = 15U;
int32_t x434 = -1;
static volatile int16_t x435 = INT16_MIN;
volatile int8_t x436 = -1;
static volatile int8_t x443 = INT8_MIN;
int8_t x445 = 0;
uint16_t x448 = 2324U;
volatile int32_t t111 = -1746526;
int16_t x450 = 235;
int32_t x452 = INT32_MIN;
volatile uint32_t t113 = 3U;
static int16_t x457 = -1;
int64_t x462 = INT64_MIN;
uint64_t t116 = 70069439977082728LLU;
int16_t x471 = -1;
uint64_t x480 = 459384402873LLU;
static uint64_t t119 = 146410744431304LLU;
static uint64_t x481 = 209030875953645LLU;
static uint16_t x486 = 836U;
volatile uint32_t x492 = 6507U;
static int16_t x495 = -1727;
uint8_t x496 = 4U;
volatile int32_t t123 = -255;
int8_t x499 = -1;
static volatile int16_t x500 = -232;
volatile int32_t t124 = 6;
static volatile int32_t t127 = 3103205;
uint64_t t129 = 3545655493795635LLU;
volatile int32_t x521 = INT32_MIN;
static int16_t x526 = -1;
static int16_t x527 = 0;
static volatile uint64_t x528 = UINT64_MAX;
int32_t x529 = INT32_MIN;
volatile int8_t x532 = INT8_MAX;
volatile uint32_t t132 = 5422035U;
uint32_t x537 = UINT32_MAX;
int16_t x539 = -2935;
int64_t x540 = INT64_MIN;
uint16_t x541 = UINT16_MAX;
int32_t x546 = INT32_MIN;
int64_t x551 = INT64_MIN;
volatile int32_t x561 = INT32_MIN;
static int64_t x574 = -1LL;
int16_t x576 = -1;
uint64_t x580 = 19LLU;
volatile int8_t x584 = 1;
static int32_t x585 = -1;
static int64_t x588 = -1LL;
int16_t x590 = INT16_MAX;
static int16_t x591 = INT16_MAX;
int32_t x592 = INT32_MIN;
static uint32_t x599 = 1369762U;
static int32_t x600 = -1;
int64_t x601 = 100904699608160LL;
static volatile uint8_t x603 = 1U;
static int64_t t150 = 26LL;
volatile int64_t x613 = -141LL;
int16_t x616 = INT16_MAX;
volatile int64_t x626 = INT64_MIN;
int32_t x631 = INT32_MIN;
int32_t x633 = -1;
static uint8_t x637 = 20U;
int32_t t159 = 724053497;
int32_t x643 = INT32_MIN;
volatile int64_t t160 = 70199498LL;
static int32_t x650 = 60870970;
uint8_t x659 = UINT8_MAX;
uint32_t t165 = 5645261U;
static int64_t x666 = 1LL;
int8_t x668 = INT8_MAX;
static volatile uint64_t t166 = 125172321LLU;
int8_t x674 = INT8_MAX;
static int16_t x681 = -1928;
volatile uint64_t x685 = UINT64_MAX;
volatile uint64_t t171 = 1178690013923415820LLU;
uint64_t x691 = 58771792605649LLU;
int8_t x692 = 10;
int64_t x698 = INT64_MAX;
volatile int8_t x704 = -1;
int8_t x714 = 54;
volatile int32_t x718 = INT32_MAX;
static uint16_t x720 = UINT16_MAX;
static int16_t x725 = -1;
volatile int32_t x734 = INT32_MIN;
static int8_t x742 = INT8_MIN;
int8_t x744 = -1;
int8_t x747 = INT8_MIN;
volatile int16_t x749 = -1;
uint32_t x750 = 31038U;
int8_t x756 = INT8_MIN;
uint16_t x758 = 219U;
volatile uint32_t x775 = 12894578U;
static uint8_t x779 = 10U;
uint16_t x785 = UINT16_MAX;
int8_t x787 = INT8_MAX;
uint16_t x788 = 1260U;
static volatile int32_t t196 = 82;
volatile int64_t t197 = -2002432969259185LL;
int8_t x793 = INT8_MIN;
int16_t x794 = -19;
int32_t x797 = INT32_MAX;


void f0(void) {
    	int8_t x1 = 0;
	uint16_t x2 = UINT16_MAX;
	volatile int8_t x3 = INT8_MAX;
	static volatile int32_t t0 = -40724826;

    t0 = (x1&((x2|x3)^x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint64_t x6 = UINT64_MAX;
	static int8_t x7 = INT8_MIN;
	uint32_t x8 = UINT32_MAX;
	volatile uint64_t t1 = 6199666806LLU;

    t1 = (x5&((x6|x7)^x8));

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x10 = INT8_MAX;
	int16_t x11 = INT16_MAX;
	uint16_t x12 = 0U;
	volatile int32_t t2 = -1003;

    t2 = (x9&((x10|x11)^x12));

    if (t2 != 32767) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile int32_t x13 = INT32_MIN;
	int64_t x14 = -1596446500370311706LL;
	static int32_t x15 = -120310970;
	uint32_t x16 = UINT32_MAX;
	volatile int64_t t3 = 2069100356797048LL;

    t3 = (x13&((x14|x15)^x16));

    if (t3 != -4294967296LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = -1;
	int32_t x18 = 20788148;
	uint16_t x20 = 0U;
	volatile int32_t t4 = 82328367;

    t4 = (x17&((x18|x19)^x20));

    if (t4 != -65) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = 0LLU;
	volatile int32_t x22 = -1;
	uint64_t x23 = UINT64_MAX;
	int64_t x24 = -861LL;
	uint64_t t5 = 35783566721546169LLU;

    t5 = (x21&((x22|x23)^x24));

    if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = INT32_MIN;
	volatile uint16_t x27 = UINT16_MAX;
	int16_t x28 = INT16_MIN;
	volatile int32_t t6 = INT32_MIN;

    t6 = (x25&((x26|x27)^x28));

    if (t6 != INT32_MIN) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MIN;
	int64_t x31 = -1LL;
	int64_t t7 = 34554884086633LL;

    t7 = (x29&((x30|x31)^x32));

    if (t7 != -2147483648LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int32_t x33 = -1;
	int8_t x34 = -25;
	uint64_t x35 = 79189185503643289LLU;
	volatile int8_t x36 = INT8_MAX;
	volatile uint64_t t8 = 1430LLU;

    t8 = (x33&((x34|x35)^x36));

    if (t8 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = 3;
	int16_t x38 = -1;
	int16_t x39 = -112;
	int64_t x40 = -1LL;

    t9 = (x37&((x38|x39)^x40));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = INT64_MAX;
	static int32_t x42 = INT32_MIN;
	volatile uint32_t x43 = 7U;
	volatile int8_t x44 = -16;
	int64_t t10 = -1129417954545LL;

    t10 = (x41&((x42|x43)^x44));

    if (t10 != 2147483639LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x46 = -15;
	uint8_t x47 = UINT8_MAX;
	static volatile int8_t x48 = -1;
	int64_t t11 = 11664493217234218LL;

    t11 = (x45&((x46|x47)^x48));

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int8_t x49 = INT8_MIN;
	int32_t x50 = INT32_MIN;
	volatile uint32_t x51 = 10463U;
	uint32_t x52 = UINT32_MAX;
	volatile uint32_t t12 = 104U;

    t12 = (x49&((x50|x51)^x52));

    if (t12 != 2147473152U) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x53 = 13LLU;
	volatile int64_t x54 = INT64_MIN;
	int8_t x55 = INT8_MAX;
	uint32_t x56 = 337U;
	static volatile uint64_t t13 = 1344314905550LLU;

    t13 = (x53&((x54|x55)^x56));

    if (t13 != 12LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = INT16_MAX;
	uint16_t x59 = 13648U;
	int8_t x60 = -28;

    t14 = (x57&((x58|x59)^x60));

    if (t14 != 145LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = -1;
	uint8_t x63 = UINT8_MAX;
	volatile uint64_t x64 = UINT64_MAX;
	uint64_t t15 = 2991839275923LLU;

    t15 = (x61&((x62|x63)^x64));

    if (t15 != 18443518829804056576LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = INT8_MAX;
	int16_t x67 = -284;
	volatile uint32_t x68 = UINT32_MAX;
	static int64_t t16 = -4166455LL;

    t16 = (x65&((x66|x67)^x68));

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x70 = -1;
	int32_t x71 = -19085172;
	static uint32_t x72 = UINT32_MAX;
	volatile uint32_t t17 = 7566U;

    t17 = (x69&((x70|x71)^x72));

    if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint64_t x74 = 1LLU;
	volatile int8_t x75 = 6;
	static volatile uint64_t t18 = 177128LLU;

    t18 = (x73&((x74|x75)^x76));

    if (t18 != 32768LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x77 = 4899U;
	static int64_t x78 = INT64_MIN;
	uint32_t x79 = 6197235U;
	static int32_t x80 = 417971;
	int64_t t19 = -124453904045497208LL;

    t19 = (x77&((x78|x79)^x80));

    if (t19 != 768LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = INT32_MAX;
	uint32_t x82 = 18226U;
	int32_t x83 = INT32_MIN;
	volatile int16_t x84 = -1;
	volatile uint32_t t20 = 4755U;

    t20 = (x81&((x82|x83)^x84));

    if (t20 != 2147465421U) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x85 = INT64_MIN;
	int32_t x86 = INT32_MIN;
	static uint16_t x88 = 237U;
	volatile int64_t t21 = INT64_MIN;

    t21 = (x85&((x86|x87)^x88));

    if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x89 = INT32_MIN;
	static int64_t x90 = -1647501LL;
	volatile int8_t x91 = INT8_MAX;
	static int64_t t22 = 7470819LL;

    t22 = (x89&((x90|x91)^x92));

    if (t22 != -2147483648LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static int64_t x93 = -193218LL;
	static int64_t x95 = -1LL;
	volatile int32_t x96 = INT32_MIN;
	int64_t t23 = -201094842722374LL;

    t23 = (x93&((x94|x95)^x96));

    if (t23 != 2147290430LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x98 = INT64_MIN;
	int32_t x99 = -278328;
	static int64_t x100 = 8306534LL;
	int64_t t24 = -2018994354677935097LL;

    t24 = (x97&((x98|x99)^x100));

    if (t24 != -8138870658300LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x101 = 0U;
	int8_t x102 = -1;
	static int64_t x104 = 234464890LL;
	volatile int64_t t25 = -577237435LL;

    t25 = (x101&((x102|x103)^x104));

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x105 = -11;
	volatile int8_t x106 = INT8_MIN;
	static int64_t x107 = -409LL;
	volatile int64_t t26 = 1262143LL;

    t26 = (x105&((x106|x107)^x108));

    if (t26 != -1377596LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x110 = 15U;
	int32_t x112 = INT32_MIN;
	int32_t t27 = 10469462;

    t27 = (x109&((x110|x111)^x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x115 = 4U;
	int16_t x116 = INT16_MIN;
	uint64_t t28 = 6161490473317LLU;

    t28 = (x113&((x114|x115)^x116));

    if (t28 != 852852740LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x117 = UINT16_MAX;
	uint8_t x118 = 14U;
	uint32_t x119 = 71192U;
	uint32_t x120 = UINT32_MAX;
	uint32_t t29 = 77979362U;

    t29 = (x117&((x118|x119)^x120));

    if (t29 != 59873U) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = INT64_MIN;
	int64_t x122 = INT64_MIN;
	static int8_t x124 = 0;
	static volatile int64_t t30 = INT64_MIN;

    t30 = (x121&((x122|x123)^x124));

    if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x125 = 1U;
	static int64_t x126 = INT64_MIN;
	int16_t x127 = INT16_MAX;
	uint32_t x128 = 120161U;
	int64_t t31 = 70LL;

    t31 = (x125&((x126|x127)^x128));

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x129 = -1;
	int8_t x130 = -1;
	volatile uint32_t x131 = 5262125U;
	uint64_t x132 = UINT64_MAX;

    t32 = (x129&((x130|x131)^x132));

    if (t32 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x133 = -1LL;
	volatile uint64_t x134 = 22716540LLU;
	volatile int16_t x135 = -756;
	uint32_t x136 = 2307U;
	uint64_t t33 = 6719017939LLU;

    t33 = (x133&((x134|x135)^x136));

    if (t33 != 18446744073709548671LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x137 = INT8_MIN;
	uint64_t x138 = 105167492LLU;
	static int64_t x139 = -1LL;
	uint32_t x140 = 14U;
	static uint64_t t34 = 2610497664568LLU;

    t34 = (x137&((x138|x139)^x140));

    if (t34 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x142 = INT16_MIN;
	static int64_t x143 = -2638452808749151LL;
	int8_t x144 = INT8_MAX;
	volatile int64_t t35 = 1552LL;

    t35 = (x141&((x142|x143)^x144));

    if (t35 != -4224LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x145 = -1LL;
	static int8_t x146 = 1;
	static int8_t x147 = INT8_MAX;
	uint8_t x148 = 25U;
	volatile int64_t t36 = 15688LL;

    t36 = (x145&((x146|x147)^x148));

    if (t36 != 102LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x149 = -1;
	static int16_t x151 = INT16_MIN;
	static uint16_t x152 = 384U;

    t37 = (x149&((x150|x151)^x152));

    if (t37 != -32308) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x153 = INT8_MIN;
	volatile int16_t x154 = 223;
	int8_t x155 = 6;
	int32_t x156 = -1;

    t38 = (x153&((x154|x155)^x156));

    if (t38 != -256) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x158 = 3949;
	int16_t x160 = INT16_MIN;
	volatile int64_t t39 = 15544LL;

    t39 = (x157&((x158|x159)^x160));

    if (t39 != 3954004856097LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint8_t x161 = 127U;
	static int64_t x162 = -1LL;
	volatile int32_t x163 = INT32_MAX;
	int64_t x164 = INT64_MAX;

    t40 = (x161&((x162|x163)^x164));

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x165 = -1;
	int32_t x166 = 356;
	static int16_t x167 = -1;
	uint16_t x168 = 454U;
	int32_t t41 = 1;

    t41 = (x165&((x166|x167)^x168));

    if (t41 != -455) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x169 = 225326873LLU;
	uint16_t x170 = UINT16_MAX;
	int16_t x172 = -7;
	static uint64_t t42 = 22069509285LLU;

    t42 = (x169&((x170|x171)^x172));

    if (t42 != 222560256LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile uint16_t x173 = 14U;
	volatile int8_t x174 = -24;
	int32_t x175 = INT32_MIN;
	uint32_t x176 = 0U;
	static uint32_t t43 = 3751457U;

    t43 = (x173&((x174|x175)^x176));

    if (t43 != 8U) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = INT32_MAX;
	volatile int32_t x179 = 304;
	int64_t x180 = 94256118319246LL;
	int64_t t44 = 1682646610119016LL;

    t44 = (x177&((x178|x179)^x180));

    if (t44 != 1233958769LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x182 = INT64_MIN;
	int64_t x183 = INT64_MAX;
	static int32_t x184 = -1;
	static int64_t t45 = -825301646505978825LL;

    t45 = (x181&((x182|x183)^x184));

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x187 = -1LL;
	uint32_t x188 = UINT32_MAX;
	volatile uint64_t t46 = 5395081498201947193LLU;

    t46 = (x185&((x186|x187)^x188));

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x189 = INT64_MIN;
	int32_t x190 = INT32_MIN;
	int16_t x191 = INT16_MAX;
	uint8_t x192 = UINT8_MAX;
	volatile int64_t t47 = INT64_MIN;

    t47 = (x189&((x190|x191)^x192));

    if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint64_t x193 = 22294LLU;
	int8_t x194 = -1;
	int8_t x195 = INT8_MIN;
	volatile uint64_t t48 = 785LLU;

    t48 = (x193&((x194|x195)^x196));

    if (t48 != 21266LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x200 = 360007346147LLU;

    t49 = (x197&((x198|x199)^x200));

    if (t49 != 163852LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x201 = INT32_MAX;
	int64_t x203 = INT64_MAX;
	static uint64_t x204 = 17LLU;
	uint64_t t50 = 110880LLU;

    t50 = (x201&((x202|x203)^x204));

    if (t50 != 2147483630LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile uint32_t x205 = UINT32_MAX;
	int32_t x206 = -1;
	int8_t x207 = 0;
	int64_t x208 = INT64_MIN;
	volatile int64_t t51 = 513899308351981698LL;

    t51 = (x205&((x206|x207)^x208));

    if (t51 != 4294967295LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint16_t x210 = UINT16_MAX;
	volatile int64_t x211 = -1LL;
	volatile uint64_t x212 = UINT64_MAX;
	volatile uint64_t t52 = 8353291357LLU;

    t52 = (x209&((x210|x211)^x212));

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static int32_t x215 = -1;
	int32_t x216 = -37301556;
	uint64_t t53 = 7979284LLU;

    t53 = (x213&((x214|x215)^x216));

    if (t53 != 2107698LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x217 = INT16_MIN;
	int32_t x219 = -1;
	int16_t x220 = INT16_MIN;
	static volatile uint64_t t54 = 90107610710LLU;

    t54 = (x217&((x218|x219)^x220));

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x221 = UINT16_MAX;
	int8_t x222 = 5;
	volatile uint64_t x223 = 1199326661344446LLU;
	uint64_t x224 = 38469045933178930LLU;
	volatile uint64_t t55 = 1521043LLU;

    t55 = (x221&((x222|x223)^x224));

    if (t55 != 31885LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x226 = UINT32_MAX;
	volatile int8_t x227 = INT8_MIN;
	static volatile uint16_t x228 = 2U;
	volatile int64_t t56 = -10514009193LL;

    t56 = (x225&((x226|x227)^x228));

    if (t56 != 1882758469LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x229 = -20;
	uint32_t x230 = UINT32_MAX;
	int8_t x231 = INT8_MAX;
	uint32_t x232 = UINT32_MAX;
	volatile uint32_t t57 = 4765U;

    t57 = (x229&((x230|x231)^x232));

    if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x233 = -1;
	int16_t x234 = INT16_MIN;
	static volatile int32_t x235 = -320;

    t58 = (x233&((x234|x235)^x236));

    if (t58 != 18361526342856149936LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x238 = 2761685LLU;
	int32_t x239 = INT32_MIN;
	int32_t x240 = 231;
	volatile uint64_t t59 = 14LLU;

    t59 = (x237&((x238|x239)^x240));

    if (t59 != 18446744071564820480LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x241 = -1LL;
	static volatile int16_t x242 = INT16_MIN;
	int8_t x243 = -1;
	int32_t x244 = INT32_MAX;
	int64_t t60 = 428LL;

    t60 = (x241&((x242|x243)^x244));

    if (t60 != -2147483648LL) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x245 = -9665;
	int8_t x246 = INT8_MAX;
	static int64_t x247 = -1LL;
	int8_t x248 = INT8_MAX;
	volatile int64_t t61 = 3653998526765376039LL;

    t61 = (x245&((x246|x247)^x248));

    if (t61 != -9728LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x250 = INT16_MIN;
	static int64_t x252 = INT64_MAX;
	int64_t t62 = -285430864671LL;

    t62 = (x249&((x250|x251)^x252));

    if (t62 != 18647LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x253 = INT8_MAX;
	int16_t x255 = INT16_MAX;
	volatile int32_t t63 = 1883966;

    t63 = (x253&((x254|x255)^x256));

    if (t63 != 127) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int64_t x257 = -47969LL;
	int8_t x259 = 1;
	int8_t x260 = INT8_MIN;
	int64_t t64 = -31435024278992LL;

    t64 = (x257&((x258|x259)^x260));

    if (t64 != -47987LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x261 = 39U;
	int64_t x262 = 0LL;
	static volatile int8_t x263 = -1;
	int8_t x264 = INT8_MAX;
	volatile int64_t t65 = 6258503408337873LL;

    t65 = (x261&((x262|x263)^x264));

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x266 = 7600456347LL;
	int32_t x267 = 9128369;
	uint64_t t66 = 68355LLU;

    t66 = (x265&((x266|x267)^x268));

    if (t66 != 139057960036LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile uint32_t x269 = 13U;
	volatile int32_t x270 = -1611522;
	uint64_t x271 = 398813LLU;
	int16_t x272 = INT16_MAX;
	static volatile uint64_t t67 = 20792LLU;

    t67 = (x269&((x270|x271)^x272));

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x273 = INT8_MIN;
	uint32_t x274 = 1538U;
	static int8_t x275 = -1;
	int16_t x276 = -1;
	uint32_t t68 = 3195170U;

    t68 = (x273&((x274|x275)^x276));

    if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x277 = -1LL;
	uint8_t x279 = 1U;
	uint64_t x280 = 10LLU;
	static volatile uint64_t t69 = 25040736257877LLU;

    t69 = (x277&((x278|x279)^x280));

    if (t69 != 65525LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = INT64_MIN;
	int8_t x282 = INT8_MIN;
	static uint32_t x283 = 6941U;
	volatile int8_t x284 = -1;

    t70 = (x281&((x282|x283)^x284));

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x285 = 1124U;
	int16_t x286 = -1;
	int64_t x287 = INT64_MIN;
	uint8_t x288 = UINT8_MAX;

    t71 = (x285&((x286|x287)^x288));

    if (t71 != 1024LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x289 = 3U;
	int32_t x290 = -1;
	uint16_t x291 = 2U;
	volatile uint16_t x292 = 838U;

    t72 = (x289&((x290|x291)^x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x293 = INT32_MIN;
	uint32_t x294 = UINT32_MAX;
	int16_t x295 = -1;
	volatile int64_t x296 = -13818455346LL;
	volatile int64_t t73 = -115726932907822LL;

    t73 = (x293&((x294|x295)^x296));

    if (t73 != -17179869184LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint16_t x297 = UINT16_MAX;
	uint32_t x298 = 6U;
	uint8_t x300 = 109U;

    t74 = (x297&((x298|x299)^x300));

    if (t74 != 65426LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x301 = INT8_MAX;
	uint8_t x302 = 48U;
	int8_t x304 = INT8_MIN;
	int32_t t75 = 793;

    t75 = (x301&((x302|x303)^x304));

    if (t75 != 113) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x308 = INT8_MAX;
	static volatile int32_t t76 = -2305;

    t76 = (x305&((x306|x307)^x308));

    if (t76 != 65408) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x309 = UINT32_MAX;
	uint16_t x310 = UINT16_MAX;
	uint32_t x312 = UINT32_MAX;
	int64_t t77 = 7165361117LL;

    t77 = (x309&((x310|x311)^x312));

    if (t77 != 4294901760LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x313 = 1;
	int64_t x315 = -122101405LL;
	uint64_t x316 = 2LLU;

    t78 = (x313&((x314|x315)^x316));

    if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint32_t x318 = 258U;
	int8_t x319 = INT8_MIN;
	int16_t x320 = -1;

    t79 = (x317&((x318|x319)^x320));

    if (t79 != 125U) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x321 = -1;
	uint32_t x322 = 1315U;
	uint16_t x323 = UINT16_MAX;
	static uint32_t t80 = 981869U;

    t80 = (x321&((x322|x323)^x324));

    if (t80 != 4294901760U) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x325 = INT64_MIN;
	volatile uint64_t x326 = 4684752134636919LLU;
	uint64_t x327 = UINT64_MAX;
	static volatile int8_t x328 = -2;
	static uint64_t t81 = 797075LLU;

    t81 = (x325&((x326|x327)^x328));

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x329 = -1;
	int64_t x330 = -788LL;
	uint32_t x331 = UINT32_MAX;
	int8_t x332 = -1;
	int64_t t82 = 605933781518003LL;

    t82 = (x329&((x330|x331)^x332));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint64_t x334 = UINT64_MAX;
	int16_t x335 = 0;
	static volatile int32_t x336 = INT32_MIN;
	static uint64_t t83 = 1129LLU;

    t83 = (x333&((x334|x335)^x336));

    if (t83 != 1374815LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x337 = 2;
	int8_t x338 = INT8_MIN;
	int16_t x339 = -1;
	uint16_t x340 = UINT16_MAX;
	volatile int32_t t84 = 22139219;

    t84 = (x337&((x338|x339)^x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint32_t x341 = 2971175U;
	int32_t x342 = INT32_MIN;
	int32_t x343 = -1;
	int32_t x344 = -1;

    t85 = (x341&((x342|x343)^x344));

    if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x345 = INT16_MIN;
	volatile int64_t x346 = -1LL;
	int16_t x347 = 43;
	uint8_t x348 = 48U;
	int64_t t86 = -4230969168LL;

    t86 = (x345&((x346|x347)^x348));

    if (t86 != -32768LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x349 = 196255U;
	uint32_t x350 = UINT32_MAX;
	int8_t x352 = -1;
	volatile uint32_t t87 = 4143230U;

    t87 = (x349&((x350|x351)^x352));

    if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x353 = INT32_MIN;
	volatile int32_t x354 = INT32_MIN;
	int32_t x356 = 249;

    t88 = (x353&((x354|x355)^x356));

    if (t88 != -2147483648LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x357 = INT16_MIN;
	int64_t x358 = -40680802958LL;
	int32_t x359 = -7;
	uint8_t x360 = 20U;

    t89 = (x357&((x358|x359)^x360));

    if (t89 != -32768LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x361 = INT64_MIN;
	int8_t x362 = INT8_MAX;
	volatile int8_t x363 = 28;
	uint16_t x364 = UINT16_MAX;
	static volatile int64_t t90 = -12607906839647855LL;

    t90 = (x361&((x362|x363)^x364));

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x366 = 25U;
	uint64_t x367 = 209089412730LLU;
	static volatile int16_t x368 = 590;

    t91 = (x365&((x366|x367)^x368));

    if (t91 != 209089412132LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x369 = INT8_MAX;
	static int16_t x370 = INT16_MAX;
	static int64_t x371 = INT64_MAX;
	int64_t x372 = INT64_MIN;

    t92 = (x369&((x370|x371)^x372));

    if (t92 != 127LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x373 = INT64_MAX;
	int64_t x374 = INT64_MAX;
	uint16_t x375 = UINT16_MAX;
	volatile int64_t t93 = -14614956674LL;

    t93 = (x373&((x374|x375)^x376));

    if (t93 != 127LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x377 = INT16_MIN;
	volatile uint8_t x380 = 15U;
	static volatile int32_t t94 = -38664;

    t94 = (x377&((x378|x379)^x380));

    if (t94 != -32768) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int32_t x381 = 1;
	int16_t x382 = INT16_MIN;
	int16_t x383 = -197;
	int32_t x384 = INT32_MIN;
	int32_t t95 = 648660;

    t95 = (x381&((x382|x383)^x384));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x385 = 1;
	volatile int32_t x386 = 15696420;
	int64_t x388 = 291673936LL;
	volatile int64_t t96 = 569151940705770277LL;

    t96 = (x385&((x386|x387)^x388));

    if (t96 != 1LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x389 = INT64_MIN;
	uint8_t x390 = 3U;
	int8_t x392 = 25;
	int64_t t97 = -268201981205982LL;

    t97 = (x389&((x390|x391)^x392));

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x393 = -13388517LL;
	uint32_t x394 = 4028U;
	static int16_t x395 = 1185;
	uint64_t x396 = 114775790367076LLU;
	volatile uint64_t t98 = 10470583LLU;

    t98 = (x393&((x394|x395)^x396));

    if (t98 != 114775790105625LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x397 = INT32_MIN;
	int64_t x398 = 121754706LL;
	uint32_t x399 = UINT32_MAX;
	uint8_t x400 = UINT8_MAX;
	int64_t t99 = 117910LL;

    t99 = (x397&((x398|x399)^x400));

    if (t99 != 2147483648LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x401 = -1;
	volatile int32_t x402 = -8;
	int8_t x403 = -25;

    t100 = (x401&((x402|x403)^x404));

    if (t100 != 62) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x405 = 1047LL;
	uint8_t x406 = UINT8_MAX;
	int16_t x407 = INT16_MIN;

    t101 = (x405&((x406|x407)^x408));

    if (t101 != 23LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int32_t x410 = INT32_MIN;
	int16_t x411 = INT16_MAX;
	uint8_t x412 = 10U;
	int32_t t102 = 2799;

    t102 = (x409&((x410|x411)^x412));

    if (t102 != -2147451008) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x413 = 53;
	volatile int64_t x414 = INT64_MIN;
	volatile int16_t x415 = INT16_MIN;
	volatile int8_t x416 = 3;
	volatile int64_t t103 = -1426554259132177LL;

    t103 = (x413&((x414|x415)^x416));

    if (t103 != 1LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x418 = 930;
	uint8_t x420 = UINT8_MAX;
	volatile uint64_t t104 = 251265057848269LLU;

    t104 = (x417&((x418|x419)^x420));

    if (t104 != 69LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x421 = INT32_MAX;
	int8_t x423 = INT8_MIN;
	int32_t t105 = -5754;

    t105 = (x421&((x422|x423)^x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x425 = INT8_MIN;
	int64_t x426 = -5791711896363150LL;
	int64_t x427 = -3557LL;
	int64_t t106 = 46955165430316954LL;

    t106 = (x425&((x426|x427)^x428));

    if (t106 != -128LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint16_t x429 = 57U;
	int8_t x430 = 1;
	int16_t x431 = 9;
	volatile int32_t t107 = -128369;

    t107 = (x429&((x430|x431)^x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x433 = UINT64_MAX;
	static volatile uint64_t t108 = 678948781101079LLU;

    t108 = (x433&((x434|x435)^x436));

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x437 = INT16_MIN;
	int8_t x438 = INT8_MIN;
	static int8_t x439 = INT8_MIN;
	uint32_t x440 = 2057973U;
	static volatile uint32_t t109 = 202980U;

    t109 = (x437&((x438|x439)^x440));

    if (t109 != 4292902912U) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x441 = 182832699LLU;
	uint16_t x442 = UINT16_MAX;
	static int32_t x444 = INT32_MAX;
	volatile uint64_t t110 = 413197757965721618LLU;

    t110 = (x441&((x442|x443)^x444));

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x446 = -10;
	int16_t x447 = 13;

    t111 = (x445&((x446|x447)^x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x449 = INT16_MIN;
	uint16_t x451 = 469U;
	int32_t t112 = INT32_MIN;

    t112 = (x449&((x450|x451)^x452));

    if (t112 != INT32_MIN) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint8_t x453 = UINT8_MAX;
	uint32_t x454 = 303452U;
	volatile int32_t x455 = INT32_MIN;
	uint8_t x456 = 54U;

    t113 = (x453&((x454|x455)^x456));

    if (t113 != 106U) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x458 = 2060422472LLU;
	int8_t x459 = INT8_MAX;
	uint64_t x460 = 188LLU;
	uint64_t t114 = 7127003763419LLU;

    t114 = (x457&((x458|x459)^x460));

    if (t114 != 2060422595LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x461 = INT8_MIN;
	int16_t x463 = INT16_MIN;
	uint16_t x464 = UINT16_MAX;
	int64_t t115 = -7411LL;

    t115 = (x461&((x462|x463)^x464));

    if (t115 != -32896LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x465 = 206;
	static uint64_t x466 = 14952869742390089LLU;
	int8_t x467 = INT8_MIN;
	int64_t x468 = INT64_MAX;

    t116 = (x465&((x466|x467)^x468));

    if (t116 != 6LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x469 = INT8_MIN;
	int32_t x470 = -1;
	volatile uint64_t x472 = UINT64_MAX;
	volatile uint64_t t117 = 164877LLU;

    t117 = (x469&((x470|x471)^x472));

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x473 = INT64_MAX;
	static int64_t x474 = 45993916861LL;
	volatile uint64_t x475 = 1229745485887012LLU;
	uint16_t x476 = 6U;
	uint64_t t118 = 633777LLU;

    t118 = (x473&((x474|x475)^x476));

    if (t118 != 1229782280568763LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x477 = UINT8_MAX;
	uint16_t x478 = UINT16_MAX;
	static volatile int8_t x479 = 53;

    t119 = (x477&((x478|x479)^x480));

    if (t119 != 70LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x482 = -1;
	int32_t x483 = 756;
	int16_t x484 = INT16_MIN;
	volatile uint64_t t120 = 1888967763340339663LLU;

    t120 = (x481&((x482|x483)^x484));

    if (t120 != 14829LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x485 = UINT8_MAX;
	int32_t x487 = INT32_MIN;
	volatile int8_t x488 = INT8_MIN;
	static volatile int32_t t121 = -1;

    t121 = (x485&((x486|x487)^x488));

    if (t121 != 196) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int8_t x489 = -18;
	int16_t x490 = INT16_MIN;
	static uint64_t x491 = UINT64_MAX;
	volatile uint64_t t122 = 12074199895LLU;

    t122 = (x489&((x490|x491)^x492));

    if (t122 != 18446744073709545092LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x493 = 651;
	volatile uint8_t x494 = 7U;

    t123 = (x493&((x494|x495)^x496));

    if (t123 != 3) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x497 = -1;
	uint16_t x498 = 4515U;

    t124 = (x497&((x498|x499)^x500));

    if (t124 != 231) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x501 = INT16_MAX;
	int32_t x502 = INT32_MIN;
	static volatile uint16_t x503 = 3217U;
	int8_t x504 = INT8_MIN;
	volatile int32_t t125 = 61713;

    t125 = (x501&((x502|x503)^x504));

    if (t125 != 29457) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x505 = INT8_MAX;
	int64_t x506 = -1153547570493LL;
	uint16_t x507 = 44U;
	static uint32_t x508 = 28U;
	int64_t t126 = 0LL;

    t126 = (x505&((x506|x507)^x508));

    if (t126 != 115LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x509 = INT16_MIN;
	int16_t x510 = -5;
	int8_t x511 = INT8_MIN;
	int16_t x512 = INT16_MIN;

    t127 = (x509&((x510|x511)^x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x513 = -6659LL;
	int16_t x514 = -1;
	int64_t x515 = INT64_MIN;
	static int8_t x516 = INT8_MIN;
	volatile int64_t t128 = 10469989248LL;

    t128 = (x513&((x514|x515)^x516));

    if (t128 != 125LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x517 = UINT64_MAX;
	static uint16_t x518 = 3752U;
	uint16_t x519 = 16U;
	volatile int64_t x520 = -41043LL;

    t129 = (x517&((x518|x519)^x520));

    if (t129 != 18446744073709506837LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x522 = 2;
	int16_t x523 = INT16_MIN;
	static uint8_t x524 = 34U;
	volatile int32_t t130 = INT32_MIN;

    t130 = (x521&((x522|x523)^x524));

    if (t130 != INT32_MIN) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x525 = -830LL;
	uint64_t t131 = 30788674LLU;

    t131 = (x525&((x526|x527)^x528));

    if (t131 != 0LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x530 = INT16_MIN;
	uint32_t x531 = 0U;

    t132 = (x529&((x530|x531)^x532));

    if (t132 != 2147483648U) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint8_t x533 = UINT8_MAX;
	int64_t x534 = INT64_MIN;
	int64_t x535 = -279LL;
	int16_t x536 = -1;
	volatile int64_t t133 = 7668061LL;

    t133 = (x533&((x534|x535)^x536));

    if (t133 != 22LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x538 = INT16_MIN;
	static volatile int64_t t134 = 1435890LL;

    t134 = (x537&((x538|x539)^x540));

    if (t134 != 4294964361LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int32_t x542 = INT32_MAX;
	static volatile int64_t x543 = INT64_MAX;
	static int32_t x544 = -29446757;
	static volatile int64_t t135 = 82582528LL;

    t135 = (x541&((x542|x543)^x544));

    if (t135 != 21092LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x545 = INT64_MIN;
	uint8_t x547 = 9U;
	volatile int16_t x548 = INT16_MIN;
	int64_t t136 = 537LL;

    t136 = (x545&((x546|x547)^x548));

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x549 = INT32_MIN;
	volatile int64_t x550 = INT64_MIN;
	uint64_t x552 = 275238LLU;
	uint64_t t137 = 8170LLU;

    t137 = (x549&((x550|x551)^x552));

    if (t137 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x553 = INT64_MIN;
	uint8_t x554 = UINT8_MAX;
	uint32_t x555 = 1U;
	uint64_t x556 = UINT64_MAX;
	volatile uint64_t t138 = 203179LLU;

    t138 = (x553&((x554|x555)^x556));

    if (t138 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x557 = -1;
	int64_t x558 = 87780325761295621LL;
	static int64_t x559 = -1579LL;
	static int16_t x560 = -1089;
	volatile int64_t t139 = -12045LL;

    t139 = (x557&((x558|x559)^x560));

    if (t139 != 1642LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x562 = INT8_MAX;
	int8_t x563 = INT8_MIN;
	uint8_t x564 = UINT8_MAX;
	volatile int32_t t140 = INT32_MIN;

    t140 = (x561&((x562|x563)^x564));

    if (t140 != INT32_MIN) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x565 = 256899095LLU;
	int16_t x566 = -7033;
	uint64_t x567 = UINT64_MAX;
	static volatile uint32_t x568 = 26U;
	static volatile uint64_t t141 = 1421LLU;

    t141 = (x565&((x566|x567)^x568));

    if (t141 != 256899077LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x569 = -93;
	int32_t x570 = -12757;
	int32_t x571 = INT32_MAX;
	volatile int32_t x572 = INT32_MAX;
	volatile int32_t t142 = INT32_MIN;

    t142 = (x569&((x570|x571)^x572));

    if (t142 != INT32_MIN) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x573 = 1U;
	uint64_t x575 = 32157LLU;
	volatile uint64_t t143 = 4LLU;

    t143 = (x573&((x574|x575)^x576));

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x577 = INT16_MIN;
	int64_t x578 = -1LL;
	static volatile int64_t x579 = -1LL;
	static uint64_t t144 = 0LLU;

    t144 = (x577&((x578|x579)^x580));

    if (t144 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x581 = INT8_MIN;
	int16_t x582 = -1782;
	int8_t x583 = -1;
	volatile int32_t t145 = 44694722;

    t145 = (x581&((x582|x583)^x584));

    if (t145 != -128) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x586 = 1;
	uint16_t x587 = UINT16_MAX;
	volatile int64_t t146 = -1LL;

    t146 = (x585&((x586|x587)^x588));

    if (t146 != -65536LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint32_t x589 = 39747493U;
	uint32_t t147 = 1406394U;

    t147 = (x589&((x590|x591)^x592));

    if (t147 != 32677U) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x593 = -10997;
	int64_t x594 = INT64_MIN;
	int64_t x595 = INT64_MAX;
	volatile int32_t x596 = -1016505;
	int64_t t148 = 359238366963133592LL;

    t148 = (x593&((x594|x595)^x596));

    if (t148 != 1015816LL) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint8_t x597 = UINT8_MAX;
	volatile uint32_t x598 = 9517U;
	static uint32_t t149 = 1023258U;

    t149 = (x597&((x598|x599)^x600));

    if (t149 != 80U) { NG(); } else { ; }
	
}

void f150(void) {
    	static int32_t x602 = -1;
	static uint32_t x604 = UINT32_MAX;

    t150 = (x601&((x602|x603)^x604));

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x605 = INT8_MIN;
	static volatile int64_t x606 = 50346794614LL;
	uint8_t x607 = UINT8_MAX;
	volatile int8_t x608 = INT8_MAX;
	static volatile int64_t t151 = 32704761677LL;

    t151 = (x605&((x606|x607)^x608));

    if (t151 != 50346794624LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x609 = 8U;
	volatile int64_t x610 = 836731427LL;
	uint8_t x611 = 96U;
	static uint32_t x612 = 139U;
	static int64_t t152 = -1710302060LL;

    t152 = (x609&((x610|x611)^x612));

    if (t152 != 8LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x614 = INT32_MIN;
	uint16_t x615 = 3U;
	volatile int64_t t153 = -25619490770LL;

    t153 = (x613&((x614|x615)^x616));

    if (t153 != -2147451024LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x617 = 2530U;
	volatile uint8_t x618 = UINT8_MAX;
	volatile uint8_t x619 = UINT8_MAX;
	int16_t x620 = INT16_MIN;
	int32_t t154 = 950083;

    t154 = (x617&((x618|x619)^x620));

    if (t154 != 226) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint8_t x621 = 79U;
	static uint16_t x622 = UINT16_MAX;
	uint32_t x623 = UINT32_MAX;
	int32_t x624 = -1;
	volatile uint32_t t155 = 59095U;

    t155 = (x621&((x622|x623)^x624));

    if (t155 != 0U) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x625 = INT8_MAX;
	int8_t x627 = -1;
	volatile int32_t x628 = INT32_MIN;
	int64_t t156 = -127LL;

    t156 = (x625&((x626|x627)^x628));

    if (t156 != 127LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x629 = INT8_MAX;
	static int8_t x630 = -1;
	uint64_t x632 = 545214000910LLU;
	uint64_t t157 = 6109108123882632933LLU;

    t157 = (x629&((x630|x631)^x632));

    if (t157 != 113LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x634 = 134779302931786LLU;
	uint32_t x635 = UINT32_MAX;
	int64_t x636 = -240047070428505863LL;
	volatile uint64_t t158 = 425677280877421LLU;

    t158 = (x633&((x634|x635)^x636));

    if (t158 != 18206739252145006342LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static int32_t x638 = INT32_MAX;
	static volatile int16_t x639 = INT16_MIN;
	static int32_t x640 = 28460;

    t159 = (x637&((x638|x639)^x640));

    if (t159 != 16) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x641 = UINT16_MAX;
	int64_t x642 = 111568038475LL;
	int16_t x644 = INT16_MAX;

    t160 = (x641&((x642|x643)^x644));

    if (t160 != 21940LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint32_t x645 = 5289U;
	static int32_t x646 = -1;
	static volatile uint8_t x647 = UINT8_MAX;
	int64_t x648 = -1LL;
	volatile int64_t t161 = 1832310571336026277LL;

    t161 = (x645&((x646|x647)^x648));

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = INT64_MIN;
	uint32_t x651 = 1U;
	uint8_t x652 = 2U;
	int64_t t162 = 140061932864868614LL;

    t162 = (x649&((x650|x651)^x652));

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x653 = UINT16_MAX;
	int32_t x654 = INT32_MAX;
	int64_t x655 = INT64_MAX;
	int32_t x656 = INT32_MIN;
	volatile int64_t t163 = 1LL;

    t163 = (x653&((x654|x655)^x656));

    if (t163 != 65535LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x657 = -1;
	uint8_t x658 = 14U;
	int8_t x660 = 6;
	volatile int32_t t164 = 0;

    t164 = (x657&((x658|x659)^x660));

    if (t164 != 249) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x661 = -1;
	volatile uint32_t x662 = 1057U;
	uint16_t x663 = 6U;
	int16_t x664 = -14;

    t165 = (x661&((x662|x663)^x664));

    if (t165 != 4294966229U) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x665 = 182067927240158LLU;
	volatile int32_t x667 = -1;

    t166 = (x665&((x666|x667)^x668));

    if (t166 != 182067927240064LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x669 = 2045669;
	int64_t x670 = -1LL;
	volatile int8_t x671 = 8;
	int32_t x672 = -1;
	int64_t t167 = 273107662864720378LL;

    t167 = (x669&((x670|x671)^x672));

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x673 = -4LL;
	int64_t x675 = INT64_MIN;
	static int8_t x676 = 0;
	int64_t t168 = -16497074LL;

    t168 = (x673&((x674|x675)^x676));

    if (t168 != -9223372036854775684LL) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x677 = 42;
	int32_t x678 = -1;
	static int16_t x679 = 2;
	uint16_t x680 = UINT16_MAX;
	int32_t t169 = -2606;

    t169 = (x677&((x678|x679)^x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x682 = 46827316LLU;
	static uint32_t x683 = 891U;
	uint64_t x684 = UINT64_MAX;
	uint64_t t170 = 260364LLU;

    t170 = (x681&((x682|x683)^x684));

    if (t170 != 18446744073662724096LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x686 = -5;
	int64_t x687 = INT64_MAX;
	volatile uint32_t x688 = 15190066U;

    t171 = (x685&((x686|x687)^x688));

    if (t171 != 18446744073694361549LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x689 = INT64_MIN;
	int16_t x690 = -1;
	uint64_t t172 = 28776577020115LLU;

    t172 = (x689&((x690|x691)^x692));

    if (t172 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x693 = 23;
	uint8_t x694 = 1U;
	int64_t x695 = -18212994LL;
	int64_t x696 = -33907817279668LL;
	volatile int64_t t173 = -6LL;

    t173 = (x693&((x694|x695)^x696));

    if (t173 != 19LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x697 = 1;
	int8_t x699 = INT8_MIN;
	static uint8_t x700 = UINT8_MAX;
	int64_t t174 = -959701928LL;

    t174 = (x697&((x698|x699)^x700));

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x701 = 3U;
	int32_t x702 = INT32_MAX;
	static volatile int32_t x703 = -30168;
	static int32_t t175 = -25;

    t175 = (x701&((x702|x703)^x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x705 = UINT8_MAX;
	volatile uint64_t x706 = UINT64_MAX;
	uint64_t x707 = 18495LLU;
	int64_t x708 = -1LL;
	static uint64_t t176 = 179852412521071LLU;

    t176 = (x705&((x706|x707)^x708));

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x709 = 291;
	int32_t x710 = -1;
	int32_t x711 = -1;
	int64_t x712 = INT64_MIN;
	int64_t t177 = 1LL;

    t177 = (x709&((x710|x711)^x712));

    if (t177 != 291LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t x713 = INT32_MIN;
	uint32_t x715 = 15U;
	volatile int64_t x716 = -991311LL;
	static int64_t t178 = 98LL;

    t178 = (x713&((x714|x715)^x716));

    if (t178 != -2147483648LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x717 = INT16_MIN;
	int32_t x719 = INT32_MIN;
	volatile int32_t t179 = 118;

    t179 = (x717&((x718|x719)^x720));

    if (t179 != -65536) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x721 = 1;
	int32_t x722 = -1;
	static uint32_t x723 = 256656U;
	int64_t x724 = INT64_MAX;
	int64_t t180 = -441LL;

    t180 = (x721&((x722|x723)^x724));

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x726 = -1;
	static int8_t x727 = INT8_MAX;
	uint16_t x728 = 3U;
	int32_t t181 = 3104;

    t181 = (x725&((x726|x727)^x728));

    if (t181 != -4) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x729 = INT64_MIN;
	uint64_t x730 = 57046472405543065LLU;
	uint64_t x731 = UINT64_MAX;
	volatile uint32_t x732 = 223U;
	static volatile uint64_t t182 = 1447148631350597LLU;

    t182 = (x729&((x730|x731)^x732));

    if (t182 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x733 = 0;
	volatile uint64_t x735 = 268671330LLU;
	int8_t x736 = INT8_MIN;
	uint64_t t183 = 6482190LLU;

    t183 = (x733&((x734|x735)^x736));

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x737 = 920855333885LLU;
	static volatile int8_t x738 = -51;
	uint16_t x739 = 26U;
	int16_t x740 = 2958;
	volatile uint64_t t184 = 12687LLU;

    t184 = (x737&((x738|x739)^x740));

    if (t184 != 920855330897LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x741 = INT16_MIN;
	int64_t x743 = -1LL;
	int64_t t185 = 5LL;

    t185 = (x741&((x742|x743)^x744));

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint32_t x745 = 2088708U;
	int64_t x746 = INT64_MIN;
	int32_t x748 = -1;
	volatile int64_t t186 = 182436200146951LL;

    t186 = (x745&((x746|x747)^x748));

    if (t186 != 4LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x751 = -1;
	volatile int16_t x752 = INT16_MIN;
	uint32_t t187 = 9991063U;

    t187 = (x749&((x750|x751)^x752));

    if (t187 != 32767U) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x753 = -1;
	int16_t x754 = 1165;
	uint16_t x755 = UINT16_MAX;
	volatile int32_t t188 = 142;

    t188 = (x753&((x754|x755)^x756));

    if (t188 != -65409) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x757 = UINT8_MAX;
	volatile int64_t x759 = INT64_MIN;
	uint64_t x760 = 40455669794734LLU;
	volatile uint64_t t189 = 2801250111534625466LLU;

    t189 = (x757&((x758|x759)^x760));

    if (t189 != 117LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x761 = -1;
	uint8_t x762 = 0U;
	volatile int64_t x763 = INT64_MIN;
	static int8_t x764 = -47;
	volatile int64_t t190 = 8019065137LL;

    t190 = (x761&((x762|x763)^x764));

    if (t190 != 9223372036854775761LL) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint8_t x765 = 0U;
	uint64_t x766 = UINT64_MAX;
	uint64_t x767 = 258670LLU;
	volatile int64_t x768 = INT64_MIN;
	volatile uint64_t t191 = 384LLU;

    t191 = (x765&((x766|x767)^x768));

    if (t191 != 0LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x769 = -1;
	static volatile int16_t x770 = 1;
	int8_t x771 = INT8_MIN;
	uint32_t x772 = UINT32_MAX;
	volatile uint32_t t192 = 26931120U;

    t192 = (x769&((x770|x771)^x772));

    if (t192 != 126U) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x773 = -1;
	int8_t x774 = INT8_MIN;
	static uint8_t x776 = UINT8_MAX;
	uint32_t t193 = 26325U;

    t193 = (x773&((x774|x775)^x776));

    if (t193 != 4294967053U) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x777 = -1;
	uint32_t x778 = 26U;
	static int8_t x780 = INT8_MIN;
	volatile uint32_t t194 = 88726U;

    t194 = (x777&((x778|x779)^x780));

    if (t194 != 4294967194U) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x781 = 2U;
	static uint16_t x782 = UINT16_MAX;
	int16_t x783 = -1;
	volatile int64_t x784 = INT64_MIN;
	static int64_t t195 = 244LL;

    t195 = (x781&((x782|x783)^x784));

    if (t195 != 2LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x786 = INT16_MIN;

    t196 = (x785&((x786|x787)^x788));

    if (t196 != 33939) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x789 = 3U;
	volatile uint32_t x790 = UINT32_MAX;
	int16_t x791 = -1;
	int64_t x792 = INT64_MIN;

    t197 = (x789&((x790|x791)^x792));

    if (t197 != 3LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x795 = INT64_MAX;
	volatile int8_t x796 = -1;
	int64_t t198 = 126LL;

    t198 = (x793&((x794|x795)^x796));

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint64_t x798 = 2608535986LLU;
	int32_t x799 = -1;
	volatile int16_t x800 = -1;
	volatile uint64_t t199 = 1645437178244071LLU;

    t199 = (x797&((x798|x799)^x800));

    if (t199 != 0LLU) { NG(); } else { ; }
	
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

