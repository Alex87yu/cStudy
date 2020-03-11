#include <stdio.h>
#include <time.h>
#include <math.h>



clock_t start, stop;//开始时刻，结束时刻
double duration;// 时间=结束-开始
#define MAXN 100 //数列长度
#define MAXK 1e4  //程序循环次数
double f1(int n, double a[], double x); //计算方法1
double f2(int n, double a[], double x);
double a[MAXN];

typedef double (*PFUN)(int n, double a[], double x);//函数指针

int showInfo(int n, double a[], double x, PFUN pfun){      //函数指针作为函数的参数，接受前面三个参数
    int i;
    double p;
    start = clock();                       //开始计时
    for (i=0; i<MAXK;i++)                  //循环程序
        p=pfun(n,a,x);
    stop = clock();                        //结束计时
    duration =((double)(stop-start))/CLOCKS_PER_SEC/MAXK; //计算时间并转换为double类型, 除以周期，再除以循环次数
    printf("duration=%6.2e \n", duration);                //
    printf("time tick=%f \n",(double)(stop-start));
    printf("clockspersec=%6.2e \n", (double)CLOCKS_PER_SEC);
    printf("p=%f \n", p);
    return 0;
}

int main(){
    
    int i;

    for (i=0;i<MAXN;i++ ) a[i]=(double)i; //数列数值初始化为double 0-9
    PFUN pfun1=f1;
    PFUN pfun2=f2;
    showInfo(MAXN-1, a, 1.1, pfun1);
    showInfo(MAXN-1, a, 1.1, pfun2);  

 /*   start = clock();                       //开始计时
    for (i=0; i<MAXK;i++)                  //循环程序
        f1(MAXN-1,a,1.1);
    stop = clock();                        //结束计时
    showInfo(start,stop);
  duration =((double)(stop-start))/CLOCKS_PER_SEC/MAXK; //计算时间并转换为double类型, 除以周期，再除以循环次数
    printf("duration=%6.2e \n", duration);                //
    printf("time tick=%f \n",(double)(stop-start));
    
    start = clock();
    for (i=0; i<MAXK; i++)
        f2(MAXN-1,a,1.1);
    stop = clock();
    showInfo(start,stop);
    duration =((double)(stop-start))/CLOCKS_PER_SEC/MAXK;
    printf("duration=%6.2e \n",duration);
    printf("time tick=%f\n",(double)(stop-start));
    */
    return 0;



}

double f1(int n, double a[], double x){
    int i;
    double p=a[0];
    for (i=1;i<=n;i++)
        p+=(a[i] * pow(x,i));
  // printf("p=%f", p);
      return p;
}

double f2(int n, double a[], double x){
    int i;
    double p=a[n];
    for(i=n; i>=0; i--)
        p= a[i-1]+ x *p;
  //  printf("p=%f", p);
    return p;
}