#include <stdio.h>
int main()
{
    int a[3][4]={{1,12,3,4},{5,26,7,8},{19,10,11,12}};
    int b[3]={0,0,0};
    int i,j,l;
    for(j=0;j<4;j++)
        {
            if(b[0]<a[0][j])
                b[0]=a[0][j];
            if(b[1]<a[1][j])
                b[1]=a[1][j];
            if(b[2]<a[2][j])
                b[2]=a[2][j];
        }
    printf("b:");
    for(l=0;l<3;l++)
         {
        printf("%3d",b[l]);
        i=i+b[l];
        }
    printf("\n");
    printf("sum b:%d",i);
}