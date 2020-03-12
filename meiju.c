#include <stdio.h>
//枚举的循环，类似于宏的简单替换数字，把SUN替换成11，所以遍历是不准的。
enum DAY {
   MON=1,TUE,WEN,THUS,FRI=9,SAT,SUN
} day;
int main(){
    day = MON;
    printf("%d\n",day);
    enum DAY day1;
    for (day1=MON;day1<=SUN; day1++){
        printf("%d\n", day1);
    
    }

}