#include <stdio.h>

int func(int num){
    for(int i=0; i<num; i++)
        printf("hello");
    return num;
}

int main(){
    func(1);
    func(2);
}
