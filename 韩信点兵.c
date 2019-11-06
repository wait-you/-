#include <stdio.h>
int main()
{
    int a;
    for(a=1;a>0;a++)
    {
        if(a%5==1)
        {
            if(a%6==5)
            {
                if(a%7==4)
                    if(a%11==10)
                {
                    printf("%d",a);break;
                }

            }
        }
    }
    return 0;
}
