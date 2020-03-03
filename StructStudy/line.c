#include<stdio.h>

typedef struct Node *List;

struct Node{
    int data[10];
    int length;
};

int Search(List th1, int k){
    th1->data[0] = k;
    int i;
    for(i=th1->length; th1->data[i]!=k; i--){
        printf("%d\n", th1->data[i]);
    }
    return i;
}

struct Queue{
    int data[10];
    int *front;
    int *rear;
};

typedef struct Queue *Q;

void addQueue(Q q, int k){
    if ((q->rear+1)%
}