#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
//通常情况下，程序成功执行完一个操作正常退出的时候会带有值 EXIT_SUCCESS。在这里，EXIT_SUCCESS 是宏，它被定义为 0。
//如果程序中存在一种错误情况，当您退出程序时，会带有状态值 EXIT_FAILURE，被定义为 -1。所以，上面的程序可以写成：
int main(){
    
    int a=20;
    int b=3;
    float sum;
    if (b==0){
        fprintf(stderr,"fen mu shi 0,\terrno = %d\n", errno);
        exit(EXIT_FAILURE);
    }
    else{sum=(float)a/b;
        printf("a/b=%f\n",sum);
        exit(EXIT_SUCCESS);

    }

}