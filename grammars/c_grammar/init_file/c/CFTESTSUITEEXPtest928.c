
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

static int64_t t0 = 3679469LL;
static int8_t x286 = INT8_MIN;
int8_t x288 = 6;
volatile uint32_t t2 = 442U;
uint16_t x307 = 60U;


void f0(void) {
    	int64_t x73 = -1LL;
	int32_t x74 = 5917438;
	volatile int32_t x75 = INT32_MIN;
	uint16_t x76 = 0U;

    t0 = (x73/((x74%x75)>>x76));

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint16_t x225 = UINT16_MAX;
	uint64_t x226 = 959671267535LLU;
	static uint64_t x227 = UINT64_MAX;
	uint32_t x228 = 21U;
	volatile uint64_t t1 = 10293843289LLU;

    t1 = (x225/((x226%x227)>>x228));

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x285 = INT8_MAX;
	uint32_t x287 = UINT32_MAX;

    t2 = (x285/((x286%x287)>>x288));

    if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x305 = 279225595;
	uint64_t x306 = UINT64_MAX;
	uint8_t x308 = 1U;
	uint64_t t3 = 76567005600LLU;

    t3 = (x305/((x306%x307)>>x308));

    if (t3 != 39889370LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x365 = INT16_MAX;
	int64_t x366 = INT64_MAX;
	int8_t x367 = INT8_MIN;
	uint16_t x368 = 0U;
	int64_t t4 = -41330990870LL;

    t4 = (x365/((x366%x367)>>x368));

    if (t4 != 258LL) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();


    return 0;
}

