
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

uint8_t x130 = 2U;


void f0(void) {
    	static volatile int64_t x129 = 212550688LL;
	int64_t x131 = -1LL;
	volatile int64_t x132 = -1LL;
	volatile int64_t t0 = -1610LL;

    t0 = (x129<<((x130+x131)+x132));

    if (t0 != 212550688LL) { NG(); } else { ; }
	
}

int main(void) {
        f0();


    return 0;
}

