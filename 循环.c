#include <stdio.h>
int main()
{
    int a,b,c;
    printf("����һ����������");
    scanf("%d",&c);
    for(a=1,b=1;a<=c;a++)
    {
        b=b*a;
    }
    printf("%d",b);
}
