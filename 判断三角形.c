#include <stdio.h>
int main()
{
    int a,b,c;
    printf("���������ε������ߣ�");
    scanf("%d,%d,%d",&a,&b,&c);
    if (a+b>c)
    {
        if(a==b||b==c||a==c)
        {
          if(a*a+b*b==c*c||a*a+c*c==b*b||c*c+b*b==a*a)
            printf("��������Ϊ����ֱ��������");
          if(a==b==c)
            printf("��������Ϊ�ȱ�������");
        }
        else
            printf("��������Ϊ����������");
    }
    if (a*a+b*b==c*c||a*a+c*c==b*b||c*c+b*b==a*a)
        printf("��������Ϊֱ��������");
    else
        printf("��������Ϊһ��������");
        return 0;
}
