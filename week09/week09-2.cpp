///week09-2.cpp 函式裡的變數vs外面的變數
#include <stdio.h>
int myFuncA()
{
    int x = 200;
    printf("mFuncA()裡面x是:%d\n",x);
}

int main()
{
    int x = 100;
    printf("main()裡面x是:%d\n",x);
    myFuncA();
    printf("main()裡面x是:%d\n",x);
}
