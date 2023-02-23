
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
    	int64_t x89 = INT64_MAX;
	int8_t x90 = -11;
	int64_t x91 = -1LL;
	int8_t x92 = -1;
	volatile int64_t t0 = 102392LL;

    t0 = (x89>>((x90*x91)+x92));

    if (t0 != 9007199254740991LL) { NG(); } else { ; }
	
}

int main(void) {
        f0();


    return 0;
}

