#include <stdio.h>
#include <stdlib.h>
//枚举的循环，类似于宏的简单替换数字，把SUN替换成11，所以遍历是不准的。
enum DAY {
   MON=1,TUE,WEN,THUS,FRI=9,SAT,SUN
} day;
int main(){
    day = MON;
    
    printf("%d\n",day);
    enum DAY day1;
    for (day1=MON;day1<=SUN; day1++){
        printf("%d\t", day1);
    
    }
         printf ("\n");
   
    while(day<=SUN){
        printf ("%d\t",day);
        day=(enum DAY)(day+1);

    }
         printf ("\n");

enum color { red=1, green, blue };
 
    enum  color favorite_color;
    int a;
    /* ask user to choose color */
    printf("请输入你喜欢的颜色: (1. red, 2. green, 3. blue): ");
    scanf("%d", &a);
 favorite_color=(enum color)a;//强行转类型为enun
    /* 输出结果 */
    switch (favorite_color)
    {
    case red:
        printf("你喜欢的颜色是红色\n");
        break;
    case green:
        printf("你喜欢的颜色是绿色\n");
        break;
    case blue:
        printf("你喜欢的颜色是蓝色\n");
        break;
    default:
        printf("你没有选择你喜欢的颜色\n");
    }
 
    return 0;

}