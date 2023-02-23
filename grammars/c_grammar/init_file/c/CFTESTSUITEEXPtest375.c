
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

uint32_t x89 = UINT32_MAX;
volatile uint32_t t0 = 11U;


void f0(void) {
    	volatile int64_t x90 = -1LL;
	static int8_t x91 = -1;
	static uint8_t x92 = 30U;

    t0 = (x89>>((x90-x91)|x92));

    if (t0 != 3U) { NG(); } else { ; }
	
}

int main(void) {
        f0();


    return 0;
}

