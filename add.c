#include<stdio.h>


typedef struct PolyNode *Polynomiual;
struct PolyNode {
    int coef;
    int expon;
    Polynomiual link;
};

void Attach(int c, int e, Polynomiual *pRear){
    Polynomiual P;
    P = (Polynomiual)malloc(sizeof(struct PolyNode));
    P ->coef = c;
    P ->expon = e;
    P ->link = NULL;
    (*pRear)->link = P;
    *pRear = P;
}

Polynomiual ReadPoly(){
    Polynomiual P, Rear, t;
    int c, e, N;
    scanf("%d", &N);
    P = (Polynomiual)malloc(sizeof(struct PolyNode));
    P ->link = NULL;
    Rear = P;
    while (N--){
        scanf("%d %d", &c, &e);
        Attach(c, e, &Rear);
    }
    t = P; P = P->link; free(t);
    return P;
}

Polynomiual Add(Polynomiual P1, Polynomiual P2){

}

void  main(){
    Polynomiual P1, P2, PP, PS;
    P1 = ReadPoly();
    P2 = ReadPoly();
    // PP = Mult(P1, P2);
    // PrintPoly(PP);
    PS = Add(P1, P2);
    PrintPoly(PS);
    printf("%s\n", "hello,world");
}