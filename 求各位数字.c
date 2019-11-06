#include <stdio.h>
int main()
{
    int x,a,b,c,d,e;
    printf("输入一个四位数");
    scanf("%d",&x);
    for(a=1000,c=0;a!=0;x=x-(b*a),a/=10)
    {
        b=x/a;
        c+=b;
    }
    printf("%d",c);
}
