#include <stdio.h>
#include <math.h>
int main()
{
    int x;
    double y;
    printf("����һ������x��");
    scanf("%d",&x);
    if (x>0)
    {
        y=exp(-x);
        printf("y��ֵΪ%5.2lf",y);
    }
    else if (x==0)
    printf("y��ֵΪ1");
    else
    {
        y=-exp(x);
        printf("y��ֵΪ%5.2lf",y);
    }
    return 0;

}
