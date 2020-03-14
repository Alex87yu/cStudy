#include <stdio.h>

int main(){
    
    printf("%s\n",__FILE__);
    printf("%s\n", __DATE__);
       printf("Time :%s\n", __TIME__ );
   printf("Line :%d\n", __LINE__ );
   printf("ANSI :%d\n", __STDC__ );//编译器便准码时是1.

    return 0;
}