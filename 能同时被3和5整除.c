#include <stdio.h>
int five(int a)
{
    int b;
    if(a%5==0)
        return b=1;
    else
        return b=0;
}
int three(int a)
{
    int b;
    if(a%3==0)
        b=five(a);
    else
        return b=0;
}
int main()
{
    int a,b;
    printf("输入a的值：");
    scanf("%d",&a);
    b=three(a);
    if(b=1)
        printf("a能同时被3和5整除");
    else
        printf("a不能同时被3和5整除");
    return 0;
}
