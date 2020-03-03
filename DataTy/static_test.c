#include<stdio.h>

static int c = 10;

void runprt(){
    static int x = 5;
    x++;
    printf("x = %d\n", x);
}

void main(){
    while(c--){
        runprt();
    }
}