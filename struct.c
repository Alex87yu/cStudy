#include <stdio.h>
#include <string.h>

struct BOOKS{


    char bookName[10];
    char bookAuth[10];
    int bookId;

};                          //忘记写 ; 

int showBook(struct BOOKS *book){
    printf("bookname=%s\n", book->bookName);
    printf("bookauther=%s\n", book->bookAuth);
    printf("bookid=%d\n", book->bookId);
    return 0;
}

int main (){

    struct BOOKS book1,book2;
    strcpy(book1.bookName,"AAA");
    strcpy(book1.bookAuth,"alfa");
    book1.bookId=1001;   
    strcpy(book2.bookName,"BBB");
    strcpy(book2.bookAuth,"bravo");
    book2.bookId=1002;
    
    showBook(&book1);//忘记加&
    showBook(&book2);



    return 0;
}