#include <stdio.h>
#include <limits.h>
#include <float.h>

// 函数外定义变量 x 和 y
int x;
int y;
int addtwonum()
{
    // 函数内声明变量 x 和 y 为外部变量
    extern int x;
    extern int y;
    // 给外部变量（全局变量）x 和 y 赋值
    x = 1;
    y = 2;
    return x+y;
}

int main(){

    int result;
    // 调用函数 addtwonum
    result = addtwonum();
    
    printf("\n%d + %d = %d\n\n", x, y, result);


    printf("hello world\n");
    printf("int size is:%lu \n", sizeof(int));
    
    printf("float size is: %lu \n", sizeof(float));
    printf("float 最小值: %E\n", FLT_MIN );
    printf("float 最大值: %E\n", FLT_MAX );
    printf("精度值: %d\n", FLT_DIG );



    return 0;

}