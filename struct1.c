#include <stdio.h>
#include <string.h>

typedef struct BOOK { //使用tpedef后，BOOK==struct BOOK


    char bookName[10];
    char bookAuth[10];
    int bookId;

}BOOKS;                          //忘记写 ; 

int showBook( BOOKS *book){
    printf("bookname=%s\n", book->bookName);
    printf("bookauther=%s\n", book->bookAuth);
    printf("bookid=%d\n", book->bookId);
    return 0;
}

int main (){

    BOOKS book1,book2;
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