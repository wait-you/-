#include <stdio.h>
int Try(int n)
{
    if(n<==0||n==1)
        printf("error");
    else if(n%n==0&&n%1==0)
        printf("����Ϊ����");
    else
    printf("������������");
}
int main(void)
{
    int a;
    scanf("%d",&a);
    a=Try();
}
