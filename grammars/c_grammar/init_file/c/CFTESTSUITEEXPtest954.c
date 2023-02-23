
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

uint8_t x4 = UINT8_MAX;
uint64_t t1 = 1886801743100887948LLU;
uint64_t x10 = UINT64_MAX;
uint64_t t2 = 984591061136221LLU;
uint32_t x13 = UINT32_MAX;
int64_t x15 = -1LL;
int16_t x20 = INT16_MAX;
int8_t x24 = 0;
static volatile uint64_t t5 = 150078620009964LLU;
static int16_t x32 = 3;
static uint8_t x39 = 111U;
volatile int16_t x42 = -1;
volatile uint64_t t10 = 2846295312LLU;
volatile uint16_t x49 = UINT16_MAX;
volatile int32_t x53 = -5;
int64_t x55 = INT64_MIN;
int64_t t12 = 1782446609201048618LL;
uint32_t x63 = 1U;
uint32_t x64 = UINT32_MAX;
static int32_t t16 = -414230;
int16_t x78 = INT16_MIN;
volatile int16_t x85 = -1;
int64_t x87 = INT64_MIN;
static int64_t x92 = INT64_MAX;
int64_t t21 = 59796361937071151LL;
int16_t x94 = 2035;
volatile int8_t x96 = -1;
static volatile uint32_t t23 = 2120165060U;
static uint16_t x113 = 31530U;
volatile uint16_t x117 = UINT16_MAX;
int32_t t28 = 61541;
int32_t x121 = 29143;
static int8_t x136 = 28;
int64_t x141 = -1LL;
int32_t x150 = 1;
int32_t x151 = INT32_MIN;
uint32_t x155 = 10930823U;
volatile uint32_t t36 = 118020085U;
int8_t x159 = INT8_MIN;
static volatile int64_t x161 = INT64_MIN;
uint8_t x164 = 22U;
uint8_t x169 = 2U;
int16_t x183 = -255;
int8_t x191 = INT8_MIN;
int16_t x197 = -1;
int32_t t44 = 29839677;
int32_t x201 = 122955;
int64_t x202 = -1LL;
int64_t x204 = 327505502242624LL;
static uint32_t x208 = 568754080U;
uint64_t x224 = 5430LLU;
int16_t x225 = -1;
int32_t x228 = INT32_MIN;
int8_t x235 = -1;
uint16_t x236 = UINT16_MAX;
int64_t x243 = -1LL;
static uint64_t t53 = 30004593LLU;
int8_t x250 = -1;
volatile uint64_t t57 = 106156LLU;
static int32_t x261 = INT32_MIN;
int16_t x266 = -22;
static volatile int32_t t59 = 127;
int64_t x269 = INT64_MAX;
static uint16_t x276 = UINT16_MAX;
volatile int32_t t63 = 278238075;
volatile uint64_t t64 = 78543173LLU;
int64_t x300 = 63054008036LL;
int8_t x301 = 6;
int16_t x306 = 1;
int64_t x308 = INT64_MIN;
volatile int64_t x313 = 52LL;
uint32_t x314 = 29U;
int16_t x315 = INT16_MAX;
volatile int64_t x321 = -3LL;
volatile int64_t t71 = -4015063625448LL;
int32_t x326 = INT32_MIN;
int64_t x328 = INT64_MIN;
volatile int16_t x330 = INT16_MAX;
static int8_t x335 = -1;
int32_t x343 = INT32_MAX;
int32_t x344 = INT32_MAX;
static int32_t t77 = -224;
uint8_t x350 = 4U;
int16_t x352 = -2129;
int8_t x353 = -1;
int64_t x354 = INT64_MIN;
uint32_t x358 = 9175U;
volatile int32_t t81 = 6;
int16_t x365 = INT16_MIN;
uint32_t x368 = UINT32_MAX;
volatile uint64_t t82 = 13251LLU;
int64_t x371 = INT64_MIN;
volatile uint16_t x372 = 29U;
volatile int64_t t83 = -518040639717LL;
volatile uint16_t x378 = 69U;
uint16_t x384 = 2U;
int16_t x391 = INT16_MIN;
int16_t x393 = INT16_MIN;
static int16_t x394 = INT16_MAX;
static int8_t x399 = 2;
volatile int32_t x400 = INT32_MIN;
static int64_t x404 = -85293LL;
volatile uint64_t t91 = 253622LLU;
uint64_t x408 = 22544664165861922LLU;
int8_t x409 = INT8_MIN;
int64_t x411 = INT64_MIN;
int64_t t93 = 2129529759859546LL;
uint8_t x414 = 83U;
int64_t x427 = INT64_MAX;
int64_t t95 = -18147LL;
static int64_t x444 = 34131180738761203LL;
int8_t x447 = -24;
int64_t x460 = INT64_MIN;
volatile int64_t t102 = -949399703412LL;
static int8_t x467 = INT8_MAX;
int32_t x468 = INT32_MIN;
uint32_t t104 = 10560608U;
static volatile int64_t x470 = -1LL;
int64_t x476 = 5387938048LL;
int32_t x479 = -3291806;
int32_t t107 = 10912598;
int32_t x483 = 133183887;
volatile uint64_t t108 = 156240154142671LLU;
volatile int8_t x485 = 1;
int32_t x487 = INT32_MIN;
volatile int64_t x490 = -1LL;
uint32_t x495 = 6628U;
volatile uint32_t t111 = 29574U;
int32_t x502 = INT32_MIN;
volatile uint8_t x503 = 25U;
uint8_t x504 = 116U;
int32_t x505 = INT32_MAX;
volatile uint16_t x516 = UINT16_MAX;
int32_t x520 = INT32_MIN;
static int32_t x525 = 26;
uint8_t x528 = 14U;
volatile int32_t t120 = -7483;
static int8_t x533 = 0;
volatile uint64_t t121 = 842252104LLU;
volatile int64_t x537 = INT64_MIN;
volatile int64_t t122 = -638961LL;
uint16_t x543 = UINT16_MAX;
int32_t t123 = -2493;
volatile uint32_t x546 = UINT32_MAX;
volatile int8_t x549 = INT8_MIN;
uint64_t x553 = UINT64_MAX;
int32_t x554 = -327127;
static int64_t x555 = -1LL;
int16_t x556 = INT16_MIN;
int64_t x564 = -1LL;
int16_t x568 = 6;
static uint16_t x570 = 26U;
uint16_t x580 = 1472U;
int32_t x596 = -35;
static volatile int64_t t135 = -116651935LL;
int64_t x603 = 48841721LL;
int32_t x605 = -1;
volatile int64_t x610 = 499673451906650LL;
volatile int8_t x612 = INT8_MAX;
int32_t x619 = INT32_MIN;
static int16_t x623 = INT16_MIN;
volatile int16_t x627 = INT16_MAX;
static uint16_t x631 = 17017U;
uint32_t t143 = 1648749023U;
int32_t x637 = INT32_MIN;
int32_t t145 = -32717252;
uint8_t x647 = 4U;
static volatile int64_t t147 = -2532048073LL;
volatile int64_t x651 = INT64_MIN;
uint64_t t148 = 29211597LLU;
static volatile int32_t x665 = -5208241;
int8_t x669 = INT8_MIN;
volatile int64_t t152 = 916LL;
int32_t x674 = INT32_MIN;
int64_t t154 = -133LL;
static volatile int64_t x684 = -97149183LL;
volatile uint64_t t155 = 419049225451LLU;
int64_t x688 = -858670658821650880LL;
volatile uint64_t t156 = 2826041873460788190LLU;
uint16_t x690 = UINT16_MAX;
volatile int16_t x691 = INT16_MAX;
int64_t t157 = -375899566205353LL;
volatile int32_t x694 = INT32_MIN;
uint8_t x695 = UINT8_MAX;
static int64_t x699 = 159930874834555235LL;
volatile int64_t t160 = 1769LL;
uint16_t x707 = 8U;
static int8_t x711 = INT8_MIN;
volatile uint16_t x721 = 4908U;
volatile int64_t t166 = 0LL;
int32_t t168 = 63886;
volatile int16_t x738 = INT16_MIN;
int8_t x741 = INT8_MIN;
uint16_t x748 = 502U;
int16_t x749 = INT16_MIN;
volatile uint64_t t172 = 163709697475564LLU;
volatile int8_t x756 = 14;
volatile int32_t t173 = -214;
int8_t x764 = -12;
static uint8_t x765 = 0U;
uint32_t x769 = 430U;
int16_t x772 = INT16_MIN;
int16_t x774 = -1;
static int16_t x779 = -1;
int16_t x789 = -247;
int64_t x791 = 1LL;
int64_t t180 = -177362470195844LL;
static int8_t x796 = -1;
int16_t x804 = INT16_MIN;
uint64_t x810 = 3LLU;
int32_t x811 = -404560427;
uint16_t x812 = UINT16_MAX;
int16_t x820 = -1;
static int32_t x822 = -1;
static int64_t x831 = -1LL;
static int8_t x835 = -5;
volatile int8_t x836 = INT8_MIN;
static uint16_t x846 = 3549U;
volatile int64_t t192 = -654988710823503293LL;
int16_t x852 = -6;
int16_t x854 = 1;
static int64_t x855 = INT64_MIN;
static int8_t x857 = INT8_MIN;
int8_t x862 = INT8_MIN;
volatile uint64_t t196 = 12LLU;
uint32_t x867 = 192U;
uint8_t x870 = UINT8_MAX;
int16_t x875 = INT16_MIN;
int64_t t199 = 0LL;


void f0(void) {
    	int16_t x1 = -1;
	int8_t x2 = INT8_MIN;
	volatile int32_t x3 = INT32_MIN;
	volatile int32_t t0 = 0;

    t0 = (x1-((x2%x3)|x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = UINT64_MAX;
	static int8_t x6 = INT8_MIN;
	static uint32_t x7 = 1036360616U;
	static int64_t x8 = 4293308462927812786LL;

    t1 = (x5-((x6%x7)|x8));

    if (t1 != 14153435610647521037LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = -1;
	volatile uint8_t x11 = 3U;
	int32_t x12 = INT32_MIN;

    t2 = (x9-((x10%x11)|x12));

    if (t2 != 2147483647LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x14 = INT16_MIN;
	int32_t x16 = 18953126;
	volatile int64_t t3 = 902722311506LL;

    t3 = (x13-((x14%x15)|x16));

    if (t3 != 4276014169LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile uint64_t x17 = 9145568836LLU;
	int8_t x18 = 4;
	uint16_t x19 = UINT16_MAX;
	static uint64_t t4 = 6673691071LLU;

    t4 = (x17-((x18%x19)|x20));

    if (t4 != 9145536069LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = 4U;
	int32_t x22 = 1;
	volatile uint64_t x23 = 114LLU;

    t5 = (x21-((x22%x23)|x24));

    if (t5 != 3LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = INT16_MAX;
	volatile uint8_t x26 = 31U;
	static volatile int64_t x27 = 33750754241LL;
	int64_t x28 = 1216817049353633840LL;
	volatile int64_t t6 = -63000LL;

    t6 = (x25-((x26%x27)|x28));

    if (t6 != -1216817049353601088LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = -119728867;
	uint64_t x30 = 19332549536232LLU;
	int64_t x31 = INT64_MIN;
	static uint64_t t7 = 916876333LLU;

    t7 = (x29-((x30%x31)|x32));

    if (t7 != 18446724741040286514LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = -7;
	static volatile int8_t x34 = INT8_MIN;
	int32_t x35 = -1;
	static uint64_t x36 = UINT64_MAX;
	uint64_t t8 = 2053144977157201941LLU;

    t8 = (x33-((x34%x35)|x36));

    if (t8 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x37 = 3;
	int32_t x38 = -666676440;
	uint64_t x40 = 5892602LLU;
	static uint64_t t9 = 29389222LLU;

    t9 = (x37-((x38%x39)|x40));

    if (t9 != 9LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = -1LL;
	uint64_t x43 = UINT64_MAX;
	static int8_t x44 = INT8_MAX;

    t10 = (x41-((x42%x43)|x44));

    if (t10 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x50 = -1;
	volatile uint32_t x51 = UINT32_MAX;
	volatile int64_t x52 = INT64_MAX;
	int64_t t11 = -203825638994886LL;

    t11 = (x49-((x50%x51)|x52));

    if (t11 != -9223372036854710272LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x54 = -1;
	volatile int64_t x56 = INT64_MAX;

    t12 = (x53-((x54%x55)|x56));

    if (t12 != -4LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x57 = -16643847LL;
	volatile int16_t x58 = INT16_MIN;
	int32_t x59 = -666857;
	int64_t x60 = -1LL;
	int64_t t13 = -7LL;

    t13 = (x57-((x58%x59)|x60));

    if (t13 != -16643846LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x61 = 4139U;
	int64_t x62 = 9450065401399LL;
	static int64_t t14 = -142491901748LL;

    t14 = (x61-((x62%x63)|x64));

    if (t14 != -4294963156LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static int16_t x65 = INT16_MIN;
	int8_t x66 = 1;
	int64_t x67 = 1195055044015LL;
	static int32_t x68 = INT32_MAX;
	int64_t t15 = 16915377718LL;

    t15 = (x65-((x66%x67)|x68));

    if (t15 != -2147516415LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static int16_t x69 = INT16_MAX;
	static volatile uint8_t x70 = 11U;
	int32_t x71 = -184;
	int32_t x72 = INT32_MAX;

    t16 = (x69-((x70%x71)|x72));

    if (t16 != -2147450880) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x73 = INT32_MAX;
	static int64_t x74 = INT64_MAX;
	int64_t x75 = 1563973951468651LL;
	int16_t x76 = INT16_MAX;
	volatile int64_t t17 = -209973911659827LL;

    t17 = (x73-((x74%x75)|x76));

    if (t17 != -617642896687104LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x77 = 258896679426LLU;
	static volatile int16_t x79 = INT16_MAX;
	int8_t x80 = INT8_MAX;
	static uint64_t t18 = 2567405493658856383LLU;

    t18 = (x77-((x78%x79)|x80));

    if (t18 != 258896679427LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint64_t x81 = 131272567836563LLU;
	static uint64_t x82 = 74LLU;
	static int8_t x83 = 27;
	uint8_t x84 = UINT8_MAX;
	uint64_t t19 = 127332891818LLU;

    t19 = (x81-((x82%x83)|x84));

    if (t19 != 131272567836308LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x86 = -1LL;
	int32_t x88 = INT32_MIN;
	volatile int64_t t20 = 4536813480652390LL;

    t20 = (x85-((x86%x87)|x88));

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x89 = 15475312U;
	volatile uint32_t x90 = 37811201U;
	static uint32_t x91 = UINT32_MAX;

    t21 = (x89-((x90%x91)|x92));

    if (t21 != -9223372036839300495LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x93 = INT64_MIN;
	static int8_t x95 = -1;
	int64_t t22 = 8677814108773LL;

    t22 = (x93-((x94%x95)|x96));

    if (t22 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x97 = 3U;
	volatile int16_t x98 = INT16_MIN;
	static uint16_t x99 = UINT16_MAX;
	volatile uint16_t x100 = 1023U;

    t23 = (x97-((x98%x99)|x100));

    if (t23 != 31748U) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x101 = 37U;
	int8_t x102 = INT8_MIN;
	static int64_t x103 = INT64_MIN;
	volatile int32_t x104 = INT32_MIN;
	volatile int64_t t24 = 1125LL;

    t24 = (x101-((x102%x103)|x104));

    if (t24 != 165LL) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint32_t x105 = 49732021U;
	static int32_t x106 = INT32_MIN;
	volatile int32_t x107 = INT32_MIN;
	int16_t x108 = 2307;
	static volatile uint32_t t25 = 37866779U;

    t25 = (x105-((x106%x107)|x108));

    if (t25 != 49729714U) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x109 = -31736828;
	int16_t x110 = INT16_MIN;
	uint64_t x111 = 12383640LLU;
	int16_t x112 = 158;
	volatile uint64_t t26 = 468LLU;

    t26 = (x109-((x110%x111)|x112));

    if (t26 != 18446744073667530278LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint8_t x114 = 6U;
	int16_t x115 = -415;
	volatile int16_t x116 = INT16_MIN;
	int32_t t27 = -5;

    t27 = (x113-((x114%x115)|x116));

    if (t27 != 64292) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x118 = 3;
	uint16_t x119 = 2U;
	volatile int32_t x120 = -1;

    t28 = (x117-((x118%x119)|x120));

    if (t28 != 65536) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int32_t x122 = INT32_MIN;
	uint8_t x123 = 94U;
	uint8_t x124 = UINT8_MAX;
	volatile int32_t t29 = 161785975;

    t29 = (x121-((x122%x123)|x124));

    if (t29 != 29144) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint8_t x129 = 0U;
	static int16_t x130 = INT16_MIN;
	uint64_t x131 = UINT64_MAX;
	int32_t x132 = -684631;
	volatile uint64_t t30 = 107945825592LLU;

    t30 = (x129-((x130%x131)|x132));

    if (t30 != 29271LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x133 = 27U;
	static volatile uint64_t x134 = 113419849550235752LLU;
	int16_t x135 = INT16_MIN;
	uint64_t t31 = 10266504462LLU;

    t31 = (x133-((x134%x135)|x136));

    if (t31 != 18333324224159315871LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x137 = INT16_MAX;
	uint64_t x138 = UINT64_MAX;
	uint8_t x139 = 2U;
	int16_t x140 = -1;
	static volatile uint64_t t32 = 4933LLU;

    t32 = (x137-((x138%x139)|x140));

    if (t32 != 32768LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x142 = INT32_MIN;
	int32_t x143 = -1;
	int32_t x144 = 140034815;
	static volatile int64_t t33 = -316442933551LL;

    t33 = (x141-((x142%x143)|x144));

    if (t33 != -140034816LL) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x145 = -1;
	volatile uint32_t x146 = UINT32_MAX;
	static volatile int32_t x147 = -1;
	uint64_t x148 = 933014638798LLU;
	volatile uint64_t t34 = 51LLU;

    t34 = (x145-((x146%x147)|x148));

    if (t34 != 18446743140694912817LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x149 = -1LL;
	static uint64_t x152 = UINT64_MAX;
	volatile uint64_t t35 = 8966176842182468LLU;

    t35 = (x149-((x150%x151)|x152));

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x153 = INT8_MIN;
	int8_t x154 = INT8_MIN;
	int32_t x156 = INT32_MIN;

    t36 = (x153-((x154%x155)|x156));

    if (t36 != 2137398968U) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint64_t x157 = UINT64_MAX;
	uint16_t x158 = 436U;
	static int32_t x160 = -1;
	volatile uint64_t t37 = 152956821667642154LLU;

    t37 = (x157-((x158%x159)|x160));

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x162 = UINT64_MAX;
	static int8_t x163 = 1;
	volatile uint64_t t38 = 2450499186882414LLU;

    t38 = (x161-((x162%x163)|x164));

    if (t38 != 9223372036854775786LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x165 = 206020175850732569LLU;
	static volatile int8_t x166 = -1;
	int32_t x167 = 21209;
	static int32_t x168 = INT32_MAX;
	uint64_t t39 = 33995919490787442LLU;

    t39 = (x165-((x166%x167)|x168));

    if (t39 != 206020175850732570LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x170 = INT64_MAX;
	uint32_t x171 = 927U;
	int16_t x172 = -1;
	static int64_t t40 = 1LL;

    t40 = (x169-((x170%x171)|x172));

    if (t40 != 3LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x177 = 888;
	int16_t x178 = -111;
	static uint64_t x179 = 15014758455LLU;
	int32_t x180 = 0;
	static volatile uint64_t t41 = 6830913325970428LLU;

    t41 = (x177-((x178%x179)|x180));

    if (t41 != 18446744061262663884LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int64_t x181 = -1LL;
	uint16_t x182 = 2492U;
	static int16_t x184 = 4145;
	volatile int64_t t42 = 3735195542870436667LL;

    t42 = (x181-((x182%x183)|x184));

    if (t42 != -4342LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x189 = UINT8_MAX;
	int64_t x190 = 3374775916738LL;
	static int8_t x192 = -19;
	volatile int64_t t43 = -1610660038006LL;

    t43 = (x189-((x190%x191)|x192));

    if (t43 != 272LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x198 = 3170121;
	static int16_t x199 = INT16_MIN;
	int8_t x200 = -29;

    t44 = (x197-((x198%x199)|x200));

    if (t44 != 20) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x203 = INT8_MIN;
	int64_t t45 = 14833264LL;

    t45 = (x201-((x202%x203)|x204));

    if (t45 != 122956LL) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint16_t x205 = 231U;
	int16_t x206 = -5372;
	uint64_t x207 = UINT64_MAX;
	uint64_t t46 = 650197509608551201LLU;

    t46 = (x205-((x206%x207)|x208));

    if (t46 != 323LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x209 = INT8_MIN;
	uint8_t x210 = UINT8_MAX;
	uint32_t x211 = 68404U;
	uint32_t x212 = 437326U;
	static uint32_t t47 = 2430U;

    t47 = (x209-((x210%x211)|x212));

    if (t47 != 4294529665U) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x213 = -1;
	uint8_t x214 = 25U;
	int8_t x215 = INT8_MAX;
	static int16_t x216 = INT16_MAX;
	static volatile int32_t t48 = 15174126;

    t48 = (x213-((x214%x215)|x216));

    if (t48 != -32768) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile int32_t x217 = -1;
	uint16_t x218 = 95U;
	int8_t x219 = INT8_MIN;
	int16_t x220 = INT16_MAX;
	volatile int32_t t49 = -101;

    t49 = (x217-((x218%x219)|x220));

    if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x221 = -5;
	static volatile int16_t x222 = -4030;
	int32_t x223 = INT32_MAX;
	uint64_t t50 = 6946LLU;

    t50 = (x221-((x222%x223)|x224));

    if (t50 != 2693LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x226 = UINT32_MAX;
	uint16_t x227 = UINT16_MAX;
	static volatile uint32_t t51 = 47U;

    t51 = (x225-((x226%x227)|x228));

    if (t51 != 2147483647U) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x233 = INT64_MIN;
	static uint64_t x234 = UINT64_MAX;
	volatile uint64_t t52 = 18295244402LLU;

    t52 = (x233-((x234%x235)|x236));

    if (t52 != 9223372036854710273LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint64_t x241 = 7273608388512459LLU;
	static volatile int16_t x242 = INT16_MIN;
	static volatile int8_t x244 = INT8_MIN;

    t53 = (x241-((x242%x243)|x244));

    if (t53 != 7273608388512587LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x245 = 10;
	int8_t x246 = INT8_MIN;
	uint64_t x247 = 26974581LLU;
	static volatile int32_t x248 = -1;
	static volatile uint64_t t54 = 1869339612676670LLU;

    t54 = (x245-((x246%x247)|x248));

    if (t54 != 11LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x249 = INT64_MAX;
	int32_t x251 = -14571;
	uint64_t x252 = 104649860LLU;
	uint64_t t55 = 1504519527860827978LLU;

    t55 = (x249-((x250%x251)|x252));

    if (t55 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x253 = -56758;
	int8_t x254 = -1;
	int8_t x255 = INT8_MIN;
	uint16_t x256 = UINT16_MAX;
	volatile int32_t t56 = -20705655;

    t56 = (x253-((x254%x255)|x256));

    if (t56 != -56757) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x257 = INT16_MAX;
	volatile int8_t x258 = -1;
	uint64_t x259 = 17207736329490401LLU;
	uint8_t x260 = 0U;

    t57 = (x257-((x258%x259)|x260));

    if (t57 != 18446693345213742640LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x262 = INT32_MIN;
	volatile int32_t x263 = -1;
	int64_t x264 = 856459602LL;
	int64_t t58 = 22LL;

    t58 = (x261-((x262%x263)|x264));

    if (t58 != -3003943250LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x265 = 50U;
	static int16_t x267 = -1;
	volatile int16_t x268 = -1;

    t59 = (x265-((x266%x267)|x268));

    if (t59 != 51) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x270 = INT64_MIN;
	int64_t x271 = INT64_MIN;
	volatile uint8_t x272 = UINT8_MAX;
	int64_t t60 = -2513LL;

    t60 = (x269-((x270%x271)|x272));

    if (t60 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x273 = INT16_MIN;
	int32_t x274 = -388961493;
	int16_t x275 = -16;
	volatile int32_t t61 = -14733;

    t61 = (x273-((x274%x275)|x276));

    if (t61 != -32767) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x277 = -3;
	int32_t x278 = 0;
	uint32_t x279 = 323705U;
	volatile int64_t x280 = -69142223664096418LL;
	volatile int64_t t62 = -1128LL;

    t62 = (x277-((x278%x279)|x280));

    if (t62 != 69142223664096415LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x281 = -1;
	static uint16_t x282 = 3496U;
	static int8_t x283 = -1;
	int16_t x284 = -123;

    t63 = (x281-((x282%x283)|x284));

    if (t63 != 122) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x289 = 198LLU;
	volatile int32_t x290 = INT32_MAX;
	int64_t x291 = 67552124460799LL;
	static uint32_t x292 = UINT32_MAX;

    t64 = (x289-((x290%x291)|x292));

    if (t64 != 18446744069414584519LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x293 = UINT16_MAX;
	volatile int32_t x294 = INT32_MAX;
	static int64_t x295 = INT64_MAX;
	int16_t x296 = INT16_MAX;
	int64_t t65 = 7373603LL;

    t65 = (x293-((x294%x295)|x296));

    if (t65 != -2147418112LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x297 = 1668U;
	static int32_t x298 = 0;
	int64_t x299 = -1LL;
	int64_t t66 = 112788647104LL;

    t66 = (x297-((x298%x299)|x300));

    if (t66 != -63054006368LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x302 = 3;
	volatile int16_t x303 = -1;
	uint8_t x304 = UINT8_MAX;
	static volatile int32_t t67 = -26650534;

    t67 = (x301-((x302%x303)|x304));

    if (t67 != -249) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x305 = INT8_MIN;
	static uint8_t x307 = 22U;
	int64_t t68 = 2423673LL;

    t68 = (x305-((x306%x307)|x308));

    if (t68 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x316 = 491127337LL;
	volatile int64_t t69 = -3137490LL;

    t69 = (x313-((x314%x315)|x316));

    if (t69 != -491127305LL) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x317 = -366986212;
	int16_t x318 = INT16_MIN;
	static volatile uint64_t x319 = UINT64_MAX;
	volatile int32_t x320 = INT32_MIN;
	static uint64_t t70 = 19LLU;

    t70 = (x317-((x318%x319)|x320));

    if (t70 != 18446744073342598172LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x322 = INT16_MIN;
	int32_t x323 = INT32_MIN;
	volatile uint8_t x324 = 35U;

    t71 = (x321-((x322%x323)|x324));

    if (t71 != 32730LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x325 = INT16_MIN;
	int32_t x327 = -1;
	int64_t t72 = -1135694586080LL;

    t72 = (x325-((x326%x327)|x328));

    if (t72 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x329 = -1;
	int16_t x331 = INT16_MAX;
	int64_t x332 = INT64_MIN;
	volatile int64_t t73 = INT64_MAX;

    t73 = (x329-((x330%x331)|x332));

    if (t73 != INT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x333 = -1;
	int32_t x334 = -76;
	int64_t x336 = INT64_MIN;
	static volatile int64_t t74 = INT64_MAX;

    t74 = (x333-((x334%x335)|x336));

    if (t74 != INT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x337 = -42;
	int16_t x338 = -27;
	int16_t x339 = -1;
	int8_t x340 = INT8_MAX;
	volatile int32_t t75 = -1;

    t75 = (x337-((x338%x339)|x340));

    if (t75 != -169) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x341 = INT32_MIN;
	volatile int8_t x342 = INT8_MIN;
	volatile int32_t t76 = -12152076;

    t76 = (x341-((x342%x343)|x344));

    if (t76 != -2147483647) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile int32_t x345 = -9288482;
	int32_t x346 = INT32_MIN;
	int32_t x347 = -61315;
	int32_t x348 = -1146883;

    t77 = (x345-((x346%x347)|x348));

    if (t77 != -9255711) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x349 = 7;
	uint16_t x351 = UINT16_MAX;
	volatile int32_t t78 = -13799527;

    t78 = (x349-((x350%x351)|x352));

    if (t78 != 2136) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x355 = UINT8_MAX;
	int32_t x356 = INT32_MAX;
	volatile int64_t t79 = 6242472004LL;

    t79 = (x353-((x354%x355)|x356));

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x357 = -1;
	int32_t x359 = 466;
	int32_t x360 = INT32_MIN;
	volatile uint32_t t80 = 60405795U;

    t80 = (x357-((x358%x359)|x360));

    if (t80 != 2147483326U) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x361 = INT32_MIN;
	static int16_t x362 = -1;
	int16_t x363 = 2;
	static volatile int16_t x364 = INT16_MIN;

    t81 = (x361-((x362%x363)|x364));

    if (t81 != -2147483647) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint64_t x366 = 177LLU;
	static int8_t x367 = 34;

    t82 = (x365-((x366%x367)|x368));

    if (t82 != 18446744069414551553LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x369 = 35941081565371419LL;
	int64_t x370 = INT64_MIN;

    t83 = (x369-((x370%x371)|x372));

    if (t83 != 35941081565371390LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint64_t x373 = 3LLU;
	uint8_t x374 = 44U;
	static uint32_t x375 = 12900608U;
	static int32_t x376 = 23232031;
	volatile uint64_t t84 = 298639580700668LLU;

    t84 = (x373-((x374%x375)|x376));

    if (t84 != 18446744073686319556LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x377 = -1LL;
	static int32_t x379 = INT32_MIN;
	static volatile uint16_t x380 = 0U;
	volatile int64_t t85 = 248LL;

    t85 = (x377-((x378%x379)|x380));

    if (t85 != -70LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x381 = 5364U;
	uint8_t x382 = UINT8_MAX;
	int64_t x383 = INT64_MIN;
	volatile int64_t t86 = -13LL;

    t86 = (x381-((x382%x383)|x384));

    if (t86 != 5109LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x385 = INT8_MIN;
	static volatile int64_t x386 = INT64_MIN;
	volatile int32_t x387 = INT32_MIN;
	uint16_t x388 = 1U;
	int64_t t87 = -228429LL;

    t87 = (x385-((x386%x387)|x388));

    if (t87 != -129LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x389 = 4682536U;
	volatile int64_t x390 = 2176381973403LL;
	uint8_t x392 = 30U;
	static volatile int64_t t88 = 64385723036LL;

    t88 = (x389-((x390%x391)|x392));

    if (t88 != 4652937LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile int32_t x395 = 2032883;
	static uint8_t x396 = UINT8_MAX;
	volatile int32_t t89 = 3718789;

    t89 = (x393-((x394%x395)|x396));

    if (t89 != -65535) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint64_t x397 = UINT64_MAX;
	int32_t x398 = INT32_MIN;
	static uint64_t t90 = 359701519900LLU;

    t90 = (x397-((x398%x399)|x400));

    if (t90 != 2147483647LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x401 = INT8_MIN;
	uint64_t x402 = 1102190172409502899LLU;
	static int64_t x403 = -13015LL;

    t91 = (x401-((x402%x403)|x404));

    if (t91 != 16525LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x405 = INT32_MIN;
	uint64_t x406 = 1269366911LLU;
	uint16_t x407 = 19U;
	static uint64_t t92 = 132813170755681LLU;

    t92 = (x405-((x406%x407)|x408));

    if (t92 != 18424199407396206033LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x410 = INT8_MIN;
	int8_t x412 = INT8_MAX;

    t93 = (x409-((x410%x411)|x412));

    if (t93 != -127LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x413 = 106884U;
	volatile int16_t x415 = -3808;
	uint16_t x416 = 31U;
	volatile uint32_t t94 = 7732U;

    t94 = (x413-((x414%x415)|x416));

    if (t94 != 106789U) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x425 = INT32_MIN;
	volatile int32_t x426 = INT32_MAX;
	int8_t x428 = INT8_MIN;

    t95 = (x425-((x426%x427)|x428));

    if (t95 != -2147483647LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x433 = 1166063455U;
	int8_t x434 = INT8_MIN;
	volatile uint64_t x435 = 767823845633415129LLU;
	volatile uint8_t x436 = 7U;
	volatile uint64_t t96 = 73305546189950LLU;

    t96 = (x433-((x434%x435)|x436));

    if (t96 != 18427772296368026672LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x437 = -1;
	static int32_t x438 = -27784;
	uint16_t x439 = 769U;
	int16_t x440 = -96;
	int32_t t97 = -1618;

    t97 = (x437-((x438%x439)|x440));

    if (t97 != 67) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint32_t x441 = UINT32_MAX;
	volatile int16_t x442 = -40;
	int8_t x443 = INT8_MIN;
	int64_t t98 = 30277303948235171LL;

    t98 = (x441-((x442%x443)|x444));

    if (t98 != 4294967300LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x445 = INT32_MIN;
	static int8_t x446 = INT8_MIN;
	int32_t x448 = -1185;
	int32_t t99 = 6328;

    t99 = (x445-((x446%x447)|x448));

    if (t99 != -2147483647) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x449 = INT8_MAX;
	int64_t x450 = 3312105071450314093LL;
	static volatile int8_t x451 = INT8_MIN;
	int16_t x452 = -1;
	volatile int64_t t100 = 240LL;

    t100 = (x449-((x450%x451)|x452));

    if (t100 != 128LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x453 = 2;
	int16_t x454 = INT16_MIN;
	volatile int64_t x455 = INT64_MIN;
	volatile uint8_t x456 = UINT8_MAX;
	int64_t t101 = -1754LL;

    t101 = (x453-((x454%x455)|x456));

    if (t101 != 32515LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x457 = -13;
	int32_t x458 = -1;
	static uint32_t x459 = 1U;

    t102 = (x457-((x458%x459)|x460));

    if (t102 != 9223372036854775795LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x461 = 1;
	static int64_t x462 = 2128158486LL;
	uint32_t x463 = 341U;
	int32_t x464 = INT32_MIN;
	int64_t t103 = 2492213642551892LL;

    t103 = (x461-((x462%x463)|x464));

    if (t103 != 2147483316LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x465 = -1;
	volatile uint32_t x466 = 358U;

    t104 = (x465-((x466%x467)|x468));

    if (t104 != 2147483543U) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x469 = UINT32_MAX;
	static uint16_t x471 = UINT16_MAX;
	int16_t x472 = INT16_MIN;
	int64_t t105 = -1LL;

    t105 = (x469-((x470%x471)|x472));

    if (t105 != 4294967296LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static int8_t x473 = INT8_MIN;
	uint8_t x474 = UINT8_MAX;
	int8_t x475 = -1;
	int64_t t106 = -247337363306299LL;

    t106 = (x473-((x474%x475)|x476));

    if (t106 != -5387938176LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x477 = -1;
	int16_t x478 = INT16_MIN;
	int8_t x480 = -3;

    t107 = (x477-((x478%x479)|x480));

    if (t107 != 2) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint64_t x481 = 0LLU;
	static int8_t x482 = INT8_MAX;
	int64_t x484 = INT64_MIN;

    t108 = (x481-((x482%x483)|x484));

    if (t108 != 9223372036854775681LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x486 = 0;
	static volatile int32_t x488 = INT32_MAX;
	int32_t t109 = -3149;

    t109 = (x485-((x486%x487)|x488));

    if (t109 != -2147483646) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x489 = INT16_MIN;
	volatile int32_t x491 = 978;
	uint8_t x492 = UINT8_MAX;
	volatile int64_t t110 = 8874026LL;

    t110 = (x489-((x490%x491)|x492));

    if (t110 != -32767LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x493 = -1671;
	int32_t x494 = INT32_MIN;
	volatile int16_t x496 = -1;

    t111 = (x493-((x494%x495)|x496));

    if (t111 != 4294965626U) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile uint8_t x497 = 5U;
	int16_t x498 = INT16_MIN;
	volatile int16_t x499 = -1;
	int16_t x500 = INT16_MAX;
	volatile int32_t t112 = 111734;

    t112 = (x497-((x498%x499)|x500));

    if (t112 != -32762) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x501 = UINT16_MAX;
	int32_t t113 = 930069145;

    t113 = (x501-((x502%x503)|x504));

    if (t113 != 65538) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint32_t x506 = 5739U;
	uint32_t x507 = 115414727U;
	int64_t x508 = -3269123999LL;
	volatile int64_t t114 = 8LL;

    t114 = (x505-((x506%x507)|x508));

    if (t114 != 5416602004LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x509 = -1;
	uint8_t x510 = UINT8_MAX;
	volatile uint32_t x511 = 81U;
	volatile int32_t x512 = 2048344;
	uint32_t t115 = 100152U;

    t115 = (x509-((x510%x511)|x512));

    if (t115 != 4292918947U) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x513 = INT16_MIN;
	static int8_t x514 = INT8_MAX;
	static uint16_t x515 = UINT16_MAX;
	volatile int32_t t116 = 1238194;

    t116 = (x513-((x514%x515)|x516));

    if (t116 != -98303) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x517 = INT32_MAX;
	uint64_t x518 = 106635959LLU;
	int16_t x519 = INT16_MIN;
	static uint64_t t117 = 38651LLU;

    t117 = (x517-((x518%x519)|x520));

    if (t117 != 4188331336LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x521 = UINT8_MAX;
	int16_t x522 = -1;
	int32_t x523 = 128928;
	volatile int8_t x524 = -1;
	int32_t t118 = 960419;

    t118 = (x521-((x522%x523)|x524));

    if (t118 != 256) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x526 = -4341555LL;
	int32_t x527 = INT32_MIN;
	static volatile int64_t t119 = 947968906LL;

    t119 = (x525-((x526%x527)|x528));

    if (t119 != 4341579LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint8_t x529 = UINT8_MAX;
	static int32_t x530 = INT32_MAX;
	int8_t x531 = INT8_MIN;
	static uint8_t x532 = 3U;

    t120 = (x529-((x530%x531)|x532));

    if (t120 != 128) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x534 = UINT64_MAX;
	int8_t x535 = -1;
	int16_t x536 = -10;

    t121 = (x533-((x534%x535)|x536));

    if (t121 != 10LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x538 = UINT32_MAX;
	int64_t x539 = INT64_MIN;
	int16_t x540 = INT16_MIN;

    t122 = (x537-((x538%x539)|x540));

    if (t122 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x541 = INT16_MIN;
	int8_t x542 = -44;
	volatile int32_t x544 = -1;

    t123 = (x541-((x542%x543)|x544));

    if (t123 != -32767) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x545 = INT16_MIN;
	int16_t x547 = -1;
	uint64_t x548 = 83420903561898864LLU;
	volatile uint64_t t124 = 901328LLU;

    t124 = (x545-((x546%x547)|x548));

    if (t124 != 18363323170147619984LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x550 = INT16_MIN;
	int64_t x551 = INT64_MAX;
	int8_t x552 = INT8_MIN;
	volatile int64_t t125 = -1108664482692416LL;

    t125 = (x549-((x550%x551)|x552));

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint64_t t126 = 31931575171226LLU;

    t126 = (x553-((x554%x555)|x556));

    if (t126 != 32767LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x557 = INT64_MIN;
	static int8_t x558 = 1;
	volatile int16_t x559 = INT16_MIN;
	int64_t x560 = INT64_MIN;
	volatile int64_t t127 = 91702630399LL;

    t127 = (x557-((x558%x559)|x560));

    if (t127 != -1LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint64_t x561 = 505939415LLU;
	uint8_t x562 = 1U;
	int32_t x563 = -1;
	uint64_t t128 = 35LLU;

    t128 = (x561-((x562%x563)|x564));

    if (t128 != 505939416LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x565 = -1;
	uint64_t x566 = 34953268LLU;
	static volatile int64_t x567 = -227934866462153115LL;
	static volatile uint64_t t129 = 455026343LLU;

    t129 = (x565-((x566%x567)|x568));

    if (t129 != 18446744073674598345LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x569 = INT16_MAX;
	uint16_t x571 = UINT16_MAX;
	int32_t x572 = INT32_MAX;
	int32_t t130 = 0;

    t130 = (x569-((x570%x571)|x572));

    if (t130 != -2147450880) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x573 = -1;
	static volatile int64_t x574 = -4LL;
	volatile int16_t x575 = INT16_MIN;
	static volatile int32_t x576 = -1;
	int64_t t131 = -74068279260LL;

    t131 = (x573-((x574%x575)|x576));

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x577 = -1LL;
	int32_t x578 = -527517738;
	int64_t x579 = INT64_MIN;
	int64_t t132 = -326948257LL;

    t132 = (x577-((x578%x579)|x580));

    if (t132 != 527517737LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int8_t x581 = -4;
	uint16_t x582 = 29U;
	int64_t x583 = INT64_MIN;
	uint64_t x584 = 2580LLU;
	volatile uint64_t t133 = 1744684647033677LLU;

    t133 = (x581-((x582%x583)|x584));

    if (t133 != 18446744073709549023LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x593 = 52;
	int16_t x594 = -1030;
	volatile int32_t x595 = -111651872;
	int32_t t134 = -1178;

    t134 = (x593-((x594%x595)|x596));

    if (t134 != 53) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x597 = 377U;
	int16_t x598 = -1;
	uint32_t x599 = 27U;
	int64_t x600 = INT64_MAX;

    t135 = (x597-((x598%x599)|x600));

    if (t135 != -9223372036854775430LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x601 = 37122043U;
	int8_t x602 = INT8_MIN;
	uint8_t x604 = UINT8_MAX;
	int64_t t136 = -15610108186LL;

    t136 = (x601-((x602%x603)|x604));

    if (t136 != 37122044LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x606 = 46280136;
	uint16_t x607 = UINT16_MAX;
	int64_t x608 = INT64_MIN;
	volatile int64_t t137 = 1LL;

    t137 = (x605-((x606%x607)|x608));

    if (t137 != 9223372036854763381LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile int16_t x609 = -1;
	static volatile uint16_t x611 = 5U;
	volatile int64_t t138 = 2730LL;

    t138 = (x609-((x610%x611)|x612));

    if (t138 != -128LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x613 = -16;
	static int64_t x614 = -1LL;
	volatile uint32_t x615 = 15U;
	int8_t x616 = INT8_MIN;
	int64_t t139 = 7853899382716602LL;

    t139 = (x613-((x614%x615)|x616));

    if (t139 != -15LL) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint32_t x617 = 14447U;
	int16_t x618 = INT16_MIN;
	uint32_t x620 = 61137648U;
	volatile uint32_t t140 = 1U;

    t140 = (x617-((x618%x619)|x620));

    if (t140 != 21887U) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int64_t x621 = -26037022105731LL;
	static volatile uint32_t x622 = 115U;
	volatile int16_t x624 = INT16_MAX;
	int64_t t141 = 1LL;

    t141 = (x621-((x622%x623)|x624));

    if (t141 != -26037022138498LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x625 = -1LL;
	uint64_t x626 = 15LLU;
	uint64_t x628 = 1LLU;
	volatile uint64_t t142 = 32LLU;

    t142 = (x625-((x626%x627)|x628));

    if (t142 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x629 = INT16_MIN;
	uint32_t x630 = UINT32_MAX;
	int16_t x632 = -11;

    t143 = (x629-((x630%x631)|x632));

    if (t143 != 4294934537U) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint16_t x633 = 1044U;
	uint8_t x634 = UINT8_MAX;
	uint32_t x635 = 10116374U;
	uint64_t x636 = UINT64_MAX;
	static volatile uint64_t t144 = 1006LLU;

    t144 = (x633-((x634%x635)|x636));

    if (t144 != 1045LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x638 = UINT8_MAX;
	int8_t x639 = INT8_MIN;
	static volatile int16_t x640 = -1;

    t145 = (x637-((x638%x639)|x640));

    if (t145 != -2147483647) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x641 = INT8_MIN;
	static uint32_t x642 = 14744987U;
	int8_t x643 = INT8_MAX;
	int8_t x644 = INT8_MIN;
	uint32_t t146 = 7685U;

    t146 = (x641-((x642%x643)|x644));

    if (t146 != 4294967263U) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x645 = -56;
	int64_t x646 = INT64_MAX;
	volatile uint8_t x648 = 0U;

    t147 = (x645-((x646%x647)|x648));

    if (t147 != -59LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x649 = 0;
	static uint32_t x650 = UINT32_MAX;
	static uint64_t x652 = 1LLU;

    t148 = (x649-((x650%x651)|x652));

    if (t148 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x653 = INT16_MIN;
	static uint16_t x654 = UINT16_MAX;
	uint64_t x655 = 243375987694349536LLU;
	static uint32_t x656 = UINT32_MAX;
	volatile uint64_t t149 = 6917LLU;

    t149 = (x653-((x654%x655)|x656));

    if (t149 != 18446744069414551553LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x657 = INT32_MIN;
	int64_t x658 = 4358587796675885811LL;
	int16_t x659 = INT16_MIN;
	uint32_t x660 = 1916U;
	static int64_t t150 = 250008LL;

    t150 = (x657-((x658%x659)|x660));

    if (t150 != -2147516415LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x666 = -1;
	static uint8_t x667 = UINT8_MAX;
	uint32_t x668 = 1421U;
	uint32_t t151 = 18039U;

    t151 = (x665-((x666%x667)|x668));

    if (t151 != 4289759056U) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x670 = -73687951;
	int64_t x671 = INT64_MIN;
	int32_t x672 = INT32_MAX;

    t152 = (x669-((x670%x671)|x672));

    if (t152 != -127LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x673 = UINT16_MAX;
	int16_t x675 = INT16_MIN;
	static uint8_t x676 = UINT8_MAX;
	volatile int32_t t153 = -12466;

    t153 = (x673-((x674%x675)|x676));

    if (t153 != 65280) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint8_t x677 = 2U;
	uint16_t x678 = UINT16_MAX;
	int64_t x679 = 114LL;
	static int16_t x680 = -1;

    t154 = (x677-((x678%x679)|x680));

    if (t154 != 3LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int64_t x681 = 24LL;
	volatile uint64_t x682 = 435057084022722208LLU;
	volatile uint8_t x683 = UINT8_MAX;

    t155 = (x681-((x682%x683)|x684));

    if (t155 != 97149059LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x685 = -1LL;
	static uint64_t x686 = UINT64_MAX;
	static volatile uint16_t x687 = 3152U;

    t156 = (x685-((x686%x687)|x688));

    if (t156 != 858670658821650464LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x689 = INT32_MIN;
	int64_t x692 = -1LL;

    t157 = (x689-((x690%x691)|x692));

    if (t157 != -2147483647LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x693 = -1;
	static int16_t x696 = INT16_MAX;
	volatile int32_t t158 = 0;

    t158 = (x693-((x694%x695)|x696));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x697 = -1;
	int64_t x698 = -84760751127946108LL;
	int32_t x700 = INT32_MIN;
	static volatile int64_t t159 = -435419550145450455LL;

    t159 = (x697-((x698%x699)|x700));

    if (t159 != 1038115707LL) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x701 = -1;
	static int64_t x702 = INT64_MIN;
	uint32_t x703 = 1U;
	volatile int16_t x704 = 923;

    t160 = (x701-((x702%x703)|x704));

    if (t160 != -924LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x705 = 119;
	volatile int16_t x706 = INT16_MAX;
	static uint16_t x708 = 3561U;
	int32_t t161 = -31955;

    t161 = (x705-((x706%x707)|x708));

    if (t161 != -3448) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x709 = 1;
	volatile uint16_t x710 = 738U;
	static int32_t x712 = INT32_MAX;
	volatile int32_t t162 = -325372548;

    t162 = (x709-((x710%x711)|x712));

    if (t162 != -2147483646) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int8_t x713 = INT8_MIN;
	volatile uint64_t x714 = 18487LLU;
	uint32_t x715 = 7692672U;
	int32_t x716 = INT32_MIN;
	uint64_t t163 = 2489LLU;

    t163 = (x713-((x714%x715)|x716));

    if (t163 != 2147465033LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x717 = 47043LLU;
	uint64_t x718 = 21016081217LLU;
	uint64_t x719 = 59509298298LLU;
	static int8_t x720 = 1;
	volatile uint64_t t164 = 618LLU;

    t164 = (x717-((x718%x719)|x720));

    if (t164 != 18446744052693517442LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x722 = -4;
	int32_t x723 = INT32_MIN;
	volatile int8_t x724 = -3;
	int32_t t165 = 31;

    t165 = (x721-((x722%x723)|x724));

    if (t165 != 4911) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x725 = -1;
	int16_t x726 = INT16_MAX;
	int64_t x727 = INT64_MAX;
	int64_t x728 = 127808895LL;

    t166 = (x725-((x726%x727)|x728));

    if (t166 != -127827968LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x729 = -1;
	uint64_t x730 = 702342351247107LLU;
	int32_t x731 = -282;
	volatile int32_t x732 = -211695026;
	uint64_t t167 = 13770260869LLU;

    t167 = (x729-((x730%x731)|x732));

    if (t167 != 209985712LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	static int16_t x733 = INT16_MIN;
	static int32_t x734 = INT32_MIN;
	volatile int16_t x735 = -1;
	int8_t x736 = 3;

    t168 = (x733-((x734%x735)|x736));

    if (t168 != -32771) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x737 = 1592653820110LL;
	static uint32_t x739 = 296846652U;
	int64_t x740 = -1LL;
	volatile int64_t t169 = -264317951886340167LL;

    t169 = (x737-((x738%x739)|x740));

    if (t169 != 1592653820111LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static int64_t x742 = INT64_MAX;
	static int32_t x743 = INT32_MIN;
	int32_t x744 = INT32_MIN;
	static volatile int64_t t170 = 895LL;

    t170 = (x741-((x742%x743)|x744));

    if (t170 != -127LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x745 = 1U;
	static int32_t x746 = 3;
	int8_t x747 = INT8_MIN;
	volatile int32_t t171 = -126899;

    t171 = (x745-((x746%x747)|x748));

    if (t171 != -502) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint16_t x750 = UINT16_MAX;
	int16_t x751 = -1;
	static uint64_t x752 = UINT64_MAX;

    t172 = (x749-((x750%x751)|x752));

    if (t172 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x753 = 800;
	int32_t x754 = -1;
	int8_t x755 = 13;

    t173 = (x753-((x754%x755)|x756));

    if (t173 != 801) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x761 = -1;
	int64_t x762 = INT64_MAX;
	volatile int16_t x763 = INT16_MAX;
	volatile int64_t t174 = -2LL;

    t174 = (x761-((x762%x763)|x764));

    if (t174 != 8LL) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t x766 = INT64_MIN;
	static int32_t x767 = -1;
	uint64_t x768 = 888880912915LLU;
	uint64_t t175 = 710900LLU;

    t175 = (x765-((x766%x767)|x768));

    if (t175 != 18446743184828638701LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x770 = 338476132U;
	int64_t x771 = INT64_MIN;
	int64_t t176 = -37818LL;

    t176 = (x769-((x770%x771)|x772));

    if (t176 != 17738LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x773 = -27;
	uint16_t x775 = 1057U;
	int64_t x776 = -1LL;
	volatile int64_t t177 = 761199634648LL;

    t177 = (x773-((x774%x775)|x776));

    if (t177 != -26LL) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint8_t x777 = 17U;
	static int64_t x778 = INT64_MIN;
	uint64_t x780 = 1950LLU;
	static volatile uint64_t t178 = 456189205LLU;

    t178 = (x777-((x778%x779)|x780));

    if (t178 != 18446744073709549683LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x785 = INT16_MAX;
	uint32_t x786 = 21086U;
	static volatile int8_t x787 = INT8_MIN;
	uint8_t x788 = UINT8_MAX;
	volatile uint32_t t179 = 6U;

    t179 = (x785-((x786%x787)|x788));

    if (t179 != 11520U) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint8_t x790 = 117U;
	static volatile int8_t x792 = -1;

    t180 = (x789-((x790%x791)|x792));

    if (t180 != -246LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x793 = 3095421;
	uint8_t x794 = UINT8_MAX;
	uint64_t x795 = UINT64_MAX;
	volatile uint64_t t181 = 170LLU;

    t181 = (x793-((x794%x795)|x796));

    if (t181 != 3095422LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x801 = INT16_MAX;
	int64_t x802 = INT64_MIN;
	int32_t x803 = INT32_MIN;
	static volatile int64_t t182 = -436108852LL;

    t182 = (x801-((x802%x803)|x804));

    if (t182 != 65535LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x805 = INT8_MAX;
	volatile int16_t x806 = INT16_MIN;
	static uint16_t x807 = 394U;
	uint16_t x808 = UINT16_MAX;
	int32_t t183 = -52545;

    t183 = (x805-((x806%x807)|x808));

    if (t183 != 128) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint16_t x809 = UINT16_MAX;
	static volatile uint64_t t184 = 147084998338503355LLU;

    t184 = (x809-((x810%x811)|x812));

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x813 = INT16_MAX;
	static int8_t x814 = -2;
	static volatile uint8_t x815 = 49U;
	volatile uint64_t x816 = 6LLU;
	volatile uint64_t t185 = 311LLU;

    t185 = (x813-((x814%x815)|x816));

    if (t185 != 32769LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x817 = INT8_MIN;
	uint8_t x818 = 1U;
	static volatile int16_t x819 = INT16_MIN;
	int32_t t186 = -804895;

    t186 = (x817-((x818%x819)|x820));

    if (t186 != -127) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x821 = 25U;
	static uint64_t x823 = 668LLU;
	static volatile uint64_t x824 = 35166937713716760LLU;
	volatile uint64_t t187 = 732864041791646LLU;

    t187 = (x821-((x822%x823)|x824));

    if (t187 != 18411577135995834682LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x825 = -1870;
	int64_t x826 = 118LL;
	int16_t x827 = INT16_MAX;
	volatile int32_t x828 = INT32_MAX;
	volatile int64_t t188 = 1261422562916323440LL;

    t188 = (x825-((x826%x827)|x828));

    if (t188 != -2147485517LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile uint16_t x829 = 2U;
	int64_t x830 = 2480LL;
	static uint16_t x832 = 426U;
	volatile int64_t t189 = -33228121397LL;

    t189 = (x829-((x830%x831)|x832));

    if (t189 != -424LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int16_t x833 = INT16_MAX;
	int32_t x834 = -12387;
	volatile int32_t t190 = -16;

    t190 = (x833-((x834%x835)|x836));

    if (t190 != 32769) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x841 = INT16_MAX;
	volatile uint8_t x842 = 54U;
	static volatile int8_t x843 = 5;
	uint64_t x844 = 84357839303917479LLU;
	volatile uint64_t t191 = 1247440007989610LLU;

    t191 = (x841-((x842%x843)|x844));

    if (t191 != 18362386234405666904LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x845 = INT32_MIN;
	int32_t x847 = -1;
	int64_t x848 = 23656265268928237LL;

    t192 = (x845-((x846%x847)|x848));

    if (t192 != -23656267416411885LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x849 = INT32_MAX;
	int8_t x850 = INT8_MAX;
	volatile int64_t x851 = INT64_MIN;
	int64_t t193 = -607462295931LL;

    t193 = (x849-((x850%x851)|x852));

    if (t193 != 2147483648LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x853 = -607;
	int16_t x856 = -1;
	volatile int64_t t194 = -454459LL;

    t194 = (x853-((x854%x855)|x856));

    if (t194 != -606LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x858 = INT8_MIN;
	volatile int16_t x859 = 12949;
	static int64_t x860 = INT64_MIN;
	int64_t t195 = -134373883099LL;

    t195 = (x857-((x858%x859)|x860));

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x861 = INT8_MAX;
	uint64_t x863 = 22221LLU;
	int64_t x864 = -7LL;

    t196 = (x861-((x862%x863)|x864));

    if (t196 != 132LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x865 = -59876836314LL;
	uint32_t x866 = 1U;
	volatile int16_t x868 = INT16_MIN;
	static int64_t t197 = -78596883970498827LL;

    t197 = (x865-((x866%x867)|x868));

    if (t197 != -64171770843LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x869 = -1;
	volatile int8_t x871 = -1;
	int32_t x872 = INT32_MAX;
	static int32_t t198 = INT32_MIN;

    t198 = (x869-((x870%x871)|x872));

    if (t198 != INT32_MIN) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x873 = -1;
	int64_t x874 = -8730660405866LL;
	int8_t x876 = INT8_MIN;

    t199 = (x873-((x874%x875)|x876));

    if (t199 != 105LL) { NG(); } else { ; }
	
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

