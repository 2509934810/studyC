#include<stdio.h>

void active(int *array, int size){
    printf("actived\n");
    for(int i=0; i<size; i++){
        array[i] = 3;
    }
}

void start(int *array, int size, void(* active)(int *parems, int size)){
    printf("start\n");
    active(array, size);
    printf("end\n");
}
void main(){
    int a[10];
    start(a, 10, active);
    for(int i=0; i<10; i++){
        printf("%d\n", a[i]);
    }
}