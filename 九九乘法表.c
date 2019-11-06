#include <stdio.h>
int main()
{
    int a,b;
    for(a=1;a<=9;a++)
    {
        for(b=1;b<=9;b++)
           {
               if(b<a)
                printf("     ");
                else
           printf("%5d",a*b);
           }
            printf("\n");
    }
    return 0;
}


