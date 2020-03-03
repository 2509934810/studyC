#include<stdio.h>
#include<stdlib.h>

void main(){
    int dividend = 20;
    int dovosor = 0;
    int quotient;
    if (dovosor == 0){
        fprintf(stderr, "除数为0退出运行\n");
        exit(-1);
    }
    else{
        quotient = dividend/dovosor;
        fprintf(stderr, "quotient 的数值为 %d\n", quotient);
    }
}