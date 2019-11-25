#include <stdio.h>
char number(char num)
{
    int a=0;
      while(num!='@')
{
       a++;
       num=getchar();
}
    return a;
}
int main()
{
    char sta;
    int b;
    sta=getchar();
    b=number(sta);
    printf("%d",b);
    return 0;
}
