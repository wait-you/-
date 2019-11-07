#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, s;
    double area;
    printf( "Input a,b,c\n" );
    scanf( "%d,%d,%d", &a, &b, &c );
    if(a+b>c&&a+c>b&&b+c>a)
    {
        s = ( a + b + c ) / 2;
        area = sqrt( s*( s - a )*( s - b )*( s - c ) );
        printf( "Area is %lf", area );
    }
    else
        printf( "Input error!" );
    return 0;
}