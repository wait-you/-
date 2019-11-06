#include <stdio.h>
#include <math.h>
int main()
{
    int a,n,x,y;
    printf("输入a和n的值：");
    scanf("%d,%d",&a,&n);
    for(x=1,y=0;x<=n;x++)
    {
        y=y+y*10+a;
    }
    printf("%d",y);
}
