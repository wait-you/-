#include <stdio.h>
#define PI 3.14
int main()
{
    float r,s;
    for(r=0.5;r<=2.5;r+=0.5)
    {
        s=PI*r*r;
        printf("���뾶Ϊ%5.2fmmʱ��Բ�����Ϊ%5.2fmm^2\n",r,s);
    }
}
