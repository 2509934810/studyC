#include<stdio.h>
#include<string.h>

void main(){
    char str[12] = "hello";
    char str2[12] = "world";
    char str3[12];
    printf("%d\n", strcmp(str, str2));
    printf("%s, len=%ld", strcat(str, str2), strlen(str));
}