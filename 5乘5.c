#include <stdio.h>
void sumr(int a[][5])
{
    int i,j,r=0;
    printf("每行元素之和为：");
    for(i=0;i<5;i++)
    {
    for(j=0;j<5;j++)
        {
        r=r+a[i][j];
        }
    printf("%5d",r);
    r=0;
    }
    printf("\n");
}
void sumc(int a[][5])
{
    int i,j,r=0;
    printf("每列元素之和为：");
    for(j=0;j<5;j++)
        {
        for(i=0;i<5;i++)
            {
            r=r+a[i][j];
            }
        printf("%5d",r);
        r=0;
        }
    printf("\n");
}
void sumd(int a[][5])
{
    int i,j,r1=0,r2=0;
    printf("对角线元素之和为：");
        for(i=0;i<5;i++)
        {
        r1=r1+a[i][0+i];
        }
        for(j=4;j>=0;j--)
        {
        r2=r2+a[4-j][j];
        }
    printf("%3d",r1);
    printf("%3d",r2);
    printf("\n");
}
void sumo(int a[][5])
{
    int i,j,r=0;
    printf("对角线元素行列标均为偶数的元素之和为：");
    for(i=0;i<5;i++)
    {
    for(j=0;j<5;j++)
        {
        if(i%2==0&&j%2==0)
            {
            r=r+a[i][j];
            }
        }

    }
    printf("%d",r);
    printf("\n");
}
int main()
{
    int a[5][5]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
    sumr(a);
    sumc(a);
    sumd(a);
    sumo(a);
}
