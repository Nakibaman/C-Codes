#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<i;j++)
            printf("*");
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=2;j>=i;j--)
            printf("*");
        printf("\n");
    }
    return 0;
}
