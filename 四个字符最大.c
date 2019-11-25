#include <stdio.h>
char max2(char a,char b)
{
    if(a>=b)
        return a;
    else
        return b;
}

char max4(char a,char b,char c,char d)
{

    char v;
    v=max2(a,b);
    v=max2(v,c);
    v=max2(v,d);
    return v;
}

int main()
{
    char a,b,c,d;
    char max;
    printf("ÊäÈëËÄ¸ö×Ö·û£º");
    scanf("%c,%c,%c,%c",&a,&b,&c,&d);
    max=max4(a,b,c,d);
    printf("%c",max);

}

