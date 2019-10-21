#include <stdio.h>
int main()
{
    int a,b,c;
    printf("输入三角形的三条边：");
    scanf("%d,%d,%d",&a,&b,&c);
    if (a+b>c)
    {
        if(a==b||b==c||a==c)
        {
          if(a*a+b*b==c*c||a*a+c*c==b*b||c*c+b*b==a*a)
            printf("该三角形为等腰直角三角形");
          if(a==b==c)
            printf("该三角形为等边三角形");
        }
        else
            printf("该三角形为等腰三角形");
    }
    if (a*a+b*b==c*c||a*a+c*c==b*b||c*c+b*b==a*a)
        printf("该三角形为直角三角形");
    else
        printf("该三角形为一般三角形");
        return 0;
}
