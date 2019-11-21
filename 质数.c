#include <stdio.h>
#include <stdio.h>
int main()
{
    int a,b;
    for(a=2;a<=100;a++){
        for(b=2;b<=a;b++)
        {
            if(a%b==0&&a!=b)
            {
                break;
            }
            else if(a==b)
            {
                printf("%d\n",a);
            }
        }

    }
}
