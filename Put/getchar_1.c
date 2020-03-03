#include<stdio.h>

void main(){
    int c;
    printf("enter a value:");
    c = getchar();
    printf("the num is :");
    putchar(c);
    printf("\n");

    char str[10];
    printf("please your char\n");
    gets(str);
    printf("your str is \n");
    puts(str);

}