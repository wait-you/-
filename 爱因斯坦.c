#include <stdio.h>
int main()
{
    int a;
    for(a=1;a>0;a++)
    {
        if(a%2==1)
        {
            if(a%3==2)
            {
                if(a%5==4)
                   {
                    if(a%6==5)
                {
                    if(a%7==0)
                        {
                            printf("%d",a);break;
                            }
                }
                   }
            }
        }
    }
    return 0;
}


