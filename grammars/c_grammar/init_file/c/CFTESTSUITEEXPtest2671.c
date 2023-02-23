
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

static volatile int32_t x10 = INT32_MIN;
uint16_t x17 = 2U;
volatile int16_t x24 = INT16_MIN;
static volatile int64_t t4 = 119550160175LL;
int16_t x30 = INT16_MAX;
volatile uint32_t x40 = 1485114U;
uint64_t x45 = UINT64_MAX;
volatile uint8_t x68 = UINT8_MAX;
volatile uint32_t t9 = 2539U;
static int32_t x80 = INT32_MIN;
static uint64_t x87 = 133LLU;
uint8_t x102 = 4U;
volatile int32_t t15 = 404509;
static volatile uint16_t x116 = 15U;
int8_t x126 = -1;
static int16_t x127 = -1;
volatile uint64_t x141 = 54710594LLU;
int32_t x142 = -405;
uint64_t t20 = 128797911LLU;
int32_t x175 = INT32_MIN;
static uint64_t x177 = UINT64_MAX;
uint8_t x179 = UINT8_MAX;
volatile uint64_t t24 = 2772LLU;
volatile uint16_t x191 = 3525U;
int64_t x192 = 11217637987879618LL;
volatile uint16_t x193 = UINT16_MAX;
int32_t t26 = -1197;
int16_t x224 = 59;
volatile uint32_t t30 = UINT32_MAX;
int16_t x250 = -1;
volatile uint64_t x253 = UINT64_MAX;
uint64_t x255 = UINT64_MAX;
static volatile uint64_t t32 = UINT64_MAX;
int32_t x258 = INT32_MIN;
uint32_t x265 = 18U;
volatile uint32_t t34 = 335363U;
static int64_t x273 = INT64_MAX;
int8_t x298 = -2;
int32_t x316 = INT32_MIN;
uint32_t t43 = 19U;
uint16_t x321 = 31U;
static uint16_t x322 = 1U;
static int16_t x327 = -5;
uint32_t x328 = 721681733U;
int64_t x354 = -20369975165415LL;
static int8_t x355 = INT8_MAX;
int64_t x384 = INT64_MAX;
int32_t x385 = 2509944;
uint64_t x390 = 672807609LLU;
int8_t x391 = INT8_MIN;
int8_t x392 = -1;
static int32_t x402 = -4;
int32_t x411 = -214899065;
int8_t x414 = -20;
volatile uint32_t t54 = 121920434U;
volatile int64_t x429 = 1131801534043LL;
volatile int64_t x433 = 13667474262550LL;
volatile int32_t t58 = -2057074;
uint32_t x459 = 268U;
int8_t x484 = INT8_MIN;
volatile uint64_t x485 = 601128782526504LLU;
static int32_t x498 = INT32_MIN;
static int16_t x500 = INT16_MIN;
int32_t x504 = INT32_MAX;
int64_t x527 = INT64_MIN;
int64_t x538 = INT64_MAX;
int32_t x543 = INT32_MAX;
static int32_t t69 = 3998;
uint16_t x561 = 19U;
volatile int32_t x587 = INT32_MAX;
uint32_t x595 = 13269U;
uint16_t x607 = UINT16_MAX;
uint64_t x620 = 559296750LLU;
uint64_t x625 = 16307462148LLU;
int32_t x628 = 33372;
int16_t x634 = INT16_MIN;
static int32_t x635 = INT32_MIN;
uint8_t x645 = 1U;
int32_t x646 = INT32_MAX;
int8_t x652 = -2;
int32_t x663 = 252051;
uint8_t x674 = 4U;
int16_t x690 = -1;
volatile int64_t x707 = 273742170442LL;
int8_t x726 = 1;
int8_t x732 = INT8_MIN;
volatile uint64_t x736 = UINT64_MAX;
static volatile uint64_t t91 = UINT64_MAX;
uint64_t x737 = UINT64_MAX;
int16_t x744 = INT16_MIN;
int32_t x774 = INT32_MIN;
int8_t x776 = INT8_MIN;
uint32_t x780 = 18U;
int32_t x796 = 961682;
int64_t x814 = 0LL;
volatile uint8_t x821 = 25U;
static int64_t x822 = -1LL;
int8_t x827 = 29;
volatile int64_t x829 = 11754880512LL;
int16_t x831 = INT16_MIN;
int64_t x835 = -119861410262LL;
volatile int16_t x855 = 102;
volatile int8_t x856 = -1;
uint32_t x860 = 24544U;
volatile uint64_t x862 = 11976128207249319LLU;
int8_t x864 = 0;
uint64_t t111 = 233840LLU;
volatile int32_t t112 = 23;
int64_t x877 = 20985645418LL;
static volatile int64_t t113 = 4053295LL;
uint16_t x897 = 1U;
int8_t x898 = -1;
int16_t x912 = INT16_MAX;
volatile uint32_t x913 = 238220267U;
int8_t x914 = INT8_MIN;
static int64_t x929 = INT64_MAX;
uint16_t x932 = 24847U;
static int8_t x934 = INT8_MAX;
int32_t x935 = INT32_MAX;
static volatile uint16_t x964 = 23576U;
uint32_t t123 = 22548U;
uint32_t x969 = 39967162U;
uint8_t x975 = 72U;
int8_t x989 = 4;
static volatile int32_t x1002 = -27481385;
uint16_t x1017 = 33U;
int16_t x1018 = -1;
int32_t x1019 = INT32_MIN;
volatile int64_t x1020 = INT64_MIN;
int32_t x1027 = INT32_MIN;
int32_t t131 = -1354;
volatile int64_t x1034 = INT64_MIN;
int8_t x1036 = INT8_MIN;
int64_t t132 = INT64_MAX;
int8_t x1044 = -1;
uint16_t x1049 = 4U;
uint32_t x1050 = 1429537760U;
volatile int32_t t136 = 12;
static uint16_t x1069 = 124U;
static int8_t x1074 = INT8_MIN;
volatile uint32_t t139 = 57759U;
int32_t x1098 = -1857645;
volatile uint32_t t140 = 268646611U;
volatile int16_t x1105 = 6225;
static int64_t x1107 = INT64_MIN;
static int32_t t142 = 3121;
uint32_t x1112 = 8335U;
int32_t t143 = 195619;
int32_t x1114 = INT32_MIN;
int16_t x1115 = 12881;
uint64_t x1117 = 14271917521LLU;
uint16_t x1121 = UINT16_MAX;
static int64_t x1122 = INT64_MAX;
uint32_t x1131 = UINT32_MAX;
volatile uint64_t t148 = UINT64_MAX;
volatile int32_t x1140 = 18;
uint16_t x1146 = 22936U;
uint64_t x1151 = 31922LLU;
volatile uint64_t x1153 = 2669246310036LLU;
volatile int16_t x1155 = INT16_MIN;
int8_t x1156 = -1;
volatile uint64_t t153 = 75LLU;
volatile int32_t t154 = 80;
uint64_t x1170 = UINT64_MAX;
int8_t x1172 = INT8_MIN;
static int32_t t155 = 15;
volatile uint32_t t156 = 56201U;
uint8_t x1194 = 11U;
int64_t x1216 = 547938781095603LL;
static uint8_t x1218 = UINT8_MAX;
uint16_t x1231 = 29U;
int64_t x1235 = INT64_MAX;
static int8_t x1250 = INT8_MAX;
int64_t t163 = 18931955860LL;
static int32_t x1258 = -1;
int32_t x1263 = INT32_MIN;
int64_t x1285 = 823528LL;
static int32_t t169 = 31;
int8_t x1293 = INT8_MAX;
int8_t x1299 = INT8_MAX;
int8_t x1325 = 0;
int64_t x1326 = INT64_MIN;
int64_t x1335 = INT64_MAX;
uint32_t x1345 = 12U;
int32_t x1353 = INT32_MAX;
int16_t x1370 = 7180;
int32_t x1373 = 6765781;
int64_t x1382 = -1LL;
volatile uint64_t t184 = UINT64_MAX;
int64_t x1403 = 277839465LL;
int64_t x1404 = 228637871LL;
static uint8_t x1415 = 0U;
uint64_t x1416 = 175944516LLU;
uint64_t x1418 = 262742LLU;
uint64_t x1419 = 3LLU;
int16_t x1421 = INT16_MAX;
int64_t x1423 = -1LL;
uint8_t x1430 = 1U;
uint32_t x1433 = UINT32_MAX;
uint16_t x1444 = 1712U;
int64_t x1449 = INT64_MAX;
volatile uint8_t x1451 = 9U;
int8_t x1493 = 14;
uint32_t x1495 = 28U;
int64_t x1496 = INT64_MIN;
volatile int32_t t199 = -43275;


void f0(void) {
    	uint64_t x1 = 16453515LLU;
	volatile uint32_t x2 = UINT32_MAX;
	volatile uint16_t x3 = 6821U;
	static int8_t x4 = INT8_MIN;
	volatile uint64_t t0 = 1895434948429314LLU;

    t0 = (x1>>((x2^x3)>x4));

    if (t0 != 16453515LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x5 = INT32_MAX;
	int64_t x6 = 26573750307499562LL;
	int32_t x7 = 117;
	int8_t x8 = INT8_MIN;
	volatile int32_t t1 = 557;

    t1 = (x5>>((x6^x7)>x8));

    if (t1 != 1073741823) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = UINT32_MAX;
	static int64_t x11 = -180200254874067LL;
	int8_t x12 = INT8_MIN;
	uint32_t t2 = 109U;

    t2 = (x9>>((x10^x11)>x12));

    if (t2 != 2147483647U) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x18 = 0LLU;
	uint64_t x19 = 217557845LLU;
	int32_t x20 = -1;
	static volatile int32_t t3 = -30375372;

    t3 = (x17>>((x18^x19)>x20));

    if (t3 != 2) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x21 = INT64_MAX;
	int16_t x22 = INT16_MIN;
	int16_t x23 = INT16_MIN;

    t4 = (x21>>((x22^x23)>x24));

    if (t4 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x29 = UINT64_MAX;
	volatile uint16_t x31 = 24787U;
	int8_t x32 = -1;
	volatile uint64_t t5 = 41706LLU;

    t5 = (x29>>((x30^x31)>x32));

    if (t5 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint8_t x37 = 62U;
	int32_t x38 = INT32_MIN;
	int8_t x39 = INT8_MAX;
	volatile int32_t t6 = -144899;

    t6 = (x37>>((x38^x39)>x40));

    if (t6 != 31) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x46 = INT64_MIN;
	int8_t x47 = 10;
	uint8_t x48 = 11U;
	volatile uint64_t t7 = UINT64_MAX;

    t7 = (x45>>((x46^x47)>x48));

    if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x49 = UINT16_MAX;
	int8_t x50 = -1;
	int64_t x51 = INT64_MAX;
	volatile uint32_t x52 = 3U;
	int32_t t8 = 157661;

    t8 = (x49>>((x50^x51)>x52));

    if (t8 != 65535) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x65 = 805U;
	int8_t x66 = 1;
	int16_t x67 = -1;

    t9 = (x65>>((x66^x67)>x68));

    if (t9 != 805U) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x73 = INT32_MAX;
	int16_t x74 = -1;
	static int8_t x75 = 7;
	int16_t x76 = -1;
	int32_t t10 = INT32_MAX;

    t10 = (x73>>((x74^x75)>x76));

    if (t10 != INT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x77 = UINT32_MAX;
	int8_t x78 = INT8_MIN;
	int32_t x79 = INT32_MIN;
	uint32_t t11 = 353605U;

    t11 = (x77>>((x78^x79)>x80));

    if (t11 != 2147483647U) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int8_t x81 = 45;
	int32_t x82 = INT32_MAX;
	static int64_t x83 = INT64_MAX;
	uint32_t x84 = 20640U;
	int32_t t12 = 29;

    t12 = (x81>>((x82^x83)>x84));

    if (t12 != 22) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x85 = 79628847859LL;
	volatile int8_t x86 = INT8_MIN;
	uint16_t x88 = UINT16_MAX;
	int64_t t13 = -5331149LL;

    t13 = (x85>>((x86^x87)>x88));

    if (t13 != 39814423929LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x101 = 20;
	int64_t x103 = -14570LL;
	volatile int16_t x104 = INT16_MAX;
	int32_t t14 = 58068;

    t14 = (x101>>((x102^x103)>x104));

    if (t14 != 20) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x105 = 25;
	volatile int8_t x106 = -1;
	int8_t x107 = INT8_MIN;
	int16_t x108 = INT16_MIN;

    t15 = (x105>>((x106^x107)>x108));

    if (t15 != 12) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint64_t x109 = 7077679291098LLU;
	int32_t x110 = INT32_MIN;
	int16_t x111 = INT16_MIN;
	static int8_t x112 = INT8_MAX;
	volatile uint64_t t16 = 15315309LLU;

    t16 = (x109>>((x110^x111)>x112));

    if (t16 != 3538839645549LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x113 = 455;
	uint16_t x114 = 339U;
	uint8_t x115 = UINT8_MAX;
	volatile int32_t t17 = 10;

    t17 = (x113>>((x114^x115)>x116));

    if (t17 != 227) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x125 = 367U;
	uint64_t x128 = 603LLU;
	int32_t t18 = -6635;

    t18 = (x125>>((x126^x127)>x128));

    if (t18 != 367) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x129 = UINT8_MAX;
	volatile int64_t x130 = INT64_MAX;
	volatile int8_t x131 = INT8_MAX;
	int32_t x132 = INT32_MAX;
	int32_t t19 = 1556874;

    t19 = (x129>>((x130^x131)>x132));

    if (t19 != 127) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x143 = -1;
	uint8_t x144 = UINT8_MAX;

    t20 = (x141>>((x142^x143)>x144));

    if (t20 != 27355297LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x145 = INT8_MAX;
	static volatile int64_t x146 = 43751LL;
	uint16_t x147 = UINT16_MAX;
	uint16_t x148 = 199U;
	int32_t t21 = 1122332;

    t21 = (x145>>((x146^x147)>x148));

    if (t21 != 63) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x161 = UINT16_MAX;
	static int16_t x162 = -1;
	int64_t x163 = INT64_MIN;
	int16_t x164 = 143;
	static int32_t t22 = -54;

    t22 = (x161>>((x162^x163)>x164));

    if (t22 != 32767) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x173 = INT16_MAX;
	volatile uint16_t x174 = 10U;
	uint16_t x176 = UINT16_MAX;
	static volatile int32_t t23 = -3360679;

    t23 = (x173>>((x174^x175)>x176));

    if (t23 != 32767) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x178 = 48U;
	volatile int64_t x180 = -1LL;

    t24 = (x177>>((x178^x179)>x180));

    if (t24 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint64_t x189 = 807658179410854160LLU;
	int64_t x190 = 1LL;
	uint64_t t25 = 8883225645593987LLU;

    t25 = (x189>>((x190^x191)>x192));

    if (t25 != 807658179410854160LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int8_t x194 = INT8_MIN;
	static int32_t x195 = INT32_MIN;
	static uint8_t x196 = 0U;

    t26 = (x193>>((x194^x195)>x196));

    if (t26 != 32767) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int16_t x209 = INT16_MAX;
	uint64_t x210 = 1690366LLU;
	int64_t x211 = INT64_MAX;
	int16_t x212 = 163;
	int32_t t27 = 205868906;

    t27 = (x209>>((x210^x211)>x212));

    if (t27 != 16383) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x221 = INT8_MAX;
	static int64_t x222 = -4201251365571643LL;
	static int16_t x223 = INT16_MIN;
	int32_t t28 = 3;

    t28 = (x221>>((x222^x223)>x224));

    if (t28 != 63) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile uint8_t x233 = UINT8_MAX;
	volatile int16_t x234 = -444;
	uint32_t x235 = UINT32_MAX;
	volatile int64_t x236 = INT64_MIN;
	static volatile int32_t t29 = -4;

    t29 = (x233>>((x234^x235)>x236));

    if (t29 != 127) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x245 = UINT32_MAX;
	volatile int64_t x246 = -850LL;
	int32_t x247 = -1;
	static int32_t x248 = 984436;

    t30 = (x245>>((x246^x247)>x248));

    if (t30 != UINT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x249 = 956218482381374LL;
	static uint32_t x251 = 823912U;
	int64_t x252 = INT64_MIN;
	volatile int64_t t31 = -994627170140981237LL;

    t31 = (x249>>((x250^x251)>x252));

    if (t31 != 478109241190687LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x254 = -1;
	uint64_t x256 = 19101LLU;

    t32 = (x253>>((x254^x255)>x256));

    if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint32_t x257 = 39683807U;
	volatile int64_t x259 = INT64_MIN;
	uint64_t x260 = UINT64_MAX;
	uint32_t t33 = 4169840U;

    t33 = (x257>>((x258^x259)>x260));

    if (t33 != 39683807U) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x266 = -1;
	int8_t x267 = -29;
	int64_t x268 = -16184538589LL;

    t34 = (x265>>((x266^x267)>x268));

    if (t34 != 9U) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x269 = 54U;
	int8_t x270 = -1;
	volatile int8_t x271 = 0;
	volatile int8_t x272 = -1;
	int32_t t35 = 239;

    t35 = (x269>>((x270^x271)>x272));

    if (t35 != 54) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x274 = INT16_MIN;
	int64_t x275 = INT64_MIN;
	volatile int16_t x276 = INT16_MAX;
	volatile int64_t t36 = 12017039LL;

    t36 = (x273>>((x274^x275)>x276));

    if (t36 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x277 = UINT32_MAX;
	int64_t x278 = INT64_MAX;
	int16_t x279 = -478;
	volatile int16_t x280 = INT16_MIN;
	static uint32_t t37 = UINT32_MAX;

    t37 = (x277>>((x278^x279)>x280));

    if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x297 = INT8_MAX;
	uint64_t x299 = 310530LLU;
	int8_t x300 = -1;
	int32_t t38 = -139;

    t38 = (x297>>((x298^x299)>x300));

    if (t38 != 127) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x301 = 0;
	uint64_t x302 = 806522840LLU;
	static int32_t x303 = -1;
	uint32_t x304 = 1U;
	static volatile int32_t t39 = 496675856;

    t39 = (x301>>((x302^x303)>x304));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint8_t x305 = 55U;
	int64_t x306 = -1LL;
	uint16_t x307 = 919U;
	int32_t x308 = 0;
	volatile int32_t t40 = 20604;

    t40 = (x305>>((x306^x307)>x308));

    if (t40 != 55) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x309 = INT16_MAX;
	int8_t x310 = INT8_MAX;
	static int32_t x311 = INT32_MAX;
	static uint32_t x312 = 7849U;
	int32_t t41 = 18;

    t41 = (x309>>((x310^x311)>x312));

    if (t41 != 16383) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x313 = INT32_MAX;
	static int16_t x314 = INT16_MIN;
	volatile uint8_t x315 = 33U;
	static int32_t t42 = 8;

    t42 = (x313>>((x314^x315)>x316));

    if (t42 != 1073741823) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x317 = 1769U;
	volatile int8_t x318 = INT8_MAX;
	int32_t x319 = INT32_MIN;
	int8_t x320 = 1;

    t43 = (x317>>((x318^x319)>x320));

    if (t43 != 1769U) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x323 = INT64_MAX;
	int32_t x324 = INT32_MAX;
	int32_t t44 = 844446;

    t44 = (x321>>((x322^x323)>x324));

    if (t44 != 15) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x325 = UINT8_MAX;
	int32_t x326 = -1;
	volatile int32_t t45 = 3509;

    t45 = (x325>>((x326^x327)>x328));

    if (t45 != 255) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x353 = INT16_MAX;
	int64_t x356 = 199224LL;
	int32_t t46 = 364259026;

    t46 = (x353>>((x354^x355)>x356));

    if (t46 != 32767) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint8_t x373 = UINT8_MAX;
	volatile int64_t x374 = INT64_MIN;
	volatile int32_t x375 = 5869;
	volatile uint16_t x376 = UINT16_MAX;
	static volatile int32_t t47 = -119345;

    t47 = (x373>>((x374^x375)>x376));

    if (t47 != 255) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x381 = 221;
	static uint32_t x382 = 862935U;
	int32_t x383 = 57;
	static int32_t t48 = -90;

    t48 = (x381>>((x382^x383)>x384));

    if (t48 != 221) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x386 = UINT8_MAX;
	static int32_t x387 = -1;
	int64_t x388 = -1LL;
	volatile int32_t t49 = -2160944;

    t49 = (x385>>((x386^x387)>x388));

    if (t49 != 2509944) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x389 = 31;
	volatile int32_t t50 = -111199279;

    t50 = (x389>>((x390^x391)>x392));

    if (t50 != 31) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x401 = INT64_MAX;
	int64_t x403 = INT64_MAX;
	int16_t x404 = INT16_MIN;
	static volatile int64_t t51 = INT64_MAX;

    t51 = (x401>>((x402^x403)>x404));

    if (t51 != INT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x409 = 335991537357345105LLU;
	int16_t x410 = 0;
	uint8_t x412 = 0U;
	static uint64_t t52 = 3LLU;

    t52 = (x409>>((x410^x411)>x412));

    if (t52 != 335991537357345105LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x413 = INT64_MAX;
	static uint64_t x415 = 15355LLU;
	int8_t x416 = -13;
	int64_t t53 = INT64_MAX;

    t53 = (x413>>((x414^x415)>x416));

    if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint32_t x417 = 489U;
	uint8_t x418 = 0U;
	uint64_t x419 = 5400080818LLU;
	static int16_t x420 = 1;

    t54 = (x417>>((x418^x419)>x420));

    if (t54 != 244U) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x430 = INT64_MIN;
	int64_t x431 = INT64_MIN;
	uint8_t x432 = 1U;
	static volatile int64_t t55 = -2LL;

    t55 = (x429>>((x430^x431)>x432));

    if (t55 != 1131801534043LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x434 = INT16_MAX;
	int32_t x435 = INT32_MIN;
	int32_t x436 = INT32_MAX;
	int64_t t56 = 199LL;

    t56 = (x433>>((x434^x435)>x436));

    if (t56 != 13667474262550LL) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint64_t x445 = UINT64_MAX;
	int32_t x446 = -217651;
	int32_t x447 = INT32_MIN;
	uint64_t x448 = 1946453125738510LLU;
	static volatile uint64_t t57 = UINT64_MAX;

    t57 = (x445>>((x446^x447)>x448));

    if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x453 = 4U;
	int8_t x454 = 1;
	static int16_t x455 = -1;
	volatile int8_t x456 = 1;

    t58 = (x453>>((x454^x455)>x456));

    if (t58 != 4) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x457 = 18443423;
	volatile uint32_t x458 = 5U;
	int32_t x460 = INT32_MIN;
	int32_t t59 = -1;

    t59 = (x457>>((x458^x459)>x460));

    if (t59 != 18443423) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile uint16_t x465 = UINT16_MAX;
	volatile int32_t x466 = -23374224;
	volatile int32_t x467 = -712770678;
	volatile uint8_t x468 = UINT8_MAX;
	volatile int32_t t60 = 509819;

    t60 = (x465>>((x466^x467)>x468));

    if (t60 != 32767) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x477 = INT64_MAX;
	volatile int16_t x478 = INT16_MIN;
	static int64_t x479 = INT64_MIN;
	int32_t x480 = -31085;
	int64_t t61 = -16LL;

    t61 = (x477>>((x478^x479)>x480));

    if (t61 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x481 = 406697434LL;
	uint16_t x482 = UINT16_MAX;
	int32_t x483 = INT32_MIN;
	volatile int64_t t62 = -51254LL;

    t62 = (x481>>((x482^x483)>x484));

    if (t62 != 406697434LL) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x486 = INT32_MAX;
	int64_t x487 = INT64_MIN;
	static int16_t x488 = INT16_MIN;
	uint64_t t63 = 45667778826LLU;

    t63 = (x485>>((x486^x487)>x488));

    if (t63 != 601128782526504LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x497 = 851;
	uint8_t x499 = UINT8_MAX;
	static int32_t t64 = -423932757;

    t64 = (x497>>((x498^x499)>x500));

    if (t64 != 851) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x501 = 2;
	volatile int8_t x502 = -15;
	int32_t x503 = INT32_MIN;
	int32_t t65 = -1;

    t65 = (x501>>((x502^x503)>x504));

    if (t65 != 2) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x525 = 9U;
	volatile int32_t x526 = INT32_MAX;
	static uint16_t x528 = UINT16_MAX;
	volatile int32_t t66 = 15145623;

    t66 = (x525>>((x526^x527)>x528));

    if (t66 != 9) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile uint16_t x537 = UINT16_MAX;
	int16_t x539 = -1;
	uint64_t x540 = UINT64_MAX;
	volatile int32_t t67 = 1;

    t67 = (x537>>((x538^x539)>x540));

    if (t67 != 65535) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x541 = 29U;
	int64_t x542 = 3625641110436988003LL;
	uint32_t x544 = 10U;
	static uint32_t t68 = 14108U;

    t68 = (x541>>((x542^x543)>x544));

    if (t68 != 14U) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x545 = 16231U;
	int8_t x546 = -1;
	int8_t x547 = INT8_MIN;
	uint64_t x548 = 192LLU;

    t69 = (x545>>((x546^x547)>x548));

    if (t69 != 16231) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x562 = 248U;
	static int16_t x563 = -1;
	uint64_t x564 = 5921993440929LLU;
	volatile int32_t t70 = -393940;

    t70 = (x561>>((x562^x563)>x564));

    if (t70 != 9) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x581 = 87750715LLU;
	uint8_t x582 = 0U;
	int64_t x583 = INT64_MIN;
	volatile int16_t x584 = -1;
	volatile uint64_t t71 = 61786086507494147LLU;

    t71 = (x581>>((x582^x583)>x584));

    if (t71 != 87750715LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x585 = 14663960369133LLU;
	volatile uint32_t x586 = 213702866U;
	int64_t x588 = 1887LL;
	uint64_t t72 = 711LLU;

    t72 = (x585>>((x586^x587)>x588));

    if (t72 != 7331980184566LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x589 = 0;
	volatile uint16_t x590 = 18U;
	uint64_t x591 = 34766957365704837LLU;
	uint16_t x592 = 7U;
	int32_t t73 = 214975;

    t73 = (x589>>((x590^x591)>x592));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x593 = INT16_MAX;
	static volatile int16_t x594 = INT16_MIN;
	uint8_t x596 = 0U;
	volatile int32_t t74 = -1299593;

    t74 = (x593>>((x594^x595)>x596));

    if (t74 != 16383) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint16_t x605 = 364U;
	uint64_t x606 = 961775650106LLU;
	volatile uint64_t x608 = UINT64_MAX;
	int32_t t75 = -168433510;

    t75 = (x605>>((x606^x607)>x608));

    if (t75 != 364) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x617 = INT64_MAX;
	static uint16_t x618 = 3348U;
	uint32_t x619 = 1016U;
	int64_t t76 = INT64_MAX;

    t76 = (x617>>((x618^x619)>x620));

    if (t76 != INT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x626 = 1;
	volatile uint64_t x627 = 15892448906315LLU;
	volatile uint64_t t77 = 3413LLU;

    t77 = (x625>>((x626^x627)>x628));

    if (t77 != 8153731074LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x633 = INT32_MAX;
	int32_t x636 = 21553;
	int32_t t78 = -154888;

    t78 = (x633>>((x634^x635)>x636));

    if (t78 != 1073741823) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x637 = 126;
	static int64_t x638 = INT64_MIN;
	volatile int64_t x639 = INT64_MAX;
	uint32_t x640 = UINT32_MAX;
	int32_t t79 = -23511295;

    t79 = (x637>>((x638^x639)>x640));

    if (t79 != 126) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x647 = 112375;
	static int8_t x648 = 0;
	static volatile int32_t t80 = -26162006;

    t80 = (x645>>((x646^x647)>x648));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x649 = INT64_MAX;
	static uint32_t x650 = 48342293U;
	static int32_t x651 = -1;
	static int64_t t81 = INT64_MAX;

    t81 = (x649>>((x650^x651)>x652));

    if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x653 = INT64_MAX;
	static int16_t x654 = -1;
	int32_t x655 = INT32_MAX;
	int64_t x656 = -1LL;
	static volatile int64_t t82 = INT64_MAX;

    t82 = (x653>>((x654^x655)>x656));

    if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint32_t x661 = 753U;
	int64_t x662 = -3026152379LL;
	uint8_t x664 = 10U;
	uint32_t t83 = 1518759U;

    t83 = (x661>>((x662^x663)>x664));

    if (t83 != 753U) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x673 = INT8_MAX;
	uint64_t x675 = 10470LLU;
	uint8_t x676 = UINT8_MAX;
	int32_t t84 = 89;

    t84 = (x673>>((x674^x675)>x676));

    if (t84 != 63) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x689 = 3208359LL;
	static uint8_t x691 = UINT8_MAX;
	static int16_t x692 = INT16_MIN;
	int64_t t85 = 6240891LL;

    t85 = (x689>>((x690^x691)>x692));

    if (t85 != 1604179LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x697 = UINT32_MAX;
	uint32_t x698 = 15U;
	int8_t x699 = INT8_MIN;
	volatile uint64_t x700 = 60297840317469991LLU;
	volatile uint32_t t86 = UINT32_MAX;

    t86 = (x697>>((x698^x699)>x700));

    if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint8_t x705 = 1U;
	static int32_t x706 = INT32_MAX;
	uint16_t x708 = 9427U;
	volatile int32_t t87 = -113560;

    t87 = (x705>>((x706^x707)>x708));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint16_t x709 = UINT16_MAX;
	int32_t x710 = INT32_MIN;
	int8_t x711 = INT8_MIN;
	int8_t x712 = 2;
	static volatile int32_t t88 = 23591139;

    t88 = (x709>>((x710^x711)>x712));

    if (t88 != 32767) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x725 = 2177834010190LLU;
	int16_t x727 = 39;
	int8_t x728 = 12;
	static volatile uint64_t t89 = 15312792LLU;

    t89 = (x725>>((x726^x727)>x728));

    if (t89 != 1088917005095LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x729 = 10U;
	static int64_t x730 = INT64_MIN;
	volatile uint64_t x731 = 24LLU;
	volatile int32_t t90 = 72;

    t90 = (x729>>((x730^x731)>x732));

    if (t90 != 10) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint64_t x733 = UINT64_MAX;
	static int32_t x734 = -1;
	int64_t x735 = -1LL;

    t91 = (x733>>((x734^x735)>x736));

    if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x738 = 0U;
	volatile uint64_t x739 = UINT64_MAX;
	static uint32_t x740 = 39U;
	uint64_t t92 = 0LLU;

    t92 = (x737>>((x738^x739)>x740));

    if (t92 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x741 = 18027744261LL;
	uint8_t x742 = 2U;
	uint32_t x743 = UINT32_MAX;
	int64_t t93 = 10720348157111544LL;

    t93 = (x741>>((x742^x743)>x744));

    if (t93 != 9013872130LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x749 = UINT8_MAX;
	int8_t x750 = INT8_MIN;
	int8_t x751 = INT8_MIN;
	volatile int64_t x752 = INT64_MIN;
	volatile int32_t t94 = 2;

    t94 = (x749>>((x750^x751)>x752));

    if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
    	static int8_t x757 = 5;
	volatile int16_t x758 = -1;
	static volatile int64_t x759 = INT64_MIN;
	static int32_t x760 = 7581;
	static int32_t t95 = 120;

    t95 = (x757>>((x758^x759)>x760));

    if (t95 != 2) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x773 = 12593;
	volatile int8_t x775 = -1;
	volatile int32_t t96 = 4;

    t96 = (x773>>((x774^x775)>x776));

    if (t96 != 6296) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint8_t x777 = 12U;
	volatile uint64_t x778 = 1900864LLU;
	volatile int8_t x779 = INT8_MIN;
	int32_t t97 = -1;

    t97 = (x777>>((x778^x779)>x780));

    if (t97 != 6) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x789 = UINT16_MAX;
	int32_t x790 = INT32_MAX;
	int8_t x791 = INT8_MIN;
	static volatile uint64_t x792 = UINT64_MAX;
	static volatile int32_t t98 = 2;

    t98 = (x789>>((x790^x791)>x792));

    if (t98 != 65535) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x793 = INT16_MAX;
	uint8_t x794 = 52U;
	static volatile int64_t x795 = INT64_MIN;
	volatile int32_t t99 = -770861;

    t99 = (x793>>((x794^x795)>x796));

    if (t99 != 32767) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint16_t x809 = 12118U;
	uint16_t x810 = 147U;
	uint16_t x811 = UINT16_MAX;
	int16_t x812 = INT16_MAX;
	volatile int32_t t100 = 70416708;

    t100 = (x809>>((x810^x811)>x812));

    if (t100 != 6059) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x813 = UINT64_MAX;
	int64_t x815 = INT64_MAX;
	uint64_t x816 = 5498648281LLU;
	volatile uint64_t t101 = 1253879549LLU;

    t101 = (x813>>((x814^x815)>x816));

    if (t101 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x823 = -3;
	uint64_t x824 = 363782743256LLU;
	static int32_t t102 = -1;

    t102 = (x821>>((x822^x823)>x824));

    if (t102 != 25) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x825 = INT8_MAX;
	volatile int32_t x826 = INT32_MIN;
	volatile int8_t x828 = 10;
	static int32_t t103 = 45100006;

    t103 = (x825>>((x826^x827)>x828));

    if (t103 != 127) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x830 = INT16_MIN;
	uint32_t x832 = UINT32_MAX;
	volatile int64_t t104 = -156885818627243497LL;

    t104 = (x829>>((x830^x831)>x832));

    if (t104 != 11754880512LL) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int64_t x833 = 4306LL;
	uint16_t x834 = 6U;
	static int8_t x836 = -1;
	static int64_t t105 = -582191897LL;

    t105 = (x833>>((x834^x835)>x836));

    if (t105 != 4306LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint8_t x841 = 19U;
	int32_t x842 = -629;
	volatile int8_t x843 = 3;
	static int8_t x844 = -1;
	static int32_t t106 = 254473973;

    t106 = (x841>>((x842^x843)>x844));

    if (t106 != 19) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint64_t x845 = UINT64_MAX;
	int64_t x846 = INT64_MIN;
	uint32_t x847 = UINT32_MAX;
	int16_t x848 = -826;
	static uint64_t t107 = UINT64_MAX;

    t107 = (x845>>((x846^x847)>x848));

    if (t107 != UINT64_MAX) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x853 = 313094;
	uint8_t x854 = UINT8_MAX;
	int32_t t108 = -362971329;

    t108 = (x853>>((x854^x855)>x856));

    if (t108 != 156547) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x857 = INT64_MAX;
	int8_t x858 = -1;
	int16_t x859 = -119;
	int64_t t109 = INT64_MAX;

    t109 = (x857>>((x858^x859)>x860));

    if (t109 != INT64_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x861 = INT32_MAX;
	uint64_t x863 = 2255925665790934234LLU;
	volatile int32_t t110 = 665024563;

    t110 = (x861>>((x862^x863)>x864));

    if (t110 != 1073741823) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint64_t x865 = 122093134745604LLU;
	int16_t x866 = 246;
	uint16_t x867 = 3556U;
	uint16_t x868 = 14U;

    t111 = (x865>>((x866^x867)>x868));

    if (t111 != 61046567372802LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int32_t x869 = 127803122;
	volatile uint64_t x870 = 1016LLU;
	volatile int16_t x871 = 1;
	static uint8_t x872 = UINT8_MAX;

    t112 = (x869>>((x870^x871)>x872));

    if (t112 != 63901561) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x878 = 327437927725LLU;
	int16_t x879 = INT16_MAX;
	uint16_t x880 = UINT16_MAX;

    t113 = (x877>>((x878^x879)>x880));

    if (t113 != 10492822709LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x893 = 8;
	static volatile int64_t x894 = -1LL;
	int32_t x895 = 57566;
	volatile int8_t x896 = INT8_MIN;
	volatile int32_t t114 = -217;

    t114 = (x893>>((x894^x895)>x896));

    if (t114 != 8) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x899 = 11;
	uint16_t x900 = 1U;
	int32_t t115 = 4340;

    t115 = (x897>>((x898^x899)>x900));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x909 = 1852941348019LLU;
	volatile int64_t x910 = 13500188401375018LL;
	uint32_t x911 = UINT32_MAX;
	volatile uint64_t t116 = 1LLU;

    t116 = (x909>>((x910^x911)>x912));

    if (t116 != 926470674009LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x915 = INT32_MIN;
	uint64_t x916 = 9740704106750955LLU;
	volatile uint32_t t117 = 793436U;

    t117 = (x913>>((x914^x915)>x916));

    if (t117 != 238220267U) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x917 = 873643466U;
	static int16_t x918 = -1;
	static int32_t x919 = 74;
	static int8_t x920 = -1;
	volatile uint32_t t118 = 23309857U;

    t118 = (x917>>((x918^x919)>x920));

    if (t118 != 873643466U) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x930 = -1;
	int64_t x931 = INT64_MIN;
	volatile int64_t t119 = -103145858034370LL;

    t119 = (x929>>((x930^x931)>x932));

    if (t119 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x933 = 1;
	int8_t x936 = 7;
	volatile int32_t t120 = 3890203;

    t120 = (x933>>((x934^x935)>x936));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x941 = 18941609359963913LL;
	int64_t x942 = INT64_MIN;
	static int8_t x943 = INT8_MIN;
	int8_t x944 = INT8_MIN;
	volatile int64_t t121 = 95662568394426682LL;

    t121 = (x941>>((x942^x943)>x944));

    if (t121 != 9470804679981956LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x961 = INT64_MAX;
	int32_t x962 = 3606210;
	int64_t x963 = 7290013469364529LL;
	volatile int64_t t122 = 4393761LL;

    t122 = (x961>>((x962^x963)>x964));

    if (t122 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint32_t x965 = 12U;
	static int16_t x966 = -1;
	static volatile uint16_t x967 = UINT16_MAX;
	volatile int16_t x968 = -361;

    t123 = (x965>>((x966^x967)>x968));

    if (t123 != 12U) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x970 = 1378;
	volatile int8_t x971 = INT8_MIN;
	uint16_t x972 = 22958U;
	uint32_t t124 = 9742499U;

    t124 = (x969>>((x970^x971)>x972));

    if (t124 != 39967162U) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x973 = UINT32_MAX;
	int64_t x974 = INT64_MIN;
	volatile int8_t x976 = -11;
	volatile uint32_t t125 = UINT32_MAX;

    t125 = (x973>>((x974^x975)>x976));

    if (t125 != UINT32_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x990 = 30754LL;
	int16_t x991 = INT16_MAX;
	int32_t x992 = -1;
	int32_t t126 = -12697539;

    t126 = (x989>>((x990^x991)>x992));

    if (t126 != 2) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x997 = INT32_MAX;
	int16_t x998 = -2;
	int8_t x999 = -1;
	volatile int64_t x1000 = INT64_MIN;
	volatile int32_t t127 = 3095338;

    t127 = (x997>>((x998^x999)>x1000));

    if (t127 != 1073741823) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x1001 = UINT16_MAX;
	int8_t x1003 = -1;
	uint32_t x1004 = UINT32_MAX;
	volatile int32_t t128 = -3560;

    t128 = (x1001>>((x1002^x1003)>x1004));

    if (t128 != 65535) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t t129 = -588;

    t129 = (x1017>>((x1018^x1019)>x1020));

    if (t129 != 16) { NG(); } else { ; }
	
}

void f130(void) {
    	static int64_t x1021 = 1480083270253832LL;
	uint8_t x1022 = UINT8_MAX;
	uint32_t x1023 = UINT32_MAX;
	int32_t x1024 = -1;
	int64_t t130 = 258408648334LL;

    t130 = (x1021>>((x1022^x1023)>x1024));

    if (t130 != 1480083270253832LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x1025 = INT32_MAX;
	int8_t x1026 = INT8_MIN;
	int16_t x1028 = INT16_MAX;

    t131 = (x1025>>((x1026^x1027)>x1028));

    if (t131 != 1073741823) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x1033 = INT64_MAX;
	int32_t x1035 = INT32_MAX;

    t132 = (x1033>>((x1034^x1035)>x1036));

    if (t132 != INT64_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint8_t x1041 = UINT8_MAX;
	uint64_t x1042 = 2LLU;
	int16_t x1043 = -1;
	int32_t t133 = 405899447;

    t133 = (x1041>>((x1042^x1043)>x1044));

    if (t133 != 255) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x1045 = INT64_MAX;
	uint8_t x1046 = 118U;
	static int16_t x1047 = -1;
	uint64_t x1048 = UINT64_MAX;
	int64_t t134 = INT64_MAX;

    t134 = (x1045>>((x1046^x1047)>x1048));

    if (t134 != INT64_MAX) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x1051 = 253857724U;
	int8_t x1052 = INT8_MIN;
	int32_t t135 = 1;

    t135 = (x1049>>((x1050^x1051)>x1052));

    if (t135 != 4) { NG(); } else { ; }
	
}

void f136(void) {
    	static int32_t x1057 = 9336919;
	int8_t x1058 = -13;
	uint32_t x1059 = 33671U;
	static uint8_t x1060 = 22U;

    t136 = (x1057>>((x1058^x1059)>x1060));

    if (t136 != 4668459) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x1070 = -6421;
	uint32_t x1071 = UINT32_MAX;
	int8_t x1072 = INT8_MIN;
	volatile int32_t t137 = 137725496;

    t137 = (x1069>>((x1070^x1071)>x1072));

    if (t137 != 124) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint32_t x1073 = UINT32_MAX;
	int64_t x1075 = INT64_MIN;
	static volatile int16_t x1076 = INT16_MIN;
	volatile uint32_t t138 = 28143U;

    t138 = (x1073>>((x1074^x1075)>x1076));

    if (t138 != 2147483647U) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint32_t x1089 = 8077U;
	int64_t x1090 = 716687831LL;
	volatile int32_t x1091 = -69913;
	int8_t x1092 = INT8_MIN;

    t139 = (x1089>>((x1090^x1091)>x1092));

    if (t139 != 8077U) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x1097 = 97U;
	static int64_t x1099 = INT64_MAX;
	static uint64_t x1100 = 14506LLU;

    t140 = (x1097>>((x1098^x1099)>x1100));

    if (t140 != 48U) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x1101 = INT64_MAX;
	int16_t x1102 = INT16_MIN;
	uint64_t x1103 = 251LLU;
	int16_t x1104 = 24;
	int64_t t141 = 2063161297906LL;

    t141 = (x1101>>((x1102^x1103)>x1104));

    if (t141 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x1106 = INT16_MAX;
	volatile int16_t x1108 = -1;

    t142 = (x1105>>((x1106^x1107)>x1108));

    if (t142 != 6225) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int32_t x1109 = INT32_MAX;
	static int32_t x1110 = -1;
	static int64_t x1111 = INT64_MIN;

    t143 = (x1109>>((x1110^x1111)>x1112));

    if (t143 != 1073741823) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x1113 = 51U;
	static volatile uint16_t x1116 = 40U;
	volatile int32_t t144 = 344983;

    t144 = (x1113>>((x1114^x1115)>x1116));

    if (t144 != 51) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x1118 = INT16_MIN;
	static volatile uint16_t x1119 = 2U;
	int64_t x1120 = -1LL;
	volatile uint64_t t145 = 288LLU;

    t145 = (x1117>>((x1118^x1119)>x1120));

    if (t145 != 14271917521LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x1123 = INT8_MIN;
	int32_t x1124 = -1;
	static volatile int32_t t146 = -106135368;

    t146 = (x1121>>((x1122^x1123)>x1124));

    if (t146 != 65535) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint32_t x1129 = 91U;
	int8_t x1130 = INT8_MIN;
	uint16_t x1132 = 55U;
	uint32_t t147 = 0U;

    t147 = (x1129>>((x1130^x1131)>x1132));

    if (t147 != 45U) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x1133 = UINT64_MAX;
	volatile int32_t x1134 = INT32_MIN;
	int16_t x1135 = INT16_MIN;
	static uint64_t x1136 = UINT64_MAX;

    t148 = (x1133>>((x1134^x1135)>x1136));

    if (t148 != UINT64_MAX) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint64_t x1137 = 796143233719732LLU;
	static int64_t x1138 = -1LL;
	int32_t x1139 = -24;
	volatile uint64_t t149 = 340LLU;

    t149 = (x1137>>((x1138^x1139)>x1140));

    if (t149 != 398071616859866LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x1141 = INT32_MAX;
	uint8_t x1142 = 15U;
	uint64_t x1143 = 213112LLU;
	int16_t x1144 = INT16_MIN;
	static int32_t t150 = INT32_MAX;

    t150 = (x1141>>((x1142^x1143)>x1144));

    if (t150 != INT32_MAX) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x1145 = 38;
	int32_t x1147 = 1;
	int32_t x1148 = -12;
	int32_t t151 = 91352790;

    t151 = (x1145>>((x1146^x1147)>x1148));

    if (t151 != 19) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint64_t x1149 = UINT64_MAX;
	static uint8_t x1150 = 3U;
	int32_t x1152 = INT32_MIN;
	uint64_t t152 = UINT64_MAX;

    t152 = (x1149>>((x1150^x1151)>x1152));

    if (t152 != UINT64_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x1154 = UINT8_MAX;

    t153 = (x1153>>((x1154^x1155)>x1156));

    if (t153 != 2669246310036LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x1161 = 30;
	int16_t x1162 = -1;
	uint8_t x1163 = 1U;
	volatile uint64_t x1164 = 132481048090LLU;

    t154 = (x1161>>((x1162^x1163)>x1164));

    if (t154 != 15) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x1169 = UINT16_MAX;
	int16_t x1171 = INT16_MIN;

    t155 = (x1169>>((x1170^x1171)>x1172));

    if (t155 != 65535) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint32_t x1185 = 1U;
	uint64_t x1186 = UINT64_MAX;
	int8_t x1187 = -1;
	int32_t x1188 = INT32_MIN;

    t156 = (x1185>>((x1186^x1187)>x1188));

    if (t156 != 1U) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x1193 = INT64_MAX;
	static int64_t x1195 = -1LL;
	uint32_t x1196 = 0U;
	volatile int64_t t157 = INT64_MAX;

    t157 = (x1193>>((x1194^x1195)>x1196));

    if (t157 != INT64_MAX) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x1209 = 2U;
	uint8_t x1210 = UINT8_MAX;
	volatile int64_t x1211 = INT64_MAX;
	uint8_t x1212 = 0U;
	int32_t t158 = 331;

    t158 = (x1209>>((x1210^x1211)>x1212));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x1213 = 101U;
	int32_t x1214 = -1;
	volatile uint32_t x1215 = 162U;
	static volatile int32_t t159 = -10;

    t159 = (x1213>>((x1214^x1215)>x1216));

    if (t159 != 101) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x1217 = UINT8_MAX;
	volatile int64_t x1219 = 1938713195288593LL;
	int64_t x1220 = INT64_MIN;
	int32_t t160 = 2875;

    t160 = (x1217>>((x1218^x1219)>x1220));

    if (t160 != 127) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x1229 = INT32_MAX;
	volatile int16_t x1230 = -2;
	int16_t x1232 = INT16_MIN;
	volatile int32_t t161 = -40166567;

    t161 = (x1229>>((x1230^x1231)>x1232));

    if (t161 != 1073741823) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x1233 = 48198;
	int32_t x1234 = 2618630;
	int64_t x1236 = INT64_MIN;
	volatile int32_t t162 = 17953;

    t162 = (x1233>>((x1234^x1235)>x1236));

    if (t162 != 24099) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x1249 = INT64_MAX;
	int64_t x1251 = 4253298140175582LL;
	int64_t x1252 = -1LL;

    t163 = (x1249>>((x1250^x1251)>x1252));

    if (t163 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint64_t x1253 = 1649LLU;
	static int8_t x1254 = INT8_MIN;
	static uint32_t x1255 = UINT32_MAX;
	int16_t x1256 = -11830;
	static volatile uint64_t t164 = 6570527873246062829LLU;

    t164 = (x1253>>((x1254^x1255)>x1256));

    if (t164 != 1649LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x1257 = 1U;
	int16_t x1259 = INT16_MAX;
	uint8_t x1260 = 0U;
	volatile int32_t t165 = -9;

    t165 = (x1257>>((x1258^x1259)>x1260));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x1261 = UINT32_MAX;
	static volatile uint32_t x1262 = 0U;
	volatile uint64_t x1264 = UINT64_MAX;
	uint32_t t166 = UINT32_MAX;

    t166 = (x1261>>((x1262^x1263)>x1264));

    if (t166 != UINT32_MAX) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x1273 = INT8_MAX;
	static volatile int64_t x1274 = INT64_MIN;
	static int32_t x1275 = 7;
	int8_t x1276 = 38;
	volatile int32_t t167 = -22040;

    t167 = (x1273>>((x1274^x1275)>x1276));

    if (t167 != 127) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x1286 = INT64_MIN;
	uint16_t x1287 = 1U;
	volatile uint8_t x1288 = 74U;
	static volatile int64_t t168 = 488419485502458LL;

    t168 = (x1285>>((x1286^x1287)>x1288));

    if (t168 != 823528LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x1289 = 10U;
	int8_t x1290 = -1;
	int32_t x1291 = -32972505;
	int64_t x1292 = -1LL;

    t169 = (x1289>>((x1290^x1291)>x1292));

    if (t169 != 5) { NG(); } else { ; }
	
}

void f170(void) {
    	static int64_t x1294 = 134293124LL;
	static uint16_t x1295 = UINT16_MAX;
	uint16_t x1296 = 5U;
	static volatile int32_t t170 = -311143317;

    t170 = (x1293>>((x1294^x1295)>x1296));

    if (t170 != 63) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x1297 = UINT16_MAX;
	static int8_t x1298 = 55;
	int16_t x1300 = INT16_MIN;
	int32_t t171 = 33;

    t171 = (x1297>>((x1298^x1299)>x1300));

    if (t171 != 32767) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x1313 = 7;
	uint64_t x1314 = 2260027LLU;
	int16_t x1315 = 421;
	static int16_t x1316 = INT16_MAX;
	int32_t t172 = -119;

    t172 = (x1313>>((x1314^x1315)>x1316));

    if (t172 != 3) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x1327 = 6LL;
	static int8_t x1328 = -6;
	int32_t t173 = -1230;

    t173 = (x1325>>((x1326^x1327)>x1328));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x1333 = INT8_MAX;
	int32_t x1334 = -190200378;
	volatile int32_t x1336 = -3787238;
	volatile int32_t t174 = 0;

    t174 = (x1333>>((x1334^x1335)>x1336));

    if (t174 != 127) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint64_t x1337 = UINT64_MAX;
	uint32_t x1338 = 767959U;
	int64_t x1339 = -1LL;
	static int64_t x1340 = -1205607LL;
	volatile uint64_t t175 = 65226002543LLU;

    t175 = (x1337>>((x1338^x1339)>x1340));

    if (t175 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x1346 = INT8_MAX;
	uint64_t x1347 = 14328LLU;
	int64_t x1348 = 0LL;
	uint32_t t176 = 926938573U;

    t176 = (x1345>>((x1346^x1347)>x1348));

    if (t176 != 6U) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint64_t x1349 = UINT64_MAX;
	static int32_t x1350 = 0;
	static int64_t x1351 = INT64_MIN;
	uint16_t x1352 = 4761U;
	uint64_t t177 = UINT64_MAX;

    t177 = (x1349>>((x1350^x1351)>x1352));

    if (t177 != UINT64_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x1354 = INT16_MAX;
	static volatile uint16_t x1355 = 13U;
	int16_t x1356 = -1;
	int32_t t178 = -177565;

    t178 = (x1353>>((x1354^x1355)>x1356));

    if (t178 != 1073741823) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x1369 = 22240917651190LL;
	static int64_t x1371 = 661828963944227442LL;
	int16_t x1372 = -1;
	static volatile int64_t t179 = -114330164LL;

    t179 = (x1369>>((x1370^x1371)>x1372));

    if (t179 != 11120458825595LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x1374 = 2U;
	int8_t x1375 = INT8_MIN;
	int64_t x1376 = INT64_MIN;
	int32_t t180 = -385;

    t180 = (x1373>>((x1374^x1375)>x1376));

    if (t180 != 3382890) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile int8_t x1381 = INT8_MAX;
	int32_t x1383 = INT32_MIN;
	int8_t x1384 = -1;
	volatile int32_t t181 = 0;

    t181 = (x1381>>((x1382^x1383)>x1384));

    if (t181 != 63) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint16_t x1389 = 849U;
	uint8_t x1390 = UINT8_MAX;
	static uint32_t x1391 = 11U;
	volatile uint16_t x1392 = UINT16_MAX;
	volatile int32_t t182 = 0;

    t182 = (x1389>>((x1390^x1391)>x1392));

    if (t182 != 849) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x1393 = 7;
	uint32_t x1394 = 557765177U;
	int64_t x1395 = 12585360449LL;
	int32_t x1396 = 139275;
	int32_t t183 = -14;

    t183 = (x1393>>((x1394^x1395)>x1396));

    if (t183 != 3) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x1397 = UINT64_MAX;
	int8_t x1398 = 6;
	volatile uint32_t x1399 = 142873U;
	volatile int32_t x1400 = -30110808;

    t184 = (x1397>>((x1398^x1399)>x1400));

    if (t184 != UINT64_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x1401 = INT16_MAX;
	static int64_t x1402 = -1LL;
	int32_t t185 = 907294977;

    t185 = (x1401>>((x1402^x1403)>x1404));

    if (t185 != 32767) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x1405 = 5;
	static int64_t x1406 = INT64_MIN;
	int8_t x1407 = INT8_MAX;
	volatile int32_t x1408 = INT32_MAX;
	volatile int32_t t186 = 2;

    t186 = (x1405>>((x1406^x1407)>x1408));

    if (t186 != 5) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x1413 = 23;
	int64_t x1414 = -41488399LL;
	int32_t t187 = -211290;

    t187 = (x1413>>((x1414^x1415)>x1416));

    if (t187 != 11) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x1417 = 45258328;
	int8_t x1420 = INT8_MIN;
	volatile int32_t t188 = 368;

    t188 = (x1417>>((x1418^x1419)>x1420));

    if (t188 != 45258328) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x1422 = 28U;
	uint32_t x1424 = 28742U;
	volatile int32_t t189 = 3;

    t189 = (x1421>>((x1422^x1423)>x1424));

    if (t189 != 32767) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint64_t x1429 = 45413526070835LLU;
	int16_t x1431 = -1;
	int8_t x1432 = -1;
	uint64_t t190 = 513731430LLU;

    t190 = (x1429>>((x1430^x1431)>x1432));

    if (t190 != 45413526070835LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint64_t x1434 = 6993LLU;
	int16_t x1435 = -3883;
	static volatile uint32_t x1436 = UINT32_MAX;
	uint32_t t191 = 186715U;

    t191 = (x1433>>((x1434^x1435)>x1436));

    if (t191 != 2147483647U) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint8_t x1437 = 1U;
	int8_t x1438 = INT8_MIN;
	int32_t x1439 = INT32_MIN;
	volatile int32_t x1440 = -1;
	static volatile int32_t t192 = -6997;

    t192 = (x1437>>((x1438^x1439)>x1440));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x1441 = INT32_MAX;
	static int16_t x1442 = -1;
	int16_t x1443 = INT16_MAX;
	volatile int32_t t193 = INT32_MAX;

    t193 = (x1441>>((x1442^x1443)>x1444));

    if (t193 != INT32_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x1450 = INT8_MAX;
	int8_t x1452 = -1;
	int64_t t194 = 1069310775090458824LL;

    t194 = (x1449>>((x1450^x1451)>x1452));

    if (t194 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x1453 = 981343;
	static int32_t x1454 = -51808673;
	int8_t x1455 = INT8_MIN;
	static int16_t x1456 = INT16_MIN;
	static int32_t t195 = 10925116;

    t195 = (x1453>>((x1454^x1455)>x1456));

    if (t195 != 490671) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x1465 = 18562497771LLU;
	uint16_t x1466 = 63U;
	uint8_t x1467 = 73U;
	int32_t x1468 = -624624526;
	uint64_t t196 = 25256658LLU;

    t196 = (x1465>>((x1466^x1467)>x1468));

    if (t196 != 9281248885LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int16_t x1489 = INT16_MAX;
	int64_t x1490 = INT64_MIN;
	volatile int32_t x1491 = INT32_MIN;
	uint8_t x1492 = UINT8_MAX;
	int32_t t197 = -6265;

    t197 = (x1489>>((x1490^x1491)>x1492));

    if (t197 != 16383) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int64_t x1494 = INT64_MAX;
	volatile int32_t t198 = -4;

    t198 = (x1493>>((x1494^x1495)>x1496));

    if (t198 != 7) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint16_t x1497 = UINT16_MAX;
	uint64_t x1498 = UINT64_MAX;
	static int8_t x1499 = -3;
	static uint64_t x1500 = UINT64_MAX;

    t199 = (x1497>>((x1498^x1499)>x1500));

    if (t199 != 65535) { NG(); } else { ; }
	
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

