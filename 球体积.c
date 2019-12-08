#include <stdio.h>
#define PI 3.14
int main()
{
    int r;
    float v;
    printf("输入一个实数半径：");
    scanf("%d",&r);
    v=4*PI*r*r*r/3;
    printf("%f",v);
    return 0;
}
