#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,sum;
    int a[5]={1,2,3,4,5};

    sum=0;
    for(i=0;i<=4;i++)
        sum=sum+a[i];

    printf("The sum of array elements are - %d",sum);

    return 0;
}
