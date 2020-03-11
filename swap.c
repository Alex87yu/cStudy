#include <stdio.h>
//在定义函数中制定的形参，在没有出现函数调用时不占用内存中的存储单元。在函数调用时才分配内存
//将实参的值传递给形参
//在执行函数时，由于形参已经有值。可以用形参进行运算。
//通过return语句将函数值返回，若无返回值，则无return调用结束后，形参被释放掉，实参保留原值（单向传值）
//可以通过指针*来改变实参值 如swap1，也可以用swap2来
void swap2(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

void swap1(int *x, int *y);
void swap1(int *x, int *y){
    int temp;
    //这里操作的是指针指向的值 而不是指针, 注意加*号。a=5，a取值5，，a为数值5，&a为a的地址，*b=&a，b就是指向地址a,*b就是5。
    temp = *x;
    *x = *y;
    *y = temp;
//   倘若直接交换指针 a、b的值不会交换
//    temp = x;
//    x = y;
//    y = temp;
}

int main( int argc, char *argv[] )
{
    int a = 5;
    int b = 10;
    int *x=&a;
    printf("a=%d\n",a);
    printf("&a=%p\n",&a);
    printf("x=%p \n",x);
    printf("*x=%d\n",*x);
    printf("&x=%p\n",&x);
    
    printf("jiaohuanqian a=%d,b=%d",a,b);
    swap(&a, &b);              //调用交换函数,参数为指针类型，不能直接调入int类型
    printf("交换结果为 a = %d, b = %d\n",a,b);
    return 0;
}
