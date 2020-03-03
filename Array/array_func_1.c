#include<stdio.h>

void X_sort(int * array, int len){
    for(int i=0; i < len; i++){
        *(array) = i;
        array++;
    }
}

void main(){
    int a[10];
    X_sort(a, 10);
    for(int i=0; i<10; i++){
        printf("%d\n", a[i]);
    }
}