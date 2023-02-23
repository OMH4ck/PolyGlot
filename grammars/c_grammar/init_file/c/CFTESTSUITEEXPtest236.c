
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

static volatile int64_t x1 = 2LL;
int8_t x3 = INT8_MIN;
volatile int32_t x10 = 794122;
int16_t x12 = -2;
static int8_t x15 = -3;
int32_t t3 = 61784;
volatile int16_t x26 = 2;
int16_t x27 = -1;
int16_t x45 = INT16_MAX;
int64_t x58 = -1LL;
volatile uint32_t t9 = 5U;
uint64_t x69 = 8291255649LLU;
uint32_t x73 = UINT32_MAX;
int32_t x76 = -1;
volatile int8_t x87 = -1;
static int64_t t12 = 1540297789107LL;
static volatile int32_t x98 = 0;
uint16_t x115 = 1999U;
uint8_t x117 = 62U;
volatile int32_t t16 = 637659;
int32_t x125 = INT32_MAX;
int16_t x126 = -22;
uint16_t x127 = 45U;
int16_t x142 = INT16_MIN;
uint16_t x152 = UINT16_MAX;
volatile uint32_t t21 = 10769487U;
uint8_t x171 = 22U;
volatile int8_t x175 = INT8_MAX;
static int8_t x176 = 56;
int16_t x181 = -1;
int32_t x182 = -1;
uint64_t t26 = 3962063LLU;
int32_t x198 = -279;
volatile int64_t x202 = 42713193987600LL;
static int64_t t31 = -8318036617842894LL;
int8_t x226 = INT8_MIN;
static volatile int16_t x231 = -55;
int16_t x235 = 74;
int16_t x251 = 86;
int16_t x253 = -1;
uint64_t x259 = UINT64_MAX;
uint64_t x270 = 69038742497979298LLU;
uint16_t x271 = 81U;
static volatile uint64_t t39 = 858095LLU;
int8_t x279 = INT8_MIN;
uint8_t x285 = UINT8_MAX;
uint16_t x286 = 68U;
int8_t x288 = -1;
static uint16_t x291 = 26U;
int32_t x292 = -1548;
int8_t x297 = INT8_MIN;
static int64_t x299 = INT64_MIN;
uint32_t x305 = 297U;
int32_t x309 = INT32_MAX;
uint16_t x311 = UINT16_MAX;
volatile uint32_t x326 = UINT32_MAX;
static int8_t x332 = -2;
int16_t x341 = INT16_MIN;
volatile int32_t t53 = 25171231;
volatile uint64_t t54 = 31088601LLU;
int32_t x353 = -1;
int32_t x354 = -1;
volatile uint64_t t55 = 6311600LLU;
int16_t x361 = INT16_MIN;
uint8_t x362 = 25U;
static uint64_t x392 = UINT64_MAX;
uint64_t t61 = 954597669255LLU;
int32_t x398 = INT32_MIN;
int8_t x400 = -5;
int16_t x408 = INT16_MIN;
int64_t t65 = -388796934287LL;
uint32_t x426 = 12712852U;
volatile uint8_t x428 = 46U;
int16_t x434 = INT16_MIN;
volatile uint32_t t69 = 314U;
uint64_t t73 = 900LLU;
int8_t x474 = -1;
uint64_t t76 = 6823540646667LLU;
int32_t x484 = INT32_MIN;
volatile uint32_t t77 = 703U;
int16_t x491 = -1;
uint64_t x501 = 2757913134LLU;
static volatile uint16_t x502 = 1042U;
uint64_t t80 = 1506339337558LLU;
static int16_t x508 = 126;
uint64_t x510 = UINT64_MAX;
uint32_t x511 = UINT32_MAX;
int16_t x534 = INT16_MAX;
uint32_t x536 = 82U;
int16_t x540 = INT16_MAX;
uint16_t x543 = 4U;
static int32_t t87 = -79553;
int32_t x571 = -1;
volatile uint32_t x572 = UINT32_MAX;
int32_t x578 = 2885;
uint32_t x580 = 77332711U;
volatile int64_t t92 = 4804387294191LL;
int64_t t93 = 56592911LL;
volatile int8_t x590 = -25;
int8_t x610 = -1;
uint64_t x621 = 136LLU;
int8_t x622 = INT8_MIN;
int8_t x623 = 21;
int16_t x628 = INT16_MIN;
int32_t x670 = -58187;
uint8_t x672 = 10U;
uint16_t x673 = 19U;
uint16_t x674 = 1U;
volatile int16_t x675 = INT16_MIN;
int32_t t107 = 11755;
int64_t x677 = INT64_MIN;
int16_t x683 = 0;
volatile uint64_t x687 = 349900LLU;
int8_t x699 = -2;
static int16_t x701 = INT16_MAX;
volatile int32_t t113 = -550;
int16_t x709 = INT16_MAX;
uint64_t x711 = 960464300148LLU;
volatile uint32_t x720 = 13440086U;
uint32_t x724 = 98034U;
static int16_t x726 = INT16_MIN;
int8_t x733 = 1;
static volatile uint64_t t119 = 483LLU;
uint32_t x737 = 448677U;
volatile int16_t x745 = -1;
uint64_t x746 = 40LLU;
volatile int32_t x748 = -1;
uint64_t t121 = 60797012486LLU;
int32_t x752 = INT32_MIN;
static uint64_t x754 = UINT64_MAX;
volatile int16_t x761 = 352;
volatile int32_t t124 = -3954;
static int32_t x767 = -1;
int16_t x768 = -16103;
int16_t x776 = 0;
static uint64_t x786 = 8450928LLU;
uint64_t t128 = 16512115653442LLU;
uint64_t x790 = UINT64_MAX;
uint64_t t129 = 495370552383LLU;
uint8_t x811 = 12U;
uint8_t x827 = 3U;
uint64_t x843 = UINT64_MAX;
static int32_t x844 = INT32_MIN;
int64_t x845 = -1LL;
volatile uint32_t x847 = 14U;
volatile int64_t t139 = 42642492286LL;
static int32_t x869 = INT32_MAX;
int16_t x879 = -1;
uint32_t t144 = 189947U;
uint8_t x885 = 4U;
static int64_t x893 = 95161158LL;
int64_t t147 = -90305LL;
static int32_t x900 = INT32_MIN;
int64_t t148 = -6404350342156009LL;
uint16_t x902 = 1754U;
uint64_t x917 = 256567012LLU;
static volatile int32_t x922 = -1;
uint64_t x926 = 243012305322LLU;
volatile uint16_t x933 = UINT16_MAX;
int16_t x960 = INT16_MIN;
int8_t x964 = -1;
uint32_t x977 = 2U;
uint8_t x978 = 0U;
volatile int64_t x997 = INT64_MIN;
int64_t t164 = 176261LL;
uint64_t x1002 = UINT64_MAX;
uint64_t x1007 = 23009122LLU;
uint8_t x1008 = 3U;
uint64_t x1009 = 508934448040948680LLU;
int64_t x1013 = 621082974301598LL;
int64_t x1021 = INT64_MIN;
uint32_t x1023 = 1038U;
int16_t x1048 = INT16_MIN;
uint8_t x1059 = 46U;
int32_t x1069 = INT32_MIN;
volatile int32_t x1072 = 10161;
int32_t x1073 = 752482044;
static volatile uint32_t x1074 = 75069416U;
int8_t x1075 = -50;
static int32_t x1076 = INT32_MIN;
int8_t x1086 = 10;
volatile int8_t x1103 = INT8_MIN;
volatile int32_t t182 = -30089;
int16_t x1137 = INT16_MIN;
static int16_t x1138 = -1;
uint8_t x1140 = 1U;
uint64_t x1145 = UINT64_MAX;
int16_t x1149 = INT16_MAX;
uint32_t t188 = 126127038U;
int8_t x1157 = -1;
int8_t x1170 = -1;
static volatile int64_t t192 = -389803321527LL;
volatile int32_t x1175 = INT32_MIN;
volatile int32_t x1177 = INT32_MIN;
uint64_t x1185 = UINT64_MAX;
uint8_t x1189 = 67U;
uint64_t x1191 = 16221492LLU;
uint16_t x1205 = 466U;
static int8_t x1208 = INT8_MAX;
uint64_t x1209 = 55065797482592078LLU;


void f0(void) {
    	int32_t x2 = -1;
	uint16_t x4 = 17U;
	volatile int64_t t0 = -19831373283LL;

    t0 = (x1&((x2-x3)*x4));

    if (t0 != 2LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x9 = 27;
	uint16_t x11 = 7708U;
	volatile int32_t t1 = -2363;

    t1 = (x9&((x10-x11)*x12));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x13 = INT64_MIN;
	volatile int8_t x14 = 22;
	uint32_t x16 = 334883965U;
	int64_t t2 = -435684LL;

    t2 = (x13&((x14-x15)*x16));

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint8_t x21 = 28U;
	static int8_t x22 = -11;
	int8_t x23 = INT8_MIN;
	static uint8_t x24 = UINT8_MAX;

    t3 = (x21&((x22-x23)*x24));

    if (t3 != 8) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x25 = -54620;
	volatile int8_t x28 = INT8_MIN;
	static volatile int32_t t4 = -1946;

    t4 = (x25&((x26-x27)*x28));

    if (t4 != -54656) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x33 = 454114;
	static uint8_t x34 = 1U;
	volatile int16_t x35 = 7;
	int32_t x36 = 236;
	int32_t t5 = -1;

    t5 = (x33&((x34-x35)*x36));

    if (t5 != 452704) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x46 = UINT16_MAX;
	int64_t x47 = 795658303030509LL;
	int64_t x48 = -1LL;
	volatile int64_t t6 = 220383LL;

    t6 = (x45&((x46-x47)*x48));

    if (t6 != 17646LL) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x49 = -1;
	uint8_t x50 = 0U;
	uint64_t x51 = 5820162015811LLU;
	uint32_t x52 = 426728110U;
	uint64_t t7 = 30297387645LLU;

    t7 = (x49&((x50-x51)*x52));

    if (t7 != 6683713049971320950LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x57 = -1;
	int32_t x59 = INT32_MAX;
	static volatile int16_t x60 = 12756;
	int64_t t8 = -113804806567285521LL;

    t8 = (x57&((x58-x59)*x60));

    if (t8 != -27393301413888LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x61 = -1;
	int16_t x62 = 15487;
	int32_t x63 = INT32_MAX;
	volatile uint32_t x64 = 1063914752U;

    t9 = (x61&((x62-x63)*x64));

    if (t9 != 2417131520U) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x70 = 0U;
	uint64_t x71 = UINT64_MAX;
	static int8_t x72 = 1;
	static uint64_t t10 = 2LLU;

    t10 = (x69&((x70-x71)*x72));

    if (t10 != 1LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x74 = INT8_MIN;
	int8_t x75 = -1;
	volatile uint32_t t11 = 6651U;

    t11 = (x73&((x74-x75)*x76));

    if (t11 != 127U) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint8_t x85 = UINT8_MAX;
	int16_t x86 = -1;
	static int64_t x88 = -1LL;

    t12 = (x85&((x86-x87)*x88));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x89 = -242;
	static volatile int16_t x90 = -115;
	int16_t x91 = -1;
	static int8_t x92 = -1;
	static int32_t t13 = 50306597;

    t13 = (x89&((x90-x91)*x92));

    if (t13 != 2) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x97 = 469;
	volatile int8_t x99 = 1;
	static int16_t x100 = INT16_MIN;
	volatile int32_t t14 = 3639;

    t14 = (x97&((x98-x99)*x100));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x113 = UINT8_MAX;
	int16_t x114 = -1;
	uint32_t x116 = 325197U;
	uint32_t t15 = 211917U;

    t15 = (x113&((x114-x115)*x116));

    if (t15 != 112U) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x118 = INT16_MIN;
	uint8_t x119 = 7U;
	static int32_t x120 = 1;

    t16 = (x117&((x118-x119)*x120));

    if (t16 != 56) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x128 = 7;
	static int32_t t17 = 45855321;

    t17 = (x125&((x126-x127)*x128));

    if (t17 != 2147483179) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x129 = 28057748314466895LL;
	volatile uint64_t x130 = UINT64_MAX;
	uint64_t x131 = UINT64_MAX;
	int32_t x132 = INT32_MIN;
	uint64_t t18 = 6819440383225689LLU;

    t18 = (x129&((x130-x131)*x132));

    if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x133 = INT32_MIN;
	int16_t x134 = INT16_MIN;
	int16_t x135 = INT16_MIN;
	int8_t x136 = INT8_MIN;
	int32_t t19 = 2427738;

    t19 = (x133&((x134-x135)*x136));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x141 = -1;
	uint16_t x143 = UINT16_MAX;
	int64_t x144 = -1574266LL;
	static volatile int64_t t20 = 35140556139639LL;

    t20 = (x141&((x142-x143)*x144));

    if (t20 != 154755070598LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x149 = 3U;
	int32_t x150 = INT32_MAX;
	volatile uint32_t x151 = UINT32_MAX;

    t21 = (x149&((x150-x151)*x152));

    if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile uint32_t x153 = 92228U;
	int32_t x154 = INT32_MIN;
	int64_t x155 = 2781628889LL;
	uint64_t x156 = 3LLU;
	volatile uint64_t t22 = 10429035LLU;

    t22 = (x153&((x154-x155)*x156));

    if (t22 != 73796LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x169 = -505943315631803453LL;
	int16_t x170 = INT16_MAX;
	uint32_t x172 = 3U;
	int64_t t23 = 947661LL;

    t23 = (x169&((x170-x171)*x172));

    if (t23 != 29571LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x173 = INT16_MAX;
	uint64_t x174 = UINT64_MAX;
	uint64_t t24 = 20459814LLU;

    t24 = (x173&((x174-x175)*x176));

    if (t24 != 25600LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x177 = INT32_MAX;
	volatile int16_t x178 = 0;
	int16_t x179 = -15380;
	volatile uint16_t x180 = 552U;
	volatile int32_t t25 = 3;

    t25 = (x177&((x178-x179)*x180));

    if (t25 != 8489760) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint64_t x183 = 131333080968664342LLU;
	int16_t x184 = 1;

    t26 = (x181&((x182-x183)*x184));

    if (t26 != 18315410992740887273LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint8_t x185 = 22U;
	volatile int8_t x186 = INT8_MIN;
	static volatile int32_t x187 = 222;
	static int64_t x188 = -550561027954LL;
	volatile int64_t t27 = 1063133343LL;

    t27 = (x185&((x186-x187)*x188));

    if (t27 != 20LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x193 = INT32_MAX;
	int64_t x194 = -349LL;
	int64_t x195 = -5LL;
	uint8_t x196 = UINT8_MAX;
	volatile int64_t t28 = -171LL;

    t28 = (x193&((x194-x195)*x196));

    if (t28 != 2147395928LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x197 = 1109551487897324LLU;
	int32_t x199 = -1;
	uint32_t x200 = UINT32_MAX;
	uint64_t t29 = 25486336424254244LLU;

    t29 = (x197&((x198-x199)*x200));

    if (t29 != 4LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x201 = 2480U;
	volatile int32_t x203 = 315;
	int64_t x204 = -1LL;
	static volatile int64_t t30 = 18LL;

    t30 = (x201&((x202-x203)*x204));

    if (t30 != 288LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x217 = -2998662474LL;
	static uint32_t x218 = 406394U;
	int64_t x219 = -1LL;
	volatile uint8_t x220 = UINT8_MAX;

    t31 = (x217&((x218-x219)*x220));

    if (t31 != 67371652LL) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint64_t x225 = 24905179281215LLU;
	int8_t x227 = INT8_MIN;
	int8_t x228 = -14;
	uint64_t t32 = 575453LLU;

    t32 = (x225&((x226-x227)*x228));

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x229 = 16U;
	volatile int32_t x230 = 54351;
	static int16_t x232 = -1;
	static volatile int32_t t33 = 41;

    t33 = (x229&((x230-x231)*x232));

    if (t33 != 16) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x233 = UINT32_MAX;
	uint64_t x234 = 11268857915LLU;
	volatile int8_t x236 = INT8_MAX;
	uint64_t t34 = 1038119495235205LLU;

    t34 = (x233&((x234-x235)*x236));

    if (t34 != 920836239LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x245 = INT8_MIN;
	static int8_t x246 = INT8_MAX;
	int8_t x247 = INT8_MIN;
	volatile uint32_t x248 = 57961207U;
	uint32_t t35 = 3801477U;

    t35 = (x245&((x246-x247)*x248));

    if (t35 != 1895205888U) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint8_t x249 = UINT8_MAX;
	uint32_t x250 = UINT32_MAX;
	uint64_t x252 = UINT64_MAX;
	volatile uint64_t t36 = 36348461LLU;

    t36 = (x249&((x250-x251)*x252));

    if (t36 != 87LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x254 = 499U;
	int8_t x255 = -12;
	uint16_t x256 = UINT16_MAX;
	int32_t t37 = -2;

    t37 = (x253&((x254-x255)*x256));

    if (t37 != 33488385) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x257 = INT16_MAX;
	uint32_t x258 = UINT32_MAX;
	int32_t x260 = 7571289;
	uint64_t t38 = 26LLU;

    t38 = (x257&((x258-x259)*x260));

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x269 = -1;
	uint32_t x272 = UINT32_MAX;

    t39 = (x269&((x270-x271)*x272));

    if (t39 != 15663419388938884271LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x277 = INT8_MAX;
	uint32_t x278 = UINT32_MAX;
	int16_t x280 = INT16_MIN;
	uint32_t t40 = 165U;

    t40 = (x277&((x278-x279)*x280));

    if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x281 = 3808;
	static int16_t x282 = INT16_MIN;
	volatile int32_t x283 = INT32_MIN;
	static int8_t x284 = -1;
	volatile int32_t t41 = 3223;

    t41 = (x281&((x282-x283)*x284));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint64_t x287 = UINT64_MAX;
	static volatile uint64_t t42 = 1139932882LLU;

    t42 = (x285&((x286-x287)*x288));

    if (t42 != 187LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint32_t x289 = 42303624U;
	static uint16_t x290 = 1U;
	static volatile uint32_t t43 = 255432600U;

    t43 = (x289&((x290-x291)*x292));

    if (t43 != 32776U) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint64_t x293 = 627416327316191130LLU;
	int64_t x294 = INT64_MIN;
	int8_t x295 = INT8_MIN;
	static uint64_t x296 = 3141LLU;
	uint64_t t44 = 6211048981LLU;

    t44 = (x293&((x294-x295)*x296));

    if (t44 != 402048LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x298 = UINT64_MAX;
	int64_t x300 = -1LL;
	static volatile uint64_t t45 = 3158028LLU;

    t45 = (x297&((x298-x299)*x300));

    if (t45 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x306 = INT16_MIN;
	uint32_t x307 = 278312U;
	int16_t x308 = -7449;
	static uint32_t t46 = 13U;

    t46 = (x305&((x306-x307)*x308));

    if (t46 != 40U) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x310 = -2;
	uint32_t x312 = 109721U;
	volatile uint32_t t47 = 881U;

    t47 = (x309&((x310-x311)*x312));

    if (t47 != 1399149415U) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x317 = 1240605;
	int16_t x318 = 17;
	int64_t x319 = -44666LL;
	volatile int16_t x320 = 1548;
	volatile int64_t t48 = 1189589798LL;

    t48 = (x317&((x318-x319)*x320));

    if (t48 != 1204228LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x325 = 1U;
	int8_t x327 = -1;
	int16_t x328 = -1;
	volatile uint32_t t49 = 4U;

    t49 = (x325&((x326-x327)*x328));

    if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x329 = INT8_MAX;
	static volatile int64_t x330 = INT64_MIN;
	uint64_t x331 = UINT64_MAX;
	static volatile uint64_t t50 = 1648228701091070LLU;

    t50 = (x329&((x330-x331)*x332));

    if (t50 != 126LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x333 = -1;
	static volatile uint64_t x334 = 16LLU;
	uint64_t x335 = 2563541LLU;
	int16_t x336 = INT16_MAX;
	uint64_t t51 = 515280085205LLU;

    t51 = (x333&((x334-x335)*x336));

    if (t51 != 18446743989710527941LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x337 = INT16_MIN;
	int64_t x338 = -1LL;
	static volatile uint64_t x339 = 1489766LLU;
	int64_t x340 = 1LL;
	uint64_t t52 = 5LLU;

    t52 = (x337&((x338-x339)*x340));

    if (t52 != 18446744073708044288LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x342 = -1;
	static int8_t x343 = 5;
	volatile uint16_t x344 = 1U;

    t53 = (x341&((x342-x343)*x344));

    if (t53 != -32768) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x345 = 1U;
	volatile int32_t x346 = -1;
	uint64_t x347 = 6314146153416LLU;
	static volatile uint16_t x348 = 66U;

    t54 = (x345&((x346-x347)*x348));

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x355 = UINT64_MAX;
	static volatile int64_t x356 = INT64_MAX;

    t55 = (x353&((x354-x355)*x356));

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x363 = -31LL;
	uint8_t x364 = 25U;
	int64_t t56 = -840161535417199LL;

    t56 = (x361&((x362-x363)*x364));

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x365 = UINT64_MAX;
	static uint8_t x366 = 31U;
	uint16_t x367 = 377U;
	int8_t x368 = 4;
	static uint64_t t57 = 60383203280778026LLU;

    t57 = (x365&((x366-x367)*x368));

    if (t57 != 18446744073709550232LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x381 = 5;
	int64_t x382 = 45590408LL;
	int32_t x383 = 14654882;
	int16_t x384 = -32;
	volatile int64_t t58 = 11433193883432LL;

    t58 = (x381&((x382-x383)*x384));

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x385 = INT32_MAX;
	uint64_t x386 = 164900055820458LLU;
	int8_t x387 = INT8_MAX;
	int32_t x388 = INT32_MAX;
	volatile uint64_t t59 = 62509441051LLU;

    t59 = (x385&((x386-x387)*x388));

    if (t59 != 918542293LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int32_t x389 = -1;
	int16_t x390 = -1;
	int8_t x391 = -1;
	uint64_t t60 = 252583LLU;

    t60 = (x389&((x390-x391)*x392));

    if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x393 = INT8_MIN;
	static int16_t x394 = -72;
	volatile uint64_t x395 = 1973LLU;
	int16_t x396 = INT16_MIN;

    t61 = (x393&((x394-x395)*x396));

    if (t61 != 67010560LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x397 = 71353330327LLU;
	uint32_t x399 = 11391209U;
	volatile uint64_t t62 = 64035039LLU;

    t62 = (x397&((x398-x399)*x400));

    if (t62 != 2154102917LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x405 = INT32_MIN;
	int16_t x406 = INT16_MIN;
	volatile int8_t x407 = -1;
	int32_t t63 = -591432;

    t63 = (x405&((x406-x407)*x408));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int64_t x413 = INT64_MAX;
	int16_t x414 = INT16_MAX;
	int64_t x415 = -957LL;
	uint16_t x416 = 21U;
	int64_t t64 = -93434931164594718LL;

    t64 = (x413&((x414-x415)*x416));

    if (t64 != 708204LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x417 = 3;
	volatile int64_t x418 = -1LL;
	int16_t x419 = INT16_MIN;
	uint8_t x420 = UINT8_MAX;

    t65 = (x417&((x418-x419)*x420));

    if (t65 != 1LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x421 = -1LL;
	static int8_t x422 = -1;
	uint8_t x423 = 13U;
	volatile int8_t x424 = INT8_MAX;
	volatile int64_t t66 = -112839838179278LL;

    t66 = (x421&((x422-x423)*x424));

    if (t66 != -1778LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x425 = INT16_MIN;
	int16_t x427 = -3582;
	uint32_t t67 = 49621332U;

    t67 = (x425&((x426-x427)*x428));

    if (t67 != 584941568U) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x429 = -1;
	int8_t x430 = INT8_MIN;
	int64_t x431 = -1LL;
	uint32_t x432 = 5U;
	volatile int64_t t68 = -923497709LL;

    t68 = (x429&((x430-x431)*x432));

    if (t68 != -635LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x433 = -1;
	volatile int16_t x435 = 3520;
	volatile uint32_t x436 = 20816348U;

    t69 = (x433&((x434-x435)*x436));

    if (t69 != 530607872U) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x437 = INT32_MIN;
	int16_t x438 = 2;
	int16_t x439 = -3800;
	int32_t x440 = 6;
	int32_t t70 = 31821;

    t70 = (x437&((x438-x439)*x440));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x441 = -1;
	int8_t x442 = INT8_MIN;
	uint8_t x443 = 31U;
	volatile int8_t x444 = INT8_MIN;
	int32_t t71 = 78719673;

    t71 = (x441&((x442-x443)*x444));

    if (t71 != 20352) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile uint8_t x449 = UINT8_MAX;
	static volatile int64_t x450 = 946148276LL;
	int16_t x451 = 6;
	static int64_t x452 = -1LL;
	int64_t t72 = 1LL;

    t72 = (x449&((x450-x451)*x452));

    if (t72 != 82LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x461 = -107;
	int64_t x462 = INT64_MIN;
	uint64_t x463 = 2713585625LLU;
	int8_t x464 = -1;

    t73 = (x461&((x462-x463)*x464));

    if (t73 != 9223372039568361361LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x465 = INT32_MIN;
	uint64_t x466 = UINT64_MAX;
	volatile int16_t x467 = 34;
	static int64_t x468 = -54287741638007LL;
	uint64_t t74 = 87LLU;

    t74 = (x465&((x466-x467)*x468));

    if (t74 != 1900069909430272LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x469 = INT64_MIN;
	int64_t x470 = 1LL;
	uint64_t x471 = 1369723884041934508LLU;
	int16_t x472 = INT16_MIN;
	uint64_t t75 = 79589404933030LLU;

    t75 = (x469&((x470-x471)*x472));

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x473 = 2U;
	uint64_t x475 = 2253237385136551316LLU;
	int32_t x476 = -1;

    t76 = (x473&((x474-x475)*x476));

    if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t x481 = 9444569;
	uint32_t x482 = 44417798U;
	uint8_t x483 = UINT8_MAX;

    t77 = (x481&((x482-x483)*x484));

    if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x489 = 741592341362LLU;
	static uint8_t x490 = 7U;
	uint64_t x492 = UINT64_MAX;
	static volatile uint64_t t78 = 476562636LLU;

    t78 = (x489&((x490-x491)*x492));

    if (t78 != 741592341360LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x493 = 1;
	volatile int32_t x494 = INT32_MIN;
	static int8_t x495 = INT8_MIN;
	static uint16_t x496 = 0U;
	int32_t t79 = -25841164;

    t79 = (x493&((x494-x495)*x496));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x503 = -1;
	uint64_t x504 = 2945LLU;

    t80 = (x501&((x502-x503)*x504));

    if (t80 != 2247170LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x505 = -1;
	int8_t x506 = -1;
	static int64_t x507 = -1LL;
	int64_t t81 = -7LL;

    t81 = (x505&((x506-x507)*x508));

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x509 = -40425016;
	uint8_t x512 = 1U;
	uint64_t t82 = 71899038069385933LLU;

    t82 = (x509&((x510-x511)*x512));

    if (t82 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x513 = 22U;
	volatile int8_t x514 = INT8_MIN;
	static int16_t x515 = -1799;
	volatile uint8_t x516 = 25U;
	int32_t t83 = -45575369;

    t83 = (x513&((x514-x515)*x516));

    if (t83 != 6) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x529 = INT32_MIN;
	int16_t x530 = INT16_MIN;
	static uint32_t x531 = 8033U;
	static uint16_t x532 = 195U;
	static volatile uint32_t t84 = 66747170U;

    t84 = (x529&((x530-x531)*x532));

    if (t84 != 2147483648U) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x533 = INT32_MIN;
	uint16_t x535 = 98U;
	static volatile uint32_t t85 = 13722201U;

    t85 = (x533&((x534-x535)*x536));

    if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x537 = 159U;
	static int64_t x538 = -1LL;
	int32_t x539 = INT32_MAX;
	static volatile int64_t t86 = 2724798363789264993LL;

    t86 = (x537&((x538-x539)*x540));

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x541 = INT8_MAX;
	uint8_t x542 = 2U;
	int16_t x544 = 1;

    t87 = (x541&((x542-x543)*x544));

    if (t87 != 126) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x545 = 86;
	int16_t x546 = INT16_MIN;
	volatile int8_t x547 = INT8_MIN;
	int16_t x548 = -1;
	static int32_t t88 = 57812;

    t88 = (x545&((x546-x547)*x548));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x553 = UINT32_MAX;
	volatile uint16_t x554 = 0U;
	uint16_t x555 = UINT16_MAX;
	uint32_t x556 = 8065U;
	volatile uint32_t t89 = 31663U;

    t89 = (x553&((x554-x555)*x556));

    if (t89 != 3766427521U) { NG(); } else { ; }
	
}

void f90(void) {
    	static int8_t x565 = INT8_MIN;
	int32_t x566 = 567;
	int8_t x567 = -5;
	uint16_t x568 = 774U;
	volatile int32_t t90 = -2186;

    t90 = (x565&((x566-x567)*x568));

    if (t90 != 442624) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint64_t x569 = UINT64_MAX;
	volatile int16_t x570 = 1;
	uint64_t t91 = 60869123LLU;

    t91 = (x569&((x570-x571)*x572));

    if (t91 != 4294967294LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x577 = UINT32_MAX;
	static int64_t x579 = -330552LL;

    t92 = (x577&((x578-x579)*x580));

    if (t92 != 2898479819LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x581 = INT64_MIN;
	static uint16_t x582 = 0U;
	uint8_t x583 = 1U;
	int8_t x584 = 0;

    t93 = (x581&((x582-x583)*x584));

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x585 = 1916;
	uint32_t x586 = UINT32_MAX;
	int8_t x587 = INT8_MIN;
	int64_t x588 = -1LL;
	volatile int64_t t94 = -6LL;

    t94 = (x585&((x586-x587)*x588));

    if (t94 != 1792LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x589 = 32910498768953564LL;
	uint16_t x591 = UINT16_MAX;
	static uint8_t x592 = UINT8_MAX;
	int64_t t95 = -177LL;

    t95 = (x589&((x590-x591)*x592));

    if (t95 != 32910498760499224LL) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x593 = INT16_MAX;
	volatile int16_t x594 = INT16_MAX;
	uint32_t x595 = 1096483U;
	int16_t x596 = -1;
	volatile uint32_t t96 = 1816849678U;

    t96 = (x593&((x594-x595)*x596));

    if (t96 != 15140U) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x597 = INT32_MAX;
	static int32_t x598 = 1;
	int8_t x599 = INT8_MAX;
	int8_t x600 = INT8_MIN;
	volatile int32_t t97 = -57;

    t97 = (x597&((x598-x599)*x600));

    if (t97 != 16128) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x601 = 1U;
	int64_t x602 = 94339LL;
	uint8_t x603 = UINT8_MAX;
	uint32_t x604 = UINT32_MAX;
	volatile int64_t t98 = -128677856654932669LL;

    t98 = (x601&((x602-x603)*x604));

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x609 = INT32_MIN;
	int32_t x611 = -4417;
	int8_t x612 = INT8_MIN;
	volatile int32_t t99 = INT32_MIN;

    t99 = (x609&((x610-x611)*x612));

    if (t99 != INT32_MIN) { NG(); } else { ; }
	
}

void f100(void) {
    	static int16_t x613 = INT16_MIN;
	int64_t x614 = -1238LL;
	uint8_t x615 = UINT8_MAX;
	volatile int16_t x616 = INT16_MAX;
	volatile int64_t t100 = 240011431094847LL;

    t100 = (x613&((x614-x615)*x616));

    if (t100 != -48922624LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x624 = 33U;
	uint64_t t101 = 16621537776305LLU;

    t101 = (x621&((x622-x623)*x624));

    if (t101 != 136LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x625 = INT8_MIN;
	static uint32_t x626 = UINT32_MAX;
	volatile uint8_t x627 = 2U;
	uint32_t t102 = 20815482U;

    t102 = (x625&((x626-x627)*x628));

    if (t102 != 98304U) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int16_t x629 = -1;
	int8_t x630 = INT8_MAX;
	volatile int8_t x631 = 0;
	uint16_t x632 = UINT16_MAX;
	int32_t t103 = -16753211;

    t103 = (x629&((x630-x631)*x632));

    if (t103 != 8322945) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x637 = INT64_MAX;
	volatile uint32_t x638 = 27818U;
	int32_t x639 = -1;
	uint32_t x640 = UINT32_MAX;
	int64_t t104 = 169103696LL;

    t104 = (x637&((x638-x639)*x640));

    if (t104 != 4294939477LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x657 = 6;
	int32_t x658 = -1;
	uint16_t x659 = UINT16_MAX;
	uint32_t x660 = 544741U;
	static uint32_t t105 = 117362378U;

    t105 = (x657&((x658-x659)*x660));

    if (t105 != 0U) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x669 = -1;
	int16_t x671 = INT16_MIN;
	int32_t t106 = 82909981;

    t106 = (x669&((x670-x671)*x672));

    if (t106 != -254190) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x676 = INT16_MAX;

    t107 = (x673&((x674-x675)*x676));

    if (t107 != 19) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile uint16_t x678 = 16479U;
	int8_t x679 = INT8_MIN;
	volatile int64_t x680 = -2692459LL;
	static int64_t t108 = INT64_MIN;

    t108 = (x677&((x678-x679)*x680));

    if (t108 != INT64_MIN) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x681 = -337;
	int8_t x682 = 15;
	static uint32_t x684 = UINT32_MAX;
	uint32_t t109 = 13121U;

    t109 = (x681&((x682-x683)*x684));

    if (t109 != 4294966945U) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint8_t x685 = UINT8_MAX;
	uint16_t x686 = 21873U;
	volatile int64_t x688 = INT64_MIN;
	volatile uint64_t t110 = 6LLU;

    t110 = (x685&((x686-x687)*x688));

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int32_t x693 = INT32_MAX;
	uint8_t x694 = 1U;
	int64_t x695 = -1LL;
	int64_t x696 = -1LL;
	volatile int64_t t111 = 100LL;

    t111 = (x693&((x694-x695)*x696));

    if (t111 != 2147483646LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t x697 = INT32_MIN;
	int16_t x698 = INT16_MAX;
	uint32_t x700 = UINT32_MAX;
	uint32_t t112 = 2150U;

    t112 = (x697&((x698-x699)*x700));

    if (t112 != 2147483648U) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x702 = INT8_MIN;
	volatile int8_t x703 = -22;
	static int8_t x704 = INT8_MIN;

    t113 = (x701&((x702-x703)*x704));

    if (t113 != 13568) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint32_t x710 = 363128666U;
	int8_t x712 = -1;
	uint64_t t114 = 4440796897499LLU;

    t114 = (x709&((x710-x711)*x712));

    if (t114 != 16666LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint64_t x717 = UINT64_MAX;
	static volatile int32_t x718 = -1;
	int8_t x719 = 10;
	uint64_t t115 = 253269021689880687LLU;

    t115 = (x717&((x718-x719)*x720));

    if (t115 != 4147126350LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x721 = -1;
	uint64_t x722 = 5270220886143545LLU;
	int16_t x723 = -1;
	static uint64_t t116 = 1509360LLU;

    t116 = (x721&((x722-x723)*x724));

    if (t116 != 152000288328943316LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x725 = INT8_MAX;
	volatile uint16_t x727 = 1420U;
	int8_t x728 = -1;
	int32_t t117 = -453;

    t117 = (x725&((x726-x727)*x728));

    if (t117 != 12) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint8_t x729 = UINT8_MAX;
	uint16_t x730 = UINT16_MAX;
	volatile int16_t x731 = INT16_MAX;
	uint16_t x732 = 19U;
	static volatile int32_t t118 = 0;

    t118 = (x729&((x730-x731)*x732));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x734 = 692223967883206898LLU;
	volatile int64_t x735 = INT64_MIN;
	int16_t x736 = INT16_MAX;

    t119 = (x733&((x734-x735)*x736));

    if (t119 != 0LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static int32_t x738 = 82;
	int64_t x739 = -1LL;
	uint32_t x740 = UINT32_MAX;
	static volatile int64_t t120 = -16356441997041013LL;

    t120 = (x737&((x738-x739)*x740));

    if (t120 != 448677LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint16_t x747 = 1090U;

    t121 = (x745&((x746-x747)*x748));

    if (t121 != 1050LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int32_t x749 = INT32_MIN;
	uint64_t x750 = 54471LLU;
	uint64_t x751 = 2145405212767014LLU;
	static volatile uint64_t t122 = 0LLU;

    t122 = (x749&((x750-x751)*x752));

    if (t122 != 706272597624487936LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x753 = 16;
	int64_t x755 = INT64_MAX;
	volatile int16_t x756 = INT16_MIN;
	uint64_t t123 = 3116754258LLU;

    t123 = (x753&((x754-x755)*x756));

    if (t123 != 0LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x762 = UINT16_MAX;
	int8_t x763 = -1;
	int16_t x764 = -1;

    t124 = (x761&((x762-x763)*x764));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x765 = INT32_MIN;
	volatile uint8_t x766 = 67U;
	int32_t t125 = INT32_MIN;

    t125 = (x765&((x766-x767)*x768));

    if (t125 != INT32_MIN) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x773 = INT8_MIN;
	static volatile uint64_t x774 = 1217176015504LLU;
	int32_t x775 = 5803438;
	uint64_t t126 = 2550LLU;

    t126 = (x773&((x774-x775)*x776));

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x777 = -1;
	volatile int32_t x778 = INT32_MIN;
	uint64_t x779 = 377309877935701520LLU;
	volatile uint8_t x780 = 48U;
	uint64_t t127 = 186158507295709812LLU;

    t127 = (x777&((x778-x779)*x780));

    if (t127 != 335869829716663552LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x785 = INT8_MIN;
	static uint8_t x787 = 15U;
	volatile uint16_t x788 = 443U;

    t128 = (x785&((x786-x787)*x788));

    if (t128 != 3743754368LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x789 = UINT64_MAX;
	static volatile int64_t x791 = -976886LL;
	volatile uint8_t x792 = 59U;

    t129 = (x789&((x790-x791)*x792));

    if (t129 != 57636215LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x793 = -36;
	int64_t x794 = -14006863951018LL;
	int16_t x795 = 11416;
	uint8_t x796 = UINT8_MAX;
	volatile int64_t t130 = -111538651609LL;

    t130 = (x793&((x794-x795)*x796));

    if (t130 != -3571750310420672LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint64_t x797 = UINT64_MAX;
	int64_t x798 = -1LL;
	static int64_t x799 = -1126178577399072LL;
	uint32_t x800 = 16U;
	uint64_t t131 = 360627407596664152LLU;

    t131 = (x797&((x798-x799)*x800));

    if (t131 != 18018857238385136LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x801 = INT32_MIN;
	static int16_t x802 = -1;
	static int32_t x803 = INT32_MIN;
	int16_t x804 = -1;
	int32_t t132 = INT32_MIN;

    t132 = (x801&((x802-x803)*x804));

    if (t132 != INT32_MIN) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x809 = INT16_MIN;
	int8_t x810 = 23;
	static int16_t x812 = INT16_MAX;
	volatile int32_t t133 = -3064;

    t133 = (x809&((x810-x811)*x812));

    if (t133 != 327680) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x817 = INT8_MIN;
	int32_t x818 = -1;
	volatile uint8_t x819 = 90U;
	uint16_t x820 = 26U;
	static volatile int32_t t134 = 305001214;

    t134 = (x817&((x818-x819)*x820));

    if (t134 != -2432) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x821 = INT32_MIN;
	int8_t x822 = INT8_MAX;
	static volatile uint32_t x823 = UINT32_MAX;
	volatile int16_t x824 = 1;
	static volatile uint32_t t135 = 30331U;

    t135 = (x821&((x822-x823)*x824));

    if (t135 != 0U) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x825 = 15U;
	int16_t x826 = -1;
	uint32_t x828 = 510826U;
	volatile uint32_t t136 = 0U;

    t136 = (x825&((x826-x827)*x828));

    if (t136 != 8U) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint16_t x837 = UINT16_MAX;
	static int32_t x838 = -1;
	int8_t x839 = INT8_MIN;
	volatile int16_t x840 = INT16_MIN;
	volatile int32_t t137 = 88519383;

    t137 = (x837&((x838-x839)*x840));

    if (t137 != 32768) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x841 = INT16_MAX;
	uint16_t x842 = 7903U;
	uint64_t t138 = 8LLU;

    t138 = (x841&((x842-x843)*x844));

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int16_t x846 = 1;
	static volatile uint16_t x848 = 85U;

    t139 = (x845&((x846-x847)*x848));

    if (t139 != 4294966191LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x849 = INT64_MIN;
	uint32_t x850 = 491388424U;
	static volatile int16_t x851 = INT16_MAX;
	int16_t x852 = INT16_MIN;
	int64_t t140 = 3415900307312LL;

    t140 = (x849&((x850-x851)*x852));

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint64_t x857 = 132101347222906LLU;
	int32_t x858 = INT32_MAX;
	volatile uint64_t x859 = 12036791070914535LLU;
	uint64_t x860 = UINT64_MAX;
	volatile uint64_t t141 = 815077853342LLU;

    t141 = (x857&((x858-x859)*x860));

    if (t141 != 70527926412648LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint8_t x865 = UINT8_MAX;
	volatile uint64_t x866 = 593240320344LLU;
	int8_t x867 = INT8_MAX;
	int64_t x868 = -1LL;
	uint64_t t142 = 25LLU;

    t142 = (x865&((x866-x867)*x868));

    if (t142 != 39LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint64_t x870 = 11925130247953LLU;
	volatile int8_t x871 = -3;
	int64_t x872 = -4275034659146209326LL;
	static volatile uint64_t t143 = 1412806852LLU;

    t143 = (x869&((x870-x871)*x872));

    if (t143 != 1975143016LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x877 = 2U;
	uint32_t x878 = UINT32_MAX;
	int16_t x880 = -1;

    t144 = (x877&((x878-x879)*x880));

    if (t144 != 0U) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint64_t x886 = 6713LLU;
	int8_t x887 = -14;
	static uint8_t x888 = UINT8_MAX;
	static volatile uint64_t t145 = 3208513LLU;

    t145 = (x885&((x886-x887)*x888));

    if (t145 != 0LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x889 = INT32_MIN;
	int16_t x890 = -1;
	uint16_t x891 = 0U;
	uint64_t x892 = 304642790075280786LLU;
	uint64_t t146 = 3383928LLU;

    t146 = (x889&((x890-x891)*x892));

    if (t146 != 18142101283195060224LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x894 = 20;
	static volatile int32_t x895 = -1;
	int8_t x896 = INT8_MAX;

    t147 = (x893&((x894-x895)*x896));

    if (t147 != 2626LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x897 = -4315071343732LL;
	uint16_t x898 = 1U;
	int64_t x899 = -1LL;

    t148 = (x897&((x898-x899)*x900));

    if (t148 != -4316442132480LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x901 = INT16_MAX;
	volatile uint32_t x903 = 454437006U;
	uint8_t x904 = UINT8_MAX;
	uint32_t t149 = 30857U;

    t149 = (x901&((x902-x903)*x904));

    if (t149 != 28084U) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x913 = UINT8_MAX;
	uint64_t x914 = 17746642LLU;
	int16_t x915 = INT16_MIN;
	static int64_t x916 = -4435237569473198994LL;
	uint64_t t150 = 0LLU;

    t150 = (x913&((x914-x915)*x916));

    if (t150 != 60LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x918 = -24;
	uint32_t x919 = 0U;
	uint32_t x920 = 7131131U;
	static uint64_t t151 = 14LLU;

    t151 = (x917&((x918-x919)*x920));

    if (t151 != 88637536LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x921 = -65409;
	int64_t x923 = -1LL;
	volatile int8_t x924 = INT8_MAX;
	volatile int64_t t152 = 951165875627732LL;

    t152 = (x921&((x922-x923)*x924));

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x925 = UINT16_MAX;
	volatile int32_t x927 = INT32_MAX;
	int16_t x928 = INT16_MIN;
	static volatile uint64_t t153 = 510660LLU;

    t153 = (x925&((x926-x927)*x928));

    if (t153 != 32768LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x934 = 35U;
	uint8_t x935 = UINT8_MAX;
	static volatile int8_t x936 = INT8_MIN;
	volatile int32_t t154 = 448;

    t154 = (x933&((x934-x935)*x936));

    if (t154 != 28160) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x937 = INT64_MIN;
	uint8_t x938 = 11U;
	volatile int64_t x939 = 36LL;
	volatile int64_t x940 = 422267299620443LL;
	volatile int64_t t155 = INT64_MIN;

    t155 = (x937&((x938-x939)*x940));

    if (t155 != INT64_MIN) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x941 = INT8_MIN;
	int64_t x942 = INT64_MIN;
	uint64_t x943 = UINT64_MAX;
	uint8_t x944 = UINT8_MAX;
	static volatile uint64_t t156 = 298678891506501661LLU;

    t156 = (x941&((x942-x943)*x944));

    if (t156 != 9223372036854775936LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint8_t x949 = 7U;
	volatile uint16_t x950 = 1991U;
	uint8_t x951 = 2U;
	static uint16_t x952 = UINT16_MAX;
	static volatile int32_t t157 = 0;

    t157 = (x949&((x950-x951)*x952));

    if (t157 != 3) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint16_t x957 = 17U;
	static int8_t x958 = INT8_MIN;
	static uint64_t x959 = 3615325353LLU;
	uint64_t t158 = 677237771851175328LLU;

    t158 = (x957&((x958-x959)*x960));

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x961 = INT32_MIN;
	uint32_t x962 = 321096933U;
	static int16_t x963 = -1;
	volatile uint32_t t159 = 52U;

    t159 = (x961&((x962-x963)*x964));

    if (t159 != 2147483648U) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x973 = 0U;
	uint8_t x974 = 0U;
	int16_t x975 = 1;
	uint32_t x976 = UINT32_MAX;
	volatile uint32_t t160 = 0U;

    t160 = (x973&((x974-x975)*x976));

    if (t160 != 0U) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x979 = UINT32_MAX;
	uint8_t x980 = 0U;
	volatile uint32_t t161 = 4126350U;

    t161 = (x977&((x978-x979)*x980));

    if (t161 != 0U) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x981 = INT32_MIN;
	int8_t x982 = INT8_MAX;
	static int16_t x983 = INT16_MAX;
	uint16_t x984 = UINT16_MAX;
	volatile int32_t t162 = INT32_MIN;

    t162 = (x981&((x982-x983)*x984));

    if (t162 != INT32_MIN) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint8_t x989 = UINT8_MAX;
	uint16_t x990 = UINT16_MAX;
	int64_t x991 = -1LL;
	volatile int16_t x992 = 287;
	int64_t t163 = 68043037986760381LL;

    t163 = (x989&((x990-x991)*x992));

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x998 = 3;
	int32_t x999 = INT32_MAX;
	uint32_t x1000 = 53315106U;

    t164 = (x997&((x998-x999)*x1000));

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x1001 = 0;
	volatile uint32_t x1003 = UINT32_MAX;
	int16_t x1004 = INT16_MIN;
	uint64_t t165 = 54LLU;

    t165 = (x1001&((x1002-x1003)*x1004));

    if (t165 != 0LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x1005 = INT16_MAX;
	uint64_t x1006 = 0LLU;
	static uint64_t t166 = 1003LLU;

    t166 = (x1005&((x1006-x1007)*x1008));

    if (t166 != 14810LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x1010 = UINT8_MAX;
	static int64_t x1011 = -1LL;
	int8_t x1012 = -61;
	volatile uint64_t t167 = 1265945LLU;

    t167 = (x1009&((x1010-x1011)*x1012));

    if (t167 != 508934448040936192LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x1014 = 1646;
	volatile int32_t x1015 = -7409626;
	int64_t x1016 = -1LL;
	int64_t t168 = 677946687LL;

    t168 = (x1013&((x1014-x1015)*x1016));

    if (t168 != 621082974235032LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x1022 = 0;
	volatile uint8_t x1024 = 1U;
	int64_t t169 = -450016171996421LL;

    t169 = (x1021&((x1022-x1023)*x1024));

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x1033 = INT16_MIN;
	volatile int32_t x1034 = 82892;
	static int64_t x1035 = -1LL;
	int8_t x1036 = INT8_MAX;
	int64_t t170 = -783LL;

    t170 = (x1033&((x1034-x1035)*x1036));

    if (t170 != 10518528LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x1037 = -1;
	int8_t x1038 = INT8_MIN;
	int8_t x1039 = -1;
	int16_t x1040 = 80;
	volatile int32_t t171 = 1;

    t171 = (x1037&((x1038-x1039)*x1040));

    if (t171 != -10160) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x1045 = -1LL;
	int16_t x1046 = -1;
	uint32_t x1047 = UINT32_MAX;
	int64_t t172 = 4386029586116LL;

    t172 = (x1045&((x1046-x1047)*x1048));

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint8_t x1049 = 35U;
	static int32_t x1050 = -1;
	static uint32_t x1051 = 288873818U;
	uint8_t x1052 = UINT8_MAX;
	static volatile uint32_t t173 = 13965151U;

    t173 = (x1049&((x1050-x1051)*x1052));

    if (t173 != 3U) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x1057 = -1;
	volatile uint16_t x1058 = 3U;
	int8_t x1060 = INT8_MIN;
	int32_t t174 = -2;

    t174 = (x1057&((x1058-x1059)*x1060));

    if (t174 != 5504) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x1070 = 90U;
	uint16_t x1071 = UINT16_MAX;
	uint32_t t175 = 133U;

    t175 = (x1069&((x1070-x1071)*x1072));

    if (t175 != 2147483648U) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile uint32_t t176 = 155U;

    t176 = (x1073&((x1074-x1075)*x1076));

    if (t176 != 0U) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x1085 = -1;
	int32_t x1087 = -12776095;
	uint32_t x1088 = 8042817U;
	volatile uint32_t t177 = 312313U;

    t177 = (x1085&((x1086-x1087)*x1088));

    if (t177 != 3076898281U) { NG(); } else { ; }
	
}

void f178(void) {
    	static int8_t x1093 = INT8_MAX;
	uint64_t x1094 = 71627998959677560LLU;
	uint16_t x1095 = UINT16_MAX;
	int8_t x1096 = INT8_MAX;
	static volatile uint64_t t178 = 913358338931467512LLU;

    t178 = (x1093&((x1094-x1095)*x1096));

    if (t178 != 7LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x1101 = UINT8_MAX;
	static volatile uint32_t x1102 = UINT32_MAX;
	uint8_t x1104 = 5U;
	volatile uint32_t t179 = 22977107U;

    t179 = (x1101&((x1102-x1103)*x1104));

    if (t179 != 123U) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x1105 = -1;
	static uint32_t x1106 = 7483U;
	static volatile int32_t x1107 = INT32_MIN;
	int16_t x1108 = -8;
	uint32_t t180 = 961U;

    t180 = (x1105&((x1106-x1107)*x1108));

    if (t180 != 4294907432U) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x1109 = 30;
	static volatile int64_t x1110 = INT64_MIN;
	uint64_t x1111 = UINT64_MAX;
	int16_t x1112 = -124;
	uint64_t t181 = 1811016LLU;

    t181 = (x1109&((x1110-x1111)*x1112));

    if (t181 != 4LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x1121 = -1;
	int32_t x1122 = -1;
	int8_t x1123 = 1;
	int16_t x1124 = INT16_MIN;

    t182 = (x1121&((x1122-x1123)*x1124));

    if (t182 != 65536) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x1129 = 8U;
	uint64_t x1130 = 34192131117524819LLU;
	int32_t x1131 = INT32_MIN;
	volatile uint16_t x1132 = 16304U;
	volatile uint64_t t183 = 558580439052135398LLU;

    t183 = (x1129&((x1130-x1131)*x1132));

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint8_t x1133 = UINT8_MAX;
	int32_t x1134 = 15248;
	uint16_t x1135 = UINT16_MAX;
	int16_t x1136 = 1;
	volatile int32_t t184 = 6;

    t184 = (x1133&((x1134-x1135)*x1136));

    if (t184 != 145) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint64_t x1139 = 27174149LLU;
	static volatile uint64_t t185 = 23382555656LLU;

    t185 = (x1137&((x1138-x1139)*x1140));

    if (t185 != 18446744073682354176LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x1146 = INT16_MIN;
	int8_t x1147 = INT8_MAX;
	volatile uint8_t x1148 = UINT8_MAX;
	uint64_t t186 = 3244598LLU;

    t186 = (x1145&((x1146-x1147)*x1148));

    if (t186 != 18446744073701163391LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x1150 = 2U;
	int64_t x1151 = -1LL;
	static int64_t x1152 = -1LL;
	int64_t t187 = 2295978633925334697LL;

    t187 = (x1149&((x1150-x1151)*x1152));

    if (t187 != 32765LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int16_t x1153 = 1484;
	uint8_t x1154 = UINT8_MAX;
	int32_t x1155 = 13769;
	uint32_t x1156 = UINT32_MAX;

    t188 = (x1153&((x1154-x1155)*x1156));

    if (t188 != 1224U) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint64_t x1158 = 22406433937229LLU;
	uint8_t x1159 = UINT8_MAX;
	volatile int64_t x1160 = -19682LL;
	volatile uint64_t t189 = 1LLU;

    t189 = (x1157&((x1158-x1159)*x1160));

    if (t189 != 18005740640962029348LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x1161 = 3U;
	uint64_t x1162 = 26078561066LLU;
	int64_t x1163 = 65142LL;
	int32_t x1164 = 645652;
	uint64_t t190 = 447261736236LLU;

    t190 = (x1161&((x1162-x1163)*x1164));

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x1165 = UINT16_MAX;
	uint16_t x1166 = UINT16_MAX;
	int64_t x1167 = -1LL;
	static uint32_t x1168 = 876U;
	volatile int64_t t191 = 5LL;

    t191 = (x1165&((x1166-x1167)*x1168));

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x1169 = UINT16_MAX;
	int16_t x1171 = 14653;
	int64_t x1172 = -1LL;

    t192 = (x1169&((x1170-x1171)*x1172));

    if (t192 != 14654LL) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x1173 = -1;
	uint64_t x1174 = UINT64_MAX;
	int8_t x1176 = -57;
	uint64_t t193 = 712007108590205202LLU;

    t193 = (x1173&((x1174-x1175)*x1176));

    if (t193 != 18446743951302983737LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x1178 = INT8_MIN;
	uint64_t x1179 = UINT64_MAX;
	static uint32_t x1180 = 670U;
	uint64_t t194 = 688081290918185227LLU;

    t194 = (x1177&((x1178-x1179)*x1180));

    if (t194 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int32_t x1181 = -6;
	uint8_t x1182 = UINT8_MAX;
	int32_t x1183 = -3078280;
	uint8_t x1184 = 0U;
	int32_t t195 = 214995987;

    t195 = (x1181&((x1182-x1183)*x1184));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint8_t x1186 = 1U;
	int16_t x1187 = INT16_MIN;
	int16_t x1188 = -2326;
	volatile uint64_t t196 = 14834330493450237LLU;

    t196 = (x1185&((x1186-x1187)*x1188));

    if (t196 != 18446744073633330922LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint32_t x1190 = 30U;
	uint64_t x1192 = 4125348161226445962LLU;
	uint64_t t197 = 16012940499LLU;

    t197 = (x1189&((x1190-x1191)*x1192));

    if (t197 != 0LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x1206 = INT8_MIN;
	int16_t x1207 = INT16_MAX;
	volatile int32_t t198 = 440278;

    t198 = (x1205&((x1206-x1207)*x1208));

    if (t198 != 210) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x1210 = INT64_MAX;
	static uint64_t x1211 = UINT64_MAX;
	uint64_t x1212 = 3490268LLU;
	uint64_t t199 = 0LLU;

    t199 = (x1209&((x1210-x1211)*x1212));

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

