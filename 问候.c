#include <stdio.h>
int main()
{   int x;
    printf("*****Time*****\n1  morning\n2  afternoon\n3  night\nplease  enter  your  choice\n");
    scanf("%d",&x);
    switch (x)
    {
        case 1:printf("Good morning");break;
        case 2:printf("Good afternoon");break;
        case 3:printf("Good night");break;
        default:printf("Selection error");
    }
    return 0;
}
