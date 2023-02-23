
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

int8_t x165 = INT8_MAX;
int32_t t0 = 45;
uint16_t x178 = 3U;
static int64_t x466 = -1LL;
volatile int32_t t2 = -865000442;
static int32_t x1067 = -1;
volatile int64_t t5 = 195370461LL;
int8_t x1079 = -1;
uint32_t t6 = 11925U;
uint8_t x1242 = UINT8_MAX;
volatile int8_t x1243 = -1;
uint8_t x1284 = 12U;


void f0(void) {
    	int16_t x166 = 2685;
	static uint8_t x167 = 1U;
	int8_t x168 = 5;

    t0 = (x165<<((x166%x167)|x168));

    if (t0 != 4064) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x177 = INT8_MAX;
	int64_t x179 = -21968LL;
	uint16_t x180 = 19U;
	volatile int32_t t1 = -162629885;

    t1 = (x177<<((x178%x179)|x180));

    if (t1 != 66584576) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x465 = 14332;
	uint64_t x467 = 1LLU;
	int16_t x468 = 0;

    t2 = (x465<<((x466%x467)|x468));

    if (t2 != 14332) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x585 = 2U;
	int64_t x586 = INT64_MAX;
	uint8_t x587 = 1U;
	volatile uint64_t x588 = 12LLU;
	static volatile int32_t t3 = -1;

    t3 = (x585<<((x586%x587)|x588));

    if (t3 != 8192) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x801 = 111843246128013LLU;
	int8_t x802 = 0;
	volatile int8_t x803 = 35;
	static int64_t x804 = 1LL;
	static volatile uint64_t t4 = 145LLU;

    t4 = (x801<<((x802%x803)|x804));

    if (t4 != 223686492256026LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static int64_t x1065 = 360LL;
	static uint8_t x1066 = 23U;
	static uint8_t x1068 = 12U;

    t5 = (x1065<<((x1066%x1067)|x1068));

    if (t5 != 1474560LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x1077 = UINT32_MAX;
	uint8_t x1078 = UINT8_MAX;
	uint8_t x1080 = 1U;

    t6 = (x1077<<((x1078%x1079)|x1080));

    if (t6 != 4294967294U) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x1241 = UINT8_MAX;
	static uint8_t x1244 = 13U;
	int32_t t7 = 12127;

    t7 = (x1241<<((x1242%x1243)|x1244));

    if (t7 != 2088960) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x1281 = 228;
	int16_t x1282 = 9;
	volatile uint16_t x1283 = UINT16_MAX;
	int32_t t8 = 1070999;

    t8 = (x1281<<((x1282%x1283)|x1284));

    if (t8 != 1867776) { NG(); } else { ; }
	
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


    return 0;
}

