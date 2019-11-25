#include <stdio.h>
int fac(int a)
 {
    int b;
    if(a<0)
	      printf("x<0,data error!");
    else if(a==0||a==1)
	      b=1;
    else  b=fac(a-1)*a;
    return b;
 }
int main()
 {
    int x,y;
    printf("输入一个正整数:");
    scanf("%d",&x);
    y=fac(x);
    printf("%d",y);
    return 0;
}


