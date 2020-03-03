#include<stdio.h>


void create(char filename[]){
    FILE *f = NULL;
    f = fopen(filename, "w+");
    fprintf(f, "this is the first line\n");
    fputs("this is the second line\n", f);
    fputs("1\n", f);
    fclose(f);
}

int * change(int numSize){
    int *result_array;
    int *result = (int*)calooc(5, sizeof(int));
    for(int i=0; i<numSize; i++){
        result[i] = 3;
    }
    return result;
}

void main(){
    int *p;
    p = change(4);
    for (int i=0; i<4; i++){
        printf("%d\n", p[i]);
    }
    // char filename[20];
    // scanf("please enter file name: %s", &filename);
    // create(filename);
}