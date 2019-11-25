#include <stdio.h>
int goyu(int a,int b)
{
    int c,d;
    if(a<b)
    {
        c=a;
        a=b;
        b=c;
    }
    c=a%b;
    if(c!=0){
    d=c%b;
    if(d!=0){
    while (c%d==0||d%c==0)
    {
        if(c%b==1||b%c==1) break;
        c=d%c;
        d=d%c;
    }
    if(c%d==0)
        return d;
    else if(d%c==0)
        return c;
        }
        return b;
    }
    return b;
}
int gobe(int a,int b)
{
    int c,d;
    d=goyu(a,b);
    c=a*b/d;
    return c;

}
int main()
{
    int a,b,c,d;
    printf("输入两个整数：");
    scanf("%d,%d",&a,&b);
    c=goyu(a,b);
    d=gobe(a,b);
    printf("这两个数的最大公约数是%d\n",c);
    printf("这两个数的最小公倍数是%d",d);
    return 0;
}
