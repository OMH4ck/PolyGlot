
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

int16_t x346 = INT16_MIN;


void f0(void) {
    	volatile uint8_t x345 = UINT8_MAX;
	volatile int16_t x347 = INT16_MIN;
	int16_t x348 = 0;
	int32_t t0 = 1;

    t0 = (x345<<((x346^x347)<<x348));

    if (t0 != 255) { NG(); } else { ; }
	
}

int main(void) {
        f0();


    return 0;
}

