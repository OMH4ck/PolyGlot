
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

static uint16_t x6 = 0U;
volatile int32_t x7 = INT32_MIN;
static int8_t x19 = -1;
static int16_t x20 = INT16_MIN;
int8_t x24 = 1;
uint8_t x27 = 20U;
uint64_t t6 = 2768LLU;
volatile int64_t x31 = 2206802764272LL;
int16_t x39 = -672;
static volatile int64_t t10 = -1572604268448958LL;
int16_t x50 = 0;
int16_t x51 = INT16_MAX;
uint16_t x53 = 56U;
int8_t x57 = 12;
int8_t x80 = INT8_MIN;
int32_t x86 = -1;
static volatile uint64_t x88 = 4795758705400918LLU;
volatile uint64_t t17 = 1409386LLU;
int32_t x89 = INT32_MAX;
int64_t x93 = INT64_MIN;
uint8_t x94 = 0U;
int16_t x97 = INT16_MIN;
int8_t x103 = -1;
volatile int64_t x108 = INT64_MIN;
int64_t x109 = -2099LL;
volatile uint32_t t25 = 15001609U;
int8_t x122 = -5;
int32_t x130 = -60117;
volatile int8_t x141 = -1;
int32_t x150 = 121318;
uint32_t x152 = UINT32_MAX;
static volatile uint16_t x155 = UINT16_MAX;
uint64_t t33 = 73694LLU;
int16_t x157 = -1;
int32_t x158 = 1;
int32_t x175 = 6;
uint32_t x176 = 3795U;
int32_t x178 = INT32_MAX;
int64_t x192 = -1LL;
int64_t t39 = -1LL;
int16_t x202 = 410;
int8_t x203 = -1;
static int32_t t40 = -24;
static volatile uint32_t t41 = 460044971U;
uint64_t x209 = UINT64_MAX;
volatile int16_t x222 = INT16_MIN;
static uint64_t x228 = 7836LLU;
int32_t x247 = 176840162;
volatile int64_t x248 = 4307LL;
uint32_t x259 = UINT32_MAX;
uint16_t x261 = 13122U;
int64_t x278 = 697LL;
int8_t x279 = INT8_MIN;
int64_t x284 = -678LL;
int16_t x289 = INT16_MIN;
volatile int16_t x292 = -48;
uint64_t x296 = UINT64_MAX;
volatile uint64_t t61 = 103LLU;
volatile int32_t t63 = 474233;
uint32_t x306 = 433891495U;
uint64_t x311 = 173531370868080402LLU;
int64_t x319 = INT64_MIN;
int32_t x322 = INT32_MIN;
int16_t x335 = 3;
uint16_t x355 = 3U;
uint64_t t73 = 75LLU;
uint64_t x367 = 78803753658354998LLU;
int64_t x368 = 4584284248209LL;
volatile int8_t x369 = INT8_MIN;
int16_t x377 = INT16_MIN;
uint64_t x378 = 1LLU;
int64_t x380 = -381739LL;
volatile uint16_t x386 = UINT16_MAX;
volatile int8_t x389 = -1;
uint64_t t80 = 969913LLU;
uint16_t x399 = 0U;
static uint32_t x409 = 14U;
uint16_t x411 = 1U;
volatile uint16_t x415 = 5U;
volatile int16_t x417 = 13160;
int16_t x418 = 14542;
uint16_t x422 = UINT16_MAX;
volatile int16_t x428 = 7870;
volatile int16_t x429 = -1;
int8_t x430 = -2;
int32_t t87 = -1903762;
static int32_t x438 = -1;
uint16_t x466 = UINT16_MAX;
int64_t x480 = 250117787447553222LL;
uint16_t x486 = UINT16_MAX;
static int32_t x498 = -7226;
int8_t x500 = -49;
static volatile uint32_t t100 = 29954215U;
volatile int64_t t101 = -867LL;
int32_t x509 = -206781031;
volatile int16_t x515 = -1;
static uint8_t x529 = UINT8_MAX;
static uint32_t x536 = UINT32_MAX;
static int8_t x542 = INT8_MAX;
volatile int8_t x546 = INT8_MIN;
int64_t x547 = 10606269227293LL;
volatile int64_t t108 = 470037LL;
int64_t x550 = INT64_MAX;
uint16_t x577 = 19U;
int32_t t113 = 176752;
int32_t x594 = -1;
static volatile int64_t x607 = INT64_MAX;
static int64_t x609 = 116486231410087LL;
int64_t x611 = -1LL;
volatile uint64_t t119 = 30811LLU;
int32_t t122 = -44;
int16_t x632 = INT16_MIN;
static volatile int32_t t123 = 3;
int64_t x633 = -1866171490LL;
uint8_t x635 = 1U;
volatile int8_t x637 = 0;
uint8_t x640 = 4U;
static uint8_t x642 = 40U;
volatile uint64_t x645 = 1198311049621792LLU;
int16_t x657 = INT16_MAX;
int32_t x662 = 33;
volatile uint64_t t130 = 12094LLU;
int8_t x680 = INT8_MIN;
static uint64_t x681 = 2530211LLU;
int8_t x682 = 14;
int32_t t134 = 0;
static volatile int16_t x697 = 3;
uint64_t t135 = 1180280817LLU;
int32_t x723 = INT32_MIN;
volatile int64_t t139 = -6250318467456184LL;
int16_t x725 = INT16_MAX;
int16_t x726 = -7082;
uint8_t x735 = 24U;
int16_t x736 = 4853;
static int32_t t141 = 317;
int64_t x745 = INT64_MAX;
uint32_t x750 = 0U;
uint32_t t146 = 85U;
int64_t t152 = 29657LL;
uint16_t x791 = 38U;
static int8_t x805 = INT8_MAX;
static uint64_t t159 = 168LLU;
static volatile uint64_t t161 = 2050404926911LLU;
static int64_t x836 = INT64_MAX;
static uint64_t x838 = 125719583405450LLU;
uint64_t t165 = 427533210394136LLU;
uint32_t x843 = UINT32_MAX;
static int8_t x850 = INT8_MAX;
uint32_t x860 = 972894391U;
int16_t x863 = INT16_MAX;
int64_t t172 = 154LL;
static int64_t x890 = -54625643322200170LL;
static int8_t x892 = INT8_MIN;
uint64_t x894 = 235565552847461LLU;
int8_t x897 = -1;
uint16_t x904 = 6786U;
int64_t t177 = 107LL;
int16_t x907 = INT16_MIN;
int16_t x913 = -36;
volatile int32_t x918 = 414762213;
uint32_t t181 = 1U;
static uint32_t x926 = 403U;
static int32_t x931 = INT32_MIN;
uint32_t x933 = 152U;
uint64_t x948 = UINT64_MAX;
volatile uint32_t x952 = 82726U;
int32_t x955 = INT32_MAX;
static uint16_t x961 = 609U;
static int32_t x962 = INT32_MIN;
volatile int32_t t190 = -1;
int16_t x979 = INT16_MIN;
static int32_t t194 = 1;
uint8_t x990 = UINT8_MAX;
int64_t x992 = 22763782282LL;
int16_t x995 = 496;
int32_t t196 = 877;
volatile uint8_t x997 = 6U;
volatile int8_t x999 = INT8_MIN;
static volatile uint16_t x1002 = UINT16_MAX;
int16_t x1003 = INT16_MIN;
volatile int32_t t198 = 382954;
int8_t x1007 = INT8_MIN;


void f0(void) {
    	volatile int16_t x1 = INT16_MIN;
	volatile int8_t x2 = INT8_MIN;
	uint64_t x3 = 15762LLU;
	static int64_t x4 = -1LL;
	uint64_t t0 = 203LLU;

    t0 = (x1-((x2+x3)|x4));

    if (t0 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x5 = -8583;
	volatile uint64_t x8 = 1LLU;
	volatile uint64_t t1 = 42847499430LLU;

    t1 = (x5-((x6+x7)|x8));

    if (t1 != 2147475064LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = 13U;
	int32_t x10 = INT32_MAX;
	int32_t x11 = INT32_MIN;
	int8_t x12 = -1;
	volatile int32_t t2 = -1473;

    t2 = (x9-((x10+x11)|x12));

    if (t2 != 14) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint64_t x13 = UINT64_MAX;
	int64_t x14 = INT64_MIN;
	static int64_t x15 = 49916316217LL;
	uint16_t x16 = UINT16_MAX;
	volatile uint64_t t3 = 17521058925848LLU;

    t3 = (x13-((x14+x15)|x16));

    if (t3 != 9223371986938429440LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = -1LL;
	int16_t x18 = INT16_MAX;
	int64_t t4 = -255553799697984LL;

    t4 = (x17-((x18+x19)|x20));

    if (t4 != 1LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = 7140954;
	static volatile int64_t x22 = INT64_MAX;
	int8_t x23 = -1;
	int64_t t5 = 182LL;

    t5 = (x21-((x22+x23)|x24));

    if (t5 != -9223372036847634853LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint16_t x25 = 3185U;
	uint64_t x26 = UINT64_MAX;
	int16_t x28 = INT16_MAX;

    t6 = (x25-((x26+x27)|x28));

    if (t6 != 18446744073709522034LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = -1;
	int64_t x30 = INT64_MIN;
	int8_t x32 = INT8_MAX;
	int64_t t7 = 4287646969562994LL;

    t7 = (x29-((x30+x31)|x32));

    if (t7 != 9223369830052011520LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x33 = 113485290U;
	int64_t x34 = -1LL;
	int64_t x35 = INT64_MAX;
	volatile int8_t x36 = INT8_MIN;
	volatile int64_t t8 = 26LL;

    t8 = (x33-((x34+x35)|x36));

    if (t8 != 113485292LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = INT8_MAX;
	uint16_t x38 = UINT16_MAX;
	uint8_t x40 = UINT8_MAX;
	volatile int32_t t9 = -2606;

    t9 = (x37-((x38+x39)|x40));

    if (t9 != -64896) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x41 = 2U;
	volatile int16_t x42 = -2100;
	volatile uint16_t x43 = UINT16_MAX;
	int64_t x44 = INT64_MIN;

    t10 = (x41-((x42+x43)|x44));

    if (t10 != 9223372036854712375LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = -3977963202866054824LL;
	volatile int32_t x46 = INT32_MIN;
	static volatile int32_t x47 = INT32_MAX;
	static uint16_t x48 = UINT16_MAX;
	volatile int64_t t11 = 7302259786042LL;

    t11 = (x45-((x46+x47)|x48));

    if (t11 != -3977963202866054823LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = -1LL;
	int8_t x52 = INT8_MIN;
	int64_t t12 = -1406704052214033817LL;

    t12 = (x49-((x50+x51)|x52));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x54 = 46;
	int8_t x55 = -1;
	static volatile uint8_t x56 = 22U;
	int32_t t13 = 16327;

    t13 = (x53-((x54+x55)|x56));

    if (t13 != -7) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x58 = INT16_MIN;
	uint32_t x59 = 92909955U;
	uint16_t x60 = UINT16_MAX;
	static uint32_t t14 = 17339U;

    t14 = (x57-((x58+x59)|x60));

    if (t14 != 4202037261U) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x73 = INT32_MAX;
	int32_t x74 = -1;
	static int32_t x75 = 1;
	volatile uint32_t x76 = 30795U;
	static volatile uint32_t t15 = 1598591578U;

    t15 = (x73-((x74+x75)|x76));

    if (t15 != 2147452852U) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x77 = UINT32_MAX;
	uint16_t x78 = UINT16_MAX;
	volatile uint16_t x79 = 0U;
	static volatile uint32_t t16 = 367U;

    t16 = (x77-((x78+x79)|x80));

    if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x85 = UINT8_MAX;
	int16_t x87 = INT16_MAX;

    t17 = (x85-((x86+x87)|x88));

    if (t17 != 18441948315004141825LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x90 = INT8_MIN;
	int32_t x91 = -1;
	static int64_t x92 = INT64_MIN;
	int64_t t18 = 428930961196446494LL;

    t18 = (x89-((x90+x91)|x92));

    if (t18 != 2147483776LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x95 = 5U;
	int64_t x96 = -277196833918942557LL;
	volatile int64_t t19 = -143693363830228115LL;

    t19 = (x93-((x94+x95)|x96));

    if (t19 != -8946175202935833255LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x98 = 274669850U;
	static uint64_t x99 = 1200LLU;
	int8_t x100 = INT8_MIN;
	uint64_t t20 = 807649LLU;

    t20 = (x97-((x98+x99)|x100));

    if (t20 != 18446744073709518902LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x101 = UINT16_MAX;
	volatile uint32_t x102 = 0U;
	volatile int16_t x104 = 3962;
	volatile uint32_t t21 = 15845016U;

    t21 = (x101-((x102+x103)|x104));

    if (t21 != 65536U) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x105 = INT32_MIN;
	uint32_t x106 = 232U;
	int16_t x107 = INT16_MIN;
	int64_t t22 = 0LL;

    t22 = (x105-((x106+x107)|x108));

    if (t22 != 9223372030412357400LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x110 = 445341621LL;
	static int16_t x111 = 0;
	int32_t x112 = -971;
	volatile int64_t t23 = -8LL;

    t23 = (x109-((x110+x111)|x112));

    if (t23 != -2024LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x113 = INT16_MAX;
	static int16_t x114 = INT16_MAX;
	volatile uint32_t x115 = UINT32_MAX;
	volatile int16_t x116 = -313;
	volatile uint32_t t24 = 64618897U;

    t24 = (x113-((x114+x115)|x116));

    if (t24 != 32768U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x117 = 1746042U;
	int8_t x118 = 1;
	int32_t x119 = INT32_MIN;
	int16_t x120 = INT16_MAX;

    t25 = (x117-((x118+x119)|x120));

    if (t25 != 2149196923U) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x121 = 18852791597557LL;
	static uint64_t x123 = 9405620LLU;
	static volatile int32_t x124 = INT32_MIN;
	static uint64_t t26 = 96LLU;

    t26 = (x121-((x122+x123)|x124));

    if (t26 != 18854929675590LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x125 = INT32_MIN;
	static uint8_t x126 = 88U;
	int64_t x127 = INT64_MIN;
	int8_t x128 = 8;
	int64_t t27 = -57703443239506952LL;

    t27 = (x125-((x126+x127)|x128));

    if (t27 != 9223372034707292072LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x129 = -45;
	int16_t x131 = INT16_MIN;
	int8_t x132 = 18;
	static int32_t t28 = 23;

    t28 = (x129-((x130+x131)|x132));

    if (t28 != 92824) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x133 = 38U;
	int8_t x134 = INT8_MIN;
	volatile int16_t x135 = -1;
	volatile int16_t x136 = -13591;
	int32_t t29 = -6522656;

    t29 = (x133-((x134+x135)|x136));

    if (t29 != 39) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x137 = UINT64_MAX;
	volatile int8_t x138 = -4;
	static uint64_t x139 = 61LLU;
	int64_t x140 = -1268970421786LL;
	uint64_t t30 = 692736LLU;

    t30 = (x137-((x138+x139)|x140));

    if (t30 != 1268970421760LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x142 = UINT8_MAX;
	uint32_t x143 = UINT32_MAX;
	static volatile int64_t x144 = INT64_MIN;
	int64_t t31 = -63534987669353LL;

    t31 = (x141-((x142+x143)|x144));

    if (t31 != 9223372036854775553LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x149 = 1;
	static int32_t x151 = -1;
	volatile uint32_t t32 = 6598070U;

    t32 = (x149-((x150+x151)|x152));

    if (t32 != 2U) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint64_t x153 = UINT64_MAX;
	int16_t x154 = INT16_MIN;
	int16_t x156 = -1;

    t33 = (x153-((x154+x155)|x156));

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int64_t x159 = 61171LL;
	volatile uint16_t x160 = UINT16_MAX;
	volatile int64_t t34 = -4046117673094LL;

    t34 = (x157-((x158+x159)|x160));

    if (t34 != -65536LL) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int64_t x161 = 2847688921285857466LL;
	uint8_t x162 = 3U;
	int8_t x163 = 0;
	int64_t x164 = -240727LL;
	volatile int64_t t35 = -623449LL;

    t35 = (x161-((x162+x163)|x164));

    if (t35 != 2847688921286098191LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x169 = 1U;
	static int8_t x170 = 1;
	uint32_t x171 = UINT32_MAX;
	int8_t x172 = INT8_MIN;
	volatile uint32_t t36 = 248903593U;

    t36 = (x169-((x170+x171)|x172));

    if (t36 != 129U) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x173 = UINT8_MAX;
	static int8_t x174 = INT8_MIN;
	volatile uint32_t t37 = 34U;

    t37 = (x173-((x174+x175)|x176));

    if (t37 != 296U) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x177 = 3588223284505012617LLU;
	static int16_t x179 = INT16_MIN;
	volatile int32_t x180 = INT32_MIN;
	uint64_t t38 = 2810225488LLU;

    t38 = (x177-((x178+x179)|x180));

    if (t38 != 3588223284505045386LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x189 = INT64_MIN;
	static int8_t x190 = INT8_MAX;
	static int8_t x191 = -20;

    t39 = (x189-((x190+x191)|x192));

    if (t39 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x201 = 1U;
	int16_t x204 = 852;

    t40 = (x201-((x202+x203)|x204));

    if (t40 != -988) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x205 = -422573;
	uint32_t x206 = 141U;
	static uint32_t x207 = 0U;
	static volatile int32_t x208 = -3312;

    t41 = (x205-((x206+x207)|x208));

    if (t41 != 4294547894U) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x210 = UINT16_MAX;
	uint64_t x211 = UINT64_MAX;
	int32_t x212 = INT32_MAX;
	volatile uint64_t t42 = 458637997124022LLU;

    t42 = (x209-((x210+x211)|x212));

    if (t42 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x213 = 938U;
	uint8_t x214 = 34U;
	int32_t x215 = 21;
	static int16_t x216 = INT16_MIN;
	volatile int32_t t43 = -3763;

    t43 = (x213-((x214+x215)|x216));

    if (t43 != 33651) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint64_t x217 = 8604545649479554LLU;
	volatile int64_t x218 = INT64_MIN;
	int32_t x219 = 4033210;
	int64_t x220 = -1LL;
	uint64_t t44 = 2358614LLU;

    t44 = (x217-((x218+x219)|x220));

    if (t44 != 8604545649479555LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x221 = INT16_MAX;
	uint32_t x223 = 129845841U;
	int64_t x224 = INT64_MAX;
	static volatile int64_t t45 = -1788784274107710192LL;

    t45 = (x221-((x222+x223)|x224));

    if (t45 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static int64_t x225 = INT64_MIN;
	uint16_t x226 = 3U;
	int64_t x227 = -120LL;
	static volatile uint64_t t46 = 904108427029LLU;

    t46 = (x225-((x226+x227)|x228));

    if (t46 != 9223372036854775905LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint16_t x229 = 3U;
	int16_t x230 = -1;
	int8_t x231 = -1;
	int64_t x232 = INT64_MIN;
	volatile int64_t t47 = 605526962999290273LL;

    t47 = (x229-((x230+x231)|x232));

    if (t47 != 5LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x233 = -115666614139878LL;
	int64_t x234 = INT64_MIN;
	uint8_t x235 = UINT8_MAX;
	int8_t x236 = -63;
	int64_t t48 = 821200990469247773LL;

    t48 = (x233-((x234+x235)|x236));

    if (t48 != -115666614139877LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint64_t x237 = 3282338457317LLU;
	static int32_t x238 = -1;
	int16_t x239 = INT16_MIN;
	int16_t x240 = INT16_MIN;
	volatile uint64_t t49 = 1117877257047785LLU;

    t49 = (x237-((x238+x239)|x240));

    if (t49 != 3282338457318LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x241 = INT32_MIN;
	int64_t x242 = -1LL;
	volatile int32_t x243 = INT32_MIN;
	uint8_t x244 = 4U;
	int64_t t50 = 37657556614LL;

    t50 = (x241-((x242+x243)|x244));

    if (t50 != 1LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x245 = -1;
	static int8_t x246 = INT8_MIN;
	int64_t t51 = 345877LL;

    t51 = (x245-((x246+x247)|x248));

    if (t51 != -176840180LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x249 = 4931;
	int16_t x250 = -1;
	int16_t x251 = -78;
	uint8_t x252 = UINT8_MAX;
	volatile int32_t t52 = 3;

    t52 = (x249-((x250+x251)|x252));

    if (t52 != 4932) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x253 = -1;
	int64_t x254 = -1LL;
	static uint64_t x255 = 14464LLU;
	uint16_t x256 = 111U;
	static uint64_t t53 = 175LLU;

    t53 = (x253-((x254+x255)|x256));

    if (t53 != 18446744073709537152LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x257 = UINT8_MAX;
	volatile int32_t x258 = INT32_MIN;
	int16_t x260 = 17;
	uint32_t t54 = 262U;

    t54 = (x257-((x258+x259)|x260));

    if (t54 != 2147483904U) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x262 = UINT16_MAX;
	int64_t x263 = -1LL;
	static int32_t x264 = INT32_MIN;
	volatile int64_t t55 = 3264479LL;

    t55 = (x261-((x262+x263)|x264));

    if (t55 != 2147431236LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x265 = INT64_MIN;
	int16_t x266 = INT16_MIN;
	static int32_t x267 = -80880;
	int16_t x268 = -1;
	volatile int64_t t56 = -97730772LL;

    t56 = (x265-((x266+x267)|x268));

    if (t56 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x269 = INT64_MAX;
	static uint64_t x270 = 8905717024782844331LLU;
	static int16_t x271 = -195;
	uint64_t x272 = 196186589204477998LLU;
	volatile uint64_t t57 = 1559183323LLU;

    t57 = (x269-((x270+x271)|x272));

    if (t57 != 306245892032235281LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x277 = INT64_MAX;
	int64_t x280 = 347253LL;
	int64_t t58 = -64489523797990LL;

    t58 = (x277-((x278+x279)|x280));

    if (t58 != 9223372036854428034LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x281 = -22837468;
	int16_t x282 = -1;
	static int64_t x283 = -1LL;
	int64_t t59 = -251717LL;

    t59 = (x281-((x282+x283)|x284));

    if (t59 != -22837466LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x290 = -1LL;
	int16_t x291 = 805;
	volatile int64_t t60 = 332732908LL;

    t60 = (x289-((x290+x291)|x292));

    if (t60 != -32756LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x293 = 1009;
	static uint8_t x294 = 9U;
	uint32_t x295 = UINT32_MAX;

    t61 = (x293-((x294+x295)|x296));

    if (t61 != 1010LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x297 = INT16_MIN;
	int64_t x298 = INT64_MIN;
	int32_t x299 = INT32_MAX;
	volatile uint32_t x300 = 268966197U;
	volatile int64_t t62 = 65400921565LL;

    t62 = (x297-((x298+x299)|x300));

    if (t62 != 9223372034707259393LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x301 = INT32_MAX;
	int8_t x302 = -7;
	volatile uint8_t x303 = UINT8_MAX;
	volatile int8_t x304 = 2;

    t63 = (x301-((x302+x303)|x304));

    if (t63 != 2147483397) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x305 = 1;
	uint16_t x307 = 22712U;
	uint8_t x308 = 28U;
	volatile uint32_t t64 = 34083987U;

    t64 = (x305-((x306+x307)|x308));

    if (t64 != 3861053090U) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x309 = 97689939LLU;
	uint8_t x310 = 5U;
	uint32_t x312 = UINT32_MAX;
	uint64_t t65 = 359134031852562LLU;

    t65 = (x309-((x310+x311)|x312));

    if (t65 != 18273212701965721940LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint32_t x317 = UINT32_MAX;
	int32_t x318 = 2;
	static volatile int16_t x320 = INT16_MIN;
	int64_t t66 = 1172LL;

    t66 = (x317-((x318+x319)|x320));

    if (t66 != 4295000061LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x321 = 2836LLU;
	int64_t x323 = 9336740393LL;
	int16_t x324 = -6702;
	volatile uint64_t t67 = 343597143157292230LLU;

    t67 = (x321-((x322+x323)|x324));

    if (t67 != 2841LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x325 = -44140855;
	static volatile uint8_t x326 = 11U;
	uint16_t x327 = 2946U;
	int8_t x328 = -1;
	volatile int32_t t68 = 251877;

    t68 = (x325-((x326+x327)|x328));

    if (t68 != -44140854) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x333 = 2758451871771LLU;
	int8_t x334 = INT8_MIN;
	static uint8_t x336 = UINT8_MAX;
	static volatile uint64_t t69 = 3183LLU;

    t69 = (x333-((x334+x335)|x336));

    if (t69 != 2758451871772LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint64_t x345 = UINT64_MAX;
	int64_t x346 = 1774LL;
	volatile int8_t x347 = INT8_MIN;
	int32_t x348 = INT32_MAX;
	volatile uint64_t t70 = 504834472LLU;

    t70 = (x345-((x346+x347)|x348));

    if (t70 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x353 = 232367LL;
	int64_t x354 = -211404706LL;
	int16_t x356 = 37;
	int64_t t71 = 179993336277150LL;

    t71 = (x353-((x354+x355)|x356));

    if (t71 != 211637066LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x357 = 3745750937LLU;
	static int32_t x358 = -42944763;
	volatile int16_t x359 = INT16_MIN;
	int16_t x360 = -1;
	uint64_t t72 = 180707876340LLU;

    t72 = (x357-((x358+x359)|x360));

    if (t72 != 3745750938LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x361 = -3;
	static uint8_t x362 = UINT8_MAX;
	uint32_t x363 = 12529U;
	uint64_t x364 = 533544075005LLU;

    t73 = (x361-((x362+x363)|x364));

    if (t73 != 18446743540165476352LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x365 = INT16_MIN;
	static int8_t x366 = INT8_MAX;
	uint64_t t74 = 2185694160173469LLU;

    t74 = (x365-((x366+x367)|x368));

    if (t74 != 18367940168383013451LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x370 = INT8_MIN;
	int32_t x371 = 3146;
	int8_t x372 = INT8_MAX;
	int32_t t75 = 14;

    t75 = (x369-((x370+x371)|x372));

    if (t75 != -3199) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x373 = -1302174LL;
	static int8_t x374 = INT8_MIN;
	int64_t x375 = -1LL;
	volatile int8_t x376 = -1;
	int64_t t76 = 62221606126073022LL;

    t76 = (x373-((x374+x375)|x376));

    if (t76 != -1302173LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x379 = 1796U;
	uint64_t t77 = 495100356908123LLU;

    t77 = (x377-((x378+x379)|x380));

    if (t77 != 348203LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x381 = INT8_MIN;
	uint64_t x382 = 1955571206LLU;
	int16_t x383 = INT16_MAX;
	static uint8_t x384 = 27U;
	static uint64_t t78 = 16174298379LLU;

    t78 = (x381-((x382+x383)|x384));

    if (t78 != 18446744071753947489LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x385 = 1732612930245456LLU;
	int32_t x387 = INT32_MIN;
	static uint16_t x388 = 2898U;
	volatile uint64_t t79 = 667607972LLU;

    t79 = (x385-((x386+x387)|x388));

    if (t79 != 1732615077663569LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x390 = UINT16_MAX;
	static volatile uint64_t x391 = UINT64_MAX;
	int16_t x392 = INT16_MAX;

    t80 = (x389-((x390+x391)|x392));

    if (t80 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x397 = UINT8_MAX;
	int32_t x398 = INT32_MAX;
	int32_t x400 = 32278;
	int32_t t81 = -337328;

    t81 = (x397-((x398+x399)|x400));

    if (t81 != -2147483392) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x410 = 2428U;
	volatile int32_t x412 = INT32_MIN;
	uint32_t t82 = 1737U;

    t82 = (x409-((x410+x411)|x412));

    if (t82 != 2147481233U) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x413 = -1;
	volatile int32_t x414 = INT32_MIN;
	static volatile int64_t x416 = INT64_MIN;
	int64_t t83 = -179314LL;

    t83 = (x413-((x414+x415)|x416));

    if (t83 != 2147483642LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x419 = 584863020461LL;
	static int64_t x420 = 783609491LL;
	int64_t t84 = 136119964287LL;

    t84 = (x417-((x418+x419)|x420));

    if (t84 != -584899738515LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x421 = UINT16_MAX;
	static int16_t x423 = -1;
	volatile int64_t x424 = -555225529643LL;
	volatile int64_t t85 = 262091992151223LL;

    t85 = (x421-((x422+x423)|x424));

    if (t85 != 555225579520LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint32_t x425 = UINT32_MAX;
	static int16_t x426 = 128;
	int8_t x427 = INT8_MIN;
	uint32_t t86 = 655852U;

    t86 = (x425-((x426+x427)|x428));

    if (t86 != 4294959425U) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x431 = -1;
	int8_t x432 = INT8_MAX;

    t87 = (x429-((x430+x431)|x432));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint64_t x437 = 111718186500477LLU;
	uint32_t x439 = 1933U;
	static int32_t x440 = 308;
	volatile uint64_t t88 = 103230812998895828LLU;

    t88 = (x437-((x438+x439)|x440));

    if (t88 != 111718186498497LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x441 = -93695727632838LL;
	static volatile int8_t x442 = -40;
	static uint16_t x443 = 5728U;
	int8_t x444 = 14;
	volatile int64_t t89 = -1922536141272512LL;

    t89 = (x441-((x442+x443)|x444));

    if (t89 != -93695727638532LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x449 = -1;
	int64_t x450 = -67687LL;
	uint64_t x451 = UINT64_MAX;
	int16_t x452 = -1;
	volatile uint64_t t90 = 152152048509013917LLU;

    t90 = (x449-((x450+x451)|x452));

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x453 = 304855064643457145LL;
	int16_t x454 = 0;
	int32_t x455 = -848650701;
	uint32_t x456 = 27655U;
	volatile int64_t t91 = -66797LL;

    t91 = (x453-((x454+x455)|x456));

    if (t91 != 304855061197115970LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x461 = 46;
	int8_t x462 = INT8_MIN;
	int16_t x463 = INT16_MAX;
	int8_t x464 = 26;
	volatile int32_t t92 = 194204;

    t92 = (x461-((x462+x463)|x464));

    if (t92 != -32593) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x465 = -1;
	volatile int16_t x467 = 1;
	int16_t x468 = INT16_MIN;
	volatile int32_t t93 = -3716;

    t93 = (x465-((x466+x467)|x468));

    if (t93 != 32767) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint32_t x469 = 1217095127U;
	int64_t x470 = -1LL;
	uint8_t x471 = 35U;
	static int8_t x472 = INT8_MIN;
	static volatile int64_t t94 = 342770LL;

    t94 = (x469-((x470+x471)|x472));

    if (t94 != 1217095221LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x477 = INT64_MIN;
	static uint8_t x478 = 0U;
	static uint64_t x479 = 2479LLU;
	uint64_t t95 = 630835039345447LLU;

    t95 = (x477-((x478+x479)|x480));

    if (t95 != 8973254249407222289LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x485 = 1U;
	int8_t x487 = -26;
	int32_t x488 = -1;
	static volatile int32_t t96 = 1;

    t96 = (x485-((x486+x487)|x488));

    if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x489 = 0U;
	volatile int32_t x490 = -60832169;
	int64_t x491 = INT64_MAX;
	int64_t x492 = INT64_MAX;
	int64_t t97 = 96LL;

    t97 = (x489-((x490+x491)|x492));

    if (t97 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x493 = INT32_MIN;
	static int32_t x494 = INT32_MAX;
	static int32_t x495 = INT32_MIN;
	static uint16_t x496 = 11U;
	static volatile int32_t t98 = 0;

    t98 = (x493-((x494+x495)|x496));

    if (t98 != -2147483647) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x497 = -1;
	int64_t x499 = INT64_MAX;
	volatile int64_t t99 = 1LL;

    t99 = (x497-((x498+x499)|x500));

    if (t99 != 48LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int32_t x501 = INT32_MAX;
	uint8_t x502 = 1U;
	uint32_t x503 = 55094953U;
	uint8_t x504 = 2U;

    t100 = (x501-((x502+x503)|x504));

    if (t100 != 2092388693U) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile int64_t x505 = INT64_MAX;
	uint32_t x506 = 45039604U;
	int32_t x507 = INT32_MIN;
	int32_t x508 = 0;

    t101 = (x505-((x506+x507)|x508));

    if (t101 != 9223372034662252555LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int8_t x510 = 7;
	static volatile int8_t x511 = -1;
	static int64_t x512 = INT64_MIN;
	volatile int64_t t102 = -7777356798650661LL;

    t102 = (x509-((x510+x511)|x512));

    if (t102 != 9223372036647994771LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint8_t x513 = 33U;
	uint8_t x514 = 63U;
	int32_t x516 = -1;
	static volatile int32_t t103 = -16122806;

    t103 = (x513-((x514+x515)|x516));

    if (t103 != 34) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x525 = UINT8_MAX;
	int64_t x526 = -4088910553LL;
	uint64_t x527 = UINT64_MAX;
	static int64_t x528 = -1LL;
	uint64_t t104 = 6LLU;

    t104 = (x525-((x526+x527)|x528));

    if (t104 != 256LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x530 = INT8_MIN;
	int16_t x531 = -109;
	volatile uint8_t x532 = 2U;
	static volatile int32_t t105 = 49190473;

    t105 = (x529-((x530+x531)|x532));

    if (t105 != 492) { NG(); } else { ; }
	
}

void f106(void) {
    	static int32_t x533 = 66358185;
	int8_t x534 = INT8_MAX;
	int16_t x535 = INT16_MIN;
	volatile uint32_t t106 = 0U;

    t106 = (x533-((x534+x535)|x536));

    if (t106 != 66358186U) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x541 = INT8_MIN;
	int16_t x543 = 3327;
	uint32_t x544 = 31U;
	uint32_t t107 = 1536448U;

    t107 = (x541-((x542+x543)|x544));

    if (t107 != 4294963713U) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x545 = INT32_MAX;
	uint16_t x548 = UINT16_MAX;

    t108 = (x545-((x546+x547)|x548));

    if (t108 != -10604121751552LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x549 = 80662324467873185LLU;
	uint64_t x551 = 30766LLU;
	int8_t x552 = INT8_MIN;
	uint64_t t109 = 129500967900065LLU;

    t109 = (x549-((x550+x551)|x552));

    if (t109 != 80662324467873268LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x553 = -1598772183581841141LL;
	int16_t x554 = INT16_MIN;
	uint8_t x555 = 127U;
	int64_t x556 = -7228LL;
	volatile int64_t t110 = -4960983511LL;

    t110 = (x553-((x554+x555)|x556));

    if (t110 != -1598772183581833972LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint8_t x557 = UINT8_MAX;
	int32_t x558 = -3776767;
	int64_t x559 = -93766776142441LL;
	int8_t x560 = -16;
	int64_t t111 = 1227416LL;

    t111 = (x557-((x558+x559)|x560));

    if (t111 != 263LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x569 = 406U;
	uint8_t x570 = UINT8_MAX;
	int32_t x571 = -31800030;
	int64_t x572 = INT64_MAX;
	int64_t t112 = 877497149943409509LL;

    t112 = (x569-((x570+x571)|x572));

    if (t112 != 407LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x578 = -1;
	int16_t x579 = INT16_MIN;
	uint16_t x580 = UINT16_MAX;

    t113 = (x577-((x578+x579)|x580));

    if (t113 != 20) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x581 = UINT8_MAX;
	static int32_t x582 = INT32_MIN;
	int16_t x583 = 0;
	int64_t x584 = 10350846619LL;
	volatile int64_t t114 = 203030619LL;

    t114 = (x581-((x582+x583)|x584));

    if (t114 != 386571876LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x585 = INT16_MIN;
	int8_t x586 = INT8_MAX;
	int8_t x587 = INT8_MAX;
	uint8_t x588 = UINT8_MAX;
	int32_t t115 = 0;

    t115 = (x585-((x586+x587)|x588));

    if (t115 != -33023) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x589 = INT16_MIN;
	int16_t x590 = 2;
	volatile int64_t x591 = -4570LL;
	int8_t x592 = INT8_MAX;
	static int64_t t116 = -25802LL;

    t116 = (x589-((x590+x591)|x592));

    if (t116 != -28287LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x593 = 14922429815448998LL;
	int64_t x595 = -1LL;
	uint8_t x596 = 6U;
	volatile int64_t t117 = -44LL;

    t117 = (x593-((x594+x595)|x596));

    if (t117 != 14922429815449000LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x605 = -1;
	uint64_t x606 = UINT64_MAX;
	static uint16_t x608 = 8642U;
	uint64_t t118 = 85800141LLU;

    t118 = (x605-((x606+x607)|x608));

    if (t118 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x610 = -1LL;
	uint64_t x612 = 487107252523969LLU;

    t119 = (x609-((x610+x611)|x612));

    if (t119 != 116486231410088LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x617 = INT8_MIN;
	int8_t x618 = 2;
	volatile uint32_t x619 = 1669537U;
	static volatile int16_t x620 = INT16_MAX;
	uint32_t t120 = 1965565U;

    t120 = (x617-((x618+x619)|x620));

    if (t120 != 4293296001U) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x621 = -1;
	volatile int16_t x622 = INT16_MAX;
	int64_t x623 = 925623470717LL;
	static int32_t x624 = 48;
	volatile int64_t t121 = 325LL;

    t121 = (x621-((x622+x623)|x624));

    if (t121 != -925623503485LL) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint16_t x625 = UINT16_MAX;
	int8_t x626 = INT8_MIN;
	int8_t x627 = INT8_MIN;
	uint16_t x628 = 1U;

    t122 = (x625-((x626+x627)|x628));

    if (t122 != 65790) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t x629 = -4;
	uint16_t x630 = 296U;
	int16_t x631 = INT16_MIN;

    t123 = (x629-((x630+x631)|x632));

    if (t123 != 32468) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x634 = -1LL;
	int32_t x636 = INT32_MIN;
	static int64_t t124 = 87958738711648010LL;

    t124 = (x633-((x634+x635)|x636));

    if (t124 != 281312158LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x638 = INT32_MAX;
	int64_t x639 = -532611LL;
	static volatile int64_t t125 = -2464288943135208LL;

    t125 = (x637-((x638+x639)|x640));

    if (t125 != -2146951036LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x641 = -223667667;
	int64_t x643 = 588685063622994780LL;
	int64_t x644 = INT64_MIN;
	volatile int64_t t126 = 28168478232444729LL;

    t126 = (x641-((x642+x643)|x644));

    if (t126 != 8634686973008113321LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x646 = -1;
	static int8_t x647 = 2;
	static int16_t x648 = 12807;
	volatile uint64_t t127 = 6877180315304776LLU;

    t127 = (x645-((x646+x647)|x648));

    if (t127 != 1198311049608985LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x658 = INT64_MIN;
	static uint64_t x659 = UINT64_MAX;
	static int64_t x660 = INT64_MAX;
	uint64_t t128 = 62719548436LLU;

    t128 = (x657-((x658+x659)|x660));

    if (t128 != 9223372036854808576LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x661 = INT8_MIN;
	uint16_t x663 = UINT16_MAX;
	int32_t x664 = INT32_MIN;
	static int32_t t129 = 0;

    t129 = (x661-((x662+x663)|x664));

    if (t129 != 2147417952) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x665 = -310;
	static uint64_t x666 = UINT64_MAX;
	static int16_t x667 = INT16_MIN;
	uint32_t x668 = 175U;

    t130 = (x665-((x666+x667)|x668));

    if (t130 != 32459LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x673 = INT8_MIN;
	uint8_t x674 = UINT8_MAX;
	static uint8_t x675 = 5U;
	int64_t x676 = INT64_MIN;
	int64_t t131 = 9035401LL;

    t131 = (x673-((x674+x675)|x676));

    if (t131 != 9223372036854775420LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x677 = -1;
	uint16_t x678 = 322U;
	uint16_t x679 = 5U;
	volatile int32_t t132 = -441854;

    t132 = (x677-((x678+x679)|x680));

    if (t132 != 56) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint64_t x683 = 3844148541973690698LLU;
	int32_t x684 = -12;
	uint64_t t133 = 929LLU;

    t133 = (x681-((x682+x683)|x684));

    if (t133 != 2530215LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint8_t x689 = UINT8_MAX;
	static int8_t x690 = -1;
	int8_t x691 = -4;
	int32_t x692 = -1;

    t134 = (x689-((x690+x691)|x692));

    if (t134 != 256) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x698 = 3566;
	volatile uint64_t x699 = UINT64_MAX;
	int64_t x700 = INT64_MAX;

    t135 = (x697-((x698+x699)|x700));

    if (t135 != 9223372036854775812LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x701 = INT16_MAX;
	uint64_t x702 = UINT64_MAX;
	int32_t x703 = -19707269;
	uint8_t x704 = 1U;
	uint64_t t136 = 33244677878968258LLU;

    t136 = (x701-((x702+x703)|x704));

    if (t136 != 19740036LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static int32_t x705 = -674385521;
	int32_t x706 = -86;
	uint64_t x707 = 156846668384807LLU;
	int64_t x708 = INT64_MIN;
	uint64_t t137 = 5719203LLU;

    t137 = (x705-((x706+x707)|x708));

    if (t137 != 9223215189512005566LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x717 = INT8_MAX;
	int8_t x718 = 3;
	static int16_t x719 = INT16_MIN;
	int8_t x720 = -1;
	int32_t t138 = 73211829;

    t138 = (x717-((x718+x719)|x720));

    if (t138 != 128) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x721 = INT8_MIN;
	static uint8_t x722 = 63U;
	int64_t x724 = INT64_MIN;

    t139 = (x721-((x722+x723)|x724));

    if (t139 != 2147483457LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x727 = INT16_MIN;
	int8_t x728 = 0;
	static volatile int32_t t140 = -319535174;

    t140 = (x725-((x726+x727)|x728));

    if (t140 != 72617) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint16_t x733 = 4450U;
	volatile int16_t x734 = INT16_MIN;

    t141 = (x733-((x734+x735)|x736));

    if (t141 != 32357) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x737 = 228229496081822LLU;
	uint16_t x738 = 323U;
	volatile int16_t x739 = 3;
	static int16_t x740 = -15;
	uint64_t t142 = 9058948350015723971LLU;

    t142 = (x737-((x738+x739)|x740));

    if (t142 != 228229496081831LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x741 = 19;
	int8_t x742 = -1;
	static int16_t x743 = -1;
	int8_t x744 = 0;
	static volatile int32_t t143 = 474451;

    t143 = (x741-((x742+x743)|x744));

    if (t143 != 21) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int32_t x746 = 67276;
	int64_t x747 = INT64_MIN;
	uint64_t x748 = 89649LLU;
	volatile uint64_t t144 = 140234538927653377LLU;

    t144 = (x745-((x746+x747)|x748));

    if (t144 != 18446744073709461762LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x749 = INT64_MIN;
	int32_t x751 = -12425;
	uint64_t x752 = UINT64_MAX;
	uint64_t t145 = 1988204727011736LLU;

    t145 = (x749-((x750+x751)|x752));

    if (t145 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x753 = -1;
	uint32_t x754 = UINT32_MAX;
	int32_t x755 = INT32_MIN;
	int16_t x756 = INT16_MAX;

    t146 = (x753-((x754+x755)|x756));

    if (t146 != 2147483648U) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint64_t x757 = 26993682984670LLU;
	static int32_t x758 = -1;
	uint8_t x759 = UINT8_MAX;
	int16_t x760 = -1;
	volatile uint64_t t147 = 344403LLU;

    t147 = (x757-((x758+x759)|x760));

    if (t147 != 26993682984671LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x761 = -998683404300LL;
	int32_t x762 = -1;
	uint32_t x763 = 12687392U;
	int32_t x764 = 1;
	int64_t t148 = 76LL;

    t148 = (x761-((x762+x763)|x764));

    if (t148 != -998696091691LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x769 = INT32_MIN;
	uint16_t x770 = 29639U;
	volatile uint16_t x771 = 2710U;
	uint64_t x772 = 5LLU;
	static volatile uint64_t t149 = 147648337616634569LLU;

    t149 = (x769-((x770+x771)|x772));

    if (t149 != 18446744071562035619LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x773 = INT16_MIN;
	int64_t x774 = INT64_MIN;
	uint64_t x775 = 25578LLU;
	int64_t x776 = -1LL;
	uint64_t t150 = 1573591853372864LLU;

    t150 = (x773-((x774+x775)|x776));

    if (t150 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x777 = 1256LLU;
	int8_t x778 = INT8_MIN;
	int8_t x779 = -3;
	uint32_t x780 = 241377882U;
	volatile uint64_t t151 = 15305844892LLU;

    t151 = (x777-((x778+x779)|x780));

    if (t151 != 18446744069414585705LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x781 = INT8_MAX;
	int8_t x782 = -27;
	uint32_t x783 = UINT32_MAX;
	int64_t x784 = -258274757042843LL;

    t152 = (x781-((x782+x783)|x784));

    if (t152 != 258273563377818LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x785 = INT8_MAX;
	uint64_t x786 = UINT64_MAX;
	volatile uint64_t x787 = UINT64_MAX;
	uint32_t x788 = UINT32_MAX;
	volatile uint64_t t153 = 14LLU;

    t153 = (x785-((x786+x787)|x788));

    if (t153 != 128LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint64_t x789 = UINT64_MAX;
	int32_t x790 = INT32_MIN;
	int8_t x792 = INT8_MIN;
	uint64_t t154 = 5LLU;

    t154 = (x789-((x790+x791)|x792));

    if (t154 != 89LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x793 = INT16_MIN;
	static volatile uint32_t x794 = 57658U;
	int16_t x795 = INT16_MIN;
	volatile int8_t x796 = INT8_MIN;
	volatile uint32_t t155 = 151045809U;

    t155 = (x793-((x794+x795)|x796));

    if (t155 != 4294934598U) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x797 = INT64_MAX;
	int64_t x798 = INT64_MAX;
	uint8_t x799 = 0U;
	volatile uint16_t x800 = UINT16_MAX;
	int64_t t156 = 0LL;

    t156 = (x797-((x798+x799)|x800));

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint8_t x801 = UINT8_MAX;
	int16_t x802 = -183;
	int8_t x803 = INT8_MAX;
	static volatile int32_t x804 = INT32_MIN;
	int32_t t157 = 84361176;

    t157 = (x801-((x802+x803)|x804));

    if (t157 != 311) { NG(); } else { ; }
	
}

void f158(void) {
    	static int64_t x806 = INT64_MIN;
	static int64_t x807 = INT64_MAX;
	int32_t x808 = -1;
	static volatile int64_t t158 = -536128LL;

    t158 = (x805-((x806+x807)|x808));

    if (t158 != 128LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x809 = INT8_MIN;
	int32_t x810 = -1;
	static uint64_t x811 = 2115080725810603687LLU;
	static int16_t x812 = 11842;

    t159 = (x809-((x810+x811)|x812));

    if (t159 != 16331663347898945690LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x813 = -508;
	uint8_t x814 = 1U;
	int32_t x815 = INT32_MIN;
	int8_t x816 = -1;
	int32_t t160 = 1;

    t160 = (x813-((x814+x815)|x816));

    if (t160 != -507) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x821 = 0;
	uint64_t x822 = 29LLU;
	static int64_t x823 = INT64_MIN;
	int16_t x824 = INT16_MAX;

    t161 = (x821-((x822+x823)|x824));

    if (t161 != 9223372036854743041LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint32_t x825 = 1836553615U;
	volatile uint8_t x826 = 3U;
	volatile int16_t x827 = 4007;
	volatile uint16_t x828 = UINT16_MAX;
	uint32_t t162 = 4639658U;

    t162 = (x825-((x826+x827)|x828));

    if (t162 != 1836488080U) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint16_t x829 = UINT16_MAX;
	static uint32_t x830 = 37038073U;
	volatile uint32_t x831 = UINT32_MAX;
	volatile int16_t x832 = INT16_MIN;
	uint32_t t163 = 7276U;

    t163 = (x829-((x830+x831)|x832));

    if (t163 != 88071U) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x833 = UINT8_MAX;
	static int8_t x834 = INT8_MIN;
	volatile int8_t x835 = -1;
	static volatile int64_t t164 = -3857055828LL;

    t164 = (x833-((x834+x835)|x836));

    if (t164 != 256LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x837 = 1;
	uint64_t x839 = 7040240485114831LLU;
	int16_t x840 = -1;

    t165 = (x837-((x838+x839)|x840));

    if (t165 != 2LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x841 = -1LL;
	uint8_t x842 = 0U;
	volatile uint8_t x844 = UINT8_MAX;
	int64_t t166 = 2262590040136311LL;

    t166 = (x841-((x842+x843)|x844));

    if (t166 != -4294967296LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x849 = -1LL;
	static int8_t x851 = -1;
	uint8_t x852 = 11U;
	static int64_t t167 = -676313711903948143LL;

    t167 = (x849-((x850+x851)|x852));

    if (t167 != -128LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x853 = INT32_MIN;
	int16_t x854 = -33;
	volatile uint16_t x855 = 424U;
	uint32_t x856 = 2563935U;
	volatile uint32_t t168 = 2U;

    t168 = (x853-((x854+x855)|x856));

    if (t168 != 2144919585U) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint32_t x857 = UINT32_MAX;
	int8_t x858 = 7;
	uint8_t x859 = 0U;
	uint32_t t169 = 4627U;

    t169 = (x857-((x858+x859)|x860));

    if (t169 != 3322072904U) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x861 = -1;
	uint16_t x862 = UINT16_MAX;
	volatile int16_t x864 = INT16_MIN;
	volatile int32_t t170 = -119;

    t170 = (x861-((x862+x863)|x864));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x865 = -1LL;
	volatile int8_t x866 = INT8_MIN;
	uint32_t x867 = 1691236U;
	uint16_t x868 = UINT16_MAX;
	int64_t t171 = 3517460822804491LL;

    t171 = (x865-((x866+x867)|x868));

    if (t171 != -1703936LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint8_t x869 = 0U;
	int16_t x870 = -1;
	int64_t x871 = -269LL;
	volatile uint8_t x872 = UINT8_MAX;

    t172 = (x869-((x870+x871)|x872));

    if (t172 != 257LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x877 = 1752;
	int16_t x878 = -1;
	volatile int16_t x879 = INT16_MIN;
	uint16_t x880 = 487U;
	volatile int32_t t173 = -408;

    t173 = (x877-((x878+x879)|x880));

    if (t173 != 34521) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x889 = INT32_MAX;
	uint8_t x891 = UINT8_MAX;
	static int64_t t174 = -90161LL;

    t174 = (x889-((x890+x891)|x892));

    if (t174 != 2147483754LL) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int16_t x893 = -23;
	volatile int64_t x895 = INT64_MIN;
	int8_t x896 = -1;
	uint64_t t175 = 3155874LLU;

    t175 = (x893-((x894+x895)|x896));

    if (t175 != 18446744073709551594LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x898 = -63;
	int64_t x899 = 3LL;
	int16_t x900 = 473;
	int64_t t176 = -1070846787364766417LL;

    t176 = (x897-((x898+x899)|x900));

    if (t176 != 34LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x901 = INT32_MAX;
	int64_t x902 = -25025410252522300LL;
	volatile int16_t x903 = -1;

    t177 = (x901-((x902+x903)|x904));

    if (t177 != 25025412400005436LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x905 = INT16_MAX;
	int32_t x906 = -1;
	static int32_t x908 = INT32_MIN;
	volatile int32_t t178 = 2052675;

    t178 = (x905-((x906+x907)|x908));

    if (t178 != 65536) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x909 = 126;
	static int32_t x910 = -1;
	uint8_t x911 = 0U;
	static int16_t x912 = -1;
	int32_t t179 = -75;

    t179 = (x909-((x910+x911)|x912));

    if (t179 != 127) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x914 = 5;
	uint32_t x915 = 428060845U;
	int8_t x916 = 7;
	uint32_t t180 = 2562840U;

    t180 = (x913-((x914+x915)|x916));

    if (t180 != 3866906405U) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x917 = 1056919991U;
	uint16_t x919 = UINT16_MAX;
	int32_t x920 = INT32_MAX;

    t181 = (x917-((x918+x919)|x920));

    if (t181 != 3204403640U) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x925 = 0U;
	int64_t x927 = -176857625267143050LL;
	int64_t x928 = -412945328LL;
	volatile int64_t t182 = 40LL;

    t182 = (x925-((x926+x927)|x928));

    if (t182 != 412945319LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x929 = 17;
	int16_t x930 = INT16_MAX;
	uint8_t x932 = 44U;
	static volatile int32_t t183 = -3;

    t183 = (x929-((x930+x931)|x932));

    if (t183 != 2147450898) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x934 = UINT32_MAX;
	static int64_t x935 = INT64_MIN;
	int64_t x936 = -1LL;
	volatile int64_t t184 = 227LL;

    t184 = (x933-((x934+x935)|x936));

    if (t184 != 153LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x937 = INT8_MIN;
	int8_t x938 = 0;
	volatile int64_t x939 = -1LL;
	static int64_t x940 = INT64_MIN;
	volatile int64_t t185 = -29532944828LL;

    t185 = (x937-((x938+x939)|x940));

    if (t185 != -127LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x945 = UINT64_MAX;
	volatile int64_t x946 = -1LL;
	uint64_t x947 = 428822108174250LLU;
	static volatile uint64_t t186 = 123074840187LLU;

    t186 = (x945-((x946+x947)|x948));

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x949 = UINT32_MAX;
	int8_t x950 = 44;
	volatile int16_t x951 = INT16_MAX;
	uint32_t t187 = 61U;

    t187 = (x949-((x950+x951)|x952));

    if (t187 != 4294851792U) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x953 = -1;
	uint32_t x954 = UINT32_MAX;
	static volatile int32_t x956 = 7;
	uint32_t t188 = 101607U;

    t188 = (x953-((x954+x955)|x956));

    if (t188 != 2147483648U) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x957 = UINT64_MAX;
	volatile int64_t x958 = INT64_MAX;
	int16_t x959 = INT16_MIN;
	static int64_t x960 = -391665LL;
	uint64_t t189 = 23LLU;

    t189 = (x957-((x958+x959)|x960));

    if (t189 != 32768LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x963 = INT16_MAX;
	static int32_t x964 = INT32_MAX;

    t190 = (x961-((x962+x963)|x964));

    if (t190 != 610) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int16_t x965 = -1;
	int16_t x966 = INT16_MIN;
	int8_t x967 = INT8_MAX;
	volatile int8_t x968 = INT8_MIN;
	int32_t t191 = -4411586;

    t191 = (x965-((x966+x967)|x968));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x969 = -1;
	int8_t x970 = 1;
	volatile uint32_t x971 = 1306U;
	uint64_t x972 = 182120292LLU;
	uint64_t t192 = 167812728LLU;

    t192 = (x969-((x970+x971)|x972));

    if (t192 != 18446744073527431296LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x977 = INT16_MIN;
	int64_t x978 = -25267776LL;
	int64_t x980 = INT64_MAX;
	int64_t t193 = 7648413LL;

    t193 = (x977-((x978+x979)|x980));

    if (t193 != -32767LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x985 = 13U;
	volatile int16_t x986 = INT16_MIN;
	int16_t x987 = INT16_MAX;
	int8_t x988 = INT8_MAX;

    t194 = (x985-((x986+x987)|x988));

    if (t194 != 14) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x989 = INT64_MIN;
	static uint64_t x991 = 471939972LLU;
	uint64_t t195 = 58453800138LLU;

    t195 = (x989-((x990+x991)|x992));

    if (t195 != 9223372013820445557LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x993 = INT16_MIN;
	int16_t x994 = INT16_MAX;
	uint16_t x996 = UINT16_MAX;

    t196 = (x993-((x994+x995)|x996));

    if (t196 != -98303) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x998 = -380832618183LL;
	int64_t x1000 = 1885073LL;
	int64_t t197 = 199758451LL;

    t197 = (x997-((x998+x999)|x1000));

    if (t197 != 380832322637LL) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x1001 = 886;
	int32_t x1004 = 11;

    t198 = (x1001-((x1002+x1003)|x1004));

    if (t198 != -31881) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x1005 = INT16_MIN;
	int8_t x1006 = INT8_MIN;
	static volatile int32_t x1008 = -405429;
	volatile int32_t t199 = 7954;

    t199 = (x1005-((x1006+x1007)|x1008));

    if (t199 != -32587) { NG(); } else { ; }
	
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

