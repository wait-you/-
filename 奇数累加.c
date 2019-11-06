#include <stdio.h >
int main()
{
    int a=1,sum=0;
   do
   {
        sum=sum+a;
        a+=2;
        }
        while(a<=101);
        printf("%d",sum);
    return 0;
}
