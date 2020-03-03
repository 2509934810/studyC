#include<stdio.h>

enum Day{
    MON=1, TUE, WED, THU, FRI, SAT, SUN
};

void main(){
    enum Day day;
    scanf("%d", &day);
    switch (day)
    {
    case /* constant-expression */MON:
        printf("%d", day);
        /* code */
        break;
    
    default:
        break;
    }
}