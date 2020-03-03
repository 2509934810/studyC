#include<stdio.h>

union Data{
    int a;
    char b[20];
    int c [10];
};

void main(){
    union Data data;
    printf("Data length = %ld\n", sizeof(data));
}