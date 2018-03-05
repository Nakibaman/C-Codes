#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    scanf("%d",&age);
    if(age>12 && age<20)
        printf("TeenAger");
    else
        printf("Not a Teenager");
    return 0;
}
