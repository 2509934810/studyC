#include<stdio.h>

void main(){
    int a = 1;
    int *ptr;
    int **ptrs;
    ptr = &a;
    ptrs = &ptr;
    printf("ptr = %p\n", ptr);
    printf("ptrs = %p\n", ptrs);
    printf("ptr = %p\n", *ptrs);
    printf("a = %d\n", *ptr);

}