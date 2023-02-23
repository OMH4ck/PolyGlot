
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
    	uint64_t x157 = 7073503LLU;
	int8_t x158 = -1;
	int8_t x159 = 0;
	uint32_t x160 = 44U;
	uint64_t t0 = 394622038239797348LLU;

    t0 = (x157>>((x158*x159)^x160));

    if (t0 != 0LLU) { NG(); } else { ; }
	
}

int main(void) {
        f0();


    return 0;
}

