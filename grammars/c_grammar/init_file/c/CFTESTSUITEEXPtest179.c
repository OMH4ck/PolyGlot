
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



void f0(void) {
    	static uint64_t x129 = 32558610141102LLU;
	int8_t x130 = 8;
	volatile uint32_t x131 = UINT32_MAX;
	volatile int8_t x132 = 1;
	volatile uint64_t t0 = 63891297366LLU;

    t0 = (x129>>((x130+x131)|x132));

    if (t0 != 254364141727LLU) { NG(); } else { ; }
	
}

int main(void) {
        f0();


    return 0;
}

