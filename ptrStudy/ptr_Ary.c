#include<stdio.h>
#define MAX 3

void main(){
    int a[MAX] = {1, 2, 3};
    int i, *ptr[MAX];
    for(i=0; i<MAX; i++){
        ptr[i] = &a[i];
    }
    for(i=0; i<MAX; i++){
        printf("%p = %d \n", ptr[i], *ptr[i]);
    }
}
