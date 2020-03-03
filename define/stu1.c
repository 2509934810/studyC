#include<stdio.h>

void main(){
    printf("file name %s", __FILE__);
    printf("file date %s", __DATE__);
    printf("file num2 %d", __STDC__);
    printf("line num %d", __LINE__);
    printf("file time %s", __TIME__);

}