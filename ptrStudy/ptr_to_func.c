#include<stdio.h>
#include<time.h>

void getTime(unsigned long *ptr);

void getTime(unsigned long *ptr){
    *ptr = time(NULL);
    return;
}

void main(){
    unsigned long ptr;
    getTime(&ptr);
    printf("%ld", ptr);
}