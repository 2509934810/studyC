#include<stdio.h>

int a= 6;

void main(){
    while(a >0){
        extern int a;
        printf("cant stop\n");
        a --;
    }
}