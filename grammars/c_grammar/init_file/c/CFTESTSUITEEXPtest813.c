
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

static int8_t x3 = -1;
int8_t x4 = -1;
volatile int64_t t2 = 6LL;
int32_t t3 = -371;
volatile int32_t x32 = INT32_MAX;
volatile int64_t x41 = INT64_MAX;
static volatile int16_t x47 = -2;
uint8_t x66 = UINT8_MAX;
static uint16_t x70 = 7373U;
static uint64_t t12 = 150443457427716633LLU;
uint8_t x80 = 5U;
int8_t x88 = 2;
static uint16_t x95 = UINT16_MAX;
int64_t x96 = -1LL;
int64_t x97 = -1LL;
int8_t x105 = 0;
uint32_t x114 = 350538808U;
volatile uint32_t t21 = 246U;
uint16_t x119 = UINT16_MAX;
static int64_t x120 = 11713861LL;
static int64_t t22 = 2286249559319901LL;
int64_t t23 = -7902491821931581LL;
static int64_t x136 = -1092874175319161LL;
uint32_t x140 = UINT32_MAX;
uint64_t x157 = 1181053LLU;
uint8_t x158 = 14U;
volatile int8_t x160 = -23;
int8_t x174 = -1;
uint32_t t33 = 1U;
int16_t x187 = 1;
int64_t t34 = 99237596369100LL;
volatile int64_t t37 = -812805132510943LL;
volatile uint8_t x202 = UINT8_MAX;
uint16_t x203 = 97U;
uint8_t x209 = UINT8_MAX;
uint16_t x211 = 3U;
static int8_t x212 = -1;
int8_t x219 = -1;
uint64_t x220 = 7047357442863990LLU;
volatile int64_t x228 = INT64_MIN;
int64_t x229 = -1715LL;
int8_t x244 = 0;
uint8_t x254 = 34U;
int8_t x257 = INT8_MAX;
static uint8_t x259 = UINT8_MAX;
int64_t t52 = -177373414796LL;
volatile int32_t x264 = 3;
int32_t t56 = 688;
static uint8_t x277 = 0U;
int32_t x278 = -1;
static int16_t x279 = -1;
uint32_t x280 = 48203U;
static int8_t x281 = -2;
volatile uint64_t t58 = 2LLU;
static uint32_t x286 = 122909U;
int8_t x294 = -1;
int64_t x299 = INT64_MAX;
uint32_t x303 = 399U;
int16_t x304 = -19;
int32_t x313 = INT32_MIN;
static int8_t x332 = -12;
volatile uint32_t t68 = 43U;
uint64_t x336 = UINT64_MAX;
uint64_t t69 = 869721971791453LLU;
int32_t x357 = -1089745;
int64_t x359 = INT64_MAX;
uint8_t x369 = 11U;
volatile int32_t x384 = INT32_MIN;
int32_t x399 = -1;
uint32_t x401 = UINT32_MAX;
volatile int16_t x405 = INT16_MIN;
int64_t x415 = 5779LL;
int64_t t85 = -3011LL;
int16_t x431 = -1;
uint64_t t89 = 1001583073LLU;
static int64_t x440 = INT64_MAX;
volatile int64_t t90 = 188055315550LL;
int16_t x463 = -1;
static int64_t x466 = INT64_MIN;
uint8_t x468 = 1U;
int64_t x472 = -1LL;
volatile int64_t t98 = -3515LL;
uint8_t x476 = 80U;
static int64_t t101 = -14783410830LL;
uint16_t x491 = UINT16_MAX;
volatile int64_t t102 = 425076564227176005LL;
int16_t x494 = -11;
uint64_t x496 = 7806474212689036LLU;
static uint64_t t103 = 723073LLU;
int8_t x503 = INT8_MIN;
volatile uint8_t x504 = 34U;
static int64_t x522 = INT64_MAX;
static uint32_t x546 = 28633U;
int64_t x553 = INT64_MIN;
uint64_t x559 = UINT64_MAX;
static volatile uint64_t t115 = 82710LLU;
static int8_t x561 = INT8_MIN;
static volatile int16_t x567 = -1;
volatile int64_t t117 = -36128LL;
int32_t x578 = INT32_MIN;
int64_t x582 = INT64_MIN;
volatile uint64_t x586 = 6LLU;
int64_t x591 = 572811755613887LL;
volatile uint64_t t121 = 150512470954915LLU;
volatile int64_t t122 = 21629532LL;
static int16_t x616 = 3601;
int16_t x636 = -1;
volatile uint32_t x640 = 454319U;
int64_t x651 = -20LL;
int64_t x652 = -1LL;
int64_t t136 = -28812500023185LL;
static int16_t x665 = 27;
int16_t x667 = -29;
static int32_t x672 = -7976;
int16_t x673 = INT16_MIN;
int32_t x676 = INT32_MIN;
uint64_t x679 = UINT64_MAX;
static int32_t x694 = INT32_MAX;
int64_t x695 = -171LL;
int64_t x696 = 4856670LL;
static int64_t t144 = -78291LL;
uint32_t x701 = UINT32_MAX;
int32_t x703 = INT32_MIN;
int8_t x711 = -1;
uint32_t x722 = UINT32_MAX;
volatile uint64_t x723 = 343152793578LLU;
volatile int8_t x724 = INT8_MAX;
uint32_t x734 = 90070247U;
int16_t x740 = INT16_MAX;
static int16_t x743 = -17;
uint32_t t154 = 7181557U;
volatile int32_t t155 = -151121260;
int32_t x772 = INT32_MIN;
volatile int64_t t159 = -14433968467573339LL;
static int8_t x782 = INT8_MIN;
int64_t t163 = -332823035400LL;
static uint64_t t166 = 742500001626152695LLU;
int16_t x812 = INT16_MAX;
int8_t x813 = -1;
int64_t x814 = -155LL;
int8_t x820 = INT8_MIN;
uint64_t x822 = 257869711756LLU;
static uint64_t x826 = 256386534363LLU;
volatile uint64_t t171 = 234654665LLU;
int64_t t172 = 3LL;
int16_t x841 = 43;
volatile int16_t x843 = -1;
int32_t t174 = -449;
int8_t x845 = INT8_MIN;
uint8_t x848 = 123U;
int32_t t175 = -570798;
volatile uint16_t x855 = UINT16_MAX;
static int32_t x857 = -1;
uint32_t x868 = UINT32_MAX;
volatile uint32_t t179 = 14401U;
int16_t x872 = INT16_MIN;
int16_t x876 = INT16_MIN;
int16_t x887 = -1;
volatile int32_t t184 = INT32_MIN;
uint8_t x889 = 1U;
volatile uint32_t x895 = 12716U;
int8_t x902 = INT8_MIN;
static int64_t x914 = INT64_MIN;
volatile int16_t x916 = 41;
int64_t t191 = 481296LL;
static uint32_t x920 = UINT32_MAX;
int8_t x922 = INT8_MIN;
int32_t x925 = INT32_MAX;
uint32_t t196 = 111183011U;
volatile uint32_t t197 = 2U;
int32_t x947 = -1;


void f0(void) {
    	int64_t x1 = INT64_MIN;
	int64_t x2 = INT64_MIN;
	int64_t t0 = INT64_MIN;

    t0 = (x1+((x2%x3)*x4));

    if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x13 = -1;
	int32_t x14 = INT32_MIN;
	volatile int16_t x15 = INT16_MAX;
	static volatile uint16_t x16 = 184U;
	int32_t t1 = -11441;

    t1 = (x13+((x14%x15)*x16));

    if (t1 != -369) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x21 = 2070U;
	int32_t x22 = 1436;
	int32_t x23 = INT32_MIN;
	int64_t x24 = -1LL;

    t2 = (x21+((x22%x23)*x24));

    if (t2 != 634LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x25 = -1;
	uint16_t x26 = 48U;
	int32_t x27 = 39219;
	int8_t x28 = -25;

    t3 = (x25+((x26%x27)*x28));

    if (t3 != -1201) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x29 = INT8_MIN;
	int64_t x30 = 65LL;
	int16_t x31 = -1;
	int64_t t4 = 16408501648LL;

    t4 = (x29+((x30%x31)*x32));

    if (t4 != -128LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x37 = INT16_MIN;
	uint32_t x38 = UINT32_MAX;
	uint32_t x39 = UINT32_MAX;
	uint64_t x40 = 16502563791259937LLU;
	volatile uint64_t t5 = 719303LLU;

    t5 = (x37+((x38%x39)*x40));

    if (t5 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint64_t x42 = 1140087453500643137LLU;
	int64_t x43 = -36744LL;
	static uint32_t x44 = 459U;
	volatile uint64_t t6 = 27658LLU;

    t6 = (x41+((x42%x43)*x44));

    if (t6 != 16014679129782530442LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint16_t x45 = UINT16_MAX;
	int16_t x46 = INT16_MIN;
	static uint16_t x48 = UINT16_MAX;
	int32_t t7 = -37718905;

    t7 = (x45+((x46%x47)*x48));

    if (t7 != 65535) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x53 = INT16_MIN;
	volatile int16_t x54 = -101;
	volatile int8_t x55 = INT8_MIN;
	static uint64_t x56 = UINT64_MAX;
	uint64_t t8 = 6LLU;

    t8 = (x53+((x54%x55)*x56));

    if (t8 != 18446744073709518949LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x61 = UINT32_MAX;
	int32_t x62 = INT32_MIN;
	volatile uint64_t x63 = 1677015LLU;
	int32_t x64 = -1;
	volatile uint64_t t9 = 1465LLU;

    t9 = (x61+((x62%x63)*x64));

    if (t9 != 4293919132LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x65 = INT16_MAX;
	static int32_t x67 = INT32_MAX;
	int16_t x68 = -8;
	volatile int32_t t10 = -362968;

    t10 = (x65+((x66%x67)*x68));

    if (t10 != 30727) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x69 = 3U;
	uint32_t x71 = UINT32_MAX;
	int32_t x72 = 0;
	static uint32_t t11 = 10404346U;

    t11 = (x69+((x70%x71)*x72));

    if (t11 != 3U) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x73 = -61;
	static volatile int16_t x74 = -1;
	uint64_t x75 = UINT64_MAX;
	volatile int16_t x76 = -1;

    t12 = (x73+((x74%x75)*x76));

    if (t12 != 18446744073709551555LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x77 = -1;
	static uint8_t x78 = 5U;
	int64_t x79 = -1LL;
	volatile int64_t t13 = -265379LL;

    t13 = (x77+((x78%x79)*x80));

    if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x85 = 9;
	uint16_t x86 = 14768U;
	int8_t x87 = INT8_MIN;
	int32_t t14 = 1603;

    t14 = (x85+((x86%x87)*x88));

    if (t14 != 105) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x89 = INT32_MIN;
	volatile int8_t x90 = INT8_MAX;
	volatile int64_t x91 = -1LL;
	int16_t x92 = -3;
	volatile int64_t t15 = -4LL;

    t15 = (x89+((x90%x91)*x92));

    if (t15 != -2147483648LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x93 = 1;
	volatile uint8_t x94 = UINT8_MAX;
	int64_t t16 = 33634201090603LL;

    t16 = (x93+((x94%x95)*x96));

    if (t16 != -254LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x98 = -116609895138LL;
	int32_t x99 = -83;
	volatile int64_t x100 = -15947451358LL;
	volatile int64_t t17 = 11214768171LL;

    t17 = (x97+((x98%x99)*x100));

    if (t17 != 845214921973LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x101 = INT16_MAX;
	uint32_t x102 = UINT32_MAX;
	volatile int64_t x103 = INT64_MIN;
	static volatile int16_t x104 = -1;
	int64_t t18 = 3LL;

    t18 = (x101+((x102%x103)*x104));

    if (t18 != -4294934528LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x106 = INT64_MAX;
	uint32_t x107 = 25115732U;
	static int16_t x108 = -1;
	volatile int64_t t19 = -2471504LL;

    t19 = (x105+((x106%x107)*x108));

    if (t19 != -14238919LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x109 = 647;
	static volatile uint32_t x110 = 5U;
	uint16_t x111 = 18U;
	volatile uint32_t x112 = 222868U;
	uint32_t t20 = 337U;

    t20 = (x109+((x110%x111)*x112));

    if (t20 != 1114987U) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x113 = INT16_MIN;
	uint32_t x115 = 7U;
	static uint8_t x116 = UINT8_MAX;

    t21 = (x113+((x114%x115)*x116));

    if (t21 != 4294935548U) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x117 = INT8_MAX;
	static int8_t x118 = -1;

    t22 = (x117+((x118%x119)*x120));

    if (t22 != -11713734LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int64_t x121 = -49672555LL;
	int8_t x122 = -1;
	volatile int16_t x123 = INT16_MIN;
	static int16_t x124 = -28;

    t23 = (x121+((x122%x123)*x124));

    if (t23 != -49672527LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x125 = -12;
	int64_t x126 = INT64_MIN;
	static volatile int8_t x127 = -5;
	static int8_t x128 = INT8_MIN;
	static int64_t t24 = -256346239671351LL;

    t24 = (x125+((x126%x127)*x128));

    if (t24 != 372LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x133 = 6009;
	int64_t x134 = INT64_MIN;
	static uint16_t x135 = 6U;
	volatile int64_t t25 = 66061514488117LL;

    t25 = (x133+((x134%x135)*x136));

    if (t25 != 2185748350644331LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint16_t x137 = 1239U;
	volatile int8_t x138 = INT8_MAX;
	static int64_t x139 = -1595273112LL;
	int64_t t26 = 131341LL;

    t26 = (x137+((x138%x139)*x140));

    if (t26 != 545460847704LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x141 = 741214LLU;
	volatile int64_t x142 = INT64_MIN;
	int8_t x143 = 17;
	static int32_t x144 = INT32_MAX;
	uint64_t t27 = 3429098911593LLU;

    t27 = (x141+((x142%x143)*x144));

    if (t27 != 18446744054382940007LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x145 = -1967;
	int8_t x146 = 0;
	volatile uint32_t x147 = UINT32_MAX;
	static int64_t x148 = INT64_MAX;
	int64_t t28 = 2LL;

    t28 = (x145+((x146%x147)*x148));

    if (t28 != -1967LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x153 = UINT8_MAX;
	volatile int8_t x154 = INT8_MIN;
	volatile uint32_t x155 = 52882385U;
	int16_t x156 = INT16_MAX;
	static volatile uint32_t t29 = 0U;

    t29 = (x153+((x154%x155)*x156));

    if (t29 != 2961186464U) { NG(); } else { ; }
	
}

void f30(void) {
    	static int16_t x159 = INT16_MAX;
	static uint64_t t30 = 9945109LLU;

    t30 = (x157+((x158%x159)*x160));

    if (t30 != 1180731LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x161 = -4297436894835806LL;
	int64_t x162 = INT64_MAX;
	int16_t x163 = INT16_MIN;
	static int16_t x164 = -1;
	volatile int64_t t31 = 91883038321557023LL;

    t31 = (x161+((x162%x163)*x164));

    if (t31 != -4297436894868573LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x173 = 7U;
	static volatile uint16_t x175 = 254U;
	volatile int8_t x176 = INT8_MAX;
	volatile uint32_t t32 = 1010U;

    t32 = (x173+((x174%x175)*x176));

    if (t32 != 4294967176U) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x181 = INT16_MIN;
	uint8_t x182 = 1U;
	uint32_t x183 = 86225U;
	int32_t x184 = INT32_MAX;

    t33 = (x181+((x182%x183)*x184));

    if (t33 != 2147450879U) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x185 = INT8_MAX;
	int64_t x186 = -454LL;
	int64_t x188 = 572060LL;

    t34 = (x185+((x186%x187)*x188));

    if (t34 != 127LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x189 = -1;
	uint32_t x190 = 3617153U;
	volatile uint32_t x191 = 3446U;
	int32_t x192 = INT32_MIN;
	static uint32_t t35 = 56428897U;

    t35 = (x189+((x190%x191)*x192));

    if (t35 != 2147483647U) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x193 = 1U;
	int64_t x194 = INT64_MIN;
	volatile int64_t x195 = 117412483LL;
	uint16_t x196 = UINT16_MAX;
	int64_t t36 = 6326LL;

    t36 = (x193+((x194%x195)*x196));

    if (t36 != -3719869358879LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x197 = -278;
	int64_t x198 = -1LL;
	volatile int8_t x199 = -1;
	static uint16_t x200 = 3140U;

    t37 = (x197+((x198%x199)*x200));

    if (t37 != -278LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x201 = -1698;
	volatile int64_t x204 = -30407642LL;
	static int64_t t38 = -874LL;

    t38 = (x201+((x202%x203)*x204));

    if (t38 != -1854867860LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x205 = UINT32_MAX;
	static int32_t x206 = 1;
	static int8_t x207 = -2;
	int64_t x208 = -32673LL;
	volatile int64_t t39 = 1LL;

    t39 = (x205+((x206%x207)*x208));

    if (t39 != 4294934622LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int8_t x210 = -22;
	volatile int32_t t40 = -86148;

    t40 = (x209+((x210%x211)*x212));

    if (t40 != 256) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int16_t x213 = -158;
	uint8_t x214 = 59U;
	int64_t x215 = -108889584524151352LL;
	uint32_t x216 = UINT32_MAX;
	int64_t t41 = 4116567651LL;

    t41 = (x213+((x214%x215)*x216));

    if (t41 != 253403070247LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x217 = -1LL;
	int64_t x218 = -1LL;
	uint64_t t42 = UINT64_MAX;

    t42 = (x217+((x218%x219)*x220));

    if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x221 = 9LLU;
	int8_t x222 = INT8_MAX;
	uint32_t x223 = 11795U;
	uint64_t x224 = 7784724290657446926LLU;
	uint64_t t43 = 1681575282LLU;

    t43 = (x221+((x222%x223)*x224));

    if (t43 != 10982549006889523963LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x225 = INT32_MIN;
	int16_t x226 = -119;
	volatile int8_t x227 = -1;
	volatile int64_t t44 = -4288579813LL;

    t44 = (x225+((x226%x227)*x228));

    if (t44 != -2147483648LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x230 = -1;
	int32_t x231 = INT32_MIN;
	int8_t x232 = 25;
	int64_t t45 = -754LL;

    t45 = (x229+((x230%x231)*x232));

    if (t45 != -1740LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x233 = INT16_MAX;
	volatile uint16_t x234 = 3U;
	static int64_t x235 = -6051588LL;
	static int32_t x236 = -1;
	int64_t t46 = 130015916LL;

    t46 = (x233+((x234%x235)*x236));

    if (t46 != 32764LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x237 = 15296U;
	static int64_t x238 = INT64_MAX;
	volatile int16_t x239 = INT16_MIN;
	static int8_t x240 = -1;
	int64_t t47 = 4763850499LL;

    t47 = (x237+((x238%x239)*x240));

    if (t47 != -17471LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x241 = INT32_MAX;
	int64_t x242 = 1LL;
	static int32_t x243 = INT32_MIN;
	volatile int64_t t48 = 1638710222LL;

    t48 = (x241+((x242%x243)*x244));

    if (t48 != 2147483647LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x245 = -1;
	int8_t x246 = -51;
	int16_t x247 = 1;
	int32_t x248 = -959882;
	int32_t t49 = -7;

    t49 = (x245+((x246%x247)*x248));

    if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x249 = INT32_MIN;
	volatile int16_t x250 = INT16_MIN;
	volatile int64_t x251 = INT64_MAX;
	uint16_t x252 = 11U;
	static int64_t t50 = -180981108007LL;

    t50 = (x249+((x250%x251)*x252));

    if (t50 != -2147844096LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x253 = 1U;
	static volatile uint32_t x255 = 126U;
	int8_t x256 = -25;
	uint32_t t51 = 180252405U;

    t51 = (x253+((x254%x255)*x256));

    if (t51 != 4294966447U) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x258 = INT64_MIN;
	static int8_t x260 = -31;

    t52 = (x257+((x258%x259)*x260));

    if (t52 != 4095LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint8_t x261 = 37U;
	int64_t x262 = INT64_MIN;
	int64_t x263 = INT64_MAX;
	int64_t t53 = 4811255833274790LL;

    t53 = (x261+((x262%x263)*x264));

    if (t53 != 34LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x265 = INT32_MAX;
	int16_t x266 = INT16_MIN;
	volatile uint64_t x267 = 8320843957LLU;
	uint64_t x268 = UINT64_MAX;
	volatile uint64_t t54 = 152LLU;

    t54 = (x265+((x266%x267)*x268));

    if (t54 != 18446744072509286435LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x269 = 110;
	static volatile uint32_t x270 = 1931U;
	volatile uint64_t x271 = UINT64_MAX;
	uint16_t x272 = 490U;
	uint64_t t55 = 2224LLU;

    t55 = (x269+((x270%x271)*x272));

    if (t55 != 946300LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x273 = 165;
	int32_t x274 = INT32_MIN;
	int32_t x275 = -1263046;
	int8_t x276 = -33;

    t56 = (x273+((x274%x275)*x276));

    if (t56 != 10079949) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint32_t t57 = 50436U;

    t57 = (x277+((x278%x279)*x280));

    if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint16_t x282 = 114U;
	static volatile int32_t x283 = -1;
	uint64_t x284 = 64035251576LLU;

    t58 = (x281+((x282%x283)*x284));

    if (t58 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x285 = 35391811842709793LLU;
	int32_t x287 = INT32_MIN;
	static int64_t x288 = 1421567LL;
	static uint64_t t59 = 9470538921107885LLU;

    t59 = (x285+((x286%x287)*x288));

    if (t59 != 35391986566088196LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x289 = INT8_MIN;
	int64_t x290 = INT64_MIN;
	volatile uint64_t x291 = 5690960087LLU;
	static int8_t x292 = INT8_MIN;
	volatile uint64_t t60 = 3LLU;

    t60 = (x289+((x290%x291)*x292));

    if (t60 != 18446743446067819136LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x293 = INT8_MIN;
	static int64_t x295 = -1LL;
	volatile int64_t x296 = INT64_MAX;
	volatile int64_t t61 = -3850207068355116LL;

    t61 = (x293+((x294%x295)*x296));

    if (t61 != -128LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x297 = -25;
	int16_t x298 = INT16_MIN;
	int8_t x300 = INT8_MIN;
	volatile int64_t t62 = -446043257529LL;

    t62 = (x297+((x298%x299)*x300));

    if (t62 != 4194279LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x301 = -1LL;
	int64_t x302 = INT64_MAX;
	static int64_t t63 = -840070619764LL;

    t63 = (x301+((x302%x303)*x304));

    if (t63 != -2129LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x305 = -49;
	int16_t x306 = INT16_MIN;
	static int16_t x307 = 23;
	volatile uint16_t x308 = 182U;
	static int32_t t64 = -54707;

    t64 = (x305+((x306%x307)*x308));

    if (t64 != -2961) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int8_t x309 = INT8_MIN;
	int16_t x310 = INT16_MIN;
	int32_t x311 = -1;
	int32_t x312 = INT32_MAX;
	volatile int32_t t65 = -2428;

    t65 = (x309+((x310%x311)*x312));

    if (t65 != -128) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x314 = 29U;
	volatile uint32_t x315 = 1947U;
	int32_t x316 = INT32_MIN;
	static volatile uint32_t t66 = 5U;

    t66 = (x313+((x314%x315)*x316));

    if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int64_t x325 = 6106463358994746LL;
	volatile int64_t x326 = INT64_MIN;
	int16_t x327 = -1;
	static uint32_t x328 = 4396523U;
	int64_t t67 = -14363375622433LL;

    t67 = (x325+((x326%x327)*x328));

    if (t67 != 6106463358994746LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x329 = -1;
	uint32_t x330 = 249U;
	static int16_t x331 = -1;

    t68 = (x329+((x330%x331)*x332));

    if (t68 != 4294964307U) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x333 = 119U;
	static uint16_t x334 = 4U;
	int32_t x335 = -1;

    t69 = (x333+((x334%x335)*x336));

    if (t69 != 119LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x337 = INT8_MIN;
	uint32_t x338 = UINT32_MAX;
	uint32_t x339 = UINT32_MAX;
	uint64_t x340 = 6847258343571953LLU;
	uint64_t t70 = 4594742LLU;

    t70 = (x337+((x338%x339)*x340));

    if (t70 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x341 = INT64_MIN;
	uint32_t x342 = 2493U;
	volatile int16_t x343 = INT16_MIN;
	static int8_t x344 = 27;
	static volatile int64_t t71 = -2628716203814LL;

    t71 = (x341+((x342%x343)*x344));

    if (t71 != -9223372036854708497LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x349 = UINT16_MAX;
	int8_t x350 = INT8_MAX;
	uint8_t x351 = 54U;
	volatile int64_t x352 = 26182LL;
	int64_t t72 = 19539LL;

    t72 = (x349+((x350%x351)*x352));

    if (t72 != 562993LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x353 = UINT32_MAX;
	uint8_t x354 = 23U;
	uint64_t x355 = UINT64_MAX;
	uint8_t x356 = 1U;
	static volatile uint64_t t73 = 97179LLU;

    t73 = (x353+((x354%x355)*x356));

    if (t73 != 4294967318LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x358 = INT64_MIN;
	static uint64_t x360 = 1337LLU;
	volatile uint64_t t74 = 602901316481012LLU;

    t74 = (x357+((x358%x359)*x360));

    if (t74 != 18446744073708460534LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x370 = 6U;
	uint64_t x371 = UINT64_MAX;
	int8_t x372 = INT8_MIN;
	volatile uint64_t t75 = 13LLU;

    t75 = (x369+((x370%x371)*x372));

    if (t75 != 18446744073709550859LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x373 = 1U;
	static int8_t x374 = INT8_MAX;
	int16_t x375 = INT16_MIN;
	volatile int8_t x376 = INT8_MAX;
	static int32_t t76 = -550;

    t76 = (x373+((x374%x375)*x376));

    if (t76 != 16130) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x377 = 9U;
	static uint64_t x378 = UINT64_MAX;
	volatile int32_t x379 = 69462263;
	static int8_t x380 = INT8_MIN;
	static uint64_t t77 = 17095094567756LLU;

    t77 = (x377+((x378%x379)*x380));

    if (t77 != 18446744071058611337LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x381 = -1109;
	int64_t x382 = INT64_MAX;
	uint32_t x383 = 4U;
	int64_t t78 = -1077053737LL;

    t78 = (x381+((x382%x383)*x384));

    if (t78 != -6442452053LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x385 = -7LL;
	int8_t x386 = -1;
	uint16_t x387 = UINT16_MAX;
	static volatile int64_t x388 = -58021008LL;
	int64_t t79 = -485283LL;

    t79 = (x385+((x386%x387)*x388));

    if (t79 != 58021001LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x397 = -490184263851LL;
	uint8_t x398 = 20U;
	volatile int32_t x400 = INT32_MIN;
	static int64_t t80 = 2967724LL;

    t80 = (x397+((x398%x399)*x400));

    if (t80 != -490184263851LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint32_t x402 = 974U;
	uint64_t x403 = UINT64_MAX;
	uint32_t x404 = 89U;
	volatile uint64_t t81 = 17046446772447202LLU;

    t81 = (x401+((x402%x403)*x404));

    if (t81 != 4295053981LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint16_t x406 = UINT16_MAX;
	int64_t x407 = INT64_MAX;
	int32_t x408 = INT32_MAX;
	volatile int64_t t82 = 4711326565819LL;

    t82 = (x405+((x406%x407)*x408));

    if (t82 != 140735340773377LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x409 = UINT32_MAX;
	int8_t x410 = INT8_MAX;
	static int8_t x411 = -1;
	uint32_t x412 = 42288U;
	static volatile uint32_t t83 = UINT32_MAX;

    t83 = (x409+((x410%x411)*x412));

    if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x413 = INT32_MAX;
	int16_t x414 = 3791;
	int8_t x416 = -1;
	int64_t t84 = 68631LL;

    t84 = (x413+((x414%x415)*x416));

    if (t84 != 2147479856LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x417 = -1;
	int64_t x418 = 16325158654LL;
	int8_t x419 = INT8_MIN;
	int32_t x420 = -1;

    t85 = (x417+((x418%x419)*x420));

    if (t85 != -127LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x421 = INT32_MIN;
	int8_t x422 = INT8_MIN;
	int64_t x423 = INT64_MIN;
	volatile int32_t x424 = INT32_MIN;
	int64_t t86 = -1179764LL;

    t86 = (x421+((x422%x423)*x424));

    if (t86 != 272730423296LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x425 = 12048701;
	volatile int32_t x426 = -690186;
	volatile uint16_t x427 = 1962U;
	int16_t x428 = -4;
	int32_t t87 = -2421;

    t87 = (x425+((x426%x427)*x428));

    if (t87 != 12054797) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x429 = 2200LLU;
	static uint8_t x430 = 1U;
	int8_t x432 = INT8_MAX;
	uint64_t t88 = 127173609LLU;

    t88 = (x429+((x430%x431)*x432));

    if (t88 != 2200LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x433 = UINT16_MAX;
	int8_t x434 = -26;
	int16_t x435 = INT16_MAX;
	static uint64_t x436 = 1945118966LLU;

    t89 = (x433+((x434%x435)*x436));

    if (t89 != 18446744023136524035LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x437 = 4;
	int16_t x438 = INT16_MIN;
	int8_t x439 = -1;

    t90 = (x437+((x438%x439)*x440));

    if (t90 != 4LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x441 = -1;
	static uint64_t x442 = 181761791919118LLU;
	int8_t x443 = INT8_MIN;
	int32_t x444 = INT32_MIN;
	static uint64_t t91 = 781360LLU;

    t91 = (x441+((x442%x443)*x444));

    if (t91 != 2628622209668612095LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static int16_t x445 = INT16_MIN;
	int16_t x446 = 55;
	int8_t x447 = -1;
	volatile uint64_t x448 = UINT64_MAX;
	volatile uint64_t t92 = 2291983895817753LLU;

    t92 = (x445+((x446%x447)*x448));

    if (t92 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x449 = -1355;
	uint64_t x450 = UINT64_MAX;
	static volatile int64_t x451 = INT64_MIN;
	int64_t x452 = -13084687521LL;
	uint64_t t93 = 14307019LLU;

    t93 = (x449+((x450%x451)*x452));

    if (t93 != 9223372049939461974LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x453 = -3867936777684094LL;
	int64_t x454 = INT64_MAX;
	int64_t x455 = -1LL;
	uint32_t x456 = 7832852U;
	volatile int64_t t94 = -5003469333351167LL;

    t94 = (x453+((x454%x455)*x456));

    if (t94 != -3867936777684094LL) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint16_t x457 = 78U;
	int16_t x458 = INT16_MIN;
	volatile int16_t x459 = INT16_MIN;
	int64_t x460 = -1LL;
	static int64_t t95 = -3154235697LL;

    t95 = (x457+((x458%x459)*x460));

    if (t95 != 78LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint32_t x461 = UINT32_MAX;
	static int32_t x462 = INT32_MIN;
	int64_t x464 = INT64_MIN;
	volatile int64_t t96 = 359646691523554540LL;

    t96 = (x461+((x462%x463)*x464));

    if (t96 != 4294967295LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x465 = INT16_MIN;
	int16_t x467 = INT16_MAX;
	static int64_t t97 = 847LL;

    t97 = (x465+((x466%x467)*x468));

    if (t97 != -32776LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x469 = INT16_MIN;
	static int8_t x470 = INT8_MAX;
	int8_t x471 = -2;

    t98 = (x469+((x470%x471)*x472));

    if (t98 != -32769LL) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x473 = INT64_MAX;
	int64_t x474 = -1LL;
	int8_t x475 = 2;
	static int64_t t99 = 6LL;

    t99 = (x473+((x474%x475)*x476));

    if (t99 != 9223372036854775727LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x481 = INT64_MAX;
	volatile uint8_t x482 = 0U;
	int32_t x483 = INT32_MAX;
	int32_t x484 = 1;
	volatile int64_t t100 = INT64_MAX;

    t100 = (x481+((x482%x483)*x484));

    if (t100 != INT64_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x485 = 281878658802856LL;
	static int8_t x486 = -9;
	int8_t x487 = 14;
	int64_t x488 = -1LL;

    t101 = (x485+((x486%x487)*x488));

    if (t101 != 281878658802865LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x489 = 331819285U;
	int64_t x490 = -1LL;
	int16_t x492 = 2;

    t102 = (x489+((x490%x491)*x492));

    if (t102 != 331819283LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x493 = 0;
	static int32_t x495 = INT32_MAX;

    t103 = (x493+((x494%x495)*x496));

    if (t103 != 18360872857369972220LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint32_t x497 = 19315U;
	int64_t x498 = -11588LL;
	int8_t x499 = INT8_MIN;
	int64_t x500 = -80169LL;
	volatile int64_t t104 = -7365LL;

    t104 = (x497+((x498%x499)*x500));

    if (t104 != 5470807LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x501 = 1;
	int32_t x502 = -1;
	volatile int32_t t105 = -71;

    t105 = (x501+((x502%x503)*x504));

    if (t105 != -33) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x509 = 1739029449LLU;
	int64_t x510 = 1LL;
	int16_t x511 = 49;
	int16_t x512 = INT16_MIN;
	static uint64_t t106 = 7688481782033653454LLU;

    t106 = (x509+((x510%x511)*x512));

    if (t106 != 1738996681LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x513 = INT16_MIN;
	int64_t x514 = INT64_MIN;
	int32_t x515 = INT32_MIN;
	int16_t x516 = INT16_MIN;
	volatile int64_t t107 = -4422124LL;

    t107 = (x513+((x514%x515)*x516));

    if (t107 != -32768LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x517 = 4515;
	volatile uint64_t x518 = UINT64_MAX;
	int64_t x519 = 1394887108315LL;
	uint16_t x520 = 1724U;
	uint64_t t108 = 135242LLU;

    t108 = (x517+((x518%x519)*x520));

    if (t108 != 1593905727146255LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x521 = UINT64_MAX;
	static volatile int64_t x523 = 111879085LL;
	static volatile int16_t x524 = -35;
	uint64_t t109 = 5LLU;

    t109 = (x521+((x522%x523)*x524));

    if (t109 != 18446744070916298845LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x525 = -1;
	int16_t x526 = -3;
	uint8_t x527 = 50U;
	volatile int32_t x528 = -55;
	static int32_t t110 = -30204;

    t110 = (x525+((x526%x527)*x528));

    if (t110 != 164) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x529 = INT8_MAX;
	int32_t x530 = INT32_MIN;
	int16_t x531 = INT16_MIN;
	static volatile int8_t x532 = INT8_MIN;
	volatile int32_t t111 = 65;

    t111 = (x529+((x530%x531)*x532));

    if (t111 != 127) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x533 = 67017882166LL;
	int64_t x534 = -1LL;
	int16_t x535 = 12924;
	static volatile uint8_t x536 = 4U;
	int64_t t112 = -8368122645256LL;

    t112 = (x533+((x534%x535)*x536));

    if (t112 != 67017882162LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x545 = INT32_MIN;
	static uint16_t x547 = UINT16_MAX;
	uint8_t x548 = 4U;
	volatile uint32_t t113 = 13U;

    t113 = (x545+((x546%x547)*x548));

    if (t113 != 2147598180U) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x554 = INT8_MAX;
	uint64_t x555 = 232284LLU;
	int64_t x556 = -3413217223LL;
	uint64_t t114 = 7LLU;

    t114 = (x553+((x554%x555)*x556));

    if (t114 != 9223371603376188487LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x557 = INT16_MAX;
	int32_t x558 = 269;
	int32_t x560 = -855;

    t115 = (x557+((x558%x559)*x560));

    if (t115 != 18446744073709354388LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x562 = INT32_MIN;
	int16_t x563 = -4;
	int64_t x564 = INT64_MIN;
	volatile int64_t t116 = 11459LL;

    t116 = (x561+((x562%x563)*x564));

    if (t116 != -128LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x565 = 51U;
	int64_t x566 = INT64_MIN;
	int8_t x568 = 1;

    t117 = (x565+((x566%x567)*x568));

    if (t117 != 51LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x577 = INT16_MIN;
	static volatile int32_t x579 = INT32_MIN;
	volatile uint32_t x580 = 3U;
	static uint32_t t118 = 290191066U;

    t118 = (x577+((x578%x579)*x580));

    if (t118 != 4294934528U) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x581 = UINT16_MAX;
	int8_t x583 = INT8_MIN;
	uint16_t x584 = 1U;
	volatile int64_t t119 = -30589936LL;

    t119 = (x581+((x582%x583)*x584));

    if (t119 != 65535LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x585 = 1;
	uint32_t x587 = 148U;
	static int8_t x588 = INT8_MAX;
	uint64_t t120 = 369185791308895190LLU;

    t120 = (x585+((x586%x587)*x588));

    if (t120 != 763LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x589 = INT8_MIN;
	static uint8_t x590 = UINT8_MAX;
	uint64_t x592 = 13877044131LLU;

    t121 = (x589+((x590%x591)*x592));

    if (t121 != 3538646253277LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint32_t x593 = 119U;
	static uint8_t x594 = UINT8_MAX;
	static int64_t x595 = INT64_MIN;
	volatile uint16_t x596 = UINT16_MAX;

    t122 = (x593+((x594%x595)*x596));

    if (t122 != 16711544LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x597 = 2842;
	uint16_t x598 = 3U;
	uint32_t x599 = 393264906U;
	static volatile uint16_t x600 = 1U;
	static volatile uint32_t t123 = 525593302U;

    t123 = (x597+((x598%x599)*x600));

    if (t123 != 2845U) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x601 = INT64_MAX;
	int32_t x602 = INT32_MAX;
	uint64_t x603 = UINT64_MAX;
	uint64_t x604 = 2935018102533886791LLU;
	volatile uint64_t t124 = 7331LLU;

    t124 = (x601+((x602%x603)*x604));

    if (t124 != 5815416202534612152LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x605 = 46U;
	int16_t x606 = INT16_MIN;
	int64_t x607 = INT64_MIN;
	int16_t x608 = INT16_MIN;
	static int64_t t125 = 31894354675LL;

    t125 = (x605+((x606%x607)*x608));

    if (t125 != 1073741870LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t x609 = INT64_MIN;
	int64_t x610 = -1LL;
	static int64_t x611 = INT64_MIN;
	int8_t x612 = INT8_MIN;
	volatile int64_t t126 = -10LL;

    t126 = (x609+((x610%x611)*x612));

    if (t126 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int64_t x613 = INT64_MIN;
	volatile int16_t x614 = INT16_MIN;
	volatile int8_t x615 = -1;
	int64_t t127 = INT64_MIN;

    t127 = (x613+((x614%x615)*x616));

    if (t127 != INT64_MIN) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x617 = 9LLU;
	int64_t x618 = 5151246262084LL;
	int8_t x619 = INT8_MIN;
	static int16_t x620 = INT16_MIN;
	volatile uint64_t t128 = 25701LLU;

    t128 = (x617+((x618%x619)*x620));

    if (t128 != 18446744073707323401LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x621 = 14LL;
	uint16_t x622 = UINT16_MAX;
	volatile int64_t x623 = 227LL;
	int32_t x624 = INT32_MAX;
	static volatile int64_t t129 = -19047004040582576LL;

    t129 = (x621+((x622%x623)*x624));

    if (t129 != 341449899887LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint16_t x625 = 24U;
	uint32_t x626 = 3269U;
	uint16_t x627 = 19U;
	int16_t x628 = -1;
	volatile uint32_t t130 = 52U;

    t130 = (x625+((x626%x627)*x628));

    if (t130 != 23U) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x633 = INT8_MAX;
	int32_t x634 = -222910;
	uint32_t x635 = UINT32_MAX;
	uint32_t t131 = 3315U;

    t131 = (x633+((x634%x635)*x636));

    if (t131 != 223037U) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint64_t x637 = 190LLU;
	int32_t x638 = 119;
	int64_t x639 = -707501267390055LL;
	static uint64_t t132 = 18836840718679780LLU;

    t132 = (x637+((x638%x639)*x640));

    if (t132 != 54064151LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x641 = 0U;
	int16_t x642 = -1;
	int32_t x643 = INT32_MIN;
	int32_t x644 = -901759;
	static int32_t t133 = -27485086;

    t133 = (x641+((x642%x643)*x644));

    if (t133 != 901759) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x645 = INT16_MIN;
	static int16_t x646 = -1;
	int64_t x647 = -271911318983293LL;
	int32_t x648 = INT32_MIN;
	static int64_t t134 = -2360065LL;

    t134 = (x645+((x646%x647)*x648));

    if (t134 != 2147450880LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x649 = 1948673271791609LLU;
	uint8_t x650 = 0U;
	uint64_t t135 = 11744634LLU;

    t135 = (x649+((x650%x651)*x652));

    if (t135 != 1948673271791609LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x653 = UINT32_MAX;
	volatile uint8_t x654 = 88U;
	int64_t x655 = -1LL;
	int16_t x656 = -7297;

    t136 = (x653+((x654%x655)*x656));

    if (t136 != 4294967295LL) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint32_t x657 = UINT32_MAX;
	uint32_t x658 = 3U;
	volatile uint32_t x659 = 3816718U;
	volatile int32_t x660 = INT32_MIN;
	volatile uint32_t t137 = 38096U;

    t137 = (x657+((x658%x659)*x660));

    if (t137 != 2147483647U) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x666 = 1097707384U;
	int64_t x668 = 14LL;
	static volatile int64_t t138 = -133791273414LL;

    t138 = (x665+((x666%x667)*x668));

    if (t138 != 15367903403LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x669 = INT16_MAX;
	int8_t x670 = -1;
	volatile int64_t x671 = -1LL;
	volatile int64_t t139 = -7978LL;

    t139 = (x669+((x670%x671)*x672));

    if (t139 != 32767LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x674 = 477U;
	uint64_t x675 = UINT64_MAX;
	volatile uint64_t t140 = 10874619089482LLU;

    t140 = (x673+((x674%x675)*x676));

    if (t140 != 18446743049359818752LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x677 = 117U;
	static int16_t x678 = -1;
	int8_t x680 = -7;
	uint64_t t141 = 99LLU;

    t141 = (x677+((x678%x679)*x680));

    if (t141 != 117LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x685 = 13U;
	static int8_t x686 = INT8_MIN;
	static int32_t x687 = -6;
	static int16_t x688 = -4427;
	int32_t t142 = -64219;

    t142 = (x685+((x686%x687)*x688));

    if (t142 != 8867) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint32_t x689 = 35838U;
	int32_t x690 = INT32_MAX;
	uint64_t x691 = 1738LLU;
	int16_t x692 = INT16_MAX;
	uint64_t t143 = 29129405513228LLU;

    t143 = (x689+((x690%x691)*x692));

    if (t143 != 13765211LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x693 = UINT32_MAX;

    t144 = (x693+((x694%x695)*x696));

    if (t144 != 5042894475LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x697 = -1;
	int32_t x698 = -1;
	volatile uint16_t x699 = UINT16_MAX;
	uint64_t x700 = 13LLU;
	volatile uint64_t t145 = 7198LLU;

    t145 = (x697+((x698%x699)*x700));

    if (t145 != 18446744073709551602LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x702 = -1;
	int32_t x704 = -59731;
	uint32_t t146 = 20060500U;

    t146 = (x701+((x702%x703)*x704));

    if (t146 != 59730U) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x705 = 97U;
	static volatile int64_t x706 = 3591048774639279LL;
	uint32_t x707 = 3015956U;
	static int16_t x708 = -415;
	int64_t t147 = -1030718320LL;

    t147 = (x705+((x706%x707)*x708));

    if (t147 != -61967288LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x709 = INT8_MIN;
	volatile int8_t x710 = INT8_MIN;
	int64_t x712 = -531428979155LL;
	volatile int64_t t148 = -296LL;

    t148 = (x709+((x710%x711)*x712));

    if (t148 != -128LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int8_t x713 = 4;
	volatile int32_t x714 = -30682615;
	int64_t x715 = 457LL;
	int8_t x716 = INT8_MIN;
	volatile int64_t t149 = 14665LL;

    t149 = (x713+((x714%x715)*x716));

    if (t149 != 11780LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x721 = INT8_MIN;
	volatile uint64_t t150 = 6LLU;

    t150 = (x721+((x722%x723)*x724));

    if (t150 != 545460846337LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint16_t x729 = 5U;
	int8_t x730 = 15;
	int16_t x731 = INT16_MIN;
	uint8_t x732 = 3U;
	int32_t t151 = 216147;

    t151 = (x729+((x730%x731)*x732));

    if (t151 != 50) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x733 = INT64_MIN;
	uint64_t x735 = 14010LLU;
	int16_t x736 = -6599;
	volatile uint64_t t152 = 275076LLU;

    t152 = (x733+((x734%x735)*x736));

    if (t152 != 9223372036762607575LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x737 = 10U;
	static uint8_t x738 = UINT8_MAX;
	volatile uint8_t x739 = 69U;
	int32_t t153 = -92635942;

    t153 = (x737+((x738%x739)*x740));

    if (t153 != 1572826) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x741 = INT32_MIN;
	int8_t x742 = INT8_MAX;
	uint32_t x744 = 16639671U;

    t154 = (x741+((x742%x743)*x744));

    if (t154 != 2280601016U) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x745 = -1;
	int8_t x746 = INT8_MIN;
	uint16_t x747 = 26579U;
	volatile int16_t x748 = 1;

    t155 = (x745+((x746%x747)*x748));

    if (t155 != -129) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint8_t x753 = 4U;
	int64_t x754 = INT64_MIN;
	uint64_t x755 = UINT64_MAX;
	volatile uint32_t x756 = 1U;
	uint64_t t156 = 22317477853380560LLU;

    t156 = (x753+((x754%x755)*x756));

    if (t156 != 9223372036854775812LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x757 = INT8_MIN;
	int64_t x758 = INT64_MIN;
	static int16_t x759 = -63;
	int64_t x760 = 114373LL;
	int64_t t157 = 194626089397LL;

    t157 = (x757+((x758%x759)*x760));

    if (t157 != -915112LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x765 = 21;
	static uint64_t x766 = 339096LLU;
	uint64_t x767 = 300297787970303040LLU;
	int64_t x768 = -1LL;
	volatile uint64_t t158 = 88842468807338873LLU;

    t158 = (x765+((x766%x767)*x768));

    if (t158 != 18446744073709212541LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x769 = INT8_MIN;
	volatile uint8_t x770 = 4U;
	int64_t x771 = 231079LL;

    t159 = (x769+((x770%x771)*x772));

    if (t159 != -8589934720LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x773 = 98;
	volatile uint16_t x774 = 92U;
	uint64_t x775 = 404LLU;
	volatile int8_t x776 = 47;
	volatile uint64_t t160 = 7060LLU;

    t160 = (x773+((x774%x775)*x776));

    if (t160 != 4422LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x777 = INT8_MIN;
	uint32_t x778 = 12U;
	uint32_t x779 = UINT32_MAX;
	int16_t x780 = INT16_MIN;
	static uint32_t t161 = 364U;

    t161 = (x777+((x778%x779)*x780));

    if (t161 != 4294573952U) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x781 = UINT32_MAX;
	uint8_t x783 = UINT8_MAX;
	uint32_t x784 = UINT32_MAX;
	static volatile uint32_t t162 = 5U;

    t162 = (x781+((x782%x783)*x784));

    if (t162 != 127U) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x789 = -57645597459227LL;
	static uint16_t x790 = UINT16_MAX;
	int16_t x791 = INT16_MAX;
	uint32_t x792 = 22335356U;

    t163 = (x789+((x790%x791)*x792));

    if (t163 != -57645575123871LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x797 = 1LL;
	int32_t x798 = INT32_MIN;
	static int16_t x799 = INT16_MIN;
	uint8_t x800 = UINT8_MAX;
	static int64_t t164 = 57LL;

    t164 = (x797+((x798%x799)*x800));

    if (t164 != 1LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x801 = UINT64_MAX;
	int32_t x802 = INT32_MAX;
	uint16_t x803 = 109U;
	int32_t x804 = -1;
	volatile uint64_t t165 = 23677419555928LLU;

    t165 = (x801+((x802%x803)*x804));

    if (t165 != 18446744073709551524LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x805 = UINT64_MAX;
	int16_t x806 = 4;
	int8_t x807 = INT8_MAX;
	static int8_t x808 = -53;

    t166 = (x805+((x806%x807)*x808));

    if (t166 != 18446744073709551403LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x809 = UINT32_MAX;
	int32_t x810 = 2;
	volatile int32_t x811 = -18;
	volatile uint32_t t167 = 148U;

    t167 = (x809+((x810%x811)*x812));

    if (t167 != 65533U) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x815 = 228327975;
	volatile int8_t x816 = 1;
	int64_t t168 = 68632004519LL;

    t168 = (x813+((x814%x815)*x816));

    if (t168 != -156LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x817 = UINT64_MAX;
	static volatile int64_t x818 = INT64_MIN;
	int16_t x819 = INT16_MIN;
	volatile uint64_t t169 = UINT64_MAX;

    t169 = (x817+((x818%x819)*x820));

    if (t169 != UINT64_MAX) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile uint64_t x821 = 42462402139283061LLU;
	int16_t x823 = INT16_MAX;
	static volatile int16_t x824 = 2;
	static uint64_t t170 = 242106270LLU;

    t170 = (x821+((x822%x823)*x824));

    if (t170 != 42462402139298907LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x825 = 54U;
	int64_t x827 = -1LL;
	int64_t x828 = 3LL;

    t171 = (x825+((x826%x827)*x828));

    if (t171 != 769159603143LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x829 = -1;
	volatile uint16_t x830 = 9U;
	volatile int64_t x831 = -1LL;
	static int32_t x832 = INT32_MIN;

    t172 = (x829+((x830%x831)*x832));

    if (t172 != -1LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x837 = INT16_MIN;
	int64_t x838 = INT64_MAX;
	int8_t x839 = INT8_MAX;
	int64_t x840 = INT64_MAX;
	int64_t t173 = -170LL;

    t173 = (x837+((x838%x839)*x840));

    if (t173 != -32768LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x842 = UINT8_MAX;
	int32_t x844 = 2425;

    t174 = (x841+((x842%x843)*x844));

    if (t174 != 43) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x846 = INT32_MIN;
	static int32_t x847 = 3777;

    t175 = (x845+((x846%x847)*x848));

    if (t175 != -284504) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x853 = -1LL;
	static uint64_t x854 = 89524163179980709LLU;
	int8_t x856 = INT8_MIN;
	static uint64_t t176 = 69417152LLU;

    t176 = (x853+((x854%x855)*x856));

    if (t176 != 18446744073703266943LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x858 = INT8_MAX;
	volatile int16_t x859 = -1;
	int8_t x860 = 7;
	int32_t t177 = 8867;

    t177 = (x857+((x858%x859)*x860));

    if (t177 != -1) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile uint32_t x861 = 58U;
	static int8_t x862 = INT8_MIN;
	int8_t x863 = INT8_MAX;
	int16_t x864 = INT16_MAX;
	volatile uint32_t t178 = 5U;

    t178 = (x861+((x862%x863)*x864));

    if (t178 != 4294934587U) { NG(); } else { ; }
	
}

void f179(void) {
    	static int32_t x865 = INT32_MIN;
	volatile int32_t x866 = INT32_MAX;
	uint16_t x867 = 673U;

    t179 = (x865+((x866%x867)*x868));

    if (t179 != 2147483104U) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x869 = INT32_MIN;
	int64_t x870 = -1LL;
	uint32_t x871 = UINT32_MAX;
	volatile int64_t t180 = 722593155630230942LL;

    t180 = (x869+((x870%x871)*x872));

    if (t180 != -2147450880LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile int32_t x873 = INT32_MIN;
	int8_t x874 = INT8_MAX;
	static volatile int8_t x875 = -1;
	volatile int32_t t181 = INT32_MIN;

    t181 = (x873+((x874%x875)*x876));

    if (t181 != INT32_MIN) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x877 = INT64_MAX;
	int64_t x878 = INT64_MIN;
	int8_t x879 = 1;
	volatile uint32_t x880 = 57U;
	int64_t t182 = INT64_MAX;

    t182 = (x877+((x878%x879)*x880));

    if (t182 != INT64_MAX) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x881 = 18U;
	int32_t x882 = INT32_MIN;
	int16_t x883 = -1;
	static uint8_t x884 = 2U;
	volatile int32_t t183 = -78723;

    t183 = (x881+((x882%x883)*x884));

    if (t183 != 18) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int32_t x885 = INT32_MIN;
	int8_t x886 = -8;
	static uint8_t x888 = 2U;

    t184 = (x885+((x886%x887)*x888));

    if (t184 != INT32_MIN) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x890 = INT16_MIN;
	uint16_t x891 = 11U;
	uint16_t x892 = 44U;
	static volatile int32_t t185 = 12524;

    t185 = (x889+((x890%x891)*x892));

    if (t185 != -439) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x893 = UINT8_MAX;
	int64_t x894 = -1LL;
	int64_t x896 = -7325505754LL;
	int64_t t186 = -1081659510283538LL;

    t186 = (x893+((x894%x895)*x896));

    if (t186 != 7325506009LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x897 = INT16_MAX;
	int8_t x898 = INT8_MAX;
	uint32_t x899 = 268U;
	int8_t x900 = 1;
	volatile uint32_t t187 = 33155U;

    t187 = (x897+((x898%x899)*x900));

    if (t187 != 32894U) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x901 = UINT64_MAX;
	int32_t x903 = -1;
	static int64_t x904 = INT64_MIN;
	uint64_t t188 = UINT64_MAX;

    t188 = (x901+((x902%x903)*x904));

    if (t188 != UINT64_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint8_t x905 = 14U;
	volatile int32_t x906 = INT32_MIN;
	int32_t x907 = -1;
	int8_t x908 = 11;
	volatile int32_t t189 = 10497;

    t189 = (x905+((x906%x907)*x908));

    if (t189 != 14) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x909 = 17U;
	static int32_t x910 = INT32_MAX;
	volatile int8_t x911 = -8;
	int32_t x912 = 932290;
	volatile int32_t t190 = -558;

    t190 = (x909+((x910%x911)*x912));

    if (t190 != 6526047) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x913 = INT32_MIN;
	int32_t x915 = 16;

    t191 = (x913+((x914%x915)*x916));

    if (t191 != -2147483648LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x917 = 67735LLU;
	uint16_t x918 = UINT16_MAX;
	volatile int16_t x919 = 4964;
	uint64_t t192 = 6540LLU;

    t192 = (x917+((x918%x919)*x920));

    if (t192 != 4295034028LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x921 = 12U;
	static int8_t x923 = INT8_MAX;
	static uint32_t x924 = 126895U;
	volatile uint32_t t193 = 1651U;

    t193 = (x921+((x922%x923)*x924));

    if (t193 != 4294840413U) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x926 = -1;
	int64_t x927 = INT64_MAX;
	volatile int32_t x928 = -1991;
	int64_t t194 = -1414618240LL;

    t194 = (x925+((x926%x927)*x928));

    if (t194 != 2147485638LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x929 = 56U;
	int32_t x930 = INT32_MAX;
	int16_t x931 = INT16_MAX;
	int16_t x932 = INT16_MAX;
	volatile int32_t t195 = 15836;

    t195 = (x929+((x930%x931)*x932));

    if (t195 != 32823) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint16_t x933 = UINT16_MAX;
	uint32_t x934 = 52457U;
	int16_t x935 = 72;
	uint32_t x936 = UINT32_MAX;

    t196 = (x933+((x934%x935)*x936));

    if (t196 != 65494U) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile uint32_t x941 = 5126U;
	uint32_t x942 = 228490U;
	volatile uint16_t x943 = 323U;
	uint32_t x944 = UINT32_MAX;

    t197 = (x941+((x942%x943)*x944));

    if (t197 != 4997U) { NG(); } else { ; }
	
}

void f198(void) {
    	static int32_t x945 = INT32_MIN;
	static int32_t x946 = INT32_MIN;
	int8_t x948 = -3;
	static volatile int32_t t198 = INT32_MIN;

    t198 = (x945+((x946%x947)*x948));

    if (t198 != INT32_MIN) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x949 = 16146472980194LLU;
	static uint64_t x950 = UINT64_MAX;
	static int64_t x951 = -1LL;
	uint32_t x952 = UINT32_MAX;
	volatile uint64_t t199 = 189787956LLU;

    t199 = (x949+((x950%x951)*x952));

    if (t199 != 16146472980194LLU) { NG(); } else { ; }
	
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

