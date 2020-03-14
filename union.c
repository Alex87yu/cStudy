#include <stdio.h>
#include <string.h>

typedef union{

    int i;
    float f;
    char c[20];
}UNION;

int main(){

    UNION t1;
    printf("size of t1=%ld\n", sizeof(t1));
    t1.i=10;
    printf("ti.1=%d\n", t1.i);
    t1.f=50.5;
    printf("t1.f=%f\n", t1.f);
    strcpy(t1.c,"i love coding");
    printf("t1.char=%s\n", t1.c);
        printf("ti.1=%d\n", t1.i);
    printf("t1.f=%f\n", t1.f);


    return 0;
}