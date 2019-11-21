#include <stdio.h>
#define PI 3.14
int main()
{
    float r,s;
    for(r=0.5;r<=2.5;r+=0.5)
    {
        s=PI*r*r;
        printf("当半径为%5.2fmm时，圆的面积为%5.2fmm^2\n",r,s);
    }
}
