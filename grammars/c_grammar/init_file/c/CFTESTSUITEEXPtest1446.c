
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

static volatile int64_t x382 = -1LL;
int16_t x383 = -1;
static volatile uint8_t x384 = 0U;


void f0(void) {
    	int32_t x381 = -1;
	volatile int32_t t0 = -267370370;

    t0 = (x381/((x382==x383)<<x384));

    if (t0 != -1) { NG(); } else { ; }
	
}

int main(void) {
        f0();


    return 0;
}

