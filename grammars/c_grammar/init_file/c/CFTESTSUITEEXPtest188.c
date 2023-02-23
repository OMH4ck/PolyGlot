
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

static int32_t x139 = -1;


void f0(void) {
    	uint16_t x137 = 13U;
	static int16_t x138 = -6;
	int8_t x140 = -1;
	int32_t t0 = 95687;

    t0 = (x137<<((x138+x139)^x140));

    if (t0 != 832) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint64_t x293 = UINT64_MAX;
	volatile int32_t x294 = 49;
	int16_t x295 = -1;
	uint16_t x296 = 3U;
	uint64_t t1 = 4317LLU;

    t1 = (x293<<((x294+x295)^x296));

    if (t1 != 18444492273895866368LLU) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();


    return 0;
}

