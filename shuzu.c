//#include <linux/module.h>
#include <stdio.h>

// 一个整型数组的指针，长度为 len， 得到数组中的最小值和最大值 ———— 从外部传入两个指针，从而将所求的两个结果保存带出来，得到多个返回值。
void minMax(int a[], int len, int *min, int *max) { //函数内 sizeof（a）不能使用，要再函数外先计算出长度
    int i;
    
    *min = *max = a[0]; //假定最大值 最小值相等 为a[0]  
    
    for(i= 1; i < len; i++) {
        if( a[i] < *min) {
          *min = a[i];
        }
        
        if(a[i] > *max) {
          *max = a[i];
        }
    }

}
int main(){
int a[] = {1, 2, 3, 4, 5, 7, 8, 9, 15, 18, 25, 33};
int min, max;
int len = sizeof(a)/sizeof(a[0]);
minMax(a, len, &min , &max );
printf( "min = %d, max = %d \n",  min,  max);
}