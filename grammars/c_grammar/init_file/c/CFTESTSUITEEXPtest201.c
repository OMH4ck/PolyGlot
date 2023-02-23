
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

static volatile int8_t x25 = INT8_MAX;
int16_t x28 = INT16_MAX;
uint8_t x31 = UINT8_MAX;
static int64_t x38 = INT64_MIN;
uint8_t x41 = 80U;
int64_t x47 = -1LL;
int8_t x48 = INT8_MIN;
uint64_t t8 = 112395605201583026LLU;
uint16_t x51 = 200U;
int16_t x52 = INT16_MIN;
volatile int64_t t9 = -128933819594083601LL;
uint64_t x62 = 347683377LLU;
volatile int16_t x65 = INT16_MAX;
volatile uint8_t x66 = 96U;
static volatile int32_t t13 = 66389936;
int16_t x69 = 79;
uint32_t t14 = 1U;
volatile uint64_t t15 = 1094066634783578LLU;
static int32_t x100 = INT32_MIN;
static volatile int64_t t19 = -70992924LL;
uint64_t t21 = 731LLU;
static int16_t x117 = INT16_MAX;
static volatile int32_t t24 = 45234361;
int32_t t25 = 90802;
int8_t x134 = INT8_MIN;
int64_t t27 = -1324110400939777LL;
static uint8_t x143 = UINT8_MAX;
int64_t x151 = -32577089LL;
static volatile int32_t x153 = INT32_MIN;
uint64_t x157 = 137193801LLU;
int16_t x163 = INT16_MAX;
int16_t x164 = -1;
static int32_t t32 = 0;
volatile uint64_t x166 = 11898375315879874LLU;
int64_t x168 = INT64_MAX;
int16_t x179 = -13287;
uint64_t t36 = 102324178168125673LLU;
static int16_t x188 = 216;
volatile uint64_t t38 = 15799575LLU;
uint32_t x192 = 4U;
int64_t x204 = -1LL;
int32_t x206 = -9832;
volatile uint64_t x208 = 95LLU;
int16_t x209 = INT16_MIN;
uint64_t x213 = UINT64_MAX;
static int8_t x225 = INT8_MAX;
volatile int16_t x227 = 0;
volatile uint16_t x231 = 0U;
int16_t x234 = INT16_MAX;
uint16_t x245 = 23U;
volatile int64_t t50 = 196LL;
uint16_t x250 = UINT16_MAX;
uint16_t x258 = UINT16_MAX;
volatile uint8_t x263 = 117U;
uint32_t x271 = 98967617U;
uint64_t x272 = UINT64_MAX;
volatile uint64_t t56 = 3434143229LLU;
int32_t x273 = -337383203;
uint8_t x275 = 17U;
volatile uint32_t t57 = 396U;
uint32_t x278 = 7244730U;
volatile int32_t t59 = -1534;
static int16_t x296 = -1;
static volatile int32_t t61 = -10;
volatile int32_t t62 = -287;
static volatile int64_t x305 = -1LL;
uint64_t x311 = 17662189297776LLU;
volatile int16_t x312 = INT16_MIN;
static uint32_t x316 = 35900111U;
volatile uint64_t t66 = 1144481LLU;
int16_t x324 = INT16_MAX;
uint64_t x326 = UINT64_MAX;
static volatile uint8_t x331 = 103U;
int32_t t70 = -94;
uint32_t x342 = 31972151U;
uint8_t x343 = 5U;
int8_t x351 = INT8_MIN;
int64_t x352 = -1LL;
static uint64_t x361 = UINT64_MAX;
int16_t x363 = 1;
static volatile int8_t x365 = -3;
int32_t x370 = INT32_MIN;
volatile int32_t x371 = INT32_MIN;
static int64_t x372 = -1LL;
static int64_t x375 = INT64_MAX;
volatile uint64_t x383 = UINT64_MAX;
static uint64_t t78 = 87267313992557901LLU;
volatile int16_t x389 = -1;
static uint32_t t80 = 7U;
volatile uint16_t x396 = 0U;
static uint32_t x397 = 251422186U;
static volatile int16_t x400 = INT16_MIN;
static volatile int64_t t82 = -150LL;
uint64_t t83 = 32LLU;
static uint16_t x410 = 13U;
int64_t x413 = INT64_MIN;
volatile int64_t t85 = -85874735LL;
int32_t x418 = -1;
uint32_t x420 = 312757339U;
volatile int8_t x427 = -1;
uint8_t x430 = UINT8_MAX;
volatile int16_t x439 = INT16_MAX;
int64_t t91 = -2783LL;
int16_t x449 = 1124;
int64_t x453 = INT64_MIN;
uint64_t x454 = 4817719LLU;
int8_t x463 = INT8_MAX;
int32_t t96 = -2199046;
int64_t t99 = -689501370173922333LL;
int64_t t102 = 17805197187407309LL;
static int8_t x504 = 3;
static volatile int32_t x506 = 80230;
static uint64_t x509 = 19LLU;
int16_t x511 = -14048;
int16_t x518 = INT16_MIN;
uint64_t t107 = 29075309993752LLU;
static int16_t x522 = INT16_MIN;
int16_t x524 = INT16_MAX;
static volatile uint64_t t108 = 7614806756LLU;
static int64_t x531 = -1LL;
static volatile uint32_t x534 = 4996U;
uint16_t x538 = UINT16_MAX;
static volatile int64_t x539 = INT64_MAX;
volatile int32_t t112 = -2032884;
int32_t x551 = INT32_MAX;
int32_t x552 = 683;
int64_t x553 = INT64_MIN;
int8_t x554 = INT8_MIN;
int32_t t117 = 20624;
volatile uint8_t x574 = 124U;
int32_t x578 = INT32_MAX;
int16_t x580 = -125;
uint32_t t119 = 3752U;
uint32_t x585 = 41432U;
volatile int64_t x587 = 123450513172798361LL;
uint32_t x590 = 4U;
int32_t x602 = INT32_MIN;
static uint32_t x604 = 2U;
int16_t x605 = INT16_MIN;
static volatile int8_t x606 = INT8_MAX;
uint32_t x607 = 380881U;
static uint8_t x608 = 53U;
int64_t t127 = 25912380LL;
volatile int64_t x629 = INT64_MIN;
int16_t x640 = -15;
uint8_t x654 = UINT8_MAX;
uint64_t t134 = 2LLU;
int16_t x681 = -1;
uint64_t t140 = 13024091322843619LLU;
volatile int64_t x689 = INT64_MAX;
int16_t x703 = INT16_MAX;
volatile uint64_t x709 = 30023915LLU;
int16_t x710 = INT16_MAX;
int64_t x722 = -30003341425LL;
uint64_t t150 = 225201472796LLU;
volatile int16_t x725 = INT16_MAX;
uint16_t x726 = UINT16_MAX;
int8_t x728 = INT8_MIN;
static volatile uint64_t t152 = 2464LLU;
int64_t x739 = INT64_MIN;
int16_t x740 = INT16_MIN;
int8_t x741 = -1;
uint64_t x744 = UINT64_MAX;
uint64_t t155 = 272613300190LLU;
int8_t x747 = 33;
int64_t t156 = -1LL;
uint16_t x749 = 2862U;
volatile uint64_t x750 = 154071943LLU;
volatile uint32_t x755 = 4U;
uint16_t x765 = 1879U;
int32_t t160 = -1292;
int8_t x772 = INT8_MIN;
volatile uint64_t t161 = 25498187317LLU;
static uint8_t x774 = 29U;
int16_t x775 = INT16_MIN;
int32_t x777 = INT32_MIN;
volatile int64_t x780 = -161084LL;
volatile int8_t x783 = -5;
uint64_t t164 = 32022195436LLU;
int64_t x785 = -1LL;
static int8_t x786 = INT8_MIN;
int16_t x788 = -1;
int64_t x797 = INT64_MIN;
int8_t x808 = INT8_MIN;
static int32_t x813 = INT32_MIN;
uint16_t x825 = 157U;
static volatile uint32_t t173 = 132592597U;
static uint8_t x835 = UINT8_MAX;
static int16_t x836 = 240;
uint64_t t178 = 341034460870LLU;
int8_t x854 = -14;
int16_t x859 = INT16_MIN;
int32_t t181 = -214209;
int8_t x867 = INT8_MIN;
volatile int64_t t183 = -99465802769673LL;
int64_t x873 = INT64_MAX;
uint16_t x874 = 13406U;
static uint8_t x878 = UINT8_MAX;
int16_t x887 = INT16_MIN;
int32_t x889 = -3756;
int64_t x895 = -2355LL;
volatile int64_t t189 = -398060730317LL;
int8_t x901 = INT8_MIN;
volatile uint16_t x903 = UINT16_MAX;
int64_t t192 = -310706133919845002LL;
static uint32_t x910 = 743U;
int8_t x911 = 39;
int8_t x925 = INT8_MAX;
uint16_t x930 = 644U;
static int8_t x932 = INT8_MIN;
static uint8_t x934 = 11U;
int16_t x943 = 12665;
uint32_t t199 = 1U;


void f0(void) {
    	static uint16_t x5 = 260U;
	int16_t x6 = INT16_MIN;
	int16_t x7 = -3677;
	uint16_t x8 = UINT16_MAX;
	static volatile int32_t t0 = 3;

    t0 = (x5%((x6-x7)+x8));

    if (t0 != 260) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x9 = INT16_MAX;
	int64_t x10 = -3090461LL;
	int32_t x11 = INT32_MAX;
	int8_t x12 = INT8_MAX;
	int64_t t1 = -117651LL;

    t1 = (x9%((x10-x11)+x12));

    if (t1 != 32767LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x17 = INT16_MAX;
	static int8_t x18 = 6;
	int32_t x19 = 48167769;
	int16_t x20 = INT16_MAX;
	static volatile int32_t t2 = 83843;

    t2 = (x17%((x18-x19)+x20));

    if (t2 != 32767) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint64_t x26 = 35962488082396671LLU;
	static int8_t x27 = INT8_MIN;
	uint64_t t3 = 3614714703152351507LLU;

    t3 = (x25%((x26-x27)+x28));

    if (t3 != 127LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x29 = -1442111099143LL;
	static int16_t x30 = -4706;
	int64_t x32 = -93240829856202696LL;
	int64_t t4 = 0LL;

    t4 = (x29%((x30-x31)+x32));

    if (t4 != -1442111099143LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x33 = INT16_MIN;
	volatile int16_t x34 = -1;
	volatile int8_t x35 = INT8_MAX;
	uint32_t x36 = UINT32_MAX;
	static volatile uint32_t t5 = 356361546U;

    t5 = (x33%((x34-x35)+x36));

    if (t5 != 4294934528U) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x37 = 3333971707LLU;
	int16_t x39 = -1;
	volatile int16_t x40 = 7;
	volatile uint64_t t6 = 51435222LLU;

    t6 = (x37%((x38-x39)+x40));

    if (t6 != 3333971707LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x42 = 4U;
	static int32_t x43 = -32;
	static int32_t x44 = -343;
	uint32_t t7 = 6U;

    t7 = (x41%((x42-x43)+x44));

    if (t7 != 80U) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint64_t x45 = 5177812LLU;
	int16_t x46 = -31;

    t8 = (x45%((x46-x47)+x48));

    if (t8 != 5177812LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint32_t x49 = 1831640U;
	static int64_t x50 = 271319014129669LL;

    t9 = (x49%((x50-x51)+x52));

    if (t9 != 1831640LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x53 = INT32_MAX;
	uint64_t x54 = UINT64_MAX;
	int16_t x55 = INT16_MAX;
	int8_t x56 = INT8_MAX;
	uint64_t t10 = 201115503414LLU;

    t10 = (x53%((x54-x55)+x56));

    if (t10 != 2147483647LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x57 = INT64_MAX;
	int64_t x58 = 136804002214133065LL;
	static volatile uint8_t x59 = 2U;
	uint64_t x60 = 2758974019LLU;
	volatile uint64_t t11 = 42373777LLU;

    t11 = (x57%((x58-x59)+x60));

    if (t11 != 57503703656601313LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x61 = 1668;
	int8_t x63 = INT8_MIN;
	int8_t x64 = -1;
	volatile uint64_t t12 = 88408851860632LLU;

    t12 = (x61%((x62-x63)+x64));

    if (t12 != 1668LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x67 = 31U;
	int32_t x68 = -1;

    t13 = (x65%((x66-x67)+x68));

    if (t13 != 63) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x70 = -1;
	uint32_t x71 = UINT32_MAX;
	static int32_t x72 = INT32_MAX;

    t14 = (x69%((x70-x71)+x72));

    if (t14 != 79U) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x73 = -1;
	int16_t x74 = -1660;
	uint64_t x75 = UINT64_MAX;
	uint64_t x76 = 29LLU;

    t15 = (x73%((x74-x75)+x76));

    if (t15 != 1629LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x85 = INT8_MIN;
	int64_t x86 = -106481358504LL;
	int32_t x87 = -1;
	volatile int16_t x88 = INT16_MIN;
	static int64_t t16 = -55556988LL;

    t16 = (x85%((x86-x87)+x88));

    if (t16 != -128LL) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int16_t x89 = 11;
	uint8_t x90 = 6U;
	volatile int64_t x91 = INT64_MAX;
	uint16_t x92 = 316U;
	int64_t t17 = -1LL;

    t17 = (x89%((x90-x91)+x92));

    if (t17 != 11LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x93 = INT64_MIN;
	uint32_t x94 = UINT32_MAX;
	uint64_t x95 = 3214564616605147118LLU;
	int32_t x96 = 25;
	uint64_t t18 = 38LLU;

    t18 = (x93%((x94-x95)+x96));

    if (t18 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x97 = -1;
	static int64_t x98 = -118994LL;
	uint32_t x99 = 601U;

    t19 = (x97%((x98-x99)+x100));

    if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint8_t x101 = 3U;
	int8_t x102 = INT8_MIN;
	int32_t x103 = 91;
	uint32_t x104 = UINT32_MAX;
	uint32_t t20 = 2U;

    t20 = (x101%((x102-x103)+x104));

    if (t20 != 3U) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint64_t x105 = UINT64_MAX;
	static int16_t x106 = -5896;
	uint64_t x107 = 962955429655LLU;
	static volatile int16_t x108 = 0;

    t21 = (x105%((x106-x107)+x108));

    if (t21 != 962955435550LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x109 = -1;
	uint8_t x110 = 4U;
	int16_t x111 = 103;
	int8_t x112 = 8;
	int32_t t22 = 1;

    t22 = (x109%((x110-x111)+x112));

    if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x118 = INT32_MAX;
	static volatile int64_t x119 = 99LL;
	uint16_t x120 = 5503U;
	volatile int64_t t23 = 154LL;

    t23 = (x117%((x118-x119)+x120));

    if (t23 != 32767LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x121 = 203U;
	uint8_t x122 = UINT8_MAX;
	uint16_t x123 = 1U;
	int16_t x124 = INT16_MIN;

    t24 = (x121%((x122-x123)+x124));

    if (t24 != 203) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x129 = INT32_MIN;
	static volatile uint8_t x130 = UINT8_MAX;
	int8_t x131 = 61;
	int8_t x132 = INT8_MIN;

    t25 = (x129%((x130-x131)+x132));

    if (t25 != -2) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int32_t x133 = INT32_MIN;
	int64_t x135 = 33244558515818LL;
	uint8_t x136 = 1U;
	volatile int64_t t26 = 3735734631790596LL;

    t26 = (x133%((x134-x135)+x136));

    if (t26 != -2147483648LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x137 = -1;
	int16_t x138 = -54;
	volatile int64_t x139 = 426923LL;
	volatile int8_t x140 = INT8_MIN;

    t27 = (x137%((x138-x139)+x140));

    if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int64_t x141 = -2373994360441LL;
	static int16_t x142 = -1;
	static volatile uint8_t x144 = 12U;
	volatile int64_t t28 = -21099084868LL;

    t28 = (x141%((x142-x143)+x144));

    if (t28 != -189LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x149 = -3895768;
	int64_t x150 = INT64_MIN;
	uint64_t x152 = 63LLU;
	uint64_t t29 = 51681666459961884LLU;

    t29 = (x149%((x150-x151)+x152));

    if (t29 != 9223372036818302888LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x154 = INT32_MAX;
	uint32_t x155 = UINT32_MAX;
	uint64_t x156 = UINT64_MAX;
	volatile uint64_t t30 = 2701LLU;

    t30 = (x153%((x154-x155)+x156));

    if (t30 != 3LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x158 = UINT16_MAX;
	volatile int16_t x159 = INT16_MIN;
	static uint16_t x160 = UINT16_MAX;
	uint64_t t31 = 229273649LLU;

    t31 = (x157%((x158-x159)+x160));

    if (t31 != 61395LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile int32_t x161 = INT32_MAX;
	static int16_t x162 = -10;

    t32 = (x161%((x162-x163)+x164));

    if (t32 != 199) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x165 = 2LLU;
	int16_t x167 = 6;
	uint64_t t33 = 11739733218041LLU;

    t33 = (x165%((x166-x167)+x168));

    if (t33 != 2LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x169 = INT64_MIN;
	volatile int32_t x170 = -93541;
	uint16_t x171 = 186U;
	int64_t x172 = INT64_MAX;
	int64_t t34 = 1978927323LL;

    t34 = (x169%((x170-x171)+x172));

    if (t34 != -93728LL) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x173 = -8;
	int64_t x174 = INT64_MAX;
	int64_t x175 = 1284031098844781LL;
	volatile uint64_t x176 = 8691LLU;
	uint64_t t35 = 80500535125948LLU;

    t35 = (x173%((x174-x175)+x176));

    if (t35 != 2568062197672174LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x177 = INT32_MIN;
	static uint64_t x178 = UINT64_MAX;
	static int8_t x180 = -1;

    t36 = (x177%((x178-x179)+x180));

    if (t36 != 12058LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x181 = 7016;
	volatile uint8_t x182 = 0U;
	static volatile int64_t x183 = INT64_MAX;
	uint64_t x184 = 1049546418789745LLU;
	volatile uint64_t t37 = 1956LLU;

    t37 = (x181%((x182-x183)+x184));

    if (t37 != 7016LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x185 = INT32_MAX;
	uint8_t x186 = 1U;
	uint64_t x187 = 1004416838031352350LLU;

    t38 = (x185%((x186-x187)+x188));

    if (t38 != 2147483647LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x189 = -1;
	uint16_t x190 = 2362U;
	static uint64_t x191 = 440786855LLU;
	volatile uint64_t t39 = 167046122684LLU;

    t39 = (x189%((x190-x191)+x192));

    if (t39 != 440784488LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x197 = UINT32_MAX;
	volatile int64_t x198 = -1LL;
	int8_t x199 = INT8_MIN;
	uint16_t x200 = 6U;
	volatile int64_t t40 = 1870123972331LL;

    t40 = (x197%((x198-x199)+x200));

    if (t40 != 24LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x201 = 14701;
	int16_t x202 = -4;
	int32_t x203 = INT32_MIN;
	int64_t t41 = 64133206699453602LL;

    t41 = (x201%((x202-x203)+x204));

    if (t41 != 14701LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x205 = 6U;
	volatile uint8_t x207 = 61U;
	uint64_t t42 = 27LLU;

    t42 = (x205%((x206-x207)+x208));

    if (t42 != 6LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint8_t x210 = 28U;
	int16_t x211 = INT16_MIN;
	int8_t x212 = INT8_MIN;
	int32_t t43 = 3;

    t43 = (x209%((x210-x211)+x212));

    if (t43 != -100) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint8_t x214 = 15U;
	int32_t x215 = 33;
	int8_t x216 = INT8_MAX;
	static volatile uint64_t t44 = 255702482443843360LLU;

    t44 = (x213%((x214-x215)+x216));

    if (t44 != 65LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x226 = UINT64_MAX;
	int8_t x228 = INT8_MAX;
	volatile uint64_t t45 = 2075876768571740LLU;

    t45 = (x225%((x226-x227)+x228));

    if (t45 != 1LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x229 = UINT16_MAX;
	volatile int16_t x230 = -1;
	volatile uint8_t x232 = 51U;
	static volatile int32_t t46 = 171092483;

    t46 = (x229%((x230-x231)+x232));

    if (t46 != 35) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int64_t x233 = 447546600415317050LL;
	int64_t x235 = 2644LL;
	volatile int8_t x236 = INT8_MAX;
	volatile int64_t t47 = -215117930018275330LL;

    t47 = (x233%((x234-x235)+x236));

    if (t47 != 9800LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x237 = 13802U;
	uint64_t x238 = 22370977580966702LLU;
	uint16_t x239 = UINT16_MAX;
	int32_t x240 = -1;
	volatile uint64_t t48 = 1323189594079367778LLU;

    t48 = (x237%((x238-x239)+x240));

    if (t48 != 13802LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x241 = UINT16_MAX;
	int64_t x242 = INT64_MIN;
	int64_t x243 = -4101736LL;
	static int64_t x244 = 167LL;
	static volatile int64_t t49 = -1LL;

    t49 = (x241%((x242-x243)+x244));

    if (t49 != 65535LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x246 = 15;
	volatile uint8_t x247 = 13U;
	int64_t x248 = -1LL;

    t50 = (x245%((x246-x247)+x248));

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x249 = INT8_MAX;
	int16_t x251 = -3231;
	static volatile uint8_t x252 = 57U;
	int32_t t51 = 373;

    t51 = (x249%((x250-x251)+x252));

    if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x253 = UINT64_MAX;
	static volatile int64_t x254 = INT64_MAX;
	int16_t x255 = 102;
	static int8_t x256 = INT8_MIN;
	uint64_t t52 = 29900LLU;

    t52 = (x253%((x254-x255)+x256));

    if (t52 != 461LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x257 = UINT64_MAX;
	int16_t x259 = -1;
	int8_t x260 = 1;
	volatile uint64_t t53 = 3393926715LLU;

    t53 = (x257%((x258-x259)+x260));

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x261 = 3619481U;
	int32_t x262 = 8475;
	int32_t x264 = -22302;
	volatile uint32_t t54 = 93U;

    t54 = (x261%((x262-x263)+x264));

    if (t54 != 3619481U) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x265 = -3475412;
	static uint64_t x266 = 537289516387484LLU;
	int8_t x267 = -1;
	int16_t x268 = -1329;
	uint64_t t55 = 2248718539934475363LLU;

    t55 = (x265%((x266-x267)+x268));

    if (t55 != 520397136568412LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x269 = 0;
	uint32_t x270 = 45551U;

    t56 = (x269%((x270-x271)+x272));

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x274 = UINT32_MAX;
	static int16_t x276 = 4063;

    t57 = (x273%((x274-x275)+x276));

    if (t57 != 588U) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x277 = INT64_MIN;
	volatile int64_t x279 = -1LL;
	volatile int64_t x280 = -546346381440LL;
	int64_t t58 = 0LL;

    t58 = (x277%((x278-x279)+x280));

    if (t58 != -428810845384LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint16_t x285 = 15716U;
	int16_t x286 = INT16_MAX;
	int16_t x287 = INT16_MIN;
	int16_t x288 = -1;

    t59 = (x285%((x286-x287)+x288));

    if (t59 != 15716) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint16_t x289 = 2762U;
	int8_t x290 = INT8_MAX;
	int64_t x291 = 730814760860508091LL;
	int64_t x292 = 27LL;
	volatile int64_t t60 = 1723822LL;

    t60 = (x289%((x290-x291)+x292));

    if (t60 != 2762LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x293 = -14;
	uint16_t x294 = 27U;
	int16_t x295 = -5;

    t61 = (x293%((x294-x295)+x296));

    if (t61 != -14) { NG(); } else { ; }
	
}

void f62(void) {
    	static int8_t x297 = INT8_MAX;
	volatile int32_t x298 = INT32_MAX;
	uint16_t x299 = UINT16_MAX;
	uint8_t x300 = 46U;

    t62 = (x297%((x298-x299)+x300));

    if (t62 != 127) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x306 = UINT16_MAX;
	uint16_t x307 = UINT16_MAX;
	volatile int16_t x308 = 1576;
	volatile int64_t t63 = 91783579946872019LL;

    t63 = (x305%((x306-x307)+x308));

    if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint16_t x309 = UINT16_MAX;
	int8_t x310 = -1;
	uint64_t t64 = 46175666LLU;

    t64 = (x309%((x310-x311)+x312));

    if (t64 != 65535LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x313 = 1987;
	static int32_t x314 = INT32_MIN;
	volatile uint32_t x315 = 1U;
	uint32_t t65 = 17822657U;

    t65 = (x313%((x314-x315)+x316));

    if (t65 != 1987U) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x317 = 2434640708611LLU;
	volatile int32_t x318 = -1;
	uint16_t x319 = 4U;
	static int32_t x320 = -1;

    t66 = (x317%((x318-x319)+x320));

    if (t66 != 2434640708611LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int32_t x321 = INT32_MIN;
	static volatile int32_t x322 = -1;
	static int16_t x323 = INT16_MAX;
	int32_t t67 = 949276;

    t67 = (x321%((x322-x323)+x324));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x325 = UINT16_MAX;
	int8_t x327 = INT8_MIN;
	static uint32_t x328 = UINT32_MAX;
	uint64_t t68 = 12367533840820LLU;

    t68 = (x325%((x326-x327)+x328));

    if (t68 != 65535LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x329 = 74;
	uint64_t x330 = 15318464LLU;
	static volatile int32_t x332 = INT32_MIN;
	static volatile uint64_t t69 = 228LLU;

    t69 = (x329%((x330-x331)+x332));

    if (t69 != 74LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x333 = 15U;
	volatile int16_t x334 = INT16_MAX;
	int16_t x335 = INT16_MIN;
	volatile int8_t x336 = INT8_MIN;

    t70 = (x333%((x334-x335)+x336));

    if (t70 != 15) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x337 = INT64_MIN;
	int32_t x338 = 11309691;
	int32_t x339 = -1;
	volatile uint32_t x340 = UINT32_MAX;
	volatile int64_t t71 = -52086608LL;

    t71 = (x337%((x338-x339)+x340));

    if (t71 != -1128569LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x341 = 2518419185LLU;
	int32_t x344 = -1;
	static uint64_t t72 = 121LLU;

    t72 = (x341%((x342-x343)+x344));

    if (t72 != 24591875LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x349 = INT8_MAX;
	volatile int32_t x350 = INT32_MIN;
	volatile int64_t t73 = 3LL;

    t73 = (x349%((x350-x351)+x352));

    if (t73 != 127LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x362 = -1LL;
	uint32_t x364 = UINT32_MAX;
	uint64_t t74 = 16277LLU;

    t74 = (x361%((x362-x363)+x364));

    if (t74 != 8LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x366 = INT16_MAX;
	static uint16_t x367 = 31U;
	static int16_t x368 = INT16_MIN;
	static volatile int32_t t75 = -444363620;

    t75 = (x365%((x366-x367)+x368));

    if (t75 != -3) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x369 = -1;
	int64_t t76 = 8495038620LL;

    t76 = (x369%((x370-x371)+x372));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x373 = INT16_MAX;
	static int32_t x374 = -1;
	uint16_t x376 = 203U;
	volatile int64_t t77 = 21839821955LL;

    t77 = (x373%((x374-x375)+x376));

    if (t77 != 32767LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x381 = INT64_MIN;
	int8_t x382 = -1;
	volatile uint64_t x384 = 5793297LLU;

    t78 = (x381%((x382-x383)+x384));

    if (t78 != 4729880LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x385 = -510;
	uint8_t x386 = 0U;
	int8_t x387 = INT8_MIN;
	static volatile uint8_t x388 = 18U;
	volatile int32_t t79 = -3;

    t79 = (x385%((x386-x387)+x388));

    if (t79 != -72) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x390 = 3U;
	uint16_t x391 = UINT16_MAX;
	uint32_t x392 = 15200927U;

    t80 = (x389%((x390-x391)+x392));

    if (t80 != 11650510U) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x393 = 1557085874U;
	volatile int16_t x394 = -1;
	int8_t x395 = INT8_MIN;
	volatile uint32_t t81 = 3173711U;

    t81 = (x393%((x394-x395)+x396));

    if (t81 != 88U) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x398 = INT64_MAX;
	uint16_t x399 = 7U;

    t82 = (x397%((x398-x399)+x400));

    if (t82 != 251422186LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x405 = 0;
	uint64_t x406 = 1541368766846995LLU;
	int64_t x407 = INT64_MIN;
	static int8_t x408 = INT8_MAX;

    t83 = (x405%((x406-x407)+x408));

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x409 = 344U;
	uint64_t x411 = 9563482894LLU;
	uint8_t x412 = 29U;
	uint64_t t84 = 1841869653777818LLU;

    t84 = (x409%((x410-x411)+x412));

    if (t84 != 344LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x414 = -1;
	static int16_t x415 = INT16_MIN;
	int64_t x416 = 61LL;

    t85 = (x413%((x414-x415)+x416));

    if (t85 != -9176LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x417 = 1U;
	int8_t x419 = INT8_MIN;
	volatile uint32_t t86 = 29417U;

    t86 = (x417%((x418-x419)+x420));

    if (t86 != 1U) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x425 = 28080;
	uint16_t x426 = 510U;
	uint8_t x428 = 51U;
	volatile int32_t t87 = 216607;

    t87 = (x425%((x426-x427)+x428));

    if (t87 != 542) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x429 = -872315413;
	uint64_t x431 = 884516LLU;
	uint64_t x432 = UINT64_MAX;
	volatile uint64_t t88 = 401583425382202425LLU;

    t88 = (x429%((x430-x431)+x432));

    if (t88 != 18446744072837236203LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x433 = INT16_MIN;
	uint8_t x434 = UINT8_MAX;
	volatile int16_t x435 = -1;
	int32_t x436 = INT32_MIN;
	volatile int32_t t89 = 239322;

    t89 = (x433%((x434-x435)+x436));

    if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x437 = -1;
	volatile uint64_t x438 = UINT64_MAX;
	static int16_t x440 = INT16_MIN;
	volatile uint64_t t90 = 65242873LLU;

    t90 = (x437%((x438-x439)+x440));

    if (t90 != 65535LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x441 = 12U;
	int16_t x442 = -113;
	uint32_t x443 = UINT32_MAX;
	static int64_t x444 = 1140279997341732385LL;

    t91 = (x441%((x442-x443)+x444));

    if (t91 != 12LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x445 = 285342U;
	volatile int64_t x446 = -1LL;
	int16_t x447 = INT16_MIN;
	int8_t x448 = 7;
	static volatile int64_t t92 = -723LL;

    t92 = (x445%((x446-x447)+x448));

    if (t92 != 23150LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x450 = -1LL;
	int64_t x451 = INT64_MIN;
	int64_t x452 = -7187519LL;
	volatile int64_t t93 = 169213106811248LL;

    t93 = (x449%((x450-x451)+x452));

    if (t93 != 1124LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x455 = UINT8_MAX;
	int16_t x456 = -5350;
	uint64_t t94 = 0LLU;

    t94 = (x453%((x454-x455)+x456));

    if (t94 != 4011290LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint32_t x457 = 1035285U;
	int16_t x458 = INT16_MIN;
	static int8_t x459 = INT8_MAX;
	int32_t x460 = 513;
	uint32_t t95 = 3U;

    t95 = (x457%((x458-x459)+x460));

    if (t95 != 1035285U) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile uint16_t x461 = 48U;
	volatile int32_t x462 = -759985;
	volatile int16_t x464 = -3093;

    t96 = (x461%((x462-x463)+x464));

    if (t96 != 48) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x465 = UINT16_MAX;
	uint16_t x466 = UINT16_MAX;
	int8_t x467 = -1;
	int32_t x468 = -101842898;
	int32_t t97 = -92925073;

    t97 = (x465%((x466-x467)+x468));

    if (t97 != 65535) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x469 = INT32_MAX;
	uint16_t x470 = 19638U;
	static volatile uint64_t x471 = 7302318244LLU;
	int16_t x472 = INT16_MAX;
	volatile uint64_t t98 = 6132LLU;

    t98 = (x469%((x470-x471)+x472));

    if (t98 != 2147483647LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x473 = UINT16_MAX;
	int64_t x474 = INT64_MAX;
	uint16_t x475 = 67U;
	static int64_t x476 = -1LL;

    t99 = (x473%((x474-x475)+x476));

    if (t99 != 65535LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x477 = 1;
	int64_t x478 = 484816LL;
	int32_t x479 = -6;
	uint32_t x480 = 53U;
	static volatile int64_t t100 = -11351009045LL;

    t100 = (x477%((x478-x479)+x480));

    if (t100 != 1LL) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile uint32_t x481 = 489U;
	int16_t x482 = 79;
	int16_t x483 = 73;
	uint16_t x484 = 41U;
	volatile uint32_t t101 = 83370970U;

    t101 = (x481%((x482-x483)+x484));

    if (t101 != 19U) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x485 = INT32_MIN;
	static uint32_t x486 = 166225834U;
	int64_t x487 = INT64_MAX;
	uint16_t x488 = UINT16_MAX;

    t102 = (x485%((x486-x487)+x488));

    if (t102 != -2147483648LL) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint32_t x501 = 18506466U;
	int8_t x502 = INT8_MAX;
	volatile int16_t x503 = INT16_MAX;
	static uint32_t t103 = 84389U;

    t103 = (x501%((x502-x503)+x504));

    if (t103 != 18506466U) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x505 = 3083005U;
	int16_t x507 = INT16_MIN;
	uint32_t x508 = UINT32_MAX;
	volatile uint32_t t104 = 493063U;

    t104 = (x505%((x506-x507)+x508));

    if (t104 != 32086U) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int64_t x510 = INT64_MIN;
	volatile int32_t x512 = -338;
	uint64_t t105 = 1403241270877591LLU;

    t105 = (x509%((x510-x511)+x512));

    if (t105 != 19LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x513 = INT16_MAX;
	int16_t x514 = INT16_MIN;
	volatile int32_t x515 = INT32_MIN;
	int8_t x516 = INT8_MIN;
	static int32_t t106 = -7;

    t106 = (x513%((x514-x515)+x516));

    if (t106 != 32767) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x517 = 2762508164402LLU;
	int8_t x519 = -1;
	int8_t x520 = INT8_MIN;

    t107 = (x517%((x518-x519)+x520));

    if (t107 != 2762508164402LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x521 = 7450162830813475350LLU;
	int16_t x523 = INT16_MAX;

    t108 = (x521%((x522-x523)+x524));

    if (t108 != 7450162830813475350LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x529 = 1026854U;
	uint8_t x530 = 102U;
	uint32_t x532 = 1180480U;
	static volatile int64_t t109 = 11051558LL;

    t109 = (x529%((x530-x531)+x532));

    if (t109 != 1026854LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x533 = 10991;
	int64_t x535 = -1LL;
	int64_t x536 = -1LL;
	int64_t t110 = 728LL;

    t110 = (x533%((x534-x535)+x536));

    if (t110 != 999LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x537 = 13U;
	uint32_t x540 = 533140U;
	volatile int64_t t111 = -1232LL;

    t111 = (x537%((x538-x539)+x540));

    if (t111 != 13LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x541 = UINT16_MAX;
	uint8_t x542 = 1U;
	volatile uint16_t x543 = UINT16_MAX;
	uint8_t x544 = 12U;

    t112 = (x541%((x542-x543)+x544));

    if (t112 != 13) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x545 = INT8_MIN;
	int8_t x546 = 1;
	int64_t x547 = 551853635656695009LL;
	int32_t x548 = INT32_MAX;
	volatile int64_t t113 = 1799333963734433LL;

    t113 = (x545%((x546-x547)+x548));

    if (t113 != -128LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x549 = -1LL;
	int8_t x550 = 0;
	int64_t t114 = -359LL;

    t114 = (x549%((x550-x551)+x552));

    if (t114 != -1LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x555 = INT8_MIN;
	int8_t x556 = INT8_MAX;
	volatile int64_t t115 = 334267035323282841LL;

    t115 = (x553%((x554-x555)+x556));

    if (t115 != -1LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x565 = INT8_MIN;
	int8_t x566 = -1;
	int16_t x567 = INT16_MAX;
	int32_t x568 = INT32_MAX;
	volatile int32_t t116 = 63854752;

    t116 = (x565%((x566-x567)+x568));

    if (t116 != -128) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint16_t x569 = UINT16_MAX;
	uint8_t x570 = 0U;
	static uint16_t x571 = UINT16_MAX;
	int16_t x572 = INT16_MAX;

    t117 = (x569%((x570-x571)+x572));

    if (t117 != 32767) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x573 = -1;
	uint32_t x575 = 9U;
	volatile int32_t x576 = INT32_MAX;
	volatile uint32_t t118 = 12669U;

    t118 = (x573%((x574-x575)+x576));

    if (t118 != 2147483533U) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x577 = -8;
	uint32_t x579 = UINT32_MAX;

    t119 = (x577%((x578-x579)+x580));

    if (t119 != 242U) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x586 = 23;
	int16_t x588 = -1;
	volatile int64_t t120 = 8533917549LL;

    t120 = (x585%((x586-x587)+x588));

    if (t120 != 41432LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x589 = INT32_MAX;
	volatile uint8_t x591 = 8U;
	uint32_t x592 = 71U;
	static uint32_t t121 = 62559718U;

    t121 = (x589%((x590-x591)+x592));

    if (t121 != 49U) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x593 = -3008979171827188506LL;
	int16_t x594 = -870;
	static uint64_t x595 = 48376949016LLU;
	static uint64_t x596 = UINT64_MAX;
	uint64_t t122 = 40751765440378LLU;

    t122 = (x593%((x594-x595)+x596));

    if (t122 != 15437764901882363110LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x597 = INT8_MIN;
	int32_t x598 = -36765514;
	volatile uint32_t x599 = 1163U;
	int64_t x600 = -1LL;
	int64_t t123 = 4021960LL;

    t123 = (x597%((x598-x599)+x600));

    if (t123 != -128LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x601 = UINT32_MAX;
	int32_t x603 = INT32_MIN;
	uint32_t t124 = 6962U;

    t124 = (x601%((x602-x603)+x604));

    if (t124 != 1U) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint32_t t125 = 39840765U;

    t125 = (x605%((x606-x607)+x608));

    if (t125 != 347933U) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x613 = 103U;
	int8_t x614 = -1;
	static uint64_t x615 = UINT64_MAX;
	static uint32_t x616 = 4U;
	volatile uint64_t t126 = 334196225935LLU;

    t126 = (x613%((x614-x615)+x616));

    if (t126 != 3LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x617 = INT16_MAX;
	int32_t x618 = INT32_MIN;
	static int16_t x619 = INT16_MIN;
	int64_t x620 = -182738624832995LL;

    t127 = (x617%((x618-x619)+x620));

    if (t127 != 32767LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x621 = -5;
	int64_t x622 = 52703684196544LL;
	volatile uint8_t x623 = UINT8_MAX;
	static int16_t x624 = INT16_MIN;
	static int64_t t128 = 264788595023248488LL;

    t128 = (x621%((x622-x623)+x624));

    if (t128 != -5LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x630 = 0U;
	int8_t x631 = INT8_MIN;
	int8_t x632 = INT8_MAX;
	volatile int64_t t129 = 3201773169573LL;

    t129 = (x629%((x630-x631)+x632));

    if (t129 != -128LL) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x633 = INT16_MIN;
	int64_t x634 = -50LL;
	static uint64_t x635 = 494618283LLU;
	static int8_t x636 = INT8_MIN;
	uint64_t t130 = 11267LLU;

    t130 = (x633%((x634-x635)+x636));

    if (t130 != 494585693LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x637 = -1;
	static int16_t x638 = -1;
	static int16_t x639 = INT16_MAX;
	volatile int32_t t131 = -1792;

    t131 = (x637%((x638-x639)+x640));

    if (t131 != -1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int32_t x645 = -1;
	uint64_t x646 = UINT64_MAX;
	static int16_t x647 = -1;
	static int64_t x648 = INT64_MAX;
	volatile uint64_t t132 = 262LLU;

    t132 = (x645%((x646-x647)+x648));

    if (t132 != 1LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x649 = 7245U;
	static int8_t x650 = -36;
	int64_t x651 = -253486137327143LL;
	int16_t x652 = 157;
	int64_t t133 = -373304LL;

    t133 = (x649%((x650-x651)+x652));

    if (t133 != 7245LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x653 = INT32_MAX;
	uint64_t x655 = 5976040999668046LLU;
	static uint8_t x656 = UINT8_MAX;

    t134 = (x653%((x654-x655)+x656));

    if (t134 != 2147483647LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x657 = INT32_MIN;
	uint32_t x658 = 46261012U;
	uint32_t x659 = UINT32_MAX;
	uint8_t x660 = 15U;
	uint32_t t135 = 5913193U;

    t135 = (x657%((x658-x659)+x660));

    if (t135 != 19476360U) { NG(); } else { ; }
	
}

void f136(void) {
    	static int8_t x661 = -2;
	volatile int8_t x662 = INT8_MAX;
	volatile int64_t x663 = -10069664312159LL;
	int8_t x664 = INT8_MIN;
	volatile int64_t t136 = 10882762587513873LL;

    t136 = (x661%((x662-x663)+x664));

    if (t136 != -2LL) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint8_t x665 = UINT8_MAX;
	uint16_t x666 = UINT16_MAX;
	uint64_t x667 = 97603583206853LLU;
	int32_t x668 = -489;
	uint64_t t137 = 1833689645536LLU;

    t137 = (x665%((x666-x667)+x668));

    if (t137 != 255LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x669 = INT16_MAX;
	volatile int8_t x670 = -1;
	volatile uint8_t x671 = 6U;
	int8_t x672 = 3;
	volatile int32_t t138 = 77758;

    t138 = (x669%((x670-x671)+x672));

    if (t138 != 3) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x673 = INT64_MIN;
	volatile int64_t x674 = -1566626770125562LL;
	uint16_t x675 = 0U;
	uint8_t x676 = 15U;
	int64_t t139 = 1LL;

    t139 = (x673%((x674-x675)+x676));

    if (t139 != -640241125680619LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x682 = INT8_MIN;
	int16_t x683 = -1;
	uint64_t x684 = 4967281288706818866LLU;

    t140 = (x681%((x682-x683)+x684));

    if (t140 != 3544900207589095398LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x685 = 24;
	volatile int16_t x686 = 0;
	volatile int16_t x687 = INT16_MIN;
	uint32_t x688 = 2889U;
	volatile uint32_t t141 = 494U;

    t141 = (x685%((x686-x687)+x688));

    if (t141 != 24U) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint8_t x690 = UINT8_MAX;
	static uint16_t x691 = 86U;
	volatile int32_t x692 = INT32_MIN;
	int64_t t142 = -8557LL;

    t142 = (x689%((x690-x691)+x692));

    if (t142 != 57121LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x693 = UINT32_MAX;
	uint8_t x694 = 24U;
	uint16_t x695 = 32U;
	int16_t x696 = 37;
	uint32_t t143 = 1743U;

    t143 = (x693%((x694-x695)+x696));

    if (t143 != 15U) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint32_t x697 = UINT32_MAX;
	int16_t x698 = 2;
	int16_t x699 = 174;
	static int64_t x700 = -1LL;
	volatile int64_t t144 = -3973820239859LL;

    t144 = (x697%((x698-x699)+x700));

    if (t144 != 95LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int64_t x701 = INT64_MAX;
	uint8_t x702 = 26U;
	int16_t x704 = INT16_MIN;
	static volatile int64_t t145 = -865406031722673LL;

    t145 = (x701%((x702-x703)+x704));

    if (t145 != 36438LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int64_t x705 = -3820792679LL;
	int8_t x706 = -45;
	uint16_t x707 = UINT16_MAX;
	uint64_t x708 = 257704755375952LLU;
	static uint64_t t146 = 46959LLU;

    t146 = (x705%((x706-x707)+x708));

    if (t146 != 237684772331177LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x711 = INT8_MIN;
	static int8_t x712 = INT8_MAX;
	static uint64_t t147 = 137461428585970972LLU;

    t147 = (x709%((x710-x711)+x712));

    if (t147 != 6917LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x713 = UINT64_MAX;
	volatile uint16_t x714 = 32559U;
	int32_t x715 = INT32_MAX;
	volatile int64_t x716 = -1LL;
	volatile uint64_t t148 = 1355698980LLU;

    t148 = (x713%((x714-x715)+x716));

    if (t148 != 2147451088LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint32_t x717 = 87U;
	volatile int32_t x718 = INT32_MIN;
	int64_t x719 = 140979LL;
	static volatile uint64_t x720 = 1610038161418929599LLU;
	uint64_t t149 = 232176LLU;

    t149 = (x717%((x718-x719)+x720));

    if (t149 != 87LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x721 = UINT32_MAX;
	static volatile uint64_t x723 = 11575747749LLU;
	volatile int64_t x724 = INT64_MIN;

    t150 = (x721%((x722-x723)+x724));

    if (t150 != 4294967295LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x727 = INT32_MAX;
	volatile int32_t t151 = 241862;

    t151 = (x725%((x726-x727)+x728));

    if (t151 != 32767) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x729 = 25266LLU;
	int64_t x730 = 50938539LL;
	uint64_t x731 = UINT64_MAX;
	int16_t x732 = -1;

    t152 = (x729%((x730-x731)+x732));

    if (t152 != 25266LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x733 = 908764316LLU;
	volatile uint32_t x734 = 452U;
	int32_t x735 = 1489523;
	int32_t x736 = -694130994;
	static volatile uint64_t t153 = 25647253LLU;

    t153 = (x733%((x734-x735)+x736));

    if (t153 != 908764316LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x737 = INT32_MIN;
	static int8_t x738 = -30;
	int64_t t154 = 5474LL;

    t154 = (x737%((x738-x739)+x740));

    if (t154 != -2147483648LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x742 = INT8_MAX;
	int16_t x743 = -1;

    t155 = (x741%((x742-x743)+x744));

    if (t155 != 1LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int16_t x745 = INT16_MAX;
	static int64_t x746 = 1LL;
	uint32_t x748 = 3922273U;

    t156 = (x745%((x746-x747)+x748));

    if (t156 != 32767LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x751 = INT16_MAX;
	int16_t x752 = -6873;
	volatile uint64_t t157 = 1938LLU;

    t157 = (x749%((x750-x751)+x752));

    if (t157 != 2862LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x753 = INT32_MIN;
	static uint64_t x754 = UINT64_MAX;
	static volatile int16_t x756 = INT16_MAX;
	volatile uint64_t t158 = 8997430931LLU;

    t158 = (x753%((x754-x755)+x756));

    if (t158 != 20664LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x757 = INT8_MAX;
	static int64_t x758 = -1LL;
	int32_t x759 = INT32_MAX;
	volatile int32_t x760 = -1;
	int64_t t159 = 820469LL;

    t159 = (x757%((x758-x759)+x760));

    if (t159 != 127LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile uint8_t x766 = 3U;
	static int8_t x767 = -14;
	int16_t x768 = -12;

    t160 = (x765%((x766-x767)+x768));

    if (t160 != 4) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile uint64_t x769 = 7057050632LLU;
	int64_t x770 = -1802029757197546LL;
	static volatile uint16_t x771 = 12U;

    t161 = (x769%((x770-x771)+x772));

    if (t161 != 7057050632LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x773 = 4;
	int64_t x776 = -1494427LL;
	int64_t t162 = 302767LL;

    t162 = (x773%((x774-x775)+x776));

    if (t162 != 4LL) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int16_t x778 = 157;
	int32_t x779 = -1;
	volatile int64_t t163 = -1606360911468729664LL;

    t163 = (x777%((x778-x779)+x780));

    if (t163 != -87104LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x781 = INT8_MIN;
	uint8_t x782 = 87U;
	static uint64_t x784 = 796944091144350LLU;

    t164 = (x781%((x782-x783)+x784));

    if (t164 != 676140080296956LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x787 = 1U;
	volatile int64_t t165 = 1059599201106201LL;

    t165 = (x785%((x786-x787)+x788));

    if (t165 != -1LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x793 = 1229;
	volatile int64_t x794 = -3481382204LL;
	int16_t x795 = 0;
	uint8_t x796 = UINT8_MAX;
	static int64_t t166 = 0LL;

    t166 = (x793%((x794-x795)+x796));

    if (t166 != 1229LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint64_t x798 = 785450925710545282LLU;
	static int32_t x799 = INT32_MAX;
	volatile uint32_t x800 = 463U;
	uint64_t t167 = 4191LLU;

    t167 = (x797%((x798-x799)+x800));

    if (t167 != 583411877661092730LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint32_t x801 = 792130U;
	volatile int8_t x802 = INT8_MAX;
	static int16_t x803 = INT16_MAX;
	int8_t x804 = -8;
	volatile uint32_t t168 = 1678U;

    t168 = (x801%((x802-x803)+x804));

    if (t168 != 792130U) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x805 = INT64_MIN;
	int8_t x806 = INT8_MIN;
	int32_t x807 = -12061;
	volatile int64_t t169 = -2053350123898265LL;

    t169 = (x805%((x806-x807)+x808));

    if (t169 != -383LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x809 = -1;
	int64_t x810 = INT64_MIN;
	uint16_t x811 = 0U;
	uint32_t x812 = UINT32_MAX;
	int64_t t170 = -572484338292LL;

    t170 = (x809%((x810-x811)+x812));

    if (t170 != -1LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x814 = UINT16_MAX;
	int8_t x815 = -24;
	int32_t x816 = -1;
	static volatile int32_t t171 = -41604;

    t171 = (x813%((x814-x815)+x816));

    if (t171 != -242) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int16_t x817 = 3233;
	static int16_t x818 = -1;
	int64_t x819 = -1LL;
	volatile int32_t x820 = -1613094;
	int64_t t172 = -2008762091125086306LL;

    t172 = (x817%((x818-x819)+x820));

    if (t172 != 3233LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint16_t x826 = UINT16_MAX;
	static volatile int8_t x827 = 0;
	uint32_t x828 = 745U;

    t173 = (x825%((x826-x827)+x828));

    if (t173 != 157U) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint32_t x829 = 3U;
	int8_t x830 = INT8_MIN;
	volatile uint64_t x831 = 26469631716LLU;
	int32_t x832 = -1;
	static uint64_t t174 = 4288834589919735630LLU;

    t174 = (x829%((x830-x831)+x832));

    if (t174 != 3LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x833 = INT8_MAX;
	int16_t x834 = -3762;
	volatile int32_t t175 = -221662824;

    t175 = (x833%((x834-x835)+x836));

    if (t175 != 127) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int32_t x837 = -1;
	int16_t x838 = INT16_MIN;
	int8_t x839 = -1;
	uint8_t x840 = 66U;
	volatile int32_t t176 = -80246918;

    t176 = (x837%((x838-x839)+x840));

    if (t176 != -1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x841 = INT8_MAX;
	uint64_t x842 = UINT64_MAX;
	volatile int64_t x843 = 2317848575LL;
	volatile int64_t x844 = INT64_MIN;
	uint64_t t177 = 983120712122LLU;

    t177 = (x841%((x842-x843)+x844));

    if (t177 != 127LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x845 = -1;
	volatile uint64_t x846 = UINT64_MAX;
	int16_t x847 = 3;
	int16_t x848 = 7911;

    t178 = (x845%((x846-x847)+x848));

    if (t178 != 1150LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x849 = INT16_MIN;
	volatile uint64_t x850 = UINT64_MAX;
	volatile uint32_t x851 = 107U;
	uint8_t x852 = 1U;
	uint64_t t179 = 16884657953510LLU;

    t179 = (x849%((x850-x851)+x852));

    if (t179 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile int64_t x853 = 683518541LL;
	static int64_t x855 = 61250107966LL;
	int16_t x856 = INT16_MIN;
	int64_t t180 = -65409507LL;

    t180 = (x853%((x854-x855)+x856));

    if (t180 != 683518541LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x857 = 6465U;
	uint16_t x858 = 10U;
	static uint8_t x860 = 17U;

    t181 = (x857%((x858-x859)+x860));

    if (t181 != 6465) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x861 = -295;
	int8_t x862 = INT8_MAX;
	int64_t x863 = INT64_MAX;
	int64_t x864 = 1LL;
	volatile int64_t t182 = -8383042989124656LL;

    t182 = (x861%((x862-x863)+x864));

    if (t182 != -295LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x865 = 1;
	int8_t x866 = 1;
	int64_t x868 = 9337688487147LL;

    t183 = (x865%((x866-x867)+x868));

    if (t183 != 1LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int8_t x869 = 1;
	uint8_t x870 = 1U;
	int64_t x871 = -436353LL;
	int16_t x872 = 1740;
	volatile int64_t t184 = 66530142512LL;

    t184 = (x869%((x870-x871)+x872));

    if (t184 != 1LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x875 = INT64_MAX;
	uint16_t x876 = UINT16_MAX;
	volatile int64_t t185 = -56105LL;

    t185 = (x873%((x874-x875)+x876));

    if (t185 != 78941LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x877 = 123198435U;
	static uint64_t x879 = UINT64_MAX;
	int32_t x880 = INT32_MIN;
	volatile uint64_t t186 = 39556236341850LLU;

    t186 = (x877%((x878-x879)+x880));

    if (t186 != 123198435LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x885 = 3373U;
	uint64_t x886 = 90719954089LLU;
	volatile uint16_t x888 = 914U;
	volatile uint64_t t187 = 7975LLU;

    t187 = (x885%((x886-x887)+x888));

    if (t187 != 3373LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x890 = -1;
	static int8_t x891 = INT8_MIN;
	static uint8_t x892 = UINT8_MAX;
	volatile int32_t t188 = 45328869;

    t188 = (x889%((x890-x891)+x892));

    if (t188 != -318) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x893 = -16044420910973LL;
	int32_t x894 = 179223;
	volatile int64_t x896 = -1LL;

    t189 = (x893%((x894-x895)+x896));

    if (t189 != -104471LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x897 = 3554;
	int64_t x898 = INT64_MAX;
	static uint64_t x899 = 35022861448100LLU;
	uint64_t x900 = 920285662553771759LLU;
	volatile uint64_t t190 = 52LLU;

    t190 = (x897%((x898-x899)+x900));

    if (t190 != 3554LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x902 = 26617U;
	static int8_t x904 = INT8_MAX;
	int32_t t191 = 5846;

    t191 = (x901%((x902-x903)+x904));

    if (t191 != -128) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x905 = INT8_MAX;
	static volatile int32_t x906 = INT32_MIN;
	int64_t x907 = INT64_MIN;
	int32_t x908 = INT32_MIN;

    t192 = (x905%((x906-x907)+x908));

    if (t192 != 127LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x909 = INT8_MIN;
	uint32_t x912 = UINT32_MAX;
	static volatile uint32_t t193 = 894596U;

    t193 = (x909%((x910-x911)+x912));

    if (t193 != 619U) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x913 = -34;
	static volatile int8_t x914 = -1;
	int64_t x915 = INT64_MIN;
	volatile int8_t x916 = -1;
	volatile int64_t t194 = -51LL;

    t194 = (x913%((x914-x915)+x916));

    if (t194 != -34LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x921 = 501U;
	static uint32_t x922 = 44479041U;
	volatile int64_t x923 = -1LL;
	int16_t x924 = INT16_MIN;
	volatile int64_t t195 = -557860LL;

    t195 = (x921%((x922-x923)+x924));

    if (t195 != 501LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x926 = INT32_MAX;
	volatile uint32_t x927 = 1474617900U;
	static int16_t x928 = -1;
	volatile uint32_t t196 = 1U;

    t196 = (x925%((x926-x927)+x928));

    if (t196 != 127U) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x929 = UINT8_MAX;
	uint32_t x931 = UINT32_MAX;
	uint32_t t197 = 214764U;

    t197 = (x929%((x930-x931)+x932));

    if (t197 != 255U) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x933 = INT16_MIN;
	int16_t x935 = -1;
	static int64_t x936 = -1LL;
	int64_t t198 = 1LL;

    t198 = (x933%((x934-x935)+x936));

    if (t198 != -10LL) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint8_t x941 = UINT8_MAX;
	int16_t x942 = -1;
	uint32_t x944 = 24U;

    t199 = (x941%((x942-x943)+x944));

    if (t199 != 255U) { NG(); } else { ; }
	
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

