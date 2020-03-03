#include<stdio.h>
#include<float.h>

void main(){
    printf("float length %lu\n", sizeof(float));
    printf("float minNum %E\n", FLT_MIN);
    printf("float maxNum %E\n", FLT_MAX);
    printf("float 精度: %d\n", FLT_DIG);
}