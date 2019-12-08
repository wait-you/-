#include <stdio.h>
int fan(int m)
{
    int b=0,c=0;
    while(m!=0)
    {
        b=m%10;
        m=m/10;
        c=c+b;
    }
    return c;
}
int main()
{
    int a;
    printf("输入一个整数：\n");
    scanf("%d",&a);
    a=fan(a);
    printf("该数的各位数之和为:%d",a);
    return 0;
}
