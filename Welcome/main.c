#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Enter the first number -");
    scanf("%d",&a);
    printf("Enter the second number -");
    scanf("%d",&b);
    if(a==b)
        printf("Both numbers are equal");
    else if(a>b)
        printf("First Number is Bigger");
    else
        printf("Second Number is Bigger");
    return 0;
}
