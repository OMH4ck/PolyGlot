
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
static int8_t x2 = INT8_MIN;
uint16_t x9 = UINT16_MAX;
int8_t x14 = -22;
int16_t x16 = -14;
uint32_t x23 = 7206658U;
uint32_t x24 = 7U;
uint64_t x26 = 3807928693556771878LLU;
int8_t x37 = -1;
int8_t x42 = INT8_MIN;
static volatile int16_t x46 = INT16_MAX;
volatile int64_t x47 = INT64_MIN;
volatile uint64_t t10 = UINT64_MAX;
volatile int64_t x49 = 2137LL;
int16_t x50 = INT16_MAX;
int32_t x53 = 17141054;
int16_t x61 = -1;
int8_t x63 = -1;
int64_t x64 = -205062728911034506LL;
volatile int64_t t14 = -30LL;
uint16_t x68 = 2146U;
volatile uint64_t t15 = 356412034LLU;
static uint64_t x69 = UINT64_MAX;
static int64_t x71 = -27232608412420LL;
uint64_t x75 = 38361908891LLU;
static int16_t x86 = -36;
int8_t x87 = INT8_MAX;
uint64_t x91 = 116456055LLU;
uint64_t t21 = UINT64_MAX;
static uint32_t x94 = 12411U;
uint8_t x95 = 99U;
static volatile uint64_t t22 = UINT64_MAX;
static volatile int64_t t23 = 141LL;
volatile int32_t x101 = INT32_MIN;
int8_t x103 = -29;
uint16_t x104 = UINT16_MAX;
volatile int16_t x106 = -1;
int8_t x109 = INT8_MIN;
int16_t x112 = INT16_MIN;
volatile uint16_t x128 = 243U;
int32_t t28 = 7;
uint8_t x129 = 5U;
int16_t x143 = INT16_MIN;
int8_t x146 = INT8_MAX;
uint32_t t33 = 1871U;
int64_t x154 = -1LL;
static volatile uint16_t x158 = 6448U;
static int16_t x165 = -14527;
volatile int32_t x167 = -59235;
volatile int16_t x168 = INT16_MIN;
uint64_t x169 = 9059507318366LLU;
uint32_t x171 = 765401955U;
volatile uint16_t x176 = 0U;
uint32_t x180 = 488754U;
uint64_t x182 = 9114604LLU;
static volatile uint32_t t44 = 0U;
int32_t x195 = INT32_MIN;
int32_t x201 = -1;
int8_t x205 = INT8_MIN;
uint32_t x214 = UINT32_MAX;
static int64_t x215 = -259334785477LL;
volatile uint16_t x223 = 15U;
static int32_t x229 = 63115;
int8_t x234 = 13;
int8_t x237 = INT8_MIN;
volatile uint8_t x240 = 3U;
static int32_t x243 = -13420;
int64_t x245 = INT64_MIN;
uint32_t x250 = UINT32_MAX;
int16_t x256 = INT16_MIN;
static int8_t x258 = -1;
int16_t x259 = -1;
int64_t x268 = -1LL;
static volatile int64_t x270 = 7119993828LL;
int16_t x274 = INT16_MIN;
int8_t x284 = INT8_MIN;
int64_t x288 = -8211970742LL;
int16_t x290 = -13;
volatile int64_t t69 = -278LL;
volatile uint8_t x293 = 0U;
int32_t x305 = -1;
int64_t x309 = INT64_MIN;
int32_t x310 = -1;
int64_t x312 = 14LL;
uint16_t x313 = 106U;
int32_t x315 = INT32_MIN;
int8_t x319 = INT8_MIN;
volatile uint32_t x333 = UINT32_MAX;
uint16_t x346 = UINT16_MAX;
int16_t x354 = INT16_MIN;
uint8_t x357 = 3U;
int64_t x359 = INT64_MAX;
volatile uint32_t x361 = UINT32_MAX;
static uint32_t x367 = 1930U;
uint32_t t87 = 13386582U;
static int32_t x374 = INT32_MAX;
volatile int64_t t88 = -1118928694979692LL;
uint32_t t90 = 70U;
uint32_t x399 = 10919U;
static int8_t x404 = -30;
volatile uint16_t x409 = 2142U;
static uint32_t x414 = UINT32_MAX;
int64_t x415 = INT64_MIN;
int32_t x417 = -1;
int32_t x421 = INT32_MIN;
uint64_t x426 = 24185071305LLU;
int8_t x428 = INT8_MAX;
int32_t x434 = 30701;
int64_t x443 = INT64_MIN;
int64_t t101 = -356169196255771LL;
int64_t x452 = 338337500477LL;
volatile uint64_t t103 = 10182011423774LLU;
int64_t x463 = INT64_MAX;
volatile int16_t x467 = -1;
uint64_t x468 = UINT64_MAX;
volatile uint64_t t107 = UINT64_MAX;
volatile int64_t t108 = 35000LL;
int16_t x479 = INT16_MAX;
int64_t x488 = INT64_MIN;
static volatile uint64_t x503 = 403719679489LLU;
static uint16_t x504 = 243U;
volatile int32_t t116 = 1381894;
int8_t x518 = 59;
uint64_t t119 = 3780625LLU;
int64_t t120 = -2269445771172217681LL;
volatile int64_t t121 = -2347208383301LL;
uint64_t x544 = 36660567421380LLU;
uint8_t x546 = UINT8_MAX;
static int8_t x548 = -1;
int64_t x556 = -1LL;
volatile uint64_t t126 = UINT64_MAX;
uint16_t x558 = 0U;
uint64_t x567 = UINT64_MAX;
int16_t x569 = 0;
int8_t x570 = 1;
int32_t x578 = INT32_MAX;
int32_t x580 = 110424;
volatile int32_t t131 = -300529;
volatile uint64_t x581 = 1903231117LLU;
int16_t x583 = -1;
int8_t x587 = INT8_MAX;
int16_t x588 = INT16_MAX;
int64_t x595 = INT64_MIN;
static volatile int64_t t134 = INT64_MAX;
int32_t x604 = 76976652;
static uint16_t x606 = 1U;
static uint16_t x609 = 0U;
static volatile uint64_t t137 = 84071844962LLU;
volatile uint16_t x617 = 136U;
uint8_t x632 = 9U;
uint16_t x634 = 26970U;
int8_t x635 = INT8_MIN;
static int32_t x636 = -1;
int64_t x640 = INT64_MAX;
volatile int64_t t144 = INT64_MAX;
uint8_t x645 = 1U;
uint8_t x650 = UINT8_MAX;
static uint8_t x657 = 92U;
int64_t t149 = INT64_MAX;
volatile int64_t t150 = 177180775175434LL;
int16_t x670 = -2;
int8_t x676 = INT8_MIN;
int64_t x679 = -1LL;
uint64_t t156 = 36LLU;
int64_t x694 = 897745LL;
int16_t x696 = INT16_MIN;
int64_t x702 = INT64_MIN;
int8_t x715 = -1;
uint8_t x718 = UINT8_MAX;
volatile int16_t x721 = INT16_MIN;
static int16_t x723 = 1451;
volatile int32_t t165 = 856897;
static int16_t x729 = 13762;
int8_t x734 = -1;
volatile int8_t x735 = 1;
static uint8_t x740 = 0U;
uint16_t x747 = UINT16_MAX;
uint32_t x749 = UINT32_MAX;
int16_t x752 = INT16_MIN;
uint32_t t171 = UINT32_MAX;
int64_t x761 = 85478792LL;
static volatile int32_t x762 = -1;
int32_t x771 = 18304;
uint64_t x772 = UINT64_MAX;
static uint32_t x780 = 16481U;
uint64_t t177 = 21175057LLU;
int32_t x783 = INT32_MIN;
uint64_t x798 = 143929142LLU;
volatile uint16_t x799 = 3094U;
static volatile int32_t x802 = -1;
uint64_t t183 = UINT64_MAX;
uint16_t x806 = 45U;
static int8_t x810 = INT8_MIN;
int64_t x825 = 4114655460LL;
static int64_t x830 = INT64_MAX;
volatile uint16_t x832 = 2124U;
int16_t x834 = -1;
int16_t x835 = -1;
int32_t t191 = -266332067;
int16_t x841 = INT16_MAX;
int32_t x845 = -1;
int32_t x847 = INT32_MIN;
static int8_t x856 = INT8_MIN;
uint64_t x859 = 843LLU;
static uint64_t t198 = 608LLU;
int16_t x865 = -1;


void f0(void) {
    	int32_t x3 = -1;
	int8_t x4 = -1;
	int32_t t0 = -2368682;

    t0 = (x1|((x2/x3)+x4));

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x10 = 219;
	uint32_t x11 = UINT32_MAX;
	uint8_t x12 = 1U;
	volatile uint32_t t1 = 417U;

    t1 = (x9|((x10/x11)+x12));

    if (t1 != 65535U) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x13 = 13;
	volatile int64_t x15 = -221077LL;
	static int64_t t2 = -15073325054790LL;

    t2 = (x13|((x14/x15)+x16));

    if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint16_t x17 = 1U;
	uint64_t x18 = UINT64_MAX;
	int8_t x19 = -1;
	int8_t x20 = INT8_MIN;
	uint64_t t3 = 1224158646857213LLU;

    t3 = (x17|((x18/x19)+x20));

    if (t3 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x21 = INT64_MAX;
	static int32_t x22 = INT32_MIN;
	int64_t t4 = INT64_MAX;

    t4 = (x21|((x22/x23)+x24));

    if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x25 = -61961585380485LL;
	int16_t x27 = -1;
	uint16_t x28 = UINT16_MAX;
	static volatile uint64_t t5 = 8539050091114656123LLU;

    t5 = (x25|((x26/x27)+x28));

    if (t5 != 18446682112124190719LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x29 = INT16_MIN;
	uint64_t x30 = 165511628422LLU;
	int32_t x31 = 1;
	int32_t x32 = -1154517;
	volatile uint64_t t6 = 5304LLU;

    t6 = (x29|((x30/x31)+x32));

    if (t6 != 18446744073709545649LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x33 = -1;
	int64_t x34 = -1LL;
	static int8_t x35 = INT8_MIN;
	int16_t x36 = 1;
	int64_t t7 = 746LL;

    t7 = (x33|((x34/x35)+x36));

    if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x38 = -1;
	int8_t x39 = 1;
	int8_t x40 = INT8_MIN;
	int32_t t8 = -1322;

    t8 = (x37|((x38/x39)+x40));

    if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x41 = INT16_MIN;
	int32_t x43 = -683609;
	static uint64_t x44 = 1LLU;
	uint64_t t9 = 19LLU;

    t9 = (x41|((x42/x43)+x44));

    if (t9 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x45 = UINT64_MAX;
	int8_t x48 = -1;

    t10 = (x45|((x46/x47)+x48));

    if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x51 = INT32_MAX;
	static int16_t x52 = 1153;
	volatile int64_t t11 = -123677294LL;

    t11 = (x49|((x50/x51)+x52));

    if (t11 != 3289LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x54 = 1U;
	uint32_t x55 = 2769U;
	int64_t x56 = -134613969479882828LL;
	int64_t t12 = 231LL;

    t12 = (x53|((x54/x55)+x56));

    if (t12 != -134613969479553090LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x57 = INT32_MIN;
	int32_t x58 = INT32_MIN;
	int64_t x59 = INT64_MIN;
	int64_t x60 = INT64_MAX;
	volatile int64_t t13 = 57260250281746618LL;

    t13 = (x57|((x58/x59)+x60));

    if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x62 = -571;

    t14 = (x61|((x62/x63)+x64));

    if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint8_t x65 = UINT8_MAX;
	uint64_t x66 = 176791961813LLU;
	int16_t x67 = INT16_MIN;

    t15 = (x65|((x66/x67)+x68));

    if (t15 != 2303LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x70 = INT8_MIN;
	uint16_t x72 = UINT16_MAX;
	uint64_t t16 = UINT64_MAX;

    t16 = (x69|((x70/x71)+x72));

    if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x73 = -11;
	int32_t x74 = -1;
	static uint16_t x76 = 369U;
	volatile uint64_t t17 = UINT64_MAX;

    t17 = (x73|((x74/x75)+x76));

    if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x77 = UINT8_MAX;
	int64_t x78 = 466762LL;
	static int16_t x79 = INT16_MIN;
	int64_t x80 = INT64_MAX;
	volatile int64_t t18 = INT64_MAX;

    t18 = (x77|((x78/x79)+x80));

    if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x81 = UINT8_MAX;
	int16_t x82 = INT16_MIN;
	uint64_t x83 = 28133096549817LLU;
	uint16_t x84 = 116U;
	volatile uint64_t t19 = 1128286975082267186LLU;

    t19 = (x81|((x82/x83)+x84));

    if (t19 != 655871LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x85 = -1;
	uint16_t x88 = 0U;
	static int32_t t20 = -333;

    t20 = (x85|((x86/x87)+x88));

    if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x89 = UINT64_MAX;
	static int16_t x90 = 107;
	volatile int64_t x92 = -1LL;

    t21 = (x89|((x90/x91)+x92));

    if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x93 = UINT64_MAX;
	volatile int32_t x96 = INT32_MAX;

    t22 = (x93|((x94/x95)+x96));

    if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x97 = INT64_MIN;
	int64_t x98 = INT64_MIN;
	int32_t x99 = 3357;
	uint32_t x100 = 608988U;

    t23 = (x97|((x98/x99)+x100));

    if (t23 != -2747504329702235LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x102 = 2297355256LL;
	volatile int64_t t24 = -5166482LL;

    t24 = (x101|((x102/x103)+x104));

    if (t24 != -79153611LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x105 = 23U;
	uint16_t x107 = UINT16_MAX;
	int16_t x108 = 2;
	int32_t t25 = 5578;

    t25 = (x105|((x106/x107)+x108));

    if (t25 != 23) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x110 = UINT32_MAX;
	static int8_t x111 = INT8_MIN;
	uint32_t t26 = 18U;

    t26 = (x109|((x110/x111)+x112));

    if (t26 != 4294967169U) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x117 = -660;
	uint8_t x118 = 15U;
	uint64_t x119 = 2282493143961811118LLU;
	static int32_t x120 = -1;
	volatile uint64_t t27 = UINT64_MAX;

    t27 = (x117|((x118/x119)+x120));

    if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x125 = 15;
	volatile int16_t x126 = INT16_MIN;
	static int8_t x127 = INT8_MAX;

    t28 = (x125|((x126/x127)+x128));

    if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x130 = INT32_MIN;
	uint16_t x131 = 4518U;
	int32_t x132 = -176509090;
	volatile int32_t t29 = -374;

    t29 = (x129|((x130/x131)+x132));

    if (t29 != -176984403) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x133 = 464514353596340226LLU;
	uint32_t x134 = 32416U;
	int32_t x135 = 6;
	int32_t x136 = INT32_MIN;
	volatile uint64_t t30 = 115712564LLU;

    t30 = (x133|((x134/x135)+x136));

    if (t30 != 464514353596341530LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x137 = 44093163U;
	int16_t x138 = -1;
	int64_t x139 = 15307LL;
	uint32_t x140 = 1775064U;
	int64_t t31 = -353287625947176730LL;

    t31 = (x137|((x138/x139)+x140));

    if (t31 != 45867003LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x141 = INT32_MIN;
	int8_t x142 = INT8_MAX;
	int16_t x144 = -1;
	volatile int32_t t32 = 629;

    t32 = (x141|((x142/x143)+x144));

    if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x145 = INT32_MAX;
	uint32_t x147 = UINT32_MAX;
	uint32_t x148 = 225496U;

    t33 = (x145|((x146/x147)+x148));

    if (t33 != 2147483647U) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int8_t x149 = -1;
	static volatile int64_t x150 = -6743681LL;
	int8_t x151 = INT8_MAX;
	int16_t x152 = 0;
	static int64_t t34 = 4051844604416LL;

    t34 = (x149|((x150/x151)+x152));

    if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x153 = 27062176857LLU;
	static int8_t x155 = INT8_MIN;
	int64_t x156 = INT64_MIN;
	volatile uint64_t t35 = 34144041LLU;

    t35 = (x153|((x154/x155)+x156));

    if (t35 != 9223372063916952665LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x157 = -1;
	static int32_t x159 = INT32_MIN;
	int32_t x160 = 197133752;
	int32_t t36 = 39838693;

    t36 = (x157|((x158/x159)+x160));

    if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x161 = -8654298;
	uint32_t x162 = 166571152U;
	uint32_t x163 = UINT32_MAX;
	int16_t x164 = INT16_MAX;
	volatile uint32_t t37 = 895868U;

    t37 = (x161|((x162/x163)+x164));

    if (t37 != 4286316543U) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int32_t x166 = -598167;
	int32_t t38 = -50364578;

    t38 = (x165|((x166/x167)+x168));

    if (t38 != -14517) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x170 = 5402U;
	volatile uint16_t x172 = UINT16_MAX;
	uint64_t t39 = 66416129LLU;

    t39 = (x169|((x170/x171)+x172));

    if (t39 != 9059507372031LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x173 = 1LL;
	uint8_t x174 = UINT8_MAX;
	int32_t x175 = INT32_MIN;
	volatile int64_t t40 = -64851769LL;

    t40 = (x173|((x174/x175)+x176));

    if (t40 != 1LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x177 = -1LL;
	int8_t x178 = -26;
	int8_t x179 = INT8_MAX;
	int64_t t41 = -135857LL;

    t41 = (x177|((x178/x179)+x180));

    if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x181 = INT64_MAX;
	int64_t x183 = INT64_MIN;
	static volatile int64_t x184 = 139266368647LL;
	volatile uint64_t t42 = 33368707046LLU;

    t42 = (x181|((x182/x183)+x184));

    if (t42 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint16_t x185 = 289U;
	static int64_t x186 = -34236784536083LL;
	int32_t x187 = INT32_MIN;
	int8_t x188 = INT8_MIN;
	volatile int64_t t43 = -1378485713639832LL;

    t43 = (x185|((x186/x187)+x188));

    if (t43 != 15847LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x189 = 462531655U;
	static uint16_t x190 = UINT16_MAX;
	int32_t x191 = INT32_MIN;
	static uint32_t x192 = 25806U;

    t44 = (x189|((x190/x191)+x192));

    if (t44 != 462548175U) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x193 = 1826664100U;
	volatile int64_t x194 = -1980251380LL;
	int64_t x196 = 3530LL;
	volatile int64_t t45 = 0LL;

    t45 = (x193|((x194/x195)+x196));

    if (t45 != 1826664430LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x197 = 30U;
	static int64_t x198 = INT64_MIN;
	int32_t x199 = -2033;
	int8_t x200 = 2;
	int64_t t46 = 234531443LL;

    t46 = (x197|((x198/x199)+x200));

    if (t46 != 4536828350641822LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x202 = INT64_MAX;
	uint16_t x203 = 3881U;
	int32_t x204 = INT32_MAX;
	static volatile int64_t t47 = -4421400271LL;

    t47 = (x201|((x202/x203)+x204));

    if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x206 = -1;
	volatile int8_t x207 = INT8_MIN;
	volatile int32_t x208 = INT32_MIN;
	static volatile int32_t t48 = 421;

    t48 = (x205|((x206/x207)+x208));

    if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x209 = UINT8_MAX;
	uint16_t x210 = UINT16_MAX;
	int64_t x211 = INT64_MIN;
	uint64_t x212 = 0LLU;
	uint64_t t49 = 111560019LLU;

    t49 = (x209|((x210/x211)+x212));

    if (t49 != 255LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x213 = INT64_MAX;
	uint64_t x216 = 265244143LLU;
	volatile uint64_t t50 = 431675LLU;

    t50 = (x213|((x214/x215)+x216));

    if (t50 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x217 = -28;
	int64_t x218 = INT64_MIN;
	static int16_t x219 = INT16_MIN;
	int16_t x220 = 1;
	volatile int64_t t51 = 105LL;

    t51 = (x217|((x218/x219)+x220));

    if (t51 != -27LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x221 = 4U;
	static int32_t x222 = INT32_MIN;
	int8_t x224 = INT8_MAX;
	int32_t t52 = -15;

    t52 = (x221|((x222/x223)+x224));

    if (t52 != -143165449) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x225 = 6788U;
	int16_t x226 = INT16_MIN;
	uint64_t x227 = UINT64_MAX;
	volatile uint32_t x228 = 224766096U;
	static uint64_t t53 = 26004288284LLU;

    t53 = (x225|((x226/x227)+x228));

    if (t53 != 224770708LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x230 = -1LL;
	int8_t x231 = -1;
	volatile int32_t x232 = -1694457;
	volatile int64_t t54 = -500614509267LL;

    t54 = (x229|((x230/x231)+x232));

    if (t54 != -1640565LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x233 = -6;
	int32_t x235 = 1;
	int32_t x236 = INT32_MIN;
	static volatile int32_t t55 = -115300102;

    t55 = (x233|((x234/x235)+x236));

    if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x238 = 7U;
	int16_t x239 = INT16_MIN;
	volatile int32_t t56 = 402951;

    t56 = (x237|((x238/x239)+x240));

    if (t56 != -125) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x241 = INT64_MAX;
	int8_t x242 = INT8_MAX;
	uint16_t x244 = 24809U;
	int64_t t57 = INT64_MAX;

    t57 = (x241|((x242/x243)+x244));

    if (t57 != INT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x246 = INT32_MAX;
	uint64_t x247 = UINT64_MAX;
	int32_t x248 = INT32_MAX;
	static uint64_t t58 = 0LLU;

    t58 = (x245|((x246/x247)+x248));

    if (t58 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x249 = INT8_MAX;
	uint64_t x251 = UINT64_MAX;
	volatile int32_t x252 = 50697;
	volatile uint64_t t59 = 191371952995943593LLU;

    t59 = (x249|((x250/x251)+x252));

    if (t59 != 50815LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x253 = 10;
	static int8_t x254 = INT8_MIN;
	int8_t x255 = -1;
	int32_t t60 = 108451;

    t60 = (x253|((x254/x255)+x256));

    if (t60 != -32630) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x257 = 125U;
	int32_t x260 = 8408805;
	volatile int32_t t61 = -53156;

    t61 = (x257|((x258/x259)+x260));

    if (t61 != 8408831) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x261 = INT32_MAX;
	static int16_t x262 = -1;
	int8_t x263 = INT8_MIN;
	static int64_t x264 = INT64_MIN;
	int64_t t62 = 360188979732LL;

    t62 = (x261|((x262/x263)+x264));

    if (t62 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x265 = 2822U;
	uint8_t x266 = UINT8_MAX;
	int16_t x267 = INT16_MIN;
	volatile int64_t t63 = 401LL;

    t63 = (x265|((x266/x267)+x268));

    if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x269 = -1;
	uint8_t x271 = UINT8_MAX;
	int16_t x272 = INT16_MIN;
	volatile int64_t t64 = 1LL;

    t64 = (x269|((x270/x271)+x272));

    if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x273 = 12102U;
	volatile uint64_t x275 = 3922471990807524559LLU;
	volatile int8_t x276 = -1;
	uint64_t t65 = 4632747303588672LLU;

    t65 = (x273|((x274/x275)+x276));

    if (t65 != 12103LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x277 = INT16_MAX;
	int16_t x278 = INT16_MIN;
	volatile int8_t x279 = INT8_MIN;
	static int32_t x280 = INT32_MIN;
	volatile int32_t t66 = 46018;

    t66 = (x277|((x278/x279)+x280));

    if (t66 != -2147450881) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x281 = UINT32_MAX;
	static int32_t x282 = -11;
	volatile int64_t x283 = INT64_MIN;
	int64_t t67 = -25223091272LL;

    t67 = (x281|((x282/x283)+x284));

    if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x285 = 14101;
	static int32_t x286 = 0;
	static int32_t x287 = INT32_MIN;
	volatile int64_t t68 = 1165591433648LL;

    t68 = (x285|((x286/x287)+x288));

    if (t68 != -8211957921LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x289 = -1;
	int64_t x291 = INT64_MAX;
	static int64_t x292 = 1581626772684434LL;

    t69 = (x289|((x290/x291)+x292));

    if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x294 = -1;
	int8_t x295 = -6;
	volatile int32_t x296 = INT32_MIN;
	static volatile int32_t t70 = INT32_MIN;

    t70 = (x293|((x294/x295)+x296));

    if (t70 != INT32_MIN) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x297 = INT16_MIN;
	static uint16_t x298 = UINT16_MAX;
	int8_t x299 = INT8_MAX;
	static uint64_t x300 = UINT64_MAX;
	volatile uint64_t t71 = 3518293LLU;

    t71 = (x297|((x298/x299)+x300));

    if (t71 != 18446744073709519363LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x301 = 5866U;
	int64_t x302 = INT64_MIN;
	uint32_t x303 = 139U;
	uint64_t x304 = 3379154655731388757LLU;
	static volatile uint64_t t72 = 2014849062LLU;

    t72 = (x301|((x302/x303)+x304));

    if (t72 != 3312799461221646331LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x306 = 1U;
	int32_t x307 = INT32_MIN;
	volatile int32_t x308 = -56620322;
	volatile uint32_t t73 = UINT32_MAX;

    t73 = (x305|((x306/x307)+x308));

    if (t73 != UINT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x311 = INT16_MAX;
	volatile int64_t t74 = 0LL;

    t74 = (x309|((x310/x311)+x312));

    if (t74 != -9223372036854775794LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x314 = 1709;
	int8_t x316 = INT8_MIN;
	static int32_t t75 = -8;

    t75 = (x313|((x314/x315)+x316));

    if (t75 != -22) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x317 = 1;
	int8_t x318 = -16;
	int16_t x320 = INT16_MIN;
	int32_t t76 = 267377277;

    t76 = (x317|((x318/x319)+x320));

    if (t76 != -32767) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x321 = 66U;
	uint32_t x322 = 11363U;
	int32_t x323 = INT32_MIN;
	int8_t x324 = INT8_MAX;
	volatile uint32_t t77 = 574966U;

    t77 = (x321|((x322/x323)+x324));

    if (t77 != 127U) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int8_t x329 = 8;
	int8_t x330 = 44;
	int16_t x331 = -1;
	int32_t x332 = 1;
	volatile int32_t t78 = -3864169;

    t78 = (x329|((x330/x331)+x332));

    if (t78 != -35) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile int16_t x334 = -1;
	int32_t x335 = -12963759;
	uint8_t x336 = 70U;
	volatile uint32_t t79 = UINT32_MAX;

    t79 = (x333|((x334/x335)+x336));

    if (t79 != UINT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x337 = UINT64_MAX;
	static volatile int64_t x338 = INT64_MIN;
	int16_t x339 = INT16_MAX;
	int16_t x340 = INT16_MIN;
	uint64_t t80 = UINT64_MAX;

    t80 = (x337|((x338/x339)+x340));

    if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x341 = INT64_MAX;
	uint8_t x342 = UINT8_MAX;
	volatile int16_t x343 = INT16_MIN;
	static int32_t x344 = -4322;
	static int64_t t81 = -223673959136LL;

    t81 = (x341|((x342/x343)+x344));

    if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x345 = INT64_MAX;
	uint64_t x347 = UINT64_MAX;
	int8_t x348 = 1;
	volatile uint64_t t82 = 22161LLU;

    t82 = (x345|((x346/x347)+x348));

    if (t82 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x349 = -1LL;
	uint64_t x350 = UINT64_MAX;
	static int64_t x351 = INT64_MIN;
	uint32_t x352 = UINT32_MAX;
	uint64_t t83 = UINT64_MAX;

    t83 = (x349|((x350/x351)+x352));

    if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x353 = -142536267384336900LL;
	uint64_t x355 = 6544852841LLU;
	static int16_t x356 = INT16_MAX;
	uint64_t t84 = 669875304LLU;

    t84 = (x353|((x354/x355)+x356));

    if (t84 != 18304207809027235839LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x358 = INT8_MIN;
	static int64_t x360 = INT64_MIN;
	int64_t t85 = -17586027858986LL;

    t85 = (x357|((x358/x359)+x360));

    if (t85 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x362 = 104537727U;
	int32_t x363 = INT32_MAX;
	int16_t x364 = -1;
	uint32_t t86 = UINT32_MAX;

    t86 = (x361|((x362/x363)+x364));

    if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x365 = INT16_MAX;
	uint16_t x366 = 1U;
	static uint16_t x368 = 3438U;

    t87 = (x365|((x366/x367)+x368));

    if (t87 != 32767U) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x373 = INT64_MIN;
	int16_t x375 = -89;
	static int8_t x376 = -1;

    t88 = (x373|((x374/x375)+x376));

    if (t88 != -24129030LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x377 = -1;
	int8_t x378 = INT8_MIN;
	int64_t x379 = INT64_MIN;
	int8_t x380 = INT8_MIN;
	int64_t t89 = -1LL;

    t89 = (x377|((x378/x379)+x380));

    if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x381 = INT16_MAX;
	static uint32_t x382 = 173375453U;
	int32_t x383 = -917054597;
	uint8_t x384 = 5U;

    t90 = (x381|((x382/x383)+x384));

    if (t90 != 32767U) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x397 = INT16_MIN;
	int8_t x398 = -1;
	uint8_t x400 = UINT8_MAX;
	uint32_t t91 = 46514U;

    t91 = (x397|((x398/x399)+x400));

    if (t91 != 4294934915U) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x401 = 1;
	static volatile uint8_t x402 = 0U;
	volatile int64_t x403 = INT64_MIN;
	static int64_t t92 = 311534574LL;

    t92 = (x401|((x402/x403)+x404));

    if (t92 != -29LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile int16_t x405 = INT16_MAX;
	int16_t x406 = 13553;
	static uint32_t x407 = 17584U;
	static int8_t x408 = -1;
	static uint32_t t93 = UINT32_MAX;

    t93 = (x405|((x406/x407)+x408));

    if (t93 != UINT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int16_t x410 = INT16_MIN;
	static int64_t x411 = INT64_MIN;
	int64_t x412 = INT64_MAX;
	int64_t t94 = INT64_MAX;

    t94 = (x409|((x410/x411)+x412));

    if (t94 != INT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x413 = INT16_MIN;
	static int64_t x416 = INT64_MIN;
	volatile int64_t t95 = 48480423114LL;

    t95 = (x413|((x414/x415)+x416));

    if (t95 != -32768LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x418 = INT32_MIN;
	volatile uint16_t x419 = 116U;
	uint16_t x420 = UINT16_MAX;
	int32_t t96 = -89546949;

    t96 = (x417|((x418/x419)+x420));

    if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
    	static int64_t x422 = -1LL;
	uint64_t x423 = 90103384126LLU;
	int8_t x424 = 1;
	volatile uint64_t t97 = 460705821424080LLU;

    t97 = (x421|((x422/x423)+x424));

    if (t97 != 18446744071766796617LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x425 = 1;
	int64_t x427 = INT64_MIN;
	uint64_t t98 = 5112104LLU;

    t98 = (x425|((x426/x427)+x428));

    if (t98 != 127LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x429 = -1;
	volatile uint32_t x430 = UINT32_MAX;
	int8_t x431 = -1;
	int32_t x432 = -104266945;
	static uint32_t t99 = UINT32_MAX;

    t99 = (x429|((x430/x431)+x432));

    if (t99 != UINT32_MAX) { NG(); } else { ; }
	
}

void f100(void) {
    	static int16_t x433 = INT16_MIN;
	int64_t x435 = 172509819473813LL;
	int64_t x436 = -1LL;
	int64_t t100 = -5315270529478LL;

    t100 = (x433|((x434/x435)+x436));

    if (t100 != -1LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x441 = -10;
	int8_t x442 = -9;
	int64_t x444 = INT64_MAX;

    t101 = (x441|((x442/x443)+x444));

    if (t101 != -1LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x445 = UINT64_MAX;
	static int64_t x446 = -605219793LL;
	int32_t x447 = -1;
	int8_t x448 = INT8_MIN;
	static uint64_t t102 = UINT64_MAX;

    t102 = (x445|((x446/x447)+x448));

    if (t102 != UINT64_MAX) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint8_t x449 = 1U;
	uint64_t x450 = UINT64_MAX;
	int64_t x451 = INT64_MIN;

    t103 = (x449|((x450/x451)+x452));

    if (t103 != 338337500479LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x453 = INT64_MIN;
	static int8_t x454 = INT8_MIN;
	int64_t x455 = INT64_MIN;
	int32_t x456 = INT32_MIN;
	volatile int64_t t104 = -1096336556606LL;

    t104 = (x453|((x454/x455)+x456));

    if (t104 != -2147483648LL) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int64_t x457 = 30746733LL;
	uint64_t x458 = UINT64_MAX;
	uint32_t x459 = UINT32_MAX;
	uint32_t x460 = 1958U;
	uint64_t t105 = 8430513297LLU;

    t105 = (x457|((x458/x459)+x460));

    if (t105 != 4325715951LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint64_t x461 = UINT64_MAX;
	static int64_t x462 = INT64_MAX;
	uint32_t x464 = 4997210U;
	volatile uint64_t t106 = UINT64_MAX;

    t106 = (x461|((x462/x463)+x464));

    if (t106 != UINT64_MAX) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x465 = -1LL;
	int64_t x466 = -110LL;

    t107 = (x465|((x466/x467)+x468));

    if (t107 != UINT64_MAX) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int64_t x469 = INT64_MIN;
	static uint8_t x470 = 0U;
	int32_t x471 = INT32_MIN;
	uint32_t x472 = 186008478U;

    t108 = (x469|((x470/x471)+x472));

    if (t108 != -9223372036668767330LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x473 = INT64_MIN;
	static volatile int64_t x474 = -2694871168882093LL;
	int8_t x475 = -1;
	static int32_t x476 = INT32_MAX;
	int64_t t109 = 603036545812798974LL;

    t109 = (x473|((x474/x475)+x476));

    if (t109 != -9220677163538410068LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint16_t x477 = 2812U;
	static int16_t x478 = INT16_MIN;
	volatile int32_t x480 = -531;
	volatile int32_t t110 = 974509414;

    t110 = (x477|((x478/x479)+x480));

    if (t110 != -4) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x481 = UINT64_MAX;
	int64_t x482 = -83LL;
	int32_t x483 = -1;
	int16_t x484 = -574;
	volatile uint64_t t111 = UINT64_MAX;

    t111 = (x481|((x482/x483)+x484));

    if (t111 != UINT64_MAX) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x485 = 0;
	static uint8_t x486 = 23U;
	volatile uint32_t x487 = UINT32_MAX;
	int64_t t112 = INT64_MIN;

    t112 = (x485|((x486/x487)+x488));

    if (t112 != INT64_MIN) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x497 = UINT32_MAX;
	static int16_t x498 = -1;
	uint16_t x499 = 7U;
	int16_t x500 = -1;
	static uint32_t t113 = UINT32_MAX;

    t113 = (x497|((x498/x499)+x500));

    if (t113 != UINT32_MAX) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x501 = 9139U;
	volatile uint8_t x502 = UINT8_MAX;
	static volatile uint64_t t114 = 882412LLU;

    t114 = (x501|((x502/x503)+x504));

    if (t114 != 9203LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x505 = UINT8_MAX;
	int32_t x506 = 273660;
	uint64_t x507 = UINT64_MAX;
	volatile uint16_t x508 = UINT16_MAX;
	uint64_t t115 = 39222500LLU;

    t115 = (x505|((x506/x507)+x508));

    if (t115 != 65535LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x509 = UINT16_MAX;
	int16_t x510 = INT16_MAX;
	int16_t x511 = -1;
	int32_t x512 = -22373;

    t116 = (x509|((x510/x511)+x512));

    if (t116 != -1) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile uint16_t x513 = 199U;
	volatile int32_t x514 = 512192236;
	volatile int8_t x515 = 1;
	int32_t x516 = 3;
	int32_t t117 = -181761;

    t117 = (x513|((x514/x515)+x516));

    if (t117 != 512192239) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x517 = INT16_MIN;
	int32_t x519 = INT32_MIN;
	int16_t x520 = -1;
	int32_t t118 = -307545;

    t118 = (x517|((x518/x519)+x520));

    if (t118 != -1) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x525 = INT8_MAX;
	static int64_t x526 = 6129826677553323LL;
	static uint8_t x527 = 1U;
	uint64_t x528 = 5865187028214499727LLU;

    t119 = (x525|((x526/x527)+x528));

    if (t119 != 5871316854892053119LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x529 = 217;
	static uint32_t x530 = 7374U;
	static volatile int64_t x531 = INT64_MIN;
	static int64_t x532 = -64424646503LL;

    t120 = (x529|((x530/x531)+x532));

    if (t120 != -64424646439LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x533 = -1;
	int16_t x534 = INT16_MIN;
	static volatile int16_t x535 = INT16_MIN;
	int64_t x536 = INT64_MIN;

    t121 = (x533|((x534/x535)+x536));

    if (t121 != -1LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x537 = 4U;
	static int64_t x538 = 579354341092383476LL;
	int8_t x539 = -1;
	volatile uint32_t x540 = 1025650U;
	volatile int64_t t122 = -212LL;

    t122 = (x537|((x538/x539)+x540));

    if (t122 != -579354341091357826LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x541 = 11200U;
	volatile int32_t x542 = 651539;
	uint8_t x543 = 91U;
	volatile uint64_t t123 = 5472885049425720LLU;

    t123 = (x541|((x542/x543)+x544));

    if (t123 != 36660567437307LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x545 = -1;
	uint64_t x547 = UINT64_MAX;
	uint64_t t124 = UINT64_MAX;

    t124 = (x545|((x546/x547)+x548));

    if (t124 != UINT64_MAX) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x549 = 1706U;
	int16_t x550 = INT16_MAX;
	int64_t x551 = INT64_MIN;
	int32_t x552 = INT32_MIN;
	static volatile int64_t t125 = -56321636597101LL;

    t125 = (x549|((x550/x551)+x552));

    if (t125 != -2147481942LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint64_t x553 = UINT64_MAX;
	static uint16_t x554 = UINT16_MAX;
	volatile int8_t x555 = 1;

    t126 = (x553|((x554/x555)+x556));

    if (t126 != UINT64_MAX) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x557 = 13983U;
	static int64_t x559 = -742990LL;
	static int32_t x560 = 82552602;
	volatile int64_t t127 = -56720958698LL;

    t127 = (x557|((x558/x559)+x560));

    if (t127 != 82556831LL) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint16_t x565 = 1281U;
	static volatile int16_t x566 = INT16_MIN;
	static int32_t x568 = -28;
	volatile uint64_t t128 = 1LLU;

    t128 = (x565|((x566/x567)+x568));

    if (t128 != 18446744073709551589LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint32_t x571 = 4U;
	int8_t x572 = INT8_MIN;
	volatile uint32_t t129 = 105190670U;

    t129 = (x569|((x570/x571)+x572));

    if (t129 != 4294967168U) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x573 = 2;
	uint64_t x574 = UINT64_MAX;
	uint16_t x575 = 1U;
	uint8_t x576 = 0U;
	uint64_t t130 = UINT64_MAX;

    t130 = (x573|((x574/x575)+x576));

    if (t130 != UINT64_MAX) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t x577 = -8241331;
	int32_t x579 = INT32_MIN;

    t131 = (x577|((x578/x579)+x580));

    if (t131 != -8143011) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint64_t x582 = 7608864222LLU;
	volatile int64_t x584 = 126401334LL;
	volatile uint64_t t132 = 3LLU;

    t132 = (x581|((x582/x583)+x584));

    if (t132 != 2012855231LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x585 = INT32_MIN;
	volatile uint8_t x586 = 82U;
	volatile int32_t t133 = -181;

    t133 = (x585|((x586/x587)+x588));

    if (t133 != -2147450881) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x593 = 0U;
	static int32_t x594 = INT32_MIN;
	int64_t x596 = INT64_MAX;

    t134 = (x593|((x594/x595)+x596));

    if (t134 != INT64_MAX) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x601 = -1LL;
	volatile int8_t x602 = INT8_MIN;
	static uint64_t x603 = 11476633007314LLU;
	uint64_t t135 = UINT64_MAX;

    t135 = (x601|((x602/x603)+x604));

    if (t135 != UINT64_MAX) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint8_t x605 = UINT8_MAX;
	uint16_t x607 = 1U;
	uint16_t x608 = 4855U;
	int32_t t136 = -10085951;

    t136 = (x605|((x606/x607)+x608));

    if (t136 != 4863) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x610 = INT32_MIN;
	uint8_t x611 = 63U;
	uint64_t x612 = UINT64_MAX;

    t137 = (x609|((x610/x611)+x612));

    if (t137 != 18446744073675464573LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x613 = 167896291U;
	int64_t x614 = -715737LL;
	uint16_t x615 = 60U;
	uint8_t x616 = UINT8_MAX;
	volatile int64_t t138 = -9111282LL;

    t138 = (x613|((x614/x615)+x616));

    if (t138 != -2329LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x618 = INT16_MIN;
	int16_t x619 = -1;
	static int64_t x620 = -1LL;
	volatile int64_t t139 = 170247482482415LL;

    t139 = (x617|((x618/x619)+x620));

    if (t139 != 32767LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint16_t x621 = 307U;
	int8_t x622 = INT8_MIN;
	int16_t x623 = INT16_MIN;
	uint64_t x624 = UINT64_MAX;
	uint64_t t140 = UINT64_MAX;

    t140 = (x621|((x622/x623)+x624));

    if (t140 != UINT64_MAX) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x625 = -26377;
	int64_t x626 = INT64_MIN;
	int32_t x627 = -6832475;
	int32_t x628 = INT32_MIN;
	volatile int64_t t141 = -1840848361500LL;

    t141 = (x625|((x626/x627)+x628));

    if (t141 != -9481LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x629 = INT32_MIN;
	static int8_t x630 = 1;
	uint16_t x631 = 44U;
	int32_t t142 = 26444;

    t142 = (x629|((x630/x631)+x632));

    if (t142 != -2147483639) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x633 = 3;
	volatile int32_t t143 = -3910;

    t143 = (x633|((x634/x635)+x636));

    if (t143 != -209) { NG(); } else { ; }
	
}

void f144(void) {
    	static int64_t x637 = INT64_MAX;
	uint8_t x638 = 2U;
	int16_t x639 = INT16_MAX;

    t144 = (x637|((x638/x639)+x640));

    if (t144 != INT64_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x641 = INT8_MIN;
	static uint8_t x642 = UINT8_MAX;
	int32_t x643 = INT32_MAX;
	static uint64_t x644 = 9900731269758714LLU;
	uint64_t t145 = 5009285LLU;

    t145 = (x641|((x642/x643)+x644));

    if (t145 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x646 = 6;
	volatile uint64_t x647 = 349861538946534LLU;
	uint16_t x648 = 401U;
	volatile uint64_t t146 = 7199709573023405LLU;

    t146 = (x645|((x646/x647)+x648));

    if (t146 != 401LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x649 = -131431027214185902LL;
	static volatile int64_t x651 = INT64_MIN;
	int8_t x652 = INT8_MAX;
	int64_t t147 = 73782396047329757LL;

    t147 = (x649|((x650/x651)+x652));

    if (t147 != -131431027214185857LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x653 = 12U;
	int8_t x654 = INT8_MAX;
	int64_t x655 = INT64_MIN;
	int16_t x656 = -1;
	volatile int64_t t148 = -3361122464101247LL;

    t148 = (x653|((x654/x655)+x656));

    if (t148 != -1LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x658 = INT16_MAX;
	int64_t x659 = -430671347LL;
	int64_t x660 = INT64_MAX;

    t149 = (x657|((x658/x659)+x660));

    if (t149 != INT64_MAX) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x661 = INT8_MIN;
	uint16_t x662 = 1664U;
	int64_t x663 = INT64_MIN;
	volatile uint32_t x664 = UINT32_MAX;

    t150 = (x661|((x662/x663)+x664));

    if (t150 != -1LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x665 = -1;
	static int16_t x666 = INT16_MIN;
	int64_t x667 = INT64_MIN;
	uint16_t x668 = 0U;
	volatile int64_t t151 = 21894570832055947LL;

    t151 = (x665|((x666/x667)+x668));

    if (t151 != -1LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint8_t x669 = 20U;
	volatile int64_t x671 = INT64_MIN;
	static int16_t x672 = -1347;
	volatile int64_t t152 = 14227LL;

    t152 = (x669|((x670/x671)+x672));

    if (t152 != -1347LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x673 = UINT8_MAX;
	static int64_t x674 = INT64_MIN;
	int32_t x675 = INT32_MIN;
	volatile int64_t t153 = 658095370957465659LL;

    t153 = (x673|((x674/x675)+x676));

    if (t153 != 4294967295LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x677 = INT32_MIN;
	static int16_t x678 = INT16_MIN;
	volatile uint32_t x680 = UINT32_MAX;
	volatile int64_t t154 = 5366286LL;

    t154 = (x677|((x678/x679)+x680));

    if (t154 != -2147450881LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x685 = -1;
	uint16_t x686 = 11U;
	int32_t x687 = -20;
	volatile uint64_t x688 = UINT64_MAX;
	uint64_t t155 = UINT64_MAX;

    t155 = (x685|((x686/x687)+x688));

    if (t155 != UINT64_MAX) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x689 = INT16_MAX;
	volatile uint64_t x690 = 94085586264394461LLU;
	int32_t x691 = -33492628;
	int8_t x692 = INT8_MAX;

    t156 = (x689|((x690/x691)+x692));

    if (t156 != 32767LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x693 = INT16_MIN;
	int16_t x695 = 23;
	volatile int64_t t157 = -2031179097026354LL;

    t157 = (x693|((x694/x695)+x696));

    if (t157 != -26504LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x697 = 0U;
	int32_t x698 = INT32_MAX;
	static volatile int32_t x699 = -1;
	int64_t x700 = -1LL;
	volatile int64_t t158 = 4138748483971022865LL;

    t158 = (x697|((x698/x699)+x700));

    if (t158 != -2147483648LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x701 = 1;
	uint64_t x703 = 1305553618LLU;
	volatile int16_t x704 = INT16_MAX;
	uint64_t t159 = 6392LLU;

    t159 = (x701|((x702/x703)+x704));

    if (t159 != 7064753747LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x705 = INT8_MIN;
	uint32_t x706 = UINT32_MAX;
	int32_t x707 = INT32_MAX;
	volatile int16_t x708 = 14080;
	volatile uint32_t t160 = 2177U;

    t160 = (x705|((x706/x707)+x708));

    if (t160 != 4294967170U) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint8_t x709 = UINT8_MAX;
	int16_t x710 = 1;
	uint8_t x711 = 31U;
	uint8_t x712 = UINT8_MAX;
	static int32_t t161 = -793642;

    t161 = (x709|((x710/x711)+x712));

    if (t161 != 255) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint8_t x713 = 15U;
	volatile int16_t x714 = INT16_MIN;
	volatile int64_t x716 = 540121938881927LL;
	static int64_t t162 = 27862LL;

    t162 = (x713|((x714/x715)+x716));

    if (t162 != 540121938914703LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x717 = INT8_MIN;
	int8_t x719 = 1;
	int64_t x720 = 127735571027LL;
	int64_t t163 = -20356876115LL;

    t163 = (x717|((x718/x719)+x720));

    if (t163 != -46LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x722 = 41U;
	static volatile uint32_t x724 = 1513U;
	uint32_t t164 = 1U;

    t164 = (x721|((x722/x723)+x724));

    if (t164 != 4294936041U) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x725 = INT8_MIN;
	volatile int8_t x726 = INT8_MAX;
	int16_t x727 = -889;
	static int32_t x728 = -4697509;

    t165 = (x725|((x726/x727)+x728));

    if (t165 != -37) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x730 = 475;
	uint16_t x731 = 13992U;
	uint16_t x732 = UINT16_MAX;
	volatile int32_t t166 = -31767400;

    t166 = (x729|((x730/x731)+x732));

    if (t166 != 65535) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x733 = 3346386253778298LLU;
	static int64_t x736 = INT64_MAX;
	volatile uint64_t t167 = 620141659744LLU;

    t167 = (x733|((x734/x735)+x736));

    if (t167 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x737 = -1;
	static int8_t x738 = INT8_MIN;
	static volatile int64_t x739 = INT64_MIN;
	int64_t t168 = 0LL;

    t168 = (x737|((x738/x739)+x740));

    if (t168 != -1LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x741 = -1LL;
	volatile int16_t x742 = INT16_MIN;
	int8_t x743 = INT8_MIN;
	int16_t x744 = INT16_MIN;
	static volatile int64_t t169 = -10968104LL;

    t169 = (x741|((x742/x743)+x744));

    if (t169 != -1LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x745 = 0U;
	uint64_t x746 = 4395430752933515LLU;
	uint8_t x748 = 1U;
	uint64_t t170 = 1775LLU;

    t170 = (x745|((x746/x747)+x748));

    if (t170 != 67069974105LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x750 = -17;
	volatile int32_t x751 = INT32_MAX;

    t171 = (x749|((x750/x751)+x752));

    if (t171 != UINT32_MAX) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint16_t x753 = 15U;
	volatile int64_t x754 = -1LL;
	int8_t x755 = INT8_MAX;
	uint64_t x756 = 481LLU;
	uint64_t t172 = 8LLU;

    t172 = (x753|((x754/x755)+x756));

    if (t172 != 495LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x757 = 1;
	volatile int8_t x758 = -5;
	static int8_t x759 = INT8_MIN;
	int64_t x760 = -1LL;
	volatile int64_t t173 = -37667213947LL;

    t173 = (x757|((x758/x759)+x760));

    if (t173 != -1LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x763 = UINT8_MAX;
	volatile uint16_t x764 = 1874U;
	static int64_t t174 = 1784212231LL;

    t174 = (x761|((x762/x763)+x764));

    if (t174 != 85479386LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x765 = INT32_MIN;
	volatile int64_t x766 = INT64_MAX;
	static volatile uint64_t x767 = UINT64_MAX;
	int64_t x768 = INT64_MIN;
	volatile uint64_t t175 = 57572137923281210LLU;

    t175 = (x765|((x766/x767)+x768));

    if (t175 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x769 = -49228388426768851LL;
	uint32_t x770 = 2591U;
	uint64_t t176 = UINT64_MAX;

    t176 = (x769|((x770/x771)+x772));

    if (t176 != UINT64_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x777 = INT16_MAX;
	int8_t x778 = -1;
	static volatile uint64_t x779 = UINT64_MAX;

    t177 = (x777|((x778/x779)+x780));

    if (t177 != 32767LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x781 = -10;
	static int16_t x782 = INT16_MIN;
	volatile uint16_t x784 = 27800U;
	volatile int32_t t178 = 2830857;

    t178 = (x781|((x782/x783)+x784));

    if (t178 != -2) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x785 = 11U;
	int32_t x786 = -7374613;
	volatile int8_t x787 = INT8_MIN;
	uint64_t x788 = 1438LLU;
	uint64_t t179 = 348325868897LLU;

    t179 = (x785|((x786/x787)+x788));

    if (t179 != 59055LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x789 = -11;
	volatile uint64_t x790 = UINT64_MAX;
	int8_t x791 = -63;
	uint32_t x792 = 1U;
	uint64_t t180 = 635191436002853LLU;

    t180 = (x789|((x790/x791)+x792));

    if (t180 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x793 = 10307263;
	uint16_t x794 = 55U;
	int16_t x795 = 2075;
	int64_t x796 = INT64_MIN;
	int64_t t181 = 141982304LL;

    t181 = (x793|((x794/x795)+x796));

    if (t181 != -9223372036844468545LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint16_t x797 = 479U;
	volatile int32_t x800 = INT32_MAX;
	uint64_t t182 = 23381LLU;

    t182 = (x797|((x798/x799)+x800));

    if (t182 != 2147530239LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x801 = INT8_MIN;
	volatile int32_t x803 = INT32_MAX;
	volatile uint64_t x804 = UINT64_MAX;

    t183 = (x801|((x802/x803)+x804));

    if (t183 != UINT64_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x805 = 122U;
	static int32_t x807 = -194233;
	static volatile uint16_t x808 = 7U;
	static int32_t t184 = 288787;

    t184 = (x805|((x806/x807)+x808));

    if (t184 != 127) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x809 = 128380510U;
	uint16_t x811 = 6050U;
	int8_t x812 = 1;
	uint32_t t185 = 464971505U;

    t185 = (x809|((x810/x811)+x812));

    if (t185 != 128380511U) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x813 = 123U;
	static int8_t x814 = 7;
	static uint32_t x815 = UINT32_MAX;
	uint16_t x816 = UINT16_MAX;
	uint32_t t186 = 1760U;

    t186 = (x813|((x814/x815)+x816));

    if (t186 != 65535U) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x817 = 426269023647LLU;
	uint16_t x818 = 471U;
	static int16_t x819 = INT16_MAX;
	int64_t x820 = -1LL;
	uint64_t t187 = UINT64_MAX;

    t187 = (x817|((x818/x819)+x820));

    if (t187 != UINT64_MAX) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x821 = -1;
	static int8_t x822 = -1;
	int64_t x823 = INT64_MAX;
	static uint8_t x824 = 93U;
	int64_t t188 = -8455827896LL;

    t188 = (x821|((x822/x823)+x824));

    if (t188 != -1LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x826 = UINT64_MAX;
	uint32_t x827 = 26093139U;
	int32_t x828 = -2201687;
	uint64_t t189 = 60LLU;

    t189 = (x825|((x826/x827)+x828));

    if (t189 != 708633164014LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x829 = 5;
	uint8_t x831 = 3U;
	static int64_t t190 = -54530LL;

    t190 = (x829|((x830/x831)+x832));

    if (t190 != 3074457345618260727LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x833 = INT8_MAX;
	int16_t x836 = 418;

    t191 = (x833|((x834/x835)+x836));

    if (t191 != 511) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x837 = 103U;
	volatile uint32_t x838 = 2075042U;
	int8_t x839 = INT8_MIN;
	static uint64_t x840 = 3LLU;
	static uint64_t t192 = 15723LLU;

    t192 = (x837|((x838/x839)+x840));

    if (t192 != 103LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x842 = UINT64_MAX;
	uint32_t x843 = 83882440U;
	static int32_t x844 = INT32_MIN;
	uint64_t t193 = 2062493727302122417LLU;

    t193 = (x841|((x842/x843)+x844));

    if (t193 != 217764397055LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x846 = INT32_MIN;
	uint32_t x848 = UINT32_MAX;
	volatile uint32_t t194 = UINT32_MAX;

    t194 = (x845|((x846/x847)+x848));

    if (t194 != UINT32_MAX) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint16_t x849 = UINT16_MAX;
	uint32_t x850 = 19343U;
	int8_t x851 = -1;
	uint8_t x852 = 3U;
	uint32_t t195 = 193916767U;

    t195 = (x849|((x850/x851)+x852));

    if (t195 != 65535U) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint16_t x853 = 5673U;
	static volatile int16_t x854 = 26;
	int64_t x855 = INT64_MAX;
	int64_t t196 = 314822019773502LL;

    t196 = (x853|((x854/x855)+x856));

    if (t196 != -87LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x857 = INT8_MAX;
	int64_t x858 = 31597908916LL;
	uint32_t x860 = 11U;
	static volatile uint64_t t197 = 873404538172378400LLU;

    t197 = (x857|((x858/x859)+x860));

    if (t197 != 37482751LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint32_t x861 = UINT32_MAX;
	int32_t x862 = 78;
	int16_t x863 = 20;
	uint64_t x864 = 158977528LLU;

    t198 = (x861|((x862/x863)+x864));

    if (t198 != 4294967295LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	static int64_t x866 = -1LL;
	uint16_t x867 = UINT16_MAX;
	int32_t x868 = -1;
	static int64_t t199 = -24852449659611LL;

    t199 = (x865|((x866/x867)+x868));

    if (t199 != -1LL) { NG(); } else { ; }
	
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

