#include <stdio.h>
int main()
{
    int a;
    float b=0,h=100;
    for(a=1;a<=10;a++)
    {
        b=b+h+h/2;
        h=h/2;
    }
    printf("%f\n",b);
    printf("%f",h);
    return 0;
}
