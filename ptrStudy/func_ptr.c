#include<stdio.h>

int getMax(int a, int b){
    return a > b ? a : b;
}

void main(){
    int (*p)(int, int) = &getMax;
    int a, b, c, d;
    scanf("%d %d %d", &a, &b, &c);
    d = p(p(a, b), c);
    printf("%d\n", d);
    int *ary[3];
    for(a=0; a<3; a++){
        ary[a] = &a;
    }
    for(a=0; a<3; a++){
        printf("%p\n", ary[a]);
    }
}