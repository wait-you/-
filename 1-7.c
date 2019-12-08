#include<stdio.h>
void week(int num)
{
    switch(num)
    {
        case 1:printf("mon");break;
        case 2:printf("tue");break;
        case 3:printf("wen");break;
        case 4:printf("thu");break;
        case 5:printf("fri");break;
        case 6:printf("sat");break;
        case 7:printf("sun");break;
        default :printf("error");
    }
 }
 int main()
 {
     int num;
     printf("输入1-7中的任意一个数：");
     scanf("%d",&num);
     week(num);
     return 0;
  }
