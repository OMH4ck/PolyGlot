
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

static volatile uint32_t x346 = UINT32_MAX;
static int32_t t0 = -355465;
int16_t x508 = INT16_MIN;


void f0(void) {
    	uint8_t x345 = 1U;
	static int8_t x347 = INT8_MIN;
	int16_t x348 = 1;

    t0 = (x345/((x346/x347)==x348));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x505 = INT8_MIN;
	int16_t x506 = INT16_MIN;
	static uint8_t x507 = 1U;
	int32_t t1 = 406124605;

    t1 = (x505/((x506/x507)==x508));

    if (t1 != -128) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();


    return 0;
}

