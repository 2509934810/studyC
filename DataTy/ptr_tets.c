#include<stdio.h>

int a= 10;
int b = 20;
int *ptr;
void main(){
    ptr = &a;
    printf("a的数值是: %d\n", *ptr);
    int c;
    c = (a == 100) ? 20 : 50;
    printf("c = %d\n", c);
}