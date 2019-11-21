#include <stdio.h>
int main()
{
    int a,b;
    for(a=1,b=0;b<=10000;a++)
    {
        b=b+a*a;
    }
    printf("符合要求的最大n为%d，",a-1);
    printf("和为%d",b);
}
