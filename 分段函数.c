#include <stdio.h>
#include <math.h>
int main()
{
    int x;
    double y;
    printf("输入一个整数x：");
    scanf("%d",&x);
    if (x>0)
    {
        y=exp(-x);
        printf("y的值为%5.2lf",y);
    }
    else if (x==0)
    printf("y的值为1");
    else
    {
        y=-exp(x);
        printf("y的值为%5.2lf",y);
    }
    return 0;

}
