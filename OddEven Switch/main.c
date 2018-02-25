#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Enter a number -");
    scanf("%d",&a);
    b=a%2;
    switch(b){
    case 0:
        printf("The number is Even");
        break;
    case 1:
        printf("The number is Odd");
    }
    return 0;
}
