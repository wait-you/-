#include <stdio.h>
int main()
{
    int a,b,c;
    for(a=1,b=1,c=0;a<=10;a++)
    {
        b=b*a;
        c=c+b;
    }
    printf("%d",c);
}
