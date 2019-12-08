#include <stdio.h>
int main()
{
    int i,j,t;
    int a[10]={9,8,7,6,5,4,3,2,1,0};
    for(j=0;j<10;j++)
    {
        for(i=0;i<10-j;i++)
        {
        if(a[i]>a[i+1])
         {
             t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;
        }
        }
    }
    for(i=0;i<10;i++)
        printf("%d",a[i]);
    return 0;
}
