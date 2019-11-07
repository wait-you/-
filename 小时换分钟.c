#include <stdio.h>
int main()
{
    int minute = 560, hour;
    hour       = ( ( minute - minute % 60 ) / 60 );
    minute     = (minute % 60 );
    printf("%d:%d",hour,minute);
}