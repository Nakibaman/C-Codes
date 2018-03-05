#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    i=0;
    while(i<=10)
    {
        if(i%3==0)
        printf("%d\n",i);
        i=i+1;
    }

    return 0;
}
