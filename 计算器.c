#include <stdio.h>
int main()
{   int z;
    float x,y,w;
    printf("�û������һ���������� ");
    scanf("%f",&x);
    printf("�û�����ڶ����������� ");
    scanf("%f",&y);
    printf("ѡ���������������ţ� \n1: �ӷ�\n2������\n3: �˷�\n4: ����\n�����룺 " );
    scanf("%d",&z);
    switch (z)
   {
    case 1:w=x+y;printf("  %f  ����  %f  ����  %f  ",x,y,w);break;
    case 2:w=x-y;printf("  %f  ��ȥ  %f  ����  %f  ",x,y,w);break;
    case 3:w=x*y;printf("  %f  ����  %f  ����  %f  ",x,y,w);break;
    case 4:w=x/y;printf("  %f  ����  %f  ����  %f  ",x,y,w);
   }
 return 0;
}
