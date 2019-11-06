#include <stdio.h>
int main()
{
    int a=100,b=5,c=3,d=1,e,f,g;
    for(e=0;b*e<=100;e++)
    for(f=0;c*f<=100;f++)
    for(g=0;d*g/3<=150;g+=3)
    if(b*e+c*f+d*g/3==100)
    printf("%d,%d,%d\n",e,f,g);
    return 0;
}
