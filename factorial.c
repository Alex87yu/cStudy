#include <stdio.h>

double factorial(int i){

    if(i==1)return 1;
    return i*factorial(i-1);
    
}

int main(){

    int i=15;
    double a=factorial(i);
    printf("15!=%f",a);
    return 0;
}