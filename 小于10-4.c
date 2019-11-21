#include <stdio.h>
#include <math.h>
int main()
{
    float a,b;
    for(a=1,b=0;a<=10000;a+=4)
    {
        b=b+1.0/a-(1.0/(a+2));
        if(fabs(1.0/(a+2))<pow(10,-6)||fabs(1.0/a)<pow(10,-6))break;
    }
    printf("%f",b*4);
    }
