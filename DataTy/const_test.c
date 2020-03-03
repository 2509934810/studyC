#include<stdio.h>

int a =1;
int b =2 ;

void add(){
    extern int a;
    a = 5;
    printf("%d, %d\n", a, b);
}

void main(){
    const int MAX_LENGTH = 10;
    add();
    printf("%d\n", a);
    printf("%d\n", MAX_LENGTH);
}