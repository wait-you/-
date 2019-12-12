#include <stdio.h>
#include <string.h>
int main()
{
    char na[20],nal[5][20]; 
    int i,j,k;
    printf("input country's name:\n"); 
    for(i=0;i<5;i++)
        gets(nal[i]);
    printf("\n");
    for(i=0;i<5;i++)
        { 
            k=i;
            strcpy(na,nal[i]);
            for(j=i+1;j<5;j++)
                if(strcmp(nal[j],na)<0) 
                    {
                        k=j;
                        strcpy(na,nal[j]);
                    } 
            if(k!=i)
                {
                strcpy(na,nal[i]);
                strcpy(nal[i],nal[k]);
                strcpy(nal[k],na);
                }
            puts(nal[i]);
        }
    system("pause");
} 