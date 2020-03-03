#include<stdio.h>
#include<stdlib.h>


int main(){
    int a = 20;
    int b = 10;
    int c;
    if (b == 0){
        fprintf(stderr, "除数不可以为0\n");
        exit(EXIT_FAILURE);
    }
    else{
        c = a/b;
        fprintf(stderr, "结果为 %d\n", c);
        exit(EXIT_SUCCESS);
    }
    return 0;
}