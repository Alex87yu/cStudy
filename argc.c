#include <stdio.h>

int main(int argc ,char *argv[]){

    printf("argument 1 is %s\n", argv[0]);
    if (argc==2) {printf("argument 2 is %s\n", argv[1]);}
    else if (argc>2)printf("wrong\n");
    return 0;





}