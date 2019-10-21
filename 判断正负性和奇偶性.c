#include <stdio.h>
int main()
{
    int a;
    printf("输入一个整数：");
    scanf("%d",&a);
    if (a*1>0)
    {
     if (a%2==0)
        printf("a为正数偶数");
     else
        printf("a为正数奇数");
    }
    else
    {
        if (a%2==0)
        printf("a为负数偶数");
        printf("a为负数奇数");
    }
    return 0;
}
