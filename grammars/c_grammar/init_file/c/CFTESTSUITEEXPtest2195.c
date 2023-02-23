
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

static int8_t x2 = 12;
int32_t x180 = -1;
uint16_t x211 = 59U;
int64_t x212 = -14950044908LL;
int32_t t5 = -176;
int16_t x252 = -1;
int16_t x405 = INT16_MAX;
int16_t x406 = 7;
volatile int32_t t11 = 125408490;
uint16_t x457 = UINT16_MAX;
int64_t x459 = 1LL;
int32_t t13 = 8120;
int64_t x470 = INT64_MIN;
volatile int32_t t16 = -1;
int32_t x551 = INT32_MIN;
uint32_t x575 = UINT32_MAX;
static uint16_t x581 = UINT16_MAX;
uint64_t x584 = UINT64_MAX;
int32_t t19 = 1;
static int32_t x586 = INT32_MIN;
volatile int8_t x587 = 14;
uint32_t x588 = 7197900U;
static volatile int32_t x595 = INT32_MAX;
uint8_t x596 = 8U;
int64_t t22 = INT64_MAX;
volatile uint32_t t23 = 6U;
volatile int32_t t24 = -1;
int8_t x658 = 1;
int32_t x661 = INT32_MAX;
uint32_t x664 = 25308022U;
uint16_t x778 = UINT16_MAX;
int32_t x779 = INT32_MIN;
uint8_t x807 = UINT8_MAX;
uint32_t x846 = UINT32_MAX;
uint32_t x847 = UINT32_MAX;
volatile int32_t x916 = -103;
uint64_t x1016 = 768164508622LLU;
volatile int32_t t40 = -59608;
int32_t t42 = -6774978;
int64_t x1107 = INT64_MIN;
uint16_t x1170 = 25U;
int32_t x1171 = INT32_MIN;
volatile uint64_t x1222 = 30926382433104428LLU;
int16_t x1242 = INT16_MIN;
static volatile int32_t t50 = 4;
uint32_t x1313 = 4U;
uint64_t x1314 = 20209171755467LLU;
int64_t x1315 = INT64_MIN;
volatile uint32_t t52 = 69153U;
uint64_t x1317 = 5281032889337LLU;
uint16_t x1335 = 46U;
int8_t x1336 = 2;
static int32_t x1382 = -1;
uint64_t x1402 = 10399692227LLU;
volatile uint8_t x1403 = 16U;
int64_t x1467 = INT64_MIN;
int32_t x1500 = INT32_MIN;
uint8_t x1573 = 5U;
int64_t x1582 = INT64_MAX;
static uint64_t x1584 = 6447LLU;
volatile int8_t x1625 = INT8_MAX;
int8_t x1628 = 4;
int8_t x1642 = INT8_MIN;
volatile int32_t t65 = 202;
volatile int8_t x1667 = INT8_MIN;
int16_t x1670 = INT16_MIN;
uint32_t x1678 = 0U;
int32_t x1679 = INT32_MIN;
static int8_t x1694 = 1;
static int32_t t69 = 89381;
uint64_t x1697 = 1169492102107889940LLU;
uint16_t x1700 = 119U;
uint32_t x1885 = 130181600U;
uint8_t x1922 = 0U;
static volatile int8_t x1958 = 0;
volatile int32_t t78 = 15138;
int64_t x1971 = INT64_MIN;
int32_t x2026 = INT32_MAX;
int8_t x2059 = -1;
volatile uint32_t x2060 = UINT32_MAX;
static uint16_t x2135 = 0U;
static uint16_t x2154 = 3U;
int16_t x2190 = INT16_MIN;
static int8_t x2192 = INT8_MIN;
uint64_t t87 = UINT64_MAX;
uint32_t x2391 = 845624521U;
int32_t x2392 = INT32_MAX;
volatile int32_t t88 = -1;
int8_t x2431 = -1;
volatile int64_t t91 = 114368669810688LL;
volatile int32_t t93 = -3;
uint32_t x2525 = UINT32_MAX;
volatile int32_t x2526 = INT32_MIN;
static uint32_t t95 = UINT32_MAX;
int64_t x2684 = INT64_MIN;
uint64_t t97 = 196783385687091LLU;
volatile int32_t x2715 = -716188264;
int32_t t98 = INT32_MAX;
int8_t x2767 = -1;
uint32_t x2768 = 590U;
int64_t x2857 = 1754505376LL;
int16_t x2859 = 4;
int16_t x2882 = 10;
volatile uint64_t t103 = UINT64_MAX;
uint16_t x2897 = 5U;
int16_t x2936 = -1;
static uint16_t x2944 = 3U;
static volatile int32_t t107 = INT32_MAX;
int8_t x3095 = -1;
static uint8_t x3111 = 5U;
uint64_t t113 = 0LLU;
volatile int8_t x3123 = INT8_MIN;
int8_t x3222 = INT8_MIN;
int8_t x3250 = INT8_MAX;
int8_t x3252 = -4;
int32_t x3258 = 214;
int32_t x3259 = INT32_MIN;
int64_t x3284 = 965582522727LL;
volatile int32_t t120 = -29;
uint8_t x3299 = 1U;
volatile uint32_t t121 = 52777U;
static volatile uint32_t t122 = 1426U;
uint16_t x3396 = UINT16_MAX;
uint64_t x3431 = UINT64_MAX;
int32_t x3452 = 31;
volatile int32_t x3495 = -1;
static int16_t x3496 = -1;
uint8_t x3648 = 0U;
int64_t x3676 = INT64_MAX;
int32_t x3810 = 1;
uint32_t x3812 = 0U;
volatile uint32_t t135 = 43213141U;
int8_t x3819 = 1;
int16_t x3820 = INT16_MIN;
static uint64_t x3917 = UINT64_MAX;
static int64_t x3919 = 53081603LL;
static uint32_t t139 = 51U;
static int32_t t140 = 33;
int32_t x4078 = INT32_MIN;
int32_t t143 = -3555;
int32_t x4146 = INT32_MIN;
uint64_t t146 = 472778126LLU;
int64_t x4151 = INT64_MIN;
volatile int64_t t148 = -409256324088203042LL;
int8_t x4206 = -1;
volatile int32_t t150 = -96079;
uint8_t x4253 = UINT8_MAX;
int8_t x4254 = -1;
int32_t t151 = 1716142;
volatile int32_t t152 = -874;
uint64_t x4333 = UINT64_MAX;
int8_t x4335 = 15;
volatile uint8_t x4353 = UINT8_MAX;
static volatile uint8_t x4354 = 1U;
uint16_t x4355 = 384U;
static int16_t x4356 = INT16_MIN;
volatile uint64_t t155 = 2384129100655986359LLU;
volatile int64_t x4422 = -206LL;
volatile int16_t x4451 = INT16_MIN;
static volatile int32_t t158 = -58432955;
uint16_t x4503 = 0U;
int32_t x4557 = INT32_MAX;
static int64_t x4558 = -1LL;
int64_t x4560 = INT64_MIN;
uint32_t x4577 = 10U;
volatile uint64_t x4612 = UINT64_MAX;
uint32_t t165 = 1U;
uint64_t x4637 = 990631LLU;
volatile int64_t x4702 = INT64_MIN;
uint16_t x4719 = 1U;
int64_t x4737 = INT64_MAX;
static int32_t x4907 = INT32_MAX;
volatile int64_t t177 = INT64_MAX;
uint64_t x5013 = 1269170197578LLU;
int8_t x5016 = INT8_MIN;
volatile int32_t t180 = -2;
uint16_t x5051 = 357U;
int16_t x5077 = 43;
static volatile int32_t x5079 = INT32_MIN;
int8_t x5099 = -29;
volatile int32_t t186 = 84;
static int64_t x5252 = INT64_MIN;
static uint64_t x5279 = 2LLU;
volatile int32_t x5284 = INT32_MIN;
uint64_t t196 = 10828603LLU;
static int64_t x5424 = INT64_MIN;
int16_t x5434 = INT16_MIN;


void f0(void) {
    	uint32_t x1 = UINT32_MAX;
	uint64_t x3 = 913LLU;
	int8_t x4 = INT8_MAX;
	volatile uint32_t t0 = UINT32_MAX;

    t0 = (x1>>((x2&x3)*x4));

    if (t0 != UINT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint8_t x85 = 1U;
	int8_t x86 = INT8_MAX;
	static int8_t x87 = INT8_MIN;
	int16_t x88 = -140;
	volatile int32_t t1 = -869;

    t1 = (x85>>((x86&x87)*x88));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x141 = 8363050374278LLU;
	int64_t x142 = INT64_MIN;
	int32_t x143 = INT32_MAX;
	uint32_t x144 = 2406U;
	volatile uint64_t t2 = 1LLU;

    t2 = (x141>>((x142&x143)*x144));

    if (t2 != 8363050374278LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x157 = 199090LLU;
	uint32_t x158 = 80479U;
	int32_t x159 = INT32_MIN;
	uint64_t x160 = UINT64_MAX;
	uint64_t t3 = 11063682202393504LLU;

    t3 = (x157>>((x158&x159)*x160));

    if (t3 != 199090LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint32_t x177 = UINT32_MAX;
	int64_t x178 = INT64_MIN;
	uint16_t x179 = 27616U;
	volatile uint32_t t4 = UINT32_MAX;

    t4 = (x177>>((x178&x179)*x180));

    if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x209 = UINT16_MAX;
	static volatile int32_t x210 = INT32_MIN;

    t5 = (x209>>((x210&x211)*x212));

    if (t5 != 65535) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x221 = INT64_MAX;
	static int32_t x222 = INT32_MAX;
	int32_t x223 = INT32_MIN;
	int16_t x224 = -607;
	volatile int64_t t6 = INT64_MAX;

    t6 = (x221>>((x222&x223)*x224));

    if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint64_t x249 = 16245993160466705LLU;
	static int64_t x250 = INT64_MIN;
	int64_t x251 = INT64_MAX;
	volatile uint64_t t7 = 1990722366LLU;

    t7 = (x249>>((x250&x251)*x252));

    if (t7 != 16245993160466705LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x385 = INT8_MAX;
	int16_t x386 = INT16_MIN;
	uint8_t x387 = 15U;
	int8_t x388 = -1;
	int32_t t8 = -13479684;

    t8 = (x385>>((x386&x387)*x388));

    if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x389 = INT32_MAX;
	int16_t x390 = INT16_MIN;
	static int16_t x391 = INT16_MAX;
	int32_t x392 = INT32_MAX;
	int32_t t9 = INT32_MAX;

    t9 = (x389>>((x390&x391)*x392));

    if (t9 != INT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int64_t x407 = 500647547561728273LL;
	uint16_t x408 = 8U;
	volatile int32_t t10 = -974843;

    t10 = (x405>>((x406&x407)*x408));

    if (t10 != 127) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x445 = 500;
	static volatile uint8_t x446 = 1U;
	int64_t x447 = INT64_MAX;
	uint8_t x448 = 19U;

    t11 = (x445>>((x446&x447)*x448));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int8_t x458 = INT8_MIN;
	int64_t x460 = INT64_MAX;
	int32_t t12 = -250;

    t12 = (x457>>((x458&x459)*x460));

    if (t12 != 65535) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x465 = UINT16_MAX;
	volatile int16_t x466 = -1;
	static volatile int8_t x467 = 0;
	uint16_t x468 = 254U;

    t13 = (x465>>((x466&x467)*x468));

    if (t13 != 65535) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x469 = 1865468U;
	static volatile uint64_t x471 = 53649617312345LLU;
	volatile int32_t x472 = -1951;
	volatile uint32_t t14 = 196410029U;

    t14 = (x469>>((x470&x471)*x472));

    if (t14 != 1865468U) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint8_t x525 = 76U;
	static int8_t x526 = INT8_MAX;
	int16_t x527 = INT16_MIN;
	uint8_t x528 = 4U;
	int32_t t15 = 147908;

    t15 = (x525>>((x526&x527)*x528));

    if (t15 != 76) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint8_t x533 = UINT8_MAX;
	uint16_t x534 = UINT16_MAX;
	static int32_t x535 = -7249132;
	uint32_t x536 = 0U;

    t16 = (x533>>((x534&x535)*x536));

    if (t16 != 255) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x549 = INT16_MAX;
	volatile int32_t x550 = 3964710;
	uint8_t x552 = 20U;
	static volatile int32_t t17 = 525649;

    t17 = (x549>>((x550&x551)*x552));

    if (t17 != 32767) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x573 = 10243659U;
	static int16_t x574 = -1;
	int16_t x576 = -1;
	uint32_t t18 = 1740U;

    t18 = (x573>>((x574&x575)*x576));

    if (t18 != 5121829U) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x582 = INT64_MIN;
	int64_t x583 = INT64_MAX;

    t19 = (x581>>((x582&x583)*x584));

    if (t19 != 65535) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x585 = INT64_MAX;
	volatile int64_t t20 = INT64_MAX;

    t20 = (x585>>((x586&x587)*x588));

    if (t20 != INT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x593 = UINT64_MAX;
	static int64_t x594 = INT64_MIN;
	volatile uint64_t t21 = UINT64_MAX;

    t21 = (x593>>((x594&x595)*x596));

    if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x601 = INT64_MAX;
	int16_t x602 = 0;
	static int16_t x603 = 32;
	int64_t x604 = -1LL;

    t22 = (x601>>((x602&x603)*x604));

    if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint32_t x605 = 5U;
	volatile uint32_t x606 = UINT32_MAX;
	int64_t x607 = INT64_MIN;
	uint32_t x608 = 15642023U;

    t23 = (x605>>((x606&x607)*x608));

    if (t23 != 5U) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x641 = 19U;
	static uint32_t x642 = 49952U;
	uint16_t x643 = 1U;
	volatile int32_t x644 = INT32_MIN;

    t24 = (x641>>((x642&x643)*x644));

    if (t24 != 19) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x657 = 4508U;
	int8_t x659 = 3;
	int8_t x660 = 3;
	uint32_t t25 = 1570139U;

    t25 = (x657>>((x658&x659)*x660));

    if (t25 != 563U) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint16_t x662 = UINT16_MAX;
	int32_t x663 = INT32_MIN;
	static volatile int32_t t26 = INT32_MAX;

    t26 = (x661>>((x662&x663)*x664));

    if (t26 != INT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x669 = 1;
	int32_t x670 = INT32_MIN;
	static uint8_t x671 = 13U;
	uint32_t x672 = 32U;
	int32_t t27 = 890989944;

    t27 = (x669>>((x670&x671)*x672));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x705 = UINT32_MAX;
	int16_t x706 = 0;
	uint16_t x707 = 7U;
	int32_t x708 = 8662;
	volatile uint32_t t28 = UINT32_MAX;

    t28 = (x705>>((x706&x707)*x708));

    if (t28 != UINT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x773 = UINT8_MAX;
	static int32_t x774 = 1;
	static int64_t x775 = INT64_MIN;
	uint32_t x776 = UINT32_MAX;
	int32_t t29 = 1;

    t29 = (x773>>((x774&x775)*x776));

    if (t29 != 255) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint64_t x777 = 0LLU;
	uint16_t x780 = UINT16_MAX;
	volatile uint64_t t30 = 11569777466319LLU;

    t30 = (x777>>((x778&x779)*x780));

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint16_t x785 = 0U;
	int64_t x786 = INT64_MIN;
	static uint8_t x787 = 15U;
	int8_t x788 = -1;
	int32_t t31 = -29454;

    t31 = (x785>>((x786&x787)*x788));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x805 = UINT64_MAX;
	int64_t x806 = INT64_MIN;
	static int64_t x808 = INT64_MIN;
	volatile uint64_t t32 = UINT64_MAX;

    t32 = (x805>>((x806&x807)*x808));

    if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint8_t x813 = 5U;
	uint64_t x814 = UINT64_MAX;
	int32_t x815 = INT32_MIN;
	int8_t x816 = 0;
	int32_t t33 = -198;

    t33 = (x813>>((x814&x815)*x816));

    if (t33 != 5) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x845 = INT16_MAX;
	static uint32_t x848 = 0U;
	int32_t t34 = -3;

    t34 = (x845>>((x846&x847)*x848));

    if (t34 != 32767) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x885 = 0U;
	uint8_t x886 = 50U;
	volatile uint16_t x887 = 4U;
	volatile uint8_t x888 = 9U;
	volatile int32_t t35 = -411388902;

    t35 = (x885>>((x886&x887)*x888));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x913 = INT64_MAX;
	volatile int64_t x914 = INT64_MIN;
	volatile int8_t x915 = 1;
	volatile int64_t t36 = INT64_MAX;

    t36 = (x913>>((x914&x915)*x916));

    if (t36 != INT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x941 = 3U;
	static volatile uint64_t x942 = 1632LLU;
	int8_t x943 = -1;
	int64_t x944 = INT64_MIN;
	static volatile int32_t t37 = 175348751;

    t37 = (x941>>((x942&x943)*x944));

    if (t37 != 3) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x957 = 3971733717157278LL;
	static uint8_t x958 = 126U;
	volatile int16_t x959 = 0;
	static int16_t x960 = INT16_MIN;
	int64_t t38 = 1255411LL;

    t38 = (x957>>((x958&x959)*x960));

    if (t38 != 3971733717157278LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x969 = 1;
	int8_t x970 = 0;
	int8_t x971 = -1;
	static uint64_t x972 = 246287LLU;
	volatile int32_t t39 = 0;

    t39 = (x969>>((x970&x971)*x972));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x1013 = 10880U;
	volatile int64_t x1014 = INT64_MIN;
	uint64_t x1015 = UINT64_MAX;

    t40 = (x1013>>((x1014&x1015)*x1016));

    if (t40 != 10880) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x1025 = INT64_MAX;
	static int8_t x1026 = 0;
	volatile int32_t x1027 = INT32_MIN;
	volatile uint16_t x1028 = 5885U;
	int64_t t41 = INT64_MAX;

    t41 = (x1025>>((x1026&x1027)*x1028));

    if (t41 != INT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint8_t x1033 = 0U;
	static volatile int32_t x1034 = INT32_MAX;
	volatile int64_t x1035 = INT64_MIN;
	int64_t x1036 = 4331003233465917420LL;

    t42 = (x1033>>((x1034&x1035)*x1036));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x1053 = 626;
	uint8_t x1054 = 0U;
	int64_t x1055 = INT64_MAX;
	int64_t x1056 = INT64_MIN;
	static volatile int32_t t43 = -9733084;

    t43 = (x1053>>((x1054&x1055)*x1056));

    if (t43 != 626) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x1105 = INT32_MAX;
	uint32_t x1106 = UINT32_MAX;
	uint16_t x1108 = UINT16_MAX;
	static int32_t t44 = INT32_MAX;

    t44 = (x1105>>((x1106&x1107)*x1108));

    if (t44 != INT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x1165 = 6837730U;
	static int64_t x1166 = INT64_MIN;
	static int64_t x1167 = 56484991546004LL;
	volatile int32_t x1168 = -1;
	volatile uint32_t t45 = 201876931U;

    t45 = (x1165>>((x1166&x1167)*x1168));

    if (t45 != 6837730U) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x1169 = UINT64_MAX;
	static uint64_t x1172 = 46575858269923LLU;
	volatile uint64_t t46 = UINT64_MAX;

    t46 = (x1169>>((x1170&x1171)*x1172));

    if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	static int16_t x1213 = INT16_MAX;
	int64_t x1214 = INT64_MIN;
	uint32_t x1215 = UINT32_MAX;
	volatile int16_t x1216 = INT16_MIN;
	static volatile int32_t t47 = 56888;

    t47 = (x1213>>((x1214&x1215)*x1216));

    if (t47 != 32767) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint8_t x1221 = 15U;
	uint8_t x1223 = 0U;
	uint64_t x1224 = 7691786LLU;
	int32_t t48 = 2;

    t48 = (x1221>>((x1222&x1223)*x1224));

    if (t48 != 15) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int32_t x1229 = INT32_MAX;
	int32_t x1230 = INT32_MIN;
	volatile uint64_t x1231 = 4952LLU;
	uint8_t x1232 = 14U;
	static int32_t t49 = INT32_MAX;

    t49 = (x1229>>((x1230&x1231)*x1232));

    if (t49 != INT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x1241 = 0U;
	int8_t x1243 = -54;
	volatile int16_t x1244 = 0;

    t50 = (x1241>>((x1242&x1243)*x1244));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x1297 = 1;
	volatile uint8_t x1298 = 0U;
	uint64_t x1299 = 2603366LLU;
	int8_t x1300 = INT8_MAX;
	volatile int32_t t51 = -27;

    t51 = (x1297>>((x1298&x1299)*x1300));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x1316 = 25U;

    t52 = (x1313>>((x1314&x1315)*x1316));

    if (t52 != 4U) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x1318 = INT8_MAX;
	uint32_t x1319 = 0U;
	static int32_t x1320 = INT32_MAX;
	uint64_t t53 = 6597540LLU;

    t53 = (x1317>>((x1318&x1319)*x1320));

    if (t53 != 5281032889337LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x1333 = 2U;
	volatile int16_t x1334 = INT16_MIN;
	volatile int32_t t54 = -1;

    t54 = (x1333>>((x1334&x1335)*x1336));

    if (t54 != 2) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x1345 = UINT8_MAX;
	int16_t x1346 = INT16_MIN;
	int8_t x1347 = 2;
	volatile uint64_t x1348 = UINT64_MAX;
	static int32_t t55 = -4;

    t55 = (x1345>>((x1346&x1347)*x1348));

    if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x1381 = INT8_MAX;
	volatile int32_t x1383 = -1;
	int16_t x1384 = -6;
	int32_t t56 = 246518;

    t56 = (x1381>>((x1382&x1383)*x1384));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x1401 = UINT64_MAX;
	uint8_t x1404 = UINT8_MAX;
	uint64_t t57 = UINT64_MAX;

    t57 = (x1401>>((x1402&x1403)*x1404));

    if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint32_t x1449 = UINT32_MAX;
	volatile uint32_t x1450 = 4339293U;
	volatile int32_t x1451 = INT32_MIN;
	int8_t x1452 = -1;
	uint32_t t58 = UINT32_MAX;

    t58 = (x1449>>((x1450&x1451)*x1452));

    if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x1465 = 33229316;
	static int64_t x1466 = 20154LL;
	uint32_t x1468 = 2U;
	int32_t t59 = -5529771;

    t59 = (x1465>>((x1466&x1467)*x1468));

    if (t59 != 33229316) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x1497 = 16;
	int8_t x1498 = 5;
	uint64_t x1499 = 163402205666120LLU;
	int32_t t60 = -255;

    t60 = (x1497>>((x1498&x1499)*x1500));

    if (t60 != 16) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x1541 = UINT16_MAX;
	uint8_t x1542 = 0U;
	static int8_t x1543 = INT8_MIN;
	int32_t x1544 = INT32_MIN;
	int32_t t61 = 91;

    t61 = (x1541>>((x1542&x1543)*x1544));

    if (t61 != 65535) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x1574 = INT8_MIN;
	int64_t x1575 = -780912753002662417LL;
	volatile int8_t x1576 = 0;
	static int32_t t62 = -205;

    t62 = (x1573>>((x1574&x1575)*x1576));

    if (t62 != 5) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x1581 = UINT32_MAX;
	int64_t x1583 = INT64_MIN;
	static volatile uint32_t t63 = UINT32_MAX;

    t63 = (x1581>>((x1582&x1583)*x1584));

    if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x1626 = 0U;
	uint8_t x1627 = 7U;
	static volatile int32_t t64 = 0;

    t64 = (x1625>>((x1626&x1627)*x1628));

    if (t64 != 127) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x1641 = 54U;
	int8_t x1643 = 0;
	int16_t x1644 = INT16_MIN;

    t65 = (x1641>>((x1642&x1643)*x1644));

    if (t65 != 54) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x1665 = 93665;
	uint8_t x1666 = 50U;
	int32_t x1668 = INT32_MIN;
	int32_t t66 = 0;

    t66 = (x1665>>((x1666&x1667)*x1668));

    if (t66 != 93665) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile uint16_t x1669 = 5613U;
	static int8_t x1671 = 1;
	int64_t x1672 = INT64_MIN;
	volatile int32_t t67 = -1;

    t67 = (x1669>>((x1670&x1671)*x1672));

    if (t67 != 5613) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile uint32_t x1677 = UINT32_MAX;
	uint16_t x1680 = 909U;
	uint32_t t68 = UINT32_MAX;

    t68 = (x1677>>((x1678&x1679)*x1680));

    if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x1693 = INT8_MAX;
	uint32_t x1695 = 8689526U;
	static uint16_t x1696 = 255U;

    t69 = (x1693>>((x1694&x1695)*x1696));

    if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x1698 = -143;
	uint8_t x1699 = 0U;
	volatile uint64_t t70 = 4369981526598989768LLU;

    t70 = (x1697>>((x1698&x1699)*x1700));

    if (t70 != 1169492102107889940LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x1705 = 502LLU;
	int32_t x1706 = -77243267;
	static int16_t x1707 = INT16_MIN;
	volatile uint16_t x1708 = 0U;
	volatile uint64_t t71 = 653954LLU;

    t71 = (x1705>>((x1706&x1707)*x1708));

    if (t71 != 502LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int64_t x1745 = 2331081209851308LL;
	int16_t x1746 = INT16_MIN;
	int16_t x1747 = 3736;
	int16_t x1748 = INT16_MAX;
	int64_t t72 = 1LL;

    t72 = (x1745>>((x1746&x1747)*x1748));

    if (t72 != 2331081209851308LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x1849 = 3U;
	int8_t x1850 = INT8_MIN;
	static int32_t x1851 = 19;
	volatile int8_t x1852 = INT8_MIN;
	int32_t t73 = -26;

    t73 = (x1849>>((x1850&x1851)*x1852));

    if (t73 != 3) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x1869 = INT16_MAX;
	int64_t x1870 = INT64_MIN;
	uint16_t x1871 = 0U;
	static volatile uint64_t x1872 = 3LLU;
	volatile int32_t t74 = 811145;

    t74 = (x1869>>((x1870&x1871)*x1872));

    if (t74 != 32767) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x1886 = INT8_MIN;
	uint32_t x1887 = 53U;
	int32_t x1888 = INT32_MIN;
	uint32_t t75 = 2U;

    t75 = (x1885>>((x1886&x1887)*x1888));

    if (t75 != 130181600U) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint8_t x1889 = 5U;
	uint8_t x1890 = 37U;
	uint16_t x1891 = 2U;
	int16_t x1892 = INT16_MIN;
	int32_t t76 = 30;

    t76 = (x1889>>((x1890&x1891)*x1892));

    if (t76 != 5) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x1921 = UINT64_MAX;
	uint16_t x1923 = 4U;
	volatile int16_t x1924 = -1;
	uint64_t t77 = UINT64_MAX;

    t77 = (x1921>>((x1922&x1923)*x1924));

    if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x1957 = UINT16_MAX;
	volatile int16_t x1959 = INT16_MIN;
	static uint64_t x1960 = UINT64_MAX;

    t78 = (x1957>>((x1958&x1959)*x1960));

    if (t78 != 65535) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint64_t x1969 = UINT64_MAX;
	static int32_t x1970 = 56562;
	int64_t x1972 = INT64_MAX;
	uint64_t t79 = UINT64_MAX;

    t79 = (x1969>>((x1970&x1971)*x1972));

    if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x2025 = 4;
	static int32_t x2027 = INT32_MIN;
	int32_t x2028 = INT32_MIN;
	volatile int32_t t80 = -11500;

    t80 = (x2025>>((x2026&x2027)*x2028));

    if (t80 != 4) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint16_t x2057 = UINT16_MAX;
	static volatile uint32_t x2058 = UINT32_MAX;
	static int32_t t81 = -1;

    t81 = (x2057>>((x2058&x2059)*x2060));

    if (t81 != 32767) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int32_t x2133 = INT32_MAX;
	static int8_t x2134 = INT8_MAX;
	volatile uint32_t x2136 = 54U;
	volatile int32_t t82 = INT32_MAX;

    t82 = (x2133>>((x2134&x2135)*x2136));

    if (t82 != INT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int32_t x2153 = INT32_MAX;
	int8_t x2155 = 0;
	uint8_t x2156 = 61U;
	static int32_t t83 = INT32_MAX;

    t83 = (x2153>>((x2154&x2155)*x2156));

    if (t83 != INT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x2189 = UINT64_MAX;
	int16_t x2191 = 876;
	uint64_t t84 = UINT64_MAX;

    t84 = (x2189>>((x2190&x2191)*x2192));

    if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x2209 = INT8_MAX;
	int64_t x2210 = -1LL;
	uint8_t x2211 = 3U;
	static volatile uint8_t x2212 = 1U;
	volatile int32_t t85 = 276773552;

    t85 = (x2209>>((x2210&x2211)*x2212));

    if (t85 != 15) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x2337 = UINT64_MAX;
	static int32_t x2338 = INT32_MIN;
	int16_t x2339 = INT16_MAX;
	int64_t x2340 = INT64_MIN;
	uint64_t t86 = UINT64_MAX;

    t86 = (x2337>>((x2338&x2339)*x2340));

    if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x2341 = UINT64_MAX;
	volatile uint64_t x2342 = UINT64_MAX;
	uint32_t x2343 = 36642U;
	int64_t x2344 = INT64_MIN;

    t87 = (x2341>>((x2342&x2343)*x2344));

    if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x2389 = 185U;
	int32_t x2390 = INT32_MIN;

    t88 = (x2389>>((x2390&x2391)*x2392));

    if (t88 != 185) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x2421 = 60LLU;
	int64_t x2422 = -1LL;
	static int16_t x2423 = -1;
	int64_t x2424 = -1LL;
	static uint64_t t89 = 6098LLU;

    t89 = (x2421>>((x2422&x2423)*x2424));

    if (t89 != 30LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint16_t x2429 = UINT16_MAX;
	uint64_t x2430 = UINT64_MAX;
	uint64_t x2432 = UINT64_MAX;
	static volatile int32_t t90 = 12;

    t90 = (x2429>>((x2430&x2431)*x2432));

    if (t90 != 32767) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x2445 = 57551LL;
	static int32_t x2446 = INT32_MIN;
	uint16_t x2447 = UINT16_MAX;
	uint16_t x2448 = UINT16_MAX;

    t91 = (x2445>>((x2446&x2447)*x2448));

    if (t91 != 57551LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint8_t x2493 = 98U;
	volatile uint16_t x2494 = UINT16_MAX;
	static uint8_t x2495 = 3U;
	int8_t x2496 = 1;
	volatile int32_t t92 = 684803494;

    t92 = (x2493>>((x2494&x2495)*x2496));

    if (t92 != 12) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x2517 = 15U;
	int32_t x2518 = INT32_MAX;
	uint16_t x2519 = 12430U;
	int16_t x2520 = 0;

    t93 = (x2517>>((x2518&x2519)*x2520));

    if (t93 != 15) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x2521 = 7668U;
	uint8_t x2522 = 0U;
	int8_t x2523 = 0;
	uint8_t x2524 = UINT8_MAX;
	volatile uint32_t t94 = 2U;

    t94 = (x2521>>((x2522&x2523)*x2524));

    if (t94 != 7668U) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint32_t x2527 = 32584881U;
	uint32_t x2528 = 8576231U;

    t95 = (x2525>>((x2526&x2527)*x2528));

    if (t95 != UINT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x2609 = 82041205U;
	int8_t x2610 = 3;
	static volatile int8_t x2611 = 12;
	int64_t x2612 = 5LL;
	uint32_t t96 = 18394744U;

    t96 = (x2609>>((x2610&x2611)*x2612));

    if (t96 != 82041205U) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x2681 = 686571LLU;
	static int32_t x2682 = INT32_MIN;
	int8_t x2683 = INT8_MAX;

    t97 = (x2681>>((x2682&x2683)*x2684));

    if (t97 != 686571LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x2713 = INT32_MAX;
	int32_t x2714 = 2;
	int64_t x2716 = INT64_MIN;

    t98 = (x2713>>((x2714&x2715)*x2716));

    if (t98 != INT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x2753 = 5882U;
	int16_t x2754 = 2;
	static int16_t x2755 = INT16_MIN;
	uint64_t x2756 = 0LLU;
	volatile int32_t t99 = -44277772;

    t99 = (x2753>>((x2754&x2755)*x2756));

    if (t99 != 5882) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int32_t x2765 = INT32_MAX;
	static int32_t x2766 = INT32_MIN;
	int32_t t100 = INT32_MAX;

    t100 = (x2765>>((x2766&x2767)*x2768));

    if (t100 != INT32_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x2858 = INT8_MIN;
	int16_t x2860 = INT16_MAX;
	volatile int64_t t101 = 843515432279720LL;

    t101 = (x2857>>((x2858&x2859)*x2860));

    if (t101 != 1754505376LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint16_t x2865 = UINT16_MAX;
	int64_t x2866 = INT64_MIN;
	volatile int64_t x2867 = INT64_MAX;
	int32_t x2868 = INT32_MAX;
	static volatile int32_t t102 = -100168534;

    t102 = (x2865>>((x2866&x2867)*x2868));

    if (t102 != 65535) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x2881 = UINT64_MAX;
	int16_t x2883 = -12;
	volatile int32_t x2884 = INT32_MAX;

    t103 = (x2881>>((x2882&x2883)*x2884));

    if (t103 != UINT64_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint32_t x2898 = 0U;
	static int8_t x2899 = INT8_MIN;
	int32_t x2900 = 7158704;
	static volatile int32_t t104 = 7148861;

    t104 = (x2897>>((x2898&x2899)*x2900));

    if (t104 != 5) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x2921 = INT32_MAX;
	uint16_t x2922 = UINT16_MAX;
	uint32_t x2923 = 454888052U;
	static int32_t x2924 = INT32_MIN;
	static int32_t t105 = INT32_MAX;

    t105 = (x2921>>((x2922&x2923)*x2924));

    if (t105 != INT32_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x2933 = UINT8_MAX;
	uint8_t x2934 = UINT8_MAX;
	static int64_t x2935 = INT64_MIN;
	volatile int32_t t106 = -10;

    t106 = (x2933>>((x2934&x2935)*x2936));

    if (t106 != 255) { NG(); } else { ; }
	
}

void f107(void) {
    	static int32_t x2941 = INT32_MAX;
	int64_t x2942 = INT64_MIN;
	int8_t x2943 = INT8_MAX;

    t107 = (x2941>>((x2942&x2943)*x2944));

    if (t107 != INT32_MAX) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint64_t x2969 = UINT64_MAX;
	int64_t x2970 = INT64_MIN;
	uint8_t x2971 = UINT8_MAX;
	static int8_t x2972 = 1;
	uint64_t t108 = UINT64_MAX;

    t108 = (x2969>>((x2970&x2971)*x2972));

    if (t108 != UINT64_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x2993 = 51U;
	int64_t x2994 = INT64_MAX;
	int64_t x2995 = INT64_MIN;
	uint32_t x2996 = UINT32_MAX;
	volatile int32_t t109 = -2116816;

    t109 = (x2993>>((x2994&x2995)*x2996));

    if (t109 != 51) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x3065 = 92111117623896393LLU;
	static uint8_t x3066 = UINT8_MAX;
	int64_t x3067 = INT64_MIN;
	volatile int8_t x3068 = INT8_MAX;
	uint64_t t110 = 136293213644109LLU;

    t110 = (x3065>>((x3066&x3067)*x3068));

    if (t110 != 92111117623896393LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x3093 = 52;
	int8_t x3094 = 1;
	uint64_t x3096 = 1LLU;
	volatile int32_t t111 = -8;

    t111 = (x3093>>((x3094&x3095)*x3096));

    if (t111 != 26) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x3105 = 1;
	int32_t x3106 = INT32_MAX;
	int32_t x3107 = INT32_MIN;
	int8_t x3108 = INT8_MIN;
	int32_t t112 = -758098;

    t112 = (x3105>>((x3106&x3107)*x3108));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x3109 = 1LLU;
	static volatile int16_t x3110 = INT16_MIN;
	int8_t x3112 = INT8_MAX;

    t113 = (x3109>>((x3110&x3111)*x3112));

    if (t113 != 1LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint32_t x3121 = 6U;
	static int8_t x3122 = 58;
	uint64_t x3124 = 359255730LLU;
	volatile uint32_t t114 = 7560827U;

    t114 = (x3121>>((x3122&x3123)*x3124));

    if (t114 != 6U) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x3153 = UINT16_MAX;
	uint32_t x3154 = 5138749U;
	int64_t x3155 = INT64_MIN;
	int8_t x3156 = 6;
	volatile int32_t t115 = 26;

    t115 = (x3153>>((x3154&x3155)*x3156));

    if (t115 != 65535) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint64_t x3181 = 36LLU;
	uint8_t x3182 = 1U;
	int8_t x3183 = INT8_MIN;
	int8_t x3184 = 0;
	volatile uint64_t t116 = 2311084807LLU;

    t116 = (x3181>>((x3182&x3183)*x3184));

    if (t116 != 36LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x3221 = INT8_MAX;
	static int8_t x3223 = INT8_MAX;
	static uint8_t x3224 = 31U;
	static volatile int32_t t117 = 535845;

    t117 = (x3221>>((x3222&x3223)*x3224));

    if (t117 != 127) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x3249 = INT32_MAX;
	int16_t x3251 = INT16_MIN;
	volatile int32_t t118 = INT32_MAX;

    t118 = (x3249>>((x3250&x3251)*x3252));

    if (t118 != INT32_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint8_t x3257 = 15U;
	int64_t x3260 = INT64_MAX;
	volatile int32_t t119 = 2109;

    t119 = (x3257>>((x3258&x3259)*x3260));

    if (t119 != 15) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x3281 = 17;
	volatile uint8_t x3282 = 26U;
	int32_t x3283 = INT32_MIN;

    t120 = (x3281>>((x3282&x3283)*x3284));

    if (t120 != 17) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x3297 = 28923U;
	int16_t x3298 = INT16_MIN;
	int32_t x3300 = 6349;

    t121 = (x3297>>((x3298&x3299)*x3300));

    if (t121 != 28923U) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x3317 = 15204U;
	static volatile int16_t x3318 = INT16_MIN;
	static uint8_t x3319 = 49U;
	int8_t x3320 = -38;

    t122 = (x3317>>((x3318&x3319)*x3320));

    if (t122 != 15204U) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x3393 = UINT16_MAX;
	int64_t x3394 = INT64_MIN;
	int32_t x3395 = INT32_MAX;
	volatile int32_t t123 = -6824612;

    t123 = (x3393>>((x3394&x3395)*x3396));

    if (t123 != 65535) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint64_t x3429 = UINT64_MAX;
	int32_t x3430 = INT32_MIN;
	uint8_t x3432 = 0U;
	uint64_t t124 = UINT64_MAX;

    t124 = (x3429>>((x3430&x3431)*x3432));

    if (t124 != UINT64_MAX) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x3449 = 28135U;
	static int64_t x3450 = 1LL;
	volatile int16_t x3451 = -1378;
	volatile int32_t t125 = 31;

    t125 = (x3449>>((x3450&x3451)*x3452));

    if (t125 != 28135) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint8_t x3493 = 1U;
	int8_t x3494 = -1;
	int32_t t126 = 23105;

    t126 = (x3493>>((x3494&x3495)*x3496));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x3509 = UINT32_MAX;
	int32_t x3510 = INT32_MIN;
	int32_t x3511 = 488;
	volatile int16_t x3512 = INT16_MIN;
	volatile uint32_t t127 = UINT32_MAX;

    t127 = (x3509>>((x3510&x3511)*x3512));

    if (t127 != UINT32_MAX) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x3617 = 4469108LL;
	int8_t x3618 = 0;
	uint16_t x3619 = 46U;
	int32_t x3620 = -1;
	int64_t t128 = 13008398LL;

    t128 = (x3617>>((x3618&x3619)*x3620));

    if (t128 != 4469108LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x3645 = 1U;
	uint16_t x3646 = UINT16_MAX;
	uint8_t x3647 = 1U;
	volatile int32_t t129 = -2;

    t129 = (x3645>>((x3646&x3647)*x3648));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x3657 = INT64_MAX;
	static int64_t x3658 = INT64_MIN;
	static int32_t x3659 = INT32_MAX;
	int8_t x3660 = INT8_MIN;
	volatile int64_t t130 = INT64_MAX;

    t130 = (x3657>>((x3658&x3659)*x3660));

    if (t130 != INT64_MAX) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x3673 = UINT16_MAX;
	uint64_t x3674 = 244LLU;
	uint32_t x3675 = 0U;
	volatile int32_t t131 = 58909953;

    t131 = (x3673>>((x3674&x3675)*x3676));

    if (t131 != 65535) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x3697 = 42;
	volatile int32_t x3698 = INT32_MAX;
	int32_t x3699 = INT32_MIN;
	int32_t x3700 = 111710761;
	static int32_t t132 = 18078137;

    t132 = (x3697>>((x3698&x3699)*x3700));

    if (t132 != 42) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x3757 = UINT8_MAX;
	static volatile int16_t x3758 = INT16_MIN;
	uint16_t x3759 = 55U;
	int64_t x3760 = INT64_MIN;
	static int32_t t133 = -110150;

    t133 = (x3757>>((x3758&x3759)*x3760));

    if (t133 != 255) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x3797 = INT16_MAX;
	int32_t x3798 = -9;
	static uint16_t x3799 = UINT16_MAX;
	volatile uint8_t x3800 = 0U;
	static int32_t t134 = -6288487;

    t134 = (x3797>>((x3798&x3799)*x3800));

    if (t134 != 32767) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x3809 = 278U;
	int64_t x3811 = INT64_MAX;

    t135 = (x3809>>((x3810&x3811)*x3812));

    if (t135 != 278U) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x3817 = INT16_MAX;
	int8_t x3818 = INT8_MIN;
	int32_t t136 = -25417;

    t136 = (x3817>>((x3818&x3819)*x3820));

    if (t136 != 32767) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint32_t x3861 = UINT32_MAX;
	int32_t x3862 = INT32_MIN;
	uint32_t x3863 = 2U;
	int8_t x3864 = INT8_MIN;
	uint32_t t137 = UINT32_MAX;

    t137 = (x3861>>((x3862&x3863)*x3864));

    if (t137 != UINT32_MAX) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x3918 = INT32_MIN;
	int64_t x3920 = INT64_MIN;
	volatile uint64_t t138 = UINT64_MAX;

    t138 = (x3917>>((x3918&x3919)*x3920));

    if (t138 != UINT64_MAX) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x4001 = 6U;
	static uint8_t x4002 = 3U;
	int32_t x4003 = INT32_MIN;
	static int64_t x4004 = -1450460LL;

    t139 = (x4001>>((x4002&x4003)*x4004));

    if (t139 != 6U) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x4037 = INT16_MAX;
	int64_t x4038 = 1177799241381LL;
	int64_t x4039 = INT64_MIN;
	static volatile int32_t x4040 = -1;

    t140 = (x4037>>((x4038&x4039)*x4040));

    if (t140 != 32767) { NG(); } else { ; }
	
}

void f141(void) {
    	static int32_t x4061 = 242;
	static uint64_t x4062 = 3702592LLU;
	volatile uint16_t x4063 = 44U;
	int32_t x4064 = INT32_MIN;
	volatile int32_t t141 = 1;

    t141 = (x4061>>((x4062&x4063)*x4064));

    if (t141 != 242) { NG(); } else { ; }
	
}

void f142(void) {
    	static int64_t x4073 = 263LL;
	int8_t x4074 = -1;
	static uint32_t x4075 = UINT32_MAX;
	int16_t x4076 = -1;
	volatile int64_t t142 = -1194209LL;

    t142 = (x4073>>((x4074&x4075)*x4076));

    if (t142 != 131LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x4077 = INT8_MAX;
	volatile int16_t x4079 = 102;
	volatile uint32_t x4080 = 18297U;

    t143 = (x4077>>((x4078&x4079)*x4080));

    if (t143 != 127) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x4085 = UINT8_MAX;
	int8_t x4086 = INT8_MIN;
	int8_t x4087 = INT8_MAX;
	int64_t x4088 = INT64_MIN;
	int32_t t144 = 622652;

    t144 = (x4085>>((x4086&x4087)*x4088));

    if (t144 != 255) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint64_t x4137 = 15378814180266LLU;
	static int16_t x4138 = INT16_MIN;
	uint32_t x4139 = 2U;
	int64_t x4140 = INT64_MIN;
	uint64_t t145 = 368931632671890LLU;

    t145 = (x4137>>((x4138&x4139)*x4140));

    if (t145 != 15378814180266LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x4145 = 1849290293LLU;
	static uint32_t x4147 = 786679351U;
	int8_t x4148 = -1;

    t146 = (x4145>>((x4146&x4147)*x4148));

    if (t146 != 1849290293LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x4149 = UINT32_MAX;
	static uint64_t x4150 = 792377LLU;
	volatile int8_t x4152 = -13;
	volatile uint32_t t147 = UINT32_MAX;

    t147 = (x4149>>((x4150&x4151)*x4152));

    if (t147 != UINT32_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x4189 = 27822LL;
	int8_t x4190 = 1;
	static uint32_t x4191 = 974U;
	int16_t x4192 = INT16_MIN;

    t148 = (x4189>>((x4190&x4191)*x4192));

    if (t148 != 27822LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x4193 = INT16_MAX;
	int64_t x4194 = INT64_MIN;
	static volatile uint64_t x4195 = 459523054513637LLU;
	volatile int32_t x4196 = 0;
	static volatile int32_t t149 = 3;

    t149 = (x4193>>((x4194&x4195)*x4196));

    if (t149 != 32767) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x4205 = 2U;
	volatile int8_t x4207 = 0;
	int32_t x4208 = INT32_MIN;

    t150 = (x4205>>((x4206&x4207)*x4208));

    if (t150 != 2) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint64_t x4255 = UINT64_MAX;
	uint64_t x4256 = UINT64_MAX;

    t151 = (x4253>>((x4254&x4255)*x4256));

    if (t151 != 127) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x4281 = 25U;
	int32_t x4282 = INT32_MIN;
	uint32_t x4283 = 420U;
	volatile int8_t x4284 = -7;

    t152 = (x4281>>((x4282&x4283)*x4284));

    if (t152 != 25) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x4334 = INT16_MIN;
	static int32_t x4336 = INT32_MAX;
	static volatile uint64_t t153 = UINT64_MAX;

    t153 = (x4333>>((x4334&x4335)*x4336));

    if (t153 != UINT64_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t t154 = 4;

    t154 = (x4353>>((x4354&x4355)*x4356));

    if (t154 != 255) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x4385 = 11276138363806LLU;
	volatile int64_t x4386 = INT64_MIN;
	uint16_t x4387 = UINT16_MAX;
	uint16_t x4388 = 9U;

    t155 = (x4385>>((x4386&x4387)*x4388));

    if (t155 != 11276138363806LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint64_t x4389 = UINT64_MAX;
	int16_t x4390 = 1;
	int32_t x4391 = INT32_MIN;
	int32_t x4392 = -213787269;
	uint64_t t156 = UINT64_MAX;

    t156 = (x4389>>((x4390&x4391)*x4392));

    if (t156 != UINT64_MAX) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t x4421 = INT32_MAX;
	uint8_t x4423 = 7U;
	uint32_t x4424 = 15U;
	int32_t t157 = -25540;

    t157 = (x4421>>((x4422&x4423)*x4424));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x4449 = INT8_MAX;
	int64_t x4450 = 2LL;
	int8_t x4452 = INT8_MAX;

    t158 = (x4449>>((x4450&x4451)*x4452));

    if (t158 != 127) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x4497 = 1;
	int64_t x4498 = INT64_MIN;
	uint32_t x4499 = 295U;
	int64_t x4500 = -512055477LL;
	int32_t t159 = 22682;

    t159 = (x4497>>((x4498&x4499)*x4500));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint64_t x4501 = UINT64_MAX;
	static volatile int64_t x4502 = INT64_MIN;
	static int16_t x4504 = INT16_MIN;
	static volatile uint64_t t160 = UINT64_MAX;

    t160 = (x4501>>((x4502&x4503)*x4504));

    if (t160 != UINT64_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x4559 = 0;
	int32_t t161 = INT32_MAX;

    t161 = (x4557>>((x4558&x4559)*x4560));

    if (t161 != INT32_MAX) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x4569 = 9917U;
	int64_t x4570 = INT64_MIN;
	static uint32_t x4571 = 479883U;
	int16_t x4572 = INT16_MIN;
	uint32_t t162 = 1308317897U;

    t162 = (x4569>>((x4570&x4571)*x4572));

    if (t162 != 9917U) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x4578 = INT32_MIN;
	static volatile uint16_t x4579 = 2309U;
	int32_t x4580 = -1;
	volatile uint32_t t163 = 42U;

    t163 = (x4577>>((x4578&x4579)*x4580));

    if (t163 != 10U) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x4609 = 4311U;
	int16_t x4610 = -4;
	static uint8_t x4611 = 2U;
	int32_t t164 = -7164;

    t164 = (x4609>>((x4610&x4611)*x4612));

    if (t164 != 4311) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint32_t x4633 = 69U;
	uint16_t x4634 = 14644U;
	static uint64_t x4635 = 25316530088LLU;
	int64_t x4636 = INT64_MIN;

    t165 = (x4633>>((x4634&x4635)*x4636));

    if (t165 != 69U) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint8_t x4638 = 36U;
	int32_t x4639 = INT32_MIN;
	int16_t x4640 = 1749;
	uint64_t t166 = 768288721LLU;

    t166 = (x4637>>((x4638&x4639)*x4640));

    if (t166 != 990631LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile int32_t x4701 = INT32_MAX;
	int64_t x4703 = 30940LL;
	static uint32_t x4704 = 418238U;
	volatile int32_t t167 = INT32_MAX;

    t167 = (x4701>>((x4702&x4703)*x4704));

    if (t167 != INT32_MAX) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x4709 = 113U;
	uint32_t x4710 = 55643U;
	uint8_t x4711 = 0U;
	uint64_t x4712 = 26343364687867LLU;
	volatile int32_t t168 = 0;

    t168 = (x4709>>((x4710&x4711)*x4712));

    if (t168 != 113) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x4717 = 1LL;
	int32_t x4718 = INT32_MIN;
	static uint8_t x4720 = UINT8_MAX;
	volatile int64_t t169 = 6393967975503379LL;

    t169 = (x4717>>((x4718&x4719)*x4720));

    if (t169 != 1LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x4738 = UINT64_MAX;
	int64_t x4739 = INT64_MIN;
	static int16_t x4740 = 938;
	volatile int64_t t170 = INT64_MAX;

    t170 = (x4737>>((x4738&x4739)*x4740));

    if (t170 != INT64_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x4761 = INT16_MAX;
	int8_t x4762 = -4;
	int64_t x4763 = -1LL;
	static int64_t x4764 = -1LL;
	int32_t t171 = 63;

    t171 = (x4761>>((x4762&x4763)*x4764));

    if (t171 != 2047) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x4765 = UINT64_MAX;
	static int8_t x4766 = 58;
	volatile int16_t x4767 = INT16_MIN;
	uint64_t x4768 = 89066LLU;
	volatile uint64_t t172 = UINT64_MAX;

    t172 = (x4765>>((x4766&x4767)*x4768));

    if (t172 != UINT64_MAX) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint8_t x4809 = UINT8_MAX;
	static uint16_t x4810 = 364U;
	int16_t x4811 = 1;
	uint8_t x4812 = UINT8_MAX;
	static int32_t t173 = -228;

    t173 = (x4809>>((x4810&x4811)*x4812));

    if (t173 != 255) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x4841 = 1;
	uint64_t x4842 = 0LLU;
	int64_t x4843 = 32062724906LL;
	uint8_t x4844 = 39U;
	volatile int32_t t174 = -415;

    t174 = (x4841>>((x4842&x4843)*x4844));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x4905 = 39334U;
	volatile int32_t x4906 = INT32_MIN;
	volatile int32_t x4908 = INT32_MIN;
	uint32_t t175 = 34583U;

    t175 = (x4905>>((x4906&x4907)*x4908));

    if (t175 != 39334U) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint16_t x4933 = UINT16_MAX;
	int64_t x4934 = INT64_MIN;
	static int64_t x4935 = 1159LL;
	volatile int8_t x4936 = -1;
	static int32_t t176 = -3;

    t176 = (x4933>>((x4934&x4935)*x4936));

    if (t176 != 65535) { NG(); } else { ; }
	
}

void f177(void) {
    	static int64_t x4965 = INT64_MAX;
	volatile int64_t x4966 = INT64_MIN;
	static volatile uint64_t x4967 = UINT64_MAX;
	int32_t x4968 = INT32_MIN;

    t177 = (x4965>>((x4966&x4967)*x4968));

    if (t177 != INT64_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint32_t x4997 = UINT32_MAX;
	int32_t x4998 = INT32_MIN;
	volatile int32_t x4999 = 403245996;
	volatile uint64_t x5000 = UINT64_MAX;
	volatile uint32_t t178 = UINT32_MAX;

    t178 = (x4997>>((x4998&x4999)*x5000));

    if (t178 != UINT32_MAX) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x5014 = 1356LLU;
	int16_t x5015 = INT16_MIN;
	static volatile uint64_t t179 = 1804344330862994LLU;

    t179 = (x5013>>((x5014&x5015)*x5016));

    if (t179 != 1269170197578LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x5017 = UINT8_MAX;
	static int64_t x5018 = INT64_MIN;
	uint32_t x5019 = UINT32_MAX;
	static int8_t x5020 = INT8_MAX;

    t180 = (x5017>>((x5018&x5019)*x5020));

    if (t180 != 255) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint64_t x5029 = 3931329360829LLU;
	uint8_t x5030 = 7U;
	int64_t x5031 = INT64_MIN;
	int64_t x5032 = 17203722860LL;
	uint64_t t181 = 409LLU;

    t181 = (x5029>>((x5030&x5031)*x5032));

    if (t181 != 3931329360829LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x5049 = INT16_MAX;
	int16_t x5050 = INT16_MIN;
	volatile uint32_t x5052 = 401U;
	static int32_t t182 = 51027;

    t182 = (x5049>>((x5050&x5051)*x5052));

    if (t182 != 32767) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x5078 = UINT8_MAX;
	static int64_t x5080 = -1LL;
	int32_t t183 = -3234;

    t183 = (x5077>>((x5078&x5079)*x5080));

    if (t183 != 43) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x5097 = 107U;
	int8_t x5098 = -1;
	static int16_t x5100 = -1;
	static int32_t t184 = -22;

    t184 = (x5097>>((x5098&x5099)*x5100));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x5101 = INT8_MAX;
	static uint16_t x5102 = 1561U;
	int16_t x5103 = INT16_MIN;
	int8_t x5104 = -1;
	static volatile int32_t t185 = 2594;

    t185 = (x5101>>((x5102&x5103)*x5104));

    if (t185 != 127) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x5177 = 10U;
	static int64_t x5178 = INT64_MIN;
	volatile int8_t x5179 = INT8_MAX;
	uint32_t x5180 = 1697363722U;

    t186 = (x5177>>((x5178&x5179)*x5180));

    if (t186 != 10) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x5209 = INT64_MAX;
	int32_t x5210 = INT32_MIN;
	volatile uint32_t x5211 = 2473U;
	uint64_t x5212 = 7863003634158072LLU;
	int64_t t187 = INT64_MAX;

    t187 = (x5209>>((x5210&x5211)*x5212));

    if (t187 != INT64_MAX) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x5249 = UINT8_MAX;
	static uint8_t x5250 = UINT8_MAX;
	int32_t x5251 = INT32_MIN;
	static int32_t t188 = -531354313;

    t188 = (x5249>>((x5250&x5251)*x5252));

    if (t188 != 255) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x5277 = 96008817891LLU;
	volatile int8_t x5278 = INT8_MIN;
	int32_t x5280 = 6024;
	static uint64_t t189 = 7173042410277LLU;

    t189 = (x5277>>((x5278&x5279)*x5280));

    if (t189 != 96008817891LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x5281 = 3712251393172766LLU;
	int16_t x5282 = INT16_MIN;
	uint16_t x5283 = 2U;
	volatile uint64_t t190 = 2140838980580908105LLU;

    t190 = (x5281>>((x5282&x5283)*x5284));

    if (t190 != 3712251393172766LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x5285 = 16532199;
	int32_t x5286 = INT32_MIN;
	uint16_t x5287 = UINT16_MAX;
	volatile int64_t x5288 = INT64_MAX;
	volatile int32_t t191 = -497782602;

    t191 = (x5285>>((x5286&x5287)*x5288));

    if (t191 != 16532199) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x5325 = 161LLU;
	uint32_t x5326 = 28952U;
	int8_t x5327 = 0;
	static uint32_t x5328 = 11737U;
	static volatile uint64_t t192 = 81LLU;

    t192 = (x5325>>((x5326&x5327)*x5328));

    if (t192 != 161LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x5349 = UINT16_MAX;
	static int32_t x5350 = 512;
	int32_t x5351 = INT32_MIN;
	uint16_t x5352 = 3U;
	int32_t t193 = 1001586207;

    t193 = (x5349>>((x5350&x5351)*x5352));

    if (t193 != 65535) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x5353 = UINT32_MAX;
	int8_t x5354 = -10;
	volatile int16_t x5355 = -1;
	volatile int64_t x5356 = -1LL;
	volatile uint32_t t194 = 471U;

    t194 = (x5353>>((x5354&x5355)*x5356));

    if (t194 != 4194303U) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x5361 = 776U;
	static uint16_t x5362 = 26U;
	static uint32_t x5363 = 133U;
	volatile int16_t x5364 = 8135;
	volatile int32_t t195 = -2527901;

    t195 = (x5361>>((x5362&x5363)*x5364));

    if (t195 != 776) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x5377 = 667470LLU;
	int16_t x5378 = INT16_MAX;
	static int8_t x5379 = 1;
	uint8_t x5380 = 43U;

    t196 = (x5377>>((x5378&x5379)*x5380));

    if (t196 != 0LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x5405 = 0U;
	static volatile int64_t x5406 = INT64_MIN;
	static volatile uint16_t x5407 = 29U;
	static int64_t x5408 = 251062561317597LL;
	int32_t t197 = -514657;

    t197 = (x5405>>((x5406&x5407)*x5408));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x5421 = 16103676162545LLU;
	int64_t x5422 = INT64_MIN;
	int8_t x5423 = INT8_MAX;
	uint64_t t198 = 202697737487684LLU;

    t198 = (x5421>>((x5422&x5423)*x5424));

    if (t198 != 16103676162545LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x5433 = INT16_MAX;
	static int16_t x5435 = 1;
	uint64_t x5436 = 1811437085117LLU;
	volatile int32_t t199 = 91;

    t199 = (x5433>>((x5434&x5435)*x5436));

    if (t199 != 32767) { NG(); } else { ; }
	
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

