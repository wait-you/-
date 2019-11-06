#include <stdio.h>
int main()
{
    int a=150,b=5,c=2,d=1,e,f,g;
    for(e=0;b*e<=150;e++)
    for(f=0;c*f<=150;f++)
    for(g=0;d*g<=150;g++)
    if(b*e+c*f+d*g==150)
    printf("%d,%d,%d\n",e,f,g);
    return 0;
}
