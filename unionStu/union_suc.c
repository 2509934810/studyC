#include<stdio.h>
#include<string.h>

union Data{
    int a;
    int b;
    char c[20];
};

int create(){
    return 1;
}

void prints(int (*create)()){
    printf("%d\n", create());
}


void main(){
    union Data data;
    data.a = 1;
    printf("a = %d\n", data.a);
    data.b = 2;
    printf("b = %d\n", data.b);
    strcpy(data.c, "我是");
    printf("c = %s\n", data.c);
    prints(create);
}