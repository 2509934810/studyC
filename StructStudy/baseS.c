#include<stdio.h>
#include<string.h>

struct Books{
    char Title[50];
    char Author[50];
    char Subject[50];
    int Book_id;
};


void main(){
    struct Books book1;
    strcpy(book1.Title, "计算机科学");
    strcpy(book1.Author, "类江涛");
    strcpy(book1.Subject, "计算机网络");
    book1.Book_id = 1234;
    struct Books book2;
    strcpy(book2.Author, "lei");
    book2.Book_id = 1233445;
    strcpy(book2.Subject, "计算机");
    strcpy(book2.Title, "计算机科学");
    printf("书本标题： %s\n书本作者: %s\n课程名称: %s\n书本ID： %d\n", book1.Title, book1.Author, book1.Subject, book1.Book_id);
}