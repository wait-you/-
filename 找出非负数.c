#include <stdio.h>
int main()
{
    int i,d=0,sum=0,a[20];
    printf("输入任意20个数：");
    for(i=0;i<20;i++)
        scanf("%d",&a[i]);
    for(i=0;i<20;i++)
    {
        if(a[i]>=0)
        {
            d++;
            sum=sum+a[i];
        }
    }
    printf("非负数个数为：%d",d);
    printf("非负数之和为：%d ",sum);
}
