#include <stdio.h>
#include <string.h>

typedef struct {            //使用tpedef后，后面每次BOOKS 前就不用加struct了。注意BOOKS的位置，一个在{}前，一个在后。


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