#include <stdio.h>
int isprime(int a)
{
    int b;
    for(b=2;b<=a;b++)
        if(a%b==0&&b!=a)
        return 0;
    else if(b==a)
        return 1;
}
int main()
{
    int a,b;
    printf("输入一个整数：");
    scanf("%d",&a);
    b=isprime(a);
    printf("%d",b);

}
