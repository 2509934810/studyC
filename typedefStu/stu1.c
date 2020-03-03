#include<stdio.h>

typedef struct Book{
    int Book_id;
}Books;

void main(){
    Books book1;
    book1.Book_id = 1;
    printf("%d", book1.Book_id);
}