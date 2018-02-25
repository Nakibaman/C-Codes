#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter a number -");
    scanf("%d",&a);
    if(a%2==1)
        printf("The number is Odd");
    else
        printf("The number is Even");
    return 0;
}
