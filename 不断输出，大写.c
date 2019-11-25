#include <stdio.h>
#include <ctype.h>
char myupper(char ch)
{
    if(ch>=97&&ch<=122)
        ch=toupper(ch);
    return ch;
}
int main()
{
    char ch;
    ch=getchar();
    while (ch!='@')
    {
        putchar(ch=myupper(ch));
        ch=getchar();
    }
return 0;
}

