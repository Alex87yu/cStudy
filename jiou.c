#include <stdio.h>
int xingQi();
double DoSqrt();  



int main(){

  /*  int s;
    printf("请输入一个整数：\n");
    scanf("%d", &s);

    (s%2==0)?(printf("oushu")):(printf("jishu"));*/
  //  xingQi();
    int s=DoSqrt(16.5);
    return 0;






}

int xingQi(){
    int a;
    printf("please input an intege number");
    scanf("%d",&a);

    switch(a){

        case 1: printf("Monday\n"); break;
        case 2: printf("Tuesday\n"); break;
        case 3: printf("Wendsday\n"); break;
        case 4: printf("Thursday\n"); break;
        case 5: printf("Friday\n"); break;
        case 6: printf("Sarterday\n"); break;
        case 7: printf("Sunday\n"); break;
        default: printf("Error\n");
        
    }


}

double DoSqrt(double z){
    double a=1;
    double b=0;
    double c=0;
    do{
        if(b*b<z){
            b+=a;
        }
        else{
            c=b;
            b-=a;
            a/=10;
        }
    }while(a>0.000001);
    printf("%f\n",((b+c)/2));
    return (b+c)/2;
}