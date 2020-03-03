#include<stdio.h>

double getAvg(int arg[], int length){
    int i, sum;
    double avg;
    for(i=0; i<length; i++){
        sum += arg[i];
    }
    avg = sum / length;
    return avg;
}

int * initAry(){
    static int b[5] = {1, 2, 3, 4,5};
    return b;
}

void main(){
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    double avg = getAvg(a, 10);
    printf("%.2f\n", avg);
    printf("%d\n", *(a));
    int *p;
    p = initAry();
    printf("%d\n", *(p+1));
}