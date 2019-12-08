#include <stdio.h>
char level(int a)
{
    if(a>=85)
        return 'A';
    if(a>=70&&a<=84)
        return 'B';
    if(a>=60&&a<=69)
        return 'C';
    if(a<=60)
        return 'D';
}
int main()
{
    int a;
    char L;
    printf("输入一个成绩：");
    scanf("%d",&a);
    L=level(a);
    printf("%c",L);
    return 0;

}
