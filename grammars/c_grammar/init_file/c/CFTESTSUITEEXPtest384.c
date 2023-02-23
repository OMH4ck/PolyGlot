
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

uint64_t x516 = UINT64_MAX;
int32_t t1 = 59;


void f0(void) {
    	volatile int16_t x285 = INT16_MAX;
	static uint64_t x286 = UINT64_MAX;
	int8_t x287 = INT8_MAX;
	int8_t x288 = INT8_MIN;
	int32_t t0 = 32260;

    t0 = (x285<<((x286-x287)^x288));

    if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x513 = INT16_MAX;
	int32_t x514 = -4;
	volatile int32_t x515 = -1;

    t1 = (x513<<((x514-x515)^x516));

    if (t1 != 131068) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();


    return 0;
}

