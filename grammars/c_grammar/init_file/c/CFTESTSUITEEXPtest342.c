
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

uint64_t t0 = UINT64_MAX;


void f0(void) {
    	uint64_t x201 = UINT64_MAX;
	int16_t x202 = 212;
	int8_t x203 = INT8_MAX;
	int8_t x204 = 18;

    t0 = (x201<<((x202-x203)>>x204));

    if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

int main(void) {
        f0();


    return 0;
}

