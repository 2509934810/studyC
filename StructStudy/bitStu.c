#include<stdio.h>
#

struct bs{
    unsigned int a:1;
    int b:2;
    int c:4;
};

void main(){
    struct bs b, *b1;
    b.a = 1;
    b.b = 1;
    b.c = 4;
    printf("%d, %d, %d\n", b.a, b.b, b.c);
    b1 = &b;
    printf("%d, %d, %d\n", b1->a, b1->b, b1->c);

}