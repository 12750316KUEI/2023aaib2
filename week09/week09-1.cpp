///week09-1.cpp
#include <stdio.h>
int myAdd(int a,int b) ///�禡�w�q
{
    return a+b; ///�i��2�ӼơA�X�h1�Ӽ�
}
void myPrint(int a) ///�禡�w�q�A�i��1��
{
    for(int i=1;i<=a;i++) printf("*");
    printf("\n");
}
int main() ///main()�禡
{
    int ans = myAdd(3,4);
    printf("Hello World\n",ans);
    myPrint(ans); ///�禡�I�s
}
