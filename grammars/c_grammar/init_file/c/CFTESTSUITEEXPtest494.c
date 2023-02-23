
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
    	static int16_t x385 = 20;
	int64_t x386 = INT64_MIN;
	uint64_t x387 = 1521065628649737265LLU;
	static int64_t x388 = INT64_MIN;
	int32_t t0 = 1;

    t0 = (x385/((x386*x387)==x388));

    if (t0 != 20) { NG(); } else { ; }
	
}

int main(void) {
        f0();


    return 0;
}

