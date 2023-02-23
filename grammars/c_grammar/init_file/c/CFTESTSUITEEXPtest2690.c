
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

static uint8_t x17 = UINT8_MAX;
static volatile int32_t x18 = -1;
volatile int32_t t0 = 99772;
uint64_t x66 = UINT64_MAX;
volatile uint8_t x77 = 80U;
uint64_t x114 = 5805845710254LLU;
static int8_t x115 = INT8_MIN;
uint8_t x116 = 5U;
int8_t x235 = INT8_MIN;
static uint8_t x255 = UINT8_MAX;
uint16_t x256 = 6U;
volatile int8_t x282 = -1;
volatile int64_t x283 = INT64_MIN;
int16_t x288 = 12;
uint16_t x331 = 6U;
int8_t x368 = 10;
int64_t x401 = -1LL;
volatile int64_t x402 = 903173022LL;
static volatile uint16_t x403 = 14273U;
volatile int8_t x404 = 1;
uint32_t x430 = 241096U;
volatile int8_t x431 = 2;
volatile uint32_t t12 = 210285099U;
static uint32_t x478 = 383U;
int16_t x479 = -11;
int16_t x609 = -353;
int16_t x615 = INT16_MIN;
volatile uint16_t x616 = 4U;
uint32_t x687 = UINT32_MAX;
int16_t x725 = -1;
static uint8_t x728 = 4U;
volatile uint32_t t20 = UINT32_MAX;
volatile uint32_t t21 = 1363U;
int32_t x827 = INT32_MAX;
uint32_t t27 = 30U;
int32_t x1081 = INT32_MAX;
int64_t x1083 = 209774429259416938LL;
int32_t x1099 = 114122;
uint32_t x1129 = 799031U;
uint64_t x1130 = 166930871274068LLU;
volatile uint32_t x1173 = 1228652907U;
uint64_t x1242 = 2LLU;
int16_t x1243 = INT16_MAX;
volatile uint16_t x1301 = 313U;
int8_t x1407 = 0;
int32_t x1453 = -1;
int64_t t37 = -9059795071434935LL;
static volatile uint32_t t38 = 14U;
static int16_t x1524 = 59;
int32_t x1557 = INT32_MIN;
uint32_t x1558 = UINT32_MAX;
int32_t x1559 = -1;
volatile int64_t t42 = -853LL;
int8_t x1723 = INT8_MIN;
volatile int8_t x1724 = 2;
int8_t x1745 = INT8_MAX;
uint8_t x1748 = 26U;
uint64_t t50 = 3434928791089131346LLU;
int64_t x2457 = INT64_MIN;
int32_t x2459 = -375776;
uint8_t x2460 = 22U;
int64_t t51 = INT64_MIN;
int64_t x2595 = -1452930182291251LL;
int16_t x2601 = 0;
int16_t x2604 = 63;
int8_t x2688 = 0;
volatile int16_t x2729 = -122;
int32_t t58 = 2;
static int16_t x2913 = INT16_MIN;
static int16_t x2921 = INT16_MAX;
uint8_t x2922 = 61U;
int32_t x2938 = -1;
int8_t x2974 = INT8_MIN;
static int8_t x2975 = -13;
uint8_t x2976 = 6U;
int16_t x3131 = 1847;
int32_t t66 = 0;
int64_t x3187 = 2991269658290LL;
uint8_t x3188 = 5U;
static volatile uint64_t t67 = 15959LLU;
static int32_t t69 = 12284;
int8_t x3272 = 8;
volatile int16_t x3337 = INT16_MAX;
int32_t x3338 = -11489393;
int32_t t73 = 705370076;
int64_t x3410 = INT64_MAX;
uint8_t x3504 = 1U;
int16_t x3596 = 3;
static int8_t x3684 = 11;
int64_t t80 = 219598LL;
int32_t x3769 = -1;
uint8_t x3771 = 3U;
uint8_t x3860 = 1U;
int32_t x3957 = -1;
volatile int32_t t85 = 84185;
int64_t x4062 = 2094664468LL;
int64_t t86 = -8850623942099335LL;
volatile uint64_t t88 = 27494924LLU;
volatile int8_t x4419 = -1;
volatile int16_t x4422 = INT16_MAX;
uint64_t x4466 = 24841419697773547LLU;
int32_t x4467 = INT32_MIN;
int32_t x4663 = INT32_MIN;
uint32_t t95 = 1498U;
uint16_t x4755 = 30U;
volatile uint32_t t98 = 1357698U;
int8_t x4797 = INT8_MIN;
int8_t x4799 = 56;
int16_t x4800 = 1;
int16_t x4889 = INT16_MIN;
uint8_t x4892 = 37U;
int32_t t103 = 1;
uint32_t x5102 = 101U;
int32_t x5231 = INT32_MIN;
int64_t t105 = -961LL;
uint32_t x5454 = UINT32_MAX;
uint32_t x5497 = 1101019U;
int64_t x5673 = -1LL;
int8_t x5675 = INT8_MIN;
int8_t x5837 = -1;
int16_t x5929 = -1;
static int8_t x5989 = 10;
int8_t x5992 = 1;
volatile int32_t t116 = -1015093572;
int8_t x6045 = INT8_MAX;
uint16_t x6047 = 0U;
static uint8_t x6342 = 7U;
int8_t x6343 = INT8_MAX;
int16_t x6353 = -614;
int16_t x6369 = INT16_MIN;
int8_t x6401 = INT8_MAX;
uint64_t x6404 = 1LLU;
uint16_t x6554 = UINT16_MAX;
static volatile int32_t x6579 = INT32_MIN;
uint64_t t125 = UINT64_MAX;
static volatile uint64_t t128 = 1372083LLU;
uint8_t x7013 = 26U;
uint64_t x7014 = 9006321082575LLU;
int32_t x7218 = INT32_MIN;
int64_t x7219 = -1LL;
uint64_t x7246 = 3229LLU;
uint32_t x7276 = 15U;
static uint8_t x7354 = UINT8_MAX;
static volatile int64_t t138 = -687781LL;
int8_t x7651 = INT8_MIN;
int8_t x7652 = 5;
volatile int32_t x7753 = INT32_MIN;
uint64_t t142 = 6435036LLU;
volatile int64_t x7799 = INT64_MIN;
volatile uint64_t x7875 = 1985401886LLU;
volatile uint32_t t146 = 2619008U;
int64_t x8006 = INT64_MAX;
int8_t x8008 = 57;
volatile int64_t t148 = -1LL;
int8_t x8126 = 1;
volatile uint64_t t152 = 55573440088LLU;
uint16_t x8272 = 24U;
uint64_t x8286 = 9048LLU;
int32_t x8297 = -4122514;
uint32_t t155 = 1937384U;
int64_t t156 = INT64_MAX;
int16_t x8360 = 0;
uint32_t x8515 = UINT32_MAX;
int32_t x8533 = INT32_MAX;
int64_t t163 = 1293184541835LL;
int16_t x8625 = -1215;
uint64_t x8802 = 1035714143LLU;
uint16_t x8803 = 3384U;
uint8_t x8804 = 10U;
volatile int16_t x9190 = -1854;
uint64_t t173 = 1528672804LLU;
volatile int8_t x9223 = -1;
static volatile int64_t x9337 = -25916633LL;
int64_t x9366 = -7633819LL;
static int8_t x9386 = INT8_MIN;
int8_t x9525 = INT8_MIN;
static volatile uint64_t t181 = 0LLU;
uint16_t x9557 = 31U;
uint32_t x9559 = 138U;
int32_t x9563 = INT32_MAX;
uint8_t x9564 = 0U;
uint64_t t183 = 438937365336LLU;
int8_t x9576 = 1;
volatile uint16_t x9756 = 38U;
int16_t x9769 = INT16_MIN;
volatile int64_t x9771 = -61330813828LL;
volatile int64_t t187 = 51LL;
uint32_t x9848 = 4U;
uint32_t x9851 = 0U;
static uint64_t x9899 = 23264972LLU;
static volatile int32_t x9978 = 18;
uint8_t x9980 = 4U;
volatile uint32_t t192 = 0U;
static int8_t x9982 = INT8_MAX;
uint8_t x9983 = UINT8_MAX;
static int32_t x9984 = 1;
int32_t t193 = -1005887168;
uint64_t x10022 = 516260LLU;
int16_t x10064 = 0;


void f0(void) {
    	int32_t x19 = INT32_MIN;
	uint8_t x20 = 21U;

    t0 = (x17-((x18^x19)>>x20));

    if (t0 != -768) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x65 = -1;
	volatile int32_t x67 = 10457;
	static uint8_t x68 = 23U;
	volatile uint64_t t1 = 2251128LLU;

    t1 = (x65-((x66^x67)>>x68));

    if (t1 != 18446741874686296064LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x78 = -1;
	uint32_t x79 = UINT32_MAX;
	static uint16_t x80 = 10U;
	volatile uint32_t t2 = 432243673U;

    t2 = (x77-((x78^x79)>>x80));

    if (t2 != 80U) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x113 = -1;
	static volatile uint64_t t3 = 966258121LLU;

    t3 = (x113-((x114^x115)>>x116));

    if (t3 != 17870283502838806574LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x233 = INT32_MAX;
	static uint64_t x234 = UINT64_MAX;
	uint8_t x236 = 2U;
	volatile uint64_t t4 = 111LLU;

    t4 = (x233-((x234^x235)>>x236));

    if (t4 != 2147483616LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x253 = INT16_MIN;
	int16_t x254 = 1;
	volatile int32_t t5 = 6019;

    t5 = (x253-((x254^x255)>>x256));

    if (t5 != -32771) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x281 = 8853;
	static int8_t x284 = 3;
	int64_t t6 = -2028746182162439LL;

    t6 = (x281-((x282^x283)>>x284));

    if (t6 != -1152921504606838122LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x285 = INT16_MIN;
	uint32_t x286 = 10903190U;
	static volatile int8_t x287 = INT8_MIN;
	volatile uint32_t t7 = 1156U;

    t7 = (x285-((x286^x287)>>x288));

    if (t7 != 4293888614U) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x329 = 240964U;
	static volatile uint64_t x330 = 4671593777LLU;
	static uint16_t x332 = 1U;
	volatile uint64_t t8 = 1LLU;

    t8 = (x329-((x330^x331)>>x332));

    if (t8 != 18446744071373995689LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x365 = INT16_MIN;
	uint32_t x366 = UINT32_MAX;
	static int16_t x367 = 56;
	uint32_t t9 = 6U;

    t9 = (x365-((x366^x367)>>x368));

    if (t9 != 4290740225U) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x389 = INT64_MIN;
	int8_t x390 = INT8_MIN;
	uint64_t x391 = 16467239LLU;
	uint32_t x392 = 4U;
	volatile uint64_t t10 = 847534632740LLU;

    t10 = (x389-((x390^x391)>>x392));

    if (t10 != 8070450532248958038LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t t11 = -12451201401518LL;

    t11 = (x401-((x402^x403)>>x404));

    if (t11 != -451588656LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x429 = INT8_MIN;
	volatile uint16_t x432 = 14U;

    t12 = (x429-((x430^x431)>>x432));

    if (t12 != 4294967154U) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int16_t x449 = 0;
	volatile uint32_t x450 = 36U;
	int32_t x451 = 465789818;
	int8_t x452 = 0;
	volatile uint32_t t13 = 34U;

    t13 = (x449-((x450^x451)>>x452));

    if (t13 != 3829177506U) { NG(); } else { ; }
	
}

void f14(void) {
    	static int32_t x477 = INT32_MAX;
	static volatile uint8_t x480 = 13U;
	static volatile uint32_t t14 = 722355U;

    t14 = (x477-((x478^x479)>>x480));

    if (t14 != 2146959360U) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x605 = UINT16_MAX;
	volatile uint16_t x606 = 27409U;
	int64_t x607 = INT64_MAX;
	uint16_t x608 = 56U;
	volatile int64_t t15 = 6188534224260LL;

    t15 = (x605-((x606^x607)>>x608));

    if (t15 != 65408LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x610 = UINT64_MAX;
	int32_t x611 = INT32_MIN;
	volatile int8_t x612 = 47;
	uint64_t t16 = 4962049136234LLU;

    t16 = (x609-((x610^x611)>>x612));

    if (t16 != 18446744073709551263LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x613 = INT8_MIN;
	uint32_t x614 = 154590U;
	static volatile uint32_t t17 = 981748U;

    t17 = (x613-((x614^x615)>>x616));

    if (t17 != 4026540483U) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x621 = INT16_MIN;
	uint8_t x622 = 6U;
	uint16_t x623 = 2U;
	uint16_t x624 = 1U;
	int32_t t18 = 1;

    t18 = (x621-((x622^x623)>>x624));

    if (t18 != -32770) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x685 = -1;
	uint64_t x686 = 2347276LLU;
	volatile uint8_t x688 = 18U;
	uint64_t t19 = 2965174LLU;

    t19 = (x685-((x686^x687)>>x688));

    if (t19 != 18446744073709535240LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x726 = 0;
	volatile uint32_t x727 = 0U;

    t20 = (x725-((x726^x727)>>x728));

    if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint8_t x749 = 3U;
	uint16_t x750 = 1U;
	uint32_t x751 = 250U;
	static volatile uint8_t x752 = 15U;

    t21 = (x749-((x750^x751)>>x752));

    if (t21 != 3U) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x757 = INT16_MIN;
	uint8_t x758 = UINT8_MAX;
	int32_t x759 = INT32_MAX;
	volatile uint16_t x760 = 1U;
	int32_t t22 = 0;

    t22 = (x757-((x758^x759)>>x760));

    if (t22 != -1073774464) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x825 = INT64_MAX;
	static int64_t x826 = 576LL;
	uint8_t x828 = 0U;
	int64_t t23 = -1528625LL;

    t23 = (x825-((x826^x827)>>x828));

    if (t23 != 9223372034707292736LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint16_t x857 = 200U;
	static int32_t x858 = -1;
	int8_t x859 = -1;
	int16_t x860 = 0;
	int32_t t24 = 14541702;

    t24 = (x857-((x858^x859)>>x860));

    if (t24 != 200) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x889 = 10U;
	int32_t x890 = INT32_MIN;
	int32_t x891 = -1;
	volatile uint16_t x892 = 15U;
	volatile int32_t t25 = -141946;

    t25 = (x889-((x890^x891)>>x892));

    if (t25 != -65525) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x901 = 36U;
	static int8_t x902 = INT8_MIN;
	int8_t x903 = -1;
	volatile int8_t x904 = 3;
	int32_t t26 = 60947;

    t26 = (x901-((x902^x903)>>x904));

    if (t26 != 21) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x1057 = 2U;
	static volatile uint32_t x1058 = 18U;
	uint16_t x1059 = 5678U;
	uint8_t x1060 = 3U;

    t27 = (x1057-((x1058^x1059)>>x1060));

    if (t27 != 4294966587U) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x1082 = 59U;
	volatile int8_t x1084 = 5;
	int64_t t28 = -23102487LL;

    t28 = (x1081-((x1082^x1083)>>x1084));

    if (t28 != -6555448766873131LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x1097 = 253405U;
	static int32_t x1098 = 1283735;
	int8_t x1100 = 0;
	volatile uint32_t t29 = 1326U;

    t29 = (x1097-((x1098^x1099)>>x1100));

    if (t29 != 4294029952U) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x1131 = INT8_MAX;
	uint32_t x1132 = 26U;
	volatile uint64_t t30 = 186882LLU;

    t30 = (x1129-((x1130^x1131)>>x1132));

    if (t30 != 18446744073707863184LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x1174 = 1;
	static int32_t x1175 = INT32_MAX;
	int8_t x1176 = 22;
	volatile uint32_t t31 = 1273U;

    t31 = (x1173-((x1174^x1175)>>x1176));

    if (t31 != 1228652396U) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x1237 = -1LL;
	int8_t x1238 = -1;
	volatile int32_t x1239 = -1;
	int8_t x1240 = 0;
	volatile int64_t t32 = -61165141300LL;

    t32 = (x1237-((x1238^x1239)>>x1240));

    if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x1241 = INT8_MAX;
	volatile uint16_t x1244 = 17U;
	static uint64_t t33 = 1895879696227914035LLU;

    t33 = (x1241-((x1242^x1243)>>x1244));

    if (t33 != 127LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x1302 = INT16_MAX;
	int32_t x1303 = INT32_MAX;
	uint16_t x1304 = 3U;
	volatile int32_t t34 = 249;

    t34 = (x1301-((x1302^x1303)>>x1304));

    if (t34 != -268431047) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int8_t x1405 = 3;
	uint16_t x1406 = UINT16_MAX;
	uint16_t x1408 = 1U;
	volatile int32_t t35 = -2573;

    t35 = (x1405-((x1406^x1407)>>x1408));

    if (t35 != -32764) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x1454 = UINT32_MAX;
	static volatile int32_t x1455 = -4;
	uint16_t x1456 = 16U;
	volatile uint32_t t36 = UINT32_MAX;

    t36 = (x1453-((x1454^x1455)>>x1456));

    if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x1477 = UINT32_MAX;
	static int32_t x1478 = 30285179;
	int64_t x1479 = 0LL;
	int8_t x1480 = 3;

    t37 = (x1477-((x1478^x1479)>>x1480));

    if (t37 != 4291181648LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x1481 = INT16_MAX;
	uint32_t x1482 = 310760U;
	static volatile int8_t x1483 = -1;
	int8_t x1484 = 0;

    t38 = (x1481-((x1482^x1483)>>x1484));

    if (t38 != 343528U) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x1521 = 966;
	uint64_t x1522 = UINT64_MAX;
	static int64_t x1523 = -661532672062007187LL;
	uint64_t t39 = 755LLU;

    t39 = (x1521-((x1522^x1523)>>x1524));

    if (t39 != 965LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static int8_t x1525 = -3;
	static int8_t x1526 = INT8_MIN;
	static uint32_t x1527 = UINT32_MAX;
	static volatile int8_t x1528 = 13;
	static uint32_t t40 = 170U;

    t40 = (x1525-((x1526^x1527)>>x1528));

    if (t40 != 4294967293U) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x1560 = 0U;
	static volatile uint32_t t41 = 7472U;

    t41 = (x1557-((x1558^x1559)>>x1560));

    if (t41 != 2147483648U) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x1693 = -1LL;
	int32_t x1694 = INT32_MIN;
	int32_t x1695 = -162283;
	uint16_t x1696 = 3U;

    t42 = (x1693-((x1694^x1695)>>x1696));

    if (t42 != -268415171LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x1721 = 2689757U;
	int16_t x1722 = INT16_MIN;
	uint32_t t43 = 2058U;

    t43 = (x1721-((x1722^x1723)>>x1724));

    if (t43 != 2681597U) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int64_t x1746 = INT64_MIN;
	uint64_t x1747 = 551225240LLU;
	volatile uint64_t t44 = 785LLU;

    t44 = (x1745-((x1746^x1747)>>x1748));

    if (t44 != 18446743936270598263LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x1845 = 5U;
	static uint32_t x1846 = 7U;
	int16_t x1847 = -1;
	int16_t x1848 = 8;
	uint32_t t45 = 28959626U;

    t45 = (x1845-((x1846^x1847)>>x1848));

    if (t45 != 4278190086U) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x2061 = INT16_MIN;
	static int16_t x2062 = -1;
	int64_t x2063 = -11798531LL;
	uint8_t x2064 = 32U;
	static volatile int64_t t46 = -5744332664903271LL;

    t46 = (x2061-((x2062^x2063)>>x2064));

    if (t46 != -32768LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x2125 = 25U;
	int64_t x2126 = -113705293873889LL;
	static int16_t x2127 = INT16_MIN;
	int16_t x2128 = 1;
	int64_t t47 = 5639289947205578LL;

    t47 = (x2125-((x2126^x2127)>>x2128));

    if (t47 != -56852646952566LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int32_t x2181 = INT32_MIN;
	static uint64_t x2182 = 5LLU;
	int8_t x2183 = INT8_MIN;
	uint16_t x2184 = 1U;
	uint64_t t48 = 5484LLU;

    t48 = (x2181-((x2182^x2183)>>x2184));

    if (t48 != 9223372034707292222LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x2237 = INT16_MAX;
	int64_t x2238 = 742275LL;
	uint8_t x2239 = 6U;
	uint8_t x2240 = 1U;
	volatile int64_t t49 = -26958516913371LL;

    t49 = (x2237-((x2238^x2239)>>x2240));

    if (t49 != -338371LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x2337 = -1965;
	volatile int32_t x2338 = INT32_MAX;
	uint64_t x2339 = 40248LLU;
	int16_t x2340 = 62;

    t50 = (x2337-((x2338^x2339)>>x2340));

    if (t50 != 18446744073709549651LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x2458 = INT16_MIN;

    t51 = (x2457-((x2458^x2459)>>x2460));

    if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int32_t x2585 = -1;
	static uint64_t x2586 = 3268519LLU;
	volatile int32_t x2587 = INT32_MAX;
	static int8_t x2588 = 2;
	static volatile uint64_t t52 = 504841566294348LLU;

    t52 = (x2585-((x2586^x2587)>>x2588));

    if (t52 != 18446744073173497833LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x2593 = -1;
	static int64_t x2594 = INT64_MIN;
	uint8_t x2596 = 48U;
	int64_t t53 = -383LL;

    t53 = (x2593-((x2594^x2595)>>x2596));

    if (t53 != -32763LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int8_t x2602 = 7;
	uint64_t x2603 = 16337828463895613LLU;
	volatile uint64_t t54 = 10187LLU;

    t54 = (x2601-((x2602^x2603)>>x2604));

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x2685 = INT64_MAX;
	int64_t x2686 = INT64_MIN;
	int16_t x2687 = INT16_MIN;
	int64_t t55 = -11874247228LL;

    t55 = (x2685-((x2686^x2687)>>x2688));

    if (t55 != 32767LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x2730 = INT64_MIN;
	int64_t x2731 = -1LL;
	int8_t x2732 = 2;
	int64_t t56 = -87257465869LL;

    t56 = (x2729-((x2730^x2731)>>x2732));

    if (t56 != -2305843009213694073LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x2865 = 23;
	static uint8_t x2866 = 12U;
	int32_t x2867 = 1011;
	uint64_t x2868 = 28LLU;
	volatile int32_t t57 = 0;

    t57 = (x2865-((x2866^x2867)>>x2868));

    if (t57 != 23) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x2869 = -1;
	int8_t x2870 = INT8_MAX;
	int8_t x2871 = 17;
	uint64_t x2872 = 4LLU;

    t58 = (x2869-((x2870^x2871)>>x2872));

    if (t58 != -7) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile uint64_t x2889 = UINT64_MAX;
	static int32_t x2890 = 43;
	volatile int32_t x2891 = 64425718;
	uint8_t x2892 = 0U;
	uint64_t t59 = 2147844970480824108LLU;

    t59 = (x2889-((x2890^x2891)>>x2892));

    if (t59 != 18446744073645125922LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x2893 = 5240369;
	uint16_t x2894 = UINT16_MAX;
	int16_t x2895 = INT16_MAX;
	uint8_t x2896 = 17U;
	volatile int32_t t60 = -55568574;

    t60 = (x2893-((x2894^x2895)>>x2896));

    if (t60 != 5240369) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int16_t x2914 = -13694;
	int32_t x2915 = INT32_MIN;
	uint16_t x2916 = 26U;
	int32_t t61 = 0;

    t61 = (x2913-((x2914^x2915)>>x2916));

    if (t61 != -32799) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x2923 = INT8_MAX;
	int8_t x2924 = 0;
	volatile int32_t t62 = -9657;

    t62 = (x2921-((x2922^x2923)>>x2924));

    if (t62 != 32701) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x2937 = 4333U;
	int16_t x2939 = INT16_MIN;
	volatile uint16_t x2940 = 4U;
	volatile int32_t t63 = -115599;

    t63 = (x2937-((x2938^x2939)>>x2940));

    if (t63 != 2286) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x2973 = INT64_MAX;
	volatile int64_t t64 = 1005964LL;

    t64 = (x2973-((x2974^x2975)>>x2976));

    if (t64 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x3129 = INT8_MAX;
	int64_t x3130 = 5LL;
	uint16_t x3132 = 22U;
	volatile int64_t t65 = 38LL;

    t65 = (x3129-((x3130^x3131)>>x3132));

    if (t65 != 127LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint8_t x3161 = 106U;
	int16_t x3162 = INT16_MIN;
	int8_t x3163 = INT8_MIN;
	static uint8_t x3164 = 0U;

    t66 = (x3161-((x3162^x3163)>>x3164));

    if (t66 != -32534) { NG(); } else { ; }
	
}

void f67(void) {
    	static int32_t x3185 = INT32_MAX;
	uint64_t x3186 = 9LLU;

    t67 = (x3185-((x3186^x3187)>>x3188));

    if (t67 != 18446743982379858442LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x3225 = INT64_MIN;
	uint64_t x3226 = UINT64_MAX;
	uint64_t x3227 = 544010127811664LLU;
	volatile int32_t x3228 = 3;
	volatile uint64_t t68 = 51518472403LLU;

    t68 = (x3225-((x3226^x3227)>>x3228));

    if (t68 != 6917597028907058315LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x3249 = 5U;
	static int16_t x3250 = 15;
	uint8_t x3251 = 100U;
	uint8_t x3252 = 5U;

    t69 = (x3249-((x3250^x3251)>>x3252));

    if (t69 != 2) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int8_t x3269 = INT8_MAX;
	int32_t x3270 = -14;
	int16_t x3271 = INT16_MIN;
	volatile int32_t t70 = -797;

    t70 = (x3269-((x3270^x3271)>>x3272));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x3277 = INT32_MIN;
	static int32_t x3278 = INT32_MIN;
	volatile int64_t x3279 = INT64_MIN;
	uint16_t x3280 = 8U;
	int64_t t71 = -631715LL;

    t71 = (x3277-((x3278^x3279)>>x3280));

    if (t71 != -36028799158059008LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x3339 = 138767196701LLU;
	int32_t x3340 = 2;
	volatile uint64_t t72 = 86346396338813948LLU;

    t72 = (x3337-((x3338^x3339)>>x3340));

    if (t72 != 13835058089975450779LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x3385 = INT8_MIN;
	static volatile int8_t x3386 = 1;
	uint16_t x3387 = 5U;
	static uint16_t x3388 = 2U;

    t73 = (x3385-((x3386^x3387)>>x3388));

    if (t73 != -129) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x3409 = 61U;
	uint8_t x3411 = 1U;
	volatile int16_t x3412 = 1;
	int64_t t74 = 526256459787957LL;

    t74 = (x3409-((x3410^x3411)>>x3412));

    if (t74 != -4611686018427387842LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint8_t x3421 = 0U;
	volatile uint16_t x3422 = UINT16_MAX;
	uint32_t x3423 = UINT32_MAX;
	int16_t x3424 = 10;
	static uint32_t t75 = 2069680U;

    t75 = (x3421-((x3422^x3423)>>x3424));

    if (t75 != 4290773056U) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x3501 = INT16_MIN;
	volatile int8_t x3502 = INT8_MIN;
	static uint32_t x3503 = UINT32_MAX;
	volatile uint32_t t76 = 3304U;

    t76 = (x3501-((x3502^x3503)>>x3504));

    if (t76 != 4294934465U) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint8_t x3553 = 38U;
	int16_t x3554 = INT16_MIN;
	int64_t x3555 = INT64_MIN;
	static uint16_t x3556 = 0U;
	static volatile int64_t t77 = 75682889134066813LL;

    t77 = (x3553-((x3554^x3555)>>x3556));

    if (t77 != -9223372036854743002LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x3593 = 904499814;
	uint32_t x3594 = UINT32_MAX;
	int32_t x3595 = INT32_MIN;
	static volatile uint32_t t78 = 22U;

    t78 = (x3593-((x3594^x3595)>>x3596));

    if (t78 != 636064359U) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x3669 = INT64_MAX;
	int64_t x3670 = INT64_MAX;
	uint32_t x3671 = 777059346U;
	uint16_t x3672 = 0U;
	int64_t t79 = 719512862702906509LL;

    t79 = (x3669-((x3670^x3671)>>x3672));

    if (t79 != 777059346LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x3681 = INT32_MIN;
	static int64_t x3682 = -1LL;
	int32_t x3683 = INT32_MIN;

    t80 = (x3681-((x3682^x3683)>>x3684));

    if (t80 != -2148532223LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int32_t x3733 = -1;
	int16_t x3734 = INT16_MIN;
	uint64_t x3735 = 99170698LLU;
	uint32_t x3736 = 0U;
	static uint64_t t81 = 80700479LLU;

    t81 = (x3733-((x3734^x3735)>>x3736));

    if (t81 != 99174005LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x3770 = UINT16_MAX;
	uint16_t x3772 = 22U;
	volatile int32_t t82 = 108;

    t82 = (x3769-((x3770^x3771)>>x3772));

    if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int8_t x3817 = INT8_MIN;
	volatile int16_t x3818 = INT16_MIN;
	int16_t x3819 = -1;
	static uint64_t x3820 = 24LLU;
	volatile int32_t t83 = 1790;

    t83 = (x3817-((x3818^x3819)>>x3820));

    if (t83 != -128) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x3857 = -1;
	uint8_t x3858 = UINT8_MAX;
	int8_t x3859 = 39;
	static int32_t t84 = 22440;

    t84 = (x3857-((x3858^x3859)>>x3860));

    if (t84 != -109) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x3958 = 56;
	int8_t x3959 = 40;
	static uint8_t x3960 = 1U;

    t85 = (x3957-((x3958^x3959)>>x3960));

    if (t85 != -9) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x4061 = 11U;
	int64_t x4063 = INT64_MAX;
	uint8_t x4064 = 2U;

    t86 = (x4061-((x4062^x4063)>>x4064));

    if (t86 != -2305843008690027823LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x4101 = 68248837499908LLU;
	volatile uint32_t x4102 = 849666931U;
	uint32_t x4103 = UINT32_MAX;
	static volatile uint64_t x4104 = 3LLU;
	uint64_t t87 = 230771125689517084LLU;

    t87 = (x4101-((x4102^x4103)>>x4104));

    if (t87 != 68248406837363LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x4145 = UINT32_MAX;
	uint64_t x4146 = 1901906545LLU;
	int8_t x4147 = INT8_MAX;
	static int8_t x4148 = 34;

    t88 = (x4145-((x4146^x4147)>>x4148));

    if (t88 != 4294967295LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x4313 = INT16_MIN;
	uint64_t x4314 = UINT64_MAX;
	int8_t x4315 = -55;
	uint32_t x4316 = 20U;
	uint64_t t89 = 20276908727786163LLU;

    t89 = (x4313-((x4314^x4315)>>x4316));

    if (t89 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x4401 = 62U;
	uint32_t x4402 = 593U;
	uint32_t x4403 = UINT32_MAX;
	volatile uint16_t x4404 = 4U;
	volatile uint32_t t90 = 223805706U;

    t90 = (x4401-((x4402^x4403)>>x4404));

    if (t90 != 4026531940U) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint64_t x4417 = 8LLU;
	static int8_t x4418 = -1;
	volatile int8_t x4420 = 1;
	uint64_t t91 = 16393377274LLU;

    t91 = (x4417-((x4418^x4419)>>x4420));

    if (t91 != 8LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint8_t x4421 = 1U;
	uint8_t x4423 = 9U;
	volatile int16_t x4424 = 1;
	volatile int32_t t92 = 1;

    t92 = (x4421-((x4422^x4423)>>x4424));

    if (t92 != -16378) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x4465 = INT64_MIN;
	int16_t x4468 = 1;
	static volatile uint64_t t93 = 504139436306244988LLU;

    t93 = (x4465-((x4466^x4467)>>x4468));

    if (t93 != 12420709902537227LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint64_t x4609 = UINT64_MAX;
	uint32_t x4610 = 945260940U;
	int32_t x4611 = -1;
	uint8_t x4612 = 14U;
	uint64_t t94 = 5LLU;

    t94 = (x4609-((x4610^x4611)>>x4612));

    if (t94 != 18446744073709347166LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int16_t x4661 = INT16_MIN;
	uint32_t x4662 = 1601797418U;
	volatile int32_t x4664 = 25;

    t95 = (x4661-((x4662^x4663)>>x4664));

    if (t95 != 4294934417U) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x4685 = UINT64_MAX;
	uint8_t x4686 = UINT8_MAX;
	int64_t x4687 = 564096945136LL;
	uint8_t x4688 = 1U;
	static uint64_t t96 = 26822585075236LLU;

    t96 = (x4685-((x4686^x4687)>>x4688));

    if (t96 != 18446743791661079160LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile uint64_t x4689 = 156923266908LLU;
	static int32_t x4690 = INT32_MAX;
	static uint64_t x4691 = UINT64_MAX;
	static int8_t x4692 = 0;
	uint64_t t97 = 12725057LLU;

    t97 = (x4689-((x4690^x4691)>>x4692));

    if (t97 != 159070750556LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x4753 = 243654U;
	volatile uint8_t x4754 = 2U;
	uint8_t x4756 = 0U;

    t98 = (x4753-((x4754^x4755)>>x4756));

    if (t98 != 243626U) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x4798 = INT32_MAX;
	volatile int32_t t99 = 7;

    t99 = (x4797-((x4798^x4799)>>x4800));

    if (t99 != -1073741923) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x4817 = INT16_MIN;
	volatile uint64_t x4818 = 52340940LLU;
	volatile int64_t x4819 = INT64_MIN;
	int8_t x4820 = 1;
	uint64_t t100 = 5010268933560304LLU;

    t100 = (x4817-((x4818^x4819)>>x4820));

    if (t100 != 13835058055255960474LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x4841 = UINT64_MAX;
	int8_t x4842 = -1;
	uint64_t x4843 = 7591876LLU;
	uint8_t x4844 = 35U;
	static uint64_t t101 = 60522905164LLU;

    t101 = (x4841-((x4842^x4843)>>x4844));

    if (t101 != 18446744073172680704LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x4890 = -40288LL;
	static int16_t x4891 = INT16_MIN;
	volatile int64_t t102 = 3751179457655LL;

    t102 = (x4889-((x4890^x4891)>>x4892));

    if (t102 != -32768LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x5081 = 199;
	int32_t x5082 = 7993;
	int32_t x5083 = 437402;
	uint8_t x5084 = 10U;

    t103 = (x5081-((x5082^x5083)>>x5084));

    if (t103 != -229) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x5101 = 2U;
	int32_t x5103 = INT32_MIN;
	uint8_t x5104 = 11U;
	uint32_t t104 = 1406542776U;

    t104 = (x5101-((x5102^x5103)>>x5104));

    if (t104 != 4293918722U) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x5229 = -901LL;
	int64_t x5230 = INT64_MIN;
	int8_t x5232 = 6;

    t105 = (x5229-((x5230^x5231)>>x5232));

    if (t105 != -144115188042302341LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x5453 = 8026;
	int16_t x5455 = INT16_MIN;
	static int8_t x5456 = 7;
	volatile uint32_t t106 = 289U;

    t106 = (x5453-((x5454^x5455)>>x5456));

    if (t106 != 7771U) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x5498 = UINT64_MAX;
	volatile uint8_t x5499 = UINT8_MAX;
	uint16_t x5500 = 12U;
	uint64_t t107 = 34455914057971LLU;

    t107 = (x5497-((x5498^x5499)>>x5500));

    if (t107 != 18442240474083282140LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x5501 = -1LL;
	static volatile uint32_t x5502 = 28188U;
	uint32_t x5503 = 1525U;
	uint8_t x5504 = 3U;
	int64_t t108 = -51LL;

    t108 = (x5501-((x5502^x5503)>>x5504));

    if (t108 != -3454LL) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int64_t x5557 = INT64_MAX;
	int64_t x5558 = INT64_MIN;
	int32_t x5559 = INT32_MIN;
	static uint8_t x5560 = 23U;
	int64_t t109 = 841451606082LL;

    t109 = (x5557-((x5558^x5559)>>x5560));

    if (t109 != 9223370937343148287LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x5674 = -1;
	uint8_t x5676 = 6U;
	volatile int64_t t110 = 33301647016364LL;

    t110 = (x5673-((x5674^x5675)>>x5676));

    if (t110 != -2LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x5838 = INT8_MAX;
	static int64_t x5839 = 198643833730847LL;
	uint16_t x5840 = 1U;
	int64_t t111 = 140538845123LL;

    t111 = (x5837-((x5838^x5839)>>x5840));

    if (t111 != -99321916865457LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x5841 = INT16_MIN;
	static int32_t x5842 = -1;
	int16_t x5843 = -1;
	uint8_t x5844 = 9U;
	int32_t t112 = 1;

    t112 = (x5841-((x5842^x5843)>>x5844));

    if (t112 != -32768) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x5917 = -1;
	static uint16_t x5918 = UINT16_MAX;
	uint8_t x5919 = 53U;
	volatile uint8_t x5920 = 9U;
	int32_t t113 = -12670593;

    t113 = (x5917-((x5918^x5919)>>x5920));

    if (t113 != -128) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint8_t x5930 = UINT8_MAX;
	uint8_t x5931 = 74U;
	static uint8_t x5932 = 1U;
	int32_t t114 = -58073076;

    t114 = (x5929-((x5930^x5931)>>x5932));

    if (t114 != -91) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x5973 = -274273504147LL;
	int64_t x5974 = -1LL;
	int8_t x5975 = -1;
	int8_t x5976 = 9;
	int64_t t115 = 555863643798117500LL;

    t115 = (x5973-((x5974^x5975)>>x5976));

    if (t115 != -274273504147LL) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int32_t x5990 = INT32_MIN;
	int8_t x5991 = -1;

    t116 = (x5989-((x5990^x5991)>>x5992));

    if (t116 != -1073741813) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint64_t x6046 = UINT64_MAX;
	uint16_t x6048 = 11U;
	static volatile uint64_t t117 = 3945713936274LLU;

    t117 = (x6045-((x6046^x6047)>>x6048));

    if (t117 != 18437736874454810752LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x6053 = INT8_MIN;
	volatile int8_t x6054 = -6;
	static uint64_t x6055 = 69828759816270542LLU;
	int64_t x6056 = 2LL;
	uint64_t t118 = 35034LLU;

    t118 = (x6053-((x6054^x6055)>>x6056));

    if (t118 != 13852515245236231219LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint64_t x6341 = 1162104036792576LLU;
	uint8_t x6344 = 0U;
	uint64_t t119 = 384809LLU;

    t119 = (x6341-((x6342^x6343)>>x6344));

    if (t119 != 1162104036792456LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint8_t x6354 = 13U;
	static uint16_t x6355 = 162U;
	volatile uint8_t x6356 = 3U;
	int32_t t120 = 1;

    t120 = (x6353-((x6354^x6355)>>x6356));

    if (t120 != -635) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x6370 = 15002;
	uint64_t x6371 = 910002LLU;
	uint64_t x6372 = 1LLU;
	uint64_t t121 = 3353449174277537LLU;

    t121 = (x6369-((x6370^x6371)>>x6372));

    if (t121 != 18446744073709065196LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x6402 = -59174267155LL;
	int64_t x6403 = INT64_MIN;
	int64_t t122 = 80LL;

    t122 = (x6401-((x6402^x6403)>>x6404));

    if (t122 != -4611685988840254199LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x6537 = INT8_MIN;
	static int8_t x6538 = INT8_MIN;
	uint32_t x6539 = 56949984U;
	int8_t x6540 = 26;
	uint32_t t123 = 4009842U;

    t123 = (x6537-((x6538^x6539)>>x6540));

    if (t123 != 4294967105U) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x6553 = 831043271;
	static uint64_t x6555 = 5706313190LLU;
	uint16_t x6556 = 3U;
	uint64_t t124 = 2177074499352861081LLU;

    t124 = (x6553-((x6554^x6555)>>x6556));

    if (t124 != 117752964LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint64_t x6577 = UINT64_MAX;
	volatile int32_t x6578 = INT32_MIN;
	static int16_t x6580 = 2;

    t125 = (x6577-((x6578^x6579)>>x6580));

    if (t125 != UINT64_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	static int32_t x6637 = -1;
	int8_t x6638 = INT8_MIN;
	int32_t x6639 = INT32_MIN;
	static int32_t x6640 = 23;
	int32_t t126 = -16;

    t126 = (x6637-((x6638^x6639)>>x6640));

    if (t126 != -256) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x6793 = 2U;
	uint64_t x6794 = 94LLU;
	int32_t x6795 = -1;
	static int16_t x6796 = 0;
	uint64_t t127 = 1798093746LLU;

    t127 = (x6793-((x6794^x6795)>>x6796));

    if (t127 != 97LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x6993 = UINT8_MAX;
	static uint32_t x6994 = 4U;
	volatile uint64_t x6995 = UINT64_MAX;
	uint32_t x6996 = 7U;

    t128 = (x6993-((x6994^x6995)>>x6996));

    if (t128 != 18302628885633696000LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint16_t x7015 = 17U;
	static uint8_t x7016 = 0U;
	volatile uint64_t t129 = 222272123575LLU;

    t129 = (x7013-((x7014^x7015)>>x7016));

    if (t129 != 18446735067388469052LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x7061 = -56343364;
	static int8_t x7062 = 1;
	int64_t x7063 = INT64_MAX;
	int32_t x7064 = 9;
	volatile int64_t t130 = -6LL;

    t130 = (x7061-((x7062^x7063)>>x7064));

    if (t130 != -18014398565825347LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x7069 = -1;
	int32_t x7070 = INT32_MIN;
	static volatile uint64_t x7071 = 4277353900675123377LLU;
	uint8_t x7072 = 1U;
	static uint64_t t131 = 63LLU;

    t131 = (x7069-((x7070^x7071)>>x7072));

    if (t131 != 11362048986850548647LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x7217 = INT16_MIN;
	uint32_t x7220 = 5U;
	volatile int64_t t132 = -5807995573LL;

    t132 = (x7217-((x7218^x7219)>>x7220));

    if (t132 != -67141631LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x7245 = INT8_MIN;
	int8_t x7247 = -1;
	volatile uint8_t x7248 = 20U;
	static volatile uint64_t t133 = 178LLU;

    t133 = (x7245-((x7246^x7247)>>x7248));

    if (t133 != 18446726481523507073LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x7257 = -2083647LL;
	volatile int64_t x7258 = 2LL;
	uint16_t x7259 = UINT16_MAX;
	volatile int8_t x7260 = 1;
	int64_t t134 = 27015543LL;

    t134 = (x7257-((x7258^x7259)>>x7260));

    if (t134 != -2116413LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int8_t x7273 = -35;
	int8_t x7274 = INT8_MIN;
	uint64_t x7275 = UINT64_MAX;
	static uint64_t t135 = 245927462315978880LLU;

    t135 = (x7273-((x7274^x7275)>>x7276));

    if (t135 != 18446744073709551581LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x7353 = INT32_MAX;
	uint32_t x7355 = 1241U;
	uint16_t x7356 = 2U;
	uint32_t t136 = 1157744209U;

    t136 = (x7353-((x7354^x7355)>>x7356));

    if (t136 != 2147483382U) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x7429 = INT64_MAX;
	uint8_t x7430 = 6U;
	uint32_t x7431 = 1U;
	uint16_t x7432 = 13U;
	int64_t t137 = INT64_MAX;

    t137 = (x7429-((x7430^x7431)>>x7432));

    if (t137 != INT64_MAX) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x7517 = 9133799328103156LL;
	uint32_t x7518 = 11961U;
	volatile int32_t x7519 = -1;
	int16_t x7520 = 0;

    t138 = (x7517-((x7518^x7519)>>x7520));

    if (t138 != 9133795033147822LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x7557 = UINT8_MAX;
	uint64_t x7558 = 293116518593789497LLU;
	volatile int32_t x7559 = 1262;
	uint16_t x7560 = 43U;
	volatile uint64_t t139 = 132LLU;

    t139 = (x7557-((x7558^x7559)>>x7560));

    if (t139 != 18446744073709518548LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint64_t x7649 = 122742LLU;
	int64_t x7650 = INT64_MIN;
	uint64_t t140 = 128252346696996862LLU;

    t140 = (x7649-((x7650^x7651)>>x7652));

    if (t140 != 18158513697557962618LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x7693 = -1LL;
	int64_t x7694 = -1LL;
	int16_t x7695 = INT16_MIN;
	uint8_t x7696 = 2U;
	static volatile int64_t t141 = 56294853488938277LL;

    t141 = (x7693-((x7694^x7695)>>x7696));

    if (t141 != -8192LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x7754 = INT8_MAX;
	uint64_t x7755 = 6310958288899LLU;
	int8_t x7756 = 26;

    t142 = (x7753-((x7754^x7755)>>x7756));

    if (t142 != 18446744071561973928LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x7797 = UINT64_MAX;
	int64_t x7798 = INT64_MIN;
	uint8_t x7800 = 12U;
	uint64_t t143 = UINT64_MAX;

    t143 = (x7797-((x7798^x7799)>>x7800));

    if (t143 != UINT64_MAX) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x7873 = -33;
	int32_t x7874 = INT32_MIN;
	int32_t x7876 = 20;
	uint64_t t144 = 152LLU;

    t144 = (x7873-((x7874^x7875)>>x7876));

    if (t144 != 18446726481523507322LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x7913 = 1U;
	int8_t x7914 = INT8_MIN;
	int8_t x7915 = INT8_MIN;
	int64_t x7916 = 1LL;
	volatile uint32_t t145 = 20048409U;

    t145 = (x7913-((x7914^x7915)>>x7916));

    if (t145 != 1U) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x7941 = 95536U;
	int32_t x7942 = INT32_MIN;
	uint32_t x7943 = 3182U;
	static uint64_t x7944 = 2LLU;

    t146 = (x7941-((x7942^x7943)>>x7944));

    if (t146 != 3758191125U) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x8005 = 2U;
	volatile int16_t x8007 = INT16_MAX;
	static volatile int64_t t147 = 3484777404553LL;

    t147 = (x8005-((x8006^x8007)>>x8008));

    if (t147 != -61LL) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x8045 = -164321493LL;
	int64_t x8046 = INT64_MIN;
	int8_t x8047 = -43;
	uint64_t x8048 = 7LLU;

    t148 = (x8045-((x8046^x8047)>>x8048));

    if (t148 != -72057594202249428LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x8125 = 568803844432447117LLU;
	volatile uint16_t x8127 = UINT16_MAX;
	int8_t x8128 = 3;
	uint64_t t149 = 100LLU;

    t149 = (x8125-((x8126^x8127)>>x8128));

    if (t149 != 568803844432438926LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x8189 = INT16_MIN;
	uint64_t x8190 = UINT64_MAX;
	uint8_t x8191 = 15U;
	static int8_t x8192 = 1;
	uint64_t t150 = 1730LLU;

    t150 = (x8189-((x8190^x8191)>>x8192));

    if (t150 != 9223372036854743048LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x8217 = UINT8_MAX;
	static int8_t x8218 = INT8_MIN;
	static uint32_t x8219 = 58U;
	volatile uint8_t x8220 = 15U;
	volatile uint32_t t151 = 116U;

    t151 = (x8217-((x8218^x8219)>>x8220));

    if (t151 != 4294836480U) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int32_t x8221 = -1;
	volatile uint32_t x8222 = 118783467U;
	uint64_t x8223 = 2342227414337LLU;
	int16_t x8224 = 4;

    t152 = (x8221-((x8222^x8223)>>x8224));

    if (t152 != 18446743927327594741LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x8269 = -1LL;
	static uint32_t x8270 = 493709U;
	static uint32_t x8271 = UINT32_MAX;
	static volatile int64_t t153 = 871LL;

    t153 = (x8269-((x8270^x8271)>>x8272));

    if (t153 != -256LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x8285 = INT16_MIN;
	static int16_t x8287 = INT16_MIN;
	uint8_t x8288 = 0U;
	volatile uint64_t t154 = 55063912LLU;

    t154 = (x8285-((x8286^x8287)>>x8288));

    if (t154 != 18446744073709542568LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x8298 = INT32_MIN;
	uint32_t x8299 = 1608509989U;
	static uint32_t x8300 = 22U;

    t155 = (x8297-((x8298^x8299)>>x8300));

    if (t155 != 4290843887U) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x8313 = INT64_MAX;
	static int8_t x8314 = 1;
	int16_t x8315 = 0;
	int8_t x8316 = 11;

    t156 = (x8313-((x8314^x8315)>>x8316));

    if (t156 != INT64_MAX) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x8337 = 0U;
	uint64_t x8338 = UINT64_MAX;
	uint8_t x8339 = 14U;
	uint32_t x8340 = 26U;
	volatile uint64_t t157 = 140251025746616LLU;

    t157 = (x8337-((x8338^x8339)>>x8340));

    if (t157 != 18446743798831644673LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x8357 = INT16_MIN;
	uint32_t x8358 = 159933U;
	int8_t x8359 = INT8_MIN;
	volatile uint32_t t158 = 0U;

    t158 = (x8357-((x8358^x8359)>>x8360));

    if (t158 != 127171U) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x8373 = 50871513;
	int64_t x8374 = 8337162410577485LL;
	int64_t x8375 = INT64_MAX;
	int16_t x8376 = 1;
	volatile int64_t t159 = -2569638924874840149LL;

    t159 = (x8373-((x8374^x8375)>>x8376));

    if (t159 != -4607517437171227648LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x8493 = 15U;
	int64_t x8494 = -1980108693LL;
	int16_t x8495 = -1;
	volatile uint64_t x8496 = 7LLU;
	volatile int64_t t160 = -3142LL;

    t160 = (x8493-((x8494^x8495)>>x8496));

    if (t160 != -15469584LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int16_t x8513 = 9;
	uint64_t x8514 = UINT64_MAX;
	int8_t x8516 = 1;
	static uint64_t t161 = 115LLU;

    t161 = (x8513-((x8514^x8515)>>x8516));

    if (t161 != 9223372039002259465LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x8534 = 323;
	uint32_t x8535 = 7541937U;
	static int8_t x8536 = 0;
	volatile uint32_t t162 = 4274006U;

    t162 = (x8533-((x8534^x8535)>>x8536));

    if (t162 != 2139941389U) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x8593 = 10LL;
	static int8_t x8594 = 11;
	uint8_t x8595 = 4U;
	uint8_t x8596 = 6U;

    t163 = (x8593-((x8594^x8595)>>x8596));

    if (t163 != 10LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x8601 = INT32_MAX;
	int8_t x8602 = INT8_MIN;
	static volatile int64_t x8603 = INT64_MIN;
	int8_t x8604 = 40;
	int64_t t164 = -1LL;

    t164 = (x8601-((x8602^x8603)>>x8604));

    if (t164 != 2139095040LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x8626 = 75U;
	uint32_t x8627 = 7U;
	volatile int16_t x8628 = 0;
	static uint32_t t165 = 825971U;

    t165 = (x8625-((x8626^x8627)>>x8628));

    if (t165 != 4294966005U) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x8629 = 28;
	uint16_t x8630 = 25U;
	uint32_t x8631 = 87546700U;
	uint8_t x8632 = 2U;
	uint32_t t166 = 1632U;

    t166 = (x8629-((x8630^x8631)>>x8632));

    if (t166 != 4273080647U) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x8645 = INT16_MIN;
	uint8_t x8646 = 5U;
	volatile uint32_t x8647 = UINT32_MAX;
	uint32_t x8648 = 1U;
	uint32_t t167 = 896950714U;

    t167 = (x8645-((x8646^x8647)>>x8648));

    if (t167 != 2147450883U) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int64_t x8729 = INT64_MIN;
	uint64_t x8730 = 197396951484167LLU;
	int8_t x8731 = INT8_MIN;
	uint8_t x8732 = 2U;
	static volatile uint64_t t168 = 6928051819326LLU;

    t168 = (x8729-((x8730^x8731)>>x8732));

    if (t168 != 4611735367665258975LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x8773 = -4820;
	static volatile int32_t x8774 = INT32_MIN;
	int8_t x8775 = -1;
	static uint8_t x8776 = 3U;
	int32_t t169 = 19474607;

    t169 = (x8773-((x8774^x8775)>>x8776));

    if (t169 != -268440275) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x8801 = UINT32_MAX;
	static volatile uint64_t t170 = 16442174304457LLU;

    t170 = (x8801-((x8802^x8803)>>x8804));

    if (t170 != 4293955859LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x8965 = INT8_MIN;
	uint64_t x8966 = 92840550647132LLU;
	uint16_t x8967 = UINT16_MAX;
	int64_t x8968 = 15LL;
	static uint64_t t171 = 11744808253628LLU;

    t171 = (x8965-((x8966^x8967)>>x8968));

    if (t171 != 18446744070876282732LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x9189 = -16;
	static int16_t x9191 = INT16_MIN;
	uint16_t x9192 = 14U;
	volatile int32_t t172 = -172;

    t172 = (x9189-((x9190^x9191)>>x9192));

    if (t172 != -17) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x9201 = INT8_MIN;
	volatile int8_t x9202 = INT8_MIN;
	volatile uint64_t x9203 = UINT64_MAX;
	static uint16_t x9204 = 3U;

    t173 = (x9201-((x9202^x9203)>>x9204));

    if (t173 != 18446744073709551473LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint64_t x9221 = UINT64_MAX;
	static int8_t x9222 = INT8_MIN;
	static int64_t x9224 = 1LL;
	volatile uint64_t t174 = 255178501993154110LLU;

    t174 = (x9221-((x9222^x9223)>>x9224));

    if (t174 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t x9338 = INT64_MAX;
	volatile uint32_t x9339 = 5014U;
	static uint8_t x9340 = 5U;
	int64_t t175 = -5580496695209416LL;

    t175 = (x9337-((x9338^x9339)>>x9340));

    if (t175 != -288230376177628220LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x9365 = INT32_MIN;
	int64_t x9367 = -1LL;
	int16_t x9368 = 0;
	int64_t t176 = 539LL;

    t176 = (x9365-((x9366^x9367)>>x9368));

    if (t176 != -2155117466LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static int64_t x9385 = INT64_MAX;
	int16_t x9387 = -219;
	volatile uint16_t x9388 = 0U;
	int64_t t177 = -28737441669384LL;

    t177 = (x9385-((x9386^x9387)>>x9388));

    if (t177 != 9223372036854775642LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x9493 = INT64_MAX;
	static uint64_t x9494 = 101378663LLU;
	int8_t x9495 = -1;
	int8_t x9496 = 0;
	uint64_t t178 = 59LLU;

    t178 = (x9493-((x9494^x9495)>>x9496));

    if (t178 != 9223372036956154471LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x9526 = 24LLU;
	uint8_t x9527 = 0U;
	uint16_t x9528 = 4U;
	uint64_t t179 = 575685105311567985LLU;

    t179 = (x9525-((x9526^x9527)>>x9528));

    if (t179 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x9529 = INT32_MAX;
	static int64_t x9530 = -1LL;
	int64_t x9531 = INT64_MIN;
	static uint8_t x9532 = 41U;
	static volatile int64_t t180 = 16857260LL;

    t180 = (x9529-((x9530^x9531)>>x9532));

    if (t180 != 2143289344LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x9553 = -1;
	uint64_t x9554 = UINT64_MAX;
	int16_t x9555 = 47;
	int64_t x9556 = 40LL;

    t181 = (x9553-((x9554^x9555)>>x9556));

    if (t181 != 18446744073692774400LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x9558 = 64U;
	volatile uint8_t x9560 = 3U;
	volatile uint32_t t182 = 922834U;

    t182 = (x9557-((x9558^x9559)>>x9560));

    if (t182 != 6U) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x9561 = UINT64_MAX;
	int16_t x9562 = INT16_MAX;

    t183 = (x9561-((x9562^x9563)>>x9564));

    if (t183 != 18446744071562100735LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint8_t x9573 = 120U;
	uint64_t x9574 = 56875204567341LLU;
	uint32_t x9575 = UINT32_MAX;
	uint64_t t184 = 2092570953245589110LLU;

    t184 = (x9573-((x9574^x9575)>>x9576));

    if (t184 != 18446715635207418127LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x9649 = UINT16_MAX;
	static volatile int64_t x9650 = 526519582592787LL;
	uint16_t x9651 = 1476U;
	int8_t x9652 = 15;
	int64_t t185 = 893LL;

    t185 = (x9649-((x9650^x9651)>>x9652));

    if (t185 != -16068036961LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x9753 = -1;
	int64_t x9754 = -326LL;
	int32_t x9755 = -1;
	volatile int64_t t186 = 1880813521208LL;

    t186 = (x9753-((x9754^x9755)>>x9756));

    if (t186 != -1LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x9770 = -228;
	volatile int64_t x9772 = 2LL;

    t187 = (x9769-((x9770^x9771)>>x9772));

    if (t187 != -15332736216LL) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x9845 = -1;
	int32_t x9846 = -1;
	int8_t x9847 = INT8_MIN;
	volatile int32_t t188 = -200;

    t188 = (x9845-((x9846^x9847)>>x9848));

    if (t188 != -8) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x9849 = 2543428U;
	static volatile int16_t x9850 = -1;
	int8_t x9852 = 1;
	uint32_t t189 = 20093U;

    t189 = (x9849-((x9850^x9851)>>x9852));

    if (t189 != 2150027077U) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x9897 = UINT16_MAX;
	static int8_t x9898 = INT8_MAX;
	uint32_t x9900 = 7U;
	uint64_t t190 = 42LLU;

    t190 = (x9897-((x9898^x9899)>>x9900));

    if (t190 != 18446744073709435394LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x9929 = 15;
	int32_t x9930 = INT32_MIN;
	int32_t x9931 = -2370;
	static int32_t x9932 = 23;
	volatile int32_t t191 = 612658;

    t191 = (x9929-((x9930^x9931)>>x9932));

    if (t191 != -240) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile uint16_t x9977 = 0U;
	uint32_t x9979 = 698159448U;

    t192 = (x9977-((x9978^x9979)>>x9980));

    if (t192 != 4251332332U) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x9981 = -110762747;

    t193 = (x9981-((x9982^x9983)>>x9984));

    if (t193 != -110762811) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x10009 = INT64_MIN;
	uint64_t x10010 = UINT64_MAX;
	int32_t x10011 = INT32_MAX;
	volatile uint8_t x10012 = 7U;
	volatile uint64_t t194 = 147471899971892LLU;

    t194 = (x10009-((x10010^x10011)>>x10012));

    if (t194 != 9079256848795697152LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile uint16_t x10021 = 107U;
	volatile uint8_t x10023 = UINT8_MAX;
	static volatile int8_t x10024 = 7;
	uint64_t t195 = 14518564143387948LLU;

    t195 = (x10021-((x10022^x10023)>>x10024));

    if (t195 != 18446744073709547691LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x10037 = 64258LLU;
	uint64_t x10038 = 1287118824LLU;
	int8_t x10039 = -4;
	volatile int8_t x10040 = 9;
	uint64_t t196 = 7403LLU;

    t196 = (x10037-((x10038^x10039)>>x10040));

    if (t196 != 18410715276693165810LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x10041 = 4513967182LLU;
	static volatile int32_t x10042 = -1;
	int32_t x10043 = -22257;
	volatile int16_t x10044 = 1;
	volatile uint64_t t197 = 273258828306630610LLU;

    t197 = (x10041-((x10042^x10043)>>x10044));

    if (t197 != 4513956054LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x10049 = 384U;
	volatile uint16_t x10050 = 4470U;
	uint64_t x10051 = UINT64_MAX;
	int8_t x10052 = 0;
	volatile uint64_t t198 = 1626959917589773LLU;

    t198 = (x10049-((x10050^x10051)>>x10052));

    if (t198 != 4855LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x10061 = -15;
	uint32_t x10062 = 52486U;
	static volatile uint8_t x10063 = 108U;
	static uint32_t t199 = 6866U;

    t199 = (x10061-((x10062^x10063)>>x10064));

    if (t199 != 4294914695U) { NG(); } else { ; }
	
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

