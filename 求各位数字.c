#include <stdio.h>
int main()
{
    int x,a,b,c,d,e;
    printf("输入一个小于5位数的整数");
    scanf("%d",&x);
    if (x>1000&&x<10000)
        {
        a=x/10000;
        b=(x%10000)/1000;
        c=((x%10000)%1000)/100;
        d=(((x%10000)%1000)%100)/10;
        e=(((x%10000)%1000)%100)%10;
     printf("该整数的万位是：%d",a);
     printf("该整数的千位是：%d",b);
     printf("该整数的百位是：%d",c);
     printf("该整数的十位是：%d",d);
     printf("该整数的个位是：%d",e);
        }
        else if(x>1000&&x<10000)
        {

        b=x/1000;
        c=(x%1000)/100;
        d=((x%1000)%100)/10;
        e=((x%1000)%100)%10;
     printf("该整数的千位是：%d",b);
     printf("该整数的百位是：%d",c);
     printf("该整数的十位是：%d",d);
     printf("该整数的个位是：%d",e);
        }
        else if(x>100&&x<1000)
        {
        c=(x)/100;
        d=(x%100)/10;
        e=(x%100)%10;
     printf("该整数的百位是：%d",c);
     printf("该整数的十位是：%d",d);
     printf("该整数的个位是：%d",e);
        }
        else if(x>10&&x<100)
        {
        d=x/10;
        e=x%10;

     printf("该整数的十位是：%d",d);
     printf("该整数的个位是：%d",e);
        }
        if(x>0&&x<10)
     printf("该整数的个位是：%d",x);
     return 0;
}
