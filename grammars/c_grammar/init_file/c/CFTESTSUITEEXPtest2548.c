
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

int64_t x7 = INT64_MIN;
static uint64_t x9 = UINT64_MAX;
uint32_t x16 = 1434945U;
int16_t x24 = -486;
int8_t x29 = 43;
int16_t x31 = INT16_MIN;
int32_t t8 = -13076885;
int32_t t9 = 91;
int32_t x43 = INT32_MIN;
uint8_t x48 = UINT8_MAX;
static volatile int16_t x63 = INT16_MIN;
int16_t x64 = -3;
int8_t x66 = -5;
int32_t x68 = INT32_MAX;
uint64_t x69 = 19LLU;
uint64_t t17 = 24301702280426LLU;
static volatile int16_t x81 = INT16_MIN;
int32_t x83 = INT32_MIN;
uint32_t x87 = 3904U;
static volatile uint8_t x89 = 2U;
uint8_t x97 = UINT8_MAX;
static int64_t x101 = INT64_MIN;
int64_t t25 = 63910745784643LL;
uint32_t x112 = UINT32_MAX;
static uint32_t x114 = UINT32_MAX;
int16_t x119 = INT16_MIN;
int64_t x124 = INT64_MIN;
uint32_t x132 = 4007166U;
static int16_t x136 = INT16_MAX;
static int16_t x141 = -27;
int8_t x142 = INT8_MAX;
int8_t x150 = INT8_MIN;
uint64_t t39 = 177LLU;
int8_t x163 = INT8_MIN;
int64_t x167 = INT64_MAX;
static int32_t t43 = -207;
uint16_t x181 = UINT16_MAX;
int16_t x182 = INT16_MAX;
volatile int32_t t47 = -1;
int32_t x206 = -519441341;
int16_t x208 = INT16_MIN;
int32_t x210 = INT32_MIN;
int16_t x215 = INT16_MIN;
static uint64_t x219 = UINT64_MAX;
volatile int64_t x221 = INT64_MAX;
static volatile int64_t t55 = 760896806751LL;
static int8_t x225 = -11;
static int32_t x226 = INT32_MAX;
volatile int8_t x230 = -1;
int16_t x236 = -7294;
int32_t x237 = -302653099;
uint32_t x242 = 12838U;
uint64_t x248 = 7320020422166456LLU;
int32_t t62 = 105222;
uint32_t x256 = 1U;
int64_t t63 = 1998352329762192130LL;
int8_t x262 = 0;
int64_t x268 = -3054322873LL;
uint64_t x282 = 28501364219511963LLU;
volatile uint64_t t70 = 55017469LLU;
uint64_t x287 = UINT64_MAX;
uint32_t x291 = 20660675U;
volatile uint8_t x294 = UINT8_MAX;
uint16_t x299 = UINT16_MAX;
static int32_t x306 = -1;
int64_t x324 = -15909548LL;
uint16_t x326 = UINT16_MAX;
uint32_t x331 = UINT32_MAX;
static volatile int32_t x333 = INT32_MIN;
int64_t x340 = INT64_MIN;
uint32_t x342 = UINT32_MAX;
uint8_t x346 = UINT8_MAX;
static int16_t x349 = INT16_MIN;
int64_t t89 = 3969423LL;
uint32_t x361 = 2858813U;
uint32_t x370 = UINT32_MAX;
static uint16_t x371 = UINT16_MAX;
int64_t x381 = -1LL;
uint64_t x387 = 1544150482050184751LLU;
volatile uint64_t t96 = 121802484303LLU;
static int32_t x391 = -1;
volatile uint32_t x398 = 21773196U;
volatile int32_t x400 = -14;
int8_t x404 = 3;
int32_t x405 = INT32_MIN;
int8_t x407 = INT8_MAX;
int16_t x408 = -1;
static uint32_t x412 = UINT32_MAX;
static int32_t x418 = INT32_MIN;
int32_t x423 = -1;
uint32_t t105 = UINT32_MAX;
volatile uint64_t t106 = 161845LLU;
static volatile int32_t t108 = 822155185;
int32_t t109 = -257183;
int16_t x441 = INT16_MIN;
int64_t x445 = -1LL;
uint64_t x446 = 2804948237965LLU;
int8_t x452 = INT8_MIN;
int64_t x454 = 4LL;
int8_t x462 = -41;
uint16_t x466 = UINT16_MAX;
int64_t x468 = INT64_MAX;
int64_t t116 = 3328767349LL;
static int16_t x470 = 45;
uint16_t x478 = UINT16_MAX;
int64_t x483 = INT64_MIN;
static int32_t x485 = INT32_MAX;
volatile int64_t t121 = -3512LL;
volatile int64_t t122 = -6974068LL;
uint16_t x493 = UINT16_MAX;
static volatile int8_t x496 = INT8_MIN;
static int16_t x498 = INT16_MIN;
int32_t x508 = INT32_MIN;
int16_t x512 = INT16_MIN;
static volatile uint64_t t127 = 4061899555LLU;
volatile int8_t x515 = INT8_MIN;
volatile uint32_t t128 = 7U;
static int8_t x521 = INT8_MIN;
volatile uint8_t x537 = 23U;
int16_t x538 = -1;
volatile uint32_t t134 = 82878U;
int64_t x545 = INT64_MIN;
int8_t x553 = -1;
uint16_t x556 = UINT16_MAX;
volatile int64_t t138 = 1281617LL;
uint8_t x557 = 122U;
uint32_t x578 = UINT32_MAX;
int16_t x596 = 7942;
int64_t x600 = -1LL;
static volatile int64_t x607 = -50839LL;
int8_t x621 = INT8_MAX;
static int16_t x636 = INT16_MIN;
volatile uint8_t x643 = UINT8_MAX;
volatile int32_t x644 = INT32_MIN;
int64_t x649 = INT64_MAX;
static uint64_t x650 = 398362499699763LLU;
uint64_t x652 = 1819641LLU;
int8_t x668 = -1;
int32_t x672 = -199;
static volatile int64_t t170 = 339218026575670981LL;
int32_t x689 = INT32_MIN;
volatile int16_t x693 = 4883;
int32_t x695 = INT32_MIN;
volatile int32_t t175 = 2;
uint8_t x705 = 6U;
static uint8_t x716 = UINT8_MAX;
int16_t x718 = INT16_MIN;
int64_t t179 = -519266959400571LL;
uint64_t x722 = 1625LLU;
int16_t x727 = -1;
volatile int32_t t181 = 0;
int64_t x736 = INT64_MIN;
volatile int64_t t183 = 883LL;
int32_t x745 = INT32_MAX;
static volatile uint16_t x746 = UINT16_MAX;
static volatile int64_t t186 = -46062LL;
int64_t x749 = -637074142LL;
int64_t x750 = 157960485280435LL;
int32_t x756 = INT32_MIN;
int64_t x768 = -106539004LL;
volatile uint16_t x770 = 13U;
int32_t t193 = -11663;
static uint8_t x785 = 1U;
int64_t x787 = 669LL;
int64_t x789 = -2954LL;
int32_t x794 = -52902;
int16_t x799 = -1968;


void f0(void) {
    	static int32_t x1 = -1;
	int64_t x2 = -1LL;
	static volatile int16_t x3 = 9;
	uint64_t x4 = 778171242LLU;
	static volatile uint64_t t0 = 5559282884725769LLU;

    t0 = (x1^((x2|x3)^x4));

    if (t0 != 778171242LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = 30631906LL;
	int32_t x6 = -1;
	static volatile int8_t x8 = INT8_MIN;
	int64_t t1 = 63111735266LL;

    t1 = (x5^((x6|x7)^x8));

    if (t1 != 30631837LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int8_t x10 = -1;
	int64_t x11 = INT64_MAX;
	int8_t x12 = INT8_MAX;
	volatile uint64_t t2 = 3168816345832LLU;

    t2 = (x9^((x10|x11)^x12));

    if (t2 != 127LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = INT64_MIN;
	int8_t x14 = -2;
	static int32_t x15 = -129631;
	volatile int64_t t3 = 11705LL;

    t3 = (x13^((x14|x15)^x16));

    if (t3 != -9223372032561243458LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static int16_t x17 = INT16_MAX;
	int8_t x18 = -1;
	volatile int64_t x19 = INT64_MIN;
	static int16_t x20 = INT16_MIN;
	int64_t t4 = -5LL;

    t4 = (x17^((x18|x19)^x20));

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = 18;
	uint64_t x22 = UINT64_MAX;
	int16_t x23 = 26;
	static uint64_t t5 = 15244641583LLU;

    t5 = (x21^((x22|x23)^x24));

    if (t5 != 503LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint32_t x25 = 134573995U;
	uint16_t x26 = UINT16_MAX;
	static uint32_t x27 = 6U;
	volatile int32_t x28 = 488;
	uint32_t t6 = 678832U;

    t6 = (x25^((x26|x27)^x28));

    if (t6 != 134582716U) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x30 = INT8_MAX;
	int32_t x32 = 13;
	volatile int32_t t7 = 0;

    t7 = (x29^((x30|x31)^x32));

    if (t7 != -32679) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = INT32_MIN;
	int32_t x34 = INT32_MIN;
	static int32_t x35 = 3407238;
	int8_t x36 = INT8_MIN;

    t8 = (x33^((x34|x35)^x36));

    if (t8 != -3407354) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = 1;
	static volatile int32_t x38 = 1;
	uint16_t x39 = UINT16_MAX;
	static int16_t x40 = INT16_MIN;

    t9 = (x37^((x38|x39)^x40));

    if (t9 != -32770) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x41 = 1U;
	int32_t x42 = -1;
	volatile int16_t x44 = INT16_MIN;
	volatile int32_t t10 = 733364515;

    t10 = (x41^((x42|x43)^x44));

    if (t10 != 32766) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x45 = 2U;
	int16_t x46 = INT16_MIN;
	static int8_t x47 = INT8_MIN;
	int32_t t11 = -13;

    t11 = (x45^((x46|x47)^x48));

    if (t11 != -131) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = -1225;
	volatile int16_t x50 = INT16_MAX;
	int32_t x51 = INT32_MAX;
	int16_t x52 = INT16_MIN;
	volatile int32_t t12 = 507;

    t12 = (x49^((x50|x51)^x52));

    if (t12 != 2147452104) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = -12;
	uint64_t x54 = 14LLU;
	static volatile uint64_t x55 = UINT64_MAX;
	uint16_t x56 = 3U;
	volatile uint64_t t13 = 537LLU;

    t13 = (x53^((x54|x55)^x56));

    if (t13 != 8LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x57 = 61857576LL;
	static int16_t x58 = INT16_MAX;
	int16_t x59 = -30;
	int8_t x60 = INT8_MIN;
	int64_t t14 = 460LL;

    t14 = (x57^((x58|x59)^x60));

    if (t14 != 61857623LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x61 = 1U;
	volatile int32_t x62 = INT32_MIN;
	int32_t t15 = -343631866;

    t15 = (x61^((x62|x63)^x64));

    if (t15 != 32764) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x65 = 3U;
	volatile int64_t x67 = INT64_MIN;
	volatile int64_t t16 = -23389015859415551LL;

    t16 = (x65^((x66|x67)^x68));

    if (t16 != -2147483641LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint64_t x70 = UINT64_MAX;
	volatile int16_t x71 = INT16_MIN;
	uint32_t x72 = 1810U;

    t17 = (x69^((x70|x71)^x72));

    if (t17 != 18446744073709549822LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x73 = 2;
	static uint32_t x74 = 1617806661U;
	uint8_t x75 = 56U;
	uint64_t x76 = UINT64_MAX;
	uint64_t t18 = 4127422666729831LLU;

    t18 = (x73^((x74|x75)^x76));

    if (t18 != 18446744072091744896LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x77 = UINT64_MAX;
	int16_t x78 = INT16_MIN;
	int16_t x79 = INT16_MIN;
	uint8_t x80 = 7U;
	static volatile uint64_t t19 = 128603252765LLU;

    t19 = (x77^((x78|x79)^x80));

    if (t19 != 32760LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x82 = -1LL;
	uint32_t x84 = 2994780U;
	int64_t t20 = -7945965385461LL;

    t20 = (x81^((x82|x83)^x84));

    if (t20 != 3001763LL) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x85 = INT64_MAX;
	int64_t x86 = INT64_MIN;
	int16_t x88 = 7;
	int64_t t21 = 111475006837502LL;

    t21 = (x85^((x86|x87)^x88));

    if (t21 != -3912LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x90 = -1LL;
	uint64_t x91 = UINT64_MAX;
	int64_t x92 = -1LL;
	volatile uint64_t t22 = 527225676929168LLU;

    t22 = (x89^((x90|x91)^x92));

    if (t22 != 2LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x93 = INT32_MIN;
	int8_t x94 = INT8_MIN;
	static uint32_t x95 = 14U;
	static volatile int32_t x96 = INT32_MIN;
	volatile uint32_t t23 = 8427354U;

    t23 = (x93^((x94|x95)^x96));

    if (t23 != 4294967182U) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint32_t x98 = 16348U;
	uint32_t x99 = UINT32_MAX;
	static int8_t x100 = INT8_MIN;
	uint32_t t24 = 499852U;

    t24 = (x97^((x98|x99)^x100));

    if (t24 != 128U) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint32_t x102 = 2072997U;
	int8_t x103 = -4;
	volatile int8_t x104 = INT8_MAX;

    t25 = (x101^((x102|x103)^x104));

    if (t25 != -9223372032559808638LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x105 = INT16_MIN;
	static uint32_t x106 = 5573160U;
	static int8_t x107 = 1;
	uint8_t x108 = 48U;
	uint32_t t26 = 1760U;

    t26 = (x105^((x106|x107)^x108));

    if (t26 != 4289366553U) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = INT16_MIN;
	int32_t x110 = INT32_MIN;
	volatile int8_t x111 = -1;
	uint32_t t27 = 1872181U;

    t27 = (x109^((x110|x111)^x112));

    if (t27 != 4294934528U) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = INT64_MAX;
	volatile int32_t x115 = -315392;
	static volatile int16_t x116 = INT16_MAX;
	int64_t t28 = 4017864LL;

    t28 = (x113^((x114|x115)^x116));

    if (t28 != 9223372032559841279LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = -511382;
	volatile int16_t x118 = INT16_MAX;
	int16_t x120 = -1;
	volatile int32_t t29 = -16474;

    t29 = (x117^((x118|x119)^x120));

    if (t29 != -511382) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = INT32_MIN;
	uint64_t x122 = 24898374334639LLU;
	int8_t x123 = -1;
	volatile uint64_t t30 = 19959135351806442LLU;

    t30 = (x121^((x122|x123)^x124));

    if (t30 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = INT16_MIN;
	int16_t x126 = -201;
	volatile uint32_t x127 = 308841782U;
	int16_t x128 = -1;
	volatile uint32_t t31 = 767651016U;

    t31 = (x125^((x126|x127)^x128));

    if (t31 != 4294934728U) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x129 = 1U;
	int8_t x130 = INT8_MIN;
	int16_t x131 = INT16_MAX;
	volatile uint32_t t32 = 186560U;

    t32 = (x129^((x130|x131)^x132));

    if (t32 != 4290960128U) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = INT64_MIN;
	static int8_t x134 = -1;
	static int32_t x135 = -1;
	volatile int64_t t33 = -3090379982LL;

    t33 = (x133^((x134|x135)^x136));

    if (t33 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x137 = -24;
	uint8_t x138 = 7U;
	static int16_t x139 = INT16_MIN;
	int32_t x140 = INT32_MAX;
	int32_t t34 = -427165265;

    t34 = (x137^((x138|x139)^x140));

    if (t34 != 2147450896) { NG(); } else { ; }
	
}

void f35(void) {
    	static int32_t x143 = 797018486;
	uint8_t x144 = 51U;
	volatile int32_t t35 = 411;

    t35 = (x141^((x142|x143)^x144));

    if (t35 != -797018455) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x145 = INT8_MAX;
	uint8_t x146 = 10U;
	int16_t x147 = INT16_MIN;
	uint8_t x148 = 15U;
	int32_t t36 = -1293;

    t36 = (x145^((x146|x147)^x148));

    if (t36 != -32646) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x149 = INT32_MAX;
	uint64_t x151 = UINT64_MAX;
	uint64_t x152 = UINT64_MAX;
	static uint64_t t37 = 16LLU;

    t37 = (x149^((x150|x151)^x152));

    if (t37 != 2147483647LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = 1;
	uint8_t x154 = UINT8_MAX;
	volatile int64_t x155 = -99550LL;
	static int16_t x156 = -1;
	volatile int64_t t38 = 3245000528LL;

    t38 = (x153^((x154|x155)^x156));

    if (t38 != 99329LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint32_t x157 = UINT32_MAX;
	uint64_t x158 = 3990LLU;
	volatile int64_t x159 = INT64_MIN;
	uint32_t x160 = UINT32_MAX;

    t39 = (x157^((x158|x159)^x160));

    if (t39 != 9223372036854779798LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x161 = -16204;
	uint8_t x162 = 1U;
	volatile int16_t x164 = -1;
	volatile int32_t t40 = 1;

    t40 = (x161^((x162|x163)^x164));

    if (t40 != -16182) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x165 = -1;
	volatile int16_t x166 = 2602;
	int16_t x168 = 440;
	volatile int64_t t41 = 1958407372297468222LL;

    t41 = (x165^((x166|x167)^x168));

    if (t41 != -9223372036854775368LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x169 = UINT64_MAX;
	volatile int16_t x170 = -4;
	int64_t x171 = INT64_MIN;
	uint16_t x172 = 22765U;
	volatile uint64_t t42 = 4189899LLU;

    t42 = (x169^((x170|x171)^x172));

    if (t42 != 22766LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x173 = INT16_MAX;
	uint8_t x174 = 38U;
	int16_t x175 = -5578;
	int32_t x176 = INT32_MAX;

    t43 = (x173^((x174|x175)^x176));

    if (t43 != -2147456458) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x177 = -1;
	uint8_t x178 = 5U;
	int16_t x179 = INT16_MAX;
	int64_t x180 = INT64_MIN;
	volatile int64_t t44 = -947823LL;

    t44 = (x177^((x178|x179)^x180));

    if (t44 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint32_t x183 = 1001U;
	static int8_t x184 = -7;
	volatile uint32_t t45 = 86306476U;

    t45 = (x181^((x182|x183)^x184));

    if (t45 != 4294934521U) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = -318;
	static int16_t x186 = -1;
	int8_t x187 = 13;
	uint8_t x188 = 2U;
	int32_t t46 = 58735422;

    t46 = (x185^((x186|x187)^x188));

    if (t46 != 319) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x189 = -1;
	int16_t x190 = -641;
	static int16_t x191 = INT16_MAX;
	volatile int8_t x192 = INT8_MIN;

    t47 = (x189^((x190|x191)^x192));

    if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
    	static int16_t x193 = INT16_MIN;
	static uint32_t x194 = UINT32_MAX;
	int32_t x195 = 71379;
	static int64_t x196 = INT64_MAX;
	int64_t t48 = -806310163343466LL;

    t48 = (x193^((x194|x195)^x196));

    if (t48 != -9223372032559841280LL) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint64_t x197 = 5659954LLU;
	static volatile int16_t x198 = INT16_MIN;
	uint32_t x199 = UINT32_MAX;
	static volatile int32_t x200 = -139292;
	uint64_t t49 = 537LLU;

    t49 = (x197^((x198|x199)^x200));

    if (t49 != 5537065LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x201 = 5U;
	volatile int32_t x202 = INT32_MIN;
	int32_t x203 = -1;
	static uint64_t x204 = 101226483459LLU;
	volatile uint64_t t50 = 4057978047841LLU;

    t50 = (x201^((x202|x203)^x204));

    if (t50 != 18446743972483068153LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = INT64_MAX;
	static volatile int32_t x207 = -1;
	volatile int64_t t51 = -119082606217037LL;

    t51 = (x205^((x206|x207)^x208));

    if (t51 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x209 = INT8_MIN;
	int16_t x211 = -1;
	uint8_t x212 = 22U;
	volatile int32_t t52 = 26774892;

    t52 = (x209^((x210|x211)^x212));

    if (t52 != 105) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x213 = INT16_MAX;
	int16_t x214 = INT16_MAX;
	uint64_t x216 = 458721045LLU;
	volatile uint64_t t53 = 1489776981130175158LLU;

    t53 = (x213^((x214|x215)^x216));

    if (t53 != 18446744073250801429LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x217 = INT8_MIN;
	volatile int64_t x218 = 1445864381093896976LL;
	uint64_t x220 = 18950389LLU;
	volatile uint64_t t54 = 254LLU;

    t54 = (x217^((x218|x219)^x220));

    if (t54 != 18950282LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x222 = -1;
	int32_t x223 = -1;
	static int8_t x224 = 2;

    t55 = (x221^((x222|x223)^x224));

    if (t55 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x227 = 2670;
	volatile uint8_t x228 = 3U;
	volatile int32_t t56 = -468258;

    t56 = (x225^((x226|x227)^x228));

    if (t56 != -2147483639) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = INT16_MIN;
	static int8_t x231 = 1;
	static int16_t x232 = 225;
	volatile int32_t t57 = 1816;

    t57 = (x229^((x230|x231)^x232));

    if (t57 != 32542) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x233 = INT16_MIN;
	int32_t x234 = 4;
	int32_t x235 = INT32_MIN;
	int32_t t58 = 2912;

    t58 = (x233^((x234|x235)^x236));

    if (t58 != -2147458170) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x238 = -1;
	uint8_t x239 = 1U;
	uint16_t x240 = UINT16_MAX;
	volatile int32_t t59 = 7;

    t59 = (x237^((x238|x239)^x240));

    if (t59 != 302702933) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x241 = -1LL;
	static int8_t x243 = INT8_MIN;
	int8_t x244 = -1;
	int64_t t60 = 7280LL;

    t60 = (x241^((x242|x243)^x244));

    if (t60 != -90LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint32_t x245 = 63U;
	uint8_t x246 = 52U;
	static volatile uint32_t x247 = 1505894U;
	volatile uint64_t t61 = 22LLU;

    t61 = (x245^((x246|x247)^x248));

    if (t61 != 7320020423409137LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint16_t x249 = 32013U;
	int8_t x250 = -1;
	int8_t x251 = INT8_MIN;
	static volatile int16_t x252 = -1;

    t62 = (x249^((x250|x251)^x252));

    if (t62 != 32013) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int64_t x253 = INT64_MIN;
	int32_t x254 = INT32_MIN;
	int16_t x255 = -1;

    t63 = (x253^((x254|x255)^x256));

    if (t63 != -9223372032559808514LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x257 = INT32_MAX;
	int8_t x258 = -16;
	int64_t x259 = -1LL;
	static uint32_t x260 = UINT32_MAX;
	volatile int64_t t64 = -1461LL;

    t64 = (x257^((x258|x259)^x260));

    if (t64 != -2147483649LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x261 = INT8_MAX;
	uint32_t x263 = 557077U;
	volatile uint64_t x264 = 0LLU;
	uint64_t t65 = 93058730424812LLU;

    t65 = (x261^((x262|x263)^x264));

    if (t65 != 557162LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x265 = 8019U;
	volatile uint64_t x266 = 904715465578668583LLU;
	uint16_t x267 = 1257U;
	uint64_t t66 = 224LLU;

    t66 = (x265^((x266|x267)^x268));

    if (t66 != 17542028606286119675LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x269 = 2;
	uint32_t x270 = 209139723U;
	static int8_t x271 = INT8_MIN;
	uint64_t x272 = UINT64_MAX;
	volatile uint64_t t67 = 1250758555760LLU;

    t67 = (x269^((x270|x271)^x272));

    if (t67 != 18446744069414584438LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile uint32_t x273 = UINT32_MAX;
	static int8_t x274 = INT8_MIN;
	int64_t x275 = -11589281685813LL;
	static int64_t x276 = -1LL;
	static int64_t t68 = -3544414LL;

    t68 = (x273^((x274|x275)^x276));

    if (t68 != 4294967243LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x277 = INT16_MIN;
	uint16_t x278 = UINT16_MAX;
	static int64_t x279 = INT64_MAX;
	static int8_t x280 = INT8_MIN;
	volatile int64_t t69 = 706LL;

    t69 = (x277^((x278|x279)^x280));

    if (t69 != 9223372036854743167LL) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x281 = INT16_MIN;
	volatile uint8_t x283 = 6U;
	int32_t x284 = INT32_MIN;

    t70 = (x281^((x282|x283)^x284));

    if (t70 != 28501362276074655LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile int32_t x285 = -131924212;
	uint16_t x286 = UINT16_MAX;
	int64_t x288 = 0LL;
	uint64_t t71 = 42857LLU;

    t71 = (x285^((x286|x287)^x288));

    if (t71 != 131924211LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint64_t x289 = 5790LLU;
	volatile int32_t x290 = -1;
	volatile int8_t x292 = INT8_MIN;
	uint64_t t72 = 200374519757357LLU;

    t72 = (x289^((x290|x291)^x292));

    if (t72 != 5857LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x293 = INT64_MIN;
	int32_t x295 = INT32_MIN;
	int64_t x296 = INT64_MIN;
	static int64_t t73 = -3716562843LL;

    t73 = (x293^((x294|x295)^x296));

    if (t73 != -2147483393LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x297 = 3615625202LL;
	uint16_t x298 = 23U;
	int16_t x300 = INT16_MIN;
	static int64_t t74 = -13920434LL;

    t74 = (x297^((x298|x299)^x300));

    if (t74 != -3615657971LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x301 = UINT64_MAX;
	uint32_t x302 = 211U;
	int8_t x303 = -5;
	uint16_t x304 = 193U;
	volatile uint64_t t75 = 4657934127130461167LLU;

    t75 = (x301^((x302|x303)^x304));

    if (t75 != 18446744069414584517LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x305 = INT32_MIN;
	uint32_t x307 = 1543866U;
	int16_t x308 = 1519;
	volatile uint32_t t76 = 3U;

    t76 = (x305^((x306|x307)^x308));

    if (t76 != 2147482128U) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x309 = INT64_MIN;
	int16_t x310 = -1;
	static int8_t x311 = INT8_MIN;
	int32_t x312 = INT32_MAX;
	int64_t t77 = 41942092482266LL;

    t77 = (x309^((x310|x311)^x312));

    if (t77 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x313 = INT32_MIN;
	int32_t x314 = INT32_MIN;
	static volatile uint64_t x315 = 12LLU;
	static int8_t x316 = -1;
	uint64_t t78 = 93LLU;

    t78 = (x313^((x314|x315)^x316));

    if (t78 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x317 = 211U;
	int64_t x318 = INT64_MIN;
	static volatile int32_t x319 = INT32_MIN;
	int64_t x320 = INT64_MIN;
	int64_t t79 = -1041409583LL;

    t79 = (x317^((x318|x319)^x320));

    if (t79 != 9223372034707292371LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x321 = -7;
	static uint32_t x322 = UINT32_MAX;
	uint32_t x323 = 21U;
	int64_t t80 = 11797804246LL;

    t80 = (x321^((x322|x323)^x324));

    if (t80 != 4279057746LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile uint8_t x325 = 1U;
	static uint32_t x327 = 76850130U;
	volatile int16_t x328 = INT16_MIN;
	volatile uint32_t t81 = 635U;

    t81 = (x325^((x326|x327)^x328));

    if (t81 != 4218126334U) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint16_t x329 = 30821U;
	int16_t x330 = -1;
	uint16_t x332 = 998U;
	volatile uint32_t t82 = 0U;

    t82 = (x329^((x330|x331)^x332));

    if (t82 != 4294935676U) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x334 = INT16_MAX;
	volatile int16_t x335 = INT16_MIN;
	static volatile int8_t x336 = INT8_MIN;
	volatile int32_t t83 = -793;

    t83 = (x333^((x334|x335)^x336));

    if (t83 != -2147483521) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x337 = INT16_MIN;
	volatile uint64_t x338 = UINT64_MAX;
	int32_t x339 = -1;
	volatile uint64_t t84 = 5931811917075934336LLU;

    t84 = (x337^((x338|x339)^x340));

    if (t84 != 9223372036854808575LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x341 = INT16_MAX;
	static int64_t x343 = -1LL;
	uint32_t x344 = UINT32_MAX;
	volatile int64_t t85 = 19LL;

    t85 = (x341^((x342|x343)^x344));

    if (t85 != -4294934529LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x345 = 223U;
	int8_t x347 = -3;
	volatile int8_t x348 = -1;
	uint32_t t86 = 6538358U;

    t86 = (x345^((x346|x347)^x348));

    if (t86 != 223U) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x350 = INT64_MIN;
	int64_t x351 = INT64_MAX;
	int16_t x352 = INT16_MIN;
	static volatile int64_t t87 = -4336949353013010233LL;

    t87 = (x349^((x350|x351)^x352));

    if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x353 = -5;
	uint8_t x354 = UINT8_MAX;
	int64_t x355 = 130069345798LL;
	static int16_t x356 = INT16_MIN;
	int64_t t88 = 721597389572798LL;

    t88 = (x353^((x354|x355)^x356));

    if (t88 != 130069350660LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x357 = -1;
	volatile int16_t x358 = INT16_MAX;
	uint16_t x359 = 7135U;
	volatile int64_t x360 = INT64_MIN;

    t89 = (x357^((x358|x359)^x360));

    if (t89 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint8_t x362 = 3U;
	volatile int8_t x363 = -34;
	volatile int32_t x364 = -1;
	uint32_t t90 = 90352U;

    t90 = (x361^((x362|x363)^x364));

    if (t90 != 2858781U) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x365 = 0;
	int64_t x366 = -1LL;
	int64_t x367 = 802621LL;
	uint32_t x368 = 15U;
	int64_t t91 = -91112728LL;

    t91 = (x365^((x366|x367)^x368));

    if (t91 != -16LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x369 = -1LL;
	static int64_t x372 = -1LL;
	int64_t t92 = 251921329158LL;

    t92 = (x369^((x370|x371)^x372));

    if (t92 != 4294967295LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x373 = 3251U;
	int8_t x374 = INT8_MAX;
	uint64_t x375 = 29493544986104LLU;
	volatile uint16_t x376 = UINT16_MAX;
	volatile uint64_t t93 = 2170917120641LLU;

    t93 = (x373^((x374|x375)^x376));

    if (t93 != 29493544965811LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x377 = UINT64_MAX;
	uint32_t x378 = 699194305U;
	static volatile uint64_t x379 = UINT64_MAX;
	int8_t x380 = -3;
	uint64_t t94 = 181LLU;

    t94 = (x377^((x378|x379)^x380));

    if (t94 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x382 = INT64_MIN;
	int64_t x383 = INT64_MIN;
	int16_t x384 = INT16_MIN;
	int64_t t95 = 7518527411871LL;

    t95 = (x381^((x382|x383)^x384));

    if (t95 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x385 = INT16_MIN;
	int32_t x386 = -1;
	int64_t x388 = INT64_MIN;

    t96 = (x385^((x386|x387)^x388));

    if (t96 != 9223372036854808575LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint8_t x389 = 1U;
	static int16_t x390 = -1;
	uint32_t x392 = UINT32_MAX;
	uint32_t t97 = 99628638U;

    t97 = (x389^((x390|x391)^x392));

    if (t97 != 1U) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x393 = INT32_MIN;
	uint16_t x394 = 10U;
	uint64_t x395 = UINT64_MAX;
	int64_t x396 = INT64_MIN;
	volatile uint64_t t98 = 6967LLU;

    t98 = (x393^((x394|x395)^x396));

    if (t98 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x397 = INT16_MIN;
	int8_t x399 = 17;
	uint32_t t99 = 109299U;

    t99 = (x397^((x398|x399)^x400));

    if (t99 != 21775471U) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x401 = -264691245589931097LL;
	int64_t x402 = 86351LL;
	static int32_t x403 = 1031170283;
	static volatile int64_t t100 = 373193767LL;

    t100 = (x401^((x402|x403)^x404));

    if (t100 != -264691245949672885LL) { NG(); } else { ; }
	
}

void f101(void) {
    	static int64_t x406 = INT64_MIN;
	static int64_t t101 = -228176107LL;

    t101 = (x405^((x406|x407)^x408));

    if (t101 != -9223372034707292288LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x409 = INT64_MIN;
	int8_t x410 = INT8_MIN;
	static int32_t x411 = -1;
	volatile int64_t t102 = INT64_MIN;

    t102 = (x409^((x410|x411)^x412));

    if (t102 != INT64_MIN) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x413 = INT64_MAX;
	uint64_t x414 = UINT64_MAX;
	int8_t x415 = INT8_MIN;
	int16_t x416 = INT16_MIN;
	static volatile uint64_t t103 = 15LLU;

    t103 = (x413^((x414|x415)^x416));

    if (t103 != 9223372036854743040LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x417 = 3674LL;
	static volatile int32_t x419 = INT32_MIN;
	static volatile int32_t x420 = 497;
	int64_t t104 = 7936824688LL;

    t104 = (x417^((x418|x419)^x420));

    if (t104 != -2147479637LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static int8_t x421 = -1;
	int16_t x422 = INT16_MAX;
	volatile uint32_t x424 = UINT32_MAX;

    t105 = (x421^((x422|x423)^x424));

    if (t105 != UINT32_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint16_t x425 = 551U;
	static uint64_t x426 = 384962433LLU;
	uint32_t x427 = 132722700U;
	int8_t x428 = INT8_MIN;

    t106 = (x425^((x426|x427)^x428));

    if (t106 != 18446744073307210282LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x429 = -14;
	int8_t x430 = INT8_MIN;
	int8_t x431 = -1;
	uint16_t x432 = 143U;
	static volatile int32_t t107 = -149293;

    t107 = (x429^((x430|x431)^x432));

    if (t107 != 130) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint16_t x433 = 906U;
	volatile int32_t x434 = INT32_MIN;
	int16_t x435 = -1;
	int16_t x436 = INT16_MIN;

    t108 = (x433^((x434|x435)^x436));

    if (t108 != 31861) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x437 = 0;
	int8_t x438 = INT8_MIN;
	volatile int16_t x439 = -101;
	static int8_t x440 = INT8_MIN;

    t109 = (x437^((x438|x439)^x440));

    if (t109 != 27) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x442 = -2;
	int16_t x443 = -1;
	volatile uint16_t x444 = UINT16_MAX;
	volatile int32_t t110 = -3060736;

    t110 = (x441^((x442|x443)^x444));

    if (t110 != 32768) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x447 = 3;
	int16_t x448 = -1;
	volatile uint64_t t111 = 16053755258664657LLU;

    t111 = (x445^((x446|x447)^x448));

    if (t111 != 2804948237967LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint64_t x449 = 4440758078616917688LLU;
	int8_t x450 = INT8_MAX;
	int64_t x451 = -452435239912427LL;
	uint64_t t112 = 1471836675898715611LLU;

    t112 = (x449^((x450|x451)^x452));

    if (t112 != 4440873094741628231LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint8_t x453 = 46U;
	int64_t x455 = -1LL;
	int32_t x456 = INT32_MAX;
	volatile int64_t t113 = 1093578960796431LL;

    t113 = (x453^((x454|x455)^x456));

    if (t113 != -2147483602LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x457 = INT16_MIN;
	int8_t x458 = INT8_MIN;
	static int64_t x459 = INT64_MAX;
	int16_t x460 = 1940;
	int64_t t114 = -1936997064638LL;

    t114 = (x457^((x458|x459)^x460));

    if (t114 != 30827LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x461 = 25;
	static uint64_t x463 = 47497369812739414LLU;
	uint32_t x464 = 6823U;
	static uint64_t t115 = 176690277446LLU;

    t115 = (x461^((x462|x463)^x464));

    if (t115 != 18446744073709544809LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x465 = INT64_MIN;
	uint32_t x467 = 3851U;

    t116 = (x465^((x466|x467)^x468));

    if (t116 != -65536LL) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint16_t x469 = UINT16_MAX;
	volatile int32_t x471 = INT32_MAX;
	int32_t x472 = INT32_MIN;
	volatile int32_t t117 = -44070;

    t117 = (x469^((x470|x471)^x472));

    if (t117 != -65536) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x473 = INT16_MIN;
	static uint64_t x474 = 11051LLU;
	uint8_t x475 = UINT8_MAX;
	int16_t x476 = -1;
	uint64_t t118 = 45LLU;

    t118 = (x473^((x474|x475)^x476));

    if (t118 != 21504LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x477 = INT32_MAX;
	uint16_t x479 = 30008U;
	volatile int32_t x480 = INT32_MIN;
	static int32_t t119 = -923014468;

    t119 = (x477^((x478|x479)^x480));

    if (t119 != -65536) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x481 = INT16_MIN;
	uint64_t x482 = 253504264062777340LLU;
	static volatile uint64_t x484 = UINT64_MAX;
	static uint64_t t120 = 1903294LLU;

    t120 = (x481^((x482|x483)^x484));

    if (t120 != 9476876300917557251LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x486 = INT64_MAX;
	int32_t x487 = -1;
	int32_t x488 = 71664666;

    t121 = (x485^((x486|x487)^x488));

    if (t121 != -2075818982LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x489 = INT64_MIN;
	static int32_t x490 = -1;
	int32_t x491 = -70519800;
	static int8_t x492 = INT8_MIN;

    t122 = (x489^((x490|x491)^x492));

    if (t122 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x494 = 1296316U;
	static int8_t x495 = INT8_MIN;
	uint32_t t123 = 127453U;

    t123 = (x493^((x494|x495)^x496));

    if (t123 != 65475U) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x497 = 553LLU;
	volatile int32_t x499 = -194;
	static uint16_t x500 = 0U;
	static uint64_t t124 = 221518029LLU;

    t124 = (x497^((x498|x499)^x500));

    if (t124 != 18446744073709550871LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x501 = INT64_MAX;
	int32_t x502 = -1;
	uint32_t x503 = 1609836550U;
	static uint32_t x504 = UINT32_MAX;
	volatile int64_t t125 = INT64_MAX;

    t125 = (x501^((x502|x503)^x504));

    if (t125 != INT64_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x505 = INT16_MAX;
	int64_t x506 = -18081471LL;
	uint8_t x507 = 91U;
	int64_t t126 = -3338687799LL;

    t126 = (x505^((x506|x507)^x508));

    if (t126 != 2129421988LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x509 = 61LLU;
	static int64_t x510 = INT64_MAX;
	int32_t x511 = -1;

    t127 = (x509^((x510|x511)^x512));

    if (t127 != 32706LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x513 = UINT32_MAX;
	uint16_t x514 = 14716U;
	int16_t x516 = -296;

    t128 = (x513^((x514|x515)^x516));

    if (t128 != 4294967003U) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x517 = -1LL;
	int64_t x518 = INT64_MAX;
	int8_t x519 = INT8_MIN;
	int16_t x520 = -1;
	int64_t t129 = 138412560626412354LL;

    t129 = (x517^((x518|x519)^x520));

    if (t129 != -1LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x522 = INT16_MAX;
	uint64_t x523 = 902839510LLU;
	int64_t x524 = 1077801LL;
	uint64_t t130 = 221388545895LLU;

    t130 = (x521^((x522|x523)^x524));

    if (t130 != 18446744072807772758LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x525 = -1;
	static int8_t x526 = INT8_MAX;
	static int32_t x527 = INT32_MAX;
	int32_t x528 = 11168;
	static int32_t t131 = 386;

    t131 = (x525^((x526|x527)^x528));

    if (t131 != -2147472480) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x529 = -1;
	uint64_t x530 = UINT64_MAX;
	uint32_t x531 = 50888136U;
	static uint16_t x532 = 25514U;
	uint64_t t132 = 1896292715897689LLU;

    t132 = (x529^((x530|x531)^x532));

    if (t132 != 25514LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x533 = INT64_MAX;
	uint64_t x534 = 47505406710LLU;
	static int64_t x535 = INT64_MIN;
	int32_t x536 = -1;
	volatile uint64_t t133 = 8166188323453566LLU;

    t133 = (x533^((x534|x535)^x536));

    if (t133 != 47505406710LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x539 = INT32_MIN;
	uint32_t x540 = UINT32_MAX;

    t134 = (x537^((x538|x539)^x540));

    if (t134 != 23U) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint16_t x541 = 28U;
	uint8_t x542 = 6U;
	uint16_t x543 = 12216U;
	int8_t x544 = -1;
	int32_t t135 = 1771367;

    t135 = (x541^((x542|x543)^x544));

    if (t135 != -12195) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x546 = -48;
	int8_t x547 = INT8_MAX;
	int8_t x548 = 29;
	int64_t t136 = 42524833875LL;

    t136 = (x545^((x546|x547)^x548));

    if (t136 != 9223372036854775778LL) { NG(); } else { ; }
	
}

void f137(void) {
    	static int64_t x549 = -1LL;
	volatile int32_t x550 = -958777238;
	static int64_t x551 = INT64_MIN;
	int64_t x552 = 15437478395253948LL;
	volatile int64_t t137 = 11007444981438343LL;

    t137 = (x549^((x550|x551)^x552));

    if (t137 != 15437479316280105LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x554 = 2;
	int64_t x555 = INT64_MIN;

    t138 = (x553^((x554|x555)^x556));

    if (t138 != 9223372036854710274LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint64_t x558 = UINT64_MAX;
	uint32_t x559 = UINT32_MAX;
	int32_t x560 = INT32_MIN;
	static volatile uint64_t t139 = 127356634294158360LLU;

    t139 = (x557^((x558|x559)^x560));

    if (t139 != 2147483525LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x561 = -1;
	int8_t x562 = 2;
	uint8_t x563 = UINT8_MAX;
	int8_t x564 = INT8_MAX;
	static volatile int32_t t140 = 3;

    t140 = (x561^((x562|x563)^x564));

    if (t140 != -129) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x565 = -1;
	int8_t x566 = -1;
	static uint16_t x567 = UINT16_MAX;
	int8_t x568 = -48;
	int32_t t141 = 2396460;

    t141 = (x565^((x566|x567)^x568));

    if (t141 != -48) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int8_t x569 = INT8_MIN;
	int16_t x570 = 5;
	static int32_t x571 = -27491382;
	volatile int64_t x572 = -1LL;
	volatile int64_t t142 = 2433938762LL;

    t142 = (x569^((x570|x571)^x572));

    if (t142 != -27491408LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile uint8_t x573 = 1U;
	int16_t x574 = 5;
	uint64_t x575 = 85943LLU;
	int32_t x576 = -1;
	static volatile uint64_t t143 = 481752944717LLU;

    t143 = (x573^((x574|x575)^x576));

    if (t143 != 18446744073709465673LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint16_t x577 = 473U;
	volatile int64_t x579 = -44680LL;
	int64_t x580 = -1LL;
	volatile int64_t t144 = 331LL;

    t144 = (x577^((x578|x579)^x580));

    if (t144 != 473LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int16_t x581 = -1;
	int64_t x582 = INT64_MAX;
	static volatile int64_t x583 = 129411584306LL;
	int8_t x584 = 58;
	static int64_t t145 = -34863847345358287LL;

    t145 = (x581^((x582|x583)^x584));

    if (t145 != -9223372036854775750LL) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x585 = INT64_MIN;
	static uint32_t x586 = 15974990U;
	int32_t x587 = -4765;
	int8_t x588 = INT8_MAX;
	static int64_t t146 = -197LL;

    t146 = (x585^((x586|x587)^x588));

    if (t146 != -9223372032559812848LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x589 = -6;
	int32_t x590 = -4;
	volatile int8_t x591 = -1;
	int16_t x592 = -1;
	volatile int32_t t147 = 7;

    t147 = (x589^((x590|x591)^x592));

    if (t147 != -6) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x593 = INT8_MAX;
	int64_t x594 = INT64_MIN;
	int32_t x595 = INT32_MAX;
	volatile int64_t t148 = -18024LL;

    t148 = (x593^((x594|x595)^x596));

    if (t148 != -9223372034707300218LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x597 = INT16_MIN;
	int64_t x598 = INT64_MIN;
	int8_t x599 = INT8_MIN;
	static volatile int64_t t149 = 310385639LL;

    t149 = (x597^((x598|x599)^x600));

    if (t149 != -32641LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x601 = -1;
	static volatile int16_t x602 = INT16_MIN;
	volatile int32_t x603 = -132974642;
	int8_t x604 = -1;
	volatile int32_t t150 = 1236963;

    t150 = (x601^((x602|x603)^x604));

    if (t150 != -2098) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint8_t x605 = UINT8_MAX;
	int16_t x606 = 6339;
	static volatile int32_t x608 = -34572;
	volatile int64_t t151 = -777484407006020346LL;

    t151 = (x605^((x606|x607)^x608));

    if (t151 != 16864LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x609 = INT64_MIN;
	int32_t x610 = INT32_MIN;
	int64_t x611 = 23886LL;
	int8_t x612 = INT8_MIN;
	volatile int64_t t152 = 4096346134053LL;

    t152 = (x609^((x610|x611)^x612));

    if (t152 != -9223372034707316018LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x613 = 2U;
	int16_t x614 = 9;
	uint64_t x615 = 24289814842LLU;
	int8_t x616 = INT8_MAX;
	volatile uint64_t t153 = 0LLU;

    t153 = (x613^((x614|x615)^x616));

    if (t153 != 24289814854LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint16_t x617 = UINT16_MAX;
	int8_t x618 = 17;
	static int16_t x619 = INT16_MAX;
	int16_t x620 = 184;
	int32_t t154 = 630;

    t154 = (x617^((x618|x619)^x620));

    if (t154 != 32952) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x622 = -3;
	int64_t x623 = INT64_MAX;
	volatile int64_t x624 = INT64_MAX;
	volatile int64_t t155 = 25880870360605472LL;

    t155 = (x621^((x622|x623)^x624));

    if (t155 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x625 = 4;
	static int16_t x626 = INT16_MAX;
	volatile uint16_t x627 = UINT16_MAX;
	static int32_t x628 = 1;
	int32_t t156 = -38475796;

    t156 = (x625^((x626|x627)^x628));

    if (t156 != 65530) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x629 = 91U;
	static int8_t x630 = -1;
	int16_t x631 = -1;
	volatile int16_t x632 = 7;
	int32_t t157 = 4025;

    t157 = (x629^((x630|x631)^x632));

    if (t157 != -93) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x633 = INT64_MAX;
	static volatile int16_t x634 = 914;
	int32_t x635 = 491133;
	int64_t t158 = 288214656622605435LL;

    t158 = (x633^((x634|x635)^x636));

    if (t158 != -9223372036854317056LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static int64_t x637 = INT64_MIN;
	uint8_t x638 = 1U;
	uint32_t x639 = 15144385U;
	uint16_t x640 = UINT16_MAX;
	int64_t t159 = 25274104887542986LL;

    t159 = (x637^((x638|x639)^x640));

    if (t159 != -9223372036839577026LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x641 = INT32_MAX;
	uint8_t x642 = UINT8_MAX;
	volatile int32_t t160 = 329659558;

    t160 = (x641^((x642|x643)^x644));

    if (t160 != -256) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x645 = INT32_MIN;
	volatile int16_t x646 = INT16_MAX;
	uint32_t x647 = UINT32_MAX;
	volatile int64_t x648 = -1LL;
	volatile int64_t t161 = -5367LL;

    t161 = (x645^((x646|x647)^x648));

    if (t161 != 2147483648LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x651 = -1;
	uint64_t t162 = 3557486358LLU;

    t162 = (x649^((x650|x651)^x652));

    if (t162 != 9223372036856595449LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x653 = INT32_MIN;
	uint32_t x654 = UINT32_MAX;
	int64_t x655 = -1473792208610565074LL;
	volatile int32_t x656 = INT32_MIN;
	volatile int64_t t163 = 1174428099629LL;

    t163 = (x653^((x654|x655)^x656));

    if (t163 != -1473792206279016449LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x657 = -1;
	int8_t x658 = INT8_MAX;
	int32_t x659 = -1;
	uint16_t x660 = 18U;
	static volatile int32_t t164 = 2014;

    t164 = (x657^((x658|x659)^x660));

    if (t164 != 18) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x661 = 99583LL;
	volatile int64_t x662 = INT64_MIN;
	int16_t x663 = INT16_MIN;
	static int8_t x664 = -3;
	int64_t t165 = 4754214LL;

    t165 = (x661^((x662|x663)^x664));

    if (t165 != 129794LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x665 = 1;
	uint8_t x666 = 4U;
	int64_t x667 = -372751LL;
	volatile int64_t t166 = 1LL;

    t166 = (x665^((x666|x667)^x668));

    if (t166 != 372747LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x669 = -1;
	static uint8_t x670 = UINT8_MAX;
	uint32_t x671 = 6655U;
	uint32_t t167 = 420977U;

    t167 = (x669^((x670|x671)^x672));

    if (t167 != 6457U) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x673 = 1;
	static int16_t x674 = 0;
	int8_t x675 = INT8_MIN;
	uint16_t x676 = UINT16_MAX;
	static volatile int32_t t168 = 25064380;

    t168 = (x673^((x674|x675)^x676));

    if (t168 != -65410) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x677 = INT64_MAX;
	static int32_t x678 = -749967;
	int16_t x679 = -1;
	static int16_t x680 = -1;
	volatile int64_t t169 = INT64_MAX;

    t169 = (x677^((x678|x679)^x680));

    if (t169 != INT64_MAX) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int64_t x681 = INT64_MIN;
	int16_t x682 = -1;
	int32_t x683 = 1270640;
	uint32_t x684 = 4U;

    t170 = (x681^((x682|x683)^x684));

    if (t170 != -9223372032559808517LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x685 = INT8_MIN;
	int32_t x686 = -315979;
	static int8_t x687 = INT8_MIN;
	volatile uint16_t x688 = UINT16_MAX;
	static int32_t t171 = 1;

    t171 = (x685^((x686|x687)^x688));

    if (t171 != 65482) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int32_t x690 = INT32_MAX;
	int64_t x691 = 233176111LL;
	int32_t x692 = INT32_MIN;
	volatile int64_t t172 = -393142168LL;

    t172 = (x689^((x690|x691)^x692));

    if (t172 != 2147483647LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x694 = INT8_MIN;
	int64_t x696 = INT64_MIN;
	int64_t t173 = 1811051426LL;

    t173 = (x693^((x694|x695)^x696));

    if (t173 != 9223372036854770835LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x697 = -1;
	uint16_t x698 = 16241U;
	int8_t x699 = -1;
	uint32_t x700 = 1861234770U;
	uint32_t t174 = 6814U;

    t174 = (x697^((x698|x699)^x700));

    if (t174 != 1861234770U) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x701 = INT8_MIN;
	int32_t x702 = INT32_MIN;
	uint8_t x703 = 3U;
	volatile int16_t x704 = 6;

    t175 = (x701^((x702|x703)^x704));

    if (t175 != 2147483525) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x706 = INT64_MAX;
	int16_t x707 = INT16_MAX;
	int16_t x708 = -1;
	int64_t t176 = -41105802394040LL;

    t176 = (x705^((x706|x707)^x708));

    if (t176 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x709 = INT64_MAX;
	int8_t x710 = -1;
	uint8_t x711 = 12U;
	uint32_t x712 = 254114U;
	static int64_t t177 = 5950LL;

    t177 = (x709^((x710|x711)^x712));

    if (t177 != 9223372032560062626LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint64_t x713 = 1052126603LLU;
	int32_t x714 = -1;
	uint32_t x715 = 492339U;
	uint64_t t178 = 263767943065LLU;

    t178 = (x713^((x714|x715)^x716));

    if (t178 != 3242840715LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int8_t x717 = INT8_MAX;
	int8_t x719 = -1;
	static int64_t x720 = -1LL;

    t179 = (x717^((x718|x719)^x720));

    if (t179 != 127LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x721 = 15U;
	int64_t x723 = INT64_MIN;
	static int32_t x724 = INT32_MAX;
	volatile uint64_t t180 = 4935334LLU;

    t180 = (x721^((x722|x723)^x724));

    if (t180 != 9223372039002257833LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint16_t x725 = 235U;
	static int8_t x726 = -2;
	int32_t x728 = -28298;

    t181 = (x725^((x726|x727)^x728));

    if (t181 != 28258) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x729 = INT64_MIN;
	uint64_t x730 = 99525341174496LLU;
	int16_t x731 = INT16_MIN;
	volatile int64_t x732 = -782687244LL;
	volatile uint64_t t182 = 3422LLU;

    t182 = (x729^((x730|x731)^x732));

    if (t182 != 9223372037637470484LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x733 = 469391697U;
	int8_t x734 = -1;
	int32_t x735 = INT32_MAX;

    t183 = (x733^((x734|x735)^x736));

    if (t183 != 9223372036385384110LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x737 = UINT32_MAX;
	static uint8_t x738 = 7U;
	int64_t x739 = INT64_MIN;
	int8_t x740 = INT8_MAX;
	int64_t t184 = -81LL;

    t184 = (x737^((x738|x739)^x740));

    if (t184 != -9223372032559808633LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x741 = INT16_MIN;
	uint16_t x742 = 46U;
	uint32_t x743 = 594987793U;
	int32_t x744 = INT32_MIN;
	static volatile uint32_t t185 = 73707U;

    t185 = (x741^((x742|x743)^x744));

    if (t185 != 1552501567U) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int64_t x747 = 5385233634215LL;
	int8_t x748 = -7;

    t186 = (x745^((x746|x747)^x748));

    if (t186 != -5384396800007LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x751 = INT16_MAX;
	uint64_t x752 = 51758LLU;
	uint64_t t187 = 277625038LLU;

    t187 = (x749^((x750|x751)^x752));

    if (t187 != 18446586112607170803LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x753 = 99854252;
	volatile int64_t x754 = INT64_MIN;
	int64_t x755 = INT64_MIN;
	volatile int64_t t188 = -203415228LL;

    t188 = (x753^((x754|x755)^x756));

    if (t188 != 9223372034807146412LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x757 = 2;
	static int32_t x758 = INT32_MIN;
	int64_t x759 = INT64_MIN;
	int64_t x760 = INT64_MIN;
	static int64_t t189 = 166LL;

    t189 = (x757^((x758|x759)^x760));

    if (t189 != 9223372034707292162LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x761 = -1;
	int32_t x762 = INT32_MIN;
	volatile uint32_t x763 = 30111U;
	int8_t x764 = -1;
	static uint32_t t190 = 481U;

    t190 = (x761^((x762|x763)^x764));

    if (t190 != 2147513759U) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint16_t x765 = UINT16_MAX;
	int16_t x766 = -66;
	int16_t x767 = INT16_MIN;
	int64_t t191 = 1LL;

    t191 = (x765^((x766|x767)^x768));

    if (t191 != 106518597LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x769 = INT16_MIN;
	uint64_t x771 = 11109950356LLU;
	int64_t x772 = -4369565348854LL;
	static uint64_t t192 = 529LLU;

    t192 = (x769^((x770|x771)^x772));

    if (t192 != 4379932880791LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x773 = INT16_MIN;
	int8_t x774 = -1;
	int8_t x775 = 30;
	int32_t x776 = INT32_MIN;

    t193 = (x773^((x774|x775)^x776));

    if (t193 != -2147450881) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x777 = INT64_MIN;
	int16_t x778 = INT16_MIN;
	int32_t x779 = 6250;
	volatile int16_t x780 = -1;
	int64_t t194 = 1LL;

    t194 = (x777^((x778|x779)^x780));

    if (t194 != -9223372036854749291LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x781 = 18U;
	int32_t x782 = 20077;
	int64_t x783 = -1LL;
	int64_t x784 = 1216322038LL;
	volatile int64_t t195 = -32031720LL;

    t195 = (x781^((x782|x783)^x784));

    if (t195 != -1216322021LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x786 = 7;
	uint16_t x788 = 13320U;
	static int64_t t196 = -51692291010963054LL;

    t196 = (x785^((x786|x787)^x788));

    if (t196 != 13974LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x790 = -1LL;
	int16_t x791 = -2473;
	volatile int16_t x792 = INT16_MAX;
	volatile int64_t t197 = -5648117697698464LL;

    t197 = (x789^((x790|x791)^x792));

    if (t197 != 29814LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static int8_t x793 = -24;
	volatile uint32_t x795 = 475030U;
	static uint32_t x796 = UINT32_MAX;
	volatile uint32_t t198 = 3169U;

    t198 = (x793^((x794|x795)^x796));

    if (t198 != 4294918089U) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x797 = 7419U;
	uint8_t x798 = UINT8_MAX;
	volatile int32_t x800 = -1;
	volatile int32_t t199 = -425;

    t199 = (x797^((x798|x799)^x800));

    if (t199 != 7163) { NG(); } else { ; }
	
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

