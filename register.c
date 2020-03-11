#include <stdio.h>
#include <time.h>
/*Register变量：动态和静态变量都是存放在内存中，
程序中遇到该值时用控制器发指令将变量的值送到运算器中，
需要存数再保存到内存中。如果频繁使用一个变量，
比如一个函数体内的多次循环每次都引用该局部变量，
我们则可以把局部变量的值放到CPU的寄存器中，叫寄存器变量。
不需要多次到内存中存取提高效率。但是只能局部自动变量和形参可以做寄存器变量。
在函数调用时占用一些寄存器，函数结束时释放。
不同系统对register要求也不一样，比如对定义register变量个数，数据类型等限制，有的默认为自动变量处理。
所以在程序一般也不用。*/
#define TIME 1000000000
int m, n = TIME; /* 全局变量 */

int main(void)
{   
    time_t start, stop;
    register int a, b = TIME; /* 寄存器变量 */
    int x, y = TIME;          /* 一般变量   */

    time(&start);
    for (a = 0; a < b; a++);
    time(&stop);
    printf("寄存器变量用时: %ld 秒\n", stop - start);
    
    time(&start);
    for (x = 0; x < y; x++);
    time(&stop);
    printf("一般变量用时: %ld 秒\n,dizhis=%ls\n", (stop - start), &x);
    
    time(&start);
    for (m = 0; m < n; m++);
    time(&stop);
    printf("全局变量用时: %ld 秒\n, dizhi=%ls\n", (stop - start), &m);

    return 0;
}