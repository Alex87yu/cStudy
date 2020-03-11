#include <stdio.h>
#include <time.h>
#include <stdlib.h>
 
clock_t startTime, endTime; //时间变量
double duration;               //持续时间
#define MAXK 1e7            //循环次数

int ThisSum, MaxSum;           //sum的临时变量
int MaxStart, MaxEnd, start;    //起始id为，和小于0的i，+1；end就是最后的遍历的i

int arr[1000000];    //创建空数组
int K = 0;           //输入数组的个数。


int MaxSubseqSum4( int A[], int N )  
{
    
    int i;
    ThisSum = MaxSum = 0;                     //初始最大值为0
    start=MaxStart = 0; MaxEnd = 0;      //初始开始id=0. 最大id为 N-1
    for ( i = 0; i < N; ++i ) {                  //遍历数列，
        ThisSum += A[i];                         //thissum
        if ( ThisSum > MaxSum || (ThisSum == MaxSum && MaxSum == 0)){ //如果thissum大于maxsum，或者为0，更新maxsum，更新maxend
                MaxSum = ThisSum;
                MaxStart = start;
                MaxEnd = i;
            }
        else if ( ThisSum < 0 ) {         //如果小于0，则抛弃。重置thissum，更新maxstart。
            ThisSum = 0;
            start = i + 1;
        }
    }
    return MaxSum;
}
 

int input(){
    scanf("%d", &K);
    int i = 0;
    for (i = 0; i < K; ++i) {
        scanf("%d", &arr[i]);
    }

    return 0;
}

int test(int arr[],int K){
    int i;
    startTime=clock();           //计时开始
    for(i=0;i<MAXK;i++)    MaxSubseqSum4(arr, K); //循环
    endTime=clock();            //计时结束

    return 0;
}

int showInfo(long startTime, long endTime, int arr[]){
    duration = (double)(endTime - startTime) / CLOCKS_PER_SEC/MAXK ; 
    printf("ticks1 = %ld,clocksPerSec=%ld\n", endTime - startTime, CLOCKS_PER_SEC);
    printf("time=%6.2e\n", duration);
    printf("maxSum=%d , startid=%d , endid=%d, startnum= %d, endnum= %d\n", MaxSum, MaxStart, MaxEnd, arr[MaxStart], arr[MaxEnd]);
    return 0;
}




int main()
{
    /*
    scanf("%d", &K);
    int i = 0;
    for (i = 0; i < K; ++i) {
        scanf("%d", &arr[i]);
    }
*/  
    input();
    test(arr, K);

 //   startTime=clock();           //计时开始
 //   for(i=0;i<MAXK;i++)    MaxSubseqSum4(arr, K); //循环
 //   endTime=clock();            //计时结束


    showInfo(startTime,endTime,arr);
  /*  duration = (double)(endTime - startTime) / CLOCKS_PER_SEC/MAXK ; 
    printf("ticks1 = %ld,clocksPerSec=%ld\n", endTime - startTime, CLOCKS_PER_SEC);
    printf("time=%6.2e\n", duration);
    printf("maxSum=%d , startid=%d , endid=%d, startnum= %d, endnum= %d\n", MaxSum, MaxStart, MaxEnd, arr[MaxStart], arr[MaxEnd]);
*/
    return 0;
}