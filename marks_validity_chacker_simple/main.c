#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int mark[5];
    printf("Enter the array elements -\n");
    for(i=0;i<=4;i++)
        scanf("%d",&mark[i]);
    printf("The array elements are -\n");
    for(i=0;i<=4;i++)
        printf("%d\n",mark[i]);

    printf("The valid and invalid marks are-\n");
    for(i=0;i<=4;i++)
    {
        if(mark[i]>=0&&mark[i]<=100)
            printf("%d is valid mark",mark[i]);
        else
            printf("%d is invalid mark",mark[i]);

        printf("\n");
    }
    return 0;
}
