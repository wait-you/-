#include <stdio.h>
int main()
{
    int a=8,b,c,d,e=0;
    for(b=1;b<=3;b++)
    for(c=1;c<=3;c++)
    for(d=1;d<=6;d++)
    if(b+c+d==a)
    e++;
    printf("%d",e);
    return 0;
}
