#include <stdio.h>
#define PI 3.14159
int main()
{
    float r, s;
    printf( "Input r\n" );
    scanf( "%f", &r );
    s = PI * r * r;
    printf( "The area is %f", s );
    return 0;
}