#include <stdio.h>
int main()
{
    int a;
    printf("����һ��������");
    scanf("%d",&a);
    if (a*1>0)
    {
     if (a%2==0)
        printf("aΪ����ż��");
     else
        printf("aΪ��������");
    }
    else
    {
        if (a%2==0)
        printf("aΪ����ż��");
        printf("aΪ��������");
    }
    return 0;
}
