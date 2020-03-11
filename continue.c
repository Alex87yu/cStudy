#include <stdio.h>

int main(){
    
    int a;
    for (a=100;a<201;a++){
        if (a%3==0)
            continue;
        printf("%d\t", a);

    }

    return 0;
}