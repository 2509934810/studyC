#include<stdio.h>

int fib1(unsigned int num){
    if (num <=1){
        return 1;
    }
    return num * fib1(num-1);
}

// int result = 1;

// int fib2(int num){
//     for(int i=1; i<=num; i++){
//         result *= i;
//     }
//     return result;
// }

void main(){
    int num = 20;
    // scanf("please the num %d\n", &num);
    int res;
    res = fib1(num);
    printf("your res num is %d\n", res);
}