#include <stdio.h>
#include <time.h>
#include <math.h> //编译时要使用 gcc -lm 指令
 
#define MAXN 101      //项数 
#define TIMES 1e6    //重复次数 
 
double f1(int n, double a[], double x); 
double f2(int n, double a[], double x); 
 
int main(){
    clock_t start, stop;
    double duration, ret;
     
    int i;             //数组赋初值 
    double a[MAXN] = {1};
    for(i = 1; i < MAXN; i++)  a[i] = i;
     
    start = clock();          //f1重复运行 
    for (i = 0; i < TIMES; i++)   ret = f1(MAXN-1, a, 1.1);
    stop = clock();
    duration = (double)(stop - start) / CLOCKS_PER_SEC / TIMES;
    printf("ticks1 = %ld\n", stop - start);
    printf("duration1 = %.2e\n", duration);
    printf("ret = %f\n\n", ret);
     
    start = clock();          //f2重复运行 
    for (i = 0; i < TIMES; i++)   ret = f2(MAXN-1, a, 1.1);
    stop = clock();
    duration = (double)(stop - start) / CLOCKS_PER_SEC / TIMES;
    printf("ticks2 = %ld\n", stop - start);
    printf("duration2 = %.2e\n", duration);
    printf("ret = %f\n\n", ret);
     
    return 0;
}
 
double f1(int n, double a[], double x){       //f1 
    double sum = a[0];
    int i;
    for(i = 1; i <= n; i++)    sum += pow(x, i) / a[i];
    return sum;
}
 
double f2(int n, double a[], double x){       //f2 
    double sum = 1 / a[n];
    for ( ; n >= 1; n--) sum = sum * x + 1 / a[n-1];
    return sum;
}