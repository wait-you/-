#include <stdio.h>
int fac(int a)
 {
    static int b;
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
    for(y=1;y<=x;y++)
    y=fac(x);
    printf("%d",y-1);
    return 0;
}
