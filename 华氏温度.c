#include <stdio.h>
int main()
{
    float c,f=0;
   for( ;f<=300;f+=20)
    {   c=5.0/9*(f-32);
        printf("»ªÊÏÎÂ¶È£º%5.2f,ÉãÊÏÎÂ¶È£º%5.2f\n",f,c);
    }
 return 0;
}
