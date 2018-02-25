#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter three numbers-");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
        printf("a is the biggest number");
    else if(b>a&&b>c)
        printf("b is the biggest number");
    else
        printf("c is the biggest number");
    return 0;
}
