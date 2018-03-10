#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,sum,n;
    int a[5];

    printf("Enter the number of students-\n");
    scanf("%d",&n);

    printf("Enter the array elements -\n");
    for(i=0;i<=n-1;i++)
        scanf("%d",&a[i]);

    printf("The array elements are -\n");
    for(i=0;i<=n-1;i++)
        printf("%d\n",a[i]);

    sum=0;
    for(i=0;i<=n-1;i++)
        sum=sum+a[i];

    printf("The sum of array elements are - %d",sum);

    return 0;
}
