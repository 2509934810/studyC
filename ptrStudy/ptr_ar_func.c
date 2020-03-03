#include<stdio.h>

int sum;

void getAdd(int *params, int size){
    int a;
    extern int sum;
    sum = 0;
    for(a=0; a<size; a++){
        sum += params[a];
    }
}

void getAry(int **params, int size){
    int i;
    for (i=0; i<size; i++){
        *params[i] = 1;
    }
}

void main(){
    int a[] = {1, 2, 3};
    int **b;
    b = &a; 
    getAdd(a, 3);
    printf("%d", sum);
    getAry(&b, 3);
    int i;
    for(i=0; i<3; i++){
        printf(a[i]);
    }
}