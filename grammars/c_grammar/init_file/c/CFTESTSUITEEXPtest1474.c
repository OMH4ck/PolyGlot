
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

uint8_t x101 = UINT8_MAX;


void f0(void) {
    	int16_t x102 = INT16_MIN;
	static int16_t x103 = INT16_MAX;
	uint8_t x104 = 0U;
	int32_t t0 = -677198;

    t0 = (x101/((x102==x103)==x104));

    if (t0 != 255) { NG(); } else { ; }
	
}

int main(void) {
        f0();


    return 0;
}

