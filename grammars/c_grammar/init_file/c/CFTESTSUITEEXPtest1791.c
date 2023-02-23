
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
volatile uint8_t x3 = 60U;
static int16_t x8 = -1;
static volatile int32_t t2 = 2;
uint8_t x14 = UINT8_MAX;
int8_t x23 = 3;
uint64_t x27 = 27095297902LLU;
uint8_t x31 = 12U;
volatile int64_t x37 = -1LL;
uint64_t x38 = 379227LLU;
volatile int8_t x47 = INT8_MAX;
volatile int64_t t10 = -29125323LL;
static volatile int64_t x54 = INT64_MIN;
int16_t x55 = 0;
int64_t t11 = -902638041978546LL;
uint64_t x57 = 3136641670748LLU;
int32_t x61 = -1;
int8_t x67 = -1;
int32_t x82 = -371053;
static volatile int32_t x86 = INT32_MIN;
static int64_t x87 = INT64_MIN;
static int16_t x88 = -4063;
static uint8_t x95 = UINT8_MAX;
uint8_t x99 = 15U;
int8_t x105 = -1;
uint64_t t23 = UINT64_MAX;
int64_t x122 = INT64_MAX;
int16_t x123 = -1;
int64_t x126 = -1LL;
int32_t x128 = 163340271;
int64_t x131 = -1LL;
int64_t x140 = 497LL;
volatile int32_t x146 = INT32_MAX;
static int64_t t33 = -11LL;
uint64_t t34 = 188355LLU;
int32_t x173 = INT32_MAX;
static int16_t x178 = INT16_MIN;
int16_t x179 = INT16_MIN;
int64_t x184 = 3261567421825308066LL;
static int64_t t41 = 10272104855055LL;
static int32_t x192 = INT32_MAX;
int8_t x197 = 4;
int32_t x198 = -965352698;
int32_t t44 = -778435;
uint32_t t46 = UINT32_MAX;
uint16_t x235 = 26U;
int64_t x241 = INT64_MAX;
volatile int64_t t54 = INT64_MAX;
int16_t x246 = INT16_MAX;
int8_t x248 = INT8_MIN;
static volatile int32_t x251 = 72342;
int32_t t57 = -80;
static volatile int8_t x257 = INT8_MIN;
int32_t x258 = INT32_MIN;
int8_t x269 = -5;
int32_t x272 = INT32_MAX;
volatile int32_t t61 = 204;
int16_t x273 = -1306;
static int16_t x283 = INT16_MAX;
volatile uint32_t x285 = 30146363U;
static int32_t x287 = 1165;
static int64_t x288 = 16919245LL;
uint8_t x295 = 0U;
int16_t x297 = INT16_MAX;
static int16_t x298 = 1738;
uint64_t t71 = 15LLU;
uint32_t x319 = 298U;
uint8_t x321 = UINT8_MAX;
int8_t x322 = INT8_MIN;
static int32_t x328 = INT32_MAX;
int8_t x329 = 1;
volatile int32_t x339 = INT32_MAX;
static uint8_t x341 = UINT8_MAX;
int32_t t78 = -86098219;
int16_t x371 = INT16_MIN;
int16_t x377 = 1;
static uint64_t x379 = UINT64_MAX;
int32_t x383 = 68878;
int32_t x387 = INT32_MIN;
static int16_t x392 = -1261;
volatile int8_t x399 = -1;
volatile uint32_t x403 = UINT32_MAX;
volatile int32_t t92 = 3539;
int16_t x415 = INT16_MIN;
int32_t x416 = INT32_MAX;
uint32_t x417 = UINT32_MAX;
int16_t x422 = -1;
int32_t t99 = 96427872;
int64_t x443 = INT64_MIN;
static uint32_t x444 = 91321U;
uint64_t x447 = 234LLU;
uint64_t x448 = UINT64_MAX;
int64_t x451 = INT64_MIN;
volatile int64_t t105 = 84294061166129LL;
static uint64_t x458 = UINT64_MAX;
int16_t x462 = INT16_MAX;
int16_t x468 = INT16_MIN;
volatile uint32_t x472 = UINT32_MAX;
uint64_t x484 = UINT64_MAX;
int8_t x485 = 33;
int16_t x489 = INT16_MIN;
volatile uint32_t x491 = 20141U;
volatile int8_t x492 = INT8_MIN;
static int64_t x494 = INT64_MIN;
int8_t x498 = INT8_MIN;
volatile uint8_t x499 = 111U;
int8_t x504 = 1;
static int16_t x505 = 45;
uint64_t x515 = 225LLU;
uint64_t t119 = 1LLU;
static volatile int32_t x517 = -1;
static uint32_t t124 = 57068879U;
static int16_t x547 = INT16_MAX;
uint64_t t126 = 15059LLU;
volatile int16_t x552 = -1;
int16_t x564 = -1;
static volatile int32_t t129 = -846107;
int64_t t130 = 405875475618964196LL;
static int16_t x571 = INT16_MIN;
int8_t x572 = INT8_MAX;
int32_t t133 = 4572266;
int16_t x587 = 1269;
volatile int32_t t137 = INT32_MAX;
int8_t x601 = INT8_MAX;
static int8_t x604 = INT8_MIN;
uint8_t x608 = 6U;
int8_t x617 = INT8_MIN;
uint32_t x623 = 638637U;
uint32_t x624 = 111704755U;
int16_t x640 = -1;
volatile int32_t t145 = -29;
static int32_t x647 = INT32_MIN;
volatile uint16_t x663 = 42U;
static volatile int32_t t149 = -16578;
uint32_t x666 = 93451010U;
int16_t x680 = INT16_MIN;
uint16_t x682 = 3U;
uint64_t t154 = 279896183879277LLU;
uint16_t x693 = UINT16_MAX;
volatile int8_t x695 = INT8_MIN;
int32_t x698 = INT32_MIN;
int32_t t158 = INT32_MAX;
int32_t x702 = INT32_MIN;
static uint16_t x709 = 4694U;
volatile int32_t x716 = INT32_MAX;
int16_t x724 = -1;
int8_t x731 = -1;
volatile int32_t x735 = -77133359;
volatile int32_t x736 = 0;
volatile uint64_t t167 = 317549LLU;
uint32_t x746 = 21263U;
int16_t x764 = INT16_MIN;
int32_t x775 = -215;
int8_t x779 = 39;
volatile uint8_t x783 = 12U;
int64_t x789 = INT64_MIN;
int32_t t179 = 832433;
static volatile uint32_t t184 = 3232934U;
volatile int64_t x825 = INT64_MIN;
int64_t x849 = INT64_MIN;
static int32_t x851 = INT32_MAX;
volatile uint64_t x854 = UINT64_MAX;
int16_t x856 = 0;
volatile uint32_t t191 = UINT32_MAX;
int16_t x858 = -1;
int8_t x867 = INT8_MIN;
int8_t x869 = INT8_MIN;
int64_t x871 = 5257LL;
int8_t x872 = INT8_MAX;
volatile int32_t t195 = -130294;
int32_t x873 = INT32_MIN;
int8_t x882 = INT8_MIN;
uint64_t x888 = 0LLU;


void f0(void) {
    	uint64_t x2 = 7675477229268989866LLU;
	int32_t x4 = INT32_MAX;
	volatile int32_t t0 = -59474;

    t0 = (x1|((x2<=x3)-x4));

    if (t0 != -127) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x5 = 0;
	static uint8_t x6 = UINT8_MAX;
	uint64_t x7 = 51772769617715LLU;
	int32_t t1 = 8033;

    t1 = (x5|((x6<=x7)-x8));

    if (t1 != 2) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MIN;
	int32_t x10 = -1;
	int64_t x11 = 48786LL;
	int8_t x12 = 0;

    t2 = (x9|((x10<=x11)-x12));

    if (t2 != -2147483647) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x13 = -1;
	uint8_t x15 = 6U;
	volatile int64_t x16 = INT64_MAX;
	static int64_t t3 = 285232340LL;

    t3 = (x13|((x14<=x15)-x16));

    if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x21 = INT8_MIN;
	uint16_t x22 = UINT16_MAX;
	volatile int64_t x24 = INT64_MAX;
	int64_t t4 = 184880619496LL;

    t4 = (x21|((x22<=x23)-x24));

    if (t4 != -127LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x25 = -1LL;
	volatile int8_t x26 = -4;
	int16_t x28 = -1;
	volatile int64_t t5 = -11219607210375171LL;

    t5 = (x25|((x26<=x27)-x28));

    if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x29 = -1;
	int64_t x30 = INT64_MAX;
	uint64_t x32 = 17499416129139000LLU;
	volatile uint64_t t6 = UINT64_MAX;

    t6 = (x29|((x30<=x31)-x32));

    if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x39 = -182100371LL;
	volatile int16_t x40 = 215;
	int64_t t7 = 7354058250LL;

    t7 = (x37|((x38<=x39)-x40));

    if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x41 = INT16_MIN;
	volatile int16_t x42 = INT16_MIN;
	int16_t x43 = INT16_MAX;
	int64_t x44 = INT64_MAX;
	int64_t t8 = -656589265420018LL;

    t8 = (x41|((x42<=x43)-x44));

    if (t8 != -32766LL) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint16_t x45 = 7542U;
	int16_t x46 = 40;
	volatile int64_t x48 = 352710963827554LL;
	volatile int64_t t9 = -693702074053032LL;

    t9 = (x45|((x46<=x47)-x48));

    if (t9 != -352710963823105LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int8_t x49 = 50;
	int16_t x50 = INT16_MAX;
	uint32_t x51 = 220025U;
	int64_t x52 = -1LL;

    t10 = (x49|((x50<=x51)-x52));

    if (t10 != 50LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x53 = 80548576LL;
	uint32_t x56 = 2990U;

    t11 = (x53|((x54<=x55)-x56));

    if (t11 != 4294964979LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x58 = INT8_MIN;
	static int8_t x59 = 0;
	int64_t x60 = 1LL;
	volatile uint64_t t12 = 76LLU;

    t12 = (x57|((x58<=x59)-x60));

    if (t12 != 3136641670748LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x62 = -3;
	int32_t x63 = INT32_MAX;
	static int16_t x64 = 1;
	int32_t t13 = 162733360;

    t13 = (x61|((x62<=x63)-x64));

    if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x65 = 198124691524209LLU;
	uint32_t x66 = 411175U;
	uint8_t x68 = 75U;
	volatile uint64_t t14 = 1LLU;

    t14 = (x65|((x66<=x67)-x68));

    if (t14 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x69 = INT64_MAX;
	uint8_t x70 = 1U;
	volatile int8_t x71 = INT8_MIN;
	uint8_t x72 = 120U;
	int64_t t15 = -2985LL;

    t15 = (x69|((x70<=x71)-x72));

    if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x73 = INT64_MAX;
	int32_t x74 = INT32_MAX;
	uint32_t x75 = 127107403U;
	static int16_t x76 = -1;
	volatile int64_t t16 = INT64_MAX;

    t16 = (x73|((x74<=x75)-x76));

    if (t16 != INT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x77 = -2;
	int16_t x78 = -72;
	int16_t x79 = 1;
	uint16_t x80 = UINT16_MAX;
	volatile int32_t t17 = 6;

    t17 = (x77|((x78<=x79)-x80));

    if (t17 != -2) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint64_t x81 = UINT64_MAX;
	uint64_t x83 = UINT64_MAX;
	uint16_t x84 = 16U;
	volatile uint64_t t18 = UINT64_MAX;

    t18 = (x81|((x82<=x83)-x84));

    if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile int32_t x85 = INT32_MAX;
	int32_t t19 = INT32_MAX;

    t19 = (x85|((x86<=x87)-x88));

    if (t19 != INT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x93 = INT16_MIN;
	uint16_t x94 = UINT16_MAX;
	int8_t x96 = INT8_MAX;
	volatile int32_t t20 = 2911;

    t20 = (x93|((x94<=x95)-x96));

    if (t20 != -127) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x97 = -1;
	int8_t x98 = 0;
	int16_t x100 = INT16_MIN;
	static volatile int32_t t21 = -3100619;

    t21 = (x97|((x98<=x99)-x100));

    if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x101 = -1LL;
	static int32_t x102 = -244182370;
	int64_t x103 = 331373654979356173LL;
	int16_t x104 = 1;
	int64_t t22 = -47LL;

    t22 = (x101|((x102<=x103)-x104));

    if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x106 = 309LLU;
	int32_t x107 = INT32_MIN;
	uint64_t x108 = 3511137844LLU;

    t23 = (x105|((x106<=x107)-x108));

    if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x109 = UINT16_MAX;
	static int16_t x110 = -82;
	int16_t x111 = INT16_MIN;
	volatile uint32_t x112 = UINT32_MAX;
	volatile uint32_t t24 = 753U;

    t24 = (x109|((x110<=x111)-x112));

    if (t24 != 65535U) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x113 = 43025394;
	int32_t x114 = 17904;
	int16_t x115 = INT16_MAX;
	uint32_t x116 = UINT32_MAX;
	volatile uint32_t t25 = 169330516U;

    t25 = (x113|((x114<=x115)-x116));

    if (t25 != 43025394U) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x117 = INT8_MIN;
	int8_t x118 = INT8_MIN;
	int64_t x119 = -982285530LL;
	volatile int64_t x120 = INT64_MAX;
	int64_t t26 = -218LL;

    t26 = (x117|((x118<=x119)-x120));

    if (t26 != -127LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x121 = INT16_MIN;
	volatile uint64_t x124 = UINT64_MAX;
	uint64_t t27 = 360325676410LLU;

    t27 = (x121|((x122<=x123)-x124));

    if (t27 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x125 = INT32_MAX;
	volatile int64_t x127 = 24144240LL;
	volatile int32_t t28 = -170402870;

    t28 = (x125|((x126<=x127)-x128));

    if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x129 = INT16_MIN;
	volatile uint16_t x130 = UINT16_MAX;
	int16_t x132 = INT16_MIN;
	volatile int32_t t29 = -56255;

    t29 = (x129|((x130<=x131)-x132));

    if (t29 != -32768) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x133 = INT32_MIN;
	int32_t x134 = -1;
	static int64_t x135 = INT64_MIN;
	uint32_t x136 = 6065699U;
	uint32_t t30 = 1057762746U;

    t30 = (x133|((x134<=x135)-x136));

    if (t30 != 4288901597U) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x137 = 83275U;
	int32_t x138 = INT32_MIN;
	uint8_t x139 = UINT8_MAX;
	int64_t t31 = -48083773619541740LL;

    t31 = (x137|((x138<=x139)-x140));

    if (t31 != -165LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x141 = INT64_MIN;
	static int64_t x142 = 25269329824LL;
	int64_t x143 = 438982701958336LL;
	int16_t x144 = -1;
	static int64_t t32 = -9832LL;

    t32 = (x141|((x142<=x143)-x144));

    if (t32 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile int64_t x145 = -429329LL;
	int32_t x147 = INT32_MIN;
	volatile uint16_t x148 = 12085U;

    t33 = (x145|((x146<=x147)-x148));

    if (t33 != -3345LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x149 = 53260135082LLU;
	int8_t x150 = INT8_MIN;
	uint8_t x151 = 1U;
	int64_t x152 = INT64_MAX;

    t34 = (x149|((x150<=x151)-x152));

    if (t34 != 9223372090114910890LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x157 = INT8_MIN;
	int16_t x158 = INT16_MIN;
	volatile int32_t x159 = 114;
	static uint8_t x160 = UINT8_MAX;
	int32_t t35 = 0;

    t35 = (x157|((x158<=x159)-x160));

    if (t35 != -126) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x161 = INT8_MIN;
	volatile int32_t x162 = 450483;
	volatile int64_t x163 = 4848752944375537LL;
	int8_t x164 = -5;
	volatile int32_t t36 = 23;

    t36 = (x161|((x162<=x163)-x164));

    if (t36 != -122) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x165 = INT16_MAX;
	uint32_t x166 = 2487U;
	volatile uint8_t x167 = 5U;
	static uint64_t x168 = UINT64_MAX;
	volatile uint64_t t37 = 172569594620LLU;

    t37 = (x165|((x166<=x167)-x168));

    if (t37 != 32767LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x174 = INT16_MIN;
	int16_t x175 = INT16_MIN;
	int16_t x176 = INT16_MIN;
	int32_t t38 = INT32_MAX;

    t38 = (x173|((x174<=x175)-x176));

    if (t38 != INT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x177 = 23860936LLU;
	int16_t x180 = -1;
	volatile uint64_t t39 = 3190347LLU;

    t39 = (x177|((x178<=x179)-x180));

    if (t39 != 23860938LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x181 = INT64_MAX;
	int64_t x182 = INT64_MIN;
	static int8_t x183 = -1;
	static int64_t t40 = -76154698557LL;

    t40 = (x181|((x182<=x183)-x184));

    if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x185 = INT64_MIN;
	uint32_t x186 = UINT32_MAX;
	int32_t x187 = INT32_MAX;
	volatile int32_t x188 = -332771;

    t41 = (x185|((x186<=x187)-x188));

    if (t41 != -9223372036854443037LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x189 = 18365U;
	volatile int8_t x190 = 2;
	int64_t x191 = -1LL;
	volatile uint32_t t42 = 1567400U;

    t42 = (x189|((x190<=x191)-x192));

    if (t42 != 2147502013U) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x199 = INT16_MAX;
	uint16_t x200 = 2436U;
	int32_t t43 = 504975;

    t43 = (x197|((x198<=x199)-x200));

    if (t43 != -2435) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x201 = INT8_MAX;
	static uint16_t x202 = 8404U;
	static uint32_t x203 = 210985471U;
	int16_t x204 = -1182;

    t44 = (x201|((x202<=x203)-x204));

    if (t44 != 1279) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x205 = INT16_MIN;
	static uint16_t x206 = 896U;
	static int8_t x207 = 2;
	uint16_t x208 = 262U;
	volatile int32_t t45 = 5136066;

    t45 = (x205|((x206<=x207)-x208));

    if (t45 != -262) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint32_t x209 = UINT32_MAX;
	uint32_t x210 = UINT32_MAX;
	volatile uint32_t x211 = UINT32_MAX;
	volatile uint8_t x212 = 69U;

    t46 = (x209|((x210<=x211)-x212));

    if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint32_t x213 = 15291338U;
	static uint64_t x214 = 464652268078727759LLU;
	int64_t x215 = INT64_MAX;
	int32_t x216 = -7971340;
	volatile uint32_t t47 = 1U;

    t47 = (x213|((x214<=x215)-x216));

    if (t47 != 16380879U) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x217 = INT8_MIN;
	static int8_t x218 = -14;
	uint16_t x219 = UINT16_MAX;
	int32_t x220 = 8007014;
	volatile int32_t t48 = 26;

    t48 = (x217|((x218<=x219)-x220));

    if (t48 != -101) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint32_t x221 = UINT32_MAX;
	static uint64_t x222 = 64343918954289LLU;
	volatile int32_t x223 = INT32_MIN;
	uint32_t x224 = 152509714U;
	uint32_t t49 = UINT32_MAX;

    t49 = (x221|((x222<=x223)-x224));

    if (t49 != UINT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x225 = INT8_MIN;
	uint16_t x226 = UINT16_MAX;
	uint32_t x227 = UINT32_MAX;
	uint32_t x228 = 1684022347U;
	static uint32_t t50 = 175U;

    t50 = (x225|((x226<=x227)-x228));

    if (t50 != 4294967222U) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x229 = 15233U;
	uint16_t x230 = 20084U;
	int8_t x231 = 1;
	uint16_t x232 = 2U;
	volatile int32_t t51 = -17017137;

    t51 = (x229|((x230<=x231)-x232));

    if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x233 = -47848595;
	static uint32_t x234 = 163U;
	int8_t x236 = 6;
	static int32_t t52 = -93;

    t52 = (x233|((x234<=x235)-x236));

    if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile uint64_t x237 = 1738LLU;
	uint32_t x238 = 3U;
	int32_t x239 = -1;
	int16_t x240 = INT16_MAX;
	static uint64_t t53 = 12962775LLU;

    t53 = (x237|((x238<=x239)-x240));

    if (t53 != 18446744073709520586LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x242 = INT32_MIN;
	uint16_t x243 = 5852U;
	uint32_t x244 = UINT32_MAX;

    t54 = (x241|((x242<=x243)-x244));

    if (t54 != INT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x245 = INT64_MIN;
	uint64_t x247 = 13LLU;
	int64_t t55 = 90999LL;

    t55 = (x245|((x246<=x247)-x248));

    if (t55 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x249 = 0;
	int64_t x250 = 3402256022659LL;
	static int8_t x252 = 8;
	volatile int32_t t56 = -215;

    t56 = (x249|((x250<=x251)-x252));

    if (t56 != -8) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x253 = INT8_MIN;
	int16_t x254 = -17;
	uint64_t x255 = 18009982LLU;
	int16_t x256 = 0;

    t57 = (x253|((x254<=x255)-x256));

    if (t57 != -128) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x259 = INT16_MAX;
	uint16_t x260 = 12U;
	volatile int32_t t58 = 1044546440;

    t58 = (x257|((x258<=x259)-x260));

    if (t58 != -11) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x261 = 400U;
	int8_t x262 = INT8_MAX;
	int16_t x263 = INT16_MIN;
	int16_t x264 = INT16_MIN;
	static volatile int32_t t59 = -72;

    t59 = (x261|((x262<=x263)-x264));

    if (t59 != 33168) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x265 = -1;
	volatile int64_t x266 = INT64_MAX;
	int32_t x267 = INT32_MIN;
	int8_t x268 = 0;
	int32_t t60 = -950471;

    t60 = (x265|((x266<=x267)-x268));

    if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x270 = -1;
	int32_t x271 = -1;

    t61 = (x269|((x270<=x271)-x272));

    if (t61 != -5) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int32_t x274 = INT32_MIN;
	static uint16_t x275 = UINT16_MAX;
	int16_t x276 = -1;
	volatile int32_t t62 = 811374;

    t62 = (x273|((x274<=x275)-x276));

    if (t62 != -1306) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x277 = -1;
	uint64_t x278 = 181344713387202083LLU;
	static int32_t x279 = -154;
	uint16_t x280 = 461U;
	volatile int32_t t63 = 0;

    t63 = (x277|((x278<=x279)-x280));

    if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x281 = -250180570742LL;
	static volatile int32_t x282 = 8;
	int16_t x284 = -1;
	int64_t t64 = 1167994409755LL;

    t64 = (x281|((x282<=x283)-x284));

    if (t64 != -250180570742LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x286 = INT64_MAX;
	volatile int64_t t65 = 268845856165LL;

    t65 = (x285|((x286<=x287)-x288));

    if (t65 != -197LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x289 = INT16_MIN;
	int8_t x290 = -1;
	int32_t x291 = -1;
	int32_t x292 = INT32_MAX;
	int32_t t66 = 508;

    t66 = (x289|((x290<=x291)-x292));

    if (t66 != -32766) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x293 = INT16_MIN;
	uint32_t x294 = UINT32_MAX;
	volatile uint8_t x296 = UINT8_MAX;
	int32_t t67 = 8;

    t67 = (x293|((x294<=x295)-x296));

    if (t67 != -255) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x299 = INT32_MIN;
	uint16_t x300 = 27U;
	int32_t t68 = 111174;

    t68 = (x297|((x298<=x299)-x300));

    if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x301 = 26833LLU;
	static uint16_t x302 = UINT16_MAX;
	volatile uint64_t x303 = 27758323665307LLU;
	static uint64_t x304 = UINT64_MAX;
	static volatile uint64_t t69 = 501639516492247LLU;

    t69 = (x301|((x302<=x303)-x304));

    if (t69 != 26835LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x305 = 0;
	int32_t x306 = INT32_MIN;
	uint32_t x307 = UINT32_MAX;
	uint16_t x308 = 0U;
	int32_t t70 = -23;

    t70 = (x305|((x306<=x307)-x308));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x309 = 115689161608LLU;
	uint16_t x310 = 58U;
	uint16_t x311 = 3860U;
	int16_t x312 = -505;

    t71 = (x309|((x310<=x311)-x312));

    if (t71 != 115689161722LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x313 = 0;
	uint32_t x314 = 939542549U;
	int32_t x315 = INT32_MIN;
	int16_t x316 = 1985;
	static int32_t t72 = 6359438;

    t72 = (x313|((x314<=x315)-x316));

    if (t72 != -1984) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint8_t x317 = 3U;
	static uint32_t x318 = 823U;
	int16_t x320 = -1;
	int32_t t73 = 169;

    t73 = (x317|((x318<=x319)-x320));

    if (t73 != 3) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x323 = -248;
	static int8_t x324 = 1;
	volatile int32_t t74 = 648;

    t74 = (x321|((x322<=x323)-x324));

    if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x325 = 6;
	uint16_t x326 = 1U;
	int8_t x327 = INT8_MIN;
	int32_t t75 = 195297;

    t75 = (x325|((x326<=x327)-x328));

    if (t75 != -2147483641) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x330 = UINT32_MAX;
	int64_t x331 = INT64_MIN;
	static int64_t x332 = INT64_MAX;
	int64_t t76 = -873315028LL;

    t76 = (x329|((x330<=x331)-x332));

    if (t76 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x337 = -1;
	uint64_t x338 = 25LLU;
	static uint8_t x340 = 52U;
	volatile int32_t t77 = -96336;

    t77 = (x337|((x338<=x339)-x340));

    if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint32_t x342 = UINT32_MAX;
	uint8_t x343 = 8U;
	int8_t x344 = INT8_MIN;

    t78 = (x341|((x342<=x343)-x344));

    if (t78 != 255) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x345 = INT32_MAX;
	uint32_t x346 = 41U;
	int32_t x347 = INT32_MIN;
	static int16_t x348 = INT16_MAX;
	static int32_t t79 = 3;

    t79 = (x345|((x346<=x347)-x348));

    if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x353 = UINT8_MAX;
	static int8_t x354 = INT8_MIN;
	uint8_t x355 = UINT8_MAX;
	volatile uint64_t x356 = 104259407503LLU;
	volatile uint64_t t80 = 4607514993190619803LLU;

    t80 = (x353|((x354<=x355)-x356));

    if (t80 != 18446743969450144255LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile uint16_t x357 = UINT16_MAX;
	volatile uint32_t x358 = 153159733U;
	int8_t x359 = INT8_MAX;
	int16_t x360 = INT16_MIN;
	int32_t t81 = 1;

    t81 = (x357|((x358<=x359)-x360));

    if (t81 != 65535) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint8_t x361 = 1U;
	volatile uint64_t x362 = 28414899058952766LLU;
	int8_t x363 = INT8_MAX;
	uint32_t x364 = UINT32_MAX;
	uint32_t t82 = 242U;

    t82 = (x361|((x362<=x363)-x364));

    if (t82 != 1U) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x365 = INT64_MIN;
	int64_t x366 = -24298464149767102LL;
	static uint8_t x367 = 34U;
	uint16_t x368 = 28U;
	int64_t t83 = 165283675284LL;

    t83 = (x365|((x366<=x367)-x368));

    if (t83 != -27LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint64_t x369 = 0LLU;
	volatile int64_t x370 = 253911LL;
	int64_t x372 = 4407LL;
	volatile uint64_t t84 = 7115LLU;

    t84 = (x369|((x370<=x371)-x372));

    if (t84 != 18446744073709547209LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x373 = 425U;
	int8_t x374 = -2;
	static int16_t x375 = INT16_MAX;
	static volatile int16_t x376 = -1;
	volatile int32_t t85 = 230263993;

    t85 = (x373|((x374<=x375)-x376));

    if (t85 != 427) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x378 = INT32_MIN;
	int8_t x380 = -1;
	int32_t t86 = 4139676;

    t86 = (x377|((x378<=x379)-x380));

    if (t86 != 3) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x381 = -1;
	volatile int32_t x382 = INT32_MAX;
	volatile int32_t x384 = INT32_MAX;
	volatile int32_t t87 = 211910956;

    t87 = (x381|((x382<=x383)-x384));

    if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x385 = 1336;
	uint32_t x386 = 97377U;
	int8_t x388 = 1;
	int32_t t88 = 1;

    t88 = (x385|((x386<=x387)-x388));

    if (t88 != 1336) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x389 = INT8_MAX;
	int64_t x390 = -12477592052826LL;
	volatile int64_t x391 = INT64_MAX;
	int32_t t89 = -1333365;

    t89 = (x389|((x390<=x391)-x392));

    if (t89 != 1279) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x393 = 2;
	int32_t x394 = INT32_MIN;
	int8_t x395 = -1;
	int16_t x396 = -474;
	int32_t t90 = 23;

    t90 = (x393|((x394<=x395)-x396));

    if (t90 != 475) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x397 = -1;
	int8_t x398 = INT8_MIN;
	int32_t x400 = -1;
	volatile int32_t t91 = -152933;

    t91 = (x397|((x398<=x399)-x400));

    if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x401 = 0;
	int32_t x402 = INT32_MAX;
	volatile int16_t x404 = INT16_MAX;

    t92 = (x401|((x402<=x403)-x404));

    if (t92 != -32766) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x405 = INT32_MIN;
	uint32_t x406 = 245U;
	uint8_t x407 = 0U;
	volatile uint64_t x408 = UINT64_MAX;
	uint64_t t93 = 198851917291084LLU;

    t93 = (x405|((x406<=x407)-x408));

    if (t93 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint8_t x409 = UINT8_MAX;
	int32_t x410 = -1;
	uint8_t x411 = 119U;
	volatile int64_t x412 = 3528453472476747035LL;
	int64_t t94 = 38580978806LL;

    t94 = (x409|((x410<=x411)-x412));

    if (t94 != -3528453472476747009LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x413 = INT8_MAX;
	static uint64_t x414 = 34317175817607000LLU;
	volatile int32_t t95 = 1020;

    t95 = (x413|((x414<=x415)-x416));

    if (t95 != -2147483521) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x418 = 405;
	static volatile int16_t x419 = -1;
	int8_t x420 = -3;
	volatile uint32_t t96 = UINT32_MAX;

    t96 = (x417|((x418<=x419)-x420));

    if (t96 != UINT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x421 = INT64_MIN;
	int8_t x423 = INT8_MAX;
	int32_t x424 = -987954;
	int64_t t97 = 1016456LL;

    t97 = (x421|((x422<=x423)-x424));

    if (t97 != -9223372036853787853LL) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x425 = INT8_MAX;
	int16_t x426 = -1;
	volatile int32_t x427 = INT32_MIN;
	static volatile uint64_t x428 = 78LLU;
	uint64_t t98 = UINT64_MAX;

    t98 = (x425|((x426<=x427)-x428));

    if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x429 = 31337U;
	int8_t x430 = -1;
	uint64_t x431 = UINT64_MAX;
	static int8_t x432 = -24;

    t99 = (x429|((x430<=x431)-x432));

    if (t99 != 31353) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x433 = INT16_MIN;
	volatile int16_t x434 = -1;
	int16_t x435 = INT16_MIN;
	uint64_t x436 = 530341024419722785LLU;
	uint64_t t100 = 15095159807LLU;

    t100 = (x433|((x434<=x435)-x436));

    if (t100 != 18446744073709537759LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x437 = 0;
	volatile uint64_t x438 = 2615856682409935147LLU;
	uint64_t x439 = UINT64_MAX;
	uint8_t x440 = UINT8_MAX;
	int32_t t101 = 24062;

    t101 = (x437|((x438<=x439)-x440));

    if (t101 != -254) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x441 = UINT32_MAX;
	uint64_t x442 = 582LLU;
	uint32_t t102 = UINT32_MAX;

    t102 = (x441|((x442<=x443)-x444));

    if (t102 != UINT32_MAX) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint8_t x445 = 12U;
	uint64_t x446 = UINT64_MAX;
	uint64_t t103 = 2031761605486219LLU;

    t103 = (x445|((x446<=x447)-x448));

    if (t103 != 13LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint16_t x449 = 5U;
	int64_t x450 = INT64_MIN;
	static volatile uint64_t x452 = 2771607146267LLU;
	uint64_t t104 = 396485LLU;

    t104 = (x449|((x450<=x451)-x452));

    if (t104 != 18446741302102405351LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static int64_t x453 = -1LL;
	int32_t x454 = -1;
	int16_t x455 = INT16_MAX;
	int8_t x456 = INT8_MIN;

    t105 = (x453|((x454<=x455)-x456));

    if (t105 != -1LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int64_t x457 = INT64_MAX;
	uint32_t x459 = UINT32_MAX;
	int32_t x460 = -1809382;
	int64_t t106 = INT64_MAX;

    t106 = (x457|((x458<=x459)-x460));

    if (t106 != INT64_MAX) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x461 = -235755;
	static uint8_t x463 = UINT8_MAX;
	static int32_t x464 = 641914;
	int32_t t107 = 147957;

    t107 = (x461|((x462<=x463)-x464));

    if (t107 != -100457) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x465 = 11689;
	static volatile int8_t x466 = INT8_MIN;
	static int64_t x467 = INT64_MIN;
	int32_t t108 = -320;

    t108 = (x465|((x466<=x467)-x468));

    if (t108 != 44457) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x469 = 114LLU;
	static int64_t x470 = 0LL;
	uint16_t x471 = 12U;
	uint64_t t109 = 5118887LLU;

    t109 = (x469|((x470<=x471)-x472));

    if (t109 != 114LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static int16_t x477 = -49;
	uint32_t x478 = 270788U;
	static uint8_t x479 = 56U;
	volatile int32_t x480 = INT32_MAX;
	volatile int32_t t110 = 1276;

    t110 = (x477|((x478<=x479)-x480));

    if (t110 != -49) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x481 = -1;
	volatile uint32_t x482 = 0U;
	int16_t x483 = -166;
	static volatile uint64_t t111 = UINT64_MAX;

    t111 = (x481|((x482<=x483)-x484));

    if (t111 != UINT64_MAX) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x486 = INT16_MIN;
	uint64_t x487 = UINT64_MAX;
	uint8_t x488 = UINT8_MAX;
	int32_t t112 = 1;

    t112 = (x485|((x486<=x487)-x488));

    if (t112 != -221) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint64_t x490 = UINT64_MAX;
	int32_t t113 = -113823;

    t113 = (x489|((x490<=x491)-x492));

    if (t113 != -32640) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x493 = -423LL;
	int8_t x495 = -1;
	uint8_t x496 = 16U;
	static volatile int64_t t114 = 12485LL;

    t114 = (x493|((x494<=x495)-x496));

    if (t114 != -7LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x497 = -1;
	static uint16_t x500 = 948U;
	int32_t t115 = -8556;

    t115 = (x497|((x498<=x499)-x500));

    if (t115 != -1) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x501 = INT16_MAX;
	uint32_t x502 = 1441102955U;
	uint16_t x503 = 1019U;
	static volatile int32_t t116 = -2;

    t116 = (x501|((x502<=x503)-x504));

    if (t116 != -1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x506 = UINT8_MAX;
	static uint64_t x507 = 3497574LLU;
	int64_t x508 = -1LL;
	volatile int64_t t117 = 2270LL;

    t117 = (x505|((x506<=x507)-x508));

    if (t117 != 47LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x509 = UINT16_MAX;
	volatile uint8_t x510 = UINT8_MAX;
	int16_t x511 = -1;
	static volatile uint16_t x512 = UINT16_MAX;
	volatile int32_t t118 = 78215;

    t118 = (x509|((x510<=x511)-x512));

    if (t118 != -1) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x513 = -33;
	static int16_t x514 = INT16_MIN;
	uint64_t x516 = UINT64_MAX;

    t119 = (x513|((x514<=x515)-x516));

    if (t119 != 18446744073709551583LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x518 = -1;
	uint64_t x519 = UINT64_MAX;
	int64_t x520 = 1LL;
	volatile int64_t t120 = -2LL;

    t120 = (x517|((x518<=x519)-x520));

    if (t120 != -1LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static int16_t x521 = 59;
	int64_t x522 = INT64_MIN;
	uint16_t x523 = 63U;
	volatile uint64_t x524 = UINT64_MAX;
	static uint64_t t121 = 1442178692LLU;

    t121 = (x521|((x522<=x523)-x524));

    if (t121 != 59LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x525 = 50LLU;
	static volatile int8_t x526 = -1;
	volatile int8_t x527 = INT8_MAX;
	uint64_t x528 = 23LLU;
	volatile uint64_t t122 = 121LLU;

    t122 = (x525|((x526<=x527)-x528));

    if (t122 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x529 = INT32_MIN;
	volatile uint16_t x530 = 14719U;
	uint32_t x531 = UINT32_MAX;
	static int8_t x532 = -34;
	volatile int32_t t123 = -1;

    t123 = (x529|((x530<=x531)-x532));

    if (t123 != -2147483613) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x537 = 148U;
	volatile int16_t x538 = INT16_MAX;
	int16_t x539 = INT16_MAX;
	static uint8_t x540 = 0U;

    t124 = (x537|((x538<=x539)-x540));

    if (t124 != 149U) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint16_t x541 = 3U;
	static int32_t x542 = INT32_MIN;
	uint32_t x543 = 573567U;
	int32_t x544 = -1;
	volatile int32_t t125 = 1;

    t125 = (x541|((x542<=x543)-x544));

    if (t125 != 3) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x545 = INT16_MAX;
	uint64_t x546 = 14LLU;
	uint64_t x548 = 504791786778757LLU;

    t126 = (x545|((x546<=x547)-x548));

    if (t126 != 18446239281922801663LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x549 = INT64_MAX;
	uint16_t x550 = 4U;
	static uint64_t x551 = 336LLU;
	volatile int64_t t127 = INT64_MAX;

    t127 = (x549|((x550<=x551)-x552));

    if (t127 != INT64_MAX) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint8_t x553 = UINT8_MAX;
	uint64_t x554 = UINT64_MAX;
	int64_t x555 = -21263LL;
	uint8_t x556 = UINT8_MAX;
	volatile int32_t t128 = -1070308;

    t128 = (x553|((x554<=x555)-x556));

    if (t128 != -1) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x561 = -12;
	static int8_t x562 = INT8_MIN;
	int16_t x563 = -1;

    t129 = (x561|((x562<=x563)-x564));

    if (t129 != -10) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x565 = UINT8_MAX;
	uint16_t x566 = UINT16_MAX;
	uint16_t x567 = UINT16_MAX;
	static volatile int64_t x568 = 40817LL;

    t130 = (x565|((x566<=x567)-x568));

    if (t130 != -40705LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x569 = -175014461732LL;
	static int64_t x570 = -1LL;
	volatile int64_t t131 = 4109133990793664LL;

    t131 = (x569|((x570<=x571)-x572));

    if (t131 != -35LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x573 = UINT16_MAX;
	int8_t x574 = 7;
	static volatile int32_t x575 = INT32_MIN;
	uint16_t x576 = UINT16_MAX;
	volatile int32_t t132 = -1;

    t132 = (x573|((x574<=x575)-x576));

    if (t132 != -1) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x577 = INT8_MIN;
	volatile int64_t x578 = 3904427959LL;
	uint8_t x579 = 14U;
	int16_t x580 = -1;

    t133 = (x577|((x578<=x579)-x580));

    if (t133 != -127) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x581 = UINT32_MAX;
	uint8_t x582 = UINT8_MAX;
	volatile uint64_t x583 = UINT64_MAX;
	uint64_t x584 = 660205131LLU;
	volatile uint64_t t134 = UINT64_MAX;

    t134 = (x581|((x582<=x583)-x584));

    if (t134 != UINT64_MAX) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int16_t x585 = -1;
	int64_t x586 = INT64_MIN;
	volatile int8_t x588 = 0;
	int32_t t135 = -814;

    t135 = (x585|((x586<=x587)-x588));

    if (t135 != -1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x589 = 30;
	int8_t x590 = INT8_MIN;
	uint32_t x591 = 30961U;
	volatile uint32_t x592 = UINT32_MAX;
	volatile uint32_t t136 = 562103U;

    t136 = (x589|((x590<=x591)-x592));

    if (t136 != 31U) { NG(); } else { ; }
	
}

void f137(void) {
    	static int32_t x597 = INT32_MAX;
	volatile uint16_t x598 = 1900U;
	int32_t x599 = -1;
	int32_t x600 = -1;

    t137 = (x597|((x598<=x599)-x600));

    if (t137 != INT32_MAX) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x602 = -1LL;
	uint8_t x603 = 20U;
	volatile int32_t t138 = 1043157132;

    t138 = (x601|((x602<=x603)-x604));

    if (t138 != 255) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x605 = -14;
	static int16_t x606 = -12644;
	int16_t x607 = 475;
	volatile int32_t t139 = 700114;

    t139 = (x605|((x606<=x607)-x608));

    if (t139 != -5) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x613 = INT64_MIN;
	volatile int64_t x614 = INT64_MIN;
	volatile uint16_t x615 = UINT16_MAX;
	int8_t x616 = INT8_MIN;
	static int64_t t140 = 11633672691590LL;

    t140 = (x613|((x614<=x615)-x616));

    if (t140 != -9223372036854775679LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x618 = -1;
	int8_t x619 = 20;
	int8_t x620 = INT8_MAX;
	int32_t t141 = -10;

    t141 = (x617|((x618<=x619)-x620));

    if (t141 != -126) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x621 = 20384;
	uint16_t x622 = 9771U;
	volatile uint32_t t142 = 21U;

    t142 = (x621|((x622<=x623)-x624));

    if (t142 != 4183281646U) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x629 = INT64_MIN;
	int16_t x630 = INT16_MIN;
	int64_t x631 = -208507LL;
	uint8_t x632 = UINT8_MAX;
	volatile int64_t t143 = 23500LL;

    t143 = (x629|((x630<=x631)-x632));

    if (t143 != -255LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x633 = 22;
	int8_t x634 = 13;
	uint16_t x635 = 178U;
	static int64_t x636 = 109363008LL;
	volatile int64_t t144 = 2033788060458LL;

    t144 = (x633|((x634<=x635)-x636));

    if (t144 != -109362985LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x637 = -648;
	int32_t x638 = -2376344;
	volatile uint8_t x639 = 69U;

    t145 = (x637|((x638<=x639)-x640));

    if (t145 != -646) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x645 = INT64_MIN;
	uint32_t x646 = UINT32_MAX;
	uint16_t x648 = 11705U;
	volatile int64_t t146 = -129249516212LL;

    t146 = (x645|((x646<=x647)-x648));

    if (t146 != -11705LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x653 = 2652233U;
	volatile uint64_t x654 = 216983229847688764LLU;
	uint32_t x655 = 1540975U;
	int8_t x656 = -1;
	volatile uint32_t t147 = 0U;

    t147 = (x653|((x654<=x655)-x656));

    if (t147 != 2652233U) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x657 = INT32_MAX;
	uint16_t x658 = 3302U;
	uint16_t x659 = UINT16_MAX;
	volatile uint64_t x660 = UINT64_MAX;
	uint64_t t148 = 1731337588LLU;

    t148 = (x657|((x658<=x659)-x660));

    if (t148 != 2147483647LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x661 = INT8_MAX;
	int8_t x662 = INT8_MAX;
	int16_t x664 = INT16_MAX;

    t149 = (x661|((x662<=x663)-x664));

    if (t149 != -32641) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x665 = -1;
	uint16_t x667 = 1615U;
	volatile int8_t x668 = INT8_MIN;
	volatile int32_t t150 = -34203;

    t150 = (x665|((x666<=x667)-x668));

    if (t150 != -1) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x669 = INT8_MIN;
	int64_t x670 = -38815177753LL;
	static int8_t x671 = INT8_MIN;
	int32_t x672 = 853;
	volatile int32_t t151 = -500743;

    t151 = (x669|((x670<=x671)-x672));

    if (t151 != -84) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x673 = -1;
	static uint32_t x674 = UINT32_MAX;
	static int16_t x675 = INT16_MAX;
	int8_t x676 = -3;
	int32_t t152 = -26012183;

    t152 = (x673|((x674<=x675)-x676));

    if (t152 != -1) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint32_t x677 = 94400798U;
	volatile int8_t x678 = INT8_MIN;
	int16_t x679 = -15;
	uint32_t t153 = 408U;

    t153 = (x677|((x678<=x679)-x680));

    if (t153 != 94433567U) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint8_t x681 = UINT8_MAX;
	int64_t x683 = INT64_MAX;
	static uint64_t x684 = UINT64_MAX;

    t154 = (x681|((x682<=x683)-x684));

    if (t154 != 255LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x685 = INT8_MIN;
	uint32_t x686 = UINT32_MAX;
	int16_t x687 = -4;
	int64_t x688 = 17433480550324040LL;
	static int64_t t155 = -2463660361LL;

    t155 = (x685|((x686<=x687)-x688));

    if (t155 != -72LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x689 = 3U;
	int8_t x690 = 0;
	int32_t x691 = INT32_MIN;
	uint64_t x692 = 3904430LLU;
	uint64_t t156 = 5307193380319LLU;

    t156 = (x689|((x690<=x691)-x692));

    if (t156 != 18446744073705647187LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x694 = INT64_MIN;
	int8_t x696 = INT8_MAX;
	volatile int32_t t157 = 105;

    t157 = (x693|((x694<=x695)-x696));

    if (t157 != -1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x697 = INT32_MAX;
	static int64_t x699 = -1LL;
	int16_t x700 = -2292;

    t158 = (x697|((x698<=x699)-x700));

    if (t158 != INT32_MAX) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x701 = -1;
	uint64_t x703 = UINT64_MAX;
	uint16_t x704 = 21U;
	int32_t t159 = 238432090;

    t159 = (x701|((x702<=x703)-x704));

    if (t159 != -1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x705 = UINT32_MAX;
	uint16_t x706 = 582U;
	int8_t x707 = INT8_MIN;
	uint32_t x708 = 1U;
	static volatile uint32_t t160 = UINT32_MAX;

    t160 = (x705|((x706<=x707)-x708));

    if (t160 != UINT32_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x710 = -17;
	static uint32_t x711 = UINT32_MAX;
	static volatile int8_t x712 = -1;
	int32_t t161 = -58;

    t161 = (x709|((x710<=x711)-x712));

    if (t161 != 4694) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint32_t x713 = 22605U;
	int64_t x714 = 105LL;
	int8_t x715 = -1;
	static uint32_t t162 = 1041U;

    t162 = (x713|((x714<=x715)-x716));

    if (t162 != 2147506253U) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x717 = INT16_MIN;
	static int16_t x718 = INT16_MAX;
	uint64_t x719 = UINT64_MAX;
	static int64_t x720 = 572000LL;
	int64_t t163 = -8196343770410LL;

    t163 = (x717|((x718<=x719)-x720));

    if (t163 != -14943LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static int32_t x721 = 571108803;
	volatile int32_t x722 = INT32_MIN;
	uint8_t x723 = 96U;
	static int32_t t164 = 940695;

    t164 = (x721|((x722<=x723)-x724));

    if (t164 != 571108803) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x729 = INT16_MIN;
	int64_t x730 = -1LL;
	int8_t x732 = -1;
	int32_t t165 = -516416592;

    t165 = (x729|((x730<=x731)-x732));

    if (t165 != -32766) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x733 = 192;
	int32_t x734 = 1592;
	int32_t t166 = 4236;

    t166 = (x733|((x734<=x735)-x736));

    if (t166 != 192) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x737 = 144334947170LLU;
	int32_t x738 = INT32_MAX;
	volatile uint32_t x739 = UINT32_MAX;
	int64_t x740 = INT64_MAX;

    t167 = (x737|((x738<=x739)-x740));

    if (t167 != 9223372181189722978LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	static int16_t x745 = INT16_MIN;
	int16_t x747 = INT16_MIN;
	static volatile int16_t x748 = INT16_MIN;
	int32_t t168 = 193276;

    t168 = (x745|((x746<=x747)-x748));

    if (t168 != -32767) { NG(); } else { ; }
	
}

void f169(void) {
    	static int64_t x749 = INT64_MAX;
	uint64_t x750 = 0LLU;
	static uint16_t x751 = UINT16_MAX;
	volatile int8_t x752 = INT8_MIN;
	volatile int64_t t169 = INT64_MAX;

    t169 = (x749|((x750<=x751)-x752));

    if (t169 != INT64_MAX) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x757 = 0;
	int16_t x758 = INT16_MAX;
	uint8_t x759 = 0U;
	volatile uint8_t x760 = 2U;
	volatile int32_t t170 = 1344;

    t170 = (x757|((x758<=x759)-x760));

    if (t170 != -2) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint8_t x761 = 17U;
	int64_t x762 = INT64_MIN;
	static volatile int8_t x763 = INT8_MIN;
	int32_t t171 = 77500;

    t171 = (x761|((x762<=x763)-x764));

    if (t171 != 32785) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x765 = INT8_MIN;
	volatile uint64_t x766 = 1884908570423088839LLU;
	int32_t x767 = -27;
	int64_t x768 = INT64_MAX;
	static volatile int64_t t172 = -512216896485523LL;

    t172 = (x765|((x766<=x767)-x768));

    if (t172 != -126LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x769 = 1283330208LLU;
	static uint16_t x770 = 27U;
	volatile int64_t x771 = INT64_MIN;
	int64_t x772 = -418322358091702170LL;
	uint64_t t173 = 53147491558394LLU;

    t173 = (x769|((x770<=x771)-x772));

    if (t173 != 418322358298664890LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint32_t x773 = UINT32_MAX;
	int16_t x774 = INT16_MIN;
	int64_t x776 = INT64_MAX;
	int64_t t174 = 2LL;

    t174 = (x773|((x774<=x775)-x776));

    if (t174 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x777 = UINT8_MAX;
	int16_t x778 = -1031;
	int32_t x780 = -10985;
	volatile int32_t t175 = 406836;

    t175 = (x777|((x778<=x779)-x780));

    if (t175 != 11007) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile uint16_t x781 = 501U;
	volatile int8_t x782 = INT8_MIN;
	int8_t x784 = -1;
	int32_t t176 = 16;

    t176 = (x781|((x782<=x783)-x784));

    if (t176 != 503) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x785 = INT32_MIN;
	static int32_t x786 = INT32_MIN;
	volatile int32_t x787 = INT32_MIN;
	int8_t x788 = INT8_MAX;
	volatile int32_t t177 = -29650;

    t177 = (x785|((x786<=x787)-x788));

    if (t177 != -126) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x790 = -1LL;
	int16_t x791 = -1;
	int64_t x792 = -3275LL;
	static int64_t t178 = -544008315610021LL;

    t178 = (x789|((x790<=x791)-x792));

    if (t178 != -9223372036854772532LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x793 = INT8_MIN;
	uint64_t x794 = 57849036717393LLU;
	int16_t x795 = INT16_MIN;
	static int16_t x796 = 1;

    t179 = (x793|((x794<=x795)-x796));

    if (t179 != -128) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x797 = INT32_MIN;
	int8_t x798 = -1;
	volatile int8_t x799 = -1;
	int32_t x800 = 40572;
	volatile int32_t t180 = 18;

    t180 = (x797|((x798<=x799)-x800));

    if (t180 != -40571) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x805 = -1;
	uint32_t x806 = UINT32_MAX;
	uint32_t x807 = UINT32_MAX;
	int8_t x808 = INT8_MIN;
	volatile int32_t t181 = 0;

    t181 = (x805|((x806<=x807)-x808));

    if (t181 != -1) { NG(); } else { ; }
	
}

void f182(void) {
    	static int64_t x809 = INT64_MIN;
	int16_t x810 = 8;
	int32_t x811 = -1;
	int8_t x812 = INT8_MIN;
	volatile int64_t t182 = -4048930LL;

    t182 = (x809|((x810<=x811)-x812));

    if (t182 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int8_t x813 = -1;
	uint16_t x814 = 745U;
	int64_t x815 = -4648310296257LL;
	static volatile int64_t x816 = INT64_MAX;
	volatile int64_t t183 = 94356260891760LL;

    t183 = (x813|((x814<=x815)-x816));

    if (t183 != -1LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x821 = INT8_MAX;
	int16_t x822 = INT16_MIN;
	int32_t x823 = -247;
	uint32_t x824 = UINT32_MAX;

    t184 = (x821|((x822<=x823)-x824));

    if (t184 != 127U) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x826 = -48806014636548LL;
	static volatile int32_t x827 = 0;
	uint8_t x828 = 98U;
	volatile int64_t t185 = -5593962588824LL;

    t185 = (x825|((x826<=x827)-x828));

    if (t185 != -97LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x829 = -1;
	static volatile int8_t x830 = INT8_MIN;
	int32_t x831 = INT32_MIN;
	uint8_t x832 = 14U;
	volatile int32_t t186 = -7191;

    t186 = (x829|((x830<=x831)-x832));

    if (t186 != -1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x833 = UINT64_MAX;
	volatile int16_t x834 = INT16_MIN;
	volatile int8_t x835 = INT8_MIN;
	volatile uint64_t x836 = 198686738LLU;
	volatile uint64_t t187 = UINT64_MAX;

    t187 = (x833|((x834<=x835)-x836));

    if (t187 != UINT64_MAX) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x837 = 111692645;
	uint8_t x838 = UINT8_MAX;
	uint32_t x839 = UINT32_MAX;
	int16_t x840 = INT16_MIN;
	int32_t t188 = -69836;

    t188 = (x837|((x838<=x839)-x840));

    if (t188 != 111725413) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x845 = UINT32_MAX;
	uint64_t x846 = UINT64_MAX;
	int8_t x847 = INT8_MAX;
	static uint8_t x848 = UINT8_MAX;
	volatile uint32_t t189 = UINT32_MAX;

    t189 = (x845|((x846<=x847)-x848));

    if (t189 != UINT32_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int16_t x850 = INT16_MIN;
	static volatile int64_t x852 = -1LL;
	volatile int64_t t190 = 500792217LL;

    t190 = (x849|((x850<=x851)-x852));

    if (t190 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x853 = UINT32_MAX;
	int8_t x855 = INT8_MAX;

    t191 = (x853|((x854<=x855)-x856));

    if (t191 != UINT32_MAX) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x857 = INT16_MIN;
	int16_t x859 = INT16_MAX;
	int16_t x860 = -1;
	static volatile int32_t t192 = 627068603;

    t192 = (x857|((x858<=x859)-x860));

    if (t192 != -32766) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x861 = INT16_MAX;
	int64_t x862 = INT64_MAX;
	uint8_t x863 = 0U;
	int8_t x864 = INT8_MAX;
	volatile int32_t t193 = -434;

    t193 = (x861|((x862<=x863)-x864));

    if (t193 != -1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x865 = 8762U;
	int64_t x866 = -3240046LL;
	volatile int8_t x868 = 13;
	uint32_t t194 = 178U;

    t194 = (x865|((x866<=x867)-x868));

    if (t194 != 4294967294U) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint64_t x870 = UINT64_MAX;

    t195 = (x869|((x870<=x871)-x872));

    if (t195 != -127) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x874 = UINT8_MAX;
	int8_t x875 = INT8_MIN;
	uint16_t x876 = 0U;
	int32_t t196 = INT32_MIN;

    t196 = (x873|((x874<=x875)-x876));

    if (t196 != INT32_MIN) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x877 = UINT32_MAX;
	uint32_t x878 = 15969444U;
	int16_t x879 = -61;
	uint64_t x880 = UINT64_MAX;
	uint64_t t197 = 3598463255LLU;

    t197 = (x877|((x878<=x879)-x880));

    if (t197 != 4294967295LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x881 = INT16_MIN;
	int16_t x883 = 3;
	static uint8_t x884 = 14U;
	volatile int32_t t198 = 17765;

    t198 = (x881|((x882<=x883)-x884));

    if (t198 != -13) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x885 = UINT32_MAX;
	volatile uint8_t x886 = 1U;
	static volatile int64_t x887 = INT64_MIN;
	uint64_t t199 = 578122689151LLU;

    t199 = (x885|((x886<=x887)-x888));

    if (t199 != 4294967295LLU) { NG(); } else { ; }
	
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

