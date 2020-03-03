#include<stdio.h>

void main(){
    int a;
    scanf("please input a: %d", &a);
    switch (a)
    {
    case /* constant-expression */1:
        /* code */
        printf("monday");
        break;
    case 2:
        printf("thuerst");
        break;
    default:
        printf("error\n");
        break;
    }
}