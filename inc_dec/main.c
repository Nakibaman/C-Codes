#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    a=10;
    printf("%d",a++); //a is 10
    printf("%d",a); // a becomes 11
    a=10;
    printf("%d",++a);// a becomes 11
    return 0;
}
