/*#include <stdio.h>
int main()
{
    float a,b,c;
    for(a=1,b=1,c=0;a<=50;a++)
      {
        b=b*a;
        c=c+1.0/b;
}
c=c+1;
printf("%f",c);
}

*/
#include <stdio.h>
#include <math.h>
int main()
{
    float a=1,b=1,c=0;
while(1/b>=pow(10,-6))
{
    b=b*a;
    c=c+1/b;
    a++;
}
printf("%f",c+1);
}
