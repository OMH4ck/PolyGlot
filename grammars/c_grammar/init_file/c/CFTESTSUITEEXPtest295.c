
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

uint32_t x2 = 421215544U;
uint32_t x4 = UINT32_MAX;
int32_t x14 = -1;
int16_t x24 = -1;
int32_t x25 = 470591274;
static int8_t x28 = 0;
volatile int8_t x30 = INT8_MIN;
uint8_t x37 = 31U;
volatile uint16_t x40 = 5135U;
int16_t x43 = INT16_MAX;
int16_t x49 = INT16_MIN;
uint16_t x59 = UINT16_MAX;
volatile uint32_t x68 = UINT32_MAX;
int8_t x79 = INT8_MIN;
int32_t x80 = INT32_MIN;
int32_t x97 = INT32_MAX;
static volatile int8_t x100 = -1;
static uint64_t x101 = 1LLU;
volatile uint64_t x103 = UINT64_MAX;
int16_t x107 = INT16_MIN;
volatile uint32_t t25 = 0U;
uint8_t x118 = UINT8_MAX;
static int16_t x126 = INT16_MIN;
volatile uint8_t x133 = 70U;
volatile int8_t x134 = 26;
int16_t x144 = -9;
int8_t x159 = -60;
int16_t x167 = -203;
int64_t x172 = INT64_MIN;
static volatile uint32_t x176 = UINT32_MAX;
int64_t x177 = INT64_MAX;
uint16_t x191 = UINT16_MAX;
int32_t t42 = -299705823;
int32_t x193 = INT32_MAX;
volatile uint8_t x195 = 1U;
static uint64_t x199 = 2468915771LLU;
int32_t x200 = INT32_MIN;
static int16_t x213 = 2;
volatile uint32_t x219 = UINT32_MAX;
volatile uint16_t x234 = 13U;
int64_t x238 = 55897104812LL;
volatile uint64_t x239 = UINT64_MAX;
int64_t x240 = -77982231339LL;
int64_t x244 = -480120764060507938LL;
volatile int8_t x251 = INT8_MIN;
int64_t x254 = 593983LL;
int16_t x259 = -65;
int32_t t57 = -1614;
static int64_t x261 = INT64_MAX;
int16_t x265 = -1;
int8_t x270 = INT8_MAX;
uint64_t x286 = 7974765190LLU;
volatile int64_t x291 = INT64_MAX;
uint64_t x294 = 6475052326581216678LLU;
volatile int16_t x295 = -1;
int32_t t65 = 19;
int32_t x297 = 4769289;
static volatile uint32_t t67 = UINT32_MAX;
uint8_t x307 = 1U;
int16_t x309 = 1;
volatile int8_t x310 = INT8_MIN;
uint16_t x318 = 40U;
volatile int8_t x319 = 0;
volatile int16_t x320 = -21;
volatile uint8_t x325 = UINT8_MAX;
int32_t x328 = -1;
int32_t t72 = -351699747;
static uint64_t x339 = 7LLU;
static int8_t x350 = 9;
volatile int32_t t77 = -171;
static int16_t x356 = -1;
int32_t x360 = -201;
volatile uint32_t t79 = UINT32_MAX;
uint16_t x372 = 1U;
uint64_t t81 = 1863502965091614LLU;
int32_t t82 = -329;
static uint8_t x378 = 3U;
volatile int16_t x399 = -1;
volatile int16_t x405 = INT16_MIN;
uint16_t x407 = UINT16_MAX;
int16_t x410 = INT16_MIN;
int8_t x426 = INT8_MIN;
int8_t x427 = INT8_MAX;
uint64_t x428 = 2615608951082064272LLU;
int8_t x430 = INT8_MIN;
int64_t x431 = -1LL;
uint64_t x432 = 94857671LLU;
static uint16_t x448 = UINT16_MAX;
int8_t x463 = INT8_MAX;
int8_t x469 = -1;
int8_t x470 = INT8_MIN;
volatile int32_t x473 = INT32_MIN;
static uint32_t x475 = UINT32_MAX;
static int32_t t102 = INT32_MIN;
uint8_t x477 = 3U;
uint64_t x479 = 984069535757724LLU;
int32_t x495 = -1;
volatile int64_t x496 = -29LL;
int32_t t106 = -4596;
volatile int16_t x499 = 700;
int64_t x500 = -26LL;
uint8_t x511 = 14U;
int8_t x514 = INT8_MIN;
int64_t x515 = -1LL;
volatile uint32_t x522 = UINT32_MAX;
int8_t x530 = -1;
uint32_t t115 = UINT32_MAX;
volatile uint32_t x533 = 405215420U;
volatile int32_t x536 = -1;
int16_t x538 = INT16_MIN;
static uint8_t x546 = 0U;
uint16_t x548 = 4948U;
int32_t x551 = INT32_MAX;
volatile uint32_t x557 = 1028595748U;
int32_t x560 = 10;
int64_t x561 = -1LL;
static int16_t x563 = 2320;
static int8_t x564 = 1;
int8_t x565 = INT8_MIN;
int32_t x580 = -4323;
static uint16_t x583 = 13U;
int64_t x586 = INT64_MIN;
int32_t x590 = 652978521;
volatile int64_t t129 = INT64_MAX;
uint32_t x593 = UINT32_MAX;
volatile uint16_t x602 = 62U;
int64_t x605 = INT64_MAX;
volatile int8_t x606 = INT8_MIN;
int64_t t132 = INT64_MAX;
int8_t x614 = INT8_MIN;
int32_t t134 = -32287027;
volatile int16_t x618 = -1;
int8_t x624 = 2;
int16_t x627 = INT16_MAX;
int64_t x633 = -1LL;
volatile int64_t t139 = 270025611402595825LL;
static volatile int16_t x642 = INT16_MIN;
uint64_t x648 = UINT64_MAX;
volatile int64_t t142 = -620LL;
static uint32_t x652 = 12073860U;
volatile uint32_t t143 = 1323855U;
int32_t x661 = INT32_MIN;
int16_t x663 = 1;
uint8_t x669 = 2U;
static volatile uint16_t x671 = 199U;
static int8_t x673 = -1;
int64_t x675 = INT64_MAX;
int32_t x680 = INT32_MIN;
volatile int8_t x688 = INT8_MIN;
int8_t x693 = -1;
static volatile int8_t x697 = INT8_MIN;
static int8_t x705 = INT8_MAX;
int32_t x711 = INT32_MIN;
int64_t x712 = -1LL;
int16_t x722 = INT16_MIN;
static int64_t x725 = INT64_MAX;
int8_t x730 = -1;
volatile int32_t t159 = 4;
int8_t x744 = INT8_MAX;
volatile int32_t t162 = -263735762;
int8_t x748 = -1;
int32_t t163 = 115135403;
uint16_t x751 = UINT16_MAX;
volatile int64_t x756 = INT64_MIN;
uint64_t x768 = 3407LLU;
uint8_t x770 = 13U;
static volatile int32_t x776 = INT32_MIN;
static volatile int32_t t168 = 787567;
int8_t x778 = INT8_MAX;
static volatile int32_t t171 = 0;
uint8_t x791 = 0U;
static volatile int16_t x792 = 8671;
static int32_t t172 = INT32_MAX;
uint8_t x794 = UINT8_MAX;
static int64_t x796 = INT64_MIN;
volatile int64_t x798 = -1LL;
int64_t x799 = INT64_MIN;
static int16_t x801 = -1;
static volatile uint16_t x803 = 58U;
volatile uint8_t x804 = UINT8_MAX;
int8_t x806 = 0;
uint32_t x811 = 1038843U;
uint8_t x818 = 3U;
volatile uint32_t x819 = 31158077U;
int8_t x820 = INT8_MIN;
int8_t x826 = INT8_MIN;
int16_t x827 = INT16_MAX;
int64_t x829 = INT64_MAX;
int16_t x838 = -7;
uint64_t x848 = 8451495952554917LLU;
int8_t x849 = -3;
volatile uint64_t t186 = UINT64_MAX;
int16_t x858 = INT16_MIN;
int32_t t187 = INT32_MIN;
volatile int64_t x868 = -17LL;
uint64_t x877 = 2068889LLU;
static uint64_t x881 = 17171195919LLU;
uint32_t x885 = UINT32_MAX;
static int8_t x888 = INT8_MAX;
volatile uint32_t t192 = UINT32_MAX;
int32_t x889 = INT32_MAX;
int8_t x893 = INT8_MIN;
uint32_t x910 = 27231051U;
int32_t x915 = INT32_MAX;
uint32_t t198 = 202U;
static int32_t x917 = -13;


void f0(void) {
    	uint32_t x1 = 206U;
	int16_t x3 = INT16_MAX;
	volatile uint32_t t0 = 74178U;

    t0 = (x1+((x2-x3)==x4));

    if (t0 != 206U) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = 5889U;
	uint8_t x6 = 84U;
	int8_t x7 = 0;
	int32_t x8 = 3798124;
	volatile int32_t t1 = -110791;

    t1 = (x5+((x6-x7)==x8));

    if (t1 != 5889) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x9 = -1;
	int64_t x10 = INT64_MAX;
	int16_t x11 = 7;
	uint8_t x12 = 0U;
	int32_t t2 = -39770;

    t2 = (x9+((x10-x11)==x12));

    if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x13 = INT32_MIN;
	int64_t x15 = INT64_MIN;
	int32_t x16 = 1;
	volatile int32_t t3 = INT32_MIN;

    t3 = (x13+((x14-x15)==x16));

    if (t3 != INT32_MIN) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = INT32_MIN;
	uint8_t x18 = UINT8_MAX;
	uint64_t x19 = UINT64_MAX;
	volatile uint8_t x20 = 0U;
	static volatile int32_t t4 = INT32_MIN;

    t4 = (x17+((x18-x19)==x20));

    if (t4 != INT32_MIN) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = 6240532U;
	int32_t x22 = 0;
	int64_t x23 = -1LL;
	volatile uint32_t t5 = 3383980U;

    t5 = (x21+((x22-x23)==x24));

    if (t5 != 6240532U) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x26 = INT16_MIN;
	uint16_t x27 = UINT16_MAX;
	volatile int32_t t6 = 1;

    t6 = (x25+((x26-x27)==x28));

    if (t6 != 470591274) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x29 = UINT32_MAX;
	uint16_t x31 = 16U;
	uint32_t x32 = 17596U;
	volatile uint32_t t7 = UINT32_MAX;

    t7 = (x29+((x30-x31)==x32));

    if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x33 = -1LL;
	int32_t x34 = 640;
	volatile uint8_t x35 = 1U;
	volatile int64_t x36 = INT64_MIN;
	volatile int64_t t8 = 125613145401342619LL;

    t8 = (x33+((x34-x35)==x36));

    if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x38 = 48LLU;
	int32_t x39 = INT32_MIN;
	volatile int32_t t9 = -1;

    t9 = (x37+((x38-x39)==x40));

    if (t9 != 31) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x41 = -1;
	volatile int16_t x42 = INT16_MAX;
	int8_t x44 = 51;
	static int32_t t10 = 169619;

    t10 = (x41+((x42-x43)==x44));

    if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = INT16_MIN;
	int64_t x46 = -13892816LL;
	uint64_t x47 = 418048036117LLU;
	int16_t x48 = 8;
	static int32_t t11 = -158697978;

    t11 = (x45+((x46-x47)==x48));

    if (t11 != -32768) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x50 = INT8_MIN;
	int8_t x51 = 5;
	uint32_t x52 = 29U;
	volatile int32_t t12 = 1;

    t12 = (x49+((x50-x51)==x52));

    if (t12 != -32768) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x53 = UINT16_MAX;
	int32_t x54 = -1;
	int8_t x55 = INT8_MIN;
	uint16_t x56 = UINT16_MAX;
	volatile int32_t t13 = -605762;

    t13 = (x53+((x54-x55)==x56));

    if (t13 != 65535) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int16_t x57 = -3;
	int32_t x58 = -1;
	int16_t x60 = INT16_MIN;
	int32_t t14 = -4414767;

    t14 = (x57+((x58-x59)==x60));

    if (t14 != -3) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int16_t x61 = -26;
	uint32_t x62 = 91587395U;
	int32_t x63 = INT32_MAX;
	int16_t x64 = INT16_MIN;
	volatile int32_t t15 = -27608242;

    t15 = (x61+((x62-x63)==x64));

    if (t15 != -26) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = INT32_MIN;
	static int64_t x66 = INT64_MIN;
	int32_t x67 = INT32_MIN;
	int32_t t16 = INT32_MIN;

    t16 = (x65+((x66-x67)==x68));

    if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x73 = -821144;
	int8_t x74 = 0;
	volatile uint32_t x75 = 14324U;
	int64_t x76 = INT64_MIN;
	static volatile int32_t t17 = 2;

    t17 = (x73+((x74-x75)==x76));

    if (t17 != -821144) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint8_t x77 = 1U;
	static int16_t x78 = INT16_MIN;
	volatile int32_t t18 = -1;

    t18 = (x77+((x78-x79)==x80));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x81 = INT16_MIN;
	volatile uint32_t x82 = 3U;
	int64_t x83 = -47749059652009917LL;
	static uint32_t x84 = UINT32_MAX;
	volatile int32_t t19 = 287689912;

    t19 = (x81+((x82-x83)==x84));

    if (t19 != -32768) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x93 = 17617;
	int8_t x94 = INT8_MIN;
	int8_t x95 = INT8_MAX;
	int16_t x96 = 165;
	static volatile int32_t t20 = 6064;

    t20 = (x93+((x94-x95)==x96));

    if (t20 != 17617) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x98 = INT16_MIN;
	static uint16_t x99 = UINT16_MAX;
	int32_t t21 = INT32_MAX;

    t21 = (x97+((x98-x99)==x100));

    if (t21 != INT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int64_t x102 = -164148LL;
	static int64_t x104 = -1LL;
	static uint64_t t22 = 13818682502LLU;

    t22 = (x101+((x102-x103)==x104));

    if (t22 != 1LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x105 = 28316U;
	static volatile uint8_t x106 = 0U;
	int64_t x108 = INT64_MIN;
	int32_t t23 = -22427038;

    t23 = (x105+((x106-x107)==x108));

    if (t23 != 28316) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x109 = INT16_MIN;
	int16_t x110 = 1;
	uint64_t x111 = 7598798LLU;
	static int16_t x112 = INT16_MIN;
	static int32_t t24 = -145746732;

    t24 = (x109+((x110-x111)==x112));

    if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint32_t x113 = 7783024U;
	int64_t x114 = -16959667384536405LL;
	int8_t x115 = INT8_MAX;
	int8_t x116 = -2;

    t25 = (x113+((x114-x115)==x116));

    if (t25 != 7783024U) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x117 = -1LL;
	int8_t x119 = -4;
	uint32_t x120 = 11U;
	volatile int64_t t26 = 3517041125LL;

    t26 = (x117+((x118-x119)==x120));

    if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static int32_t x121 = -6624312;
	uint64_t x122 = UINT64_MAX;
	uint32_t x123 = 5U;
	static int32_t x124 = INT32_MAX;
	int32_t t27 = -119111928;

    t27 = (x121+((x122-x123)==x124));

    if (t27 != -6624312) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint32_t x125 = 1U;
	int8_t x127 = 10;
	volatile uint64_t x128 = UINT64_MAX;
	volatile uint32_t t28 = 5922411U;

    t28 = (x125+((x126-x127)==x128));

    if (t28 != 1U) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x129 = 12306981000647675LL;
	int16_t x130 = INT16_MIN;
	int8_t x131 = INT8_MIN;
	int8_t x132 = -60;
	static volatile int64_t t29 = 7827188683447553LL;

    t29 = (x129+((x130-x131)==x132));

    if (t29 != 12306981000647675LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x135 = -1;
	volatile int64_t x136 = -1LL;
	static volatile int32_t t30 = -9414;

    t30 = (x133+((x134-x135)==x136));

    if (t30 != 70) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x137 = 12;
	uint8_t x138 = 25U;
	uint64_t x139 = UINT64_MAX;
	static uint16_t x140 = 29177U;
	volatile int32_t t31 = 3784620;

    t31 = (x137+((x138-x139)==x140));

    if (t31 != 12) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x141 = -77350;
	int64_t x142 = INT64_MAX;
	volatile uint64_t x143 = 396056LLU;
	volatile int32_t t32 = -39;

    t32 = (x141+((x142-x143)==x144));

    if (t32 != -77350) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x149 = INT64_MIN;
	uint16_t x150 = 18659U;
	volatile uint64_t x151 = 129543382419852LLU;
	int32_t x152 = INT32_MIN;
	static int64_t t33 = INT64_MIN;

    t33 = (x149+((x150-x151)==x152));

    if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x153 = 4888217U;
	static uint16_t x154 = 23399U;
	int32_t x155 = -4030398;
	uint8_t x156 = 0U;
	volatile uint32_t t34 = 1U;

    t34 = (x153+((x154-x155)==x156));

    if (t34 != 4888217U) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x157 = 17649370920865LL;
	static int64_t x158 = 4745394LL;
	int16_t x160 = 0;
	int64_t t35 = 43835369415LL;

    t35 = (x157+((x158-x159)==x160));

    if (t35 != 17649370920865LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int32_t x161 = -1;
	int16_t x162 = INT16_MIN;
	uint64_t x163 = 3272157LLU;
	int64_t x164 = -1LL;
	int32_t t36 = 31;

    t36 = (x161+((x162-x163)==x164));

    if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x165 = 1;
	static uint64_t x166 = 1652415493800386731LLU;
	static volatile uint16_t x168 = 62U;
	volatile int32_t t37 = 0;

    t37 = (x165+((x166-x167)==x168));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x169 = -6135559657053387LL;
	int8_t x170 = -58;
	uint32_t x171 = UINT32_MAX;
	volatile int64_t t38 = -56LL;

    t38 = (x169+((x170-x171)==x172));

    if (t38 != -6135559657053387LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x173 = 5;
	uint32_t x174 = 22U;
	static volatile int16_t x175 = -77;
	volatile int32_t t39 = 11807459;

    t39 = (x173+((x174-x175)==x176));

    if (t39 != 5) { NG(); } else { ; }
	
}

void f40(void) {
    	static int8_t x178 = 0;
	int8_t x179 = -5;
	int8_t x180 = -1;
	static volatile int64_t t40 = INT64_MAX;

    t40 = (x177+((x178-x179)==x180));

    if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint64_t x181 = 4LLU;
	uint32_t x182 = 48633U;
	int32_t x183 = 11907261;
	volatile int64_t x184 = INT64_MAX;
	uint64_t t41 = 10531404324815LLU;

    t41 = (x181+((x182-x183)==x184));

    if (t41 != 4LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x189 = INT8_MIN;
	uint16_t x190 = UINT16_MAX;
	uint64_t x192 = 6684LLU;

    t42 = (x189+((x190-x191)==x192));

    if (t42 != -128) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x194 = INT16_MIN;
	volatile int32_t x196 = -1;
	int32_t t43 = INT32_MAX;

    t43 = (x193+((x194-x195)==x196));

    if (t43 != INT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x197 = INT16_MIN;
	uint8_t x198 = 0U;
	volatile int32_t t44 = 1390929;

    t44 = (x197+((x198-x199)==x200));

    if (t44 != -32768) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x205 = 25U;
	uint16_t x206 = 17U;
	uint32_t x207 = 1391342U;
	int32_t x208 = -99136699;
	int32_t t45 = -25132946;

    t45 = (x205+((x206-x207)==x208));

    if (t45 != 25) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x209 = 76;
	uint32_t x210 = 111U;
	int16_t x211 = -8;
	int64_t x212 = -1474LL;
	volatile int32_t t46 = 1;

    t46 = (x209+((x210-x211)==x212));

    if (t46 != 76) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint32_t x214 = 8962493U;
	int32_t x215 = 9;
	uint64_t x216 = UINT64_MAX;
	static volatile int32_t t47 = 15;

    t47 = (x213+((x214-x215)==x216));

    if (t47 != 2) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x217 = UINT64_MAX;
	static uint64_t x218 = UINT64_MAX;
	uint64_t x220 = 216562481805366230LLU;
	volatile uint64_t t48 = UINT64_MAX;

    t48 = (x217+((x218-x219)==x220));

    if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile int16_t x221 = INT16_MIN;
	static volatile int16_t x222 = -1;
	int64_t x223 = INT64_MIN;
	static uint32_t x224 = UINT32_MAX;
	int32_t t49 = 60;

    t49 = (x221+((x222-x223)==x224));

    if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x225 = -20540031659LL;
	int32_t x226 = -40860;
	static uint16_t x227 = 19580U;
	int64_t x228 = -1LL;
	int64_t t50 = 7264316556LL;

    t50 = (x225+((x226-x227)==x228));

    if (t50 != -20540031659LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x233 = -1;
	int16_t x235 = INT16_MAX;
	int64_t x236 = INT64_MIN;
	int32_t t51 = 3749;

    t51 = (x233+((x234-x235)==x236));

    if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x237 = -466569596036306LL;
	int64_t t52 = -3861324608536744898LL;

    t52 = (x237+((x238-x239)==x240));

    if (t52 != -466569596036306LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x241 = INT64_MIN;
	int32_t x242 = INT32_MIN;
	uint32_t x243 = 1273753U;
	volatile int64_t t53 = INT64_MIN;

    t53 = (x241+((x242-x243)==x244));

    if (t53 != INT64_MIN) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x245 = UINT32_MAX;
	uint32_t x246 = UINT32_MAX;
	static volatile int8_t x247 = 8;
	uint32_t x248 = 576386161U;
	volatile uint32_t t54 = UINT32_MAX;

    t54 = (x245+((x246-x247)==x248));

    if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x249 = 7U;
	static uint32_t x250 = UINT32_MAX;
	int64_t x252 = INT64_MIN;
	volatile int32_t t55 = -6;

    t55 = (x249+((x250-x251)==x252));

    if (t55 != 7) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x253 = INT64_MIN;
	uint32_t x255 = 89U;
	uint8_t x256 = 0U;
	int64_t t56 = INT64_MIN;

    t56 = (x253+((x254-x255)==x256));

    if (t56 != INT64_MIN) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x257 = -3;
	static uint8_t x258 = 38U;
	int64_t x260 = 350LL;

    t57 = (x257+((x258-x259)==x260));

    if (t57 != -3) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x262 = INT64_MIN;
	static int32_t x263 = -65450;
	static int32_t x264 = 0;
	volatile int64_t t58 = INT64_MAX;

    t58 = (x261+((x262-x263)==x264));

    if (t58 != INT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint64_t x266 = 506082243264LLU;
	volatile int32_t x267 = 1;
	volatile int32_t x268 = -11396;
	volatile int32_t t59 = 450;

    t59 = (x265+((x266-x267)==x268));

    if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x269 = 9U;
	uint16_t x271 = UINT16_MAX;
	volatile uint8_t x272 = 1U;
	static volatile int32_t t60 = -80;

    t60 = (x269+((x270-x271)==x272));

    if (t60 != 9) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x277 = -381;
	uint32_t x278 = 1333059U;
	static uint64_t x279 = 673675115546187994LLU;
	int32_t x280 = INT32_MIN;
	volatile int32_t t61 = 187;

    t61 = (x277+((x278-x279)==x280));

    if (t61 != -381) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x281 = 187439LLU;
	int16_t x282 = 1;
	uint8_t x283 = 0U;
	volatile int8_t x284 = -1;
	static uint64_t t62 = 261329555385763LLU;

    t62 = (x281+((x282-x283)==x284));

    if (t62 != 187439LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x285 = INT64_MAX;
	int8_t x287 = INT8_MIN;
	int64_t x288 = -1LL;
	volatile int64_t t63 = INT64_MAX;

    t63 = (x285+((x286-x287)==x288));

    if (t63 != INT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x289 = INT8_MAX;
	static uint16_t x290 = 2U;
	static int16_t x292 = INT16_MAX;
	int32_t t64 = -1383;

    t64 = (x289+((x290-x291)==x292));

    if (t64 != 127) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x293 = 18384U;
	uint32_t x296 = UINT32_MAX;

    t65 = (x293+((x294-x295)==x296));

    if (t65 != 18384) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x298 = INT16_MIN;
	static uint16_t x299 = 341U;
	int64_t x300 = INT64_MIN;
	volatile int32_t t66 = 28;

    t66 = (x297+((x298-x299)==x300));

    if (t66 != 4769289) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x301 = UINT32_MAX;
	int16_t x302 = INT16_MIN;
	volatile uint64_t x303 = 112053496888008217LLU;
	static uint32_t x304 = UINT32_MAX;

    t67 = (x301+((x302-x303)==x304));

    if (t67 != UINT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x305 = 1U;
	int16_t x306 = INT16_MIN;
	uint64_t x308 = 1840018536987291340LLU;
	volatile int32_t t68 = -1;

    t68 = (x305+((x306-x307)==x308));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x311 = 113;
	int32_t x312 = INT32_MIN;
	int32_t t69 = 12928466;

    t69 = (x309+((x310-x311)==x312));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x317 = INT8_MIN;
	static int32_t t70 = 93;

    t70 = (x317+((x318-x319)==x320));

    if (t70 != -128) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x321 = 7167U;
	uint8_t x322 = 102U;
	uint64_t x323 = 19032257LLU;
	uint64_t x324 = 504022484221274LLU;
	uint32_t t71 = 0U;

    t71 = (x321+((x322-x323)==x324));

    if (t71 != 7167U) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint16_t x326 = UINT16_MAX;
	uint64_t x327 = 375188LLU;

    t72 = (x325+((x326-x327)==x328));

    if (t72 != 255) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x329 = -1;
	uint64_t x330 = 229918LLU;
	int16_t x331 = INT16_MIN;
	int32_t x332 = INT32_MIN;
	int32_t t73 = -2405;

    t73 = (x329+((x330-x331)==x332));

    if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x333 = 29U;
	volatile int16_t x334 = INT16_MIN;
	int8_t x335 = INT8_MIN;
	int64_t x336 = -1LL;
	static volatile int32_t t74 = -574;

    t74 = (x333+((x334-x335)==x336));

    if (t74 != 29) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x337 = 99793860U;
	int32_t x338 = INT32_MIN;
	volatile uint64_t x340 = 6753635LLU;
	volatile uint32_t t75 = 176127U;

    t75 = (x337+((x338-x339)==x340));

    if (t75 != 99793860U) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x345 = 13161798;
	static uint64_t x346 = UINT64_MAX;
	int8_t x347 = -3;
	uint32_t x348 = 6880585U;
	int32_t t76 = 9;

    t76 = (x345+((x346-x347)==x348));

    if (t76 != 13161798) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x349 = 21;
	volatile uint16_t x351 = UINT16_MAX;
	int8_t x352 = INT8_MAX;

    t77 = (x349+((x350-x351)==x352));

    if (t77 != 21) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x353 = -745;
	volatile int32_t x354 = INT32_MIN;
	static int32_t x355 = INT32_MIN;
	int32_t t78 = -410;

    t78 = (x353+((x354-x355)==x356));

    if (t78 != -745) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint32_t x357 = UINT32_MAX;
	int8_t x358 = -1;
	int32_t x359 = -11;

    t79 = (x357+((x358-x359)==x360));

    if (t79 != UINT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x361 = -1;
	int8_t x362 = -1;
	int64_t x363 = 438892637923393853LL;
	int16_t x364 = -1;
	int32_t t80 = -3614996;

    t80 = (x361+((x362-x363)==x364));

    if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint64_t x369 = 8298497999LLU;
	static int32_t x370 = -1;
	uint8_t x371 = 0U;

    t81 = (x369+((x370-x371)==x372));

    if (t81 != 8298497999LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x373 = 8;
	static int8_t x374 = INT8_MAX;
	int64_t x375 = 0LL;
	int8_t x376 = INT8_MIN;

    t82 = (x373+((x374-x375)==x376));

    if (t82 != 8) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x377 = 303101577LLU;
	volatile uint16_t x379 = 12485U;
	volatile int8_t x380 = INT8_MIN;
	uint64_t t83 = 4586207887592975060LLU;

    t83 = (x377+((x378-x379)==x380));

    if (t83 != 303101577LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x389 = -1LL;
	static uint32_t x390 = 10U;
	uint64_t x391 = UINT64_MAX;
	uint64_t x392 = UINT64_MAX;
	int64_t t84 = -7035LL;

    t84 = (x389+((x390-x391)==x392));

    if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x393 = -25960868620814LL;
	int8_t x394 = -9;
	static int64_t x395 = INT64_MIN;
	int64_t x396 = -173LL;
	volatile int64_t t85 = -15213LL;

    t85 = (x393+((x394-x395)==x396));

    if (t85 != -25960868620814LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x397 = INT16_MIN;
	int8_t x398 = -1;
	uint16_t x400 = 11U;
	int32_t t86 = 374;

    t86 = (x397+((x398-x399)==x400));

    if (t86 != -32768) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x406 = -87;
	int8_t x408 = -1;
	static int32_t t87 = -3427520;

    t87 = (x405+((x406-x407)==x408));

    if (t87 != -32768) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x409 = 1;
	int64_t x411 = -1LL;
	volatile int32_t x412 = INT32_MIN;
	int32_t t88 = 12;

    t88 = (x409+((x410-x411)==x412));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x413 = 2U;
	int32_t x414 = -3;
	uint64_t x415 = 4782115973247137361LLU;
	uint32_t x416 = 7266U;
	volatile int32_t t89 = 1;

    t89 = (x413+((x414-x415)==x416));

    if (t89 != 2) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint32_t x417 = UINT32_MAX;
	uint64_t x418 = UINT64_MAX;
	uint16_t x419 = 469U;
	uint16_t x420 = 14606U;
	volatile uint32_t t90 = UINT32_MAX;

    t90 = (x417+((x418-x419)==x420));

    if (t90 != UINT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x421 = INT8_MIN;
	uint16_t x422 = 13U;
	uint16_t x423 = UINT16_MAX;
	int16_t x424 = INT16_MAX;
	static volatile int32_t t91 = 1;

    t91 = (x421+((x422-x423)==x424));

    if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x425 = 0;
	static volatile int32_t t92 = -34640;

    t92 = (x425+((x426-x427)==x428));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x429 = 42U;
	int32_t t93 = -1774;

    t93 = (x429+((x430-x431)==x432));

    if (t93 != 42) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x433 = -1;
	uint64_t x434 = 15209074236627024LLU;
	volatile int64_t x435 = INT64_MAX;
	volatile int32_t x436 = 673261;
	int32_t t94 = 49506813;

    t94 = (x433+((x434-x435)==x436));

    if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x441 = INT32_MIN;
	int16_t x442 = -1335;
	int8_t x443 = -7;
	uint16_t x444 = 2148U;
	int32_t t95 = INT32_MIN;

    t95 = (x441+((x442-x443)==x444));

    if (t95 != INT32_MIN) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x445 = INT8_MIN;
	int16_t x446 = 0;
	static int8_t x447 = INT8_MIN;
	int32_t t96 = -389628;

    t96 = (x445+((x446-x447)==x448));

    if (t96 != -128) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile int32_t x449 = -657018;
	int8_t x450 = -1;
	uint32_t x451 = 88U;
	int32_t x452 = INT32_MIN;
	static volatile int32_t t97 = -36667;

    t97 = (x449+((x450-x451)==x452));

    if (t97 != -657018) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x453 = INT8_MAX;
	volatile uint32_t x454 = UINT32_MAX;
	int16_t x455 = -1;
	volatile int8_t x456 = INT8_MIN;
	int32_t t98 = 13260;

    t98 = (x453+((x454-x455)==x456));

    if (t98 != 127) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x461 = 9322740U;
	uint64_t x462 = 9180199753504801503LLU;
	uint8_t x464 = UINT8_MAX;
	uint32_t t99 = 6U;

    t99 = (x461+((x462-x463)==x464));

    if (t99 != 9322740U) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x465 = 1419LLU;
	uint64_t x466 = UINT64_MAX;
	static int64_t x467 = -1LL;
	volatile int8_t x468 = -18;
	uint64_t t100 = 7829603561LLU;

    t100 = (x465+((x466-x467)==x468));

    if (t100 != 1419LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x471 = 1U;
	int16_t x472 = INT16_MIN;
	volatile int32_t t101 = -13;

    t101 = (x469+((x470-x471)==x472));

    if (t101 != -1) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x474 = -1;
	int16_t x476 = -719;

    t102 = (x473+((x474-x475)==x476));

    if (t102 != INT32_MIN) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint8_t x478 = 2U;
	int32_t x480 = INT32_MIN;
	int32_t t103 = 114;

    t103 = (x477+((x478-x479)==x480));

    if (t103 != 3) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint32_t x485 = 1110U;
	static volatile int8_t x486 = INT8_MIN;
	int32_t x487 = -1;
	int8_t x488 = 1;
	uint32_t t104 = 45U;

    t104 = (x485+((x486-x487)==x488));

    if (t104 != 1110U) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x489 = INT16_MIN;
	uint16_t x490 = 127U;
	int32_t x491 = -7;
	int8_t x492 = INT8_MIN;
	volatile int32_t t105 = 121;

    t105 = (x489+((x490-x491)==x492));

    if (t105 != -32768) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x493 = 42;
	volatile int16_t x494 = 8;

    t106 = (x493+((x494-x495)==x496));

    if (t106 != 42) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x497 = -1603;
	int32_t x498 = -1;
	volatile int32_t t107 = -4379;

    t107 = (x497+((x498-x499)==x500));

    if (t107 != -1603) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x501 = 1952293893LL;
	uint16_t x502 = UINT16_MAX;
	static uint8_t x503 = 106U;
	int8_t x504 = INT8_MIN;
	int64_t t108 = 251199825385142283LL;

    t108 = (x501+((x502-x503)==x504));

    if (t108 != 1952293893LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x505 = INT64_MAX;
	volatile int8_t x506 = INT8_MAX;
	int8_t x507 = INT8_MIN;
	int32_t x508 = INT32_MAX;
	volatile int64_t t109 = INT64_MAX;

    t109 = (x505+((x506-x507)==x508));

    if (t109 != INT64_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x509 = -103408LL;
	uint16_t x510 = UINT16_MAX;
	int16_t x512 = -2095;
	int64_t t110 = -1740187LL;

    t110 = (x509+((x510-x511)==x512));

    if (t110 != -103408LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x513 = 0LL;
	uint64_t x516 = 248225186532LLU;
	static volatile int64_t t111 = -2335865964LL;

    t111 = (x513+((x514-x515)==x516));

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x517 = -1086094672LL;
	int32_t x518 = INT32_MIN;
	uint32_t x519 = 912422996U;
	static int16_t x520 = INT16_MIN;
	volatile int64_t t112 = 14442386LL;

    t112 = (x517+((x518-x519)==x520));

    if (t112 != -1086094672LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint64_t x521 = 15624131LLU;
	int8_t x523 = 0;
	uint32_t x524 = 28U;
	volatile uint64_t t113 = 115985669LLU;

    t113 = (x521+((x522-x523)==x524));

    if (t113 != 15624131LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x525 = 1U;
	int8_t x526 = 16;
	uint16_t x527 = UINT16_MAX;
	uint32_t x528 = 2482U;
	int32_t t114 = -31;

    t114 = (x525+((x526-x527)==x528));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x529 = UINT32_MAX;
	volatile int32_t x531 = -1;
	int8_t x532 = INT8_MAX;

    t115 = (x529+((x530-x531)==x532));

    if (t115 != UINT32_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x534 = INT16_MAX;
	int16_t x535 = 1;
	uint32_t t116 = 511U;

    t116 = (x533+((x534-x535)==x536));

    if (t116 != 405215420U) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x537 = -1;
	volatile int64_t x539 = -5LL;
	int32_t x540 = INT32_MAX;
	static int32_t t117 = -6;

    t117 = (x537+((x538-x539)==x540));

    if (t117 != -1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint32_t x541 = UINT32_MAX;
	int16_t x542 = INT16_MAX;
	int32_t x543 = -727616534;
	uint32_t x544 = 48552866U;
	uint32_t t118 = UINT32_MAX;

    t118 = (x541+((x542-x543)==x544));

    if (t118 != UINT32_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x545 = UINT64_MAX;
	uint64_t x547 = UINT64_MAX;
	static volatile uint64_t t119 = UINT64_MAX;

    t119 = (x545+((x546-x547)==x548));

    if (t119 != UINT64_MAX) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x549 = UINT8_MAX;
	uint8_t x550 = UINT8_MAX;
	int64_t x552 = -1LL;
	static volatile int32_t t120 = -6093783;

    t120 = (x549+((x550-x551)==x552));

    if (t120 != 255) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x558 = INT8_MAX;
	volatile int16_t x559 = INT16_MIN;
	uint32_t t121 = 50U;

    t121 = (x557+((x558-x559)==x560));

    if (t121 != 1028595748U) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint8_t x562 = 2U;
	volatile int64_t t122 = 4095LL;

    t122 = (x561+((x562-x563)==x564));

    if (t122 != -1LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static int32_t x566 = -1;
	int32_t x567 = INT32_MIN;
	int64_t x568 = -1443818078731LL;
	volatile int32_t t123 = 16700;

    t123 = (x565+((x566-x567)==x568));

    if (t123 != -128) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x569 = UINT32_MAX;
	int8_t x570 = INT8_MIN;
	static int8_t x571 = 0;
	static volatile int64_t x572 = -573899088757550542LL;
	static volatile uint32_t t124 = UINT32_MAX;

    t124 = (x569+((x570-x571)==x572));

    if (t124 != UINT32_MAX) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint64_t x573 = UINT64_MAX;
	volatile uint32_t x574 = UINT32_MAX;
	static int16_t x575 = INT16_MIN;
	uint8_t x576 = 6U;
	volatile uint64_t t125 = UINT64_MAX;

    t125 = (x573+((x574-x575)==x576));

    if (t125 != UINT64_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x577 = -276138854047618LL;
	int16_t x578 = 12;
	volatile int16_t x579 = INT16_MIN;
	volatile int64_t t126 = 261606892486LL;

    t126 = (x577+((x578-x579)==x580));

    if (t126 != -276138854047618LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x581 = INT64_MIN;
	int64_t x582 = -3253504854401774726LL;
	int32_t x584 = -1;
	int64_t t127 = INT64_MIN;

    t127 = (x581+((x582-x583)==x584));

    if (t127 != INT64_MIN) { NG(); } else { ; }
	
}

void f128(void) {
    	static int8_t x585 = INT8_MIN;
	static int8_t x587 = 0;
	volatile uint8_t x588 = UINT8_MAX;
	volatile int32_t t128 = 111;

    t128 = (x585+((x586-x587)==x588));

    if (t128 != -128) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x589 = INT64_MAX;
	volatile uint32_t x591 = 167761240U;
	int32_t x592 = -71126274;

    t129 = (x589+((x590-x591)==x592));

    if (t129 != INT64_MAX) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x594 = 13802672U;
	static int32_t x595 = -3082;
	static int64_t x596 = INT64_MAX;
	uint32_t t130 = UINT32_MAX;

    t130 = (x593+((x594-x595)==x596));

    if (t130 != UINT32_MAX) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x601 = INT16_MAX;
	int8_t x603 = INT8_MIN;
	uint16_t x604 = UINT16_MAX;
	static int32_t t131 = -19941;

    t131 = (x601+((x602-x603)==x604));

    if (t131 != 32767) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint32_t x607 = 62802143U;
	static uint32_t x608 = 2515U;

    t132 = (x605+((x606-x607)==x608));

    if (t132 != INT64_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x609 = INT8_MIN;
	volatile int32_t x610 = -1;
	static volatile int32_t x611 = -111485;
	int16_t x612 = 24;
	static int32_t t133 = 6405;

    t133 = (x609+((x610-x611)==x612));

    if (t133 != -128) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x613 = UINT16_MAX;
	volatile int16_t x615 = -1;
	static volatile uint8_t x616 = UINT8_MAX;

    t134 = (x613+((x614-x615)==x616));

    if (t134 != 65535) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int8_t x617 = INT8_MAX;
	int32_t x619 = 129026;
	int32_t x620 = INT32_MIN;
	volatile int32_t t135 = -185;

    t135 = (x617+((x618-x619)==x620));

    if (t135 != 127) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint64_t x621 = 669841397LLU;
	int16_t x622 = INT16_MIN;
	int8_t x623 = INT8_MIN;
	volatile uint64_t t136 = 51LLU;

    t136 = (x621+((x622-x623)==x624));

    if (t136 != 669841397LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x625 = 4U;
	uint16_t x626 = 206U;
	int8_t x628 = INT8_MAX;
	int32_t t137 = 99506;

    t137 = (x625+((x626-x627)==x628));

    if (t137 != 4) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x629 = UINT8_MAX;
	int32_t x630 = 7546330;
	volatile int16_t x631 = INT16_MAX;
	int64_t x632 = 470LL;
	static int32_t t138 = 86;

    t138 = (x629+((x630-x631)==x632));

    if (t138 != 255) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint64_t x634 = 52535007926294419LLU;
	uint64_t x635 = UINT64_MAX;
	static int16_t x636 = -350;

    t139 = (x633+((x634-x635)==x636));

    if (t139 != -1LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x637 = INT32_MAX;
	int8_t x638 = INT8_MIN;
	int8_t x639 = INT8_MIN;
	static int16_t x640 = 18;
	int32_t t140 = INT32_MAX;

    t140 = (x637+((x638-x639)==x640));

    if (t140 != INT32_MAX) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x641 = 39726U;
	static int8_t x643 = INT8_MAX;
	int64_t x644 = 662114196056487LL;
	uint32_t t141 = 1142U;

    t141 = (x641+((x642-x643)==x644));

    if (t141 != 39726U) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x645 = 1771LL;
	uint64_t x646 = 1411172557LLU;
	int64_t x647 = INT64_MAX;

    t142 = (x645+((x646-x647)==x648));

    if (t142 != 1771LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x649 = 3036689U;
	uint64_t x650 = 123313464LLU;
	int8_t x651 = -1;

    t143 = (x649+((x650-x651)==x652));

    if (t143 != 3036689U) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x653 = INT64_MIN;
	int8_t x654 = INT8_MIN;
	int64_t x655 = -97650762167200712LL;
	uint8_t x656 = 1U;
	int64_t t144 = INT64_MIN;

    t144 = (x653+((x654-x655)==x656));

    if (t144 != INT64_MIN) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x657 = -9112;
	static uint32_t x658 = 2778441U;
	uint16_t x659 = 7606U;
	int64_t x660 = INT64_MIN;
	volatile int32_t t145 = 33689981;

    t145 = (x657+((x658-x659)==x660));

    if (t145 != -9112) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x662 = UINT16_MAX;
	int64_t x664 = INT64_MAX;
	int32_t t146 = INT32_MIN;

    t146 = (x661+((x662-x663)==x664));

    if (t146 != INT32_MIN) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint16_t x670 = UINT16_MAX;
	volatile int32_t x672 = 1042942;
	volatile int32_t t147 = 676;

    t147 = (x669+((x670-x671)==x672));

    if (t147 != 2) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x674 = 1;
	uint16_t x676 = 1U;
	static volatile int32_t t148 = -6219739;

    t148 = (x673+((x674-x675)==x676));

    if (t148 != -1) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int32_t x677 = INT32_MIN;
	int16_t x678 = INT16_MIN;
	int64_t x679 = INT64_MIN;
	static volatile int32_t t149 = INT32_MIN;

    t149 = (x677+((x678-x679)==x680));

    if (t149 != INT32_MIN) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint32_t x685 = 447344U;
	int8_t x686 = -1;
	volatile int64_t x687 = INT64_MAX;
	static uint32_t t150 = 474109791U;

    t150 = (x685+((x686-x687)==x688));

    if (t150 != 447344U) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int64_t x694 = INT64_MIN;
	volatile int64_t x695 = INT64_MIN;
	uint16_t x696 = UINT16_MAX;
	volatile int32_t t151 = 0;

    t151 = (x693+((x694-x695)==x696));

    if (t151 != -1) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x698 = -1;
	volatile int8_t x699 = -1;
	int16_t x700 = INT16_MAX;
	int32_t t152 = -202;

    t152 = (x697+((x698-x699)==x700));

    if (t152 != -128) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x701 = INT64_MAX;
	int16_t x702 = -1;
	int64_t x703 = INT64_MAX;
	static int8_t x704 = 63;
	int64_t t153 = INT64_MAX;

    t153 = (x701+((x702-x703)==x704));

    if (t153 != INT64_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint8_t x706 = 24U;
	static volatile int32_t x707 = 1;
	volatile int8_t x708 = -1;
	int32_t t154 = 1022971;

    t154 = (x705+((x706-x707)==x708));

    if (t154 != 127) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint32_t x709 = UINT32_MAX;
	uint32_t x710 = UINT32_MAX;
	uint32_t t155 = UINT32_MAX;

    t155 = (x709+((x710-x711)==x712));

    if (t155 != UINT32_MAX) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x713 = INT8_MAX;
	int16_t x714 = 461;
	uint32_t x715 = 1371U;
	uint64_t x716 = 47326LLU;
	int32_t t156 = 14503060;

    t156 = (x713+((x714-x715)==x716));

    if (t156 != 127) { NG(); } else { ; }
	
}

void f157(void) {
    	static int32_t x721 = -1;
	int32_t x723 = -181227;
	int32_t x724 = INT32_MAX;
	volatile int32_t t157 = -2555296;

    t157 = (x721+((x722-x723)==x724));

    if (t157 != -1) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int8_t x726 = -1;
	static volatile int64_t x727 = 1172550820243LL;
	volatile int16_t x728 = -1;
	static volatile int64_t t158 = INT64_MAX;

    t158 = (x725+((x726-x727)==x728));

    if (t158 != INT64_MAX) { NG(); } else { ; }
	
}

void f159(void) {
    	static int8_t x729 = INT8_MIN;
	int16_t x731 = -1547;
	volatile int64_t x732 = 8667986701LL;

    t159 = (x729+((x730-x731)==x732));

    if (t159 != -128) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x733 = 546032647;
	int8_t x734 = INT8_MAX;
	uint32_t x735 = 60028404U;
	int64_t x736 = INT64_MIN;
	volatile int32_t t160 = 6481;

    t160 = (x733+((x734-x735)==x736));

    if (t160 != 546032647) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x737 = 3740868348916LL;
	int64_t x738 = -2LL;
	int16_t x739 = 1;
	int32_t x740 = -1;
	int64_t t161 = -14LL;

    t161 = (x737+((x738-x739)==x740));

    if (t161 != 3740868348916LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x741 = 0;
	int32_t x742 = INT32_MAX;
	uint32_t x743 = 3909083U;

    t162 = (x741+((x742-x743)==x744));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x745 = 1U;
	static int64_t x746 = -2017171LL;
	static volatile int32_t x747 = INT32_MAX;

    t163 = (x745+((x746-x747)==x748));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x749 = INT8_MIN;
	static uint64_t x750 = 69451683929216680LLU;
	int32_t x752 = INT32_MIN;
	int32_t t164 = 1865611;

    t164 = (x749+((x750-x751)==x752));

    if (t164 != -128) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x753 = 17233U;
	static int8_t x754 = INT8_MIN;
	int8_t x755 = INT8_MAX;
	volatile uint32_t t165 = 18407U;

    t165 = (x753+((x754-x755)==x756));

    if (t165 != 17233U) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint16_t x765 = UINT16_MAX;
	uint8_t x766 = UINT8_MAX;
	int16_t x767 = 4;
	volatile int32_t t166 = 987308;

    t166 = (x765+((x766-x767)==x768));

    if (t166 != 65535) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x769 = UINT8_MAX;
	int32_t x771 = -553;
	int16_t x772 = INT16_MIN;
	volatile int32_t t167 = -15;

    t167 = (x769+((x770-x771)==x772));

    if (t167 != 255) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x773 = -13;
	int32_t x774 = INT32_MAX;
	static int32_t x775 = INT32_MAX;

    t168 = (x773+((x774-x775)==x776));

    if (t168 != -13) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t x777 = INT32_MAX;
	int8_t x779 = -43;
	int16_t x780 = INT16_MIN;
	static volatile int32_t t169 = INT32_MAX;

    t169 = (x777+((x778-x779)==x780));

    if (t169 != INT32_MAX) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x781 = 0U;
	int8_t x782 = INT8_MIN;
	uint8_t x783 = 79U;
	int16_t x784 = INT16_MIN;
	volatile int32_t t170 = 5613;

    t170 = (x781+((x782-x783)==x784));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x785 = -95187;
	int32_t x786 = -111333;
	int64_t x787 = INT64_MIN;
	int8_t x788 = INT8_MIN;

    t171 = (x785+((x786-x787)==x788));

    if (t171 != -95187) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x789 = INT32_MAX;
	static volatile uint16_t x790 = 13U;

    t172 = (x789+((x790-x791)==x792));

    if (t172 != INT32_MAX) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x793 = -1;
	static uint64_t x795 = UINT64_MAX;
	int32_t t173 = -640581;

    t173 = (x793+((x794-x795)==x796));

    if (t173 != -1) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x797 = INT64_MIN;
	volatile int16_t x800 = INT16_MIN;
	volatile int64_t t174 = INT64_MIN;

    t174 = (x797+((x798-x799)==x800));

    if (t174 != INT64_MIN) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int16_t x802 = INT16_MAX;
	volatile int32_t t175 = 2;

    t175 = (x801+((x802-x803)==x804));

    if (t175 != -1) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x805 = INT64_MIN;
	int16_t x807 = INT16_MIN;
	static int8_t x808 = -1;
	volatile int64_t t176 = INT64_MIN;

    t176 = (x805+((x806-x807)==x808));

    if (t176 != INT64_MIN) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x809 = INT64_MIN;
	static uint64_t x810 = 22323180856LLU;
	volatile int32_t x812 = -2870;
	int64_t t177 = INT64_MIN;

    t177 = (x809+((x810-x811)==x812));

    if (t177 != INT64_MIN) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x813 = 22U;
	uint32_t x814 = 191U;
	static int32_t x815 = 21601;
	int16_t x816 = -1;
	volatile int32_t t178 = 167209;

    t178 = (x813+((x814-x815)==x816));

    if (t178 != 22) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x817 = INT8_MAX;
	volatile int32_t t179 = 366;

    t179 = (x817+((x818-x819)==x820));

    if (t179 != 127) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x825 = INT32_MIN;
	int64_t x828 = 4510LL;
	int32_t t180 = INT32_MIN;

    t180 = (x825+((x826-x827)==x828));

    if (t180 != INT32_MIN) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x830 = INT8_MIN;
	uint8_t x831 = UINT8_MAX;
	uint32_t x832 = 11U;
	int64_t t181 = INT64_MAX;

    t181 = (x829+((x830-x831)==x832));

    if (t181 != INT64_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x837 = INT32_MAX;
	int8_t x839 = INT8_MIN;
	volatile uint64_t x840 = 6LLU;
	int32_t t182 = INT32_MAX;

    t182 = (x837+((x838-x839)==x840));

    if (t182 != INT32_MAX) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x841 = UINT32_MAX;
	volatile uint8_t x842 = 41U;
	static int32_t x843 = -1;
	int64_t x844 = INT64_MIN;
	uint32_t t183 = UINT32_MAX;

    t183 = (x841+((x842-x843)==x844));

    if (t183 != UINT32_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int32_t x845 = INT32_MIN;
	int64_t x846 = INT64_MIN;
	int16_t x847 = -1;
	volatile int32_t t184 = INT32_MIN;

    t184 = (x845+((x846-x847)==x848));

    if (t184 != INT32_MIN) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x850 = UINT16_MAX;
	int16_t x851 = 4429;
	volatile uint16_t x852 = UINT16_MAX;
	volatile int32_t t185 = -975538;

    t185 = (x849+((x850-x851)==x852));

    if (t185 != -3) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x853 = UINT64_MAX;
	int32_t x854 = -1;
	int8_t x855 = INT8_MIN;
	uint16_t x856 = 7937U;

    t186 = (x853+((x854-x855)==x856));

    if (t186 != UINT64_MAX) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x857 = INT32_MIN;
	uint32_t x859 = UINT32_MAX;
	static int64_t x860 = INT64_MIN;

    t187 = (x857+((x858-x859)==x860));

    if (t187 != INT32_MIN) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x865 = INT32_MIN;
	int16_t x866 = 10105;
	uint8_t x867 = 1U;
	static int32_t t188 = INT32_MIN;

    t188 = (x865+((x866-x867)==x868));

    if (t188 != INT32_MIN) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x869 = -1LL;
	int16_t x870 = -1;
	int64_t x871 = INT64_MAX;
	static int64_t x872 = 5614LL;
	static int64_t t189 = 133LL;

    t189 = (x869+((x870-x871)==x872));

    if (t189 != -1LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x878 = -1;
	int16_t x879 = INT16_MIN;
	int32_t x880 = INT32_MIN;
	volatile uint64_t t190 = 31LLU;

    t190 = (x877+((x878-x879)==x880));

    if (t190 != 2068889LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int16_t x882 = 111;
	static uint32_t x883 = UINT32_MAX;
	volatile int8_t x884 = -1;
	uint64_t t191 = 2074796236320270453LLU;

    t191 = (x881+((x882-x883)==x884));

    if (t191 != 17171195919LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x886 = 6U;
	static int16_t x887 = INT16_MIN;

    t192 = (x885+((x886-x887)==x888));

    if (t192 != UINT32_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x890 = INT16_MIN;
	static uint16_t x891 = 6772U;
	int16_t x892 = INT16_MAX;
	volatile int32_t t193 = INT32_MAX;

    t193 = (x889+((x890-x891)==x892));

    if (t193 != INT32_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x894 = -1LL;
	volatile int16_t x895 = INT16_MAX;
	int32_t x896 = INT32_MAX;
	volatile int32_t t194 = 183786680;

    t194 = (x893+((x894-x895)==x896));

    if (t194 != -128) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x897 = UINT64_MAX;
	uint8_t x898 = 37U;
	int16_t x899 = INT16_MAX;
	int64_t x900 = -120589146LL;
	volatile uint64_t t195 = UINT64_MAX;

    t195 = (x897+((x898-x899)==x900));

    if (t195 != UINT64_MAX) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x905 = -6668;
	int32_t x906 = -1;
	int32_t x907 = -13951501;
	static int64_t x908 = -138191926465456LL;
	int32_t t196 = -15842208;

    t196 = (x905+((x906-x907)==x908));

    if (t196 != -6668) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x909 = INT16_MAX;
	static int64_t x911 = -2765304961LL;
	volatile uint16_t x912 = UINT16_MAX;
	volatile int32_t t197 = 398248;

    t197 = (x909+((x910-x911)==x912));

    if (t197 != 32767) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x913 = 78161259U;
	int64_t x914 = 20862087LL;
	int8_t x916 = -1;

    t198 = (x913+((x914-x915)==x916));

    if (t198 != 78161259U) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x918 = INT32_MIN;
	static volatile uint64_t x919 = 17314572437721LLU;
	int8_t x920 = INT8_MAX;
	volatile int32_t t199 = -989167;

    t199 = (x917+((x918-x919)==x920));

    if (t199 != -13) { NG(); } else { ; }
	
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

