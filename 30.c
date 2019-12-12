#include <stdio.h>
int main()
{
    int i,j,t,k;
    int a[3][10]={{1,3,5,7,9,11,13,15,17,19},{21,23,25,27,29,31,33,35,37,39},{41,43,45,47,49,51,53,55,57,59}};
    for(i=0;i<2;i++)
        {
            for(j=0;j<10;j++)
            {
                printf("%3d",a[i][j]);
            }
            printf("\n");
        }
    for(k=0;k<10;k++)
        for(j=0;j<10-k;j++)
        {
            if(a[2][j]<a[2][j+1])
                {
                t=a[2][j];
                a[2][j]=a[2][j+1];
                a[2][j+1]=t;
                 }
        }
    for(i=2;i<3;i++)
        {
            for(j=0;j<10;j++)
                {
                    printf("%3d",a[i][j]);
                }
            printf("\n");
        }
system("pause");

}