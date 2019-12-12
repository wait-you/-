#include <stdio.h>
int main()
{
    int i,j,k;
    int a[2][3]={{1,4,6},{8,10,12}};
    for(i=0;i<2;i++)
        {
            k=a[i][2];
            for(j=2;j>0;j--)
            {
                a[i][j]=a[i][j-1];
            }
            a[i][0]=k;
        }
    for(i=0;i<2;i++)
        for(j=0;j<3;j++)
                printf("%d",a[i][j]);
    return 0;

}
