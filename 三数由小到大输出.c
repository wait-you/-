#include <stdio.h>
int main()
{
    float a,b,c,d;
    printf("��������ʵ����");
    scanf("%f,%f,%f",&a,&b,&c);
    if(a>b)
    {
        d=b;
        b=a;
        a=d;

    }
    if(b>c)
    {
        d=c;
        b=c;
        c=d;
    }
    printf("%f,%f,%f",a,b,c);
    return 0;
}
