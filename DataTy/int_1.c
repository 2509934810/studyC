#include<stdio.h>


int a, b;
int addrwonum(){
    extern int a;
    extern int b;
    a = 1;
    b = 1;
    return a+b;
}



void main(){
    printf("addNum result :%d\n", addrwonum());
    printf("a = %d, b = %d", a, b);
}