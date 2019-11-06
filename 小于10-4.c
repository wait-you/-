#include <stdio.h>
#include <math.h>
int main()
{
    float a,b;
    for(a=1,b=0;a<=1000;a+=2)
    {
        b=b+1.0/a-(1.0/(a+1));
        if(fabs(b)<pow(10,-4))break;
    }
    printf("%5.2f",b);
    }
