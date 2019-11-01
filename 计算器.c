#include <stdio.h>
int main()
{   int z;
    float x,y,w;
    printf("用户输入第一个操作数： ");
    scanf("%f",&x);
    printf("用户输入第二个操作数： ");
    scanf("%f",&y);
    printf("选择操作符，输入序号： \n1: 加法\n2：减法\n3: 乘法\n4: 除法\n请输入： " );
    scanf("%d",&z);
    switch (z)
   {
    case 1:w=x+y;printf("  %f  加上  %f  等于  %f  ",x,y,w);break;
    case 2:w=x-y;printf("  %f  减去  %f  等于  %f  ",x,y,w);break;
    case 3:w=x*y;printf("  %f  乘上  %f  等于  %f  ",x,y,w);break;
    case 4:w=x/y;printf("  %f  除以  %f  等于  %f  ",x,y,w);
   }
 return 0;
}
