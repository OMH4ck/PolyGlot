
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

static int8_t x365 = INT8_MAX;


void f0(void) {
    	int64_t x366 = 56439725436994195LL;
	int8_t x367 = 0;
	int32_t x368 = 1;
	volatile int32_t t0 = -38896;

    t0 = (x365<<((x366*x367)|x368));

    if (t0 != 254) { NG(); } else { ; }
	
}

int main(void) {
        f0();


    return 0;
}

