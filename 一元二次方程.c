#include <stdio.h>
#include <math.h>
main()
{
    int a,b,c;
    double  x1,x2;
    printf("������������:\n");
    scanf("%d,%d,%d",&a,&b,&c);
    if (b*b-4*a*c<=0)
        printf("һԪ���η���û������ʵ����");
        else if(b*b-4*a*c>0)
     {


            x1=(-b+ sqrt(b*b-4*a*c)/(2*a));
            x2=(-b- sqrt(b*b-4*a*c)/(2*a));
            printf("һԪ���η��̵ĵ�����ʵ����Ϊx1=%5.2lf,x2=%5.2lf",x1,x2);
     }
        return 0;
}
