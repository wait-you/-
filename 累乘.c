/*#include <stdio.h>
int main()
{
    int a=1,b=0;
   do
   {
       b=b+a*(a+1)*(a+2);
       a+=2;
   }
   while(a<=99);
   printf("%d",b);

}
*/

#include <stdio.h>
int main()
{
    int a,b;
    for(a=1,b=0;a<=99;a+=2)
    {
        b=b+a*(a+1)*(a+2);
    }
    printf("%d",b);
    return 0;
}

