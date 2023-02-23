
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

int8_t x13 = INT8_MAX;


void f0(void) {
    	int8_t x14 = INT8_MAX;
	uint32_t x15 = 370304U;
	static int8_t x16 = 18;
	static int32_t t0 = 161;

    t0 = (x13>>((x14^x15)>>x16));

    if (t0 != 63) { NG(); } else { ; }
	
}

int main(void) {
        f0();


    return 0;
}

