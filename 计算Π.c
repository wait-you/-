#include <stdio.h>
int main()
{
    float a,b,c,pi;
    for(a,b=1,c=1;b<=99;b+=2)
    {
    a=(b+1)/b*(b+1)/(b+2);
    c*=a;
    pi=2*c;
    }
    printf("%5.2f",pi);
}
