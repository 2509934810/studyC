#include<stdio.h>
#include<stdlib.h>

int getRandom(){
    return rand();
}

void pop_array(int *array, size_t arraySize, int (* getRandom)()){
    for(size_t i=0; i<arraySize; i++){
        array[i] = getRandom();
    }
}

void main(){
    int array[10];
    pop_array(array, 10, getRandom);
    for (int i=0; i<10; i++){
        printf("%d\n", array[i]);
    }
}