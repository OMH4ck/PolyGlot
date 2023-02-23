
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

int32_t x17 = INT32_MIN;
int64_t x28 = 31067LL;
volatile uint16_t x30 = 4U;
uint8_t x33 = 7U;
static int16_t x36 = INT16_MAX;
int8_t x37 = 0;
volatile int8_t x42 = INT8_MIN;
volatile int32_t x51 = INT32_MAX;
volatile int16_t x56 = INT16_MIN;
uint8_t x57 = 87U;
static volatile uint32_t t11 = 488U;
int16_t x65 = -7;
uint16_t x73 = 4634U;
int32_t x82 = INT32_MIN;
volatile uint32_t x84 = UINT32_MAX;
uint64_t t14 = UINT64_MAX;
volatile int64_t t16 = 154730052LL;
static int64_t x93 = INT64_MIN;
uint16_t x99 = UINT16_MAX;
volatile int32_t x100 = 3518;
int32_t t18 = 19872353;
uint64_t x105 = 207363328612136LLU;
int64_t x119 = -1LL;
uint64_t t23 = 522616197062LLU;
volatile uint32_t x128 = 71999U;
static int8_t x129 = -1;
int32_t x133 = -16578;
volatile int8_t x134 = INT8_MAX;
volatile int8_t x135 = INT8_MAX;
static int32_t x136 = -250617;
uint32_t t28 = 263465168U;
volatile uint16_t x145 = UINT16_MAX;
int64_t t30 = 9830LL;
static volatile int8_t x154 = -1;
int16_t x155 = INT16_MIN;
volatile int64_t x163 = -162129687LL;
static int16_t x165 = INT16_MIN;
int32_t t34 = 385;
volatile uint64_t t35 = 15911LLU;
static int16_t x182 = INT16_MIN;
volatile int16_t x188 = INT16_MIN;
volatile uint64_t x194 = 24842472LLU;
uint64_t x196 = 1073127163351LLU;
int16_t x197 = INT16_MAX;
int8_t x198 = 0;
int8_t x199 = -28;
uint32_t x201 = 238191U;
int64_t x208 = -15LL;
uint64_t x221 = UINT64_MAX;
volatile int16_t x224 = -89;
uint8_t x228 = 3U;
volatile int16_t x232 = INT16_MAX;
int32_t x247 = -1;
int16_t x249 = INT16_MAX;
uint32_t x253 = 6956232U;
uint32_t x258 = 20727606U;
int8_t x265 = -1;
static volatile uint64_t x266 = 38786LLU;
int32_t x272 = -1498;
static volatile uint32_t x276 = 2029U;
int8_t x279 = INT8_MIN;
volatile uint16_t x283 = UINT16_MAX;
int16_t x288 = -1;
static int32_t x294 = -756;
int64_t x297 = -1LL;
static int64_t x300 = -1LL;
int32_t t62 = 45456802;
int16_t x315 = 15604;
volatile int64_t x317 = INT64_MIN;
int64_t t66 = 1039685974732247LL;
volatile uint32_t t67 = 54U;
int16_t x325 = INT16_MIN;
int64_t x326 = -19279835029715447LL;
static uint16_t x335 = 3U;
static uint8_t x337 = 72U;
static uint64_t x339 = UINT64_MAX;
uint64_t t70 = 4421055935599LLU;
uint32_t x345 = 246043578U;
uint64_t t72 = 98781LLU;
uint32_t x357 = 94U;
volatile int16_t x359 = -1;
uint32_t t75 = 3U;
int32_t x366 = 6268910;
static uint64_t x372 = UINT64_MAX;
uint64_t t78 = UINT64_MAX;
static uint64_t x380 = 13330404928330173LLU;
int16_t x383 = INT16_MIN;
int8_t x384 = INT8_MIN;
static volatile int32_t x395 = -1;
static int32_t t84 = 1095;
uint8_t x404 = 2U;
volatile uint64_t x405 = 91849869535544LLU;
uint64_t x420 = UINT64_MAX;
uint64_t t88 = UINT64_MAX;
int32_t x424 = 5125253;
uint64_t x429 = 182LLU;
volatile uint32_t x431 = 2140006714U;
int32_t x432 = INT32_MIN;
int8_t x433 = -25;
uint16_t x441 = 48U;
uint8_t x448 = 2U;
int8_t x451 = INT8_MAX;
int8_t x454 = INT8_MIN;
static uint64_t t97 = 388660616LLU;
uint32_t x462 = 2U;
int8_t x466 = -1;
uint64_t t101 = UINT64_MAX;
int64_t t102 = -1439956051871540787LL;
volatile uint32_t x481 = UINT32_MAX;
static int8_t x483 = -1;
uint32_t x492 = 5410046U;
uint64_t x496 = 5803866348014149LLU;
static uint64_t t107 = 7911229115441LLU;
static uint8_t x497 = 73U;
uint16_t x504 = UINT16_MAX;
int8_t x513 = INT8_MIN;
volatile int32_t x522 = INT32_MIN;
int64_t t112 = -743608783LL;
int16_t x527 = INT16_MAX;
uint32_t x533 = UINT32_MAX;
uint64_t x536 = UINT64_MAX;
int64_t x538 = INT64_MIN;
uint8_t x539 = 2U;
static int32_t x540 = INT32_MIN;
static volatile uint16_t x543 = UINT16_MAX;
volatile int32_t t117 = -27;
static int32_t x546 = -3416414;
uint32_t x547 = 12300U;
volatile uint32_t x551 = 3U;
static volatile uint64_t t119 = 2LLU;
uint16_t x556 = 17619U;
static uint16_t x560 = 7762U;
static uint8_t x562 = 4U;
int8_t x563 = INT8_MIN;
int32_t t122 = -3663;
int8_t x567 = INT8_MAX;
static volatile int32_t x569 = 3336;
uint64_t t124 = 2603959475064LLU;
static int32_t x576 = -1;
int64_t t125 = 145407060LL;
volatile int64_t x577 = INT64_MAX;
uint64_t t126 = 172LLU;
int16_t x581 = 301;
volatile int64_t x585 = INT64_MIN;
int64_t x590 = 25456273LL;
int64_t x597 = INT64_MIN;
uint16_t x599 = 29956U;
int64_t x601 = -25321158333706459LL;
static int8_t x607 = -1;
int64_t x608 = INT64_MIN;
static int32_t x611 = INT32_MIN;
volatile int32_t t135 = 486437185;
uint64_t t136 = UINT64_MAX;
int32_t x626 = -10082392;
int16_t x631 = -1;
int32_t t139 = 53055;
int64_t x635 = INT64_MIN;
int32_t t142 = 92796;
int8_t x652 = INT8_MIN;
static uint64_t t143 = 167791LLU;
int32_t x657 = -1;
volatile int8_t x663 = -2;
uint8_t x668 = 3U;
int8_t x670 = 25;
static uint32_t x677 = 68430U;
uint64_t x683 = 1140926297642512LLU;
uint64_t x692 = UINT64_MAX;
volatile uint64_t t151 = 2325843261067LLU;
uint16_t x695 = 20U;
volatile int16_t x696 = 1;
volatile uint32_t t153 = 93U;
static int64_t x710 = 462693757139LL;
static volatile int64_t x711 = INT64_MIN;
volatile int8_t x712 = -2;
int8_t x715 = INT8_MAX;
int64_t x727 = 56466938LL;
uint32_t x731 = UINT32_MAX;
uint32_t x733 = UINT32_MAX;
volatile int32_t x737 = INT32_MIN;
int64_t x747 = 225068LL;
volatile uint64_t t163 = 1362904042328936224LLU;
volatile uint16_t x760 = 1846U;
int32_t t165 = -8135724;
uint64_t x762 = 13LLU;
static volatile uint64_t t166 = 26526LLU;
static uint16_t x768 = 16862U;
int64_t x769 = INT64_MIN;
int16_t x770 = INT16_MIN;
volatile int64_t t168 = -1170862683563138LL;
volatile uint32_t t169 = UINT32_MAX;
volatile uint64_t x779 = UINT64_MAX;
static volatile int64_t t171 = 3194644977LL;
volatile uint8_t x789 = 1U;
int32_t x794 = 126440;
int64_t t173 = -476LL;
static int64_t x804 = 104835917116289LL;
static uint64_t x815 = 50478213851LLU;
uint32_t x820 = UINT32_MAX;
int32_t x822 = INT32_MIN;
uint16_t x833 = 319U;
uint64_t x837 = UINT64_MAX;
uint8_t x838 = 1U;
int16_t x841 = 6927;
int32_t x845 = INT32_MIN;
volatile int32_t x847 = 17321;
int16_t x853 = INT16_MAX;
int32_t x856 = INT32_MAX;
int32_t x865 = INT32_MIN;
volatile int64_t x868 = -22762321091361600LL;
uint32_t x869 = 3U;
int32_t x878 = INT32_MAX;
int8_t x888 = -1;
static uint32_t x896 = 277528030U;
int64_t x901 = INT64_MIN;


void f0(void) {
    	static uint32_t x9 = 24701U;
	int64_t x10 = 2246493974906696589LL;
	int8_t x11 = INT8_MIN;
	uint8_t x12 = 5U;
	volatile int64_t t0 = 35226301159256LL;

    t0 = (x9|((x10+x11)%x12));

    if (t0 != 24701LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint32_t x13 = UINT32_MAX;
	int32_t x14 = INT32_MIN;
	static uint8_t x15 = 42U;
	uint8_t x16 = 1U;
	volatile uint32_t t1 = UINT32_MAX;

    t1 = (x13|((x14+x15)%x16));

    if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x18 = -1;
	int32_t x19 = 421475720;
	volatile int32_t x20 = INT32_MIN;
	int32_t t2 = -810961323;

    t2 = (x17|((x18+x19)%x20));

    if (t2 != -1726007929) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile int32_t x25 = INT32_MIN;
	int32_t x26 = INT32_MIN;
	volatile int64_t x27 = 588747927566LL;
	static int64_t t3 = -32330375599118058LL;

    t3 = (x25|((x26+x27)%x28));

    if (t3 != -2147454325LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x29 = -1;
	static uint8_t x31 = 87U;
	uint8_t x32 = 12U;
	int32_t t4 = -39947;

    t4 = (x29|((x30+x31)%x32));

    if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x34 = INT16_MIN;
	volatile uint32_t x35 = UINT32_MAX;
	volatile uint32_t t5 = 768408U;

    t5 = (x33|((x34+x35)%x36));

    if (t5 != 7U) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x38 = 1U;
	int8_t x39 = 21;
	volatile int64_t x40 = INT64_MIN;
	static volatile int64_t t6 = -3150LL;

    t6 = (x37|((x38+x39)%x40));

    if (t6 != 22LL) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint8_t x41 = UINT8_MAX;
	static uint64_t x43 = UINT64_MAX;
	volatile int16_t x44 = INT16_MIN;
	volatile uint64_t t7 = 16LLU;

    t7 = (x41|((x42+x43)%x44));

    if (t7 != 32767LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x49 = 24118061;
	int16_t x50 = -1;
	uint64_t x52 = 6753632LLU;
	uint64_t t8 = 2266743LLU;

    t8 = (x49|((x50+x51)%x52));

    if (t8 != 24408895LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x53 = 1289U;
	int32_t x54 = -1;
	static uint8_t x55 = 63U;
	int32_t t9 = 4;

    t9 = (x53|((x54+x55)%x56));

    if (t9 != 1343) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint32_t x58 = 1833433902U;
	int64_t x59 = -1LL;
	uint8_t x60 = 25U;
	int64_t t10 = -57346264624LL;

    t10 = (x57|((x58+x59)%x60));

    if (t10 != 87LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x61 = INT32_MIN;
	int8_t x62 = -1;
	volatile int16_t x63 = -272;
	uint32_t x64 = 27870452U;

    t11 = (x61|((x62+x63)%x64));

    if (t11 != 2150401063U) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x66 = 86865005LL;
	int8_t x67 = INT8_MIN;
	uint64_t x68 = UINT64_MAX;
	uint64_t t12 = 1110433057LLU;

    t12 = (x65|((x66+x67)%x68));

    if (t12 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int8_t x74 = 0;
	int64_t x75 = -1LL;
	int32_t x76 = INT32_MIN;
	volatile int64_t t13 = 56965168228389LL;

    t13 = (x73|((x74+x75)%x76));

    if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x81 = UINT64_MAX;
	int32_t x83 = INT32_MAX;

    t14 = (x81|((x82+x83)%x84));

    if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x85 = INT64_MIN;
	int64_t x86 = -1831485902LL;
	int16_t x87 = -1;
	static int32_t x88 = INT32_MIN;
	volatile int64_t t15 = -66251734872651LL;

    t15 = (x85|((x86+x87)%x88));

    if (t15 != -1831485903LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x89 = INT32_MIN;
	uint16_t x90 = 10042U;
	uint16_t x91 = UINT16_MAX;
	static int64_t x92 = INT64_MIN;

    t16 = (x89|((x90+x91)%x92));

    if (t16 != -2147408071LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x94 = INT16_MIN;
	int32_t x95 = -1;
	int64_t x96 = INT64_MIN;
	int64_t t17 = 1LL;

    t17 = (x93|((x94+x95)%x96));

    if (t17 != -32769LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x97 = -1;
	int8_t x98 = 25;

    t18 = (x97|((x98+x99)%x100));

    if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x101 = INT8_MIN;
	static int16_t x102 = 127;
	static int16_t x103 = INT16_MAX;
	int64_t x104 = INT64_MIN;
	int64_t t19 = 1LL;

    t19 = (x101|((x102+x103)%x104));

    if (t19 != -2LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint16_t x106 = UINT16_MAX;
	int8_t x107 = 1;
	static int8_t x108 = INT8_MIN;
	uint64_t t20 = 6368LLU;

    t20 = (x105|((x106+x107)%x108));

    if (t20 != 207363328612136LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x109 = 25954;
	int8_t x110 = 61;
	uint8_t x111 = 15U;
	volatile int64_t x112 = 13747LL;
	volatile int64_t t21 = -332957931506595174LL;

    t21 = (x109|((x110+x111)%x112));

    if (t21 != 25966LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x113 = 2482010976214LLU;
	volatile int32_t x114 = INT32_MIN;
	uint64_t x115 = 118465179606092LLU;
	volatile int64_t x116 = INT64_MIN;
	volatile uint64_t t22 = 13LLU;

    t22 = (x113|((x114+x115)%x116));

    if (t22 != 118738463752158LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x117 = INT32_MIN;
	int16_t x118 = -10;
	static uint64_t x120 = 7609LLU;

    t23 = (x117|((x118+x119)%x120));

    if (t23 != 18446744071562071382LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x121 = INT8_MAX;
	uint16_t x122 = UINT16_MAX;
	volatile uint16_t x123 = 11047U;
	int64_t x124 = INT64_MIN;
	int64_t t24 = 255740855105LL;

    t24 = (x121|((x122+x123)%x124));

    if (t24 != 76671LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x125 = INT16_MIN;
	int16_t x126 = INT16_MIN;
	uint32_t x127 = UINT32_MAX;
	volatile uint32_t t25 = 19287632U;

    t25 = (x125|((x126+x127)%x128));

    if (t25 != 4294951939U) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x130 = INT8_MIN;
	volatile uint64_t x131 = 12200152946951LLU;
	int64_t x132 = INT64_MIN;
	uint64_t t26 = UINT64_MAX;

    t26 = (x129|((x130+x131)%x132));

    if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t t27 = -58996825;

    t27 = (x133|((x134+x135)%x136));

    if (t27 != -16386) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x141 = 241U;
	static int16_t x142 = INT16_MIN;
	uint8_t x143 = 1U;
	uint32_t x144 = 364464U;

    t28 = (x141|((x142+x143)%x144));

    if (t28 != 90865U) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint32_t x146 = 66U;
	uint8_t x147 = 119U;
	volatile int8_t x148 = -1;
	uint32_t t29 = 962607U;

    t29 = (x145|((x146+x147)%x148));

    if (t29 != 65535U) { NG(); } else { ; }
	
}

void f30(void) {
    	static int16_t x149 = -1;
	uint32_t x150 = UINT32_MAX;
	int64_t x151 = INT64_MIN;
	uint32_t x152 = UINT32_MAX;

    t30 = (x149|((x150+x151)%x152));

    if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint32_t x153 = 519582U;
	uint16_t x156 = UINT16_MAX;
	volatile uint32_t t31 = UINT32_MAX;

    t31 = (x153|((x154+x155)%x156));

    if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x161 = 93297677U;
	int32_t x162 = INT32_MAX;
	uint16_t x164 = 12U;
	int64_t t32 = -30655487682851710LL;

    t32 = (x161|((x162+x163)%x164));

    if (t32 != 93297677LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x166 = INT8_MAX;
	int32_t x167 = INT32_MIN;
	volatile uint32_t x168 = 22U;
	static uint32_t t33 = 191505U;

    t33 = (x165|((x166+x167)%x168));

    if (t33 != 4294934547U) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x169 = 13;
	int16_t x170 = INT16_MIN;
	volatile int8_t x171 = INT8_MIN;
	uint8_t x172 = 12U;

    t34 = (x169|((x170+x171)%x172));

    if (t34 != -3) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint8_t x173 = 15U;
	static uint64_t x174 = 8919176416126LLU;
	static uint64_t x175 = 401746758154220332LLU;
	int16_t x176 = INT16_MIN;

    t35 = (x173|((x174+x175)%x176));

    if (t35 != 401755677330636463LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x181 = 1U;
	int8_t x183 = INT8_MIN;
	static int64_t x184 = INT64_MIN;
	volatile int64_t t36 = 106991626994LL;

    t36 = (x181|((x182+x183)%x184));

    if (t36 != -32895LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x185 = 272;
	int8_t x186 = -24;
	uint8_t x187 = 1U;
	volatile int32_t t37 = 789336656;

    t37 = (x185|((x186+x187)%x188));

    if (t37 != -7) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x193 = INT8_MIN;
	uint64_t x195 = 3893937955329LLU;
	uint64_t t38 = 5642LLU;

    t38 = (x193|((x194+x195)%x196));

    if (t38 != 18446744073709551588LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x200 = INT64_MIN;
	static int64_t t39 = -1742882306113626LL;

    t39 = (x197|((x198+x199)%x200));

    if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint64_t x202 = 155363487LLU;
	int16_t x203 = -1;
	static volatile int16_t x204 = -161;
	uint64_t t40 = 113826580833582LLU;

    t40 = (x201|((x202+x203)%x204));

    if (t40 != 155429631LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x205 = UINT64_MAX;
	int32_t x206 = 3;
	int32_t x207 = 12144;
	volatile uint64_t t41 = UINT64_MAX;

    t41 = (x205|((x206+x207)%x208));

    if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int16_t x209 = -6;
	uint64_t x210 = UINT64_MAX;
	int8_t x211 = -26;
	volatile uint8_t x212 = 1U;
	uint64_t t42 = 255390630024028694LLU;

    t42 = (x209|((x210+x211)%x212));

    if (t42 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x217 = -1173725986317LL;
	volatile int8_t x218 = 30;
	int32_t x219 = -5;
	static int64_t x220 = -12LL;
	int64_t t43 = -1288129703LL;

    t43 = (x217|((x218+x219)%x220));

    if (t43 != -1173725986317LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint64_t x222 = UINT64_MAX;
	static uint64_t x223 = UINT64_MAX;
	uint64_t t44 = UINT64_MAX;

    t44 = (x221|((x222+x223)%x224));

    if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x225 = -1;
	static uint32_t x226 = 119787U;
	static uint8_t x227 = 14U;
	volatile uint32_t t45 = UINT32_MAX;

    t45 = (x225|((x226+x227)%x228));

    if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x229 = -1;
	int32_t x230 = INT32_MAX;
	volatile int64_t x231 = INT64_MIN;
	volatile int64_t t46 = -375559273902939LL;

    t46 = (x229|((x230+x231)%x232));

    if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x233 = INT8_MIN;
	uint8_t x234 = 5U;
	uint8_t x235 = 3U;
	int8_t x236 = INT8_MIN;
	int32_t t47 = -594592;

    t47 = (x233|((x234+x235)%x236));

    if (t47 != -120) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x245 = INT32_MIN;
	int32_t x246 = -1;
	uint8_t x248 = UINT8_MAX;
	volatile int32_t t48 = 29;

    t48 = (x245|((x246+x247)%x248));

    if (t48 != -2) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int16_t x250 = -1;
	int32_t x251 = -1;
	static uint8_t x252 = UINT8_MAX;
	int32_t t49 = -884626;

    t49 = (x249|((x250+x251)%x252));

    if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x254 = 1U;
	int16_t x255 = 25;
	volatile uint8_t x256 = UINT8_MAX;
	volatile uint32_t t50 = 20214216U;

    t50 = (x253|((x254+x255)%x256));

    if (t50 != 6956250U) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x257 = -20;
	static uint8_t x259 = 1U;
	int32_t x260 = INT32_MAX;
	volatile uint32_t t51 = UINT32_MAX;

    t51 = (x257|((x258+x259)%x260));

    if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x261 = 2U;
	int32_t x262 = INT32_MIN;
	volatile int8_t x263 = 5;
	static uint8_t x264 = 1U;
	static int32_t t52 = -12037;

    t52 = (x261|((x262+x263)%x264));

    if (t52 != 2) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x267 = 24U;
	int16_t x268 = -1;
	volatile uint64_t t53 = UINT64_MAX;

    t53 = (x265|((x266+x267)%x268));

    if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint16_t x269 = UINT16_MAX;
	uint8_t x270 = UINT8_MAX;
	int64_t x271 = INT64_MIN;
	int64_t t54 = 8263538452220LL;

    t54 = (x269|((x270+x271)%x272));

    if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x273 = 745824526437LLU;
	int64_t x274 = -1LL;
	int32_t x275 = -1;
	uint64_t t55 = UINT64_MAX;

    t55 = (x273|((x274+x275)%x276));

    if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x277 = INT32_MIN;
	int64_t x278 = 665563220288237549LL;
	uint16_t x280 = 24059U;
	volatile int64_t t56 = 264246496429761LL;

    t56 = (x277|((x278+x279)%x280));

    if (t56 != -2147474706LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x281 = UINT64_MAX;
	uint32_t x282 = UINT32_MAX;
	volatile int8_t x284 = INT8_MAX;
	volatile uint64_t t57 = UINT64_MAX;

    t57 = (x281|((x282+x283)%x284));

    if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x285 = INT64_MIN;
	int8_t x286 = INT8_MIN;
	volatile uint32_t x287 = UINT32_MAX;
	volatile int64_t t58 = -2175869858099769164LL;

    t58 = (x285|((x286+x287)%x288));

    if (t58 != -9223372032559808641LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x289 = INT32_MIN;
	uint8_t x290 = 15U;
	uint16_t x291 = 8U;
	int8_t x292 = INT8_MIN;
	volatile int32_t t59 = 648;

    t59 = (x289|((x290+x291)%x292));

    if (t59 != -2147483625) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x293 = -2409;
	static int16_t x295 = 4;
	int32_t x296 = -1;
	volatile int32_t t60 = -60835;

    t60 = (x293|((x294+x295)%x296));

    if (t60 != -2409) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x298 = INT32_MAX;
	static volatile uint64_t x299 = 1073LLU;
	volatile uint64_t t61 = UINT64_MAX;

    t61 = (x297|((x298+x299)%x300));

    if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x301 = INT16_MAX;
	int8_t x302 = INT8_MIN;
	int16_t x303 = -1;
	static int8_t x304 = 1;

    t62 = (x301|((x302+x303)%x304));

    if (t62 != 32767) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x305 = INT64_MIN;
	int64_t x306 = INT64_MAX;
	static int16_t x307 = -366;
	int16_t x308 = -1;
	int64_t t63 = INT64_MIN;

    t63 = (x305|((x306+x307)%x308));

    if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x309 = 6;
	int8_t x310 = INT8_MIN;
	static int8_t x311 = INT8_MIN;
	volatile int64_t x312 = -1LL;
	volatile int64_t t64 = 258011LL;

    t64 = (x309|((x310+x311)%x312));

    if (t64 != 6LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x313 = UINT8_MAX;
	int32_t x314 = 114;
	uint16_t x316 = UINT16_MAX;
	int32_t t65 = 86;

    t65 = (x313|((x314+x315)%x316));

    if (t65 != 15871) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int64_t x318 = INT64_MAX;
	static int32_t x319 = INT32_MIN;
	static uint16_t x320 = 1061U;

    t66 = (x317|((x318+x319)%x320));

    if (t66 != -9223372036854775068LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static int32_t x321 = 4383058;
	int8_t x322 = INT8_MIN;
	int16_t x323 = -16;
	uint32_t x324 = 381U;

    t67 = (x321|((x322+x323)%x324));

    if (t67 != 4383231U) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x327 = INT8_MIN;
	uint64_t x328 = UINT64_MAX;
	volatile uint64_t t68 = 26804612LLU;

    t68 = (x325|((x326+x327)%x328));

    if (t68 != 18446744073709536649LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x333 = -181;
	int16_t x334 = -980;
	int32_t x336 = INT32_MIN;
	int32_t t69 = 478;

    t69 = (x333|((x334+x335)%x336));

    if (t69 != -145) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x338 = -1LL;
	int16_t x340 = 1;

    t70 = (x337|((x338+x339)%x340));

    if (t70 != 72LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x341 = INT16_MIN;
	static volatile uint64_t x342 = 53106024354558LLU;
	static int64_t x343 = -1LL;
	volatile int32_t x344 = -1;
	volatile uint64_t t71 = 1816155569527291766LLU;

    t71 = (x341|((x342+x343)%x344));

    if (t71 != 18446744073709523709LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x346 = INT64_MAX;
	static uint64_t x347 = UINT64_MAX;
	int32_t x348 = 62775;

    t72 = (x345|((x346+x347)%x348));

    if (t72 != 246052798LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x349 = -1;
	uint8_t x350 = UINT8_MAX;
	volatile uint64_t x351 = 1259279LLU;
	int32_t x352 = INT32_MIN;
	volatile uint64_t t73 = UINT64_MAX;

    t73 = (x349|((x350+x351)%x352));

    if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x353 = 1LLU;
	int8_t x354 = -1;
	volatile uint64_t x355 = 3295458642LLU;
	static uint8_t x356 = UINT8_MAX;
	uint64_t t74 = 4565446516913731294LLU;

    t74 = (x353|((x354+x355)%x356));

    if (t74 != 57LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x358 = 2307U;
	static int16_t x360 = INT16_MIN;

    t75 = (x357|((x358+x359)%x360));

    if (t75 != 2398U) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x361 = INT64_MIN;
	static int8_t x362 = 0;
	int8_t x363 = INT8_MAX;
	static int32_t x364 = -1;
	int64_t t76 = INT64_MIN;

    t76 = (x361|((x362+x363)%x364));

    if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile int32_t x365 = INT32_MIN;
	static uint16_t x367 = UINT16_MAX;
	uint16_t x368 = 223U;
	int32_t t77 = 15072;

    t77 = (x365|((x366+x367)%x368));

    if (t77 != -2147483518) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x369 = -43;
	uint32_t x370 = UINT32_MAX;
	uint16_t x371 = 815U;

    t78 = (x369|((x370+x371)%x372));

    if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x373 = -44;
	volatile uint16_t x374 = 109U;
	static int32_t x375 = 259;
	volatile int32_t x376 = -1;
	int32_t t79 = 73762;

    t79 = (x373|((x374+x375)%x376));

    if (t79 != -44) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x377 = -89217453;
	int16_t x378 = 4;
	int32_t x379 = -1;
	volatile uint64_t t80 = 36108720LLU;

    t80 = (x377|((x378+x379)%x380));

    if (t80 != 18446744073620334163LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x381 = INT8_MIN;
	volatile int32_t x382 = 116639943;
	volatile int32_t t81 = -300;

    t81 = (x381|((x382+x383)%x384));

    if (t81 != -57) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint16_t x385 = UINT16_MAX;
	int16_t x386 = INT16_MIN;
	volatile int64_t x387 = INT64_MAX;
	static int8_t x388 = -1;
	volatile int64_t t82 = 923749LL;

    t82 = (x385|((x386+x387)%x388));

    if (t82 != 65535LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint16_t x393 = 3U;
	int8_t x394 = INT8_MIN;
	static int64_t x396 = INT64_MIN;
	int64_t t83 = 17843258837580LL;

    t83 = (x393|((x394+x395)%x396));

    if (t83 != -129LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x397 = 21U;
	volatile uint16_t x398 = 386U;
	int8_t x399 = INT8_MAX;
	volatile int32_t x400 = INT32_MIN;

    t84 = (x397|((x398+x399)%x400));

    if (t84 != 533) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int8_t x401 = INT8_MAX;
	int64_t x402 = 11724317LL;
	uint8_t x403 = 94U;
	static volatile int64_t t85 = -6673100LL;

    t85 = (x401|((x402+x403)%x404));

    if (t85 != 127LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x406 = 151805U;
	int8_t x407 = 0;
	volatile int32_t x408 = -1;
	uint64_t t86 = 4LLU;

    t86 = (x405|((x406+x407)%x408));

    if (t86 != 91849869687293LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x409 = 0U;
	static uint32_t x410 = 1U;
	volatile uint64_t x411 = UINT64_MAX;
	int64_t x412 = INT64_MIN;
	uint64_t t87 = 3298295496349LLU;

    t87 = (x409|((x410+x411)%x412));

    if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x417 = INT64_MAX;
	static int16_t x418 = 51;
	volatile int32_t x419 = INT32_MIN;

    t88 = (x417|((x418+x419)%x420));

    if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x421 = UINT8_MAX;
	uint8_t x422 = 105U;
	int32_t x423 = -106101;
	int32_t t89 = 15;

    t89 = (x421|((x422+x423)%x424));

    if (t89 != -105985) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x425 = UINT32_MAX;
	volatile int8_t x426 = INT8_MAX;
	int32_t x427 = INT32_MIN;
	int64_t x428 = -1LL;
	int64_t t90 = -10LL;

    t90 = (x425|((x426+x427)%x428));

    if (t90 != 4294967295LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x430 = INT32_MIN;
	volatile uint64_t t91 = 1150703767798562800LLU;

    t91 = (x429|((x430+x431)%x432));

    if (t91 != 2140006846LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint8_t x434 = 2U;
	static int32_t x435 = INT32_MIN;
	int64_t x436 = INT64_MIN;
	volatile int64_t t92 = -5290431885LL;

    t92 = (x433|((x434+x435)%x436));

    if (t92 != -25LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x437 = -572489;
	static int64_t x438 = -31394347LL;
	uint64_t x439 = 123872883126LLU;
	uint64_t x440 = UINT64_MAX;
	volatile uint64_t t93 = 0LLU;

    t93 = (x437|((x438+x439)%x440));

    if (t93 != 18446744073708988351LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x442 = 3;
	uint32_t x443 = UINT32_MAX;
	uint8_t x444 = 5U;
	uint32_t t94 = 3U;

    t94 = (x441|((x442+x443)%x444));

    if (t94 != 50U) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int32_t x445 = -275;
	uint32_t x446 = UINT32_MAX;
	int32_t x447 = INT32_MIN;
	uint32_t t95 = 46803U;

    t95 = (x445|((x446+x447)%x448));

    if (t95 != 4294967021U) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int64_t x449 = -33880119495707LL;
	static int8_t x450 = INT8_MAX;
	uint32_t x452 = 6700309U;
	int64_t t96 = 1LL;

    t96 = (x449|((x450+x451)%x452));

    if (t96 != -33880119495681LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x453 = 63671584603181742LLU;
	uint16_t x455 = 102U;
	uint32_t x456 = 3U;

    t97 = (x453|((x454+x455)%x456));

    if (t97 != 63671584603181742LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x457 = -1;
	int8_t x458 = -26;
	volatile int32_t x459 = 192396790;
	static int32_t x460 = INT32_MIN;
	int32_t t98 = -423;

    t98 = (x457|((x458+x459)%x460));

    if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint8_t x461 = 23U;
	int64_t x463 = INT64_MIN;
	volatile uint32_t x464 = 7U;
	int64_t t99 = 5769LL;

    t99 = (x461|((x462+x463)%x464));

    if (t99 != -1LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x465 = INT16_MAX;
	static int8_t x467 = 1;
	static volatile uint32_t x468 = 280U;
	volatile uint32_t t100 = 28U;

    t100 = (x465|((x466+x467)%x468));

    if (t100 != 32767U) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x469 = -1LL;
	uint16_t x470 = 863U;
	uint64_t x471 = 4630LLU;
	static int16_t x472 = INT16_MAX;

    t101 = (x469|((x470+x471)%x472));

    if (t101 != UINT64_MAX) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x473 = 0U;
	int8_t x474 = -1;
	static uint16_t x475 = 1719U;
	static int64_t x476 = -1LL;

    t102 = (x473|((x474+x475)%x476));

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x477 = -255554460322583LL;
	volatile int32_t x478 = -1;
	int8_t x479 = INT8_MIN;
	volatile int32_t x480 = 1082653;
	int64_t t103 = 3844LL;

    t103 = (x477|((x478+x479)%x480));

    if (t103 != -1LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x482 = 54U;
	int64_t x484 = -11LL;
	int64_t t104 = 10LL;

    t104 = (x481|((x482+x483)%x484));

    if (t104 != 4294967295LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x485 = 10U;
	int32_t x486 = INT32_MAX;
	int8_t x487 = INT8_MIN;
	volatile uint32_t x488 = 7937U;
	uint32_t t105 = 3647U;

    t105 = (x485|((x486+x487)%x488));

    if (t105 != 1179U) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int8_t x489 = 1;
	static int8_t x490 = 23;
	int32_t x491 = INT32_MIN;
	uint32_t t106 = 388749167U;

    t106 = (x489|((x490+x491)%x492));

    if (t106 != 5105455U) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x493 = 144844U;
	int64_t x494 = -1LL;
	volatile uint64_t x495 = 64097522515LLU;

    t107 = (x493|((x494+x495)%x496));

    if (t107 != 64097531870LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x498 = INT16_MIN;
	int8_t x499 = INT8_MIN;
	uint8_t x500 = 2U;
	int32_t t108 = 19972;

    t108 = (x497|((x498+x499)%x500));

    if (t108 != 73) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint8_t x501 = 23U;
	int8_t x502 = 0;
	int8_t x503 = INT8_MIN;
	int32_t t109 = 7;

    t109 = (x501|((x502+x503)%x504));

    if (t109 != -105) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x509 = INT32_MIN;
	volatile int8_t x510 = -1;
	int64_t x511 = -1LL;
	static int8_t x512 = INT8_MAX;
	int64_t t110 = -324747LL;

    t110 = (x509|((x510+x511)%x512));

    if (t110 != -2LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint64_t x514 = 8384664729LLU;
	int64_t x515 = INT64_MIN;
	uint8_t x516 = 15U;
	volatile uint64_t t111 = 41051715328499LLU;

    t111 = (x513|((x514+x515)%x516));

    if (t111 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x521 = UINT8_MAX;
	uint16_t x523 = 3249U;
	int64_t x524 = INT64_MAX;

    t112 = (x521|((x522+x523)%x524));

    if (t112 != -2147480321LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x525 = -175561;
	int8_t x526 = INT8_MIN;
	volatile int16_t x528 = INT16_MIN;
	static int32_t t113 = -114885;

    t113 = (x525|((x526+x527)%x528));

    if (t113 != -163969) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x529 = INT16_MIN;
	uint64_t x530 = 101438217715LLU;
	int32_t x531 = 3780;
	int16_t x532 = 458;
	static uint64_t t114 = 33855834192LLU;

    t114 = (x529|((x530+x531)%x532));

    if (t114 != 18446744073709519287LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint8_t x534 = 0U;
	static int32_t x535 = INT32_MIN;
	uint64_t t115 = UINT64_MAX;

    t115 = (x533|((x534+x535)%x536));

    if (t115 != UINT64_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint32_t x537 = 55179U;
	static int64_t t116 = 2642701973LL;

    t116 = (x537|((x538+x539)%x540));

    if (t116 != -2147428469LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint8_t x541 = UINT8_MAX;
	int32_t x542 = 401;
	int16_t x544 = 10;

    t117 = (x541|((x542+x543)%x544));

    if (t117 != 255) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x545 = UINT32_MAX;
	volatile int32_t x548 = -63;
	uint32_t t118 = UINT32_MAX;

    t118 = (x545|((x546+x547)%x548));

    if (t118 != UINT32_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x549 = 10577329U;
	uint64_t x550 = UINT64_MAX;
	static volatile uint16_t x552 = UINT16_MAX;

    t119 = (x549|((x550+x551)%x552));

    if (t119 != 10577331LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x553 = INT16_MIN;
	uint8_t x554 = UINT8_MAX;
	volatile uint32_t x555 = 128U;
	volatile uint32_t t120 = 7808U;

    t120 = (x553|((x554+x555)%x556));

    if (t120 != 4294934911U) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint64_t x557 = 90014LLU;
	int8_t x558 = INT8_MAX;
	volatile int32_t x559 = 3;
	volatile uint64_t t121 = 1046537175LLU;

    t121 = (x557|((x558+x559)%x560));

    if (t121 != 90014LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x561 = INT16_MIN;
	int16_t x564 = INT16_MAX;

    t122 = (x561|((x562+x563)%x564));

    if (t122 != -124) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x565 = -1;
	static uint32_t x566 = 497005790U;
	int32_t x568 = 25;
	volatile uint32_t t123 = UINT32_MAX;

    t123 = (x565|((x566+x567)%x568));

    if (t123 != UINT32_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x570 = 1345589571205838LL;
	uint64_t x571 = 275659352025982442LLU;
	static volatile uint16_t x572 = UINT16_MAX;

    t124 = (x569|((x570+x571)%x572));

    if (t124 != 40204LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint16_t x573 = UINT16_MAX;
	volatile int8_t x574 = -1;
	static int64_t x575 = -1LL;

    t125 = (x573|((x574+x575)%x576));

    if (t125 != 65535LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x578 = 2;
	int8_t x579 = -1;
	uint64_t x580 = UINT64_MAX;

    t126 = (x577|((x578+x579)%x580));

    if (t126 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint32_t x582 = 457786U;
	int16_t x583 = -1;
	int64_t x584 = INT64_MIN;
	int64_t t127 = 0LL;

    t127 = (x581|((x582+x583)%x584));

    if (t127 != 458045LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint8_t x586 = 13U;
	static uint8_t x587 = 0U;
	uint16_t x588 = UINT16_MAX;
	volatile int64_t t128 = 12145606604262LL;

    t128 = (x585|((x586+x587)%x588));

    if (t128 != -9223372036854775795LL) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint64_t x589 = UINT64_MAX;
	int64_t x591 = -1LL;
	volatile int8_t x592 = INT8_MIN;
	uint64_t t129 = UINT64_MAX;

    t129 = (x589|((x590+x591)%x592));

    if (t129 != UINT64_MAX) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x593 = INT16_MIN;
	volatile uint8_t x594 = UINT8_MAX;
	int32_t x595 = 975546;
	volatile uint8_t x596 = UINT8_MAX;
	volatile int32_t t130 = -353;

    t130 = (x593|((x594+x595)%x596));

    if (t130 != -32597) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int64_t x598 = 20852LL;
	static int64_t x600 = INT64_MAX;
	int64_t t131 = 854LL;

    t131 = (x597|((x598+x599)%x600));

    if (t131 != -9223372036854725000LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x602 = -143;
	static int16_t x603 = -1;
	uint16_t x604 = 1030U;
	volatile int64_t t132 = 27052906LL;

    t132 = (x601|((x602+x603)%x604));

    if (t132 != -139LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x605 = INT16_MIN;
	static uint8_t x606 = UINT8_MAX;
	volatile int64_t t133 = -12781578399911LL;

    t133 = (x605|((x606+x607)%x608));

    if (t133 != -32514LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x609 = 2LL;
	int64_t x610 = 1844LL;
	int64_t x612 = INT64_MAX;
	int64_t t134 = 4429440LL;

    t134 = (x609|((x610+x611)%x612));

    if (t134 != -2147481802LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x613 = INT8_MIN;
	int8_t x614 = -29;
	volatile int8_t x615 = -1;
	uint8_t x616 = 28U;

    t135 = (x613|((x614+x615)%x616));

    if (t135 != -2) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint64_t x617 = UINT64_MAX;
	int32_t x618 = INT32_MIN;
	uint64_t x619 = UINT64_MAX;
	volatile uint16_t x620 = 10U;

    t136 = (x617|((x618+x619)%x620));

    if (t136 != UINT64_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint64_t x621 = UINT64_MAX;
	static int16_t x622 = INT16_MIN;
	int8_t x623 = -2;
	static int16_t x624 = INT16_MIN;
	volatile uint64_t t137 = UINT64_MAX;

    t137 = (x621|((x622+x623)%x624));

    if (t137 != UINT64_MAX) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint8_t x625 = 38U;
	volatile int8_t x627 = 1;
	uint32_t x628 = 1U;
	volatile uint32_t t138 = 901016747U;

    t138 = (x625|((x626+x627)%x628));

    if (t138 != 38U) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x629 = 54U;
	volatile int8_t x630 = -1;
	uint16_t x632 = 8U;

    t139 = (x629|((x630+x631)%x632));

    if (t139 != -2) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x633 = UINT64_MAX;
	uint32_t x634 = 510475480U;
	int32_t x636 = INT32_MAX;
	uint64_t t140 = UINT64_MAX;

    t140 = (x633|((x634+x635)%x636));

    if (t140 != UINT64_MAX) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile int32_t x637 = INT32_MIN;
	static uint32_t x638 = UINT32_MAX;
	volatile int8_t x639 = 54;
	int8_t x640 = INT8_MIN;
	static uint32_t t141 = 7146U;

    t141 = (x637|((x638+x639)%x640));

    if (t141 != 2147483701U) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x641 = 0U;
	int8_t x642 = 6;
	int8_t x643 = 0;
	volatile int32_t x644 = -1;

    t142 = (x641|((x642+x643)%x644));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x649 = INT8_MIN;
	uint16_t x650 = UINT16_MAX;
	uint64_t x651 = 1830172860374907804LLU;

    t143 = (x649|((x650+x651)%x652));

    if (t143 != 18446744073709551515LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x658 = 24U;
	static int8_t x659 = 56;
	volatile uint32_t x660 = 234776U;
	uint32_t t144 = UINT32_MAX;

    t144 = (x657|((x658+x659)%x660));

    if (t144 != UINT32_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x661 = INT8_MIN;
	uint32_t x662 = 3U;
	static uint8_t x664 = 25U;
	volatile uint32_t t145 = 221U;

    t145 = (x661|((x662+x663)%x664));

    if (t145 != 4294967169U) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x665 = -7753LL;
	int16_t x666 = INT16_MIN;
	uint8_t x667 = UINT8_MAX;
	int64_t t146 = 81159894790611LL;

    t146 = (x665|((x666+x667)%x668));

    if (t146 != -1LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x669 = 0U;
	int64_t x671 = -1LL;
	int16_t x672 = INT16_MAX;
	volatile int64_t t147 = 1457248149458LL;

    t147 = (x669|((x670+x671)%x672));

    if (t147 != 24LL) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x678 = 301150;
	uint64_t x679 = UINT64_MAX;
	static uint16_t x680 = UINT16_MAX;
	volatile uint64_t t148 = 19770306309420LLU;

    t148 = (x677|((x678+x679)%x680));

    if (t148 != 105327LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int32_t x681 = -1;
	int8_t x682 = -3;
	volatile int8_t x684 = 20;
	uint64_t t149 = UINT64_MAX;

    t149 = (x681|((x682+x683)%x684));

    if (t149 != UINT64_MAX) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x685 = -1;
	volatile uint8_t x686 = UINT8_MAX;
	uint32_t x687 = 372876248U;
	uint16_t x688 = 20872U;
	volatile uint32_t t150 = UINT32_MAX;

    t150 = (x685|((x686+x687)%x688));

    if (t150 != UINT32_MAX) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int32_t x689 = INT32_MAX;
	int16_t x690 = INT16_MAX;
	static uint32_t x691 = 6607782U;

    t151 = (x689|((x690+x691)%x692));

    if (t151 != 2147483647LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x693 = INT32_MAX;
	int16_t x694 = -36;
	int32_t t152 = INT32_MAX;

    t152 = (x693|((x694+x695)%x696));

    if (t152 != INT32_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x697 = INT32_MIN;
	static int32_t x698 = -14;
	uint32_t x699 = 4460U;
	static int32_t x700 = INT32_MIN;

    t153 = (x697|((x698+x699)%x700));

    if (t153 != 2147488094U) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x705 = -1;
	int32_t x706 = INT32_MAX;
	static uint64_t x707 = 162486336386LLU;
	uint32_t x708 = UINT32_MAX;
	uint64_t t154 = UINT64_MAX;

    t154 = (x705|((x706+x707)%x708));

    if (t154 != UINT64_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x709 = UINT64_MAX;
	volatile uint64_t t155 = UINT64_MAX;

    t155 = (x709|((x710+x711)%x712));

    if (t155 != UINT64_MAX) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x713 = 68U;
	int16_t x714 = -717;
	int16_t x716 = INT16_MIN;
	int32_t t156 = -134;

    t156 = (x713|((x714+x715)%x716));

    if (t156 != -522) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x721 = 1866;
	volatile int8_t x722 = INT8_MIN;
	static volatile uint16_t x723 = 562U;
	static int16_t x724 = INT16_MIN;
	volatile int32_t t157 = -884076;

    t157 = (x721|((x722+x723)%x724));

    if (t157 != 2042) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x725 = 514329642367039302LL;
	uint8_t x726 = 7U;
	uint16_t x728 = 182U;
	volatile int64_t t158 = -20640LL;

    t158 = (x725|((x726+x727)%x728));

    if (t158 != 514329642367039471LL) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint64_t x729 = 16461110017737LLU;
	uint8_t x730 = UINT8_MAX;
	volatile int16_t x732 = 2;
	static volatile uint64_t t159 = 2155103995LLU;

    t159 = (x729|((x730+x731)%x732));

    if (t159 != 16461110017737LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x734 = -1;
	static int8_t x735 = INT8_MAX;
	int64_t x736 = INT64_MAX;
	volatile int64_t t160 = 12080994325032LL;

    t160 = (x733|((x734+x735)%x736));

    if (t160 != 4294967295LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x738 = INT16_MIN;
	int64_t x739 = 91LL;
	uint8_t x740 = UINT8_MAX;
	volatile int64_t t161 = -4518825467057LL;

    t161 = (x737|((x738+x739)%x740));

    if (t161 != -37LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x741 = 48755756916516944LLU;
	volatile uint16_t x742 = 20850U;
	int32_t x743 = INT32_MIN;
	static int32_t x744 = 14;
	uint64_t t162 = 960337636589489213LLU;

    t162 = (x741|((x742+x743)%x744));

    if (t162 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x745 = UINT8_MAX;
	uint64_t x746 = 22256313001LLU;
	int64_t x748 = INT64_MIN;

    t163 = (x745|((x746+x747)%x748));

    if (t163 != 22256538111LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x749 = INT8_MIN;
	uint8_t x750 = 8U;
	volatile uint32_t x751 = UINT32_MAX;
	static uint8_t x752 = 1U;
	volatile uint32_t t164 = 59U;

    t164 = (x749|((x750+x751)%x752));

    if (t164 != 4294967168U) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x757 = INT8_MIN;
	uint8_t x758 = UINT8_MAX;
	int8_t x759 = -2;

    t165 = (x757|((x758+x759)%x760));

    if (t165 != -3) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x761 = 9134289262684689LL;
	static int16_t x763 = -1;
	int32_t x764 = INT32_MIN;

    t166 = (x761|((x762+x763)%x764));

    if (t166 != 9134289262684701LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x765 = UINT16_MAX;
	int16_t x766 = -1355;
	int8_t x767 = INT8_MIN;
	static int32_t t167 = -421306099;

    t167 = (x765|((x766+x767)%x768));

    if (t167 != -1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x771 = UINT16_MAX;
	int8_t x772 = INT8_MIN;

    t168 = (x769|((x770+x771)%x772));

    if (t168 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x773 = UINT32_MAX;
	uint8_t x774 = UINT8_MAX;
	volatile int8_t x775 = -23;
	static int32_t x776 = 209;

    t169 = (x773|((x774+x775)%x776));

    if (t169 != UINT32_MAX) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x777 = INT8_MIN;
	int8_t x778 = INT8_MAX;
	int64_t x780 = INT64_MIN;
	uint64_t t170 = 22457990210482984LLU;

    t170 = (x777|((x778+x779)%x780));

    if (t170 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint16_t x781 = 477U;
	static int64_t x782 = -15520LL;
	int16_t x783 = INT16_MIN;
	volatile int16_t x784 = -39;

    t171 = (x781|((x782+x783)%x784));

    if (t171 != -1LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint32_t x790 = UINT32_MAX;
	static volatile uint8_t x791 = 0U;
	uint16_t x792 = UINT16_MAX;
	volatile uint32_t t172 = 12660874U;

    t172 = (x789|((x790+x791)%x792));

    if (t172 != 1U) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x793 = INT8_MIN;
	uint16_t x795 = 13666U;
	int64_t x796 = INT64_MAX;

    t173 = (x793|((x794+x795)%x796));

    if (t173 != -54LL) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int16_t x797 = -21;
	volatile int8_t x798 = 1;
	int8_t x799 = -14;
	int32_t x800 = 3933516;
	static volatile int32_t t174 = 2185;

    t174 = (x797|((x798+x799)%x800));

    if (t174 != -5) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x801 = INT16_MIN;
	volatile uint16_t x802 = UINT16_MAX;
	uint8_t x803 = 1U;
	static volatile int64_t t175 = 63122567277306LL;

    t175 = (x801|((x802+x803)%x804));

    if (t175 != -32768LL) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x805 = 3179917865190704LL;
	volatile int16_t x806 = INT16_MIN;
	uint32_t x807 = 1241545U;
	int8_t x808 = -1;
	volatile int64_t t176 = -6159LL;

    t176 = (x805|((x806+x807)%x808));

    if (t176 != 3179917866399225LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x809 = -1;
	static int64_t x810 = INT64_MIN;
	int32_t x811 = 16103827;
	int64_t x812 = INT64_MIN;
	int64_t t177 = -15269788130697LL;

    t177 = (x809|((x810+x811)%x812));

    if (t177 != -1LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x813 = 21560311009412LLU;
	uint32_t x814 = 92U;
	int32_t x816 = -6425;
	volatile uint64_t t178 = 1632229034425LLU;

    t178 = (x813|((x814+x815)%x816));

    if (t178 != 21560312069047LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x817 = 31999806345LLU;
	static int16_t x818 = -1;
	int16_t x819 = INT16_MIN;
	volatile uint64_t t179 = 2068LLU;

    t179 = (x817|((x818+x819)%x820));

    if (t179 != 34359705599LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile int8_t x821 = INT8_MIN;
	uint16_t x823 = 3346U;
	int32_t x824 = INT32_MIN;
	volatile int32_t t180 = -247511096;

    t180 = (x821|((x822+x823)%x824));

    if (t180 != -110) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x825 = -56;
	uint16_t x826 = UINT16_MAX;
	int32_t x827 = -1017420409;
	uint32_t x828 = 1370493099U;
	static uint32_t t181 = 205398349U;

    t181 = (x825|((x826+x827)%x828));

    if (t181 != 4294967288U) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x829 = UINT16_MAX;
	static int16_t x830 = INT16_MAX;
	static int16_t x831 = INT16_MIN;
	int32_t x832 = 3;
	int32_t t182 = 160;

    t182 = (x829|((x830+x831)%x832));

    if (t182 != -1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x834 = UINT32_MAX;
	int64_t x835 = INT64_MIN;
	static int8_t x836 = INT8_MIN;
	volatile int64_t t183 = -110055000055810554LL;

    t183 = (x833|((x834+x835)%x836));

    if (t183 != -1LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x839 = 6299477U;
	int8_t x840 = INT8_MIN;
	volatile uint64_t t184 = UINT64_MAX;

    t184 = (x837|((x838+x839)%x840));

    if (t184 != UINT64_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x842 = -1LL;
	volatile int16_t x843 = INT16_MIN;
	int8_t x844 = INT8_MIN;
	static int64_t t185 = 83094LL;

    t185 = (x841|((x842+x843)%x844));

    if (t185 != -1LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x846 = INT64_MIN;
	int8_t x848 = -1;
	int64_t t186 = 81099363078LL;

    t186 = (x845|((x846+x847)%x848));

    if (t186 != -2147483648LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x849 = -1;
	int64_t x850 = 20825384LL;
	int64_t x851 = -1LL;
	static uint32_t x852 = UINT32_MAX;
	int64_t t187 = 117853429232506570LL;

    t187 = (x849|((x850+x851)%x852));

    if (t187 != -1LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x854 = INT64_MIN;
	uint8_t x855 = 4U;
	volatile int64_t t188 = -926948055250LL;

    t188 = (x853|((x854+x855)%x856));

    if (t188 != -2147450881LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x857 = -211372345;
	static uint32_t x858 = UINT32_MAX;
	volatile int8_t x859 = INT8_MIN;
	uint32_t x860 = 3U;
	uint32_t t189 = 518041823U;

    t189 = (x857|((x858+x859)%x860));

    if (t189 != 4083594951U) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x861 = INT8_MIN;
	int8_t x862 = -1;
	static uint16_t x863 = 0U;
	volatile uint16_t x864 = 4U;
	volatile int32_t t190 = 401578;

    t190 = (x861|((x862+x863)%x864));

    if (t190 != -1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x866 = 1;
	uint16_t x867 = UINT16_MAX;
	volatile int64_t t191 = -250LL;

    t191 = (x865|((x866+x867)%x868));

    if (t191 != -2147418112LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x870 = INT16_MAX;
	volatile int64_t x871 = INT64_MIN;
	uint64_t x872 = 2492356LLU;
	uint64_t t192 = 94554721016648LLU;

    t192 = (x869|((x870+x871)%x872));

    if (t192 != 2351295LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x873 = 10U;
	int32_t x874 = 385976;
	volatile int16_t x875 = INT16_MAX;
	int64_t x876 = INT64_MIN;
	int64_t t193 = -3252LL;

    t193 = (x873|((x874+x875)%x876));

    if (t193 != 418751LL) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int64_t x877 = INT64_MIN;
	static int16_t x879 = -241;
	volatile int64_t x880 = 30759234LL;
	int64_t t194 = -972822897581LL;

    t194 = (x877|((x878+x879)%x880));

    if (t194 != -9223372036829679548LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x881 = 1;
	static volatile int16_t x882 = -1;
	int8_t x883 = -1;
	int64_t x884 = -1LL;
	volatile int64_t t195 = -15748631167603LL;

    t195 = (x881|((x882+x883)%x884));

    if (t195 != 1LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x885 = 32124236975776326LLU;
	static volatile int32_t x886 = INT32_MIN;
	int16_t x887 = INT16_MAX;
	uint64_t t196 = 678772LLU;

    t196 = (x885|((x886+x887)%x888));

    if (t196 != 32124236975776326LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x889 = INT8_MAX;
	int16_t x890 = -1;
	int8_t x891 = INT8_MIN;
	static volatile uint16_t x892 = 4032U;
	volatile int32_t t197 = -150930;

    t197 = (x889|((x890+x891)%x892));

    if (t197 != -129) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x893 = 4U;
	static volatile int32_t x894 = 6452;
	uint64_t x895 = 7140384496156LLU;
	uint64_t t198 = 280240017084525736LLU;

    t198 = (x893|((x894+x895)%x896));

    if (t198 != 143346772LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x902 = 2;
	volatile int16_t x903 = 6;
	int16_t x904 = -571;
	volatile int64_t t199 = 15373675LL;

    t199 = (x901|((x902+x903)%x904));

    if (t199 != -9223372036854775800LL) { NG(); } else { ; }
	
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

