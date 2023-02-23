
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

uint64_t x79 = UINT64_MAX;
int16_t x197 = 6;
uint8_t x198 = 0U;
volatile int32_t t3 = 314446;
int32_t t5 = -436;
int32_t t6 = -4;
volatile int8_t x420 = 42;
int8_t x480 = 33;
volatile uint64_t t9 = 1331LLU;
int64_t x673 = 58450822328LL;
int64_t t11 = -3LL;
int64_t x723 = INT64_MIN;
int32_t t12 = -204688;
int8_t x785 = INT8_MAX;
uint8_t x788 = 0U;
int16_t x849 = INT16_MAX;
int64_t x851 = 1135LL;
volatile int32_t t16 = 1;
volatile int8_t x950 = -56;
int32_t x951 = INT32_MIN;
int16_t x952 = 22;
uint16_t x1053 = 10770U;
static uint16_t x1059 = 255U;
volatile int32_t x1060 = 0;
int64_t x1118 = 16682656638LL;
volatile uint32_t x1119 = 1346172077U;
volatile int32_t t22 = 189393;
int64_t x1135 = -271870167005635618LL;
int8_t x1144 = 14;
volatile int32_t t25 = -1344684;
uint8_t x1286 = 14U;
int16_t x1342 = 9036;
uint8_t x1401 = 27U;
int32_t t31 = 13;
static uint16_t x1547 = 189U;
int32_t x1577 = 95;
int8_t x1578 = -11;
int16_t x1580 = 20;
volatile int16_t x1586 = -1;
int16_t x1590 = -6188;
uint16_t x1592 = 2U;
volatile int64_t x1610 = INT64_MAX;
uint64_t x1611 = 846068360LLU;


void f0(void) {
    	uint64_t x77 = UINT64_MAX;
	uint8_t x78 = UINT8_MAX;
	int32_t x80 = 0;
	uint64_t t0 = UINT64_MAX;

    t0 = (x77>>((x78>x79)^x80));

    if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x125 = UINT32_MAX;
	int8_t x126 = INT8_MIN;
	static volatile uint8_t x127 = 68U;
	uint8_t x128 = 2U;
	uint32_t t1 = 16204542U;

    t1 = (x125>>((x126>x127)^x128));

    if (t1 != 1073741823U) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x157 = INT16_MAX;
	int16_t x158 = INT16_MAX;
	volatile int64_t x159 = -1LL;
	int8_t x160 = 11;
	int32_t t2 = -352928914;

    t2 = (x157>>((x158>x159)^x160));

    if (t2 != 31) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x199 = -1;
	static uint32_t x200 = 2U;

    t3 = (x197>>((x198>x199)^x200));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x205 = INT32_MAX;
	int32_t x206 = -115672896;
	static int32_t x207 = -13;
	uint8_t x208 = 1U;
	volatile int32_t t4 = 498;

    t4 = (x205>>((x206>x207)^x208));

    if (t4 != 1073741823) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x237 = UINT8_MAX;
	int8_t x238 = 17;
	int16_t x239 = INT16_MIN;
	uint8_t x240 = 6U;

    t5 = (x237>>((x238>x239)^x240));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x329 = INT8_MAX;
	uint32_t x330 = 1215837U;
	uint16_t x331 = 180U;
	int8_t x332 = 3;

    t6 = (x329>>((x330>x331)^x332));

    if (t6 != 31) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile uint16_t x393 = 5U;
	static int32_t x394 = -1;
	volatile int16_t x395 = 6658;
	volatile uint8_t x396 = 3U;
	int32_t t7 = -3906;

    t7 = (x393>>((x394>x395)^x396));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x417 = UINT64_MAX;
	static uint16_t x418 = UINT16_MAX;
	int64_t x419 = -1LL;
	volatile uint64_t t8 = 22020107LLU;

    t8 = (x417>>((x418>x419)^x420));

    if (t8 != 2097151LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint64_t x477 = UINT64_MAX;
	uint8_t x478 = 11U;
	int32_t x479 = INT32_MAX;

    t9 = (x477>>((x478>x479)^x480));

    if (t9 != 2147483647LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x577 = UINT64_MAX;
	static int64_t x578 = 1LL;
	uint32_t x579 = 45172U;
	uint8_t x580 = 1U;
	volatile uint64_t t10 = 392LLU;

    t10 = (x577>>((x578>x579)^x580));

    if (t10 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x674 = 15;
	static int64_t x675 = INT64_MIN;
	volatile uint16_t x676 = 10U;

    t11 = (x673>>((x674>x675)^x676));

    if (t11 != 28540440LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x721 = INT32_MAX;
	int64_t x722 = -990696627LL;
	static int8_t x724 = 4;

    t12 = (x721>>((x722>x723)^x724));

    if (t12 != 67108863) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x786 = -1;
	uint16_t x787 = 126U;
	int32_t t13 = -760;

    t13 = (x785>>((x786>x787)^x788));

    if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x793 = 1;
	int32_t x794 = INT32_MAX;
	volatile int16_t x795 = -1;
	uint8_t x796 = 23U;
	volatile int32_t t14 = -13595733;

    t14 = (x793>>((x794>x795)^x796));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x817 = 931LL;
	int8_t x818 = 1;
	int64_t x819 = -1LL;
	int16_t x820 = 24;
	int64_t t15 = -1LL;

    t15 = (x817>>((x818>x819)^x820));

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x850 = INT8_MIN;
	int8_t x852 = 6;

    t16 = (x849>>((x850>x851)^x852));

    if (t16 != 511) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x909 = 1U;
	int64_t x910 = -1103LL;
	volatile uint32_t x911 = 1089U;
	uint8_t x912 = 1U;
	int32_t t17 = -115;

    t17 = (x909>>((x910>x911)^x912));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x949 = 2;
	volatile int32_t t18 = 351286721;

    t18 = (x949>>((x950>x951)^x952));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x985 = INT64_MAX;
	int32_t x986 = INT32_MAX;
	int32_t x987 = INT32_MAX;
	static int64_t x988 = 43LL;
	volatile int64_t t19 = -19748867820606LL;

    t19 = (x985>>((x986>x987)^x988));

    if (t19 != 1048575LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x1054 = INT8_MIN;
	uint8_t x1055 = 71U;
	uint32_t x1056 = 0U;
	volatile int32_t t20 = -546494;

    t20 = (x1053>>((x1054>x1055)^x1056));

    if (t20 != 10770) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint32_t x1057 = 24202568U;
	uint64_t x1058 = 797328LLU;
	volatile uint32_t t21 = 892U;

    t21 = (x1057>>((x1058>x1059)^x1060));

    if (t21 != 12101284U) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint16_t x1117 = 41U;
	static uint16_t x1120 = 2U;

    t22 = (x1117>>((x1118>x1119)^x1120));

    if (t22 != 5) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint64_t x1129 = 25030116103LLU;
	volatile int32_t x1130 = INT32_MIN;
	uint32_t x1131 = 2129U;
	volatile uint32_t x1132 = 1U;
	uint64_t t23 = 65177038LLU;

    t23 = (x1129>>((x1130>x1131)^x1132));

    if (t23 != 25030116103LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint64_t x1133 = 6791825430727LLU;
	int32_t x1134 = INT32_MIN;
	static volatile uint16_t x1136 = 1U;
	volatile uint64_t t24 = 10101672172LLU;

    t24 = (x1133>>((x1134>x1135)^x1136));

    if (t24 != 6791825430727LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x1141 = 9912U;
	int64_t x1142 = INT64_MAX;
	int8_t x1143 = -1;

    t25 = (x1141>>((x1142>x1143)^x1144));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint64_t x1153 = 57961225015LLU;
	volatile int64_t x1154 = INT64_MIN;
	int32_t x1155 = 11174467;
	uint8_t x1156 = 9U;
	uint64_t t26 = 139LLU;

    t26 = (x1153>>((x1154>x1155)^x1156));

    if (t26 != 113205517LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x1237 = INT64_MAX;
	int8_t x1238 = 7;
	int64_t x1239 = 1196949011LL;
	uint32_t x1240 = 59U;
	static int64_t t27 = -23471118635085LL;

    t27 = (x1237>>((x1238>x1239)^x1240));

    if (t27 != 15LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x1285 = INT16_MAX;
	int64_t x1287 = INT64_MAX;
	uint8_t x1288 = 15U;
	static volatile int32_t t28 = 2;

    t28 = (x1285>>((x1286>x1287)^x1288));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint32_t x1341 = 49890U;
	uint32_t x1343 = 7076139U;
	volatile uint64_t x1344 = 3LLU;
	uint32_t t29 = 3230U;

    t29 = (x1341>>((x1342>x1343)^x1344));

    if (t29 != 6236U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x1402 = UINT64_MAX;
	int16_t x1403 = INT16_MAX;
	static uint8_t x1404 = 1U;
	volatile int32_t t30 = 929999;

    t30 = (x1401>>((x1402>x1403)^x1404));

    if (t30 != 27) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x1533 = 895;
	int16_t x1534 = INT16_MIN;
	static int8_t x1535 = INT8_MAX;
	uint16_t x1536 = 2U;

    t31 = (x1533>>((x1534>x1535)^x1536));

    if (t31 != 223) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint64_t x1545 = 15444LLU;
	uint64_t x1546 = 193824705LLU;
	static int8_t x1548 = 7;
	static uint64_t t32 = 0LLU;

    t32 = (x1545>>((x1546>x1547)^x1548));

    if (t32 != 241LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x1579 = INT64_MAX;
	static int32_t t33 = 233423560;

    t33 = (x1577>>((x1578>x1579)^x1580));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint32_t x1585 = 282877088U;
	static int64_t x1587 = INT64_MIN;
	int8_t x1588 = 11;
	uint32_t t34 = 17403389U;

    t34 = (x1585>>((x1586>x1587)^x1588));

    if (t34 != 276247U) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x1589 = UINT64_MAX;
	static volatile int32_t x1591 = -7;
	volatile uint64_t t35 = 190352000875332LLU;

    t35 = (x1589>>((x1590>x1591)^x1592));

    if (t35 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x1609 = INT32_MAX;
	uint32_t x1612 = 24U;
	volatile int32_t t36 = 151690;

    t36 = (x1609>>((x1610>x1611)^x1612));

    if (t36 != 63) { NG(); } else { ; }
	
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


    return 0;
}

