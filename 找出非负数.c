#include <stdio.h>
int main()
{
    int i,d=0,sum=0,a[20];
    printf("��������20������");
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
    printf("�Ǹ�������Ϊ��%d",d);
    printf("�Ǹ���֮��Ϊ��%d ",sum);
}
