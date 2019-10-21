#include <stdio.h>
#include <math.h>
main()
{
    int a,b,c;
    double  x1,x2;
    printf("输入三个整数:\n");
    scanf("%d,%d,%d",&a,&b,&c);
    if (b*b-4*a*c<=0)
        printf("一元二次方程没有两个实数根");
        else if(b*b-4*a*c>0)
     {


            x1=(-b+ sqrt(b*b-4*a*c)/(2*a));
            x2=(-b- sqrt(b*b-4*a*c)/(2*a));
            printf("一元二次方程的的两个实数根为x1=%5.2lf,x2=%5.2lf",x1,x2);
     }
        return 0;
}
