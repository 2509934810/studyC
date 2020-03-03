#include<stdio.h>
#include<string.h>

struct Book{
    int Book_id;
    char Subject[50];
    char Author[50];
};

void printS(struct Book *book){
    printf("book id = %d\n", book->Book_id);
    printf("book Subject = %s\n", book->Subject);
    printf("book Author = %s\n", book->Author);
}

void main(){
    struct Book book1, book2;
    book1.Book_id = 1234;
    strcpy(book1.Author, "lei");
    strcpy(book1.Subject, "计算机科学");
    book2.Book_id = 12345;
    strcpy(book2.Author, "类江涛");
    strcpy(book2.Subject, "计算机科学");
    printS(&book1);
    printS(&book2);
    int a = 1;
    int b = 1;
    printf("%p\n", &a);
    printf("%p\n", &b);
}