#include <stdio.h>
int main()
{
    int x, y, t;
    printf( "Input x,y\n" );
    scanf( "%d,%d", &x, &y );
    printf( "Before exchange %d,%d\n", x, y );
    t = x, x = y, y = t;
    printf( "After exchange %d,%d", x, y );
    return 0;
}