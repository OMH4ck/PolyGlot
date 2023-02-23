
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

int64_t x2 = INT64_MIN;
int32_t x8 = -1;
volatile uint16_t x10 = 1U;
int8_t x15 = -1;
int8_t x16 = INT8_MAX;
static volatile int64_t x17 = INT64_MAX;
uint64_t x18 = 2027251017195971025LLU;
uint16_t x31 = 1216U;
static int32_t x33 = -2565;
static volatile uint64_t t8 = 798LLU;
uint32_t x38 = 0U;
volatile uint64_t t9 = 34549359LLU;
int16_t x54 = INT16_MIN;
uint8_t x75 = 17U;
uint8_t x90 = UINT8_MAX;
static int8_t x97 = INT8_MAX;
int32_t x98 = INT32_MIN;
volatile int16_t x101 = INT16_MIN;
int16_t x104 = 0;
volatile int32_t t23 = -492690;
uint8_t x107 = UINT8_MAX;
volatile int8_t x108 = INT8_MIN;
uint16_t x112 = 397U;
volatile int64_t t25 = -72821421431LL;
uint32_t x113 = UINT32_MAX;
uint32_t x120 = 55610892U;
int64_t x130 = INT64_MIN;
int16_t x133 = INT16_MIN;
static uint64_t x142 = UINT64_MAX;
volatile int32_t t33 = -14;
static int16_t x149 = -12;
int16_t x152 = INT16_MIN;
int8_t x153 = INT8_MIN;
int32_t x159 = INT32_MIN;
static int16_t x160 = INT16_MAX;
uint16_t x164 = 93U;
uint64_t t39 = 88485251663LLU;
int8_t x176 = -1;
volatile int32_t t41 = 36652;
static int64_t t42 = -1608645638405510338LL;
volatile int32_t t44 = -45;
static uint8_t x189 = UINT8_MAX;
static int16_t x193 = INT16_MIN;
volatile int16_t x206 = -1;
uint32_t x212 = 592509U;
static volatile uint32_t t49 = 124U;
int8_t x214 = INT8_MAX;
int32_t t50 = -23067;
uint16_t x221 = 51U;
int32_t x231 = INT32_MAX;
int32_t t55 = 0;
int64_t x245 = 21972477409LL;
static int32_t x247 = 41026;
int32_t x251 = INT32_MAX;
int32_t x252 = INT32_MAX;
volatile int8_t x254 = INT8_MIN;
volatile int64_t x255 = -153234381746LL;
static int64_t x258 = -16623872516215LL;
int64_t t60 = 401506LL;
int8_t x282 = INT8_MIN;
int32_t t65 = 181;
int32_t x285 = 144;
volatile int32_t x287 = -1;
volatile int32_t t66 = 492783475;
int64_t x290 = -1LL;
volatile int32_t t67 = 2230;
volatile uint32_t x299 = UINT32_MAX;
volatile int8_t x301 = INT8_MAX;
int32_t x305 = -310688;
int32_t x309 = INT32_MAX;
static int16_t x311 = INT16_MIN;
int16_t x318 = -1;
uint32_t x322 = 295U;
int64_t x328 = -1684521593LL;
int16_t x329 = INT16_MIN;
uint8_t x330 = UINT8_MAX;
volatile int32_t x331 = INT32_MAX;
uint16_t x333 = 2123U;
static int64_t x337 = INT64_MAX;
volatile int64_t t78 = 3LL;
uint16_t x342 = 2U;
int32_t x343 = INT32_MAX;
uint16_t x347 = UINT16_MAX;
uint16_t x352 = 39U;
static int16_t x363 = INT16_MIN;
uint64_t t84 = 5LLU;
uint64_t x365 = 342518101873LLU;
volatile int8_t x386 = -3;
static uint32_t x388 = 12721391U;
uint8_t x408 = 1U;
volatile int16_t x411 = INT16_MIN;
volatile int32_t t95 = -299381;
uint8_t x420 = 4U;
volatile int32_t t96 = 0;
int8_t x425 = 0;
volatile int32_t x436 = INT32_MAX;
volatile uint64_t x438 = 1548LLU;
int32_t t101 = -1;
int64_t x444 = -12031377513LL;
volatile uint16_t x453 = 1U;
int32_t x455 = 991443560;
volatile int16_t x469 = INT16_MIN;
volatile int64_t x476 = 18154LL;
static volatile int64_t t107 = -307032646LL;
uint32_t x483 = UINT32_MAX;
int32_t x484 = INT32_MAX;
static volatile uint32_t t109 = 31993234U;
volatile int32_t t114 = 422742;
volatile uint64_t t116 = 271841427445572LLU;
static int8_t x527 = INT8_MIN;
static int64_t x537 = INT64_MIN;
int64_t x539 = -1LL;
int64_t t120 = INT64_MIN;
static int16_t x541 = -24;
int16_t x559 = 0;
static int16_t x567 = INT16_MIN;
uint64_t t126 = 70422136LLU;
uint32_t x581 = UINT32_MAX;
uint32_t x582 = UINT32_MAX;
uint64_t x590 = 730449990895124589LLU;
static volatile int32_t t131 = 211917814;
volatile int32_t t132 = 9743;
int16_t x603 = INT16_MAX;
static int8_t x604 = INT8_MIN;
uint8_t x605 = 1U;
int16_t x606 = -1;
int16_t x611 = INT16_MAX;
uint32_t x619 = UINT32_MAX;
int32_t x622 = INT32_MAX;
static volatile int32_t t138 = -8;
int8_t x633 = INT8_MIN;
uint8_t x644 = 4U;
int16_t x645 = 1131;
uint32_t x648 = 21843033U;
uint32_t x653 = 317U;
uint32_t x656 = 2144392U;
uint32_t x658 = 1760371U;
static int8_t x659 = INT8_MAX;
static int32_t t146 = 71;
volatile int32_t x673 = -1;
int32_t x681 = INT32_MAX;
volatile int16_t x690 = -2720;
int64_t x692 = -1LL;
static int16_t x694 = -571;
volatile uint64_t t153 = 134LLU;
int32_t x711 = INT32_MIN;
int16_t x716 = 6834;
static volatile int8_t x718 = 1;
int8_t x720 = INT8_MAX;
uint64_t t159 = 1LLU;
static volatile int64_t t160 = -29056708997433LL;
volatile int64_t x731 = -104502LL;
uint64_t x743 = 567590LLU;
static int64_t x747 = -5928188936181LL;
int32_t x748 = -4;
volatile uint64_t t166 = 755596940499891LLU;
static int32_t x751 = -31;
volatile int32_t t167 = 3369718;
int64_t x757 = INT64_MIN;
int8_t x758 = 1;
static uint8_t x759 = 4U;
volatile int64_t t169 = 369218950956612762LL;
volatile uint8_t x764 = 70U;
volatile uint32_t x769 = UINT32_MAX;
int32_t t172 = -3;
uint16_t x795 = 10919U;
uint32_t x798 = UINT32_MAX;
volatile uint32_t t177 = 0U;
static int32_t x814 = 40984723;
uint64_t x821 = 107831LLU;
static int16_t x827 = INT16_MAX;
int8_t x839 = INT8_MAX;
uint64_t t184 = 7930113641268164115LLU;
int32_t x843 = 0;
int16_t x846 = -15;
static int16_t x847 = INT16_MIN;
int32_t x848 = 0;
uint16_t x850 = 7U;
uint32_t x852 = UINT32_MAX;
uint8_t x856 = 3U;
uint8_t x879 = 0U;
static uint8_t x883 = 21U;
volatile int64_t x884 = INT64_MAX;
static int64_t t194 = 3LL;
int16_t x885 = INT16_MIN;
int8_t x886 = INT8_MIN;
uint64_t x890 = 9066706199683LLU;
static int32_t x897 = -1;


void f0(void) {
    	uint32_t x1 = 1U;
	int8_t x3 = -1;
	int32_t x4 = 55534;
	volatile uint32_t t0 = 126647372U;

    t0 = (x1^((x2!=x3)-x4));

    if (t0 != 4294911762U) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = 117LLU;
	static uint8_t x6 = 4U;
	static int8_t x7 = -1;
	static uint64_t t1 = 9198191LLU;

    t1 = (x5^((x6!=x7)-x8));

    if (t1 != 119LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x9 = INT8_MIN;
	uint32_t x11 = UINT32_MAX;
	static uint16_t x12 = 5723U;
	static int32_t t2 = -7967915;

    t2 = (x9^((x10!=x11)-x12));

    if (t2 != 5670) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x13 = INT8_MAX;
	int32_t x14 = 419013;
	volatile int32_t t3 = -136;

    t3 = (x13^((x14!=x15)-x16));

    if (t3 != -3) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x19 = INT8_MAX;
	static uint64_t x20 = 2274170069384698LLU;
	uint64_t t4 = 2272571403951390522LLU;

    t4 = (x17^((x18!=x19)-x20));

    if (t4 != 9225646206924160504LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = 252234;
	int64_t x22 = -1LL;
	int8_t x23 = -20;
	static volatile int32_t x24 = -1;
	int32_t t5 = -87;

    t5 = (x21^((x22!=x23)-x24));

    if (t5 != 252232) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x25 = -15;
	static volatile int64_t x26 = -1LL;
	volatile int16_t x27 = INT16_MIN;
	volatile int16_t x28 = 29;
	static int32_t t6 = -17321239;

    t6 = (x25^((x26!=x27)-x28));

    if (t6 != 21) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = 24187185;
	uint32_t x30 = 6938U;
	static int64_t x32 = -732677433LL;
	volatile int64_t t7 = -40748362LL;

    t7 = (x29^((x30!=x31)-x32));

    if (t7 != 718984203LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x34 = INT16_MIN;
	static volatile int8_t x35 = 0;
	static uint64_t x36 = 25142549123LLU;

    t8 = (x33^((x34!=x35)-x36));

    if (t8 != 25142546565LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint64_t x37 = 703LLU;
	int8_t x39 = 1;
	volatile int16_t x40 = INT16_MIN;

    t9 = (x37^((x38!=x39)-x40));

    if (t9 != 33470LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = INT64_MIN;
	volatile uint64_t x42 = UINT64_MAX;
	int32_t x43 = INT32_MIN;
	int32_t x44 = INT32_MAX;
	int64_t t10 = 1455312751111622LL;

    t10 = (x41^((x42!=x43)-x44));

    if (t10 != 9223372034707292162LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = INT64_MIN;
	int64_t x46 = INT64_MAX;
	uint8_t x47 = 2U;
	int64_t x48 = 52026LL;
	volatile int64_t t11 = 1486041221918126LL;

    t11 = (x45^((x46!=x47)-x48));

    if (t11 != 9223372036854723783LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x49 = INT16_MIN;
	static int64_t x50 = INT64_MIN;
	uint64_t x51 = UINT64_MAX;
	uint32_t x52 = 14U;
	static volatile uint32_t t12 = 2U;

    t12 = (x49^((x50!=x51)-x52));

    if (t12 != 32755U) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int8_t x53 = INT8_MAX;
	volatile uint8_t x55 = 2U;
	int16_t x56 = 48;
	volatile int32_t t13 = -2;

    t13 = (x53^((x54!=x55)-x56));

    if (t13 != -82) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = INT8_MIN;
	volatile int16_t x58 = 6;
	uint32_t x59 = 53085029U;
	static int16_t x60 = -1;
	int32_t t14 = -2;

    t14 = (x57^((x58!=x59)-x60));

    if (t14 != -126) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x61 = UINT64_MAX;
	volatile uint64_t x62 = 5390365202963LLU;
	volatile uint32_t x63 = 53094U;
	static volatile uint16_t x64 = 14489U;
	volatile uint64_t t15 = 707634532793218120LLU;

    t15 = (x61^((x62!=x63)-x64));

    if (t15 != 14487LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint16_t x65 = 7407U;
	volatile int8_t x66 = 8;
	int8_t x67 = INT8_MAX;
	static volatile uint16_t x68 = UINT16_MAX;
	volatile int32_t t16 = -395832381;

    t16 = (x65^((x66!=x67)-x68));

    if (t16 != -58131) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x69 = INT8_MIN;
	int8_t x70 = INT8_MIN;
	int32_t x71 = INT32_MIN;
	int8_t x72 = 31;
	int32_t t17 = 22;

    t17 = (x69^((x70!=x71)-x72));

    if (t17 != 98) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = INT8_MIN;
	int32_t x74 = INT32_MAX;
	uint32_t x76 = UINT32_MAX;
	volatile uint32_t t18 = 4706025U;

    t18 = (x73^((x74!=x75)-x76));

    if (t18 != 4294967170U) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint8_t x85 = UINT8_MAX;
	int8_t x86 = INT8_MAX;
	volatile uint64_t x87 = UINT64_MAX;
	volatile uint16_t x88 = UINT16_MAX;
	volatile int32_t t19 = -29489;

    t19 = (x85^((x86!=x87)-x88));

    if (t19 != -65283) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x89 = -1538045;
	uint32_t x91 = 653907636U;
	static uint32_t x92 = UINT32_MAX;
	uint32_t t20 = 29226927U;

    t20 = (x89^((x90!=x91)-x92));

    if (t20 != 4293429249U) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x93 = 2U;
	int16_t x94 = INT16_MAX;
	static int8_t x95 = INT8_MAX;
	volatile int32_t x96 = 124;
	int32_t t21 = 515909;

    t21 = (x93^((x94!=x95)-x96));

    if (t21 != -121) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x99 = UINT8_MAX;
	volatile int8_t x100 = INT8_MIN;
	volatile int32_t t22 = 4137604;

    t22 = (x97^((x98!=x99)-x100));

    if (t22 != 254) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x102 = -3;
	static int16_t x103 = -1;

    t23 = (x101^((x102!=x103)-x104));

    if (t23 != -32767) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x105 = -48LL;
	volatile int32_t x106 = INT32_MAX;
	int64_t t24 = 206879370530481LL;

    t24 = (x105^((x106!=x107)-x108));

    if (t24 != -175LL) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int64_t x109 = 13LL;
	uint16_t x110 = 1U;
	int64_t x111 = -1LL;

    t25 = (x109^((x110!=x111)-x112));

    if (t25 != -391LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x114 = -1;
	volatile int8_t x115 = 7;
	static volatile int64_t x116 = -279303LL;
	static int64_t t26 = -77560595884LL;

    t26 = (x113^((x114!=x115)-x116));

    if (t26 != 4294687991LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x117 = UINT16_MAX;
	volatile int64_t x118 = -2200325119043471483LL;
	uint16_t x119 = 28U;
	volatile uint32_t t27 = 1035591203U;

    t27 = (x117^((x118!=x119)-x120));

    if (t27 != 4239363594U) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x121 = UINT16_MAX;
	uint16_t x122 = UINT16_MAX;
	uint32_t x123 = 3312356U;
	static int8_t x124 = INT8_MIN;
	static int32_t t28 = 7362097;

    t28 = (x121^((x122!=x123)-x124));

    if (t28 != 65406) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint32_t x125 = 25U;
	int8_t x126 = INT8_MIN;
	volatile uint8_t x127 = UINT8_MAX;
	static uint16_t x128 = UINT16_MAX;
	volatile uint32_t t29 = 1U;

    t29 = (x125^((x126!=x127)-x128));

    if (t29 != 4294901787U) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint16_t x129 = 1U;
	volatile int16_t x131 = INT16_MAX;
	uint8_t x132 = 18U;
	volatile int32_t t30 = -60783800;

    t30 = (x129^((x130!=x131)-x132));

    if (t30 != -18) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x134 = 4376031808435445LL;
	uint8_t x135 = UINT8_MAX;
	int8_t x136 = INT8_MAX;
	volatile int32_t t31 = 43927049;

    t31 = (x133^((x134!=x135)-x136));

    if (t31 != 32642) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x137 = INT64_MIN;
	int32_t x138 = 1397;
	int16_t x139 = -894;
	static int8_t x140 = INT8_MIN;
	int64_t t32 = 6LL;

    t32 = (x137^((x138!=x139)-x140));

    if (t32 != -9223372036854775679LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x141 = INT16_MAX;
	static volatile uint64_t x143 = UINT64_MAX;
	uint8_t x144 = 0U;

    t33 = (x141^((x142!=x143)-x144));

    if (t33 != 32767) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint16_t x145 = UINT16_MAX;
	volatile uint32_t x146 = 6762U;
	uint32_t x147 = 4844U;
	int8_t x148 = INT8_MAX;
	volatile int32_t t34 = -112077;

    t34 = (x145^((x146!=x147)-x148));

    if (t34 != -65411) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int64_t x150 = 3101765101LL;
	volatile int8_t x151 = 57;
	int32_t t35 = 28973607;

    t35 = (x149^((x150!=x151)-x152));

    if (t35 != -32779) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x154 = -1LL;
	uint8_t x155 = 13U;
	volatile int64_t x156 = 9947686840224LL;
	int64_t t36 = -61244488284LL;

    t36 = (x153^((x154!=x155)-x156));

    if (t36 != 9947686840289LL) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x157 = -61892LL;
	static volatile int64_t x158 = INT64_MIN;
	int64_t t37 = -1LL;

    t37 = (x157^((x158!=x159)-x160));

    if (t37 != 36414LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x161 = -1;
	int8_t x162 = INT8_MAX;
	uint64_t x163 = UINT64_MAX;
	volatile int32_t t38 = -966547;

    t38 = (x161^((x162!=x163)-x164));

    if (t38 != 91) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x165 = 6240204117044246LLU;
	uint64_t x166 = UINT64_MAX;
	int64_t x167 = 258LL;
	volatile int32_t x168 = -29672;

    t39 = (x165^((x166!=x167)-x168));

    if (t39 != 6240204117024767LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x169 = -83;
	static volatile uint32_t x170 = UINT32_MAX;
	static int64_t x171 = 3472793629LL;
	uint64_t x172 = UINT64_MAX;
	uint64_t t40 = 3707150726978262418LLU;

    t40 = (x169^((x170!=x171)-x172));

    if (t40 != 18446744073709551535LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x173 = INT16_MAX;
	int16_t x174 = INT16_MIN;
	uint8_t x175 = 54U;

    t41 = (x173^((x174!=x175)-x176));

    if (t41 != 32765) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint8_t x177 = UINT8_MAX;
	int32_t x178 = INT32_MIN;
	int32_t x179 = -1034230;
	int64_t x180 = 3836LL;

    t42 = (x177^((x178!=x179)-x180));

    if (t42 != -3590LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x181 = 26;
	int8_t x182 = -1;
	volatile int8_t x183 = 2;
	int32_t x184 = -1;
	static volatile int32_t t43 = -2739232;

    t43 = (x181^((x182!=x183)-x184));

    if (t43 != 24) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x185 = -1;
	volatile uint8_t x186 = UINT8_MAX;
	int64_t x187 = 34249175044361797LL;
	volatile uint8_t x188 = 3U;

    t44 = (x185^((x186!=x187)-x188));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x190 = 7310705892616644647LLU;
	int16_t x191 = -478;
	volatile uint16_t x192 = 5939U;
	volatile int32_t t45 = -25592;

    t45 = (x189^((x190!=x191)-x192));

    if (t45 != -6095) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile uint32_t x194 = 17835533U;
	int8_t x195 = -1;
	int8_t x196 = INT8_MAX;
	volatile int32_t t46 = -1250;

    t46 = (x193^((x194!=x195)-x196));

    if (t46 != 32642) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x197 = 7913LL;
	uint32_t x198 = UINT32_MAX;
	int32_t x199 = INT32_MAX;
	uint8_t x200 = 28U;
	static volatile int64_t t47 = -1148857117865LL;

    t47 = (x197^((x198!=x199)-x200));

    if (t47 != -7924LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x205 = UINT16_MAX;
	int8_t x207 = INT8_MAX;
	int8_t x208 = 39;
	volatile int32_t t48 = -63952;

    t48 = (x205^((x206!=x207)-x208));

    if (t48 != -65499) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x209 = UINT8_MAX;
	int32_t x210 = -1103950;
	int8_t x211 = INT8_MIN;

    t49 = (x209^((x210!=x211)-x212));

    if (t49 != 4294374779U) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x213 = INT8_MIN;
	uint64_t x215 = UINT64_MAX;
	volatile int16_t x216 = 34;

    t50 = (x213^((x214!=x215)-x216));

    if (t50 != 95) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x217 = INT16_MIN;
	int16_t x218 = -368;
	int16_t x219 = -1;
	int64_t x220 = -1LL;
	volatile int64_t t51 = -1410764795707LL;

    t51 = (x217^((x218!=x219)-x220));

    if (t51 != -32766LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x222 = -1;
	int32_t x223 = -6;
	int8_t x224 = 26;
	int32_t t52 = 44110;

    t52 = (x221^((x222!=x223)-x224));

    if (t52 != -44) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x229 = -1LL;
	int64_t x230 = -1LL;
	int32_t x232 = -3656670;
	int64_t t53 = 6869208370276LL;

    t53 = (x229^((x230!=x231)-x232));

    if (t53 != -3656672LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x237 = 4;
	static uint64_t x238 = UINT64_MAX;
	volatile int32_t x239 = 0;
	static int16_t x240 = 1312;
	int32_t t54 = 1733695;

    t54 = (x237^((x238!=x239)-x240));

    if (t54 != -1307) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x241 = INT32_MAX;
	static int32_t x242 = 66888713;
	static int32_t x243 = -596461;
	uint8_t x244 = UINT8_MAX;

    t55 = (x241^((x242!=x243)-x244));

    if (t55 != -2147483395) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x246 = INT8_MIN;
	int8_t x248 = INT8_MIN;
	int64_t t56 = -2243655803441244057LL;

    t56 = (x245^((x246!=x247)-x248));

    if (t56 != 21972477280LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x249 = 1094U;
	uint32_t x250 = UINT32_MAX;
	volatile int32_t t57 = 252709;

    t57 = (x249^((x250!=x251)-x252));

    if (t57 != -2147482556) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x253 = 95LL;
	static volatile int64_t x256 = -1LL;
	int64_t t58 = -13311311136098LL;

    t58 = (x253^((x254!=x255)-x256));

    if (t58 != 93LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x257 = UINT16_MAX;
	uint16_t x259 = UINT16_MAX;
	int16_t x260 = INT16_MIN;
	static volatile int32_t t59 = -879;

    t59 = (x257^((x258!=x259)-x260));

    if (t59 != 32766) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x261 = 238362979LL;
	static uint32_t x262 = 67810U;
	int64_t x263 = -449932884336221LL;
	volatile int32_t x264 = -1;

    t60 = (x261^((x262!=x263)-x264));

    if (t60 != 238362977LL) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x265 = -1;
	uint32_t x266 = UINT32_MAX;
	static int8_t x267 = -1;
	volatile uint64_t x268 = 403LLU;
	volatile uint64_t t61 = 8045624111500LLU;

    t61 = (x265^((x266!=x267)-x268));

    if (t61 != 402LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x269 = UINT64_MAX;
	static uint16_t x270 = UINT16_MAX;
	int8_t x271 = INT8_MAX;
	static int64_t x272 = -1LL;
	volatile uint64_t t62 = 140857LLU;

    t62 = (x269^((x270!=x271)-x272));

    if (t62 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint8_t x273 = UINT8_MAX;
	int32_t x274 = INT32_MIN;
	int16_t x275 = -1;
	volatile uint8_t x276 = UINT8_MAX;
	static int32_t t63 = -17707761;

    t63 = (x273^((x274!=x275)-x276));

    if (t63 != -3) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x277 = INT8_MAX;
	volatile int16_t x278 = -1;
	volatile uint64_t x279 = 232LLU;
	uint64_t x280 = 594704667950884325LLU;
	uint64_t t64 = 10815603464766575LLU;

    t64 = (x277^((x278!=x279)-x280));

    if (t64 != 17852039405758667363LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint16_t x281 = 3847U;
	int8_t x283 = INT8_MIN;
	static int32_t x284 = -1;

    t65 = (x281^((x282!=x283)-x284));

    if (t65 != 3846) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x286 = 1U;
	static uint8_t x288 = UINT8_MAX;

    t66 = (x285^((x286!=x287)-x288));

    if (t66 != -110) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x289 = 1;
	uint32_t x291 = UINT32_MAX;
	int16_t x292 = -1900;

    t67 = (x289^((x290!=x291)-x292));

    if (t67 != 1900) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x293 = 0U;
	volatile int32_t x294 = INT32_MIN;
	static uint32_t x295 = 188U;
	uint64_t x296 = 1LLU;
	uint64_t t68 = 3889926142LLU;

    t68 = (x293^((x294!=x295)-x296));

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x297 = 261888U;
	int32_t x298 = INT32_MAX;
	volatile int32_t x300 = -1;
	volatile uint32_t t69 = 2U;

    t69 = (x297^((x298!=x299)-x300));

    if (t69 != 261890U) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint64_t x302 = 311902017LLU;
	int64_t x303 = INT64_MAX;
	uint8_t x304 = 6U;
	volatile int32_t t70 = 360394867;

    t70 = (x301^((x302!=x303)-x304));

    if (t70 != -124) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x306 = INT32_MIN;
	int16_t x307 = INT16_MIN;
	static int8_t x308 = INT8_MIN;
	static volatile int32_t t71 = -112;

    t71 = (x305^((x306!=x307)-x308));

    if (t71 != -310559) { NG(); } else { ; }
	
}

void f72(void) {
    	static int8_t x310 = INT8_MIN;
	int8_t x312 = INT8_MIN;
	static int32_t t72 = -152624165;

    t72 = (x309^((x310!=x311)-x312));

    if (t72 != 2147483518) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x317 = -1;
	int32_t x319 = -1;
	static int16_t x320 = INT16_MIN;
	static int32_t t73 = 34;

    t73 = (x317^((x318!=x319)-x320));

    if (t73 != -32769) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x321 = 4U;
	uint32_t x323 = 23947683U;
	int8_t x324 = -6;
	volatile uint32_t t74 = 247470902U;

    t74 = (x321^((x322!=x323)-x324));

    if (t74 != 3U) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x325 = 12;
	int8_t x326 = -1;
	volatile int16_t x327 = INT16_MIN;
	volatile int64_t t75 = -1LL;

    t75 = (x325^((x326!=x327)-x328));

    if (t75 != 1684521590LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x332 = -1LL;
	int64_t t76 = 649613514595469902LL;

    t76 = (x329^((x330!=x331)-x332));

    if (t76 != -32766LL) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int32_t x334 = -1;
	int32_t x335 = -1;
	volatile int32_t x336 = -3428348;
	int32_t t77 = 4175;

    t77 = (x333^((x334!=x335)-x336));

    if (t77 != 3426231) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x338 = -22438636281LL;
	uint8_t x339 = UINT8_MAX;
	uint16_t x340 = UINT16_MAX;

    t78 = (x337^((x338!=x339)-x340));

    if (t78 != -9223372036854710275LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x341 = INT32_MAX;
	static volatile int8_t x344 = INT8_MIN;
	int32_t t79 = -3;

    t79 = (x341^((x342!=x343)-x344));

    if (t79 != 2147483518) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x345 = 0;
	int16_t x346 = INT16_MAX;
	static int16_t x348 = INT16_MIN;
	volatile int32_t t80 = 4788;

    t80 = (x345^((x346!=x347)-x348));

    if (t80 != 32769) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x349 = INT64_MIN;
	static int32_t x350 = -8;
	int64_t x351 = INT64_MIN;
	volatile int64_t t81 = 262607LL;

    t81 = (x349^((x350!=x351)-x352));

    if (t81 != 9223372036854775770LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x353 = INT64_MIN;
	volatile uint16_t x354 = UINT16_MAX;
	int32_t x355 = -1;
	int16_t x356 = 8;
	int64_t t82 = -20156663881150853LL;

    t82 = (x353^((x354!=x355)-x356));

    if (t82 != 9223372036854775801LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint64_t x357 = UINT64_MAX;
	uint8_t x358 = 17U;
	uint8_t x359 = UINT8_MAX;
	int8_t x360 = INT8_MAX;
	uint64_t t83 = 18825304557461492LLU;

    t83 = (x357^((x358!=x359)-x360));

    if (t83 != 125LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x361 = INT16_MIN;
	int16_t x362 = INT16_MAX;
	volatile uint64_t x364 = 609404014LLU;

    t84 = (x361^((x362!=x363)-x364));

    if (t84 != 609401747LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x366 = -1;
	int32_t x367 = INT32_MIN;
	volatile int32_t x368 = -44189993;
	volatile uint64_t t85 = 48377102LLU;

    t85 = (x365^((x366!=x367)-x368));

    if (t85 != 342473915995LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x373 = -1;
	static int64_t x374 = INT64_MAX;
	static int64_t x375 = 1061500989348017LL;
	int16_t x376 = -1;
	int32_t t86 = 1;

    t86 = (x373^((x374!=x375)-x376));

    if (t86 != -3) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint16_t x377 = 8086U;
	volatile uint16_t x378 = UINT16_MAX;
	static int16_t x379 = INT16_MIN;
	static int64_t x380 = -1LL;
	int64_t t87 = 16999910453931LL;

    t87 = (x377^((x378!=x379)-x380));

    if (t87 != 8084LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x381 = 3127U;
	int64_t x382 = -1LL;
	int32_t x383 = -79;
	static uint16_t x384 = 103U;
	volatile int32_t t88 = -3117964;

    t88 = (x381^((x382!=x383)-x384));

    if (t88 != -3155) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x385 = INT16_MAX;
	int64_t x387 = -1LL;
	uint32_t t89 = 5437U;

    t89 = (x385^((x386!=x387)-x388));

    if (t89 != 4282227949U) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x389 = INT16_MIN;
	static int32_t x390 = -1;
	static volatile int64_t x391 = INT64_MAX;
	int16_t x392 = INT16_MAX;
	volatile int32_t t90 = 19319369;

    t90 = (x389^((x390!=x391)-x392));

    if (t90 != 2) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint16_t x393 = 29U;
	volatile int16_t x394 = INT16_MIN;
	static int8_t x395 = -1;
	int8_t x396 = -1;
	volatile int32_t t91 = -22630263;

    t91 = (x393^((x394!=x395)-x396));

    if (t91 != 31) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x397 = 39;
	uint32_t x398 = 134028613U;
	static uint16_t x399 = UINT16_MAX;
	uint8_t x400 = UINT8_MAX;
	volatile int32_t t92 = -15;

    t92 = (x397^((x398!=x399)-x400));

    if (t92 != -219) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x401 = INT16_MIN;
	int32_t x402 = -1;
	uint64_t x403 = 101461314850015069LLU;
	static volatile uint32_t x404 = UINT32_MAX;
	volatile uint32_t t93 = 0U;

    t93 = (x401^((x402!=x403)-x404));

    if (t93 != 4294934530U) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x405 = INT8_MIN;
	uint32_t x406 = 208423397U;
	int8_t x407 = -1;
	volatile int32_t t94 = -447;

    t94 = (x405^((x406!=x407)-x408));

    if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x409 = INT8_MIN;
	int16_t x410 = -1;
	int16_t x412 = INT16_MIN;

    t95 = (x409^((x410!=x411)-x412));

    if (t95 != -32895) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x417 = 28U;
	static uint64_t x418 = UINT64_MAX;
	static uint32_t x419 = 168562747U;

    t96 = (x417^((x418!=x419)-x420));

    if (t96 != -31) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x421 = -1;
	int64_t x422 = 28699795304247843LL;
	static int8_t x423 = -1;
	uint8_t x424 = 3U;
	static volatile int32_t t97 = 2877032;

    t97 = (x421^((x422!=x423)-x424));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x426 = -1;
	static volatile uint64_t x427 = 2172400676675935032LLU;
	int16_t x428 = -35;
	volatile int32_t t98 = -655246664;

    t98 = (x425^((x426!=x427)-x428));

    if (t98 != 36) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x429 = 14782542U;
	static uint16_t x430 = 3U;
	static int8_t x431 = 60;
	int32_t x432 = 2;
	uint32_t t99 = 30U;

    t99 = (x429^((x430!=x431)-x432));

    if (t99 != 4280184753U) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x433 = 31U;
	int16_t x434 = INT16_MAX;
	uint64_t x435 = UINT64_MAX;
	volatile int32_t t100 = -953305000;

    t100 = (x433^((x434!=x435)-x436));

    if (t100 != -2147483619) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x437 = INT32_MIN;
	volatile int16_t x439 = 1;
	volatile uint8_t x440 = UINT8_MAX;

    t101 = (x437^((x438!=x439)-x440));

    if (t101 != 2147483394) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x441 = -1;
	int8_t x442 = -1;
	volatile uint16_t x443 = 2990U;
	volatile int64_t t102 = 15LL;

    t102 = (x441^((x442!=x443)-x444));

    if (t102 != -12031377515LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x445 = 3947729552663570LLU;
	volatile int8_t x446 = -1;
	int32_t x447 = -1;
	static uint64_t x448 = 2LLU;
	volatile uint64_t t103 = 2142464641027956LLU;

    t103 = (x445^((x446!=x447)-x448));

    if (t103 != 18442796344156888044LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x454 = INT32_MIN;
	uint8_t x456 = UINT8_MAX;
	static int32_t t104 = 477;

    t104 = (x453^((x454!=x455)-x456));

    if (t104 != -253) { NG(); } else { ; }
	
}

void f105(void) {
    	static int16_t x457 = INT16_MIN;
	static int32_t x458 = INT32_MAX;
	int64_t x459 = INT64_MIN;
	static int8_t x460 = -5;
	static volatile int32_t t105 = -101405;

    t105 = (x457^((x458!=x459)-x460));

    if (t105 != -32762) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x470 = INT16_MAX;
	int8_t x471 = INT8_MIN;
	volatile int16_t x472 = 85;
	static int32_t t106 = -3833;

    t106 = (x469^((x470!=x471)-x472));

    if (t106 != 32684) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x473 = 16;
	int16_t x474 = INT16_MAX;
	volatile int32_t x475 = 39048;

    t107 = (x473^((x474!=x475)-x476));

    if (t107 != -18169LL) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x477 = 36;
	uint16_t x478 = UINT16_MAX;
	static int8_t x479 = INT8_MIN;
	volatile uint64_t x480 = 265837587LLU;
	static uint64_t t108 = 865786413585404289LLU;

    t108 = (x477^((x478!=x479)-x480));

    if (t108 != 18446744073443713994LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x481 = UINT32_MAX;
	int32_t x482 = INT32_MIN;

    t109 = (x481^((x482!=x483)-x484));

    if (t109 != 2147483645U) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x489 = INT16_MIN;
	int64_t x490 = INT64_MIN;
	uint8_t x491 = 0U;
	uint32_t x492 = 7426019U;
	uint32_t t110 = 1904613U;

    t110 = (x489^((x490!=x491)-x492));

    if (t110 != 7417886U) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x493 = 1378117184034766LLU;
	int16_t x494 = INT16_MIN;
	volatile int16_t x495 = INT16_MAX;
	int8_t x496 = INT8_MIN;
	static volatile uint64_t t111 = 1478LLU;

    t111 = (x493^((x494!=x495)-x496));

    if (t111 != 1378117184034639LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x505 = INT16_MIN;
	volatile int32_t x506 = INT32_MIN;
	int64_t x507 = INT64_MAX;
	volatile int32_t x508 = INT32_MAX;
	int32_t t112 = 8560114;

    t112 = (x505^((x506!=x507)-x508));

    if (t112 != 2147450882) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint16_t x509 = UINT16_MAX;
	int8_t x510 = INT8_MAX;
	volatile uint16_t x511 = UINT16_MAX;
	static uint8_t x512 = 11U;
	volatile int32_t t113 = 341489;

    t113 = (x509^((x510!=x511)-x512));

    if (t113 != -65527) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint16_t x513 = UINT16_MAX;
	volatile int64_t x514 = INT64_MIN;
	int64_t x515 = 7034655544LL;
	int32_t x516 = 48055009;

    t114 = (x513^((x514!=x515)-x516));

    if (t114 != -48086305) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x517 = INT64_MIN;
	uint32_t x518 = 130657U;
	static int32_t x519 = INT32_MIN;
	uint16_t x520 = UINT16_MAX;
	static volatile int64_t t115 = -99200835924483233LL;

    t115 = (x517^((x518!=x519)-x520));

    if (t115 != 9223372036854710274LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x521 = 11002U;
	int16_t x522 = 43;
	int32_t x523 = -1;
	static uint64_t x524 = 884LLU;

    t116 = (x521^((x522!=x523)-x524));

    if (t116 != 18446744073709540983LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x525 = 1;
	static volatile int8_t x526 = INT8_MIN;
	static int16_t x528 = -1;
	volatile int32_t t117 = -34376737;

    t117 = (x525^((x526!=x527)-x528));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x529 = INT8_MAX;
	int16_t x530 = -1;
	int64_t x531 = 9361LL;
	int8_t x532 = INT8_MAX;
	int32_t t118 = 56504;

    t118 = (x529^((x530!=x531)-x532));

    if (t118 != -3) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint16_t x533 = 18068U;
	int8_t x534 = INT8_MIN;
	int8_t x535 = -1;
	static int32_t x536 = -14985898;
	int32_t t119 = 1011266;

    t119 = (x533^((x534!=x535)-x536));

    if (t119 != 15002687) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint8_t x538 = 3U;
	int16_t x540 = 1;

    t120 = (x537^((x538!=x539)-x540));

    if (t120 != INT64_MIN) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x542 = 2879U;
	int16_t x543 = -32;
	int8_t x544 = -5;
	int32_t t121 = 9863;

    t121 = (x541^((x542!=x543)-x544));

    if (t121 != -18) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint64_t x553 = 3414LLU;
	uint64_t x554 = 76055266965512290LLU;
	int64_t x555 = -20LL;
	uint64_t x556 = UINT64_MAX;
	volatile uint64_t t122 = 94370LLU;

    t122 = (x553^((x554!=x555)-x556));

    if (t122 != 3412LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint64_t x557 = 31920292963421541LLU;
	int32_t x558 = -27;
	int8_t x560 = INT8_MIN;
	static uint64_t t123 = 1689658657949LLU;

    t123 = (x557^((x558!=x559)-x560));

    if (t123 != 31920292963421668LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile uint8_t x561 = 34U;
	static int64_t x562 = -1LL;
	int32_t x563 = -418;
	uint8_t x564 = 95U;
	static int32_t t124 = -451922497;

    t124 = (x561^((x562!=x563)-x564));

    if (t124 != -128) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x565 = INT16_MIN;
	int16_t x566 = -27;
	static int8_t x568 = INT8_MIN;
	volatile int32_t t125 = -14;

    t125 = (x565^((x566!=x567)-x568));

    if (t125 != -32639) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint64_t x569 = 199LLU;
	uint64_t x570 = UINT64_MAX;
	uint8_t x571 = UINT8_MAX;
	uint32_t x572 = 12015084U;

    t126 = (x569^((x570!=x571)-x572));

    if (t126 != 4282952402LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x573 = -56339;
	volatile uint32_t x574 = 1660997U;
	volatile int32_t x575 = INT32_MIN;
	static int32_t x576 = 10;
	int32_t t127 = 10904219;

    t127 = (x573^((x574!=x575)-x576));

    if (t127 != 56346) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x577 = -7;
	int8_t x578 = INT8_MAX;
	int16_t x579 = -1;
	static int8_t x580 = 0;
	int32_t t128 = 242476;

    t128 = (x577^((x578!=x579)-x580));

    if (t128 != -8) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x583 = INT8_MIN;
	int32_t x584 = -1;
	uint32_t t129 = 1348454541U;

    t129 = (x581^((x582!=x583)-x584));

    if (t129 != 4294967293U) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint64_t x589 = 886LLU;
	int32_t x591 = -1;
	int16_t x592 = -1;
	uint64_t t130 = 63452633011173LLU;

    t130 = (x589^((x590!=x591)-x592));

    if (t130 != 884LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x593 = 494;
	int32_t x594 = 442661;
	int32_t x595 = INT32_MIN;
	int32_t x596 = 26;

    t131 = (x593^((x594!=x595)-x596));

    if (t131 != -503) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x597 = 5627;
	int32_t x598 = -239854185;
	uint32_t x599 = 47U;
	int8_t x600 = INT8_MIN;

    t132 = (x597^((x598!=x599)-x600));

    if (t132 != 5498) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int64_t x601 = INT64_MIN;
	static uint32_t x602 = UINT32_MAX;
	static volatile int64_t t133 = -239356815706651662LL;

    t133 = (x601^((x602!=x603)-x604));

    if (t133 != -9223372036854775679LL) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x607 = INT8_MIN;
	volatile int32_t x608 = -1;
	volatile int32_t t134 = -62;

    t134 = (x605^((x606!=x607)-x608));

    if (t134 != 3) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x609 = INT64_MIN;
	uint8_t x610 = 7U;
	int64_t x612 = -1LL;
	volatile int64_t t135 = 17677497LL;

    t135 = (x609^((x610!=x611)-x612));

    if (t135 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x617 = INT64_MIN;
	uint32_t x618 = UINT32_MAX;
	int16_t x620 = -4;
	volatile int64_t t136 = 10331272LL;

    t136 = (x617^((x618!=x619)-x620));

    if (t136 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x621 = INT8_MIN;
	int32_t x623 = INT32_MIN;
	volatile int64_t x624 = INT64_MAX;
	volatile int64_t t137 = -18LL;

    t137 = (x621^((x622!=x623)-x624));

    if (t137 != 9223372036854775682LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile uint8_t x625 = 3U;
	int16_t x626 = 5288;
	volatile int64_t x627 = INT64_MIN;
	int8_t x628 = 3;

    t138 = (x625^((x626!=x627)-x628));

    if (t138 != -3) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint32_t x629 = 436U;
	volatile int32_t x630 = INT32_MIN;
	int32_t x631 = 5991;
	volatile uint16_t x632 = 873U;
	uint32_t t139 = 310160835U;

    t139 = (x629^((x630!=x631)-x632));

    if (t139 != 4294966572U) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x634 = INT16_MIN;
	uint64_t x635 = 5219220749868227LLU;
	uint8_t x636 = UINT8_MAX;
	static int32_t t140 = 3786;

    t140 = (x633^((x634!=x635)-x636));

    if (t140 != 130) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x637 = 6394U;
	uint16_t x638 = UINT16_MAX;
	uint16_t x639 = 2U;
	static uint16_t x640 = 23409U;
	int32_t t141 = -2184;

    t141 = (x637^((x638!=x639)-x640));

    if (t141 != -17302) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x641 = 49772U;
	uint64_t x642 = 32LLU;
	int64_t x643 = 13717816894LL;
	volatile uint32_t t142 = 82U;

    t142 = (x641^((x642!=x643)-x644));

    if (t142 != 4294917521U) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x646 = 72335026151118LL;
	volatile int64_t x647 = INT64_MIN;
	static uint32_t t143 = 162U;

    t143 = (x645^((x646!=x647)-x648));

    if (t143 != 4273125315U) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x654 = -5051;
	int32_t x655 = INT32_MIN;
	volatile uint32_t t144 = 845901U;

    t144 = (x653^((x654!=x655)-x656));

    if (t144 != 4292822596U) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x657 = 27945109;
	int16_t x660 = INT16_MAX;
	int32_t t145 = 32;

    t145 = (x657^((x658!=x659)-x660));

    if (t145 != -27924329) { NG(); } else { ; }
	
}

void f146(void) {
    	static int32_t x661 = INT32_MIN;
	volatile int8_t x662 = INT8_MIN;
	int8_t x663 = 1;
	volatile int32_t x664 = INT32_MAX;

    t146 = (x661^((x662!=x663)-x664));

    if (t146 != 2) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x665 = INT32_MIN;
	int64_t x666 = -252518929426LL;
	volatile int8_t x667 = INT8_MAX;
	uint32_t x668 = 41U;
	volatile uint32_t t147 = 531U;

    t147 = (x665^((x666!=x667)-x668));

    if (t147 != 2147483608U) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x669 = 116127LL;
	volatile int8_t x670 = INT8_MAX;
	int32_t x671 = -1;
	uint8_t x672 = 46U;
	static volatile int64_t t148 = 66579498962LL;

    t148 = (x669^((x670!=x671)-x672));

    if (t148 != -116148LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x674 = 86U;
	int16_t x675 = -1;
	int16_t x676 = -5;
	volatile int32_t t149 = 0;

    t149 = (x673^((x674!=x675)-x676));

    if (t149 != -7) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x677 = UINT8_MAX;
	volatile int16_t x678 = -2941;
	int8_t x679 = 3;
	volatile uint8_t x680 = 20U;
	static int32_t t150 = -83;

    t150 = (x677^((x678!=x679)-x680));

    if (t150 != -238) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x682 = UINT8_MAX;
	static uint16_t x683 = 15U;
	uint64_t x684 = 3101274340855LLU;
	volatile uint64_t t151 = 2988703195071174688LLU;

    t151 = (x681^((x682!=x683)-x684));

    if (t151 != 18446740970903633397LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x689 = -1;
	int32_t x691 = INT32_MIN;
	int64_t t152 = -409583984926802LL;

    t152 = (x689^((x690!=x691)-x692));

    if (t152 != -3LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x693 = 535295LLU;
	uint32_t x695 = UINT32_MAX;
	volatile int8_t x696 = INT8_MAX;

    t153 = (x693^((x694!=x695)-x696));

    if (t153 != 18446744073709016445LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x697 = -1;
	static uint16_t x698 = 397U;
	int64_t x699 = INT64_MIN;
	static volatile int8_t x700 = -2;
	static int32_t t154 = 211;

    t154 = (x697^((x698!=x699)-x700));

    if (t154 != -4) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x701 = 921213623913465LLU;
	volatile int64_t x702 = -37822119LL;
	static int8_t x703 = INT8_MIN;
	uint64_t x704 = 281LLU;
	static volatile uint64_t t155 = 4347360180809182305LLU;

    t155 = (x701^((x702!=x703)-x704));

    if (t155 != 18445822860085638417LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x705 = INT64_MIN;
	volatile uint16_t x706 = 1963U;
	int8_t x707 = 0;
	uint16_t x708 = 2890U;
	int64_t t156 = 373313760806487995LL;

    t156 = (x705^((x706!=x707)-x708));

    if (t156 != 9223372036854772919LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static int64_t x709 = INT64_MIN;
	static uint32_t x710 = 5U;
	static int64_t x712 = -63374146477213267LL;
	volatile int64_t t157 = -3976631LL;

    t157 = (x709^((x710!=x711)-x712));

    if (t157 != -9159997890377562540LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint8_t x713 = UINT8_MAX;
	int8_t x714 = INT8_MAX;
	static volatile int64_t x715 = -287515301801LL;
	static int32_t t158 = 194461;

    t158 = (x713^((x714!=x715)-x716));

    if (t158 != -6736) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x717 = UINT64_MAX;
	uint64_t x719 = 46376160373466LLU;

    t159 = (x717^((x718!=x719)-x720));

    if (t159 != 125LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint16_t x721 = UINT16_MAX;
	int8_t x722 = 1;
	static volatile int64_t x723 = -1LL;
	int64_t x724 = -1LL;

    t160 = (x721^((x722!=x723)-x724));

    if (t160 != 65533LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x725 = -1;
	static uint8_t x726 = 15U;
	uint32_t x727 = 93U;
	uint32_t x728 = 22653226U;
	uint32_t t161 = 6121U;

    t161 = (x725^((x726!=x727)-x728));

    if (t161 != 22653224U) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x729 = 30U;
	uint8_t x730 = 2U;
	int8_t x732 = -1;
	int32_t t162 = -9870;

    t162 = (x729^((x730!=x731)-x732));

    if (t162 != 28) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint64_t x733 = UINT64_MAX;
	volatile int32_t x734 = INT32_MAX;
	int32_t x735 = INT32_MIN;
	int16_t x736 = INT16_MAX;
	volatile uint64_t t163 = 28783699917177LLU;

    t163 = (x733^((x734!=x735)-x736));

    if (t163 != 32765LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x737 = INT32_MAX;
	int16_t x738 = -1;
	int64_t x739 = INT64_MIN;
	int16_t x740 = -5020;
	static volatile int32_t t164 = 5;

    t164 = (x737^((x738!=x739)-x740));

    if (t164 != 2147478626) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x741 = INT8_MAX;
	uint32_t x742 = UINT32_MAX;
	uint64_t x744 = UINT64_MAX;
	uint64_t t165 = 172835571873499LLU;

    t165 = (x741^((x742!=x743)-x744));

    if (t165 != 125LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x745 = 1348645415181296459LLU;
	int32_t x746 = INT32_MAX;

    t166 = (x745^((x746!=x747)-x748));

    if (t166 != 1348645415181296462LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x749 = -1;
	int8_t x750 = -1;
	int8_t x752 = -1;

    t167 = (x749^((x750!=x751)-x752));

    if (t167 != -3) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x753 = INT32_MIN;
	int16_t x754 = 3;
	int64_t x755 = -1LL;
	static uint64_t x756 = 238009856884658LLU;
	volatile uint64_t t168 = 58420471063059LLU;

    t168 = (x753^((x754!=x755)-x756));

    if (t168 != 238007810981967LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x760 = INT8_MIN;

    t169 = (x757^((x758!=x759)-x760));

    if (t169 != -9223372036854775679LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x761 = UINT8_MAX;
	int16_t x762 = INT16_MAX;
	static uint32_t x763 = 14U;
	volatile int32_t t170 = -6640675;

    t170 = (x761^((x762!=x763)-x764));

    if (t170 != -188) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x770 = -1LL;
	uint64_t x771 = 25739LLU;
	int64_t x772 = -1LL;
	int64_t t171 = -61LL;

    t171 = (x769^((x770!=x771)-x772));

    if (t171 != 4294967293LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x777 = -75;
	int64_t x778 = 16791150726121713LL;
	int8_t x779 = -6;
	uint16_t x780 = UINT16_MAX;

    t172 = (x777^((x778!=x779)-x780));

    if (t172 != 65463) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x781 = -1LL;
	uint64_t x782 = 3373721LLU;
	uint16_t x783 = UINT16_MAX;
	static volatile uint64_t x784 = 265LLU;
	static uint64_t t173 = 1226215080598LLU;

    t173 = (x781^((x782!=x783)-x784));

    if (t173 != 263LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x789 = INT64_MIN;
	volatile int32_t x790 = 30597372;
	volatile int16_t x791 = -4;
	volatile uint32_t x792 = UINT32_MAX;
	int64_t t174 = -3804708701LL;

    t174 = (x789^((x790!=x791)-x792));

    if (t174 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x793 = 523;
	volatile int8_t x794 = -1;
	int64_t x796 = INT64_MAX;
	int64_t t175 = 163519803LL;

    t175 = (x793^((x794!=x795)-x796));

    if (t175 != -9223372036854775287LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x797 = -130LL;
	volatile int8_t x799 = 0;
	volatile int8_t x800 = INT8_MIN;
	int64_t t176 = -9161457537345LL;

    t176 = (x797^((x798!=x799)-x800));

    if (t176 != -1LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x801 = INT8_MIN;
	int64_t x802 = 9813635785752536LL;
	static uint32_t x803 = 24U;
	static uint32_t x804 = 6U;

    t177 = (x801^((x802!=x803)-x804));

    if (t177 != 123U) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x805 = INT8_MIN;
	int16_t x806 = -12;
	static uint64_t x807 = 25002LLU;
	static int8_t x808 = 3;
	int32_t t178 = 85112051;

    t178 = (x805^((x806!=x807)-x808));

    if (t178 != 126) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x809 = -2;
	static int16_t x810 = INT16_MIN;
	uint8_t x811 = 31U;
	int32_t x812 = -1;
	volatile int32_t t179 = -17;

    t179 = (x809^((x810!=x811)-x812));

    if (t179 != -4) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x813 = INT64_MAX;
	static volatile int64_t x815 = INT64_MAX;
	int32_t x816 = 4576612;
	static volatile int64_t t180 = 7298LL;

    t180 = (x813^((x814!=x815)-x816));

    if (t180 != -9223372036850199198LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x822 = INT32_MIN;
	static int8_t x823 = 49;
	static int32_t x824 = 1;
	uint64_t t181 = 1760519697733415LLU;

    t181 = (x821^((x822!=x823)-x824));

    if (t181 != 107831LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x825 = INT32_MIN;
	static int8_t x826 = 0;
	int8_t x828 = INT8_MIN;
	volatile int32_t t182 = 4158615;

    t182 = (x825^((x826!=x827)-x828));

    if (t182 != -2147483519) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x833 = -671;
	volatile uint8_t x834 = 107U;
	uint8_t x835 = UINT8_MAX;
	int32_t x836 = 55;
	int32_t t183 = 683492;

    t183 = (x833^((x834!=x835)-x836));

    if (t183 != 683) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x837 = 923LLU;
	static uint64_t x838 = UINT64_MAX;
	uint8_t x840 = 0U;

    t184 = (x837^((x838!=x839)-x840));

    if (t184 != 922LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x841 = INT16_MIN;
	int32_t x842 = INT32_MIN;
	volatile int16_t x844 = 1;
	int32_t t185 = 64071;

    t185 = (x841^((x842!=x843)-x844));

    if (t185 != -32768) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x845 = -3;
	static int32_t t186 = -2667997;

    t186 = (x845^((x846!=x847)-x848));

    if (t186 != -4) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x849 = UINT32_MAX;
	static volatile int8_t x851 = -1;
	static volatile uint32_t t187 = 3307577U;

    t187 = (x849^((x850!=x851)-x852));

    if (t187 != 4294967293U) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x853 = UINT64_MAX;
	volatile int8_t x854 = INT8_MIN;
	int32_t x855 = INT32_MIN;
	volatile uint64_t t188 = 0LLU;

    t188 = (x853^((x854!=x855)-x856));

    if (t188 != 1LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x857 = INT16_MIN;
	uint32_t x858 = UINT32_MAX;
	int16_t x859 = -35;
	uint8_t x860 = 1U;
	volatile int32_t t189 = 485;

    t189 = (x857^((x858!=x859)-x860));

    if (t189 != -32768) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x861 = INT32_MIN;
	volatile int8_t x862 = -59;
	volatile int32_t x863 = 42382;
	int16_t x864 = -1;
	int32_t t190 = -7395430;

    t190 = (x861^((x862!=x863)-x864));

    if (t190 != -2147483646) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x865 = INT16_MIN;
	volatile int8_t x866 = -1;
	int16_t x867 = -1;
	int64_t x868 = INT64_MAX;
	volatile int64_t t191 = -31547147LL;

    t191 = (x865^((x866!=x867)-x868));

    if (t191 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile int32_t x873 = INT32_MIN;
	volatile int64_t x874 = INT64_MIN;
	static int8_t x875 = INT8_MAX;
	int16_t x876 = INT16_MAX;
	static int32_t t192 = -375464;

    t192 = (x873^((x874!=x875)-x876));

    if (t192 != 2147450882) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint8_t x877 = 5U;
	int32_t x878 = INT32_MIN;
	int16_t x880 = -3;
	volatile int32_t t193 = 140;

    t193 = (x877^((x878!=x879)-x880));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile int32_t x881 = INT32_MIN;
	volatile int32_t x882 = INT32_MIN;

    t194 = (x881^((x882!=x883)-x884));

    if (t194 != 9223372034707292162LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x887 = 0;
	int8_t x888 = INT8_MIN;
	int32_t t195 = -1085;

    t195 = (x885^((x886!=x887)-x888));

    if (t195 != -32639) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x889 = UINT8_MAX;
	int8_t x891 = INT8_MIN;
	static int8_t x892 = INT8_MIN;
	int32_t t196 = 5644;

    t196 = (x889^((x890!=x891)-x892));

    if (t196 != 126) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x893 = INT8_MIN;
	static uint8_t x894 = UINT8_MAX;
	volatile uint16_t x895 = 0U;
	static uint8_t x896 = 1U;
	volatile int32_t t197 = 0;

    t197 = (x893^((x894!=x895)-x896));

    if (t197 != -128) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x898 = UINT32_MAX;
	int8_t x899 = INT8_MIN;
	static uint16_t x900 = UINT16_MAX;
	volatile int32_t t198 = 390812;

    t198 = (x897^((x898!=x899)-x900));

    if (t198 != 65533) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x901 = 325U;
	int8_t x902 = -1;
	volatile uint16_t x903 = UINT16_MAX;
	uint32_t x904 = UINT32_MAX;
	volatile uint32_t t199 = 294U;

    t199 = (x901^((x902!=x903)-x904));

    if (t199 != 327U) { NG(); } else { ; }
	
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

