#include <stdio.h>
int main()
{
    int a,sum;
    for (a=1,sum=0;a<=101;a+=4)
      {
          sum=sum+a-(a+2);
      }
      printf("%d",sum+103);
}
