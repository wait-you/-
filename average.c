#include <stdio.h>
int main()
{
    int a[3][5]={{80,61,59,85,76},{75,65,61,87,77},{92,71,70,90,85}};
    int b=0,d=0,e=0,f=0,i,j = 0;
    for(i=0;i<3;i++)
        for(j=0;j<5;j++)
           { b=b+a[i][j];
           if(i==0)
                d=d+a[0][j];
            else if(i==1)
                e=e+a[1][j];
            else 
                f=f+a[2][j];
            }
    printf("全组分科的平均成绩为:%d\n",b/3);
    printf("各科总平均成绩：\nMath:%d\nC:%d\nFpxpro:%d",d/5,e/5,f/5);

syetem("pause");
}