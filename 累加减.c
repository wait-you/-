#include <stdio.h >
int main()
{
    int a,sum,d;
    for (a=1,sum=0,d=0;a<=99;a+=2)
    {
        d=a*(a+1)*(a+2);
        sum=sum+d;
    }
    printf("%d",sum);
}
