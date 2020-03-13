#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*指针是一个变量，所以可以使用任何合法的变量名。在大多数的操作系统上，程序不允许访问地址为 0 的内存，因为该内存是操作系统保留的。
然而，内存地址 0 有特别重要的意义，它表明该指针不指向一个可访问的内存位置。
但按照惯例，如果指针包含空值（零值），则假定它不指向任何东西。
所有指针在创建时都要初始化，如果不知道他指向什么就将 0 赋值给他。必须初始化指针，没有被初始化的指针被称为失控指针(野指针）
free()内存,后，指针并未清楚。出现 悬空指针。记得清理指针。

srand((unsigned)time(NULL))是初始化随机函数种子：
 1、是拿当前系统时间作为种子，由于时间是变化的，种子变化，可以产生不相同的随机数。计算机中的随机数实际上都不是真正的随机数，如果两次给的种子一样，是会生成同样的随机序列的。 所以，一般都会以当前的时间作为种子来生成随机数，这样更加的随机。
 2、使用时，参数可以是unsigned型的任意数据，比如srand（10）； 
 3、如果不使用srand，用rand（）产生的随机数，在多次运行，结果是一样的。
*/

void test_rand(void)
{
    unsigned long n;
   // srand((unsigned)time(NULL));
    for(int i = 0; i < 100; i++)
    {
        n = rand();
        printf("%ld\n", n);
    }
}

int *getRandom(){
    unsigned long n;
    int i;
    static int a[10];
    srand((unsigned)time(NULL));
    for (i=0;i<10;i++){
        
        a[i]=random();
    }
    return a;             // a==&a[0],数组就是指向a【0】元素的指针 ,a=&a=&a[0]
}




int main(){
    int var = 20;
    int b[5]={0,1,2,3,4};

    int i;
    int *prt = 0;//NULL is ok too. zhi zhen buyao luan zhi 
    printf(" prt=%p\n", prt);

    prt=&var;
    printf("var=%d\n",var);
    printf("&var=%p\n",&var);
    printf(" prt=%p\n",prt);
    printf("&prt=%p\n", &prt);
    printf("*prt=%d\n\n",*prt);

    prt=b;
    printf("       b=%p\n", b);
    printf("      &b=%p\n", &b);
    printf("     prt=%p\n", prt);
    printf("   &b[0]=%p\n", &b[0]);
    printf("   &b[1]=%p\n", &b[1]);
    printf(" (prt+1)=%p\n", (prt+1));

    printf("    b[1]=%d\n", b[1]);
    printf("*(prt+1)=%d\n", *(prt+1));
    printf("  *&b[1]=%d\n", *&b[1]);  //*&b[1]==b[1]

printf("\n");
  //  printf("&(prt+1)=%p\n", &(prt+1));
   


    



    prt=getRandom();
    for (i=0;i<10;i++){
        printf("a[%d]=%d\n",i , *(prt+i));
    }
//test_rand();
    return 0;

}

