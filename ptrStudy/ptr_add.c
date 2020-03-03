#include<stdio.h>
#define MAX 3

void main(){
    int i;
    int numL[3] = {1, 2, 3};
    int *ptr = numL;
    for(i=0; i< MAX; i++){
        printf("%d 地址 = %p\n", i, ptr);
        printf("%d 地址 = %d\n", i, *ptr);
        ptr++;
    }
}