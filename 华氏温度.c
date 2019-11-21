#include <stdio.h>
int main()
{
    float c,f=0;
   for( ;f<=300;f+=20)
    {   c=5.0/9*(f-32);
        printf("华氏温度：%5.2f,摄氏温度%5.2f\n",f,c);
    }
 return 0;
}
