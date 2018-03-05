#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    scanf("%d",&age);
    if(age>0 && age<5)
        printf("INFANT");
    else if(age>12 && age<20)
        printf("TEENAGER");
    else if(age>20 && age<50)
        printf("MATURE");
    else if(age>50)
        printf("OLD");
    else

    return 0;
}
