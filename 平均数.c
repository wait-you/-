#include <stdio.h>
float average(float a,float b,float c)
{
    float d;
    d=(a+b+c)/3;
    return d;
}
int main()
{
    float x,y,z,w;
    printf("输入三个数：");
    scanf("%f,%f,%f",&x,&y,&z);
    w=average(x,y,z);
    printf("%f",w);
}
