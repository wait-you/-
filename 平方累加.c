#include <stdio.h>
int main()
{
    int a,b;
    for(a=1,b=0;b<=10000;a++)
    {
        b=b+a*a;
    }
    printf("����Ҫ������nΪ%d��",a-1);
    printf("��Ϊ%d",b);
}
