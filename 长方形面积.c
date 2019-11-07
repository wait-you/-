#include <stdio.h>
int main()
{
    int l, w, s;
    printf( "Input length and width\n" );
    scanf( "%d,%d", &l, &w );
    s = l * w;
    printf("the area of the rectangle is %d",s);
    return 0;
}