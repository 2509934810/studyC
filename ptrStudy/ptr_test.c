#include<stdio.h>

void main(){
    int p = 20;
    int *b;
    b = &p;
    printf("P 内存地址 : %p\n", &p);
    printf("P 内存地址 : %p\n", b);
    printf("P = : %d\n", *b);
    int *sptr = NULL;
    printf("sptr = %p\n", sptr);
}