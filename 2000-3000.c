#include <stdio.h>
int main()
{
    int a,b=1;
    for(a=2000,b=0;a<=3000;a++)
    {

        if(a%4==0&&a%100!=0||a%400==0)
            {
        if(b%10==0)
            printf("\n");
            b++;
            printf("%5d",a);

        }

        }





}

