#include<stdio.h>
#include<stdio.h>

union Data{
    int a;
    char f[20];
    int b;
};

void main(){
    union Data v1;
    v1.a = 1;
    strcpy(v1.f, "王");
    v1.b = 2;
    printf("%d\n", v1.a);
    printf("%s\n", v1.f);
    printf("%d\n", v1.b);

}