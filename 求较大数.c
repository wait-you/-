#include<stdio.h>
int main()
{
int a,b;
printf("输入两个整数：");
scanf("%d%d",&a,&b);
if(a>b)
    printf("较大的数是%d",a);
else
    printf("较大的数是%d",b);

}
