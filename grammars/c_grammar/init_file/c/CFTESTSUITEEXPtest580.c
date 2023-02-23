
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

int32_t t0 = INT32_MAX;
uint8_t x356 = 16U;
uint8_t x464 = 3U;
int32_t t2 = 5420;


void f0(void) {
    	int32_t x97 = INT32_MAX;
	uint64_t x98 = UINT64_MAX;
	uint64_t x99 = UINT64_MAX;
	int32_t x100 = 1;

    t0 = (x97<<((x98*x99)^x100));

    if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x353 = 64;
	volatile int64_t x354 = -1LL;
	int8_t x355 = -1;
	int32_t t1 = 0;

    t1 = (x353<<((x354*x355)^x356));

    if (t1 != 8388608) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x461 = INT16_MAX;
	int16_t x462 = -4;
	int64_t x463 = -1LL;

    t2 = (x461<<((x462*x463)^x464));

    if (t2 != 4194176) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();


    return 0;
}

