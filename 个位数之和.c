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
    printf("����һ��������\n");
    scanf("%d",&a);
    a=fan(a);
    printf("�����ĸ�λ��֮��Ϊ:%d",a);
    return 0;
}
