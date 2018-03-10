#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    int mark[50];
    printf("Enter the number of students-\n");
    scanf("%d",&n);
    printf("Enter the array elements -\n");
    for(i=0;i<=n-1;i++)
        scanf("%d",&mark[i]);
    printf("The array elements are -\n");
    for(i=0;i<=n-1;i++)
        printf("%d\n",mark[i]);

    printf("The valid and invalid marks are-\n");
    for(i=0;i<=n-1;i++)
    {
        if(mark[i]>=0&&mark[i]<=100)
            printf("%d is valid mark",mark[i]);
        else
            printf("%d is invalid mark",mark[i]);

        printf("\n");
    }
    return 0;
}
