#include <stdio.h>
int mymod(int a,int b)
{
    int c;
    c=a%b;
    return c;
}
int main()
{
    int x,y,z;
    printf("输入两个整数：");
    scanf("%d,%d",&x,&y);
    z=mymod(x,y);
    printf("%d",z);
}
