#include <stdio.h>
int fact(int c)
{
    int a,b;
    for(a=1,b=1;a<=c;a++)
    {
        b=b*a;
    }
    return b;
}
int main()
{
    int c,d;
    printf("����һ����������");
    scanf("%d",&c);
    d=fact(c);
    printf("%d",d);
    return 0;


}
