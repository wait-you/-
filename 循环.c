#include <stdio.h>
int main()
{
    int a,b,c;
    printf("输入一个正整数：");
    scanf("%d",&c);
    for(a=1,b=1;a<=c;a++)
    {
        b=b*a;
    }
    printf("%d",b);
}
