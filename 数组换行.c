#include <stdio.h>
int main()
{
    int a[4][4]={1,2,3,4,5,6,7,8,9,10};
    int i,j;
    int d=0,c=1;
    for(i=0;i<4;i++)
    for(j=0;j<4;j++)
    {
printf("%3d",a[i][j]);
d++;
if (d==c)
    {
        c++;
        printf("\n");
        d=0;}



    }

}







